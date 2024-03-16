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
meta3->setContent(CString("Humanoid2.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("identifier"));
meta4->setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d"));
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

HAnimSite* HAnimSite61 = new HAnimSite();
HAnimSite61->setName(CString("buttocks_standing_wall_contact_point"));
HAnimSite61->setDEF(CString("hanim_buttocks_standing_wall_contact_point"));
TouchSensor* TouchSensor62 = new TouchSensor();
TouchSensor62->setDescription(CString("HAnimSite buttocks_standing_wall_contact_point"));
HAnimSite61->addChild(TouchSensor62);

Shape* Shape63 = new Shape();
Shape63->setUSE(CString("HAnimSiteShape"));
HAnimSite61->addChild(Shape63);

HAnimSegment53->addChild(HAnimSite61);

HAnimSite* HAnimSite64 = new HAnimSite();
HAnimSite64->setName(CString("crotch"));
HAnimSite64->setDEF(CString("hanim_crotch"));
HAnimSite64->setTranslation(new float[3]{0.0034,0.8266,0.0257});
TouchSensor* TouchSensor65 = new TouchSensor();
TouchSensor65->setDescription(CString("HAnimSite crotch"));
HAnimSite64->addChild(TouchSensor65);

Shape* Shape66 = new Shape();
Shape66->setUSE(CString("HAnimSiteShape"));
HAnimSite64->addChild(Shape66);

HAnimSegment53->addChild(HAnimSite64);

HAnimSite* HAnimSite67 = new HAnimSite();
HAnimSite67->setName(CString("l_asis"));
HAnimSite67->setDEF(CString("hanim_l_asis"));
HAnimSite67->setTranslation(new float[3]{0.0925,0.9983,0.1052});
TouchSensor* TouchSensor68 = new TouchSensor();
TouchSensor68->setDescription(CString("HAnimSite l_asis"));
HAnimSite67->addChild(TouchSensor68);

Shape* Shape69 = new Shape();
Shape69->setUSE(CString("HAnimSiteShape"));
HAnimSite67->addChild(Shape69);

HAnimSegment53->addChild(HAnimSite67);

HAnimSite* HAnimSite70 = new HAnimSite();
HAnimSite70->setName(CString("l_iliocristale"));
HAnimSite70->setDEF(CString("hanim_l_iliocristale"));
HAnimSite70->setTranslation(new float[3]{0.1612,1.0537,0.0008});
TouchSensor* TouchSensor71 = new TouchSensor();
TouchSensor71->setDescription(CString("HAnimSite l_iliocristale"));
HAnimSite70->addChild(TouchSensor71);

Shape* Shape72 = new Shape();
Shape72->setUSE(CString("HAnimSiteShape"));
HAnimSite70->addChild(Shape72);

HAnimSegment53->addChild(HAnimSite70);

HAnimSite* HAnimSite73 = new HAnimSite();
HAnimSite73->setName(CString("l_psis"));
HAnimSite73->setDEF(CString("hanim_l_psis"));
HAnimSite73->setTranslation(new float[3]{0.0774,1.019,-0.1151});
TouchSensor* TouchSensor74 = new TouchSensor();
TouchSensor74->setDescription(CString("HAnimSite l_psis"));
HAnimSite73->addChild(TouchSensor74);

Shape* Shape75 = new Shape();
Shape75->setUSE(CString("HAnimSiteShape"));
HAnimSite73->addChild(Shape75);

HAnimSegment53->addChild(HAnimSite73);

HAnimSite* HAnimSite76 = new HAnimSite();
HAnimSite76->setName(CString("l_trochanterion"));
HAnimSite76->setDEF(CString("hanim_l_trochanterion"));
HAnimSite76->setTranslation(new float[3]{0.1677,0.8336,0.0303});
TouchSensor* TouchSensor77 = new TouchSensor();
TouchSensor77->setDescription(CString("HAnimSite l_trochanterion"));
HAnimSite76->addChild(TouchSensor77);

Shape* Shape78 = new Shape();
Shape78->setUSE(CString("HAnimSiteShape"));
HAnimSite76->addChild(Shape78);

HAnimSegment53->addChild(HAnimSite76);

HAnimSite* HAnimSite79 = new HAnimSite();
HAnimSite79->setName(CString("r_asis"));
HAnimSite79->setDEF(CString("hanim_r_asis"));
HAnimSite79->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
TouchSensor* TouchSensor80 = new TouchSensor();
TouchSensor80->setDescription(CString("HAnimSite r_asis"));
HAnimSite79->addChild(TouchSensor80);

Shape* Shape81 = new Shape();
Shape81->setUSE(CString("HAnimSiteShape"));
HAnimSite79->addChild(Shape81);

HAnimSegment53->addChild(HAnimSite79);

HAnimSite* HAnimSite82 = new HAnimSite();
HAnimSite82->setName(CString("r_iliocristale"));
HAnimSite82->setDEF(CString("hanim_r_iliocristale"));
HAnimSite82->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
TouchSensor* TouchSensor83 = new TouchSensor();
TouchSensor83->setDescription(CString("HAnimSite r_iliocristale"));
HAnimSite82->addChild(TouchSensor83);

Shape* Shape84 = new Shape();
Shape84->setUSE(CString("HAnimSiteShape"));
HAnimSite82->addChild(Shape84);

HAnimSegment53->addChild(HAnimSite82);

HAnimSite* HAnimSite85 = new HAnimSite();
HAnimSite85->setName(CString("r_psis"));
HAnimSite85->setDEF(CString("hanim_r_psis"));
HAnimSite85->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
TouchSensor* TouchSensor86 = new TouchSensor();
TouchSensor86->setDescription(CString("HAnimSite r_psis"));
HAnimSite85->addChild(TouchSensor86);

Shape* Shape87 = new Shape();
Shape87->setUSE(CString("HAnimSiteShape"));
HAnimSite85->addChild(Shape87);

HAnimSegment53->addChild(HAnimSite85);

HAnimSite* HAnimSite88 = new HAnimSite();
HAnimSite88->setName(CString("r_trochanterion"));
HAnimSite88->setDEF(CString("hanim_r_trochanterion"));
HAnimSite88->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
TouchSensor* TouchSensor89 = new TouchSensor();
TouchSensor89->setDescription(CString("HAnimSite r_trochanterion"));
HAnimSite88->addChild(TouchSensor89);

Shape* Shape90 = new Shape();
Shape90->setUSE(CString("HAnimSiteShape"));
HAnimSite88->addChild(Shape90);

HAnimSegment53->addChild(HAnimSite88);

Shape* Shape91 = new Shape();
LineSet* LineSet92 = new LineSet();
LineSet92->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate93 = new Coordinate();
Coordinate93->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet92->addChild(Coordinate93);

//from humanoid_root to vl5 vertices 2
ColorRGBA* ColorRGBA94 = new ColorRGBA();
ColorRGBA94->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet92->addChild(ColorRGBA94);

Shape91->setGeometry(LineSet92);

HAnimSegment53->addChild(Shape91);

HAnimSite* HAnimSite95 = new HAnimSite();
HAnimSite95->setName(CString("navel"));
HAnimSite95->setDEF(CString("hanim_navel"));
HAnimSite95->setTranslation(new float[3]{0.0069,1.0966,0.1017});
TouchSensor* TouchSensor96 = new TouchSensor();
TouchSensor96->setDescription(CString("HAnimSite navel"));
HAnimSite95->addChild(TouchSensor96);

Shape* Shape97 = new Shape();
Shape97->setUSE(CString("HAnimSiteShape"));
HAnimSite95->addChild(Shape97);

HAnimSegment53->addChild(HAnimSite95);

HAnimSite* HAnimSite98 = new HAnimSite();
HAnimSite98->setName(CString("waist_preferred_anterior"));
HAnimSite98->setDEF(CString("hanim_waist_preferred_anterior"));
TouchSensor* TouchSensor99 = new TouchSensor();
TouchSensor99->setDescription(CString("HAnimSite waist_preferred_anterior"));
HAnimSite98->addChild(TouchSensor99);

Shape* Shape100 = new Shape();
Shape100->setUSE(CString("HAnimSiteShape"));
HAnimSite98->addChild(Shape100);

HAnimSegment53->addChild(HAnimSite98);

HAnimSite* HAnimSite101 = new HAnimSite();
HAnimSite101->setName(CString("waist_preferred_posterior"));
HAnimSite101->setDEF(CString("hanim_waist_preferred_posterior"));
HAnimSite101->setTranslation(new float[3]{0.29,1.0915,-0.1091});
TouchSensor* TouchSensor102 = new TouchSensor();
TouchSensor102->setDescription(CString("HAnimSite waist_preferred_posterior"));
HAnimSite101->addChild(TouchSensor102);

Shape* Shape103 = new Shape();
Shape103->setUSE(CString("HAnimSiteShape"));
HAnimSite101->addChild(Shape103);

HAnimSegment53->addChild(HAnimSite101);

HAnimJoint52->addChild(HAnimSegment53);

HAnimJoint* HAnimJoint104 = new HAnimJoint();
HAnimJoint104->setName(CString("sacroiliac"));
HAnimJoint104->setDEF(CString("hanim_sacroiliac"));
HAnimJoint104->setCenter(new float[3]{0,0.9149,0.0016});
HAnimSegment* HAnimSegment105 = new HAnimSegment();
HAnimSegment105->setName(CString("pelvis"));
HAnimSegment105->setDEF(CString("hanim_pelvis"));
Transform* Transform106 = new Transform();
Transform106->setTranslation(new float[3]{0,0.9149,0.0016});
Transform* Transform107 = new Transform();
//Empty Transform
Shape* Shape108 = new Shape();
Shape108->setUSE(CString("HAnimJointShape"));
Transform107->addChild(Shape108);

Transform106->addChild(Transform107);

HAnimSegment105->addChild(Transform106);

Shape* Shape109 = new Shape();
LineSet* LineSet110 = new LineSet();
LineSet110->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate111 = new Coordinate();
Coordinate111->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet110->addChild(Coordinate111);

//from sacroiliac to l_hip vertices 2
ColorRGBA* ColorRGBA112 = new ColorRGBA();
ColorRGBA112->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet110->addChild(ColorRGBA112);

Shape109->setGeometry(LineSet110);

HAnimSegment105->addChild(Shape109);

HAnimSite* HAnimSite113 = new HAnimSite();
HAnimSite113->setName(CString("l_femoral_lateral_epicondyles"));
HAnimSite113->setDEF(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimSite113->setTranslation(new float[3]{0.1598,0.4967,0.0297});
TouchSensor* TouchSensor114 = new TouchSensor();
TouchSensor114->setDescription(CString("HAnimSite l_femoral_lateral_epicondyles"));
HAnimSite113->addChild(TouchSensor114);

Shape* Shape115 = new Shape();
Shape115->setUSE(CString("HAnimSiteShape"));
HAnimSite113->addChild(Shape115);

HAnimSegment105->addChild(HAnimSite113);

HAnimSite* HAnimSite116 = new HAnimSite();
HAnimSite116->setName(CString("l_femoral_medial_epicondyles"));
HAnimSite116->setDEF(CString("hanim_l_femoral_medial_epicondyles"));
HAnimSite116->setTranslation(new float[3]{0.0398,0.4946,0.0303});
TouchSensor* TouchSensor117 = new TouchSensor();
TouchSensor117->setDescription(CString("HAnimSite l_femoral_medial_epicondyles"));
HAnimSite116->addChild(TouchSensor117);

Shape* Shape118 = new Shape();
Shape118->setUSE(CString("HAnimSiteShape"));
HAnimSite116->addChild(Shape118);

HAnimSegment105->addChild(HAnimSite116);

HAnimSite* HAnimSite119 = new HAnimSite();
HAnimSite119->setName(CString("l_knee_crease"));
HAnimSite119->setDEF(CString("hanim_l_knee_crease"));
HAnimSite119->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
TouchSensor* TouchSensor120 = new TouchSensor();
TouchSensor120->setDescription(CString("HAnimSite l_knee_crease"));
HAnimSite119->addChild(TouchSensor120);

Shape* Shape121 = new Shape();
Shape121->setUSE(CString("HAnimSiteShape"));
HAnimSite119->addChild(Shape121);

HAnimSegment105->addChild(HAnimSite119);

HAnimSite* HAnimSite122 = new HAnimSite();
HAnimSite122->setName(CString("l_suprapatella"));
HAnimSite122->setDEF(CString("hanim_l_suprapatella"));
TouchSensor* TouchSensor123 = new TouchSensor();
TouchSensor123->setDescription(CString("HAnimSite l_suprapatella"));
HAnimSite122->addChild(TouchSensor123);

Shape* Shape124 = new Shape();
Shape124->setUSE(CString("HAnimSiteShape"));
HAnimSite122->addChild(Shape124);

HAnimSegment105->addChild(HAnimSite122);

Shape* Shape125 = new Shape();
LineSet* LineSet126 = new LineSet();
LineSet126->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate127 = new Coordinate();
Coordinate127->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029}, 6);
LineSet126->addChild(Coordinate127);

//from sacroiliac to r_hip vertices 2
ColorRGBA* ColorRGBA128 = new ColorRGBA();
ColorRGBA128->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet126->addChild(ColorRGBA128);

Shape125->setGeometry(LineSet126);

HAnimSegment105->addChild(Shape125);

HAnimSite* HAnimSite129 = new HAnimSite();
HAnimSite129->setName(CString("r_femoral_lateral_epicondyles"));
HAnimSite129->setDEF(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimSite129->setTranslation(new float[3]{-0.1421,0.4992,0.031});
TouchSensor* TouchSensor130 = new TouchSensor();
TouchSensor130->setDescription(CString("HAnimSite r_femoral_lateral_epicondyles"));
HAnimSite129->addChild(TouchSensor130);

Shape* Shape131 = new Shape();
Shape131->setUSE(CString("HAnimSiteShape"));
HAnimSite129->addChild(Shape131);

HAnimSegment105->addChild(HAnimSite129);

HAnimSite* HAnimSite132 = new HAnimSite();
HAnimSite132->setName(CString("r_femoral_medial_epicondyles"));
HAnimSite132->setDEF(CString("hanim_r_femoral_medial_epicondyles"));
HAnimSite132->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
TouchSensor* TouchSensor133 = new TouchSensor();
TouchSensor133->setDescription(CString("HAnimSite r_femoral_medial_epicondyles"));
HAnimSite132->addChild(TouchSensor133);

Shape* Shape134 = new Shape();
Shape134->setUSE(CString("HAnimSiteShape"));
HAnimSite132->addChild(Shape134);

HAnimSegment105->addChild(HAnimSite132);

HAnimSite* HAnimSite135 = new HAnimSite();
HAnimSite135->setName(CString("r_knee_crease"));
HAnimSite135->setDEF(CString("hanim_r_knee_crease"));
HAnimSite135->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
TouchSensor* TouchSensor136 = new TouchSensor();
TouchSensor136->setDescription(CString("HAnimSite r_knee_crease"));
HAnimSite135->addChild(TouchSensor136);

Shape* Shape137 = new Shape();
Shape137->setUSE(CString("HAnimSiteShape"));
HAnimSite135->addChild(Shape137);

HAnimSegment105->addChild(HAnimSite135);

HAnimSite* HAnimSite138 = new HAnimSite();
HAnimSite138->setName(CString("r_suprapatella"));
HAnimSite138->setDEF(CString("hanim_r_suprapatella"));
TouchSensor* TouchSensor139 = new TouchSensor();
TouchSensor139->setDescription(CString("HAnimSite r_suprapatella"));
HAnimSite138->addChild(TouchSensor139);

Shape* Shape140 = new Shape();
Shape140->setUSE(CString("HAnimSiteShape"));
HAnimSite138->addChild(Shape140);

HAnimSegment105->addChild(HAnimSite138);

HAnimJoint104->addChild(HAnimSegment105);

HAnimJoint* HAnimJoint141 = new HAnimJoint();
HAnimJoint141->setName(CString("l_hip"));
HAnimJoint141->setDEF(CString("hanim_l_hip"));
HAnimJoint141->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimSegment* HAnimSegment142 = new HAnimSegment();
HAnimSegment142->setName(CString("l_thigh"));
HAnimSegment142->setDEF(CString("hanim_l_thigh"));
Transform* Transform143 = new Transform();
Transform143->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
Transform* Transform144 = new Transform();
//Empty Transform
Shape* Shape145 = new Shape();
Shape145->setUSE(CString("HAnimJointShape"));
Transform144->addChild(Shape145);

Transform143->addChild(Transform144);

HAnimSegment142->addChild(Transform143);

Shape* Shape146 = new Shape();
LineSet* LineSet147 = new LineSet();
LineSet147->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate148 = new Coordinate();
Coordinate148->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
LineSet147->addChild(Coordinate148);

//from l_hip to l_knee vertices 2
ColorRGBA* ColorRGBA149 = new ColorRGBA();
ColorRGBA149->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet147->addChild(ColorRGBA149);

Shape146->setGeometry(LineSet147);

HAnimSegment142->addChild(Shape146);

HAnimSite* HAnimSite150 = new HAnimSite();
HAnimSite150->setName(CString("l_lateral_malleolus"));
HAnimSite150->setDEF(CString("hanim_l_lateral_malleolus"));
HAnimSite150->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
TouchSensor* TouchSensor151 = new TouchSensor();
TouchSensor151->setDescription(CString("HAnimSite l_lateral_malleolus"));
HAnimSite150->addChild(TouchSensor151);

Shape* Shape152 = new Shape();
Shape152->setUSE(CString("HAnimSiteShape"));
HAnimSite150->addChild(Shape152);

HAnimSegment142->addChild(HAnimSite150);

HAnimSite* HAnimSite153 = new HAnimSite();
HAnimSite153->setName(CString("l_medial_malleolus"));
HAnimSite153->setDEF(CString("hanim_l_medial_malleolus"));
HAnimSite153->setTranslation(new float[3]{0.089,0.0716,-0.0881});
TouchSensor* TouchSensor154 = new TouchSensor();
TouchSensor154->setDescription(CString("HAnimSite l_medial_malleolus"));
HAnimSite153->addChild(TouchSensor154);

Shape* Shape155 = new Shape();
Shape155->setUSE(CString("HAnimSiteShape"));
HAnimSite153->addChild(Shape155);

HAnimSegment142->addChild(HAnimSite153);

HAnimSite* HAnimSite156 = new HAnimSite();
HAnimSite156->setName(CString("l_tibiale"));
HAnimSite156->setDEF(CString("hanim_l_tibiale"));
TouchSensor* TouchSensor157 = new TouchSensor();
TouchSensor157->setDescription(CString("HAnimSite l_tibiale"));
HAnimSite156->addChild(TouchSensor157);

Shape* Shape158 = new Shape();
Shape158->setUSE(CString("HAnimSiteShape"));
HAnimSite156->addChild(Shape158);

HAnimSegment142->addChild(HAnimSite156);

HAnimJoint141->addChild(HAnimSegment142);

HAnimJoint* HAnimJoint159 = new HAnimJoint();
HAnimJoint159->setName(CString("l_knee"));
HAnimJoint159->setDEF(CString("hanim_l_knee"));
HAnimJoint159->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimSegment* HAnimSegment160 = new HAnimSegment();
HAnimSegment160->setName(CString("l_calf"));
HAnimSegment160->setDEF(CString("hanim_l_calf"));
Transform* Transform161 = new Transform();
Transform161->setTranslation(new float[3]{0.104,0.4867,0.0308});
Transform* Transform162 = new Transform();
//Empty Transform
Shape* Shape163 = new Shape();
Shape163->setUSE(CString("HAnimJointShape"));
Transform162->addChild(Shape163);

Transform161->addChild(Transform162);

HAnimSegment160->addChild(Transform161);

Shape* Shape164 = new Shape();
LineSet* LineSet165 = new LineSet();
LineSet165->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate166 = new Coordinate();
Coordinate166->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet165->addChild(Coordinate166);

//from l_knee to l_talocrural vertices 2
ColorRGBA* ColorRGBA167 = new ColorRGBA();
ColorRGBA167->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet165->addChild(ColorRGBA167);

Shape164->setGeometry(LineSet165);

HAnimSegment160->addChild(Shape164);

HAnimSite* HAnimSite168 = new HAnimSite();
HAnimSite168->setName(CString("l_calcaneus_posterior"));
HAnimSite168->setDEF(CString("hanim_l_calcaneus_posterior"));
HAnimSite168->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
TouchSensor* TouchSensor169 = new TouchSensor();
TouchSensor169->setDescription(CString("HAnimSite l_calcaneus_posterior"));
HAnimSite168->addChild(TouchSensor169);

Shape* Shape170 = new Shape();
Shape170->setUSE(CString("HAnimSiteShape"));
HAnimSite168->addChild(Shape170);

HAnimSegment160->addChild(HAnimSite168);

HAnimSite* HAnimSite171 = new HAnimSite();
HAnimSite171->setName(CString("l_sphyrion"));
HAnimSite171->setDEF(CString("hanim_l_sphyrion"));
HAnimSite171->setTranslation(new float[3]{0.089,0.0575,-0.0943});
TouchSensor* TouchSensor172 = new TouchSensor();
TouchSensor172->setDescription(CString("HAnimSite l_sphyrion"));
HAnimSite171->addChild(TouchSensor172);

Shape* Shape173 = new Shape();
Shape173->setUSE(CString("HAnimSiteShape"));
HAnimSite171->addChild(Shape173);

HAnimSegment160->addChild(HAnimSite171);

HAnimJoint159->addChild(HAnimSegment160);

HAnimJoint* HAnimJoint174 = new HAnimJoint();
HAnimJoint174->setName(CString("l_talocrural"));
HAnimJoint174->setDEF(CString("hanim_l_talocrural"));
HAnimJoint174->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimSegment* HAnimSegment175 = new HAnimSegment();
HAnimSegment175->setName(CString("l_talus"));
HAnimSegment175->setDEF(CString("hanim_l_talus"));
Transform* Transform176 = new Transform();
Transform176->setScale(new float[3]{0.15,0.15,0.15});
Transform176->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform176->setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
Transform* Transform177 = new Transform();
//Empty Transform left foot
Shape* Shape178 = new Shape();
Shape178->setUSE(CString("HAnimJointShape"));
Transform177->addChild(Shape178);

Transform176->addChild(Transform177);

HAnimSegment175->addChild(Transform176);

Shape* Shape179 = new Shape();
LineSet* LineSet180 = new LineSet();
LineSet180->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate181 = new Coordinate();
Coordinate181->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608}, 6);
LineSet180->addChild(Coordinate181);

//from l_talocrural to l_tarsometatarsal_2 vertices 2
ColorRGBA* ColorRGBA182 = new ColorRGBA();
ColorRGBA182->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet180->addChild(ColorRGBA182);

Shape179->setGeometry(LineSet180);

HAnimSegment175->addChild(Shape179);

HAnimJoint174->addChild(HAnimSegment175);

HAnimJoint* HAnimJoint183 = new HAnimJoint();
HAnimJoint183->setName(CString("l_tarsometatarsal_2"));
HAnimJoint183->setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint183->setCenter(new float[3]{0.08,0.0175,-0.0608});
HAnimSegment* HAnimSegment184 = new HAnimSegment();
HAnimSegment184->setName(CString("l_metatarsal_2"));
HAnimSegment184->setDEF(CString("hanim_l_metatarsal_2"));
Transform* Transform185 = new Transform();
Transform185->setTranslation(new float[3]{0.08,0.0175,-0.0608});
Transform* Transform186 = new Transform();
//Empty Transform
Shape* Shape187 = new Shape();
Shape187->setUSE(CString("HAnimJointShape"));
Transform186->addChild(Shape187);

Transform185->addChild(Transform186);

HAnimSegment184->addChild(Transform185);

Shape* Shape188 = new Shape();
LineSet* LineSet189 = new LineSet();
LineSet189->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate190 = new Coordinate();
Coordinate190->setPoint(new float[6]{0.08,0.0175,-0.0608,0.0824,0.0064,-0.004}, 6);
LineSet189->addChild(Coordinate190);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA* ColorRGBA191 = new ColorRGBA();
ColorRGBA191->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet189->addChild(ColorRGBA191);

Shape188->setGeometry(LineSet189);

HAnimSegment184->addChild(Shape188);

HAnimSite* HAnimSite192 = new HAnimSite();
HAnimSite192->setName(CString("l_metatarsal_phalanx_1"));
HAnimSite192->setDEF(CString("hanim_l_metatarsal_phalanx_1"));
TouchSensor* TouchSensor193 = new TouchSensor();
TouchSensor193->setDescription(CString("HAnimSite l_metatarsal_phalanx_1"));
HAnimSite192->addChild(TouchSensor193);

Shape* Shape194 = new Shape();
Shape194->setUSE(CString("HAnimSiteShape"));
HAnimSite192->addChild(Shape194);

HAnimSegment184->addChild(HAnimSite192);

HAnimSite* HAnimSite195 = new HAnimSite();
HAnimSite195->setName(CString("l_metatarsal_phalanx_5"));
HAnimSite195->setDEF(CString("hanim_l_metatarsal_phalanx_5"));
TouchSensor* TouchSensor196 = new TouchSensor();
TouchSensor196->setDescription(CString("HAnimSite l_metatarsal_phalanx_5"));
HAnimSite195->addChild(TouchSensor196);

Shape* Shape197 = new Shape();
Shape197->setUSE(CString("HAnimSiteShape"));
HAnimSite195->addChild(Shape197);

HAnimSegment184->addChild(HAnimSite195);

HAnimSite* HAnimSite198 = new HAnimSite();
HAnimSite198->setName(CString("l_tarsal_distal_phalanx_1_tip"));
HAnimSite198->setDEF(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
TouchSensor* TouchSensor199 = new TouchSensor();
TouchSensor199->setDescription(CString("HAnimSite l_tarsal_distal_phalanx_1_tip"));
HAnimSite198->addChild(TouchSensor199);

Shape* Shape200 = new Shape();
Shape200->setUSE(CString("HAnimSiteShape"));
HAnimSite198->addChild(Shape200);

HAnimSegment184->addChild(HAnimSite198);

HAnimSite* HAnimSite201 = new HAnimSite();
HAnimSite201->setName(CString("l_tarsal_distal_phalanx_2_tip"));
HAnimSite201->setDEF(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimSite201->setTranslation(new float[3]{0.1195,0.0079,0.1433});
TouchSensor* TouchSensor202 = new TouchSensor();
TouchSensor202->setDescription(CString("HAnimSite l_tarsal_distal_phalanx_2_tip"));
HAnimSite201->addChild(TouchSensor202);

Shape* Shape203 = new Shape();
Shape203->setUSE(CString("HAnimSiteShape"));
HAnimSite201->addChild(Shape203);

HAnimSegment184->addChild(HAnimSite201);

HAnimSite* HAnimSite204 = new HAnimSite();
HAnimSite204->setName(CString("l_tarsal_distal_phalanx_3_tip"));
HAnimSite204->setDEF(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
TouchSensor* TouchSensor205 = new TouchSensor();
TouchSensor205->setDescription(CString("HAnimSite l_tarsal_distal_phalanx_3_tip"));
HAnimSite204->addChild(TouchSensor205);

Shape* Shape206 = new Shape();
Shape206->setUSE(CString("HAnimSiteShape"));
HAnimSite204->addChild(Shape206);

HAnimSegment184->addChild(HAnimSite204);

HAnimSite* HAnimSite207 = new HAnimSite();
HAnimSite207->setName(CString("l_tarsal_distal_phalanx_4_tip"));
HAnimSite207->setDEF(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
TouchSensor* TouchSensor208 = new TouchSensor();
TouchSensor208->setDescription(CString("HAnimSite l_tarsal_distal_phalanx_4_tip"));
HAnimSite207->addChild(TouchSensor208);

Shape* Shape209 = new Shape();
Shape209->setUSE(CString("HAnimSiteShape"));
HAnimSite207->addChild(Shape209);

HAnimSegment184->addChild(HAnimSite207);

HAnimSite* HAnimSite210 = new HAnimSite();
HAnimSite210->setName(CString("l_tarsal_distal_phalanx_5_tip"));
HAnimSite210->setDEF(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
TouchSensor* TouchSensor211 = new TouchSensor();
TouchSensor211->setDescription(CString("HAnimSite l_tarsal_distal_phalanx_5_tip"));
HAnimSite210->addChild(TouchSensor211);

Shape* Shape212 = new Shape();
Shape212->setUSE(CString("HAnimSiteShape"));
HAnimSite210->addChild(Shape212);

HAnimSegment184->addChild(HAnimSite210);

HAnimJoint183->addChild(HAnimSegment184);

HAnimJoint* HAnimJoint213 = new HAnimJoint();
HAnimJoint213->setName(CString("l_metatarsophalangeal_2"));
HAnimJoint213->setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint213->setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimSegment* HAnimSegment214 = new HAnimSegment();
HAnimSegment214->setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment214->setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform* Transform215 = new Transform();
Transform215->setTranslation(new float[3]{0.0824,0.0064,-0.004});
Transform* Transform216 = new Transform();
//Empty Transform
Shape* Shape217 = new Shape();
Shape217->setUSE(CString("HAnimJointShape"));
Transform216->addChild(Shape217);

Transform215->addChild(Transform216);

HAnimSegment214->addChild(Transform215);

Shape* Shape218 = new Shape();
LineSet* LineSet219 = new LineSet();
LineSet219->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate220 = new Coordinate();
Coordinate220->setPoint(new float[6]{0.0824,0.0064,-0.004,0.0841,0.0013,0.0216}, 6);
LineSet219->addChild(Coordinate220);

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA221 = new ColorRGBA();
ColorRGBA221->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet219->addChild(ColorRGBA221);

Shape218->setGeometry(LineSet219);

HAnimSegment214->addChild(Shape218);

HAnimJoint213->addChild(HAnimSegment214);

HAnimJoint* HAnimJoint222 = new HAnimJoint();
HAnimJoint222->setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint222->setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint222->setCenter(new float[3]{0.0841,0.0013,0.0216});
HAnimJoint213->addChild(HAnimJoint222);

HAnimJoint183->addChild(HAnimJoint213);

HAnimJoint174->addChild(HAnimJoint183);

HAnimJoint159->addChild(HAnimJoint174);

HAnimJoint141->addChild(HAnimJoint159);

HAnimJoint104->addChild(HAnimJoint141);

HAnimJoint* HAnimJoint223 = new HAnimJoint();
HAnimJoint223->setName(CString("r_hip"));
HAnimJoint223->setDEF(CString("hanim_r_hip"));
HAnimJoint223->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimSegment* HAnimSegment224 = new HAnimSegment();
HAnimSegment224->setName(CString("r_thigh"));
HAnimSegment224->setDEF(CString("hanim_r_thigh"));
Transform* Transform225 = new Transform();
Transform225->setTranslation(new float[3]{-0.095,0.9171,0.0029});
Transform* Transform226 = new Transform();
//Empty Transform
Shape* Shape227 = new Shape();
Shape227->setUSE(CString("HAnimJointShape"));
Transform226->addChild(Shape227);

Transform225->addChild(Transform226);

HAnimSegment224->addChild(Transform225);

Shape* Shape228 = new Shape();
LineSet* LineSet229 = new LineSet();
LineSet229->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate230 = new Coordinate();
Coordinate230->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet229->addChild(Coordinate230);

//from r_hip to r_knee vertices 2
ColorRGBA* ColorRGBA231 = new ColorRGBA();
ColorRGBA231->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet229->addChild(ColorRGBA231);

Shape228->setGeometry(LineSet229);

HAnimSegment224->addChild(Shape228);

HAnimSite* HAnimSite232 = new HAnimSite();
HAnimSite232->setName(CString("r_lateral_malleolus"));
HAnimSite232->setDEF(CString("hanim_r_lateral_malleolus"));
HAnimSite232->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
TouchSensor* TouchSensor233 = new TouchSensor();
TouchSensor233->setDescription(CString("HAnimSite r_lateral_malleolus"));
HAnimSite232->addChild(TouchSensor233);

Shape* Shape234 = new Shape();
Shape234->setUSE(CString("HAnimSiteShape"));
HAnimSite232->addChild(Shape234);

HAnimSegment224->addChild(HAnimSite232);

HAnimSite* HAnimSite235 = new HAnimSite();
HAnimSite235->setName(CString("r_medial_malleolus"));
HAnimSite235->setDEF(CString("hanim_r_medial_malleolus"));
HAnimSite235->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
TouchSensor* TouchSensor236 = new TouchSensor();
TouchSensor236->setDescription(CString("HAnimSite r_medial_malleolus"));
HAnimSite235->addChild(TouchSensor236);

Shape* Shape237 = new Shape();
Shape237->setUSE(CString("HAnimSiteShape"));
HAnimSite235->addChild(Shape237);

HAnimSegment224->addChild(HAnimSite235);

HAnimSite* HAnimSite238 = new HAnimSite();
HAnimSite238->setName(CString("r_tibiale"));
HAnimSite238->setDEF(CString("hanim_r_tibiale"));
TouchSensor* TouchSensor239 = new TouchSensor();
TouchSensor239->setDescription(CString("HAnimSite r_tibiale"));
HAnimSite238->addChild(TouchSensor239);

Shape* Shape240 = new Shape();
Shape240->setUSE(CString("HAnimSiteShape"));
HAnimSite238->addChild(Shape240);

HAnimSegment224->addChild(HAnimSite238);

HAnimJoint223->addChild(HAnimSegment224);

HAnimJoint* HAnimJoint241 = new HAnimJoint();
HAnimJoint241->setName(CString("r_knee"));
HAnimJoint241->setDEF(CString("hanim_r_knee"));
HAnimJoint241->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimSegment* HAnimSegment242 = new HAnimSegment();
HAnimSegment242->setName(CString("r_calf"));
HAnimSegment242->setDEF(CString("hanim_r_calf"));
Transform* Transform243 = new Transform();
Transform243->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
Transform* Transform244 = new Transform();
//Empty Transform
Shape* Shape245 = new Shape();
Shape245->setUSE(CString("HAnimJointShape"));
Transform244->addChild(Shape245);

Transform243->addChild(Transform244);

HAnimSegment242->addChild(Transform243);

Shape* Shape246 = new Shape();
LineSet* LineSet247 = new LineSet();
LineSet247->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate248 = new Coordinate();
Coordinate248->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet247->addChild(Coordinate248);

//from r_knee to r_talocrural vertices 2
ColorRGBA* ColorRGBA249 = new ColorRGBA();
ColorRGBA249->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet247->addChild(ColorRGBA249);

Shape246->setGeometry(LineSet247);

HAnimSegment242->addChild(Shape246);

HAnimSite* HAnimSite250 = new HAnimSite();
HAnimSite250->setName(CString("r_calcaneus_posterior"));
HAnimSite250->setDEF(CString("hanim_r_calcaneus_posterior"));
HAnimSite250->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
TouchSensor* TouchSensor251 = new TouchSensor();
TouchSensor251->setDescription(CString("HAnimSite r_calcaneus_posterior"));
HAnimSite250->addChild(TouchSensor251);

Shape* Shape252 = new Shape();
Shape252->setUSE(CString("HAnimSiteShape"));
HAnimSite250->addChild(Shape252);

HAnimSegment242->addChild(HAnimSite250);

HAnimSite* HAnimSite253 = new HAnimSite();
HAnimSite253->setName(CString("r_sphyrion"));
HAnimSite253->setDEF(CString("hanim_r_sphyrion"));
HAnimSite253->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
TouchSensor* TouchSensor254 = new TouchSensor();
TouchSensor254->setDescription(CString("HAnimSite r_sphyrion"));
HAnimSite253->addChild(TouchSensor254);

Shape* Shape255 = new Shape();
Shape255->setUSE(CString("HAnimSiteShape"));
HAnimSite253->addChild(Shape255);

HAnimSegment242->addChild(HAnimSite253);

HAnimJoint241->addChild(HAnimSegment242);

HAnimJoint* HAnimJoint256 = new HAnimJoint();
HAnimJoint256->setName(CString("r_talocrural"));
HAnimJoint256->setDEF(CString("hanim_r_talocrural"));
HAnimJoint256->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimSegment* HAnimSegment257 = new HAnimSegment();
HAnimSegment257->setName(CString("r_talus"));
HAnimSegment257->setDEF(CString("hanim_r_talus"));
Transform* Transform258 = new Transform();
Transform258->setScale(new float[3]{0.15,0.15,0.15});
Transform258->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform258->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
Transform* Transform259 = new Transform();
//Empty Transform right foot
Shape* Shape260 = new Shape();
Shape260->setUSE(CString("HAnimJointShape"));
Transform259->addChild(Shape260);

Transform258->addChild(Transform259);

HAnimSegment257->addChild(Transform258);

Shape* Shape261 = new Shape();
LineSet* LineSet262 = new LineSet();
LineSet262->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate263 = new Coordinate();
Coordinate263->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608}, 6);
LineSet262->addChild(Coordinate263);

//from r_talocrural to r_tarsometatarsal_2 vertices 2
ColorRGBA* ColorRGBA264 = new ColorRGBA();
ColorRGBA264->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet262->addChild(ColorRGBA264);

Shape261->setGeometry(LineSet262);

HAnimSegment257->addChild(Shape261);

HAnimJoint256->addChild(HAnimSegment257);

HAnimJoint* HAnimJoint265 = new HAnimJoint();
HAnimJoint265->setName(CString("r_tarsometatarsal_2"));
HAnimJoint265->setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint265->setCenter(new float[3]{-0.08,0.0175,-0.0608});
HAnimSegment* HAnimSegment266 = new HAnimSegment();
HAnimSegment266->setName(CString("r_metatarsal_2"));
HAnimSegment266->setDEF(CString("hanim_r_metatarsal_2"));
Transform* Transform267 = new Transform();
Transform267->setTranslation(new float[3]{-0.08,0.0175,-0.0608});
Transform* Transform268 = new Transform();
//Empty Transform
Shape* Shape269 = new Shape();
Shape269->setUSE(CString("HAnimJointShape"));
Transform268->addChild(Shape269);

Transform267->addChild(Transform268);

HAnimSegment266->addChild(Transform267);

Shape* Shape270 = new Shape();
LineSet* LineSet271 = new LineSet();
LineSet271->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate272 = new Coordinate();
Coordinate272->setPoint(new float[6]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004}, 6);
LineSet271->addChild(Coordinate272);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA* ColorRGBA273 = new ColorRGBA();
ColorRGBA273->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet271->addChild(ColorRGBA273);

Shape270->setGeometry(LineSet271);

HAnimSegment266->addChild(Shape270);

HAnimSite* HAnimSite274 = new HAnimSite();
HAnimSite274->setName(CString("r_metatarsal_phalanx_1"));
HAnimSite274->setDEF(CString("hanim_r_metatarsal_phalanx_1"));
TouchSensor* TouchSensor275 = new TouchSensor();
TouchSensor275->setDescription(CString("HAnimSite r_metatarsal_phalanx_1"));
HAnimSite274->addChild(TouchSensor275);

Shape* Shape276 = new Shape();
Shape276->setUSE(CString("HAnimSiteShape"));
HAnimSite274->addChild(Shape276);

HAnimSegment266->addChild(HAnimSite274);

HAnimSite* HAnimSite277 = new HAnimSite();
HAnimSite277->setName(CString("r_metatarsal_phalanx_5"));
HAnimSite277->setDEF(CString("hanim_r_metatarsal_phalanx_5"));
TouchSensor* TouchSensor278 = new TouchSensor();
TouchSensor278->setDescription(CString("HAnimSite r_metatarsal_phalanx_5"));
HAnimSite277->addChild(TouchSensor278);

Shape* Shape279 = new Shape();
Shape279->setUSE(CString("HAnimSiteShape"));
HAnimSite277->addChild(Shape279);

HAnimSegment266->addChild(HAnimSite277);

HAnimSite* HAnimSite280 = new HAnimSite();
HAnimSite280->setName(CString("r_tarsal_distal_phalanx_1_tip"));
HAnimSite280->setDEF(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
TouchSensor* TouchSensor281 = new TouchSensor();
TouchSensor281->setDescription(CString("HAnimSite r_tarsal_distal_phalanx_1_tip"));
HAnimSite280->addChild(TouchSensor281);

Shape* Shape282 = new Shape();
Shape282->setUSE(CString("HAnimSiteShape"));
HAnimSite280->addChild(Shape282);

HAnimSegment266->addChild(HAnimSite280);

HAnimSite* HAnimSite283 = new HAnimSite();
HAnimSite283->setName(CString("r_tarsal_distal_phalanx_2_tip"));
HAnimSite283->setDEF(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimSite283->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
TouchSensor* TouchSensor284 = new TouchSensor();
TouchSensor284->setDescription(CString("HAnimSite r_tarsal_distal_phalanx_2_tip"));
HAnimSite283->addChild(TouchSensor284);

Shape* Shape285 = new Shape();
Shape285->setUSE(CString("HAnimSiteShape"));
HAnimSite283->addChild(Shape285);

HAnimSegment266->addChild(HAnimSite283);

HAnimSite* HAnimSite286 = new HAnimSite();
HAnimSite286->setName(CString("r_tarsal_distal_phalanx_3_tip"));
HAnimSite286->setDEF(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
TouchSensor* TouchSensor287 = new TouchSensor();
TouchSensor287->setDescription(CString("HAnimSite r_tarsal_distal_phalanx_3_tip"));
HAnimSite286->addChild(TouchSensor287);

Shape* Shape288 = new Shape();
Shape288->setUSE(CString("HAnimSiteShape"));
HAnimSite286->addChild(Shape288);

HAnimSegment266->addChild(HAnimSite286);

HAnimSite* HAnimSite289 = new HAnimSite();
HAnimSite289->setName(CString("r_tarsal_distal_phalanx_4_tip"));
HAnimSite289->setDEF(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
TouchSensor* TouchSensor290 = new TouchSensor();
TouchSensor290->setDescription(CString("HAnimSite r_tarsal_distal_phalanx_4_tip"));
HAnimSite289->addChild(TouchSensor290);

Shape* Shape291 = new Shape();
Shape291->setUSE(CString("HAnimSiteShape"));
HAnimSite289->addChild(Shape291);

HAnimSegment266->addChild(HAnimSite289);

HAnimSite* HAnimSite292 = new HAnimSite();
HAnimSite292->setName(CString("r_tarsal_distal_phalanx_5_tip"));
HAnimSite292->setDEF(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
TouchSensor* TouchSensor293 = new TouchSensor();
TouchSensor293->setDescription(CString("HAnimSite r_tarsal_distal_phalanx_5_tip"));
HAnimSite292->addChild(TouchSensor293);

Shape* Shape294 = new Shape();
Shape294->setUSE(CString("HAnimSiteShape"));
HAnimSite292->addChild(Shape294);

HAnimSegment266->addChild(HAnimSite292);

HAnimJoint265->addChild(HAnimSegment266);

HAnimJoint* HAnimJoint295 = new HAnimJoint();
HAnimJoint295->setName(CString("r_metatarsophalangeal_2"));
HAnimJoint295->setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint295->setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimSegment* HAnimSegment296 = new HAnimSegment();
HAnimSegment296->setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment296->setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Transform* Transform297 = new Transform();
Transform297->setTranslation(new float[3]{-0.0823,0.0064,-0.004});
Transform* Transform298 = new Transform();
//Empty Transform
Shape* Shape299 = new Shape();
Shape299->setUSE(CString("HAnimJointShape"));
Transform298->addChild(Shape299);

Transform297->addChild(Transform298);

HAnimSegment296->addChild(Transform297);

Shape* Shape300 = new Shape();
LineSet* LineSet301 = new LineSet();
LineSet301->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate302 = new Coordinate();
Coordinate302->setPoint(new float[6]{-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216}, 6);
LineSet301->addChild(Coordinate302);

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA303 = new ColorRGBA();
ColorRGBA303->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet301->addChild(ColorRGBA303);

Shape300->setGeometry(LineSet301);

HAnimSegment296->addChild(Shape300);

HAnimJoint295->addChild(HAnimSegment296);

HAnimJoint* HAnimJoint304 = new HAnimJoint();
HAnimJoint304->setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint304->setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint304->setCenter(new float[3]{-0.0841,0.0013,0.0216});
HAnimJoint295->addChild(HAnimJoint304);

HAnimJoint265->addChild(HAnimJoint295);

HAnimJoint256->addChild(HAnimJoint265);

HAnimJoint241->addChild(HAnimJoint256);

HAnimJoint223->addChild(HAnimJoint241);

HAnimJoint104->addChild(HAnimJoint223);

HAnimJoint52->addChild(HAnimJoint104);

HAnimJoint* HAnimJoint305 = new HAnimJoint();
HAnimJoint305->setName(CString("vl5"));
HAnimJoint305->setDEF(CString("hanim_vl5"));
HAnimJoint305->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimSegment* HAnimSegment306 = new HAnimSegment();
HAnimSegment306->setName(CString("l5"));
HAnimSegment306->setDEF(CString("hanim_l5"));
Transform* Transform307 = new Transform();
Transform307->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
Transform* Transform308 = new Transform();
//Empty Transform
Shape* Shape309 = new Shape();
Shape309->setUSE(CString("HAnimJointShape"));
Transform308->addChild(Shape309);

Transform307->addChild(Transform308);

HAnimSegment306->addChild(Transform307);

Shape* Shape310 = new Shape();
LineSet* LineSet311 = new LineSet();
LineSet311->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate312 = new Coordinate();
Coordinate312->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796}, 6);
LineSet311->addChild(Coordinate312);

//from vl5 to vl3 vertices 2
ColorRGBA* ColorRGBA313 = new ColorRGBA();
ColorRGBA313->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet311->addChild(ColorRGBA313);

Shape310->setGeometry(LineSet311);

HAnimSegment306->addChild(Shape310);

HAnimSite* HAnimSite314 = new HAnimSite();
HAnimSite314->setName(CString("l_rib10"));
HAnimSite314->setDEF(CString("hanim_l_rib10"));
HAnimSite314->setTranslation(new float[3]{0.0871,1.1925,0.0992});
TouchSensor* TouchSensor315 = new TouchSensor();
TouchSensor315->setDescription(CString("HAnimSite l_rib10"));
HAnimSite314->addChild(TouchSensor315);

Shape* Shape316 = new Shape();
Shape316->setUSE(CString("HAnimSiteShape"));
HAnimSite314->addChild(Shape316);

HAnimSegment306->addChild(HAnimSite314);

HAnimSite* HAnimSite317 = new HAnimSite();
HAnimSite317->setName(CString("r_rib10"));
HAnimSite317->setDEF(CString("hanim_r_rib10"));
HAnimSite317->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
TouchSensor* TouchSensor318 = new TouchSensor();
TouchSensor318->setDescription(CString("HAnimSite r_rib10"));
HAnimSite317->addChild(TouchSensor318);

Shape* Shape319 = new Shape();
Shape319->setUSE(CString("HAnimSiteShape"));
HAnimSite317->addChild(Shape319);

HAnimSegment306->addChild(HAnimSite317);

HAnimSite* HAnimSite320 = new HAnimSite();
HAnimSite320->setName(CString("spine_1_middle_back"));
HAnimSite320->setDEF(CString("hanim_spine_1_middle_back"));
TouchSensor* TouchSensor321 = new TouchSensor();
TouchSensor321->setDescription(CString("HAnimSite spine_1_middle_back"));
HAnimSite320->addChild(TouchSensor321);

Shape* Shape322 = new Shape();
Shape322->setUSE(CString("HAnimSiteShape"));
HAnimSite320->addChild(Shape322);

HAnimSegment306->addChild(HAnimSite320);

HAnimSite* HAnimSite323 = new HAnimSite();
HAnimSite323->setName(CString("spine_2_middle_back"));
HAnimSite323->setDEF(CString("hanim_spine_2_middle_back"));
TouchSensor* TouchSensor324 = new TouchSensor();
TouchSensor324->setDescription(CString("HAnimSite spine_2_middle_back"));
HAnimSite323->addChild(TouchSensor324);

Shape* Shape325 = new Shape();
Shape325->setUSE(CString("HAnimSiteShape"));
HAnimSite323->addChild(Shape325);

HAnimSegment306->addChild(HAnimSite323);

HAnimJoint305->addChild(HAnimSegment306);

HAnimJoint* HAnimJoint326 = new HAnimJoint();
HAnimJoint326->setName(CString("vl3"));
HAnimJoint326->setDEF(CString("hanim_vl3"));
HAnimJoint326->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimSegment* HAnimSegment327 = new HAnimSegment();
HAnimSegment327->setName(CString("l3"));
HAnimSegment327->setDEF(CString("hanim_l3"));
Transform* Transform328 = new Transform();
Transform328->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
Transform* Transform329 = new Transform();
//Empty Transform
Shape* Shape330 = new Shape();
Shape330->setUSE(CString("HAnimJointShape"));
Transform329->addChild(Shape330);

Transform328->addChild(Transform329);

HAnimSegment327->addChild(Transform328);

Shape* Shape331 = new Shape();
LineSet* LineSet332 = new LineSet();
LineSet332->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate333 = new Coordinate();
Coordinate333->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805}, 6);
LineSet332->addChild(Coordinate333);

//from vl3 to vl1 vertices 2
ColorRGBA* ColorRGBA334 = new ColorRGBA();
ColorRGBA334->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet332->addChild(ColorRGBA334);

Shape331->setGeometry(LineSet332);

HAnimSegment327->addChild(Shape331);

HAnimJoint326->addChild(HAnimSegment327);

HAnimJoint* HAnimJoint335 = new HAnimJoint();
HAnimJoint335->setName(CString("vl1"));
HAnimJoint335->setDEF(CString("hanim_vl1"));
HAnimJoint335->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimSegment* HAnimSegment336 = new HAnimSegment();
HAnimSegment336->setName(CString("l1"));
HAnimSegment336->setDEF(CString("hanim_l1"));
Transform* Transform337 = new Transform();
Transform337->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
Transform* Transform338 = new Transform();
//Empty Transform
Shape* Shape339 = new Shape();
Shape339->setUSE(CString("HAnimJointShape"));
Transform338->addChild(Shape339);

Transform337->addChild(Transform338);

HAnimSegment336->addChild(Transform337);

Shape* Shape340 = new Shape();
LineSet* LineSet341 = new LineSet();
LineSet341->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate342 = new Coordinate();
Coordinate342->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822}, 6);
LineSet341->addChild(Coordinate342);

//from vl1 to vt10 vertices 2
ColorRGBA* ColorRGBA343 = new ColorRGBA();
ColorRGBA343->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet341->addChild(ColorRGBA343);

Shape340->setGeometry(LineSet341);

HAnimSegment336->addChild(Shape340);

HAnimSite* HAnimSite344 = new HAnimSite();
HAnimSite344->setName(CString("l_thelion"));
HAnimSite344->setDEF(CString("hanim_l_thelion"));
HAnimSite344->setTranslation(new float[3]{0.0918,1.3382,0.1192});
TouchSensor* TouchSensor345 = new TouchSensor();
TouchSensor345->setDescription(CString("HAnimSite l_thelion"));
HAnimSite344->addChild(TouchSensor345);

Shape* Shape346 = new Shape();
Shape346->setUSE(CString("HAnimSiteShape"));
HAnimSite344->addChild(Shape346);

HAnimSegment336->addChild(HAnimSite344);

HAnimSite* HAnimSite347 = new HAnimSite();
HAnimSite347->setName(CString("r_thelion"));
HAnimSite347->setDEF(CString("hanim_r_thelion"));
HAnimSite347->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
TouchSensor* TouchSensor348 = new TouchSensor();
TouchSensor348->setDescription(CString("HAnimSite r_thelion"));
HAnimSite347->addChild(TouchSensor348);

Shape* Shape349 = new Shape();
Shape349->setUSE(CString("HAnimSiteShape"));
HAnimSite347->addChild(Shape349);

HAnimSegment336->addChild(HAnimSite347);

HAnimSite* HAnimSite350 = new HAnimSite();
HAnimSite350->setName(CString("substernale"));
HAnimSite350->setDEF(CString("hanim_substernale"));
HAnimSite350->setTranslation(new float[3]{0.0085,1.2995,0.1147});
TouchSensor* TouchSensor351 = new TouchSensor();
TouchSensor351->setDescription(CString("HAnimSite substernale"));
HAnimSite350->addChild(TouchSensor351);

Shape* Shape352 = new Shape();
Shape352->setUSE(CString("HAnimSiteShape"));
HAnimSite350->addChild(Shape352);

HAnimSegment336->addChild(HAnimSite350);

HAnimJoint335->addChild(HAnimSegment336);

HAnimJoint* HAnimJoint353 = new HAnimJoint();
HAnimJoint353->setName(CString("vt10"));
HAnimJoint353->setDEF(CString("hanim_vt10"));
HAnimJoint353->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimSegment* HAnimSegment354 = new HAnimSegment();
HAnimSegment354->setName(CString("t10"));
HAnimSegment354->setDEF(CString("hanim_t10"));
Transform* Transform355 = new Transform();
Transform355->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
Transform* Transform356 = new Transform();
//Empty Transform
Shape* Shape357 = new Shape();
Shape357->setUSE(CString("HAnimJointShape"));
Transform356->addChild(Shape357);

Transform355->addChild(Transform356);

HAnimSegment354->addChild(Transform355);

Shape* Shape358 = new Shape();
LineSet* LineSet359 = new LineSet();
LineSet359->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate360 = new Coordinate();
Coordinate360->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08}, 6);
LineSet359->addChild(Coordinate360);

//from vt10 to vt6 vertices 2
ColorRGBA* ColorRGBA361 = new ColorRGBA();
ColorRGBA361->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet359->addChild(ColorRGBA361);

Shape358->setGeometry(LineSet359);

HAnimSegment354->addChild(Shape358);

HAnimSite* HAnimSite362 = new HAnimSite();
HAnimSite362->setName(CString("l_chest_midsagittal_plane"));
HAnimSite362->setDEF(CString("hanim_l_chest_midsagittal_plane"));
TouchSensor* TouchSensor363 = new TouchSensor();
TouchSensor363->setDescription(CString("HAnimSite l_chest_midsagittal_plane"));
HAnimSite362->addChild(TouchSensor363);

Shape* Shape364 = new Shape();
Shape364->setUSE(CString("HAnimSiteShape"));
HAnimSite362->addChild(Shape364);

HAnimSegment354->addChild(HAnimSite362);

HAnimSite* HAnimSite365 = new HAnimSite();
HAnimSite365->setName(CString("mesosternale"));
HAnimSite365->setDEF(CString("hanim_mesosternale"));
TouchSensor* TouchSensor366 = new TouchSensor();
TouchSensor366->setDescription(CString("HAnimSite mesosternale"));
HAnimSite365->addChild(TouchSensor366);

Shape* Shape367 = new Shape();
Shape367->setUSE(CString("HAnimSiteShape"));
HAnimSite365->addChild(Shape367);

HAnimSegment354->addChild(HAnimSite365);

HAnimSite* HAnimSite368 = new HAnimSite();
HAnimSite368->setName(CString("r_chest_midsagittal_plane"));
HAnimSite368->setDEF(CString("hanim_r_chest_midsagittal_plane"));
TouchSensor* TouchSensor369 = new TouchSensor();
TouchSensor369->setDescription(CString("HAnimSite r_chest_midsagittal_plane"));
HAnimSite368->addChild(TouchSensor369);

Shape* Shape370 = new Shape();
Shape370->setUSE(CString("HAnimSiteShape"));
HAnimSite368->addChild(Shape370);

HAnimSegment354->addChild(HAnimSite368);

HAnimSite* HAnimSite371 = new HAnimSite();
HAnimSite371->setName(CString("rear_center_midsagittal_plane"));
HAnimSite371->setDEF(CString("hanim_rear_center_midsagittal_plane"));
TouchSensor* TouchSensor372 = new TouchSensor();
TouchSensor372->setDescription(CString("HAnimSite rear_center_midsagittal_plane"));
HAnimSite371->addChild(TouchSensor372);

Shape* Shape373 = new Shape();
Shape373->setUSE(CString("HAnimSiteShape"));
HAnimSite371->addChild(Shape373);

HAnimSegment354->addChild(HAnimSite371);

HAnimJoint353->addChild(HAnimSegment354);

HAnimJoint* HAnimJoint374 = new HAnimJoint();
HAnimJoint374->setName(CString("vt6"));
HAnimJoint374->setDEF(CString("hanim_vt6"));
HAnimJoint374->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimSegment* HAnimSegment375 = new HAnimSegment();
HAnimSegment375->setName(CString("t6"));
HAnimSegment375->setDEF(CString("hanim_t6"));
Transform* Transform376 = new Transform();
Transform376->setTranslation(new float[3]{0.0059,1.3866,-0.08});
Transform* Transform377 = new Transform();
//Empty Transform
Shape* Shape378 = new Shape();
Shape378->setUSE(CString("HAnimJointShape"));
Transform377->addChild(Shape378);

Transform376->addChild(Transform377);

HAnimSegment375->addChild(Transform376);

Shape* Shape379 = new Shape();
LineSet* LineSet380 = new LineSet();
LineSet380->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate381 = new Coordinate();
Coordinate381->setPoint(new float[6]{0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387}, 6);
LineSet380->addChild(Coordinate381);

//from vt6 to vt1 vertices 2
ColorRGBA* ColorRGBA382 = new ColorRGBA();
ColorRGBA382->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet380->addChild(ColorRGBA382);

Shape379->setGeometry(LineSet380);

HAnimSegment375->addChild(Shape379);

HAnimSite* HAnimSite383 = new HAnimSite();
HAnimSite383->setName(CString("cervicale"));
HAnimSite383->setDEF(CString("hanim_cervicale"));
HAnimSite383->setTranslation(new float[3]{0.0064,1.52,-0.0815});
TouchSensor* TouchSensor384 = new TouchSensor();
TouchSensor384->setDescription(CString("HAnimSite cervicale"));
HAnimSite383->addChild(TouchSensor384);

Shape* Shape385 = new Shape();
Shape385->setUSE(CString("HAnimSiteShape"));
HAnimSite383->addChild(Shape385);

HAnimSegment375->addChild(HAnimSite383);

HAnimSite* HAnimSite386 = new HAnimSite();
HAnimSite386->setName(CString("l_neck_base"));
HAnimSite386->setDEF(CString("hanim_l_neck_base"));
HAnimSite386->setTranslation(new float[3]{0.0646,1.5141,-0.038});
TouchSensor* TouchSensor387 = new TouchSensor();
TouchSensor387->setDescription(CString("HAnimSite l_neck_base"));
HAnimSite386->addChild(TouchSensor387);

Shape* Shape388 = new Shape();
Shape388->setUSE(CString("HAnimSiteShape"));
HAnimSite386->addChild(Shape388);

HAnimSegment375->addChild(HAnimSite386);

HAnimSite* HAnimSite389 = new HAnimSite();
HAnimSite389->setName(CString("r_neck_base"));
HAnimSite389->setDEF(CString("hanim_r_neck_base"));
HAnimSite389->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
TouchSensor* TouchSensor390 = new TouchSensor();
TouchSensor390->setDescription(CString("HAnimSite r_neck_base"));
HAnimSite389->addChild(TouchSensor390);

Shape* Shape391 = new Shape();
Shape391->setUSE(CString("HAnimSiteShape"));
HAnimSite389->addChild(Shape391);

HAnimSegment375->addChild(HAnimSite389);

HAnimSite* HAnimSite392 = new HAnimSite();
HAnimSite392->setName(CString("suprasternale"));
HAnimSite392->setDEF(CString("hanim_suprasternale"));
HAnimSite392->setTranslation(new float[3]{0.0084,1.4714,0.0551});
TouchSensor* TouchSensor393 = new TouchSensor();
TouchSensor393->setDescription(CString("HAnimSite suprasternale"));
HAnimSite392->addChild(TouchSensor393);

Shape* Shape394 = new Shape();
Shape394->setUSE(CString("HAnimSiteShape"));
HAnimSite392->addChild(Shape394);

HAnimSegment375->addChild(HAnimSite392);

HAnimJoint374->addChild(HAnimSegment375);

HAnimJoint* HAnimJoint395 = new HAnimJoint();
HAnimJoint395->setName(CString("vt1"));
HAnimJoint395->setDEF(CString("hanim_vt1"));
HAnimJoint395->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimSegment* HAnimSegment396 = new HAnimSegment();
HAnimSegment396->setName(CString("t1"));
HAnimSegment396->setDEF(CString("hanim_t1"));
Transform* Transform397 = new Transform();
Transform397->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
Transform* Transform398 = new Transform();
//Empty Transform
Shape* Shape399 = new Shape();
Shape399->setUSE(CString("HAnimJointShape"));
Transform398->addChild(Shape399);

Transform397->addChild(Transform398);

HAnimSegment396->addChild(Transform397);

Shape* Shape400 = new Shape();
LineSet* LineSet401 = new LineSet();
LineSet401->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate402 = new Coordinate();
Coordinate402->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084}, 6);
LineSet401->addChild(Coordinate402);

//from vt1 to vc4 vertices 2
ColorRGBA* ColorRGBA403 = new ColorRGBA();
ColorRGBA403->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet401->addChild(ColorRGBA403);

Shape400->setGeometry(LineSet401);

HAnimSegment396->addChild(Shape400);

Shape* Shape404 = new Shape();
LineSet* LineSet405 = new LineSet();
LineSet405->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate406 = new Coordinate();
Coordinate406->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet405->addChild(Coordinate406);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA* ColorRGBA407 = new ColorRGBA();
ColorRGBA407->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet405->addChild(ColorRGBA407);

Shape404->setGeometry(LineSet405);

HAnimSegment396->addChild(Shape404);

HAnimSite* HAnimSite408 = new HAnimSite();
HAnimSite408->setName(CString("l_acromion"));
HAnimSite408->setDEF(CString("hanim_l_acromion"));
HAnimSite408->setTranslation(new float[3]{0.2032,1.476,-0.049});
TouchSensor* TouchSensor409 = new TouchSensor();
TouchSensor409->setDescription(CString("HAnimSite l_acromion"));
HAnimSite408->addChild(TouchSensor409);

Shape* Shape410 = new Shape();
Shape410->setUSE(CString("HAnimSiteShape"));
HAnimSite408->addChild(Shape410);

HAnimSegment396->addChild(HAnimSite408);

HAnimSite* HAnimSite411 = new HAnimSite();
HAnimSite411->setName(CString("l_axilla_distal_pt"));
HAnimSite411->setDEF(CString("hanim_l_axilla_distal_pt"));
HAnimSite411->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
TouchSensor* TouchSensor412 = new TouchSensor();
TouchSensor412->setDescription(CString("HAnimSite l_axilla_distal_pt"));
HAnimSite411->addChild(TouchSensor412);

Shape* Shape413 = new Shape();
Shape413->setUSE(CString("HAnimSiteShape"));
HAnimSite411->addChild(Shape413);

HAnimSegment396->addChild(HAnimSite411);

HAnimSite* HAnimSite414 = new HAnimSite();
HAnimSite414->setName(CString("l_axilla_posterior_folds"));
HAnimSite414->setDEF(CString("hanim_l_axilla_posterior_folds"));
TouchSensor* TouchSensor415 = new TouchSensor();
TouchSensor415->setDescription(CString("HAnimSite l_axilla_posterior_folds"));
HAnimSite414->addChild(TouchSensor415);

Shape* Shape416 = new Shape();
Shape416->setUSE(CString("HAnimSiteShape"));
HAnimSite414->addChild(Shape416);

HAnimSegment396->addChild(HAnimSite414);

HAnimSite* HAnimSite417 = new HAnimSite();
HAnimSite417->setName(CString("l_axilla_proximal"));
HAnimSite417->setDEF(CString("hanim_l_axilla_proximal"));
HAnimSite417->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
TouchSensor* TouchSensor418 = new TouchSensor();
TouchSensor418->setDescription(CString("HAnimSite l_axilla_proximal"));
HAnimSite417->addChild(TouchSensor418);

Shape* Shape419 = new Shape();
Shape419->setUSE(CString("HAnimSiteShape"));
HAnimSite417->addChild(Shape419);

HAnimSegment396->addChild(HAnimSite417);

HAnimSite* HAnimSite420 = new HAnimSite();
HAnimSite420->setName(CString("l_clavicale"));
HAnimSite420->setDEF(CString("hanim_l_clavicale"));
HAnimSite420->setTranslation(new float[3]{0.0271,1.4943,0.0394});
TouchSensor* TouchSensor421 = new TouchSensor();
TouchSensor421->setDescription(CString("HAnimSite l_clavicale"));
HAnimSite420->addChild(TouchSensor421);

Shape* Shape422 = new Shape();
Shape422->setUSE(CString("HAnimSiteShape"));
HAnimSite420->addChild(Shape422);

HAnimSegment396->addChild(HAnimSite420);

Shape* Shape423 = new Shape();
LineSet* LineSet424 = new LineSet();
LineSet424->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate425 = new Coordinate();
Coordinate425->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
LineSet424->addChild(Coordinate425);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA* ColorRGBA426 = new ColorRGBA();
ColorRGBA426->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet424->addChild(ColorRGBA426);

Shape423->setGeometry(LineSet424);

HAnimSegment396->addChild(Shape423);

HAnimSite* HAnimSite427 = new HAnimSite();
HAnimSite427->setName(CString("r_acromion"));
HAnimSite427->setDEF(CString("hanim_r_acromion"));
HAnimSite427->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
TouchSensor* TouchSensor428 = new TouchSensor();
TouchSensor428->setDescription(CString("HAnimSite r_acromion"));
HAnimSite427->addChild(TouchSensor428);

Shape* Shape429 = new Shape();
Shape429->setUSE(CString("HAnimSiteShape"));
HAnimSite427->addChild(Shape429);

HAnimSegment396->addChild(HAnimSite427);

HAnimSite* HAnimSite430 = new HAnimSite();
HAnimSite430->setName(CString("r_axilla_distal_pt"));
HAnimSite430->setDEF(CString("hanim_r_axilla_distal_pt"));
HAnimSite430->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
TouchSensor* TouchSensor431 = new TouchSensor();
TouchSensor431->setDescription(CString("HAnimSite r_axilla_distal_pt"));
HAnimSite430->addChild(TouchSensor431);

Shape* Shape432 = new Shape();
Shape432->setUSE(CString("HAnimSiteShape"));
HAnimSite430->addChild(Shape432);

HAnimSegment396->addChild(HAnimSite430);

HAnimSite* HAnimSite433 = new HAnimSite();
HAnimSite433->setName(CString("r_axilla_posterior_folds"));
HAnimSite433->setDEF(CString("hanim_r_axilla_posterior_folds"));
TouchSensor* TouchSensor434 = new TouchSensor();
TouchSensor434->setDescription(CString("HAnimSite r_axilla_posterior_folds"));
HAnimSite433->addChild(TouchSensor434);

Shape* Shape435 = new Shape();
Shape435->setUSE(CString("HAnimSiteShape"));
HAnimSite433->addChild(Shape435);

HAnimSegment396->addChild(HAnimSite433);

HAnimSite* HAnimSite436 = new HAnimSite();
HAnimSite436->setName(CString("r_axilla_proximal"));
HAnimSite436->setDEF(CString("hanim_r_axilla_proximal"));
HAnimSite436->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
TouchSensor* TouchSensor437 = new TouchSensor();
TouchSensor437->setDescription(CString("HAnimSite r_axilla_proximal"));
HAnimSite436->addChild(TouchSensor437);

Shape* Shape438 = new Shape();
Shape438->setUSE(CString("HAnimSiteShape"));
HAnimSite436->addChild(Shape438);

HAnimSegment396->addChild(HAnimSite436);

HAnimSite* HAnimSite439 = new HAnimSite();
HAnimSite439->setName(CString("r_clavicale"));
HAnimSite439->setDEF(CString("hanim_r_clavicale"));
HAnimSite439->setTranslation(new float[3]{-0.0115,1.4943,0.04});
TouchSensor* TouchSensor440 = new TouchSensor();
TouchSensor440->setDescription(CString("HAnimSite r_clavicale"));
HAnimSite439->addChild(TouchSensor440);

Shape* Shape441 = new Shape();
Shape441->setUSE(CString("HAnimSiteShape"));
HAnimSite439->addChild(Shape441);

HAnimSegment396->addChild(HAnimSite439);

HAnimJoint395->addChild(HAnimSegment396);

HAnimJoint* HAnimJoint442 = new HAnimJoint();
HAnimJoint442->setName(CString("vc4"));
HAnimJoint442->setDEF(CString("hanim_vc4"));
HAnimJoint442->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimSegment* HAnimSegment443 = new HAnimSegment();
HAnimSegment443->setName(CString("c4"));
HAnimSegment443->setDEF(CString("hanim_c4"));
Transform* Transform444 = new Transform();
Transform444->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
Transform* Transform445 = new Transform();
//Empty Transform
Shape* Shape446 = new Shape();
Shape446->setUSE(CString("HAnimJointShape"));
Transform445->addChild(Shape446);

Transform444->addChild(Transform445);

HAnimSegment443->addChild(Transform444);

Shape* Shape447 = new Shape();
LineSet* LineSet448 = new LineSet();
LineSet448->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate449 = new Coordinate();
Coordinate449->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103}, 6);
LineSet448->addChild(Coordinate449);

//from vc4 to vc2 vertices 2
ColorRGBA* ColorRGBA450 = new ColorRGBA();
ColorRGBA450->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet448->addChild(ColorRGBA450);

Shape447->setGeometry(LineSet448);

HAnimSegment443->addChild(Shape447);

HAnimSite* HAnimSite451 = new HAnimSite();
HAnimSite451->setName(CString("adams_apple"));
HAnimSite451->setDEF(CString("hanim_adams_apple"));
TouchSensor* TouchSensor452 = new TouchSensor();
TouchSensor452->setDescription(CString("HAnimSite adams_apple"));
HAnimSite451->addChild(TouchSensor452);

Shape* Shape453 = new Shape();
Shape453->setUSE(CString("HAnimSiteShape"));
HAnimSite451->addChild(Shape453);

HAnimSegment443->addChild(HAnimSite451);

HAnimJoint442->addChild(HAnimSegment443);

HAnimJoint* HAnimJoint454 = new HAnimJoint();
HAnimJoint454->setName(CString("vc2"));
HAnimJoint454->setDEF(CString("hanim_vc2"));
HAnimJoint454->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimSegment* HAnimSegment455 = new HAnimSegment();
HAnimSegment455->setName(CString("c2"));
HAnimSegment455->setDEF(CString("hanim_c2"));
Transform* Transform456 = new Transform();
Transform456->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
Transform* Transform457 = new Transform();
//Empty Transform
Shape* Shape458 = new Shape();
Shape458->setUSE(CString("HAnimJointShape"));
Transform457->addChild(Shape458);

Transform456->addChild(Transform457);

HAnimSegment455->addChild(Transform456);

Shape* Shape459 = new Shape();
LineSet* LineSet460 = new LineSet();
LineSet460->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate461 = new Coordinate();
Coordinate461->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236}, 6);
LineSet460->addChild(Coordinate461);

//from vc2 to skullbase vertices 2
ColorRGBA* ColorRGBA462 = new ColorRGBA();
ColorRGBA462->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet460->addChild(ColorRGBA462);

Shape459->setGeometry(LineSet460);

HAnimSegment455->addChild(Shape459);

HAnimSite* HAnimSite463 = new HAnimSite();
HAnimSite463->setName(CString("glabella"));
HAnimSite463->setDEF(CString("hanim_glabella"));
TouchSensor* TouchSensor464 = new TouchSensor();
TouchSensor464->setDescription(CString("HAnimSite glabella"));
HAnimSite463->addChild(TouchSensor464);

Shape* Shape465 = new Shape();
Shape465->setUSE(CString("HAnimSiteShape"));
HAnimSite463->addChild(Shape465);

HAnimSegment455->addChild(HAnimSite463);

HAnimSite* HAnimSite466 = new HAnimSite();
HAnimSite466->setName(CString("l_ectocanthus"));
HAnimSite466->setDEF(CString("hanim_l_ectocanthus"));
TouchSensor* TouchSensor467 = new TouchSensor();
TouchSensor467->setDescription(CString("HAnimSite l_ectocanthus"));
HAnimSite466->addChild(TouchSensor467);

Shape* Shape468 = new Shape();
Shape468->setUSE(CString("HAnimSiteShape"));
HAnimSite466->addChild(Shape468);

HAnimSegment455->addChild(HAnimSite466);

HAnimSite* HAnimSite469 = new HAnimSite();
HAnimSite469->setName(CString("l_gonion"));
HAnimSite469->setDEF(CString("hanim_l_gonion"));
HAnimSite469->setTranslation(new float[3]{0.0631,1.553,0.033});
TouchSensor* TouchSensor470 = new TouchSensor();
TouchSensor470->setDescription(CString("HAnimSite l_gonion"));
HAnimSite469->addChild(TouchSensor470);

Shape* Shape471 = new Shape();
Shape471->setUSE(CString("HAnimSiteShape"));
HAnimSite469->addChild(Shape471);

HAnimSegment455->addChild(HAnimSite469);

HAnimSite* HAnimSite472 = new HAnimSite();
HAnimSite472->setName(CString("l_infraorbitale"));
HAnimSite472->setDEF(CString("hanim_l_infraorbitale"));
HAnimSite472->setTranslation(new float[3]{0.0341,1.6171,0.0752});
TouchSensor* TouchSensor473 = new TouchSensor();
TouchSensor473->setDescription(CString("HAnimSite l_infraorbitale"));
HAnimSite472->addChild(TouchSensor473);

Shape* Shape474 = new Shape();
Shape474->setUSE(CString("HAnimSiteShape"));
HAnimSite472->addChild(Shape474);

HAnimSegment455->addChild(HAnimSite472);

HAnimSite* HAnimSite475 = new HAnimSite();
HAnimSite475->setName(CString("l_tragion"));
HAnimSite475->setDEF(CString("hanim_l_tragion"));
HAnimSite475->setTranslation(new float[3]{0.0739,1.6348,0.0282});
TouchSensor* TouchSensor476 = new TouchSensor();
TouchSensor476->setDescription(CString("HAnimSite l_tragion"));
HAnimSite475->addChild(TouchSensor476);

Shape* Shape477 = new Shape();
Shape477->setUSE(CString("HAnimSiteShape"));
HAnimSite475->addChild(Shape477);

HAnimSegment455->addChild(HAnimSite475);

HAnimSite* HAnimSite478 = new HAnimSite();
HAnimSite478->setName(CString("menton"));
HAnimSite478->setDEF(CString("hanim_menton"));
TouchSensor* TouchSensor479 = new TouchSensor();
TouchSensor479->setDescription(CString("HAnimSite menton"));
HAnimSite478->addChild(TouchSensor479);

Shape* Shape480 = new Shape();
Shape480->setUSE(CString("HAnimSiteShape"));
HAnimSite478->addChild(Shape480);

HAnimSegment455->addChild(HAnimSite478);

HAnimSite* HAnimSite481 = new HAnimSite();
HAnimSite481->setName(CString("nuchale"));
HAnimSite481->setDEF(CString("hanim_nuchale"));
HAnimSite481->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
TouchSensor* TouchSensor482 = new TouchSensor();
TouchSensor482->setDescription(CString("HAnimSite nuchale"));
HAnimSite481->addChild(TouchSensor482);

Shape* Shape483 = new Shape();
Shape483->setUSE(CString("HAnimSiteShape"));
HAnimSite481->addChild(Shape483);

HAnimSegment455->addChild(HAnimSite481);

HAnimSite* HAnimSite484 = new HAnimSite();
HAnimSite484->setName(CString("opisthocranion"));
HAnimSite484->setDEF(CString("hanim_opisthocranion"));
TouchSensor* TouchSensor485 = new TouchSensor();
TouchSensor485->setDescription(CString("HAnimSite opisthocranion"));
HAnimSite484->addChild(TouchSensor485);

Shape* Shape486 = new Shape();
Shape486->setUSE(CString("HAnimSiteShape"));
HAnimSite484->addChild(Shape486);

HAnimSegment455->addChild(HAnimSite484);

HAnimSite* HAnimSite487 = new HAnimSite();
HAnimSite487->setName(CString("r_ectocanthus"));
HAnimSite487->setDEF(CString("hanim_r_ectocanthus"));
TouchSensor* TouchSensor488 = new TouchSensor();
TouchSensor488->setDescription(CString("HAnimSite r_ectocanthus"));
HAnimSite487->addChild(TouchSensor488);

Shape* Shape489 = new Shape();
Shape489->setUSE(CString("HAnimSiteShape"));
HAnimSite487->addChild(Shape489);

HAnimSegment455->addChild(HAnimSite487);

HAnimSite* HAnimSite490 = new HAnimSite();
HAnimSite490->setName(CString("r_gonion"));
HAnimSite490->setDEF(CString("hanim_r_gonion"));
HAnimSite490->setTranslation(new float[3]{-0.052,1.5529,0.0347});
TouchSensor* TouchSensor491 = new TouchSensor();
TouchSensor491->setDescription(CString("HAnimSite r_gonion"));
HAnimSite490->addChild(TouchSensor491);

Shape* Shape492 = new Shape();
Shape492->setUSE(CString("HAnimSiteShape"));
HAnimSite490->addChild(Shape492);

HAnimSegment455->addChild(HAnimSite490);

HAnimSite* HAnimSite493 = new HAnimSite();
HAnimSite493->setName(CString("r_infraorbitale"));
HAnimSite493->setDEF(CString("hanim_r_infraorbitale"));
HAnimSite493->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
TouchSensor* TouchSensor494 = new TouchSensor();
TouchSensor494->setDescription(CString("HAnimSite r_infraorbitale"));
HAnimSite493->addChild(TouchSensor494);

Shape* Shape495 = new Shape();
Shape495->setUSE(CString("HAnimSiteShape"));
HAnimSite493->addChild(Shape495);

HAnimSegment455->addChild(HAnimSite493);

HAnimSite* HAnimSite496 = new HAnimSite();
HAnimSite496->setName(CString("r_tragion"));
HAnimSite496->setDEF(CString("hanim_r_tragion"));
HAnimSite496->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
TouchSensor* TouchSensor497 = new TouchSensor();
TouchSensor497->setDescription(CString("HAnimSite r_tragion"));
HAnimSite496->addChild(TouchSensor497);

Shape* Shape498 = new Shape();
Shape498->setUSE(CString("HAnimSiteShape"));
HAnimSite496->addChild(Shape498);

HAnimSegment455->addChild(HAnimSite496);

HAnimSite* HAnimSite499 = new HAnimSite();
HAnimSite499->setName(CString("sellion"));
HAnimSite499->setDEF(CString("hanim_sellion"));
HAnimSite499->setTranslation(new float[3]{0.0058,1.6316,0.0852});
TouchSensor* TouchSensor500 = new TouchSensor();
TouchSensor500->setDescription(CString("HAnimSite sellion"));
HAnimSite499->addChild(TouchSensor500);

Shape* Shape501 = new Shape();
Shape501->setUSE(CString("HAnimSiteShape"));
HAnimSite499->addChild(Shape501);

HAnimSegment455->addChild(HAnimSite499);

HAnimSite* HAnimSite502 = new HAnimSite();
HAnimSite502->setName(CString("skull_vertex"));
HAnimSite502->setDEF(CString("hanim_skull_vertex"));
TouchSensor* TouchSensor503 = new TouchSensor();
TouchSensor503->setDescription(CString("HAnimSite skull_vertex"));
HAnimSite502->addChild(TouchSensor503);

Shape* Shape504 = new Shape();
Shape504->setUSE(CString("HAnimSiteShape"));
HAnimSite502->addChild(Shape504);

HAnimSegment455->addChild(HAnimSite502);

HAnimSite* HAnimSite505 = new HAnimSite();
HAnimSite505->setName(CString("supramenton"));
HAnimSite505->setDEF(CString("hanim_supramenton"));
HAnimSite505->setTranslation(new float[3]{0.0061,1.541,0.0805});
TouchSensor* TouchSensor506 = new TouchSensor();
TouchSensor506->setDescription(CString("HAnimSite supramenton"));
HAnimSite505->addChild(TouchSensor506);

Shape* Shape507 = new Shape();
Shape507->setUSE(CString("HAnimSiteShape"));
HAnimSite505->addChild(Shape507);

HAnimSegment455->addChild(HAnimSite505);

HAnimJoint454->addChild(HAnimSegment455);

HAnimJoint* HAnimJoint508 = new HAnimJoint();
HAnimJoint508->setName(CString("skullbase"));
HAnimJoint508->setDEF(CString("hanim_skullbase"));
HAnimJoint508->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint454->addChild(HAnimJoint508);

HAnimJoint442->addChild(HAnimJoint454);

HAnimJoint395->addChild(HAnimJoint442);

HAnimJoint* HAnimJoint509 = new HAnimJoint();
HAnimJoint509->setName(CString("l_sternoclavicular"));
HAnimJoint509->setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint509->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimSegment* HAnimSegment510 = new HAnimSegment();
HAnimSegment510->setName(CString("l_clavicle"));
HAnimSegment510->setDEF(CString("hanim_l_clavicle"));
Transform* Transform511 = new Transform();
Transform511->setTranslation(new float[3]{0.082,1.4488,-0.0353});
Transform* Transform512 = new Transform();
//Empty Transform
Shape* Shape513 = new Shape();
Shape513->setUSE(CString("HAnimJointShape"));
Transform512->addChild(Shape513);

Transform511->addChild(Transform512);

HAnimSegment510->addChild(Transform511);

Shape* Shape514 = new Shape();
LineSet* LineSet515 = new LineSet();
LineSet515->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate516 = new Coordinate();
Coordinate516->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet515->addChild(Coordinate516);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA* ColorRGBA517 = new ColorRGBA();
ColorRGBA517->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet515->addChild(ColorRGBA517);

Shape514->setGeometry(LineSet515);

HAnimSegment510->addChild(Shape514);

HAnimJoint509->addChild(HAnimSegment510);

HAnimJoint* HAnimJoint518 = new HAnimJoint();
HAnimJoint518->setName(CString("l_acromioclavicular"));
HAnimJoint518->setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint518->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimSegment* HAnimSegment519 = new HAnimSegment();
HAnimSegment519->setName(CString("l_scapula"));
HAnimSegment519->setDEF(CString("hanim_l_scapula"));
Transform* Transform520 = new Transform();
Transform520->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
Transform* Transform521 = new Transform();
//Empty Transform
Shape* Shape522 = new Shape();
Shape522->setUSE(CString("HAnimJointShape"));
Transform521->addChild(Shape522);

Transform520->addChild(Transform521);

HAnimSegment519->addChild(Transform520);

Shape* Shape523 = new Shape();
LineSet* LineSet524 = new LineSet();
LineSet524->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate525 = new Coordinate();
Coordinate525->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet524->addChild(Coordinate525);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA* ColorRGBA526 = new ColorRGBA();
ColorRGBA526->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet524->addChild(ColorRGBA526);

Shape523->setGeometry(LineSet524);

HAnimSegment519->addChild(Shape523);

HAnimSite* HAnimSite527 = new HAnimSite();
HAnimSite527->setName(CString("l_bideltoid"));
HAnimSite527->setDEF(CString("hanim_l_bideltoid"));
TouchSensor* TouchSensor528 = new TouchSensor();
TouchSensor528->setDescription(CString("HAnimSite l_bideltoid"));
HAnimSite527->addChild(TouchSensor528);

Shape* Shape529 = new Shape();
Shape529->setUSE(CString("HAnimSiteShape"));
HAnimSite527->addChild(Shape529);

HAnimSegment519->addChild(HAnimSite527);

HAnimSite* HAnimSite530 = new HAnimSite();
HAnimSite530->setName(CString("l_humeral_lateral_epicondyles"));
HAnimSite530->setDEF(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimSite530->setTranslation(new float[3]{0.228,1.1482,-0.11});
TouchSensor* TouchSensor531 = new TouchSensor();
TouchSensor531->setDescription(CString("HAnimSite l_humeral_lateral_epicondyles"));
HAnimSite530->addChild(TouchSensor531);

Shape* Shape532 = new Shape();
Shape532->setUSE(CString("HAnimSiteShape"));
HAnimSite530->addChild(Shape532);

HAnimSegment519->addChild(HAnimSite530);

HAnimJoint518->addChild(HAnimSegment519);

HAnimJoint* HAnimJoint533 = new HAnimJoint();
HAnimJoint533->setName(CString("l_shoulder"));
HAnimJoint533->setDEF(CString("hanim_l_shoulder"));
HAnimJoint533->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimSegment* HAnimSegment534 = new HAnimSegment();
HAnimSegment534->setName(CString("l_upperarm"));
HAnimSegment534->setDEF(CString("hanim_l_upperarm"));
Transform* Transform535 = new Transform();
Transform535->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
Transform* Transform536 = new Transform();
//Empty Transform
Shape* Shape537 = new Shape();
Shape537->setUSE(CString("HAnimJointShape"));
Transform536->addChild(Shape537);

Transform535->addChild(Transform536);

HAnimSegment534->addChild(Transform535);

Shape* Shape538 = new Shape();
LineSet* LineSet539 = new LineSet();
LineSet539->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate540 = new Coordinate();
Coordinate540->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet539->addChild(Coordinate540);

//from l_shoulder to l_elbow vertices 2
ColorRGBA* ColorRGBA541 = new ColorRGBA();
ColorRGBA541->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet539->addChild(ColorRGBA541);

Shape538->setGeometry(LineSet539);

HAnimSegment534->addChild(Shape538);

HAnimSite* HAnimSite542 = new HAnimSite();
HAnimSite542->setName(CString("l_humeral_medial_epicondyles"));
HAnimSite542->setDEF(CString("hanim_l_humeral_medial_epicondyles"));
HAnimSite542->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
TouchSensor* TouchSensor543 = new TouchSensor();
TouchSensor543->setDescription(CString("HAnimSite l_humeral_medial_epicondyles"));
HAnimSite542->addChild(TouchSensor543);

Shape* Shape544 = new Shape();
Shape544->setUSE(CString("HAnimSiteShape"));
HAnimSite542->addChild(Shape544);

HAnimSegment534->addChild(HAnimSite542);

HAnimSite* HAnimSite545 = new HAnimSite();
HAnimSite545->setName(CString("l_olecranon"));
HAnimSite545->setDEF(CString("hanim_l_olecranon"));
HAnimSite545->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
TouchSensor* TouchSensor546 = new TouchSensor();
TouchSensor546->setDescription(CString("HAnimSite l_olecranon"));
HAnimSite545->addChild(TouchSensor546);

Shape* Shape547 = new Shape();
Shape547->setUSE(CString("HAnimSiteShape"));
HAnimSite545->addChild(Shape547);

HAnimSegment534->addChild(HAnimSite545);

HAnimSite* HAnimSite548 = new HAnimSite();
HAnimSite548->setName(CString("l_radial_styloid"));
HAnimSite548->setDEF(CString("hanim_l_radial_styloid"));
HAnimSite548->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
TouchSensor* TouchSensor549 = new TouchSensor();
TouchSensor549->setDescription(CString("HAnimSite l_radial_styloid"));
HAnimSite548->addChild(TouchSensor549);

Shape* Shape550 = new Shape();
Shape550->setUSE(CString("HAnimSiteShape"));
HAnimSite548->addChild(Shape550);

HAnimSegment534->addChild(HAnimSite548);

HAnimSite* HAnimSite551 = new HAnimSite();
HAnimSite551->setName(CString("l_radiale"));
HAnimSite551->setDEF(CString("hanim_l_radiale"));
HAnimSite551->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
TouchSensor* TouchSensor552 = new TouchSensor();
TouchSensor552->setDescription(CString("HAnimSite l_radiale"));
HAnimSite551->addChild(TouchSensor552);

Shape* Shape553 = new Shape();
Shape553->setUSE(CString("HAnimSiteShape"));
HAnimSite551->addChild(Shape553);

HAnimSegment534->addChild(HAnimSite551);

HAnimJoint533->addChild(HAnimSegment534);

HAnimJoint* HAnimJoint554 = new HAnimJoint();
HAnimJoint554->setName(CString("l_elbow"));
HAnimJoint554->setDEF(CString("hanim_l_elbow"));
HAnimJoint554->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimSegment* HAnimSegment555 = new HAnimSegment();
HAnimSegment555->setName(CString("l_forearm"));
HAnimSegment555->setDEF(CString("hanim_l_forearm"));
Transform* Transform556 = new Transform();
Transform556->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
Transform* Transform557 = new Transform();
//Empty Transform
Shape* Shape558 = new Shape();
Shape558->setUSE(CString("HAnimJointShape"));
Transform557->addChild(Shape558);

Transform556->addChild(Transform557);

HAnimSegment555->addChild(Transform556);

Shape* Shape559 = new Shape();
LineSet* LineSet560 = new LineSet();
LineSet560->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate561 = new Coordinate();
Coordinate561->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet560->addChild(Coordinate561);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA* ColorRGBA562 = new ColorRGBA();
ColorRGBA562->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet560->addChild(ColorRGBA562);

Shape559->setGeometry(LineSet560);

HAnimSegment555->addChild(Shape559);

HAnimSite* HAnimSite563 = new HAnimSite();
HAnimSite563->setName(CString("l_ulnar_styloid"));
HAnimSite563->setDEF(CString("hanim_l_ulnar_styloid"));
HAnimSite563->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
TouchSensor* TouchSensor564 = new TouchSensor();
TouchSensor564->setDescription(CString("HAnimSite l_ulnar_styloid"));
HAnimSite563->addChild(TouchSensor564);

Shape* Shape565 = new Shape();
Shape565->setUSE(CString("HAnimSiteShape"));
HAnimSite563->addChild(Shape565);

HAnimSegment555->addChild(HAnimSite563);

HAnimJoint554->addChild(HAnimSegment555);

HAnimJoint* HAnimJoint566 = new HAnimJoint();
HAnimJoint566->setName(CString("l_radiocarpal"));
HAnimJoint566->setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint566->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimSegment* HAnimSegment567 = new HAnimSegment();
HAnimSegment567->setName(CString("l_carpal"));
HAnimSegment567->setDEF(CString("hanim_l_carpal"));
Transform* Transform568 = new Transform();
Transform568->setScale(new float[3]{0.2,0.2,0.2});
Transform568->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform568->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
Transform* Transform569 = new Transform();
Transform569->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
Shape* Shape570 = new Shape();
Shape570->setUSE(CString("HAnimJointShape"));
Transform569->addChild(Shape570);

Transform568->addChild(Transform569);

HAnimSegment567->addChild(Transform568);

Shape* Shape571 = new Shape();
LineSet* LineSet572 = new LineSet();
LineSet572->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate573 = new Coordinate();
Coordinate573->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534}, 6);
LineSet572->addChild(Coordinate573);

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA* ColorRGBA574 = new ColorRGBA();
ColorRGBA574->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet572->addChild(ColorRGBA574);

Shape571->setGeometry(LineSet572);

HAnimSegment567->addChild(Shape571);

Shape* Shape575 = new Shape();
LineSet* LineSet576 = new LineSet();
LineSet576->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate577 = new Coordinate();
Coordinate577->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028}, 6);
LineSet576->addChild(Coordinate577);

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA* ColorRGBA578 = new ColorRGBA();
ColorRGBA578->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet576->addChild(ColorRGBA578);

Shape575->setGeometry(LineSet576);

HAnimSegment567->addChild(Shape575);

HAnimSite* HAnimSite579 = new HAnimSite();
HAnimSite579->setName(CString("l_metacarpal_phalanx_2"));
HAnimSite579->setDEF(CString("hanim_l_metacarpal_phalanx_2"));
HAnimSite579->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
TouchSensor* TouchSensor580 = new TouchSensor();
TouchSensor580->setDescription(CString("HAnimSite l_metacarpal_phalanx_2"));
HAnimSite579->addChild(TouchSensor580);

Shape* Shape581 = new Shape();
Shape581->setUSE(CString("HAnimSiteShape"));
HAnimSite579->addChild(Shape581);

HAnimSegment567->addChild(HAnimSite579);

Shape* Shape582 = new Shape();
LineSet* LineSet583 = new LineSet();
LineSet583->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate584 = new Coordinate();
Coordinate584->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053}, 6);
LineSet583->addChild(Coordinate584);

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA* ColorRGBA585 = new ColorRGBA();
ColorRGBA585->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet583->addChild(ColorRGBA585);

Shape582->setGeometry(LineSet583);

HAnimSegment567->addChild(Shape582);

HAnimSite* HAnimSite586 = new HAnimSite();
HAnimSite586->setName(CString("l_metacarpal_phalanx_3"));
HAnimSite586->setDEF(CString("hanim_l_metacarpal_phalanx_3"));
TouchSensor* TouchSensor587 = new TouchSensor();
TouchSensor587->setDescription(CString("HAnimSite l_metacarpal_phalanx_3"));
HAnimSite586->addChild(TouchSensor587);

Shape* Shape588 = new Shape();
Shape588->setUSE(CString("HAnimSiteShape"));
HAnimSite586->addChild(Shape588);

HAnimSegment567->addChild(HAnimSite586);

Shape* Shape589 = new Shape();
LineSet* LineSet590 = new LineSet();
LineSet590->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate591 = new Coordinate();
Coordinate591->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794}, 6);
LineSet590->addChild(Coordinate591);

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA* ColorRGBA592 = new ColorRGBA();
ColorRGBA592->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet590->addChild(ColorRGBA592);

Shape589->setGeometry(LineSet590);

HAnimSegment567->addChild(Shape589);

Shape* Shape593 = new Shape();
LineSet* LineSet594 = new LineSet();
LineSet594->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate595 = new Coordinate();
Coordinate595->setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036}, 6);
LineSet594->addChild(Coordinate595);

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA* ColorRGBA596 = new ColorRGBA();
ColorRGBA596->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet594->addChild(ColorRGBA596);

Shape593->setGeometry(LineSet594);

HAnimSegment567->addChild(Shape593);

HAnimSite* HAnimSite597 = new HAnimSite();
HAnimSite597->setName(CString("l_metacarpal_phalanx_5"));
HAnimSite597->setDEF(CString("hanim_l_metacarpal_phalanx_5"));
HAnimSite597->setTranslation(new float[3]{0.1929,0.786,-0.1122});
TouchSensor* TouchSensor598 = new TouchSensor();
TouchSensor598->setDescription(CString("HAnimSite l_metacarpal_phalanx_5"));
HAnimSite597->addChild(TouchSensor598);

Shape* Shape599 = new Shape();
Shape599->setUSE(CString("HAnimSiteShape"));
HAnimSite597->addChild(Shape599);

HAnimSegment567->addChild(HAnimSite597);

HAnimJoint566->addChild(HAnimSegment567);

HAnimJoint* HAnimJoint600 = new HAnimJoint();
HAnimJoint600->setName(CString("l_carpometacarpal_1"));
HAnimJoint600->setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint600->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimSegment* HAnimSegment601 = new HAnimSegment();
HAnimSegment601->setName(CString("l_metacarpal_1"));
HAnimSegment601->setDEF(CString("hanim_l_metacarpal_1"));
Transform* Transform602 = new Transform();
Transform602->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
Transform* Transform603 = new Transform();
//Empty Transform
Shape* Shape604 = new Shape();
Shape604->setUSE(CString("HAnimJointShape"));
Transform603->addChild(Shape604);

Transform602->addChild(Transform603);

HAnimSegment601->addChild(Transform602);

Shape* Shape605 = new Shape();
LineSet* LineSet606 = new LineSet();
LineSet606->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate607 = new Coordinate();
Coordinate607->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet606->addChild(Coordinate607);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA* ColorRGBA608 = new ColorRGBA();
ColorRGBA608->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet606->addChild(ColorRGBA608);

Shape605->setGeometry(LineSet606);

HAnimSegment601->addChild(Shape605);

HAnimJoint600->addChild(HAnimSegment601);

HAnimJoint* HAnimJoint609 = new HAnimJoint();
HAnimJoint609->setName(CString("l_metacarpophalangeal_1"));
HAnimJoint609->setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint609->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimSegment* HAnimSegment610 = new HAnimSegment();
HAnimSegment610->setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment610->setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform* Transform611 = new Transform();
Transform611->setTranslation(new float[3]{0.1951,0.8226,0.0246});
Transform* Transform612 = new Transform();
//Empty Transform
Shape* Shape613 = new Shape();
Shape613->setUSE(CString("HAnimJointShape"));
Transform612->addChild(Shape613);

Transform611->addChild(Transform612);

HAnimSegment610->addChild(Transform611);

Shape* Shape614 = new Shape();
LineSet* LineSet615 = new LineSet();
LineSet615->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate616 = new Coordinate();
Coordinate616->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet615->addChild(Coordinate616);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA617 = new ColorRGBA();
ColorRGBA617->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet615->addChild(ColorRGBA617);

Shape614->setGeometry(LineSet615);

HAnimSegment610->addChild(Shape614);

HAnimSite* HAnimSite618 = new HAnimSite();
HAnimSite618->setName(CString("l_carpal_distal_phalanx_1_tip"));
HAnimSite618->setDEF(CString("hanim_l_carpal_distal_phalanx_1_tip"));
TouchSensor* TouchSensor619 = new TouchSensor();
TouchSensor619->setDescription(CString("HAnimSite l_carpal_distal_phalanx_1_tip"));
HAnimSite618->addChild(TouchSensor619);

Shape* Shape620 = new Shape();
Shape620->setUSE(CString("HAnimSiteShape"));
HAnimSite618->addChild(Shape620);

HAnimSegment610->addChild(HAnimSite618);

HAnimJoint609->addChild(HAnimSegment610);

HAnimJoint* HAnimJoint621 = new HAnimJoint();
HAnimJoint621->setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint621->setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint621->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint609->addChild(HAnimJoint621);

HAnimJoint600->addChild(HAnimJoint609);

HAnimJoint566->addChild(HAnimJoint600);

HAnimJoint* HAnimJoint622 = new HAnimJoint();
HAnimJoint622->setName(CString("l_carpometacarpal_2"));
HAnimJoint622->setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint622->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimSegment* HAnimSegment623 = new HAnimSegment();
HAnimSegment623->setName(CString("l_metacarpal_2"));
HAnimSegment623->setDEF(CString("hanim_l_metacarpal_2"));
Transform* Transform624 = new Transform();
Transform624->setTranslation(new float[3]{0.1983,0.8024,-0.028});
Transform* Transform625 = new Transform();
//Empty Transform
Shape* Shape626 = new Shape();
Shape626->setUSE(CString("HAnimJointShape"));
Transform625->addChild(Shape626);

Transform624->addChild(Transform625);

HAnimSegment623->addChild(Transform624);

Shape* Shape627 = new Shape();
LineSet* LineSet628 = new LineSet();
LineSet628->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate629 = new Coordinate();
Coordinate629->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet628->addChild(Coordinate629);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA* ColorRGBA630 = new ColorRGBA();
ColorRGBA630->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet628->addChild(ColorRGBA630);

Shape627->setGeometry(LineSet628);

HAnimSegment623->addChild(Shape627);

HAnimJoint622->addChild(HAnimSegment623);

HAnimJoint* HAnimJoint631 = new HAnimJoint();
HAnimJoint631->setName(CString("l_metacarpophalangeal_2"));
HAnimJoint631->setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint631->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimSegment* HAnimSegment632 = new HAnimSegment();
HAnimSegment632->setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment632->setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform* Transform633 = new Transform();
Transform633->setTranslation(new float[3]{0.1983,0.7815,-0.028});
Transform* Transform634 = new Transform();
//Empty Transform
Shape* Shape635 = new Shape();
Shape635->setUSE(CString("HAnimJointShape"));
Transform634->addChild(Shape635);

Transform633->addChild(Transform634);

HAnimSegment632->addChild(Transform633);

Shape* Shape636 = new Shape();
LineSet* LineSet637 = new LineSet();
LineSet637->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate638 = new Coordinate();
Coordinate638->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet637->addChild(Coordinate638);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA639 = new ColorRGBA();
ColorRGBA639->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet637->addChild(ColorRGBA639);

Shape636->setGeometry(LineSet637);

HAnimSegment632->addChild(Shape636);

HAnimJoint631->addChild(HAnimSegment632);

HAnimJoint* HAnimJoint640 = new HAnimJoint();
HAnimJoint640->setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint640->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint640->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimSegment* HAnimSegment641 = new HAnimSegment();
HAnimSegment641->setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment641->setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform* Transform642 = new Transform();
Transform642->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
Transform* Transform643 = new Transform();
//Empty Transform
Shape* Shape644 = new Shape();
Shape644->setUSE(CString("HAnimJointShape"));
Transform643->addChild(Shape644);

Transform642->addChild(Transform643);

HAnimSegment641->addChild(Transform642);

Shape* Shape645 = new Shape();
LineSet* LineSet646 = new LineSet();
LineSet646->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate647 = new Coordinate();
Coordinate647->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet646->addChild(Coordinate647);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA648 = new ColorRGBA();
ColorRGBA648->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet646->addChild(ColorRGBA648);

Shape645->setGeometry(LineSet646);

HAnimSegment641->addChild(Shape645);

HAnimSite* HAnimSite649 = new HAnimSite();
HAnimSite649->setName(CString("l_carpal_distal_phalanx_2_tip"));
HAnimSite649->setDEF(CString("hanim_l_carpal_distal_phalanx_2_tip"));
TouchSensor* TouchSensor650 = new TouchSensor();
TouchSensor650->setDescription(CString("HAnimSite l_carpal_distal_phalanx_2_tip"));
HAnimSite649->addChild(TouchSensor650);

Shape* Shape651 = new Shape();
Shape651->setUSE(CString("HAnimSiteShape"));
HAnimSite649->addChild(Shape651);

HAnimSegment641->addChild(HAnimSite649);

HAnimSite* HAnimSite652 = new HAnimSite();
HAnimSite652->setName(CString("l_dactylion"));
HAnimSite652->setDEF(CString("hanim_l_dactylion"));
HAnimSite652->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
TouchSensor* TouchSensor653 = new TouchSensor();
TouchSensor653->setDescription(CString("HAnimSite l_dactylion"));
HAnimSite652->addChild(TouchSensor653);

Shape* Shape654 = new Shape();
Shape654->setUSE(CString("HAnimSiteShape"));
HAnimSite652->addChild(Shape654);

HAnimSegment641->addChild(HAnimSite652);

HAnimJoint640->addChild(HAnimSegment641);

HAnimJoint* HAnimJoint655 = new HAnimJoint();
HAnimJoint655->setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint655->setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint655->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint640->addChild(HAnimJoint655);

HAnimJoint631->addChild(HAnimJoint640);

HAnimJoint622->addChild(HAnimJoint631);

HAnimJoint566->addChild(HAnimJoint622);

HAnimJoint* HAnimJoint656 = new HAnimJoint();
HAnimJoint656->setName(CString("l_carpometacarpal_3"));
HAnimJoint656->setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint656->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimSegment* HAnimSegment657 = new HAnimSegment();
HAnimSegment657->setName(CString("l_metacarpal_3"));
HAnimSegment657->setDEF(CString("hanim_l_metacarpal_3"));
Transform* Transform658 = new Transform();
Transform658->setTranslation(new float[3]{0.1987,0.8029,-0.053});
Transform* Transform659 = new Transform();
//Empty Transform
Shape* Shape660 = new Shape();
Shape660->setUSE(CString("HAnimJointShape"));
Transform659->addChild(Shape660);

Transform658->addChild(Transform659);

HAnimSegment657->addChild(Transform658);

Shape* Shape661 = new Shape();
LineSet* LineSet662 = new LineSet();
LineSet662->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate663 = new Coordinate();
Coordinate663->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet662->addChild(Coordinate663);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA* ColorRGBA664 = new ColorRGBA();
ColorRGBA664->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet662->addChild(ColorRGBA664);

Shape661->setGeometry(LineSet662);

HAnimSegment657->addChild(Shape661);

HAnimJoint656->addChild(HAnimSegment657);

HAnimJoint* HAnimJoint665 = new HAnimJoint();
HAnimJoint665->setName(CString("l_metacarpophalangeal_3"));
HAnimJoint665->setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint665->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimSegment* HAnimSegment666 = new HAnimSegment();
HAnimSegment666->setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment666->setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform* Transform667 = new Transform();
Transform667->setTranslation(new float[3]{0.1987,0.7818,-0.053});
Transform* Transform668 = new Transform();
//Empty Transform
Shape* Shape669 = new Shape();
Shape669->setUSE(CString("HAnimJointShape"));
Transform668->addChild(Shape669);

Transform667->addChild(Transform668);

HAnimSegment666->addChild(Transform667);

Shape* Shape670 = new Shape();
LineSet* LineSet671 = new LineSet();
LineSet671->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate672 = new Coordinate();
Coordinate672->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet671->addChild(Coordinate672);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA673 = new ColorRGBA();
ColorRGBA673->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet671->addChild(ColorRGBA673);

Shape670->setGeometry(LineSet671);

HAnimSegment666->addChild(Shape670);

HAnimJoint665->addChild(HAnimSegment666);

HAnimJoint* HAnimJoint674 = new HAnimJoint();
HAnimJoint674->setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint674->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint674->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimSegment* HAnimSegment675 = new HAnimSegment();
HAnimSegment675->setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment675->setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform* Transform676 = new Transform();
Transform676->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
Transform* Transform677 = new Transform();
//Empty Transform
Shape* Shape678 = new Shape();
Shape678->setUSE(CString("HAnimJointShape"));
Transform677->addChild(Shape678);

Transform676->addChild(Transform677);

HAnimSegment675->addChild(Transform676);

Shape* Shape679 = new Shape();
LineSet* LineSet680 = new LineSet();
LineSet680->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate681 = new Coordinate();
Coordinate681->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet680->addChild(Coordinate681);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA682 = new ColorRGBA();
ColorRGBA682->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet680->addChild(ColorRGBA682);

Shape679->setGeometry(LineSet680);

HAnimSegment675->addChild(Shape679);

HAnimSite* HAnimSite683 = new HAnimSite();
HAnimSite683->setName(CString("l_carpal_distal_phalanx_3_tip"));
HAnimSite683->setDEF(CString("hanim_l_carpal_distal_phalanx_3_tip"));
TouchSensor* TouchSensor684 = new TouchSensor();
TouchSensor684->setDescription(CString("HAnimSite l_carpal_distal_phalanx_3_tip"));
HAnimSite683->addChild(TouchSensor684);

Shape* Shape685 = new Shape();
Shape685->setUSE(CString("HAnimSiteShape"));
HAnimSite683->addChild(Shape685);

HAnimSegment675->addChild(HAnimSite683);

HAnimJoint674->addChild(HAnimSegment675);

HAnimJoint* HAnimJoint686 = new HAnimJoint();
HAnimJoint686->setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint686->setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint686->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint674->addChild(HAnimJoint686);

HAnimJoint665->addChild(HAnimJoint674);

HAnimJoint656->addChild(HAnimJoint665);

HAnimJoint566->addChild(HAnimJoint656);

HAnimJoint* HAnimJoint687 = new HAnimJoint();
HAnimJoint687->setName(CString("l_carpometacarpal_4"));
HAnimJoint687->setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint687->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimSegment* HAnimSegment688 = new HAnimSegment();
HAnimSegment688->setName(CString("l_metacarpal_4"));
HAnimSegment688->setDEF(CString("hanim_l_metacarpal_4"));
Transform* Transform689 = new Transform();
Transform689->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
Transform* Transform690 = new Transform();
//Empty Transform
Shape* Shape691 = new Shape();
Shape691->setUSE(CString("HAnimJointShape"));
Transform690->addChild(Shape691);

Transform689->addChild(Transform690);

HAnimSegment688->addChild(Transform689);

Shape* Shape692 = new Shape();
LineSet* LineSet693 = new LineSet();
LineSet693->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate694 = new Coordinate();
Coordinate694->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet693->addChild(Coordinate694);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA* ColorRGBA695 = new ColorRGBA();
ColorRGBA695->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet693->addChild(ColorRGBA695);

Shape692->setGeometry(LineSet693);

HAnimSegment688->addChild(Shape692);

HAnimJoint687->addChild(HAnimSegment688);

HAnimJoint* HAnimJoint696 = new HAnimJoint();
HAnimJoint696->setName(CString("l_metacarpophalangeal_4"));
HAnimJoint696->setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint696->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimSegment* HAnimSegment697 = new HAnimSegment();
HAnimSegment697->setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment697->setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform* Transform698 = new Transform();
Transform698->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
Transform* Transform699 = new Transform();
//Empty Transform
Shape* Shape700 = new Shape();
Shape700->setUSE(CString("HAnimJointShape"));
Transform699->addChild(Shape700);

Transform698->addChild(Transform699);

HAnimSegment697->addChild(Transform698);

Shape* Shape701 = new Shape();
LineSet* LineSet702 = new LineSet();
LineSet702->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate703 = new Coordinate();
Coordinate703->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet702->addChild(Coordinate703);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA704 = new ColorRGBA();
ColorRGBA704->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet702->addChild(ColorRGBA704);

Shape701->setGeometry(LineSet702);

HAnimSegment697->addChild(Shape701);

HAnimJoint696->addChild(HAnimSegment697);

HAnimJoint* HAnimJoint705 = new HAnimJoint();
HAnimJoint705->setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint705->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint705->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimSegment* HAnimSegment706 = new HAnimSegment();
HAnimSegment706->setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment706->setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform* Transform707 = new Transform();
Transform707->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
Transform* Transform708 = new Transform();
//Empty Transform
Shape* Shape709 = new Shape();
Shape709->setUSE(CString("HAnimJointShape"));
Transform708->addChild(Shape709);

Transform707->addChild(Transform708);

HAnimSegment706->addChild(Transform707);

Shape* Shape710 = new Shape();
LineSet* LineSet711 = new LineSet();
LineSet711->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate712 = new Coordinate();
Coordinate712->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet711->addChild(Coordinate712);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA713 = new ColorRGBA();
ColorRGBA713->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet711->addChild(ColorRGBA713);

Shape710->setGeometry(LineSet711);

HAnimSegment706->addChild(Shape710);

HAnimSite* HAnimSite714 = new HAnimSite();
HAnimSite714->setName(CString("l_carpal_distal_phalanx_4_tip"));
HAnimSite714->setDEF(CString("hanim_l_carpal_distal_phalanx_4_tip"));
TouchSensor* TouchSensor715 = new TouchSensor();
TouchSensor715->setDescription(CString("HAnimSite l_carpal_distal_phalanx_4_tip"));
HAnimSite714->addChild(TouchSensor715);

Shape* Shape716 = new Shape();
Shape716->setUSE(CString("HAnimSiteShape"));
HAnimSite714->addChild(Shape716);

HAnimSegment706->addChild(HAnimSite714);

HAnimJoint705->addChild(HAnimSegment706);

HAnimJoint* HAnimJoint717 = new HAnimJoint();
HAnimJoint717->setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint717->setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint717->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint705->addChild(HAnimJoint717);

HAnimJoint696->addChild(HAnimJoint705);

HAnimJoint687->addChild(HAnimJoint696);

HAnimJoint566->addChild(HAnimJoint687);

HAnimJoint* HAnimJoint718 = new HAnimJoint();
HAnimJoint718->setName(CString("l_carpometacarpal_5"));
HAnimJoint718->setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint718->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimSegment* HAnimSegment719 = new HAnimSegment();
HAnimSegment719->setName(CString("l_metacarpal_5"));
HAnimSegment719->setDEF(CString("hanim_l_metacarpal_5"));
Transform* Transform720 = new Transform();
Transform720->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
Transform* Transform721 = new Transform();
//Empty Transform
Shape* Shape722 = new Shape();
Shape722->setUSE(CString("HAnimJointShape"));
Transform721->addChild(Shape722);

Transform720->addChild(Transform721);

HAnimSegment719->addChild(Transform720);

Shape* Shape723 = new Shape();
LineSet* LineSet724 = new LineSet();
LineSet724->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate725 = new Coordinate();
Coordinate725->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet724->addChild(Coordinate725);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA* ColorRGBA726 = new ColorRGBA();
ColorRGBA726->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet724->addChild(ColorRGBA726);

Shape723->setGeometry(LineSet724);

HAnimSegment719->addChild(Shape723);

HAnimJoint718->addChild(HAnimSegment719);

HAnimJoint* HAnimJoint727 = new HAnimJoint();
HAnimJoint727->setName(CString("l_metacarpophalangeal_5"));
HAnimJoint727->setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint727->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimSegment* HAnimSegment728 = new HAnimSegment();
HAnimSegment728->setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment728->setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform* Transform729 = new Transform();
Transform729->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
Transform* Transform730 = new Transform();
//Empty Transform
Shape* Shape731 = new Shape();
Shape731->setUSE(CString("HAnimJointShape"));
Transform730->addChild(Shape731);

Transform729->addChild(Transform730);

HAnimSegment728->addChild(Transform729);

Shape* Shape732 = new Shape();
LineSet* LineSet733 = new LineSet();
LineSet733->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate734 = new Coordinate();
Coordinate734->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet733->addChild(Coordinate734);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA735 = new ColorRGBA();
ColorRGBA735->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet733->addChild(ColorRGBA735);

Shape732->setGeometry(LineSet733);

HAnimSegment728->addChild(Shape732);

HAnimJoint727->addChild(HAnimSegment728);

HAnimJoint* HAnimJoint736 = new HAnimJoint();
HAnimJoint736->setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint736->setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint736->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimSegment* HAnimSegment737 = new HAnimSegment();
HAnimSegment737->setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment737->setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform* Transform738 = new Transform();
Transform738->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
Transform* Transform739 = new Transform();
//Empty Transform
Shape* Shape740 = new Shape();
Shape740->setUSE(CString("HAnimJointShape"));
Transform739->addChild(Shape740);

Transform738->addChild(Transform739);

HAnimSegment737->addChild(Transform738);

Shape* Shape741 = new Shape();
LineSet* LineSet742 = new LineSet();
LineSet742->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate743 = new Coordinate();
Coordinate743->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet742->addChild(Coordinate743);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA744 = new ColorRGBA();
ColorRGBA744->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet742->addChild(ColorRGBA744);

Shape741->setGeometry(LineSet742);

HAnimSegment737->addChild(Shape741);

HAnimSite* HAnimSite745 = new HAnimSite();
HAnimSite745->setName(CString("l_carpal_distal_phalanx_5_tip"));
HAnimSite745->setDEF(CString("hanim_l_carpal_distal_phalanx_5_tip"));
TouchSensor* TouchSensor746 = new TouchSensor();
TouchSensor746->setDescription(CString("HAnimSite l_carpal_distal_phalanx_5_tip"));
HAnimSite745->addChild(TouchSensor746);

Shape* Shape747 = new Shape();
Shape747->setUSE(CString("HAnimSiteShape"));
HAnimSite745->addChild(Shape747);

HAnimSegment737->addChild(HAnimSite745);

HAnimJoint736->addChild(HAnimSegment737);

HAnimJoint* HAnimJoint748 = new HAnimJoint();
HAnimJoint748->setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint748->setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint748->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint736->addChild(HAnimJoint748);

HAnimJoint727->addChild(HAnimJoint736);

HAnimJoint718->addChild(HAnimJoint727);

HAnimJoint566->addChild(HAnimJoint718);

HAnimJoint554->addChild(HAnimJoint566);

HAnimJoint533->addChild(HAnimJoint554);

HAnimJoint518->addChild(HAnimJoint533);

HAnimJoint509->addChild(HAnimJoint518);

HAnimJoint395->addChild(HAnimJoint509);

HAnimJoint* HAnimJoint749 = new HAnimJoint();
HAnimJoint749->setName(CString("r_sternoclavicular"));
HAnimJoint749->setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint749->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimSegment* HAnimSegment750 = new HAnimSegment();
HAnimSegment750->setName(CString("r_clavicle"));
HAnimSegment750->setDEF(CString("hanim_r_clavicle"));
Transform* Transform751 = new Transform();
Transform751->setTranslation(new float[3]{-0.0694,1.46,-0.033});
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
Coordinate756->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
LineSet755->addChild(Coordinate756);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA* ColorRGBA757 = new ColorRGBA();
ColorRGBA757->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet755->addChild(ColorRGBA757);

Shape754->setGeometry(LineSet755);

HAnimSegment750->addChild(Shape754);

HAnimJoint749->addChild(HAnimSegment750);

HAnimJoint* HAnimJoint758 = new HAnimJoint();
HAnimJoint758->setName(CString("r_acromioclavicular"));
HAnimJoint758->setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint758->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimSegment* HAnimSegment759 = new HAnimSegment();
HAnimSegment759->setName(CString("r_scapula"));
HAnimSegment759->setDEF(CString("hanim_r_scapula"));
Transform* Transform760 = new Transform();
Transform760->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
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
Coordinate765->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
LineSet764->addChild(Coordinate765);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA* ColorRGBA766 = new ColorRGBA();
ColorRGBA766->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet764->addChild(ColorRGBA766);

Shape763->setGeometry(LineSet764);

HAnimSegment759->addChild(Shape763);

HAnimSite* HAnimSite767 = new HAnimSite();
HAnimSite767->setName(CString("r_bideltoid"));
HAnimSite767->setDEF(CString("hanim_r_bideltoid"));
TouchSensor* TouchSensor768 = new TouchSensor();
TouchSensor768->setDescription(CString("HAnimSite r_bideltoid"));
HAnimSite767->addChild(TouchSensor768);

Shape* Shape769 = new Shape();
Shape769->setUSE(CString("HAnimSiteShape"));
HAnimSite767->addChild(Shape769);

HAnimSegment759->addChild(HAnimSite767);

HAnimSite* HAnimSite770 = new HAnimSite();
HAnimSite770->setName(CString("r_humeral_lateral_epicondyles"));
HAnimSite770->setDEF(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimSite770->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
TouchSensor* TouchSensor771 = new TouchSensor();
TouchSensor771->setDescription(CString("HAnimSite r_humeral_lateral_epicondyles"));
HAnimSite770->addChild(TouchSensor771);

Shape* Shape772 = new Shape();
Shape772->setUSE(CString("HAnimSiteShape"));
HAnimSite770->addChild(Shape772);

HAnimSegment759->addChild(HAnimSite770);

HAnimJoint758->addChild(HAnimSegment759);

HAnimJoint* HAnimJoint773 = new HAnimJoint();
HAnimJoint773->setName(CString("r_shoulder"));
HAnimJoint773->setDEF(CString("hanim_r_shoulder"));
HAnimJoint773->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimSegment* HAnimSegment774 = new HAnimSegment();
HAnimSegment774->setName(CString("r_upperarm"));
HAnimSegment774->setDEF(CString("hanim_r_upperarm"));
Transform* Transform775 = new Transform();
Transform775->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
Transform* Transform776 = new Transform();
//Empty Transform
Shape* Shape777 = new Shape();
Shape777->setUSE(CString("HAnimJointShape"));
Transform776->addChild(Shape777);

Transform775->addChild(Transform776);

HAnimSegment774->addChild(Transform775);

Shape* Shape778 = new Shape();
LineSet* LineSet779 = new LineSet();
LineSet779->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate780 = new Coordinate();
Coordinate780->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet779->addChild(Coordinate780);

//from r_shoulder to r_elbow vertices 2
ColorRGBA* ColorRGBA781 = new ColorRGBA();
ColorRGBA781->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet779->addChild(ColorRGBA781);

Shape778->setGeometry(LineSet779);

HAnimSegment774->addChild(Shape778);

HAnimSite* HAnimSite782 = new HAnimSite();
HAnimSite782->setName(CString("r_humeral_medial_epicondyles"));
HAnimSite782->setDEF(CString("hanim_r_humeral_medial_epicondyles"));
HAnimSite782->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
TouchSensor* TouchSensor783 = new TouchSensor();
TouchSensor783->setDescription(CString("HAnimSite r_humeral_medial_epicondyles"));
HAnimSite782->addChild(TouchSensor783);

Shape* Shape784 = new Shape();
Shape784->setUSE(CString("HAnimSiteShape"));
HAnimSite782->addChild(Shape784);

HAnimSegment774->addChild(HAnimSite782);

HAnimSite* HAnimSite785 = new HAnimSite();
HAnimSite785->setName(CString("r_olecranon"));
HAnimSite785->setDEF(CString("hanim_r_olecranon"));
HAnimSite785->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
TouchSensor* TouchSensor786 = new TouchSensor();
TouchSensor786->setDescription(CString("HAnimSite r_olecranon"));
HAnimSite785->addChild(TouchSensor786);

Shape* Shape787 = new Shape();
Shape787->setUSE(CString("HAnimSiteShape"));
HAnimSite785->addChild(Shape787);

HAnimSegment774->addChild(HAnimSite785);

HAnimSite* HAnimSite788 = new HAnimSite();
HAnimSite788->setName(CString("r_radial_styloid"));
HAnimSite788->setDEF(CString("hanim_r_radial_styloid"));
HAnimSite788->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
TouchSensor* TouchSensor789 = new TouchSensor();
TouchSensor789->setDescription(CString("HAnimSite r_radial_styloid"));
HAnimSite788->addChild(TouchSensor789);

Shape* Shape790 = new Shape();
Shape790->setUSE(CString("HAnimSiteShape"));
HAnimSite788->addChild(Shape790);

HAnimSegment774->addChild(HAnimSite788);

HAnimSite* HAnimSite791 = new HAnimSite();
HAnimSite791->setName(CString("r_radiale"));
HAnimSite791->setDEF(CString("hanim_r_radiale"));
HAnimSite791->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
TouchSensor* TouchSensor792 = new TouchSensor();
TouchSensor792->setDescription(CString("HAnimSite r_radiale"));
HAnimSite791->addChild(TouchSensor792);

Shape* Shape793 = new Shape();
Shape793->setUSE(CString("HAnimSiteShape"));
HAnimSite791->addChild(Shape793);

HAnimSegment774->addChild(HAnimSite791);

HAnimJoint773->addChild(HAnimSegment774);

HAnimJoint* HAnimJoint794 = new HAnimJoint();
HAnimJoint794->setName(CString("r_elbow"));
HAnimJoint794->setDEF(CString("hanim_r_elbow"));
HAnimJoint794->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimSegment* HAnimSegment795 = new HAnimSegment();
HAnimSegment795->setName(CString("r_forearm"));
HAnimSegment795->setDEF(CString("hanim_r_forearm"));
Transform* Transform796 = new Transform();
Transform796->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
Transform* Transform797 = new Transform();
//Empty Transform
Shape* Shape798 = new Shape();
Shape798->setUSE(CString("HAnimJointShape"));
Transform797->addChild(Shape798);

Transform796->addChild(Transform797);

HAnimSegment795->addChild(Transform796);

Shape* Shape799 = new Shape();
LineSet* LineSet800 = new LineSet();
LineSet800->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate801 = new Coordinate();
Coordinate801->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet800->addChild(Coordinate801);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA* ColorRGBA802 = new ColorRGBA();
ColorRGBA802->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet800->addChild(ColorRGBA802);

Shape799->setGeometry(LineSet800);

HAnimSegment795->addChild(Shape799);

HAnimSite* HAnimSite803 = new HAnimSite();
HAnimSite803->setName(CString("r_ulnar_styloid"));
HAnimSite803->setDEF(CString("hanim_r_ulnar_styloid"));
HAnimSite803->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
TouchSensor* TouchSensor804 = new TouchSensor();
TouchSensor804->setDescription(CString("HAnimSite r_ulnar_styloid"));
HAnimSite803->addChild(TouchSensor804);

Shape* Shape805 = new Shape();
Shape805->setUSE(CString("HAnimSiteShape"));
HAnimSite803->addChild(Shape805);

HAnimSegment795->addChild(HAnimSite803);

HAnimJoint794->addChild(HAnimSegment795);

HAnimJoint* HAnimJoint806 = new HAnimJoint();
HAnimJoint806->setName(CString("r_radiocarpal"));
HAnimJoint806->setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint806->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimSegment* HAnimSegment807 = new HAnimSegment();
HAnimSegment807->setName(CString("r_carpal"));
HAnimSegment807->setDEF(CString("hanim_r_carpal"));
Transform* Transform808 = new Transform();
Transform808->setScale(new float[3]{0.2,0.2,0.2});
Transform808->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform808->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
Transform* Transform809 = new Transform();
Transform809->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
Shape* Shape810 = new Shape();
Shape810->setUSE(CString("HAnimJointShape"));
Transform809->addChild(Shape810);

Transform808->addChild(Transform809);

HAnimSegment807->addChild(Transform808);

Shape* Shape811 = new Shape();
LineSet* LineSet812 = new LineSet();
LineSet812->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate813 = new Coordinate();
Coordinate813->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473}, 6);
LineSet812->addChild(Coordinate813);

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA* ColorRGBA814 = new ColorRGBA();
ColorRGBA814->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet812->addChild(ColorRGBA814);

Shape811->setGeometry(LineSet812);

HAnimSegment807->addChild(Shape811);

Shape* Shape815 = new Shape();
LineSet* LineSet816 = new LineSet();
LineSet816->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate817 = new Coordinate();
Coordinate817->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218}, 6);
LineSet816->addChild(Coordinate817);

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA* ColorRGBA818 = new ColorRGBA();
ColorRGBA818->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet816->addChild(ColorRGBA818);

Shape815->setGeometry(LineSet816);

HAnimSegment807->addChild(Shape815);

HAnimSite* HAnimSite819 = new HAnimSite();
HAnimSite819->setName(CString("r_metacarpal_phalanx_2"));
HAnimSite819->setDEF(CString("hanim_r_metacarpal_phalanx_2"));
HAnimSite819->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
TouchSensor* TouchSensor820 = new TouchSensor();
TouchSensor820->setDescription(CString("HAnimSite r_metacarpal_phalanx_2"));
HAnimSite819->addChild(TouchSensor820);

Shape* Shape821 = new Shape();
Shape821->setUSE(CString("HAnimSiteShape"));
HAnimSite819->addChild(Shape821);

HAnimSegment807->addChild(HAnimSite819);

Shape* Shape822 = new Shape();
LineSet* LineSet823 = new LineSet();
LineSet823->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate824 = new Coordinate();
Coordinate824->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468}, 6);
LineSet823->addChild(Coordinate824);

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA* ColorRGBA825 = new ColorRGBA();
ColorRGBA825->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet823->addChild(ColorRGBA825);

Shape822->setGeometry(LineSet823);

HAnimSegment807->addChild(Shape822);

HAnimSite* HAnimSite826 = new HAnimSite();
HAnimSite826->setName(CString("r_metacarpal_phalanx_3"));
HAnimSite826->setDEF(CString("hanim_r_metacarpal_phalanx_3"));
TouchSensor* TouchSensor827 = new TouchSensor();
TouchSensor827->setDescription(CString("HAnimSite r_metacarpal_phalanx_3"));
HAnimSite826->addChild(TouchSensor827);

Shape* Shape828 = new Shape();
Shape828->setUSE(CString("HAnimSiteShape"));
HAnimSite826->addChild(Shape828);

HAnimSegment807->addChild(HAnimSite826);

Shape* Shape829 = new Shape();
LineSet* LineSet830 = new LineSet();
LineSet830->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate831 = new Coordinate();
Coordinate831->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732}, 6);
LineSet830->addChild(Coordinate831);

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA* ColorRGBA832 = new ColorRGBA();
ColorRGBA832->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet830->addChild(ColorRGBA832);

Shape829->setGeometry(LineSet830);

HAnimSegment807->addChild(Shape829);

Shape* Shape833 = new Shape();
LineSet* LineSet834 = new LineSet();
LineSet834->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate835 = new Coordinate();
Coordinate835->setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975}, 6);
LineSet834->addChild(Coordinate835);

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA* ColorRGBA836 = new ColorRGBA();
ColorRGBA836->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet834->addChild(ColorRGBA836);

Shape833->setGeometry(LineSet834);

HAnimSegment807->addChild(Shape833);

HAnimSite* HAnimSite837 = new HAnimSite();
HAnimSite837->setName(CString("r_metacarpal_phalanx_5"));
HAnimSite837->setDEF(CString("hanim_r_metacarpal_phalanx_5"));
HAnimSite837->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
TouchSensor* TouchSensor838 = new TouchSensor();
TouchSensor838->setDescription(CString("HAnimSite r_metacarpal_phalanx_5"));
HAnimSite837->addChild(TouchSensor838);

Shape* Shape839 = new Shape();
Shape839->setUSE(CString("HAnimSiteShape"));
HAnimSite837->addChild(Shape839);

HAnimSegment807->addChild(HAnimSite837);

HAnimJoint806->addChild(HAnimSegment807);

HAnimJoint* HAnimJoint840 = new HAnimJoint();
HAnimJoint840->setName(CString("r_carpometacarpal_1"));
HAnimJoint840->setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint840->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimSegment* HAnimSegment841 = new HAnimSegment();
HAnimSegment841->setName(CString("r_metacarpal_1"));
HAnimSegment841->setDEF(CString("hanim_r_metacarpal_1"));
Transform* Transform842 = new Transform();
Transform842->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
Transform* Transform843 = new Transform();
//Empty Transform
Shape* Shape844 = new Shape();
Shape844->setUSE(CString("HAnimJointShape"));
Transform843->addChild(Shape844);

Transform842->addChild(Transform843);

HAnimSegment841->addChild(Transform842);

Shape* Shape845 = new Shape();
LineSet* LineSet846 = new LineSet();
LineSet846->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate847 = new Coordinate();
Coordinate847->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
LineSet846->addChild(Coordinate847);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA* ColorRGBA848 = new ColorRGBA();
ColorRGBA848->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet846->addChild(ColorRGBA848);

Shape845->setGeometry(LineSet846);

HAnimSegment841->addChild(Shape845);

HAnimJoint840->addChild(HAnimSegment841);

HAnimJoint* HAnimJoint849 = new HAnimJoint();
HAnimJoint849->setName(CString("r_metacarpophalangeal_1"));
HAnimJoint849->setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint849->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimSegment* HAnimSegment850 = new HAnimSegment();
HAnimSegment850->setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment850->setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform* Transform851 = new Transform();
Transform851->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
Transform* Transform852 = new Transform();
//Empty Transform
Shape* Shape853 = new Shape();
Shape853->setUSE(CString("HAnimJointShape"));
Transform852->addChild(Shape853);

Transform851->addChild(Transform852);

HAnimSegment850->addChild(Transform851);

Shape* Shape854 = new Shape();
LineSet* LineSet855 = new LineSet();
LineSet855->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate856 = new Coordinate();
Coordinate856->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
LineSet855->addChild(Coordinate856);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA857 = new ColorRGBA();
ColorRGBA857->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet855->addChild(ColorRGBA857);

Shape854->setGeometry(LineSet855);

HAnimSegment850->addChild(Shape854);

HAnimSite* HAnimSite858 = new HAnimSite();
HAnimSite858->setName(CString("r_carpal_distal_phalanx_1_tip"));
HAnimSite858->setDEF(CString("hanim_r_carpal_distal_phalanx_1_tip"));
TouchSensor* TouchSensor859 = new TouchSensor();
TouchSensor859->setDescription(CString("HAnimSite r_carpal_distal_phalanx_1_tip"));
HAnimSite858->addChild(TouchSensor859);

Shape* Shape860 = new Shape();
Shape860->setUSE(CString("HAnimSiteShape"));
HAnimSite858->addChild(Shape860);

HAnimSegment850->addChild(HAnimSite858);

HAnimJoint849->addChild(HAnimSegment850);

HAnimJoint* HAnimJoint861 = new HAnimJoint();
HAnimJoint861->setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint861->setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint861->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint849->addChild(HAnimJoint861);

HAnimJoint840->addChild(HAnimJoint849);

HAnimJoint806->addChild(HAnimJoint840);

HAnimJoint* HAnimJoint862 = new HAnimJoint();
HAnimJoint862->setName(CString("r_carpometacarpal_2"));
HAnimJoint862->setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint862->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimSegment* HAnimSegment863 = new HAnimSegment();
HAnimSegment863->setName(CString("r_metacarpal_2"));
HAnimSegment863->setDEF(CString("hanim_r_metacarpal_2"));
Transform* Transform864 = new Transform();
Transform864->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
Transform* Transform865 = new Transform();
//Empty Transform
Shape* Shape866 = new Shape();
Shape866->setUSE(CString("HAnimJointShape"));
Transform865->addChild(Shape866);

Transform864->addChild(Transform865);

HAnimSegment863->addChild(Transform864);

Shape* Shape867 = new Shape();
LineSet* LineSet868 = new LineSet();
LineSet868->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate869 = new Coordinate();
Coordinate869->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
LineSet868->addChild(Coordinate869);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA* ColorRGBA870 = new ColorRGBA();
ColorRGBA870->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet868->addChild(ColorRGBA870);

Shape867->setGeometry(LineSet868);

HAnimSegment863->addChild(Shape867);

HAnimJoint862->addChild(HAnimSegment863);

HAnimJoint* HAnimJoint871 = new HAnimJoint();
HAnimJoint871->setName(CString("r_metacarpophalangeal_2"));
HAnimJoint871->setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint871->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimSegment* HAnimSegment872 = new HAnimSegment();
HAnimSegment872->setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment872->setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform* Transform873 = new Transform();
Transform873->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
Transform* Transform874 = new Transform();
//Empty Transform
Shape* Shape875 = new Shape();
Shape875->setUSE(CString("HAnimJointShape"));
Transform874->addChild(Shape875);

Transform873->addChild(Transform874);

HAnimSegment872->addChild(Transform873);

Shape* Shape876 = new Shape();
LineSet* LineSet877 = new LineSet();
LineSet877->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate878 = new Coordinate();
Coordinate878->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
LineSet877->addChild(Coordinate878);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA879 = new ColorRGBA();
ColorRGBA879->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet877->addChild(ColorRGBA879);

Shape876->setGeometry(LineSet877);

HAnimSegment872->addChild(Shape876);

HAnimJoint871->addChild(HAnimSegment872);

HAnimJoint* HAnimJoint880 = new HAnimJoint();
HAnimJoint880->setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint880->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint880->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimSegment* HAnimSegment881 = new HAnimSegment();
HAnimSegment881->setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment881->setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform* Transform882 = new Transform();
Transform882->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
Transform* Transform883 = new Transform();
//Empty Transform
Shape* Shape884 = new Shape();
Shape884->setUSE(CString("HAnimJointShape"));
Transform883->addChild(Shape884);

Transform882->addChild(Transform883);

HAnimSegment881->addChild(Transform882);

Shape* Shape885 = new Shape();
LineSet* LineSet886 = new LineSet();
LineSet886->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate887 = new Coordinate();
Coordinate887->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
LineSet886->addChild(Coordinate887);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA888 = new ColorRGBA();
ColorRGBA888->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet886->addChild(ColorRGBA888);

Shape885->setGeometry(LineSet886);

HAnimSegment881->addChild(Shape885);

HAnimSite* HAnimSite889 = new HAnimSite();
HAnimSite889->setName(CString("r_carpal_distal_phalanx_2_tip"));
HAnimSite889->setDEF(CString("hanim_r_carpal_distal_phalanx_2_tip"));
TouchSensor* TouchSensor890 = new TouchSensor();
TouchSensor890->setDescription(CString("HAnimSite r_carpal_distal_phalanx_2_tip"));
HAnimSite889->addChild(TouchSensor890);

Shape* Shape891 = new Shape();
Shape891->setUSE(CString("HAnimSiteShape"));
HAnimSite889->addChild(Shape891);

HAnimSegment881->addChild(HAnimSite889);

HAnimSite* HAnimSite892 = new HAnimSite();
HAnimSite892->setName(CString("r_dactylion"));
HAnimSite892->setDEF(CString("hanim_r_dactylion"));
HAnimSite892->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
TouchSensor* TouchSensor893 = new TouchSensor();
TouchSensor893->setDescription(CString("HAnimSite r_dactylion"));
HAnimSite892->addChild(TouchSensor893);

Shape* Shape894 = new Shape();
Shape894->setUSE(CString("HAnimSiteShape"));
HAnimSite892->addChild(Shape894);

HAnimSegment881->addChild(HAnimSite892);

HAnimJoint880->addChild(HAnimSegment881);

HAnimJoint* HAnimJoint895 = new HAnimJoint();
HAnimJoint895->setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint895->setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint895->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint880->addChild(HAnimJoint895);

HAnimJoint871->addChild(HAnimJoint880);

HAnimJoint862->addChild(HAnimJoint871);

HAnimJoint806->addChild(HAnimJoint862);

HAnimJoint* HAnimJoint896 = new HAnimJoint();
HAnimJoint896->setName(CString("r_carpometacarpal_3"));
HAnimJoint896->setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint896->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimSegment* HAnimSegment897 = new HAnimSegment();
HAnimSegment897->setName(CString("r_metacarpal_3"));
HAnimSegment897->setDEF(CString("hanim_r_metacarpal_3"));
Transform* Transform898 = new Transform();
Transform898->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
Transform* Transform899 = new Transform();
//Empty Transform
Shape* Shape900 = new Shape();
Shape900->setUSE(CString("HAnimJointShape"));
Transform899->addChild(Shape900);

Transform898->addChild(Transform899);

HAnimSegment897->addChild(Transform898);

Shape* Shape901 = new Shape();
LineSet* LineSet902 = new LineSet();
LineSet902->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate903 = new Coordinate();
Coordinate903->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
LineSet902->addChild(Coordinate903);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA* ColorRGBA904 = new ColorRGBA();
ColorRGBA904->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet902->addChild(ColorRGBA904);

Shape901->setGeometry(LineSet902);

HAnimSegment897->addChild(Shape901);

HAnimJoint896->addChild(HAnimSegment897);

HAnimJoint* HAnimJoint905 = new HAnimJoint();
HAnimJoint905->setName(CString("r_metacarpophalangeal_3"));
HAnimJoint905->setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint905->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimSegment* HAnimSegment906 = new HAnimSegment();
HAnimSegment906->setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment906->setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform* Transform907 = new Transform();
Transform907->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
Transform* Transform908 = new Transform();
//Empty Transform
Shape* Shape909 = new Shape();
Shape909->setUSE(CString("HAnimJointShape"));
Transform908->addChild(Shape909);

Transform907->addChild(Transform908);

HAnimSegment906->addChild(Transform907);

Shape* Shape910 = new Shape();
LineSet* LineSet911 = new LineSet();
LineSet911->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate912 = new Coordinate();
Coordinate912->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
LineSet911->addChild(Coordinate912);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA913 = new ColorRGBA();
ColorRGBA913->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet911->addChild(ColorRGBA913);

Shape910->setGeometry(LineSet911);

HAnimSegment906->addChild(Shape910);

HAnimJoint905->addChild(HAnimSegment906);

HAnimJoint* HAnimJoint914 = new HAnimJoint();
HAnimJoint914->setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint914->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint914->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimSegment* HAnimSegment915 = new HAnimSegment();
HAnimSegment915->setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment915->setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform* Transform916 = new Transform();
Transform916->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
Transform* Transform917 = new Transform();
//Empty Transform
Shape* Shape918 = new Shape();
Shape918->setUSE(CString("HAnimJointShape"));
Transform917->addChild(Shape918);

Transform916->addChild(Transform917);

HAnimSegment915->addChild(Transform916);

Shape* Shape919 = new Shape();
LineSet* LineSet920 = new LineSet();
LineSet920->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate921 = new Coordinate();
Coordinate921->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
LineSet920->addChild(Coordinate921);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA922 = new ColorRGBA();
ColorRGBA922->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet920->addChild(ColorRGBA922);

Shape919->setGeometry(LineSet920);

HAnimSegment915->addChild(Shape919);

HAnimSite* HAnimSite923 = new HAnimSite();
HAnimSite923->setName(CString("r_carpal_distal_phalanx_3_tip"));
HAnimSite923->setDEF(CString("hanim_r_carpal_distal_phalanx_3_tip"));
TouchSensor* TouchSensor924 = new TouchSensor();
TouchSensor924->setDescription(CString("HAnimSite r_carpal_distal_phalanx_3_tip"));
HAnimSite923->addChild(TouchSensor924);

Shape* Shape925 = new Shape();
Shape925->setUSE(CString("HAnimSiteShape"));
HAnimSite923->addChild(Shape925);

HAnimSegment915->addChild(HAnimSite923);

HAnimJoint914->addChild(HAnimSegment915);

HAnimJoint* HAnimJoint926 = new HAnimJoint();
HAnimJoint926->setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint926->setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint926->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint914->addChild(HAnimJoint926);

HAnimJoint905->addChild(HAnimJoint914);

HAnimJoint896->addChild(HAnimJoint905);

HAnimJoint806->addChild(HAnimJoint896);

HAnimJoint* HAnimJoint927 = new HAnimJoint();
HAnimJoint927->setName(CString("r_carpometacarpal_4"));
HAnimJoint927->setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint927->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimSegment* HAnimSegment928 = new HAnimSegment();
HAnimSegment928->setName(CString("r_metacarpal_4"));
HAnimSegment928->setDEF(CString("hanim_r_metacarpal_4"));
Transform* Transform929 = new Transform();
Transform929->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
Transform* Transform930 = new Transform();
//Empty Transform
Shape* Shape931 = new Shape();
Shape931->setUSE(CString("HAnimJointShape"));
Transform930->addChild(Shape931);

Transform929->addChild(Transform930);

HAnimSegment928->addChild(Transform929);

Shape* Shape932 = new Shape();
LineSet* LineSet933 = new LineSet();
LineSet933->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate934 = new Coordinate();
Coordinate934->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
LineSet933->addChild(Coordinate934);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA* ColorRGBA935 = new ColorRGBA();
ColorRGBA935->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet933->addChild(ColorRGBA935);

Shape932->setGeometry(LineSet933);

HAnimSegment928->addChild(Shape932);

HAnimJoint927->addChild(HAnimSegment928);

HAnimJoint* HAnimJoint936 = new HAnimJoint();
HAnimJoint936->setName(CString("r_metacarpophalangeal_4"));
HAnimJoint936->setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint936->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimSegment* HAnimSegment937 = new HAnimSegment();
HAnimSegment937->setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment937->setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform* Transform938 = new Transform();
Transform938->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
Transform* Transform939 = new Transform();
//Empty Transform
Shape* Shape940 = new Shape();
Shape940->setUSE(CString("HAnimJointShape"));
Transform939->addChild(Shape940);

Transform938->addChild(Transform939);

HAnimSegment937->addChild(Transform938);

Shape* Shape941 = new Shape();
LineSet* LineSet942 = new LineSet();
LineSet942->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate943 = new Coordinate();
Coordinate943->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
LineSet942->addChild(Coordinate943);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA944 = new ColorRGBA();
ColorRGBA944->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet942->addChild(ColorRGBA944);

Shape941->setGeometry(LineSet942);

HAnimSegment937->addChild(Shape941);

HAnimJoint936->addChild(HAnimSegment937);

HAnimJoint* HAnimJoint945 = new HAnimJoint();
HAnimJoint945->setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint945->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint945->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimSegment* HAnimSegment946 = new HAnimSegment();
HAnimSegment946->setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment946->setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform* Transform947 = new Transform();
Transform947->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
Transform* Transform948 = new Transform();
//Empty Transform
Shape* Shape949 = new Shape();
Shape949->setUSE(CString("HAnimJointShape"));
Transform948->addChild(Shape949);

Transform947->addChild(Transform948);

HAnimSegment946->addChild(Transform947);

Shape* Shape950 = new Shape();
LineSet* LineSet951 = new LineSet();
LineSet951->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate952 = new Coordinate();
Coordinate952->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
LineSet951->addChild(Coordinate952);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA953 = new ColorRGBA();
ColorRGBA953->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet951->addChild(ColorRGBA953);

Shape950->setGeometry(LineSet951);

HAnimSegment946->addChild(Shape950);

HAnimSite* HAnimSite954 = new HAnimSite();
HAnimSite954->setName(CString("r_carpal_distal_phalanx_4_tip"));
HAnimSite954->setDEF(CString("hanim_r_carpal_distal_phalanx_4_tip"));
TouchSensor* TouchSensor955 = new TouchSensor();
TouchSensor955->setDescription(CString("HAnimSite r_carpal_distal_phalanx_4_tip"));
HAnimSite954->addChild(TouchSensor955);

Shape* Shape956 = new Shape();
Shape956->setUSE(CString("HAnimSiteShape"));
HAnimSite954->addChild(Shape956);

HAnimSegment946->addChild(HAnimSite954);

HAnimJoint945->addChild(HAnimSegment946);

HAnimJoint* HAnimJoint957 = new HAnimJoint();
HAnimJoint957->setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint957->setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint957->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint945->addChild(HAnimJoint957);

HAnimJoint936->addChild(HAnimJoint945);

HAnimJoint927->addChild(HAnimJoint936);

HAnimJoint806->addChild(HAnimJoint927);

HAnimJoint* HAnimJoint958 = new HAnimJoint();
HAnimJoint958->setName(CString("r_carpometacarpal_5"));
HAnimJoint958->setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint958->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimSegment* HAnimSegment959 = new HAnimSegment();
HAnimSegment959->setName(CString("r_metacarpal_5"));
HAnimSegment959->setDEF(CString("hanim_r_metacarpal_5"));
Transform* Transform960 = new Transform();
Transform960->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
Transform* Transform961 = new Transform();
//Empty Transform
Shape* Shape962 = new Shape();
Shape962->setUSE(CString("HAnimJointShape"));
Transform961->addChild(Shape962);

Transform960->addChild(Transform961);

HAnimSegment959->addChild(Transform960);

Shape* Shape963 = new Shape();
LineSet* LineSet964 = new LineSet();
LineSet964->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate965 = new Coordinate();
Coordinate965->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
LineSet964->addChild(Coordinate965);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA* ColorRGBA966 = new ColorRGBA();
ColorRGBA966->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet964->addChild(ColorRGBA966);

Shape963->setGeometry(LineSet964);

HAnimSegment959->addChild(Shape963);

HAnimJoint958->addChild(HAnimSegment959);

HAnimJoint* HAnimJoint967 = new HAnimJoint();
HAnimJoint967->setName(CString("r_metacarpophalangeal_5"));
HAnimJoint967->setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint967->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimSegment* HAnimSegment968 = new HAnimSegment();
HAnimSegment968->setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment968->setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform* Transform969 = new Transform();
Transform969->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
Transform* Transform970 = new Transform();
//Empty Transform
Shape* Shape971 = new Shape();
Shape971->setUSE(CString("HAnimJointShape"));
Transform970->addChild(Shape971);

Transform969->addChild(Transform970);

HAnimSegment968->addChild(Transform969);

Shape* Shape972 = new Shape();
LineSet* LineSet973 = new LineSet();
LineSet973->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate974 = new Coordinate();
Coordinate974->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
LineSet973->addChild(Coordinate974);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA975 = new ColorRGBA();
ColorRGBA975->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet973->addChild(ColorRGBA975);

Shape972->setGeometry(LineSet973);

HAnimSegment968->addChild(Shape972);

HAnimJoint967->addChild(HAnimSegment968);

HAnimJoint* HAnimJoint976 = new HAnimJoint();
HAnimJoint976->setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint976->setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint976->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimSegment* HAnimSegment977 = new HAnimSegment();
HAnimSegment977->setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment977->setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform* Transform978 = new Transform();
Transform978->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
Transform* Transform979 = new Transform();
//Empty Transform
Shape* Shape980 = new Shape();
Shape980->setUSE(CString("HAnimJointShape"));
Transform979->addChild(Shape980);

Transform978->addChild(Transform979);

HAnimSegment977->addChild(Transform978);

Shape* Shape981 = new Shape();
LineSet* LineSet982 = new LineSet();
LineSet982->setVertexCount(new int32_t[1]{2}, 1);
Coordinate* Coordinate983 = new Coordinate();
Coordinate983->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
LineSet982->addChild(Coordinate983);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA984 = new ColorRGBA();
ColorRGBA984->setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet982->addChild(ColorRGBA984);

Shape981->setGeometry(LineSet982);

HAnimSegment977->addChild(Shape981);

HAnimSite* HAnimSite985 = new HAnimSite();
HAnimSite985->setName(CString("r_carpal_distal_phalanx_5_tip"));
HAnimSite985->setDEF(CString("hanim_r_carpal_distal_phalanx_5_tip"));
TouchSensor* TouchSensor986 = new TouchSensor();
TouchSensor986->setDescription(CString("HAnimSite r_carpal_distal_phalanx_5_tip"));
HAnimSite985->addChild(TouchSensor986);

Shape* Shape987 = new Shape();
Shape987->setUSE(CString("HAnimSiteShape"));
HAnimSite985->addChild(Shape987);

HAnimSegment977->addChild(HAnimSite985);

HAnimJoint976->addChild(HAnimSegment977);

HAnimJoint* HAnimJoint988 = new HAnimJoint();
HAnimJoint988->setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint988->setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint988->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint976->addChild(HAnimJoint988);

HAnimJoint967->addChild(HAnimJoint976);

HAnimJoint958->addChild(HAnimJoint967);

HAnimJoint806->addChild(HAnimJoint958);

HAnimJoint794->addChild(HAnimJoint806);

HAnimJoint773->addChild(HAnimJoint794);

HAnimJoint758->addChild(HAnimJoint773);

HAnimJoint749->addChild(HAnimJoint758);

HAnimJoint395->addChild(HAnimJoint749);

HAnimJoint374->addChild(HAnimJoint395);

HAnimJoint353->addChild(HAnimJoint374);

HAnimJoint335->addChild(HAnimJoint353);

HAnimJoint326->addChild(HAnimJoint335);

HAnimJoint305->addChild(HAnimJoint326);

HAnimJoint52->addChild(HAnimJoint305);

HAnimHumanoid43->setSkeleton(HAnimJoint52);

HAnimJoint* HAnimJoint989 = new HAnimJoint();
HAnimJoint989->setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid43->addChild(HAnimJoint989);

HAnimJoint* HAnimJoint990 = new HAnimJoint();
HAnimJoint990->setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid43->addChild(HAnimJoint990);

HAnimJoint* HAnimJoint991 = new HAnimJoint();
HAnimJoint991->setUSE(CString("hanim_l_hip"));
HAnimHumanoid43->addChild(HAnimJoint991);

HAnimJoint* HAnimJoint992 = new HAnimJoint();
HAnimJoint992->setUSE(CString("hanim_l_knee"));
HAnimHumanoid43->addChild(HAnimJoint992);

HAnimJoint* HAnimJoint993 = new HAnimJoint();
HAnimJoint993->setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid43->addChild(HAnimJoint993);

HAnimJoint* HAnimJoint994 = new HAnimJoint();
HAnimJoint994->setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid43->addChild(HAnimJoint994);

HAnimJoint* HAnimJoint995 = new HAnimJoint();
HAnimJoint995->setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint995);

HAnimJoint* HAnimJoint996 = new HAnimJoint();
HAnimJoint996->setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint996);

HAnimJoint* HAnimJoint997 = new HAnimJoint();
HAnimJoint997->setUSE(CString("hanim_r_hip"));
HAnimHumanoid43->addChild(HAnimJoint997);

HAnimJoint* HAnimJoint998 = new HAnimJoint();
HAnimJoint998->setUSE(CString("hanim_r_knee"));
HAnimHumanoid43->addChild(HAnimJoint998);

HAnimJoint* HAnimJoint999 = new HAnimJoint();
HAnimJoint999->setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid43->addChild(HAnimJoint999);

HAnimJoint* HAnimJoint1000 = new HAnimJoint();
HAnimJoint1000->setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid43->addChild(HAnimJoint1000);

HAnimJoint* HAnimJoint1001 = new HAnimJoint();
HAnimJoint1001->setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1001);

HAnimJoint* HAnimJoint1002 = new HAnimJoint();
HAnimJoint1002->setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1002);

HAnimJoint* HAnimJoint1003 = new HAnimJoint();
HAnimJoint1003->setUSE(CString("hanim_vl5"));
HAnimHumanoid43->addChild(HAnimJoint1003);

HAnimJoint* HAnimJoint1004 = new HAnimJoint();
HAnimJoint1004->setUSE(CString("hanim_vl3"));
HAnimHumanoid43->addChild(HAnimJoint1004);

HAnimJoint* HAnimJoint1005 = new HAnimJoint();
HAnimJoint1005->setUSE(CString("hanim_vl1"));
HAnimHumanoid43->addChild(HAnimJoint1005);

HAnimJoint* HAnimJoint1006 = new HAnimJoint();
HAnimJoint1006->setUSE(CString("hanim_vt10"));
HAnimHumanoid43->addChild(HAnimJoint1006);

HAnimJoint* HAnimJoint1007 = new HAnimJoint();
HAnimJoint1007->setUSE(CString("hanim_vt6"));
HAnimHumanoid43->addChild(HAnimJoint1007);

HAnimJoint* HAnimJoint1008 = new HAnimJoint();
HAnimJoint1008->setUSE(CString("hanim_vt1"));
HAnimHumanoid43->addChild(HAnimJoint1008);

HAnimJoint* HAnimJoint1009 = new HAnimJoint();
HAnimJoint1009->setUSE(CString("hanim_vc4"));
HAnimHumanoid43->addChild(HAnimJoint1009);

HAnimJoint* HAnimJoint1010 = new HAnimJoint();
HAnimJoint1010->setUSE(CString("hanim_vc2"));
HAnimHumanoid43->addChild(HAnimJoint1010);

HAnimJoint* HAnimJoint1011 = new HAnimJoint();
HAnimJoint1011->setUSE(CString("hanim_skullbase"));
HAnimHumanoid43->addChild(HAnimJoint1011);

HAnimJoint* HAnimJoint1012 = new HAnimJoint();
HAnimJoint1012->setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1012);

HAnimJoint* HAnimJoint1013 = new HAnimJoint();
HAnimJoint1013->setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1013);

HAnimJoint* HAnimJoint1014 = new HAnimJoint();
HAnimJoint1014->setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid43->addChild(HAnimJoint1014);

HAnimJoint* HAnimJoint1015 = new HAnimJoint();
HAnimJoint1015->setUSE(CString("hanim_l_elbow"));
HAnimHumanoid43->addChild(HAnimJoint1015);

HAnimJoint* HAnimJoint1016 = new HAnimJoint();
HAnimJoint1016->setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid43->addChild(HAnimJoint1016);

HAnimJoint* HAnimJoint1017 = new HAnimJoint();
HAnimJoint1017->setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint1017);

HAnimJoint* HAnimJoint1018 = new HAnimJoint();
HAnimJoint1018->setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1018);

HAnimJoint* HAnimJoint1019 = new HAnimJoint();
HAnimJoint1019->setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1019);

HAnimJoint* HAnimJoint1020 = new HAnimJoint();
HAnimJoint1020->setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint1020);

HAnimJoint* HAnimJoint1021 = new HAnimJoint();
HAnimJoint1021->setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1021);

HAnimJoint* HAnimJoint1022 = new HAnimJoint();
HAnimJoint1022->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1022);

HAnimJoint* HAnimJoint1023 = new HAnimJoint();
HAnimJoint1023->setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1023);

HAnimJoint* HAnimJoint1024 = new HAnimJoint();
HAnimJoint1024->setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint1024);

HAnimJoint* HAnimJoint1025 = new HAnimJoint();
HAnimJoint1025->setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1025);

HAnimJoint* HAnimJoint1026 = new HAnimJoint();
HAnimJoint1026->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1026);

HAnimJoint* HAnimJoint1027 = new HAnimJoint();
HAnimJoint1027->setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1027);

HAnimJoint* HAnimJoint1028 = new HAnimJoint();
HAnimJoint1028->setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid43->addChild(HAnimJoint1028);

HAnimJoint* HAnimJoint1029 = new HAnimJoint();
HAnimJoint1029->setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1029);

HAnimJoint* HAnimJoint1030 = new HAnimJoint();
HAnimJoint1030->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1030);

HAnimJoint* HAnimJoint1031 = new HAnimJoint();
HAnimJoint1031->setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1031);

HAnimJoint* HAnimJoint1032 = new HAnimJoint();
HAnimJoint1032->setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid43->addChild(HAnimJoint1032);

HAnimJoint* HAnimJoint1033 = new HAnimJoint();
HAnimJoint1033->setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1033);

HAnimJoint* HAnimJoint1034 = new HAnimJoint();
HAnimJoint1034->setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1034);

HAnimJoint* HAnimJoint1035 = new HAnimJoint();
HAnimJoint1035->setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1035);

HAnimJoint* HAnimJoint1036 = new HAnimJoint();
HAnimJoint1036->setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1036);

HAnimJoint* HAnimJoint1037 = new HAnimJoint();
HAnimJoint1037->setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid43->addChild(HAnimJoint1037);

HAnimJoint* HAnimJoint1038 = new HAnimJoint();
HAnimJoint1038->setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid43->addChild(HAnimJoint1038);

HAnimJoint* HAnimJoint1039 = new HAnimJoint();
HAnimJoint1039->setUSE(CString("hanim_r_elbow"));
HAnimHumanoid43->addChild(HAnimJoint1039);

HAnimJoint* HAnimJoint1040 = new HAnimJoint();
HAnimJoint1040->setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid43->addChild(HAnimJoint1040);

HAnimJoint* HAnimJoint1041 = new HAnimJoint();
HAnimJoint1041->setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid43->addChild(HAnimJoint1041);

HAnimJoint* HAnimJoint1042 = new HAnimJoint();
HAnimJoint1042->setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1042);

HAnimJoint* HAnimJoint1043 = new HAnimJoint();
HAnimJoint1043->setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid43->addChild(HAnimJoint1043);

HAnimJoint* HAnimJoint1044 = new HAnimJoint();
HAnimJoint1044->setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid43->addChild(HAnimJoint1044);

HAnimJoint* HAnimJoint1045 = new HAnimJoint();
HAnimJoint1045->setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1045);

HAnimJoint* HAnimJoint1046 = new HAnimJoint();
HAnimJoint1046->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1046);

HAnimJoint* HAnimJoint1047 = new HAnimJoint();
HAnimJoint1047->setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid43->addChild(HAnimJoint1047);

HAnimJoint* HAnimJoint1048 = new HAnimJoint();
HAnimJoint1048->setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid43->addChild(HAnimJoint1048);

HAnimJoint* HAnimJoint1049 = new HAnimJoint();
HAnimJoint1049->setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1049);

HAnimJoint* HAnimJoint1050 = new HAnimJoint();
HAnimJoint1050->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1050);

HAnimJoint* HAnimJoint1051 = new HAnimJoint();
HAnimJoint1051->setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid43->addChild(HAnimJoint1051);

HAnimJoint* HAnimJoint1052 = new HAnimJoint();
HAnimJoint1052->setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid43->addChild(HAnimJoint1052);

HAnimJoint* HAnimJoint1053 = new HAnimJoint();
HAnimJoint1053->setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1053);

HAnimJoint* HAnimJoint1054 = new HAnimJoint();
HAnimJoint1054->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1054);

HAnimJoint* HAnimJoint1055 = new HAnimJoint();
HAnimJoint1055->setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid43->addChild(HAnimJoint1055);

HAnimJoint* HAnimJoint1056 = new HAnimJoint();
HAnimJoint1056->setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid43->addChild(HAnimJoint1056);

HAnimJoint* HAnimJoint1057 = new HAnimJoint();
HAnimJoint1057->setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1057);

HAnimJoint* HAnimJoint1058 = new HAnimJoint();
HAnimJoint1058->setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1058);

HAnimJoint* HAnimJoint1059 = new HAnimJoint();
HAnimJoint1059->setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid43->addChild(HAnimJoint1059);

HAnimSegment* HAnimSegment1060 = new HAnimSegment();
HAnimSegment1060->setUSE(CString("hanim_sacrum"));
HAnimHumanoid43->setSegments(HAnimSegment1060);

HAnimSegment* HAnimSegment1061 = new HAnimSegment();
HAnimSegment1061->setUSE(CString("hanim_pelvis"));
HAnimHumanoid43->setSegments(HAnimSegment1061);

HAnimSegment* HAnimSegment1062 = new HAnimSegment();
HAnimSegment1062->setUSE(CString("hanim_l_thigh"));
HAnimHumanoid43->setSegments(HAnimSegment1062);

HAnimSegment* HAnimSegment1063 = new HAnimSegment();
HAnimSegment1063->setUSE(CString("hanim_l_calf"));
HAnimHumanoid43->setSegments(HAnimSegment1063);

HAnimSegment* HAnimSegment1064 = new HAnimSegment();
HAnimSegment1064->setUSE(CString("hanim_l_talus"));
HAnimHumanoid43->setSegments(HAnimSegment1064);

HAnimSegment* HAnimSegment1065 = new HAnimSegment();
HAnimSegment1065->setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1065);

HAnimSegment* HAnimSegment1066 = new HAnimSegment();
HAnimSegment1066->setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1066);

HAnimSegment* HAnimSegment1067 = new HAnimSegment();
HAnimSegment1067->setUSE(CString("hanim_r_thigh"));
HAnimHumanoid43->setSegments(HAnimSegment1067);

HAnimSegment* HAnimSegment1068 = new HAnimSegment();
HAnimSegment1068->setUSE(CString("hanim_r_calf"));
HAnimHumanoid43->setSegments(HAnimSegment1068);

HAnimSegment* HAnimSegment1069 = new HAnimSegment();
HAnimSegment1069->setUSE(CString("hanim_r_talus"));
HAnimHumanoid43->setSegments(HAnimSegment1069);

HAnimSegment* HAnimSegment1070 = new HAnimSegment();
HAnimSegment1070->setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1070);

HAnimSegment* HAnimSegment1071 = new HAnimSegment();
HAnimSegment1071->setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1071);

HAnimSegment* HAnimSegment1072 = new HAnimSegment();
HAnimSegment1072->setUSE(CString("hanim_l5"));
HAnimHumanoid43->setSegments(HAnimSegment1072);

HAnimSegment* HAnimSegment1073 = new HAnimSegment();
HAnimSegment1073->setUSE(CString("hanim_l3"));
HAnimHumanoid43->setSegments(HAnimSegment1073);

HAnimSegment* HAnimSegment1074 = new HAnimSegment();
HAnimSegment1074->setUSE(CString("hanim_l1"));
HAnimHumanoid43->setSegments(HAnimSegment1074);

HAnimSegment* HAnimSegment1075 = new HAnimSegment();
HAnimSegment1075->setUSE(CString("hanim_t10"));
HAnimHumanoid43->setSegments(HAnimSegment1075);

HAnimSegment* HAnimSegment1076 = new HAnimSegment();
HAnimSegment1076->setUSE(CString("hanim_t6"));
HAnimHumanoid43->setSegments(HAnimSegment1076);

HAnimSegment* HAnimSegment1077 = new HAnimSegment();
HAnimSegment1077->setUSE(CString("hanim_t1"));
HAnimHumanoid43->setSegments(HAnimSegment1077);

HAnimSegment* HAnimSegment1078 = new HAnimSegment();
HAnimSegment1078->setUSE(CString("hanim_c4"));
HAnimHumanoid43->setSegments(HAnimSegment1078);

HAnimSegment* HAnimSegment1079 = new HAnimSegment();
HAnimSegment1079->setUSE(CString("hanim_c2"));
HAnimHumanoid43->setSegments(HAnimSegment1079);

HAnimSegment* HAnimSegment1080 = new HAnimSegment();
HAnimSegment1080->setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid43->setSegments(HAnimSegment1080);

HAnimSegment* HAnimSegment1081 = new HAnimSegment();
HAnimSegment1081->setUSE(CString("hanim_l_scapula"));
HAnimHumanoid43->setSegments(HAnimSegment1081);

HAnimSegment* HAnimSegment1082 = new HAnimSegment();
HAnimSegment1082->setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid43->setSegments(HAnimSegment1082);

HAnimSegment* HAnimSegment1083 = new HAnimSegment();
HAnimSegment1083->setUSE(CString("hanim_l_forearm"));
HAnimHumanoid43->setSegments(HAnimSegment1083);

HAnimSegment* HAnimSegment1084 = new HAnimSegment();
HAnimSegment1084->setUSE(CString("hanim_l_carpal"));
HAnimHumanoid43->setSegments(HAnimSegment1084);

HAnimSegment* HAnimSegment1085 = new HAnimSegment();
HAnimSegment1085->setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid43->setSegments(HAnimSegment1085);

HAnimSegment* HAnimSegment1086 = new HAnimSegment();
HAnimSegment1086->setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid43->setSegments(HAnimSegment1086);

HAnimSegment* HAnimSegment1087 = new HAnimSegment();
HAnimSegment1087->setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1087);

HAnimSegment* HAnimSegment1088 = new HAnimSegment();
HAnimSegment1088->setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1088);

HAnimSegment* HAnimSegment1089 = new HAnimSegment();
HAnimSegment1089->setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1089);

HAnimSegment* HAnimSegment1090 = new HAnimSegment();
HAnimSegment1090->setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid43->setSegments(HAnimSegment1090);

HAnimSegment* HAnimSegment1091 = new HAnimSegment();
HAnimSegment1091->setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1091);

HAnimSegment* HAnimSegment1092 = new HAnimSegment();
HAnimSegment1092->setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1092);

HAnimSegment* HAnimSegment1093 = new HAnimSegment();
HAnimSegment1093->setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid43->setSegments(HAnimSegment1093);

HAnimSegment* HAnimSegment1094 = new HAnimSegment();
HAnimSegment1094->setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1094);

HAnimSegment* HAnimSegment1095 = new HAnimSegment();
HAnimSegment1095->setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1095);

HAnimSegment* HAnimSegment1096 = new HAnimSegment();
HAnimSegment1096->setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid43->setSegments(HAnimSegment1096);

HAnimSegment* HAnimSegment1097 = new HAnimSegment();
HAnimSegment1097->setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1097);

HAnimSegment* HAnimSegment1098 = new HAnimSegment();
HAnimSegment1098->setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1098);

HAnimSegment* HAnimSegment1099 = new HAnimSegment();
HAnimSegment1099->setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid43->setSegments(HAnimSegment1099);

HAnimSegment* HAnimSegment1100 = new HAnimSegment();
HAnimSegment1100->setUSE(CString("hanim_r_scapula"));
HAnimHumanoid43->setSegments(HAnimSegment1100);

HAnimSegment* HAnimSegment1101 = new HAnimSegment();
HAnimSegment1101->setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid43->setSegments(HAnimSegment1101);

HAnimSegment* HAnimSegment1102 = new HAnimSegment();
HAnimSegment1102->setUSE(CString("hanim_r_forearm"));
HAnimHumanoid43->setSegments(HAnimSegment1102);

HAnimSegment* HAnimSegment1103 = new HAnimSegment();
HAnimSegment1103->setUSE(CString("hanim_r_carpal"));
HAnimHumanoid43->setSegments(HAnimSegment1103);

HAnimSegment* HAnimSegment1104 = new HAnimSegment();
HAnimSegment1104->setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid43->setSegments(HAnimSegment1104);

HAnimSegment* HAnimSegment1105 = new HAnimSegment();
HAnimSegment1105->setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid43->setSegments(HAnimSegment1105);

HAnimSegment* HAnimSegment1106 = new HAnimSegment();
HAnimSegment1106->setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid43->setSegments(HAnimSegment1106);

HAnimSegment* HAnimSegment1107 = new HAnimSegment();
HAnimSegment1107->setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1107);

HAnimSegment* HAnimSegment1108 = new HAnimSegment();
HAnimSegment1108->setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid43->setSegments(HAnimSegment1108);

HAnimSegment* HAnimSegment1109 = new HAnimSegment();
HAnimSegment1109->setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid43->setSegments(HAnimSegment1109);

HAnimSegment* HAnimSegment1110 = new HAnimSegment();
HAnimSegment1110->setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1110);

HAnimSegment* HAnimSegment1111 = new HAnimSegment();
HAnimSegment1111->setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid43->setSegments(HAnimSegment1111);

HAnimSegment* HAnimSegment1112 = new HAnimSegment();
HAnimSegment1112->setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid43->setSegments(HAnimSegment1112);

HAnimSegment* HAnimSegment1113 = new HAnimSegment();
HAnimSegment1113->setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1113);

HAnimSegment* HAnimSegment1114 = new HAnimSegment();
HAnimSegment1114->setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid43->setSegments(HAnimSegment1114);

HAnimSegment* HAnimSegment1115 = new HAnimSegment();
HAnimSegment1115->setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid43->setSegments(HAnimSegment1115);

HAnimSegment* HAnimSegment1116 = new HAnimSegment();
HAnimSegment1116->setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1116);

HAnimSegment* HAnimSegment1117 = new HAnimSegment();
HAnimSegment1117->setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid43->setSegments(HAnimSegment1117);

HAnimSite* HAnimSite1118 = new HAnimSite();
HAnimSite1118->setUSE(CString("hanim_buttocks_standing_wall_contact_point"));
HAnimHumanoid43->setSites(HAnimSite1118);

HAnimSite* HAnimSite1119 = new HAnimSite();
HAnimSite1119->setUSE(CString("hanim_crotch"));
HAnimHumanoid43->setSites(HAnimSite1119);

HAnimSite* HAnimSite1120 = new HAnimSite();
HAnimSite1120->setUSE(CString("hanim_l_asis"));
HAnimHumanoid43->setSites(HAnimSite1120);

HAnimSite* HAnimSite1121 = new HAnimSite();
HAnimSite1121->setUSE(CString("hanim_l_iliocristale"));
HAnimHumanoid43->setSites(HAnimSite1121);

HAnimSite* HAnimSite1122 = new HAnimSite();
HAnimSite1122->setUSE(CString("hanim_l_psis"));
HAnimHumanoid43->setSites(HAnimSite1122);

HAnimSite* HAnimSite1123 = new HAnimSite();
HAnimSite1123->setUSE(CString("hanim_l_trochanterion"));
HAnimHumanoid43->setSites(HAnimSite1123);

HAnimSite* HAnimSite1124 = new HAnimSite();
HAnimSite1124->setUSE(CString("hanim_r_asis"));
HAnimHumanoid43->setSites(HAnimSite1124);

HAnimSite* HAnimSite1125 = new HAnimSite();
HAnimSite1125->setUSE(CString("hanim_r_iliocristale"));
HAnimHumanoid43->setSites(HAnimSite1125);

HAnimSite* HAnimSite1126 = new HAnimSite();
HAnimSite1126->setUSE(CString("hanim_r_psis"));
HAnimHumanoid43->setSites(HAnimSite1126);

HAnimSite* HAnimSite1127 = new HAnimSite();
HAnimSite1127->setUSE(CString("hanim_r_trochanterion"));
HAnimHumanoid43->setSites(HAnimSite1127);

HAnimSite* HAnimSite1128 = new HAnimSite();
HAnimSite1128->setUSE(CString("hanim_navel"));
HAnimHumanoid43->setSites(HAnimSite1128);

HAnimSite* HAnimSite1129 = new HAnimSite();
HAnimSite1129->setUSE(CString("hanim_waist_preferred_anterior"));
HAnimHumanoid43->setSites(HAnimSite1129);

HAnimSite* HAnimSite1130 = new HAnimSite();
HAnimSite1130->setUSE(CString("hanim_waist_preferred_posterior"));
HAnimHumanoid43->setSites(HAnimSite1130);

HAnimSite* HAnimSite1131 = new HAnimSite();
HAnimSite1131->setUSE(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimHumanoid43->setSites(HAnimSite1131);

HAnimSite* HAnimSite1132 = new HAnimSite();
HAnimSite1132->setUSE(CString("hanim_l_femoral_medial_epicondyles"));
HAnimHumanoid43->setSites(HAnimSite1132);

HAnimSite* HAnimSite1133 = new HAnimSite();
HAnimSite1133->setUSE(CString("hanim_l_knee_crease"));
HAnimHumanoid43->setSites(HAnimSite1133);

HAnimSite* HAnimSite1134 = new HAnimSite();
HAnimSite1134->setUSE(CString("hanim_l_suprapatella"));
HAnimHumanoid43->setSites(HAnimSite1134);

HAnimSite* HAnimSite1135 = new HAnimSite();
HAnimSite1135->setUSE(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimHumanoid43->setSites(HAnimSite1135);

HAnimSite* HAnimSite1136 = new HAnimSite();
HAnimSite1136->setUSE(CString("hanim_r_femoral_medial_epicondyles"));
HAnimHumanoid43->setSites(HAnimSite1136);

HAnimSite* HAnimSite1137 = new HAnimSite();
HAnimSite1137->setUSE(CString("hanim_r_knee_crease"));
HAnimHumanoid43->setSites(HAnimSite1137);

HAnimSite* HAnimSite1138 = new HAnimSite();
HAnimSite1138->setUSE(CString("hanim_r_suprapatella"));
HAnimHumanoid43->setSites(HAnimSite1138);

HAnimSite* HAnimSite1139 = new HAnimSite();
HAnimSite1139->setUSE(CString("hanim_l_lateral_malleolus"));
HAnimHumanoid43->setSites(HAnimSite1139);

HAnimSite* HAnimSite1140 = new HAnimSite();
HAnimSite1140->setUSE(CString("hanim_l_medial_malleolus"));
HAnimHumanoid43->setSites(HAnimSite1140);

HAnimSite* HAnimSite1141 = new HAnimSite();
HAnimSite1141->setUSE(CString("hanim_l_tibiale"));
HAnimHumanoid43->setSites(HAnimSite1141);

HAnimSite* HAnimSite1142 = new HAnimSite();
HAnimSite1142->setUSE(CString("hanim_l_calcaneus_posterior"));
HAnimHumanoid43->setSites(HAnimSite1142);

HAnimSite* HAnimSite1143 = new HAnimSite();
HAnimSite1143->setUSE(CString("hanim_l_sphyrion"));
HAnimHumanoid43->setSites(HAnimSite1143);

HAnimSite* HAnimSite1144 = new HAnimSite();
HAnimSite1144->setUSE(CString("hanim_l_metatarsal_phalanx_1"));
HAnimHumanoid43->setSites(HAnimSite1144);

HAnimSite* HAnimSite1145 = new HAnimSite();
HAnimSite1145->setUSE(CString("hanim_l_metatarsal_phalanx_5"));
HAnimHumanoid43->setSites(HAnimSite1145);

HAnimSite* HAnimSite1146 = new HAnimSite();
HAnimSite1146->setUSE(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43->setSites(HAnimSite1146);

HAnimSite* HAnimSite1147 = new HAnimSite();
HAnimSite1147->setUSE(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43->setSites(HAnimSite1147);

HAnimSite* HAnimSite1148 = new HAnimSite();
HAnimSite1148->setUSE(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43->setSites(HAnimSite1148);

HAnimSite* HAnimSite1149 = new HAnimSite();
HAnimSite1149->setUSE(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43->setSites(HAnimSite1149);

HAnimSite* HAnimSite1150 = new HAnimSite();
HAnimSite1150->setUSE(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43->setSites(HAnimSite1150);

HAnimSite* HAnimSite1151 = new HAnimSite();
HAnimSite1151->setUSE(CString("hanim_r_lateral_malleolus"));
HAnimHumanoid43->setSites(HAnimSite1151);

HAnimSite* HAnimSite1152 = new HAnimSite();
HAnimSite1152->setUSE(CString("hanim_r_medial_malleolus"));
HAnimHumanoid43->setSites(HAnimSite1152);

HAnimSite* HAnimSite1153 = new HAnimSite();
HAnimSite1153->setUSE(CString("hanim_r_tibiale"));
HAnimHumanoid43->setSites(HAnimSite1153);

HAnimSite* HAnimSite1154 = new HAnimSite();
HAnimSite1154->setUSE(CString("hanim_r_calcaneus_posterior"));
HAnimHumanoid43->setSites(HAnimSite1154);

HAnimSite* HAnimSite1155 = new HAnimSite();
HAnimSite1155->setUSE(CString("hanim_r_sphyrion"));
HAnimHumanoid43->setSites(HAnimSite1155);

HAnimSite* HAnimSite1156 = new HAnimSite();
HAnimSite1156->setUSE(CString("hanim_r_metatarsal_phalanx_1"));
HAnimHumanoid43->setSites(HAnimSite1156);

HAnimSite* HAnimSite1157 = new HAnimSite();
HAnimSite1157->setUSE(CString("hanim_r_metatarsal_phalanx_5"));
HAnimHumanoid43->setSites(HAnimSite1157);

HAnimSite* HAnimSite1158 = new HAnimSite();
HAnimSite1158->setUSE(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43->setSites(HAnimSite1158);

HAnimSite* HAnimSite1159 = new HAnimSite();
HAnimSite1159->setUSE(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43->setSites(HAnimSite1159);

HAnimSite* HAnimSite1160 = new HAnimSite();
HAnimSite1160->setUSE(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43->setSites(HAnimSite1160);

HAnimSite* HAnimSite1161 = new HAnimSite();
HAnimSite1161->setUSE(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43->setSites(HAnimSite1161);

HAnimSite* HAnimSite1162 = new HAnimSite();
HAnimSite1162->setUSE(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43->setSites(HAnimSite1162);

HAnimSite* HAnimSite1163 = new HAnimSite();
HAnimSite1163->setUSE(CString("hanim_l_rib10"));
HAnimHumanoid43->setSites(HAnimSite1163);

HAnimSite* HAnimSite1164 = new HAnimSite();
HAnimSite1164->setUSE(CString("hanim_r_rib10"));
HAnimHumanoid43->setSites(HAnimSite1164);

HAnimSite* HAnimSite1165 = new HAnimSite();
HAnimSite1165->setUSE(CString("hanim_spine_1_middle_back"));
HAnimHumanoid43->setSites(HAnimSite1165);

HAnimSite* HAnimSite1166 = new HAnimSite();
HAnimSite1166->setUSE(CString("hanim_spine_2_middle_back"));
HAnimHumanoid43->setSites(HAnimSite1166);

HAnimSite* HAnimSite1167 = new HAnimSite();
HAnimSite1167->setUSE(CString("hanim_l_thelion"));
HAnimHumanoid43->setSites(HAnimSite1167);

HAnimSite* HAnimSite1168 = new HAnimSite();
HAnimSite1168->setUSE(CString("hanim_r_thelion"));
HAnimHumanoid43->setSites(HAnimSite1168);

HAnimSite* HAnimSite1169 = new HAnimSite();
HAnimSite1169->setUSE(CString("hanim_substernale"));
HAnimHumanoid43->setSites(HAnimSite1169);

HAnimSite* HAnimSite1170 = new HAnimSite();
HAnimSite1170->setUSE(CString("hanim_l_chest_midsagittal_plane"));
HAnimHumanoid43->setSites(HAnimSite1170);

HAnimSite* HAnimSite1171 = new HAnimSite();
HAnimSite1171->setUSE(CString("hanim_mesosternale"));
HAnimHumanoid43->setSites(HAnimSite1171);

HAnimSite* HAnimSite1172 = new HAnimSite();
HAnimSite1172->setUSE(CString("hanim_r_chest_midsagittal_plane"));
HAnimHumanoid43->setSites(HAnimSite1172);

HAnimSite* HAnimSite1173 = new HAnimSite();
HAnimSite1173->setUSE(CString("hanim_rear_center_midsagittal_plane"));
HAnimHumanoid43->setSites(HAnimSite1173);

HAnimSite* HAnimSite1174 = new HAnimSite();
HAnimSite1174->setUSE(CString("hanim_cervicale"));
HAnimHumanoid43->setSites(HAnimSite1174);

HAnimSite* HAnimSite1175 = new HAnimSite();
HAnimSite1175->setUSE(CString("hanim_l_neck_base"));
HAnimHumanoid43->setSites(HAnimSite1175);

HAnimSite* HAnimSite1176 = new HAnimSite();
HAnimSite1176->setUSE(CString("hanim_r_neck_base"));
HAnimHumanoid43->setSites(HAnimSite1176);

HAnimSite* HAnimSite1177 = new HAnimSite();
HAnimSite1177->setUSE(CString("hanim_suprasternale"));
HAnimHumanoid43->setSites(HAnimSite1177);

HAnimSite* HAnimSite1178 = new HAnimSite();
HAnimSite1178->setUSE(CString("hanim_l_acromion"));
HAnimHumanoid43->setSites(HAnimSite1178);

HAnimSite* HAnimSite1179 = new HAnimSite();
HAnimSite1179->setUSE(CString("hanim_l_axilla_distal_pt"));
HAnimHumanoid43->setSites(HAnimSite1179);

HAnimSite* HAnimSite1180 = new HAnimSite();
HAnimSite1180->setUSE(CString("hanim_l_axilla_posterior_folds"));
HAnimHumanoid43->setSites(HAnimSite1180);

HAnimSite* HAnimSite1181 = new HAnimSite();
HAnimSite1181->setUSE(CString("hanim_l_axilla_proximal"));
HAnimHumanoid43->setSites(HAnimSite1181);

HAnimSite* HAnimSite1182 = new HAnimSite();
HAnimSite1182->setUSE(CString("hanim_l_clavicale"));
HAnimHumanoid43->setSites(HAnimSite1182);

HAnimSite* HAnimSite1183 = new HAnimSite();
HAnimSite1183->setUSE(CString("hanim_r_acromion"));
HAnimHumanoid43->setSites(HAnimSite1183);

HAnimSite* HAnimSite1184 = new HAnimSite();
HAnimSite1184->setUSE(CString("hanim_r_axilla_distal_pt"));
HAnimHumanoid43->setSites(HAnimSite1184);

HAnimSite* HAnimSite1185 = new HAnimSite();
HAnimSite1185->setUSE(CString("hanim_r_axilla_posterior_folds"));
HAnimHumanoid43->setSites(HAnimSite1185);

HAnimSite* HAnimSite1186 = new HAnimSite();
HAnimSite1186->setUSE(CString("hanim_r_axilla_proximal"));
HAnimHumanoid43->setSites(HAnimSite1186);

HAnimSite* HAnimSite1187 = new HAnimSite();
HAnimSite1187->setUSE(CString("hanim_r_clavicale"));
HAnimHumanoid43->setSites(HAnimSite1187);

HAnimSite* HAnimSite1188 = new HAnimSite();
HAnimSite1188->setUSE(CString("hanim_adams_apple"));
HAnimHumanoid43->setSites(HAnimSite1188);

HAnimSite* HAnimSite1189 = new HAnimSite();
HAnimSite1189->setUSE(CString("hanim_glabella"));
HAnimHumanoid43->setSites(HAnimSite1189);

HAnimSite* HAnimSite1190 = new HAnimSite();
HAnimSite1190->setUSE(CString("hanim_l_ectocanthus"));
HAnimHumanoid43->setSites(HAnimSite1190);

HAnimSite* HAnimSite1191 = new HAnimSite();
HAnimSite1191->setUSE(CString("hanim_l_gonion"));
HAnimHumanoid43->setSites(HAnimSite1191);

HAnimSite* HAnimSite1192 = new HAnimSite();
HAnimSite1192->setUSE(CString("hanim_l_infraorbitale"));
HAnimHumanoid43->setSites(HAnimSite1192);

HAnimSite* HAnimSite1193 = new HAnimSite();
HAnimSite1193->setUSE(CString("hanim_l_tragion"));
HAnimHumanoid43->setSites(HAnimSite1193);

HAnimSite* HAnimSite1194 = new HAnimSite();
HAnimSite1194->setUSE(CString("hanim_menton"));
HAnimHumanoid43->setSites(HAnimSite1194);

HAnimSite* HAnimSite1195 = new HAnimSite();
HAnimSite1195->setUSE(CString("hanim_nuchale"));
HAnimHumanoid43->setSites(HAnimSite1195);

HAnimSite* HAnimSite1196 = new HAnimSite();
HAnimSite1196->setUSE(CString("hanim_opisthocranion"));
HAnimHumanoid43->setSites(HAnimSite1196);

HAnimSite* HAnimSite1197 = new HAnimSite();
HAnimSite1197->setUSE(CString("hanim_r_ectocanthus"));
HAnimHumanoid43->setSites(HAnimSite1197);

HAnimSite* HAnimSite1198 = new HAnimSite();
HAnimSite1198->setUSE(CString("hanim_r_gonion"));
HAnimHumanoid43->setSites(HAnimSite1198);

HAnimSite* HAnimSite1199 = new HAnimSite();
HAnimSite1199->setUSE(CString("hanim_r_infraorbitale"));
HAnimHumanoid43->setSites(HAnimSite1199);

HAnimSite* HAnimSite1200 = new HAnimSite();
HAnimSite1200->setUSE(CString("hanim_r_tragion"));
HAnimHumanoid43->setSites(HAnimSite1200);

HAnimSite* HAnimSite1201 = new HAnimSite();
HAnimSite1201->setUSE(CString("hanim_sellion"));
HAnimHumanoid43->setSites(HAnimSite1201);

HAnimSite* HAnimSite1202 = new HAnimSite();
HAnimSite1202->setUSE(CString("hanim_skull_vertex"));
HAnimHumanoid43->setSites(HAnimSite1202);

HAnimSite* HAnimSite1203 = new HAnimSite();
HAnimSite1203->setUSE(CString("hanim_supramenton"));
HAnimHumanoid43->setSites(HAnimSite1203);

HAnimSite* HAnimSite1204 = new HAnimSite();
HAnimSite1204->setUSE(CString("hanim_l_bideltoid"));
HAnimHumanoid43->setSites(HAnimSite1204);

HAnimSite* HAnimSite1205 = new HAnimSite();
HAnimSite1205->setUSE(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimHumanoid43->setSites(HAnimSite1205);

HAnimSite* HAnimSite1206 = new HAnimSite();
HAnimSite1206->setUSE(CString("hanim_l_humeral_medial_epicondyles"));
HAnimHumanoid43->setSites(HAnimSite1206);

HAnimSite* HAnimSite1207 = new HAnimSite();
HAnimSite1207->setUSE(CString("hanim_l_olecranon"));
HAnimHumanoid43->setSites(HAnimSite1207);

HAnimSite* HAnimSite1208 = new HAnimSite();
HAnimSite1208->setUSE(CString("hanim_l_radial_styloid"));
HAnimHumanoid43->setSites(HAnimSite1208);

HAnimSite* HAnimSite1209 = new HAnimSite();
HAnimSite1209->setUSE(CString("hanim_l_radiale"));
HAnimHumanoid43->setSites(HAnimSite1209);

HAnimSite* HAnimSite1210 = new HAnimSite();
HAnimSite1210->setUSE(CString("hanim_l_ulnar_styloid"));
HAnimHumanoid43->setSites(HAnimSite1210);

HAnimSite* HAnimSite1211 = new HAnimSite();
HAnimSite1211->setUSE(CString("hanim_l_metacarpal_phalanx_2"));
HAnimHumanoid43->setSites(HAnimSite1211);

HAnimSite* HAnimSite1212 = new HAnimSite();
HAnimSite1212->setUSE(CString("hanim_l_metacarpal_phalanx_3"));
HAnimHumanoid43->setSites(HAnimSite1212);

HAnimSite* HAnimSite1213 = new HAnimSite();
HAnimSite1213->setUSE(CString("hanim_l_metacarpal_phalanx_5"));
HAnimHumanoid43->setSites(HAnimSite1213);

HAnimSite* HAnimSite1214 = new HAnimSite();
HAnimSite1214->setUSE(CString("hanim_l_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43->setSites(HAnimSite1214);

HAnimSite* HAnimSite1215 = new HAnimSite();
HAnimSite1215->setUSE(CString("hanim_l_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43->setSites(HAnimSite1215);

HAnimSite* HAnimSite1216 = new HAnimSite();
HAnimSite1216->setUSE(CString("hanim_l_dactylion"));
HAnimHumanoid43->setSites(HAnimSite1216);

HAnimSite* HAnimSite1217 = new HAnimSite();
HAnimSite1217->setUSE(CString("hanim_l_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43->setSites(HAnimSite1217);

HAnimSite* HAnimSite1218 = new HAnimSite();
HAnimSite1218->setUSE(CString("hanim_l_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43->setSites(HAnimSite1218);

HAnimSite* HAnimSite1219 = new HAnimSite();
HAnimSite1219->setUSE(CString("hanim_l_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43->setSites(HAnimSite1219);

HAnimSite* HAnimSite1220 = new HAnimSite();
HAnimSite1220->setUSE(CString("hanim_r_bideltoid"));
HAnimHumanoid43->setSites(HAnimSite1220);

HAnimSite* HAnimSite1221 = new HAnimSite();
HAnimSite1221->setUSE(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimHumanoid43->setSites(HAnimSite1221);

HAnimSite* HAnimSite1222 = new HAnimSite();
HAnimSite1222->setUSE(CString("hanim_r_humeral_medial_epicondyles"));
HAnimHumanoid43->setSites(HAnimSite1222);

HAnimSite* HAnimSite1223 = new HAnimSite();
HAnimSite1223->setUSE(CString("hanim_r_olecranon"));
HAnimHumanoid43->setSites(HAnimSite1223);

HAnimSite* HAnimSite1224 = new HAnimSite();
HAnimSite1224->setUSE(CString("hanim_r_radial_styloid"));
HAnimHumanoid43->setSites(HAnimSite1224);

HAnimSite* HAnimSite1225 = new HAnimSite();
HAnimSite1225->setUSE(CString("hanim_r_radiale"));
HAnimHumanoid43->setSites(HAnimSite1225);

HAnimSite* HAnimSite1226 = new HAnimSite();
HAnimSite1226->setUSE(CString("hanim_r_ulnar_styloid"));
HAnimHumanoid43->setSites(HAnimSite1226);

HAnimSite* HAnimSite1227 = new HAnimSite();
HAnimSite1227->setUSE(CString("hanim_r_metacarpal_phalanx_2"));
HAnimHumanoid43->setSites(HAnimSite1227);

HAnimSite* HAnimSite1228 = new HAnimSite();
HAnimSite1228->setUSE(CString("hanim_r_metacarpal_phalanx_3"));
HAnimHumanoid43->setSites(HAnimSite1228);

HAnimSite* HAnimSite1229 = new HAnimSite();
HAnimSite1229->setUSE(CString("hanim_r_metacarpal_phalanx_5"));
HAnimHumanoid43->setSites(HAnimSite1229);

HAnimSite* HAnimSite1230 = new HAnimSite();
HAnimSite1230->setUSE(CString("hanim_r_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43->setSites(HAnimSite1230);

HAnimSite* HAnimSite1231 = new HAnimSite();
HAnimSite1231->setUSE(CString("hanim_r_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43->setSites(HAnimSite1231);

HAnimSite* HAnimSite1232 = new HAnimSite();
HAnimSite1232->setUSE(CString("hanim_r_dactylion"));
HAnimHumanoid43->setSites(HAnimSite1232);

HAnimSite* HAnimSite1233 = new HAnimSite();
HAnimSite1233->setUSE(CString("hanim_r_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43->setSites(HAnimSite1233);

HAnimSite* HAnimSite1234 = new HAnimSite();
HAnimSite1234->setUSE(CString("hanim_r_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43->setSites(HAnimSite1234);

HAnimSite* HAnimSite1235 = new HAnimSite();
HAnimSite1235->setUSE(CString("hanim_r_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43->setSites(HAnimSite1235);

Scene11->addChild(HAnimHumanoid43);

X3D0->setScene(Scene11);

}
