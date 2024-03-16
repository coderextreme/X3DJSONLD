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
meta3->setContent(CString("DonHumanoidNoSegSite.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("identifier"));
meta4->setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/DonHumanoidNoSegSite.x3d"));
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
IndexedLineSet14->setColorIndex(new int[3]{0,1,2}, 3);
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
ImageTexture49->setUrl(new CString[3]{CString("../data/zBlueSpiralBkg2.gif"), CString("zBlueSpiralBkg2.gif"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 3);
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
HAnimJoint52->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint52->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint53 = new HAnimJoint();
HAnimJoint53->setName(CString("sacroiliac"));
HAnimJoint53->setDEF(CString("hanim_sacroiliac"));
HAnimJoint53->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint53->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint53->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint54 = new HAnimJoint();
HAnimJoint54->setName(CString("l_hip"));
HAnimJoint54->setDEF(CString("hanim_l_hip"));
HAnimJoint54->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint54->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint54->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint55 = new HAnimJoint();
HAnimJoint55->setName(CString("l_knee"));
HAnimJoint55->setDEF(CString("hanim_l_knee"));
HAnimJoint55->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint55->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint55->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint56 = new HAnimJoint();
HAnimJoint56->setName(CString("l_talocrural"));
HAnimJoint56->setDEF(CString("hanim_l_talocrural"));
HAnimJoint56->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint56->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint56->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint57 = new HAnimJoint();
HAnimJoint57->setName(CString("l_talocalcaneonavicular"));
HAnimJoint57->setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint57->setCenter(new float[3]{0.0781,0.0283,-0.097});
HAnimJoint57->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint57->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint58 = new HAnimJoint();
HAnimJoint58->setName(CString("l_cuneonavicular_1"));
HAnimJoint58->setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint58->setCenter(new float[3]{0.0672,0.0235,-0.0835});
HAnimJoint58->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint58->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint59 = new HAnimJoint();
HAnimJoint59->setName(CString("l_tarsometatarsal_1"));
HAnimJoint59->setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint59->setCenter(new float[3]{0.0644,0.0147,-0.0577});
HAnimJoint59->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint59->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint60 = new HAnimJoint();
HAnimJoint60->setName(CString("l_metatarsophalangeal_1"));
HAnimJoint60->setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint60->setCenter(new float[3]{0.0619,0.0059,-0.0083});
HAnimJoint60->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint60->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint61 = new HAnimJoint();
HAnimJoint61->setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint61->setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint60->addChild(HAnimJoint61);

HAnimJoint59->addChild(HAnimJoint60);

HAnimJoint58->addChild(HAnimJoint59);

HAnimJoint57->addChild(HAnimJoint58);

HAnimJoint* HAnimJoint62 = new HAnimJoint();
HAnimJoint62->setName(CString("l_cuneonavicular_2"));
HAnimJoint62->setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint62->setCenter(new float[3]{0.0812,0.025,-0.0805});
HAnimJoint62->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint62->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint63 = new HAnimJoint();
HAnimJoint63->setName(CString("l_tarsometatarsal_2"));
HAnimJoint63->setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint63->setCenter(new float[3]{0.08,0.0175,-0.0608});
HAnimJoint63->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint63->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint64 = new HAnimJoint();
HAnimJoint64->setName(CString("l_metatarsophalangeal_2"));
HAnimJoint64->setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint64->setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimJoint64->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint64->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint65 = new HAnimJoint();
HAnimJoint65->setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint65->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint65->setCenter(new float[3]{0.0841,0.0041,0.0121});
HAnimJoint65->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint65->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint66 = new HAnimJoint();
HAnimJoint66->setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint66->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint66->setCenter(new float[3]{0.0841,0.0013,0.0216});
HAnimJoint66->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint66->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint65->addChild(HAnimJoint66);

HAnimJoint64->addChild(HAnimJoint65);

HAnimJoint63->addChild(HAnimJoint64);

HAnimJoint62->addChild(HAnimJoint63);

HAnimJoint57->addChild(HAnimJoint62);

HAnimJoint* HAnimJoint67 = new HAnimJoint();
HAnimJoint67->setName(CString("l_cuneonavicular_3"));
HAnimJoint67->setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint67->setCenter(new float[3]{0.0928,0.0248,-0.0821});
HAnimJoint67->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint67->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint68 = new HAnimJoint();
HAnimJoint68->setName(CString("l_tarsometatarsal_3"));
HAnimJoint68->setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint68->setCenter(new float[3]{0.0944,0.0175,-0.0625});
HAnimJoint68->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint68->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint69 = new HAnimJoint();
HAnimJoint69->setName(CString("l_metatarsophalangeal_3"));
HAnimJoint69->setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint69->setCenter(new float[3]{0.0963,0.0065,-0.0065});
HAnimJoint69->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint69->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint70 = new HAnimJoint();
HAnimJoint70->setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint70->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint70->setCenter(new float[3]{0.0987,0.0034,0.0086});
HAnimJoint70->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint70->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint71 = new HAnimJoint();
HAnimJoint71->setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint71->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint71->setCenter(new float[3]{0.1002,0.0013,0.0178});
HAnimJoint71->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint71->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint70->addChild(HAnimJoint71);

HAnimJoint69->addChild(HAnimJoint70);

HAnimJoint68->addChild(HAnimJoint69);

HAnimJoint67->addChild(HAnimJoint68);

HAnimJoint57->addChild(HAnimJoint67);

HAnimJoint56->addChild(HAnimJoint57);

HAnimJoint* HAnimJoint72 = new HAnimJoint();
HAnimJoint72->setName(CString("l_calcaneocuboid"));
HAnimJoint72->setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint72->setCenter(new float[3]{0.0889,0.0494,-0.1278});
HAnimJoint72->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint72->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint73 = new HAnimJoint();
HAnimJoint73->setName(CString("l_transversetarsal"));
HAnimJoint73->setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint73->setCenter(new float[3]{0.1105,0.0267,-0.0998});
HAnimJoint73->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint73->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint74 = new HAnimJoint();
HAnimJoint74->setName(CString("l_tarsometatarsal_4"));
HAnimJoint74->setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint74->setCenter(new float[3]{0.1063,0.016,-0.0634});
HAnimJoint74->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint74->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint75 = new HAnimJoint();
HAnimJoint75->setName(CString("l_metatarsophalangeal_4"));
HAnimJoint75->setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint75->setCenter(new float[3]{0.1097,0.0058,-0.0107});
HAnimJoint75->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint75->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint76 = new HAnimJoint();
HAnimJoint76->setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint76->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint76->setCenter(new float[3]{0.114,0.0037,0.0044});
HAnimJoint76->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint76->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint77 = new HAnimJoint();
HAnimJoint77->setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint77->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint77->setCenter(new float[3]{0.1155,0.0008,0.0118});
HAnimJoint77->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint77->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint76->addChild(HAnimJoint77);

HAnimJoint75->addChild(HAnimJoint76);

HAnimJoint74->addChild(HAnimJoint75);

HAnimJoint73->addChild(HAnimJoint74);

HAnimJoint* HAnimJoint78 = new HAnimJoint();
HAnimJoint78->setName(CString("l_tarsometatarsal_5"));
HAnimJoint78->setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint78->setCenter(new float[3]{0.1206,0.0124,-0.0671});
HAnimJoint78->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint78->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint79 = new HAnimJoint();
HAnimJoint79->setName(CString("l_metatarsophalangeal_5"));
HAnimJoint79->setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint79->setCenter(new float[3]{0.1239,0.0051,-0.0153});
HAnimJoint79->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint79->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint80 = new HAnimJoint();
HAnimJoint80->setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint80->setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint80->setCenter(new float[3]{0.1262,0.0023,-0.0077});
HAnimJoint80->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint80->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint81 = new HAnimJoint();
HAnimJoint81->setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint81->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint81->setCenter(new float[3]{0.1271,0,0});
HAnimJoint81->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint81->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint80->addChild(HAnimJoint81);

HAnimJoint79->addChild(HAnimJoint80);

HAnimJoint78->addChild(HAnimJoint79);

HAnimJoint73->addChild(HAnimJoint78);

HAnimJoint72->addChild(HAnimJoint73);

HAnimJoint56->addChild(HAnimJoint72);

HAnimJoint55->addChild(HAnimJoint56);

HAnimJoint54->addChild(HAnimJoint55);

HAnimJoint53->addChild(HAnimJoint54);

HAnimJoint* HAnimJoint82 = new HAnimJoint();
HAnimJoint82->setName(CString("r_hip"));
HAnimJoint82->setDEF(CString("hanim_r_hip"));
HAnimJoint82->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint82->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint82->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint83 = new HAnimJoint();
HAnimJoint83->setName(CString("r_knee"));
HAnimJoint83->setDEF(CString("hanim_r_knee"));
HAnimJoint83->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint83->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint83->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint84 = new HAnimJoint();
HAnimJoint84->setName(CString("r_talocrural"));
HAnimJoint84->setDEF(CString("hanim_r_talocrural"));
HAnimJoint84->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint84->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint84->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint85 = new HAnimJoint();
HAnimJoint85->setName(CString("r_talocalcaneonavicular"));
HAnimJoint85->setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint85->setCenter(new float[3]{-0.0781,0.0283,-0.097});
HAnimJoint85->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint85->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint86 = new HAnimJoint();
HAnimJoint86->setName(CString("r_cuneonavicular_1"));
HAnimJoint86->setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint86->setCenter(new float[3]{-0.0672,0.0235,-0.0835});
HAnimJoint86->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint86->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint87 = new HAnimJoint();
HAnimJoint87->setName(CString("r_tarsometatarsal_1"));
HAnimJoint87->setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint87->setCenter(new float[3]{-0.0644,0.0147,-0.0577});
HAnimJoint87->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint87->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint88 = new HAnimJoint();
HAnimJoint88->setName(CString("r_metatarsophalangeal_1"));
HAnimJoint88->setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint88->setCenter(new float[3]{-0.0619,0.0059,-0.0083});
HAnimJoint88->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint88->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint89 = new HAnimJoint();
HAnimJoint89->setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint89->setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint88->addChild(HAnimJoint89);

HAnimJoint87->addChild(HAnimJoint88);

HAnimJoint86->addChild(HAnimJoint87);

HAnimJoint85->addChild(HAnimJoint86);

HAnimJoint* HAnimJoint90 = new HAnimJoint();
HAnimJoint90->setName(CString("r_cuneonavicular_2"));
HAnimJoint90->setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint90->setCenter(new float[3]{-0.0812,0.025,-0.0805});
HAnimJoint90->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint90->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint91 = new HAnimJoint();
HAnimJoint91->setName(CString("r_tarsometatarsal_2"));
HAnimJoint91->setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint91->setCenter(new float[3]{-0.08,0.0175,-0.0608});
HAnimJoint91->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint91->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint92 = new HAnimJoint();
HAnimJoint92->setName(CString("r_metatarsophalangeal_2"));
HAnimJoint92->setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint92->setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimJoint92->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint92->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint93 = new HAnimJoint();
HAnimJoint93->setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint93->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint93->setCenter(new float[3]{-0.0841,0.0041,0.0121});
HAnimJoint93->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint93->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint94 = new HAnimJoint();
HAnimJoint94->setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint94->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint94->setCenter(new float[3]{-0.0841,0.0013,0.0216});
HAnimJoint94->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint94->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint93->addChild(HAnimJoint94);

HAnimJoint92->addChild(HAnimJoint93);

HAnimJoint91->addChild(HAnimJoint92);

HAnimJoint90->addChild(HAnimJoint91);

HAnimJoint85->addChild(HAnimJoint90);

HAnimJoint* HAnimJoint95 = new HAnimJoint();
HAnimJoint95->setName(CString("r_cuneonavicular_3"));
HAnimJoint95->setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint95->setCenter(new float[3]{-0.0928,0.0248,-0.0821});
HAnimJoint95->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint95->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint96 = new HAnimJoint();
HAnimJoint96->setName(CString("r_tarsometatarsal_3"));
HAnimJoint96->setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimJoint96->setCenter(new float[3]{-0.0944,0.0175,-0.0625});
HAnimJoint96->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint96->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint97 = new HAnimJoint();
HAnimJoint97->setName(CString("r_metatarsophalangeal_3"));
HAnimJoint97->setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint97->setCenter(new float[3]{-0.0963,0.0065,-0.0065});
HAnimJoint97->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint97->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint98 = new HAnimJoint();
HAnimJoint98->setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint98->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint98->setCenter(new float[3]{-0.0987,0.0034,0.0086});
HAnimJoint98->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint98->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint99 = new HAnimJoint();
HAnimJoint99->setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint99->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint99->setCenter(new float[3]{-0.1002,0.0013,0.0178});
HAnimJoint99->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint99->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint98->addChild(HAnimJoint99);

HAnimJoint97->addChild(HAnimJoint98);

HAnimJoint96->addChild(HAnimJoint97);

HAnimJoint95->addChild(HAnimJoint96);

HAnimJoint85->addChild(HAnimJoint95);

HAnimJoint84->addChild(HAnimJoint85);

HAnimJoint* HAnimJoint100 = new HAnimJoint();
HAnimJoint100->setName(CString("r_calcaneocuboid"));
HAnimJoint100->setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint100->setCenter(new float[3]{-0.0889,0.0494,-0.1278});
HAnimJoint100->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint100->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint101 = new HAnimJoint();
HAnimJoint101->setName(CString("r_transversetarsal"));
HAnimJoint101->setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint101->setCenter(new float[3]{-0.1105,0.0267,-0.0998});
HAnimJoint101->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint101->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint102 = new HAnimJoint();
HAnimJoint102->setName(CString("r_tarsometatarsal_4"));
HAnimJoint102->setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint102->setCenter(new float[3]{-0.1063,0.016,-0.0634});
HAnimJoint102->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint102->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint103 = new HAnimJoint();
HAnimJoint103->setName(CString("r_metatarsophalangeal_4"));
HAnimJoint103->setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint103->setCenter(new float[3]{-0.1097,0.0058,-0.0107});
HAnimJoint103->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint103->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint104 = new HAnimJoint();
HAnimJoint104->setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint104->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint104->setCenter(new float[3]{-0.114,0.0037,0.0044});
HAnimJoint104->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint104->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint105 = new HAnimJoint();
HAnimJoint105->setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint105->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint105->setCenter(new float[3]{-0.1155,0.0008,0.0118});
HAnimJoint105->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint105->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint104->addChild(HAnimJoint105);

HAnimJoint103->addChild(HAnimJoint104);

HAnimJoint102->addChild(HAnimJoint103);

HAnimJoint101->addChild(HAnimJoint102);

HAnimJoint* HAnimJoint106 = new HAnimJoint();
HAnimJoint106->setName(CString("r_tarsometatarsal_5"));
HAnimJoint106->setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint106->setCenter(new float[3]{-0.1206,0.0124,-0.0671});
HAnimJoint106->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint106->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint107 = new HAnimJoint();
HAnimJoint107->setName(CString("r_metatarsophalangeal_5"));
HAnimJoint107->setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint107->setCenter(new float[3]{-0.1239,0.0051,-0.0153});
HAnimJoint107->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint107->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint108 = new HAnimJoint();
HAnimJoint108->setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint108->setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint108->setCenter(new float[3]{-0.1262,0.0023,-0.0077});
HAnimJoint108->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint108->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint109 = new HAnimJoint();
HAnimJoint109->setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint109->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimJoint109->setCenter(new float[3]{-0.1271,0,0});
HAnimJoint109->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint109->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint108->addChild(HAnimJoint109);

HAnimJoint107->addChild(HAnimJoint108);

HAnimJoint106->addChild(HAnimJoint107);

HAnimJoint101->addChild(HAnimJoint106);

HAnimJoint100->addChild(HAnimJoint101);

HAnimJoint84->addChild(HAnimJoint100);

HAnimJoint83->addChild(HAnimJoint84);

HAnimJoint82->addChild(HAnimJoint83);

HAnimJoint53->addChild(HAnimJoint82);

HAnimJoint52->addChild(HAnimJoint53);

HAnimJoint* HAnimJoint110 = new HAnimJoint();
HAnimJoint110->setName(CString("vl5"));
HAnimJoint110->setDEF(CString("hanim_vl5"));
HAnimJoint110->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint110->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint110->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint111 = new HAnimJoint();
HAnimJoint111->setName(CString("vl4"));
HAnimJoint111->setDEF(CString("hanim_vl4"));
HAnimJoint111->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint111->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint111->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint112 = new HAnimJoint();
HAnimJoint112->setName(CString("vl3"));
HAnimJoint112->setDEF(CString("hanim_vl3"));
HAnimJoint112->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint112->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint112->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint113 = new HAnimJoint();
HAnimJoint113->setName(CString("vl2"));
HAnimJoint113->setDEF(CString("hanim_vl2"));
HAnimJoint113->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint113->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint113->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint114 = new HAnimJoint();
HAnimJoint114->setName(CString("vl1"));
HAnimJoint114->setDEF(CString("hanim_vl1"));
HAnimJoint114->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint114->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint114->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint115 = new HAnimJoint();
HAnimJoint115->setName(CString("vt12"));
HAnimJoint115->setDEF(CString("hanim_vt12"));
HAnimJoint115->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint115->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint115->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint116 = new HAnimJoint();
HAnimJoint116->setName(CString("vt11"));
HAnimJoint116->setDEF(CString("hanim_vt11"));
HAnimJoint116->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint116->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint116->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint117 = new HAnimJoint();
HAnimJoint117->setName(CString("vt10"));
HAnimJoint117->setDEF(CString("hanim_vt10"));
HAnimJoint117->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint117->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint117->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint118 = new HAnimJoint();
HAnimJoint118->setName(CString("vt9"));
HAnimJoint118->setDEF(CString("hanim_vt9"));
HAnimJoint118->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint118->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint118->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint119 = new HAnimJoint();
HAnimJoint119->setName(CString("vt8"));
HAnimJoint119->setDEF(CString("hanim_vt8"));
HAnimJoint119->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint119->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint119->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint120 = new HAnimJoint();
HAnimJoint120->setName(CString("vt7"));
HAnimJoint120->setDEF(CString("hanim_vt7"));
HAnimJoint120->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint120->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint120->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint121 = new HAnimJoint();
HAnimJoint121->setName(CString("vt6"));
HAnimJoint121->setDEF(CString("hanim_vt6"));
HAnimJoint121->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint121->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint121->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint122 = new HAnimJoint();
HAnimJoint122->setName(CString("vt5"));
HAnimJoint122->setDEF(CString("hanim_vt5"));
HAnimJoint122->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint122->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint122->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint123 = new HAnimJoint();
HAnimJoint123->setName(CString("vt4"));
HAnimJoint123->setDEF(CString("hanim_vt4"));
HAnimJoint123->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint123->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint123->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint124 = new HAnimJoint();
HAnimJoint124->setName(CString("vt3"));
HAnimJoint124->setDEF(CString("hanim_vt3"));
HAnimJoint124->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint124->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint124->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint125 = new HAnimJoint();
HAnimJoint125->setName(CString("vt2"));
HAnimJoint125->setDEF(CString("hanim_vt2"));
HAnimJoint125->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint125->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint125->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint126 = new HAnimJoint();
HAnimJoint126->setName(CString("vt1"));
HAnimJoint126->setDEF(CString("hanim_vt1"));
HAnimJoint126->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint126->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint126->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint127 = new HAnimJoint();
HAnimJoint127->setName(CString("vc7"));
HAnimJoint127->setDEF(CString("hanim_vc7"));
HAnimJoint127->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint127->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint127->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint128 = new HAnimJoint();
HAnimJoint128->setName(CString("vc6"));
HAnimJoint128->setDEF(CString("hanim_vc6"));
HAnimJoint128->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint128->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint128->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint129 = new HAnimJoint();
HAnimJoint129->setName(CString("vc5"));
HAnimJoint129->setDEF(CString("hanim_vc5"));
HAnimJoint129->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint129->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint129->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint130 = new HAnimJoint();
HAnimJoint130->setName(CString("vc4"));
HAnimJoint130->setDEF(CString("hanim_vc4"));
HAnimJoint130->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint130->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint130->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint131 = new HAnimJoint();
HAnimJoint131->setName(CString("vc3"));
HAnimJoint131->setDEF(CString("hanim_vc3"));
HAnimJoint131->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint131->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint131->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint132 = new HAnimJoint();
HAnimJoint132->setName(CString("vc2"));
HAnimJoint132->setDEF(CString("hanim_vc2"));
HAnimJoint132->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint132->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint132->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint133 = new HAnimJoint();
HAnimJoint133->setName(CString("vc1"));
HAnimJoint133->setDEF(CString("hanim_vc1"));
HAnimJoint133->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint133->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint133->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint134 = new HAnimJoint();
HAnimJoint134->setName(CString("skullbase"));
HAnimJoint134->setDEF(CString("hanim_skullbase"));
HAnimJoint134->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint134->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint134->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint135 = new HAnimJoint();
HAnimJoint135->setName(CString("l_eyelid_joint"));
HAnimJoint135->setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint135->setCenter(new float[3]{0.0503,1.4157,-0.0689});
HAnimJoint135->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint135->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint134->addChild(HAnimJoint135);

HAnimJoint* HAnimJoint136 = new HAnimJoint();
HAnimJoint136->setName(CString("r_eyelid_joint"));
HAnimJoint136->setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint136->setCenter(new float[3]{-0.0507,1.4157,-0.0689});
HAnimJoint136->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint136->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint134->addChild(HAnimJoint136);

HAnimJoint* HAnimJoint137 = new HAnimJoint();
HAnimJoint137->setName(CString("l_eyeball_joint"));
HAnimJoint137->setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint137->setCenter(new float[3]{0.0479,1.3963,-0.0188});
HAnimJoint137->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint137->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint134->addChild(HAnimJoint137);

HAnimJoint* HAnimJoint138 = new HAnimJoint();
HAnimJoint138->setName(CString("r_eyeball_joint"));
HAnimJoint138->setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint138->setCenter(new float[3]{-0.0483,1.3963,-0.0188});
HAnimJoint138->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint138->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint134->addChild(HAnimJoint138);

HAnimJoint* HAnimJoint139 = new HAnimJoint();
HAnimJoint139->setName(CString("l_eyebrow_joint"));
HAnimJoint139->setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint139->setCenter(new float[3]{0.0216,1.4053,0.0051});
HAnimJoint139->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint139->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint134->addChild(HAnimJoint139);

HAnimJoint* HAnimJoint140 = new HAnimJoint();
HAnimJoint140->setName(CString("r_eyebrow_joint"));
HAnimJoint140->setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint140->setCenter(new float[3]{-0.0219,1.4053,0.0051});
HAnimJoint140->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint140->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint134->addChild(HAnimJoint140);

HAnimJoint* HAnimJoint141 = new HAnimJoint();
HAnimJoint141->setName(CString("temporomandibular"));
HAnimJoint141->setDEF(CString("hanim_temporomandibular"));
HAnimJoint141->setCenter(new float[3]{-0.0002,1.3043,-0.0865});
HAnimJoint141->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint141->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint134->addChild(HAnimJoint141);

HAnimJoint133->addChild(HAnimJoint134);

HAnimJoint132->addChild(HAnimJoint133);

HAnimJoint131->addChild(HAnimJoint132);

HAnimJoint130->addChild(HAnimJoint131);

HAnimJoint129->addChild(HAnimJoint130);

HAnimJoint128->addChild(HAnimJoint129);

HAnimJoint127->addChild(HAnimJoint128);

HAnimJoint126->addChild(HAnimJoint127);

HAnimJoint* HAnimJoint142 = new HAnimJoint();
HAnimJoint142->setName(CString("l_sternoclavicular"));
HAnimJoint142->setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint142->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint142->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint142->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint143 = new HAnimJoint();
HAnimJoint143->setName(CString("l_acromioclavicular"));
HAnimJoint143->setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint143->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint143->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint143->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint144 = new HAnimJoint();
HAnimJoint144->setName(CString("l_shoulder"));
HAnimJoint144->setDEF(CString("hanim_l_shoulder"));
HAnimJoint144->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint144->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint144->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint145 = new HAnimJoint();
HAnimJoint145->setName(CString("l_elbow"));
HAnimJoint145->setDEF(CString("hanim_l_elbow"));
HAnimJoint145->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint145->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint145->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint146 = new HAnimJoint();
HAnimJoint146->setName(CString("l_radiocarpal"));
HAnimJoint146->setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint146->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint146->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint146->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint147 = new HAnimJoint();
HAnimJoint147->setName(CString("l_midcarpal_1"));
HAnimJoint147->setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint147->setCenter(new float[3]{0.1811,0.6975,-0.0826});
HAnimJoint147->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint147->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint148 = new HAnimJoint();
HAnimJoint148->setName(CString("l_carpometacarpal_1"));
HAnimJoint148->setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint148->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint148->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint148->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint149 = new HAnimJoint();
HAnimJoint149->setName(CString("l_metacarpophalangeal_1"));
HAnimJoint149->setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint149->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint149->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint149->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint150 = new HAnimJoint();
HAnimJoint150->setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint150->setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint150->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint150->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint150->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint149->addChild(HAnimJoint150);

HAnimJoint148->addChild(HAnimJoint149);

HAnimJoint147->addChild(HAnimJoint148);

HAnimJoint146->addChild(HAnimJoint147);

HAnimJoint* HAnimJoint151 = new HAnimJoint();
HAnimJoint151->setName(CString("l_midcarpal_2"));
HAnimJoint151->setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint151->setCenter(new float[3]{0.1811,0.6984,-0.0935});
HAnimJoint151->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint151->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint152 = new HAnimJoint();
HAnimJoint152->setName(CString("l_carpometacarpal_2"));
HAnimJoint152->setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint152->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint152->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint152->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint153 = new HAnimJoint();
HAnimJoint153->setName(CString("l_metacarpophalangeal_2"));
HAnimJoint153->setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint153->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint153->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint153->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint154 = new HAnimJoint();
HAnimJoint154->setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint154->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint154->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint154->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint154->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint155 = new HAnimJoint();
HAnimJoint155->setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint155->setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint155->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint155->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint155->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint154->addChild(HAnimJoint155);

HAnimJoint153->addChild(HAnimJoint154);

HAnimJoint152->addChild(HAnimJoint153);

HAnimJoint151->addChild(HAnimJoint152);

HAnimJoint146->addChild(HAnimJoint151);

HAnimJoint* HAnimJoint156 = new HAnimJoint();
HAnimJoint156->setName(CString("l_midcarpal_3"));
HAnimJoint156->setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint156->setCenter(new float[3]{0.1809,0.7,-0.1067});
HAnimJoint156->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint156->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint157 = new HAnimJoint();
HAnimJoint157->setName(CString("l_carpometacarpal_3"));
HAnimJoint157->setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint157->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint157->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint157->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint158 = new HAnimJoint();
HAnimJoint158->setName(CString("l_metacarpophalangeal_3"));
HAnimJoint158->setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint158->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint158->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint158->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint159 = new HAnimJoint();
HAnimJoint159->setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint159->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint159->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint159->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint159->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint160 = new HAnimJoint();
HAnimJoint160->setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint160->setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint160->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint160->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint160->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint159->addChild(HAnimJoint160);

HAnimJoint158->addChild(HAnimJoint159);

HAnimJoint157->addChild(HAnimJoint158);

HAnimJoint156->addChild(HAnimJoint157);

HAnimJoint146->addChild(HAnimJoint156);

HAnimJoint* HAnimJoint161 = new HAnimJoint();
HAnimJoint161->setName(CString("l_midcarpal_4_5"));
HAnimJoint161->setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint161->setCenter(new float[3]{0.1809,0.6973,-0.1276});
HAnimJoint161->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint161->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint162 = new HAnimJoint();
HAnimJoint162->setName(CString("l_carpometacarpal_4"));
HAnimJoint162->setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint162->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint162->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint162->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint163 = new HAnimJoint();
HAnimJoint163->setName(CString("l_metacarpophalangeal_4"));
HAnimJoint163->setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint163->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint163->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint163->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint164 = new HAnimJoint();
HAnimJoint164->setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint164->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint164->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint164->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint164->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint165 = new HAnimJoint();
HAnimJoint165->setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint165->setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint165->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint165->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint165->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint164->addChild(HAnimJoint165);

HAnimJoint163->addChild(HAnimJoint164);

HAnimJoint162->addChild(HAnimJoint163);

HAnimJoint161->addChild(HAnimJoint162);

HAnimJoint* HAnimJoint166 = new HAnimJoint();
HAnimJoint166->setName(CString("l_carpometacarpal_5"));
HAnimJoint166->setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint166->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint166->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint166->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint167 = new HAnimJoint();
HAnimJoint167->setName(CString("l_metacarpophalangeal_5"));
HAnimJoint167->setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint167->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint167->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint167->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint168 = new HAnimJoint();
HAnimJoint168->setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint168->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint168->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint168->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint168->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint169 = new HAnimJoint();
HAnimJoint169->setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint169->setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint169->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint169->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint169->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint168->addChild(HAnimJoint169);

HAnimJoint167->addChild(HAnimJoint168);

HAnimJoint166->addChild(HAnimJoint167);

HAnimJoint161->addChild(HAnimJoint166);

HAnimJoint146->addChild(HAnimJoint161);

HAnimJoint145->addChild(HAnimJoint146);

HAnimJoint144->addChild(HAnimJoint145);

HAnimJoint143->addChild(HAnimJoint144);

HAnimJoint142->addChild(HAnimJoint143);

HAnimJoint126->addChild(HAnimJoint142);

HAnimJoint* HAnimJoint170 = new HAnimJoint();
HAnimJoint170->setName(CString("r_sternoclavicular"));
HAnimJoint170->setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint170->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint170->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint170->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint171 = new HAnimJoint();
HAnimJoint171->setName(CString("r_acromioclavicular"));
HAnimJoint171->setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint171->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint171->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint171->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint172 = new HAnimJoint();
HAnimJoint172->setName(CString("r_shoulder"));
HAnimJoint172->setDEF(CString("hanim_r_shoulder"));
HAnimJoint172->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint172->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint172->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint173 = new HAnimJoint();
HAnimJoint173->setName(CString("r_elbow"));
HAnimJoint173->setDEF(CString("hanim_r_elbow"));
HAnimJoint173->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint173->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint173->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint174 = new HAnimJoint();
HAnimJoint174->setName(CString("r_radiocarpal"));
HAnimJoint174->setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint174->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint174->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint174->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint175 = new HAnimJoint();
HAnimJoint175->setName(CString("r_midcarpal_1"));
HAnimJoint175->setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint175->setCenter(new float[3]{-0.1811,0.6975,-0.0826});
HAnimJoint175->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint175->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint176 = new HAnimJoint();
HAnimJoint176->setName(CString("r_carpometacarpal_1"));
HAnimJoint176->setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint176->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint176->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint176->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint177 = new HAnimJoint();
HAnimJoint177->setName(CString("r_metacarpophalangeal_1"));
HAnimJoint177->setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint177->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint177->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint177->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint178 = new HAnimJoint();
HAnimJoint178->setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint178->setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint178->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint178->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint178->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint177->addChild(HAnimJoint178);

HAnimJoint176->addChild(HAnimJoint177);

HAnimJoint175->addChild(HAnimJoint176);

HAnimJoint174->addChild(HAnimJoint175);

HAnimJoint* HAnimJoint179 = new HAnimJoint();
HAnimJoint179->setName(CString("r_midcarpal_2"));
HAnimJoint179->setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint179->setCenter(new float[3]{-0.1811,0.6984,-0.0935});
HAnimJoint179->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint179->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint180 = new HAnimJoint();
HAnimJoint180->setName(CString("r_carpometacarpal_2"));
HAnimJoint180->setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint180->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint180->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint180->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint181 = new HAnimJoint();
HAnimJoint181->setName(CString("r_metacarpophalangeal_2"));
HAnimJoint181->setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint181->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint181->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint181->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint182 = new HAnimJoint();
HAnimJoint182->setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint182->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint182->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint182->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint182->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint183 = new HAnimJoint();
HAnimJoint183->setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint183->setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint183->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint183->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint183->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint182->addChild(HAnimJoint183);

HAnimJoint181->addChild(HAnimJoint182);

HAnimJoint180->addChild(HAnimJoint181);

HAnimJoint179->addChild(HAnimJoint180);

HAnimJoint174->addChild(HAnimJoint179);

HAnimJoint* HAnimJoint184 = new HAnimJoint();
HAnimJoint184->setName(CString("r_midcarpal_3"));
HAnimJoint184->setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint184->setCenter(new float[3]{-0.1809,0.7,-0.1067});
HAnimJoint184->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint184->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint185 = new HAnimJoint();
HAnimJoint185->setName(CString("r_carpometacarpal_3"));
HAnimJoint185->setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint185->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint185->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint185->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint186 = new HAnimJoint();
HAnimJoint186->setName(CString("r_metacarpophalangeal_3"));
HAnimJoint186->setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint186->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint186->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint186->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint187 = new HAnimJoint();
HAnimJoint187->setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint187->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint187->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint187->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint187->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint188 = new HAnimJoint();
HAnimJoint188->setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint188->setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint188->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint188->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint188->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint187->addChild(HAnimJoint188);

HAnimJoint186->addChild(HAnimJoint187);

HAnimJoint185->addChild(HAnimJoint186);

HAnimJoint184->addChild(HAnimJoint185);

HAnimJoint174->addChild(HAnimJoint184);

HAnimJoint* HAnimJoint189 = new HAnimJoint();
HAnimJoint189->setName(CString("r_midcarpal_4_5"));
HAnimJoint189->setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint189->setCenter(new float[3]{-0.1809,0.6973,-0.1276});
HAnimJoint189->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint189->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint190 = new HAnimJoint();
HAnimJoint190->setName(CString("r_carpometacarpal_4"));
HAnimJoint190->setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint190->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint190->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint190->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint191 = new HAnimJoint();
HAnimJoint191->setName(CString("r_metacarpophalangeal_4"));
HAnimJoint191->setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint191->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint191->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint191->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint192 = new HAnimJoint();
HAnimJoint192->setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint192->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint192->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint192->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint192->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint193 = new HAnimJoint();
HAnimJoint193->setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint193->setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint193->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint193->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint193->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint192->addChild(HAnimJoint193);

HAnimJoint191->addChild(HAnimJoint192);

HAnimJoint190->addChild(HAnimJoint191);

HAnimJoint189->addChild(HAnimJoint190);

HAnimJoint* HAnimJoint194 = new HAnimJoint();
HAnimJoint194->setName(CString("r_carpometacarpal_5"));
HAnimJoint194->setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint194->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint194->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint194->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint195 = new HAnimJoint();
HAnimJoint195->setName(CString("r_metacarpophalangeal_5"));
HAnimJoint195->setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint195->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint195->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint195->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint196 = new HAnimJoint();
HAnimJoint196->setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint196->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint196->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint196->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint196->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint* HAnimJoint197 = new HAnimJoint();
HAnimJoint197->setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint197->setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint197->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint197->setSkinCoordIndex(new int32_t[1]{0}, 1);
HAnimJoint197->setSkinCoordWeight(new float[1]{0}, 1);
HAnimJoint196->addChild(HAnimJoint197);

HAnimJoint195->addChild(HAnimJoint196);

HAnimJoint194->addChild(HAnimJoint195);

HAnimJoint189->addChild(HAnimJoint194);

HAnimJoint174->addChild(HAnimJoint189);

HAnimJoint173->addChild(HAnimJoint174);

HAnimJoint172->addChild(HAnimJoint173);

HAnimJoint171->addChild(HAnimJoint172);

HAnimJoint170->addChild(HAnimJoint171);

HAnimJoint126->addChild(HAnimJoint170);

HAnimJoint125->addChild(HAnimJoint126);

HAnimJoint124->addChild(HAnimJoint125);

HAnimJoint123->addChild(HAnimJoint124);

HAnimJoint122->addChild(HAnimJoint123);

HAnimJoint121->addChild(HAnimJoint122);

HAnimJoint120->addChild(HAnimJoint121);

HAnimJoint119->addChild(HAnimJoint120);

HAnimJoint118->addChild(HAnimJoint119);

HAnimJoint117->addChild(HAnimJoint118);

HAnimJoint116->addChild(HAnimJoint117);

HAnimJoint115->addChild(HAnimJoint116);

HAnimJoint114->addChild(HAnimJoint115);

HAnimJoint113->addChild(HAnimJoint114);

HAnimJoint112->addChild(HAnimJoint113);

HAnimJoint111->addChild(HAnimJoint112);

HAnimJoint110->addChild(HAnimJoint111);

HAnimJoint52->addChild(HAnimJoint110);

HAnimHumanoid43->setSkeleton(HAnimJoint52);

HAnimJoint* HAnimJoint198 = new HAnimJoint();
HAnimJoint198->setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid43->addChild(HAnimJoint198);

HAnimJoint* HAnimJoint199 = new HAnimJoint();
HAnimJoint199->setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid43->addChild(HAnimJoint199);

HAnimJoint* HAnimJoint200 = new HAnimJoint();
HAnimJoint200->setUSE(CString("hanim_l_hip"));
HAnimHumanoid43->addChild(HAnimJoint200);

HAnimJoint* HAnimJoint201 = new HAnimJoint();
HAnimJoint201->setUSE(CString("hanim_l_knee"));
HAnimHumanoid43->addChild(HAnimJoint201);

HAnimJoint* HAnimJoint202 = new HAnimJoint();
HAnimJoint202->setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid43->addChild(HAnimJoint202);

HAnimJoint* HAnimJoint203 = new HAnimJoint();
HAnimJoint203->setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid43->addChild(HAnimJoint203);

HAnimJoint* HAnimJoint204 = new HAnimJoint();
HAnimJoint204->setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid43->addChild(HAnimJoint204);

HAnimJoint* HAnimJoint205 = new HAnimJoint();
HAnimJoint205->setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid43->addChild(HAnimJoint205);

HAnimJoint* HAnimJoint206 = new HAnimJoint();
HAnimJoint206->setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint206);

HAnimJoint* HAnimJoint207 = new HAnimJoint();
HAnimJoint207->setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint207);

HAnimJoint* HAnimJoint208 = new HAnimJoint();
HAnimJoint208->setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid43->addChild(HAnimJoint208);

HAnimJoint* HAnimJoint209 = new HAnimJoint();
HAnimJoint209->setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid43->addChild(HAnimJoint209);

HAnimJoint* HAnimJoint210 = new HAnimJoint();
HAnimJoint210->setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint210);

HAnimJoint* HAnimJoint211 = new HAnimJoint();
HAnimJoint211->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint211);

HAnimJoint* HAnimJoint212 = new HAnimJoint();
HAnimJoint212->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint212);

HAnimJoint* HAnimJoint213 = new HAnimJoint();
HAnimJoint213->setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid43->addChild(HAnimJoint213);

HAnimJoint* HAnimJoint214 = new HAnimJoint();
HAnimJoint214->setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid43->addChild(HAnimJoint214);

HAnimJoint* HAnimJoint215 = new HAnimJoint();
HAnimJoint215->setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint215);

HAnimJoint* HAnimJoint216 = new HAnimJoint();
HAnimJoint216->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint216);

HAnimJoint* HAnimJoint217 = new HAnimJoint();
HAnimJoint217->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint217);

HAnimJoint* HAnimJoint218 = new HAnimJoint();
HAnimJoint218->setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid43->addChild(HAnimJoint218);

HAnimJoint* HAnimJoint219 = new HAnimJoint();
HAnimJoint219->setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid43->addChild(HAnimJoint219);

HAnimJoint* HAnimJoint220 = new HAnimJoint();
HAnimJoint220->setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid43->addChild(HAnimJoint220);

HAnimJoint* HAnimJoint221 = new HAnimJoint();
HAnimJoint221->setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint221);

HAnimJoint* HAnimJoint222 = new HAnimJoint();
HAnimJoint222->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint222);

HAnimJoint* HAnimJoint223 = new HAnimJoint();
HAnimJoint223->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint223);

HAnimJoint* HAnimJoint224 = new HAnimJoint();
HAnimJoint224->setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid43->addChild(HAnimJoint224);

HAnimJoint* HAnimJoint225 = new HAnimJoint();
HAnimJoint225->setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint225);

HAnimJoint* HAnimJoint226 = new HAnimJoint();
HAnimJoint226->setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint226);

HAnimJoint* HAnimJoint227 = new HAnimJoint();
HAnimJoint227->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint227);

HAnimJoint* HAnimJoint228 = new HAnimJoint();
HAnimJoint228->setUSE(CString("hanim_r_hip"));
HAnimHumanoid43->addChild(HAnimJoint228);

HAnimJoint* HAnimJoint229 = new HAnimJoint();
HAnimJoint229->setUSE(CString("hanim_r_knee"));
HAnimHumanoid43->addChild(HAnimJoint229);

HAnimJoint* HAnimJoint230 = new HAnimJoint();
HAnimJoint230->setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid43->addChild(HAnimJoint230);

HAnimJoint* HAnimJoint231 = new HAnimJoint();
HAnimJoint231->setUSE(CString("hanim_r_talocalcaneonavicular"));
HAnimHumanoid43->addChild(HAnimJoint231);

HAnimJoint* HAnimJoint232 = new HAnimJoint();
HAnimJoint232->setUSE(CString("hanim_r_cuneonavicular_1"));
HAnimHumanoid43->addChild(HAnimJoint232);

HAnimJoint* HAnimJoint233 = new HAnimJoint();
HAnimJoint233->setUSE(CString("hanim_r_tarsometatarsal_1"));
HAnimHumanoid43->addChild(HAnimJoint233);

HAnimJoint* HAnimJoint234 = new HAnimJoint();
HAnimJoint234->setUSE(CString("hanim_r_metatarsophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint234);

HAnimJoint* HAnimJoint235 = new HAnimJoint();
HAnimJoint235->setUSE(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint235);

HAnimJoint* HAnimJoint236 = new HAnimJoint();
HAnimJoint236->setUSE(CString("hanim_r_cuneonavicular_2"));
HAnimHumanoid43->addChild(HAnimJoint236);

HAnimJoint* HAnimJoint237 = new HAnimJoint();
HAnimJoint237->setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid43->addChild(HAnimJoint237);

HAnimJoint* HAnimJoint238 = new HAnimJoint();
HAnimJoint238->setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint238);

HAnimJoint* HAnimJoint239 = new HAnimJoint();
HAnimJoint239->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint239);

HAnimJoint* HAnimJoint240 = new HAnimJoint();
HAnimJoint240->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint240);

HAnimJoint* HAnimJoint241 = new HAnimJoint();
HAnimJoint241->setUSE(CString("hanim_r_cuneonavicular_3"));
HAnimHumanoid43->addChild(HAnimJoint241);

HAnimJoint* HAnimJoint242 = new HAnimJoint();
HAnimJoint242->setUSE(CString("hanim_r_tarsometatarsal_3"));
HAnimHumanoid43->addChild(HAnimJoint242);

HAnimJoint* HAnimJoint243 = new HAnimJoint();
HAnimJoint243->setUSE(CString("hanim_r_metatarsophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint243);

HAnimJoint* HAnimJoint244 = new HAnimJoint();
HAnimJoint244->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint244);

HAnimJoint* HAnimJoint245 = new HAnimJoint();
HAnimJoint245->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint245);

HAnimJoint* HAnimJoint246 = new HAnimJoint();
HAnimJoint246->setUSE(CString("hanim_r_calcaneocuboid"));
HAnimHumanoid43->addChild(HAnimJoint246);

HAnimJoint* HAnimJoint247 = new HAnimJoint();
HAnimJoint247->setUSE(CString("hanim_r_transversetarsal"));
HAnimHumanoid43->addChild(HAnimJoint247);

HAnimJoint* HAnimJoint248 = new HAnimJoint();
HAnimJoint248->setUSE(CString("hanim_r_tarsometatarsal_4"));
HAnimHumanoid43->addChild(HAnimJoint248);

HAnimJoint* HAnimJoint249 = new HAnimJoint();
HAnimJoint249->setUSE(CString("hanim_r_metatarsophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint249);

HAnimJoint* HAnimJoint250 = new HAnimJoint();
HAnimJoint250->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint250);

HAnimJoint* HAnimJoint251 = new HAnimJoint();
HAnimJoint251->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint251);

HAnimJoint* HAnimJoint252 = new HAnimJoint();
HAnimJoint252->setUSE(CString("hanim_r_tarsometatarsal_5"));
HAnimHumanoid43->addChild(HAnimJoint252);

HAnimJoint* HAnimJoint253 = new HAnimJoint();
HAnimJoint253->setUSE(CString("hanim_r_metatarsophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint253);

HAnimJoint* HAnimJoint254 = new HAnimJoint();
HAnimJoint254->setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint254);

HAnimJoint* HAnimJoint255 = new HAnimJoint();
HAnimJoint255->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint255);

HAnimJoint* HAnimJoint256 = new HAnimJoint();
HAnimJoint256->setUSE(CString("hanim_vl5"));
HAnimHumanoid43->addChild(HAnimJoint256);

HAnimJoint* HAnimJoint257 = new HAnimJoint();
HAnimJoint257->setUSE(CString("hanim_vl4"));
HAnimHumanoid43->addChild(HAnimJoint257);

HAnimJoint* HAnimJoint258 = new HAnimJoint();
HAnimJoint258->setUSE(CString("hanim_vl3"));
HAnimHumanoid43->addChild(HAnimJoint258);

HAnimJoint* HAnimJoint259 = new HAnimJoint();
HAnimJoint259->setUSE(CString("hanim_vl2"));
HAnimHumanoid43->addChild(HAnimJoint259);

HAnimJoint* HAnimJoint260 = new HAnimJoint();
HAnimJoint260->setUSE(CString("hanim_vl1"));
HAnimHumanoid43->addChild(HAnimJoint260);

HAnimJoint* HAnimJoint261 = new HAnimJoint();
HAnimJoint261->setUSE(CString("hanim_vt12"));
HAnimHumanoid43->addChild(HAnimJoint261);

HAnimJoint* HAnimJoint262 = new HAnimJoint();
HAnimJoint262->setUSE(CString("hanim_vt11"));
HAnimHumanoid43->addChild(HAnimJoint262);

HAnimJoint* HAnimJoint263 = new HAnimJoint();
HAnimJoint263->setUSE(CString("hanim_vt10"));
HAnimHumanoid43->addChild(HAnimJoint263);

HAnimJoint* HAnimJoint264 = new HAnimJoint();
HAnimJoint264->setUSE(CString("hanim_vt9"));
HAnimHumanoid43->addChild(HAnimJoint264);

HAnimJoint* HAnimJoint265 = new HAnimJoint();
HAnimJoint265->setUSE(CString("hanim_vt8"));
HAnimHumanoid43->addChild(HAnimJoint265);

HAnimJoint* HAnimJoint266 = new HAnimJoint();
HAnimJoint266->setUSE(CString("hanim_vt7"));
HAnimHumanoid43->addChild(HAnimJoint266);

HAnimJoint* HAnimJoint267 = new HAnimJoint();
HAnimJoint267->setUSE(CString("hanim_vt6"));
HAnimHumanoid43->addChild(HAnimJoint267);

HAnimJoint* HAnimJoint268 = new HAnimJoint();
HAnimJoint268->setUSE(CString("hanim_vt5"));
HAnimHumanoid43->addChild(HAnimJoint268);

HAnimJoint* HAnimJoint269 = new HAnimJoint();
HAnimJoint269->setUSE(CString("hanim_vt4"));
HAnimHumanoid43->addChild(HAnimJoint269);

HAnimJoint* HAnimJoint270 = new HAnimJoint();
HAnimJoint270->setUSE(CString("hanim_vt3"));
HAnimHumanoid43->addChild(HAnimJoint270);

HAnimJoint* HAnimJoint271 = new HAnimJoint();
HAnimJoint271->setUSE(CString("hanim_vt2"));
HAnimHumanoid43->addChild(HAnimJoint271);

HAnimJoint* HAnimJoint272 = new HAnimJoint();
HAnimJoint272->setUSE(CString("hanim_vt1"));
HAnimHumanoid43->addChild(HAnimJoint272);

HAnimJoint* HAnimJoint273 = new HAnimJoint();
HAnimJoint273->setUSE(CString("hanim_vc7"));
HAnimHumanoid43->addChild(HAnimJoint273);

HAnimJoint* HAnimJoint274 = new HAnimJoint();
HAnimJoint274->setUSE(CString("hanim_vc6"));
HAnimHumanoid43->addChild(HAnimJoint274);

HAnimJoint* HAnimJoint275 = new HAnimJoint();
HAnimJoint275->setUSE(CString("hanim_vc5"));
HAnimHumanoid43->addChild(HAnimJoint275);

HAnimJoint* HAnimJoint276 = new HAnimJoint();
HAnimJoint276->setUSE(CString("hanim_vc4"));
HAnimHumanoid43->addChild(HAnimJoint276);

HAnimJoint* HAnimJoint277 = new HAnimJoint();
HAnimJoint277->setUSE(CString("hanim_vc3"));
HAnimHumanoid43->addChild(HAnimJoint277);

HAnimJoint* HAnimJoint278 = new HAnimJoint();
HAnimJoint278->setUSE(CString("hanim_vc2"));
HAnimHumanoid43->addChild(HAnimJoint278);

HAnimJoint* HAnimJoint279 = new HAnimJoint();
HAnimJoint279->setUSE(CString("hanim_vc1"));
HAnimHumanoid43->addChild(HAnimJoint279);

HAnimJoint* HAnimJoint280 = new HAnimJoint();
HAnimJoint280->setUSE(CString("hanim_skullbase"));
HAnimHumanoid43->addChild(HAnimJoint280);

HAnimJoint* HAnimJoint281 = new HAnimJoint();
HAnimJoint281->setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid43->addChild(HAnimJoint281);

HAnimJoint* HAnimJoint282 = new HAnimJoint();
HAnimJoint282->setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid43->addChild(HAnimJoint282);

HAnimJoint* HAnimJoint283 = new HAnimJoint();
HAnimJoint283->setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid43->addChild(HAnimJoint283);

HAnimJoint* HAnimJoint284 = new HAnimJoint();
HAnimJoint284->setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid43->addChild(HAnimJoint284);

HAnimJoint* HAnimJoint285 = new HAnimJoint();
HAnimJoint285->setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid43->addChild(HAnimJoint285);

HAnimJoint* HAnimJoint286 = new HAnimJoint();
HAnimJoint286->setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid43->addChild(HAnimJoint286);

HAnimJoint* HAnimJoint287 = new HAnimJoint();
HAnimJoint287->setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid43->addChild(HAnimJoint287);

HAnimJoint* HAnimJoint288 = new HAnimJoint();
HAnimJoint288->setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid43->addChild(HAnimJoint288);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid43->addChild(HAnimJoint289);

HAnimJoint* HAnimJoint290 = new HAnimJoint();
HAnimJoint290->setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid43->addChild(HAnimJoint290);

HAnimJoint* HAnimJoint291 = new HAnimJoint();
HAnimJoint291->setUSE(CString("hanim_l_elbow"));
HAnimHumanoid43->addChild(HAnimJoint291);

HAnimJoint* HAnimJoint292 = new HAnimJoint();
HAnimJoint292->setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid43->addChild(HAnimJoint292);

HAnimJoint* HAnimJoint293 = new HAnimJoint();
HAnimJoint293->setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint293);

HAnimJoint* HAnimJoint294 = new HAnimJoint();
HAnimJoint294->setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint294);

HAnimJoint* HAnimJoint295 = new HAnimJoint();
HAnimJoint295->setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint295);

HAnimJoint* HAnimJoint296 = new HAnimJoint();
HAnimJoint296->setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint296);

HAnimJoint* HAnimJoint297 = new HAnimJoint();
HAnimJoint297->setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint297);

HAnimJoint* HAnimJoint298 = new HAnimJoint();
HAnimJoint298->setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint298);

HAnimJoint* HAnimJoint299 = new HAnimJoint();
HAnimJoint299->setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint299);

HAnimJoint* HAnimJoint300 = new HAnimJoint();
HAnimJoint300->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint300);

HAnimJoint* HAnimJoint301 = new HAnimJoint();
HAnimJoint301->setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint301);

HAnimJoint* HAnimJoint302 = new HAnimJoint();
HAnimJoint302->setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint302);

HAnimJoint* HAnimJoint303 = new HAnimJoint();
HAnimJoint303->setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint303);

HAnimJoint* HAnimJoint304 = new HAnimJoint();
HAnimJoint304->setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint304);

HAnimJoint* HAnimJoint305 = new HAnimJoint();
HAnimJoint305->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint305);

HAnimJoint* HAnimJoint306 = new HAnimJoint();
HAnimJoint306->setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint306);

HAnimJoint* HAnimJoint307 = new HAnimJoint();
HAnimJoint307->setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid43->addChild(HAnimJoint307);

HAnimJoint* HAnimJoint308 = new HAnimJoint();
HAnimJoint308->setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid43->addChild(HAnimJoint308);

HAnimJoint* HAnimJoint309 = new HAnimJoint();
HAnimJoint309->setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint309);

HAnimJoint* HAnimJoint310 = new HAnimJoint();
HAnimJoint310->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint310);

HAnimJoint* HAnimJoint311 = new HAnimJoint();
HAnimJoint311->setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint311);

HAnimJoint* HAnimJoint312 = new HAnimJoint();
HAnimJoint312->setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid43->addChild(HAnimJoint312);

HAnimJoint* HAnimJoint313 = new HAnimJoint();
HAnimJoint313->setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint313);

HAnimJoint* HAnimJoint314 = new HAnimJoint();
HAnimJoint314->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint314);

HAnimJoint* HAnimJoint315 = new HAnimJoint();
HAnimJoint315->setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint315);

HAnimJoint* HAnimJoint316 = new HAnimJoint();
HAnimJoint316->setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid43->addChild(HAnimJoint316);

HAnimJoint* HAnimJoint317 = new HAnimJoint();
HAnimJoint317->setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid43->addChild(HAnimJoint317);

HAnimJoint* HAnimJoint318 = new HAnimJoint();
HAnimJoint318->setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid43->addChild(HAnimJoint318);

HAnimJoint* HAnimJoint319 = new HAnimJoint();
HAnimJoint319->setUSE(CString("hanim_r_elbow"));
HAnimHumanoid43->addChild(HAnimJoint319);

HAnimJoint* HAnimJoint320 = new HAnimJoint();
HAnimJoint320->setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid43->addChild(HAnimJoint320);

HAnimJoint* HAnimJoint321 = new HAnimJoint();
HAnimJoint321->setUSE(CString("hanim_r_midcarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint321);

HAnimJoint* HAnimJoint322 = new HAnimJoint();
HAnimJoint322->setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint322);

HAnimJoint* HAnimJoint323 = new HAnimJoint();
HAnimJoint323->setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint323);

HAnimJoint* HAnimJoint324 = new HAnimJoint();
HAnimJoint324->setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint324);

HAnimJoint* HAnimJoint325 = new HAnimJoint();
HAnimJoint325->setUSE(CString("hanim_r_midcarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint325);

HAnimJoint* HAnimJoint326 = new HAnimJoint();
HAnimJoint326->setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint326);

HAnimJoint* HAnimJoint327 = new HAnimJoint();
HAnimJoint327->setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint327);

HAnimJoint* HAnimJoint328 = new HAnimJoint();
HAnimJoint328->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint328);

HAnimJoint* HAnimJoint329 = new HAnimJoint();
HAnimJoint329->setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint329);

HAnimJoint* HAnimJoint330 = new HAnimJoint();
HAnimJoint330->setUSE(CString("hanim_r_midcarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint330);

HAnimJoint* HAnimJoint331 = new HAnimJoint();
HAnimJoint331->setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint331);

HAnimJoint* HAnimJoint332 = new HAnimJoint();
HAnimJoint332->setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint332);

HAnimJoint* HAnimJoint333 = new HAnimJoint();
HAnimJoint333->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint333);

HAnimJoint* HAnimJoint334 = new HAnimJoint();
HAnimJoint334->setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint334);

HAnimJoint* HAnimJoint335 = new HAnimJoint();
HAnimJoint335->setUSE(CString("hanim_r_midcarpal_4_5"));
HAnimHumanoid43->addChild(HAnimJoint335);

HAnimJoint* HAnimJoint336 = new HAnimJoint();
HAnimJoint336->setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid43->addChild(HAnimJoint336);

HAnimJoint* HAnimJoint337 = new HAnimJoint();
HAnimJoint337->setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint337);

HAnimJoint* HAnimJoint338 = new HAnimJoint();
HAnimJoint338->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint338);

HAnimJoint* HAnimJoint339 = new HAnimJoint();
HAnimJoint339->setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint339);

HAnimJoint* HAnimJoint340 = new HAnimJoint();
HAnimJoint340->setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid43->addChild(HAnimJoint340);

HAnimJoint* HAnimJoint341 = new HAnimJoint();
HAnimJoint341->setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint341);

HAnimJoint* HAnimJoint342 = new HAnimJoint();
HAnimJoint342->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint342);

HAnimJoint* HAnimJoint343 = new HAnimJoint();
HAnimJoint343->setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint343);

Scene11->addChild(HAnimHumanoid43);

X3D0->setScene(Scene11);

}
