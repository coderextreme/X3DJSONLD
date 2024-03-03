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
meta3->setContent("StandardHumanoid.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoid.x3d");
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

CShape* Shape61 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet62 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet62->setVertexCount(new int[1]{2});
CCoordinate* Coordinate63 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate63->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet62->setCoord(*Coordinate63);

//from humanoid_root to vl5 vertices 2
CColorRGBA* ColorRGBA64 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA64->setUSE("HAnimSegmentLineColorRGBA");
LineSet62->setColor(*ColorRGBA64);

Shape61->setGeometry(LineSet62);

HAnimSegment53->addChildren(*Shape61);

HAnimJoint52->addChildren(*HAnimSegment53);

CHAnimJoint* HAnimJoint65 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint65->setName("sacroiliac");
HAnimJoint65->setDEF("hanim_sacroiliac");
HAnimJoint65->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint65->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint65->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment66 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment66->setName("pelvis");
HAnimSegment66->setDEF("hanim_pelvis");
CTransform* Transform67 = (CTransform *)(m_pScene.createNode("Transform"));
Transform67->setTranslation(new float[3]{0,0.9149,0.0016});
CTransform* Transform68 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape69 = (CShape *)(m_pScene.createNode("Shape"));
Shape69->setUSE("HAnimJointShape");
Transform68->addChild(*Shape69);

Transform67->addChildren(*Transform68);

HAnimSegment66->addChildren(*Transform67);

CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet71 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet71->setVertexCount(new int[1]{2});
CCoordinate* Coordinate72 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate72->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet71->setCoord(*Coordinate72);

//from sacroiliac to l_hip vertices 2
CColorRGBA* ColorRGBA73 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA73->setUSE("HAnimSegmentLineColorRGBA");
LineSet71->setColor(*ColorRGBA73);

Shape70->setGeometry(LineSet71);

HAnimSegment66->addChildren(*Shape70);

CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet75 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet75->setVertexCount(new int[1]{2});
CCoordinate* Coordinate76 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate76->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029});
LineSet75->setCoord(*Coordinate76);

//from sacroiliac to r_hip vertices 2
CColorRGBA* ColorRGBA77 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA77->setUSE("HAnimSegmentLineColorRGBA");
LineSet75->setColor(*ColorRGBA77);

Shape74->setGeometry(LineSet75);

HAnimSegment66->addChildren(*Shape74);

HAnimJoint65->addChildren(*HAnimSegment66);

CHAnimJoint* HAnimJoint78 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint78->setName("l_hip");
HAnimJoint78->setDEF("hanim_l_hip");
HAnimJoint78->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint78->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint78->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment79 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment79->setName("l_thigh");
HAnimSegment79->setDEF("hanim_l_thigh");
CTransform* Transform80 = (CTransform *)(m_pScene.createNode("Transform"));
Transform80->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CTransform* Transform81 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape82 = (CShape *)(m_pScene.createNode("Shape"));
Shape82->setUSE("HAnimJointShape");
Transform81->addChild(*Shape82);

Transform80->addChildren(*Transform81);

HAnimSegment79->addChildren(*Transform80);

CShape* Shape83 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet84 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet84->setVertexCount(new int[1]{2});
CCoordinate* Coordinate85 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate85->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet84->setCoord(*Coordinate85);

//from l_hip to l_knee vertices 2
CColorRGBA* ColorRGBA86 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA86->setUSE("HAnimSegmentLineColorRGBA");
LineSet84->setColor(*ColorRGBA86);

Shape83->setGeometry(LineSet84);

HAnimSegment79->addChildren(*Shape83);

HAnimJoint78->addChildren(*HAnimSegment79);

CHAnimJoint* HAnimJoint87 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint87->setName("l_knee");
HAnimJoint87->setDEF("hanim_l_knee");
HAnimJoint87->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint87->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint87->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment88 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment88->setName("l_calf");
HAnimSegment88->setDEF("hanim_l_calf");
CTransform* Transform89 = (CTransform *)(m_pScene.createNode("Transform"));
Transform89->setTranslation(new float[3]{0.104,0.4867,0.0308});
CTransform* Transform90 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape91 = (CShape *)(m_pScene.createNode("Shape"));
Shape91->setUSE("HAnimJointShape");
Transform90->addChild(*Shape91);

Transform89->addChildren(*Transform90);

HAnimSegment88->addChildren(*Transform89);

CShape* Shape92 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet93 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet93->setVertexCount(new int[1]{2});
CCoordinate* Coordinate94 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate94->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet93->setCoord(*Coordinate94);

//from l_knee to l_talocrural vertices 2
CColorRGBA* ColorRGBA95 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA95->setUSE("HAnimSegmentLineColorRGBA");
LineSet93->setColor(*ColorRGBA95);

Shape92->setGeometry(LineSet93);

HAnimSegment88->addChildren(*Shape92);

HAnimJoint87->addChildren(*HAnimSegment88);

CHAnimJoint* HAnimJoint96 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint96->setName("l_talocrural");
HAnimJoint96->setDEF("hanim_l_talocrural");
HAnimJoint96->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint96->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint96->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment97 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment97->setName("l_talus");
HAnimSegment97->setDEF("hanim_l_talus");
CTransform* Transform98 = (CTransform *)(m_pScene.createNode("Transform"));
Transform98->setScale(new float[3]{0.15,0.15,0.15});
Transform98->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform98->setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
CTransform* Transform99 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform left foot
CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
Shape100->setUSE("HAnimJointShape");
Transform99->addChild(*Shape100);

Transform98->addChildren(*Transform99);

HAnimSegment97->addChildren(*Transform98);

CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet102 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet102->setVertexCount(new int[1]{2});
CCoordinate* Coordinate103 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate103->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097});
LineSet102->setCoord(*Coordinate103);

//from l_talocrural to l_talocalcaneonavicular vertices 2
CColorRGBA* ColorRGBA104 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA104->setUSE("HAnimSegmentLineColorRGBA");
LineSet102->setColor(*ColorRGBA104);

Shape101->setGeometry(LineSet102);

HAnimSegment97->addChildren(*Shape101);

CShape* Shape105 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet106 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet106->setVertexCount(new int[1]{2});
CCoordinate* Coordinate107 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate107->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278});
LineSet106->setCoord(*Coordinate107);

//from l_talocrural to l_calcaneocuboid vertices 2
CColorRGBA* ColorRGBA108 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA108->setUSE("HAnimSegmentLineColorRGBA");
LineSet106->setColor(*ColorRGBA108);

Shape105->setGeometry(LineSet106);

HAnimSegment97->addChildren(*Shape105);

HAnimJoint96->addChildren(*HAnimSegment97);

CHAnimJoint* HAnimJoint109 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint109->setName("l_talocalcaneonavicular");
HAnimJoint109->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint109->setCenter(new float[3]{0.0781,0.0283,-0.097});
HAnimJoint109->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint109->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment110 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment110->setName("l_navicular");
HAnimSegment110->setDEF("hanim_l_navicular");
CTransform* Transform111 = (CTransform *)(m_pScene.createNode("Transform"));
Transform111->setTranslation(new float[3]{0.0781,0.0283,-0.097});
CTransform* Transform112 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape113 = (CShape *)(m_pScene.createNode("Shape"));
Shape113->setUSE("HAnimJointShape");
Transform112->addChild(*Shape113);

Transform111->addChildren(*Transform112);

HAnimSegment110->addChildren(*Transform111);

CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet115 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet115->setVertexCount(new int[1]{2});
CCoordinate* Coordinate116 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate116->setPoint(new float[6]{0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835});
LineSet115->setCoord(*Coordinate116);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
CColorRGBA* ColorRGBA117 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA117->setUSE("HAnimSegmentLineColorRGBA");
LineSet115->setColor(*ColorRGBA117);

Shape114->setGeometry(LineSet115);

HAnimSegment110->addChildren(*Shape114);

CShape* Shape118 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet119 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet119->setVertexCount(new int[1]{2});
CCoordinate* Coordinate120 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate120->setPoint(new float[6]{0.0781,0.0283,-0.097,0.0812,0.025,-0.0805});
LineSet119->setCoord(*Coordinate120);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
CColorRGBA* ColorRGBA121 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA121->setUSE("HAnimSegmentLineColorRGBA");
LineSet119->setColor(*ColorRGBA121);

Shape118->setGeometry(LineSet119);

HAnimSegment110->addChildren(*Shape118);

CShape* Shape122 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet123 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet123->setVertexCount(new int[1]{2});
CCoordinate* Coordinate124 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate124->setPoint(new float[6]{0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821});
LineSet123->setCoord(*Coordinate124);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
CColorRGBA* ColorRGBA125 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA125->setUSE("HAnimSegmentLineColorRGBA");
LineSet123->setColor(*ColorRGBA125);

Shape122->setGeometry(LineSet123);

HAnimSegment110->addChildren(*Shape122);

HAnimJoint109->addChildren(*HAnimSegment110);

CHAnimJoint* HAnimJoint126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint126->setName("l_cuneonavicular_1");
HAnimJoint126->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint126->setCenter(new float[3]{0.0672,0.0235,-0.0835});
HAnimJoint126->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint126->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment127 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment127->setName("l_cuneiform_1");
HAnimSegment127->setDEF("hanim_l_cuneiform_1");
CTransform* Transform128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform128->setTranslation(new float[3]{0.0672,0.0235,-0.0835});
CTransform* Transform129 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape130 = (CShape *)(m_pScene.createNode("Shape"));
Shape130->setUSE("HAnimJointShape");
Transform129->addChild(*Shape130);

Transform128->addChildren(*Transform129);

HAnimSegment127->addChildren(*Transform128);

CShape* Shape131 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet132 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet132->setVertexCount(new int[1]{2});
CCoordinate* Coordinate133 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate133->setPoint(new float[6]{0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577});
LineSet132->setCoord(*Coordinate133);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
CColorRGBA* ColorRGBA134 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA134->setUSE("HAnimSegmentLineColorRGBA");
LineSet132->setColor(*ColorRGBA134);

Shape131->setGeometry(LineSet132);

HAnimSegment127->addChildren(*Shape131);

HAnimJoint126->addChildren(*HAnimSegment127);

CHAnimJoint* HAnimJoint135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint135->setName("l_tarsometatarsal_1");
HAnimJoint135->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint135->setCenter(new float[3]{0.0644,0.0147,-0.0577});
HAnimJoint135->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint135->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment136 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment136->setName("l_metatarsal_1");
HAnimSegment136->setDEF("hanim_l_metatarsal_1");
CTransform* Transform137 = (CTransform *)(m_pScene.createNode("Transform"));
Transform137->setTranslation(new float[3]{0.0644,0.0147,-0.0577});
CTransform* Transform138 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
Shape139->setUSE("HAnimJointShape");
Transform138->addChild(*Shape139);

Transform137->addChildren(*Transform138);

HAnimSegment136->addChildren(*Transform137);

CShape* Shape140 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet141 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet141->setVertexCount(new int[1]{2});
CCoordinate* Coordinate142 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate142->setPoint(new float[6]{0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083});
LineSet141->setCoord(*Coordinate142);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
CColorRGBA* ColorRGBA143 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA143->setUSE("HAnimSegmentLineColorRGBA");
LineSet141->setColor(*ColorRGBA143);

Shape140->setGeometry(LineSet141);

HAnimSegment136->addChildren(*Shape140);

HAnimJoint135->addChildren(*HAnimSegment136);

CHAnimJoint* HAnimJoint144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint144->setName("l_metatarsophalangeal_1");
HAnimJoint144->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint144->setCenter(new float[3]{0.0619,0.0059,-0.0083});
HAnimJoint144->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint144->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment145 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment145->setName("l_tarsal_proximal_phalanx_1");
HAnimSegment145->setDEF("hanim_l_tarsal_proximal_phalanx_1");
CTransform* Transform146 = (CTransform *)(m_pScene.createNode("Transform"));
Transform146->setTranslation(new float[3]{0.0619,0.0059,-0.0083});
CTransform* Transform147 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape148 = (CShape *)(m_pScene.createNode("Shape"));
Shape148->setUSE("HAnimJointShape");
Transform147->addChild(*Shape148);

Transform146->addChildren(*Transform147);

HAnimSegment145->addChildren(*Transform146);

CShape* Shape149 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet150 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet150->setVertexCount(new int[1]{2});
CCoordinate* Coordinate151 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate151->setPoint(new float[6]{0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083});
LineSet150->setCoord(*Coordinate151);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA152 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA152->setUSE("HAnimSegmentLineColorRGBA");
LineSet150->setColor(*ColorRGBA152);

Shape149->setGeometry(LineSet150);

HAnimSegment145->addChildren(*Shape149);

HAnimJoint144->addChildren(*HAnimSegment145);

CHAnimJoint* HAnimJoint153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint153->setName("l_tarsal_interphalangeal_1");
HAnimJoint153->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint153->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint153->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint144->addChildren(*HAnimJoint153);

HAnimJoint135->addChildren(*HAnimJoint144);

HAnimJoint126->addChildren(*HAnimJoint135);

HAnimJoint109->addChildren(*HAnimJoint126);

CHAnimJoint* HAnimJoint154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint154->setName("l_cuneonavicular_2");
HAnimJoint154->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint154->setCenter(new float[3]{0.0812,0.025,-0.0805});
HAnimJoint154->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint154->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment155 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment155->setName("l_cuneiform_2");
HAnimSegment155->setDEF("hanim_l_cuneiform_2");
CTransform* Transform156 = (CTransform *)(m_pScene.createNode("Transform"));
Transform156->setTranslation(new float[3]{0.0812,0.025,-0.0805});
CTransform* Transform157 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape158 = (CShape *)(m_pScene.createNode("Shape"));
Shape158->setUSE("HAnimJointShape");
Transform157->addChild(*Shape158);

Transform156->addChildren(*Transform157);

HAnimSegment155->addChildren(*Transform156);

CShape* Shape159 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet160 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet160->setVertexCount(new int[1]{2});
CCoordinate* Coordinate161 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate161->setPoint(new float[6]{0.0812,0.025,-0.0805,0.08,0.0175,-0.0608});
LineSet160->setCoord(*Coordinate161);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
CColorRGBA* ColorRGBA162 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA162->setUSE("HAnimSegmentLineColorRGBA");
LineSet160->setColor(*ColorRGBA162);

Shape159->setGeometry(LineSet160);

HAnimSegment155->addChildren(*Shape159);

HAnimJoint154->addChildren(*HAnimSegment155);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setName("l_tarsometatarsal_2");
HAnimJoint163->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint163->setCenter(new float[3]{0.08,0.0175,-0.0608});
HAnimJoint163->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint163->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment164 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment164->setName("l_metatarsal_2");
HAnimSegment164->setDEF("hanim_l_metatarsal_2");
CTransform* Transform165 = (CTransform *)(m_pScene.createNode("Transform"));
Transform165->setTranslation(new float[3]{0.08,0.0175,-0.0608});
CTransform* Transform166 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape167 = (CShape *)(m_pScene.createNode("Shape"));
Shape167->setUSE("HAnimJointShape");
Transform166->addChild(*Shape167);

Transform165->addChildren(*Transform166);

HAnimSegment164->addChildren(*Transform165);

CShape* Shape168 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet169 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet169->setVertexCount(new int[1]{2});
CCoordinate* Coordinate170 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate170->setPoint(new float[6]{0.08,0.0175,-0.0608,0.0824,0.0064,-0.004});
LineSet169->setCoord(*Coordinate170);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA171 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA171->setUSE("HAnimSegmentLineColorRGBA");
LineSet169->setColor(*ColorRGBA171);

Shape168->setGeometry(LineSet169);

HAnimSegment164->addChildren(*Shape168);

HAnimJoint163->addChildren(*HAnimSegment164);

CHAnimJoint* HAnimJoint172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint172->setName("l_metatarsophalangeal_2");
HAnimJoint172->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint172->setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimJoint172->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint172->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment173 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment173->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment173->setDEF("hanim_l_tarsal_proximal_phalanx_2");
CTransform* Transform174 = (CTransform *)(m_pScene.createNode("Transform"));
Transform174->setTranslation(new float[3]{0.0824,0.0064,-0.004});
CTransform* Transform175 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape176 = (CShape *)(m_pScene.createNode("Shape"));
Shape176->setUSE("HAnimJointShape");
Transform175->addChild(*Shape176);

Transform174->addChildren(*Transform175);

HAnimSegment173->addChildren(*Transform174);

CShape* Shape177 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet178 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet178->setVertexCount(new int[1]{2});
CCoordinate* Coordinate179 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate179->setPoint(new float[6]{0.0824,0.0064,-0.004,0.0841,0.0041,0.0121});
LineSet178->setCoord(*Coordinate179);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA180 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA180->setUSE("HAnimSegmentLineColorRGBA");
LineSet178->setColor(*ColorRGBA180);

Shape177->setGeometry(LineSet178);

HAnimSegment173->addChildren(*Shape177);

HAnimJoint172->addChildren(*HAnimSegment173);

CHAnimJoint* HAnimJoint181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint181->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint181->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint181->setCenter(new float[3]{0.0841,0.0041,0.0121});
HAnimJoint181->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint181->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment182 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment182->setName("l_tarsal_middle_phalanx_2");
HAnimSegment182->setDEF("hanim_l_tarsal_middle_phalanx_2");
CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform183->setTranslation(new float[3]{0.0841,0.0041,0.0121});
CTransform* Transform184 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
Shape185->setUSE("HAnimJointShape");
Transform184->addChild(*Shape185);

Transform183->addChildren(*Transform184);

HAnimSegment182->addChildren(*Transform183);

CShape* Shape186 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet187 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet187->setVertexCount(new int[1]{2});
CCoordinate* Coordinate188 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate188->setPoint(new float[6]{0.0841,0.0041,0.0121,0.0841,0.0013,0.0216});
LineSet187->setCoord(*Coordinate188);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA189 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA189->setUSE("HAnimSegmentLineColorRGBA");
LineSet187->setColor(*ColorRGBA189);

Shape186->setGeometry(LineSet187);

HAnimSegment182->addChildren(*Shape186);

HAnimJoint181->addChildren(*HAnimSegment182);

CHAnimJoint* HAnimJoint190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint190->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint190->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint190->setCenter(new float[3]{0.0841,0.0013,0.0216});
HAnimJoint190->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint190->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint181->addChildren(*HAnimJoint190);

HAnimJoint172->addChildren(*HAnimJoint181);

HAnimJoint163->addChildren(*HAnimJoint172);

HAnimJoint154->addChildren(*HAnimJoint163);

HAnimJoint109->addChildren(*HAnimJoint154);

CHAnimJoint* HAnimJoint191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint191->setName("l_cuneonavicular_3");
HAnimJoint191->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint191->setCenter(new float[3]{0.0928,0.0248,-0.0821});
HAnimJoint191->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint191->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment192 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment192->setName("l_cuneiform_3");
HAnimSegment192->setDEF("hanim_l_cuneiform_3");
CTransform* Transform193 = (CTransform *)(m_pScene.createNode("Transform"));
Transform193->setTranslation(new float[3]{0.0928,0.0248,-0.0821});
CTransform* Transform194 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape195 = (CShape *)(m_pScene.createNode("Shape"));
Shape195->setUSE("HAnimJointShape");
Transform194->addChild(*Shape195);

Transform193->addChildren(*Transform194);

HAnimSegment192->addChildren(*Transform193);

CShape* Shape196 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet197 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet197->setVertexCount(new int[1]{2});
CCoordinate* Coordinate198 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate198->setPoint(new float[6]{0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625});
LineSet197->setCoord(*Coordinate198);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
CColorRGBA* ColorRGBA199 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA199->setUSE("HAnimSegmentLineColorRGBA");
LineSet197->setColor(*ColorRGBA199);

Shape196->setGeometry(LineSet197);

HAnimSegment192->addChildren(*Shape196);

HAnimJoint191->addChildren(*HAnimSegment192);

CHAnimJoint* HAnimJoint200 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint200->setName("l_tarsometatarsal_3");
HAnimJoint200->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint200->setCenter(new float[3]{0.0944,0.0175,-0.0625});
HAnimJoint200->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint200->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment201 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment201->setName("l_metatarsal_3");
HAnimSegment201->setDEF("hanim_l_metatarsal_3");
CTransform* Transform202 = (CTransform *)(m_pScene.createNode("Transform"));
Transform202->setTranslation(new float[3]{0.0944,0.0175,-0.0625});
CTransform* Transform203 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape204 = (CShape *)(m_pScene.createNode("Shape"));
Shape204->setUSE("HAnimJointShape");
Transform203->addChild(*Shape204);

Transform202->addChildren(*Transform203);

HAnimSegment201->addChildren(*Transform202);

CShape* Shape205 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet206 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet206->setVertexCount(new int[1]{2});
CCoordinate* Coordinate207 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate207->setPoint(new float[6]{0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065});
LineSet206->setCoord(*Coordinate207);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
CColorRGBA* ColorRGBA208 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA208->setUSE("HAnimSegmentLineColorRGBA");
LineSet206->setColor(*ColorRGBA208);

Shape205->setGeometry(LineSet206);

HAnimSegment201->addChildren(*Shape205);

HAnimJoint200->addChildren(*HAnimSegment201);

CHAnimJoint* HAnimJoint209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint209->setName("l_metatarsophalangeal_3");
HAnimJoint209->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint209->setCenter(new float[3]{0.0963,0.0065,-0.0065});
HAnimJoint209->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint209->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment210 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment210->setName("l_tarsal_proximal_phalanx_3");
HAnimSegment210->setDEF("hanim_l_tarsal_proximal_phalanx_3");
CTransform* Transform211 = (CTransform *)(m_pScene.createNode("Transform"));
Transform211->setTranslation(new float[3]{0.0963,0.0065,-0.0065});
CTransform* Transform212 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape213 = (CShape *)(m_pScene.createNode("Shape"));
Shape213->setUSE("HAnimJointShape");
Transform212->addChild(*Shape213);

Transform211->addChildren(*Transform212);

HAnimSegment210->addChildren(*Transform211);

CShape* Shape214 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet215 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet215->setVertexCount(new int[1]{2});
CCoordinate* Coordinate216 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate216->setPoint(new float[6]{0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086});
LineSet215->setCoord(*Coordinate216);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA217 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA217->setUSE("HAnimSegmentLineColorRGBA");
LineSet215->setColor(*ColorRGBA217);

Shape214->setGeometry(LineSet215);

HAnimSegment210->addChildren(*Shape214);

HAnimJoint209->addChildren(*HAnimSegment210);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint218->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint218->setCenter(new float[3]{0.0987,0.0034,0.0086});
HAnimJoint218->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint218->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment219 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment219->setName("l_tarsal_middle_phalanx_3");
HAnimSegment219->setDEF("hanim_l_tarsal_middle_phalanx_3");
CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
Transform220->setTranslation(new float[3]{0.0987,0.0034,0.0086});
CTransform* Transform221 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
Shape222->setUSE("HAnimJointShape");
Transform221->addChild(*Shape222);

Transform220->addChildren(*Transform221);

HAnimSegment219->addChildren(*Transform220);

CShape* Shape223 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet224 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet224->setVertexCount(new int[1]{2});
CCoordinate* Coordinate225 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate225->setPoint(new float[6]{0.0987,0.0034,0.0086,0.1002,0.0013,0.0178});
LineSet224->setCoord(*Coordinate225);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA226 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA226->setUSE("HAnimSegmentLineColorRGBA");
LineSet224->setColor(*ColorRGBA226);

Shape223->setGeometry(LineSet224);

HAnimSegment219->addChildren(*Shape223);

HAnimJoint218->addChildren(*HAnimSegment219);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint227->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint227->setCenter(new float[3]{0.1002,0.0013,0.0178});
HAnimJoint227->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint227->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint218->addChildren(*HAnimJoint227);

HAnimJoint209->addChildren(*HAnimJoint218);

HAnimJoint200->addChildren(*HAnimJoint209);

HAnimJoint191->addChildren(*HAnimJoint200);

HAnimJoint109->addChildren(*HAnimJoint191);

HAnimJoint96->addChildren(*HAnimJoint109);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setName("l_calcaneocuboid");
HAnimJoint228->setDEF("hanim_l_calcaneocuboid");
HAnimJoint228->setCenter(new float[3]{0.0889,0.0494,-0.1278});
HAnimJoint228->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint228->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment229 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment229->setName("l_calcaneus");
HAnimSegment229->setDEF("hanim_l_calcaneus");
CTransform* Transform230 = (CTransform *)(m_pScene.createNode("Transform"));
Transform230->setTranslation(new float[3]{0.0889,0.0494,-0.1278});
CTransform* Transform231 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape232 = (CShape *)(m_pScene.createNode("Shape"));
Shape232->setUSE("HAnimJointShape");
Transform231->addChild(*Shape232);

Transform230->addChildren(*Transform231);

HAnimSegment229->addChildren(*Transform230);

CShape* Shape233 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet234 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet234->setVertexCount(new int[1]{2});
CCoordinate* Coordinate235 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate235->setPoint(new float[6]{0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998});
LineSet234->setCoord(*Coordinate235);

//from l_calcaneocuboid to l_transversetarsal vertices 2
CColorRGBA* ColorRGBA236 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA236->setUSE("HAnimSegmentLineColorRGBA");
LineSet234->setColor(*ColorRGBA236);

Shape233->setGeometry(LineSet234);

HAnimSegment229->addChildren(*Shape233);

HAnimJoint228->addChildren(*HAnimSegment229);

CHAnimJoint* HAnimJoint237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint237->setName("l_transversetarsal");
HAnimJoint237->setDEF("hanim_l_transversetarsal");
HAnimJoint237->setCenter(new float[3]{0.1105,0.0267,-0.0998});
HAnimJoint237->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint237->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment238 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment238->setName("l_cuboid");
HAnimSegment238->setDEF("hanim_l_cuboid");
CTransform* Transform239 = (CTransform *)(m_pScene.createNode("Transform"));
Transform239->setTranslation(new float[3]{0.1105,0.0267,-0.0998});
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
Coordinate244->setPoint(new float[6]{0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634});
LineSet243->setCoord(*Coordinate244);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
CColorRGBA* ColorRGBA245 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA245->setUSE("HAnimSegmentLineColorRGBA");
LineSet243->setColor(*ColorRGBA245);

Shape242->setGeometry(LineSet243);

HAnimSegment238->addChildren(*Shape242);

CShape* Shape246 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet247 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet247->setVertexCount(new int[1]{2});
CCoordinate* Coordinate248 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate248->setPoint(new float[6]{0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671});
LineSet247->setCoord(*Coordinate248);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
CColorRGBA* ColorRGBA249 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA249->setUSE("HAnimSegmentLineColorRGBA");
LineSet247->setColor(*ColorRGBA249);

Shape246->setGeometry(LineSet247);

HAnimSegment238->addChildren(*Shape246);

HAnimJoint237->addChildren(*HAnimSegment238);

CHAnimJoint* HAnimJoint250 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint250->setName("l_tarsometatarsal_4");
HAnimJoint250->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint250->setCenter(new float[3]{0.1063,0.016,-0.0634});
HAnimJoint250->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint250->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment251 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment251->setName("l_metatarsal_4");
HAnimSegment251->setDEF("hanim_l_metatarsal_4");
CTransform* Transform252 = (CTransform *)(m_pScene.createNode("Transform"));
Transform252->setTranslation(new float[3]{0.1063,0.016,-0.0634});
CTransform* Transform253 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape254 = (CShape *)(m_pScene.createNode("Shape"));
Shape254->setUSE("HAnimJointShape");
Transform253->addChild(*Shape254);

Transform252->addChildren(*Transform253);

HAnimSegment251->addChildren(*Transform252);

CShape* Shape255 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet256 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet256->setVertexCount(new int[1]{2});
CCoordinate* Coordinate257 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate257->setPoint(new float[6]{0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107});
LineSet256->setCoord(*Coordinate257);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
CColorRGBA* ColorRGBA258 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA258->setUSE("HAnimSegmentLineColorRGBA");
LineSet256->setColor(*ColorRGBA258);

Shape255->setGeometry(LineSet256);

HAnimSegment251->addChildren(*Shape255);

HAnimJoint250->addChildren(*HAnimSegment251);

CHAnimJoint* HAnimJoint259 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint259->setName("l_metatarsophalangeal_4");
HAnimJoint259->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint259->setCenter(new float[3]{0.1097,0.0058,-0.0107});
HAnimJoint259->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint259->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment260 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment260->setName("l_tarsal_proximal_phalanx_4");
HAnimSegment260->setDEF("hanim_l_tarsal_proximal_phalanx_4");
CTransform* Transform261 = (CTransform *)(m_pScene.createNode("Transform"));
Transform261->setTranslation(new float[3]{0.1097,0.0058,-0.0107});
CTransform* Transform262 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape263 = (CShape *)(m_pScene.createNode("Shape"));
Shape263->setUSE("HAnimJointShape");
Transform262->addChild(*Shape263);

Transform261->addChildren(*Transform262);

HAnimSegment260->addChildren(*Transform261);

CShape* Shape264 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet265 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet265->setVertexCount(new int[1]{2});
CCoordinate* Coordinate266 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate266->setPoint(new float[6]{0.1097,0.0058,-0.0107,0.114,0.0037,0.0044});
LineSet265->setCoord(*Coordinate266);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA267 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA267->setUSE("HAnimSegmentLineColorRGBA");
LineSet265->setColor(*ColorRGBA267);

Shape264->setGeometry(LineSet265);

HAnimSegment260->addChildren(*Shape264);

HAnimJoint259->addChildren(*HAnimSegment260);

CHAnimJoint* HAnimJoint268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint268->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint268->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint268->setCenter(new float[3]{0.114,0.0037,0.0044});
HAnimJoint268->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint268->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment269 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment269->setName("l_tarsal_middle_phalanx_4");
HAnimSegment269->setDEF("hanim_l_tarsal_middle_phalanx_4");
CTransform* Transform270 = (CTransform *)(m_pScene.createNode("Transform"));
Transform270->setTranslation(new float[3]{0.114,0.0037,0.0044});
CTransform* Transform271 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape272 = (CShape *)(m_pScene.createNode("Shape"));
Shape272->setUSE("HAnimJointShape");
Transform271->addChild(*Shape272);

Transform270->addChildren(*Transform271);

HAnimSegment269->addChildren(*Transform270);

CShape* Shape273 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet274 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet274->setVertexCount(new int[1]{2});
CCoordinate* Coordinate275 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate275->setPoint(new float[6]{0.114,0.0037,0.0044,0.1155,0.0008,0.0118});
LineSet274->setCoord(*Coordinate275);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA276 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA276->setUSE("HAnimSegmentLineColorRGBA");
LineSet274->setColor(*ColorRGBA276);

Shape273->setGeometry(LineSet274);

HAnimSegment269->addChildren(*Shape273);

HAnimJoint268->addChildren(*HAnimSegment269);

CHAnimJoint* HAnimJoint277 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint277->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint277->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint277->setCenter(new float[3]{0.1155,0.0008,0.0118});
HAnimJoint277->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint277->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint268->addChildren(*HAnimJoint277);

HAnimJoint259->addChildren(*HAnimJoint268);

HAnimJoint250->addChildren(*HAnimJoint259);

HAnimJoint237->addChildren(*HAnimJoint250);

CHAnimJoint* HAnimJoint278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint278->setName("l_tarsometatarsal_5");
HAnimJoint278->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint278->setCenter(new float[3]{0.1206,0.0124,-0.0671});
HAnimJoint278->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint278->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment279->setName("l_metatarsal_5");
HAnimSegment279->setDEF("hanim_l_metatarsal_5");
CTransform* Transform280 = (CTransform *)(m_pScene.createNode("Transform"));
Transform280->setTranslation(new float[3]{0.1206,0.0124,-0.0671});
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
Coordinate285->setPoint(new float[6]{0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153});
LineSet284->setCoord(*Coordinate285);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
CColorRGBA* ColorRGBA286 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA286->setUSE("HAnimSegmentLineColorRGBA");
LineSet284->setColor(*ColorRGBA286);

Shape283->setGeometry(LineSet284);

HAnimSegment279->addChildren(*Shape283);

HAnimJoint278->addChildren(*HAnimSegment279);

CHAnimJoint* HAnimJoint287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint287->setName("l_metatarsophalangeal_5");
HAnimJoint287->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint287->setCenter(new float[3]{0.1239,0.0051,-0.0153});
HAnimJoint287->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint287->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment288 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment288->setName("l_tarsal_proximal_phalanx_5");
HAnimSegment288->setDEF("hanim_l_tarsal_proximal_phalanx_5");
CTransform* Transform289 = (CTransform *)(m_pScene.createNode("Transform"));
Transform289->setTranslation(new float[3]{0.1239,0.0051,-0.0153});
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
Coordinate294->setPoint(new float[6]{0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077});
LineSet293->setCoord(*Coordinate294);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA295 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA295->setUSE("HAnimSegmentLineColorRGBA");
LineSet293->setColor(*ColorRGBA295);

Shape292->setGeometry(LineSet293);

HAnimSegment288->addChildren(*Shape292);

HAnimJoint287->addChildren(*HAnimSegment288);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint296->setDEF("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimJoint296->setCenter(new float[3]{0.1262,0.0023,-0.0077});
HAnimJoint296->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint296->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment297 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment297->setName("l_tarsal_middle_phalanx_5");
HAnimSegment297->setDEF("hanim_l_tarsal_middle_phalanx_5");
CTransform* Transform298 = (CTransform *)(m_pScene.createNode("Transform"));
Transform298->setTranslation(new float[3]{0.1262,0.0023,-0.0077});
CTransform* Transform299 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape300 = (CShape *)(m_pScene.createNode("Shape"));
Shape300->setUSE("HAnimJointShape");
Transform299->addChild(*Shape300);

Transform298->addChildren(*Transform299);

HAnimSegment297->addChildren(*Transform298);

CShape* Shape301 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet302 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet302->setVertexCount(new int[1]{2});
CCoordinate* Coordinate303 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate303->setPoint(new float[6]{0.1262,0.0023,-0.0077,0.1271,0,0});
LineSet302->setCoord(*Coordinate303);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA304 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA304->setUSE("HAnimSegmentLineColorRGBA");
LineSet302->setColor(*ColorRGBA304);

Shape301->setGeometry(LineSet302);

HAnimSegment297->addChildren(*Shape301);

HAnimJoint296->addChildren(*HAnimSegment297);

CHAnimJoint* HAnimJoint305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint305->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint305->setDEF("hanim_l_tarsal_distal_interphalangeal_5");
HAnimJoint305->setCenter(new float[3]{0.1271,0,0});
HAnimJoint305->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint305->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint296->addChildren(*HAnimJoint305);

HAnimJoint287->addChildren(*HAnimJoint296);

HAnimJoint278->addChildren(*HAnimJoint287);

HAnimJoint237->addChildren(*HAnimJoint278);

HAnimJoint228->addChildren(*HAnimJoint237);

HAnimJoint96->addChildren(*HAnimJoint228);

HAnimJoint87->addChildren(*HAnimJoint96);

HAnimJoint78->addChildren(*HAnimJoint87);

HAnimJoint65->addChildren(*HAnimJoint78);

CHAnimJoint* HAnimJoint306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint306->setName("r_hip");
HAnimJoint306->setDEF("hanim_r_hip");
HAnimJoint306->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint306->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint306->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment307 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment307->setName("r_thigh");
HAnimSegment307->setDEF("hanim_r_thigh");
CTransform* Transform308 = (CTransform *)(m_pScene.createNode("Transform"));
Transform308->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CTransform* Transform309 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape310 = (CShape *)(m_pScene.createNode("Shape"));
Shape310->setUSE("HAnimJointShape");
Transform309->addChild(*Shape310);

Transform308->addChildren(*Transform309);

HAnimSegment307->addChildren(*Transform308);

CShape* Shape311 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet312 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet312->setVertexCount(new int[1]{2});
CCoordinate* Coordinate313 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate313->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet312->setCoord(*Coordinate313);

//from r_hip to r_knee vertices 2
CColorRGBA* ColorRGBA314 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA314->setUSE("HAnimSegmentLineColorRGBA");
LineSet312->setColor(*ColorRGBA314);

Shape311->setGeometry(LineSet312);

HAnimSegment307->addChildren(*Shape311);

HAnimJoint306->addChildren(*HAnimSegment307);

CHAnimJoint* HAnimJoint315 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint315->setName("r_knee");
HAnimJoint315->setDEF("hanim_r_knee");
HAnimJoint315->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint315->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint315->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment316 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment316->setName("r_calf");
HAnimSegment316->setDEF("hanim_r_calf");
CTransform* Transform317 = (CTransform *)(m_pScene.createNode("Transform"));
Transform317->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CTransform* Transform318 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
Shape319->setUSE("HAnimJointShape");
Transform318->addChild(*Shape319);

Transform317->addChildren(*Transform318);

HAnimSegment316->addChildren(*Transform317);

CShape* Shape320 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet321 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet321->setVertexCount(new int[1]{2});
CCoordinate* Coordinate322 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate322->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet321->setCoord(*Coordinate322);

//from r_knee to r_talocrural vertices 2
CColorRGBA* ColorRGBA323 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA323->setUSE("HAnimSegmentLineColorRGBA");
LineSet321->setColor(*ColorRGBA323);

Shape320->setGeometry(LineSet321);

HAnimSegment316->addChildren(*Shape320);

HAnimJoint315->addChildren(*HAnimSegment316);

CHAnimJoint* HAnimJoint324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint324->setName("r_talocrural");
HAnimJoint324->setDEF("hanim_r_talocrural");
HAnimJoint324->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint324->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint324->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment325 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment325->setName("r_talus");
HAnimSegment325->setDEF("hanim_r_talus");
CTransform* Transform326 = (CTransform *)(m_pScene.createNode("Transform"));
Transform326->setScale(new float[3]{0.15,0.15,0.15});
Transform326->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform326->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
CTransform* Transform327 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform right foot
CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
Shape328->setUSE("HAnimJointShape");
Transform327->addChild(*Shape328);

Transform326->addChildren(*Transform327);

HAnimSegment325->addChildren(*Transform326);

CShape* Shape329 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet330 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet330->setVertexCount(new int[1]{2});
CCoordinate* Coordinate331 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate331->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097});
LineSet330->setCoord(*Coordinate331);

//from r_talocrural to r_talocalcaneonavicular vertices 2
CColorRGBA* ColorRGBA332 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA332->setUSE("HAnimSegmentLineColorRGBA");
LineSet330->setColor(*ColorRGBA332);

Shape329->setGeometry(LineSet330);

HAnimSegment325->addChildren(*Shape329);

CShape* Shape333 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet334 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet334->setVertexCount(new int[1]{2});
CCoordinate* Coordinate335 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate335->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278});
LineSet334->setCoord(*Coordinate335);

//from r_talocrural to r_calcaneocuboid vertices 2
CColorRGBA* ColorRGBA336 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA336->setUSE("HAnimSegmentLineColorRGBA");
LineSet334->setColor(*ColorRGBA336);

Shape333->setGeometry(LineSet334);

HAnimSegment325->addChildren(*Shape333);

HAnimJoint324->addChildren(*HAnimSegment325);

CHAnimJoint* HAnimJoint337 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint337->setName("r_talocalcaneonavicular");
HAnimJoint337->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint337->setCenter(new float[3]{-0.0781,0.0283,-0.097});
HAnimJoint337->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint337->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment338 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment338->setName("r_navicular");
HAnimSegment338->setDEF("hanim_r_navicular");
CTransform* Transform339 = (CTransform *)(m_pScene.createNode("Transform"));
Transform339->setTranslation(new float[3]{-0.0781,0.0283,-0.097});
CTransform* Transform340 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape341 = (CShape *)(m_pScene.createNode("Shape"));
Shape341->setUSE("HAnimJointShape");
Transform340->addChild(*Shape341);

Transform339->addChildren(*Transform340);

HAnimSegment338->addChildren(*Transform339);

CShape* Shape342 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet343 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet343->setVertexCount(new int[1]{2});
CCoordinate* Coordinate344 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate344->setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835});
LineSet343->setCoord(*Coordinate344);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
CColorRGBA* ColorRGBA345 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA345->setUSE("HAnimSegmentLineColorRGBA");
LineSet343->setColor(*ColorRGBA345);

Shape342->setGeometry(LineSet343);

HAnimSegment338->addChildren(*Shape342);

CShape* Shape346 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet347 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet347->setVertexCount(new int[1]{2});
CCoordinate* Coordinate348 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate348->setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805});
LineSet347->setCoord(*Coordinate348);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
CColorRGBA* ColorRGBA349 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA349->setUSE("HAnimSegmentLineColorRGBA");
LineSet347->setColor(*ColorRGBA349);

Shape346->setGeometry(LineSet347);

HAnimSegment338->addChildren(*Shape346);

CShape* Shape350 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet351 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet351->setVertexCount(new int[1]{2});
CCoordinate* Coordinate352 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate352->setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821});
LineSet351->setCoord(*Coordinate352);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
CColorRGBA* ColorRGBA353 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA353->setUSE("HAnimSegmentLineColorRGBA");
LineSet351->setColor(*ColorRGBA353);

Shape350->setGeometry(LineSet351);

HAnimSegment338->addChildren(*Shape350);

HAnimJoint337->addChildren(*HAnimSegment338);

CHAnimJoint* HAnimJoint354 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint354->setName("r_cuneonavicular_1");
HAnimJoint354->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint354->setCenter(new float[3]{-0.0672,0.0235,-0.0835});
HAnimJoint354->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint354->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment355 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment355->setName("r_cuneiform_1");
HAnimSegment355->setDEF("hanim_r_cuneiform_1");
CTransform* Transform356 = (CTransform *)(m_pScene.createNode("Transform"));
Transform356->setTranslation(new float[3]{-0.0672,0.0235,-0.0835});
CTransform* Transform357 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape358 = (CShape *)(m_pScene.createNode("Shape"));
Shape358->setUSE("HAnimJointShape");
Transform357->addChild(*Shape358);

Transform356->addChildren(*Transform357);

HAnimSegment355->addChildren(*Transform356);

CShape* Shape359 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet360 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet360->setVertexCount(new int[1]{2});
CCoordinate* Coordinate361 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate361->setPoint(new float[6]{-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577});
LineSet360->setCoord(*Coordinate361);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
CColorRGBA* ColorRGBA362 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA362->setUSE("HAnimSegmentLineColorRGBA");
LineSet360->setColor(*ColorRGBA362);

Shape359->setGeometry(LineSet360);

HAnimSegment355->addChildren(*Shape359);

HAnimJoint354->addChildren(*HAnimSegment355);

CHAnimJoint* HAnimJoint363 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint363->setName("r_tarsometatarsal_1");
HAnimJoint363->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint363->setCenter(new float[3]{-0.0644,0.0147,-0.0577});
HAnimJoint363->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint363->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment364 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment364->setName("r_metatarsal_1");
HAnimSegment364->setDEF("hanim_r_metatarsal_1");
CTransform* Transform365 = (CTransform *)(m_pScene.createNode("Transform"));
Transform365->setTranslation(new float[3]{-0.0644,0.0147,-0.0577});
CTransform* Transform366 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape367 = (CShape *)(m_pScene.createNode("Shape"));
Shape367->setUSE("HAnimJointShape");
Transform366->addChild(*Shape367);

Transform365->addChildren(*Transform366);

HAnimSegment364->addChildren(*Transform365);

CShape* Shape368 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet369 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet369->setVertexCount(new int[1]{2});
CCoordinate* Coordinate370 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate370->setPoint(new float[6]{-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083});
LineSet369->setCoord(*Coordinate370);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
CColorRGBA* ColorRGBA371 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA371->setUSE("HAnimSegmentLineColorRGBA");
LineSet369->setColor(*ColorRGBA371);

Shape368->setGeometry(LineSet369);

HAnimSegment364->addChildren(*Shape368);

HAnimJoint363->addChildren(*HAnimSegment364);

CHAnimJoint* HAnimJoint372 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint372->setName("r_metatarsophalangeal_1");
HAnimJoint372->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint372->setCenter(new float[3]{-0.0619,0.0059,-0.0083});
HAnimJoint372->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint372->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment373 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment373->setName("r_tarsal_proximal_phalanx_1");
HAnimSegment373->setDEF("hanim_r_tarsal_proximal_phalanx_1");
CTransform* Transform374 = (CTransform *)(m_pScene.createNode("Transform"));
Transform374->setTranslation(new float[3]{-0.0619,0.0059,-0.0083});
CTransform* Transform375 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape376 = (CShape *)(m_pScene.createNode("Shape"));
Shape376->setUSE("HAnimJointShape");
Transform375->addChild(*Shape376);

Transform374->addChildren(*Transform375);

HAnimSegment373->addChildren(*Transform374);

CShape* Shape377 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet378 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet378->setVertexCount(new int[1]{2});
CCoordinate* Coordinate379 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate379->setPoint(new float[6]{-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083});
LineSet378->setCoord(*Coordinate379);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA380 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA380->setUSE("HAnimSegmentLineColorRGBA");
LineSet378->setColor(*ColorRGBA380);

Shape377->setGeometry(LineSet378);

HAnimSegment373->addChildren(*Shape377);

HAnimJoint372->addChildren(*HAnimSegment373);

CHAnimJoint* HAnimJoint381 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint381->setName("r_tarsal_interphalangeal_1");
HAnimJoint381->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint381->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint381->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint372->addChildren(*HAnimJoint381);

HAnimJoint363->addChildren(*HAnimJoint372);

HAnimJoint354->addChildren(*HAnimJoint363);

HAnimJoint337->addChildren(*HAnimJoint354);

CHAnimJoint* HAnimJoint382 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint382->setName("r_cuneonavicular_2");
HAnimJoint382->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint382->setCenter(new float[3]{-0.0812,0.025,-0.0805});
HAnimJoint382->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint382->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment383 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment383->setName("r_cuneiform_2");
HAnimSegment383->setDEF("hanim_r_cuneiform_2");
CTransform* Transform384 = (CTransform *)(m_pScene.createNode("Transform"));
Transform384->setTranslation(new float[3]{-0.0812,0.025,-0.0805});
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
Coordinate389->setPoint(new float[6]{-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608});
LineSet388->setCoord(*Coordinate389);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
CColorRGBA* ColorRGBA390 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA390->setUSE("HAnimSegmentLineColorRGBA");
LineSet388->setColor(*ColorRGBA390);

Shape387->setGeometry(LineSet388);

HAnimSegment383->addChildren(*Shape387);

HAnimJoint382->addChildren(*HAnimSegment383);

CHAnimJoint* HAnimJoint391 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint391->setName("r_tarsometatarsal_2");
HAnimJoint391->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint391->setCenter(new float[3]{-0.08,0.0175,-0.0608});
HAnimJoint391->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint391->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment392 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment392->setName("r_metatarsal_2");
HAnimSegment392->setDEF("hanim_r_metatarsal_2");
CTransform* Transform393 = (CTransform *)(m_pScene.createNode("Transform"));
Transform393->setTranslation(new float[3]{-0.08,0.0175,-0.0608});
CTransform* Transform394 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape395 = (CShape *)(m_pScene.createNode("Shape"));
Shape395->setUSE("HAnimJointShape");
Transform394->addChild(*Shape395);

Transform393->addChildren(*Transform394);

HAnimSegment392->addChildren(*Transform393);

CShape* Shape396 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet397 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet397->setVertexCount(new int[1]{2});
CCoordinate* Coordinate398 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate398->setPoint(new float[6]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004});
LineSet397->setCoord(*Coordinate398);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
CColorRGBA* ColorRGBA399 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA399->setUSE("HAnimSegmentLineColorRGBA");
LineSet397->setColor(*ColorRGBA399);

Shape396->setGeometry(LineSet397);

HAnimSegment392->addChildren(*Shape396);

HAnimJoint391->addChildren(*HAnimSegment392);

CHAnimJoint* HAnimJoint400 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint400->setName("r_metatarsophalangeal_2");
HAnimJoint400->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint400->setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimJoint400->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint400->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment401 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment401->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment401->setDEF("hanim_r_tarsal_proximal_phalanx_2");
CTransform* Transform402 = (CTransform *)(m_pScene.createNode("Transform"));
Transform402->setTranslation(new float[3]{-0.0823,0.0064,-0.004});
CTransform* Transform403 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape404 = (CShape *)(m_pScene.createNode("Shape"));
Shape404->setUSE("HAnimJointShape");
Transform403->addChild(*Shape404);

Transform402->addChildren(*Transform403);

HAnimSegment401->addChildren(*Transform402);

CShape* Shape405 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet406 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet406->setVertexCount(new int[1]{2});
CCoordinate* Coordinate407 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate407->setPoint(new float[6]{-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121});
LineSet406->setCoord(*Coordinate407);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA408 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA408->setUSE("HAnimSegmentLineColorRGBA");
LineSet406->setColor(*ColorRGBA408);

Shape405->setGeometry(LineSet406);

HAnimSegment401->addChildren(*Shape405);

HAnimJoint400->addChildren(*HAnimSegment401);

CHAnimJoint* HAnimJoint409 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint409->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint409->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint409->setCenter(new float[3]{-0.0841,0.0041,0.0121});
HAnimJoint409->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint409->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment410 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment410->setName("r_tarsal_middle_phalanx_2");
HAnimSegment410->setDEF("hanim_r_tarsal_middle_phalanx_2");
CTransform* Transform411 = (CTransform *)(m_pScene.createNode("Transform"));
Transform411->setTranslation(new float[3]{-0.0841,0.0041,0.0121});
CTransform* Transform412 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape413 = (CShape *)(m_pScene.createNode("Shape"));
Shape413->setUSE("HAnimJointShape");
Transform412->addChild(*Shape413);

Transform411->addChildren(*Transform412);

HAnimSegment410->addChildren(*Transform411);

CShape* Shape414 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet415 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet415->setVertexCount(new int[1]{2});
CCoordinate* Coordinate416 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate416->setPoint(new float[6]{-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216});
LineSet415->setCoord(*Coordinate416);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA417 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA417->setUSE("HAnimSegmentLineColorRGBA");
LineSet415->setColor(*ColorRGBA417);

Shape414->setGeometry(LineSet415);

HAnimSegment410->addChildren(*Shape414);

HAnimJoint409->addChildren(*HAnimSegment410);

CHAnimJoint* HAnimJoint418 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint418->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint418->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint418->setCenter(new float[3]{-0.0841,0.0013,0.0216});
HAnimJoint418->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint418->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint409->addChildren(*HAnimJoint418);

HAnimJoint400->addChildren(*HAnimJoint409);

HAnimJoint391->addChildren(*HAnimJoint400);

HAnimJoint382->addChildren(*HAnimJoint391);

HAnimJoint337->addChildren(*HAnimJoint382);

CHAnimJoint* HAnimJoint419 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint419->setName("r_cuneonavicular_3");
HAnimJoint419->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint419->setCenter(new float[3]{-0.0928,0.0248,-0.0821});
HAnimJoint419->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint419->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment420 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment420->setName("r_cuneiform_3");
HAnimSegment420->setDEF("hanim_r_cuneiform_3");
CTransform* Transform421 = (CTransform *)(m_pScene.createNode("Transform"));
Transform421->setTranslation(new float[3]{-0.0928,0.0248,-0.0821});
CTransform* Transform422 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape423 = (CShape *)(m_pScene.createNode("Shape"));
Shape423->setUSE("HAnimJointShape");
Transform422->addChild(*Shape423);

Transform421->addChildren(*Transform422);

HAnimSegment420->addChildren(*Transform421);

CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet425 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet425->setVertexCount(new int[1]{2});
CCoordinate* Coordinate426 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate426->setPoint(new float[6]{-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625});
LineSet425->setCoord(*Coordinate426);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
CColorRGBA* ColorRGBA427 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA427->setUSE("HAnimSegmentLineColorRGBA");
LineSet425->setColor(*ColorRGBA427);

Shape424->setGeometry(LineSet425);

HAnimSegment420->addChildren(*Shape424);

HAnimJoint419->addChildren(*HAnimSegment420);

CHAnimJoint* HAnimJoint428 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint428->setName("r_tarsometatarsal_3");
HAnimJoint428->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint428->setCenter(new float[3]{-0.0944,0.0175,-0.0625});
HAnimJoint428->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint428->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment429 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment429->setName("r_metatarsal_3");
HAnimSegment429->setDEF("hanim_r_metatarsal_3");
CTransform* Transform430 = (CTransform *)(m_pScene.createNode("Transform"));
Transform430->setTranslation(new float[3]{-0.0944,0.0175,-0.0625});
CTransform* Transform431 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape432 = (CShape *)(m_pScene.createNode("Shape"));
Shape432->setUSE("HAnimJointShape");
Transform431->addChild(*Shape432);

Transform430->addChildren(*Transform431);

HAnimSegment429->addChildren(*Transform430);

CShape* Shape433 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet434 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet434->setVertexCount(new int[1]{2});
CCoordinate* Coordinate435 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate435->setPoint(new float[6]{-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065});
LineSet434->setCoord(*Coordinate435);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
CColorRGBA* ColorRGBA436 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA436->setUSE("HAnimSegmentLineColorRGBA");
LineSet434->setColor(*ColorRGBA436);

Shape433->setGeometry(LineSet434);

HAnimSegment429->addChildren(*Shape433);

HAnimJoint428->addChildren(*HAnimSegment429);

CHAnimJoint* HAnimJoint437 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint437->setName("r_metatarsophalangeal_3");
HAnimJoint437->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint437->setCenter(new float[3]{-0.0963,0.0065,-0.0065});
HAnimJoint437->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint437->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment438 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment438->setName("r_tarsal_proximal_phalanx_3");
HAnimSegment438->setDEF("hanim_r_tarsal_proximal_phalanx_3");
CTransform* Transform439 = (CTransform *)(m_pScene.createNode("Transform"));
Transform439->setTranslation(new float[3]{-0.0963,0.0065,-0.0065});
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
Coordinate444->setPoint(new float[6]{-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086});
LineSet443->setCoord(*Coordinate444);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA445 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA445->setUSE("HAnimSegmentLineColorRGBA");
LineSet443->setColor(*ColorRGBA445);

Shape442->setGeometry(LineSet443);

HAnimSegment438->addChildren(*Shape442);

HAnimJoint437->addChildren(*HAnimSegment438);

CHAnimJoint* HAnimJoint446 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint446->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint446->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint446->setCenter(new float[3]{-0.0987,0.0034,0.0086});
HAnimJoint446->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint446->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment447 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment447->setName("r_tarsal_middle_phalanx_3");
HAnimSegment447->setDEF("hanim_r_tarsal_middle_phalanx_3");
CTransform* Transform448 = (CTransform *)(m_pScene.createNode("Transform"));
Transform448->setTranslation(new float[3]{-0.0987,0.0034,0.0086});
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
Coordinate453->setPoint(new float[6]{-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178});
LineSet452->setCoord(*Coordinate453);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA454 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA454->setUSE("HAnimSegmentLineColorRGBA");
LineSet452->setColor(*ColorRGBA454);

Shape451->setGeometry(LineSet452);

HAnimSegment447->addChildren(*Shape451);

HAnimJoint446->addChildren(*HAnimSegment447);

CHAnimJoint* HAnimJoint455 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint455->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint455->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint455->setCenter(new float[3]{-0.1002,0.0013,0.0178});
HAnimJoint455->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint455->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint446->addChildren(*HAnimJoint455);

HAnimJoint437->addChildren(*HAnimJoint446);

HAnimJoint428->addChildren(*HAnimJoint437);

HAnimJoint419->addChildren(*HAnimJoint428);

HAnimJoint337->addChildren(*HAnimJoint419);

HAnimJoint324->addChildren(*HAnimJoint337);

CHAnimJoint* HAnimJoint456 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint456->setName("r_calcaneocuboid");
HAnimJoint456->setDEF("hanim_r_calcaneocuboid");
HAnimJoint456->setCenter(new float[3]{-0.0889,0.0494,-0.1278});
HAnimJoint456->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint456->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment457 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment457->setName("r_calcaneus");
HAnimSegment457->setDEF("hanim_r_calcaneus");
CTransform* Transform458 = (CTransform *)(m_pScene.createNode("Transform"));
Transform458->setTranslation(new float[3]{-0.0889,0.0494,-0.1278});
CTransform* Transform459 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape460 = (CShape *)(m_pScene.createNode("Shape"));
Shape460->setUSE("HAnimJointShape");
Transform459->addChild(*Shape460);

Transform458->addChildren(*Transform459);

HAnimSegment457->addChildren(*Transform458);

CShape* Shape461 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet462 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet462->setVertexCount(new int[1]{2});
CCoordinate* Coordinate463 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate463->setPoint(new float[6]{-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998});
LineSet462->setCoord(*Coordinate463);

//from r_calcaneocuboid to r_transversetarsal vertices 2
CColorRGBA* ColorRGBA464 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA464->setUSE("HAnimSegmentLineColorRGBA");
LineSet462->setColor(*ColorRGBA464);

Shape461->setGeometry(LineSet462);

HAnimSegment457->addChildren(*Shape461);

HAnimJoint456->addChildren(*HAnimSegment457);

CHAnimJoint* HAnimJoint465 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint465->setName("r_transversetarsal");
HAnimJoint465->setDEF("hanim_r_transversetarsal");
HAnimJoint465->setCenter(new float[3]{-0.1105,0.0267,-0.0998});
HAnimJoint465->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint465->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment466 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment466->setName("r_cuboid");
HAnimSegment466->setDEF("hanim_r_cuboid");
CTransform* Transform467 = (CTransform *)(m_pScene.createNode("Transform"));
Transform467->setTranslation(new float[3]{-0.1105,0.0267,-0.0998});
CTransform* Transform468 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape469 = (CShape *)(m_pScene.createNode("Shape"));
Shape469->setUSE("HAnimJointShape");
Transform468->addChild(*Shape469);

Transform467->addChildren(*Transform468);

HAnimSegment466->addChildren(*Transform467);

CShape* Shape470 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet471 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet471->setVertexCount(new int[1]{2});
CCoordinate* Coordinate472 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate472->setPoint(new float[6]{-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634});
LineSet471->setCoord(*Coordinate472);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
CColorRGBA* ColorRGBA473 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA473->setUSE("HAnimSegmentLineColorRGBA");
LineSet471->setColor(*ColorRGBA473);

Shape470->setGeometry(LineSet471);

HAnimSegment466->addChildren(*Shape470);

CShape* Shape474 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet475 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet475->setVertexCount(new int[1]{2});
CCoordinate* Coordinate476 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate476->setPoint(new float[6]{-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671});
LineSet475->setCoord(*Coordinate476);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
CColorRGBA* ColorRGBA477 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA477->setUSE("HAnimSegmentLineColorRGBA");
LineSet475->setColor(*ColorRGBA477);

Shape474->setGeometry(LineSet475);

HAnimSegment466->addChildren(*Shape474);

HAnimJoint465->addChildren(*HAnimSegment466);

CHAnimJoint* HAnimJoint478 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint478->setName("r_tarsometatarsal_4");
HAnimJoint478->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint478->setCenter(new float[3]{-0.1063,0.016,-0.0634});
HAnimJoint478->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint478->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment479 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment479->setName("r_metatarsal_4");
HAnimSegment479->setDEF("hanim_r_metatarsal_4");
CTransform* Transform480 = (CTransform *)(m_pScene.createNode("Transform"));
Transform480->setTranslation(new float[3]{-0.1063,0.016,-0.0634});
CTransform* Transform481 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape482 = (CShape *)(m_pScene.createNode("Shape"));
Shape482->setUSE("HAnimJointShape");
Transform481->addChild(*Shape482);

Transform480->addChildren(*Transform481);

HAnimSegment479->addChildren(*Transform480);

CShape* Shape483 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet484 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet484->setVertexCount(new int[1]{2});
CCoordinate* Coordinate485 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate485->setPoint(new float[6]{-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107});
LineSet484->setCoord(*Coordinate485);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
CColorRGBA* ColorRGBA486 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA486->setUSE("HAnimSegmentLineColorRGBA");
LineSet484->setColor(*ColorRGBA486);

Shape483->setGeometry(LineSet484);

HAnimSegment479->addChildren(*Shape483);

HAnimJoint478->addChildren(*HAnimSegment479);

CHAnimJoint* HAnimJoint487 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint487->setName("r_metatarsophalangeal_4");
HAnimJoint487->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint487->setCenter(new float[3]{-0.1097,0.0058,-0.0107});
HAnimJoint487->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint487->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment488 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment488->setName("r_tarsal_proximal_phalanx_4");
HAnimSegment488->setDEF("hanim_r_tarsal_proximal_phalanx_4");
CTransform* Transform489 = (CTransform *)(m_pScene.createNode("Transform"));
Transform489->setTranslation(new float[3]{-0.1097,0.0058,-0.0107});
CTransform* Transform490 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape491 = (CShape *)(m_pScene.createNode("Shape"));
Shape491->setUSE("HAnimJointShape");
Transform490->addChild(*Shape491);

Transform489->addChildren(*Transform490);

HAnimSegment488->addChildren(*Transform489);

CShape* Shape492 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet493 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet493->setVertexCount(new int[1]{2});
CCoordinate* Coordinate494 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate494->setPoint(new float[6]{-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044});
LineSet493->setCoord(*Coordinate494);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA495 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA495->setUSE("HAnimSegmentLineColorRGBA");
LineSet493->setColor(*ColorRGBA495);

Shape492->setGeometry(LineSet493);

HAnimSegment488->addChildren(*Shape492);

HAnimJoint487->addChildren(*HAnimSegment488);

CHAnimJoint* HAnimJoint496 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint496->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint496->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint496->setCenter(new float[3]{-0.114,0.0037,0.0044});
HAnimJoint496->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint496->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment497 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment497->setName("r_tarsal_middle_phalanx_4");
HAnimSegment497->setDEF("hanim_r_tarsal_middle_phalanx_4");
CTransform* Transform498 = (CTransform *)(m_pScene.createNode("Transform"));
Transform498->setTranslation(new float[3]{-0.114,0.0037,0.0044});
CTransform* Transform499 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape500 = (CShape *)(m_pScene.createNode("Shape"));
Shape500->setUSE("HAnimJointShape");
Transform499->addChild(*Shape500);

Transform498->addChildren(*Transform499);

HAnimSegment497->addChildren(*Transform498);

CShape* Shape501 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet502 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet502->setVertexCount(new int[1]{2});
CCoordinate* Coordinate503 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate503->setPoint(new float[6]{-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118});
LineSet502->setCoord(*Coordinate503);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA504 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA504->setUSE("HAnimSegmentLineColorRGBA");
LineSet502->setColor(*ColorRGBA504);

Shape501->setGeometry(LineSet502);

HAnimSegment497->addChildren(*Shape501);

HAnimJoint496->addChildren(*HAnimSegment497);

CHAnimJoint* HAnimJoint505 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint505->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint505->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint505->setCenter(new float[3]{-0.1155,0.0008,0.0118});
HAnimJoint505->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint505->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint496->addChildren(*HAnimJoint505);

HAnimJoint487->addChildren(*HAnimJoint496);

HAnimJoint478->addChildren(*HAnimJoint487);

HAnimJoint465->addChildren(*HAnimJoint478);

CHAnimJoint* HAnimJoint506 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint506->setName("r_tarsometatarsal_5");
HAnimJoint506->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint506->setCenter(new float[3]{-0.1206,0.0124,-0.0671});
HAnimJoint506->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint506->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment507 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment507->setName("r_metatarsal_5");
HAnimSegment507->setDEF("hanim_r_metatarsal_5");
CTransform* Transform508 = (CTransform *)(m_pScene.createNode("Transform"));
Transform508->setTranslation(new float[3]{-0.1206,0.0124,-0.0671});
CTransform* Transform509 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape510 = (CShape *)(m_pScene.createNode("Shape"));
Shape510->setUSE("HAnimJointShape");
Transform509->addChild(*Shape510);

Transform508->addChildren(*Transform509);

HAnimSegment507->addChildren(*Transform508);

CShape* Shape511 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet512 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet512->setVertexCount(new int[1]{2});
CCoordinate* Coordinate513 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate513->setPoint(new float[6]{-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153});
LineSet512->setCoord(*Coordinate513);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
CColorRGBA* ColorRGBA514 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA514->setUSE("HAnimSegmentLineColorRGBA");
LineSet512->setColor(*ColorRGBA514);

Shape511->setGeometry(LineSet512);

HAnimSegment507->addChildren(*Shape511);

HAnimJoint506->addChildren(*HAnimSegment507);

CHAnimJoint* HAnimJoint515 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint515->setName("r_metatarsophalangeal_5");
HAnimJoint515->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint515->setCenter(new float[3]{-0.1239,0.0051,-0.0153});
HAnimJoint515->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint515->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment516 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment516->setName("r_tarsal_proximal_phalanx_5");
HAnimSegment516->setDEF("hanim_r_tarsal_proximal_phalanx_5");
CTransform* Transform517 = (CTransform *)(m_pScene.createNode("Transform"));
Transform517->setTranslation(new float[3]{-0.1239,0.0051,-0.0153});
CTransform* Transform518 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape519 = (CShape *)(m_pScene.createNode("Shape"));
Shape519->setUSE("HAnimJointShape");
Transform518->addChild(*Shape519);

Transform517->addChildren(*Transform518);

HAnimSegment516->addChildren(*Transform517);

CShape* Shape520 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet521 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet521->setVertexCount(new int[1]{2});
CCoordinate* Coordinate522 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate522->setPoint(new float[6]{-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077});
LineSet521->setCoord(*Coordinate522);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA523 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA523->setUSE("HAnimSegmentLineColorRGBA");
LineSet521->setColor(*ColorRGBA523);

Shape520->setGeometry(LineSet521);

HAnimSegment516->addChildren(*Shape520);

HAnimJoint515->addChildren(*HAnimSegment516);

CHAnimJoint* HAnimJoint524 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint524->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint524->setDEF("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimJoint524->setCenter(new float[3]{-0.1262,0.0023,-0.0077});
HAnimJoint524->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint524->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment525 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment525->setName("r_tarsal_middle_phalanx_5");
HAnimSegment525->setDEF("hanim_r_tarsal_middle_phalanx_5");
CTransform* Transform526 = (CTransform *)(m_pScene.createNode("Transform"));
Transform526->setTranslation(new float[3]{-0.1262,0.0023,-0.0077});
CTransform* Transform527 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape528 = (CShape *)(m_pScene.createNode("Shape"));
Shape528->setUSE("HAnimJointShape");
Transform527->addChild(*Shape528);

Transform526->addChildren(*Transform527);

HAnimSegment525->addChildren(*Transform526);

CShape* Shape529 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet530 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet530->setVertexCount(new int[1]{2});
CCoordinate* Coordinate531 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate531->setPoint(new float[6]{-0.1262,0.0023,-0.0077,-0.1271,0,0});
LineSet530->setCoord(*Coordinate531);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA532 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA532->setUSE("HAnimSegmentLineColorRGBA");
LineSet530->setColor(*ColorRGBA532);

Shape529->setGeometry(LineSet530);

HAnimSegment525->addChildren(*Shape529);

HAnimJoint524->addChildren(*HAnimSegment525);

CHAnimJoint* HAnimJoint533 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint533->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint533->setDEF("hanim_r_tarsal_distal_interphalangeal_5");
HAnimJoint533->setCenter(new float[3]{-0.1271,0,0});
HAnimJoint533->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint533->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint524->addChildren(*HAnimJoint533);

HAnimJoint515->addChildren(*HAnimJoint524);

HAnimJoint506->addChildren(*HAnimJoint515);

HAnimJoint465->addChildren(*HAnimJoint506);

HAnimJoint456->addChildren(*HAnimJoint465);

HAnimJoint324->addChildren(*HAnimJoint456);

HAnimJoint315->addChildren(*HAnimJoint324);

HAnimJoint306->addChildren(*HAnimJoint315);

HAnimJoint65->addChildren(*HAnimJoint306);

HAnimJoint52->addChildren(*HAnimJoint65);

CHAnimJoint* HAnimJoint534 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint534->setName("vl5");
HAnimJoint534->setDEF("hanim_vl5");
HAnimJoint534->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint534->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint534->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment535 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment535->setName("l5");
HAnimSegment535->setDEF("hanim_l5");
CTransform* Transform536 = (CTransform *)(m_pScene.createNode("Transform"));
Transform536->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CTransform* Transform537 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape538 = (CShape *)(m_pScene.createNode("Shape"));
Shape538->setUSE("HAnimJointShape");
Transform537->addChild(*Shape538);

Transform536->addChildren(*Transform537);

HAnimSegment535->addChildren(*Transform536);

CShape* Shape539 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet540 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet540->setVertexCount(new int[1]{2});
CCoordinate* Coordinate541 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate541->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet540->setCoord(*Coordinate541);

//from vl5 to vl4 vertices 2
CColorRGBA* ColorRGBA542 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA542->setUSE("HAnimSegmentLineColorRGBA");
LineSet540->setColor(*ColorRGBA542);

Shape539->setGeometry(LineSet540);

HAnimSegment535->addChildren(*Shape539);

HAnimJoint534->addChildren(*HAnimSegment535);

CHAnimJoint* HAnimJoint543 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint543->setName("vl4");
HAnimJoint543->setDEF("hanim_vl4");
HAnimJoint543->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint543->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint543->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment544 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment544->setName("l4");
HAnimSegment544->setDEF("hanim_l4");
CTransform* Transform545 = (CTransform *)(m_pScene.createNode("Transform"));
Transform545->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CTransform* Transform546 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape547 = (CShape *)(m_pScene.createNode("Shape"));
Shape547->setUSE("HAnimJointShape");
Transform546->addChild(*Shape547);

Transform545->addChildren(*Transform546);

HAnimSegment544->addChildren(*Transform545);

CShape* Shape548 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet549 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet549->setVertexCount(new int[1]{2});
CCoordinate* Coordinate550 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate550->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet549->setCoord(*Coordinate550);

//from vl4 to vl3 vertices 2
CColorRGBA* ColorRGBA551 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA551->setUSE("HAnimSegmentLineColorRGBA");
LineSet549->setColor(*ColorRGBA551);

Shape548->setGeometry(LineSet549);

HAnimSegment544->addChildren(*Shape548);

HAnimJoint543->addChildren(*HAnimSegment544);

CHAnimJoint* HAnimJoint552 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint552->setName("vl3");
HAnimJoint552->setDEF("hanim_vl3");
HAnimJoint552->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint552->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint552->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment553 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment553->setName("l3");
HAnimSegment553->setDEF("hanim_l3");
CTransform* Transform554 = (CTransform *)(m_pScene.createNode("Transform"));
Transform554->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CTransform* Transform555 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape556 = (CShape *)(m_pScene.createNode("Shape"));
Shape556->setUSE("HAnimJointShape");
Transform555->addChild(*Shape556);

Transform554->addChildren(*Transform555);

HAnimSegment553->addChildren(*Transform554);

CShape* Shape557 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet558 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet558->setVertexCount(new int[1]{2});
CCoordinate* Coordinate559 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate559->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet558->setCoord(*Coordinate559);

//from vl3 to vl2 vertices 2
CColorRGBA* ColorRGBA560 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA560->setUSE("HAnimSegmentLineColorRGBA");
LineSet558->setColor(*ColorRGBA560);

Shape557->setGeometry(LineSet558);

HAnimSegment553->addChildren(*Shape557);

HAnimJoint552->addChildren(*HAnimSegment553);

CHAnimJoint* HAnimJoint561 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint561->setName("vl2");
HAnimJoint561->setDEF("hanim_vl2");
HAnimJoint561->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint561->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint561->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment562 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment562->setName("l2");
HAnimSegment562->setDEF("hanim_l2");
CTransform* Transform563 = (CTransform *)(m_pScene.createNode("Transform"));
Transform563->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CTransform* Transform564 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape565 = (CShape *)(m_pScene.createNode("Shape"));
Shape565->setUSE("HAnimJointShape");
Transform564->addChild(*Shape565);

Transform563->addChildren(*Transform564);

HAnimSegment562->addChildren(*Transform563);

CShape* Shape566 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet567 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet567->setVertexCount(new int[1]{2});
CCoordinate* Coordinate568 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate568->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet567->setCoord(*Coordinate568);

//from vl2 to vl1 vertices 2
CColorRGBA* ColorRGBA569 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA569->setUSE("HAnimSegmentLineColorRGBA");
LineSet567->setColor(*ColorRGBA569);

Shape566->setGeometry(LineSet567);

HAnimSegment562->addChildren(*Shape566);

HAnimJoint561->addChildren(*HAnimSegment562);

CHAnimJoint* HAnimJoint570 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint570->setName("vl1");
HAnimJoint570->setDEF("hanim_vl1");
HAnimJoint570->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint570->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint570->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment571 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment571->setName("l1");
HAnimSegment571->setDEF("hanim_l1");
CTransform* Transform572 = (CTransform *)(m_pScene.createNode("Transform"));
Transform572->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CTransform* Transform573 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape574 = (CShape *)(m_pScene.createNode("Shape"));
Shape574->setUSE("HAnimJointShape");
Transform573->addChild(*Shape574);

Transform572->addChildren(*Transform573);

HAnimSegment571->addChildren(*Transform572);

CShape* Shape575 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet576 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet576->setVertexCount(new int[1]{2});
CCoordinate* Coordinate577 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate577->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet576->setCoord(*Coordinate577);

//from vl1 to vt12 vertices 2
CColorRGBA* ColorRGBA578 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA578->setUSE("HAnimSegmentLineColorRGBA");
LineSet576->setColor(*ColorRGBA578);

Shape575->setGeometry(LineSet576);

HAnimSegment571->addChildren(*Shape575);

HAnimJoint570->addChildren(*HAnimSegment571);

CHAnimJoint* HAnimJoint579 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint579->setName("vt12");
HAnimJoint579->setDEF("hanim_vt12");
HAnimJoint579->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint579->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint579->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment580 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment580->setName("t12");
HAnimSegment580->setDEF("hanim_t12");
CTransform* Transform581 = (CTransform *)(m_pScene.createNode("Transform"));
Transform581->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CTransform* Transform582 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape583 = (CShape *)(m_pScene.createNode("Shape"));
Shape583->setUSE("HAnimJointShape");
Transform582->addChild(*Shape583);

Transform581->addChildren(*Transform582);

HAnimSegment580->addChildren(*Transform581);

CShape* Shape584 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet585 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet585->setVertexCount(new int[1]{2});
CCoordinate* Coordinate586 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate586->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet585->setCoord(*Coordinate586);

//from vt12 to vt11 vertices 2
CColorRGBA* ColorRGBA587 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA587->setUSE("HAnimSegmentLineColorRGBA");
LineSet585->setColor(*ColorRGBA587);

Shape584->setGeometry(LineSet585);

HAnimSegment580->addChildren(*Shape584);

HAnimJoint579->addChildren(*HAnimSegment580);

CHAnimJoint* HAnimJoint588 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint588->setName("vt11");
HAnimJoint588->setDEF("hanim_vt11");
HAnimJoint588->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint588->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint588->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment589 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment589->setName("t11");
HAnimSegment589->setDEF("hanim_t11");
CTransform* Transform590 = (CTransform *)(m_pScene.createNode("Transform"));
Transform590->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CTransform* Transform591 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape592 = (CShape *)(m_pScene.createNode("Shape"));
Shape592->setUSE("HAnimJointShape");
Transform591->addChild(*Shape592);

Transform590->addChildren(*Transform591);

HAnimSegment589->addChildren(*Transform590);

CShape* Shape593 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet594 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet594->setVertexCount(new int[1]{2});
CCoordinate* Coordinate595 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate595->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet594->setCoord(*Coordinate595);

//from vt11 to vt10 vertices 2
CColorRGBA* ColorRGBA596 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA596->setUSE("HAnimSegmentLineColorRGBA");
LineSet594->setColor(*ColorRGBA596);

Shape593->setGeometry(LineSet594);

HAnimSegment589->addChildren(*Shape593);

HAnimJoint588->addChildren(*HAnimSegment589);

CHAnimJoint* HAnimJoint597 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint597->setName("vt10");
HAnimJoint597->setDEF("hanim_vt10");
HAnimJoint597->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint597->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint597->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment598 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment598->setName("t10");
HAnimSegment598->setDEF("hanim_t10");
CTransform* Transform599 = (CTransform *)(m_pScene.createNode("Transform"));
Transform599->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CTransform* Transform600 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape601 = (CShape *)(m_pScene.createNode("Shape"));
Shape601->setUSE("HAnimJointShape");
Transform600->addChild(*Shape601);

Transform599->addChildren(*Transform600);

HAnimSegment598->addChildren(*Transform599);

CShape* Shape602 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet603 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet603->setVertexCount(new int[1]{2});
CCoordinate* Coordinate604 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate604->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet603->setCoord(*Coordinate604);

//from vt10 to vt9 vertices 2
CColorRGBA* ColorRGBA605 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA605->setUSE("HAnimSegmentLineColorRGBA");
LineSet603->setColor(*ColorRGBA605);

Shape602->setGeometry(LineSet603);

HAnimSegment598->addChildren(*Shape602);

HAnimJoint597->addChildren(*HAnimSegment598);

CHAnimJoint* HAnimJoint606 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint606->setName("vt9");
HAnimJoint606->setDEF("hanim_vt9");
HAnimJoint606->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint606->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint606->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment607 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment607->setName("t9");
HAnimSegment607->setDEF("hanim_t9");
CTransform* Transform608 = (CTransform *)(m_pScene.createNode("Transform"));
Transform608->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
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
Coordinate613->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet612->setCoord(*Coordinate613);

//from vt9 to vt8 vertices 2
CColorRGBA* ColorRGBA614 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA614->setUSE("HAnimSegmentLineColorRGBA");
LineSet612->setColor(*ColorRGBA614);

Shape611->setGeometry(LineSet612);

HAnimSegment607->addChildren(*Shape611);

HAnimJoint606->addChildren(*HAnimSegment607);

CHAnimJoint* HAnimJoint615 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint615->setName("vt8");
HAnimJoint615->setDEF("hanim_vt8");
HAnimJoint615->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint615->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint615->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment616 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment616->setName("t8");
HAnimSegment616->setDEF("hanim_t8");
CTransform* Transform617 = (CTransform *)(m_pScene.createNode("Transform"));
Transform617->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
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
Coordinate622->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet621->setCoord(*Coordinate622);

//from vt8 to vt7 vertices 2
CColorRGBA* ColorRGBA623 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA623->setUSE("HAnimSegmentLineColorRGBA");
LineSet621->setColor(*ColorRGBA623);

Shape620->setGeometry(LineSet621);

HAnimSegment616->addChildren(*Shape620);

HAnimJoint615->addChildren(*HAnimSegment616);

CHAnimJoint* HAnimJoint624 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint624->setName("vt7");
HAnimJoint624->setDEF("hanim_vt7");
HAnimJoint624->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint624->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint624->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment625 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment625->setName("t7");
HAnimSegment625->setDEF("hanim_t7");
CTransform* Transform626 = (CTransform *)(m_pScene.createNode("Transform"));
Transform626->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
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
Coordinate631->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet630->setCoord(*Coordinate631);

//from vt7 to vt6 vertices 2
CColorRGBA* ColorRGBA632 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA632->setUSE("HAnimSegmentLineColorRGBA");
LineSet630->setColor(*ColorRGBA632);

Shape629->setGeometry(LineSet630);

HAnimSegment625->addChildren(*Shape629);

HAnimJoint624->addChildren(*HAnimSegment625);

CHAnimJoint* HAnimJoint633 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint633->setName("vt6");
HAnimJoint633->setDEF("hanim_vt6");
HAnimJoint633->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint633->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint633->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment634 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment634->setName("t6");
HAnimSegment634->setDEF("hanim_t6");
CTransform* Transform635 = (CTransform *)(m_pScene.createNode("Transform"));
Transform635->setTranslation(new float[3]{0.0059,1.3866,-0.08});
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
Coordinate640->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet639->setCoord(*Coordinate640);

//from vt6 to vt5 vertices 2
CColorRGBA* ColorRGBA641 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA641->setUSE("HAnimSegmentLineColorRGBA");
LineSet639->setColor(*ColorRGBA641);

Shape638->setGeometry(LineSet639);

HAnimSegment634->addChildren(*Shape638);

HAnimJoint633->addChildren(*HAnimSegment634);

CHAnimJoint* HAnimJoint642 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint642->setName("vt5");
HAnimJoint642->setDEF("hanim_vt5");
HAnimJoint642->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint642->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint642->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment643 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment643->setName("t5");
HAnimSegment643->setDEF("hanim_t5");
CTransform* Transform644 = (CTransform *)(m_pScene.createNode("Transform"));
Transform644->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CTransform* Transform645 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape646 = (CShape *)(m_pScene.createNode("Shape"));
Shape646->setUSE("HAnimJointShape");
Transform645->addChild(*Shape646);

Transform644->addChildren(*Transform645);

HAnimSegment643->addChildren(*Transform644);

CShape* Shape647 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet648 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet648->setVertexCount(new int[1]{2});
CCoordinate* Coordinate649 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate649->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet648->setCoord(*Coordinate649);

//from vt5 to vt4 vertices 2
CColorRGBA* ColorRGBA650 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA650->setUSE("HAnimSegmentLineColorRGBA");
LineSet648->setColor(*ColorRGBA650);

Shape647->setGeometry(LineSet648);

HAnimSegment643->addChildren(*Shape647);

HAnimJoint642->addChildren(*HAnimSegment643);

CHAnimJoint* HAnimJoint651 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint651->setName("vt4");
HAnimJoint651->setDEF("hanim_vt4");
HAnimJoint651->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint651->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint651->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment652 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment652->setName("t4");
HAnimSegment652->setDEF("hanim_t4");
CTransform* Transform653 = (CTransform *)(m_pScene.createNode("Transform"));
Transform653->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CTransform* Transform654 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape655 = (CShape *)(m_pScene.createNode("Shape"));
Shape655->setUSE("HAnimJointShape");
Transform654->addChild(*Shape655);

Transform653->addChildren(*Transform654);

HAnimSegment652->addChildren(*Transform653);

CShape* Shape656 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet657 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet657->setVertexCount(new int[1]{2});
CCoordinate* Coordinate658 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate658->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet657->setCoord(*Coordinate658);

//from vt4 to vt3 vertices 2
CColorRGBA* ColorRGBA659 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA659->setUSE("HAnimSegmentLineColorRGBA");
LineSet657->setColor(*ColorRGBA659);

Shape656->setGeometry(LineSet657);

HAnimSegment652->addChildren(*Shape656);

HAnimJoint651->addChildren(*HAnimSegment652);

CHAnimJoint* HAnimJoint660 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint660->setName("vt3");
HAnimJoint660->setDEF("hanim_vt3");
HAnimJoint660->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint660->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint660->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment661 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment661->setName("t3");
HAnimSegment661->setDEF("hanim_t3");
CTransform* Transform662 = (CTransform *)(m_pScene.createNode("Transform"));
Transform662->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CTransform* Transform663 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape664 = (CShape *)(m_pScene.createNode("Shape"));
Shape664->setUSE("HAnimJointShape");
Transform663->addChild(*Shape664);

Transform662->addChildren(*Transform663);

HAnimSegment661->addChildren(*Transform662);

CShape* Shape665 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet666 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet666->setVertexCount(new int[1]{2});
CCoordinate* Coordinate667 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate667->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet666->setCoord(*Coordinate667);

//from vt3 to vt2 vertices 2
CColorRGBA* ColorRGBA668 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA668->setUSE("HAnimSegmentLineColorRGBA");
LineSet666->setColor(*ColorRGBA668);

Shape665->setGeometry(LineSet666);

HAnimSegment661->addChildren(*Shape665);

HAnimJoint660->addChildren(*HAnimSegment661);

CHAnimJoint* HAnimJoint669 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint669->setName("vt2");
HAnimJoint669->setDEF("hanim_vt2");
HAnimJoint669->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint669->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint669->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment670 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment670->setName("t2");
HAnimSegment670->setDEF("hanim_t2");
CTransform* Transform671 = (CTransform *)(m_pScene.createNode("Transform"));
Transform671->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CTransform* Transform672 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape673 = (CShape *)(m_pScene.createNode("Shape"));
Shape673->setUSE("HAnimJointShape");
Transform672->addChild(*Shape673);

Transform671->addChildren(*Transform672);

HAnimSegment670->addChildren(*Transform671);

CShape* Shape674 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet675 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet675->setVertexCount(new int[1]{2});
CCoordinate* Coordinate676 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate676->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet675->setCoord(*Coordinate676);

//from vt2 to vt1 vertices 2
CColorRGBA* ColorRGBA677 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA677->setUSE("HAnimSegmentLineColorRGBA");
LineSet675->setColor(*ColorRGBA677);

Shape674->setGeometry(LineSet675);

HAnimSegment670->addChildren(*Shape674);

HAnimJoint669->addChildren(*HAnimSegment670);

CHAnimJoint* HAnimJoint678 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint678->setName("vt1");
HAnimJoint678->setDEF("hanim_vt1");
HAnimJoint678->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint678->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint678->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment679 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment679->setName("t1");
HAnimSegment679->setDEF("hanim_t1");
CTransform* Transform680 = (CTransform *)(m_pScene.createNode("Transform"));
Transform680->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CTransform* Transform681 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape682 = (CShape *)(m_pScene.createNode("Shape"));
Shape682->setUSE("HAnimJointShape");
Transform681->addChild(*Shape682);

Transform680->addChildren(*Transform681);

HAnimSegment679->addChildren(*Transform680);

CShape* Shape683 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet684 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet684->setVertexCount(new int[1]{2});
CCoordinate* Coordinate685 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate685->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet684->setCoord(*Coordinate685);

//from vt1 to vc7 vertices 2
CColorRGBA* ColorRGBA686 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA686->setUSE("HAnimSegmentLineColorRGBA");
LineSet684->setColor(*ColorRGBA686);

Shape683->setGeometry(LineSet684);

HAnimSegment679->addChildren(*Shape683);

CShape* Shape687 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet688 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet688->setVertexCount(new int[1]{2});
CCoordinate* Coordinate689 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate689->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet688->setCoord(*Coordinate689);

//from vt1 to l_sternoclavicular vertices 2
CColorRGBA* ColorRGBA690 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA690->setUSE("HAnimSegmentLineColorRGBA");
LineSet688->setColor(*ColorRGBA690);

Shape687->setGeometry(LineSet688);

HAnimSegment679->addChildren(*Shape687);

CShape* Shape691 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet692 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet692->setVertexCount(new int[1]{2});
CCoordinate* Coordinate693 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate693->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet692->setCoord(*Coordinate693);

//from vt1 to r_sternoclavicular vertices 2
CColorRGBA* ColorRGBA694 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA694->setUSE("HAnimSegmentLineColorRGBA");
LineSet692->setColor(*ColorRGBA694);

Shape691->setGeometry(LineSet692);

HAnimSegment679->addChildren(*Shape691);

HAnimJoint678->addChildren(*HAnimSegment679);

CHAnimJoint* HAnimJoint695 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint695->setName("vc7");
HAnimJoint695->setDEF("hanim_vc7");
HAnimJoint695->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint695->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint695->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment696 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment696->setName("c7");
HAnimSegment696->setDEF("hanim_c7");
CTransform* Transform697 = (CTransform *)(m_pScene.createNode("Transform"));
Transform697->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CTransform* Transform698 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape699 = (CShape *)(m_pScene.createNode("Shape"));
Shape699->setUSE("HAnimJointShape");
Transform698->addChild(*Shape699);

Transform697->addChildren(*Transform698);

HAnimSegment696->addChildren(*Transform697);

CShape* Shape700 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet701 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet701->setVertexCount(new int[1]{2});
CCoordinate* Coordinate702 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate702->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet701->setCoord(*Coordinate702);

//from vc7 to vc6 vertices 2
CColorRGBA* ColorRGBA703 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA703->setUSE("HAnimSegmentLineColorRGBA");
LineSet701->setColor(*ColorRGBA703);

Shape700->setGeometry(LineSet701);

HAnimSegment696->addChildren(*Shape700);

HAnimJoint695->addChildren(*HAnimSegment696);

CHAnimJoint* HAnimJoint704 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint704->setName("vc6");
HAnimJoint704->setDEF("hanim_vc6");
HAnimJoint704->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint704->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint704->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment705 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment705->setName("c6");
HAnimSegment705->setDEF("hanim_c6");
CTransform* Transform706 = (CTransform *)(m_pScene.createNode("Transform"));
Transform706->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CTransform* Transform707 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape708 = (CShape *)(m_pScene.createNode("Shape"));
Shape708->setUSE("HAnimJointShape");
Transform707->addChild(*Shape708);

Transform706->addChildren(*Transform707);

HAnimSegment705->addChildren(*Transform706);

CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet710 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet710->setVertexCount(new int[1]{2});
CCoordinate* Coordinate711 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate711->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet710->setCoord(*Coordinate711);

//from vc6 to vc5 vertices 2
CColorRGBA* ColorRGBA712 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA712->setUSE("HAnimSegmentLineColorRGBA");
LineSet710->setColor(*ColorRGBA712);

Shape709->setGeometry(LineSet710);

HAnimSegment705->addChildren(*Shape709);

HAnimJoint704->addChildren(*HAnimSegment705);

CHAnimJoint* HAnimJoint713 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint713->setName("vc5");
HAnimJoint713->setDEF("hanim_vc5");
HAnimJoint713->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint713->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint713->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment714 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment714->setName("c5");
HAnimSegment714->setDEF("hanim_c5");
CTransform* Transform715 = (CTransform *)(m_pScene.createNode("Transform"));
Transform715->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CTransform* Transform716 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape717 = (CShape *)(m_pScene.createNode("Shape"));
Shape717->setUSE("HAnimJointShape");
Transform716->addChild(*Shape717);

Transform715->addChildren(*Transform716);

HAnimSegment714->addChildren(*Transform715);

CShape* Shape718 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet719 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet719->setVertexCount(new int[1]{2});
CCoordinate* Coordinate720 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate720->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet719->setCoord(*Coordinate720);

//from vc5 to vc4 vertices 2
CColorRGBA* ColorRGBA721 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA721->setUSE("HAnimSegmentLineColorRGBA");
LineSet719->setColor(*ColorRGBA721);

Shape718->setGeometry(LineSet719);

HAnimSegment714->addChildren(*Shape718);

HAnimJoint713->addChildren(*HAnimSegment714);

CHAnimJoint* HAnimJoint722 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint722->setName("vc4");
HAnimJoint722->setDEF("hanim_vc4");
HAnimJoint722->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint722->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint722->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment723 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment723->setName("c4");
HAnimSegment723->setDEF("hanim_c4");
CTransform* Transform724 = (CTransform *)(m_pScene.createNode("Transform"));
Transform724->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
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
Coordinate729->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet728->setCoord(*Coordinate729);

//from vc4 to vc3 vertices 2
CColorRGBA* ColorRGBA730 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA730->setUSE("HAnimSegmentLineColorRGBA");
LineSet728->setColor(*ColorRGBA730);

Shape727->setGeometry(LineSet728);

HAnimSegment723->addChildren(*Shape727);

HAnimJoint722->addChildren(*HAnimSegment723);

CHAnimJoint* HAnimJoint731 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint731->setName("vc3");
HAnimJoint731->setDEF("hanim_vc3");
HAnimJoint731->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint731->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint731->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment732 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment732->setName("c3");
HAnimSegment732->setDEF("hanim_c3");
CTransform* Transform733 = (CTransform *)(m_pScene.createNode("Transform"));
Transform733->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CTransform* Transform734 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape735 = (CShape *)(m_pScene.createNode("Shape"));
Shape735->setUSE("HAnimJointShape");
Transform734->addChild(*Shape735);

Transform733->addChildren(*Transform734);

HAnimSegment732->addChildren(*Transform733);

CShape* Shape736 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet737 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet737->setVertexCount(new int[1]{2});
CCoordinate* Coordinate738 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate738->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet737->setCoord(*Coordinate738);

//from vc3 to vc2 vertices 2
CColorRGBA* ColorRGBA739 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA739->setUSE("HAnimSegmentLineColorRGBA");
LineSet737->setColor(*ColorRGBA739);

Shape736->setGeometry(LineSet737);

HAnimSegment732->addChildren(*Shape736);

HAnimJoint731->addChildren(*HAnimSegment732);

CHAnimJoint* HAnimJoint740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint740->setName("vc2");
HAnimJoint740->setDEF("hanim_vc2");
HAnimJoint740->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint740->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint740->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment741 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment741->setName("c2");
HAnimSegment741->setDEF("hanim_c2");
CTransform* Transform742 = (CTransform *)(m_pScene.createNode("Transform"));
Transform742->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CTransform* Transform743 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape744 = (CShape *)(m_pScene.createNode("Shape"));
Shape744->setUSE("HAnimJointShape");
Transform743->addChild(*Shape744);

Transform742->addChildren(*Transform743);

HAnimSegment741->addChildren(*Transform742);

CShape* Shape745 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet746 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet746->setVertexCount(new int[1]{2});
CCoordinate* Coordinate747 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate747->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet746->setCoord(*Coordinate747);

//from vc2 to vc1 vertices 2
CColorRGBA* ColorRGBA748 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA748->setUSE("HAnimSegmentLineColorRGBA");
LineSet746->setColor(*ColorRGBA748);

Shape745->setGeometry(LineSet746);

HAnimSegment741->addChildren(*Shape745);

HAnimJoint740->addChildren(*HAnimSegment741);

CHAnimJoint* HAnimJoint749 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint749->setName("vc1");
HAnimJoint749->setDEF("hanim_vc1");
HAnimJoint749->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint749->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint749->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment750 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment750->setName("c1");
HAnimSegment750->setDEF("hanim_c1");
CTransform* Transform751 = (CTransform *)(m_pScene.createNode("Transform"));
Transform751->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
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
Coordinate756->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet755->setCoord(*Coordinate756);

//from vc1 to skullbase vertices 2
CColorRGBA* ColorRGBA757 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA757->setUSE("HAnimSegmentLineColorRGBA");
LineSet755->setColor(*ColorRGBA757);

Shape754->setGeometry(LineSet755);

HAnimSegment750->addChildren(*Shape754);

HAnimJoint749->addChildren(*HAnimSegment750);

CHAnimJoint* HAnimJoint758 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint758->setName("skullbase");
HAnimJoint758->setDEF("hanim_skullbase");
HAnimJoint758->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint758->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint758->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment759 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment759->setName("skull");
HAnimSegment759->setDEF("hanim_skull");
CTransform* Transform760 = (CTransform *)(m_pScene.createNode("Transform"));
Transform760->setTranslation(new float[3]{0.0044,1.6209,0.0236});
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
Coordinate765->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689});
LineSet764->setCoord(*Coordinate765);

//from skullbase to l_eyelid_joint vertices 2
CColorRGBA* ColorRGBA766 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA766->setUSE("HAnimSegmentLineColorRGBA");
LineSet764->setColor(*ColorRGBA766);

Shape763->setGeometry(LineSet764);

HAnimSegment759->addChildren(*Shape763);

CShape* Shape767 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet768 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet768->setVertexCount(new int[1]{2});
CCoordinate* Coordinate769 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate769->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689});
LineSet768->setCoord(*Coordinate769);

//from skullbase to r_eyelid_joint vertices 2
CColorRGBA* ColorRGBA770 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA770->setUSE("HAnimSegmentLineColorRGBA");
LineSet768->setColor(*ColorRGBA770);

Shape767->setGeometry(LineSet768);

HAnimSegment759->addChildren(*Shape767);

CShape* Shape771 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet772 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet772->setVertexCount(new int[1]{2});
CCoordinate* Coordinate773 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate773->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188});
LineSet772->setCoord(*Coordinate773);

//from skullbase to l_eyeball_joint vertices 2
CColorRGBA* ColorRGBA774 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA774->setUSE("HAnimSegmentLineColorRGBA");
LineSet772->setColor(*ColorRGBA774);

Shape771->setGeometry(LineSet772);

HAnimSegment759->addChildren(*Shape771);

CShape* Shape775 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet776 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet776->setVertexCount(new int[1]{2});
CCoordinate* Coordinate777 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate777->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188});
LineSet776->setCoord(*Coordinate777);

//from skullbase to r_eyeball_joint vertices 2
CColorRGBA* ColorRGBA778 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA778->setUSE("HAnimSegmentLineColorRGBA");
LineSet776->setColor(*ColorRGBA778);

Shape775->setGeometry(LineSet776);

HAnimSegment759->addChildren(*Shape775);

CShape* Shape779 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet780 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet780->setVertexCount(new int[1]{2});
CCoordinate* Coordinate781 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate781->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0216,1.4053,0.0051});
LineSet780->setCoord(*Coordinate781);

//from skullbase to l_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA782 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA782->setUSE("HAnimSegmentLineColorRGBA");
LineSet780->setColor(*ColorRGBA782);

Shape779->setGeometry(LineSet780);

HAnimSegment759->addChildren(*Shape779);

CShape* Shape783 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet784 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet784->setVertexCount(new int[1]{2});
CCoordinate* Coordinate785 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate785->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051});
LineSet784->setCoord(*Coordinate785);

//from skullbase to r_eyebrow_joint vertices 2
CColorRGBA* ColorRGBA786 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA786->setUSE("HAnimSegmentLineColorRGBA");
LineSet784->setColor(*ColorRGBA786);

Shape783->setGeometry(LineSet784);

HAnimSegment759->addChildren(*Shape783);

CShape* Shape787 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet788 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet788->setVertexCount(new int[1]{2});
CCoordinate* Coordinate789 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate789->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865});
LineSet788->setCoord(*Coordinate789);

//from skullbase to temporomandibular vertices 2
CColorRGBA* ColorRGBA790 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA790->setUSE("HAnimSegmentLineColorRGBA");
LineSet788->setColor(*ColorRGBA790);

Shape787->setGeometry(LineSet788);

HAnimSegment759->addChildren(*Shape787);

HAnimJoint758->addChildren(*HAnimSegment759);

CHAnimJoint* HAnimJoint791 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint791->setName("l_eyelid_joint");
HAnimJoint791->setDEF("hanim_l_eyelid_joint");
HAnimJoint791->setCenter(new float[3]{0.0503,1.4157,-0.0689});
HAnimJoint791->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint791->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758->addChildren(*HAnimJoint791);

CHAnimJoint* HAnimJoint792 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint792->setName("r_eyelid_joint");
HAnimJoint792->setDEF("hanim_r_eyelid_joint");
HAnimJoint792->setCenter(new float[3]{-0.0507,1.4157,-0.0689});
HAnimJoint792->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint792->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758->addChildren(*HAnimJoint792);

CHAnimJoint* HAnimJoint793 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint793->setName("l_eyeball_joint");
HAnimJoint793->setDEF("hanim_l_eyeball_joint");
HAnimJoint793->setCenter(new float[3]{0.0479,1.3963,-0.0188});
HAnimJoint793->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint793->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758->addChildren(*HAnimJoint793);

CHAnimJoint* HAnimJoint794 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint794->setName("r_eyeball_joint");
HAnimJoint794->setDEF("hanim_r_eyeball_joint");
HAnimJoint794->setCenter(new float[3]{-0.0483,1.3963,-0.0188});
HAnimJoint794->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint794->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758->addChildren(*HAnimJoint794);

CHAnimJoint* HAnimJoint795 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint795->setName("l_eyebrow_joint");
HAnimJoint795->setDEF("hanim_l_eyebrow_joint");
HAnimJoint795->setCenter(new float[3]{0.0216,1.4053,0.0051});
HAnimJoint795->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint795->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758->addChildren(*HAnimJoint795);

CHAnimJoint* HAnimJoint796 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint796->setName("r_eyebrow_joint");
HAnimJoint796->setDEF("hanim_r_eyebrow_joint");
HAnimJoint796->setCenter(new float[3]{-0.0219,1.4053,0.0051});
HAnimJoint796->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint796->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758->addChildren(*HAnimJoint796);

CHAnimJoint* HAnimJoint797 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint797->setName("temporomandibular");
HAnimJoint797->setDEF("hanim_temporomandibular");
HAnimJoint797->setCenter(new float[3]{-0.0002,1.3043,-0.0865});
HAnimJoint797->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint797->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758->addChildren(*HAnimJoint797);

HAnimJoint749->addChildren(*HAnimJoint758);

HAnimJoint740->addChildren(*HAnimJoint749);

HAnimJoint731->addChildren(*HAnimJoint740);

HAnimJoint722->addChildren(*HAnimJoint731);

HAnimJoint713->addChildren(*HAnimJoint722);

HAnimJoint704->addChildren(*HAnimJoint713);

HAnimJoint695->addChildren(*HAnimJoint704);

HAnimJoint678->addChildren(*HAnimJoint695);

CHAnimJoint* HAnimJoint798 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint798->setName("l_sternoclavicular");
HAnimJoint798->setDEF("hanim_l_sternoclavicular");
HAnimJoint798->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint798->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint798->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment799 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment799->setName("l_clavicle");
HAnimSegment799->setDEF("hanim_l_clavicle");
CTransform* Transform800 = (CTransform *)(m_pScene.createNode("Transform"));
Transform800->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CTransform* Transform801 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape802 = (CShape *)(m_pScene.createNode("Shape"));
Shape802->setUSE("HAnimJointShape");
Transform801->addChild(*Shape802);

Transform800->addChildren(*Transform801);

HAnimSegment799->addChildren(*Transform800);

CShape* Shape803 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet804 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet804->setVertexCount(new int[1]{2});
CCoordinate* Coordinate805 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate805->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet804->setCoord(*Coordinate805);

//from l_sternoclavicular to l_acromioclavicular vertices 2
CColorRGBA* ColorRGBA806 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA806->setUSE("HAnimSegmentLineColorRGBA");
LineSet804->setColor(*ColorRGBA806);

Shape803->setGeometry(LineSet804);

HAnimSegment799->addChildren(*Shape803);

HAnimJoint798->addChildren(*HAnimSegment799);

CHAnimJoint* HAnimJoint807 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint807->setName("l_acromioclavicular");
HAnimJoint807->setDEF("hanim_l_acromioclavicular");
HAnimJoint807->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint807->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint807->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment808 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment808->setName("l_scapula");
HAnimSegment808->setDEF("hanim_l_scapula");
CTransform* Transform809 = (CTransform *)(m_pScene.createNode("Transform"));
Transform809->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CTransform* Transform810 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape811 = (CShape *)(m_pScene.createNode("Shape"));
Shape811->setUSE("HAnimJointShape");
Transform810->addChild(*Shape811);

Transform809->addChildren(*Transform810);

HAnimSegment808->addChildren(*Transform809);

CShape* Shape812 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet813 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet813->setVertexCount(new int[1]{2});
CCoordinate* Coordinate814 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate814->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet813->setCoord(*Coordinate814);

//from l_acromioclavicular to l_shoulder vertices 2
CColorRGBA* ColorRGBA815 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA815->setUSE("HAnimSegmentLineColorRGBA");
LineSet813->setColor(*ColorRGBA815);

Shape812->setGeometry(LineSet813);

HAnimSegment808->addChildren(*Shape812);

HAnimJoint807->addChildren(*HAnimSegment808);

CHAnimJoint* HAnimJoint816 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint816->setName("l_shoulder");
HAnimJoint816->setDEF("hanim_l_shoulder");
HAnimJoint816->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint816->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint816->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment817 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment817->setName("l_upperarm");
HAnimSegment817->setDEF("hanim_l_upperarm");
CTransform* Transform818 = (CTransform *)(m_pScene.createNode("Transform"));
Transform818->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CTransform* Transform819 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape820 = (CShape *)(m_pScene.createNode("Shape"));
Shape820->setUSE("HAnimJointShape");
Transform819->addChild(*Shape820);

Transform818->addChildren(*Transform819);

HAnimSegment817->addChildren(*Transform818);

CShape* Shape821 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet822 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet822->setVertexCount(new int[1]{2});
CCoordinate* Coordinate823 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate823->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet822->setCoord(*Coordinate823);

//from l_shoulder to l_elbow vertices 2
CColorRGBA* ColorRGBA824 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA824->setUSE("HAnimSegmentLineColorRGBA");
LineSet822->setColor(*ColorRGBA824);

Shape821->setGeometry(LineSet822);

HAnimSegment817->addChildren(*Shape821);

HAnimJoint816->addChildren(*HAnimSegment817);

CHAnimJoint* HAnimJoint825 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint825->setName("l_elbow");
HAnimJoint825->setDEF("hanim_l_elbow");
HAnimJoint825->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint825->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint825->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment826->setName("l_forearm");
HAnimSegment826->setDEF("hanim_l_forearm");
CTransform* Transform827 = (CTransform *)(m_pScene.createNode("Transform"));
Transform827->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CTransform* Transform828 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape829 = (CShape *)(m_pScene.createNode("Shape"));
Shape829->setUSE("HAnimJointShape");
Transform828->addChild(*Shape829);

Transform827->addChildren(*Transform828);

HAnimSegment826->addChildren(*Transform827);

CShape* Shape830 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet831 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet831->setVertexCount(new int[1]{2});
CCoordinate* Coordinate832 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate832->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet831->setCoord(*Coordinate832);

//from l_elbow to l_radiocarpal vertices 2
CColorRGBA* ColorRGBA833 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA833->setUSE("HAnimSegmentLineColorRGBA");
LineSet831->setColor(*ColorRGBA833);

Shape830->setGeometry(LineSet831);

HAnimSegment826->addChildren(*Shape830);

HAnimJoint825->addChildren(*HAnimSegment826);

CHAnimJoint* HAnimJoint834 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint834->setName("l_radiocarpal");
HAnimJoint834->setDEF("hanim_l_radiocarpal");
HAnimJoint834->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint834->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint834->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment835 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment835->setName("l_carpal");
HAnimSegment835->setDEF("hanim_l_carpal");
CTransform* Transform836 = (CTransform *)(m_pScene.createNode("Transform"));
Transform836->setScale(new float[3]{0.2,0.2,0.2});
Transform836->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform836->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
CTransform* Transform837 = (CTransform *)(m_pScene.createNode("Transform"));
Transform837->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
CShape* Shape838 = (CShape *)(m_pScene.createNode("Shape"));
Shape838->setUSE("HAnimJointShape");
Transform837->addChild(*Shape838);

Transform836->addChildren(*Transform837);

HAnimSegment835->addChildren(*Transform836);

CShape* Shape839 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet840 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet840->setVertexCount(new int[1]{2});
CCoordinate* Coordinate841 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate841->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826});
LineSet840->setCoord(*Coordinate841);

//from l_radiocarpal to l_midcarpal_1 vertices 2
CColorRGBA* ColorRGBA842 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA842->setUSE("HAnimSegmentLineColorRGBA");
LineSet840->setColor(*ColorRGBA842);

Shape839->setGeometry(LineSet840);

HAnimSegment835->addChildren(*Shape839);

CShape* Shape843 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet844 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet844->setVertexCount(new int[1]{2});
CCoordinate* Coordinate845 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate845->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935});
LineSet844->setCoord(*Coordinate845);

//from l_radiocarpal to l_midcarpal_2 vertices 2
CColorRGBA* ColorRGBA846 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA846->setUSE("HAnimSegmentLineColorRGBA");
LineSet844->setColor(*ColorRGBA846);

Shape843->setGeometry(LineSet844);

HAnimSegment835->addChildren(*Shape843);

CShape* Shape847 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet848 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet848->setVertexCount(new int[1]{2});
CCoordinate* Coordinate849 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate849->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067});
LineSet848->setCoord(*Coordinate849);

//from l_radiocarpal to l_midcarpal_3 vertices 2
CColorRGBA* ColorRGBA850 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA850->setUSE("HAnimSegmentLineColorRGBA");
LineSet848->setColor(*ColorRGBA850);

Shape847->setGeometry(LineSet848);

HAnimSegment835->addChildren(*Shape847);

CShape* Shape851 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet852 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet852->setVertexCount(new int[1]{2});
CCoordinate* Coordinate853 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate853->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276});
LineSet852->setCoord(*Coordinate853);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
CColorRGBA* ColorRGBA854 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA854->setUSE("HAnimSegmentLineColorRGBA");
LineSet852->setColor(*ColorRGBA854);

Shape851->setGeometry(LineSet852);

HAnimSegment835->addChildren(*Shape851);

HAnimJoint834->addChildren(*HAnimSegment835);

CHAnimJoint* HAnimJoint855 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint855->setName("l_midcarpal_1");
HAnimJoint855->setDEF("hanim_l_midcarpal_1");
HAnimJoint855->setCenter(new float[3]{0.1811,0.6975,-0.0826});
HAnimJoint855->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint855->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment856 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment856->setName("l_trapezium");
HAnimSegment856->setDEF("hanim_l_trapezium");
CTransform* Transform857 = (CTransform *)(m_pScene.createNode("Transform"));
Transform857->setTranslation(new float[3]{0.1811,0.6975,-0.0826});
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
Coordinate862->setPoint(new float[6]{0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534});
LineSet861->setCoord(*Coordinate862);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA863 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA863->setUSE("HAnimSegmentLineColorRGBA");
LineSet861->setColor(*ColorRGBA863);

Shape860->setGeometry(LineSet861);

HAnimSegment856->addChildren(*Shape860);

HAnimJoint855->addChildren(*HAnimSegment856);

CHAnimJoint* HAnimJoint864 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint864->setName("l_carpometacarpal_1");
HAnimJoint864->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint864->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint864->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint864->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment865 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment865->setName("l_metacarpal_1");
HAnimSegment865->setDEF("hanim_l_metacarpal_1");
CTransform* Transform866 = (CTransform *)(m_pScene.createNode("Transform"));
Transform866->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
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
Coordinate871->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet870->setCoord(*Coordinate871);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA872 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA872->setUSE("HAnimSegmentLineColorRGBA");
LineSet870->setColor(*ColorRGBA872);

Shape869->setGeometry(LineSet870);

HAnimSegment865->addChildren(*Shape869);

HAnimJoint864->addChildren(*HAnimSegment865);

CHAnimJoint* HAnimJoint873 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint873->setName("l_metacarpophalangeal_1");
HAnimJoint873->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint873->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint873->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint873->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment874 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment874->setName("l_carpal_proximal_phalanx_1");
HAnimSegment874->setDEF("hanim_l_carpal_proximal_phalanx_1");
CTransform* Transform875 = (CTransform *)(m_pScene.createNode("Transform"));
Transform875->setTranslation(new float[3]{0.1951,0.8226,0.0246});
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
Coordinate880->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet879->setCoord(*Coordinate880);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA881 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA881->setUSE("HAnimSegmentLineColorRGBA");
LineSet879->setColor(*ColorRGBA881);

Shape878->setGeometry(LineSet879);

HAnimSegment874->addChildren(*Shape878);

HAnimJoint873->addChildren(*HAnimSegment874);

CHAnimJoint* HAnimJoint882 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint882->setName("l_carpal_interphalangeal_1");
HAnimJoint882->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint882->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint882->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint882->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint873->addChildren(*HAnimJoint882);

HAnimJoint864->addChildren(*HAnimJoint873);

HAnimJoint855->addChildren(*HAnimJoint864);

HAnimJoint834->addChildren(*HAnimJoint855);

CHAnimJoint* HAnimJoint883 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint883->setName("l_midcarpal_2");
HAnimJoint883->setDEF("hanim_l_midcarpal_2");
HAnimJoint883->setCenter(new float[3]{0.1811,0.6984,-0.0935});
HAnimJoint883->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint883->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment884 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment884->setName("l_trapezoid");
HAnimSegment884->setDEF("hanim_l_trapezoid");
CTransform* Transform885 = (CTransform *)(m_pScene.createNode("Transform"));
Transform885->setTranslation(new float[3]{0.1811,0.6984,-0.0935});
CTransform* Transform886 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape887 = (CShape *)(m_pScene.createNode("Shape"));
Shape887->setUSE("HAnimJointShape");
Transform886->addChild(*Shape887);

Transform885->addChildren(*Transform886);

HAnimSegment884->addChildren(*Transform885);

CShape* Shape888 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet889 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet889->setVertexCount(new int[1]{2});
CCoordinate* Coordinate890 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate890->setPoint(new float[6]{0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028});
LineSet889->setCoord(*Coordinate890);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA891 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA891->setUSE("HAnimSegmentLineColorRGBA");
LineSet889->setColor(*ColorRGBA891);

Shape888->setGeometry(LineSet889);

HAnimSegment884->addChildren(*Shape888);

HAnimJoint883->addChildren(*HAnimSegment884);

CHAnimJoint* HAnimJoint892 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint892->setName("l_carpometacarpal_2");
HAnimJoint892->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint892->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint892->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint892->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment893 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment893->setName("l_metacarpal_2");
HAnimSegment893->setDEF("hanim_l_metacarpal_2");
CTransform* Transform894 = (CTransform *)(m_pScene.createNode("Transform"));
Transform894->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CTransform* Transform895 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape896 = (CShape *)(m_pScene.createNode("Shape"));
Shape896->setUSE("HAnimJointShape");
Transform895->addChild(*Shape896);

Transform894->addChildren(*Transform895);

HAnimSegment893->addChildren(*Transform894);

CShape* Shape897 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet898 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet898->setVertexCount(new int[1]{2});
CCoordinate* Coordinate899 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate899->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet898->setCoord(*Coordinate899);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA900 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA900->setUSE("HAnimSegmentLineColorRGBA");
LineSet898->setColor(*ColorRGBA900);

Shape897->setGeometry(LineSet898);

HAnimSegment893->addChildren(*Shape897);

HAnimJoint892->addChildren(*HAnimSegment893);

CHAnimJoint* HAnimJoint901 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint901->setName("l_metacarpophalangeal_2");
HAnimJoint901->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint901->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint901->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint901->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment902 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment902->setName("l_carpal_proximal_phalanx_2");
HAnimSegment902->setDEF("hanim_l_carpal_proximal_phalanx_2");
CTransform* Transform903 = (CTransform *)(m_pScene.createNode("Transform"));
Transform903->setTranslation(new float[3]{0.1983,0.7815,-0.028});
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
Coordinate908->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet907->setCoord(*Coordinate908);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA909 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA909->setUSE("HAnimSegmentLineColorRGBA");
LineSet907->setColor(*ColorRGBA909);

Shape906->setGeometry(LineSet907);

HAnimSegment902->addChildren(*Shape906);

HAnimJoint901->addChildren(*HAnimSegment902);

CHAnimJoint* HAnimJoint910 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint910->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint910->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint910->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint910->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint910->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment911 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment911->setName("l_carpal_middle_phalanx_2");
HAnimSegment911->setDEF("hanim_l_carpal_middle_phalanx_2");
CTransform* Transform912 = (CTransform *)(m_pScene.createNode("Transform"));
Transform912->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
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
Coordinate917->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet916->setCoord(*Coordinate917);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA918 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA918->setUSE("HAnimSegmentLineColorRGBA");
LineSet916->setColor(*ColorRGBA918);

Shape915->setGeometry(LineSet916);

HAnimSegment911->addChildren(*Shape915);

HAnimJoint910->addChildren(*HAnimSegment911);

CHAnimJoint* HAnimJoint919 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint919->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint919->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint919->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint919->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint919->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint910->addChildren(*HAnimJoint919);

HAnimJoint901->addChildren(*HAnimJoint910);

HAnimJoint892->addChildren(*HAnimJoint901);

HAnimJoint883->addChildren(*HAnimJoint892);

HAnimJoint834->addChildren(*HAnimJoint883);

CHAnimJoint* HAnimJoint920 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint920->setName("l_midcarpal_3");
HAnimJoint920->setDEF("hanim_l_midcarpal_3");
HAnimJoint920->setCenter(new float[3]{0.1809,0.7,-0.1067});
HAnimJoint920->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint920->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment921 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment921->setName("l_capitate");
HAnimSegment921->setDEF("hanim_l_capitate");
CTransform* Transform922 = (CTransform *)(m_pScene.createNode("Transform"));
Transform922->setTranslation(new float[3]{0.1809,0.7,-0.1067});
CTransform* Transform923 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape924 = (CShape *)(m_pScene.createNode("Shape"));
Shape924->setUSE("HAnimJointShape");
Transform923->addChild(*Shape924);

Transform922->addChildren(*Transform923);

HAnimSegment921->addChildren(*Transform922);

CShape* Shape925 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet926 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet926->setVertexCount(new int[1]{2});
CCoordinate* Coordinate927 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate927->setPoint(new float[6]{0.1809,0.7,-0.1067,0.1987,0.8029,-0.053});
LineSet926->setCoord(*Coordinate927);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA928 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA928->setUSE("HAnimSegmentLineColorRGBA");
LineSet926->setColor(*ColorRGBA928);

Shape925->setGeometry(LineSet926);

HAnimSegment921->addChildren(*Shape925);

HAnimJoint920->addChildren(*HAnimSegment921);

CHAnimJoint* HAnimJoint929 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint929->setName("l_carpometacarpal_3");
HAnimJoint929->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint929->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint929->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint929->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment930 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment930->setName("l_metacarpal_3");
HAnimSegment930->setDEF("hanim_l_metacarpal_3");
CTransform* Transform931 = (CTransform *)(m_pScene.createNode("Transform"));
Transform931->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CTransform* Transform932 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape933 = (CShape *)(m_pScene.createNode("Shape"));
Shape933->setUSE("HAnimJointShape");
Transform932->addChild(*Shape933);

Transform931->addChildren(*Transform932);

HAnimSegment930->addChildren(*Transform931);

CShape* Shape934 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet935 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet935->setVertexCount(new int[1]{2});
CCoordinate* Coordinate936 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate936->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet935->setCoord(*Coordinate936);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA937 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA937->setUSE("HAnimSegmentLineColorRGBA");
LineSet935->setColor(*ColorRGBA937);

Shape934->setGeometry(LineSet935);

HAnimSegment930->addChildren(*Shape934);

HAnimJoint929->addChildren(*HAnimSegment930);

CHAnimJoint* HAnimJoint938 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint938->setName("l_metacarpophalangeal_3");
HAnimJoint938->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint938->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint938->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint938->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment939 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment939->setName("l_carpal_proximal_phalanx_3");
HAnimSegment939->setDEF("hanim_l_carpal_proximal_phalanx_3");
CTransform* Transform940 = (CTransform *)(m_pScene.createNode("Transform"));
Transform940->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CTransform* Transform941 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape942 = (CShape *)(m_pScene.createNode("Shape"));
Shape942->setUSE("HAnimJointShape");
Transform941->addChild(*Shape942);

Transform940->addChildren(*Transform941);

HAnimSegment939->addChildren(*Transform940);

CShape* Shape943 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet944 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet944->setVertexCount(new int[1]{2});
CCoordinate* Coordinate945 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate945->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet944->setCoord(*Coordinate945);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA946 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA946->setUSE("HAnimSegmentLineColorRGBA");
LineSet944->setColor(*ColorRGBA946);

Shape943->setGeometry(LineSet944);

HAnimSegment939->addChildren(*Shape943);

HAnimJoint938->addChildren(*HAnimSegment939);

CHAnimJoint* HAnimJoint947 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint947->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint947->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint947->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint947->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint947->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment948 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment948->setName("l_carpal_middle_phalanx_3");
HAnimSegment948->setDEF("hanim_l_carpal_middle_phalanx_3");
CTransform* Transform949 = (CTransform *)(m_pScene.createNode("Transform"));
Transform949->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CTransform* Transform950 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape951 = (CShape *)(m_pScene.createNode("Shape"));
Shape951->setUSE("HAnimJointShape");
Transform950->addChild(*Shape951);

Transform949->addChildren(*Transform950);

HAnimSegment948->addChildren(*Transform949);

CShape* Shape952 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet953 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet953->setVertexCount(new int[1]{2});
CCoordinate* Coordinate954 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate954->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet953->setCoord(*Coordinate954);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA955 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA955->setUSE("HAnimSegmentLineColorRGBA");
LineSet953->setColor(*ColorRGBA955);

Shape952->setGeometry(LineSet953);

HAnimSegment948->addChildren(*Shape952);

HAnimJoint947->addChildren(*HAnimSegment948);

CHAnimJoint* HAnimJoint956 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint956->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint956->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint956->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint956->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint956->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint947->addChildren(*HAnimJoint956);

HAnimJoint938->addChildren(*HAnimJoint947);

HAnimJoint929->addChildren(*HAnimJoint938);

HAnimJoint920->addChildren(*HAnimJoint929);

HAnimJoint834->addChildren(*HAnimJoint920);

CHAnimJoint* HAnimJoint957 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint957->setName("l_midcarpal_4_5");
HAnimJoint957->setDEF("hanim_l_midcarpal_4_5");
HAnimJoint957->setCenter(new float[3]{0.1809,0.6973,-0.1276});
HAnimJoint957->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint957->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment958 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment958->setName("l_hamate");
HAnimSegment958->setDEF("hanim_l_hamate");
CTransform* Transform959 = (CTransform *)(m_pScene.createNode("Transform"));
Transform959->setTranslation(new float[3]{0.1809,0.6973,-0.1276});
CTransform* Transform960 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape961 = (CShape *)(m_pScene.createNode("Shape"));
Shape961->setUSE("HAnimJointShape");
Transform960->addChild(*Shape961);

Transform959->addChildren(*Transform960);

HAnimSegment958->addChildren(*Transform959);

CShape* Shape962 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet963 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet963->setVertexCount(new int[1]{2});
CCoordinate* Coordinate964 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate964->setPoint(new float[6]{0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794});
LineSet963->setCoord(*Coordinate964);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA965 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA965->setUSE("HAnimSegmentLineColorRGBA");
LineSet963->setColor(*ColorRGBA965);

Shape962->setGeometry(LineSet963);

HAnimSegment958->addChildren(*Shape962);

CShape* Shape966 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet967 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet967->setVertexCount(new int[1]{2});
CCoordinate* Coordinate968 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate968->setPoint(new float[6]{0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036});
LineSet967->setCoord(*Coordinate968);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA969 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA969->setUSE("HAnimSegmentLineColorRGBA");
LineSet967->setColor(*ColorRGBA969);

Shape966->setGeometry(LineSet967);

HAnimSegment958->addChildren(*Shape966);

HAnimJoint957->addChildren(*HAnimSegment958);

CHAnimJoint* HAnimJoint970 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint970->setName("l_carpometacarpal_4");
HAnimJoint970->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint970->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint970->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint970->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment971 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment971->setName("l_metacarpal_4");
HAnimSegment971->setDEF("hanim_l_metacarpal_4");
CTransform* Transform972 = (CTransform *)(m_pScene.createNode("Transform"));
Transform972->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CTransform* Transform973 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape974 = (CShape *)(m_pScene.createNode("Shape"));
Shape974->setUSE("HAnimJointShape");
Transform973->addChild(*Shape974);

Transform972->addChildren(*Transform973);

HAnimSegment971->addChildren(*Transform972);

CShape* Shape975 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet976 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet976->setVertexCount(new int[1]{2});
CCoordinate* Coordinate977 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate977->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet976->setCoord(*Coordinate977);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA978 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA978->setUSE("HAnimSegmentLineColorRGBA");
LineSet976->setColor(*ColorRGBA978);

Shape975->setGeometry(LineSet976);

HAnimSegment971->addChildren(*Shape975);

HAnimJoint970->addChildren(*HAnimSegment971);

CHAnimJoint* HAnimJoint979 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint979->setName("l_metacarpophalangeal_4");
HAnimJoint979->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint979->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint979->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint979->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment980 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment980->setName("l_carpal_proximal_phalanx_4");
HAnimSegment980->setDEF("hanim_l_carpal_proximal_phalanx_4");
CTransform* Transform981 = (CTransform *)(m_pScene.createNode("Transform"));
Transform981->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CTransform* Transform982 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape983 = (CShape *)(m_pScene.createNode("Shape"));
Shape983->setUSE("HAnimJointShape");
Transform982->addChild(*Shape983);

Transform981->addChildren(*Transform982);

HAnimSegment980->addChildren(*Transform981);

CShape* Shape984 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet985 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet985->setVertexCount(new int[1]{2});
CCoordinate* Coordinate986 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate986->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet985->setCoord(*Coordinate986);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA987 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA987->setUSE("HAnimSegmentLineColorRGBA");
LineSet985->setColor(*ColorRGBA987);

Shape984->setGeometry(LineSet985);

HAnimSegment980->addChildren(*Shape984);

HAnimJoint979->addChildren(*HAnimSegment980);

CHAnimJoint* HAnimJoint988 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint988->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint988->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint988->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint988->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint988->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment989 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment989->setName("l_carpal_middle_phalanx_4");
HAnimSegment989->setDEF("hanim_l_carpal_middle_phalanx_4");
CTransform* Transform990 = (CTransform *)(m_pScene.createNode("Transform"));
Transform990->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CTransform* Transform991 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape992 = (CShape *)(m_pScene.createNode("Shape"));
Shape992->setUSE("HAnimJointShape");
Transform991->addChild(*Shape992);

Transform990->addChildren(*Transform991);

HAnimSegment989->addChildren(*Transform990);

CShape* Shape993 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet994 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet994->setVertexCount(new int[1]{2});
CCoordinate* Coordinate995 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate995->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet994->setCoord(*Coordinate995);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA996 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA996->setUSE("HAnimSegmentLineColorRGBA");
LineSet994->setColor(*ColorRGBA996);

Shape993->setGeometry(LineSet994);

HAnimSegment989->addChildren(*Shape993);

HAnimJoint988->addChildren(*HAnimSegment989);

CHAnimJoint* HAnimJoint997 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint997->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint997->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint997->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint997->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint997->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint988->addChildren(*HAnimJoint997);

HAnimJoint979->addChildren(*HAnimJoint988);

HAnimJoint970->addChildren(*HAnimJoint979);

HAnimJoint957->addChildren(*HAnimJoint970);

CHAnimJoint* HAnimJoint998 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint998->setName("l_carpometacarpal_5");
HAnimJoint998->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint998->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint998->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint998->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment999 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment999->setName("l_metacarpal_5");
HAnimSegment999->setDEF("hanim_l_metacarpal_5");
CTransform* Transform1000 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1000->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CTransform* Transform1001 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1002 = (CShape *)(m_pScene.createNode("Shape"));
Shape1002->setUSE("HAnimJointShape");
Transform1001->addChild(*Shape1002);

Transform1000->addChildren(*Transform1001);

HAnimSegment999->addChildren(*Transform1000);

CShape* Shape1003 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1004 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1004->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1005 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1005->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1004->setCoord(*Coordinate1005);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1006 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1006->setUSE("HAnimSegmentLineColorRGBA");
LineSet1004->setColor(*ColorRGBA1006);

Shape1003->setGeometry(LineSet1004);

HAnimSegment999->addChildren(*Shape1003);

HAnimJoint998->addChildren(*HAnimSegment999);

CHAnimJoint* HAnimJoint1007 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1007->setName("l_metacarpophalangeal_5");
HAnimJoint1007->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint1007->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint1007->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1007->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1008 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1008->setName("l_carpal_proximal_phalanx_5");
HAnimSegment1008->setDEF("hanim_l_carpal_proximal_phalanx_5");
CTransform* Transform1009 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1009->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CTransform* Transform1010 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1011 = (CShape *)(m_pScene.createNode("Shape"));
Shape1011->setUSE("HAnimJointShape");
Transform1010->addChild(*Shape1011);

Transform1009->addChildren(*Transform1010);

HAnimSegment1008->addChildren(*Transform1009);

CShape* Shape1012 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1013 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1013->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1014 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1014->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1013->setCoord(*Coordinate1014);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1015 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1015->setUSE("HAnimSegmentLineColorRGBA");
LineSet1013->setColor(*ColorRGBA1015);

Shape1012->setGeometry(LineSet1013);

HAnimSegment1008->addChildren(*Shape1012);

HAnimJoint1007->addChildren(*HAnimSegment1008);

CHAnimJoint* HAnimJoint1016 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1016->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint1016->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint1016->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint1016->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1016->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1017 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1017->setName("l_carpal_middle_phalanx_5");
HAnimSegment1017->setDEF("hanim_l_carpal_middle_phalanx_5");
CTransform* Transform1018 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1018->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CTransform* Transform1019 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1020 = (CShape *)(m_pScene.createNode("Shape"));
Shape1020->setUSE("HAnimJointShape");
Transform1019->addChild(*Shape1020);

Transform1018->addChildren(*Transform1019);

HAnimSegment1017->addChildren(*Transform1018);

CShape* Shape1021 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1022 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1022->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1023 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1023->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1022->setCoord(*Coordinate1023);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1024 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1024->setUSE("HAnimSegmentLineColorRGBA");
LineSet1022->setColor(*ColorRGBA1024);

Shape1021->setGeometry(LineSet1022);

HAnimSegment1017->addChildren(*Shape1021);

HAnimJoint1016->addChildren(*HAnimSegment1017);

CHAnimJoint* HAnimJoint1025 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1025->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint1025->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint1025->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1025->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1025->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1016->addChildren(*HAnimJoint1025);

HAnimJoint1007->addChildren(*HAnimJoint1016);

HAnimJoint998->addChildren(*HAnimJoint1007);

HAnimJoint957->addChildren(*HAnimJoint998);

HAnimJoint834->addChildren(*HAnimJoint957);

HAnimJoint825->addChildren(*HAnimJoint834);

HAnimJoint816->addChildren(*HAnimJoint825);

HAnimJoint807->addChildren(*HAnimJoint816);

HAnimJoint798->addChildren(*HAnimJoint807);

HAnimJoint678->addChildren(*HAnimJoint798);

CHAnimJoint* HAnimJoint1026 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1026->setName("r_sternoclavicular");
HAnimJoint1026->setDEF("hanim_r_sternoclavicular");
HAnimJoint1026->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint1026->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1026->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1027 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1027->setName("r_clavicle");
HAnimSegment1027->setDEF("hanim_r_clavicle");
CTransform* Transform1028 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1028->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CTransform* Transform1029 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1030 = (CShape *)(m_pScene.createNode("Shape"));
Shape1030->setUSE("HAnimJointShape");
Transform1029->addChild(*Shape1030);

Transform1028->addChildren(*Transform1029);

HAnimSegment1027->addChildren(*Transform1028);

CShape* Shape1031 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1032 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1032->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1033 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1033->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet1032->setCoord(*Coordinate1033);

//from r_sternoclavicular to r_acromioclavicular vertices 2
CColorRGBA* ColorRGBA1034 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1034->setUSE("HAnimSegmentLineColorRGBA");
LineSet1032->setColor(*ColorRGBA1034);

Shape1031->setGeometry(LineSet1032);

HAnimSegment1027->addChildren(*Shape1031);

HAnimJoint1026->addChildren(*HAnimSegment1027);

CHAnimJoint* HAnimJoint1035 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1035->setName("r_acromioclavicular");
HAnimJoint1035->setDEF("hanim_r_acromioclavicular");
HAnimJoint1035->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint1035->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1035->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1036 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1036->setName("r_scapula");
HAnimSegment1036->setDEF("hanim_r_scapula");
CTransform* Transform1037 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1037->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
CTransform* Transform1038 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1039 = (CShape *)(m_pScene.createNode("Shape"));
Shape1039->setUSE("HAnimJointShape");
Transform1038->addChild(*Shape1039);

Transform1037->addChildren(*Transform1038);

HAnimSegment1036->addChildren(*Transform1037);

CShape* Shape1040 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1041 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1041->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1042 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1042->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet1041->setCoord(*Coordinate1042);

//from r_acromioclavicular to r_shoulder vertices 2
CColorRGBA* ColorRGBA1043 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1043->setUSE("HAnimSegmentLineColorRGBA");
LineSet1041->setColor(*ColorRGBA1043);

Shape1040->setGeometry(LineSet1041);

HAnimSegment1036->addChildren(*Shape1040);

HAnimJoint1035->addChildren(*HAnimSegment1036);

CHAnimJoint* HAnimJoint1044 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1044->setName("r_shoulder");
HAnimJoint1044->setDEF("hanim_r_shoulder");
HAnimJoint1044->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint1044->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1044->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1045 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1045->setName("r_upperarm");
HAnimSegment1045->setDEF("hanim_r_upperarm");
CTransform* Transform1046 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1046->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CTransform* Transform1047 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1048 = (CShape *)(m_pScene.createNode("Shape"));
Shape1048->setUSE("HAnimJointShape");
Transform1047->addChild(*Shape1048);

Transform1046->addChildren(*Transform1047);

HAnimSegment1045->addChildren(*Transform1046);

CShape* Shape1049 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1050 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1050->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1051 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1051->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet1050->setCoord(*Coordinate1051);

//from r_shoulder to r_elbow vertices 2
CColorRGBA* ColorRGBA1052 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1052->setUSE("HAnimSegmentLineColorRGBA");
LineSet1050->setColor(*ColorRGBA1052);

Shape1049->setGeometry(LineSet1050);

HAnimSegment1045->addChildren(*Shape1049);

HAnimJoint1044->addChildren(*HAnimSegment1045);

CHAnimJoint* HAnimJoint1053 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1053->setName("r_elbow");
HAnimJoint1053->setDEF("hanim_r_elbow");
HAnimJoint1053->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint1053->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1053->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1054 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1054->setName("r_forearm");
HAnimSegment1054->setDEF("hanim_r_forearm");
CTransform* Transform1055 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1055->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CTransform* Transform1056 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1057 = (CShape *)(m_pScene.createNode("Shape"));
Shape1057->setUSE("HAnimJointShape");
Transform1056->addChild(*Shape1057);

Transform1055->addChildren(*Transform1056);

HAnimSegment1054->addChildren(*Transform1055);

CShape* Shape1058 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1059 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1059->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1060 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1060->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet1059->setCoord(*Coordinate1060);

//from r_elbow to r_radiocarpal vertices 2
CColorRGBA* ColorRGBA1061 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1061->setUSE("HAnimSegmentLineColorRGBA");
LineSet1059->setColor(*ColorRGBA1061);

Shape1058->setGeometry(LineSet1059);

HAnimSegment1054->addChildren(*Shape1058);

HAnimJoint1053->addChildren(*HAnimSegment1054);

CHAnimJoint* HAnimJoint1062 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1062->setName("r_radiocarpal");
HAnimJoint1062->setDEF("hanim_r_radiocarpal");
HAnimJoint1062->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint1062->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1062->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1063 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1063->setName("r_carpal");
HAnimSegment1063->setDEF("hanim_r_carpal");
CTransform* Transform1064 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1064->setScale(new float[3]{0.2,0.2,0.2});
Transform1064->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform1064->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
CTransform* Transform1065 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1065->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
CShape* Shape1066 = (CShape *)(m_pScene.createNode("Shape"));
Shape1066->setUSE("HAnimJointShape");
Transform1065->addChild(*Shape1066);

Transform1064->addChildren(*Transform1065);

HAnimSegment1063->addChildren(*Transform1064);

CShape* Shape1067 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1068 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1068->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1069 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1069->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826});
LineSet1068->setCoord(*Coordinate1069);

//from r_radiocarpal to r_midcarpal_1 vertices 2
CColorRGBA* ColorRGBA1070 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1070->setUSE("HAnimSegmentLineColorRGBA");
LineSet1068->setColor(*ColorRGBA1070);

Shape1067->setGeometry(LineSet1068);

HAnimSegment1063->addChildren(*Shape1067);

CShape* Shape1071 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1072 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1072->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1073 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1073->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935});
LineSet1072->setCoord(*Coordinate1073);

//from r_radiocarpal to r_midcarpal_2 vertices 2
CColorRGBA* ColorRGBA1074 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1074->setUSE("HAnimSegmentLineColorRGBA");
LineSet1072->setColor(*ColorRGBA1074);

Shape1071->setGeometry(LineSet1072);

HAnimSegment1063->addChildren(*Shape1071);

CShape* Shape1075 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1076 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1076->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1077 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1077->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067});
LineSet1076->setCoord(*Coordinate1077);

//from r_radiocarpal to r_midcarpal_3 vertices 2
CColorRGBA* ColorRGBA1078 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1078->setUSE("HAnimSegmentLineColorRGBA");
LineSet1076->setColor(*ColorRGBA1078);

Shape1075->setGeometry(LineSet1076);

HAnimSegment1063->addChildren(*Shape1075);

CShape* Shape1079 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1080 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1080->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1081 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1081->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276});
LineSet1080->setCoord(*Coordinate1081);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
CColorRGBA* ColorRGBA1082 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1082->setUSE("HAnimSegmentLineColorRGBA");
LineSet1080->setColor(*ColorRGBA1082);

Shape1079->setGeometry(LineSet1080);

HAnimSegment1063->addChildren(*Shape1079);

HAnimJoint1062->addChildren(*HAnimSegment1063);

CHAnimJoint* HAnimJoint1083 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1083->setName("r_midcarpal_1");
HAnimJoint1083->setDEF("hanim_r_midcarpal_1");
HAnimJoint1083->setCenter(new float[3]{-0.1811,0.6975,-0.0826});
HAnimJoint1083->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1083->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1084 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1084->setName("r_trapezium");
HAnimSegment1084->setDEF("hanim_r_trapezium");
CTransform* Transform1085 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1085->setTranslation(new float[3]{-0.1811,0.6975,-0.0826});
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
Coordinate1090->setPoint(new float[6]{-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473});
LineSet1089->setCoord(*Coordinate1090);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
CColorRGBA* ColorRGBA1091 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1091->setUSE("HAnimSegmentLineColorRGBA");
LineSet1089->setColor(*ColorRGBA1091);

Shape1088->setGeometry(LineSet1089);

HAnimSegment1084->addChildren(*Shape1088);

HAnimJoint1083->addChildren(*HAnimSegment1084);

CHAnimJoint* HAnimJoint1092 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1092->setName("r_carpometacarpal_1");
HAnimJoint1092->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint1092->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint1092->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1092->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1093 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1093->setName("r_metacarpal_1");
HAnimSegment1093->setDEF("hanim_r_metacarpal_1");
CTransform* Transform1094 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1094->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
CTransform* Transform1095 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1096 = (CShape *)(m_pScene.createNode("Shape"));
Shape1096->setUSE("HAnimJointShape");
Transform1095->addChild(*Shape1096);

Transform1094->addChildren(*Transform1095);

HAnimSegment1093->addChildren(*Transform1094);

CShape* Shape1097 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1098 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1098->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1099 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1099->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet1098->setCoord(*Coordinate1099);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
CColorRGBA* ColorRGBA1100 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1100->setUSE("HAnimSegmentLineColorRGBA");
LineSet1098->setColor(*ColorRGBA1100);

Shape1097->setGeometry(LineSet1098);

HAnimSegment1093->addChildren(*Shape1097);

HAnimJoint1092->addChildren(*HAnimSegment1093);

CHAnimJoint* HAnimJoint1101 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1101->setName("r_metacarpophalangeal_1");
HAnimJoint1101->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint1101->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint1101->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1101->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1102 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1102->setName("r_carpal_proximal_phalanx_1");
HAnimSegment1102->setDEF("hanim_r_carpal_proximal_phalanx_1");
CTransform* Transform1103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1103->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
CTransform* Transform1104 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1105 = (CShape *)(m_pScene.createNode("Shape"));
Shape1105->setUSE("HAnimJointShape");
Transform1104->addChild(*Shape1105);

Transform1103->addChildren(*Transform1104);

HAnimSegment1102->addChildren(*Transform1103);

CShape* Shape1106 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1107 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1107->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1108 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1108->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet1107->setCoord(*Coordinate1108);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
CColorRGBA* ColorRGBA1109 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1109->setUSE("HAnimSegmentLineColorRGBA");
LineSet1107->setColor(*ColorRGBA1109);

Shape1106->setGeometry(LineSet1107);

HAnimSegment1102->addChildren(*Shape1106);

HAnimJoint1101->addChildren(*HAnimSegment1102);

CHAnimJoint* HAnimJoint1110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1110->setName("r_carpal_interphalangeal_1");
HAnimJoint1110->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1110->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1110->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1110->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1101->addChildren(*HAnimJoint1110);

HAnimJoint1092->addChildren(*HAnimJoint1101);

HAnimJoint1083->addChildren(*HAnimJoint1092);

HAnimJoint1062->addChildren(*HAnimJoint1083);

CHAnimJoint* HAnimJoint1111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1111->setName("r_midcarpal_2");
HAnimJoint1111->setDEF("hanim_r_midcarpal_2");
HAnimJoint1111->setCenter(new float[3]{-0.1811,0.6984,-0.0935});
HAnimJoint1111->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1111->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1112 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1112->setName("r_trapezoid");
HAnimSegment1112->setDEF("hanim_r_trapezoid");
CTransform* Transform1113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1113->setTranslation(new float[3]{-0.1811,0.6984,-0.0935});
CTransform* Transform1114 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1115 = (CShape *)(m_pScene.createNode("Shape"));
Shape1115->setUSE("HAnimJointShape");
Transform1114->addChild(*Shape1115);

Transform1113->addChildren(*Transform1114);

HAnimSegment1112->addChildren(*Transform1113);

CShape* Shape1116 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1117 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1117->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1118 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1118->setPoint(new float[6]{-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218});
LineSet1117->setCoord(*Coordinate1118);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
CColorRGBA* ColorRGBA1119 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1119->setUSE("HAnimSegmentLineColorRGBA");
LineSet1117->setColor(*ColorRGBA1119);

Shape1116->setGeometry(LineSet1117);

HAnimSegment1112->addChildren(*Shape1116);

HAnimJoint1111->addChildren(*HAnimSegment1112);

CHAnimJoint* HAnimJoint1120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1120->setName("r_carpometacarpal_2");
HAnimJoint1120->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1120->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint1120->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1120->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1121 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1121->setName("r_metacarpal_2");
HAnimSegment1121->setDEF("hanim_r_metacarpal_2");
CTransform* Transform1122 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1122->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CTransform* Transform1123 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1124 = (CShape *)(m_pScene.createNode("Shape"));
Shape1124->setUSE("HAnimJointShape");
Transform1123->addChild(*Shape1124);

Transform1122->addChildren(*Transform1123);

HAnimSegment1121->addChildren(*Transform1122);

CShape* Shape1125 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1126 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1126->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1127 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1127->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1126->setCoord(*Coordinate1127);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
CColorRGBA* ColorRGBA1128 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1128->setUSE("HAnimSegmentLineColorRGBA");
LineSet1126->setColor(*ColorRGBA1128);

Shape1125->setGeometry(LineSet1126);

HAnimSegment1121->addChildren(*Shape1125);

HAnimJoint1120->addChildren(*HAnimSegment1121);

CHAnimJoint* HAnimJoint1129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1129->setName("r_metacarpophalangeal_2");
HAnimJoint1129->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1129->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint1129->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1129->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1130 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1130->setName("r_carpal_proximal_phalanx_2");
HAnimSegment1130->setDEF("hanim_r_carpal_proximal_phalanx_2");
CTransform* Transform1131 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1131->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CTransform* Transform1132 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1133 = (CShape *)(m_pScene.createNode("Shape"));
Shape1133->setUSE("HAnimJointShape");
Transform1132->addChild(*Shape1133);

Transform1131->addChildren(*Transform1132);

HAnimSegment1130->addChildren(*Transform1131);

CShape* Shape1134 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1135 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1135->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1136 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1136->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1135->setCoord(*Coordinate1136);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1137 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1137->setUSE("HAnimSegmentLineColorRGBA");
LineSet1135->setColor(*ColorRGBA1137);

Shape1134->setGeometry(LineSet1135);

HAnimSegment1130->addChildren(*Shape1134);

HAnimJoint1129->addChildren(*HAnimSegment1130);

CHAnimJoint* HAnimJoint1138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1138->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1138->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1138->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint1138->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1138->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1139 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1139->setName("r_carpal_middle_phalanx_2");
HAnimSegment1139->setDEF("hanim_r_carpal_middle_phalanx_2");
CTransform* Transform1140 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1140->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CTransform* Transform1141 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1142 = (CShape *)(m_pScene.createNode("Shape"));
Shape1142->setUSE("HAnimJointShape");
Transform1141->addChild(*Shape1142);

Transform1140->addChildren(*Transform1141);

HAnimSegment1139->addChildren(*Transform1140);

CShape* Shape1143 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1144 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1144->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1145 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1145->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1144->setCoord(*Coordinate1145);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
CColorRGBA* ColorRGBA1146 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1146->setUSE("HAnimSegmentLineColorRGBA");
LineSet1144->setColor(*ColorRGBA1146);

Shape1143->setGeometry(LineSet1144);

HAnimSegment1139->addChildren(*Shape1143);

HAnimJoint1138->addChildren(*HAnimSegment1139);

CHAnimJoint* HAnimJoint1147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1147->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1147->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1147->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1147->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1147->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1138->addChildren(*HAnimJoint1147);

HAnimJoint1129->addChildren(*HAnimJoint1138);

HAnimJoint1120->addChildren(*HAnimJoint1129);

HAnimJoint1111->addChildren(*HAnimJoint1120);

HAnimJoint1062->addChildren(*HAnimJoint1111);

CHAnimJoint* HAnimJoint1148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1148->setName("r_midcarpal_3");
HAnimJoint1148->setDEF("hanim_r_midcarpal_3");
HAnimJoint1148->setCenter(new float[3]{-0.1809,0.7,-0.1067});
HAnimJoint1148->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1148->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1149 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1149->setName("r_capitate");
HAnimSegment1149->setDEF("hanim_r_capitate");
CTransform* Transform1150 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1150->setTranslation(new float[3]{-0.1809,0.7,-0.1067});
CTransform* Transform1151 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1152 = (CShape *)(m_pScene.createNode("Shape"));
Shape1152->setUSE("HAnimJointShape");
Transform1151->addChild(*Shape1152);

Transform1150->addChildren(*Transform1151);

HAnimSegment1149->addChildren(*Transform1150);

CShape* Shape1153 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1154 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1154->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1155 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1155->setPoint(new float[6]{-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468});
LineSet1154->setCoord(*Coordinate1155);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
CColorRGBA* ColorRGBA1156 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1156->setUSE("HAnimSegmentLineColorRGBA");
LineSet1154->setColor(*ColorRGBA1156);

Shape1153->setGeometry(LineSet1154);

HAnimSegment1149->addChildren(*Shape1153);

HAnimJoint1148->addChildren(*HAnimSegment1149);

CHAnimJoint* HAnimJoint1157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1157->setName("r_carpometacarpal_3");
HAnimJoint1157->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1157->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint1157->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1157->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1158 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1158->setName("r_metacarpal_3");
HAnimSegment1158->setDEF("hanim_r_metacarpal_3");
CTransform* Transform1159 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1159->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CTransform* Transform1160 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1161 = (CShape *)(m_pScene.createNode("Shape"));
Shape1161->setUSE("HAnimJointShape");
Transform1160->addChild(*Shape1161);

Transform1159->addChildren(*Transform1160);

HAnimSegment1158->addChildren(*Transform1159);

CShape* Shape1162 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1163 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1163->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1164 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1164->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1163->setCoord(*Coordinate1164);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
CColorRGBA* ColorRGBA1165 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1165->setUSE("HAnimSegmentLineColorRGBA");
LineSet1163->setColor(*ColorRGBA1165);

Shape1162->setGeometry(LineSet1163);

HAnimSegment1158->addChildren(*Shape1162);

HAnimJoint1157->addChildren(*HAnimSegment1158);

CHAnimJoint* HAnimJoint1166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1166->setName("r_metacarpophalangeal_3");
HAnimJoint1166->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1166->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint1166->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1166->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1167 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1167->setName("r_carpal_proximal_phalanx_3");
HAnimSegment1167->setDEF("hanim_r_carpal_proximal_phalanx_3");
CTransform* Transform1168 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1168->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CTransform* Transform1169 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1170 = (CShape *)(m_pScene.createNode("Shape"));
Shape1170->setUSE("HAnimJointShape");
Transform1169->addChild(*Shape1170);

Transform1168->addChildren(*Transform1169);

HAnimSegment1167->addChildren(*Transform1168);

CShape* Shape1171 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1172 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1172->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1173 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1173->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1172->setCoord(*Coordinate1173);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1174 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1174->setUSE("HAnimSegmentLineColorRGBA");
LineSet1172->setColor(*ColorRGBA1174);

Shape1171->setGeometry(LineSet1172);

HAnimSegment1167->addChildren(*Shape1171);

HAnimJoint1166->addChildren(*HAnimSegment1167);

CHAnimJoint* HAnimJoint1175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1175->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1175->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1175->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint1175->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1175->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1176 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1176->setName("r_carpal_middle_phalanx_3");
HAnimSegment1176->setDEF("hanim_r_carpal_middle_phalanx_3");
CTransform* Transform1177 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1177->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CTransform* Transform1178 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1179 = (CShape *)(m_pScene.createNode("Shape"));
Shape1179->setUSE("HAnimJointShape");
Transform1178->addChild(*Shape1179);

Transform1177->addChildren(*Transform1178);

HAnimSegment1176->addChildren(*Transform1177);

CShape* Shape1180 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1181 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1181->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1182 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1182->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1181->setCoord(*Coordinate1182);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
CColorRGBA* ColorRGBA1183 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1183->setUSE("HAnimSegmentLineColorRGBA");
LineSet1181->setColor(*ColorRGBA1183);

Shape1180->setGeometry(LineSet1181);

HAnimSegment1176->addChildren(*Shape1180);

HAnimJoint1175->addChildren(*HAnimSegment1176);

CHAnimJoint* HAnimJoint1184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1184->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1184->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1184->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1184->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1184->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1175->addChildren(*HAnimJoint1184);

HAnimJoint1166->addChildren(*HAnimJoint1175);

HAnimJoint1157->addChildren(*HAnimJoint1166);

HAnimJoint1148->addChildren(*HAnimJoint1157);

HAnimJoint1062->addChildren(*HAnimJoint1148);

CHAnimJoint* HAnimJoint1185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1185->setName("r_midcarpal_4_5");
HAnimJoint1185->setDEF("hanim_r_midcarpal_4_5");
HAnimJoint1185->setCenter(new float[3]{-0.1809,0.6973,-0.1276});
HAnimJoint1185->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1185->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1186 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1186->setName("r_hamate");
HAnimSegment1186->setDEF("hanim_r_hamate");
CTransform* Transform1187 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1187->setTranslation(new float[3]{-0.1809,0.6973,-0.1276});
CTransform* Transform1188 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1189 = (CShape *)(m_pScene.createNode("Shape"));
Shape1189->setUSE("HAnimJointShape");
Transform1188->addChild(*Shape1189);

Transform1187->addChildren(*Transform1188);

HAnimSegment1186->addChildren(*Transform1187);

CShape* Shape1190 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1191 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1191->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1192 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1192->setPoint(new float[6]{-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732});
LineSet1191->setCoord(*Coordinate1192);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
CColorRGBA* ColorRGBA1193 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1193->setUSE("HAnimSegmentLineColorRGBA");
LineSet1191->setColor(*ColorRGBA1193);

Shape1190->setGeometry(LineSet1191);

HAnimSegment1186->addChildren(*Shape1190);

CShape* Shape1194 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1195 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1195->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1196 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1196->setPoint(new float[6]{-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975});
LineSet1195->setCoord(*Coordinate1196);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
CColorRGBA* ColorRGBA1197 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1197->setUSE("HAnimSegmentLineColorRGBA");
LineSet1195->setColor(*ColorRGBA1197);

Shape1194->setGeometry(LineSet1195);

HAnimSegment1186->addChildren(*Shape1194);

HAnimJoint1185->addChildren(*HAnimSegment1186);

CHAnimJoint* HAnimJoint1198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1198->setName("r_carpometacarpal_4");
HAnimJoint1198->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1198->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint1198->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1198->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1199 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1199->setName("r_metacarpal_4");
HAnimSegment1199->setDEF("hanim_r_metacarpal_4");
CTransform* Transform1200 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1200->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
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
Coordinate1205->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1204->setCoord(*Coordinate1205);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
CColorRGBA* ColorRGBA1206 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1206->setUSE("HAnimSegmentLineColorRGBA");
LineSet1204->setColor(*ColorRGBA1206);

Shape1203->setGeometry(LineSet1204);

HAnimSegment1199->addChildren(*Shape1203);

HAnimJoint1198->addChildren(*HAnimSegment1199);

CHAnimJoint* HAnimJoint1207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1207->setName("r_metacarpophalangeal_4");
HAnimJoint1207->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1207->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint1207->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1207->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1208 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1208->setName("r_carpal_proximal_phalanx_4");
HAnimSegment1208->setDEF("hanim_r_carpal_proximal_phalanx_4");
CTransform* Transform1209 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1209->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
CTransform* Transform1210 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1211 = (CShape *)(m_pScene.createNode("Shape"));
Shape1211->setUSE("HAnimJointShape");
Transform1210->addChild(*Shape1211);

Transform1209->addChildren(*Transform1210);

HAnimSegment1208->addChildren(*Transform1209);

CShape* Shape1212 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1213 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1213->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1214 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1214->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1213->setCoord(*Coordinate1214);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1215 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1215->setUSE("HAnimSegmentLineColorRGBA");
LineSet1213->setColor(*ColorRGBA1215);

Shape1212->setGeometry(LineSet1213);

HAnimSegment1208->addChildren(*Shape1212);

HAnimJoint1207->addChildren(*HAnimSegment1208);

CHAnimJoint* HAnimJoint1216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1216->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1216->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1216->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint1216->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1216->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1217 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1217->setName("r_carpal_middle_phalanx_4");
HAnimSegment1217->setDEF("hanim_r_carpal_middle_phalanx_4");
CTransform* Transform1218 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1218->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CTransform* Transform1219 = (CTransform *)(m_pScene.createNode("Transform"));
//Empty Transform
CShape* Shape1220 = (CShape *)(m_pScene.createNode("Shape"));
Shape1220->setUSE("HAnimJointShape");
Transform1219->addChild(*Shape1220);

Transform1218->addChildren(*Transform1219);

HAnimSegment1217->addChildren(*Transform1218);

CShape* Shape1221 = (CShape *)(m_pScene.createNode("Shape"));
CLineSet* LineSet1222 = (CLineSet *)(m_pScene.createNode("LineSet"));
LineSet1222->setVertexCount(new int[1]{2});
CCoordinate* Coordinate1223 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1223->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1222->setCoord(*Coordinate1223);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
CColorRGBA* ColorRGBA1224 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1224->setUSE("HAnimSegmentLineColorRGBA");
LineSet1222->setColor(*ColorRGBA1224);

Shape1221->setGeometry(LineSet1222);

HAnimSegment1217->addChildren(*Shape1221);

HAnimJoint1216->addChildren(*HAnimSegment1217);

CHAnimJoint* HAnimJoint1225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1225->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1225->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1225->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1225->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1225->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1216->addChildren(*HAnimJoint1225);

HAnimJoint1207->addChildren(*HAnimJoint1216);

HAnimJoint1198->addChildren(*HAnimJoint1207);

HAnimJoint1185->addChildren(*HAnimJoint1198);

CHAnimJoint* HAnimJoint1226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1226->setName("r_carpometacarpal_5");
HAnimJoint1226->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1226->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint1226->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1226->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1227 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1227->setName("r_metacarpal_5");
HAnimSegment1227->setDEF("hanim_r_metacarpal_5");
CTransform* Transform1228 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1228->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
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
Coordinate1233->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1232->setCoord(*Coordinate1233);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
CColorRGBA* ColorRGBA1234 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1234->setUSE("HAnimSegmentLineColorRGBA");
LineSet1232->setColor(*ColorRGBA1234);

Shape1231->setGeometry(LineSet1232);

HAnimSegment1227->addChildren(*Shape1231);

HAnimJoint1226->addChildren(*HAnimSegment1227);

CHAnimJoint* HAnimJoint1235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1235->setName("r_metacarpophalangeal_5");
HAnimJoint1235->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1235->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint1235->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1235->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1236 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1236->setName("r_carpal_proximal_phalanx_5");
HAnimSegment1236->setDEF("hanim_r_carpal_proximal_phalanx_5");
CTransform* Transform1237 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1237->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
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
Coordinate1242->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1241->setCoord(*Coordinate1242);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1243 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1243->setUSE("HAnimSegmentLineColorRGBA");
LineSet1241->setColor(*ColorRGBA1243);

Shape1240->setGeometry(LineSet1241);

HAnimSegment1236->addChildren(*Shape1240);

HAnimJoint1235->addChildren(*HAnimSegment1236);

CHAnimJoint* HAnimJoint1244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1244->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1244->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint1244->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint1244->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1244->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1245->setName("r_carpal_middle_phalanx_5");
HAnimSegment1245->setDEF("hanim_r_carpal_middle_phalanx_5");
CTransform* Transform1246 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1246->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
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
Coordinate1251->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1250->setCoord(*Coordinate1251);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
CColorRGBA* ColorRGBA1252 = (CColorRGBA *)(m_pScene.createNode("ColorRGBA"));
ColorRGBA1252->setUSE("HAnimSegmentLineColorRGBA");
LineSet1250->setColor(*ColorRGBA1252);

Shape1249->setGeometry(LineSet1250);

HAnimSegment1245->addChildren(*Shape1249);

HAnimJoint1244->addChildren(*HAnimSegment1245);

CHAnimJoint* HAnimJoint1253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1253->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1253->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint1253->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1253->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1253->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1244->addChildren(*HAnimJoint1253);

HAnimJoint1235->addChildren(*HAnimJoint1244);

HAnimJoint1226->addChildren(*HAnimJoint1235);

HAnimJoint1185->addChildren(*HAnimJoint1226);

HAnimJoint1062->addChildren(*HAnimJoint1185);

HAnimJoint1053->addChildren(*HAnimJoint1062);

HAnimJoint1044->addChildren(*HAnimJoint1053);

HAnimJoint1035->addChildren(*HAnimJoint1044);

HAnimJoint1026->addChildren(*HAnimJoint1035);

HAnimJoint678->addChildren(*HAnimJoint1026);

HAnimJoint669->addChildren(*HAnimJoint678);

HAnimJoint660->addChildren(*HAnimJoint669);

HAnimJoint651->addChildren(*HAnimJoint660);

HAnimJoint642->addChildren(*HAnimJoint651);

HAnimJoint633->addChildren(*HAnimJoint642);

HAnimJoint624->addChildren(*HAnimJoint633);

HAnimJoint615->addChildren(*HAnimJoint624);

HAnimJoint606->addChildren(*HAnimJoint615);

HAnimJoint597->addChildren(*HAnimJoint606);

HAnimJoint588->addChildren(*HAnimJoint597);

HAnimJoint579->addChildren(*HAnimJoint588);

HAnimJoint570->addChildren(*HAnimJoint579);

HAnimJoint561->addChildren(*HAnimJoint570);

HAnimJoint552->addChildren(*HAnimJoint561);

HAnimJoint543->addChildren(*HAnimJoint552);

HAnimJoint534->addChildren(*HAnimJoint543);

HAnimJoint52->addChildren(*HAnimJoint534);

HAnimHumanoid43->setSkeleton(*HAnimJoint52);

CHAnimJoint* HAnimJoint1254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1254->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(*HAnimJoint1254);

CHAnimJoint* HAnimJoint1255 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1255->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(*HAnimJoint1255);

CHAnimJoint* HAnimJoint1256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1256->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1256);

CHAnimJoint* HAnimJoint1257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1257->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1257);

CHAnimJoint* HAnimJoint1258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1258->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1258);

CHAnimJoint* HAnimJoint1259 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1259->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1259);

CHAnimJoint* HAnimJoint1260 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1260->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid43->addJoints(*HAnimJoint1260);

CHAnimJoint* HAnimJoint1261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1261->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1261);

CHAnimJoint* HAnimJoint1262 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1262->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1262);

CHAnimJoint* HAnimJoint1263 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1263->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1263);

CHAnimJoint* HAnimJoint1264 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1264->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid43->addJoints(*HAnimJoint1264);

CHAnimJoint* HAnimJoint1265 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1265->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1265);

CHAnimJoint* HAnimJoint1266 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1266->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1266);

CHAnimJoint* HAnimJoint1267 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1267->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1267);

CHAnimJoint* HAnimJoint1268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1268->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1268);

CHAnimJoint* HAnimJoint1269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1269->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid43->addJoints(*HAnimJoint1269);

CHAnimJoint* HAnimJoint1270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1270->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1270);

CHAnimJoint* HAnimJoint1271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1271->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1271);

CHAnimJoint* HAnimJoint1272 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1272->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1272);

CHAnimJoint* HAnimJoint1273 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1273->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1273);

CHAnimJoint* HAnimJoint1274 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1274->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid43->addJoints(*HAnimJoint1274);

CHAnimJoint* HAnimJoint1275 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1275->setUSE("hanim_l_transversetarsal");
HAnimHumanoid43->addJoints(*HAnimJoint1275);

CHAnimJoint* HAnimJoint1276 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1276->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1276);

CHAnimJoint* HAnimJoint1277 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1277->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1277);

CHAnimJoint* HAnimJoint1278 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1278->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1278);

CHAnimJoint* HAnimJoint1279 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1279->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1279);

CHAnimJoint* HAnimJoint1280 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1280->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1280);

CHAnimJoint* HAnimJoint1281 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1281->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1281);

CHAnimJoint* HAnimJoint1282 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1282->setUSE("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1282);

CHAnimJoint* HAnimJoint1283 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1283->setUSE("hanim_l_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1283);

CHAnimJoint* HAnimJoint1284 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1284->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(*HAnimJoint1284);

CHAnimJoint* HAnimJoint1285 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1285->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(*HAnimJoint1285);

CHAnimJoint* HAnimJoint1286 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1286->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(*HAnimJoint1286);

CHAnimJoint* HAnimJoint1287 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1287->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1287);

CHAnimJoint* HAnimJoint1288 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1288->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid43->addJoints(*HAnimJoint1288);

CHAnimJoint* HAnimJoint1289 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1289->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1289);

CHAnimJoint* HAnimJoint1290 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1290->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1290);

CHAnimJoint* HAnimJoint1291 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1291->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1291);

CHAnimJoint* HAnimJoint1292 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1292->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid43->addJoints(*HAnimJoint1292);

CHAnimJoint* HAnimJoint1293 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1293->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1293);

CHAnimJoint* HAnimJoint1294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1294->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1294);

CHAnimJoint* HAnimJoint1295 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1295->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1295);

CHAnimJoint* HAnimJoint1296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1296->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1296);

CHAnimJoint* HAnimJoint1297 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1297->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid43->addJoints(*HAnimJoint1297);

CHAnimJoint* HAnimJoint1298 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1298->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1298);

CHAnimJoint* HAnimJoint1299 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1299->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1299);

CHAnimJoint* HAnimJoint1300 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1300->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1300);

CHAnimJoint* HAnimJoint1301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1301->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1301);

CHAnimJoint* HAnimJoint1302 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1302->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid43->addJoints(*HAnimJoint1302);

CHAnimJoint* HAnimJoint1303 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1303->setUSE("hanim_r_transversetarsal");
HAnimHumanoid43->addJoints(*HAnimJoint1303);

CHAnimJoint* HAnimJoint1304 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1304->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1304);

CHAnimJoint* HAnimJoint1305 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1305->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1305);

CHAnimJoint* HAnimJoint1306 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1306->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1306);

CHAnimJoint* HAnimJoint1307 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1307->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1307);

CHAnimJoint* HAnimJoint1308 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1308->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1308);

CHAnimJoint* HAnimJoint1309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1309->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1309);

CHAnimJoint* HAnimJoint1310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1310->setUSE("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1310);

CHAnimJoint* HAnimJoint1311 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1311->setUSE("hanim_r_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1311);

CHAnimJoint* HAnimJoint1312 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1312->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(*HAnimJoint1312);

CHAnimJoint* HAnimJoint1313 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1313->setUSE("hanim_vl4");
HAnimHumanoid43->addJoints(*HAnimJoint1313);

CHAnimJoint* HAnimJoint1314 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1314->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(*HAnimJoint1314);

CHAnimJoint* HAnimJoint1315 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1315->setUSE("hanim_vl2");
HAnimHumanoid43->addJoints(*HAnimJoint1315);

CHAnimJoint* HAnimJoint1316 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1316->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(*HAnimJoint1316);

CHAnimJoint* HAnimJoint1317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1317->setUSE("hanim_vt12");
HAnimHumanoid43->addJoints(*HAnimJoint1317);

CHAnimJoint* HAnimJoint1318 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1318->setUSE("hanim_vt11");
HAnimHumanoid43->addJoints(*HAnimJoint1318);

CHAnimJoint* HAnimJoint1319 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1319->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(*HAnimJoint1319);

CHAnimJoint* HAnimJoint1320 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1320->setUSE("hanim_vt9");
HAnimHumanoid43->addJoints(*HAnimJoint1320);

CHAnimJoint* HAnimJoint1321 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1321->setUSE("hanim_vt8");
HAnimHumanoid43->addJoints(*HAnimJoint1321);

CHAnimJoint* HAnimJoint1322 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1322->setUSE("hanim_vt7");
HAnimHumanoid43->addJoints(*HAnimJoint1322);

CHAnimJoint* HAnimJoint1323 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1323->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(*HAnimJoint1323);

CHAnimJoint* HAnimJoint1324 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1324->setUSE("hanim_vt5");
HAnimHumanoid43->addJoints(*HAnimJoint1324);

CHAnimJoint* HAnimJoint1325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1325->setUSE("hanim_vt4");
HAnimHumanoid43->addJoints(*HAnimJoint1325);

CHAnimJoint* HAnimJoint1326 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1326->setUSE("hanim_vt3");
HAnimHumanoid43->addJoints(*HAnimJoint1326);

CHAnimJoint* HAnimJoint1327 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1327->setUSE("hanim_vt2");
HAnimHumanoid43->addJoints(*HAnimJoint1327);

CHAnimJoint* HAnimJoint1328 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1328->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(*HAnimJoint1328);

CHAnimJoint* HAnimJoint1329 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1329->setUSE("hanim_vc7");
HAnimHumanoid43->addJoints(*HAnimJoint1329);

CHAnimJoint* HAnimJoint1330 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1330->setUSE("hanim_vc6");
HAnimHumanoid43->addJoints(*HAnimJoint1330);

CHAnimJoint* HAnimJoint1331 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1331->setUSE("hanim_vc5");
HAnimHumanoid43->addJoints(*HAnimJoint1331);

CHAnimJoint* HAnimJoint1332 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1332->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(*HAnimJoint1332);

CHAnimJoint* HAnimJoint1333 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1333->setUSE("hanim_vc3");
HAnimHumanoid43->addJoints(*HAnimJoint1333);

CHAnimJoint* HAnimJoint1334 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1334->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(*HAnimJoint1334);

CHAnimJoint* HAnimJoint1335 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1335->setUSE("hanim_vc1");
HAnimHumanoid43->addJoints(*HAnimJoint1335);

CHAnimJoint* HAnimJoint1336 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1336->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(*HAnimJoint1336);

CHAnimJoint* HAnimJoint1337 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1337->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1337);

CHAnimJoint* HAnimJoint1338 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1338->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1338);

CHAnimJoint* HAnimJoint1339 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1339->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1339);

CHAnimJoint* HAnimJoint1340 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1340->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1340);

CHAnimJoint* HAnimJoint1341 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1341->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1341);

CHAnimJoint* HAnimJoint1342 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1342->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid43->addJoints(*HAnimJoint1342);

CHAnimJoint* HAnimJoint1343 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1343->setUSE("hanim_temporomandibular");
HAnimHumanoid43->addJoints(*HAnimJoint1343);

CHAnimJoint* HAnimJoint1344 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1344->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1344);

CHAnimJoint* HAnimJoint1345 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1345->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1345);

CHAnimJoint* HAnimJoint1346 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1346->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1346);

CHAnimJoint* HAnimJoint1347 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1347->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1347);

CHAnimJoint* HAnimJoint1348 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1348->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1348);

CHAnimJoint* HAnimJoint1349 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1349->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1349);

CHAnimJoint* HAnimJoint1350 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1350->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1350);

CHAnimJoint* HAnimJoint1351 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1351->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1351);

CHAnimJoint* HAnimJoint1352 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1352->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1352);

CHAnimJoint* HAnimJoint1353 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1353->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1353);

CHAnimJoint* HAnimJoint1354 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1354->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1354);

CHAnimJoint* HAnimJoint1355 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1355->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1355);

CHAnimJoint* HAnimJoint1356 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1356->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1356);

CHAnimJoint* HAnimJoint1357 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1357->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1357);

CHAnimJoint* HAnimJoint1358 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1358->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1358);

CHAnimJoint* HAnimJoint1359 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1359->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1359);

CHAnimJoint* HAnimJoint1360 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1360->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1360);

CHAnimJoint* HAnimJoint1361 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1361->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1361);

CHAnimJoint* HAnimJoint1362 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1362->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1362);

CHAnimJoint* HAnimJoint1363 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1363->setUSE("hanim_l_midcarpal_4_5");
HAnimHumanoid43->addJoints(*HAnimJoint1363);

CHAnimJoint* HAnimJoint1364 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1364->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1364);

CHAnimJoint* HAnimJoint1365 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1365->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1365);

CHAnimJoint* HAnimJoint1366 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1366->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1366);

CHAnimJoint* HAnimJoint1367 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1367->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1367);

CHAnimJoint* HAnimJoint1368 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1368->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1368);

CHAnimJoint* HAnimJoint1369 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1369->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1369);

CHAnimJoint* HAnimJoint1370 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1370->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1370);

CHAnimJoint* HAnimJoint1371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1371->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1371);

CHAnimJoint* HAnimJoint1372 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1372->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1372);

CHAnimJoint* HAnimJoint1373 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1373->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(*HAnimJoint1373);

CHAnimJoint* HAnimJoint1374 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1374->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(*HAnimJoint1374);

CHAnimJoint* HAnimJoint1375 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1375->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(*HAnimJoint1375);

CHAnimJoint* HAnimJoint1376 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1376->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(*HAnimJoint1376);

CHAnimJoint* HAnimJoint1377 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1377->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1377);

CHAnimJoint* HAnimJoint1378 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1378->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1378);

CHAnimJoint* HAnimJoint1379 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1379->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1379);

CHAnimJoint* HAnimJoint1380 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1380->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(*HAnimJoint1380);

CHAnimJoint* HAnimJoint1381 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1381->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1381);

CHAnimJoint* HAnimJoint1382 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1382->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1382);

CHAnimJoint* HAnimJoint1383 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1383->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1383);

CHAnimJoint* HAnimJoint1384 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1384->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1384);

CHAnimJoint* HAnimJoint1385 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1385->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(*HAnimJoint1385);

CHAnimJoint* HAnimJoint1386 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1386->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1386);

CHAnimJoint* HAnimJoint1387 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1387->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1387);

CHAnimJoint* HAnimJoint1388 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1388->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1388);

CHAnimJoint* HAnimJoint1389 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1389->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1389);

CHAnimJoint* HAnimJoint1390 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1390->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(*HAnimJoint1390);

CHAnimJoint* HAnimJoint1391 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1391->setUSE("hanim_r_midcarpal_4_5");
HAnimHumanoid43->addJoints(*HAnimJoint1391);

CHAnimJoint* HAnimJoint1392 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1392->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1392);

CHAnimJoint* HAnimJoint1393 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1393->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1393);

CHAnimJoint* HAnimJoint1394 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1394->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1394);

CHAnimJoint* HAnimJoint1395 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1395->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(*HAnimJoint1395);

CHAnimJoint* HAnimJoint1396 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1396->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1396);

CHAnimJoint* HAnimJoint1397 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1397->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1397);

CHAnimJoint* HAnimJoint1398 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1398->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1398);

CHAnimJoint* HAnimJoint1399 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1399->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(*HAnimJoint1399);

CHAnimSegment* HAnimSegment1400 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1400->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(*HAnimSegment1400);

CHAnimSegment* HAnimSegment1401 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1401->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(*HAnimSegment1401);

CHAnimSegment* HAnimSegment1402 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1402->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1402);

CHAnimSegment* HAnimSegment1403 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1403->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1403);

CHAnimSegment* HAnimSegment1404 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1404->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1404);

CHAnimSegment* HAnimSegment1405 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1405->setUSE("hanim_l_navicular");
HAnimHumanoid43->setSegments(*HAnimSegment1405);

CHAnimSegment* HAnimSegment1406 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1406->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid43->setSegments(*HAnimSegment1406);

CHAnimSegment* HAnimSegment1407 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1407->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1407);

CHAnimSegment* HAnimSegment1408 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1408->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1408);

CHAnimSegment* HAnimSegment1409 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1409->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid43->setSegments(*HAnimSegment1409);

CHAnimSegment* HAnimSegment1410 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1410->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1410);

CHAnimSegment* HAnimSegment1411 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1411->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1411);

CHAnimSegment* HAnimSegment1412 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1412->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1412);

CHAnimSegment* HAnimSegment1413 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1413->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid43->setSegments(*HAnimSegment1413);

CHAnimSegment* HAnimSegment1414 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1414->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1414);

CHAnimSegment* HAnimSegment1415 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1415->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1415);

CHAnimSegment* HAnimSegment1416 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1416->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1416);

CHAnimSegment* HAnimSegment1417 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1417->setUSE("hanim_l_calcaneus");
HAnimHumanoid43->setSegments(*HAnimSegment1417);

CHAnimSegment* HAnimSegment1418 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1418->setUSE("hanim_l_cuboid");
HAnimHumanoid43->setSegments(*HAnimSegment1418);

CHAnimSegment* HAnimSegment1419 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1419->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1419);

CHAnimSegment* HAnimSegment1420 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1420->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1420);

CHAnimSegment* HAnimSegment1421 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1421->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1421);

CHAnimSegment* HAnimSegment1422 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1422->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1422);

CHAnimSegment* HAnimSegment1423 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1423->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1423);

CHAnimSegment* HAnimSegment1424 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1424->setUSE("hanim_l_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1424);

CHAnimSegment* HAnimSegment1425 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1425->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(*HAnimSegment1425);

CHAnimSegment* HAnimSegment1426 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1426->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(*HAnimSegment1426);

CHAnimSegment* HAnimSegment1427 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1427->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(*HAnimSegment1427);

CHAnimSegment* HAnimSegment1428 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1428->setUSE("hanim_r_navicular");
HAnimHumanoid43->setSegments(*HAnimSegment1428);

CHAnimSegment* HAnimSegment1429 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1429->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid43->setSegments(*HAnimSegment1429);

CHAnimSegment* HAnimSegment1430 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1430->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1430);

CHAnimSegment* HAnimSegment1431 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1431->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1431);

CHAnimSegment* HAnimSegment1432 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1432->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid43->setSegments(*HAnimSegment1432);

CHAnimSegment* HAnimSegment1433 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1433->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1433);

CHAnimSegment* HAnimSegment1434 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1434->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1434);

CHAnimSegment* HAnimSegment1435 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1435->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1435);

CHAnimSegment* HAnimSegment1436 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1436->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid43->setSegments(*HAnimSegment1436);

CHAnimSegment* HAnimSegment1437 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1437->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1437);

CHAnimSegment* HAnimSegment1438 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1438->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1438);

CHAnimSegment* HAnimSegment1439 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1439->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1439);

CHAnimSegment* HAnimSegment1440 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1440->setUSE("hanim_r_calcaneus");
HAnimHumanoid43->setSegments(*HAnimSegment1440);

CHAnimSegment* HAnimSegment1441 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1441->setUSE("hanim_r_cuboid");
HAnimHumanoid43->setSegments(*HAnimSegment1441);

CHAnimSegment* HAnimSegment1442 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1442->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1442);

CHAnimSegment* HAnimSegment1443 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1443->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1443);

CHAnimSegment* HAnimSegment1444 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1444->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1444);

CHAnimSegment* HAnimSegment1445 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1445->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1445);

CHAnimSegment* HAnimSegment1446 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1446->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1446);

CHAnimSegment* HAnimSegment1447 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1447->setUSE("hanim_r_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1447);

CHAnimSegment* HAnimSegment1448 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1448->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(*HAnimSegment1448);

CHAnimSegment* HAnimSegment1449 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1449->setUSE("hanim_l4");
HAnimHumanoid43->setSegments(*HAnimSegment1449);

CHAnimSegment* HAnimSegment1450 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1450->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(*HAnimSegment1450);

CHAnimSegment* HAnimSegment1451 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1451->setUSE("hanim_l2");
HAnimHumanoid43->setSegments(*HAnimSegment1451);

CHAnimSegment* HAnimSegment1452 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1452->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(*HAnimSegment1452);

CHAnimSegment* HAnimSegment1453 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1453->setUSE("hanim_t12");
HAnimHumanoid43->setSegments(*HAnimSegment1453);

CHAnimSegment* HAnimSegment1454 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1454->setUSE("hanim_t11");
HAnimHumanoid43->setSegments(*HAnimSegment1454);

CHAnimSegment* HAnimSegment1455 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1455->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(*HAnimSegment1455);

CHAnimSegment* HAnimSegment1456 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1456->setUSE("hanim_t9");
HAnimHumanoid43->setSegments(*HAnimSegment1456);

CHAnimSegment* HAnimSegment1457 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1457->setUSE("hanim_t8");
HAnimHumanoid43->setSegments(*HAnimSegment1457);

CHAnimSegment* HAnimSegment1458 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1458->setUSE("hanim_t7");
HAnimHumanoid43->setSegments(*HAnimSegment1458);

CHAnimSegment* HAnimSegment1459 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1459->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(*HAnimSegment1459);

CHAnimSegment* HAnimSegment1460 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1460->setUSE("hanim_t5");
HAnimHumanoid43->setSegments(*HAnimSegment1460);

CHAnimSegment* HAnimSegment1461 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1461->setUSE("hanim_t4");
HAnimHumanoid43->setSegments(*HAnimSegment1461);

CHAnimSegment* HAnimSegment1462 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1462->setUSE("hanim_t3");
HAnimHumanoid43->setSegments(*HAnimSegment1462);

CHAnimSegment* HAnimSegment1463 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1463->setUSE("hanim_t2");
HAnimHumanoid43->setSegments(*HAnimSegment1463);

CHAnimSegment* HAnimSegment1464 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1464->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(*HAnimSegment1464);

CHAnimSegment* HAnimSegment1465 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1465->setUSE("hanim_c7");
HAnimHumanoid43->setSegments(*HAnimSegment1465);

CHAnimSegment* HAnimSegment1466 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1466->setUSE("hanim_c6");
HAnimHumanoid43->setSegments(*HAnimSegment1466);

CHAnimSegment* HAnimSegment1467 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1467->setUSE("hanim_c5");
HAnimHumanoid43->setSegments(*HAnimSegment1467);

CHAnimSegment* HAnimSegment1468 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1468->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(*HAnimSegment1468);

CHAnimSegment* HAnimSegment1469 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1469->setUSE("hanim_c3");
HAnimHumanoid43->setSegments(*HAnimSegment1469);

CHAnimSegment* HAnimSegment1470 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1470->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(*HAnimSegment1470);

CHAnimSegment* HAnimSegment1471 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1471->setUSE("hanim_c1");
HAnimHumanoid43->setSegments(*HAnimSegment1471);

CHAnimSegment* HAnimSegment1472 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1472->setUSE("hanim_skull");
HAnimHumanoid43->setSegments(*HAnimSegment1472);

CHAnimSegment* HAnimSegment1473 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1473->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1473);

CHAnimSegment* HAnimSegment1474 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1474->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1474);

CHAnimSegment* HAnimSegment1475 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1475->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1475);

CHAnimSegment* HAnimSegment1476 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1476->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1476);

CHAnimSegment* HAnimSegment1477 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1477->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1477);

CHAnimSegment* HAnimSegment1478 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1478->setUSE("hanim_l_trapezium");
HAnimHumanoid43->setSegments(*HAnimSegment1478);

CHAnimSegment* HAnimSegment1479 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1479->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1479);

CHAnimSegment* HAnimSegment1480 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1480->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1480);

CHAnimSegment* HAnimSegment1481 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1481->setUSE("hanim_l_trapezoid");
HAnimHumanoid43->setSegments(*HAnimSegment1481);

CHAnimSegment* HAnimSegment1482 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1482->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1482);

CHAnimSegment* HAnimSegment1483 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1483->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1483);

CHAnimSegment* HAnimSegment1484 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1484->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1484);

CHAnimSegment* HAnimSegment1485 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1485->setUSE("hanim_l_capitate");
HAnimHumanoid43->setSegments(*HAnimSegment1485);

CHAnimSegment* HAnimSegment1486 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1486->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1486);

CHAnimSegment* HAnimSegment1487 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1487->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1487);

CHAnimSegment* HAnimSegment1488 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1488->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1488);

CHAnimSegment* HAnimSegment1489 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1489->setUSE("hanim_l_hamate");
HAnimHumanoid43->setSegments(*HAnimSegment1489);

CHAnimSegment* HAnimSegment1490 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1490->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1490);

CHAnimSegment* HAnimSegment1491 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1491->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1491);

CHAnimSegment* HAnimSegment1492 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1492->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1492);

CHAnimSegment* HAnimSegment1493 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1493->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1493);

CHAnimSegment* HAnimSegment1494 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1494->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1494);

CHAnimSegment* HAnimSegment1495 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1495->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1495);

CHAnimSegment* HAnimSegment1496 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1496->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(*HAnimSegment1496);

CHAnimSegment* HAnimSegment1497 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1497->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(*HAnimSegment1497);

CHAnimSegment* HAnimSegment1498 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1498->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(*HAnimSegment1498);

CHAnimSegment* HAnimSegment1499 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1499->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(*HAnimSegment1499);

CHAnimSegment* HAnimSegment1500 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1500->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(*HAnimSegment1500);

CHAnimSegment* HAnimSegment1501 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1501->setUSE("hanim_r_trapezium");
HAnimHumanoid43->setSegments(*HAnimSegment1501);

CHAnimSegment* HAnimSegment1502 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1502->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(*HAnimSegment1502);

CHAnimSegment* HAnimSegment1503 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1503->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(*HAnimSegment1503);

CHAnimSegment* HAnimSegment1504 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1504->setUSE("hanim_r_trapezoid");
HAnimHumanoid43->setSegments(*HAnimSegment1504);

CHAnimSegment* HAnimSegment1505 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1505->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(*HAnimSegment1505);

CHAnimSegment* HAnimSegment1506 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1506->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1506);

CHAnimSegment* HAnimSegment1507 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1507->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(*HAnimSegment1507);

CHAnimSegment* HAnimSegment1508 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1508->setUSE("hanim_r_capitate");
HAnimHumanoid43->setSegments(*HAnimSegment1508);

CHAnimSegment* HAnimSegment1509 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1509->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(*HAnimSegment1509);

CHAnimSegment* HAnimSegment1510 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1510->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1510);

CHAnimSegment* HAnimSegment1511 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1511->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(*HAnimSegment1511);

CHAnimSegment* HAnimSegment1512 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1512->setUSE("hanim_r_hamate");
HAnimHumanoid43->setSegments(*HAnimSegment1512);

CHAnimSegment* HAnimSegment1513 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1513->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(*HAnimSegment1513);

CHAnimSegment* HAnimSegment1514 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1514->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1514);

CHAnimSegment* HAnimSegment1515 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1515->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(*HAnimSegment1515);

CHAnimSegment* HAnimSegment1516 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1516->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(*HAnimSegment1516);

CHAnimSegment* HAnimSegment1517 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1517->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1517);

CHAnimSegment* HAnimSegment1518 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1518->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(*HAnimSegment1518);

group->addChildren(*HAnimHumanoid43);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
