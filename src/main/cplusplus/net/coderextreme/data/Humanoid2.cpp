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
meta3.setContent(CString("Humanoid2.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("identifier"));
meta4.setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d"));
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
Coordinate217.setPoint(new float[]{0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608}, 6);
LineSet216.setCoord(Coordinate217);

//from l_talocrural to l_tarsometatarsal_2 vertices 2
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
HAnimJoint233.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint233.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint233.setCenter(new float[]{0.08,0.0175,-0.0608});
HAnimJoint233.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint233.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment234 =  HAnimSegment();
HAnimSegment234.X3DNode::setName(CString("l_metatarsal_2"));
HAnimSegment234.setDEF(CString("hanim_l_metatarsal_2"));
Transform& Transform235 =  Transform();
Transform235.setTranslation(new float[]{0.08,0.0175,-0.0608});
Transform& Transform236 =  Transform();
//Empty Transform
Shape& Shape237 =  Shape();
Shape237.setUSE(CString("HAnimJointShape"));
Transform236.addChild(&Shape237);

Transform235.addChild(&Transform236);

HAnimSegment234.addChild(&Transform235);

Shape& Shape238 =  Shape();
LineSet& LineSet239 =  LineSet();
LineSet239.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate240 =  Coordinate();
Coordinate240.setPoint(new float[]{0.08,0.0175,-0.0608,0.0824,0.0064,-0.004}, 6);
LineSet239.setCoord(Coordinate240);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA241 =  ColorRGBA();
ColorRGBA241.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet239.addChild(&ColorRGBA241);

Shape238.setGeometry(&LineSet239);

HAnimSegment234.addChild(&Shape238);

HAnimJoint233.addChildren(&HAnimSegment234);

HAnimJoint& HAnimJoint242 =  HAnimJoint();
HAnimJoint242.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint242.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint242.setCenter(new float[]{0.0824,0.0064,-0.004});
HAnimJoint242.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint242.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment243 =  HAnimSegment();
HAnimSegment243.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment243.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform& Transform244 =  Transform();
Transform244.setTranslation(new float[]{0.0824,0.0064,-0.004});
Transform& Transform245 =  Transform();
//Empty Transform
Shape& Shape246 =  Shape();
Shape246.setUSE(CString("HAnimJointShape"));
Transform245.addChild(&Shape246);

Transform244.addChild(&Transform245);

HAnimSegment243.addChild(&Transform244);

Shape& Shape247 =  Shape();
LineSet& LineSet248 =  LineSet();
LineSet248.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate249 =  Coordinate();
Coordinate249.setPoint(new float[]{0.0824,0.0064,-0.004,0.0841,0.0013,0.0216}, 6);
LineSet248.setCoord(Coordinate249);

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA250 =  ColorRGBA();
ColorRGBA250.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet248.addChild(&ColorRGBA250);

Shape247.setGeometry(&LineSet248);

HAnimSegment243.addChild(&Shape247);

HAnimSite& HAnimSite251 =  HAnimSite();
HAnimSite251.X3DNode::setName(CString("l_metatarsal_phalanx_1"));
HAnimSite251.setDEF(CString("hanim_l_metatarsal_phalanx_1"));
TouchSensor& TouchSensor252 =  TouchSensor();
TouchSensor252.setDescription(CString("HAnimSite 55 l_metatarsal_phalanx_1"));
HAnimSite251.addChild(&TouchSensor252);

Shape& Shape253 =  Shape();
Shape253.setUSE(CString("HAnimSiteShape"));
HAnimSite251.addChild(&Shape253);

Billboard& Billboard254 =  Billboard();
Shape& Shape255 =  Shape();
Text& Text256 =  Text();
Text256.setString(new CString[]{CString("55")}, 1);
CFontStyle& FontStyle257 =  CFontStyle();
FontStyle257.setSize(0.035);
Text256.setFontStyle(&FontStyle257);

Shape255.setGeometry(&Text256);

Billboard254.addChild(&Shape255);

HAnimSite251.addChild(Billboard254);

HAnimSegment243.addChild(&HAnimSite251);

HAnimSite& HAnimSite258 =  HAnimSite();
HAnimSite258.X3DNode::setName(CString("l_metatarsal_phalanx_5"));
HAnimSite258.setDEF(CString("hanim_l_metatarsal_phalanx_5"));
TouchSensor& TouchSensor259 =  TouchSensor();
TouchSensor259.setDescription(CString("HAnimSite 56 l_metatarsal_phalanx_5"));
HAnimSite258.addChild(&TouchSensor259);

Shape& Shape260 =  Shape();
Shape260.setUSE(CString("HAnimSiteShape"));
HAnimSite258.addChild(&Shape260);

Billboard& Billboard261 =  Billboard();
Shape& Shape262 =  Shape();
Text& Text263 =  Text();
Text263.setString(new CString[]{CString("56")}, 1);
CFontStyle& FontStyle264 =  CFontStyle();
FontStyle264.setSize(0.035);
Text263.setFontStyle(&FontStyle264);

Shape262.setGeometry(&Text263);

Billboard261.addChild(&Shape262);

HAnimSite258.addChild(Billboard261);

HAnimSegment243.addChild(&HAnimSite258);

HAnimSite& HAnimSite265 =  HAnimSite();
HAnimSite265.X3DNode::setName(CString("l_tarsal_distal_phalanx_1_tip"));
HAnimSite265.setDEF(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor266 =  TouchSensor();
TouchSensor266.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_1_tip"));
HAnimSite265.addChild(&TouchSensor266);

Shape& Shape267 =  Shape();
Shape267.setUSE(CString("HAnimSiteShape"));
HAnimSite265.addChild(&Shape267);

Billboard& Billboard268 =  Billboard();
Shape& Shape269 =  Shape();
Text& Text270 =  Text();
Text270.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle271 =  CFontStyle();
FontStyle271.setSize(0.035);
Text270.setFontStyle(&FontStyle271);

Shape269.setGeometry(&Text270);

Billboard268.addChild(&Shape269);

HAnimSite265.addChild(Billboard268);

HAnimSegment243.addChild(&HAnimSite265);

HAnimSite& HAnimSite272 =  HAnimSite();
HAnimSite272.X3DNode::setName(CString("l_tarsal_distal_phalanx_2_tip"));
HAnimSite272.setDEF(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimSite272.setTranslation(new float[]{0.1195,0.0079,0.1433});
TouchSensor& TouchSensor273 =  TouchSensor();
TouchSensor273.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_2_tip"));
HAnimSite272.addChild(&TouchSensor273);

Shape& Shape274 =  Shape();
Shape274.setUSE(CString("HAnimSiteShape"));
HAnimSite272.addChild(&Shape274);

Billboard& Billboard275 =  Billboard();
Shape& Shape276 =  Shape();
Text& Text277 =  Text();
Text277.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle278 =  CFontStyle();
FontStyle278.setSize(0.035);
Text277.setFontStyle(&FontStyle278);

Shape276.setGeometry(&Text277);

Billboard275.addChild(&Shape276);

HAnimSite272.addChild(Billboard275);

HAnimSegment243.addChild(&HAnimSite272);

HAnimSite& HAnimSite279 =  HAnimSite();
HAnimSite279.X3DNode::setName(CString("l_tarsal_distal_phalanx_3_tip"));
HAnimSite279.setDEF(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor280 =  TouchSensor();
TouchSensor280.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_3_tip"));
HAnimSite279.addChild(&TouchSensor280);

Shape& Shape281 =  Shape();
Shape281.setUSE(CString("HAnimSiteShape"));
HAnimSite279.addChild(&Shape281);

Billboard& Billboard282 =  Billboard();
Shape& Shape283 =  Shape();
Text& Text284 =  Text();
Text284.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle285 =  CFontStyle();
FontStyle285.setSize(0.035);
Text284.setFontStyle(&FontStyle285);

Shape283.setGeometry(&Text284);

Billboard282.addChild(&Shape283);

HAnimSite279.addChild(Billboard282);

HAnimSegment243.addChild(&HAnimSite279);

HAnimSite& HAnimSite286 =  HAnimSite();
HAnimSite286.X3DNode::setName(CString("l_tarsal_distal_phalanx_4_tip"));
HAnimSite286.setDEF(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor287 =  TouchSensor();
TouchSensor287.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_4_tip"));
HAnimSite286.addChild(&TouchSensor287);

Shape& Shape288 =  Shape();
Shape288.setUSE(CString("HAnimSiteShape"));
HAnimSite286.addChild(&Shape288);

Billboard& Billboard289 =  Billboard();
Shape& Shape290 =  Shape();
Text& Text291 =  Text();
Text291.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle292 =  CFontStyle();
FontStyle292.setSize(0.035);
Text291.setFontStyle(&FontStyle292);

Shape290.setGeometry(&Text291);

Billboard289.addChild(&Shape290);

HAnimSite286.addChild(Billboard289);

HAnimSegment243.addChild(&HAnimSite286);

HAnimSite& HAnimSite293 =  HAnimSite();
HAnimSite293.X3DNode::setName(CString("l_tarsal_distal_phalanx_5_tip"));
HAnimSite293.setDEF(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor294 =  TouchSensor();
TouchSensor294.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_5_tip"));
HAnimSite293.addChild(&TouchSensor294);

Shape& Shape295 =  Shape();
Shape295.setUSE(CString("HAnimSiteShape"));
HAnimSite293.addChild(&Shape295);

Billboard& Billboard296 =  Billboard();
Shape& Shape297 =  Shape();
Text& Text298 =  Text();
Text298.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle299 =  CFontStyle();
FontStyle299.setSize(0.035);
Text298.setFontStyle(&FontStyle299);

Shape297.setGeometry(&Text298);

Billboard296.addChild(&Shape297);

HAnimSite293.addChild(Billboard296);

HAnimSegment243.addChild(&HAnimSite293);

HAnimJoint242.addChildren(&HAnimSegment243);

HAnimJoint& HAnimJoint300 =  HAnimJoint();
HAnimJoint300.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint300.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint300.setCenter(new float[]{0.0841,0.0013,0.0216});
HAnimJoint300.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint300.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint242.addChildren(&HAnimJoint300);

HAnimJoint233.addChildren(&HAnimJoint242);

HAnimJoint210.addChildren(&HAnimJoint233);

HAnimJoint180.addChildren(&HAnimJoint210);

HAnimJoint143.addChildren(&HAnimJoint180);

HAnimJoint60.addChildren(&HAnimJoint143);

HAnimJoint& HAnimJoint301 =  HAnimJoint();
HAnimJoint301.X3DNode::setName(CString("r_hip"));
HAnimJoint301.setDEF(CString("hanim_r_hip"));
HAnimJoint301.setCenter(new float[]{-0.095,0.9171,0.0029});
HAnimJoint301.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint301.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment302 =  HAnimSegment();
HAnimSegment302.X3DNode::setName(CString("r_thigh"));
HAnimSegment302.setDEF(CString("hanim_r_thigh"));
Transform& Transform303 =  Transform();
Transform303.setTranslation(new float[]{-0.095,0.9171,0.0029});
Transform& Transform304 =  Transform();
//Empty Transform
Shape& Shape305 =  Shape();
Shape305.setUSE(CString("HAnimJointShape"));
Transform304.addChild(&Shape305);

Transform303.addChild(&Transform304);

HAnimSegment302.addChild(&Transform303);

Shape& Shape306 =  Shape();
LineSet& LineSet307 =  LineSet();
LineSet307.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate308 =  Coordinate();
Coordinate308.setPoint(new float[]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet307.setCoord(Coordinate308);

//from r_hip to r_knee vertices 2
ColorRGBA& ColorRGBA309 =  ColorRGBA();
ColorRGBA309.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet307.addChild(&ColorRGBA309);

Shape306.setGeometry(&LineSet307);

HAnimSegment302.addChild(&Shape306);

HAnimSite& HAnimSite310 =  HAnimSite();
HAnimSite310.X3DNode::setName(CString("r_femoral_lateral_epicondyles"));
HAnimSite310.setDEF(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimSite310.setTranslation(new float[]{-0.1421,0.4992,0.031});
TouchSensor& TouchSensor311 =  TouchSensor();
TouchSensor311.setDescription(CString("HAnimSite 44 r_femoral_lateral_epicondyles"));
HAnimSite310.addChild(&TouchSensor311);

Shape& Shape312 =  Shape();
Shape312.setUSE(CString("HAnimSiteShape"));
HAnimSite310.addChild(&Shape312);

Billboard& Billboard313 =  Billboard();
Shape& Shape314 =  Shape();
Text& Text315 =  Text();
Text315.setString(new CString[]{CString("44")}, 1);
CFontStyle& FontStyle316 =  CFontStyle();
FontStyle316.setSize(0.035);
Text315.setFontStyle(&FontStyle316);

Shape314.setGeometry(&Text315);

Billboard313.addChild(&Shape314);

HAnimSite310.addChild(Billboard313);

HAnimSegment302.addChild(&HAnimSite310);

HAnimSite& HAnimSite317 =  HAnimSite();
HAnimSite317.X3DNode::setName(CString("r_femoral_medial_epicondyles"));
HAnimSite317.setDEF(CString("hanim_r_femoral_medial_epicondyles"));
HAnimSite317.setTranslation(new float[]{-0.0221,0.5014,0.0289});
TouchSensor& TouchSensor318 =  TouchSensor();
TouchSensor318.setDescription(CString("HAnimSite 43 r_femoral_medial_epicondyles"));
HAnimSite317.addChild(&TouchSensor318);

Shape& Shape319 =  Shape();
Shape319.setUSE(CString("HAnimSiteShape"));
HAnimSite317.addChild(&Shape319);

Billboard& Billboard320 =  Billboard();
Shape& Shape321 =  Shape();
Text& Text322 =  Text();
Text322.setString(new CString[]{CString("43")}, 1);
CFontStyle& FontStyle323 =  CFontStyle();
FontStyle323.setSize(0.035);
Text322.setFontStyle(&FontStyle323);

Shape321.setGeometry(&Text322);

Billboard320.addChild(&Shape321);

HAnimSite317.addChild(Billboard320);

HAnimSegment302.addChild(&HAnimSite317);

HAnimSite& HAnimSite324 =  HAnimSite();
HAnimSite324.X3DNode::setName(CString("r_knee_crease"));
HAnimSite324.setDEF(CString("hanim_r_knee_crease"));
HAnimSite324.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
TouchSensor& TouchSensor325 =  TouchSensor();
TouchSensor325.setDescription(CString("HAnimSite 91 r_knee_crease"));
HAnimSite324.addChild(&TouchSensor325);

Shape& Shape326 =  Shape();
Shape326.setUSE(CString("HAnimSiteShape"));
HAnimSite324.addChild(&Shape326);

Billboard& Billboard327 =  Billboard();
Shape& Shape328 =  Shape();
Text& Text329 =  Text();
Text329.setString(new CString[]{CString("91")}, 1);
CFontStyle& FontStyle330 =  CFontStyle();
FontStyle330.setSize(0.035);
Text329.setFontStyle(&FontStyle330);

Shape328.setGeometry(&Text329);

Billboard327.addChild(&Shape328);

HAnimSite324.addChild(Billboard327);

HAnimSegment302.addChild(&HAnimSite324);

HAnimSite& HAnimSite331 =  HAnimSite();
HAnimSite331.X3DNode::setName(CString("r_suprapatella"));
HAnimSite331.setDEF(CString("hanim_r_suprapatella"));
TouchSensor& TouchSensor332 =  TouchSensor();
TouchSensor332.setDescription(CString("HAnimSite 45 r_suprapatella"));
HAnimSite331.addChild(&TouchSensor332);

Shape& Shape333 =  Shape();
Shape333.setUSE(CString("HAnimSiteShape"));
HAnimSite331.addChild(&Shape333);

Billboard& Billboard334 =  Billboard();
Shape& Shape335 =  Shape();
Text& Text336 =  Text();
Text336.setString(new CString[]{CString("45")}, 1);
CFontStyle& FontStyle337 =  CFontStyle();
FontStyle337.setSize(0.035);
Text336.setFontStyle(&FontStyle337);

Shape335.setGeometry(&Text336);

Billboard334.addChild(&Shape335);

HAnimSite331.addChild(Billboard334);

HAnimSegment302.addChild(&HAnimSite331);

HAnimJoint301.addChildren(&HAnimSegment302);

HAnimJoint& HAnimJoint338 =  HAnimJoint();
HAnimJoint338.X3DNode::setName(CString("r_knee"));
HAnimJoint338.setDEF(CString("hanim_r_knee"));
HAnimJoint338.setCenter(new float[]{-0.0867,0.4913,0.0318});
HAnimJoint338.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint338.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment339 =  HAnimSegment();
HAnimSegment339.X3DNode::setName(CString("r_calf"));
HAnimSegment339.setDEF(CString("hanim_r_calf"));
Transform& Transform340 =  Transform();
Transform340.setTranslation(new float[]{-0.0867,0.4913,0.0318});
Transform& Transform341 =  Transform();
//Empty Transform
Shape& Shape342 =  Shape();
Shape342.setUSE(CString("HAnimJointShape"));
Transform341.addChild(&Shape342);

Transform340.addChild(&Transform341);

HAnimSegment339.addChild(&Transform340);

Shape& Shape343 =  Shape();
LineSet& LineSet344 =  LineSet();
LineSet344.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate345 =  Coordinate();
Coordinate345.setPoint(new float[]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet344.setCoord(Coordinate345);

//from r_knee to r_talocrural vertices 2
ColorRGBA& ColorRGBA346 =  ColorRGBA();
ColorRGBA346.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet344.addChild(&ColorRGBA346);

Shape343.setGeometry(&LineSet344);

HAnimSegment339.addChild(&Shape343);

HAnimSite& HAnimSite347 =  HAnimSite();
HAnimSite347.X3DNode::setName(CString("r_lateral_malleolus"));
HAnimSite347.setDEF(CString("hanim_r_lateral_malleolus"));
HAnimSite347.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
TouchSensor& TouchSensor348 =  TouchSensor();
TouchSensor348.setDescription(CString("HAnimSite 53 r_lateral_malleolus"));
HAnimSite347.addChild(&TouchSensor348);

Shape& Shape349 =  Shape();
Shape349.setUSE(CString("HAnimSiteShape"));
HAnimSite347.addChild(&Shape349);

Billboard& Billboard350 =  Billboard();
Shape& Shape351 =  Shape();
Text& Text352 =  Text();
Text352.setString(new CString[]{CString("53")}, 1);
CFontStyle& FontStyle353 =  CFontStyle();
FontStyle353.setSize(0.035);
Text352.setFontStyle(&FontStyle353);

Shape351.setGeometry(&Text352);

Billboard350.addChild(&Shape351);

HAnimSite347.addChild(Billboard350);

HAnimSegment339.addChild(&HAnimSite347);

HAnimSite& HAnimSite354 =  HAnimSite();
HAnimSite354.X3DNode::setName(CString("r_medial_malleolus"));
HAnimSite354.setDEF(CString("hanim_r_medial_malleolus"));
HAnimSite354.setTranslation(new float[]{-0.0591,0.076,-0.0928});
TouchSensor& TouchSensor355 =  TouchSensor();
TouchSensor355.setDescription(CString("HAnimSite 52 r_medial_malleolus"));
HAnimSite354.addChild(&TouchSensor355);

Shape& Shape356 =  Shape();
Shape356.setUSE(CString("HAnimSiteShape"));
HAnimSite354.addChild(&Shape356);

Billboard& Billboard357 =  Billboard();
Shape& Shape358 =  Shape();
Text& Text359 =  Text();
Text359.setString(new CString[]{CString("52")}, 1);
CFontStyle& FontStyle360 =  CFontStyle();
FontStyle360.setSize(0.035);
Text359.setFontStyle(&FontStyle360);

Shape358.setGeometry(&Text359);

Billboard357.addChild(&Shape358);

HAnimSite354.addChild(Billboard357);

HAnimSegment339.addChild(&HAnimSite354);

HAnimSite& HAnimSite361 =  HAnimSite();
HAnimSite361.X3DNode::setName(CString("r_tibiale"));
HAnimSite361.setDEF(CString("hanim_r_tibiale"));
TouchSensor& TouchSensor362 =  TouchSensor();
TouchSensor362.setDescription(CString("HAnimSite 51 r_tibiale"));
HAnimSite361.addChild(&TouchSensor362);

Shape& Shape363 =  Shape();
Shape363.setUSE(CString("HAnimSiteShape"));
HAnimSite361.addChild(&Shape363);

Billboard& Billboard364 =  Billboard();
Shape& Shape365 =  Shape();
Text& Text366 =  Text();
Text366.setString(new CString[]{CString("51")}, 1);
CFontStyle& FontStyle367 =  CFontStyle();
FontStyle367.setSize(0.035);
Text366.setFontStyle(&FontStyle367);

Shape365.setGeometry(&Text366);

Billboard364.addChild(&Shape365);

HAnimSite361.addChild(Billboard364);

HAnimSegment339.addChild(&HAnimSite361);

HAnimJoint338.addChildren(&HAnimSegment339);

HAnimJoint& HAnimJoint368 =  HAnimJoint();
HAnimJoint368.X3DNode::setName(CString("r_talocrural"));
HAnimJoint368.setDEF(CString("hanim_r_talocrural"));
HAnimJoint368.setCenter(new float[]{-0.0801,0.0712,-0.0766});
HAnimJoint368.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint368.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment369 =  HAnimSegment();
HAnimSegment369.X3DNode::setName(CString("r_talus"));
HAnimSegment369.setDEF(CString("hanim_r_talus"));
Transform& Transform370 =  Transform();
Transform370.setScale(new float[]{0.15,0.15,0.15});
Transform370.setTranslation(new float[]{-0.05,0.06,-0.025});
Transform370.setRotation(new float[]{1,0,0,-1.57});
//Transform right foot
Transform& Transform371 =  Transform();
//Empty Transform right foot
Shape& Shape372 =  Shape();
Shape372.setUSE(CString("HAnimJointShape"));
Transform371.addChild(&Shape372);

Transform370.addChild(&Transform371);

HAnimSegment369.addChild(&Transform370);

Shape& Shape373 =  Shape();
LineSet& LineSet374 =  LineSet();
LineSet374.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate375 =  Coordinate();
Coordinate375.setPoint(new float[]{-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608}, 6);
LineSet374.setCoord(Coordinate375);

//from r_talocrural to r_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA376 =  ColorRGBA();
ColorRGBA376.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet374.addChild(&ColorRGBA376);

Shape373.setGeometry(&LineSet374);

HAnimSegment369.addChild(&Shape373);

HAnimSite& HAnimSite377 =  HAnimSite();
HAnimSite377.X3DNode::setName(CString("r_calcaneus_posterior"));
HAnimSite377.setDEF(CString("hanim_r_calcaneus_posterior"));
HAnimSite377.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
TouchSensor& TouchSensor378 =  TouchSensor();
TouchSensor378.setDescription(CString("HAnimSite 62 r_calcaneus_posterior"));
HAnimSite377.addChild(&TouchSensor378);

Shape& Shape379 =  Shape();
Shape379.setUSE(CString("HAnimSiteShape"));
HAnimSite377.addChild(&Shape379);

Billboard& Billboard380 =  Billboard();
Shape& Shape381 =  Shape();
Text& Text382 =  Text();
Text382.setString(new CString[]{CString("62")}, 1);
CFontStyle& FontStyle383 =  CFontStyle();
FontStyle383.setSize(0.035);
Text382.setFontStyle(&FontStyle383);

Shape381.setGeometry(&Text382);

Billboard380.addChild(&Shape381);

HAnimSite377.addChild(Billboard380);

HAnimSegment369.addChild(&HAnimSite377);

HAnimSite& HAnimSite384 =  HAnimSite();
HAnimSite384.X3DNode::setName(CString("r_sphyrion"));
HAnimSite384.setDEF(CString("hanim_r_sphyrion"));
HAnimSite384.setTranslation(new float[]{-0.0603,0.061,-0.1002});
TouchSensor& TouchSensor385 =  TouchSensor();
TouchSensor385.setDescription(CString("HAnimSite 54 r_sphyrion"));
HAnimSite384.addChild(&TouchSensor385);

Shape& Shape386 =  Shape();
Shape386.setUSE(CString("HAnimSiteShape"));
HAnimSite384.addChild(&Shape386);

Billboard& Billboard387 =  Billboard();
Shape& Shape388 =  Shape();
Text& Text389 =  Text();
Text389.setString(new CString[]{CString("54")}, 1);
CFontStyle& FontStyle390 =  CFontStyle();
FontStyle390.setSize(0.035);
Text389.setFontStyle(&FontStyle390);

Shape388.setGeometry(&Text389);

Billboard387.addChild(&Shape388);

HAnimSite384.addChild(Billboard387);

HAnimSegment369.addChild(&HAnimSite384);

HAnimJoint368.addChildren(&HAnimSegment369);

HAnimJoint& HAnimJoint391 =  HAnimJoint();
HAnimJoint391.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint391.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint391.setCenter(new float[]{-0.08,0.0175,-0.0608});
HAnimJoint391.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint391.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment392 =  HAnimSegment();
HAnimSegment392.X3DNode::setName(CString("r_metatarsal_2"));
HAnimSegment392.setDEF(CString("hanim_r_metatarsal_2"));
Transform& Transform393 =  Transform();
Transform393.setTranslation(new float[]{-0.08,0.0175,-0.0608});
Transform& Transform394 =  Transform();
//Empty Transform
Shape& Shape395 =  Shape();
Shape395.setUSE(CString("HAnimJointShape"));
Transform394.addChild(&Shape395);

Transform393.addChild(&Transform394);

HAnimSegment392.addChild(&Transform393);

Shape& Shape396 =  Shape();
LineSet& LineSet397 =  LineSet();
LineSet397.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate398 =  Coordinate();
Coordinate398.setPoint(new float[]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004}, 6);
LineSet397.setCoord(Coordinate398);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA399 =  ColorRGBA();
ColorRGBA399.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet397.addChild(&ColorRGBA399);

Shape396.setGeometry(&LineSet397);

HAnimSegment392.addChild(&Shape396);

HAnimJoint391.addChildren(&HAnimSegment392);

HAnimJoint& HAnimJoint400 =  HAnimJoint();
HAnimJoint400.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint400.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint400.setCenter(new float[]{-0.0823,0.0064,-0.004});
HAnimJoint400.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint400.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment401 =  HAnimSegment();
HAnimSegment401.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment401.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Transform& Transform402 =  Transform();
Transform402.setTranslation(new float[]{-0.0823,0.0064,-0.004});
Transform& Transform403 =  Transform();
//Empty Transform
Shape& Shape404 =  Shape();
Shape404.setUSE(CString("HAnimJointShape"));
Transform403.addChild(&Shape404);

Transform402.addChild(&Transform403);

HAnimSegment401.addChild(&Transform402);

Shape& Shape405 =  Shape();
LineSet& LineSet406 =  LineSet();
LineSet406.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate407 =  Coordinate();
Coordinate407.setPoint(new float[]{-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216}, 6);
LineSet406.setCoord(Coordinate407);

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA408 =  ColorRGBA();
ColorRGBA408.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet406.addChild(&ColorRGBA408);

Shape405.setGeometry(&LineSet406);

HAnimSegment401.addChild(&Shape405);

HAnimSite& HAnimSite409 =  HAnimSite();
HAnimSite409.X3DNode::setName(CString("r_metatarsal_phalanx_1"));
HAnimSite409.setDEF(CString("hanim_r_metatarsal_phalanx_1"));
TouchSensor& TouchSensor410 =  TouchSensor();
TouchSensor410.setDescription(CString("HAnimSite 59 r_metatarsal_phalanx_1"));
HAnimSite409.addChild(&TouchSensor410);

Shape& Shape411 =  Shape();
Shape411.setUSE(CString("HAnimSiteShape"));
HAnimSite409.addChild(&Shape411);

Billboard& Billboard412 =  Billboard();
Shape& Shape413 =  Shape();
Text& Text414 =  Text();
Text414.setString(new CString[]{CString("59")}, 1);
CFontStyle& FontStyle415 =  CFontStyle();
FontStyle415.setSize(0.035);
Text414.setFontStyle(&FontStyle415);

Shape413.setGeometry(&Text414);

Billboard412.addChild(&Shape413);

HAnimSite409.addChild(Billboard412);

HAnimSegment401.addChild(&HAnimSite409);

HAnimSite& HAnimSite416 =  HAnimSite();
HAnimSite416.X3DNode::setName(CString("r_metatarsal_phalanx_5"));
HAnimSite416.setDEF(CString("hanim_r_metatarsal_phalanx_5"));
TouchSensor& TouchSensor417 =  TouchSensor();
TouchSensor417.setDescription(CString("HAnimSite 60 r_metatarsal_phalanx_5"));
HAnimSite416.addChild(&TouchSensor417);

Shape& Shape418 =  Shape();
Shape418.setUSE(CString("HAnimSiteShape"));
HAnimSite416.addChild(&Shape418);

Billboard& Billboard419 =  Billboard();
Shape& Shape420 =  Shape();
Text& Text421 =  Text();
Text421.setString(new CString[]{CString("60")}, 1);
CFontStyle& FontStyle422 =  CFontStyle();
FontStyle422.setSize(0.035);
Text421.setFontStyle(&FontStyle422);

Shape420.setGeometry(&Text421);

Billboard419.addChild(&Shape420);

HAnimSite416.addChild(Billboard419);

HAnimSegment401.addChild(&HAnimSite416);

HAnimSite& HAnimSite423 =  HAnimSite();
HAnimSite423.X3DNode::setName(CString("r_tarsal_distal_phalanx_1_tip"));
HAnimSite423.setDEF(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor424 =  TouchSensor();
TouchSensor424.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_1_tip"));
HAnimSite423.addChild(&TouchSensor424);

Shape& Shape425 =  Shape();
Shape425.setUSE(CString("HAnimSiteShape"));
HAnimSite423.addChild(&Shape425);

Billboard& Billboard426 =  Billboard();
Shape& Shape427 =  Shape();
Text& Text428 =  Text();
Text428.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle429 =  CFontStyle();
FontStyle429.setSize(0.035);
Text428.setFontStyle(&FontStyle429);

Shape427.setGeometry(&Text428);

Billboard426.addChild(&Shape427);

HAnimSite423.addChild(Billboard426);

HAnimSegment401.addChild(&HAnimSite423);

HAnimSite& HAnimSite430 =  HAnimSite();
HAnimSite430.X3DNode::setName(CString("r_tarsal_distal_phalanx_2_tip"));
HAnimSite430.setDEF(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimSite430.setTranslation(new float[]{-0.0883,0.0134,0.1383});
TouchSensor& TouchSensor431 =  TouchSensor();
TouchSensor431.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_2_tip"));
HAnimSite430.addChild(&TouchSensor431);

Shape& Shape432 =  Shape();
Shape432.setUSE(CString("HAnimSiteShape"));
HAnimSite430.addChild(&Shape432);

Billboard& Billboard433 =  Billboard();
Shape& Shape434 =  Shape();
Text& Text435 =  Text();
Text435.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle436 =  CFontStyle();
FontStyle436.setSize(0.035);
Text435.setFontStyle(&FontStyle436);

Shape434.setGeometry(&Text435);

Billboard433.addChild(&Shape434);

HAnimSite430.addChild(Billboard433);

HAnimSegment401.addChild(&HAnimSite430);

HAnimSite& HAnimSite437 =  HAnimSite();
HAnimSite437.X3DNode::setName(CString("r_tarsal_distal_phalanx_3_tip"));
HAnimSite437.setDEF(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor438 =  TouchSensor();
TouchSensor438.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_3_tip"));
HAnimSite437.addChild(&TouchSensor438);

Shape& Shape439 =  Shape();
Shape439.setUSE(CString("HAnimSiteShape"));
HAnimSite437.addChild(&Shape439);

Billboard& Billboard440 =  Billboard();
Shape& Shape441 =  Shape();
Text& Text442 =  Text();
Text442.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle443 =  CFontStyle();
FontStyle443.setSize(0.035);
Text442.setFontStyle(&FontStyle443);

Shape441.setGeometry(&Text442);

Billboard440.addChild(&Shape441);

HAnimSite437.addChild(Billboard440);

HAnimSegment401.addChild(&HAnimSite437);

HAnimSite& HAnimSite444 =  HAnimSite();
HAnimSite444.X3DNode::setName(CString("r_tarsal_distal_phalanx_4_tip"));
HAnimSite444.setDEF(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor445 =  TouchSensor();
TouchSensor445.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_4_tip"));
HAnimSite444.addChild(&TouchSensor445);

Shape& Shape446 =  Shape();
Shape446.setUSE(CString("HAnimSiteShape"));
HAnimSite444.addChild(&Shape446);

Billboard& Billboard447 =  Billboard();
Shape& Shape448 =  Shape();
Text& Text449 =  Text();
Text449.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle450 =  CFontStyle();
FontStyle450.setSize(0.035);
Text449.setFontStyle(&FontStyle450);

Shape448.setGeometry(&Text449);

Billboard447.addChild(&Shape448);

HAnimSite444.addChild(Billboard447);

HAnimSegment401.addChild(&HAnimSite444);

HAnimSite& HAnimSite451 =  HAnimSite();
HAnimSite451.X3DNode::setName(CString("r_tarsal_distal_phalanx_5_tip"));
HAnimSite451.setDEF(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor452 =  TouchSensor();
TouchSensor452.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_5_tip"));
HAnimSite451.addChild(&TouchSensor452);

Shape& Shape453 =  Shape();
Shape453.setUSE(CString("HAnimSiteShape"));
HAnimSite451.addChild(&Shape453);

Billboard& Billboard454 =  Billboard();
Shape& Shape455 =  Shape();
Text& Text456 =  Text();
Text456.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle457 =  CFontStyle();
FontStyle457.setSize(0.035);
Text456.setFontStyle(&FontStyle457);

Shape455.setGeometry(&Text456);

Billboard454.addChild(&Shape455);

HAnimSite451.addChild(Billboard454);

HAnimSegment401.addChild(&HAnimSite451);

HAnimJoint400.addChildren(&HAnimSegment401);

HAnimJoint& HAnimJoint458 =  HAnimJoint();
HAnimJoint458.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint458.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint458.setCenter(new float[]{-0.0841,0.0013,0.0216});
HAnimJoint458.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint458.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint400.addChildren(&HAnimJoint458);

HAnimJoint391.addChildren(&HAnimJoint400);

HAnimJoint368.addChildren(&HAnimJoint391);

HAnimJoint338.addChildren(&HAnimJoint368);

HAnimJoint301.addChildren(&HAnimJoint338);

HAnimJoint60.addChildren(&HAnimJoint301);

HAnimJoint47.addChildren(&HAnimJoint60);

HAnimJoint& HAnimJoint459 =  HAnimJoint();
HAnimJoint459.X3DNode::setName(CString("vl5"));
HAnimJoint459.setDEF(CString("hanim_vl5"));
HAnimJoint459.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimJoint459.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint459.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment460 =  HAnimSegment();
HAnimSegment460.X3DNode::setName(CString("l5"));
HAnimSegment460.setDEF(CString("hanim_l5"));
Transform& Transform461 =  Transform();
Transform461.setTranslation(new float[]{0.0028,1.0568,-0.0776});
Transform& Transform462 =  Transform();
//Empty Transform
Shape& Shape463 =  Shape();
Shape463.setUSE(CString("HAnimJointShape"));
Transform462.addChild(&Shape463);

Transform461.addChild(&Transform462);

HAnimSegment460.addChild(&Transform461);

Shape& Shape464 =  Shape();
LineSet& LineSet465 =  LineSet();
LineSet465.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate466 =  Coordinate();
Coordinate466.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796}, 6);
LineSet465.setCoord(Coordinate466);

//from vl5 to vl3 vertices 2
ColorRGBA& ColorRGBA467 =  ColorRGBA();
ColorRGBA467.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet465.addChild(&ColorRGBA467);

Shape464.setGeometry(&LineSet465);

HAnimSegment460.addChild(&Shape464);

HAnimSite& HAnimSite468 =  HAnimSite();
HAnimSite468.X3DNode::setName(CString("navel"));
HAnimSite468.setDEF(CString("hanim_navel"));
HAnimSite468.setTranslation(new float[]{0.0069,1.0966,0.1017});
TouchSensor& TouchSensor469 =  TouchSensor();
TouchSensor469.setDescription(CString("HAnimSite 84 navel"));
HAnimSite468.addChild(&TouchSensor469);

Shape& Shape470 =  Shape();
Shape470.setUSE(CString("HAnimSiteShape"));
HAnimSite468.addChild(&Shape470);

Billboard& Billboard471 =  Billboard();
Shape& Shape472 =  Shape();
Text& Text473 =  Text();
Text473.setString(new CString[]{CString("84")}, 1);
CFontStyle& FontStyle474 =  CFontStyle();
FontStyle474.setSize(0.035);
Text473.setFontStyle(&FontStyle474);

Shape472.setGeometry(&Text473);

Billboard471.addChild(&Shape472);

HAnimSite468.addChild(Billboard471);

HAnimSegment460.addChild(&HAnimSite468);

HAnimSite& HAnimSite475 =  HAnimSite();
HAnimSite475.X3DNode::setName(CString("waist_preferred_anterior"));
HAnimSite475.setDEF(CString("hanim_waist_preferred_anterior"));
TouchSensor& TouchSensor476 =  TouchSensor();
TouchSensor476.setDescription(CString("HAnimSite 26 waist_preferred_anterior"));
HAnimSite475.addChild(&TouchSensor476);

Shape& Shape477 =  Shape();
Shape477.setUSE(CString("HAnimSiteShape"));
HAnimSite475.addChild(&Shape477);

Billboard& Billboard478 =  Billboard();
Shape& Shape479 =  Shape();
Text& Text480 =  Text();
Text480.setString(new CString[]{CString("26")}, 1);
CFontStyle& FontStyle481 =  CFontStyle();
FontStyle481.setSize(0.035);
Text480.setFontStyle(&FontStyle481);

Shape479.setGeometry(&Text480);

Billboard478.addChild(&Shape479);

HAnimSite475.addChild(Billboard478);

HAnimSegment460.addChild(&HAnimSite475);

HAnimSite& HAnimSite482 =  HAnimSite();
HAnimSite482.X3DNode::setName(CString("waist_preferred_posterior"));
HAnimSite482.setDEF(CString("hanim_waist_preferred_posterior"));
HAnimSite482.setTranslation(new float[]{0.29,1.0915,-0.1091});
TouchSensor& TouchSensor483 =  TouchSensor();
TouchSensor483.setDescription(CString("HAnimSite 27 waist_preferred_posterior"));
HAnimSite482.addChild(&TouchSensor483);

Shape& Shape484 =  Shape();
Shape484.setUSE(CString("HAnimSiteShape"));
HAnimSite482.addChild(&Shape484);

Billboard& Billboard485 =  Billboard();
Shape& Shape486 =  Shape();
Text& Text487 =  Text();
Text487.setString(new CString[]{CString("27")}, 1);
CFontStyle& FontStyle488 =  CFontStyle();
FontStyle488.setSize(0.035);
Text487.setFontStyle(&FontStyle488);

Shape486.setGeometry(&Text487);

Billboard485.addChild(&Shape486);

HAnimSite482.addChild(Billboard485);

HAnimSegment460.addChild(&HAnimSite482);

HAnimJoint459.addChildren(&HAnimSegment460);

HAnimJoint& HAnimJoint489 =  HAnimJoint();
HAnimJoint489.X3DNode::setName(CString("vl3"));
HAnimJoint489.setDEF(CString("hanim_vl3"));
HAnimJoint489.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimJoint489.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint489.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment490 =  HAnimSegment();
HAnimSegment490.X3DNode::setName(CString("l3"));
HAnimSegment490.setDEF(CString("hanim_l3"));
Transform& Transform491 =  Transform();
Transform491.setTranslation(new float[]{0.0041,1.1276,-0.0796});
Transform& Transform492 =  Transform();
//Empty Transform
Shape& Shape493 =  Shape();
Shape493.setUSE(CString("HAnimJointShape"));
Transform492.addChild(&Shape493);

Transform491.addChild(&Transform492);

HAnimSegment490.addChild(&Transform491);

Shape& Shape494 =  Shape();
LineSet& LineSet495 =  LineSet();
LineSet495.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate496 =  Coordinate();
Coordinate496.setPoint(new float[]{0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805}, 6);
LineSet495.setCoord(Coordinate496);

//from vl3 to vl1 vertices 2
ColorRGBA& ColorRGBA497 =  ColorRGBA();
ColorRGBA497.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet495.addChild(&ColorRGBA497);

Shape494.setGeometry(&LineSet495);

HAnimSegment490.addChild(&Shape494);

HAnimSite& HAnimSite498 =  HAnimSite();
HAnimSite498.X3DNode::setName(CString("l_rib10"));
HAnimSite498.setDEF(CString("hanim_l_rib10"));
HAnimSite498.setTranslation(new float[]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor499 =  TouchSensor();
TouchSensor499.setDescription(CString("HAnimSite 28 l_rib10"));
HAnimSite498.addChild(&TouchSensor499);

Shape& Shape500 =  Shape();
Shape500.setUSE(CString("HAnimSiteShape"));
HAnimSite498.addChild(&Shape500);

Billboard& Billboard501 =  Billboard();
Shape& Shape502 =  Shape();
Text& Text503 =  Text();
Text503.setString(new CString[]{CString("28")}, 1);
CFontStyle& FontStyle504 =  CFontStyle();
FontStyle504.setSize(0.035);
Text503.setFontStyle(&FontStyle504);

Shape502.setGeometry(&Text503);

Billboard501.addChild(&Shape502);

HAnimSite498.addChild(Billboard501);

HAnimSegment490.addChild(&HAnimSite498);

HAnimSite& HAnimSite505 =  HAnimSite();
HAnimSite505.X3DNode::setName(CString("r_rib10"));
HAnimSite505.setDEF(CString("hanim_r_rib10"));
HAnimSite505.setTranslation(new float[]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor506 =  TouchSensor();
TouchSensor506.setDescription(CString("HAnimSite 30 r_rib10"));
HAnimSite505.addChild(&TouchSensor506);

Shape& Shape507 =  Shape();
Shape507.setUSE(CString("HAnimSiteShape"));
HAnimSite505.addChild(&Shape507);

Billboard& Billboard508 =  Billboard();
Shape& Shape509 =  Shape();
Text& Text510 =  Text();
Text510.setString(new CString[]{CString("30")}, 1);
CFontStyle& FontStyle511 =  CFontStyle();
FontStyle511.setSize(0.035);
Text510.setFontStyle(&FontStyle511);

Shape509.setGeometry(&Text510);

Billboard508.addChild(&Shape509);

HAnimSite505.addChild(Billboard508);

HAnimSegment490.addChild(&HAnimSite505);

HAnimSite& HAnimSite512 =  HAnimSite();
HAnimSite512.X3DNode::setName(CString("spine_1_middle_back"));
HAnimSite512.setDEF(CString("hanim_spine_1_middle_back"));
TouchSensor& TouchSensor513 =  TouchSensor();
TouchSensor513.setDescription(CString("HAnimSite 24 spine_1_middle_back"));
HAnimSite512.addChild(&TouchSensor513);

Shape& Shape514 =  Shape();
Shape514.setUSE(CString("HAnimSiteShape"));
HAnimSite512.addChild(&Shape514);

Billboard& Billboard515 =  Billboard();
Shape& Shape516 =  Shape();
Text& Text517 =  Text();
Text517.setString(new CString[]{CString("24")}, 1);
CFontStyle& FontStyle518 =  CFontStyle();
FontStyle518.setSize(0.035);
Text517.setFontStyle(&FontStyle518);

Shape516.setGeometry(&Text517);

Billboard515.addChild(&Shape516);

HAnimSite512.addChild(Billboard515);

HAnimSegment490.addChild(&HAnimSite512);

HAnimSite& HAnimSite519 =  HAnimSite();
HAnimSite519.X3DNode::setName(CString("spine_2_middle_back"));
HAnimSite519.setDEF(CString("hanim_spine_2_middle_back"));
TouchSensor& TouchSensor520 =  TouchSensor();
TouchSensor520.setDescription(CString("HAnimSite spine_2_middle_back"));
HAnimSite519.addChild(&TouchSensor520);

Shape& Shape521 =  Shape();
Shape521.setUSE(CString("HAnimSiteShape"));
HAnimSite519.addChild(&Shape521);

Billboard& Billboard522 =  Billboard();
Shape& Shape523 =  Shape();
Text& Text524 =  Text();
Text524.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle525 =  CFontStyle();
FontStyle525.setSize(0.035);
Text524.setFontStyle(&FontStyle525);

Shape523.setGeometry(&Text524);

Billboard522.addChild(&Shape523);

HAnimSite519.addChild(Billboard522);

HAnimSegment490.addChild(&HAnimSite519);

HAnimJoint489.addChildren(&HAnimSegment490);

HAnimJoint& HAnimJoint526 =  HAnimJoint();
HAnimJoint526.X3DNode::setName(CString("vl1"));
HAnimJoint526.setDEF(CString("hanim_vl1"));
HAnimJoint526.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimJoint526.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint526.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment527 =  HAnimSegment();
HAnimSegment527.X3DNode::setName(CString("l1"));
HAnimSegment527.setDEF(CString("hanim_l1"));
Transform& Transform528 =  Transform();
Transform528.setTranslation(new float[]{0.0048,1.1912,-0.0805});
Transform& Transform529 =  Transform();
//Empty Transform
Shape& Shape530 =  Shape();
Shape530.setUSE(CString("HAnimJointShape"));
Transform529.addChild(&Shape530);

Transform528.addChild(&Transform529);

HAnimSegment527.addChild(&Transform528);

Shape& Shape531 =  Shape();
LineSet& LineSet532 =  LineSet();
LineSet532.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate533 =  Coordinate();
Coordinate533.setPoint(new float[]{0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822}, 6);
LineSet532.setCoord(Coordinate533);

//from vl1 to vt10 vertices 2
ColorRGBA& ColorRGBA534 =  ColorRGBA();
ColorRGBA534.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet532.addChild(&ColorRGBA534);

Shape531.setGeometry(&LineSet532);

HAnimSegment527.addChild(&Shape531);

HAnimJoint526.addChildren(&HAnimSegment527);

HAnimJoint& HAnimJoint535 =  HAnimJoint();
HAnimJoint535.X3DNode::setName(CString("vt10"));
HAnimJoint535.setDEF(CString("hanim_vt10"));
HAnimJoint535.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimJoint535.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint535.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment536 =  HAnimSegment();
HAnimSegment536.X3DNode::setName(CString("t10"));
HAnimSegment536.setDEF(CString("hanim_t10"));
Transform& Transform537 =  Transform();
Transform537.setTranslation(new float[]{0.0056,1.2848,-0.0822});
Transform& Transform538 =  Transform();
//Empty Transform
Shape& Shape539 =  Shape();
Shape539.setUSE(CString("HAnimJointShape"));
Transform538.addChild(&Shape539);

Transform537.addChild(&Transform538);

HAnimSegment536.addChild(&Transform537);

Shape& Shape540 =  Shape();
LineSet& LineSet541 =  LineSet();
LineSet541.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate542 =  Coordinate();
Coordinate542.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08}, 6);
LineSet541.setCoord(Coordinate542);

//from vt10 to vt6 vertices 2
ColorRGBA& ColorRGBA543 =  ColorRGBA();
ColorRGBA543.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet541.addChild(&ColorRGBA543);

Shape540.setGeometry(&LineSet541);

HAnimSegment536.addChild(&Shape540);

HAnimSite& HAnimSite544 =  HAnimSite();
HAnimSite544.X3DNode::setName(CString("l_thelion"));
HAnimSite544.setDEF(CString("hanim_l_thelion"));
HAnimSite544.setTranslation(new float[]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor545 =  TouchSensor();
TouchSensor545.setDescription(CString("HAnimSite 29 l_thelion"));
HAnimSite544.addChild(&TouchSensor545);

Shape& Shape546 =  Shape();
Shape546.setUSE(CString("HAnimSiteShape"));
HAnimSite544.addChild(&Shape546);

Billboard& Billboard547 =  Billboard();
Shape& Shape548 =  Shape();
Text& Text549 =  Text();
Text549.setString(new CString[]{CString("29")}, 1);
CFontStyle& FontStyle550 =  CFontStyle();
FontStyle550.setSize(0.035);
Text549.setFontStyle(&FontStyle550);

Shape548.setGeometry(&Text549);

Billboard547.addChild(&Shape548);

HAnimSite544.addChild(Billboard547);

HAnimSegment536.addChild(&HAnimSite544);

HAnimSite& HAnimSite551 =  HAnimSite();
HAnimSite551.X3DNode::setName(CString("r_thelion"));
HAnimSite551.setDEF(CString("hanim_r_thelion"));
HAnimSite551.setTranslation(new float[]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor552 =  TouchSensor();
TouchSensor552.setDescription(CString("HAnimSite 31 r_thelion"));
HAnimSite551.addChild(&TouchSensor552);

Shape& Shape553 =  Shape();
Shape553.setUSE(CString("HAnimSiteShape"));
HAnimSite551.addChild(&Shape553);

Billboard& Billboard554 =  Billboard();
Shape& Shape555 =  Shape();
Text& Text556 =  Text();
Text556.setString(new CString[]{CString("31")}, 1);
CFontStyle& FontStyle557 =  CFontStyle();
FontStyle557.setSize(0.035);
Text556.setFontStyle(&FontStyle557);

Shape555.setGeometry(&Text556);

Billboard554.addChild(&Shape555);

HAnimSite551.addChild(Billboard554);

HAnimSegment536.addChild(&HAnimSite551);

HAnimSite& HAnimSite558 =  HAnimSite();
HAnimSite558.X3DNode::setName(CString("substernale"));
HAnimSite558.setDEF(CString("hanim_substernale"));
HAnimSite558.setTranslation(new float[]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor559 =  TouchSensor();
TouchSensor559.setDescription(CString("HAnimSite 13 substernale"));
HAnimSite558.addChild(&TouchSensor559);

Shape& Shape560 =  Shape();
Shape560.setUSE(CString("HAnimSiteShape"));
HAnimSite558.addChild(&Shape560);

Billboard& Billboard561 =  Billboard();
Shape& Shape562 =  Shape();
Text& Text563 =  Text();
Text563.setString(new CString[]{CString("13")}, 1);
CFontStyle& FontStyle564 =  CFontStyle();
FontStyle564.setSize(0.035);
Text563.setFontStyle(&FontStyle564);

Shape562.setGeometry(&Text563);

Billboard561.addChild(&Shape562);

HAnimSite558.addChild(Billboard561);

HAnimSegment536.addChild(&HAnimSite558);

HAnimJoint535.addChildren(&HAnimSegment536);

HAnimJoint& HAnimJoint565 =  HAnimJoint();
HAnimJoint565.X3DNode::setName(CString("vt6"));
HAnimJoint565.setDEF(CString("hanim_vt6"));
HAnimJoint565.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimJoint565.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint565.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment566 =  HAnimSegment();
HAnimSegment566.X3DNode::setName(CString("t6"));
HAnimSegment566.setDEF(CString("hanim_t6"));
Transform& Transform567 =  Transform();
Transform567.setTranslation(new float[]{0.0059,1.3866,-0.08});
Transform& Transform568 =  Transform();
//Empty Transform
Shape& Shape569 =  Shape();
Shape569.setUSE(CString("HAnimJointShape"));
Transform568.addChild(&Shape569);

Transform567.addChild(&Transform568);

HAnimSegment566.addChild(&Transform567);

Shape& Shape570 =  Shape();
LineSet& LineSet571 =  LineSet();
LineSet571.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate572 =  Coordinate();
Coordinate572.setPoint(new float[]{0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387}, 6);
LineSet571.setCoord(Coordinate572);

//from vt6 to vt1 vertices 2
ColorRGBA& ColorRGBA573 =  ColorRGBA();
ColorRGBA573.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet571.addChild(&ColorRGBA573);

Shape570.setGeometry(&LineSet571);

HAnimSegment566.addChild(&Shape570);

HAnimSite& HAnimSite574 =  HAnimSite();
HAnimSite574.X3DNode::setName(CString("l_chest_midsagittal_plane"));
HAnimSite574.setDEF(CString("hanim_l_chest_midsagittal_plane"));
TouchSensor& TouchSensor575 =  TouchSensor();
TouchSensor575.setDescription(CString("HAnimSite 94 l_chest_midsagittal_plane"));
HAnimSite574.addChild(&TouchSensor575);

Shape& Shape576 =  Shape();
Shape576.setUSE(CString("HAnimSiteShape"));
HAnimSite574.addChild(&Shape576);

Billboard& Billboard577 =  Billboard();
Shape& Shape578 =  Shape();
Text& Text579 =  Text();
Text579.setString(new CString[]{CString("94")}, 1);
CFontStyle& FontStyle580 =  CFontStyle();
FontStyle580.setSize(0.035);
Text579.setFontStyle(&FontStyle580);

Shape578.setGeometry(&Text579);

Billboard577.addChild(&Shape578);

HAnimSite574.addChild(Billboard577);

HAnimSegment566.addChild(&HAnimSite574);

HAnimSite& HAnimSite581 =  HAnimSite();
HAnimSite581.X3DNode::setName(CString("mesosternale"));
HAnimSite581.setDEF(CString("hanim_mesosternale"));
TouchSensor& TouchSensor582 =  TouchSensor();
TouchSensor582.setDescription(CString("HAnimSite 88 mesosternale"));
HAnimSite581.addChild(&TouchSensor582);

Shape& Shape583 =  Shape();
Shape583.setUSE(CString("HAnimSiteShape"));
HAnimSite581.addChild(&Shape583);

Billboard& Billboard584 =  Billboard();
Shape& Shape585 =  Shape();
Text& Text586 =  Text();
Text586.setString(new CString[]{CString("88")}, 1);
CFontStyle& FontStyle587 =  CFontStyle();
FontStyle587.setSize(0.035);
Text586.setFontStyle(&FontStyle587);

Shape585.setGeometry(&Text586);

Billboard584.addChild(&Shape585);

HAnimSite581.addChild(Billboard584);

HAnimSegment566.addChild(&HAnimSite581);

HAnimSite& HAnimSite588 =  HAnimSite();
HAnimSite588.X3DNode::setName(CString("r_chest_midsagittal_plane"));
HAnimSite588.setDEF(CString("hanim_r_chest_midsagittal_plane"));
TouchSensor& TouchSensor589 =  TouchSensor();
TouchSensor589.setDescription(CString("HAnimSite 95 r_chest_midsagittal_plane"));
HAnimSite588.addChild(&TouchSensor589);

Shape& Shape590 =  Shape();
Shape590.setUSE(CString("HAnimSiteShape"));
HAnimSite588.addChild(&Shape590);

Billboard& Billboard591 =  Billboard();
Shape& Shape592 =  Shape();
Text& Text593 =  Text();
Text593.setString(new CString[]{CString("95")}, 1);
CFontStyle& FontStyle594 =  CFontStyle();
FontStyle594.setSize(0.035);
Text593.setFontStyle(&FontStyle594);

Shape592.setGeometry(&Text593);

Billboard591.addChild(&Shape592);

HAnimSite588.addChild(Billboard591);

HAnimSegment566.addChild(&HAnimSite588);

HAnimSite& HAnimSite595 =  HAnimSite();
HAnimSite595.X3DNode::setName(CString("rear_center_midsagittal_plane"));
HAnimSite595.setDEF(CString("hanim_rear_center_midsagittal_plane"));
TouchSensor& TouchSensor596 =  TouchSensor();
TouchSensor596.setDescription(CString("HAnimSite 92 rear_center_midsagittal_plane"));
HAnimSite595.addChild(&TouchSensor596);

Shape& Shape597 =  Shape();
Shape597.setUSE(CString("HAnimSiteShape"));
HAnimSite595.addChild(&Shape597);

Billboard& Billboard598 =  Billboard();
Shape& Shape599 =  Shape();
Text& Text600 =  Text();
Text600.setString(new CString[]{CString("92")}, 1);
CFontStyle& FontStyle601 =  CFontStyle();
FontStyle601.setSize(0.035);
Text600.setFontStyle(&FontStyle601);

Shape599.setGeometry(&Text600);

Billboard598.addChild(&Shape599);

HAnimSite595.addChild(Billboard598);

HAnimSegment566.addChild(&HAnimSite595);

HAnimJoint565.addChildren(&HAnimSegment566);

HAnimJoint& HAnimJoint602 =  HAnimJoint();
HAnimJoint602.X3DNode::setName(CString("vt1"));
HAnimJoint602.setDEF(CString("hanim_vt1"));
HAnimJoint602.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimJoint602.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint602.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment603 =  HAnimSegment();
HAnimSegment603.X3DNode::setName(CString("t1"));
HAnimSegment603.setDEF(CString("hanim_t1"));
Transform& Transform604 =  Transform();
Transform604.setTranslation(new float[]{0.0065,1.4951,-0.0387});
Transform& Transform605 =  Transform();
//Empty Transform
Shape& Shape606 =  Shape();
Shape606.setUSE(CString("HAnimJointShape"));
Transform605.addChild(&Shape606);

Transform604.addChild(&Transform605);

HAnimSegment603.addChild(&Transform604);

Shape& Shape607 =  Shape();
LineSet& LineSet608 =  LineSet();
LineSet608.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate609 =  Coordinate();
Coordinate609.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084}, 6);
LineSet608.setCoord(Coordinate609);

//from vt1 to vc4 vertices 2
ColorRGBA& ColorRGBA610 =  ColorRGBA();
ColorRGBA610.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet608.addChild(&ColorRGBA610);

Shape607.setGeometry(&LineSet608);

HAnimSegment603.addChild(&Shape607);

HAnimSite& HAnimSite611 =  HAnimSite();
HAnimSite611.X3DNode::setName(CString("cervicale"));
HAnimSite611.setDEF(CString("hanim_cervicale"));
HAnimSite611.setTranslation(new float[]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor612 =  TouchSensor();
TouchSensor612.setDescription(CString("HAnimSite 10 cervicale"));
HAnimSite611.addChild(&TouchSensor612);

Shape& Shape613 =  Shape();
Shape613.setUSE(CString("HAnimSiteShape"));
HAnimSite611.addChild(&Shape613);

Billboard& Billboard614 =  Billboard();
Shape& Shape615 =  Shape();
Text& Text616 =  Text();
Text616.setString(new CString[]{CString("10")}, 1);
CFontStyle& FontStyle617 =  CFontStyle();
FontStyle617.setSize(0.035);
Text616.setFontStyle(&FontStyle617);

Shape615.setGeometry(&Text616);

Billboard614.addChild(&Shape615);

HAnimSite611.addChild(Billboard614);

HAnimSegment603.addChild(&HAnimSite611);

HAnimSite& HAnimSite618 =  HAnimSite();
HAnimSite618.X3DNode::setName(CString("l_neck_base"));
HAnimSite618.setDEF(CString("hanim_l_neck_base"));
HAnimSite618.setTranslation(new float[]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor619 =  TouchSensor();
TouchSensor619.setDescription(CString("HAnimSite 82 l_neck_base"));
HAnimSite618.addChild(&TouchSensor619);

Shape& Shape620 =  Shape();
Shape620.setUSE(CString("HAnimSiteShape"));
HAnimSite618.addChild(&Shape620);

Billboard& Billboard621 =  Billboard();
Shape& Shape622 =  Shape();
Text& Text623 =  Text();
Text623.setString(new CString[]{CString("82")}, 1);
CFontStyle& FontStyle624 =  CFontStyle();
FontStyle624.setSize(0.035);
Text623.setFontStyle(&FontStyle624);

Shape622.setGeometry(&Text623);

Billboard621.addChild(&Shape622);

HAnimSite618.addChild(Billboard621);

HAnimSegment603.addChild(&HAnimSite618);

HAnimSite& HAnimSite625 =  HAnimSite();
HAnimSite625.X3DNode::setName(CString("r_neck_base"));
HAnimSite625.setDEF(CString("hanim_r_neck_base"));
HAnimSite625.setTranslation(new float[]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor626 =  TouchSensor();
TouchSensor626.setDescription(CString("HAnimSite 83 r_neck_base"));
HAnimSite625.addChild(&TouchSensor626);

Shape& Shape627 =  Shape();
Shape627.setUSE(CString("HAnimSiteShape"));
HAnimSite625.addChild(&Shape627);

Billboard& Billboard628 =  Billboard();
Shape& Shape629 =  Shape();
Text& Text630 =  Text();
Text630.setString(new CString[]{CString("83")}, 1);
CFontStyle& FontStyle631 =  CFontStyle();
FontStyle631.setSize(0.035);
Text630.setFontStyle(&FontStyle631);

Shape629.setGeometry(&Text630);

Billboard628.addChild(&Shape629);

HAnimSite625.addChild(Billboard628);

HAnimSegment603.addChild(&HAnimSite625);

HAnimSite& HAnimSite632 =  HAnimSite();
HAnimSite632.X3DNode::setName(CString("suprasternale"));
HAnimSite632.setDEF(CString("hanim_suprasternale"));
HAnimSite632.setTranslation(new float[]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor633 =  TouchSensor();
TouchSensor633.setDescription(CString("HAnimSite 12 suprasternale"));
HAnimSite632.addChild(&TouchSensor633);

Shape& Shape634 =  Shape();
Shape634.setUSE(CString("HAnimSiteShape"));
HAnimSite632.addChild(&Shape634);

Billboard& Billboard635 =  Billboard();
Shape& Shape636 =  Shape();
Text& Text637 =  Text();
Text637.setString(new CString[]{CString("12")}, 1);
CFontStyle& FontStyle638 =  CFontStyle();
FontStyle638.setSize(0.035);
Text637.setFontStyle(&FontStyle638);

Shape636.setGeometry(&Text637);

Billboard635.addChild(&Shape636);

HAnimSite632.addChild(Billboard635);

HAnimSegment603.addChild(&HAnimSite632);

Shape& Shape639 =  Shape();
LineSet& LineSet640 =  LineSet();
LineSet640.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate641 =  Coordinate();
Coordinate641.setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet640.setCoord(Coordinate641);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA& ColorRGBA642 =  ColorRGBA();
ColorRGBA642.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet640.addChild(&ColorRGBA642);

Shape639.setGeometry(&LineSet640);

HAnimSegment603.addChild(&Shape639);

Shape& Shape643 =  Shape();
LineSet& LineSet644 =  LineSet();
LineSet644.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate645 =  Coordinate();
Coordinate645.setPoint(new float[]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
LineSet644.setCoord(Coordinate645);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA& ColorRGBA646 =  ColorRGBA();
ColorRGBA646.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet644.addChild(&ColorRGBA646);

Shape643.setGeometry(&LineSet644);

HAnimSegment603.addChild(&Shape643);

HAnimJoint602.addChildren(&HAnimSegment603);

HAnimJoint& HAnimJoint647 =  HAnimJoint();
HAnimJoint647.X3DNode::setName(CString("vc4"));
HAnimJoint647.setDEF(CString("hanim_vc4"));
HAnimJoint647.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimJoint647.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint647.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment648 =  HAnimSegment();
HAnimSegment648.X3DNode::setName(CString("c4"));
HAnimSegment648.setDEF(CString("hanim_c4"));
Transform& Transform649 =  Transform();
Transform649.setTranslation(new float[]{0.0066,1.5662,-0.0084});
Transform& Transform650 =  Transform();
//Empty Transform
Shape& Shape651 =  Shape();
Shape651.setUSE(CString("HAnimJointShape"));
Transform650.addChild(&Shape651);

Transform649.addChild(&Transform650);

HAnimSegment648.addChild(&Transform649);

Shape& Shape652 =  Shape();
LineSet& LineSet653 =  LineSet();
LineSet653.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate654 =  Coordinate();
Coordinate654.setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103}, 6);
LineSet653.setCoord(Coordinate654);

//from vc4 to vc2 vertices 2
ColorRGBA& ColorRGBA655 =  ColorRGBA();
ColorRGBA655.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet653.addChild(&ColorRGBA655);

Shape652.setGeometry(&LineSet653);

HAnimSegment648.addChild(&Shape652);

HAnimJoint647.addChildren(&HAnimSegment648);

HAnimJoint& HAnimJoint656 =  HAnimJoint();
HAnimJoint656.X3DNode::setName(CString("vc2"));
HAnimJoint656.setDEF(CString("hanim_vc2"));
HAnimJoint656.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimJoint656.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint656.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment657 =  HAnimSegment();
HAnimSegment657.X3DNode::setName(CString("c2"));
HAnimSegment657.setDEF(CString("hanim_c2"));
Transform& Transform658 =  Transform();
Transform658.setTranslation(new float[]{0.0066,1.5928,-0.0103});
Transform& Transform659 =  Transform();
//Empty Transform
Shape& Shape660 =  Shape();
Shape660.setUSE(CString("HAnimJointShape"));
Transform659.addChild(&Shape660);

Transform658.addChild(&Transform659);

HAnimSegment657.addChild(&Transform658);

Shape& Shape661 =  Shape();
LineSet& LineSet662 =  LineSet();
LineSet662.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate663 =  Coordinate();
Coordinate663.setPoint(new float[]{0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236}, 6);
LineSet662.setCoord(Coordinate663);

//from vc2 to skullbase vertices 2
ColorRGBA& ColorRGBA664 =  ColorRGBA();
ColorRGBA664.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet662.addChild(&ColorRGBA664);

Shape661.setGeometry(&LineSet662);

HAnimSegment657.addChild(&Shape661);

HAnimSite& HAnimSite665 =  HAnimSite();
HAnimSite665.X3DNode::setName(CString("adams_apple"));
HAnimSite665.setDEF(CString("hanim_adams_apple"));
TouchSensor& TouchSensor666 =  TouchSensor();
TouchSensor666.setDescription(CString("HAnimSite 11 adams_apple"));
HAnimSite665.addChild(&TouchSensor666);

Shape& Shape667 =  Shape();
Shape667.setUSE(CString("HAnimSiteShape"));
HAnimSite665.addChild(&Shape667);

Billboard& Billboard668 =  Billboard();
Shape& Shape669 =  Shape();
Text& Text670 =  Text();
Text670.setString(new CString[]{CString("11")}, 1);
CFontStyle& FontStyle671 =  CFontStyle();
FontStyle671.setSize(0.035);
Text670.setFontStyle(&FontStyle671);

Shape669.setGeometry(&Text670);

Billboard668.addChild(&Shape669);

HAnimSite665.addChild(Billboard668);

HAnimSegment657.addChild(&HAnimSite665);

HAnimJoint656.addChildren(&HAnimSegment657);

HAnimJoint& HAnimJoint672 =  HAnimJoint();
HAnimJoint672.X3DNode::setName(CString("skullbase"));
HAnimJoint672.setDEF(CString("hanim_skullbase"));
HAnimJoint672.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimJoint672.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint672.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint656.addChildren(&HAnimJoint672);

HAnimJoint647.addChildren(&HAnimJoint656);

HAnimJoint602.addChildren(&HAnimJoint647);

HAnimJoint& HAnimJoint673 =  HAnimJoint();
HAnimJoint673.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint673.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint673.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint673.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint673.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment674 =  HAnimSegment();
HAnimSegment674.X3DNode::setName(CString("l_clavicle"));
HAnimSegment674.setDEF(CString("hanim_l_clavicle"));
Transform& Transform675 =  Transform();
Transform675.setTranslation(new float[]{0.082,1.4488,-0.0353});
Transform& Transform676 =  Transform();
//Empty Transform
Shape& Shape677 =  Shape();
Shape677.setUSE(CString("HAnimJointShape"));
Transform676.addChild(&Shape677);

Transform675.addChild(&Transform676);

HAnimSegment674.addChild(&Transform675);

Shape& Shape678 =  Shape();
LineSet& LineSet679 =  LineSet();
LineSet679.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate680 =  Coordinate();
Coordinate680.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet679.setCoord(Coordinate680);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA& ColorRGBA681 =  ColorRGBA();
ColorRGBA681.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet679.addChild(&ColorRGBA681);

Shape678.setGeometry(&LineSet679);

HAnimSegment674.addChild(&Shape678);

HAnimSite& HAnimSite682 =  HAnimSite();
HAnimSite682.X3DNode::setName(CString("l_acromion"));
HAnimSite682.setDEF(CString("hanim_l_acromion"));
HAnimSite682.setTranslation(new float[]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor683 =  TouchSensor();
TouchSensor683.setDescription(CString("HAnimSite 15 l_acromion"));
HAnimSite682.addChild(&TouchSensor683);

Shape& Shape684 =  Shape();
Shape684.setUSE(CString("HAnimSiteShape"));
HAnimSite682.addChild(&Shape684);

Billboard& Billboard685 =  Billboard();
Shape& Shape686 =  Shape();
Text& Text687 =  Text();
Text687.setString(new CString[]{CString("15")}, 1);
CFontStyle& FontStyle688 =  CFontStyle();
FontStyle688.setSize(0.035);
Text687.setFontStyle(&FontStyle688);

Shape686.setGeometry(&Text687);

Billboard685.addChild(&Shape686);

HAnimSite682.addChild(Billboard685);

HAnimSegment674.addChild(&HAnimSite682);

HAnimSite& HAnimSite689 =  HAnimSite();
HAnimSite689.X3DNode::setName(CString("l_axilla_distal"));
HAnimSite689.setDEF(CString("hanim_l_axilla_distal"));
HAnimSite689.setTranslation(new float[]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor690 =  TouchSensor();
TouchSensor690.setDescription(CString("HAnimSite 17 l_axilla_distal"));
HAnimSite689.addChild(&TouchSensor690);

Shape& Shape691 =  Shape();
Shape691.setUSE(CString("HAnimSiteShape"));
HAnimSite689.addChild(&Shape691);

Billboard& Billboard692 =  Billboard();
Shape& Shape693 =  Shape();
Text& Text694 =  Text();
Text694.setString(new CString[]{CString("17")}, 1);
CFontStyle& FontStyle695 =  CFontStyle();
FontStyle695.setSize(0.035);
Text694.setFontStyle(&FontStyle695);

Shape693.setGeometry(&Text694);

Billboard692.addChild(&Shape693);

HAnimSite689.addChild(Billboard692);

HAnimSegment674.addChild(&HAnimSite689);

HAnimSite& HAnimSite696 =  HAnimSite();
HAnimSite696.X3DNode::setName(CString("l_axilla_posterior_folds"));
HAnimSite696.setDEF(CString("hanim_l_axilla_posterior_folds"));
TouchSensor& TouchSensor697 =  TouchSensor();
TouchSensor697.setDescription(CString("HAnimSite 18 l_axilla_posterior_folds"));
HAnimSite696.addChild(&TouchSensor697);

Shape& Shape698 =  Shape();
Shape698.setUSE(CString("HAnimSiteShape"));
HAnimSite696.addChild(&Shape698);

Billboard& Billboard699 =  Billboard();
Shape& Shape700 =  Shape();
Text& Text701 =  Text();
Text701.setString(new CString[]{CString("18")}, 1);
CFontStyle& FontStyle702 =  CFontStyle();
FontStyle702.setSize(0.035);
Text701.setFontStyle(&FontStyle702);

Shape700.setGeometry(&Text701);

Billboard699.addChild(&Shape700);

HAnimSite696.addChild(Billboard699);

HAnimSegment674.addChild(&HAnimSite696);

HAnimSite& HAnimSite703 =  HAnimSite();
HAnimSite703.X3DNode::setName(CString("l_axilla_proximal"));
HAnimSite703.setDEF(CString("hanim_l_axilla_proximal"));
HAnimSite703.setTranslation(new float[]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor704 =  TouchSensor();
TouchSensor704.setDescription(CString("HAnimSite 16 l_axilla_proximal"));
HAnimSite703.addChild(&TouchSensor704);

Shape& Shape705 =  Shape();
Shape705.setUSE(CString("HAnimSiteShape"));
HAnimSite703.addChild(&Shape705);

Billboard& Billboard706 =  Billboard();
Shape& Shape707 =  Shape();
Text& Text708 =  Text();
Text708.setString(new CString[]{CString("16")}, 1);
CFontStyle& FontStyle709 =  CFontStyle();
FontStyle709.setSize(0.035);
Text708.setFontStyle(&FontStyle709);

Shape707.setGeometry(&Text708);

Billboard706.addChild(&Shape707);

HAnimSite703.addChild(Billboard706);

HAnimSegment674.addChild(&HAnimSite703);

HAnimSite& HAnimSite710 =  HAnimSite();
HAnimSite710.X3DNode::setName(CString("l_clavicale"));
HAnimSite710.setDEF(CString("hanim_l_clavicale"));
HAnimSite710.setTranslation(new float[]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor711 =  TouchSensor();
TouchSensor711.setDescription(CString("HAnimSite 14 l_clavicale"));
HAnimSite710.addChild(&TouchSensor711);

Shape& Shape712 =  Shape();
Shape712.setUSE(CString("HAnimSiteShape"));
HAnimSite710.addChild(&Shape712);

Billboard& Billboard713 =  Billboard();
Shape& Shape714 =  Shape();
Text& Text715 =  Text();
Text715.setString(new CString[]{CString("14")}, 1);
CFontStyle& FontStyle716 =  CFontStyle();
FontStyle716.setSize(0.035);
Text715.setFontStyle(&FontStyle716);

Shape714.setGeometry(&Text715);

Billboard713.addChild(&Shape714);

HAnimSite710.addChild(Billboard713);

HAnimSegment674.addChild(&HAnimSite710);

HAnimJoint673.addChildren(&HAnimSegment674);

HAnimJoint& HAnimJoint717 =  HAnimJoint();
HAnimJoint717.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint717.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint717.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint717.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint717.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment718 =  HAnimSegment();
HAnimSegment718.X3DNode::setName(CString("l_scapula"));
HAnimSegment718.setDEF(CString("hanim_l_scapula"));
Transform& Transform719 =  Transform();
Transform719.setTranslation(new float[]{0.0962,1.4269,-0.0424});
Transform& Transform720 =  Transform();
//Empty Transform
Shape& Shape721 =  Shape();
Shape721.setUSE(CString("HAnimJointShape"));
Transform720.addChild(&Shape721);

Transform719.addChild(&Transform720);

HAnimSegment718.addChild(&Transform719);

Shape& Shape722 =  Shape();
LineSet& LineSet723 =  LineSet();
LineSet723.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate724 =  Coordinate();
Coordinate724.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet723.setCoord(Coordinate724);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA& ColorRGBA725 =  ColorRGBA();
ColorRGBA725.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet723.addChild(&ColorRGBA725);

Shape722.setGeometry(&LineSet723);

HAnimSegment718.addChild(&Shape722);

HAnimJoint717.addChildren(&HAnimSegment718);

HAnimJoint& HAnimJoint726 =  HAnimJoint();
HAnimJoint726.X3DNode::setName(CString("l_shoulder"));
HAnimJoint726.setDEF(CString("hanim_l_shoulder"));
HAnimJoint726.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimJoint726.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint726.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment727 =  HAnimSegment();
HAnimSegment727.X3DNode::setName(CString("l_upperarm"));
HAnimSegment727.setDEF(CString("hanim_l_upperarm"));
Transform& Transform728 =  Transform();
Transform728.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Transform& Transform729 =  Transform();
//Empty Transform
Shape& Shape730 =  Shape();
Shape730.setUSE(CString("HAnimJointShape"));
Transform729.addChild(&Shape730);

Transform728.addChild(&Transform729);

HAnimSegment727.addChild(&Transform728);

Shape& Shape731 =  Shape();
LineSet& LineSet732 =  LineSet();
LineSet732.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate733 =  Coordinate();
Coordinate733.setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet732.setCoord(Coordinate733);

//from l_shoulder to l_elbow vertices 2
ColorRGBA& ColorRGBA734 =  ColorRGBA();
ColorRGBA734.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet732.addChild(&ColorRGBA734);

Shape731.setGeometry(&LineSet732);

HAnimSegment727.addChild(&Shape731);

HAnimSite& HAnimSite735 =  HAnimSite();
HAnimSite735.X3DNode::setName(CString("l_bideltoid"));
HAnimSite735.setDEF(CString("hanim_l_bideltoid"));
TouchSensor& TouchSensor736 =  TouchSensor();
TouchSensor736.setDescription(CString("HAnimSite 96 l_bideltoid"));
HAnimSite735.addChild(&TouchSensor736);

Shape& Shape737 =  Shape();
Shape737.setUSE(CString("HAnimSiteShape"));
HAnimSite735.addChild(&Shape737);

Billboard& Billboard738 =  Billboard();
Shape& Shape739 =  Shape();
Text& Text740 =  Text();
Text740.setString(new CString[]{CString("96")}, 1);
CFontStyle& FontStyle741 =  CFontStyle();
FontStyle741.setSize(0.035);
Text740.setFontStyle(&FontStyle741);

Shape739.setGeometry(&Text740);

Billboard738.addChild(&Shape739);

HAnimSite735.addChild(Billboard738);

HAnimSegment727.addChild(&HAnimSite735);

HAnimSite& HAnimSite742 =  HAnimSite();
HAnimSite742.X3DNode::setName(CString("l_humeral_lateral_epicondyles"));
HAnimSite742.setDEF(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimSite742.setTranslation(new float[]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor743 =  TouchSensor();
TouchSensor743.setDescription(CString("HAnimSite 63 l_humeral_lateral_epicondyles"));
HAnimSite742.addChild(&TouchSensor743);

Shape& Shape744 =  Shape();
Shape744.setUSE(CString("HAnimSiteShape"));
HAnimSite742.addChild(&Shape744);

Billboard& Billboard745 =  Billboard();
Shape& Shape746 =  Shape();
Text& Text747 =  Text();
Text747.setString(new CString[]{CString("63")}, 1);
CFontStyle& FontStyle748 =  CFontStyle();
FontStyle748.setSize(0.035);
Text747.setFontStyle(&FontStyle748);

Shape746.setGeometry(&Text747);

Billboard745.addChild(&Shape746);

HAnimSite742.addChild(Billboard745);

HAnimSegment727.addChild(&HAnimSite742);

HAnimJoint726.addChildren(&HAnimSegment727);

HAnimJoint& HAnimJoint749 =  HAnimJoint();
HAnimJoint749.X3DNode::setName(CString("l_elbow"));
HAnimJoint749.setDEF(CString("hanim_l_elbow"));
HAnimJoint749.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimJoint749.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint749.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment750 =  HAnimSegment();
HAnimSegment750.X3DNode::setName(CString("l_forearm"));
HAnimSegment750.setDEF(CString("hanim_l_forearm"));
Transform& Transform751 =  Transform();
Transform751.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Transform& Transform752 =  Transform();
//Empty Transform
Shape& Shape753 =  Shape();
Shape753.setUSE(CString("HAnimJointShape"));
Transform752.addChild(&Shape753);

Transform751.addChild(&Transform752);

HAnimSegment750.addChild(&Transform751);

Shape& Shape754 =  Shape();
LineSet& LineSet755 =  LineSet();
LineSet755.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate756 =  Coordinate();
Coordinate756.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet755.setCoord(Coordinate756);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA& ColorRGBA757 =  ColorRGBA();
ColorRGBA757.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet755.addChild(&ColorRGBA757);

Shape754.setGeometry(&LineSet755);

HAnimSegment750.addChild(&Shape754);

HAnimSite& HAnimSite758 =  HAnimSite();
HAnimSite758.X3DNode::setName(CString("l_humeral_medial_epicondyles"));
HAnimSite758.setDEF(CString("hanim_l_humeral_medial_epicondyles"));
HAnimSite758.setTranslation(new float[]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor759 =  TouchSensor();
TouchSensor759.setDescription(CString("HAnimSite 64 l_humeral_medial_epicondyles"));
HAnimSite758.addChild(&TouchSensor759);

Shape& Shape760 =  Shape();
Shape760.setUSE(CString("HAnimSiteShape"));
HAnimSite758.addChild(&Shape760);

Billboard& Billboard761 =  Billboard();
Shape& Shape762 =  Shape();
Text& Text763 =  Text();
Text763.setString(new CString[]{CString("64")}, 1);
CFontStyle& FontStyle764 =  CFontStyle();
FontStyle764.setSize(0.035);
Text763.setFontStyle(&FontStyle764);

Shape762.setGeometry(&Text763);

Billboard761.addChild(&Shape762);

HAnimSite758.addChild(Billboard761);

HAnimSegment750.addChild(&HAnimSite758);

HAnimSite& HAnimSite765 =  HAnimSite();
HAnimSite765.X3DNode::setName(CString("l_olecranon"));
HAnimSite765.setDEF(CString("hanim_l_olecranon"));
HAnimSite765.setTranslation(new float[]{-0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor766 =  TouchSensor();
TouchSensor766.setDescription(CString("HAnimSite 65 l_olecranon"));
HAnimSite765.addChild(&TouchSensor766);

Shape& Shape767 =  Shape();
Shape767.setUSE(CString("HAnimSiteShape"));
HAnimSite765.addChild(&Shape767);

Billboard& Billboard768 =  Billboard();
Shape& Shape769 =  Shape();
Text& Text770 =  Text();
Text770.setString(new CString[]{CString("65")}, 1);
CFontStyle& FontStyle771 =  CFontStyle();
FontStyle771.setSize(0.035);
Text770.setFontStyle(&FontStyle771);

Shape769.setGeometry(&Text770);

Billboard768.addChild(&Shape769);

HAnimSite765.addChild(Billboard768);

HAnimSegment750.addChild(&HAnimSite765);

HAnimSite& HAnimSite772 =  HAnimSite();
HAnimSite772.X3DNode::setName(CString("l_radial_styloid"));
HAnimSite772.setDEF(CString("hanim_l_radial_styloid"));
HAnimSite772.setTranslation(new float[]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor773 =  TouchSensor();
TouchSensor773.setDescription(CString("HAnimSite 71 l_radial_styloid"));
HAnimSite772.addChild(&TouchSensor773);

Shape& Shape774 =  Shape();
Shape774.setUSE(CString("HAnimSiteShape"));
HAnimSite772.addChild(&Shape774);

Billboard& Billboard775 =  Billboard();
Shape& Shape776 =  Shape();
Text& Text777 =  Text();
Text777.setString(new CString[]{CString("71")}, 1);
CFontStyle& FontStyle778 =  CFontStyle();
FontStyle778.setSize(0.035);
Text777.setFontStyle(&FontStyle778);

Shape776.setGeometry(&Text777);

Billboard775.addChild(&Shape776);

HAnimSite772.addChild(Billboard775);

HAnimSegment750.addChild(&HAnimSite772);

HAnimSite& HAnimSite779 =  HAnimSite();
HAnimSite779.X3DNode::setName(CString("l_radiale"));
HAnimSite779.setDEF(CString("hanim_l_radiale"));
HAnimSite779.setTranslation(new float[]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor780 =  TouchSensor();
TouchSensor780.setDescription(CString("HAnimSite 69 l_radiale"));
HAnimSite779.addChild(&TouchSensor780);

Shape& Shape781 =  Shape();
Shape781.setUSE(CString("HAnimSiteShape"));
HAnimSite779.addChild(&Shape781);

Billboard& Billboard782 =  Billboard();
Shape& Shape783 =  Shape();
Text& Text784 =  Text();
Text784.setString(new CString[]{CString("69")}, 1);
CFontStyle& FontStyle785 =  CFontStyle();
FontStyle785.setSize(0.035);
Text784.setFontStyle(&FontStyle785);

Shape783.setGeometry(&Text784);

Billboard782.addChild(&Shape783);

HAnimSite779.addChild(Billboard782);

HAnimSegment750.addChild(&HAnimSite779);

HAnimJoint749.addChildren(&HAnimSegment750);

HAnimJoint& HAnimJoint786 =  HAnimJoint();
HAnimJoint786.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint786.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint786.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimJoint786.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint786.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment787 =  HAnimSegment();
HAnimSegment787.X3DNode::setName(CString("l_carpal"));
HAnimSegment787.setDEF(CString("hanim_l_carpal"));
Transform& Transform788 =  Transform();
Transform788.setScale(new float[]{0.2,0.2,0.2});
Transform788.setTranslation(new float[]{0.2,0.85,-0.05});
Transform788.setRotation(new float[]{0,0,1,-3.14});
//Transform left hand
Transform& Transform789 =  Transform();
Transform789.setRotation(new float[]{0,1,0,-1.57});
//Transform left hand
Shape& Shape790 =  Shape();
Shape790.setUSE(CString("HAnimJointShape"));
Transform789.addChild(&Shape790);

Transform788.addChild(&Transform789);

HAnimSegment787.addChild(&Transform788);

Shape& Shape791 =  Shape();
LineSet& LineSet792 =  LineSet();
LineSet792.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate793 =  Coordinate();
Coordinate793.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534}, 6);
LineSet792.setCoord(Coordinate793);

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA794 =  ColorRGBA();
ColorRGBA794.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet792.addChild(&ColorRGBA794);

Shape791.setGeometry(&LineSet792);

HAnimSegment787.addChild(&Shape791);

HAnimSite& HAnimSite795 =  HAnimSite();
HAnimSite795.X3DNode::setName(CString("l_ulnar_styloid"));
HAnimSite795.setDEF(CString("hanim_l_ulnar_styloid"));
HAnimSite795.setTranslation(new float[]{-0.2142,0.8529,-0.0648});
TouchSensor& TouchSensor796 =  TouchSensor();
TouchSensor796.setDescription(CString("HAnimSite 70 l_ulnar_styloid"));
HAnimSite795.addChild(&TouchSensor796);

Shape& Shape797 =  Shape();
Shape797.setUSE(CString("HAnimSiteShape"));
HAnimSite795.addChild(&Shape797);

Billboard& Billboard798 =  Billboard();
Shape& Shape799 =  Shape();
Text& Text800 =  Text();
Text800.setString(new CString[]{CString("70")}, 1);
CFontStyle& FontStyle801 =  CFontStyle();
FontStyle801.setSize(0.035);
Text800.setFontStyle(&FontStyle801);

Shape799.setGeometry(&Text800);

Billboard798.addChild(&Shape799);

HAnimSite795.addChild(Billboard798);

HAnimSegment787.addChild(&HAnimSite795);

Shape& Shape802 =  Shape();
LineSet& LineSet803 =  LineSet();
LineSet803.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate804 =  Coordinate();
Coordinate804.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028}, 6);
LineSet803.setCoord(Coordinate804);

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA805 =  ColorRGBA();
ColorRGBA805.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet803.addChild(&ColorRGBA805);

Shape802.setGeometry(&LineSet803);

HAnimSegment787.addChild(&Shape802);

Shape& Shape806 =  Shape();
LineSet& LineSet807 =  LineSet();
LineSet807.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate808 =  Coordinate();
Coordinate808.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053}, 6);
LineSet807.setCoord(Coordinate808);

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA809 =  ColorRGBA();
ColorRGBA809.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet807.addChild(&ColorRGBA809);

Shape806.setGeometry(&LineSet807);

HAnimSegment787.addChild(&Shape806);

Shape& Shape810 =  Shape();
LineSet& LineSet811 =  LineSet();
LineSet811.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate812 =  Coordinate();
Coordinate812.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794}, 6);
LineSet811.setCoord(Coordinate812);

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA813 =  ColorRGBA();
ColorRGBA813.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet811.addChild(&ColorRGBA813);

Shape810.setGeometry(&LineSet811);

HAnimSegment787.addChild(&Shape810);

Shape& Shape814 =  Shape();
LineSet& LineSet815 =  LineSet();
LineSet815.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate816 =  Coordinate();
Coordinate816.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036}, 6);
LineSet815.setCoord(Coordinate816);

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA817 =  ColorRGBA();
ColorRGBA817.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet815.addChild(&ColorRGBA817);

Shape814.setGeometry(&LineSet815);

HAnimSegment787.addChild(&Shape814);

HAnimJoint786.addChildren(&HAnimSegment787);

HAnimJoint& HAnimJoint818 =  HAnimJoint();
HAnimJoint818.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint818.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint818.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint818.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint818.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment819 =  HAnimSegment();
HAnimSegment819.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment819.setDEF(CString("hanim_l_metacarpal_1"));
Transform& Transform820 =  Transform();
Transform820.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Transform& Transform821 =  Transform();
//Empty Transform
Shape& Shape822 =  Shape();
Shape822.setUSE(CString("HAnimJointShape"));
Transform821.addChild(&Shape822);

Transform820.addChild(&Transform821);

HAnimSegment819.addChild(&Transform820);

Shape& Shape823 =  Shape();
LineSet& LineSet824 =  LineSet();
LineSet824.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate825 =  Coordinate();
Coordinate825.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet824.setCoord(Coordinate825);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA826 =  ColorRGBA();
ColorRGBA826.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet824.addChild(&ColorRGBA826);

Shape823.setGeometry(&LineSet824);

HAnimSegment819.addChild(&Shape823);

HAnimJoint818.addChildren(&HAnimSegment819);

HAnimJoint& HAnimJoint827 =  HAnimJoint();
HAnimJoint827.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint827.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint827.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint827.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint827.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment828 =  HAnimSegment();
HAnimSegment828.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment828.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform& Transform829 =  Transform();
Transform829.setTranslation(new float[]{0.1951,0.8226,0.0246});
Transform& Transform830 =  Transform();
//Empty Transform
Shape& Shape831 =  Shape();
Shape831.setUSE(CString("HAnimJointShape"));
Transform830.addChild(&Shape831);

Transform829.addChild(&Transform830);

HAnimSegment828.addChild(&Transform829);

Shape& Shape832 =  Shape();
LineSet& LineSet833 =  LineSet();
LineSet833.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate834 =  Coordinate();
Coordinate834.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet833.setCoord(Coordinate834);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA835 =  ColorRGBA();
ColorRGBA835.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet833.addChild(&ColorRGBA835);

Shape832.setGeometry(&LineSet833);

HAnimSegment828.addChild(&Shape832);

HAnimJoint827.addChildren(&HAnimSegment828);

HAnimJoint& HAnimJoint836 =  HAnimJoint();
HAnimJoint836.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint836.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint836.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint836.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint836.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint827.addChildren(&HAnimJoint836);

HAnimJoint818.addChildren(&HAnimJoint827);

HAnimJoint786.addChildren(&HAnimJoint818);

HAnimJoint& HAnimJoint837 =  HAnimJoint();
HAnimJoint837.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint837.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint837.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint837.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint837.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment838 =  HAnimSegment();
HAnimSegment838.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment838.setDEF(CString("hanim_l_metacarpal_2"));
Transform& Transform839 =  Transform();
Transform839.setTranslation(new float[]{0.1983,0.8024,-0.028});
Transform& Transform840 =  Transform();
//Empty Transform
Shape& Shape841 =  Shape();
Shape841.setUSE(CString("HAnimJointShape"));
Transform840.addChild(&Shape841);

Transform839.addChild(&Transform840);

HAnimSegment838.addChild(&Transform839);

Shape& Shape842 =  Shape();
LineSet& LineSet843 =  LineSet();
LineSet843.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate844 =  Coordinate();
Coordinate844.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet843.setCoord(Coordinate844);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA845 =  ColorRGBA();
ColorRGBA845.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet843.addChild(&ColorRGBA845);

Shape842.setGeometry(&LineSet843);

HAnimSegment838.addChild(&Shape842);

HAnimSite& HAnimSite846 =  HAnimSite();
HAnimSite846.X3DNode::setName(CString("l_metacarpal_phalanx_2"));
HAnimSite846.setDEF(CString("hanim_l_metacarpal_phalanx_2"));
HAnimSite846.setTranslation(new float[]{0.2009,0.8139,-0.0237});
TouchSensor& TouchSensor847 =  TouchSensor();
TouchSensor847.setDescription(CString("HAnimSite 75 l_metacarpal_phalanx_2"));
HAnimSite846.addChild(&TouchSensor847);

Shape& Shape848 =  Shape();
Shape848.setUSE(CString("HAnimSiteShape"));
HAnimSite846.addChild(&Shape848);

Billboard& Billboard849 =  Billboard();
Shape& Shape850 =  Shape();
Text& Text851 =  Text();
Text851.setString(new CString[]{CString("75")}, 1);
CFontStyle& FontStyle852 =  CFontStyle();
FontStyle852.setSize(0.035);
Text851.setFontStyle(&FontStyle852);

Shape850.setGeometry(&Text851);

Billboard849.addChild(&Shape850);

HAnimSite846.addChild(Billboard849);

HAnimSegment838.addChild(&HAnimSite846);

HAnimJoint837.addChildren(&HAnimSegment838);

HAnimJoint& HAnimJoint853 =  HAnimJoint();
HAnimJoint853.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint853.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint853.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint853.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint853.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment854 =  HAnimSegment();
HAnimSegment854.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment854.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform& Transform855 =  Transform();
Transform855.setTranslation(new float[]{0.1983,0.7815,-0.028});
Transform& Transform856 =  Transform();
//Empty Transform
Shape& Shape857 =  Shape();
Shape857.setUSE(CString("HAnimJointShape"));
Transform856.addChild(&Shape857);

Transform855.addChild(&Transform856);

HAnimSegment854.addChild(&Transform855);

Shape& Shape858 =  Shape();
LineSet& LineSet859 =  LineSet();
LineSet859.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate860 =  Coordinate();
Coordinate860.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet859.setCoord(Coordinate860);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA861 =  ColorRGBA();
ColorRGBA861.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet859.addChild(&ColorRGBA861);

Shape858.setGeometry(&LineSet859);

HAnimSegment854.addChild(&Shape858);

HAnimJoint853.addChildren(&HAnimSegment854);

HAnimJoint& HAnimJoint862 =  HAnimJoint();
HAnimJoint862.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint862.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint862.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint862.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint862.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment863 =  HAnimSegment();
HAnimSegment863.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment863.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform& Transform864 =  Transform();
Transform864.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Transform& Transform865 =  Transform();
//Empty Transform
Shape& Shape866 =  Shape();
Shape866.setUSE(CString("HAnimJointShape"));
Transform865.addChild(&Shape866);

Transform864.addChild(&Transform865);

HAnimSegment863.addChild(&Transform864);

Shape& Shape867 =  Shape();
LineSet& LineSet868 =  LineSet();
LineSet868.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate869 =  Coordinate();
Coordinate869.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet868.setCoord(Coordinate869);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA870 =  ColorRGBA();
ColorRGBA870.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet868.addChild(&ColorRGBA870);

Shape867.setGeometry(&LineSet868);

HAnimSegment863.addChild(&Shape867);

HAnimJoint862.addChildren(&HAnimSegment863);

HAnimJoint& HAnimJoint871 =  HAnimJoint();
HAnimJoint871.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint871.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint871.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint871.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint871.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint862.addChildren(&HAnimJoint871);

HAnimJoint853.addChildren(&HAnimJoint862);

HAnimJoint837.addChildren(&HAnimJoint853);

HAnimJoint786.addChildren(&HAnimJoint837);

HAnimJoint& HAnimJoint872 =  HAnimJoint();
HAnimJoint872.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint872.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint872.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint872.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint872.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment873 =  HAnimSegment();
HAnimSegment873.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment873.setDEF(CString("hanim_l_metacarpal_3"));
Transform& Transform874 =  Transform();
Transform874.setTranslation(new float[]{0.1987,0.8029,-0.053});
Transform& Transform875 =  Transform();
//Empty Transform
Shape& Shape876 =  Shape();
Shape876.setUSE(CString("HAnimJointShape"));
Transform875.addChild(&Shape876);

Transform874.addChild(&Transform875);

HAnimSegment873.addChild(&Transform874);

Shape& Shape877 =  Shape();
LineSet& LineSet878 =  LineSet();
LineSet878.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate879 =  Coordinate();
Coordinate879.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet878.setCoord(Coordinate879);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA880 =  ColorRGBA();
ColorRGBA880.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet878.addChild(&ColorRGBA880);

Shape877.setGeometry(&LineSet878);

HAnimSegment873.addChild(&Shape877);

HAnimSite& HAnimSite881 =  HAnimSite();
HAnimSite881.X3DNode::setName(CString("l_metacarpal_phalanx_3"));
HAnimSite881.setDEF(CString("hanim_l_metacarpal_phalanx_3"));
TouchSensor& TouchSensor882 =  TouchSensor();
TouchSensor882.setDescription(CString("HAnimSite 76 l_metacarpal_phalanx_3"));
HAnimSite881.addChild(&TouchSensor882);

Shape& Shape883 =  Shape();
Shape883.setUSE(CString("HAnimSiteShape"));
HAnimSite881.addChild(&Shape883);

Billboard& Billboard884 =  Billboard();
Shape& Shape885 =  Shape();
Text& Text886 =  Text();
Text886.setString(new CString[]{CString("76")}, 1);
CFontStyle& FontStyle887 =  CFontStyle();
FontStyle887.setSize(0.035);
Text886.setFontStyle(&FontStyle887);

Shape885.setGeometry(&Text886);

Billboard884.addChild(&Shape885);

HAnimSite881.addChild(Billboard884);

HAnimSegment873.addChild(&HAnimSite881);

HAnimJoint872.addChildren(&HAnimSegment873);

HAnimJoint& HAnimJoint888 =  HAnimJoint();
HAnimJoint888.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint888.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint888.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint888.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint888.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment889 =  HAnimSegment();
HAnimSegment889.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment889.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform& Transform890 =  Transform();
Transform890.setTranslation(new float[]{0.1987,0.7818,-0.053});
Transform& Transform891 =  Transform();
//Empty Transform
Shape& Shape892 =  Shape();
Shape892.setUSE(CString("HAnimJointShape"));
Transform891.addChild(&Shape892);

Transform890.addChild(&Transform891);

HAnimSegment889.addChild(&Transform890);

Shape& Shape893 =  Shape();
LineSet& LineSet894 =  LineSet();
LineSet894.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate895 =  Coordinate();
Coordinate895.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet894.setCoord(Coordinate895);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA896 =  ColorRGBA();
ColorRGBA896.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet894.addChild(&ColorRGBA896);

Shape893.setGeometry(&LineSet894);

HAnimSegment889.addChild(&Shape893);

HAnimJoint888.addChildren(&HAnimSegment889);

HAnimJoint& HAnimJoint897 =  HAnimJoint();
HAnimJoint897.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint897.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint897.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint897.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint897.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment898 =  HAnimSegment();
HAnimSegment898.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment898.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform& Transform899 =  Transform();
Transform899.setTranslation(new float[]{0.2013,0.7273,-0.0503});
Transform& Transform900 =  Transform();
//Empty Transform
Shape& Shape901 =  Shape();
Shape901.setUSE(CString("HAnimJointShape"));
Transform900.addChild(&Shape901);

Transform899.addChild(&Transform900);

HAnimSegment898.addChild(&Transform899);

Shape& Shape902 =  Shape();
LineSet& LineSet903 =  LineSet();
LineSet903.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate904 =  Coordinate();
Coordinate904.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet903.setCoord(Coordinate904);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA905 =  ColorRGBA();
ColorRGBA905.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet903.addChild(&ColorRGBA905);

Shape902.setGeometry(&LineSet903);

HAnimSegment898.addChild(&Shape902);

HAnimJoint897.addChildren(&HAnimSegment898);

HAnimJoint& HAnimJoint906 =  HAnimJoint();
HAnimJoint906.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint906.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint906.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint906.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint906.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint897.addChildren(&HAnimJoint906);

HAnimJoint888.addChildren(&HAnimJoint897);

HAnimJoint872.addChildren(&HAnimJoint888);

HAnimJoint786.addChildren(&HAnimJoint872);

HAnimJoint& HAnimJoint907 =  HAnimJoint();
HAnimJoint907.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint907.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint907.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint907.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint907.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment908 =  HAnimSegment();
HAnimSegment908.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment908.setDEF(CString("hanim_l_metacarpal_4"));
Transform& Transform909 =  Transform();
Transform909.setTranslation(new float[]{0.1956,0.8019,-0.0794});
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
Coordinate914.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet913.setCoord(Coordinate914);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA915 =  ColorRGBA();
ColorRGBA915.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet913.addChild(&ColorRGBA915);

Shape912.setGeometry(&LineSet913);

HAnimSegment908.addChild(&Shape912);

HAnimJoint907.addChildren(&HAnimSegment908);

HAnimJoint& HAnimJoint916 =  HAnimJoint();
HAnimJoint916.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint916.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint916.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint916.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint916.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment917 =  HAnimSegment();
HAnimSegment917.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment917.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform& Transform918 =  Transform();
Transform918.setTranslation(new float[]{0.1956,0.7815,-0.0794});
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
Coordinate923.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet922.setCoord(Coordinate923);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA924 =  ColorRGBA();
ColorRGBA924.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet922.addChild(&ColorRGBA924);

Shape921.setGeometry(&LineSet922);

HAnimSegment917.addChild(&Shape921);

HAnimJoint916.addChildren(&HAnimSegment917);

HAnimJoint& HAnimJoint925 =  HAnimJoint();
HAnimJoint925.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint925.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint925.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint925.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint925.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment926 =  HAnimSegment();
HAnimSegment926.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment926.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform& Transform927 =  Transform();
Transform927.setTranslation(new float[]{0.1973,0.7287,-0.0777});
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
Coordinate932.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet931.setCoord(Coordinate932);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA933 =  ColorRGBA();
ColorRGBA933.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet931.addChild(&ColorRGBA933);

Shape930.setGeometry(&LineSet931);

HAnimSegment926.addChild(&Shape930);

HAnimJoint925.addChildren(&HAnimSegment926);

HAnimJoint& HAnimJoint934 =  HAnimJoint();
HAnimJoint934.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint934.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint934.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint934.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint934.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint925.addChildren(&HAnimJoint934);

HAnimJoint916.addChildren(&HAnimJoint925);

HAnimJoint907.addChildren(&HAnimJoint916);

HAnimJoint786.addChildren(&HAnimJoint907);

HAnimJoint& HAnimJoint935 =  HAnimJoint();
HAnimJoint935.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint935.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint935.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint935.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint935.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment936 =  HAnimSegment();
HAnimSegment936.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment936.setDEF(CString("hanim_l_metacarpal_5"));
Transform& Transform937 =  Transform();
Transform937.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Transform& Transform938 =  Transform();
//Empty Transform
Shape& Shape939 =  Shape();
Shape939.setUSE(CString("HAnimJointShape"));
Transform938.addChild(&Shape939);

Transform937.addChild(&Transform938);

HAnimSegment936.addChild(&Transform937);

Shape& Shape940 =  Shape();
LineSet& LineSet941 =  LineSet();
LineSet941.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate942 =  Coordinate();
Coordinate942.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet941.setCoord(Coordinate942);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA943 =  ColorRGBA();
ColorRGBA943.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet941.addChild(&ColorRGBA943);

Shape940.setGeometry(&LineSet941);

HAnimSegment936.addChild(&Shape940);

HAnimSite& HAnimSite944 =  HAnimSite();
HAnimSite944.X3DNode::setName(CString("l_metacarpal_phalanx_5"));
HAnimSite944.setDEF(CString("hanim_l_metacarpal_phalanx_5"));
HAnimSite944.setTranslation(new float[]{0.1929,0.786,-0.1122});
TouchSensor& TouchSensor945 =  TouchSensor();
TouchSensor945.setDescription(CString("HAnimSite 77 l_metacarpal_phalanx_5"));
HAnimSite944.addChild(&TouchSensor945);

Shape& Shape946 =  Shape();
Shape946.setUSE(CString("HAnimSiteShape"));
HAnimSite944.addChild(&Shape946);

Billboard& Billboard947 =  Billboard();
Shape& Shape948 =  Shape();
Text& Text949 =  Text();
Text949.setString(new CString[]{CString("77")}, 1);
CFontStyle& FontStyle950 =  CFontStyle();
FontStyle950.setSize(0.035);
Text949.setFontStyle(&FontStyle950);

Shape948.setGeometry(&Text949);

Billboard947.addChild(&Shape948);

HAnimSite944.addChild(Billboard947);

HAnimSegment936.addChild(&HAnimSite944);

HAnimJoint935.addChildren(&HAnimSegment936);

HAnimJoint& HAnimJoint951 =  HAnimJoint();
HAnimJoint951.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint951.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint951.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint951.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint951.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment952 =  HAnimSegment();
HAnimSegment952.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment952.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform& Transform953 =  Transform();
Transform953.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Transform& Transform954 =  Transform();
//Empty Transform
Shape& Shape955 =  Shape();
Shape955.setUSE(CString("HAnimJointShape"));
Transform954.addChild(&Shape955);

Transform953.addChild(&Transform954);

HAnimSegment952.addChild(&Transform953);

Shape& Shape956 =  Shape();
LineSet& LineSet957 =  LineSet();
LineSet957.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate958 =  Coordinate();
Coordinate958.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet957.setCoord(Coordinate958);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA959 =  ColorRGBA();
ColorRGBA959.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet957.addChild(&ColorRGBA959);

Shape956.setGeometry(&LineSet957);

HAnimSegment952.addChild(&Shape956);

HAnimJoint951.addChildren(&HAnimSegment952);

HAnimJoint& HAnimJoint960 =  HAnimJoint();
HAnimJoint960.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint960.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint960.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint960.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint960.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment961 =  HAnimSegment();
HAnimSegment961.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment961.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform& Transform962 =  Transform();
Transform962.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Transform& Transform963 =  Transform();
//Empty Transform
Shape& Shape964 =  Shape();
Shape964.setUSE(CString("HAnimJointShape"));
Transform963.addChild(&Shape964);

Transform962.addChild(&Transform963);

HAnimSegment961.addChild(&Transform962);

Shape& Shape965 =  Shape();
LineSet& LineSet966 =  LineSet();
LineSet966.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate967 =  Coordinate();
Coordinate967.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet966.setCoord(Coordinate967);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA968 =  ColorRGBA();
ColorRGBA968.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet966.addChild(&ColorRGBA968);

Shape965.setGeometry(&LineSet966);

HAnimSegment961.addChild(&Shape965);

HAnimJoint960.addChildren(&HAnimSegment961);

HAnimJoint& HAnimJoint969 =  HAnimJoint();
HAnimJoint969.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint969.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint969.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint969.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint969.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint960.addChildren(&HAnimJoint969);

HAnimJoint951.addChildren(&HAnimJoint960);

HAnimJoint935.addChildren(&HAnimJoint951);

HAnimJoint786.addChildren(&HAnimJoint935);

HAnimJoint749.addChildren(&HAnimJoint786);

HAnimJoint726.addChildren(&HAnimJoint749);

HAnimJoint717.addChildren(&HAnimJoint726);

HAnimJoint673.addChildren(&HAnimJoint717);

HAnimJoint602.addChildren(&HAnimJoint673);

HAnimJoint& HAnimJoint970 =  HAnimJoint();
HAnimJoint970.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint970.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint970.setCenter(new float[]{-0.0694,1.46,-0.033});
HAnimJoint970.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint970.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment971 =  HAnimSegment();
HAnimSegment971.X3DNode::setName(CString("r_clavicle"));
HAnimSegment971.setDEF(CString("hanim_r_clavicle"));
Transform& Transform972 =  Transform();
Transform972.setTranslation(new float[]{-0.0694,1.46,-0.033});
Transform& Transform973 =  Transform();
//Empty Transform
Shape& Shape974 =  Shape();
Shape974.setUSE(CString("HAnimJointShape"));
Transform973.addChild(&Shape974);

Transform972.addChild(&Transform973);

HAnimSegment971.addChild(&Transform972);

Shape& Shape975 =  Shape();
LineSet& LineSet976 =  LineSet();
LineSet976.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate977 =  Coordinate();
Coordinate977.setPoint(new float[]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
LineSet976.setCoord(Coordinate977);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA& ColorRGBA978 =  ColorRGBA();
ColorRGBA978.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet976.addChild(&ColorRGBA978);

Shape975.setGeometry(&LineSet976);

HAnimSegment971.addChild(&Shape975);

HAnimSite& HAnimSite979 =  HAnimSite();
HAnimSite979.X3DNode::setName(CString("r_acromion"));
HAnimSite979.setDEF(CString("hanim_r_acromion"));
HAnimSite979.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor980 =  TouchSensor();
TouchSensor980.setDescription(CString("HAnimSite 20 r_acromion"));
HAnimSite979.addChild(&TouchSensor980);

Shape& Shape981 =  Shape();
Shape981.setUSE(CString("HAnimSiteShape"));
HAnimSite979.addChild(&Shape981);

Billboard& Billboard982 =  Billboard();
Shape& Shape983 =  Shape();
Text& Text984 =  Text();
Text984.setString(new CString[]{CString("20")}, 1);
CFontStyle& FontStyle985 =  CFontStyle();
FontStyle985.setSize(0.035);
Text984.setFontStyle(&FontStyle985);

Shape983.setGeometry(&Text984);

Billboard982.addChild(&Shape983);

HAnimSite979.addChild(Billboard982);

HAnimSegment971.addChild(&HAnimSite979);

HAnimSite& HAnimSite986 =  HAnimSite();
HAnimSite986.X3DNode::setName(CString("r_axilla_distal"));
HAnimSite986.setDEF(CString("hanim_r_axilla_distal"));
HAnimSite986.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor987 =  TouchSensor();
TouchSensor987.setDescription(CString("HAnimSite 22 r_axilla_distal"));
HAnimSite986.addChild(&TouchSensor987);

Shape& Shape988 =  Shape();
Shape988.setUSE(CString("HAnimSiteShape"));
HAnimSite986.addChild(&Shape988);

Billboard& Billboard989 =  Billboard();
Shape& Shape990 =  Shape();
Text& Text991 =  Text();
Text991.setString(new CString[]{CString("22")}, 1);
CFontStyle& FontStyle992 =  CFontStyle();
FontStyle992.setSize(0.035);
Text991.setFontStyle(&FontStyle992);

Shape990.setGeometry(&Text991);

Billboard989.addChild(&Shape990);

HAnimSite986.addChild(Billboard989);

HAnimSegment971.addChild(&HAnimSite986);

HAnimSite& HAnimSite993 =  HAnimSite();
HAnimSite993.X3DNode::setName(CString("r_axilla_posterior_folds"));
HAnimSite993.setDEF(CString("hanim_r_axilla_posterior_folds"));
TouchSensor& TouchSensor994 =  TouchSensor();
TouchSensor994.setDescription(CString("HAnimSite 23 r_axilla_posterior_folds"));
HAnimSite993.addChild(&TouchSensor994);

Shape& Shape995 =  Shape();
Shape995.setUSE(CString("HAnimSiteShape"));
HAnimSite993.addChild(&Shape995);

Billboard& Billboard996 =  Billboard();
Shape& Shape997 =  Shape();
Text& Text998 =  Text();
Text998.setString(new CString[]{CString("23")}, 1);
CFontStyle& FontStyle999 =  CFontStyle();
FontStyle999.setSize(0.035);
Text998.setFontStyle(&FontStyle999);

Shape997.setGeometry(&Text998);

Billboard996.addChild(&Shape997);

HAnimSite993.addChild(Billboard996);

HAnimSegment971.addChild(&HAnimSite993);

HAnimSite& HAnimSite1000 =  HAnimSite();
HAnimSite1000.X3DNode::setName(CString("r_axilla_proximal"));
HAnimSite1000.setDEF(CString("hanim_r_axilla_proximal"));
HAnimSite1000.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor1001 =  TouchSensor();
TouchSensor1001.setDescription(CString("HAnimSite 21 r_axilla_proximal"));
HAnimSite1000.addChild(&TouchSensor1001);

Shape& Shape1002 =  Shape();
Shape1002.setUSE(CString("HAnimSiteShape"));
HAnimSite1000.addChild(&Shape1002);

Billboard& Billboard1003 =  Billboard();
Shape& Shape1004 =  Shape();
Text& Text1005 =  Text();
Text1005.setString(new CString[]{CString("21")}, 1);
CFontStyle& FontStyle1006 =  CFontStyle();
FontStyle1006.setSize(0.035);
Text1005.setFontStyle(&FontStyle1006);

Shape1004.setGeometry(&Text1005);

Billboard1003.addChild(&Shape1004);

HAnimSite1000.addChild(Billboard1003);

HAnimSegment971.addChild(&HAnimSite1000);

HAnimSite& HAnimSite1007 =  HAnimSite();
HAnimSite1007.X3DNode::setName(CString("r_clavicale"));
HAnimSite1007.setDEF(CString("hanim_r_clavicale"));
HAnimSite1007.setTranslation(new float[]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor1008 =  TouchSensor();
TouchSensor1008.setDescription(CString("HAnimSite 19 r_clavicale"));
HAnimSite1007.addChild(&TouchSensor1008);

Shape& Shape1009 =  Shape();
Shape1009.setUSE(CString("HAnimSiteShape"));
HAnimSite1007.addChild(&Shape1009);

Billboard& Billboard1010 =  Billboard();
Shape& Shape1011 =  Shape();
Text& Text1012 =  Text();
Text1012.setString(new CString[]{CString("19")}, 1);
CFontStyle& FontStyle1013 =  CFontStyle();
FontStyle1013.setSize(0.035);
Text1012.setFontStyle(&FontStyle1013);

Shape1011.setGeometry(&Text1012);

Billboard1010.addChild(&Shape1011);

HAnimSite1007.addChild(Billboard1010);

HAnimSegment971.addChild(&HAnimSite1007);

HAnimJoint970.addChildren(&HAnimSegment971);

HAnimJoint& HAnimJoint1014 =  HAnimJoint();
HAnimJoint1014.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint1014.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1014.setCenter(new float[]{-0.0836,1.4281,-0.0401});
HAnimJoint1014.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1014.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1015 =  HAnimSegment();
HAnimSegment1015.X3DNode::setName(CString("r_scapula"));
HAnimSegment1015.setDEF(CString("hanim_r_scapula"));
Transform& Transform1016 =  Transform();
Transform1016.setTranslation(new float[]{-0.0836,1.4281,-0.0401});
Transform& Transform1017 =  Transform();
//Empty Transform
Shape& Shape1018 =  Shape();
Shape1018.setUSE(CString("HAnimJointShape"));
Transform1017.addChild(&Shape1018);

Transform1016.addChild(&Transform1017);

HAnimSegment1015.addChild(&Transform1016);

Shape& Shape1019 =  Shape();
LineSet& LineSet1020 =  LineSet();
LineSet1020.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1021 =  Coordinate();
Coordinate1021.setPoint(new float[]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
LineSet1020.setCoord(Coordinate1021);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA& ColorRGBA1022 =  ColorRGBA();
ColorRGBA1022.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1020.addChild(&ColorRGBA1022);

Shape1019.setGeometry(&LineSet1020);

HAnimSegment1015.addChild(&Shape1019);

HAnimJoint1014.addChildren(&HAnimSegment1015);

HAnimJoint& HAnimJoint1023 =  HAnimJoint();
HAnimJoint1023.X3DNode::setName(CString("r_shoulder"));
HAnimJoint1023.setDEF(CString("hanim_r_shoulder"));
HAnimJoint1023.setCenter(new float[]{-0.1907,1.4407,-0.0325});
HAnimJoint1023.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1023.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1024 =  HAnimSegment();
HAnimSegment1024.X3DNode::setName(CString("r_upperarm"));
HAnimSegment1024.setDEF(CString("hanim_r_upperarm"));
Transform& Transform1025 =  Transform();
Transform1025.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Transform& Transform1026 =  Transform();
//Empty Transform
Shape& Shape1027 =  Shape();
Shape1027.setUSE(CString("HAnimJointShape"));
Transform1026.addChild(&Shape1027);

Transform1025.addChild(&Transform1026);

HAnimSegment1024.addChild(&Transform1025);

Shape& Shape1028 =  Shape();
LineSet& LineSet1029 =  LineSet();
LineSet1029.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1030 =  Coordinate();
Coordinate1030.setPoint(new float[]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet1029.setCoord(Coordinate1030);

//from r_shoulder to r_elbow vertices 2
ColorRGBA& ColorRGBA1031 =  ColorRGBA();
ColorRGBA1031.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1029.addChild(&ColorRGBA1031);

Shape1028.setGeometry(&LineSet1029);

HAnimSegment1024.addChild(&Shape1028);

HAnimSite& HAnimSite1032 =  HAnimSite();
HAnimSite1032.X3DNode::setName(CString("r_bideltoid"));
HAnimSite1032.setDEF(CString("hanim_r_bideltoid"));
TouchSensor& TouchSensor1033 =  TouchSensor();
TouchSensor1033.setDescription(CString("HAnimSite 97 r_bideltoid"));
HAnimSite1032.addChild(&TouchSensor1033);

Shape& Shape1034 =  Shape();
Shape1034.setUSE(CString("HAnimSiteShape"));
HAnimSite1032.addChild(&Shape1034);

Billboard& Billboard1035 =  Billboard();
Shape& Shape1036 =  Shape();
Text& Text1037 =  Text();
Text1037.setString(new CString[]{CString("97")}, 1);
CFontStyle& FontStyle1038 =  CFontStyle();
FontStyle1038.setSize(0.035);
Text1037.setFontStyle(&FontStyle1038);

Shape1036.setGeometry(&Text1037);

Billboard1035.addChild(&Shape1036);

HAnimSite1032.addChild(Billboard1035);

HAnimSegment1024.addChild(&HAnimSite1032);

HAnimSite& HAnimSite1039 =  HAnimSite();
HAnimSite1039.X3DNode::setName(CString("r_humeral_lateral_epicondyles"));
HAnimSite1039.setDEF(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimSite1039.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor1040 =  TouchSensor();
TouchSensor1040.setDescription(CString("HAnimSite 66 r_humeral_lateral_epicondyles"));
HAnimSite1039.addChild(&TouchSensor1040);

Shape& Shape1041 =  Shape();
Shape1041.setUSE(CString("HAnimSiteShape"));
HAnimSite1039.addChild(&Shape1041);

Billboard& Billboard1042 =  Billboard();
Shape& Shape1043 =  Shape();
Text& Text1044 =  Text();
Text1044.setString(new CString[]{CString("66")}, 1);
CFontStyle& FontStyle1045 =  CFontStyle();
FontStyle1045.setSize(0.035);
Text1044.setFontStyle(&FontStyle1045);

Shape1043.setGeometry(&Text1044);

Billboard1042.addChild(&Shape1043);

HAnimSite1039.addChild(Billboard1042);

HAnimSegment1024.addChild(&HAnimSite1039);

HAnimJoint1023.addChildren(&HAnimSegment1024);

HAnimJoint& HAnimJoint1046 =  HAnimJoint();
HAnimJoint1046.X3DNode::setName(CString("r_elbow"));
HAnimJoint1046.setDEF(CString("hanim_r_elbow"));
HAnimJoint1046.setCenter(new float[]{-0.1949,1.1388,-0.062});
HAnimJoint1046.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1046.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1047 =  HAnimSegment();
HAnimSegment1047.X3DNode::setName(CString("r_forearm"));
HAnimSegment1047.setDEF(CString("hanim_r_forearm"));
Transform& Transform1048 =  Transform();
Transform1048.setTranslation(new float[]{-0.1949,1.1388,-0.062});
Transform& Transform1049 =  Transform();
//Empty Transform
Shape& Shape1050 =  Shape();
Shape1050.setUSE(CString("HAnimJointShape"));
Transform1049.addChild(&Shape1050);

Transform1048.addChild(&Transform1049);

HAnimSegment1047.addChild(&Transform1048);

Shape& Shape1051 =  Shape();
LineSet& LineSet1052 =  LineSet();
LineSet1052.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1053 =  Coordinate();
Coordinate1053.setPoint(new float[]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet1052.setCoord(Coordinate1053);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA& ColorRGBA1054 =  ColorRGBA();
ColorRGBA1054.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1052.addChild(&ColorRGBA1054);

Shape1051.setGeometry(&LineSet1052);

HAnimSegment1047.addChild(&Shape1051);

HAnimSite& HAnimSite1055 =  HAnimSite();
HAnimSite1055.X3DNode::setName(CString("r_humeral_medial_epicondyles"));
HAnimSite1055.setDEF(CString("hanim_r_humeral_medial_epicondyles"));
HAnimSite1055.setTranslation(new float[]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor1056 =  TouchSensor();
TouchSensor1056.setDescription(CString("HAnimSite 67 r_humeral_medial_epicondyles"));
HAnimSite1055.addChild(&TouchSensor1056);

Shape& Shape1057 =  Shape();
Shape1057.setUSE(CString("HAnimSiteShape"));
HAnimSite1055.addChild(&Shape1057);

Billboard& Billboard1058 =  Billboard();
Shape& Shape1059 =  Shape();
Text& Text1060 =  Text();
Text1060.setString(new CString[]{CString("67")}, 1);
CFontStyle& FontStyle1061 =  CFontStyle();
FontStyle1061.setSize(0.035);
Text1060.setFontStyle(&FontStyle1061);

Shape1059.setGeometry(&Text1060);

Billboard1058.addChild(&Shape1059);

HAnimSite1055.addChild(Billboard1058);

HAnimSegment1047.addChild(&HAnimSite1055);

HAnimSite& HAnimSite1062 =  HAnimSite();
HAnimSite1062.X3DNode::setName(CString("r_olecranon"));
HAnimSite1062.setDEF(CString("hanim_r_olecranon"));
HAnimSite1062.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor1063 =  TouchSensor();
TouchSensor1063.setDescription(CString("HAnimSite 68 r_olecranon"));
HAnimSite1062.addChild(&TouchSensor1063);

Shape& Shape1064 =  Shape();
Shape1064.setUSE(CString("HAnimSiteShape"));
HAnimSite1062.addChild(&Shape1064);

Billboard& Billboard1065 =  Billboard();
Shape& Shape1066 =  Shape();
Text& Text1067 =  Text();
Text1067.setString(new CString[]{CString("68")}, 1);
CFontStyle& FontStyle1068 =  CFontStyle();
FontStyle1068.setSize(0.035);
Text1067.setFontStyle(&FontStyle1068);

Shape1066.setGeometry(&Text1067);

Billboard1065.addChild(&Shape1066);

HAnimSite1062.addChild(Billboard1065);

HAnimSegment1047.addChild(&HAnimSite1062);

HAnimSite& HAnimSite1069 =  HAnimSite();
HAnimSite1069.X3DNode::setName(CString("r_radial_styloid"));
HAnimSite1069.setDEF(CString("hanim_r_radial_styloid"));
HAnimSite1069.setTranslation(new float[]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor1070 =  TouchSensor();
TouchSensor1070.setDescription(CString("HAnimSite 74 r_radial_styloid"));
HAnimSite1069.addChild(&TouchSensor1070);

Shape& Shape1071 =  Shape();
Shape1071.setUSE(CString("HAnimSiteShape"));
HAnimSite1069.addChild(&Shape1071);

Billboard& Billboard1072 =  Billboard();
Shape& Shape1073 =  Shape();
Text& Text1074 =  Text();
Text1074.setString(new CString[]{CString("74")}, 1);
CFontStyle& FontStyle1075 =  CFontStyle();
FontStyle1075.setSize(0.035);
Text1074.setFontStyle(&FontStyle1075);

Shape1073.setGeometry(&Text1074);

Billboard1072.addChild(&Shape1073);

HAnimSite1069.addChild(Billboard1072);

HAnimSegment1047.addChild(&HAnimSite1069);

HAnimSite& HAnimSite1076 =  HAnimSite();
HAnimSite1076.X3DNode::setName(CString("r_radiale"));
HAnimSite1076.setDEF(CString("hanim_r_radiale"));
HAnimSite1076.setTranslation(new float[]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor1077 =  TouchSensor();
TouchSensor1077.setDescription(CString("HAnimSite 72 r_radiale"));
HAnimSite1076.addChild(&TouchSensor1077);

Shape& Shape1078 =  Shape();
Shape1078.setUSE(CString("HAnimSiteShape"));
HAnimSite1076.addChild(&Shape1078);

Billboard& Billboard1079 =  Billboard();
Shape& Shape1080 =  Shape();
Text& Text1081 =  Text();
Text1081.setString(new CString[]{CString("72")}, 1);
CFontStyle& FontStyle1082 =  CFontStyle();
FontStyle1082.setSize(0.035);
Text1081.setFontStyle(&FontStyle1082);

Shape1080.setGeometry(&Text1081);

Billboard1079.addChild(&Shape1080);

HAnimSite1076.addChild(Billboard1079);

HAnimSegment1047.addChild(&HAnimSite1076);

HAnimJoint1046.addChildren(&HAnimSegment1047);

HAnimJoint& HAnimJoint1083 =  HAnimJoint();
HAnimJoint1083.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint1083.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint1083.setCenter(new float[]{-0.1959,0.8694,-0.0521});
HAnimJoint1083.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1083.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1084 =  HAnimSegment();
HAnimSegment1084.X3DNode::setName(CString("r_carpal"));
HAnimSegment1084.setDEF(CString("hanim_r_carpal"));
Transform& Transform1085 =  Transform();
Transform1085.setScale(new float[]{0.2,0.2,0.2});
Transform1085.setTranslation(new float[]{-0.2,0.85,-0.05});
Transform1085.setRotation(new float[]{0,0,1,-3.14});
//Transform right hand
Transform& Transform1086 =  Transform();
Transform1086.setRotation(new float[]{0,1,0,1.57});
//Transform right hand
Shape& Shape1087 =  Shape();
Shape1087.setUSE(CString("HAnimJointShape"));
Transform1086.addChild(&Shape1087);

Transform1085.addChild(&Transform1086);

HAnimSegment1084.addChild(&Transform1085);

Shape& Shape1088 =  Shape();
LineSet& LineSet1089 =  LineSet();
LineSet1089.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1090 =  Coordinate();
Coordinate1090.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473}, 6);
LineSet1089.setCoord(Coordinate1090);

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1091 =  ColorRGBA();
ColorRGBA1091.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1089.addChild(&ColorRGBA1091);

Shape1088.setGeometry(&LineSet1089);

HAnimSegment1084.addChild(&Shape1088);

HAnimSite& HAnimSite1092 =  HAnimSite();
HAnimSite1092.X3DNode::setName(CString("r_ulnar_styloid"));
HAnimSite1092.setDEF(CString("hanim_r_ulnar_styloid"));
HAnimSite1092.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
TouchSensor& TouchSensor1093 =  TouchSensor();
TouchSensor1093.setDescription(CString("HAnimSite 73 r_ulnar_styloid"));
HAnimSite1092.addChild(&TouchSensor1093);

Shape& Shape1094 =  Shape();
Shape1094.setUSE(CString("HAnimSiteShape"));
HAnimSite1092.addChild(&Shape1094);

Billboard& Billboard1095 =  Billboard();
Shape& Shape1096 =  Shape();
Text& Text1097 =  Text();
Text1097.setString(new CString[]{CString("73")}, 1);
CFontStyle& FontStyle1098 =  CFontStyle();
FontStyle1098.setSize(0.035);
Text1097.setFontStyle(&FontStyle1098);

Shape1096.setGeometry(&Text1097);

Billboard1095.addChild(&Shape1096);

HAnimSite1092.addChild(Billboard1095);

HAnimSegment1084.addChild(&HAnimSite1092);

Shape& Shape1099 =  Shape();
LineSet& LineSet1100 =  LineSet();
LineSet1100.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1101 =  Coordinate();
Coordinate1101.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218}, 6);
LineSet1100.setCoord(Coordinate1101);

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1102 =  ColorRGBA();
ColorRGBA1102.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1100.addChild(&ColorRGBA1102);

Shape1099.setGeometry(&LineSet1100);

HAnimSegment1084.addChild(&Shape1099);

Shape& Shape1103 =  Shape();
LineSet& LineSet1104 =  LineSet();
LineSet1104.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1105 =  Coordinate();
Coordinate1105.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468}, 6);
LineSet1104.setCoord(Coordinate1105);

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1106 =  ColorRGBA();
ColorRGBA1106.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1104.addChild(&ColorRGBA1106);

Shape1103.setGeometry(&LineSet1104);

HAnimSegment1084.addChild(&Shape1103);

Shape& Shape1107 =  Shape();
LineSet& LineSet1108 =  LineSet();
LineSet1108.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1109 =  Coordinate();
Coordinate1109.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732}, 6);
LineSet1108.setCoord(Coordinate1109);

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1110 =  ColorRGBA();
ColorRGBA1110.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1108.addChild(&ColorRGBA1110);

Shape1107.setGeometry(&LineSet1108);

HAnimSegment1084.addChild(&Shape1107);

Shape& Shape1111 =  Shape();
LineSet& LineSet1112 =  LineSet();
LineSet1112.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1113 =  Coordinate();
Coordinate1113.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975}, 6);
LineSet1112.setCoord(Coordinate1113);

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1114 =  ColorRGBA();
ColorRGBA1114.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1112.addChild(&ColorRGBA1114);

Shape1111.setGeometry(&LineSet1112);

HAnimSegment1084.addChild(&Shape1111);

HAnimJoint1083.addChildren(&HAnimSegment1084);

HAnimJoint& HAnimJoint1115 =  HAnimJoint();
HAnimJoint1115.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint1115.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint1115.setCenter(new float[]{-0.1899,0.8502,-0.0473});
HAnimJoint1115.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1115.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1116 =  HAnimSegment();
HAnimSegment1116.X3DNode::setName(CString("r_metacarpal_1"));
HAnimSegment1116.setDEF(CString("hanim_r_metacarpal_1"));
Transform& Transform1117 =  Transform();
Transform1117.setTranslation(new float[]{-0.1899,0.8502,-0.0473});
Transform& Transform1118 =  Transform();
//Empty Transform
Shape& Shape1119 =  Shape();
Shape1119.setUSE(CString("HAnimJointShape"));
Transform1118.addChild(&Shape1119);

Transform1117.addChild(&Transform1118);

HAnimSegment1116.addChild(&Transform1117);

Shape& Shape1120 =  Shape();
LineSet& LineSet1121 =  LineSet();
LineSet1121.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1122 =  Coordinate();
Coordinate1122.setPoint(new float[]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
LineSet1121.setCoord(Coordinate1122);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1123 =  ColorRGBA();
ColorRGBA1123.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1121.addChild(&ColorRGBA1123);

Shape1120.setGeometry(&LineSet1121);

HAnimSegment1116.addChild(&Shape1120);

HAnimJoint1115.addChildren(&HAnimSegment1116);

HAnimJoint& HAnimJoint1124 =  HAnimJoint();
HAnimJoint1124.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1124.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint1124.setCenter(new float[]{-0.1874,0.8256,0.0306});
HAnimJoint1124.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1124.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1125 =  HAnimSegment();
HAnimSegment1125.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1125.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform& Transform1126 =  Transform();
Transform1126.setTranslation(new float[]{-0.1874,0.8256,0.0306});
Transform& Transform1127 =  Transform();
//Empty Transform
Shape& Shape1128 =  Shape();
Shape1128.setUSE(CString("HAnimJointShape"));
Transform1127.addChild(&Shape1128);

Transform1126.addChild(&Transform1127);

HAnimSegment1125.addChild(&Transform1126);

Shape& Shape1129 =  Shape();
LineSet& LineSet1130 =  LineSet();
LineSet1130.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1131 =  Coordinate();
Coordinate1131.setPoint(new float[]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
LineSet1130.setCoord(Coordinate1131);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1132 =  ColorRGBA();
ColorRGBA1132.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1130.addChild(&ColorRGBA1132);

Shape1129.setGeometry(&LineSet1130);

HAnimSegment1125.addChild(&Shape1129);

HAnimJoint1124.addChildren(&HAnimSegment1125);

HAnimJoint& HAnimJoint1133 =  HAnimJoint();
HAnimJoint1133.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1133.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint1133.setCenter(new float[]{-0.1864,0.819,0.0506});
HAnimJoint1133.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1133.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1124.addChildren(&HAnimJoint1133);

HAnimJoint1115.addChildren(&HAnimJoint1124);

HAnimJoint1083.addChildren(&HAnimJoint1115);

HAnimJoint& HAnimJoint1134 =  HAnimJoint();
HAnimJoint1134.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint1134.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint1134.setCenter(new float[]{-0.1961,0.8055,-0.0218});
HAnimJoint1134.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1134.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1135 =  HAnimSegment();
HAnimSegment1135.X3DNode::setName(CString("r_metacarpal_2"));
HAnimSegment1135.setDEF(CString("hanim_r_metacarpal_2"));
Transform& Transform1136 =  Transform();
Transform1136.setTranslation(new float[]{-0.1961,0.8055,-0.0218});
Transform& Transform1137 =  Transform();
//Empty Transform
Shape& Shape1138 =  Shape();
Shape1138.setUSE(CString("HAnimJointShape"));
Transform1137.addChild(&Shape1138);

Transform1136.addChild(&Transform1137);

HAnimSegment1135.addChild(&Transform1136);

Shape& Shape1139 =  Shape();
LineSet& LineSet1140 =  LineSet();
LineSet1140.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1141 =  Coordinate();
Coordinate1141.setPoint(new float[]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
LineSet1140.setCoord(Coordinate1141);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1142 =  ColorRGBA();
ColorRGBA1142.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1140.addChild(&ColorRGBA1142);

Shape1139.setGeometry(&LineSet1140);

HAnimSegment1135.addChild(&Shape1139);

HAnimSite& HAnimSite1143 =  HAnimSite();
HAnimSite1143.X3DNode::setName(CString("r_metacarpal_phalanx_2"));
HAnimSite1143.setDEF(CString("hanim_r_metacarpal_phalanx_2"));
HAnimSite1143.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
TouchSensor& TouchSensor1144 =  TouchSensor();
TouchSensor1144.setDescription(CString("HAnimSite 78 r_metacarpal_phalanx_2"));
HAnimSite1143.addChild(&TouchSensor1144);

Shape& Shape1145 =  Shape();
Shape1145.setUSE(CString("HAnimSiteShape"));
HAnimSite1143.addChild(&Shape1145);

Billboard& Billboard1146 =  Billboard();
Shape& Shape1147 =  Shape();
Text& Text1148 =  Text();
Text1148.setString(new CString[]{CString("78")}, 1);
CFontStyle& FontStyle1149 =  CFontStyle();
FontStyle1149.setSize(0.035);
Text1148.setFontStyle(&FontStyle1149);

Shape1147.setGeometry(&Text1148);

Billboard1146.addChild(&Shape1147);

HAnimSite1143.addChild(Billboard1146);

HAnimSegment1135.addChild(&HAnimSite1143);

HAnimJoint1134.addChildren(&HAnimSegment1135);

HAnimJoint& HAnimJoint1150 =  HAnimJoint();
HAnimJoint1150.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1150.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint1150.setCenter(new float[]{-0.1961,0.7846,-0.0218});
HAnimJoint1150.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1150.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1151 =  HAnimSegment();
HAnimSegment1151.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1151.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform& Transform1152 =  Transform();
Transform1152.setTranslation(new float[]{-0.1961,0.7846,-0.0218});
Transform& Transform1153 =  Transform();
//Empty Transform
Shape& Shape1154 =  Shape();
Shape1154.setUSE(CString("HAnimJointShape"));
Transform1153.addChild(&Shape1154);

Transform1152.addChild(&Transform1153);

HAnimSegment1151.addChild(&Transform1152);

Shape& Shape1155 =  Shape();
LineSet& LineSet1156 =  LineSet();
LineSet1156.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1157 =  Coordinate();
Coordinate1157.setPoint(new float[]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
LineSet1156.setCoord(Coordinate1157);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1158 =  ColorRGBA();
ColorRGBA1158.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1156.addChild(&ColorRGBA1158);

Shape1155.setGeometry(&LineSet1156);

HAnimSegment1151.addChild(&Shape1155);

HAnimJoint1150.addChildren(&HAnimSegment1151);

HAnimJoint& HAnimJoint1159 =  HAnimJoint();
HAnimJoint1159.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1159.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1159.setCenter(new float[]{-0.1954,0.7393,-0.0185});
HAnimJoint1159.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1159.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1160 =  HAnimSegment();
HAnimSegment1160.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1160.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform& Transform1161 =  Transform();
Transform1161.setTranslation(new float[]{-0.1954,0.7393,-0.0185});
Transform& Transform1162 =  Transform();
//Empty Transform
Shape& Shape1163 =  Shape();
Shape1163.setUSE(CString("HAnimJointShape"));
Transform1162.addChild(&Shape1163);

Transform1161.addChild(&Transform1162);

HAnimSegment1160.addChild(&Transform1161);

Shape& Shape1164 =  Shape();
LineSet& LineSet1165 =  LineSet();
LineSet1165.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1166 =  Coordinate();
Coordinate1166.setPoint(new float[]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
LineSet1165.setCoord(Coordinate1166);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1167 =  ColorRGBA();
ColorRGBA1167.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1165.addChild(&ColorRGBA1167);

Shape1164.setGeometry(&LineSet1165);

HAnimSegment1160.addChild(&Shape1164);

HAnimJoint1159.addChildren(&HAnimSegment1160);

HAnimJoint& HAnimJoint1168 =  HAnimJoint();
HAnimJoint1168.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1168.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint1168.setCenter(new float[]{-0.1945,0.7169,-0.0173});
HAnimJoint1168.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1168.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1159.addChildren(&HAnimJoint1168);

HAnimJoint1150.addChildren(&HAnimJoint1159);

HAnimJoint1134.addChildren(&HAnimJoint1150);

HAnimJoint1083.addChildren(&HAnimJoint1134);

HAnimJoint& HAnimJoint1169 =  HAnimJoint();
HAnimJoint1169.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint1169.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint1169.setCenter(new float[]{-0.1972,0.806,-0.0468});
HAnimJoint1169.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1169.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1170 =  HAnimSegment();
HAnimSegment1170.X3DNode::setName(CString("r_metacarpal_3"));
HAnimSegment1170.setDEF(CString("hanim_r_metacarpal_3"));
Transform& Transform1171 =  Transform();
Transform1171.setTranslation(new float[]{-0.1972,0.806,-0.0468});
Transform& Transform1172 =  Transform();
//Empty Transform
Shape& Shape1173 =  Shape();
Shape1173.setUSE(CString("HAnimJointShape"));
Transform1172.addChild(&Shape1173);

Transform1171.addChild(&Transform1172);

HAnimSegment1170.addChild(&Transform1171);

Shape& Shape1174 =  Shape();
LineSet& LineSet1175 =  LineSet();
LineSet1175.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1176 =  Coordinate();
Coordinate1176.setPoint(new float[]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
LineSet1175.setCoord(Coordinate1176);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1177 =  ColorRGBA();
ColorRGBA1177.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1175.addChild(&ColorRGBA1177);

Shape1174.setGeometry(&LineSet1175);

HAnimSegment1170.addChild(&Shape1174);

HAnimSite& HAnimSite1178 =  HAnimSite();
HAnimSite1178.X3DNode::setName(CString("r_metacarpal_phalanx_3"));
HAnimSite1178.setDEF(CString("hanim_r_metacarpal_phalanx_3"));
TouchSensor& TouchSensor1179 =  TouchSensor();
TouchSensor1179.setDescription(CString("HAnimSite 79 r_metacarpal_phalanx_3"));
HAnimSite1178.addChild(&TouchSensor1179);

Shape& Shape1180 =  Shape();
Shape1180.setUSE(CString("HAnimSiteShape"));
HAnimSite1178.addChild(&Shape1180);

Billboard& Billboard1181 =  Billboard();
Shape& Shape1182 =  Shape();
Text& Text1183 =  Text();
Text1183.setString(new CString[]{CString("79")}, 1);
CFontStyle& FontStyle1184 =  CFontStyle();
FontStyle1184.setSize(0.035);
Text1183.setFontStyle(&FontStyle1184);

Shape1182.setGeometry(&Text1183);

Billboard1181.addChild(&Shape1182);

HAnimSite1178.addChild(Billboard1181);

HAnimSegment1170.addChild(&HAnimSite1178);

HAnimJoint1169.addChildren(&HAnimSegment1170);

HAnimJoint& HAnimJoint1185 =  HAnimJoint();
HAnimJoint1185.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1185.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint1185.setCenter(new float[]{-0.1972,0.7849,-0.0468});
HAnimJoint1185.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1185.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1186 =  HAnimSegment();
HAnimSegment1186.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1186.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform& Transform1187 =  Transform();
Transform1187.setTranslation(new float[]{-0.1972,0.7849,-0.0468});
Transform& Transform1188 =  Transform();
//Empty Transform
Shape& Shape1189 =  Shape();
Shape1189.setUSE(CString("HAnimJointShape"));
Transform1188.addChild(&Shape1189);

Transform1187.addChild(&Transform1188);

HAnimSegment1186.addChild(&Transform1187);

Shape& Shape1190 =  Shape();
LineSet& LineSet1191 =  LineSet();
LineSet1191.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1192 =  Coordinate();
Coordinate1192.setPoint(new float[]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
LineSet1191.setCoord(Coordinate1192);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1193 =  ColorRGBA();
ColorRGBA1193.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1191.addChild(&ColorRGBA1193);

Shape1190.setGeometry(&LineSet1191);

HAnimSegment1186.addChild(&Shape1190);

HAnimJoint1185.addChildren(&HAnimSegment1186);

HAnimJoint& HAnimJoint1194 =  HAnimJoint();
HAnimJoint1194.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1194.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1194.setCenter(new float[]{-0.195,0.7304,-0.0441});
HAnimJoint1194.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1194.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1195 =  HAnimSegment();
HAnimSegment1195.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1195.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform& Transform1196 =  Transform();
Transform1196.setTranslation(new float[]{-0.195,0.7304,-0.0441});
Transform& Transform1197 =  Transform();
//Empty Transform
Shape& Shape1198 =  Shape();
Shape1198.setUSE(CString("HAnimJointShape"));
Transform1197.addChild(&Shape1198);

Transform1196.addChild(&Transform1197);

HAnimSegment1195.addChild(&Transform1196);

Shape& Shape1199 =  Shape();
LineSet& LineSet1200 =  LineSet();
LineSet1200.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1201 =  Coordinate();
Coordinate1201.setPoint(new float[]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
LineSet1200.setCoord(Coordinate1201);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1202 =  ColorRGBA();
ColorRGBA1202.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1200.addChild(&ColorRGBA1202);

Shape1199.setGeometry(&LineSet1200);

HAnimSegment1195.addChild(&Shape1199);

HAnimJoint1194.addChildren(&HAnimSegment1195);

HAnimJoint& HAnimJoint1203 =  HAnimJoint();
HAnimJoint1203.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1203.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint1203.setCenter(new float[]{-0.1939,0.7042,-0.0432});
HAnimJoint1203.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1203.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1194.addChildren(&HAnimJoint1203);

HAnimJoint1185.addChildren(&HAnimJoint1194);

HAnimJoint1169.addChildren(&HAnimJoint1185);

HAnimJoint1083.addChildren(&HAnimJoint1169);

HAnimJoint& HAnimJoint1204 =  HAnimJoint();
HAnimJoint1204.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint1204.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint1204.setCenter(new float[]{-0.1951,0.8049,-0.0732});
HAnimJoint1204.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1204.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1205 =  HAnimSegment();
HAnimSegment1205.X3DNode::setName(CString("r_metacarpal_4"));
HAnimSegment1205.setDEF(CString("hanim_r_metacarpal_4"));
Transform& Transform1206 =  Transform();
Transform1206.setTranslation(new float[]{-0.1951,0.8049,-0.0732});
Transform& Transform1207 =  Transform();
//Empty Transform
Shape& Shape1208 =  Shape();
Shape1208.setUSE(CString("HAnimJointShape"));
Transform1207.addChild(&Shape1208);

Transform1206.addChild(&Transform1207);

HAnimSegment1205.addChild(&Transform1206);

Shape& Shape1209 =  Shape();
LineSet& LineSet1210 =  LineSet();
LineSet1210.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1211 =  Coordinate();
Coordinate1211.setPoint(new float[]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
LineSet1210.setCoord(Coordinate1211);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1212 =  ColorRGBA();
ColorRGBA1212.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1210.addChild(&ColorRGBA1212);

Shape1209.setGeometry(&LineSet1210);

HAnimSegment1205.addChild(&Shape1209);

HAnimJoint1204.addChildren(&HAnimSegment1205);

HAnimJoint& HAnimJoint1213 =  HAnimJoint();
HAnimJoint1213.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1213.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint1213.setCenter(new float[]{-0.1951,0.7845,-0.0732});
HAnimJoint1213.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1213.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1214 =  HAnimSegment();
HAnimSegment1214.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1214.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform& Transform1215 =  Transform();
Transform1215.setTranslation(new float[]{-0.1951,0.7845,-0.0732});
Transform& Transform1216 =  Transform();
//Empty Transform
Shape& Shape1217 =  Shape();
Shape1217.setUSE(CString("HAnimJointShape"));
Transform1216.addChild(&Shape1217);

Transform1215.addChild(&Transform1216);

HAnimSegment1214.addChild(&Transform1215);

Shape& Shape1218 =  Shape();
LineSet& LineSet1219 =  LineSet();
LineSet1219.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1220 =  Coordinate();
Coordinate1220.setPoint(new float[]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
LineSet1219.setCoord(Coordinate1220);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1221 =  ColorRGBA();
ColorRGBA1221.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1219.addChild(&ColorRGBA1221);

Shape1218.setGeometry(&LineSet1219);

HAnimSegment1214.addChild(&Shape1218);

HAnimJoint1213.addChildren(&HAnimSegment1214);

HAnimJoint& HAnimJoint1222 =  HAnimJoint();
HAnimJoint1222.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1222.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1222.setCenter(new float[]{-0.192,0.7318,-0.0716});
HAnimJoint1222.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1222.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1223 =  HAnimSegment();
HAnimSegment1223.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1223.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform& Transform1224 =  Transform();
Transform1224.setTranslation(new float[]{-0.192,0.7318,-0.0716});
Transform& Transform1225 =  Transform();
//Empty Transform
Shape& Shape1226 =  Shape();
Shape1226.setUSE(CString("HAnimJointShape"));
Transform1225.addChild(&Shape1226);

Transform1224.addChild(&Transform1225);

HAnimSegment1223.addChild(&Transform1224);

Shape& Shape1227 =  Shape();
LineSet& LineSet1228 =  LineSet();
LineSet1228.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1229 =  Coordinate();
Coordinate1229.setPoint(new float[]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
LineSet1228.setCoord(Coordinate1229);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1230 =  ColorRGBA();
ColorRGBA1230.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1228.addChild(&ColorRGBA1230);

Shape1227.setGeometry(&LineSet1228);

HAnimSegment1223.addChild(&Shape1227);

HAnimJoint1222.addChildren(&HAnimSegment1223);

HAnimJoint& HAnimJoint1231 =  HAnimJoint();
HAnimJoint1231.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1231.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint1231.setCenter(new float[]{-0.1908,0.7077,-0.0706});
HAnimJoint1231.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1231.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1222.addChildren(&HAnimJoint1231);

HAnimJoint1213.addChildren(&HAnimJoint1222);

HAnimJoint1204.addChildren(&HAnimJoint1213);

HAnimJoint1083.addChildren(&HAnimJoint1204);

HAnimJoint& HAnimJoint1232 =  HAnimJoint();
HAnimJoint1232.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint1232.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint1232.setCenter(new float[]{-0.1926,0.8096,-0.0975});
HAnimJoint1232.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1232.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1233 =  HAnimSegment();
HAnimSegment1233.X3DNode::setName(CString("r_metacarpal_5"));
HAnimSegment1233.setDEF(CString("hanim_r_metacarpal_5"));
Transform& Transform1234 =  Transform();
Transform1234.setTranslation(new float[]{-0.1926,0.8096,-0.0975});
Transform& Transform1235 =  Transform();
//Empty Transform
Shape& Shape1236 =  Shape();
Shape1236.setUSE(CString("HAnimJointShape"));
Transform1235.addChild(&Shape1236);

Transform1234.addChild(&Transform1235);

HAnimSegment1233.addChild(&Transform1234);

Shape& Shape1237 =  Shape();
LineSet& LineSet1238 =  LineSet();
LineSet1238.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1239 =  Coordinate();
Coordinate1239.setPoint(new float[]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
LineSet1238.setCoord(Coordinate1239);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1240 =  ColorRGBA();
ColorRGBA1240.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1238.addChild(&ColorRGBA1240);

Shape1237.setGeometry(&LineSet1238);

HAnimSegment1233.addChild(&Shape1237);

HAnimSite& HAnimSite1241 =  HAnimSite();
HAnimSite1241.X3DNode::setName(CString("r_metacarpal_phalanx_5"));
HAnimSite1241.setDEF(CString("hanim_r_metacarpal_phalanx_5"));
HAnimSite1241.setTranslation(new float[]{-0.1929,0.789,-0.1064});
TouchSensor& TouchSensor1242 =  TouchSensor();
TouchSensor1242.setDescription(CString("HAnimSite 80 r_metacarpal_phalanx_5"));
HAnimSite1241.addChild(&TouchSensor1242);

Shape& Shape1243 =  Shape();
Shape1243.setUSE(CString("HAnimSiteShape"));
HAnimSite1241.addChild(&Shape1243);

Billboard& Billboard1244 =  Billboard();
Shape& Shape1245 =  Shape();
Text& Text1246 =  Text();
Text1246.setString(new CString[]{CString("80")}, 1);
CFontStyle& FontStyle1247 =  CFontStyle();
FontStyle1247.setSize(0.035);
Text1246.setFontStyle(&FontStyle1247);

Shape1245.setGeometry(&Text1246);

Billboard1244.addChild(&Shape1245);

HAnimSite1241.addChild(Billboard1244);

HAnimSegment1233.addChild(&HAnimSite1241);

HAnimJoint1232.addChildren(&HAnimSegment1233);

HAnimJoint& HAnimJoint1248 =  HAnimJoint();
HAnimJoint1248.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1248.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint1248.setCenter(new float[]{-0.1926,0.7896,-0.0975});
HAnimJoint1248.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1248.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1249 =  HAnimSegment();
HAnimSegment1249.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1249.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform& Transform1250 =  Transform();
Transform1250.setTranslation(new float[]{-0.1926,0.7896,-0.0975});
Transform& Transform1251 =  Transform();
//Empty Transform
Shape& Shape1252 =  Shape();
Shape1252.setUSE(CString("HAnimJointShape"));
Transform1251.addChild(&Shape1252);

Transform1250.addChild(&Transform1251);

HAnimSegment1249.addChild(&Transform1250);

Shape& Shape1253 =  Shape();
LineSet& LineSet1254 =  LineSet();
LineSet1254.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1255 =  Coordinate();
Coordinate1255.setPoint(new float[]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
LineSet1254.setCoord(Coordinate1255);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1256 =  ColorRGBA();
ColorRGBA1256.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1254.addChild(&ColorRGBA1256);

Shape1253.setGeometry(&LineSet1254);

HAnimSegment1249.addChild(&Shape1253);

HAnimJoint1248.addChildren(&HAnimSegment1249);

HAnimJoint& HAnimJoint1257 =  HAnimJoint();
HAnimJoint1257.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1257.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1257.setCenter(new float[]{-0.1902,0.7483,-0.0963});
HAnimJoint1257.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1257.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1258 =  HAnimSegment();
HAnimSegment1258.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1258.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform& Transform1259 =  Transform();
Transform1259.setTranslation(new float[]{-0.1902,0.7483,-0.0963});
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
Coordinate1264.setPoint(new float[]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
LineSet1263.setCoord(Coordinate1264);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1265 =  ColorRGBA();
ColorRGBA1265.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1263.addChild(&ColorRGBA1265);

Shape1262.setGeometry(&LineSet1263);

HAnimSegment1258.addChild(&Shape1262);

HAnimJoint1257.addChildren(&HAnimSegment1258);

HAnimJoint& HAnimJoint1266 =  HAnimJoint();
HAnimJoint1266.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1266.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint1266.setCenter(new float[]{-0.1908,0.754,-0.096});
HAnimJoint1266.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1266.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1257.addChildren(&HAnimJoint1266);

HAnimJoint1248.addChildren(&HAnimJoint1257);

HAnimJoint1232.addChildren(&HAnimJoint1248);

HAnimJoint1083.addChildren(&HAnimJoint1232);

HAnimJoint1046.addChildren(&HAnimJoint1083);

HAnimJoint1023.addChildren(&HAnimJoint1046);

HAnimJoint1014.addChildren(&HAnimJoint1023);

HAnimJoint970.addChildren(&HAnimJoint1014);

HAnimJoint602.addChildren(&HAnimJoint970);

HAnimJoint565.addChildren(&HAnimJoint602);

HAnimJoint535.addChildren(&HAnimJoint565);

HAnimJoint526.addChildren(&HAnimJoint535);

HAnimJoint489.addChildren(&HAnimJoint526);

HAnimJoint459.addChildren(&HAnimJoint489);

HAnimJoint47.addChildren(&HAnimJoint459);

HAnimHumanoid38.setSkeleton(&HAnimJoint47);

HAnimJoint& HAnimJoint1267 =  HAnimJoint();
HAnimJoint1267.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid38.setJoints(&HAnimJoint1267);

HAnimJoint& HAnimJoint1268 =  HAnimJoint();
HAnimJoint1268.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid38.setJoints(&HAnimJoint1268);

HAnimJoint& HAnimJoint1269 =  HAnimJoint();
HAnimJoint1269.setUSE(CString("hanim_l_hip"));
HAnimHumanoid38.setJoints(&HAnimJoint1269);

HAnimJoint& HAnimJoint1270 =  HAnimJoint();
HAnimJoint1270.setUSE(CString("hanim_l_knee"));
HAnimHumanoid38.setJoints(&HAnimJoint1270);

HAnimJoint& HAnimJoint1271 =  HAnimJoint();
HAnimJoint1271.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid38.setJoints(&HAnimJoint1271);

HAnimJoint& HAnimJoint1272 =  HAnimJoint();
HAnimJoint1272.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1272);

HAnimJoint& HAnimJoint1273 =  HAnimJoint();
HAnimJoint1273.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1273);

HAnimJoint& HAnimJoint1274 =  HAnimJoint();
HAnimJoint1274.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1274);

HAnimJoint& HAnimJoint1275 =  HAnimJoint();
HAnimJoint1275.setUSE(CString("hanim_r_hip"));
HAnimHumanoid38.setJoints(&HAnimJoint1275);

HAnimJoint& HAnimJoint1276 =  HAnimJoint();
HAnimJoint1276.setUSE(CString("hanim_r_knee"));
HAnimHumanoid38.setJoints(&HAnimJoint1276);

HAnimJoint& HAnimJoint1277 =  HAnimJoint();
HAnimJoint1277.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid38.setJoints(&HAnimJoint1277);

HAnimJoint& HAnimJoint1278 =  HAnimJoint();
HAnimJoint1278.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1278);

HAnimJoint& HAnimJoint1279 =  HAnimJoint();
HAnimJoint1279.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1279);

HAnimJoint& HAnimJoint1280 =  HAnimJoint();
HAnimJoint1280.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1280);

HAnimJoint& HAnimJoint1281 =  HAnimJoint();
HAnimJoint1281.setUSE(CString("hanim_vl5"));
HAnimHumanoid38.setJoints(&HAnimJoint1281);

HAnimJoint& HAnimJoint1282 =  HAnimJoint();
HAnimJoint1282.setUSE(CString("hanim_vl3"));
HAnimHumanoid38.setJoints(&HAnimJoint1282);

HAnimJoint& HAnimJoint1283 =  HAnimJoint();
HAnimJoint1283.setUSE(CString("hanim_vl1"));
HAnimHumanoid38.setJoints(&HAnimJoint1283);

HAnimJoint& HAnimJoint1284 =  HAnimJoint();
HAnimJoint1284.setUSE(CString("hanim_vt10"));
HAnimHumanoid38.setJoints(&HAnimJoint1284);

HAnimJoint& HAnimJoint1285 =  HAnimJoint();
HAnimJoint1285.setUSE(CString("hanim_vt6"));
HAnimHumanoid38.setJoints(&HAnimJoint1285);

HAnimJoint& HAnimJoint1286 =  HAnimJoint();
HAnimJoint1286.setUSE(CString("hanim_vt1"));
HAnimHumanoid38.setJoints(&HAnimJoint1286);

HAnimJoint& HAnimJoint1287 =  HAnimJoint();
HAnimJoint1287.setUSE(CString("hanim_vc4"));
HAnimHumanoid38.setJoints(&HAnimJoint1287);

HAnimJoint& HAnimJoint1288 =  HAnimJoint();
HAnimJoint1288.setUSE(CString("hanim_vc2"));
HAnimHumanoid38.setJoints(&HAnimJoint1288);

HAnimJoint& HAnimJoint1289 =  HAnimJoint();
HAnimJoint1289.setUSE(CString("hanim_skullbase"));
HAnimHumanoid38.setJoints(&HAnimJoint1289);

HAnimJoint& HAnimJoint1290 =  HAnimJoint();
HAnimJoint1290.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1290);

HAnimJoint& HAnimJoint1291 =  HAnimJoint();
HAnimJoint1291.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1291);

HAnimJoint& HAnimJoint1292 =  HAnimJoint();
HAnimJoint1292.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid38.setJoints(&HAnimJoint1292);

HAnimJoint& HAnimJoint1293 =  HAnimJoint();
HAnimJoint1293.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid38.setJoints(&HAnimJoint1293);

HAnimJoint& HAnimJoint1294 =  HAnimJoint();
HAnimJoint1294.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid38.setJoints(&HAnimJoint1294);

HAnimJoint& HAnimJoint1295 =  HAnimJoint();
HAnimJoint1295.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1295);

HAnimJoint& HAnimJoint1296 =  HAnimJoint();
HAnimJoint1296.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1296);

HAnimJoint& HAnimJoint1297 =  HAnimJoint();
HAnimJoint1297.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1297);

HAnimJoint& HAnimJoint1298 =  HAnimJoint();
HAnimJoint1298.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1298);

HAnimJoint& HAnimJoint1299 =  HAnimJoint();
HAnimJoint1299.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1299);

HAnimJoint& HAnimJoint1300 =  HAnimJoint();
HAnimJoint1300.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1300);

HAnimJoint& HAnimJoint1301 =  HAnimJoint();
HAnimJoint1301.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1301);

HAnimJoint& HAnimJoint1302 =  HAnimJoint();
HAnimJoint1302.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1302);

HAnimJoint& HAnimJoint1303 =  HAnimJoint();
HAnimJoint1303.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1303);

HAnimJoint& HAnimJoint1304 =  HAnimJoint();
HAnimJoint1304.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1304);

HAnimJoint& HAnimJoint1305 =  HAnimJoint();
HAnimJoint1305.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1305);

HAnimJoint& HAnimJoint1306 =  HAnimJoint();
HAnimJoint1306.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1306);

HAnimJoint& HAnimJoint1307 =  HAnimJoint();
HAnimJoint1307.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1307);

HAnimJoint& HAnimJoint1308 =  HAnimJoint();
HAnimJoint1308.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1308);

HAnimJoint& HAnimJoint1309 =  HAnimJoint();
HAnimJoint1309.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1309);

HAnimJoint& HAnimJoint1310 =  HAnimJoint();
HAnimJoint1310.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1310);

HAnimJoint& HAnimJoint1311 =  HAnimJoint();
HAnimJoint1311.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1311);

HAnimJoint& HAnimJoint1312 =  HAnimJoint();
HAnimJoint1312.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1312);

HAnimJoint& HAnimJoint1313 =  HAnimJoint();
HAnimJoint1313.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1313);

HAnimJoint& HAnimJoint1314 =  HAnimJoint();
HAnimJoint1314.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1314);

HAnimJoint& HAnimJoint1315 =  HAnimJoint();
HAnimJoint1315.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1315);

HAnimJoint& HAnimJoint1316 =  HAnimJoint();
HAnimJoint1316.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid38.setJoints(&HAnimJoint1316);

HAnimJoint& HAnimJoint1317 =  HAnimJoint();
HAnimJoint1317.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid38.setJoints(&HAnimJoint1317);

HAnimJoint& HAnimJoint1318 =  HAnimJoint();
HAnimJoint1318.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid38.setJoints(&HAnimJoint1318);

HAnimJoint& HAnimJoint1319 =  HAnimJoint();
HAnimJoint1319.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1319);

HAnimJoint& HAnimJoint1320 =  HAnimJoint();
HAnimJoint1320.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1320);

HAnimJoint& HAnimJoint1321 =  HAnimJoint();
HAnimJoint1321.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1321);

HAnimJoint& HAnimJoint1322 =  HAnimJoint();
HAnimJoint1322.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1322);

HAnimJoint& HAnimJoint1323 =  HAnimJoint();
HAnimJoint1323.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1323);

HAnimJoint& HAnimJoint1324 =  HAnimJoint();
HAnimJoint1324.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1324);

HAnimJoint& HAnimJoint1325 =  HAnimJoint();
HAnimJoint1325.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1325);

HAnimJoint& HAnimJoint1326 =  HAnimJoint();
HAnimJoint1326.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1326);

HAnimJoint& HAnimJoint1327 =  HAnimJoint();
HAnimJoint1327.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1327);

HAnimJoint& HAnimJoint1328 =  HAnimJoint();
HAnimJoint1328.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1328);

HAnimJoint& HAnimJoint1329 =  HAnimJoint();
HAnimJoint1329.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1329);

HAnimJoint& HAnimJoint1330 =  HAnimJoint();
HAnimJoint1330.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1330);

HAnimJoint& HAnimJoint1331 =  HAnimJoint();
HAnimJoint1331.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1331);

HAnimJoint& HAnimJoint1332 =  HAnimJoint();
HAnimJoint1332.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1332);

HAnimJoint& HAnimJoint1333 =  HAnimJoint();
HAnimJoint1333.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1333);

HAnimJoint& HAnimJoint1334 =  HAnimJoint();
HAnimJoint1334.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1334);

HAnimJoint& HAnimJoint1335 =  HAnimJoint();
HAnimJoint1335.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1335);

HAnimJoint& HAnimJoint1336 =  HAnimJoint();
HAnimJoint1336.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1336);

HAnimJoint& HAnimJoint1337 =  HAnimJoint();
HAnimJoint1337.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1337);

HAnimSegment& HAnimSegment1338 =  HAnimSegment();
HAnimSegment1338.setUSE(CString("hanim_sacrum"));
HAnimHumanoid38.setSegments(&HAnimSegment1338);

HAnimSegment& HAnimSegment1339 =  HAnimSegment();
HAnimSegment1339.setUSE(CString("hanim_pelvis"));
HAnimHumanoid38.setSegments(&HAnimSegment1339);

HAnimSegment& HAnimSegment1340 =  HAnimSegment();
HAnimSegment1340.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid38.setSegments(&HAnimSegment1340);

HAnimSegment& HAnimSegment1341 =  HAnimSegment();
HAnimSegment1341.setUSE(CString("hanim_l_calf"));
HAnimHumanoid38.setSegments(&HAnimSegment1341);

HAnimSegment& HAnimSegment1342 =  HAnimSegment();
HAnimSegment1342.setUSE(CString("hanim_l_talus"));
HAnimHumanoid38.setSegments(&HAnimSegment1342);

HAnimSegment& HAnimSegment1343 =  HAnimSegment();
HAnimSegment1343.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1343);

HAnimSegment& HAnimSegment1344 =  HAnimSegment();
HAnimSegment1344.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1344);

HAnimSegment& HAnimSegment1345 =  HAnimSegment();
HAnimSegment1345.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid38.setSegments(&HAnimSegment1345);

HAnimSegment& HAnimSegment1346 =  HAnimSegment();
HAnimSegment1346.setUSE(CString("hanim_r_calf"));
HAnimHumanoid38.setSegments(&HAnimSegment1346);

HAnimSegment& HAnimSegment1347 =  HAnimSegment();
HAnimSegment1347.setUSE(CString("hanim_r_talus"));
HAnimHumanoid38.setSegments(&HAnimSegment1347);

HAnimSegment& HAnimSegment1348 =  HAnimSegment();
HAnimSegment1348.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1348);

HAnimSegment& HAnimSegment1349 =  HAnimSegment();
HAnimSegment1349.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1349);

HAnimSegment& HAnimSegment1350 =  HAnimSegment();
HAnimSegment1350.setUSE(CString("hanim_l5"));
HAnimHumanoid38.setSegments(&HAnimSegment1350);

HAnimSegment& HAnimSegment1351 =  HAnimSegment();
HAnimSegment1351.setUSE(CString("hanim_l3"));
HAnimHumanoid38.setSegments(&HAnimSegment1351);

HAnimSegment& HAnimSegment1352 =  HAnimSegment();
HAnimSegment1352.setUSE(CString("hanim_l1"));
HAnimHumanoid38.setSegments(&HAnimSegment1352);

HAnimSegment& HAnimSegment1353 =  HAnimSegment();
HAnimSegment1353.setUSE(CString("hanim_t10"));
HAnimHumanoid38.setSegments(&HAnimSegment1353);

HAnimSegment& HAnimSegment1354 =  HAnimSegment();
HAnimSegment1354.setUSE(CString("hanim_t6"));
HAnimHumanoid38.setSegments(&HAnimSegment1354);

HAnimSegment& HAnimSegment1355 =  HAnimSegment();
HAnimSegment1355.setUSE(CString("hanim_t1"));
HAnimHumanoid38.setSegments(&HAnimSegment1355);

HAnimSegment& HAnimSegment1356 =  HAnimSegment();
HAnimSegment1356.setUSE(CString("hanim_c4"));
HAnimHumanoid38.setSegments(&HAnimSegment1356);

HAnimSegment& HAnimSegment1357 =  HAnimSegment();
HAnimSegment1357.setUSE(CString("hanim_c2"));
HAnimHumanoid38.setSegments(&HAnimSegment1357);

HAnimSegment& HAnimSegment1358 =  HAnimSegment();
HAnimSegment1358.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid38.setSegments(&HAnimSegment1358);

HAnimSegment& HAnimSegment1359 =  HAnimSegment();
HAnimSegment1359.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid38.setSegments(&HAnimSegment1359);

HAnimSegment& HAnimSegment1360 =  HAnimSegment();
HAnimSegment1360.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid38.setSegments(&HAnimSegment1360);

HAnimSegment& HAnimSegment1361 =  HAnimSegment();
HAnimSegment1361.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid38.setSegments(&HAnimSegment1361);

HAnimSegment& HAnimSegment1362 =  HAnimSegment();
HAnimSegment1362.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid38.setSegments(&HAnimSegment1362);

HAnimSegment& HAnimSegment1363 =  HAnimSegment();
HAnimSegment1363.setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid38.setSegments(&HAnimSegment1363);

HAnimSegment& HAnimSegment1364 =  HAnimSegment();
HAnimSegment1364.setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid38.setSegments(&HAnimSegment1364);

HAnimSegment& HAnimSegment1365 =  HAnimSegment();
HAnimSegment1365.setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1365);

HAnimSegment& HAnimSegment1366 =  HAnimSegment();
HAnimSegment1366.setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1366);

HAnimSegment& HAnimSegment1367 =  HAnimSegment();
HAnimSegment1367.setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1367);

HAnimSegment& HAnimSegment1368 =  HAnimSegment();
HAnimSegment1368.setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1368);

HAnimSegment& HAnimSegment1369 =  HAnimSegment();
HAnimSegment1369.setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1369);

HAnimSegment& HAnimSegment1370 =  HAnimSegment();
HAnimSegment1370.setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1370);

HAnimSegment& HAnimSegment1371 =  HAnimSegment();
HAnimSegment1371.setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1371);

HAnimSegment& HAnimSegment1372 =  HAnimSegment();
HAnimSegment1372.setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1372);

HAnimSegment& HAnimSegment1373 =  HAnimSegment();
HAnimSegment1373.setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1373);

HAnimSegment& HAnimSegment1374 =  HAnimSegment();
HAnimSegment1374.setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1374);

HAnimSegment& HAnimSegment1375 =  HAnimSegment();
HAnimSegment1375.setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1375);

HAnimSegment& HAnimSegment1376 =  HAnimSegment();
HAnimSegment1376.setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1376);

HAnimSegment& HAnimSegment1377 =  HAnimSegment();
HAnimSegment1377.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid38.setSegments(&HAnimSegment1377);

HAnimSegment& HAnimSegment1378 =  HAnimSegment();
HAnimSegment1378.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid38.setSegments(&HAnimSegment1378);

HAnimSegment& HAnimSegment1379 =  HAnimSegment();
HAnimSegment1379.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid38.setSegments(&HAnimSegment1379);

HAnimSegment& HAnimSegment1380 =  HAnimSegment();
HAnimSegment1380.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid38.setSegments(&HAnimSegment1380);

HAnimSegment& HAnimSegment1381 =  HAnimSegment();
HAnimSegment1381.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid38.setSegments(&HAnimSegment1381);

HAnimSegment& HAnimSegment1382 =  HAnimSegment();
HAnimSegment1382.setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid38.setSegments(&HAnimSegment1382);

HAnimSegment& HAnimSegment1383 =  HAnimSegment();
HAnimSegment1383.setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid38.setSegments(&HAnimSegment1383);

HAnimSegment& HAnimSegment1384 =  HAnimSegment();
HAnimSegment1384.setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1384);

HAnimSegment& HAnimSegment1385 =  HAnimSegment();
HAnimSegment1385.setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1385);

HAnimSegment& HAnimSegment1386 =  HAnimSegment();
HAnimSegment1386.setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1386);

HAnimSegment& HAnimSegment1387 =  HAnimSegment();
HAnimSegment1387.setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1387);

HAnimSegment& HAnimSegment1388 =  HAnimSegment();
HAnimSegment1388.setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1388);

HAnimSegment& HAnimSegment1389 =  HAnimSegment();
HAnimSegment1389.setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1389);

HAnimSegment& HAnimSegment1390 =  HAnimSegment();
HAnimSegment1390.setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1390);

HAnimSegment& HAnimSegment1391 =  HAnimSegment();
HAnimSegment1391.setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1391);

HAnimSegment& HAnimSegment1392 =  HAnimSegment();
HAnimSegment1392.setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1392);

HAnimSegment& HAnimSegment1393 =  HAnimSegment();
HAnimSegment1393.setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1393);

HAnimSegment& HAnimSegment1394 =  HAnimSegment();
HAnimSegment1394.setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1394);

HAnimSegment& HAnimSegment1395 =  HAnimSegment();
HAnimSegment1395.setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1395);

HAnimSite& HAnimSite1396 =  HAnimSite();
HAnimSite1396.setUSE(CString("hanim_buttocks_standing_wall_contact_point"));
HAnimHumanoid38.setSites(&HAnimSite1396);

HAnimSite& HAnimSite1397 =  HAnimSite();
HAnimSite1397.setUSE(CString("hanim_crotch"));
HAnimHumanoid38.setSites(&HAnimSite1397);

HAnimSite& HAnimSite1398 =  HAnimSite();
HAnimSite1398.setUSE(CString("hanim_l_asis"));
HAnimHumanoid38.setSites(&HAnimSite1398);

HAnimSite& HAnimSite1399 =  HAnimSite();
HAnimSite1399.setUSE(CString("hanim_l_iliocristale"));
HAnimHumanoid38.setSites(&HAnimSite1399);

HAnimSite& HAnimSite1400 =  HAnimSite();
HAnimSite1400.setUSE(CString("hanim_l_psis"));
HAnimHumanoid38.setSites(&HAnimSite1400);

HAnimSite& HAnimSite1401 =  HAnimSite();
HAnimSite1401.setUSE(CString("hanim_l_trochanterion"));
HAnimHumanoid38.setSites(&HAnimSite1401);

HAnimSite& HAnimSite1402 =  HAnimSite();
HAnimSite1402.setUSE(CString("hanim_r_asis"));
HAnimHumanoid38.setSites(&HAnimSite1402);

HAnimSite& HAnimSite1403 =  HAnimSite();
HAnimSite1403.setUSE(CString("hanim_r_iliocristale"));
HAnimHumanoid38.setSites(&HAnimSite1403);

HAnimSite& HAnimSite1404 =  HAnimSite();
HAnimSite1404.setUSE(CString("hanim_r_psis"));
HAnimHumanoid38.setSites(&HAnimSite1404);

HAnimSite& HAnimSite1405 =  HAnimSite();
HAnimSite1405.setUSE(CString("hanim_r_trochanterion"));
HAnimHumanoid38.setSites(&HAnimSite1405);

HAnimSite& HAnimSite1406 =  HAnimSite();
HAnimSite1406.setUSE(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1406);

HAnimSite& HAnimSite1407 =  HAnimSite();
HAnimSite1407.setUSE(CString("hanim_l_femoral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1407);

HAnimSite& HAnimSite1408 =  HAnimSite();
HAnimSite1408.setUSE(CString("hanim_l_knee_crease"));
HAnimHumanoid38.setSites(&HAnimSite1408);

HAnimSite& HAnimSite1409 =  HAnimSite();
HAnimSite1409.setUSE(CString("hanim_l_suprapatella"));
HAnimHumanoid38.setSites(&HAnimSite1409);

HAnimSite& HAnimSite1410 =  HAnimSite();
HAnimSite1410.setUSE(CString("hanim_l_lateral_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite1410);

HAnimSite& HAnimSite1411 =  HAnimSite();
HAnimSite1411.setUSE(CString("hanim_l_medial_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite1411);

HAnimSite& HAnimSite1412 =  HAnimSite();
HAnimSite1412.setUSE(CString("hanim_l_tibiale"));
HAnimHumanoid38.setSites(&HAnimSite1412);

HAnimSite& HAnimSite1413 =  HAnimSite();
HAnimSite1413.setUSE(CString("hanim_l_calcaneus_posterior"));
HAnimHumanoid38.setSites(&HAnimSite1413);

HAnimSite& HAnimSite1414 =  HAnimSite();
HAnimSite1414.setUSE(CString("hanim_l_sphyrion"));
HAnimHumanoid38.setSites(&HAnimSite1414);

HAnimSite& HAnimSite1415 =  HAnimSite();
HAnimSite1415.setUSE(CString("hanim_l_metatarsal_phalanx_1"));
HAnimHumanoid38.setSites(&HAnimSite1415);

HAnimSite& HAnimSite1416 =  HAnimSite();
HAnimSite1416.setUSE(CString("hanim_l_metatarsal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite1416);

HAnimSite& HAnimSite1417 =  HAnimSite();
HAnimSite1417.setUSE(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid38.setSites(&HAnimSite1417);

HAnimSite& HAnimSite1418 =  HAnimSite();
HAnimSite1418.setUSE(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid38.setSites(&HAnimSite1418);

HAnimSite& HAnimSite1419 =  HAnimSite();
HAnimSite1419.setUSE(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid38.setSites(&HAnimSite1419);

HAnimSite& HAnimSite1420 =  HAnimSite();
HAnimSite1420.setUSE(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid38.setSites(&HAnimSite1420);

HAnimSite& HAnimSite1421 =  HAnimSite();
HAnimSite1421.setUSE(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid38.setSites(&HAnimSite1421);

HAnimSite& HAnimSite1422 =  HAnimSite();
HAnimSite1422.setUSE(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1422);

HAnimSite& HAnimSite1423 =  HAnimSite();
HAnimSite1423.setUSE(CString("hanim_r_femoral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1423);

HAnimSite& HAnimSite1424 =  HAnimSite();
HAnimSite1424.setUSE(CString("hanim_r_knee_crease"));
HAnimHumanoid38.setSites(&HAnimSite1424);

HAnimSite& HAnimSite1425 =  HAnimSite();
HAnimSite1425.setUSE(CString("hanim_r_suprapatella"));
HAnimHumanoid38.setSites(&HAnimSite1425);

HAnimSite& HAnimSite1426 =  HAnimSite();
HAnimSite1426.setUSE(CString("hanim_r_lateral_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite1426);

HAnimSite& HAnimSite1427 =  HAnimSite();
HAnimSite1427.setUSE(CString("hanim_r_medial_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite1427);

HAnimSite& HAnimSite1428 =  HAnimSite();
HAnimSite1428.setUSE(CString("hanim_r_tibiale"));
HAnimHumanoid38.setSites(&HAnimSite1428);

HAnimSite& HAnimSite1429 =  HAnimSite();
HAnimSite1429.setUSE(CString("hanim_r_calcaneus_posterior"));
HAnimHumanoid38.setSites(&HAnimSite1429);

HAnimSite& HAnimSite1430 =  HAnimSite();
HAnimSite1430.setUSE(CString("hanim_r_sphyrion"));
HAnimHumanoid38.setSites(&HAnimSite1430);

HAnimSite& HAnimSite1431 =  HAnimSite();
HAnimSite1431.setUSE(CString("hanim_r_metatarsal_phalanx_1"));
HAnimHumanoid38.setSites(&HAnimSite1431);

HAnimSite& HAnimSite1432 =  HAnimSite();
HAnimSite1432.setUSE(CString("hanim_r_metatarsal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite1432);

HAnimSite& HAnimSite1433 =  HAnimSite();
HAnimSite1433.setUSE(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid38.setSites(&HAnimSite1433);

HAnimSite& HAnimSite1434 =  HAnimSite();
HAnimSite1434.setUSE(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid38.setSites(&HAnimSite1434);

HAnimSite& HAnimSite1435 =  HAnimSite();
HAnimSite1435.setUSE(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid38.setSites(&HAnimSite1435);

HAnimSite& HAnimSite1436 =  HAnimSite();
HAnimSite1436.setUSE(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid38.setSites(&HAnimSite1436);

HAnimSite& HAnimSite1437 =  HAnimSite();
HAnimSite1437.setUSE(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid38.setSites(&HAnimSite1437);

HAnimSite& HAnimSite1438 =  HAnimSite();
HAnimSite1438.setUSE(CString("hanim_navel"));
HAnimHumanoid38.setSites(&HAnimSite1438);

HAnimSite& HAnimSite1439 =  HAnimSite();
HAnimSite1439.setUSE(CString("hanim_waist_preferred_anterior"));
HAnimHumanoid38.setSites(&HAnimSite1439);

HAnimSite& HAnimSite1440 =  HAnimSite();
HAnimSite1440.setUSE(CString("hanim_waist_preferred_posterior"));
HAnimHumanoid38.setSites(&HAnimSite1440);

HAnimSite& HAnimSite1441 =  HAnimSite();
HAnimSite1441.setUSE(CString("hanim_l_rib10"));
HAnimHumanoid38.setSites(&HAnimSite1441);

HAnimSite& HAnimSite1442 =  HAnimSite();
HAnimSite1442.setUSE(CString("hanim_r_rib10"));
HAnimHumanoid38.setSites(&HAnimSite1442);

HAnimSite& HAnimSite1443 =  HAnimSite();
HAnimSite1443.setUSE(CString("hanim_spine_1_middle_back"));
HAnimHumanoid38.setSites(&HAnimSite1443);

HAnimSite& HAnimSite1444 =  HAnimSite();
HAnimSite1444.setUSE(CString("hanim_spine_2_middle_back"));
HAnimHumanoid38.setSites(&HAnimSite1444);

HAnimSite& HAnimSite1445 =  HAnimSite();
HAnimSite1445.setUSE(CString("hanim_l_thelion"));
HAnimHumanoid38.setSites(&HAnimSite1445);

HAnimSite& HAnimSite1446 =  HAnimSite();
HAnimSite1446.setUSE(CString("hanim_r_thelion"));
HAnimHumanoid38.setSites(&HAnimSite1446);

HAnimSite& HAnimSite1447 =  HAnimSite();
HAnimSite1447.setUSE(CString("hanim_substernale"));
HAnimHumanoid38.setSites(&HAnimSite1447);

HAnimSite& HAnimSite1448 =  HAnimSite();
HAnimSite1448.setUSE(CString("hanim_l_chest_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite1448);

HAnimSite& HAnimSite1449 =  HAnimSite();
HAnimSite1449.setUSE(CString("hanim_mesosternale"));
HAnimHumanoid38.setSites(&HAnimSite1449);

HAnimSite& HAnimSite1450 =  HAnimSite();
HAnimSite1450.setUSE(CString("hanim_r_chest_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite1450);

HAnimSite& HAnimSite1451 =  HAnimSite();
HAnimSite1451.setUSE(CString("hanim_rear_center_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite1451);

HAnimSite& HAnimSite1452 =  HAnimSite();
HAnimSite1452.setUSE(CString("hanim_cervicale"));
HAnimHumanoid38.setSites(&HAnimSite1452);

HAnimSite& HAnimSite1453 =  HAnimSite();
HAnimSite1453.setUSE(CString("hanim_l_neck_base"));
HAnimHumanoid38.setSites(&HAnimSite1453);

HAnimSite& HAnimSite1454 =  HAnimSite();
HAnimSite1454.setUSE(CString("hanim_r_neck_base"));
HAnimHumanoid38.setSites(&HAnimSite1454);

HAnimSite& HAnimSite1455 =  HAnimSite();
HAnimSite1455.setUSE(CString("hanim_suprasternale"));
HAnimHumanoid38.setSites(&HAnimSite1455);

HAnimSite& HAnimSite1456 =  HAnimSite();
HAnimSite1456.setUSE(CString("hanim_adams_apple"));
HAnimHumanoid38.setSites(&HAnimSite1456);

HAnimSite& HAnimSite1457 =  HAnimSite();
HAnimSite1457.setUSE(CString("hanim_l_acromion"));
HAnimHumanoid38.setSites(&HAnimSite1457);

HAnimSite& HAnimSite1458 =  HAnimSite();
HAnimSite1458.setUSE(CString("hanim_l_axilla_distal"));
HAnimHumanoid38.setSites(&HAnimSite1458);

HAnimSite& HAnimSite1459 =  HAnimSite();
HAnimSite1459.setUSE(CString("hanim_l_axilla_posterior_folds"));
HAnimHumanoid38.setSites(&HAnimSite1459);

HAnimSite& HAnimSite1460 =  HAnimSite();
HAnimSite1460.setUSE(CString("hanim_l_axilla_proximal"));
HAnimHumanoid38.setSites(&HAnimSite1460);

HAnimSite& HAnimSite1461 =  HAnimSite();
HAnimSite1461.setUSE(CString("hanim_l_clavicale"));
HAnimHumanoid38.setSites(&HAnimSite1461);

HAnimSite& HAnimSite1462 =  HAnimSite();
HAnimSite1462.setUSE(CString("hanim_l_bideltoid"));
HAnimHumanoid38.setSites(&HAnimSite1462);

HAnimSite& HAnimSite1463 =  HAnimSite();
HAnimSite1463.setUSE(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1463);

HAnimSite& HAnimSite1464 =  HAnimSite();
HAnimSite1464.setUSE(CString("hanim_l_humeral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1464);

HAnimSite& HAnimSite1465 =  HAnimSite();
HAnimSite1465.setUSE(CString("hanim_l_olecranon"));
HAnimHumanoid38.setSites(&HAnimSite1465);

HAnimSite& HAnimSite1466 =  HAnimSite();
HAnimSite1466.setUSE(CString("hanim_l_radial_styloid"));
HAnimHumanoid38.setSites(&HAnimSite1466);

HAnimSite& HAnimSite1467 =  HAnimSite();
HAnimSite1467.setUSE(CString("hanim_l_radiale"));
HAnimHumanoid38.setSites(&HAnimSite1467);

HAnimSite& HAnimSite1468 =  HAnimSite();
HAnimSite1468.setUSE(CString("hanim_l_ulnar_styloid"));
HAnimHumanoid38.setSites(&HAnimSite1468);

HAnimSite& HAnimSite1469 =  HAnimSite();
HAnimSite1469.setUSE(CString("hanim_l_metacarpal_phalanx_2"));
HAnimHumanoid38.setSites(&HAnimSite1469);

HAnimSite& HAnimSite1470 =  HAnimSite();
HAnimSite1470.setUSE(CString("hanim_l_metacarpal_phalanx_3"));
HAnimHumanoid38.setSites(&HAnimSite1470);

HAnimSite& HAnimSite1471 =  HAnimSite();
HAnimSite1471.setUSE(CString("hanim_l_metacarpal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite1471);

HAnimSite& HAnimSite1472 =  HAnimSite();
HAnimSite1472.setUSE(CString("hanim_r_acromion"));
HAnimHumanoid38.setSites(&HAnimSite1472);

HAnimSite& HAnimSite1473 =  HAnimSite();
HAnimSite1473.setUSE(CString("hanim_r_axilla_distal"));
HAnimHumanoid38.setSites(&HAnimSite1473);

HAnimSite& HAnimSite1474 =  HAnimSite();
HAnimSite1474.setUSE(CString("hanim_r_axilla_posterior_folds"));
HAnimHumanoid38.setSites(&HAnimSite1474);

HAnimSite& HAnimSite1475 =  HAnimSite();
HAnimSite1475.setUSE(CString("hanim_r_axilla_proximal"));
HAnimHumanoid38.setSites(&HAnimSite1475);

HAnimSite& HAnimSite1476 =  HAnimSite();
HAnimSite1476.setUSE(CString("hanim_r_clavicale"));
HAnimHumanoid38.setSites(&HAnimSite1476);

HAnimSite& HAnimSite1477 =  HAnimSite();
HAnimSite1477.setUSE(CString("hanim_r_bideltoid"));
HAnimHumanoid38.setSites(&HAnimSite1477);

HAnimSite& HAnimSite1478 =  HAnimSite();
HAnimSite1478.setUSE(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1478);

HAnimSite& HAnimSite1479 =  HAnimSite();
HAnimSite1479.setUSE(CString("hanim_r_humeral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1479);

HAnimSite& HAnimSite1480 =  HAnimSite();
HAnimSite1480.setUSE(CString("hanim_r_olecranon"));
HAnimHumanoid38.setSites(&HAnimSite1480);

HAnimSite& HAnimSite1481 =  HAnimSite();
HAnimSite1481.setUSE(CString("hanim_r_radial_styloid"));
HAnimHumanoid38.setSites(&HAnimSite1481);

HAnimSite& HAnimSite1482 =  HAnimSite();
HAnimSite1482.setUSE(CString("hanim_r_radiale"));
HAnimHumanoid38.setSites(&HAnimSite1482);

HAnimSite& HAnimSite1483 =  HAnimSite();
HAnimSite1483.setUSE(CString("hanim_r_ulnar_styloid"));
HAnimHumanoid38.setSites(&HAnimSite1483);

HAnimSite& HAnimSite1484 =  HAnimSite();
HAnimSite1484.setUSE(CString("hanim_r_metacarpal_phalanx_2"));
HAnimHumanoid38.setSites(&HAnimSite1484);

HAnimSite& HAnimSite1485 =  HAnimSite();
HAnimSite1485.setUSE(CString("hanim_r_metacarpal_phalanx_3"));
HAnimHumanoid38.setSites(&HAnimSite1485);

HAnimSite& HAnimSite1486 =  HAnimSite();
HAnimSite1486.setUSE(CString("hanim_r_metacarpal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite1486);

Scene11.addChild(&HAnimHumanoid38);

X3D0.setScene(&Scene11);

}
