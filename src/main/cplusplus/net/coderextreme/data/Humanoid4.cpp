#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
MFInt32 MFInt320 = MFInt32();
MFInt320.setValue(3, new int32_t[3]{0, 1, 2});
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
component* component2 = new component();
component2->setName(CString("HAnim"));
component2->setLevel(1);
head1->addChild(component2);

meta* meta3 = new meta();
meta3->setName(CString("title"));
meta3->setContent(CString("Humanoid4.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("identifier"));
meta4->setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4.x3d"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("description"));
meta5->setContent(CString("An attempt at a standard LOA-4 skeleton"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("generator"));
meta6->setContent(CString("h2.pl"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("modified"));
meta7->setContent(CString("14 Jan 2023"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("creator"));
meta8->setContent(CString("John Carlson"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("created"));
meta9->setContent(CString("9 November 2020"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("license"));
meta10->setContent(CString("../license.html"));
head1->addMeta(meta10);

X3D0->setHead(head1);

Scene* Scene11 = new Scene();
Transform* Transform12 = new Transform();
//DEF for markerfor XYZ axes
Shape* Shape13 = new Shape();
Shape13->setDEF(CString("AxisLinesShape"));
//RGB lines showing XYZ axes
IndexedLineSet* IndexedLineSet14 = new IndexedLineSet();
IndexedLineSet14->setColorIndex(MFInt320);
IndexedLineSet14->setColorPerVertex(False);
IndexedLineSet14->setCoordIndex(new int32_t[9]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate* Coordinate15 = new Coordinate();
Coordinate15->setPoint(new float[12]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1}, 12);
IndexedLineSet14->addChild(Coordinate15);

CColor* Color16 = new CColor();
Color16->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1}, 9);
IndexedLineSet14->addChild(Color16);

Shape13->setGeometry(IndexedLineSet14);

Transform12->addChild(Shape13);

Scene11->addChild(Transform12);

Group* Group17 = new Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform* Transform18 = new Transform();
Transform* Transform19 = new Transform();
Transform19->setTranslation(new float[3]{0,2,0});
Shape* Shape20 = new Shape();
Shape20->setDEF(CString("HAnimRootShape"));
Sphere* Sphere21 = new Sphere();
Sphere21->setRadius(0.02);
Shape20->setGeometry(Sphere21);

Appearance* Appearance22 = new Appearance();
Material* Material23 = new Material();
Material23->setDEF(CString("HAnimRootMaterial"));
Material23->setDiffuseColor(new float[3]{0.8,0,0});
Material23->setTransparency(0.3);
Appearance22->addChild(Material23);

Shape20->addChild(Appearance22);

Transform19->addChild(Shape20);

Transform18->addChild(Transform19);

Transform* Transform24 = new Transform();
Transform24->setTranslation(new float[3]{0,2.1,0});
Shape* Shape25 = new Shape();
Shape25->setDEF(CString("HAnimJointShape"));
Sphere* Sphere26 = new Sphere();
Sphere26->setRadius(0.02);
Shape25->setGeometry(Sphere26);

Appearance* Appearance27 = new Appearance();
Material* Material28 = new Material();
Material28->setDEF(CString("HAnimJointMaterial"));
Material28->setDiffuseColor(new float[3]{0,0,0.8});
Material28->setTransparency(0.3);
Appearance27->addChild(Material28);

Shape25->addChild(Appearance27);

Transform24->addChild(Shape25);

Transform18->addChild(Transform24);

Transform* Transform29 = new Transform();
Transform29->setTranslation(new float[3]{0,2.05,0});
Shape* Shape30 = new Shape();
Shape30->setDEF(CString("HAnimSegmentLine"));
LineSet* LineSet31 = new LineSet();
LineSet31->setVertexCount(new int32_t[1]{2}, 1);
ColorRGBA* ColorRGBA32 = new ColorRGBA();
ColorRGBA32->setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA32->setColor(new float[8]{1,1,0,1,1,1,0,0.1}, 8);
LineSet31->addChild(ColorRGBA32);

Coordinate* Coordinate33 = new Coordinate();
Coordinate33->setPoint(new float[6]{-0.05,0,0,0.05,0,0}, 6);
LineSet31->addChild(Coordinate33);

Shape30->setGeometry(LineSet31);

Transform29->addChild(Shape30);

Transform18->addChild(Transform29);

Transform* Transform34 = new Transform();
Transform34->setTranslation(new float[3]{0,2.1,0});
Shape* Shape35 = new Shape();
Shape35->setDEF(CString("HAnimSiteShape"));
IndexedFaceSet* IndexedFaceSet36 = new IndexedFaceSet();
IndexedFaceSet36->setDEF(CString("DiamondIFS"));
IndexedFaceSet36->setCreaseAngle(0.5);
IndexedFaceSet36->setSolid(False);
IndexedFaceSet36->setCoordIndex(new int32_t[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
ColorRGBA* ColorRGBA37 = new ColorRGBA();
ColorRGBA37->setDEF(CString("HAnimSiteColorRGBA"));
ColorRGBA37->setColor(new float[24]{1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1}, 24);
IndexedFaceSet36->addChild(ColorRGBA37);

Coordinate* Coordinate38 = new Coordinate();
Coordinate38->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet36->addChild(Coordinate38);

Shape35->setGeometry(IndexedFaceSet36);

Appearance* Appearance39 = new Appearance();
Material* Material40 = new Material();
Material40->setDiffuseColor(new float[3]{1,1,0});
Material40->setTransparency(0.3);
Appearance39->addChild(Material40);

Shape35->addChild(Appearance39);

Transform34->addChild(Shape35);

Transform18->addChild(Transform34);

Group17->addChild(Transform18);

Scene11->addChild(Group17);

NavigationInfo* NavigationInfo41 = new NavigationInfo();
NavigationInfo41->setSpeed(1.5);
Scene11->addChild(NavigationInfo41);

Viewpoint* Viewpoint42 = new Viewpoint();
Viewpoint42->setDescription(CString("default"));
Scene11->addChild(Viewpoint42);

HAnimHumanoid* HAnimHumanoid43 = new HAnimHumanoid();
HAnimHumanoid43->setName(CString("HAnim"));
HAnimHumanoid43->setDEF(CString("hanim_HAnim"));
HAnimHumanoid43->setInfo(new CString[1]{CString("humanoidVersion=2.0")}, 1);
HAnimHumanoid43->setVersion(CString("2.0"));
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
Shape* Shape44 = new Shape();
Shape44->setDEF(CString("SkinShape"));
IndexedFaceSet* IndexedFaceSet45 = new IndexedFaceSet();
IndexedFaceSet45->setCoordIndex(new int32_t[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
IndexedFaceSet45->setCreaseAngle(3.1);
Coordinate* Coordinate46 = new Coordinate();
Coordinate46->setDEF(CString("TheSkinCoord"));
Coordinate46->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
IndexedFaceSet45->addChild(Coordinate46);

CColor* Color47 = new CColor();
Color47->setColor(new float[2079]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1}, 2079);
IndexedFaceSet45->addChild(Color47);

Shape44->setGeometry(IndexedFaceSet45);

Appearance* Appearance48 = new Appearance();
Appearance48->setDEF(CString("SkinAppearance"));
ImageTexture* ImageTexture49 = new ImageTexture();
ImageTexture49->setDEF(CString("zBlueSpiralBkg2"));
ImageTexture49->setDescription(CString("Blue Spiral Pattern"));
ImageTexture49->setUrl(new CString[3]{CString("./data/zBlueSpiralBkg2.gif"), CString("zBlueSpiralBkg2.gif"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 3);
Appearance48->addChild(ImageTexture49);

Material* Material50 = new Material();
Material50->setDEF(CString("SkinMaterial"));
Material50->setAmbientIntensity(0.6);
Material50->setDiffuseColor(new float[3]{1,1,1});
Material50->setShininess(0.6);
Material50->setTransparency(0.2);
Appearance48->addChild(Material50);

Shape44->addChild(Appearance48);

HAnimHumanoid43->setSkin(Shape44);

Coordinate* Coordinate51 = new Coordinate();
Coordinate51->setUSE(CString("TheSkinCoord"));
HAnimHumanoid43->setSkinCoord(Coordinate51);

HAnimJoint* HAnimJoint52 = new HAnimJoint();
HAnimJoint52->setName(CString("humanoid_root"));
HAnimJoint52->setDEF(CString("hanim_humanoid_root"));
HAnimJoint52->setCenter(new float[3]{0,0.824,0.0277});
HAnimSegment* HAnimSegment53 = new HAnimSegment();
HAnimSegment53->setName(CString("sacrum"));
HAnimSegment53->setDEF(CString("hanim_sacrum"));
Transform* Transform54 = new Transform();
Transform54->setTranslation(new float[3]{0,0.824,0.0277});
Transform* Transform55 = new Transform();
//Empty Transform
Shape* Shape56 = new Shape();
Shape56->setUSE(CString("HAnimJointShape"));
Transform55->addChild(Shape56);

Transform54->addChild(Transform55);

HAnimSegment53->addChild(Transform54);

Shape* Shape57 = new Shape();
LineSet* LineSet58 = new LineSet();
LineSet58->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate59 = new Coordinate();
Coordinate59->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016}, 6);
LineSet58->addChild(Coordinate59);

//from humanoid_root to sacroiliac vertices 2
ColorRGBA* ColorRGBA60 = new ColorRGBA();
ColorRGBA60->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet58->addChild(ColorRGBA60);

Shape57->setGeometry(LineSet58);

HAnimSegment53->addChild(Shape57);

Shape* Shape61 = new Shape();
LineSet* LineSet62 = new LineSet();
LineSet62->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate63 = new Coordinate();
Coordinate63->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet62->addChild(Coordinate63);

//from humanoid_root to vl5 vertices 2
ColorRGBA* ColorRGBA64 = new ColorRGBA();
ColorRGBA64->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet62->addChild(ColorRGBA64);

Shape61->setGeometry(LineSet62);

HAnimSegment53->addChild(Shape61);

HAnimJoint52->addChild(HAnimSegment53);

HAnimJoint* HAnimJoint65 = new HAnimJoint();
HAnimJoint65->setName(CString("sacroiliac"));
HAnimJoint65->setDEF(CString("hanim_sacroiliac"));
HAnimJoint65->setCenter(new float[3]{0,0.9149,0.0016});
HAnimSegment* HAnimSegment66 = new HAnimSegment();
HAnimSegment66->setName(CString("pelvis"));
HAnimSegment66->setDEF(CString("hanim_pelvis"));
Transform* Transform67 = new Transform();
Transform67->setTranslation(new float[3]{0,0.9149,0.0016});
Transform* Transform68 = new Transform();
//Empty Transform
Shape* Shape69 = new Shape();
Shape69->setUSE(CString("HAnimJointShape"));
Transform68->addChild(Shape69);

Transform67->addChild(Transform68);

HAnimSegment66->addChild(Transform67);

Shape* Shape70 = new Shape();
LineSet* LineSet71 = new LineSet();
LineSet71->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate72 = new Coordinate();
Coordinate72->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet71->addChild(Coordinate72);

//from sacroiliac to l_hip vertices 2
ColorRGBA* ColorRGBA73 = new ColorRGBA();
ColorRGBA73->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet71->addChild(ColorRGBA73);

Shape70->setGeometry(LineSet71);

HAnimSegment66->addChild(Shape70);

Shape* Shape74 = new Shape();
LineSet* LineSet75 = new LineSet();
LineSet75->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate76 = new Coordinate();
Coordinate76->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029}, 6);
LineSet75->addChild(Coordinate76);

//from sacroiliac to r_hip vertices 2
ColorRGBA* ColorRGBA77 = new ColorRGBA();
ColorRGBA77->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet75->addChild(ColorRGBA77);

Shape74->setGeometry(LineSet75);

HAnimSegment66->addChild(Shape74);

HAnimJoint65->addChild(HAnimSegment66);

HAnimJoint* HAnimJoint78 = new HAnimJoint();
HAnimJoint78->setName(CString("l_hip"));
HAnimJoint78->setDEF(CString("hanim_l_hip"));
HAnimJoint78->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimSegment* HAnimSegment79 = new HAnimSegment();
HAnimSegment79->setName(CString("l_thigh"));
HAnimSegment79->setDEF(CString("hanim_l_thigh"));
Transform* Transform80 = new Transform();
Transform80->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
Transform* Transform81 = new Transform();
//Empty Transform
Shape* Shape82 = new Shape();
Shape82->setUSE(CString("HAnimJointShape"));
Transform81->addChild(Shape82);

Transform80->addChild(Transform81);

HAnimSegment79->addChild(Transform80);

Shape* Shape83 = new Shape();
LineSet* LineSet84 = new LineSet();
LineSet84->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate85 = new Coordinate();
Coordinate85->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
LineSet84->addChild(Coordinate85);

//from l_hip to l_knee vertices 2
ColorRGBA* ColorRGBA86 = new ColorRGBA();
ColorRGBA86->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet84->addChild(ColorRGBA86);

Shape83->setGeometry(LineSet84);

HAnimSegment79->addChild(Shape83);

HAnimJoint78->addChild(HAnimSegment79);

HAnimJoint* HAnimJoint87 = new HAnimJoint();
HAnimJoint87->setName(CString("l_knee"));
HAnimJoint87->setDEF(CString("hanim_l_knee"));
HAnimJoint87->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimSegment* HAnimSegment88 = new HAnimSegment();
HAnimSegment88->setName(CString("l_calf"));
HAnimSegment88->setDEF(CString("hanim_l_calf"));
Transform* Transform89 = new Transform();
Transform89->setTranslation(new float[3]{0.104,0.4867,0.0308});
Transform* Transform90 = new Transform();
//Empty Transform
Shape* Shape91 = new Shape();
Shape91->setUSE(CString("HAnimJointShape"));
Transform90->addChild(Shape91);

Transform89->addChild(Transform90);

HAnimSegment88->addChild(Transform89);

Shape* Shape92 = new Shape();
LineSet* LineSet93 = new LineSet();
LineSet93->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate94 = new Coordinate();
Coordinate94->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet93->addChild(Coordinate94);

//from l_knee to l_talocrural vertices 2
ColorRGBA* ColorRGBA95 = new ColorRGBA();
ColorRGBA95->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet93->addChild(ColorRGBA95);

Shape92->setGeometry(LineSet93);

HAnimSegment88->addChild(Shape92);

HAnimJoint87->addChild(HAnimSegment88);

HAnimJoint* HAnimJoint96 = new HAnimJoint();
HAnimJoint96->setName(CString("l_talocrural"));
HAnimJoint96->setDEF(CString("hanim_l_talocrural"));
HAnimJoint96->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimSegment* HAnimSegment97 = new HAnimSegment();
HAnimSegment97->setName(CString("l_talus"));
HAnimSegment97->setDEF(CString("hanim_l_talus"));
Transform* Transform98 = new Transform();
Transform98->setScale(new float[3]{0.15,0.15,0.15});
Transform98->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform98->setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
Transform* Transform99 = new Transform();
//Empty Transform left foot
Shape* Shape100 = new Shape();
Shape100->setUSE(CString("HAnimJointShape"));
Transform99->addChild(Shape100);

Transform98->addChild(Transform99);

HAnimSegment97->addChild(Transform98);

Shape* Shape101 = new Shape();
LineSet* LineSet102 = new LineSet();
LineSet102->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate103 = new Coordinate();
Coordinate103->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097}, 6);
LineSet102->addChild(Coordinate103);

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA* ColorRGBA104 = new ColorRGBA();
ColorRGBA104->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet102->addChild(ColorRGBA104);

Shape101->setGeometry(LineSet102);

HAnimSegment97->addChild(Shape101);

Shape* Shape105 = new Shape();
LineSet* LineSet106 = new LineSet();
LineSet106->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate107 = new Coordinate();
Coordinate107->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278}, 6);
LineSet106->addChild(Coordinate107);

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA* ColorRGBA108 = new ColorRGBA();
ColorRGBA108->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet106->addChild(ColorRGBA108);

Shape105->setGeometry(LineSet106);

HAnimSegment97->addChild(Shape105);

HAnimJoint96->addChild(HAnimSegment97);

HAnimJoint* HAnimJoint109 = new HAnimJoint();
HAnimJoint109->setName(CString("l_talocalcaneonavicular"));
HAnimJoint109->setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint109->setCenter(new float[3]{0.0781,0.0283,-0.097});
HAnimSegment* HAnimSegment110 = new HAnimSegment();
HAnimSegment110->setName(CString("l_navicular"));
HAnimSegment110->setDEF(CString("hanim_l_navicular"));
Transform* Transform111 = new Transform();
Transform111->setTranslation(new float[3]{0.0781,0.0283,-0.097});
Transform* Transform112 = new Transform();
//Empty Transform
Shape* Shape113 = new Shape();
Shape113->setUSE(CString("HAnimJointShape"));
Transform112->addChild(Shape113);

Transform111->addChild(Transform112);

HAnimSegment110->addChild(Transform111);

Shape* Shape114 = new Shape();
LineSet* LineSet115 = new LineSet();
LineSet115->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate116 = new Coordinate();
Coordinate116->setPoint(new float[6]{0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835}, 6);
LineSet115->addChild(Coordinate116);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA* ColorRGBA117 = new ColorRGBA();
ColorRGBA117->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet115->addChild(ColorRGBA117);

Shape114->setGeometry(LineSet115);

HAnimSegment110->addChild(Shape114);

Shape* Shape118 = new Shape();
LineSet* LineSet119 = new LineSet();
LineSet119->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate120 = new Coordinate();
Coordinate120->setPoint(new float[6]{0.0781,0.0283,-0.097,0.0812,0.025,-0.0805}, 6);
LineSet119->addChild(Coordinate120);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA* ColorRGBA121 = new ColorRGBA();
ColorRGBA121->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet119->addChild(ColorRGBA121);

Shape118->setGeometry(LineSet119);

HAnimSegment110->addChild(Shape118);

Shape* Shape122 = new Shape();
LineSet* LineSet123 = new LineSet();
LineSet123->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate124 = new Coordinate();
Coordinate124->setPoint(new float[6]{0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821}, 6);
LineSet123->addChild(Coordinate124);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA* ColorRGBA125 = new ColorRGBA();
ColorRGBA125->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet123->addChild(ColorRGBA125);

Shape122->setGeometry(LineSet123);

HAnimSegment110->addChild(Shape122);

HAnimJoint109->addChild(HAnimSegment110);

HAnimJoint* HAnimJoint126 = new HAnimJoint();
HAnimJoint126->setName(CString("l_cuneonavicular_1"));
HAnimJoint126->setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint126->setCenter(new float[3]{0.0672,0.0235,-0.0835});
HAnimSegment* HAnimSegment127 = new HAnimSegment();
HAnimSegment127->setName(CString("l_cuneiform_1"));
HAnimSegment127->setDEF(CString("hanim_l_cuneiform_1"));
Transform* Transform128 = new Transform();
Transform128->setTranslation(new float[3]{0.0672,0.0235,-0.0835});
Transform* Transform129 = new Transform();
//Empty Transform
Shape* Shape130 = new Shape();
Shape130->setUSE(CString("HAnimJointShape"));
Transform129->addChild(Shape130);

Transform128->addChild(Transform129);

HAnimSegment127->addChild(Transform128);

Shape* Shape131 = new Shape();
LineSet* LineSet132 = new LineSet();
LineSet132->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate133 = new Coordinate();
Coordinate133->setPoint(new float[6]{0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577}, 6);
LineSet132->addChild(Coordinate133);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA* ColorRGBA134 = new ColorRGBA();
ColorRGBA134->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet132->addChild(ColorRGBA134);

Shape131->setGeometry(LineSet132);

HAnimSegment127->addChild(Shape131);

HAnimJoint126->addChild(HAnimSegment127);

HAnimJoint* HAnimJoint135 = new HAnimJoint();
HAnimJoint135->setName(CString("l_tarsometatarsal_1"));
HAnimJoint135->setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint135->setCenter(new float[3]{0.0644,0.0147,-0.0577});
HAnimSegment* HAnimSegment136 = new HAnimSegment();
HAnimSegment136->setName(CString("l_metatarsal_1"));
HAnimSegment136->setDEF(CString("hanim_l_metatarsal_1"));
Transform* Transform137 = new Transform();
Transform137->setTranslation(new float[3]{0.0644,0.0147,-0.0577});
Transform* Transform138 = new Transform();
//Empty Transform
Shape* Shape139 = new Shape();
Shape139->setUSE(CString("HAnimJointShape"));
Transform138->addChild(Shape139);

Transform137->addChild(Transform138);

HAnimSegment136->addChild(Transform137);

Shape* Shape140 = new Shape();
LineSet* LineSet141 = new LineSet();
LineSet141->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate142 = new Coordinate();
Coordinate142->setPoint(new float[6]{0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083}, 6);
LineSet141->addChild(Coordinate142);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA* ColorRGBA143 = new ColorRGBA();
ColorRGBA143->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet141->addChild(ColorRGBA143);

Shape140->setGeometry(LineSet141);

HAnimSegment136->addChild(Shape140);

HAnimJoint135->addChild(HAnimSegment136);

HAnimJoint* HAnimJoint144 = new HAnimJoint();
HAnimJoint144->setName(CString("l_metatarsophalangeal_1"));
HAnimJoint144->setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint144->setCenter(new float[3]{0.0619,0.0059,-0.0083});
HAnimSegment* HAnimSegment145 = new HAnimSegment();
HAnimSegment145->setName(CString("l_tarsal_proximal_phalanx_1"));
HAnimSegment145->setDEF(CString("hanim_l_tarsal_proximal_phalanx_1"));
Transform* Transform146 = new Transform();
Transform146->setTranslation(new float[3]{0.0619,0.0059,-0.0083});
Transform* Transform147 = new Transform();
//Empty Transform
Shape* Shape148 = new Shape();
Shape148->setUSE(CString("HAnimJointShape"));
Transform147->addChild(Shape148);

Transform146->addChild(Transform147);

HAnimSegment145->addChild(Transform146);

Shape* Shape149 = new Shape();
LineSet* LineSet150 = new LineSet();
LineSet150->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate151 = new Coordinate();
Coordinate151->setPoint(new float[6]{0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083}, 6);
LineSet150->addChild(Coordinate151);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA152 = new ColorRGBA();
ColorRGBA152->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet150->addChild(ColorRGBA152);

Shape149->setGeometry(LineSet150);

HAnimSegment145->addChild(Shape149);

HAnimJoint144->addChild(HAnimSegment145);

HAnimJoint* HAnimJoint153 = new HAnimJoint();
HAnimJoint153->setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint153->setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint144->addChild(HAnimJoint153);

HAnimJoint135->addChild(HAnimJoint144);

HAnimJoint126->addChild(HAnimJoint135);

HAnimJoint109->addChild(HAnimJoint126);

HAnimJoint* HAnimJoint154 = new HAnimJoint();
HAnimJoint154->setName(CString("l_cuneonavicular_2"));
HAnimJoint154->setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint154->setCenter(new float[3]{0.0812,0.025,-0.0805});
HAnimSegment* HAnimSegment155 = new HAnimSegment();
HAnimSegment155->setName(CString("l_cuneiform_2"));
HAnimSegment155->setDEF(CString("hanim_l_cuneiform_2"));
Transform* Transform156 = new Transform();
Transform156->setTranslation(new float[3]{0.0812,0.025,-0.0805});
Transform* Transform157 = new Transform();
//Empty Transform
Shape* Shape158 = new Shape();
Shape158->setUSE(CString("HAnimJointShape"));
Transform157->addChild(Shape158);

Transform156->addChild(Transform157);

HAnimSegment155->addChild(Transform156);

Shape* Shape159 = new Shape();
LineSet* LineSet160 = new LineSet();
LineSet160->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate161 = new Coordinate();
Coordinate161->setPoint(new float[6]{0.0812,0.025,-0.0805,0.08,0.0175,-0.0608}, 6);
LineSet160->addChild(Coordinate161);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA* ColorRGBA162 = new ColorRGBA();
ColorRGBA162->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet160->addChild(ColorRGBA162);

Shape159->setGeometry(LineSet160);

HAnimSegment155->addChild(Shape159);

HAnimJoint154->addChild(HAnimSegment155);

HAnimJoint* HAnimJoint163 = new HAnimJoint();
HAnimJoint163->setName(CString("l_tarsometatarsal_2"));
HAnimJoint163->setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint163->setCenter(new float[3]{0.08,0.0175,-0.0608});
HAnimSegment* HAnimSegment164 = new HAnimSegment();
HAnimSegment164->setName(CString("l_metatarsal_2"));
HAnimSegment164->setDEF(CString("hanim_l_metatarsal_2"));
Transform* Transform165 = new Transform();
Transform165->setTranslation(new float[3]{0.08,0.0175,-0.0608});
Transform* Transform166 = new Transform();
//Empty Transform
Shape* Shape167 = new Shape();
Shape167->setUSE(CString("HAnimJointShape"));
Transform166->addChild(Shape167);

Transform165->addChild(Transform166);

HAnimSegment164->addChild(Transform165);

Shape* Shape168 = new Shape();
LineSet* LineSet169 = new LineSet();
LineSet169->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate170 = new Coordinate();
Coordinate170->setPoint(new float[6]{0.08,0.0175,-0.0608,0.0824,0.0064,-0.004}, 6);
LineSet169->addChild(Coordinate170);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA* ColorRGBA171 = new ColorRGBA();
ColorRGBA171->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet169->addChild(ColorRGBA171);

Shape168->setGeometry(LineSet169);

HAnimSegment164->addChild(Shape168);

HAnimJoint163->addChild(HAnimSegment164);

HAnimJoint* HAnimJoint172 = new HAnimJoint();
HAnimJoint172->setName(CString("l_metatarsophalangeal_2"));
HAnimJoint172->setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint172->setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimSegment* HAnimSegment173 = new HAnimSegment();
HAnimSegment173->setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment173->setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform* Transform174 = new Transform();
Transform174->setTranslation(new float[3]{0.0824,0.0064,-0.004});
Transform* Transform175 = new Transform();
//Empty Transform
Shape* Shape176 = new Shape();
Shape176->setUSE(CString("HAnimJointShape"));
Transform175->addChild(Shape176);

Transform174->addChild(Transform175);

HAnimSegment173->addChild(Transform174);

Shape* Shape177 = new Shape();
LineSet* LineSet178 = new LineSet();
LineSet178->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate179 = new Coordinate();
Coordinate179->setPoint(new float[6]{0.0824,0.0064,-0.004,0.0841,0.0041,0.0121}, 6);
LineSet178->addChild(Coordinate179);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA180 = new ColorRGBA();
ColorRGBA180->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet178->addChild(ColorRGBA180);

Shape177->setGeometry(LineSet178);

HAnimSegment173->addChild(Shape177);

HAnimJoint172->addChild(HAnimSegment173);

HAnimJoint* HAnimJoint181 = new HAnimJoint();
HAnimJoint181->setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint181->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint181->setCenter(new float[3]{0.0841,0.0041,0.0121});
HAnimSegment* HAnimSegment182 = new HAnimSegment();
HAnimSegment182->setName(CString("l_tarsal_middle_phalanx_2"));
HAnimSegment182->setDEF(CString("hanim_l_tarsal_middle_phalanx_2"));
Transform* Transform183 = new Transform();
Transform183->setTranslation(new float[3]{0.0841,0.0041,0.0121});
Transform* Transform184 = new Transform();
//Empty Transform
Shape* Shape185 = new Shape();
Shape185->setUSE(CString("HAnimJointShape"));
Transform184->addChild(Shape185);

Transform183->addChild(Transform184);

HAnimSegment182->addChild(Transform183);

Shape* Shape186 = new Shape();
LineSet* LineSet187 = new LineSet();
LineSet187->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate188 = new Coordinate();
Coordinate188->setPoint(new float[6]{0.0841,0.0041,0.0121,0.0841,0.0013,0.0216}, 6);
LineSet187->addChild(Coordinate188);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA189 = new ColorRGBA();
ColorRGBA189->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet187->addChild(ColorRGBA189);

Shape186->setGeometry(LineSet187);

HAnimSegment182->addChild(Shape186);

HAnimJoint181->addChild(HAnimSegment182);

HAnimJoint* HAnimJoint190 = new HAnimJoint();
HAnimJoint190->setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint190->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint190->setCenter(new float[3]{0.0841,0.0013,0.0216});
HAnimJoint181->addChild(HAnimJoint190);

HAnimJoint172->addChild(HAnimJoint181);

HAnimJoint163->addChild(HAnimJoint172);

HAnimJoint154->addChild(HAnimJoint163);

HAnimJoint109->addChild(HAnimJoint154);

HAnimJoint* HAnimJoint191 = new HAnimJoint();
HAnimJoint191->setName(CString("l_cuneonavicular_3"));
HAnimJoint191->setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint191->setCenter(new float[3]{0.0928,0.0248,-0.0821});
HAnimSegment* HAnimSegment192 = new HAnimSegment();
HAnimSegment192->setName(CString("l_cuneiform_3"));
HAnimSegment192->setDEF(CString("hanim_l_cuneiform_3"));
Transform* Transform193 = new Transform();
Transform193->setTranslation(new float[3]{0.0928,0.0248,-0.0821});
Transform* Transform194 = new Transform();
//Empty Transform
Shape* Shape195 = new Shape();
Shape195->setUSE(CString("HAnimJointShape"));
Transform194->addChild(Shape195);

Transform193->addChild(Transform194);

HAnimSegment192->addChild(Transform193);

Shape* Shape196 = new Shape();
LineSet* LineSet197 = new LineSet();
LineSet197->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate198 = new Coordinate();
Coordinate198->setPoint(new float[6]{0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625}, 6);
LineSet197->addChild(Coordinate198);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA* ColorRGBA199 = new ColorRGBA();
ColorRGBA199->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet197->addChild(ColorRGBA199);

Shape196->setGeometry(LineSet197);

HAnimSegment192->addChild(Shape196);

HAnimJoint191->addChild(HAnimSegment192);

HAnimJoint* HAnimJoint200 = new HAnimJoint();
HAnimJoint200->setName(CString("l_tarsometatarsal_3"));
HAnimJoint200->setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint200->setCenter(new float[3]{0.0944,0.0175,-0.0625});
HAnimSegment* HAnimSegment201 = new HAnimSegment();
HAnimSegment201->setName(CString("l_metatarsal_3"));
HAnimSegment201->setDEF(CString("hanim_l_metatarsal_3"));
Transform* Transform202 = new Transform();
Transform202->setTranslation(new float[3]{0.0944,0.0175,-0.0625});
Transform* Transform203 = new Transform();
//Empty Transform
Shape* Shape204 = new Shape();
Shape204->setUSE(CString("HAnimJointShape"));
Transform203->addChild(Shape204);

Transform202->addChild(Transform203);

HAnimSegment201->addChild(Transform202);

Shape* Shape205 = new Shape();
LineSet* LineSet206 = new LineSet();
LineSet206->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate207 = new Coordinate();
Coordinate207->setPoint(new float[6]{0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065}, 6);
LineSet206->addChild(Coordinate207);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA* ColorRGBA208 = new ColorRGBA();
ColorRGBA208->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet206->addChild(ColorRGBA208);

Shape205->setGeometry(LineSet206);

HAnimSegment201->addChild(Shape205);

HAnimJoint200->addChild(HAnimSegment201);

HAnimJoint* HAnimJoint209 = new HAnimJoint();
HAnimJoint209->setName(CString("l_metatarsophalangeal_3"));
HAnimJoint209->setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint209->setCenter(new float[3]{0.0963,0.0065,-0.0065});
HAnimSegment* HAnimSegment210 = new HAnimSegment();
HAnimSegment210->setName(CString("l_tarsal_proximal_phalanx_3"));
HAnimSegment210->setDEF(CString("hanim_l_tarsal_proximal_phalanx_3"));
Transform* Transform211 = new Transform();
Transform211->setTranslation(new float[3]{0.0963,0.0065,-0.0065});
Transform* Transform212 = new Transform();
//Empty Transform
Shape* Shape213 = new Shape();
Shape213->setUSE(CString("HAnimJointShape"));
Transform212->addChild(Shape213);

Transform211->addChild(Transform212);

HAnimSegment210->addChild(Transform211);

Shape* Shape214 = new Shape();
LineSet* LineSet215 = new LineSet();
LineSet215->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate216 = new Coordinate();
Coordinate216->setPoint(new float[6]{0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086}, 6);
LineSet215->addChild(Coordinate216);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA217 = new ColorRGBA();
ColorRGBA217->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet215->addChild(ColorRGBA217);

Shape214->setGeometry(LineSet215);

HAnimSegment210->addChild(Shape214);

HAnimJoint209->addChild(HAnimSegment210);

HAnimJoint* HAnimJoint218 = new HAnimJoint();
HAnimJoint218->setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint218->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint218->setCenter(new float[3]{0.0987,0.0034,0.0086});
HAnimSegment* HAnimSegment219 = new HAnimSegment();
HAnimSegment219->setName(CString("l_tarsal_middle_phalanx_3"));
HAnimSegment219->setDEF(CString("hanim_l_tarsal_middle_phalanx_3"));
Transform* Transform220 = new Transform();
Transform220->setTranslation(new float[3]{0.0987,0.0034,0.0086});
Transform* Transform221 = new Transform();
//Empty Transform
Shape* Shape222 = new Shape();
Shape222->setUSE(CString("HAnimJointShape"));
Transform221->addChild(Shape222);

Transform220->addChild(Transform221);

HAnimSegment219->addChild(Transform220);

Shape* Shape223 = new Shape();
LineSet* LineSet224 = new LineSet();
LineSet224->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate225 = new Coordinate();
Coordinate225->setPoint(new float[6]{0.0987,0.0034,0.0086,0.1002,0.0013,0.0178}, 6);
LineSet224->addChild(Coordinate225);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA226 = new ColorRGBA();
ColorRGBA226->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet224->addChild(ColorRGBA226);

Shape223->setGeometry(LineSet224);

HAnimSegment219->addChild(Shape223);

HAnimJoint218->addChild(HAnimSegment219);

HAnimJoint* HAnimJoint227 = new HAnimJoint();
HAnimJoint227->setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint227->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint227->setCenter(new float[3]{0.1002,0.0013,0.0178});
HAnimJoint218->addChild(HAnimJoint227);

HAnimJoint209->addChild(HAnimJoint218);

HAnimJoint200->addChild(HAnimJoint209);

HAnimJoint191->addChild(HAnimJoint200);

HAnimJoint109->addChild(HAnimJoint191);

HAnimJoint96->addChild(HAnimJoint109);

HAnimJoint* HAnimJoint228 = new HAnimJoint();
HAnimJoint228->setName(CString("l_calcaneocuboid"));
HAnimJoint228->setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint228->setCenter(new float[3]{0.0889,0.0494,-0.1278});
HAnimSegment* HAnimSegment229 = new HAnimSegment();
HAnimSegment229->setName(CString("l_calcaneus"));
HAnimSegment229->setDEF(CString("hanim_l_calcaneus"));
Transform* Transform230 = new Transform();
Transform230->setTranslation(new float[3]{0.0889,0.0494,-0.1278});
Transform* Transform231 = new Transform();
//Empty Transform
Shape* Shape232 = new Shape();
Shape232->setUSE(CString("HAnimJointShape"));
Transform231->addChild(Shape232);

Transform230->addChild(Transform231);

HAnimSegment229->addChild(Transform230);

Shape* Shape233 = new Shape();
LineSet* LineSet234 = new LineSet();
LineSet234->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate235 = new Coordinate();
Coordinate235->setPoint(new float[6]{0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998}, 6);
LineSet234->addChild(Coordinate235);

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA* ColorRGBA236 = new ColorRGBA();
ColorRGBA236->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet234->addChild(ColorRGBA236);

Shape233->setGeometry(LineSet234);

HAnimSegment229->addChild(Shape233);

HAnimJoint228->addChild(HAnimSegment229);

HAnimJoint* HAnimJoint237 = new HAnimJoint();
HAnimJoint237->setName(CString("l_transversetarsal"));
HAnimJoint237->setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint237->setCenter(new float[3]{0.1105,0.0267,-0.0998});
HAnimSegment* HAnimSegment238 = new HAnimSegment();
HAnimSegment238->setName(CString("l_cuboid"));
HAnimSegment238->setDEF(CString("hanim_l_cuboid"));
Transform* Transform239 = new Transform();
Transform239->setTranslation(new float[3]{0.1105,0.0267,-0.0998});
Transform* Transform240 = new Transform();
//Empty Transform
Shape* Shape241 = new Shape();
Shape241->setUSE(CString("HAnimJointShape"));
Transform240->addChild(Shape241);

Transform239->addChild(Transform240);

HAnimSegment238->addChild(Transform239);

Shape* Shape242 = new Shape();
LineSet* LineSet243 = new LineSet();
LineSet243->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate244 = new Coordinate();
Coordinate244->setPoint(new float[6]{0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634}, 6);
LineSet243->addChild(Coordinate244);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA* ColorRGBA245 = new ColorRGBA();
ColorRGBA245->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet243->addChild(ColorRGBA245);

Shape242->setGeometry(LineSet243);

HAnimSegment238->addChild(Shape242);

Shape* Shape246 = new Shape();
LineSet* LineSet247 = new LineSet();
LineSet247->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate248 = new Coordinate();
Coordinate248->setPoint(new float[6]{0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671}, 6);
LineSet247->addChild(Coordinate248);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA* ColorRGBA249 = new ColorRGBA();
ColorRGBA249->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet247->addChild(ColorRGBA249);

Shape246->setGeometry(LineSet247);

HAnimSegment238->addChild(Shape246);

HAnimJoint237->addChild(HAnimSegment238);

HAnimJoint* HAnimJoint250 = new HAnimJoint();
HAnimJoint250->setName(CString("l_tarsometatarsal_4"));
HAnimJoint250->setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint250->setCenter(new float[3]{0.1063,0.016,-0.0634});
HAnimSegment* HAnimSegment251 = new HAnimSegment();
HAnimSegment251->setName(CString("l_metatarsal_4"));
HAnimSegment251->setDEF(CString("hanim_l_metatarsal_4"));
Transform* Transform252 = new Transform();
Transform252->setTranslation(new float[3]{0.1063,0.016,-0.0634});
Transform* Transform253 = new Transform();
//Empty Transform
Shape* Shape254 = new Shape();
Shape254->setUSE(CString("HAnimJointShape"));
Transform253->addChild(Shape254);

Transform252->addChild(Transform253);

HAnimSegment251->addChild(Transform252);

Shape* Shape255 = new Shape();
LineSet* LineSet256 = new LineSet();
LineSet256->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate257 = new Coordinate();
Coordinate257->setPoint(new float[6]{0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107}, 6);
LineSet256->addChild(Coordinate257);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA* ColorRGBA258 = new ColorRGBA();
ColorRGBA258->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet256->addChild(ColorRGBA258);

Shape255->setGeometry(LineSet256);

HAnimSegment251->addChild(Shape255);

HAnimJoint250->addChild(HAnimSegment251);

HAnimJoint* HAnimJoint259 = new HAnimJoint();
HAnimJoint259->setName(CString("l_metatarsophalangeal_4"));
HAnimJoint259->setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint259->setCenter(new float[3]{0.1097,0.0058,-0.0107});
HAnimSegment* HAnimSegment260 = new HAnimSegment();
HAnimSegment260->setName(CString("l_tarsal_proximal_phalanx_4"));
HAnimSegment260->setDEF(CString("hanim_l_tarsal_proximal_phalanx_4"));
Transform* Transform261 = new Transform();
Transform261->setTranslation(new float[3]{0.1097,0.0058,-0.0107});
Transform* Transform262 = new Transform();
//Empty Transform
Shape* Shape263 = new Shape();
Shape263->setUSE(CString("HAnimJointShape"));
Transform262->addChild(Shape263);

Transform261->addChild(Transform262);

HAnimSegment260->addChild(Transform261);

Shape* Shape264 = new Shape();
LineSet* LineSet265 = new LineSet();
LineSet265->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate266 = new Coordinate();
Coordinate266->setPoint(new float[6]{0.1097,0.0058,-0.0107,0.114,0.0037,0.0044}, 6);
LineSet265->addChild(Coordinate266);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA267 = new ColorRGBA();
ColorRGBA267->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet265->addChild(ColorRGBA267);

Shape264->setGeometry(LineSet265);

HAnimSegment260->addChild(Shape264);

HAnimJoint259->addChild(HAnimSegment260);

HAnimJoint* HAnimJoint268 = new HAnimJoint();
HAnimJoint268->setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint268->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint268->setCenter(new float[3]{0.114,0.0037,0.0044});
HAnimSegment* HAnimSegment269 = new HAnimSegment();
HAnimSegment269->setName(CString("l_tarsal_middle_phalanx_4"));
HAnimSegment269->setDEF(CString("hanim_l_tarsal_middle_phalanx_4"));
Transform* Transform270 = new Transform();
Transform270->setTranslation(new float[3]{0.114,0.0037,0.0044});
Transform* Transform271 = new Transform();
//Empty Transform
Shape* Shape272 = new Shape();
Shape272->setUSE(CString("HAnimJointShape"));
Transform271->addChild(Shape272);

Transform270->addChild(Transform271);

HAnimSegment269->addChild(Transform270);

Shape* Shape273 = new Shape();
LineSet* LineSet274 = new LineSet();
LineSet274->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate275 = new Coordinate();
Coordinate275->setPoint(new float[6]{0.114,0.0037,0.0044,0.1155,0.0008,0.0118}, 6);
LineSet274->addChild(Coordinate275);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA276 = new ColorRGBA();
ColorRGBA276->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet274->addChild(ColorRGBA276);

Shape273->setGeometry(LineSet274);

HAnimSegment269->addChild(Shape273);

HAnimJoint268->addChild(HAnimSegment269);

HAnimJoint* HAnimJoint277 = new HAnimJoint();
HAnimJoint277->setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint277->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint277->setCenter(new float[3]{0.1155,0.0008,0.0118});
HAnimJoint268->addChild(HAnimJoint277);

HAnimJoint259->addChild(HAnimJoint268);

HAnimJoint250->addChild(HAnimJoint259);

HAnimJoint237->addChild(HAnimJoint250);

HAnimJoint* HAnimJoint278 = new HAnimJoint();
HAnimJoint278->setName(CString("l_tarsometatarsal_5"));
HAnimJoint278->setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint278->setCenter(new float[3]{0.1206,0.0124,-0.0671});
HAnimSegment* HAnimSegment279 = new HAnimSegment();
HAnimSegment279->setName(CString("l_metatarsal_5"));
HAnimSegment279->setDEF(CString("hanim_l_metatarsal_5"));
Transform* Transform280 = new Transform();
Transform280->setTranslation(new float[3]{0.1206,0.0124,-0.0671});
Transform* Transform281 = new Transform();
//Empty Transform
Shape* Shape282 = new Shape();
Shape282->setUSE(CString("HAnimJointShape"));
Transform281->addChild(Shape282);

Transform280->addChild(Transform281);

HAnimSegment279->addChild(Transform280);

Shape* Shape283 = new Shape();
LineSet* LineSet284 = new LineSet();
LineSet284->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate285 = new Coordinate();
Coordinate285->setPoint(new float[6]{0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153}, 6);
LineSet284->addChild(Coordinate285);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA* ColorRGBA286 = new ColorRGBA();
ColorRGBA286->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet284->addChild(ColorRGBA286);

Shape283->setGeometry(LineSet284);

HAnimSegment279->addChild(Shape283);

HAnimJoint278->addChild(HAnimSegment279);

HAnimJoint* HAnimJoint287 = new HAnimJoint();
HAnimJoint287->setName(CString("l_metatarsophalangeal_5"));
HAnimJoint287->setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint287->setCenter(new float[3]{0.1239,0.0051,-0.0153});
HAnimSegment* HAnimSegment288 = new HAnimSegment();
HAnimSegment288->setName(CString("l_tarsal_proximal_phalanx_5"));
HAnimSegment288->setDEF(CString("hanim_l_tarsal_proximal_phalanx_5"));
Transform* Transform289 = new Transform();
Transform289->setTranslation(new float[3]{0.1239,0.0051,-0.0153});
Transform* Transform290 = new Transform();
//Empty Transform
Shape* Shape291 = new Shape();
Shape291->setUSE(CString("HAnimJointShape"));
Transform290->addChild(Shape291);

Transform289->addChild(Transform290);

HAnimSegment288->addChild(Transform289);

Shape* Shape292 = new Shape();
LineSet* LineSet293 = new LineSet();
LineSet293->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate294 = new Coordinate();
Coordinate294->setPoint(new float[6]{0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077}, 6);
LineSet293->addChild(Coordinate294);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA295 = new ColorRGBA();
ColorRGBA295->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet293->addChild(ColorRGBA295);

Shape292->setGeometry(LineSet293);

HAnimSegment288->addChild(Shape292);

HAnimJoint287->addChild(HAnimSegment288);

HAnimJoint* HAnimJoint296 = new HAnimJoint();
HAnimJoint296->setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint296->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint296->setCenter(new float[3]{0.1262,0.0023,-0.0077});
HAnimSegment* HAnimSegment297 = new HAnimSegment();
HAnimSegment297->setName(CString("l_tarsal_middle_phalanx_5"));
HAnimSegment297->setDEF(CString("hanim_l_tarsal_middle_phalanx_5"));
Transform* Transform298 = new Transform();
Transform298->setTranslation(new float[3]{0.1262,0.0023,-0.0077});
Transform* Transform299 = new Transform();
//Empty Transform
Shape* Shape300 = new Shape();
Shape300->setUSE(CString("HAnimJointShape"));
Transform299->addChild(Shape300);

Transform298->addChild(Transform299);

HAnimSegment297->addChild(Transform298);

Shape* Shape301 = new Shape();
LineSet* LineSet302 = new LineSet();
LineSet302->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate303 = new Coordinate();
Coordinate303->setPoint(new float[6]{0.1262,0.0023,-0.0077,0.1271,0,0}, 6);
LineSet302->addChild(Coordinate303);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA304 = new ColorRGBA();
ColorRGBA304->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet302->addChild(ColorRGBA304);

Shape301->setGeometry(LineSet302);

HAnimSegment297->addChild(Shape301);

HAnimJoint296->addChild(HAnimSegment297);

HAnimJoint* HAnimJoint305 = new HAnimJoint();
HAnimJoint305->setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint305->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint305->setCenter(new float[3]{0.1271,0,0});
HAnimJoint296->addChild(HAnimJoint305);

HAnimJoint287->addChild(HAnimJoint296);

HAnimJoint278->addChild(HAnimJoint287);

HAnimJoint237->addChild(HAnimJoint278);

HAnimJoint228->addChild(HAnimJoint237);

HAnimJoint96->addChild(HAnimJoint228);

HAnimJoint87->addChild(HAnimJoint96);

HAnimJoint78->addChild(HAnimJoint87);

HAnimJoint65->addChild(HAnimJoint78);

HAnimJoint* HAnimJoint306 = new HAnimJoint();
HAnimJoint306->setName(CString("r_hip"));
HAnimJoint306->setDEF(CString("hanim_r_hip"));
HAnimJoint306->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimSegment* HAnimSegment307 = new HAnimSegment();
HAnimSegment307->setName(CString("r_thigh"));
HAnimSegment307->setDEF(CString("hanim_r_thigh"));
Transform* Transform308 = new Transform();
Transform308->setTranslation(new float[3]{-0.095,0.9171,0.0029});
Transform* Transform309 = new Transform();
//Empty Transform
Shape* Shape310 = new Shape();
Shape310->setUSE(CString("HAnimJointShape"));
Transform309->addChild(Shape310);

Transform308->addChild(Transform309);

HAnimSegment307->addChild(Transform308);

Shape* Shape311 = new Shape();
LineSet* LineSet312 = new LineSet();
LineSet312->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate313 = new Coordinate();
Coordinate313->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet312->addChild(Coordinate313);

//from r_hip to r_knee vertices 2
ColorRGBA* ColorRGBA314 = new ColorRGBA();
ColorRGBA314->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet312->addChild(ColorRGBA314);

Shape311->setGeometry(LineSet312);

HAnimSegment307->addChild(Shape311);

HAnimJoint306->addChild(HAnimSegment307);

HAnimJoint* HAnimJoint315 = new HAnimJoint();
HAnimJoint315->setName(CString("r_knee"));
HAnimJoint315->setDEF(CString("hanim_r_knee"));
HAnimJoint315->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimSegment* HAnimSegment316 = new HAnimSegment();
HAnimSegment316->setName(CString("r_calf"));
HAnimSegment316->setDEF(CString("hanim_r_calf"));
Transform* Transform317 = new Transform();
Transform317->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
Transform* Transform318 = new Transform();
//Empty Transform
Shape* Shape319 = new Shape();
Shape319->setUSE(CString("HAnimJointShape"));
Transform318->addChild(Shape319);

Transform317->addChild(Transform318);

HAnimSegment316->addChild(Transform317);

Shape* Shape320 = new Shape();
LineSet* LineSet321 = new LineSet();
LineSet321->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate322 = new Coordinate();
Coordinate322->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet321->addChild(Coordinate322);

//from r_knee to r_talocrural vertices 2
ColorRGBA* ColorRGBA323 = new ColorRGBA();
ColorRGBA323->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet321->addChild(ColorRGBA323);

Shape320->setGeometry(LineSet321);

HAnimSegment316->addChild(Shape320);

HAnimJoint315->addChild(HAnimSegment316);

HAnimJoint* HAnimJoint324 = new HAnimJoint();
HAnimJoint324->setName(CString("r_talocrural"));
HAnimJoint324->setDEF(CString("hanim_r_talocrural"));
HAnimJoint324->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimSegment* HAnimSegment325 = new HAnimSegment();
HAnimSegment325->setName(CString("r_talus"));
HAnimSegment325->setDEF(CString("hanim_r_talus"));
Transform* Transform326 = new Transform();
Transform326->setScale(new float[3]{0.15,0.15,0.15});
Transform326->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform326->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
Transform* Transform327 = new Transform();
//Empty Transform right foot
Shape* Shape328 = new Shape();
Shape328->setUSE(CString("HAnimJointShape"));
Transform327->addChild(Shape328);

Transform326->addChild(Transform327);

HAnimSegment325->addChild(Transform326);

Shape* Shape329 = new Shape();
LineSet* LineSet330 = new LineSet();
LineSet330->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate331 = new Coordinate();
Coordinate331->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097}, 6);
LineSet330->addChild(Coordinate331);

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA* ColorRGBA332 = new ColorRGBA();
ColorRGBA332->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet330->addChild(ColorRGBA332);

Shape329->setGeometry(LineSet330);

HAnimSegment325->addChild(Shape329);

Shape* Shape333 = new Shape();
LineSet* LineSet334 = new LineSet();
LineSet334->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate335 = new Coordinate();
Coordinate335->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278}, 6);
LineSet334->addChild(Coordinate335);

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA* ColorRGBA336 = new ColorRGBA();
ColorRGBA336->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet334->addChild(ColorRGBA336);

Shape333->setGeometry(LineSet334);

HAnimSegment325->addChild(Shape333);

HAnimJoint324->addChild(HAnimSegment325);

HAnimJoint* HAnimJoint337 = new HAnimJoint();
HAnimJoint337->setName(CString("r_talocalcaneonavicular"));
HAnimJoint337->setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint337->setCenter(new float[3]{-0.0781,0.0283,-0.097});
HAnimSegment* HAnimSegment338 = new HAnimSegment();
HAnimSegment338->setName(CString("r_navicular"));
HAnimSegment338->setDEF(CString("hanim_r_navicular"));
Transform* Transform339 = new Transform();
Transform339->setTranslation(new float[3]{-0.0781,0.0283,-0.097});
Transform* Transform340 = new Transform();
//Empty Transform
Shape* Shape341 = new Shape();
Shape341->setUSE(CString("HAnimJointShape"));
Transform340->addChild(Shape341);

Transform339->addChild(Transform340);

HAnimSegment338->addChild(Transform339);

Shape* Shape342 = new Shape();
LineSet* LineSet343 = new LineSet();
LineSet343->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate344 = new Coordinate();
Coordinate344->setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835}, 6);
LineSet343->addChild(Coordinate344);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA* ColorRGBA345 = new ColorRGBA();
ColorRGBA345->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet343->addChild(ColorRGBA345);

Shape342->setGeometry(LineSet343);

HAnimSegment338->addChild(Shape342);

Shape* Shape346 = new Shape();
LineSet* LineSet347 = new LineSet();
LineSet347->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate348 = new Coordinate();
Coordinate348->setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805}, 6);
LineSet347->addChild(Coordinate348);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA* ColorRGBA349 = new ColorRGBA();
ColorRGBA349->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet347->addChild(ColorRGBA349);

Shape346->setGeometry(LineSet347);

HAnimSegment338->addChild(Shape346);

Shape* Shape350 = new Shape();
LineSet* LineSet351 = new LineSet();
LineSet351->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate352 = new Coordinate();
Coordinate352->setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821}, 6);
LineSet351->addChild(Coordinate352);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA* ColorRGBA353 = new ColorRGBA();
ColorRGBA353->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet351->addChild(ColorRGBA353);

Shape350->setGeometry(LineSet351);

HAnimSegment338->addChild(Shape350);

HAnimJoint337->addChild(HAnimSegment338);

HAnimJoint* HAnimJoint354 = new HAnimJoint();
HAnimJoint354->setName(CString("r_cuneonavicular_1"));
HAnimJoint354->setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint354->setCenter(new float[3]{-0.0672,0.0235,-0.0835});
HAnimSegment* HAnimSegment355 = new HAnimSegment();
HAnimSegment355->setName(CString("r_cuneiform_1"));
HAnimSegment355->setDEF(CString("hanim_r_cuneiform_1"));
Transform* Transform356 = new Transform();
Transform356->setTranslation(new float[3]{-0.0672,0.0235,-0.0835});
Transform* Transform357 = new Transform();
//Empty Transform
Shape* Shape358 = new Shape();
Shape358->setUSE(CString("HAnimJointShape"));
Transform357->addChild(Shape358);

Transform356->addChild(Transform357);

HAnimSegment355->addChild(Transform356);

Shape* Shape359 = new Shape();
LineSet* LineSet360 = new LineSet();
LineSet360->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate361 = new Coordinate();
Coordinate361->setPoint(new float[6]{-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577}, 6);
LineSet360->addChild(Coordinate361);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA* ColorRGBA362 = new ColorRGBA();
ColorRGBA362->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet360->addChild(ColorRGBA362);

Shape359->setGeometry(LineSet360);

HAnimSegment355->addChild(Shape359);

HAnimJoint354->addChild(HAnimSegment355);

HAnimJoint* HAnimJoint363 = new HAnimJoint();
HAnimJoint363->setName(CString("r_tarsometatarsal_1"));
HAnimJoint363->setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint363->setCenter(new float[3]{-0.0644,0.0147,-0.0577});
HAnimSegment* HAnimSegment364 = new HAnimSegment();
HAnimSegment364->setName(CString("r_metatarsal_1"));
HAnimSegment364->setDEF(CString("hanim_r_metatarsal_1"));
Transform* Transform365 = new Transform();
Transform365->setTranslation(new float[3]{-0.0644,0.0147,-0.0577});
Transform* Transform366 = new Transform();
//Empty Transform
Shape* Shape367 = new Shape();
Shape367->setUSE(CString("HAnimJointShape"));
Transform366->addChild(Shape367);

Transform365->addChild(Transform366);

HAnimSegment364->addChild(Transform365);

Shape* Shape368 = new Shape();
LineSet* LineSet369 = new LineSet();
LineSet369->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate370 = new Coordinate();
Coordinate370->setPoint(new float[6]{-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083}, 6);
LineSet369->addChild(Coordinate370);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA* ColorRGBA371 = new ColorRGBA();
ColorRGBA371->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet369->addChild(ColorRGBA371);

Shape368->setGeometry(LineSet369);

HAnimSegment364->addChild(Shape368);

HAnimJoint363->addChild(HAnimSegment364);

HAnimJoint* HAnimJoint372 = new HAnimJoint();
HAnimJoint372->setName(CString("r_metatarsophalangeal_1"));
HAnimJoint372->setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint372->setCenter(new float[3]{-0.0619,0.0059,-0.0083});
HAnimSegment* HAnimSegment373 = new HAnimSegment();
HAnimSegment373->setName(CString("r_tarsal_proximal_phalanx_1"));
HAnimSegment373->setDEF(CString("hanim_r_tarsal_proximal_phalanx_1"));
Transform* Transform374 = new Transform();
Transform374->setTranslation(new float[3]{-0.0619,0.0059,-0.0083});
Transform* Transform375 = new Transform();
//Empty Transform
Shape* Shape376 = new Shape();
Shape376->setUSE(CString("HAnimJointShape"));
Transform375->addChild(Shape376);

Transform374->addChild(Transform375);

HAnimSegment373->addChild(Transform374);

Shape* Shape377 = new Shape();
LineSet* LineSet378 = new LineSet();
LineSet378->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate379 = new Coordinate();
Coordinate379->setPoint(new float[6]{-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083}, 6);
LineSet378->addChild(Coordinate379);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA380 = new ColorRGBA();
ColorRGBA380->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet378->addChild(ColorRGBA380);

Shape377->setGeometry(LineSet378);

HAnimSegment373->addChild(Shape377);

HAnimJoint372->addChild(HAnimSegment373);

HAnimJoint* HAnimJoint381 = new HAnimJoint();
HAnimJoint381->setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint381->setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint372->addChild(HAnimJoint381);

HAnimJoint363->addChild(HAnimJoint372);

HAnimJoint354->addChild(HAnimJoint363);

HAnimJoint337->addChild(HAnimJoint354);

HAnimJoint* HAnimJoint382 = new HAnimJoint();
HAnimJoint382->setName(CString("r_cuneonavicular_2"));
HAnimJoint382->setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint382->setCenter(new float[3]{-0.0812,0.025,-0.0805});
HAnimSegment* HAnimSegment383 = new HAnimSegment();
HAnimSegment383->setName(CString("r_cuneiform_2"));
HAnimSegment383->setDEF(CString("hanim_r_cuneiform_2"));
Transform* Transform384 = new Transform();
Transform384->setTranslation(new float[3]{-0.0812,0.025,-0.0805});
Transform* Transform385 = new Transform();
//Empty Transform
Shape* Shape386 = new Shape();
Shape386->setUSE(CString("HAnimJointShape"));
Transform385->addChild(Shape386);

Transform384->addChild(Transform385);

HAnimSegment383->addChild(Transform384);

Shape* Shape387 = new Shape();
LineSet* LineSet388 = new LineSet();
LineSet388->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate389 = new Coordinate();
Coordinate389->setPoint(new float[6]{-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608}, 6);
LineSet388->addChild(Coordinate389);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA* ColorRGBA390 = new ColorRGBA();
ColorRGBA390->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet388->addChild(ColorRGBA390);

Shape387->setGeometry(LineSet388);

HAnimSegment383->addChild(Shape387);

HAnimJoint382->addChild(HAnimSegment383);

HAnimJoint* HAnimJoint391 = new HAnimJoint();
HAnimJoint391->setName(CString("r_tarsometatarsal_2"));
HAnimJoint391->setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint391->setCenter(new float[3]{-0.08,0.0175,-0.0608});
HAnimSegment* HAnimSegment392 = new HAnimSegment();
HAnimSegment392->setName(CString("r_metatarsal_2"));
HAnimSegment392->setDEF(CString("hanim_r_metatarsal_2"));
Transform* Transform393 = new Transform();
Transform393->setTranslation(new float[3]{-0.08,0.0175,-0.0608});
Transform* Transform394 = new Transform();
//Empty Transform
Shape* Shape395 = new Shape();
Shape395->setUSE(CString("HAnimJointShape"));
Transform394->addChild(Shape395);

Transform393->addChild(Transform394);

HAnimSegment392->addChild(Transform393);

Shape* Shape396 = new Shape();
LineSet* LineSet397 = new LineSet();
LineSet397->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate398 = new Coordinate();
Coordinate398->setPoint(new float[6]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004}, 6);
LineSet397->addChild(Coordinate398);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA* ColorRGBA399 = new ColorRGBA();
ColorRGBA399->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet397->addChild(ColorRGBA399);

Shape396->setGeometry(LineSet397);

HAnimSegment392->addChild(Shape396);

HAnimJoint391->addChild(HAnimSegment392);

HAnimJoint* HAnimJoint400 = new HAnimJoint();
HAnimJoint400->setName(CString("r_metatarsophalangeal_2"));
HAnimJoint400->setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint400->setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimSegment* HAnimSegment401 = new HAnimSegment();
HAnimSegment401->setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment401->setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Transform* Transform402 = new Transform();
Transform402->setTranslation(new float[3]{-0.0823,0.0064,-0.004});
Transform* Transform403 = new Transform();
//Empty Transform
Shape* Shape404 = new Shape();
Shape404->setUSE(CString("HAnimJointShape"));
Transform403->addChild(Shape404);

Transform402->addChild(Transform403);

HAnimSegment401->addChild(Transform402);

Shape* Shape405 = new Shape();
LineSet* LineSet406 = new LineSet();
LineSet406->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate407 = new Coordinate();
Coordinate407->setPoint(new float[6]{-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121}, 6);
LineSet406->addChild(Coordinate407);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA408 = new ColorRGBA();
ColorRGBA408->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet406->addChild(ColorRGBA408);

Shape405->setGeometry(LineSet406);

HAnimSegment401->addChild(Shape405);

HAnimJoint400->addChild(HAnimSegment401);

HAnimJoint* HAnimJoint409 = new HAnimJoint();
HAnimJoint409->setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint409->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint409->setCenter(new float[3]{-0.0841,0.0041,0.0121});
HAnimSegment* HAnimSegment410 = new HAnimSegment();
HAnimSegment410->setName(CString("r_tarsal_middle_phalanx_2"));
HAnimSegment410->setDEF(CString("hanim_r_tarsal_middle_phalanx_2"));
Transform* Transform411 = new Transform();
Transform411->setTranslation(new float[3]{-0.0841,0.0041,0.0121});
Transform* Transform412 = new Transform();
//Empty Transform
Shape* Shape413 = new Shape();
Shape413->setUSE(CString("HAnimJointShape"));
Transform412->addChild(Shape413);

Transform411->addChild(Transform412);

HAnimSegment410->addChild(Transform411);

Shape* Shape414 = new Shape();
LineSet* LineSet415 = new LineSet();
LineSet415->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate416 = new Coordinate();
Coordinate416->setPoint(new float[6]{-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216}, 6);
LineSet415->addChild(Coordinate416);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA417 = new ColorRGBA();
ColorRGBA417->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet415->addChild(ColorRGBA417);

Shape414->setGeometry(LineSet415);

HAnimSegment410->addChild(Shape414);

HAnimJoint409->addChild(HAnimSegment410);

HAnimJoint* HAnimJoint418 = new HAnimJoint();
HAnimJoint418->setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint418->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint418->setCenter(new float[3]{-0.0841,0.0013,0.0216});
HAnimJoint409->addChild(HAnimJoint418);

HAnimJoint400->addChild(HAnimJoint409);

HAnimJoint391->addChild(HAnimJoint400);

HAnimJoint382->addChild(HAnimJoint391);

HAnimJoint337->addChild(HAnimJoint382);

HAnimJoint* HAnimJoint419 = new HAnimJoint();
HAnimJoint419->setName(CString("r_cuneonavicular_3"));
HAnimJoint419->setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint419->setCenter(new float[3]{-0.0928,0.0248,-0.0821});
HAnimSegment* HAnimSegment420 = new HAnimSegment();
HAnimSegment420->setName(CString("r_cuneiform_3"));
HAnimSegment420->setDEF(CString("hanim_r_cuneiform_3"));
Transform* Transform421 = new Transform();
Transform421->setTranslation(new float[3]{-0.0928,0.0248,-0.0821});
Transform* Transform422 = new Transform();
//Empty Transform
Shape* Shape423 = new Shape();
Shape423->setUSE(CString("HAnimJointShape"));
Transform422->addChild(Shape423);

Transform421->addChild(Transform422);

HAnimSegment420->addChild(Transform421);

Shape* Shape424 = new Shape();
LineSet* LineSet425 = new LineSet();
LineSet425->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate426 = new Coordinate();
Coordinate426->setPoint(new float[6]{-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625}, 6);
LineSet425->addChild(Coordinate426);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA* ColorRGBA427 = new ColorRGBA();
ColorRGBA427->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet425->addChild(ColorRGBA427);

Shape424->setGeometry(LineSet425);

HAnimSegment420->addChild(Shape424);

HAnimJoint419->addChild(HAnimSegment420);

HAnimJoint* HAnimJoint428 = new HAnimJoint();
HAnimJoint428->setName(CString("r_tarsometatarsal_3"));
HAnimJoint428->setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimJoint428->setCenter(new float[3]{-0.0944,0.0175,-0.0625});
HAnimSegment* HAnimSegment429 = new HAnimSegment();
HAnimSegment429->setName(CString("r_metatarsal_3"));
HAnimSegment429->setDEF(CString("hanim_r_metatarsal_3"));
Transform* Transform430 = new Transform();
Transform430->setTranslation(new float[3]{-0.0944,0.0175,-0.0625});
Transform* Transform431 = new Transform();
//Empty Transform
Shape* Shape432 = new Shape();
Shape432->setUSE(CString("HAnimJointShape"));
Transform431->addChild(Shape432);

Transform430->addChild(Transform431);

HAnimSegment429->addChild(Transform430);

Shape* Shape433 = new Shape();
LineSet* LineSet434 = new LineSet();
LineSet434->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate435 = new Coordinate();
Coordinate435->setPoint(new float[6]{-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065}, 6);
LineSet434->addChild(Coordinate435);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA* ColorRGBA436 = new ColorRGBA();
ColorRGBA436->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet434->addChild(ColorRGBA436);

Shape433->setGeometry(LineSet434);

HAnimSegment429->addChild(Shape433);

HAnimJoint428->addChild(HAnimSegment429);

HAnimJoint* HAnimJoint437 = new HAnimJoint();
HAnimJoint437->setName(CString("r_metatarsophalangeal_3"));
HAnimJoint437->setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint437->setCenter(new float[3]{-0.0963,0.0065,-0.0065});
HAnimSegment* HAnimSegment438 = new HAnimSegment();
HAnimSegment438->setName(CString("r_tarsal_proximal_phalanx_3"));
HAnimSegment438->setDEF(CString("hanim_r_tarsal_proximal_phalanx_3"));
Transform* Transform439 = new Transform();
Transform439->setTranslation(new float[3]{-0.0963,0.0065,-0.0065});
Transform* Transform440 = new Transform();
//Empty Transform
Shape* Shape441 = new Shape();
Shape441->setUSE(CString("HAnimJointShape"));
Transform440->addChild(Shape441);

Transform439->addChild(Transform440);

HAnimSegment438->addChild(Transform439);

Shape* Shape442 = new Shape();
LineSet* LineSet443 = new LineSet();
LineSet443->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate444 = new Coordinate();
Coordinate444->setPoint(new float[6]{-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086}, 6);
LineSet443->addChild(Coordinate444);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA445 = new ColorRGBA();
ColorRGBA445->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet443->addChild(ColorRGBA445);

Shape442->setGeometry(LineSet443);

HAnimSegment438->addChild(Shape442);

HAnimJoint437->addChild(HAnimSegment438);

HAnimJoint* HAnimJoint446 = new HAnimJoint();
HAnimJoint446->setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint446->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint446->setCenter(new float[3]{-0.0987,0.0034,0.0086});
HAnimSegment* HAnimSegment447 = new HAnimSegment();
HAnimSegment447->setName(CString("r_tarsal_middle_phalanx_3"));
HAnimSegment447->setDEF(CString("hanim_r_tarsal_middle_phalanx_3"));
Transform* Transform448 = new Transform();
Transform448->setTranslation(new float[3]{-0.0987,0.0034,0.0086});
Transform* Transform449 = new Transform();
//Empty Transform
Shape* Shape450 = new Shape();
Shape450->setUSE(CString("HAnimJointShape"));
Transform449->addChild(Shape450);

Transform448->addChild(Transform449);

HAnimSegment447->addChild(Transform448);

Shape* Shape451 = new Shape();
LineSet* LineSet452 = new LineSet();
LineSet452->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate453 = new Coordinate();
Coordinate453->setPoint(new float[6]{-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178}, 6);
LineSet452->addChild(Coordinate453);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA454 = new ColorRGBA();
ColorRGBA454->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet452->addChild(ColorRGBA454);

Shape451->setGeometry(LineSet452);

HAnimSegment447->addChild(Shape451);

HAnimJoint446->addChild(HAnimSegment447);

HAnimJoint* HAnimJoint455 = new HAnimJoint();
HAnimJoint455->setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint455->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint455->setCenter(new float[3]{-0.1002,0.0013,0.0178});
HAnimJoint446->addChild(HAnimJoint455);

HAnimJoint437->addChild(HAnimJoint446);

HAnimJoint428->addChild(HAnimJoint437);

HAnimJoint419->addChild(HAnimJoint428);

HAnimJoint337->addChild(HAnimJoint419);

HAnimJoint324->addChild(HAnimJoint337);

HAnimJoint* HAnimJoint456 = new HAnimJoint();
HAnimJoint456->setName(CString("r_calcaneocuboid"));
HAnimJoint456->setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint456->setCenter(new float[3]{-0.0889,0.0494,-0.1278});
HAnimSegment* HAnimSegment457 = new HAnimSegment();
HAnimSegment457->setName(CString("r_calcaneus"));
HAnimSegment457->setDEF(CString("hanim_r_calcaneus"));
Transform* Transform458 = new Transform();
Transform458->setTranslation(new float[3]{-0.0889,0.0494,-0.1278});
Transform* Transform459 = new Transform();
//Empty Transform
Shape* Shape460 = new Shape();
Shape460->setUSE(CString("HAnimJointShape"));
Transform459->addChild(Shape460);

Transform458->addChild(Transform459);

HAnimSegment457->addChild(Transform458);

Shape* Shape461 = new Shape();
LineSet* LineSet462 = new LineSet();
LineSet462->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate463 = new Coordinate();
Coordinate463->setPoint(new float[6]{-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998}, 6);
LineSet462->addChild(Coordinate463);

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA* ColorRGBA464 = new ColorRGBA();
ColorRGBA464->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet462->addChild(ColorRGBA464);

Shape461->setGeometry(LineSet462);

HAnimSegment457->addChild(Shape461);

HAnimJoint456->addChild(HAnimSegment457);

HAnimJoint* HAnimJoint465 = new HAnimJoint();
HAnimJoint465->setName(CString("r_transversetarsal"));
HAnimJoint465->setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint465->setCenter(new float[3]{-0.1105,0.0267,-0.0998});
HAnimSegment* HAnimSegment466 = new HAnimSegment();
HAnimSegment466->setName(CString("r_cuboid"));
HAnimSegment466->setDEF(CString("hanim_r_cuboid"));
Transform* Transform467 = new Transform();
Transform467->setTranslation(new float[3]{-0.1105,0.0267,-0.0998});
Transform* Transform468 = new Transform();
//Empty Transform
Shape* Shape469 = new Shape();
Shape469->setUSE(CString("HAnimJointShape"));
Transform468->addChild(Shape469);

Transform467->addChild(Transform468);

HAnimSegment466->addChild(Transform467);

Shape* Shape470 = new Shape();
LineSet* LineSet471 = new LineSet();
LineSet471->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate472 = new Coordinate();
Coordinate472->setPoint(new float[6]{-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634}, 6);
LineSet471->addChild(Coordinate472);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA* ColorRGBA473 = new ColorRGBA();
ColorRGBA473->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet471->addChild(ColorRGBA473);

Shape470->setGeometry(LineSet471);

HAnimSegment466->addChild(Shape470);

Shape* Shape474 = new Shape();
LineSet* LineSet475 = new LineSet();
LineSet475->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate476 = new Coordinate();
Coordinate476->setPoint(new float[6]{-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671}, 6);
LineSet475->addChild(Coordinate476);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA* ColorRGBA477 = new ColorRGBA();
ColorRGBA477->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet475->addChild(ColorRGBA477);

Shape474->setGeometry(LineSet475);

HAnimSegment466->addChild(Shape474);

HAnimJoint465->addChild(HAnimSegment466);

HAnimJoint* HAnimJoint478 = new HAnimJoint();
HAnimJoint478->setName(CString("r_tarsometatarsal_4"));
HAnimJoint478->setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint478->setCenter(new float[3]{-0.1063,0.016,-0.0634});
HAnimSegment* HAnimSegment479 = new HAnimSegment();
HAnimSegment479->setName(CString("r_metatarsal_4"));
HAnimSegment479->setDEF(CString("hanim_r_metatarsal_4"));
Transform* Transform480 = new Transform();
Transform480->setTranslation(new float[3]{-0.1063,0.016,-0.0634});
Transform* Transform481 = new Transform();
//Empty Transform
Shape* Shape482 = new Shape();
Shape482->setUSE(CString("HAnimJointShape"));
Transform481->addChild(Shape482);

Transform480->addChild(Transform481);

HAnimSegment479->addChild(Transform480);

Shape* Shape483 = new Shape();
LineSet* LineSet484 = new LineSet();
LineSet484->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate485 = new Coordinate();
Coordinate485->setPoint(new float[6]{-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107}, 6);
LineSet484->addChild(Coordinate485);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA* ColorRGBA486 = new ColorRGBA();
ColorRGBA486->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet484->addChild(ColorRGBA486);

Shape483->setGeometry(LineSet484);

HAnimSegment479->addChild(Shape483);

HAnimJoint478->addChild(HAnimSegment479);

HAnimJoint* HAnimJoint487 = new HAnimJoint();
HAnimJoint487->setName(CString("r_metatarsophalangeal_4"));
HAnimJoint487->setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint487->setCenter(new float[3]{-0.1097,0.0058,-0.0107});
HAnimSegment* HAnimSegment488 = new HAnimSegment();
HAnimSegment488->setName(CString("r_tarsal_proximal_phalanx_4"));
HAnimSegment488->setDEF(CString("hanim_r_tarsal_proximal_phalanx_4"));
Transform* Transform489 = new Transform();
Transform489->setTranslation(new float[3]{-0.1097,0.0058,-0.0107});
Transform* Transform490 = new Transform();
//Empty Transform
Shape* Shape491 = new Shape();
Shape491->setUSE(CString("HAnimJointShape"));
Transform490->addChild(Shape491);

Transform489->addChild(Transform490);

HAnimSegment488->addChild(Transform489);

Shape* Shape492 = new Shape();
LineSet* LineSet493 = new LineSet();
LineSet493->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate494 = new Coordinate();
Coordinate494->setPoint(new float[6]{-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044}, 6);
LineSet493->addChild(Coordinate494);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA495 = new ColorRGBA();
ColorRGBA495->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet493->addChild(ColorRGBA495);

Shape492->setGeometry(LineSet493);

HAnimSegment488->addChild(Shape492);

HAnimJoint487->addChild(HAnimSegment488);

HAnimJoint* HAnimJoint496 = new HAnimJoint();
HAnimJoint496->setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint496->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint496->setCenter(new float[3]{-0.114,0.0037,0.0044});
HAnimSegment* HAnimSegment497 = new HAnimSegment();
HAnimSegment497->setName(CString("r_tarsal_middle_phalanx_4"));
HAnimSegment497->setDEF(CString("hanim_r_tarsal_middle_phalanx_4"));
Transform* Transform498 = new Transform();
Transform498->setTranslation(new float[3]{-0.114,0.0037,0.0044});
Transform* Transform499 = new Transform();
//Empty Transform
Shape* Shape500 = new Shape();
Shape500->setUSE(CString("HAnimJointShape"));
Transform499->addChild(Shape500);

Transform498->addChild(Transform499);

HAnimSegment497->addChild(Transform498);

Shape* Shape501 = new Shape();
LineSet* LineSet502 = new LineSet();
LineSet502->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate503 = new Coordinate();
Coordinate503->setPoint(new float[6]{-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118}, 6);
LineSet502->addChild(Coordinate503);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA504 = new ColorRGBA();
ColorRGBA504->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet502->addChild(ColorRGBA504);

Shape501->setGeometry(LineSet502);

HAnimSegment497->addChild(Shape501);

HAnimJoint496->addChild(HAnimSegment497);

HAnimJoint* HAnimJoint505 = new HAnimJoint();
HAnimJoint505->setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint505->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint505->setCenter(new float[3]{-0.1155,0.0008,0.0118});
HAnimJoint496->addChild(HAnimJoint505);

HAnimJoint487->addChild(HAnimJoint496);

HAnimJoint478->addChild(HAnimJoint487);

HAnimJoint465->addChild(HAnimJoint478);

HAnimJoint* HAnimJoint506 = new HAnimJoint();
HAnimJoint506->setName(CString("r_tarsometatarsal_5"));
HAnimJoint506->setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint506->setCenter(new float[3]{-0.1206,0.0124,-0.0671});
HAnimSegment* HAnimSegment507 = new HAnimSegment();
HAnimSegment507->setName(CString("r_metatarsal_5"));
HAnimSegment507->setDEF(CString("hanim_r_metatarsal_5"));
Transform* Transform508 = new Transform();
Transform508->setTranslation(new float[3]{-0.1206,0.0124,-0.0671});
Transform* Transform509 = new Transform();
//Empty Transform
Shape* Shape510 = new Shape();
Shape510->setUSE(CString("HAnimJointShape"));
Transform509->addChild(Shape510);

Transform508->addChild(Transform509);

HAnimSegment507->addChild(Transform508);

Shape* Shape511 = new Shape();
LineSet* LineSet512 = new LineSet();
LineSet512->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate513 = new Coordinate();
Coordinate513->setPoint(new float[6]{-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153}, 6);
LineSet512->addChild(Coordinate513);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA* ColorRGBA514 = new ColorRGBA();
ColorRGBA514->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet512->addChild(ColorRGBA514);

Shape511->setGeometry(LineSet512);

HAnimSegment507->addChild(Shape511);

HAnimJoint506->addChild(HAnimSegment507);

HAnimJoint* HAnimJoint515 = new HAnimJoint();
HAnimJoint515->setName(CString("r_metatarsophalangeal_5"));
HAnimJoint515->setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint515->setCenter(new float[3]{-0.1239,0.0051,-0.0153});
HAnimSegment* HAnimSegment516 = new HAnimSegment();
HAnimSegment516->setName(CString("r_tarsal_proximal_phalanx_5"));
HAnimSegment516->setDEF(CString("hanim_r_tarsal_proximal_phalanx_5"));
Transform* Transform517 = new Transform();
Transform517->setTranslation(new float[3]{-0.1239,0.0051,-0.0153});
Transform* Transform518 = new Transform();
//Empty Transform
Shape* Shape519 = new Shape();
Shape519->setUSE(CString("HAnimJointShape"));
Transform518->addChild(Shape519);

Transform517->addChild(Transform518);

HAnimSegment516->addChild(Transform517);

Shape* Shape520 = new Shape();
LineSet* LineSet521 = new LineSet();
LineSet521->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate522 = new Coordinate();
Coordinate522->setPoint(new float[6]{-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077}, 6);
LineSet521->addChild(Coordinate522);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA523 = new ColorRGBA();
ColorRGBA523->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet521->addChild(ColorRGBA523);

Shape520->setGeometry(LineSet521);

HAnimSegment516->addChild(Shape520);

HAnimJoint515->addChild(HAnimSegment516);

HAnimJoint* HAnimJoint524 = new HAnimJoint();
HAnimJoint524->setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint524->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint524->setCenter(new float[3]{-0.1262,0.0023,-0.0077});
HAnimSegment* HAnimSegment525 = new HAnimSegment();
HAnimSegment525->setName(CString("r_tarsal_middle_phalanx_5"));
HAnimSegment525->setDEF(CString("hanim_r_tarsal_middle_phalanx_5"));
Transform* Transform526 = new Transform();
Transform526->setTranslation(new float[3]{-0.1262,0.0023,-0.0077});
Transform* Transform527 = new Transform();
//Empty Transform
Shape* Shape528 = new Shape();
Shape528->setUSE(CString("HAnimJointShape"));
Transform527->addChild(Shape528);

Transform526->addChild(Transform527);

HAnimSegment525->addChild(Transform526);

Shape* Shape529 = new Shape();
LineSet* LineSet530 = new LineSet();
LineSet530->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate531 = new Coordinate();
Coordinate531->setPoint(new float[6]{-0.1262,0.0023,-0.0077,-0.1271,0,0}, 6);
LineSet530->addChild(Coordinate531);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA532 = new ColorRGBA();
ColorRGBA532->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet530->addChild(ColorRGBA532);

Shape529->setGeometry(LineSet530);

HAnimSegment525->addChild(Shape529);

HAnimJoint524->addChild(HAnimSegment525);

HAnimJoint* HAnimJoint533 = new HAnimJoint();
HAnimJoint533->setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint533->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimJoint533->setCenter(new float[3]{-0.1271,0,0});
HAnimJoint524->addChild(HAnimJoint533);

HAnimJoint515->addChild(HAnimJoint524);

HAnimJoint506->addChild(HAnimJoint515);

HAnimJoint465->addChild(HAnimJoint506);

HAnimJoint456->addChild(HAnimJoint465);

HAnimJoint324->addChild(HAnimJoint456);

HAnimJoint315->addChild(HAnimJoint324);

HAnimJoint306->addChild(HAnimJoint315);

HAnimJoint65->addChild(HAnimJoint306);

HAnimJoint52->addChild(HAnimJoint65);

HAnimJoint* HAnimJoint534 = new HAnimJoint();
HAnimJoint534->setName(CString("vl5"));
HAnimJoint534->setDEF(CString("hanim_vl5"));
HAnimJoint534->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimSegment* HAnimSegment535 = new HAnimSegment();
HAnimSegment535->setName(CString("l5"));
HAnimSegment535->setDEF(CString("hanim_l5"));
Transform* Transform536 = new Transform();
Transform536->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
Transform* Transform537 = new Transform();
//Empty Transform
Shape* Shape538 = new Shape();
Shape538->setUSE(CString("HAnimJointShape"));
Transform537->addChild(Shape538);

Transform536->addChild(Transform537);

HAnimSegment535->addChild(Transform536);

Shape* Shape539 = new Shape();
LineSet* LineSet540 = new LineSet();
LineSet540->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate541 = new Coordinate();
Coordinate541->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet540->addChild(Coordinate541);

//from vl5 to vl4 vertices 2
ColorRGBA* ColorRGBA542 = new ColorRGBA();
ColorRGBA542->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet540->addChild(ColorRGBA542);

Shape539->setGeometry(LineSet540);

HAnimSegment535->addChild(Shape539);

HAnimJoint534->addChild(HAnimSegment535);

HAnimJoint* HAnimJoint543 = new HAnimJoint();
HAnimJoint543->setName(CString("vl4"));
HAnimJoint543->setDEF(CString("hanim_vl4"));
HAnimJoint543->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimSegment* HAnimSegment544 = new HAnimSegment();
HAnimSegment544->setName(CString("l4"));
HAnimSegment544->setDEF(CString("hanim_l4"));
Transform* Transform545 = new Transform();
Transform545->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
Transform* Transform546 = new Transform();
//Empty Transform
Shape* Shape547 = new Shape();
Shape547->setUSE(CString("HAnimJointShape"));
Transform546->addChild(Shape547);

Transform545->addChild(Transform546);

HAnimSegment544->addChild(Transform545);

Shape* Shape548 = new Shape();
LineSet* LineSet549 = new LineSet();
LineSet549->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate550 = new Coordinate();
Coordinate550->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet549->addChild(Coordinate550);

//from vl4 to vl3 vertices 2
ColorRGBA* ColorRGBA551 = new ColorRGBA();
ColorRGBA551->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet549->addChild(ColorRGBA551);

Shape548->setGeometry(LineSet549);

HAnimSegment544->addChild(Shape548);

HAnimJoint543->addChild(HAnimSegment544);

HAnimJoint* HAnimJoint552 = new HAnimJoint();
HAnimJoint552->setName(CString("vl3"));
HAnimJoint552->setDEF(CString("hanim_vl3"));
HAnimJoint552->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimSegment* HAnimSegment553 = new HAnimSegment();
HAnimSegment553->setName(CString("l3"));
HAnimSegment553->setDEF(CString("hanim_l3"));
Transform* Transform554 = new Transform();
Transform554->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
Transform* Transform555 = new Transform();
//Empty Transform
Shape* Shape556 = new Shape();
Shape556->setUSE(CString("HAnimJointShape"));
Transform555->addChild(Shape556);

Transform554->addChild(Transform555);

HAnimSegment553->addChild(Transform554);

Shape* Shape557 = new Shape();
LineSet* LineSet558 = new LineSet();
LineSet558->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate559 = new Coordinate();
Coordinate559->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet558->addChild(Coordinate559);

//from vl3 to vl2 vertices 2
ColorRGBA* ColorRGBA560 = new ColorRGBA();
ColorRGBA560->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet558->addChild(ColorRGBA560);

Shape557->setGeometry(LineSet558);

HAnimSegment553->addChild(Shape557);

HAnimJoint552->addChild(HAnimSegment553);

HAnimJoint* HAnimJoint561 = new HAnimJoint();
HAnimJoint561->setName(CString("vl2"));
HAnimJoint561->setDEF(CString("hanim_vl2"));
HAnimJoint561->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimSegment* HAnimSegment562 = new HAnimSegment();
HAnimSegment562->setName(CString("l2"));
HAnimSegment562->setDEF(CString("hanim_l2"));
Transform* Transform563 = new Transform();
Transform563->setTranslation(new float[3]{0.0045,1.1546,-0.08});
Transform* Transform564 = new Transform();
//Empty Transform
Shape* Shape565 = new Shape();
Shape565->setUSE(CString("HAnimJointShape"));
Transform564->addChild(Shape565);

Transform563->addChild(Transform564);

HAnimSegment562->addChild(Transform563);

Shape* Shape566 = new Shape();
LineSet* LineSet567 = new LineSet();
LineSet567->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate568 = new Coordinate();
Coordinate568->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet567->addChild(Coordinate568);

//from vl2 to vl1 vertices 2
ColorRGBA* ColorRGBA569 = new ColorRGBA();
ColorRGBA569->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet567->addChild(ColorRGBA569);

Shape566->setGeometry(LineSet567);

HAnimSegment562->addChild(Shape566);

HAnimJoint561->addChild(HAnimSegment562);

HAnimJoint* HAnimJoint570 = new HAnimJoint();
HAnimJoint570->setName(CString("vl1"));
HAnimJoint570->setDEF(CString("hanim_vl1"));
HAnimJoint570->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimSegment* HAnimSegment571 = new HAnimSegment();
HAnimSegment571->setName(CString("l1"));
HAnimSegment571->setDEF(CString("hanim_l1"));
Transform* Transform572 = new Transform();
Transform572->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
Transform* Transform573 = new Transform();
//Empty Transform
Shape* Shape574 = new Shape();
Shape574->setUSE(CString("HAnimJointShape"));
Transform573->addChild(Shape574);

Transform572->addChild(Transform573);

HAnimSegment571->addChild(Transform572);

Shape* Shape575 = new Shape();
LineSet* LineSet576 = new LineSet();
LineSet576->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate577 = new Coordinate();
Coordinate577->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet576->addChild(Coordinate577);

//from vl1 to vt12 vertices 2
ColorRGBA* ColorRGBA578 = new ColorRGBA();
ColorRGBA578->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet576->addChild(ColorRGBA578);

Shape575->setGeometry(LineSet576);

HAnimSegment571->addChild(Shape575);

HAnimJoint570->addChild(HAnimSegment571);

HAnimJoint* HAnimJoint579 = new HAnimJoint();
HAnimJoint579->setName(CString("vt12"));
HAnimJoint579->setDEF(CString("hanim_vt12"));
HAnimJoint579->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimSegment* HAnimSegment580 = new HAnimSegment();
HAnimSegment580->setName(CString("t12"));
HAnimSegment580->setDEF(CString("hanim_t12"));
Transform* Transform581 = new Transform();
Transform581->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
Transform* Transform582 = new Transform();
//Empty Transform
Shape* Shape583 = new Shape();
Shape583->setUSE(CString("HAnimJointShape"));
Transform582->addChild(Shape583);

Transform581->addChild(Transform582);

HAnimSegment580->addChild(Transform581);

Shape* Shape584 = new Shape();
LineSet* LineSet585 = new LineSet();
LineSet585->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate586 = new Coordinate();
Coordinate586->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet585->addChild(Coordinate586);

//from vt12 to vt11 vertices 2
ColorRGBA* ColorRGBA587 = new ColorRGBA();
ColorRGBA587->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet585->addChild(ColorRGBA587);

Shape584->setGeometry(LineSet585);

HAnimSegment580->addChild(Shape584);

HAnimJoint579->addChild(HAnimSegment580);

HAnimJoint* HAnimJoint588 = new HAnimJoint();
HAnimJoint588->setName(CString("vt11"));
HAnimJoint588->setDEF(CString("hanim_vt11"));
HAnimJoint588->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimSegment* HAnimSegment589 = new HAnimSegment();
HAnimSegment589->setName(CString("t11"));
HAnimSegment589->setDEF(CString("hanim_t11"));
Transform* Transform590 = new Transform();
Transform590->setTranslation(new float[3]{0.0053,1.2679,-0.081});
Transform* Transform591 = new Transform();
//Empty Transform
Shape* Shape592 = new Shape();
Shape592->setUSE(CString("HAnimJointShape"));
Transform591->addChild(Shape592);

Transform590->addChild(Transform591);

HAnimSegment589->addChild(Transform590);

Shape* Shape593 = new Shape();
LineSet* LineSet594 = new LineSet();
LineSet594->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate595 = new Coordinate();
Coordinate595->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet594->addChild(Coordinate595);

//from vt11 to vt10 vertices 2
ColorRGBA* ColorRGBA596 = new ColorRGBA();
ColorRGBA596->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet594->addChild(ColorRGBA596);

Shape593->setGeometry(LineSet594);

HAnimSegment589->addChild(Shape593);

HAnimJoint588->addChild(HAnimSegment589);

HAnimJoint* HAnimJoint597 = new HAnimJoint();
HAnimJoint597->setName(CString("vt10"));
HAnimJoint597->setDEF(CString("hanim_vt10"));
HAnimJoint597->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimSegment* HAnimSegment598 = new HAnimSegment();
HAnimSegment598->setName(CString("t10"));
HAnimSegment598->setDEF(CString("hanim_t10"));
Transform* Transform599 = new Transform();
Transform599->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
Transform* Transform600 = new Transform();
//Empty Transform
Shape* Shape601 = new Shape();
Shape601->setUSE(CString("HAnimJointShape"));
Transform600->addChild(Shape601);

Transform599->addChild(Transform600);

HAnimSegment598->addChild(Transform599);

Shape* Shape602 = new Shape();
LineSet* LineSet603 = new LineSet();
LineSet603->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate604 = new Coordinate();
Coordinate604->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet603->addChild(Coordinate604);

//from vt10 to vt9 vertices 2
ColorRGBA* ColorRGBA605 = new ColorRGBA();
ColorRGBA605->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet603->addChild(ColorRGBA605);

Shape602->setGeometry(LineSet603);

HAnimSegment598->addChild(Shape602);

HAnimJoint597->addChild(HAnimSegment598);

HAnimJoint* HAnimJoint606 = new HAnimJoint();
HAnimJoint606->setName(CString("vt9"));
HAnimJoint606->setDEF(CString("hanim_vt9"));
HAnimJoint606->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimSegment* HAnimSegment607 = new HAnimSegment();
HAnimSegment607->setName(CString("t9"));
HAnimSegment607->setDEF(CString("hanim_t9"));
Transform* Transform608 = new Transform();
Transform608->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
Transform* Transform609 = new Transform();
//Empty Transform
Shape* Shape610 = new Shape();
Shape610->setUSE(CString("HAnimJointShape"));
Transform609->addChild(Shape610);

Transform608->addChild(Transform609);

HAnimSegment607->addChild(Transform608);

Shape* Shape611 = new Shape();
LineSet* LineSet612 = new LineSet();
LineSet612->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate613 = new Coordinate();
Coordinate613->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet612->addChild(Coordinate613);

//from vt9 to vt8 vertices 2
ColorRGBA* ColorRGBA614 = new ColorRGBA();
ColorRGBA614->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet612->addChild(ColorRGBA614);

Shape611->setGeometry(LineSet612);

HAnimSegment607->addChild(Shape611);

HAnimJoint606->addChild(HAnimSegment607);

HAnimJoint* HAnimJoint615 = new HAnimJoint();
HAnimJoint615->setName(CString("vt8"));
HAnimJoint615->setDEF(CString("hanim_vt8"));
HAnimJoint615->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimSegment* HAnimSegment616 = new HAnimSegment();
HAnimSegment616->setName(CString("t8"));
HAnimSegment616->setDEF(CString("hanim_t8"));
Transform* Transform617 = new Transform();
Transform617->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
Transform* Transform618 = new Transform();
//Empty Transform
Shape* Shape619 = new Shape();
Shape619->setUSE(CString("HAnimJointShape"));
Transform618->addChild(Shape619);

Transform617->addChild(Transform618);

HAnimSegment616->addChild(Transform617);

Shape* Shape620 = new Shape();
LineSet* LineSet621 = new LineSet();
LineSet621->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate622 = new Coordinate();
Coordinate622->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet621->addChild(Coordinate622);

//from vt8 to vt7 vertices 2
ColorRGBA* ColorRGBA623 = new ColorRGBA();
ColorRGBA623->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet621->addChild(ColorRGBA623);

Shape620->setGeometry(LineSet621);

HAnimSegment616->addChild(Shape620);

HAnimJoint615->addChild(HAnimSegment616);

HAnimJoint* HAnimJoint624 = new HAnimJoint();
HAnimJoint624->setName(CString("vt7"));
HAnimJoint624->setDEF(CString("hanim_vt7"));
HAnimJoint624->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimSegment* HAnimSegment625 = new HAnimSegment();
HAnimSegment625->setName(CString("t7"));
HAnimSegment625->setDEF(CString("hanim_t7"));
Transform* Transform626 = new Transform();
Transform626->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
Transform* Transform627 = new Transform();
//Empty Transform
Shape* Shape628 = new Shape();
Shape628->setUSE(CString("HAnimJointShape"));
Transform627->addChild(Shape628);

Transform626->addChild(Transform627);

HAnimSegment625->addChild(Transform626);

Shape* Shape629 = new Shape();
LineSet* LineSet630 = new LineSet();
LineSet630->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate631 = new Coordinate();
Coordinate631->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet630->addChild(Coordinate631);

//from vt7 to vt6 vertices 2
ColorRGBA* ColorRGBA632 = new ColorRGBA();
ColorRGBA632->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet630->addChild(ColorRGBA632);

Shape629->setGeometry(LineSet630);

HAnimSegment625->addChild(Shape629);

HAnimJoint624->addChild(HAnimSegment625);

HAnimJoint* HAnimJoint633 = new HAnimJoint();
HAnimJoint633->setName(CString("vt6"));
HAnimJoint633->setDEF(CString("hanim_vt6"));
HAnimJoint633->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimSegment* HAnimSegment634 = new HAnimSegment();
HAnimSegment634->setName(CString("t6"));
HAnimSegment634->setDEF(CString("hanim_t6"));
Transform* Transform635 = new Transform();
Transform635->setTranslation(new float[3]{0.0059,1.3866,-0.08});
Transform* Transform636 = new Transform();
//Empty Transform
Shape* Shape637 = new Shape();
Shape637->setUSE(CString("HAnimJointShape"));
Transform636->addChild(Shape637);

Transform635->addChild(Transform636);

HAnimSegment634->addChild(Transform635);

Shape* Shape638 = new Shape();
LineSet* LineSet639 = new LineSet();
LineSet639->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate640 = new Coordinate();
Coordinate640->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet639->addChild(Coordinate640);

//from vt6 to vt5 vertices 2
ColorRGBA* ColorRGBA641 = new ColorRGBA();
ColorRGBA641->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet639->addChild(ColorRGBA641);

Shape638->setGeometry(LineSet639);

HAnimSegment634->addChild(Shape638);

HAnimJoint633->addChild(HAnimSegment634);

HAnimJoint* HAnimJoint642 = new HAnimJoint();
HAnimJoint642->setName(CString("vt5"));
HAnimJoint642->setDEF(CString("hanim_vt5"));
HAnimJoint642->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimSegment* HAnimSegment643 = new HAnimSegment();
HAnimSegment643->setName(CString("t5"));
HAnimSegment643->setDEF(CString("hanim_t5"));
Transform* Transform644 = new Transform();
Transform644->setTranslation(new float[3]{0.006,1.4102,-0.0745});
Transform* Transform645 = new Transform();
//Empty Transform
Shape* Shape646 = new Shape();
Shape646->setUSE(CString("HAnimJointShape"));
Transform645->addChild(Shape646);

Transform644->addChild(Transform645);

HAnimSegment643->addChild(Transform644);

Shape* Shape647 = new Shape();
LineSet* LineSet648 = new LineSet();
LineSet648->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate649 = new Coordinate();
Coordinate649->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet648->addChild(Coordinate649);

//from vt5 to vt4 vertices 2
ColorRGBA* ColorRGBA650 = new ColorRGBA();
ColorRGBA650->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet648->addChild(ColorRGBA650);

Shape647->setGeometry(LineSet648);

HAnimSegment643->addChild(Shape647);

HAnimJoint642->addChild(HAnimSegment643);

HAnimJoint* HAnimJoint651 = new HAnimJoint();
HAnimJoint651->setName(CString("vt4"));
HAnimJoint651->setDEF(CString("hanim_vt4"));
HAnimJoint651->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimSegment* HAnimSegment652 = new HAnimSegment();
HAnimSegment652->setName(CString("t4"));
HAnimSegment652->setDEF(CString("hanim_t4"));
Transform* Transform653 = new Transform();
Transform653->setTranslation(new float[3]{0.0061,1.432,-0.0675});
Transform* Transform654 = new Transform();
//Empty Transform
Shape* Shape655 = new Shape();
Shape655->setUSE(CString("HAnimJointShape"));
Transform654->addChild(Shape655);

Transform653->addChild(Transform654);

HAnimSegment652->addChild(Transform653);

Shape* Shape656 = new Shape();
LineSet* LineSet657 = new LineSet();
LineSet657->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate658 = new Coordinate();
Coordinate658->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet657->addChild(Coordinate658);

//from vt4 to vt3 vertices 2
ColorRGBA* ColorRGBA659 = new ColorRGBA();
ColorRGBA659->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet657->addChild(ColorRGBA659);

Shape656->setGeometry(LineSet657);

HAnimSegment652->addChild(Shape656);

HAnimJoint651->addChild(HAnimSegment652);

HAnimJoint* HAnimJoint660 = new HAnimJoint();
HAnimJoint660->setName(CString("vt3"));
HAnimJoint660->setDEF(CString("hanim_vt3"));
HAnimJoint660->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimSegment* HAnimSegment661 = new HAnimSegment();
HAnimSegment661->setName(CString("t3"));
HAnimSegment661->setDEF(CString("hanim_t3"));
Transform* Transform662 = new Transform();
Transform662->setTranslation(new float[3]{0.0062,1.4583,-0.057});
Transform* Transform663 = new Transform();
//Empty Transform
Shape* Shape664 = new Shape();
Shape664->setUSE(CString("HAnimJointShape"));
Transform663->addChild(Shape664);

Transform662->addChild(Transform663);

HAnimSegment661->addChild(Transform662);

Shape* Shape665 = new Shape();
LineSet* LineSet666 = new LineSet();
LineSet666->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate667 = new Coordinate();
Coordinate667->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet666->addChild(Coordinate667);

//from vt3 to vt2 vertices 2
ColorRGBA* ColorRGBA668 = new ColorRGBA();
ColorRGBA668->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet666->addChild(ColorRGBA668);

Shape665->setGeometry(LineSet666);

HAnimSegment661->addChild(Shape665);

HAnimJoint660->addChild(HAnimSegment661);

HAnimJoint* HAnimJoint669 = new HAnimJoint();
HAnimJoint669->setName(CString("vt2"));
HAnimJoint669->setDEF(CString("hanim_vt2"));
HAnimJoint669->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimSegment* HAnimSegment670 = new HAnimSegment();
HAnimSegment670->setName(CString("t2"));
HAnimSegment670->setDEF(CString("hanim_t2"));
Transform* Transform671 = new Transform();
Transform671->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
Transform* Transform672 = new Transform();
//Empty Transform
Shape* Shape673 = new Shape();
Shape673->setUSE(CString("HAnimJointShape"));
Transform672->addChild(Shape673);

Transform671->addChild(Transform672);

HAnimSegment670->addChild(Transform671);

Shape* Shape674 = new Shape();
LineSet* LineSet675 = new LineSet();
LineSet675->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate676 = new Coordinate();
Coordinate676->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet675->addChild(Coordinate676);

//from vt2 to vt1 vertices 2
ColorRGBA* ColorRGBA677 = new ColorRGBA();
ColorRGBA677->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet675->addChild(ColorRGBA677);

Shape674->setGeometry(LineSet675);

HAnimSegment670->addChild(Shape674);

HAnimJoint669->addChild(HAnimSegment670);

HAnimJoint* HAnimJoint678 = new HAnimJoint();
HAnimJoint678->setName(CString("vt1"));
HAnimJoint678->setDEF(CString("hanim_vt1"));
HAnimJoint678->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimSegment* HAnimSegment679 = new HAnimSegment();
HAnimSegment679->setName(CString("t1"));
HAnimSegment679->setDEF(CString("hanim_t1"));
Transform* Transform680 = new Transform();
Transform680->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
Transform* Transform681 = new Transform();
//Empty Transform
Shape* Shape682 = new Shape();
Shape682->setUSE(CString("HAnimJointShape"));
Transform681->addChild(Shape682);

Transform680->addChild(Transform681);

HAnimSegment679->addChild(Transform680);

Shape* Shape683 = new Shape();
LineSet* LineSet684 = new LineSet();
LineSet684->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate685 = new Coordinate();
Coordinate685->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet684->addChild(Coordinate685);

//from vt1 to vc7 vertices 2
ColorRGBA* ColorRGBA686 = new ColorRGBA();
ColorRGBA686->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet684->addChild(ColorRGBA686);

Shape683->setGeometry(LineSet684);

HAnimSegment679->addChild(Shape683);

Shape* Shape687 = new Shape();
LineSet* LineSet688 = new LineSet();
LineSet688->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate689 = new Coordinate();
Coordinate689->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet688->addChild(Coordinate689);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA* ColorRGBA690 = new ColorRGBA();
ColorRGBA690->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet688->addChild(ColorRGBA690);

Shape687->setGeometry(LineSet688);

HAnimSegment679->addChild(Shape687);

Shape* Shape691 = new Shape();
LineSet* LineSet692 = new LineSet();
LineSet692->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate693 = new Coordinate();
Coordinate693->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
LineSet692->addChild(Coordinate693);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA* ColorRGBA694 = new ColorRGBA();
ColorRGBA694->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet692->addChild(ColorRGBA694);

Shape691->setGeometry(LineSet692);

HAnimSegment679->addChild(Shape691);

HAnimJoint678->addChild(HAnimSegment679);

HAnimJoint* HAnimJoint695 = new HAnimJoint();
HAnimJoint695->setName(CString("vc7"));
HAnimJoint695->setDEF(CString("hanim_vc7"));
HAnimJoint695->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimSegment* HAnimSegment696 = new HAnimSegment();
HAnimSegment696->setName(CString("c7"));
HAnimSegment696->setDEF(CString("hanim_c7"));
Transform* Transform697 = new Transform();
Transform697->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
Transform* Transform698 = new Transform();
//Empty Transform
Shape* Shape699 = new Shape();
Shape699->setUSE(CString("HAnimJointShape"));
Transform698->addChild(Shape699);

Transform697->addChild(Transform698);

HAnimSegment696->addChild(Transform697);

Shape* Shape700 = new Shape();
LineSet* LineSet701 = new LineSet();
LineSet701->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate702 = new Coordinate();
Coordinate702->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet701->addChild(Coordinate702);

//from vc7 to vc6 vertices 2
ColorRGBA* ColorRGBA703 = new ColorRGBA();
ColorRGBA703->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet701->addChild(ColorRGBA703);

Shape700->setGeometry(LineSet701);

HAnimSegment696->addChild(Shape700);

HAnimJoint695->addChild(HAnimSegment696);

HAnimJoint* HAnimJoint704 = new HAnimJoint();
HAnimJoint704->setName(CString("vc6"));
HAnimJoint704->setDEF(CString("hanim_vc6"));
HAnimJoint704->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimSegment* HAnimSegment705 = new HAnimSegment();
HAnimSegment705->setName(CString("c6"));
HAnimSegment705->setDEF(CString("hanim_c6"));
Transform* Transform706 = new Transform();
Transform706->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
Transform* Transform707 = new Transform();
//Empty Transform
Shape* Shape708 = new Shape();
Shape708->setUSE(CString("HAnimJointShape"));
Transform707->addChild(Shape708);

Transform706->addChild(Transform707);

HAnimSegment705->addChild(Transform706);

Shape* Shape709 = new Shape();
LineSet* LineSet710 = new LineSet();
LineSet710->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate711 = new Coordinate();
Coordinate711->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet710->addChild(Coordinate711);

//from vc6 to vc5 vertices 2
ColorRGBA* ColorRGBA712 = new ColorRGBA();
ColorRGBA712->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet710->addChild(ColorRGBA712);

Shape709->setGeometry(LineSet710);

HAnimSegment705->addChild(Shape709);

HAnimJoint704->addChild(HAnimSegment705);

HAnimJoint* HAnimJoint713 = new HAnimJoint();
HAnimJoint713->setName(CString("vc5"));
HAnimJoint713->setDEF(CString("hanim_vc5"));
HAnimJoint713->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimSegment* HAnimSegment714 = new HAnimSegment();
HAnimSegment714->setName(CString("c5"));
HAnimSegment714->setDEF(CString("hanim_c5"));
Transform* Transform715 = new Transform();
Transform715->setTranslation(new float[3]{0.0066,1.552,-0.0082});
Transform* Transform716 = new Transform();
//Empty Transform
Shape* Shape717 = new Shape();
Shape717->setUSE(CString("HAnimJointShape"));
Transform716->addChild(Shape717);

Transform715->addChild(Transform716);

HAnimSegment714->addChild(Transform715);

Shape* Shape718 = new Shape();
LineSet* LineSet719 = new LineSet();
LineSet719->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate720 = new Coordinate();
Coordinate720->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet719->addChild(Coordinate720);

//from vc5 to vc4 vertices 2
ColorRGBA* ColorRGBA721 = new ColorRGBA();
ColorRGBA721->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet719->addChild(ColorRGBA721);

Shape718->setGeometry(LineSet719);

HAnimSegment714->addChild(Shape718);

HAnimJoint713->addChild(HAnimSegment714);

HAnimJoint* HAnimJoint722 = new HAnimJoint();
HAnimJoint722->setName(CString("vc4"));
HAnimJoint722->setDEF(CString("hanim_vc4"));
HAnimJoint722->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimSegment* HAnimSegment723 = new HAnimSegment();
HAnimSegment723->setName(CString("c4"));
HAnimSegment723->setDEF(CString("hanim_c4"));
Transform* Transform724 = new Transform();
Transform724->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
Transform* Transform725 = new Transform();
//Empty Transform
Shape* Shape726 = new Shape();
Shape726->setUSE(CString("HAnimJointShape"));
Transform725->addChild(Shape726);

Transform724->addChild(Transform725);

HAnimSegment723->addChild(Transform724);

Shape* Shape727 = new Shape();
LineSet* LineSet728 = new LineSet();
LineSet728->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate729 = new Coordinate();
Coordinate729->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet728->addChild(Coordinate729);

//from vc4 to vc3 vertices 2
ColorRGBA* ColorRGBA730 = new ColorRGBA();
ColorRGBA730->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet728->addChild(ColorRGBA730);

Shape727->setGeometry(LineSet728);

HAnimSegment723->addChild(Shape727);

HAnimJoint722->addChild(HAnimSegment723);

HAnimJoint* HAnimJoint731 = new HAnimJoint();
HAnimJoint731->setName(CString("vc3"));
HAnimJoint731->setDEF(CString("hanim_vc3"));
HAnimJoint731->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimSegment* HAnimSegment732 = new HAnimSegment();
HAnimSegment732->setName(CString("c3"));
HAnimSegment732->setDEF(CString("hanim_c3"));
Transform* Transform733 = new Transform();
Transform733->setTranslation(new float[3]{0.0066,1.58,-0.0103});
Transform* Transform734 = new Transform();
//Empty Transform
Shape* Shape735 = new Shape();
Shape735->setUSE(CString("HAnimJointShape"));
Transform734->addChild(Shape735);

Transform733->addChild(Transform734);

HAnimSegment732->addChild(Transform733);

Shape* Shape736 = new Shape();
LineSet* LineSet737 = new LineSet();
LineSet737->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate738 = new Coordinate();
Coordinate738->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet737->addChild(Coordinate738);

//from vc3 to vc2 vertices 2
ColorRGBA* ColorRGBA739 = new ColorRGBA();
ColorRGBA739->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet737->addChild(ColorRGBA739);

Shape736->setGeometry(LineSet737);

HAnimSegment732->addChild(Shape736);

HAnimJoint731->addChild(HAnimSegment732);

HAnimJoint* HAnimJoint740 = new HAnimJoint();
HAnimJoint740->setName(CString("vc2"));
HAnimJoint740->setDEF(CString("hanim_vc2"));
HAnimJoint740->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimSegment* HAnimSegment741 = new HAnimSegment();
HAnimSegment741->setName(CString("c2"));
HAnimSegment741->setDEF(CString("hanim_c2"));
Transform* Transform742 = new Transform();
Transform742->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
Transform* Transform743 = new Transform();
//Empty Transform
Shape* Shape744 = new Shape();
Shape744->setUSE(CString("HAnimJointShape"));
Transform743->addChild(Shape744);

Transform742->addChild(Transform743);

HAnimSegment741->addChild(Transform742);

Shape* Shape745 = new Shape();
LineSet* LineSet746 = new LineSet();
LineSet746->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate747 = new Coordinate();
Coordinate747->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet746->addChild(Coordinate747);

//from vc2 to vc1 vertices 2
ColorRGBA* ColorRGBA748 = new ColorRGBA();
ColorRGBA748->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet746->addChild(ColorRGBA748);

Shape745->setGeometry(LineSet746);

HAnimSegment741->addChild(Shape745);

HAnimJoint740->addChild(HAnimSegment741);

HAnimJoint* HAnimJoint749 = new HAnimJoint();
HAnimJoint749->setName(CString("vc1"));
HAnimJoint749->setDEF(CString("hanim_vc1"));
HAnimJoint749->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimSegment* HAnimSegment750 = new HAnimSegment();
HAnimSegment750->setName(CString("c1"));
HAnimSegment750->setDEF(CString("hanim_c1"));
Transform* Transform751 = new Transform();
Transform751->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
Transform* Transform752 = new Transform();
//Empty Transform
Shape* Shape753 = new Shape();
Shape753->setUSE(CString("HAnimJointShape"));
Transform752->addChild(Shape753);

Transform751->addChild(Transform752);

HAnimSegment750->addChild(Transform751);

Shape* Shape754 = new Shape();
LineSet* LineSet755 = new LineSet();
LineSet755->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate756 = new Coordinate();
Coordinate756->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet755->addChild(Coordinate756);

//from vc1 to skullbase vertices 2
ColorRGBA* ColorRGBA757 = new ColorRGBA();
ColorRGBA757->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet755->addChild(ColorRGBA757);

Shape754->setGeometry(LineSet755);

HAnimSegment750->addChild(Shape754);

HAnimJoint749->addChild(HAnimSegment750);

HAnimJoint* HAnimJoint758 = new HAnimJoint();
HAnimJoint758->setName(CString("skullbase"));
HAnimJoint758->setDEF(CString("hanim_skullbase"));
HAnimJoint758->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimSegment* HAnimSegment759 = new HAnimSegment();
HAnimSegment759->setName(CString("skull"));
HAnimSegment759->setDEF(CString("hanim_skull"));
Transform* Transform760 = new Transform();
Transform760->setTranslation(new float[3]{0.0044,1.6209,0.0236});
Transform* Transform761 = new Transform();
//Empty Transform
Shape* Shape762 = new Shape();
Shape762->setUSE(CString("HAnimJointShape"));
Transform761->addChild(Shape762);

Transform760->addChild(Transform761);

HAnimSegment759->addChild(Transform760);

Shape* Shape763 = new Shape();
LineSet* LineSet764 = new LineSet();
LineSet764->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate765 = new Coordinate();
Coordinate765->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689}, 6);
LineSet764->addChild(Coordinate765);

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA* ColorRGBA766 = new ColorRGBA();
ColorRGBA766->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet764->addChild(ColorRGBA766);

Shape763->setGeometry(LineSet764);

HAnimSegment759->addChild(Shape763);

Shape* Shape767 = new Shape();
LineSet* LineSet768 = new LineSet();
LineSet768->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate769 = new Coordinate();
Coordinate769->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689}, 6);
LineSet768->addChild(Coordinate769);

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA* ColorRGBA770 = new ColorRGBA();
ColorRGBA770->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet768->addChild(ColorRGBA770);

Shape767->setGeometry(LineSet768);

HAnimSegment759->addChild(Shape767);

Shape* Shape771 = new Shape();
LineSet* LineSet772 = new LineSet();
LineSet772->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate773 = new Coordinate();
Coordinate773->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188}, 6);
LineSet772->addChild(Coordinate773);

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA* ColorRGBA774 = new ColorRGBA();
ColorRGBA774->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet772->addChild(ColorRGBA774);

Shape771->setGeometry(LineSet772);

HAnimSegment759->addChild(Shape771);

Shape* Shape775 = new Shape();
LineSet* LineSet776 = new LineSet();
LineSet776->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate777 = new Coordinate();
Coordinate777->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188}, 6);
LineSet776->addChild(Coordinate777);

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA* ColorRGBA778 = new ColorRGBA();
ColorRGBA778->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet776->addChild(ColorRGBA778);

Shape775->setGeometry(LineSet776);

HAnimSegment759->addChild(Shape775);

Shape* Shape779 = new Shape();
LineSet* LineSet780 = new LineSet();
LineSet780->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate781 = new Coordinate();
Coordinate781->setPoint(new float[6]{0.0044,1.6209,0.0236,0.0216,1.4053,0.0051}, 6);
LineSet780->addChild(Coordinate781);

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA* ColorRGBA782 = new ColorRGBA();
ColorRGBA782->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet780->addChild(ColorRGBA782);

Shape779->setGeometry(LineSet780);

HAnimSegment759->addChild(Shape779);

Shape* Shape783 = new Shape();
LineSet* LineSet784 = new LineSet();
LineSet784->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate785 = new Coordinate();
Coordinate785->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051}, 6);
LineSet784->addChild(Coordinate785);

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA* ColorRGBA786 = new ColorRGBA();
ColorRGBA786->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet784->addChild(ColorRGBA786);

Shape783->setGeometry(LineSet784);

HAnimSegment759->addChild(Shape783);

Shape* Shape787 = new Shape();
LineSet* LineSet788 = new LineSet();
LineSet788->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate789 = new Coordinate();
Coordinate789->setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865}, 6);
LineSet788->addChild(Coordinate789);

//from skullbase to temporomandibular vertices 2
ColorRGBA* ColorRGBA790 = new ColorRGBA();
ColorRGBA790->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet788->addChild(ColorRGBA790);

Shape787->setGeometry(LineSet788);

HAnimSegment759->addChild(Shape787);

HAnimJoint758->addChild(HAnimSegment759);

HAnimJoint* HAnimJoint791 = new HAnimJoint();
HAnimJoint791->setName(CString("l_eyelid_joint"));
HAnimJoint791->setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint791->setCenter(new float[3]{0.0503,1.4157,-0.0689});
HAnimJoint758->addChild(HAnimJoint791);

HAnimJoint* HAnimJoint792 = new HAnimJoint();
HAnimJoint792->setName(CString("r_eyelid_joint"));
HAnimJoint792->setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint792->setCenter(new float[3]{-0.0507,1.4157,-0.0689});
HAnimJoint758->addChild(HAnimJoint792);

HAnimJoint* HAnimJoint793 = new HAnimJoint();
HAnimJoint793->setName(CString("l_eyeball_joint"));
HAnimJoint793->setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint793->setCenter(new float[3]{0.0479,1.3963,-0.0188});
HAnimJoint758->addChild(HAnimJoint793);

HAnimJoint* HAnimJoint794 = new HAnimJoint();
HAnimJoint794->setName(CString("r_eyeball_joint"));
HAnimJoint794->setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint794->setCenter(new float[3]{-0.0483,1.3963,-0.0188});
HAnimJoint758->addChild(HAnimJoint794);

HAnimJoint* HAnimJoint795 = new HAnimJoint();
HAnimJoint795->setName(CString("l_eyebrow_joint"));
HAnimJoint795->setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint795->setCenter(new float[3]{0.0216,1.4053,0.0051});
HAnimJoint758->addChild(HAnimJoint795);

HAnimJoint* HAnimJoint796 = new HAnimJoint();
HAnimJoint796->setName(CString("r_eyebrow_joint"));
HAnimJoint796->setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint796->setCenter(new float[3]{-0.0219,1.4053,0.0051});
HAnimJoint758->addChild(HAnimJoint796);

HAnimJoint* HAnimJoint797 = new HAnimJoint();
HAnimJoint797->setName(CString("temporomandibular"));
HAnimJoint797->setDEF(CString("hanim_temporomandibular"));
HAnimJoint797->setCenter(new float[3]{-0.0002,1.3043,-0.0865});
HAnimJoint758->addChild(HAnimJoint797);

HAnimJoint749->addChild(HAnimJoint758);

HAnimJoint740->addChild(HAnimJoint749);

HAnimJoint731->addChild(HAnimJoint740);

HAnimJoint722->addChild(HAnimJoint731);

HAnimJoint713->addChild(HAnimJoint722);

HAnimJoint704->addChild(HAnimJoint713);

HAnimJoint695->addChild(HAnimJoint704);

HAnimJoint678->addChild(HAnimJoint695);

HAnimJoint* HAnimJoint798 = new HAnimJoint();
HAnimJoint798->setName(CString("l_sternoclavicular"));
HAnimJoint798->setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint798->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimSegment* HAnimSegment799 = new HAnimSegment();
HAnimSegment799->setName(CString("l_clavicle"));
HAnimSegment799->setDEF(CString("hanim_l_clavicle"));
Transform* Transform800 = new Transform();
Transform800->setTranslation(new float[3]{0.082,1.4488,-0.0353});
Transform* Transform801 = new Transform();
//Empty Transform
Shape* Shape802 = new Shape();
Shape802->setUSE(CString("HAnimJointShape"));
Transform801->addChild(Shape802);

Transform800->addChild(Transform801);

HAnimSegment799->addChild(Transform800);

Shape* Shape803 = new Shape();
LineSet* LineSet804 = new LineSet();
LineSet804->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate805 = new Coordinate();
Coordinate805->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet804->addChild(Coordinate805);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA* ColorRGBA806 = new ColorRGBA();
ColorRGBA806->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet804->addChild(ColorRGBA806);

Shape803->setGeometry(LineSet804);

HAnimSegment799->addChild(Shape803);

HAnimJoint798->addChild(HAnimSegment799);

HAnimJoint* HAnimJoint807 = new HAnimJoint();
HAnimJoint807->setName(CString("l_acromioclavicular"));
HAnimJoint807->setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint807->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimSegment* HAnimSegment808 = new HAnimSegment();
HAnimSegment808->setName(CString("l_scapula"));
HAnimSegment808->setDEF(CString("hanim_l_scapula"));
Transform* Transform809 = new Transform();
Transform809->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
Transform* Transform810 = new Transform();
//Empty Transform
Shape* Shape811 = new Shape();
Shape811->setUSE(CString("HAnimJointShape"));
Transform810->addChild(Shape811);

Transform809->addChild(Transform810);

HAnimSegment808->addChild(Transform809);

Shape* Shape812 = new Shape();
LineSet* LineSet813 = new LineSet();
LineSet813->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate814 = new Coordinate();
Coordinate814->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet813->addChild(Coordinate814);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA* ColorRGBA815 = new ColorRGBA();
ColorRGBA815->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet813->addChild(ColorRGBA815);

Shape812->setGeometry(LineSet813);

HAnimSegment808->addChild(Shape812);

HAnimJoint807->addChild(HAnimSegment808);

HAnimJoint* HAnimJoint816 = new HAnimJoint();
HAnimJoint816->setName(CString("l_shoulder"));
HAnimJoint816->setDEF(CString("hanim_l_shoulder"));
HAnimJoint816->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimSegment* HAnimSegment817 = new HAnimSegment();
HAnimSegment817->setName(CString("l_upperarm"));
HAnimSegment817->setDEF(CString("hanim_l_upperarm"));
Transform* Transform818 = new Transform();
Transform818->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
Transform* Transform819 = new Transform();
//Empty Transform
Shape* Shape820 = new Shape();
Shape820->setUSE(CString("HAnimJointShape"));
Transform819->addChild(Shape820);

Transform818->addChild(Transform819);

HAnimSegment817->addChild(Transform818);

Shape* Shape821 = new Shape();
LineSet* LineSet822 = new LineSet();
LineSet822->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate823 = new Coordinate();
Coordinate823->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet822->addChild(Coordinate823);

//from l_shoulder to l_elbow vertices 2
ColorRGBA* ColorRGBA824 = new ColorRGBA();
ColorRGBA824->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet822->addChild(ColorRGBA824);

Shape821->setGeometry(LineSet822);

HAnimSegment817->addChild(Shape821);

HAnimJoint816->addChild(HAnimSegment817);

HAnimJoint* HAnimJoint825 = new HAnimJoint();
HAnimJoint825->setName(CString("l_elbow"));
HAnimJoint825->setDEF(CString("hanim_l_elbow"));
HAnimJoint825->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimSegment* HAnimSegment826 = new HAnimSegment();
HAnimSegment826->setName(CString("l_forearm"));
HAnimSegment826->setDEF(CString("hanim_l_forearm"));
Transform* Transform827 = new Transform();
Transform827->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
Transform* Transform828 = new Transform();
//Empty Transform
Shape* Shape829 = new Shape();
Shape829->setUSE(CString("HAnimJointShape"));
Transform828->addChild(Shape829);

Transform827->addChild(Transform828);

HAnimSegment826->addChild(Transform827);

Shape* Shape830 = new Shape();
LineSet* LineSet831 = new LineSet();
LineSet831->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate832 = new Coordinate();
Coordinate832->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet831->addChild(Coordinate832);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA* ColorRGBA833 = new ColorRGBA();
ColorRGBA833->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet831->addChild(ColorRGBA833);

Shape830->setGeometry(LineSet831);

HAnimSegment826->addChild(Shape830);

HAnimJoint825->addChild(HAnimSegment826);

HAnimJoint* HAnimJoint834 = new HAnimJoint();
HAnimJoint834->setName(CString("l_radiocarpal"));
HAnimJoint834->setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint834->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimSegment* HAnimSegment835 = new HAnimSegment();
HAnimSegment835->setName(CString("l_carpal"));
HAnimSegment835->setDEF(CString("hanim_l_carpal"));
Transform* Transform836 = new Transform();
Transform836->setScale(new float[3]{0.2,0.2,0.2});
Transform836->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform836->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
Transform* Transform837 = new Transform();
Transform837->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
Shape* Shape838 = new Shape();
Shape838->setUSE(CString("HAnimJointShape"));
Transform837->addChild(Shape838);

Transform836->addChild(Transform837);

HAnimSegment835->addChild(Transform836);

Shape* Shape839 = new Shape();
LineSet* LineSet840 = new LineSet();
LineSet840->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate841 = new Coordinate();
Coordinate841->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826}, 6);
LineSet840->addChild(Coordinate841);

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA* ColorRGBA842 = new ColorRGBA();
ColorRGBA842->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet840->addChild(ColorRGBA842);

Shape839->setGeometry(LineSet840);

HAnimSegment835->addChild(Shape839);

Shape* Shape843 = new Shape();
LineSet* LineSet844 = new LineSet();
LineSet844->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate845 = new Coordinate();
Coordinate845->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935}, 6);
LineSet844->addChild(Coordinate845);

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA* ColorRGBA846 = new ColorRGBA();
ColorRGBA846->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet844->addChild(ColorRGBA846);

Shape843->setGeometry(LineSet844);

HAnimSegment835->addChild(Shape843);

Shape* Shape847 = new Shape();
LineSet* LineSet848 = new LineSet();
LineSet848->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate849 = new Coordinate();
Coordinate849->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067}, 6);
LineSet848->addChild(Coordinate849);

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA* ColorRGBA850 = new ColorRGBA();
ColorRGBA850->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet848->addChild(ColorRGBA850);

Shape847->setGeometry(LineSet848);

HAnimSegment835->addChild(Shape847);

Shape* Shape851 = new Shape();
LineSet* LineSet852 = new LineSet();
LineSet852->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate853 = new Coordinate();
Coordinate853->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276}, 6);
LineSet852->addChild(Coordinate853);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA* ColorRGBA854 = new ColorRGBA();
ColorRGBA854->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet852->addChild(ColorRGBA854);

Shape851->setGeometry(LineSet852);

HAnimSegment835->addChild(Shape851);

HAnimJoint834->addChild(HAnimSegment835);

HAnimJoint* HAnimJoint855 = new HAnimJoint();
HAnimJoint855->setName(CString("l_midcarpal_1"));
HAnimJoint855->setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint855->setCenter(new float[3]{0.1811,0.6975,-0.0826});
HAnimSegment* HAnimSegment856 = new HAnimSegment();
HAnimSegment856->setName(CString("l_trapezium"));
HAnimSegment856->setDEF(CString("hanim_l_trapezium"));
Transform* Transform857 = new Transform();
Transform857->setTranslation(new float[3]{0.1811,0.6975,-0.0826});
Transform* Transform858 = new Transform();
//Empty Transform
Shape* Shape859 = new Shape();
Shape859->setUSE(CString("HAnimJointShape"));
Transform858->addChild(Shape859);

Transform857->addChild(Transform858);

HAnimSegment856->addChild(Transform857);

Shape* Shape860 = new Shape();
LineSet* LineSet861 = new LineSet();
LineSet861->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate862 = new Coordinate();
Coordinate862->setPoint(new float[6]{0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534}, 6);
LineSet861->addChild(Coordinate862);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA* ColorRGBA863 = new ColorRGBA();
ColorRGBA863->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet861->addChild(ColorRGBA863);

Shape860->setGeometry(LineSet861);

HAnimSegment856->addChild(Shape860);

HAnimJoint855->addChild(HAnimSegment856);

HAnimJoint* HAnimJoint864 = new HAnimJoint();
HAnimJoint864->setName(CString("l_carpometacarpal_1"));
HAnimJoint864->setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint864->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimSegment* HAnimSegment865 = new HAnimSegment();
HAnimSegment865->setName(CString("l_metacarpal_1"));
HAnimSegment865->setDEF(CString("hanim_l_metacarpal_1"));
Transform* Transform866 = new Transform();
Transform866->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
Transform* Transform867 = new Transform();
//Empty Transform
Shape* Shape868 = new Shape();
Shape868->setUSE(CString("HAnimJointShape"));
Transform867->addChild(Shape868);

Transform866->addChild(Transform867);

HAnimSegment865->addChild(Transform866);

Shape* Shape869 = new Shape();
LineSet* LineSet870 = new LineSet();
LineSet870->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate871 = new Coordinate();
Coordinate871->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet870->addChild(Coordinate871);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA* ColorRGBA872 = new ColorRGBA();
ColorRGBA872->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet870->addChild(ColorRGBA872);

Shape869->setGeometry(LineSet870);

HAnimSegment865->addChild(Shape869);

HAnimJoint864->addChild(HAnimSegment865);

HAnimJoint* HAnimJoint873 = new HAnimJoint();
HAnimJoint873->setName(CString("l_metacarpophalangeal_1"));
HAnimJoint873->setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint873->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimSegment* HAnimSegment874 = new HAnimSegment();
HAnimSegment874->setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment874->setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform* Transform875 = new Transform();
Transform875->setTranslation(new float[3]{0.1951,0.8226,0.0246});
Transform* Transform876 = new Transform();
//Empty Transform
Shape* Shape877 = new Shape();
Shape877->setUSE(CString("HAnimJointShape"));
Transform876->addChild(Shape877);

Transform875->addChild(Transform876);

HAnimSegment874->addChild(Transform875);

Shape* Shape878 = new Shape();
LineSet* LineSet879 = new LineSet();
LineSet879->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate880 = new Coordinate();
Coordinate880->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet879->addChild(Coordinate880);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA881 = new ColorRGBA();
ColorRGBA881->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet879->addChild(ColorRGBA881);

Shape878->setGeometry(LineSet879);

HAnimSegment874->addChild(Shape878);

HAnimJoint873->addChild(HAnimSegment874);

HAnimJoint* HAnimJoint882 = new HAnimJoint();
HAnimJoint882->setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint882->setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint882->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint873->addChild(HAnimJoint882);

HAnimJoint864->addChild(HAnimJoint873);

HAnimJoint855->addChild(HAnimJoint864);

HAnimJoint834->addChild(HAnimJoint855);

HAnimJoint* HAnimJoint883 = new HAnimJoint();
HAnimJoint883->setName(CString("l_midcarpal_2"));
HAnimJoint883->setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint883->setCenter(new float[3]{0.1811,0.6984,-0.0935});
HAnimSegment* HAnimSegment884 = new HAnimSegment();
HAnimSegment884->setName(CString("l_trapezoid"));
HAnimSegment884->setDEF(CString("hanim_l_trapezoid"));
Transform* Transform885 = new Transform();
Transform885->setTranslation(new float[3]{0.1811,0.6984,-0.0935});
Transform* Transform886 = new Transform();
//Empty Transform
Shape* Shape887 = new Shape();
Shape887->setUSE(CString("HAnimJointShape"));
Transform886->addChild(Shape887);

Transform885->addChild(Transform886);

HAnimSegment884->addChild(Transform885);

Shape* Shape888 = new Shape();
LineSet* LineSet889 = new LineSet();
LineSet889->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate890 = new Coordinate();
Coordinate890->setPoint(new float[6]{0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028}, 6);
LineSet889->addChild(Coordinate890);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA* ColorRGBA891 = new ColorRGBA();
ColorRGBA891->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet889->addChild(ColorRGBA891);

Shape888->setGeometry(LineSet889);

HAnimSegment884->addChild(Shape888);

HAnimJoint883->addChild(HAnimSegment884);

HAnimJoint* HAnimJoint892 = new HAnimJoint();
HAnimJoint892->setName(CString("l_carpometacarpal_2"));
HAnimJoint892->setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint892->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimSegment* HAnimSegment893 = new HAnimSegment();
HAnimSegment893->setName(CString("l_metacarpal_2"));
HAnimSegment893->setDEF(CString("hanim_l_metacarpal_2"));
Transform* Transform894 = new Transform();
Transform894->setTranslation(new float[3]{0.1983,0.8024,-0.028});
Transform* Transform895 = new Transform();
//Empty Transform
Shape* Shape896 = new Shape();
Shape896->setUSE(CString("HAnimJointShape"));
Transform895->addChild(Shape896);

Transform894->addChild(Transform895);

HAnimSegment893->addChild(Transform894);

Shape* Shape897 = new Shape();
LineSet* LineSet898 = new LineSet();
LineSet898->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate899 = new Coordinate();
Coordinate899->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet898->addChild(Coordinate899);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA* ColorRGBA900 = new ColorRGBA();
ColorRGBA900->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet898->addChild(ColorRGBA900);

Shape897->setGeometry(LineSet898);

HAnimSegment893->addChild(Shape897);

HAnimJoint892->addChild(HAnimSegment893);

HAnimJoint* HAnimJoint901 = new HAnimJoint();
HAnimJoint901->setName(CString("l_metacarpophalangeal_2"));
HAnimJoint901->setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint901->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimSegment* HAnimSegment902 = new HAnimSegment();
HAnimSegment902->setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment902->setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform* Transform903 = new Transform();
Transform903->setTranslation(new float[3]{0.1983,0.7815,-0.028});
Transform* Transform904 = new Transform();
//Empty Transform
Shape* Shape905 = new Shape();
Shape905->setUSE(CString("HAnimJointShape"));
Transform904->addChild(Shape905);

Transform903->addChild(Transform904);

HAnimSegment902->addChild(Transform903);

Shape* Shape906 = new Shape();
LineSet* LineSet907 = new LineSet();
LineSet907->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate908 = new Coordinate();
Coordinate908->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet907->addChild(Coordinate908);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA909 = new ColorRGBA();
ColorRGBA909->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet907->addChild(ColorRGBA909);

Shape906->setGeometry(LineSet907);

HAnimSegment902->addChild(Shape906);

HAnimJoint901->addChild(HAnimSegment902);

HAnimJoint* HAnimJoint910 = new HAnimJoint();
HAnimJoint910->setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint910->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint910->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimSegment* HAnimSegment911 = new HAnimSegment();
HAnimSegment911->setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment911->setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform* Transform912 = new Transform();
Transform912->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
Transform* Transform913 = new Transform();
//Empty Transform
Shape* Shape914 = new Shape();
Shape914->setUSE(CString("HAnimJointShape"));
Transform913->addChild(Shape914);

Transform912->addChild(Transform913);

HAnimSegment911->addChild(Transform912);

Shape* Shape915 = new Shape();
LineSet* LineSet916 = new LineSet();
LineSet916->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate917 = new Coordinate();
Coordinate917->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet916->addChild(Coordinate917);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA918 = new ColorRGBA();
ColorRGBA918->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet916->addChild(ColorRGBA918);

Shape915->setGeometry(LineSet916);

HAnimSegment911->addChild(Shape915);

HAnimJoint910->addChild(HAnimSegment911);

HAnimJoint* HAnimJoint919 = new HAnimJoint();
HAnimJoint919->setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint919->setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint919->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint910->addChild(HAnimJoint919);

HAnimJoint901->addChild(HAnimJoint910);

HAnimJoint892->addChild(HAnimJoint901);

HAnimJoint883->addChild(HAnimJoint892);

HAnimJoint834->addChild(HAnimJoint883);

HAnimJoint* HAnimJoint920 = new HAnimJoint();
HAnimJoint920->setName(CString("l_midcarpal_3"));
HAnimJoint920->setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint920->setCenter(new float[3]{0.1809,0.7,-0.1067});
HAnimSegment* HAnimSegment921 = new HAnimSegment();
HAnimSegment921->setName(CString("l_capitate"));
HAnimSegment921->setDEF(CString("hanim_l_capitate"));
Transform* Transform922 = new Transform();
Transform922->setTranslation(new float[3]{0.1809,0.7,-0.1067});
Transform* Transform923 = new Transform();
//Empty Transform
Shape* Shape924 = new Shape();
Shape924->setUSE(CString("HAnimJointShape"));
Transform923->addChild(Shape924);

Transform922->addChild(Transform923);

HAnimSegment921->addChild(Transform922);

Shape* Shape925 = new Shape();
LineSet* LineSet926 = new LineSet();
LineSet926->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate927 = new Coordinate();
Coordinate927->setPoint(new float[6]{0.1809,0.7,-0.1067,0.1987,0.8029,-0.053}, 6);
LineSet926->addChild(Coordinate927);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA* ColorRGBA928 = new ColorRGBA();
ColorRGBA928->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet926->addChild(ColorRGBA928);

Shape925->setGeometry(LineSet926);

HAnimSegment921->addChild(Shape925);

HAnimJoint920->addChild(HAnimSegment921);

HAnimJoint* HAnimJoint929 = new HAnimJoint();
HAnimJoint929->setName(CString("l_carpometacarpal_3"));
HAnimJoint929->setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint929->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimSegment* HAnimSegment930 = new HAnimSegment();
HAnimSegment930->setName(CString("l_metacarpal_3"));
HAnimSegment930->setDEF(CString("hanim_l_metacarpal_3"));
Transform* Transform931 = new Transform();
Transform931->setTranslation(new float[3]{0.1987,0.8029,-0.053});
Transform* Transform932 = new Transform();
//Empty Transform
Shape* Shape933 = new Shape();
Shape933->setUSE(CString("HAnimJointShape"));
Transform932->addChild(Shape933);

Transform931->addChild(Transform932);

HAnimSegment930->addChild(Transform931);

Shape* Shape934 = new Shape();
LineSet* LineSet935 = new LineSet();
LineSet935->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate936 = new Coordinate();
Coordinate936->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet935->addChild(Coordinate936);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA* ColorRGBA937 = new ColorRGBA();
ColorRGBA937->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet935->addChild(ColorRGBA937);

Shape934->setGeometry(LineSet935);

HAnimSegment930->addChild(Shape934);

HAnimJoint929->addChild(HAnimSegment930);

HAnimJoint* HAnimJoint938 = new HAnimJoint();
HAnimJoint938->setName(CString("l_metacarpophalangeal_3"));
HAnimJoint938->setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint938->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimSegment* HAnimSegment939 = new HAnimSegment();
HAnimSegment939->setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment939->setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform* Transform940 = new Transform();
Transform940->setTranslation(new float[3]{0.1987,0.7818,-0.053});
Transform* Transform941 = new Transform();
//Empty Transform
Shape* Shape942 = new Shape();
Shape942->setUSE(CString("HAnimJointShape"));
Transform941->addChild(Shape942);

Transform940->addChild(Transform941);

HAnimSegment939->addChild(Transform940);

Shape* Shape943 = new Shape();
LineSet* LineSet944 = new LineSet();
LineSet944->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate945 = new Coordinate();
Coordinate945->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet944->addChild(Coordinate945);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA946 = new ColorRGBA();
ColorRGBA946->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet944->addChild(ColorRGBA946);

Shape943->setGeometry(LineSet944);

HAnimSegment939->addChild(Shape943);

HAnimJoint938->addChild(HAnimSegment939);

HAnimJoint* HAnimJoint947 = new HAnimJoint();
HAnimJoint947->setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint947->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint947->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimSegment* HAnimSegment948 = new HAnimSegment();
HAnimSegment948->setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment948->setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform* Transform949 = new Transform();
Transform949->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
Transform* Transform950 = new Transform();
//Empty Transform
Shape* Shape951 = new Shape();
Shape951->setUSE(CString("HAnimJointShape"));
Transform950->addChild(Shape951);

Transform949->addChild(Transform950);

HAnimSegment948->addChild(Transform949);

Shape* Shape952 = new Shape();
LineSet* LineSet953 = new LineSet();
LineSet953->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate954 = new Coordinate();
Coordinate954->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet953->addChild(Coordinate954);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA955 = new ColorRGBA();
ColorRGBA955->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet953->addChild(ColorRGBA955);

Shape952->setGeometry(LineSet953);

HAnimSegment948->addChild(Shape952);

HAnimJoint947->addChild(HAnimSegment948);

HAnimJoint* HAnimJoint956 = new HAnimJoint();
HAnimJoint956->setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint956->setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint956->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint947->addChild(HAnimJoint956);

HAnimJoint938->addChild(HAnimJoint947);

HAnimJoint929->addChild(HAnimJoint938);

HAnimJoint920->addChild(HAnimJoint929);

HAnimJoint834->addChild(HAnimJoint920);

HAnimJoint* HAnimJoint957 = new HAnimJoint();
HAnimJoint957->setName(CString("l_midcarpal_4_5"));
HAnimJoint957->setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint957->setCenter(new float[3]{0.1809,0.6973,-0.1276});
HAnimSegment* HAnimSegment958 = new HAnimSegment();
HAnimSegment958->setName(CString("l_hamate"));
HAnimSegment958->setDEF(CString("hanim_l_hamate"));
Transform* Transform959 = new Transform();
Transform959->setTranslation(new float[3]{0.1809,0.6973,-0.1276});
Transform* Transform960 = new Transform();
//Empty Transform
Shape* Shape961 = new Shape();
Shape961->setUSE(CString("HAnimJointShape"));
Transform960->addChild(Shape961);

Transform959->addChild(Transform960);

HAnimSegment958->addChild(Transform959);

Shape* Shape962 = new Shape();
LineSet* LineSet963 = new LineSet();
LineSet963->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate964 = new Coordinate();
Coordinate964->setPoint(new float[6]{0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794}, 6);
LineSet963->addChild(Coordinate964);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA* ColorRGBA965 = new ColorRGBA();
ColorRGBA965->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet963->addChild(ColorRGBA965);

Shape962->setGeometry(LineSet963);

HAnimSegment958->addChild(Shape962);

Shape* Shape966 = new Shape();
LineSet* LineSet967 = new LineSet();
LineSet967->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate968 = new Coordinate();
Coordinate968->setPoint(new float[6]{0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036}, 6);
LineSet967->addChild(Coordinate968);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA* ColorRGBA969 = new ColorRGBA();
ColorRGBA969->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet967->addChild(ColorRGBA969);

Shape966->setGeometry(LineSet967);

HAnimSegment958->addChild(Shape966);

HAnimJoint957->addChild(HAnimSegment958);

HAnimJoint* HAnimJoint970 = new HAnimJoint();
HAnimJoint970->setName(CString("l_carpometacarpal_4"));
HAnimJoint970->setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint970->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimSegment* HAnimSegment971 = new HAnimSegment();
HAnimSegment971->setName(CString("l_metacarpal_4"));
HAnimSegment971->setDEF(CString("hanim_l_metacarpal_4"));
Transform* Transform972 = new Transform();
Transform972->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
Transform* Transform973 = new Transform();
//Empty Transform
Shape* Shape974 = new Shape();
Shape974->setUSE(CString("HAnimJointShape"));
Transform973->addChild(Shape974);

Transform972->addChild(Transform973);

HAnimSegment971->addChild(Transform972);

Shape* Shape975 = new Shape();
LineSet* LineSet976 = new LineSet();
LineSet976->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate977 = new Coordinate();
Coordinate977->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet976->addChild(Coordinate977);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA* ColorRGBA978 = new ColorRGBA();
ColorRGBA978->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet976->addChild(ColorRGBA978);

Shape975->setGeometry(LineSet976);

HAnimSegment971->addChild(Shape975);

HAnimJoint970->addChild(HAnimSegment971);

HAnimJoint* HAnimJoint979 = new HAnimJoint();
HAnimJoint979->setName(CString("l_metacarpophalangeal_4"));
HAnimJoint979->setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint979->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimSegment* HAnimSegment980 = new HAnimSegment();
HAnimSegment980->setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment980->setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform* Transform981 = new Transform();
Transform981->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
Transform* Transform982 = new Transform();
//Empty Transform
Shape* Shape983 = new Shape();
Shape983->setUSE(CString("HAnimJointShape"));
Transform982->addChild(Shape983);

Transform981->addChild(Transform982);

HAnimSegment980->addChild(Transform981);

Shape* Shape984 = new Shape();
LineSet* LineSet985 = new LineSet();
LineSet985->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate986 = new Coordinate();
Coordinate986->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet985->addChild(Coordinate986);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA987 = new ColorRGBA();
ColorRGBA987->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet985->addChild(ColorRGBA987);

Shape984->setGeometry(LineSet985);

HAnimSegment980->addChild(Shape984);

HAnimJoint979->addChild(HAnimSegment980);

HAnimJoint* HAnimJoint988 = new HAnimJoint();
HAnimJoint988->setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint988->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint988->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimSegment* HAnimSegment989 = new HAnimSegment();
HAnimSegment989->setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment989->setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform* Transform990 = new Transform();
Transform990->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
Transform* Transform991 = new Transform();
//Empty Transform
Shape* Shape992 = new Shape();
Shape992->setUSE(CString("HAnimJointShape"));
Transform991->addChild(Shape992);

Transform990->addChild(Transform991);

HAnimSegment989->addChild(Transform990);

Shape* Shape993 = new Shape();
LineSet* LineSet994 = new LineSet();
LineSet994->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate995 = new Coordinate();
Coordinate995->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet994->addChild(Coordinate995);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA996 = new ColorRGBA();
ColorRGBA996->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet994->addChild(ColorRGBA996);

Shape993->setGeometry(LineSet994);

HAnimSegment989->addChild(Shape993);

HAnimJoint988->addChild(HAnimSegment989);

HAnimJoint* HAnimJoint997 = new HAnimJoint();
HAnimJoint997->setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint997->setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint997->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint988->addChild(HAnimJoint997);

HAnimJoint979->addChild(HAnimJoint988);

HAnimJoint970->addChild(HAnimJoint979);

HAnimJoint957->addChild(HAnimJoint970);

HAnimJoint* HAnimJoint998 = new HAnimJoint();
HAnimJoint998->setName(CString("l_carpometacarpal_5"));
HAnimJoint998->setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint998->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimSegment* HAnimSegment999 = new HAnimSegment();
HAnimSegment999->setName(CString("l_metacarpal_5"));
HAnimSegment999->setDEF(CString("hanim_l_metacarpal_5"));
Transform* Transform1000 = new Transform();
Transform1000->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
Transform* Transform1001 = new Transform();
//Empty Transform
Shape* Shape1002 = new Shape();
Shape1002->setUSE(CString("HAnimJointShape"));
Transform1001->addChild(Shape1002);

Transform1000->addChild(Transform1001);

HAnimSegment999->addChild(Transform1000);

Shape* Shape1003 = new Shape();
LineSet* LineSet1004 = new LineSet();
LineSet1004->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1005 = new Coordinate();
Coordinate1005->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet1004->addChild(Coordinate1005);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA* ColorRGBA1006 = new ColorRGBA();
ColorRGBA1006->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1004->addChild(ColorRGBA1006);

Shape1003->setGeometry(LineSet1004);

HAnimSegment999->addChild(Shape1003);

HAnimJoint998->addChild(HAnimSegment999);

HAnimJoint* HAnimJoint1007 = new HAnimJoint();
HAnimJoint1007->setName(CString("l_metacarpophalangeal_5"));
HAnimJoint1007->setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint1007->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimSegment* HAnimSegment1008 = new HAnimSegment();
HAnimSegment1008->setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment1008->setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform* Transform1009 = new Transform();
Transform1009->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
Transform* Transform1010 = new Transform();
//Empty Transform
Shape* Shape1011 = new Shape();
Shape1011->setUSE(CString("HAnimJointShape"));
Transform1010->addChild(Shape1011);

Transform1009->addChild(Transform1010);

HAnimSegment1008->addChild(Transform1009);

Shape* Shape1012 = new Shape();
LineSet* LineSet1013 = new LineSet();
LineSet1013->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1014 = new Coordinate();
Coordinate1014->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet1013->addChild(Coordinate1014);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1015 = new ColorRGBA();
ColorRGBA1015->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1013->addChild(ColorRGBA1015);

Shape1012->setGeometry(LineSet1013);

HAnimSegment1008->addChild(Shape1012);

HAnimJoint1007->addChild(HAnimSegment1008);

HAnimJoint* HAnimJoint1016 = new HAnimJoint();
HAnimJoint1016->setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint1016->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint1016->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimSegment* HAnimSegment1017 = new HAnimSegment();
HAnimSegment1017->setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment1017->setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform* Transform1018 = new Transform();
Transform1018->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
Transform* Transform1019 = new Transform();
//Empty Transform
Shape* Shape1020 = new Shape();
Shape1020->setUSE(CString("HAnimJointShape"));
Transform1019->addChild(Shape1020);

Transform1018->addChild(Transform1019);

HAnimSegment1017->addChild(Transform1018);

Shape* Shape1021 = new Shape();
LineSet* LineSet1022 = new LineSet();
LineSet1022->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1023 = new Coordinate();
Coordinate1023->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet1022->addChild(Coordinate1023);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1024 = new ColorRGBA();
ColorRGBA1024->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1022->addChild(ColorRGBA1024);

Shape1021->setGeometry(LineSet1022);

HAnimSegment1017->addChild(Shape1021);

HAnimJoint1016->addChild(HAnimSegment1017);

HAnimJoint* HAnimJoint1025 = new HAnimJoint();
HAnimJoint1025->setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint1025->setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint1025->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1016->addChild(HAnimJoint1025);

HAnimJoint1007->addChild(HAnimJoint1016);

HAnimJoint998->addChild(HAnimJoint1007);

HAnimJoint957->addChild(HAnimJoint998);

HAnimJoint834->addChild(HAnimJoint957);

HAnimJoint825->addChild(HAnimJoint834);

HAnimJoint816->addChild(HAnimJoint825);

HAnimJoint807->addChild(HAnimJoint816);

HAnimJoint798->addChild(HAnimJoint807);

HAnimJoint678->addChild(HAnimJoint798);

HAnimJoint* HAnimJoint1026 = new HAnimJoint();
HAnimJoint1026->setName(CString("r_sternoclavicular"));
HAnimJoint1026->setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1026->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimSegment* HAnimSegment1027 = new HAnimSegment();
HAnimSegment1027->setName(CString("r_clavicle"));
HAnimSegment1027->setDEF(CString("hanim_r_clavicle"));
Transform* Transform1028 = new Transform();
Transform1028->setTranslation(new float[3]{-0.0694,1.46,-0.033});
Transform* Transform1029 = new Transform();
//Empty Transform
Shape* Shape1030 = new Shape();
Shape1030->setUSE(CString("HAnimJointShape"));
Transform1029->addChild(Shape1030);

Transform1028->addChild(Transform1029);

HAnimSegment1027->addChild(Transform1028);

Shape* Shape1031 = new Shape();
LineSet* LineSet1032 = new LineSet();
LineSet1032->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1033 = new Coordinate();
Coordinate1033->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
LineSet1032->addChild(Coordinate1033);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA* ColorRGBA1034 = new ColorRGBA();
ColorRGBA1034->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1032->addChild(ColorRGBA1034);

Shape1031->setGeometry(LineSet1032);

HAnimSegment1027->addChild(Shape1031);

HAnimJoint1026->addChild(HAnimSegment1027);

HAnimJoint* HAnimJoint1035 = new HAnimJoint();
HAnimJoint1035->setName(CString("r_acromioclavicular"));
HAnimJoint1035->setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1035->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimSegment* HAnimSegment1036 = new HAnimSegment();
HAnimSegment1036->setName(CString("r_scapula"));
HAnimSegment1036->setDEF(CString("hanim_r_scapula"));
Transform* Transform1037 = new Transform();
Transform1037->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
Transform* Transform1038 = new Transform();
//Empty Transform
Shape* Shape1039 = new Shape();
Shape1039->setUSE(CString("HAnimJointShape"));
Transform1038->addChild(Shape1039);

Transform1037->addChild(Transform1038);

HAnimSegment1036->addChild(Transform1037);

Shape* Shape1040 = new Shape();
LineSet* LineSet1041 = new LineSet();
LineSet1041->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1042 = new Coordinate();
Coordinate1042->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
LineSet1041->addChild(Coordinate1042);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA* ColorRGBA1043 = new ColorRGBA();
ColorRGBA1043->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1041->addChild(ColorRGBA1043);

Shape1040->setGeometry(LineSet1041);

HAnimSegment1036->addChild(Shape1040);

HAnimJoint1035->addChild(HAnimSegment1036);

HAnimJoint* HAnimJoint1044 = new HAnimJoint();
HAnimJoint1044->setName(CString("r_shoulder"));
HAnimJoint1044->setDEF(CString("hanim_r_shoulder"));
HAnimJoint1044->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimSegment* HAnimSegment1045 = new HAnimSegment();
HAnimSegment1045->setName(CString("r_upperarm"));
HAnimSegment1045->setDEF(CString("hanim_r_upperarm"));
Transform* Transform1046 = new Transform();
Transform1046->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
Transform* Transform1047 = new Transform();
//Empty Transform
Shape* Shape1048 = new Shape();
Shape1048->setUSE(CString("HAnimJointShape"));
Transform1047->addChild(Shape1048);

Transform1046->addChild(Transform1047);

HAnimSegment1045->addChild(Transform1046);

Shape* Shape1049 = new Shape();
LineSet* LineSet1050 = new LineSet();
LineSet1050->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1051 = new Coordinate();
Coordinate1051->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet1050->addChild(Coordinate1051);

//from r_shoulder to r_elbow vertices 2
ColorRGBA* ColorRGBA1052 = new ColorRGBA();
ColorRGBA1052->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1050->addChild(ColorRGBA1052);

Shape1049->setGeometry(LineSet1050);

HAnimSegment1045->addChild(Shape1049);

HAnimJoint1044->addChild(HAnimSegment1045);

HAnimJoint* HAnimJoint1053 = new HAnimJoint();
HAnimJoint1053->setName(CString("r_elbow"));
HAnimJoint1053->setDEF(CString("hanim_r_elbow"));
HAnimJoint1053->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimSegment* HAnimSegment1054 = new HAnimSegment();
HAnimSegment1054->setName(CString("r_forearm"));
HAnimSegment1054->setDEF(CString("hanim_r_forearm"));
Transform* Transform1055 = new Transform();
Transform1055->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
Transform* Transform1056 = new Transform();
//Empty Transform
Shape* Shape1057 = new Shape();
Shape1057->setUSE(CString("HAnimJointShape"));
Transform1056->addChild(Shape1057);

Transform1055->addChild(Transform1056);

HAnimSegment1054->addChild(Transform1055);

Shape* Shape1058 = new Shape();
LineSet* LineSet1059 = new LineSet();
LineSet1059->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1060 = new Coordinate();
Coordinate1060->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet1059->addChild(Coordinate1060);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA* ColorRGBA1061 = new ColorRGBA();
ColorRGBA1061->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1059->addChild(ColorRGBA1061);

Shape1058->setGeometry(LineSet1059);

HAnimSegment1054->addChild(Shape1058);

HAnimJoint1053->addChild(HAnimSegment1054);

HAnimJoint* HAnimJoint1062 = new HAnimJoint();
HAnimJoint1062->setName(CString("r_radiocarpal"));
HAnimJoint1062->setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint1062->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimSegment* HAnimSegment1063 = new HAnimSegment();
HAnimSegment1063->setName(CString("r_carpal"));
HAnimSegment1063->setDEF(CString("hanim_r_carpal"));
Transform* Transform1064 = new Transform();
Transform1064->setScale(new float[3]{0.2,0.2,0.2});
Transform1064->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform1064->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
Transform* Transform1065 = new Transform();
Transform1065->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
Shape* Shape1066 = new Shape();
Shape1066->setUSE(CString("HAnimJointShape"));
Transform1065->addChild(Shape1066);

Transform1064->addChild(Transform1065);

HAnimSegment1063->addChild(Transform1064);

Shape* Shape1067 = new Shape();
LineSet* LineSet1068 = new LineSet();
LineSet1068->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1069 = new Coordinate();
Coordinate1069->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826}, 6);
LineSet1068->addChild(Coordinate1069);

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA* ColorRGBA1070 = new ColorRGBA();
ColorRGBA1070->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1068->addChild(ColorRGBA1070);

Shape1067->setGeometry(LineSet1068);

HAnimSegment1063->addChild(Shape1067);

Shape* Shape1071 = new Shape();
LineSet* LineSet1072 = new LineSet();
LineSet1072->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1073 = new Coordinate();
Coordinate1073->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935}, 6);
LineSet1072->addChild(Coordinate1073);

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA* ColorRGBA1074 = new ColorRGBA();
ColorRGBA1074->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1072->addChild(ColorRGBA1074);

Shape1071->setGeometry(LineSet1072);

HAnimSegment1063->addChild(Shape1071);

Shape* Shape1075 = new Shape();
LineSet* LineSet1076 = new LineSet();
LineSet1076->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1077 = new Coordinate();
Coordinate1077->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067}, 6);
LineSet1076->addChild(Coordinate1077);

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA* ColorRGBA1078 = new ColorRGBA();
ColorRGBA1078->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1076->addChild(ColorRGBA1078);

Shape1075->setGeometry(LineSet1076);

HAnimSegment1063->addChild(Shape1075);

Shape* Shape1079 = new Shape();
LineSet* LineSet1080 = new LineSet();
LineSet1080->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1081 = new Coordinate();
Coordinate1081->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276}, 6);
LineSet1080->addChild(Coordinate1081);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA* ColorRGBA1082 = new ColorRGBA();
ColorRGBA1082->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1080->addChild(ColorRGBA1082);

Shape1079->setGeometry(LineSet1080);

HAnimSegment1063->addChild(Shape1079);

HAnimJoint1062->addChild(HAnimSegment1063);

HAnimJoint* HAnimJoint1083 = new HAnimJoint();
HAnimJoint1083->setName(CString("r_midcarpal_1"));
HAnimJoint1083->setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint1083->setCenter(new float[3]{-0.1811,0.6975,-0.0826});
HAnimSegment* HAnimSegment1084 = new HAnimSegment();
HAnimSegment1084->setName(CString("r_trapezium"));
HAnimSegment1084->setDEF(CString("hanim_r_trapezium"));
Transform* Transform1085 = new Transform();
Transform1085->setTranslation(new float[3]{-0.1811,0.6975,-0.0826});
Transform* Transform1086 = new Transform();
//Empty Transform
Shape* Shape1087 = new Shape();
Shape1087->setUSE(CString("HAnimJointShape"));
Transform1086->addChild(Shape1087);

Transform1085->addChild(Transform1086);

HAnimSegment1084->addChild(Transform1085);

Shape* Shape1088 = new Shape();
LineSet* LineSet1089 = new LineSet();
LineSet1089->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1090 = new Coordinate();
Coordinate1090->setPoint(new float[6]{-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473}, 6);
LineSet1089->addChild(Coordinate1090);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA* ColorRGBA1091 = new ColorRGBA();
ColorRGBA1091->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1089->addChild(ColorRGBA1091);

Shape1088->setGeometry(LineSet1089);

HAnimSegment1084->addChild(Shape1088);

HAnimJoint1083->addChild(HAnimSegment1084);

HAnimJoint* HAnimJoint1092 = new HAnimJoint();
HAnimJoint1092->setName(CString("r_carpometacarpal_1"));
HAnimJoint1092->setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint1092->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimSegment* HAnimSegment1093 = new HAnimSegment();
HAnimSegment1093->setName(CString("r_metacarpal_1"));
HAnimSegment1093->setDEF(CString("hanim_r_metacarpal_1"));
Transform* Transform1094 = new Transform();
Transform1094->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
Transform* Transform1095 = new Transform();
//Empty Transform
Shape* Shape1096 = new Shape();
Shape1096->setUSE(CString("HAnimJointShape"));
Transform1095->addChild(Shape1096);

Transform1094->addChild(Transform1095);

HAnimSegment1093->addChild(Transform1094);

Shape* Shape1097 = new Shape();
LineSet* LineSet1098 = new LineSet();
LineSet1098->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1099 = new Coordinate();
Coordinate1099->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
LineSet1098->addChild(Coordinate1099);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA* ColorRGBA1100 = new ColorRGBA();
ColorRGBA1100->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1098->addChild(ColorRGBA1100);

Shape1097->setGeometry(LineSet1098);

HAnimSegment1093->addChild(Shape1097);

HAnimJoint1092->addChild(HAnimSegment1093);

HAnimJoint* HAnimJoint1101 = new HAnimJoint();
HAnimJoint1101->setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1101->setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint1101->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimSegment* HAnimSegment1102 = new HAnimSegment();
HAnimSegment1102->setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1102->setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform* Transform1103 = new Transform();
Transform1103->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
Transform* Transform1104 = new Transform();
//Empty Transform
Shape* Shape1105 = new Shape();
Shape1105->setUSE(CString("HAnimJointShape"));
Transform1104->addChild(Shape1105);

Transform1103->addChild(Transform1104);

HAnimSegment1102->addChild(Transform1103);

Shape* Shape1106 = new Shape();
LineSet* LineSet1107 = new LineSet();
LineSet1107->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1108 = new Coordinate();
Coordinate1108->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
LineSet1107->addChild(Coordinate1108);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA1109 = new ColorRGBA();
ColorRGBA1109->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1107->addChild(ColorRGBA1109);

Shape1106->setGeometry(LineSet1107);

HAnimSegment1102->addChild(Shape1106);

HAnimJoint1101->addChild(HAnimSegment1102);

HAnimJoint* HAnimJoint1110 = new HAnimJoint();
HAnimJoint1110->setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1110->setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint1110->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1101->addChild(HAnimJoint1110);

HAnimJoint1092->addChild(HAnimJoint1101);

HAnimJoint1083->addChild(HAnimJoint1092);

HAnimJoint1062->addChild(HAnimJoint1083);

HAnimJoint* HAnimJoint1111 = new HAnimJoint();
HAnimJoint1111->setName(CString("r_midcarpal_2"));
HAnimJoint1111->setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint1111->setCenter(new float[3]{-0.1811,0.6984,-0.0935});
HAnimSegment* HAnimSegment1112 = new HAnimSegment();
HAnimSegment1112->setName(CString("r_trapezoid"));
HAnimSegment1112->setDEF(CString("hanim_r_trapezoid"));
Transform* Transform1113 = new Transform();
Transform1113->setTranslation(new float[3]{-0.1811,0.6984,-0.0935});
Transform* Transform1114 = new Transform();
//Empty Transform
Shape* Shape1115 = new Shape();
Shape1115->setUSE(CString("HAnimJointShape"));
Transform1114->addChild(Shape1115);

Transform1113->addChild(Transform1114);

HAnimSegment1112->addChild(Transform1113);

Shape* Shape1116 = new Shape();
LineSet* LineSet1117 = new LineSet();
LineSet1117->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1118 = new Coordinate();
Coordinate1118->setPoint(new float[6]{-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218}, 6);
LineSet1117->addChild(Coordinate1118);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA* ColorRGBA1119 = new ColorRGBA();
ColorRGBA1119->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1117->addChild(ColorRGBA1119);

Shape1116->setGeometry(LineSet1117);

HAnimSegment1112->addChild(Shape1116);

HAnimJoint1111->addChild(HAnimSegment1112);

HAnimJoint* HAnimJoint1120 = new HAnimJoint();
HAnimJoint1120->setName(CString("r_carpometacarpal_2"));
HAnimJoint1120->setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint1120->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimSegment* HAnimSegment1121 = new HAnimSegment();
HAnimSegment1121->setName(CString("r_metacarpal_2"));
HAnimSegment1121->setDEF(CString("hanim_r_metacarpal_2"));
Transform* Transform1122 = new Transform();
Transform1122->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
Transform* Transform1123 = new Transform();
//Empty Transform
Shape* Shape1124 = new Shape();
Shape1124->setUSE(CString("HAnimJointShape"));
Transform1123->addChild(Shape1124);

Transform1122->addChild(Transform1123);

HAnimSegment1121->addChild(Transform1122);

Shape* Shape1125 = new Shape();
LineSet* LineSet1126 = new LineSet();
LineSet1126->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1127 = new Coordinate();
Coordinate1127->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
LineSet1126->addChild(Coordinate1127);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA* ColorRGBA1128 = new ColorRGBA();
ColorRGBA1128->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1126->addChild(ColorRGBA1128);

Shape1125->setGeometry(LineSet1126);

HAnimSegment1121->addChild(Shape1125);

HAnimJoint1120->addChild(HAnimSegment1121);

HAnimJoint* HAnimJoint1129 = new HAnimJoint();
HAnimJoint1129->setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1129->setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint1129->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimSegment* HAnimSegment1130 = new HAnimSegment();
HAnimSegment1130->setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1130->setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform* Transform1131 = new Transform();
Transform1131->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
Transform* Transform1132 = new Transform();
//Empty Transform
Shape* Shape1133 = new Shape();
Shape1133->setUSE(CString("HAnimJointShape"));
Transform1132->addChild(Shape1133);

Transform1131->addChild(Transform1132);

HAnimSegment1130->addChild(Transform1131);

Shape* Shape1134 = new Shape();
LineSet* LineSet1135 = new LineSet();
LineSet1135->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1136 = new Coordinate();
Coordinate1136->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
LineSet1135->addChild(Coordinate1136);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA1137 = new ColorRGBA();
ColorRGBA1137->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1135->addChild(ColorRGBA1137);

Shape1134->setGeometry(LineSet1135);

HAnimSegment1130->addChild(Shape1134);

HAnimJoint1129->addChild(HAnimSegment1130);

HAnimJoint* HAnimJoint1138 = new HAnimJoint();
HAnimJoint1138->setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1138->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1138->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimSegment* HAnimSegment1139 = new HAnimSegment();
HAnimSegment1139->setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1139->setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform* Transform1140 = new Transform();
Transform1140->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
Transform* Transform1141 = new Transform();
//Empty Transform
Shape* Shape1142 = new Shape();
Shape1142->setUSE(CString("HAnimJointShape"));
Transform1141->addChild(Shape1142);

Transform1140->addChild(Transform1141);

HAnimSegment1139->addChild(Transform1140);

Shape* Shape1143 = new Shape();
LineSet* LineSet1144 = new LineSet();
LineSet1144->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1145 = new Coordinate();
Coordinate1145->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
LineSet1144->addChild(Coordinate1145);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA1146 = new ColorRGBA();
ColorRGBA1146->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1144->addChild(ColorRGBA1146);

Shape1143->setGeometry(LineSet1144);

HAnimSegment1139->addChild(Shape1143);

HAnimJoint1138->addChild(HAnimSegment1139);

HAnimJoint* HAnimJoint1147 = new HAnimJoint();
HAnimJoint1147->setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1147->setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint1147->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1138->addChild(HAnimJoint1147);

HAnimJoint1129->addChild(HAnimJoint1138);

HAnimJoint1120->addChild(HAnimJoint1129);

HAnimJoint1111->addChild(HAnimJoint1120);

HAnimJoint1062->addChild(HAnimJoint1111);

HAnimJoint* HAnimJoint1148 = new HAnimJoint();
HAnimJoint1148->setName(CString("r_midcarpal_3"));
HAnimJoint1148->setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint1148->setCenter(new float[3]{-0.1809,0.7,-0.1067});
HAnimSegment* HAnimSegment1149 = new HAnimSegment();
HAnimSegment1149->setName(CString("r_capitate"));
HAnimSegment1149->setDEF(CString("hanim_r_capitate"));
Transform* Transform1150 = new Transform();
Transform1150->setTranslation(new float[3]{-0.1809,0.7,-0.1067});
Transform* Transform1151 = new Transform();
//Empty Transform
Shape* Shape1152 = new Shape();
Shape1152->setUSE(CString("HAnimJointShape"));
Transform1151->addChild(Shape1152);

Transform1150->addChild(Transform1151);

HAnimSegment1149->addChild(Transform1150);

Shape* Shape1153 = new Shape();
LineSet* LineSet1154 = new LineSet();
LineSet1154->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1155 = new Coordinate();
Coordinate1155->setPoint(new float[6]{-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468}, 6);
LineSet1154->addChild(Coordinate1155);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA* ColorRGBA1156 = new ColorRGBA();
ColorRGBA1156->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1154->addChild(ColorRGBA1156);

Shape1153->setGeometry(LineSet1154);

HAnimSegment1149->addChild(Shape1153);

HAnimJoint1148->addChild(HAnimSegment1149);

HAnimJoint* HAnimJoint1157 = new HAnimJoint();
HAnimJoint1157->setName(CString("r_carpometacarpal_3"));
HAnimJoint1157->setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint1157->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimSegment* HAnimSegment1158 = new HAnimSegment();
HAnimSegment1158->setName(CString("r_metacarpal_3"));
HAnimSegment1158->setDEF(CString("hanim_r_metacarpal_3"));
Transform* Transform1159 = new Transform();
Transform1159->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
Transform* Transform1160 = new Transform();
//Empty Transform
Shape* Shape1161 = new Shape();
Shape1161->setUSE(CString("HAnimJointShape"));
Transform1160->addChild(Shape1161);

Transform1159->addChild(Transform1160);

HAnimSegment1158->addChild(Transform1159);

Shape* Shape1162 = new Shape();
LineSet* LineSet1163 = new LineSet();
LineSet1163->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1164 = new Coordinate();
Coordinate1164->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
LineSet1163->addChild(Coordinate1164);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA* ColorRGBA1165 = new ColorRGBA();
ColorRGBA1165->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1163->addChild(ColorRGBA1165);

Shape1162->setGeometry(LineSet1163);

HAnimSegment1158->addChild(Shape1162);

HAnimJoint1157->addChild(HAnimSegment1158);

HAnimJoint* HAnimJoint1166 = new HAnimJoint();
HAnimJoint1166->setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1166->setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint1166->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimSegment* HAnimSegment1167 = new HAnimSegment();
HAnimSegment1167->setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1167->setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform* Transform1168 = new Transform();
Transform1168->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
Transform* Transform1169 = new Transform();
//Empty Transform
Shape* Shape1170 = new Shape();
Shape1170->setUSE(CString("HAnimJointShape"));
Transform1169->addChild(Shape1170);

Transform1168->addChild(Transform1169);

HAnimSegment1167->addChild(Transform1168);

Shape* Shape1171 = new Shape();
LineSet* LineSet1172 = new LineSet();
LineSet1172->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1173 = new Coordinate();
Coordinate1173->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
LineSet1172->addChild(Coordinate1173);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA1174 = new ColorRGBA();
ColorRGBA1174->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1172->addChild(ColorRGBA1174);

Shape1171->setGeometry(LineSet1172);

HAnimSegment1167->addChild(Shape1171);

HAnimJoint1166->addChild(HAnimSegment1167);

HAnimJoint* HAnimJoint1175 = new HAnimJoint();
HAnimJoint1175->setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1175->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1175->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimSegment* HAnimSegment1176 = new HAnimSegment();
HAnimSegment1176->setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1176->setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform* Transform1177 = new Transform();
Transform1177->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
Transform* Transform1178 = new Transform();
//Empty Transform
Shape* Shape1179 = new Shape();
Shape1179->setUSE(CString("HAnimJointShape"));
Transform1178->addChild(Shape1179);

Transform1177->addChild(Transform1178);

HAnimSegment1176->addChild(Transform1177);

Shape* Shape1180 = new Shape();
LineSet* LineSet1181 = new LineSet();
LineSet1181->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1182 = new Coordinate();
Coordinate1182->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
LineSet1181->addChild(Coordinate1182);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA1183 = new ColorRGBA();
ColorRGBA1183->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1181->addChild(ColorRGBA1183);

Shape1180->setGeometry(LineSet1181);

HAnimSegment1176->addChild(Shape1180);

HAnimJoint1175->addChild(HAnimSegment1176);

HAnimJoint* HAnimJoint1184 = new HAnimJoint();
HAnimJoint1184->setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1184->setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint1184->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1175->addChild(HAnimJoint1184);

HAnimJoint1166->addChild(HAnimJoint1175);

HAnimJoint1157->addChild(HAnimJoint1166);

HAnimJoint1148->addChild(HAnimJoint1157);

HAnimJoint1062->addChild(HAnimJoint1148);

HAnimJoint* HAnimJoint1185 = new HAnimJoint();
HAnimJoint1185->setName(CString("r_midcarpal_4_5"));
HAnimJoint1185->setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint1185->setCenter(new float[3]{-0.1809,0.6973,-0.1276});
HAnimSegment* HAnimSegment1186 = new HAnimSegment();
HAnimSegment1186->setName(CString("r_hamate"));
HAnimSegment1186->setDEF(CString("hanim_r_hamate"));
Transform* Transform1187 = new Transform();
Transform1187->setTranslation(new float[3]{-0.1809,0.6973,-0.1276});
Transform* Transform1188 = new Transform();
//Empty Transform
Shape* Shape1189 = new Shape();
Shape1189->setUSE(CString("HAnimJointShape"));
Transform1188->addChild(Shape1189);

Transform1187->addChild(Transform1188);

HAnimSegment1186->addChild(Transform1187);

Shape* Shape1190 = new Shape();
LineSet* LineSet1191 = new LineSet();
LineSet1191->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1192 = new Coordinate();
Coordinate1192->setPoint(new float[6]{-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732}, 6);
LineSet1191->addChild(Coordinate1192);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA* ColorRGBA1193 = new ColorRGBA();
ColorRGBA1193->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1191->addChild(ColorRGBA1193);

Shape1190->setGeometry(LineSet1191);

HAnimSegment1186->addChild(Shape1190);

Shape* Shape1194 = new Shape();
LineSet* LineSet1195 = new LineSet();
LineSet1195->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1196 = new Coordinate();
Coordinate1196->setPoint(new float[6]{-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975}, 6);
LineSet1195->addChild(Coordinate1196);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA* ColorRGBA1197 = new ColorRGBA();
ColorRGBA1197->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1195->addChild(ColorRGBA1197);

Shape1194->setGeometry(LineSet1195);

HAnimSegment1186->addChild(Shape1194);

HAnimJoint1185->addChild(HAnimSegment1186);

HAnimJoint* HAnimJoint1198 = new HAnimJoint();
HAnimJoint1198->setName(CString("r_carpometacarpal_4"));
HAnimJoint1198->setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint1198->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimSegment* HAnimSegment1199 = new HAnimSegment();
HAnimSegment1199->setName(CString("r_metacarpal_4"));
HAnimSegment1199->setDEF(CString("hanim_r_metacarpal_4"));
Transform* Transform1200 = new Transform();
Transform1200->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
Transform* Transform1201 = new Transform();
//Empty Transform
Shape* Shape1202 = new Shape();
Shape1202->setUSE(CString("HAnimJointShape"));
Transform1201->addChild(Shape1202);

Transform1200->addChild(Transform1201);

HAnimSegment1199->addChild(Transform1200);

Shape* Shape1203 = new Shape();
LineSet* LineSet1204 = new LineSet();
LineSet1204->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1205 = new Coordinate();
Coordinate1205->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
LineSet1204->addChild(Coordinate1205);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA* ColorRGBA1206 = new ColorRGBA();
ColorRGBA1206->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1204->addChild(ColorRGBA1206);

Shape1203->setGeometry(LineSet1204);

HAnimSegment1199->addChild(Shape1203);

HAnimJoint1198->addChild(HAnimSegment1199);

HAnimJoint* HAnimJoint1207 = new HAnimJoint();
HAnimJoint1207->setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1207->setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint1207->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimSegment* HAnimSegment1208 = new HAnimSegment();
HAnimSegment1208->setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1208->setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform* Transform1209 = new Transform();
Transform1209->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
Transform* Transform1210 = new Transform();
//Empty Transform
Shape* Shape1211 = new Shape();
Shape1211->setUSE(CString("HAnimJointShape"));
Transform1210->addChild(Shape1211);

Transform1209->addChild(Transform1210);

HAnimSegment1208->addChild(Transform1209);

Shape* Shape1212 = new Shape();
LineSet* LineSet1213 = new LineSet();
LineSet1213->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1214 = new Coordinate();
Coordinate1214->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
LineSet1213->addChild(Coordinate1214);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA1215 = new ColorRGBA();
ColorRGBA1215->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1213->addChild(ColorRGBA1215);

Shape1212->setGeometry(LineSet1213);

HAnimSegment1208->addChild(Shape1212);

HAnimJoint1207->addChild(HAnimSegment1208);

HAnimJoint* HAnimJoint1216 = new HAnimJoint();
HAnimJoint1216->setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1216->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1216->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimSegment* HAnimSegment1217 = new HAnimSegment();
HAnimSegment1217->setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1217->setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform* Transform1218 = new Transform();
Transform1218->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
Transform* Transform1219 = new Transform();
//Empty Transform
Shape* Shape1220 = new Shape();
Shape1220->setUSE(CString("HAnimJointShape"));
Transform1219->addChild(Shape1220);

Transform1218->addChild(Transform1219);

HAnimSegment1217->addChild(Transform1218);

Shape* Shape1221 = new Shape();
LineSet* LineSet1222 = new LineSet();
LineSet1222->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1223 = new Coordinate();
Coordinate1223->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
LineSet1222->addChild(Coordinate1223);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA1224 = new ColorRGBA();
ColorRGBA1224->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1222->addChild(ColorRGBA1224);

Shape1221->setGeometry(LineSet1222);

HAnimSegment1217->addChild(Shape1221);

HAnimJoint1216->addChild(HAnimSegment1217);

HAnimJoint* HAnimJoint1225 = new HAnimJoint();
HAnimJoint1225->setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1225->setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint1225->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1216->addChild(HAnimJoint1225);

HAnimJoint1207->addChild(HAnimJoint1216);

HAnimJoint1198->addChild(HAnimJoint1207);

HAnimJoint1185->addChild(HAnimJoint1198);

HAnimJoint* HAnimJoint1226 = new HAnimJoint();
HAnimJoint1226->setName(CString("r_carpometacarpal_5"));
HAnimJoint1226->setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint1226->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimSegment* HAnimSegment1227 = new HAnimSegment();
HAnimSegment1227->setName(CString("r_metacarpal_5"));
HAnimSegment1227->setDEF(CString("hanim_r_metacarpal_5"));
Transform* Transform1228 = new Transform();
Transform1228->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
Transform* Transform1229 = new Transform();
//Empty Transform
Shape* Shape1230 = new Shape();
Shape1230->setUSE(CString("HAnimJointShape"));
Transform1229->addChild(Shape1230);

Transform1228->addChild(Transform1229);

HAnimSegment1227->addChild(Transform1228);

Shape* Shape1231 = new Shape();
LineSet* LineSet1232 = new LineSet();
LineSet1232->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1233 = new Coordinate();
Coordinate1233->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
LineSet1232->addChild(Coordinate1233);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA* ColorRGBA1234 = new ColorRGBA();
ColorRGBA1234->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1232->addChild(ColorRGBA1234);

Shape1231->setGeometry(LineSet1232);

HAnimSegment1227->addChild(Shape1231);

HAnimJoint1226->addChild(HAnimSegment1227);

HAnimJoint* HAnimJoint1235 = new HAnimJoint();
HAnimJoint1235->setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1235->setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint1235->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimSegment* HAnimSegment1236 = new HAnimSegment();
HAnimSegment1236->setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1236->setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform* Transform1237 = new Transform();
Transform1237->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
Transform* Transform1238 = new Transform();
//Empty Transform
Shape* Shape1239 = new Shape();
Shape1239->setUSE(CString("HAnimJointShape"));
Transform1238->addChild(Shape1239);

Transform1237->addChild(Transform1238);

HAnimSegment1236->addChild(Transform1237);

Shape* Shape1240 = new Shape();
LineSet* LineSet1241 = new LineSet();
LineSet1241->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1242 = new Coordinate();
Coordinate1242->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
LineSet1241->addChild(Coordinate1242);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1243 = new ColorRGBA();
ColorRGBA1243->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1241->addChild(ColorRGBA1243);

Shape1240->setGeometry(LineSet1241);

HAnimSegment1236->addChild(Shape1240);

HAnimJoint1235->addChild(HAnimSegment1236);

HAnimJoint* HAnimJoint1244 = new HAnimJoint();
HAnimJoint1244->setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1244->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1244->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimSegment* HAnimSegment1245 = new HAnimSegment();
HAnimSegment1245->setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1245->setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform* Transform1246 = new Transform();
Transform1246->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
Transform* Transform1247 = new Transform();
//Empty Transform
Shape* Shape1248 = new Shape();
Shape1248->setUSE(CString("HAnimJointShape"));
Transform1247->addChild(Shape1248);

Transform1246->addChild(Transform1247);

HAnimSegment1245->addChild(Transform1246);

Shape* Shape1249 = new Shape();
LineSet* LineSet1250 = new LineSet();
LineSet1250->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate1251 = new Coordinate();
Coordinate1251->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
LineSet1250->addChild(Coordinate1251);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1252 = new ColorRGBA();
ColorRGBA1252->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1250->addChild(ColorRGBA1252);

Shape1249->setGeometry(LineSet1250);

HAnimSegment1245->addChild(Shape1249);

HAnimJoint1244->addChild(HAnimSegment1245);

HAnimJoint* HAnimJoint1253 = new HAnimJoint();
HAnimJoint1253->setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1253->setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint1253->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1244->addChild(HAnimJoint1253);

HAnimJoint1235->addChild(HAnimJoint1244);

HAnimJoint1226->addChild(HAnimJoint1235);

HAnimJoint1185->addChild(HAnimJoint1226);

HAnimJoint1062->addChild(HAnimJoint1185);

HAnimJoint1053->addChild(HAnimJoint1062);

HAnimJoint1044->addChild(HAnimJoint1053);

HAnimJoint1035->addChild(HAnimJoint1044);

HAnimJoint1026->addChild(HAnimJoint1035);

HAnimJoint678->addChild(HAnimJoint1026);

HAnimJoint669->addChild(HAnimJoint678);

HAnimJoint660->addChild(HAnimJoint669);

HAnimJoint651->addChild(HAnimJoint660);

HAnimJoint642->addChild(HAnimJoint651);

HAnimJoint633->addChild(HAnimJoint642);

HAnimJoint624->addChild(HAnimJoint633);

HAnimJoint615->addChild(HAnimJoint624);

HAnimJoint606->addChild(HAnimJoint615);

HAnimJoint597->addChild(HAnimJoint606);

HAnimJoint588->addChild(HAnimJoint597);

HAnimJoint579->addChild(HAnimJoint588);

HAnimJoint570->addChild(HAnimJoint579);

HAnimJoint561->addChild(HAnimJoint570);

HAnimJoint552->addChild(HAnimJoint561);

HAnimJoint543->addChild(HAnimJoint552);

HAnimJoint534->addChild(HAnimJoint543);

HAnimJoint52->addChild(HAnimJoint534);

HAnimHumanoid43->setSkeleton(HAnimJoint52);

HAnimJoint* HAnimJoint1254 = new HAnimJoint();
HAnimJoint1254->setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid43->addChild(HAnimJoint1254);

HAnimJoint* HAnimJoint1255 = new HAnimJoint();
HAnimJoint1255->setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid43->addChild(HAnimJoint1255);

HAnimJoint* HAnimJoint1256 = new HAnimJoint();
HAnimJoint1256->setUSE(CString("hanim_l_hip"));
HAnimHumanoid43->addChild(HAnimJoint1256);

HAnimJoint* HAnimJoint1257 = new HAnimJoint();
HAnimJoint1257->setUSE(CString("hanim_l_knee"));
HAnimHumanoid43->addChild(HAnimJoint1257);

HAnimJoint* HAnimJoint1258 = new HAnimJoint();
HAnimJoint1258->setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid43->addChild(HAnimJoint1258);

HAnimJoint* HAnimJoint1259 = new HAnimJoint();
HAnimJoint1259->setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid43->addChild(HAnimJoint1259);

HAnimJoint* HAnimJoint1260 = new HAnimJoint();
HAnimJoint1260->setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid43->addChild(HAnimJoint1260);

HAnimJoint* HAnimJoint1261 = new HAnimJoint();
HAnimJoint1261->setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid43->addChild(HAnimJoint1261);

HAnimJoint* HAnimJoint1262 = new HAnimJoint();
HAnimJoint1262->setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1262);

HAnimJoint* HAnimJoint1263 = new HAnimJoint();
HAnimJoint1263->setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1263);

HAnimJoint* HAnimJoint1264 = new HAnimJoint();
HAnimJoint1264->setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid43->addChild(HAnimJoint1264);

HAnimJoint* HAnimJoint1265 = new HAnimJoint();
HAnimJoint1265->setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid43->addChild(HAnimJoint1265);

HAnimJoint* HAnimJoint1266 = new HAnimJoint();
HAnimJoint1266->setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1266);

HAnimJoint* HAnimJoint1267 = new HAnimJoint();
HAnimJoint1267->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1267);

HAnimJoint* HAnimJoint1268 = new HAnimJoint();
HAnimJoint1268->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1268);

HAnimJoint* HAnimJoint1269 = new HAnimJoint();
HAnimJoint1269->setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid43->addChild(HAnimJoint1269);

HAnimJoint* HAnimJoint1270 = new HAnimJoint();
HAnimJoint1270->setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid43->addChild(HAnimJoint1270);

HAnimJoint* HAnimJoint1271 = new HAnimJoint();
HAnimJoint1271->setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1271);

HAnimJoint* HAnimJoint1272 = new HAnimJoint();
HAnimJoint1272->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1272);

HAnimJoint* HAnimJoint1273 = new HAnimJoint();
HAnimJoint1273->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1273);

HAnimJoint* HAnimJoint1274 = new HAnimJoint();
HAnimJoint1274->setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid43->addChild(HAnimJoint1274);

HAnimJoint* HAnimJoint1275 = new HAnimJoint();
HAnimJoint1275->setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid43->addChild(HAnimJoint1275);

HAnimJoint* HAnimJoint1276 = new HAnimJoint();
HAnimJoint1276->setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid43->addChild(HAnimJoint1276);

HAnimJoint* HAnimJoint1277 = new HAnimJoint();
HAnimJoint1277->setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1277);

HAnimJoint* HAnimJoint1278 = new HAnimJoint();
HAnimJoint1278->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1278);

HAnimJoint* HAnimJoint1279 = new HAnimJoint();
HAnimJoint1279->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1279);

HAnimJoint* HAnimJoint1280 = new HAnimJoint();
HAnimJoint1280->setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid43->addChild(HAnimJoint1280);

HAnimJoint* HAnimJoint1281 = new HAnimJoint();
HAnimJoint1281->setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1281);

HAnimJoint* HAnimJoint1282 = new HAnimJoint();
HAnimJoint1282->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1282);

HAnimJoint* HAnimJoint1283 = new HAnimJoint();
HAnimJoint1283->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1283);

HAnimJoint* HAnimJoint1284 = new HAnimJoint();
HAnimJoint1284->setUSE(CString("hanim_r_hip"));
HAnimHumanoid43->addChild(HAnimJoint1284);

HAnimJoint* HAnimJoint1285 = new HAnimJoint();
HAnimJoint1285->setUSE(CString("hanim_r_knee"));
HAnimHumanoid43->addChild(HAnimJoint1285);

HAnimJoint* HAnimJoint1286 = new HAnimJoint();
HAnimJoint1286->setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid43->addChild(HAnimJoint1286);

HAnimJoint* HAnimJoint1287 = new HAnimJoint();
HAnimJoint1287->setUSE(CString("hanim_r_talocalcaneonavicular"));
HAnimHumanoid43->addChild(HAnimJoint1287);

HAnimJoint* HAnimJoint1288 = new HAnimJoint();
HAnimJoint1288->setUSE(CString("hanim_r_cuneonavicular_1"));
HAnimHumanoid43->addChild(HAnimJoint1288);

HAnimJoint* HAnimJoint1289 = new HAnimJoint();
HAnimJoint1289->setUSE(CString("hanim_r_tarsometatarsal_1"));
HAnimHumanoid43->addChild(HAnimJoint1289);

HAnimJoint* HAnimJoint1290 = new HAnimJoint();
HAnimJoint1290->setUSE(CString("hanim_r_metatarsophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1290);

HAnimJoint* HAnimJoint1291 = new HAnimJoint();
HAnimJoint1291->setUSE(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1291);

HAnimJoint* HAnimJoint1292 = new HAnimJoint();
HAnimJoint1292->setUSE(CString("hanim_r_cuneonavicular_2"));
HAnimHumanoid43->addChild(HAnimJoint1292);

HAnimJoint* HAnimJoint1293 = new HAnimJoint();
HAnimJoint1293->setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid43->addChild(HAnimJoint1293);

HAnimJoint* HAnimJoint1294 = new HAnimJoint();
HAnimJoint1294->setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1294);

HAnimJoint* HAnimJoint1295 = new HAnimJoint();
HAnimJoint1295->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1295);

HAnimJoint* HAnimJoint1296 = new HAnimJoint();
HAnimJoint1296->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1296);

HAnimJoint* HAnimJoint1297 = new HAnimJoint();
HAnimJoint1297->setUSE(CString("hanim_r_cuneonavicular_3"));
HAnimHumanoid43->addChild(HAnimJoint1297);

HAnimJoint* HAnimJoint1298 = new HAnimJoint();
HAnimJoint1298->setUSE(CString("hanim_r_tarsometatarsal_3"));
HAnimHumanoid43->addChild(HAnimJoint1298);

HAnimJoint* HAnimJoint1299 = new HAnimJoint();
HAnimJoint1299->setUSE(CString("hanim_r_metatarsophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1299);

HAnimJoint* HAnimJoint1300 = new HAnimJoint();
HAnimJoint1300->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1300);

HAnimJoint* HAnimJoint1301 = new HAnimJoint();
HAnimJoint1301->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1301);

HAnimJoint* HAnimJoint1302 = new HAnimJoint();
HAnimJoint1302->setUSE(CString("hanim_r_calcaneocuboid"));
HAnimHumanoid43->addChild(HAnimJoint1302);

HAnimJoint* HAnimJoint1303 = new HAnimJoint();
HAnimJoint1303->setUSE(CString("hanim_r_transversetarsal"));
HAnimHumanoid43->addChild(HAnimJoint1303);

HAnimJoint* HAnimJoint1304 = new HAnimJoint();
HAnimJoint1304->setUSE(CString("hanim_r_tarsometatarsal_4"));
HAnimHumanoid43->addChild(HAnimJoint1304);

HAnimJoint* HAnimJoint1305 = new HAnimJoint();
HAnimJoint1305->setUSE(CString("hanim_r_metatarsophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1305);

HAnimJoint* HAnimJoint1306 = new HAnimJoint();
HAnimJoint1306->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1306);

HAnimJoint* HAnimJoint1307 = new HAnimJoint();
HAnimJoint1307->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1307);

HAnimJoint* HAnimJoint1308 = new HAnimJoint();
HAnimJoint1308->setUSE(CString("hanim_r_tarsometatarsal_5"));
HAnimHumanoid43->addChild(HAnimJoint1308);

HAnimJoint* HAnimJoint1309 = new HAnimJoint();
HAnimJoint1309->setUSE(CString("hanim_r_metatarsophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1309);

HAnimJoint* HAnimJoint1310 = new HAnimJoint();
HAnimJoint1310->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1310);

HAnimJoint* HAnimJoint1311 = new HAnimJoint();
HAnimJoint1311->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1311);

HAnimJoint* HAnimJoint1312 = new HAnimJoint();
HAnimJoint1312->setUSE(CString("hanim_vl5"));
HAnimHumanoid43->addChild(HAnimJoint1312);

HAnimJoint* HAnimJoint1313 = new HAnimJoint();
HAnimJoint1313->setUSE(CString("hanim_vl4"));
HAnimHumanoid43->addChild(HAnimJoint1313);

HAnimJoint* HAnimJoint1314 = new HAnimJoint();
HAnimJoint1314->setUSE(CString("hanim_vl3"));
HAnimHumanoid43->addChild(HAnimJoint1314);

HAnimJoint* HAnimJoint1315 = new HAnimJoint();
HAnimJoint1315->setUSE(CString("hanim_vl2"));
HAnimHumanoid43->addChild(HAnimJoint1315);

HAnimJoint* HAnimJoint1316 = new HAnimJoint();
HAnimJoint1316->setUSE(CString("hanim_vl1"));
HAnimHumanoid43->addChild(HAnimJoint1316);

HAnimJoint* HAnimJoint1317 = new HAnimJoint();
HAnimJoint1317->setUSE(CString("hanim_vt12"));
HAnimHumanoid43->addChild(HAnimJoint1317);

HAnimJoint* HAnimJoint1318 = new HAnimJoint();
HAnimJoint1318->setUSE(CString("hanim_vt11"));
HAnimHumanoid43->addChild(HAnimJoint1318);

HAnimJoint* HAnimJoint1319 = new HAnimJoint();
HAnimJoint1319->setUSE(CString("hanim_vt10"));
HAnimHumanoid43->addChild(HAnimJoint1319);

HAnimJoint* HAnimJoint1320 = new HAnimJoint();
HAnimJoint1320->setUSE(CString("hanim_vt9"));
HAnimHumanoid43->addChild(HAnimJoint1320);

HAnimJoint* HAnimJoint1321 = new HAnimJoint();
HAnimJoint1321->setUSE(CString("hanim_vt8"));
HAnimHumanoid43->addChild(HAnimJoint1321);

HAnimJoint* HAnimJoint1322 = new HAnimJoint();
HAnimJoint1322->setUSE(CString("hanim_vt7"));
HAnimHumanoid43->addChild(HAnimJoint1322);

HAnimJoint* HAnimJoint1323 = new HAnimJoint();
HAnimJoint1323->setUSE(CString("hanim_vt6"));
HAnimHumanoid43->addChild(HAnimJoint1323);

HAnimJoint* HAnimJoint1324 = new HAnimJoint();
HAnimJoint1324->setUSE(CString("hanim_vt5"));
HAnimHumanoid43->addChild(HAnimJoint1324);

HAnimJoint* HAnimJoint1325 = new HAnimJoint();
HAnimJoint1325->setUSE(CString("hanim_vt4"));
HAnimHumanoid43->addChild(HAnimJoint1325);

HAnimJoint* HAnimJoint1326 = new HAnimJoint();
HAnimJoint1326->setUSE(CString("hanim_vt3"));
HAnimHumanoid43->addChild(HAnimJoint1326);

HAnimJoint* HAnimJoint1327 = new HAnimJoint();
HAnimJoint1327->setUSE(CString("hanim_vt2"));
HAnimHumanoid43->addChild(HAnimJoint1327);

HAnimJoint* HAnimJoint1328 = new HAnimJoint();
HAnimJoint1328->setUSE(CString("hanim_vt1"));
HAnimHumanoid43->addChild(HAnimJoint1328);

HAnimJoint* HAnimJoint1329 = new HAnimJoint();
HAnimJoint1329->setUSE(CString("hanim_vc7"));
HAnimHumanoid43->addChild(HAnimJoint1329);

HAnimJoint* HAnimJoint1330 = new HAnimJoint();
HAnimJoint1330->setUSE(CString("hanim_vc6"));
HAnimHumanoid43->addChild(HAnimJoint1330);

HAnimJoint* HAnimJoint1331 = new HAnimJoint();
HAnimJoint1331->setUSE(CString("hanim_vc5"));
HAnimHumanoid43->addChild(HAnimJoint1331);

HAnimJoint* HAnimJoint1332 = new HAnimJoint();
HAnimJoint1332->setUSE(CString("hanim_vc4"));
HAnimHumanoid43->addChild(HAnimJoint1332);

HAnimJoint* HAnimJoint1333 = new HAnimJoint();
HAnimJoint1333->setUSE(CString("hanim_vc3"));
HAnimHumanoid43->addChild(HAnimJoint1333);

HAnimJoint* HAnimJoint1334 = new HAnimJoint();
HAnimJoint1334->setUSE(CString("hanim_vc2"));
HAnimHumanoid43->addChild(HAnimJoint1334);

HAnimJoint* HAnimJoint1335 = new HAnimJoint();
HAnimJoint1335->setUSE(CString("hanim_vc1"));
HAnimHumanoid43->addChild(HAnimJoint1335);

HAnimJoint* HAnimJoint1336 = new HAnimJoint();
HAnimJoint1336->setUSE(CString("hanim_skullbase"));
HAnimHumanoid43->addChild(HAnimJoint1336);

HAnimJoint* HAnimJoint1337 = new HAnimJoint();
HAnimJoint1337->setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid43->addChild(HAnimJoint1337);

HAnimJoint* HAnimJoint1338 = new HAnimJoint();
HAnimJoint1338->setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid43->addChild(HAnimJoint1338);

HAnimJoint* HAnimJoint1339 = new HAnimJoint();
HAnimJoint1339->setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid43->addChild(HAnimJoint1339);

HAnimJoint* HAnimJoint1340 = new HAnimJoint();
HAnimJoint1340->setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid43->addChild(HAnimJoint1340);

HAnimJoint* HAnimJoint1341 = new HAnimJoint();
HAnimJoint1341->setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid43->addChild(HAnimJoint1341);

HAnimJoint* HAnimJoint1342 = new HAnimJoint();
HAnimJoint1342->setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid43->addChild(HAnimJoint1342);

HAnimJoint* HAnimJoint1343 = new HAnimJoint();
HAnimJoint1343->setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid43->addChild(HAnimJoint1343);

HAnimJoint* HAnimJoint1344 = new HAnimJoint();
HAnimJoint1344->setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1344);

HAnimJoint* HAnimJoint1345 = new HAnimJoint();
HAnimJoint1345->setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1345);

HAnimJoint* HAnimJoint1346 = new HAnimJoint();
HAnimJoint1346->setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid43->addChild(HAnimJoint1346);

HAnimJoint* HAnimJoint1347 = new HAnimJoint();
HAnimJoint1347->setUSE(CString("hanim_l_elbow"));
HAnimHumanoid43->addChild(HAnimJoint1347);

HAnimJoint* HAnimJoint1348 = new HAnimJoint();
HAnimJoint1348->setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid43->addChild(HAnimJoint1348);

HAnimJoint* HAnimJoint1349 = new HAnimJoint();
HAnimJoint1349->setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint1349);

HAnimJoint* HAnimJoint1350 = new HAnimJoint();
HAnimJoint1350->setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint1350);

HAnimJoint* HAnimJoint1351 = new HAnimJoint();
HAnimJoint1351->setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1351);

HAnimJoint* HAnimJoint1352 = new HAnimJoint();
HAnimJoint1352->setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1352);

HAnimJoint* HAnimJoint1353 = new HAnimJoint();
HAnimJoint1353->setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint1353);

HAnimJoint* HAnimJoint1354 = new HAnimJoint();
HAnimJoint1354->setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint1354);

HAnimJoint* HAnimJoint1355 = new HAnimJoint();
HAnimJoint1355->setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1355);

HAnimJoint* HAnimJoint1356 = new HAnimJoint();
HAnimJoint1356->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1356);

HAnimJoint* HAnimJoint1357 = new HAnimJoint();
HAnimJoint1357->setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1357);

HAnimJoint* HAnimJoint1358 = new HAnimJoint();
HAnimJoint1358->setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint1358);

HAnimJoint* HAnimJoint1359 = new HAnimJoint();
HAnimJoint1359->setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint1359);

HAnimJoint* HAnimJoint1360 = new HAnimJoint();
HAnimJoint1360->setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1360);

HAnimJoint* HAnimJoint1361 = new HAnimJoint();
HAnimJoint1361->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1361);

HAnimJoint* HAnimJoint1362 = new HAnimJoint();
HAnimJoint1362->setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1362);

HAnimJoint* HAnimJoint1363 = new HAnimJoint();
HAnimJoint1363->setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid43->addChild(HAnimJoint1363);

HAnimJoint* HAnimJoint1364 = new HAnimJoint();
HAnimJoint1364->setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid43->addChild(HAnimJoint1364);

HAnimJoint* HAnimJoint1365 = new HAnimJoint();
HAnimJoint1365->setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1365);

HAnimJoint* HAnimJoint1366 = new HAnimJoint();
HAnimJoint1366->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1366);

HAnimJoint* HAnimJoint1367 = new HAnimJoint();
HAnimJoint1367->setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1367);

HAnimJoint* HAnimJoint1368 = new HAnimJoint();
HAnimJoint1368->setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid43->addChild(HAnimJoint1368);

HAnimJoint* HAnimJoint1369 = new HAnimJoint();
HAnimJoint1369->setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1369);

HAnimJoint* HAnimJoint1370 = new HAnimJoint();
HAnimJoint1370->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1370);

HAnimJoint* HAnimJoint1371 = new HAnimJoint();
HAnimJoint1371->setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1371);

HAnimJoint* HAnimJoint1372 = new HAnimJoint();
HAnimJoint1372->setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1372);

HAnimJoint* HAnimJoint1373 = new HAnimJoint();
HAnimJoint1373->setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1373);

HAnimJoint* HAnimJoint1374 = new HAnimJoint();
HAnimJoint1374->setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid43->addChild(HAnimJoint1374);

HAnimJoint* HAnimJoint1375 = new HAnimJoint();
HAnimJoint1375->setUSE(CString("hanim_r_elbow"));
HAnimHumanoid43->addChild(HAnimJoint1375);

HAnimJoint* HAnimJoint1376 = new HAnimJoint();
HAnimJoint1376->setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid43->addChild(HAnimJoint1376);

HAnimJoint* HAnimJoint1377 = new HAnimJoint();
HAnimJoint1377->setUSE(CString("hanim_r_midcarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint1377);

HAnimJoint* HAnimJoint1378 = new HAnimJoint();
HAnimJoint1378->setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint1378);

HAnimJoint* HAnimJoint1379 = new HAnimJoint();
HAnimJoint1379->setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1379);

HAnimJoint* HAnimJoint1380 = new HAnimJoint();
HAnimJoint1380->setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1380);

HAnimJoint* HAnimJoint1381 = new HAnimJoint();
HAnimJoint1381->setUSE(CString("hanim_r_midcarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint1381);

HAnimJoint* HAnimJoint1382 = new HAnimJoint();
HAnimJoint1382->setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint1382);

HAnimJoint* HAnimJoint1383 = new HAnimJoint();
HAnimJoint1383->setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1383);

HAnimJoint* HAnimJoint1384 = new HAnimJoint();
HAnimJoint1384->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1384);

HAnimJoint* HAnimJoint1385 = new HAnimJoint();
HAnimJoint1385->setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1385);

HAnimJoint* HAnimJoint1386 = new HAnimJoint();
HAnimJoint1386->setUSE(CString("hanim_r_midcarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint1386);

HAnimJoint* HAnimJoint1387 = new HAnimJoint();
HAnimJoint1387->setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint1387);

HAnimJoint* HAnimJoint1388 = new HAnimJoint();
HAnimJoint1388->setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1388);

HAnimJoint* HAnimJoint1389 = new HAnimJoint();
HAnimJoint1389->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1389);

HAnimJoint* HAnimJoint1390 = new HAnimJoint();
HAnimJoint1390->setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1390);

HAnimJoint* HAnimJoint1391 = new HAnimJoint();
HAnimJoint1391->setUSE(CString("hanim_r_midcarpal_4_5"));
HAnimHumanoid43->addChild(HAnimJoint1391);

HAnimJoint* HAnimJoint1392 = new HAnimJoint();
HAnimJoint1392->setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid43->addChild(HAnimJoint1392);

HAnimJoint* HAnimJoint1393 = new HAnimJoint();
HAnimJoint1393->setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1393);

HAnimJoint* HAnimJoint1394 = new HAnimJoint();
HAnimJoint1394->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1394);

HAnimJoint* HAnimJoint1395 = new HAnimJoint();
HAnimJoint1395->setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1395);

HAnimJoint* HAnimJoint1396 = new HAnimJoint();
HAnimJoint1396->setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid43->addChild(HAnimJoint1396);

HAnimJoint* HAnimJoint1397 = new HAnimJoint();
HAnimJoint1397->setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1397);

HAnimJoint* HAnimJoint1398 = new HAnimJoint();
HAnimJoint1398->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1398);

HAnimJoint* HAnimJoint1399 = new HAnimJoint();
HAnimJoint1399->setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1399);

HAnimSegment* HAnimSegment1400 = new HAnimSegment();
HAnimSegment1400->setUSE(CString("hanim_sacrum"));
HAnimHumanoid43->setSegments(HAnimSegment1400);

HAnimSegment* HAnimSegment1401 = new HAnimSegment();
HAnimSegment1401->setUSE(CString("hanim_pelvis"));
HAnimHumanoid43->setSegments(HAnimSegment1401);

HAnimSegment* HAnimSegment1402 = new HAnimSegment();
HAnimSegment1402->setUSE(CString("hanim_l_thigh"));
HAnimHumanoid43->setSegments(HAnimSegment1402);

HAnimSegment* HAnimSegment1403 = new HAnimSegment();
HAnimSegment1403->setUSE(CString("hanim_l_calf"));
HAnimHumanoid43->setSegments(HAnimSegment1403);

HAnimSegment* HAnimSegment1404 = new HAnimSegment();
HAnimSegment1404->setUSE(CString("hanim_l_talus"));
HAnimHumanoid43->setSegments(HAnimSegment1404);

HAnimSegment* HAnimSegment1405 = new HAnimSegment();
HAnimSegment1405->setUSE(CString("hanim_l_navicular"));
HAnimHumanoid43->setSegments(HAnimSegment1405);

HAnimSegment* HAnimSegment1406 = new HAnimSegment();
HAnimSegment1406->setUSE(CString("hanim_l_cuneiform_1"));
HAnimHumanoid43->setSegments(HAnimSegment1406);

HAnimSegment* HAnimSegment1407 = new HAnimSegment();
HAnimSegment1407->setUSE(CString("hanim_l_metatarsal_1"));
HAnimHumanoid43->setSegments(HAnimSegment1407);

HAnimSegment* HAnimSegment1408 = new HAnimSegment();
HAnimSegment1408->setUSE(CString("hanim_l_tarsal_proximal_phalanx_1"));
HAnimHumanoid43->setSegments(HAnimSegment1408);

HAnimSegment* HAnimSegment1409 = new HAnimSegment();
HAnimSegment1409->setUSE(CString("hanim_l_cuneiform_2"));
HAnimHumanoid43->setSegments(HAnimSegment1409);

HAnimSegment* HAnimSegment1410 = new HAnimSegment();
HAnimSegment1410->setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1410);

HAnimSegment* HAnimSegment1411 = new HAnimSegment();
HAnimSegment1411->setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1411);

HAnimSegment* HAnimSegment1412 = new HAnimSegment();
HAnimSegment1412->setUSE(CString("hanim_l_tarsal_middle_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1412);

HAnimSegment* HAnimSegment1413 = new HAnimSegment();
HAnimSegment1413->setUSE(CString("hanim_l_cuneiform_3"));
HAnimHumanoid43->setSegments(HAnimSegment1413);

HAnimSegment* HAnimSegment1414 = new HAnimSegment();
HAnimSegment1414->setUSE(CString("hanim_l_metatarsal_3"));
HAnimHumanoid43->setSegments(HAnimSegment1414);

HAnimSegment* HAnimSegment1415 = new HAnimSegment();
HAnimSegment1415->setUSE(CString("hanim_l_tarsal_proximal_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1415);

HAnimSegment* HAnimSegment1416 = new HAnimSegment();
HAnimSegment1416->setUSE(CString("hanim_l_tarsal_middle_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1416);

HAnimSegment* HAnimSegment1417 = new HAnimSegment();
HAnimSegment1417->setUSE(CString("hanim_l_calcaneus"));
HAnimHumanoid43->setSegments(HAnimSegment1417);

HAnimSegment* HAnimSegment1418 = new HAnimSegment();
HAnimSegment1418->setUSE(CString("hanim_l_cuboid"));
HAnimHumanoid43->setSegments(HAnimSegment1418);

HAnimSegment* HAnimSegment1419 = new HAnimSegment();
HAnimSegment1419->setUSE(CString("hanim_l_metatarsal_4"));
HAnimHumanoid43->setSegments(HAnimSegment1419);

HAnimSegment* HAnimSegment1420 = new HAnimSegment();
HAnimSegment1420->setUSE(CString("hanim_l_tarsal_proximal_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1420);

HAnimSegment* HAnimSegment1421 = new HAnimSegment();
HAnimSegment1421->setUSE(CString("hanim_l_tarsal_middle_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1421);

HAnimSegment* HAnimSegment1422 = new HAnimSegment();
HAnimSegment1422->setUSE(CString("hanim_l_metatarsal_5"));
HAnimHumanoid43->setSegments(HAnimSegment1422);

HAnimSegment* HAnimSegment1423 = new HAnimSegment();
HAnimSegment1423->setUSE(CString("hanim_l_tarsal_proximal_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1423);

HAnimSegment* HAnimSegment1424 = new HAnimSegment();
HAnimSegment1424->setUSE(CString("hanim_l_tarsal_middle_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1424);

HAnimSegment* HAnimSegment1425 = new HAnimSegment();
HAnimSegment1425->setUSE(CString("hanim_r_thigh"));
HAnimHumanoid43->setSegments(HAnimSegment1425);

HAnimSegment* HAnimSegment1426 = new HAnimSegment();
HAnimSegment1426->setUSE(CString("hanim_r_calf"));
HAnimHumanoid43->setSegments(HAnimSegment1426);

HAnimSegment* HAnimSegment1427 = new HAnimSegment();
HAnimSegment1427->setUSE(CString("hanim_r_talus"));
HAnimHumanoid43->setSegments(HAnimSegment1427);

HAnimSegment* HAnimSegment1428 = new HAnimSegment();
HAnimSegment1428->setUSE(CString("hanim_r_navicular"));
HAnimHumanoid43->setSegments(HAnimSegment1428);

HAnimSegment* HAnimSegment1429 = new HAnimSegment();
HAnimSegment1429->setUSE(CString("hanim_r_cuneiform_1"));
HAnimHumanoid43->setSegments(HAnimSegment1429);

HAnimSegment* HAnimSegment1430 = new HAnimSegment();
HAnimSegment1430->setUSE(CString("hanim_r_metatarsal_1"));
HAnimHumanoid43->setSegments(HAnimSegment1430);

HAnimSegment* HAnimSegment1431 = new HAnimSegment();
HAnimSegment1431->setUSE(CString("hanim_r_tarsal_proximal_phalanx_1"));
HAnimHumanoid43->setSegments(HAnimSegment1431);

HAnimSegment* HAnimSegment1432 = new HAnimSegment();
HAnimSegment1432->setUSE(CString("hanim_r_cuneiform_2"));
HAnimHumanoid43->setSegments(HAnimSegment1432);

HAnimSegment* HAnimSegment1433 = new HAnimSegment();
HAnimSegment1433->setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1433);

HAnimSegment* HAnimSegment1434 = new HAnimSegment();
HAnimSegment1434->setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1434);

HAnimSegment* HAnimSegment1435 = new HAnimSegment();
HAnimSegment1435->setUSE(CString("hanim_r_tarsal_middle_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1435);

HAnimSegment* HAnimSegment1436 = new HAnimSegment();
HAnimSegment1436->setUSE(CString("hanim_r_cuneiform_3"));
HAnimHumanoid43->setSegments(HAnimSegment1436);

HAnimSegment* HAnimSegment1437 = new HAnimSegment();
HAnimSegment1437->setUSE(CString("hanim_r_metatarsal_3"));
HAnimHumanoid43->setSegments(HAnimSegment1437);

HAnimSegment* HAnimSegment1438 = new HAnimSegment();
HAnimSegment1438->setUSE(CString("hanim_r_tarsal_proximal_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1438);

HAnimSegment* HAnimSegment1439 = new HAnimSegment();
HAnimSegment1439->setUSE(CString("hanim_r_tarsal_middle_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1439);

HAnimSegment* HAnimSegment1440 = new HAnimSegment();
HAnimSegment1440->setUSE(CString("hanim_r_calcaneus"));
HAnimHumanoid43->setSegments(HAnimSegment1440);

HAnimSegment* HAnimSegment1441 = new HAnimSegment();
HAnimSegment1441->setUSE(CString("hanim_r_cuboid"));
HAnimHumanoid43->setSegments(HAnimSegment1441);

HAnimSegment* HAnimSegment1442 = new HAnimSegment();
HAnimSegment1442->setUSE(CString("hanim_r_metatarsal_4"));
HAnimHumanoid43->setSegments(HAnimSegment1442);

HAnimSegment* HAnimSegment1443 = new HAnimSegment();
HAnimSegment1443->setUSE(CString("hanim_r_tarsal_proximal_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1443);

HAnimSegment* HAnimSegment1444 = new HAnimSegment();
HAnimSegment1444->setUSE(CString("hanim_r_tarsal_middle_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1444);

HAnimSegment* HAnimSegment1445 = new HAnimSegment();
HAnimSegment1445->setUSE(CString("hanim_r_metatarsal_5"));
HAnimHumanoid43->setSegments(HAnimSegment1445);

HAnimSegment* HAnimSegment1446 = new HAnimSegment();
HAnimSegment1446->setUSE(CString("hanim_r_tarsal_proximal_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1446);

HAnimSegment* HAnimSegment1447 = new HAnimSegment();
HAnimSegment1447->setUSE(CString("hanim_r_tarsal_middle_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1447);

HAnimSegment* HAnimSegment1448 = new HAnimSegment();
HAnimSegment1448->setUSE(CString("hanim_l5"));
HAnimHumanoid43->setSegments(HAnimSegment1448);

HAnimSegment* HAnimSegment1449 = new HAnimSegment();
HAnimSegment1449->setUSE(CString("hanim_l4"));
HAnimHumanoid43->setSegments(HAnimSegment1449);

HAnimSegment* HAnimSegment1450 = new HAnimSegment();
HAnimSegment1450->setUSE(CString("hanim_l3"));
HAnimHumanoid43->setSegments(HAnimSegment1450);

HAnimSegment* HAnimSegment1451 = new HAnimSegment();
HAnimSegment1451->setUSE(CString("hanim_l2"));
HAnimHumanoid43->setSegments(HAnimSegment1451);

HAnimSegment* HAnimSegment1452 = new HAnimSegment();
HAnimSegment1452->setUSE(CString("hanim_l1"));
HAnimHumanoid43->setSegments(HAnimSegment1452);

HAnimSegment* HAnimSegment1453 = new HAnimSegment();
HAnimSegment1453->setUSE(CString("hanim_t12"));
HAnimHumanoid43->setSegments(HAnimSegment1453);

HAnimSegment* HAnimSegment1454 = new HAnimSegment();
HAnimSegment1454->setUSE(CString("hanim_t11"));
HAnimHumanoid43->setSegments(HAnimSegment1454);

HAnimSegment* HAnimSegment1455 = new HAnimSegment();
HAnimSegment1455->setUSE(CString("hanim_t10"));
HAnimHumanoid43->setSegments(HAnimSegment1455);

HAnimSegment* HAnimSegment1456 = new HAnimSegment();
HAnimSegment1456->setUSE(CString("hanim_t9"));
HAnimHumanoid43->setSegments(HAnimSegment1456);

HAnimSegment* HAnimSegment1457 = new HAnimSegment();
HAnimSegment1457->setUSE(CString("hanim_t8"));
HAnimHumanoid43->setSegments(HAnimSegment1457);

HAnimSegment* HAnimSegment1458 = new HAnimSegment();
HAnimSegment1458->setUSE(CString("hanim_t7"));
HAnimHumanoid43->setSegments(HAnimSegment1458);

HAnimSegment* HAnimSegment1459 = new HAnimSegment();
HAnimSegment1459->setUSE(CString("hanim_t6"));
HAnimHumanoid43->setSegments(HAnimSegment1459);

HAnimSegment* HAnimSegment1460 = new HAnimSegment();
HAnimSegment1460->setUSE(CString("hanim_t5"));
HAnimHumanoid43->setSegments(HAnimSegment1460);

HAnimSegment* HAnimSegment1461 = new HAnimSegment();
HAnimSegment1461->setUSE(CString("hanim_t4"));
HAnimHumanoid43->setSegments(HAnimSegment1461);

HAnimSegment* HAnimSegment1462 = new HAnimSegment();
HAnimSegment1462->setUSE(CString("hanim_t3"));
HAnimHumanoid43->setSegments(HAnimSegment1462);

HAnimSegment* HAnimSegment1463 = new HAnimSegment();
HAnimSegment1463->setUSE(CString("hanim_t2"));
HAnimHumanoid43->setSegments(HAnimSegment1463);

HAnimSegment* HAnimSegment1464 = new HAnimSegment();
HAnimSegment1464->setUSE(CString("hanim_t1"));
HAnimHumanoid43->setSegments(HAnimSegment1464);

HAnimSegment* HAnimSegment1465 = new HAnimSegment();
HAnimSegment1465->setUSE(CString("hanim_c7"));
HAnimHumanoid43->setSegments(HAnimSegment1465);

HAnimSegment* HAnimSegment1466 = new HAnimSegment();
HAnimSegment1466->setUSE(CString("hanim_c6"));
HAnimHumanoid43->setSegments(HAnimSegment1466);

HAnimSegment* HAnimSegment1467 = new HAnimSegment();
HAnimSegment1467->setUSE(CString("hanim_c5"));
HAnimHumanoid43->setSegments(HAnimSegment1467);

HAnimSegment* HAnimSegment1468 = new HAnimSegment();
HAnimSegment1468->setUSE(CString("hanim_c4"));
HAnimHumanoid43->setSegments(HAnimSegment1468);

HAnimSegment* HAnimSegment1469 = new HAnimSegment();
HAnimSegment1469->setUSE(CString("hanim_c3"));
HAnimHumanoid43->setSegments(HAnimSegment1469);

HAnimSegment* HAnimSegment1470 = new HAnimSegment();
HAnimSegment1470->setUSE(CString("hanim_c2"));
HAnimHumanoid43->setSegments(HAnimSegment1470);

HAnimSegment* HAnimSegment1471 = new HAnimSegment();
HAnimSegment1471->setUSE(CString("hanim_c1"));
HAnimHumanoid43->setSegments(HAnimSegment1471);

HAnimSegment* HAnimSegment1472 = new HAnimSegment();
HAnimSegment1472->setUSE(CString("hanim_skull"));
HAnimHumanoid43->setSegments(HAnimSegment1472);

HAnimSegment* HAnimSegment1473 = new HAnimSegment();
HAnimSegment1473->setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid43->setSegments(HAnimSegment1473);

HAnimSegment* HAnimSegment1474 = new HAnimSegment();
HAnimSegment1474->setUSE(CString("hanim_l_scapula"));
HAnimHumanoid43->setSegments(HAnimSegment1474);

HAnimSegment* HAnimSegment1475 = new HAnimSegment();
HAnimSegment1475->setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid43->setSegments(HAnimSegment1475);

HAnimSegment* HAnimSegment1476 = new HAnimSegment();
HAnimSegment1476->setUSE(CString("hanim_l_forearm"));
HAnimHumanoid43->setSegments(HAnimSegment1476);

HAnimSegment* HAnimSegment1477 = new HAnimSegment();
HAnimSegment1477->setUSE(CString("hanim_l_carpal"));
HAnimHumanoid43->setSegments(HAnimSegment1477);

HAnimSegment* HAnimSegment1478 = new HAnimSegment();
HAnimSegment1478->setUSE(CString("hanim_l_trapezium"));
HAnimHumanoid43->setSegments(HAnimSegment1478);

HAnimSegment* HAnimSegment1479 = new HAnimSegment();
HAnimSegment1479->setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid43->setSegments(HAnimSegment1479);

HAnimSegment* HAnimSegment1480 = new HAnimSegment();
HAnimSegment1480->setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid43->setSegments(HAnimSegment1480);

HAnimSegment* HAnimSegment1481 = new HAnimSegment();
HAnimSegment1481->setUSE(CString("hanim_l_trapezoid"));
HAnimHumanoid43->setSegments(HAnimSegment1481);

HAnimSegment* HAnimSegment1482 = new HAnimSegment();
HAnimSegment1482->setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1482);

HAnimSegment* HAnimSegment1483 = new HAnimSegment();
HAnimSegment1483->setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1483);

HAnimSegment* HAnimSegment1484 = new HAnimSegment();
HAnimSegment1484->setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1484);

HAnimSegment* HAnimSegment1485 = new HAnimSegment();
HAnimSegment1485->setUSE(CString("hanim_l_capitate"));
HAnimHumanoid43->setSegments(HAnimSegment1485);

HAnimSegment* HAnimSegment1486 = new HAnimSegment();
HAnimSegment1486->setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid43->setSegments(HAnimSegment1486);

HAnimSegment* HAnimSegment1487 = new HAnimSegment();
HAnimSegment1487->setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1487);

HAnimSegment* HAnimSegment1488 = new HAnimSegment();
HAnimSegment1488->setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1488);

HAnimSegment* HAnimSegment1489 = new HAnimSegment();
HAnimSegment1489->setUSE(CString("hanim_l_hamate"));
HAnimHumanoid43->setSegments(HAnimSegment1489);

HAnimSegment* HAnimSegment1490 = new HAnimSegment();
HAnimSegment1490->setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid43->setSegments(HAnimSegment1490);

HAnimSegment* HAnimSegment1491 = new HAnimSegment();
HAnimSegment1491->setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1491);

HAnimSegment* HAnimSegment1492 = new HAnimSegment();
HAnimSegment1492->setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1492);

HAnimSegment* HAnimSegment1493 = new HAnimSegment();
HAnimSegment1493->setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid43->setSegments(HAnimSegment1493);

HAnimSegment* HAnimSegment1494 = new HAnimSegment();
HAnimSegment1494->setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1494);

HAnimSegment* HAnimSegment1495 = new HAnimSegment();
HAnimSegment1495->setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1495);

HAnimSegment* HAnimSegment1496 = new HAnimSegment();
HAnimSegment1496->setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid43->setSegments(HAnimSegment1496);

HAnimSegment* HAnimSegment1497 = new HAnimSegment();
HAnimSegment1497->setUSE(CString("hanim_r_scapula"));
HAnimHumanoid43->setSegments(HAnimSegment1497);

HAnimSegment* HAnimSegment1498 = new HAnimSegment();
HAnimSegment1498->setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid43->setSegments(HAnimSegment1498);

HAnimSegment* HAnimSegment1499 = new HAnimSegment();
HAnimSegment1499->setUSE(CString("hanim_r_forearm"));
HAnimHumanoid43->setSegments(HAnimSegment1499);

HAnimSegment* HAnimSegment1500 = new HAnimSegment();
HAnimSegment1500->setUSE(CString("hanim_r_carpal"));
HAnimHumanoid43->setSegments(HAnimSegment1500);

HAnimSegment* HAnimSegment1501 = new HAnimSegment();
HAnimSegment1501->setUSE(CString("hanim_r_trapezium"));
HAnimHumanoid43->setSegments(HAnimSegment1501);

HAnimSegment* HAnimSegment1502 = new HAnimSegment();
HAnimSegment1502->setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid43->setSegments(HAnimSegment1502);

HAnimSegment* HAnimSegment1503 = new HAnimSegment();
HAnimSegment1503->setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid43->setSegments(HAnimSegment1503);

HAnimSegment* HAnimSegment1504 = new HAnimSegment();
HAnimSegment1504->setUSE(CString("hanim_r_trapezoid"));
HAnimHumanoid43->setSegments(HAnimSegment1504);

HAnimSegment* HAnimSegment1505 = new HAnimSegment();
HAnimSegment1505->setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1505);

HAnimSegment* HAnimSegment1506 = new HAnimSegment();
HAnimSegment1506->setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1506);

HAnimSegment* HAnimSegment1507 = new HAnimSegment();
HAnimSegment1507->setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1507);

HAnimSegment* HAnimSegment1508 = new HAnimSegment();
HAnimSegment1508->setUSE(CString("hanim_r_capitate"));
HAnimHumanoid43->setSegments(HAnimSegment1508);

HAnimSegment* HAnimSegment1509 = new HAnimSegment();
HAnimSegment1509->setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid43->setSegments(HAnimSegment1509);

HAnimSegment* HAnimSegment1510 = new HAnimSegment();
HAnimSegment1510->setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1510);

HAnimSegment* HAnimSegment1511 = new HAnimSegment();
HAnimSegment1511->setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1511);

HAnimSegment* HAnimSegment1512 = new HAnimSegment();
HAnimSegment1512->setUSE(CString("hanim_r_hamate"));
HAnimHumanoid43->setSegments(HAnimSegment1512);

HAnimSegment* HAnimSegment1513 = new HAnimSegment();
HAnimSegment1513->setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid43->setSegments(HAnimSegment1513);

HAnimSegment* HAnimSegment1514 = new HAnimSegment();
HAnimSegment1514->setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1514);

HAnimSegment* HAnimSegment1515 = new HAnimSegment();
HAnimSegment1515->setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1515);

HAnimSegment* HAnimSegment1516 = new HAnimSegment();
HAnimSegment1516->setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid43->setSegments(HAnimSegment1516);

HAnimSegment* HAnimSegment1517 = new HAnimSegment();
HAnimSegment1517->setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1517);

HAnimSegment* HAnimSegment1518 = new HAnimSegment();
HAnimSegment1518->setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1518);

Scene11->addChild(HAnimHumanoid43);

X3D0->setScene(Scene11);

}
