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
Coordinate312->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet311->setCoord(*Coordinate312);

//from vl5 to vl4 vertices 2
CColorRGBA* ColorRGBA313 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA313->setUSE("HAnimSegmentLineColorRGBA");
LineSet311->setColor(*ColorRGBA313);

Shape310->setGeometry(LineSet311);

HAnimSegment306->addChildren(*Shape310);

HAnimJoint305->addChildren(*HAnimSegment306);

CHAnimJoint* HAnimJoint314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint314->setName("vl4");
HAnimJoint314->setDEF("hanim_vl4");
HAnimJoint314->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint314->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint314->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment315->setName("l4");
HAnimSegment315->setDEF("hanim_l4");
CTransform* Transform316 = (CTransform *)(m_pScene.createNode("Transform"));
Transform316->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CTransform* Transform317 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape318 = (CShape *)(m_pScene.createNode("Shape"));
Shape318->setUSE("HAnimJointShape");
Transform317->addChild(*Shape318);

Transform316->addChildren(*Transform317);

HAnimSegment315->addChildren(*Transform316);

CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet320 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet320->setVertexCount(new int[1]{2});
CCoordinate* Coordinate321 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate321->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet320->setCoord(*Coordinate321);

//from vl4 to vl3 vertices 2
CColorRGBA* ColorRGBA322 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA322->setUSE("HAnimSegmentLineColorRGBA");
LineSet320->setColor(*ColorRGBA322);

Shape319->setGeometry(LineSet320);

HAnimSegment315->addChildren(*Shape319);

HAnimJoint314->addChildren(*HAnimSegment315);

CHAnimJoint* HAnimJoint323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint323->setName("vl3");
HAnimJoint323->setDEF("hanim_vl3");
HAnimJoint323->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint323->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint323->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment324 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment324->setName("l3");
HAnimSegment324->setDEF("hanim_l3");
CTransform* Transform325 = (CTransform *)(m_pScene.createNode("Transform"));
Transform325->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CTransform* Transform326 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape327 = (CShape *)(m_pScene.createNode("Shape"));
Shape327->setUSE("HAnimJointShape");
Transform326->addChild(*Shape327);

Transform325->addChildren(*Transform326);

HAnimSegment324->addChildren(*Transform325);

CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet329 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet329->setVertexCount(new int[1]{2});
CCoordinate* Coordinate330 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate330->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet329->setCoord(*Coordinate330);

//from vl3 to vl2 vertices 2
CColorRGBA* ColorRGBA331 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA331->setUSE("HAnimSegmentLineColorRGBA");
LineSet329->setColor(*ColorRGBA331);

Shape328->setGeometry(LineSet329);

HAnimSegment324->addChildren(*Shape328);

CHAnimSite* HAnimSite332 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite332->setName("l_rib10");
HAnimSite332->setDEF("hanim_l_rib10");
HAnimSite332->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CTouchSensor* TouchSensor333 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor333->setDescription("HAnimSite l_rib10");
HAnimSite332->addChildren(*TouchSensor333);

CShape* Shape334 = (CShape *)(m_pScene.createNode("Shape"));
Shape334->setUSE("HAnimSiteShape");
HAnimSite332->addChildren(*Shape334);

HAnimSegment324->addChildren(*HAnimSite332);

CHAnimSite* HAnimSite335 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite335->setName("r_rib10");
HAnimSite335->setDEF("hanim_r_rib10");
HAnimSite335->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CTouchSensor* TouchSensor336 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor336->setDescription("HAnimSite r_rib10");
HAnimSite335->addChildren(*TouchSensor336);

CShape* Shape337 = (CShape *)(m_pScene.createNode("Shape"));
Shape337->setUSE("HAnimSiteShape");
HAnimSite335->addChildren(*Shape337);

HAnimSegment324->addChildren(*HAnimSite335);

CHAnimSite* HAnimSite338 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite338->setName("spine_2_middle_back");
HAnimSite338->setDEF("hanim_spine_2_middle_back");
CTouchSensor* TouchSensor339 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor339->setDescription("HAnimSite spine_2_middle_back");
HAnimSite338->addChildren(*TouchSensor339);

CShape* Shape340 = (CShape *)(m_pScene.createNode("Shape"));
Shape340->setUSE("HAnimSiteShape");
HAnimSite338->addChildren(*Shape340);

HAnimSegment324->addChildren(*HAnimSite338);

HAnimJoint323->addChildren(*HAnimSegment324);

CHAnimJoint* HAnimJoint341 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint341->setName("vl2");
HAnimJoint341->setDEF("hanim_vl2");
HAnimJoint341->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint341->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint341->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment342 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment342->setName("l2");
HAnimSegment342->setDEF("hanim_l2");
CTransform* Transform343 = (CTransform *)(m_pScene.createNode("Transform"));
Transform343->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CTransform* Transform344 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape345 = (CShape *)(m_pScene.createNode("Shape"));
Shape345->setUSE("HAnimJointShape");
Transform344->addChild(*Shape345);

Transform343->addChildren(*Transform344);

HAnimSegment342->addChildren(*Transform343);

CShape* Shape346 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet347 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet347->setVertexCount(new int[1]{2});
CCoordinate* Coordinate348 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate348->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet347->setCoord(*Coordinate348);

//from vl2 to vl1 vertices 2
CColorRGBA* ColorRGBA349 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA349->setUSE("HAnimSegmentLineColorRGBA");
LineSet347->setColor(*ColorRGBA349);

Shape346->setGeometry(LineSet347);

HAnimSegment342->addChildren(*Shape346);

HAnimJoint341->addChildren(*HAnimSegment342);

CHAnimJoint* HAnimJoint350 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint350->setName("vl1");
HAnimJoint350->setDEF("hanim_vl1");
HAnimJoint350->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint350->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint350->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment351 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment351->setName("l1");
HAnimSegment351->setDEF("hanim_l1");
CTransform* Transform352 = (CTransform *)(m_pScene.createNode("Transform"));
Transform352->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CTransform* Transform353 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape354 = (CShape *)(m_pScene.createNode("Shape"));
Shape354->setUSE("HAnimJointShape");
Transform353->addChild(*Shape354);

Transform352->addChildren(*Transform353);

HAnimSegment351->addChildren(*Transform352);

CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet356 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet356->setVertexCount(new int[1]{2});
CCoordinate* Coordinate357 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate357->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet356->setCoord(*Coordinate357);

//from vl1 to vt12 vertices 2
CColorRGBA* ColorRGBA358 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA358->setUSE("HAnimSegmentLineColorRGBA");
LineSet356->setColor(*ColorRGBA358);

Shape355->setGeometry(LineSet356);

HAnimSegment351->addChildren(*Shape355);

HAnimJoint350->addChildren(*HAnimSegment351);

CHAnimJoint* HAnimJoint359 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint359->setName("vt12");
HAnimJoint359->setDEF("hanim_vt12");
HAnimJoint359->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint359->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint359->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment360 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment360->setName("t12");
HAnimSegment360->setDEF("hanim_t12");
CTransform* Transform361 = (CTransform *)(m_pScene.createNode("Transform"));
Transform361->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CTransform* Transform362 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape363 = (CShape *)(m_pScene.createNode("Shape"));
Shape363->setUSE("HAnimJointShape");
Transform362->addChild(*Shape363);

Transform361->addChildren(*Transform362);

HAnimSegment360->addChildren(*Transform361);

CShape* Shape364 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet365 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet365->setVertexCount(new int[1]{2});
CCoordinate* Coordinate366 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate366->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet365->setCoord(*Coordinate366);

//from vt12 to vt11 vertices 2
CColorRGBA* ColorRGBA367 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA367->setUSE("HAnimSegmentLineColorRGBA");
LineSet365->setColor(*ColorRGBA367);

Shape364->setGeometry(LineSet365);

HAnimSegment360->addChildren(*Shape364);

HAnimJoint359->addChildren(*HAnimSegment360);

CHAnimJoint* HAnimJoint368 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint368->setName("vt11");
HAnimJoint368->setDEF("hanim_vt11");
HAnimJoint368->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint368->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint368->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment369 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment369->setName("t11");
HAnimSegment369->setDEF("hanim_t11");
CTransform* Transform370 = (CTransform *)(m_pScene.createNode("Transform"));
Transform370->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CTransform* Transform371 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape372 = (CShape *)(m_pScene.createNode("Shape"));
Shape372->setUSE("HAnimJointShape");
Transform371->addChild(*Shape372);

Transform370->addChildren(*Transform371);

HAnimSegment369->addChildren(*Transform370);

CShape* Shape373 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet374 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet374->setVertexCount(new int[1]{2});
CCoordinate* Coordinate375 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate375->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet374->setCoord(*Coordinate375);

//from vt11 to vt10 vertices 2
CColorRGBA* ColorRGBA376 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA376->setUSE("HAnimSegmentLineColorRGBA");
LineSet374->setColor(*ColorRGBA376);

Shape373->setGeometry(LineSet374);

HAnimSegment369->addChildren(*Shape373);

CHAnimSite* HAnimSite377 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite377->setName("substernale");
HAnimSite377->setDEF("hanim_substernale");
HAnimSite377->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CTouchSensor* TouchSensor378 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor378->setDescription("HAnimSite substernale");
HAnimSite377->addChildren(*TouchSensor378);

CShape* Shape379 = (CShape *)(m_pScene.createNode("Shape"));
Shape379->setUSE("HAnimSiteShape");
HAnimSite377->addChildren(*Shape379);

HAnimSegment369->addChildren(*HAnimSite377);

HAnimJoint368->addChildren(*HAnimSegment369);

CHAnimJoint* HAnimJoint380 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint380->setName("vt10");
HAnimJoint380->setDEF("hanim_vt10");
HAnimJoint380->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint380->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint380->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment381 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment381->setName("t10");
HAnimSegment381->setDEF("hanim_t10");
CTransform* Transform382 = (CTransform *)(m_pScene.createNode("Transform"));
Transform382->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CTransform* Transform383 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape384 = (CShape *)(m_pScene.createNode("Shape"));
Shape384->setUSE("HAnimJointShape");
Transform383->addChild(*Shape384);

Transform382->addChildren(*Transform383);

HAnimSegment381->addChildren(*Transform382);

CShape* Shape385 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet386 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet386->setVertexCount(new int[1]{2});
CCoordinate* Coordinate387 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate387->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet386->setCoord(*Coordinate387);

//from vt10 to vt9 vertices 2
CColorRGBA* ColorRGBA388 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA388->setUSE("HAnimSegmentLineColorRGBA");
LineSet386->setColor(*ColorRGBA388);

Shape385->setGeometry(LineSet386);

HAnimSegment381->addChildren(*Shape385);

CHAnimSite* HAnimSite389 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite389->setName("l_thelion");
HAnimSite389->setDEF("hanim_l_thelion");
HAnimSite389->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CTouchSensor* TouchSensor390 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor390->setDescription("HAnimSite l_thelion");
HAnimSite389->addChildren(*TouchSensor390);

CShape* Shape391 = (CShape *)(m_pScene.createNode("Shape"));
Shape391->setUSE("HAnimSiteShape");
HAnimSite389->addChildren(*Shape391);

HAnimSegment381->addChildren(*HAnimSite389);

CHAnimSite* HAnimSite392 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite392->setName("r_thelion");
HAnimSite392->setDEF("hanim_r_thelion");
HAnimSite392->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CTouchSensor* TouchSensor393 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor393->setDescription("HAnimSite r_thelion");
HAnimSite392->addChildren(*TouchSensor393);

CShape* Shape394 = (CShape *)(m_pScene.createNode("Shape"));
Shape394->setUSE("HAnimSiteShape");
HAnimSite392->addChildren(*Shape394);

HAnimSegment381->addChildren(*HAnimSite392);

HAnimJoint380->addChildren(*HAnimSegment381);

CHAnimJoint* HAnimJoint395 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint395->setName("vt9");
HAnimJoint395->setDEF("hanim_vt9");
HAnimJoint395->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint395->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint395->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment396 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment396->setName("t9");
HAnimSegment396->setDEF("hanim_t9");
CTransform* Transform397 = (CTransform *)(m_pScene.createNode("Transform"));
Transform397->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
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
Coordinate402->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet401->setCoord(*Coordinate402);

//from vt9 to vt8 vertices 2
CColorRGBA* ColorRGBA403 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA403->setUSE("HAnimSegmentLineColorRGBA");
LineSet401->setColor(*ColorRGBA403);

Shape400->setGeometry(LineSet401);

HAnimSegment396->addChildren(*Shape400);

HAnimJoint395->addChildren(*HAnimSegment396);

CHAnimJoint* HAnimJoint404 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint404->setName("vt8");
HAnimJoint404->setDEF("hanim_vt8");
HAnimJoint404->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint404->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint404->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment405 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment405->setName("t8");
HAnimSegment405->setDEF("hanim_t8");
CTransform* Transform406 = (CTransform *)(m_pScene.createNode("Transform"));
Transform406->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CTransform* Transform407 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape408 = (CShape *)(m_pScene.createNode("Shape"));
Shape408->setUSE("HAnimJointShape");
Transform407->addChild(*Shape408);

Transform406->addChildren(*Transform407);

HAnimSegment405->addChildren(*Transform406);

CShape* Shape409 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet410 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet410->setVertexCount(new int[1]{2});
CCoordinate* Coordinate411 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate411->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet410->setCoord(*Coordinate411);

//from vt8 to vt7 vertices 2
CColorRGBA* ColorRGBA412 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA412->setUSE("HAnimSegmentLineColorRGBA");
LineSet410->setColor(*ColorRGBA412);

Shape409->setGeometry(LineSet410);

HAnimSegment405->addChildren(*Shape409);

HAnimJoint404->addChildren(*HAnimSegment405);

CHAnimJoint* HAnimJoint413 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint413->setName("vt7");
HAnimJoint413->setDEF("hanim_vt7");
HAnimJoint413->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint413->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint413->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment414 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment414->setName("t7");
HAnimSegment414->setDEF("hanim_t7");
CTransform* Transform415 = (CTransform *)(m_pScene.createNode("Transform"));
Transform415->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CTransform* Transform416 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape417 = (CShape *)(m_pScene.createNode("Shape"));
Shape417->setUSE("HAnimJointShape");
Transform416->addChild(*Shape417);

Transform415->addChildren(*Transform416);

HAnimSegment414->addChildren(*Transform415);

CShape* Shape418 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet419 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet419->setVertexCount(new int[1]{2});
CCoordinate* Coordinate420 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate420->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet419->setCoord(*Coordinate420);

//from vt7 to vt6 vertices 2
CColorRGBA* ColorRGBA421 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA421->setUSE("HAnimSegmentLineColorRGBA");
LineSet419->setColor(*ColorRGBA421);

Shape418->setGeometry(LineSet419);

HAnimSegment414->addChildren(*Shape418);

CHAnimSite* HAnimSite422 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite422->setName("l_chest_midsagittal_plane");
HAnimSite422->setDEF("hanim_l_chest_midsagittal_plane");
CTouchSensor* TouchSensor423 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor423->setDescription("HAnimSite l_chest_midsagittal_plane");
HAnimSite422->addChildren(*TouchSensor423);

CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
Shape424->setUSE("HAnimSiteShape");
HAnimSite422->addChildren(*Shape424);

HAnimSegment414->addChildren(*HAnimSite422);

CHAnimSite* HAnimSite425 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite425->setName("mesosternale");
HAnimSite425->setDEF("hanim_mesosternale");
CTouchSensor* TouchSensor426 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor426->setDescription("HAnimSite mesosternale");
HAnimSite425->addChildren(*TouchSensor426);

CShape* Shape427 = (CShape *)(m_pScene.createNode("Shape"));
Shape427->setUSE("HAnimSiteShape");
HAnimSite425->addChildren(*Shape427);

HAnimSegment414->addChildren(*HAnimSite425);

CHAnimSite* HAnimSite428 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite428->setName("r_chest_midsagittal_plane");
HAnimSite428->setDEF("hanim_r_chest_midsagittal_plane");
CTouchSensor* TouchSensor429 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor429->setDescription("HAnimSite r_chest_midsagittal_plane");
HAnimSite428->addChildren(*TouchSensor429);

CShape* Shape430 = (CShape *)(m_pScene.createNode("Shape"));
Shape430->setUSE("HAnimSiteShape");
HAnimSite428->addChildren(*Shape430);

HAnimSegment414->addChildren(*HAnimSite428);

CHAnimSite* HAnimSite431 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite431->setName("rear_center_midsagittal_plane");
HAnimSite431->setDEF("hanim_rear_center_midsagittal_plane");
CTouchSensor* TouchSensor432 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor432->setDescription("HAnimSite rear_center_midsagittal_plane");
HAnimSite431->addChildren(*TouchSensor432);

CShape* Shape433 = (CShape *)(m_pScene.createNode("Shape"));
Shape433->setUSE("HAnimSiteShape");
HAnimSite431->addChildren(*Shape433);

HAnimSegment414->addChildren(*HAnimSite431);

HAnimJoint413->addChildren(*HAnimSegment414);

CHAnimJoint* HAnimJoint434 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint434->setName("vt6");
HAnimJoint434->setDEF("hanim_vt6");
HAnimJoint434->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint434->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint434->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment435 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment435->setName("t6");
HAnimSegment435->setDEF("hanim_t6");
CTransform* Transform436 = (CTransform *)(m_pScene.createNode("Transform"));
Transform436->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CTransform* Transform437 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape438 = (CShape *)(m_pScene.createNode("Shape"));
Shape438->setUSE("HAnimJointShape");
Transform437->addChild(*Shape438);

Transform436->addChildren(*Transform437);

HAnimSegment435->addChildren(*Transform436);

CShape* Shape439 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet440 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet440->setVertexCount(new int[1]{2});
CCoordinate* Coordinate441 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate441->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet440->setCoord(*Coordinate441);

//from vt6 to vt5 vertices 2
CColorRGBA* ColorRGBA442 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA442->setUSE("HAnimSegmentLineColorRGBA");
LineSet440->setColor(*ColorRGBA442);

Shape439->setGeometry(LineSet440);

HAnimSegment435->addChildren(*Shape439);

CHAnimSite* HAnimSite443 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite443->setName("spine_1_middle_back");
HAnimSite443->setDEF("hanim_spine_1_middle_back");
CTouchSensor* TouchSensor444 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor444->setDescription("HAnimSite spine_1_middle_back");
HAnimSite443->addChildren(*TouchSensor444);

CShape* Shape445 = (CShape *)(m_pScene.createNode("Shape"));
Shape445->setUSE("HAnimSiteShape");
HAnimSite443->addChildren(*Shape445);

HAnimSegment435->addChildren(*HAnimSite443);

HAnimJoint434->addChildren(*HAnimSegment435);

CHAnimJoint* HAnimJoint446 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint446->setName("vt5");
HAnimJoint446->setDEF("hanim_vt5");
HAnimJoint446->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint446->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint446->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment447 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment447->setName("t5");
HAnimSegment447->setDEF("hanim_t5");
CTransform* Transform448 = (CTransform *)(m_pScene.createNode("Transform"));
Transform448->setTranslation(new float[3]{0.006,1.4102,-0.0745});
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
Coordinate453->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet452->setCoord(*Coordinate453);

//from vt5 to vt4 vertices 2
CColorRGBA* ColorRGBA454 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA454->setUSE("HAnimSegmentLineColorRGBA");
LineSet452->setColor(*ColorRGBA454);

Shape451->setGeometry(LineSet452);

HAnimSegment447->addChildren(*Shape451);

HAnimJoint446->addChildren(*HAnimSegment447);

CHAnimJoint* HAnimJoint455 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint455->setName("vt4");
HAnimJoint455->setDEF("hanim_vt4");
HAnimJoint455->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint455->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint455->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment456 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment456->setName("t4");
HAnimSegment456->setDEF("hanim_t4");
CTransform* Transform457 = (CTransform *)(m_pScene.createNode("Transform"));
Transform457->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CTransform* Transform458 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape459 = (CShape *)(m_pScene.createNode("Shape"));
Shape459->setUSE("HAnimJointShape");
Transform458->addChild(*Shape459);

Transform457->addChildren(*Transform458);

HAnimSegment456->addChildren(*Transform457);

CShape* Shape460 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet461 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet461->setVertexCount(new int[1]{2});
CCoordinate* Coordinate462 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate462->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet461->setCoord(*Coordinate462);

//from vt4 to vt3 vertices 2
CColorRGBA* ColorRGBA463 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA463->setUSE("HAnimSegmentLineColorRGBA");
LineSet461->setColor(*ColorRGBA463);

Shape460->setGeometry(LineSet461);

HAnimSegment456->addChildren(*Shape460);

HAnimJoint455->addChildren(*HAnimSegment456);

CHAnimJoint* HAnimJoint464 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint464->setName("vt3");
HAnimJoint464->setDEF("hanim_vt3");
HAnimJoint464->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint464->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint464->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment465 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment465->setName("t3");
HAnimSegment465->setDEF("hanim_t3");
CTransform* Transform466 = (CTransform *)(m_pScene.createNode("Transform"));
Transform466->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CTransform* Transform467 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape468 = (CShape *)(m_pScene.createNode("Shape"));
Shape468->setUSE("HAnimJointShape");
Transform467->addChild(*Shape468);

Transform466->addChildren(*Transform467);

HAnimSegment465->addChildren(*Transform466);

CShape* Shape469 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet470 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet470->setVertexCount(new int[1]{2});
CCoordinate* Coordinate471 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate471->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet470->setCoord(*Coordinate471);

//from vt3 to vt2 vertices 2
CColorRGBA* ColorRGBA472 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA472->setUSE("HAnimSegmentLineColorRGBA");
LineSet470->setColor(*ColorRGBA472);

Shape469->setGeometry(LineSet470);

HAnimSegment465->addChildren(*Shape469);

HAnimJoint464->addChildren(*HAnimSegment465);

CHAnimJoint* HAnimJoint473 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint473->setName("vt2");
HAnimJoint473->setDEF("hanim_vt2");
HAnimJoint473->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint473->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint473->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment474 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment474->setName("t2");
HAnimSegment474->setDEF("hanim_t2");
CTransform* Transform475 = (CTransform *)(m_pScene.createNode("Transform"));
Transform475->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CTransform* Transform476 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape477 = (CShape *)(m_pScene.createNode("Shape"));
Shape477->setUSE("HAnimJointShape");
Transform476->addChild(*Shape477);

Transform475->addChildren(*Transform476);

HAnimSegment474->addChildren(*Transform475);

CShape* Shape478 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet479 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet479->setVertexCount(new int[1]{2});
CCoordinate* Coordinate480 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate480->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet479->setCoord(*Coordinate480);

//from vt2 to vt1 vertices 2
CColorRGBA* ColorRGBA481 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA481->setUSE("HAnimSegmentLineColorRGBA");
LineSet479->setColor(*ColorRGBA481);

Shape478->setGeometry(LineSet479);

HAnimSegment474->addChildren(*Shape478);

CHAnimSite* HAnimSite482 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite482->setName("cervicale");
HAnimSite482->setDEF("hanim_cervicale");
HAnimSite482->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CTouchSensor* TouchSensor483 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor483->setDescription("HAnimSite cervicale");
HAnimSite482->addChildren(*TouchSensor483);

CShape* Shape484 = (CShape *)(m_pScene.createNode("Shape"));
Shape484->setUSE("HAnimSiteShape");
HAnimSite482->addChildren(*Shape484);

HAnimSegment474->addChildren(*HAnimSite482);

CHAnimSite* HAnimSite485 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite485->setName("suprasternale");
HAnimSite485->setDEF("hanim_suprasternale");
HAnimSite485->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CTouchSensor* TouchSensor486 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor486->setDescription("HAnimSite suprasternale");
HAnimSite485->addChildren(*TouchSensor486);

CShape* Shape487 = (CShape *)(m_pScene.createNode("Shape"));
Shape487->setUSE("HAnimSiteShape");
HAnimSite485->addChildren(*Shape487);

HAnimSegment474->addChildren(*HAnimSite485);

HAnimJoint473->addChildren(*HAnimSegment474);

CHAnimJoint* HAnimJoint488 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint488->setName("vt1");
HAnimJoint488->setDEF("hanim_vt1");
HAnimJoint488->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint488->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint488->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment489 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment489->setName("t1");
HAnimSegment489->setDEF("hanim_t1");
CTransform* Transform490 = (CTransform *)(m_pScene.createNode("Transform"));
Transform490->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CTransform* Transform491 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape492 = (CShape *)(m_pScene.createNode("Shape"));
Shape492->setUSE("HAnimJointShape");
Transform491->addChild(*Shape492);

Transform490->addChildren(*Transform491);

HAnimSegment489->addChildren(*Transform490);

CShape* Shape493 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet494 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet494->setVertexCount(new int[1]{2});
CCoordinate* Coordinate495 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate495->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet494->setCoord(*Coordinate495);

//from vt1 to vc7 vertices 2
CColorRGBA* ColorRGBA496 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA496->setUSE("HAnimSegmentLineColorRGBA");
LineSet494->setColor(*ColorRGBA496);

Shape493->setGeometry(LineSet494);

HAnimSegment489->addChildren(*Shape493);

CHAnimSite* HAnimSite497 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite497->setName("l_neck_base");
HAnimSite497->setDEF("hanim_l_neck_base");
HAnimSite497->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CTouchSensor* TouchSensor498 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor498->setDescription("HAnimSite l_neck_base");
HAnimSite497->addChildren(*TouchSensor498);

CShape* Shape499 = (CShape *)(m_pScene.createNode("Shape"));
Shape499->setUSE("HAnimSiteShape");
HAnimSite497->addChildren(*Shape499);

HAnimSegment489->addChildren(*HAnimSite497);

CHAnimSite* HAnimSite500 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite500->setName("r_neck_base");
HAnimSite500->setDEF("hanim_r_neck_base");
HAnimSite500->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CTouchSensor* TouchSensor501 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor501->setDescription("HAnimSite r_neck_base");
HAnimSite500->addChildren(*TouchSensor501);

CShape* Shape502 = (CShape *)(m_pScene.createNode("Shape"));
Shape502->setUSE("HAnimSiteShape");
HAnimSite500->addChildren(*Shape502);

HAnimSegment489->addChildren(*HAnimSite500);

CShape* Shape503 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet504 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet504->setVertexCount(new int[1]{2});
CCoordinate* Coordinate505 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate505->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet504->setCoord(*Coordinate505);

//from vt1 to l_sternoclavicular vertices 2
CColorRGBA* ColorRGBA506 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA506->setUSE("HAnimSegmentLineColorRGBA");
LineSet504->setColor(*ColorRGBA506);

Shape503->setGeometry(LineSet504);

HAnimSegment489->addChildren(*Shape503);

CHAnimSite* HAnimSite507 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite507->setName("l_acromion");
HAnimSite507->setDEF("hanim_l_acromion");
HAnimSite507->setTranslation(new float[3]{0.2032,1.476,-0.049});
CTouchSensor* TouchSensor508 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor508->setDescription("HAnimSite l_acromion");
HAnimSite507->addChildren(*TouchSensor508);

CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
Shape509->setUSE("HAnimSiteShape");
HAnimSite507->addChildren(*Shape509);

HAnimSegment489->addChildren(*HAnimSite507);

CHAnimSite* HAnimSite510 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite510->setName("l_axilla_distal_pt");
HAnimSite510->setDEF("hanim_l_axilla_distal_pt");
HAnimSite510->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CTouchSensor* TouchSensor511 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor511->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite510->addChildren(*TouchSensor511);

CShape* Shape512 = (CShape *)(m_pScene.createNode("Shape"));
Shape512->setUSE("HAnimSiteShape");
HAnimSite510->addChildren(*Shape512);

HAnimSegment489->addChildren(*HAnimSite510);

CHAnimSite* HAnimSite513 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite513->setName("l_axilla_posterior_folds");
HAnimSite513->setDEF("hanim_l_axilla_posterior_folds");
CTouchSensor* TouchSensor514 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor514->setDescription("HAnimSite l_axilla_posterior_folds");
HAnimSite513->addChildren(*TouchSensor514);

CShape* Shape515 = (CShape *)(m_pScene.createNode("Shape"));
Shape515->setUSE("HAnimSiteShape");
HAnimSite513->addChildren(*Shape515);

HAnimSegment489->addChildren(*HAnimSite513);

CHAnimSite* HAnimSite516 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite516->setName("l_axilla_proximal");
HAnimSite516->setDEF("hanim_l_axilla_proximal");
HAnimSite516->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CTouchSensor* TouchSensor517 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor517->setDescription("HAnimSite l_axilla_proximal");
HAnimSite516->addChildren(*TouchSensor517);

CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
Shape518->setUSE("HAnimSiteShape");
HAnimSite516->addChildren(*Shape518);

HAnimSegment489->addChildren(*HAnimSite516);

CHAnimSite* HAnimSite519 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite519->setName("l_clavicale");
HAnimSite519->setDEF("hanim_l_clavicale");
HAnimSite519->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CTouchSensor* TouchSensor520 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor520->setDescription("HAnimSite l_clavicale");
HAnimSite519->addChildren(*TouchSensor520);

CShape* Shape521 = (CShape *)(m_pScene.createNode("Shape"));
Shape521->setUSE("HAnimSiteShape");
HAnimSite519->addChildren(*Shape521);

HAnimSegment489->addChildren(*HAnimSite519);

CShape* Shape522 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet523 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet523->setVertexCount(new int[1]{2});
CCoordinate* Coordinate524 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate524->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet523->setCoord(*Coordinate524);

//from vt1 to r_sternoclavicular vertices 2
CColorRGBA* ColorRGBA525 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA525->setUSE("HAnimSegmentLineColorRGBA");
LineSet523->setColor(*ColorRGBA525);

Shape522->setGeometry(LineSet523);

HAnimSegment489->addChildren(*Shape522);

CHAnimSite* HAnimSite526 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite526->setName("r_acromion");
HAnimSite526->setDEF("hanim_r_acromion");
HAnimSite526->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CTouchSensor* TouchSensor527 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor527->setDescription("HAnimSite r_acromion");
HAnimSite526->addChildren(*TouchSensor527);

CShape* Shape528 = (CShape *)(m_pScene.createNode("Shape"));
Shape528->setUSE("HAnimSiteShape");
HAnimSite526->addChildren(*Shape528);

HAnimSegment489->addChildren(*HAnimSite526);

CHAnimSite* HAnimSite529 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite529->setName("r_axilla_distal_pt");
HAnimSite529->setDEF("hanim_r_axilla_distal_pt");
HAnimSite529->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CTouchSensor* TouchSensor530 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor530->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite529->addChildren(*TouchSensor530);

CShape* Shape531 = (CShape *)(m_pScene.createNode("Shape"));
Shape531->setUSE("HAnimSiteShape");
HAnimSite529->addChildren(*Shape531);

HAnimSegment489->addChildren(*HAnimSite529);

CHAnimSite* HAnimSite532 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite532->setName("r_axilla_posterior_folds");
HAnimSite532->setDEF("hanim_r_axilla_posterior_folds");
CTouchSensor* TouchSensor533 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor533->setDescription("HAnimSite r_axilla_posterior_folds");
HAnimSite532->addChildren(*TouchSensor533);

CShape* Shape534 = (CShape *)(m_pScene.createNode("Shape"));
Shape534->setUSE("HAnimSiteShape");
HAnimSite532->addChildren(*Shape534);

HAnimSegment489->addChildren(*HAnimSite532);

CHAnimSite* HAnimSite535 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite535->setName("r_axilla_proximal");
HAnimSite535->setDEF("hanim_r_axilla_proximal");
HAnimSite535->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CTouchSensor* TouchSensor536 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor536->setDescription("HAnimSite r_axilla_proximal");
HAnimSite535->addChildren(*TouchSensor536);

CShape* Shape537 = (CShape *)(m_pScene.createNode("Shape"));
Shape537->setUSE("HAnimSiteShape");
HAnimSite535->addChildren(*Shape537);

HAnimSegment489->addChildren(*HAnimSite535);

CHAnimSite* HAnimSite538 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite538->setName("r_clavicale");
HAnimSite538->setDEF("hanim_r_clavicale");
HAnimSite538->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CTouchSensor* TouchSensor539 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor539->setDescription("HAnimSite r_clavicale");
HAnimSite538->addChildren(*TouchSensor539);

CShape* Shape540 = (CShape *)(m_pScene.createNode("Shape"));
Shape540->setUSE("HAnimSiteShape");
HAnimSite538->addChildren(*Shape540);

HAnimSegment489->addChildren(*HAnimSite538);

HAnimJoint488->addChildren(*HAnimSegment489);

CHAnimJoint* HAnimJoint541 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint541->setName("vc7");
HAnimJoint541->setDEF("hanim_vc7");
HAnimJoint541->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint541->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint541->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment542 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment542->setName("c7");
HAnimSegment542->setDEF("hanim_c7");
CTransform* Transform543 = (CTransform *)(m_pScene.createNode("Transform"));
Transform543->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CTransform* Transform544 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape545 = (CShape *)(m_pScene.createNode("Shape"));
Shape545->setUSE("HAnimJointShape");
Transform544->addChild(*Shape545);

Transform543->addChildren(*Transform544);

HAnimSegment542->addChildren(*Transform543);

CShape* Shape546 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet547 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet547->setVertexCount(new int[1]{2});
CCoordinate* Coordinate548 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate548->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet547->setCoord(*Coordinate548);

//from vc7 to vc6 vertices 2
CColorRGBA* ColorRGBA549 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA549->setUSE("HAnimSegmentLineColorRGBA");
LineSet547->setColor(*ColorRGBA549);

Shape546->setGeometry(LineSet547);

HAnimSegment542->addChildren(*Shape546);

HAnimJoint541->addChildren(*HAnimSegment542);

CHAnimJoint* HAnimJoint550 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint550->setName("vc6");
HAnimJoint550->setDEF("hanim_vc6");
HAnimJoint550->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint550->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint550->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment551 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment551->setName("c6");
HAnimSegment551->setDEF("hanim_c6");
CTransform* Transform552 = (CTransform *)(m_pScene.createNode("Transform"));
Transform552->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
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
Coordinate557->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet556->setCoord(*Coordinate557);

//from vc6 to vc5 vertices 2
CColorRGBA* ColorRGBA558 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA558->setUSE("HAnimSegmentLineColorRGBA");
LineSet556->setColor(*ColorRGBA558);

Shape555->setGeometry(LineSet556);

HAnimSegment551->addChildren(*Shape555);

HAnimJoint550->addChildren(*HAnimSegment551);

CHAnimJoint* HAnimJoint559 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint559->setName("vc5");
HAnimJoint559->setDEF("hanim_vc5");
HAnimJoint559->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint559->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint559->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment560 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment560->setName("c5");
HAnimSegment560->setDEF("hanim_c5");
CTransform* Transform561 = (CTransform *)(m_pScene.createNode("Transform"));
Transform561->setTranslation(new float[3]{0.0066,1.552,-0.0082});
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
Coordinate566->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet565->setCoord(*Coordinate566);

//from vc5 to vc4 vertices 2
CColorRGBA* ColorRGBA567 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA567->setUSE("HAnimSegmentLineColorRGBA");
LineSet565->setColor(*ColorRGBA567);

Shape564->setGeometry(LineSet565);

HAnimSegment560->addChildren(*Shape564);

HAnimJoint559->addChildren(*HAnimSegment560);

CHAnimJoint* HAnimJoint568 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint568->setName("vc4");
HAnimJoint568->setDEF("hanim_vc4");
HAnimJoint568->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint568->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint568->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment569 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment569->setName("c4");
HAnimSegment569->setDEF("hanim_c4");
CTransform* Transform570 = (CTransform *)(m_pScene.createNode("Transform"));
Transform570->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
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
Coordinate575->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet574->setCoord(*Coordinate575);

//from vc4 to vc3 vertices 2
CColorRGBA* ColorRGBA576 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA576->setUSE("HAnimSegmentLineColorRGBA");
LineSet574->setColor(*ColorRGBA576);

Shape573->setGeometry(LineSet574);

HAnimSegment569->addChildren(*Shape573);

HAnimJoint568->addChildren(*HAnimSegment569);

CHAnimJoint* HAnimJoint577 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint577->setName("vc3");
HAnimJoint577->setDEF("hanim_vc3");
HAnimJoint577->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint577->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint577->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment578 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment578->setName("c3");
HAnimSegment578->setDEF("hanim_c3");
CTransform* Transform579 = (CTransform *)(m_pScene.createNode("Transform"));
Transform579->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CTransform* Transform580 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape581 = (CShape *)(m_pScene.createNode("Shape"));
Shape581->setUSE("HAnimJointShape");
Transform580->addChild(*Shape581);

Transform579->addChildren(*Transform580);

HAnimSegment578->addChildren(*Transform579);

CShape* Shape582 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet583 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet583->setVertexCount(new int[1]{2});
CCoordinate* Coordinate584 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate584->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet583->setCoord(*Coordinate584);

//from vc3 to vc2 vertices 2
CColorRGBA* ColorRGBA585 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA585->setUSE("HAnimSegmentLineColorRGBA");
LineSet583->setColor(*ColorRGBA585);

Shape582->setGeometry(LineSet583);

HAnimSegment578->addChildren(*Shape582);

CHAnimSite* HAnimSite586 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite586->setName("adams_apple");
HAnimSite586->setDEF("hanim_adams_apple");
CTouchSensor* TouchSensor587 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor587->setDescription("HAnimSite adams_apple");
HAnimSite586->addChildren(*TouchSensor587);

CShape* Shape588 = (CShape *)(m_pScene.createNode("Shape"));
Shape588->setUSE("HAnimSiteShape");
HAnimSite586->addChildren(*Shape588);

HAnimSegment578->addChildren(*HAnimSite586);

HAnimJoint577->addChildren(*HAnimSegment578);

CHAnimJoint* HAnimJoint589 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint589->setName("vc2");
HAnimJoint589->setDEF("hanim_vc2");
HAnimJoint589->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint589->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint589->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment590 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment590->setName("c2");
HAnimSegment590->setDEF("hanim_c2");
CTransform* Transform591 = (CTransform *)(m_pScene.createNode("Transform"));
Transform591->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CTransform* Transform592 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape593 = (CShape *)(m_pScene.createNode("Shape"));
Shape593->setUSE("HAnimJointShape");
Transform592->addChild(*Shape593);

Transform591->addChildren(*Transform592);

HAnimSegment590->addChildren(*Transform591);

CShape* Shape594 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet595 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet595->setVertexCount(new int[1]{2});
CCoordinate* Coordinate596 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate596->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet595->setCoord(*Coordinate596);

//from vc2 to vc1 vertices 2
CColorRGBA* ColorRGBA597 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA597->setUSE("HAnimSegmentLineColorRGBA");
LineSet595->setColor(*ColorRGBA597);

Shape594->setGeometry(LineSet595);

HAnimSegment590->addChildren(*Shape594);

HAnimJoint589->addChildren(*HAnimSegment590);

CHAnimJoint* HAnimJoint598 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint598->setName("vc1");
HAnimJoint598->setDEF("hanim_vc1");
HAnimJoint598->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint598->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint598->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment599 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment599->setName("c1");
HAnimSegment599->setDEF("hanim_c1");
CTransform* Transform600 = (CTransform *)(m_pScene.createNode("Transform"));
Transform600->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CTransform* Transform601 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape602 = (CShape *)(m_pScene.createNode("Shape"));
Shape602->setUSE("HAnimJointShape");
Transform601->addChild(*Shape602);

Transform600->addChildren(*Transform601);

HAnimSegment599->addChildren(*Transform600);

CShape* Shape603 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet604 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet604->setVertexCount(new int[1]{2});
CCoordinate* Coordinate605 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate605->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet604->setCoord(*Coordinate605);

//from vc1 to skullbase vertices 2
CColorRGBA* ColorRGBA606 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA606->setUSE("HAnimSegmentLineColorRGBA");
LineSet604->setColor(*ColorRGBA606);

Shape603->setGeometry(LineSet604);

HAnimSegment599->addChildren(*Shape603);

CHAnimSite* HAnimSite607 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite607->setName("glabella");
HAnimSite607->setDEF("hanim_glabella");
CTouchSensor* TouchSensor608 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor608->setDescription("HAnimSite glabella");
HAnimSite607->addChildren(*TouchSensor608);

CShape* Shape609 = (CShape *)(m_pScene.createNode("Shape"));
Shape609->setUSE("HAnimSiteShape");
HAnimSite607->addChildren(*Shape609);

HAnimSegment599->addChildren(*HAnimSite607);

CHAnimSite* HAnimSite610 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite610->setName("l_ectocanthus");
HAnimSite610->setDEF("hanim_l_ectocanthus");
CTouchSensor* TouchSensor611 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor611->setDescription("HAnimSite l_ectocanthus");
HAnimSite610->addChildren(*TouchSensor611);

CShape* Shape612 = (CShape *)(m_pScene.createNode("Shape"));
Shape612->setUSE("HAnimSiteShape");
HAnimSite610->addChildren(*Shape612);

HAnimSegment599->addChildren(*HAnimSite610);

CHAnimSite* HAnimSite613 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite613->setName("l_infraorbitale");
HAnimSite613->setDEF("hanim_l_infraorbitale");
HAnimSite613->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CTouchSensor* TouchSensor614 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor614->setDescription("HAnimSite l_infraorbitale");
HAnimSite613->addChildren(*TouchSensor614);

CShape* Shape615 = (CShape *)(m_pScene.createNode("Shape"));
Shape615->setUSE("HAnimSiteShape");
HAnimSite613->addChildren(*Shape615);

HAnimSegment599->addChildren(*HAnimSite613);

CHAnimSite* HAnimSite616 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite616->setName("l_tragion");
HAnimSite616->setDEF("hanim_l_tragion");
HAnimSite616->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CTouchSensor* TouchSensor617 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor617->setDescription("HAnimSite l_tragion");
HAnimSite616->addChildren(*TouchSensor617);

CShape* Shape618 = (CShape *)(m_pScene.createNode("Shape"));
Shape618->setUSE("HAnimSiteShape");
HAnimSite616->addChildren(*Shape618);

HAnimSegment599->addChildren(*HAnimSite616);

CHAnimSite* HAnimSite619 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite619->setName("nuchale");
HAnimSite619->setDEF("hanim_nuchale");
HAnimSite619->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CTouchSensor* TouchSensor620 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor620->setDescription("HAnimSite nuchale");
HAnimSite619->addChildren(*TouchSensor620);

CShape* Shape621 = (CShape *)(m_pScene.createNode("Shape"));
Shape621->setUSE("HAnimSiteShape");
HAnimSite619->addChildren(*Shape621);

HAnimSegment599->addChildren(*HAnimSite619);

CHAnimSite* HAnimSite622 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite622->setName("opisthocranion");
HAnimSite622->setDEF("hanim_opisthocranion");
CTouchSensor* TouchSensor623 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor623->setDescription("HAnimSite opisthocranion");
HAnimSite622->addChildren(*TouchSensor623);

CShape* Shape624 = (CShape *)(m_pScene.createNode("Shape"));
Shape624->setUSE("HAnimSiteShape");
HAnimSite622->addChildren(*Shape624);

HAnimSegment599->addChildren(*HAnimSite622);

CHAnimSite* HAnimSite625 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite625->setName("r_ectocanthus");
HAnimSite625->setDEF("hanim_r_ectocanthus");
CTouchSensor* TouchSensor626 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor626->setDescription("HAnimSite r_ectocanthus");
HAnimSite625->addChildren(*TouchSensor626);

CShape* Shape627 = (CShape *)(m_pScene.createNode("Shape"));
Shape627->setUSE("HAnimSiteShape");
HAnimSite625->addChildren(*Shape627);

HAnimSegment599->addChildren(*HAnimSite625);

CHAnimSite* HAnimSite628 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite628->setName("r_infraorbitale");
HAnimSite628->setDEF("hanim_r_infraorbitale");
HAnimSite628->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CTouchSensor* TouchSensor629 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor629->setDescription("HAnimSite r_infraorbitale");
HAnimSite628->addChildren(*TouchSensor629);

CShape* Shape630 = (CShape *)(m_pScene.createNode("Shape"));
Shape630->setUSE("HAnimSiteShape");
HAnimSite628->addChildren(*Shape630);

HAnimSegment599->addChildren(*HAnimSite628);

CHAnimSite* HAnimSite631 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite631->setName("r_tragion");
HAnimSite631->setDEF("hanim_r_tragion");
HAnimSite631->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CTouchSensor* TouchSensor632 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor632->setDescription("HAnimSite r_tragion");
HAnimSite631->addChildren(*TouchSensor632);

CShape* Shape633 = (CShape *)(m_pScene.createNode("Shape"));
Shape633->setUSE("HAnimSiteShape");
HAnimSite631->addChildren(*Shape633);

HAnimSegment599->addChildren(*HAnimSite631);

CHAnimSite* HAnimSite634 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite634->setName("sellion");
HAnimSite634->setDEF("hanim_sellion");
HAnimSite634->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CTouchSensor* TouchSensor635 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor635->setDescription("HAnimSite sellion");
HAnimSite634->addChildren(*TouchSensor635);

CShape* Shape636 = (CShape *)(m_pScene.createNode("Shape"));
Shape636->setUSE("HAnimSiteShape");
HAnimSite634->addChildren(*Shape636);

HAnimSegment599->addChildren(*HAnimSite634);

CHAnimSite* HAnimSite637 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite637->setName("skull_vertex");
HAnimSite637->setDEF("hanim_skull_vertex");
CTouchSensor* TouchSensor638 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor638->setDescription("HAnimSite skull_vertex");
HAnimSite637->addChildren(*TouchSensor638);

CShape* Shape639 = (CShape *)(m_pScene.createNode("Shape"));
Shape639->setUSE("HAnimSiteShape");
HAnimSite637->addChildren(*Shape639);

HAnimSegment599->addChildren(*HAnimSite637);

HAnimJoint598->addChildren(*HAnimSegment599);

CHAnimJoint* HAnimJoint640 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint640->setName("skullbase");
HAnimJoint640->setDEF("hanim_skullbase");
HAnimJoint640->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint640->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment641 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment641->setName("skull");
HAnimSegment641->setDEF("hanim_skull");
CTransform* Transform642 = (CTransform *)(m_pScene.createNode("Transform"));
Transform642->setTranslation(new float[3]{0.0044,1.6209,0.0236});
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
Coordinate647->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689});
LineSet646->setCoord(*Coordinate647);

//from skullbase to l_eyelid_joint vertices 2
CColorRGBA* ColorRGBA648 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA648->setUSE("HAnimSegmentLineColorRGBA");
LineSet646->setColor(*ColorRGBA648);

Shape645->setGeometry(LineSet646);

HAnimSegment641->addChildren(*Shape645);

CShape* Shape649 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet650 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet650->setVertexCount(new int[1]{2});
CCoordinate* Coordinate651 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate651->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689});
LineSet650->setCoord(*Coordinate651);

//from skullbase to r_eyelid_joint vertices 2
CColorRGBA* ColorRGBA652 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA652->setUSE("HAnimSegmentLineColorRGBA");
LineSet650->setColor(*ColorRGBA652);

Shape649->setGeometry(LineSet650);

HAnimSegment641->addChildren(*Shape649);

CShape* Shape653 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet654 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet654->setVertexCount(new int[1]{2});
CCoordinate* Coordinate655 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate655->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188});
LineSet654->setCoord(*Coordinate655);

//from skullbase to l_eyeball_joint vertices 2
CColorRGBA* ColorRGBA656 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA656->setUSE("HAnimSegmentLineColorRGBA");
LineSet654->setColor(*ColorRGBA656);

Shape653->setGeometry(LineSet654);

HAnimSegment641->addChildren(*Shape653);

CShape* Shape657 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet658 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet658->setVertexCount(new int[1]{2});
CCoordinate* Coordinate659 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate659->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188});
LineSet658->setCoord(*Coordinate659);

//from skullbase to r_eyeball_joint vertices 2
CColorRGBA* ColorRGBA660 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA660->setUSE("HAnimSegmentLineColorRGBA");
LineSet658->setColor(*ColorRGBA660);

Shape657->setGeometry(LineSet658);

HAnimSegment641->addChildren(*Shape657);

CShape* Shape661 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet662 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet662->setVertexCount(new int[1]{2});
CCoordinate* Coordinate663 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate663->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0216,1.4053,0.0051});
LineSet662->setCoord(*Coordinate663);

//from skullbase to l_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA664 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA664->setUSE("HAnimSegmentLineColorRGBA");
LineSet662->setColor(*ColorRGBA664);

Shape661->setGeometry(LineSet662);

HAnimSegment641->addChildren(*Shape661);

CShape* Shape665 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet666 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet666->setVertexCount(new int[1]{2});
CCoordinate* Coordinate667 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate667->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051});
LineSet666->setCoord(*Coordinate667);

//from skullbase to r_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA668 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA668->setUSE("HAnimSegmentLineColorRGBA");
LineSet666->setColor(*ColorRGBA668);

Shape665->setGeometry(LineSet666);

HAnimSegment641->addChildren(*Shape665);

CShape* Shape669 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet670 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet670->setVertexCount(new int[1]{2});
CCoordinate* Coordinate671 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate671->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865});
LineSet670->setCoord(*Coordinate671);

//from skullbase to temporomandibular vertices 2
CColorRGBA* ColorRGBA672 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA672->setUSE("HAnimSegmentLineColorRGBA");
LineSet670->setColor(*ColorRGBA672);

Shape669->setGeometry(LineSet670);

HAnimSegment641->addChildren(*Shape669);

CHAnimSite* HAnimSite673 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite673->setName("l_gonion");
HAnimSite673->setDEF("hanim_l_gonion");
HAnimSite673->setTranslation(new float[3]{0.0631,1.553,0.033});
CTouchSensor* TouchSensor674 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor674->setDescription("HAnimSite l_gonion");
HAnimSite673->addChildren(*TouchSensor674);

CShape* Shape675 = (CShape *)(m_pScene.createNode("Shape"));
Shape675->setUSE("HAnimSiteShape");
HAnimSite673->addChildren(*Shape675);

HAnimSegment641->addChildren(*HAnimSite673);

CHAnimSite* HAnimSite676 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite676->setName("menton");
HAnimSite676->setDEF("hanim_menton");
CTouchSensor* TouchSensor677 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor677->setDescription("HAnimSite menton");
HAnimSite676->addChildren(*TouchSensor677);

CShape* Shape678 = (CShape *)(m_pScene.createNode("Shape"));
Shape678->setUSE("HAnimSiteShape");
HAnimSite676->addChildren(*Shape678);

HAnimSegment641->addChildren(*HAnimSite676);

CHAnimSite* HAnimSite679 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite679->setName("r_gonion");
HAnimSite679->setDEF("hanim_r_gonion");
HAnimSite679->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CTouchSensor* TouchSensor680 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor680->setDescription("HAnimSite r_gonion");
HAnimSite679->addChildren(*TouchSensor680);

CShape* Shape681 = (CShape *)(m_pScene.createNode("Shape"));
Shape681->setUSE("HAnimSiteShape");
HAnimSite679->addChildren(*Shape681);

HAnimSegment641->addChildren(*HAnimSite679);

CHAnimSite* HAnimSite682 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite682->setName("supramenton");
HAnimSite682->setDEF("hanim_supramenton");
HAnimSite682->setTranslation(new float[3]{0.0061,1.541,0.0805});
CTouchSensor* TouchSensor683 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor683->setDescription("HAnimSite supramenton");
HAnimSite682->addChildren(*TouchSensor683);

CShape* Shape684 = (CShape *)(m_pScene.createNode("Shape"));
Shape684->setUSE("HAnimSiteShape");
HAnimSite682->addChildren(*Shape684);

HAnimSegment641->addChildren(*HAnimSite682);

HAnimJoint640->addChildren(*HAnimSegment641);

CHAnimJoint* HAnimJoint685 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint685->setName("l_eyelid_joint");
HAnimJoint685->setDEF("hanim_l_eyelid_joint");
HAnimJoint685->setCenter(new float[3]{0.0503,1.4157,-0.0689});
HAnimJoint685->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint685->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->addChildren(*HAnimJoint685);

CHAnimJoint* HAnimJoint686 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint686->setName("r_eyelid_joint");
HAnimJoint686->setDEF("hanim_r_eyelid_joint");
HAnimJoint686->setCenter(new float[3]{-0.0507,1.4157,-0.0689});
HAnimJoint686->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint686->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->addChildren(*HAnimJoint686);

CHAnimJoint* HAnimJoint687 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint687->setName("l_eyeball_joint");
HAnimJoint687->setDEF("hanim_l_eyeball_joint");
HAnimJoint687->setCenter(new float[3]{0.0479,1.3963,-0.0188});
HAnimJoint687->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint687->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->addChildren(*HAnimJoint687);

CHAnimJoint* HAnimJoint688 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint688->setName("r_eyeball_joint");
HAnimJoint688->setDEF("hanim_r_eyeball_joint");
HAnimJoint688->setCenter(new float[3]{-0.0483,1.3963,-0.0188});
HAnimJoint688->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint688->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->addChildren(*HAnimJoint688);

CHAnimJoint* HAnimJoint689 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint689->setName("l_eyebrow_joint");
HAnimJoint689->setDEF("hanim_l_eyebrow_joint");
HAnimJoint689->setCenter(new float[3]{0.0216,1.4053,0.0051});
HAnimJoint689->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint689->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->addChildren(*HAnimJoint689);

CHAnimJoint* HAnimJoint690 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint690->setName("r_eyebrow_joint");
HAnimJoint690->setDEF("hanim_r_eyebrow_joint");
HAnimJoint690->setCenter(new float[3]{-0.0219,1.4053,0.0051});
HAnimJoint690->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint690->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->addChildren(*HAnimJoint690);

CHAnimJoint* HAnimJoint691 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint691->setName("temporomandibular");
HAnimJoint691->setDEF("hanim_temporomandibular");
HAnimJoint691->setCenter(new float[3]{-0.0002,1.3043,-0.0865});
HAnimJoint691->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint691->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint640->addChildren(*HAnimJoint691);

HAnimJoint598->addChildren(*HAnimJoint640);

HAnimJoint589->addChildren(*HAnimJoint598);

HAnimJoint577->addChildren(*HAnimJoint589);

HAnimJoint568->addChildren(*HAnimJoint577);

HAnimJoint559->addChildren(*HAnimJoint568);

HAnimJoint550->addChildren(*HAnimJoint559);

HAnimJoint541->addChildren(*HAnimJoint550);

HAnimJoint488->addChildren(*HAnimJoint541);

CHAnimJoint* HAnimJoint692 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint692->setName("l_sternoclavicular");
HAnimJoint692->setDEF("hanim_l_sternoclavicular");
HAnimJoint692->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint692->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint692->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment693 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment693->setName("l_clavicle");
HAnimSegment693->setDEF("hanim_l_clavicle");
CTransform* Transform694 = (CTransform *)(m_pScene.createNode("Transform"));
Transform694->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CTransform* Transform695 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape696 = (CShape *)(m_pScene.createNode("Shape"));
Shape696->setUSE("HAnimJointShape");
Transform695->addChild(*Shape696);

Transform694->addChildren(*Transform695);

HAnimSegment693->addChildren(*Transform694);

CShape* Shape697 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet698 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet698->setVertexCount(new int[1]{2});
CCoordinate* Coordinate699 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate699->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet698->setCoord(*Coordinate699);

//from l_sternoclavicular to l_acromioclavicular vertices 2
CColorRGBA* ColorRGBA700 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA700->setUSE("HAnimSegmentLineColorRGBA");
LineSet698->setColor(*ColorRGBA700);

Shape697->setGeometry(LineSet698);

HAnimSegment693->addChildren(*Shape697);

HAnimJoint692->addChildren(*HAnimSegment693);

CHAnimJoint* HAnimJoint701 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint701->setName("l_acromioclavicular");
HAnimJoint701->setDEF("hanim_l_acromioclavicular");
HAnimJoint701->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint701->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint701->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment702 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment702->setName("l_scapula");
HAnimSegment702->setDEF("hanim_l_scapula");
CTransform* Transform703 = (CTransform *)(m_pScene.createNode("Transform"));
Transform703->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
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
Coordinate708->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet707->setCoord(*Coordinate708);

//from l_acromioclavicular to l_shoulder vertices 2
CColorRGBA* ColorRGBA709 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA709->setUSE("HAnimSegmentLineColorRGBA");
LineSet707->setColor(*ColorRGBA709);

Shape706->setGeometry(LineSet707);

HAnimSegment702->addChildren(*Shape706);

CHAnimSite* HAnimSite710 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite710->setName("l_bideltoid");
HAnimSite710->setDEF("hanim_l_bideltoid");
CTouchSensor* TouchSensor711 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor711->setDescription("HAnimSite l_bideltoid");
HAnimSite710->addChildren(*TouchSensor711);

CShape* Shape712 = (CShape *)(m_pScene.createNode("Shape"));
Shape712->setUSE("HAnimSiteShape");
HAnimSite710->addChildren(*Shape712);

HAnimSegment702->addChildren(*HAnimSite710);

CHAnimSite* HAnimSite713 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite713->setName("l_humeral_lateral_epicondyles");
HAnimSite713->setDEF("hanim_l_humeral_lateral_epicondyles");
HAnimSite713->setTranslation(new float[3]{0.228,1.1482,-0.11});
CTouchSensor* TouchSensor714 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor714->setDescription("HAnimSite l_humeral_lateral_epicondyles");
HAnimSite713->addChildren(*TouchSensor714);

CShape* Shape715 = (CShape *)(m_pScene.createNode("Shape"));
Shape715->setUSE("HAnimSiteShape");
HAnimSite713->addChildren(*Shape715);

HAnimSegment702->addChildren(*HAnimSite713);

HAnimJoint701->addChildren(*HAnimSegment702);

CHAnimJoint* HAnimJoint716 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint716->setName("l_shoulder");
HAnimJoint716->setDEF("hanim_l_shoulder");
HAnimJoint716->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint716->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint716->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment717 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment717->setName("l_upperarm");
HAnimSegment717->setDEF("hanim_l_upperarm");
CTransform* Transform718 = (CTransform *)(m_pScene.createNode("Transform"));
Transform718->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
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
Coordinate723->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet722->setCoord(*Coordinate723);

//from l_shoulder to l_elbow vertices 2
CColorRGBA* ColorRGBA724 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA724->setUSE("HAnimSegmentLineColorRGBA");
LineSet722->setColor(*ColorRGBA724);

Shape721->setGeometry(LineSet722);

HAnimSegment717->addChildren(*Shape721);

CHAnimSite* HAnimSite725 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite725->setName("l_humeral_medial_epicondyles");
HAnimSite725->setDEF("hanim_l_humeral_medial_epicondyles");
HAnimSite725->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CTouchSensor* TouchSensor726 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor726->setDescription("HAnimSite l_humeral_medial_epicondyles");
HAnimSite725->addChildren(*TouchSensor726);

CShape* Shape727 = (CShape *)(m_pScene.createNode("Shape"));
Shape727->setUSE("HAnimSiteShape");
HAnimSite725->addChildren(*Shape727);

HAnimSegment717->addChildren(*HAnimSite725);

CHAnimSite* HAnimSite728 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite728->setName("l_olecranon");
HAnimSite728->setDEF("hanim_l_olecranon");
HAnimSite728->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
CTouchSensor* TouchSensor729 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor729->setDescription("HAnimSite l_olecranon");
HAnimSite728->addChildren(*TouchSensor729);

CShape* Shape730 = (CShape *)(m_pScene.createNode("Shape"));
Shape730->setUSE("HAnimSiteShape");
HAnimSite728->addChildren(*Shape730);

HAnimSegment717->addChildren(*HAnimSite728);

CHAnimSite* HAnimSite731 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite731->setName("l_radial_styloid");
HAnimSite731->setDEF("hanim_l_radial_styloid");
HAnimSite731->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CTouchSensor* TouchSensor732 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor732->setDescription("HAnimSite l_radial_styloid");
HAnimSite731->addChildren(*TouchSensor732);

CShape* Shape733 = (CShape *)(m_pScene.createNode("Shape"));
Shape733->setUSE("HAnimSiteShape");
HAnimSite731->addChildren(*Shape733);

HAnimSegment717->addChildren(*HAnimSite731);

CHAnimSite* HAnimSite734 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite734->setName("l_radiale");
HAnimSite734->setDEF("hanim_l_radiale");
HAnimSite734->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CTouchSensor* TouchSensor735 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor735->setDescription("HAnimSite l_radiale");
HAnimSite734->addChildren(*TouchSensor735);

CShape* Shape736 = (CShape *)(m_pScene.createNode("Shape"));
Shape736->setUSE("HAnimSiteShape");
HAnimSite734->addChildren(*Shape736);

HAnimSegment717->addChildren(*HAnimSite734);

HAnimJoint716->addChildren(*HAnimSegment717);

CHAnimJoint* HAnimJoint737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint737->setName("l_elbow");
HAnimJoint737->setDEF("hanim_l_elbow");
HAnimJoint737->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint737->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint737->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment738 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment738->setName("l_forearm");
HAnimSegment738->setDEF("hanim_l_forearm");
CTransform* Transform739 = (CTransform *)(m_pScene.createNode("Transform"));
Transform739->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform740 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape741 = (CShape *)(m_pScene.createNode("Shape"));
Shape741->setUSE("HAnimJointShape");
Transform740->addChild(*Shape741);

Transform739->addChildren(*Transform740);

HAnimSegment738->addChildren(*Transform739);

CShape* Shape742 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet743 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet743->setVertexCount(new int[1]{2});
CCoordinate* Coordinate744 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate744->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet743->setCoord(*Coordinate744);

//from l_elbow to l_radiocarpal vertices 2
CColorRGBA* ColorRGBA745 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA745->setUSE("HAnimSegmentLineColorRGBA");
LineSet743->setColor(*ColorRGBA745);

Shape742->setGeometry(LineSet743);

HAnimSegment738->addChildren(*Shape742);

CHAnimSite* HAnimSite746 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite746->setName("l_ulnar_styloid");
HAnimSite746->setDEF("hanim_l_ulnar_styloid");
HAnimSite746->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
CTouchSensor* TouchSensor747 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor747->setDescription("HAnimSite l_ulnar_styloid");
HAnimSite746->addChildren(*TouchSensor747);

CShape* Shape748 = (CShape *)(m_pScene.createNode("Shape"));
Shape748->setUSE("HAnimSiteShape");
HAnimSite746->addChildren(*Shape748);

HAnimSegment738->addChildren(*HAnimSite746);

HAnimJoint737->addChildren(*HAnimSegment738);

CHAnimJoint* HAnimJoint749 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint749->setName("l_radiocarpal");
HAnimJoint749->setDEF("hanim_l_radiocarpal");
HAnimJoint749->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint749->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint749->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment750 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment750->setName("l_carpal");
HAnimSegment750->setDEF("hanim_l_carpal");
CTransform* Transform751 = (CTransform *)(m_pScene.createNode("Transform"));
Transform751->setScale(new float[3]{0.2,0.2,0.2});
Transform751->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform751->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
CTransform* Transform752 = (CTransform *)(m_pScene.createNode("Transform"));
Transform752->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
CShape* Shape753 = (CShape *)(m_pScene.createNode("Shape"));
Shape753->setUSE("HAnimJointShape");
Transform752->addChild(*Shape753);

Transform751->addChildren(*Transform752);

HAnimSegment750->addChildren(*Transform751);

CShape* Shape754 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet755 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet755->setVertexCount(new int[1]{2});
CCoordinate* Coordinate756 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate756->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534});
LineSet755->setCoord(*Coordinate756);

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA757 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA757->setUSE("HAnimSegmentLineColorRGBA");
LineSet755->setColor(*ColorRGBA757);

Shape754->setGeometry(LineSet755);

HAnimSegment750->addChildren(*Shape754);

CShape* Shape758 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet759 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet759->setVertexCount(new int[1]{2});
CCoordinate* Coordinate760 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate760->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028});
LineSet759->setCoord(*Coordinate760);

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA761 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA761->setUSE("HAnimSegmentLineColorRGBA");
LineSet759->setColor(*ColorRGBA761);

Shape758->setGeometry(LineSet759);

HAnimSegment750->addChildren(*Shape758);

CHAnimSite* HAnimSite762 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite762->setName("l_metacarpal_phalanx_2");
HAnimSite762->setDEF("hanim_l_metacarpal_phalanx_2");
HAnimSite762->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CTouchSensor* TouchSensor763 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor763->setDescription("HAnimSite l_metacarpal_phalanx_2");
HAnimSite762->addChildren(*TouchSensor763);

CShape* Shape764 = (CShape *)(m_pScene.createNode("Shape"));
Shape764->setUSE("HAnimSiteShape");
HAnimSite762->addChildren(*Shape764);

HAnimSegment750->addChildren(*HAnimSite762);

CShape* Shape765 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet766 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet766->setVertexCount(new int[1]{2});
CCoordinate* Coordinate767 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate767->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053});
LineSet766->setCoord(*Coordinate767);

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA768 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA768->setUSE("HAnimSegmentLineColorRGBA");
LineSet766->setColor(*ColorRGBA768);

Shape765->setGeometry(LineSet766);

HAnimSegment750->addChildren(*Shape765);

CHAnimSite* HAnimSite769 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite769->setName("l_metacarpal_phalanx_3");
HAnimSite769->setDEF("hanim_l_metacarpal_phalanx_3");
CTouchSensor* TouchSensor770 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor770->setDescription("HAnimSite l_metacarpal_phalanx_3");
HAnimSite769->addChildren(*TouchSensor770);

CShape* Shape771 = (CShape *)(m_pScene.createNode("Shape"));
Shape771->setUSE("HAnimSiteShape");
HAnimSite769->addChildren(*Shape771);

HAnimSegment750->addChildren(*HAnimSite769);

CShape* Shape772 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet773 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet773->setVertexCount(new int[1]{2});
CCoordinate* Coordinate774 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate774->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794});
LineSet773->setCoord(*Coordinate774);

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA775 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA775->setUSE("HAnimSegmentLineColorRGBA");
LineSet773->setColor(*ColorRGBA775);

Shape772->setGeometry(LineSet773);

HAnimSegment750->addChildren(*Shape772);

CShape* Shape776 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet777 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet777->setVertexCount(new int[1]{2});
CCoordinate* Coordinate778 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate778->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036});
LineSet777->setCoord(*Coordinate778);

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA779 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA779->setUSE("HAnimSegmentLineColorRGBA");
LineSet777->setColor(*ColorRGBA779);

Shape776->setGeometry(LineSet777);

HAnimSegment750->addChildren(*Shape776);

CHAnimSite* HAnimSite780 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite780->setName("l_metacarpal_phalanx_5");
HAnimSite780->setDEF("hanim_l_metacarpal_phalanx_5");
HAnimSite780->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CTouchSensor* TouchSensor781 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor781->setDescription("HAnimSite l_metacarpal_phalanx_5");
HAnimSite780->addChildren(*TouchSensor781);

CShape* Shape782 = (CShape *)(m_pScene.createNode("Shape"));
Shape782->setUSE("HAnimSiteShape");
HAnimSite780->addChildren(*Shape782);

HAnimSegment750->addChildren(*HAnimSite780);

HAnimJoint749->addChildren(*HAnimSegment750);

CHAnimJoint* HAnimJoint783 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint783->setName("l_carpometacarpal_1");
HAnimJoint783->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint783->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint783->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint783->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment784->setName("l_metacarpal_1");
HAnimSegment784->setDEF("hanim_l_metacarpal_1");
CTransform* Transform785 = (CTransform *)(m_pScene.createNode("Transform"));
Transform785->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CTransform* Transform786 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape787 = (CShape *)(m_pScene.createNode("Shape"));
Shape787->setUSE("HAnimJointShape");
Transform786->addChild(*Shape787);

Transform785->addChildren(*Transform786);

HAnimSegment784->addChildren(*Transform785);

CShape* Shape788 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet789 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet789->setVertexCount(new int[1]{2});
CCoordinate* Coordinate790 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate790->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet789->setCoord(*Coordinate790);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA791 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA791->setUSE("HAnimSegmentLineColorRGBA");
LineSet789->setColor(*ColorRGBA791);

Shape788->setGeometry(LineSet789);

HAnimSegment784->addChildren(*Shape788);

HAnimJoint783->addChildren(*HAnimSegment784);

CHAnimJoint* HAnimJoint792 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint792->setName("l_metacarpophalangeal_1");
HAnimJoint792->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint792->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint792->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint792->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment793 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment793->setName("l_carpal_proximal_phalanx_1");
HAnimSegment793->setDEF("hanim_l_carpal_proximal_phalanx_1");
CTransform* Transform794 = (CTransform *)(m_pScene.createNode("Transform"));
Transform794->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CTransform* Transform795 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape796 = (CShape *)(m_pScene.createNode("Shape"));
Shape796->setUSE("HAnimJointShape");
Transform795->addChild(*Shape796);

Transform794->addChildren(*Transform795);

HAnimSegment793->addChildren(*Transform794);

CShape* Shape797 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet798 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet798->setVertexCount(new int[1]{2});
CCoordinate* Coordinate799 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate799->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet798->setCoord(*Coordinate799);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA800 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA800->setUSE("HAnimSegmentLineColorRGBA");
LineSet798->setColor(*ColorRGBA800);

Shape797->setGeometry(LineSet798);

HAnimSegment793->addChildren(*Shape797);

CHAnimSite* HAnimSite801 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite801->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite801->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor802 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor802->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite801->addChildren(*TouchSensor802);

CShape* Shape803 = (CShape *)(m_pScene.createNode("Shape"));
Shape803->setUSE("HAnimSiteShape");
HAnimSite801->addChildren(*Shape803);

HAnimSegment793->addChildren(*HAnimSite801);

HAnimJoint792->addChildren(*HAnimSegment793);

CHAnimJoint* HAnimJoint804 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint804->setName("l_carpal_interphalangeal_1");
HAnimJoint804->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint804->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint804->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint804->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint792->addChildren(*HAnimJoint804);

HAnimJoint783->addChildren(*HAnimJoint792);

HAnimJoint749->addChildren(*HAnimJoint783);

CHAnimJoint* HAnimJoint805 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint805->setName("l_carpometacarpal_2");
HAnimJoint805->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint805->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint805->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint805->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment806->setName("l_metacarpal_2");
HAnimSegment806->setDEF("hanim_l_metacarpal_2");
CTransform* Transform807 = (CTransform *)(m_pScene.createNode("Transform"));
Transform807->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CTransform* Transform808 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape809 = (CShape *)(m_pScene.createNode("Shape"));
Shape809->setUSE("HAnimJointShape");
Transform808->addChild(*Shape809);

Transform807->addChildren(*Transform808);

HAnimSegment806->addChildren(*Transform807);

CShape* Shape810 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet811 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet811->setVertexCount(new int[1]{2});
CCoordinate* Coordinate812 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate812->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet811->setCoord(*Coordinate812);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA813 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA813->setUSE("HAnimSegmentLineColorRGBA");
LineSet811->setColor(*ColorRGBA813);

Shape810->setGeometry(LineSet811);

HAnimSegment806->addChildren(*Shape810);

HAnimJoint805->addChildren(*HAnimSegment806);

CHAnimJoint* HAnimJoint814 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint814->setName("l_metacarpophalangeal_2");
HAnimJoint814->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint814->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint814->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint814->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment815 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment815->setName("l_carpal_proximal_phalanx_2");
HAnimSegment815->setDEF("hanim_l_carpal_proximal_phalanx_2");
CTransform* Transform816 = (CTransform *)(m_pScene.createNode("Transform"));
Transform816->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CTransform* Transform817 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape818 = (CShape *)(m_pScene.createNode("Shape"));
Shape818->setUSE("HAnimJointShape");
Transform817->addChild(*Shape818);

Transform816->addChildren(*Transform817);

HAnimSegment815->addChildren(*Transform816);

CShape* Shape819 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet820 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet820->setVertexCount(new int[1]{2});
CCoordinate* Coordinate821 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate821->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet820->setCoord(*Coordinate821);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA822 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA822->setUSE("HAnimSegmentLineColorRGBA");
LineSet820->setColor(*ColorRGBA822);

Shape819->setGeometry(LineSet820);

HAnimSegment815->addChildren(*Shape819);

HAnimJoint814->addChildren(*HAnimSegment815);

CHAnimJoint* HAnimJoint823 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint823->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint823->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint823->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint823->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint823->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment824 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment824->setName("l_carpal_middle_phalanx_2");
HAnimSegment824->setDEF("hanim_l_carpal_middle_phalanx_2");
CTransform* Transform825 = (CTransform *)(m_pScene.createNode("Transform"));
Transform825->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CTransform* Transform826 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape827 = (CShape *)(m_pScene.createNode("Shape"));
Shape827->setUSE("HAnimJointShape");
Transform826->addChild(*Shape827);

Transform825->addChildren(*Transform826);

HAnimSegment824->addChildren(*Transform825);

CShape* Shape828 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet829 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet829->setVertexCount(new int[1]{2});
CCoordinate* Coordinate830 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate830->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet829->setCoord(*Coordinate830);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA831 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA831->setUSE("HAnimSegmentLineColorRGBA");
LineSet829->setColor(*ColorRGBA831);

Shape828->setGeometry(LineSet829);

HAnimSegment824->addChildren(*Shape828);

CHAnimSite* HAnimSite832 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite832->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite832->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor833 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor833->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite832->addChildren(*TouchSensor833);

CShape* Shape834 = (CShape *)(m_pScene.createNode("Shape"));
Shape834->setUSE("HAnimSiteShape");
HAnimSite832->addChildren(*Shape834);

HAnimSegment824->addChildren(*HAnimSite832);

CHAnimSite* HAnimSite835 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite835->setName("l_dactylion");
HAnimSite835->setDEF("hanim_l_dactylion");
HAnimSite835->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CTouchSensor* TouchSensor836 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor836->setDescription("HAnimSite l_dactylion");
HAnimSite835->addChildren(*TouchSensor836);

CShape* Shape837 = (CShape *)(m_pScene.createNode("Shape"));
Shape837->setUSE("HAnimSiteShape");
HAnimSite835->addChildren(*Shape837);

HAnimSegment824->addChildren(*HAnimSite835);

HAnimJoint823->addChildren(*HAnimSegment824);

CHAnimJoint* HAnimJoint838 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint838->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint838->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint838->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint838->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint838->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint823->addChildren(*HAnimJoint838);

HAnimJoint814->addChildren(*HAnimJoint823);

HAnimJoint805->addChildren(*HAnimJoint814);

HAnimJoint749->addChildren(*HAnimJoint805);

CHAnimJoint* HAnimJoint839 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint839->setName("l_carpometacarpal_3");
HAnimJoint839->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint839->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint839->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint839->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment840 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment840->setName("l_metacarpal_3");
HAnimSegment840->setDEF("hanim_l_metacarpal_3");
CTransform* Transform841 = (CTransform *)(m_pScene.createNode("Transform"));
Transform841->setTranslation(new float[3]{0.1987,0.8029,-0.053});
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
Coordinate846->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet845->setCoord(*Coordinate846);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA847 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA847->setUSE("HAnimSegmentLineColorRGBA");
LineSet845->setColor(*ColorRGBA847);

Shape844->setGeometry(LineSet845);

HAnimSegment840->addChildren(*Shape844);

HAnimJoint839->addChildren(*HAnimSegment840);

CHAnimJoint* HAnimJoint848 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint848->setName("l_metacarpophalangeal_3");
HAnimJoint848->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint848->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint848->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint848->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment849 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment849->setName("l_carpal_proximal_phalanx_3");
HAnimSegment849->setDEF("hanim_l_carpal_proximal_phalanx_3");
CTransform* Transform850 = (CTransform *)(m_pScene.createNode("Transform"));
Transform850->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CTransform* Transform851 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape852 = (CShape *)(m_pScene.createNode("Shape"));
Shape852->setUSE("HAnimJointShape");
Transform851->addChild(*Shape852);

Transform850->addChildren(*Transform851);

HAnimSegment849->addChildren(*Transform850);

CShape* Shape853 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet854 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet854->setVertexCount(new int[1]{2});
CCoordinate* Coordinate855 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate855->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet854->setCoord(*Coordinate855);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA856 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA856->setUSE("HAnimSegmentLineColorRGBA");
LineSet854->setColor(*ColorRGBA856);

Shape853->setGeometry(LineSet854);

HAnimSegment849->addChildren(*Shape853);

HAnimJoint848->addChildren(*HAnimSegment849);

CHAnimJoint* HAnimJoint857 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint857->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint857->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint857->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint857->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint857->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment858 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment858->setName("l_carpal_middle_phalanx_3");
HAnimSegment858->setDEF("hanim_l_carpal_middle_phalanx_3");
CTransform* Transform859 = (CTransform *)(m_pScene.createNode("Transform"));
Transform859->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CTransform* Transform860 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape861 = (CShape *)(m_pScene.createNode("Shape"));
Shape861->setUSE("HAnimJointShape");
Transform860->addChild(*Shape861);

Transform859->addChildren(*Transform860);

HAnimSegment858->addChildren(*Transform859);

CShape* Shape862 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet863 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet863->setVertexCount(new int[1]{2});
CCoordinate* Coordinate864 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate864->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet863->setCoord(*Coordinate864);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA865 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA865->setUSE("HAnimSegmentLineColorRGBA");
LineSet863->setColor(*ColorRGBA865);

Shape862->setGeometry(LineSet863);

HAnimSegment858->addChildren(*Shape862);

CHAnimSite* HAnimSite866 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite866->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite866->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor867 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor867->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite866->addChildren(*TouchSensor867);

CShape* Shape868 = (CShape *)(m_pScene.createNode("Shape"));
Shape868->setUSE("HAnimSiteShape");
HAnimSite866->addChildren(*Shape868);

HAnimSegment858->addChildren(*HAnimSite866);

HAnimJoint857->addChildren(*HAnimSegment858);

CHAnimJoint* HAnimJoint869 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint869->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint869->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint869->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint869->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint869->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint857->addChildren(*HAnimJoint869);

HAnimJoint848->addChildren(*HAnimJoint857);

HAnimJoint839->addChildren(*HAnimJoint848);

HAnimJoint749->addChildren(*HAnimJoint839);

CHAnimJoint* HAnimJoint870 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint870->setName("l_carpometacarpal_4");
HAnimJoint870->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint870->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint870->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint870->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment871 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment871->setName("l_metacarpal_4");
HAnimSegment871->setDEF("hanim_l_metacarpal_4");
CTransform* Transform872 = (CTransform *)(m_pScene.createNode("Transform"));
Transform872->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CTransform* Transform873 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape874 = (CShape *)(m_pScene.createNode("Shape"));
Shape874->setUSE("HAnimJointShape");
Transform873->addChild(*Shape874);

Transform872->addChildren(*Transform873);

HAnimSegment871->addChildren(*Transform872);

CShape* Shape875 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet876 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet876->setVertexCount(new int[1]{2});
CCoordinate* Coordinate877 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate877->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet876->setCoord(*Coordinate877);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA878 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA878->setUSE("HAnimSegmentLineColorRGBA");
LineSet876->setColor(*ColorRGBA878);

Shape875->setGeometry(LineSet876);

HAnimSegment871->addChildren(*Shape875);

HAnimJoint870->addChildren(*HAnimSegment871);

CHAnimJoint* HAnimJoint879 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint879->setName("l_metacarpophalangeal_4");
HAnimJoint879->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint879->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint879->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint879->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment880 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment880->setName("l_carpal_proximal_phalanx_4");
HAnimSegment880->setDEF("hanim_l_carpal_proximal_phalanx_4");
CTransform* Transform881 = (CTransform *)(m_pScene.createNode("Transform"));
Transform881->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CTransform* Transform882 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape883 = (CShape *)(m_pScene.createNode("Shape"));
Shape883->setUSE("HAnimJointShape");
Transform882->addChild(*Shape883);

Transform881->addChildren(*Transform882);

HAnimSegment880->addChildren(*Transform881);

CShape* Shape884 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet885 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet885->setVertexCount(new int[1]{2});
CCoordinate* Coordinate886 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate886->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet885->setCoord(*Coordinate886);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA887 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA887->setUSE("HAnimSegmentLineColorRGBA");
LineSet885->setColor(*ColorRGBA887);

Shape884->setGeometry(LineSet885);

HAnimSegment880->addChildren(*Shape884);

HAnimJoint879->addChildren(*HAnimSegment880);

CHAnimJoint* HAnimJoint888 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint888->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint888->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint888->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint888->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint888->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment889 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment889->setName("l_carpal_middle_phalanx_4");
HAnimSegment889->setDEF("hanim_l_carpal_middle_phalanx_4");
CTransform* Transform890 = (CTransform *)(m_pScene.createNode("Transform"));
Transform890->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CTransform* Transform891 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape892 = (CShape *)(m_pScene.createNode("Shape"));
Shape892->setUSE("HAnimJointShape");
Transform891->addChild(*Shape892);

Transform890->addChildren(*Transform891);

HAnimSegment889->addChildren(*Transform890);

CShape* Shape893 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet894 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet894->setVertexCount(new int[1]{2});
CCoordinate* Coordinate895 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate895->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet894->setCoord(*Coordinate895);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA896 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA896->setUSE("HAnimSegmentLineColorRGBA");
LineSet894->setColor(*ColorRGBA896);

Shape893->setGeometry(LineSet894);

HAnimSegment889->addChildren(*Shape893);

CHAnimSite* HAnimSite897 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite897->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite897->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor898 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor898->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite897->addChildren(*TouchSensor898);

CShape* Shape899 = (CShape *)(m_pScene.createNode("Shape"));
Shape899->setUSE("HAnimSiteShape");
HAnimSite897->addChildren(*Shape899);

HAnimSegment889->addChildren(*HAnimSite897);

HAnimJoint888->addChildren(*HAnimSegment889);

CHAnimJoint* HAnimJoint900 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint900->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint900->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint900->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint900->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint900->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint888->addChildren(*HAnimJoint900);

HAnimJoint879->addChildren(*HAnimJoint888);

HAnimJoint870->addChildren(*HAnimJoint879);

HAnimJoint749->addChildren(*HAnimJoint870);

CHAnimJoint* HAnimJoint901 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint901->setName("l_carpometacarpal_5");
HAnimJoint901->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint901->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint901->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint901->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment902 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment902->setName("l_metacarpal_5");
HAnimSegment902->setDEF("hanim_l_metacarpal_5");
CTransform* Transform903 = (CTransform *)(m_pScene.createNode("Transform"));
Transform903->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CTransform* Transform904 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape905 = (CShape *)(m_pScene.createNode("Shape"));
Shape905->setUSE("HAnimJointShape");
Transform904->addChild(*Shape905);

Transform903->addChildren(*Transform904);

HAnimSegment902->addChildren(*Transform903);

CShape* Shape906 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet907 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet907->setVertexCount(new int[1]{2});
CCoordinate* Coordinate908 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate908->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet907->setCoord(*Coordinate908);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA909 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA909->setUSE("HAnimSegmentLineColorRGBA");
LineSet907->setColor(*ColorRGBA909);

Shape906->setGeometry(LineSet907);

HAnimSegment902->addChildren(*Shape906);

HAnimJoint901->addChildren(*HAnimSegment902);

CHAnimJoint* HAnimJoint910 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint910->setName("l_metacarpophalangeal_5");
HAnimJoint910->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint910->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint910->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint910->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment911 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment911->setName("l_carpal_proximal_phalanx_5");
HAnimSegment911->setDEF("hanim_l_carpal_proximal_phalanx_5");
CTransform* Transform912 = (CTransform *)(m_pScene.createNode("Transform"));
Transform912->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CTransform* Transform913 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape914 = (CShape *)(m_pScene.createNode("Shape"));
Shape914->setUSE("HAnimJointShape");
Transform913->addChild(*Shape914);

Transform912->addChildren(*Transform913);

HAnimSegment911->addChildren(*Transform912);

CShape* Shape915 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet916 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet916->setVertexCount(new int[1]{2});
CCoordinate* Coordinate917 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate917->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet916->setCoord(*Coordinate917);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA918 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA918->setUSE("HAnimSegmentLineColorRGBA");
LineSet916->setColor(*ColorRGBA918);

Shape915->setGeometry(LineSet916);

HAnimSegment911->addChildren(*Shape915);

HAnimJoint910->addChildren(*HAnimSegment911);

CHAnimJoint* HAnimJoint919 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint919->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint919->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint919->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint919->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint919->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment920 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment920->setName("l_carpal_middle_phalanx_5");
HAnimSegment920->setDEF("hanim_l_carpal_middle_phalanx_5");
CTransform* Transform921 = (CTransform *)(m_pScene.createNode("Transform"));
Transform921->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CTransform* Transform922 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape923 = (CShape *)(m_pScene.createNode("Shape"));
Shape923->setUSE("HAnimJointShape");
Transform922->addChild(*Shape923);

Transform921->addChildren(*Transform922);

HAnimSegment920->addChildren(*Transform921);

CShape* Shape924 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet925 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet925->setVertexCount(new int[1]{2});
CCoordinate* Coordinate926 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate926->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet925->setCoord(*Coordinate926);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA927 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA927->setUSE("HAnimSegmentLineColorRGBA");
LineSet925->setColor(*ColorRGBA927);

Shape924->setGeometry(LineSet925);

HAnimSegment920->addChildren(*Shape924);

CHAnimSite* HAnimSite928 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite928->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite928->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor929 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor929->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite928->addChildren(*TouchSensor929);

CShape* Shape930 = (CShape *)(m_pScene.createNode("Shape"));
Shape930->setUSE("HAnimSiteShape");
HAnimSite928->addChildren(*Shape930);

HAnimSegment920->addChildren(*HAnimSite928);

HAnimJoint919->addChildren(*HAnimSegment920);

CHAnimJoint* HAnimJoint931 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint931->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint931->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint931->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint931->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint931->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint919->addChildren(*HAnimJoint931);

HAnimJoint910->addChildren(*HAnimJoint919);

HAnimJoint901->addChildren(*HAnimJoint910);

HAnimJoint749->addChildren(*HAnimJoint901);

HAnimJoint737->addChildren(*HAnimJoint749);

HAnimJoint716->addChildren(*HAnimJoint737);

HAnimJoint701->addChildren(*HAnimJoint716);

HAnimJoint692->addChildren(*HAnimJoint701);

HAnimJoint488->addChildren(*HAnimJoint692);

CHAnimJoint* HAnimJoint932 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint932->setName("r_sternoclavicular");
HAnimJoint932->setDEF("hanim_r_sternoclavicular");
HAnimJoint932->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint932->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint932->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment933 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment933->setName("r_clavicle");
HAnimSegment933->setDEF("hanim_r_clavicle");
CTransform* Transform934 = (CTransform *)(m_pScene.createNode("Transform"));
Transform934->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CTransform* Transform935 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape936 = (CShape *)(m_pScene.createNode("Shape"));
Shape936->setUSE("HAnimJointShape");
Transform935->addChild(*Shape936);

Transform934->addChildren(*Transform935);

HAnimSegment933->addChildren(*Transform934);

CShape* Shape937 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet938 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet938->setVertexCount(new int[1]{2});
CCoordinate* Coordinate939 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate939->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet938->setCoord(*Coordinate939);

//from r_sternoclavicular to r_acromioclavicular vertices 2
CColorRGBA* ColorRGBA940 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA940->setUSE("HAnimSegmentLineColorRGBA");
LineSet938->setColor(*ColorRGBA940);

Shape937->setGeometry(LineSet938);

HAnimSegment933->addChildren(*Shape937);

HAnimJoint932->addChildren(*HAnimSegment933);

CHAnimJoint* HAnimJoint941 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint941->setName("r_acromioclavicular");
HAnimJoint941->setDEF("hanim_r_acromioclavicular");
HAnimJoint941->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint941->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint941->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment942 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment942->setName("r_scapula");
HAnimSegment942->setDEF("hanim_r_scapula");
CTransform* Transform943 = (CTransform *)(m_pScene.createNode("Transform"));
Transform943->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
CTransform* Transform944 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape945 = (CShape *)(m_pScene.createNode("Shape"));
Shape945->setUSE("HAnimJointShape");
Transform944->addChild(*Shape945);

Transform943->addChildren(*Transform944);

HAnimSegment942->addChildren(*Transform943);

CShape* Shape946 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet947 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet947->setVertexCount(new int[1]{2});
CCoordinate* Coordinate948 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate948->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet947->setCoord(*Coordinate948);

//from r_acromioclavicular to r_shoulder vertices 2
CColorRGBA* ColorRGBA949 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA949->setUSE("HAnimSegmentLineColorRGBA");
LineSet947->setColor(*ColorRGBA949);

Shape946->setGeometry(LineSet947);

HAnimSegment942->addChildren(*Shape946);

CHAnimSite* HAnimSite950 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite950->setName("r_bideltoid");
HAnimSite950->setDEF("hanim_r_bideltoid");
CTouchSensor* TouchSensor951 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor951->setDescription("HAnimSite r_bideltoid");
HAnimSite950->addChildren(*TouchSensor951);

CShape* Shape952 = (CShape *)(m_pScene.createNode("Shape"));
Shape952->setUSE("HAnimSiteShape");
HAnimSite950->addChildren(*Shape952);

HAnimSegment942->addChildren(*HAnimSite950);

CHAnimSite* HAnimSite953 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite953->setName("r_humeral_lateral_epicondyles");
HAnimSite953->setDEF("hanim_r_humeral_lateral_epicondyles");
HAnimSite953->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CTouchSensor* TouchSensor954 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor954->setDescription("HAnimSite r_humeral_lateral_epicondyles");
HAnimSite953->addChildren(*TouchSensor954);

CShape* Shape955 = (CShape *)(m_pScene.createNode("Shape"));
Shape955->setUSE("HAnimSiteShape");
HAnimSite953->addChildren(*Shape955);

HAnimSegment942->addChildren(*HAnimSite953);

HAnimJoint941->addChildren(*HAnimSegment942);

CHAnimJoint* HAnimJoint956 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint956->setName("r_shoulder");
HAnimJoint956->setDEF("hanim_r_shoulder");
HAnimJoint956->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint956->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint956->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment957 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment957->setName("r_upperarm");
HAnimSegment957->setDEF("hanim_r_upperarm");
CTransform* Transform958 = (CTransform *)(m_pScene.createNode("Transform"));
Transform958->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform959 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape960 = (CShape *)(m_pScene.createNode("Shape"));
Shape960->setUSE("HAnimJointShape");
Transform959->addChild(*Shape960);

Transform958->addChildren(*Transform959);

HAnimSegment957->addChildren(*Transform958);

CShape* Shape961 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet962 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet962->setVertexCount(new int[1]{2});
CCoordinate* Coordinate963 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate963->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet962->setCoord(*Coordinate963);

//from r_shoulder to r_elbow vertices 2
CColorRGBA* ColorRGBA964 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA964->setUSE("HAnimSegmentLineColorRGBA");
LineSet962->setColor(*ColorRGBA964);

Shape961->setGeometry(LineSet962);

HAnimSegment957->addChildren(*Shape961);

CHAnimSite* HAnimSite965 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite965->setName("r_humeral_medial_epicondyles");
HAnimSite965->setDEF("hanim_r_humeral_medial_epicondyles");
HAnimSite965->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CTouchSensor* TouchSensor966 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor966->setDescription("HAnimSite r_humeral_medial_epicondyles");
HAnimSite965->addChildren(*TouchSensor966);

CShape* Shape967 = (CShape *)(m_pScene.createNode("Shape"));
Shape967->setUSE("HAnimSiteShape");
HAnimSite965->addChildren(*Shape967);

HAnimSegment957->addChildren(*HAnimSite965);

CHAnimSite* HAnimSite968 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite968->setName("r_olecranon");
HAnimSite968->setDEF("hanim_r_olecranon");
HAnimSite968->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CTouchSensor* TouchSensor969 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor969->setDescription("HAnimSite r_olecranon");
HAnimSite968->addChildren(*TouchSensor969);

CShape* Shape970 = (CShape *)(m_pScene.createNode("Shape"));
Shape970->setUSE("HAnimSiteShape");
HAnimSite968->addChildren(*Shape970);

HAnimSegment957->addChildren(*HAnimSite968);

CHAnimSite* HAnimSite971 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite971->setName("r_radial_styloid");
HAnimSite971->setDEF("hanim_r_radial_styloid");
HAnimSite971->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CTouchSensor* TouchSensor972 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor972->setDescription("HAnimSite r_radial_styloid");
HAnimSite971->addChildren(*TouchSensor972);

CShape* Shape973 = (CShape *)(m_pScene.createNode("Shape"));
Shape973->setUSE("HAnimSiteShape");
HAnimSite971->addChildren(*Shape973);

HAnimSegment957->addChildren(*HAnimSite971);

CHAnimSite* HAnimSite974 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite974->setName("r_radiale");
HAnimSite974->setDEF("hanim_r_radiale");
HAnimSite974->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CTouchSensor* TouchSensor975 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor975->setDescription("HAnimSite r_radiale");
HAnimSite974->addChildren(*TouchSensor975);

CShape* Shape976 = (CShape *)(m_pScene.createNode("Shape"));
Shape976->setUSE("HAnimSiteShape");
HAnimSite974->addChildren(*Shape976);

HAnimSegment957->addChildren(*HAnimSite974);

HAnimJoint956->addChildren(*HAnimSegment957);

CHAnimJoint* HAnimJoint977 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint977->setName("r_elbow");
HAnimJoint977->setDEF("hanim_r_elbow");
HAnimJoint977->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint977->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint977->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment978 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment978->setName("r_forearm");
HAnimSegment978->setDEF("hanim_r_forearm");
CTransform* Transform979 = (CTransform *)(m_pScene.createNode("Transform"));
Transform979->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform980 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape981 = (CShape *)(m_pScene.createNode("Shape"));
Shape981->setUSE("HAnimJointShape");
Transform980->addChild(*Shape981);

Transform979->addChildren(*Transform980);

HAnimSegment978->addChildren(*Transform979);

CShape* Shape982 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet983 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet983->setVertexCount(new int[1]{2});
CCoordinate* Coordinate984 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate984->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet983->setCoord(*Coordinate984);

//from r_elbow to r_radiocarpal vertices 2
CColorRGBA* ColorRGBA985 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA985->setUSE("HAnimSegmentLineColorRGBA");
LineSet983->setColor(*ColorRGBA985);

Shape982->setGeometry(LineSet983);

HAnimSegment978->addChildren(*Shape982);

CHAnimSite* HAnimSite986 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite986->setName("r_ulnar_styloid");
HAnimSite986->setDEF("hanim_r_ulnar_styloid");
HAnimSite986->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CTouchSensor* TouchSensor987 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor987->setDescription("HAnimSite r_ulnar_styloid");
HAnimSite986->addChildren(*TouchSensor987);

CShape* Shape988 = (CShape *)(m_pScene.createNode("Shape"));
Shape988->setUSE("HAnimSiteShape");
HAnimSite986->addChildren(*Shape988);

HAnimSegment978->addChildren(*HAnimSite986);

HAnimJoint977->addChildren(*HAnimSegment978);

CHAnimJoint* HAnimJoint989 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint989->setName("r_radiocarpal");
HAnimJoint989->setDEF("hanim_r_radiocarpal");
HAnimJoint989->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint989->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint989->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment990 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment990->setName("r_carpal");
HAnimSegment990->setDEF("hanim_r_carpal");
CTransform* Transform991 = (CTransform *)(m_pScene.createNode("Transform"));
Transform991->setScale(new float[3]{0.2,0.2,0.2});
Transform991->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform991->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
CTransform* Transform992 = (CTransform *)(m_pScene.createNode("Transform"));
Transform992->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
CShape* Shape993 = (CShape *)(m_pScene.createNode("Shape"));
Shape993->setUSE("HAnimJointShape");
Transform992->addChild(*Shape993);

Transform991->addChildren(*Transform992);

HAnimSegment990->addChildren(*Transform991);

CShape* Shape994 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet995 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet995->setVertexCount(new int[1]{2});
CCoordinate* Coordinate996 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate996->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473});
LineSet995->setCoord(*Coordinate996);

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA997 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA997->setUSE("HAnimSegmentLineColorRGBA");
LineSet995->setColor(*ColorRGBA997);

Shape994->setGeometry(LineSet995);

HAnimSegment990->addChildren(*Shape994);

CShape* Shape998 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet999 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet999->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1000 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1000->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218});
LineSet999->setCoord(*Coordinate1000);

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA1001 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1001->setUSE("HAnimSegmentLineColorRGBA");
LineSet999->setColor(*ColorRGBA1001);

Shape998->setGeometry(LineSet999);

HAnimSegment990->addChildren(*Shape998);

CHAnimSite* HAnimSite1002 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1002->setName("r_metacarpal_phalanx_2");
HAnimSite1002->setDEF("hanim_r_metacarpal_phalanx_2");
HAnimSite1002->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CTouchSensor* TouchSensor1003 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1003->setDescription("HAnimSite r_metacarpal_phalanx_2");
HAnimSite1002->addChildren(*TouchSensor1003);

CShape* Shape1004 = (CShape *)(m_pScene.createNode("Shape"));
Shape1004->setUSE("HAnimSiteShape");
HAnimSite1002->addChildren(*Shape1004);

HAnimSegment990->addChildren(*HAnimSite1002);

CShape* Shape1005 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1006 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1006->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1007 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1007->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468});
LineSet1006->setCoord(*Coordinate1007);

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA1008 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1008->setUSE("HAnimSegmentLineColorRGBA");
LineSet1006->setColor(*ColorRGBA1008);

Shape1005->setGeometry(LineSet1006);

HAnimSegment990->addChildren(*Shape1005);

CHAnimSite* HAnimSite1009 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1009->setName("r_metacarpal_phalanx_3");
HAnimSite1009->setDEF("hanim_r_metacarpal_phalanx_3");
CTouchSensor* TouchSensor1010 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1010->setDescription("HAnimSite r_metacarpal_phalanx_3");
HAnimSite1009->addChildren(*TouchSensor1010);

CShape* Shape1011 = (CShape *)(m_pScene.createNode("Shape"));
Shape1011->setUSE("HAnimSiteShape");
HAnimSite1009->addChildren(*Shape1011);

HAnimSegment990->addChildren(*HAnimSite1009);

CShape* Shape1012 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1013 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1013->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1014 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1014->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732});
LineSet1013->setCoord(*Coordinate1014);

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA1015 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1015->setUSE("HAnimSegmentLineColorRGBA");
LineSet1013->setColor(*ColorRGBA1015);

Shape1012->setGeometry(LineSet1013);

HAnimSegment990->addChildren(*Shape1012);

CShape* Shape1016 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1017 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1017->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1018 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1018->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975});
LineSet1017->setCoord(*Coordinate1018);

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA1019 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1019->setUSE("HAnimSegmentLineColorRGBA");
LineSet1017->setColor(*ColorRGBA1019);

Shape1016->setGeometry(LineSet1017);

HAnimSegment990->addChildren(*Shape1016);

CHAnimSite* HAnimSite1020 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1020->setName("r_metacarpal_phalanx_5");
HAnimSite1020->setDEF("hanim_r_metacarpal_phalanx_5");
HAnimSite1020->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CTouchSensor* TouchSensor1021 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1021->setDescription("HAnimSite r_metacarpal_phalanx_5");
HAnimSite1020->addChildren(*TouchSensor1021);

CShape* Shape1022 = (CShape *)(m_pScene.createNode("Shape"));
Shape1022->setUSE("HAnimSiteShape");
HAnimSite1020->addChildren(*Shape1022);

HAnimSegment990->addChildren(*HAnimSite1020);

HAnimJoint989->addChildren(*HAnimSegment990);

CHAnimJoint* HAnimJoint1023 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1023->setName("r_carpometacarpal_1");
HAnimJoint1023->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint1023->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint1023->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1023->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1024 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1024->setName("r_metacarpal_1");
HAnimSegment1024->setDEF("hanim_r_metacarpal_1");
CTransform* Transform1025 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1025->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
CTransform* Transform1026 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1027 = (CShape *)(m_pScene.createNode("Shape"));
Shape1027->setUSE("HAnimJointShape");
Transform1026->addChild(*Shape1027);

Transform1025->addChildren(*Transform1026);

HAnimSegment1024->addChildren(*Transform1025);

CShape* Shape1028 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1029 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1029->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1030 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1030->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet1029->setCoord(*Coordinate1030);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA1031 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1031->setUSE("HAnimSegmentLineColorRGBA");
LineSet1029->setColor(*ColorRGBA1031);

Shape1028->setGeometry(LineSet1029);

HAnimSegment1024->addChildren(*Shape1028);

HAnimJoint1023->addChildren(*HAnimSegment1024);

CHAnimJoint* HAnimJoint1032 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1032->setName("r_metacarpophalangeal_1");
HAnimJoint1032->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint1032->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint1032->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1032->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1033 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1033->setName("r_carpal_proximal_phalanx_1");
HAnimSegment1033->setDEF("hanim_r_carpal_proximal_phalanx_1");
CTransform* Transform1034 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1034->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
CTransform* Transform1035 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1036 = (CShape *)(m_pScene.createNode("Shape"));
Shape1036->setUSE("HAnimJointShape");
Transform1035->addChild(*Shape1036);

Transform1034->addChildren(*Transform1035);

HAnimSegment1033->addChildren(*Transform1034);

CShape* Shape1037 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1038 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1038->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1039 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1039->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet1038->setCoord(*Coordinate1039);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA1040 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1040->setUSE("HAnimSegmentLineColorRGBA");
LineSet1038->setColor(*ColorRGBA1040);

Shape1037->setGeometry(LineSet1038);

HAnimSegment1033->addChildren(*Shape1037);

CHAnimSite* HAnimSite1041 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1041->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite1041->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
CTouchSensor* TouchSensor1042 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1042->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite1041->addChildren(*TouchSensor1042);

CShape* Shape1043 = (CShape *)(m_pScene.createNode("Shape"));
Shape1043->setUSE("HAnimSiteShape");
HAnimSite1041->addChildren(*Shape1043);

HAnimSegment1033->addChildren(*HAnimSite1041);

HAnimJoint1032->addChildren(*HAnimSegment1033);

CHAnimJoint* HAnimJoint1044 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1044->setName("r_carpal_interphalangeal_1");
HAnimJoint1044->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1044->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1044->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1044->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1032->addChildren(*HAnimJoint1044);

HAnimJoint1023->addChildren(*HAnimJoint1032);

HAnimJoint989->addChildren(*HAnimJoint1023);

CHAnimJoint* HAnimJoint1045 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1045->setName("r_carpometacarpal_2");
HAnimJoint1045->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1045->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint1045->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1045->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1046 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1046->setName("r_metacarpal_2");
HAnimSegment1046->setDEF("hanim_r_metacarpal_2");
CTransform* Transform1047 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1047->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CTransform* Transform1048 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1049 = (CShape *)(m_pScene.createNode("Shape"));
Shape1049->setUSE("HAnimJointShape");
Transform1048->addChild(*Shape1049);

Transform1047->addChildren(*Transform1048);

HAnimSegment1046->addChildren(*Transform1047);

CShape* Shape1050 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1051 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1051->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1052 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1052->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1051->setCoord(*Coordinate1052);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA1053 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1053->setUSE("HAnimSegmentLineColorRGBA");
LineSet1051->setColor(*ColorRGBA1053);

Shape1050->setGeometry(LineSet1051);

HAnimSegment1046->addChildren(*Shape1050);

HAnimJoint1045->addChildren(*HAnimSegment1046);

CHAnimJoint* HAnimJoint1054 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1054->setName("r_metacarpophalangeal_2");
HAnimJoint1054->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1054->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint1054->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1054->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1055 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1055->setName("r_carpal_proximal_phalanx_2");
HAnimSegment1055->setDEF("hanim_r_carpal_proximal_phalanx_2");
CTransform* Transform1056 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1056->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CTransform* Transform1057 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1058 = (CShape *)(m_pScene.createNode("Shape"));
Shape1058->setUSE("HAnimJointShape");
Transform1057->addChild(*Shape1058);

Transform1056->addChildren(*Transform1057);

HAnimSegment1055->addChildren(*Transform1056);

CShape* Shape1059 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1060 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1060->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1061 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1061->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1060->setCoord(*Coordinate1061);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1062 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1062->setUSE("HAnimSegmentLineColorRGBA");
LineSet1060->setColor(*ColorRGBA1062);

Shape1059->setGeometry(LineSet1060);

HAnimSegment1055->addChildren(*Shape1059);

HAnimJoint1054->addChildren(*HAnimSegment1055);

CHAnimJoint* HAnimJoint1063 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1063->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1063->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1063->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint1063->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1063->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1064 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1064->setName("r_carpal_middle_phalanx_2");
HAnimSegment1064->setDEF("hanim_r_carpal_middle_phalanx_2");
CTransform* Transform1065 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1065->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CTransform* Transform1066 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1067 = (CShape *)(m_pScene.createNode("Shape"));
Shape1067->setUSE("HAnimJointShape");
Transform1066->addChild(*Shape1067);

Transform1065->addChildren(*Transform1066);

HAnimSegment1064->addChildren(*Transform1065);

CShape* Shape1068 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1069 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1069->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1070 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1070->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1069->setCoord(*Coordinate1070);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1071 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1071->setUSE("HAnimSegmentLineColorRGBA");
LineSet1069->setColor(*ColorRGBA1071);

Shape1068->setGeometry(LineSet1069);

HAnimSegment1064->addChildren(*Shape1068);

CHAnimSite* HAnimSite1072 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1072->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite1072->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
CTouchSensor* TouchSensor1073 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1073->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1072->addChildren(*TouchSensor1073);

CShape* Shape1074 = (CShape *)(m_pScene.createNode("Shape"));
Shape1074->setUSE("HAnimSiteShape");
HAnimSite1072->addChildren(*Shape1074);

HAnimSegment1064->addChildren(*HAnimSite1072);

CHAnimSite* HAnimSite1075 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1075->setName("r_dactylion");
HAnimSite1075->setDEF("hanim_r_dactylion");
HAnimSite1075->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CTouchSensor* TouchSensor1076 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1076->setDescription("HAnimSite r_dactylion");
HAnimSite1075->addChildren(*TouchSensor1076);

CShape* Shape1077 = (CShape *)(m_pScene.createNode("Shape"));
Shape1077->setUSE("HAnimSiteShape");
HAnimSite1075->addChildren(*Shape1077);

HAnimSegment1064->addChildren(*HAnimSite1075);

HAnimJoint1063->addChildren(*HAnimSegment1064);

CHAnimJoint* HAnimJoint1078 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1078->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1078->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1078->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1078->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1078->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1063->addChildren(*HAnimJoint1078);

HAnimJoint1054->addChildren(*HAnimJoint1063);

HAnimJoint1045->addChildren(*HAnimJoint1054);

HAnimJoint989->addChildren(*HAnimJoint1045);

CHAnimJoint* HAnimJoint1079 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1079->setName("r_carpometacarpal_3");
HAnimJoint1079->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1079->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint1079->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1079->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1080 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1080->setName("r_metacarpal_3");
HAnimSegment1080->setDEF("hanim_r_metacarpal_3");
CTransform* Transform1081 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1081->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CTransform* Transform1082 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1083 = (CShape *)(m_pScene.createNode("Shape"));
Shape1083->setUSE("HAnimJointShape");
Transform1082->addChild(*Shape1083);

Transform1081->addChildren(*Transform1082);

HAnimSegment1080->addChildren(*Transform1081);

CShape* Shape1084 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1085 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1085->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1086 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1086->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1085->setCoord(*Coordinate1086);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA1087 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1087->setUSE("HAnimSegmentLineColorRGBA");
LineSet1085->setColor(*ColorRGBA1087);

Shape1084->setGeometry(LineSet1085);

HAnimSegment1080->addChildren(*Shape1084);

HAnimJoint1079->addChildren(*HAnimSegment1080);

CHAnimJoint* HAnimJoint1088 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1088->setName("r_metacarpophalangeal_3");
HAnimJoint1088->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1088->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint1088->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1088->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1089 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1089->setName("r_carpal_proximal_phalanx_3");
HAnimSegment1089->setDEF("hanim_r_carpal_proximal_phalanx_3");
CTransform* Transform1090 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1090->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CTransform* Transform1091 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1092 = (CShape *)(m_pScene.createNode("Shape"));
Shape1092->setUSE("HAnimJointShape");
Transform1091->addChild(*Shape1092);

Transform1090->addChildren(*Transform1091);

HAnimSegment1089->addChildren(*Transform1090);

CShape* Shape1093 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1094 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1094->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1095 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1095->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1094->setCoord(*Coordinate1095);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1096 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1096->setUSE("HAnimSegmentLineColorRGBA");
LineSet1094->setColor(*ColorRGBA1096);

Shape1093->setGeometry(LineSet1094);

HAnimSegment1089->addChildren(*Shape1093);

HAnimJoint1088->addChildren(*HAnimSegment1089);

CHAnimJoint* HAnimJoint1097 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1097->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1097->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1097->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint1097->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1097->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1098 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1098->setName("r_carpal_middle_phalanx_3");
HAnimSegment1098->setDEF("hanim_r_carpal_middle_phalanx_3");
CTransform* Transform1099 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1099->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CTransform* Transform1100 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1101 = (CShape *)(m_pScene.createNode("Shape"));
Shape1101->setUSE("HAnimJointShape");
Transform1100->addChild(*Shape1101);

Transform1099->addChildren(*Transform1100);

HAnimSegment1098->addChildren(*Transform1099);

CShape* Shape1102 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1103 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1103->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1104 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1104->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1103->setCoord(*Coordinate1104);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1105 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1105->setUSE("HAnimSegmentLineColorRGBA");
LineSet1103->setColor(*ColorRGBA1105);

Shape1102->setGeometry(LineSet1103);

HAnimSegment1098->addChildren(*Shape1102);

CHAnimSite* HAnimSite1106 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1106->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite1106->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
CTouchSensor* TouchSensor1107 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1107->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1106->addChildren(*TouchSensor1107);

CShape* Shape1108 = (CShape *)(m_pScene.createNode("Shape"));
Shape1108->setUSE("HAnimSiteShape");
HAnimSite1106->addChildren(*Shape1108);

HAnimSegment1098->addChildren(*HAnimSite1106);

HAnimJoint1097->addChildren(*HAnimSegment1098);

CHAnimJoint* HAnimJoint1109 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1109->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1109->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1109->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1109->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1109->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1097->addChildren(*HAnimJoint1109);

HAnimJoint1088->addChildren(*HAnimJoint1097);

HAnimJoint1079->addChildren(*HAnimJoint1088);

HAnimJoint989->addChildren(*HAnimJoint1079);

CHAnimJoint* HAnimJoint1110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1110->setName("r_carpometacarpal_4");
HAnimJoint1110->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1110->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint1110->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1110->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1111 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1111->setName("r_metacarpal_4");
HAnimSegment1111->setDEF("hanim_r_metacarpal_4");
CTransform* Transform1112 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1112->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
CTransform* Transform1113 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1114 = (CShape *)(m_pScene.createNode("Shape"));
Shape1114->setUSE("HAnimJointShape");
Transform1113->addChild(*Shape1114);

Transform1112->addChildren(*Transform1113);

HAnimSegment1111->addChildren(*Transform1112);

CShape* Shape1115 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1116 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1116->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1117 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1117->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1116->setCoord(*Coordinate1117);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA1118 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1118->setUSE("HAnimSegmentLineColorRGBA");
LineSet1116->setColor(*ColorRGBA1118);

Shape1115->setGeometry(LineSet1116);

HAnimSegment1111->addChildren(*Shape1115);

HAnimJoint1110->addChildren(*HAnimSegment1111);

CHAnimJoint* HAnimJoint1119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1119->setName("r_metacarpophalangeal_4");
HAnimJoint1119->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1119->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint1119->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1119->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1120 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1120->setName("r_carpal_proximal_phalanx_4");
HAnimSegment1120->setDEF("hanim_r_carpal_proximal_phalanx_4");
CTransform* Transform1121 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1121->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
CTransform* Transform1122 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1123 = (CShape *)(m_pScene.createNode("Shape"));
Shape1123->setUSE("HAnimJointShape");
Transform1122->addChild(*Shape1123);

Transform1121->addChildren(*Transform1122);

HAnimSegment1120->addChildren(*Transform1121);

CShape* Shape1124 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1125 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1125->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1126 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1126->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1125->setCoord(*Coordinate1126);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1127 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1127->setUSE("HAnimSegmentLineColorRGBA");
LineSet1125->setColor(*ColorRGBA1127);

Shape1124->setGeometry(LineSet1125);

HAnimSegment1120->addChildren(*Shape1124);

HAnimJoint1119->addChildren(*HAnimSegment1120);

CHAnimJoint* HAnimJoint1128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1128->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1128->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1128->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint1128->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1128->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1129 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1129->setName("r_carpal_middle_phalanx_4");
HAnimSegment1129->setDEF("hanim_r_carpal_middle_phalanx_4");
CTransform* Transform1130 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1130->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CTransform* Transform1131 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1132 = (CShape *)(m_pScene.createNode("Shape"));
Shape1132->setUSE("HAnimJointShape");
Transform1131->addChild(*Shape1132);

Transform1130->addChildren(*Transform1131);

HAnimSegment1129->addChildren(*Transform1130);

CShape* Shape1133 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1134 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1134->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1135 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1135->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1134->setCoord(*Coordinate1135);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1136 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1136->setUSE("HAnimSegmentLineColorRGBA");
LineSet1134->setColor(*ColorRGBA1136);

Shape1133->setGeometry(LineSet1134);

HAnimSegment1129->addChildren(*Shape1133);

CHAnimSite* HAnimSite1137 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1137->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite1137->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
CTouchSensor* TouchSensor1138 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1138->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1137->addChildren(*TouchSensor1138);

CShape* Shape1139 = (CShape *)(m_pScene.createNode("Shape"));
Shape1139->setUSE("HAnimSiteShape");
HAnimSite1137->addChildren(*Shape1139);

HAnimSegment1129->addChildren(*HAnimSite1137);

HAnimJoint1128->addChildren(*HAnimSegment1129);

CHAnimJoint* HAnimJoint1140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1140->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1140->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1140->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1140->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1140->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1128->addChildren(*HAnimJoint1140);

HAnimJoint1119->addChildren(*HAnimJoint1128);

HAnimJoint1110->addChildren(*HAnimJoint1119);

HAnimJoint989->addChildren(*HAnimJoint1110);

CHAnimJoint* HAnimJoint1141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1141->setName("r_carpometacarpal_5");
HAnimJoint1141->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1141->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint1141->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1141->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1142 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1142->setName("r_metacarpal_5");
HAnimSegment1142->setDEF("hanim_r_metacarpal_5");
CTransform* Transform1143 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1143->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
CTransform* Transform1144 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1145 = (CShape *)(m_pScene.createNode("Shape"));
Shape1145->setUSE("HAnimJointShape");
Transform1144->addChild(*Shape1145);

Transform1143->addChildren(*Transform1144);

HAnimSegment1142->addChildren(*Transform1143);

CShape* Shape1146 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1147 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1147->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1148 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1148->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1147->setCoord(*Coordinate1148);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1149 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1149->setUSE("HAnimSegmentLineColorRGBA");
LineSet1147->setColor(*ColorRGBA1149);

Shape1146->setGeometry(LineSet1147);

HAnimSegment1142->addChildren(*Shape1146);

HAnimJoint1141->addChildren(*HAnimSegment1142);

CHAnimJoint* HAnimJoint1150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1150->setName("r_metacarpophalangeal_5");
HAnimJoint1150->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1150->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint1150->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1150->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1151 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1151->setName("r_carpal_proximal_phalanx_5");
HAnimSegment1151->setDEF("hanim_r_carpal_proximal_phalanx_5");
CTransform* Transform1152 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1152->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
CTransform* Transform1153 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1154 = (CShape *)(m_pScene.createNode("Shape"));
Shape1154->setUSE("HAnimJointShape");
Transform1153->addChild(*Shape1154);

Transform1152->addChildren(*Transform1153);

HAnimSegment1151->addChildren(*Transform1152);

CShape* Shape1155 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1156 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1156->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1157 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1157->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1156->setCoord(*Coordinate1157);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1158 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1158->setUSE("HAnimSegmentLineColorRGBA");
LineSet1156->setColor(*ColorRGBA1158);

Shape1155->setGeometry(LineSet1156);

HAnimSegment1151->addChildren(*Shape1155);

HAnimJoint1150->addChildren(*HAnimSegment1151);

CHAnimJoint* HAnimJoint1159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1159->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1159->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint1159->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint1159->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1159->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1160 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1160->setName("r_carpal_middle_phalanx_5");
HAnimSegment1160->setDEF("hanim_r_carpal_middle_phalanx_5");
CTransform* Transform1161 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1161->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
CTransform* Transform1162 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1163 = (CShape *)(m_pScene.createNode("Shape"));
Shape1163->setUSE("HAnimJointShape");
Transform1162->addChild(*Shape1163);

Transform1161->addChildren(*Transform1162);

HAnimSegment1160->addChildren(*Transform1161);

CShape* Shape1164 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1165 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1165->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1166 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1166->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1165->setCoord(*Coordinate1166);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1167 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1167->setUSE("HAnimSegmentLineColorRGBA");
LineSet1165->setColor(*ColorRGBA1167);

Shape1164->setGeometry(LineSet1165);

HAnimSegment1160->addChildren(*Shape1164);

CHAnimSite* HAnimSite1168 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1168->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite1168->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
CTouchSensor* TouchSensor1169 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1169->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1168->addChildren(*TouchSensor1169);

CShape* Shape1170 = (CShape *)(m_pScene.createNode("Shape"));
Shape1170->setUSE("HAnimSiteShape");
HAnimSite1168->addChildren(*Shape1170);

HAnimSegment1160->addChildren(*HAnimSite1168);

HAnimJoint1159->addChildren(*HAnimSegment1160);

CHAnimJoint* HAnimJoint1171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1171->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1171->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint1171->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1171->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1171->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1159->addChildren(*HAnimJoint1171);

HAnimJoint1150->addChildren(*HAnimJoint1159);

HAnimJoint1141->addChildren(*HAnimJoint1150);

HAnimJoint989->addChildren(*HAnimJoint1141);

HAnimJoint977->addChildren(*HAnimJoint989);

HAnimJoint956->addChildren(*HAnimJoint977);

HAnimJoint941->addChildren(*HAnimJoint956);

HAnimJoint932->addChildren(*HAnimJoint941);

HAnimJoint488->addChildren(*HAnimJoint932);

HAnimJoint473->addChildren(*HAnimJoint488);

HAnimJoint464->addChildren(*HAnimJoint473);

HAnimJoint455->addChildren(*HAnimJoint464);

HAnimJoint446->addChildren(*HAnimJoint455);

HAnimJoint434->addChildren(*HAnimJoint446);

HAnimJoint413->addChildren(*HAnimJoint434);

HAnimJoint404->addChildren(*HAnimJoint413);

HAnimJoint395->addChildren(*HAnimJoint404);

HAnimJoint380->addChildren(*HAnimJoint395);

HAnimJoint368->addChildren(*HAnimJoint380);

HAnimJoint359->addChildren(*HAnimJoint368);

HAnimJoint350->addChildren(*HAnimJoint359);

HAnimJoint341->addChildren(*HAnimJoint350);

HAnimJoint323->addChildren(*HAnimJoint341);

HAnimJoint314->addChildren(*HAnimJoint323);

HAnimJoint305->addChildren(*HAnimJoint314);

HAnimJoint52->addChildren(*HAnimJoint305);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimJoint* HAnimJoint1172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1172->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint1172);

CHAnimJoint* HAnimJoint1173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1173->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint1173);

CHAnimJoint* HAnimJoint1174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1174->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1174);

CHAnimJoint* HAnimJoint1175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1175->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1175);

CHAnimJoint* HAnimJoint1176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1176->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1176);

CHAnimJoint* HAnimJoint1177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1177->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1177);

CHAnimJoint* HAnimJoint1178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1178->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1178);

CHAnimJoint* HAnimJoint1179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1179->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1179);

CHAnimJoint* HAnimJoint1180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1180->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1180);

CHAnimJoint* HAnimJoint1181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1181->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1181);

CHAnimJoint* HAnimJoint1182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1182->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1182);

CHAnimJoint* HAnimJoint1183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1183->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1183);

CHAnimJoint* HAnimJoint1184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1184->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1184);

CHAnimJoint* HAnimJoint1185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1185->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1185);

CHAnimJoint* HAnimJoint1186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1186->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint1186);

CHAnimJoint* HAnimJoint1187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1187->setUSE("hanim_vl4");
HAnimHumanoid43->addJoints(*HAnimJoint1187);

CHAnimJoint* HAnimJoint1188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1188->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint1188);

CHAnimJoint* HAnimJoint1189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1189->setUSE("hanim_vl2");
HAnimHumanoid43->addJoints(*HAnimJoint1189);

CHAnimJoint* HAnimJoint1190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1190->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint1190);

CHAnimJoint* HAnimJoint1191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1191->setUSE("hanim_vt12");
HAnimHumanoid43->addJoints(*HAnimJoint1191);

CHAnimJoint* HAnimJoint1192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1192->setUSE("hanim_vt11");
HAnimHumanoid43->addJoints(*HAnimJoint1192);

CHAnimJoint* HAnimJoint1193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1193->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint1193);

CHAnimJoint* HAnimJoint1194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1194->setUSE("hanim_vt9");
HAnimHumanoid43->addJoints(*HAnimJoint1194);

CHAnimJoint* HAnimJoint1195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1195->setUSE("hanim_vt8");
HAnimHumanoid43->addJoints(*HAnimJoint1195);

CHAnimJoint* HAnimJoint1196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1196->setUSE("hanim_vt7");
HAnimHumanoid43->addJoints(*HAnimJoint1196);

CHAnimJoint* HAnimJoint1197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1197->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint1197);

CHAnimJoint* HAnimJoint1198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1198->setUSE("hanim_vt5");
HAnimHumanoid43->addJoints(*HAnimJoint1198);

CHAnimJoint* HAnimJoint1199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1199->setUSE("hanim_vt4");
HAnimHumanoid43->addJoints(*HAnimJoint1199);

CHAnimJoint* HAnimJoint1200 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1200->setUSE("hanim_vt3");
HAnimHumanoid43->addJoints(*HAnimJoint1200);

CHAnimJoint* HAnimJoint1201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1201->setUSE("hanim_vt2");
HAnimHumanoid43->addJoints(*HAnimJoint1201);

CHAnimJoint* HAnimJoint1202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1202->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint1202);

CHAnimJoint* HAnimJoint1203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1203->setUSE("hanim_vc7");
HAnimHumanoid43->addJoints(*HAnimJoint1203);

CHAnimJoint* HAnimJoint1204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1204->setUSE("hanim_vc6");
HAnimHumanoid43->addJoints(*HAnimJoint1204);

CHAnimJoint* HAnimJoint1205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1205->setUSE("hanim_vc5");
HAnimHumanoid43->addJoints(*HAnimJoint1205);

CHAnimJoint* HAnimJoint1206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1206->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint1206);

CHAnimJoint* HAnimJoint1207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1207->setUSE("hanim_vc3");
HAnimHumanoid43->addJoints(*HAnimJoint1207);

CHAnimJoint* HAnimJoint1208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1208->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint1208);

CHAnimJoint* HAnimJoint1209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1209->setUSE("hanim_vc1");
HAnimHumanoid43->addJoints(*HAnimJoint1209);

CHAnimJoint* HAnimJoint1210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1210->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint1210);

CHAnimJoint* HAnimJoint1211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1211->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1211);

CHAnimJoint* HAnimJoint1212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1212->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1212);

CHAnimJoint* HAnimJoint1213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1213->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1213);

CHAnimJoint* HAnimJoint1214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1214->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1214);

CHAnimJoint* HAnimJoint1215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1215->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1215);

CHAnimJoint* HAnimJoint1216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1216->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1216);

CHAnimJoint* HAnimJoint1217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1217->setUSE("hanim_temporomandibular");
HAnimHumanoid43->addJoints(*HAnimJoint1217);

CHAnimJoint* HAnimJoint1218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1218->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1218);

CHAnimJoint* HAnimJoint1219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1219->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1219);

CHAnimJoint* HAnimJoint1220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1220->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1220);

CHAnimJoint* HAnimJoint1221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1221->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1221);

CHAnimJoint* HAnimJoint1222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1222->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1222);

CHAnimJoint* HAnimJoint1223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1223->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1223);

CHAnimJoint* HAnimJoint1224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1224->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1224);

CHAnimJoint* HAnimJoint1225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1225->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1225);

CHAnimJoint* HAnimJoint1226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1226->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1226);

CHAnimJoint* HAnimJoint1227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1227->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1227);

CHAnimJoint* HAnimJoint1228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1228->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1228);

CHAnimJoint* HAnimJoint1229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1229->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1229);

CHAnimJoint* HAnimJoint1230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1230->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1230);

CHAnimJoint* HAnimJoint1231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1231->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1231);

CHAnimJoint* HAnimJoint1232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1232->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1232);

CHAnimJoint* HAnimJoint1233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1233->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1233);

CHAnimJoint* HAnimJoint1234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1234->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1234);

CHAnimJoint* HAnimJoint1235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1235->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1235);

CHAnimJoint* HAnimJoint1236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1236->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1236);

CHAnimJoint* HAnimJoint1237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1237->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1237);

CHAnimJoint* HAnimJoint1238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1238->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1238);

CHAnimJoint* HAnimJoint1239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1239->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1239);

CHAnimJoint* HAnimJoint1240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1240->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1240);

CHAnimJoint* HAnimJoint1241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1241->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1241);

CHAnimJoint* HAnimJoint1242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1242->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1242);

CHAnimJoint* HAnimJoint1243 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1243->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1243);

CHAnimJoint* HAnimJoint1244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1244->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1244);

CHAnimJoint* HAnimJoint1245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1245->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1245);

CHAnimJoint* HAnimJoint1246 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1246->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1246);

CHAnimJoint* HAnimJoint1247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1247->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1247);

CHAnimJoint* HAnimJoint1248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1248->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1248);

CHAnimJoint* HAnimJoint1249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1249->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1249);

CHAnimJoint* HAnimJoint1250 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1250->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1250);

CHAnimJoint* HAnimJoint1251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1251->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1251);

CHAnimJoint* HAnimJoint1252 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1252->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1252);

CHAnimJoint* HAnimJoint1253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1253->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1253);

CHAnimJoint* HAnimJoint1254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1254->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1254);

CHAnimJoint* HAnimJoint1255 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1255->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1255);

CHAnimJoint* HAnimJoint1256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1256->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1256);

CHAnimJoint* HAnimJoint1257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1257->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1257);

CHAnimJoint* HAnimJoint1258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1258->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1258);

CHAnimJoint* HAnimJoint1259 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1259->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1259);

CHAnimJoint* HAnimJoint1260 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1260->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1260);

CHAnimJoint* HAnimJoint1261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1261->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1261);

CHAnimJoint* HAnimJoint1262 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1262->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1262);

CHAnimJoint* HAnimJoint1263 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1263->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1263);

CHAnimJoint* HAnimJoint1264 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1264->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1264);

CHAnimJoint* HAnimJoint1265 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1265->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1265);

CHAnimSegment* HAnimSegment1266 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1266->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment1266);

CHAnimSegment* HAnimSegment1267 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1267->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment1267);

CHAnimSegment* HAnimSegment1268 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1268->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1268);

CHAnimSegment* HAnimSegment1269 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1269->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1269);

CHAnimSegment* HAnimSegment1270 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1270->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1270);

CHAnimSegment* HAnimSegment1271 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1271->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1271);

CHAnimSegment* HAnimSegment1272 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1272->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1272);

CHAnimSegment* HAnimSegment1273 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1273->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1273);

CHAnimSegment* HAnimSegment1274 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1274->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1274);

CHAnimSegment* HAnimSegment1275 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1275->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1275);

CHAnimSegment* HAnimSegment1276 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1276->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1276);

CHAnimSegment* HAnimSegment1277 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1277->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1277);

CHAnimSegment* HAnimSegment1278 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1278->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment1278);

CHAnimSegment* HAnimSegment1279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1279->setUSE("hanim_l4");
HAnimHumanoid43->setSegments(*HAnimSegment1279);

CHAnimSegment* HAnimSegment1280 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1280->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment1280);

CHAnimSegment* HAnimSegment1281 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1281->setUSE("hanim_l2");
HAnimHumanoid43->setSegments(*HAnimSegment1281);

CHAnimSegment* HAnimSegment1282 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1282->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment1282);

CHAnimSegment* HAnimSegment1283 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1283->setUSE("hanim_t12");
HAnimHumanoid43->setSegments(*HAnimSegment1283);

CHAnimSegment* HAnimSegment1284 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1284->setUSE("hanim_t11");
HAnimHumanoid43->setSegments(*HAnimSegment1284);

CHAnimSegment* HAnimSegment1285 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1285->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment1285);

CHAnimSegment* HAnimSegment1286 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1286->setUSE("hanim_t9");
HAnimHumanoid43->setSegments(*HAnimSegment1286);

CHAnimSegment* HAnimSegment1287 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1287->setUSE("hanim_t8");
HAnimHumanoid43->setSegments(*HAnimSegment1287);

CHAnimSegment* HAnimSegment1288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1288->setUSE("hanim_t7");
HAnimHumanoid43->setSegments(*HAnimSegment1288);

CHAnimSegment* HAnimSegment1289 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1289->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment1289);

CHAnimSegment* HAnimSegment1290 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1290->setUSE("hanim_t5");
HAnimHumanoid43->setSegments(*HAnimSegment1290);

CHAnimSegment* HAnimSegment1291 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1291->setUSE("hanim_t4");
HAnimHumanoid43->setSegments(*HAnimSegment1291);

CHAnimSegment* HAnimSegment1292 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1292->setUSE("hanim_t3");
HAnimHumanoid43->setSegments(*HAnimSegment1292);

CHAnimSegment* HAnimSegment1293 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1293->setUSE("hanim_t2");
HAnimHumanoid43->setSegments(*HAnimSegment1293);

CHAnimSegment* HAnimSegment1294 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1294->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment1294);

CHAnimSegment* HAnimSegment1295 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1295->setUSE("hanim_c7");
HAnimHumanoid43->setSegments(*HAnimSegment1295);

CHAnimSegment* HAnimSegment1296 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1296->setUSE("hanim_c6");
HAnimHumanoid43->setSegments(*HAnimSegment1296);

CHAnimSegment* HAnimSegment1297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1297->setUSE("hanim_c5");
HAnimHumanoid43->setSegments(*HAnimSegment1297);

CHAnimSegment* HAnimSegment1298 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1298->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment1298);

CHAnimSegment* HAnimSegment1299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1299->setUSE("hanim_c3");
HAnimHumanoid43->setSegments(*HAnimSegment1299);

CHAnimSegment* HAnimSegment1300 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1300->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment1300);

CHAnimSegment* HAnimSegment1301 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1301->setUSE("hanim_c1");
HAnimHumanoid43->setSegments(*HAnimSegment1301);

CHAnimSegment* HAnimSegment1302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1302->setUSE("hanim_skull");
HAnimHumanoid43->setSegments(*HAnimSegment1302);

CHAnimSegment* HAnimSegment1303 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1303->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1303);

CHAnimSegment* HAnimSegment1304 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1304->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1304);

CHAnimSegment* HAnimSegment1305 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1305->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1305);

CHAnimSegment* HAnimSegment1306 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1306->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1306);

CHAnimSegment* HAnimSegment1307 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1307->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1307);

CHAnimSegment* HAnimSegment1308 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1308->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1308);

CHAnimSegment* HAnimSegment1309 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1309->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1309);

CHAnimSegment* HAnimSegment1310 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1310->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1310);

CHAnimSegment* HAnimSegment1311 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1311->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1311);

CHAnimSegment* HAnimSegment1312 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1312->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1312);

CHAnimSegment* HAnimSegment1313 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1313->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1313);

CHAnimSegment* HAnimSegment1314 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1314->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1314);

CHAnimSegment* HAnimSegment1315 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1315->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1315);

CHAnimSegment* HAnimSegment1316 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1316->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1316);

CHAnimSegment* HAnimSegment1317 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1317->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1317);

CHAnimSegment* HAnimSegment1318 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1318->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1318);

CHAnimSegment* HAnimSegment1319 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1319->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1319);

CHAnimSegment* HAnimSegment1320 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1320->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1320);

CHAnimSegment* HAnimSegment1321 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1321->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1321);

CHAnimSegment* HAnimSegment1322 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1322->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1322);

CHAnimSegment* HAnimSegment1323 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1323->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1323);

CHAnimSegment* HAnimSegment1324 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1324->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1324);

CHAnimSegment* HAnimSegment1325 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1325->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1325);

CHAnimSegment* HAnimSegment1326 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1326->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1326);

CHAnimSegment* HAnimSegment1327 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1327->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1327);

CHAnimSegment* HAnimSegment1328 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1328->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1328);

CHAnimSegment* HAnimSegment1329 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1329->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1329);

CHAnimSegment* HAnimSegment1330 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1330->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1330);

CHAnimSegment* HAnimSegment1331 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1331->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1331);

CHAnimSegment* HAnimSegment1332 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1332->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1332);

CHAnimSegment* HAnimSegment1333 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1333->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1333);

CHAnimSegment* HAnimSegment1334 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1334->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1334);

CHAnimSegment* HAnimSegment1335 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1335->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1335);

CHAnimSegment* HAnimSegment1336 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1336->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1336);

CHAnimSegment* HAnimSegment1337 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1337->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1337);

CHAnimSegment* HAnimSegment1338 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1338->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1338);

CHAnimSegment* HAnimSegment1339 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1339->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1339);

CHAnimSegment* HAnimSegment1340 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1340->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1340);

CHAnimSite* HAnimSite1341 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1341->setUSE("hanim_buttocks_standing_wall_contact_point");
HAnimHumanoid43->setSites(*HAnimSite1341);

CHAnimSite* HAnimSite1342 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1342->setUSE("hanim_crotch");
HAnimHumanoid43->setSites(*HAnimSite1342);

CHAnimSite* HAnimSite1343 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1343->setUSE("hanim_l_asis");
HAnimHumanoid43->setSites(*HAnimSite1343);

CHAnimSite* HAnimSite1344 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1344->setUSE("hanim_l_iliocristale");
HAnimHumanoid43->setSites(*HAnimSite1344);

CHAnimSite* HAnimSite1345 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1345->setUSE("hanim_l_psis");
HAnimHumanoid43->setSites(*HAnimSite1345);

CHAnimSite* HAnimSite1346 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1346->setUSE("hanim_l_trochanterion");
HAnimHumanoid43->setSites(*HAnimSite1346);

CHAnimSite* HAnimSite1347 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1347->setUSE("hanim_r_asis");
HAnimHumanoid43->setSites(*HAnimSite1347);

CHAnimSite* HAnimSite1348 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1348->setUSE("hanim_r_iliocristale");
HAnimHumanoid43->setSites(*HAnimSite1348);

CHAnimSite* HAnimSite1349 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1349->setUSE("hanim_r_psis");
HAnimHumanoid43->setSites(*HAnimSite1349);

CHAnimSite* HAnimSite1350 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1350->setUSE("hanim_r_trochanterion");
HAnimHumanoid43->setSites(*HAnimSite1350);

CHAnimSite* HAnimSite1351 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1351->setUSE("hanim_navel");
HAnimHumanoid43->setSites(*HAnimSite1351);

CHAnimSite* HAnimSite1352 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1352->setUSE("hanim_waist_preferred_anterior");
HAnimHumanoid43->setSites(*HAnimSite1352);

CHAnimSite* HAnimSite1353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1353->setUSE("hanim_waist_preferred_posterior");
HAnimHumanoid43->setSites(*HAnimSite1353);

CHAnimSite* HAnimSite1354 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1354->setUSE("hanim_l_femoral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1354);

CHAnimSite* HAnimSite1355 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1355->setUSE("hanim_l_femoral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1355);

CHAnimSite* HAnimSite1356 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1356->setUSE("hanim_l_knee_crease");
HAnimHumanoid43->setSites(*HAnimSite1356);

CHAnimSite* HAnimSite1357 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1357->setUSE("hanim_l_suprapatella");
HAnimHumanoid43->setSites(*HAnimSite1357);

CHAnimSite* HAnimSite1358 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1358->setUSE("hanim_r_femoral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1358);

CHAnimSite* HAnimSite1359 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1359->setUSE("hanim_r_femoral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1359);

CHAnimSite* HAnimSite1360 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1360->setUSE("hanim_r_knee_crease");
HAnimHumanoid43->setSites(*HAnimSite1360);

CHAnimSite* HAnimSite1361 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1361->setUSE("hanim_r_suprapatella");
HAnimHumanoid43->setSites(*HAnimSite1361);

CHAnimSite* HAnimSite1362 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1362->setUSE("hanim_l_lateral_malleolus");
HAnimHumanoid43->setSites(*HAnimSite1362);

CHAnimSite* HAnimSite1363 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1363->setUSE("hanim_l_medial_malleolus");
HAnimHumanoid43->setSites(*HAnimSite1363);

CHAnimSite* HAnimSite1364 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1364->setUSE("hanim_l_tibiale");
HAnimHumanoid43->setSites(*HAnimSite1364);

CHAnimSite* HAnimSite1365 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1365->setUSE("hanim_l_calcaneus_posterior");
HAnimHumanoid43->setSites(*HAnimSite1365);

CHAnimSite* HAnimSite1366 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1366->setUSE("hanim_l_sphyrion");
HAnimHumanoid43->setSites(*HAnimSite1366);

CHAnimSite* HAnimSite1367 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1367->setUSE("hanim_l_metatarsal_phalanx_1");
HAnimHumanoid43->setSites(*HAnimSite1367);

CHAnimSite* HAnimSite1368 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1368->setUSE("hanim_l_metatarsal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite1368);

CHAnimSite* HAnimSite1369 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1369->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1369);

CHAnimSite* HAnimSite1370 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1370->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1370);

CHAnimSite* HAnimSite1371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1371->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1371);

CHAnimSite* HAnimSite1372 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1372->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1372);

CHAnimSite* HAnimSite1373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1373->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1373);

CHAnimSite* HAnimSite1374 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1374->setUSE("hanim_r_lateral_malleolus");
HAnimHumanoid43->setSites(*HAnimSite1374);

CHAnimSite* HAnimSite1375 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1375->setUSE("hanim_r_medial_malleolus");
HAnimHumanoid43->setSites(*HAnimSite1375);

CHAnimSite* HAnimSite1376 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1376->setUSE("hanim_r_tibiale");
HAnimHumanoid43->setSites(*HAnimSite1376);

CHAnimSite* HAnimSite1377 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1377->setUSE("hanim_r_calcaneus_posterior");
HAnimHumanoid43->setSites(*HAnimSite1377);

CHAnimSite* HAnimSite1378 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1378->setUSE("hanim_r_sphyrion");
HAnimHumanoid43->setSites(*HAnimSite1378);

CHAnimSite* HAnimSite1379 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1379->setUSE("hanim_r_metatarsal_phalanx_1");
HAnimHumanoid43->setSites(*HAnimSite1379);

CHAnimSite* HAnimSite1380 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1380->setUSE("hanim_r_metatarsal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite1380);

CHAnimSite* HAnimSite1381 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1381->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1381);

CHAnimSite* HAnimSite1382 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1382->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1382);

CHAnimSite* HAnimSite1383 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1383->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1383);

CHAnimSite* HAnimSite1384 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1384->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1384);

CHAnimSite* HAnimSite1385 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1385->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1385);

CHAnimSite* HAnimSite1386 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1386->setUSE("hanim_l_rib10");
HAnimHumanoid43->setSites(*HAnimSite1386);

CHAnimSite* HAnimSite1387 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1387->setUSE("hanim_r_rib10");
HAnimHumanoid43->setSites(*HAnimSite1387);

CHAnimSite* HAnimSite1388 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1388->setUSE("hanim_spine_2_middle_back");
HAnimHumanoid43->setSites(*HAnimSite1388);

CHAnimSite* HAnimSite1389 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1389->setUSE("hanim_substernale");
HAnimHumanoid43->setSites(*HAnimSite1389);

CHAnimSite* HAnimSite1390 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1390->setUSE("hanim_l_thelion");
HAnimHumanoid43->setSites(*HAnimSite1390);

CHAnimSite* HAnimSite1391 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1391->setUSE("hanim_r_thelion");
HAnimHumanoid43->setSites(*HAnimSite1391);

CHAnimSite* HAnimSite1392 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1392->setUSE("hanim_l_chest_midsagittal_plane");
HAnimHumanoid43->setSites(*HAnimSite1392);

CHAnimSite* HAnimSite1393 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1393->setUSE("hanim_mesosternale");
HAnimHumanoid43->setSites(*HAnimSite1393);

CHAnimSite* HAnimSite1394 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1394->setUSE("hanim_r_chest_midsagittal_plane");
HAnimHumanoid43->setSites(*HAnimSite1394);

CHAnimSite* HAnimSite1395 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1395->setUSE("hanim_rear_center_midsagittal_plane");
HAnimHumanoid43->setSites(*HAnimSite1395);

CHAnimSite* HAnimSite1396 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1396->setUSE("hanim_spine_1_middle_back");
HAnimHumanoid43->setSites(*HAnimSite1396);

CHAnimSite* HAnimSite1397 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1397->setUSE("hanim_cervicale");
HAnimHumanoid43->setSites(*HAnimSite1397);

CHAnimSite* HAnimSite1398 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1398->setUSE("hanim_suprasternale");
HAnimHumanoid43->setSites(*HAnimSite1398);

CHAnimSite* HAnimSite1399 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1399->setUSE("hanim_l_neck_base");
HAnimHumanoid43->setSites(*HAnimSite1399);

CHAnimSite* HAnimSite1400 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1400->setUSE("hanim_r_neck_base");
HAnimHumanoid43->setSites(*HAnimSite1400);

CHAnimSite* HAnimSite1401 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1401->setUSE("hanim_l_acromion");
HAnimHumanoid43->setSites(*HAnimSite1401);

CHAnimSite* HAnimSite1402 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1402->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1402);

CHAnimSite* HAnimSite1403 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1403->setUSE("hanim_l_axilla_posterior_folds");
HAnimHumanoid43->setSites(*HAnimSite1403);

CHAnimSite* HAnimSite1404 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1404->setUSE("hanim_l_axilla_proximal");
HAnimHumanoid43->setSites(*HAnimSite1404);

CHAnimSite* HAnimSite1405 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1405->setUSE("hanim_l_clavicale");
HAnimHumanoid43->setSites(*HAnimSite1405);

CHAnimSite* HAnimSite1406 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1406->setUSE("hanim_r_acromion");
HAnimHumanoid43->setSites(*HAnimSite1406);

CHAnimSite* HAnimSite1407 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1407->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(*HAnimSite1407);

CHAnimSite* HAnimSite1408 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1408->setUSE("hanim_r_axilla_posterior_folds");
HAnimHumanoid43->setSites(*HAnimSite1408);

CHAnimSite* HAnimSite1409 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1409->setUSE("hanim_r_axilla_proximal");
HAnimHumanoid43->setSites(*HAnimSite1409);

CHAnimSite* HAnimSite1410 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1410->setUSE("hanim_r_clavicale");
HAnimHumanoid43->setSites(*HAnimSite1410);

CHAnimSite* HAnimSite1411 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1411->setUSE("hanim_adams_apple");
HAnimHumanoid43->setSites(*HAnimSite1411);

CHAnimSite* HAnimSite1412 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1412->setUSE("hanim_glabella");
HAnimHumanoid43->setSites(*HAnimSite1412);

CHAnimSite* HAnimSite1413 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1413->setUSE("hanim_l_ectocanthus");
HAnimHumanoid43->setSites(*HAnimSite1413);

CHAnimSite* HAnimSite1414 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1414->setUSE("hanim_l_infraorbitale");
HAnimHumanoid43->setSites(*HAnimSite1414);

CHAnimSite* HAnimSite1415 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1415->setUSE("hanim_l_tragion");
HAnimHumanoid43->setSites(*HAnimSite1415);

CHAnimSite* HAnimSite1416 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1416->setUSE("hanim_nuchale");
HAnimHumanoid43->setSites(*HAnimSite1416);

CHAnimSite* HAnimSite1417 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1417->setUSE("hanim_opisthocranion");
HAnimHumanoid43->setSites(*HAnimSite1417);

CHAnimSite* HAnimSite1418 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1418->setUSE("hanim_r_ectocanthus");
HAnimHumanoid43->setSites(*HAnimSite1418);

CHAnimSite* HAnimSite1419 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1419->setUSE("hanim_r_infraorbitale");
HAnimHumanoid43->setSites(*HAnimSite1419);

CHAnimSite* HAnimSite1420 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1420->setUSE("hanim_r_tragion");
HAnimHumanoid43->setSites(*HAnimSite1420);

CHAnimSite* HAnimSite1421 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1421->setUSE("hanim_sellion");
HAnimHumanoid43->setSites(*HAnimSite1421);

CHAnimSite* HAnimSite1422 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1422->setUSE("hanim_skull_vertex");
HAnimHumanoid43->setSites(*HAnimSite1422);

CHAnimSite* HAnimSite1423 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1423->setUSE("hanim_l_gonion");
HAnimHumanoid43->setSites(*HAnimSite1423);

CHAnimSite* HAnimSite1424 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1424->setUSE("hanim_menton");
HAnimHumanoid43->setSites(*HAnimSite1424);

CHAnimSite* HAnimSite1425 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1425->setUSE("hanim_r_gonion");
HAnimHumanoid43->setSites(*HAnimSite1425);

CHAnimSite* HAnimSite1426 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1426->setUSE("hanim_supramenton");
HAnimHumanoid43->setSites(*HAnimSite1426);

CHAnimSite* HAnimSite1427 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1427->setUSE("hanim_l_bideltoid");
HAnimHumanoid43->setSites(*HAnimSite1427);

CHAnimSite* HAnimSite1428 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1428->setUSE("hanim_l_humeral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1428);

CHAnimSite* HAnimSite1429 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1429->setUSE("hanim_l_humeral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1429);

CHAnimSite* HAnimSite1430 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1430->setUSE("hanim_l_olecranon");
HAnimHumanoid43->setSites(*HAnimSite1430);

CHAnimSite* HAnimSite1431 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1431->setUSE("hanim_l_radial_styloid");
HAnimHumanoid43->setSites(*HAnimSite1431);

CHAnimSite* HAnimSite1432 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1432->setUSE("hanim_l_radiale");
HAnimHumanoid43->setSites(*HAnimSite1432);

CHAnimSite* HAnimSite1433 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1433->setUSE("hanim_l_ulnar_styloid");
HAnimHumanoid43->setSites(*HAnimSite1433);

CHAnimSite* HAnimSite1434 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1434->setUSE("hanim_l_metacarpal_phalanx_2");
HAnimHumanoid43->setSites(*HAnimSite1434);

CHAnimSite* HAnimSite1435 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1435->setUSE("hanim_l_metacarpal_phalanx_3");
HAnimHumanoid43->setSites(*HAnimSite1435);

CHAnimSite* HAnimSite1436 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1436->setUSE("hanim_l_metacarpal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite1436);

CHAnimSite* HAnimSite1437 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1437->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1437);

CHAnimSite* HAnimSite1438 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1438->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1438);

CHAnimSite* HAnimSite1439 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1439->setUSE("hanim_l_dactylion");
HAnimHumanoid43->setSites(*HAnimSite1439);

CHAnimSite* HAnimSite1440 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1440->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1440);

CHAnimSite* HAnimSite1441 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1441->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1441);

CHAnimSite* HAnimSite1442 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1442->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1442);

CHAnimSite* HAnimSite1443 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1443->setUSE("hanim_r_bideltoid");
HAnimHumanoid43->setSites(*HAnimSite1443);

CHAnimSite* HAnimSite1444 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1444->setUSE("hanim_r_humeral_lateral_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1444);

CHAnimSite* HAnimSite1445 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1445->setUSE("hanim_r_humeral_medial_epicondyles");
HAnimHumanoid43->setSites(*HAnimSite1445);

CHAnimSite* HAnimSite1446 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1446->setUSE("hanim_r_olecranon");
HAnimHumanoid43->setSites(*HAnimSite1446);

CHAnimSite* HAnimSite1447 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1447->setUSE("hanim_r_radial_styloid");
HAnimHumanoid43->setSites(*HAnimSite1447);

CHAnimSite* HAnimSite1448 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1448->setUSE("hanim_r_radiale");
HAnimHumanoid43->setSites(*HAnimSite1448);

CHAnimSite* HAnimSite1449 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1449->setUSE("hanim_r_ulnar_styloid");
HAnimHumanoid43->setSites(*HAnimSite1449);

CHAnimSite* HAnimSite1450 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1450->setUSE("hanim_r_metacarpal_phalanx_2");
HAnimHumanoid43->setSites(*HAnimSite1450);

CHAnimSite* HAnimSite1451 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1451->setUSE("hanim_r_metacarpal_phalanx_3");
HAnimHumanoid43->setSites(*HAnimSite1451);

CHAnimSite* HAnimSite1452 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1452->setUSE("hanim_r_metacarpal_phalanx_5");
HAnimHumanoid43->setSites(*HAnimSite1452);

CHAnimSite* HAnimSite1453 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1453->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(*HAnimSite1453);

CHAnimSite* HAnimSite1454 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1454->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(*HAnimSite1454);

CHAnimSite* HAnimSite1455 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1455->setUSE("hanim_r_dactylion");
HAnimHumanoid43->setSites(*HAnimSite1455);

CHAnimSite* HAnimSite1456 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1456->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(*HAnimSite1456);

CHAnimSite* HAnimSite1457 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1457->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(*HAnimSite1457);

CHAnimSite* HAnimSite1458 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1458->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(*HAnimSite1458);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
