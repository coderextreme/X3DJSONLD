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
meta3.setContent(CString("Humanoid1.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("identifier"));
meta4.setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid1.x3d"));
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
meta7.setContent(CString("14 Jan 2023"));
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
Transform19.setTranslation(new float[]{0,2.1,0});
Shape& Shape20 =  Shape();
Shape20.setDEF(CString("HAnimJointShape"));
Sphere& Sphere21 =  Sphere();
Sphere21.setRadius(0.02);
Shape20.setGeometry(&Sphere21);

Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDEF(CString("HAnimJointMaterial"));
Material23.setDiffuseColor(new float[]{0,0,0});
Appearance22.addChild(&Material23);

Shape20.addChild(&Appearance22);

Transform19.addChild(&Shape20);

Transform18.addChild(&Transform19);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{0,2.05,0});
Shape& Shape25 =  Shape();
Shape25.setDEF(CString("HAnimSegmentLine"));
LineSet& LineSet26 =  LineSet();
LineSet26.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA27 =  ColorRGBA();
ColorRGBA27.setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA27.setColor(new float[]{1,1,0,0,1,1,0,0}, 8);
LineSet26.addChild(&ColorRGBA27);

Coordinate& Coordinate28 =  Coordinate();
Coordinate28.setPoint(new float[]{-0.05,0,0,0.05,0,0}, 6);
LineSet26.setCoord(Coordinate28);

Shape25.setGeometry(&LineSet26);

Transform24.addChild(&Shape25);

Transform18.addChild(&Transform24);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{0,2.1,0});
Shape& Shape30 =  Shape();
Shape30.setDEF(CString("HAnimSiteShape"));
IndexedFaceSet& IndexedFaceSet31 =  IndexedFaceSet();
IndexedFaceSet31.setDEF(CString("DiamondIFS"));
IndexedFaceSet31.setCreaseAngle(0.5);
IndexedFaceSet31.setSolid(False);
IndexedFaceSet31.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
ColorRGBA& ColorRGBA32 =  ColorRGBA();
ColorRGBA32.setDEF(CString("HAnimSiteColorRGBA"));
ColorRGBA32.setColor(new float[]{1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1}, 24);
IndexedFaceSet31.addChild(&ColorRGBA32);

Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setPoint(new float[]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet31.setCoord(&Coordinate33);

Shape30.setGeometry(&IndexedFaceSet31);

Appearance& Appearance34 =  Appearance();
Material& Material35 =  Material();
Material35.setDiffuseColor(new float[]{1,1,1});
Material35.setTransparency(1);
Appearance34.addChild(&Material35);

Shape30.addChild(&Appearance34);

Transform29.addChild(&Shape30);

Transform18.addChild(&Transform29);

Group17.addChild(&Transform18);

Scene11.addChild(&Group17);

NavigationInfo& NavigationInfo36 =  NavigationInfo();
NavigationInfo36.setSpeed(1.5);
Scene11.addChild(&NavigationInfo36);

Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setPosition(new float[]{0,1,3});
Viewpoint37.setCenterOfRotation(new float[]{0,1,0});
Viewpoint37.setDescription(CString("default"));
Scene11.addChild(&Viewpoint37);

HAnimHumanoid& HAnimHumanoid38 =  HAnimHumanoid();
HAnimHumanoid38.X3DNode::setName(CString("HAnim"));
HAnimHumanoid38.setDEF(CString("hanim_HAnim"));
HAnimHumanoid38.setInfo(new CString[]{CString("humanoidVersion=2.0")}, 1);
HAnimHumanoid38.setVersion(CString("2.0"));
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
Shape& Shape39 =  Shape();
Shape39.setDEF(CString("SkinShape"));
IndexedFaceSet& IndexedFaceSet40 =  IndexedFaceSet();
IndexedFaceSet40.setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
IndexedFaceSet40.setCreaseAngle(3.1);
Coordinate& Coordinate41 =  Coordinate();
Coordinate41.setDEF(CString("TheSkinCoord"));
Coordinate41.setPoint(new float[]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
IndexedFaceSet40.setCoord(&Coordinate41);

CColor& Color42 =  CColor();
Color42.setColor(new float[]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1}, 2079);
IndexedFaceSet40.setColor(&Color42);

Shape39.setGeometry(&IndexedFaceSet40);

Appearance& Appearance43 =  Appearance();
Appearance43.setDEF(CString("SkinAppearance"));
ImageTexture& ImageTexture44 =  ImageTexture();
ImageTexture44.setDEF(CString("zBlueSpiralBkg2"));
ImageTexture44.setDescription(CString("Blue Spiral Pattern"));
ImageTexture44.setUrl(new CString[]{CString("../data/zBlueSpiralBkg2.gif"), CString("zBlueSpiralBkg2.gif"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 3);
Appearance43.addChild(&ImageTexture44);

Material& Material45 =  Material();
Material45.setDEF(CString("SkinMaterial"));
Material45.setAmbientIntensity(0.6);
Material45.setDiffuseColor(new float[]{1,1,1});
Material45.setShininess(0.6);
Material45.setTransparency(1);
Appearance43.addChild(&Material45);

Shape39.addChild(&Appearance43);

HAnimHumanoid38.setSkin(&Shape39);

Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setUSE(CString("TheSkinCoord"));
HAnimHumanoid38.setSkinCoord(&Coordinate46);

HAnimJoint& HAnimJoint47 =  HAnimJoint();
HAnimJoint47.X3DNode::setName(CString("humanoid_root"));
HAnimJoint47.setDEF(CString("hanim_humanoid_root"));
HAnimJoint47.setCenter(new float[]{0,0.824,0.0277});
HAnimJoint47.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint47.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment48 =  HAnimSegment();
HAnimSegment48.X3DNode::setName(CString("sacrum"));
HAnimSegment48.setDEF(CString("hanim_sacrum"));
Transform& Transform49 =  Transform();
Transform49.setTranslation(new float[]{0,0.824,0.0277});
Transform& Transform50 =  Transform();
//Empty Transform
Shape& Shape51 =  Shape();
Shape51.setUSE(CString("HAnimJointShape"));
Transform50.addChild(&Shape51);

Transform49.addChild(&Transform50);

HAnimSegment48.addChild(&Transform49);

Shape& Shape52 =  Shape();
LineSet& LineSet53 =  LineSet();
LineSet53.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate54 =  Coordinate();
Coordinate54.setPoint(new float[]{0,0.824,0.0277,0,0.9149,0.0016}, 6);
LineSet53.setCoord(Coordinate54);

//from humanoid_root to sacroiliac vertices 2
ColorRGBA& ColorRGBA55 =  ColorRGBA();
ColorRGBA55.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet53.addChild(&ColorRGBA55);

Shape52.setGeometry(&LineSet53);

HAnimSegment48.addChild(&Shape52);

Shape& Shape56 =  Shape();
LineSet& LineSet57 =  LineSet();
LineSet57.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate58 =  Coordinate();
Coordinate58.setPoint(new float[]{0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet57.setCoord(Coordinate58);

//from humanoid_root to vl5 vertices 2
ColorRGBA& ColorRGBA59 =  ColorRGBA();
ColorRGBA59.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet57.addChild(&ColorRGBA59);

Shape56.setGeometry(&LineSet57);

HAnimSegment48.addChild(&Shape56);

HAnimJoint47.addChildren(&HAnimSegment48);

HAnimJoint& HAnimJoint60 =  HAnimJoint();
HAnimJoint60.X3DNode::setName(CString("sacroiliac"));
HAnimJoint60.setDEF(CString("hanim_sacroiliac"));
HAnimJoint60.setCenter(new float[]{0,0.9149,0.0016});
HAnimJoint60.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint60.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment61 =  HAnimSegment();
HAnimSegment61.X3DNode::setName(CString("pelvis"));
HAnimSegment61.setDEF(CString("hanim_pelvis"));
Transform& Transform62 =  Transform();
Transform62.setTranslation(new float[]{0,0.9149,0.0016});
Transform& Transform63 =  Transform();
//Empty Transform
Shape& Shape64 =  Shape();
Shape64.setUSE(CString("HAnimJointShape"));
Transform63.addChild(&Shape64);

Transform62.addChild(&Transform63);

HAnimSegment61.addChild(&Transform62);

Shape& Shape65 =  Shape();
LineSet& LineSet66 =  LineSet();
LineSet66.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate67 =  Coordinate();
Coordinate67.setPoint(new float[]{0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet66.setCoord(Coordinate67);

//from sacroiliac to l_hip vertices 2
ColorRGBA& ColorRGBA68 =  ColorRGBA();
ColorRGBA68.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet66.addChild(&ColorRGBA68);

Shape65.setGeometry(&LineSet66);

HAnimSegment61.addChild(&Shape65);

HAnimSite& HAnimSite69 =  HAnimSite();
HAnimSite69.X3DNode::setName(CString("buttocks_standing_wall_contact_point"));
HAnimSite69.setDEF(CString("hanim_buttocks_standing_wall_contact_point"));
TouchSensor& TouchSensor70 =  TouchSensor();
TouchSensor70.setDescription(CString("HAnimSite 93 buttocks_standing_wall_contact_point"));
HAnimSite69.addChild(&TouchSensor70);

Shape& Shape71 =  Shape();
Shape71.setUSE(CString("HAnimSiteShape"));
HAnimSite69.addChild(&Shape71);

Billboard& Billboard72 =  Billboard();
Shape& Shape73 =  Shape();
Text& Text74 =  Text();
Text74.setString(new CString[]{CString("93")}, 1);
CFontStyle& FontStyle75 =  CFontStyle();
FontStyle75.setSize(0.035);
Text74.setFontStyle(&FontStyle75);

Shape73.setGeometry(&Text74);

Billboard72.addChild(&Shape73);

HAnimSite69.addChild(Billboard72);

HAnimSegment61.addChild(&HAnimSite69);

HAnimSite& HAnimSite76 =  HAnimSite();
HAnimSite76.X3DNode::setName(CString("crotch"));
HAnimSite76.setDEF(CString("hanim_crotch"));
HAnimSite76.setTranslation(new float[]{0.0034,0.8266,0.0257});
TouchSensor& TouchSensor77 =  TouchSensor();
TouchSensor77.setDescription(CString("HAnimSite 38 crotch"));
HAnimSite76.addChild(&TouchSensor77);

Shape& Shape78 =  Shape();
Shape78.setUSE(CString("HAnimSiteShape"));
HAnimSite76.addChild(&Shape78);

Billboard& Billboard79 =  Billboard();
Shape& Shape80 =  Shape();
Text& Text81 =  Text();
Text81.setString(new CString[]{CString("38")}, 1);
CFontStyle& FontStyle82 =  CFontStyle();
FontStyle82.setSize(0.035);
Text81.setFontStyle(&FontStyle82);

Shape80.setGeometry(&Text81);

Billboard79.addChild(&Shape80);

HAnimSite76.addChild(Billboard79);

HAnimSegment61.addChild(&HAnimSite76);

HAnimSite& HAnimSite83 =  HAnimSite();
HAnimSite83.X3DNode::setName(CString("l_asis"));
HAnimSite83.setDEF(CString("hanim_l_asis"));
HAnimSite83.setTranslation(new float[]{0.0925,0.9983,0.1052});
TouchSensor& TouchSensor84 =  TouchSensor();
TouchSensor84.setDescription(CString("HAnimSite 32 l_asis"));
HAnimSite83.addChild(&TouchSensor84);

Shape& Shape85 =  Shape();
Shape85.setUSE(CString("HAnimSiteShape"));
HAnimSite83.addChild(&Shape85);

Billboard& Billboard86 =  Billboard();
Shape& Shape87 =  Shape();
Text& Text88 =  Text();
Text88.setString(new CString[]{CString("32")}, 1);
CFontStyle& FontStyle89 =  CFontStyle();
FontStyle89.setSize(0.035);
Text88.setFontStyle(&FontStyle89);

Shape87.setGeometry(&Text88);

Billboard86.addChild(&Shape87);

HAnimSite83.addChild(Billboard86);

HAnimSegment61.addChild(&HAnimSite83);

HAnimSite& HAnimSite90 =  HAnimSite();
HAnimSite90.X3DNode::setName(CString("l_iliocristale"));
HAnimSite90.setDEF(CString("hanim_l_iliocristale"));
HAnimSite90.setTranslation(new float[]{0.1612,1.0537,0.0008});
TouchSensor& TouchSensor91 =  TouchSensor();
TouchSensor91.setDescription(CString("HAnimSite 33 l_iliocristale"));
HAnimSite90.addChild(&TouchSensor91);

Shape& Shape92 =  Shape();
Shape92.setUSE(CString("HAnimSiteShape"));
HAnimSite90.addChild(&Shape92);

Billboard& Billboard93 =  Billboard();
Shape& Shape94 =  Shape();
Text& Text95 =  Text();
Text95.setString(new CString[]{CString("33")}, 1);
CFontStyle& FontStyle96 =  CFontStyle();
FontStyle96.setSize(0.035);
Text95.setFontStyle(&FontStyle96);

Shape94.setGeometry(&Text95);

Billboard93.addChild(&Shape94);

HAnimSite90.addChild(Billboard93);

HAnimSegment61.addChild(&HAnimSite90);

HAnimSite& HAnimSite97 =  HAnimSite();
HAnimSite97.X3DNode::setName(CString("l_psis"));
HAnimSite97.setDEF(CString("hanim_l_psis"));
HAnimSite97.setTranslation(new float[]{0.0774,1.019,-0.1151});
TouchSensor& TouchSensor98 =  TouchSensor();
TouchSensor98.setDescription(CString("HAnimSite 34 l_psis"));
HAnimSite97.addChild(&TouchSensor98);

Shape& Shape99 =  Shape();
Shape99.setUSE(CString("HAnimSiteShape"));
HAnimSite97.addChild(&Shape99);

Billboard& Billboard100 =  Billboard();
Shape& Shape101 =  Shape();
Text& Text102 =  Text();
Text102.setString(new CString[]{CString("34")}, 1);
CFontStyle& FontStyle103 =  CFontStyle();
FontStyle103.setSize(0.035);
Text102.setFontStyle(&FontStyle103);

Shape101.setGeometry(&Text102);

Billboard100.addChild(&Shape101);

HAnimSite97.addChild(Billboard100);

HAnimSegment61.addChild(&HAnimSite97);

HAnimSite& HAnimSite104 =  HAnimSite();
HAnimSite104.X3DNode::setName(CString("l_trochanterion"));
HAnimSite104.setDEF(CString("hanim_l_trochanterion"));
HAnimSite104.setTranslation(new float[]{0.1677,0.8336,0.0303});
TouchSensor& TouchSensor105 =  TouchSensor();
TouchSensor105.setDescription(CString("HAnimSite 42 l_trochanterion"));
HAnimSite104.addChild(&TouchSensor105);

Shape& Shape106 =  Shape();
Shape106.setUSE(CString("HAnimSiteShape"));
HAnimSite104.addChild(&Shape106);

Billboard& Billboard107 =  Billboard();
Shape& Shape108 =  Shape();
Text& Text109 =  Text();
Text109.setString(new CString[]{CString("42")}, 1);
CFontStyle& FontStyle110 =  CFontStyle();
FontStyle110.setSize(0.035);
Text109.setFontStyle(&FontStyle110);

Shape108.setGeometry(&Text109);

Billboard107.addChild(&Shape108);

HAnimSite104.addChild(Billboard107);

HAnimSegment61.addChild(&HAnimSite104);

HAnimSite& HAnimSite111 =  HAnimSite();
HAnimSite111.X3DNode::setName(CString("r_asis"));
HAnimSite111.setDEF(CString("hanim_r_asis"));
HAnimSite111.setTranslation(new float[]{-0.0887,1.0021,0.1112});
TouchSensor& TouchSensor112 =  TouchSensor();
TouchSensor112.setDescription(CString("HAnimSite 35 r_asis"));
HAnimSite111.addChild(&TouchSensor112);

Shape& Shape113 =  Shape();
Shape113.setUSE(CString("HAnimSiteShape"));
HAnimSite111.addChild(&Shape113);

Billboard& Billboard114 =  Billboard();
Shape& Shape115 =  Shape();
Text& Text116 =  Text();
Text116.setString(new CString[]{CString("35")}, 1);
CFontStyle& FontStyle117 =  CFontStyle();
FontStyle117.setSize(0.035);
Text116.setFontStyle(&FontStyle117);

Shape115.setGeometry(&Text116);

Billboard114.addChild(&Shape115);

HAnimSite111.addChild(Billboard114);

HAnimSegment61.addChild(&HAnimSite111);

HAnimSite& HAnimSite118 =  HAnimSite();
HAnimSite118.X3DNode::setName(CString("r_iliocristale"));
HAnimSite118.setDEF(CString("hanim_r_iliocristale"));
HAnimSite118.setTranslation(new float[]{-0.1525,1.0628,0.0035});
TouchSensor& TouchSensor119 =  TouchSensor();
TouchSensor119.setDescription(CString("HAnimSite 36 r_iliocristale"));
HAnimSite118.addChild(&TouchSensor119);

Shape& Shape120 =  Shape();
Shape120.setUSE(CString("HAnimSiteShape"));
HAnimSite118.addChild(&Shape120);

Billboard& Billboard121 =  Billboard();
Shape& Shape122 =  Shape();
Text& Text123 =  Text();
Text123.setString(new CString[]{CString("36")}, 1);
CFontStyle& FontStyle124 =  CFontStyle();
FontStyle124.setSize(0.035);
Text123.setFontStyle(&FontStyle124);

Shape122.setGeometry(&Text123);

Billboard121.addChild(&Shape122);

HAnimSite118.addChild(Billboard121);

HAnimSegment61.addChild(&HAnimSite118);

HAnimSite& HAnimSite125 =  HAnimSite();
HAnimSite125.X3DNode::setName(CString("r_psis"));
HAnimSite125.setDEF(CString("hanim_r_psis"));
HAnimSite125.setTranslation(new float[]{-0.0716,1.019,-0.1138});
TouchSensor& TouchSensor126 =  TouchSensor();
TouchSensor126.setDescription(CString("HAnimSite 37 r_psis"));
HAnimSite125.addChild(&TouchSensor126);

Shape& Shape127 =  Shape();
Shape127.setUSE(CString("HAnimSiteShape"));
HAnimSite125.addChild(&Shape127);

Billboard& Billboard128 =  Billboard();
Shape& Shape129 =  Shape();
Text& Text130 =  Text();
Text130.setString(new CString[]{CString("37")}, 1);
CFontStyle& FontStyle131 =  CFontStyle();
FontStyle131.setSize(0.035);
Text130.setFontStyle(&FontStyle131);

Shape129.setGeometry(&Text130);

Billboard128.addChild(&Shape129);

HAnimSite125.addChild(Billboard128);

HAnimSegment61.addChild(&HAnimSite125);

HAnimSite& HAnimSite132 =  HAnimSite();
HAnimSite132.X3DNode::setName(CString("r_trochanterion"));
HAnimSite132.setDEF(CString("hanim_r_trochanterion"));
HAnimSite132.setTranslation(new float[]{-0.1689,0.8419,0.0352});
TouchSensor& TouchSensor133 =  TouchSensor();
TouchSensor133.setDescription(CString("HAnimSite 46 r_trochanterion"));
HAnimSite132.addChild(&TouchSensor133);

Shape& Shape134 =  Shape();
Shape134.setUSE(CString("HAnimSiteShape"));
HAnimSite132.addChild(&Shape134);

Billboard& Billboard135 =  Billboard();
Shape& Shape136 =  Shape();
Text& Text137 =  Text();
Text137.setString(new CString[]{CString("46")}, 1);
CFontStyle& FontStyle138 =  CFontStyle();
FontStyle138.setSize(0.035);
Text137.setFontStyle(&FontStyle138);

Shape136.setGeometry(&Text137);

Billboard135.addChild(&Shape136);

HAnimSite132.addChild(Billboard135);

HAnimSegment61.addChild(&HAnimSite132);

Shape& Shape139 =  Shape();
LineSet& LineSet140 =  LineSet();
LineSet140.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate141 =  Coordinate();
Coordinate141.setPoint(new float[]{0,0.9149,0.0016,-0.095,0.9171,0.0029}, 6);
LineSet140.setCoord(Coordinate141);

//from sacroiliac to r_hip vertices 2
ColorRGBA& ColorRGBA142 =  ColorRGBA();
ColorRGBA142.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet140.addChild(&ColorRGBA142);

Shape139.setGeometry(&LineSet140);

HAnimSegment61.addChild(&Shape139);

HAnimJoint60.addChildren(&HAnimSegment61);

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
Transform145.setTranslation(new float[]{0.0961,0.9124,-0.0001});
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
HAnimSite152.X3DNode::setName(CString("l_femoral_lateral_epicondyles"));
HAnimSite152.setDEF(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimSite152.setTranslation(new float[]{0.1598,0.4967,0.0297});
TouchSensor& TouchSensor153 =  TouchSensor();
TouchSensor153.setDescription(CString("HAnimSite 40 l_femoral_lateral_epicondyles"));
HAnimSite152.addChild(&TouchSensor153);

Shape& Shape154 =  Shape();
Shape154.setUSE(CString("HAnimSiteShape"));
HAnimSite152.addChild(&Shape154);

Billboard& Billboard155 =  Billboard();
Shape& Shape156 =  Shape();
Text& Text157 =  Text();
Text157.setString(new CString[]{CString("40")}, 1);
CFontStyle& FontStyle158 =  CFontStyle();
FontStyle158.setSize(0.035);
Text157.setFontStyle(&FontStyle158);

Shape156.setGeometry(&Text157);

Billboard155.addChild(&Shape156);

HAnimSite152.addChild(Billboard155);

HAnimSegment144.addChild(&HAnimSite152);

HAnimSite& HAnimSite159 =  HAnimSite();
HAnimSite159.X3DNode::setName(CString("l_femoral_medial_epicondyles"));
HAnimSite159.setDEF(CString("hanim_l_femoral_medial_epicondyles"));
HAnimSite159.setTranslation(new float[]{0.0398,0.4946,0.0303});
TouchSensor& TouchSensor160 =  TouchSensor();
TouchSensor160.setDescription(CString("HAnimSite 39 l_femoral_medial_epicondyles"));
HAnimSite159.addChild(&TouchSensor160);

Shape& Shape161 =  Shape();
Shape161.setUSE(CString("HAnimSiteShape"));
HAnimSite159.addChild(&Shape161);

Billboard& Billboard162 =  Billboard();
Shape& Shape163 =  Shape();
Text& Text164 =  Text();
Text164.setString(new CString[]{CString("39")}, 1);
CFontStyle& FontStyle165 =  CFontStyle();
FontStyle165.setSize(0.035);
Text164.setFontStyle(&FontStyle165);

Shape163.setGeometry(&Text164);

Billboard162.addChild(&Shape163);

HAnimSite159.addChild(Billboard162);

HAnimSegment144.addChild(&HAnimSite159);

HAnimSite& HAnimSite166 =  HAnimSite();
HAnimSite166.X3DNode::setName(CString("l_knee_crease"));
HAnimSite166.setDEF(CString("hanim_l_knee_crease"));
HAnimSite166.setTranslation(new float[]{0.0993,0.4881,-0.0309});
TouchSensor& TouchSensor167 =  TouchSensor();
TouchSensor167.setDescription(CString("HAnimSite 90 l_knee_crease"));
HAnimSite166.addChild(&TouchSensor167);

Shape& Shape168 =  Shape();
Shape168.setUSE(CString("HAnimSiteShape"));
HAnimSite166.addChild(&Shape168);

Billboard& Billboard169 =  Billboard();
Shape& Shape170 =  Shape();
Text& Text171 =  Text();
Text171.setString(new CString[]{CString("90")}, 1);
CFontStyle& FontStyle172 =  CFontStyle();
FontStyle172.setSize(0.035);
Text171.setFontStyle(&FontStyle172);

Shape170.setGeometry(&Text171);

Billboard169.addChild(&Shape170);

HAnimSite166.addChild(Billboard169);

HAnimSegment144.addChild(&HAnimSite166);

HAnimSite& HAnimSite173 =  HAnimSite();
HAnimSite173.X3DNode::setName(CString("l_suprapatella"));
HAnimSite173.setDEF(CString("hanim_l_suprapatella"));
TouchSensor& TouchSensor174 =  TouchSensor();
TouchSensor174.setDescription(CString("HAnimSite 41 l_suprapatella"));
HAnimSite173.addChild(&TouchSensor174);

Shape& Shape175 =  Shape();
Shape175.setUSE(CString("HAnimSiteShape"));
HAnimSite173.addChild(&Shape175);

Billboard& Billboard176 =  Billboard();
Shape& Shape177 =  Shape();
Text& Text178 =  Text();
Text178.setString(new CString[]{CString("41")}, 1);
CFontStyle& FontStyle179 =  CFontStyle();
FontStyle179.setSize(0.035);
Text178.setFontStyle(&FontStyle179);

Shape177.setGeometry(&Text178);

Billboard176.addChild(&Shape177);

HAnimSite173.addChild(Billboard176);

HAnimSegment144.addChild(&HAnimSite173);

HAnimJoint143.addChildren(&HAnimSegment144);

HAnimJoint& HAnimJoint180 =  HAnimJoint();
HAnimJoint180.X3DNode::setName(CString("l_knee"));
HAnimJoint180.setDEF(CString("hanim_l_knee"));
HAnimJoint180.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimJoint180.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint180.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment181 =  HAnimSegment();
HAnimSegment181.X3DNode::setName(CString("l_calf"));
HAnimSegment181.setDEF(CString("hanim_l_calf"));
Transform& Transform182 =  Transform();
Transform182.setTranslation(new float[]{0.104,0.4867,0.0308});
Transform& Transform183 =  Transform();
//Empty Transform
Shape& Shape184 =  Shape();
Shape184.setUSE(CString("HAnimJointShape"));
Transform183.addChild(&Shape184);

Transform182.addChild(&Transform183);

HAnimSegment181.addChild(&Transform182);

Shape& Shape185 =  Shape();
LineSet& LineSet186 =  LineSet();
LineSet186.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate187 =  Coordinate();
Coordinate187.setPoint(new float[]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet186.setCoord(Coordinate187);

//from l_knee to l_talocrural vertices 2
ColorRGBA& ColorRGBA188 =  ColorRGBA();
ColorRGBA188.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet186.addChild(&ColorRGBA188);

Shape185.setGeometry(&LineSet186);

HAnimSegment181.addChild(&Shape185);

HAnimSite& HAnimSite189 =  HAnimSite();
HAnimSite189.X3DNode::setName(CString("l_lateral_malleolus"));
HAnimSite189.setDEF(CString("hanim_l_lateral_malleolus"));
HAnimSite189.setTranslation(new float[]{0.1308,0.0597,-0.1032});
TouchSensor& TouchSensor190 =  TouchSensor();
TouchSensor190.setDescription(CString("HAnimSite 49 l_lateral_malleolus"));
HAnimSite189.addChild(&TouchSensor190);

Shape& Shape191 =  Shape();
Shape191.setUSE(CString("HAnimSiteShape"));
HAnimSite189.addChild(&Shape191);

Billboard& Billboard192 =  Billboard();
Shape& Shape193 =  Shape();
Text& Text194 =  Text();
Text194.setString(new CString[]{CString("49")}, 1);
CFontStyle& FontStyle195 =  CFontStyle();
FontStyle195.setSize(0.035);
Text194.setFontStyle(&FontStyle195);

Shape193.setGeometry(&Text194);

Billboard192.addChild(&Shape193);

HAnimSite189.addChild(Billboard192);

HAnimSegment181.addChild(&HAnimSite189);

HAnimSite& HAnimSite196 =  HAnimSite();
HAnimSite196.X3DNode::setName(CString("l_medial_malleolus"));
HAnimSite196.setDEF(CString("hanim_l_medial_malleolus"));
HAnimSite196.setTranslation(new float[]{0.089,0.0716,-0.0881});
TouchSensor& TouchSensor197 =  TouchSensor();
TouchSensor197.setDescription(CString("HAnimSite 48 l_medial_malleolus"));
HAnimSite196.addChild(&TouchSensor197);

Shape& Shape198 =  Shape();
Shape198.setUSE(CString("HAnimSiteShape"));
HAnimSite196.addChild(&Shape198);

Billboard& Billboard199 =  Billboard();
Shape& Shape200 =  Shape();
Text& Text201 =  Text();
Text201.setString(new CString[]{CString("48")}, 1);
CFontStyle& FontStyle202 =  CFontStyle();
FontStyle202.setSize(0.035);
Text201.setFontStyle(&FontStyle202);

Shape200.setGeometry(&Text201);

Billboard199.addChild(&Shape200);

HAnimSite196.addChild(Billboard199);

HAnimSegment181.addChild(&HAnimSite196);

HAnimSite& HAnimSite203 =  HAnimSite();
HAnimSite203.X3DNode::setName(CString("l_tibiale"));
HAnimSite203.setDEF(CString("hanim_l_tibiale"));
TouchSensor& TouchSensor204 =  TouchSensor();
TouchSensor204.setDescription(CString("HAnimSite 47 l_tibiale"));
HAnimSite203.addChild(&TouchSensor204);

Shape& Shape205 =  Shape();
Shape205.setUSE(CString("HAnimSiteShape"));
HAnimSite203.addChild(&Shape205);

Billboard& Billboard206 =  Billboard();
Shape& Shape207 =  Shape();
Text& Text208 =  Text();
Text208.setString(new CString[]{CString("47")}, 1);
CFontStyle& FontStyle209 =  CFontStyle();
FontStyle209.setSize(0.035);
Text208.setFontStyle(&FontStyle209);

Shape207.setGeometry(&Text208);

Billboard206.addChild(&Shape207);

HAnimSite203.addChild(Billboard206);

HAnimSegment181.addChild(&HAnimSite203);

HAnimJoint180.addChildren(&HAnimSegment181);

HAnimJoint& HAnimJoint210 =  HAnimJoint();
HAnimJoint210.X3DNode::setName(CString("l_talocrural"));
HAnimJoint210.setDEF(CString("hanim_l_talocrural"));
HAnimJoint210.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimJoint210.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint210.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment211 =  HAnimSegment();
HAnimSegment211.X3DNode::setName(CString("l_talus"));
HAnimSegment211.setDEF(CString("hanim_l_talus"));
Transform& Transform212 =  Transform();
Transform212.setScale(new float[]{0.15,0.15,0.15});
Transform212.setTranslation(new float[]{0.08,0.06,-0.025});
Transform212.setRotation(new float[]{1,0,0,-1.57});
//Transform left foot
Transform& Transform213 =  Transform();
//Empty Transform left foot
Shape& Shape214 =  Shape();
Shape214.setUSE(CString("HAnimJointShape"));
Transform213.addChild(&Shape214);

Transform212.addChild(&Transform213);

HAnimSegment211.addChild(&Transform212);

Shape& Shape215 =  Shape();
LineSet& LineSet216 =  LineSet();
LineSet216.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate217 =  Coordinate();
Coordinate217.setPoint(new float[]{0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004}, 6);
LineSet216.setCoord(Coordinate217);

//from l_talocrural to l_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA218 =  ColorRGBA();
ColorRGBA218.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet216.addChild(&ColorRGBA218);

Shape215.setGeometry(&LineSet216);

HAnimSegment211.addChild(&Shape215);

HAnimSite& HAnimSite219 =  HAnimSite();
HAnimSite219.X3DNode::setName(CString("l_calcaneus_posterior"));
HAnimSite219.setDEF(CString("hanim_l_calcaneus_posterior"));
HAnimSite219.setTranslation(new float[]{0.0974,0.0259,-0.1171});
TouchSensor& TouchSensor220 =  TouchSensor();
TouchSensor220.setDescription(CString("HAnimSite 58 l_calcaneus_posterior"));
HAnimSite219.addChild(&TouchSensor220);

Shape& Shape221 =  Shape();
Shape221.setUSE(CString("HAnimSiteShape"));
HAnimSite219.addChild(&Shape221);

Billboard& Billboard222 =  Billboard();
Shape& Shape223 =  Shape();
Text& Text224 =  Text();
Text224.setString(new CString[]{CString("58")}, 1);
CFontStyle& FontStyle225 =  CFontStyle();
FontStyle225.setSize(0.035);
Text224.setFontStyle(&FontStyle225);

Shape223.setGeometry(&Text224);

Billboard222.addChild(&Shape223);

HAnimSite219.addChild(Billboard222);

HAnimSegment211.addChild(&HAnimSite219);

HAnimSite& HAnimSite226 =  HAnimSite();
HAnimSite226.X3DNode::setName(CString("l_sphyrion"));
HAnimSite226.setDEF(CString("hanim_l_sphyrion"));
HAnimSite226.setTranslation(new float[]{0.089,0.0575,-0.0943});
TouchSensor& TouchSensor227 =  TouchSensor();
TouchSensor227.setDescription(CString("HAnimSite 50 l_sphyrion"));
HAnimSite226.addChild(&TouchSensor227);

Shape& Shape228 =  Shape();
Shape228.setUSE(CString("HAnimSiteShape"));
HAnimSite226.addChild(&Shape228);

Billboard& Billboard229 =  Billboard();
Shape& Shape230 =  Shape();
Text& Text231 =  Text();
Text231.setString(new CString[]{CString("50")}, 1);
CFontStyle& FontStyle232 =  CFontStyle();
FontStyle232.setSize(0.035);
Text231.setFontStyle(&FontStyle232);

Shape230.setGeometry(&Text231);

Billboard229.addChild(&Shape230);

HAnimSite226.addChild(Billboard229);

HAnimSegment211.addChild(&HAnimSite226);

HAnimJoint210.addChildren(&HAnimSegment211);

HAnimJoint& HAnimJoint233 =  HAnimJoint();
HAnimJoint233.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint233.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint233.setCenter(new float[]{0.0824,0.0064,-0.004});
HAnimJoint233.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint233.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint210.addChildren(&HAnimJoint233);

HAnimJoint180.addChildren(&HAnimJoint210);

HAnimJoint143.addChildren(&HAnimJoint180);

HAnimJoint60.addChildren(&HAnimJoint143);

HAnimJoint& HAnimJoint234 =  HAnimJoint();
HAnimJoint234.X3DNode::setName(CString("r_hip"));
HAnimJoint234.setDEF(CString("hanim_r_hip"));
HAnimJoint234.setCenter(new float[]{-0.095,0.9171,0.0029});
HAnimJoint234.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint234.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment235 =  HAnimSegment();
HAnimSegment235.X3DNode::setName(CString("r_thigh"));
HAnimSegment235.setDEF(CString("hanim_r_thigh"));
Transform& Transform236 =  Transform();
Transform236.setTranslation(new float[]{-0.095,0.9171,0.0029});
Transform& Transform237 =  Transform();
//Empty Transform
Shape& Shape238 =  Shape();
Shape238.setUSE(CString("HAnimJointShape"));
Transform237.addChild(&Shape238);

Transform236.addChild(&Transform237);

HAnimSegment235.addChild(&Transform236);

Shape& Shape239 =  Shape();
LineSet& LineSet240 =  LineSet();
LineSet240.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate241 =  Coordinate();
Coordinate241.setPoint(new float[]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet240.setCoord(Coordinate241);

//from r_hip to r_knee vertices 2
ColorRGBA& ColorRGBA242 =  ColorRGBA();
ColorRGBA242.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet240.addChild(&ColorRGBA242);

Shape239.setGeometry(&LineSet240);

HAnimSegment235.addChild(&Shape239);

HAnimSite& HAnimSite243 =  HAnimSite();
HAnimSite243.X3DNode::setName(CString("r_femoral_lateral_epicondyles"));
HAnimSite243.setDEF(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimSite243.setTranslation(new float[]{-0.1421,0.4992,0.031});
TouchSensor& TouchSensor244 =  TouchSensor();
TouchSensor244.setDescription(CString("HAnimSite 44 r_femoral_lateral_epicondyles"));
HAnimSite243.addChild(&TouchSensor244);

Shape& Shape245 =  Shape();
Shape245.setUSE(CString("HAnimSiteShape"));
HAnimSite243.addChild(&Shape245);

Billboard& Billboard246 =  Billboard();
Shape& Shape247 =  Shape();
Text& Text248 =  Text();
Text248.setString(new CString[]{CString("44")}, 1);
CFontStyle& FontStyle249 =  CFontStyle();
FontStyle249.setSize(0.035);
Text248.setFontStyle(&FontStyle249);

Shape247.setGeometry(&Text248);

Billboard246.addChild(&Shape247);

HAnimSite243.addChild(Billboard246);

HAnimSegment235.addChild(&HAnimSite243);

HAnimSite& HAnimSite250 =  HAnimSite();
HAnimSite250.X3DNode::setName(CString("r_femoral_medial_epicondyles"));
HAnimSite250.setDEF(CString("hanim_r_femoral_medial_epicondyles"));
HAnimSite250.setTranslation(new float[]{-0.0221,0.5014,0.0289});
TouchSensor& TouchSensor251 =  TouchSensor();
TouchSensor251.setDescription(CString("HAnimSite 43 r_femoral_medial_epicondyles"));
HAnimSite250.addChild(&TouchSensor251);

Shape& Shape252 =  Shape();
Shape252.setUSE(CString("HAnimSiteShape"));
HAnimSite250.addChild(&Shape252);

Billboard& Billboard253 =  Billboard();
Shape& Shape254 =  Shape();
Text& Text255 =  Text();
Text255.setString(new CString[]{CString("43")}, 1);
CFontStyle& FontStyle256 =  CFontStyle();
FontStyle256.setSize(0.035);
Text255.setFontStyle(&FontStyle256);

Shape254.setGeometry(&Text255);

Billboard253.addChild(&Shape254);

HAnimSite250.addChild(Billboard253);

HAnimSegment235.addChild(&HAnimSite250);

HAnimSite& HAnimSite257 =  HAnimSite();
HAnimSite257.X3DNode::setName(CString("r_knee_crease"));
HAnimSite257.setDEF(CString("hanim_r_knee_crease"));
HAnimSite257.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
TouchSensor& TouchSensor258 =  TouchSensor();
TouchSensor258.setDescription(CString("HAnimSite 91 r_knee_crease"));
HAnimSite257.addChild(&TouchSensor258);

Shape& Shape259 =  Shape();
Shape259.setUSE(CString("HAnimSiteShape"));
HAnimSite257.addChild(&Shape259);

Billboard& Billboard260 =  Billboard();
Shape& Shape261 =  Shape();
Text& Text262 =  Text();
Text262.setString(new CString[]{CString("91")}, 1);
CFontStyle& FontStyle263 =  CFontStyle();
FontStyle263.setSize(0.035);
Text262.setFontStyle(&FontStyle263);

Shape261.setGeometry(&Text262);

Billboard260.addChild(&Shape261);

HAnimSite257.addChild(Billboard260);

HAnimSegment235.addChild(&HAnimSite257);

HAnimSite& HAnimSite264 =  HAnimSite();
HAnimSite264.X3DNode::setName(CString("r_suprapatella"));
HAnimSite264.setDEF(CString("hanim_r_suprapatella"));
TouchSensor& TouchSensor265 =  TouchSensor();
TouchSensor265.setDescription(CString("HAnimSite 45 r_suprapatella"));
HAnimSite264.addChild(&TouchSensor265);

Shape& Shape266 =  Shape();
Shape266.setUSE(CString("HAnimSiteShape"));
HAnimSite264.addChild(&Shape266);

Billboard& Billboard267 =  Billboard();
Shape& Shape268 =  Shape();
Text& Text269 =  Text();
Text269.setString(new CString[]{CString("45")}, 1);
CFontStyle& FontStyle270 =  CFontStyle();
FontStyle270.setSize(0.035);
Text269.setFontStyle(&FontStyle270);

Shape268.setGeometry(&Text269);

Billboard267.addChild(&Shape268);

HAnimSite264.addChild(Billboard267);

HAnimSegment235.addChild(&HAnimSite264);

HAnimJoint234.addChildren(&HAnimSegment235);

HAnimJoint& HAnimJoint271 =  HAnimJoint();
HAnimJoint271.X3DNode::setName(CString("r_knee"));
HAnimJoint271.setDEF(CString("hanim_r_knee"));
HAnimJoint271.setCenter(new float[]{-0.0867,0.4913,0.0318});
HAnimJoint271.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint271.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment272 =  HAnimSegment();
HAnimSegment272.X3DNode::setName(CString("r_calf"));
HAnimSegment272.setDEF(CString("hanim_r_calf"));
Transform& Transform273 =  Transform();
Transform273.setTranslation(new float[]{-0.0867,0.4913,0.0318});
Transform& Transform274 =  Transform();
//Empty Transform
Shape& Shape275 =  Shape();
Shape275.setUSE(CString("HAnimJointShape"));
Transform274.addChild(&Shape275);

Transform273.addChild(&Transform274);

HAnimSegment272.addChild(&Transform273);

Shape& Shape276 =  Shape();
LineSet& LineSet277 =  LineSet();
LineSet277.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate278 =  Coordinate();
Coordinate278.setPoint(new float[]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet277.setCoord(Coordinate278);

//from r_knee to r_talocrural vertices 2
ColorRGBA& ColorRGBA279 =  ColorRGBA();
ColorRGBA279.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet277.addChild(&ColorRGBA279);

Shape276.setGeometry(&LineSet277);

HAnimSegment272.addChild(&Shape276);

HAnimSite& HAnimSite280 =  HAnimSite();
HAnimSite280.X3DNode::setName(CString("r_lateral_malleolus"));
HAnimSite280.setDEF(CString("hanim_r_lateral_malleolus"));
HAnimSite280.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
TouchSensor& TouchSensor281 =  TouchSensor();
TouchSensor281.setDescription(CString("HAnimSite 53 r_lateral_malleolus"));
HAnimSite280.addChild(&TouchSensor281);

Shape& Shape282 =  Shape();
Shape282.setUSE(CString("HAnimSiteShape"));
HAnimSite280.addChild(&Shape282);

Billboard& Billboard283 =  Billboard();
Shape& Shape284 =  Shape();
Text& Text285 =  Text();
Text285.setString(new CString[]{CString("53")}, 1);
CFontStyle& FontStyle286 =  CFontStyle();
FontStyle286.setSize(0.035);
Text285.setFontStyle(&FontStyle286);

Shape284.setGeometry(&Text285);

Billboard283.addChild(&Shape284);

HAnimSite280.addChild(Billboard283);

HAnimSegment272.addChild(&HAnimSite280);

HAnimSite& HAnimSite287 =  HAnimSite();
HAnimSite287.X3DNode::setName(CString("r_medial_malleolus"));
HAnimSite287.setDEF(CString("hanim_r_medial_malleolus"));
HAnimSite287.setTranslation(new float[]{-0.0591,0.076,-0.0928});
TouchSensor& TouchSensor288 =  TouchSensor();
TouchSensor288.setDescription(CString("HAnimSite 52 r_medial_malleolus"));
HAnimSite287.addChild(&TouchSensor288);

Shape& Shape289 =  Shape();
Shape289.setUSE(CString("HAnimSiteShape"));
HAnimSite287.addChild(&Shape289);

Billboard& Billboard290 =  Billboard();
Shape& Shape291 =  Shape();
Text& Text292 =  Text();
Text292.setString(new CString[]{CString("52")}, 1);
CFontStyle& FontStyle293 =  CFontStyle();
FontStyle293.setSize(0.035);
Text292.setFontStyle(&FontStyle293);

Shape291.setGeometry(&Text292);

Billboard290.addChild(&Shape291);

HAnimSite287.addChild(Billboard290);

HAnimSegment272.addChild(&HAnimSite287);

HAnimSite& HAnimSite294 =  HAnimSite();
HAnimSite294.X3DNode::setName(CString("r_tibiale"));
HAnimSite294.setDEF(CString("hanim_r_tibiale"));
TouchSensor& TouchSensor295 =  TouchSensor();
TouchSensor295.setDescription(CString("HAnimSite 51 r_tibiale"));
HAnimSite294.addChild(&TouchSensor295);

Shape& Shape296 =  Shape();
Shape296.setUSE(CString("HAnimSiteShape"));
HAnimSite294.addChild(&Shape296);

Billboard& Billboard297 =  Billboard();
Shape& Shape298 =  Shape();
Text& Text299 =  Text();
Text299.setString(new CString[]{CString("51")}, 1);
CFontStyle& FontStyle300 =  CFontStyle();
FontStyle300.setSize(0.035);
Text299.setFontStyle(&FontStyle300);

Shape298.setGeometry(&Text299);

Billboard297.addChild(&Shape298);

HAnimSite294.addChild(Billboard297);

HAnimSegment272.addChild(&HAnimSite294);

HAnimJoint271.addChildren(&HAnimSegment272);

HAnimJoint& HAnimJoint301 =  HAnimJoint();
HAnimJoint301.X3DNode::setName(CString("r_talocrural"));
HAnimJoint301.setDEF(CString("hanim_r_talocrural"));
HAnimJoint301.setCenter(new float[]{-0.0801,0.0712,-0.0766});
HAnimJoint301.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint301.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment302 =  HAnimSegment();
HAnimSegment302.X3DNode::setName(CString("r_talus"));
HAnimSegment302.setDEF(CString("hanim_r_talus"));
Transform& Transform303 =  Transform();
Transform303.setScale(new float[]{0.15,0.15,0.15});
Transform303.setTranslation(new float[]{-0.05,0.06,-0.025});
Transform303.setRotation(new float[]{1,0,0,-1.57});
//Transform right foot
Transform& Transform304 =  Transform();
//Empty Transform right foot
Shape& Shape305 =  Shape();
Shape305.setUSE(CString("HAnimJointShape"));
Transform304.addChild(&Shape305);

Transform303.addChild(&Transform304);

HAnimSegment302.addChild(&Transform303);

Shape& Shape306 =  Shape();
LineSet& LineSet307 =  LineSet();
LineSet307.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate308 =  Coordinate();
Coordinate308.setPoint(new float[]{-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004}, 6);
LineSet307.setCoord(Coordinate308);

//from r_talocrural to r_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA309 =  ColorRGBA();
ColorRGBA309.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet307.addChild(&ColorRGBA309);

Shape306.setGeometry(&LineSet307);

HAnimSegment302.addChild(&Shape306);

HAnimSite& HAnimSite310 =  HAnimSite();
HAnimSite310.X3DNode::setName(CString("r_calcaneus_posterior"));
HAnimSite310.setDEF(CString("hanim_r_calcaneus_posterior"));
HAnimSite310.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
TouchSensor& TouchSensor311 =  TouchSensor();
TouchSensor311.setDescription(CString("HAnimSite 62 r_calcaneus_posterior"));
HAnimSite310.addChild(&TouchSensor311);

Shape& Shape312 =  Shape();
Shape312.setUSE(CString("HAnimSiteShape"));
HAnimSite310.addChild(&Shape312);

Billboard& Billboard313 =  Billboard();
Shape& Shape314 =  Shape();
Text& Text315 =  Text();
Text315.setString(new CString[]{CString("62")}, 1);
CFontStyle& FontStyle316 =  CFontStyle();
FontStyle316.setSize(0.035);
Text315.setFontStyle(&FontStyle316);

Shape314.setGeometry(&Text315);

Billboard313.addChild(&Shape314);

HAnimSite310.addChild(Billboard313);

HAnimSegment302.addChild(&HAnimSite310);

HAnimSite& HAnimSite317 =  HAnimSite();
HAnimSite317.X3DNode::setName(CString("r_sphyrion"));
HAnimSite317.setDEF(CString("hanim_r_sphyrion"));
HAnimSite317.setTranslation(new float[]{-0.0603,0.061,-0.1002});
TouchSensor& TouchSensor318 =  TouchSensor();
TouchSensor318.setDescription(CString("HAnimSite 54 r_sphyrion"));
HAnimSite317.addChild(&TouchSensor318);

Shape& Shape319 =  Shape();
Shape319.setUSE(CString("HAnimSiteShape"));
HAnimSite317.addChild(&Shape319);

Billboard& Billboard320 =  Billboard();
Shape& Shape321 =  Shape();
Text& Text322 =  Text();
Text322.setString(new CString[]{CString("54")}, 1);
CFontStyle& FontStyle323 =  CFontStyle();
FontStyle323.setSize(0.035);
Text322.setFontStyle(&FontStyle323);

Shape321.setGeometry(&Text322);

Billboard320.addChild(&Shape321);

HAnimSite317.addChild(Billboard320);

HAnimSegment302.addChild(&HAnimSite317);

HAnimJoint301.addChildren(&HAnimSegment302);

HAnimJoint& HAnimJoint324 =  HAnimJoint();
HAnimJoint324.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint324.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint324.setCenter(new float[]{-0.0823,0.0064,-0.004});
HAnimJoint324.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint324.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint301.addChildren(&HAnimJoint324);

HAnimJoint271.addChildren(&HAnimJoint301);

HAnimJoint234.addChildren(&HAnimJoint271);

HAnimJoint60.addChildren(&HAnimJoint234);

HAnimJoint47.addChildren(&HAnimJoint60);

HAnimJoint& HAnimJoint325 =  HAnimJoint();
HAnimJoint325.X3DNode::setName(CString("vl5"));
HAnimJoint325.setDEF(CString("hanim_vl5"));
HAnimJoint325.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimJoint325.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint325.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment326 =  HAnimSegment();
HAnimSegment326.X3DNode::setName(CString("l5"));
HAnimSegment326.setDEF(CString("hanim_l5"));
Transform& Transform327 =  Transform();
Transform327.setTranslation(new float[]{0.0028,1.0568,-0.0776});
Transform& Transform328 =  Transform();
//Empty Transform
Shape& Shape329 =  Shape();
Shape329.setUSE(CString("HAnimJointShape"));
Transform328.addChild(&Shape329);

Transform327.addChild(&Transform328);

HAnimSegment326.addChild(&Transform327);

Shape& Shape330 =  Shape();
LineSet& LineSet331 =  LineSet();
LineSet331.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate332 =  Coordinate();
Coordinate332.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236}, 6);
LineSet331.setCoord(Coordinate332);

//from vl5 to skullbase vertices 2
ColorRGBA& ColorRGBA333 =  ColorRGBA();
ColorRGBA333.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet331.addChild(&ColorRGBA333);

Shape330.setGeometry(&LineSet331);

HAnimSegment326.addChild(&Shape330);

HAnimSite& HAnimSite334 =  HAnimSite();
HAnimSite334.X3DNode::setName(CString("adams_apple"));
HAnimSite334.setDEF(CString("hanim_adams_apple"));
TouchSensor& TouchSensor335 =  TouchSensor();
TouchSensor335.setDescription(CString("HAnimSite 11 adams_apple"));
HAnimSite334.addChild(&TouchSensor335);

Shape& Shape336 =  Shape();
Shape336.setUSE(CString("HAnimSiteShape"));
HAnimSite334.addChild(&Shape336);

Billboard& Billboard337 =  Billboard();
Shape& Shape338 =  Shape();
Text& Text339 =  Text();
Text339.setString(new CString[]{CString("11")}, 1);
CFontStyle& FontStyle340 =  CFontStyle();
FontStyle340.setSize(0.035);
Text339.setFontStyle(&FontStyle340);

Shape338.setGeometry(&Text339);

Billboard337.addChild(&Shape338);

HAnimSite334.addChild(Billboard337);

HAnimSegment326.addChild(&HAnimSite334);

HAnimSite& HAnimSite341 =  HAnimSite();
HAnimSite341.X3DNode::setName(CString("cervicale"));
HAnimSite341.setDEF(CString("hanim_cervicale"));
HAnimSite341.setTranslation(new float[]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor342 =  TouchSensor();
TouchSensor342.setDescription(CString("HAnimSite 10 cervicale"));
HAnimSite341.addChild(&TouchSensor342);

Shape& Shape343 =  Shape();
Shape343.setUSE(CString("HAnimSiteShape"));
HAnimSite341.addChild(&Shape343);

Billboard& Billboard344 =  Billboard();
Shape& Shape345 =  Shape();
Text& Text346 =  Text();
Text346.setString(new CString[]{CString("10")}, 1);
CFontStyle& FontStyle347 =  CFontStyle();
FontStyle347.setSize(0.035);
Text346.setFontStyle(&FontStyle347);

Shape345.setGeometry(&Text346);

Billboard344.addChild(&Shape345);

HAnimSite341.addChild(Billboard344);

HAnimSegment326.addChild(&HAnimSite341);

HAnimSite& HAnimSite348 =  HAnimSite();
HAnimSite348.X3DNode::setName(CString("l_acromion"));
HAnimSite348.setDEF(CString("hanim_l_acromion"));
HAnimSite348.setTranslation(new float[]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor349 =  TouchSensor();
TouchSensor349.setDescription(CString("HAnimSite 15 l_acromion"));
HAnimSite348.addChild(&TouchSensor349);

Shape& Shape350 =  Shape();
Shape350.setUSE(CString("HAnimSiteShape"));
HAnimSite348.addChild(&Shape350);

Billboard& Billboard351 =  Billboard();
Shape& Shape352 =  Shape();
Text& Text353 =  Text();
Text353.setString(new CString[]{CString("15")}, 1);
CFontStyle& FontStyle354 =  CFontStyle();
FontStyle354.setSize(0.035);
Text353.setFontStyle(&FontStyle354);

Shape352.setGeometry(&Text353);

Billboard351.addChild(&Shape352);

HAnimSite348.addChild(Billboard351);

HAnimSegment326.addChild(&HAnimSite348);

HAnimSite& HAnimSite355 =  HAnimSite();
HAnimSite355.X3DNode::setName(CString("l_axilla_distal"));
HAnimSite355.setDEF(CString("hanim_l_axilla_distal"));
HAnimSite355.setTranslation(new float[]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor356 =  TouchSensor();
TouchSensor356.setDescription(CString("HAnimSite 17 l_axilla_distal"));
HAnimSite355.addChild(&TouchSensor356);

Shape& Shape357 =  Shape();
Shape357.setUSE(CString("HAnimSiteShape"));
HAnimSite355.addChild(&Shape357);

Billboard& Billboard358 =  Billboard();
Shape& Shape359 =  Shape();
Text& Text360 =  Text();
Text360.setString(new CString[]{CString("17")}, 1);
CFontStyle& FontStyle361 =  CFontStyle();
FontStyle361.setSize(0.035);
Text360.setFontStyle(&FontStyle361);

Shape359.setGeometry(&Text360);

Billboard358.addChild(&Shape359);

HAnimSite355.addChild(Billboard358);

HAnimSegment326.addChild(&HAnimSite355);

HAnimSite& HAnimSite362 =  HAnimSite();
HAnimSite362.X3DNode::setName(CString("l_axilla_posterior_folds"));
HAnimSite362.setDEF(CString("hanim_l_axilla_posterior_folds"));
TouchSensor& TouchSensor363 =  TouchSensor();
TouchSensor363.setDescription(CString("HAnimSite 18 l_axilla_posterior_folds"));
HAnimSite362.addChild(&TouchSensor363);

Shape& Shape364 =  Shape();
Shape364.setUSE(CString("HAnimSiteShape"));
HAnimSite362.addChild(&Shape364);

Billboard& Billboard365 =  Billboard();
Shape& Shape366 =  Shape();
Text& Text367 =  Text();
Text367.setString(new CString[]{CString("18")}, 1);
CFontStyle& FontStyle368 =  CFontStyle();
FontStyle368.setSize(0.035);
Text367.setFontStyle(&FontStyle368);

Shape366.setGeometry(&Text367);

Billboard365.addChild(&Shape366);

HAnimSite362.addChild(Billboard365);

HAnimSegment326.addChild(&HAnimSite362);

HAnimSite& HAnimSite369 =  HAnimSite();
HAnimSite369.X3DNode::setName(CString("l_axilla_proximal"));
HAnimSite369.setDEF(CString("hanim_l_axilla_proximal"));
HAnimSite369.setTranslation(new float[]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor370 =  TouchSensor();
TouchSensor370.setDescription(CString("HAnimSite 16 l_axilla_proximal"));
HAnimSite369.addChild(&TouchSensor370);

Shape& Shape371 =  Shape();
Shape371.setUSE(CString("HAnimSiteShape"));
HAnimSite369.addChild(&Shape371);

Billboard& Billboard372 =  Billboard();
Shape& Shape373 =  Shape();
Text& Text374 =  Text();
Text374.setString(new CString[]{CString("16")}, 1);
CFontStyle& FontStyle375 =  CFontStyle();
FontStyle375.setSize(0.035);
Text374.setFontStyle(&FontStyle375);

Shape373.setGeometry(&Text374);

Billboard372.addChild(&Shape373);

HAnimSite369.addChild(Billboard372);

HAnimSegment326.addChild(&HAnimSite369);

HAnimSite& HAnimSite376 =  HAnimSite();
HAnimSite376.X3DNode::setName(CString("l_chest_midsagittal_plane"));
HAnimSite376.setDEF(CString("hanim_l_chest_midsagittal_plane"));
TouchSensor& TouchSensor377 =  TouchSensor();
TouchSensor377.setDescription(CString("HAnimSite 94 l_chest_midsagittal_plane"));
HAnimSite376.addChild(&TouchSensor377);

Shape& Shape378 =  Shape();
Shape378.setUSE(CString("HAnimSiteShape"));
HAnimSite376.addChild(&Shape378);

Billboard& Billboard379 =  Billboard();
Shape& Shape380 =  Shape();
Text& Text381 =  Text();
Text381.setString(new CString[]{CString("94")}, 1);
CFontStyle& FontStyle382 =  CFontStyle();
FontStyle382.setSize(0.035);
Text381.setFontStyle(&FontStyle382);

Shape380.setGeometry(&Text381);

Billboard379.addChild(&Shape380);

HAnimSite376.addChild(Billboard379);

HAnimSegment326.addChild(&HAnimSite376);

HAnimSite& HAnimSite383 =  HAnimSite();
HAnimSite383.X3DNode::setName(CString("l_clavicale"));
HAnimSite383.setDEF(CString("hanim_l_clavicale"));
HAnimSite383.setTranslation(new float[]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor384 =  TouchSensor();
TouchSensor384.setDescription(CString("HAnimSite 14 l_clavicale"));
HAnimSite383.addChild(&TouchSensor384);

Shape& Shape385 =  Shape();
Shape385.setUSE(CString("HAnimSiteShape"));
HAnimSite383.addChild(&Shape385);

Billboard& Billboard386 =  Billboard();
Shape& Shape387 =  Shape();
Text& Text388 =  Text();
Text388.setString(new CString[]{CString("14")}, 1);
CFontStyle& FontStyle389 =  CFontStyle();
FontStyle389.setSize(0.035);
Text388.setFontStyle(&FontStyle389);

Shape387.setGeometry(&Text388);

Billboard386.addChild(&Shape387);

HAnimSite383.addChild(Billboard386);

HAnimSegment326.addChild(&HAnimSite383);

HAnimSite& HAnimSite390 =  HAnimSite();
HAnimSite390.X3DNode::setName(CString("l_neck_base"));
HAnimSite390.setDEF(CString("hanim_l_neck_base"));
HAnimSite390.setTranslation(new float[]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor391 =  TouchSensor();
TouchSensor391.setDescription(CString("HAnimSite 82 l_neck_base"));
HAnimSite390.addChild(&TouchSensor391);

Shape& Shape392 =  Shape();
Shape392.setUSE(CString("HAnimSiteShape"));
HAnimSite390.addChild(&Shape392);

Billboard& Billboard393 =  Billboard();
Shape& Shape394 =  Shape();
Text& Text395 =  Text();
Text395.setString(new CString[]{CString("82")}, 1);
CFontStyle& FontStyle396 =  CFontStyle();
FontStyle396.setSize(0.035);
Text395.setFontStyle(&FontStyle396);

Shape394.setGeometry(&Text395);

Billboard393.addChild(&Shape394);

HAnimSite390.addChild(Billboard393);

HAnimSegment326.addChild(&HAnimSite390);

HAnimSite& HAnimSite397 =  HAnimSite();
HAnimSite397.X3DNode::setName(CString("l_rib10"));
HAnimSite397.setDEF(CString("hanim_l_rib10"));
HAnimSite397.setTranslation(new float[]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor398 =  TouchSensor();
TouchSensor398.setDescription(CString("HAnimSite 28 l_rib10"));
HAnimSite397.addChild(&TouchSensor398);

Shape& Shape399 =  Shape();
Shape399.setUSE(CString("HAnimSiteShape"));
HAnimSite397.addChild(&Shape399);

Billboard& Billboard400 =  Billboard();
Shape& Shape401 =  Shape();
Text& Text402 =  Text();
Text402.setString(new CString[]{CString("28")}, 1);
CFontStyle& FontStyle403 =  CFontStyle();
FontStyle403.setSize(0.035);
Text402.setFontStyle(&FontStyle403);

Shape401.setGeometry(&Text402);

Billboard400.addChild(&Shape401);

HAnimSite397.addChild(Billboard400);

HAnimSegment326.addChild(&HAnimSite397);

HAnimSite& HAnimSite404 =  HAnimSite();
HAnimSite404.X3DNode::setName(CString("l_thelion"));
HAnimSite404.setDEF(CString("hanim_l_thelion"));
HAnimSite404.setTranslation(new float[]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor405 =  TouchSensor();
TouchSensor405.setDescription(CString("HAnimSite 29 l_thelion"));
HAnimSite404.addChild(&TouchSensor405);

Shape& Shape406 =  Shape();
Shape406.setUSE(CString("HAnimSiteShape"));
HAnimSite404.addChild(&Shape406);

Billboard& Billboard407 =  Billboard();
Shape& Shape408 =  Shape();
Text& Text409 =  Text();
Text409.setString(new CString[]{CString("29")}, 1);
CFontStyle& FontStyle410 =  CFontStyle();
FontStyle410.setSize(0.035);
Text409.setFontStyle(&FontStyle410);

Shape408.setGeometry(&Text409);

Billboard407.addChild(&Shape408);

HAnimSite404.addChild(Billboard407);

HAnimSegment326.addChild(&HAnimSite404);

HAnimSite& HAnimSite411 =  HAnimSite();
HAnimSite411.X3DNode::setName(CString("mesosternale"));
HAnimSite411.setDEF(CString("hanim_mesosternale"));
TouchSensor& TouchSensor412 =  TouchSensor();
TouchSensor412.setDescription(CString("HAnimSite 88 mesosternale"));
HAnimSite411.addChild(&TouchSensor412);

Shape& Shape413 =  Shape();
Shape413.setUSE(CString("HAnimSiteShape"));
HAnimSite411.addChild(&Shape413);

Billboard& Billboard414 =  Billboard();
Shape& Shape415 =  Shape();
Text& Text416 =  Text();
Text416.setString(new CString[]{CString("88")}, 1);
CFontStyle& FontStyle417 =  CFontStyle();
FontStyle417.setSize(0.035);
Text416.setFontStyle(&FontStyle417);

Shape415.setGeometry(&Text416);

Billboard414.addChild(&Shape415);

HAnimSite411.addChild(Billboard414);

HAnimSegment326.addChild(&HAnimSite411);

HAnimSite& HAnimSite418 =  HAnimSite();
HAnimSite418.X3DNode::setName(CString("navel"));
HAnimSite418.setDEF(CString("hanim_navel"));
HAnimSite418.setTranslation(new float[]{0.0069,1.0966,0.1017});
TouchSensor& TouchSensor419 =  TouchSensor();
TouchSensor419.setDescription(CString("HAnimSite 84 navel"));
HAnimSite418.addChild(&TouchSensor419);

Shape& Shape420 =  Shape();
Shape420.setUSE(CString("HAnimSiteShape"));
HAnimSite418.addChild(&Shape420);

Billboard& Billboard421 =  Billboard();
Shape& Shape422 =  Shape();
Text& Text423 =  Text();
Text423.setString(new CString[]{CString("84")}, 1);
CFontStyle& FontStyle424 =  CFontStyle();
FontStyle424.setSize(0.035);
Text423.setFontStyle(&FontStyle424);

Shape422.setGeometry(&Text423);

Billboard421.addChild(&Shape422);

HAnimSite418.addChild(Billboard421);

HAnimSegment326.addChild(&HAnimSite418);

HAnimSite& HAnimSite425 =  HAnimSite();
HAnimSite425.X3DNode::setName(CString("r_acromion"));
HAnimSite425.setDEF(CString("hanim_r_acromion"));
HAnimSite425.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor426 =  TouchSensor();
TouchSensor426.setDescription(CString("HAnimSite 20 r_acromion"));
HAnimSite425.addChild(&TouchSensor426);

Shape& Shape427 =  Shape();
Shape427.setUSE(CString("HAnimSiteShape"));
HAnimSite425.addChild(&Shape427);

Billboard& Billboard428 =  Billboard();
Shape& Shape429 =  Shape();
Text& Text430 =  Text();
Text430.setString(new CString[]{CString("20")}, 1);
CFontStyle& FontStyle431 =  CFontStyle();
FontStyle431.setSize(0.035);
Text430.setFontStyle(&FontStyle431);

Shape429.setGeometry(&Text430);

Billboard428.addChild(&Shape429);

HAnimSite425.addChild(Billboard428);

HAnimSegment326.addChild(&HAnimSite425);

HAnimSite& HAnimSite432 =  HAnimSite();
HAnimSite432.X3DNode::setName(CString("r_axilla_distal"));
HAnimSite432.setDEF(CString("hanim_r_axilla_distal"));
HAnimSite432.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor433 =  TouchSensor();
TouchSensor433.setDescription(CString("HAnimSite 22 r_axilla_distal"));
HAnimSite432.addChild(&TouchSensor433);

Shape& Shape434 =  Shape();
Shape434.setUSE(CString("HAnimSiteShape"));
HAnimSite432.addChild(&Shape434);

Billboard& Billboard435 =  Billboard();
Shape& Shape436 =  Shape();
Text& Text437 =  Text();
Text437.setString(new CString[]{CString("22")}, 1);
CFontStyle& FontStyle438 =  CFontStyle();
FontStyle438.setSize(0.035);
Text437.setFontStyle(&FontStyle438);

Shape436.setGeometry(&Text437);

Billboard435.addChild(&Shape436);

HAnimSite432.addChild(Billboard435);

HAnimSegment326.addChild(&HAnimSite432);

HAnimSite& HAnimSite439 =  HAnimSite();
HAnimSite439.X3DNode::setName(CString("r_axilla_posterior_folds"));
HAnimSite439.setDEF(CString("hanim_r_axilla_posterior_folds"));
TouchSensor& TouchSensor440 =  TouchSensor();
TouchSensor440.setDescription(CString("HAnimSite 23 r_axilla_posterior_folds"));
HAnimSite439.addChild(&TouchSensor440);

Shape& Shape441 =  Shape();
Shape441.setUSE(CString("HAnimSiteShape"));
HAnimSite439.addChild(&Shape441);

Billboard& Billboard442 =  Billboard();
Shape& Shape443 =  Shape();
Text& Text444 =  Text();
Text444.setString(new CString[]{CString("23")}, 1);
CFontStyle& FontStyle445 =  CFontStyle();
FontStyle445.setSize(0.035);
Text444.setFontStyle(&FontStyle445);

Shape443.setGeometry(&Text444);

Billboard442.addChild(&Shape443);

HAnimSite439.addChild(Billboard442);

HAnimSegment326.addChild(&HAnimSite439);

HAnimSite& HAnimSite446 =  HAnimSite();
HAnimSite446.X3DNode::setName(CString("r_axilla_proximal"));
HAnimSite446.setDEF(CString("hanim_r_axilla_proximal"));
HAnimSite446.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor447 =  TouchSensor();
TouchSensor447.setDescription(CString("HAnimSite 21 r_axilla_proximal"));
HAnimSite446.addChild(&TouchSensor447);

Shape& Shape448 =  Shape();
Shape448.setUSE(CString("HAnimSiteShape"));
HAnimSite446.addChild(&Shape448);

Billboard& Billboard449 =  Billboard();
Shape& Shape450 =  Shape();
Text& Text451 =  Text();
Text451.setString(new CString[]{CString("21")}, 1);
CFontStyle& FontStyle452 =  CFontStyle();
FontStyle452.setSize(0.035);
Text451.setFontStyle(&FontStyle452);

Shape450.setGeometry(&Text451);

Billboard449.addChild(&Shape450);

HAnimSite446.addChild(Billboard449);

HAnimSegment326.addChild(&HAnimSite446);

HAnimSite& HAnimSite453 =  HAnimSite();
HAnimSite453.X3DNode::setName(CString("r_chest_midsagittal_plane"));
HAnimSite453.setDEF(CString("hanim_r_chest_midsagittal_plane"));
TouchSensor& TouchSensor454 =  TouchSensor();
TouchSensor454.setDescription(CString("HAnimSite 95 r_chest_midsagittal_plane"));
HAnimSite453.addChild(&TouchSensor454);

Shape& Shape455 =  Shape();
Shape455.setUSE(CString("HAnimSiteShape"));
HAnimSite453.addChild(&Shape455);

Billboard& Billboard456 =  Billboard();
Shape& Shape457 =  Shape();
Text& Text458 =  Text();
Text458.setString(new CString[]{CString("95")}, 1);
CFontStyle& FontStyle459 =  CFontStyle();
FontStyle459.setSize(0.035);
Text458.setFontStyle(&FontStyle459);

Shape457.setGeometry(&Text458);

Billboard456.addChild(&Shape457);

HAnimSite453.addChild(Billboard456);

HAnimSegment326.addChild(&HAnimSite453);

HAnimSite& HAnimSite460 =  HAnimSite();
HAnimSite460.X3DNode::setName(CString("r_clavicale"));
HAnimSite460.setDEF(CString("hanim_r_clavicale"));
HAnimSite460.setTranslation(new float[]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor461 =  TouchSensor();
TouchSensor461.setDescription(CString("HAnimSite 19 r_clavicale"));
HAnimSite460.addChild(&TouchSensor461);

Shape& Shape462 =  Shape();
Shape462.setUSE(CString("HAnimSiteShape"));
HAnimSite460.addChild(&Shape462);

Billboard& Billboard463 =  Billboard();
Shape& Shape464 =  Shape();
Text& Text465 =  Text();
Text465.setString(new CString[]{CString("19")}, 1);
CFontStyle& FontStyle466 =  CFontStyle();
FontStyle466.setSize(0.035);
Text465.setFontStyle(&FontStyle466);

Shape464.setGeometry(&Text465);

Billboard463.addChild(&Shape464);

HAnimSite460.addChild(Billboard463);

HAnimSegment326.addChild(&HAnimSite460);

HAnimSite& HAnimSite467 =  HAnimSite();
HAnimSite467.X3DNode::setName(CString("r_neck_base"));
HAnimSite467.setDEF(CString("hanim_r_neck_base"));
HAnimSite467.setTranslation(new float[]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor468 =  TouchSensor();
TouchSensor468.setDescription(CString("HAnimSite 83 r_neck_base"));
HAnimSite467.addChild(&TouchSensor468);

Shape& Shape469 =  Shape();
Shape469.setUSE(CString("HAnimSiteShape"));
HAnimSite467.addChild(&Shape469);

Billboard& Billboard470 =  Billboard();
Shape& Shape471 =  Shape();
Text& Text472 =  Text();
Text472.setString(new CString[]{CString("83")}, 1);
CFontStyle& FontStyle473 =  CFontStyle();
FontStyle473.setSize(0.035);
Text472.setFontStyle(&FontStyle473);

Shape471.setGeometry(&Text472);

Billboard470.addChild(&Shape471);

HAnimSite467.addChild(Billboard470);

HAnimSegment326.addChild(&HAnimSite467);

HAnimSite& HAnimSite474 =  HAnimSite();
HAnimSite474.X3DNode::setName(CString("r_rib10"));
HAnimSite474.setDEF(CString("hanim_r_rib10"));
HAnimSite474.setTranslation(new float[]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor475 =  TouchSensor();
TouchSensor475.setDescription(CString("HAnimSite 30 r_rib10"));
HAnimSite474.addChild(&TouchSensor475);

Shape& Shape476 =  Shape();
Shape476.setUSE(CString("HAnimSiteShape"));
HAnimSite474.addChild(&Shape476);

Billboard& Billboard477 =  Billboard();
Shape& Shape478 =  Shape();
Text& Text479 =  Text();
Text479.setString(new CString[]{CString("30")}, 1);
CFontStyle& FontStyle480 =  CFontStyle();
FontStyle480.setSize(0.035);
Text479.setFontStyle(&FontStyle480);

Shape478.setGeometry(&Text479);

Billboard477.addChild(&Shape478);

HAnimSite474.addChild(Billboard477);

HAnimSegment326.addChild(&HAnimSite474);

HAnimSite& HAnimSite481 =  HAnimSite();
HAnimSite481.X3DNode::setName(CString("r_thelion"));
HAnimSite481.setDEF(CString("hanim_r_thelion"));
HAnimSite481.setTranslation(new float[]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor482 =  TouchSensor();
TouchSensor482.setDescription(CString("HAnimSite 31 r_thelion"));
HAnimSite481.addChild(&TouchSensor482);

Shape& Shape483 =  Shape();
Shape483.setUSE(CString("HAnimSiteShape"));
HAnimSite481.addChild(&Shape483);

Billboard& Billboard484 =  Billboard();
Shape& Shape485 =  Shape();
Text& Text486 =  Text();
Text486.setString(new CString[]{CString("31")}, 1);
CFontStyle& FontStyle487 =  CFontStyle();
FontStyle487.setSize(0.035);
Text486.setFontStyle(&FontStyle487);

Shape485.setGeometry(&Text486);

Billboard484.addChild(&Shape485);

HAnimSite481.addChild(Billboard484);

HAnimSegment326.addChild(&HAnimSite481);

HAnimSite& HAnimSite488 =  HAnimSite();
HAnimSite488.X3DNode::setName(CString("rear_center_midsagittal_plane"));
HAnimSite488.setDEF(CString("hanim_rear_center_midsagittal_plane"));
TouchSensor& TouchSensor489 =  TouchSensor();
TouchSensor489.setDescription(CString("HAnimSite 92 rear_center_midsagittal_plane"));
HAnimSite488.addChild(&TouchSensor489);

Shape& Shape490 =  Shape();
Shape490.setUSE(CString("HAnimSiteShape"));
HAnimSite488.addChild(&Shape490);

Billboard& Billboard491 =  Billboard();
Shape& Shape492 =  Shape();
Text& Text493 =  Text();
Text493.setString(new CString[]{CString("92")}, 1);
CFontStyle& FontStyle494 =  CFontStyle();
FontStyle494.setSize(0.035);
Text493.setFontStyle(&FontStyle494);

Shape492.setGeometry(&Text493);

Billboard491.addChild(&Shape492);

HAnimSite488.addChild(Billboard491);

HAnimSegment326.addChild(&HAnimSite488);

HAnimSite& HAnimSite495 =  HAnimSite();
HAnimSite495.X3DNode::setName(CString("spine_1_middle_back"));
HAnimSite495.setDEF(CString("hanim_spine_1_middle_back"));
TouchSensor& TouchSensor496 =  TouchSensor();
TouchSensor496.setDescription(CString("HAnimSite 24 spine_1_middle_back"));
HAnimSite495.addChild(&TouchSensor496);

Shape& Shape497 =  Shape();
Shape497.setUSE(CString("HAnimSiteShape"));
HAnimSite495.addChild(&Shape497);

Billboard& Billboard498 =  Billboard();
Shape& Shape499 =  Shape();
Text& Text500 =  Text();
Text500.setString(new CString[]{CString("24")}, 1);
CFontStyle& FontStyle501 =  CFontStyle();
FontStyle501.setSize(0.035);
Text500.setFontStyle(&FontStyle501);

Shape499.setGeometry(&Text500);

Billboard498.addChild(&Shape499);

HAnimSite495.addChild(Billboard498);

HAnimSegment326.addChild(&HAnimSite495);

HAnimSite& HAnimSite502 =  HAnimSite();
HAnimSite502.X3DNode::setName(CString("spine_2_middle_back"));
HAnimSite502.setDEF(CString("hanim_spine_2_middle_back"));
TouchSensor& TouchSensor503 =  TouchSensor();
TouchSensor503.setDescription(CString("HAnimSite spine_2_middle_back"));
HAnimSite502.addChild(&TouchSensor503);

Shape& Shape504 =  Shape();
Shape504.setUSE(CString("HAnimSiteShape"));
HAnimSite502.addChild(&Shape504);

Billboard& Billboard505 =  Billboard();
Shape& Shape506 =  Shape();
Text& Text507 =  Text();
Text507.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle508 =  CFontStyle();
FontStyle508.setSize(0.035);
Text507.setFontStyle(&FontStyle508);

Shape506.setGeometry(&Text507);

Billboard505.addChild(&Shape506);

HAnimSite502.addChild(Billboard505);

HAnimSegment326.addChild(&HAnimSite502);

HAnimSite& HAnimSite509 =  HAnimSite();
HAnimSite509.X3DNode::setName(CString("substernale"));
HAnimSite509.setDEF(CString("hanim_substernale"));
HAnimSite509.setTranslation(new float[]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor510 =  TouchSensor();
TouchSensor510.setDescription(CString("HAnimSite 13 substernale"));
HAnimSite509.addChild(&TouchSensor510);

Shape& Shape511 =  Shape();
Shape511.setUSE(CString("HAnimSiteShape"));
HAnimSite509.addChild(&Shape511);

Billboard& Billboard512 =  Billboard();
Shape& Shape513 =  Shape();
Text& Text514 =  Text();
Text514.setString(new CString[]{CString("13")}, 1);
CFontStyle& FontStyle515 =  CFontStyle();
FontStyle515.setSize(0.035);
Text514.setFontStyle(&FontStyle515);

Shape513.setGeometry(&Text514);

Billboard512.addChild(&Shape513);

HAnimSite509.addChild(Billboard512);

HAnimSegment326.addChild(&HAnimSite509);

HAnimSite& HAnimSite516 =  HAnimSite();
HAnimSite516.X3DNode::setName(CString("suprasternale"));
HAnimSite516.setDEF(CString("hanim_suprasternale"));
HAnimSite516.setTranslation(new float[]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor517 =  TouchSensor();
TouchSensor517.setDescription(CString("HAnimSite 12 suprasternale"));
HAnimSite516.addChild(&TouchSensor517);

Shape& Shape518 =  Shape();
Shape518.setUSE(CString("HAnimSiteShape"));
HAnimSite516.addChild(&Shape518);

Billboard& Billboard519 =  Billboard();
Shape& Shape520 =  Shape();
Text& Text521 =  Text();
Text521.setString(new CString[]{CString("12")}, 1);
CFontStyle& FontStyle522 =  CFontStyle();
FontStyle522.setSize(0.035);
Text521.setFontStyle(&FontStyle522);

Shape520.setGeometry(&Text521);

Billboard519.addChild(&Shape520);

HAnimSite516.addChild(Billboard519);

HAnimSegment326.addChild(&HAnimSite516);

HAnimSite& HAnimSite523 =  HAnimSite();
HAnimSite523.X3DNode::setName(CString("waist_preferred_anterior"));
HAnimSite523.setDEF(CString("hanim_waist_preferred_anterior"));
TouchSensor& TouchSensor524 =  TouchSensor();
TouchSensor524.setDescription(CString("HAnimSite 26 waist_preferred_anterior"));
HAnimSite523.addChild(&TouchSensor524);

Shape& Shape525 =  Shape();
Shape525.setUSE(CString("HAnimSiteShape"));
HAnimSite523.addChild(&Shape525);

Billboard& Billboard526 =  Billboard();
Shape& Shape527 =  Shape();
Text& Text528 =  Text();
Text528.setString(new CString[]{CString("26")}, 1);
CFontStyle& FontStyle529 =  CFontStyle();
FontStyle529.setSize(0.035);
Text528.setFontStyle(&FontStyle529);

Shape527.setGeometry(&Text528);

Billboard526.addChild(&Shape527);

HAnimSite523.addChild(Billboard526);

HAnimSegment326.addChild(&HAnimSite523);

HAnimSite& HAnimSite530 =  HAnimSite();
HAnimSite530.X3DNode::setName(CString("waist_preferred_posterior"));
HAnimSite530.setDEF(CString("hanim_waist_preferred_posterior"));
HAnimSite530.setTranslation(new float[]{0.29,1.0915,-0.1091});
TouchSensor& TouchSensor531 =  TouchSensor();
TouchSensor531.setDescription(CString("HAnimSite 27 waist_preferred_posterior"));
HAnimSite530.addChild(&TouchSensor531);

Shape& Shape532 =  Shape();
Shape532.setUSE(CString("HAnimSiteShape"));
HAnimSite530.addChild(&Shape532);

Billboard& Billboard533 =  Billboard();
Shape& Shape534 =  Shape();
Text& Text535 =  Text();
Text535.setString(new CString[]{CString("27")}, 1);
CFontStyle& FontStyle536 =  CFontStyle();
FontStyle536.setSize(0.035);
Text535.setFontStyle(&FontStyle536);

Shape534.setGeometry(&Text535);

Billboard533.addChild(&Shape534);

HAnimSite530.addChild(Billboard533);

HAnimSegment326.addChild(&HAnimSite530);

Shape& Shape537 =  Shape();
LineSet& LineSet538 =  LineSet();
LineSet538.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate539 =  Coordinate();
Coordinate539.setPoint(new float[]{0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387}, 6);
LineSet538.setCoord(Coordinate539);

//from vl5 to l_shoulder vertices 2
ColorRGBA& ColorRGBA540 =  ColorRGBA();
ColorRGBA540.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet538.addChild(&ColorRGBA540);

Shape537.setGeometry(&LineSet538);

HAnimSegment326.addChild(&Shape537);

Shape& Shape541 =  Shape();
LineSet& LineSet542 =  LineSet();
LineSet542.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate543 =  Coordinate();
Coordinate543.setPoint(new float[]{0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325}, 6);
LineSet542.setCoord(Coordinate543);

//from vl5 to r_shoulder vertices 2
ColorRGBA& ColorRGBA544 =  ColorRGBA();
ColorRGBA544.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet542.addChild(&ColorRGBA544);

Shape541.setGeometry(&LineSet542);

HAnimSegment326.addChild(&Shape541);

HAnimJoint325.addChildren(&HAnimSegment326);

HAnimJoint& HAnimJoint545 =  HAnimJoint();
HAnimJoint545.X3DNode::setName(CString("skullbase"));
HAnimJoint545.setDEF(CString("hanim_skullbase"));
HAnimJoint545.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimJoint545.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint545.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint325.addChildren(&HAnimJoint545);

HAnimJoint& HAnimJoint546 =  HAnimJoint();
HAnimJoint546.X3DNode::setName(CString("l_shoulder"));
HAnimJoint546.setDEF(CString("hanim_l_shoulder"));
HAnimJoint546.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimJoint546.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint546.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment547 =  HAnimSegment();
HAnimSegment547.X3DNode::setName(CString("l_upperarm"));
HAnimSegment547.setDEF(CString("hanim_l_upperarm"));
Transform& Transform548 =  Transform();
Transform548.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Transform& Transform549 =  Transform();
//Empty Transform
Shape& Shape550 =  Shape();
Shape550.setUSE(CString("HAnimJointShape"));
Transform549.addChild(&Shape550);

Transform548.addChild(&Transform549);

HAnimSegment547.addChild(&Transform548);

Shape& Shape551 =  Shape();
LineSet& LineSet552 =  LineSet();
LineSet552.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate553 =  Coordinate();
Coordinate553.setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet552.setCoord(Coordinate553);

//from l_shoulder to l_elbow vertices 2
ColorRGBA& ColorRGBA554 =  ColorRGBA();
ColorRGBA554.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet552.addChild(&ColorRGBA554);

Shape551.setGeometry(&LineSet552);

HAnimSegment547.addChild(&Shape551);

HAnimSite& HAnimSite555 =  HAnimSite();
HAnimSite555.X3DNode::setName(CString("l_bideltoid"));
HAnimSite555.setDEF(CString("hanim_l_bideltoid"));
TouchSensor& TouchSensor556 =  TouchSensor();
TouchSensor556.setDescription(CString("HAnimSite 96 l_bideltoid"));
HAnimSite555.addChild(&TouchSensor556);

Shape& Shape557 =  Shape();
Shape557.setUSE(CString("HAnimSiteShape"));
HAnimSite555.addChild(&Shape557);

Billboard& Billboard558 =  Billboard();
Shape& Shape559 =  Shape();
Text& Text560 =  Text();
Text560.setString(new CString[]{CString("96")}, 1);
CFontStyle& FontStyle561 =  CFontStyle();
FontStyle561.setSize(0.035);
Text560.setFontStyle(&FontStyle561);

Shape559.setGeometry(&Text560);

Billboard558.addChild(&Shape559);

HAnimSite555.addChild(Billboard558);

HAnimSegment547.addChild(&HAnimSite555);

HAnimSite& HAnimSite562 =  HAnimSite();
HAnimSite562.X3DNode::setName(CString("l_humeral_lateral_epicondyles"));
HAnimSite562.setDEF(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimSite562.setTranslation(new float[]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor563 =  TouchSensor();
TouchSensor563.setDescription(CString("HAnimSite 63 l_humeral_lateral_epicondyles"));
HAnimSite562.addChild(&TouchSensor563);

Shape& Shape564 =  Shape();
Shape564.setUSE(CString("HAnimSiteShape"));
HAnimSite562.addChild(&Shape564);

Billboard& Billboard565 =  Billboard();
Shape& Shape566 =  Shape();
Text& Text567 =  Text();
Text567.setString(new CString[]{CString("63")}, 1);
CFontStyle& FontStyle568 =  CFontStyle();
FontStyle568.setSize(0.035);
Text567.setFontStyle(&FontStyle568);

Shape566.setGeometry(&Text567);

Billboard565.addChild(&Shape566);

HAnimSite562.addChild(Billboard565);

HAnimSegment547.addChild(&HAnimSite562);

HAnimJoint546.addChildren(&HAnimSegment547);

HAnimJoint& HAnimJoint569 =  HAnimJoint();
HAnimJoint569.X3DNode::setName(CString("l_elbow"));
HAnimJoint569.setDEF(CString("hanim_l_elbow"));
HAnimJoint569.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimJoint569.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint569.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment570 =  HAnimSegment();
HAnimSegment570.X3DNode::setName(CString("l_forearm"));
HAnimSegment570.setDEF(CString("hanim_l_forearm"));
Transform& Transform571 =  Transform();
Transform571.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Transform& Transform572 =  Transform();
//Empty Transform
Shape& Shape573 =  Shape();
Shape573.setUSE(CString("HAnimJointShape"));
Transform572.addChild(&Shape573);

Transform571.addChild(&Transform572);

HAnimSegment570.addChild(&Transform571);

Shape& Shape574 =  Shape();
LineSet& LineSet575 =  LineSet();
LineSet575.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate576 =  Coordinate();
Coordinate576.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet575.setCoord(Coordinate576);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA& ColorRGBA577 =  ColorRGBA();
ColorRGBA577.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet575.addChild(&ColorRGBA577);

Shape574.setGeometry(&LineSet575);

HAnimSegment570.addChild(&Shape574);

HAnimSite& HAnimSite578 =  HAnimSite();
HAnimSite578.X3DNode::setName(CString("l_humeral_medial_epicondyles"));
HAnimSite578.setDEF(CString("hanim_l_humeral_medial_epicondyles"));
HAnimSite578.setTranslation(new float[]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor579 =  TouchSensor();
TouchSensor579.setDescription(CString("HAnimSite 64 l_humeral_medial_epicondyles"));
HAnimSite578.addChild(&TouchSensor579);

Shape& Shape580 =  Shape();
Shape580.setUSE(CString("HAnimSiteShape"));
HAnimSite578.addChild(&Shape580);

Billboard& Billboard581 =  Billboard();
Shape& Shape582 =  Shape();
Text& Text583 =  Text();
Text583.setString(new CString[]{CString("64")}, 1);
CFontStyle& FontStyle584 =  CFontStyle();
FontStyle584.setSize(0.035);
Text583.setFontStyle(&FontStyle584);

Shape582.setGeometry(&Text583);

Billboard581.addChild(&Shape582);

HAnimSite578.addChild(Billboard581);

HAnimSegment570.addChild(&HAnimSite578);

HAnimSite& HAnimSite585 =  HAnimSite();
HAnimSite585.X3DNode::setName(CString("l_olecranon"));
HAnimSite585.setDEF(CString("hanim_l_olecranon"));
HAnimSite585.setTranslation(new float[]{-0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor586 =  TouchSensor();
TouchSensor586.setDescription(CString("HAnimSite 65 l_olecranon"));
HAnimSite585.addChild(&TouchSensor586);

Shape& Shape587 =  Shape();
Shape587.setUSE(CString("HAnimSiteShape"));
HAnimSite585.addChild(&Shape587);

Billboard& Billboard588 =  Billboard();
Shape& Shape589 =  Shape();
Text& Text590 =  Text();
Text590.setString(new CString[]{CString("65")}, 1);
CFontStyle& FontStyle591 =  CFontStyle();
FontStyle591.setSize(0.035);
Text590.setFontStyle(&FontStyle591);

Shape589.setGeometry(&Text590);

Billboard588.addChild(&Shape589);

HAnimSite585.addChild(Billboard588);

HAnimSegment570.addChild(&HAnimSite585);

HAnimSite& HAnimSite592 =  HAnimSite();
HAnimSite592.X3DNode::setName(CString("l_radial_styloid"));
HAnimSite592.setDEF(CString("hanim_l_radial_styloid"));
HAnimSite592.setTranslation(new float[]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor593 =  TouchSensor();
TouchSensor593.setDescription(CString("HAnimSite 71 l_radial_styloid"));
HAnimSite592.addChild(&TouchSensor593);

Shape& Shape594 =  Shape();
Shape594.setUSE(CString("HAnimSiteShape"));
HAnimSite592.addChild(&Shape594);

Billboard& Billboard595 =  Billboard();
Shape& Shape596 =  Shape();
Text& Text597 =  Text();
Text597.setString(new CString[]{CString("71")}, 1);
CFontStyle& FontStyle598 =  CFontStyle();
FontStyle598.setSize(0.035);
Text597.setFontStyle(&FontStyle598);

Shape596.setGeometry(&Text597);

Billboard595.addChild(&Shape596);

HAnimSite592.addChild(Billboard595);

HAnimSegment570.addChild(&HAnimSite592);

HAnimSite& HAnimSite599 =  HAnimSite();
HAnimSite599.X3DNode::setName(CString("l_radiale"));
HAnimSite599.setDEF(CString("hanim_l_radiale"));
HAnimSite599.setTranslation(new float[]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor600 =  TouchSensor();
TouchSensor600.setDescription(CString("HAnimSite 69 l_radiale"));
HAnimSite599.addChild(&TouchSensor600);

Shape& Shape601 =  Shape();
Shape601.setUSE(CString("HAnimSiteShape"));
HAnimSite599.addChild(&Shape601);

Billboard& Billboard602 =  Billboard();
Shape& Shape603 =  Shape();
Text& Text604 =  Text();
Text604.setString(new CString[]{CString("69")}, 1);
CFontStyle& FontStyle605 =  CFontStyle();
FontStyle605.setSize(0.035);
Text604.setFontStyle(&FontStyle605);

Shape603.setGeometry(&Text604);

Billboard602.addChild(&Shape603);

HAnimSite599.addChild(Billboard602);

HAnimSegment570.addChild(&HAnimSite599);

HAnimJoint569.addChildren(&HAnimSegment570);

HAnimJoint& HAnimJoint606 =  HAnimJoint();
HAnimJoint606.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint606.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint606.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimJoint606.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint606.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint569.addChildren(&HAnimJoint606);

HAnimJoint546.addChildren(&HAnimJoint569);

HAnimJoint325.addChildren(&HAnimJoint546);

HAnimJoint& HAnimJoint607 =  HAnimJoint();
HAnimJoint607.X3DNode::setName(CString("r_shoulder"));
HAnimJoint607.setDEF(CString("hanim_r_shoulder"));
HAnimJoint607.setCenter(new float[]{-0.1907,1.4407,-0.0325});
HAnimJoint607.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint607.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment608 =  HAnimSegment();
HAnimSegment608.X3DNode::setName(CString("r_upperarm"));
HAnimSegment608.setDEF(CString("hanim_r_upperarm"));
Transform& Transform609 =  Transform();
Transform609.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Transform& Transform610 =  Transform();
//Empty Transform
Shape& Shape611 =  Shape();
Shape611.setUSE(CString("HAnimJointShape"));
Transform610.addChild(&Shape611);

Transform609.addChild(&Transform610);

HAnimSegment608.addChild(&Transform609);

Shape& Shape612 =  Shape();
LineSet& LineSet613 =  LineSet();
LineSet613.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate614 =  Coordinate();
Coordinate614.setPoint(new float[]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet613.setCoord(Coordinate614);

//from r_shoulder to r_elbow vertices 2
ColorRGBA& ColorRGBA615 =  ColorRGBA();
ColorRGBA615.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet613.addChild(&ColorRGBA615);

Shape612.setGeometry(&LineSet613);

HAnimSegment608.addChild(&Shape612);

HAnimSite& HAnimSite616 =  HAnimSite();
HAnimSite616.X3DNode::setName(CString("r_bideltoid"));
HAnimSite616.setDEF(CString("hanim_r_bideltoid"));
TouchSensor& TouchSensor617 =  TouchSensor();
TouchSensor617.setDescription(CString("HAnimSite 97 r_bideltoid"));
HAnimSite616.addChild(&TouchSensor617);

Shape& Shape618 =  Shape();
Shape618.setUSE(CString("HAnimSiteShape"));
HAnimSite616.addChild(&Shape618);

Billboard& Billboard619 =  Billboard();
Shape& Shape620 =  Shape();
Text& Text621 =  Text();
Text621.setString(new CString[]{CString("97")}, 1);
CFontStyle& FontStyle622 =  CFontStyle();
FontStyle622.setSize(0.035);
Text621.setFontStyle(&FontStyle622);

Shape620.setGeometry(&Text621);

Billboard619.addChild(&Shape620);

HAnimSite616.addChild(Billboard619);

HAnimSegment608.addChild(&HAnimSite616);

HAnimSite& HAnimSite623 =  HAnimSite();
HAnimSite623.X3DNode::setName(CString("r_humeral_lateral_epicondyles"));
HAnimSite623.setDEF(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimSite623.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor624 =  TouchSensor();
TouchSensor624.setDescription(CString("HAnimSite 66 r_humeral_lateral_epicondyles"));
HAnimSite623.addChild(&TouchSensor624);

Shape& Shape625 =  Shape();
Shape625.setUSE(CString("HAnimSiteShape"));
HAnimSite623.addChild(&Shape625);

Billboard& Billboard626 =  Billboard();
Shape& Shape627 =  Shape();
Text& Text628 =  Text();
Text628.setString(new CString[]{CString("66")}, 1);
CFontStyle& FontStyle629 =  CFontStyle();
FontStyle629.setSize(0.035);
Text628.setFontStyle(&FontStyle629);

Shape627.setGeometry(&Text628);

Billboard626.addChild(&Shape627);

HAnimSite623.addChild(Billboard626);

HAnimSegment608.addChild(&HAnimSite623);

HAnimJoint607.addChildren(&HAnimSegment608);

HAnimJoint& HAnimJoint630 =  HAnimJoint();
HAnimJoint630.X3DNode::setName(CString("r_elbow"));
HAnimJoint630.setDEF(CString("hanim_r_elbow"));
HAnimJoint630.setCenter(new float[]{-0.1949,1.1388,-0.062});
HAnimJoint630.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint630.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment631 =  HAnimSegment();
HAnimSegment631.X3DNode::setName(CString("r_forearm"));
HAnimSegment631.setDEF(CString("hanim_r_forearm"));
Transform& Transform632 =  Transform();
Transform632.setTranslation(new float[]{-0.1949,1.1388,-0.062});
Transform& Transform633 =  Transform();
//Empty Transform
Shape& Shape634 =  Shape();
Shape634.setUSE(CString("HAnimJointShape"));
Transform633.addChild(&Shape634);

Transform632.addChild(&Transform633);

HAnimSegment631.addChild(&Transform632);

Shape& Shape635 =  Shape();
LineSet& LineSet636 =  LineSet();
LineSet636.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate637 =  Coordinate();
Coordinate637.setPoint(new float[]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet636.setCoord(Coordinate637);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA& ColorRGBA638 =  ColorRGBA();
ColorRGBA638.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet636.addChild(&ColorRGBA638);

Shape635.setGeometry(&LineSet636);

HAnimSegment631.addChild(&Shape635);

HAnimSite& HAnimSite639 =  HAnimSite();
HAnimSite639.X3DNode::setName(CString("r_humeral_medial_epicondyles"));
HAnimSite639.setDEF(CString("hanim_r_humeral_medial_epicondyles"));
HAnimSite639.setTranslation(new float[]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor640 =  TouchSensor();
TouchSensor640.setDescription(CString("HAnimSite 67 r_humeral_medial_epicondyles"));
HAnimSite639.addChild(&TouchSensor640);

Shape& Shape641 =  Shape();
Shape641.setUSE(CString("HAnimSiteShape"));
HAnimSite639.addChild(&Shape641);

Billboard& Billboard642 =  Billboard();
Shape& Shape643 =  Shape();
Text& Text644 =  Text();
Text644.setString(new CString[]{CString("67")}, 1);
CFontStyle& FontStyle645 =  CFontStyle();
FontStyle645.setSize(0.035);
Text644.setFontStyle(&FontStyle645);

Shape643.setGeometry(&Text644);

Billboard642.addChild(&Shape643);

HAnimSite639.addChild(Billboard642);

HAnimSegment631.addChild(&HAnimSite639);

HAnimSite& HAnimSite646 =  HAnimSite();
HAnimSite646.X3DNode::setName(CString("r_olecranon"));
HAnimSite646.setDEF(CString("hanim_r_olecranon"));
HAnimSite646.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor647 =  TouchSensor();
TouchSensor647.setDescription(CString("HAnimSite 68 r_olecranon"));
HAnimSite646.addChild(&TouchSensor647);

Shape& Shape648 =  Shape();
Shape648.setUSE(CString("HAnimSiteShape"));
HAnimSite646.addChild(&Shape648);

Billboard& Billboard649 =  Billboard();
Shape& Shape650 =  Shape();
Text& Text651 =  Text();
Text651.setString(new CString[]{CString("68")}, 1);
CFontStyle& FontStyle652 =  CFontStyle();
FontStyle652.setSize(0.035);
Text651.setFontStyle(&FontStyle652);

Shape650.setGeometry(&Text651);

Billboard649.addChild(&Shape650);

HAnimSite646.addChild(Billboard649);

HAnimSegment631.addChild(&HAnimSite646);

HAnimSite& HAnimSite653 =  HAnimSite();
HAnimSite653.X3DNode::setName(CString("r_radial_styloid"));
HAnimSite653.setDEF(CString("hanim_r_radial_styloid"));
HAnimSite653.setTranslation(new float[]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor654 =  TouchSensor();
TouchSensor654.setDescription(CString("HAnimSite 74 r_radial_styloid"));
HAnimSite653.addChild(&TouchSensor654);

Shape& Shape655 =  Shape();
Shape655.setUSE(CString("HAnimSiteShape"));
HAnimSite653.addChild(&Shape655);

Billboard& Billboard656 =  Billboard();
Shape& Shape657 =  Shape();
Text& Text658 =  Text();
Text658.setString(new CString[]{CString("74")}, 1);
CFontStyle& FontStyle659 =  CFontStyle();
FontStyle659.setSize(0.035);
Text658.setFontStyle(&FontStyle659);

Shape657.setGeometry(&Text658);

Billboard656.addChild(&Shape657);

HAnimSite653.addChild(Billboard656);

HAnimSegment631.addChild(&HAnimSite653);

HAnimSite& HAnimSite660 =  HAnimSite();
HAnimSite660.X3DNode::setName(CString("r_radiale"));
HAnimSite660.setDEF(CString("hanim_r_radiale"));
HAnimSite660.setTranslation(new float[]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor661 =  TouchSensor();
TouchSensor661.setDescription(CString("HAnimSite 72 r_radiale"));
HAnimSite660.addChild(&TouchSensor661);

Shape& Shape662 =  Shape();
Shape662.setUSE(CString("HAnimSiteShape"));
HAnimSite660.addChild(&Shape662);

Billboard& Billboard663 =  Billboard();
Shape& Shape664 =  Shape();
Text& Text665 =  Text();
Text665.setString(new CString[]{CString("72")}, 1);
CFontStyle& FontStyle666 =  CFontStyle();
FontStyle666.setSize(0.035);
Text665.setFontStyle(&FontStyle666);

Shape664.setGeometry(&Text665);

Billboard663.addChild(&Shape664);

HAnimSite660.addChild(Billboard663);

HAnimSegment631.addChild(&HAnimSite660);

HAnimJoint630.addChildren(&HAnimSegment631);

HAnimJoint& HAnimJoint667 =  HAnimJoint();
HAnimJoint667.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint667.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint667.setCenter(new float[]{-0.1959,0.8694,-0.0521});
HAnimJoint667.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint667.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint630.addChildren(&HAnimJoint667);

HAnimJoint607.addChildren(&HAnimJoint630);

HAnimJoint325.addChildren(&HAnimJoint607);

HAnimJoint47.addChildren(&HAnimJoint325);

HAnimHumanoid38.setSkeleton(&HAnimJoint47);

HAnimJoint& HAnimJoint668 =  HAnimJoint();
HAnimJoint668.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid38.setJoints(&HAnimJoint668);

HAnimJoint& HAnimJoint669 =  HAnimJoint();
HAnimJoint669.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid38.setJoints(&HAnimJoint669);

HAnimJoint& HAnimJoint670 =  HAnimJoint();
HAnimJoint670.setUSE(CString("hanim_l_hip"));
HAnimHumanoid38.setJoints(&HAnimJoint670);

HAnimJoint& HAnimJoint671 =  HAnimJoint();
HAnimJoint671.setUSE(CString("hanim_l_knee"));
HAnimHumanoid38.setJoints(&HAnimJoint671);

HAnimJoint& HAnimJoint672 =  HAnimJoint();
HAnimJoint672.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid38.setJoints(&HAnimJoint672);

HAnimJoint& HAnimJoint673 =  HAnimJoint();
HAnimJoint673.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint673);

HAnimJoint& HAnimJoint674 =  HAnimJoint();
HAnimJoint674.setUSE(CString("hanim_r_hip"));
HAnimHumanoid38.setJoints(&HAnimJoint674);

HAnimJoint& HAnimJoint675 =  HAnimJoint();
HAnimJoint675.setUSE(CString("hanim_r_knee"));
HAnimHumanoid38.setJoints(&HAnimJoint675);

HAnimJoint& HAnimJoint676 =  HAnimJoint();
HAnimJoint676.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid38.setJoints(&HAnimJoint676);

HAnimJoint& HAnimJoint677 =  HAnimJoint();
HAnimJoint677.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint677);

HAnimJoint& HAnimJoint678 =  HAnimJoint();
HAnimJoint678.setUSE(CString("hanim_vl5"));
HAnimHumanoid38.setJoints(&HAnimJoint678);

HAnimJoint& HAnimJoint679 =  HAnimJoint();
HAnimJoint679.setUSE(CString("hanim_skullbase"));
HAnimHumanoid38.setJoints(&HAnimJoint679);

HAnimJoint& HAnimJoint680 =  HAnimJoint();
HAnimJoint680.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid38.setJoints(&HAnimJoint680);

HAnimJoint& HAnimJoint681 =  HAnimJoint();
HAnimJoint681.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid38.setJoints(&HAnimJoint681);

HAnimJoint& HAnimJoint682 =  HAnimJoint();
HAnimJoint682.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid38.setJoints(&HAnimJoint682);

HAnimJoint& HAnimJoint683 =  HAnimJoint();
HAnimJoint683.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid38.setJoints(&HAnimJoint683);

HAnimJoint& HAnimJoint684 =  HAnimJoint();
HAnimJoint684.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid38.setJoints(&HAnimJoint684);

HAnimJoint& HAnimJoint685 =  HAnimJoint();
HAnimJoint685.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid38.setJoints(&HAnimJoint685);

HAnimSegment& HAnimSegment686 =  HAnimSegment();
HAnimSegment686.setUSE(CString("hanim_sacrum"));
HAnimHumanoid38.setSegments(&HAnimSegment686);

HAnimSegment& HAnimSegment687 =  HAnimSegment();
HAnimSegment687.setUSE(CString("hanim_pelvis"));
HAnimHumanoid38.setSegments(&HAnimSegment687);

HAnimSegment& HAnimSegment688 =  HAnimSegment();
HAnimSegment688.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid38.setSegments(&HAnimSegment688);

HAnimSegment& HAnimSegment689 =  HAnimSegment();
HAnimSegment689.setUSE(CString("hanim_l_calf"));
HAnimHumanoid38.setSegments(&HAnimSegment689);

HAnimSegment& HAnimSegment690 =  HAnimSegment();
HAnimSegment690.setUSE(CString("hanim_l_talus"));
HAnimHumanoid38.setSegments(&HAnimSegment690);

HAnimSegment& HAnimSegment691 =  HAnimSegment();
HAnimSegment691.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid38.setSegments(&HAnimSegment691);

HAnimSegment& HAnimSegment692 =  HAnimSegment();
HAnimSegment692.setUSE(CString("hanim_r_calf"));
HAnimHumanoid38.setSegments(&HAnimSegment692);

HAnimSegment& HAnimSegment693 =  HAnimSegment();
HAnimSegment693.setUSE(CString("hanim_r_talus"));
HAnimHumanoid38.setSegments(&HAnimSegment693);

HAnimSegment& HAnimSegment694 =  HAnimSegment();
HAnimSegment694.setUSE(CString("hanim_l5"));
HAnimHumanoid38.setSegments(&HAnimSegment694);

HAnimSegment& HAnimSegment695 =  HAnimSegment();
HAnimSegment695.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid38.setSegments(&HAnimSegment695);

HAnimSegment& HAnimSegment696 =  HAnimSegment();
HAnimSegment696.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid38.setSegments(&HAnimSegment696);

HAnimSegment& HAnimSegment697 =  HAnimSegment();
HAnimSegment697.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid38.setSegments(&HAnimSegment697);

HAnimSegment& HAnimSegment698 =  HAnimSegment();
HAnimSegment698.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid38.setSegments(&HAnimSegment698);

HAnimSite& HAnimSite699 =  HAnimSite();
HAnimSite699.setUSE(CString("hanim_buttocks_standing_wall_contact_point"));
HAnimHumanoid38.setSites(&HAnimSite699);

HAnimSite& HAnimSite700 =  HAnimSite();
HAnimSite700.setUSE(CString("hanim_crotch"));
HAnimHumanoid38.setSites(&HAnimSite700);

HAnimSite& HAnimSite701 =  HAnimSite();
HAnimSite701.setUSE(CString("hanim_l_asis"));
HAnimHumanoid38.setSites(&HAnimSite701);

HAnimSite& HAnimSite702 =  HAnimSite();
HAnimSite702.setUSE(CString("hanim_l_iliocristale"));
HAnimHumanoid38.setSites(&HAnimSite702);

HAnimSite& HAnimSite703 =  HAnimSite();
HAnimSite703.setUSE(CString("hanim_l_psis"));
HAnimHumanoid38.setSites(&HAnimSite703);

HAnimSite& HAnimSite704 =  HAnimSite();
HAnimSite704.setUSE(CString("hanim_l_trochanterion"));
HAnimHumanoid38.setSites(&HAnimSite704);

HAnimSite& HAnimSite705 =  HAnimSite();
HAnimSite705.setUSE(CString("hanim_r_asis"));
HAnimHumanoid38.setSites(&HAnimSite705);

HAnimSite& HAnimSite706 =  HAnimSite();
HAnimSite706.setUSE(CString("hanim_r_iliocristale"));
HAnimHumanoid38.setSites(&HAnimSite706);

HAnimSite& HAnimSite707 =  HAnimSite();
HAnimSite707.setUSE(CString("hanim_r_psis"));
HAnimHumanoid38.setSites(&HAnimSite707);

HAnimSite& HAnimSite708 =  HAnimSite();
HAnimSite708.setUSE(CString("hanim_r_trochanterion"));
HAnimHumanoid38.setSites(&HAnimSite708);

HAnimSite& HAnimSite709 =  HAnimSite();
HAnimSite709.setUSE(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite709);

HAnimSite& HAnimSite710 =  HAnimSite();
HAnimSite710.setUSE(CString("hanim_l_femoral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite710);

HAnimSite& HAnimSite711 =  HAnimSite();
HAnimSite711.setUSE(CString("hanim_l_knee_crease"));
HAnimHumanoid38.setSites(&HAnimSite711);

HAnimSite& HAnimSite712 =  HAnimSite();
HAnimSite712.setUSE(CString("hanim_l_suprapatella"));
HAnimHumanoid38.setSites(&HAnimSite712);

HAnimSite& HAnimSite713 =  HAnimSite();
HAnimSite713.setUSE(CString("hanim_l_lateral_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite713);

HAnimSite& HAnimSite714 =  HAnimSite();
HAnimSite714.setUSE(CString("hanim_l_medial_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite714);

HAnimSite& HAnimSite715 =  HAnimSite();
HAnimSite715.setUSE(CString("hanim_l_tibiale"));
HAnimHumanoid38.setSites(&HAnimSite715);

HAnimSite& HAnimSite716 =  HAnimSite();
HAnimSite716.setUSE(CString("hanim_l_calcaneus_posterior"));
HAnimHumanoid38.setSites(&HAnimSite716);

HAnimSite& HAnimSite717 =  HAnimSite();
HAnimSite717.setUSE(CString("hanim_l_sphyrion"));
HAnimHumanoid38.setSites(&HAnimSite717);

HAnimSite& HAnimSite718 =  HAnimSite();
HAnimSite718.setUSE(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite718);

HAnimSite& HAnimSite719 =  HAnimSite();
HAnimSite719.setUSE(CString("hanim_r_femoral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite719);

HAnimSite& HAnimSite720 =  HAnimSite();
HAnimSite720.setUSE(CString("hanim_r_knee_crease"));
HAnimHumanoid38.setSites(&HAnimSite720);

HAnimSite& HAnimSite721 =  HAnimSite();
HAnimSite721.setUSE(CString("hanim_r_suprapatella"));
HAnimHumanoid38.setSites(&HAnimSite721);

HAnimSite& HAnimSite722 =  HAnimSite();
HAnimSite722.setUSE(CString("hanim_r_lateral_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite722);

HAnimSite& HAnimSite723 =  HAnimSite();
HAnimSite723.setUSE(CString("hanim_r_medial_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite723);

HAnimSite& HAnimSite724 =  HAnimSite();
HAnimSite724.setUSE(CString("hanim_r_tibiale"));
HAnimHumanoid38.setSites(&HAnimSite724);

HAnimSite& HAnimSite725 =  HAnimSite();
HAnimSite725.setUSE(CString("hanim_r_calcaneus_posterior"));
HAnimHumanoid38.setSites(&HAnimSite725);

HAnimSite& HAnimSite726 =  HAnimSite();
HAnimSite726.setUSE(CString("hanim_r_sphyrion"));
HAnimHumanoid38.setSites(&HAnimSite726);

HAnimSite& HAnimSite727 =  HAnimSite();
HAnimSite727.setUSE(CString("hanim_adams_apple"));
HAnimHumanoid38.setSites(&HAnimSite727);

HAnimSite& HAnimSite728 =  HAnimSite();
HAnimSite728.setUSE(CString("hanim_cervicale"));
HAnimHumanoid38.setSites(&HAnimSite728);

HAnimSite& HAnimSite729 =  HAnimSite();
HAnimSite729.setUSE(CString("hanim_l_acromion"));
HAnimHumanoid38.setSites(&HAnimSite729);

HAnimSite& HAnimSite730 =  HAnimSite();
HAnimSite730.setUSE(CString("hanim_l_axilla_distal"));
HAnimHumanoid38.setSites(&HAnimSite730);

HAnimSite& HAnimSite731 =  HAnimSite();
HAnimSite731.setUSE(CString("hanim_l_axilla_posterior_folds"));
HAnimHumanoid38.setSites(&HAnimSite731);

HAnimSite& HAnimSite732 =  HAnimSite();
HAnimSite732.setUSE(CString("hanim_l_axilla_proximal"));
HAnimHumanoid38.setSites(&HAnimSite732);

HAnimSite& HAnimSite733 =  HAnimSite();
HAnimSite733.setUSE(CString("hanim_l_chest_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite733);

HAnimSite& HAnimSite734 =  HAnimSite();
HAnimSite734.setUSE(CString("hanim_l_clavicale"));
HAnimHumanoid38.setSites(&HAnimSite734);

HAnimSite& HAnimSite735 =  HAnimSite();
HAnimSite735.setUSE(CString("hanim_l_neck_base"));
HAnimHumanoid38.setSites(&HAnimSite735);

HAnimSite& HAnimSite736 =  HAnimSite();
HAnimSite736.setUSE(CString("hanim_l_rib10"));
HAnimHumanoid38.setSites(&HAnimSite736);

HAnimSite& HAnimSite737 =  HAnimSite();
HAnimSite737.setUSE(CString("hanim_l_thelion"));
HAnimHumanoid38.setSites(&HAnimSite737);

HAnimSite& HAnimSite738 =  HAnimSite();
HAnimSite738.setUSE(CString("hanim_mesosternale"));
HAnimHumanoid38.setSites(&HAnimSite738);

HAnimSite& HAnimSite739 =  HAnimSite();
HAnimSite739.setUSE(CString("hanim_navel"));
HAnimHumanoid38.setSites(&HAnimSite739);

HAnimSite& HAnimSite740 =  HAnimSite();
HAnimSite740.setUSE(CString("hanim_r_acromion"));
HAnimHumanoid38.setSites(&HAnimSite740);

HAnimSite& HAnimSite741 =  HAnimSite();
HAnimSite741.setUSE(CString("hanim_r_axilla_distal"));
HAnimHumanoid38.setSites(&HAnimSite741);

HAnimSite& HAnimSite742 =  HAnimSite();
HAnimSite742.setUSE(CString("hanim_r_axilla_posterior_folds"));
HAnimHumanoid38.setSites(&HAnimSite742);

HAnimSite& HAnimSite743 =  HAnimSite();
HAnimSite743.setUSE(CString("hanim_r_axilla_proximal"));
HAnimHumanoid38.setSites(&HAnimSite743);

HAnimSite& HAnimSite744 =  HAnimSite();
HAnimSite744.setUSE(CString("hanim_r_chest_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite744);

HAnimSite& HAnimSite745 =  HAnimSite();
HAnimSite745.setUSE(CString("hanim_r_clavicale"));
HAnimHumanoid38.setSites(&HAnimSite745);

HAnimSite& HAnimSite746 =  HAnimSite();
HAnimSite746.setUSE(CString("hanim_r_neck_base"));
HAnimHumanoid38.setSites(&HAnimSite746);

HAnimSite& HAnimSite747 =  HAnimSite();
HAnimSite747.setUSE(CString("hanim_r_rib10"));
HAnimHumanoid38.setSites(&HAnimSite747);

HAnimSite& HAnimSite748 =  HAnimSite();
HAnimSite748.setUSE(CString("hanim_r_thelion"));
HAnimHumanoid38.setSites(&HAnimSite748);

HAnimSite& HAnimSite749 =  HAnimSite();
HAnimSite749.setUSE(CString("hanim_rear_center_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite749);

HAnimSite& HAnimSite750 =  HAnimSite();
HAnimSite750.setUSE(CString("hanim_spine_1_middle_back"));
HAnimHumanoid38.setSites(&HAnimSite750);

HAnimSite& HAnimSite751 =  HAnimSite();
HAnimSite751.setUSE(CString("hanim_spine_2_middle_back"));
HAnimHumanoid38.setSites(&HAnimSite751);

HAnimSite& HAnimSite752 =  HAnimSite();
HAnimSite752.setUSE(CString("hanim_substernale"));
HAnimHumanoid38.setSites(&HAnimSite752);

HAnimSite& HAnimSite753 =  HAnimSite();
HAnimSite753.setUSE(CString("hanim_suprasternale"));
HAnimHumanoid38.setSites(&HAnimSite753);

HAnimSite& HAnimSite754 =  HAnimSite();
HAnimSite754.setUSE(CString("hanim_waist_preferred_anterior"));
HAnimHumanoid38.setSites(&HAnimSite754);

HAnimSite& HAnimSite755 =  HAnimSite();
HAnimSite755.setUSE(CString("hanim_waist_preferred_posterior"));
HAnimHumanoid38.setSites(&HAnimSite755);

HAnimSite& HAnimSite756 =  HAnimSite();
HAnimSite756.setUSE(CString("hanim_l_bideltoid"));
HAnimHumanoid38.setSites(&HAnimSite756);

HAnimSite& HAnimSite757 =  HAnimSite();
HAnimSite757.setUSE(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite757);

HAnimSite& HAnimSite758 =  HAnimSite();
HAnimSite758.setUSE(CString("hanim_l_humeral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite758);

HAnimSite& HAnimSite759 =  HAnimSite();
HAnimSite759.setUSE(CString("hanim_l_olecranon"));
HAnimHumanoid38.setSites(&HAnimSite759);

HAnimSite& HAnimSite760 =  HAnimSite();
HAnimSite760.setUSE(CString("hanim_l_radial_styloid"));
HAnimHumanoid38.setSites(&HAnimSite760);

HAnimSite& HAnimSite761 =  HAnimSite();
HAnimSite761.setUSE(CString("hanim_l_radiale"));
HAnimHumanoid38.setSites(&HAnimSite761);

HAnimSite& HAnimSite762 =  HAnimSite();
HAnimSite762.setUSE(CString("hanim_r_bideltoid"));
HAnimHumanoid38.setSites(&HAnimSite762);

HAnimSite& HAnimSite763 =  HAnimSite();
HAnimSite763.setUSE(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite763);

HAnimSite& HAnimSite764 =  HAnimSite();
HAnimSite764.setUSE(CString("hanim_r_humeral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite764);

HAnimSite& HAnimSite765 =  HAnimSite();
HAnimSite765.setUSE(CString("hanim_r_olecranon"));
HAnimHumanoid38.setSites(&HAnimSite765);

HAnimSite& HAnimSite766 =  HAnimSite();
HAnimSite766.setUSE(CString("hanim_r_radial_styloid"));
HAnimHumanoid38.setSites(&HAnimSite766);

HAnimSite& HAnimSite767 =  HAnimSite();
HAnimSite767.setUSE(CString("hanim_r_radiale"));
HAnimHumanoid38.setSites(&HAnimSite767);

Scene11.addChild(&HAnimHumanoid38);

X3D0.setScene(&Scene11);

}
