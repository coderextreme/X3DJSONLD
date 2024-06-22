#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
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
meta3.setContent(CString("JohnBoy.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("identifier"));
meta4.setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d"));
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
Coordinate466.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet465.setCoord(Coordinate466);

//from vl5 to vl4 vertices 2
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
HAnimJoint489.X3DNode::setName(CString("vl4"));
HAnimJoint489.setDEF(CString("hanim_vl4"));
HAnimJoint489.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimJoint489.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint489.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment490 =  HAnimSegment();
HAnimSegment490.X3DNode::setName(CString("l4"));
HAnimSegment490.setDEF(CString("hanim_l4"));
Transform& Transform491 =  Transform();
Transform491.setTranslation(new float[]{0.0035,1.0925,-0.0787});
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
Coordinate496.setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet495.setCoord(Coordinate496);

//from vl4 to vl3 vertices 2
ColorRGBA& ColorRGBA497 =  ColorRGBA();
ColorRGBA497.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet495.addChild(&ColorRGBA497);

Shape494.setGeometry(&LineSet495);

HAnimSegment490.addChild(&Shape494);

HAnimJoint489.addChildren(&HAnimSegment490);

HAnimJoint& HAnimJoint498 =  HAnimJoint();
HAnimJoint498.X3DNode::setName(CString("vl3"));
HAnimJoint498.setDEF(CString("hanim_vl3"));
HAnimJoint498.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimJoint498.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint498.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment499 =  HAnimSegment();
HAnimSegment499.X3DNode::setName(CString("l3"));
HAnimSegment499.setDEF(CString("hanim_l3"));
Transform& Transform500 =  Transform();
Transform500.setTranslation(new float[]{0.0041,1.1276,-0.0796});
Transform& Transform501 =  Transform();
//Empty Transform
Shape& Shape502 =  Shape();
Shape502.setUSE(CString("HAnimJointShape"));
Transform501.addChild(&Shape502);

Transform500.addChild(&Transform501);

HAnimSegment499.addChild(&Transform500);

Shape& Shape503 =  Shape();
LineSet& LineSet504 =  LineSet();
LineSet504.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate505 =  Coordinate();
Coordinate505.setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet504.setCoord(Coordinate505);

//from vl3 to vl2 vertices 2
ColorRGBA& ColorRGBA506 =  ColorRGBA();
ColorRGBA506.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet504.addChild(&ColorRGBA506);

Shape503.setGeometry(&LineSet504);

HAnimSegment499.addChild(&Shape503);

HAnimJoint498.addChildren(&HAnimSegment499);

HAnimJoint& HAnimJoint507 =  HAnimJoint();
HAnimJoint507.X3DNode::setName(CString("vl2"));
HAnimJoint507.setDEF(CString("hanim_vl2"));
HAnimJoint507.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimJoint507.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint507.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment508 =  HAnimSegment();
HAnimSegment508.X3DNode::setName(CString("l2"));
HAnimSegment508.setDEF(CString("hanim_l2"));
Transform& Transform509 =  Transform();
Transform509.setTranslation(new float[]{0.0045,1.1546,-0.08});
Transform& Transform510 =  Transform();
//Empty Transform
Shape& Shape511 =  Shape();
Shape511.setUSE(CString("HAnimJointShape"));
Transform510.addChild(&Shape511);

Transform509.addChild(&Transform510);

HAnimSegment508.addChild(&Transform509);

Shape& Shape512 =  Shape();
LineSet& LineSet513 =  LineSet();
LineSet513.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate514 =  Coordinate();
Coordinate514.setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet513.setCoord(Coordinate514);

//from vl2 to vl1 vertices 2
ColorRGBA& ColorRGBA515 =  ColorRGBA();
ColorRGBA515.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet513.addChild(&ColorRGBA515);

Shape512.setGeometry(&LineSet513);

HAnimSegment508.addChild(&Shape512);

HAnimSite& HAnimSite516 =  HAnimSite();
HAnimSite516.X3DNode::setName(CString("l_rib10"));
HAnimSite516.setDEF(CString("hanim_l_rib10"));
HAnimSite516.setTranslation(new float[]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor517 =  TouchSensor();
TouchSensor517.setDescription(CString("HAnimSite 28 l_rib10"));
HAnimSite516.addChild(&TouchSensor517);

Shape& Shape518 =  Shape();
Shape518.setUSE(CString("HAnimSiteShape"));
HAnimSite516.addChild(&Shape518);

Billboard& Billboard519 =  Billboard();
Shape& Shape520 =  Shape();
Text& Text521 =  Text();
Text521.setString(new CString[]{CString("28")}, 1);
CFontStyle& FontStyle522 =  CFontStyle();
FontStyle522.setSize(0.035);
Text521.setFontStyle(&FontStyle522);

Shape520.setGeometry(&Text521);

Billboard519.addChild(&Shape520);

HAnimSite516.addChild(Billboard519);

HAnimSegment508.addChild(&HAnimSite516);

HAnimSite& HAnimSite523 =  HAnimSite();
HAnimSite523.X3DNode::setName(CString("r_rib10"));
HAnimSite523.setDEF(CString("hanim_r_rib10"));
HAnimSite523.setTranslation(new float[]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor524 =  TouchSensor();
TouchSensor524.setDescription(CString("HAnimSite 30 r_rib10"));
HAnimSite523.addChild(&TouchSensor524);

Shape& Shape525 =  Shape();
Shape525.setUSE(CString("HAnimSiteShape"));
HAnimSite523.addChild(&Shape525);

Billboard& Billboard526 =  Billboard();
Shape& Shape527 =  Shape();
Text& Text528 =  Text();
Text528.setString(new CString[]{CString("30")}, 1);
CFontStyle& FontStyle529 =  CFontStyle();
FontStyle529.setSize(0.035);
Text528.setFontStyle(&FontStyle529);

Shape527.setGeometry(&Text528);

Billboard526.addChild(&Shape527);

HAnimSite523.addChild(Billboard526);

HAnimSegment508.addChild(&HAnimSite523);

HAnimSite& HAnimSite530 =  HAnimSite();
HAnimSite530.X3DNode::setName(CString("spine_2_middle_back"));
HAnimSite530.setDEF(CString("hanim_spine_2_middle_back"));
TouchSensor& TouchSensor531 =  TouchSensor();
TouchSensor531.setDescription(CString("HAnimSite spine_2_middle_back"));
HAnimSite530.addChild(&TouchSensor531);

Shape& Shape532 =  Shape();
Shape532.setUSE(CString("HAnimSiteShape"));
HAnimSite530.addChild(&Shape532);

Billboard& Billboard533 =  Billboard();
Shape& Shape534 =  Shape();
Text& Text535 =  Text();
Text535.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle536 =  CFontStyle();
FontStyle536.setSize(0.035);
Text535.setFontStyle(&FontStyle536);

Shape534.setGeometry(&Text535);

Billboard533.addChild(&Shape534);

HAnimSite530.addChild(Billboard533);

HAnimSegment508.addChild(&HAnimSite530);

HAnimJoint507.addChildren(&HAnimSegment508);

HAnimJoint& HAnimJoint537 =  HAnimJoint();
HAnimJoint537.X3DNode::setName(CString("vl1"));
HAnimJoint537.setDEF(CString("hanim_vl1"));
HAnimJoint537.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimJoint537.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint537.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment538 =  HAnimSegment();
HAnimSegment538.X3DNode::setName(CString("l1"));
HAnimSegment538.setDEF(CString("hanim_l1"));
Transform& Transform539 =  Transform();
Transform539.setTranslation(new float[]{0.0048,1.1912,-0.0805});
Transform& Transform540 =  Transform();
//Empty Transform
Shape& Shape541 =  Shape();
Shape541.setUSE(CString("HAnimJointShape"));
Transform540.addChild(&Shape541);

Transform539.addChild(&Transform540);

HAnimSegment538.addChild(&Transform539);

Shape& Shape542 =  Shape();
LineSet& LineSet543 =  LineSet();
LineSet543.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate544 =  Coordinate();
Coordinate544.setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet543.setCoord(Coordinate544);

//from vl1 to vt12 vertices 2
ColorRGBA& ColorRGBA545 =  ColorRGBA();
ColorRGBA545.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet543.addChild(&ColorRGBA545);

Shape542.setGeometry(&LineSet543);

HAnimSegment538.addChild(&Shape542);

HAnimJoint537.addChildren(&HAnimSegment538);

HAnimJoint& HAnimJoint546 =  HAnimJoint();
HAnimJoint546.X3DNode::setName(CString("vt12"));
HAnimJoint546.setDEF(CString("hanim_vt12"));
HAnimJoint546.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimJoint546.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint546.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment547 =  HAnimSegment();
HAnimSegment547.X3DNode::setName(CString("t12"));
HAnimSegment547.setDEF(CString("hanim_t12"));
Transform& Transform548 =  Transform();
Transform548.setTranslation(new float[]{0.0051,1.2278,-0.0808});
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
Coordinate553.setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet552.setCoord(Coordinate553);

//from vt12 to vt11 vertices 2
ColorRGBA& ColorRGBA554 =  ColorRGBA();
ColorRGBA554.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet552.addChild(&ColorRGBA554);

Shape551.setGeometry(&LineSet552);

HAnimSegment547.addChild(&Shape551);

HAnimJoint546.addChildren(&HAnimSegment547);

HAnimJoint& HAnimJoint555 =  HAnimJoint();
HAnimJoint555.X3DNode::setName(CString("vt11"));
HAnimJoint555.setDEF(CString("hanim_vt11"));
HAnimJoint555.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimJoint555.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint555.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment556 =  HAnimSegment();
HAnimSegment556.X3DNode::setName(CString("t11"));
HAnimSegment556.setDEF(CString("hanim_t11"));
Transform& Transform557 =  Transform();
Transform557.setTranslation(new float[]{0.0053,1.2679,-0.081});
Transform& Transform558 =  Transform();
//Empty Transform
Shape& Shape559 =  Shape();
Shape559.setUSE(CString("HAnimJointShape"));
Transform558.addChild(&Shape559);

Transform557.addChild(&Transform558);

HAnimSegment556.addChild(&Transform557);

Shape& Shape560 =  Shape();
LineSet& LineSet561 =  LineSet();
LineSet561.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate562 =  Coordinate();
Coordinate562.setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet561.setCoord(Coordinate562);

//from vt11 to vt10 vertices 2
ColorRGBA& ColorRGBA563 =  ColorRGBA();
ColorRGBA563.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet561.addChild(&ColorRGBA563);

Shape560.setGeometry(&LineSet561);

HAnimSegment556.addChild(&Shape560);

HAnimJoint555.addChildren(&HAnimSegment556);

HAnimJoint& HAnimJoint564 =  HAnimJoint();
HAnimJoint564.X3DNode::setName(CString("vt10"));
HAnimJoint564.setDEF(CString("hanim_vt10"));
HAnimJoint564.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimJoint564.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint564.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment565 =  HAnimSegment();
HAnimSegment565.X3DNode::setName(CString("t10"));
HAnimSegment565.setDEF(CString("hanim_t10"));
Transform& Transform566 =  Transform();
Transform566.setTranslation(new float[]{0.0056,1.2848,-0.0822});
Transform& Transform567 =  Transform();
//Empty Transform
Shape& Shape568 =  Shape();
Shape568.setUSE(CString("HAnimJointShape"));
Transform567.addChild(&Shape568);

Transform566.addChild(&Transform567);

HAnimSegment565.addChild(&Transform566);

Shape& Shape569 =  Shape();
LineSet& LineSet570 =  LineSet();
LineSet570.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate571 =  Coordinate();
Coordinate571.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet570.setCoord(Coordinate571);

//from vt10 to vt9 vertices 2
ColorRGBA& ColorRGBA572 =  ColorRGBA();
ColorRGBA572.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet570.addChild(&ColorRGBA572);

Shape569.setGeometry(&LineSet570);

HAnimSegment565.addChild(&Shape569);

HAnimSite& HAnimSite573 =  HAnimSite();
HAnimSite573.X3DNode::setName(CString("substernale"));
HAnimSite573.setDEF(CString("hanim_substernale"));
HAnimSite573.setTranslation(new float[]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor574 =  TouchSensor();
TouchSensor574.setDescription(CString("HAnimSite 13 substernale"));
HAnimSite573.addChild(&TouchSensor574);

Shape& Shape575 =  Shape();
Shape575.setUSE(CString("HAnimSiteShape"));
HAnimSite573.addChild(&Shape575);

Billboard& Billboard576 =  Billboard();
Shape& Shape577 =  Shape();
Text& Text578 =  Text();
Text578.setString(new CString[]{CString("13")}, 1);
CFontStyle& FontStyle579 =  CFontStyle();
FontStyle579.setSize(0.035);
Text578.setFontStyle(&FontStyle579);

Shape577.setGeometry(&Text578);

Billboard576.addChild(&Shape577);

HAnimSite573.addChild(Billboard576);

HAnimSegment565.addChild(&HAnimSite573);

HAnimJoint564.addChildren(&HAnimSegment565);

HAnimJoint& HAnimJoint580 =  HAnimJoint();
HAnimJoint580.X3DNode::setName(CString("vt9"));
HAnimJoint580.setDEF(CString("hanim_vt9"));
HAnimJoint580.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimJoint580.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint580.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment581 =  HAnimSegment();
HAnimSegment581.X3DNode::setName(CString("t9"));
HAnimSegment581.setDEF(CString("hanim_t9"));
Transform& Transform582 =  Transform();
Transform582.setTranslation(new float[]{0.0057,1.3126,-0.0838});
Transform& Transform583 =  Transform();
//Empty Transform
Shape& Shape584 =  Shape();
Shape584.setUSE(CString("HAnimJointShape"));
Transform583.addChild(&Shape584);

Transform582.addChild(&Transform583);

HAnimSegment581.addChild(&Transform582);

Shape& Shape585 =  Shape();
LineSet& LineSet586 =  LineSet();
LineSet586.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate587 =  Coordinate();
Coordinate587.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet586.setCoord(Coordinate587);

//from vt9 to vt8 vertices 2
ColorRGBA& ColorRGBA588 =  ColorRGBA();
ColorRGBA588.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet586.addChild(&ColorRGBA588);

Shape585.setGeometry(&LineSet586);

HAnimSegment581.addChild(&Shape585);

HAnimSite& HAnimSite589 =  HAnimSite();
HAnimSite589.X3DNode::setName(CString("l_thelion"));
HAnimSite589.setDEF(CString("hanim_l_thelion"));
HAnimSite589.setTranslation(new float[]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor590 =  TouchSensor();
TouchSensor590.setDescription(CString("HAnimSite 29 l_thelion"));
HAnimSite589.addChild(&TouchSensor590);

Shape& Shape591 =  Shape();
Shape591.setUSE(CString("HAnimSiteShape"));
HAnimSite589.addChild(&Shape591);

Billboard& Billboard592 =  Billboard();
Shape& Shape593 =  Shape();
Text& Text594 =  Text();
Text594.setString(new CString[]{CString("29")}, 1);
CFontStyle& FontStyle595 =  CFontStyle();
FontStyle595.setSize(0.035);
Text594.setFontStyle(&FontStyle595);

Shape593.setGeometry(&Text594);

Billboard592.addChild(&Shape593);

HAnimSite589.addChild(Billboard592);

HAnimSegment581.addChild(&HAnimSite589);

HAnimSite& HAnimSite596 =  HAnimSite();
HAnimSite596.X3DNode::setName(CString("r_thelion"));
HAnimSite596.setDEF(CString("hanim_r_thelion"));
HAnimSite596.setTranslation(new float[]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor597 =  TouchSensor();
TouchSensor597.setDescription(CString("HAnimSite 31 r_thelion"));
HAnimSite596.addChild(&TouchSensor597);

Shape& Shape598 =  Shape();
Shape598.setUSE(CString("HAnimSiteShape"));
HAnimSite596.addChild(&Shape598);

Billboard& Billboard599 =  Billboard();
Shape& Shape600 =  Shape();
Text& Text601 =  Text();
Text601.setString(new CString[]{CString("31")}, 1);
CFontStyle& FontStyle602 =  CFontStyle();
FontStyle602.setSize(0.035);
Text601.setFontStyle(&FontStyle602);

Shape600.setGeometry(&Text601);

Billboard599.addChild(&Shape600);

HAnimSite596.addChild(Billboard599);

HAnimSegment581.addChild(&HAnimSite596);

HAnimJoint580.addChildren(&HAnimSegment581);

HAnimJoint& HAnimJoint603 =  HAnimJoint();
HAnimJoint603.X3DNode::setName(CString("vt8"));
HAnimJoint603.setDEF(CString("hanim_vt8"));
HAnimJoint603.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimJoint603.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint603.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment604 =  HAnimSegment();
HAnimSegment604.X3DNode::setName(CString("t8"));
HAnimSegment604.setDEF(CString("hanim_t8"));
Transform& Transform605 =  Transform();
Transform605.setTranslation(new float[]{0.0057,1.3382,-0.0845});
Transform& Transform606 =  Transform();
//Empty Transform
Shape& Shape607 =  Shape();
Shape607.setUSE(CString("HAnimJointShape"));
Transform606.addChild(&Shape607);

Transform605.addChild(&Transform606);

HAnimSegment604.addChild(&Transform605);

Shape& Shape608 =  Shape();
LineSet& LineSet609 =  LineSet();
LineSet609.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate610 =  Coordinate();
Coordinate610.setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet609.setCoord(Coordinate610);

//from vt8 to vt7 vertices 2
ColorRGBA& ColorRGBA611 =  ColorRGBA();
ColorRGBA611.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet609.addChild(&ColorRGBA611);

Shape608.setGeometry(&LineSet609);

HAnimSegment604.addChild(&Shape608);

HAnimJoint603.addChildren(&HAnimSegment604);

HAnimJoint& HAnimJoint612 =  HAnimJoint();
HAnimJoint612.X3DNode::setName(CString("vt7"));
HAnimJoint612.setDEF(CString("hanim_vt7"));
HAnimJoint612.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimJoint612.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint612.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment613 =  HAnimSegment();
HAnimSegment613.X3DNode::setName(CString("t7"));
HAnimSegment613.setDEF(CString("hanim_t7"));
Transform& Transform614 =  Transform();
Transform614.setTranslation(new float[]{0.0058,1.3625,-0.0833});
Transform& Transform615 =  Transform();
//Empty Transform
Shape& Shape616 =  Shape();
Shape616.setUSE(CString("HAnimJointShape"));
Transform615.addChild(&Shape616);

Transform614.addChild(&Transform615);

HAnimSegment613.addChild(&Transform614);

Shape& Shape617 =  Shape();
LineSet& LineSet618 =  LineSet();
LineSet618.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate619 =  Coordinate();
Coordinate619.setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet618.setCoord(Coordinate619);

//from vt7 to vt6 vertices 2
ColorRGBA& ColorRGBA620 =  ColorRGBA();
ColorRGBA620.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet618.addChild(&ColorRGBA620);

Shape617.setGeometry(&LineSet618);

HAnimSegment613.addChild(&Shape617);

HAnimJoint612.addChildren(&HAnimSegment613);

HAnimJoint& HAnimJoint621 =  HAnimJoint();
HAnimJoint621.X3DNode::setName(CString("vt6"));
HAnimJoint621.setDEF(CString("hanim_vt6"));
HAnimJoint621.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimJoint621.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint621.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment622 =  HAnimSegment();
HAnimSegment622.X3DNode::setName(CString("t6"));
HAnimSegment622.setDEF(CString("hanim_t6"));
Transform& Transform623 =  Transform();
Transform623.setTranslation(new float[]{0.0059,1.3866,-0.08});
Transform& Transform624 =  Transform();
//Empty Transform
Shape& Shape625 =  Shape();
Shape625.setUSE(CString("HAnimJointShape"));
Transform624.addChild(&Shape625);

Transform623.addChild(&Transform624);

HAnimSegment622.addChild(&Transform623);

Shape& Shape626 =  Shape();
LineSet& LineSet627 =  LineSet();
LineSet627.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate628 =  Coordinate();
Coordinate628.setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet627.setCoord(Coordinate628);

//from vt6 to vt5 vertices 2
ColorRGBA& ColorRGBA629 =  ColorRGBA();
ColorRGBA629.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet627.addChild(&ColorRGBA629);

Shape626.setGeometry(&LineSet627);

HAnimSegment622.addChild(&Shape626);

HAnimSite& HAnimSite630 =  HAnimSite();
HAnimSite630.X3DNode::setName(CString("l_chest_midsagittal_plane"));
HAnimSite630.setDEF(CString("hanim_l_chest_midsagittal_plane"));
TouchSensor& TouchSensor631 =  TouchSensor();
TouchSensor631.setDescription(CString("HAnimSite 94 l_chest_midsagittal_plane"));
HAnimSite630.addChild(&TouchSensor631);

Shape& Shape632 =  Shape();
Shape632.setUSE(CString("HAnimSiteShape"));
HAnimSite630.addChild(&Shape632);

Billboard& Billboard633 =  Billboard();
Shape& Shape634 =  Shape();
Text& Text635 =  Text();
Text635.setString(new CString[]{CString("94")}, 1);
CFontStyle& FontStyle636 =  CFontStyle();
FontStyle636.setSize(0.035);
Text635.setFontStyle(&FontStyle636);

Shape634.setGeometry(&Text635);

Billboard633.addChild(&Shape634);

HAnimSite630.addChild(Billboard633);

HAnimSegment622.addChild(&HAnimSite630);

HAnimSite& HAnimSite637 =  HAnimSite();
HAnimSite637.X3DNode::setName(CString("mesosternale"));
HAnimSite637.setDEF(CString("hanim_mesosternale"));
TouchSensor& TouchSensor638 =  TouchSensor();
TouchSensor638.setDescription(CString("HAnimSite 88 mesosternale"));
HAnimSite637.addChild(&TouchSensor638);

Shape& Shape639 =  Shape();
Shape639.setUSE(CString("HAnimSiteShape"));
HAnimSite637.addChild(&Shape639);

Billboard& Billboard640 =  Billboard();
Shape& Shape641 =  Shape();
Text& Text642 =  Text();
Text642.setString(new CString[]{CString("88")}, 1);
CFontStyle& FontStyle643 =  CFontStyle();
FontStyle643.setSize(0.035);
Text642.setFontStyle(&FontStyle643);

Shape641.setGeometry(&Text642);

Billboard640.addChild(&Shape641);

HAnimSite637.addChild(Billboard640);

HAnimSegment622.addChild(&HAnimSite637);

HAnimSite& HAnimSite644 =  HAnimSite();
HAnimSite644.X3DNode::setName(CString("r_chest_midsagittal_plane"));
HAnimSite644.setDEF(CString("hanim_r_chest_midsagittal_plane"));
TouchSensor& TouchSensor645 =  TouchSensor();
TouchSensor645.setDescription(CString("HAnimSite 95 r_chest_midsagittal_plane"));
HAnimSite644.addChild(&TouchSensor645);

Shape& Shape646 =  Shape();
Shape646.setUSE(CString("HAnimSiteShape"));
HAnimSite644.addChild(&Shape646);

Billboard& Billboard647 =  Billboard();
Shape& Shape648 =  Shape();
Text& Text649 =  Text();
Text649.setString(new CString[]{CString("95")}, 1);
CFontStyle& FontStyle650 =  CFontStyle();
FontStyle650.setSize(0.035);
Text649.setFontStyle(&FontStyle650);

Shape648.setGeometry(&Text649);

Billboard647.addChild(&Shape648);

HAnimSite644.addChild(Billboard647);

HAnimSegment622.addChild(&HAnimSite644);

HAnimSite& HAnimSite651 =  HAnimSite();
HAnimSite651.X3DNode::setName(CString("rear_center_midsagittal_plane"));
HAnimSite651.setDEF(CString("hanim_rear_center_midsagittal_plane"));
TouchSensor& TouchSensor652 =  TouchSensor();
TouchSensor652.setDescription(CString("HAnimSite 92 rear_center_midsagittal_plane"));
HAnimSite651.addChild(&TouchSensor652);

Shape& Shape653 =  Shape();
Shape653.setUSE(CString("HAnimSiteShape"));
HAnimSite651.addChild(&Shape653);

Billboard& Billboard654 =  Billboard();
Shape& Shape655 =  Shape();
Text& Text656 =  Text();
Text656.setString(new CString[]{CString("92")}, 1);
CFontStyle& FontStyle657 =  CFontStyle();
FontStyle657.setSize(0.035);
Text656.setFontStyle(&FontStyle657);

Shape655.setGeometry(&Text656);

Billboard654.addChild(&Shape655);

HAnimSite651.addChild(Billboard654);

HAnimSegment622.addChild(&HAnimSite651);

HAnimJoint621.addChildren(&HAnimSegment622);

HAnimJoint& HAnimJoint658 =  HAnimJoint();
HAnimJoint658.X3DNode::setName(CString("vt5"));
HAnimJoint658.setDEF(CString("hanim_vt5"));
HAnimJoint658.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimJoint658.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint658.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment659 =  HAnimSegment();
HAnimSegment659.X3DNode::setName(CString("t5"));
HAnimSegment659.setDEF(CString("hanim_t5"));
Transform& Transform660 =  Transform();
Transform660.setTranslation(new float[]{0.006,1.4102,-0.0745});
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
Coordinate665.setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet664.setCoord(Coordinate665);

//from vt5 to vt4 vertices 2
ColorRGBA& ColorRGBA666 =  ColorRGBA();
ColorRGBA666.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet664.addChild(&ColorRGBA666);

Shape663.setGeometry(&LineSet664);

HAnimSegment659.addChild(&Shape663);

HAnimSite& HAnimSite667 =  HAnimSite();
HAnimSite667.X3DNode::setName(CString("spine_1_middle_back"));
HAnimSite667.setDEF(CString("hanim_spine_1_middle_back"));
TouchSensor& TouchSensor668 =  TouchSensor();
TouchSensor668.setDescription(CString("HAnimSite 24 spine_1_middle_back"));
HAnimSite667.addChild(&TouchSensor668);

Shape& Shape669 =  Shape();
Shape669.setUSE(CString("HAnimSiteShape"));
HAnimSite667.addChild(&Shape669);

Billboard& Billboard670 =  Billboard();
Shape& Shape671 =  Shape();
Text& Text672 =  Text();
Text672.setString(new CString[]{CString("24")}, 1);
CFontStyle& FontStyle673 =  CFontStyle();
FontStyle673.setSize(0.035);
Text672.setFontStyle(&FontStyle673);

Shape671.setGeometry(&Text672);

Billboard670.addChild(&Shape671);

HAnimSite667.addChild(Billboard670);

HAnimSegment659.addChild(&HAnimSite667);

HAnimJoint658.addChildren(&HAnimSegment659);

HAnimJoint& HAnimJoint674 =  HAnimJoint();
HAnimJoint674.X3DNode::setName(CString("vt4"));
HAnimJoint674.setDEF(CString("hanim_vt4"));
HAnimJoint674.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimJoint674.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint674.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment675 =  HAnimSegment();
HAnimSegment675.X3DNode::setName(CString("t4"));
HAnimSegment675.setDEF(CString("hanim_t4"));
Transform& Transform676 =  Transform();
Transform676.setTranslation(new float[]{0.0061,1.432,-0.0675});
Transform& Transform677 =  Transform();
//Empty Transform
Shape& Shape678 =  Shape();
Shape678.setUSE(CString("HAnimJointShape"));
Transform677.addChild(&Shape678);

Transform676.addChild(&Transform677);

HAnimSegment675.addChild(&Transform676);

Shape& Shape679 =  Shape();
LineSet& LineSet680 =  LineSet();
LineSet680.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate681 =  Coordinate();
Coordinate681.setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet680.setCoord(Coordinate681);

//from vt4 to vt3 vertices 2
ColorRGBA& ColorRGBA682 =  ColorRGBA();
ColorRGBA682.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet680.addChild(&ColorRGBA682);

Shape679.setGeometry(&LineSet680);

HAnimSegment675.addChild(&Shape679);

HAnimJoint674.addChildren(&HAnimSegment675);

HAnimJoint& HAnimJoint683 =  HAnimJoint();
HAnimJoint683.X3DNode::setName(CString("vt3"));
HAnimJoint683.setDEF(CString("hanim_vt3"));
HAnimJoint683.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimJoint683.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint683.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment684 =  HAnimSegment();
HAnimSegment684.X3DNode::setName(CString("t3"));
HAnimSegment684.setDEF(CString("hanim_t3"));
Transform& Transform685 =  Transform();
Transform685.setTranslation(new float[]{0.0062,1.4583,-0.057});
Transform& Transform686 =  Transform();
//Empty Transform
Shape& Shape687 =  Shape();
Shape687.setUSE(CString("HAnimJointShape"));
Transform686.addChild(&Shape687);

Transform685.addChild(&Transform686);

HAnimSegment684.addChild(&Transform685);

Shape& Shape688 =  Shape();
LineSet& LineSet689 =  LineSet();
LineSet689.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate690 =  Coordinate();
Coordinate690.setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet689.setCoord(Coordinate690);

//from vt3 to vt2 vertices 2
ColorRGBA& ColorRGBA691 =  ColorRGBA();
ColorRGBA691.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet689.addChild(&ColorRGBA691);

Shape688.setGeometry(&LineSet689);

HAnimSegment684.addChild(&Shape688);

HAnimJoint683.addChildren(&HAnimSegment684);

HAnimJoint& HAnimJoint692 =  HAnimJoint();
HAnimJoint692.X3DNode::setName(CString("vt2"));
HAnimJoint692.setDEF(CString("hanim_vt2"));
HAnimJoint692.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimJoint692.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint692.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment693 =  HAnimSegment();
HAnimSegment693.X3DNode::setName(CString("t2"));
HAnimSegment693.setDEF(CString("hanim_t2"));
Transform& Transform694 =  Transform();
Transform694.setTranslation(new float[]{0.0063,1.4761,-0.0484});
Transform& Transform695 =  Transform();
//Empty Transform
Shape& Shape696 =  Shape();
Shape696.setUSE(CString("HAnimJointShape"));
Transform695.addChild(&Shape696);

Transform694.addChild(&Transform695);

HAnimSegment693.addChild(&Transform694);

Shape& Shape697 =  Shape();
LineSet& LineSet698 =  LineSet();
LineSet698.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate699 =  Coordinate();
Coordinate699.setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet698.setCoord(Coordinate699);

//from vt2 to vt1 vertices 2
ColorRGBA& ColorRGBA700 =  ColorRGBA();
ColorRGBA700.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet698.addChild(&ColorRGBA700);

Shape697.setGeometry(&LineSet698);

HAnimSegment693.addChild(&Shape697);

HAnimJoint692.addChildren(&HAnimSegment693);

HAnimJoint& HAnimJoint701 =  HAnimJoint();
HAnimJoint701.X3DNode::setName(CString("vt1"));
HAnimJoint701.setDEF(CString("hanim_vt1"));
HAnimJoint701.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimJoint701.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint701.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment702 =  HAnimSegment();
HAnimSegment702.X3DNode::setName(CString("t1"));
HAnimSegment702.setDEF(CString("hanim_t1"));
Transform& Transform703 =  Transform();
Transform703.setTranslation(new float[]{0.0065,1.4951,-0.0387});
Transform& Transform704 =  Transform();
//Empty Transform
Shape& Shape705 =  Shape();
Shape705.setUSE(CString("HAnimJointShape"));
Transform704.addChild(&Shape705);

Transform703.addChild(&Transform704);

HAnimSegment702.addChild(&Transform703);

Shape& Shape706 =  Shape();
LineSet& LineSet707 =  LineSet();
LineSet707.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate708 =  Coordinate();
Coordinate708.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet707.setCoord(Coordinate708);

//from vt1 to vc7 vertices 2
ColorRGBA& ColorRGBA709 =  ColorRGBA();
ColorRGBA709.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet707.addChild(&ColorRGBA709);

Shape706.setGeometry(&LineSet707);

HAnimSegment702.addChild(&Shape706);

HAnimSite& HAnimSite710 =  HAnimSite();
HAnimSite710.X3DNode::setName(CString("cervicale"));
HAnimSite710.setDEF(CString("hanim_cervicale"));
HAnimSite710.setTranslation(new float[]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor711 =  TouchSensor();
TouchSensor711.setDescription(CString("HAnimSite 10 cervicale"));
HAnimSite710.addChild(&TouchSensor711);

Shape& Shape712 =  Shape();
Shape712.setUSE(CString("HAnimSiteShape"));
HAnimSite710.addChild(&Shape712);

Billboard& Billboard713 =  Billboard();
Shape& Shape714 =  Shape();
Text& Text715 =  Text();
Text715.setString(new CString[]{CString("10")}, 1);
CFontStyle& FontStyle716 =  CFontStyle();
FontStyle716.setSize(0.035);
Text715.setFontStyle(&FontStyle716);

Shape714.setGeometry(&Text715);

Billboard713.addChild(&Shape714);

HAnimSite710.addChild(Billboard713);

HAnimSegment702.addChild(&HAnimSite710);

HAnimSite& HAnimSite717 =  HAnimSite();
HAnimSite717.X3DNode::setName(CString("suprasternale"));
HAnimSite717.setDEF(CString("hanim_suprasternale"));
HAnimSite717.setTranslation(new float[]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor718 =  TouchSensor();
TouchSensor718.setDescription(CString("HAnimSite 12 suprasternale"));
HAnimSite717.addChild(&TouchSensor718);

Shape& Shape719 =  Shape();
Shape719.setUSE(CString("HAnimSiteShape"));
HAnimSite717.addChild(&Shape719);

Billboard& Billboard720 =  Billboard();
Shape& Shape721 =  Shape();
Text& Text722 =  Text();
Text722.setString(new CString[]{CString("12")}, 1);
CFontStyle& FontStyle723 =  CFontStyle();
FontStyle723.setSize(0.035);
Text722.setFontStyle(&FontStyle723);

Shape721.setGeometry(&Text722);

Billboard720.addChild(&Shape721);

HAnimSite717.addChild(Billboard720);

HAnimSegment702.addChild(&HAnimSite717);

Shape& Shape724 =  Shape();
LineSet& LineSet725 =  LineSet();
LineSet725.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate726 =  Coordinate();
Coordinate726.setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet725.setCoord(Coordinate726);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA& ColorRGBA727 =  ColorRGBA();
ColorRGBA727.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet725.addChild(&ColorRGBA727);

Shape724.setGeometry(&LineSet725);

HAnimSegment702.addChild(&Shape724);

Shape& Shape728 =  Shape();
LineSet& LineSet729 =  LineSet();
LineSet729.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate730 =  Coordinate();
Coordinate730.setPoint(new float[]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
LineSet729.setCoord(Coordinate730);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA& ColorRGBA731 =  ColorRGBA();
ColorRGBA731.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet729.addChild(&ColorRGBA731);

Shape728.setGeometry(&LineSet729);

HAnimSegment702.addChild(&Shape728);

HAnimJoint701.addChildren(&HAnimSegment702);

HAnimJoint& HAnimJoint732 =  HAnimJoint();
HAnimJoint732.X3DNode::setName(CString("vc7"));
HAnimJoint732.setDEF(CString("hanim_vc7"));
HAnimJoint732.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimJoint732.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint732.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment733 =  HAnimSegment();
HAnimSegment733.X3DNode::setName(CString("c7"));
HAnimSegment733.setDEF(CString("hanim_c7"));
Transform& Transform734 =  Transform();
Transform734.setTranslation(new float[]{0.0066,1.5132,-0.0301});
Transform& Transform735 =  Transform();
//Empty Transform
Shape& Shape736 =  Shape();
Shape736.setUSE(CString("HAnimJointShape"));
Transform735.addChild(&Shape736);

Transform734.addChild(&Transform735);

HAnimSegment733.addChild(&Transform734);

Shape& Shape737 =  Shape();
LineSet& LineSet738 =  LineSet();
LineSet738.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate739 =  Coordinate();
Coordinate739.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet738.setCoord(Coordinate739);

//from vc7 to vc6 vertices 2
ColorRGBA& ColorRGBA740 =  ColorRGBA();
ColorRGBA740.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet738.addChild(&ColorRGBA740);

Shape737.setGeometry(&LineSet738);

HAnimSegment733.addChild(&Shape737);

HAnimSite& HAnimSite741 =  HAnimSite();
HAnimSite741.X3DNode::setName(CString("l_neck_base"));
HAnimSite741.setDEF(CString("hanim_l_neck_base"));
HAnimSite741.setTranslation(new float[]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor742 =  TouchSensor();
TouchSensor742.setDescription(CString("HAnimSite 82 l_neck_base"));
HAnimSite741.addChild(&TouchSensor742);

Shape& Shape743 =  Shape();
Shape743.setUSE(CString("HAnimSiteShape"));
HAnimSite741.addChild(&Shape743);

Billboard& Billboard744 =  Billboard();
Shape& Shape745 =  Shape();
Text& Text746 =  Text();
Text746.setString(new CString[]{CString("82")}, 1);
CFontStyle& FontStyle747 =  CFontStyle();
FontStyle747.setSize(0.035);
Text746.setFontStyle(&FontStyle747);

Shape745.setGeometry(&Text746);

Billboard744.addChild(&Shape745);

HAnimSite741.addChild(Billboard744);

HAnimSegment733.addChild(&HAnimSite741);

HAnimSite& HAnimSite748 =  HAnimSite();
HAnimSite748.X3DNode::setName(CString("r_neck_base"));
HAnimSite748.setDEF(CString("hanim_r_neck_base"));
HAnimSite748.setTranslation(new float[]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor749 =  TouchSensor();
TouchSensor749.setDescription(CString("HAnimSite 83 r_neck_base"));
HAnimSite748.addChild(&TouchSensor749);

Shape& Shape750 =  Shape();
Shape750.setUSE(CString("HAnimSiteShape"));
HAnimSite748.addChild(&Shape750);

Billboard& Billboard751 =  Billboard();
Shape& Shape752 =  Shape();
Text& Text753 =  Text();
Text753.setString(new CString[]{CString("83")}, 1);
CFontStyle& FontStyle754 =  CFontStyle();
FontStyle754.setSize(0.035);
Text753.setFontStyle(&FontStyle754);

Shape752.setGeometry(&Text753);

Billboard751.addChild(&Shape752);

HAnimSite748.addChild(Billboard751);

HAnimSegment733.addChild(&HAnimSite748);

HAnimJoint732.addChildren(&HAnimSegment733);

HAnimJoint& HAnimJoint755 =  HAnimJoint();
HAnimJoint755.X3DNode::setName(CString("vc6"));
HAnimJoint755.setDEF(CString("hanim_vc6"));
HAnimJoint755.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimJoint755.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint755.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment756 =  HAnimSegment();
HAnimSegment756.X3DNode::setName(CString("c6"));
HAnimSegment756.setDEF(CString("hanim_c6"));
Transform& Transform757 =  Transform();
Transform757.setTranslation(new float[]{0.0066,1.5357,-0.0143});
Transform& Transform758 =  Transform();
//Empty Transform
Shape& Shape759 =  Shape();
Shape759.setUSE(CString("HAnimJointShape"));
Transform758.addChild(&Shape759);

Transform757.addChild(&Transform758);

HAnimSegment756.addChild(&Transform757);

Shape& Shape760 =  Shape();
LineSet& LineSet761 =  LineSet();
LineSet761.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate762 =  Coordinate();
Coordinate762.setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet761.setCoord(Coordinate762);

//from vc6 to vc5 vertices 2
ColorRGBA& ColorRGBA763 =  ColorRGBA();
ColorRGBA763.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet761.addChild(&ColorRGBA763);

Shape760.setGeometry(&LineSet761);

HAnimSegment756.addChild(&Shape760);

HAnimJoint755.addChildren(&HAnimSegment756);

HAnimJoint& HAnimJoint764 =  HAnimJoint();
HAnimJoint764.X3DNode::setName(CString("vc5"));
HAnimJoint764.setDEF(CString("hanim_vc5"));
HAnimJoint764.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimJoint764.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint764.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment765 =  HAnimSegment();
HAnimSegment765.X3DNode::setName(CString("c5"));
HAnimSegment765.setDEF(CString("hanim_c5"));
Transform& Transform766 =  Transform();
Transform766.setTranslation(new float[]{0.0066,1.552,-0.0082});
Transform& Transform767 =  Transform();
//Empty Transform
Shape& Shape768 =  Shape();
Shape768.setUSE(CString("HAnimJointShape"));
Transform767.addChild(&Shape768);

Transform766.addChild(&Transform767);

HAnimSegment765.addChild(&Transform766);

Shape& Shape769 =  Shape();
LineSet& LineSet770 =  LineSet();
LineSet770.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate771 =  Coordinate();
Coordinate771.setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet770.setCoord(Coordinate771);

//from vc5 to vc4 vertices 2
ColorRGBA& ColorRGBA772 =  ColorRGBA();
ColorRGBA772.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet770.addChild(&ColorRGBA772);

Shape769.setGeometry(&LineSet770);

HAnimSegment765.addChild(&Shape769);

HAnimJoint764.addChildren(&HAnimSegment765);

HAnimJoint& HAnimJoint773 =  HAnimJoint();
HAnimJoint773.X3DNode::setName(CString("vc4"));
HAnimJoint773.setDEF(CString("hanim_vc4"));
HAnimJoint773.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimJoint773.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint773.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment774 =  HAnimSegment();
HAnimSegment774.X3DNode::setName(CString("c4"));
HAnimSegment774.setDEF(CString("hanim_c4"));
Transform& Transform775 =  Transform();
Transform775.setTranslation(new float[]{0.0066,1.5662,-0.0084});
Transform& Transform776 =  Transform();
//Empty Transform
Shape& Shape777 =  Shape();
Shape777.setUSE(CString("HAnimJointShape"));
Transform776.addChild(&Shape777);

Transform775.addChild(&Transform776);

HAnimSegment774.addChild(&Transform775);

Shape& Shape778 =  Shape();
LineSet& LineSet779 =  LineSet();
LineSet779.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate780 =  Coordinate();
Coordinate780.setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet779.setCoord(Coordinate780);

//from vc4 to vc3 vertices 2
ColorRGBA& ColorRGBA781 =  ColorRGBA();
ColorRGBA781.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet779.addChild(&ColorRGBA781);

Shape778.setGeometry(&LineSet779);

HAnimSegment774.addChild(&Shape778);

HAnimJoint773.addChildren(&HAnimSegment774);

HAnimJoint& HAnimJoint782 =  HAnimJoint();
HAnimJoint782.X3DNode::setName(CString("vc3"));
HAnimJoint782.setDEF(CString("hanim_vc3"));
HAnimJoint782.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimJoint782.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint782.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment783 =  HAnimSegment();
HAnimSegment783.X3DNode::setName(CString("c3"));
HAnimSegment783.setDEF(CString("hanim_c3"));
Transform& Transform784 =  Transform();
Transform784.setTranslation(new float[]{0.0066,1.58,-0.0103});
Transform& Transform785 =  Transform();
//Empty Transform
Shape& Shape786 =  Shape();
Shape786.setUSE(CString("HAnimJointShape"));
Transform785.addChild(&Shape786);

Transform784.addChild(&Transform785);

HAnimSegment783.addChild(&Transform784);

Shape& Shape787 =  Shape();
LineSet& LineSet788 =  LineSet();
LineSet788.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate789 =  Coordinate();
Coordinate789.setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet788.setCoord(Coordinate789);

//from vc3 to vc2 vertices 2
ColorRGBA& ColorRGBA790 =  ColorRGBA();
ColorRGBA790.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet788.addChild(&ColorRGBA790);

Shape787.setGeometry(&LineSet788);

HAnimSegment783.addChild(&Shape787);

HAnimJoint782.addChildren(&HAnimSegment783);

HAnimJoint& HAnimJoint791 =  HAnimJoint();
HAnimJoint791.X3DNode::setName(CString("vc2"));
HAnimJoint791.setDEF(CString("hanim_vc2"));
HAnimJoint791.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimJoint791.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint791.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment792 =  HAnimSegment();
HAnimSegment792.X3DNode::setName(CString("c2"));
HAnimSegment792.setDEF(CString("hanim_c2"));
Transform& Transform793 =  Transform();
Transform793.setTranslation(new float[]{0.0066,1.5928,-0.0103});
Transform& Transform794 =  Transform();
//Empty Transform
Shape& Shape795 =  Shape();
Shape795.setUSE(CString("HAnimJointShape"));
Transform794.addChild(&Shape795);

Transform793.addChild(&Transform794);

HAnimSegment792.addChild(&Transform793);

Shape& Shape796 =  Shape();
LineSet& LineSet797 =  LineSet();
LineSet797.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate798 =  Coordinate();
Coordinate798.setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet797.setCoord(Coordinate798);

//from vc2 to vc1 vertices 2
ColorRGBA& ColorRGBA799 =  ColorRGBA();
ColorRGBA799.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet797.addChild(&ColorRGBA799);

Shape796.setGeometry(&LineSet797);

HAnimSegment792.addChild(&Shape796);

HAnimSite& HAnimSite800 =  HAnimSite();
HAnimSite800.X3DNode::setName(CString("adams_apple"));
HAnimSite800.setDEF(CString("hanim_adams_apple"));
TouchSensor& TouchSensor801 =  TouchSensor();
TouchSensor801.setDescription(CString("HAnimSite 11 adams_apple"));
HAnimSite800.addChild(&TouchSensor801);

Shape& Shape802 =  Shape();
Shape802.setUSE(CString("HAnimSiteShape"));
HAnimSite800.addChild(&Shape802);

Billboard& Billboard803 =  Billboard();
Shape& Shape804 =  Shape();
Text& Text805 =  Text();
Text805.setString(new CString[]{CString("11")}, 1);
CFontStyle& FontStyle806 =  CFontStyle();
FontStyle806.setSize(0.035);
Text805.setFontStyle(&FontStyle806);

Shape804.setGeometry(&Text805);

Billboard803.addChild(&Shape804);

HAnimSite800.addChild(Billboard803);

HAnimSegment792.addChild(&HAnimSite800);

HAnimJoint791.addChildren(&HAnimSegment792);

HAnimJoint& HAnimJoint807 =  HAnimJoint();
HAnimJoint807.X3DNode::setName(CString("vc1"));
HAnimJoint807.setDEF(CString("hanim_vc1"));
HAnimJoint807.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimJoint807.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint807.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment808 =  HAnimSegment();
HAnimSegment808.X3DNode::setName(CString("c1"));
HAnimSegment808.setDEF(CString("hanim_c1"));
Transform& Transform809 =  Transform();
Transform809.setTranslation(new float[]{0.0066,1.6144,-0.0034});
Transform& Transform810 =  Transform();
//Empty Transform
Shape& Shape811 =  Shape();
Shape811.setUSE(CString("HAnimJointShape"));
Transform810.addChild(&Shape811);

Transform809.addChild(&Transform810);

HAnimSegment808.addChild(&Transform809);

Shape& Shape812 =  Shape();
LineSet& LineSet813 =  LineSet();
LineSet813.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate814 =  Coordinate();
Coordinate814.setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet813.setCoord(Coordinate814);

//from vc1 to skullbase vertices 2
ColorRGBA& ColorRGBA815 =  ColorRGBA();
ColorRGBA815.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet813.addChild(&ColorRGBA815);

Shape812.setGeometry(&LineSet813);

HAnimSegment808.addChild(&Shape812);

HAnimJoint807.addChildren(&HAnimSegment808);

HAnimJoint& HAnimJoint816 =  HAnimJoint();
HAnimJoint816.X3DNode::setName(CString("skullbase"));
HAnimJoint816.setDEF(CString("hanim_skullbase"));
HAnimJoint816.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimJoint816.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint816.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment817 =  HAnimSegment();
HAnimSegment817.X3DNode::setName(CString("skull"));
HAnimSegment817.setDEF(CString("hanim_skull"));
Transform& Transform818 =  Transform();
Transform818.setTranslation(new float[]{0.0044,1.6209,0.0236});
Transform& Transform819 =  Transform();
//Empty Transform
Shape& Shape820 =  Shape();
Shape820.setUSE(CString("HAnimJointShape"));
Transform819.addChild(&Shape820);

Transform818.addChild(&Transform819);

HAnimSegment817.addChild(&Transform818);

Shape& Shape821 =  Shape();
LineSet& LineSet822 =  LineSet();
LineSet822.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate823 =  Coordinate();
Coordinate823.setPoint(new float[]{0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689}, 6);
LineSet822.setCoord(Coordinate823);

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA& ColorRGBA824 =  ColorRGBA();
ColorRGBA824.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet822.addChild(&ColorRGBA824);

Shape821.setGeometry(&LineSet822);

HAnimSegment817.addChild(&Shape821);

HAnimSite& HAnimSite825 =  HAnimSite();
HAnimSite825.X3DNode::setName(CString("glabella"));
HAnimSite825.setDEF(CString("hanim_glabella"));
TouchSensor& TouchSensor826 =  TouchSensor();
TouchSensor826.setDescription(CString("HAnimSite 1 glabella"));
HAnimSite825.addChild(&TouchSensor826);

Shape& Shape827 =  Shape();
Shape827.setUSE(CString("HAnimSiteShape"));
HAnimSite825.addChild(&Shape827);

Billboard& Billboard828 =  Billboard();
Shape& Shape829 =  Shape();
Text& Text830 =  Text();
Text830.setString(new CString[]{CString("1")}, 1);
CFontStyle& FontStyle831 =  CFontStyle();
FontStyle831.setSize(0.035);
Text830.setFontStyle(&FontStyle831);

Shape829.setGeometry(&Text830);

Billboard828.addChild(&Shape829);

HAnimSite825.addChild(Billboard828);

HAnimSegment817.addChild(&HAnimSite825);

HAnimSite& HAnimSite832 =  HAnimSite();
HAnimSite832.X3DNode::setName(CString("l_ectocanthus"));
HAnimSite832.setDEF(CString("hanim_l_ectocanthus"));
TouchSensor& TouchSensor833 =  TouchSensor();
TouchSensor833.setDescription(CString("HAnimSite 85 l_ectocanthus"));
HAnimSite832.addChild(&TouchSensor833);

Shape& Shape834 =  Shape();
Shape834.setUSE(CString("HAnimSiteShape"));
HAnimSite832.addChild(&Shape834);

Billboard& Billboard835 =  Billboard();
Shape& Shape836 =  Shape();
Text& Text837 =  Text();
Text837.setString(new CString[]{CString("85")}, 1);
CFontStyle& FontStyle838 =  CFontStyle();
FontStyle838.setSize(0.035);
Text837.setFontStyle(&FontStyle838);

Shape836.setGeometry(&Text837);

Billboard835.addChild(&Shape836);

HAnimSite832.addChild(Billboard835);

HAnimSegment817.addChild(&HAnimSite832);

HAnimSite& HAnimSite839 =  HAnimSite();
HAnimSite839.X3DNode::setName(CString("l_infraorbitale"));
HAnimSite839.setDEF(CString("hanim_l_infraorbitale"));
HAnimSite839.setTranslation(new float[]{0.0341,1.6171,0.0752});
TouchSensor& TouchSensor840 =  TouchSensor();
TouchSensor840.setDescription(CString("HAnimSite 3 l_infraorbitale"));
HAnimSite839.addChild(&TouchSensor840);

Shape& Shape841 =  Shape();
Shape841.setUSE(CString("HAnimSiteShape"));
HAnimSite839.addChild(&Shape841);

Billboard& Billboard842 =  Billboard();
Shape& Shape843 =  Shape();
Text& Text844 =  Text();
Text844.setString(new CString[]{CString("3")}, 1);
CFontStyle& FontStyle845 =  CFontStyle();
FontStyle845.setSize(0.035);
Text844.setFontStyle(&FontStyle845);

Shape843.setGeometry(&Text844);

Billboard842.addChild(&Shape843);

HAnimSite839.addChild(Billboard842);

HAnimSegment817.addChild(&HAnimSite839);

HAnimSite& HAnimSite846 =  HAnimSite();
HAnimSite846.X3DNode::setName(CString("l_tragion"));
HAnimSite846.setDEF(CString("hanim_l_tragion"));
HAnimSite846.setTranslation(new float[]{0.0739,1.6348,0.0282});
TouchSensor& TouchSensor847 =  TouchSensor();
TouchSensor847.setDescription(CString("HAnimSite 4 l_tragion"));
HAnimSite846.addChild(&TouchSensor847);

Shape& Shape848 =  Shape();
Shape848.setUSE(CString("HAnimSiteShape"));
HAnimSite846.addChild(&Shape848);

Billboard& Billboard849 =  Billboard();
Shape& Shape850 =  Shape();
Text& Text851 =  Text();
Text851.setString(new CString[]{CString("4")}, 1);
CFontStyle& FontStyle852 =  CFontStyle();
FontStyle852.setSize(0.035);
Text851.setFontStyle(&FontStyle852);

Shape850.setGeometry(&Text851);

Billboard849.addChild(&Shape850);

HAnimSite846.addChild(Billboard849);

HAnimSegment817.addChild(&HAnimSite846);

HAnimSite& HAnimSite853 =  HAnimSite();
HAnimSite853.X3DNode::setName(CString("nuchale"));
HAnimSite853.setDEF(CString("hanim_nuchale"));
HAnimSite853.setTranslation(new float[]{0.0039,1.5972,-0.0796});
TouchSensor& TouchSensor854 =  TouchSensor();
TouchSensor854.setDescription(CString("HAnimSite 81 nuchale"));
HAnimSite853.addChild(&TouchSensor854);

Shape& Shape855 =  Shape();
Shape855.setUSE(CString("HAnimSiteShape"));
HAnimSite853.addChild(&Shape855);

Billboard& Billboard856 =  Billboard();
Shape& Shape857 =  Shape();
Text& Text858 =  Text();
Text858.setString(new CString[]{CString("81")}, 1);
CFontStyle& FontStyle859 =  CFontStyle();
FontStyle859.setSize(0.035);
Text858.setFontStyle(&FontStyle859);

Shape857.setGeometry(&Text858);

Billboard856.addChild(&Shape857);

HAnimSite853.addChild(Billboard856);

HAnimSegment817.addChild(&HAnimSite853);

HAnimSite& HAnimSite860 =  HAnimSite();
HAnimSite860.X3DNode::setName(CString("opisthocranion"));
HAnimSite860.setDEF(CString("hanim_opisthocranion"));
TouchSensor& TouchSensor861 =  TouchSensor();
TouchSensor861.setDescription(CString("HAnimSite 89 opisthocranion"));
HAnimSite860.addChild(&TouchSensor861);

Shape& Shape862 =  Shape();
Shape862.setUSE(CString("HAnimSiteShape"));
HAnimSite860.addChild(&Shape862);

Billboard& Billboard863 =  Billboard();
Shape& Shape864 =  Shape();
Text& Text865 =  Text();
Text865.setString(new CString[]{CString("89")}, 1);
CFontStyle& FontStyle866 =  CFontStyle();
FontStyle866.setSize(0.035);
Text865.setFontStyle(&FontStyle866);

Shape864.setGeometry(&Text865);

Billboard863.addChild(&Shape864);

HAnimSite860.addChild(Billboard863);

HAnimSegment817.addChild(&HAnimSite860);

HAnimSite& HAnimSite867 =  HAnimSite();
HAnimSite867.X3DNode::setName(CString("r_ectocanthus"));
HAnimSite867.setDEF(CString("hanim_r_ectocanthus"));
TouchSensor& TouchSensor868 =  TouchSensor();
TouchSensor868.setDescription(CString("HAnimSite 86 r_ectocanthus"));
HAnimSite867.addChild(&TouchSensor868);

Shape& Shape869 =  Shape();
Shape869.setUSE(CString("HAnimSiteShape"));
HAnimSite867.addChild(&Shape869);

Billboard& Billboard870 =  Billboard();
Shape& Shape871 =  Shape();
Text& Text872 =  Text();
Text872.setString(new CString[]{CString("86")}, 1);
CFontStyle& FontStyle873 =  CFontStyle();
FontStyle873.setSize(0.035);
Text872.setFontStyle(&FontStyle873);

Shape871.setGeometry(&Text872);

Billboard870.addChild(&Shape871);

HAnimSite867.addChild(Billboard870);

HAnimSegment817.addChild(&HAnimSite867);

HAnimSite& HAnimSite874 =  HAnimSite();
HAnimSite874.X3DNode::setName(CString("r_infraorbitale"));
HAnimSite874.setDEF(CString("hanim_r_infraorbitale"));
HAnimSite874.setTranslation(new float[]{-0.0237,1.6171,0.0752});
TouchSensor& TouchSensor875 =  TouchSensor();
TouchSensor875.setDescription(CString("HAnimSite 6 r_infraorbitale"));
HAnimSite874.addChild(&TouchSensor875);

Shape& Shape876 =  Shape();
Shape876.setUSE(CString("HAnimSiteShape"));
HAnimSite874.addChild(&Shape876);

Billboard& Billboard877 =  Billboard();
Shape& Shape878 =  Shape();
Text& Text879 =  Text();
Text879.setString(new CString[]{CString("6")}, 1);
CFontStyle& FontStyle880 =  CFontStyle();
FontStyle880.setSize(0.035);
Text879.setFontStyle(&FontStyle880);

Shape878.setGeometry(&Text879);

Billboard877.addChild(&Shape878);

HAnimSite874.addChild(Billboard877);

HAnimSegment817.addChild(&HAnimSite874);

HAnimSite& HAnimSite881 =  HAnimSite();
HAnimSite881.X3DNode::setName(CString("r_tragion"));
HAnimSite881.setDEF(CString("hanim_r_tragion"));
HAnimSite881.setTranslation(new float[]{-0.0646,1.6347,0.0302});
TouchSensor& TouchSensor882 =  TouchSensor();
TouchSensor882.setDescription(CString("HAnimSite 7 r_tragion"));
HAnimSite881.addChild(&TouchSensor882);

Shape& Shape883 =  Shape();
Shape883.setUSE(CString("HAnimSiteShape"));
HAnimSite881.addChild(&Shape883);

Billboard& Billboard884 =  Billboard();
Shape& Shape885 =  Shape();
Text& Text886 =  Text();
Text886.setString(new CString[]{CString("7")}, 1);
CFontStyle& FontStyle887 =  CFontStyle();
FontStyle887.setSize(0.035);
Text886.setFontStyle(&FontStyle887);

Shape885.setGeometry(&Text886);

Billboard884.addChild(&Shape885);

HAnimSite881.addChild(Billboard884);

HAnimSegment817.addChild(&HAnimSite881);

HAnimSite& HAnimSite888 =  HAnimSite();
HAnimSite888.X3DNode::setName(CString("sellion"));
HAnimSite888.setDEF(CString("hanim_sellion"));
HAnimSite888.setTranslation(new float[]{0.0058,1.6316,0.0852});
TouchSensor& TouchSensor889 =  TouchSensor();
TouchSensor889.setDescription(CString("HAnimSite 2 sellion"));
HAnimSite888.addChild(&TouchSensor889);

Shape& Shape890 =  Shape();
Shape890.setUSE(CString("HAnimSiteShape"));
HAnimSite888.addChild(&Shape890);

Billboard& Billboard891 =  Billboard();
Shape& Shape892 =  Shape();
Text& Text893 =  Text();
Text893.setString(new CString[]{CString("2")}, 1);
CFontStyle& FontStyle894 =  CFontStyle();
FontStyle894.setSize(0.035);
Text893.setFontStyle(&FontStyle894);

Shape892.setGeometry(&Text893);

Billboard891.addChild(&Shape892);

HAnimSite888.addChild(Billboard891);

HAnimSegment817.addChild(&HAnimSite888);

HAnimSite& HAnimSite895 =  HAnimSite();
HAnimSite895.X3DNode::setName(CString("skull_vertex"));
HAnimSite895.setDEF(CString("hanim_skull_vertex"));
HAnimSite895.setTranslation(new float[]{0.005,1.7504,0.0055});
TouchSensor& TouchSensor896 =  TouchSensor();
TouchSensor896.setDescription(CString("HAnimSite 0 skull_vertex"));
HAnimSite895.addChild(&TouchSensor896);

Shape& Shape897 =  Shape();
Shape897.setUSE(CString("HAnimSiteShape"));
HAnimSite895.addChild(&Shape897);

Billboard& Billboard898 =  Billboard();
Shape& Shape899 =  Shape();
Text& Text900 =  Text();
Text900.setString(new CString[]{CString("0")}, 1);
CFontStyle& FontStyle901 =  CFontStyle();
FontStyle901.setSize(0.035);
Text900.setFontStyle(&FontStyle901);

Shape899.setGeometry(&Text900);

Billboard898.addChild(&Shape899);

HAnimSite895.addChild(Billboard898);

HAnimSegment817.addChild(&HAnimSite895);

Shape& Shape902 =  Shape();
LineSet& LineSet903 =  LineSet();
LineSet903.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate904 =  Coordinate();
Coordinate904.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689}, 6);
LineSet903.setCoord(Coordinate904);

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA& ColorRGBA905 =  ColorRGBA();
ColorRGBA905.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet903.addChild(&ColorRGBA905);

Shape902.setGeometry(&LineSet903);

HAnimSegment817.addChild(&Shape902);

Shape& Shape906 =  Shape();
LineSet& LineSet907 =  LineSet();
LineSet907.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate908 =  Coordinate();
Coordinate908.setPoint(new float[]{0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188}, 6);
LineSet907.setCoord(Coordinate908);

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA& ColorRGBA909 =  ColorRGBA();
ColorRGBA909.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet907.addChild(&ColorRGBA909);

Shape906.setGeometry(&LineSet907);

HAnimSegment817.addChild(&Shape906);

Shape& Shape910 =  Shape();
LineSet& LineSet911 =  LineSet();
LineSet911.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate912 =  Coordinate();
Coordinate912.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188}, 6);
LineSet911.setCoord(Coordinate912);

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA& ColorRGBA913 =  ColorRGBA();
ColorRGBA913.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet911.addChild(&ColorRGBA913);

Shape910.setGeometry(&LineSet911);

HAnimSegment817.addChild(&Shape910);

Shape& Shape914 =  Shape();
LineSet& LineSet915 =  LineSet();
LineSet915.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate916 =  Coordinate();
Coordinate916.setPoint(new float[]{0.0044,1.6209,0.0236,0.0216,1.4053,0.0051}, 6);
LineSet915.setCoord(Coordinate916);

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA917 =  ColorRGBA();
ColorRGBA917.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet915.addChild(&ColorRGBA917);

Shape914.setGeometry(&LineSet915);

HAnimSegment817.addChild(&Shape914);

Shape& Shape918 =  Shape();
LineSet& LineSet919 =  LineSet();
LineSet919.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate920 =  Coordinate();
Coordinate920.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051}, 6);
LineSet919.setCoord(Coordinate920);

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA921 =  ColorRGBA();
ColorRGBA921.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet919.addChild(&ColorRGBA921);

Shape918.setGeometry(&LineSet919);

HAnimSegment817.addChild(&Shape918);

Shape& Shape922 =  Shape();
LineSet& LineSet923 =  LineSet();
LineSet923.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate924 =  Coordinate();
Coordinate924.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865}, 6);
LineSet923.setCoord(Coordinate924);

//from skullbase to temporomandibular vertices 2
ColorRGBA& ColorRGBA925 =  ColorRGBA();
ColorRGBA925.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet923.addChild(&ColorRGBA925);

Shape922.setGeometry(&LineSet923);

HAnimSegment817.addChild(&Shape922);

HAnimJoint816.addChildren(&HAnimSegment817);

HAnimJoint& HAnimJoint926 =  HAnimJoint();
HAnimJoint926.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint926.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint926.setCenter(new float[]{0.0503,1.4157,-0.0689});
HAnimJoint926.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint926.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint816.addChildren(&HAnimJoint926);

HAnimJoint& HAnimJoint927 =  HAnimJoint();
HAnimJoint927.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint927.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint927.setCenter(new float[]{-0.0507,1.4157,-0.0689});
HAnimJoint927.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint927.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint816.addChildren(&HAnimJoint927);

HAnimJoint& HAnimJoint928 =  HAnimJoint();
HAnimJoint928.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint928.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint928.setCenter(new float[]{0.0479,1.3963,-0.0188});
HAnimJoint928.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint928.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint816.addChildren(&HAnimJoint928);

HAnimJoint& HAnimJoint929 =  HAnimJoint();
HAnimJoint929.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint929.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint929.setCenter(new float[]{-0.0483,1.3963,-0.0188});
HAnimJoint929.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint929.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint816.addChildren(&HAnimJoint929);

HAnimJoint& HAnimJoint930 =  HAnimJoint();
HAnimJoint930.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint930.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint930.setCenter(new float[]{0.0216,1.4053,0.0051});
HAnimJoint930.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint930.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint816.addChildren(&HAnimJoint930);

HAnimJoint& HAnimJoint931 =  HAnimJoint();
HAnimJoint931.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint931.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint931.setCenter(new float[]{-0.0219,1.4053,0.0051});
HAnimJoint931.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint931.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint816.addChildren(&HAnimJoint931);

HAnimJoint& HAnimJoint932 =  HAnimJoint();
HAnimJoint932.X3DNode::setName(CString("temporomandibular"));
HAnimJoint932.setDEF(CString("hanim_temporomandibular"));
HAnimJoint932.setCenter(new float[]{-0.0002,1.3043,-0.0865});
HAnimJoint932.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint932.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint816.addChildren(&HAnimJoint932);

HAnimJoint807.addChildren(&HAnimJoint816);

HAnimJoint791.addChildren(&HAnimJoint807);

HAnimJoint782.addChildren(&HAnimJoint791);

HAnimJoint773.addChildren(&HAnimJoint782);

HAnimJoint764.addChildren(&HAnimJoint773);

HAnimJoint755.addChildren(&HAnimJoint764);

HAnimJoint732.addChildren(&HAnimJoint755);

HAnimJoint701.addChildren(&HAnimJoint732);

HAnimJoint& HAnimJoint933 =  HAnimJoint();
HAnimJoint933.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint933.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint933.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimJoint933.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint933.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment934 =  HAnimSegment();
HAnimSegment934.X3DNode::setName(CString("l_clavicle"));
HAnimSegment934.setDEF(CString("hanim_l_clavicle"));
Transform& Transform935 =  Transform();
Transform935.setTranslation(new float[]{0.082,1.4488,-0.0353});
Transform& Transform936 =  Transform();
//Empty Transform
Shape& Shape937 =  Shape();
Shape937.setUSE(CString("HAnimJointShape"));
Transform936.addChild(&Shape937);

Transform935.addChild(&Transform936);

HAnimSegment934.addChild(&Transform935);

Shape& Shape938 =  Shape();
LineSet& LineSet939 =  LineSet();
LineSet939.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate940 =  Coordinate();
Coordinate940.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet939.setCoord(Coordinate940);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA& ColorRGBA941 =  ColorRGBA();
ColorRGBA941.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet939.addChild(&ColorRGBA941);

Shape938.setGeometry(&LineSet939);

HAnimSegment934.addChild(&Shape938);

HAnimSite& HAnimSite942 =  HAnimSite();
HAnimSite942.X3DNode::setName(CString("l_acromion"));
HAnimSite942.setDEF(CString("hanim_l_acromion"));
HAnimSite942.setTranslation(new float[]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor943 =  TouchSensor();
TouchSensor943.setDescription(CString("HAnimSite 15 l_acromion"));
HAnimSite942.addChild(&TouchSensor943);

Shape& Shape944 =  Shape();
Shape944.setUSE(CString("HAnimSiteShape"));
HAnimSite942.addChild(&Shape944);

Billboard& Billboard945 =  Billboard();
Shape& Shape946 =  Shape();
Text& Text947 =  Text();
Text947.setString(new CString[]{CString("15")}, 1);
CFontStyle& FontStyle948 =  CFontStyle();
FontStyle948.setSize(0.035);
Text947.setFontStyle(&FontStyle948);

Shape946.setGeometry(&Text947);

Billboard945.addChild(&Shape946);

HAnimSite942.addChild(Billboard945);

HAnimSegment934.addChild(&HAnimSite942);

HAnimSite& HAnimSite949 =  HAnimSite();
HAnimSite949.X3DNode::setName(CString("l_axilla_distal"));
HAnimSite949.setDEF(CString("hanim_l_axilla_distal"));
HAnimSite949.setTranslation(new float[]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor950 =  TouchSensor();
TouchSensor950.setDescription(CString("HAnimSite 17 l_axilla_distal"));
HAnimSite949.addChild(&TouchSensor950);

Shape& Shape951 =  Shape();
Shape951.setUSE(CString("HAnimSiteShape"));
HAnimSite949.addChild(&Shape951);

Billboard& Billboard952 =  Billboard();
Shape& Shape953 =  Shape();
Text& Text954 =  Text();
Text954.setString(new CString[]{CString("17")}, 1);
CFontStyle& FontStyle955 =  CFontStyle();
FontStyle955.setSize(0.035);
Text954.setFontStyle(&FontStyle955);

Shape953.setGeometry(&Text954);

Billboard952.addChild(&Shape953);

HAnimSite949.addChild(Billboard952);

HAnimSegment934.addChild(&HAnimSite949);

HAnimSite& HAnimSite956 =  HAnimSite();
HAnimSite956.X3DNode::setName(CString("l_axilla_posterior_folds"));
HAnimSite956.setDEF(CString("hanim_l_axilla_posterior_folds"));
TouchSensor& TouchSensor957 =  TouchSensor();
TouchSensor957.setDescription(CString("HAnimSite 18 l_axilla_posterior_folds"));
HAnimSite956.addChild(&TouchSensor957);

Shape& Shape958 =  Shape();
Shape958.setUSE(CString("HAnimSiteShape"));
HAnimSite956.addChild(&Shape958);

Billboard& Billboard959 =  Billboard();
Shape& Shape960 =  Shape();
Text& Text961 =  Text();
Text961.setString(new CString[]{CString("18")}, 1);
CFontStyle& FontStyle962 =  CFontStyle();
FontStyle962.setSize(0.035);
Text961.setFontStyle(&FontStyle962);

Shape960.setGeometry(&Text961);

Billboard959.addChild(&Shape960);

HAnimSite956.addChild(Billboard959);

HAnimSegment934.addChild(&HAnimSite956);

HAnimSite& HAnimSite963 =  HAnimSite();
HAnimSite963.X3DNode::setName(CString("l_axilla_proximal"));
HAnimSite963.setDEF(CString("hanim_l_axilla_proximal"));
HAnimSite963.setTranslation(new float[]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor964 =  TouchSensor();
TouchSensor964.setDescription(CString("HAnimSite 16 l_axilla_proximal"));
HAnimSite963.addChild(&TouchSensor964);

Shape& Shape965 =  Shape();
Shape965.setUSE(CString("HAnimSiteShape"));
HAnimSite963.addChild(&Shape965);

Billboard& Billboard966 =  Billboard();
Shape& Shape967 =  Shape();
Text& Text968 =  Text();
Text968.setString(new CString[]{CString("16")}, 1);
CFontStyle& FontStyle969 =  CFontStyle();
FontStyle969.setSize(0.035);
Text968.setFontStyle(&FontStyle969);

Shape967.setGeometry(&Text968);

Billboard966.addChild(&Shape967);

HAnimSite963.addChild(Billboard966);

HAnimSegment934.addChild(&HAnimSite963);

HAnimSite& HAnimSite970 =  HAnimSite();
HAnimSite970.X3DNode::setName(CString("l_clavicale"));
HAnimSite970.setDEF(CString("hanim_l_clavicale"));
HAnimSite970.setTranslation(new float[]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor971 =  TouchSensor();
TouchSensor971.setDescription(CString("HAnimSite 14 l_clavicale"));
HAnimSite970.addChild(&TouchSensor971);

Shape& Shape972 =  Shape();
Shape972.setUSE(CString("HAnimSiteShape"));
HAnimSite970.addChild(&Shape972);

Billboard& Billboard973 =  Billboard();
Shape& Shape974 =  Shape();
Text& Text975 =  Text();
Text975.setString(new CString[]{CString("14")}, 1);
CFontStyle& FontStyle976 =  CFontStyle();
FontStyle976.setSize(0.035);
Text975.setFontStyle(&FontStyle976);

Shape974.setGeometry(&Text975);

Billboard973.addChild(&Shape974);

HAnimSite970.addChild(Billboard973);

HAnimSegment934.addChild(&HAnimSite970);

HAnimJoint933.addChildren(&HAnimSegment934);

HAnimJoint& HAnimJoint977 =  HAnimJoint();
HAnimJoint977.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint977.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint977.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimJoint977.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint977.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment978 =  HAnimSegment();
HAnimSegment978.X3DNode::setName(CString("l_scapula"));
HAnimSegment978.setDEF(CString("hanim_l_scapula"));
Transform& Transform979 =  Transform();
Transform979.setTranslation(new float[]{0.0962,1.4269,-0.0424});
Transform& Transform980 =  Transform();
//Empty Transform
Shape& Shape981 =  Shape();
Shape981.setUSE(CString("HAnimJointShape"));
Transform980.addChild(&Shape981);

Transform979.addChild(&Transform980);

HAnimSegment978.addChild(&Transform979);

Shape& Shape982 =  Shape();
LineSet& LineSet983 =  LineSet();
LineSet983.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate984 =  Coordinate();
Coordinate984.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet983.setCoord(Coordinate984);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA& ColorRGBA985 =  ColorRGBA();
ColorRGBA985.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet983.addChild(&ColorRGBA985);

Shape982.setGeometry(&LineSet983);

HAnimSegment978.addChild(&Shape982);

HAnimJoint977.addChildren(&HAnimSegment978);

HAnimJoint& HAnimJoint986 =  HAnimJoint();
HAnimJoint986.X3DNode::setName(CString("l_shoulder"));
HAnimJoint986.setDEF(CString("hanim_l_shoulder"));
HAnimJoint986.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimJoint986.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint986.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment987 =  HAnimSegment();
HAnimSegment987.X3DNode::setName(CString("l_upperarm"));
HAnimSegment987.setDEF(CString("hanim_l_upperarm"));
Transform& Transform988 =  Transform();
Transform988.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Transform& Transform989 =  Transform();
//Empty Transform
Shape& Shape990 =  Shape();
Shape990.setUSE(CString("HAnimJointShape"));
Transform989.addChild(&Shape990);

Transform988.addChild(&Transform989);

HAnimSegment987.addChild(&Transform988);

Shape& Shape991 =  Shape();
LineSet& LineSet992 =  LineSet();
LineSet992.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate993 =  Coordinate();
Coordinate993.setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet992.setCoord(Coordinate993);

//from l_shoulder to l_elbow vertices 2
ColorRGBA& ColorRGBA994 =  ColorRGBA();
ColorRGBA994.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet992.addChild(&ColorRGBA994);

Shape991.setGeometry(&LineSet992);

HAnimSegment987.addChild(&Shape991);

HAnimSite& HAnimSite995 =  HAnimSite();
HAnimSite995.X3DNode::setName(CString("l_bideltoid"));
HAnimSite995.setDEF(CString("hanim_l_bideltoid"));
TouchSensor& TouchSensor996 =  TouchSensor();
TouchSensor996.setDescription(CString("HAnimSite 96 l_bideltoid"));
HAnimSite995.addChild(&TouchSensor996);

Shape& Shape997 =  Shape();
Shape997.setUSE(CString("HAnimSiteShape"));
HAnimSite995.addChild(&Shape997);

Billboard& Billboard998 =  Billboard();
Shape& Shape999 =  Shape();
Text& Text1000 =  Text();
Text1000.setString(new CString[]{CString("96")}, 1);
CFontStyle& FontStyle1001 =  CFontStyle();
FontStyle1001.setSize(0.035);
Text1000.setFontStyle(&FontStyle1001);

Shape999.setGeometry(&Text1000);

Billboard998.addChild(&Shape999);

HAnimSite995.addChild(Billboard998);

HAnimSegment987.addChild(&HAnimSite995);

HAnimSite& HAnimSite1002 =  HAnimSite();
HAnimSite1002.X3DNode::setName(CString("l_humeral_lateral_epicondyles"));
HAnimSite1002.setDEF(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimSite1002.setTranslation(new float[]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor1003 =  TouchSensor();
TouchSensor1003.setDescription(CString("HAnimSite 63 l_humeral_lateral_epicondyles"));
HAnimSite1002.addChild(&TouchSensor1003);

Shape& Shape1004 =  Shape();
Shape1004.setUSE(CString("HAnimSiteShape"));
HAnimSite1002.addChild(&Shape1004);

Billboard& Billboard1005 =  Billboard();
Shape& Shape1006 =  Shape();
Text& Text1007 =  Text();
Text1007.setString(new CString[]{CString("63")}, 1);
CFontStyle& FontStyle1008 =  CFontStyle();
FontStyle1008.setSize(0.035);
Text1007.setFontStyle(&FontStyle1008);

Shape1006.setGeometry(&Text1007);

Billboard1005.addChild(&Shape1006);

HAnimSite1002.addChild(Billboard1005);

HAnimSegment987.addChild(&HAnimSite1002);

HAnimJoint986.addChildren(&HAnimSegment987);

HAnimJoint& HAnimJoint1009 =  HAnimJoint();
HAnimJoint1009.X3DNode::setName(CString("l_elbow"));
HAnimJoint1009.setDEF(CString("hanim_l_elbow"));
HAnimJoint1009.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimJoint1009.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1009.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1010 =  HAnimSegment();
HAnimSegment1010.X3DNode::setName(CString("l_forearm"));
HAnimSegment1010.setDEF(CString("hanim_l_forearm"));
Transform& Transform1011 =  Transform();
Transform1011.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Transform& Transform1012 =  Transform();
//Empty Transform
Shape& Shape1013 =  Shape();
Shape1013.setUSE(CString("HAnimJointShape"));
Transform1012.addChild(&Shape1013);

Transform1011.addChild(&Transform1012);

HAnimSegment1010.addChild(&Transform1011);

Shape& Shape1014 =  Shape();
LineSet& LineSet1015 =  LineSet();
LineSet1015.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1016 =  Coordinate();
Coordinate1016.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet1015.setCoord(Coordinate1016);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA& ColorRGBA1017 =  ColorRGBA();
ColorRGBA1017.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1015.addChild(&ColorRGBA1017);

Shape1014.setGeometry(&LineSet1015);

HAnimSegment1010.addChild(&Shape1014);

HAnimSite& HAnimSite1018 =  HAnimSite();
HAnimSite1018.X3DNode::setName(CString("l_humeral_medial_epicondyles"));
HAnimSite1018.setDEF(CString("hanim_l_humeral_medial_epicondyles"));
HAnimSite1018.setTranslation(new float[]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor1019 =  TouchSensor();
TouchSensor1019.setDescription(CString("HAnimSite 64 l_humeral_medial_epicondyles"));
HAnimSite1018.addChild(&TouchSensor1019);

Shape& Shape1020 =  Shape();
Shape1020.setUSE(CString("HAnimSiteShape"));
HAnimSite1018.addChild(&Shape1020);

Billboard& Billboard1021 =  Billboard();
Shape& Shape1022 =  Shape();
Text& Text1023 =  Text();
Text1023.setString(new CString[]{CString("64")}, 1);
CFontStyle& FontStyle1024 =  CFontStyle();
FontStyle1024.setSize(0.035);
Text1023.setFontStyle(&FontStyle1024);

Shape1022.setGeometry(&Text1023);

Billboard1021.addChild(&Shape1022);

HAnimSite1018.addChild(Billboard1021);

HAnimSegment1010.addChild(&HAnimSite1018);

HAnimSite& HAnimSite1025 =  HAnimSite();
HAnimSite1025.X3DNode::setName(CString("l_olecranon"));
HAnimSite1025.setDEF(CString("hanim_l_olecranon"));
HAnimSite1025.setTranslation(new float[]{-0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor1026 =  TouchSensor();
TouchSensor1026.setDescription(CString("HAnimSite 65 l_olecranon"));
HAnimSite1025.addChild(&TouchSensor1026);

Shape& Shape1027 =  Shape();
Shape1027.setUSE(CString("HAnimSiteShape"));
HAnimSite1025.addChild(&Shape1027);

Billboard& Billboard1028 =  Billboard();
Shape& Shape1029 =  Shape();
Text& Text1030 =  Text();
Text1030.setString(new CString[]{CString("65")}, 1);
CFontStyle& FontStyle1031 =  CFontStyle();
FontStyle1031.setSize(0.035);
Text1030.setFontStyle(&FontStyle1031);

Shape1029.setGeometry(&Text1030);

Billboard1028.addChild(&Shape1029);

HAnimSite1025.addChild(Billboard1028);

HAnimSegment1010.addChild(&HAnimSite1025);

HAnimSite& HAnimSite1032 =  HAnimSite();
HAnimSite1032.X3DNode::setName(CString("l_radial_styloid"));
HAnimSite1032.setDEF(CString("hanim_l_radial_styloid"));
HAnimSite1032.setTranslation(new float[]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor1033 =  TouchSensor();
TouchSensor1033.setDescription(CString("HAnimSite 71 l_radial_styloid"));
HAnimSite1032.addChild(&TouchSensor1033);

Shape& Shape1034 =  Shape();
Shape1034.setUSE(CString("HAnimSiteShape"));
HAnimSite1032.addChild(&Shape1034);

Billboard& Billboard1035 =  Billboard();
Shape& Shape1036 =  Shape();
Text& Text1037 =  Text();
Text1037.setString(new CString[]{CString("71")}, 1);
CFontStyle& FontStyle1038 =  CFontStyle();
FontStyle1038.setSize(0.035);
Text1037.setFontStyle(&FontStyle1038);

Shape1036.setGeometry(&Text1037);

Billboard1035.addChild(&Shape1036);

HAnimSite1032.addChild(Billboard1035);

HAnimSegment1010.addChild(&HAnimSite1032);

HAnimSite& HAnimSite1039 =  HAnimSite();
HAnimSite1039.X3DNode::setName(CString("l_radiale"));
HAnimSite1039.setDEF(CString("hanim_l_radiale"));
HAnimSite1039.setTranslation(new float[]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor1040 =  TouchSensor();
TouchSensor1040.setDescription(CString("HAnimSite 69 l_radiale"));
HAnimSite1039.addChild(&TouchSensor1040);

Shape& Shape1041 =  Shape();
Shape1041.setUSE(CString("HAnimSiteShape"));
HAnimSite1039.addChild(&Shape1041);

Billboard& Billboard1042 =  Billboard();
Shape& Shape1043 =  Shape();
Text& Text1044 =  Text();
Text1044.setString(new CString[]{CString("69")}, 1);
CFontStyle& FontStyle1045 =  CFontStyle();
FontStyle1045.setSize(0.035);
Text1044.setFontStyle(&FontStyle1045);

Shape1043.setGeometry(&Text1044);

Billboard1042.addChild(&Shape1043);

HAnimSite1039.addChild(Billboard1042);

HAnimSegment1010.addChild(&HAnimSite1039);

HAnimJoint1009.addChildren(&HAnimSegment1010);

HAnimJoint& HAnimJoint1046 =  HAnimJoint();
HAnimJoint1046.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint1046.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint1046.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimJoint1046.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1046.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1047 =  HAnimSegment();
HAnimSegment1047.X3DNode::setName(CString("l_carpal"));
HAnimSegment1047.setDEF(CString("hanim_l_carpal"));
Transform& Transform1048 =  Transform();
Transform1048.setScale(new float[]{0.2,0.2,0.2});
Transform1048.setTranslation(new float[]{0.2,0.85,-0.05});
Transform1048.setRotation(new float[]{0,0,1,-3.14});
//Transform left hand
Transform& Transform1049 =  Transform();
Transform1049.setRotation(new float[]{0,1,0,-1.57});
//Transform left hand
Shape& Shape1050 =  Shape();
Shape1050.setUSE(CString("HAnimJointShape"));
Transform1049.addChild(&Shape1050);

Transform1048.addChild(&Transform1049);

HAnimSegment1047.addChild(&Transform1048);

Shape& Shape1051 =  Shape();
LineSet& LineSet1052 =  LineSet();
LineSet1052.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1053 =  Coordinate();
Coordinate1053.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534}, 6);
LineSet1052.setCoord(Coordinate1053);

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1054 =  ColorRGBA();
ColorRGBA1054.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1052.addChild(&ColorRGBA1054);

Shape1051.setGeometry(&LineSet1052);

HAnimSegment1047.addChild(&Shape1051);

HAnimSite& HAnimSite1055 =  HAnimSite();
HAnimSite1055.X3DNode::setName(CString("l_ulnar_styloid"));
HAnimSite1055.setDEF(CString("hanim_l_ulnar_styloid"));
HAnimSite1055.setTranslation(new float[]{-0.2142,0.8529,-0.0648});
TouchSensor& TouchSensor1056 =  TouchSensor();
TouchSensor1056.setDescription(CString("HAnimSite 70 l_ulnar_styloid"));
HAnimSite1055.addChild(&TouchSensor1056);

Shape& Shape1057 =  Shape();
Shape1057.setUSE(CString("HAnimSiteShape"));
HAnimSite1055.addChild(&Shape1057);

Billboard& Billboard1058 =  Billboard();
Shape& Shape1059 =  Shape();
Text& Text1060 =  Text();
Text1060.setString(new CString[]{CString("70")}, 1);
CFontStyle& FontStyle1061 =  CFontStyle();
FontStyle1061.setSize(0.035);
Text1060.setFontStyle(&FontStyle1061);

Shape1059.setGeometry(&Text1060);

Billboard1058.addChild(&Shape1059);

HAnimSite1055.addChild(Billboard1058);

HAnimSegment1047.addChild(&HAnimSite1055);

Shape& Shape1062 =  Shape();
LineSet& LineSet1063 =  LineSet();
LineSet1063.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1064 =  Coordinate();
Coordinate1064.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028}, 6);
LineSet1063.setCoord(Coordinate1064);

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1065 =  ColorRGBA();
ColorRGBA1065.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1063.addChild(&ColorRGBA1065);

Shape1062.setGeometry(&LineSet1063);

HAnimSegment1047.addChild(&Shape1062);

Shape& Shape1066 =  Shape();
LineSet& LineSet1067 =  LineSet();
LineSet1067.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1068 =  Coordinate();
Coordinate1068.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053}, 6);
LineSet1067.setCoord(Coordinate1068);

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1069 =  ColorRGBA();
ColorRGBA1069.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1067.addChild(&ColorRGBA1069);

Shape1066.setGeometry(&LineSet1067);

HAnimSegment1047.addChild(&Shape1066);

Shape& Shape1070 =  Shape();
LineSet& LineSet1071 =  LineSet();
LineSet1071.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1072 =  Coordinate();
Coordinate1072.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794}, 6);
LineSet1071.setCoord(Coordinate1072);

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1073 =  ColorRGBA();
ColorRGBA1073.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1071.addChild(&ColorRGBA1073);

Shape1070.setGeometry(&LineSet1071);

HAnimSegment1047.addChild(&Shape1070);

Shape& Shape1074 =  Shape();
LineSet& LineSet1075 =  LineSet();
LineSet1075.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1076 =  Coordinate();
Coordinate1076.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036}, 6);
LineSet1075.setCoord(Coordinate1076);

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1077 =  ColorRGBA();
ColorRGBA1077.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1075.addChild(&ColorRGBA1077);

Shape1074.setGeometry(&LineSet1075);

HAnimSegment1047.addChild(&Shape1074);

HAnimJoint1046.addChildren(&HAnimSegment1047);

HAnimJoint& HAnimJoint1078 =  HAnimJoint();
HAnimJoint1078.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint1078.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint1078.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimJoint1078.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1078.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1079 =  HAnimSegment();
HAnimSegment1079.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment1079.setDEF(CString("hanim_l_metacarpal_1"));
Transform& Transform1080 =  Transform();
Transform1080.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Transform& Transform1081 =  Transform();
//Empty Transform
Shape& Shape1082 =  Shape();
Shape1082.setUSE(CString("HAnimJointShape"));
Transform1081.addChild(&Shape1082);

Transform1080.addChild(&Transform1081);

HAnimSegment1079.addChild(&Transform1080);

Shape& Shape1083 =  Shape();
LineSet& LineSet1084 =  LineSet();
LineSet1084.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1085 =  Coordinate();
Coordinate1085.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet1084.setCoord(Coordinate1085);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1086 =  ColorRGBA();
ColorRGBA1086.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1084.addChild(&ColorRGBA1086);

Shape1083.setGeometry(&LineSet1084);

HAnimSegment1079.addChild(&Shape1083);

HAnimJoint1078.addChildren(&HAnimSegment1079);

HAnimJoint& HAnimJoint1087 =  HAnimJoint();
HAnimJoint1087.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint1087.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint1087.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimJoint1087.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1087.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1088 =  HAnimSegment();
HAnimSegment1088.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment1088.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform& Transform1089 =  Transform();
Transform1089.setTranslation(new float[]{0.1951,0.8226,0.0246});
Transform& Transform1090 =  Transform();
//Empty Transform
Shape& Shape1091 =  Shape();
Shape1091.setUSE(CString("HAnimJointShape"));
Transform1090.addChild(&Shape1091);

Transform1089.addChild(&Transform1090);

HAnimSegment1088.addChild(&Transform1089);

Shape& Shape1092 =  Shape();
LineSet& LineSet1093 =  LineSet();
LineSet1093.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1094 =  Coordinate();
Coordinate1094.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet1093.setCoord(Coordinate1094);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1095 =  ColorRGBA();
ColorRGBA1095.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1093.addChild(&ColorRGBA1095);

Shape1092.setGeometry(&LineSet1093);

HAnimSegment1088.addChild(&Shape1092);

HAnimJoint1087.addChildren(&HAnimSegment1088);

HAnimJoint& HAnimJoint1096 =  HAnimJoint();
HAnimJoint1096.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint1096.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint1096.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint1096.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1096.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1087.addChildren(&HAnimJoint1096);

HAnimJoint1078.addChildren(&HAnimJoint1087);

HAnimJoint1046.addChildren(&HAnimJoint1078);

HAnimJoint& HAnimJoint1097 =  HAnimJoint();
HAnimJoint1097.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint1097.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint1097.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimJoint1097.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1097.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1098 =  HAnimSegment();
HAnimSegment1098.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment1098.setDEF(CString("hanim_l_metacarpal_2"));
Transform& Transform1099 =  Transform();
Transform1099.setTranslation(new float[]{0.1983,0.8024,-0.028});
Transform& Transform1100 =  Transform();
//Empty Transform
Shape& Shape1101 =  Shape();
Shape1101.setUSE(CString("HAnimJointShape"));
Transform1100.addChild(&Shape1101);

Transform1099.addChild(&Transform1100);

HAnimSegment1098.addChild(&Transform1099);

Shape& Shape1102 =  Shape();
LineSet& LineSet1103 =  LineSet();
LineSet1103.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1104 =  Coordinate();
Coordinate1104.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet1103.setCoord(Coordinate1104);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1105 =  ColorRGBA();
ColorRGBA1105.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1103.addChild(&ColorRGBA1105);

Shape1102.setGeometry(&LineSet1103);

HAnimSegment1098.addChild(&Shape1102);

HAnimSite& HAnimSite1106 =  HAnimSite();
HAnimSite1106.X3DNode::setName(CString("l_metacarpal_phalanx_2"));
HAnimSite1106.setDEF(CString("hanim_l_metacarpal_phalanx_2"));
HAnimSite1106.setTranslation(new float[]{0.2009,0.8139,-0.0237});
TouchSensor& TouchSensor1107 =  TouchSensor();
TouchSensor1107.setDescription(CString("HAnimSite 75 l_metacarpal_phalanx_2"));
HAnimSite1106.addChild(&TouchSensor1107);

Shape& Shape1108 =  Shape();
Shape1108.setUSE(CString("HAnimSiteShape"));
HAnimSite1106.addChild(&Shape1108);

Billboard& Billboard1109 =  Billboard();
Shape& Shape1110 =  Shape();
Text& Text1111 =  Text();
Text1111.setString(new CString[]{CString("75")}, 1);
CFontStyle& FontStyle1112 =  CFontStyle();
FontStyle1112.setSize(0.035);
Text1111.setFontStyle(&FontStyle1112);

Shape1110.setGeometry(&Text1111);

Billboard1109.addChild(&Shape1110);

HAnimSite1106.addChild(Billboard1109);

HAnimSegment1098.addChild(&HAnimSite1106);

HAnimJoint1097.addChildren(&HAnimSegment1098);

HAnimJoint& HAnimJoint1113 =  HAnimJoint();
HAnimJoint1113.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint1113.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint1113.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimJoint1113.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1113.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1114 =  HAnimSegment();
HAnimSegment1114.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment1114.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform& Transform1115 =  Transform();
Transform1115.setTranslation(new float[]{0.1983,0.7815,-0.028});
Transform& Transform1116 =  Transform();
//Empty Transform
Shape& Shape1117 =  Shape();
Shape1117.setUSE(CString("HAnimJointShape"));
Transform1116.addChild(&Shape1117);

Transform1115.addChild(&Transform1116);

HAnimSegment1114.addChild(&Transform1115);

Shape& Shape1118 =  Shape();
LineSet& LineSet1119 =  LineSet();
LineSet1119.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1120 =  Coordinate();
Coordinate1120.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet1119.setCoord(Coordinate1120);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1121 =  ColorRGBA();
ColorRGBA1121.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1119.addChild(&ColorRGBA1121);

Shape1118.setGeometry(&LineSet1119);

HAnimSegment1114.addChild(&Shape1118);

HAnimJoint1113.addChildren(&HAnimSegment1114);

HAnimJoint& HAnimJoint1122 =  HAnimJoint();
HAnimJoint1122.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint1122.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint1122.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimJoint1122.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1122.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1123 =  HAnimSegment();
HAnimSegment1123.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment1123.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform& Transform1124 =  Transform();
Transform1124.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Transform& Transform1125 =  Transform();
//Empty Transform
Shape& Shape1126 =  Shape();
Shape1126.setUSE(CString("HAnimJointShape"));
Transform1125.addChild(&Shape1126);

Transform1124.addChild(&Transform1125);

HAnimSegment1123.addChild(&Transform1124);

Shape& Shape1127 =  Shape();
LineSet& LineSet1128 =  LineSet();
LineSet1128.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1129 =  Coordinate();
Coordinate1129.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet1128.setCoord(Coordinate1129);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1130 =  ColorRGBA();
ColorRGBA1130.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1128.addChild(&ColorRGBA1130);

Shape1127.setGeometry(&LineSet1128);

HAnimSegment1123.addChild(&Shape1127);

HAnimJoint1122.addChildren(&HAnimSegment1123);

HAnimJoint& HAnimJoint1131 =  HAnimJoint();
HAnimJoint1131.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint1131.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint1131.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint1131.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1131.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1122.addChildren(&HAnimJoint1131);

HAnimJoint1113.addChildren(&HAnimJoint1122);

HAnimJoint1097.addChildren(&HAnimJoint1113);

HAnimJoint1046.addChildren(&HAnimJoint1097);

HAnimJoint& HAnimJoint1132 =  HAnimJoint();
HAnimJoint1132.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint1132.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint1132.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimJoint1132.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1132.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1133 =  HAnimSegment();
HAnimSegment1133.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment1133.setDEF(CString("hanim_l_metacarpal_3"));
Transform& Transform1134 =  Transform();
Transform1134.setTranslation(new float[]{0.1987,0.8029,-0.053});
Transform& Transform1135 =  Transform();
//Empty Transform
Shape& Shape1136 =  Shape();
Shape1136.setUSE(CString("HAnimJointShape"));
Transform1135.addChild(&Shape1136);

Transform1134.addChild(&Transform1135);

HAnimSegment1133.addChild(&Transform1134);

Shape& Shape1137 =  Shape();
LineSet& LineSet1138 =  LineSet();
LineSet1138.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1139 =  Coordinate();
Coordinate1139.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet1138.setCoord(Coordinate1139);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1140 =  ColorRGBA();
ColorRGBA1140.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1138.addChild(&ColorRGBA1140);

Shape1137.setGeometry(&LineSet1138);

HAnimSegment1133.addChild(&Shape1137);

HAnimSite& HAnimSite1141 =  HAnimSite();
HAnimSite1141.X3DNode::setName(CString("l_metacarpal_phalanx_3"));
HAnimSite1141.setDEF(CString("hanim_l_metacarpal_phalanx_3"));
TouchSensor& TouchSensor1142 =  TouchSensor();
TouchSensor1142.setDescription(CString("HAnimSite 76 l_metacarpal_phalanx_3"));
HAnimSite1141.addChild(&TouchSensor1142);

Shape& Shape1143 =  Shape();
Shape1143.setUSE(CString("HAnimSiteShape"));
HAnimSite1141.addChild(&Shape1143);

Billboard& Billboard1144 =  Billboard();
Shape& Shape1145 =  Shape();
Text& Text1146 =  Text();
Text1146.setString(new CString[]{CString("76")}, 1);
CFontStyle& FontStyle1147 =  CFontStyle();
FontStyle1147.setSize(0.035);
Text1146.setFontStyle(&FontStyle1147);

Shape1145.setGeometry(&Text1146);

Billboard1144.addChild(&Shape1145);

HAnimSite1141.addChild(Billboard1144);

HAnimSegment1133.addChild(&HAnimSite1141);

HAnimJoint1132.addChildren(&HAnimSegment1133);

HAnimJoint& HAnimJoint1148 =  HAnimJoint();
HAnimJoint1148.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint1148.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint1148.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimJoint1148.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1148.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1149 =  HAnimSegment();
HAnimSegment1149.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment1149.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform& Transform1150 =  Transform();
Transform1150.setTranslation(new float[]{0.1987,0.7818,-0.053});
Transform& Transform1151 =  Transform();
//Empty Transform
Shape& Shape1152 =  Shape();
Shape1152.setUSE(CString("HAnimJointShape"));
Transform1151.addChild(&Shape1152);

Transform1150.addChild(&Transform1151);

HAnimSegment1149.addChild(&Transform1150);

Shape& Shape1153 =  Shape();
LineSet& LineSet1154 =  LineSet();
LineSet1154.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1155 =  Coordinate();
Coordinate1155.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet1154.setCoord(Coordinate1155);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1156 =  ColorRGBA();
ColorRGBA1156.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1154.addChild(&ColorRGBA1156);

Shape1153.setGeometry(&LineSet1154);

HAnimSegment1149.addChild(&Shape1153);

HAnimJoint1148.addChildren(&HAnimSegment1149);

HAnimJoint& HAnimJoint1157 =  HAnimJoint();
HAnimJoint1157.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint1157.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint1157.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimJoint1157.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1157.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1158 =  HAnimSegment();
HAnimSegment1158.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment1158.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform& Transform1159 =  Transform();
Transform1159.setTranslation(new float[]{0.2013,0.7273,-0.0503});
Transform& Transform1160 =  Transform();
//Empty Transform
Shape& Shape1161 =  Shape();
Shape1161.setUSE(CString("HAnimJointShape"));
Transform1160.addChild(&Shape1161);

Transform1159.addChild(&Transform1160);

HAnimSegment1158.addChild(&Transform1159);

Shape& Shape1162 =  Shape();
LineSet& LineSet1163 =  LineSet();
LineSet1163.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1164 =  Coordinate();
Coordinate1164.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet1163.setCoord(Coordinate1164);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1165 =  ColorRGBA();
ColorRGBA1165.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1163.addChild(&ColorRGBA1165);

Shape1162.setGeometry(&LineSet1163);

HAnimSegment1158.addChild(&Shape1162);

HAnimJoint1157.addChildren(&HAnimSegment1158);

HAnimJoint& HAnimJoint1166 =  HAnimJoint();
HAnimJoint1166.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint1166.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint1166.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint1166.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1166.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1157.addChildren(&HAnimJoint1166);

HAnimJoint1148.addChildren(&HAnimJoint1157);

HAnimJoint1132.addChildren(&HAnimJoint1148);

HAnimJoint1046.addChildren(&HAnimJoint1132);

HAnimJoint& HAnimJoint1167 =  HAnimJoint();
HAnimJoint1167.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint1167.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint1167.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimJoint1167.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1167.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1168 =  HAnimSegment();
HAnimSegment1168.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment1168.setDEF(CString("hanim_l_metacarpal_4"));
Transform& Transform1169 =  Transform();
Transform1169.setTranslation(new float[]{0.1956,0.8019,-0.0794});
Transform& Transform1170 =  Transform();
//Empty Transform
Shape& Shape1171 =  Shape();
Shape1171.setUSE(CString("HAnimJointShape"));
Transform1170.addChild(&Shape1171);

Transform1169.addChild(&Transform1170);

HAnimSegment1168.addChild(&Transform1169);

Shape& Shape1172 =  Shape();
LineSet& LineSet1173 =  LineSet();
LineSet1173.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1174 =  Coordinate();
Coordinate1174.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet1173.setCoord(Coordinate1174);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1175 =  ColorRGBA();
ColorRGBA1175.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1173.addChild(&ColorRGBA1175);

Shape1172.setGeometry(&LineSet1173);

HAnimSegment1168.addChild(&Shape1172);

HAnimJoint1167.addChildren(&HAnimSegment1168);

HAnimJoint& HAnimJoint1176 =  HAnimJoint();
HAnimJoint1176.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint1176.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint1176.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimJoint1176.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1176.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1177 =  HAnimSegment();
HAnimSegment1177.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment1177.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform& Transform1178 =  Transform();
Transform1178.setTranslation(new float[]{0.1956,0.7815,-0.0794});
Transform& Transform1179 =  Transform();
//Empty Transform
Shape& Shape1180 =  Shape();
Shape1180.setUSE(CString("HAnimJointShape"));
Transform1179.addChild(&Shape1180);

Transform1178.addChild(&Transform1179);

HAnimSegment1177.addChild(&Transform1178);

Shape& Shape1181 =  Shape();
LineSet& LineSet1182 =  LineSet();
LineSet1182.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1183 =  Coordinate();
Coordinate1183.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet1182.setCoord(Coordinate1183);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1184 =  ColorRGBA();
ColorRGBA1184.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1182.addChild(&ColorRGBA1184);

Shape1181.setGeometry(&LineSet1182);

HAnimSegment1177.addChild(&Shape1181);

HAnimJoint1176.addChildren(&HAnimSegment1177);

HAnimJoint& HAnimJoint1185 =  HAnimJoint();
HAnimJoint1185.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint1185.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint1185.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimJoint1185.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1185.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1186 =  HAnimSegment();
HAnimSegment1186.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment1186.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform& Transform1187 =  Transform();
Transform1187.setTranslation(new float[]{0.1973,0.7287,-0.0777});
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
Coordinate1192.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet1191.setCoord(Coordinate1192);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1193 =  ColorRGBA();
ColorRGBA1193.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1191.addChild(&ColorRGBA1193);

Shape1190.setGeometry(&LineSet1191);

HAnimSegment1186.addChild(&Shape1190);

HAnimJoint1185.addChildren(&HAnimSegment1186);

HAnimJoint& HAnimJoint1194 =  HAnimJoint();
HAnimJoint1194.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint1194.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint1194.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint1194.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1194.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1185.addChildren(&HAnimJoint1194);

HAnimJoint1176.addChildren(&HAnimJoint1185);

HAnimJoint1167.addChildren(&HAnimJoint1176);

HAnimJoint1046.addChildren(&HAnimJoint1167);

HAnimJoint& HAnimJoint1195 =  HAnimJoint();
HAnimJoint1195.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint1195.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint1195.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimJoint1195.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1195.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1196 =  HAnimSegment();
HAnimSegment1196.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment1196.setDEF(CString("hanim_l_metacarpal_5"));
Transform& Transform1197 =  Transform();
Transform1197.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Transform& Transform1198 =  Transform();
//Empty Transform
Shape& Shape1199 =  Shape();
Shape1199.setUSE(CString("HAnimJointShape"));
Transform1198.addChild(&Shape1199);

Transform1197.addChild(&Transform1198);

HAnimSegment1196.addChild(&Transform1197);

Shape& Shape1200 =  Shape();
LineSet& LineSet1201 =  LineSet();
LineSet1201.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1202 =  Coordinate();
Coordinate1202.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet1201.setCoord(Coordinate1202);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1203 =  ColorRGBA();
ColorRGBA1203.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1201.addChild(&ColorRGBA1203);

Shape1200.setGeometry(&LineSet1201);

HAnimSegment1196.addChild(&Shape1200);

HAnimSite& HAnimSite1204 =  HAnimSite();
HAnimSite1204.X3DNode::setName(CString("l_metacarpal_phalanx_5"));
HAnimSite1204.setDEF(CString("hanim_l_metacarpal_phalanx_5"));
HAnimSite1204.setTranslation(new float[]{0.1929,0.786,-0.1122});
TouchSensor& TouchSensor1205 =  TouchSensor();
TouchSensor1205.setDescription(CString("HAnimSite 77 l_metacarpal_phalanx_5"));
HAnimSite1204.addChild(&TouchSensor1205);

Shape& Shape1206 =  Shape();
Shape1206.setUSE(CString("HAnimSiteShape"));
HAnimSite1204.addChild(&Shape1206);

Billboard& Billboard1207 =  Billboard();
Shape& Shape1208 =  Shape();
Text& Text1209 =  Text();
Text1209.setString(new CString[]{CString("77")}, 1);
CFontStyle& FontStyle1210 =  CFontStyle();
FontStyle1210.setSize(0.035);
Text1209.setFontStyle(&FontStyle1210);

Shape1208.setGeometry(&Text1209);

Billboard1207.addChild(&Shape1208);

HAnimSite1204.addChild(Billboard1207);

HAnimSegment1196.addChild(&HAnimSite1204);

HAnimJoint1195.addChildren(&HAnimSegment1196);

HAnimJoint& HAnimJoint1211 =  HAnimJoint();
HAnimJoint1211.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint1211.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint1211.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimJoint1211.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1211.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1212 =  HAnimSegment();
HAnimSegment1212.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment1212.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform& Transform1213 =  Transform();
Transform1213.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Transform& Transform1214 =  Transform();
//Empty Transform
Shape& Shape1215 =  Shape();
Shape1215.setUSE(CString("HAnimJointShape"));
Transform1214.addChild(&Shape1215);

Transform1213.addChild(&Transform1214);

HAnimSegment1212.addChild(&Transform1213);

Shape& Shape1216 =  Shape();
LineSet& LineSet1217 =  LineSet();
LineSet1217.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1218 =  Coordinate();
Coordinate1218.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet1217.setCoord(Coordinate1218);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1219 =  ColorRGBA();
ColorRGBA1219.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1217.addChild(&ColorRGBA1219);

Shape1216.setGeometry(&LineSet1217);

HAnimSegment1212.addChild(&Shape1216);

HAnimJoint1211.addChildren(&HAnimSegment1212);

HAnimJoint& HAnimJoint1220 =  HAnimJoint();
HAnimJoint1220.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint1220.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint1220.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimJoint1220.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1220.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1221 =  HAnimSegment();
HAnimSegment1221.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment1221.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform& Transform1222 =  Transform();
Transform1222.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Transform& Transform1223 =  Transform();
//Empty Transform
Shape& Shape1224 =  Shape();
Shape1224.setUSE(CString("HAnimJointShape"));
Transform1223.addChild(&Shape1224);

Transform1222.addChild(&Transform1223);

HAnimSegment1221.addChild(&Transform1222);

Shape& Shape1225 =  Shape();
LineSet& LineSet1226 =  LineSet();
LineSet1226.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1227 =  Coordinate();
Coordinate1227.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet1226.setCoord(Coordinate1227);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1228 =  ColorRGBA();
ColorRGBA1228.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1226.addChild(&ColorRGBA1228);

Shape1225.setGeometry(&LineSet1226);

HAnimSegment1221.addChild(&Shape1225);

HAnimJoint1220.addChildren(&HAnimSegment1221);

HAnimJoint& HAnimJoint1229 =  HAnimJoint();
HAnimJoint1229.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint1229.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint1229.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint1229.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1229.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1220.addChildren(&HAnimJoint1229);

HAnimJoint1211.addChildren(&HAnimJoint1220);

HAnimJoint1195.addChildren(&HAnimJoint1211);

HAnimJoint1046.addChildren(&HAnimJoint1195);

HAnimJoint1009.addChildren(&HAnimJoint1046);

HAnimJoint986.addChildren(&HAnimJoint1009);

HAnimJoint977.addChildren(&HAnimJoint986);

HAnimJoint933.addChildren(&HAnimJoint977);

HAnimJoint701.addChildren(&HAnimJoint933);

HAnimJoint& HAnimJoint1230 =  HAnimJoint();
HAnimJoint1230.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint1230.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1230.setCenter(new float[]{-0.0694,1.46,-0.033});
HAnimJoint1230.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1230.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1231 =  HAnimSegment();
HAnimSegment1231.X3DNode::setName(CString("r_clavicle"));
HAnimSegment1231.setDEF(CString("hanim_r_clavicle"));
Transform& Transform1232 =  Transform();
Transform1232.setTranslation(new float[]{-0.0694,1.46,-0.033});
Transform& Transform1233 =  Transform();
//Empty Transform
Shape& Shape1234 =  Shape();
Shape1234.setUSE(CString("HAnimJointShape"));
Transform1233.addChild(&Shape1234);

Transform1232.addChild(&Transform1233);

HAnimSegment1231.addChild(&Transform1232);

Shape& Shape1235 =  Shape();
LineSet& LineSet1236 =  LineSet();
LineSet1236.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1237 =  Coordinate();
Coordinate1237.setPoint(new float[]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
LineSet1236.setCoord(Coordinate1237);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA& ColorRGBA1238 =  ColorRGBA();
ColorRGBA1238.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1236.addChild(&ColorRGBA1238);

Shape1235.setGeometry(&LineSet1236);

HAnimSegment1231.addChild(&Shape1235);

HAnimSite& HAnimSite1239 =  HAnimSite();
HAnimSite1239.X3DNode::setName(CString("r_acromion"));
HAnimSite1239.setDEF(CString("hanim_r_acromion"));
HAnimSite1239.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor1240 =  TouchSensor();
TouchSensor1240.setDescription(CString("HAnimSite 20 r_acromion"));
HAnimSite1239.addChild(&TouchSensor1240);

Shape& Shape1241 =  Shape();
Shape1241.setUSE(CString("HAnimSiteShape"));
HAnimSite1239.addChild(&Shape1241);

Billboard& Billboard1242 =  Billboard();
Shape& Shape1243 =  Shape();
Text& Text1244 =  Text();
Text1244.setString(new CString[]{CString("20")}, 1);
CFontStyle& FontStyle1245 =  CFontStyle();
FontStyle1245.setSize(0.035);
Text1244.setFontStyle(&FontStyle1245);

Shape1243.setGeometry(&Text1244);

Billboard1242.addChild(&Shape1243);

HAnimSite1239.addChild(Billboard1242);

HAnimSegment1231.addChild(&HAnimSite1239);

HAnimSite& HAnimSite1246 =  HAnimSite();
HAnimSite1246.X3DNode::setName(CString("r_axilla_distal"));
HAnimSite1246.setDEF(CString("hanim_r_axilla_distal"));
HAnimSite1246.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor1247 =  TouchSensor();
TouchSensor1247.setDescription(CString("HAnimSite 22 r_axilla_distal"));
HAnimSite1246.addChild(&TouchSensor1247);

Shape& Shape1248 =  Shape();
Shape1248.setUSE(CString("HAnimSiteShape"));
HAnimSite1246.addChild(&Shape1248);

Billboard& Billboard1249 =  Billboard();
Shape& Shape1250 =  Shape();
Text& Text1251 =  Text();
Text1251.setString(new CString[]{CString("22")}, 1);
CFontStyle& FontStyle1252 =  CFontStyle();
FontStyle1252.setSize(0.035);
Text1251.setFontStyle(&FontStyle1252);

Shape1250.setGeometry(&Text1251);

Billboard1249.addChild(&Shape1250);

HAnimSite1246.addChild(Billboard1249);

HAnimSegment1231.addChild(&HAnimSite1246);

HAnimSite& HAnimSite1253 =  HAnimSite();
HAnimSite1253.X3DNode::setName(CString("r_axilla_posterior_folds"));
HAnimSite1253.setDEF(CString("hanim_r_axilla_posterior_folds"));
TouchSensor& TouchSensor1254 =  TouchSensor();
TouchSensor1254.setDescription(CString("HAnimSite 23 r_axilla_posterior_folds"));
HAnimSite1253.addChild(&TouchSensor1254);

Shape& Shape1255 =  Shape();
Shape1255.setUSE(CString("HAnimSiteShape"));
HAnimSite1253.addChild(&Shape1255);

Billboard& Billboard1256 =  Billboard();
Shape& Shape1257 =  Shape();
Text& Text1258 =  Text();
Text1258.setString(new CString[]{CString("23")}, 1);
CFontStyle& FontStyle1259 =  CFontStyle();
FontStyle1259.setSize(0.035);
Text1258.setFontStyle(&FontStyle1259);

Shape1257.setGeometry(&Text1258);

Billboard1256.addChild(&Shape1257);

HAnimSite1253.addChild(Billboard1256);

HAnimSegment1231.addChild(&HAnimSite1253);

HAnimSite& HAnimSite1260 =  HAnimSite();
HAnimSite1260.X3DNode::setName(CString("r_axilla_proximal"));
HAnimSite1260.setDEF(CString("hanim_r_axilla_proximal"));
HAnimSite1260.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor1261 =  TouchSensor();
TouchSensor1261.setDescription(CString("HAnimSite 21 r_axilla_proximal"));
HAnimSite1260.addChild(&TouchSensor1261);

Shape& Shape1262 =  Shape();
Shape1262.setUSE(CString("HAnimSiteShape"));
HAnimSite1260.addChild(&Shape1262);

Billboard& Billboard1263 =  Billboard();
Shape& Shape1264 =  Shape();
Text& Text1265 =  Text();
Text1265.setString(new CString[]{CString("21")}, 1);
CFontStyle& FontStyle1266 =  CFontStyle();
FontStyle1266.setSize(0.035);
Text1265.setFontStyle(&FontStyle1266);

Shape1264.setGeometry(&Text1265);

Billboard1263.addChild(&Shape1264);

HAnimSite1260.addChild(Billboard1263);

HAnimSegment1231.addChild(&HAnimSite1260);

HAnimSite& HAnimSite1267 =  HAnimSite();
HAnimSite1267.X3DNode::setName(CString("r_clavicale"));
HAnimSite1267.setDEF(CString("hanim_r_clavicale"));
HAnimSite1267.setTranslation(new float[]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor1268 =  TouchSensor();
TouchSensor1268.setDescription(CString("HAnimSite 19 r_clavicale"));
HAnimSite1267.addChild(&TouchSensor1268);

Shape& Shape1269 =  Shape();
Shape1269.setUSE(CString("HAnimSiteShape"));
HAnimSite1267.addChild(&Shape1269);

Billboard& Billboard1270 =  Billboard();
Shape& Shape1271 =  Shape();
Text& Text1272 =  Text();
Text1272.setString(new CString[]{CString("19")}, 1);
CFontStyle& FontStyle1273 =  CFontStyle();
FontStyle1273.setSize(0.035);
Text1272.setFontStyle(&FontStyle1273);

Shape1271.setGeometry(&Text1272);

Billboard1270.addChild(&Shape1271);

HAnimSite1267.addChild(Billboard1270);

HAnimSegment1231.addChild(&HAnimSite1267);

HAnimJoint1230.addChildren(&HAnimSegment1231);

HAnimJoint& HAnimJoint1274 =  HAnimJoint();
HAnimJoint1274.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint1274.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1274.setCenter(new float[]{-0.0836,1.4281,-0.0401});
HAnimJoint1274.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1274.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1275 =  HAnimSegment();
HAnimSegment1275.X3DNode::setName(CString("r_scapula"));
HAnimSegment1275.setDEF(CString("hanim_r_scapula"));
Transform& Transform1276 =  Transform();
Transform1276.setTranslation(new float[]{-0.0836,1.4281,-0.0401});
Transform& Transform1277 =  Transform();
//Empty Transform
Shape& Shape1278 =  Shape();
Shape1278.setUSE(CString("HAnimJointShape"));
Transform1277.addChild(&Shape1278);

Transform1276.addChild(&Transform1277);

HAnimSegment1275.addChild(&Transform1276);

Shape& Shape1279 =  Shape();
LineSet& LineSet1280 =  LineSet();
LineSet1280.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1281 =  Coordinate();
Coordinate1281.setPoint(new float[]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
LineSet1280.setCoord(Coordinate1281);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA& ColorRGBA1282 =  ColorRGBA();
ColorRGBA1282.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1280.addChild(&ColorRGBA1282);

Shape1279.setGeometry(&LineSet1280);

HAnimSegment1275.addChild(&Shape1279);

HAnimJoint1274.addChildren(&HAnimSegment1275);

HAnimJoint& HAnimJoint1283 =  HAnimJoint();
HAnimJoint1283.X3DNode::setName(CString("r_shoulder"));
HAnimJoint1283.setDEF(CString("hanim_r_shoulder"));
HAnimJoint1283.setCenter(new float[]{-0.1907,1.4407,-0.0325});
HAnimJoint1283.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1283.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1284 =  HAnimSegment();
HAnimSegment1284.X3DNode::setName(CString("r_upperarm"));
HAnimSegment1284.setDEF(CString("hanim_r_upperarm"));
Transform& Transform1285 =  Transform();
Transform1285.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Transform& Transform1286 =  Transform();
//Empty Transform
Shape& Shape1287 =  Shape();
Shape1287.setUSE(CString("HAnimJointShape"));
Transform1286.addChild(&Shape1287);

Transform1285.addChild(&Transform1286);

HAnimSegment1284.addChild(&Transform1285);

Shape& Shape1288 =  Shape();
LineSet& LineSet1289 =  LineSet();
LineSet1289.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1290 =  Coordinate();
Coordinate1290.setPoint(new float[]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet1289.setCoord(Coordinate1290);

//from r_shoulder to r_elbow vertices 2
ColorRGBA& ColorRGBA1291 =  ColorRGBA();
ColorRGBA1291.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1289.addChild(&ColorRGBA1291);

Shape1288.setGeometry(&LineSet1289);

HAnimSegment1284.addChild(&Shape1288);

HAnimSite& HAnimSite1292 =  HAnimSite();
HAnimSite1292.X3DNode::setName(CString("r_bideltoid"));
HAnimSite1292.setDEF(CString("hanim_r_bideltoid"));
TouchSensor& TouchSensor1293 =  TouchSensor();
TouchSensor1293.setDescription(CString("HAnimSite 97 r_bideltoid"));
HAnimSite1292.addChild(&TouchSensor1293);

Shape& Shape1294 =  Shape();
Shape1294.setUSE(CString("HAnimSiteShape"));
HAnimSite1292.addChild(&Shape1294);

Billboard& Billboard1295 =  Billboard();
Shape& Shape1296 =  Shape();
Text& Text1297 =  Text();
Text1297.setString(new CString[]{CString("97")}, 1);
CFontStyle& FontStyle1298 =  CFontStyle();
FontStyle1298.setSize(0.035);
Text1297.setFontStyle(&FontStyle1298);

Shape1296.setGeometry(&Text1297);

Billboard1295.addChild(&Shape1296);

HAnimSite1292.addChild(Billboard1295);

HAnimSegment1284.addChild(&HAnimSite1292);

HAnimSite& HAnimSite1299 =  HAnimSite();
HAnimSite1299.X3DNode::setName(CString("r_humeral_lateral_epicondyles"));
HAnimSite1299.setDEF(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimSite1299.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor1300 =  TouchSensor();
TouchSensor1300.setDescription(CString("HAnimSite 66 r_humeral_lateral_epicondyles"));
HAnimSite1299.addChild(&TouchSensor1300);

Shape& Shape1301 =  Shape();
Shape1301.setUSE(CString("HAnimSiteShape"));
HAnimSite1299.addChild(&Shape1301);

Billboard& Billboard1302 =  Billboard();
Shape& Shape1303 =  Shape();
Text& Text1304 =  Text();
Text1304.setString(new CString[]{CString("66")}, 1);
CFontStyle& FontStyle1305 =  CFontStyle();
FontStyle1305.setSize(0.035);
Text1304.setFontStyle(&FontStyle1305);

Shape1303.setGeometry(&Text1304);

Billboard1302.addChild(&Shape1303);

HAnimSite1299.addChild(Billboard1302);

HAnimSegment1284.addChild(&HAnimSite1299);

HAnimJoint1283.addChildren(&HAnimSegment1284);

HAnimJoint& HAnimJoint1306 =  HAnimJoint();
HAnimJoint1306.X3DNode::setName(CString("r_elbow"));
HAnimJoint1306.setDEF(CString("hanim_r_elbow"));
HAnimJoint1306.setCenter(new float[]{-0.1949,1.1388,-0.062});
HAnimJoint1306.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1306.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1307 =  HAnimSegment();
HAnimSegment1307.X3DNode::setName(CString("r_forearm"));
HAnimSegment1307.setDEF(CString("hanim_r_forearm"));
Transform& Transform1308 =  Transform();
Transform1308.setTranslation(new float[]{-0.1949,1.1388,-0.062});
Transform& Transform1309 =  Transform();
//Empty Transform
Shape& Shape1310 =  Shape();
Shape1310.setUSE(CString("HAnimJointShape"));
Transform1309.addChild(&Shape1310);

Transform1308.addChild(&Transform1309);

HAnimSegment1307.addChild(&Transform1308);

Shape& Shape1311 =  Shape();
LineSet& LineSet1312 =  LineSet();
LineSet1312.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1313 =  Coordinate();
Coordinate1313.setPoint(new float[]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet1312.setCoord(Coordinate1313);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA& ColorRGBA1314 =  ColorRGBA();
ColorRGBA1314.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1312.addChild(&ColorRGBA1314);

Shape1311.setGeometry(&LineSet1312);

HAnimSegment1307.addChild(&Shape1311);

HAnimSite& HAnimSite1315 =  HAnimSite();
HAnimSite1315.X3DNode::setName(CString("r_humeral_medial_epicondyles"));
HAnimSite1315.setDEF(CString("hanim_r_humeral_medial_epicondyles"));
HAnimSite1315.setTranslation(new float[]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor1316 =  TouchSensor();
TouchSensor1316.setDescription(CString("HAnimSite 67 r_humeral_medial_epicondyles"));
HAnimSite1315.addChild(&TouchSensor1316);

Shape& Shape1317 =  Shape();
Shape1317.setUSE(CString("HAnimSiteShape"));
HAnimSite1315.addChild(&Shape1317);

Billboard& Billboard1318 =  Billboard();
Shape& Shape1319 =  Shape();
Text& Text1320 =  Text();
Text1320.setString(new CString[]{CString("67")}, 1);
CFontStyle& FontStyle1321 =  CFontStyle();
FontStyle1321.setSize(0.035);
Text1320.setFontStyle(&FontStyle1321);

Shape1319.setGeometry(&Text1320);

Billboard1318.addChild(&Shape1319);

HAnimSite1315.addChild(Billboard1318);

HAnimSegment1307.addChild(&HAnimSite1315);

HAnimSite& HAnimSite1322 =  HAnimSite();
HAnimSite1322.X3DNode::setName(CString("r_olecranon"));
HAnimSite1322.setDEF(CString("hanim_r_olecranon"));
HAnimSite1322.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor1323 =  TouchSensor();
TouchSensor1323.setDescription(CString("HAnimSite 68 r_olecranon"));
HAnimSite1322.addChild(&TouchSensor1323);

Shape& Shape1324 =  Shape();
Shape1324.setUSE(CString("HAnimSiteShape"));
HAnimSite1322.addChild(&Shape1324);

Billboard& Billboard1325 =  Billboard();
Shape& Shape1326 =  Shape();
Text& Text1327 =  Text();
Text1327.setString(new CString[]{CString("68")}, 1);
CFontStyle& FontStyle1328 =  CFontStyle();
FontStyle1328.setSize(0.035);
Text1327.setFontStyle(&FontStyle1328);

Shape1326.setGeometry(&Text1327);

Billboard1325.addChild(&Shape1326);

HAnimSite1322.addChild(Billboard1325);

HAnimSegment1307.addChild(&HAnimSite1322);

HAnimSite& HAnimSite1329 =  HAnimSite();
HAnimSite1329.X3DNode::setName(CString("r_radial_styloid"));
HAnimSite1329.setDEF(CString("hanim_r_radial_styloid"));
HAnimSite1329.setTranslation(new float[]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor1330 =  TouchSensor();
TouchSensor1330.setDescription(CString("HAnimSite 74 r_radial_styloid"));
HAnimSite1329.addChild(&TouchSensor1330);

Shape& Shape1331 =  Shape();
Shape1331.setUSE(CString("HAnimSiteShape"));
HAnimSite1329.addChild(&Shape1331);

Billboard& Billboard1332 =  Billboard();
Shape& Shape1333 =  Shape();
Text& Text1334 =  Text();
Text1334.setString(new CString[]{CString("74")}, 1);
CFontStyle& FontStyle1335 =  CFontStyle();
FontStyle1335.setSize(0.035);
Text1334.setFontStyle(&FontStyle1335);

Shape1333.setGeometry(&Text1334);

Billboard1332.addChild(&Shape1333);

HAnimSite1329.addChild(Billboard1332);

HAnimSegment1307.addChild(&HAnimSite1329);

HAnimSite& HAnimSite1336 =  HAnimSite();
HAnimSite1336.X3DNode::setName(CString("r_radiale"));
HAnimSite1336.setDEF(CString("hanim_r_radiale"));
HAnimSite1336.setTranslation(new float[]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor1337 =  TouchSensor();
TouchSensor1337.setDescription(CString("HAnimSite 72 r_radiale"));
HAnimSite1336.addChild(&TouchSensor1337);

Shape& Shape1338 =  Shape();
Shape1338.setUSE(CString("HAnimSiteShape"));
HAnimSite1336.addChild(&Shape1338);

Billboard& Billboard1339 =  Billboard();
Shape& Shape1340 =  Shape();
Text& Text1341 =  Text();
Text1341.setString(new CString[]{CString("72")}, 1);
CFontStyle& FontStyle1342 =  CFontStyle();
FontStyle1342.setSize(0.035);
Text1341.setFontStyle(&FontStyle1342);

Shape1340.setGeometry(&Text1341);

Billboard1339.addChild(&Shape1340);

HAnimSite1336.addChild(Billboard1339);

HAnimSegment1307.addChild(&HAnimSite1336);

HAnimJoint1306.addChildren(&HAnimSegment1307);

HAnimJoint& HAnimJoint1343 =  HAnimJoint();
HAnimJoint1343.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint1343.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint1343.setCenter(new float[]{-0.1959,0.8694,-0.0521});
HAnimJoint1343.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1343.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1344 =  HAnimSegment();
HAnimSegment1344.X3DNode::setName(CString("r_carpal"));
HAnimSegment1344.setDEF(CString("hanim_r_carpal"));
Transform& Transform1345 =  Transform();
Transform1345.setScale(new float[]{0.2,0.2,0.2});
Transform1345.setTranslation(new float[]{-0.2,0.85,-0.05});
Transform1345.setRotation(new float[]{0,0,1,-3.14});
//Transform right hand
Transform& Transform1346 =  Transform();
Transform1346.setRotation(new float[]{0,1,0,1.57});
//Transform right hand
Shape& Shape1347 =  Shape();
Shape1347.setUSE(CString("HAnimJointShape"));
Transform1346.addChild(&Shape1347);

Transform1345.addChild(&Transform1346);

HAnimSegment1344.addChild(&Transform1345);

Shape& Shape1348 =  Shape();
LineSet& LineSet1349 =  LineSet();
LineSet1349.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1350 =  Coordinate();
Coordinate1350.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473}, 6);
LineSet1349.setCoord(Coordinate1350);

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1351 =  ColorRGBA();
ColorRGBA1351.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1349.addChild(&ColorRGBA1351);

Shape1348.setGeometry(&LineSet1349);

HAnimSegment1344.addChild(&Shape1348);

HAnimSite& HAnimSite1352 =  HAnimSite();
HAnimSite1352.X3DNode::setName(CString("r_ulnar_styloid"));
HAnimSite1352.setDEF(CString("hanim_r_ulnar_styloid"));
HAnimSite1352.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
TouchSensor& TouchSensor1353 =  TouchSensor();
TouchSensor1353.setDescription(CString("HAnimSite 73 r_ulnar_styloid"));
HAnimSite1352.addChild(&TouchSensor1353);

Shape& Shape1354 =  Shape();
Shape1354.setUSE(CString("HAnimSiteShape"));
HAnimSite1352.addChild(&Shape1354);

Billboard& Billboard1355 =  Billboard();
Shape& Shape1356 =  Shape();
Text& Text1357 =  Text();
Text1357.setString(new CString[]{CString("73")}, 1);
CFontStyle& FontStyle1358 =  CFontStyle();
FontStyle1358.setSize(0.035);
Text1357.setFontStyle(&FontStyle1358);

Shape1356.setGeometry(&Text1357);

Billboard1355.addChild(&Shape1356);

HAnimSite1352.addChild(Billboard1355);

HAnimSegment1344.addChild(&HAnimSite1352);

Shape& Shape1359 =  Shape();
LineSet& LineSet1360 =  LineSet();
LineSet1360.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1361 =  Coordinate();
Coordinate1361.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218}, 6);
LineSet1360.setCoord(Coordinate1361);

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1362 =  ColorRGBA();
ColorRGBA1362.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1360.addChild(&ColorRGBA1362);

Shape1359.setGeometry(&LineSet1360);

HAnimSegment1344.addChild(&Shape1359);

Shape& Shape1363 =  Shape();
LineSet& LineSet1364 =  LineSet();
LineSet1364.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1365 =  Coordinate();
Coordinate1365.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468}, 6);
LineSet1364.setCoord(Coordinate1365);

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1366 =  ColorRGBA();
ColorRGBA1366.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1364.addChild(&ColorRGBA1366);

Shape1363.setGeometry(&LineSet1364);

HAnimSegment1344.addChild(&Shape1363);

Shape& Shape1367 =  Shape();
LineSet& LineSet1368 =  LineSet();
LineSet1368.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1369 =  Coordinate();
Coordinate1369.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732}, 6);
LineSet1368.setCoord(Coordinate1369);

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1370 =  ColorRGBA();
ColorRGBA1370.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1368.addChild(&ColorRGBA1370);

Shape1367.setGeometry(&LineSet1368);

HAnimSegment1344.addChild(&Shape1367);

Shape& Shape1371 =  Shape();
LineSet& LineSet1372 =  LineSet();
LineSet1372.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1373 =  Coordinate();
Coordinate1373.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975}, 6);
LineSet1372.setCoord(Coordinate1373);

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1374 =  ColorRGBA();
ColorRGBA1374.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1372.addChild(&ColorRGBA1374);

Shape1371.setGeometry(&LineSet1372);

HAnimSegment1344.addChild(&Shape1371);

HAnimJoint1343.addChildren(&HAnimSegment1344);

HAnimJoint& HAnimJoint1375 =  HAnimJoint();
HAnimJoint1375.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint1375.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint1375.setCenter(new float[]{-0.1899,0.8502,-0.0473});
HAnimJoint1375.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1375.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1376 =  HAnimSegment();
HAnimSegment1376.X3DNode::setName(CString("r_metacarpal_1"));
HAnimSegment1376.setDEF(CString("hanim_r_metacarpal_1"));
Transform& Transform1377 =  Transform();
Transform1377.setTranslation(new float[]{-0.1899,0.8502,-0.0473});
Transform& Transform1378 =  Transform();
//Empty Transform
Shape& Shape1379 =  Shape();
Shape1379.setUSE(CString("HAnimJointShape"));
Transform1378.addChild(&Shape1379);

Transform1377.addChild(&Transform1378);

HAnimSegment1376.addChild(&Transform1377);

Shape& Shape1380 =  Shape();
LineSet& LineSet1381 =  LineSet();
LineSet1381.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1382 =  Coordinate();
Coordinate1382.setPoint(new float[]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
LineSet1381.setCoord(Coordinate1382);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1383 =  ColorRGBA();
ColorRGBA1383.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1381.addChild(&ColorRGBA1383);

Shape1380.setGeometry(&LineSet1381);

HAnimSegment1376.addChild(&Shape1380);

HAnimJoint1375.addChildren(&HAnimSegment1376);

HAnimJoint& HAnimJoint1384 =  HAnimJoint();
HAnimJoint1384.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1384.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint1384.setCenter(new float[]{-0.1874,0.8256,0.0306});
HAnimJoint1384.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1384.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1385 =  HAnimSegment();
HAnimSegment1385.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1385.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform& Transform1386 =  Transform();
Transform1386.setTranslation(new float[]{-0.1874,0.8256,0.0306});
Transform& Transform1387 =  Transform();
//Empty Transform
Shape& Shape1388 =  Shape();
Shape1388.setUSE(CString("HAnimJointShape"));
Transform1387.addChild(&Shape1388);

Transform1386.addChild(&Transform1387);

HAnimSegment1385.addChild(&Transform1386);

Shape& Shape1389 =  Shape();
LineSet& LineSet1390 =  LineSet();
LineSet1390.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1391 =  Coordinate();
Coordinate1391.setPoint(new float[]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
LineSet1390.setCoord(Coordinate1391);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1392 =  ColorRGBA();
ColorRGBA1392.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1390.addChild(&ColorRGBA1392);

Shape1389.setGeometry(&LineSet1390);

HAnimSegment1385.addChild(&Shape1389);

HAnimJoint1384.addChildren(&HAnimSegment1385);

HAnimJoint& HAnimJoint1393 =  HAnimJoint();
HAnimJoint1393.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1393.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint1393.setCenter(new float[]{-0.1864,0.819,0.0506});
HAnimJoint1393.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1393.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1384.addChildren(&HAnimJoint1393);

HAnimJoint1375.addChildren(&HAnimJoint1384);

HAnimJoint1343.addChildren(&HAnimJoint1375);

HAnimJoint& HAnimJoint1394 =  HAnimJoint();
HAnimJoint1394.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint1394.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint1394.setCenter(new float[]{-0.1961,0.8055,-0.0218});
HAnimJoint1394.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1394.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1395 =  HAnimSegment();
HAnimSegment1395.X3DNode::setName(CString("r_metacarpal_2"));
HAnimSegment1395.setDEF(CString("hanim_r_metacarpal_2"));
Transform& Transform1396 =  Transform();
Transform1396.setTranslation(new float[]{-0.1961,0.8055,-0.0218});
Transform& Transform1397 =  Transform();
//Empty Transform
Shape& Shape1398 =  Shape();
Shape1398.setUSE(CString("HAnimJointShape"));
Transform1397.addChild(&Shape1398);

Transform1396.addChild(&Transform1397);

HAnimSegment1395.addChild(&Transform1396);

Shape& Shape1399 =  Shape();
LineSet& LineSet1400 =  LineSet();
LineSet1400.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1401 =  Coordinate();
Coordinate1401.setPoint(new float[]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
LineSet1400.setCoord(Coordinate1401);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1402 =  ColorRGBA();
ColorRGBA1402.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1400.addChild(&ColorRGBA1402);

Shape1399.setGeometry(&LineSet1400);

HAnimSegment1395.addChild(&Shape1399);

HAnimSite& HAnimSite1403 =  HAnimSite();
HAnimSite1403.X3DNode::setName(CString("r_metacarpal_phalanx_2"));
HAnimSite1403.setDEF(CString("hanim_r_metacarpal_phalanx_2"));
HAnimSite1403.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
TouchSensor& TouchSensor1404 =  TouchSensor();
TouchSensor1404.setDescription(CString("HAnimSite 78 r_metacarpal_phalanx_2"));
HAnimSite1403.addChild(&TouchSensor1404);

Shape& Shape1405 =  Shape();
Shape1405.setUSE(CString("HAnimSiteShape"));
HAnimSite1403.addChild(&Shape1405);

Billboard& Billboard1406 =  Billboard();
Shape& Shape1407 =  Shape();
Text& Text1408 =  Text();
Text1408.setString(new CString[]{CString("78")}, 1);
CFontStyle& FontStyle1409 =  CFontStyle();
FontStyle1409.setSize(0.035);
Text1408.setFontStyle(&FontStyle1409);

Shape1407.setGeometry(&Text1408);

Billboard1406.addChild(&Shape1407);

HAnimSite1403.addChild(Billboard1406);

HAnimSegment1395.addChild(&HAnimSite1403);

HAnimJoint1394.addChildren(&HAnimSegment1395);

HAnimJoint& HAnimJoint1410 =  HAnimJoint();
HAnimJoint1410.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1410.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint1410.setCenter(new float[]{-0.1961,0.7846,-0.0218});
HAnimJoint1410.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1410.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1411 =  HAnimSegment();
HAnimSegment1411.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1411.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform& Transform1412 =  Transform();
Transform1412.setTranslation(new float[]{-0.1961,0.7846,-0.0218});
Transform& Transform1413 =  Transform();
//Empty Transform
Shape& Shape1414 =  Shape();
Shape1414.setUSE(CString("HAnimJointShape"));
Transform1413.addChild(&Shape1414);

Transform1412.addChild(&Transform1413);

HAnimSegment1411.addChild(&Transform1412);

Shape& Shape1415 =  Shape();
LineSet& LineSet1416 =  LineSet();
LineSet1416.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1417 =  Coordinate();
Coordinate1417.setPoint(new float[]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
LineSet1416.setCoord(Coordinate1417);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1418 =  ColorRGBA();
ColorRGBA1418.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1416.addChild(&ColorRGBA1418);

Shape1415.setGeometry(&LineSet1416);

HAnimSegment1411.addChild(&Shape1415);

HAnimJoint1410.addChildren(&HAnimSegment1411);

HAnimJoint& HAnimJoint1419 =  HAnimJoint();
HAnimJoint1419.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1419.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1419.setCenter(new float[]{-0.1954,0.7393,-0.0185});
HAnimJoint1419.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1419.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1420 =  HAnimSegment();
HAnimSegment1420.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1420.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform& Transform1421 =  Transform();
Transform1421.setTranslation(new float[]{-0.1954,0.7393,-0.0185});
Transform& Transform1422 =  Transform();
//Empty Transform
Shape& Shape1423 =  Shape();
Shape1423.setUSE(CString("HAnimJointShape"));
Transform1422.addChild(&Shape1423);

Transform1421.addChild(&Transform1422);

HAnimSegment1420.addChild(&Transform1421);

Shape& Shape1424 =  Shape();
LineSet& LineSet1425 =  LineSet();
LineSet1425.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1426 =  Coordinate();
Coordinate1426.setPoint(new float[]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
LineSet1425.setCoord(Coordinate1426);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1427 =  ColorRGBA();
ColorRGBA1427.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1425.addChild(&ColorRGBA1427);

Shape1424.setGeometry(&LineSet1425);

HAnimSegment1420.addChild(&Shape1424);

HAnimJoint1419.addChildren(&HAnimSegment1420);

HAnimJoint& HAnimJoint1428 =  HAnimJoint();
HAnimJoint1428.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1428.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint1428.setCenter(new float[]{-0.1945,0.7169,-0.0173});
HAnimJoint1428.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1428.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1419.addChildren(&HAnimJoint1428);

HAnimJoint1410.addChildren(&HAnimJoint1419);

HAnimJoint1394.addChildren(&HAnimJoint1410);

HAnimJoint1343.addChildren(&HAnimJoint1394);

HAnimJoint& HAnimJoint1429 =  HAnimJoint();
HAnimJoint1429.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint1429.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint1429.setCenter(new float[]{-0.1972,0.806,-0.0468});
HAnimJoint1429.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1429.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1430 =  HAnimSegment();
HAnimSegment1430.X3DNode::setName(CString("r_metacarpal_3"));
HAnimSegment1430.setDEF(CString("hanim_r_metacarpal_3"));
Transform& Transform1431 =  Transform();
Transform1431.setTranslation(new float[]{-0.1972,0.806,-0.0468});
Transform& Transform1432 =  Transform();
//Empty Transform
Shape& Shape1433 =  Shape();
Shape1433.setUSE(CString("HAnimJointShape"));
Transform1432.addChild(&Shape1433);

Transform1431.addChild(&Transform1432);

HAnimSegment1430.addChild(&Transform1431);

Shape& Shape1434 =  Shape();
LineSet& LineSet1435 =  LineSet();
LineSet1435.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1436 =  Coordinate();
Coordinate1436.setPoint(new float[]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
LineSet1435.setCoord(Coordinate1436);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1437 =  ColorRGBA();
ColorRGBA1437.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1435.addChild(&ColorRGBA1437);

Shape1434.setGeometry(&LineSet1435);

HAnimSegment1430.addChild(&Shape1434);

HAnimSite& HAnimSite1438 =  HAnimSite();
HAnimSite1438.X3DNode::setName(CString("r_metacarpal_phalanx_3"));
HAnimSite1438.setDEF(CString("hanim_r_metacarpal_phalanx_3"));
TouchSensor& TouchSensor1439 =  TouchSensor();
TouchSensor1439.setDescription(CString("HAnimSite 79 r_metacarpal_phalanx_3"));
HAnimSite1438.addChild(&TouchSensor1439);

Shape& Shape1440 =  Shape();
Shape1440.setUSE(CString("HAnimSiteShape"));
HAnimSite1438.addChild(&Shape1440);

Billboard& Billboard1441 =  Billboard();
Shape& Shape1442 =  Shape();
Text& Text1443 =  Text();
Text1443.setString(new CString[]{CString("79")}, 1);
CFontStyle& FontStyle1444 =  CFontStyle();
FontStyle1444.setSize(0.035);
Text1443.setFontStyle(&FontStyle1444);

Shape1442.setGeometry(&Text1443);

Billboard1441.addChild(&Shape1442);

HAnimSite1438.addChild(Billboard1441);

HAnimSegment1430.addChild(&HAnimSite1438);

HAnimJoint1429.addChildren(&HAnimSegment1430);

HAnimJoint& HAnimJoint1445 =  HAnimJoint();
HAnimJoint1445.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1445.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint1445.setCenter(new float[]{-0.1972,0.7849,-0.0468});
HAnimJoint1445.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1445.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1446 =  HAnimSegment();
HAnimSegment1446.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1446.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform& Transform1447 =  Transform();
Transform1447.setTranslation(new float[]{-0.1972,0.7849,-0.0468});
Transform& Transform1448 =  Transform();
//Empty Transform
Shape& Shape1449 =  Shape();
Shape1449.setUSE(CString("HAnimJointShape"));
Transform1448.addChild(&Shape1449);

Transform1447.addChild(&Transform1448);

HAnimSegment1446.addChild(&Transform1447);

Shape& Shape1450 =  Shape();
LineSet& LineSet1451 =  LineSet();
LineSet1451.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1452 =  Coordinate();
Coordinate1452.setPoint(new float[]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
LineSet1451.setCoord(Coordinate1452);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1453 =  ColorRGBA();
ColorRGBA1453.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1451.addChild(&ColorRGBA1453);

Shape1450.setGeometry(&LineSet1451);

HAnimSegment1446.addChild(&Shape1450);

HAnimJoint1445.addChildren(&HAnimSegment1446);

HAnimJoint& HAnimJoint1454 =  HAnimJoint();
HAnimJoint1454.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1454.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1454.setCenter(new float[]{-0.195,0.7304,-0.0441});
HAnimJoint1454.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1454.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1455 =  HAnimSegment();
HAnimSegment1455.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1455.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform& Transform1456 =  Transform();
Transform1456.setTranslation(new float[]{-0.195,0.7304,-0.0441});
Transform& Transform1457 =  Transform();
//Empty Transform
Shape& Shape1458 =  Shape();
Shape1458.setUSE(CString("HAnimJointShape"));
Transform1457.addChild(&Shape1458);

Transform1456.addChild(&Transform1457);

HAnimSegment1455.addChild(&Transform1456);

Shape& Shape1459 =  Shape();
LineSet& LineSet1460 =  LineSet();
LineSet1460.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1461 =  Coordinate();
Coordinate1461.setPoint(new float[]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
LineSet1460.setCoord(Coordinate1461);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1462 =  ColorRGBA();
ColorRGBA1462.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1460.addChild(&ColorRGBA1462);

Shape1459.setGeometry(&LineSet1460);

HAnimSegment1455.addChild(&Shape1459);

HAnimJoint1454.addChildren(&HAnimSegment1455);

HAnimJoint& HAnimJoint1463 =  HAnimJoint();
HAnimJoint1463.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1463.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint1463.setCenter(new float[]{-0.1939,0.7042,-0.0432});
HAnimJoint1463.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1463.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1454.addChildren(&HAnimJoint1463);

HAnimJoint1445.addChildren(&HAnimJoint1454);

HAnimJoint1429.addChildren(&HAnimJoint1445);

HAnimJoint1343.addChildren(&HAnimJoint1429);

HAnimJoint& HAnimJoint1464 =  HAnimJoint();
HAnimJoint1464.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint1464.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint1464.setCenter(new float[]{-0.1951,0.8049,-0.0732});
HAnimJoint1464.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1464.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1465 =  HAnimSegment();
HAnimSegment1465.X3DNode::setName(CString("r_metacarpal_4"));
HAnimSegment1465.setDEF(CString("hanim_r_metacarpal_4"));
Transform& Transform1466 =  Transform();
Transform1466.setTranslation(new float[]{-0.1951,0.8049,-0.0732});
Transform& Transform1467 =  Transform();
//Empty Transform
Shape& Shape1468 =  Shape();
Shape1468.setUSE(CString("HAnimJointShape"));
Transform1467.addChild(&Shape1468);

Transform1466.addChild(&Transform1467);

HAnimSegment1465.addChild(&Transform1466);

Shape& Shape1469 =  Shape();
LineSet& LineSet1470 =  LineSet();
LineSet1470.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1471 =  Coordinate();
Coordinate1471.setPoint(new float[]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
LineSet1470.setCoord(Coordinate1471);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1472 =  ColorRGBA();
ColorRGBA1472.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1470.addChild(&ColorRGBA1472);

Shape1469.setGeometry(&LineSet1470);

HAnimSegment1465.addChild(&Shape1469);

HAnimJoint1464.addChildren(&HAnimSegment1465);

HAnimJoint& HAnimJoint1473 =  HAnimJoint();
HAnimJoint1473.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1473.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint1473.setCenter(new float[]{-0.1951,0.7845,-0.0732});
HAnimJoint1473.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1473.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1474 =  HAnimSegment();
HAnimSegment1474.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1474.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform& Transform1475 =  Transform();
Transform1475.setTranslation(new float[]{-0.1951,0.7845,-0.0732});
Transform& Transform1476 =  Transform();
//Empty Transform
Shape& Shape1477 =  Shape();
Shape1477.setUSE(CString("HAnimJointShape"));
Transform1476.addChild(&Shape1477);

Transform1475.addChild(&Transform1476);

HAnimSegment1474.addChild(&Transform1475);

Shape& Shape1478 =  Shape();
LineSet& LineSet1479 =  LineSet();
LineSet1479.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1480 =  Coordinate();
Coordinate1480.setPoint(new float[]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
LineSet1479.setCoord(Coordinate1480);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1481 =  ColorRGBA();
ColorRGBA1481.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1479.addChild(&ColorRGBA1481);

Shape1478.setGeometry(&LineSet1479);

HAnimSegment1474.addChild(&Shape1478);

HAnimJoint1473.addChildren(&HAnimSegment1474);

HAnimJoint& HAnimJoint1482 =  HAnimJoint();
HAnimJoint1482.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1482.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1482.setCenter(new float[]{-0.192,0.7318,-0.0716});
HAnimJoint1482.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1482.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1483 =  HAnimSegment();
HAnimSegment1483.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1483.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform& Transform1484 =  Transform();
Transform1484.setTranslation(new float[]{-0.192,0.7318,-0.0716});
Transform& Transform1485 =  Transform();
//Empty Transform
Shape& Shape1486 =  Shape();
Shape1486.setUSE(CString("HAnimJointShape"));
Transform1485.addChild(&Shape1486);

Transform1484.addChild(&Transform1485);

HAnimSegment1483.addChild(&Transform1484);

Shape& Shape1487 =  Shape();
LineSet& LineSet1488 =  LineSet();
LineSet1488.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1489 =  Coordinate();
Coordinate1489.setPoint(new float[]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
LineSet1488.setCoord(Coordinate1489);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1490 =  ColorRGBA();
ColorRGBA1490.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1488.addChild(&ColorRGBA1490);

Shape1487.setGeometry(&LineSet1488);

HAnimSegment1483.addChild(&Shape1487);

HAnimJoint1482.addChildren(&HAnimSegment1483);

HAnimJoint& HAnimJoint1491 =  HAnimJoint();
HAnimJoint1491.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1491.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint1491.setCenter(new float[]{-0.1908,0.7077,-0.0706});
HAnimJoint1491.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1491.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1482.addChildren(&HAnimJoint1491);

HAnimJoint1473.addChildren(&HAnimJoint1482);

HAnimJoint1464.addChildren(&HAnimJoint1473);

HAnimJoint1343.addChildren(&HAnimJoint1464);

HAnimJoint& HAnimJoint1492 =  HAnimJoint();
HAnimJoint1492.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint1492.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint1492.setCenter(new float[]{-0.1926,0.8096,-0.0975});
HAnimJoint1492.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1492.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1493 =  HAnimSegment();
HAnimSegment1493.X3DNode::setName(CString("r_metacarpal_5"));
HAnimSegment1493.setDEF(CString("hanim_r_metacarpal_5"));
Transform& Transform1494 =  Transform();
Transform1494.setTranslation(new float[]{-0.1926,0.8096,-0.0975});
Transform& Transform1495 =  Transform();
//Empty Transform
Shape& Shape1496 =  Shape();
Shape1496.setUSE(CString("HAnimJointShape"));
Transform1495.addChild(&Shape1496);

Transform1494.addChild(&Transform1495);

HAnimSegment1493.addChild(&Transform1494);

Shape& Shape1497 =  Shape();
LineSet& LineSet1498 =  LineSet();
LineSet1498.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1499 =  Coordinate();
Coordinate1499.setPoint(new float[]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
LineSet1498.setCoord(Coordinate1499);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1500 =  ColorRGBA();
ColorRGBA1500.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1498.addChild(&ColorRGBA1500);

Shape1497.setGeometry(&LineSet1498);

HAnimSegment1493.addChild(&Shape1497);

HAnimSite& HAnimSite1501 =  HAnimSite();
HAnimSite1501.X3DNode::setName(CString("r_metacarpal_phalanx_5"));
HAnimSite1501.setDEF(CString("hanim_r_metacarpal_phalanx_5"));
HAnimSite1501.setTranslation(new float[]{-0.1929,0.789,-0.1064});
TouchSensor& TouchSensor1502 =  TouchSensor();
TouchSensor1502.setDescription(CString("HAnimSite 80 r_metacarpal_phalanx_5"));
HAnimSite1501.addChild(&TouchSensor1502);

Shape& Shape1503 =  Shape();
Shape1503.setUSE(CString("HAnimSiteShape"));
HAnimSite1501.addChild(&Shape1503);

Billboard& Billboard1504 =  Billboard();
Shape& Shape1505 =  Shape();
Text& Text1506 =  Text();
Text1506.setString(new CString[]{CString("80")}, 1);
CFontStyle& FontStyle1507 =  CFontStyle();
FontStyle1507.setSize(0.035);
Text1506.setFontStyle(&FontStyle1507);

Shape1505.setGeometry(&Text1506);

Billboard1504.addChild(&Shape1505);

HAnimSite1501.addChild(Billboard1504);

HAnimSegment1493.addChild(&HAnimSite1501);

HAnimJoint1492.addChildren(&HAnimSegment1493);

HAnimJoint& HAnimJoint1508 =  HAnimJoint();
HAnimJoint1508.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1508.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint1508.setCenter(new float[]{-0.1926,0.7896,-0.0975});
HAnimJoint1508.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1508.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1509 =  HAnimSegment();
HAnimSegment1509.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1509.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform& Transform1510 =  Transform();
Transform1510.setTranslation(new float[]{-0.1926,0.7896,-0.0975});
Transform& Transform1511 =  Transform();
//Empty Transform
Shape& Shape1512 =  Shape();
Shape1512.setUSE(CString("HAnimJointShape"));
Transform1511.addChild(&Shape1512);

Transform1510.addChild(&Transform1511);

HAnimSegment1509.addChild(&Transform1510);

Shape& Shape1513 =  Shape();
LineSet& LineSet1514 =  LineSet();
LineSet1514.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1515 =  Coordinate();
Coordinate1515.setPoint(new float[]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
LineSet1514.setCoord(Coordinate1515);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1516 =  ColorRGBA();
ColorRGBA1516.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1514.addChild(&ColorRGBA1516);

Shape1513.setGeometry(&LineSet1514);

HAnimSegment1509.addChild(&Shape1513);

HAnimJoint1508.addChildren(&HAnimSegment1509);

HAnimJoint& HAnimJoint1517 =  HAnimJoint();
HAnimJoint1517.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1517.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1517.setCenter(new float[]{-0.1902,0.7483,-0.0963});
HAnimJoint1517.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1517.setLlimit(new float[]{0,0,0}, 3);
HAnimSegment& HAnimSegment1518 =  HAnimSegment();
HAnimSegment1518.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1518.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform& Transform1519 =  Transform();
Transform1519.setTranslation(new float[]{-0.1902,0.7483,-0.0963});
Transform& Transform1520 =  Transform();
//Empty Transform
Shape& Shape1521 =  Shape();
Shape1521.setUSE(CString("HAnimJointShape"));
Transform1520.addChild(&Shape1521);

Transform1519.addChild(&Transform1520);

HAnimSegment1518.addChild(&Transform1519);

Shape& Shape1522 =  Shape();
LineSet& LineSet1523 =  LineSet();
LineSet1523.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1524 =  Coordinate();
Coordinate1524.setPoint(new float[]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
LineSet1523.setCoord(Coordinate1524);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1525 =  ColorRGBA();
ColorRGBA1525.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1523.addChild(&ColorRGBA1525);

Shape1522.setGeometry(&LineSet1523);

HAnimSegment1518.addChild(&Shape1522);

HAnimJoint1517.addChildren(&HAnimSegment1518);

HAnimJoint& HAnimJoint1526 =  HAnimJoint();
HAnimJoint1526.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1526.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint1526.setCenter(new float[]{-0.1908,0.754,-0.096});
HAnimJoint1526.setUlimit(new float[]{0,0,0}, 3);
HAnimJoint1526.setLlimit(new float[]{0,0,0}, 3);
HAnimJoint1517.addChildren(&HAnimJoint1526);

HAnimJoint1508.addChildren(&HAnimJoint1517);

HAnimJoint1492.addChildren(&HAnimJoint1508);

HAnimJoint1343.addChildren(&HAnimJoint1492);

HAnimJoint1306.addChildren(&HAnimJoint1343);

HAnimJoint1283.addChildren(&HAnimJoint1306);

HAnimJoint1274.addChildren(&HAnimJoint1283);

HAnimJoint1230.addChildren(&HAnimJoint1274);

HAnimJoint701.addChildren(&HAnimJoint1230);

HAnimJoint692.addChildren(&HAnimJoint701);

HAnimJoint683.addChildren(&HAnimJoint692);

HAnimJoint674.addChildren(&HAnimJoint683);

HAnimJoint658.addChildren(&HAnimJoint674);

HAnimJoint621.addChildren(&HAnimJoint658);

HAnimJoint612.addChildren(&HAnimJoint621);

HAnimJoint603.addChildren(&HAnimJoint612);

HAnimJoint580.addChildren(&HAnimJoint603);

HAnimJoint564.addChildren(&HAnimJoint580);

HAnimJoint555.addChildren(&HAnimJoint564);

HAnimJoint546.addChildren(&HAnimJoint555);

HAnimJoint537.addChildren(&HAnimJoint546);

HAnimJoint507.addChildren(&HAnimJoint537);

HAnimJoint498.addChildren(&HAnimJoint507);

HAnimJoint489.addChildren(&HAnimJoint498);

HAnimJoint459.addChildren(&HAnimJoint489);

HAnimJoint47.addChildren(&HAnimJoint459);

HAnimHumanoid38.setSkeleton(&HAnimJoint47);

HAnimJoint& HAnimJoint1527 =  HAnimJoint();
HAnimJoint1527.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid38.setJoints(&HAnimJoint1527);

HAnimJoint& HAnimJoint1528 =  HAnimJoint();
HAnimJoint1528.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid38.setJoints(&HAnimJoint1528);

HAnimJoint& HAnimJoint1529 =  HAnimJoint();
HAnimJoint1529.setUSE(CString("hanim_l_hip"));
HAnimHumanoid38.setJoints(&HAnimJoint1529);

HAnimJoint& HAnimJoint1530 =  HAnimJoint();
HAnimJoint1530.setUSE(CString("hanim_l_knee"));
HAnimHumanoid38.setJoints(&HAnimJoint1530);

HAnimJoint& HAnimJoint1531 =  HAnimJoint();
HAnimJoint1531.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid38.setJoints(&HAnimJoint1531);

HAnimJoint& HAnimJoint1532 =  HAnimJoint();
HAnimJoint1532.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1532);

HAnimJoint& HAnimJoint1533 =  HAnimJoint();
HAnimJoint1533.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1533);

HAnimJoint& HAnimJoint1534 =  HAnimJoint();
HAnimJoint1534.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1534);

HAnimJoint& HAnimJoint1535 =  HAnimJoint();
HAnimJoint1535.setUSE(CString("hanim_r_hip"));
HAnimHumanoid38.setJoints(&HAnimJoint1535);

HAnimJoint& HAnimJoint1536 =  HAnimJoint();
HAnimJoint1536.setUSE(CString("hanim_r_knee"));
HAnimHumanoid38.setJoints(&HAnimJoint1536);

HAnimJoint& HAnimJoint1537 =  HAnimJoint();
HAnimJoint1537.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid38.setJoints(&HAnimJoint1537);

HAnimJoint& HAnimJoint1538 =  HAnimJoint();
HAnimJoint1538.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1538);

HAnimJoint& HAnimJoint1539 =  HAnimJoint();
HAnimJoint1539.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1539);

HAnimJoint& HAnimJoint1540 =  HAnimJoint();
HAnimJoint1540.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1540);

HAnimJoint& HAnimJoint1541 =  HAnimJoint();
HAnimJoint1541.setUSE(CString("hanim_vl5"));
HAnimHumanoid38.setJoints(&HAnimJoint1541);

HAnimJoint& HAnimJoint1542 =  HAnimJoint();
HAnimJoint1542.setUSE(CString("hanim_vl4"));
HAnimHumanoid38.setJoints(&HAnimJoint1542);

HAnimJoint& HAnimJoint1543 =  HAnimJoint();
HAnimJoint1543.setUSE(CString("hanim_vl3"));
HAnimHumanoid38.setJoints(&HAnimJoint1543);

HAnimJoint& HAnimJoint1544 =  HAnimJoint();
HAnimJoint1544.setUSE(CString("hanim_vl2"));
HAnimHumanoid38.setJoints(&HAnimJoint1544);

HAnimJoint& HAnimJoint1545 =  HAnimJoint();
HAnimJoint1545.setUSE(CString("hanim_vl1"));
HAnimHumanoid38.setJoints(&HAnimJoint1545);

HAnimJoint& HAnimJoint1546 =  HAnimJoint();
HAnimJoint1546.setUSE(CString("hanim_vt12"));
HAnimHumanoid38.setJoints(&HAnimJoint1546);

HAnimJoint& HAnimJoint1547 =  HAnimJoint();
HAnimJoint1547.setUSE(CString("hanim_vt11"));
HAnimHumanoid38.setJoints(&HAnimJoint1547);

HAnimJoint& HAnimJoint1548 =  HAnimJoint();
HAnimJoint1548.setUSE(CString("hanim_vt10"));
HAnimHumanoid38.setJoints(&HAnimJoint1548);

HAnimJoint& HAnimJoint1549 =  HAnimJoint();
HAnimJoint1549.setUSE(CString("hanim_vt9"));
HAnimHumanoid38.setJoints(&HAnimJoint1549);

HAnimJoint& HAnimJoint1550 =  HAnimJoint();
HAnimJoint1550.setUSE(CString("hanim_vt8"));
HAnimHumanoid38.setJoints(&HAnimJoint1550);

HAnimJoint& HAnimJoint1551 =  HAnimJoint();
HAnimJoint1551.setUSE(CString("hanim_vt7"));
HAnimHumanoid38.setJoints(&HAnimJoint1551);

HAnimJoint& HAnimJoint1552 =  HAnimJoint();
HAnimJoint1552.setUSE(CString("hanim_vt6"));
HAnimHumanoid38.setJoints(&HAnimJoint1552);

HAnimJoint& HAnimJoint1553 =  HAnimJoint();
HAnimJoint1553.setUSE(CString("hanim_vt5"));
HAnimHumanoid38.setJoints(&HAnimJoint1553);

HAnimJoint& HAnimJoint1554 =  HAnimJoint();
HAnimJoint1554.setUSE(CString("hanim_vt4"));
HAnimHumanoid38.setJoints(&HAnimJoint1554);

HAnimJoint& HAnimJoint1555 =  HAnimJoint();
HAnimJoint1555.setUSE(CString("hanim_vt3"));
HAnimHumanoid38.setJoints(&HAnimJoint1555);

HAnimJoint& HAnimJoint1556 =  HAnimJoint();
HAnimJoint1556.setUSE(CString("hanim_vt2"));
HAnimHumanoid38.setJoints(&HAnimJoint1556);

HAnimJoint& HAnimJoint1557 =  HAnimJoint();
HAnimJoint1557.setUSE(CString("hanim_vt1"));
HAnimHumanoid38.setJoints(&HAnimJoint1557);

HAnimJoint& HAnimJoint1558 =  HAnimJoint();
HAnimJoint1558.setUSE(CString("hanim_vc7"));
HAnimHumanoid38.setJoints(&HAnimJoint1558);

HAnimJoint& HAnimJoint1559 =  HAnimJoint();
HAnimJoint1559.setUSE(CString("hanim_vc6"));
HAnimHumanoid38.setJoints(&HAnimJoint1559);

HAnimJoint& HAnimJoint1560 =  HAnimJoint();
HAnimJoint1560.setUSE(CString("hanim_vc5"));
HAnimHumanoid38.setJoints(&HAnimJoint1560);

HAnimJoint& HAnimJoint1561 =  HAnimJoint();
HAnimJoint1561.setUSE(CString("hanim_vc4"));
HAnimHumanoid38.setJoints(&HAnimJoint1561);

HAnimJoint& HAnimJoint1562 =  HAnimJoint();
HAnimJoint1562.setUSE(CString("hanim_vc3"));
HAnimHumanoid38.setJoints(&HAnimJoint1562);

HAnimJoint& HAnimJoint1563 =  HAnimJoint();
HAnimJoint1563.setUSE(CString("hanim_vc2"));
HAnimHumanoid38.setJoints(&HAnimJoint1563);

HAnimJoint& HAnimJoint1564 =  HAnimJoint();
HAnimJoint1564.setUSE(CString("hanim_vc1"));
HAnimHumanoid38.setJoints(&HAnimJoint1564);

HAnimJoint& HAnimJoint1565 =  HAnimJoint();
HAnimJoint1565.setUSE(CString("hanim_skullbase"));
HAnimHumanoid38.setJoints(&HAnimJoint1565);

HAnimJoint& HAnimJoint1566 =  HAnimJoint();
HAnimJoint1566.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1566);

HAnimJoint& HAnimJoint1567 =  HAnimJoint();
HAnimJoint1567.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1567);

HAnimJoint& HAnimJoint1568 =  HAnimJoint();
HAnimJoint1568.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1568);

HAnimJoint& HAnimJoint1569 =  HAnimJoint();
HAnimJoint1569.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1569);

HAnimJoint& HAnimJoint1570 =  HAnimJoint();
HAnimJoint1570.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1570);

HAnimJoint& HAnimJoint1571 =  HAnimJoint();
HAnimJoint1571.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1571);

HAnimJoint& HAnimJoint1572 =  HAnimJoint();
HAnimJoint1572.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid38.setJoints(&HAnimJoint1572);

HAnimJoint& HAnimJoint1573 =  HAnimJoint();
HAnimJoint1573.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1573);

HAnimJoint& HAnimJoint1574 =  HAnimJoint();
HAnimJoint1574.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1574);

HAnimJoint& HAnimJoint1575 =  HAnimJoint();
HAnimJoint1575.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid38.setJoints(&HAnimJoint1575);

HAnimJoint& HAnimJoint1576 =  HAnimJoint();
HAnimJoint1576.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid38.setJoints(&HAnimJoint1576);

HAnimJoint& HAnimJoint1577 =  HAnimJoint();
HAnimJoint1577.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid38.setJoints(&HAnimJoint1577);

HAnimJoint& HAnimJoint1578 =  HAnimJoint();
HAnimJoint1578.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1578);

HAnimJoint& HAnimJoint1579 =  HAnimJoint();
HAnimJoint1579.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1579);

HAnimJoint& HAnimJoint1580 =  HAnimJoint();
HAnimJoint1580.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1580);

HAnimJoint& HAnimJoint1581 =  HAnimJoint();
HAnimJoint1581.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1581);

HAnimJoint& HAnimJoint1582 =  HAnimJoint();
HAnimJoint1582.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1582);

HAnimJoint& HAnimJoint1583 =  HAnimJoint();
HAnimJoint1583.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1583);

HAnimJoint& HAnimJoint1584 =  HAnimJoint();
HAnimJoint1584.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1584);

HAnimJoint& HAnimJoint1585 =  HAnimJoint();
HAnimJoint1585.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1585);

HAnimJoint& HAnimJoint1586 =  HAnimJoint();
HAnimJoint1586.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1586);

HAnimJoint& HAnimJoint1587 =  HAnimJoint();
HAnimJoint1587.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1587);

HAnimJoint& HAnimJoint1588 =  HAnimJoint();
HAnimJoint1588.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1588);

HAnimJoint& HAnimJoint1589 =  HAnimJoint();
HAnimJoint1589.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1589);

HAnimJoint& HAnimJoint1590 =  HAnimJoint();
HAnimJoint1590.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1590);

HAnimJoint& HAnimJoint1591 =  HAnimJoint();
HAnimJoint1591.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1591);

HAnimJoint& HAnimJoint1592 =  HAnimJoint();
HAnimJoint1592.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1592);

HAnimJoint& HAnimJoint1593 =  HAnimJoint();
HAnimJoint1593.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1593);

HAnimJoint& HAnimJoint1594 =  HAnimJoint();
HAnimJoint1594.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1594);

HAnimJoint& HAnimJoint1595 =  HAnimJoint();
HAnimJoint1595.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1595);

HAnimJoint& HAnimJoint1596 =  HAnimJoint();
HAnimJoint1596.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1596);

HAnimJoint& HAnimJoint1597 =  HAnimJoint();
HAnimJoint1597.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1597);

HAnimJoint& HAnimJoint1598 =  HAnimJoint();
HAnimJoint1598.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1598);

HAnimJoint& HAnimJoint1599 =  HAnimJoint();
HAnimJoint1599.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid38.setJoints(&HAnimJoint1599);

HAnimJoint& HAnimJoint1600 =  HAnimJoint();
HAnimJoint1600.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid38.setJoints(&HAnimJoint1600);

HAnimJoint& HAnimJoint1601 =  HAnimJoint();
HAnimJoint1601.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid38.setJoints(&HAnimJoint1601);

HAnimJoint& HAnimJoint1602 =  HAnimJoint();
HAnimJoint1602.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1602);

HAnimJoint& HAnimJoint1603 =  HAnimJoint();
HAnimJoint1603.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1603);

HAnimJoint& HAnimJoint1604 =  HAnimJoint();
HAnimJoint1604.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1604);

HAnimJoint& HAnimJoint1605 =  HAnimJoint();
HAnimJoint1605.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1605);

HAnimJoint& HAnimJoint1606 =  HAnimJoint();
HAnimJoint1606.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1606);

HAnimJoint& HAnimJoint1607 =  HAnimJoint();
HAnimJoint1607.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1607);

HAnimJoint& HAnimJoint1608 =  HAnimJoint();
HAnimJoint1608.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1608);

HAnimJoint& HAnimJoint1609 =  HAnimJoint();
HAnimJoint1609.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1609);

HAnimJoint& HAnimJoint1610 =  HAnimJoint();
HAnimJoint1610.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1610);

HAnimJoint& HAnimJoint1611 =  HAnimJoint();
HAnimJoint1611.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1611);

HAnimJoint& HAnimJoint1612 =  HAnimJoint();
HAnimJoint1612.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1612);

HAnimJoint& HAnimJoint1613 =  HAnimJoint();
HAnimJoint1613.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1613);

HAnimJoint& HAnimJoint1614 =  HAnimJoint();
HAnimJoint1614.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1614);

HAnimJoint& HAnimJoint1615 =  HAnimJoint();
HAnimJoint1615.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1615);

HAnimJoint& HAnimJoint1616 =  HAnimJoint();
HAnimJoint1616.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1616);

HAnimJoint& HAnimJoint1617 =  HAnimJoint();
HAnimJoint1617.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1617);

HAnimJoint& HAnimJoint1618 =  HAnimJoint();
HAnimJoint1618.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1618);

HAnimJoint& HAnimJoint1619 =  HAnimJoint();
HAnimJoint1619.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1619);

HAnimJoint& HAnimJoint1620 =  HAnimJoint();
HAnimJoint1620.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1620);

HAnimSegment& HAnimSegment1621 =  HAnimSegment();
HAnimSegment1621.setUSE(CString("hanim_sacrum"));
HAnimHumanoid38.setSegments(&HAnimSegment1621);

HAnimSegment& HAnimSegment1622 =  HAnimSegment();
HAnimSegment1622.setUSE(CString("hanim_pelvis"));
HAnimHumanoid38.setSegments(&HAnimSegment1622);

HAnimSegment& HAnimSegment1623 =  HAnimSegment();
HAnimSegment1623.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid38.setSegments(&HAnimSegment1623);

HAnimSegment& HAnimSegment1624 =  HAnimSegment();
HAnimSegment1624.setUSE(CString("hanim_l_calf"));
HAnimHumanoid38.setSegments(&HAnimSegment1624);

HAnimSegment& HAnimSegment1625 =  HAnimSegment();
HAnimSegment1625.setUSE(CString("hanim_l_talus"));
HAnimHumanoid38.setSegments(&HAnimSegment1625);

HAnimSegment& HAnimSegment1626 =  HAnimSegment();
HAnimSegment1626.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1626);

HAnimSegment& HAnimSegment1627 =  HAnimSegment();
HAnimSegment1627.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1627);

HAnimSegment& HAnimSegment1628 =  HAnimSegment();
HAnimSegment1628.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid38.setSegments(&HAnimSegment1628);

HAnimSegment& HAnimSegment1629 =  HAnimSegment();
HAnimSegment1629.setUSE(CString("hanim_r_calf"));
HAnimHumanoid38.setSegments(&HAnimSegment1629);

HAnimSegment& HAnimSegment1630 =  HAnimSegment();
HAnimSegment1630.setUSE(CString("hanim_r_talus"));
HAnimHumanoid38.setSegments(&HAnimSegment1630);

HAnimSegment& HAnimSegment1631 =  HAnimSegment();
HAnimSegment1631.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1631);

HAnimSegment& HAnimSegment1632 =  HAnimSegment();
HAnimSegment1632.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1632);

HAnimSegment& HAnimSegment1633 =  HAnimSegment();
HAnimSegment1633.setUSE(CString("hanim_l5"));
HAnimHumanoid38.setSegments(&HAnimSegment1633);

HAnimSegment& HAnimSegment1634 =  HAnimSegment();
HAnimSegment1634.setUSE(CString("hanim_l4"));
HAnimHumanoid38.setSegments(&HAnimSegment1634);

HAnimSegment& HAnimSegment1635 =  HAnimSegment();
HAnimSegment1635.setUSE(CString("hanim_l3"));
HAnimHumanoid38.setSegments(&HAnimSegment1635);

HAnimSegment& HAnimSegment1636 =  HAnimSegment();
HAnimSegment1636.setUSE(CString("hanim_l2"));
HAnimHumanoid38.setSegments(&HAnimSegment1636);

HAnimSegment& HAnimSegment1637 =  HAnimSegment();
HAnimSegment1637.setUSE(CString("hanim_l1"));
HAnimHumanoid38.setSegments(&HAnimSegment1637);

HAnimSegment& HAnimSegment1638 =  HAnimSegment();
HAnimSegment1638.setUSE(CString("hanim_t12"));
HAnimHumanoid38.setSegments(&HAnimSegment1638);

HAnimSegment& HAnimSegment1639 =  HAnimSegment();
HAnimSegment1639.setUSE(CString("hanim_t11"));
HAnimHumanoid38.setSegments(&HAnimSegment1639);

HAnimSegment& HAnimSegment1640 =  HAnimSegment();
HAnimSegment1640.setUSE(CString("hanim_t10"));
HAnimHumanoid38.setSegments(&HAnimSegment1640);

HAnimSegment& HAnimSegment1641 =  HAnimSegment();
HAnimSegment1641.setUSE(CString("hanim_t9"));
HAnimHumanoid38.setSegments(&HAnimSegment1641);

HAnimSegment& HAnimSegment1642 =  HAnimSegment();
HAnimSegment1642.setUSE(CString("hanim_t8"));
HAnimHumanoid38.setSegments(&HAnimSegment1642);

HAnimSegment& HAnimSegment1643 =  HAnimSegment();
HAnimSegment1643.setUSE(CString("hanim_t7"));
HAnimHumanoid38.setSegments(&HAnimSegment1643);

HAnimSegment& HAnimSegment1644 =  HAnimSegment();
HAnimSegment1644.setUSE(CString("hanim_t6"));
HAnimHumanoid38.setSegments(&HAnimSegment1644);

HAnimSegment& HAnimSegment1645 =  HAnimSegment();
HAnimSegment1645.setUSE(CString("hanim_t5"));
HAnimHumanoid38.setSegments(&HAnimSegment1645);

HAnimSegment& HAnimSegment1646 =  HAnimSegment();
HAnimSegment1646.setUSE(CString("hanim_t4"));
HAnimHumanoid38.setSegments(&HAnimSegment1646);

HAnimSegment& HAnimSegment1647 =  HAnimSegment();
HAnimSegment1647.setUSE(CString("hanim_t3"));
HAnimHumanoid38.setSegments(&HAnimSegment1647);

HAnimSegment& HAnimSegment1648 =  HAnimSegment();
HAnimSegment1648.setUSE(CString("hanim_t2"));
HAnimHumanoid38.setSegments(&HAnimSegment1648);

HAnimSegment& HAnimSegment1649 =  HAnimSegment();
HAnimSegment1649.setUSE(CString("hanim_t1"));
HAnimHumanoid38.setSegments(&HAnimSegment1649);

HAnimSegment& HAnimSegment1650 =  HAnimSegment();
HAnimSegment1650.setUSE(CString("hanim_c7"));
HAnimHumanoid38.setSegments(&HAnimSegment1650);

HAnimSegment& HAnimSegment1651 =  HAnimSegment();
HAnimSegment1651.setUSE(CString("hanim_c6"));
HAnimHumanoid38.setSegments(&HAnimSegment1651);

HAnimSegment& HAnimSegment1652 =  HAnimSegment();
HAnimSegment1652.setUSE(CString("hanim_c5"));
HAnimHumanoid38.setSegments(&HAnimSegment1652);

HAnimSegment& HAnimSegment1653 =  HAnimSegment();
HAnimSegment1653.setUSE(CString("hanim_c4"));
HAnimHumanoid38.setSegments(&HAnimSegment1653);

HAnimSegment& HAnimSegment1654 =  HAnimSegment();
HAnimSegment1654.setUSE(CString("hanim_c3"));
HAnimHumanoid38.setSegments(&HAnimSegment1654);

HAnimSegment& HAnimSegment1655 =  HAnimSegment();
HAnimSegment1655.setUSE(CString("hanim_c2"));
HAnimHumanoid38.setSegments(&HAnimSegment1655);

HAnimSegment& HAnimSegment1656 =  HAnimSegment();
HAnimSegment1656.setUSE(CString("hanim_c1"));
HAnimHumanoid38.setSegments(&HAnimSegment1656);

HAnimSegment& HAnimSegment1657 =  HAnimSegment();
HAnimSegment1657.setUSE(CString("hanim_skull"));
HAnimHumanoid38.setSegments(&HAnimSegment1657);

HAnimSegment& HAnimSegment1658 =  HAnimSegment();
HAnimSegment1658.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid38.setSegments(&HAnimSegment1658);

HAnimSegment& HAnimSegment1659 =  HAnimSegment();
HAnimSegment1659.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid38.setSegments(&HAnimSegment1659);

HAnimSegment& HAnimSegment1660 =  HAnimSegment();
HAnimSegment1660.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid38.setSegments(&HAnimSegment1660);

HAnimSegment& HAnimSegment1661 =  HAnimSegment();
HAnimSegment1661.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid38.setSegments(&HAnimSegment1661);

HAnimSegment& HAnimSegment1662 =  HAnimSegment();
HAnimSegment1662.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid38.setSegments(&HAnimSegment1662);

HAnimSegment& HAnimSegment1663 =  HAnimSegment();
HAnimSegment1663.setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid38.setSegments(&HAnimSegment1663);

HAnimSegment& HAnimSegment1664 =  HAnimSegment();
HAnimSegment1664.setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid38.setSegments(&HAnimSegment1664);

HAnimSegment& HAnimSegment1665 =  HAnimSegment();
HAnimSegment1665.setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1665);

HAnimSegment& HAnimSegment1666 =  HAnimSegment();
HAnimSegment1666.setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1666);

HAnimSegment& HAnimSegment1667 =  HAnimSegment();
HAnimSegment1667.setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1667);

HAnimSegment& HAnimSegment1668 =  HAnimSegment();
HAnimSegment1668.setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1668);

HAnimSegment& HAnimSegment1669 =  HAnimSegment();
HAnimSegment1669.setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1669);

HAnimSegment& HAnimSegment1670 =  HAnimSegment();
HAnimSegment1670.setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1670);

HAnimSegment& HAnimSegment1671 =  HAnimSegment();
HAnimSegment1671.setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1671);

HAnimSegment& HAnimSegment1672 =  HAnimSegment();
HAnimSegment1672.setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1672);

HAnimSegment& HAnimSegment1673 =  HAnimSegment();
HAnimSegment1673.setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1673);

HAnimSegment& HAnimSegment1674 =  HAnimSegment();
HAnimSegment1674.setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1674);

HAnimSegment& HAnimSegment1675 =  HAnimSegment();
HAnimSegment1675.setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1675);

HAnimSegment& HAnimSegment1676 =  HAnimSegment();
HAnimSegment1676.setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1676);

HAnimSegment& HAnimSegment1677 =  HAnimSegment();
HAnimSegment1677.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid38.setSegments(&HAnimSegment1677);

HAnimSegment& HAnimSegment1678 =  HAnimSegment();
HAnimSegment1678.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid38.setSegments(&HAnimSegment1678);

HAnimSegment& HAnimSegment1679 =  HAnimSegment();
HAnimSegment1679.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid38.setSegments(&HAnimSegment1679);

HAnimSegment& HAnimSegment1680 =  HAnimSegment();
HAnimSegment1680.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid38.setSegments(&HAnimSegment1680);

HAnimSegment& HAnimSegment1681 =  HAnimSegment();
HAnimSegment1681.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid38.setSegments(&HAnimSegment1681);

HAnimSegment& HAnimSegment1682 =  HAnimSegment();
HAnimSegment1682.setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid38.setSegments(&HAnimSegment1682);

HAnimSegment& HAnimSegment1683 =  HAnimSegment();
HAnimSegment1683.setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid38.setSegments(&HAnimSegment1683);

HAnimSegment& HAnimSegment1684 =  HAnimSegment();
HAnimSegment1684.setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1684);

HAnimSegment& HAnimSegment1685 =  HAnimSegment();
HAnimSegment1685.setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1685);

HAnimSegment& HAnimSegment1686 =  HAnimSegment();
HAnimSegment1686.setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment1686);

HAnimSegment& HAnimSegment1687 =  HAnimSegment();
HAnimSegment1687.setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1687);

HAnimSegment& HAnimSegment1688 =  HAnimSegment();
HAnimSegment1688.setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1688);

HAnimSegment& HAnimSegment1689 =  HAnimSegment();
HAnimSegment1689.setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment1689);

HAnimSegment& HAnimSegment1690 =  HAnimSegment();
HAnimSegment1690.setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1690);

HAnimSegment& HAnimSegment1691 =  HAnimSegment();
HAnimSegment1691.setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1691);

HAnimSegment& HAnimSegment1692 =  HAnimSegment();
HAnimSegment1692.setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment1692);

HAnimSegment& HAnimSegment1693 =  HAnimSegment();
HAnimSegment1693.setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1693);

HAnimSegment& HAnimSegment1694 =  HAnimSegment();
HAnimSegment1694.setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1694);

HAnimSegment& HAnimSegment1695 =  HAnimSegment();
HAnimSegment1695.setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment1695);

HAnimSite& HAnimSite1696 =  HAnimSite();
HAnimSite1696.setUSE(CString("hanim_buttocks_standing_wall_contact_point"));
HAnimHumanoid38.setSites(&HAnimSite1696);

HAnimSite& HAnimSite1697 =  HAnimSite();
HAnimSite1697.setUSE(CString("hanim_crotch"));
HAnimHumanoid38.setSites(&HAnimSite1697);

HAnimSite& HAnimSite1698 =  HAnimSite();
HAnimSite1698.setUSE(CString("hanim_l_asis"));
HAnimHumanoid38.setSites(&HAnimSite1698);

HAnimSite& HAnimSite1699 =  HAnimSite();
HAnimSite1699.setUSE(CString("hanim_l_iliocristale"));
HAnimHumanoid38.setSites(&HAnimSite1699);

HAnimSite& HAnimSite1700 =  HAnimSite();
HAnimSite1700.setUSE(CString("hanim_l_psis"));
HAnimHumanoid38.setSites(&HAnimSite1700);

HAnimSite& HAnimSite1701 =  HAnimSite();
HAnimSite1701.setUSE(CString("hanim_l_trochanterion"));
HAnimHumanoid38.setSites(&HAnimSite1701);

HAnimSite& HAnimSite1702 =  HAnimSite();
HAnimSite1702.setUSE(CString("hanim_r_asis"));
HAnimHumanoid38.setSites(&HAnimSite1702);

HAnimSite& HAnimSite1703 =  HAnimSite();
HAnimSite1703.setUSE(CString("hanim_r_iliocristale"));
HAnimHumanoid38.setSites(&HAnimSite1703);

HAnimSite& HAnimSite1704 =  HAnimSite();
HAnimSite1704.setUSE(CString("hanim_r_psis"));
HAnimHumanoid38.setSites(&HAnimSite1704);

HAnimSite& HAnimSite1705 =  HAnimSite();
HAnimSite1705.setUSE(CString("hanim_r_trochanterion"));
HAnimHumanoid38.setSites(&HAnimSite1705);

HAnimSite& HAnimSite1706 =  HAnimSite();
HAnimSite1706.setUSE(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1706);

HAnimSite& HAnimSite1707 =  HAnimSite();
HAnimSite1707.setUSE(CString("hanim_l_femoral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1707);

HAnimSite& HAnimSite1708 =  HAnimSite();
HAnimSite1708.setUSE(CString("hanim_l_knee_crease"));
HAnimHumanoid38.setSites(&HAnimSite1708);

HAnimSite& HAnimSite1709 =  HAnimSite();
HAnimSite1709.setUSE(CString("hanim_l_suprapatella"));
HAnimHumanoid38.setSites(&HAnimSite1709);

HAnimSite& HAnimSite1710 =  HAnimSite();
HAnimSite1710.setUSE(CString("hanim_l_lateral_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite1710);

HAnimSite& HAnimSite1711 =  HAnimSite();
HAnimSite1711.setUSE(CString("hanim_l_medial_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite1711);

HAnimSite& HAnimSite1712 =  HAnimSite();
HAnimSite1712.setUSE(CString("hanim_l_tibiale"));
HAnimHumanoid38.setSites(&HAnimSite1712);

HAnimSite& HAnimSite1713 =  HAnimSite();
HAnimSite1713.setUSE(CString("hanim_l_calcaneus_posterior"));
HAnimHumanoid38.setSites(&HAnimSite1713);

HAnimSite& HAnimSite1714 =  HAnimSite();
HAnimSite1714.setUSE(CString("hanim_l_sphyrion"));
HAnimHumanoid38.setSites(&HAnimSite1714);

HAnimSite& HAnimSite1715 =  HAnimSite();
HAnimSite1715.setUSE(CString("hanim_l_metatarsal_phalanx_1"));
HAnimHumanoid38.setSites(&HAnimSite1715);

HAnimSite& HAnimSite1716 =  HAnimSite();
HAnimSite1716.setUSE(CString("hanim_l_metatarsal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite1716);

HAnimSite& HAnimSite1717 =  HAnimSite();
HAnimSite1717.setUSE(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid38.setSites(&HAnimSite1717);

HAnimSite& HAnimSite1718 =  HAnimSite();
HAnimSite1718.setUSE(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid38.setSites(&HAnimSite1718);

HAnimSite& HAnimSite1719 =  HAnimSite();
HAnimSite1719.setUSE(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid38.setSites(&HAnimSite1719);

HAnimSite& HAnimSite1720 =  HAnimSite();
HAnimSite1720.setUSE(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid38.setSites(&HAnimSite1720);

HAnimSite& HAnimSite1721 =  HAnimSite();
HAnimSite1721.setUSE(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid38.setSites(&HAnimSite1721);

HAnimSite& HAnimSite1722 =  HAnimSite();
HAnimSite1722.setUSE(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1722);

HAnimSite& HAnimSite1723 =  HAnimSite();
HAnimSite1723.setUSE(CString("hanim_r_femoral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1723);

HAnimSite& HAnimSite1724 =  HAnimSite();
HAnimSite1724.setUSE(CString("hanim_r_knee_crease"));
HAnimHumanoid38.setSites(&HAnimSite1724);

HAnimSite& HAnimSite1725 =  HAnimSite();
HAnimSite1725.setUSE(CString("hanim_r_suprapatella"));
HAnimHumanoid38.setSites(&HAnimSite1725);

HAnimSite& HAnimSite1726 =  HAnimSite();
HAnimSite1726.setUSE(CString("hanim_r_lateral_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite1726);

HAnimSite& HAnimSite1727 =  HAnimSite();
HAnimSite1727.setUSE(CString("hanim_r_medial_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite1727);

HAnimSite& HAnimSite1728 =  HAnimSite();
HAnimSite1728.setUSE(CString("hanim_r_tibiale"));
HAnimHumanoid38.setSites(&HAnimSite1728);

HAnimSite& HAnimSite1729 =  HAnimSite();
HAnimSite1729.setUSE(CString("hanim_r_calcaneus_posterior"));
HAnimHumanoid38.setSites(&HAnimSite1729);

HAnimSite& HAnimSite1730 =  HAnimSite();
HAnimSite1730.setUSE(CString("hanim_r_sphyrion"));
HAnimHumanoid38.setSites(&HAnimSite1730);

HAnimSite& HAnimSite1731 =  HAnimSite();
HAnimSite1731.setUSE(CString("hanim_r_metatarsal_phalanx_1"));
HAnimHumanoid38.setSites(&HAnimSite1731);

HAnimSite& HAnimSite1732 =  HAnimSite();
HAnimSite1732.setUSE(CString("hanim_r_metatarsal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite1732);

HAnimSite& HAnimSite1733 =  HAnimSite();
HAnimSite1733.setUSE(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid38.setSites(&HAnimSite1733);

HAnimSite& HAnimSite1734 =  HAnimSite();
HAnimSite1734.setUSE(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid38.setSites(&HAnimSite1734);

HAnimSite& HAnimSite1735 =  HAnimSite();
HAnimSite1735.setUSE(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid38.setSites(&HAnimSite1735);

HAnimSite& HAnimSite1736 =  HAnimSite();
HAnimSite1736.setUSE(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid38.setSites(&HAnimSite1736);

HAnimSite& HAnimSite1737 =  HAnimSite();
HAnimSite1737.setUSE(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid38.setSites(&HAnimSite1737);

HAnimSite& HAnimSite1738 =  HAnimSite();
HAnimSite1738.setUSE(CString("hanim_navel"));
HAnimHumanoid38.setSites(&HAnimSite1738);

HAnimSite& HAnimSite1739 =  HAnimSite();
HAnimSite1739.setUSE(CString("hanim_waist_preferred_anterior"));
HAnimHumanoid38.setSites(&HAnimSite1739);

HAnimSite& HAnimSite1740 =  HAnimSite();
HAnimSite1740.setUSE(CString("hanim_waist_preferred_posterior"));
HAnimHumanoid38.setSites(&HAnimSite1740);

HAnimSite& HAnimSite1741 =  HAnimSite();
HAnimSite1741.setUSE(CString("hanim_l_rib10"));
HAnimHumanoid38.setSites(&HAnimSite1741);

HAnimSite& HAnimSite1742 =  HAnimSite();
HAnimSite1742.setUSE(CString("hanim_r_rib10"));
HAnimHumanoid38.setSites(&HAnimSite1742);

HAnimSite& HAnimSite1743 =  HAnimSite();
HAnimSite1743.setUSE(CString("hanim_spine_2_middle_back"));
HAnimHumanoid38.setSites(&HAnimSite1743);

HAnimSite& HAnimSite1744 =  HAnimSite();
HAnimSite1744.setUSE(CString("hanim_substernale"));
HAnimHumanoid38.setSites(&HAnimSite1744);

HAnimSite& HAnimSite1745 =  HAnimSite();
HAnimSite1745.setUSE(CString("hanim_l_thelion"));
HAnimHumanoid38.setSites(&HAnimSite1745);

HAnimSite& HAnimSite1746 =  HAnimSite();
HAnimSite1746.setUSE(CString("hanim_r_thelion"));
HAnimHumanoid38.setSites(&HAnimSite1746);

HAnimSite& HAnimSite1747 =  HAnimSite();
HAnimSite1747.setUSE(CString("hanim_l_chest_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite1747);

HAnimSite& HAnimSite1748 =  HAnimSite();
HAnimSite1748.setUSE(CString("hanim_mesosternale"));
HAnimHumanoid38.setSites(&HAnimSite1748);

HAnimSite& HAnimSite1749 =  HAnimSite();
HAnimSite1749.setUSE(CString("hanim_r_chest_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite1749);

HAnimSite& HAnimSite1750 =  HAnimSite();
HAnimSite1750.setUSE(CString("hanim_rear_center_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite1750);

HAnimSite& HAnimSite1751 =  HAnimSite();
HAnimSite1751.setUSE(CString("hanim_spine_1_middle_back"));
HAnimHumanoid38.setSites(&HAnimSite1751);

HAnimSite& HAnimSite1752 =  HAnimSite();
HAnimSite1752.setUSE(CString("hanim_cervicale"));
HAnimHumanoid38.setSites(&HAnimSite1752);

HAnimSite& HAnimSite1753 =  HAnimSite();
HAnimSite1753.setUSE(CString("hanim_suprasternale"));
HAnimHumanoid38.setSites(&HAnimSite1753);

HAnimSite& HAnimSite1754 =  HAnimSite();
HAnimSite1754.setUSE(CString("hanim_l_neck_base"));
HAnimHumanoid38.setSites(&HAnimSite1754);

HAnimSite& HAnimSite1755 =  HAnimSite();
HAnimSite1755.setUSE(CString("hanim_r_neck_base"));
HAnimHumanoid38.setSites(&HAnimSite1755);

HAnimSite& HAnimSite1756 =  HAnimSite();
HAnimSite1756.setUSE(CString("hanim_adams_apple"));
HAnimHumanoid38.setSites(&HAnimSite1756);

HAnimSite& HAnimSite1757 =  HAnimSite();
HAnimSite1757.setUSE(CString("hanim_glabella"));
HAnimHumanoid38.setSites(&HAnimSite1757);

HAnimSite& HAnimSite1758 =  HAnimSite();
HAnimSite1758.setUSE(CString("hanim_l_ectocanthus"));
HAnimHumanoid38.setSites(&HAnimSite1758);

HAnimSite& HAnimSite1759 =  HAnimSite();
HAnimSite1759.setUSE(CString("hanim_l_infraorbitale"));
HAnimHumanoid38.setSites(&HAnimSite1759);

HAnimSite& HAnimSite1760 =  HAnimSite();
HAnimSite1760.setUSE(CString("hanim_l_tragion"));
HAnimHumanoid38.setSites(&HAnimSite1760);

HAnimSite& HAnimSite1761 =  HAnimSite();
HAnimSite1761.setUSE(CString("hanim_nuchale"));
HAnimHumanoid38.setSites(&HAnimSite1761);

HAnimSite& HAnimSite1762 =  HAnimSite();
HAnimSite1762.setUSE(CString("hanim_opisthocranion"));
HAnimHumanoid38.setSites(&HAnimSite1762);

HAnimSite& HAnimSite1763 =  HAnimSite();
HAnimSite1763.setUSE(CString("hanim_r_ectocanthus"));
HAnimHumanoid38.setSites(&HAnimSite1763);

HAnimSite& HAnimSite1764 =  HAnimSite();
HAnimSite1764.setUSE(CString("hanim_r_infraorbitale"));
HAnimHumanoid38.setSites(&HAnimSite1764);

HAnimSite& HAnimSite1765 =  HAnimSite();
HAnimSite1765.setUSE(CString("hanim_r_tragion"));
HAnimHumanoid38.setSites(&HAnimSite1765);

HAnimSite& HAnimSite1766 =  HAnimSite();
HAnimSite1766.setUSE(CString("hanim_sellion"));
HAnimHumanoid38.setSites(&HAnimSite1766);

HAnimSite& HAnimSite1767 =  HAnimSite();
HAnimSite1767.setUSE(CString("hanim_skull_vertex"));
HAnimHumanoid38.setSites(&HAnimSite1767);

HAnimSite& HAnimSite1768 =  HAnimSite();
HAnimSite1768.setUSE(CString("hanim_l_acromion"));
HAnimHumanoid38.setSites(&HAnimSite1768);

HAnimSite& HAnimSite1769 =  HAnimSite();
HAnimSite1769.setUSE(CString("hanim_l_axilla_distal"));
HAnimHumanoid38.setSites(&HAnimSite1769);

HAnimSite& HAnimSite1770 =  HAnimSite();
HAnimSite1770.setUSE(CString("hanim_l_axilla_posterior_folds"));
HAnimHumanoid38.setSites(&HAnimSite1770);

HAnimSite& HAnimSite1771 =  HAnimSite();
HAnimSite1771.setUSE(CString("hanim_l_axilla_proximal"));
HAnimHumanoid38.setSites(&HAnimSite1771);

HAnimSite& HAnimSite1772 =  HAnimSite();
HAnimSite1772.setUSE(CString("hanim_l_clavicale"));
HAnimHumanoid38.setSites(&HAnimSite1772);

HAnimSite& HAnimSite1773 =  HAnimSite();
HAnimSite1773.setUSE(CString("hanim_l_bideltoid"));
HAnimHumanoid38.setSites(&HAnimSite1773);

HAnimSite& HAnimSite1774 =  HAnimSite();
HAnimSite1774.setUSE(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1774);

HAnimSite& HAnimSite1775 =  HAnimSite();
HAnimSite1775.setUSE(CString("hanim_l_humeral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1775);

HAnimSite& HAnimSite1776 =  HAnimSite();
HAnimSite1776.setUSE(CString("hanim_l_olecranon"));
HAnimHumanoid38.setSites(&HAnimSite1776);

HAnimSite& HAnimSite1777 =  HAnimSite();
HAnimSite1777.setUSE(CString("hanim_l_radial_styloid"));
HAnimHumanoid38.setSites(&HAnimSite1777);

HAnimSite& HAnimSite1778 =  HAnimSite();
HAnimSite1778.setUSE(CString("hanim_l_radiale"));
HAnimHumanoid38.setSites(&HAnimSite1778);

HAnimSite& HAnimSite1779 =  HAnimSite();
HAnimSite1779.setUSE(CString("hanim_l_ulnar_styloid"));
HAnimHumanoid38.setSites(&HAnimSite1779);

HAnimSite& HAnimSite1780 =  HAnimSite();
HAnimSite1780.setUSE(CString("hanim_l_metacarpal_phalanx_2"));
HAnimHumanoid38.setSites(&HAnimSite1780);

HAnimSite& HAnimSite1781 =  HAnimSite();
HAnimSite1781.setUSE(CString("hanim_l_metacarpal_phalanx_3"));
HAnimHumanoid38.setSites(&HAnimSite1781);

HAnimSite& HAnimSite1782 =  HAnimSite();
HAnimSite1782.setUSE(CString("hanim_l_metacarpal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite1782);

HAnimSite& HAnimSite1783 =  HAnimSite();
HAnimSite1783.setUSE(CString("hanim_r_acromion"));
HAnimHumanoid38.setSites(&HAnimSite1783);

HAnimSite& HAnimSite1784 =  HAnimSite();
HAnimSite1784.setUSE(CString("hanim_r_axilla_distal"));
HAnimHumanoid38.setSites(&HAnimSite1784);

HAnimSite& HAnimSite1785 =  HAnimSite();
HAnimSite1785.setUSE(CString("hanim_r_axilla_posterior_folds"));
HAnimHumanoid38.setSites(&HAnimSite1785);

HAnimSite& HAnimSite1786 =  HAnimSite();
HAnimSite1786.setUSE(CString("hanim_r_axilla_proximal"));
HAnimHumanoid38.setSites(&HAnimSite1786);

HAnimSite& HAnimSite1787 =  HAnimSite();
HAnimSite1787.setUSE(CString("hanim_r_clavicale"));
HAnimHumanoid38.setSites(&HAnimSite1787);

HAnimSite& HAnimSite1788 =  HAnimSite();
HAnimSite1788.setUSE(CString("hanim_r_bideltoid"));
HAnimHumanoid38.setSites(&HAnimSite1788);

HAnimSite& HAnimSite1789 =  HAnimSite();
HAnimSite1789.setUSE(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1789);

HAnimSite& HAnimSite1790 =  HAnimSite();
HAnimSite1790.setUSE(CString("hanim_r_humeral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite1790);

HAnimSite& HAnimSite1791 =  HAnimSite();
HAnimSite1791.setUSE(CString("hanim_r_olecranon"));
HAnimHumanoid38.setSites(&HAnimSite1791);

HAnimSite& HAnimSite1792 =  HAnimSite();
HAnimSite1792.setUSE(CString("hanim_r_radial_styloid"));
HAnimHumanoid38.setSites(&HAnimSite1792);

HAnimSite& HAnimSite1793 =  HAnimSite();
HAnimSite1793.setUSE(CString("hanim_r_radiale"));
HAnimHumanoid38.setSites(&HAnimSite1793);

HAnimSite& HAnimSite1794 =  HAnimSite();
HAnimSite1794.setUSE(CString("hanim_r_ulnar_styloid"));
HAnimHumanoid38.setSites(&HAnimSite1794);

HAnimSite& HAnimSite1795 =  HAnimSite();
HAnimSite1795.setUSE(CString("hanim_r_metacarpal_phalanx_2"));
HAnimHumanoid38.setSites(&HAnimSite1795);

HAnimSite& HAnimSite1796 =  HAnimSite();
HAnimSite1796.setUSE(CString("hanim_r_metacarpal_phalanx_3"));
HAnimHumanoid38.setSites(&HAnimSite1796);

HAnimSite& HAnimSite1797 =  HAnimSite();
HAnimSite1797.setUSE(CString("hanim_r_metacarpal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite1797);

Scene11.addChild(&HAnimHumanoid38);

X3D0.setScene(&Scene11);

}
