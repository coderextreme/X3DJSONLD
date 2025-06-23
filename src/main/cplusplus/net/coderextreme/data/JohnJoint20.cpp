#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("JohnJoint20.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("identifier"));
meta4.setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint20.x3d"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("description"));
meta5.setContent(CString("An attempt at a standard LOA-4 skeleton"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("h2.pl"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("20 Jan 2023"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("creator"));
meta8.setContent(CString("John Carlson"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("created"));
meta9.setContent(CString("9 November 2020"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("license"));
meta10.setContent(CString("../license.html"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
Transform& Transform12 =  Transform();
//DEF for markerfor XYZ axes
Shape& Shape13 =  Shape();
Shape13.setDEF(CString("AxisLinesShape"));
//RGB lines showing XYZ axes
IndexedLineSet& IndexedLineSet14 =  IndexedLineSet();
IndexedLineSet14.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet14.setColorPerVertex(False);
IndexedLineSet14.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate15 =  Coordinate();
Coordinate15.setPoint(new float[]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1}, 12);
IndexedLineSet14.setCoord(&Coordinate15);

CColor& Color16 =  CColor();
Color16.setColor(new float[]{1,0,0,0,0.6,0,0,0,1}, 9);
IndexedLineSet14.setColor(&Color16);

Shape13.setGeometry(&IndexedLineSet14);

Transform12.addChild(&Shape13);

Scene11.addChild(&Transform12);

Group& Group17 =  Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform& Transform18 =  Transform();
Transform& Transform19 =  Transform();
Transform19.setTranslation(new float[]{0,2,0});
Shape& Shape20 =  Shape();
Shape20.setDEF(CString("HAnimRootShape"));
Sphere& Sphere21 =  Sphere();
Sphere21.setRadius(0.02);
Shape20.setGeometry(&Sphere21);

Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDEF(CString("HAnimRootMaterial"));
Material23.setDiffuseColor(new float[]{0.8,0,0});
Material23.setTransparency(0.3);
Appearance22.addChild(&Material23);

Shape20.addChild(&Appearance22);

Transform19.addChild(&Shape20);

Transform18.addChild(&Transform19);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{0,2.1,0});
Shape& Shape25 =  Shape();
Shape25.setDEF(CString("HAnimJointShape"));
Sphere& Sphere26 =  Sphere();
Sphere26.setRadius(0.02);
Shape25.setGeometry(&Sphere26);

Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDEF(CString("HAnimJointMaterial"));
Material28.setDiffuseColor(new float[]{0,0,0.8});
Material28.setTransparency(0.3);
Appearance27.addChild(&Material28);

Shape25.addChild(&Appearance27);

Transform24.addChild(&Shape25);

Transform18.addChild(&Transform24);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{0,2.05,0});
Shape& Shape30 =  Shape();
Shape30.setDEF(CString("HAnimSegmentLine"));
LineSet& LineSet31 =  LineSet();
LineSet31.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA32 =  ColorRGBA();
ColorRGBA32.setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA32.setColor(new float[]{1,1,0,1,1,1,0,0.1}, 8);
LineSet31.addChild(&ColorRGBA32);

Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setPoint(new float[]{-0.05,0,0,0.05,0,0}, 6);
LineSet31.setCoord(Coordinate33);

Shape30.setGeometry(&LineSet31);

Transform29.addChild(&Shape30);

Transform18.addChild(&Transform29);

Transform& Transform34 =  Transform();
Transform34.setTranslation(new float[]{0,2.1,0});
Shape& Shape35 =  Shape();
Shape35.setDEF(CString("HAnimSiteShape"));
IndexedFaceSet& IndexedFaceSet36 =  IndexedFaceSet();
IndexedFaceSet36.setDEF(CString("DiamondIFS"));
IndexedFaceSet36.setCreaseAngle(0.5);
IndexedFaceSet36.setSolid(False);
IndexedFaceSet36.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
ColorRGBA& ColorRGBA37 =  ColorRGBA();
ColorRGBA37.setDEF(CString("HAnimSiteColorRGBA"));
ColorRGBA37.setColor(new float[]{1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1}, 24);
IndexedFaceSet36.addChild(&ColorRGBA37);

Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet36.setCoord(&Coordinate38);

Shape35.setGeometry(&IndexedFaceSet36);

Appearance& Appearance39 =  Appearance();
Material& Material40 =  Material();
Material40.setDiffuseColor(new float[]{1,1,0});
Material40.setTransparency(0.3);
Appearance39.addChild(&Material40);

Shape35.addChild(&Appearance39);

Transform34.addChild(&Shape35);

Transform18.addChild(&Transform34);

Group17.addChild(&Transform18);

Scene11.addChild(&Group17);

NavigationInfo& NavigationInfo41 =  NavigationInfo();
NavigationInfo41.setSpeed(1.5);
Scene11.addChild(&NavigationInfo41);

Viewpoint& Viewpoint42 =  Viewpoint();
Viewpoint42.setDescription(CString("default"));
Scene11.addChild(&Viewpoint42);

HAnimHumanoid& HAnimHumanoid43 =  HAnimHumanoid();
HAnimHumanoid43.X3DNode::setName(CString("HAnim"));
HAnimHumanoid43.setDEF(CString("hanim_HAnim"));
HAnimHumanoid43.setInfo(new CString[]{CString("humanoidVersion=2.0")}, 1);
HAnimHumanoid43.setVersion(CString("2.0"));
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
Shape& Shape44 =  Shape();
Shape44.setDEF(CString("SkinShape"));
IndexedFaceSet& IndexedFaceSet45 =  IndexedFaceSet();
IndexedFaceSet45.setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
IndexedFaceSet45.setCreaseAngle(3.1);
Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setDEF(CString("TheSkinCoord"));
Coordinate46.setPoint(new float[]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
IndexedFaceSet45.setCoord(&Coordinate46);

CColor& Color47 =  CColor();
Color47.setColor(new float[]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1}, 2079);
IndexedFaceSet45.setColor(&Color47);

Shape44.setGeometry(&IndexedFaceSet45);

Appearance& Appearance48 =  Appearance();
Appearance48.setDEF(CString("SkinAppearance"));
ImageTexture& ImageTexture49 =  ImageTexture();
ImageTexture49.setDEF(CString("zBlueSpiralBkg2"));
ImageTexture49.setUrl(new CString[]{CString("../resources/images/zBlueSpiralBkg2.gif"), CString("../data/zBlueSpiralBkg2.gif"), CString("zBlueSpiralBkg2.gif"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 4);
Appearance48.addChild(&ImageTexture49);

Material& Material50 =  Material();
Material50.setDEF(CString("SkinMaterial"));
Material50.setAmbientIntensity(0.6);
Material50.setDiffuseColor(new float[]{1,1,1});
Material50.setShininess(0.6);
Material50.setTransparency(0.2);
Appearance48.addChild(&Material50);

Shape44.addChild(&Appearance48);

HAnimHumanoid43.setSkin(&Shape44);

Coordinate& Coordinate51 =  Coordinate();
Coordinate51.setUSE(CString("TheSkinCoord"));
HAnimHumanoid43.setSkinCoord(&Coordinate51);

HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.X3DNode::setName(CString("humanoid_root"));
HAnimJoint52.setDEF(CString("hanim_humanoid_root"));
HAnimJoint52.setCenter(new float[]{0,0.824,0.0277});
HAnimJoint52.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint52.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment53 =  HAnimSegment();
HAnimSegment53.X3DNode::setName(CString("sacrum"));
HAnimSegment53.setDEF(CString("hanim_sacrum"));
HAnimDisplacer& HAnimDisplacer54 =  HAnimDisplacer();
HAnimDisplacer54.X3DNode::setName(CString("sacrum_feature"));
HAnimDisplacer54.setCoordIndex(new int32_t[]{0}, 1);
HAnimDisplacer54.setDisplacements(new float[]{0,0,0}, 3);
HAnimSegment53.setDisplacers(HAnimDisplacer54);

HAnimDisplacer& HAnimDisplacer55 =  HAnimDisplacer();
HAnimDisplacer55.X3DNode::setName(CString("sacrum_config"));
HAnimDisplacer55.setCoordIndex(new int32_t[]{0}, 1);
HAnimDisplacer55.setDisplacements(new float[]{0,0,0}, 3);
HAnimSegment53.setDisplacers(HAnimDisplacer55);

Transform& Transform56 =  Transform();
//Empty Transform
Transform& Transform57 =  Transform();
//Empty Transform
Shape& Shape58 =  Shape();
Shape58.setUSE(CString("HAnimJointShape"));
Transform57.addChild(&Shape58);

Transform56.addChild(&Transform57);

HAnimSegment53.addChild(&Transform56);

Shape& Shape59 =  Shape();
LineSet& LineSet60 =  LineSet();
LineSet60.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate61 =  Coordinate();
Coordinate61.setPoint(new float[]{0,0.824,0.0277,0,0.9149,0.0016}, 6);
LineSet60.setCoord(Coordinate61);

//from humanoid_root to sacroiliac vertices 2
ColorRGBA& ColorRGBA62 =  ColorRGBA();
ColorRGBA62.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet60.addChild(&ColorRGBA62);

Shape59.setGeometry(&LineSet60);

HAnimSegment53.addChild(&Shape59);

HAnimSite& HAnimSite63 =  HAnimSite();
HAnimSite63.X3DNode::setName(CString("buttocks_standing_wall_contact_point_pt"));
HAnimSite63.setDEF(CString("hanim_buttocks_standing_wall_contact_point_pt"));
HAnimSite63.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor64 =  TouchSensor();
TouchSensor64.setDescription(CString("HAnimSite buttocks_standing_wall_contact_point_pt"));
HAnimSite63.addChild(&TouchSensor64);

Shape& Shape65 =  Shape();
Shape65.setUSE(CString("HAnimSiteShape"));
HAnimSite63.addChild(&Shape65);

HAnimSegment53.addChild(&HAnimSite63);

HAnimSite& HAnimSite66 =  HAnimSite();
HAnimSite66.X3DNode::setName(CString("crotch_pt"));
HAnimSite66.setDEF(CString("hanim_crotch_pt"));
HAnimSite66.setTranslation(new float[]{0.0034,0.8266,0.0257});
TouchSensor& TouchSensor67 =  TouchSensor();
TouchSensor67.setDescription(CString("HAnimSite crotch_pt"));
HAnimSite66.addChild(&TouchSensor67);

Shape& Shape68 =  Shape();
Shape68.setUSE(CString("HAnimSiteShape"));
HAnimSite66.addChild(&Shape68);

HAnimSegment53.addChild(&HAnimSite66);

HAnimSite& HAnimSite69 =  HAnimSite();
HAnimSite69.X3DNode::setName(CString("l_asis_pt"));
HAnimSite69.setDEF(CString("hanim_l_asis_pt"));
HAnimSite69.setTranslation(new float[]{0.0925,0.9983,0.1052});
TouchSensor& TouchSensor70 =  TouchSensor();
TouchSensor70.setDescription(CString("HAnimSite l_asis_pt"));
HAnimSite69.addChild(&TouchSensor70);

Shape& Shape71 =  Shape();
Shape71.setUSE(CString("HAnimSiteShape"));
HAnimSite69.addChild(&Shape71);

HAnimSegment53.addChild(&HAnimSite69);

HAnimSite& HAnimSite72 =  HAnimSite();
HAnimSite72.X3DNode::setName(CString("l_iliocristale_pt"));
HAnimSite72.setDEF(CString("hanim_l_iliocristale_pt"));
HAnimSite72.setTranslation(new float[]{0.1612,1.0537,0.0008});
TouchSensor& TouchSensor73 =  TouchSensor();
TouchSensor73.setDescription(CString("HAnimSite l_iliocristale_pt"));
HAnimSite72.addChild(&TouchSensor73);

Shape& Shape74 =  Shape();
Shape74.setUSE(CString("HAnimSiteShape"));
HAnimSite72.addChild(&Shape74);

HAnimSegment53.addChild(&HAnimSite72);

HAnimSite& HAnimSite75 =  HAnimSite();
HAnimSite75.X3DNode::setName(CString("l_psis_pt"));
HAnimSite75.setDEF(CString("hanim_l_psis_pt"));
HAnimSite75.setTranslation(new float[]{0.0774,1.019,-0.1151});
TouchSensor& TouchSensor76 =  TouchSensor();
TouchSensor76.setDescription(CString("HAnimSite l_psis_pt"));
HAnimSite75.addChild(&TouchSensor76);

Shape& Shape77 =  Shape();
Shape77.setUSE(CString("HAnimSiteShape"));
HAnimSite75.addChild(&Shape77);

HAnimSegment53.addChild(&HAnimSite75);

HAnimSite& HAnimSite78 =  HAnimSite();
HAnimSite78.X3DNode::setName(CString("l_trochanterion_pt"));
HAnimSite78.setDEF(CString("hanim_l_trochanterion_pt"));
HAnimSite78.setTranslation(new float[]{0.1677,0.8336,0.0303});
TouchSensor& TouchSensor79 =  TouchSensor();
TouchSensor79.setDescription(CString("HAnimSite l_trochanterion_pt"));
HAnimSite78.addChild(&TouchSensor79);

Shape& Shape80 =  Shape();
Shape80.setUSE(CString("HAnimSiteShape"));
HAnimSite78.addChild(&Shape80);

HAnimSegment53.addChild(&HAnimSite78);

HAnimSite& HAnimSite81 =  HAnimSite();
HAnimSite81.X3DNode::setName(CString("r_asis_pt"));
HAnimSite81.setDEF(CString("hanim_r_asis_pt"));
HAnimSite81.setTranslation(new float[]{-0.0887,1.0021,0.1112});
TouchSensor& TouchSensor82 =  TouchSensor();
TouchSensor82.setDescription(CString("HAnimSite r_asis_pt"));
HAnimSite81.addChild(&TouchSensor82);

Shape& Shape83 =  Shape();
Shape83.setUSE(CString("HAnimSiteShape"));
HAnimSite81.addChild(&Shape83);

HAnimSegment53.addChild(&HAnimSite81);

HAnimSite& HAnimSite84 =  HAnimSite();
HAnimSite84.X3DNode::setName(CString("r_iliocristale_pt"));
HAnimSite84.setDEF(CString("hanim_r_iliocristale_pt"));
HAnimSite84.setTranslation(new float[]{-0.1525,1.0628,0.0035});
TouchSensor& TouchSensor85 =  TouchSensor();
TouchSensor85.setDescription(CString("HAnimSite r_iliocristale_pt"));
HAnimSite84.addChild(&TouchSensor85);

Shape& Shape86 =  Shape();
Shape86.setUSE(CString("HAnimSiteShape"));
HAnimSite84.addChild(&Shape86);

HAnimSegment53.addChild(&HAnimSite84);

HAnimSite& HAnimSite87 =  HAnimSite();
HAnimSite87.X3DNode::setName(CString("r_psis_pt"));
HAnimSite87.setDEF(CString("hanim_r_psis_pt"));
HAnimSite87.setTranslation(new float[]{-0.0716,1.019,-0.1138});
TouchSensor& TouchSensor88 =  TouchSensor();
TouchSensor88.setDescription(CString("HAnimSite r_psis_pt"));
HAnimSite87.addChild(&TouchSensor88);

Shape& Shape89 =  Shape();
Shape89.setUSE(CString("HAnimSiteShape"));
HAnimSite87.addChild(&Shape89);

HAnimSegment53.addChild(&HAnimSite87);

HAnimSite& HAnimSite90 =  HAnimSite();
HAnimSite90.X3DNode::setName(CString("r_trochanterion_pt"));
HAnimSite90.setDEF(CString("hanim_r_trochanterion_pt"));
HAnimSite90.setTranslation(new float[]{-0.1689,0.8419,0.0352});
TouchSensor& TouchSensor91 =  TouchSensor();
TouchSensor91.setDescription(CString("HAnimSite r_trochanterion_pt"));
HAnimSite90.addChild(&TouchSensor91);

Shape& Shape92 =  Shape();
Shape92.setUSE(CString("HAnimSiteShape"));
HAnimSite90.addChild(&Shape92);

HAnimSegment53.addChild(&HAnimSite90);

Shape& Shape93 =  Shape();
LineSet& LineSet94 =  LineSet();
LineSet94.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate95 =  Coordinate();
Coordinate95.setPoint(new float[]{0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet94.setCoord(Coordinate95);

//from humanoid_root to vl5 vertices 2
ColorRGBA& ColorRGBA96 =  ColorRGBA();
ColorRGBA96.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet94.addChild(&ColorRGBA96);

Shape93.setGeometry(&LineSet94);

HAnimSegment53.addChild(&Shape93);

HAnimSite& HAnimSite97 =  HAnimSite();
HAnimSite97.X3DNode::setName(CString("navel_pt"));
HAnimSite97.setDEF(CString("hanim_navel_pt"));
HAnimSite97.setTranslation(new float[]{0.0069,1.0966,0.1017});
TouchSensor& TouchSensor98 =  TouchSensor();
TouchSensor98.setDescription(CString("HAnimSite navel_pt"));
HAnimSite97.addChild(&TouchSensor98);

Shape& Shape99 =  Shape();
Shape99.setUSE(CString("HAnimSiteShape"));
HAnimSite97.addChild(&Shape99);

HAnimSegment53.addChild(&HAnimSite97);

HAnimSite& HAnimSite100 =  HAnimSite();
HAnimSite100.X3DNode::setName(CString("waist_preferred_anterior_pt"));
HAnimSite100.setDEF(CString("hanim_waist_preferred_anterior_pt"));
HAnimSite100.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor101 =  TouchSensor();
TouchSensor101.setDescription(CString("HAnimSite waist_preferred_anterior_pt"));
HAnimSite100.addChild(&TouchSensor101);

Shape& Shape102 =  Shape();
Shape102.setUSE(CString("HAnimSiteShape"));
HAnimSite100.addChild(&Shape102);

HAnimSegment53.addChild(&HAnimSite100);

HAnimSite& HAnimSite103 =  HAnimSite();
HAnimSite103.X3DNode::setName(CString("waist_preferred_posterior_pt"));
HAnimSite103.setDEF(CString("hanim_waist_preferred_posterior_pt"));
HAnimSite103.setTranslation(new float[]{0.29,1.0915,-0.1091});
TouchSensor& TouchSensor104 =  TouchSensor();
TouchSensor104.setDescription(CString("HAnimSite waist_preferred_posterior_pt"));
HAnimSite103.addChild(&TouchSensor104);

Shape& Shape105 =  Shape();
Shape105.setUSE(CString("HAnimSiteShape"));
HAnimSite103.addChild(&Shape105);

HAnimSegment53.addChild(&HAnimSite103);

HAnimJoint52.addChildren(&HAnimSegment53);

HAnimJoint& HAnimJoint106 =  HAnimJoint();
HAnimJoint106.X3DNode::setName(CString("sacroiliac"));
HAnimJoint106.setDEF(CString("hanim_sacroiliac"));
HAnimJoint106.setCenter(new float[]{0,0.9149,0.0016});
HAnimJoint106.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint106.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment107 =  HAnimSegment();
HAnimSegment107.X3DNode::setName(CString("pelvis"));
HAnimSegment107.setDEF(CString("hanim_pelvis"));
Transform& Transform108 =  Transform();
//Empty Transform
Transform& Transform109 =  Transform();
//Empty Transform
Shape& Shape110 =  Shape();
Shape110.setUSE(CString("HAnimJointShape"));
Transform109.addChild(&Shape110);

Transform108.addChild(&Transform109);

HAnimSegment107.addChild(&Transform108);

Shape& Shape111 =  Shape();
LineSet& LineSet112 =  LineSet();
LineSet112.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate113 =  Coordinate();
Coordinate113.setPoint(new float[]{0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet112.setCoord(Coordinate113);

//from sacroiliac to l_hip vertices 2
ColorRGBA& ColorRGBA114 =  ColorRGBA();
ColorRGBA114.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet112.addChild(&ColorRGBA114);

Shape111.setGeometry(&LineSet112);

HAnimSegment107.addChild(&Shape111);

HAnimSite& HAnimSite115 =  HAnimSite();
HAnimSite115.X3DNode::setName(CString("l_femoral_lateral_epicondyles_pt"));
HAnimSite115.setDEF(CString("hanim_l_femoral_lateral_epicondyles_pt"));
HAnimSite115.setTranslation(new float[]{0.1598,0.4967,0.0297});
TouchSensor& TouchSensor116 =  TouchSensor();
TouchSensor116.setDescription(CString("HAnimSite l_femoral_lateral_epicondyles_pt"));
HAnimSite115.addChild(&TouchSensor116);

Shape& Shape117 =  Shape();
Shape117.setUSE(CString("HAnimSiteShape"));
HAnimSite115.addChild(&Shape117);

HAnimSegment107.addChild(&HAnimSite115);

HAnimSite& HAnimSite118 =  HAnimSite();
HAnimSite118.X3DNode::setName(CString("l_femoral_medial_epicondyles_pt"));
HAnimSite118.setDEF(CString("hanim_l_femoral_medial_epicondyles_pt"));
HAnimSite118.setTranslation(new float[]{0.0398,0.4946,0.0303});
TouchSensor& TouchSensor119 =  TouchSensor();
TouchSensor119.setDescription(CString("HAnimSite l_femoral_medial_epicondyles_pt"));
HAnimSite118.addChild(&TouchSensor119);

Shape& Shape120 =  Shape();
Shape120.setUSE(CString("HAnimSiteShape"));
HAnimSite118.addChild(&Shape120);

HAnimSegment107.addChild(&HAnimSite118);

HAnimSite& HAnimSite121 =  HAnimSite();
HAnimSite121.X3DNode::setName(CString("l_knee_crease_pt"));
HAnimSite121.setDEF(CString("hanim_l_knee_crease_pt"));
HAnimSite121.setTranslation(new float[]{0.0993,0.4881,-0.0309});
TouchSensor& TouchSensor122 =  TouchSensor();
TouchSensor122.setDescription(CString("HAnimSite l_knee_crease_pt"));
HAnimSite121.addChild(&TouchSensor122);

Shape& Shape123 =  Shape();
Shape123.setUSE(CString("HAnimSiteShape"));
HAnimSite121.addChild(&Shape123);

HAnimSegment107.addChild(&HAnimSite121);

HAnimSite& HAnimSite124 =  HAnimSite();
HAnimSite124.X3DNode::setName(CString("l_suprapatella_pt"));
HAnimSite124.setDEF(CString("hanim_l_suprapatella_pt"));
HAnimSite124.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor125 =  TouchSensor();
TouchSensor125.setDescription(CString("HAnimSite l_suprapatella_pt"));
HAnimSite124.addChild(&TouchSensor125);

Shape& Shape126 =  Shape();
Shape126.setUSE(CString("HAnimSiteShape"));
HAnimSite124.addChild(&Shape126);

HAnimSegment107.addChild(&HAnimSite124);

Shape& Shape127 =  Shape();
LineSet& LineSet128 =  LineSet();
LineSet128.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate129 =  Coordinate();
Coordinate129.setPoint(new float[]{0,0.9149,0.0016,-0.095,0.9171,0.0029}, 6);
LineSet128.setCoord(Coordinate129);

//from sacroiliac to r_hip vertices 2
ColorRGBA& ColorRGBA130 =  ColorRGBA();
ColorRGBA130.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet128.addChild(&ColorRGBA130);

Shape127.setGeometry(&LineSet128);

HAnimSegment107.addChild(&Shape127);

HAnimSite& HAnimSite131 =  HAnimSite();
HAnimSite131.X3DNode::setName(CString("r_femoral_lateral_epicondyles_pt"));
HAnimSite131.setDEF(CString("hanim_r_femoral_lateral_epicondyles_pt"));
HAnimSite131.setTranslation(new float[]{-0.1421,0.4992,0.031});
TouchSensor& TouchSensor132 =  TouchSensor();
TouchSensor132.setDescription(CString("HAnimSite r_femoral_lateral_epicondyles_pt"));
HAnimSite131.addChild(&TouchSensor132);

Shape& Shape133 =  Shape();
Shape133.setUSE(CString("HAnimSiteShape"));
HAnimSite131.addChild(&Shape133);

HAnimSegment107.addChild(&HAnimSite131);

HAnimSite& HAnimSite134 =  HAnimSite();
HAnimSite134.X3DNode::setName(CString("r_femoral_medial_epicondyles_pt"));
HAnimSite134.setDEF(CString("hanim_r_femoral_medial_epicondyles_pt"));
HAnimSite134.setTranslation(new float[]{-0.0221,0.5014,0.0289});
TouchSensor& TouchSensor135 =  TouchSensor();
TouchSensor135.setDescription(CString("HAnimSite r_femoral_medial_epicondyles_pt"));
HAnimSite134.addChild(&TouchSensor135);

Shape& Shape136 =  Shape();
Shape136.setUSE(CString("HAnimSiteShape"));
HAnimSite134.addChild(&Shape136);

HAnimSegment107.addChild(&HAnimSite134);

HAnimSite& HAnimSite137 =  HAnimSite();
HAnimSite137.X3DNode::setName(CString("r_knee_crease_pt"));
HAnimSite137.setDEF(CString("hanim_r_knee_crease_pt"));
HAnimSite137.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
TouchSensor& TouchSensor138 =  TouchSensor();
TouchSensor138.setDescription(CString("HAnimSite r_knee_crease_pt"));
HAnimSite137.addChild(&TouchSensor138);

Shape& Shape139 =  Shape();
Shape139.setUSE(CString("HAnimSiteShape"));
HAnimSite137.addChild(&Shape139);

HAnimSegment107.addChild(&HAnimSite137);

HAnimSite& HAnimSite140 =  HAnimSite();
HAnimSite140.X3DNode::setName(CString("r_suprapatella_pt"));
HAnimSite140.setDEF(CString("hanim_r_suprapatella_pt"));
HAnimSite140.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor141 =  TouchSensor();
TouchSensor141.setDescription(CString("HAnimSite r_suprapatella_pt"));
HAnimSite140.addChild(&TouchSensor141);

Shape& Shape142 =  Shape();
Shape142.setUSE(CString("HAnimSiteShape"));
HAnimSite140.addChild(&Shape142);

HAnimSegment107.addChild(&HAnimSite140);

HAnimJoint106.addChildren(&HAnimSegment107);

HAnimJoint& HAnimJoint143 =  HAnimJoint();
HAnimJoint143.X3DNode::setName(CString("l_hip"));
HAnimJoint143.setDEF(CString("hanim_l_hip"));
HAnimJoint143.setCenter(new float[]{0.0961,0.9124,-0.0001});
HAnimJoint143.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint143.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment144 =  HAnimSegment();
HAnimSegment144.X3DNode::setName(CString("l_thigh"));
HAnimSegment144.setDEF(CString("hanim_l_thigh"));
Transform& Transform145 =  Transform();
//Empty Transform
Transform& Transform146 =  Transform();
//Empty Transform
Shape& Shape147 =  Shape();
Shape147.setUSE(CString("HAnimJointShape"));
Transform146.addChild(&Shape147);

Transform145.addChild(&Transform146);

HAnimSegment144.addChild(&Transform145);

Shape& Shape148 =  Shape();
LineSet& LineSet149 =  LineSet();
LineSet149.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate150 =  Coordinate();
Coordinate150.setPoint(new float[]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
LineSet149.setCoord(Coordinate150);

//from l_hip to l_knee vertices 2
ColorRGBA& ColorRGBA151 =  ColorRGBA();
ColorRGBA151.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet149.addChild(&ColorRGBA151);

Shape148.setGeometry(&LineSet149);

HAnimSegment144.addChild(&Shape148);

HAnimSite& HAnimSite152 =  HAnimSite();
HAnimSite152.X3DNode::setName(CString("l_lateral_malleolus_pt"));
HAnimSite152.setDEF(CString("hanim_l_lateral_malleolus_pt"));
HAnimSite152.setTranslation(new float[]{0.1308,0.0597,-0.1032});
TouchSensor& TouchSensor153 =  TouchSensor();
TouchSensor153.setDescription(CString("HAnimSite l_lateral_malleolus_pt"));
HAnimSite152.addChild(&TouchSensor153);

Shape& Shape154 =  Shape();
Shape154.setUSE(CString("HAnimSiteShape"));
HAnimSite152.addChild(&Shape154);

HAnimSegment144.addChild(&HAnimSite152);

HAnimSite& HAnimSite155 =  HAnimSite();
HAnimSite155.X3DNode::setName(CString("l_medial_malleolus_pt"));
HAnimSite155.setDEF(CString("hanim_l_medial_malleolus_pt"));
HAnimSite155.setTranslation(new float[]{0.089,0.0716,-0.0881});
TouchSensor& TouchSensor156 =  TouchSensor();
TouchSensor156.setDescription(CString("HAnimSite l_medial_malleolus_pt"));
HAnimSite155.addChild(&TouchSensor156);

Shape& Shape157 =  Shape();
Shape157.setUSE(CString("HAnimSiteShape"));
HAnimSite155.addChild(&Shape157);

HAnimSegment144.addChild(&HAnimSite155);

HAnimSite& HAnimSite158 =  HAnimSite();
HAnimSite158.X3DNode::setName(CString("l_tibiale_pt"));
HAnimSite158.setDEF(CString("hanim_l_tibiale_pt"));
HAnimSite158.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor159 =  TouchSensor();
TouchSensor159.setDescription(CString("HAnimSite l_tibiale_pt"));
HAnimSite158.addChild(&TouchSensor159);

Shape& Shape160 =  Shape();
Shape160.setUSE(CString("HAnimSiteShape"));
HAnimSite158.addChild(&Shape160);

HAnimSegment144.addChild(&HAnimSite158);

HAnimJoint143.addChildren(&HAnimSegment144);

HAnimJoint& HAnimJoint161 =  HAnimJoint();
HAnimJoint161.X3DNode::setName(CString("l_knee"));
HAnimJoint161.setDEF(CString("hanim_l_knee"));
HAnimJoint161.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimJoint161.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint161.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment162 =  HAnimSegment();
HAnimSegment162.X3DNode::setName(CString("l_calf"));
HAnimSegment162.setDEF(CString("hanim_l_calf"));
Transform& Transform163 =  Transform();
//Empty Transform
Transform& Transform164 =  Transform();
//Empty Transform
Shape& Shape165 =  Shape();
Shape165.setUSE(CString("HAnimJointShape"));
Transform164.addChild(&Shape165);

Transform163.addChild(&Transform164);

HAnimSegment162.addChild(&Transform163);

Shape& Shape166 =  Shape();
LineSet& LineSet167 =  LineSet();
LineSet167.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate168 =  Coordinate();
Coordinate168.setPoint(new float[]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet167.setCoord(Coordinate168);

//from l_knee to l_talocrural vertices 2
ColorRGBA& ColorRGBA169 =  ColorRGBA();
ColorRGBA169.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet167.addChild(&ColorRGBA169);

Shape166.setGeometry(&LineSet167);

HAnimSegment162.addChild(&Shape166);

HAnimSite& HAnimSite170 =  HAnimSite();
HAnimSite170.X3DNode::setName(CString("l_calcaneus_posterior_pt"));
HAnimSite170.setDEF(CString("hanim_l_calcaneus_posterior_pt"));
HAnimSite170.setTranslation(new float[]{0.0974,0.0259,-0.1171});
TouchSensor& TouchSensor171 =  TouchSensor();
TouchSensor171.setDescription(CString("HAnimSite l_calcaneus_posterior_pt"));
HAnimSite170.addChild(&TouchSensor171);

Shape& Shape172 =  Shape();
Shape172.setUSE(CString("HAnimSiteShape"));
HAnimSite170.addChild(&Shape172);

HAnimSegment162.addChild(&HAnimSite170);

HAnimSite& HAnimSite173 =  HAnimSite();
HAnimSite173.X3DNode::setName(CString("l_sphyrion_pt"));
HAnimSite173.setDEF(CString("hanim_l_sphyrion_pt"));
HAnimSite173.setTranslation(new float[]{0.089,0.0575,-0.0943});
TouchSensor& TouchSensor174 =  TouchSensor();
TouchSensor174.setDescription(CString("HAnimSite l_sphyrion_pt"));
HAnimSite173.addChild(&TouchSensor174);

Shape& Shape175 =  Shape();
Shape175.setUSE(CString("HAnimSiteShape"));
HAnimSite173.addChild(&Shape175);

HAnimSegment162.addChild(&HAnimSite173);

HAnimJoint161.addChildren(&HAnimSegment162);

HAnimJoint& HAnimJoint176 =  HAnimJoint();
HAnimJoint176.X3DNode::setName(CString("l_talocrural"));
HAnimJoint176.setDEF(CString("hanim_l_talocrural"));
HAnimJoint176.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimJoint176.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint176.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment177 =  HAnimSegment();
HAnimSegment177.X3DNode::setName(CString("l_talus"));
HAnimSegment177.setDEF(CString("hanim_l_talus"));
Transform& Transform178 =  Transform();
Transform178.setScale(new float[]{0.15,0.15,0.15});
Transform178.setTranslation(new float[]{0.08,0.06,-0.025});
Transform178.setRotation(new float[]{1,0,0,-1.57});
//Transform left foot
Transform& Transform179 =  Transform();
//Empty Transform left foot
Shape& Shape180 =  Shape();
Shape180.setUSE(CString("HAnimJointShape"));
Transform179.addChild(&Shape180);

Transform178.addChild(&Transform179);

HAnimSegment177.addChild(&Transform178);

Shape& Shape181 =  Shape();
LineSet& LineSet182 =  LineSet();
LineSet182.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate183 =  Coordinate();
Coordinate183.setPoint(new float[]{0.1101,0.0656,-0.0736,0,1,0}, 6);
LineSet182.setCoord(Coordinate183);

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA& ColorRGBA184 =  ColorRGBA();
ColorRGBA184.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet182.addChild(&ColorRGBA184);

Shape181.setGeometry(&LineSet182);

HAnimSegment177.addChild(&Shape181);

Shape& Shape185 =  Shape();
LineSet& LineSet186 =  LineSet();
LineSet186.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate187 =  Coordinate();
Coordinate187.setPoint(new float[]{0.1101,0.0656,-0.0736,0,1,0}, 6);
LineSet186.setCoord(Coordinate187);

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA& ColorRGBA188 =  ColorRGBA();
ColorRGBA188.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet186.addChild(&ColorRGBA188);

Shape185.setGeometry(&LineSet186);

HAnimSegment177.addChild(&Shape185);

HAnimJoint176.addChildren(&HAnimSegment177);

HAnimJoint& HAnimJoint189 =  HAnimJoint();
HAnimJoint189.X3DNode::setName(CString("l_talocalcaneonavicular"));
HAnimJoint189.setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint189.setCenter(new float[]{0,1,0});
HAnimJoint189.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint189.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment190 =  HAnimSegment();
HAnimSegment190.X3DNode::setName(CString("l_navicular"));
HAnimSegment190.setDEF(CString("hanim_l_navicular"));
Transform& Transform191 =  Transform();
//Empty Transform
Transform& Transform192 =  Transform();
//Empty Transform
Shape& Shape193 =  Shape();
Shape193.setUSE(CString("HAnimJointShape"));
Transform192.addChild(&Shape193);

Transform191.addChild(&Transform192);

HAnimSegment190.addChild(&Transform191);

Shape& Shape194 =  Shape();
LineSet& LineSet195 =  LineSet();
LineSet195.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate196 =  Coordinate();
Coordinate196.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet195.setCoord(Coordinate196);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA& ColorRGBA197 =  ColorRGBA();
ColorRGBA197.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet195.addChild(&ColorRGBA197);

Shape194.setGeometry(&LineSet195);

HAnimSegment190.addChild(&Shape194);

Shape& Shape198 =  Shape();
LineSet& LineSet199 =  LineSet();
LineSet199.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate200 =  Coordinate();
Coordinate200.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet199.setCoord(Coordinate200);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA& ColorRGBA201 =  ColorRGBA();
ColorRGBA201.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet199.addChild(&ColorRGBA201);

Shape198.setGeometry(&LineSet199);

HAnimSegment190.addChild(&Shape198);

Shape& Shape202 =  Shape();
LineSet& LineSet203 =  LineSet();
LineSet203.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate204 =  Coordinate();
Coordinate204.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet203.setCoord(Coordinate204);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA& ColorRGBA205 =  ColorRGBA();
ColorRGBA205.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet203.addChild(&ColorRGBA205);

Shape202.setGeometry(&LineSet203);

HAnimSegment190.addChild(&Shape202);

HAnimJoint189.addChildren(&HAnimSegment190);

HAnimJoint& HAnimJoint206 =  HAnimJoint();
HAnimJoint206.X3DNode::setName(CString("l_cuneonavicular_1"));
HAnimJoint206.setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint206.setCenter(new float[]{0,1,0});
HAnimJoint206.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint206.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment207 =  HAnimSegment();
HAnimSegment207.X3DNode::setName(CString("l_cuneiform_1"));
HAnimSegment207.setDEF(CString("hanim_l_cuneiform_1"));
Transform& Transform208 =  Transform();
//Empty Transform
Transform& Transform209 =  Transform();
//Empty Transform
Shape& Shape210 =  Shape();
Shape210.setUSE(CString("HAnimJointShape"));
Transform209.addChild(&Shape210);

Transform208.addChild(&Transform209);

HAnimSegment207.addChild(&Transform208);

Shape& Shape211 =  Shape();
LineSet& LineSet212 =  LineSet();
LineSet212.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate213 =  Coordinate();
Coordinate213.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet212.setCoord(Coordinate213);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA& ColorRGBA214 =  ColorRGBA();
ColorRGBA214.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet212.addChild(&ColorRGBA214);

Shape211.setGeometry(&LineSet212);

HAnimSegment207.addChild(&Shape211);

HAnimJoint206.addChildren(&HAnimSegment207);

HAnimJoint& HAnimJoint215 =  HAnimJoint();
HAnimJoint215.X3DNode::setName(CString("l_tarsometatarsal_1"));
HAnimJoint215.setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint215.setCenter(new float[]{0,1,0});
HAnimJoint215.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint215.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment216 =  HAnimSegment();
HAnimSegment216.X3DNode::setName(CString("l_metatarsal_1"));
HAnimSegment216.setDEF(CString("hanim_l_metatarsal_1"));
Transform& Transform217 =  Transform();
//Empty Transform
Transform& Transform218 =  Transform();
//Empty Transform
Shape& Shape219 =  Shape();
Shape219.setUSE(CString("HAnimJointShape"));
Transform218.addChild(&Shape219);

Transform217.addChild(&Transform218);

HAnimSegment216.addChild(&Transform217);

Shape& Shape220 =  Shape();
LineSet& LineSet221 =  LineSet();
LineSet221.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate222 =  Coordinate();
Coordinate222.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet221.setCoord(Coordinate222);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA& ColorRGBA223 =  ColorRGBA();
ColorRGBA223.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet221.addChild(&ColorRGBA223);

Shape220.setGeometry(&LineSet221);

HAnimSegment216.addChild(&Shape220);

HAnimSite& HAnimSite224 =  HAnimSite();
HAnimSite224.X3DNode::setName(CString("l_metatarsal_phalanx_1_pt"));
HAnimSite224.setDEF(CString("hanim_l_metatarsal_phalanx_1_pt"));
HAnimSite224.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor225 =  TouchSensor();
TouchSensor225.setDescription(CString("HAnimSite l_metatarsal_phalanx_1_pt"));
HAnimSite224.addChild(&TouchSensor225);

Shape& Shape226 =  Shape();
Shape226.setUSE(CString("HAnimSiteShape"));
HAnimSite224.addChild(&Shape226);

HAnimSegment216.addChild(&HAnimSite224);

HAnimJoint215.addChildren(&HAnimSegment216);

HAnimJoint& HAnimJoint227 =  HAnimJoint();
HAnimJoint227.X3DNode::setName(CString("l_metatarsophalangeal_1"));
HAnimJoint227.setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint227.setCenter(new float[]{0,1,0});
HAnimJoint227.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint227.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment228 =  HAnimSegment();
HAnimSegment228.X3DNode::setName(CString("l_tarsal_proximal_phalanx_1"));
HAnimSegment228.setDEF(CString("hanim_l_tarsal_proximal_phalanx_1"));
Transform& Transform229 =  Transform();
//Empty Transform
Transform& Transform230 =  Transform();
//Empty Transform
Shape& Shape231 =  Shape();
Shape231.setUSE(CString("HAnimJointShape"));
Transform230.addChild(&Shape231);

Transform229.addChild(&Transform230);

HAnimSegment228.addChild(&Transform229);

Shape& Shape232 =  Shape();
LineSet& LineSet233 =  LineSet();
LineSet233.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate234 =  Coordinate();
Coordinate234.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet233.setCoord(Coordinate234);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA235 =  ColorRGBA();
ColorRGBA235.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet233.addChild(&ColorRGBA235);

Shape232.setGeometry(&LineSet233);

HAnimSegment228.addChild(&Shape232);

HAnimSite& HAnimSite236 =  HAnimSite();
HAnimSite236.X3DNode::setName(CString("l_tarsal_distal_phalanx_1_tip"));
HAnimSite236.setDEF(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimSite236.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor237 =  TouchSensor();
TouchSensor237.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_1_tip"));
HAnimSite236.addChild(&TouchSensor237);

Shape& Shape238 =  Shape();
Shape238.setUSE(CString("HAnimSiteShape"));
HAnimSite236.addChild(&Shape238);

HAnimSegment228.addChild(&HAnimSite236);

HAnimJoint227.addChildren(&HAnimSegment228);

HAnimJoint& HAnimJoint239 =  HAnimJoint();
HAnimJoint239.X3DNode::setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint239.setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint239.setCenter(new float[]{0,1,0});
HAnimJoint239.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint239.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint227.addChildren(&HAnimJoint239);

HAnimJoint215.addChildren(&HAnimJoint227);

HAnimJoint206.addChildren(&HAnimJoint215);

HAnimJoint189.addChildren(&HAnimJoint206);

HAnimJoint& HAnimJoint240 =  HAnimJoint();
HAnimJoint240.X3DNode::setName(CString("l_cuneonavicular_2"));
HAnimJoint240.setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint240.setCenter(new float[]{0,1,0});
HAnimJoint240.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint240.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment241 =  HAnimSegment();
HAnimSegment241.X3DNode::setName(CString("l_cuneiform_2"));
HAnimSegment241.setDEF(CString("hanim_l_cuneiform_2"));
Transform& Transform242 =  Transform();
//Empty Transform
Transform& Transform243 =  Transform();
//Empty Transform
Shape& Shape244 =  Shape();
Shape244.setUSE(CString("HAnimJointShape"));
Transform243.addChild(&Shape244);

Transform242.addChild(&Transform243);

HAnimSegment241.addChild(&Transform242);

Shape& Shape245 =  Shape();
LineSet& LineSet246 =  LineSet();
LineSet246.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate247 =  Coordinate();
Coordinate247.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet246.setCoord(Coordinate247);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA248 =  ColorRGBA();
ColorRGBA248.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet246.addChild(&ColorRGBA248);

Shape245.setGeometry(&LineSet246);

HAnimSegment241.addChild(&Shape245);

HAnimJoint240.addChildren(&HAnimSegment241);

HAnimJoint& HAnimJoint249 =  HAnimJoint();
HAnimJoint249.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint249.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint249.setCenter(new float[]{0,1,0});
HAnimJoint249.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint249.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment250 =  HAnimSegment();
HAnimSegment250.X3DNode::setName(CString("l_metatarsal_2"));
HAnimSegment250.setDEF(CString("hanim_l_metatarsal_2"));
Transform& Transform251 =  Transform();
//Empty Transform
Transform& Transform252 =  Transform();
//Empty Transform
Shape& Shape253 =  Shape();
Shape253.setUSE(CString("HAnimJointShape"));
Transform252.addChild(&Shape253);

Transform251.addChild(&Transform252);

HAnimSegment250.addChild(&Transform251);

Shape& Shape254 =  Shape();
LineSet& LineSet255 =  LineSet();
LineSet255.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate256 =  Coordinate();
Coordinate256.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet255.setCoord(Coordinate256);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA257 =  ColorRGBA();
ColorRGBA257.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet255.addChild(&ColorRGBA257);

Shape254.setGeometry(&LineSet255);

HAnimSegment250.addChild(&Shape254);

HAnimJoint249.addChildren(&HAnimSegment250);

HAnimJoint& HAnimJoint258 =  HAnimJoint();
HAnimJoint258.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint258.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint258.setCenter(new float[]{0,1,0});
HAnimJoint258.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint258.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment259 =  HAnimSegment();
HAnimSegment259.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment259.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform& Transform260 =  Transform();
//Empty Transform
Transform& Transform261 =  Transform();
//Empty Transform
Shape& Shape262 =  Shape();
Shape262.setUSE(CString("HAnimJointShape"));
Transform261.addChild(&Shape262);

Transform260.addChild(&Transform261);

HAnimSegment259.addChild(&Transform260);

Shape& Shape263 =  Shape();
LineSet& LineSet264 =  LineSet();
LineSet264.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate265 =  Coordinate();
Coordinate265.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet264.setCoord(Coordinate265);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA266 =  ColorRGBA();
ColorRGBA266.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet264.addChild(&ColorRGBA266);

Shape263.setGeometry(&LineSet264);

HAnimSegment259.addChild(&Shape263);

HAnimJoint258.addChildren(&HAnimSegment259);

HAnimJoint& HAnimJoint267 =  HAnimJoint();
HAnimJoint267.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint267.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint267.setCenter(new float[]{0,1,0});
HAnimJoint267.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint267.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment268 =  HAnimSegment();
HAnimSegment268.X3DNode::setName(CString("l_tarsal_middle_phalanx_2"));
HAnimSegment268.setDEF(CString("hanim_l_tarsal_middle_phalanx_2"));
Transform& Transform269 =  Transform();
//Empty Transform
Transform& Transform270 =  Transform();
//Empty Transform
Shape& Shape271 =  Shape();
Shape271.setUSE(CString("HAnimJointShape"));
Transform270.addChild(&Shape271);

Transform269.addChild(&Transform270);

HAnimSegment268.addChild(&Transform269);

Shape& Shape272 =  Shape();
LineSet& LineSet273 =  LineSet();
LineSet273.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate274 =  Coordinate();
Coordinate274.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet273.setCoord(Coordinate274);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA275 =  ColorRGBA();
ColorRGBA275.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet273.addChild(&ColorRGBA275);

Shape272.setGeometry(&LineSet273);

HAnimSegment268.addChild(&Shape272);

HAnimSite& HAnimSite276 =  HAnimSite();
HAnimSite276.X3DNode::setName(CString("l_tarsal_distal_phalanx_2_tip"));
HAnimSite276.setDEF(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimSite276.setTranslation(new float[]{0.1195,0.0079,0.1433});
TouchSensor& TouchSensor277 =  TouchSensor();
TouchSensor277.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_2_tip"));
HAnimSite276.addChild(&TouchSensor277);

Shape& Shape278 =  Shape();
Shape278.setUSE(CString("HAnimSiteShape"));
HAnimSite276.addChild(&Shape278);

HAnimSegment268.addChild(&HAnimSite276);

HAnimJoint267.addChildren(&HAnimSegment268);

HAnimJoint& HAnimJoint279 =  HAnimJoint();
HAnimJoint279.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint279.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint279.setCenter(new float[]{0,1,0});
HAnimJoint279.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint279.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint267.addChildren(&HAnimJoint279);

HAnimJoint258.addChildren(&HAnimJoint267);

HAnimJoint249.addChildren(&HAnimJoint258);

HAnimJoint240.addChildren(&HAnimJoint249);

HAnimJoint189.addChildren(&HAnimJoint240);

HAnimJoint& HAnimJoint280 =  HAnimJoint();
HAnimJoint280.X3DNode::setName(CString("l_cuneonavicular_3"));
HAnimJoint280.setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint280.setCenter(new float[]{0,1,0});
HAnimJoint280.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint280.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment281 =  HAnimSegment();
HAnimSegment281.X3DNode::setName(CString("l_cuneiform_3"));
HAnimSegment281.setDEF(CString("hanim_l_cuneiform_3"));
Transform& Transform282 =  Transform();
//Empty Transform
Transform& Transform283 =  Transform();
//Empty Transform
Shape& Shape284 =  Shape();
Shape284.setUSE(CString("HAnimJointShape"));
Transform283.addChild(&Shape284);

Transform282.addChild(&Transform283);

HAnimSegment281.addChild(&Transform282);

Shape& Shape285 =  Shape();
LineSet& LineSet286 =  LineSet();
LineSet286.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate287 =  Coordinate();
Coordinate287.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet286.setCoord(Coordinate287);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA& ColorRGBA288 =  ColorRGBA();
ColorRGBA288.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet286.addChild(&ColorRGBA288);

Shape285.setGeometry(&LineSet286);

HAnimSegment281.addChild(&Shape285);

HAnimJoint280.addChildren(&HAnimSegment281);

HAnimJoint& HAnimJoint289 =  HAnimJoint();
HAnimJoint289.X3DNode::setName(CString("l_tarsometatarsal_3"));
HAnimJoint289.setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint289.setCenter(new float[]{0,1,0});
HAnimJoint289.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint289.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment290 =  HAnimSegment();
HAnimSegment290.X3DNode::setName(CString("l_metatarsal_3"));
HAnimSegment290.setDEF(CString("hanim_l_metatarsal_3"));
Transform& Transform291 =  Transform();
//Empty Transform
Transform& Transform292 =  Transform();
//Empty Transform
Shape& Shape293 =  Shape();
Shape293.setUSE(CString("HAnimJointShape"));
Transform292.addChild(&Shape293);

Transform291.addChild(&Transform292);

HAnimSegment290.addChild(&Transform291);

Shape& Shape294 =  Shape();
LineSet& LineSet295 =  LineSet();
LineSet295.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate296 =  Coordinate();
Coordinate296.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet295.setCoord(Coordinate296);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA& ColorRGBA297 =  ColorRGBA();
ColorRGBA297.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet295.addChild(&ColorRGBA297);

Shape294.setGeometry(&LineSet295);

HAnimSegment290.addChild(&Shape294);

HAnimJoint289.addChildren(&HAnimSegment290);

HAnimJoint& HAnimJoint298 =  HAnimJoint();
HAnimJoint298.X3DNode::setName(CString("l_metatarsophalangeal_3"));
HAnimJoint298.setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint298.setCenter(new float[]{0,1,0});
HAnimJoint298.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint298.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment299 =  HAnimSegment();
HAnimSegment299.X3DNode::setName(CString("l_tarsal_proximal_phalanx_3"));
HAnimSegment299.setDEF(CString("hanim_l_tarsal_proximal_phalanx_3"));
Transform& Transform300 =  Transform();
//Empty Transform
Transform& Transform301 =  Transform();
//Empty Transform
Shape& Shape302 =  Shape();
Shape302.setUSE(CString("HAnimJointShape"));
Transform301.addChild(&Shape302);

Transform300.addChild(&Transform301);

HAnimSegment299.addChild(&Transform300);

Shape& Shape303 =  Shape();
LineSet& LineSet304 =  LineSet();
LineSet304.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate305 =  Coordinate();
Coordinate305.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet304.setCoord(Coordinate305);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA306 =  ColorRGBA();
ColorRGBA306.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet304.addChild(&ColorRGBA306);

Shape303.setGeometry(&LineSet304);

HAnimSegment299.addChild(&Shape303);

HAnimJoint298.addChildren(&HAnimSegment299);

HAnimJoint& HAnimJoint307 =  HAnimJoint();
HAnimJoint307.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint307.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint307.setCenter(new float[]{0,1,0});
HAnimJoint307.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint307.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment308 =  HAnimSegment();
HAnimSegment308.X3DNode::setName(CString("l_tarsal_middle_phalanx_3"));
HAnimSegment308.setDEF(CString("hanim_l_tarsal_middle_phalanx_3"));
Transform& Transform309 =  Transform();
//Empty Transform
Transform& Transform310 =  Transform();
//Empty Transform
Shape& Shape311 =  Shape();
Shape311.setUSE(CString("HAnimJointShape"));
Transform310.addChild(&Shape311);

Transform309.addChild(&Transform310);

HAnimSegment308.addChild(&Transform309);

Shape& Shape312 =  Shape();
LineSet& LineSet313 =  LineSet();
LineSet313.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate314 =  Coordinate();
Coordinate314.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet313.setCoord(Coordinate314);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA315 =  ColorRGBA();
ColorRGBA315.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet313.addChild(&ColorRGBA315);

Shape312.setGeometry(&LineSet313);

HAnimSegment308.addChild(&Shape312);

HAnimSite& HAnimSite316 =  HAnimSite();
HAnimSite316.X3DNode::setName(CString("l_tarsal_distal_phalanx_3_tip"));
HAnimSite316.setDEF(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimSite316.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor317 =  TouchSensor();
TouchSensor317.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_3_tip"));
HAnimSite316.addChild(&TouchSensor317);

Shape& Shape318 =  Shape();
Shape318.setUSE(CString("HAnimSiteShape"));
HAnimSite316.addChild(&Shape318);

HAnimSegment308.addChild(&HAnimSite316);

HAnimJoint307.addChildren(&HAnimSegment308);

HAnimJoint& HAnimJoint319 =  HAnimJoint();
HAnimJoint319.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint319.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint319.setCenter(new float[]{0,1,0});
HAnimJoint319.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint319.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint307.addChildren(&HAnimJoint319);

HAnimJoint298.addChildren(&HAnimJoint307);

HAnimJoint289.addChildren(&HAnimJoint298);

HAnimJoint280.addChildren(&HAnimJoint289);

HAnimJoint189.addChildren(&HAnimJoint280);

HAnimJoint176.addChildren(&HAnimJoint189);

HAnimJoint& HAnimJoint320 =  HAnimJoint();
HAnimJoint320.X3DNode::setName(CString("l_calcaneocuboid"));
HAnimJoint320.setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint320.setCenter(new float[]{0,1,0});
HAnimJoint320.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint320.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment321 =  HAnimSegment();
HAnimSegment321.X3DNode::setName(CString("l_calcaneus"));
HAnimSegment321.setDEF(CString("hanim_l_calcaneus"));
Transform& Transform322 =  Transform();
//Empty Transform
Transform& Transform323 =  Transform();
//Empty Transform
Shape& Shape324 =  Shape();
Shape324.setUSE(CString("HAnimJointShape"));
Transform323.addChild(&Shape324);

Transform322.addChild(&Transform323);

HAnimSegment321.addChild(&Transform322);

Shape& Shape325 =  Shape();
LineSet& LineSet326 =  LineSet();
LineSet326.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate327 =  Coordinate();
Coordinate327.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet326.setCoord(Coordinate327);

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA& ColorRGBA328 =  ColorRGBA();
ColorRGBA328.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet326.addChild(&ColorRGBA328);

Shape325.setGeometry(&LineSet326);

HAnimSegment321.addChild(&Shape325);

HAnimJoint320.addChildren(&HAnimSegment321);

HAnimJoint& HAnimJoint329 =  HAnimJoint();
HAnimJoint329.X3DNode::setName(CString("l_transversetarsal"));
HAnimJoint329.setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint329.setCenter(new float[]{0,1,0});
HAnimJoint329.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint329.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment330 =  HAnimSegment();
HAnimSegment330.X3DNode::setName(CString("l_cuboid"));
HAnimSegment330.setDEF(CString("hanim_l_cuboid"));
Transform& Transform331 =  Transform();
//Empty Transform
Transform& Transform332 =  Transform();
//Empty Transform
Shape& Shape333 =  Shape();
Shape333.setUSE(CString("HAnimJointShape"));
Transform332.addChild(&Shape333);

Transform331.addChild(&Transform332);

HAnimSegment330.addChild(&Transform331);

Shape& Shape334 =  Shape();
LineSet& LineSet335 =  LineSet();
LineSet335.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate336 =  Coordinate();
Coordinate336.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet335.setCoord(Coordinate336);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA& ColorRGBA337 =  ColorRGBA();
ColorRGBA337.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet335.addChild(&ColorRGBA337);

Shape334.setGeometry(&LineSet335);

HAnimSegment330.addChild(&Shape334);

Shape& Shape338 =  Shape();
LineSet& LineSet339 =  LineSet();
LineSet339.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate340 =  Coordinate();
Coordinate340.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet339.setCoord(Coordinate340);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA& ColorRGBA341 =  ColorRGBA();
ColorRGBA341.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet339.addChild(&ColorRGBA341);

Shape338.setGeometry(&LineSet339);

HAnimSegment330.addChild(&Shape338);

HAnimJoint329.addChildren(&HAnimSegment330);

HAnimJoint& HAnimJoint342 =  HAnimJoint();
HAnimJoint342.X3DNode::setName(CString("l_tarsometatarsal_4"));
HAnimJoint342.setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint342.setCenter(new float[]{0,1,0});
HAnimJoint342.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint342.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment343 =  HAnimSegment();
HAnimSegment343.X3DNode::setName(CString("l_metatarsal_4"));
HAnimSegment343.setDEF(CString("hanim_l_metatarsal_4"));
Transform& Transform344 =  Transform();
//Empty Transform
Transform& Transform345 =  Transform();
//Empty Transform
Shape& Shape346 =  Shape();
Shape346.setUSE(CString("HAnimJointShape"));
Transform345.addChild(&Shape346);

Transform344.addChild(&Transform345);

HAnimSegment343.addChild(&Transform344);

Shape& Shape347 =  Shape();
LineSet& LineSet348 =  LineSet();
LineSet348.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate349 =  Coordinate();
Coordinate349.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet348.setCoord(Coordinate349);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA& ColorRGBA350 =  ColorRGBA();
ColorRGBA350.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet348.addChild(&ColorRGBA350);

Shape347.setGeometry(&LineSet348);

HAnimSegment343.addChild(&Shape347);

HAnimJoint342.addChildren(&HAnimSegment343);

HAnimJoint& HAnimJoint351 =  HAnimJoint();
HAnimJoint351.X3DNode::setName(CString("l_metatarsophalangeal_4"));
HAnimJoint351.setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint351.setCenter(new float[]{0,1,0});
HAnimJoint351.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint351.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment352 =  HAnimSegment();
HAnimSegment352.X3DNode::setName(CString("l_tarsal_proximal_phalanx_4"));
HAnimSegment352.setDEF(CString("hanim_l_tarsal_proximal_phalanx_4"));
Transform& Transform353 =  Transform();
//Empty Transform
Transform& Transform354 =  Transform();
//Empty Transform
Shape& Shape355 =  Shape();
Shape355.setUSE(CString("HAnimJointShape"));
Transform354.addChild(&Shape355);

Transform353.addChild(&Transform354);

HAnimSegment352.addChild(&Transform353);

Shape& Shape356 =  Shape();
LineSet& LineSet357 =  LineSet();
LineSet357.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate358 =  Coordinate();
Coordinate358.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet357.setCoord(Coordinate358);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA359 =  ColorRGBA();
ColorRGBA359.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet357.addChild(&ColorRGBA359);

Shape356.setGeometry(&LineSet357);

HAnimSegment352.addChild(&Shape356);

HAnimJoint351.addChildren(&HAnimSegment352);

HAnimJoint& HAnimJoint360 =  HAnimJoint();
HAnimJoint360.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint360.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint360.setCenter(new float[]{0,1,0});
HAnimJoint360.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint360.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment361 =  HAnimSegment();
HAnimSegment361.X3DNode::setName(CString("l_tarsal_middle_phalanx_4"));
HAnimSegment361.setDEF(CString("hanim_l_tarsal_middle_phalanx_4"));
Transform& Transform362 =  Transform();
//Empty Transform
Transform& Transform363 =  Transform();
//Empty Transform
Shape& Shape364 =  Shape();
Shape364.setUSE(CString("HAnimJointShape"));
Transform363.addChild(&Shape364);

Transform362.addChild(&Transform363);

HAnimSegment361.addChild(&Transform362);

Shape& Shape365 =  Shape();
LineSet& LineSet366 =  LineSet();
LineSet366.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate367 =  Coordinate();
Coordinate367.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet366.setCoord(Coordinate367);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA368 =  ColorRGBA();
ColorRGBA368.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet366.addChild(&ColorRGBA368);

Shape365.setGeometry(&LineSet366);

HAnimSegment361.addChild(&Shape365);

HAnimSite& HAnimSite369 =  HAnimSite();
HAnimSite369.X3DNode::setName(CString("l_tarsal_distal_phalanx_4_tip"));
HAnimSite369.setDEF(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimSite369.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor370 =  TouchSensor();
TouchSensor370.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_4_tip"));
HAnimSite369.addChild(&TouchSensor370);

Shape& Shape371 =  Shape();
Shape371.setUSE(CString("HAnimSiteShape"));
HAnimSite369.addChild(&Shape371);

HAnimSegment361.addChild(&HAnimSite369);

HAnimJoint360.addChildren(&HAnimSegment361);

HAnimJoint& HAnimJoint372 =  HAnimJoint();
HAnimJoint372.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint372.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint372.setCenter(new float[]{0,1,0});
HAnimJoint372.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint372.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint360.addChildren(&HAnimJoint372);

HAnimJoint351.addChildren(&HAnimJoint360);

HAnimJoint342.addChildren(&HAnimJoint351);

HAnimJoint329.addChildren(&HAnimJoint342);

HAnimJoint& HAnimJoint373 =  HAnimJoint();
HAnimJoint373.X3DNode::setName(CString("l_tarsometatarsal_5"));
HAnimJoint373.setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint373.setCenter(new float[]{0,1,0});
HAnimJoint373.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint373.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment374 =  HAnimSegment();
HAnimSegment374.X3DNode::setName(CString("l_metatarsal_5"));
HAnimSegment374.setDEF(CString("hanim_l_metatarsal_5"));
Transform& Transform375 =  Transform();
//Empty Transform
Transform& Transform376 =  Transform();
//Empty Transform
Shape& Shape377 =  Shape();
Shape377.setUSE(CString("HAnimJointShape"));
Transform376.addChild(&Shape377);

Transform375.addChild(&Transform376);

HAnimSegment374.addChild(&Transform375);

Shape& Shape378 =  Shape();
LineSet& LineSet379 =  LineSet();
LineSet379.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate380 =  Coordinate();
Coordinate380.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet379.setCoord(Coordinate380);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA& ColorRGBA381 =  ColorRGBA();
ColorRGBA381.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet379.addChild(&ColorRGBA381);

Shape378.setGeometry(&LineSet379);

HAnimSegment374.addChild(&Shape378);

HAnimSite& HAnimSite382 =  HAnimSite();
HAnimSite382.X3DNode::setName(CString("l_metatarsal_phalanx_5_pt"));
HAnimSite382.setDEF(CString("hanim_l_metatarsal_phalanx_5_pt"));
HAnimSite382.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor383 =  TouchSensor();
TouchSensor383.setDescription(CString("HAnimSite l_metatarsal_phalanx_5_pt"));
HAnimSite382.addChild(&TouchSensor383);

Shape& Shape384 =  Shape();
Shape384.setUSE(CString("HAnimSiteShape"));
HAnimSite382.addChild(&Shape384);

HAnimSegment374.addChild(&HAnimSite382);

HAnimJoint373.addChildren(&HAnimSegment374);

HAnimJoint& HAnimJoint385 =  HAnimJoint();
HAnimJoint385.X3DNode::setName(CString("l_metatarsophalangeal_5"));
HAnimJoint385.setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint385.setCenter(new float[]{0,1,0});
HAnimJoint385.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint385.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment386 =  HAnimSegment();
HAnimSegment386.X3DNode::setName(CString("l_tarsal_proximal_phalanx_5"));
HAnimSegment386.setDEF(CString("hanim_l_tarsal_proximal_phalanx_5"));
Transform& Transform387 =  Transform();
//Empty Transform
Transform& Transform388 =  Transform();
//Empty Transform
Shape& Shape389 =  Shape();
Shape389.setUSE(CString("HAnimJointShape"));
Transform388.addChild(&Shape389);

Transform387.addChild(&Transform388);

HAnimSegment386.addChild(&Transform387);

Shape& Shape390 =  Shape();
LineSet& LineSet391 =  LineSet();
LineSet391.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate392 =  Coordinate();
Coordinate392.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet391.setCoord(Coordinate392);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA393 =  ColorRGBA();
ColorRGBA393.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet391.addChild(&ColorRGBA393);

Shape390.setGeometry(&LineSet391);

HAnimSegment386.addChild(&Shape390);

HAnimJoint385.addChildren(&HAnimSegment386);

HAnimJoint& HAnimJoint394 =  HAnimJoint();
HAnimJoint394.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint394.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint394.setCenter(new float[]{0,1,0});
HAnimJoint394.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint394.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment395 =  HAnimSegment();
HAnimSegment395.X3DNode::setName(CString("l_tarsal_middle_phalanx_5"));
HAnimSegment395.setDEF(CString("hanim_l_tarsal_middle_phalanx_5"));
Transform& Transform396 =  Transform();
//Empty Transform
Transform& Transform397 =  Transform();
//Empty Transform
Shape& Shape398 =  Shape();
Shape398.setUSE(CString("HAnimJointShape"));
Transform397.addChild(&Shape398);

Transform396.addChild(&Transform397);

HAnimSegment395.addChild(&Transform396);

Shape& Shape399 =  Shape();
LineSet& LineSet400 =  LineSet();
LineSet400.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate401 =  Coordinate();
Coordinate401.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet400.setCoord(Coordinate401);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA402 =  ColorRGBA();
ColorRGBA402.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet400.addChild(&ColorRGBA402);

Shape399.setGeometry(&LineSet400);

HAnimSegment395.addChild(&Shape399);

HAnimSite& HAnimSite403 =  HAnimSite();
HAnimSite403.X3DNode::setName(CString("l_tarsal_distal_phalanx_5_tip"));
HAnimSite403.setDEF(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimSite403.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor404 =  TouchSensor();
TouchSensor404.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_5_tip"));
HAnimSite403.addChild(&TouchSensor404);

Shape& Shape405 =  Shape();
Shape405.setUSE(CString("HAnimSiteShape"));
HAnimSite403.addChild(&Shape405);

HAnimSegment395.addChild(&HAnimSite403);

HAnimJoint394.addChildren(&HAnimSegment395);

HAnimJoint& HAnimJoint406 =  HAnimJoint();
HAnimJoint406.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint406.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint406.setCenter(new float[]{0,1,0});
HAnimJoint406.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint406.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint394.addChildren(&HAnimJoint406);

HAnimJoint385.addChildren(&HAnimJoint394);

HAnimJoint373.addChildren(&HAnimJoint385);

HAnimJoint329.addChildren(&HAnimJoint373);

HAnimJoint320.addChildren(&HAnimJoint329);

HAnimJoint176.addChildren(&HAnimJoint320);

HAnimJoint161.addChildren(&HAnimJoint176);

HAnimJoint143.addChildren(&HAnimJoint161);

HAnimJoint106.addChildren(&HAnimJoint143);

HAnimJoint& HAnimJoint407 =  HAnimJoint();
HAnimJoint407.X3DNode::setName(CString("r_hip"));
HAnimJoint407.setDEF(CString("hanim_r_hip"));
HAnimJoint407.setCenter(new float[]{-0.095,0.9171,0.0029});
HAnimJoint407.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint407.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment408 =  HAnimSegment();
HAnimSegment408.X3DNode::setName(CString("r_thigh"));
HAnimSegment408.setDEF(CString("hanim_r_thigh"));
Transform& Transform409 =  Transform();
//Empty Transform
Transform& Transform410 =  Transform();
//Empty Transform
Shape& Shape411 =  Shape();
Shape411.setUSE(CString("HAnimJointShape"));
Transform410.addChild(&Shape411);

Transform409.addChild(&Transform410);

HAnimSegment408.addChild(&Transform409);

Shape& Shape412 =  Shape();
LineSet& LineSet413 =  LineSet();
LineSet413.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate414 =  Coordinate();
Coordinate414.setPoint(new float[]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet413.setCoord(Coordinate414);

//from r_hip to r_knee vertices 2
ColorRGBA& ColorRGBA415 =  ColorRGBA();
ColorRGBA415.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet413.addChild(&ColorRGBA415);

Shape412.setGeometry(&LineSet413);

HAnimSegment408.addChild(&Shape412);

HAnimSite& HAnimSite416 =  HAnimSite();
HAnimSite416.X3DNode::setName(CString("r_lateral_malleolus_pt"));
HAnimSite416.setDEF(CString("hanim_r_lateral_malleolus_pt"));
HAnimSite416.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
TouchSensor& TouchSensor417 =  TouchSensor();
TouchSensor417.setDescription(CString("HAnimSite r_lateral_malleolus_pt"));
HAnimSite416.addChild(&TouchSensor417);

Shape& Shape418 =  Shape();
Shape418.setUSE(CString("HAnimSiteShape"));
HAnimSite416.addChild(&Shape418);

HAnimSegment408.addChild(&HAnimSite416);

HAnimSite& HAnimSite419 =  HAnimSite();
HAnimSite419.X3DNode::setName(CString("r_medial_malleolus_pt"));
HAnimSite419.setDEF(CString("hanim_r_medial_malleolus_pt"));
HAnimSite419.setTranslation(new float[]{-0.0591,0.076,-0.0928});
TouchSensor& TouchSensor420 =  TouchSensor();
TouchSensor420.setDescription(CString("HAnimSite r_medial_malleolus_pt"));
HAnimSite419.addChild(&TouchSensor420);

Shape& Shape421 =  Shape();
Shape421.setUSE(CString("HAnimSiteShape"));
HAnimSite419.addChild(&Shape421);

HAnimSegment408.addChild(&HAnimSite419);

HAnimSite& HAnimSite422 =  HAnimSite();
HAnimSite422.X3DNode::setName(CString("r_tibiale_pt"));
HAnimSite422.setDEF(CString("hanim_r_tibiale_pt"));
HAnimSite422.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor423 =  TouchSensor();
TouchSensor423.setDescription(CString("HAnimSite r_tibiale_pt"));
HAnimSite422.addChild(&TouchSensor423);

Shape& Shape424 =  Shape();
Shape424.setUSE(CString("HAnimSiteShape"));
HAnimSite422.addChild(&Shape424);

HAnimSegment408.addChild(&HAnimSite422);

HAnimJoint407.addChildren(&HAnimSegment408);

HAnimJoint& HAnimJoint425 =  HAnimJoint();
HAnimJoint425.X3DNode::setName(CString("r_knee"));
HAnimJoint425.setDEF(CString("hanim_r_knee"));
HAnimJoint425.setCenter(new float[]{-0.0867,0.4913,0.0318});
HAnimJoint425.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint425.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment426 =  HAnimSegment();
HAnimSegment426.X3DNode::setName(CString("r_calf"));
HAnimSegment426.setDEF(CString("hanim_r_calf"));
Transform& Transform427 =  Transform();
//Empty Transform
Transform& Transform428 =  Transform();
//Empty Transform
Shape& Shape429 =  Shape();
Shape429.setUSE(CString("HAnimJointShape"));
Transform428.addChild(&Shape429);

Transform427.addChild(&Transform428);

HAnimSegment426.addChild(&Transform427);

Shape& Shape430 =  Shape();
LineSet& LineSet431 =  LineSet();
LineSet431.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate432 =  Coordinate();
Coordinate432.setPoint(new float[]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet431.setCoord(Coordinate432);

//from r_knee to r_talocrural vertices 2
ColorRGBA& ColorRGBA433 =  ColorRGBA();
ColorRGBA433.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet431.addChild(&ColorRGBA433);

Shape430.setGeometry(&LineSet431);

HAnimSegment426.addChild(&Shape430);

HAnimSite& HAnimSite434 =  HAnimSite();
HAnimSite434.X3DNode::setName(CString("r_calcaneus_posterior_pt"));
HAnimSite434.setDEF(CString("hanim_r_calcaneus_posterior_pt"));
HAnimSite434.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
TouchSensor& TouchSensor435 =  TouchSensor();
TouchSensor435.setDescription(CString("HAnimSite r_calcaneus_posterior_pt"));
HAnimSite434.addChild(&TouchSensor435);

Shape& Shape436 =  Shape();
Shape436.setUSE(CString("HAnimSiteShape"));
HAnimSite434.addChild(&Shape436);

HAnimSegment426.addChild(&HAnimSite434);

HAnimSite& HAnimSite437 =  HAnimSite();
HAnimSite437.X3DNode::setName(CString("r_sphyrion_pt"));
HAnimSite437.setDEF(CString("hanim_r_sphyrion_pt"));
HAnimSite437.setTranslation(new float[]{-0.0603,0.061,-0.1002});
TouchSensor& TouchSensor438 =  TouchSensor();
TouchSensor438.setDescription(CString("HAnimSite r_sphyrion_pt"));
HAnimSite437.addChild(&TouchSensor438);

Shape& Shape439 =  Shape();
Shape439.setUSE(CString("HAnimSiteShape"));
HAnimSite437.addChild(&Shape439);

HAnimSegment426.addChild(&HAnimSite437);

HAnimJoint425.addChildren(&HAnimSegment426);

HAnimJoint& HAnimJoint440 =  HAnimJoint();
HAnimJoint440.X3DNode::setName(CString("r_talocrural"));
HAnimJoint440.setDEF(CString("hanim_r_talocrural"));
HAnimJoint440.setCenter(new float[]{-0.0801,0.0712,-0.0766});
HAnimJoint440.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint440.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment441 =  HAnimSegment();
HAnimSegment441.X3DNode::setName(CString("r_talus"));
HAnimSegment441.setDEF(CString("hanim_r_talus"));
Transform& Transform442 =  Transform();
Transform442.setScale(new float[]{0.15,0.15,0.15});
Transform442.setTranslation(new float[]{-0.05,0.06,-0.025});
Transform442.setRotation(new float[]{1,0,0,-1.57});
//Transform right foot
Transform& Transform443 =  Transform();
//Empty Transform right foot
Shape& Shape444 =  Shape();
Shape444.setUSE(CString("HAnimJointShape"));
Transform443.addChild(&Shape444);

Transform442.addChild(&Transform443);

HAnimSegment441.addChild(&Transform442);

Shape& Shape445 =  Shape();
LineSet& LineSet446 =  LineSet();
LineSet446.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate447 =  Coordinate();
Coordinate447.setPoint(new float[]{-0.0801,0.0712,-0.0766,0,1,0}, 6);
LineSet446.setCoord(Coordinate447);

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA& ColorRGBA448 =  ColorRGBA();
ColorRGBA448.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet446.addChild(&ColorRGBA448);

Shape445.setGeometry(&LineSet446);

HAnimSegment441.addChild(&Shape445);

Shape& Shape449 =  Shape();
LineSet& LineSet450 =  LineSet();
LineSet450.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate451 =  Coordinate();
Coordinate451.setPoint(new float[]{-0.0801,0.0712,-0.0766,0,1,0}, 6);
LineSet450.setCoord(Coordinate451);

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA& ColorRGBA452 =  ColorRGBA();
ColorRGBA452.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet450.addChild(&ColorRGBA452);

Shape449.setGeometry(&LineSet450);

HAnimSegment441.addChild(&Shape449);

HAnimJoint440.addChildren(&HAnimSegment441);

HAnimJoint& HAnimJoint453 =  HAnimJoint();
HAnimJoint453.X3DNode::setName(CString("r_talocalcaneonavicular"));
HAnimJoint453.setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint453.setCenter(new float[]{0,1,0});
HAnimJoint453.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint453.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment454 =  HAnimSegment();
HAnimSegment454.X3DNode::setName(CString("r_navicular"));
HAnimSegment454.setDEF(CString("hanim_r_navicular"));
Transform& Transform455 =  Transform();
//Empty Transform
Transform& Transform456 =  Transform();
//Empty Transform
Shape& Shape457 =  Shape();
Shape457.setUSE(CString("HAnimJointShape"));
Transform456.addChild(&Shape457);

Transform455.addChild(&Transform456);

HAnimSegment454.addChild(&Transform455);

Shape& Shape458 =  Shape();
LineSet& LineSet459 =  LineSet();
LineSet459.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate460 =  Coordinate();
Coordinate460.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet459.setCoord(Coordinate460);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA& ColorRGBA461 =  ColorRGBA();
ColorRGBA461.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet459.addChild(&ColorRGBA461);

Shape458.setGeometry(&LineSet459);

HAnimSegment454.addChild(&Shape458);

Shape& Shape462 =  Shape();
LineSet& LineSet463 =  LineSet();
LineSet463.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate464 =  Coordinate();
Coordinate464.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet463.setCoord(Coordinate464);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA& ColorRGBA465 =  ColorRGBA();
ColorRGBA465.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet463.addChild(&ColorRGBA465);

Shape462.setGeometry(&LineSet463);

HAnimSegment454.addChild(&Shape462);

Shape& Shape466 =  Shape();
LineSet& LineSet467 =  LineSet();
LineSet467.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate468 =  Coordinate();
Coordinate468.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet467.setCoord(Coordinate468);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA& ColorRGBA469 =  ColorRGBA();
ColorRGBA469.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet467.addChild(&ColorRGBA469);

Shape466.setGeometry(&LineSet467);

HAnimSegment454.addChild(&Shape466);

HAnimJoint453.addChildren(&HAnimSegment454);

HAnimJoint& HAnimJoint470 =  HAnimJoint();
HAnimJoint470.X3DNode::setName(CString("r_cuneonavicular_1"));
HAnimJoint470.setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint470.setCenter(new float[]{0,1,0});
HAnimJoint470.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint470.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment471 =  HAnimSegment();
HAnimSegment471.X3DNode::setName(CString("r_cuneiform_1"));
HAnimSegment471.setDEF(CString("hanim_r_cuneiform_1"));
Transform& Transform472 =  Transform();
//Empty Transform
Transform& Transform473 =  Transform();
//Empty Transform
Shape& Shape474 =  Shape();
Shape474.setUSE(CString("HAnimJointShape"));
Transform473.addChild(&Shape474);

Transform472.addChild(&Transform473);

HAnimSegment471.addChild(&Transform472);

Shape& Shape475 =  Shape();
LineSet& LineSet476 =  LineSet();
LineSet476.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate477 =  Coordinate();
Coordinate477.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet476.setCoord(Coordinate477);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA& ColorRGBA478 =  ColorRGBA();
ColorRGBA478.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet476.addChild(&ColorRGBA478);

Shape475.setGeometry(&LineSet476);

HAnimSegment471.addChild(&Shape475);

HAnimJoint470.addChildren(&HAnimSegment471);

HAnimJoint& HAnimJoint479 =  HAnimJoint();
HAnimJoint479.X3DNode::setName(CString("r_tarsometatarsal_1"));
HAnimJoint479.setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint479.setCenter(new float[]{0,1,0});
HAnimJoint479.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint479.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment480 =  HAnimSegment();
HAnimSegment480.X3DNode::setName(CString("r_metatarsal_1"));
HAnimSegment480.setDEF(CString("hanim_r_metatarsal_1"));
Transform& Transform481 =  Transform();
//Empty Transform
Transform& Transform482 =  Transform();
//Empty Transform
Shape& Shape483 =  Shape();
Shape483.setUSE(CString("HAnimJointShape"));
Transform482.addChild(&Shape483);

Transform481.addChild(&Transform482);

HAnimSegment480.addChild(&Transform481);

Shape& Shape484 =  Shape();
LineSet& LineSet485 =  LineSet();
LineSet485.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate486 =  Coordinate();
Coordinate486.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet485.setCoord(Coordinate486);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA& ColorRGBA487 =  ColorRGBA();
ColorRGBA487.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet485.addChild(&ColorRGBA487);

Shape484.setGeometry(&LineSet485);

HAnimSegment480.addChild(&Shape484);

HAnimSite& HAnimSite488 =  HAnimSite();
HAnimSite488.X3DNode::setName(CString("r_metatarsal_phalanx_1_pt"));
HAnimSite488.setDEF(CString("hanim_r_metatarsal_phalanx_1_pt"));
HAnimSite488.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor489 =  TouchSensor();
TouchSensor489.setDescription(CString("HAnimSite r_metatarsal_phalanx_1_pt"));
HAnimSite488.addChild(&TouchSensor489);

Shape& Shape490 =  Shape();
Shape490.setUSE(CString("HAnimSiteShape"));
HAnimSite488.addChild(&Shape490);

HAnimSegment480.addChild(&HAnimSite488);

HAnimJoint479.addChildren(&HAnimSegment480);

HAnimJoint& HAnimJoint491 =  HAnimJoint();
HAnimJoint491.X3DNode::setName(CString("r_metatarsophalangeal_1"));
HAnimJoint491.setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint491.setCenter(new float[]{0,1,0});
HAnimJoint491.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint491.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment492 =  HAnimSegment();
HAnimSegment492.X3DNode::setName(CString("r_tarsal_proximal_phalanx_1"));
HAnimSegment492.setDEF(CString("hanim_r_tarsal_proximal_phalanx_1"));
Transform& Transform493 =  Transform();
//Empty Transform
Transform& Transform494 =  Transform();
//Empty Transform
Shape& Shape495 =  Shape();
Shape495.setUSE(CString("HAnimJointShape"));
Transform494.addChild(&Shape495);

Transform493.addChild(&Transform494);

HAnimSegment492.addChild(&Transform493);

Shape& Shape496 =  Shape();
LineSet& LineSet497 =  LineSet();
LineSet497.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate498 =  Coordinate();
Coordinate498.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet497.setCoord(Coordinate498);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA499 =  ColorRGBA();
ColorRGBA499.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet497.addChild(&ColorRGBA499);

Shape496.setGeometry(&LineSet497);

HAnimSegment492.addChild(&Shape496);

HAnimSite& HAnimSite500 =  HAnimSite();
HAnimSite500.X3DNode::setName(CString("r_tarsal_distal_phalanx_1_tip"));
HAnimSite500.setDEF(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimSite500.setTranslation(new float[]{0.1,-1.05,0});
TouchSensor& TouchSensor501 =  TouchSensor();
TouchSensor501.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_1_tip"));
HAnimSite500.addChild(&TouchSensor501);

Shape& Shape502 =  Shape();
Shape502.setUSE(CString("HAnimSiteShape"));
HAnimSite500.addChild(&Shape502);

HAnimSegment492.addChild(&HAnimSite500);

HAnimJoint491.addChildren(&HAnimSegment492);

HAnimJoint& HAnimJoint503 =  HAnimJoint();
HAnimJoint503.X3DNode::setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint503.setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint503.setCenter(new float[]{0,1,0});
HAnimJoint503.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint503.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint491.addChildren(&HAnimJoint503);

HAnimJoint479.addChildren(&HAnimJoint491);

HAnimJoint470.addChildren(&HAnimJoint479);

HAnimJoint453.addChildren(&HAnimJoint470);

HAnimJoint& HAnimJoint504 =  HAnimJoint();
HAnimJoint504.X3DNode::setName(CString("r_cuneonavicular_2"));
HAnimJoint504.setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint504.setCenter(new float[]{0,1,0});
HAnimJoint504.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint504.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment505 =  HAnimSegment();
HAnimSegment505.X3DNode::setName(CString("r_cuneiform_2"));
HAnimSegment505.setDEF(CString("hanim_r_cuneiform_2"));
Transform& Transform506 =  Transform();
//Empty Transform
Transform& Transform507 =  Transform();
//Empty Transform
Shape& Shape508 =  Shape();
Shape508.setUSE(CString("HAnimJointShape"));
Transform507.addChild(&Shape508);

Transform506.addChild(&Transform507);

HAnimSegment505.addChild(&Transform506);

Shape& Shape509 =  Shape();
LineSet& LineSet510 =  LineSet();
LineSet510.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate511 =  Coordinate();
Coordinate511.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet510.setCoord(Coordinate511);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA512 =  ColorRGBA();
ColorRGBA512.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet510.addChild(&ColorRGBA512);

Shape509.setGeometry(&LineSet510);

HAnimSegment505.addChild(&Shape509);

HAnimJoint504.addChildren(&HAnimSegment505);

HAnimJoint& HAnimJoint513 =  HAnimJoint();
HAnimJoint513.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint513.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint513.setCenter(new float[]{0,1,0});
HAnimJoint513.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint513.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment514 =  HAnimSegment();
HAnimSegment514.X3DNode::setName(CString("r_metatarsal_2"));
HAnimSegment514.setDEF(CString("hanim_r_metatarsal_2"));
Transform& Transform515 =  Transform();
//Empty Transform
Transform& Transform516 =  Transform();
//Empty Transform
Shape& Shape517 =  Shape();
Shape517.setUSE(CString("HAnimJointShape"));
Transform516.addChild(&Shape517);

Transform515.addChild(&Transform516);

HAnimSegment514.addChild(&Transform515);

Shape& Shape518 =  Shape();
LineSet& LineSet519 =  LineSet();
LineSet519.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate520 =  Coordinate();
Coordinate520.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet519.setCoord(Coordinate520);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA521 =  ColorRGBA();
ColorRGBA521.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet519.addChild(&ColorRGBA521);

Shape518.setGeometry(&LineSet519);

HAnimSegment514.addChild(&Shape518);

HAnimJoint513.addChildren(&HAnimSegment514);

HAnimJoint& HAnimJoint522 =  HAnimJoint();
HAnimJoint522.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint522.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint522.setCenter(new float[]{0,1,0});
HAnimJoint522.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint522.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment523 =  HAnimSegment();
HAnimSegment523.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment523.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Transform& Transform524 =  Transform();
//Empty Transform
Transform& Transform525 =  Transform();
//Empty Transform
Shape& Shape526 =  Shape();
Shape526.setUSE(CString("HAnimJointShape"));
Transform525.addChild(&Shape526);

Transform524.addChild(&Transform525);

HAnimSegment523.addChild(&Transform524);

Shape& Shape527 =  Shape();
LineSet& LineSet528 =  LineSet();
LineSet528.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate529 =  Coordinate();
Coordinate529.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet528.setCoord(Coordinate529);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA530 =  ColorRGBA();
ColorRGBA530.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet528.addChild(&ColorRGBA530);

Shape527.setGeometry(&LineSet528);

HAnimSegment523.addChild(&Shape527);

HAnimJoint522.addChildren(&HAnimSegment523);

HAnimJoint& HAnimJoint531 =  HAnimJoint();
HAnimJoint531.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint531.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint531.setCenter(new float[]{0,1,0});
HAnimJoint531.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint531.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment532 =  HAnimSegment();
HAnimSegment532.X3DNode::setName(CString("r_tarsal_middle_phalanx_2"));
HAnimSegment532.setDEF(CString("hanim_r_tarsal_middle_phalanx_2"));
Transform& Transform533 =  Transform();
//Empty Transform
Transform& Transform534 =  Transform();
//Empty Transform
Shape& Shape535 =  Shape();
Shape535.setUSE(CString("HAnimJointShape"));
Transform534.addChild(&Shape535);

Transform533.addChild(&Transform534);

HAnimSegment532.addChild(&Transform533);

Shape& Shape536 =  Shape();
LineSet& LineSet537 =  LineSet();
LineSet537.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate538 =  Coordinate();
Coordinate538.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet537.setCoord(Coordinate538);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA539 =  ColorRGBA();
ColorRGBA539.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet537.addChild(&ColorRGBA539);

Shape536.setGeometry(&LineSet537);

HAnimSegment532.addChild(&Shape536);

HAnimSite& HAnimSite540 =  HAnimSite();
HAnimSite540.X3DNode::setName(CString("r_tarsal_distal_phalanx_2_tip"));
HAnimSite540.setDEF(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimSite540.setTranslation(new float[]{-0.05,-1.12,0});
TouchSensor& TouchSensor541 =  TouchSensor();
TouchSensor541.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_2_tip"));
HAnimSite540.addChild(&TouchSensor541);

Shape& Shape542 =  Shape();
Shape542.setUSE(CString("HAnimSiteShape"));
HAnimSite540.addChild(&Shape542);

HAnimSegment532.addChild(&HAnimSite540);

HAnimJoint531.addChildren(&HAnimSegment532);

HAnimJoint& HAnimJoint543 =  HAnimJoint();
HAnimJoint543.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint543.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint543.setCenter(new float[]{0,1,0});
HAnimJoint543.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint543.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint531.addChildren(&HAnimJoint543);

HAnimJoint522.addChildren(&HAnimJoint531);

HAnimJoint513.addChildren(&HAnimJoint522);

HAnimJoint504.addChildren(&HAnimJoint513);

HAnimJoint453.addChildren(&HAnimJoint504);

HAnimJoint& HAnimJoint544 =  HAnimJoint();
HAnimJoint544.X3DNode::setName(CString("r_cuneonavicular_3"));
HAnimJoint544.setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint544.setCenter(new float[]{0,1,0});
HAnimJoint544.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint544.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment545 =  HAnimSegment();
HAnimSegment545.X3DNode::setName(CString("r_cuneiform_3"));
HAnimSegment545.setDEF(CString("hanim_r_cuneiform_3"));
Transform& Transform546 =  Transform();
//Empty Transform
Transform& Transform547 =  Transform();
//Empty Transform
Shape& Shape548 =  Shape();
Shape548.setUSE(CString("HAnimJointShape"));
Transform547.addChild(&Shape548);

Transform546.addChild(&Transform547);

HAnimSegment545.addChild(&Transform546);

Shape& Shape549 =  Shape();
LineSet& LineSet550 =  LineSet();
LineSet550.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate551 =  Coordinate();
Coordinate551.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet550.setCoord(Coordinate551);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA& ColorRGBA552 =  ColorRGBA();
ColorRGBA552.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet550.addChild(&ColorRGBA552);

Shape549.setGeometry(&LineSet550);

HAnimSegment545.addChild(&Shape549);

HAnimJoint544.addChildren(&HAnimSegment545);

HAnimJoint& HAnimJoint553 =  HAnimJoint();
HAnimJoint553.X3DNode::setName(CString("r_tarsometatarsal_3"));
HAnimJoint553.setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimJoint553.setCenter(new float[]{0,1,0});
HAnimJoint553.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint553.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment554 =  HAnimSegment();
HAnimSegment554.X3DNode::setName(CString("r_metatarsal_3"));
HAnimSegment554.setDEF(CString("hanim_r_metatarsal_3"));
Transform& Transform555 =  Transform();
//Empty Transform
Transform& Transform556 =  Transform();
//Empty Transform
Shape& Shape557 =  Shape();
Shape557.setUSE(CString("HAnimJointShape"));
Transform556.addChild(&Shape557);

Transform555.addChild(&Transform556);

HAnimSegment554.addChild(&Transform555);

Shape& Shape558 =  Shape();
LineSet& LineSet559 =  LineSet();
LineSet559.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate560 =  Coordinate();
Coordinate560.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet559.setCoord(Coordinate560);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA& ColorRGBA561 =  ColorRGBA();
ColorRGBA561.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet559.addChild(&ColorRGBA561);

Shape558.setGeometry(&LineSet559);

HAnimSegment554.addChild(&Shape558);

HAnimJoint553.addChildren(&HAnimSegment554);

HAnimJoint& HAnimJoint562 =  HAnimJoint();
HAnimJoint562.X3DNode::setName(CString("r_metatarsophalangeal_3"));
HAnimJoint562.setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint562.setCenter(new float[]{0,1,0});
HAnimJoint562.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint562.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment563 =  HAnimSegment();
HAnimSegment563.X3DNode::setName(CString("r_tarsal_proximal_phalanx_3"));
HAnimSegment563.setDEF(CString("hanim_r_tarsal_proximal_phalanx_3"));
Transform& Transform564 =  Transform();
//Empty Transform
Transform& Transform565 =  Transform();
//Empty Transform
Shape& Shape566 =  Shape();
Shape566.setUSE(CString("HAnimJointShape"));
Transform565.addChild(&Shape566);

Transform564.addChild(&Transform565);

HAnimSegment563.addChild(&Transform564);

Shape& Shape567 =  Shape();
LineSet& LineSet568 =  LineSet();
LineSet568.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate569 =  Coordinate();
Coordinate569.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet568.setCoord(Coordinate569);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA570 =  ColorRGBA();
ColorRGBA570.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet568.addChild(&ColorRGBA570);

Shape567.setGeometry(&LineSet568);

HAnimSegment563.addChild(&Shape567);

HAnimJoint562.addChildren(&HAnimSegment563);

HAnimJoint& HAnimJoint571 =  HAnimJoint();
HAnimJoint571.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint571.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint571.setCenter(new float[]{0,1,0});
HAnimJoint571.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint571.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment572 =  HAnimSegment();
HAnimSegment572.X3DNode::setName(CString("r_tarsal_middle_phalanx_3"));
HAnimSegment572.setDEF(CString("hanim_r_tarsal_middle_phalanx_3"));
Transform& Transform573 =  Transform();
//Empty Transform
Transform& Transform574 =  Transform();
//Empty Transform
Shape& Shape575 =  Shape();
Shape575.setUSE(CString("HAnimJointShape"));
Transform574.addChild(&Shape575);

Transform573.addChild(&Transform574);

HAnimSegment572.addChild(&Transform573);

Shape& Shape576 =  Shape();
LineSet& LineSet577 =  LineSet();
LineSet577.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate578 =  Coordinate();
Coordinate578.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet577.setCoord(Coordinate578);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA579 =  ColorRGBA();
ColorRGBA579.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet577.addChild(&ColorRGBA579);

Shape576.setGeometry(&LineSet577);

HAnimSegment572.addChild(&Shape576);

HAnimSite& HAnimSite580 =  HAnimSite();
HAnimSite580.X3DNode::setName(CString("r_tarsal_distal_phalanx_3_tip"));
HAnimSite580.setDEF(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimSite580.setTranslation(new float[]{-0.15,-1.13,0});
TouchSensor& TouchSensor581 =  TouchSensor();
TouchSensor581.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_3_tip"));
HAnimSite580.addChild(&TouchSensor581);

Shape& Shape582 =  Shape();
Shape582.setUSE(CString("HAnimSiteShape"));
HAnimSite580.addChild(&Shape582);

HAnimSegment572.addChild(&HAnimSite580);

HAnimJoint571.addChildren(&HAnimSegment572);

HAnimJoint& HAnimJoint583 =  HAnimJoint();
HAnimJoint583.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint583.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint583.setCenter(new float[]{0,1,0});
HAnimJoint583.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint583.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint571.addChildren(&HAnimJoint583);

HAnimJoint562.addChildren(&HAnimJoint571);

HAnimJoint553.addChildren(&HAnimJoint562);

HAnimJoint544.addChildren(&HAnimJoint553);

HAnimJoint453.addChildren(&HAnimJoint544);

HAnimJoint440.addChildren(&HAnimJoint453);

HAnimJoint& HAnimJoint584 =  HAnimJoint();
HAnimJoint584.X3DNode::setName(CString("r_calcaneocuboid"));
HAnimJoint584.setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint584.setCenter(new float[]{0,1,0});
HAnimJoint584.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint584.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment585 =  HAnimSegment();
HAnimSegment585.X3DNode::setName(CString("r_calcaneus"));
HAnimSegment585.setDEF(CString("hanim_r_calcaneus"));
Transform& Transform586 =  Transform();
//Empty Transform
Transform& Transform587 =  Transform();
//Empty Transform
Shape& Shape588 =  Shape();
Shape588.setUSE(CString("HAnimJointShape"));
Transform587.addChild(&Shape588);

Transform586.addChild(&Transform587);

HAnimSegment585.addChild(&Transform586);

Shape& Shape589 =  Shape();
LineSet& LineSet590 =  LineSet();
LineSet590.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate591 =  Coordinate();
Coordinate591.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet590.setCoord(Coordinate591);

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA& ColorRGBA592 =  ColorRGBA();
ColorRGBA592.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet590.addChild(&ColorRGBA592);

Shape589.setGeometry(&LineSet590);

HAnimSegment585.addChild(&Shape589);

HAnimJoint584.addChildren(&HAnimSegment585);

HAnimJoint& HAnimJoint593 =  HAnimJoint();
HAnimJoint593.X3DNode::setName(CString("r_transversetarsal"));
HAnimJoint593.setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint593.setCenter(new float[]{0,1,0});
HAnimJoint593.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint593.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment594 =  HAnimSegment();
HAnimSegment594.X3DNode::setName(CString("r_cuboid"));
HAnimSegment594.setDEF(CString("hanim_r_cuboid"));
Transform& Transform595 =  Transform();
//Empty Transform
Transform& Transform596 =  Transform();
//Empty Transform
Shape& Shape597 =  Shape();
Shape597.setUSE(CString("HAnimJointShape"));
Transform596.addChild(&Shape597);

Transform595.addChild(&Transform596);

HAnimSegment594.addChild(&Transform595);

Shape& Shape598 =  Shape();
LineSet& LineSet599 =  LineSet();
LineSet599.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate600 =  Coordinate();
Coordinate600.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet599.setCoord(Coordinate600);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA& ColorRGBA601 =  ColorRGBA();
ColorRGBA601.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet599.addChild(&ColorRGBA601);

Shape598.setGeometry(&LineSet599);

HAnimSegment594.addChild(&Shape598);

Shape& Shape602 =  Shape();
LineSet& LineSet603 =  LineSet();
LineSet603.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate604 =  Coordinate();
Coordinate604.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet603.setCoord(Coordinate604);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA& ColorRGBA605 =  ColorRGBA();
ColorRGBA605.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet603.addChild(&ColorRGBA605);

Shape602.setGeometry(&LineSet603);

HAnimSegment594.addChild(&Shape602);

HAnimJoint593.addChildren(&HAnimSegment594);

HAnimJoint& HAnimJoint606 =  HAnimJoint();
HAnimJoint606.X3DNode::setName(CString("r_tarsometatarsal_4"));
HAnimJoint606.setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint606.setCenter(new float[]{0,1,0});
HAnimJoint606.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint606.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment607 =  HAnimSegment();
HAnimSegment607.X3DNode::setName(CString("r_metatarsal_4"));
HAnimSegment607.setDEF(CString("hanim_r_metatarsal_4"));
Transform& Transform608 =  Transform();
//Empty Transform
Transform& Transform609 =  Transform();
//Empty Transform
Shape& Shape610 =  Shape();
Shape610.setUSE(CString("HAnimJointShape"));
Transform609.addChild(&Shape610);

Transform608.addChild(&Transform609);

HAnimSegment607.addChild(&Transform608);

Shape& Shape611 =  Shape();
LineSet& LineSet612 =  LineSet();
LineSet612.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate613 =  Coordinate();
Coordinate613.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet612.setCoord(Coordinate613);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA& ColorRGBA614 =  ColorRGBA();
ColorRGBA614.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet612.addChild(&ColorRGBA614);

Shape611.setGeometry(&LineSet612);

HAnimSegment607.addChild(&Shape611);

HAnimJoint606.addChildren(&HAnimSegment607);

HAnimJoint& HAnimJoint615 =  HAnimJoint();
HAnimJoint615.X3DNode::setName(CString("r_metatarsophalangeal_4"));
HAnimJoint615.setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint615.setCenter(new float[]{0,1,0});
HAnimJoint615.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint615.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment616 =  HAnimSegment();
HAnimSegment616.X3DNode::setName(CString("r_tarsal_proximal_phalanx_4"));
HAnimSegment616.setDEF(CString("hanim_r_tarsal_proximal_phalanx_4"));
Transform& Transform617 =  Transform();
//Empty Transform
Transform& Transform618 =  Transform();
//Empty Transform
Shape& Shape619 =  Shape();
Shape619.setUSE(CString("HAnimJointShape"));
Transform618.addChild(&Shape619);

Transform617.addChild(&Transform618);

HAnimSegment616.addChild(&Transform617);

Shape& Shape620 =  Shape();
LineSet& LineSet621 =  LineSet();
LineSet621.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate622 =  Coordinate();
Coordinate622.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet621.setCoord(Coordinate622);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA623 =  ColorRGBA();
ColorRGBA623.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet621.addChild(&ColorRGBA623);

Shape620.setGeometry(&LineSet621);

HAnimSegment616.addChild(&Shape620);

HAnimJoint615.addChildren(&HAnimSegment616);

HAnimJoint& HAnimJoint624 =  HAnimJoint();
HAnimJoint624.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint624.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint624.setCenter(new float[]{0,1,0});
HAnimJoint624.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint624.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment625 =  HAnimSegment();
HAnimSegment625.X3DNode::setName(CString("r_tarsal_middle_phalanx_4"));
HAnimSegment625.setDEF(CString("hanim_r_tarsal_middle_phalanx_4"));
Transform& Transform626 =  Transform();
//Empty Transform
Transform& Transform627 =  Transform();
//Empty Transform
Shape& Shape628 =  Shape();
Shape628.setUSE(CString("HAnimJointShape"));
Transform627.addChild(&Shape628);

Transform626.addChild(&Transform627);

HAnimSegment625.addChild(&Transform626);

Shape& Shape629 =  Shape();
LineSet& LineSet630 =  LineSet();
LineSet630.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate631 =  Coordinate();
Coordinate631.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet630.setCoord(Coordinate631);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA632 =  ColorRGBA();
ColorRGBA632.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet630.addChild(&ColorRGBA632);

Shape629.setGeometry(&LineSet630);

HAnimSegment625.addChild(&Shape629);

HAnimSite& HAnimSite633 =  HAnimSite();
HAnimSite633.X3DNode::setName(CString("r_tarsal_distal_phalanx_4_tip"));
HAnimSite633.setDEF(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimSite633.setTranslation(new float[]{-0.25,-1.1,0});
TouchSensor& TouchSensor634 =  TouchSensor();
TouchSensor634.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_4_tip"));
HAnimSite633.addChild(&TouchSensor634);

Shape& Shape635 =  Shape();
Shape635.setUSE(CString("HAnimSiteShape"));
HAnimSite633.addChild(&Shape635);

HAnimSegment625.addChild(&HAnimSite633);

HAnimJoint624.addChildren(&HAnimSegment625);

HAnimJoint& HAnimJoint636 =  HAnimJoint();
HAnimJoint636.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint636.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint636.setCenter(new float[]{0,1,0});
HAnimJoint636.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint636.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint624.addChildren(&HAnimJoint636);

HAnimJoint615.addChildren(&HAnimJoint624);

HAnimJoint606.addChildren(&HAnimJoint615);

HAnimJoint593.addChildren(&HAnimJoint606);

HAnimJoint& HAnimJoint637 =  HAnimJoint();
HAnimJoint637.X3DNode::setName(CString("r_tarsometatarsal_5"));
HAnimJoint637.setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint637.setCenter(new float[]{0,1,0});
HAnimJoint637.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint637.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment638 =  HAnimSegment();
HAnimSegment638.X3DNode::setName(CString("r_metatarsal_5"));
HAnimSegment638.setDEF(CString("hanim_r_metatarsal_5"));
Transform& Transform639 =  Transform();
//Empty Transform
Transform& Transform640 =  Transform();
//Empty Transform
Shape& Shape641 =  Shape();
Shape641.setUSE(CString("HAnimJointShape"));
Transform640.addChild(&Shape641);

Transform639.addChild(&Transform640);

HAnimSegment638.addChild(&Transform639);

Shape& Shape642 =  Shape();
LineSet& LineSet643 =  LineSet();
LineSet643.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate644 =  Coordinate();
Coordinate644.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet643.setCoord(Coordinate644);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA& ColorRGBA645 =  ColorRGBA();
ColorRGBA645.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet643.addChild(&ColorRGBA645);

Shape642.setGeometry(&LineSet643);

HAnimSegment638.addChild(&Shape642);

HAnimSite& HAnimSite646 =  HAnimSite();
HAnimSite646.X3DNode::setName(CString("r_metatarsal_phalanx_5_pt"));
HAnimSite646.setDEF(CString("hanim_r_metatarsal_phalanx_5_pt"));
HAnimSite646.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor647 =  TouchSensor();
TouchSensor647.setDescription(CString("HAnimSite r_metatarsal_phalanx_5_pt"));
HAnimSite646.addChild(&TouchSensor647);

Shape& Shape648 =  Shape();
Shape648.setUSE(CString("HAnimSiteShape"));
HAnimSite646.addChild(&Shape648);

HAnimSegment638.addChild(&HAnimSite646);

HAnimJoint637.addChildren(&HAnimSegment638);

HAnimJoint& HAnimJoint649 =  HAnimJoint();
HAnimJoint649.X3DNode::setName(CString("r_metatarsophalangeal_5"));
HAnimJoint649.setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint649.setCenter(new float[]{0,1,0});
HAnimJoint649.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint649.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment650 =  HAnimSegment();
HAnimSegment650.X3DNode::setName(CString("r_tarsal_proximal_phalanx_5"));
HAnimSegment650.setDEF(CString("hanim_r_tarsal_proximal_phalanx_5"));
Transform& Transform651 =  Transform();
//Empty Transform
Transform& Transform652 =  Transform();
//Empty Transform
Shape& Shape653 =  Shape();
Shape653.setUSE(CString("HAnimJointShape"));
Transform652.addChild(&Shape653);

Transform651.addChild(&Transform652);

HAnimSegment650.addChild(&Transform651);

Shape& Shape654 =  Shape();
LineSet& LineSet655 =  LineSet();
LineSet655.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate656 =  Coordinate();
Coordinate656.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet655.setCoord(Coordinate656);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA657 =  ColorRGBA();
ColorRGBA657.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet655.addChild(&ColorRGBA657);

Shape654.setGeometry(&LineSet655);

HAnimSegment650.addChild(&Shape654);

HAnimJoint649.addChildren(&HAnimSegment650);

HAnimJoint& HAnimJoint658 =  HAnimJoint();
HAnimJoint658.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint658.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint658.setCenter(new float[]{0,1,0});
HAnimJoint658.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint658.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment659 =  HAnimSegment();
HAnimSegment659.X3DNode::setName(CString("r_tarsal_middle_phalanx_5"));
HAnimSegment659.setDEF(CString("hanim_r_tarsal_middle_phalanx_5"));
Transform& Transform660 =  Transform();
//Empty Transform
Transform& Transform661 =  Transform();
//Empty Transform
Shape& Shape662 =  Shape();
Shape662.setUSE(CString("HAnimJointShape"));
Transform661.addChild(&Shape662);

Transform660.addChild(&Transform661);

HAnimSegment659.addChild(&Transform660);

Shape& Shape663 =  Shape();
LineSet& LineSet664 =  LineSet();
LineSet664.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate665 =  Coordinate();
Coordinate665.setPoint(new float[]{0,1,0,0,1,0}, 6);
LineSet664.setCoord(Coordinate665);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA666 =  ColorRGBA();
ColorRGBA666.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet664.addChild(&ColorRGBA666);

Shape663.setGeometry(&LineSet664);

HAnimSegment659.addChild(&Shape663);

HAnimSite& HAnimSite667 =  HAnimSite();
HAnimSite667.X3DNode::setName(CString("r_tarsal_distal_phalanx_5_tip"));
HAnimSite667.setDEF(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimSite667.setTranslation(new float[]{-0.34,-1.05,0});
TouchSensor& TouchSensor668 =  TouchSensor();
TouchSensor668.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_5_tip"));
HAnimSite667.addChild(&TouchSensor668);

Shape& Shape669 =  Shape();
Shape669.setUSE(CString("HAnimSiteShape"));
HAnimSite667.addChild(&Shape669);

HAnimSegment659.addChild(&HAnimSite667);

HAnimJoint658.addChildren(&HAnimSegment659);

HAnimJoint& HAnimJoint670 =  HAnimJoint();
HAnimJoint670.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint670.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimJoint670.setCenter(new float[]{0,1,0});
HAnimJoint670.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint670.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint658.addChildren(&HAnimJoint670);

HAnimJoint649.addChildren(&HAnimJoint658);

HAnimJoint637.addChildren(&HAnimJoint649);

HAnimJoint593.addChildren(&HAnimJoint637);

HAnimJoint584.addChildren(&HAnimJoint593);

HAnimJoint440.addChildren(&HAnimJoint584);

HAnimJoint425.addChildren(&HAnimJoint440);

HAnimJoint407.addChildren(&HAnimJoint425);

HAnimJoint106.addChildren(&HAnimJoint407);

HAnimJoint52.addChildren(&HAnimJoint106);

HAnimJoint& HAnimJoint671 =  HAnimJoint();
HAnimJoint671.X3DNode::setName(CString("vl5"));
HAnimJoint671.setDEF(CString("hanim_vl5"));
HAnimJoint671.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimJoint671.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint671.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment672 =  HAnimSegment();
HAnimSegment672.X3DNode::setName(CString("l5"));
HAnimSegment672.setDEF(CString("hanim_l5"));
Transform& Transform673 =  Transform();
//Empty Transform
Transform& Transform674 =  Transform();
//Empty Transform
Shape& Shape675 =  Shape();
Shape675.setUSE(CString("HAnimJointShape"));
Transform674.addChild(&Shape675);

Transform673.addChild(&Transform674);

HAnimSegment672.addChild(&Transform673);

Shape& Shape676 =  Shape();
LineSet& LineSet677 =  LineSet();
LineSet677.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate678 =  Coordinate();
Coordinate678.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet677.setCoord(Coordinate678);

//from vl5 to vl4 vertices 2
ColorRGBA& ColorRGBA679 =  ColorRGBA();
ColorRGBA679.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet677.addChild(&ColorRGBA679);

Shape676.setGeometry(&LineSet677);

HAnimSegment672.addChild(&Shape676);

HAnimJoint671.addChildren(&HAnimSegment672);

HAnimJoint& HAnimJoint680 =  HAnimJoint();
HAnimJoint680.X3DNode::setName(CString("vl4"));
HAnimJoint680.setDEF(CString("hanim_vl4"));
HAnimJoint680.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimJoint680.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint680.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment681 =  HAnimSegment();
HAnimSegment681.X3DNode::setName(CString("l4"));
HAnimSegment681.setDEF(CString("hanim_l4"));
Transform& Transform682 =  Transform();
//Empty Transform
Transform& Transform683 =  Transform();
//Empty Transform
Shape& Shape684 =  Shape();
Shape684.setUSE(CString("HAnimJointShape"));
Transform683.addChild(&Shape684);

Transform682.addChild(&Transform683);

HAnimSegment681.addChild(&Transform682);

Shape& Shape685 =  Shape();
LineSet& LineSet686 =  LineSet();
LineSet686.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate687 =  Coordinate();
Coordinate687.setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet686.setCoord(Coordinate687);

//from vl4 to vl3 vertices 2
ColorRGBA& ColorRGBA688 =  ColorRGBA();
ColorRGBA688.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet686.addChild(&ColorRGBA688);

Shape685.setGeometry(&LineSet686);

HAnimSegment681.addChild(&Shape685);

HAnimJoint680.addChildren(&HAnimSegment681);

HAnimJoint& HAnimJoint689 =  HAnimJoint();
HAnimJoint689.X3DNode::setName(CString("vl3"));
HAnimJoint689.setDEF(CString("hanim_vl3"));
HAnimJoint689.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimJoint689.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint689.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment690 =  HAnimSegment();
HAnimSegment690.X3DNode::setName(CString("l3"));
HAnimSegment690.setDEF(CString("hanim_l3"));
Transform& Transform691 =  Transform();
//Empty Transform
Transform& Transform692 =  Transform();
//Empty Transform
Shape& Shape693 =  Shape();
Shape693.setUSE(CString("HAnimJointShape"));
Transform692.addChild(&Shape693);

Transform691.addChild(&Transform692);

HAnimSegment690.addChild(&Transform691);

Shape& Shape694 =  Shape();
LineSet& LineSet695 =  LineSet();
LineSet695.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate696 =  Coordinate();
Coordinate696.setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet695.setCoord(Coordinate696);

//from vl3 to vl2 vertices 2
ColorRGBA& ColorRGBA697 =  ColorRGBA();
ColorRGBA697.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet695.addChild(&ColorRGBA697);

Shape694.setGeometry(&LineSet695);

HAnimSegment690.addChild(&Shape694);

HAnimSite& HAnimSite698 =  HAnimSite();
HAnimSite698.X3DNode::setName(CString("l_rib10_pt"));
HAnimSite698.setDEF(CString("hanim_l_rib10_pt"));
HAnimSite698.setTranslation(new float[]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor699 =  TouchSensor();
TouchSensor699.setDescription(CString("HAnimSite l_rib10_pt"));
HAnimSite698.addChild(&TouchSensor699);

Shape& Shape700 =  Shape();
Shape700.setUSE(CString("HAnimSiteShape"));
HAnimSite698.addChild(&Shape700);

HAnimSegment690.addChild(&HAnimSite698);

HAnimSite& HAnimSite701 =  HAnimSite();
HAnimSite701.X3DNode::setName(CString("r_rib10_pt"));
HAnimSite701.setDEF(CString("hanim_r_rib10_pt"));
HAnimSite701.setTranslation(new float[]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor702 =  TouchSensor();
TouchSensor702.setDescription(CString("HAnimSite r_rib10_pt"));
HAnimSite701.addChild(&TouchSensor702);

Shape& Shape703 =  Shape();
Shape703.setUSE(CString("HAnimSiteShape"));
HAnimSite701.addChild(&Shape703);

HAnimSegment690.addChild(&HAnimSite701);

HAnimSite& HAnimSite704 =  HAnimSite();
HAnimSite704.X3DNode::setName(CString("spine_2_middle_back_pt"));
HAnimSite704.setDEF(CString("hanim_spine_2_middle_back_pt"));
HAnimSite704.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor705 =  TouchSensor();
TouchSensor705.setDescription(CString("HAnimSite spine_2_middle_back_pt"));
HAnimSite704.addChild(&TouchSensor705);

Shape& Shape706 =  Shape();
Shape706.setUSE(CString("HAnimSiteShape"));
HAnimSite704.addChild(&Shape706);

HAnimSegment690.addChild(&HAnimSite704);

HAnimJoint689.addChildren(&HAnimSegment690);

HAnimJoint& HAnimJoint707 =  HAnimJoint();
HAnimJoint707.X3DNode::setName(CString("vl2"));
HAnimJoint707.setDEF(CString("hanim_vl2"));
HAnimJoint707.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimJoint707.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint707.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment708 =  HAnimSegment();
HAnimSegment708.X3DNode::setName(CString("l2"));
HAnimSegment708.setDEF(CString("hanim_l2"));
Transform& Transform709 =  Transform();
//Empty Transform
Transform& Transform710 =  Transform();
//Empty Transform
Shape& Shape711 =  Shape();
Shape711.setUSE(CString("HAnimJointShape"));
Transform710.addChild(&Shape711);

Transform709.addChild(&Transform710);

HAnimSegment708.addChild(&Transform709);

Shape& Shape712 =  Shape();
LineSet& LineSet713 =  LineSet();
LineSet713.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate714 =  Coordinate();
Coordinate714.setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet713.setCoord(Coordinate714);

//from vl2 to vl1 vertices 2
ColorRGBA& ColorRGBA715 =  ColorRGBA();
ColorRGBA715.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet713.addChild(&ColorRGBA715);

Shape712.setGeometry(&LineSet713);

HAnimSegment708.addChild(&Shape712);

HAnimJoint707.addChildren(&HAnimSegment708);

HAnimJoint& HAnimJoint716 =  HAnimJoint();
HAnimJoint716.X3DNode::setName(CString("vl1"));
HAnimJoint716.setDEF(CString("hanim_vl1"));
HAnimJoint716.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimJoint716.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint716.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment717 =  HAnimSegment();
HAnimSegment717.X3DNode::setName(CString("l1"));
HAnimSegment717.setDEF(CString("hanim_l1"));
Transform& Transform718 =  Transform();
//Empty Transform
Transform& Transform719 =  Transform();
//Empty Transform
Shape& Shape720 =  Shape();
Shape720.setUSE(CString("HAnimJointShape"));
Transform719.addChild(&Shape720);

Transform718.addChild(&Transform719);

HAnimSegment717.addChild(&Transform718);

Shape& Shape721 =  Shape();
LineSet& LineSet722 =  LineSet();
LineSet722.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate723 =  Coordinate();
Coordinate723.setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet722.setCoord(Coordinate723);

//from vl1 to vt12 vertices 2
ColorRGBA& ColorRGBA724 =  ColorRGBA();
ColorRGBA724.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet722.addChild(&ColorRGBA724);

Shape721.setGeometry(&LineSet722);

HAnimSegment717.addChild(&Shape721);

HAnimJoint716.addChildren(&HAnimSegment717);

HAnimJoint& HAnimJoint725 =  HAnimJoint();
HAnimJoint725.X3DNode::setName(CString("vt12"));
HAnimJoint725.setDEF(CString("hanim_vt12"));
HAnimJoint725.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimJoint725.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint725.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment726 =  HAnimSegment();
HAnimSegment726.X3DNode::setName(CString("t12"));
HAnimSegment726.setDEF(CString("hanim_t12"));
Transform& Transform727 =  Transform();
//Empty Transform
Transform& Transform728 =  Transform();
//Empty Transform
Shape& Shape729 =  Shape();
Shape729.setUSE(CString("HAnimJointShape"));
Transform728.addChild(&Shape729);

Transform727.addChild(&Transform728);

HAnimSegment726.addChild(&Transform727);

Shape& Shape730 =  Shape();
LineSet& LineSet731 =  LineSet();
LineSet731.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate732 =  Coordinate();
Coordinate732.setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet731.setCoord(Coordinate732);

//from vt12 to vt11 vertices 2
ColorRGBA& ColorRGBA733 =  ColorRGBA();
ColorRGBA733.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet731.addChild(&ColorRGBA733);

Shape730.setGeometry(&LineSet731);

HAnimSegment726.addChild(&Shape730);

HAnimJoint725.addChildren(&HAnimSegment726);

HAnimJoint& HAnimJoint734 =  HAnimJoint();
HAnimJoint734.X3DNode::setName(CString("vt11"));
HAnimJoint734.setDEF(CString("hanim_vt11"));
HAnimJoint734.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimJoint734.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint734.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment735 =  HAnimSegment();
HAnimSegment735.X3DNode::setName(CString("t11"));
HAnimSegment735.setDEF(CString("hanim_t11"));
Transform& Transform736 =  Transform();
//Empty Transform
Transform& Transform737 =  Transform();
//Empty Transform
Shape& Shape738 =  Shape();
Shape738.setUSE(CString("HAnimJointShape"));
Transform737.addChild(&Shape738);

Transform736.addChild(&Transform737);

HAnimSegment735.addChild(&Transform736);

Shape& Shape739 =  Shape();
LineSet& LineSet740 =  LineSet();
LineSet740.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate741 =  Coordinate();
Coordinate741.setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet740.setCoord(Coordinate741);

//from vt11 to vt10 vertices 2
ColorRGBA& ColorRGBA742 =  ColorRGBA();
ColorRGBA742.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet740.addChild(&ColorRGBA742);

Shape739.setGeometry(&LineSet740);

HAnimSegment735.addChild(&Shape739);

HAnimSite& HAnimSite743 =  HAnimSite();
HAnimSite743.X3DNode::setName(CString("substernale_pt"));
HAnimSite743.setDEF(CString("hanim_substernale_pt"));
HAnimSite743.setTranslation(new float[]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor744 =  TouchSensor();
TouchSensor744.setDescription(CString("HAnimSite substernale_pt"));
HAnimSite743.addChild(&TouchSensor744);

Shape& Shape745 =  Shape();
Shape745.setUSE(CString("HAnimSiteShape"));
HAnimSite743.addChild(&Shape745);

HAnimSegment735.addChild(&HAnimSite743);

HAnimJoint734.addChildren(&HAnimSegment735);

HAnimJoint& HAnimJoint746 =  HAnimJoint();
HAnimJoint746.X3DNode::setName(CString("vt10"));
HAnimJoint746.setDEF(CString("hanim_vt10"));
HAnimJoint746.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimJoint746.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint746.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment747 =  HAnimSegment();
HAnimSegment747.X3DNode::setName(CString("t10"));
HAnimSegment747.setDEF(CString("hanim_t10"));
Transform& Transform748 =  Transform();
//Empty Transform
Transform& Transform749 =  Transform();
//Empty Transform
Shape& Shape750 =  Shape();
Shape750.setUSE(CString("HAnimJointShape"));
Transform749.addChild(&Shape750);

Transform748.addChild(&Transform749);

HAnimSegment747.addChild(&Transform748);

Shape& Shape751 =  Shape();
LineSet& LineSet752 =  LineSet();
LineSet752.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate753 =  Coordinate();
Coordinate753.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet752.setCoord(Coordinate753);

//from vt10 to vt9 vertices 2
ColorRGBA& ColorRGBA754 =  ColorRGBA();
ColorRGBA754.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet752.addChild(&ColorRGBA754);

Shape751.setGeometry(&LineSet752);

HAnimSegment747.addChild(&Shape751);

HAnimSite& HAnimSite755 =  HAnimSite();
HAnimSite755.X3DNode::setName(CString("l_thelion_pt"));
HAnimSite755.setDEF(CString("hanim_l_thelion_pt"));
HAnimSite755.setTranslation(new float[]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor756 =  TouchSensor();
TouchSensor756.setDescription(CString("HAnimSite l_thelion_pt"));
HAnimSite755.addChild(&TouchSensor756);

Shape& Shape757 =  Shape();
Shape757.setUSE(CString("HAnimSiteShape"));
HAnimSite755.addChild(&Shape757);

HAnimSegment747.addChild(&HAnimSite755);

HAnimSite& HAnimSite758 =  HAnimSite();
HAnimSite758.X3DNode::setName(CString("r_thelion_pt"));
HAnimSite758.setDEF(CString("hanim_r_thelion_pt"));
HAnimSite758.setTranslation(new float[]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor759 =  TouchSensor();
TouchSensor759.setDescription(CString("HAnimSite r_thelion_pt"));
HAnimSite758.addChild(&TouchSensor759);

Shape& Shape760 =  Shape();
Shape760.setUSE(CString("HAnimSiteShape"));
HAnimSite758.addChild(&Shape760);

HAnimSegment747.addChild(&HAnimSite758);

HAnimJoint746.addChildren(&HAnimSegment747);

HAnimJoint& HAnimJoint761 =  HAnimJoint();
HAnimJoint761.X3DNode::setName(CString("vt9"));
HAnimJoint761.setDEF(CString("hanim_vt9"));
HAnimJoint761.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimJoint761.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint761.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment762 =  HAnimSegment();
HAnimSegment762.X3DNode::setName(CString("t9"));
HAnimSegment762.setDEF(CString("hanim_t9"));
Transform& Transform763 =  Transform();
//Empty Transform
Transform& Transform764 =  Transform();
//Empty Transform
Shape& Shape765 =  Shape();
Shape765.setUSE(CString("HAnimJointShape"));
Transform764.addChild(&Shape765);

Transform763.addChild(&Transform764);

HAnimSegment762.addChild(&Transform763);

Shape& Shape766 =  Shape();
LineSet& LineSet767 =  LineSet();
LineSet767.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate768 =  Coordinate();
Coordinate768.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet767.setCoord(Coordinate768);

//from vt9 to vt8 vertices 2
ColorRGBA& ColorRGBA769 =  ColorRGBA();
ColorRGBA769.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet767.addChild(&ColorRGBA769);

Shape766.setGeometry(&LineSet767);

HAnimSegment762.addChild(&Shape766);

HAnimJoint761.addChildren(&HAnimSegment762);

HAnimJoint& HAnimJoint770 =  HAnimJoint();
HAnimJoint770.X3DNode::setName(CString("vt8"));
HAnimJoint770.setDEF(CString("hanim_vt8"));
HAnimJoint770.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimJoint770.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint770.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment771 =  HAnimSegment();
HAnimSegment771.X3DNode::setName(CString("t8"));
HAnimSegment771.setDEF(CString("hanim_t8"));
Transform& Transform772 =  Transform();
//Empty Transform
Transform& Transform773 =  Transform();
//Empty Transform
Shape& Shape774 =  Shape();
Shape774.setUSE(CString("HAnimJointShape"));
Transform773.addChild(&Shape774);

Transform772.addChild(&Transform773);

HAnimSegment771.addChild(&Transform772);

Shape& Shape775 =  Shape();
LineSet& LineSet776 =  LineSet();
LineSet776.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate777 =  Coordinate();
Coordinate777.setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet776.setCoord(Coordinate777);

//from vt8 to vt7 vertices 2
ColorRGBA& ColorRGBA778 =  ColorRGBA();
ColorRGBA778.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet776.addChild(&ColorRGBA778);

Shape775.setGeometry(&LineSet776);

HAnimSegment771.addChild(&Shape775);

HAnimJoint770.addChildren(&HAnimSegment771);

HAnimJoint& HAnimJoint779 =  HAnimJoint();
HAnimJoint779.X3DNode::setName(CString("vt7"));
HAnimJoint779.setDEF(CString("hanim_vt7"));
HAnimJoint779.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimJoint779.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint779.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment780 =  HAnimSegment();
HAnimSegment780.X3DNode::setName(CString("t7"));
HAnimSegment780.setDEF(CString("hanim_t7"));
Transform& Transform781 =  Transform();
//Empty Transform
Transform& Transform782 =  Transform();
//Empty Transform
Shape& Shape783 =  Shape();
Shape783.setUSE(CString("HAnimJointShape"));
Transform782.addChild(&Shape783);

Transform781.addChild(&Transform782);

HAnimSegment780.addChild(&Transform781);

Shape& Shape784 =  Shape();
LineSet& LineSet785 =  LineSet();
LineSet785.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate786 =  Coordinate();
Coordinate786.setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet785.setCoord(Coordinate786);

//from vt7 to vt6 vertices 2
ColorRGBA& ColorRGBA787 =  ColorRGBA();
ColorRGBA787.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet785.addChild(&ColorRGBA787);

Shape784.setGeometry(&LineSet785);

HAnimSegment780.addChild(&Shape784);

HAnimSite& HAnimSite788 =  HAnimSite();
HAnimSite788.X3DNode::setName(CString("l_chest_midsagittal_plane_pt"));
HAnimSite788.setDEF(CString("hanim_l_chest_midsagittal_plane_pt"));
HAnimSite788.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor789 =  TouchSensor();
TouchSensor789.setDescription(CString("HAnimSite l_chest_midsagittal_plane_pt"));
HAnimSite788.addChild(&TouchSensor789);

Shape& Shape790 =  Shape();
Shape790.setUSE(CString("HAnimSiteShape"));
HAnimSite788.addChild(&Shape790);

HAnimSegment780.addChild(&HAnimSite788);

HAnimSite& HAnimSite791 =  HAnimSite();
HAnimSite791.X3DNode::setName(CString("mesosternale_pt"));
HAnimSite791.setDEF(CString("hanim_mesosternale_pt"));
HAnimSite791.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor792 =  TouchSensor();
TouchSensor792.setDescription(CString("HAnimSite mesosternale_pt"));
HAnimSite791.addChild(&TouchSensor792);

Shape& Shape793 =  Shape();
Shape793.setUSE(CString("HAnimSiteShape"));
HAnimSite791.addChild(&Shape793);

HAnimSegment780.addChild(&HAnimSite791);

HAnimSite& HAnimSite794 =  HAnimSite();
HAnimSite794.X3DNode::setName(CString("r_chest_midsagittal_plane_pt"));
HAnimSite794.setDEF(CString("hanim_r_chest_midsagittal_plane_pt"));
HAnimSite794.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor795 =  TouchSensor();
TouchSensor795.setDescription(CString("HAnimSite r_chest_midsagittal_plane_pt"));
HAnimSite794.addChild(&TouchSensor795);

Shape& Shape796 =  Shape();
Shape796.setUSE(CString("HAnimSiteShape"));
HAnimSite794.addChild(&Shape796);

HAnimSegment780.addChild(&HAnimSite794);

HAnimSite& HAnimSite797 =  HAnimSite();
HAnimSite797.X3DNode::setName(CString("rear_center_midsagittal_plane_pt"));
HAnimSite797.setDEF(CString("hanim_rear_center_midsagittal_plane_pt"));
HAnimSite797.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor798 =  TouchSensor();
TouchSensor798.setDescription(CString("HAnimSite rear_center_midsagittal_plane_pt"));
HAnimSite797.addChild(&TouchSensor798);

Shape& Shape799 =  Shape();
Shape799.setUSE(CString("HAnimSiteShape"));
HAnimSite797.addChild(&Shape799);

HAnimSegment780.addChild(&HAnimSite797);

HAnimJoint779.addChildren(&HAnimSegment780);

HAnimJoint& HAnimJoint800 =  HAnimJoint();
HAnimJoint800.X3DNode::setName(CString("vt6"));
HAnimJoint800.setDEF(CString("hanim_vt6"));
HAnimJoint800.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimJoint800.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint800.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment801 =  HAnimSegment();
HAnimSegment801.X3DNode::setName(CString("t6"));
HAnimSegment801.setDEF(CString("hanim_t6"));
Transform& Transform802 =  Transform();
//Empty Transform
Transform& Transform803 =  Transform();
//Empty Transform
Shape& Shape804 =  Shape();
Shape804.setUSE(CString("HAnimJointShape"));
Transform803.addChild(&Shape804);

Transform802.addChild(&Transform803);

HAnimSegment801.addChild(&Transform802);

Shape& Shape805 =  Shape();
LineSet& LineSet806 =  LineSet();
LineSet806.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate807 =  Coordinate();
Coordinate807.setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet806.setCoord(Coordinate807);

//from vt6 to vt5 vertices 2
ColorRGBA& ColorRGBA808 =  ColorRGBA();
ColorRGBA808.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet806.addChild(&ColorRGBA808);

Shape805.setGeometry(&LineSet806);

HAnimSegment801.addChild(&Shape805);

HAnimSite& HAnimSite809 =  HAnimSite();
HAnimSite809.X3DNode::setName(CString("spine_1_middle_back_pt"));
HAnimSite809.setDEF(CString("hanim_spine_1_middle_back_pt"));
HAnimSite809.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor810 =  TouchSensor();
TouchSensor810.setDescription(CString("HAnimSite spine_1_middle_back_pt"));
HAnimSite809.addChild(&TouchSensor810);

Shape& Shape811 =  Shape();
Shape811.setUSE(CString("HAnimSiteShape"));
HAnimSite809.addChild(&Shape811);

HAnimSegment801.addChild(&HAnimSite809);

HAnimJoint800.addChildren(&HAnimSegment801);

HAnimJoint& HAnimJoint812 =  HAnimJoint();
HAnimJoint812.X3DNode::setName(CString("vt5"));
HAnimJoint812.setDEF(CString("hanim_vt5"));
HAnimJoint812.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimJoint812.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint812.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment813 =  HAnimSegment();
HAnimSegment813.X3DNode::setName(CString("t5"));
HAnimSegment813.setDEF(CString("hanim_t5"));
Transform& Transform814 =  Transform();
//Empty Transform
Transform& Transform815 =  Transform();
//Empty Transform
Shape& Shape816 =  Shape();
Shape816.setUSE(CString("HAnimJointShape"));
Transform815.addChild(&Shape816);

Transform814.addChild(&Transform815);

HAnimSegment813.addChild(&Transform814);

Shape& Shape817 =  Shape();
LineSet& LineSet818 =  LineSet();
LineSet818.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate819 =  Coordinate();
Coordinate819.setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet818.setCoord(Coordinate819);

//from vt5 to vt4 vertices 2
ColorRGBA& ColorRGBA820 =  ColorRGBA();
ColorRGBA820.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet818.addChild(&ColorRGBA820);

Shape817.setGeometry(&LineSet818);

HAnimSegment813.addChild(&Shape817);

HAnimJoint812.addChildren(&HAnimSegment813);

HAnimJoint& HAnimJoint821 =  HAnimJoint();
HAnimJoint821.X3DNode::setName(CString("vt4"));
HAnimJoint821.setDEF(CString("hanim_vt4"));
HAnimJoint821.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimJoint821.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint821.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment822 =  HAnimSegment();
HAnimSegment822.X3DNode::setName(CString("t4"));
HAnimSegment822.setDEF(CString("hanim_t4"));
Transform& Transform823 =  Transform();
//Empty Transform
Transform& Transform824 =  Transform();
//Empty Transform
Shape& Shape825 =  Shape();
Shape825.setUSE(CString("HAnimJointShape"));
Transform824.addChild(&Shape825);

Transform823.addChild(&Transform824);

HAnimSegment822.addChild(&Transform823);

Shape& Shape826 =  Shape();
LineSet& LineSet827 =  LineSet();
LineSet827.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate828 =  Coordinate();
Coordinate828.setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet827.setCoord(Coordinate828);

//from vt4 to vt3 vertices 2
ColorRGBA& ColorRGBA829 =  ColorRGBA();
ColorRGBA829.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet827.addChild(&ColorRGBA829);

Shape826.setGeometry(&LineSet827);

HAnimSegment822.addChild(&Shape826);

HAnimJoint821.addChildren(&HAnimSegment822);

HAnimJoint& HAnimJoint830 =  HAnimJoint();
HAnimJoint830.X3DNode::setName(CString("vt3"));
HAnimJoint830.setDEF(CString("hanim_vt3"));
HAnimJoint830.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimJoint830.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint830.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment831 =  HAnimSegment();
HAnimSegment831.X3DNode::setName(CString("t3"));
HAnimSegment831.setDEF(CString("hanim_t3"));
Transform& Transform832 =  Transform();
//Empty Transform
Transform& Transform833 =  Transform();
//Empty Transform
Shape& Shape834 =  Shape();
Shape834.setUSE(CString("HAnimJointShape"));
Transform833.addChild(&Shape834);

Transform832.addChild(&Transform833);

HAnimSegment831.addChild(&Transform832);

Shape& Shape835 =  Shape();
LineSet& LineSet836 =  LineSet();
LineSet836.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate837 =  Coordinate();
Coordinate837.setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet836.setCoord(Coordinate837);

//from vt3 to vt2 vertices 2
ColorRGBA& ColorRGBA838 =  ColorRGBA();
ColorRGBA838.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet836.addChild(&ColorRGBA838);

Shape835.setGeometry(&LineSet836);

HAnimSegment831.addChild(&Shape835);

HAnimJoint830.addChildren(&HAnimSegment831);

HAnimJoint& HAnimJoint839 =  HAnimJoint();
HAnimJoint839.X3DNode::setName(CString("vt2"));
HAnimJoint839.setDEF(CString("hanim_vt2"));
HAnimJoint839.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimJoint839.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint839.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment840 =  HAnimSegment();
HAnimSegment840.X3DNode::setName(CString("t2"));
HAnimSegment840.setDEF(CString("hanim_t2"));
Transform& Transform841 =  Transform();
//Empty Transform
Transform& Transform842 =  Transform();
//Empty Transform
Shape& Shape843 =  Shape();
Shape843.setUSE(CString("HAnimJointShape"));
Transform842.addChild(&Shape843);

Transform841.addChild(&Transform842);

HAnimSegment840.addChild(&Transform841);

Shape& Shape844 =  Shape();
LineSet& LineSet845 =  LineSet();
LineSet845.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate846 =  Coordinate();
Coordinate846.setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet845.setCoord(Coordinate846);

//from vt2 to vt1 vertices 2
ColorRGBA& ColorRGBA847 =  ColorRGBA();
ColorRGBA847.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet845.addChild(&ColorRGBA847);

Shape844.setGeometry(&LineSet845);

HAnimSegment840.addChild(&Shape844);

HAnimSite& HAnimSite848 =  HAnimSite();
HAnimSite848.X3DNode::setName(CString("cervicale_pt"));
HAnimSite848.setDEF(CString("hanim_cervicale_pt"));
HAnimSite848.setTranslation(new float[]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor849 =  TouchSensor();
TouchSensor849.setDescription(CString("HAnimSite cervicale_pt"));
HAnimSite848.addChild(&TouchSensor849);

Shape& Shape850 =  Shape();
Shape850.setUSE(CString("HAnimSiteShape"));
HAnimSite848.addChild(&Shape850);

HAnimSegment840.addChild(&HAnimSite848);

HAnimSite& HAnimSite851 =  HAnimSite();
HAnimSite851.X3DNode::setName(CString("suprasternale_pt"));
HAnimSite851.setDEF(CString("hanim_suprasternale_pt"));
HAnimSite851.setTranslation(new float[]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor852 =  TouchSensor();
TouchSensor852.setDescription(CString("HAnimSite suprasternale_pt"));
HAnimSite851.addChild(&TouchSensor852);

Shape& Shape853 =  Shape();
Shape853.setUSE(CString("HAnimSiteShape"));
HAnimSite851.addChild(&Shape853);

HAnimSegment840.addChild(&HAnimSite851);

HAnimJoint839.addChildren(&HAnimSegment840);

HAnimJoint& HAnimJoint854 =  HAnimJoint();
HAnimJoint854.X3DNode::setName(CString("vt1"));
HAnimJoint854.setDEF(CString("hanim_vt1"));
HAnimJoint854.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimJoint854.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint854.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment855 =  HAnimSegment();
HAnimSegment855.X3DNode::setName(CString("t1"));
HAnimSegment855.setDEF(CString("hanim_t1"));
Transform& Transform856 =  Transform();
//Empty Transform
Transform& Transform857 =  Transform();
//Empty Transform
Shape& Shape858 =  Shape();
Shape858.setUSE(CString("HAnimJointShape"));
Transform857.addChild(&Shape858);

Transform856.addChild(&Transform857);

HAnimSegment855.addChild(&Transform856);

Shape& Shape859 =  Shape();
LineSet& LineSet860 =  LineSet();
LineSet860.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate861 =  Coordinate();
Coordinate861.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet860.setCoord(Coordinate861);

//from vt1 to vc7 vertices 2
ColorRGBA& ColorRGBA862 =  ColorRGBA();
ColorRGBA862.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet860.addChild(&ColorRGBA862);

Shape859.setGeometry(&LineSet860);

HAnimSegment855.addChild(&Shape859);

HAnimSite& HAnimSite863 =  HAnimSite();
HAnimSite863.X3DNode::setName(CString("l_neck_base_pt"));
HAnimSite863.setDEF(CString("hanim_l_neck_base_pt"));
HAnimSite863.setTranslation(new float[]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor864 =  TouchSensor();
TouchSensor864.setDescription(CString("HAnimSite l_neck_base_pt"));
HAnimSite863.addChild(&TouchSensor864);

Shape& Shape865 =  Shape();
Shape865.setUSE(CString("HAnimSiteShape"));
HAnimSite863.addChild(&Shape865);

HAnimSegment855.addChild(&HAnimSite863);

HAnimSite& HAnimSite866 =  HAnimSite();
HAnimSite866.X3DNode::setName(CString("r_neck_base_pt"));
HAnimSite866.setDEF(CString("hanim_r_neck_base_pt"));
HAnimSite866.setTranslation(new float[]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor867 =  TouchSensor();
TouchSensor867.setDescription(CString("HAnimSite r_neck_base_pt"));
HAnimSite866.addChild(&TouchSensor867);

Shape& Shape868 =  Shape();
Shape868.setUSE(CString("HAnimSiteShape"));
HAnimSite866.addChild(&Shape868);

HAnimSegment855.addChild(&HAnimSite866);

Shape& Shape869 =  Shape();
LineSet& LineSet870 =  LineSet();
LineSet870.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate871 =  Coordinate();
Coordinate871.setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet870.setCoord(Coordinate871);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA& ColorRGBA872 =  ColorRGBA();
ColorRGBA872.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet870.addChild(&ColorRGBA872);

Shape869.setGeometry(&LineSet870);

HAnimSegment855.addChild(&Shape869);

HAnimSite& HAnimSite873 =  HAnimSite();
HAnimSite873.X3DNode::setName(CString("l_acromion_pt"));
HAnimSite873.setDEF(CString("hanim_l_acromion_pt"));
HAnimSite873.setTranslation(new float[]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor874 =  TouchSensor();
TouchSensor874.setDescription(CString("HAnimSite l_acromion_pt"));
HAnimSite873.addChild(&TouchSensor874);

Shape& Shape875 =  Shape();
Shape875.setUSE(CString("HAnimSiteShape"));
HAnimSite873.addChild(&Shape875);

HAnimSegment855.addChild(&HAnimSite873);

HAnimSite& HAnimSite876 =  HAnimSite();
HAnimSite876.X3DNode::setName(CString("l_axilla_distal_pt"));
HAnimSite876.setDEF(CString("hanim_l_axilla_distal_pt"));
HAnimSite876.setTranslation(new float[]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor877 =  TouchSensor();
TouchSensor877.setDescription(CString("HAnimSite l_axilla_distal_pt"));
HAnimSite876.addChild(&TouchSensor877);

Shape& Shape878 =  Shape();
Shape878.setUSE(CString("HAnimSiteShape"));
HAnimSite876.addChild(&Shape878);

HAnimSegment855.addChild(&HAnimSite876);

HAnimSite& HAnimSite879 =  HAnimSite();
HAnimSite879.X3DNode::setName(CString("l_axilla_posterior_folds_pt"));
HAnimSite879.setDEF(CString("hanim_l_axilla_posterior_folds_pt"));
HAnimSite879.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor880 =  TouchSensor();
TouchSensor880.setDescription(CString("HAnimSite l_axilla_posterior_folds_pt"));
HAnimSite879.addChild(&TouchSensor880);

Shape& Shape881 =  Shape();
Shape881.setUSE(CString("HAnimSiteShape"));
HAnimSite879.addChild(&Shape881);

HAnimSegment855.addChild(&HAnimSite879);

HAnimSite& HAnimSite882 =  HAnimSite();
HAnimSite882.X3DNode::setName(CString("l_axilla_proximal_pt"));
HAnimSite882.setDEF(CString("hanim_l_axilla_proximal_pt"));
HAnimSite882.setTranslation(new float[]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor883 =  TouchSensor();
TouchSensor883.setDescription(CString("HAnimSite l_axilla_proximal_pt"));
HAnimSite882.addChild(&TouchSensor883);

Shape& Shape884 =  Shape();
Shape884.setUSE(CString("HAnimSiteShape"));
HAnimSite882.addChild(&Shape884);

HAnimSegment855.addChild(&HAnimSite882);

HAnimSite& HAnimSite885 =  HAnimSite();
HAnimSite885.X3DNode::setName(CString("l_clavicale_pt"));
HAnimSite885.setDEF(CString("hanim_l_clavicale_pt"));
HAnimSite885.setTranslation(new float[]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor886 =  TouchSensor();
TouchSensor886.setDescription(CString("HAnimSite l_clavicale_pt"));
HAnimSite885.addChild(&TouchSensor886);

Shape& Shape887 =  Shape();
Shape887.setUSE(CString("HAnimSiteShape"));
HAnimSite885.addChild(&Shape887);

HAnimSegment855.addChild(&HAnimSite885);

Shape& Shape888 =  Shape();
LineSet& LineSet889 =  LineSet();
LineSet889.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate890 =  Coordinate();
Coordinate890.setPoint(new float[]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
LineSet889.setCoord(Coordinate890);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA& ColorRGBA891 =  ColorRGBA();
ColorRGBA891.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet889.addChild(&ColorRGBA891);

Shape888.setGeometry(&LineSet889);

HAnimSegment855.addChild(&Shape888);

HAnimSite& HAnimSite892 =  HAnimSite();
HAnimSite892.X3DNode::setName(CString("r_acromion_pt"));
HAnimSite892.setDEF(CString("hanim_r_acromion_pt"));
HAnimSite892.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor893 =  TouchSensor();
TouchSensor893.setDescription(CString("HAnimSite r_acromion_pt"));
HAnimSite892.addChild(&TouchSensor893);

Shape& Shape894 =  Shape();
Shape894.setUSE(CString("HAnimSiteShape"));
HAnimSite892.addChild(&Shape894);

HAnimSegment855.addChild(&HAnimSite892);

HAnimSite& HAnimSite895 =  HAnimSite();
HAnimSite895.X3DNode::setName(CString("r_axilla_distal_pt"));
HAnimSite895.setDEF(CString("hanim_r_axilla_distal_pt"));
HAnimSite895.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor896 =  TouchSensor();
TouchSensor896.setDescription(CString("HAnimSite r_axilla_distal_pt"));
HAnimSite895.addChild(&TouchSensor896);

Shape& Shape897 =  Shape();
Shape897.setUSE(CString("HAnimSiteShape"));
HAnimSite895.addChild(&Shape897);

HAnimSegment855.addChild(&HAnimSite895);

HAnimSite& HAnimSite898 =  HAnimSite();
HAnimSite898.X3DNode::setName(CString("r_axilla_posterior_folds_pt"));
HAnimSite898.setDEF(CString("hanim_r_axilla_posterior_folds_pt"));
HAnimSite898.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor899 =  TouchSensor();
TouchSensor899.setDescription(CString("HAnimSite r_axilla_posterior_folds_pt"));
HAnimSite898.addChild(&TouchSensor899);

Shape& Shape900 =  Shape();
Shape900.setUSE(CString("HAnimSiteShape"));
HAnimSite898.addChild(&Shape900);

HAnimSegment855.addChild(&HAnimSite898);

HAnimSite& HAnimSite901 =  HAnimSite();
HAnimSite901.X3DNode::setName(CString("r_axilla_proximal_pt"));
HAnimSite901.setDEF(CString("hanim_r_axilla_proximal_pt"));
HAnimSite901.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor902 =  TouchSensor();
TouchSensor902.setDescription(CString("HAnimSite r_axilla_proximal_pt"));
HAnimSite901.addChild(&TouchSensor902);

Shape& Shape903 =  Shape();
Shape903.setUSE(CString("HAnimSiteShape"));
HAnimSite901.addChild(&Shape903);

HAnimSegment855.addChild(&HAnimSite901);

HAnimSite& HAnimSite904 =  HAnimSite();
HAnimSite904.X3DNode::setName(CString("r_clavicale_pt"));
HAnimSite904.setDEF(CString("hanim_r_clavicale_pt"));
HAnimSite904.setTranslation(new float[]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor905 =  TouchSensor();
TouchSensor905.setDescription(CString("HAnimSite r_clavicale_pt"));
HAnimSite904.addChild(&TouchSensor905);

Shape& Shape906 =  Shape();
Shape906.setUSE(CString("HAnimSiteShape"));
HAnimSite904.addChild(&Shape906);

HAnimSegment855.addChild(&HAnimSite904);

HAnimJoint854.addChildren(&HAnimSegment855);

HAnimJoint& HAnimJoint907 =  HAnimJoint();
HAnimJoint907.X3DNode::setName(CString("vc7"));
HAnimJoint907.setDEF(CString("hanim_vc7"));
HAnimJoint907.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimJoint907.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint907.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment908 =  HAnimSegment();
HAnimSegment908.X3DNode::setName(CString("c7"));
HAnimSegment908.setDEF(CString("hanim_c7"));
Transform& Transform909 =  Transform();
//Empty Transform
Transform& Transform910 =  Transform();
//Empty Transform
Shape& Shape911 =  Shape();
Shape911.setUSE(CString("HAnimJointShape"));
Transform910.addChild(&Shape911);

Transform909.addChild(&Transform910);

HAnimSegment908.addChild(&Transform909);

Shape& Shape912 =  Shape();
LineSet& LineSet913 =  LineSet();
LineSet913.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate914 =  Coordinate();
Coordinate914.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet913.setCoord(Coordinate914);

//from vc7 to vc6 vertices 2
ColorRGBA& ColorRGBA915 =  ColorRGBA();
ColorRGBA915.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet913.addChild(&ColorRGBA915);

Shape912.setGeometry(&LineSet913);

HAnimSegment908.addChild(&Shape912);

HAnimJoint907.addChildren(&HAnimSegment908);

HAnimJoint& HAnimJoint916 =  HAnimJoint();
HAnimJoint916.X3DNode::setName(CString("vc6"));
HAnimJoint916.setDEF(CString("hanim_vc6"));
HAnimJoint916.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimJoint916.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint916.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment917 =  HAnimSegment();
HAnimSegment917.X3DNode::setName(CString("c6"));
HAnimSegment917.setDEF(CString("hanim_c6"));
Transform& Transform918 =  Transform();
//Empty Transform
Transform& Transform919 =  Transform();
//Empty Transform
Shape& Shape920 =  Shape();
Shape920.setUSE(CString("HAnimJointShape"));
Transform919.addChild(&Shape920);

Transform918.addChild(&Transform919);

HAnimSegment917.addChild(&Transform918);

Shape& Shape921 =  Shape();
LineSet& LineSet922 =  LineSet();
LineSet922.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate923 =  Coordinate();
Coordinate923.setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet922.setCoord(Coordinate923);

//from vc6 to vc5 vertices 2
ColorRGBA& ColorRGBA924 =  ColorRGBA();
ColorRGBA924.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet922.addChild(&ColorRGBA924);

Shape921.setGeometry(&LineSet922);

HAnimSegment917.addChild(&Shape921);

HAnimJoint916.addChildren(&HAnimSegment917);

HAnimJoint& HAnimJoint925 =  HAnimJoint();
HAnimJoint925.X3DNode::setName(CString("vc5"));
HAnimJoint925.setDEF(CString("hanim_vc5"));
HAnimJoint925.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimJoint925.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint925.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment926 =  HAnimSegment();
HAnimSegment926.X3DNode::setName(CString("c5"));
HAnimSegment926.setDEF(CString("hanim_c5"));
Transform& Transform927 =  Transform();
//Empty Transform
Transform& Transform928 =  Transform();
//Empty Transform
Shape& Shape929 =  Shape();
Shape929.setUSE(CString("HAnimJointShape"));
Transform928.addChild(&Shape929);

Transform927.addChild(&Transform928);

HAnimSegment926.addChild(&Transform927);

Shape& Shape930 =  Shape();
LineSet& LineSet931 =  LineSet();
LineSet931.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate932 =  Coordinate();
Coordinate932.setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet931.setCoord(Coordinate932);

//from vc5 to vc4 vertices 2
ColorRGBA& ColorRGBA933 =  ColorRGBA();
ColorRGBA933.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet931.addChild(&ColorRGBA933);

Shape930.setGeometry(&LineSet931);

HAnimSegment926.addChild(&Shape930);

HAnimJoint925.addChildren(&HAnimSegment926);

HAnimJoint& HAnimJoint934 =  HAnimJoint();
HAnimJoint934.X3DNode::setName(CString("vc4"));
HAnimJoint934.setDEF(CString("hanim_vc4"));
HAnimJoint934.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimJoint934.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint934.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment935 =  HAnimSegment();
HAnimSegment935.X3DNode::setName(CString("c4"));
HAnimSegment935.setDEF(CString("hanim_c4"));
Transform& Transform936 =  Transform();
//Empty Transform
Transform& Transform937 =  Transform();
//Empty Transform
Shape& Shape938 =  Shape();
Shape938.setUSE(CString("HAnimJointShape"));
Transform937.addChild(&Shape938);

Transform936.addChild(&Transform937);

HAnimSegment935.addChild(&Transform936);

Shape& Shape939 =  Shape();
LineSet& LineSet940 =  LineSet();
LineSet940.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate941 =  Coordinate();
Coordinate941.setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet940.setCoord(Coordinate941);

//from vc4 to vc3 vertices 2
ColorRGBA& ColorRGBA942 =  ColorRGBA();
ColorRGBA942.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet940.addChild(&ColorRGBA942);

Shape939.setGeometry(&LineSet940);

HAnimSegment935.addChild(&Shape939);

HAnimJoint934.addChildren(&HAnimSegment935);

HAnimJoint& HAnimJoint943 =  HAnimJoint();
HAnimJoint943.X3DNode::setName(CString("vc3"));
HAnimJoint943.setDEF(CString("hanim_vc3"));
HAnimJoint943.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimJoint943.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint943.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment944 =  HAnimSegment();
HAnimSegment944.X3DNode::setName(CString("c3"));
HAnimSegment944.setDEF(CString("hanim_c3"));
Transform& Transform945 =  Transform();
//Empty Transform
Transform& Transform946 =  Transform();
//Empty Transform
Shape& Shape947 =  Shape();
Shape947.setUSE(CString("HAnimJointShape"));
Transform946.addChild(&Shape947);

Transform945.addChild(&Transform946);

HAnimSegment944.addChild(&Transform945);

Shape& Shape948 =  Shape();
LineSet& LineSet949 =  LineSet();
LineSet949.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate950 =  Coordinate();
Coordinate950.setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet949.setCoord(Coordinate950);

//from vc3 to vc2 vertices 2
ColorRGBA& ColorRGBA951 =  ColorRGBA();
ColorRGBA951.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet949.addChild(&ColorRGBA951);

Shape948.setGeometry(&LineSet949);

HAnimSegment944.addChild(&Shape948);

HAnimSite& HAnimSite952 =  HAnimSite();
HAnimSite952.X3DNode::setName(CString("adams_apple_pt"));
HAnimSite952.setDEF(CString("hanim_adams_apple_pt"));
HAnimSite952.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor953 =  TouchSensor();
TouchSensor953.setDescription(CString("HAnimSite adams_apple_pt"));
HAnimSite952.addChild(&TouchSensor953);

Shape& Shape954 =  Shape();
Shape954.setUSE(CString("HAnimSiteShape"));
HAnimSite952.addChild(&Shape954);

HAnimSegment944.addChild(&HAnimSite952);

HAnimJoint943.addChildren(&HAnimSegment944);

HAnimJoint& HAnimJoint955 =  HAnimJoint();
HAnimJoint955.X3DNode::setName(CString("vc2"));
HAnimJoint955.setDEF(CString("hanim_vc2"));
HAnimJoint955.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimJoint955.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint955.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment956 =  HAnimSegment();
HAnimSegment956.X3DNode::setName(CString("c2"));
HAnimSegment956.setDEF(CString("hanim_c2"));
Transform& Transform957 =  Transform();
//Empty Transform
Transform& Transform958 =  Transform();
//Empty Transform
Shape& Shape959 =  Shape();
Shape959.setUSE(CString("HAnimJointShape"));
Transform958.addChild(&Shape959);

Transform957.addChild(&Transform958);

HAnimSegment956.addChild(&Transform957);

Shape& Shape960 =  Shape();
LineSet& LineSet961 =  LineSet();
LineSet961.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate962 =  Coordinate();
Coordinate962.setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet961.setCoord(Coordinate962);

//from vc2 to vc1 vertices 2
ColorRGBA& ColorRGBA963 =  ColorRGBA();
ColorRGBA963.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet961.addChild(&ColorRGBA963);

Shape960.setGeometry(&LineSet961);

HAnimSegment956.addChild(&Shape960);

HAnimJoint955.addChildren(&HAnimSegment956);

HAnimJoint& HAnimJoint964 =  HAnimJoint();
HAnimJoint964.X3DNode::setName(CString("vc1"));
HAnimJoint964.setDEF(CString("hanim_vc1"));
HAnimJoint964.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimJoint964.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint964.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment965 =  HAnimSegment();
HAnimSegment965.X3DNode::setName(CString("c1"));
HAnimSegment965.setDEF(CString("hanim_c1"));
Transform& Transform966 =  Transform();
//Empty Transform
Transform& Transform967 =  Transform();
//Empty Transform
Shape& Shape968 =  Shape();
Shape968.setUSE(CString("HAnimJointShape"));
Transform967.addChild(&Shape968);

Transform966.addChild(&Transform967);

HAnimSegment965.addChild(&Transform966);

Shape& Shape969 =  Shape();
LineSet& LineSet970 =  LineSet();
LineSet970.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate971 =  Coordinate();
Coordinate971.setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet970.setCoord(Coordinate971);

//from vc1 to skullbase vertices 2
ColorRGBA& ColorRGBA972 =  ColorRGBA();
ColorRGBA972.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet970.addChild(&ColorRGBA972);

Shape969.setGeometry(&LineSet970);

HAnimSegment965.addChild(&Shape969);

HAnimSite& HAnimSite973 =  HAnimSite();
HAnimSite973.X3DNode::setName(CString("glabella_pt"));
HAnimSite973.setDEF(CString("hanim_glabella_pt"));
HAnimSite973.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor974 =  TouchSensor();
TouchSensor974.setDescription(CString("HAnimSite glabella_pt"));
HAnimSite973.addChild(&TouchSensor974);

Shape& Shape975 =  Shape();
Shape975.setUSE(CString("HAnimSiteShape"));
HAnimSite973.addChild(&Shape975);

HAnimSegment965.addChild(&HAnimSite973);

HAnimSite& HAnimSite976 =  HAnimSite();
HAnimSite976.X3DNode::setName(CString("l_ectocanthus_pt"));
HAnimSite976.setDEF(CString("hanim_l_ectocanthus_pt"));
HAnimSite976.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor977 =  TouchSensor();
TouchSensor977.setDescription(CString("HAnimSite l_ectocanthus_pt"));
HAnimSite976.addChild(&TouchSensor977);

Shape& Shape978 =  Shape();
Shape978.setUSE(CString("HAnimSiteShape"));
HAnimSite976.addChild(&Shape978);

HAnimSegment965.addChild(&HAnimSite976);

HAnimSite& HAnimSite979 =  HAnimSite();
HAnimSite979.X3DNode::setName(CString("l_infraorbitale_pt"));
HAnimSite979.setDEF(CString("hanim_l_infraorbitale_pt"));
HAnimSite979.setTranslation(new float[]{0.0341,1.6171,0.0752});
TouchSensor& TouchSensor980 =  TouchSensor();
TouchSensor980.setDescription(CString("HAnimSite l_infraorbitale_pt"));
HAnimSite979.addChild(&TouchSensor980);

Shape& Shape981 =  Shape();
Shape981.setUSE(CString("HAnimSiteShape"));
HAnimSite979.addChild(&Shape981);

HAnimSegment965.addChild(&HAnimSite979);

HAnimSite& HAnimSite982 =  HAnimSite();
HAnimSite982.X3DNode::setName(CString("l_tragion_pt"));
HAnimSite982.setDEF(CString("hanim_l_tragion_pt"));
HAnimSite982.setTranslation(new float[]{0.0739,1.6348,0.0282});
TouchSensor& TouchSensor983 =  TouchSensor();
TouchSensor983.setDescription(CString("HAnimSite l_tragion_pt"));
HAnimSite982.addChild(&TouchSensor983);

Shape& Shape984 =  Shape();
Shape984.setUSE(CString("HAnimSiteShape"));
HAnimSite982.addChild(&Shape984);

HAnimSegment965.addChild(&HAnimSite982);

HAnimSite& HAnimSite985 =  HAnimSite();
HAnimSite985.X3DNode::setName(CString("nuchale_pt"));
HAnimSite985.setDEF(CString("hanim_nuchale_pt"));
HAnimSite985.setTranslation(new float[]{0.0039,1.5972,-0.0796});
TouchSensor& TouchSensor986 =  TouchSensor();
TouchSensor986.setDescription(CString("HAnimSite nuchale_pt"));
HAnimSite985.addChild(&TouchSensor986);

Shape& Shape987 =  Shape();
Shape987.setUSE(CString("HAnimSiteShape"));
HAnimSite985.addChild(&Shape987);

HAnimSegment965.addChild(&HAnimSite985);

HAnimSite& HAnimSite988 =  HAnimSite();
HAnimSite988.X3DNode::setName(CString("opisthocranion_pt"));
HAnimSite988.setDEF(CString("hanim_opisthocranion_pt"));
HAnimSite988.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor989 =  TouchSensor();
TouchSensor989.setDescription(CString("HAnimSite opisthocranion_pt"));
HAnimSite988.addChild(&TouchSensor989);

Shape& Shape990 =  Shape();
Shape990.setUSE(CString("HAnimSiteShape"));
HAnimSite988.addChild(&Shape990);

HAnimSegment965.addChild(&HAnimSite988);

HAnimSite& HAnimSite991 =  HAnimSite();
HAnimSite991.X3DNode::setName(CString("r_ectocanthus_pt"));
HAnimSite991.setDEF(CString("hanim_r_ectocanthus_pt"));
HAnimSite991.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor992 =  TouchSensor();
TouchSensor992.setDescription(CString("HAnimSite r_ectocanthus_pt"));
HAnimSite991.addChild(&TouchSensor992);

Shape& Shape993 =  Shape();
Shape993.setUSE(CString("HAnimSiteShape"));
HAnimSite991.addChild(&Shape993);

HAnimSegment965.addChild(&HAnimSite991);

HAnimSite& HAnimSite994 =  HAnimSite();
HAnimSite994.X3DNode::setName(CString("r_infraorbitale_pt"));
HAnimSite994.setDEF(CString("hanim_r_infraorbitale_pt"));
HAnimSite994.setTranslation(new float[]{-0.0237,1.6171,0.0752});
TouchSensor& TouchSensor995 =  TouchSensor();
TouchSensor995.setDescription(CString("HAnimSite r_infraorbitale_pt"));
HAnimSite994.addChild(&TouchSensor995);

Shape& Shape996 =  Shape();
Shape996.setUSE(CString("HAnimSiteShape"));
HAnimSite994.addChild(&Shape996);

HAnimSegment965.addChild(&HAnimSite994);

HAnimSite& HAnimSite997 =  HAnimSite();
HAnimSite997.X3DNode::setName(CString("r_tragion_pt"));
HAnimSite997.setDEF(CString("hanim_r_tragion_pt"));
HAnimSite997.setTranslation(new float[]{-0.0646,1.6347,0.0302});
TouchSensor& TouchSensor998 =  TouchSensor();
TouchSensor998.setDescription(CString("HAnimSite r_tragion_pt"));
HAnimSite997.addChild(&TouchSensor998);

Shape& Shape999 =  Shape();
Shape999.setUSE(CString("HAnimSiteShape"));
HAnimSite997.addChild(&Shape999);

HAnimSegment965.addChild(&HAnimSite997);

HAnimSite& HAnimSite1000 =  HAnimSite();
HAnimSite1000.X3DNode::setName(CString("sellion_pt"));
HAnimSite1000.setDEF(CString("hanim_sellion_pt"));
HAnimSite1000.setTranslation(new float[]{0.0058,1.6316,0.0852});
TouchSensor& TouchSensor1001 =  TouchSensor();
TouchSensor1001.setDescription(CString("HAnimSite sellion_pt"));
HAnimSite1000.addChild(&TouchSensor1001);

Shape& Shape1002 =  Shape();
Shape1002.setUSE(CString("HAnimSiteShape"));
HAnimSite1000.addChild(&Shape1002);

HAnimSegment965.addChild(&HAnimSite1000);

HAnimSite& HAnimSite1003 =  HAnimSite();
HAnimSite1003.X3DNode::setName(CString("skull_vertex_pt"));
HAnimSite1003.setDEF(CString("hanim_skull_vertex_pt"));
HAnimSite1003.setTranslation(new float[]{0.005,1.7504,0.0055});
TouchSensor& TouchSensor1004 =  TouchSensor();
TouchSensor1004.setDescription(CString("HAnimSite skull_vertex_pt"));
HAnimSite1003.addChild(&TouchSensor1004);

Shape& Shape1005 =  Shape();
Shape1005.setUSE(CString("HAnimSiteShape"));
HAnimSite1003.addChild(&Shape1005);

HAnimSegment965.addChild(&HAnimSite1003);

HAnimJoint964.addChildren(&HAnimSegment965);

HAnimJoint& HAnimJoint1006 =  HAnimJoint();
HAnimJoint1006.X3DNode::setName(CString("skullbase"));
HAnimJoint1006.setDEF(CString("hanim_skullbase"));
HAnimJoint1006.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimJoint1006.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1006.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1007 =  HAnimSegment();
HAnimSegment1007.X3DNode::setName(CString("skull"));
HAnimSegment1007.setDEF(CString("hanim_skull"));
Transform& Transform1008 =  Transform();
//Empty Transform
Transform& Transform1009 =  Transform();
//Empty Transform
Shape& Shape1010 =  Shape();
Shape1010.setUSE(CString("HAnimJointShape"));
Transform1009.addChild(&Shape1010);

Transform1008.addChild(&Transform1009);

HAnimSegment1007.addChild(&Transform1008);

Shape& Shape1011 =  Shape();
LineSet& LineSet1012 =  LineSet();
LineSet1012.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1013 =  Coordinate();
Coordinate1013.setPoint(new float[]{0.0044,1.6209,0.0236,0,1,0}, 6);
LineSet1012.setCoord(Coordinate1013);

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA& ColorRGBA1014 =  ColorRGBA();
ColorRGBA1014.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1012.addChild(&ColorRGBA1014);

Shape1011.setGeometry(&LineSet1012);

HAnimSegment1007.addChild(&Shape1011);

Shape& Shape1015 =  Shape();
LineSet& LineSet1016 =  LineSet();
LineSet1016.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1017 =  Coordinate();
Coordinate1017.setPoint(new float[]{0.0044,1.6209,0.0236,0,1,0}, 6);
LineSet1016.setCoord(Coordinate1017);

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA& ColorRGBA1018 =  ColorRGBA();
ColorRGBA1018.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1016.addChild(&ColorRGBA1018);

Shape1015.setGeometry(&LineSet1016);

HAnimSegment1007.addChild(&Shape1015);

Shape& Shape1019 =  Shape();
LineSet& LineSet1020 =  LineSet();
LineSet1020.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1021 =  Coordinate();
Coordinate1021.setPoint(new float[]{0.0044,1.6209,0.0236,0,1,0}, 6);
LineSet1020.setCoord(Coordinate1021);

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA& ColorRGBA1022 =  ColorRGBA();
ColorRGBA1022.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1020.addChild(&ColorRGBA1022);

Shape1019.setGeometry(&LineSet1020);

HAnimSegment1007.addChild(&Shape1019);

Shape& Shape1023 =  Shape();
LineSet& LineSet1024 =  LineSet();
LineSet1024.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1025 =  Coordinate();
Coordinate1025.setPoint(new float[]{0.0044,1.6209,0.0236,0,1,0}, 6);
LineSet1024.setCoord(Coordinate1025);

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA& ColorRGBA1026 =  ColorRGBA();
ColorRGBA1026.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1024.addChild(&ColorRGBA1026);

Shape1023.setGeometry(&LineSet1024);

HAnimSegment1007.addChild(&Shape1023);

Shape& Shape1027 =  Shape();
LineSet& LineSet1028 =  LineSet();
LineSet1028.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1029 =  Coordinate();
Coordinate1029.setPoint(new float[]{0.0044,1.6209,0.0236,0,1,0}, 6);
LineSet1028.setCoord(Coordinate1029);

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA1030 =  ColorRGBA();
ColorRGBA1030.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1028.addChild(&ColorRGBA1030);

Shape1027.setGeometry(&LineSet1028);

HAnimSegment1007.addChild(&Shape1027);

Shape& Shape1031 =  Shape();
LineSet& LineSet1032 =  LineSet();
LineSet1032.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1033 =  Coordinate();
Coordinate1033.setPoint(new float[]{0.0044,1.6209,0.0236,0,1,0}, 6);
LineSet1032.setCoord(Coordinate1033);

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA1034 =  ColorRGBA();
ColorRGBA1034.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1032.addChild(&ColorRGBA1034);

Shape1031.setGeometry(&LineSet1032);

HAnimSegment1007.addChild(&Shape1031);

Shape& Shape1035 =  Shape();
LineSet& LineSet1036 =  LineSet();
LineSet1036.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1037 =  Coordinate();
Coordinate1037.setPoint(new float[]{0.0044,1.6209,0.0236,0,1,0}, 6);
LineSet1036.setCoord(Coordinate1037);

//from skullbase to temporomandibular vertices 2
ColorRGBA& ColorRGBA1038 =  ColorRGBA();
ColorRGBA1038.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1036.addChild(&ColorRGBA1038);

Shape1035.setGeometry(&LineSet1036);

HAnimSegment1007.addChild(&Shape1035);

HAnimSite& HAnimSite1039 =  HAnimSite();
HAnimSite1039.X3DNode::setName(CString("l_gonion_pt"));
HAnimSite1039.setDEF(CString("hanim_l_gonion_pt"));
HAnimSite1039.setTranslation(new float[]{0.0631,1.553,0.033});
TouchSensor& TouchSensor1040 =  TouchSensor();
TouchSensor1040.setDescription(CString("HAnimSite l_gonion_pt"));
HAnimSite1039.addChild(&TouchSensor1040);

Shape& Shape1041 =  Shape();
Shape1041.setUSE(CString("HAnimSiteShape"));
HAnimSite1039.addChild(&Shape1041);

HAnimSegment1007.addChild(&HAnimSite1039);

HAnimSite& HAnimSite1042 =  HAnimSite();
HAnimSite1042.X3DNode::setName(CString("menton_pt"));
HAnimSite1042.setDEF(CString("hanim_menton_pt"));
HAnimSite1042.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor1043 =  TouchSensor();
TouchSensor1043.setDescription(CString("HAnimSite menton_pt"));
HAnimSite1042.addChild(&TouchSensor1043);

Shape& Shape1044 =  Shape();
Shape1044.setUSE(CString("HAnimSiteShape"));
HAnimSite1042.addChild(&Shape1044);

HAnimSegment1007.addChild(&HAnimSite1042);

HAnimSite& HAnimSite1045 =  HAnimSite();
HAnimSite1045.X3DNode::setName(CString("r_gonion_pt"));
HAnimSite1045.setDEF(CString("hanim_r_gonion_pt"));
HAnimSite1045.setTranslation(new float[]{-0.052,1.5529,0.0347});
TouchSensor& TouchSensor1046 =  TouchSensor();
TouchSensor1046.setDescription(CString("HAnimSite r_gonion_pt"));
HAnimSite1045.addChild(&TouchSensor1046);

Shape& Shape1047 =  Shape();
Shape1047.setUSE(CString("HAnimSiteShape"));
HAnimSite1045.addChild(&Shape1047);

HAnimSegment1007.addChild(&HAnimSite1045);

HAnimSite& HAnimSite1048 =  HAnimSite();
HAnimSite1048.X3DNode::setName(CString("supramenton_pt"));
HAnimSite1048.setDEF(CString("hanim_supramenton_pt"));
HAnimSite1048.setTranslation(new float[]{0.0061,1.541,0.0805});
TouchSensor& TouchSensor1049 =  TouchSensor();
TouchSensor1049.setDescription(CString("HAnimSite supramenton_pt"));
HAnimSite1048.addChild(&TouchSensor1049);

Shape& Shape1050 =  Shape();
Shape1050.setUSE(CString("HAnimSiteShape"));
HAnimSite1048.addChild(&Shape1050);

HAnimSegment1007.addChild(&HAnimSite1048);

HAnimJoint1006.addChildren(&HAnimSegment1007);

HAnimJoint& HAnimJoint1051 =  HAnimJoint();
HAnimJoint1051.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint1051.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint1051.setCenter(new float[]{0,1,0});
HAnimJoint1051.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1051.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1006.addChildren(&HAnimJoint1051);

HAnimJoint& HAnimJoint1052 =  HAnimJoint();
HAnimJoint1052.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint1052.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint1052.setCenter(new float[]{0,1,0});
HAnimJoint1052.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1052.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1006.addChildren(&HAnimJoint1052);

HAnimJoint& HAnimJoint1053 =  HAnimJoint();
HAnimJoint1053.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint1053.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint1053.setCenter(new float[]{0,1,0});
HAnimJoint1053.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1053.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1006.addChildren(&HAnimJoint1053);

HAnimJoint& HAnimJoint1054 =  HAnimJoint();
HAnimJoint1054.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint1054.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint1054.setCenter(new float[]{0,1,0});
HAnimJoint1054.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1054.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1006.addChildren(&HAnimJoint1054);

HAnimJoint& HAnimJoint1055 =  HAnimJoint();
HAnimJoint1055.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint1055.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint1055.setCenter(new float[]{0,1,0});
HAnimJoint1055.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1055.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1006.addChildren(&HAnimJoint1055);

HAnimJoint& HAnimJoint1056 =  HAnimJoint();
HAnimJoint1056.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint1056.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint1056.setCenter(new float[]{0,1,0});
HAnimJoint1056.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1056.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1006.addChildren(&HAnimJoint1056);

HAnimJoint& HAnimJoint1057 =  HAnimJoint();
HAnimJoint1057.X3DNode::setName(CString("temporomandibular"));
HAnimJoint1057.setDEF(CString("hanim_temporomandibular"));
HAnimJoint1057.setCenter(new float[]{0,1,0});
HAnimJoint1057.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1057.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1006.addChildren(&HAnimJoint1057);

HAnimDisplacer& HAnimDisplacer1058 =  HAnimDisplacer();
HAnimDisplacer1058.X3DNode::setName(CString("skull_tip_raiser_action"));
HAnimDisplacer1058.setDEF(CString("Joe_skull_tip_raiser_action"));
HAnimDisplacer1058.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimDisplacer1058.setDisplacements(new float[]{0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15}, 30);
HAnimJoint1006.setDisplacers(HAnimDisplacer1058);

HAnimJoint964.addChildren(&HAnimJoint1006);

HAnimJoint955.addChildren(&HAnimJoint964);

HAnimJoint943.addChildren(&HAnimJoint955);

HAnimJoint934.addChildren(&HAnimJoint943);

HAnimJoint925.addChildren(&HAnimJoint934);

HAnimJoint916.addChildren(&HAnimJoint925);

HAnimJoint907.addChildren(&HAnimJoint916);

HAnimJoint854.addChildren(&HAnimJoint907);

HAnimJoint& HAnimJoint1059 =  HAnimJoint();
HAnimJoint1059.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint1059.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint1059.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint1059.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1059.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1060 =  HAnimSegment();
HAnimSegment1060.X3DNode::setName(CString("l_clavicle"));
HAnimSegment1060.setDEF(CString("hanim_l_clavicle"));
Transform& Transform1061 =  Transform();
//Empty Transform
Transform& Transform1062 =  Transform();
//Empty Transform
Shape& Shape1063 =  Shape();
Shape1063.setUSE(CString("HAnimJointShape"));
Transform1062.addChild(&Shape1063);

Transform1061.addChild(&Transform1062);

HAnimSegment1060.addChild(&Transform1061);

Shape& Shape1064 =  Shape();
LineSet& LineSet1065 =  LineSet();
LineSet1065.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1066 =  Coordinate();
Coordinate1066.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet1065.setCoord(Coordinate1066);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA& ColorRGBA1067 =  ColorRGBA();
ColorRGBA1067.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1065.addChild(&ColorRGBA1067);

Shape1064.setGeometry(&LineSet1065);

HAnimSegment1060.addChild(&Shape1064);

HAnimJoint1059.addChildren(&HAnimSegment1060);

HAnimJoint& HAnimJoint1068 =  HAnimJoint();
HAnimJoint1068.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint1068.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint1068.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint1068.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1068.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1069 =  HAnimSegment();
HAnimSegment1069.X3DNode::setName(CString("l_scapula"));
HAnimSegment1069.setDEF(CString("hanim_l_scapula"));
Transform& Transform1070 =  Transform();
//Empty Transform
Transform& Transform1071 =  Transform();
//Empty Transform
Shape& Shape1072 =  Shape();
Shape1072.setUSE(CString("HAnimJointShape"));
Transform1071.addChild(&Shape1072);

Transform1070.addChild(&Transform1071);

HAnimSegment1069.addChild(&Transform1070);

Shape& Shape1073 =  Shape();
LineSet& LineSet1074 =  LineSet();
LineSet1074.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1075 =  Coordinate();
Coordinate1075.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet1074.setCoord(Coordinate1075);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA& ColorRGBA1076 =  ColorRGBA();
ColorRGBA1076.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1074.addChild(&ColorRGBA1076);

Shape1073.setGeometry(&LineSet1074);

HAnimSegment1069.addChild(&Shape1073);

HAnimSite& HAnimSite1077 =  HAnimSite();
HAnimSite1077.X3DNode::setName(CString("l_bideltoid_pt"));
HAnimSite1077.setDEF(CString("hanim_l_bideltoid_pt"));
HAnimSite1077.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor1078 =  TouchSensor();
TouchSensor1078.setDescription(CString("HAnimSite l_bideltoid_pt"));
HAnimSite1077.addChild(&TouchSensor1078);

Shape& Shape1079 =  Shape();
Shape1079.setUSE(CString("HAnimSiteShape"));
HAnimSite1077.addChild(&Shape1079);

HAnimSegment1069.addChild(&HAnimSite1077);

HAnimSite& HAnimSite1080 =  HAnimSite();
HAnimSite1080.X3DNode::setName(CString("l_humeral_lateral_epicondyles_pt"));
HAnimSite1080.setDEF(CString("hanim_l_humeral_lateral_epicondyles_pt"));
HAnimSite1080.setTranslation(new float[]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor1081 =  TouchSensor();
TouchSensor1081.setDescription(CString("HAnimSite l_humeral_lateral_epicondyles_pt"));
HAnimSite1080.addChild(&TouchSensor1081);

Shape& Shape1082 =  Shape();
Shape1082.setUSE(CString("HAnimSiteShape"));
HAnimSite1080.addChild(&Shape1082);

HAnimSegment1069.addChild(&HAnimSite1080);

HAnimJoint1068.addChildren(&HAnimSegment1069);

HAnimJoint& HAnimJoint1083 =  HAnimJoint();
HAnimJoint1083.X3DNode::setName(CString("l_shoulder"));
HAnimJoint1083.setDEF(CString("hanim_l_shoulder"));
HAnimJoint1083.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimJoint1083.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1083.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1084 =  HAnimSegment();
HAnimSegment1084.X3DNode::setName(CString("l_upperarm"));
HAnimSegment1084.setDEF(CString("hanim_l_upperarm"));
Transform& Transform1085 =  Transform();
//Empty Transform
Transform& Transform1086 =  Transform();
//Empty Transform
Shape& Shape1087 =  Shape();
Shape1087.setUSE(CString("HAnimJointShape"));
Transform1086.addChild(&Shape1087);

Transform1085.addChild(&Transform1086);

HAnimSegment1084.addChild(&Transform1085);

Shape& Shape1088 =  Shape();
LineSet& LineSet1089 =  LineSet();
LineSet1089.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1090 =  Coordinate();
Coordinate1090.setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet1089.setCoord(Coordinate1090);

//from l_shoulder to l_elbow vertices 2
ColorRGBA& ColorRGBA1091 =  ColorRGBA();
ColorRGBA1091.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1089.addChild(&ColorRGBA1091);

Shape1088.setGeometry(&LineSet1089);

HAnimSegment1084.addChild(&Shape1088);

HAnimSite& HAnimSite1092 =  HAnimSite();
HAnimSite1092.X3DNode::setName(CString("l_humeral_medial_epicondyles_pt"));
HAnimSite1092.setDEF(CString("hanim_l_humeral_medial_epicondyles_pt"));
HAnimSite1092.setTranslation(new float[]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor1093 =  TouchSensor();
TouchSensor1093.setDescription(CString("HAnimSite l_humeral_medial_epicondyles_pt"));
HAnimSite1092.addChild(&TouchSensor1093);

Shape& Shape1094 =  Shape();
Shape1094.setUSE(CString("HAnimSiteShape"));
HAnimSite1092.addChild(&Shape1094);

HAnimSegment1084.addChild(&HAnimSite1092);

HAnimSite& HAnimSite1095 =  HAnimSite();
HAnimSite1095.X3DNode::setName(CString("l_olecranon_pt"));
HAnimSite1095.setDEF(CString("hanim_l_olecranon_pt"));
HAnimSite1095.setTranslation(new float[]{-0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor1096 =  TouchSensor();
TouchSensor1096.setDescription(CString("HAnimSite l_olecranon_pt"));
HAnimSite1095.addChild(&TouchSensor1096);

Shape& Shape1097 =  Shape();
Shape1097.setUSE(CString("HAnimSiteShape"));
HAnimSite1095.addChild(&Shape1097);

HAnimSegment1084.addChild(&HAnimSite1095);

HAnimSite& HAnimSite1098 =  HAnimSite();
HAnimSite1098.X3DNode::setName(CString("l_radial_styloid_pt"));
HAnimSite1098.setDEF(CString("hanim_l_radial_styloid_pt"));
HAnimSite1098.setTranslation(new float[]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor1099 =  TouchSensor();
TouchSensor1099.setDescription(CString("HAnimSite l_radial_styloid_pt"));
HAnimSite1098.addChild(&TouchSensor1099);

Shape& Shape1100 =  Shape();
Shape1100.setUSE(CString("HAnimSiteShape"));
HAnimSite1098.addChild(&Shape1100);

HAnimSegment1084.addChild(&HAnimSite1098);

HAnimSite& HAnimSite1101 =  HAnimSite();
HAnimSite1101.X3DNode::setName(CString("l_radiale_pt"));
HAnimSite1101.setDEF(CString("hanim_l_radiale_pt"));
HAnimSite1101.setTranslation(new float[]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor1102 =  TouchSensor();
TouchSensor1102.setDescription(CString("HAnimSite l_radiale_pt"));
HAnimSite1101.addChild(&TouchSensor1102);

Shape& Shape1103 =  Shape();
Shape1103.setUSE(CString("HAnimSiteShape"));
HAnimSite1101.addChild(&Shape1103);

HAnimSegment1084.addChild(&HAnimSite1101);

HAnimJoint1083.addChildren(&HAnimSegment1084);

HAnimJoint& HAnimJoint1104 =  HAnimJoint();
HAnimJoint1104.X3DNode::setName(CString("l_elbow"));
HAnimJoint1104.setDEF(CString("hanim_l_elbow"));
HAnimJoint1104.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimJoint1104.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1104.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1105 =  HAnimSegment();
HAnimSegment1105.X3DNode::setName(CString("l_forearm"));
HAnimSegment1105.setDEF(CString("hanim_l_forearm"));
Transform& Transform1106 =  Transform();
//Empty Transform
Transform& Transform1107 =  Transform();
//Empty Transform
Shape& Shape1108 =  Shape();
Shape1108.setUSE(CString("HAnimJointShape"));
Transform1107.addChild(&Shape1108);

Transform1106.addChild(&Transform1107);

HAnimSegment1105.addChild(&Transform1106);

Shape& Shape1109 =  Shape();
LineSet& LineSet1110 =  LineSet();
LineSet1110.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1111 =  Coordinate();
Coordinate1111.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet1110.setCoord(Coordinate1111);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA& ColorRGBA1112 =  ColorRGBA();
ColorRGBA1112.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1110.addChild(&ColorRGBA1112);

Shape1109.setGeometry(&LineSet1110);

HAnimSegment1105.addChild(&Shape1109);

HAnimSite& HAnimSite1113 =  HAnimSite();
HAnimSite1113.X3DNode::setName(CString("l_ulnar_styloid_pt"));
HAnimSite1113.setDEF(CString("hanim_l_ulnar_styloid_pt"));
HAnimSite1113.setTranslation(new float[]{-0.2142,0.8529,-0.0648});
TouchSensor& TouchSensor1114 =  TouchSensor();
TouchSensor1114.setDescription(CString("HAnimSite l_ulnar_styloid_pt"));
HAnimSite1113.addChild(&TouchSensor1114);

Shape& Shape1115 =  Shape();
Shape1115.setUSE(CString("HAnimSiteShape"));
HAnimSite1113.addChild(&Shape1115);

HAnimSegment1105.addChild(&HAnimSite1113);

HAnimJoint1104.addChildren(&HAnimSegment1105);

HAnimJoint& HAnimJoint1116 =  HAnimJoint();
HAnimJoint1116.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint1116.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint1116.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimJoint1116.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1116.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1117 =  HAnimSegment();
HAnimSegment1117.X3DNode::setName(CString("l_carpal"));
HAnimSegment1117.setDEF(CString("hanim_l_carpal"));
Transform& Transform1118 =  Transform();
Transform1118.setScale(new float[]{0.2,0.2,0.2});
Transform1118.setTranslation(new float[]{0.2,0.85,-0.05});
Transform1118.setRotation(new float[]{0,0,1,-3.14});
//Transform left hand
Transform& Transform1119 =  Transform();
Transform1119.setRotation(new float[]{0,1,0,-1.57});
//Transform left hand
Shape& Shape1120 =  Shape();
Shape1120.setUSE(CString("HAnimJointShape"));
Transform1119.addChild(&Shape1120);

Transform1118.addChild(&Transform1119);

HAnimSegment1117.addChild(&Transform1118);

Shape& Shape1121 =  Shape();
LineSet& LineSet1122 =  LineSet();
LineSet1122.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1123 =  Coordinate();
Coordinate1123.setPoint(new float[]{0.1984,0.8663,-0.0583,0,1,0}, 6);
LineSet1122.setCoord(Coordinate1123);

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA& ColorRGBA1124 =  ColorRGBA();
ColorRGBA1124.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1122.addChild(&ColorRGBA1124);

Shape1121.setGeometry(&LineSet1122);

HAnimSegment1117.addChild(&Shape1121);

Shape& Shape1125 =  Shape();
LineSet& LineSet1126 =  LineSet();
LineSet1126.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1127 =  Coordinate();
Coordinate1127.setPoint(new float[]{0.1984,0.8663,-0.0583,0,1,0}, 6);
LineSet1126.setCoord(Coordinate1127);

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA& ColorRGBA1128 =  ColorRGBA();
ColorRGBA1128.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1126.addChild(&ColorRGBA1128);

Shape1125.setGeometry(&LineSet1126);

HAnimSegment1117.addChild(&Shape1125);

Shape& Shape1129 =  Shape();
LineSet& LineSet1130 =  LineSet();
LineSet1130.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1131 =  Coordinate();
Coordinate1131.setPoint(new float[]{0.1984,0.8663,-0.0583,0,1,0}, 6);
LineSet1130.setCoord(Coordinate1131);

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA& ColorRGBA1132 =  ColorRGBA();
ColorRGBA1132.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1130.addChild(&ColorRGBA1132);

Shape1129.setGeometry(&LineSet1130);

HAnimSegment1117.addChild(&Shape1129);

Shape& Shape1133 =  Shape();
LineSet& LineSet1134 =  LineSet();
LineSet1134.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1135 =  Coordinate();
Coordinate1135.setPoint(new float[]{0.1984,0.8663,-0.0583,0,1,0}, 6);
LineSet1134.setCoord(Coordinate1135);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA& ColorRGBA1136 =  ColorRGBA();
ColorRGBA1136.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1134.addChild(&ColorRGBA1136);

Shape1133.setGeometry(&LineSet1134);

HAnimSegment1117.addChild(&Shape1133);

HAnimJoint1116.addChildren(&HAnimSegment1117);

HAnimJoint& HAnimJoint1137 =  HAnimJoint();
HAnimJoint1137.X3DNode::setName(CString("l_midcarpal_1"));
HAnimJoint1137.setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint1137.setCenter(new float[]{0,1,0});
HAnimJoint1137.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1137.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1138 =  HAnimSegment();
HAnimSegment1138.X3DNode::setName(CString("l_trapezium"));
HAnimSegment1138.setDEF(CString("hanim_l_trapezium"));
Transform& Transform1139 =  Transform();
//Empty Transform
Transform& Transform1140 =  Transform();
//Empty Transform
Shape& Shape1141 =  Shape();
Shape1141.setUSE(CString("HAnimJointShape"));
Transform1140.addChild(&Shape1141);

Transform1139.addChild(&Transform1140);

HAnimSegment1138.addChild(&Transform1139);

Shape& Shape1142 =  Shape();
LineSet& LineSet1143 =  LineSet();
LineSet1143.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1144 =  Coordinate();
Coordinate1144.setPoint(new float[]{0,1,0,0.1924,0.8472,-0.0534}, 6);
LineSet1143.setCoord(Coordinate1144);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1145 =  ColorRGBA();
ColorRGBA1145.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1143.addChild(&ColorRGBA1145);

Shape1142.setGeometry(&LineSet1143);

HAnimSegment1138.addChild(&Shape1142);

HAnimJoint1137.addChildren(&HAnimSegment1138);

HAnimJoint& HAnimJoint1146 =  HAnimJoint();
HAnimJoint1146.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint1146.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint1146.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint1146.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1146.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1147 =  HAnimSegment();
HAnimSegment1147.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment1147.setDEF(CString("hanim_l_metacarpal_1"));
Transform& Transform1148 =  Transform();
//Empty Transform
Transform& Transform1149 =  Transform();
//Empty Transform
Shape& Shape1150 =  Shape();
Shape1150.setUSE(CString("HAnimJointShape"));
Transform1149.addChild(&Shape1150);

Transform1148.addChild(&Transform1149);

HAnimSegment1147.addChild(&Transform1148);

Shape& Shape1151 =  Shape();
LineSet& LineSet1152 =  LineSet();
LineSet1152.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1153 =  Coordinate();
Coordinate1153.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet1152.setCoord(Coordinate1153);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1154 =  ColorRGBA();
ColorRGBA1154.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1152.addChild(&ColorRGBA1154);

Shape1151.setGeometry(&LineSet1152);

HAnimSegment1147.addChild(&Shape1151);

HAnimJoint1146.addChildren(&HAnimSegment1147);

HAnimJoint& HAnimJoint1155 =  HAnimJoint();
HAnimJoint1155.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint1155.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint1155.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint1155.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1155.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1156 =  HAnimSegment();
HAnimSegment1156.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment1156.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform& Transform1157 =  Transform();
//Empty Transform
Transform& Transform1158 =  Transform();
//Empty Transform
Shape& Shape1159 =  Shape();
Shape1159.setUSE(CString("HAnimJointShape"));
Transform1158.addChild(&Shape1159);

Transform1157.addChild(&Transform1158);

HAnimSegment1156.addChild(&Transform1157);

Shape& Shape1160 =  Shape();
LineSet& LineSet1161 =  LineSet();
LineSet1161.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1162 =  Coordinate();
Coordinate1162.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet1161.setCoord(Coordinate1162);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1163 =  ColorRGBA();
ColorRGBA1163.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1161.addChild(&ColorRGBA1163);

Shape1160.setGeometry(&LineSet1161);

HAnimSegment1156.addChild(&Shape1160);

HAnimSite& HAnimSite1164 =  HAnimSite();
HAnimSite1164.X3DNode::setName(CString("l_carpal_distal_phalanx_1_tip"));
HAnimSite1164.setDEF(CString("hanim_l_carpal_distal_phalanx_1_tip"));
HAnimSite1164.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor1165 =  TouchSensor();
TouchSensor1165.setDescription(CString("HAnimSite l_carpal_distal_phalanx_1_tip"));
HAnimSite1164.addChild(&TouchSensor1165);

Shape& Shape1166 =  Shape();
Shape1166.setUSE(CString("HAnimSiteShape"));
HAnimSite1164.addChild(&Shape1166);

HAnimSegment1156.addChild(&HAnimSite1164);

HAnimJoint1155.addChildren(&HAnimSegment1156);

HAnimJoint& HAnimJoint1167 =  HAnimJoint();
HAnimJoint1167.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint1167.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint1167.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint1167.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1167.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1155.addChildren(&HAnimJoint1167);

HAnimJoint1146.addChildren(&HAnimJoint1155);

HAnimJoint1137.addChildren(&HAnimJoint1146);

HAnimJoint1116.addChildren(&HAnimJoint1137);

HAnimJoint& HAnimJoint1168 =  HAnimJoint();
HAnimJoint1168.X3DNode::setName(CString("l_midcarpal_2"));
HAnimJoint1168.setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint1168.setCenter(new float[]{0,1,0});
HAnimJoint1168.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1168.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1169 =  HAnimSegment();
HAnimSegment1169.X3DNode::setName(CString("l_trapezoid"));
HAnimSegment1169.setDEF(CString("hanim_l_trapezoid"));
Transform& Transform1170 =  Transform();
//Empty Transform
Transform& Transform1171 =  Transform();
//Empty Transform
Shape& Shape1172 =  Shape();
Shape1172.setUSE(CString("HAnimJointShape"));
Transform1171.addChild(&Shape1172);

Transform1170.addChild(&Transform1171);

HAnimSegment1169.addChild(&Transform1170);

Shape& Shape1173 =  Shape();
LineSet& LineSet1174 =  LineSet();
LineSet1174.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1175 =  Coordinate();
Coordinate1175.setPoint(new float[]{0,1,0,0.1983,0.8024,-0.028}, 6);
LineSet1174.setCoord(Coordinate1175);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1176 =  ColorRGBA();
ColorRGBA1176.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1174.addChild(&ColorRGBA1176);

Shape1173.setGeometry(&LineSet1174);

HAnimSegment1169.addChild(&Shape1173);

HAnimSite& HAnimSite1177 =  HAnimSite();
HAnimSite1177.X3DNode::setName(CString("l_metacarpal_phalanx_2_pt"));
HAnimSite1177.setDEF(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimSite1177.setTranslation(new float[]{0.2009,0.8139,-0.0237});
TouchSensor& TouchSensor1178 =  TouchSensor();
TouchSensor1178.setDescription(CString("HAnimSite l_metacarpal_phalanx_2_pt"));
HAnimSite1177.addChild(&TouchSensor1178);

Shape& Shape1179 =  Shape();
Shape1179.setUSE(CString("HAnimSiteShape"));
HAnimSite1177.addChild(&Shape1179);

HAnimSegment1169.addChild(&HAnimSite1177);

HAnimJoint1168.addChildren(&HAnimSegment1169);

HAnimJoint& HAnimJoint1180 =  HAnimJoint();
HAnimJoint1180.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint1180.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint1180.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint1180.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1180.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1181 =  HAnimSegment();
HAnimSegment1181.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment1181.setDEF(CString("hanim_l_metacarpal_2"));
Transform& Transform1182 =  Transform();
//Empty Transform
Transform& Transform1183 =  Transform();
//Empty Transform
Shape& Shape1184 =  Shape();
Shape1184.setUSE(CString("HAnimJointShape"));
Transform1183.addChild(&Shape1184);

Transform1182.addChild(&Transform1183);

HAnimSegment1181.addChild(&Transform1182);

Shape& Shape1185 =  Shape();
LineSet& LineSet1186 =  LineSet();
LineSet1186.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1187 =  Coordinate();
Coordinate1187.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet1186.setCoord(Coordinate1187);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1188 =  ColorRGBA();
ColorRGBA1188.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1186.addChild(&ColorRGBA1188);

Shape1185.setGeometry(&LineSet1186);

HAnimSegment1181.addChild(&Shape1185);

HAnimJoint1180.addChildren(&HAnimSegment1181);

HAnimJoint& HAnimJoint1189 =  HAnimJoint();
HAnimJoint1189.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint1189.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint1189.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint1189.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1189.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1190 =  HAnimSegment();
HAnimSegment1190.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment1190.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform& Transform1191 =  Transform();
//Empty Transform
Transform& Transform1192 =  Transform();
//Empty Transform
Shape& Shape1193 =  Shape();
Shape1193.setUSE(CString("HAnimJointShape"));
Transform1192.addChild(&Shape1193);

Transform1191.addChild(&Transform1192);

HAnimSegment1190.addChild(&Transform1191);

Shape& Shape1194 =  Shape();
LineSet& LineSet1195 =  LineSet();
LineSet1195.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1196 =  Coordinate();
Coordinate1196.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet1195.setCoord(Coordinate1196);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1197 =  ColorRGBA();
ColorRGBA1197.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1195.addChild(&ColorRGBA1197);

Shape1194.setGeometry(&LineSet1195);

HAnimSegment1190.addChild(&Shape1194);

HAnimJoint1189.addChildren(&HAnimSegment1190);

HAnimJoint& HAnimJoint1198 =  HAnimJoint();
HAnimJoint1198.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint1198.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint1198.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint1198.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1198.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1199 =  HAnimSegment();
HAnimSegment1199.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment1199.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform& Transform1200 =  Transform();
//Empty Transform
Transform& Transform1201 =  Transform();
//Empty Transform
Shape& Shape1202 =  Shape();
Shape1202.setUSE(CString("HAnimJointShape"));
Transform1201.addChild(&Shape1202);

Transform1200.addChild(&Transform1201);

HAnimSegment1199.addChild(&Transform1200);

Shape& Shape1203 =  Shape();
LineSet& LineSet1204 =  LineSet();
LineSet1204.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1205 =  Coordinate();
Coordinate1205.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet1204.setCoord(Coordinate1205);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1206 =  ColorRGBA();
ColorRGBA1206.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1204.addChild(&ColorRGBA1206);

Shape1203.setGeometry(&LineSet1204);

HAnimSegment1199.addChild(&Shape1203);

HAnimSite& HAnimSite1207 =  HAnimSite();
HAnimSite1207.X3DNode::setName(CString("l_carpal_distal_phalanx_2_tip"));
HAnimSite1207.setDEF(CString("hanim_l_carpal_distal_phalanx_2_tip"));
HAnimSite1207.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor1208 =  TouchSensor();
TouchSensor1208.setDescription(CString("HAnimSite l_carpal_distal_phalanx_2_tip"));
HAnimSite1207.addChild(&TouchSensor1208);

Shape& Shape1209 =  Shape();
Shape1209.setUSE(CString("HAnimSiteShape"));
HAnimSite1207.addChild(&Shape1209);

HAnimSegment1199.addChild(&HAnimSite1207);

HAnimSite& HAnimSite1210 =  HAnimSite();
HAnimSite1210.X3DNode::setName(CString("l_dactylion_pt"));
HAnimSite1210.setDEF(CString("hanim_l_dactylion_pt"));
HAnimSite1210.setTranslation(new float[]{0.2056,0.6743,-0.0482});
TouchSensor& TouchSensor1211 =  TouchSensor();
TouchSensor1211.setDescription(CString("HAnimSite l_dactylion_pt"));
HAnimSite1210.addChild(&TouchSensor1211);

Shape& Shape1212 =  Shape();
Shape1212.setUSE(CString("HAnimSiteShape"));
HAnimSite1210.addChild(&Shape1212);

HAnimSegment1199.addChild(&HAnimSite1210);

HAnimJoint1198.addChildren(&HAnimSegment1199);

HAnimJoint& HAnimJoint1213 =  HAnimJoint();
HAnimJoint1213.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint1213.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint1213.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint1213.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1213.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1198.addChildren(&HAnimJoint1213);

HAnimJoint1189.addChildren(&HAnimJoint1198);

HAnimJoint1180.addChildren(&HAnimJoint1189);

HAnimJoint1168.addChildren(&HAnimJoint1180);

HAnimJoint1116.addChildren(&HAnimJoint1168);

HAnimJoint& HAnimJoint1214 =  HAnimJoint();
HAnimJoint1214.X3DNode::setName(CString("l_midcarpal_3"));
HAnimJoint1214.setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint1214.setCenter(new float[]{0,1,0});
HAnimJoint1214.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1214.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1215 =  HAnimSegment();
HAnimSegment1215.X3DNode::setName(CString("l_capitate"));
HAnimSegment1215.setDEF(CString("hanim_l_capitate"));
Transform& Transform1216 =  Transform();
//Empty Transform
Transform& Transform1217 =  Transform();
//Empty Transform
Shape& Shape1218 =  Shape();
Shape1218.setUSE(CString("HAnimJointShape"));
Transform1217.addChild(&Shape1218);

Transform1216.addChild(&Transform1217);

HAnimSegment1215.addChild(&Transform1216);

Shape& Shape1219 =  Shape();
LineSet& LineSet1220 =  LineSet();
LineSet1220.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1221 =  Coordinate();
Coordinate1221.setPoint(new float[]{0,1,0,0.1987,0.8029,-0.053}, 6);
LineSet1220.setCoord(Coordinate1221);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1222 =  ColorRGBA();
ColorRGBA1222.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1220.addChild(&ColorRGBA1222);

Shape1219.setGeometry(&LineSet1220);

HAnimSegment1215.addChild(&Shape1219);

HAnimSite& HAnimSite1223 =  HAnimSite();
HAnimSite1223.X3DNode::setName(CString("l_metacarpal_phalanx_3_pt"));
HAnimSite1223.setDEF(CString("hanim_l_metacarpal_phalanx_3_pt"));
HAnimSite1223.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor1224 =  TouchSensor();
TouchSensor1224.setDescription(CString("HAnimSite l_metacarpal_phalanx_3_pt"));
HAnimSite1223.addChild(&TouchSensor1224);

Shape& Shape1225 =  Shape();
Shape1225.setUSE(CString("HAnimSiteShape"));
HAnimSite1223.addChild(&Shape1225);

HAnimSegment1215.addChild(&HAnimSite1223);

HAnimJoint1214.addChildren(&HAnimSegment1215);

HAnimJoint& HAnimJoint1226 =  HAnimJoint();
HAnimJoint1226.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint1226.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint1226.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint1226.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1226.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1227 =  HAnimSegment();
HAnimSegment1227.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment1227.setDEF(CString("hanim_l_metacarpal_3"));
Transform& Transform1228 =  Transform();
//Empty Transform
Transform& Transform1229 =  Transform();
//Empty Transform
Shape& Shape1230 =  Shape();
Shape1230.setUSE(CString("HAnimJointShape"));
Transform1229.addChild(&Shape1230);

Transform1228.addChild(&Transform1229);

HAnimSegment1227.addChild(&Transform1228);

Shape& Shape1231 =  Shape();
LineSet& LineSet1232 =  LineSet();
LineSet1232.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1233 =  Coordinate();
Coordinate1233.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet1232.setCoord(Coordinate1233);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1234 =  ColorRGBA();
ColorRGBA1234.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1232.addChild(&ColorRGBA1234);

Shape1231.setGeometry(&LineSet1232);

HAnimSegment1227.addChild(&Shape1231);

HAnimJoint1226.addChildren(&HAnimSegment1227);

HAnimJoint& HAnimJoint1235 =  HAnimJoint();
HAnimJoint1235.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint1235.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint1235.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint1235.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1235.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1236 =  HAnimSegment();
HAnimSegment1236.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment1236.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform& Transform1237 =  Transform();
//Empty Transform
Transform& Transform1238 =  Transform();
//Empty Transform
Shape& Shape1239 =  Shape();
Shape1239.setUSE(CString("HAnimJointShape"));
Transform1238.addChild(&Shape1239);

Transform1237.addChild(&Transform1238);

HAnimSegment1236.addChild(&Transform1237);

Shape& Shape1240 =  Shape();
LineSet& LineSet1241 =  LineSet();
LineSet1241.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1242 =  Coordinate();
Coordinate1242.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet1241.setCoord(Coordinate1242);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1243 =  ColorRGBA();
ColorRGBA1243.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1241.addChild(&ColorRGBA1243);

Shape1240.setGeometry(&LineSet1241);

HAnimSegment1236.addChild(&Shape1240);

HAnimJoint1235.addChildren(&HAnimSegment1236);

HAnimJoint& HAnimJoint1244 =  HAnimJoint();
HAnimJoint1244.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint1244.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint1244.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint1244.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1244.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1245 =  HAnimSegment();
HAnimSegment1245.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment1245.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform& Transform1246 =  Transform();
//Empty Transform
Transform& Transform1247 =  Transform();
//Empty Transform
Shape& Shape1248 =  Shape();
Shape1248.setUSE(CString("HAnimJointShape"));
Transform1247.addChild(&Shape1248);

Transform1246.addChild(&Transform1247);

HAnimSegment1245.addChild(&Transform1246);

Shape& Shape1249 =  Shape();
LineSet& LineSet1250 =  LineSet();
LineSet1250.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1251 =  Coordinate();
Coordinate1251.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet1250.setCoord(Coordinate1251);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1252 =  ColorRGBA();
ColorRGBA1252.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1250.addChild(&ColorRGBA1252);

Shape1249.setGeometry(&LineSet1250);

HAnimSegment1245.addChild(&Shape1249);

HAnimSite& HAnimSite1253 =  HAnimSite();
HAnimSite1253.X3DNode::setName(CString("l_carpal_distal_phalanx_3_tip"));
HAnimSite1253.setDEF(CString("hanim_l_carpal_distal_phalanx_3_tip"));
HAnimSite1253.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor1254 =  TouchSensor();
TouchSensor1254.setDescription(CString("HAnimSite l_carpal_distal_phalanx_3_tip"));
HAnimSite1253.addChild(&TouchSensor1254);

Shape& Shape1255 =  Shape();
Shape1255.setUSE(CString("HAnimSiteShape"));
HAnimSite1253.addChild(&Shape1255);

HAnimSegment1245.addChild(&HAnimSite1253);

HAnimJoint1244.addChildren(&HAnimSegment1245);

HAnimJoint& HAnimJoint1256 =  HAnimJoint();
HAnimJoint1256.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint1256.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint1256.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint1256.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1256.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1244.addChildren(&HAnimJoint1256);

HAnimJoint1235.addChildren(&HAnimJoint1244);

HAnimJoint1226.addChildren(&HAnimJoint1235);

HAnimJoint1214.addChildren(&HAnimJoint1226);

HAnimJoint1116.addChildren(&HAnimJoint1214);

HAnimJoint& HAnimJoint1257 =  HAnimJoint();
HAnimJoint1257.X3DNode::setName(CString("l_midcarpal_4_5"));
HAnimJoint1257.setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint1257.setCenter(new float[]{0,1,0});
HAnimJoint1257.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1257.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1258 =  HAnimSegment();
HAnimSegment1258.X3DNode::setName(CString("l_hamate"));
HAnimSegment1258.setDEF(CString("hanim_l_hamate"));
Transform& Transform1259 =  Transform();
//Empty Transform
Transform& Transform1260 =  Transform();
//Empty Transform
Shape& Shape1261 =  Shape();
Shape1261.setUSE(CString("HAnimJointShape"));
Transform1260.addChild(&Shape1261);

Transform1259.addChild(&Transform1260);

HAnimSegment1258.addChild(&Transform1259);

Shape& Shape1262 =  Shape();
LineSet& LineSet1263 =  LineSet();
LineSet1263.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1264 =  Coordinate();
Coordinate1264.setPoint(new float[]{0,1,0,0.1956,0.8019,-0.0794}, 6);
LineSet1263.setCoord(Coordinate1264);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1265 =  ColorRGBA();
ColorRGBA1265.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1263.addChild(&ColorRGBA1265);

Shape1262.setGeometry(&LineSet1263);

HAnimSegment1258.addChild(&Shape1262);

Shape& Shape1266 =  Shape();
LineSet& LineSet1267 =  LineSet();
LineSet1267.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1268 =  Coordinate();
Coordinate1268.setPoint(new float[]{0,1,0,0.1925,0.8066,-0.1036}, 6);
LineSet1267.setCoord(Coordinate1268);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1269 =  ColorRGBA();
ColorRGBA1269.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1267.addChild(&ColorRGBA1269);

Shape1266.setGeometry(&LineSet1267);

HAnimSegment1258.addChild(&Shape1266);

HAnimSite& HAnimSite1270 =  HAnimSite();
HAnimSite1270.X3DNode::setName(CString("l_metacarpal_phalanx_5_pt"));
HAnimSite1270.setDEF(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimSite1270.setTranslation(new float[]{0.1929,0.786,-0.1122});
TouchSensor& TouchSensor1271 =  TouchSensor();
TouchSensor1271.setDescription(CString("HAnimSite l_metacarpal_phalanx_5_pt"));
HAnimSite1270.addChild(&TouchSensor1271);

Shape& Shape1272 =  Shape();
Shape1272.setUSE(CString("HAnimSiteShape"));
HAnimSite1270.addChild(&Shape1272);

HAnimSegment1258.addChild(&HAnimSite1270);

HAnimJoint1257.addChildren(&HAnimSegment1258);

HAnimJoint& HAnimJoint1273 =  HAnimJoint();
HAnimJoint1273.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint1273.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint1273.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint1273.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1273.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1274 =  HAnimSegment();
HAnimSegment1274.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment1274.setDEF(CString("hanim_l_metacarpal_4"));
Transform& Transform1275 =  Transform();
//Empty Transform
Transform& Transform1276 =  Transform();
//Empty Transform
Shape& Shape1277 =  Shape();
Shape1277.setUSE(CString("HAnimJointShape"));
Transform1276.addChild(&Shape1277);

Transform1275.addChild(&Transform1276);

HAnimSegment1274.addChild(&Transform1275);

Shape& Shape1278 =  Shape();
LineSet& LineSet1279 =  LineSet();
LineSet1279.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1280 =  Coordinate();
Coordinate1280.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet1279.setCoord(Coordinate1280);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1281 =  ColorRGBA();
ColorRGBA1281.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1279.addChild(&ColorRGBA1281);

Shape1278.setGeometry(&LineSet1279);

HAnimSegment1274.addChild(&Shape1278);

HAnimJoint1273.addChildren(&HAnimSegment1274);

HAnimJoint& HAnimJoint1282 =  HAnimJoint();
HAnimJoint1282.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint1282.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint1282.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint1282.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1282.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1283 =  HAnimSegment();
HAnimSegment1283.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment1283.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform& Transform1284 =  Transform();
//Empty Transform
Transform& Transform1285 =  Transform();
//Empty Transform
Shape& Shape1286 =  Shape();
Shape1286.setUSE(CString("HAnimJointShape"));
Transform1285.addChild(&Shape1286);

Transform1284.addChild(&Transform1285);

HAnimSegment1283.addChild(&Transform1284);

Shape& Shape1287 =  Shape();
LineSet& LineSet1288 =  LineSet();
LineSet1288.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1289 =  Coordinate();
Coordinate1289.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet1288.setCoord(Coordinate1289);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1290 =  ColorRGBA();
ColorRGBA1290.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1288.addChild(&ColorRGBA1290);

Shape1287.setGeometry(&LineSet1288);

HAnimSegment1283.addChild(&Shape1287);

HAnimJoint1282.addChildren(&HAnimSegment1283);

HAnimJoint& HAnimJoint1291 =  HAnimJoint();
HAnimJoint1291.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint1291.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint1291.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint1291.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1291.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1292 =  HAnimSegment();
HAnimSegment1292.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment1292.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform& Transform1293 =  Transform();
//Empty Transform
Transform& Transform1294 =  Transform();
//Empty Transform
Shape& Shape1295 =  Shape();
Shape1295.setUSE(CString("HAnimJointShape"));
Transform1294.addChild(&Shape1295);

Transform1293.addChild(&Transform1294);

HAnimSegment1292.addChild(&Transform1293);

Shape& Shape1296 =  Shape();
LineSet& LineSet1297 =  LineSet();
LineSet1297.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1298 =  Coordinate();
Coordinate1298.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet1297.setCoord(Coordinate1298);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1299 =  ColorRGBA();
ColorRGBA1299.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1297.addChild(&ColorRGBA1299);

Shape1296.setGeometry(&LineSet1297);

HAnimSegment1292.addChild(&Shape1296);

HAnimSite& HAnimSite1300 =  HAnimSite();
HAnimSite1300.X3DNode::setName(CString("l_carpal_distal_phalanx_4_tip"));
HAnimSite1300.setDEF(CString("hanim_l_carpal_distal_phalanx_4_tip"));
HAnimSite1300.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor1301 =  TouchSensor();
TouchSensor1301.setDescription(CString("HAnimSite l_carpal_distal_phalanx_4_tip"));
HAnimSite1300.addChild(&TouchSensor1301);

Shape& Shape1302 =  Shape();
Shape1302.setUSE(CString("HAnimSiteShape"));
HAnimSite1300.addChild(&Shape1302);

HAnimSegment1292.addChild(&HAnimSite1300);

HAnimJoint1291.addChildren(&HAnimSegment1292);

HAnimJoint& HAnimJoint1303 =  HAnimJoint();
HAnimJoint1303.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint1303.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint1303.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint1303.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1303.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1291.addChildren(&HAnimJoint1303);

HAnimJoint1282.addChildren(&HAnimJoint1291);

HAnimJoint1273.addChildren(&HAnimJoint1282);

HAnimJoint1257.addChildren(&HAnimJoint1273);

HAnimJoint& HAnimJoint1304 =  HAnimJoint();
HAnimJoint1304.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint1304.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint1304.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint1304.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1304.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1305 =  HAnimSegment();
HAnimSegment1305.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment1305.setDEF(CString("hanim_l_metacarpal_5"));
Transform& Transform1306 =  Transform();
//Empty Transform
Transform& Transform1307 =  Transform();
//Empty Transform
Shape& Shape1308 =  Shape();
Shape1308.setUSE(CString("HAnimJointShape"));
Transform1307.addChild(&Shape1308);

Transform1306.addChild(&Transform1307);

HAnimSegment1305.addChild(&Transform1306);

Shape& Shape1309 =  Shape();
LineSet& LineSet1310 =  LineSet();
LineSet1310.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1311 =  Coordinate();
Coordinate1311.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet1310.setCoord(Coordinate1311);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1312 =  ColorRGBA();
ColorRGBA1312.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1310.addChild(&ColorRGBA1312);

Shape1309.setGeometry(&LineSet1310);

HAnimSegment1305.addChild(&Shape1309);

HAnimJoint1304.addChildren(&HAnimSegment1305);

HAnimJoint& HAnimJoint1313 =  HAnimJoint();
HAnimJoint1313.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint1313.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint1313.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint1313.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1313.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1314 =  HAnimSegment();
HAnimSegment1314.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment1314.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform& Transform1315 =  Transform();
//Empty Transform
Transform& Transform1316 =  Transform();
//Empty Transform
Shape& Shape1317 =  Shape();
Shape1317.setUSE(CString("HAnimJointShape"));
Transform1316.addChild(&Shape1317);

Transform1315.addChild(&Transform1316);

HAnimSegment1314.addChild(&Transform1315);

Shape& Shape1318 =  Shape();
LineSet& LineSet1319 =  LineSet();
LineSet1319.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1320 =  Coordinate();
Coordinate1320.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet1319.setCoord(Coordinate1320);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1321 =  ColorRGBA();
ColorRGBA1321.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1319.addChild(&ColorRGBA1321);

Shape1318.setGeometry(&LineSet1319);

HAnimSegment1314.addChild(&Shape1318);

HAnimJoint1313.addChildren(&HAnimSegment1314);

HAnimJoint& HAnimJoint1322 =  HAnimJoint();
HAnimJoint1322.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint1322.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint1322.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint1322.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1322.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1323 =  HAnimSegment();
HAnimSegment1323.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment1323.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform& Transform1324 =  Transform();
//Empty Transform
Transform& Transform1325 =  Transform();
//Empty Transform
Shape& Shape1326 =  Shape();
Shape1326.setUSE(CString("HAnimJointShape"));
Transform1325.addChild(&Shape1326);

Transform1324.addChild(&Transform1325);

HAnimSegment1323.addChild(&Transform1324);

Shape& Shape1327 =  Shape();
LineSet& LineSet1328 =  LineSet();
LineSet1328.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1329 =  Coordinate();
Coordinate1329.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet1328.setCoord(Coordinate1329);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1330 =  ColorRGBA();
ColorRGBA1330.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1328.addChild(&ColorRGBA1330);

Shape1327.setGeometry(&LineSet1328);

HAnimSegment1323.addChild(&Shape1327);

HAnimSite& HAnimSite1331 =  HAnimSite();
HAnimSite1331.X3DNode::setName(CString("l_carpal_distal_phalanx_5_tip"));
HAnimSite1331.setDEF(CString("hanim_l_carpal_distal_phalanx_5_tip"));
HAnimSite1331.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor1332 =  TouchSensor();
TouchSensor1332.setDescription(CString("HAnimSite l_carpal_distal_phalanx_5_tip"));
HAnimSite1331.addChild(&TouchSensor1332);

Shape& Shape1333 =  Shape();
Shape1333.setUSE(CString("HAnimSiteShape"));
HAnimSite1331.addChild(&Shape1333);

HAnimSegment1323.addChild(&HAnimSite1331);

HAnimJoint1322.addChildren(&HAnimSegment1323);

HAnimJoint& HAnimJoint1334 =  HAnimJoint();
HAnimJoint1334.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint1334.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint1334.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint1334.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1334.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1322.addChildren(&HAnimJoint1334);

HAnimJoint1313.addChildren(&HAnimJoint1322);

HAnimJoint1304.addChildren(&HAnimJoint1313);

HAnimJoint1257.addChildren(&HAnimJoint1304);

HAnimJoint1116.addChildren(&HAnimJoint1257);

HAnimJoint1104.addChildren(&HAnimJoint1116);

HAnimJoint1083.addChildren(&HAnimJoint1104);

HAnimJoint1068.addChildren(&HAnimJoint1083);

HAnimJoint1059.addChildren(&HAnimJoint1068);

HAnimJoint854.addChildren(&HAnimJoint1059);

HAnimJoint& HAnimJoint1335 =  HAnimJoint();
HAnimJoint1335.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint1335.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1335.setCenter(new float[]{-0.0694,1.46,-0.033});
HAnimJoint1335.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1335.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1336 =  HAnimSegment();
HAnimSegment1336.X3DNode::setName(CString("r_clavicle"));
HAnimSegment1336.setDEF(CString("hanim_r_clavicle"));
Transform& Transform1337 =  Transform();
//Empty Transform
Transform& Transform1338 =  Transform();
//Empty Transform
Shape& Shape1339 =  Shape();
Shape1339.setUSE(CString("HAnimJointShape"));
Transform1338.addChild(&Shape1339);

Transform1337.addChild(&Transform1338);

HAnimSegment1336.addChild(&Transform1337);

Shape& Shape1340 =  Shape();
LineSet& LineSet1341 =  LineSet();
LineSet1341.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1342 =  Coordinate();
Coordinate1342.setPoint(new float[]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
LineSet1341.setCoord(Coordinate1342);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA& ColorRGBA1343 =  ColorRGBA();
ColorRGBA1343.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1341.addChild(&ColorRGBA1343);

Shape1340.setGeometry(&LineSet1341);

HAnimSegment1336.addChild(&Shape1340);

HAnimJoint1335.addChildren(&HAnimSegment1336);

HAnimJoint& HAnimJoint1344 =  HAnimJoint();
HAnimJoint1344.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint1344.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1344.setCenter(new float[]{-0.0836,1.4281,-0.0401});
HAnimJoint1344.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1344.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1345 =  HAnimSegment();
HAnimSegment1345.X3DNode::setName(CString("r_scapula"));
HAnimSegment1345.setDEF(CString("hanim_r_scapula"));
Transform& Transform1346 =  Transform();
//Empty Transform
Transform& Transform1347 =  Transform();
//Empty Transform
Shape& Shape1348 =  Shape();
Shape1348.setUSE(CString("HAnimJointShape"));
Transform1347.addChild(&Shape1348);

Transform1346.addChild(&Transform1347);

HAnimSegment1345.addChild(&Transform1346);

Shape& Shape1349 =  Shape();
LineSet& LineSet1350 =  LineSet();
LineSet1350.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1351 =  Coordinate();
Coordinate1351.setPoint(new float[]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
LineSet1350.setCoord(Coordinate1351);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA& ColorRGBA1352 =  ColorRGBA();
ColorRGBA1352.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1350.addChild(&ColorRGBA1352);

Shape1349.setGeometry(&LineSet1350);

HAnimSegment1345.addChild(&Shape1349);

HAnimSite& HAnimSite1353 =  HAnimSite();
HAnimSite1353.X3DNode::setName(CString("r_bideltoid_pt"));
HAnimSite1353.setDEF(CString("hanim_r_bideltoid_pt"));
HAnimSite1353.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor1354 =  TouchSensor();
TouchSensor1354.setDescription(CString("HAnimSite r_bideltoid_pt"));
HAnimSite1353.addChild(&TouchSensor1354);

Shape& Shape1355 =  Shape();
Shape1355.setUSE(CString("HAnimSiteShape"));
HAnimSite1353.addChild(&Shape1355);

HAnimSegment1345.addChild(&HAnimSite1353);

HAnimSite& HAnimSite1356 =  HAnimSite();
HAnimSite1356.X3DNode::setName(CString("r_humeral_lateral_epicondyles_pt"));
HAnimSite1356.setDEF(CString("hanim_r_humeral_lateral_epicondyles_pt"));
HAnimSite1356.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor1357 =  TouchSensor();
TouchSensor1357.setDescription(CString("HAnimSite r_humeral_lateral_epicondyles_pt"));
HAnimSite1356.addChild(&TouchSensor1357);

Shape& Shape1358 =  Shape();
Shape1358.setUSE(CString("HAnimSiteShape"));
HAnimSite1356.addChild(&Shape1358);

HAnimSegment1345.addChild(&HAnimSite1356);

HAnimJoint1344.addChildren(&HAnimSegment1345);

HAnimJoint& HAnimJoint1359 =  HAnimJoint();
HAnimJoint1359.X3DNode::setName(CString("r_shoulder"));
HAnimJoint1359.setDEF(CString("hanim_r_shoulder"));
HAnimJoint1359.setCenter(new float[]{-0.1907,1.4407,-0.0325});
HAnimJoint1359.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1359.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1360 =  HAnimSegment();
HAnimSegment1360.X3DNode::setName(CString("r_upperarm"));
HAnimSegment1360.setDEF(CString("hanim_r_upperarm"));
Transform& Transform1361 =  Transform();
//Empty Transform
Transform& Transform1362 =  Transform();
//Empty Transform
Shape& Shape1363 =  Shape();
Shape1363.setUSE(CString("HAnimJointShape"));
Transform1362.addChild(&Shape1363);

Transform1361.addChild(&Transform1362);

HAnimSegment1360.addChild(&Transform1361);

Shape& Shape1364 =  Shape();
LineSet& LineSet1365 =  LineSet();
LineSet1365.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1366 =  Coordinate();
Coordinate1366.setPoint(new float[]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet1365.setCoord(Coordinate1366);

//from r_shoulder to r_elbow vertices 2
ColorRGBA& ColorRGBA1367 =  ColorRGBA();
ColorRGBA1367.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1365.addChild(&ColorRGBA1367);

Shape1364.setGeometry(&LineSet1365);

HAnimSegment1360.addChild(&Shape1364);

HAnimSite& HAnimSite1368 =  HAnimSite();
HAnimSite1368.X3DNode::setName(CString("r_humeral_medial_epicondyles_pt"));
HAnimSite1368.setDEF(CString("hanim_r_humeral_medial_epicondyles_pt"));
HAnimSite1368.setTranslation(new float[]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor1369 =  TouchSensor();
TouchSensor1369.setDescription(CString("HAnimSite r_humeral_medial_epicondyles_pt"));
HAnimSite1368.addChild(&TouchSensor1369);

Shape& Shape1370 =  Shape();
Shape1370.setUSE(CString("HAnimSiteShape"));
HAnimSite1368.addChild(&Shape1370);

HAnimSegment1360.addChild(&HAnimSite1368);

HAnimSite& HAnimSite1371 =  HAnimSite();
HAnimSite1371.X3DNode::setName(CString("r_olecranon_pt"));
HAnimSite1371.setDEF(CString("hanim_r_olecranon_pt"));
HAnimSite1371.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor1372 =  TouchSensor();
TouchSensor1372.setDescription(CString("HAnimSite r_olecranon_pt"));
HAnimSite1371.addChild(&TouchSensor1372);

Shape& Shape1373 =  Shape();
Shape1373.setUSE(CString("HAnimSiteShape"));
HAnimSite1371.addChild(&Shape1373);

HAnimSegment1360.addChild(&HAnimSite1371);

HAnimSite& HAnimSite1374 =  HAnimSite();
HAnimSite1374.X3DNode::setName(CString("r_radial_styloid_pt"));
HAnimSite1374.setDEF(CString("hanim_r_radial_styloid_pt"));
HAnimSite1374.setTranslation(new float[]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor1375 =  TouchSensor();
TouchSensor1375.setDescription(CString("HAnimSite r_radial_styloid_pt"));
HAnimSite1374.addChild(&TouchSensor1375);

Shape& Shape1376 =  Shape();
Shape1376.setUSE(CString("HAnimSiteShape"));
HAnimSite1374.addChild(&Shape1376);

HAnimSegment1360.addChild(&HAnimSite1374);

HAnimSite& HAnimSite1377 =  HAnimSite();
HAnimSite1377.X3DNode::setName(CString("r_radiale_pt"));
HAnimSite1377.setDEF(CString("hanim_r_radiale_pt"));
HAnimSite1377.setTranslation(new float[]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor1378 =  TouchSensor();
TouchSensor1378.setDescription(CString("HAnimSite r_radiale_pt"));
HAnimSite1377.addChild(&TouchSensor1378);

Shape& Shape1379 =  Shape();
Shape1379.setUSE(CString("HAnimSiteShape"));
HAnimSite1377.addChild(&Shape1379);

HAnimSegment1360.addChild(&HAnimSite1377);

HAnimJoint1359.addChildren(&HAnimSegment1360);

HAnimJoint& HAnimJoint1380 =  HAnimJoint();
HAnimJoint1380.X3DNode::setName(CString("r_elbow"));
HAnimJoint1380.setDEF(CString("hanim_r_elbow"));
HAnimJoint1380.setCenter(new float[]{-0.1949,1.1388,-0.062});
HAnimJoint1380.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1380.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1381 =  HAnimSegment();
HAnimSegment1381.X3DNode::setName(CString("r_forearm"));
HAnimSegment1381.setDEF(CString("hanim_r_forearm"));
Transform& Transform1382 =  Transform();
//Empty Transform
Transform& Transform1383 =  Transform();
//Empty Transform
Shape& Shape1384 =  Shape();
Shape1384.setUSE(CString("HAnimJointShape"));
Transform1383.addChild(&Shape1384);

Transform1382.addChild(&Transform1383);

HAnimSegment1381.addChild(&Transform1382);

Shape& Shape1385 =  Shape();
LineSet& LineSet1386 =  LineSet();
LineSet1386.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1387 =  Coordinate();
Coordinate1387.setPoint(new float[]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet1386.setCoord(Coordinate1387);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA& ColorRGBA1388 =  ColorRGBA();
ColorRGBA1388.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1386.addChild(&ColorRGBA1388);

Shape1385.setGeometry(&LineSet1386);

HAnimSegment1381.addChild(&Shape1385);

HAnimSite& HAnimSite1389 =  HAnimSite();
HAnimSite1389.X3DNode::setName(CString("r_ulnar_styloid_pt"));
HAnimSite1389.setDEF(CString("hanim_r_ulnar_styloid_pt"));
HAnimSite1389.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
TouchSensor& TouchSensor1390 =  TouchSensor();
TouchSensor1390.setDescription(CString("HAnimSite r_ulnar_styloid_pt"));
HAnimSite1389.addChild(&TouchSensor1390);

Shape& Shape1391 =  Shape();
Shape1391.setUSE(CString("HAnimSiteShape"));
HAnimSite1389.addChild(&Shape1391);

HAnimSegment1381.addChild(&HAnimSite1389);

HAnimJoint1380.addChildren(&HAnimSegment1381);

HAnimJoint& HAnimJoint1392 =  HAnimJoint();
HAnimJoint1392.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint1392.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint1392.setCenter(new float[]{-0.1959,0.8694,-0.0521});
HAnimJoint1392.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1392.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1393 =  HAnimSegment();
HAnimSegment1393.X3DNode::setName(CString("r_carpal"));
HAnimSegment1393.setDEF(CString("hanim_r_carpal"));
Transform& Transform1394 =  Transform();
Transform1394.setScale(new float[]{0.2,0.2,0.2});
Transform1394.setTranslation(new float[]{-0.2,0.85,-0.05});
Transform1394.setRotation(new float[]{0,0,1,-3.14});
//Transform right hand
Transform& Transform1395 =  Transform();
Transform1395.setRotation(new float[]{0,1,0,1.57});
//Transform right hand
Shape& Shape1396 =  Shape();
Shape1396.setUSE(CString("HAnimJointShape"));
Transform1395.addChild(&Shape1396);

Transform1394.addChild(&Transform1395);

HAnimSegment1393.addChild(&Transform1394);

Shape& Shape1397 =  Shape();
LineSet& LineSet1398 =  LineSet();
LineSet1398.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1399 =  Coordinate();
Coordinate1399.setPoint(new float[]{-0.1959,0.8694,-0.0521,0,1,0}, 6);
LineSet1398.setCoord(Coordinate1399);

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA& ColorRGBA1400 =  ColorRGBA();
ColorRGBA1400.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1398.addChild(&ColorRGBA1400);

Shape1397.setGeometry(&LineSet1398);

HAnimSegment1393.addChild(&Shape1397);

Shape& Shape1401 =  Shape();
LineSet& LineSet1402 =  LineSet();
LineSet1402.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1403 =  Coordinate();
Coordinate1403.setPoint(new float[]{-0.1959,0.8694,-0.0521,0,1,0}, 6);
LineSet1402.setCoord(Coordinate1403);

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA& ColorRGBA1404 =  ColorRGBA();
ColorRGBA1404.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1402.addChild(&ColorRGBA1404);

Shape1401.setGeometry(&LineSet1402);

HAnimSegment1393.addChild(&Shape1401);

Shape& Shape1405 =  Shape();
LineSet& LineSet1406 =  LineSet();
LineSet1406.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1407 =  Coordinate();
Coordinate1407.setPoint(new float[]{-0.1959,0.8694,-0.0521,0,1,0}, 6);
LineSet1406.setCoord(Coordinate1407);

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA& ColorRGBA1408 =  ColorRGBA();
ColorRGBA1408.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1406.addChild(&ColorRGBA1408);

Shape1405.setGeometry(&LineSet1406);

HAnimSegment1393.addChild(&Shape1405);

Shape& Shape1409 =  Shape();
LineSet& LineSet1410 =  LineSet();
LineSet1410.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1411 =  Coordinate();
Coordinate1411.setPoint(new float[]{-0.1959,0.8694,-0.0521,0,1,0}, 6);
LineSet1410.setCoord(Coordinate1411);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA& ColorRGBA1412 =  ColorRGBA();
ColorRGBA1412.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1410.addChild(&ColorRGBA1412);

Shape1409.setGeometry(&LineSet1410);

HAnimSegment1393.addChild(&Shape1409);

HAnimJoint1392.addChildren(&HAnimSegment1393);

HAnimJoint& HAnimJoint1413 =  HAnimJoint();
HAnimJoint1413.X3DNode::setName(CString("r_midcarpal_1"));
HAnimJoint1413.setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint1413.setCenter(new float[]{0,1,0});
HAnimJoint1413.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1413.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1414 =  HAnimSegment();
HAnimSegment1414.X3DNode::setName(CString("r_trapezium"));
HAnimSegment1414.setDEF(CString("hanim_r_trapezium"));
Transform& Transform1415 =  Transform();
//Empty Transform
Transform& Transform1416 =  Transform();
//Empty Transform
Shape& Shape1417 =  Shape();
Shape1417.setUSE(CString("HAnimJointShape"));
Transform1416.addChild(&Shape1417);

Transform1415.addChild(&Transform1416);

HAnimSegment1414.addChild(&Transform1415);

Shape& Shape1418 =  Shape();
LineSet& LineSet1419 =  LineSet();
LineSet1419.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1420 =  Coordinate();
Coordinate1420.setPoint(new float[]{0,1,0,-0.1899,0.8502,-0.0473}, 6);
LineSet1419.setCoord(Coordinate1420);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1421 =  ColorRGBA();
ColorRGBA1421.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1419.addChild(&ColorRGBA1421);

Shape1418.setGeometry(&LineSet1419);

HAnimSegment1414.addChild(&Shape1418);

HAnimJoint1413.addChildren(&HAnimSegment1414);

HAnimJoint& HAnimJoint1422 =  HAnimJoint();
HAnimJoint1422.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint1422.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint1422.setCenter(new float[]{-0.1899,0.8502,-0.0473});
HAnimJoint1422.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1422.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1423 =  HAnimSegment();
HAnimSegment1423.X3DNode::setName(CString("r_metacarpal_1"));
HAnimSegment1423.setDEF(CString("hanim_r_metacarpal_1"));
Transform& Transform1424 =  Transform();
//Empty Transform
Transform& Transform1425 =  Transform();
//Empty Transform
Shape& Shape1426 =  Shape();
Shape1426.setUSE(CString("HAnimJointShape"));
Transform1425.addChild(&Shape1426);

Transform1424.addChild(&Transform1425);

HAnimSegment1423.addChild(&Transform1424);

Shape& Shape1427 =  Shape();
LineSet& LineSet1428 =  LineSet();
LineSet1428.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1429 =  Coordinate();
Coordinate1429.setPoint(new float[]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
LineSet1428.setCoord(Coordinate1429);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1430 =  ColorRGBA();
ColorRGBA1430.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1428.addChild(&ColorRGBA1430);

Shape1427.setGeometry(&LineSet1428);

HAnimSegment1423.addChild(&Shape1427);

HAnimJoint1422.addChildren(&HAnimSegment1423);

HAnimJoint& HAnimJoint1431 =  HAnimJoint();
HAnimJoint1431.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1431.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint1431.setCenter(new float[]{-0.1874,0.8256,0.0306});
HAnimJoint1431.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1431.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1432 =  HAnimSegment();
HAnimSegment1432.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1432.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform& Transform1433 =  Transform();
//Empty Transform
Transform& Transform1434 =  Transform();
//Empty Transform
Shape& Shape1435 =  Shape();
Shape1435.setUSE(CString("HAnimJointShape"));
Transform1434.addChild(&Shape1435);

Transform1433.addChild(&Transform1434);

HAnimSegment1432.addChild(&Transform1433);

Shape& Shape1436 =  Shape();
LineSet& LineSet1437 =  LineSet();
LineSet1437.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1438 =  Coordinate();
Coordinate1438.setPoint(new float[]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
LineSet1437.setCoord(Coordinate1438);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1439 =  ColorRGBA();
ColorRGBA1439.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1437.addChild(&ColorRGBA1439);

Shape1436.setGeometry(&LineSet1437);

HAnimSegment1432.addChild(&Shape1436);

HAnimSite& HAnimSite1440 =  HAnimSite();
HAnimSite1440.X3DNode::setName(CString("r_carpal_distal_phalanx_1_tip"));
HAnimSite1440.setDEF(CString("hanim_r_carpal_distal_phalanx_1_tip"));
HAnimSite1440.setTranslation(new float[]{-0.35,0.4,0});
TouchSensor& TouchSensor1441 =  TouchSensor();
TouchSensor1441.setDescription(CString("HAnimSite r_carpal_distal_phalanx_1_tip"));
HAnimSite1440.addChild(&TouchSensor1441);

Shape& Shape1442 =  Shape();
Shape1442.setUSE(CString("HAnimSiteShape"));
HAnimSite1440.addChild(&Shape1442);

HAnimSegment1432.addChild(&HAnimSite1440);

HAnimJoint1431.addChildren(&HAnimSegment1432);

HAnimJoint& HAnimJoint1443 =  HAnimJoint();
HAnimJoint1443.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1443.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint1443.setCenter(new float[]{-0.1864,0.819,0.0506});
HAnimJoint1443.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1443.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1431.addChildren(&HAnimJoint1443);

HAnimJoint1422.addChildren(&HAnimJoint1431);

HAnimJoint1413.addChildren(&HAnimJoint1422);

HAnimJoint1392.addChildren(&HAnimJoint1413);

HAnimJoint& HAnimJoint1444 =  HAnimJoint();
HAnimJoint1444.X3DNode::setName(CString("r_midcarpal_2"));
HAnimJoint1444.setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint1444.setCenter(new float[]{0,1,0});
HAnimJoint1444.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1444.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1445 =  HAnimSegment();
HAnimSegment1445.X3DNode::setName(CString("r_trapezoid"));
HAnimSegment1445.setDEF(CString("hanim_r_trapezoid"));
Transform& Transform1446 =  Transform();
//Empty Transform
Transform& Transform1447 =  Transform();
//Empty Transform
Shape& Shape1448 =  Shape();
Shape1448.setUSE(CString("HAnimJointShape"));
Transform1447.addChild(&Shape1448);

Transform1446.addChild(&Transform1447);

HAnimSegment1445.addChild(&Transform1446);

Shape& Shape1449 =  Shape();
LineSet& LineSet1450 =  LineSet();
LineSet1450.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1451 =  Coordinate();
Coordinate1451.setPoint(new float[]{0,1,0,-0.1961,0.8055,-0.0218}, 6);
LineSet1450.setCoord(Coordinate1451);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1452 =  ColorRGBA();
ColorRGBA1452.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1450.addChild(&ColorRGBA1452);

Shape1449.setGeometry(&LineSet1450);

HAnimSegment1445.addChild(&Shape1449);

HAnimSite& HAnimSite1453 =  HAnimSite();
HAnimSite1453.X3DNode::setName(CString("r_metacarpal_phalanx_2_pt"));
HAnimSite1453.setDEF(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimSite1453.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
TouchSensor& TouchSensor1454 =  TouchSensor();
TouchSensor1454.setDescription(CString("HAnimSite r_metacarpal_phalanx_2_pt"));
HAnimSite1453.addChild(&TouchSensor1454);

Shape& Shape1455 =  Shape();
Shape1455.setUSE(CString("HAnimSiteShape"));
HAnimSite1453.addChild(&Shape1455);

HAnimSegment1445.addChild(&HAnimSite1453);

HAnimJoint1444.addChildren(&HAnimSegment1445);

HAnimJoint& HAnimJoint1456 =  HAnimJoint();
HAnimJoint1456.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint1456.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint1456.setCenter(new float[]{-0.1961,0.8055,-0.0218});
HAnimJoint1456.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1456.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1457 =  HAnimSegment();
HAnimSegment1457.X3DNode::setName(CString("r_metacarpal_2"));
HAnimSegment1457.setDEF(CString("hanim_r_metacarpal_2"));
Transform& Transform1458 =  Transform();
//Empty Transform
Transform& Transform1459 =  Transform();
//Empty Transform
Shape& Shape1460 =  Shape();
Shape1460.setUSE(CString("HAnimJointShape"));
Transform1459.addChild(&Shape1460);

Transform1458.addChild(&Transform1459);

HAnimSegment1457.addChild(&Transform1458);

Shape& Shape1461 =  Shape();
LineSet& LineSet1462 =  LineSet();
LineSet1462.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1463 =  Coordinate();
Coordinate1463.setPoint(new float[]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
LineSet1462.setCoord(Coordinate1463);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1464 =  ColorRGBA();
ColorRGBA1464.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1462.addChild(&ColorRGBA1464);

Shape1461.setGeometry(&LineSet1462);

HAnimSegment1457.addChild(&Shape1461);

HAnimJoint1456.addChildren(&HAnimSegment1457);

HAnimJoint& HAnimJoint1465 =  HAnimJoint();
HAnimJoint1465.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1465.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint1465.setCenter(new float[]{-0.1961,0.7846,-0.0218});
HAnimJoint1465.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1465.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1466 =  HAnimSegment();
HAnimSegment1466.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1466.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform& Transform1467 =  Transform();
//Empty Transform
Transform& Transform1468 =  Transform();
//Empty Transform
Shape& Shape1469 =  Shape();
Shape1469.setUSE(CString("HAnimJointShape"));
Transform1468.addChild(&Shape1469);

Transform1467.addChild(&Transform1468);

HAnimSegment1466.addChild(&Transform1467);

Shape& Shape1470 =  Shape();
LineSet& LineSet1471 =  LineSet();
LineSet1471.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1472 =  Coordinate();
Coordinate1472.setPoint(new float[]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
LineSet1471.setCoord(Coordinate1472);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1473 =  ColorRGBA();
ColorRGBA1473.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1471.addChild(&ColorRGBA1473);

Shape1470.setGeometry(&LineSet1471);

HAnimSegment1466.addChild(&Shape1470);

HAnimJoint1465.addChildren(&HAnimSegment1466);

HAnimJoint& HAnimJoint1474 =  HAnimJoint();
HAnimJoint1474.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1474.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1474.setCenter(new float[]{-0.1954,0.7393,-0.0185});
HAnimJoint1474.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1474.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1475 =  HAnimSegment();
HAnimSegment1475.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1475.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform& Transform1476 =  Transform();
//Empty Transform
Transform& Transform1477 =  Transform();
//Empty Transform
Shape& Shape1478 =  Shape();
Shape1478.setUSE(CString("HAnimJointShape"));
Transform1477.addChild(&Shape1478);

Transform1476.addChild(&Transform1477);

HAnimSegment1475.addChild(&Transform1476);

Shape& Shape1479 =  Shape();
LineSet& LineSet1480 =  LineSet();
LineSet1480.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1481 =  Coordinate();
Coordinate1481.setPoint(new float[]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
LineSet1480.setCoord(Coordinate1481);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1482 =  ColorRGBA();
ColorRGBA1482.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1480.addChild(&ColorRGBA1482);

Shape1479.setGeometry(&LineSet1480);

HAnimSegment1475.addChild(&Shape1479);

HAnimSite& HAnimSite1483 =  HAnimSite();
HAnimSite1483.X3DNode::setName(CString("r_carpal_distal_phalanx_2_tip"));
HAnimSite1483.setDEF(CString("hanim_r_carpal_distal_phalanx_2_tip"));
HAnimSite1483.setTranslation(new float[]{-0.24,0.87,0});
TouchSensor& TouchSensor1484 =  TouchSensor();
TouchSensor1484.setDescription(CString("HAnimSite r_carpal_distal_phalanx_2_tip"));
HAnimSite1483.addChild(&TouchSensor1484);

Shape& Shape1485 =  Shape();
Shape1485.setUSE(CString("HAnimSiteShape"));
HAnimSite1483.addChild(&Shape1485);

HAnimSegment1475.addChild(&HAnimSite1483);

HAnimSite& HAnimSite1486 =  HAnimSite();
HAnimSite1486.X3DNode::setName(CString("r_dactylion_pt"));
HAnimSite1486.setDEF(CString("hanim_r_dactylion_pt"));
HAnimSite1486.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
TouchSensor& TouchSensor1487 =  TouchSensor();
TouchSensor1487.setDescription(CString("HAnimSite r_dactylion_pt"));
HAnimSite1486.addChild(&TouchSensor1487);

Shape& Shape1488 =  Shape();
Shape1488.setUSE(CString("HAnimSiteShape"));
HAnimSite1486.addChild(&Shape1488);

HAnimSegment1475.addChild(&HAnimSite1486);

HAnimJoint1474.addChildren(&HAnimSegment1475);

HAnimJoint& HAnimJoint1489 =  HAnimJoint();
HAnimJoint1489.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1489.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint1489.setCenter(new float[]{-0.1945,0.7169,-0.0173});
HAnimJoint1489.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1489.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1474.addChildren(&HAnimJoint1489);

HAnimJoint1465.addChildren(&HAnimJoint1474);

HAnimJoint1456.addChildren(&HAnimJoint1465);

HAnimJoint1444.addChildren(&HAnimJoint1456);

HAnimJoint1392.addChildren(&HAnimJoint1444);

HAnimJoint& HAnimJoint1490 =  HAnimJoint();
HAnimJoint1490.X3DNode::setName(CString("r_midcarpal_3"));
HAnimJoint1490.setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint1490.setCenter(new float[]{0,1,0});
HAnimJoint1490.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1490.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1491 =  HAnimSegment();
HAnimSegment1491.X3DNode::setName(CString("r_capitate"));
HAnimSegment1491.setDEF(CString("hanim_r_capitate"));
Transform& Transform1492 =  Transform();
//Empty Transform
Transform& Transform1493 =  Transform();
//Empty Transform
Shape& Shape1494 =  Shape();
Shape1494.setUSE(CString("HAnimJointShape"));
Transform1493.addChild(&Shape1494);

Transform1492.addChild(&Transform1493);

HAnimSegment1491.addChild(&Transform1492);

Shape& Shape1495 =  Shape();
LineSet& LineSet1496 =  LineSet();
LineSet1496.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1497 =  Coordinate();
Coordinate1497.setPoint(new float[]{0,1,0,-0.1972,0.806,-0.0468}, 6);
LineSet1496.setCoord(Coordinate1497);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1498 =  ColorRGBA();
ColorRGBA1498.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1496.addChild(&ColorRGBA1498);

Shape1495.setGeometry(&LineSet1496);

HAnimSegment1491.addChild(&Shape1495);

HAnimSite& HAnimSite1499 =  HAnimSite();
HAnimSite1499.X3DNode::setName(CString("r_metacarpal_phalanx_3_pt"));
HAnimSite1499.setDEF(CString("hanim_r_metacarpal_phalanx_3_pt"));
HAnimSite1499.setTranslation(new float[]{0,1,0});
TouchSensor& TouchSensor1500 =  TouchSensor();
TouchSensor1500.setDescription(CString("HAnimSite r_metacarpal_phalanx_3_pt"));
HAnimSite1499.addChild(&TouchSensor1500);

Shape& Shape1501 =  Shape();
Shape1501.setUSE(CString("HAnimSiteShape"));
HAnimSite1499.addChild(&Shape1501);

HAnimSegment1491.addChild(&HAnimSite1499);

HAnimJoint1490.addChildren(&HAnimSegment1491);

HAnimJoint& HAnimJoint1502 =  HAnimJoint();
HAnimJoint1502.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint1502.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint1502.setCenter(new float[]{-0.1972,0.806,-0.0468});
HAnimJoint1502.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1502.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1503 =  HAnimSegment();
HAnimSegment1503.X3DNode::setName(CString("r_metacarpal_3"));
HAnimSegment1503.setDEF(CString("hanim_r_metacarpal_3"));
Transform& Transform1504 =  Transform();
//Empty Transform
Transform& Transform1505 =  Transform();
//Empty Transform
Shape& Shape1506 =  Shape();
Shape1506.setUSE(CString("HAnimJointShape"));
Transform1505.addChild(&Shape1506);

Transform1504.addChild(&Transform1505);

HAnimSegment1503.addChild(&Transform1504);

Shape& Shape1507 =  Shape();
LineSet& LineSet1508 =  LineSet();
LineSet1508.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1509 =  Coordinate();
Coordinate1509.setPoint(new float[]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
LineSet1508.setCoord(Coordinate1509);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1510 =  ColorRGBA();
ColorRGBA1510.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1508.addChild(&ColorRGBA1510);

Shape1507.setGeometry(&LineSet1508);

HAnimSegment1503.addChild(&Shape1507);

HAnimJoint1502.addChildren(&HAnimSegment1503);

HAnimJoint& HAnimJoint1511 =  HAnimJoint();
HAnimJoint1511.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1511.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint1511.setCenter(new float[]{-0.1972,0.7849,-0.0468});
HAnimJoint1511.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1511.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1512 =  HAnimSegment();
HAnimSegment1512.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1512.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform& Transform1513 =  Transform();
//Empty Transform
Transform& Transform1514 =  Transform();
//Empty Transform
Shape& Shape1515 =  Shape();
Shape1515.setUSE(CString("HAnimJointShape"));
Transform1514.addChild(&Shape1515);

Transform1513.addChild(&Transform1514);

HAnimSegment1512.addChild(&Transform1513);

Shape& Shape1516 =  Shape();
LineSet& LineSet1517 =  LineSet();
LineSet1517.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1518 =  Coordinate();
Coordinate1518.setPoint(new float[]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
LineSet1517.setCoord(Coordinate1518);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1519 =  ColorRGBA();
ColorRGBA1519.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1517.addChild(&ColorRGBA1519);

Shape1516.setGeometry(&LineSet1517);

HAnimSegment1512.addChild(&Shape1516);

HAnimJoint1511.addChildren(&HAnimSegment1512);

HAnimJoint& HAnimJoint1520 =  HAnimJoint();
HAnimJoint1520.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1520.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1520.setCenter(new float[]{-0.195,0.7304,-0.0441});
HAnimJoint1520.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1520.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1521 =  HAnimSegment();
HAnimSegment1521.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1521.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform& Transform1522 =  Transform();
//Empty Transform
Transform& Transform1523 =  Transform();
//Empty Transform
Shape& Shape1524 =  Shape();
Shape1524.setUSE(CString("HAnimJointShape"));
Transform1523.addChild(&Shape1524);

Transform1522.addChild(&Transform1523);

HAnimSegment1521.addChild(&Transform1522);

Shape& Shape1525 =  Shape();
LineSet& LineSet1526 =  LineSet();
LineSet1526.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1527 =  Coordinate();
Coordinate1527.setPoint(new float[]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
LineSet1526.setCoord(Coordinate1527);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1528 =  ColorRGBA();
ColorRGBA1528.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1526.addChild(&ColorRGBA1528);

Shape1525.setGeometry(&LineSet1526);

HAnimSegment1521.addChild(&Shape1525);

HAnimSite& HAnimSite1529 =  HAnimSite();
HAnimSite1529.X3DNode::setName(CString("r_carpal_distal_phalanx_3_tip"));
HAnimSite1529.setDEF(CString("hanim_r_carpal_distal_phalanx_3_tip"));
HAnimSite1529.setTranslation(new float[]{-0.08,0.96,0});
TouchSensor& TouchSensor1530 =  TouchSensor();
TouchSensor1530.setDescription(CString("HAnimSite r_carpal_distal_phalanx_3_tip"));
HAnimSite1529.addChild(&TouchSensor1530);

Shape& Shape1531 =  Shape();
Shape1531.setUSE(CString("HAnimSiteShape"));
HAnimSite1529.addChild(&Shape1531);

HAnimSegment1521.addChild(&HAnimSite1529);

HAnimJoint1520.addChildren(&HAnimSegment1521);

HAnimJoint& HAnimJoint1532 =  HAnimJoint();
HAnimJoint1532.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1532.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint1532.setCenter(new float[]{-0.1939,0.7042,-0.0432});
HAnimJoint1532.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1532.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1520.addChildren(&HAnimJoint1532);

HAnimJoint1511.addChildren(&HAnimJoint1520);

HAnimJoint1502.addChildren(&HAnimJoint1511);

HAnimJoint1490.addChildren(&HAnimJoint1502);

HAnimJoint1392.addChildren(&HAnimJoint1490);

HAnimJoint& HAnimJoint1533 =  HAnimJoint();
HAnimJoint1533.X3DNode::setName(CString("r_midcarpal_4_5"));
HAnimJoint1533.setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint1533.setCenter(new float[]{0,1,0});
HAnimJoint1533.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1533.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1534 =  HAnimSegment();
HAnimSegment1534.X3DNode::setName(CString("r_hamate"));
HAnimSegment1534.setDEF(CString("hanim_r_hamate"));
Transform& Transform1535 =  Transform();
//Empty Transform
Transform& Transform1536 =  Transform();
//Empty Transform
Shape& Shape1537 =  Shape();
Shape1537.setUSE(CString("HAnimJointShape"));
Transform1536.addChild(&Shape1537);

Transform1535.addChild(&Transform1536);

HAnimSegment1534.addChild(&Transform1535);

Shape& Shape1538 =  Shape();
LineSet& LineSet1539 =  LineSet();
LineSet1539.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1540 =  Coordinate();
Coordinate1540.setPoint(new float[]{0,1,0,-0.1951,0.8049,-0.0732}, 6);
LineSet1539.setCoord(Coordinate1540);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1541 =  ColorRGBA();
ColorRGBA1541.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1539.addChild(&ColorRGBA1541);

Shape1538.setGeometry(&LineSet1539);

HAnimSegment1534.addChild(&Shape1538);

Shape& Shape1542 =  Shape();
LineSet& LineSet1543 =  LineSet();
LineSet1543.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1544 =  Coordinate();
Coordinate1544.setPoint(new float[]{0,1,0,-0.1926,0.8096,-0.0975}, 6);
LineSet1543.setCoord(Coordinate1544);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1545 =  ColorRGBA();
ColorRGBA1545.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1543.addChild(&ColorRGBA1545);

Shape1542.setGeometry(&LineSet1543);

HAnimSegment1534.addChild(&Shape1542);

HAnimSite& HAnimSite1546 =  HAnimSite();
HAnimSite1546.X3DNode::setName(CString("r_metacarpal_phalanx_5_pt"));
HAnimSite1546.setDEF(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimSite1546.setTranslation(new float[]{-0.1929,0.789,-0.1064});
TouchSensor& TouchSensor1547 =  TouchSensor();
TouchSensor1547.setDescription(CString("HAnimSite r_metacarpal_phalanx_5_pt"));
HAnimSite1546.addChild(&TouchSensor1547);

Shape& Shape1548 =  Shape();
Shape1548.setUSE(CString("HAnimSiteShape"));
HAnimSite1546.addChild(&Shape1548);

HAnimSegment1534.addChild(&HAnimSite1546);

HAnimJoint1533.addChildren(&HAnimSegment1534);

HAnimJoint& HAnimJoint1549 =  HAnimJoint();
HAnimJoint1549.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint1549.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint1549.setCenter(new float[]{-0.1951,0.8049,-0.0732});
HAnimJoint1549.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1549.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1550 =  HAnimSegment();
HAnimSegment1550.X3DNode::setName(CString("r_metacarpal_4"));
HAnimSegment1550.setDEF(CString("hanim_r_metacarpal_4"));
Transform& Transform1551 =  Transform();
//Empty Transform
Transform& Transform1552 =  Transform();
//Empty Transform
Shape& Shape1553 =  Shape();
Shape1553.setUSE(CString("HAnimJointShape"));
Transform1552.addChild(&Shape1553);

Transform1551.addChild(&Transform1552);

HAnimSegment1550.addChild(&Transform1551);

Shape& Shape1554 =  Shape();
LineSet& LineSet1555 =  LineSet();
LineSet1555.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1556 =  Coordinate();
Coordinate1556.setPoint(new float[]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
LineSet1555.setCoord(Coordinate1556);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1557 =  ColorRGBA();
ColorRGBA1557.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1555.addChild(&ColorRGBA1557);

Shape1554.setGeometry(&LineSet1555);

HAnimSegment1550.addChild(&Shape1554);

HAnimJoint1549.addChildren(&HAnimSegment1550);

HAnimJoint& HAnimJoint1558 =  HAnimJoint();
HAnimJoint1558.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1558.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint1558.setCenter(new float[]{-0.1951,0.7845,-0.0732});
HAnimJoint1558.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1558.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1559 =  HAnimSegment();
HAnimSegment1559.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1559.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform& Transform1560 =  Transform();
//Empty Transform
Transform& Transform1561 =  Transform();
//Empty Transform
Shape& Shape1562 =  Shape();
Shape1562.setUSE(CString("HAnimJointShape"));
Transform1561.addChild(&Shape1562);

Transform1560.addChild(&Transform1561);

HAnimSegment1559.addChild(&Transform1560);

Shape& Shape1563 =  Shape();
LineSet& LineSet1564 =  LineSet();
LineSet1564.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1565 =  Coordinate();
Coordinate1565.setPoint(new float[]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
LineSet1564.setCoord(Coordinate1565);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1566 =  ColorRGBA();
ColorRGBA1566.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1564.addChild(&ColorRGBA1566);

Shape1563.setGeometry(&LineSet1564);

HAnimSegment1559.addChild(&Shape1563);

HAnimJoint1558.addChildren(&HAnimSegment1559);

HAnimJoint& HAnimJoint1567 =  HAnimJoint();
HAnimJoint1567.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1567.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1567.setCenter(new float[]{-0.192,0.7318,-0.0716});
HAnimJoint1567.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1567.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1568 =  HAnimSegment();
HAnimSegment1568.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1568.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform& Transform1569 =  Transform();
//Empty Transform
Transform& Transform1570 =  Transform();
//Empty Transform
Shape& Shape1571 =  Shape();
Shape1571.setUSE(CString("HAnimJointShape"));
Transform1570.addChild(&Shape1571);

Transform1569.addChild(&Transform1570);

HAnimSegment1568.addChild(&Transform1569);

Shape& Shape1572 =  Shape();
LineSet& LineSet1573 =  LineSet();
LineSet1573.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1574 =  Coordinate();
Coordinate1574.setPoint(new float[]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
LineSet1573.setCoord(Coordinate1574);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1575 =  ColorRGBA();
ColorRGBA1575.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1573.addChild(&ColorRGBA1575);

Shape1572.setGeometry(&LineSet1573);

HAnimSegment1568.addChild(&Shape1572);

HAnimSite& HAnimSite1576 =  HAnimSite();
HAnimSite1576.X3DNode::setName(CString("r_carpal_distal_phalanx_4_tip"));
HAnimSite1576.setDEF(CString("hanim_r_carpal_distal_phalanx_4_tip"));
HAnimSite1576.setTranslation(new float[]{0.1,0.93,0});
TouchSensor& TouchSensor1577 =  TouchSensor();
TouchSensor1577.setDescription(CString("HAnimSite r_carpal_distal_phalanx_4_tip"));
HAnimSite1576.addChild(&TouchSensor1577);

Shape& Shape1578 =  Shape();
Shape1578.setUSE(CString("HAnimSiteShape"));
HAnimSite1576.addChild(&Shape1578);

HAnimSegment1568.addChild(&HAnimSite1576);

HAnimJoint1567.addChildren(&HAnimSegment1568);

HAnimJoint& HAnimJoint1579 =  HAnimJoint();
HAnimJoint1579.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1579.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint1579.setCenter(new float[]{-0.1908,0.7077,-0.0706});
HAnimJoint1579.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1579.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1567.addChildren(&HAnimJoint1579);

HAnimJoint1558.addChildren(&HAnimJoint1567);

HAnimJoint1549.addChildren(&HAnimJoint1558);

HAnimJoint1533.addChildren(&HAnimJoint1549);

HAnimJoint& HAnimJoint1580 =  HAnimJoint();
HAnimJoint1580.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint1580.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint1580.setCenter(new float[]{-0.1926,0.8096,-0.0975});
HAnimJoint1580.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1580.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1581 =  HAnimSegment();
HAnimSegment1581.X3DNode::setName(CString("r_metacarpal_5"));
HAnimSegment1581.setDEF(CString("hanim_r_metacarpal_5"));
Transform& Transform1582 =  Transform();
//Empty Transform
Transform& Transform1583 =  Transform();
//Empty Transform
Shape& Shape1584 =  Shape();
Shape1584.setUSE(CString("HAnimJointShape"));
Transform1583.addChild(&Shape1584);

Transform1582.addChild(&Transform1583);

HAnimSegment1581.addChild(&Transform1582);

Shape& Shape1585 =  Shape();
LineSet& LineSet1586 =  LineSet();
LineSet1586.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1587 =  Coordinate();
Coordinate1587.setPoint(new float[]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
LineSet1586.setCoord(Coordinate1587);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1588 =  ColorRGBA();
ColorRGBA1588.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1586.addChild(&ColorRGBA1588);

Shape1585.setGeometry(&LineSet1586);

HAnimSegment1581.addChild(&Shape1585);

HAnimJoint1580.addChildren(&HAnimSegment1581);

HAnimJoint& HAnimJoint1589 =  HAnimJoint();
HAnimJoint1589.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1589.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint1589.setCenter(new float[]{-0.1926,0.7896,-0.0975});
HAnimJoint1589.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1589.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1590 =  HAnimSegment();
HAnimSegment1590.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1590.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform& Transform1591 =  Transform();
//Empty Transform
Transform& Transform1592 =  Transform();
//Empty Transform
Shape& Shape1593 =  Shape();
Shape1593.setUSE(CString("HAnimJointShape"));
Transform1592.addChild(&Shape1593);

Transform1591.addChild(&Transform1592);

HAnimSegment1590.addChild(&Transform1591);

Shape& Shape1594 =  Shape();
LineSet& LineSet1595 =  LineSet();
LineSet1595.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1596 =  Coordinate();
Coordinate1596.setPoint(new float[]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
LineSet1595.setCoord(Coordinate1596);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1597 =  ColorRGBA();
ColorRGBA1597.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1595.addChild(&ColorRGBA1597);

Shape1594.setGeometry(&LineSet1595);

HAnimSegment1590.addChild(&Shape1594);

HAnimJoint1589.addChildren(&HAnimSegment1590);

HAnimJoint& HAnimJoint1598 =  HAnimJoint();
HAnimJoint1598.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1598.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1598.setCenter(new float[]{-0.1902,0.7483,-0.0963});
HAnimJoint1598.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1598.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1599 =  HAnimSegment();
HAnimSegment1599.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1599.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform& Transform1600 =  Transform();
//Empty Transform
Transform& Transform1601 =  Transform();
//Empty Transform
Shape& Shape1602 =  Shape();
Shape1602.setUSE(CString("HAnimJointShape"));
Transform1601.addChild(&Shape1602);

Transform1600.addChild(&Transform1601);

HAnimSegment1599.addChild(&Transform1600);

Shape& Shape1603 =  Shape();
LineSet& LineSet1604 =  LineSet();
LineSet1604.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1605 =  Coordinate();
Coordinate1605.setPoint(new float[]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
LineSet1604.setCoord(Coordinate1605);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1606 =  ColorRGBA();
ColorRGBA1606.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1604.addChild(&ColorRGBA1606);

Shape1603.setGeometry(&LineSet1604);

HAnimSegment1599.addChild(&Shape1603);

HAnimSite& HAnimSite1607 =  HAnimSite();
HAnimSite1607.X3DNode::setName(CString("r_carpal_distal_phalanx_5_tip"));
HAnimSite1607.setDEF(CString("hanim_r_carpal_distal_phalanx_5_tip"));
HAnimSite1607.setTranslation(new float[]{0.25,0.79,0});
TouchSensor& TouchSensor1608 =  TouchSensor();
TouchSensor1608.setDescription(CString("HAnimSite r_carpal_distal_phalanx_5_tip"));
HAnimSite1607.addChild(&TouchSensor1608);

Shape& Shape1609 =  Shape();
Shape1609.setUSE(CString("HAnimSiteShape"));
HAnimSite1607.addChild(&Shape1609);

HAnimSegment1599.addChild(&HAnimSite1607);

HAnimJoint1598.addChildren(&HAnimSegment1599);

HAnimJoint& HAnimJoint1610 =  HAnimJoint();
HAnimJoint1610.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1610.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint1610.setCenter(new float[]{-0.1908,0.754,-0.096});
HAnimJoint1610.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1610.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1598.addChildren(&HAnimJoint1610);

HAnimJoint1589.addChildren(&HAnimJoint1598);

HAnimJoint1580.addChildren(&HAnimJoint1589);

HAnimJoint1533.addChildren(&HAnimJoint1580);

HAnimJoint1392.addChildren(&HAnimJoint1533);

HAnimJoint1380.addChildren(&HAnimJoint1392);

HAnimJoint1359.addChildren(&HAnimJoint1380);

HAnimJoint1344.addChildren(&HAnimJoint1359);

HAnimJoint1335.addChildren(&HAnimJoint1344);

HAnimJoint854.addChildren(&HAnimJoint1335);

HAnimJoint839.addChildren(&HAnimJoint854);

HAnimJoint830.addChildren(&HAnimJoint839);

HAnimJoint821.addChildren(&HAnimJoint830);

HAnimJoint812.addChildren(&HAnimJoint821);

HAnimJoint800.addChildren(&HAnimJoint812);

HAnimJoint779.addChildren(&HAnimJoint800);

HAnimJoint770.addChildren(&HAnimJoint779);

HAnimJoint761.addChildren(&HAnimJoint770);

HAnimJoint746.addChildren(&HAnimJoint761);

HAnimJoint734.addChildren(&HAnimJoint746);

HAnimJoint725.addChildren(&HAnimJoint734);

HAnimJoint716.addChildren(&HAnimJoint725);

HAnimJoint707.addChildren(&HAnimJoint716);

HAnimJoint689.addChildren(&HAnimJoint707);

HAnimJoint680.addChildren(&HAnimJoint689);

HAnimJoint671.addChildren(&HAnimJoint680);

HAnimJoint52.addChildren(&HAnimJoint671);

HAnimHumanoid43.setSkeleton(&HAnimJoint52);

HAnimJoint& HAnimJoint1611 =  HAnimJoint();
HAnimJoint1611.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid43.setJoints(&HAnimJoint1611);

HAnimJoint& HAnimJoint1612 =  HAnimJoint();
HAnimJoint1612.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid43.setJoints(&HAnimJoint1612);

HAnimJoint& HAnimJoint1613 =  HAnimJoint();
HAnimJoint1613.setUSE(CString("hanim_l_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1613);

HAnimJoint& HAnimJoint1614 =  HAnimJoint();
HAnimJoint1614.setUSE(CString("hanim_l_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1614);

HAnimJoint& HAnimJoint1615 =  HAnimJoint();
HAnimJoint1615.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint1615);

HAnimJoint& HAnimJoint1616 =  HAnimJoint();
HAnimJoint1616.setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1616);

HAnimJoint& HAnimJoint1617 =  HAnimJoint();
HAnimJoint1617.setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1617);

HAnimJoint& HAnimJoint1618 =  HAnimJoint();
HAnimJoint1618.setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1618);

HAnimJoint& HAnimJoint1619 =  HAnimJoint();
HAnimJoint1619.setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1619);

HAnimJoint& HAnimJoint1620 =  HAnimJoint();
HAnimJoint1620.setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1620);

HAnimJoint& HAnimJoint1621 =  HAnimJoint();
HAnimJoint1621.setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1621);

HAnimJoint& HAnimJoint1622 =  HAnimJoint();
HAnimJoint1622.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1622);

HAnimJoint& HAnimJoint1623 =  HAnimJoint();
HAnimJoint1623.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1623);

HAnimJoint& HAnimJoint1624 =  HAnimJoint();
HAnimJoint1624.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1624);

HAnimJoint& HAnimJoint1625 =  HAnimJoint();
HAnimJoint1625.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1625);

HAnimJoint& HAnimJoint1626 =  HAnimJoint();
HAnimJoint1626.setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1626);

HAnimJoint& HAnimJoint1627 =  HAnimJoint();
HAnimJoint1627.setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1627);

HAnimJoint& HAnimJoint1628 =  HAnimJoint();
HAnimJoint1628.setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1628);

HAnimJoint& HAnimJoint1629 =  HAnimJoint();
HAnimJoint1629.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1629);

HAnimJoint& HAnimJoint1630 =  HAnimJoint();
HAnimJoint1630.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1630);

HAnimJoint& HAnimJoint1631 =  HAnimJoint();
HAnimJoint1631.setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid43.setJoints(&HAnimJoint1631);

HAnimJoint& HAnimJoint1632 =  HAnimJoint();
HAnimJoint1632.setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1632);

HAnimJoint& HAnimJoint1633 =  HAnimJoint();
HAnimJoint1633.setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1633);

HAnimJoint& HAnimJoint1634 =  HAnimJoint();
HAnimJoint1634.setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1634);

HAnimJoint& HAnimJoint1635 =  HAnimJoint();
HAnimJoint1635.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1635);

HAnimJoint& HAnimJoint1636 =  HAnimJoint();
HAnimJoint1636.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1636);

HAnimJoint& HAnimJoint1637 =  HAnimJoint();
HAnimJoint1637.setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1637);

HAnimJoint& HAnimJoint1638 =  HAnimJoint();
HAnimJoint1638.setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1638);

HAnimJoint& HAnimJoint1639 =  HAnimJoint();
HAnimJoint1639.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1639);

HAnimJoint& HAnimJoint1640 =  HAnimJoint();
HAnimJoint1640.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1640);

HAnimJoint& HAnimJoint1641 =  HAnimJoint();
HAnimJoint1641.setUSE(CString("hanim_r_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1641);

HAnimJoint& HAnimJoint1642 =  HAnimJoint();
HAnimJoint1642.setUSE(CString("hanim_r_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1642);

HAnimJoint& HAnimJoint1643 =  HAnimJoint();
HAnimJoint1643.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint1643);

HAnimJoint& HAnimJoint1644 =  HAnimJoint();
HAnimJoint1644.setUSE(CString("hanim_r_talocalcaneonavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1644);

HAnimJoint& HAnimJoint1645 =  HAnimJoint();
HAnimJoint1645.setUSE(CString("hanim_r_cuneonavicular_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1645);

HAnimJoint& HAnimJoint1646 =  HAnimJoint();
HAnimJoint1646.setUSE(CString("hanim_r_tarsometatarsal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1646);

HAnimJoint& HAnimJoint1647 =  HAnimJoint();
HAnimJoint1647.setUSE(CString("hanim_r_metatarsophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1647);

HAnimJoint& HAnimJoint1648 =  HAnimJoint();
HAnimJoint1648.setUSE(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1648);

HAnimJoint& HAnimJoint1649 =  HAnimJoint();
HAnimJoint1649.setUSE(CString("hanim_r_cuneonavicular_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1649);

HAnimJoint& HAnimJoint1650 =  HAnimJoint();
HAnimJoint1650.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1650);

HAnimJoint& HAnimJoint1651 =  HAnimJoint();
HAnimJoint1651.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1651);

HAnimJoint& HAnimJoint1652 =  HAnimJoint();
HAnimJoint1652.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1652);

HAnimJoint& HAnimJoint1653 =  HAnimJoint();
HAnimJoint1653.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1653);

HAnimJoint& HAnimJoint1654 =  HAnimJoint();
HAnimJoint1654.setUSE(CString("hanim_r_cuneonavicular_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1654);

HAnimJoint& HAnimJoint1655 =  HAnimJoint();
HAnimJoint1655.setUSE(CString("hanim_r_tarsometatarsal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1655);

HAnimJoint& HAnimJoint1656 =  HAnimJoint();
HAnimJoint1656.setUSE(CString("hanim_r_metatarsophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1656);

HAnimJoint& HAnimJoint1657 =  HAnimJoint();
HAnimJoint1657.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1657);

HAnimJoint& HAnimJoint1658 =  HAnimJoint();
HAnimJoint1658.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1658);

HAnimJoint& HAnimJoint1659 =  HAnimJoint();
HAnimJoint1659.setUSE(CString("hanim_r_calcaneocuboid"));
HAnimHumanoid43.setJoints(&HAnimJoint1659);

HAnimJoint& HAnimJoint1660 =  HAnimJoint();
HAnimJoint1660.setUSE(CString("hanim_r_transversetarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1660);

HAnimJoint& HAnimJoint1661 =  HAnimJoint();
HAnimJoint1661.setUSE(CString("hanim_r_tarsometatarsal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1661);

HAnimJoint& HAnimJoint1662 =  HAnimJoint();
HAnimJoint1662.setUSE(CString("hanim_r_metatarsophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1662);

HAnimJoint& HAnimJoint1663 =  HAnimJoint();
HAnimJoint1663.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1663);

HAnimJoint& HAnimJoint1664 =  HAnimJoint();
HAnimJoint1664.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1664);

HAnimJoint& HAnimJoint1665 =  HAnimJoint();
HAnimJoint1665.setUSE(CString("hanim_r_tarsometatarsal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1665);

HAnimJoint& HAnimJoint1666 =  HAnimJoint();
HAnimJoint1666.setUSE(CString("hanim_r_metatarsophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1666);

HAnimJoint& HAnimJoint1667 =  HAnimJoint();
HAnimJoint1667.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1667);

HAnimJoint& HAnimJoint1668 =  HAnimJoint();
HAnimJoint1668.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1668);

HAnimJoint& HAnimJoint1669 =  HAnimJoint();
HAnimJoint1669.setUSE(CString("hanim_vl5"));
HAnimHumanoid43.setJoints(&HAnimJoint1669);

HAnimJoint& HAnimJoint1670 =  HAnimJoint();
HAnimJoint1670.setUSE(CString("hanim_vl4"));
HAnimHumanoid43.setJoints(&HAnimJoint1670);

HAnimJoint& HAnimJoint1671 =  HAnimJoint();
HAnimJoint1671.setUSE(CString("hanim_vl3"));
HAnimHumanoid43.setJoints(&HAnimJoint1671);

HAnimJoint& HAnimJoint1672 =  HAnimJoint();
HAnimJoint1672.setUSE(CString("hanim_vl2"));
HAnimHumanoid43.setJoints(&HAnimJoint1672);

HAnimJoint& HAnimJoint1673 =  HAnimJoint();
HAnimJoint1673.setUSE(CString("hanim_vl1"));
HAnimHumanoid43.setJoints(&HAnimJoint1673);

HAnimJoint& HAnimJoint1674 =  HAnimJoint();
HAnimJoint1674.setUSE(CString("hanim_vt12"));
HAnimHumanoid43.setJoints(&HAnimJoint1674);

HAnimJoint& HAnimJoint1675 =  HAnimJoint();
HAnimJoint1675.setUSE(CString("hanim_vt11"));
HAnimHumanoid43.setJoints(&HAnimJoint1675);

HAnimJoint& HAnimJoint1676 =  HAnimJoint();
HAnimJoint1676.setUSE(CString("hanim_vt10"));
HAnimHumanoid43.setJoints(&HAnimJoint1676);

HAnimJoint& HAnimJoint1677 =  HAnimJoint();
HAnimJoint1677.setUSE(CString("hanim_vt9"));
HAnimHumanoid43.setJoints(&HAnimJoint1677);

HAnimJoint& HAnimJoint1678 =  HAnimJoint();
HAnimJoint1678.setUSE(CString("hanim_vt8"));
HAnimHumanoid43.setJoints(&HAnimJoint1678);

HAnimJoint& HAnimJoint1679 =  HAnimJoint();
HAnimJoint1679.setUSE(CString("hanim_vt7"));
HAnimHumanoid43.setJoints(&HAnimJoint1679);

HAnimJoint& HAnimJoint1680 =  HAnimJoint();
HAnimJoint1680.setUSE(CString("hanim_vt6"));
HAnimHumanoid43.setJoints(&HAnimJoint1680);

HAnimJoint& HAnimJoint1681 =  HAnimJoint();
HAnimJoint1681.setUSE(CString("hanim_vt5"));
HAnimHumanoid43.setJoints(&HAnimJoint1681);

HAnimJoint& HAnimJoint1682 =  HAnimJoint();
HAnimJoint1682.setUSE(CString("hanim_vt4"));
HAnimHumanoid43.setJoints(&HAnimJoint1682);

HAnimJoint& HAnimJoint1683 =  HAnimJoint();
HAnimJoint1683.setUSE(CString("hanim_vt3"));
HAnimHumanoid43.setJoints(&HAnimJoint1683);

HAnimJoint& HAnimJoint1684 =  HAnimJoint();
HAnimJoint1684.setUSE(CString("hanim_vt2"));
HAnimHumanoid43.setJoints(&HAnimJoint1684);

HAnimJoint& HAnimJoint1685 =  HAnimJoint();
HAnimJoint1685.setUSE(CString("hanim_vt1"));
HAnimHumanoid43.setJoints(&HAnimJoint1685);

HAnimJoint& HAnimJoint1686 =  HAnimJoint();
HAnimJoint1686.setUSE(CString("hanim_vc7"));
HAnimHumanoid43.setJoints(&HAnimJoint1686);

HAnimJoint& HAnimJoint1687 =  HAnimJoint();
HAnimJoint1687.setUSE(CString("hanim_vc6"));
HAnimHumanoid43.setJoints(&HAnimJoint1687);

HAnimJoint& HAnimJoint1688 =  HAnimJoint();
HAnimJoint1688.setUSE(CString("hanim_vc5"));
HAnimHumanoid43.setJoints(&HAnimJoint1688);

HAnimJoint& HAnimJoint1689 =  HAnimJoint();
HAnimJoint1689.setUSE(CString("hanim_vc4"));
HAnimHumanoid43.setJoints(&HAnimJoint1689);

HAnimJoint& HAnimJoint1690 =  HAnimJoint();
HAnimJoint1690.setUSE(CString("hanim_vc3"));
HAnimHumanoid43.setJoints(&HAnimJoint1690);

HAnimJoint& HAnimJoint1691 =  HAnimJoint();
HAnimJoint1691.setUSE(CString("hanim_vc2"));
HAnimHumanoid43.setJoints(&HAnimJoint1691);

HAnimJoint& HAnimJoint1692 =  HAnimJoint();
HAnimJoint1692.setUSE(CString("hanim_vc1"));
HAnimHumanoid43.setJoints(&HAnimJoint1692);

HAnimJoint& HAnimJoint1693 =  HAnimJoint();
HAnimJoint1693.setUSE(CString("hanim_skullbase"));
HAnimHumanoid43.setJoints(&HAnimJoint1693);

HAnimJoint& HAnimJoint1694 =  HAnimJoint();
HAnimJoint1694.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1694);

HAnimJoint& HAnimJoint1695 =  HAnimJoint();
HAnimJoint1695.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1695);

HAnimJoint& HAnimJoint1696 =  HAnimJoint();
HAnimJoint1696.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1696);

HAnimJoint& HAnimJoint1697 =  HAnimJoint();
HAnimJoint1697.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1697);

HAnimJoint& HAnimJoint1698 =  HAnimJoint();
HAnimJoint1698.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1698);

HAnimJoint& HAnimJoint1699 =  HAnimJoint();
HAnimJoint1699.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1699);

HAnimJoint& HAnimJoint1700 =  HAnimJoint();
HAnimJoint1700.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid43.setJoints(&HAnimJoint1700);

HAnimJoint& HAnimJoint1701 =  HAnimJoint();
HAnimJoint1701.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1701);

HAnimJoint& HAnimJoint1702 =  HAnimJoint();
HAnimJoint1702.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1702);

HAnimJoint& HAnimJoint1703 =  HAnimJoint();
HAnimJoint1703.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1703);

HAnimJoint& HAnimJoint1704 =  HAnimJoint();
HAnimJoint1704.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1704);

HAnimJoint& HAnimJoint1705 =  HAnimJoint();
HAnimJoint1705.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint1705);

HAnimJoint& HAnimJoint1706 =  HAnimJoint();
HAnimJoint1706.setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1706);

HAnimJoint& HAnimJoint1707 =  HAnimJoint();
HAnimJoint1707.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1707);

HAnimJoint& HAnimJoint1708 =  HAnimJoint();
HAnimJoint1708.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1708);

HAnimJoint& HAnimJoint1709 =  HAnimJoint();
HAnimJoint1709.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1709);

HAnimJoint& HAnimJoint1710 =  HAnimJoint();
HAnimJoint1710.setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1710);

HAnimJoint& HAnimJoint1711 =  HAnimJoint();
HAnimJoint1711.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1711);

HAnimJoint& HAnimJoint1712 =  HAnimJoint();
HAnimJoint1712.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1712);

HAnimJoint& HAnimJoint1713 =  HAnimJoint();
HAnimJoint1713.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1713);

HAnimJoint& HAnimJoint1714 =  HAnimJoint();
HAnimJoint1714.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1714);

HAnimJoint& HAnimJoint1715 =  HAnimJoint();
HAnimJoint1715.setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1715);

HAnimJoint& HAnimJoint1716 =  HAnimJoint();
HAnimJoint1716.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1716);

HAnimJoint& HAnimJoint1717 =  HAnimJoint();
HAnimJoint1717.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1717);

HAnimJoint& HAnimJoint1718 =  HAnimJoint();
HAnimJoint1718.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1718);

HAnimJoint& HAnimJoint1719 =  HAnimJoint();
HAnimJoint1719.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1719);

HAnimJoint& HAnimJoint1720 =  HAnimJoint();
HAnimJoint1720.setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1720);

HAnimJoint& HAnimJoint1721 =  HAnimJoint();
HAnimJoint1721.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1721);

HAnimJoint& HAnimJoint1722 =  HAnimJoint();
HAnimJoint1722.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1722);

HAnimJoint& HAnimJoint1723 =  HAnimJoint();
HAnimJoint1723.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1723);

HAnimJoint& HAnimJoint1724 =  HAnimJoint();
HAnimJoint1724.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1724);

HAnimJoint& HAnimJoint1725 =  HAnimJoint();
HAnimJoint1725.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1725);

HAnimJoint& HAnimJoint1726 =  HAnimJoint();
HAnimJoint1726.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1726);

HAnimJoint& HAnimJoint1727 =  HAnimJoint();
HAnimJoint1727.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1727);

HAnimJoint& HAnimJoint1728 =  HAnimJoint();
HAnimJoint1728.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1728);

HAnimJoint& HAnimJoint1729 =  HAnimJoint();
HAnimJoint1729.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1729);

HAnimJoint& HAnimJoint1730 =  HAnimJoint();
HAnimJoint1730.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1730);

HAnimJoint& HAnimJoint1731 =  HAnimJoint();
HAnimJoint1731.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1731);

HAnimJoint& HAnimJoint1732 =  HAnimJoint();
HAnimJoint1732.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1732);

HAnimJoint& HAnimJoint1733 =  HAnimJoint();
HAnimJoint1733.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint1733);

HAnimJoint& HAnimJoint1734 =  HAnimJoint();
HAnimJoint1734.setUSE(CString("hanim_r_midcarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1734);

HAnimJoint& HAnimJoint1735 =  HAnimJoint();
HAnimJoint1735.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1735);

HAnimJoint& HAnimJoint1736 =  HAnimJoint();
HAnimJoint1736.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1736);

HAnimJoint& HAnimJoint1737 =  HAnimJoint();
HAnimJoint1737.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1737);

HAnimJoint& HAnimJoint1738 =  HAnimJoint();
HAnimJoint1738.setUSE(CString("hanim_r_midcarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1738);

HAnimJoint& HAnimJoint1739 =  HAnimJoint();
HAnimJoint1739.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1739);

HAnimJoint& HAnimJoint1740 =  HAnimJoint();
HAnimJoint1740.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1740);

HAnimJoint& HAnimJoint1741 =  HAnimJoint();
HAnimJoint1741.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1741);

HAnimJoint& HAnimJoint1742 =  HAnimJoint();
HAnimJoint1742.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1742);

HAnimJoint& HAnimJoint1743 =  HAnimJoint();
HAnimJoint1743.setUSE(CString("hanim_r_midcarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1743);

HAnimJoint& HAnimJoint1744 =  HAnimJoint();
HAnimJoint1744.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1744);

HAnimJoint& HAnimJoint1745 =  HAnimJoint();
HAnimJoint1745.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1745);

HAnimJoint& HAnimJoint1746 =  HAnimJoint();
HAnimJoint1746.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1746);

HAnimJoint& HAnimJoint1747 =  HAnimJoint();
HAnimJoint1747.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1747);

HAnimJoint& HAnimJoint1748 =  HAnimJoint();
HAnimJoint1748.setUSE(CString("hanim_r_midcarpal_4_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1748);

HAnimJoint& HAnimJoint1749 =  HAnimJoint();
HAnimJoint1749.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1749);

HAnimJoint& HAnimJoint1750 =  HAnimJoint();
HAnimJoint1750.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1750);

HAnimJoint& HAnimJoint1751 =  HAnimJoint();
HAnimJoint1751.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1751);

HAnimJoint& HAnimJoint1752 =  HAnimJoint();
HAnimJoint1752.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1752);

HAnimJoint& HAnimJoint1753 =  HAnimJoint();
HAnimJoint1753.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1753);

HAnimJoint& HAnimJoint1754 =  HAnimJoint();
HAnimJoint1754.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1754);

HAnimJoint& HAnimJoint1755 =  HAnimJoint();
HAnimJoint1755.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1755);

HAnimJoint& HAnimJoint1756 =  HAnimJoint();
HAnimJoint1756.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1756);

HAnimSegment& HAnimSegment1757 =  HAnimSegment();
HAnimSegment1757.setUSE(CString("hanim_sacrum"));
HAnimHumanoid43.setSegments(&HAnimSegment1757);

HAnimSegment& HAnimSegment1758 =  HAnimSegment();
HAnimSegment1758.setUSE(CString("hanim_pelvis"));
HAnimHumanoid43.setSegments(&HAnimSegment1758);

HAnimSegment& HAnimSegment1759 =  HAnimSegment();
HAnimSegment1759.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1759);

HAnimSegment& HAnimSegment1760 =  HAnimSegment();
HAnimSegment1760.setUSE(CString("hanim_l_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1760);

HAnimSegment& HAnimSegment1761 =  HAnimSegment();
HAnimSegment1761.setUSE(CString("hanim_l_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment1761);

HAnimSegment& HAnimSegment1762 =  HAnimSegment();
HAnimSegment1762.setUSE(CString("hanim_l_navicular"));
HAnimHumanoid43.setSegments(&HAnimSegment1762);

HAnimSegment& HAnimSegment1763 =  HAnimSegment();
HAnimSegment1763.setUSE(CString("hanim_l_cuneiform_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1763);

HAnimSegment& HAnimSegment1764 =  HAnimSegment();
HAnimSegment1764.setUSE(CString("hanim_l_metatarsal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1764);

HAnimSegment& HAnimSegment1765 =  HAnimSegment();
HAnimSegment1765.setUSE(CString("hanim_l_tarsal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1765);

HAnimSegment& HAnimSegment1766 =  HAnimSegment();
HAnimSegment1766.setUSE(CString("hanim_l_cuneiform_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1766);

HAnimSegment& HAnimSegment1767 =  HAnimSegment();
HAnimSegment1767.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1767);

HAnimSegment& HAnimSegment1768 =  HAnimSegment();
HAnimSegment1768.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1768);

HAnimSegment& HAnimSegment1769 =  HAnimSegment();
HAnimSegment1769.setUSE(CString("hanim_l_tarsal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1769);

HAnimSegment& HAnimSegment1770 =  HAnimSegment();
HAnimSegment1770.setUSE(CString("hanim_l_cuneiform_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1770);

HAnimSegment& HAnimSegment1771 =  HAnimSegment();
HAnimSegment1771.setUSE(CString("hanim_l_metatarsal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1771);

HAnimSegment& HAnimSegment1772 =  HAnimSegment();
HAnimSegment1772.setUSE(CString("hanim_l_tarsal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1772);

HAnimSegment& HAnimSegment1773 =  HAnimSegment();
HAnimSegment1773.setUSE(CString("hanim_l_tarsal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1773);

HAnimSegment& HAnimSegment1774 =  HAnimSegment();
HAnimSegment1774.setUSE(CString("hanim_l_calcaneus"));
HAnimHumanoid43.setSegments(&HAnimSegment1774);

HAnimSegment& HAnimSegment1775 =  HAnimSegment();
HAnimSegment1775.setUSE(CString("hanim_l_cuboid"));
HAnimHumanoid43.setSegments(&HAnimSegment1775);

HAnimSegment& HAnimSegment1776 =  HAnimSegment();
HAnimSegment1776.setUSE(CString("hanim_l_metatarsal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1776);

HAnimSegment& HAnimSegment1777 =  HAnimSegment();
HAnimSegment1777.setUSE(CString("hanim_l_tarsal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1777);

HAnimSegment& HAnimSegment1778 =  HAnimSegment();
HAnimSegment1778.setUSE(CString("hanim_l_tarsal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1778);

HAnimSegment& HAnimSegment1779 =  HAnimSegment();
HAnimSegment1779.setUSE(CString("hanim_l_metatarsal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1779);

HAnimSegment& HAnimSegment1780 =  HAnimSegment();
HAnimSegment1780.setUSE(CString("hanim_l_tarsal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1780);

HAnimSegment& HAnimSegment1781 =  HAnimSegment();
HAnimSegment1781.setUSE(CString("hanim_l_tarsal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1781);

HAnimSegment& HAnimSegment1782 =  HAnimSegment();
HAnimSegment1782.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1782);

HAnimSegment& HAnimSegment1783 =  HAnimSegment();
HAnimSegment1783.setUSE(CString("hanim_r_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1783);

HAnimSegment& HAnimSegment1784 =  HAnimSegment();
HAnimSegment1784.setUSE(CString("hanim_r_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment1784);

HAnimSegment& HAnimSegment1785 =  HAnimSegment();
HAnimSegment1785.setUSE(CString("hanim_r_navicular"));
HAnimHumanoid43.setSegments(&HAnimSegment1785);

HAnimSegment& HAnimSegment1786 =  HAnimSegment();
HAnimSegment1786.setUSE(CString("hanim_r_cuneiform_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1786);

HAnimSegment& HAnimSegment1787 =  HAnimSegment();
HAnimSegment1787.setUSE(CString("hanim_r_metatarsal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1787);

HAnimSegment& HAnimSegment1788 =  HAnimSegment();
HAnimSegment1788.setUSE(CString("hanim_r_tarsal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1788);

HAnimSegment& HAnimSegment1789 =  HAnimSegment();
HAnimSegment1789.setUSE(CString("hanim_r_cuneiform_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1789);

HAnimSegment& HAnimSegment1790 =  HAnimSegment();
HAnimSegment1790.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1790);

HAnimSegment& HAnimSegment1791 =  HAnimSegment();
HAnimSegment1791.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1791);

HAnimSegment& HAnimSegment1792 =  HAnimSegment();
HAnimSegment1792.setUSE(CString("hanim_r_tarsal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1792);

HAnimSegment& HAnimSegment1793 =  HAnimSegment();
HAnimSegment1793.setUSE(CString("hanim_r_cuneiform_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1793);

HAnimSegment& HAnimSegment1794 =  HAnimSegment();
HAnimSegment1794.setUSE(CString("hanim_r_metatarsal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1794);

HAnimSegment& HAnimSegment1795 =  HAnimSegment();
HAnimSegment1795.setUSE(CString("hanim_r_tarsal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1795);

HAnimSegment& HAnimSegment1796 =  HAnimSegment();
HAnimSegment1796.setUSE(CString("hanim_r_tarsal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1796);

HAnimSegment& HAnimSegment1797 =  HAnimSegment();
HAnimSegment1797.setUSE(CString("hanim_r_calcaneus"));
HAnimHumanoid43.setSegments(&HAnimSegment1797);

HAnimSegment& HAnimSegment1798 =  HAnimSegment();
HAnimSegment1798.setUSE(CString("hanim_r_cuboid"));
HAnimHumanoid43.setSegments(&HAnimSegment1798);

HAnimSegment& HAnimSegment1799 =  HAnimSegment();
HAnimSegment1799.setUSE(CString("hanim_r_metatarsal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1799);

HAnimSegment& HAnimSegment1800 =  HAnimSegment();
HAnimSegment1800.setUSE(CString("hanim_r_tarsal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1800);

HAnimSegment& HAnimSegment1801 =  HAnimSegment();
HAnimSegment1801.setUSE(CString("hanim_r_tarsal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1801);

HAnimSegment& HAnimSegment1802 =  HAnimSegment();
HAnimSegment1802.setUSE(CString("hanim_r_metatarsal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1802);

HAnimSegment& HAnimSegment1803 =  HAnimSegment();
HAnimSegment1803.setUSE(CString("hanim_r_tarsal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1803);

HAnimSegment& HAnimSegment1804 =  HAnimSegment();
HAnimSegment1804.setUSE(CString("hanim_r_tarsal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1804);

HAnimSegment& HAnimSegment1805 =  HAnimSegment();
HAnimSegment1805.setUSE(CString("hanim_l5"));
HAnimHumanoid43.setSegments(&HAnimSegment1805);

HAnimSegment& HAnimSegment1806 =  HAnimSegment();
HAnimSegment1806.setUSE(CString("hanim_l4"));
HAnimHumanoid43.setSegments(&HAnimSegment1806);

HAnimSegment& HAnimSegment1807 =  HAnimSegment();
HAnimSegment1807.setUSE(CString("hanim_l3"));
HAnimHumanoid43.setSegments(&HAnimSegment1807);

HAnimSegment& HAnimSegment1808 =  HAnimSegment();
HAnimSegment1808.setUSE(CString("hanim_l2"));
HAnimHumanoid43.setSegments(&HAnimSegment1808);

HAnimSegment& HAnimSegment1809 =  HAnimSegment();
HAnimSegment1809.setUSE(CString("hanim_l1"));
HAnimHumanoid43.setSegments(&HAnimSegment1809);

HAnimSegment& HAnimSegment1810 =  HAnimSegment();
HAnimSegment1810.setUSE(CString("hanim_t12"));
HAnimHumanoid43.setSegments(&HAnimSegment1810);

HAnimSegment& HAnimSegment1811 =  HAnimSegment();
HAnimSegment1811.setUSE(CString("hanim_t11"));
HAnimHumanoid43.setSegments(&HAnimSegment1811);

HAnimSegment& HAnimSegment1812 =  HAnimSegment();
HAnimSegment1812.setUSE(CString("hanim_t10"));
HAnimHumanoid43.setSegments(&HAnimSegment1812);

HAnimSegment& HAnimSegment1813 =  HAnimSegment();
HAnimSegment1813.setUSE(CString("hanim_t9"));
HAnimHumanoid43.setSegments(&HAnimSegment1813);

HAnimSegment& HAnimSegment1814 =  HAnimSegment();
HAnimSegment1814.setUSE(CString("hanim_t8"));
HAnimHumanoid43.setSegments(&HAnimSegment1814);

HAnimSegment& HAnimSegment1815 =  HAnimSegment();
HAnimSegment1815.setUSE(CString("hanim_t7"));
HAnimHumanoid43.setSegments(&HAnimSegment1815);

HAnimSegment& HAnimSegment1816 =  HAnimSegment();
HAnimSegment1816.setUSE(CString("hanim_t6"));
HAnimHumanoid43.setSegments(&HAnimSegment1816);

HAnimSegment& HAnimSegment1817 =  HAnimSegment();
HAnimSegment1817.setUSE(CString("hanim_t5"));
HAnimHumanoid43.setSegments(&HAnimSegment1817);

HAnimSegment& HAnimSegment1818 =  HAnimSegment();
HAnimSegment1818.setUSE(CString("hanim_t4"));
HAnimHumanoid43.setSegments(&HAnimSegment1818);

HAnimSegment& HAnimSegment1819 =  HAnimSegment();
HAnimSegment1819.setUSE(CString("hanim_t3"));
HAnimHumanoid43.setSegments(&HAnimSegment1819);

HAnimSegment& HAnimSegment1820 =  HAnimSegment();
HAnimSegment1820.setUSE(CString("hanim_t2"));
HAnimHumanoid43.setSegments(&HAnimSegment1820);

HAnimSegment& HAnimSegment1821 =  HAnimSegment();
HAnimSegment1821.setUSE(CString("hanim_t1"));
HAnimHumanoid43.setSegments(&HAnimSegment1821);

HAnimSegment& HAnimSegment1822 =  HAnimSegment();
HAnimSegment1822.setUSE(CString("hanim_c7"));
HAnimHumanoid43.setSegments(&HAnimSegment1822);

HAnimSegment& HAnimSegment1823 =  HAnimSegment();
HAnimSegment1823.setUSE(CString("hanim_c6"));
HAnimHumanoid43.setSegments(&HAnimSegment1823);

HAnimSegment& HAnimSegment1824 =  HAnimSegment();
HAnimSegment1824.setUSE(CString("hanim_c5"));
HAnimHumanoid43.setSegments(&HAnimSegment1824);

HAnimSegment& HAnimSegment1825 =  HAnimSegment();
HAnimSegment1825.setUSE(CString("hanim_c4"));
HAnimHumanoid43.setSegments(&HAnimSegment1825);

HAnimSegment& HAnimSegment1826 =  HAnimSegment();
HAnimSegment1826.setUSE(CString("hanim_c3"));
HAnimHumanoid43.setSegments(&HAnimSegment1826);

HAnimSegment& HAnimSegment1827 =  HAnimSegment();
HAnimSegment1827.setUSE(CString("hanim_c2"));
HAnimHumanoid43.setSegments(&HAnimSegment1827);

HAnimSegment& HAnimSegment1828 =  HAnimSegment();
HAnimSegment1828.setUSE(CString("hanim_c1"));
HAnimHumanoid43.setSegments(&HAnimSegment1828);

HAnimSegment& HAnimSegment1829 =  HAnimSegment();
HAnimSegment1829.setUSE(CString("hanim_skull"));
HAnimHumanoid43.setSegments(&HAnimSegment1829);

HAnimSegment& HAnimSegment1830 =  HAnimSegment();
HAnimSegment1830.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1830);

HAnimSegment& HAnimSegment1831 =  HAnimSegment();
HAnimSegment1831.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1831);

HAnimSegment& HAnimSegment1832 =  HAnimSegment();
HAnimSegment1832.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1832);

HAnimSegment& HAnimSegment1833 =  HAnimSegment();
HAnimSegment1833.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1833);

HAnimSegment& HAnimSegment1834 =  HAnimSegment();
HAnimSegment1834.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1834);

HAnimSegment& HAnimSegment1835 =  HAnimSegment();
HAnimSegment1835.setUSE(CString("hanim_l_trapezium"));
HAnimHumanoid43.setSegments(&HAnimSegment1835);

HAnimSegment& HAnimSegment1836 =  HAnimSegment();
HAnimSegment1836.setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1836);

HAnimSegment& HAnimSegment1837 =  HAnimSegment();
HAnimSegment1837.setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1837);

HAnimSegment& HAnimSegment1838 =  HAnimSegment();
HAnimSegment1838.setUSE(CString("hanim_l_trapezoid"));
HAnimHumanoid43.setSegments(&HAnimSegment1838);

HAnimSegment& HAnimSegment1839 =  HAnimSegment();
HAnimSegment1839.setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1839);

HAnimSegment& HAnimSegment1840 =  HAnimSegment();
HAnimSegment1840.setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1840);

HAnimSegment& HAnimSegment1841 =  HAnimSegment();
HAnimSegment1841.setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1841);

HAnimSegment& HAnimSegment1842 =  HAnimSegment();
HAnimSegment1842.setUSE(CString("hanim_l_capitate"));
HAnimHumanoid43.setSegments(&HAnimSegment1842);

HAnimSegment& HAnimSegment1843 =  HAnimSegment();
HAnimSegment1843.setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1843);

HAnimSegment& HAnimSegment1844 =  HAnimSegment();
HAnimSegment1844.setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1844);

HAnimSegment& HAnimSegment1845 =  HAnimSegment();
HAnimSegment1845.setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1845);

HAnimSegment& HAnimSegment1846 =  HAnimSegment();
HAnimSegment1846.setUSE(CString("hanim_l_hamate"));
HAnimHumanoid43.setSegments(&HAnimSegment1846);

HAnimSegment& HAnimSegment1847 =  HAnimSegment();
HAnimSegment1847.setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1847);

HAnimSegment& HAnimSegment1848 =  HAnimSegment();
HAnimSegment1848.setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1848);

HAnimSegment& HAnimSegment1849 =  HAnimSegment();
HAnimSegment1849.setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1849);

HAnimSegment& HAnimSegment1850 =  HAnimSegment();
HAnimSegment1850.setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1850);

HAnimSegment& HAnimSegment1851 =  HAnimSegment();
HAnimSegment1851.setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1851);

HAnimSegment& HAnimSegment1852 =  HAnimSegment();
HAnimSegment1852.setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1852);

HAnimSegment& HAnimSegment1853 =  HAnimSegment();
HAnimSegment1853.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1853);

HAnimSegment& HAnimSegment1854 =  HAnimSegment();
HAnimSegment1854.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1854);

HAnimSegment& HAnimSegment1855 =  HAnimSegment();
HAnimSegment1855.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1855);

HAnimSegment& HAnimSegment1856 =  HAnimSegment();
HAnimSegment1856.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1856);

HAnimSegment& HAnimSegment1857 =  HAnimSegment();
HAnimSegment1857.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1857);

HAnimSegment& HAnimSegment1858 =  HAnimSegment();
HAnimSegment1858.setUSE(CString("hanim_r_trapezium"));
HAnimHumanoid43.setSegments(&HAnimSegment1858);

HAnimSegment& HAnimSegment1859 =  HAnimSegment();
HAnimSegment1859.setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1859);

HAnimSegment& HAnimSegment1860 =  HAnimSegment();
HAnimSegment1860.setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1860);

HAnimSegment& HAnimSegment1861 =  HAnimSegment();
HAnimSegment1861.setUSE(CString("hanim_r_trapezoid"));
HAnimHumanoid43.setSegments(&HAnimSegment1861);

HAnimSegment& HAnimSegment1862 =  HAnimSegment();
HAnimSegment1862.setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1862);

HAnimSegment& HAnimSegment1863 =  HAnimSegment();
HAnimSegment1863.setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1863);

HAnimSegment& HAnimSegment1864 =  HAnimSegment();
HAnimSegment1864.setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1864);

HAnimSegment& HAnimSegment1865 =  HAnimSegment();
HAnimSegment1865.setUSE(CString("hanim_r_capitate"));
HAnimHumanoid43.setSegments(&HAnimSegment1865);

HAnimSegment& HAnimSegment1866 =  HAnimSegment();
HAnimSegment1866.setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1866);

HAnimSegment& HAnimSegment1867 =  HAnimSegment();
HAnimSegment1867.setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1867);

HAnimSegment& HAnimSegment1868 =  HAnimSegment();
HAnimSegment1868.setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1868);

HAnimSegment& HAnimSegment1869 =  HAnimSegment();
HAnimSegment1869.setUSE(CString("hanim_r_hamate"));
HAnimHumanoid43.setSegments(&HAnimSegment1869);

HAnimSegment& HAnimSegment1870 =  HAnimSegment();
HAnimSegment1870.setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1870);

HAnimSegment& HAnimSegment1871 =  HAnimSegment();
HAnimSegment1871.setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1871);

HAnimSegment& HAnimSegment1872 =  HAnimSegment();
HAnimSegment1872.setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1872);

HAnimSegment& HAnimSegment1873 =  HAnimSegment();
HAnimSegment1873.setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1873);

HAnimSegment& HAnimSegment1874 =  HAnimSegment();
HAnimSegment1874.setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1874);

HAnimSegment& HAnimSegment1875 =  HAnimSegment();
HAnimSegment1875.setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1875);

HAnimSite& HAnimSite1876 =  HAnimSite();
HAnimSite1876.setUSE(CString("hanim_buttocks_standing_wall_contact_point_pt"));
HAnimHumanoid43.setSites(&HAnimSite1876);

HAnimSite& HAnimSite1877 =  HAnimSite();
HAnimSite1877.setUSE(CString("hanim_crotch_pt"));
HAnimHumanoid43.setSites(&HAnimSite1877);

HAnimSite& HAnimSite1878 =  HAnimSite();
HAnimSite1878.setUSE(CString("hanim_l_asis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1878);

HAnimSite& HAnimSite1879 =  HAnimSite();
HAnimSite1879.setUSE(CString("hanim_l_iliocristale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1879);

HAnimSite& HAnimSite1880 =  HAnimSite();
HAnimSite1880.setUSE(CString("hanim_l_psis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1880);

HAnimSite& HAnimSite1881 =  HAnimSite();
HAnimSite1881.setUSE(CString("hanim_l_trochanterion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1881);

HAnimSite& HAnimSite1882 =  HAnimSite();
HAnimSite1882.setUSE(CString("hanim_r_asis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1882);

HAnimSite& HAnimSite1883 =  HAnimSite();
HAnimSite1883.setUSE(CString("hanim_r_iliocristale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1883);

HAnimSite& HAnimSite1884 =  HAnimSite();
HAnimSite1884.setUSE(CString("hanim_r_psis_pt"));
HAnimHumanoid43.setSites(&HAnimSite1884);

HAnimSite& HAnimSite1885 =  HAnimSite();
HAnimSite1885.setUSE(CString("hanim_r_trochanterion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1885);

HAnimSite& HAnimSite1886 =  HAnimSite();
HAnimSite1886.setUSE(CString("hanim_navel_pt"));
HAnimHumanoid43.setSites(&HAnimSite1886);

HAnimSite& HAnimSite1887 =  HAnimSite();
HAnimSite1887.setUSE(CString("hanim_waist_preferred_anterior_pt"));
HAnimHumanoid43.setSites(&HAnimSite1887);

HAnimSite& HAnimSite1888 =  HAnimSite();
HAnimSite1888.setUSE(CString("hanim_waist_preferred_posterior_pt"));
HAnimHumanoid43.setSites(&HAnimSite1888);

HAnimSite& HAnimSite1889 =  HAnimSite();
HAnimSite1889.setUSE(CString("hanim_l_femoral_lateral_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1889);

HAnimSite& HAnimSite1890 =  HAnimSite();
HAnimSite1890.setUSE(CString("hanim_l_femoral_medial_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1890);

HAnimSite& HAnimSite1891 =  HAnimSite();
HAnimSite1891.setUSE(CString("hanim_l_knee_crease_pt"));
HAnimHumanoid43.setSites(&HAnimSite1891);

HAnimSite& HAnimSite1892 =  HAnimSite();
HAnimSite1892.setUSE(CString("hanim_l_suprapatella_pt"));
HAnimHumanoid43.setSites(&HAnimSite1892);

HAnimSite& HAnimSite1893 =  HAnimSite();
HAnimSite1893.setUSE(CString("hanim_r_femoral_lateral_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1893);

HAnimSite& HAnimSite1894 =  HAnimSite();
HAnimSite1894.setUSE(CString("hanim_r_femoral_medial_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1894);

HAnimSite& HAnimSite1895 =  HAnimSite();
HAnimSite1895.setUSE(CString("hanim_r_knee_crease_pt"));
HAnimHumanoid43.setSites(&HAnimSite1895);

HAnimSite& HAnimSite1896 =  HAnimSite();
HAnimSite1896.setUSE(CString("hanim_r_suprapatella_pt"));
HAnimHumanoid43.setSites(&HAnimSite1896);

HAnimSite& HAnimSite1897 =  HAnimSite();
HAnimSite1897.setUSE(CString("hanim_l_lateral_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1897);

HAnimSite& HAnimSite1898 =  HAnimSite();
HAnimSite1898.setUSE(CString("hanim_l_medial_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1898);

HAnimSite& HAnimSite1899 =  HAnimSite();
HAnimSite1899.setUSE(CString("hanim_l_tibiale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1899);

HAnimSite& HAnimSite1900 =  HAnimSite();
HAnimSite1900.setUSE(CString("hanim_l_calcaneus_posterior_pt"));
HAnimHumanoid43.setSites(&HAnimSite1900);

HAnimSite& HAnimSite1901 =  HAnimSite();
HAnimSite1901.setUSE(CString("hanim_l_sphyrion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1901);

HAnimSite& HAnimSite1902 =  HAnimSite();
HAnimSite1902.setUSE(CString("hanim_l_metatarsal_phalanx_1_pt"));
HAnimHumanoid43.setSites(&HAnimSite1902);

HAnimSite& HAnimSite1903 =  HAnimSite();
HAnimSite1903.setUSE(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1903);

HAnimSite& HAnimSite1904 =  HAnimSite();
HAnimSite1904.setUSE(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1904);

HAnimSite& HAnimSite1905 =  HAnimSite();
HAnimSite1905.setUSE(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1905);

HAnimSite& HAnimSite1906 =  HAnimSite();
HAnimSite1906.setUSE(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1906);

HAnimSite& HAnimSite1907 =  HAnimSite();
HAnimSite1907.setUSE(CString("hanim_l_metatarsal_phalanx_5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1907);

HAnimSite& HAnimSite1908 =  HAnimSite();
HAnimSite1908.setUSE(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1908);

HAnimSite& HAnimSite1909 =  HAnimSite();
HAnimSite1909.setUSE(CString("hanim_r_lateral_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1909);

HAnimSite& HAnimSite1910 =  HAnimSite();
HAnimSite1910.setUSE(CString("hanim_r_medial_malleolus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1910);

HAnimSite& HAnimSite1911 =  HAnimSite();
HAnimSite1911.setUSE(CString("hanim_r_tibiale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1911);

HAnimSite& HAnimSite1912 =  HAnimSite();
HAnimSite1912.setUSE(CString("hanim_r_calcaneus_posterior_pt"));
HAnimHumanoid43.setSites(&HAnimSite1912);

HAnimSite& HAnimSite1913 =  HAnimSite();
HAnimSite1913.setUSE(CString("hanim_r_sphyrion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1913);

HAnimSite& HAnimSite1914 =  HAnimSite();
HAnimSite1914.setUSE(CString("hanim_r_metatarsal_phalanx_1_pt"));
HAnimHumanoid43.setSites(&HAnimSite1914);

HAnimSite& HAnimSite1915 =  HAnimSite();
HAnimSite1915.setUSE(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1915);

HAnimSite& HAnimSite1916 =  HAnimSite();
HAnimSite1916.setUSE(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1916);

HAnimSite& HAnimSite1917 =  HAnimSite();
HAnimSite1917.setUSE(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1917);

HAnimSite& HAnimSite1918 =  HAnimSite();
HAnimSite1918.setUSE(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1918);

HAnimSite& HAnimSite1919 =  HAnimSite();
HAnimSite1919.setUSE(CString("hanim_r_metatarsal_phalanx_5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1919);

HAnimSite& HAnimSite1920 =  HAnimSite();
HAnimSite1920.setUSE(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1920);

HAnimSite& HAnimSite1921 =  HAnimSite();
HAnimSite1921.setUSE(CString("hanim_l_rib10_pt"));
HAnimHumanoid43.setSites(&HAnimSite1921);

HAnimSite& HAnimSite1922 =  HAnimSite();
HAnimSite1922.setUSE(CString("hanim_r_rib10_pt"));
HAnimHumanoid43.setSites(&HAnimSite1922);

HAnimSite& HAnimSite1923 =  HAnimSite();
HAnimSite1923.setUSE(CString("hanim_spine_2_middle_back_pt"));
HAnimHumanoid43.setSites(&HAnimSite1923);

HAnimSite& HAnimSite1924 =  HAnimSite();
HAnimSite1924.setUSE(CString("hanim_substernale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1924);

HAnimSite& HAnimSite1925 =  HAnimSite();
HAnimSite1925.setUSE(CString("hanim_l_thelion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1925);

HAnimSite& HAnimSite1926 =  HAnimSite();
HAnimSite1926.setUSE(CString("hanim_r_thelion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1926);

HAnimSite& HAnimSite1927 =  HAnimSite();
HAnimSite1927.setUSE(CString("hanim_l_chest_midsagittal_plane_pt"));
HAnimHumanoid43.setSites(&HAnimSite1927);

HAnimSite& HAnimSite1928 =  HAnimSite();
HAnimSite1928.setUSE(CString("hanim_mesosternale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1928);

HAnimSite& HAnimSite1929 =  HAnimSite();
HAnimSite1929.setUSE(CString("hanim_r_chest_midsagittal_plane_pt"));
HAnimHumanoid43.setSites(&HAnimSite1929);

HAnimSite& HAnimSite1930 =  HAnimSite();
HAnimSite1930.setUSE(CString("hanim_rear_center_midsagittal_plane_pt"));
HAnimHumanoid43.setSites(&HAnimSite1930);

HAnimSite& HAnimSite1931 =  HAnimSite();
HAnimSite1931.setUSE(CString("hanim_spine_1_middle_back_pt"));
HAnimHumanoid43.setSites(&HAnimSite1931);

HAnimSite& HAnimSite1932 =  HAnimSite();
HAnimSite1932.setUSE(CString("hanim_cervicale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1932);

HAnimSite& HAnimSite1933 =  HAnimSite();
HAnimSite1933.setUSE(CString("hanim_suprasternale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1933);

HAnimSite& HAnimSite1934 =  HAnimSite();
HAnimSite1934.setUSE(CString("hanim_l_neck_base_pt"));
HAnimHumanoid43.setSites(&HAnimSite1934);

HAnimSite& HAnimSite1935 =  HAnimSite();
HAnimSite1935.setUSE(CString("hanim_r_neck_base_pt"));
HAnimHumanoid43.setSites(&HAnimSite1935);

HAnimSite& HAnimSite1936 =  HAnimSite();
HAnimSite1936.setUSE(CString("hanim_l_acromion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1936);

HAnimSite& HAnimSite1937 =  HAnimSite();
HAnimSite1937.setUSE(CString("hanim_l_axilla_distal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1937);

HAnimSite& HAnimSite1938 =  HAnimSite();
HAnimSite1938.setUSE(CString("hanim_l_axilla_posterior_folds_pt"));
HAnimHumanoid43.setSites(&HAnimSite1938);

HAnimSite& HAnimSite1939 =  HAnimSite();
HAnimSite1939.setUSE(CString("hanim_l_axilla_proximal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1939);

HAnimSite& HAnimSite1940 =  HAnimSite();
HAnimSite1940.setUSE(CString("hanim_l_clavicale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1940);

HAnimSite& HAnimSite1941 =  HAnimSite();
HAnimSite1941.setUSE(CString("hanim_r_acromion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1941);

HAnimSite& HAnimSite1942 =  HAnimSite();
HAnimSite1942.setUSE(CString("hanim_r_axilla_distal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1942);

HAnimSite& HAnimSite1943 =  HAnimSite();
HAnimSite1943.setUSE(CString("hanim_r_axilla_posterior_folds_pt"));
HAnimHumanoid43.setSites(&HAnimSite1943);

HAnimSite& HAnimSite1944 =  HAnimSite();
HAnimSite1944.setUSE(CString("hanim_r_axilla_proximal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1944);

HAnimSite& HAnimSite1945 =  HAnimSite();
HAnimSite1945.setUSE(CString("hanim_r_clavicale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1945);

HAnimSite& HAnimSite1946 =  HAnimSite();
HAnimSite1946.setUSE(CString("hanim_adams_apple_pt"));
HAnimHumanoid43.setSites(&HAnimSite1946);

HAnimSite& HAnimSite1947 =  HAnimSite();
HAnimSite1947.setUSE(CString("hanim_glabella_pt"));
HAnimHumanoid43.setSites(&HAnimSite1947);

HAnimSite& HAnimSite1948 =  HAnimSite();
HAnimSite1948.setUSE(CString("hanim_l_ectocanthus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1948);

HAnimSite& HAnimSite1949 =  HAnimSite();
HAnimSite1949.setUSE(CString("hanim_l_infraorbitale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1949);

HAnimSite& HAnimSite1950 =  HAnimSite();
HAnimSite1950.setUSE(CString("hanim_l_tragion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1950);

HAnimSite& HAnimSite1951 =  HAnimSite();
HAnimSite1951.setUSE(CString("hanim_nuchale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1951);

HAnimSite& HAnimSite1952 =  HAnimSite();
HAnimSite1952.setUSE(CString("hanim_opisthocranion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1952);

HAnimSite& HAnimSite1953 =  HAnimSite();
HAnimSite1953.setUSE(CString("hanim_r_ectocanthus_pt"));
HAnimHumanoid43.setSites(&HAnimSite1953);

HAnimSite& HAnimSite1954 =  HAnimSite();
HAnimSite1954.setUSE(CString("hanim_r_infraorbitale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1954);

HAnimSite& HAnimSite1955 =  HAnimSite();
HAnimSite1955.setUSE(CString("hanim_r_tragion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1955);

HAnimSite& HAnimSite1956 =  HAnimSite();
HAnimSite1956.setUSE(CString("hanim_sellion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1956);

HAnimSite& HAnimSite1957 =  HAnimSite();
HAnimSite1957.setUSE(CString("hanim_skull_vertex_pt"));
HAnimHumanoid43.setSites(&HAnimSite1957);

HAnimSite& HAnimSite1958 =  HAnimSite();
HAnimSite1958.setUSE(CString("hanim_l_gonion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1958);

HAnimSite& HAnimSite1959 =  HAnimSite();
HAnimSite1959.setUSE(CString("hanim_menton_pt"));
HAnimHumanoid43.setSites(&HAnimSite1959);

HAnimSite& HAnimSite1960 =  HAnimSite();
HAnimSite1960.setUSE(CString("hanim_r_gonion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1960);

HAnimSite& HAnimSite1961 =  HAnimSite();
HAnimSite1961.setUSE(CString("hanim_supramenton_pt"));
HAnimHumanoid43.setSites(&HAnimSite1961);

HAnimSite& HAnimSite1962 =  HAnimSite();
HAnimSite1962.setUSE(CString("hanim_l_bideltoid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1962);

HAnimSite& HAnimSite1963 =  HAnimSite();
HAnimSite1963.setUSE(CString("hanim_l_humeral_lateral_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1963);

HAnimSite& HAnimSite1964 =  HAnimSite();
HAnimSite1964.setUSE(CString("hanim_l_humeral_medial_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1964);

HAnimSite& HAnimSite1965 =  HAnimSite();
HAnimSite1965.setUSE(CString("hanim_l_olecranon_pt"));
HAnimHumanoid43.setSites(&HAnimSite1965);

HAnimSite& HAnimSite1966 =  HAnimSite();
HAnimSite1966.setUSE(CString("hanim_l_radial_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1966);

HAnimSite& HAnimSite1967 =  HAnimSite();
HAnimSite1967.setUSE(CString("hanim_l_radiale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1967);

HAnimSite& HAnimSite1968 =  HAnimSite();
HAnimSite1968.setUSE(CString("hanim_l_ulnar_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1968);

HAnimSite& HAnimSite1969 =  HAnimSite();
HAnimSite1969.setUSE(CString("hanim_l_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1969);

HAnimSite& HAnimSite1970 =  HAnimSite();
HAnimSite1970.setUSE(CString("hanim_l_metacarpal_phalanx_2_pt"));
HAnimHumanoid43.setSites(&HAnimSite1970);

HAnimSite& HAnimSite1971 =  HAnimSite();
HAnimSite1971.setUSE(CString("hanim_l_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1971);

HAnimSite& HAnimSite1972 =  HAnimSite();
HAnimSite1972.setUSE(CString("hanim_l_dactylion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1972);

HAnimSite& HAnimSite1973 =  HAnimSite();
HAnimSite1973.setUSE(CString("hanim_l_metacarpal_phalanx_3_pt"));
HAnimHumanoid43.setSites(&HAnimSite1973);

HAnimSite& HAnimSite1974 =  HAnimSite();
HAnimSite1974.setUSE(CString("hanim_l_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1974);

HAnimSite& HAnimSite1975 =  HAnimSite();
HAnimSite1975.setUSE(CString("hanim_l_metacarpal_phalanx_5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1975);

HAnimSite& HAnimSite1976 =  HAnimSite();
HAnimSite1976.setUSE(CString("hanim_l_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1976);

HAnimSite& HAnimSite1977 =  HAnimSite();
HAnimSite1977.setUSE(CString("hanim_l_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1977);

HAnimSite& HAnimSite1978 =  HAnimSite();
HAnimSite1978.setUSE(CString("hanim_r_bideltoid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1978);

HAnimSite& HAnimSite1979 =  HAnimSite();
HAnimSite1979.setUSE(CString("hanim_r_humeral_lateral_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1979);

HAnimSite& HAnimSite1980 =  HAnimSite();
HAnimSite1980.setUSE(CString("hanim_r_humeral_medial_epicondyles_pt"));
HAnimHumanoid43.setSites(&HAnimSite1980);

HAnimSite& HAnimSite1981 =  HAnimSite();
HAnimSite1981.setUSE(CString("hanim_r_olecranon_pt"));
HAnimHumanoid43.setSites(&HAnimSite1981);

HAnimSite& HAnimSite1982 =  HAnimSite();
HAnimSite1982.setUSE(CString("hanim_r_radial_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1982);

HAnimSite& HAnimSite1983 =  HAnimSite();
HAnimSite1983.setUSE(CString("hanim_r_radiale_pt"));
HAnimHumanoid43.setSites(&HAnimSite1983);

HAnimSite& HAnimSite1984 =  HAnimSite();
HAnimSite1984.setUSE(CString("hanim_r_ulnar_styloid_pt"));
HAnimHumanoid43.setSites(&HAnimSite1984);

HAnimSite& HAnimSite1985 =  HAnimSite();
HAnimSite1985.setUSE(CString("hanim_r_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1985);

HAnimSite& HAnimSite1986 =  HAnimSite();
HAnimSite1986.setUSE(CString("hanim_r_metacarpal_phalanx_2_pt"));
HAnimHumanoid43.setSites(&HAnimSite1986);

HAnimSite& HAnimSite1987 =  HAnimSite();
HAnimSite1987.setUSE(CString("hanim_r_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1987);

HAnimSite& HAnimSite1988 =  HAnimSite();
HAnimSite1988.setUSE(CString("hanim_r_dactylion_pt"));
HAnimHumanoid43.setSites(&HAnimSite1988);

HAnimSite& HAnimSite1989 =  HAnimSite();
HAnimSite1989.setUSE(CString("hanim_r_metacarpal_phalanx_3_pt"));
HAnimHumanoid43.setSites(&HAnimSite1989);

HAnimSite& HAnimSite1990 =  HAnimSite();
HAnimSite1990.setUSE(CString("hanim_r_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1990);

HAnimSite& HAnimSite1991 =  HAnimSite();
HAnimSite1991.setUSE(CString("hanim_r_metacarpal_phalanx_5_pt"));
HAnimHumanoid43.setSites(&HAnimSite1991);

HAnimSite& HAnimSite1992 =  HAnimSite();
HAnimSite1992.setUSE(CString("hanim_r_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1992);

HAnimSite& HAnimSite1993 =  HAnimSite();
HAnimSite1993.setUSE(CString("hanim_r_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1993);

Scene11.addChild(&HAnimHumanoid43);

X3D0.setScene(&Scene11);

}
