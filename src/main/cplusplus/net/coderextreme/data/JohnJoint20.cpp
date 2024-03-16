/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
head* head1 = new head();
component* component2 = new component();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(component2);

meta* meta3 = new meta();
meta3->setName("title");
meta3->setContent("JohnJoint20.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("identifier");
meta4->setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint20.x3d");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("description");
meta5->setContent("An attempt at a standard LOA-4 skeleton");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("generator");
meta6->setContent("h2.pl");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("modified");
meta7->setContent("20 Jan 2023");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("creator");
meta8->setContent("John Carlson");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("created");
meta9->setContent("9 November 2020");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("license");
meta10->setContent("../license.html");
head1->addMeta(meta10);

X3D0->setHead(head1);

Scene* Scene11 = new Scene();
Transform* Transform12 = new Transform();
//DEF for markerfor XYZ axes
Shape* Shape13 = new Shape();
Shape13->setDEF("AxisLinesShape");
//RGB lines showing XYZ axes
IndexedLineSet* IndexedLineSet14 = new IndexedLineSet();
IndexedLineSet14->setColorIndex(new int[3]{0,1,2});
IndexedLineSet14->setColorPerVertex(False);
IndexedLineSet14->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
Coordinate* Coordinate15 = new Coordinate();
Coordinate15->setPoint(new float[12]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1});
IndexedLineSet14->setCoord(Coordinate15);

Color* Color16 = new Color();
Color16->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet14->setColor(Color16);

Shape13->setGeometry(IndexedLineSet14);

Transform12->addChild(Shape13);

Scene11->addChild(Transform12);

Group* Group17 = new Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform* Transform18 = new Transform();
Transform* Transform19 = new Transform();
Transform19->setTranslation(new float[3]{0,2,0});
Shape* Shape20 = new Shape();
Shape20->setDEF("HAnimRootShape");
Sphere* Sphere21 = new Sphere();
Sphere21->setRadius(0.02);
Shape20->setGeometry(Sphere21);

Appearance* Appearance22 = new Appearance();
Material* Material23 = new Material();
Material23->setDEF("HAnimRootMaterial");
Material23->setDiffuseColor(new float[3]{0.8,0,0});
Material23->setTransparency(0.3);
Appearance22->setMaterial(Material23);

Shape20->setAppearance(Appearance22);

Transform19->addChild(Shape20);

Transform18->addChild(Transform19);

Transform* Transform24 = new Transform();
Transform24->setTranslation(new float[3]{0,2.1,0});
Shape* Shape25 = new Shape();
Shape25->setDEF("HAnimJointShape");
Sphere* Sphere26 = new Sphere();
Sphere26->setRadius(0.02);
Shape25->setGeometry(Sphere26);

Appearance* Appearance27 = new Appearance();
Material* Material28 = new Material();
Material28->setDEF("HAnimJointMaterial");
Material28->setDiffuseColor(new float[3]{0,0,0.8});
Material28->setTransparency(0.3);
Appearance27->setMaterial(Material28);

Shape25->setAppearance(Appearance27);

Transform24->addChild(Shape25);

Transform18->addChild(Transform24);

Transform* Transform29 = new Transform();
Transform29->setTranslation(new float[3]{0,2.05,0});
Shape* Shape30 = new Shape();
Shape30->setDEF("HAnimSegmentLine");
LineSet* LineSet31 = new LineSet();
LineSet31->setVertexCount(new int[1]{2});
ColorRGBA* ColorRGBA32 = new ColorRGBA();
ColorRGBA32->setDEF("HAnimSegmentLineColorRGBA");
ColorRGBA32->setColor(new float[8]{1,1,0,1,1,1,0,0.1});
LineSet31->setColor(ColorRGBA32);

Coordinate* Coordinate33 = new Coordinate();
Coordinate33->setPoint(new float[6]{-0.05,0,0,0.05,0,0});
LineSet31->setCoord(Coordinate33);

Shape30->setGeometry(LineSet31);

Transform29->addChild(Shape30);

Transform18->addChild(Transform29);

Transform* Transform34 = new Transform();
Transform34->setTranslation(new float[3]{0,2.1,0});
Shape* Shape35 = new Shape();
Shape35->setDEF("HAnimSiteShape");
IndexedFaceSet* IndexedFaceSet36 = new IndexedFaceSet();
IndexedFaceSet36->setDEF("DiamondIFS");
IndexedFaceSet36->setCreaseAngle(0.5);
IndexedFaceSet36->setSolid(False);
IndexedFaceSet36->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
ColorRGBA* ColorRGBA37 = new ColorRGBA();
ColorRGBA37->setDEF("HAnimSiteColorRGBA");
ColorRGBA37->setColor(new float[24]{1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1});
IndexedFaceSet36->setColor(ColorRGBA37);

Coordinate* Coordinate38 = new Coordinate();
Coordinate38->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet36->setCoord(Coordinate38);

Shape35->setGeometry(IndexedFaceSet36);

Appearance* Appearance39 = new Appearance();
Material* Material40 = new Material();
Material40->setDiffuseColor(new float[3]{1,1,0});
Material40->setTransparency(0.3);
Appearance39->setMaterial(Material40);

Shape35->setAppearance(Appearance39);

Transform34->addChild(Shape35);

Transform18->addChild(Transform34);

Group17->addChild(Transform18);

Scene11->addChild(Group17);

NavigationInfo* NavigationInfo41 = new NavigationInfo();
NavigationInfo41->setSpeed(1.5);
Scene11->addChild(NavigationInfo41);

Viewpoint* Viewpoint42 = new Viewpoint();
Viewpoint42->setDescription("default");
Scene11->addChild(Viewpoint42);

HAnimHumanoid* HAnimHumanoid43 = new HAnimHumanoid();
HAnimHumanoid43->setName("HAnim");
HAnimHumanoid43->setDEF("hanim_HAnim");
HAnimHumanoid43->setInfo(new String[1]{"humanoidVersion=2.0"}, 1);
HAnimHumanoid43->setVersion("2.0");
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
Shape* Shape44 = new Shape();
Shape44->setDEF("SkinShape");
IndexedFaceSet* IndexedFaceSet45 = new IndexedFaceSet();
IndexedFaceSet45->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
IndexedFaceSet45->setCreaseAngle(3.1);
Coordinate* Coordinate46 = new Coordinate();
Coordinate46->setDEF("TheSkinCoord");
Coordinate46->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
IndexedFaceSet45->setCoord(Coordinate46);

Color* Color47 = new Color();
Color47->setColor(new float[2079]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1});
IndexedFaceSet45->setColor(Color47);

Shape44->setGeometry(IndexedFaceSet45);

Appearance* Appearance48 = new Appearance();
Appearance48->setDEF("SkinAppearance");
ImageTexture* ImageTexture49 = new ImageTexture();
ImageTexture49->setDEF("zBlueSpiralBkg2");
ImageTexture49->setUrl(new String[4]{"../resources/images/zBlueSpiralBkg2.gif","../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"}, 4);
Appearance48->setTexture(ImageTexture49);

Material* Material50 = new Material();
Material50->setDEF("SkinMaterial");
Material50->setAmbientIntensity(0.6);
Material50->setDiffuseColor(new float[3]{1,1,1});
Material50->setShininess(0.6);
Material50->setTransparency(0.2);
Appearance48->setMaterial(Material50);

Shape44->setAppearance(Appearance48);

HAnimHumanoid43->setSkin(Shape44);

Coordinate* Coordinate51 = new Coordinate();
Coordinate51->setUSE("TheSkinCoord");
HAnimHumanoid43->setSkinCoord(Coordinate51);

HAnimJoint* HAnimJoint52 = new HAnimJoint();
HAnimJoint52->setName("humanoid_root");
HAnimJoint52->setDEF("hanim_humanoid_root");
HAnimJoint52->setCenter(new float[3]{0,0.824,0.0277});
HAnimSegment* HAnimSegment53 = new HAnimSegment();
HAnimSegment53->setName("sacrum");
HAnimSegment53->setDEF("hanim_sacrum");
HAnimDisplacer* HAnimDisplacer54 = new HAnimDisplacer();
HAnimDisplacer54->setName("sacrum_feature");
HAnimDisplacer54->setCoordIndex(new int[1]{0});
HAnimDisplacer54->setDisplacements(new float[3]{0,0,0});
HAnimSegment53->addDisplacers(HAnimDisplacer54);

HAnimDisplacer* HAnimDisplacer55 = new HAnimDisplacer();
HAnimDisplacer55->setName("sacrum_config");
HAnimDisplacer55->setCoordIndex(new int[1]{0});
HAnimDisplacer55->setDisplacements(new float[3]{0,0,0});
HAnimSegment53->addDisplacers(HAnimDisplacer55);

Transform* Transform56 = new Transform();
//Empty Transform
Transform* Transform57 = new Transform();
//Empty Transform
Shape* Shape58 = new Shape();
Shape58->setUSE("HAnimJointShape");
Transform57->addChild(Shape58);

Transform56->addChild(Transform57);

HAnimSegment53->addChild(Transform56);

Shape* Shape59 = new Shape();
LineSet* LineSet60 = new LineSet();
LineSet60->setVertexCount(new int[1]{2});
Coordinate* Coordinate61 = new Coordinate();
Coordinate61->setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016});
LineSet60->setCoord(Coordinate61);

//from humanoid_root to sacroiliac vertices 2
ColorRGBA* ColorRGBA62 = new ColorRGBA();
ColorRGBA62->setUSE("HAnimSegmentLineColorRGBA");
LineSet60->setColor(ColorRGBA62);

Shape59->setGeometry(LineSet60);

HAnimSegment53->addChild(Shape59);

HAnimSite* HAnimSite63 = new HAnimSite();
HAnimSite63->setName("buttocks_standing_wall_contact_point_pt");
HAnimSite63->setDEF("hanim_buttocks_standing_wall_contact_point_pt");
HAnimSite63->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor64 = new TouchSensor();
TouchSensor64->setDescription("HAnimSite buttocks_standing_wall_contact_point_pt");
HAnimSite63->addChild(TouchSensor64);

Shape* Shape65 = new Shape();
Shape65->setUSE("HAnimSiteShape");
HAnimSite63->addChild(Shape65);

HAnimSegment53->addChild(HAnimSite63);

HAnimSite* HAnimSite66 = new HAnimSite();
HAnimSite66->setName("crotch_pt");
HAnimSite66->setDEF("hanim_crotch_pt");
HAnimSite66->setTranslation(new float[3]{0.0034,0.8266,0.0257});
TouchSensor* TouchSensor67 = new TouchSensor();
TouchSensor67->setDescription("HAnimSite crotch_pt");
HAnimSite66->addChild(TouchSensor67);

Shape* Shape68 = new Shape();
Shape68->setUSE("HAnimSiteShape");
HAnimSite66->addChild(Shape68);

HAnimSegment53->addChild(HAnimSite66);

HAnimSite* HAnimSite69 = new HAnimSite();
HAnimSite69->setName("l_asis_pt");
HAnimSite69->setDEF("hanim_l_asis_pt");
HAnimSite69->setTranslation(new float[3]{0.0925,0.9983,0.1052});
TouchSensor* TouchSensor70 = new TouchSensor();
TouchSensor70->setDescription("HAnimSite l_asis_pt");
HAnimSite69->addChild(TouchSensor70);

Shape* Shape71 = new Shape();
Shape71->setUSE("HAnimSiteShape");
HAnimSite69->addChild(Shape71);

HAnimSegment53->addChild(HAnimSite69);

HAnimSite* HAnimSite72 = new HAnimSite();
HAnimSite72->setName("l_iliocristale_pt");
HAnimSite72->setDEF("hanim_l_iliocristale_pt");
HAnimSite72->setTranslation(new float[3]{0.1612,1.0537,0.0008});
TouchSensor* TouchSensor73 = new TouchSensor();
TouchSensor73->setDescription("HAnimSite l_iliocristale_pt");
HAnimSite72->addChild(TouchSensor73);

Shape* Shape74 = new Shape();
Shape74->setUSE("HAnimSiteShape");
HAnimSite72->addChild(Shape74);

HAnimSegment53->addChild(HAnimSite72);

HAnimSite* HAnimSite75 = new HAnimSite();
HAnimSite75->setName("l_psis_pt");
HAnimSite75->setDEF("hanim_l_psis_pt");
HAnimSite75->setTranslation(new float[3]{0.0774,1.019,-0.1151});
TouchSensor* TouchSensor76 = new TouchSensor();
TouchSensor76->setDescription("HAnimSite l_psis_pt");
HAnimSite75->addChild(TouchSensor76);

Shape* Shape77 = new Shape();
Shape77->setUSE("HAnimSiteShape");
HAnimSite75->addChild(Shape77);

HAnimSegment53->addChild(HAnimSite75);

HAnimSite* HAnimSite78 = new HAnimSite();
HAnimSite78->setName("l_trochanterion_pt");
HAnimSite78->setDEF("hanim_l_trochanterion_pt");
HAnimSite78->setTranslation(new float[3]{0.1677,0.8336,0.0303});
TouchSensor* TouchSensor79 = new TouchSensor();
TouchSensor79->setDescription("HAnimSite l_trochanterion_pt");
HAnimSite78->addChild(TouchSensor79);

Shape* Shape80 = new Shape();
Shape80->setUSE("HAnimSiteShape");
HAnimSite78->addChild(Shape80);

HAnimSegment53->addChild(HAnimSite78);

HAnimSite* HAnimSite81 = new HAnimSite();
HAnimSite81->setName("r_asis_pt");
HAnimSite81->setDEF("hanim_r_asis_pt");
HAnimSite81->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
TouchSensor* TouchSensor82 = new TouchSensor();
TouchSensor82->setDescription("HAnimSite r_asis_pt");
HAnimSite81->addChild(TouchSensor82);

Shape* Shape83 = new Shape();
Shape83->setUSE("HAnimSiteShape");
HAnimSite81->addChild(Shape83);

HAnimSegment53->addChild(HAnimSite81);

HAnimSite* HAnimSite84 = new HAnimSite();
HAnimSite84->setName("r_iliocristale_pt");
HAnimSite84->setDEF("hanim_r_iliocristale_pt");
HAnimSite84->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
TouchSensor* TouchSensor85 = new TouchSensor();
TouchSensor85->setDescription("HAnimSite r_iliocristale_pt");
HAnimSite84->addChild(TouchSensor85);

Shape* Shape86 = new Shape();
Shape86->setUSE("HAnimSiteShape");
HAnimSite84->addChild(Shape86);

HAnimSegment53->addChild(HAnimSite84);

HAnimSite* HAnimSite87 = new HAnimSite();
HAnimSite87->setName("r_psis_pt");
HAnimSite87->setDEF("hanim_r_psis_pt");
HAnimSite87->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
TouchSensor* TouchSensor88 = new TouchSensor();
TouchSensor88->setDescription("HAnimSite r_psis_pt");
HAnimSite87->addChild(TouchSensor88);

Shape* Shape89 = new Shape();
Shape89->setUSE("HAnimSiteShape");
HAnimSite87->addChild(Shape89);

HAnimSegment53->addChild(HAnimSite87);

HAnimSite* HAnimSite90 = new HAnimSite();
HAnimSite90->setName("r_trochanterion_pt");
HAnimSite90->setDEF("hanim_r_trochanterion_pt");
HAnimSite90->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
TouchSensor* TouchSensor91 = new TouchSensor();
TouchSensor91->setDescription("HAnimSite r_trochanterion_pt");
HAnimSite90->addChild(TouchSensor91);

Shape* Shape92 = new Shape();
Shape92->setUSE("HAnimSiteShape");
HAnimSite90->addChild(Shape92);

HAnimSegment53->addChild(HAnimSite90);

Shape* Shape93 = new Shape();
LineSet* LineSet94 = new LineSet();
LineSet94->setVertexCount(new int[1]{2});
Coordinate* Coordinate95 = new Coordinate();
Coordinate95->setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776});
LineSet94->setCoord(Coordinate95);

//from humanoid_root to vl5 vertices 2
ColorRGBA* ColorRGBA96 = new ColorRGBA();
ColorRGBA96->setUSE("HAnimSegmentLineColorRGBA");
LineSet94->setColor(ColorRGBA96);

Shape93->setGeometry(LineSet94);

HAnimSegment53->addChild(Shape93);

HAnimSite* HAnimSite97 = new HAnimSite();
HAnimSite97->setName("navel_pt");
HAnimSite97->setDEF("hanim_navel_pt");
HAnimSite97->setTranslation(new float[3]{0.0069,1.0966,0.1017});
TouchSensor* TouchSensor98 = new TouchSensor();
TouchSensor98->setDescription("HAnimSite navel_pt");
HAnimSite97->addChild(TouchSensor98);

Shape* Shape99 = new Shape();
Shape99->setUSE("HAnimSiteShape");
HAnimSite97->addChild(Shape99);

HAnimSegment53->addChild(HAnimSite97);

HAnimSite* HAnimSite100 = new HAnimSite();
HAnimSite100->setName("waist_preferred_anterior_pt");
HAnimSite100->setDEF("hanim_waist_preferred_anterior_pt");
HAnimSite100->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor101 = new TouchSensor();
TouchSensor101->setDescription("HAnimSite waist_preferred_anterior_pt");
HAnimSite100->addChild(TouchSensor101);

Shape* Shape102 = new Shape();
Shape102->setUSE("HAnimSiteShape");
HAnimSite100->addChild(Shape102);

HAnimSegment53->addChild(HAnimSite100);

HAnimSite* HAnimSite103 = new HAnimSite();
HAnimSite103->setName("waist_preferred_posterior_pt");
HAnimSite103->setDEF("hanim_waist_preferred_posterior_pt");
HAnimSite103->setTranslation(new float[3]{0.29,1.0915,-0.1091});
TouchSensor* TouchSensor104 = new TouchSensor();
TouchSensor104->setDescription("HAnimSite waist_preferred_posterior_pt");
HAnimSite103->addChild(TouchSensor104);

Shape* Shape105 = new Shape();
Shape105->setUSE("HAnimSiteShape");
HAnimSite103->addChild(Shape105);

HAnimSegment53->addChild(HAnimSite103);

HAnimJoint52->addChild(HAnimSegment53);

HAnimJoint* HAnimJoint106 = new HAnimJoint();
HAnimJoint106->setName("sacroiliac");
HAnimJoint106->setDEF("hanim_sacroiliac");
HAnimJoint106->setCenter(new float[3]{0,0.9149,0.0016});
HAnimSegment* HAnimSegment107 = new HAnimSegment();
HAnimSegment107->setName("pelvis");
HAnimSegment107->setDEF("hanim_pelvis");
Transform* Transform108 = new Transform();
//Empty Transform
Transform* Transform109 = new Transform();
//Empty Transform
Shape* Shape110 = new Shape();
Shape110->setUSE("HAnimJointShape");
Transform109->addChild(Shape110);

Transform108->addChild(Transform109);

HAnimSegment107->addChild(Transform108);

Shape* Shape111 = new Shape();
LineSet* LineSet112 = new LineSet();
LineSet112->setVertexCount(new int[1]{2});
Coordinate* Coordinate113 = new Coordinate();
Coordinate113->setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001});
LineSet112->setCoord(Coordinate113);

//from sacroiliac to l_hip vertices 2
ColorRGBA* ColorRGBA114 = new ColorRGBA();
ColorRGBA114->setUSE("HAnimSegmentLineColorRGBA");
LineSet112->setColor(ColorRGBA114);

Shape111->setGeometry(LineSet112);

HAnimSegment107->addChild(Shape111);

HAnimSite* HAnimSite115 = new HAnimSite();
HAnimSite115->setName("l_femoral_lateral_epicondyles_pt");
HAnimSite115->setDEF("hanim_l_femoral_lateral_epicondyles_pt");
HAnimSite115->setTranslation(new float[3]{0.1598,0.4967,0.0297});
TouchSensor* TouchSensor116 = new TouchSensor();
TouchSensor116->setDescription("HAnimSite l_femoral_lateral_epicondyles_pt");
HAnimSite115->addChild(TouchSensor116);

Shape* Shape117 = new Shape();
Shape117->setUSE("HAnimSiteShape");
HAnimSite115->addChild(Shape117);

HAnimSegment107->addChild(HAnimSite115);

HAnimSite* HAnimSite118 = new HAnimSite();
HAnimSite118->setName("l_femoral_medial_epicondyles_pt");
HAnimSite118->setDEF("hanim_l_femoral_medial_epicondyles_pt");
HAnimSite118->setTranslation(new float[3]{0.0398,0.4946,0.0303});
TouchSensor* TouchSensor119 = new TouchSensor();
TouchSensor119->setDescription("HAnimSite l_femoral_medial_epicondyles_pt");
HAnimSite118->addChild(TouchSensor119);

Shape* Shape120 = new Shape();
Shape120->setUSE("HAnimSiteShape");
HAnimSite118->addChild(Shape120);

HAnimSegment107->addChild(HAnimSite118);

HAnimSite* HAnimSite121 = new HAnimSite();
HAnimSite121->setName("l_knee_crease_pt");
HAnimSite121->setDEF("hanim_l_knee_crease_pt");
HAnimSite121->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
TouchSensor* TouchSensor122 = new TouchSensor();
TouchSensor122->setDescription("HAnimSite l_knee_crease_pt");
HAnimSite121->addChild(TouchSensor122);

Shape* Shape123 = new Shape();
Shape123->setUSE("HAnimSiteShape");
HAnimSite121->addChild(Shape123);

HAnimSegment107->addChild(HAnimSite121);

HAnimSite* HAnimSite124 = new HAnimSite();
HAnimSite124->setName("l_suprapatella_pt");
HAnimSite124->setDEF("hanim_l_suprapatella_pt");
HAnimSite124->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor125 = new TouchSensor();
TouchSensor125->setDescription("HAnimSite l_suprapatella_pt");
HAnimSite124->addChild(TouchSensor125);

Shape* Shape126 = new Shape();
Shape126->setUSE("HAnimSiteShape");
HAnimSite124->addChild(Shape126);

HAnimSegment107->addChild(HAnimSite124);

Shape* Shape127 = new Shape();
LineSet* LineSet128 = new LineSet();
LineSet128->setVertexCount(new int[1]{2});
Coordinate* Coordinate129 = new Coordinate();
Coordinate129->setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029});
LineSet128->setCoord(Coordinate129);

//from sacroiliac to r_hip vertices 2
ColorRGBA* ColorRGBA130 = new ColorRGBA();
ColorRGBA130->setUSE("HAnimSegmentLineColorRGBA");
LineSet128->setColor(ColorRGBA130);

Shape127->setGeometry(LineSet128);

HAnimSegment107->addChild(Shape127);

HAnimSite* HAnimSite131 = new HAnimSite();
HAnimSite131->setName("r_femoral_lateral_epicondyles_pt");
HAnimSite131->setDEF("hanim_r_femoral_lateral_epicondyles_pt");
HAnimSite131->setTranslation(new float[3]{-0.1421,0.4992,0.031});
TouchSensor* TouchSensor132 = new TouchSensor();
TouchSensor132->setDescription("HAnimSite r_femoral_lateral_epicondyles_pt");
HAnimSite131->addChild(TouchSensor132);

Shape* Shape133 = new Shape();
Shape133->setUSE("HAnimSiteShape");
HAnimSite131->addChild(Shape133);

HAnimSegment107->addChild(HAnimSite131);

HAnimSite* HAnimSite134 = new HAnimSite();
HAnimSite134->setName("r_femoral_medial_epicondyles_pt");
HAnimSite134->setDEF("hanim_r_femoral_medial_epicondyles_pt");
HAnimSite134->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
TouchSensor* TouchSensor135 = new TouchSensor();
TouchSensor135->setDescription("HAnimSite r_femoral_medial_epicondyles_pt");
HAnimSite134->addChild(TouchSensor135);

Shape* Shape136 = new Shape();
Shape136->setUSE("HAnimSiteShape");
HAnimSite134->addChild(Shape136);

HAnimSegment107->addChild(HAnimSite134);

HAnimSite* HAnimSite137 = new HAnimSite();
HAnimSite137->setName("r_knee_crease_pt");
HAnimSite137->setDEF("hanim_r_knee_crease_pt");
HAnimSite137->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
TouchSensor* TouchSensor138 = new TouchSensor();
TouchSensor138->setDescription("HAnimSite r_knee_crease_pt");
HAnimSite137->addChild(TouchSensor138);

Shape* Shape139 = new Shape();
Shape139->setUSE("HAnimSiteShape");
HAnimSite137->addChild(Shape139);

HAnimSegment107->addChild(HAnimSite137);

HAnimSite* HAnimSite140 = new HAnimSite();
HAnimSite140->setName("r_suprapatella_pt");
HAnimSite140->setDEF("hanim_r_suprapatella_pt");
HAnimSite140->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor141 = new TouchSensor();
TouchSensor141->setDescription("HAnimSite r_suprapatella_pt");
HAnimSite140->addChild(TouchSensor141);

Shape* Shape142 = new Shape();
Shape142->setUSE("HAnimSiteShape");
HAnimSite140->addChild(Shape142);

HAnimSegment107->addChild(HAnimSite140);

HAnimJoint106->addChild(HAnimSegment107);

HAnimJoint* HAnimJoint143 = new HAnimJoint();
HAnimJoint143->setName("l_hip");
HAnimJoint143->setDEF("hanim_l_hip");
HAnimJoint143->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimSegment* HAnimSegment144 = new HAnimSegment();
HAnimSegment144->setName("l_thigh");
HAnimSegment144->setDEF("hanim_l_thigh");
Transform* Transform145 = new Transform();
//Empty Transform
Transform* Transform146 = new Transform();
//Empty Transform
Shape* Shape147 = new Shape();
Shape147->setUSE("HAnimJointShape");
Transform146->addChild(Shape147);

Transform145->addChild(Transform146);

HAnimSegment144->addChild(Transform145);

Shape* Shape148 = new Shape();
LineSet* LineSet149 = new LineSet();
LineSet149->setVertexCount(new int[1]{2});
Coordinate* Coordinate150 = new Coordinate();
Coordinate150->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
LineSet149->setCoord(Coordinate150);

//from l_hip to l_knee vertices 2
ColorRGBA* ColorRGBA151 = new ColorRGBA();
ColorRGBA151->setUSE("HAnimSegmentLineColorRGBA");
LineSet149->setColor(ColorRGBA151);

Shape148->setGeometry(LineSet149);

HAnimSegment144->addChild(Shape148);

HAnimSite* HAnimSite152 = new HAnimSite();
HAnimSite152->setName("l_lateral_malleolus_pt");
HAnimSite152->setDEF("hanim_l_lateral_malleolus_pt");
HAnimSite152->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
TouchSensor* TouchSensor153 = new TouchSensor();
TouchSensor153->setDescription("HAnimSite l_lateral_malleolus_pt");
HAnimSite152->addChild(TouchSensor153);

Shape* Shape154 = new Shape();
Shape154->setUSE("HAnimSiteShape");
HAnimSite152->addChild(Shape154);

HAnimSegment144->addChild(HAnimSite152);

HAnimSite* HAnimSite155 = new HAnimSite();
HAnimSite155->setName("l_medial_malleolus_pt");
HAnimSite155->setDEF("hanim_l_medial_malleolus_pt");
HAnimSite155->setTranslation(new float[3]{0.089,0.0716,-0.0881});
TouchSensor* TouchSensor156 = new TouchSensor();
TouchSensor156->setDescription("HAnimSite l_medial_malleolus_pt");
HAnimSite155->addChild(TouchSensor156);

Shape* Shape157 = new Shape();
Shape157->setUSE("HAnimSiteShape");
HAnimSite155->addChild(Shape157);

HAnimSegment144->addChild(HAnimSite155);

HAnimSite* HAnimSite158 = new HAnimSite();
HAnimSite158->setName("l_tibiale_pt");
HAnimSite158->setDEF("hanim_l_tibiale_pt");
HAnimSite158->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor159 = new TouchSensor();
TouchSensor159->setDescription("HAnimSite l_tibiale_pt");
HAnimSite158->addChild(TouchSensor159);

Shape* Shape160 = new Shape();
Shape160->setUSE("HAnimSiteShape");
HAnimSite158->addChild(Shape160);

HAnimSegment144->addChild(HAnimSite158);

HAnimJoint143->addChild(HAnimSegment144);

HAnimJoint* HAnimJoint161 = new HAnimJoint();
HAnimJoint161->setName("l_knee");
HAnimJoint161->setDEF("hanim_l_knee");
HAnimJoint161->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimSegment* HAnimSegment162 = new HAnimSegment();
HAnimSegment162->setName("l_calf");
HAnimSegment162->setDEF("hanim_l_calf");
Transform* Transform163 = new Transform();
//Empty Transform
Transform* Transform164 = new Transform();
//Empty Transform
Shape* Shape165 = new Shape();
Shape165->setUSE("HAnimJointShape");
Transform164->addChild(Shape165);

Transform163->addChild(Transform164);

HAnimSegment162->addChild(Transform163);

Shape* Shape166 = new Shape();
LineSet* LineSet167 = new LineSet();
LineSet167->setVertexCount(new int[1]{2});
Coordinate* Coordinate168 = new Coordinate();
Coordinate168->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
LineSet167->setCoord(Coordinate168);

//from l_knee to l_talocrural vertices 2
ColorRGBA* ColorRGBA169 = new ColorRGBA();
ColorRGBA169->setUSE("HAnimSegmentLineColorRGBA");
LineSet167->setColor(ColorRGBA169);

Shape166->setGeometry(LineSet167);

HAnimSegment162->addChild(Shape166);

HAnimSite* HAnimSite170 = new HAnimSite();
HAnimSite170->setName("l_calcaneus_posterior_pt");
HAnimSite170->setDEF("hanim_l_calcaneus_posterior_pt");
HAnimSite170->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
TouchSensor* TouchSensor171 = new TouchSensor();
TouchSensor171->setDescription("HAnimSite l_calcaneus_posterior_pt");
HAnimSite170->addChild(TouchSensor171);

Shape* Shape172 = new Shape();
Shape172->setUSE("HAnimSiteShape");
HAnimSite170->addChild(Shape172);

HAnimSegment162->addChild(HAnimSite170);

HAnimSite* HAnimSite173 = new HAnimSite();
HAnimSite173->setName("l_sphyrion_pt");
HAnimSite173->setDEF("hanim_l_sphyrion_pt");
HAnimSite173->setTranslation(new float[3]{0.089,0.0575,-0.0943});
TouchSensor* TouchSensor174 = new TouchSensor();
TouchSensor174->setDescription("HAnimSite l_sphyrion_pt");
HAnimSite173->addChild(TouchSensor174);

Shape* Shape175 = new Shape();
Shape175->setUSE("HAnimSiteShape");
HAnimSite173->addChild(Shape175);

HAnimSegment162->addChild(HAnimSite173);

HAnimJoint161->addChild(HAnimSegment162);

HAnimJoint* HAnimJoint176 = new HAnimJoint();
HAnimJoint176->setName("l_talocrural");
HAnimJoint176->setDEF("hanim_l_talocrural");
HAnimJoint176->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimSegment* HAnimSegment177 = new HAnimSegment();
HAnimSegment177->setName("l_talus");
HAnimSegment177->setDEF("hanim_l_talus");
Transform* Transform178 = new Transform();
Transform178->setScale(new float[3]{0.15,0.15,0.15});
Transform178->setTranslation(new float[3]{0.08,0.06,-0.025});
Transform178->setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
Transform* Transform179 = new Transform();
//Empty Transform left foot
Shape* Shape180 = new Shape();
Shape180->setUSE("HAnimJointShape");
Transform179->addChild(Shape180);

Transform178->addChild(Transform179);

HAnimSegment177->addChild(Transform178);

Shape* Shape181 = new Shape();
LineSet* LineSet182 = new LineSet();
LineSet182->setVertexCount(new int[1]{2});
Coordinate* Coordinate183 = new Coordinate();
Coordinate183->setPoint(new float[6]{0.1101,0.0656,-0.0736,0,1,0});
LineSet182->setCoord(Coordinate183);

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA* ColorRGBA184 = new ColorRGBA();
ColorRGBA184->setUSE("HAnimSegmentLineColorRGBA");
LineSet182->setColor(ColorRGBA184);

Shape181->setGeometry(LineSet182);

HAnimSegment177->addChild(Shape181);

Shape* Shape185 = new Shape();
LineSet* LineSet186 = new LineSet();
LineSet186->setVertexCount(new int[1]{2});
Coordinate* Coordinate187 = new Coordinate();
Coordinate187->setPoint(new float[6]{0.1101,0.0656,-0.0736,0,1,0});
LineSet186->setCoord(Coordinate187);

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA* ColorRGBA188 = new ColorRGBA();
ColorRGBA188->setUSE("HAnimSegmentLineColorRGBA");
LineSet186->setColor(ColorRGBA188);

Shape185->setGeometry(LineSet186);

HAnimSegment177->addChild(Shape185);

HAnimJoint176->addChild(HAnimSegment177);

HAnimJoint* HAnimJoint189 = new HAnimJoint();
HAnimJoint189->setName("l_talocalcaneonavicular");
HAnimJoint189->setDEF("hanim_l_talocalcaneonavicular");
HAnimJoint189->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment190 = new HAnimSegment();
HAnimSegment190->setName("l_navicular");
HAnimSegment190->setDEF("hanim_l_navicular");
Transform* Transform191 = new Transform();
//Empty Transform
Transform* Transform192 = new Transform();
//Empty Transform
Shape* Shape193 = new Shape();
Shape193->setUSE("HAnimJointShape");
Transform192->addChild(Shape193);

Transform191->addChild(Transform192);

HAnimSegment190->addChild(Transform191);

Shape* Shape194 = new Shape();
LineSet* LineSet195 = new LineSet();
LineSet195->setVertexCount(new int[1]{2});
Coordinate* Coordinate196 = new Coordinate();
Coordinate196->setPoint(new float[6]{0,1,0,0,1,0});
LineSet195->setCoord(Coordinate196);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA* ColorRGBA197 = new ColorRGBA();
ColorRGBA197->setUSE("HAnimSegmentLineColorRGBA");
LineSet195->setColor(ColorRGBA197);

Shape194->setGeometry(LineSet195);

HAnimSegment190->addChild(Shape194);

Shape* Shape198 = new Shape();
LineSet* LineSet199 = new LineSet();
LineSet199->setVertexCount(new int[1]{2});
Coordinate* Coordinate200 = new Coordinate();
Coordinate200->setPoint(new float[6]{0,1,0,0,1,0});
LineSet199->setCoord(Coordinate200);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA* ColorRGBA201 = new ColorRGBA();
ColorRGBA201->setUSE("HAnimSegmentLineColorRGBA");
LineSet199->setColor(ColorRGBA201);

Shape198->setGeometry(LineSet199);

HAnimSegment190->addChild(Shape198);

Shape* Shape202 = new Shape();
LineSet* LineSet203 = new LineSet();
LineSet203->setVertexCount(new int[1]{2});
Coordinate* Coordinate204 = new Coordinate();
Coordinate204->setPoint(new float[6]{0,1,0,0,1,0});
LineSet203->setCoord(Coordinate204);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA* ColorRGBA205 = new ColorRGBA();
ColorRGBA205->setUSE("HAnimSegmentLineColorRGBA");
LineSet203->setColor(ColorRGBA205);

Shape202->setGeometry(LineSet203);

HAnimSegment190->addChild(Shape202);

HAnimJoint189->addChild(HAnimSegment190);

HAnimJoint* HAnimJoint206 = new HAnimJoint();
HAnimJoint206->setName("l_cuneonavicular_1");
HAnimJoint206->setDEF("hanim_l_cuneonavicular_1");
HAnimJoint206->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment207 = new HAnimSegment();
HAnimSegment207->setName("l_cuneiform_1");
HAnimSegment207->setDEF("hanim_l_cuneiform_1");
Transform* Transform208 = new Transform();
//Empty Transform
Transform* Transform209 = new Transform();
//Empty Transform
Shape* Shape210 = new Shape();
Shape210->setUSE("HAnimJointShape");
Transform209->addChild(Shape210);

Transform208->addChild(Transform209);

HAnimSegment207->addChild(Transform208);

Shape* Shape211 = new Shape();
LineSet* LineSet212 = new LineSet();
LineSet212->setVertexCount(new int[1]{2});
Coordinate* Coordinate213 = new Coordinate();
Coordinate213->setPoint(new float[6]{0,1,0,0,1,0});
LineSet212->setCoord(Coordinate213);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA* ColorRGBA214 = new ColorRGBA();
ColorRGBA214->setUSE("HAnimSegmentLineColorRGBA");
LineSet212->setColor(ColorRGBA214);

Shape211->setGeometry(LineSet212);

HAnimSegment207->addChild(Shape211);

HAnimJoint206->addChild(HAnimSegment207);

HAnimJoint* HAnimJoint215 = new HAnimJoint();
HAnimJoint215->setName("l_tarsometatarsal_1");
HAnimJoint215->setDEF("hanim_l_tarsometatarsal_1");
HAnimJoint215->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment216 = new HAnimSegment();
HAnimSegment216->setName("l_metatarsal_1");
HAnimSegment216->setDEF("hanim_l_metatarsal_1");
Transform* Transform217 = new Transform();
//Empty Transform
Transform* Transform218 = new Transform();
//Empty Transform
Shape* Shape219 = new Shape();
Shape219->setUSE("HAnimJointShape");
Transform218->addChild(Shape219);

Transform217->addChild(Transform218);

HAnimSegment216->addChild(Transform217);

Shape* Shape220 = new Shape();
LineSet* LineSet221 = new LineSet();
LineSet221->setVertexCount(new int[1]{2});
Coordinate* Coordinate222 = new Coordinate();
Coordinate222->setPoint(new float[6]{0,1,0,0,1,0});
LineSet221->setCoord(Coordinate222);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA* ColorRGBA223 = new ColorRGBA();
ColorRGBA223->setUSE("HAnimSegmentLineColorRGBA");
LineSet221->setColor(ColorRGBA223);

Shape220->setGeometry(LineSet221);

HAnimSegment216->addChild(Shape220);

HAnimSite* HAnimSite224 = new HAnimSite();
HAnimSite224->setName("l_metatarsal_phalanx_1_pt");
HAnimSite224->setDEF("hanim_l_metatarsal_phalanx_1_pt");
HAnimSite224->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor225 = new TouchSensor();
TouchSensor225->setDescription("HAnimSite l_metatarsal_phalanx_1_pt");
HAnimSite224->addChild(TouchSensor225);

Shape* Shape226 = new Shape();
Shape226->setUSE("HAnimSiteShape");
HAnimSite224->addChild(Shape226);

HAnimSegment216->addChild(HAnimSite224);

HAnimJoint215->addChild(HAnimSegment216);

HAnimJoint* HAnimJoint227 = new HAnimJoint();
HAnimJoint227->setName("l_metatarsophalangeal_1");
HAnimJoint227->setDEF("hanim_l_metatarsophalangeal_1");
HAnimJoint227->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment228 = new HAnimSegment();
HAnimSegment228->setName("l_tarsal_proximal_phalanx_1");
HAnimSegment228->setDEF("hanim_l_tarsal_proximal_phalanx_1");
Transform* Transform229 = new Transform();
//Empty Transform
Transform* Transform230 = new Transform();
//Empty Transform
Shape* Shape231 = new Shape();
Shape231->setUSE("HAnimJointShape");
Transform230->addChild(Shape231);

Transform229->addChild(Transform230);

HAnimSegment228->addChild(Transform229);

Shape* Shape232 = new Shape();
LineSet* LineSet233 = new LineSet();
LineSet233->setVertexCount(new int[1]{2});
Coordinate* Coordinate234 = new Coordinate();
Coordinate234->setPoint(new float[6]{0,1,0,0,1,0});
LineSet233->setCoord(Coordinate234);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA235 = new ColorRGBA();
ColorRGBA235->setUSE("HAnimSegmentLineColorRGBA");
LineSet233->setColor(ColorRGBA235);

Shape232->setGeometry(LineSet233);

HAnimSegment228->addChild(Shape232);

HAnimSite* HAnimSite236 = new HAnimSite();
HAnimSite236->setName("l_tarsal_distal_phalanx_1_tip");
HAnimSite236->setDEF("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimSite236->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor237 = new TouchSensor();
TouchSensor237->setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip");
HAnimSite236->addChild(TouchSensor237);

Shape* Shape238 = new Shape();
Shape238->setUSE("HAnimSiteShape");
HAnimSite236->addChild(Shape238);

HAnimSegment228->addChild(HAnimSite236);

HAnimJoint227->addChild(HAnimSegment228);

HAnimJoint* HAnimJoint239 = new HAnimJoint();
HAnimJoint239->setName("l_tarsal_interphalangeal_1");
HAnimJoint239->setDEF("hanim_l_tarsal_interphalangeal_1");
HAnimJoint239->setCenter(new float[3]{0,1,0});
HAnimJoint227->addChild(HAnimJoint239);

HAnimJoint215->addChild(HAnimJoint227);

HAnimJoint206->addChild(HAnimJoint215);

HAnimJoint189->addChild(HAnimJoint206);

HAnimJoint* HAnimJoint240 = new HAnimJoint();
HAnimJoint240->setName("l_cuneonavicular_2");
HAnimJoint240->setDEF("hanim_l_cuneonavicular_2");
HAnimJoint240->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment241 = new HAnimSegment();
HAnimSegment241->setName("l_cuneiform_2");
HAnimSegment241->setDEF("hanim_l_cuneiform_2");
Transform* Transform242 = new Transform();
//Empty Transform
Transform* Transform243 = new Transform();
//Empty Transform
Shape* Shape244 = new Shape();
Shape244->setUSE("HAnimJointShape");
Transform243->addChild(Shape244);

Transform242->addChild(Transform243);

HAnimSegment241->addChild(Transform242);

Shape* Shape245 = new Shape();
LineSet* LineSet246 = new LineSet();
LineSet246->setVertexCount(new int[1]{2});
Coordinate* Coordinate247 = new Coordinate();
Coordinate247->setPoint(new float[6]{0,1,0,0,1,0});
LineSet246->setCoord(Coordinate247);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA* ColorRGBA248 = new ColorRGBA();
ColorRGBA248->setUSE("HAnimSegmentLineColorRGBA");
LineSet246->setColor(ColorRGBA248);

Shape245->setGeometry(LineSet246);

HAnimSegment241->addChild(Shape245);

HAnimJoint240->addChild(HAnimSegment241);

HAnimJoint* HAnimJoint249 = new HAnimJoint();
HAnimJoint249->setName("l_tarsometatarsal_2");
HAnimJoint249->setDEF("hanim_l_tarsometatarsal_2");
HAnimJoint249->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment250 = new HAnimSegment();
HAnimSegment250->setName("l_metatarsal_2");
HAnimSegment250->setDEF("hanim_l_metatarsal_2");
Transform* Transform251 = new Transform();
//Empty Transform
Transform* Transform252 = new Transform();
//Empty Transform
Shape* Shape253 = new Shape();
Shape253->setUSE("HAnimJointShape");
Transform252->addChild(Shape253);

Transform251->addChild(Transform252);

HAnimSegment250->addChild(Transform251);

Shape* Shape254 = new Shape();
LineSet* LineSet255 = new LineSet();
LineSet255->setVertexCount(new int[1]{2});
Coordinate* Coordinate256 = new Coordinate();
Coordinate256->setPoint(new float[6]{0,1,0,0,1,0});
LineSet255->setCoord(Coordinate256);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA* ColorRGBA257 = new ColorRGBA();
ColorRGBA257->setUSE("HAnimSegmentLineColorRGBA");
LineSet255->setColor(ColorRGBA257);

Shape254->setGeometry(LineSet255);

HAnimSegment250->addChild(Shape254);

HAnimJoint249->addChild(HAnimSegment250);

HAnimJoint* HAnimJoint258 = new HAnimJoint();
HAnimJoint258->setName("l_metatarsophalangeal_2");
HAnimJoint258->setDEF("hanim_l_metatarsophalangeal_2");
HAnimJoint258->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment259 = new HAnimSegment();
HAnimSegment259->setName("l_tarsal_proximal_phalanx_2");
HAnimSegment259->setDEF("hanim_l_tarsal_proximal_phalanx_2");
Transform* Transform260 = new Transform();
//Empty Transform
Transform* Transform261 = new Transform();
//Empty Transform
Shape* Shape262 = new Shape();
Shape262->setUSE("HAnimJointShape");
Transform261->addChild(Shape262);

Transform260->addChild(Transform261);

HAnimSegment259->addChild(Transform260);

Shape* Shape263 = new Shape();
LineSet* LineSet264 = new LineSet();
LineSet264->setVertexCount(new int[1]{2});
Coordinate* Coordinate265 = new Coordinate();
Coordinate265->setPoint(new float[6]{0,1,0,0,1,0});
LineSet264->setCoord(Coordinate265);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA266 = new ColorRGBA();
ColorRGBA266->setUSE("HAnimSegmentLineColorRGBA");
LineSet264->setColor(ColorRGBA266);

Shape263->setGeometry(LineSet264);

HAnimSegment259->addChild(Shape263);

HAnimJoint258->addChild(HAnimSegment259);

HAnimJoint* HAnimJoint267 = new HAnimJoint();
HAnimJoint267->setName("l_tarsal_proximal_interphalangeal_2");
HAnimJoint267->setDEF("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimJoint267->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment268 = new HAnimSegment();
HAnimSegment268->setName("l_tarsal_middle_phalanx_2");
HAnimSegment268->setDEF("hanim_l_tarsal_middle_phalanx_2");
Transform* Transform269 = new Transform();
//Empty Transform
Transform* Transform270 = new Transform();
//Empty Transform
Shape* Shape271 = new Shape();
Shape271->setUSE("HAnimJointShape");
Transform270->addChild(Shape271);

Transform269->addChild(Transform270);

HAnimSegment268->addChild(Transform269);

Shape* Shape272 = new Shape();
LineSet* LineSet273 = new LineSet();
LineSet273->setVertexCount(new int[1]{2});
Coordinate* Coordinate274 = new Coordinate();
Coordinate274->setPoint(new float[6]{0,1,0,0,1,0});
LineSet273->setCoord(Coordinate274);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA275 = new ColorRGBA();
ColorRGBA275->setUSE("HAnimSegmentLineColorRGBA");
LineSet273->setColor(ColorRGBA275);

Shape272->setGeometry(LineSet273);

HAnimSegment268->addChild(Shape272);

HAnimSite* HAnimSite276 = new HAnimSite();
HAnimSite276->setName("l_tarsal_distal_phalanx_2_tip");
HAnimSite276->setDEF("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimSite276->setTranslation(new float[3]{0.1195,0.0079,0.1433});
TouchSensor* TouchSensor277 = new TouchSensor();
TouchSensor277->setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip");
HAnimSite276->addChild(TouchSensor277);

Shape* Shape278 = new Shape();
Shape278->setUSE("HAnimSiteShape");
HAnimSite276->addChild(Shape278);

HAnimSegment268->addChild(HAnimSite276);

HAnimJoint267->addChild(HAnimSegment268);

HAnimJoint* HAnimJoint279 = new HAnimJoint();
HAnimJoint279->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint279->setDEF("hanim_l_tarsal_distal_interphalangeal_2");
HAnimJoint279->setCenter(new float[3]{0,1,0});
HAnimJoint267->addChild(HAnimJoint279);

HAnimJoint258->addChild(HAnimJoint267);

HAnimJoint249->addChild(HAnimJoint258);

HAnimJoint240->addChild(HAnimJoint249);

HAnimJoint189->addChild(HAnimJoint240);

HAnimJoint* HAnimJoint280 = new HAnimJoint();
HAnimJoint280->setName("l_cuneonavicular_3");
HAnimJoint280->setDEF("hanim_l_cuneonavicular_3");
HAnimJoint280->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment281 = new HAnimSegment();
HAnimSegment281->setName("l_cuneiform_3");
HAnimSegment281->setDEF("hanim_l_cuneiform_3");
Transform* Transform282 = new Transform();
//Empty Transform
Transform* Transform283 = new Transform();
//Empty Transform
Shape* Shape284 = new Shape();
Shape284->setUSE("HAnimJointShape");
Transform283->addChild(Shape284);

Transform282->addChild(Transform283);

HAnimSegment281->addChild(Transform282);

Shape* Shape285 = new Shape();
LineSet* LineSet286 = new LineSet();
LineSet286->setVertexCount(new int[1]{2});
Coordinate* Coordinate287 = new Coordinate();
Coordinate287->setPoint(new float[6]{0,1,0,0,1,0});
LineSet286->setCoord(Coordinate287);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA* ColorRGBA288 = new ColorRGBA();
ColorRGBA288->setUSE("HAnimSegmentLineColorRGBA");
LineSet286->setColor(ColorRGBA288);

Shape285->setGeometry(LineSet286);

HAnimSegment281->addChild(Shape285);

HAnimJoint280->addChild(HAnimSegment281);

HAnimJoint* HAnimJoint289 = new HAnimJoint();
HAnimJoint289->setName("l_tarsometatarsal_3");
HAnimJoint289->setDEF("hanim_l_tarsometatarsal_3");
HAnimJoint289->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment290 = new HAnimSegment();
HAnimSegment290->setName("l_metatarsal_3");
HAnimSegment290->setDEF("hanim_l_metatarsal_3");
Transform* Transform291 = new Transform();
//Empty Transform
Transform* Transform292 = new Transform();
//Empty Transform
Shape* Shape293 = new Shape();
Shape293->setUSE("HAnimJointShape");
Transform292->addChild(Shape293);

Transform291->addChild(Transform292);

HAnimSegment290->addChild(Transform291);

Shape* Shape294 = new Shape();
LineSet* LineSet295 = new LineSet();
LineSet295->setVertexCount(new int[1]{2});
Coordinate* Coordinate296 = new Coordinate();
Coordinate296->setPoint(new float[6]{0,1,0,0,1,0});
LineSet295->setCoord(Coordinate296);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA* ColorRGBA297 = new ColorRGBA();
ColorRGBA297->setUSE("HAnimSegmentLineColorRGBA");
LineSet295->setColor(ColorRGBA297);

Shape294->setGeometry(LineSet295);

HAnimSegment290->addChild(Shape294);

HAnimJoint289->addChild(HAnimSegment290);

HAnimJoint* HAnimJoint298 = new HAnimJoint();
HAnimJoint298->setName("l_metatarsophalangeal_3");
HAnimJoint298->setDEF("hanim_l_metatarsophalangeal_3");
HAnimJoint298->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment299 = new HAnimSegment();
HAnimSegment299->setName("l_tarsal_proximal_phalanx_3");
HAnimSegment299->setDEF("hanim_l_tarsal_proximal_phalanx_3");
Transform* Transform300 = new Transform();
//Empty Transform
Transform* Transform301 = new Transform();
//Empty Transform
Shape* Shape302 = new Shape();
Shape302->setUSE("HAnimJointShape");
Transform301->addChild(Shape302);

Transform300->addChild(Transform301);

HAnimSegment299->addChild(Transform300);

Shape* Shape303 = new Shape();
LineSet* LineSet304 = new LineSet();
LineSet304->setVertexCount(new int[1]{2});
Coordinate* Coordinate305 = new Coordinate();
Coordinate305->setPoint(new float[6]{0,1,0,0,1,0});
LineSet304->setCoord(Coordinate305);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA306 = new ColorRGBA();
ColorRGBA306->setUSE("HAnimSegmentLineColorRGBA");
LineSet304->setColor(ColorRGBA306);

Shape303->setGeometry(LineSet304);

HAnimSegment299->addChild(Shape303);

HAnimJoint298->addChild(HAnimSegment299);

HAnimJoint* HAnimJoint307 = new HAnimJoint();
HAnimJoint307->setName("l_tarsal_proximal_interphalangeal_3");
HAnimJoint307->setDEF("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimJoint307->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment308 = new HAnimSegment();
HAnimSegment308->setName("l_tarsal_middle_phalanx_3");
HAnimSegment308->setDEF("hanim_l_tarsal_middle_phalanx_3");
Transform* Transform309 = new Transform();
//Empty Transform
Transform* Transform310 = new Transform();
//Empty Transform
Shape* Shape311 = new Shape();
Shape311->setUSE("HAnimJointShape");
Transform310->addChild(Shape311);

Transform309->addChild(Transform310);

HAnimSegment308->addChild(Transform309);

Shape* Shape312 = new Shape();
LineSet* LineSet313 = new LineSet();
LineSet313->setVertexCount(new int[1]{2});
Coordinate* Coordinate314 = new Coordinate();
Coordinate314->setPoint(new float[6]{0,1,0,0,1,0});
LineSet313->setCoord(Coordinate314);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA315 = new ColorRGBA();
ColorRGBA315->setUSE("HAnimSegmentLineColorRGBA");
LineSet313->setColor(ColorRGBA315);

Shape312->setGeometry(LineSet313);

HAnimSegment308->addChild(Shape312);

HAnimSite* HAnimSite316 = new HAnimSite();
HAnimSite316->setName("l_tarsal_distal_phalanx_3_tip");
HAnimSite316->setDEF("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimSite316->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor317 = new TouchSensor();
TouchSensor317->setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip");
HAnimSite316->addChild(TouchSensor317);

Shape* Shape318 = new Shape();
Shape318->setUSE("HAnimSiteShape");
HAnimSite316->addChild(Shape318);

HAnimSegment308->addChild(HAnimSite316);

HAnimJoint307->addChild(HAnimSegment308);

HAnimJoint* HAnimJoint319 = new HAnimJoint();
HAnimJoint319->setName("l_tarsal_distal_interphalangeal_3");
HAnimJoint319->setDEF("hanim_l_tarsal_distal_interphalangeal_3");
HAnimJoint319->setCenter(new float[3]{0,1,0});
HAnimJoint307->addChild(HAnimJoint319);

HAnimJoint298->addChild(HAnimJoint307);

HAnimJoint289->addChild(HAnimJoint298);

HAnimJoint280->addChild(HAnimJoint289);

HAnimJoint189->addChild(HAnimJoint280);

HAnimJoint176->addChild(HAnimJoint189);

HAnimJoint* HAnimJoint320 = new HAnimJoint();
HAnimJoint320->setName("l_calcaneocuboid");
HAnimJoint320->setDEF("hanim_l_calcaneocuboid");
HAnimJoint320->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment321 = new HAnimSegment();
HAnimSegment321->setName("l_calcaneus");
HAnimSegment321->setDEF("hanim_l_calcaneus");
Transform* Transform322 = new Transform();
//Empty Transform
Transform* Transform323 = new Transform();
//Empty Transform
Shape* Shape324 = new Shape();
Shape324->setUSE("HAnimJointShape");
Transform323->addChild(Shape324);

Transform322->addChild(Transform323);

HAnimSegment321->addChild(Transform322);

Shape* Shape325 = new Shape();
LineSet* LineSet326 = new LineSet();
LineSet326->setVertexCount(new int[1]{2});
Coordinate* Coordinate327 = new Coordinate();
Coordinate327->setPoint(new float[6]{0,1,0,0,1,0});
LineSet326->setCoord(Coordinate327);

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA* ColorRGBA328 = new ColorRGBA();
ColorRGBA328->setUSE("HAnimSegmentLineColorRGBA");
LineSet326->setColor(ColorRGBA328);

Shape325->setGeometry(LineSet326);

HAnimSegment321->addChild(Shape325);

HAnimJoint320->addChild(HAnimSegment321);

HAnimJoint* HAnimJoint329 = new HAnimJoint();
HAnimJoint329->setName("l_transversetarsal");
HAnimJoint329->setDEF("hanim_l_transversetarsal");
HAnimJoint329->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment330 = new HAnimSegment();
HAnimSegment330->setName("l_cuboid");
HAnimSegment330->setDEF("hanim_l_cuboid");
Transform* Transform331 = new Transform();
//Empty Transform
Transform* Transform332 = new Transform();
//Empty Transform
Shape* Shape333 = new Shape();
Shape333->setUSE("HAnimJointShape");
Transform332->addChild(Shape333);

Transform331->addChild(Transform332);

HAnimSegment330->addChild(Transform331);

Shape* Shape334 = new Shape();
LineSet* LineSet335 = new LineSet();
LineSet335->setVertexCount(new int[1]{2});
Coordinate* Coordinate336 = new Coordinate();
Coordinate336->setPoint(new float[6]{0,1,0,0,1,0});
LineSet335->setCoord(Coordinate336);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA* ColorRGBA337 = new ColorRGBA();
ColorRGBA337->setUSE("HAnimSegmentLineColorRGBA");
LineSet335->setColor(ColorRGBA337);

Shape334->setGeometry(LineSet335);

HAnimSegment330->addChild(Shape334);

Shape* Shape338 = new Shape();
LineSet* LineSet339 = new LineSet();
LineSet339->setVertexCount(new int[1]{2});
Coordinate* Coordinate340 = new Coordinate();
Coordinate340->setPoint(new float[6]{0,1,0,0,1,0});
LineSet339->setCoord(Coordinate340);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA* ColorRGBA341 = new ColorRGBA();
ColorRGBA341->setUSE("HAnimSegmentLineColorRGBA");
LineSet339->setColor(ColorRGBA341);

Shape338->setGeometry(LineSet339);

HAnimSegment330->addChild(Shape338);

HAnimJoint329->addChild(HAnimSegment330);

HAnimJoint* HAnimJoint342 = new HAnimJoint();
HAnimJoint342->setName("l_tarsometatarsal_4");
HAnimJoint342->setDEF("hanim_l_tarsometatarsal_4");
HAnimJoint342->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment343 = new HAnimSegment();
HAnimSegment343->setName("l_metatarsal_4");
HAnimSegment343->setDEF("hanim_l_metatarsal_4");
Transform* Transform344 = new Transform();
//Empty Transform
Transform* Transform345 = new Transform();
//Empty Transform
Shape* Shape346 = new Shape();
Shape346->setUSE("HAnimJointShape");
Transform345->addChild(Shape346);

Transform344->addChild(Transform345);

HAnimSegment343->addChild(Transform344);

Shape* Shape347 = new Shape();
LineSet* LineSet348 = new LineSet();
LineSet348->setVertexCount(new int[1]{2});
Coordinate* Coordinate349 = new Coordinate();
Coordinate349->setPoint(new float[6]{0,1,0,0,1,0});
LineSet348->setCoord(Coordinate349);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA* ColorRGBA350 = new ColorRGBA();
ColorRGBA350->setUSE("HAnimSegmentLineColorRGBA");
LineSet348->setColor(ColorRGBA350);

Shape347->setGeometry(LineSet348);

HAnimSegment343->addChild(Shape347);

HAnimJoint342->addChild(HAnimSegment343);

HAnimJoint* HAnimJoint351 = new HAnimJoint();
HAnimJoint351->setName("l_metatarsophalangeal_4");
HAnimJoint351->setDEF("hanim_l_metatarsophalangeal_4");
HAnimJoint351->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment352 = new HAnimSegment();
HAnimSegment352->setName("l_tarsal_proximal_phalanx_4");
HAnimSegment352->setDEF("hanim_l_tarsal_proximal_phalanx_4");
Transform* Transform353 = new Transform();
//Empty Transform
Transform* Transform354 = new Transform();
//Empty Transform
Shape* Shape355 = new Shape();
Shape355->setUSE("HAnimJointShape");
Transform354->addChild(Shape355);

Transform353->addChild(Transform354);

HAnimSegment352->addChild(Transform353);

Shape* Shape356 = new Shape();
LineSet* LineSet357 = new LineSet();
LineSet357->setVertexCount(new int[1]{2});
Coordinate* Coordinate358 = new Coordinate();
Coordinate358->setPoint(new float[6]{0,1,0,0,1,0});
LineSet357->setCoord(Coordinate358);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA359 = new ColorRGBA();
ColorRGBA359->setUSE("HAnimSegmentLineColorRGBA");
LineSet357->setColor(ColorRGBA359);

Shape356->setGeometry(LineSet357);

HAnimSegment352->addChild(Shape356);

HAnimJoint351->addChild(HAnimSegment352);

HAnimJoint* HAnimJoint360 = new HAnimJoint();
HAnimJoint360->setName("l_tarsal_proximal_interphalangeal_4");
HAnimJoint360->setDEF("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimJoint360->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment361 = new HAnimSegment();
HAnimSegment361->setName("l_tarsal_middle_phalanx_4");
HAnimSegment361->setDEF("hanim_l_tarsal_middle_phalanx_4");
Transform* Transform362 = new Transform();
//Empty Transform
Transform* Transform363 = new Transform();
//Empty Transform
Shape* Shape364 = new Shape();
Shape364->setUSE("HAnimJointShape");
Transform363->addChild(Shape364);

Transform362->addChild(Transform363);

HAnimSegment361->addChild(Transform362);

Shape* Shape365 = new Shape();
LineSet* LineSet366 = new LineSet();
LineSet366->setVertexCount(new int[1]{2});
Coordinate* Coordinate367 = new Coordinate();
Coordinate367->setPoint(new float[6]{0,1,0,0,1,0});
LineSet366->setCoord(Coordinate367);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA368 = new ColorRGBA();
ColorRGBA368->setUSE("HAnimSegmentLineColorRGBA");
LineSet366->setColor(ColorRGBA368);

Shape365->setGeometry(LineSet366);

HAnimSegment361->addChild(Shape365);

HAnimSite* HAnimSite369 = new HAnimSite();
HAnimSite369->setName("l_tarsal_distal_phalanx_4_tip");
HAnimSite369->setDEF("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimSite369->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor370 = new TouchSensor();
TouchSensor370->setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip");
HAnimSite369->addChild(TouchSensor370);

Shape* Shape371 = new Shape();
Shape371->setUSE("HAnimSiteShape");
HAnimSite369->addChild(Shape371);

HAnimSegment361->addChild(HAnimSite369);

HAnimJoint360->addChild(HAnimSegment361);

HAnimJoint* HAnimJoint372 = new HAnimJoint();
HAnimJoint372->setName("l_tarsal_distal_interphalangeal_4");
HAnimJoint372->setDEF("hanim_l_tarsal_distal_interphalangeal_4");
HAnimJoint372->setCenter(new float[3]{0,1,0});
HAnimJoint360->addChild(HAnimJoint372);

HAnimJoint351->addChild(HAnimJoint360);

HAnimJoint342->addChild(HAnimJoint351);

HAnimJoint329->addChild(HAnimJoint342);

HAnimJoint* HAnimJoint373 = new HAnimJoint();
HAnimJoint373->setName("l_tarsometatarsal_5");
HAnimJoint373->setDEF("hanim_l_tarsometatarsal_5");
HAnimJoint373->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment374 = new HAnimSegment();
HAnimSegment374->setName("l_metatarsal_5");
HAnimSegment374->setDEF("hanim_l_metatarsal_5");
Transform* Transform375 = new Transform();
//Empty Transform
Transform* Transform376 = new Transform();
//Empty Transform
Shape* Shape377 = new Shape();
Shape377->setUSE("HAnimJointShape");
Transform376->addChild(Shape377);

Transform375->addChild(Transform376);

HAnimSegment374->addChild(Transform375);

Shape* Shape378 = new Shape();
LineSet* LineSet379 = new LineSet();
LineSet379->setVertexCount(new int[1]{2});
Coordinate* Coordinate380 = new Coordinate();
Coordinate380->setPoint(new float[6]{0,1,0,0,1,0});
LineSet379->setCoord(Coordinate380);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA* ColorRGBA381 = new ColorRGBA();
ColorRGBA381->setUSE("HAnimSegmentLineColorRGBA");
LineSet379->setColor(ColorRGBA381);

Shape378->setGeometry(LineSet379);

HAnimSegment374->addChild(Shape378);

HAnimSite* HAnimSite382 = new HAnimSite();
HAnimSite382->setName("l_metatarsal_phalanx_5_pt");
HAnimSite382->setDEF("hanim_l_metatarsal_phalanx_5_pt");
HAnimSite382->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor383 = new TouchSensor();
TouchSensor383->setDescription("HAnimSite l_metatarsal_phalanx_5_pt");
HAnimSite382->addChild(TouchSensor383);

Shape* Shape384 = new Shape();
Shape384->setUSE("HAnimSiteShape");
HAnimSite382->addChild(Shape384);

HAnimSegment374->addChild(HAnimSite382);

HAnimJoint373->addChild(HAnimSegment374);

HAnimJoint* HAnimJoint385 = new HAnimJoint();
HAnimJoint385->setName("l_metatarsophalangeal_5");
HAnimJoint385->setDEF("hanim_l_metatarsophalangeal_5");
HAnimJoint385->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment386 = new HAnimSegment();
HAnimSegment386->setName("l_tarsal_proximal_phalanx_5");
HAnimSegment386->setDEF("hanim_l_tarsal_proximal_phalanx_5");
Transform* Transform387 = new Transform();
//Empty Transform
Transform* Transform388 = new Transform();
//Empty Transform
Shape* Shape389 = new Shape();
Shape389->setUSE("HAnimJointShape");
Transform388->addChild(Shape389);

Transform387->addChild(Transform388);

HAnimSegment386->addChild(Transform387);

Shape* Shape390 = new Shape();
LineSet* LineSet391 = new LineSet();
LineSet391->setVertexCount(new int[1]{2});
Coordinate* Coordinate392 = new Coordinate();
Coordinate392->setPoint(new float[6]{0,1,0,0,1,0});
LineSet391->setCoord(Coordinate392);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA393 = new ColorRGBA();
ColorRGBA393->setUSE("HAnimSegmentLineColorRGBA");
LineSet391->setColor(ColorRGBA393);

Shape390->setGeometry(LineSet391);

HAnimSegment386->addChild(Shape390);

HAnimJoint385->addChild(HAnimSegment386);

HAnimJoint* HAnimJoint394 = new HAnimJoint();
HAnimJoint394->setName("l_tarsal_proximal_interphalangeal_5");
HAnimJoint394->setDEF("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimJoint394->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment395 = new HAnimSegment();
HAnimSegment395->setName("l_tarsal_middle_phalanx_5");
HAnimSegment395->setDEF("hanim_l_tarsal_middle_phalanx_5");
Transform* Transform396 = new Transform();
//Empty Transform
Transform* Transform397 = new Transform();
//Empty Transform
Shape* Shape398 = new Shape();
Shape398->setUSE("HAnimJointShape");
Transform397->addChild(Shape398);

Transform396->addChild(Transform397);

HAnimSegment395->addChild(Transform396);

Shape* Shape399 = new Shape();
LineSet* LineSet400 = new LineSet();
LineSet400->setVertexCount(new int[1]{2});
Coordinate* Coordinate401 = new Coordinate();
Coordinate401->setPoint(new float[6]{0,1,0,0,1,0});
LineSet400->setCoord(Coordinate401);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA402 = new ColorRGBA();
ColorRGBA402->setUSE("HAnimSegmentLineColorRGBA");
LineSet400->setColor(ColorRGBA402);

Shape399->setGeometry(LineSet400);

HAnimSegment395->addChild(Shape399);

HAnimSite* HAnimSite403 = new HAnimSite();
HAnimSite403->setName("l_tarsal_distal_phalanx_5_tip");
HAnimSite403->setDEF("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimSite403->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor404 = new TouchSensor();
TouchSensor404->setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip");
HAnimSite403->addChild(TouchSensor404);

Shape* Shape405 = new Shape();
Shape405->setUSE("HAnimSiteShape");
HAnimSite403->addChild(Shape405);

HAnimSegment395->addChild(HAnimSite403);

HAnimJoint394->addChild(HAnimSegment395);

HAnimJoint* HAnimJoint406 = new HAnimJoint();
HAnimJoint406->setName("l_tarsal_distal_interphalangeal_5");
HAnimJoint406->setDEF("hanim_l_tarsal_distal_interphalangeal_5");
HAnimJoint406->setCenter(new float[3]{0,1,0});
HAnimJoint394->addChild(HAnimJoint406);

HAnimJoint385->addChild(HAnimJoint394);

HAnimJoint373->addChild(HAnimJoint385);

HAnimJoint329->addChild(HAnimJoint373);

HAnimJoint320->addChild(HAnimJoint329);

HAnimJoint176->addChild(HAnimJoint320);

HAnimJoint161->addChild(HAnimJoint176);

HAnimJoint143->addChild(HAnimJoint161);

HAnimJoint106->addChild(HAnimJoint143);

HAnimJoint* HAnimJoint407 = new HAnimJoint();
HAnimJoint407->setName("r_hip");
HAnimJoint407->setDEF("hanim_r_hip");
HAnimJoint407->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimSegment* HAnimSegment408 = new HAnimSegment();
HAnimSegment408->setName("r_thigh");
HAnimSegment408->setDEF("hanim_r_thigh");
Transform* Transform409 = new Transform();
//Empty Transform
Transform* Transform410 = new Transform();
//Empty Transform
Shape* Shape411 = new Shape();
Shape411->setUSE("HAnimJointShape");
Transform410->addChild(Shape411);

Transform409->addChild(Transform410);

HAnimSegment408->addChild(Transform409);

Shape* Shape412 = new Shape();
LineSet* LineSet413 = new LineSet();
LineSet413->setVertexCount(new int[1]{2});
Coordinate* Coordinate414 = new Coordinate();
Coordinate414->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
LineSet413->setCoord(Coordinate414);

//from r_hip to r_knee vertices 2
ColorRGBA* ColorRGBA415 = new ColorRGBA();
ColorRGBA415->setUSE("HAnimSegmentLineColorRGBA");
LineSet413->setColor(ColorRGBA415);

Shape412->setGeometry(LineSet413);

HAnimSegment408->addChild(Shape412);

HAnimSite* HAnimSite416 = new HAnimSite();
HAnimSite416->setName("r_lateral_malleolus_pt");
HAnimSite416->setDEF("hanim_r_lateral_malleolus_pt");
HAnimSite416->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
TouchSensor* TouchSensor417 = new TouchSensor();
TouchSensor417->setDescription("HAnimSite r_lateral_malleolus_pt");
HAnimSite416->addChild(TouchSensor417);

Shape* Shape418 = new Shape();
Shape418->setUSE("HAnimSiteShape");
HAnimSite416->addChild(Shape418);

HAnimSegment408->addChild(HAnimSite416);

HAnimSite* HAnimSite419 = new HAnimSite();
HAnimSite419->setName("r_medial_malleolus_pt");
HAnimSite419->setDEF("hanim_r_medial_malleolus_pt");
HAnimSite419->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
TouchSensor* TouchSensor420 = new TouchSensor();
TouchSensor420->setDescription("HAnimSite r_medial_malleolus_pt");
HAnimSite419->addChild(TouchSensor420);

Shape* Shape421 = new Shape();
Shape421->setUSE("HAnimSiteShape");
HAnimSite419->addChild(Shape421);

HAnimSegment408->addChild(HAnimSite419);

HAnimSite* HAnimSite422 = new HAnimSite();
HAnimSite422->setName("r_tibiale_pt");
HAnimSite422->setDEF("hanim_r_tibiale_pt");
HAnimSite422->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor423 = new TouchSensor();
TouchSensor423->setDescription("HAnimSite r_tibiale_pt");
HAnimSite422->addChild(TouchSensor423);

Shape* Shape424 = new Shape();
Shape424->setUSE("HAnimSiteShape");
HAnimSite422->addChild(Shape424);

HAnimSegment408->addChild(HAnimSite422);

HAnimJoint407->addChild(HAnimSegment408);

HAnimJoint* HAnimJoint425 = new HAnimJoint();
HAnimJoint425->setName("r_knee");
HAnimJoint425->setDEF("hanim_r_knee");
HAnimJoint425->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimSegment* HAnimSegment426 = new HAnimSegment();
HAnimSegment426->setName("r_calf");
HAnimSegment426->setDEF("hanim_r_calf");
Transform* Transform427 = new Transform();
//Empty Transform
Transform* Transform428 = new Transform();
//Empty Transform
Shape* Shape429 = new Shape();
Shape429->setUSE("HAnimJointShape");
Transform428->addChild(Shape429);

Transform427->addChild(Transform428);

HAnimSegment426->addChild(Transform427);

Shape* Shape430 = new Shape();
LineSet* LineSet431 = new LineSet();
LineSet431->setVertexCount(new int[1]{2});
Coordinate* Coordinate432 = new Coordinate();
Coordinate432->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
LineSet431->setCoord(Coordinate432);

//from r_knee to r_talocrural vertices 2
ColorRGBA* ColorRGBA433 = new ColorRGBA();
ColorRGBA433->setUSE("HAnimSegmentLineColorRGBA");
LineSet431->setColor(ColorRGBA433);

Shape430->setGeometry(LineSet431);

HAnimSegment426->addChild(Shape430);

HAnimSite* HAnimSite434 = new HAnimSite();
HAnimSite434->setName("r_calcaneus_posterior_pt");
HAnimSite434->setDEF("hanim_r_calcaneus_posterior_pt");
HAnimSite434->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
TouchSensor* TouchSensor435 = new TouchSensor();
TouchSensor435->setDescription("HAnimSite r_calcaneus_posterior_pt");
HAnimSite434->addChild(TouchSensor435);

Shape* Shape436 = new Shape();
Shape436->setUSE("HAnimSiteShape");
HAnimSite434->addChild(Shape436);

HAnimSegment426->addChild(HAnimSite434);

HAnimSite* HAnimSite437 = new HAnimSite();
HAnimSite437->setName("r_sphyrion_pt");
HAnimSite437->setDEF("hanim_r_sphyrion_pt");
HAnimSite437->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
TouchSensor* TouchSensor438 = new TouchSensor();
TouchSensor438->setDescription("HAnimSite r_sphyrion_pt");
HAnimSite437->addChild(TouchSensor438);

Shape* Shape439 = new Shape();
Shape439->setUSE("HAnimSiteShape");
HAnimSite437->addChild(Shape439);

HAnimSegment426->addChild(HAnimSite437);

HAnimJoint425->addChild(HAnimSegment426);

HAnimJoint* HAnimJoint440 = new HAnimJoint();
HAnimJoint440->setName("r_talocrural");
HAnimJoint440->setDEF("hanim_r_talocrural");
HAnimJoint440->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimSegment* HAnimSegment441 = new HAnimSegment();
HAnimSegment441->setName("r_talus");
HAnimSegment441->setDEF("hanim_r_talus");
Transform* Transform442 = new Transform();
Transform442->setScale(new float[3]{0.15,0.15,0.15});
Transform442->setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform442->setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
Transform* Transform443 = new Transform();
//Empty Transform right foot
Shape* Shape444 = new Shape();
Shape444->setUSE("HAnimJointShape");
Transform443->addChild(Shape444);

Transform442->addChild(Transform443);

HAnimSegment441->addChild(Transform442);

Shape* Shape445 = new Shape();
LineSet* LineSet446 = new LineSet();
LineSet446->setVertexCount(new int[1]{2});
Coordinate* Coordinate447 = new Coordinate();
Coordinate447->setPoint(new float[6]{-0.0801,0.0712,-0.0766,0,1,0});
LineSet446->setCoord(Coordinate447);

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA* ColorRGBA448 = new ColorRGBA();
ColorRGBA448->setUSE("HAnimSegmentLineColorRGBA");
LineSet446->setColor(ColorRGBA448);

Shape445->setGeometry(LineSet446);

HAnimSegment441->addChild(Shape445);

Shape* Shape449 = new Shape();
LineSet* LineSet450 = new LineSet();
LineSet450->setVertexCount(new int[1]{2});
Coordinate* Coordinate451 = new Coordinate();
Coordinate451->setPoint(new float[6]{-0.0801,0.0712,-0.0766,0,1,0});
LineSet450->setCoord(Coordinate451);

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA* ColorRGBA452 = new ColorRGBA();
ColorRGBA452->setUSE("HAnimSegmentLineColorRGBA");
LineSet450->setColor(ColorRGBA452);

Shape449->setGeometry(LineSet450);

HAnimSegment441->addChild(Shape449);

HAnimJoint440->addChild(HAnimSegment441);

HAnimJoint* HAnimJoint453 = new HAnimJoint();
HAnimJoint453->setName("r_talocalcaneonavicular");
HAnimJoint453->setDEF("hanim_r_talocalcaneonavicular");
HAnimJoint453->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment454 = new HAnimSegment();
HAnimSegment454->setName("r_navicular");
HAnimSegment454->setDEF("hanim_r_navicular");
Transform* Transform455 = new Transform();
//Empty Transform
Transform* Transform456 = new Transform();
//Empty Transform
Shape* Shape457 = new Shape();
Shape457->setUSE("HAnimJointShape");
Transform456->addChild(Shape457);

Transform455->addChild(Transform456);

HAnimSegment454->addChild(Transform455);

Shape* Shape458 = new Shape();
LineSet* LineSet459 = new LineSet();
LineSet459->setVertexCount(new int[1]{2});
Coordinate* Coordinate460 = new Coordinate();
Coordinate460->setPoint(new float[6]{0,1,0,0,1,0});
LineSet459->setCoord(Coordinate460);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA* ColorRGBA461 = new ColorRGBA();
ColorRGBA461->setUSE("HAnimSegmentLineColorRGBA");
LineSet459->setColor(ColorRGBA461);

Shape458->setGeometry(LineSet459);

HAnimSegment454->addChild(Shape458);

Shape* Shape462 = new Shape();
LineSet* LineSet463 = new LineSet();
LineSet463->setVertexCount(new int[1]{2});
Coordinate* Coordinate464 = new Coordinate();
Coordinate464->setPoint(new float[6]{0,1,0,0,1,0});
LineSet463->setCoord(Coordinate464);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA* ColorRGBA465 = new ColorRGBA();
ColorRGBA465->setUSE("HAnimSegmentLineColorRGBA");
LineSet463->setColor(ColorRGBA465);

Shape462->setGeometry(LineSet463);

HAnimSegment454->addChild(Shape462);

Shape* Shape466 = new Shape();
LineSet* LineSet467 = new LineSet();
LineSet467->setVertexCount(new int[1]{2});
Coordinate* Coordinate468 = new Coordinate();
Coordinate468->setPoint(new float[6]{0,1,0,0,1,0});
LineSet467->setCoord(Coordinate468);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA* ColorRGBA469 = new ColorRGBA();
ColorRGBA469->setUSE("HAnimSegmentLineColorRGBA");
LineSet467->setColor(ColorRGBA469);

Shape466->setGeometry(LineSet467);

HAnimSegment454->addChild(Shape466);

HAnimJoint453->addChild(HAnimSegment454);

HAnimJoint* HAnimJoint470 = new HAnimJoint();
HAnimJoint470->setName("r_cuneonavicular_1");
HAnimJoint470->setDEF("hanim_r_cuneonavicular_1");
HAnimJoint470->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment471 = new HAnimSegment();
HAnimSegment471->setName("r_cuneiform_1");
HAnimSegment471->setDEF("hanim_r_cuneiform_1");
Transform* Transform472 = new Transform();
//Empty Transform
Transform* Transform473 = new Transform();
//Empty Transform
Shape* Shape474 = new Shape();
Shape474->setUSE("HAnimJointShape");
Transform473->addChild(Shape474);

Transform472->addChild(Transform473);

HAnimSegment471->addChild(Transform472);

Shape* Shape475 = new Shape();
LineSet* LineSet476 = new LineSet();
LineSet476->setVertexCount(new int[1]{2});
Coordinate* Coordinate477 = new Coordinate();
Coordinate477->setPoint(new float[6]{0,1,0,0,1,0});
LineSet476->setCoord(Coordinate477);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA* ColorRGBA478 = new ColorRGBA();
ColorRGBA478->setUSE("HAnimSegmentLineColorRGBA");
LineSet476->setColor(ColorRGBA478);

Shape475->setGeometry(LineSet476);

HAnimSegment471->addChild(Shape475);

HAnimJoint470->addChild(HAnimSegment471);

HAnimJoint* HAnimJoint479 = new HAnimJoint();
HAnimJoint479->setName("r_tarsometatarsal_1");
HAnimJoint479->setDEF("hanim_r_tarsometatarsal_1");
HAnimJoint479->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment480 = new HAnimSegment();
HAnimSegment480->setName("r_metatarsal_1");
HAnimSegment480->setDEF("hanim_r_metatarsal_1");
Transform* Transform481 = new Transform();
//Empty Transform
Transform* Transform482 = new Transform();
//Empty Transform
Shape* Shape483 = new Shape();
Shape483->setUSE("HAnimJointShape");
Transform482->addChild(Shape483);

Transform481->addChild(Transform482);

HAnimSegment480->addChild(Transform481);

Shape* Shape484 = new Shape();
LineSet* LineSet485 = new LineSet();
LineSet485->setVertexCount(new int[1]{2});
Coordinate* Coordinate486 = new Coordinate();
Coordinate486->setPoint(new float[6]{0,1,0,0,1,0});
LineSet485->setCoord(Coordinate486);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA* ColorRGBA487 = new ColorRGBA();
ColorRGBA487->setUSE("HAnimSegmentLineColorRGBA");
LineSet485->setColor(ColorRGBA487);

Shape484->setGeometry(LineSet485);

HAnimSegment480->addChild(Shape484);

HAnimSite* HAnimSite488 = new HAnimSite();
HAnimSite488->setName("r_metatarsal_phalanx_1_pt");
HAnimSite488->setDEF("hanim_r_metatarsal_phalanx_1_pt");
HAnimSite488->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor489 = new TouchSensor();
TouchSensor489->setDescription("HAnimSite r_metatarsal_phalanx_1_pt");
HAnimSite488->addChild(TouchSensor489);

Shape* Shape490 = new Shape();
Shape490->setUSE("HAnimSiteShape");
HAnimSite488->addChild(Shape490);

HAnimSegment480->addChild(HAnimSite488);

HAnimJoint479->addChild(HAnimSegment480);

HAnimJoint* HAnimJoint491 = new HAnimJoint();
HAnimJoint491->setName("r_metatarsophalangeal_1");
HAnimJoint491->setDEF("hanim_r_metatarsophalangeal_1");
HAnimJoint491->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment492 = new HAnimSegment();
HAnimSegment492->setName("r_tarsal_proximal_phalanx_1");
HAnimSegment492->setDEF("hanim_r_tarsal_proximal_phalanx_1");
Transform* Transform493 = new Transform();
//Empty Transform
Transform* Transform494 = new Transform();
//Empty Transform
Shape* Shape495 = new Shape();
Shape495->setUSE("HAnimJointShape");
Transform494->addChild(Shape495);

Transform493->addChild(Transform494);

HAnimSegment492->addChild(Transform493);

Shape* Shape496 = new Shape();
LineSet* LineSet497 = new LineSet();
LineSet497->setVertexCount(new int[1]{2});
Coordinate* Coordinate498 = new Coordinate();
Coordinate498->setPoint(new float[6]{0,1,0,0,1,0});
LineSet497->setCoord(Coordinate498);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA499 = new ColorRGBA();
ColorRGBA499->setUSE("HAnimSegmentLineColorRGBA");
LineSet497->setColor(ColorRGBA499);

Shape496->setGeometry(LineSet497);

HAnimSegment492->addChild(Shape496);

HAnimSite* HAnimSite500 = new HAnimSite();
HAnimSite500->setName("r_tarsal_distal_phalanx_1_tip");
HAnimSite500->setDEF("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimSite500->setTranslation(new float[3]{0.1,-1.05,0});
TouchSensor* TouchSensor501 = new TouchSensor();
TouchSensor501->setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip");
HAnimSite500->addChild(TouchSensor501);

Shape* Shape502 = new Shape();
Shape502->setUSE("HAnimSiteShape");
HAnimSite500->addChild(Shape502);

HAnimSegment492->addChild(HAnimSite500);

HAnimJoint491->addChild(HAnimSegment492);

HAnimJoint* HAnimJoint503 = new HAnimJoint();
HAnimJoint503->setName("r_tarsal_interphalangeal_1");
HAnimJoint503->setDEF("hanim_r_tarsal_interphalangeal_1");
HAnimJoint503->setCenter(new float[3]{0,1,0});
HAnimJoint491->addChild(HAnimJoint503);

HAnimJoint479->addChild(HAnimJoint491);

HAnimJoint470->addChild(HAnimJoint479);

HAnimJoint453->addChild(HAnimJoint470);

HAnimJoint* HAnimJoint504 = new HAnimJoint();
HAnimJoint504->setName("r_cuneonavicular_2");
HAnimJoint504->setDEF("hanim_r_cuneonavicular_2");
HAnimJoint504->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment505 = new HAnimSegment();
HAnimSegment505->setName("r_cuneiform_2");
HAnimSegment505->setDEF("hanim_r_cuneiform_2");
Transform* Transform506 = new Transform();
//Empty Transform
Transform* Transform507 = new Transform();
//Empty Transform
Shape* Shape508 = new Shape();
Shape508->setUSE("HAnimJointShape");
Transform507->addChild(Shape508);

Transform506->addChild(Transform507);

HAnimSegment505->addChild(Transform506);

Shape* Shape509 = new Shape();
LineSet* LineSet510 = new LineSet();
LineSet510->setVertexCount(new int[1]{2});
Coordinate* Coordinate511 = new Coordinate();
Coordinate511->setPoint(new float[6]{0,1,0,0,1,0});
LineSet510->setCoord(Coordinate511);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA* ColorRGBA512 = new ColorRGBA();
ColorRGBA512->setUSE("HAnimSegmentLineColorRGBA");
LineSet510->setColor(ColorRGBA512);

Shape509->setGeometry(LineSet510);

HAnimSegment505->addChild(Shape509);

HAnimJoint504->addChild(HAnimSegment505);

HAnimJoint* HAnimJoint513 = new HAnimJoint();
HAnimJoint513->setName("r_tarsometatarsal_2");
HAnimJoint513->setDEF("hanim_r_tarsometatarsal_2");
HAnimJoint513->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment514 = new HAnimSegment();
HAnimSegment514->setName("r_metatarsal_2");
HAnimSegment514->setDEF("hanim_r_metatarsal_2");
Transform* Transform515 = new Transform();
//Empty Transform
Transform* Transform516 = new Transform();
//Empty Transform
Shape* Shape517 = new Shape();
Shape517->setUSE("HAnimJointShape");
Transform516->addChild(Shape517);

Transform515->addChild(Transform516);

HAnimSegment514->addChild(Transform515);

Shape* Shape518 = new Shape();
LineSet* LineSet519 = new LineSet();
LineSet519->setVertexCount(new int[1]{2});
Coordinate* Coordinate520 = new Coordinate();
Coordinate520->setPoint(new float[6]{0,1,0,0,1,0});
LineSet519->setCoord(Coordinate520);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA* ColorRGBA521 = new ColorRGBA();
ColorRGBA521->setUSE("HAnimSegmentLineColorRGBA");
LineSet519->setColor(ColorRGBA521);

Shape518->setGeometry(LineSet519);

HAnimSegment514->addChild(Shape518);

HAnimJoint513->addChild(HAnimSegment514);

HAnimJoint* HAnimJoint522 = new HAnimJoint();
HAnimJoint522->setName("r_metatarsophalangeal_2");
HAnimJoint522->setDEF("hanim_r_metatarsophalangeal_2");
HAnimJoint522->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment523 = new HAnimSegment();
HAnimSegment523->setName("r_tarsal_proximal_phalanx_2");
HAnimSegment523->setDEF("hanim_r_tarsal_proximal_phalanx_2");
Transform* Transform524 = new Transform();
//Empty Transform
Transform* Transform525 = new Transform();
//Empty Transform
Shape* Shape526 = new Shape();
Shape526->setUSE("HAnimJointShape");
Transform525->addChild(Shape526);

Transform524->addChild(Transform525);

HAnimSegment523->addChild(Transform524);

Shape* Shape527 = new Shape();
LineSet* LineSet528 = new LineSet();
LineSet528->setVertexCount(new int[1]{2});
Coordinate* Coordinate529 = new Coordinate();
Coordinate529->setPoint(new float[6]{0,1,0,0,1,0});
LineSet528->setCoord(Coordinate529);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA530 = new ColorRGBA();
ColorRGBA530->setUSE("HAnimSegmentLineColorRGBA");
LineSet528->setColor(ColorRGBA530);

Shape527->setGeometry(LineSet528);

HAnimSegment523->addChild(Shape527);

HAnimJoint522->addChild(HAnimSegment523);

HAnimJoint* HAnimJoint531 = new HAnimJoint();
HAnimJoint531->setName("r_tarsal_proximal_interphalangeal_2");
HAnimJoint531->setDEF("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimJoint531->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment532 = new HAnimSegment();
HAnimSegment532->setName("r_tarsal_middle_phalanx_2");
HAnimSegment532->setDEF("hanim_r_tarsal_middle_phalanx_2");
Transform* Transform533 = new Transform();
//Empty Transform
Transform* Transform534 = new Transform();
//Empty Transform
Shape* Shape535 = new Shape();
Shape535->setUSE("HAnimJointShape");
Transform534->addChild(Shape535);

Transform533->addChild(Transform534);

HAnimSegment532->addChild(Transform533);

Shape* Shape536 = new Shape();
LineSet* LineSet537 = new LineSet();
LineSet537->setVertexCount(new int[1]{2});
Coordinate* Coordinate538 = new Coordinate();
Coordinate538->setPoint(new float[6]{0,1,0,0,1,0});
LineSet537->setCoord(Coordinate538);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA539 = new ColorRGBA();
ColorRGBA539->setUSE("HAnimSegmentLineColorRGBA");
LineSet537->setColor(ColorRGBA539);

Shape536->setGeometry(LineSet537);

HAnimSegment532->addChild(Shape536);

HAnimSite* HAnimSite540 = new HAnimSite();
HAnimSite540->setName("r_tarsal_distal_phalanx_2_tip");
HAnimSite540->setDEF("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimSite540->setTranslation(new float[3]{-0.05,-1.12,0});
TouchSensor* TouchSensor541 = new TouchSensor();
TouchSensor541->setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip");
HAnimSite540->addChild(TouchSensor541);

Shape* Shape542 = new Shape();
Shape542->setUSE("HAnimSiteShape");
HAnimSite540->addChild(Shape542);

HAnimSegment532->addChild(HAnimSite540);

HAnimJoint531->addChild(HAnimSegment532);

HAnimJoint* HAnimJoint543 = new HAnimJoint();
HAnimJoint543->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint543->setDEF("hanim_r_tarsal_distal_interphalangeal_2");
HAnimJoint543->setCenter(new float[3]{0,1,0});
HAnimJoint531->addChild(HAnimJoint543);

HAnimJoint522->addChild(HAnimJoint531);

HAnimJoint513->addChild(HAnimJoint522);

HAnimJoint504->addChild(HAnimJoint513);

HAnimJoint453->addChild(HAnimJoint504);

HAnimJoint* HAnimJoint544 = new HAnimJoint();
HAnimJoint544->setName("r_cuneonavicular_3");
HAnimJoint544->setDEF("hanim_r_cuneonavicular_3");
HAnimJoint544->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment545 = new HAnimSegment();
HAnimSegment545->setName("r_cuneiform_3");
HAnimSegment545->setDEF("hanim_r_cuneiform_3");
Transform* Transform546 = new Transform();
//Empty Transform
Transform* Transform547 = new Transform();
//Empty Transform
Shape* Shape548 = new Shape();
Shape548->setUSE("HAnimJointShape");
Transform547->addChild(Shape548);

Transform546->addChild(Transform547);

HAnimSegment545->addChild(Transform546);

Shape* Shape549 = new Shape();
LineSet* LineSet550 = new LineSet();
LineSet550->setVertexCount(new int[1]{2});
Coordinate* Coordinate551 = new Coordinate();
Coordinate551->setPoint(new float[6]{0,1,0,0,1,0});
LineSet550->setCoord(Coordinate551);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA* ColorRGBA552 = new ColorRGBA();
ColorRGBA552->setUSE("HAnimSegmentLineColorRGBA");
LineSet550->setColor(ColorRGBA552);

Shape549->setGeometry(LineSet550);

HAnimSegment545->addChild(Shape549);

HAnimJoint544->addChild(HAnimSegment545);

HAnimJoint* HAnimJoint553 = new HAnimJoint();
HAnimJoint553->setName("r_tarsometatarsal_3");
HAnimJoint553->setDEF("hanim_r_tarsometatarsal_3");
HAnimJoint553->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment554 = new HAnimSegment();
HAnimSegment554->setName("r_metatarsal_3");
HAnimSegment554->setDEF("hanim_r_metatarsal_3");
Transform* Transform555 = new Transform();
//Empty Transform
Transform* Transform556 = new Transform();
//Empty Transform
Shape* Shape557 = new Shape();
Shape557->setUSE("HAnimJointShape");
Transform556->addChild(Shape557);

Transform555->addChild(Transform556);

HAnimSegment554->addChild(Transform555);

Shape* Shape558 = new Shape();
LineSet* LineSet559 = new LineSet();
LineSet559->setVertexCount(new int[1]{2});
Coordinate* Coordinate560 = new Coordinate();
Coordinate560->setPoint(new float[6]{0,1,0,0,1,0});
LineSet559->setCoord(Coordinate560);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA* ColorRGBA561 = new ColorRGBA();
ColorRGBA561->setUSE("HAnimSegmentLineColorRGBA");
LineSet559->setColor(ColorRGBA561);

Shape558->setGeometry(LineSet559);

HAnimSegment554->addChild(Shape558);

HAnimJoint553->addChild(HAnimSegment554);

HAnimJoint* HAnimJoint562 = new HAnimJoint();
HAnimJoint562->setName("r_metatarsophalangeal_3");
HAnimJoint562->setDEF("hanim_r_metatarsophalangeal_3");
HAnimJoint562->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment563 = new HAnimSegment();
HAnimSegment563->setName("r_tarsal_proximal_phalanx_3");
HAnimSegment563->setDEF("hanim_r_tarsal_proximal_phalanx_3");
Transform* Transform564 = new Transform();
//Empty Transform
Transform* Transform565 = new Transform();
//Empty Transform
Shape* Shape566 = new Shape();
Shape566->setUSE("HAnimJointShape");
Transform565->addChild(Shape566);

Transform564->addChild(Transform565);

HAnimSegment563->addChild(Transform564);

Shape* Shape567 = new Shape();
LineSet* LineSet568 = new LineSet();
LineSet568->setVertexCount(new int[1]{2});
Coordinate* Coordinate569 = new Coordinate();
Coordinate569->setPoint(new float[6]{0,1,0,0,1,0});
LineSet568->setCoord(Coordinate569);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA570 = new ColorRGBA();
ColorRGBA570->setUSE("HAnimSegmentLineColorRGBA");
LineSet568->setColor(ColorRGBA570);

Shape567->setGeometry(LineSet568);

HAnimSegment563->addChild(Shape567);

HAnimJoint562->addChild(HAnimSegment563);

HAnimJoint* HAnimJoint571 = new HAnimJoint();
HAnimJoint571->setName("r_tarsal_proximal_interphalangeal_3");
HAnimJoint571->setDEF("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimJoint571->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment572 = new HAnimSegment();
HAnimSegment572->setName("r_tarsal_middle_phalanx_3");
HAnimSegment572->setDEF("hanim_r_tarsal_middle_phalanx_3");
Transform* Transform573 = new Transform();
//Empty Transform
Transform* Transform574 = new Transform();
//Empty Transform
Shape* Shape575 = new Shape();
Shape575->setUSE("HAnimJointShape");
Transform574->addChild(Shape575);

Transform573->addChild(Transform574);

HAnimSegment572->addChild(Transform573);

Shape* Shape576 = new Shape();
LineSet* LineSet577 = new LineSet();
LineSet577->setVertexCount(new int[1]{2});
Coordinate* Coordinate578 = new Coordinate();
Coordinate578->setPoint(new float[6]{0,1,0,0,1,0});
LineSet577->setCoord(Coordinate578);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA579 = new ColorRGBA();
ColorRGBA579->setUSE("HAnimSegmentLineColorRGBA");
LineSet577->setColor(ColorRGBA579);

Shape576->setGeometry(LineSet577);

HAnimSegment572->addChild(Shape576);

HAnimSite* HAnimSite580 = new HAnimSite();
HAnimSite580->setName("r_tarsal_distal_phalanx_3_tip");
HAnimSite580->setDEF("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimSite580->setTranslation(new float[3]{-0.15,-1.13,0});
TouchSensor* TouchSensor581 = new TouchSensor();
TouchSensor581->setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip");
HAnimSite580->addChild(TouchSensor581);

Shape* Shape582 = new Shape();
Shape582->setUSE("HAnimSiteShape");
HAnimSite580->addChild(Shape582);

HAnimSegment572->addChild(HAnimSite580);

HAnimJoint571->addChild(HAnimSegment572);

HAnimJoint* HAnimJoint583 = new HAnimJoint();
HAnimJoint583->setName("r_tarsal_distal_interphalangeal_3");
HAnimJoint583->setDEF("hanim_r_tarsal_distal_interphalangeal_3");
HAnimJoint583->setCenter(new float[3]{0,1,0});
HAnimJoint571->addChild(HAnimJoint583);

HAnimJoint562->addChild(HAnimJoint571);

HAnimJoint553->addChild(HAnimJoint562);

HAnimJoint544->addChild(HAnimJoint553);

HAnimJoint453->addChild(HAnimJoint544);

HAnimJoint440->addChild(HAnimJoint453);

HAnimJoint* HAnimJoint584 = new HAnimJoint();
HAnimJoint584->setName("r_calcaneocuboid");
HAnimJoint584->setDEF("hanim_r_calcaneocuboid");
HAnimJoint584->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment585 = new HAnimSegment();
HAnimSegment585->setName("r_calcaneus");
HAnimSegment585->setDEF("hanim_r_calcaneus");
Transform* Transform586 = new Transform();
//Empty Transform
Transform* Transform587 = new Transform();
//Empty Transform
Shape* Shape588 = new Shape();
Shape588->setUSE("HAnimJointShape");
Transform587->addChild(Shape588);

Transform586->addChild(Transform587);

HAnimSegment585->addChild(Transform586);

Shape* Shape589 = new Shape();
LineSet* LineSet590 = new LineSet();
LineSet590->setVertexCount(new int[1]{2});
Coordinate* Coordinate591 = new Coordinate();
Coordinate591->setPoint(new float[6]{0,1,0,0,1,0});
LineSet590->setCoord(Coordinate591);

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA* ColorRGBA592 = new ColorRGBA();
ColorRGBA592->setUSE("HAnimSegmentLineColorRGBA");
LineSet590->setColor(ColorRGBA592);

Shape589->setGeometry(LineSet590);

HAnimSegment585->addChild(Shape589);

HAnimJoint584->addChild(HAnimSegment585);

HAnimJoint* HAnimJoint593 = new HAnimJoint();
HAnimJoint593->setName("r_transversetarsal");
HAnimJoint593->setDEF("hanim_r_transversetarsal");
HAnimJoint593->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment594 = new HAnimSegment();
HAnimSegment594->setName("r_cuboid");
HAnimSegment594->setDEF("hanim_r_cuboid");
Transform* Transform595 = new Transform();
//Empty Transform
Transform* Transform596 = new Transform();
//Empty Transform
Shape* Shape597 = new Shape();
Shape597->setUSE("HAnimJointShape");
Transform596->addChild(Shape597);

Transform595->addChild(Transform596);

HAnimSegment594->addChild(Transform595);

Shape* Shape598 = new Shape();
LineSet* LineSet599 = new LineSet();
LineSet599->setVertexCount(new int[1]{2});
Coordinate* Coordinate600 = new Coordinate();
Coordinate600->setPoint(new float[6]{0,1,0,0,1,0});
LineSet599->setCoord(Coordinate600);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA* ColorRGBA601 = new ColorRGBA();
ColorRGBA601->setUSE("HAnimSegmentLineColorRGBA");
LineSet599->setColor(ColorRGBA601);

Shape598->setGeometry(LineSet599);

HAnimSegment594->addChild(Shape598);

Shape* Shape602 = new Shape();
LineSet* LineSet603 = new LineSet();
LineSet603->setVertexCount(new int[1]{2});
Coordinate* Coordinate604 = new Coordinate();
Coordinate604->setPoint(new float[6]{0,1,0,0,1,0});
LineSet603->setCoord(Coordinate604);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA* ColorRGBA605 = new ColorRGBA();
ColorRGBA605->setUSE("HAnimSegmentLineColorRGBA");
LineSet603->setColor(ColorRGBA605);

Shape602->setGeometry(LineSet603);

HAnimSegment594->addChild(Shape602);

HAnimJoint593->addChild(HAnimSegment594);

HAnimJoint* HAnimJoint606 = new HAnimJoint();
HAnimJoint606->setName("r_tarsometatarsal_4");
HAnimJoint606->setDEF("hanim_r_tarsometatarsal_4");
HAnimJoint606->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment607 = new HAnimSegment();
HAnimSegment607->setName("r_metatarsal_4");
HAnimSegment607->setDEF("hanim_r_metatarsal_4");
Transform* Transform608 = new Transform();
//Empty Transform
Transform* Transform609 = new Transform();
//Empty Transform
Shape* Shape610 = new Shape();
Shape610->setUSE("HAnimJointShape");
Transform609->addChild(Shape610);

Transform608->addChild(Transform609);

HAnimSegment607->addChild(Transform608);

Shape* Shape611 = new Shape();
LineSet* LineSet612 = new LineSet();
LineSet612->setVertexCount(new int[1]{2});
Coordinate* Coordinate613 = new Coordinate();
Coordinate613->setPoint(new float[6]{0,1,0,0,1,0});
LineSet612->setCoord(Coordinate613);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA* ColorRGBA614 = new ColorRGBA();
ColorRGBA614->setUSE("HAnimSegmentLineColorRGBA");
LineSet612->setColor(ColorRGBA614);

Shape611->setGeometry(LineSet612);

HAnimSegment607->addChild(Shape611);

HAnimJoint606->addChild(HAnimSegment607);

HAnimJoint* HAnimJoint615 = new HAnimJoint();
HAnimJoint615->setName("r_metatarsophalangeal_4");
HAnimJoint615->setDEF("hanim_r_metatarsophalangeal_4");
HAnimJoint615->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment616 = new HAnimSegment();
HAnimSegment616->setName("r_tarsal_proximal_phalanx_4");
HAnimSegment616->setDEF("hanim_r_tarsal_proximal_phalanx_4");
Transform* Transform617 = new Transform();
//Empty Transform
Transform* Transform618 = new Transform();
//Empty Transform
Shape* Shape619 = new Shape();
Shape619->setUSE("HAnimJointShape");
Transform618->addChild(Shape619);

Transform617->addChild(Transform618);

HAnimSegment616->addChild(Transform617);

Shape* Shape620 = new Shape();
LineSet* LineSet621 = new LineSet();
LineSet621->setVertexCount(new int[1]{2});
Coordinate* Coordinate622 = new Coordinate();
Coordinate622->setPoint(new float[6]{0,1,0,0,1,0});
LineSet621->setCoord(Coordinate622);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA623 = new ColorRGBA();
ColorRGBA623->setUSE("HAnimSegmentLineColorRGBA");
LineSet621->setColor(ColorRGBA623);

Shape620->setGeometry(LineSet621);

HAnimSegment616->addChild(Shape620);

HAnimJoint615->addChild(HAnimSegment616);

HAnimJoint* HAnimJoint624 = new HAnimJoint();
HAnimJoint624->setName("r_tarsal_proximal_interphalangeal_4");
HAnimJoint624->setDEF("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimJoint624->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment625 = new HAnimSegment();
HAnimSegment625->setName("r_tarsal_middle_phalanx_4");
HAnimSegment625->setDEF("hanim_r_tarsal_middle_phalanx_4");
Transform* Transform626 = new Transform();
//Empty Transform
Transform* Transform627 = new Transform();
//Empty Transform
Shape* Shape628 = new Shape();
Shape628->setUSE("HAnimJointShape");
Transform627->addChild(Shape628);

Transform626->addChild(Transform627);

HAnimSegment625->addChild(Transform626);

Shape* Shape629 = new Shape();
LineSet* LineSet630 = new LineSet();
LineSet630->setVertexCount(new int[1]{2});
Coordinate* Coordinate631 = new Coordinate();
Coordinate631->setPoint(new float[6]{0,1,0,0,1,0});
LineSet630->setCoord(Coordinate631);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA632 = new ColorRGBA();
ColorRGBA632->setUSE("HAnimSegmentLineColorRGBA");
LineSet630->setColor(ColorRGBA632);

Shape629->setGeometry(LineSet630);

HAnimSegment625->addChild(Shape629);

HAnimSite* HAnimSite633 = new HAnimSite();
HAnimSite633->setName("r_tarsal_distal_phalanx_4_tip");
HAnimSite633->setDEF("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimSite633->setTranslation(new float[3]{-0.25,-1.1,0});
TouchSensor* TouchSensor634 = new TouchSensor();
TouchSensor634->setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip");
HAnimSite633->addChild(TouchSensor634);

Shape* Shape635 = new Shape();
Shape635->setUSE("HAnimSiteShape");
HAnimSite633->addChild(Shape635);

HAnimSegment625->addChild(HAnimSite633);

HAnimJoint624->addChild(HAnimSegment625);

HAnimJoint* HAnimJoint636 = new HAnimJoint();
HAnimJoint636->setName("r_tarsal_distal_interphalangeal_4");
HAnimJoint636->setDEF("hanim_r_tarsal_distal_interphalangeal_4");
HAnimJoint636->setCenter(new float[3]{0,1,0});
HAnimJoint624->addChild(HAnimJoint636);

HAnimJoint615->addChild(HAnimJoint624);

HAnimJoint606->addChild(HAnimJoint615);

HAnimJoint593->addChild(HAnimJoint606);

HAnimJoint* HAnimJoint637 = new HAnimJoint();
HAnimJoint637->setName("r_tarsometatarsal_5");
HAnimJoint637->setDEF("hanim_r_tarsometatarsal_5");
HAnimJoint637->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment638 = new HAnimSegment();
HAnimSegment638->setName("r_metatarsal_5");
HAnimSegment638->setDEF("hanim_r_metatarsal_5");
Transform* Transform639 = new Transform();
//Empty Transform
Transform* Transform640 = new Transform();
//Empty Transform
Shape* Shape641 = new Shape();
Shape641->setUSE("HAnimJointShape");
Transform640->addChild(Shape641);

Transform639->addChild(Transform640);

HAnimSegment638->addChild(Transform639);

Shape* Shape642 = new Shape();
LineSet* LineSet643 = new LineSet();
LineSet643->setVertexCount(new int[1]{2});
Coordinate* Coordinate644 = new Coordinate();
Coordinate644->setPoint(new float[6]{0,1,0,0,1,0});
LineSet643->setCoord(Coordinate644);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA* ColorRGBA645 = new ColorRGBA();
ColorRGBA645->setUSE("HAnimSegmentLineColorRGBA");
LineSet643->setColor(ColorRGBA645);

Shape642->setGeometry(LineSet643);

HAnimSegment638->addChild(Shape642);

HAnimSite* HAnimSite646 = new HAnimSite();
HAnimSite646->setName("r_metatarsal_phalanx_5_pt");
HAnimSite646->setDEF("hanim_r_metatarsal_phalanx_5_pt");
HAnimSite646->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor647 = new TouchSensor();
TouchSensor647->setDescription("HAnimSite r_metatarsal_phalanx_5_pt");
HAnimSite646->addChild(TouchSensor647);

Shape* Shape648 = new Shape();
Shape648->setUSE("HAnimSiteShape");
HAnimSite646->addChild(Shape648);

HAnimSegment638->addChild(HAnimSite646);

HAnimJoint637->addChild(HAnimSegment638);

HAnimJoint* HAnimJoint649 = new HAnimJoint();
HAnimJoint649->setName("r_metatarsophalangeal_5");
HAnimJoint649->setDEF("hanim_r_metatarsophalangeal_5");
HAnimJoint649->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment650 = new HAnimSegment();
HAnimSegment650->setName("r_tarsal_proximal_phalanx_5");
HAnimSegment650->setDEF("hanim_r_tarsal_proximal_phalanx_5");
Transform* Transform651 = new Transform();
//Empty Transform
Transform* Transform652 = new Transform();
//Empty Transform
Shape* Shape653 = new Shape();
Shape653->setUSE("HAnimJointShape");
Transform652->addChild(Shape653);

Transform651->addChild(Transform652);

HAnimSegment650->addChild(Transform651);

Shape* Shape654 = new Shape();
LineSet* LineSet655 = new LineSet();
LineSet655->setVertexCount(new int[1]{2});
Coordinate* Coordinate656 = new Coordinate();
Coordinate656->setPoint(new float[6]{0,1,0,0,1,0});
LineSet655->setCoord(Coordinate656);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA657 = new ColorRGBA();
ColorRGBA657->setUSE("HAnimSegmentLineColorRGBA");
LineSet655->setColor(ColorRGBA657);

Shape654->setGeometry(LineSet655);

HAnimSegment650->addChild(Shape654);

HAnimJoint649->addChild(HAnimSegment650);

HAnimJoint* HAnimJoint658 = new HAnimJoint();
HAnimJoint658->setName("r_tarsal_proximal_interphalangeal_5");
HAnimJoint658->setDEF("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimJoint658->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment659 = new HAnimSegment();
HAnimSegment659->setName("r_tarsal_middle_phalanx_5");
HAnimSegment659->setDEF("hanim_r_tarsal_middle_phalanx_5");
Transform* Transform660 = new Transform();
//Empty Transform
Transform* Transform661 = new Transform();
//Empty Transform
Shape* Shape662 = new Shape();
Shape662->setUSE("HAnimJointShape");
Transform661->addChild(Shape662);

Transform660->addChild(Transform661);

HAnimSegment659->addChild(Transform660);

Shape* Shape663 = new Shape();
LineSet* LineSet664 = new LineSet();
LineSet664->setVertexCount(new int[1]{2});
Coordinate* Coordinate665 = new Coordinate();
Coordinate665->setPoint(new float[6]{0,1,0,0,1,0});
LineSet664->setCoord(Coordinate665);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA666 = new ColorRGBA();
ColorRGBA666->setUSE("HAnimSegmentLineColorRGBA");
LineSet664->setColor(ColorRGBA666);

Shape663->setGeometry(LineSet664);

HAnimSegment659->addChild(Shape663);

HAnimSite* HAnimSite667 = new HAnimSite();
HAnimSite667->setName("r_tarsal_distal_phalanx_5_tip");
HAnimSite667->setDEF("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimSite667->setTranslation(new float[3]{-0.34,-1.05,0});
TouchSensor* TouchSensor668 = new TouchSensor();
TouchSensor668->setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip");
HAnimSite667->addChild(TouchSensor668);

Shape* Shape669 = new Shape();
Shape669->setUSE("HAnimSiteShape");
HAnimSite667->addChild(Shape669);

HAnimSegment659->addChild(HAnimSite667);

HAnimJoint658->addChild(HAnimSegment659);

HAnimJoint* HAnimJoint670 = new HAnimJoint();
HAnimJoint670->setName("r_tarsal_distal_interphalangeal_5");
HAnimJoint670->setDEF("hanim_r_tarsal_distal_interphalangeal_5");
HAnimJoint670->setCenter(new float[3]{0,1,0});
HAnimJoint658->addChild(HAnimJoint670);

HAnimJoint649->addChild(HAnimJoint658);

HAnimJoint637->addChild(HAnimJoint649);

HAnimJoint593->addChild(HAnimJoint637);

HAnimJoint584->addChild(HAnimJoint593);

HAnimJoint440->addChild(HAnimJoint584);

HAnimJoint425->addChild(HAnimJoint440);

HAnimJoint407->addChild(HAnimJoint425);

HAnimJoint106->addChild(HAnimJoint407);

HAnimJoint52->addChild(HAnimJoint106);

HAnimJoint* HAnimJoint671 = new HAnimJoint();
HAnimJoint671->setName("vl5");
HAnimJoint671->setDEF("hanim_vl5");
HAnimJoint671->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimSegment* HAnimSegment672 = new HAnimSegment();
HAnimSegment672->setName("l5");
HAnimSegment672->setDEF("hanim_l5");
Transform* Transform673 = new Transform();
//Empty Transform
Transform* Transform674 = new Transform();
//Empty Transform
Shape* Shape675 = new Shape();
Shape675->setUSE("HAnimJointShape");
Transform674->addChild(Shape675);

Transform673->addChild(Transform674);

HAnimSegment672->addChild(Transform673);

Shape* Shape676 = new Shape();
LineSet* LineSet677 = new LineSet();
LineSet677->setVertexCount(new int[1]{2});
Coordinate* Coordinate678 = new Coordinate();
Coordinate678->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
LineSet677->setCoord(Coordinate678);

//from vl5 to vl4 vertices 2
ColorRGBA* ColorRGBA679 = new ColorRGBA();
ColorRGBA679->setUSE("HAnimSegmentLineColorRGBA");
LineSet677->setColor(ColorRGBA679);

Shape676->setGeometry(LineSet677);

HAnimSegment672->addChild(Shape676);

HAnimJoint671->addChild(HAnimSegment672);

HAnimJoint* HAnimJoint680 = new HAnimJoint();
HAnimJoint680->setName("vl4");
HAnimJoint680->setDEF("hanim_vl4");
HAnimJoint680->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimSegment* HAnimSegment681 = new HAnimSegment();
HAnimSegment681->setName("l4");
HAnimSegment681->setDEF("hanim_l4");
Transform* Transform682 = new Transform();
//Empty Transform
Transform* Transform683 = new Transform();
//Empty Transform
Shape* Shape684 = new Shape();
Shape684->setUSE("HAnimJointShape");
Transform683->addChild(Shape684);

Transform682->addChild(Transform683);

HAnimSegment681->addChild(Transform682);

Shape* Shape685 = new Shape();
LineSet* LineSet686 = new LineSet();
LineSet686->setVertexCount(new int[1]{2});
Coordinate* Coordinate687 = new Coordinate();
Coordinate687->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
LineSet686->setCoord(Coordinate687);

//from vl4 to vl3 vertices 2
ColorRGBA* ColorRGBA688 = new ColorRGBA();
ColorRGBA688->setUSE("HAnimSegmentLineColorRGBA");
LineSet686->setColor(ColorRGBA688);

Shape685->setGeometry(LineSet686);

HAnimSegment681->addChild(Shape685);

HAnimJoint680->addChild(HAnimSegment681);

HAnimJoint* HAnimJoint689 = new HAnimJoint();
HAnimJoint689->setName("vl3");
HAnimJoint689->setDEF("hanim_vl3");
HAnimJoint689->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimSegment* HAnimSegment690 = new HAnimSegment();
HAnimSegment690->setName("l3");
HAnimSegment690->setDEF("hanim_l3");
Transform* Transform691 = new Transform();
//Empty Transform
Transform* Transform692 = new Transform();
//Empty Transform
Shape* Shape693 = new Shape();
Shape693->setUSE("HAnimJointShape");
Transform692->addChild(Shape693);

Transform691->addChild(Transform692);

HAnimSegment690->addChild(Transform691);

Shape* Shape694 = new Shape();
LineSet* LineSet695 = new LineSet();
LineSet695->setVertexCount(new int[1]{2});
Coordinate* Coordinate696 = new Coordinate();
Coordinate696->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
LineSet695->setCoord(Coordinate696);

//from vl3 to vl2 vertices 2
ColorRGBA* ColorRGBA697 = new ColorRGBA();
ColorRGBA697->setUSE("HAnimSegmentLineColorRGBA");
LineSet695->setColor(ColorRGBA697);

Shape694->setGeometry(LineSet695);

HAnimSegment690->addChild(Shape694);

HAnimSite* HAnimSite698 = new HAnimSite();
HAnimSite698->setName("l_rib10_pt");
HAnimSite698->setDEF("hanim_l_rib10_pt");
HAnimSite698->setTranslation(new float[3]{0.0871,1.1925,0.0992});
TouchSensor* TouchSensor699 = new TouchSensor();
TouchSensor699->setDescription("HAnimSite l_rib10_pt");
HAnimSite698->addChild(TouchSensor699);

Shape* Shape700 = new Shape();
Shape700->setUSE("HAnimSiteShape");
HAnimSite698->addChild(Shape700);

HAnimSegment690->addChild(HAnimSite698);

HAnimSite* HAnimSite701 = new HAnimSite();
HAnimSite701->setName("r_rib10_pt");
HAnimSite701->setDEF("hanim_r_rib10_pt");
HAnimSite701->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
TouchSensor* TouchSensor702 = new TouchSensor();
TouchSensor702->setDescription("HAnimSite r_rib10_pt");
HAnimSite701->addChild(TouchSensor702);

Shape* Shape703 = new Shape();
Shape703->setUSE("HAnimSiteShape");
HAnimSite701->addChild(Shape703);

HAnimSegment690->addChild(HAnimSite701);

HAnimSite* HAnimSite704 = new HAnimSite();
HAnimSite704->setName("spine_2_middle_back_pt");
HAnimSite704->setDEF("hanim_spine_2_middle_back_pt");
HAnimSite704->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor705 = new TouchSensor();
TouchSensor705->setDescription("HAnimSite spine_2_middle_back_pt");
HAnimSite704->addChild(TouchSensor705);

Shape* Shape706 = new Shape();
Shape706->setUSE("HAnimSiteShape");
HAnimSite704->addChild(Shape706);

HAnimSegment690->addChild(HAnimSite704);

HAnimJoint689->addChild(HAnimSegment690);

HAnimJoint* HAnimJoint707 = new HAnimJoint();
HAnimJoint707->setName("vl2");
HAnimJoint707->setDEF("hanim_vl2");
HAnimJoint707->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimSegment* HAnimSegment708 = new HAnimSegment();
HAnimSegment708->setName("l2");
HAnimSegment708->setDEF("hanim_l2");
Transform* Transform709 = new Transform();
//Empty Transform
Transform* Transform710 = new Transform();
//Empty Transform
Shape* Shape711 = new Shape();
Shape711->setUSE("HAnimJointShape");
Transform710->addChild(Shape711);

Transform709->addChild(Transform710);

HAnimSegment708->addChild(Transform709);

Shape* Shape712 = new Shape();
LineSet* LineSet713 = new LineSet();
LineSet713->setVertexCount(new int[1]{2});
Coordinate* Coordinate714 = new Coordinate();
Coordinate714->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
LineSet713->setCoord(Coordinate714);

//from vl2 to vl1 vertices 2
ColorRGBA* ColorRGBA715 = new ColorRGBA();
ColorRGBA715->setUSE("HAnimSegmentLineColorRGBA");
LineSet713->setColor(ColorRGBA715);

Shape712->setGeometry(LineSet713);

HAnimSegment708->addChild(Shape712);

HAnimJoint707->addChild(HAnimSegment708);

HAnimJoint* HAnimJoint716 = new HAnimJoint();
HAnimJoint716->setName("vl1");
HAnimJoint716->setDEF("hanim_vl1");
HAnimJoint716->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimSegment* HAnimSegment717 = new HAnimSegment();
HAnimSegment717->setName("l1");
HAnimSegment717->setDEF("hanim_l1");
Transform* Transform718 = new Transform();
//Empty Transform
Transform* Transform719 = new Transform();
//Empty Transform
Shape* Shape720 = new Shape();
Shape720->setUSE("HAnimJointShape");
Transform719->addChild(Shape720);

Transform718->addChild(Transform719);

HAnimSegment717->addChild(Transform718);

Shape* Shape721 = new Shape();
LineSet* LineSet722 = new LineSet();
LineSet722->setVertexCount(new int[1]{2});
Coordinate* Coordinate723 = new Coordinate();
Coordinate723->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
LineSet722->setCoord(Coordinate723);

//from vl1 to vt12 vertices 2
ColorRGBA* ColorRGBA724 = new ColorRGBA();
ColorRGBA724->setUSE("HAnimSegmentLineColorRGBA");
LineSet722->setColor(ColorRGBA724);

Shape721->setGeometry(LineSet722);

HAnimSegment717->addChild(Shape721);

HAnimJoint716->addChild(HAnimSegment717);

HAnimJoint* HAnimJoint725 = new HAnimJoint();
HAnimJoint725->setName("vt12");
HAnimJoint725->setDEF("hanim_vt12");
HAnimJoint725->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimSegment* HAnimSegment726 = new HAnimSegment();
HAnimSegment726->setName("t12");
HAnimSegment726->setDEF("hanim_t12");
Transform* Transform727 = new Transform();
//Empty Transform
Transform* Transform728 = new Transform();
//Empty Transform
Shape* Shape729 = new Shape();
Shape729->setUSE("HAnimJointShape");
Transform728->addChild(Shape729);

Transform727->addChild(Transform728);

HAnimSegment726->addChild(Transform727);

Shape* Shape730 = new Shape();
LineSet* LineSet731 = new LineSet();
LineSet731->setVertexCount(new int[1]{2});
Coordinate* Coordinate732 = new Coordinate();
Coordinate732->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
LineSet731->setCoord(Coordinate732);

//from vt12 to vt11 vertices 2
ColorRGBA* ColorRGBA733 = new ColorRGBA();
ColorRGBA733->setUSE("HAnimSegmentLineColorRGBA");
LineSet731->setColor(ColorRGBA733);

Shape730->setGeometry(LineSet731);

HAnimSegment726->addChild(Shape730);

HAnimJoint725->addChild(HAnimSegment726);

HAnimJoint* HAnimJoint734 = new HAnimJoint();
HAnimJoint734->setName("vt11");
HAnimJoint734->setDEF("hanim_vt11");
HAnimJoint734->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimSegment* HAnimSegment735 = new HAnimSegment();
HAnimSegment735->setName("t11");
HAnimSegment735->setDEF("hanim_t11");
Transform* Transform736 = new Transform();
//Empty Transform
Transform* Transform737 = new Transform();
//Empty Transform
Shape* Shape738 = new Shape();
Shape738->setUSE("HAnimJointShape");
Transform737->addChild(Shape738);

Transform736->addChild(Transform737);

HAnimSegment735->addChild(Transform736);

Shape* Shape739 = new Shape();
LineSet* LineSet740 = new LineSet();
LineSet740->setVertexCount(new int[1]{2});
Coordinate* Coordinate741 = new Coordinate();
Coordinate741->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
LineSet740->setCoord(Coordinate741);

//from vt11 to vt10 vertices 2
ColorRGBA* ColorRGBA742 = new ColorRGBA();
ColorRGBA742->setUSE("HAnimSegmentLineColorRGBA");
LineSet740->setColor(ColorRGBA742);

Shape739->setGeometry(LineSet740);

HAnimSegment735->addChild(Shape739);

HAnimSite* HAnimSite743 = new HAnimSite();
HAnimSite743->setName("substernale_pt");
HAnimSite743->setDEF("hanim_substernale_pt");
HAnimSite743->setTranslation(new float[3]{0.0085,1.2995,0.1147});
TouchSensor* TouchSensor744 = new TouchSensor();
TouchSensor744->setDescription("HAnimSite substernale_pt");
HAnimSite743->addChild(TouchSensor744);

Shape* Shape745 = new Shape();
Shape745->setUSE("HAnimSiteShape");
HAnimSite743->addChild(Shape745);

HAnimSegment735->addChild(HAnimSite743);

HAnimJoint734->addChild(HAnimSegment735);

HAnimJoint* HAnimJoint746 = new HAnimJoint();
HAnimJoint746->setName("vt10");
HAnimJoint746->setDEF("hanim_vt10");
HAnimJoint746->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimSegment* HAnimSegment747 = new HAnimSegment();
HAnimSegment747->setName("t10");
HAnimSegment747->setDEF("hanim_t10");
Transform* Transform748 = new Transform();
//Empty Transform
Transform* Transform749 = new Transform();
//Empty Transform
Shape* Shape750 = new Shape();
Shape750->setUSE("HAnimJointShape");
Transform749->addChild(Shape750);

Transform748->addChild(Transform749);

HAnimSegment747->addChild(Transform748);

Shape* Shape751 = new Shape();
LineSet* LineSet752 = new LineSet();
LineSet752->setVertexCount(new int[1]{2});
Coordinate* Coordinate753 = new Coordinate();
Coordinate753->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
LineSet752->setCoord(Coordinate753);

//from vt10 to vt9 vertices 2
ColorRGBA* ColorRGBA754 = new ColorRGBA();
ColorRGBA754->setUSE("HAnimSegmentLineColorRGBA");
LineSet752->setColor(ColorRGBA754);

Shape751->setGeometry(LineSet752);

HAnimSegment747->addChild(Shape751);

HAnimSite* HAnimSite755 = new HAnimSite();
HAnimSite755->setName("l_thelion_pt");
HAnimSite755->setDEF("hanim_l_thelion_pt");
HAnimSite755->setTranslation(new float[3]{0.0918,1.3382,0.1192});
TouchSensor* TouchSensor756 = new TouchSensor();
TouchSensor756->setDescription("HAnimSite l_thelion_pt");
HAnimSite755->addChild(TouchSensor756);

Shape* Shape757 = new Shape();
Shape757->setUSE("HAnimSiteShape");
HAnimSite755->addChild(Shape757);

HAnimSegment747->addChild(HAnimSite755);

HAnimSite* HAnimSite758 = new HAnimSite();
HAnimSite758->setName("r_thelion_pt");
HAnimSite758->setDEF("hanim_r_thelion_pt");
HAnimSite758->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
TouchSensor* TouchSensor759 = new TouchSensor();
TouchSensor759->setDescription("HAnimSite r_thelion_pt");
HAnimSite758->addChild(TouchSensor759);

Shape* Shape760 = new Shape();
Shape760->setUSE("HAnimSiteShape");
HAnimSite758->addChild(Shape760);

HAnimSegment747->addChild(HAnimSite758);

HAnimJoint746->addChild(HAnimSegment747);

HAnimJoint* HAnimJoint761 = new HAnimJoint();
HAnimJoint761->setName("vt9");
HAnimJoint761->setDEF("hanim_vt9");
HAnimJoint761->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimSegment* HAnimSegment762 = new HAnimSegment();
HAnimSegment762->setName("t9");
HAnimSegment762->setDEF("hanim_t9");
Transform* Transform763 = new Transform();
//Empty Transform
Transform* Transform764 = new Transform();
//Empty Transform
Shape* Shape765 = new Shape();
Shape765->setUSE("HAnimJointShape");
Transform764->addChild(Shape765);

Transform763->addChild(Transform764);

HAnimSegment762->addChild(Transform763);

Shape* Shape766 = new Shape();
LineSet* LineSet767 = new LineSet();
LineSet767->setVertexCount(new int[1]{2});
Coordinate* Coordinate768 = new Coordinate();
Coordinate768->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
LineSet767->setCoord(Coordinate768);

//from vt9 to vt8 vertices 2
ColorRGBA* ColorRGBA769 = new ColorRGBA();
ColorRGBA769->setUSE("HAnimSegmentLineColorRGBA");
LineSet767->setColor(ColorRGBA769);

Shape766->setGeometry(LineSet767);

HAnimSegment762->addChild(Shape766);

HAnimJoint761->addChild(HAnimSegment762);

HAnimJoint* HAnimJoint770 = new HAnimJoint();
HAnimJoint770->setName("vt8");
HAnimJoint770->setDEF("hanim_vt8");
HAnimJoint770->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimSegment* HAnimSegment771 = new HAnimSegment();
HAnimSegment771->setName("t8");
HAnimSegment771->setDEF("hanim_t8");
Transform* Transform772 = new Transform();
//Empty Transform
Transform* Transform773 = new Transform();
//Empty Transform
Shape* Shape774 = new Shape();
Shape774->setUSE("HAnimJointShape");
Transform773->addChild(Shape774);

Transform772->addChild(Transform773);

HAnimSegment771->addChild(Transform772);

Shape* Shape775 = new Shape();
LineSet* LineSet776 = new LineSet();
LineSet776->setVertexCount(new int[1]{2});
Coordinate* Coordinate777 = new Coordinate();
Coordinate777->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
LineSet776->setCoord(Coordinate777);

//from vt8 to vt7 vertices 2
ColorRGBA* ColorRGBA778 = new ColorRGBA();
ColorRGBA778->setUSE("HAnimSegmentLineColorRGBA");
LineSet776->setColor(ColorRGBA778);

Shape775->setGeometry(LineSet776);

HAnimSegment771->addChild(Shape775);

HAnimJoint770->addChild(HAnimSegment771);

HAnimJoint* HAnimJoint779 = new HAnimJoint();
HAnimJoint779->setName("vt7");
HAnimJoint779->setDEF("hanim_vt7");
HAnimJoint779->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimSegment* HAnimSegment780 = new HAnimSegment();
HAnimSegment780->setName("t7");
HAnimSegment780->setDEF("hanim_t7");
Transform* Transform781 = new Transform();
//Empty Transform
Transform* Transform782 = new Transform();
//Empty Transform
Shape* Shape783 = new Shape();
Shape783->setUSE("HAnimJointShape");
Transform782->addChild(Shape783);

Transform781->addChild(Transform782);

HAnimSegment780->addChild(Transform781);

Shape* Shape784 = new Shape();
LineSet* LineSet785 = new LineSet();
LineSet785->setVertexCount(new int[1]{2});
Coordinate* Coordinate786 = new Coordinate();
Coordinate786->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
LineSet785->setCoord(Coordinate786);

//from vt7 to vt6 vertices 2
ColorRGBA* ColorRGBA787 = new ColorRGBA();
ColorRGBA787->setUSE("HAnimSegmentLineColorRGBA");
LineSet785->setColor(ColorRGBA787);

Shape784->setGeometry(LineSet785);

HAnimSegment780->addChild(Shape784);

HAnimSite* HAnimSite788 = new HAnimSite();
HAnimSite788->setName("l_chest_midsagittal_plane_pt");
HAnimSite788->setDEF("hanim_l_chest_midsagittal_plane_pt");
HAnimSite788->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor789 = new TouchSensor();
TouchSensor789->setDescription("HAnimSite l_chest_midsagittal_plane_pt");
HAnimSite788->addChild(TouchSensor789);

Shape* Shape790 = new Shape();
Shape790->setUSE("HAnimSiteShape");
HAnimSite788->addChild(Shape790);

HAnimSegment780->addChild(HAnimSite788);

HAnimSite* HAnimSite791 = new HAnimSite();
HAnimSite791->setName("mesosternale_pt");
HAnimSite791->setDEF("hanim_mesosternale_pt");
HAnimSite791->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor792 = new TouchSensor();
TouchSensor792->setDescription("HAnimSite mesosternale_pt");
HAnimSite791->addChild(TouchSensor792);

Shape* Shape793 = new Shape();
Shape793->setUSE("HAnimSiteShape");
HAnimSite791->addChild(Shape793);

HAnimSegment780->addChild(HAnimSite791);

HAnimSite* HAnimSite794 = new HAnimSite();
HAnimSite794->setName("r_chest_midsagittal_plane_pt");
HAnimSite794->setDEF("hanim_r_chest_midsagittal_plane_pt");
HAnimSite794->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor795 = new TouchSensor();
TouchSensor795->setDescription("HAnimSite r_chest_midsagittal_plane_pt");
HAnimSite794->addChild(TouchSensor795);

Shape* Shape796 = new Shape();
Shape796->setUSE("HAnimSiteShape");
HAnimSite794->addChild(Shape796);

HAnimSegment780->addChild(HAnimSite794);

HAnimSite* HAnimSite797 = new HAnimSite();
HAnimSite797->setName("rear_center_midsagittal_plane_pt");
HAnimSite797->setDEF("hanim_rear_center_midsagittal_plane_pt");
HAnimSite797->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor798 = new TouchSensor();
TouchSensor798->setDescription("HAnimSite rear_center_midsagittal_plane_pt");
HAnimSite797->addChild(TouchSensor798);

Shape* Shape799 = new Shape();
Shape799->setUSE("HAnimSiteShape");
HAnimSite797->addChild(Shape799);

HAnimSegment780->addChild(HAnimSite797);

HAnimJoint779->addChild(HAnimSegment780);

HAnimJoint* HAnimJoint800 = new HAnimJoint();
HAnimJoint800->setName("vt6");
HAnimJoint800->setDEF("hanim_vt6");
HAnimJoint800->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimSegment* HAnimSegment801 = new HAnimSegment();
HAnimSegment801->setName("t6");
HAnimSegment801->setDEF("hanim_t6");
Transform* Transform802 = new Transform();
//Empty Transform
Transform* Transform803 = new Transform();
//Empty Transform
Shape* Shape804 = new Shape();
Shape804->setUSE("HAnimJointShape");
Transform803->addChild(Shape804);

Transform802->addChild(Transform803);

HAnimSegment801->addChild(Transform802);

Shape* Shape805 = new Shape();
LineSet* LineSet806 = new LineSet();
LineSet806->setVertexCount(new int[1]{2});
Coordinate* Coordinate807 = new Coordinate();
Coordinate807->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
LineSet806->setCoord(Coordinate807);

//from vt6 to vt5 vertices 2
ColorRGBA* ColorRGBA808 = new ColorRGBA();
ColorRGBA808->setUSE("HAnimSegmentLineColorRGBA");
LineSet806->setColor(ColorRGBA808);

Shape805->setGeometry(LineSet806);

HAnimSegment801->addChild(Shape805);

HAnimSite* HAnimSite809 = new HAnimSite();
HAnimSite809->setName("spine_1_middle_back_pt");
HAnimSite809->setDEF("hanim_spine_1_middle_back_pt");
HAnimSite809->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor810 = new TouchSensor();
TouchSensor810->setDescription("HAnimSite spine_1_middle_back_pt");
HAnimSite809->addChild(TouchSensor810);

Shape* Shape811 = new Shape();
Shape811->setUSE("HAnimSiteShape");
HAnimSite809->addChild(Shape811);

HAnimSegment801->addChild(HAnimSite809);

HAnimJoint800->addChild(HAnimSegment801);

HAnimJoint* HAnimJoint812 = new HAnimJoint();
HAnimJoint812->setName("vt5");
HAnimJoint812->setDEF("hanim_vt5");
HAnimJoint812->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimSegment* HAnimSegment813 = new HAnimSegment();
HAnimSegment813->setName("t5");
HAnimSegment813->setDEF("hanim_t5");
Transform* Transform814 = new Transform();
//Empty Transform
Transform* Transform815 = new Transform();
//Empty Transform
Shape* Shape816 = new Shape();
Shape816->setUSE("HAnimJointShape");
Transform815->addChild(Shape816);

Transform814->addChild(Transform815);

HAnimSegment813->addChild(Transform814);

Shape* Shape817 = new Shape();
LineSet* LineSet818 = new LineSet();
LineSet818->setVertexCount(new int[1]{2});
Coordinate* Coordinate819 = new Coordinate();
Coordinate819->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
LineSet818->setCoord(Coordinate819);

//from vt5 to vt4 vertices 2
ColorRGBA* ColorRGBA820 = new ColorRGBA();
ColorRGBA820->setUSE("HAnimSegmentLineColorRGBA");
LineSet818->setColor(ColorRGBA820);

Shape817->setGeometry(LineSet818);

HAnimSegment813->addChild(Shape817);

HAnimJoint812->addChild(HAnimSegment813);

HAnimJoint* HAnimJoint821 = new HAnimJoint();
HAnimJoint821->setName("vt4");
HAnimJoint821->setDEF("hanim_vt4");
HAnimJoint821->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimSegment* HAnimSegment822 = new HAnimSegment();
HAnimSegment822->setName("t4");
HAnimSegment822->setDEF("hanim_t4");
Transform* Transform823 = new Transform();
//Empty Transform
Transform* Transform824 = new Transform();
//Empty Transform
Shape* Shape825 = new Shape();
Shape825->setUSE("HAnimJointShape");
Transform824->addChild(Shape825);

Transform823->addChild(Transform824);

HAnimSegment822->addChild(Transform823);

Shape* Shape826 = new Shape();
LineSet* LineSet827 = new LineSet();
LineSet827->setVertexCount(new int[1]{2});
Coordinate* Coordinate828 = new Coordinate();
Coordinate828->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
LineSet827->setCoord(Coordinate828);

//from vt4 to vt3 vertices 2
ColorRGBA* ColorRGBA829 = new ColorRGBA();
ColorRGBA829->setUSE("HAnimSegmentLineColorRGBA");
LineSet827->setColor(ColorRGBA829);

Shape826->setGeometry(LineSet827);

HAnimSegment822->addChild(Shape826);

HAnimJoint821->addChild(HAnimSegment822);

HAnimJoint* HAnimJoint830 = new HAnimJoint();
HAnimJoint830->setName("vt3");
HAnimJoint830->setDEF("hanim_vt3");
HAnimJoint830->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimSegment* HAnimSegment831 = new HAnimSegment();
HAnimSegment831->setName("t3");
HAnimSegment831->setDEF("hanim_t3");
Transform* Transform832 = new Transform();
//Empty Transform
Transform* Transform833 = new Transform();
//Empty Transform
Shape* Shape834 = new Shape();
Shape834->setUSE("HAnimJointShape");
Transform833->addChild(Shape834);

Transform832->addChild(Transform833);

HAnimSegment831->addChild(Transform832);

Shape* Shape835 = new Shape();
LineSet* LineSet836 = new LineSet();
LineSet836->setVertexCount(new int[1]{2});
Coordinate* Coordinate837 = new Coordinate();
Coordinate837->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
LineSet836->setCoord(Coordinate837);

//from vt3 to vt2 vertices 2
ColorRGBA* ColorRGBA838 = new ColorRGBA();
ColorRGBA838->setUSE("HAnimSegmentLineColorRGBA");
LineSet836->setColor(ColorRGBA838);

Shape835->setGeometry(LineSet836);

HAnimSegment831->addChild(Shape835);

HAnimJoint830->addChild(HAnimSegment831);

HAnimJoint* HAnimJoint839 = new HAnimJoint();
HAnimJoint839->setName("vt2");
HAnimJoint839->setDEF("hanim_vt2");
HAnimJoint839->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimSegment* HAnimSegment840 = new HAnimSegment();
HAnimSegment840->setName("t2");
HAnimSegment840->setDEF("hanim_t2");
Transform* Transform841 = new Transform();
//Empty Transform
Transform* Transform842 = new Transform();
//Empty Transform
Shape* Shape843 = new Shape();
Shape843->setUSE("HAnimJointShape");
Transform842->addChild(Shape843);

Transform841->addChild(Transform842);

HAnimSegment840->addChild(Transform841);

Shape* Shape844 = new Shape();
LineSet* LineSet845 = new LineSet();
LineSet845->setVertexCount(new int[1]{2});
Coordinate* Coordinate846 = new Coordinate();
Coordinate846->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
LineSet845->setCoord(Coordinate846);

//from vt2 to vt1 vertices 2
ColorRGBA* ColorRGBA847 = new ColorRGBA();
ColorRGBA847->setUSE("HAnimSegmentLineColorRGBA");
LineSet845->setColor(ColorRGBA847);

Shape844->setGeometry(LineSet845);

HAnimSegment840->addChild(Shape844);

HAnimSite* HAnimSite848 = new HAnimSite();
HAnimSite848->setName("cervicale_pt");
HAnimSite848->setDEF("hanim_cervicale_pt");
HAnimSite848->setTranslation(new float[3]{0.0064,1.52,-0.0815});
TouchSensor* TouchSensor849 = new TouchSensor();
TouchSensor849->setDescription("HAnimSite cervicale_pt");
HAnimSite848->addChild(TouchSensor849);

Shape* Shape850 = new Shape();
Shape850->setUSE("HAnimSiteShape");
HAnimSite848->addChild(Shape850);

HAnimSegment840->addChild(HAnimSite848);

HAnimSite* HAnimSite851 = new HAnimSite();
HAnimSite851->setName("suprasternale_pt");
HAnimSite851->setDEF("hanim_suprasternale_pt");
HAnimSite851->setTranslation(new float[3]{0.0084,1.4714,0.0551});
TouchSensor* TouchSensor852 = new TouchSensor();
TouchSensor852->setDescription("HAnimSite suprasternale_pt");
HAnimSite851->addChild(TouchSensor852);

Shape* Shape853 = new Shape();
Shape853->setUSE("HAnimSiteShape");
HAnimSite851->addChild(Shape853);

HAnimSegment840->addChild(HAnimSite851);

HAnimJoint839->addChild(HAnimSegment840);

HAnimJoint* HAnimJoint854 = new HAnimJoint();
HAnimJoint854->setName("vt1");
HAnimJoint854->setDEF("hanim_vt1");
HAnimJoint854->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimSegment* HAnimSegment855 = new HAnimSegment();
HAnimSegment855->setName("t1");
HAnimSegment855->setDEF("hanim_t1");
Transform* Transform856 = new Transform();
//Empty Transform
Transform* Transform857 = new Transform();
//Empty Transform
Shape* Shape858 = new Shape();
Shape858->setUSE("HAnimJointShape");
Transform857->addChild(Shape858);

Transform856->addChild(Transform857);

HAnimSegment855->addChild(Transform856);

Shape* Shape859 = new Shape();
LineSet* LineSet860 = new LineSet();
LineSet860->setVertexCount(new int[1]{2});
Coordinate* Coordinate861 = new Coordinate();
Coordinate861->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301});
LineSet860->setCoord(Coordinate861);

//from vt1 to vc7 vertices 2
ColorRGBA* ColorRGBA862 = new ColorRGBA();
ColorRGBA862->setUSE("HAnimSegmentLineColorRGBA");
LineSet860->setColor(ColorRGBA862);

Shape859->setGeometry(LineSet860);

HAnimSegment855->addChild(Shape859);

HAnimSite* HAnimSite863 = new HAnimSite();
HAnimSite863->setName("l_neck_base_pt");
HAnimSite863->setDEF("hanim_l_neck_base_pt");
HAnimSite863->setTranslation(new float[3]{0.0646,1.5141,-0.038});
TouchSensor* TouchSensor864 = new TouchSensor();
TouchSensor864->setDescription("HAnimSite l_neck_base_pt");
HAnimSite863->addChild(TouchSensor864);

Shape* Shape865 = new Shape();
Shape865->setUSE("HAnimSiteShape");
HAnimSite863->addChild(Shape865);

HAnimSegment855->addChild(HAnimSite863);

HAnimSite* HAnimSite866 = new HAnimSite();
HAnimSite866->setName("r_neck_base_pt");
HAnimSite866->setDEF("hanim_r_neck_base_pt");
HAnimSite866->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
TouchSensor* TouchSensor867 = new TouchSensor();
TouchSensor867->setDescription("HAnimSite r_neck_base_pt");
HAnimSite866->addChild(TouchSensor867);

Shape* Shape868 = new Shape();
Shape868->setUSE("HAnimSiteShape");
HAnimSite866->addChild(Shape868);

HAnimSegment855->addChild(HAnimSite866);

Shape* Shape869 = new Shape();
LineSet* LineSet870 = new LineSet();
LineSet870->setVertexCount(new int[1]{2});
Coordinate* Coordinate871 = new Coordinate();
Coordinate871->setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353});
LineSet870->setCoord(Coordinate871);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA* ColorRGBA872 = new ColorRGBA();
ColorRGBA872->setUSE("HAnimSegmentLineColorRGBA");
LineSet870->setColor(ColorRGBA872);

Shape869->setGeometry(LineSet870);

HAnimSegment855->addChild(Shape869);

HAnimSite* HAnimSite873 = new HAnimSite();
HAnimSite873->setName("l_acromion_pt");
HAnimSite873->setDEF("hanim_l_acromion_pt");
HAnimSite873->setTranslation(new float[3]{0.2032,1.476,-0.049});
TouchSensor* TouchSensor874 = new TouchSensor();
TouchSensor874->setDescription("HAnimSite l_acromion_pt");
HAnimSite873->addChild(TouchSensor874);

Shape* Shape875 = new Shape();
Shape875->setUSE("HAnimSiteShape");
HAnimSite873->addChild(Shape875);

HAnimSegment855->addChild(HAnimSite873);

HAnimSite* HAnimSite876 = new HAnimSite();
HAnimSite876->setName("l_axilla_distal_pt");
HAnimSite876->setDEF("hanim_l_axilla_distal_pt");
HAnimSite876->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
TouchSensor* TouchSensor877 = new TouchSensor();
TouchSensor877->setDescription("HAnimSite l_axilla_distal_pt");
HAnimSite876->addChild(TouchSensor877);

Shape* Shape878 = new Shape();
Shape878->setUSE("HAnimSiteShape");
HAnimSite876->addChild(Shape878);

HAnimSegment855->addChild(HAnimSite876);

HAnimSite* HAnimSite879 = new HAnimSite();
HAnimSite879->setName("l_axilla_posterior_folds_pt");
HAnimSite879->setDEF("hanim_l_axilla_posterior_folds_pt");
HAnimSite879->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor880 = new TouchSensor();
TouchSensor880->setDescription("HAnimSite l_axilla_posterior_folds_pt");
HAnimSite879->addChild(TouchSensor880);

Shape* Shape881 = new Shape();
Shape881->setUSE("HAnimSiteShape");
HAnimSite879->addChild(Shape881);

HAnimSegment855->addChild(HAnimSite879);

HAnimSite* HAnimSite882 = new HAnimSite();
HAnimSite882->setName("l_axilla_proximal_pt");
HAnimSite882->setDEF("hanim_l_axilla_proximal_pt");
HAnimSite882->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
TouchSensor* TouchSensor883 = new TouchSensor();
TouchSensor883->setDescription("HAnimSite l_axilla_proximal_pt");
HAnimSite882->addChild(TouchSensor883);

Shape* Shape884 = new Shape();
Shape884->setUSE("HAnimSiteShape");
HAnimSite882->addChild(Shape884);

HAnimSegment855->addChild(HAnimSite882);

HAnimSite* HAnimSite885 = new HAnimSite();
HAnimSite885->setName("l_clavicale_pt");
HAnimSite885->setDEF("hanim_l_clavicale_pt");
HAnimSite885->setTranslation(new float[3]{0.0271,1.4943,0.0394});
TouchSensor* TouchSensor886 = new TouchSensor();
TouchSensor886->setDescription("HAnimSite l_clavicale_pt");
HAnimSite885->addChild(TouchSensor886);

Shape* Shape887 = new Shape();
Shape887->setUSE("HAnimSiteShape");
HAnimSite885->addChild(Shape887);

HAnimSegment855->addChild(HAnimSite885);

Shape* Shape888 = new Shape();
LineSet* LineSet889 = new LineSet();
LineSet889->setVertexCount(new int[1]{2});
Coordinate* Coordinate890 = new Coordinate();
Coordinate890->setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033});
LineSet889->setCoord(Coordinate890);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA* ColorRGBA891 = new ColorRGBA();
ColorRGBA891->setUSE("HAnimSegmentLineColorRGBA");
LineSet889->setColor(ColorRGBA891);

Shape888->setGeometry(LineSet889);

HAnimSegment855->addChild(Shape888);

HAnimSite* HAnimSite892 = new HAnimSite();
HAnimSite892->setName("r_acromion_pt");
HAnimSite892->setDEF("hanim_r_acromion_pt");
HAnimSite892->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
TouchSensor* TouchSensor893 = new TouchSensor();
TouchSensor893->setDescription("HAnimSite r_acromion_pt");
HAnimSite892->addChild(TouchSensor893);

Shape* Shape894 = new Shape();
Shape894->setUSE("HAnimSiteShape");
HAnimSite892->addChild(Shape894);

HAnimSegment855->addChild(HAnimSite892);

HAnimSite* HAnimSite895 = new HAnimSite();
HAnimSite895->setName("r_axilla_distal_pt");
HAnimSite895->setDEF("hanim_r_axilla_distal_pt");
HAnimSite895->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
TouchSensor* TouchSensor896 = new TouchSensor();
TouchSensor896->setDescription("HAnimSite r_axilla_distal_pt");
HAnimSite895->addChild(TouchSensor896);

Shape* Shape897 = new Shape();
Shape897->setUSE("HAnimSiteShape");
HAnimSite895->addChild(Shape897);

HAnimSegment855->addChild(HAnimSite895);

HAnimSite* HAnimSite898 = new HAnimSite();
HAnimSite898->setName("r_axilla_posterior_folds_pt");
HAnimSite898->setDEF("hanim_r_axilla_posterior_folds_pt");
HAnimSite898->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor899 = new TouchSensor();
TouchSensor899->setDescription("HAnimSite r_axilla_posterior_folds_pt");
HAnimSite898->addChild(TouchSensor899);

Shape* Shape900 = new Shape();
Shape900->setUSE("HAnimSiteShape");
HAnimSite898->addChild(Shape900);

HAnimSegment855->addChild(HAnimSite898);

HAnimSite* HAnimSite901 = new HAnimSite();
HAnimSite901->setName("r_axilla_proximal_pt");
HAnimSite901->setDEF("hanim_r_axilla_proximal_pt");
HAnimSite901->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
TouchSensor* TouchSensor902 = new TouchSensor();
TouchSensor902->setDescription("HAnimSite r_axilla_proximal_pt");
HAnimSite901->addChild(TouchSensor902);

Shape* Shape903 = new Shape();
Shape903->setUSE("HAnimSiteShape");
HAnimSite901->addChild(Shape903);

HAnimSegment855->addChild(HAnimSite901);

HAnimSite* HAnimSite904 = new HAnimSite();
HAnimSite904->setName("r_clavicale_pt");
HAnimSite904->setDEF("hanim_r_clavicale_pt");
HAnimSite904->setTranslation(new float[3]{-0.0115,1.4943,0.04});
TouchSensor* TouchSensor905 = new TouchSensor();
TouchSensor905->setDescription("HAnimSite r_clavicale_pt");
HAnimSite904->addChild(TouchSensor905);

Shape* Shape906 = new Shape();
Shape906->setUSE("HAnimSiteShape");
HAnimSite904->addChild(Shape906);

HAnimSegment855->addChild(HAnimSite904);

HAnimJoint854->addChild(HAnimSegment855);

HAnimJoint* HAnimJoint907 = new HAnimJoint();
HAnimJoint907->setName("vc7");
HAnimJoint907->setDEF("hanim_vc7");
HAnimJoint907->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimSegment* HAnimSegment908 = new HAnimSegment();
HAnimSegment908->setName("c7");
HAnimSegment908->setDEF("hanim_c7");
Transform* Transform909 = new Transform();
//Empty Transform
Transform* Transform910 = new Transform();
//Empty Transform
Shape* Shape911 = new Shape();
Shape911->setUSE("HAnimJointShape");
Transform910->addChild(Shape911);

Transform909->addChild(Transform910);

HAnimSegment908->addChild(Transform909);

Shape* Shape912 = new Shape();
LineSet* LineSet913 = new LineSet();
LineSet913->setVertexCount(new int[1]{2});
Coordinate* Coordinate914 = new Coordinate();
Coordinate914->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
LineSet913->setCoord(Coordinate914);

//from vc7 to vc6 vertices 2
ColorRGBA* ColorRGBA915 = new ColorRGBA();
ColorRGBA915->setUSE("HAnimSegmentLineColorRGBA");
LineSet913->setColor(ColorRGBA915);

Shape912->setGeometry(LineSet913);

HAnimSegment908->addChild(Shape912);

HAnimJoint907->addChild(HAnimSegment908);

HAnimJoint* HAnimJoint916 = new HAnimJoint();
HAnimJoint916->setName("vc6");
HAnimJoint916->setDEF("hanim_vc6");
HAnimJoint916->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimSegment* HAnimSegment917 = new HAnimSegment();
HAnimSegment917->setName("c6");
HAnimSegment917->setDEF("hanim_c6");
Transform* Transform918 = new Transform();
//Empty Transform
Transform* Transform919 = new Transform();
//Empty Transform
Shape* Shape920 = new Shape();
Shape920->setUSE("HAnimJointShape");
Transform919->addChild(Shape920);

Transform918->addChild(Transform919);

HAnimSegment917->addChild(Transform918);

Shape* Shape921 = new Shape();
LineSet* LineSet922 = new LineSet();
LineSet922->setVertexCount(new int[1]{2});
Coordinate* Coordinate923 = new Coordinate();
Coordinate923->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
LineSet922->setCoord(Coordinate923);

//from vc6 to vc5 vertices 2
ColorRGBA* ColorRGBA924 = new ColorRGBA();
ColorRGBA924->setUSE("HAnimSegmentLineColorRGBA");
LineSet922->setColor(ColorRGBA924);

Shape921->setGeometry(LineSet922);

HAnimSegment917->addChild(Shape921);

HAnimJoint916->addChild(HAnimSegment917);

HAnimJoint* HAnimJoint925 = new HAnimJoint();
HAnimJoint925->setName("vc5");
HAnimJoint925->setDEF("hanim_vc5");
HAnimJoint925->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimSegment* HAnimSegment926 = new HAnimSegment();
HAnimSegment926->setName("c5");
HAnimSegment926->setDEF("hanim_c5");
Transform* Transform927 = new Transform();
//Empty Transform
Transform* Transform928 = new Transform();
//Empty Transform
Shape* Shape929 = new Shape();
Shape929->setUSE("HAnimJointShape");
Transform928->addChild(Shape929);

Transform927->addChild(Transform928);

HAnimSegment926->addChild(Transform927);

Shape* Shape930 = new Shape();
LineSet* LineSet931 = new LineSet();
LineSet931->setVertexCount(new int[1]{2});
Coordinate* Coordinate932 = new Coordinate();
Coordinate932->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
LineSet931->setCoord(Coordinate932);

//from vc5 to vc4 vertices 2
ColorRGBA* ColorRGBA933 = new ColorRGBA();
ColorRGBA933->setUSE("HAnimSegmentLineColorRGBA");
LineSet931->setColor(ColorRGBA933);

Shape930->setGeometry(LineSet931);

HAnimSegment926->addChild(Shape930);

HAnimJoint925->addChild(HAnimSegment926);

HAnimJoint* HAnimJoint934 = new HAnimJoint();
HAnimJoint934->setName("vc4");
HAnimJoint934->setDEF("hanim_vc4");
HAnimJoint934->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimSegment* HAnimSegment935 = new HAnimSegment();
HAnimSegment935->setName("c4");
HAnimSegment935->setDEF("hanim_c4");
Transform* Transform936 = new Transform();
//Empty Transform
Transform* Transform937 = new Transform();
//Empty Transform
Shape* Shape938 = new Shape();
Shape938->setUSE("HAnimJointShape");
Transform937->addChild(Shape938);

Transform936->addChild(Transform937);

HAnimSegment935->addChild(Transform936);

Shape* Shape939 = new Shape();
LineSet* LineSet940 = new LineSet();
LineSet940->setVertexCount(new int[1]{2});
Coordinate* Coordinate941 = new Coordinate();
Coordinate941->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
LineSet940->setCoord(Coordinate941);

//from vc4 to vc3 vertices 2
ColorRGBA* ColorRGBA942 = new ColorRGBA();
ColorRGBA942->setUSE("HAnimSegmentLineColorRGBA");
LineSet940->setColor(ColorRGBA942);

Shape939->setGeometry(LineSet940);

HAnimSegment935->addChild(Shape939);

HAnimJoint934->addChild(HAnimSegment935);

HAnimJoint* HAnimJoint943 = new HAnimJoint();
HAnimJoint943->setName("vc3");
HAnimJoint943->setDEF("hanim_vc3");
HAnimJoint943->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimSegment* HAnimSegment944 = new HAnimSegment();
HAnimSegment944->setName("c3");
HAnimSegment944->setDEF("hanim_c3");
Transform* Transform945 = new Transform();
//Empty Transform
Transform* Transform946 = new Transform();
//Empty Transform
Shape* Shape947 = new Shape();
Shape947->setUSE("HAnimJointShape");
Transform946->addChild(Shape947);

Transform945->addChild(Transform946);

HAnimSegment944->addChild(Transform945);

Shape* Shape948 = new Shape();
LineSet* LineSet949 = new LineSet();
LineSet949->setVertexCount(new int[1]{2});
Coordinate* Coordinate950 = new Coordinate();
Coordinate950->setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103});
LineSet949->setCoord(Coordinate950);

//from vc3 to vc2 vertices 2
ColorRGBA* ColorRGBA951 = new ColorRGBA();
ColorRGBA951->setUSE("HAnimSegmentLineColorRGBA");
LineSet949->setColor(ColorRGBA951);

Shape948->setGeometry(LineSet949);

HAnimSegment944->addChild(Shape948);

HAnimSite* HAnimSite952 = new HAnimSite();
HAnimSite952->setName("adams_apple_pt");
HAnimSite952->setDEF("hanim_adams_apple_pt");
HAnimSite952->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor953 = new TouchSensor();
TouchSensor953->setDescription("HAnimSite adams_apple_pt");
HAnimSite952->addChild(TouchSensor953);

Shape* Shape954 = new Shape();
Shape954->setUSE("HAnimSiteShape");
HAnimSite952->addChild(Shape954);

HAnimSegment944->addChild(HAnimSite952);

HAnimJoint943->addChild(HAnimSegment944);

HAnimJoint* HAnimJoint955 = new HAnimJoint();
HAnimJoint955->setName("vc2");
HAnimJoint955->setDEF("hanim_vc2");
HAnimJoint955->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimSegment* HAnimSegment956 = new HAnimSegment();
HAnimSegment956->setName("c2");
HAnimSegment956->setDEF("hanim_c2");
Transform* Transform957 = new Transform();
//Empty Transform
Transform* Transform958 = new Transform();
//Empty Transform
Shape* Shape959 = new Shape();
Shape959->setUSE("HAnimJointShape");
Transform958->addChild(Shape959);

Transform957->addChild(Transform958);

HAnimSegment956->addChild(Transform957);

Shape* Shape960 = new Shape();
LineSet* LineSet961 = new LineSet();
LineSet961->setVertexCount(new int[1]{2});
Coordinate* Coordinate962 = new Coordinate();
Coordinate962->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
LineSet961->setCoord(Coordinate962);

//from vc2 to vc1 vertices 2
ColorRGBA* ColorRGBA963 = new ColorRGBA();
ColorRGBA963->setUSE("HAnimSegmentLineColorRGBA");
LineSet961->setColor(ColorRGBA963);

Shape960->setGeometry(LineSet961);

HAnimSegment956->addChild(Shape960);

HAnimJoint955->addChild(HAnimSegment956);

HAnimJoint* HAnimJoint964 = new HAnimJoint();
HAnimJoint964->setName("vc1");
HAnimJoint964->setDEF("hanim_vc1");
HAnimJoint964->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimSegment* HAnimSegment965 = new HAnimSegment();
HAnimSegment965->setName("c1");
HAnimSegment965->setDEF("hanim_c1");
Transform* Transform966 = new Transform();
//Empty Transform
Transform* Transform967 = new Transform();
//Empty Transform
Shape* Shape968 = new Shape();
Shape968->setUSE("HAnimJointShape");
Transform967->addChild(Shape968);

Transform966->addChild(Transform967);

HAnimSegment965->addChild(Transform966);

Shape* Shape969 = new Shape();
LineSet* LineSet970 = new LineSet();
LineSet970->setVertexCount(new int[1]{2});
Coordinate* Coordinate971 = new Coordinate();
Coordinate971->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
LineSet970->setCoord(Coordinate971);

//from vc1 to skullbase vertices 2
ColorRGBA* ColorRGBA972 = new ColorRGBA();
ColorRGBA972->setUSE("HAnimSegmentLineColorRGBA");
LineSet970->setColor(ColorRGBA972);

Shape969->setGeometry(LineSet970);

HAnimSegment965->addChild(Shape969);

HAnimSite* HAnimSite973 = new HAnimSite();
HAnimSite973->setName("glabella_pt");
HAnimSite973->setDEF("hanim_glabella_pt");
HAnimSite973->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor974 = new TouchSensor();
TouchSensor974->setDescription("HAnimSite glabella_pt");
HAnimSite973->addChild(TouchSensor974);

Shape* Shape975 = new Shape();
Shape975->setUSE("HAnimSiteShape");
HAnimSite973->addChild(Shape975);

HAnimSegment965->addChild(HAnimSite973);

HAnimSite* HAnimSite976 = new HAnimSite();
HAnimSite976->setName("l_ectocanthus_pt");
HAnimSite976->setDEF("hanim_l_ectocanthus_pt");
HAnimSite976->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor977 = new TouchSensor();
TouchSensor977->setDescription("HAnimSite l_ectocanthus_pt");
HAnimSite976->addChild(TouchSensor977);

Shape* Shape978 = new Shape();
Shape978->setUSE("HAnimSiteShape");
HAnimSite976->addChild(Shape978);

HAnimSegment965->addChild(HAnimSite976);

HAnimSite* HAnimSite979 = new HAnimSite();
HAnimSite979->setName("l_infraorbitale_pt");
HAnimSite979->setDEF("hanim_l_infraorbitale_pt");
HAnimSite979->setTranslation(new float[3]{0.0341,1.6171,0.0752});
TouchSensor* TouchSensor980 = new TouchSensor();
TouchSensor980->setDescription("HAnimSite l_infraorbitale_pt");
HAnimSite979->addChild(TouchSensor980);

Shape* Shape981 = new Shape();
Shape981->setUSE("HAnimSiteShape");
HAnimSite979->addChild(Shape981);

HAnimSegment965->addChild(HAnimSite979);

HAnimSite* HAnimSite982 = new HAnimSite();
HAnimSite982->setName("l_tragion_pt");
HAnimSite982->setDEF("hanim_l_tragion_pt");
HAnimSite982->setTranslation(new float[3]{0.0739,1.6348,0.0282});
TouchSensor* TouchSensor983 = new TouchSensor();
TouchSensor983->setDescription("HAnimSite l_tragion_pt");
HAnimSite982->addChild(TouchSensor983);

Shape* Shape984 = new Shape();
Shape984->setUSE("HAnimSiteShape");
HAnimSite982->addChild(Shape984);

HAnimSegment965->addChild(HAnimSite982);

HAnimSite* HAnimSite985 = new HAnimSite();
HAnimSite985->setName("nuchale_pt");
HAnimSite985->setDEF("hanim_nuchale_pt");
HAnimSite985->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
TouchSensor* TouchSensor986 = new TouchSensor();
TouchSensor986->setDescription("HAnimSite nuchale_pt");
HAnimSite985->addChild(TouchSensor986);

Shape* Shape987 = new Shape();
Shape987->setUSE("HAnimSiteShape");
HAnimSite985->addChild(Shape987);

HAnimSegment965->addChild(HAnimSite985);

HAnimSite* HAnimSite988 = new HAnimSite();
HAnimSite988->setName("opisthocranion_pt");
HAnimSite988->setDEF("hanim_opisthocranion_pt");
HAnimSite988->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor989 = new TouchSensor();
TouchSensor989->setDescription("HAnimSite opisthocranion_pt");
HAnimSite988->addChild(TouchSensor989);

Shape* Shape990 = new Shape();
Shape990->setUSE("HAnimSiteShape");
HAnimSite988->addChild(Shape990);

HAnimSegment965->addChild(HAnimSite988);

HAnimSite* HAnimSite991 = new HAnimSite();
HAnimSite991->setName("r_ectocanthus_pt");
HAnimSite991->setDEF("hanim_r_ectocanthus_pt");
HAnimSite991->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor992 = new TouchSensor();
TouchSensor992->setDescription("HAnimSite r_ectocanthus_pt");
HAnimSite991->addChild(TouchSensor992);

Shape* Shape993 = new Shape();
Shape993->setUSE("HAnimSiteShape");
HAnimSite991->addChild(Shape993);

HAnimSegment965->addChild(HAnimSite991);

HAnimSite* HAnimSite994 = new HAnimSite();
HAnimSite994->setName("r_infraorbitale_pt");
HAnimSite994->setDEF("hanim_r_infraorbitale_pt");
HAnimSite994->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
TouchSensor* TouchSensor995 = new TouchSensor();
TouchSensor995->setDescription("HAnimSite r_infraorbitale_pt");
HAnimSite994->addChild(TouchSensor995);

Shape* Shape996 = new Shape();
Shape996->setUSE("HAnimSiteShape");
HAnimSite994->addChild(Shape996);

HAnimSegment965->addChild(HAnimSite994);

HAnimSite* HAnimSite997 = new HAnimSite();
HAnimSite997->setName("r_tragion_pt");
HAnimSite997->setDEF("hanim_r_tragion_pt");
HAnimSite997->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
TouchSensor* TouchSensor998 = new TouchSensor();
TouchSensor998->setDescription("HAnimSite r_tragion_pt");
HAnimSite997->addChild(TouchSensor998);

Shape* Shape999 = new Shape();
Shape999->setUSE("HAnimSiteShape");
HAnimSite997->addChild(Shape999);

HAnimSegment965->addChild(HAnimSite997);

HAnimSite* HAnimSite1000 = new HAnimSite();
HAnimSite1000->setName("sellion_pt");
HAnimSite1000->setDEF("hanim_sellion_pt");
HAnimSite1000->setTranslation(new float[3]{0.0058,1.6316,0.0852});
TouchSensor* TouchSensor1001 = new TouchSensor();
TouchSensor1001->setDescription("HAnimSite sellion_pt");
HAnimSite1000->addChild(TouchSensor1001);

Shape* Shape1002 = new Shape();
Shape1002->setUSE("HAnimSiteShape");
HAnimSite1000->addChild(Shape1002);

HAnimSegment965->addChild(HAnimSite1000);

HAnimSite* HAnimSite1003 = new HAnimSite();
HAnimSite1003->setName("skull_vertex_pt");
HAnimSite1003->setDEF("hanim_skull_vertex_pt");
HAnimSite1003->setTranslation(new float[3]{0.005,1.7504,0.0055});
TouchSensor* TouchSensor1004 = new TouchSensor();
TouchSensor1004->setDescription("HAnimSite skull_vertex_pt");
HAnimSite1003->addChild(TouchSensor1004);

Shape* Shape1005 = new Shape();
Shape1005->setUSE("HAnimSiteShape");
HAnimSite1003->addChild(Shape1005);

HAnimSegment965->addChild(HAnimSite1003);

HAnimJoint964->addChild(HAnimSegment965);

HAnimJoint* HAnimJoint1006 = new HAnimJoint();
HAnimJoint1006->setName("skullbase");
HAnimJoint1006->setDEF("hanim_skullbase");
HAnimJoint1006->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimSegment* HAnimSegment1007 = new HAnimSegment();
HAnimSegment1007->setName("skull");
HAnimSegment1007->setDEF("hanim_skull");
Transform* Transform1008 = new Transform();
//Empty Transform
Transform* Transform1009 = new Transform();
//Empty Transform
Shape* Shape1010 = new Shape();
Shape1010->setUSE("HAnimJointShape");
Transform1009->addChild(Shape1010);

Transform1008->addChild(Transform1009);

HAnimSegment1007->addChild(Transform1008);

Shape* Shape1011 = new Shape();
LineSet* LineSet1012 = new LineSet();
LineSet1012->setVertexCount(new int[1]{2});
Coordinate* Coordinate1013 = new Coordinate();
Coordinate1013->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1012->setCoord(Coordinate1013);

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA* ColorRGBA1014 = new ColorRGBA();
ColorRGBA1014->setUSE("HAnimSegmentLineColorRGBA");
LineSet1012->setColor(ColorRGBA1014);

Shape1011->setGeometry(LineSet1012);

HAnimSegment1007->addChild(Shape1011);

Shape* Shape1015 = new Shape();
LineSet* LineSet1016 = new LineSet();
LineSet1016->setVertexCount(new int[1]{2});
Coordinate* Coordinate1017 = new Coordinate();
Coordinate1017->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1016->setCoord(Coordinate1017);

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA* ColorRGBA1018 = new ColorRGBA();
ColorRGBA1018->setUSE("HAnimSegmentLineColorRGBA");
LineSet1016->setColor(ColorRGBA1018);

Shape1015->setGeometry(LineSet1016);

HAnimSegment1007->addChild(Shape1015);

Shape* Shape1019 = new Shape();
LineSet* LineSet1020 = new LineSet();
LineSet1020->setVertexCount(new int[1]{2});
Coordinate* Coordinate1021 = new Coordinate();
Coordinate1021->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1020->setCoord(Coordinate1021);

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA* ColorRGBA1022 = new ColorRGBA();
ColorRGBA1022->setUSE("HAnimSegmentLineColorRGBA");
LineSet1020->setColor(ColorRGBA1022);

Shape1019->setGeometry(LineSet1020);

HAnimSegment1007->addChild(Shape1019);

Shape* Shape1023 = new Shape();
LineSet* LineSet1024 = new LineSet();
LineSet1024->setVertexCount(new int[1]{2});
Coordinate* Coordinate1025 = new Coordinate();
Coordinate1025->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1024->setCoord(Coordinate1025);

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA* ColorRGBA1026 = new ColorRGBA();
ColorRGBA1026->setUSE("HAnimSegmentLineColorRGBA");
LineSet1024->setColor(ColorRGBA1026);

Shape1023->setGeometry(LineSet1024);

HAnimSegment1007->addChild(Shape1023);

Shape* Shape1027 = new Shape();
LineSet* LineSet1028 = new LineSet();
LineSet1028->setVertexCount(new int[1]{2});
Coordinate* Coordinate1029 = new Coordinate();
Coordinate1029->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1028->setCoord(Coordinate1029);

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA* ColorRGBA1030 = new ColorRGBA();
ColorRGBA1030->setUSE("HAnimSegmentLineColorRGBA");
LineSet1028->setColor(ColorRGBA1030);

Shape1027->setGeometry(LineSet1028);

HAnimSegment1007->addChild(Shape1027);

Shape* Shape1031 = new Shape();
LineSet* LineSet1032 = new LineSet();
LineSet1032->setVertexCount(new int[1]{2});
Coordinate* Coordinate1033 = new Coordinate();
Coordinate1033->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1032->setCoord(Coordinate1033);

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA* ColorRGBA1034 = new ColorRGBA();
ColorRGBA1034->setUSE("HAnimSegmentLineColorRGBA");
LineSet1032->setColor(ColorRGBA1034);

Shape1031->setGeometry(LineSet1032);

HAnimSegment1007->addChild(Shape1031);

Shape* Shape1035 = new Shape();
LineSet* LineSet1036 = new LineSet();
LineSet1036->setVertexCount(new int[1]{2});
Coordinate* Coordinate1037 = new Coordinate();
Coordinate1037->setPoint(new float[6]{0.0044,1.6209,0.0236,0,1,0});
LineSet1036->setCoord(Coordinate1037);

//from skullbase to temporomandibular vertices 2
ColorRGBA* ColorRGBA1038 = new ColorRGBA();
ColorRGBA1038->setUSE("HAnimSegmentLineColorRGBA");
LineSet1036->setColor(ColorRGBA1038);

Shape1035->setGeometry(LineSet1036);

HAnimSegment1007->addChild(Shape1035);

HAnimSite* HAnimSite1039 = new HAnimSite();
HAnimSite1039->setName("l_gonion_pt");
HAnimSite1039->setDEF("hanim_l_gonion_pt");
HAnimSite1039->setTranslation(new float[3]{0.0631,1.553,0.033});
TouchSensor* TouchSensor1040 = new TouchSensor();
TouchSensor1040->setDescription("HAnimSite l_gonion_pt");
HAnimSite1039->addChild(TouchSensor1040);

Shape* Shape1041 = new Shape();
Shape1041->setUSE("HAnimSiteShape");
HAnimSite1039->addChild(Shape1041);

HAnimSegment1007->addChild(HAnimSite1039);

HAnimSite* HAnimSite1042 = new HAnimSite();
HAnimSite1042->setName("menton_pt");
HAnimSite1042->setDEF("hanim_menton_pt");
HAnimSite1042->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor1043 = new TouchSensor();
TouchSensor1043->setDescription("HAnimSite menton_pt");
HAnimSite1042->addChild(TouchSensor1043);

Shape* Shape1044 = new Shape();
Shape1044->setUSE("HAnimSiteShape");
HAnimSite1042->addChild(Shape1044);

HAnimSegment1007->addChild(HAnimSite1042);

HAnimSite* HAnimSite1045 = new HAnimSite();
HAnimSite1045->setName("r_gonion_pt");
HAnimSite1045->setDEF("hanim_r_gonion_pt");
HAnimSite1045->setTranslation(new float[3]{-0.052,1.5529,0.0347});
TouchSensor* TouchSensor1046 = new TouchSensor();
TouchSensor1046->setDescription("HAnimSite r_gonion_pt");
HAnimSite1045->addChild(TouchSensor1046);

Shape* Shape1047 = new Shape();
Shape1047->setUSE("HAnimSiteShape");
HAnimSite1045->addChild(Shape1047);

HAnimSegment1007->addChild(HAnimSite1045);

HAnimSite* HAnimSite1048 = new HAnimSite();
HAnimSite1048->setName("supramenton_pt");
HAnimSite1048->setDEF("hanim_supramenton_pt");
HAnimSite1048->setTranslation(new float[3]{0.0061,1.541,0.0805});
TouchSensor* TouchSensor1049 = new TouchSensor();
TouchSensor1049->setDescription("HAnimSite supramenton_pt");
HAnimSite1048->addChild(TouchSensor1049);

Shape* Shape1050 = new Shape();
Shape1050->setUSE("HAnimSiteShape");
HAnimSite1048->addChild(Shape1050);

HAnimSegment1007->addChild(HAnimSite1048);

HAnimJoint1006->addChild(HAnimSegment1007);

HAnimJoint* HAnimJoint1051 = new HAnimJoint();
HAnimJoint1051->setName("l_eyelid_joint");
HAnimJoint1051->setDEF("hanim_l_eyelid_joint");
HAnimJoint1051->setCenter(new float[3]{0,1,0});
HAnimJoint1006->addChild(HAnimJoint1051);

HAnimJoint* HAnimJoint1052 = new HAnimJoint();
HAnimJoint1052->setName("r_eyelid_joint");
HAnimJoint1052->setDEF("hanim_r_eyelid_joint");
HAnimJoint1052->setCenter(new float[3]{0,1,0});
HAnimJoint1006->addChild(HAnimJoint1052);

HAnimJoint* HAnimJoint1053 = new HAnimJoint();
HAnimJoint1053->setName("l_eyeball_joint");
HAnimJoint1053->setDEF("hanim_l_eyeball_joint");
HAnimJoint1053->setCenter(new float[3]{0,1,0});
HAnimJoint1006->addChild(HAnimJoint1053);

HAnimJoint* HAnimJoint1054 = new HAnimJoint();
HAnimJoint1054->setName("r_eyeball_joint");
HAnimJoint1054->setDEF("hanim_r_eyeball_joint");
HAnimJoint1054->setCenter(new float[3]{0,1,0});
HAnimJoint1006->addChild(HAnimJoint1054);

HAnimJoint* HAnimJoint1055 = new HAnimJoint();
HAnimJoint1055->setName("l_eyebrow_joint");
HAnimJoint1055->setDEF("hanim_l_eyebrow_joint");
HAnimJoint1055->setCenter(new float[3]{0,1,0});
HAnimJoint1006->addChild(HAnimJoint1055);

HAnimJoint* HAnimJoint1056 = new HAnimJoint();
HAnimJoint1056->setName("r_eyebrow_joint");
HAnimJoint1056->setDEF("hanim_r_eyebrow_joint");
HAnimJoint1056->setCenter(new float[3]{0,1,0});
HAnimJoint1006->addChild(HAnimJoint1056);

HAnimJoint* HAnimJoint1057 = new HAnimJoint();
HAnimJoint1057->setName("temporomandibular");
HAnimJoint1057->setDEF("hanim_temporomandibular");
HAnimJoint1057->setCenter(new float[3]{0,1,0});
HAnimJoint1006->addChild(HAnimJoint1057);

HAnimDisplacer* HAnimDisplacer1058 = new HAnimDisplacer();
HAnimDisplacer1058->setName("skull_tip_raiser_action");
HAnimDisplacer1058->setDEF("Joe_skull_tip_raiser_action");
HAnimDisplacer1058->setCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimDisplacer1058->setDisplacements(new float[30]{0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15});
HAnimJoint1006->addDisplacers(HAnimDisplacer1058);

HAnimJoint964->addChild(HAnimJoint1006);

HAnimJoint955->addChild(HAnimJoint964);

HAnimJoint943->addChild(HAnimJoint955);

HAnimJoint934->addChild(HAnimJoint943);

HAnimJoint925->addChild(HAnimJoint934);

HAnimJoint916->addChild(HAnimJoint925);

HAnimJoint907->addChild(HAnimJoint916);

HAnimJoint854->addChild(HAnimJoint907);

HAnimJoint* HAnimJoint1059 = new HAnimJoint();
HAnimJoint1059->setName("l_sternoclavicular");
HAnimJoint1059->setDEF("hanim_l_sternoclavicular");
HAnimJoint1059->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimSegment* HAnimSegment1060 = new HAnimSegment();
HAnimSegment1060->setName("l_clavicle");
HAnimSegment1060->setDEF("hanim_l_clavicle");
Transform* Transform1061 = new Transform();
//Empty Transform
Transform* Transform1062 = new Transform();
//Empty Transform
Shape* Shape1063 = new Shape();
Shape1063->setUSE("HAnimJointShape");
Transform1062->addChild(Shape1063);

Transform1061->addChild(Transform1062);

HAnimSegment1060->addChild(Transform1061);

Shape* Shape1064 = new Shape();
LineSet* LineSet1065 = new LineSet();
LineSet1065->setVertexCount(new int[1]{2});
Coordinate* Coordinate1066 = new Coordinate();
Coordinate1066->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
LineSet1065->setCoord(Coordinate1066);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA* ColorRGBA1067 = new ColorRGBA();
ColorRGBA1067->setUSE("HAnimSegmentLineColorRGBA");
LineSet1065->setColor(ColorRGBA1067);

Shape1064->setGeometry(LineSet1065);

HAnimSegment1060->addChild(Shape1064);

HAnimJoint1059->addChild(HAnimSegment1060);

HAnimJoint* HAnimJoint1068 = new HAnimJoint();
HAnimJoint1068->setName("l_acromioclavicular");
HAnimJoint1068->setDEF("hanim_l_acromioclavicular");
HAnimJoint1068->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimSegment* HAnimSegment1069 = new HAnimSegment();
HAnimSegment1069->setName("l_scapula");
HAnimSegment1069->setDEF("hanim_l_scapula");
Transform* Transform1070 = new Transform();
//Empty Transform
Transform* Transform1071 = new Transform();
//Empty Transform
Shape* Shape1072 = new Shape();
Shape1072->setUSE("HAnimJointShape");
Transform1071->addChild(Shape1072);

Transform1070->addChild(Transform1071);

HAnimSegment1069->addChild(Transform1070);

Shape* Shape1073 = new Shape();
LineSet* LineSet1074 = new LineSet();
LineSet1074->setVertexCount(new int[1]{2});
Coordinate* Coordinate1075 = new Coordinate();
Coordinate1075->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
LineSet1074->setCoord(Coordinate1075);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA* ColorRGBA1076 = new ColorRGBA();
ColorRGBA1076->setUSE("HAnimSegmentLineColorRGBA");
LineSet1074->setColor(ColorRGBA1076);

Shape1073->setGeometry(LineSet1074);

HAnimSegment1069->addChild(Shape1073);

HAnimSite* HAnimSite1077 = new HAnimSite();
HAnimSite1077->setName("l_bideltoid_pt");
HAnimSite1077->setDEF("hanim_l_bideltoid_pt");
HAnimSite1077->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor1078 = new TouchSensor();
TouchSensor1078->setDescription("HAnimSite l_bideltoid_pt");
HAnimSite1077->addChild(TouchSensor1078);

Shape* Shape1079 = new Shape();
Shape1079->setUSE("HAnimSiteShape");
HAnimSite1077->addChild(Shape1079);

HAnimSegment1069->addChild(HAnimSite1077);

HAnimSite* HAnimSite1080 = new HAnimSite();
HAnimSite1080->setName("l_humeral_lateral_epicondyles_pt");
HAnimSite1080->setDEF("hanim_l_humeral_lateral_epicondyles_pt");
HAnimSite1080->setTranslation(new float[3]{0.228,1.1482,-0.11});
TouchSensor* TouchSensor1081 = new TouchSensor();
TouchSensor1081->setDescription("HAnimSite l_humeral_lateral_epicondyles_pt");
HAnimSite1080->addChild(TouchSensor1081);

Shape* Shape1082 = new Shape();
Shape1082->setUSE("HAnimSiteShape");
HAnimSite1080->addChild(Shape1082);

HAnimSegment1069->addChild(HAnimSite1080);

HAnimJoint1068->addChild(HAnimSegment1069);

HAnimJoint* HAnimJoint1083 = new HAnimJoint();
HAnimJoint1083->setName("l_shoulder");
HAnimJoint1083->setDEF("hanim_l_shoulder");
HAnimJoint1083->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimSegment* HAnimSegment1084 = new HAnimSegment();
HAnimSegment1084->setName("l_upperarm");
HAnimSegment1084->setDEF("hanim_l_upperarm");
Transform* Transform1085 = new Transform();
//Empty Transform
Transform* Transform1086 = new Transform();
//Empty Transform
Shape* Shape1087 = new Shape();
Shape1087->setUSE("HAnimJointShape");
Transform1086->addChild(Shape1087);

Transform1085->addChild(Transform1086);

HAnimSegment1084->addChild(Transform1085);

Shape* Shape1088 = new Shape();
LineSet* LineSet1089 = new LineSet();
LineSet1089->setVertexCount(new int[1]{2});
Coordinate* Coordinate1090 = new Coordinate();
Coordinate1090->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
LineSet1089->setCoord(Coordinate1090);

//from l_shoulder to l_elbow vertices 2
ColorRGBA* ColorRGBA1091 = new ColorRGBA();
ColorRGBA1091->setUSE("HAnimSegmentLineColorRGBA");
LineSet1089->setColor(ColorRGBA1091);

Shape1088->setGeometry(LineSet1089);

HAnimSegment1084->addChild(Shape1088);

HAnimSite* HAnimSite1092 = new HAnimSite();
HAnimSite1092->setName("l_humeral_medial_epicondyles_pt");
HAnimSite1092->setDEF("hanim_l_humeral_medial_epicondyles_pt");
HAnimSite1092->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
TouchSensor* TouchSensor1093 = new TouchSensor();
TouchSensor1093->setDescription("HAnimSite l_humeral_medial_epicondyles_pt");
HAnimSite1092->addChild(TouchSensor1093);

Shape* Shape1094 = new Shape();
Shape1094->setUSE("HAnimSiteShape");
HAnimSite1092->addChild(Shape1094);

HAnimSegment1084->addChild(HAnimSite1092);

HAnimSite* HAnimSite1095 = new HAnimSite();
HAnimSite1095->setName("l_olecranon_pt");
HAnimSite1095->setDEF("hanim_l_olecranon_pt");
HAnimSite1095->setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
TouchSensor* TouchSensor1096 = new TouchSensor();
TouchSensor1096->setDescription("HAnimSite l_olecranon_pt");
HAnimSite1095->addChild(TouchSensor1096);

Shape* Shape1097 = new Shape();
Shape1097->setUSE("HAnimSiteShape");
HAnimSite1095->addChild(Shape1097);

HAnimSegment1084->addChild(HAnimSite1095);

HAnimSite* HAnimSite1098 = new HAnimSite();
HAnimSite1098->setName("l_radial_styloid_pt");
HAnimSite1098->setDEF("hanim_l_radial_styloid_pt");
HAnimSite1098->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
TouchSensor* TouchSensor1099 = new TouchSensor();
TouchSensor1099->setDescription("HAnimSite l_radial_styloid_pt");
HAnimSite1098->addChild(TouchSensor1099);

Shape* Shape1100 = new Shape();
Shape1100->setUSE("HAnimSiteShape");
HAnimSite1098->addChild(Shape1100);

HAnimSegment1084->addChild(HAnimSite1098);

HAnimSite* HAnimSite1101 = new HAnimSite();
HAnimSite1101->setName("l_radiale_pt");
HAnimSite1101->setDEF("hanim_l_radiale_pt");
HAnimSite1101->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
TouchSensor* TouchSensor1102 = new TouchSensor();
TouchSensor1102->setDescription("HAnimSite l_radiale_pt");
HAnimSite1101->addChild(TouchSensor1102);

Shape* Shape1103 = new Shape();
Shape1103->setUSE("HAnimSiteShape");
HAnimSite1101->addChild(Shape1103);

HAnimSegment1084->addChild(HAnimSite1101);

HAnimJoint1083->addChild(HAnimSegment1084);

HAnimJoint* HAnimJoint1104 = new HAnimJoint();
HAnimJoint1104->setName("l_elbow");
HAnimJoint1104->setDEF("hanim_l_elbow");
HAnimJoint1104->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimSegment* HAnimSegment1105 = new HAnimSegment();
HAnimSegment1105->setName("l_forearm");
HAnimSegment1105->setDEF("hanim_l_forearm");
Transform* Transform1106 = new Transform();
//Empty Transform
Transform* Transform1107 = new Transform();
//Empty Transform
Shape* Shape1108 = new Shape();
Shape1108->setUSE("HAnimJointShape");
Transform1107->addChild(Shape1108);

Transform1106->addChild(Transform1107);

HAnimSegment1105->addChild(Transform1106);

Shape* Shape1109 = new Shape();
LineSet* LineSet1110 = new LineSet();
LineSet1110->setVertexCount(new int[1]{2});
Coordinate* Coordinate1111 = new Coordinate();
Coordinate1111->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
LineSet1110->setCoord(Coordinate1111);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA* ColorRGBA1112 = new ColorRGBA();
ColorRGBA1112->setUSE("HAnimSegmentLineColorRGBA");
LineSet1110->setColor(ColorRGBA1112);

Shape1109->setGeometry(LineSet1110);

HAnimSegment1105->addChild(Shape1109);

HAnimSite* HAnimSite1113 = new HAnimSite();
HAnimSite1113->setName("l_ulnar_styloid_pt");
HAnimSite1113->setDEF("hanim_l_ulnar_styloid_pt");
HAnimSite1113->setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
TouchSensor* TouchSensor1114 = new TouchSensor();
TouchSensor1114->setDescription("HAnimSite l_ulnar_styloid_pt");
HAnimSite1113->addChild(TouchSensor1114);

Shape* Shape1115 = new Shape();
Shape1115->setUSE("HAnimSiteShape");
HAnimSite1113->addChild(Shape1115);

HAnimSegment1105->addChild(HAnimSite1113);

HAnimJoint1104->addChild(HAnimSegment1105);

HAnimJoint* HAnimJoint1116 = new HAnimJoint();
HAnimJoint1116->setName("l_radiocarpal");
HAnimJoint1116->setDEF("hanim_l_radiocarpal");
HAnimJoint1116->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimSegment* HAnimSegment1117 = new HAnimSegment();
HAnimSegment1117->setName("l_carpal");
HAnimSegment1117->setDEF("hanim_l_carpal");
Transform* Transform1118 = new Transform();
Transform1118->setScale(new float[3]{0.2,0.2,0.2});
Transform1118->setTranslation(new float[3]{0.2,0.85,-0.05});
Transform1118->setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
Transform* Transform1119 = new Transform();
Transform1119->setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
Shape* Shape1120 = new Shape();
Shape1120->setUSE("HAnimJointShape");
Transform1119->addChild(Shape1120);

Transform1118->addChild(Transform1119);

HAnimSegment1117->addChild(Transform1118);

Shape* Shape1121 = new Shape();
LineSet* LineSet1122 = new LineSet();
LineSet1122->setVertexCount(new int[1]{2});
Coordinate* Coordinate1123 = new Coordinate();
Coordinate1123->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1122->setCoord(Coordinate1123);

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA* ColorRGBA1124 = new ColorRGBA();
ColorRGBA1124->setUSE("HAnimSegmentLineColorRGBA");
LineSet1122->setColor(ColorRGBA1124);

Shape1121->setGeometry(LineSet1122);

HAnimSegment1117->addChild(Shape1121);

Shape* Shape1125 = new Shape();
LineSet* LineSet1126 = new LineSet();
LineSet1126->setVertexCount(new int[1]{2});
Coordinate* Coordinate1127 = new Coordinate();
Coordinate1127->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1126->setCoord(Coordinate1127);

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA* ColorRGBA1128 = new ColorRGBA();
ColorRGBA1128->setUSE("HAnimSegmentLineColorRGBA");
LineSet1126->setColor(ColorRGBA1128);

Shape1125->setGeometry(LineSet1126);

HAnimSegment1117->addChild(Shape1125);

Shape* Shape1129 = new Shape();
LineSet* LineSet1130 = new LineSet();
LineSet1130->setVertexCount(new int[1]{2});
Coordinate* Coordinate1131 = new Coordinate();
Coordinate1131->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1130->setCoord(Coordinate1131);

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA* ColorRGBA1132 = new ColorRGBA();
ColorRGBA1132->setUSE("HAnimSegmentLineColorRGBA");
LineSet1130->setColor(ColorRGBA1132);

Shape1129->setGeometry(LineSet1130);

HAnimSegment1117->addChild(Shape1129);

Shape* Shape1133 = new Shape();
LineSet* LineSet1134 = new LineSet();
LineSet1134->setVertexCount(new int[1]{2});
Coordinate* Coordinate1135 = new Coordinate();
Coordinate1135->setPoint(new float[6]{0.1984,0.8663,-0.0583,0,1,0});
LineSet1134->setCoord(Coordinate1135);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA* ColorRGBA1136 = new ColorRGBA();
ColorRGBA1136->setUSE("HAnimSegmentLineColorRGBA");
LineSet1134->setColor(ColorRGBA1136);

Shape1133->setGeometry(LineSet1134);

HAnimSegment1117->addChild(Shape1133);

HAnimJoint1116->addChild(HAnimSegment1117);

HAnimJoint* HAnimJoint1137 = new HAnimJoint();
HAnimJoint1137->setName("l_midcarpal_1");
HAnimJoint1137->setDEF("hanim_l_midcarpal_1");
HAnimJoint1137->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment1138 = new HAnimSegment();
HAnimSegment1138->setName("l_trapezium");
HAnimSegment1138->setDEF("hanim_l_trapezium");
Transform* Transform1139 = new Transform();
//Empty Transform
Transform* Transform1140 = new Transform();
//Empty Transform
Shape* Shape1141 = new Shape();
Shape1141->setUSE("HAnimJointShape");
Transform1140->addChild(Shape1141);

Transform1139->addChild(Transform1140);

HAnimSegment1138->addChild(Transform1139);

Shape* Shape1142 = new Shape();
LineSet* LineSet1143 = new LineSet();
LineSet1143->setVertexCount(new int[1]{2});
Coordinate* Coordinate1144 = new Coordinate();
Coordinate1144->setPoint(new float[6]{0,1,0,0.1924,0.8472,-0.0534});
LineSet1143->setCoord(Coordinate1144);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA* ColorRGBA1145 = new ColorRGBA();
ColorRGBA1145->setUSE("HAnimSegmentLineColorRGBA");
LineSet1143->setColor(ColorRGBA1145);

Shape1142->setGeometry(LineSet1143);

HAnimSegment1138->addChild(Shape1142);

HAnimJoint1137->addChild(HAnimSegment1138);

HAnimJoint* HAnimJoint1146 = new HAnimJoint();
HAnimJoint1146->setName("l_carpometacarpal_1");
HAnimJoint1146->setDEF("hanim_l_carpometacarpal_1");
HAnimJoint1146->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimSegment* HAnimSegment1147 = new HAnimSegment();
HAnimSegment1147->setName("l_metacarpal_1");
HAnimSegment1147->setDEF("hanim_l_metacarpal_1");
Transform* Transform1148 = new Transform();
//Empty Transform
Transform* Transform1149 = new Transform();
//Empty Transform
Shape* Shape1150 = new Shape();
Shape1150->setUSE("HAnimJointShape");
Transform1149->addChild(Shape1150);

Transform1148->addChild(Transform1149);

HAnimSegment1147->addChild(Transform1148);

Shape* Shape1151 = new Shape();
LineSet* LineSet1152 = new LineSet();
LineSet1152->setVertexCount(new int[1]{2});
Coordinate* Coordinate1153 = new Coordinate();
Coordinate1153->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
LineSet1152->setCoord(Coordinate1153);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA* ColorRGBA1154 = new ColorRGBA();
ColorRGBA1154->setUSE("HAnimSegmentLineColorRGBA");
LineSet1152->setColor(ColorRGBA1154);

Shape1151->setGeometry(LineSet1152);

HAnimSegment1147->addChild(Shape1151);

HAnimJoint1146->addChild(HAnimSegment1147);

HAnimJoint* HAnimJoint1155 = new HAnimJoint();
HAnimJoint1155->setName("l_metacarpophalangeal_1");
HAnimJoint1155->setDEF("hanim_l_metacarpophalangeal_1");
HAnimJoint1155->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimSegment* HAnimSegment1156 = new HAnimSegment();
HAnimSegment1156->setName("l_carpal_proximal_phalanx_1");
HAnimSegment1156->setDEF("hanim_l_carpal_proximal_phalanx_1");
Transform* Transform1157 = new Transform();
//Empty Transform
Transform* Transform1158 = new Transform();
//Empty Transform
Shape* Shape1159 = new Shape();
Shape1159->setUSE("HAnimJointShape");
Transform1158->addChild(Shape1159);

Transform1157->addChild(Transform1158);

HAnimSegment1156->addChild(Transform1157);

Shape* Shape1160 = new Shape();
LineSet* LineSet1161 = new LineSet();
LineSet1161->setVertexCount(new int[1]{2});
Coordinate* Coordinate1162 = new Coordinate();
Coordinate1162->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
LineSet1161->setCoord(Coordinate1162);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA1163 = new ColorRGBA();
ColorRGBA1163->setUSE("HAnimSegmentLineColorRGBA");
LineSet1161->setColor(ColorRGBA1163);

Shape1160->setGeometry(LineSet1161);

HAnimSegment1156->addChild(Shape1160);

HAnimSite* HAnimSite1164 = new HAnimSite();
HAnimSite1164->setName("l_carpal_distal_phalanx_1_tip");
HAnimSite1164->setDEF("hanim_l_carpal_distal_phalanx_1_tip");
HAnimSite1164->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor1165 = new TouchSensor();
TouchSensor1165->setDescription("HAnimSite l_carpal_distal_phalanx_1_tip");
HAnimSite1164->addChild(TouchSensor1165);

Shape* Shape1166 = new Shape();
Shape1166->setUSE("HAnimSiteShape");
HAnimSite1164->addChild(Shape1166);

HAnimSegment1156->addChild(HAnimSite1164);

HAnimJoint1155->addChild(HAnimSegment1156);

HAnimJoint* HAnimJoint1167 = new HAnimJoint();
HAnimJoint1167->setName("l_carpal_interphalangeal_1");
HAnimJoint1167->setDEF("hanim_l_carpal_interphalangeal_1");
HAnimJoint1167->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint1155->addChild(HAnimJoint1167);

HAnimJoint1146->addChild(HAnimJoint1155);

HAnimJoint1137->addChild(HAnimJoint1146);

HAnimJoint1116->addChild(HAnimJoint1137);

HAnimJoint* HAnimJoint1168 = new HAnimJoint();
HAnimJoint1168->setName("l_midcarpal_2");
HAnimJoint1168->setDEF("hanim_l_midcarpal_2");
HAnimJoint1168->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment1169 = new HAnimSegment();
HAnimSegment1169->setName("l_trapezoid");
HAnimSegment1169->setDEF("hanim_l_trapezoid");
Transform* Transform1170 = new Transform();
//Empty Transform
Transform* Transform1171 = new Transform();
//Empty Transform
Shape* Shape1172 = new Shape();
Shape1172->setUSE("HAnimJointShape");
Transform1171->addChild(Shape1172);

Transform1170->addChild(Transform1171);

HAnimSegment1169->addChild(Transform1170);

Shape* Shape1173 = new Shape();
LineSet* LineSet1174 = new LineSet();
LineSet1174->setVertexCount(new int[1]{2});
Coordinate* Coordinate1175 = new Coordinate();
Coordinate1175->setPoint(new float[6]{0,1,0,0.1983,0.8024,-0.028});
LineSet1174->setCoord(Coordinate1175);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA* ColorRGBA1176 = new ColorRGBA();
ColorRGBA1176->setUSE("HAnimSegmentLineColorRGBA");
LineSet1174->setColor(ColorRGBA1176);

Shape1173->setGeometry(LineSet1174);

HAnimSegment1169->addChild(Shape1173);

HAnimSite* HAnimSite1177 = new HAnimSite();
HAnimSite1177->setName("l_metacarpal_phalanx_2_pt");
HAnimSite1177->setDEF("hanim_l_metacarpal_phalanx_2_pt");
HAnimSite1177->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
TouchSensor* TouchSensor1178 = new TouchSensor();
TouchSensor1178->setDescription("HAnimSite l_metacarpal_phalanx_2_pt");
HAnimSite1177->addChild(TouchSensor1178);

Shape* Shape1179 = new Shape();
Shape1179->setUSE("HAnimSiteShape");
HAnimSite1177->addChild(Shape1179);

HAnimSegment1169->addChild(HAnimSite1177);

HAnimJoint1168->addChild(HAnimSegment1169);

HAnimJoint* HAnimJoint1180 = new HAnimJoint();
HAnimJoint1180->setName("l_carpometacarpal_2");
HAnimJoint1180->setDEF("hanim_l_carpometacarpal_2");
HAnimJoint1180->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimSegment* HAnimSegment1181 = new HAnimSegment();
HAnimSegment1181->setName("l_metacarpal_2");
HAnimSegment1181->setDEF("hanim_l_metacarpal_2");
Transform* Transform1182 = new Transform();
//Empty Transform
Transform* Transform1183 = new Transform();
//Empty Transform
Shape* Shape1184 = new Shape();
Shape1184->setUSE("HAnimJointShape");
Transform1183->addChild(Shape1184);

Transform1182->addChild(Transform1183);

HAnimSegment1181->addChild(Transform1182);

Shape* Shape1185 = new Shape();
LineSet* LineSet1186 = new LineSet();
LineSet1186->setVertexCount(new int[1]{2});
Coordinate* Coordinate1187 = new Coordinate();
Coordinate1187->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
LineSet1186->setCoord(Coordinate1187);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA* ColorRGBA1188 = new ColorRGBA();
ColorRGBA1188->setUSE("HAnimSegmentLineColorRGBA");
LineSet1186->setColor(ColorRGBA1188);

Shape1185->setGeometry(LineSet1186);

HAnimSegment1181->addChild(Shape1185);

HAnimJoint1180->addChild(HAnimSegment1181);

HAnimJoint* HAnimJoint1189 = new HAnimJoint();
HAnimJoint1189->setName("l_metacarpophalangeal_2");
HAnimJoint1189->setDEF("hanim_l_metacarpophalangeal_2");
HAnimJoint1189->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimSegment* HAnimSegment1190 = new HAnimSegment();
HAnimSegment1190->setName("l_carpal_proximal_phalanx_2");
HAnimSegment1190->setDEF("hanim_l_carpal_proximal_phalanx_2");
Transform* Transform1191 = new Transform();
//Empty Transform
Transform* Transform1192 = new Transform();
//Empty Transform
Shape* Shape1193 = new Shape();
Shape1193->setUSE("HAnimJointShape");
Transform1192->addChild(Shape1193);

Transform1191->addChild(Transform1192);

HAnimSegment1190->addChild(Transform1191);

Shape* Shape1194 = new Shape();
LineSet* LineSet1195 = new LineSet();
LineSet1195->setVertexCount(new int[1]{2});
Coordinate* Coordinate1196 = new Coordinate();
Coordinate1196->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
LineSet1195->setCoord(Coordinate1196);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA1197 = new ColorRGBA();
ColorRGBA1197->setUSE("HAnimSegmentLineColorRGBA");
LineSet1195->setColor(ColorRGBA1197);

Shape1194->setGeometry(LineSet1195);

HAnimSegment1190->addChild(Shape1194);

HAnimJoint1189->addChild(HAnimSegment1190);

HAnimJoint* HAnimJoint1198 = new HAnimJoint();
HAnimJoint1198->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint1198->setDEF("hanim_l_carpal_proximal_interphalangeal_2");
HAnimJoint1198->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimSegment* HAnimSegment1199 = new HAnimSegment();
HAnimSegment1199->setName("l_carpal_middle_phalanx_2");
HAnimSegment1199->setDEF("hanim_l_carpal_middle_phalanx_2");
Transform* Transform1200 = new Transform();
//Empty Transform
Transform* Transform1201 = new Transform();
//Empty Transform
Shape* Shape1202 = new Shape();
Shape1202->setUSE("HAnimJointShape");
Transform1201->addChild(Shape1202);

Transform1200->addChild(Transform1201);

HAnimSegment1199->addChild(Transform1200);

Shape* Shape1203 = new Shape();
LineSet* LineSet1204 = new LineSet();
LineSet1204->setVertexCount(new int[1]{2});
Coordinate* Coordinate1205 = new Coordinate();
Coordinate1205->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
LineSet1204->setCoord(Coordinate1205);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA1206 = new ColorRGBA();
ColorRGBA1206->setUSE("HAnimSegmentLineColorRGBA");
LineSet1204->setColor(ColorRGBA1206);

Shape1203->setGeometry(LineSet1204);

HAnimSegment1199->addChild(Shape1203);

HAnimSite* HAnimSite1207 = new HAnimSite();
HAnimSite1207->setName("l_carpal_distal_phalanx_2_tip");
HAnimSite1207->setDEF("hanim_l_carpal_distal_phalanx_2_tip");
HAnimSite1207->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor1208 = new TouchSensor();
TouchSensor1208->setDescription("HAnimSite l_carpal_distal_phalanx_2_tip");
HAnimSite1207->addChild(TouchSensor1208);

Shape* Shape1209 = new Shape();
Shape1209->setUSE("HAnimSiteShape");
HAnimSite1207->addChild(Shape1209);

HAnimSegment1199->addChild(HAnimSite1207);

HAnimSite* HAnimSite1210 = new HAnimSite();
HAnimSite1210->setName("l_dactylion_pt");
HAnimSite1210->setDEF("hanim_l_dactylion_pt");
HAnimSite1210->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
TouchSensor* TouchSensor1211 = new TouchSensor();
TouchSensor1211->setDescription("HAnimSite l_dactylion_pt");
HAnimSite1210->addChild(TouchSensor1211);

Shape* Shape1212 = new Shape();
Shape1212->setUSE("HAnimSiteShape");
HAnimSite1210->addChild(Shape1212);

HAnimSegment1199->addChild(HAnimSite1210);

HAnimJoint1198->addChild(HAnimSegment1199);

HAnimJoint* HAnimJoint1213 = new HAnimJoint();
HAnimJoint1213->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint1213->setDEF("hanim_l_carpal_distal_interphalangeal_2");
HAnimJoint1213->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint1198->addChild(HAnimJoint1213);

HAnimJoint1189->addChild(HAnimJoint1198);

HAnimJoint1180->addChild(HAnimJoint1189);

HAnimJoint1168->addChild(HAnimJoint1180);

HAnimJoint1116->addChild(HAnimJoint1168);

HAnimJoint* HAnimJoint1214 = new HAnimJoint();
HAnimJoint1214->setName("l_midcarpal_3");
HAnimJoint1214->setDEF("hanim_l_midcarpal_3");
HAnimJoint1214->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment1215 = new HAnimSegment();
HAnimSegment1215->setName("l_capitate");
HAnimSegment1215->setDEF("hanim_l_capitate");
Transform* Transform1216 = new Transform();
//Empty Transform
Transform* Transform1217 = new Transform();
//Empty Transform
Shape* Shape1218 = new Shape();
Shape1218->setUSE("HAnimJointShape");
Transform1217->addChild(Shape1218);

Transform1216->addChild(Transform1217);

HAnimSegment1215->addChild(Transform1216);

Shape* Shape1219 = new Shape();
LineSet* LineSet1220 = new LineSet();
LineSet1220->setVertexCount(new int[1]{2});
Coordinate* Coordinate1221 = new Coordinate();
Coordinate1221->setPoint(new float[6]{0,1,0,0.1987,0.8029,-0.053});
LineSet1220->setCoord(Coordinate1221);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA* ColorRGBA1222 = new ColorRGBA();
ColorRGBA1222->setUSE("HAnimSegmentLineColorRGBA");
LineSet1220->setColor(ColorRGBA1222);

Shape1219->setGeometry(LineSet1220);

HAnimSegment1215->addChild(Shape1219);

HAnimSite* HAnimSite1223 = new HAnimSite();
HAnimSite1223->setName("l_metacarpal_phalanx_3_pt");
HAnimSite1223->setDEF("hanim_l_metacarpal_phalanx_3_pt");
HAnimSite1223->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor1224 = new TouchSensor();
TouchSensor1224->setDescription("HAnimSite l_metacarpal_phalanx_3_pt");
HAnimSite1223->addChild(TouchSensor1224);

Shape* Shape1225 = new Shape();
Shape1225->setUSE("HAnimSiteShape");
HAnimSite1223->addChild(Shape1225);

HAnimSegment1215->addChild(HAnimSite1223);

HAnimJoint1214->addChild(HAnimSegment1215);

HAnimJoint* HAnimJoint1226 = new HAnimJoint();
HAnimJoint1226->setName("l_carpometacarpal_3");
HAnimJoint1226->setDEF("hanim_l_carpometacarpal_3");
HAnimJoint1226->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimSegment* HAnimSegment1227 = new HAnimSegment();
HAnimSegment1227->setName("l_metacarpal_3");
HAnimSegment1227->setDEF("hanim_l_metacarpal_3");
Transform* Transform1228 = new Transform();
//Empty Transform
Transform* Transform1229 = new Transform();
//Empty Transform
Shape* Shape1230 = new Shape();
Shape1230->setUSE("HAnimJointShape");
Transform1229->addChild(Shape1230);

Transform1228->addChild(Transform1229);

HAnimSegment1227->addChild(Transform1228);

Shape* Shape1231 = new Shape();
LineSet* LineSet1232 = new LineSet();
LineSet1232->setVertexCount(new int[1]{2});
Coordinate* Coordinate1233 = new Coordinate();
Coordinate1233->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
LineSet1232->setCoord(Coordinate1233);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA* ColorRGBA1234 = new ColorRGBA();
ColorRGBA1234->setUSE("HAnimSegmentLineColorRGBA");
LineSet1232->setColor(ColorRGBA1234);

Shape1231->setGeometry(LineSet1232);

HAnimSegment1227->addChild(Shape1231);

HAnimJoint1226->addChild(HAnimSegment1227);

HAnimJoint* HAnimJoint1235 = new HAnimJoint();
HAnimJoint1235->setName("l_metacarpophalangeal_3");
HAnimJoint1235->setDEF("hanim_l_metacarpophalangeal_3");
HAnimJoint1235->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimSegment* HAnimSegment1236 = new HAnimSegment();
HAnimSegment1236->setName("l_carpal_proximal_phalanx_3");
HAnimSegment1236->setDEF("hanim_l_carpal_proximal_phalanx_3");
Transform* Transform1237 = new Transform();
//Empty Transform
Transform* Transform1238 = new Transform();
//Empty Transform
Shape* Shape1239 = new Shape();
Shape1239->setUSE("HAnimJointShape");
Transform1238->addChild(Shape1239);

Transform1237->addChild(Transform1238);

HAnimSegment1236->addChild(Transform1237);

Shape* Shape1240 = new Shape();
LineSet* LineSet1241 = new LineSet();
LineSet1241->setVertexCount(new int[1]{2});
Coordinate* Coordinate1242 = new Coordinate();
Coordinate1242->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
LineSet1241->setCoord(Coordinate1242);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA1243 = new ColorRGBA();
ColorRGBA1243->setUSE("HAnimSegmentLineColorRGBA");
LineSet1241->setColor(ColorRGBA1243);

Shape1240->setGeometry(LineSet1241);

HAnimSegment1236->addChild(Shape1240);

HAnimJoint1235->addChild(HAnimSegment1236);

HAnimJoint* HAnimJoint1244 = new HAnimJoint();
HAnimJoint1244->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint1244->setDEF("hanim_l_carpal_proximal_interphalangeal_3");
HAnimJoint1244->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimSegment* HAnimSegment1245 = new HAnimSegment();
HAnimSegment1245->setName("l_carpal_middle_phalanx_3");
HAnimSegment1245->setDEF("hanim_l_carpal_middle_phalanx_3");
Transform* Transform1246 = new Transform();
//Empty Transform
Transform* Transform1247 = new Transform();
//Empty Transform
Shape* Shape1248 = new Shape();
Shape1248->setUSE("HAnimJointShape");
Transform1247->addChild(Shape1248);

Transform1246->addChild(Transform1247);

HAnimSegment1245->addChild(Transform1246);

Shape* Shape1249 = new Shape();
LineSet* LineSet1250 = new LineSet();
LineSet1250->setVertexCount(new int[1]{2});
Coordinate* Coordinate1251 = new Coordinate();
Coordinate1251->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
LineSet1250->setCoord(Coordinate1251);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA1252 = new ColorRGBA();
ColorRGBA1252->setUSE("HAnimSegmentLineColorRGBA");
LineSet1250->setColor(ColorRGBA1252);

Shape1249->setGeometry(LineSet1250);

HAnimSegment1245->addChild(Shape1249);

HAnimSite* HAnimSite1253 = new HAnimSite();
HAnimSite1253->setName("l_carpal_distal_phalanx_3_tip");
HAnimSite1253->setDEF("hanim_l_carpal_distal_phalanx_3_tip");
HAnimSite1253->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor1254 = new TouchSensor();
TouchSensor1254->setDescription("HAnimSite l_carpal_distal_phalanx_3_tip");
HAnimSite1253->addChild(TouchSensor1254);

Shape* Shape1255 = new Shape();
Shape1255->setUSE("HAnimSiteShape");
HAnimSite1253->addChild(Shape1255);

HAnimSegment1245->addChild(HAnimSite1253);

HAnimJoint1244->addChild(HAnimSegment1245);

HAnimJoint* HAnimJoint1256 = new HAnimJoint();
HAnimJoint1256->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint1256->setDEF("hanim_l_carpal_distal_interphalangeal_3");
HAnimJoint1256->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint1244->addChild(HAnimJoint1256);

HAnimJoint1235->addChild(HAnimJoint1244);

HAnimJoint1226->addChild(HAnimJoint1235);

HAnimJoint1214->addChild(HAnimJoint1226);

HAnimJoint1116->addChild(HAnimJoint1214);

HAnimJoint* HAnimJoint1257 = new HAnimJoint();
HAnimJoint1257->setName("l_midcarpal_4_5");
HAnimJoint1257->setDEF("hanim_l_midcarpal_4_5");
HAnimJoint1257->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment1258 = new HAnimSegment();
HAnimSegment1258->setName("l_hamate");
HAnimSegment1258->setDEF("hanim_l_hamate");
Transform* Transform1259 = new Transform();
//Empty Transform
Transform* Transform1260 = new Transform();
//Empty Transform
Shape* Shape1261 = new Shape();
Shape1261->setUSE("HAnimJointShape");
Transform1260->addChild(Shape1261);

Transform1259->addChild(Transform1260);

HAnimSegment1258->addChild(Transform1259);

Shape* Shape1262 = new Shape();
LineSet* LineSet1263 = new LineSet();
LineSet1263->setVertexCount(new int[1]{2});
Coordinate* Coordinate1264 = new Coordinate();
Coordinate1264->setPoint(new float[6]{0,1,0,0.1956,0.8019,-0.0794});
LineSet1263->setCoord(Coordinate1264);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA* ColorRGBA1265 = new ColorRGBA();
ColorRGBA1265->setUSE("HAnimSegmentLineColorRGBA");
LineSet1263->setColor(ColorRGBA1265);

Shape1262->setGeometry(LineSet1263);

HAnimSegment1258->addChild(Shape1262);

Shape* Shape1266 = new Shape();
LineSet* LineSet1267 = new LineSet();
LineSet1267->setVertexCount(new int[1]{2});
Coordinate* Coordinate1268 = new Coordinate();
Coordinate1268->setPoint(new float[6]{0,1,0,0.1925,0.8066,-0.1036});
LineSet1267->setCoord(Coordinate1268);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA* ColorRGBA1269 = new ColorRGBA();
ColorRGBA1269->setUSE("HAnimSegmentLineColorRGBA");
LineSet1267->setColor(ColorRGBA1269);

Shape1266->setGeometry(LineSet1267);

HAnimSegment1258->addChild(Shape1266);

HAnimSite* HAnimSite1270 = new HAnimSite();
HAnimSite1270->setName("l_metacarpal_phalanx_5_pt");
HAnimSite1270->setDEF("hanim_l_metacarpal_phalanx_5_pt");
HAnimSite1270->setTranslation(new float[3]{0.1929,0.786,-0.1122});
TouchSensor* TouchSensor1271 = new TouchSensor();
TouchSensor1271->setDescription("HAnimSite l_metacarpal_phalanx_5_pt");
HAnimSite1270->addChild(TouchSensor1271);

Shape* Shape1272 = new Shape();
Shape1272->setUSE("HAnimSiteShape");
HAnimSite1270->addChild(Shape1272);

HAnimSegment1258->addChild(HAnimSite1270);

HAnimJoint1257->addChild(HAnimSegment1258);

HAnimJoint* HAnimJoint1273 = new HAnimJoint();
HAnimJoint1273->setName("l_carpometacarpal_4");
HAnimJoint1273->setDEF("hanim_l_carpometacarpal_4");
HAnimJoint1273->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimSegment* HAnimSegment1274 = new HAnimSegment();
HAnimSegment1274->setName("l_metacarpal_4");
HAnimSegment1274->setDEF("hanim_l_metacarpal_4");
Transform* Transform1275 = new Transform();
//Empty Transform
Transform* Transform1276 = new Transform();
//Empty Transform
Shape* Shape1277 = new Shape();
Shape1277->setUSE("HAnimJointShape");
Transform1276->addChild(Shape1277);

Transform1275->addChild(Transform1276);

HAnimSegment1274->addChild(Transform1275);

Shape* Shape1278 = new Shape();
LineSet* LineSet1279 = new LineSet();
LineSet1279->setVertexCount(new int[1]{2});
Coordinate* Coordinate1280 = new Coordinate();
Coordinate1280->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
LineSet1279->setCoord(Coordinate1280);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA* ColorRGBA1281 = new ColorRGBA();
ColorRGBA1281->setUSE("HAnimSegmentLineColorRGBA");
LineSet1279->setColor(ColorRGBA1281);

Shape1278->setGeometry(LineSet1279);

HAnimSegment1274->addChild(Shape1278);

HAnimJoint1273->addChild(HAnimSegment1274);

HAnimJoint* HAnimJoint1282 = new HAnimJoint();
HAnimJoint1282->setName("l_metacarpophalangeal_4");
HAnimJoint1282->setDEF("hanim_l_metacarpophalangeal_4");
HAnimJoint1282->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimSegment* HAnimSegment1283 = new HAnimSegment();
HAnimSegment1283->setName("l_carpal_proximal_phalanx_4");
HAnimSegment1283->setDEF("hanim_l_carpal_proximal_phalanx_4");
Transform* Transform1284 = new Transform();
//Empty Transform
Transform* Transform1285 = new Transform();
//Empty Transform
Shape* Shape1286 = new Shape();
Shape1286->setUSE("HAnimJointShape");
Transform1285->addChild(Shape1286);

Transform1284->addChild(Transform1285);

HAnimSegment1283->addChild(Transform1284);

Shape* Shape1287 = new Shape();
LineSet* LineSet1288 = new LineSet();
LineSet1288->setVertexCount(new int[1]{2});
Coordinate* Coordinate1289 = new Coordinate();
Coordinate1289->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
LineSet1288->setCoord(Coordinate1289);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA1290 = new ColorRGBA();
ColorRGBA1290->setUSE("HAnimSegmentLineColorRGBA");
LineSet1288->setColor(ColorRGBA1290);

Shape1287->setGeometry(LineSet1288);

HAnimSegment1283->addChild(Shape1287);

HAnimJoint1282->addChild(HAnimSegment1283);

HAnimJoint* HAnimJoint1291 = new HAnimJoint();
HAnimJoint1291->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint1291->setDEF("hanim_l_carpal_proximal_interphalangeal_4");
HAnimJoint1291->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimSegment* HAnimSegment1292 = new HAnimSegment();
HAnimSegment1292->setName("l_carpal_middle_phalanx_4");
HAnimSegment1292->setDEF("hanim_l_carpal_middle_phalanx_4");
Transform* Transform1293 = new Transform();
//Empty Transform
Transform* Transform1294 = new Transform();
//Empty Transform
Shape* Shape1295 = new Shape();
Shape1295->setUSE("HAnimJointShape");
Transform1294->addChild(Shape1295);

Transform1293->addChild(Transform1294);

HAnimSegment1292->addChild(Transform1293);

Shape* Shape1296 = new Shape();
LineSet* LineSet1297 = new LineSet();
LineSet1297->setVertexCount(new int[1]{2});
Coordinate* Coordinate1298 = new Coordinate();
Coordinate1298->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
LineSet1297->setCoord(Coordinate1298);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA1299 = new ColorRGBA();
ColorRGBA1299->setUSE("HAnimSegmentLineColorRGBA");
LineSet1297->setColor(ColorRGBA1299);

Shape1296->setGeometry(LineSet1297);

HAnimSegment1292->addChild(Shape1296);

HAnimSite* HAnimSite1300 = new HAnimSite();
HAnimSite1300->setName("l_carpal_distal_phalanx_4_tip");
HAnimSite1300->setDEF("hanim_l_carpal_distal_phalanx_4_tip");
HAnimSite1300->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor1301 = new TouchSensor();
TouchSensor1301->setDescription("HAnimSite l_carpal_distal_phalanx_4_tip");
HAnimSite1300->addChild(TouchSensor1301);

Shape* Shape1302 = new Shape();
Shape1302->setUSE("HAnimSiteShape");
HAnimSite1300->addChild(Shape1302);

HAnimSegment1292->addChild(HAnimSite1300);

HAnimJoint1291->addChild(HAnimSegment1292);

HAnimJoint* HAnimJoint1303 = new HAnimJoint();
HAnimJoint1303->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint1303->setDEF("hanim_l_carpal_distal_interphalangeal_4");
HAnimJoint1303->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint1291->addChild(HAnimJoint1303);

HAnimJoint1282->addChild(HAnimJoint1291);

HAnimJoint1273->addChild(HAnimJoint1282);

HAnimJoint1257->addChild(HAnimJoint1273);

HAnimJoint* HAnimJoint1304 = new HAnimJoint();
HAnimJoint1304->setName("l_carpometacarpal_5");
HAnimJoint1304->setDEF("hanim_l_carpometacarpal_5");
HAnimJoint1304->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimSegment* HAnimSegment1305 = new HAnimSegment();
HAnimSegment1305->setName("l_metacarpal_5");
HAnimSegment1305->setDEF("hanim_l_metacarpal_5");
Transform* Transform1306 = new Transform();
//Empty Transform
Transform* Transform1307 = new Transform();
//Empty Transform
Shape* Shape1308 = new Shape();
Shape1308->setUSE("HAnimJointShape");
Transform1307->addChild(Shape1308);

Transform1306->addChild(Transform1307);

HAnimSegment1305->addChild(Transform1306);

Shape* Shape1309 = new Shape();
LineSet* LineSet1310 = new LineSet();
LineSet1310->setVertexCount(new int[1]{2});
Coordinate* Coordinate1311 = new Coordinate();
Coordinate1311->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
LineSet1310->setCoord(Coordinate1311);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA* ColorRGBA1312 = new ColorRGBA();
ColorRGBA1312->setUSE("HAnimSegmentLineColorRGBA");
LineSet1310->setColor(ColorRGBA1312);

Shape1309->setGeometry(LineSet1310);

HAnimSegment1305->addChild(Shape1309);

HAnimJoint1304->addChild(HAnimSegment1305);

HAnimJoint* HAnimJoint1313 = new HAnimJoint();
HAnimJoint1313->setName("l_metacarpophalangeal_5");
HAnimJoint1313->setDEF("hanim_l_metacarpophalangeal_5");
HAnimJoint1313->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimSegment* HAnimSegment1314 = new HAnimSegment();
HAnimSegment1314->setName("l_carpal_proximal_phalanx_5");
HAnimSegment1314->setDEF("hanim_l_carpal_proximal_phalanx_5");
Transform* Transform1315 = new Transform();
//Empty Transform
Transform* Transform1316 = new Transform();
//Empty Transform
Shape* Shape1317 = new Shape();
Shape1317->setUSE("HAnimJointShape");
Transform1316->addChild(Shape1317);

Transform1315->addChild(Transform1316);

HAnimSegment1314->addChild(Transform1315);

Shape* Shape1318 = new Shape();
LineSet* LineSet1319 = new LineSet();
LineSet1319->setVertexCount(new int[1]{2});
Coordinate* Coordinate1320 = new Coordinate();
Coordinate1320->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
LineSet1319->setCoord(Coordinate1320);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1321 = new ColorRGBA();
ColorRGBA1321->setUSE("HAnimSegmentLineColorRGBA");
LineSet1319->setColor(ColorRGBA1321);

Shape1318->setGeometry(LineSet1319);

HAnimSegment1314->addChild(Shape1318);

HAnimJoint1313->addChild(HAnimSegment1314);

HAnimJoint* HAnimJoint1322 = new HAnimJoint();
HAnimJoint1322->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint1322->setDEF("hanim_l_carpal_proximal_interphalangeal_5");
HAnimJoint1322->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimSegment* HAnimSegment1323 = new HAnimSegment();
HAnimSegment1323->setName("l_carpal_middle_phalanx_5");
HAnimSegment1323->setDEF("hanim_l_carpal_middle_phalanx_5");
Transform* Transform1324 = new Transform();
//Empty Transform
Transform* Transform1325 = new Transform();
//Empty Transform
Shape* Shape1326 = new Shape();
Shape1326->setUSE("HAnimJointShape");
Transform1325->addChild(Shape1326);

Transform1324->addChild(Transform1325);

HAnimSegment1323->addChild(Transform1324);

Shape* Shape1327 = new Shape();
LineSet* LineSet1328 = new LineSet();
LineSet1328->setVertexCount(new int[1]{2});
Coordinate* Coordinate1329 = new Coordinate();
Coordinate1329->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
LineSet1328->setCoord(Coordinate1329);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1330 = new ColorRGBA();
ColorRGBA1330->setUSE("HAnimSegmentLineColorRGBA");
LineSet1328->setColor(ColorRGBA1330);

Shape1327->setGeometry(LineSet1328);

HAnimSegment1323->addChild(Shape1327);

HAnimSite* HAnimSite1331 = new HAnimSite();
HAnimSite1331->setName("l_carpal_distal_phalanx_5_tip");
HAnimSite1331->setDEF("hanim_l_carpal_distal_phalanx_5_tip");
HAnimSite1331->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor1332 = new TouchSensor();
TouchSensor1332->setDescription("HAnimSite l_carpal_distal_phalanx_5_tip");
HAnimSite1331->addChild(TouchSensor1332);

Shape* Shape1333 = new Shape();
Shape1333->setUSE("HAnimSiteShape");
HAnimSite1331->addChild(Shape1333);

HAnimSegment1323->addChild(HAnimSite1331);

HAnimJoint1322->addChild(HAnimSegment1323);

HAnimJoint* HAnimJoint1334 = new HAnimJoint();
HAnimJoint1334->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint1334->setDEF("hanim_l_carpal_distal_interphalangeal_5");
HAnimJoint1334->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1322->addChild(HAnimJoint1334);

HAnimJoint1313->addChild(HAnimJoint1322);

HAnimJoint1304->addChild(HAnimJoint1313);

HAnimJoint1257->addChild(HAnimJoint1304);

HAnimJoint1116->addChild(HAnimJoint1257);

HAnimJoint1104->addChild(HAnimJoint1116);

HAnimJoint1083->addChild(HAnimJoint1104);

HAnimJoint1068->addChild(HAnimJoint1083);

HAnimJoint1059->addChild(HAnimJoint1068);

HAnimJoint854->addChild(HAnimJoint1059);

HAnimJoint* HAnimJoint1335 = new HAnimJoint();
HAnimJoint1335->setName("r_sternoclavicular");
HAnimJoint1335->setDEF("hanim_r_sternoclavicular");
HAnimJoint1335->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimSegment* HAnimSegment1336 = new HAnimSegment();
HAnimSegment1336->setName("r_clavicle");
HAnimSegment1336->setDEF("hanim_r_clavicle");
Transform* Transform1337 = new Transform();
//Empty Transform
Transform* Transform1338 = new Transform();
//Empty Transform
Shape* Shape1339 = new Shape();
Shape1339->setUSE("HAnimJointShape");
Transform1338->addChild(Shape1339);

Transform1337->addChild(Transform1338);

HAnimSegment1336->addChild(Transform1337);

Shape* Shape1340 = new Shape();
LineSet* LineSet1341 = new LineSet();
LineSet1341->setVertexCount(new int[1]{2});
Coordinate* Coordinate1342 = new Coordinate();
Coordinate1342->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
LineSet1341->setCoord(Coordinate1342);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA* ColorRGBA1343 = new ColorRGBA();
ColorRGBA1343->setUSE("HAnimSegmentLineColorRGBA");
LineSet1341->setColor(ColorRGBA1343);

Shape1340->setGeometry(LineSet1341);

HAnimSegment1336->addChild(Shape1340);

HAnimJoint1335->addChild(HAnimSegment1336);

HAnimJoint* HAnimJoint1344 = new HAnimJoint();
HAnimJoint1344->setName("r_acromioclavicular");
HAnimJoint1344->setDEF("hanim_r_acromioclavicular");
HAnimJoint1344->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimSegment* HAnimSegment1345 = new HAnimSegment();
HAnimSegment1345->setName("r_scapula");
HAnimSegment1345->setDEF("hanim_r_scapula");
Transform* Transform1346 = new Transform();
//Empty Transform
Transform* Transform1347 = new Transform();
//Empty Transform
Shape* Shape1348 = new Shape();
Shape1348->setUSE("HAnimJointShape");
Transform1347->addChild(Shape1348);

Transform1346->addChild(Transform1347);

HAnimSegment1345->addChild(Transform1346);

Shape* Shape1349 = new Shape();
LineSet* LineSet1350 = new LineSet();
LineSet1350->setVertexCount(new int[1]{2});
Coordinate* Coordinate1351 = new Coordinate();
Coordinate1351->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
LineSet1350->setCoord(Coordinate1351);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA* ColorRGBA1352 = new ColorRGBA();
ColorRGBA1352->setUSE("HAnimSegmentLineColorRGBA");
LineSet1350->setColor(ColorRGBA1352);

Shape1349->setGeometry(LineSet1350);

HAnimSegment1345->addChild(Shape1349);

HAnimSite* HAnimSite1353 = new HAnimSite();
HAnimSite1353->setName("r_bideltoid_pt");
HAnimSite1353->setDEF("hanim_r_bideltoid_pt");
HAnimSite1353->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor1354 = new TouchSensor();
TouchSensor1354->setDescription("HAnimSite r_bideltoid_pt");
HAnimSite1353->addChild(TouchSensor1354);

Shape* Shape1355 = new Shape();
Shape1355->setUSE("HAnimSiteShape");
HAnimSite1353->addChild(Shape1355);

HAnimSegment1345->addChild(HAnimSite1353);

HAnimSite* HAnimSite1356 = new HAnimSite();
HAnimSite1356->setName("r_humeral_lateral_epicondyles_pt");
HAnimSite1356->setDEF("hanim_r_humeral_lateral_epicondyles_pt");
HAnimSite1356->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
TouchSensor* TouchSensor1357 = new TouchSensor();
TouchSensor1357->setDescription("HAnimSite r_humeral_lateral_epicondyles_pt");
HAnimSite1356->addChild(TouchSensor1357);

Shape* Shape1358 = new Shape();
Shape1358->setUSE("HAnimSiteShape");
HAnimSite1356->addChild(Shape1358);

HAnimSegment1345->addChild(HAnimSite1356);

HAnimJoint1344->addChild(HAnimSegment1345);

HAnimJoint* HAnimJoint1359 = new HAnimJoint();
HAnimJoint1359->setName("r_shoulder");
HAnimJoint1359->setDEF("hanim_r_shoulder");
HAnimJoint1359->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimSegment* HAnimSegment1360 = new HAnimSegment();
HAnimSegment1360->setName("r_upperarm");
HAnimSegment1360->setDEF("hanim_r_upperarm");
Transform* Transform1361 = new Transform();
//Empty Transform
Transform* Transform1362 = new Transform();
//Empty Transform
Shape* Shape1363 = new Shape();
Shape1363->setUSE("HAnimJointShape");
Transform1362->addChild(Shape1363);

Transform1361->addChild(Transform1362);

HAnimSegment1360->addChild(Transform1361);

Shape* Shape1364 = new Shape();
LineSet* LineSet1365 = new LineSet();
LineSet1365->setVertexCount(new int[1]{2});
Coordinate* Coordinate1366 = new Coordinate();
Coordinate1366->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
LineSet1365->setCoord(Coordinate1366);

//from r_shoulder to r_elbow vertices 2
ColorRGBA* ColorRGBA1367 = new ColorRGBA();
ColorRGBA1367->setUSE("HAnimSegmentLineColorRGBA");
LineSet1365->setColor(ColorRGBA1367);

Shape1364->setGeometry(LineSet1365);

HAnimSegment1360->addChild(Shape1364);

HAnimSite* HAnimSite1368 = new HAnimSite();
HAnimSite1368->setName("r_humeral_medial_epicondyles_pt");
HAnimSite1368->setDEF("hanim_r_humeral_medial_epicondyles_pt");
HAnimSite1368->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
TouchSensor* TouchSensor1369 = new TouchSensor();
TouchSensor1369->setDescription("HAnimSite r_humeral_medial_epicondyles_pt");
HAnimSite1368->addChild(TouchSensor1369);

Shape* Shape1370 = new Shape();
Shape1370->setUSE("HAnimSiteShape");
HAnimSite1368->addChild(Shape1370);

HAnimSegment1360->addChild(HAnimSite1368);

HAnimSite* HAnimSite1371 = new HAnimSite();
HAnimSite1371->setName("r_olecranon_pt");
HAnimSite1371->setDEF("hanim_r_olecranon_pt");
HAnimSite1371->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
TouchSensor* TouchSensor1372 = new TouchSensor();
TouchSensor1372->setDescription("HAnimSite r_olecranon_pt");
HAnimSite1371->addChild(TouchSensor1372);

Shape* Shape1373 = new Shape();
Shape1373->setUSE("HAnimSiteShape");
HAnimSite1371->addChild(Shape1373);

HAnimSegment1360->addChild(HAnimSite1371);

HAnimSite* HAnimSite1374 = new HAnimSite();
HAnimSite1374->setName("r_radial_styloid_pt");
HAnimSite1374->setDEF("hanim_r_radial_styloid_pt");
HAnimSite1374->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
TouchSensor* TouchSensor1375 = new TouchSensor();
TouchSensor1375->setDescription("HAnimSite r_radial_styloid_pt");
HAnimSite1374->addChild(TouchSensor1375);

Shape* Shape1376 = new Shape();
Shape1376->setUSE("HAnimSiteShape");
HAnimSite1374->addChild(Shape1376);

HAnimSegment1360->addChild(HAnimSite1374);

HAnimSite* HAnimSite1377 = new HAnimSite();
HAnimSite1377->setName("r_radiale_pt");
HAnimSite1377->setDEF("hanim_r_radiale_pt");
HAnimSite1377->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
TouchSensor* TouchSensor1378 = new TouchSensor();
TouchSensor1378->setDescription("HAnimSite r_radiale_pt");
HAnimSite1377->addChild(TouchSensor1378);

Shape* Shape1379 = new Shape();
Shape1379->setUSE("HAnimSiteShape");
HAnimSite1377->addChild(Shape1379);

HAnimSegment1360->addChild(HAnimSite1377);

HAnimJoint1359->addChild(HAnimSegment1360);

HAnimJoint* HAnimJoint1380 = new HAnimJoint();
HAnimJoint1380->setName("r_elbow");
HAnimJoint1380->setDEF("hanim_r_elbow");
HAnimJoint1380->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimSegment* HAnimSegment1381 = new HAnimSegment();
HAnimSegment1381->setName("r_forearm");
HAnimSegment1381->setDEF("hanim_r_forearm");
Transform* Transform1382 = new Transform();
//Empty Transform
Transform* Transform1383 = new Transform();
//Empty Transform
Shape* Shape1384 = new Shape();
Shape1384->setUSE("HAnimJointShape");
Transform1383->addChild(Shape1384);

Transform1382->addChild(Transform1383);

HAnimSegment1381->addChild(Transform1382);

Shape* Shape1385 = new Shape();
LineSet* LineSet1386 = new LineSet();
LineSet1386->setVertexCount(new int[1]{2});
Coordinate* Coordinate1387 = new Coordinate();
Coordinate1387->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
LineSet1386->setCoord(Coordinate1387);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA* ColorRGBA1388 = new ColorRGBA();
ColorRGBA1388->setUSE("HAnimSegmentLineColorRGBA");
LineSet1386->setColor(ColorRGBA1388);

Shape1385->setGeometry(LineSet1386);

HAnimSegment1381->addChild(Shape1385);

HAnimSite* HAnimSite1389 = new HAnimSite();
HAnimSite1389->setName("r_ulnar_styloid_pt");
HAnimSite1389->setDEF("hanim_r_ulnar_styloid_pt");
HAnimSite1389->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
TouchSensor* TouchSensor1390 = new TouchSensor();
TouchSensor1390->setDescription("HAnimSite r_ulnar_styloid_pt");
HAnimSite1389->addChild(TouchSensor1390);

Shape* Shape1391 = new Shape();
Shape1391->setUSE("HAnimSiteShape");
HAnimSite1389->addChild(Shape1391);

HAnimSegment1381->addChild(HAnimSite1389);

HAnimJoint1380->addChild(HAnimSegment1381);

HAnimJoint* HAnimJoint1392 = new HAnimJoint();
HAnimJoint1392->setName("r_radiocarpal");
HAnimJoint1392->setDEF("hanim_r_radiocarpal");
HAnimJoint1392->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimSegment* HAnimSegment1393 = new HAnimSegment();
HAnimSegment1393->setName("r_carpal");
HAnimSegment1393->setDEF("hanim_r_carpal");
Transform* Transform1394 = new Transform();
Transform1394->setScale(new float[3]{0.2,0.2,0.2});
Transform1394->setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform1394->setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
Transform* Transform1395 = new Transform();
Transform1395->setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
Shape* Shape1396 = new Shape();
Shape1396->setUSE("HAnimJointShape");
Transform1395->addChild(Shape1396);

Transform1394->addChild(Transform1395);

HAnimSegment1393->addChild(Transform1394);

Shape* Shape1397 = new Shape();
LineSet* LineSet1398 = new LineSet();
LineSet1398->setVertexCount(new int[1]{2});
Coordinate* Coordinate1399 = new Coordinate();
Coordinate1399->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1398->setCoord(Coordinate1399);

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA* ColorRGBA1400 = new ColorRGBA();
ColorRGBA1400->setUSE("HAnimSegmentLineColorRGBA");
LineSet1398->setColor(ColorRGBA1400);

Shape1397->setGeometry(LineSet1398);

HAnimSegment1393->addChild(Shape1397);

Shape* Shape1401 = new Shape();
LineSet* LineSet1402 = new LineSet();
LineSet1402->setVertexCount(new int[1]{2});
Coordinate* Coordinate1403 = new Coordinate();
Coordinate1403->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1402->setCoord(Coordinate1403);

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA* ColorRGBA1404 = new ColorRGBA();
ColorRGBA1404->setUSE("HAnimSegmentLineColorRGBA");
LineSet1402->setColor(ColorRGBA1404);

Shape1401->setGeometry(LineSet1402);

HAnimSegment1393->addChild(Shape1401);

Shape* Shape1405 = new Shape();
LineSet* LineSet1406 = new LineSet();
LineSet1406->setVertexCount(new int[1]{2});
Coordinate* Coordinate1407 = new Coordinate();
Coordinate1407->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1406->setCoord(Coordinate1407);

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA* ColorRGBA1408 = new ColorRGBA();
ColorRGBA1408->setUSE("HAnimSegmentLineColorRGBA");
LineSet1406->setColor(ColorRGBA1408);

Shape1405->setGeometry(LineSet1406);

HAnimSegment1393->addChild(Shape1405);

Shape* Shape1409 = new Shape();
LineSet* LineSet1410 = new LineSet();
LineSet1410->setVertexCount(new int[1]{2});
Coordinate* Coordinate1411 = new Coordinate();
Coordinate1411->setPoint(new float[6]{-0.1959,0.8694,-0.0521,0,1,0});
LineSet1410->setCoord(Coordinate1411);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA* ColorRGBA1412 = new ColorRGBA();
ColorRGBA1412->setUSE("HAnimSegmentLineColorRGBA");
LineSet1410->setColor(ColorRGBA1412);

Shape1409->setGeometry(LineSet1410);

HAnimSegment1393->addChild(Shape1409);

HAnimJoint1392->addChild(HAnimSegment1393);

HAnimJoint* HAnimJoint1413 = new HAnimJoint();
HAnimJoint1413->setName("r_midcarpal_1");
HAnimJoint1413->setDEF("hanim_r_midcarpal_1");
HAnimJoint1413->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment1414 = new HAnimSegment();
HAnimSegment1414->setName("r_trapezium");
HAnimSegment1414->setDEF("hanim_r_trapezium");
Transform* Transform1415 = new Transform();
//Empty Transform
Transform* Transform1416 = new Transform();
//Empty Transform
Shape* Shape1417 = new Shape();
Shape1417->setUSE("HAnimJointShape");
Transform1416->addChild(Shape1417);

Transform1415->addChild(Transform1416);

HAnimSegment1414->addChild(Transform1415);

Shape* Shape1418 = new Shape();
LineSet* LineSet1419 = new LineSet();
LineSet1419->setVertexCount(new int[1]{2});
Coordinate* Coordinate1420 = new Coordinate();
Coordinate1420->setPoint(new float[6]{0,1,0,-0.1899,0.8502,-0.0473});
LineSet1419->setCoord(Coordinate1420);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA* ColorRGBA1421 = new ColorRGBA();
ColorRGBA1421->setUSE("HAnimSegmentLineColorRGBA");
LineSet1419->setColor(ColorRGBA1421);

Shape1418->setGeometry(LineSet1419);

HAnimSegment1414->addChild(Shape1418);

HAnimJoint1413->addChild(HAnimSegment1414);

HAnimJoint* HAnimJoint1422 = new HAnimJoint();
HAnimJoint1422->setName("r_carpometacarpal_1");
HAnimJoint1422->setDEF("hanim_r_carpometacarpal_1");
HAnimJoint1422->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimSegment* HAnimSegment1423 = new HAnimSegment();
HAnimSegment1423->setName("r_metacarpal_1");
HAnimSegment1423->setDEF("hanim_r_metacarpal_1");
Transform* Transform1424 = new Transform();
//Empty Transform
Transform* Transform1425 = new Transform();
//Empty Transform
Shape* Shape1426 = new Shape();
Shape1426->setUSE("HAnimJointShape");
Transform1425->addChild(Shape1426);

Transform1424->addChild(Transform1425);

HAnimSegment1423->addChild(Transform1424);

Shape* Shape1427 = new Shape();
LineSet* LineSet1428 = new LineSet();
LineSet1428->setVertexCount(new int[1]{2});
Coordinate* Coordinate1429 = new Coordinate();
Coordinate1429->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
LineSet1428->setCoord(Coordinate1429);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA* ColorRGBA1430 = new ColorRGBA();
ColorRGBA1430->setUSE("HAnimSegmentLineColorRGBA");
LineSet1428->setColor(ColorRGBA1430);

Shape1427->setGeometry(LineSet1428);

HAnimSegment1423->addChild(Shape1427);

HAnimJoint1422->addChild(HAnimSegment1423);

HAnimJoint* HAnimJoint1431 = new HAnimJoint();
HAnimJoint1431->setName("r_metacarpophalangeal_1");
HAnimJoint1431->setDEF("hanim_r_metacarpophalangeal_1");
HAnimJoint1431->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimSegment* HAnimSegment1432 = new HAnimSegment();
HAnimSegment1432->setName("r_carpal_proximal_phalanx_1");
HAnimSegment1432->setDEF("hanim_r_carpal_proximal_phalanx_1");
Transform* Transform1433 = new Transform();
//Empty Transform
Transform* Transform1434 = new Transform();
//Empty Transform
Shape* Shape1435 = new Shape();
Shape1435->setUSE("HAnimJointShape");
Transform1434->addChild(Shape1435);

Transform1433->addChild(Transform1434);

HAnimSegment1432->addChild(Transform1433);

Shape* Shape1436 = new Shape();
LineSet* LineSet1437 = new LineSet();
LineSet1437->setVertexCount(new int[1]{2});
Coordinate* Coordinate1438 = new Coordinate();
Coordinate1438->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
LineSet1437->setCoord(Coordinate1438);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA* ColorRGBA1439 = new ColorRGBA();
ColorRGBA1439->setUSE("HAnimSegmentLineColorRGBA");
LineSet1437->setColor(ColorRGBA1439);

Shape1436->setGeometry(LineSet1437);

HAnimSegment1432->addChild(Shape1436);

HAnimSite* HAnimSite1440 = new HAnimSite();
HAnimSite1440->setName("r_carpal_distal_phalanx_1_tip");
HAnimSite1440->setDEF("hanim_r_carpal_distal_phalanx_1_tip");
HAnimSite1440->setTranslation(new float[3]{-0.35,0.4,0});
TouchSensor* TouchSensor1441 = new TouchSensor();
TouchSensor1441->setDescription("HAnimSite r_carpal_distal_phalanx_1_tip");
HAnimSite1440->addChild(TouchSensor1441);

Shape* Shape1442 = new Shape();
Shape1442->setUSE("HAnimSiteShape");
HAnimSite1440->addChild(Shape1442);

HAnimSegment1432->addChild(HAnimSite1440);

HAnimJoint1431->addChild(HAnimSegment1432);

HAnimJoint* HAnimJoint1443 = new HAnimJoint();
HAnimJoint1443->setName("r_carpal_interphalangeal_1");
HAnimJoint1443->setDEF("hanim_r_carpal_interphalangeal_1");
HAnimJoint1443->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1431->addChild(HAnimJoint1443);

HAnimJoint1422->addChild(HAnimJoint1431);

HAnimJoint1413->addChild(HAnimJoint1422);

HAnimJoint1392->addChild(HAnimJoint1413);

HAnimJoint* HAnimJoint1444 = new HAnimJoint();
HAnimJoint1444->setName("r_midcarpal_2");
HAnimJoint1444->setDEF("hanim_r_midcarpal_2");
HAnimJoint1444->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment1445 = new HAnimSegment();
HAnimSegment1445->setName("r_trapezoid");
HAnimSegment1445->setDEF("hanim_r_trapezoid");
Transform* Transform1446 = new Transform();
//Empty Transform
Transform* Transform1447 = new Transform();
//Empty Transform
Shape* Shape1448 = new Shape();
Shape1448->setUSE("HAnimJointShape");
Transform1447->addChild(Shape1448);

Transform1446->addChild(Transform1447);

HAnimSegment1445->addChild(Transform1446);

Shape* Shape1449 = new Shape();
LineSet* LineSet1450 = new LineSet();
LineSet1450->setVertexCount(new int[1]{2});
Coordinate* Coordinate1451 = new Coordinate();
Coordinate1451->setPoint(new float[6]{0,1,0,-0.1961,0.8055,-0.0218});
LineSet1450->setCoord(Coordinate1451);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA* ColorRGBA1452 = new ColorRGBA();
ColorRGBA1452->setUSE("HAnimSegmentLineColorRGBA");
LineSet1450->setColor(ColorRGBA1452);

Shape1449->setGeometry(LineSet1450);

HAnimSegment1445->addChild(Shape1449);

HAnimSite* HAnimSite1453 = new HAnimSite();
HAnimSite1453->setName("r_metacarpal_phalanx_2_pt");
HAnimSite1453->setDEF("hanim_r_metacarpal_phalanx_2_pt");
HAnimSite1453->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
TouchSensor* TouchSensor1454 = new TouchSensor();
TouchSensor1454->setDescription("HAnimSite r_metacarpal_phalanx_2_pt");
HAnimSite1453->addChild(TouchSensor1454);

Shape* Shape1455 = new Shape();
Shape1455->setUSE("HAnimSiteShape");
HAnimSite1453->addChild(Shape1455);

HAnimSegment1445->addChild(HAnimSite1453);

HAnimJoint1444->addChild(HAnimSegment1445);

HAnimJoint* HAnimJoint1456 = new HAnimJoint();
HAnimJoint1456->setName("r_carpometacarpal_2");
HAnimJoint1456->setDEF("hanim_r_carpometacarpal_2");
HAnimJoint1456->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimSegment* HAnimSegment1457 = new HAnimSegment();
HAnimSegment1457->setName("r_metacarpal_2");
HAnimSegment1457->setDEF("hanim_r_metacarpal_2");
Transform* Transform1458 = new Transform();
//Empty Transform
Transform* Transform1459 = new Transform();
//Empty Transform
Shape* Shape1460 = new Shape();
Shape1460->setUSE("HAnimJointShape");
Transform1459->addChild(Shape1460);

Transform1458->addChild(Transform1459);

HAnimSegment1457->addChild(Transform1458);

Shape* Shape1461 = new Shape();
LineSet* LineSet1462 = new LineSet();
LineSet1462->setVertexCount(new int[1]{2});
Coordinate* Coordinate1463 = new Coordinate();
Coordinate1463->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
LineSet1462->setCoord(Coordinate1463);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA* ColorRGBA1464 = new ColorRGBA();
ColorRGBA1464->setUSE("HAnimSegmentLineColorRGBA");
LineSet1462->setColor(ColorRGBA1464);

Shape1461->setGeometry(LineSet1462);

HAnimSegment1457->addChild(Shape1461);

HAnimJoint1456->addChild(HAnimSegment1457);

HAnimJoint* HAnimJoint1465 = new HAnimJoint();
HAnimJoint1465->setName("r_metacarpophalangeal_2");
HAnimJoint1465->setDEF("hanim_r_metacarpophalangeal_2");
HAnimJoint1465->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimSegment* HAnimSegment1466 = new HAnimSegment();
HAnimSegment1466->setName("r_carpal_proximal_phalanx_2");
HAnimSegment1466->setDEF("hanim_r_carpal_proximal_phalanx_2");
Transform* Transform1467 = new Transform();
//Empty Transform
Transform* Transform1468 = new Transform();
//Empty Transform
Shape* Shape1469 = new Shape();
Shape1469->setUSE("HAnimJointShape");
Transform1468->addChild(Shape1469);

Transform1467->addChild(Transform1468);

HAnimSegment1466->addChild(Transform1467);

Shape* Shape1470 = new Shape();
LineSet* LineSet1471 = new LineSet();
LineSet1471->setVertexCount(new int[1]{2});
Coordinate* Coordinate1472 = new Coordinate();
Coordinate1472->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185});
LineSet1471->setCoord(Coordinate1472);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA1473 = new ColorRGBA();
ColorRGBA1473->setUSE("HAnimSegmentLineColorRGBA");
LineSet1471->setColor(ColorRGBA1473);

Shape1470->setGeometry(LineSet1471);

HAnimSegment1466->addChild(Shape1470);

HAnimJoint1465->addChild(HAnimSegment1466);

HAnimJoint* HAnimJoint1474 = new HAnimJoint();
HAnimJoint1474->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint1474->setDEF("hanim_r_carpal_proximal_interphalangeal_2");
HAnimJoint1474->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimSegment* HAnimSegment1475 = new HAnimSegment();
HAnimSegment1475->setName("r_carpal_middle_phalanx_2");
HAnimSegment1475->setDEF("hanim_r_carpal_middle_phalanx_2");
Transform* Transform1476 = new Transform();
//Empty Transform
Transform* Transform1477 = new Transform();
//Empty Transform
Shape* Shape1478 = new Shape();
Shape1478->setUSE("HAnimJointShape");
Transform1477->addChild(Shape1478);

Transform1476->addChild(Transform1477);

HAnimSegment1475->addChild(Transform1476);

Shape* Shape1479 = new Shape();
LineSet* LineSet1480 = new LineSet();
LineSet1480->setVertexCount(new int[1]{2});
Coordinate* Coordinate1481 = new Coordinate();
Coordinate1481->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
LineSet1480->setCoord(Coordinate1481);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA* ColorRGBA1482 = new ColorRGBA();
ColorRGBA1482->setUSE("HAnimSegmentLineColorRGBA");
LineSet1480->setColor(ColorRGBA1482);

Shape1479->setGeometry(LineSet1480);

HAnimSegment1475->addChild(Shape1479);

HAnimSite* HAnimSite1483 = new HAnimSite();
HAnimSite1483->setName("r_carpal_distal_phalanx_2_tip");
HAnimSite1483->setDEF("hanim_r_carpal_distal_phalanx_2_tip");
HAnimSite1483->setTranslation(new float[3]{-0.24,0.87,0});
TouchSensor* TouchSensor1484 = new TouchSensor();
TouchSensor1484->setDescription("HAnimSite r_carpal_distal_phalanx_2_tip");
HAnimSite1483->addChild(TouchSensor1484);

Shape* Shape1485 = new Shape();
Shape1485->setUSE("HAnimSiteShape");
HAnimSite1483->addChild(Shape1485);

HAnimSegment1475->addChild(HAnimSite1483);

HAnimSite* HAnimSite1486 = new HAnimSite();
HAnimSite1486->setName("r_dactylion_pt");
HAnimSite1486->setDEF("hanim_r_dactylion_pt");
HAnimSite1486->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
TouchSensor* TouchSensor1487 = new TouchSensor();
TouchSensor1487->setDescription("HAnimSite r_dactylion_pt");
HAnimSite1486->addChild(TouchSensor1487);

Shape* Shape1488 = new Shape();
Shape1488->setUSE("HAnimSiteShape");
HAnimSite1486->addChild(Shape1488);

HAnimSegment1475->addChild(HAnimSite1486);

HAnimJoint1474->addChild(HAnimSegment1475);

HAnimJoint* HAnimJoint1489 = new HAnimJoint();
HAnimJoint1489->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint1489->setDEF("hanim_r_carpal_distal_interphalangeal_2");
HAnimJoint1489->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1474->addChild(HAnimJoint1489);

HAnimJoint1465->addChild(HAnimJoint1474);

HAnimJoint1456->addChild(HAnimJoint1465);

HAnimJoint1444->addChild(HAnimJoint1456);

HAnimJoint1392->addChild(HAnimJoint1444);

HAnimJoint* HAnimJoint1490 = new HAnimJoint();
HAnimJoint1490->setName("r_midcarpal_3");
HAnimJoint1490->setDEF("hanim_r_midcarpal_3");
HAnimJoint1490->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment1491 = new HAnimSegment();
HAnimSegment1491->setName("r_capitate");
HAnimSegment1491->setDEF("hanim_r_capitate");
Transform* Transform1492 = new Transform();
//Empty Transform
Transform* Transform1493 = new Transform();
//Empty Transform
Shape* Shape1494 = new Shape();
Shape1494->setUSE("HAnimJointShape");
Transform1493->addChild(Shape1494);

Transform1492->addChild(Transform1493);

HAnimSegment1491->addChild(Transform1492);

Shape* Shape1495 = new Shape();
LineSet* LineSet1496 = new LineSet();
LineSet1496->setVertexCount(new int[1]{2});
Coordinate* Coordinate1497 = new Coordinate();
Coordinate1497->setPoint(new float[6]{0,1,0,-0.1972,0.806,-0.0468});
LineSet1496->setCoord(Coordinate1497);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA* ColorRGBA1498 = new ColorRGBA();
ColorRGBA1498->setUSE("HAnimSegmentLineColorRGBA");
LineSet1496->setColor(ColorRGBA1498);

Shape1495->setGeometry(LineSet1496);

HAnimSegment1491->addChild(Shape1495);

HAnimSite* HAnimSite1499 = new HAnimSite();
HAnimSite1499->setName("r_metacarpal_phalanx_3_pt");
HAnimSite1499->setDEF("hanim_r_metacarpal_phalanx_3_pt");
HAnimSite1499->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor1500 = new TouchSensor();
TouchSensor1500->setDescription("HAnimSite r_metacarpal_phalanx_3_pt");
HAnimSite1499->addChild(TouchSensor1500);

Shape* Shape1501 = new Shape();
Shape1501->setUSE("HAnimSiteShape");
HAnimSite1499->addChild(Shape1501);

HAnimSegment1491->addChild(HAnimSite1499);

HAnimJoint1490->addChild(HAnimSegment1491);

HAnimJoint* HAnimJoint1502 = new HAnimJoint();
HAnimJoint1502->setName("r_carpometacarpal_3");
HAnimJoint1502->setDEF("hanim_r_carpometacarpal_3");
HAnimJoint1502->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimSegment* HAnimSegment1503 = new HAnimSegment();
HAnimSegment1503->setName("r_metacarpal_3");
HAnimSegment1503->setDEF("hanim_r_metacarpal_3");
Transform* Transform1504 = new Transform();
//Empty Transform
Transform* Transform1505 = new Transform();
//Empty Transform
Shape* Shape1506 = new Shape();
Shape1506->setUSE("HAnimJointShape");
Transform1505->addChild(Shape1506);

Transform1504->addChild(Transform1505);

HAnimSegment1503->addChild(Transform1504);

Shape* Shape1507 = new Shape();
LineSet* LineSet1508 = new LineSet();
LineSet1508->setVertexCount(new int[1]{2});
Coordinate* Coordinate1509 = new Coordinate();
Coordinate1509->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
LineSet1508->setCoord(Coordinate1509);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA* ColorRGBA1510 = new ColorRGBA();
ColorRGBA1510->setUSE("HAnimSegmentLineColorRGBA");
LineSet1508->setColor(ColorRGBA1510);

Shape1507->setGeometry(LineSet1508);

HAnimSegment1503->addChild(Shape1507);

HAnimJoint1502->addChild(HAnimSegment1503);

HAnimJoint* HAnimJoint1511 = new HAnimJoint();
HAnimJoint1511->setName("r_metacarpophalangeal_3");
HAnimJoint1511->setDEF("hanim_r_metacarpophalangeal_3");
HAnimJoint1511->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimSegment* HAnimSegment1512 = new HAnimSegment();
HAnimSegment1512->setName("r_carpal_proximal_phalanx_3");
HAnimSegment1512->setDEF("hanim_r_carpal_proximal_phalanx_3");
Transform* Transform1513 = new Transform();
//Empty Transform
Transform* Transform1514 = new Transform();
//Empty Transform
Shape* Shape1515 = new Shape();
Shape1515->setUSE("HAnimJointShape");
Transform1514->addChild(Shape1515);

Transform1513->addChild(Transform1514);

HAnimSegment1512->addChild(Transform1513);

Shape* Shape1516 = new Shape();
LineSet* LineSet1517 = new LineSet();
LineSet1517->setVertexCount(new int[1]{2});
Coordinate* Coordinate1518 = new Coordinate();
Coordinate1518->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
LineSet1517->setCoord(Coordinate1518);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA1519 = new ColorRGBA();
ColorRGBA1519->setUSE("HAnimSegmentLineColorRGBA");
LineSet1517->setColor(ColorRGBA1519);

Shape1516->setGeometry(LineSet1517);

HAnimSegment1512->addChild(Shape1516);

HAnimJoint1511->addChild(HAnimSegment1512);

HAnimJoint* HAnimJoint1520 = new HAnimJoint();
HAnimJoint1520->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint1520->setDEF("hanim_r_carpal_proximal_interphalangeal_3");
HAnimJoint1520->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimSegment* HAnimSegment1521 = new HAnimSegment();
HAnimSegment1521->setName("r_carpal_middle_phalanx_3");
HAnimSegment1521->setDEF("hanim_r_carpal_middle_phalanx_3");
Transform* Transform1522 = new Transform();
//Empty Transform
Transform* Transform1523 = new Transform();
//Empty Transform
Shape* Shape1524 = new Shape();
Shape1524->setUSE("HAnimJointShape");
Transform1523->addChild(Shape1524);

Transform1522->addChild(Transform1523);

HAnimSegment1521->addChild(Transform1522);

Shape* Shape1525 = new Shape();
LineSet* LineSet1526 = new LineSet();
LineSet1526->setVertexCount(new int[1]{2});
Coordinate* Coordinate1527 = new Coordinate();
Coordinate1527->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
LineSet1526->setCoord(Coordinate1527);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA* ColorRGBA1528 = new ColorRGBA();
ColorRGBA1528->setUSE("HAnimSegmentLineColorRGBA");
LineSet1526->setColor(ColorRGBA1528);

Shape1525->setGeometry(LineSet1526);

HAnimSegment1521->addChild(Shape1525);

HAnimSite* HAnimSite1529 = new HAnimSite();
HAnimSite1529->setName("r_carpal_distal_phalanx_3_tip");
HAnimSite1529->setDEF("hanim_r_carpal_distal_phalanx_3_tip");
HAnimSite1529->setTranslation(new float[3]{-0.08,0.96,0});
TouchSensor* TouchSensor1530 = new TouchSensor();
TouchSensor1530->setDescription("HAnimSite r_carpal_distal_phalanx_3_tip");
HAnimSite1529->addChild(TouchSensor1530);

Shape* Shape1531 = new Shape();
Shape1531->setUSE("HAnimSiteShape");
HAnimSite1529->addChild(Shape1531);

HAnimSegment1521->addChild(HAnimSite1529);

HAnimJoint1520->addChild(HAnimSegment1521);

HAnimJoint* HAnimJoint1532 = new HAnimJoint();
HAnimJoint1532->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint1532->setDEF("hanim_r_carpal_distal_interphalangeal_3");
HAnimJoint1532->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1520->addChild(HAnimJoint1532);

HAnimJoint1511->addChild(HAnimJoint1520);

HAnimJoint1502->addChild(HAnimJoint1511);

HAnimJoint1490->addChild(HAnimJoint1502);

HAnimJoint1392->addChild(HAnimJoint1490);

HAnimJoint* HAnimJoint1533 = new HAnimJoint();
HAnimJoint1533->setName("r_midcarpal_4_5");
HAnimJoint1533->setDEF("hanim_r_midcarpal_4_5");
HAnimJoint1533->setCenter(new float[3]{0,1,0});
HAnimSegment* HAnimSegment1534 = new HAnimSegment();
HAnimSegment1534->setName("r_hamate");
HAnimSegment1534->setDEF("hanim_r_hamate");
Transform* Transform1535 = new Transform();
//Empty Transform
Transform* Transform1536 = new Transform();
//Empty Transform
Shape* Shape1537 = new Shape();
Shape1537->setUSE("HAnimJointShape");
Transform1536->addChild(Shape1537);

Transform1535->addChild(Transform1536);

HAnimSegment1534->addChild(Transform1535);

Shape* Shape1538 = new Shape();
LineSet* LineSet1539 = new LineSet();
LineSet1539->setVertexCount(new int[1]{2});
Coordinate* Coordinate1540 = new Coordinate();
Coordinate1540->setPoint(new float[6]{0,1,0,-0.1951,0.8049,-0.0732});
LineSet1539->setCoord(Coordinate1540);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA* ColorRGBA1541 = new ColorRGBA();
ColorRGBA1541->setUSE("HAnimSegmentLineColorRGBA");
LineSet1539->setColor(ColorRGBA1541);

Shape1538->setGeometry(LineSet1539);

HAnimSegment1534->addChild(Shape1538);

Shape* Shape1542 = new Shape();
LineSet* LineSet1543 = new LineSet();
LineSet1543->setVertexCount(new int[1]{2});
Coordinate* Coordinate1544 = new Coordinate();
Coordinate1544->setPoint(new float[6]{0,1,0,-0.1926,0.8096,-0.0975});
LineSet1543->setCoord(Coordinate1544);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA* ColorRGBA1545 = new ColorRGBA();
ColorRGBA1545->setUSE("HAnimSegmentLineColorRGBA");
LineSet1543->setColor(ColorRGBA1545);

Shape1542->setGeometry(LineSet1543);

HAnimSegment1534->addChild(Shape1542);

HAnimSite* HAnimSite1546 = new HAnimSite();
HAnimSite1546->setName("r_metacarpal_phalanx_5_pt");
HAnimSite1546->setDEF("hanim_r_metacarpal_phalanx_5_pt");
HAnimSite1546->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
TouchSensor* TouchSensor1547 = new TouchSensor();
TouchSensor1547->setDescription("HAnimSite r_metacarpal_phalanx_5_pt");
HAnimSite1546->addChild(TouchSensor1547);

Shape* Shape1548 = new Shape();
Shape1548->setUSE("HAnimSiteShape");
HAnimSite1546->addChild(Shape1548);

HAnimSegment1534->addChild(HAnimSite1546);

HAnimJoint1533->addChild(HAnimSegment1534);

HAnimJoint* HAnimJoint1549 = new HAnimJoint();
HAnimJoint1549->setName("r_carpometacarpal_4");
HAnimJoint1549->setDEF("hanim_r_carpometacarpal_4");
HAnimJoint1549->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimSegment* HAnimSegment1550 = new HAnimSegment();
HAnimSegment1550->setName("r_metacarpal_4");
HAnimSegment1550->setDEF("hanim_r_metacarpal_4");
Transform* Transform1551 = new Transform();
//Empty Transform
Transform* Transform1552 = new Transform();
//Empty Transform
Shape* Shape1553 = new Shape();
Shape1553->setUSE("HAnimJointShape");
Transform1552->addChild(Shape1553);

Transform1551->addChild(Transform1552);

HAnimSegment1550->addChild(Transform1551);

Shape* Shape1554 = new Shape();
LineSet* LineSet1555 = new LineSet();
LineSet1555->setVertexCount(new int[1]{2});
Coordinate* Coordinate1556 = new Coordinate();
Coordinate1556->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
LineSet1555->setCoord(Coordinate1556);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA* ColorRGBA1557 = new ColorRGBA();
ColorRGBA1557->setUSE("HAnimSegmentLineColorRGBA");
LineSet1555->setColor(ColorRGBA1557);

Shape1554->setGeometry(LineSet1555);

HAnimSegment1550->addChild(Shape1554);

HAnimJoint1549->addChild(HAnimSegment1550);

HAnimJoint* HAnimJoint1558 = new HAnimJoint();
HAnimJoint1558->setName("r_metacarpophalangeal_4");
HAnimJoint1558->setDEF("hanim_r_metacarpophalangeal_4");
HAnimJoint1558->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimSegment* HAnimSegment1559 = new HAnimSegment();
HAnimSegment1559->setName("r_carpal_proximal_phalanx_4");
HAnimSegment1559->setDEF("hanim_r_carpal_proximal_phalanx_4");
Transform* Transform1560 = new Transform();
//Empty Transform
Transform* Transform1561 = new Transform();
//Empty Transform
Shape* Shape1562 = new Shape();
Shape1562->setUSE("HAnimJointShape");
Transform1561->addChild(Shape1562);

Transform1560->addChild(Transform1561);

HAnimSegment1559->addChild(Transform1560);

Shape* Shape1563 = new Shape();
LineSet* LineSet1564 = new LineSet();
LineSet1564->setVertexCount(new int[1]{2});
Coordinate* Coordinate1565 = new Coordinate();
Coordinate1565->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
LineSet1564->setCoord(Coordinate1565);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA1566 = new ColorRGBA();
ColorRGBA1566->setUSE("HAnimSegmentLineColorRGBA");
LineSet1564->setColor(ColorRGBA1566);

Shape1563->setGeometry(LineSet1564);

HAnimSegment1559->addChild(Shape1563);

HAnimJoint1558->addChild(HAnimSegment1559);

HAnimJoint* HAnimJoint1567 = new HAnimJoint();
HAnimJoint1567->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint1567->setDEF("hanim_r_carpal_proximal_interphalangeal_4");
HAnimJoint1567->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimSegment* HAnimSegment1568 = new HAnimSegment();
HAnimSegment1568->setName("r_carpal_middle_phalanx_4");
HAnimSegment1568->setDEF("hanim_r_carpal_middle_phalanx_4");
Transform* Transform1569 = new Transform();
//Empty Transform
Transform* Transform1570 = new Transform();
//Empty Transform
Shape* Shape1571 = new Shape();
Shape1571->setUSE("HAnimJointShape");
Transform1570->addChild(Shape1571);

Transform1569->addChild(Transform1570);

HAnimSegment1568->addChild(Transform1569);

Shape* Shape1572 = new Shape();
LineSet* LineSet1573 = new LineSet();
LineSet1573->setVertexCount(new int[1]{2});
Coordinate* Coordinate1574 = new Coordinate();
Coordinate1574->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706});
LineSet1573->setCoord(Coordinate1574);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA* ColorRGBA1575 = new ColorRGBA();
ColorRGBA1575->setUSE("HAnimSegmentLineColorRGBA");
LineSet1573->setColor(ColorRGBA1575);

Shape1572->setGeometry(LineSet1573);

HAnimSegment1568->addChild(Shape1572);

HAnimSite* HAnimSite1576 = new HAnimSite();
HAnimSite1576->setName("r_carpal_distal_phalanx_4_tip");
HAnimSite1576->setDEF("hanim_r_carpal_distal_phalanx_4_tip");
HAnimSite1576->setTranslation(new float[3]{0.1,0.93,0});
TouchSensor* TouchSensor1577 = new TouchSensor();
TouchSensor1577->setDescription("HAnimSite r_carpal_distal_phalanx_4_tip");
HAnimSite1576->addChild(TouchSensor1577);

Shape* Shape1578 = new Shape();
Shape1578->setUSE("HAnimSiteShape");
HAnimSite1576->addChild(Shape1578);

HAnimSegment1568->addChild(HAnimSite1576);

HAnimJoint1567->addChild(HAnimSegment1568);

HAnimJoint* HAnimJoint1579 = new HAnimJoint();
HAnimJoint1579->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint1579->setDEF("hanim_r_carpal_distal_interphalangeal_4");
HAnimJoint1579->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1567->addChild(HAnimJoint1579);

HAnimJoint1558->addChild(HAnimJoint1567);

HAnimJoint1549->addChild(HAnimJoint1558);

HAnimJoint1533->addChild(HAnimJoint1549);

HAnimJoint* HAnimJoint1580 = new HAnimJoint();
HAnimJoint1580->setName("r_carpometacarpal_5");
HAnimJoint1580->setDEF("hanim_r_carpometacarpal_5");
HAnimJoint1580->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimSegment* HAnimSegment1581 = new HAnimSegment();
HAnimSegment1581->setName("r_metacarpal_5");
HAnimSegment1581->setDEF("hanim_r_metacarpal_5");
Transform* Transform1582 = new Transform();
//Empty Transform
Transform* Transform1583 = new Transform();
//Empty Transform
Shape* Shape1584 = new Shape();
Shape1584->setUSE("HAnimJointShape");
Transform1583->addChild(Shape1584);

Transform1582->addChild(Transform1583);

HAnimSegment1581->addChild(Transform1582);

Shape* Shape1585 = new Shape();
LineSet* LineSet1586 = new LineSet();
LineSet1586->setVertexCount(new int[1]{2});
Coordinate* Coordinate1587 = new Coordinate();
Coordinate1587->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
LineSet1586->setCoord(Coordinate1587);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA* ColorRGBA1588 = new ColorRGBA();
ColorRGBA1588->setUSE("HAnimSegmentLineColorRGBA");
LineSet1586->setColor(ColorRGBA1588);

Shape1585->setGeometry(LineSet1586);

HAnimSegment1581->addChild(Shape1585);

HAnimJoint1580->addChild(HAnimSegment1581);

HAnimJoint* HAnimJoint1589 = new HAnimJoint();
HAnimJoint1589->setName("r_metacarpophalangeal_5");
HAnimJoint1589->setDEF("hanim_r_metacarpophalangeal_5");
HAnimJoint1589->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimSegment* HAnimSegment1590 = new HAnimSegment();
HAnimSegment1590->setName("r_carpal_proximal_phalanx_5");
HAnimSegment1590->setDEF("hanim_r_carpal_proximal_phalanx_5");
Transform* Transform1591 = new Transform();
//Empty Transform
Transform* Transform1592 = new Transform();
//Empty Transform
Shape* Shape1593 = new Shape();
Shape1593->setUSE("HAnimJointShape");
Transform1592->addChild(Shape1593);

Transform1591->addChild(Transform1592);

HAnimSegment1590->addChild(Transform1591);

Shape* Shape1594 = new Shape();
LineSet* LineSet1595 = new LineSet();
LineSet1595->setVertexCount(new int[1]{2});
Coordinate* Coordinate1596 = new Coordinate();
Coordinate1596->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
LineSet1595->setCoord(Coordinate1596);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1597 = new ColorRGBA();
ColorRGBA1597->setUSE("HAnimSegmentLineColorRGBA");
LineSet1595->setColor(ColorRGBA1597);

Shape1594->setGeometry(LineSet1595);

HAnimSegment1590->addChild(Shape1594);

HAnimJoint1589->addChild(HAnimSegment1590);

HAnimJoint* HAnimJoint1598 = new HAnimJoint();
HAnimJoint1598->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint1598->setDEF("hanim_r_carpal_proximal_interphalangeal_5");
HAnimJoint1598->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimSegment* HAnimSegment1599 = new HAnimSegment();
HAnimSegment1599->setName("r_carpal_middle_phalanx_5");
HAnimSegment1599->setDEF("hanim_r_carpal_middle_phalanx_5");
Transform* Transform1600 = new Transform();
//Empty Transform
Transform* Transform1601 = new Transform();
//Empty Transform
Shape* Shape1602 = new Shape();
Shape1602->setUSE("HAnimJointShape");
Transform1601->addChild(Shape1602);

Transform1600->addChild(Transform1601);

HAnimSegment1599->addChild(Transform1600);

Shape* Shape1603 = new Shape();
LineSet* LineSet1604 = new LineSet();
LineSet1604->setVertexCount(new int[1]{2});
Coordinate* Coordinate1605 = new Coordinate();
Coordinate1605->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
LineSet1604->setCoord(Coordinate1605);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA* ColorRGBA1606 = new ColorRGBA();
ColorRGBA1606->setUSE("HAnimSegmentLineColorRGBA");
LineSet1604->setColor(ColorRGBA1606);

Shape1603->setGeometry(LineSet1604);

HAnimSegment1599->addChild(Shape1603);

HAnimSite* HAnimSite1607 = new HAnimSite();
HAnimSite1607->setName("r_carpal_distal_phalanx_5_tip");
HAnimSite1607->setDEF("hanim_r_carpal_distal_phalanx_5_tip");
HAnimSite1607->setTranslation(new float[3]{0.25,0.79,0});
TouchSensor* TouchSensor1608 = new TouchSensor();
TouchSensor1608->setDescription("HAnimSite r_carpal_distal_phalanx_5_tip");
HAnimSite1607->addChild(TouchSensor1608);

Shape* Shape1609 = new Shape();
Shape1609->setUSE("HAnimSiteShape");
HAnimSite1607->addChild(Shape1609);

HAnimSegment1599->addChild(HAnimSite1607);

HAnimJoint1598->addChild(HAnimSegment1599);

HAnimJoint* HAnimJoint1610 = new HAnimJoint();
HAnimJoint1610->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint1610->setDEF("hanim_r_carpal_distal_interphalangeal_5");
HAnimJoint1610->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1598->addChild(HAnimJoint1610);

HAnimJoint1589->addChild(HAnimJoint1598);

HAnimJoint1580->addChild(HAnimJoint1589);

HAnimJoint1533->addChild(HAnimJoint1580);

HAnimJoint1392->addChild(HAnimJoint1533);

HAnimJoint1380->addChild(HAnimJoint1392);

HAnimJoint1359->addChild(HAnimJoint1380);

HAnimJoint1344->addChild(HAnimJoint1359);

HAnimJoint1335->addChild(HAnimJoint1344);

HAnimJoint854->addChild(HAnimJoint1335);

HAnimJoint839->addChild(HAnimJoint854);

HAnimJoint830->addChild(HAnimJoint839);

HAnimJoint821->addChild(HAnimJoint830);

HAnimJoint812->addChild(HAnimJoint821);

HAnimJoint800->addChild(HAnimJoint812);

HAnimJoint779->addChild(HAnimJoint800);

HAnimJoint770->addChild(HAnimJoint779);

HAnimJoint761->addChild(HAnimJoint770);

HAnimJoint746->addChild(HAnimJoint761);

HAnimJoint734->addChild(HAnimJoint746);

HAnimJoint725->addChild(HAnimJoint734);

HAnimJoint716->addChild(HAnimJoint725);

HAnimJoint707->addChild(HAnimJoint716);

HAnimJoint689->addChild(HAnimJoint707);

HAnimJoint680->addChild(HAnimJoint689);

HAnimJoint671->addChild(HAnimJoint680);

HAnimJoint52->addChild(HAnimJoint671);

HAnimHumanoid43->setSkeleton(HAnimJoint52);

HAnimJoint* HAnimJoint1611 = new HAnimJoint();
HAnimJoint1611->setUSE("hanim_humanoid_root");
HAnimHumanoid43->addJoints(HAnimJoint1611);

HAnimJoint* HAnimJoint1612 = new HAnimJoint();
HAnimJoint1612->setUSE("hanim_sacroiliac");
HAnimHumanoid43->addJoints(HAnimJoint1612);

HAnimJoint* HAnimJoint1613 = new HAnimJoint();
HAnimJoint1613->setUSE("hanim_l_hip");
HAnimHumanoid43->addJoints(HAnimJoint1613);

HAnimJoint* HAnimJoint1614 = new HAnimJoint();
HAnimJoint1614->setUSE("hanim_l_knee");
HAnimHumanoid43->addJoints(HAnimJoint1614);

HAnimJoint* HAnimJoint1615 = new HAnimJoint();
HAnimJoint1615->setUSE("hanim_l_talocrural");
HAnimHumanoid43->addJoints(HAnimJoint1615);

HAnimJoint* HAnimJoint1616 = new HAnimJoint();
HAnimJoint1616->setUSE("hanim_l_talocalcaneonavicular");
HAnimHumanoid43->addJoints(HAnimJoint1616);

HAnimJoint* HAnimJoint1617 = new HAnimJoint();
HAnimJoint1617->setUSE("hanim_l_cuneonavicular_1");
HAnimHumanoid43->addJoints(HAnimJoint1617);

HAnimJoint* HAnimJoint1618 = new HAnimJoint();
HAnimJoint1618->setUSE("hanim_l_tarsometatarsal_1");
HAnimHumanoid43->addJoints(HAnimJoint1618);

HAnimJoint* HAnimJoint1619 = new HAnimJoint();
HAnimJoint1619->setUSE("hanim_l_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(HAnimJoint1619);

HAnimJoint* HAnimJoint1620 = new HAnimJoint();
HAnimJoint1620->setUSE("hanim_l_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(HAnimJoint1620);

HAnimJoint* HAnimJoint1621 = new HAnimJoint();
HAnimJoint1621->setUSE("hanim_l_cuneonavicular_2");
HAnimHumanoid43->addJoints(HAnimJoint1621);

HAnimJoint* HAnimJoint1622 = new HAnimJoint();
HAnimJoint1622->setUSE("hanim_l_tarsometatarsal_2");
HAnimHumanoid43->addJoints(HAnimJoint1622);

HAnimJoint* HAnimJoint1623 = new HAnimJoint();
HAnimJoint1623->setUSE("hanim_l_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1623);

HAnimJoint* HAnimJoint1624 = new HAnimJoint();
HAnimJoint1624->setUSE("hanim_l_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1624);

HAnimJoint* HAnimJoint1625 = new HAnimJoint();
HAnimJoint1625->setUSE("hanim_l_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1625);

HAnimJoint* HAnimJoint1626 = new HAnimJoint();
HAnimJoint1626->setUSE("hanim_l_cuneonavicular_3");
HAnimHumanoid43->addJoints(HAnimJoint1626);

HAnimJoint* HAnimJoint1627 = new HAnimJoint();
HAnimJoint1627->setUSE("hanim_l_tarsometatarsal_3");
HAnimHumanoid43->addJoints(HAnimJoint1627);

HAnimJoint* HAnimJoint1628 = new HAnimJoint();
HAnimJoint1628->setUSE("hanim_l_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1628);

HAnimJoint* HAnimJoint1629 = new HAnimJoint();
HAnimJoint1629->setUSE("hanim_l_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1629);

HAnimJoint* HAnimJoint1630 = new HAnimJoint();
HAnimJoint1630->setUSE("hanim_l_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1630);

HAnimJoint* HAnimJoint1631 = new HAnimJoint();
HAnimJoint1631->setUSE("hanim_l_calcaneocuboid");
HAnimHumanoid43->addJoints(HAnimJoint1631);

HAnimJoint* HAnimJoint1632 = new HAnimJoint();
HAnimJoint1632->setUSE("hanim_l_transversetarsal");
HAnimHumanoid43->addJoints(HAnimJoint1632);

HAnimJoint* HAnimJoint1633 = new HAnimJoint();
HAnimJoint1633->setUSE("hanim_l_tarsometatarsal_4");
HAnimHumanoid43->addJoints(HAnimJoint1633);

HAnimJoint* HAnimJoint1634 = new HAnimJoint();
HAnimJoint1634->setUSE("hanim_l_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1634);

HAnimJoint* HAnimJoint1635 = new HAnimJoint();
HAnimJoint1635->setUSE("hanim_l_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1635);

HAnimJoint* HAnimJoint1636 = new HAnimJoint();
HAnimJoint1636->setUSE("hanim_l_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1636);

HAnimJoint* HAnimJoint1637 = new HAnimJoint();
HAnimJoint1637->setUSE("hanim_l_tarsometatarsal_5");
HAnimHumanoid43->addJoints(HAnimJoint1637);

HAnimJoint* HAnimJoint1638 = new HAnimJoint();
HAnimJoint1638->setUSE("hanim_l_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1638);

HAnimJoint* HAnimJoint1639 = new HAnimJoint();
HAnimJoint1639->setUSE("hanim_l_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1639);

HAnimJoint* HAnimJoint1640 = new HAnimJoint();
HAnimJoint1640->setUSE("hanim_l_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1640);

HAnimJoint* HAnimJoint1641 = new HAnimJoint();
HAnimJoint1641->setUSE("hanim_r_hip");
HAnimHumanoid43->addJoints(HAnimJoint1641);

HAnimJoint* HAnimJoint1642 = new HAnimJoint();
HAnimJoint1642->setUSE("hanim_r_knee");
HAnimHumanoid43->addJoints(HAnimJoint1642);

HAnimJoint* HAnimJoint1643 = new HAnimJoint();
HAnimJoint1643->setUSE("hanim_r_talocrural");
HAnimHumanoid43->addJoints(HAnimJoint1643);

HAnimJoint* HAnimJoint1644 = new HAnimJoint();
HAnimJoint1644->setUSE("hanim_r_talocalcaneonavicular");
HAnimHumanoid43->addJoints(HAnimJoint1644);

HAnimJoint* HAnimJoint1645 = new HAnimJoint();
HAnimJoint1645->setUSE("hanim_r_cuneonavicular_1");
HAnimHumanoid43->addJoints(HAnimJoint1645);

HAnimJoint* HAnimJoint1646 = new HAnimJoint();
HAnimJoint1646->setUSE("hanim_r_tarsometatarsal_1");
HAnimHumanoid43->addJoints(HAnimJoint1646);

HAnimJoint* HAnimJoint1647 = new HAnimJoint();
HAnimJoint1647->setUSE("hanim_r_metatarsophalangeal_1");
HAnimHumanoid43->addJoints(HAnimJoint1647);

HAnimJoint* HAnimJoint1648 = new HAnimJoint();
HAnimJoint1648->setUSE("hanim_r_tarsal_interphalangeal_1");
HAnimHumanoid43->addJoints(HAnimJoint1648);

HAnimJoint* HAnimJoint1649 = new HAnimJoint();
HAnimJoint1649->setUSE("hanim_r_cuneonavicular_2");
HAnimHumanoid43->addJoints(HAnimJoint1649);

HAnimJoint* HAnimJoint1650 = new HAnimJoint();
HAnimJoint1650->setUSE("hanim_r_tarsometatarsal_2");
HAnimHumanoid43->addJoints(HAnimJoint1650);

HAnimJoint* HAnimJoint1651 = new HAnimJoint();
HAnimJoint1651->setUSE("hanim_r_metatarsophalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1651);

HAnimJoint* HAnimJoint1652 = new HAnimJoint();
HAnimJoint1652->setUSE("hanim_r_tarsal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1652);

HAnimJoint* HAnimJoint1653 = new HAnimJoint();
HAnimJoint1653->setUSE("hanim_r_tarsal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1653);

HAnimJoint* HAnimJoint1654 = new HAnimJoint();
HAnimJoint1654->setUSE("hanim_r_cuneonavicular_3");
HAnimHumanoid43->addJoints(HAnimJoint1654);

HAnimJoint* HAnimJoint1655 = new HAnimJoint();
HAnimJoint1655->setUSE("hanim_r_tarsometatarsal_3");
HAnimHumanoid43->addJoints(HAnimJoint1655);

HAnimJoint* HAnimJoint1656 = new HAnimJoint();
HAnimJoint1656->setUSE("hanim_r_metatarsophalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1656);

HAnimJoint* HAnimJoint1657 = new HAnimJoint();
HAnimJoint1657->setUSE("hanim_r_tarsal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1657);

HAnimJoint* HAnimJoint1658 = new HAnimJoint();
HAnimJoint1658->setUSE("hanim_r_tarsal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1658);

HAnimJoint* HAnimJoint1659 = new HAnimJoint();
HAnimJoint1659->setUSE("hanim_r_calcaneocuboid");
HAnimHumanoid43->addJoints(HAnimJoint1659);

HAnimJoint* HAnimJoint1660 = new HAnimJoint();
HAnimJoint1660->setUSE("hanim_r_transversetarsal");
HAnimHumanoid43->addJoints(HAnimJoint1660);

HAnimJoint* HAnimJoint1661 = new HAnimJoint();
HAnimJoint1661->setUSE("hanim_r_tarsometatarsal_4");
HAnimHumanoid43->addJoints(HAnimJoint1661);

HAnimJoint* HAnimJoint1662 = new HAnimJoint();
HAnimJoint1662->setUSE("hanim_r_metatarsophalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1662);

HAnimJoint* HAnimJoint1663 = new HAnimJoint();
HAnimJoint1663->setUSE("hanim_r_tarsal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1663);

HAnimJoint* HAnimJoint1664 = new HAnimJoint();
HAnimJoint1664->setUSE("hanim_r_tarsal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1664);

HAnimJoint* HAnimJoint1665 = new HAnimJoint();
HAnimJoint1665->setUSE("hanim_r_tarsometatarsal_5");
HAnimHumanoid43->addJoints(HAnimJoint1665);

HAnimJoint* HAnimJoint1666 = new HAnimJoint();
HAnimJoint1666->setUSE("hanim_r_metatarsophalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1666);

HAnimJoint* HAnimJoint1667 = new HAnimJoint();
HAnimJoint1667->setUSE("hanim_r_tarsal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1667);

HAnimJoint* HAnimJoint1668 = new HAnimJoint();
HAnimJoint1668->setUSE("hanim_r_tarsal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1668);

HAnimJoint* HAnimJoint1669 = new HAnimJoint();
HAnimJoint1669->setUSE("hanim_vl5");
HAnimHumanoid43->addJoints(HAnimJoint1669);

HAnimJoint* HAnimJoint1670 = new HAnimJoint();
HAnimJoint1670->setUSE("hanim_vl4");
HAnimHumanoid43->addJoints(HAnimJoint1670);

HAnimJoint* HAnimJoint1671 = new HAnimJoint();
HAnimJoint1671->setUSE("hanim_vl3");
HAnimHumanoid43->addJoints(HAnimJoint1671);

HAnimJoint* HAnimJoint1672 = new HAnimJoint();
HAnimJoint1672->setUSE("hanim_vl2");
HAnimHumanoid43->addJoints(HAnimJoint1672);

HAnimJoint* HAnimJoint1673 = new HAnimJoint();
HAnimJoint1673->setUSE("hanim_vl1");
HAnimHumanoid43->addJoints(HAnimJoint1673);

HAnimJoint* HAnimJoint1674 = new HAnimJoint();
HAnimJoint1674->setUSE("hanim_vt12");
HAnimHumanoid43->addJoints(HAnimJoint1674);

HAnimJoint* HAnimJoint1675 = new HAnimJoint();
HAnimJoint1675->setUSE("hanim_vt11");
HAnimHumanoid43->addJoints(HAnimJoint1675);

HAnimJoint* HAnimJoint1676 = new HAnimJoint();
HAnimJoint1676->setUSE("hanim_vt10");
HAnimHumanoid43->addJoints(HAnimJoint1676);

HAnimJoint* HAnimJoint1677 = new HAnimJoint();
HAnimJoint1677->setUSE("hanim_vt9");
HAnimHumanoid43->addJoints(HAnimJoint1677);

HAnimJoint* HAnimJoint1678 = new HAnimJoint();
HAnimJoint1678->setUSE("hanim_vt8");
HAnimHumanoid43->addJoints(HAnimJoint1678);

HAnimJoint* HAnimJoint1679 = new HAnimJoint();
HAnimJoint1679->setUSE("hanim_vt7");
HAnimHumanoid43->addJoints(HAnimJoint1679);

HAnimJoint* HAnimJoint1680 = new HAnimJoint();
HAnimJoint1680->setUSE("hanim_vt6");
HAnimHumanoid43->addJoints(HAnimJoint1680);

HAnimJoint* HAnimJoint1681 = new HAnimJoint();
HAnimJoint1681->setUSE("hanim_vt5");
HAnimHumanoid43->addJoints(HAnimJoint1681);

HAnimJoint* HAnimJoint1682 = new HAnimJoint();
HAnimJoint1682->setUSE("hanim_vt4");
HAnimHumanoid43->addJoints(HAnimJoint1682);

HAnimJoint* HAnimJoint1683 = new HAnimJoint();
HAnimJoint1683->setUSE("hanim_vt3");
HAnimHumanoid43->addJoints(HAnimJoint1683);

HAnimJoint* HAnimJoint1684 = new HAnimJoint();
HAnimJoint1684->setUSE("hanim_vt2");
HAnimHumanoid43->addJoints(HAnimJoint1684);

HAnimJoint* HAnimJoint1685 = new HAnimJoint();
HAnimJoint1685->setUSE("hanim_vt1");
HAnimHumanoid43->addJoints(HAnimJoint1685);

HAnimJoint* HAnimJoint1686 = new HAnimJoint();
HAnimJoint1686->setUSE("hanim_vc7");
HAnimHumanoid43->addJoints(HAnimJoint1686);

HAnimJoint* HAnimJoint1687 = new HAnimJoint();
HAnimJoint1687->setUSE("hanim_vc6");
HAnimHumanoid43->addJoints(HAnimJoint1687);

HAnimJoint* HAnimJoint1688 = new HAnimJoint();
HAnimJoint1688->setUSE("hanim_vc5");
HAnimHumanoid43->addJoints(HAnimJoint1688);

HAnimJoint* HAnimJoint1689 = new HAnimJoint();
HAnimJoint1689->setUSE("hanim_vc4");
HAnimHumanoid43->addJoints(HAnimJoint1689);

HAnimJoint* HAnimJoint1690 = new HAnimJoint();
HAnimJoint1690->setUSE("hanim_vc3");
HAnimHumanoid43->addJoints(HAnimJoint1690);

HAnimJoint* HAnimJoint1691 = new HAnimJoint();
HAnimJoint1691->setUSE("hanim_vc2");
HAnimHumanoid43->addJoints(HAnimJoint1691);

HAnimJoint* HAnimJoint1692 = new HAnimJoint();
HAnimJoint1692->setUSE("hanim_vc1");
HAnimHumanoid43->addJoints(HAnimJoint1692);

HAnimJoint* HAnimJoint1693 = new HAnimJoint();
HAnimJoint1693->setUSE("hanim_skullbase");
HAnimHumanoid43->addJoints(HAnimJoint1693);

HAnimJoint* HAnimJoint1694 = new HAnimJoint();
HAnimJoint1694->setUSE("hanim_l_eyelid_joint");
HAnimHumanoid43->addJoints(HAnimJoint1694);

HAnimJoint* HAnimJoint1695 = new HAnimJoint();
HAnimJoint1695->setUSE("hanim_r_eyelid_joint");
HAnimHumanoid43->addJoints(HAnimJoint1695);

HAnimJoint* HAnimJoint1696 = new HAnimJoint();
HAnimJoint1696->setUSE("hanim_l_eyeball_joint");
HAnimHumanoid43->addJoints(HAnimJoint1696);

HAnimJoint* HAnimJoint1697 = new HAnimJoint();
HAnimJoint1697->setUSE("hanim_r_eyeball_joint");
HAnimHumanoid43->addJoints(HAnimJoint1697);

HAnimJoint* HAnimJoint1698 = new HAnimJoint();
HAnimJoint1698->setUSE("hanim_l_eyebrow_joint");
HAnimHumanoid43->addJoints(HAnimJoint1698);

HAnimJoint* HAnimJoint1699 = new HAnimJoint();
HAnimJoint1699->setUSE("hanim_r_eyebrow_joint");
HAnimHumanoid43->addJoints(HAnimJoint1699);

HAnimJoint* HAnimJoint1700 = new HAnimJoint();
HAnimJoint1700->setUSE("hanim_temporomandibular");
HAnimHumanoid43->addJoints(HAnimJoint1700);

HAnimJoint* HAnimJoint1701 = new HAnimJoint();
HAnimJoint1701->setUSE("hanim_l_sternoclavicular");
HAnimHumanoid43->addJoints(HAnimJoint1701);

HAnimJoint* HAnimJoint1702 = new HAnimJoint();
HAnimJoint1702->setUSE("hanim_l_acromioclavicular");
HAnimHumanoid43->addJoints(HAnimJoint1702);

HAnimJoint* HAnimJoint1703 = new HAnimJoint();
HAnimJoint1703->setUSE("hanim_l_shoulder");
HAnimHumanoid43->addJoints(HAnimJoint1703);

HAnimJoint* HAnimJoint1704 = new HAnimJoint();
HAnimJoint1704->setUSE("hanim_l_elbow");
HAnimHumanoid43->addJoints(HAnimJoint1704);

HAnimJoint* HAnimJoint1705 = new HAnimJoint();
HAnimJoint1705->setUSE("hanim_l_radiocarpal");
HAnimHumanoid43->addJoints(HAnimJoint1705);

HAnimJoint* HAnimJoint1706 = new HAnimJoint();
HAnimJoint1706->setUSE("hanim_l_midcarpal_1");
HAnimHumanoid43->addJoints(HAnimJoint1706);

HAnimJoint* HAnimJoint1707 = new HAnimJoint();
HAnimJoint1707->setUSE("hanim_l_carpometacarpal_1");
HAnimHumanoid43->addJoints(HAnimJoint1707);

HAnimJoint* HAnimJoint1708 = new HAnimJoint();
HAnimJoint1708->setUSE("hanim_l_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(HAnimJoint1708);

HAnimJoint* HAnimJoint1709 = new HAnimJoint();
HAnimJoint1709->setUSE("hanim_l_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(HAnimJoint1709);

HAnimJoint* HAnimJoint1710 = new HAnimJoint();
HAnimJoint1710->setUSE("hanim_l_midcarpal_2");
HAnimHumanoid43->addJoints(HAnimJoint1710);

HAnimJoint* HAnimJoint1711 = new HAnimJoint();
HAnimJoint1711->setUSE("hanim_l_carpometacarpal_2");
HAnimHumanoid43->addJoints(HAnimJoint1711);

HAnimJoint* HAnimJoint1712 = new HAnimJoint();
HAnimJoint1712->setUSE("hanim_l_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1712);

HAnimJoint* HAnimJoint1713 = new HAnimJoint();
HAnimJoint1713->setUSE("hanim_l_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1713);

HAnimJoint* HAnimJoint1714 = new HAnimJoint();
HAnimJoint1714->setUSE("hanim_l_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1714);

HAnimJoint* HAnimJoint1715 = new HAnimJoint();
HAnimJoint1715->setUSE("hanim_l_midcarpal_3");
HAnimHumanoid43->addJoints(HAnimJoint1715);

HAnimJoint* HAnimJoint1716 = new HAnimJoint();
HAnimJoint1716->setUSE("hanim_l_carpometacarpal_3");
HAnimHumanoid43->addJoints(HAnimJoint1716);

HAnimJoint* HAnimJoint1717 = new HAnimJoint();
HAnimJoint1717->setUSE("hanim_l_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1717);

HAnimJoint* HAnimJoint1718 = new HAnimJoint();
HAnimJoint1718->setUSE("hanim_l_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1718);

HAnimJoint* HAnimJoint1719 = new HAnimJoint();
HAnimJoint1719->setUSE("hanim_l_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1719);

HAnimJoint* HAnimJoint1720 = new HAnimJoint();
HAnimJoint1720->setUSE("hanim_l_midcarpal_4_5");
HAnimHumanoid43->addJoints(HAnimJoint1720);

HAnimJoint* HAnimJoint1721 = new HAnimJoint();
HAnimJoint1721->setUSE("hanim_l_carpometacarpal_4");
HAnimHumanoid43->addJoints(HAnimJoint1721);

HAnimJoint* HAnimJoint1722 = new HAnimJoint();
HAnimJoint1722->setUSE("hanim_l_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1722);

HAnimJoint* HAnimJoint1723 = new HAnimJoint();
HAnimJoint1723->setUSE("hanim_l_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1723);

HAnimJoint* HAnimJoint1724 = new HAnimJoint();
HAnimJoint1724->setUSE("hanim_l_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1724);

HAnimJoint* HAnimJoint1725 = new HAnimJoint();
HAnimJoint1725->setUSE("hanim_l_carpometacarpal_5");
HAnimHumanoid43->addJoints(HAnimJoint1725);

HAnimJoint* HAnimJoint1726 = new HAnimJoint();
HAnimJoint1726->setUSE("hanim_l_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1726);

HAnimJoint* HAnimJoint1727 = new HAnimJoint();
HAnimJoint1727->setUSE("hanim_l_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1727);

HAnimJoint* HAnimJoint1728 = new HAnimJoint();
HAnimJoint1728->setUSE("hanim_l_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1728);

HAnimJoint* HAnimJoint1729 = new HAnimJoint();
HAnimJoint1729->setUSE("hanim_r_sternoclavicular");
HAnimHumanoid43->addJoints(HAnimJoint1729);

HAnimJoint* HAnimJoint1730 = new HAnimJoint();
HAnimJoint1730->setUSE("hanim_r_acromioclavicular");
HAnimHumanoid43->addJoints(HAnimJoint1730);

HAnimJoint* HAnimJoint1731 = new HAnimJoint();
HAnimJoint1731->setUSE("hanim_r_shoulder");
HAnimHumanoid43->addJoints(HAnimJoint1731);

HAnimJoint* HAnimJoint1732 = new HAnimJoint();
HAnimJoint1732->setUSE("hanim_r_elbow");
HAnimHumanoid43->addJoints(HAnimJoint1732);

HAnimJoint* HAnimJoint1733 = new HAnimJoint();
HAnimJoint1733->setUSE("hanim_r_radiocarpal");
HAnimHumanoid43->addJoints(HAnimJoint1733);

HAnimJoint* HAnimJoint1734 = new HAnimJoint();
HAnimJoint1734->setUSE("hanim_r_midcarpal_1");
HAnimHumanoid43->addJoints(HAnimJoint1734);

HAnimJoint* HAnimJoint1735 = new HAnimJoint();
HAnimJoint1735->setUSE("hanim_r_carpometacarpal_1");
HAnimHumanoid43->addJoints(HAnimJoint1735);

HAnimJoint* HAnimJoint1736 = new HAnimJoint();
HAnimJoint1736->setUSE("hanim_r_metacarpophalangeal_1");
HAnimHumanoid43->addJoints(HAnimJoint1736);

HAnimJoint* HAnimJoint1737 = new HAnimJoint();
HAnimJoint1737->setUSE("hanim_r_carpal_interphalangeal_1");
HAnimHumanoid43->addJoints(HAnimJoint1737);

HAnimJoint* HAnimJoint1738 = new HAnimJoint();
HAnimJoint1738->setUSE("hanim_r_midcarpal_2");
HAnimHumanoid43->addJoints(HAnimJoint1738);

HAnimJoint* HAnimJoint1739 = new HAnimJoint();
HAnimJoint1739->setUSE("hanim_r_carpometacarpal_2");
HAnimHumanoid43->addJoints(HAnimJoint1739);

HAnimJoint* HAnimJoint1740 = new HAnimJoint();
HAnimJoint1740->setUSE("hanim_r_metacarpophalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1740);

HAnimJoint* HAnimJoint1741 = new HAnimJoint();
HAnimJoint1741->setUSE("hanim_r_carpal_proximal_interphalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1741);

HAnimJoint* HAnimJoint1742 = new HAnimJoint();
HAnimJoint1742->setUSE("hanim_r_carpal_distal_interphalangeal_2");
HAnimHumanoid43->addJoints(HAnimJoint1742);

HAnimJoint* HAnimJoint1743 = new HAnimJoint();
HAnimJoint1743->setUSE("hanim_r_midcarpal_3");
HAnimHumanoid43->addJoints(HAnimJoint1743);

HAnimJoint* HAnimJoint1744 = new HAnimJoint();
HAnimJoint1744->setUSE("hanim_r_carpometacarpal_3");
HAnimHumanoid43->addJoints(HAnimJoint1744);

HAnimJoint* HAnimJoint1745 = new HAnimJoint();
HAnimJoint1745->setUSE("hanim_r_metacarpophalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1745);

HAnimJoint* HAnimJoint1746 = new HAnimJoint();
HAnimJoint1746->setUSE("hanim_r_carpal_proximal_interphalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1746);

HAnimJoint* HAnimJoint1747 = new HAnimJoint();
HAnimJoint1747->setUSE("hanim_r_carpal_distal_interphalangeal_3");
HAnimHumanoid43->addJoints(HAnimJoint1747);

HAnimJoint* HAnimJoint1748 = new HAnimJoint();
HAnimJoint1748->setUSE("hanim_r_midcarpal_4_5");
HAnimHumanoid43->addJoints(HAnimJoint1748);

HAnimJoint* HAnimJoint1749 = new HAnimJoint();
HAnimJoint1749->setUSE("hanim_r_carpometacarpal_4");
HAnimHumanoid43->addJoints(HAnimJoint1749);

HAnimJoint* HAnimJoint1750 = new HAnimJoint();
HAnimJoint1750->setUSE("hanim_r_metacarpophalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1750);

HAnimJoint* HAnimJoint1751 = new HAnimJoint();
HAnimJoint1751->setUSE("hanim_r_carpal_proximal_interphalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1751);

HAnimJoint* HAnimJoint1752 = new HAnimJoint();
HAnimJoint1752->setUSE("hanim_r_carpal_distal_interphalangeal_4");
HAnimHumanoid43->addJoints(HAnimJoint1752);

HAnimJoint* HAnimJoint1753 = new HAnimJoint();
HAnimJoint1753->setUSE("hanim_r_carpometacarpal_5");
HAnimHumanoid43->addJoints(HAnimJoint1753);

HAnimJoint* HAnimJoint1754 = new HAnimJoint();
HAnimJoint1754->setUSE("hanim_r_metacarpophalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1754);

HAnimJoint* HAnimJoint1755 = new HAnimJoint();
HAnimJoint1755->setUSE("hanim_r_carpal_proximal_interphalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1755);

HAnimJoint* HAnimJoint1756 = new HAnimJoint();
HAnimJoint1756->setUSE("hanim_r_carpal_distal_interphalangeal_5");
HAnimHumanoid43->addJoints(HAnimJoint1756);

HAnimSegment* HAnimSegment1757 = new HAnimSegment();
HAnimSegment1757->setUSE("hanim_sacrum");
HAnimHumanoid43->setSegments(HAnimSegment1757);

HAnimSegment* HAnimSegment1758 = new HAnimSegment();
HAnimSegment1758->setUSE("hanim_pelvis");
HAnimHumanoid43->setSegments(HAnimSegment1758);

HAnimSegment* HAnimSegment1759 = new HAnimSegment();
HAnimSegment1759->setUSE("hanim_l_thigh");
HAnimHumanoid43->setSegments(HAnimSegment1759);

HAnimSegment* HAnimSegment1760 = new HAnimSegment();
HAnimSegment1760->setUSE("hanim_l_calf");
HAnimHumanoid43->setSegments(HAnimSegment1760);

HAnimSegment* HAnimSegment1761 = new HAnimSegment();
HAnimSegment1761->setUSE("hanim_l_talus");
HAnimHumanoid43->setSegments(HAnimSegment1761);

HAnimSegment* HAnimSegment1762 = new HAnimSegment();
HAnimSegment1762->setUSE("hanim_l_navicular");
HAnimHumanoid43->setSegments(HAnimSegment1762);

HAnimSegment* HAnimSegment1763 = new HAnimSegment();
HAnimSegment1763->setUSE("hanim_l_cuneiform_1");
HAnimHumanoid43->setSegments(HAnimSegment1763);

HAnimSegment* HAnimSegment1764 = new HAnimSegment();
HAnimSegment1764->setUSE("hanim_l_metatarsal_1");
HAnimHumanoid43->setSegments(HAnimSegment1764);

HAnimSegment* HAnimSegment1765 = new HAnimSegment();
HAnimSegment1765->setUSE("hanim_l_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(HAnimSegment1765);

HAnimSegment* HAnimSegment1766 = new HAnimSegment();
HAnimSegment1766->setUSE("hanim_l_cuneiform_2");
HAnimHumanoid43->setSegments(HAnimSegment1766);

HAnimSegment* HAnimSegment1767 = new HAnimSegment();
HAnimSegment1767->setUSE("hanim_l_metatarsal_2");
HAnimHumanoid43->setSegments(HAnimSegment1767);

HAnimSegment* HAnimSegment1768 = new HAnimSegment();
HAnimSegment1768->setUSE("hanim_l_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(HAnimSegment1768);

HAnimSegment* HAnimSegment1769 = new HAnimSegment();
HAnimSegment1769->setUSE("hanim_l_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(HAnimSegment1769);

HAnimSegment* HAnimSegment1770 = new HAnimSegment();
HAnimSegment1770->setUSE("hanim_l_cuneiform_3");
HAnimHumanoid43->setSegments(HAnimSegment1770);

HAnimSegment* HAnimSegment1771 = new HAnimSegment();
HAnimSegment1771->setUSE("hanim_l_metatarsal_3");
HAnimHumanoid43->setSegments(HAnimSegment1771);

HAnimSegment* HAnimSegment1772 = new HAnimSegment();
HAnimSegment1772->setUSE("hanim_l_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(HAnimSegment1772);

HAnimSegment* HAnimSegment1773 = new HAnimSegment();
HAnimSegment1773->setUSE("hanim_l_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(HAnimSegment1773);

HAnimSegment* HAnimSegment1774 = new HAnimSegment();
HAnimSegment1774->setUSE("hanim_l_calcaneus");
HAnimHumanoid43->setSegments(HAnimSegment1774);

HAnimSegment* HAnimSegment1775 = new HAnimSegment();
HAnimSegment1775->setUSE("hanim_l_cuboid");
HAnimHumanoid43->setSegments(HAnimSegment1775);

HAnimSegment* HAnimSegment1776 = new HAnimSegment();
HAnimSegment1776->setUSE("hanim_l_metatarsal_4");
HAnimHumanoid43->setSegments(HAnimSegment1776);

HAnimSegment* HAnimSegment1777 = new HAnimSegment();
HAnimSegment1777->setUSE("hanim_l_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(HAnimSegment1777);

HAnimSegment* HAnimSegment1778 = new HAnimSegment();
HAnimSegment1778->setUSE("hanim_l_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(HAnimSegment1778);

HAnimSegment* HAnimSegment1779 = new HAnimSegment();
HAnimSegment1779->setUSE("hanim_l_metatarsal_5");
HAnimHumanoid43->setSegments(HAnimSegment1779);

HAnimSegment* HAnimSegment1780 = new HAnimSegment();
HAnimSegment1780->setUSE("hanim_l_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(HAnimSegment1780);

HAnimSegment* HAnimSegment1781 = new HAnimSegment();
HAnimSegment1781->setUSE("hanim_l_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(HAnimSegment1781);

HAnimSegment* HAnimSegment1782 = new HAnimSegment();
HAnimSegment1782->setUSE("hanim_r_thigh");
HAnimHumanoid43->setSegments(HAnimSegment1782);

HAnimSegment* HAnimSegment1783 = new HAnimSegment();
HAnimSegment1783->setUSE("hanim_r_calf");
HAnimHumanoid43->setSegments(HAnimSegment1783);

HAnimSegment* HAnimSegment1784 = new HAnimSegment();
HAnimSegment1784->setUSE("hanim_r_talus");
HAnimHumanoid43->setSegments(HAnimSegment1784);

HAnimSegment* HAnimSegment1785 = new HAnimSegment();
HAnimSegment1785->setUSE("hanim_r_navicular");
HAnimHumanoid43->setSegments(HAnimSegment1785);

HAnimSegment* HAnimSegment1786 = new HAnimSegment();
HAnimSegment1786->setUSE("hanim_r_cuneiform_1");
HAnimHumanoid43->setSegments(HAnimSegment1786);

HAnimSegment* HAnimSegment1787 = new HAnimSegment();
HAnimSegment1787->setUSE("hanim_r_metatarsal_1");
HAnimHumanoid43->setSegments(HAnimSegment1787);

HAnimSegment* HAnimSegment1788 = new HAnimSegment();
HAnimSegment1788->setUSE("hanim_r_tarsal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(HAnimSegment1788);

HAnimSegment* HAnimSegment1789 = new HAnimSegment();
HAnimSegment1789->setUSE("hanim_r_cuneiform_2");
HAnimHumanoid43->setSegments(HAnimSegment1789);

HAnimSegment* HAnimSegment1790 = new HAnimSegment();
HAnimSegment1790->setUSE("hanim_r_metatarsal_2");
HAnimHumanoid43->setSegments(HAnimSegment1790);

HAnimSegment* HAnimSegment1791 = new HAnimSegment();
HAnimSegment1791->setUSE("hanim_r_tarsal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(HAnimSegment1791);

HAnimSegment* HAnimSegment1792 = new HAnimSegment();
HAnimSegment1792->setUSE("hanim_r_tarsal_middle_phalanx_2");
HAnimHumanoid43->setSegments(HAnimSegment1792);

HAnimSegment* HAnimSegment1793 = new HAnimSegment();
HAnimSegment1793->setUSE("hanim_r_cuneiform_3");
HAnimHumanoid43->setSegments(HAnimSegment1793);

HAnimSegment* HAnimSegment1794 = new HAnimSegment();
HAnimSegment1794->setUSE("hanim_r_metatarsal_3");
HAnimHumanoid43->setSegments(HAnimSegment1794);

HAnimSegment* HAnimSegment1795 = new HAnimSegment();
HAnimSegment1795->setUSE("hanim_r_tarsal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(HAnimSegment1795);

HAnimSegment* HAnimSegment1796 = new HAnimSegment();
HAnimSegment1796->setUSE("hanim_r_tarsal_middle_phalanx_3");
HAnimHumanoid43->setSegments(HAnimSegment1796);

HAnimSegment* HAnimSegment1797 = new HAnimSegment();
HAnimSegment1797->setUSE("hanim_r_calcaneus");
HAnimHumanoid43->setSegments(HAnimSegment1797);

HAnimSegment* HAnimSegment1798 = new HAnimSegment();
HAnimSegment1798->setUSE("hanim_r_cuboid");
HAnimHumanoid43->setSegments(HAnimSegment1798);

HAnimSegment* HAnimSegment1799 = new HAnimSegment();
HAnimSegment1799->setUSE("hanim_r_metatarsal_4");
HAnimHumanoid43->setSegments(HAnimSegment1799);

HAnimSegment* HAnimSegment1800 = new HAnimSegment();
HAnimSegment1800->setUSE("hanim_r_tarsal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(HAnimSegment1800);

HAnimSegment* HAnimSegment1801 = new HAnimSegment();
HAnimSegment1801->setUSE("hanim_r_tarsal_middle_phalanx_4");
HAnimHumanoid43->setSegments(HAnimSegment1801);

HAnimSegment* HAnimSegment1802 = new HAnimSegment();
HAnimSegment1802->setUSE("hanim_r_metatarsal_5");
HAnimHumanoid43->setSegments(HAnimSegment1802);

HAnimSegment* HAnimSegment1803 = new HAnimSegment();
HAnimSegment1803->setUSE("hanim_r_tarsal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(HAnimSegment1803);

HAnimSegment* HAnimSegment1804 = new HAnimSegment();
HAnimSegment1804->setUSE("hanim_r_tarsal_middle_phalanx_5");
HAnimHumanoid43->setSegments(HAnimSegment1804);

HAnimSegment* HAnimSegment1805 = new HAnimSegment();
HAnimSegment1805->setUSE("hanim_l5");
HAnimHumanoid43->setSegments(HAnimSegment1805);

HAnimSegment* HAnimSegment1806 = new HAnimSegment();
HAnimSegment1806->setUSE("hanim_l4");
HAnimHumanoid43->setSegments(HAnimSegment1806);

HAnimSegment* HAnimSegment1807 = new HAnimSegment();
HAnimSegment1807->setUSE("hanim_l3");
HAnimHumanoid43->setSegments(HAnimSegment1807);

HAnimSegment* HAnimSegment1808 = new HAnimSegment();
HAnimSegment1808->setUSE("hanim_l2");
HAnimHumanoid43->setSegments(HAnimSegment1808);

HAnimSegment* HAnimSegment1809 = new HAnimSegment();
HAnimSegment1809->setUSE("hanim_l1");
HAnimHumanoid43->setSegments(HAnimSegment1809);

HAnimSegment* HAnimSegment1810 = new HAnimSegment();
HAnimSegment1810->setUSE("hanim_t12");
HAnimHumanoid43->setSegments(HAnimSegment1810);

HAnimSegment* HAnimSegment1811 = new HAnimSegment();
HAnimSegment1811->setUSE("hanim_t11");
HAnimHumanoid43->setSegments(HAnimSegment1811);

HAnimSegment* HAnimSegment1812 = new HAnimSegment();
HAnimSegment1812->setUSE("hanim_t10");
HAnimHumanoid43->setSegments(HAnimSegment1812);

HAnimSegment* HAnimSegment1813 = new HAnimSegment();
HAnimSegment1813->setUSE("hanim_t9");
HAnimHumanoid43->setSegments(HAnimSegment1813);

HAnimSegment* HAnimSegment1814 = new HAnimSegment();
HAnimSegment1814->setUSE("hanim_t8");
HAnimHumanoid43->setSegments(HAnimSegment1814);

HAnimSegment* HAnimSegment1815 = new HAnimSegment();
HAnimSegment1815->setUSE("hanim_t7");
HAnimHumanoid43->setSegments(HAnimSegment1815);

HAnimSegment* HAnimSegment1816 = new HAnimSegment();
HAnimSegment1816->setUSE("hanim_t6");
HAnimHumanoid43->setSegments(HAnimSegment1816);

HAnimSegment* HAnimSegment1817 = new HAnimSegment();
HAnimSegment1817->setUSE("hanim_t5");
HAnimHumanoid43->setSegments(HAnimSegment1817);

HAnimSegment* HAnimSegment1818 = new HAnimSegment();
HAnimSegment1818->setUSE("hanim_t4");
HAnimHumanoid43->setSegments(HAnimSegment1818);

HAnimSegment* HAnimSegment1819 = new HAnimSegment();
HAnimSegment1819->setUSE("hanim_t3");
HAnimHumanoid43->setSegments(HAnimSegment1819);

HAnimSegment* HAnimSegment1820 = new HAnimSegment();
HAnimSegment1820->setUSE("hanim_t2");
HAnimHumanoid43->setSegments(HAnimSegment1820);

HAnimSegment* HAnimSegment1821 = new HAnimSegment();
HAnimSegment1821->setUSE("hanim_t1");
HAnimHumanoid43->setSegments(HAnimSegment1821);

HAnimSegment* HAnimSegment1822 = new HAnimSegment();
HAnimSegment1822->setUSE("hanim_c7");
HAnimHumanoid43->setSegments(HAnimSegment1822);

HAnimSegment* HAnimSegment1823 = new HAnimSegment();
HAnimSegment1823->setUSE("hanim_c6");
HAnimHumanoid43->setSegments(HAnimSegment1823);

HAnimSegment* HAnimSegment1824 = new HAnimSegment();
HAnimSegment1824->setUSE("hanim_c5");
HAnimHumanoid43->setSegments(HAnimSegment1824);

HAnimSegment* HAnimSegment1825 = new HAnimSegment();
HAnimSegment1825->setUSE("hanim_c4");
HAnimHumanoid43->setSegments(HAnimSegment1825);

HAnimSegment* HAnimSegment1826 = new HAnimSegment();
HAnimSegment1826->setUSE("hanim_c3");
HAnimHumanoid43->setSegments(HAnimSegment1826);

HAnimSegment* HAnimSegment1827 = new HAnimSegment();
HAnimSegment1827->setUSE("hanim_c2");
HAnimHumanoid43->setSegments(HAnimSegment1827);

HAnimSegment* HAnimSegment1828 = new HAnimSegment();
HAnimSegment1828->setUSE("hanim_c1");
HAnimHumanoid43->setSegments(HAnimSegment1828);

HAnimSegment* HAnimSegment1829 = new HAnimSegment();
HAnimSegment1829->setUSE("hanim_skull");
HAnimHumanoid43->setSegments(HAnimSegment1829);

HAnimSegment* HAnimSegment1830 = new HAnimSegment();
HAnimSegment1830->setUSE("hanim_l_clavicle");
HAnimHumanoid43->setSegments(HAnimSegment1830);

HAnimSegment* HAnimSegment1831 = new HAnimSegment();
HAnimSegment1831->setUSE("hanim_l_scapula");
HAnimHumanoid43->setSegments(HAnimSegment1831);

HAnimSegment* HAnimSegment1832 = new HAnimSegment();
HAnimSegment1832->setUSE("hanim_l_upperarm");
HAnimHumanoid43->setSegments(HAnimSegment1832);

HAnimSegment* HAnimSegment1833 = new HAnimSegment();
HAnimSegment1833->setUSE("hanim_l_forearm");
HAnimHumanoid43->setSegments(HAnimSegment1833);

HAnimSegment* HAnimSegment1834 = new HAnimSegment();
HAnimSegment1834->setUSE("hanim_l_carpal");
HAnimHumanoid43->setSegments(HAnimSegment1834);

HAnimSegment* HAnimSegment1835 = new HAnimSegment();
HAnimSegment1835->setUSE("hanim_l_trapezium");
HAnimHumanoid43->setSegments(HAnimSegment1835);

HAnimSegment* HAnimSegment1836 = new HAnimSegment();
HAnimSegment1836->setUSE("hanim_l_metacarpal_1");
HAnimHumanoid43->setSegments(HAnimSegment1836);

HAnimSegment* HAnimSegment1837 = new HAnimSegment();
HAnimSegment1837->setUSE("hanim_l_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(HAnimSegment1837);

HAnimSegment* HAnimSegment1838 = new HAnimSegment();
HAnimSegment1838->setUSE("hanim_l_trapezoid");
HAnimHumanoid43->setSegments(HAnimSegment1838);

HAnimSegment* HAnimSegment1839 = new HAnimSegment();
HAnimSegment1839->setUSE("hanim_l_metacarpal_2");
HAnimHumanoid43->setSegments(HAnimSegment1839);

HAnimSegment* HAnimSegment1840 = new HAnimSegment();
HAnimSegment1840->setUSE("hanim_l_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(HAnimSegment1840);

HAnimSegment* HAnimSegment1841 = new HAnimSegment();
HAnimSegment1841->setUSE("hanim_l_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(HAnimSegment1841);

HAnimSegment* HAnimSegment1842 = new HAnimSegment();
HAnimSegment1842->setUSE("hanim_l_capitate");
HAnimHumanoid43->setSegments(HAnimSegment1842);

HAnimSegment* HAnimSegment1843 = new HAnimSegment();
HAnimSegment1843->setUSE("hanim_l_metacarpal_3");
HAnimHumanoid43->setSegments(HAnimSegment1843);

HAnimSegment* HAnimSegment1844 = new HAnimSegment();
HAnimSegment1844->setUSE("hanim_l_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(HAnimSegment1844);

HAnimSegment* HAnimSegment1845 = new HAnimSegment();
HAnimSegment1845->setUSE("hanim_l_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(HAnimSegment1845);

HAnimSegment* HAnimSegment1846 = new HAnimSegment();
HAnimSegment1846->setUSE("hanim_l_hamate");
HAnimHumanoid43->setSegments(HAnimSegment1846);

HAnimSegment* HAnimSegment1847 = new HAnimSegment();
HAnimSegment1847->setUSE("hanim_l_metacarpal_4");
HAnimHumanoid43->setSegments(HAnimSegment1847);

HAnimSegment* HAnimSegment1848 = new HAnimSegment();
HAnimSegment1848->setUSE("hanim_l_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(HAnimSegment1848);

HAnimSegment* HAnimSegment1849 = new HAnimSegment();
HAnimSegment1849->setUSE("hanim_l_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(HAnimSegment1849);

HAnimSegment* HAnimSegment1850 = new HAnimSegment();
HAnimSegment1850->setUSE("hanim_l_metacarpal_5");
HAnimHumanoid43->setSegments(HAnimSegment1850);

HAnimSegment* HAnimSegment1851 = new HAnimSegment();
HAnimSegment1851->setUSE("hanim_l_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(HAnimSegment1851);

HAnimSegment* HAnimSegment1852 = new HAnimSegment();
HAnimSegment1852->setUSE("hanim_l_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(HAnimSegment1852);

HAnimSegment* HAnimSegment1853 = new HAnimSegment();
HAnimSegment1853->setUSE("hanim_r_clavicle");
HAnimHumanoid43->setSegments(HAnimSegment1853);

HAnimSegment* HAnimSegment1854 = new HAnimSegment();
HAnimSegment1854->setUSE("hanim_r_scapula");
HAnimHumanoid43->setSegments(HAnimSegment1854);

HAnimSegment* HAnimSegment1855 = new HAnimSegment();
HAnimSegment1855->setUSE("hanim_r_upperarm");
HAnimHumanoid43->setSegments(HAnimSegment1855);

HAnimSegment* HAnimSegment1856 = new HAnimSegment();
HAnimSegment1856->setUSE("hanim_r_forearm");
HAnimHumanoid43->setSegments(HAnimSegment1856);

HAnimSegment* HAnimSegment1857 = new HAnimSegment();
HAnimSegment1857->setUSE("hanim_r_carpal");
HAnimHumanoid43->setSegments(HAnimSegment1857);

HAnimSegment* HAnimSegment1858 = new HAnimSegment();
HAnimSegment1858->setUSE("hanim_r_trapezium");
HAnimHumanoid43->setSegments(HAnimSegment1858);

HAnimSegment* HAnimSegment1859 = new HAnimSegment();
HAnimSegment1859->setUSE("hanim_r_metacarpal_1");
HAnimHumanoid43->setSegments(HAnimSegment1859);

HAnimSegment* HAnimSegment1860 = new HAnimSegment();
HAnimSegment1860->setUSE("hanim_r_carpal_proximal_phalanx_1");
HAnimHumanoid43->setSegments(HAnimSegment1860);

HAnimSegment* HAnimSegment1861 = new HAnimSegment();
HAnimSegment1861->setUSE("hanim_r_trapezoid");
HAnimHumanoid43->setSegments(HAnimSegment1861);

HAnimSegment* HAnimSegment1862 = new HAnimSegment();
HAnimSegment1862->setUSE("hanim_r_metacarpal_2");
HAnimHumanoid43->setSegments(HAnimSegment1862);

HAnimSegment* HAnimSegment1863 = new HAnimSegment();
HAnimSegment1863->setUSE("hanim_r_carpal_proximal_phalanx_2");
HAnimHumanoid43->setSegments(HAnimSegment1863);

HAnimSegment* HAnimSegment1864 = new HAnimSegment();
HAnimSegment1864->setUSE("hanim_r_carpal_middle_phalanx_2");
HAnimHumanoid43->setSegments(HAnimSegment1864);

HAnimSegment* HAnimSegment1865 = new HAnimSegment();
HAnimSegment1865->setUSE("hanim_r_capitate");
HAnimHumanoid43->setSegments(HAnimSegment1865);

HAnimSegment* HAnimSegment1866 = new HAnimSegment();
HAnimSegment1866->setUSE("hanim_r_metacarpal_3");
HAnimHumanoid43->setSegments(HAnimSegment1866);

HAnimSegment* HAnimSegment1867 = new HAnimSegment();
HAnimSegment1867->setUSE("hanim_r_carpal_proximal_phalanx_3");
HAnimHumanoid43->setSegments(HAnimSegment1867);

HAnimSegment* HAnimSegment1868 = new HAnimSegment();
HAnimSegment1868->setUSE("hanim_r_carpal_middle_phalanx_3");
HAnimHumanoid43->setSegments(HAnimSegment1868);

HAnimSegment* HAnimSegment1869 = new HAnimSegment();
HAnimSegment1869->setUSE("hanim_r_hamate");
HAnimHumanoid43->setSegments(HAnimSegment1869);

HAnimSegment* HAnimSegment1870 = new HAnimSegment();
HAnimSegment1870->setUSE("hanim_r_metacarpal_4");
HAnimHumanoid43->setSegments(HAnimSegment1870);

HAnimSegment* HAnimSegment1871 = new HAnimSegment();
HAnimSegment1871->setUSE("hanim_r_carpal_proximal_phalanx_4");
HAnimHumanoid43->setSegments(HAnimSegment1871);

HAnimSegment* HAnimSegment1872 = new HAnimSegment();
HAnimSegment1872->setUSE("hanim_r_carpal_middle_phalanx_4");
HAnimHumanoid43->setSegments(HAnimSegment1872);

HAnimSegment* HAnimSegment1873 = new HAnimSegment();
HAnimSegment1873->setUSE("hanim_r_metacarpal_5");
HAnimHumanoid43->setSegments(HAnimSegment1873);

HAnimSegment* HAnimSegment1874 = new HAnimSegment();
HAnimSegment1874->setUSE("hanim_r_carpal_proximal_phalanx_5");
HAnimHumanoid43->setSegments(HAnimSegment1874);

HAnimSegment* HAnimSegment1875 = new HAnimSegment();
HAnimSegment1875->setUSE("hanim_r_carpal_middle_phalanx_5");
HAnimHumanoid43->setSegments(HAnimSegment1875);

HAnimSite* HAnimSite1876 = new HAnimSite();
HAnimSite1876->setUSE("hanim_buttocks_standing_wall_contact_point_pt");
HAnimHumanoid43->setSites(HAnimSite1876);

HAnimSite* HAnimSite1877 = new HAnimSite();
HAnimSite1877->setUSE("hanim_crotch_pt");
HAnimHumanoid43->setSites(HAnimSite1877);

HAnimSite* HAnimSite1878 = new HAnimSite();
HAnimSite1878->setUSE("hanim_l_asis_pt");
HAnimHumanoid43->setSites(HAnimSite1878);

HAnimSite* HAnimSite1879 = new HAnimSite();
HAnimSite1879->setUSE("hanim_l_iliocristale_pt");
HAnimHumanoid43->setSites(HAnimSite1879);

HAnimSite* HAnimSite1880 = new HAnimSite();
HAnimSite1880->setUSE("hanim_l_psis_pt");
HAnimHumanoid43->setSites(HAnimSite1880);

HAnimSite* HAnimSite1881 = new HAnimSite();
HAnimSite1881->setUSE("hanim_l_trochanterion_pt");
HAnimHumanoid43->setSites(HAnimSite1881);

HAnimSite* HAnimSite1882 = new HAnimSite();
HAnimSite1882->setUSE("hanim_r_asis_pt");
HAnimHumanoid43->setSites(HAnimSite1882);

HAnimSite* HAnimSite1883 = new HAnimSite();
HAnimSite1883->setUSE("hanim_r_iliocristale_pt");
HAnimHumanoid43->setSites(HAnimSite1883);

HAnimSite* HAnimSite1884 = new HAnimSite();
HAnimSite1884->setUSE("hanim_r_psis_pt");
HAnimHumanoid43->setSites(HAnimSite1884);

HAnimSite* HAnimSite1885 = new HAnimSite();
HAnimSite1885->setUSE("hanim_r_trochanterion_pt");
HAnimHumanoid43->setSites(HAnimSite1885);

HAnimSite* HAnimSite1886 = new HAnimSite();
HAnimSite1886->setUSE("hanim_navel_pt");
HAnimHumanoid43->setSites(HAnimSite1886);

HAnimSite* HAnimSite1887 = new HAnimSite();
HAnimSite1887->setUSE("hanim_waist_preferred_anterior_pt");
HAnimHumanoid43->setSites(HAnimSite1887);

HAnimSite* HAnimSite1888 = new HAnimSite();
HAnimSite1888->setUSE("hanim_waist_preferred_posterior_pt");
HAnimHumanoid43->setSites(HAnimSite1888);

HAnimSite* HAnimSite1889 = new HAnimSite();
HAnimSite1889->setUSE("hanim_l_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(HAnimSite1889);

HAnimSite* HAnimSite1890 = new HAnimSite();
HAnimSite1890->setUSE("hanim_l_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(HAnimSite1890);

HAnimSite* HAnimSite1891 = new HAnimSite();
HAnimSite1891->setUSE("hanim_l_knee_crease_pt");
HAnimHumanoid43->setSites(HAnimSite1891);

HAnimSite* HAnimSite1892 = new HAnimSite();
HAnimSite1892->setUSE("hanim_l_suprapatella_pt");
HAnimHumanoid43->setSites(HAnimSite1892);

HAnimSite* HAnimSite1893 = new HAnimSite();
HAnimSite1893->setUSE("hanim_r_femoral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(HAnimSite1893);

HAnimSite* HAnimSite1894 = new HAnimSite();
HAnimSite1894->setUSE("hanim_r_femoral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(HAnimSite1894);

HAnimSite* HAnimSite1895 = new HAnimSite();
HAnimSite1895->setUSE("hanim_r_knee_crease_pt");
HAnimHumanoid43->setSites(HAnimSite1895);

HAnimSite* HAnimSite1896 = new HAnimSite();
HAnimSite1896->setUSE("hanim_r_suprapatella_pt");
HAnimHumanoid43->setSites(HAnimSite1896);

HAnimSite* HAnimSite1897 = new HAnimSite();
HAnimSite1897->setUSE("hanim_l_lateral_malleolus_pt");
HAnimHumanoid43->setSites(HAnimSite1897);

HAnimSite* HAnimSite1898 = new HAnimSite();
HAnimSite1898->setUSE("hanim_l_medial_malleolus_pt");
HAnimHumanoid43->setSites(HAnimSite1898);

HAnimSite* HAnimSite1899 = new HAnimSite();
HAnimSite1899->setUSE("hanim_l_tibiale_pt");
HAnimHumanoid43->setSites(HAnimSite1899);

HAnimSite* HAnimSite1900 = new HAnimSite();
HAnimSite1900->setUSE("hanim_l_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(HAnimSite1900);

HAnimSite* HAnimSite1901 = new HAnimSite();
HAnimSite1901->setUSE("hanim_l_sphyrion_pt");
HAnimHumanoid43->setSites(HAnimSite1901);

HAnimSite* HAnimSite1902 = new HAnimSite();
HAnimSite1902->setUSE("hanim_l_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(HAnimSite1902);

HAnimSite* HAnimSite1903 = new HAnimSite();
HAnimSite1903->setUSE("hanim_l_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(HAnimSite1903);

HAnimSite* HAnimSite1904 = new HAnimSite();
HAnimSite1904->setUSE("hanim_l_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(HAnimSite1904);

HAnimSite* HAnimSite1905 = new HAnimSite();
HAnimSite1905->setUSE("hanim_l_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(HAnimSite1905);

HAnimSite* HAnimSite1906 = new HAnimSite();
HAnimSite1906->setUSE("hanim_l_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(HAnimSite1906);

HAnimSite* HAnimSite1907 = new HAnimSite();
HAnimSite1907->setUSE("hanim_l_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(HAnimSite1907);

HAnimSite* HAnimSite1908 = new HAnimSite();
HAnimSite1908->setUSE("hanim_l_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(HAnimSite1908);

HAnimSite* HAnimSite1909 = new HAnimSite();
HAnimSite1909->setUSE("hanim_r_lateral_malleolus_pt");
HAnimHumanoid43->setSites(HAnimSite1909);

HAnimSite* HAnimSite1910 = new HAnimSite();
HAnimSite1910->setUSE("hanim_r_medial_malleolus_pt");
HAnimHumanoid43->setSites(HAnimSite1910);

HAnimSite* HAnimSite1911 = new HAnimSite();
HAnimSite1911->setUSE("hanim_r_tibiale_pt");
HAnimHumanoid43->setSites(HAnimSite1911);

HAnimSite* HAnimSite1912 = new HAnimSite();
HAnimSite1912->setUSE("hanim_r_calcaneus_posterior_pt");
HAnimHumanoid43->setSites(HAnimSite1912);

HAnimSite* HAnimSite1913 = new HAnimSite();
HAnimSite1913->setUSE("hanim_r_sphyrion_pt");
HAnimHumanoid43->setSites(HAnimSite1913);

HAnimSite* HAnimSite1914 = new HAnimSite();
HAnimSite1914->setUSE("hanim_r_metatarsal_phalanx_1_pt");
HAnimHumanoid43->setSites(HAnimSite1914);

HAnimSite* HAnimSite1915 = new HAnimSite();
HAnimSite1915->setUSE("hanim_r_tarsal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(HAnimSite1915);

HAnimSite* HAnimSite1916 = new HAnimSite();
HAnimSite1916->setUSE("hanim_r_tarsal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(HAnimSite1916);

HAnimSite* HAnimSite1917 = new HAnimSite();
HAnimSite1917->setUSE("hanim_r_tarsal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(HAnimSite1917);

HAnimSite* HAnimSite1918 = new HAnimSite();
HAnimSite1918->setUSE("hanim_r_tarsal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(HAnimSite1918);

HAnimSite* HAnimSite1919 = new HAnimSite();
HAnimSite1919->setUSE("hanim_r_metatarsal_phalanx_5_pt");
HAnimHumanoid43->setSites(HAnimSite1919);

HAnimSite* HAnimSite1920 = new HAnimSite();
HAnimSite1920->setUSE("hanim_r_tarsal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(HAnimSite1920);

HAnimSite* HAnimSite1921 = new HAnimSite();
HAnimSite1921->setUSE("hanim_l_rib10_pt");
HAnimHumanoid43->setSites(HAnimSite1921);

HAnimSite* HAnimSite1922 = new HAnimSite();
HAnimSite1922->setUSE("hanim_r_rib10_pt");
HAnimHumanoid43->setSites(HAnimSite1922);

HAnimSite* HAnimSite1923 = new HAnimSite();
HAnimSite1923->setUSE("hanim_spine_2_middle_back_pt");
HAnimHumanoid43->setSites(HAnimSite1923);

HAnimSite* HAnimSite1924 = new HAnimSite();
HAnimSite1924->setUSE("hanim_substernale_pt");
HAnimHumanoid43->setSites(HAnimSite1924);

HAnimSite* HAnimSite1925 = new HAnimSite();
HAnimSite1925->setUSE("hanim_l_thelion_pt");
HAnimHumanoid43->setSites(HAnimSite1925);

HAnimSite* HAnimSite1926 = new HAnimSite();
HAnimSite1926->setUSE("hanim_r_thelion_pt");
HAnimHumanoid43->setSites(HAnimSite1926);

HAnimSite* HAnimSite1927 = new HAnimSite();
HAnimSite1927->setUSE("hanim_l_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(HAnimSite1927);

HAnimSite* HAnimSite1928 = new HAnimSite();
HAnimSite1928->setUSE("hanim_mesosternale_pt");
HAnimHumanoid43->setSites(HAnimSite1928);

HAnimSite* HAnimSite1929 = new HAnimSite();
HAnimSite1929->setUSE("hanim_r_chest_midsagittal_plane_pt");
HAnimHumanoid43->setSites(HAnimSite1929);

HAnimSite* HAnimSite1930 = new HAnimSite();
HAnimSite1930->setUSE("hanim_rear_center_midsagittal_plane_pt");
HAnimHumanoid43->setSites(HAnimSite1930);

HAnimSite* HAnimSite1931 = new HAnimSite();
HAnimSite1931->setUSE("hanim_spine_1_middle_back_pt");
HAnimHumanoid43->setSites(HAnimSite1931);

HAnimSite* HAnimSite1932 = new HAnimSite();
HAnimSite1932->setUSE("hanim_cervicale_pt");
HAnimHumanoid43->setSites(HAnimSite1932);

HAnimSite* HAnimSite1933 = new HAnimSite();
HAnimSite1933->setUSE("hanim_suprasternale_pt");
HAnimHumanoid43->setSites(HAnimSite1933);

HAnimSite* HAnimSite1934 = new HAnimSite();
HAnimSite1934->setUSE("hanim_l_neck_base_pt");
HAnimHumanoid43->setSites(HAnimSite1934);

HAnimSite* HAnimSite1935 = new HAnimSite();
HAnimSite1935->setUSE("hanim_r_neck_base_pt");
HAnimHumanoid43->setSites(HAnimSite1935);

HAnimSite* HAnimSite1936 = new HAnimSite();
HAnimSite1936->setUSE("hanim_l_acromion_pt");
HAnimHumanoid43->setSites(HAnimSite1936);

HAnimSite* HAnimSite1937 = new HAnimSite();
HAnimSite1937->setUSE("hanim_l_axilla_distal_pt");
HAnimHumanoid43->setSites(HAnimSite1937);

HAnimSite* HAnimSite1938 = new HAnimSite();
HAnimSite1938->setUSE("hanim_l_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(HAnimSite1938);

HAnimSite* HAnimSite1939 = new HAnimSite();
HAnimSite1939->setUSE("hanim_l_axilla_proximal_pt");
HAnimHumanoid43->setSites(HAnimSite1939);

HAnimSite* HAnimSite1940 = new HAnimSite();
HAnimSite1940->setUSE("hanim_l_clavicale_pt");
HAnimHumanoid43->setSites(HAnimSite1940);

HAnimSite* HAnimSite1941 = new HAnimSite();
HAnimSite1941->setUSE("hanim_r_acromion_pt");
HAnimHumanoid43->setSites(HAnimSite1941);

HAnimSite* HAnimSite1942 = new HAnimSite();
HAnimSite1942->setUSE("hanim_r_axilla_distal_pt");
HAnimHumanoid43->setSites(HAnimSite1942);

HAnimSite* HAnimSite1943 = new HAnimSite();
HAnimSite1943->setUSE("hanim_r_axilla_posterior_folds_pt");
HAnimHumanoid43->setSites(HAnimSite1943);

HAnimSite* HAnimSite1944 = new HAnimSite();
HAnimSite1944->setUSE("hanim_r_axilla_proximal_pt");
HAnimHumanoid43->setSites(HAnimSite1944);

HAnimSite* HAnimSite1945 = new HAnimSite();
HAnimSite1945->setUSE("hanim_r_clavicale_pt");
HAnimHumanoid43->setSites(HAnimSite1945);

HAnimSite* HAnimSite1946 = new HAnimSite();
HAnimSite1946->setUSE("hanim_adams_apple_pt");
HAnimHumanoid43->setSites(HAnimSite1946);

HAnimSite* HAnimSite1947 = new HAnimSite();
HAnimSite1947->setUSE("hanim_glabella_pt");
HAnimHumanoid43->setSites(HAnimSite1947);

HAnimSite* HAnimSite1948 = new HAnimSite();
HAnimSite1948->setUSE("hanim_l_ectocanthus_pt");
HAnimHumanoid43->setSites(HAnimSite1948);

HAnimSite* HAnimSite1949 = new HAnimSite();
HAnimSite1949->setUSE("hanim_l_infraorbitale_pt");
HAnimHumanoid43->setSites(HAnimSite1949);

HAnimSite* HAnimSite1950 = new HAnimSite();
HAnimSite1950->setUSE("hanim_l_tragion_pt");
HAnimHumanoid43->setSites(HAnimSite1950);

HAnimSite* HAnimSite1951 = new HAnimSite();
HAnimSite1951->setUSE("hanim_nuchale_pt");
HAnimHumanoid43->setSites(HAnimSite1951);

HAnimSite* HAnimSite1952 = new HAnimSite();
HAnimSite1952->setUSE("hanim_opisthocranion_pt");
HAnimHumanoid43->setSites(HAnimSite1952);

HAnimSite* HAnimSite1953 = new HAnimSite();
HAnimSite1953->setUSE("hanim_r_ectocanthus_pt");
HAnimHumanoid43->setSites(HAnimSite1953);

HAnimSite* HAnimSite1954 = new HAnimSite();
HAnimSite1954->setUSE("hanim_r_infraorbitale_pt");
HAnimHumanoid43->setSites(HAnimSite1954);

HAnimSite* HAnimSite1955 = new HAnimSite();
HAnimSite1955->setUSE("hanim_r_tragion_pt");
HAnimHumanoid43->setSites(HAnimSite1955);

HAnimSite* HAnimSite1956 = new HAnimSite();
HAnimSite1956->setUSE("hanim_sellion_pt");
HAnimHumanoid43->setSites(HAnimSite1956);

HAnimSite* HAnimSite1957 = new HAnimSite();
HAnimSite1957->setUSE("hanim_skull_vertex_pt");
HAnimHumanoid43->setSites(HAnimSite1957);

HAnimSite* HAnimSite1958 = new HAnimSite();
HAnimSite1958->setUSE("hanim_l_gonion_pt");
HAnimHumanoid43->setSites(HAnimSite1958);

HAnimSite* HAnimSite1959 = new HAnimSite();
HAnimSite1959->setUSE("hanim_menton_pt");
HAnimHumanoid43->setSites(HAnimSite1959);

HAnimSite* HAnimSite1960 = new HAnimSite();
HAnimSite1960->setUSE("hanim_r_gonion_pt");
HAnimHumanoid43->setSites(HAnimSite1960);

HAnimSite* HAnimSite1961 = new HAnimSite();
HAnimSite1961->setUSE("hanim_supramenton_pt");
HAnimHumanoid43->setSites(HAnimSite1961);

HAnimSite* HAnimSite1962 = new HAnimSite();
HAnimSite1962->setUSE("hanim_l_bideltoid_pt");
HAnimHumanoid43->setSites(HAnimSite1962);

HAnimSite* HAnimSite1963 = new HAnimSite();
HAnimSite1963->setUSE("hanim_l_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(HAnimSite1963);

HAnimSite* HAnimSite1964 = new HAnimSite();
HAnimSite1964->setUSE("hanim_l_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(HAnimSite1964);

HAnimSite* HAnimSite1965 = new HAnimSite();
HAnimSite1965->setUSE("hanim_l_olecranon_pt");
HAnimHumanoid43->setSites(HAnimSite1965);

HAnimSite* HAnimSite1966 = new HAnimSite();
HAnimSite1966->setUSE("hanim_l_radial_styloid_pt");
HAnimHumanoid43->setSites(HAnimSite1966);

HAnimSite* HAnimSite1967 = new HAnimSite();
HAnimSite1967->setUSE("hanim_l_radiale_pt");
HAnimHumanoid43->setSites(HAnimSite1967);

HAnimSite* HAnimSite1968 = new HAnimSite();
HAnimSite1968->setUSE("hanim_l_ulnar_styloid_pt");
HAnimHumanoid43->setSites(HAnimSite1968);

HAnimSite* HAnimSite1969 = new HAnimSite();
HAnimSite1969->setUSE("hanim_l_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(HAnimSite1969);

HAnimSite* HAnimSite1970 = new HAnimSite();
HAnimSite1970->setUSE("hanim_l_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(HAnimSite1970);

HAnimSite* HAnimSite1971 = new HAnimSite();
HAnimSite1971->setUSE("hanim_l_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(HAnimSite1971);

HAnimSite* HAnimSite1972 = new HAnimSite();
HAnimSite1972->setUSE("hanim_l_dactylion_pt");
HAnimHumanoid43->setSites(HAnimSite1972);

HAnimSite* HAnimSite1973 = new HAnimSite();
HAnimSite1973->setUSE("hanim_l_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(HAnimSite1973);

HAnimSite* HAnimSite1974 = new HAnimSite();
HAnimSite1974->setUSE("hanim_l_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(HAnimSite1974);

HAnimSite* HAnimSite1975 = new HAnimSite();
HAnimSite1975->setUSE("hanim_l_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(HAnimSite1975);

HAnimSite* HAnimSite1976 = new HAnimSite();
HAnimSite1976->setUSE("hanim_l_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(HAnimSite1976);

HAnimSite* HAnimSite1977 = new HAnimSite();
HAnimSite1977->setUSE("hanim_l_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(HAnimSite1977);

HAnimSite* HAnimSite1978 = new HAnimSite();
HAnimSite1978->setUSE("hanim_r_bideltoid_pt");
HAnimHumanoid43->setSites(HAnimSite1978);

HAnimSite* HAnimSite1979 = new HAnimSite();
HAnimSite1979->setUSE("hanim_r_humeral_lateral_epicondyles_pt");
HAnimHumanoid43->setSites(HAnimSite1979);

HAnimSite* HAnimSite1980 = new HAnimSite();
HAnimSite1980->setUSE("hanim_r_humeral_medial_epicondyles_pt");
HAnimHumanoid43->setSites(HAnimSite1980);

HAnimSite* HAnimSite1981 = new HAnimSite();
HAnimSite1981->setUSE("hanim_r_olecranon_pt");
HAnimHumanoid43->setSites(HAnimSite1981);

HAnimSite* HAnimSite1982 = new HAnimSite();
HAnimSite1982->setUSE("hanim_r_radial_styloid_pt");
HAnimHumanoid43->setSites(HAnimSite1982);

HAnimSite* HAnimSite1983 = new HAnimSite();
HAnimSite1983->setUSE("hanim_r_radiale_pt");
HAnimHumanoid43->setSites(HAnimSite1983);

HAnimSite* HAnimSite1984 = new HAnimSite();
HAnimSite1984->setUSE("hanim_r_ulnar_styloid_pt");
HAnimHumanoid43->setSites(HAnimSite1984);

HAnimSite* HAnimSite1985 = new HAnimSite();
HAnimSite1985->setUSE("hanim_r_carpal_distal_phalanx_1_tip");
HAnimHumanoid43->setSites(HAnimSite1985);

HAnimSite* HAnimSite1986 = new HAnimSite();
HAnimSite1986->setUSE("hanim_r_metacarpal_phalanx_2_pt");
HAnimHumanoid43->setSites(HAnimSite1986);

HAnimSite* HAnimSite1987 = new HAnimSite();
HAnimSite1987->setUSE("hanim_r_carpal_distal_phalanx_2_tip");
HAnimHumanoid43->setSites(HAnimSite1987);

HAnimSite* HAnimSite1988 = new HAnimSite();
HAnimSite1988->setUSE("hanim_r_dactylion_pt");
HAnimHumanoid43->setSites(HAnimSite1988);

HAnimSite* HAnimSite1989 = new HAnimSite();
HAnimSite1989->setUSE("hanim_r_metacarpal_phalanx_3_pt");
HAnimHumanoid43->setSites(HAnimSite1989);

HAnimSite* HAnimSite1990 = new HAnimSite();
HAnimSite1990->setUSE("hanim_r_carpal_distal_phalanx_3_tip");
HAnimHumanoid43->setSites(HAnimSite1990);

HAnimSite* HAnimSite1991 = new HAnimSite();
HAnimSite1991->setUSE("hanim_r_metacarpal_phalanx_5_pt");
HAnimHumanoid43->setSites(HAnimSite1991);

HAnimSite* HAnimSite1992 = new HAnimSite();
HAnimSite1992->setUSE("hanim_r_carpal_distal_phalanx_4_tip");
HAnimHumanoid43->setSites(HAnimSite1992);

HAnimSite* HAnimSite1993 = new HAnimSite();
HAnimSite1993->setUSE("hanim_r_carpal_distal_phalanx_5_tip");
HAnimHumanoid43->setSites(HAnimSite1993);

Scene11->addChild(HAnimHumanoid43);

X3D0->setScene(Scene11);

X3D0->toXMLString();
}
