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
Coordinate181->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1101,0.0656,-0.0736});
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
HAnimJoint183->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint183->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment184 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment184->setName("l_metatarsal_2");
HAnimSegment184->setDEF("hanim_l_metatarsal_2");
CTransform* Transform185 = (CTransform *)(m_pScene.createNode("Transform"));
Transform185->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform186 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape187 = (CShape *)(m_pScene.createNode("Shape"));
Shape187->setUSE("HAnimJointShape");
Transform186->addChildren(*Shape187);

Transform185->addChildren(*Transform186);

HAnimSegment184->addChildren(*Transform185);

CShape* Shape188 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet189 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet189->setVertexCount(new int[1]{2});
CCoordinate* Coordinate190 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate190->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet189->setCoord(*Coordinate190);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 1
CColorRGBA* ColorRGBA191 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA191->setUSE("HAnimSegmentLineColorRGBA");
LineSet189->setColor(*ColorRGBA191);

Shape188->setGeometry(LineSet189);

HAnimSegment184->addChildren(*Shape188);

HAnimJoint183->addChildren(*HAnimSegment184);

CHAnimJoint* HAnimJoint192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint192->setName("l_metatarsophalangeal_2");
HAnimJoint192->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint192->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint192->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment193 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment193->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment193->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform194 = (CTransform *)(m_pScene.createNode("Transform"));
Transform194->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CTransform* Transform195 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape196 = (CShape *)(m_pScene.createNode("Shape"));
Shape196->setUSE("HAnimJointShape");
Transform195->addChildren(*Shape196);

Transform194->addChildren(*Transform195);

HAnimSegment193->addChildren(*Transform194);

CShape* Shape197 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet198 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet198->setVertexCount(new int[1]{2});
CCoordinate* Coordinate199 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate199->setPoint(new float[3]{0.1101,0.0656,-0.0736});
LineSet198->setCoord(*Coordinate199);

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 1
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
Transform208->addChildren(*Shape209);

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
Transform226->addChildren(*Shape227);

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
Transform241->addChildren(*Shape242);

Transform240->addChildren(*Transform241);

HAnimSegment239->addChildren(*Transform240);

CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet244 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet244->setVertexCount(new int[1]{2});
CCoordinate* Coordinate245 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate245->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0801,0.0712,-0.0766});
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
HAnimJoint247->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint247->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment248 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment248->setName("r_metatarsal_2");
HAnimSegment248->setDEF("hanim_r_metatarsal_2");
CTransform* Transform249 = (CTransform *)(m_pScene.createNode("Transform"));
Transform249->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
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
Coordinate254->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet253->setCoord(*Coordinate254);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 1
CColorRGBA* ColorRGBA255 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA255->setUSE("HAnimSegmentLineColorRGBA");
LineSet253->setColor(*ColorRGBA255);

Shape252->setGeometry(LineSet253);

HAnimSegment248->addChildren(*Shape252);

HAnimJoint247->addChildren(*HAnimSegment248);

CHAnimJoint* HAnimJoint256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint256->setName("r_metatarsophalangeal_2");
HAnimJoint256->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint256->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint256->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment257 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment257->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment257->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform258 = (CTransform *)(m_pScene.createNode("Transform"));
Transform258->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
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
Coordinate263->setPoint(new float[3]{-0.0801,0.0712,-0.0766});
LineSet262->setCoord(*Coordinate263);

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 1
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
Transform272->addChildren(*Shape273);

Transform271->addChildren(*Transform272);

HAnimSegment270->addChildren(*Transform271);

CShape* Shape274 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet275 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet275->setVertexCount(new int[1]{2});
CCoordinate* Coordinate276 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate276->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet275->setCoord(*Coordinate276);

//from vl5 to vl4 vertices 2
CColorRGBA* ColorRGBA277 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA277->setUSE("HAnimSegmentLineColorRGBA");
LineSet275->setColor(*ColorRGBA277);

Shape274->setGeometry(LineSet275);

HAnimSegment270->addChildren(*Shape274);

HAnimJoint269->addChildren(*HAnimSegment270);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setName("vl4");
HAnimJoint278->setDEF("hanim_vl4");
HAnimJoint278->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint278->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint278->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment279->setName("l4");
HAnimSegment279->setDEF("hanim_l4");
CTransform* Transform280 = (CTransform *)(m_pScene.createNode("Transform"));
Transform280->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
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
Coordinate285->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet284->setCoord(*Coordinate285);

//from vl4 to vl3 vertices 2
CColorRGBA* ColorRGBA286 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA286->setUSE("HAnimSegmentLineColorRGBA");
LineSet284->setColor(*ColorRGBA286);

Shape283->setGeometry(LineSet284);

HAnimSegment279->addChildren(*Shape283);

HAnimJoint278->addChildren(*HAnimSegment279);

CHAnimJoint* HAnimJoint287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint287->setName("vl3");
HAnimJoint287->setDEF("hanim_vl3");
HAnimJoint287->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint287->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint287->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment288->setName("l3");
HAnimSegment288->setDEF("hanim_l3");
CTransform* Transform289 = (CTransform *)(m_pScene.createNode("Transform"));
Transform289->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
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
Coordinate294->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet293->setCoord(*Coordinate294);

//from vl3 to vl2 vertices 2
CColorRGBA* ColorRGBA295 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA295->setUSE("HAnimSegmentLineColorRGBA");
LineSet293->setColor(*ColorRGBA295);

Shape292->setGeometry(LineSet293);

HAnimSegment288->addChildren(*Shape292);

CHAnimSite* HAnimSite296 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite296->setName("l_rib10_pt");
HAnimSite296->setDEF("hanim_l_rib10_pt");
HAnimSite296->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor297 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor297->setDescription("HAnimSite l_rib10_pt");
HAnimSite296->addChildren(*TouchSensor297);

CShape* Shape298 = (CShape *)(m_pScene.createNode("Shape"));
Shape298->setUSE("HAnimSiteShape");
HAnimSite296->addChildren(*Shape298);

HAnimSegment288->addChildren(*HAnimSite296);

CHAnimSite* HAnimSite299 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite299->setName("r_rib10_pt");
HAnimSite299->setDEF("hanim_r_rib10_pt");
HAnimSite299->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor300 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor300->setDescription("HAnimSite r_rib10_pt");
HAnimSite299->addChildren(*TouchSensor300);

CShape* Shape301 = (CShape *)(m_pScene.createNode("Shape"));
Shape301->setUSE("HAnimSiteShape");
HAnimSite299->addChildren(*Shape301);

HAnimSegment288->addChildren(*HAnimSite299);

CHAnimSite* HAnimSite302 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite302->setName("spine_2_middle_back_pt");
HAnimSite302->setDEF("hanim_spine_2_middle_back_pt");
CTouchSensor* TouchSensor303 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor303->setDescription("HAnimSite spine_2_middle_back_pt");
HAnimSite302->addChildren(*TouchSensor303);

CShape* Shape304 = (CShape *)(m_pScene.createNode("Shape"));
Shape304->setUSE("HAnimSiteShape");
HAnimSite302->addChildren(*Shape304);

HAnimSegment288->addChildren(*HAnimSite302);

HAnimJoint287->addChildren(*HAnimSegment288);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setName("vl2");
HAnimJoint305->setDEF("hanim_vl2");
HAnimJoint305->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint305->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint305->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment306->setName("l2");
HAnimSegment306->setDEF("hanim_l2");
CTransform* Transform307 = (CTransform *)(m_pScene.createNode("Transform"));
Transform307->setTranslation(new float[3]{0.0045,1.1546,-0.08});
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
Coordinate312->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet311->setCoord(*Coordinate312);

//from vl2 to vl1 vertices 2
CColorRGBA* ColorRGBA313 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA313->setUSE("HAnimSegmentLineColorRGBA");
LineSet311->setColor(*ColorRGBA313);

Shape310->setGeometry(LineSet311);

HAnimSegment306->addChildren(*Shape310);

HAnimJoint305->addChildren(*HAnimSegment306);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setName("vl1");
HAnimJoint314->setDEF("hanim_vl1");
HAnimJoint314->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint314->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint314->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment315->setName("l1");
HAnimSegment315->setDEF("hanim_l1");
CTransform* Transform316 = (CTransform *)(m_pScene.createNode("Transform"));
Transform316->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CTransform* Transform317 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape318 = (CShape *)(m_pScene.createNode("Shape"));
Shape318->setUSE("HAnimJointShape");
Transform317->addChildren(*Shape318);

Transform316->addChildren(*Transform317);

HAnimSegment315->addChildren(*Transform316);

CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet320 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet320->setVertexCount(new int[1]{2});
CCoordinate* Coordinate321 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate321->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet320->setCoord(*Coordinate321);

//from vl1 to vt12 vertices 2
CColorRGBA* ColorRGBA322 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA322->setUSE("HAnimSegmentLineColorRGBA");
LineSet320->setColor(*ColorRGBA322);

Shape319->setGeometry(LineSet320);

HAnimSegment315->addChildren(*Shape319);

HAnimJoint314->addChildren(*HAnimSegment315);

CHAnimJoint* HAnimJoint323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint323->setName("vt12");
HAnimJoint323->setDEF("hanim_vt12");
HAnimJoint323->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint323->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint323->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment324 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment324->setName("t12");
HAnimSegment324->setDEF("hanim_t12");
CTransform* Transform325 = (CTransform *)(m_pScene.createNode("Transform"));
Transform325->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CTransform* Transform326 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape327 = (CShape *)(m_pScene.createNode("Shape"));
Shape327->setUSE("HAnimJointShape");
Transform326->addChildren(*Shape327);

Transform325->addChildren(*Transform326);

HAnimSegment324->addChildren(*Transform325);

CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet329 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet329->setVertexCount(new int[1]{2});
CCoordinate* Coordinate330 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate330->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet329->setCoord(*Coordinate330);

//from vt12 to vt11 vertices 2
CColorRGBA* ColorRGBA331 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA331->setUSE("HAnimSegmentLineColorRGBA");
LineSet329->setColor(*ColorRGBA331);

Shape328->setGeometry(LineSet329);

HAnimSegment324->addChildren(*Shape328);

HAnimJoint323->addChildren(*HAnimSegment324);

CHAnimJoint* HAnimJoint332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint332->setName("vt11");
HAnimJoint332->setDEF("hanim_vt11");
HAnimJoint332->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint332->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint332->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment333 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment333->setName("t11");
HAnimSegment333->setDEF("hanim_t11");
CTransform* Transform334 = (CTransform *)(m_pScene.createNode("Transform"));
Transform334->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CTransform* Transform335 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape336 = (CShape *)(m_pScene.createNode("Shape"));
Shape336->setUSE("HAnimJointShape");
Transform335->addChildren(*Shape336);

Transform334->addChildren(*Transform335);

HAnimSegment333->addChildren(*Transform334);

CShape* Shape337 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet338 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet338->setVertexCount(new int[1]{2});
CCoordinate* Coordinate339 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate339->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet338->setCoord(*Coordinate339);

//from vt11 to vt10 vertices 2
CColorRGBA* ColorRGBA340 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA340->setUSE("HAnimSegmentLineColorRGBA");
LineSet338->setColor(*ColorRGBA340);

Shape337->setGeometry(LineSet338);

HAnimSegment333->addChildren(*Shape337);

CHAnimSite* HAnimSite341 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite341->setName("substernale_pt");
HAnimSite341->setDEF("hanim_substernale_pt");
HAnimSite341->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor342 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor342->setDescription("HAnimSite substernale_pt");
HAnimSite341->addChildren(*TouchSensor342);

CShape* Shape343 = (CShape *)(m_pScene.createNode("Shape"));
Shape343->setUSE("HAnimSiteShape");
HAnimSite341->addChildren(*Shape343);

HAnimSegment333->addChildren(*HAnimSite341);

HAnimJoint332->addChildren(*HAnimSegment333);

CHAnimJoint* HAnimJoint344 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint344->setName("vt10");
HAnimJoint344->setDEF("hanim_vt10");
HAnimJoint344->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint344->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint344->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment345 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment345->setName("t10");
HAnimSegment345->setDEF("hanim_t10");
CTransform* Transform346 = (CTransform *)(m_pScene.createNode("Transform"));
Transform346->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CTransform* Transform347 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape348 = (CShape *)(m_pScene.createNode("Shape"));
Shape348->setUSE("HAnimJointShape");
Transform347->addChildren(*Shape348);

Transform346->addChildren(*Transform347);

HAnimSegment345->addChildren(*Transform346);

CShape* Shape349 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet350 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet350->setVertexCount(new int[1]{2});
CCoordinate* Coordinate351 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate351->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet350->setCoord(*Coordinate351);

//from vt10 to vt9 vertices 2
CColorRGBA* ColorRGBA352 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA352->setUSE("HAnimSegmentLineColorRGBA");
LineSet350->setColor(*ColorRGBA352);

Shape349->setGeometry(LineSet350);

HAnimSegment345->addChildren(*Shape349);

CHAnimSite* HAnimSite353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite353->setName("l_thelion_pt");
HAnimSite353->setDEF("hanim_l_thelion_pt");
HAnimSite353->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor354 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor354->setDescription("HAnimSite l_thelion_pt");
HAnimSite353->addChildren(*TouchSensor354);

CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
Shape355->setUSE("HAnimSiteShape");
HAnimSite353->addChildren(*Shape355);

HAnimSegment345->addChildren(*HAnimSite353);

CHAnimSite* HAnimSite356 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite356->setName("r_thelion_pt");
HAnimSite356->setDEF("hanim_r_thelion_pt");
HAnimSite356->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor357 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor357->setDescription("HAnimSite r_thelion_pt");
HAnimSite356->addChildren(*TouchSensor357);

CShape* Shape358 = (CShape *)(m_pScene.createNode("Shape"));
Shape358->setUSE("HAnimSiteShape");
HAnimSite356->addChildren(*Shape358);

HAnimSegment345->addChildren(*HAnimSite356);

HAnimJoint344->addChildren(*HAnimSegment345);

CHAnimJoint* HAnimJoint359 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint359->setName("vt9");
HAnimJoint359->setDEF("hanim_vt9");
HAnimJoint359->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint359->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint359->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment360 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment360->setName("t9");
HAnimSegment360->setDEF("hanim_t9");
CTransform* Transform361 = (CTransform *)(m_pScene.createNode("Transform"));
Transform361->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CTransform* Transform362 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape363 = (CShape *)(m_pScene.createNode("Shape"));
Shape363->setUSE("HAnimJointShape");
Transform362->addChildren(*Shape363);

Transform361->addChildren(*Transform362);

HAnimSegment360->addChildren(*Transform361);

CShape* Shape364 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet365 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet365->setVertexCount(new int[1]{2});
CCoordinate* Coordinate366 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate366->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet365->setCoord(*Coordinate366);

//from vt9 to vt8 vertices 2
CColorRGBA* ColorRGBA367 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA367->setUSE("HAnimSegmentLineColorRGBA");
LineSet365->setColor(*ColorRGBA367);

Shape364->setGeometry(LineSet365);

HAnimSegment360->addChildren(*Shape364);

HAnimJoint359->addChildren(*HAnimSegment360);

CHAnimJoint* HAnimJoint368 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint368->setName("vt8");
HAnimJoint368->setDEF("hanim_vt8");
HAnimJoint368->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint368->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint368->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment369 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment369->setName("t8");
HAnimSegment369->setDEF("hanim_t8");
CTransform* Transform370 = (CTransform *)(m_pScene.createNode("Transform"));
Transform370->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CTransform* Transform371 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape372 = (CShape *)(m_pScene.createNode("Shape"));
Shape372->setUSE("HAnimJointShape");
Transform371->addChildren(*Shape372);

Transform370->addChildren(*Transform371);

HAnimSegment369->addChildren(*Transform370);

CShape* Shape373 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet374 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet374->setVertexCount(new int[1]{2});
CCoordinate* Coordinate375 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate375->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet374->setCoord(*Coordinate375);

//from vt8 to vt7 vertices 2
CColorRGBA* ColorRGBA376 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA376->setUSE("HAnimSegmentLineColorRGBA");
LineSet374->setColor(*ColorRGBA376);

Shape373->setGeometry(LineSet374);

HAnimSegment369->addChildren(*Shape373);

HAnimJoint368->addChildren(*HAnimSegment369);

CHAnimJoint* HAnimJoint377 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint377->setName("vt7");
HAnimJoint377->setDEF("hanim_vt7");
HAnimJoint377->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint377->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint377->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment378 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment378->setName("t7");
HAnimSegment378->setDEF("hanim_t7");
CTransform* Transform379 = (CTransform *)(m_pScene.createNode("Transform"));
Transform379->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CTransform* Transform380 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape381 = (CShape *)(m_pScene.createNode("Shape"));
Shape381->setUSE("HAnimJointShape");
Transform380->addChildren(*Shape381);

Transform379->addChildren(*Transform380);

HAnimSegment378->addChildren(*Transform379);

CShape* Shape382 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet383 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet383->setVertexCount(new int[1]{2});
CCoordinate* Coordinate384 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate384->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet383->setCoord(*Coordinate384);

//from vt7 to vt6 vertices 2
CColorRGBA* ColorRGBA385 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA385->setUSE("HAnimSegmentLineColorRGBA");
LineSet383->setColor(*ColorRGBA385);

Shape382->setGeometry(LineSet383);

HAnimSegment378->addChildren(*Shape382);

CHAnimSite* HAnimSite386 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite386->setName("l_chest_midsagittal_plane_pt");
HAnimSite386->setDEF("hanim_l_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor387 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor387->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite386->addChildren(*TouchSensor387);

CShape* Shape388 = (CShape *)(m_pScene.createNode("Shape"));
Shape388->setUSE("HAnimSiteShape");
HAnimSite386->addChildren(*Shape388);

HAnimSegment378->addChildren(*HAnimSite386);

CHAnimSite* HAnimSite389 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite389->setName("mesosternale_pt");
HAnimSite389->setDEF("hanim_mesosternale_pt");
CTouchSensor* TouchSensor390 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor390->setDescription("HAnimSite mesosternale_pt");
HAnimSite389->addChildren(*TouchSensor390);

CShape* Shape391 = (CShape *)(m_pScene.createNode("Shape"));
Shape391->setUSE("HAnimSiteShape");
HAnimSite389->addChildren(*Shape391);

HAnimSegment378->addChildren(*HAnimSite389);

CHAnimSite* HAnimSite392 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite392->setName("r_chest_midsagittal_plane_pt");
HAnimSite392->setDEF("hanim_r_chest_midsagittal_plane_pt");
CTouchSensor* TouchSensor393 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor393->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite392->addChildren(*TouchSensor393);

CShape* Shape394 = (CShape *)(m_pScene.createNode("Shape"));
Shape394->setUSE("HAnimSiteShape");
HAnimSite392->addChildren(*Shape394);

HAnimSegment378->addChildren(*HAnimSite392);

CHAnimSite* HAnimSite395 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite395->setName("rear_center_midsagittal_plane_pt");
HAnimSite395->setDEF("hanim_rear_center_midsagittal_plane_pt");
CTouchSensor* TouchSensor396 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor396->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite395->addChildren(*TouchSensor396);

CShape* Shape397 = (CShape *)(m_pScene.createNode("Shape"));
Shape397->setUSE("HAnimSiteShape");
HAnimSite395->addChildren(*Shape397);

HAnimSegment378->addChildren(*HAnimSite395);

HAnimJoint377->addChildren(*HAnimSegment378);

CHAnimJoint* HAnimJoint398 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint398->setName("vt6");
HAnimJoint398->setDEF("hanim_vt6");
HAnimJoint398->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint398->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint398->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment399 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment399->setName("t6");
HAnimSegment399->setDEF("hanim_t6");
CTransform* Transform400 = (CTransform *)(m_pScene.createNode("Transform"));
Transform400->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CTransform* Transform401 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape402 = (CShape *)(m_pScene.createNode("Shape"));
Shape402->setUSE("HAnimJointShape");
Transform401->addChildren(*Shape402);

Transform400->addChildren(*Transform401);

HAnimSegment399->addChildren(*Transform400);

CShape* Shape403 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet404 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet404->setVertexCount(new int[1]{2});
CCoordinate* Coordinate405 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate405->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet404->setCoord(*Coordinate405);

//from vt6 to vt5 vertices 2
CColorRGBA* ColorRGBA406 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA406->setUSE("HAnimSegmentLineColorRGBA");
LineSet404->setColor(*ColorRGBA406);

Shape403->setGeometry(LineSet404);

HAnimSegment399->addChildren(*Shape403);

CHAnimSite* HAnimSite407 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite407->setName("spine_1_middle_back_pt");
HAnimSite407->setDEF("hanim_spine_1_middle_back_pt");
CTouchSensor* TouchSensor408 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor408->setDescription("HAnimSite spine_1_middle_back_pt");
HAnimSite407->addChildren(*TouchSensor408);

CShape* Shape409 = (CShape *)(m_pScene.createNode("Shape"));
Shape409->setUSE("HAnimSiteShape");
HAnimSite407->addChildren(*Shape409);

HAnimSegment399->addChildren(*HAnimSite407);

HAnimJoint398->addChildren(*HAnimSegment399);

CHAnimJoint* HAnimJoint410 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint410->setName("vt5");
HAnimJoint410->setDEF("hanim_vt5");
HAnimJoint410->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint410->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint410->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment411 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment411->setName("t5");
HAnimSegment411->setDEF("hanim_t5");
CTransform* Transform412 = (CTransform *)(m_pScene.createNode("Transform"));
Transform412->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CTransform* Transform413 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape414 = (CShape *)(m_pScene.createNode("Shape"));
Shape414->setUSE("HAnimJointShape");
Transform413->addChildren(*Shape414);

Transform412->addChildren(*Transform413);

HAnimSegment411->addChildren(*Transform412);

CShape* Shape415 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet416 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet416->setVertexCount(new int[1]{2});
CCoordinate* Coordinate417 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate417->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet416->setCoord(*Coordinate417);

//from vt5 to vt4 vertices 2
CColorRGBA* ColorRGBA418 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA418->setUSE("HAnimSegmentLineColorRGBA");
LineSet416->setColor(*ColorRGBA418);

Shape415->setGeometry(LineSet416);

HAnimSegment411->addChildren(*Shape415);

HAnimJoint410->addChildren(*HAnimSegment411);

CHAnimJoint* HAnimJoint419 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint419->setName("vt4");
HAnimJoint419->setDEF("hanim_vt4");
HAnimJoint419->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint419->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint419->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment420 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment420->setName("t4");
HAnimSegment420->setDEF("hanim_t4");
CTransform* Transform421 = (CTransform *)(m_pScene.createNode("Transform"));
Transform421->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CTransform* Transform422 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape423 = (CShape *)(m_pScene.createNode("Shape"));
Shape423->setUSE("HAnimJointShape");
Transform422->addChildren(*Shape423);

Transform421->addChildren(*Transform422);

HAnimSegment420->addChildren(*Transform421);

CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet425 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet425->setVertexCount(new int[1]{2});
CCoordinate* Coordinate426 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate426->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet425->setCoord(*Coordinate426);

//from vt4 to vt3 vertices 2
CColorRGBA* ColorRGBA427 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA427->setUSE("HAnimSegmentLineColorRGBA");
LineSet425->setColor(*ColorRGBA427);

Shape424->setGeometry(LineSet425);

HAnimSegment420->addChildren(*Shape424);

HAnimJoint419->addChildren(*HAnimSegment420);

CHAnimJoint* HAnimJoint428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint428->setName("vt3");
HAnimJoint428->setDEF("hanim_vt3");
HAnimJoint428->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint428->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint428->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment429 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment429->setName("t3");
HAnimSegment429->setDEF("hanim_t3");
CTransform* Transform430 = (CTransform *)(m_pScene.createNode("Transform"));
Transform430->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CTransform* Transform431 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape432 = (CShape *)(m_pScene.createNode("Shape"));
Shape432->setUSE("HAnimJointShape");
Transform431->addChildren(*Shape432);

Transform430->addChildren(*Transform431);

HAnimSegment429->addChildren(*Transform430);

CShape* Shape433 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet434 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet434->setVertexCount(new int[1]{2});
CCoordinate* Coordinate435 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate435->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet434->setCoord(*Coordinate435);

//from vt3 to vt2 vertices 2
CColorRGBA* ColorRGBA436 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA436->setUSE("HAnimSegmentLineColorRGBA");
LineSet434->setColor(*ColorRGBA436);

Shape433->setGeometry(LineSet434);

HAnimSegment429->addChildren(*Shape433);

HAnimJoint428->addChildren(*HAnimSegment429);

CHAnimJoint* HAnimJoint437 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint437->setName("vt2");
HAnimJoint437->setDEF("hanim_vt2");
HAnimJoint437->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint437->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint437->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment438 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment438->setName("t2");
HAnimSegment438->setDEF("hanim_t2");
CTransform* Transform439 = (CTransform *)(m_pScene.createNode("Transform"));
Transform439->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CTransform* Transform440 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape441 = (CShape *)(m_pScene.createNode("Shape"));
Shape441->setUSE("HAnimJointShape");
Transform440->addChildren(*Shape441);

Transform439->addChildren(*Transform440);

HAnimSegment438->addChildren(*Transform439);

CShape* Shape442 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet443 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet443->setVertexCount(new int[1]{2});
CCoordinate* Coordinate444 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate444->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet443->setCoord(*Coordinate444);

//from vt2 to vt1 vertices 2
CColorRGBA* ColorRGBA445 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA445->setUSE("HAnimSegmentLineColorRGBA");
LineSet443->setColor(*ColorRGBA445);

Shape442->setGeometry(LineSet443);

HAnimSegment438->addChildren(*Shape442);

CHAnimSite* HAnimSite446 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite446->setName("cervicale_pt");
HAnimSite446->setDEF("hanim_cervicale_pt");
HAnimSite446->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor447 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor447->setDescription("HAnimSite cervicale_pt");
HAnimSite446->addChildren(*TouchSensor447);

CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
Shape448->setUSE("HAnimSiteShape");
HAnimSite446->addChildren(*Shape448);

HAnimSegment438->addChildren(*HAnimSite446);

CHAnimSite* HAnimSite449 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite449->setName("suprasternale_pt");
HAnimSite449->setDEF("hanim_suprasternale_pt");
HAnimSite449->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor450 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor450->setDescription("HAnimSite suprasternale_pt");
HAnimSite449->addChildren(*TouchSensor450);

CShape* Shape451 = (CShape *)(m_pScene.createNode("Shape"));
Shape451->setUSE("HAnimSiteShape");
HAnimSite449->addChildren(*Shape451);

HAnimSegment438->addChildren(*HAnimSite449);

HAnimJoint437->addChildren(*HAnimSegment438);

CHAnimJoint* HAnimJoint452 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint452->setName("vt1");
HAnimJoint452->setDEF("hanim_vt1");
HAnimJoint452->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint452->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint452->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment453 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment453->setName("t1");
HAnimSegment453->setDEF("hanim_t1");
CTransform* Transform454 = (CTransform *)(m_pScene.createNode("Transform"));
Transform454->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CTransform* Transform455 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape456 = (CShape *)(m_pScene.createNode("Shape"));
Shape456->setUSE("HAnimJointShape");
Transform455->addChildren(*Shape456);

Transform454->addChildren(*Transform455);

HAnimSegment453->addChildren(*Transform454);

CShape* Shape457 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet458 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet458->setVertexCount(new int[1]{2});
CCoordinate* Coordinate459 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate459->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet458->setCoord(*Coordinate459);

//from vt1 to vc7 vertices 2
CColorRGBA* ColorRGBA460 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA460->setUSE("HAnimSegmentLineColorRGBA");
LineSet458->setColor(*ColorRGBA460);

Shape457->setGeometry(LineSet458);

HAnimSegment453->addChildren(*Shape457);

CHAnimSite* HAnimSite461 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite461->setName("l_neck_base_pt");
HAnimSite461->setDEF("hanim_l_neck_base_pt");
HAnimSite461->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor462 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor462->setDescription("HAnimSite l_neck_base_pt");
HAnimSite461->addChildren(*TouchSensor462);

CShape* Shape463 = (CShape *)(m_pScene.createNode("Shape"));
Shape463->setUSE("HAnimSiteShape");
HAnimSite461->addChildren(*Shape463);

HAnimSegment453->addChildren(*HAnimSite461);

CHAnimSite* HAnimSite464 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite464->setName("r_neck_base_pt");
HAnimSite464->setDEF("hanim_r_neck_base_pt");
HAnimSite464->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor465 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor465->setDescription("HAnimSite r_neck_base_pt");
HAnimSite464->addChildren(*TouchSensor465);

CShape* Shape466 = (CShape *)(m_pScene.createNode("Shape"));
Shape466->setUSE("HAnimSiteShape");
HAnimSite464->addChildren(*Shape466);

HAnimSegment453->addChildren(*HAnimSite464);

CShape* Shape467 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet468 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet468->setVertexCount(new int[1]{2});
CCoordinate* Coordinate469 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate469->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet468->setCoord(*Coordinate469);

//from vt1 to l_sternoclavicular vertices 2
CColorRGBA* ColorRGBA470 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA470->setUSE("HAnimSegmentLineColorRGBA");
LineSet468->setColor(*ColorRGBA470);

Shape467->setGeometry(LineSet468);

HAnimSegment453->addChildren(*Shape467);

CHAnimSite* HAnimSite471 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite471->setName("l_acromion_pt");
HAnimSite471->setDEF("hanim_l_acromion_pt");
HAnimSite471->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor472 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor472->setDescription("HAnimSite l_acromion_pt");
HAnimSite471->addChildren(*TouchSensor472);

CShape* Shape473 = (CShape *)(m_pScene.createNode("Shape"));
Shape473->setUSE("HAnimSiteShape");
HAnimSite471->addChildren(*Shape473);

HAnimSegment453->addChildren(*HAnimSite471);

CHAnimSite* HAnimSite474 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite474->setName("l_axilla_distal_pt");
HAnimSite474->setDEF("hanim_l_axilla_distal_pt");
HAnimSite474->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor475 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor475->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite474->addChildren(*TouchSensor475);

CShape* Shape476 = (CShape *)(m_pScene.createNode("Shape"));
Shape476->setUSE("HAnimSiteShape");
HAnimSite474->addChildren(*Shape476);

HAnimSegment453->addChildren(*HAnimSite474);

CHAnimSite* HAnimSite477 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite477->setName("l_axilla_posterior_folds_pt");
HAnimSite477->setDEF("hanim_l_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor478 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor478->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite477->addChildren(*TouchSensor478);

CShape* Shape479 = (CShape *)(m_pScene.createNode("Shape"));
Shape479->setUSE("HAnimSiteShape");
HAnimSite477->addChildren(*Shape479);

HAnimSegment453->addChildren(*HAnimSite477);

CHAnimSite* HAnimSite480 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite480->setName("l_axilla_proximal_pt");
HAnimSite480->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite480->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor481 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor481->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite480->addChildren(*TouchSensor481);

CShape* Shape482 = (CShape *)(m_pScene.createNode("Shape"));
Shape482->setUSE("HAnimSiteShape");
HAnimSite480->addChildren(*Shape482);

HAnimSegment453->addChildren(*HAnimSite480);

CHAnimSite* HAnimSite483 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite483->setName("l_clavicale_pt");
HAnimSite483->setDEF("hanim_l_clavicale_pt");
HAnimSite483->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor484 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor484->setDescription("HAnimSite l_clavicale_pt");
HAnimSite483->addChildren(*TouchSensor484);

CShape* Shape485 = (CShape *)(m_pScene.createNode("Shape"));
Shape485->setUSE("HAnimSiteShape");
HAnimSite483->addChildren(*Shape485);

HAnimSegment453->addChildren(*HAnimSite483);

CShape* Shape486 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet487 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet487->setVertexCount(new int[1]{2});
CCoordinate* Coordinate488 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate488->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet487->setCoord(*Coordinate488);

//from vt1 to r_sternoclavicular vertices 2
CColorRGBA* ColorRGBA489 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA489->setUSE("HAnimSegmentLineColorRGBA");
LineSet487->setColor(*ColorRGBA489);

Shape486->setGeometry(LineSet487);

HAnimSegment453->addChildren(*Shape486);

CHAnimSite* HAnimSite490 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite490->setName("r_acromion_pt");
HAnimSite490->setDEF("hanim_r_acromion_pt");
HAnimSite490->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor491 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor491->setDescription("HAnimSite r_acromion_pt");
HAnimSite490->addChildren(*TouchSensor491);

CShape* Shape492 = (CShape *)(m_pScene.createNode("Shape"));
Shape492->setUSE("HAnimSiteShape");
HAnimSite490->addChildren(*Shape492);

HAnimSegment453->addChildren(*HAnimSite490);

CHAnimSite* HAnimSite493 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite493->setName("r_axilla_distal_pt");
HAnimSite493->setDEF("hanim_r_axilla_distal_pt");
HAnimSite493->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor494 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor494->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite493->addChildren(*TouchSensor494);

CShape* Shape495 = (CShape *)(m_pScene.createNode("Shape"));
Shape495->setUSE("HAnimSiteShape");
HAnimSite493->addChildren(*Shape495);

HAnimSegment453->addChildren(*HAnimSite493);

CHAnimSite* HAnimSite496 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite496->setName("r_axilla_posterior_folds_pt");
HAnimSite496->setDEF("hanim_r_axilla_posterior_folds_pt");
CTouchSensor* TouchSensor497 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor497->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite496->addChildren(*TouchSensor497);

CShape* Shape498 = (CShape *)(m_pScene.createNode("Shape"));
Shape498->setUSE("HAnimSiteShape");
HAnimSite496->addChildren(*Shape498);

HAnimSegment453->addChildren(*HAnimSite496);

CHAnimSite* HAnimSite499 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite499->setName("r_axilla_proximal_pt");
HAnimSite499->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite499->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor500 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor500->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite499->addChildren(*TouchSensor500);

CShape* Shape501 = (CShape *)(m_pScene.createNode("Shape"));
Shape501->setUSE("HAnimSiteShape");
HAnimSite499->addChildren(*Shape501);

HAnimSegment453->addChildren(*HAnimSite499);

CHAnimSite* HAnimSite502 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite502->setName("r_clavicale_pt");
HAnimSite502->setDEF("hanim_r_clavicale_pt");
HAnimSite502->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor503 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor503->setDescription("HAnimSite r_clavicale_pt");
HAnimSite502->addChildren(*TouchSensor503);

CShape* Shape504 = (CShape *)(m_pScene.createNode("Shape"));
Shape504->setUSE("HAnimSiteShape");
HAnimSite502->addChildren(*Shape504);

HAnimSegment453->addChildren(*HAnimSite502);

HAnimJoint452->addChildren(*HAnimSegment453);

CHAnimJoint* HAnimJoint505 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint505->setName("vc7");
HAnimJoint505->setDEF("hanim_vc7");
HAnimJoint505->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint505->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint505->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment506 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment506->setName("c7");
HAnimSegment506->setDEF("hanim_c7");
CTransform* Transform507 = (CTransform *)(m_pScene.createNode("Transform"));
Transform507->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CTransform* Transform508 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
Shape509->setUSE("HAnimJointShape");
Transform508->addChildren(*Shape509);

Transform507->addChildren(*Transform508);

HAnimSegment506->addChildren(*Transform507);

CShape* Shape510 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet511 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet511->setVertexCount(new int[1]{2});
CCoordinate* Coordinate512 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate512->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet511->setCoord(*Coordinate512);

//from vc7 to vc6 vertices 2
CColorRGBA* ColorRGBA513 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA513->setUSE("HAnimSegmentLineColorRGBA");
LineSet511->setColor(*ColorRGBA513);

Shape510->setGeometry(LineSet511);

HAnimSegment506->addChildren(*Shape510);

HAnimJoint505->addChildren(*HAnimSegment506);

CHAnimJoint* HAnimJoint514 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint514->setName("vc6");
HAnimJoint514->setDEF("hanim_vc6");
HAnimJoint514->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint514->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint514->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment515 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment515->setName("c6");
HAnimSegment515->setDEF("hanim_c6");
CTransform* Transform516 = (CTransform *)(m_pScene.createNode("Transform"));
Transform516->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CTransform* Transform517 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
Shape518->setUSE("HAnimJointShape");
Transform517->addChildren(*Shape518);

Transform516->addChildren(*Transform517);

HAnimSegment515->addChildren(*Transform516);

CShape* Shape519 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet520 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet520->setVertexCount(new int[1]{2});
CCoordinate* Coordinate521 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate521->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet520->setCoord(*Coordinate521);

//from vc6 to vc5 vertices 2
CColorRGBA* ColorRGBA522 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA522->setUSE("HAnimSegmentLineColorRGBA");
LineSet520->setColor(*ColorRGBA522);

Shape519->setGeometry(LineSet520);

HAnimSegment515->addChildren(*Shape519);

HAnimJoint514->addChildren(*HAnimSegment515);

CHAnimJoint* HAnimJoint523 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint523->setName("vc5");
HAnimJoint523->setDEF("hanim_vc5");
HAnimJoint523->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint523->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint523->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment524 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment524->setName("c5");
HAnimSegment524->setDEF("hanim_c5");
CTransform* Transform525 = (CTransform *)(m_pScene.createNode("Transform"));
Transform525->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CTransform* Transform526 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape527 = (CShape *)(m_pScene.createNode("Shape"));
Shape527->setUSE("HAnimJointShape");
Transform526->addChildren(*Shape527);

Transform525->addChildren(*Transform526);

HAnimSegment524->addChildren(*Transform525);

CShape* Shape528 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet529 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet529->setVertexCount(new int[1]{2});
CCoordinate* Coordinate530 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate530->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet529->setCoord(*Coordinate530);

//from vc5 to vc4 vertices 2
CColorRGBA* ColorRGBA531 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA531->setUSE("HAnimSegmentLineColorRGBA");
LineSet529->setColor(*ColorRGBA531);

Shape528->setGeometry(LineSet529);

HAnimSegment524->addChildren(*Shape528);

HAnimJoint523->addChildren(*HAnimSegment524);

CHAnimJoint* HAnimJoint532 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint532->setName("vc4");
HAnimJoint532->setDEF("hanim_vc4");
HAnimJoint532->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint532->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint532->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment533 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment533->setName("c4");
HAnimSegment533->setDEF("hanim_c4");
CTransform* Transform534 = (CTransform *)(m_pScene.createNode("Transform"));
Transform534->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CTransform* Transform535 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape536 = (CShape *)(m_pScene.createNode("Shape"));
Shape536->setUSE("HAnimJointShape");
Transform535->addChildren(*Shape536);

Transform534->addChildren(*Transform535);

HAnimSegment533->addChildren(*Transform534);

CShape* Shape537 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet538 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet538->setVertexCount(new int[1]{2});
CCoordinate* Coordinate539 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate539->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet538->setCoord(*Coordinate539);

//from vc4 to vc3 vertices 2
CColorRGBA* ColorRGBA540 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA540->setUSE("HAnimSegmentLineColorRGBA");
LineSet538->setColor(*ColorRGBA540);

Shape537->setGeometry(LineSet538);

HAnimSegment533->addChildren(*Shape537);

HAnimJoint532->addChildren(*HAnimSegment533);

CHAnimJoint* HAnimJoint541 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint541->setName("vc3");
HAnimJoint541->setDEF("hanim_vc3");
HAnimJoint541->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint541->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint541->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment542 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment542->setName("c3");
HAnimSegment542->setDEF("hanim_c3");
CTransform* Transform543 = (CTransform *)(m_pScene.createNode("Transform"));
Transform543->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CTransform* Transform544 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape545 = (CShape *)(m_pScene.createNode("Shape"));
Shape545->setUSE("HAnimJointShape");
Transform544->addChildren(*Shape545);

Transform543->addChildren(*Transform544);

HAnimSegment542->addChildren(*Transform543);

CShape* Shape546 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet547 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet547->setVertexCount(new int[1]{2});
CCoordinate* Coordinate548 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate548->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet547->setCoord(*Coordinate548);

//from vc3 to vc2 vertices 2
CColorRGBA* ColorRGBA549 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA549->setUSE("HAnimSegmentLineColorRGBA");
LineSet547->setColor(*ColorRGBA549);

Shape546->setGeometry(LineSet547);

HAnimSegment542->addChildren(*Shape546);

CHAnimSite* HAnimSite550 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite550->setName("adams_apple_pt");
HAnimSite550->setDEF("hanim_adams_apple_pt");
CTouchSensor* TouchSensor551 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor551->setDescription("HAnimSite adams_apple_pt");
HAnimSite550->addChildren(*TouchSensor551);

CShape* Shape552 = (CShape *)(m_pScene.createNode("Shape"));
Shape552->setUSE("HAnimSiteShape");
HAnimSite550->addChildren(*Shape552);

HAnimSegment542->addChildren(*HAnimSite550);

HAnimJoint541->addChildren(*HAnimSegment542);

CHAnimJoint* HAnimJoint553 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint553->setName("vc2");
HAnimJoint553->setDEF("hanim_vc2");
HAnimJoint553->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint553->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint553->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment554 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment554->setName("c2");
HAnimSegment554->setDEF("hanim_c2");
CTransform* Transform555 = (CTransform *)(m_pScene.createNode("Transform"));
Transform555->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CTransform* Transform556 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape557 = (CShape *)(m_pScene.createNode("Shape"));
Shape557->setUSE("HAnimJointShape");
Transform556->addChildren(*Shape557);

Transform555->addChildren(*Transform556);

HAnimSegment554->addChildren(*Transform555);

CShape* Shape558 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet559 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet559->setVertexCount(new int[1]{2});
CCoordinate* Coordinate560 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate560->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet559->setCoord(*Coordinate560);

//from vc2 to vc1 vertices 2
CColorRGBA* ColorRGBA561 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA561->setUSE("HAnimSegmentLineColorRGBA");
LineSet559->setColor(*ColorRGBA561);

Shape558->setGeometry(LineSet559);

HAnimSegment554->addChildren(*Shape558);

HAnimJoint553->addChildren(*HAnimSegment554);

CHAnimJoint* HAnimJoint562 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint562->setName("vc1");
HAnimJoint562->setDEF("hanim_vc1");
HAnimJoint562->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint562->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint562->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment563 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment563->setName("c1");
HAnimSegment563->setDEF("hanim_c1");
CTransform* Transform564 = (CTransform *)(m_pScene.createNode("Transform"));
Transform564->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CTransform* Transform565 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape566 = (CShape *)(m_pScene.createNode("Shape"));
Shape566->setUSE("HAnimJointShape");
Transform565->addChildren(*Shape566);

Transform564->addChildren(*Transform565);

HAnimSegment563->addChildren(*Transform564);

CShape* Shape567 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet568 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet568->setVertexCount(new int[1]{2});
CCoordinate* Coordinate569 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate569->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet568->setCoord(*Coordinate569);

//from vc1 to skullbase vertices 2
CColorRGBA* ColorRGBA570 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA570->setUSE("HAnimSegmentLineColorRGBA");
LineSet568->setColor(*ColorRGBA570);

Shape567->setGeometry(LineSet568);

HAnimSegment563->addChildren(*Shape567);

CHAnimSite* HAnimSite571 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite571->setName("glabella_pt");
HAnimSite571->setDEF("hanim_glabella_pt");
CTouchSensor* TouchSensor572 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor572->setDescription("HAnimSite glabella_pt");
HAnimSite571->addChildren(*TouchSensor572);

CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
Shape573->setUSE("HAnimSiteShape");
HAnimSite571->addChildren(*Shape573);

HAnimSegment563->addChildren(*HAnimSite571);

CHAnimSite* HAnimSite574 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite574->setName("l_ectocanthus_pt");
HAnimSite574->setDEF("hanim_l_ectocanthus_pt");
CTouchSensor* TouchSensor575 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor575->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite574->addChildren(*TouchSensor575);

CShape* Shape576 = (CShape *)(m_pScene.createNode("Shape"));
Shape576->setUSE("HAnimSiteShape");
HAnimSite574->addChildren(*Shape576);

HAnimSegment563->addChildren(*HAnimSite574);

CHAnimSite* HAnimSite577 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite577->setName("l_infraorbitale_pt");
HAnimSite577->setDEF("hanim_l_infraorbitale_pt");
HAnimSite577->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor578 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor578->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite577->addChildren(*TouchSensor578);

CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
Shape579->setUSE("HAnimSiteShape");
HAnimSite577->addChildren(*Shape579);

HAnimSegment563->addChildren(*HAnimSite577);

CHAnimSite* HAnimSite580 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite580->setName("l_tragion_pt");
HAnimSite580->setDEF("hanim_l_tragion_pt");
HAnimSite580->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor581 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor581->setDescription("HAnimSite l_tragion_pt");
HAnimSite580->addChildren(*TouchSensor581);

CShape* Shape582 = (CShape *)(m_pScene.createNode("Shape"));
Shape582->setUSE("HAnimSiteShape");
HAnimSite580->addChildren(*Shape582);

HAnimSegment563->addChildren(*HAnimSite580);

CHAnimSite* HAnimSite583 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite583->setName("nuchale_pt");
HAnimSite583->setDEF("hanim_nuchale_pt");
HAnimSite583->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor584 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor584->setDescription("HAnimSite nuchale_pt");
HAnimSite583->addChildren(*TouchSensor584);

CShape* Shape585 = (CShape *)(m_pScene.createNode("Shape"));
Shape585->setUSE("HAnimSiteShape");
HAnimSite583->addChildren(*Shape585);

HAnimSegment563->addChildren(*HAnimSite583);

CHAnimSite* HAnimSite586 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite586->setName("opisthocranion_pt");
HAnimSite586->setDEF("hanim_opisthocranion_pt");
CTouchSensor* TouchSensor587 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor587->setDescription("HAnimSite opisthocranion_pt");
HAnimSite586->addChildren(*TouchSensor587);

CShape* Shape588 = (CShape *)(m_pScene.createNode("Shape"));
Shape588->setUSE("HAnimSiteShape");
HAnimSite586->addChildren(*Shape588);

HAnimSegment563->addChildren(*HAnimSite586);

CHAnimSite* HAnimSite589 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite589->setName("r_ectocanthus_pt");
HAnimSite589->setDEF("hanim_r_ectocanthus_pt");
CTouchSensor* TouchSensor590 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor590->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite589->addChildren(*TouchSensor590);

CShape* Shape591 = (CShape *)(m_pScene.createNode("Shape"));
Shape591->setUSE("HAnimSiteShape");
HAnimSite589->addChildren(*Shape591);

HAnimSegment563->addChildren(*HAnimSite589);

CHAnimSite* HAnimSite592 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite592->setName("r_infraorbitale_pt");
HAnimSite592->setDEF("hanim_r_infraorbitale_pt");
HAnimSite592->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor593 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor593->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite592->addChildren(*TouchSensor593);

CShape* Shape594 = (CShape *)(m_pScene.createNode("Shape"));
Shape594->setUSE("HAnimSiteShape");
HAnimSite592->addChildren(*Shape594);

HAnimSegment563->addChildren(*HAnimSite592);

CHAnimSite* HAnimSite595 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite595->setName("r_tragion_pt");
HAnimSite595->setDEF("hanim_r_tragion_pt");
HAnimSite595->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor596 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor596->setDescription("HAnimSite r_tragion_pt");
HAnimSite595->addChildren(*TouchSensor596);

CShape* Shape597 = (CShape *)(m_pScene.createNode("Shape"));
Shape597->setUSE("HAnimSiteShape");
HAnimSite595->addChildren(*Shape597);

HAnimSegment563->addChildren(*HAnimSite595);

CHAnimSite* HAnimSite598 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite598->setName("sellion_pt");
HAnimSite598->setDEF("hanim_sellion_pt");
HAnimSite598->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor599 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor599->setDescription("HAnimSite sellion_pt");
HAnimSite598->addChildren(*TouchSensor599);

CShape* Shape600 = (CShape *)(m_pScene.createNode("Shape"));
Shape600->setUSE("HAnimSiteShape");
HAnimSite598->addChildren(*Shape600);

HAnimSegment563->addChildren(*HAnimSite598);

CHAnimSite* HAnimSite601 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite601->setName("skull_vertex_pt");
HAnimSite601->setDEF("hanim_skull_vertex_pt");
HAnimSite601->setTranslation(new float[3]{0.005,1.7504,0.0055});
CTouchSensor* TouchSensor602 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor602->setDescription("HAnimSite skull_vertex_pt");
HAnimSite601->addChildren(*TouchSensor602);

CShape* Shape603 = (CShape *)(m_pScene.createNode("Shape"));
Shape603->setUSE("HAnimSiteShape");
HAnimSite601->addChildren(*Shape603);

HAnimSegment563->addChildren(*HAnimSite601);

HAnimJoint562->addChildren(*HAnimSegment563);

CHAnimJoint* HAnimJoint604 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint604->setName("skullbase");
HAnimJoint604->setDEF("hanim_skullbase");
HAnimJoint604->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint604->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint604->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment605 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment605->setName("skull");
HAnimSegment605->setDEF("hanim_skull");
CTransform* Transform606 = (CTransform *)(m_pScene.createNode("Transform"));
Transform606->setTranslation(new float[3]{0.0044,1.6209,0.0236});
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
Coordinate611->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet610->setCoord(*Coordinate611);

//from skullbase to l_eyelid_joint vertices 2
CColorRGBA* ColorRGBA612 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA612->setUSE("HAnimSegmentLineColorRGBA");
LineSet610->setColor(*ColorRGBA612);

Shape609->setGeometry(LineSet610);

HAnimSegment605->addChildren(*Shape609);

CShape* Shape613 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet614 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet614->setVertexCount(new int[1]{2});
CCoordinate* Coordinate615 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate615->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet614->setCoord(*Coordinate615);

//from skullbase to r_eyelid_joint vertices 2
CColorRGBA* ColorRGBA616 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA616->setUSE("HAnimSegmentLineColorRGBA");
LineSet614->setColor(*ColorRGBA616);

Shape613->setGeometry(LineSet614);

HAnimSegment605->addChildren(*Shape613);

CShape* Shape617 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet618 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet618->setVertexCount(new int[1]{2});
CCoordinate* Coordinate619 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate619->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet618->setCoord(*Coordinate619);

//from skullbase to l_eyeball_joint vertices 2
CColorRGBA* ColorRGBA620 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA620->setUSE("HAnimSegmentLineColorRGBA");
LineSet618->setColor(*ColorRGBA620);

Shape617->setGeometry(LineSet618);

HAnimSegment605->addChildren(*Shape617);

CShape* Shape621 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet622 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet622->setVertexCount(new int[1]{2});
CCoordinate* Coordinate623 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate623->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet622->setCoord(*Coordinate623);

//from skullbase to r_eyeball_joint vertices 2
CColorRGBA* ColorRGBA624 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA624->setUSE("HAnimSegmentLineColorRGBA");
LineSet622->setColor(*ColorRGBA624);

Shape621->setGeometry(LineSet622);

HAnimSegment605->addChildren(*Shape621);

CShape* Shape625 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet626 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet626->setVertexCount(new int[1]{2});
CCoordinate* Coordinate627 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate627->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet626->setCoord(*Coordinate627);

//from skullbase to l_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA628 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA628->setUSE("HAnimSegmentLineColorRGBA");
LineSet626->setColor(*ColorRGBA628);

Shape625->setGeometry(LineSet626);

HAnimSegment605->addChildren(*Shape625);

CShape* Shape629 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet630 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet630->setVertexCount(new int[1]{2});
CCoordinate* Coordinate631 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate631->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet630->setCoord(*Coordinate631);

//from skullbase to r_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA632 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA632->setUSE("HAnimSegmentLineColorRGBA");
LineSet630->setColor(*ColorRGBA632);

Shape629->setGeometry(LineSet630);

HAnimSegment605->addChildren(*Shape629);

CShape* Shape633 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet634 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet634->setVertexCount(new int[1]{2});
CCoordinate* Coordinate635 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate635->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0044,1.6209,0.0236});
LineSet634->setCoord(*Coordinate635);

//from skullbase to temporomandibular vertices 2
CColorRGBA* ColorRGBA636 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA636->setUSE("HAnimSegmentLineColorRGBA");
LineSet634->setColor(*ColorRGBA636);

Shape633->setGeometry(LineSet634);

HAnimSegment605->addChildren(*Shape633);

CHAnimSite* HAnimSite637 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite637->setName("l_gonion_pt");
HAnimSite637->setDEF("hanim_l_gonion_pt");
HAnimSite637->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor638 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor638->setDescription("HAnimSite l_gonion_pt");
HAnimSite637->addChildren(*TouchSensor638);

CShape* Shape639 = (CShape *)(m_pScene.createNode("Shape"));
Shape639->setUSE("HAnimSiteShape");
HAnimSite637->addChildren(*Shape639);

HAnimSegment605->addChildren(*HAnimSite637);

CHAnimSite* HAnimSite640 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite640->setName("menton_pt");
HAnimSite640->setDEF("hanim_menton_pt");
CTouchSensor* TouchSensor641 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor641->setDescription("HAnimSite menton_pt");
HAnimSite640->addChildren(*TouchSensor641);

CShape* Shape642 = (CShape *)(m_pScene.createNode("Shape"));
Shape642->setUSE("HAnimSiteShape");
HAnimSite640->addChildren(*Shape642);

HAnimSegment605->addChildren(*HAnimSite640);

CHAnimSite* HAnimSite643 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite643->setName("r_gonion_pt");
HAnimSite643->setDEF("hanim_r_gonion_pt");
HAnimSite643->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor644 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor644->setDescription("HAnimSite r_gonion_pt");
HAnimSite643->addChildren(*TouchSensor644);

CShape* Shape645 = (CShape *)(m_pScene.createNode("Shape"));
Shape645->setUSE("HAnimSiteShape");
HAnimSite643->addChildren(*Shape645);

HAnimSegment605->addChildren(*HAnimSite643);

CHAnimSite* HAnimSite646 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite646->setName("supramenton_pt");
HAnimSite646->setDEF("hanim_supramenton_pt");
HAnimSite646->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor647 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor647->setDescription("HAnimSite supramenton_pt");
HAnimSite646->addChildren(*TouchSensor647);

CShape* Shape648 = (CShape *)(m_pScene.createNode("Shape"));
Shape648->setUSE("HAnimSiteShape");
HAnimSite646->addChildren(*Shape648);

HAnimSegment605->addChildren(*HAnimSite646);

HAnimJoint604->addChildren(*HAnimSegment605);

CHAnimJoint* HAnimJoint649 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint649->setName("l_eyelid_joint");
HAnimJoint649->setDEF("hanim_l_eyelid_joint");
HAnimJoint649->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint649->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint604->addChildren(*HAnimJoint649);

CHAnimJoint* HAnimJoint650 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint650->setName("r_eyelid_joint");
HAnimJoint650->setDEF("hanim_r_eyelid_joint");
HAnimJoint650->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint650->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint604->addChildren(*HAnimJoint650);

CHAnimJoint* HAnimJoint651 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint651->setName("l_eyeball_joint");
HAnimJoint651->setDEF("hanim_l_eyeball_joint");
HAnimJoint651->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint651->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint604->addChildren(*HAnimJoint651);

CHAnimJoint* HAnimJoint652 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint652->setName("r_eyeball_joint");
HAnimJoint652->setDEF("hanim_r_eyeball_joint");
HAnimJoint652->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint652->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint604->addChildren(*HAnimJoint652);

CHAnimJoint* HAnimJoint653 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint653->setName("l_eyebrow_joint");
HAnimJoint653->setDEF("hanim_l_eyebrow_joint");
HAnimJoint653->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint653->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint604->addChildren(*HAnimJoint653);

CHAnimJoint* HAnimJoint654 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint654->setName("r_eyebrow_joint");
HAnimJoint654->setDEF("hanim_r_eyebrow_joint");
HAnimJoint654->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint654->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint604->addChildren(*HAnimJoint654);

CHAnimJoint* HAnimJoint655 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint655->setName("temporomandibular");
HAnimJoint655->setDEF("hanim_temporomandibular");
HAnimJoint655->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint655->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint604->addChildren(*HAnimJoint655);

HAnimJoint562->addChildren(*HAnimJoint604);

HAnimJoint553->addChildren(*HAnimJoint562);

HAnimJoint541->addChildren(*HAnimJoint553);

HAnimJoint532->addChildren(*HAnimJoint541);

HAnimJoint523->addChildren(*HAnimJoint532);

HAnimJoint514->addChildren(*HAnimJoint523);

HAnimJoint505->addChildren(*HAnimJoint514);

HAnimJoint452->addChildren(*HAnimJoint505);

CHAnimJoint* HAnimJoint656 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint656->setName("l_sternoclavicular");
HAnimJoint656->setDEF("hanim_l_sternoclavicular");
HAnimJoint656->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint656->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint656->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment657 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment657->setName("l_clavicle");
HAnimSegment657->setDEF("hanim_l_clavicle");
CTransform* Transform658 = (CTransform *)(m_pScene.createNode("Transform"));
Transform658->setTranslation(new float[3]{0.082,1.4488,-0.0353});
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
Coordinate663->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet662->setCoord(*Coordinate663);

//from l_sternoclavicular to l_acromioclavicular vertices 2
CColorRGBA* ColorRGBA664 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA664->setUSE("HAnimSegmentLineColorRGBA");
LineSet662->setColor(*ColorRGBA664);

Shape661->setGeometry(LineSet662);

HAnimSegment657->addChildren(*Shape661);

HAnimJoint656->addChildren(*HAnimSegment657);

CHAnimJoint* HAnimJoint665 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint665->setName("l_acromioclavicular");
HAnimJoint665->setDEF("hanim_l_acromioclavicular");
HAnimJoint665->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint665->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint665->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment666 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment666->setName("l_scapula");
HAnimSegment666->setDEF("hanim_l_scapula");
CTransform* Transform667 = (CTransform *)(m_pScene.createNode("Transform"));
Transform667->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CTransform* Transform668 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape669 = (CShape *)(m_pScene.createNode("Shape"));
Shape669->setUSE("HAnimJointShape");
Transform668->addChildren(*Shape669);

Transform667->addChildren(*Transform668);

HAnimSegment666->addChildren(*Transform667);

CShape* Shape670 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet671 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet671->setVertexCount(new int[1]{2});
CCoordinate* Coordinate672 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate672->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet671->setCoord(*Coordinate672);

//from l_acromioclavicular to l_shoulder vertices 2
CColorRGBA* ColorRGBA673 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA673->setUSE("HAnimSegmentLineColorRGBA");
LineSet671->setColor(*ColorRGBA673);

Shape670->setGeometry(LineSet671);

HAnimSegment666->addChildren(*Shape670);

CHAnimSite* HAnimSite674 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite674->setName("l_bideltoid_pt");
HAnimSite674->setDEF("hanim_l_bideltoid_pt");
CTouchSensor* TouchSensor675 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor675->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite674->addChildren(*TouchSensor675);

CShape* Shape676 = (CShape *)(m_pScene.createNode("Shape"));
Shape676->setUSE("HAnimSiteShape");
HAnimSite674->addChildren(*Shape676);

HAnimSegment666->addChildren(*HAnimSite674);

CHAnimSite* HAnimSite677 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite677->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite677->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite677->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor678 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor678->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite677->addChildren(*TouchSensor678);

CShape* Shape679 = (CShape *)(m_pScene.createNode("Shape"));
Shape679->setUSE("HAnimSiteShape");
HAnimSite677->addChildren(*Shape679);

HAnimSegment666->addChildren(*HAnimSite677);

HAnimJoint665->addChildren(*HAnimSegment666);

CHAnimJoint* HAnimJoint680 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint680->setName("l_shoulder");
HAnimJoint680->setDEF("hanim_l_shoulder");
HAnimJoint680->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint680->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint680->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment681 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment681->setName("l_upperarm");
HAnimSegment681->setDEF("hanim_l_upperarm");
CTransform* Transform682 = (CTransform *)(m_pScene.createNode("Transform"));
Transform682->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CTransform* Transform683 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape684 = (CShape *)(m_pScene.createNode("Shape"));
Shape684->setUSE("HAnimJointShape");
Transform683->addChildren(*Shape684);

Transform682->addChildren(*Transform683);

HAnimSegment681->addChildren(*Transform682);

CShape* Shape685 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet686 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet686->setVertexCount(new int[1]{2});
CCoordinate* Coordinate687 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate687->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet686->setCoord(*Coordinate687);

//from l_shoulder to l_elbow vertices 2
CColorRGBA* ColorRGBA688 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA688->setUSE("HAnimSegmentLineColorRGBA");
LineSet686->setColor(*ColorRGBA688);

Shape685->setGeometry(LineSet686);

HAnimSegment681->addChildren(*Shape685);

CHAnimSite* HAnimSite689 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite689->setName("l_humeral_medial_epicondyles_pt");
HAnimSite689->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite689->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor690 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor690->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite689->addChildren(*TouchSensor690);

CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
Shape691->setUSE("HAnimSiteShape");
HAnimSite689->addChildren(*Shape691);

HAnimSegment681->addChildren(*HAnimSite689);

CHAnimSite* HAnimSite692 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite692->setName("l_olecranon_pt");
HAnimSite692->setDEF("hanim_l_olecranon_pt");
HAnimSite692->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor693 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor693->setDescription("HAnimSite l_olecranon_pt");
HAnimSite692->addChildren(*TouchSensor693);

CShape* Shape694 = (CShape *)(m_pScene.createNode("Shape"));
Shape694->setUSE("HAnimSiteShape");
HAnimSite692->addChildren(*Shape694);

HAnimSegment681->addChildren(*HAnimSite692);

CHAnimSite* HAnimSite695 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite695->setName("l_radial_styloid_pt");
HAnimSite695->setDEF("hanim_l_radial_styloid_pt");
HAnimSite695->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor696 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor696->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite695->addChildren(*TouchSensor696);

CShape* Shape697 = (CShape *)(m_pScene.createNode("Shape"));
Shape697->setUSE("HAnimSiteShape");
HAnimSite695->addChildren(*Shape697);

HAnimSegment681->addChildren(*HAnimSite695);

CHAnimSite* HAnimSite698 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite698->setName("l_radiale_pt");
HAnimSite698->setDEF("hanim_l_radiale_pt");
HAnimSite698->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor699 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor699->setDescription("HAnimSite l_radiale_pt");
HAnimSite698->addChildren(*TouchSensor699);

CShape* Shape700 = (CShape *)(m_pScene.createNode("Shape"));
Shape700->setUSE("HAnimSiteShape");
HAnimSite698->addChildren(*Shape700);

HAnimSegment681->addChildren(*HAnimSite698);

HAnimJoint680->addChildren(*HAnimSegment681);

CHAnimJoint* HAnimJoint701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint701->setName("l_elbow");
HAnimJoint701->setDEF("hanim_l_elbow");
HAnimJoint701->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint701->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint701->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment702 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment702->setName("l_forearm");
HAnimSegment702->setDEF("hanim_l_forearm");
CTransform* Transform703 = (CTransform *)(m_pScene.createNode("Transform"));
Transform703->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform704 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape705 = (CShape *)(m_pScene.createNode("Shape"));
Shape705->setUSE("HAnimJointShape");
Transform704->addChildren(*Shape705);

Transform703->addChildren(*Transform704);

HAnimSegment702->addChildren(*Transform703);

CShape* Shape706 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet707 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet707->setVertexCount(new int[1]{2});
CCoordinate* Coordinate708 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate708->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet707->setCoord(*Coordinate708);

//from l_elbow to l_radiocarpal vertices 2
CColorRGBA* ColorRGBA709 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA709->setUSE("HAnimSegmentLineColorRGBA");
LineSet707->setColor(*ColorRGBA709);

Shape706->setGeometry(LineSet707);

HAnimSegment702->addChildren(*Shape706);

CHAnimSite* HAnimSite710 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite710->setName("l_ulnar_styloid_pt");
HAnimSite710->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite710->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor711 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor711->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite710->addChildren(*TouchSensor711);

CShape* Shape712 = (CShape *)(m_pScene.createNode("Shape"));
Shape712->setUSE("HAnimSiteShape");
HAnimSite710->addChildren(*Shape712);

HAnimSegment702->addChildren(*HAnimSite710);

HAnimJoint701->addChildren(*HAnimSegment702);

CHAnimJoint* HAnimJoint713 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint713->setName("l_radiocarpal");
HAnimJoint713->setDEF("hanim_l_radiocarpal");
HAnimJoint713->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint713->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint713->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment714 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment714->setName("l_carpal");
HAnimSegment714->setDEF("hanim_l_carpal");
CTransform* Transform715 = (CTransform *)(m_pScene.createNode("Transform"));
Transform715->setScale(new float[3]{0.2,0.2,0.2});
Transform715->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform715->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
CTransform* Transform716 = (CTransform *)(m_pScene.createNode("Transform"));
Transform716->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
CShape* Shape717 = (CShape *)(m_pScene.createNode("Shape"));
Shape717->setUSE("HAnimJointShape");
Transform716->addChildren(*Shape717);

Transform715->addChildren(*Transform716);

HAnimSegment714->addChildren(*Transform715);

CShape* Shape718 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet719 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet719->setVertexCount(new int[1]{2});
CCoordinate* Coordinate720 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate720->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534});
LineSet719->setCoord(*Coordinate720);

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA721 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA721->setUSE("HAnimSegmentLineColorRGBA");
LineSet719->setColor(*ColorRGBA721);

Shape718->setGeometry(LineSet719);

HAnimSegment714->addChildren(*Shape718);

CShape* Shape722 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet723 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet723->setVertexCount(new int[1]{2});
CCoordinate* Coordinate724 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate724->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028});
LineSet723->setCoord(*Coordinate724);

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA725 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA725->setUSE("HAnimSegmentLineColorRGBA");
LineSet723->setColor(*ColorRGBA725);

Shape722->setGeometry(LineSet723);

HAnimSegment714->addChildren(*Shape722);

CHAnimSite* HAnimSite726 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite726->setName("l_metacarpal_phalanx_2_pt");
HAnimSite726->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite726->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor727 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor727->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite726->addChildren(*TouchSensor727);

CShape* Shape728 = (CShape *)(m_pScene.createNode("Shape"));
Shape728->setUSE("HAnimSiteShape");
HAnimSite726->addChildren(*Shape728);

HAnimSegment714->addChildren(*HAnimSite726);

CShape* Shape729 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet730 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet730->setVertexCount(new int[1]{2});
CCoordinate* Coordinate731 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate731->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053});
LineSet730->setCoord(*Coordinate731);

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA732 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA732->setUSE("HAnimSegmentLineColorRGBA");
LineSet730->setColor(*ColorRGBA732);

Shape729->setGeometry(LineSet730);

HAnimSegment714->addChildren(*Shape729);

CHAnimSite* HAnimSite733 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite733->setName("l_metacarpal_phalanx_3_pt");
HAnimSite733->setDEF("hanim_l_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor734 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor734->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite733->addChildren(*TouchSensor734);

CShape* Shape735 = (CShape *)(m_pScene.createNode("Shape"));
Shape735->setUSE("HAnimSiteShape");
HAnimSite733->addChildren(*Shape735);

HAnimSegment714->addChildren(*HAnimSite733);

CShape* Shape736 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet737 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet737->setVertexCount(new int[1]{2});
CCoordinate* Coordinate738 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate738->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794});
LineSet737->setCoord(*Coordinate738);

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA739 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA739->setUSE("HAnimSegmentLineColorRGBA");
LineSet737->setColor(*ColorRGBA739);

Shape736->setGeometry(LineSet737);

HAnimSegment714->addChildren(*Shape736);

CShape* Shape740 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet741 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet741->setVertexCount(new int[1]{2});
CCoordinate* Coordinate742 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate742->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036});
LineSet741->setCoord(*Coordinate742);

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA743 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA743->setUSE("HAnimSegmentLineColorRGBA");
LineSet741->setColor(*ColorRGBA743);

Shape740->setGeometry(LineSet741);

HAnimSegment714->addChildren(*Shape740);

CHAnimSite* HAnimSite744 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite744->setName("l_metacarpal_phalanx_5_pt");
HAnimSite744->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite744->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor745 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor745->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite744->addChildren(*TouchSensor745);

CShape* Shape746 = (CShape *)(m_pScene.createNode("Shape"));
Shape746->setUSE("HAnimSiteShape");
HAnimSite744->addChildren(*Shape746);

HAnimSegment714->addChildren(*HAnimSite744);

HAnimJoint713->addChildren(*HAnimSegment714);

CHAnimJoint* HAnimJoint747 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint747->setName("l_carpometacarpal_1");
HAnimJoint747->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint747->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint747->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint747->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment748 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment748->setName("l_metacarpal_1");
HAnimSegment748->setDEF("hanim_l_metacarpal_1");
CTransform* Transform749 = (CTransform *)(m_pScene.createNode("Transform"));
Transform749->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CTransform* Transform750 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape751 = (CShape *)(m_pScene.createNode("Shape"));
Shape751->setUSE("HAnimJointShape");
Transform750->addChildren(*Shape751);

Transform749->addChildren(*Transform750);

HAnimSegment748->addChildren(*Transform749);

CShape* Shape752 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet753 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet753->setVertexCount(new int[1]{2});
CCoordinate* Coordinate754 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate754->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet753->setCoord(*Coordinate754);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA755 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA755->setUSE("HAnimSegmentLineColorRGBA");
LineSet753->setColor(*ColorRGBA755);

Shape752->setGeometry(LineSet753);

HAnimSegment748->addChildren(*Shape752);

HAnimJoint747->addChildren(*HAnimSegment748);

CHAnimJoint* HAnimJoint756 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint756->setName("l_metacarpophalangeal_1");
HAnimJoint756->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint756->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint756->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint756->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment757 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment757->setName("l_carpal_proximal_phalanx_1");
HAnimSegment757->setDEF("hanim_l_carpal_proximal_phalanx_1");
CTransform* Transform758 = (CTransform *)(m_pScene.createNode("Transform"));
Transform758->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CTransform* Transform759 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape760 = (CShape *)(m_pScene.createNode("Shape"));
Shape760->setUSE("HAnimJointShape");
Transform759->addChildren(*Shape760);

Transform758->addChildren(*Transform759);

HAnimSegment757->addChildren(*Transform758);

CShape* Shape761 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet762 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet762->setVertexCount(new int[1]{2});
CCoordinate* Coordinate763 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate763->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet762->setCoord(*Coordinate763);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA764 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA764->setUSE("HAnimSegmentLineColorRGBA");
LineSet762->setColor(*ColorRGBA764);

Shape761->setGeometry(LineSet762);

HAnimSegment757->addChildren(*Shape761);

CHAnimSite* HAnimSite765 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite765->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite765->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor766 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor766->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite765->addChildren(*TouchSensor766);

CShape* Shape767 = (CShape *)(m_pScene.createNode("Shape"));
Shape767->setUSE("HAnimSiteShape");
HAnimSite765->addChildren(*Shape767);

HAnimSegment757->addChildren(*HAnimSite765);

HAnimJoint756->addChildren(*HAnimSegment757);

CHAnimJoint* HAnimJoint768 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint768->setName("l_carpal_interphalangeal_1");
HAnimJoint768->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint768->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint768->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint768->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint756->addChildren(*HAnimJoint768);

HAnimJoint747->addChildren(*HAnimJoint756);

HAnimJoint713->addChildren(*HAnimJoint747);

CHAnimJoint* HAnimJoint769 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint769->setName("l_carpometacarpal_2");
HAnimJoint769->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint769->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint769->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint769->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment770 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment770->setName("l_metacarpal_2");
HAnimSegment770->setDEF("hanim_l_metacarpal_2");
CTransform* Transform771 = (CTransform *)(m_pScene.createNode("Transform"));
Transform771->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CTransform* Transform772 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape773 = (CShape *)(m_pScene.createNode("Shape"));
Shape773->setUSE("HAnimJointShape");
Transform772->addChildren(*Shape773);

Transform771->addChildren(*Transform772);

HAnimSegment770->addChildren(*Transform771);

CShape* Shape774 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet775 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet775->setVertexCount(new int[1]{2});
CCoordinate* Coordinate776 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate776->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet775->setCoord(*Coordinate776);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA777 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA777->setUSE("HAnimSegmentLineColorRGBA");
LineSet775->setColor(*ColorRGBA777);

Shape774->setGeometry(LineSet775);

HAnimSegment770->addChildren(*Shape774);

HAnimJoint769->addChildren(*HAnimSegment770);

CHAnimJoint* HAnimJoint778 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint778->setName("l_metacarpophalangeal_2");
HAnimJoint778->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint778->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint778->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint778->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment779 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment779->setName("l_carpal_proximal_phalanx_2");
HAnimSegment779->setDEF("hanim_l_carpal_proximal_phalanx_2");
CTransform* Transform780 = (CTransform *)(m_pScene.createNode("Transform"));
Transform780->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CTransform* Transform781 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape782 = (CShape *)(m_pScene.createNode("Shape"));
Shape782->setUSE("HAnimJointShape");
Transform781->addChildren(*Shape782);

Transform780->addChildren(*Transform781);

HAnimSegment779->addChildren(*Transform780);

CShape* Shape783 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet784 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet784->setVertexCount(new int[1]{2});
CCoordinate* Coordinate785 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate785->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet784->setCoord(*Coordinate785);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA786 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA786->setUSE("HAnimSegmentLineColorRGBA");
LineSet784->setColor(*ColorRGBA786);

Shape783->setGeometry(LineSet784);

HAnimSegment779->addChildren(*Shape783);

HAnimJoint778->addChildren(*HAnimSegment779);

CHAnimJoint* HAnimJoint787 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint787->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint787->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint787->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint787->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint787->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment788 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment788->setName("l_carpal_middle_phalanx_2");
HAnimSegment788->setDEF("hanim_l_carpal_middle_phalanx_2");
CTransform* Transform789 = (CTransform *)(m_pScene.createNode("Transform"));
Transform789->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CTransform* Transform790 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape791 = (CShape *)(m_pScene.createNode("Shape"));
Shape791->setUSE("HAnimJointShape");
Transform790->addChildren(*Shape791);

Transform789->addChildren(*Transform790);

HAnimSegment788->addChildren(*Transform789);

CShape* Shape792 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet793 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet793->setVertexCount(new int[1]{2});
CCoordinate* Coordinate794 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate794->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet793->setCoord(*Coordinate794);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA795 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA795->setUSE("HAnimSegmentLineColorRGBA");
LineSet793->setColor(*ColorRGBA795);

Shape792->setGeometry(LineSet793);

HAnimSegment788->addChildren(*Shape792);

CHAnimSite* HAnimSite796 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite796->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite796->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor797 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor797->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite796->addChildren(*TouchSensor797);

CShape* Shape798 = (CShape *)(m_pScene.createNode("Shape"));
Shape798->setUSE("HAnimSiteShape");
HAnimSite796->addChildren(*Shape798);

HAnimSegment788->addChildren(*HAnimSite796);

CHAnimSite* HAnimSite799 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite799->setName("l_dactylion_pt");
HAnimSite799->setDEF("hanim_l_dactylion_pt");
HAnimSite799->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor800 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor800->setDescription("HAnimSite l_dactylion_pt");
HAnimSite799->addChildren(*TouchSensor800);

CShape* Shape801 = (CShape *)(m_pScene.createNode("Shape"));
Shape801->setUSE("HAnimSiteShape");
HAnimSite799->addChildren(*Shape801);

HAnimSegment788->addChildren(*HAnimSite799);

HAnimJoint787->addChildren(*HAnimSegment788);

CHAnimJoint* HAnimJoint802 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint802->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint802->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint802->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint802->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint802->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint787->addChildren(*HAnimJoint802);

HAnimJoint778->addChildren(*HAnimJoint787);

HAnimJoint769->addChildren(*HAnimJoint778);

HAnimJoint713->addChildren(*HAnimJoint769);

CHAnimJoint* HAnimJoint803 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint803->setName("l_carpometacarpal_3");
HAnimJoint803->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint803->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint803->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint803->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment804 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment804->setName("l_metacarpal_3");
HAnimSegment804->setDEF("hanim_l_metacarpal_3");
CTransform* Transform805 = (CTransform *)(m_pScene.createNode("Transform"));
Transform805->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CTransform* Transform806 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape807 = (CShape *)(m_pScene.createNode("Shape"));
Shape807->setUSE("HAnimJointShape");
Transform806->addChildren(*Shape807);

Transform805->addChildren(*Transform806);

HAnimSegment804->addChildren(*Transform805);

CShape* Shape808 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet809 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet809->setVertexCount(new int[1]{2});
CCoordinate* Coordinate810 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate810->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet809->setCoord(*Coordinate810);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA811 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA811->setUSE("HAnimSegmentLineColorRGBA");
LineSet809->setColor(*ColorRGBA811);

Shape808->setGeometry(LineSet809);

HAnimSegment804->addChildren(*Shape808);

HAnimJoint803->addChildren(*HAnimSegment804);

CHAnimJoint* HAnimJoint812 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint812->setName("l_metacarpophalangeal_3");
HAnimJoint812->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint812->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint812->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint812->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment813->setName("l_carpal_proximal_phalanx_3");
HAnimSegment813->setDEF("hanim_l_carpal_proximal_phalanx_3");
CTransform* Transform814 = (CTransform *)(m_pScene.createNode("Transform"));
Transform814->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CTransform* Transform815 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape816 = (CShape *)(m_pScene.createNode("Shape"));
Shape816->setUSE("HAnimJointShape");
Transform815->addChildren(*Shape816);

Transform814->addChildren(*Transform815);

HAnimSegment813->addChildren(*Transform814);

CShape* Shape817 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet818 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet818->setVertexCount(new int[1]{2});
CCoordinate* Coordinate819 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate819->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet818->setCoord(*Coordinate819);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA820 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA820->setUSE("HAnimSegmentLineColorRGBA");
LineSet818->setColor(*ColorRGBA820);

Shape817->setGeometry(LineSet818);

HAnimSegment813->addChildren(*Shape817);

HAnimJoint812->addChildren(*HAnimSegment813);

CHAnimJoint* HAnimJoint821 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint821->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint821->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint821->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint821->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint821->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment822 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment822->setName("l_carpal_middle_phalanx_3");
HAnimSegment822->setDEF("hanim_l_carpal_middle_phalanx_3");
CTransform* Transform823 = (CTransform *)(m_pScene.createNode("Transform"));
Transform823->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CTransform* Transform824 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape825 = (CShape *)(m_pScene.createNode("Shape"));
Shape825->setUSE("HAnimJointShape");
Transform824->addChildren(*Shape825);

Transform823->addChildren(*Transform824);

HAnimSegment822->addChildren(*Transform823);

CShape* Shape826 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet827 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet827->setVertexCount(new int[1]{2});
CCoordinate* Coordinate828 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate828->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet827->setCoord(*Coordinate828);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA829 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA829->setUSE("HAnimSegmentLineColorRGBA");
LineSet827->setColor(*ColorRGBA829);

Shape826->setGeometry(LineSet827);

HAnimSegment822->addChildren(*Shape826);

CHAnimSite* HAnimSite830 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite830->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite830->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor831 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor831->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite830->addChildren(*TouchSensor831);

CShape* Shape832 = (CShape *)(m_pScene.createNode("Shape"));
Shape832->setUSE("HAnimSiteShape");
HAnimSite830->addChildren(*Shape832);

HAnimSegment822->addChildren(*HAnimSite830);

HAnimJoint821->addChildren(*HAnimSegment822);

CHAnimJoint* HAnimJoint833 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint833->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint833->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint833->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint833->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint833->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint821->addChildren(*HAnimJoint833);

HAnimJoint812->addChildren(*HAnimJoint821);

HAnimJoint803->addChildren(*HAnimJoint812);

HAnimJoint713->addChildren(*HAnimJoint803);

CHAnimJoint* HAnimJoint834 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint834->setName("l_carpometacarpal_4");
HAnimJoint834->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint834->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint834->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint834->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment835->setName("l_metacarpal_4");
HAnimSegment835->setDEF("hanim_l_metacarpal_4");
CTransform* Transform836 = (CTransform *)(m_pScene.createNode("Transform"));
Transform836->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CTransform* Transform837 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape838 = (CShape *)(m_pScene.createNode("Shape"));
Shape838->setUSE("HAnimJointShape");
Transform837->addChildren(*Shape838);

Transform836->addChildren(*Transform837);

HAnimSegment835->addChildren(*Transform836);

CShape* Shape839 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet840 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet840->setVertexCount(new int[1]{2});
CCoordinate* Coordinate841 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate841->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet840->setCoord(*Coordinate841);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA842 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA842->setUSE("HAnimSegmentLineColorRGBA");
LineSet840->setColor(*ColorRGBA842);

Shape839->setGeometry(LineSet840);

HAnimSegment835->addChildren(*Shape839);

HAnimJoint834->addChildren(*HAnimSegment835);

CHAnimJoint* HAnimJoint843 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint843->setName("l_metacarpophalangeal_4");
HAnimJoint843->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint843->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint843->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint843->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment844 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment844->setName("l_carpal_proximal_phalanx_4");
HAnimSegment844->setDEF("hanim_l_carpal_proximal_phalanx_4");
CTransform* Transform845 = (CTransform *)(m_pScene.createNode("Transform"));
Transform845->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CTransform* Transform846 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape847 = (CShape *)(m_pScene.createNode("Shape"));
Shape847->setUSE("HAnimJointShape");
Transform846->addChildren(*Shape847);

Transform845->addChildren(*Transform846);

HAnimSegment844->addChildren(*Transform845);

CShape* Shape848 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet849 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet849->setVertexCount(new int[1]{2});
CCoordinate* Coordinate850 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate850->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet849->setCoord(*Coordinate850);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA851 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA851->setUSE("HAnimSegmentLineColorRGBA");
LineSet849->setColor(*ColorRGBA851);

Shape848->setGeometry(LineSet849);

HAnimSegment844->addChildren(*Shape848);

HAnimJoint843->addChildren(*HAnimSegment844);

CHAnimJoint* HAnimJoint852 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint852->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint852->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint852->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint852->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint852->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment853 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment853->setName("l_carpal_middle_phalanx_4");
HAnimSegment853->setDEF("hanim_l_carpal_middle_phalanx_4");
CTransform* Transform854 = (CTransform *)(m_pScene.createNode("Transform"));
Transform854->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
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
Coordinate859->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet858->setCoord(*Coordinate859);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA860 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA860->setUSE("HAnimSegmentLineColorRGBA");
LineSet858->setColor(*ColorRGBA860);

Shape857->setGeometry(LineSet858);

HAnimSegment853->addChildren(*Shape857);

CHAnimSite* HAnimSite861 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite861->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite861->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor862 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor862->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite861->addChildren(*TouchSensor862);

CShape* Shape863 = (CShape *)(m_pScene.createNode("Shape"));
Shape863->setUSE("HAnimSiteShape");
HAnimSite861->addChildren(*Shape863);

HAnimSegment853->addChildren(*HAnimSite861);

HAnimJoint852->addChildren(*HAnimSegment853);

CHAnimJoint* HAnimJoint864 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint864->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint864->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint864->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint864->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint864->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint852->addChildren(*HAnimJoint864);

HAnimJoint843->addChildren(*HAnimJoint852);

HAnimJoint834->addChildren(*HAnimJoint843);

HAnimJoint713->addChildren(*HAnimJoint834);

CHAnimJoint* HAnimJoint865 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint865->setName("l_carpometacarpal_5");
HAnimJoint865->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint865->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint865->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint865->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment866 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment866->setName("l_metacarpal_5");
HAnimSegment866->setDEF("hanim_l_metacarpal_5");
CTransform* Transform867 = (CTransform *)(m_pScene.createNode("Transform"));
Transform867->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CTransform* Transform868 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape869 = (CShape *)(m_pScene.createNode("Shape"));
Shape869->setUSE("HAnimJointShape");
Transform868->addChildren(*Shape869);

Transform867->addChildren(*Transform868);

HAnimSegment866->addChildren(*Transform867);

CShape* Shape870 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet871 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet871->setVertexCount(new int[1]{2});
CCoordinate* Coordinate872 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate872->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet871->setCoord(*Coordinate872);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA873 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA873->setUSE("HAnimSegmentLineColorRGBA");
LineSet871->setColor(*ColorRGBA873);

Shape870->setGeometry(LineSet871);

HAnimSegment866->addChildren(*Shape870);

HAnimJoint865->addChildren(*HAnimSegment866);

CHAnimJoint* HAnimJoint874 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint874->setName("l_metacarpophalangeal_5");
HAnimJoint874->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint874->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint874->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint874->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment875 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment875->setName("l_carpal_proximal_phalanx_5");
HAnimSegment875->setDEF("hanim_l_carpal_proximal_phalanx_5");
CTransform* Transform876 = (CTransform *)(m_pScene.createNode("Transform"));
Transform876->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CTransform* Transform877 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape878 = (CShape *)(m_pScene.createNode("Shape"));
Shape878->setUSE("HAnimJointShape");
Transform877->addChildren(*Shape878);

Transform876->addChildren(*Transform877);

HAnimSegment875->addChildren(*Transform876);

CShape* Shape879 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet880 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet880->setVertexCount(new int[1]{2});
CCoordinate* Coordinate881 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate881->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet880->setCoord(*Coordinate881);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA882 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA882->setUSE("HAnimSegmentLineColorRGBA");
LineSet880->setColor(*ColorRGBA882);

Shape879->setGeometry(LineSet880);

HAnimSegment875->addChildren(*Shape879);

HAnimJoint874->addChildren(*HAnimSegment875);

CHAnimJoint* HAnimJoint883 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint883->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint883->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint883->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint883->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint883->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment884 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment884->setName("l_carpal_middle_phalanx_5");
HAnimSegment884->setDEF("hanim_l_carpal_middle_phalanx_5");
CTransform* Transform885 = (CTransform *)(m_pScene.createNode("Transform"));
Transform885->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CTransform* Transform886 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape887 = (CShape *)(m_pScene.createNode("Shape"));
Shape887->setUSE("HAnimJointShape");
Transform886->addChildren(*Shape887);

Transform885->addChildren(*Transform886);

HAnimSegment884->addChildren(*Transform885);

CShape* Shape888 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet889 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet889->setVertexCount(new int[1]{2});
CCoordinate* Coordinate890 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate890->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet889->setCoord(*Coordinate890);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA891 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA891->setUSE("HAnimSegmentLineColorRGBA");
LineSet889->setColor(*ColorRGBA891);

Shape888->setGeometry(LineSet889);

HAnimSegment884->addChildren(*Shape888);

CHAnimSite* HAnimSite892 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite892->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite892->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor893 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor893->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite892->addChildren(*TouchSensor893);

CShape* Shape894 = (CShape *)(m_pScene.createNode("Shape"));
Shape894->setUSE("HAnimSiteShape");
HAnimSite892->addChildren(*Shape894);

HAnimSegment884->addChildren(*HAnimSite892);

HAnimJoint883->addChildren(*HAnimSegment884);

CHAnimJoint* HAnimJoint895 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint895->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint895->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint895->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint895->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint895->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint883->addChildren(*HAnimJoint895);

HAnimJoint874->addChildren(*HAnimJoint883);

HAnimJoint865->addChildren(*HAnimJoint874);

HAnimJoint713->addChildren(*HAnimJoint865);

HAnimJoint701->addChildren(*HAnimJoint713);

HAnimJoint680->addChildren(*HAnimJoint701);

HAnimJoint665->addChildren(*HAnimJoint680);

HAnimJoint656->addChildren(*HAnimJoint665);

HAnimJoint452->addChildren(*HAnimJoint656);

CHAnimJoint* HAnimJoint896 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint896->setName("r_sternoclavicular");
HAnimJoint896->setDEF("hanim_r_sternoclavicular");
HAnimJoint896->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint896->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint896->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment897 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment897->setName("r_clavicle");
HAnimSegment897->setDEF("hanim_r_clavicle");
CTransform* Transform898 = (CTransform *)(m_pScene.createNode("Transform"));
Transform898->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CTransform* Transform899 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape900 = (CShape *)(m_pScene.createNode("Shape"));
Shape900->setUSE("HAnimJointShape");
Transform899->addChildren(*Shape900);

Transform898->addChildren(*Transform899);

HAnimSegment897->addChildren(*Transform898);

CShape* Shape901 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet902 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet902->setVertexCount(new int[1]{2});
CCoordinate* Coordinate903 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate903->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet902->setCoord(*Coordinate903);

//from r_sternoclavicular to r_acromioclavicular vertices 2
CColorRGBA* ColorRGBA904 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA904->setUSE("HAnimSegmentLineColorRGBA");
LineSet902->setColor(*ColorRGBA904);

Shape901->setGeometry(LineSet902);

HAnimSegment897->addChildren(*Shape901);

HAnimJoint896->addChildren(*HAnimSegment897);

CHAnimJoint* HAnimJoint905 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint905->setName("r_acromioclavicular");
HAnimJoint905->setDEF("hanim_r_acromioclavicular");
HAnimJoint905->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint905->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint905->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment906 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment906->setName("r_scapula");
HAnimSegment906->setDEF("hanim_r_scapula");
CTransform* Transform907 = (CTransform *)(m_pScene.createNode("Transform"));
Transform907->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
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
Coordinate912->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet911->setCoord(*Coordinate912);

//from r_acromioclavicular to r_shoulder vertices 2
CColorRGBA* ColorRGBA913 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA913->setUSE("HAnimSegmentLineColorRGBA");
LineSet911->setColor(*ColorRGBA913);

Shape910->setGeometry(LineSet911);

HAnimSegment906->addChildren(*Shape910);

CHAnimSite* HAnimSite914 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite914->setName("r_bideltoid_pt");
HAnimSite914->setDEF("hanim_r_bideltoid_pt");
CTouchSensor* TouchSensor915 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor915->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite914->addChildren(*TouchSensor915);

CShape* Shape916 = (CShape *)(m_pScene.createNode("Shape"));
Shape916->setUSE("HAnimSiteShape");
HAnimSite914->addChildren(*Shape916);

HAnimSegment906->addChildren(*HAnimSite914);

CHAnimSite* HAnimSite917 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite917->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite917->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite917->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor918 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor918->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite917->addChildren(*TouchSensor918);

CShape* Shape919 = (CShape *)(m_pScene.createNode("Shape"));
Shape919->setUSE("HAnimSiteShape");
HAnimSite917->addChildren(*Shape919);

HAnimSegment906->addChildren(*HAnimSite917);

HAnimJoint905->addChildren(*HAnimSegment906);

CHAnimJoint* HAnimJoint920 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint920->setName("r_shoulder");
HAnimJoint920->setDEF("hanim_r_shoulder");
HAnimJoint920->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint920->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint920->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment921 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment921->setName("r_upperarm");
HAnimSegment921->setDEF("hanim_r_upperarm");
CTransform* Transform922 = (CTransform *)(m_pScene.createNode("Transform"));
Transform922->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform923 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape924 = (CShape *)(m_pScene.createNode("Shape"));
Shape924->setUSE("HAnimJointShape");
Transform923->addChildren(*Shape924);

Transform922->addChildren(*Transform923);

HAnimSegment921->addChildren(*Transform922);

CShape* Shape925 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet926 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet926->setVertexCount(new int[1]{2});
CCoordinate* Coordinate927 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate927->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet926->setCoord(*Coordinate927);

//from r_shoulder to r_elbow vertices 2
CColorRGBA* ColorRGBA928 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA928->setUSE("HAnimSegmentLineColorRGBA");
LineSet926->setColor(*ColorRGBA928);

Shape925->setGeometry(LineSet926);

HAnimSegment921->addChildren(*Shape925);

CHAnimSite* HAnimSite929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite929->setName("r_humeral_medial_epicondyles_pt");
HAnimSite929->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite929->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor930 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor930->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite929->addChildren(*TouchSensor930);

CShape* Shape931 = (CShape *)(m_pScene.createNode("Shape"));
Shape931->setUSE("HAnimSiteShape");
HAnimSite929->addChildren(*Shape931);

HAnimSegment921->addChildren(*HAnimSite929);

CHAnimSite* HAnimSite932 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite932->setName("r_olecranon_pt");
HAnimSite932->setDEF("hanim_r_olecranon_pt");
HAnimSite932->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor933 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor933->setDescription("HAnimSite r_olecranon_pt");
HAnimSite932->addChildren(*TouchSensor933);

CShape* Shape934 = (CShape *)(m_pScene.createNode("Shape"));
Shape934->setUSE("HAnimSiteShape");
HAnimSite932->addChildren(*Shape934);

HAnimSegment921->addChildren(*HAnimSite932);

CHAnimSite* HAnimSite935 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite935->setName("r_radial_styloid_pt");
HAnimSite935->setDEF("hanim_r_radial_styloid_pt");
HAnimSite935->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor936 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor936->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite935->addChildren(*TouchSensor936);

CShape* Shape937 = (CShape *)(m_pScene.createNode("Shape"));
Shape937->setUSE("HAnimSiteShape");
HAnimSite935->addChildren(*Shape937);

HAnimSegment921->addChildren(*HAnimSite935);

CHAnimSite* HAnimSite938 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite938->setName("r_radiale_pt");
HAnimSite938->setDEF("hanim_r_radiale_pt");
HAnimSite938->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor939 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor939->setDescription("HAnimSite r_radiale_pt");
HAnimSite938->addChildren(*TouchSensor939);

CShape* Shape940 = (CShape *)(m_pScene.createNode("Shape"));
Shape940->setUSE("HAnimSiteShape");
HAnimSite938->addChildren(*Shape940);

HAnimSegment921->addChildren(*HAnimSite938);

HAnimJoint920->addChildren(*HAnimSegment921);

CHAnimJoint* HAnimJoint941 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint941->setName("r_elbow");
HAnimJoint941->setDEF("hanim_r_elbow");
HAnimJoint941->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint941->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint941->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment942 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment942->setName("r_forearm");
HAnimSegment942->setDEF("hanim_r_forearm");
CTransform* Transform943 = (CTransform *)(m_pScene.createNode("Transform"));
Transform943->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
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
Coordinate948->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet947->setCoord(*Coordinate948);

//from r_elbow to r_radiocarpal vertices 2
CColorRGBA* ColorRGBA949 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA949->setUSE("HAnimSegmentLineColorRGBA");
LineSet947->setColor(*ColorRGBA949);

Shape946->setGeometry(LineSet947);

HAnimSegment942->addChildren(*Shape946);

CHAnimSite* HAnimSite950 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite950->setName("r_ulnar_styloid_pt");
HAnimSite950->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite950->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor951 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor951->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite950->addChildren(*TouchSensor951);

CShape* Shape952 = (CShape *)(m_pScene.createNode("Shape"));
Shape952->setUSE("HAnimSiteShape");
HAnimSite950->addChildren(*Shape952);

HAnimSegment942->addChildren(*HAnimSite950);

HAnimJoint941->addChildren(*HAnimSegment942);

CHAnimJoint* HAnimJoint953 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint953->setName("r_radiocarpal");
HAnimJoint953->setDEF("hanim_r_radiocarpal");
HAnimJoint953->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint953->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint953->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment954 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment954->setName("r_carpal");
HAnimSegment954->setDEF("hanim_r_carpal");
CTransform* Transform955 = (CTransform *)(m_pScene.createNode("Transform"));
Transform955->setScale(new float[3]{0.2,0.2,0.2});
Transform955->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform955->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
CTransform* Transform956 = (CTransform *)(m_pScene.createNode("Transform"));
Transform956->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
CShape* Shape957 = (CShape *)(m_pScene.createNode("Shape"));
Shape957->setUSE("HAnimJointShape");
Transform956->addChildren(*Shape957);

Transform955->addChildren(*Transform956);

HAnimSegment954->addChildren(*Transform955);

CShape* Shape958 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet959 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet959->setVertexCount(new int[1]{2});
CCoordinate* Coordinate960 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate960->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473});
LineSet959->setCoord(*Coordinate960);

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA961 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA961->setUSE("HAnimSegmentLineColorRGBA");
LineSet959->setColor(*ColorRGBA961);

Shape958->setGeometry(LineSet959);

HAnimSegment954->addChildren(*Shape958);

CShape* Shape962 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet963 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet963->setVertexCount(new int[1]{2});
CCoordinate* Coordinate964 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate964->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218});
LineSet963->setCoord(*Coordinate964);

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA965 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA965->setUSE("HAnimSegmentLineColorRGBA");
LineSet963->setColor(*ColorRGBA965);

Shape962->setGeometry(LineSet963);

HAnimSegment954->addChildren(*Shape962);

CHAnimSite* HAnimSite966 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite966->setName("r_metacarpal_phalanx_2_pt");
HAnimSite966->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite966->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor967 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor967->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite966->addChildren(*TouchSensor967);

CShape* Shape968 = (CShape *)(m_pScene.createNode("Shape"));
Shape968->setUSE("HAnimSiteShape");
HAnimSite966->addChildren(*Shape968);

HAnimSegment954->addChildren(*HAnimSite966);

CShape* Shape969 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet970 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet970->setVertexCount(new int[1]{2});
CCoordinate* Coordinate971 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate971->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468});
LineSet970->setCoord(*Coordinate971);

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA972 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA972->setUSE("HAnimSegmentLineColorRGBA");
LineSet970->setColor(*ColorRGBA972);

Shape969->setGeometry(LineSet970);

HAnimSegment954->addChildren(*Shape969);

CHAnimSite* HAnimSite973 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite973->setName("r_metacarpal_phalanx_3_pt");
HAnimSite973->setDEF("hanim_r_metacarpal_phalanx_3_pt");
CTouchSensor* TouchSensor974 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor974->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite973->addChildren(*TouchSensor974);

CShape* Shape975 = (CShape *)(m_pScene.createNode("Shape"));
Shape975->setUSE("HAnimSiteShape");
HAnimSite973->addChildren(*Shape975);

HAnimSegment954->addChildren(*HAnimSite973);

CShape* Shape976 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet977 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet977->setVertexCount(new int[1]{2});
CCoordinate* Coordinate978 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate978->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732});
LineSet977->setCoord(*Coordinate978);

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA979 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA979->setUSE("HAnimSegmentLineColorRGBA");
LineSet977->setColor(*ColorRGBA979);

Shape976->setGeometry(LineSet977);

HAnimSegment954->addChildren(*Shape976);

CShape* Shape980 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet981 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet981->setVertexCount(new int[1]{2});
CCoordinate* Coordinate982 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate982->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975});
LineSet981->setCoord(*Coordinate982);

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA983 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA983->setUSE("HAnimSegmentLineColorRGBA");
LineSet981->setColor(*ColorRGBA983);

Shape980->setGeometry(LineSet981);

HAnimSegment954->addChildren(*Shape980);

CHAnimSite* HAnimSite984 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite984->setName("r_metacarpal_phalanx_5_pt");
HAnimSite984->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite984->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor985 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor985->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite984->addChildren(*TouchSensor985);

CShape* Shape986 = (CShape *)(m_pScene.createNode("Shape"));
Shape986->setUSE("HAnimSiteShape");
HAnimSite984->addChildren(*Shape986);

HAnimSegment954->addChildren(*HAnimSite984);

HAnimJoint953->addChildren(*HAnimSegment954);

CHAnimJoint* HAnimJoint987 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint987->setName("r_carpometacarpal_1");
HAnimJoint987->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint987->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint987->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint987->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment988 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment988->setName("r_metacarpal_1");
HAnimSegment988->setDEF("hanim_r_metacarpal_1");
CTransform* Transform989 = (CTransform *)(m_pScene.createNode("Transform"));
Transform989->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
CTransform* Transform990 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape991 = (CShape *)(m_pScene.createNode("Shape"));
Shape991->setUSE("HAnimJointShape");
Transform990->addChildren(*Shape991);

Transform989->addChildren(*Transform990);

HAnimSegment988->addChildren(*Transform989);

CShape* Shape992 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet993 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet993->setVertexCount(new int[1]{2});
CCoordinate* Coordinate994 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate994->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet993->setCoord(*Coordinate994);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA995 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA995->setUSE("HAnimSegmentLineColorRGBA");
LineSet993->setColor(*ColorRGBA995);

Shape992->setGeometry(LineSet993);

HAnimSegment988->addChildren(*Shape992);

HAnimJoint987->addChildren(*HAnimSegment988);

CHAnimJoint* HAnimJoint996 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint996->setName("r_metacarpophalangeal_1");
HAnimJoint996->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint996->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint996->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment997 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment997->setName("r_carpal_proximal_phalanx_1");
HAnimSegment997->setDEF("hanim_r_carpal_proximal_phalanx_1");
CTransform* Transform998 = (CTransform *)(m_pScene.createNode("Transform"));
Transform998->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
CTransform* Transform999 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1000 = (CShape *)(m_pScene.createNode("Shape"));
Shape1000->setUSE("HAnimJointShape");
Transform999->addChildren(*Shape1000);

Transform998->addChildren(*Transform999);

HAnimSegment997->addChildren(*Transform998);

CShape* Shape1001 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1002 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1002->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1003 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1003->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet1002->setCoord(*Coordinate1003);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA1004 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1004->setUSE("HAnimSegmentLineColorRGBA");
LineSet1002->setColor(*ColorRGBA1004);

Shape1001->setGeometry(LineSet1002);

HAnimSegment997->addChildren(*Shape1001);

CHAnimSite* HAnimSite1005 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1005->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite1005->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor1006 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1006->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite1005->addChildren(*TouchSensor1006);

CShape* Shape1007 = (CShape *)(m_pScene.createNode("Shape"));
Shape1007->setUSE("HAnimSiteShape");
HAnimSite1005->addChildren(*Shape1007);

HAnimSegment997->addChildren(*HAnimSite1005);

HAnimJoint996->addChildren(*HAnimSegment997);

CHAnimJoint* HAnimJoint1008 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1008->setName("r_carpal_interphalangeal_1");
HAnimJoint1008->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1008->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1008->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1008->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint996->addChildren(*HAnimJoint1008);

HAnimJoint987->addChildren(*HAnimJoint996);

HAnimJoint953->addChildren(*HAnimJoint987);

CHAnimJoint* HAnimJoint1009 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1009->setName("r_carpometacarpal_2");
HAnimJoint1009->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1009->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint1009->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1009->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1010 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1010->setName("r_metacarpal_2");
HAnimSegment1010->setDEF("hanim_r_metacarpal_2");
CTransform* Transform1011 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1011->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CTransform* Transform1012 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1013 = (CShape *)(m_pScene.createNode("Shape"));
Shape1013->setUSE("HAnimJointShape");
Transform1012->addChildren(*Shape1013);

Transform1011->addChildren(*Transform1012);

HAnimSegment1010->addChildren(*Transform1011);

CShape* Shape1014 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1015 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1015->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1016 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1016->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1015->setCoord(*Coordinate1016);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA1017 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1017->setUSE("HAnimSegmentLineColorRGBA");
LineSet1015->setColor(*ColorRGBA1017);

Shape1014->setGeometry(LineSet1015);

HAnimSegment1010->addChildren(*Shape1014);

HAnimJoint1009->addChildren(*HAnimSegment1010);

CHAnimJoint* HAnimJoint1018 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1018->setName("r_metacarpophalangeal_2");
HAnimJoint1018->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1018->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint1018->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1018->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1019 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1019->setName("r_carpal_proximal_phalanx_2");
HAnimSegment1019->setDEF("hanim_r_carpal_proximal_phalanx_2");
CTransform* Transform1020 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1020->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CTransform* Transform1021 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1022 = (CShape *)(m_pScene.createNode("Shape"));
Shape1022->setUSE("HAnimJointShape");
Transform1021->addChildren(*Shape1022);

Transform1020->addChildren(*Transform1021);

HAnimSegment1019->addChildren(*Transform1020);

CShape* Shape1023 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1024 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1024->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1025 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1025->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1024->setCoord(*Coordinate1025);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1026 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1026->setUSE("HAnimSegmentLineColorRGBA");
LineSet1024->setColor(*ColorRGBA1026);

Shape1023->setGeometry(LineSet1024);

HAnimSegment1019->addChildren(*Shape1023);

HAnimJoint1018->addChildren(*HAnimSegment1019);

CHAnimJoint* HAnimJoint1027 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1027->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1027->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1027->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint1027->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1027->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1028 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1028->setName("r_carpal_middle_phalanx_2");
HAnimSegment1028->setDEF("hanim_r_carpal_middle_phalanx_2");
CTransform* Transform1029 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1029->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CTransform* Transform1030 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1031 = (CShape *)(m_pScene.createNode("Shape"));
Shape1031->setUSE("HAnimJointShape");
Transform1030->addChildren(*Shape1031);

Transform1029->addChildren(*Transform1030);

HAnimSegment1028->addChildren(*Transform1029);

CShape* Shape1032 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1033 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1033->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1034 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1034->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1033->setCoord(*Coordinate1034);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1035 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1035->setUSE("HAnimSegmentLineColorRGBA");
LineSet1033->setColor(*ColorRGBA1035);

Shape1032->setGeometry(LineSet1033);

HAnimSegment1028->addChildren(*Shape1032);

CHAnimSite* HAnimSite1036 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1036->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite1036->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor1037 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1037->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1036->addChildren(*TouchSensor1037);

CShape* Shape1038 = (CShape *)(m_pScene.createNode("Shape"));
Shape1038->setUSE("HAnimSiteShape");
HAnimSite1036->addChildren(*Shape1038);

HAnimSegment1028->addChildren(*HAnimSite1036);

CHAnimSite* HAnimSite1039 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1039->setName("r_dactylion_pt");
HAnimSite1039->setDEF("hanim_r_dactylion_pt");
HAnimSite1039->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor1040 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1040->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1039->addChildren(*TouchSensor1040);

CShape* Shape1041 = (CShape *)(m_pScene.createNode("Shape"));
Shape1041->setUSE("HAnimSiteShape");
HAnimSite1039->addChildren(*Shape1041);

HAnimSegment1028->addChildren(*HAnimSite1039);

HAnimJoint1027->addChildren(*HAnimSegment1028);

CHAnimJoint* HAnimJoint1042 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1042->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1042->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1042->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1042->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1042->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1027->addChildren(*HAnimJoint1042);

HAnimJoint1018->addChildren(*HAnimJoint1027);

HAnimJoint1009->addChildren(*HAnimJoint1018);

HAnimJoint953->addChildren(*HAnimJoint1009);

CHAnimJoint* HAnimJoint1043 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1043->setName("r_carpometacarpal_3");
HAnimJoint1043->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1043->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint1043->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1043->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1044 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1044->setName("r_metacarpal_3");
HAnimSegment1044->setDEF("hanim_r_metacarpal_3");
CTransform* Transform1045 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1045->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CTransform* Transform1046 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1047 = (CShape *)(m_pScene.createNode("Shape"));
Shape1047->setUSE("HAnimJointShape");
Transform1046->addChildren(*Shape1047);

Transform1045->addChildren(*Transform1046);

HAnimSegment1044->addChildren(*Transform1045);

CShape* Shape1048 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1049 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1049->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1050 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1050->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1049->setCoord(*Coordinate1050);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA1051 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1051->setUSE("HAnimSegmentLineColorRGBA");
LineSet1049->setColor(*ColorRGBA1051);

Shape1048->setGeometry(LineSet1049);

HAnimSegment1044->addChildren(*Shape1048);

HAnimJoint1043->addChildren(*HAnimSegment1044);

CHAnimJoint* HAnimJoint1052 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1052->setName("r_metacarpophalangeal_3");
HAnimJoint1052->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1052->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint1052->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1052->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1053 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1053->setName("r_carpal_proximal_phalanx_3");
HAnimSegment1053->setDEF("hanim_r_carpal_proximal_phalanx_3");
CTransform* Transform1054 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1054->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CTransform* Transform1055 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1056 = (CShape *)(m_pScene.createNode("Shape"));
Shape1056->setUSE("HAnimJointShape");
Transform1055->addChildren(*Shape1056);

Transform1054->addChildren(*Transform1055);

HAnimSegment1053->addChildren(*Transform1054);

CShape* Shape1057 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1058 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1058->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1059 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1059->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1058->setCoord(*Coordinate1059);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1060 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1060->setUSE("HAnimSegmentLineColorRGBA");
LineSet1058->setColor(*ColorRGBA1060);

Shape1057->setGeometry(LineSet1058);

HAnimSegment1053->addChildren(*Shape1057);

HAnimJoint1052->addChildren(*HAnimSegment1053);

CHAnimJoint* HAnimJoint1061 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1061->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1061->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1061->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint1061->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1061->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1062 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1062->setName("r_carpal_middle_phalanx_3");
HAnimSegment1062->setDEF("hanim_r_carpal_middle_phalanx_3");
CTransform* Transform1063 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1063->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CTransform* Transform1064 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1065 = (CShape *)(m_pScene.createNode("Shape"));
Shape1065->setUSE("HAnimJointShape");
Transform1064->addChildren(*Shape1065);

Transform1063->addChildren(*Transform1064);

HAnimSegment1062->addChildren(*Transform1063);

CShape* Shape1066 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1067 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1067->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1068 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1068->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1067->setCoord(*Coordinate1068);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1069 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1069->setUSE("HAnimSegmentLineColorRGBA");
LineSet1067->setColor(*ColorRGBA1069);

Shape1066->setGeometry(LineSet1067);

HAnimSegment1062->addChildren(*Shape1066);

CHAnimSite* HAnimSite1070 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1070->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite1070->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor1071 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1071->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1070->addChildren(*TouchSensor1071);

CShape* Shape1072 = (CShape *)(m_pScene.createNode("Shape"));
Shape1072->setUSE("HAnimSiteShape");
HAnimSite1070->addChildren(*Shape1072);

HAnimSegment1062->addChildren(*HAnimSite1070);

HAnimJoint1061->addChildren(*HAnimSegment1062);

CHAnimJoint* HAnimJoint1073 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1073->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1073->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1073->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1073->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1073->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1061->addChildren(*HAnimJoint1073);

HAnimJoint1052->addChildren(*HAnimJoint1061);

HAnimJoint1043->addChildren(*HAnimJoint1052);

HAnimJoint953->addChildren(*HAnimJoint1043);

CHAnimJoint* HAnimJoint1074 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1074->setName("r_carpometacarpal_4");
HAnimJoint1074->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1074->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint1074->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1074->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1075 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1075->setName("r_metacarpal_4");
HAnimSegment1075->setDEF("hanim_r_metacarpal_4");
CTransform* Transform1076 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1076->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
CTransform* Transform1077 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1078 = (CShape *)(m_pScene.createNode("Shape"));
Shape1078->setUSE("HAnimJointShape");
Transform1077->addChildren(*Shape1078);

Transform1076->addChildren(*Transform1077);

HAnimSegment1075->addChildren(*Transform1076);

CShape* Shape1079 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1080 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1080->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1081 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1081->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1080->setCoord(*Coordinate1081);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA1082 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1082->setUSE("HAnimSegmentLineColorRGBA");
LineSet1080->setColor(*ColorRGBA1082);

Shape1079->setGeometry(LineSet1080);

HAnimSegment1075->addChildren(*Shape1079);

HAnimJoint1074->addChildren(*HAnimSegment1075);

CHAnimJoint* HAnimJoint1083 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1083->setName("r_metacarpophalangeal_4");
HAnimJoint1083->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1083->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint1083->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1083->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1084 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1084->setName("r_carpal_proximal_phalanx_4");
HAnimSegment1084->setDEF("hanim_r_carpal_proximal_phalanx_4");
CTransform* Transform1085 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1085->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
CTransform* Transform1086 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1087 = (CShape *)(m_pScene.createNode("Shape"));
Shape1087->setUSE("HAnimJointShape");
Transform1086->addChildren(*Shape1087);

Transform1085->addChildren(*Transform1086);

HAnimSegment1084->addChildren(*Transform1085);

CShape* Shape1088 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1089 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1089->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1090 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1090->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1089->setCoord(*Coordinate1090);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1091 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1091->setUSE("HAnimSegmentLineColorRGBA");
LineSet1089->setColor(*ColorRGBA1091);

Shape1088->setGeometry(LineSet1089);

HAnimSegment1084->addChildren(*Shape1088);

HAnimJoint1083->addChildren(*HAnimSegment1084);

CHAnimJoint* HAnimJoint1092 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1092->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1092->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1092->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint1092->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1092->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1093 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1093->setName("r_carpal_middle_phalanx_4");
HAnimSegment1093->setDEF("hanim_r_carpal_middle_phalanx_4");
CTransform* Transform1094 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1094->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CTransform* Transform1095 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1096 = (CShape *)(m_pScene.createNode("Shape"));
Shape1096->setUSE("HAnimJointShape");
Transform1095->addChildren(*Shape1096);

Transform1094->addChildren(*Transform1095);

HAnimSegment1093->addChildren(*Transform1094);

CShape* Shape1097 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1098 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1098->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1099 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1099->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1098->setCoord(*Coordinate1099);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1100 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1100->setUSE("HAnimSegmentLineColorRGBA");
LineSet1098->setColor(*ColorRGBA1100);

Shape1097->setGeometry(LineSet1098);

HAnimSegment1093->addChildren(*Shape1097);

CHAnimSite* HAnimSite1101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1101->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite1101->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor1102 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1102->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1101->addChildren(*TouchSensor1102);

CShape* Shape1103 = (CShape *)(m_pScene.createNode("Shape"));
Shape1103->setUSE("HAnimSiteShape");
HAnimSite1101->addChildren(*Shape1103);

HAnimSegment1093->addChildren(*HAnimSite1101);

HAnimJoint1092->addChildren(*HAnimSegment1093);

CHAnimJoint* HAnimJoint1104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1104->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1104->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1104->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1104->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1104->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1092->addChildren(*HAnimJoint1104);

HAnimJoint1083->addChildren(*HAnimJoint1092);

HAnimJoint1074->addChildren(*HAnimJoint1083);

HAnimJoint953->addChildren(*HAnimJoint1074);

CHAnimJoint* HAnimJoint1105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1105->setName("r_carpometacarpal_5");
HAnimJoint1105->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1105->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint1105->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1105->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1106 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1106->setName("r_metacarpal_5");
HAnimSegment1106->setDEF("hanim_r_metacarpal_5");
CTransform* Transform1107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1107->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
CTransform* Transform1108 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1109 = (CShape *)(m_pScene.createNode("Shape"));
Shape1109->setUSE("HAnimJointShape");
Transform1108->addChildren(*Shape1109);

Transform1107->addChildren(*Transform1108);

HAnimSegment1106->addChildren(*Transform1107);

CShape* Shape1110 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1111 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1111->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1112 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1112->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1111->setCoord(*Coordinate1112);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1113 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1113->setUSE("HAnimSegmentLineColorRGBA");
LineSet1111->setColor(*ColorRGBA1113);

Shape1110->setGeometry(LineSet1111);

HAnimSegment1106->addChildren(*Shape1110);

HAnimJoint1105->addChildren(*HAnimSegment1106);

CHAnimJoint* HAnimJoint1114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1114->setName("r_metacarpophalangeal_5");
HAnimJoint1114->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1114->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint1114->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1114->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1115 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1115->setName("r_carpal_proximal_phalanx_5");
HAnimSegment1115->setDEF("hanim_r_carpal_proximal_phalanx_5");
CTransform* Transform1116 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1116->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
CTransform* Transform1117 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1118 = (CShape *)(m_pScene.createNode("Shape"));
Shape1118->setUSE("HAnimJointShape");
Transform1117->addChildren(*Shape1118);

Transform1116->addChildren(*Transform1117);

HAnimSegment1115->addChildren(*Transform1116);

CShape* Shape1119 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1120 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1120->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1121 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1121->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1120->setCoord(*Coordinate1121);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1122 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1122->setUSE("HAnimSegmentLineColorRGBA");
LineSet1120->setColor(*ColorRGBA1122);

Shape1119->setGeometry(LineSet1120);

HAnimSegment1115->addChildren(*Shape1119);

HAnimJoint1114->addChildren(*HAnimSegment1115);

CHAnimJoint* HAnimJoint1123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1123->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1123->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint1123->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint1123->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1123->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1124 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1124->setName("r_carpal_middle_phalanx_5");
HAnimSegment1124->setDEF("hanim_r_carpal_middle_phalanx_5");
CTransform* Transform1125 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1125->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
CTransform* Transform1126 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1127 = (CShape *)(m_pScene.createNode("Shape"));
Shape1127->setUSE("HAnimJointShape");
Transform1126->addChildren(*Shape1127);

Transform1125->addChildren(*Transform1126);

HAnimSegment1124->addChildren(*Transform1125);

CShape* Shape1128 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1129 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1129->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1130 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1130->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1129->setCoord(*Coordinate1130);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1131 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1131->setUSE("HAnimSegmentLineColorRGBA");
LineSet1129->setColor(*ColorRGBA1131);

Shape1128->setGeometry(LineSet1129);

HAnimSegment1124->addChildren(*Shape1128);

CHAnimSite* HAnimSite1132 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1132->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite1132->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor1133 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1133->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1132->addChildren(*TouchSensor1133);

CShape* Shape1134 = (CShape *)(m_pScene.createNode("Shape"));
Shape1134->setUSE("HAnimSiteShape");
HAnimSite1132->addChildren(*Shape1134);

HAnimSegment1124->addChildren(*HAnimSite1132);

HAnimJoint1123->addChildren(*HAnimSegment1124);

CHAnimJoint* HAnimJoint1135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1135->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1135->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint1135->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1135->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1135->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1123->addChildren(*HAnimJoint1135);

HAnimJoint1114->addChildren(*HAnimJoint1123);

HAnimJoint1105->addChildren(*HAnimJoint1114);

HAnimJoint953->addChildren(*HAnimJoint1105);

HAnimJoint941->addChildren(*HAnimJoint953);

HAnimJoint920->addChildren(*HAnimJoint941);

HAnimJoint905->addChildren(*HAnimJoint920);

HAnimJoint896->addChildren(*HAnimJoint905);

HAnimJoint452->addChildren(*HAnimJoint896);

HAnimJoint437->addChildren(*HAnimJoint452);

HAnimJoint428->addChildren(*HAnimJoint437);

HAnimJoint419->addChildren(*HAnimJoint428);

HAnimJoint410->addChildren(*HAnimJoint419);

HAnimJoint398->addChildren(*HAnimJoint410);

HAnimJoint377->addChildren(*HAnimJoint398);

HAnimJoint368->addChildren(*HAnimJoint377);

HAnimJoint359->addChildren(*HAnimJoint368);

HAnimJoint344->addChildren(*HAnimJoint359);

HAnimJoint332->addChildren(*HAnimJoint344);

HAnimJoint323->addChildren(*HAnimJoint332);

HAnimJoint314->addChildren(*HAnimJoint323);

HAnimJoint305->addChildren(*HAnimJoint314);

HAnimJoint287->addChildren(*HAnimJoint305);

HAnimJoint278->addChildren(*HAnimJoint287);

HAnimJoint269->addChildren(*HAnimJoint278);

HAnimJoint52->addChildren(*HAnimJoint269);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimJoint* HAnimJoint1136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1136->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint1136);

CHAnimJoint* HAnimJoint1137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1137->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint1137);

CHAnimJoint* HAnimJoint1138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1138->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1138);

CHAnimJoint* HAnimJoint1139 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1139->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1139);

CHAnimJoint* HAnimJoint1140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1140->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1140);

CHAnimJoint* HAnimJoint1141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1141->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1141);

CHAnimJoint* HAnimJoint1142 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1142->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1142);

CHAnimJoint* HAnimJoint1143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1143->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1143);

CHAnimJoint* HAnimJoint1144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1144->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1144);

CHAnimJoint* HAnimJoint1145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1145->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1145);

CHAnimJoint* HAnimJoint1146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1146->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1146);

CHAnimJoint* HAnimJoint1147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1147->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1147);

CHAnimJoint* HAnimJoint1148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1148->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1148);

CHAnimJoint* HAnimJoint1149 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1149->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1149);

CHAnimJoint* HAnimJoint1150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1150->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint1150);

CHAnimJoint* HAnimJoint1151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1151->setUSE("hanim_vl4");
HAnimHumanoid43->addJoints(*HAnimJoint1151);

CHAnimJoint* HAnimJoint1152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1152->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint1152);

CHAnimJoint* HAnimJoint1153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1153->setUSE("hanim_vl2");
HAnimHumanoid43->addJoints(*HAnimJoint1153);

CHAnimJoint* HAnimJoint1154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1154->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint1154);

CHAnimJoint* HAnimJoint1155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1155->setUSE("hanim_vt12");
HAnimHumanoid43->addJoints(*HAnimJoint1155);

CHAnimJoint* HAnimJoint1156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1156->setUSE("hanim_vt11");
HAnimHumanoid43->addJoints(*HAnimJoint1156);

CHAnimJoint* HAnimJoint1157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1157->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint1157);

CHAnimJoint* HAnimJoint1158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1158->setUSE("hanim_vt9");
HAnimHumanoid43->addJoints(*HAnimJoint1158);

CHAnimJoint* HAnimJoint1159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1159->setUSE("hanim_vt8");
HAnimHumanoid43->addJoints(*HAnimJoint1159);

CHAnimJoint* HAnimJoint1160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1160->setUSE("hanim_vt7");
HAnimHumanoid43->addJoints(*HAnimJoint1160);

CHAnimJoint* HAnimJoint1161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1161->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint1161);

CHAnimJoint* HAnimJoint1162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1162->setUSE("hanim_vt5");
HAnimHumanoid43->addJoints(*HAnimJoint1162);

CHAnimJoint* HAnimJoint1163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1163->setUSE("hanim_vt4");
HAnimHumanoid43->addJoints(*HAnimJoint1163);

CHAnimJoint* HAnimJoint1164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1164->setUSE("hanim_vt3");
HAnimHumanoid43->addJoints(*HAnimJoint1164);

CHAnimJoint* HAnimJoint1165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1165->setUSE("hanim_vt2");
HAnimHumanoid43->addJoints(*HAnimJoint1165);

CHAnimJoint* HAnimJoint1166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1166->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint1166);

CHAnimJoint* HAnimJoint1167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1167->setUSE("hanim_vc7");
HAnimHumanoid43->addJoints(*HAnimJoint1167);

CHAnimJoint* HAnimJoint1168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1168->setUSE("hanim_vc6");
HAnimHumanoid43->addJoints(*HAnimJoint1168);

CHAnimJoint* HAnimJoint1169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1169->setUSE("hanim_vc5");
HAnimHumanoid43->addJoints(*HAnimJoint1169);

CHAnimJoint* HAnimJoint1170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1170->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint1170);

CHAnimJoint* HAnimJoint1171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1171->setUSE("hanim_vc3");
HAnimHumanoid43->addJoints(*HAnimJoint1171);

CHAnimJoint* HAnimJoint1172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1172->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint1172);

CHAnimJoint* HAnimJoint1173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1173->setUSE("hanim_vc1");
HAnimHumanoid43->addJoints(*HAnimJoint1173);

CHAnimJoint* HAnimJoint1174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1174->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint1174);

CHAnimJoint* HAnimJoint1175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1175->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1175);

CHAnimJoint* HAnimJoint1176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1176->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1176);

CHAnimJoint* HAnimJoint1177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1177->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1177);

CHAnimJoint* HAnimJoint1178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1178->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1178);

CHAnimJoint* HAnimJoint1179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1179->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1179);

CHAnimJoint* HAnimJoint1180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1180->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1180);

CHAnimJoint* HAnimJoint1181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1181->setUSE("hanim_temporomandibular");
HAnimHumanoid43->addJoints(*HAnimJoint1181);

CHAnimJoint* HAnimJoint1182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1182->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1182);

CHAnimJoint* HAnimJoint1183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1183->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1183);

CHAnimJoint* HAnimJoint1184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1184->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1184);

CHAnimJoint* HAnimJoint1185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1185->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1185);

CHAnimJoint* HAnimJoint1186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1186->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1186);

CHAnimJoint* HAnimJoint1187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1187->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1187);

CHAnimJoint* HAnimJoint1188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1188->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1188);

CHAnimJoint* HAnimJoint1189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1189->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1189);

CHAnimJoint* HAnimJoint1190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1190->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1190);

CHAnimJoint* HAnimJoint1191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1191->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1191);

CHAnimJoint* HAnimJoint1192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1192->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1192);

CHAnimJoint* HAnimJoint1193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1193->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1193);

CHAnimJoint* HAnimJoint1194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1194->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1194);

CHAnimJoint* HAnimJoint1195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1195->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1195);

CHAnimJoint* HAnimJoint1196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1196->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1196);

CHAnimJoint* HAnimJoint1197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1197->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1197);

CHAnimJoint* HAnimJoint1198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1198->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1198);

CHAnimJoint* HAnimJoint1199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1199->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1199);

CHAnimJoint* HAnimJoint1200 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1200->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1200);

CHAnimJoint* HAnimJoint1201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1201->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1201);

CHAnimJoint* HAnimJoint1202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1202->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1202);

CHAnimJoint* HAnimJoint1203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1203->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1203);

CHAnimJoint* HAnimJoint1204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1204->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1204);

CHAnimJoint* HAnimJoint1205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1205->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1205);

CHAnimJoint* HAnimJoint1206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1206->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1206);

CHAnimJoint* HAnimJoint1207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1207->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1207);

CHAnimJoint* HAnimJoint1208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1208->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1208);

CHAnimJoint* HAnimJoint1209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1209->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1209);

CHAnimJoint* HAnimJoint1210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1210->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1210);

CHAnimJoint* HAnimJoint1211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1211->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1211);

CHAnimJoint* HAnimJoint1212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1212->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1212);

CHAnimJoint* HAnimJoint1213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1213->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1213);

CHAnimJoint* HAnimJoint1214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1214->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1214);

CHAnimJoint* HAnimJoint1215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1215->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1215);

CHAnimJoint* HAnimJoint1216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1216->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1216);

CHAnimJoint* HAnimJoint1217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1217->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1217);

CHAnimJoint* HAnimJoint1218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1218->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1218);

CHAnimJoint* HAnimJoint1219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1219->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1219);

CHAnimJoint* HAnimJoint1220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1220->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1220);

CHAnimJoint* HAnimJoint1221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1221->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1221);

CHAnimJoint* HAnimJoint1222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1222->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1222);

CHAnimJoint* HAnimJoint1223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1223->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1223);

CHAnimJoint* HAnimJoint1224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1224->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1224);

CHAnimJoint* HAnimJoint1225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1225->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1225);

CHAnimJoint* HAnimJoint1226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1226->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1226);

CHAnimJoint* HAnimJoint1227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1227->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1227);

CHAnimJoint* HAnimJoint1228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1228->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1228);

CHAnimJoint* HAnimJoint1229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1229->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1229);

CHAnimSegment* HAnimSegment1230 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1230->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment1230);

CHAnimSegment* HAnimSegment1231 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1231->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment1231);

CHAnimSegment* HAnimSegment1232 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1232->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1232);

CHAnimSegment* HAnimSegment1233 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1233->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1233);

CHAnimSegment* HAnimSegment1234 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1234->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1234);

CHAnimSegment* HAnimSegment1235 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1235->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1235);

CHAnimSegment* HAnimSegment1236 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1236->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1236);

CHAnimSegment* HAnimSegment1237 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1237->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1237);

CHAnimSegment* HAnimSegment1238 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1238->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1238);

CHAnimSegment* HAnimSegment1239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1239->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1239);

CHAnimSegment* HAnimSegment1240 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1240->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1240);

CHAnimSegment* HAnimSegment1241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1241->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1241);

CHAnimSegment* HAnimSegment1242 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1242->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment1242);

CHAnimSegment* HAnimSegment1243 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1243->setUSE("hanim_l4");
HAnimHumanoid43->setSegments(*HAnimSegment1243);

CHAnimSegment* HAnimSegment1244 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1244->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment1244);

CHAnimSegment* HAnimSegment1245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1245->setUSE("hanim_l2");
HAnimHumanoid43->setSegments(*HAnimSegment1245);

CHAnimSegment* HAnimSegment1246 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1246->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment1246);

CHAnimSegment* HAnimSegment1247 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1247->setUSE("hanim_t12");
HAnimHumanoid43->setSegments(*HAnimSegment1247);

CHAnimSegment* HAnimSegment1248 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1248->setUSE("hanim_t11");
HAnimHumanoid43->setSegments(*HAnimSegment1248);

CHAnimSegment* HAnimSegment1249 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1249->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment1249);

CHAnimSegment* HAnimSegment1250 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1250->setUSE("hanim_t9");
HAnimHumanoid43->setSegments(*HAnimSegment1250);

CHAnimSegment* HAnimSegment1251 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1251->setUSE("hanim_t8");
HAnimHumanoid43->setSegments(*HAnimSegment1251);

CHAnimSegment* HAnimSegment1252 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1252->setUSE("hanim_t7");
HAnimHumanoid43->setSegments(*HAnimSegment1252);

CHAnimSegment* HAnimSegment1253 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1253->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment1253);

CHAnimSegment* HAnimSegment1254 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1254->setUSE("hanim_t5");
HAnimHumanoid43->setSegments(*HAnimSegment1254);

CHAnimSegment* HAnimSegment1255 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1255->setUSE("hanim_t4");
HAnimHumanoid43->setSegments(*HAnimSegment1255);

CHAnimSegment* HAnimSegment1256 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1256->setUSE("hanim_t3");
HAnimHumanoid43->setSegments(*HAnimSegment1256);

CHAnimSegment* HAnimSegment1257 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1257->setUSE("hanim_t2");
HAnimHumanoid43->setSegments(*HAnimSegment1257);

CHAnimSegment* HAnimSegment1258 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1258->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment1258);

CHAnimSegment* HAnimSegment1259 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1259->setUSE("hanim_c7");
HAnimHumanoid43->setSegments(*HAnimSegment1259);

CHAnimSegment* HAnimSegment1260 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1260->setUSE("hanim_c6");
HAnimHumanoid43->setSegments(*HAnimSegment1260);

CHAnimSegment* HAnimSegment1261 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1261->setUSE("hanim_c5");
HAnimHumanoid43->setSegments(*HAnimSegment1261);

CHAnimSegment* HAnimSegment1262 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1262->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment1262);

CHAnimSegment* HAnimSegment1263 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1263->setUSE("hanim_c3");
HAnimHumanoid43->setSegments(*HAnimSegment1263);

CHAnimSegment* HAnimSegment1264 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1264->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment1264);

CHAnimSegment* HAnimSegment1265 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1265->setUSE("hanim_c1");
HAnimHumanoid43->setSegments(*HAnimSegment1265);

CHAnimSegment* HAnimSegment1266 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1266->setUSE("hanim_skull");
HAnimHumanoid43->setSegments(*HAnimSegment1266);

CHAnimSegment* HAnimSegment1267 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1267->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1267);

CHAnimSegment* HAnimSegment1268 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1268->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1268);

CHAnimSegment* HAnimSegment1269 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1269->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1269);

CHAnimSegment* HAnimSegment1270 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1270->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1270);

CHAnimSegment* HAnimSegment1271 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1271->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1271);

CHAnimSegment* HAnimSegment1272 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1272->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1272);

CHAnimSegment* HAnimSegment1273 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1273->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1273);

CHAnimSegment* HAnimSegment1274 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1274->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1274);

CHAnimSegment* HAnimSegment1275 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1275->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1275);

CHAnimSegment* HAnimSegment1276 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1276->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1276);

CHAnimSegment* HAnimSegment1277 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1277->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1277);

CHAnimSegment* HAnimSegment1278 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1278->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1278);

CHAnimSegment* HAnimSegment1279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1279->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1279);

CHAnimSegment* HAnimSegment1280 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1280->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1280);

CHAnimSegment* HAnimSegment1281 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1281->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1281);

CHAnimSegment* HAnimSegment1282 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1282->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1282);

CHAnimSegment* HAnimSegment1283 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1283->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1283);

CHAnimSegment* HAnimSegment1284 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1284->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1284);

CHAnimSegment* HAnimSegment1285 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1285->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1285);

CHAnimSegment* HAnimSegment1286 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1286->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1286);

CHAnimSegment* HAnimSegment1287 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1287->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1287);

CHAnimSegment* HAnimSegment1288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1288->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1288);

CHAnimSegment* HAnimSegment1289 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1289->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1289);

CHAnimSegment* HAnimSegment1290 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1290->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1290);

CHAnimSegment* HAnimSegment1291 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1291->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1291);

CHAnimSegment* HAnimSegment1292 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1292->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1292);

CHAnimSegment* HAnimSegment1293 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1293->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1293);

CHAnimSegment* HAnimSegment1294 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1294->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1294);

CHAnimSegment* HAnimSegment1295 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1295->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1295);

CHAnimSegment* HAnimSegment1296 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1296->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1296);

CHAnimSegment* HAnimSegment1297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1297->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1297);

CHAnimSegment* HAnimSegment1298 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1298->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1298);

CHAnimSegment* HAnimSegment1299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1299->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1299);

CHAnimSegment* HAnimSegment1300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1300->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1300);

CHAnimSegment* HAnimSegment1301 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1301->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1301);

CHAnimSegment* HAnimSegment1302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1302->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1302);

CHAnimSegment* HAnimSegment1303 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1303->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1303);

CHAnimSegment* HAnimSegment1304 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1304->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1304);

CHAnimSite* HAnimSite1305 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1305->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid43->setSites(*HAnimSite1305);

CHAnimSite* HAnimSite1306 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1306->setUSE("hanim_crotch_pt");
HAnimHumanoid43->setSites(*HAnimSite1306);

CHAnimSite* HAnimSite1307 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1307->setUSE("hanim_l_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1307);

CHAnimSite* HAnimSite1308 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1308->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1308);

CHAnimSite* HAnimSite1309 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1309->setUSE("hanim_l_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1309);

CHAnimSite* HAnimSite1310 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1310->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1310);

CHAnimSite* HAnimSite1311 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1311->setUSE("hanim_r_asis_pt");
HAnimHumanoid43->setSites(*HAnimSite1311);

CHAnimSite* HAnimSite1312 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1312->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid43->setSites(*HAnimSite1312);

CHAnimSite* HAnimSite1313 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1313->setUSE("hanim_r_psis_pt");
HAnimHumanoid43->setSites(*HAnimSite1313);

CHAnimSite* HAnimSite1314 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1314->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid43->setSites(*HAnimSite1314);

CHAnimSite* HAnimSite1315 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1315->setUSE("hanim_navel_pt");
HAnimHumanoid43->setSites(*HAnimSite1315);

CHAnimSite* HAnimSite1316 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1316->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1316);

CHAnimSite* HAnimSite1317 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1317->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1317);

CHAnimSite* HAnimSite1318 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1318->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1318);

CHAnimSite* HAnimSite1319 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1319->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1319);

CHAnimSite* HAnimSite1320 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1320->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1320);

CHAnimSite* HAnimSite1321 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1321->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1321);

CHAnimSite* HAnimSite1322 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1322->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1322);

CHAnimSite* HAnimSite1323 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1323->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1323);

CHAnimSite* HAnimSite1324 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1324->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid43->setSites(*HAnimSite1324);

CHAnimSite* HAnimSite1325 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1325->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid43->setSites(*HAnimSite1325);

CHAnimSite* HAnimSite1326 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1326->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1326);

CHAnimSite* HAnimSite1327 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1327->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1327);

CHAnimSite* HAnimSite1328 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1328->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1328);

CHAnimSite* HAnimSite1329 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1329->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1329);

CHAnimSite* HAnimSite1330 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1330->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1330);

CHAnimSite* HAnimSite1331 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1331->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1331);

CHAnimSite* HAnimSite1332 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1332->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1332);

CHAnimSite* HAnimSite1333 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1333->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid43->setSites(*HAnimSite1333);

CHAnimSite* HAnimSite1334 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1334->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1334);

CHAnimSite* HAnimSite1335 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1335->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(*HAnimSite1335);

CHAnimSite* HAnimSite1336 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1336->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid43->setSites(*HAnimSite1336);

CHAnimSite* HAnimSite1337 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1337->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1337);

CHAnimSite* HAnimSite1338 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1338->setUSE("hanim_l_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1338);

CHAnimSite* HAnimSite1339 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1339->setUSE("hanim_r_rib10_pt");
HAnimHumanoid43->setSites(*HAnimSite1339);

CHAnimSite* HAnimSite1340 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1340->setUSE("hanim_spine_2_middle_back_pt");
HAnimHumanoid43->setSites(*HAnimSite1340);

CHAnimSite* HAnimSite1341 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1341->setUSE("hanim_substernale_pt");
HAnimHumanoid43->setSites(*HAnimSite1341);

CHAnimSite* HAnimSite1342 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1342->setUSE("hanim_l_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1342);

CHAnimSite* HAnimSite1343 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1343->setUSE("hanim_r_thelion_pt");
HAnimHumanoid43->setSites(*HAnimSite1343);

CHAnimSite* HAnimSite1344 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1344->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1344);

CHAnimSite* HAnimSite1345 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1345->setUSE("hanim_mesosternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1345);

CHAnimSite* HAnimSite1346 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1346->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1346);

CHAnimSite* HAnimSite1347 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1347->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid43->setSites(*HAnimSite1347);

CHAnimSite* HAnimSite1348 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1348->setUSE("hanim_spine_1_middle_back_pt");
HAnimHumanoid43->setSites(*HAnimSite1348);

CHAnimSite* HAnimSite1349 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1349->setUSE("hanim_cervicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1349);

CHAnimSite* HAnimSite1350 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1350->setUSE("hanim_suprasternale_pt");
HAnimHumanoid43->setSites(*HAnimSite1350);

CHAnimSite* HAnimSite1351 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1351->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1351);

CHAnimSite* HAnimSite1352 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1352->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid43->setSites(*HAnimSite1352);

CHAnimSite* HAnimSite1353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1353->setUSE("hanim_l_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1353);

CHAnimSite* HAnimSite1354 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1354->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1354);

CHAnimSite* HAnimSite1355 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1355->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1355);

CHAnimSite* HAnimSite1356 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1356->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1356);

CHAnimSite* HAnimSite1357 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1357->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1357);

CHAnimSite* HAnimSite1358 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1358->setUSE("hanim_r_acromion_pt");
HAnimHumanoid43->setSites(*HAnimSite1358);

CHAnimSite* HAnimSite1359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1359->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1359);

CHAnimSite* HAnimSite1360 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1360->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(*HAnimSite1360);

CHAnimSite* HAnimSite1361 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1361->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid43->setSites(*HAnimSite1361);

CHAnimSite* HAnimSite1362 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1362->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid43->setSites(*HAnimSite1362);

CHAnimSite* HAnimSite1363 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1363->setUSE("hanim_adams_apple_pt");
HAnimHumanoid43->setSites(*HAnimSite1363);

CHAnimSite* HAnimSite1364 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1364->setUSE("hanim_glabella_pt");
HAnimHumanoid43->setSites(*HAnimSite1364);

CHAnimSite* HAnimSite1365 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1365->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1365);

CHAnimSite* HAnimSite1366 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1366->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1366);

CHAnimSite* HAnimSite1367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1367->setUSE("hanim_l_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1367);

CHAnimSite* HAnimSite1368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1368->setUSE("hanim_nuchale_pt");
HAnimHumanoid43->setSites(*HAnimSite1368);

CHAnimSite* HAnimSite1369 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1369->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid43->setSites(*HAnimSite1369);

CHAnimSite* HAnimSite1370 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1370->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid43->setSites(*HAnimSite1370);

CHAnimSite* HAnimSite1371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1371->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid43->setSites(*HAnimSite1371);

CHAnimSite* HAnimSite1372 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1372->setUSE("hanim_r_tragion_pt");
HAnimHumanoid43->setSites(*HAnimSite1372);

CHAnimSite* HAnimSite1373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1373->setUSE("hanim_sellion_pt");
HAnimHumanoid43->setSites(*HAnimSite1373);

CHAnimSite* HAnimSite1374 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1374->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid43->setSites(*HAnimSite1374);

CHAnimSite* HAnimSite1375 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1375->setUSE("hanim_l_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1375);

CHAnimSite* HAnimSite1376 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1376->setUSE("hanim_menton_pt");
HAnimHumanoid43->setSites(*HAnimSite1376);

CHAnimSite* HAnimSite1377 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1377->setUSE("hanim_r_gonion_pt");
HAnimHumanoid43->setSites(*HAnimSite1377);

CHAnimSite* HAnimSite1378 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1378->setUSE("hanim_supramenton_pt");
HAnimHumanoid43->setSites(*HAnimSite1378);

CHAnimSite* HAnimSite1379 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1379->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1379);

CHAnimSite* HAnimSite1380 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1380->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1380);

CHAnimSite* HAnimSite1381 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1381->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1381);

CHAnimSite* HAnimSite1382 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1382->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1382);

CHAnimSite* HAnimSite1383 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1383->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1383);

CHAnimSite* HAnimSite1384 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1384->setUSE("hanim_l_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1384);

CHAnimSite* HAnimSite1385 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1385->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1385);

CHAnimSite* HAnimSite1386 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1386->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1386);

CHAnimSite* HAnimSite1387 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1387->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1387);

CHAnimSite* HAnimSite1388 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1388->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1388);

CHAnimSite* HAnimSite1389 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1389->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1389);

CHAnimSite* HAnimSite1390 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1390->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1390);

CHAnimSite* HAnimSite1391 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1391->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1391);

CHAnimSite* HAnimSite1392 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1392->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1392);

CHAnimSite* HAnimSite1393 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1393->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1393);

CHAnimSite* HAnimSite1394 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1394->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1394);

CHAnimSite* HAnimSite1395 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1395->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid43->setSites(*HAnimSite1395);

CHAnimSite* HAnimSite1396 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1396->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1396);

CHAnimSite* HAnimSite1397 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1397->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(*HAnimSite1397);

CHAnimSite* HAnimSite1398 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1398->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid43->setSites(*HAnimSite1398);

CHAnimSite* HAnimSite1399 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1399->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1399);

CHAnimSite* HAnimSite1400 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1400->setUSE("hanim_r_radiale_pt");
HAnimHumanoid43->setSites(*HAnimSite1400);

CHAnimSite* HAnimSite1401 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1401->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid43->setSites(*HAnimSite1401);

CHAnimSite* HAnimSite1402 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1402->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(*HAnimSite1402);

CHAnimSite* HAnimSite1403 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1403->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(*HAnimSite1403);

CHAnimSite* HAnimSite1404 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1404->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(*HAnimSite1404);

CHAnimSite* HAnimSite1405 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1405->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1405);

CHAnimSite* HAnimSite1406 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1406->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1406);

CHAnimSite* HAnimSite1407 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1407->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid43->setSites(*HAnimSite1407);

CHAnimSite* HAnimSite1408 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1408->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1408);

CHAnimSite* HAnimSite1409 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1409->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1409);

CHAnimSite* HAnimSite1410 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1410->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1410);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
