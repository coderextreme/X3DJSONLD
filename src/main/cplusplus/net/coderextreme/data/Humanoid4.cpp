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
Coordinate217.setPoint(new float[]{0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097}, 6);
LineSet216.setCoord(Coordinate217);

//from l_talocrural to l_talocalcaneonavicular vertices 2
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

Shape& Shape233 =  Shape();
LineSet& LineSet234 =  LineSet();
LineSet234.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate235 =  Coordinate();
Coordinate235.setPoint(new float[]{0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278}, 6);
LineSet234.setCoord(Coordinate235);

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA& ColorRGBA236 =  ColorRGBA();
ColorRGBA236.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet234.addChild(&ColorRGBA236);

Shape233.setGeometry(&LineSet234);

HAnimSegment211.addChild(&Shape233);

HAnimJoint210.addChildren(&HAnimSegment211);

HAnimJoint& HAnimJoint237 =  HAnimJoint();
HAnimJoint237.X3DNode::setName(CString("l_talocalcaneonavicular"));
HAnimJoint237.setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint237.setCenter(new float[]{0.0781,0.0283,-0.097});
HAnimSegment& HAnimSegment238 =  HAnimSegment();
HAnimSegment238.X3DNode::setName(CString("l_navicular"));
HAnimSegment238.setDEF(CString("hanim_l_navicular"));
Transform& Transform239 =  Transform();
Transform239.setTranslation(new float[]{0.0781,0.0283,-0.097});
Transform& Transform240 =  Transform();
//Empty Transform
Shape& Shape241 =  Shape();
Shape241.setUSE(CString("HAnimJointShape"));
Transform240.addChild(&Shape241);

Transform239.addChild(&Transform240);

HAnimSegment238.addChild(&Transform239);

Shape& Shape242 =  Shape();
LineSet& LineSet243 =  LineSet();
LineSet243.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate244 =  Coordinate();
Coordinate244.setPoint(new float[]{0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835}, 6);
LineSet243.setCoord(Coordinate244);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA& ColorRGBA245 =  ColorRGBA();
ColorRGBA245.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet243.addChild(&ColorRGBA245);

Shape242.setGeometry(&LineSet243);

HAnimSegment238.addChild(&Shape242);

Shape& Shape246 =  Shape();
LineSet& LineSet247 =  LineSet();
LineSet247.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate248 =  Coordinate();
Coordinate248.setPoint(new float[]{0.0781,0.0283,-0.097,0.0812,0.025,-0.0805}, 6);
LineSet247.setCoord(Coordinate248);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA& ColorRGBA249 =  ColorRGBA();
ColorRGBA249.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet247.addChild(&ColorRGBA249);

Shape246.setGeometry(&LineSet247);

HAnimSegment238.addChild(&Shape246);

Shape& Shape250 =  Shape();
LineSet& LineSet251 =  LineSet();
LineSet251.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate252 =  Coordinate();
Coordinate252.setPoint(new float[]{0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821}, 6);
LineSet251.setCoord(Coordinate252);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA& ColorRGBA253 =  ColorRGBA();
ColorRGBA253.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet251.addChild(&ColorRGBA253);

Shape250.setGeometry(&LineSet251);

HAnimSegment238.addChild(&Shape250);

HAnimJoint237.addChildren(&HAnimSegment238);

HAnimJoint& HAnimJoint254 =  HAnimJoint();
HAnimJoint254.X3DNode::setName(CString("l_cuneonavicular_1"));
HAnimJoint254.setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint254.setCenter(new float[]{0.0672,0.0235,-0.0835});
HAnimSegment& HAnimSegment255 =  HAnimSegment();
HAnimSegment255.X3DNode::setName(CString("l_cuneiform_1"));
HAnimSegment255.setDEF(CString("hanim_l_cuneiform_1"));
Transform& Transform256 =  Transform();
Transform256.setTranslation(new float[]{0.0672,0.0235,-0.0835});
Transform& Transform257 =  Transform();
//Empty Transform
Shape& Shape258 =  Shape();
Shape258.setUSE(CString("HAnimJointShape"));
Transform257.addChild(&Shape258);

Transform256.addChild(&Transform257);

HAnimSegment255.addChild(&Transform256);

Shape& Shape259 =  Shape();
LineSet& LineSet260 =  LineSet();
LineSet260.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate261 =  Coordinate();
Coordinate261.setPoint(new float[]{0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577}, 6);
LineSet260.setCoord(Coordinate261);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA& ColorRGBA262 =  ColorRGBA();
ColorRGBA262.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet260.addChild(&ColorRGBA262);

Shape259.setGeometry(&LineSet260);

HAnimSegment255.addChild(&Shape259);

HAnimJoint254.addChildren(&HAnimSegment255);

HAnimJoint& HAnimJoint263 =  HAnimJoint();
HAnimJoint263.X3DNode::setName(CString("l_tarsometatarsal_1"));
HAnimJoint263.setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint263.setCenter(new float[]{0.0644,0.0147,-0.0577});
HAnimSegment& HAnimSegment264 =  HAnimSegment();
HAnimSegment264.X3DNode::setName(CString("l_metatarsal_1"));
HAnimSegment264.setDEF(CString("hanim_l_metatarsal_1"));
Transform& Transform265 =  Transform();
Transform265.setTranslation(new float[]{0.0644,0.0147,-0.0577});
Transform& Transform266 =  Transform();
//Empty Transform
Shape& Shape267 =  Shape();
Shape267.setUSE(CString("HAnimJointShape"));
Transform266.addChild(&Shape267);

Transform265.addChild(&Transform266);

HAnimSegment264.addChild(&Transform265);

Shape& Shape268 =  Shape();
LineSet& LineSet269 =  LineSet();
LineSet269.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate270 =  Coordinate();
Coordinate270.setPoint(new float[]{0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083}, 6);
LineSet269.setCoord(Coordinate270);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA& ColorRGBA271 =  ColorRGBA();
ColorRGBA271.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet269.addChild(&ColorRGBA271);

Shape268.setGeometry(&LineSet269);

HAnimSegment264.addChild(&Shape268);

HAnimJoint263.addChildren(&HAnimSegment264);

HAnimJoint& HAnimJoint272 =  HAnimJoint();
HAnimJoint272.X3DNode::setName(CString("l_metatarsophalangeal_1"));
HAnimJoint272.setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint272.setCenter(new float[]{0.0619,0.0059,-0.0083});
HAnimSegment& HAnimSegment273 =  HAnimSegment();
HAnimSegment273.X3DNode::setName(CString("l_tarsal_proximal_phalanx_1"));
HAnimSegment273.setDEF(CString("hanim_l_tarsal_proximal_phalanx_1"));
Transform& Transform274 =  Transform();
Transform274.setTranslation(new float[]{0.0619,0.0059,-0.0083});
Transform& Transform275 =  Transform();
//Empty Transform
Shape& Shape276 =  Shape();
Shape276.setUSE(CString("HAnimJointShape"));
Transform275.addChild(&Shape276);

Transform274.addChild(&Transform275);

HAnimSegment273.addChild(&Transform274);

Shape& Shape277 =  Shape();
LineSet& LineSet278 =  LineSet();
LineSet278.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate279 =  Coordinate();
Coordinate279.setPoint(new float[]{0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083}, 6);
LineSet278.setCoord(Coordinate279);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA280 =  ColorRGBA();
ColorRGBA280.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet278.addChild(&ColorRGBA280);

Shape277.setGeometry(&LineSet278);

HAnimSegment273.addChild(&Shape277);

HAnimSite& HAnimSite281 =  HAnimSite();
HAnimSite281.X3DNode::setName(CString("l_metatarsal_phalanx_1"));
HAnimSite281.setDEF(CString("hanim_l_metatarsal_phalanx_1"));
TouchSensor& TouchSensor282 =  TouchSensor();
TouchSensor282.setDescription(CString("HAnimSite 55 l_metatarsal_phalanx_1"));
HAnimSite281.addChild(&TouchSensor282);

Shape& Shape283 =  Shape();
Shape283.setUSE(CString("HAnimSiteShape"));
HAnimSite281.addChild(&Shape283);

Billboard& Billboard284 =  Billboard();
Shape& Shape285 =  Shape();
Text& Text286 =  Text();
Text286.setString(new CString[]{CString("55")}, 1);
CFontStyle& FontStyle287 =  CFontStyle();
FontStyle287.setSize(0.035);
Text286.setFontStyle(&FontStyle287);

Shape285.setGeometry(&Text286);

Billboard284.addChild(&Shape285);

HAnimSite281.addChild(Billboard284);

HAnimSegment273.addChild(&HAnimSite281);

HAnimJoint272.addChildren(&HAnimSegment273);

HAnimJoint& HAnimJoint288 =  HAnimJoint();
HAnimJoint288.X3DNode::setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint288.setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint272.addChildren(&HAnimJoint288);

HAnimJoint263.addChildren(&HAnimJoint272);

HAnimJoint254.addChildren(&HAnimJoint263);

HAnimJoint237.addChildren(&HAnimJoint254);

HAnimJoint& HAnimJoint289 =  HAnimJoint();
HAnimJoint289.X3DNode::setName(CString("l_cuneonavicular_2"));
HAnimJoint289.setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint289.setCenter(new float[]{0.0812,0.025,-0.0805});
HAnimSegment& HAnimSegment290 =  HAnimSegment();
HAnimSegment290.X3DNode::setName(CString("l_cuneiform_2"));
HAnimSegment290.setDEF(CString("hanim_l_cuneiform_2"));
Transform& Transform291 =  Transform();
Transform291.setTranslation(new float[]{0.0812,0.025,-0.0805});
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
Coordinate296.setPoint(new float[]{0.0812,0.025,-0.0805,0.08,0.0175,-0.0608}, 6);
LineSet295.setCoord(Coordinate296);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA297 =  ColorRGBA();
ColorRGBA297.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet295.addChild(&ColorRGBA297);

Shape294.setGeometry(&LineSet295);

HAnimSegment290.addChild(&Shape294);

HAnimJoint289.addChildren(&HAnimSegment290);

HAnimJoint& HAnimJoint298 =  HAnimJoint();
HAnimJoint298.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint298.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint298.setCenter(new float[]{0.08,0.0175,-0.0608});
HAnimSegment& HAnimSegment299 =  HAnimSegment();
HAnimSegment299.X3DNode::setName(CString("l_metatarsal_2"));
HAnimSegment299.setDEF(CString("hanim_l_metatarsal_2"));
Transform& Transform300 =  Transform();
Transform300.setTranslation(new float[]{0.08,0.0175,-0.0608});
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
Coordinate305.setPoint(new float[]{0.08,0.0175,-0.0608,0.0824,0.0064,-0.004}, 6);
LineSet304.setCoord(Coordinate305);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA306 =  ColorRGBA();
ColorRGBA306.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet304.addChild(&ColorRGBA306);

Shape303.setGeometry(&LineSet304);

HAnimSegment299.addChild(&Shape303);

HAnimJoint298.addChildren(&HAnimSegment299);

HAnimJoint& HAnimJoint307 =  HAnimJoint();
HAnimJoint307.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint307.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint307.setCenter(new float[]{0.0824,0.0064,-0.004});
HAnimSegment& HAnimSegment308 =  HAnimSegment();
HAnimSegment308.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment308.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform& Transform309 =  Transform();
Transform309.setTranslation(new float[]{0.0824,0.0064,-0.004});
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
Coordinate314.setPoint(new float[]{0.0824,0.0064,-0.004,0.0841,0.0041,0.0121}, 6);
LineSet313.setCoord(Coordinate314);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA315 =  ColorRGBA();
ColorRGBA315.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet313.addChild(&ColorRGBA315);

Shape312.setGeometry(&LineSet313);

HAnimSegment308.addChild(&Shape312);

HAnimJoint307.addChildren(&HAnimSegment308);

HAnimJoint& HAnimJoint316 =  HAnimJoint();
HAnimJoint316.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint316.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint316.setCenter(new float[]{0.0841,0.0041,0.0121});
HAnimSegment& HAnimSegment317 =  HAnimSegment();
HAnimSegment317.X3DNode::setName(CString("l_tarsal_middle_phalanx_2"));
HAnimSegment317.setDEF(CString("hanim_l_tarsal_middle_phalanx_2"));
Transform& Transform318 =  Transform();
Transform318.setTranslation(new float[]{0.0841,0.0041,0.0121});
Transform& Transform319 =  Transform();
//Empty Transform
Shape& Shape320 =  Shape();
Shape320.setUSE(CString("HAnimJointShape"));
Transform319.addChild(&Shape320);

Transform318.addChild(&Transform319);

HAnimSegment317.addChild(&Transform318);

Shape& Shape321 =  Shape();
LineSet& LineSet322 =  LineSet();
LineSet322.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate323 =  Coordinate();
Coordinate323.setPoint(new float[]{0.0841,0.0041,0.0121,0.0841,0.0013,0.0216}, 6);
LineSet322.setCoord(Coordinate323);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA324 =  ColorRGBA();
ColorRGBA324.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet322.addChild(&ColorRGBA324);

Shape321.setGeometry(&LineSet322);

HAnimSegment317.addChild(&Shape321);

HAnimJoint316.addChildren(&HAnimSegment317);

HAnimJoint& HAnimJoint325 =  HAnimJoint();
HAnimJoint325.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint325.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint325.setCenter(new float[]{0.0841,0.0013,0.0216});
HAnimJoint316.addChildren(&HAnimJoint325);

HAnimJoint307.addChildren(&HAnimJoint316);

HAnimJoint298.addChildren(&HAnimJoint307);

HAnimJoint289.addChildren(&HAnimJoint298);

HAnimJoint237.addChildren(&HAnimJoint289);

HAnimJoint& HAnimJoint326 =  HAnimJoint();
HAnimJoint326.X3DNode::setName(CString("l_cuneonavicular_3"));
HAnimJoint326.setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint326.setCenter(new float[]{0.0928,0.0248,-0.0821});
HAnimSegment& HAnimSegment327 =  HAnimSegment();
HAnimSegment327.X3DNode::setName(CString("l_cuneiform_3"));
HAnimSegment327.setDEF(CString("hanim_l_cuneiform_3"));
Transform& Transform328 =  Transform();
Transform328.setTranslation(new float[]{0.0928,0.0248,-0.0821});
Transform& Transform329 =  Transform();
//Empty Transform
Shape& Shape330 =  Shape();
Shape330.setUSE(CString("HAnimJointShape"));
Transform329.addChild(&Shape330);

Transform328.addChild(&Transform329);

HAnimSegment327.addChild(&Transform328);

Shape& Shape331 =  Shape();
LineSet& LineSet332 =  LineSet();
LineSet332.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate333 =  Coordinate();
Coordinate333.setPoint(new float[]{0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625}, 6);
LineSet332.setCoord(Coordinate333);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA& ColorRGBA334 =  ColorRGBA();
ColorRGBA334.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet332.addChild(&ColorRGBA334);

Shape331.setGeometry(&LineSet332);

HAnimSegment327.addChild(&Shape331);

HAnimJoint326.addChildren(&HAnimSegment327);

HAnimJoint& HAnimJoint335 =  HAnimJoint();
HAnimJoint335.X3DNode::setName(CString("l_tarsometatarsal_3"));
HAnimJoint335.setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint335.setCenter(new float[]{0.0944,0.0175,-0.0625});
HAnimSegment& HAnimSegment336 =  HAnimSegment();
HAnimSegment336.X3DNode::setName(CString("l_metatarsal_3"));
HAnimSegment336.setDEF(CString("hanim_l_metatarsal_3"));
Transform& Transform337 =  Transform();
Transform337.setTranslation(new float[]{0.0944,0.0175,-0.0625});
Transform& Transform338 =  Transform();
//Empty Transform
Shape& Shape339 =  Shape();
Shape339.setUSE(CString("HAnimJointShape"));
Transform338.addChild(&Shape339);

Transform337.addChild(&Transform338);

HAnimSegment336.addChild(&Transform337);

Shape& Shape340 =  Shape();
LineSet& LineSet341 =  LineSet();
LineSet341.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate342 =  Coordinate();
Coordinate342.setPoint(new float[]{0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065}, 6);
LineSet341.setCoord(Coordinate342);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA& ColorRGBA343 =  ColorRGBA();
ColorRGBA343.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet341.addChild(&ColorRGBA343);

Shape340.setGeometry(&LineSet341);

HAnimSegment336.addChild(&Shape340);

HAnimJoint335.addChildren(&HAnimSegment336);

HAnimJoint& HAnimJoint344 =  HAnimJoint();
HAnimJoint344.X3DNode::setName(CString("l_metatarsophalangeal_3"));
HAnimJoint344.setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint344.setCenter(new float[]{0.0963,0.0065,-0.0065});
HAnimSegment& HAnimSegment345 =  HAnimSegment();
HAnimSegment345.X3DNode::setName(CString("l_tarsal_proximal_phalanx_3"));
HAnimSegment345.setDEF(CString("hanim_l_tarsal_proximal_phalanx_3"));
Transform& Transform346 =  Transform();
Transform346.setTranslation(new float[]{0.0963,0.0065,-0.0065});
Transform& Transform347 =  Transform();
//Empty Transform
Shape& Shape348 =  Shape();
Shape348.setUSE(CString("HAnimJointShape"));
Transform347.addChild(&Shape348);

Transform346.addChild(&Transform347);

HAnimSegment345.addChild(&Transform346);

Shape& Shape349 =  Shape();
LineSet& LineSet350 =  LineSet();
LineSet350.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate351 =  Coordinate();
Coordinate351.setPoint(new float[]{0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086}, 6);
LineSet350.setCoord(Coordinate351);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA352 =  ColorRGBA();
ColorRGBA352.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet350.addChild(&ColorRGBA352);

Shape349.setGeometry(&LineSet350);

HAnimSegment345.addChild(&Shape349);

HAnimJoint344.addChildren(&HAnimSegment345);

HAnimJoint& HAnimJoint353 =  HAnimJoint();
HAnimJoint353.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint353.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint353.setCenter(new float[]{0.0987,0.0034,0.0086});
HAnimSegment& HAnimSegment354 =  HAnimSegment();
HAnimSegment354.X3DNode::setName(CString("l_tarsal_middle_phalanx_3"));
HAnimSegment354.setDEF(CString("hanim_l_tarsal_middle_phalanx_3"));
Transform& Transform355 =  Transform();
Transform355.setTranslation(new float[]{0.0987,0.0034,0.0086});
Transform& Transform356 =  Transform();
//Empty Transform
Shape& Shape357 =  Shape();
Shape357.setUSE(CString("HAnimJointShape"));
Transform356.addChild(&Shape357);

Transform355.addChild(&Transform356);

HAnimSegment354.addChild(&Transform355);

Shape& Shape358 =  Shape();
LineSet& LineSet359 =  LineSet();
LineSet359.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate360 =  Coordinate();
Coordinate360.setPoint(new float[]{0.0987,0.0034,0.0086,0.1002,0.0013,0.0178}, 6);
LineSet359.setCoord(Coordinate360);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA361 =  ColorRGBA();
ColorRGBA361.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet359.addChild(&ColorRGBA361);

Shape358.setGeometry(&LineSet359);

HAnimSegment354.addChild(&Shape358);

HAnimJoint353.addChildren(&HAnimSegment354);

HAnimJoint& HAnimJoint362 =  HAnimJoint();
HAnimJoint362.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint362.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint362.setCenter(new float[]{0.1002,0.0013,0.0178});
HAnimJoint353.addChildren(&HAnimJoint362);

HAnimJoint344.addChildren(&HAnimJoint353);

HAnimJoint335.addChildren(&HAnimJoint344);

HAnimJoint326.addChildren(&HAnimJoint335);

HAnimJoint237.addChildren(&HAnimJoint326);

HAnimJoint210.addChildren(&HAnimJoint237);

HAnimJoint& HAnimJoint363 =  HAnimJoint();
HAnimJoint363.X3DNode::setName(CString("l_calcaneocuboid"));
HAnimJoint363.setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint363.setCenter(new float[]{0.0889,0.0494,-0.1278});
HAnimSegment& HAnimSegment364 =  HAnimSegment();
HAnimSegment364.X3DNode::setName(CString("l_calcaneus"));
HAnimSegment364.setDEF(CString("hanim_l_calcaneus"));
Transform& Transform365 =  Transform();
Transform365.setTranslation(new float[]{0.0889,0.0494,-0.1278});
Transform& Transform366 =  Transform();
//Empty Transform
Shape& Shape367 =  Shape();
Shape367.setUSE(CString("HAnimJointShape"));
Transform366.addChild(&Shape367);

Transform365.addChild(&Transform366);

HAnimSegment364.addChild(&Transform365);

Shape& Shape368 =  Shape();
LineSet& LineSet369 =  LineSet();
LineSet369.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate370 =  Coordinate();
Coordinate370.setPoint(new float[]{0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998}, 6);
LineSet369.setCoord(Coordinate370);

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA& ColorRGBA371 =  ColorRGBA();
ColorRGBA371.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet369.addChild(&ColorRGBA371);

Shape368.setGeometry(&LineSet369);

HAnimSegment364.addChild(&Shape368);

HAnimJoint363.addChildren(&HAnimSegment364);

HAnimJoint& HAnimJoint372 =  HAnimJoint();
HAnimJoint372.X3DNode::setName(CString("l_transversetarsal"));
HAnimJoint372.setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint372.setCenter(new float[]{0.1105,0.0267,-0.0998});
HAnimSegment& HAnimSegment373 =  HAnimSegment();
HAnimSegment373.X3DNode::setName(CString("l_cuboid"));
HAnimSegment373.setDEF(CString("hanim_l_cuboid"));
Transform& Transform374 =  Transform();
Transform374.setTranslation(new float[]{0.1105,0.0267,-0.0998});
Transform& Transform375 =  Transform();
//Empty Transform
Shape& Shape376 =  Shape();
Shape376.setUSE(CString("HAnimJointShape"));
Transform375.addChild(&Shape376);

Transform374.addChild(&Transform375);

HAnimSegment373.addChild(&Transform374);

Shape& Shape377 =  Shape();
LineSet& LineSet378 =  LineSet();
LineSet378.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate379 =  Coordinate();
Coordinate379.setPoint(new float[]{0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634}, 6);
LineSet378.setCoord(Coordinate379);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA& ColorRGBA380 =  ColorRGBA();
ColorRGBA380.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet378.addChild(&ColorRGBA380);

Shape377.setGeometry(&LineSet378);

HAnimSegment373.addChild(&Shape377);

Shape& Shape381 =  Shape();
LineSet& LineSet382 =  LineSet();
LineSet382.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate383 =  Coordinate();
Coordinate383.setPoint(new float[]{0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671}, 6);
LineSet382.setCoord(Coordinate383);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA& ColorRGBA384 =  ColorRGBA();
ColorRGBA384.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet382.addChild(&ColorRGBA384);

Shape381.setGeometry(&LineSet382);

HAnimSegment373.addChild(&Shape381);

HAnimJoint372.addChildren(&HAnimSegment373);

HAnimJoint& HAnimJoint385 =  HAnimJoint();
HAnimJoint385.X3DNode::setName(CString("l_tarsometatarsal_4"));
HAnimJoint385.setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint385.setCenter(new float[]{0.1063,0.016,-0.0634});
HAnimSegment& HAnimSegment386 =  HAnimSegment();
HAnimSegment386.X3DNode::setName(CString("l_metatarsal_4"));
HAnimSegment386.setDEF(CString("hanim_l_metatarsal_4"));
Transform& Transform387 =  Transform();
Transform387.setTranslation(new float[]{0.1063,0.016,-0.0634});
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
Coordinate392.setPoint(new float[]{0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107}, 6);
LineSet391.setCoord(Coordinate392);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA& ColorRGBA393 =  ColorRGBA();
ColorRGBA393.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet391.addChild(&ColorRGBA393);

Shape390.setGeometry(&LineSet391);

HAnimSegment386.addChild(&Shape390);

HAnimJoint385.addChildren(&HAnimSegment386);

HAnimJoint& HAnimJoint394 =  HAnimJoint();
HAnimJoint394.X3DNode::setName(CString("l_metatarsophalangeal_4"));
HAnimJoint394.setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint394.setCenter(new float[]{0.1097,0.0058,-0.0107});
HAnimSegment& HAnimSegment395 =  HAnimSegment();
HAnimSegment395.X3DNode::setName(CString("l_tarsal_proximal_phalanx_4"));
HAnimSegment395.setDEF(CString("hanim_l_tarsal_proximal_phalanx_4"));
Transform& Transform396 =  Transform();
Transform396.setTranslation(new float[]{0.1097,0.0058,-0.0107});
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
Coordinate401.setPoint(new float[]{0.1097,0.0058,-0.0107,0.114,0.0037,0.0044}, 6);
LineSet400.setCoord(Coordinate401);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA402 =  ColorRGBA();
ColorRGBA402.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet400.addChild(&ColorRGBA402);

Shape399.setGeometry(&LineSet400);

HAnimSegment395.addChild(&Shape399);

HAnimJoint394.addChildren(&HAnimSegment395);

HAnimJoint& HAnimJoint403 =  HAnimJoint();
HAnimJoint403.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint403.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint403.setCenter(new float[]{0.114,0.0037,0.0044});
HAnimSegment& HAnimSegment404 =  HAnimSegment();
HAnimSegment404.X3DNode::setName(CString("l_tarsal_middle_phalanx_4"));
HAnimSegment404.setDEF(CString("hanim_l_tarsal_middle_phalanx_4"));
Transform& Transform405 =  Transform();
Transform405.setTranslation(new float[]{0.114,0.0037,0.0044});
Transform& Transform406 =  Transform();
//Empty Transform
Shape& Shape407 =  Shape();
Shape407.setUSE(CString("HAnimJointShape"));
Transform406.addChild(&Shape407);

Transform405.addChild(&Transform406);

HAnimSegment404.addChild(&Transform405);

Shape& Shape408 =  Shape();
LineSet& LineSet409 =  LineSet();
LineSet409.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate410 =  Coordinate();
Coordinate410.setPoint(new float[]{0.114,0.0037,0.0044,0.1155,0.0008,0.0118}, 6);
LineSet409.setCoord(Coordinate410);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA411 =  ColorRGBA();
ColorRGBA411.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet409.addChild(&ColorRGBA411);

Shape408.setGeometry(&LineSet409);

HAnimSegment404.addChild(&Shape408);

HAnimJoint403.addChildren(&HAnimSegment404);

HAnimJoint& HAnimJoint412 =  HAnimJoint();
HAnimJoint412.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint412.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint412.setCenter(new float[]{0.1155,0.0008,0.0118});
HAnimJoint403.addChildren(&HAnimJoint412);

HAnimJoint394.addChildren(&HAnimJoint403);

HAnimJoint385.addChildren(&HAnimJoint394);

HAnimJoint372.addChildren(&HAnimJoint385);

HAnimJoint& HAnimJoint413 =  HAnimJoint();
HAnimJoint413.X3DNode::setName(CString("l_tarsometatarsal_5"));
HAnimJoint413.setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint413.setCenter(new float[]{0.1206,0.0124,-0.0671});
HAnimSegment& HAnimSegment414 =  HAnimSegment();
HAnimSegment414.X3DNode::setName(CString("l_metatarsal_5"));
HAnimSegment414.setDEF(CString("hanim_l_metatarsal_5"));
Transform& Transform415 =  Transform();
Transform415.setTranslation(new float[]{0.1206,0.0124,-0.0671});
Transform& Transform416 =  Transform();
//Empty Transform
Shape& Shape417 =  Shape();
Shape417.setUSE(CString("HAnimJointShape"));
Transform416.addChild(&Shape417);

Transform415.addChild(&Transform416);

HAnimSegment414.addChild(&Transform415);

Shape& Shape418 =  Shape();
LineSet& LineSet419 =  LineSet();
LineSet419.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate420 =  Coordinate();
Coordinate420.setPoint(new float[]{0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153}, 6);
LineSet419.setCoord(Coordinate420);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA& ColorRGBA421 =  ColorRGBA();
ColorRGBA421.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet419.addChild(&ColorRGBA421);

Shape418.setGeometry(&LineSet419);

HAnimSegment414.addChild(&Shape418);

HAnimJoint413.addChildren(&HAnimSegment414);

HAnimJoint& HAnimJoint422 =  HAnimJoint();
HAnimJoint422.X3DNode::setName(CString("l_metatarsophalangeal_5"));
HAnimJoint422.setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint422.setCenter(new float[]{0.1239,0.0051,-0.0153});
HAnimSegment& HAnimSegment423 =  HAnimSegment();
HAnimSegment423.X3DNode::setName(CString("l_tarsal_proximal_phalanx_5"));
HAnimSegment423.setDEF(CString("hanim_l_tarsal_proximal_phalanx_5"));
Transform& Transform424 =  Transform();
Transform424.setTranslation(new float[]{0.1239,0.0051,-0.0153});
Transform& Transform425 =  Transform();
//Empty Transform
Shape& Shape426 =  Shape();
Shape426.setUSE(CString("HAnimJointShape"));
Transform425.addChild(&Shape426);

Transform424.addChild(&Transform425);

HAnimSegment423.addChild(&Transform424);

Shape& Shape427 =  Shape();
LineSet& LineSet428 =  LineSet();
LineSet428.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate429 =  Coordinate();
Coordinate429.setPoint(new float[]{0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077}, 6);
LineSet428.setCoord(Coordinate429);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA430 =  ColorRGBA();
ColorRGBA430.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet428.addChild(&ColorRGBA430);

Shape427.setGeometry(&LineSet428);

HAnimSegment423.addChild(&Shape427);

HAnimSite& HAnimSite431 =  HAnimSite();
HAnimSite431.X3DNode::setName(CString("l_metatarsal_phalanx_5"));
HAnimSite431.setDEF(CString("hanim_l_metatarsal_phalanx_5"));
TouchSensor& TouchSensor432 =  TouchSensor();
TouchSensor432.setDescription(CString("HAnimSite 56 l_metatarsal_phalanx_5"));
HAnimSite431.addChild(&TouchSensor432);

Shape& Shape433 =  Shape();
Shape433.setUSE(CString("HAnimSiteShape"));
HAnimSite431.addChild(&Shape433);

Billboard& Billboard434 =  Billboard();
Shape& Shape435 =  Shape();
Text& Text436 =  Text();
Text436.setString(new CString[]{CString("56")}, 1);
CFontStyle& FontStyle437 =  CFontStyle();
FontStyle437.setSize(0.035);
Text436.setFontStyle(&FontStyle437);

Shape435.setGeometry(&Text436);

Billboard434.addChild(&Shape435);

HAnimSite431.addChild(Billboard434);

HAnimSegment423.addChild(&HAnimSite431);

HAnimJoint422.addChildren(&HAnimSegment423);

HAnimJoint& HAnimJoint438 =  HAnimJoint();
HAnimJoint438.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint438.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint438.setCenter(new float[]{0.1262,0.0023,-0.0077});
HAnimSegment& HAnimSegment439 =  HAnimSegment();
HAnimSegment439.X3DNode::setName(CString("l_tarsal_middle_phalanx_5"));
HAnimSegment439.setDEF(CString("hanim_l_tarsal_middle_phalanx_5"));
Transform& Transform440 =  Transform();
Transform440.setTranslation(new float[]{0.1262,0.0023,-0.0077});
Transform& Transform441 =  Transform();
//Empty Transform
Shape& Shape442 =  Shape();
Shape442.setUSE(CString("HAnimJointShape"));
Transform441.addChild(&Shape442);

Transform440.addChild(&Transform441);

HAnimSegment439.addChild(&Transform440);

Shape& Shape443 =  Shape();
LineSet& LineSet444 =  LineSet();
LineSet444.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate445 =  Coordinate();
Coordinate445.setPoint(new float[]{0.1262,0.0023,-0.0077,0.1271,0,0}, 6);
LineSet444.setCoord(Coordinate445);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA446 =  ColorRGBA();
ColorRGBA446.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet444.addChild(&ColorRGBA446);

Shape443.setGeometry(&LineSet444);

HAnimSegment439.addChild(&Shape443);

HAnimJoint438.addChildren(&HAnimSegment439);

HAnimJoint& HAnimJoint447 =  HAnimJoint();
HAnimJoint447.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint447.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint447.setCenter(new float[]{0.1271,0,0});
HAnimJoint438.addChildren(&HAnimJoint447);

HAnimJoint422.addChildren(&HAnimJoint438);

HAnimJoint413.addChildren(&HAnimJoint422);

HAnimJoint372.addChildren(&HAnimJoint413);

HAnimJoint363.addChildren(&HAnimJoint372);

HAnimJoint210.addChildren(&HAnimJoint363);

HAnimJoint180.addChildren(&HAnimJoint210);

HAnimJoint143.addChildren(&HAnimJoint180);

HAnimJoint60.addChildren(&HAnimJoint143);

HAnimJoint& HAnimJoint448 =  HAnimJoint();
HAnimJoint448.X3DNode::setName(CString("r_hip"));
HAnimJoint448.setDEF(CString("hanim_r_hip"));
HAnimJoint448.setCenter(new float[]{-0.095,0.9171,0.0029});
HAnimSegment& HAnimSegment449 =  HAnimSegment();
HAnimSegment449.X3DNode::setName(CString("r_thigh"));
HAnimSegment449.setDEF(CString("hanim_r_thigh"));
Transform& Transform450 =  Transform();
Transform450.setTranslation(new float[]{-0.095,0.9171,0.0029});
Transform& Transform451 =  Transform();
//Empty Transform
Shape& Shape452 =  Shape();
Shape452.setUSE(CString("HAnimJointShape"));
Transform451.addChild(&Shape452);

Transform450.addChild(&Transform451);

HAnimSegment449.addChild(&Transform450);

Shape& Shape453 =  Shape();
LineSet& LineSet454 =  LineSet();
LineSet454.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate455 =  Coordinate();
Coordinate455.setPoint(new float[]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet454.setCoord(Coordinate455);

//from r_hip to r_knee vertices 2
ColorRGBA& ColorRGBA456 =  ColorRGBA();
ColorRGBA456.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet454.addChild(&ColorRGBA456);

Shape453.setGeometry(&LineSet454);

HAnimSegment449.addChild(&Shape453);

HAnimSite& HAnimSite457 =  HAnimSite();
HAnimSite457.X3DNode::setName(CString("r_femoral_lateral_epicondyles"));
HAnimSite457.setDEF(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimSite457.setTranslation(new float[]{-0.1421,0.4992,0.031});
TouchSensor& TouchSensor458 =  TouchSensor();
TouchSensor458.setDescription(CString("HAnimSite 44 r_femoral_lateral_epicondyles"));
HAnimSite457.addChild(&TouchSensor458);

Shape& Shape459 =  Shape();
Shape459.setUSE(CString("HAnimSiteShape"));
HAnimSite457.addChild(&Shape459);

Billboard& Billboard460 =  Billboard();
Shape& Shape461 =  Shape();
Text& Text462 =  Text();
Text462.setString(new CString[]{CString("44")}, 1);
CFontStyle& FontStyle463 =  CFontStyle();
FontStyle463.setSize(0.035);
Text462.setFontStyle(&FontStyle463);

Shape461.setGeometry(&Text462);

Billboard460.addChild(&Shape461);

HAnimSite457.addChild(Billboard460);

HAnimSegment449.addChild(&HAnimSite457);

HAnimSite& HAnimSite464 =  HAnimSite();
HAnimSite464.X3DNode::setName(CString("r_femoral_medial_epicondyles"));
HAnimSite464.setDEF(CString("hanim_r_femoral_medial_epicondyles"));
HAnimSite464.setTranslation(new float[]{-0.0221,0.5014,0.0289});
TouchSensor& TouchSensor465 =  TouchSensor();
TouchSensor465.setDescription(CString("HAnimSite 43 r_femoral_medial_epicondyles"));
HAnimSite464.addChild(&TouchSensor465);

Shape& Shape466 =  Shape();
Shape466.setUSE(CString("HAnimSiteShape"));
HAnimSite464.addChild(&Shape466);

Billboard& Billboard467 =  Billboard();
Shape& Shape468 =  Shape();
Text& Text469 =  Text();
Text469.setString(new CString[]{CString("43")}, 1);
CFontStyle& FontStyle470 =  CFontStyle();
FontStyle470.setSize(0.035);
Text469.setFontStyle(&FontStyle470);

Shape468.setGeometry(&Text469);

Billboard467.addChild(&Shape468);

HAnimSite464.addChild(Billboard467);

HAnimSegment449.addChild(&HAnimSite464);

HAnimSite& HAnimSite471 =  HAnimSite();
HAnimSite471.X3DNode::setName(CString("r_knee_crease"));
HAnimSite471.setDEF(CString("hanim_r_knee_crease"));
HAnimSite471.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
TouchSensor& TouchSensor472 =  TouchSensor();
TouchSensor472.setDescription(CString("HAnimSite 91 r_knee_crease"));
HAnimSite471.addChild(&TouchSensor472);

Shape& Shape473 =  Shape();
Shape473.setUSE(CString("HAnimSiteShape"));
HAnimSite471.addChild(&Shape473);

Billboard& Billboard474 =  Billboard();
Shape& Shape475 =  Shape();
Text& Text476 =  Text();
Text476.setString(new CString[]{CString("91")}, 1);
CFontStyle& FontStyle477 =  CFontStyle();
FontStyle477.setSize(0.035);
Text476.setFontStyle(&FontStyle477);

Shape475.setGeometry(&Text476);

Billboard474.addChild(&Shape475);

HAnimSite471.addChild(Billboard474);

HAnimSegment449.addChild(&HAnimSite471);

HAnimSite& HAnimSite478 =  HAnimSite();
HAnimSite478.X3DNode::setName(CString("r_suprapatella"));
HAnimSite478.setDEF(CString("hanim_r_suprapatella"));
TouchSensor& TouchSensor479 =  TouchSensor();
TouchSensor479.setDescription(CString("HAnimSite 45 r_suprapatella"));
HAnimSite478.addChild(&TouchSensor479);

Shape& Shape480 =  Shape();
Shape480.setUSE(CString("HAnimSiteShape"));
HAnimSite478.addChild(&Shape480);

Billboard& Billboard481 =  Billboard();
Shape& Shape482 =  Shape();
Text& Text483 =  Text();
Text483.setString(new CString[]{CString("45")}, 1);
CFontStyle& FontStyle484 =  CFontStyle();
FontStyle484.setSize(0.035);
Text483.setFontStyle(&FontStyle484);

Shape482.setGeometry(&Text483);

Billboard481.addChild(&Shape482);

HAnimSite478.addChild(Billboard481);

HAnimSegment449.addChild(&HAnimSite478);

HAnimJoint448.addChildren(&HAnimSegment449);

HAnimJoint& HAnimJoint485 =  HAnimJoint();
HAnimJoint485.X3DNode::setName(CString("r_knee"));
HAnimJoint485.setDEF(CString("hanim_r_knee"));
HAnimJoint485.setCenter(new float[]{-0.0867,0.4913,0.0318});
HAnimSegment& HAnimSegment486 =  HAnimSegment();
HAnimSegment486.X3DNode::setName(CString("r_calf"));
HAnimSegment486.setDEF(CString("hanim_r_calf"));
Transform& Transform487 =  Transform();
Transform487.setTranslation(new float[]{-0.0867,0.4913,0.0318});
Transform& Transform488 =  Transform();
//Empty Transform
Shape& Shape489 =  Shape();
Shape489.setUSE(CString("HAnimJointShape"));
Transform488.addChild(&Shape489);

Transform487.addChild(&Transform488);

HAnimSegment486.addChild(&Transform487);

Shape& Shape490 =  Shape();
LineSet& LineSet491 =  LineSet();
LineSet491.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate492 =  Coordinate();
Coordinate492.setPoint(new float[]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet491.setCoord(Coordinate492);

//from r_knee to r_talocrural vertices 2
ColorRGBA& ColorRGBA493 =  ColorRGBA();
ColorRGBA493.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet491.addChild(&ColorRGBA493);

Shape490.setGeometry(&LineSet491);

HAnimSegment486.addChild(&Shape490);

HAnimSite& HAnimSite494 =  HAnimSite();
HAnimSite494.X3DNode::setName(CString("r_lateral_malleolus"));
HAnimSite494.setDEF(CString("hanim_r_lateral_malleolus"));
HAnimSite494.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
TouchSensor& TouchSensor495 =  TouchSensor();
TouchSensor495.setDescription(CString("HAnimSite 53 r_lateral_malleolus"));
HAnimSite494.addChild(&TouchSensor495);

Shape& Shape496 =  Shape();
Shape496.setUSE(CString("HAnimSiteShape"));
HAnimSite494.addChild(&Shape496);

Billboard& Billboard497 =  Billboard();
Shape& Shape498 =  Shape();
Text& Text499 =  Text();
Text499.setString(new CString[]{CString("53")}, 1);
CFontStyle& FontStyle500 =  CFontStyle();
FontStyle500.setSize(0.035);
Text499.setFontStyle(&FontStyle500);

Shape498.setGeometry(&Text499);

Billboard497.addChild(&Shape498);

HAnimSite494.addChild(Billboard497);

HAnimSegment486.addChild(&HAnimSite494);

HAnimSite& HAnimSite501 =  HAnimSite();
HAnimSite501.X3DNode::setName(CString("r_medial_malleolus"));
HAnimSite501.setDEF(CString("hanim_r_medial_malleolus"));
HAnimSite501.setTranslation(new float[]{-0.0591,0.076,-0.0928});
TouchSensor& TouchSensor502 =  TouchSensor();
TouchSensor502.setDescription(CString("HAnimSite 52 r_medial_malleolus"));
HAnimSite501.addChild(&TouchSensor502);

Shape& Shape503 =  Shape();
Shape503.setUSE(CString("HAnimSiteShape"));
HAnimSite501.addChild(&Shape503);

Billboard& Billboard504 =  Billboard();
Shape& Shape505 =  Shape();
Text& Text506 =  Text();
Text506.setString(new CString[]{CString("52")}, 1);
CFontStyle& FontStyle507 =  CFontStyle();
FontStyle507.setSize(0.035);
Text506.setFontStyle(&FontStyle507);

Shape505.setGeometry(&Text506);

Billboard504.addChild(&Shape505);

HAnimSite501.addChild(Billboard504);

HAnimSegment486.addChild(&HAnimSite501);

HAnimSite& HAnimSite508 =  HAnimSite();
HAnimSite508.X3DNode::setName(CString("r_tibiale"));
HAnimSite508.setDEF(CString("hanim_r_tibiale"));
TouchSensor& TouchSensor509 =  TouchSensor();
TouchSensor509.setDescription(CString("HAnimSite 51 r_tibiale"));
HAnimSite508.addChild(&TouchSensor509);

Shape& Shape510 =  Shape();
Shape510.setUSE(CString("HAnimSiteShape"));
HAnimSite508.addChild(&Shape510);

Billboard& Billboard511 =  Billboard();
Shape& Shape512 =  Shape();
Text& Text513 =  Text();
Text513.setString(new CString[]{CString("51")}, 1);
CFontStyle& FontStyle514 =  CFontStyle();
FontStyle514.setSize(0.035);
Text513.setFontStyle(&FontStyle514);

Shape512.setGeometry(&Text513);

Billboard511.addChild(&Shape512);

HAnimSite508.addChild(Billboard511);

HAnimSegment486.addChild(&HAnimSite508);

HAnimJoint485.addChildren(&HAnimSegment486);

HAnimJoint& HAnimJoint515 =  HAnimJoint();
HAnimJoint515.X3DNode::setName(CString("r_talocrural"));
HAnimJoint515.setDEF(CString("hanim_r_talocrural"));
HAnimJoint515.setCenter(new float[]{-0.0801,0.0712,-0.0766});
HAnimSegment& HAnimSegment516 =  HAnimSegment();
HAnimSegment516.X3DNode::setName(CString("r_talus"));
HAnimSegment516.setDEF(CString("hanim_r_talus"));
Transform& Transform517 =  Transform();
Transform517.setScale(new float[]{0.15,0.15,0.15});
Transform517.setTranslation(new float[]{-0.05,0.06,-0.025});
Transform517.setRotation(new float[]{1,0,0,-1.57});
//Transform right foot
Transform& Transform518 =  Transform();
//Empty Transform right foot
Shape& Shape519 =  Shape();
Shape519.setUSE(CString("HAnimJointShape"));
Transform518.addChild(&Shape519);

Transform517.addChild(&Transform518);

HAnimSegment516.addChild(&Transform517);

Shape& Shape520 =  Shape();
LineSet& LineSet521 =  LineSet();
LineSet521.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate522 =  Coordinate();
Coordinate522.setPoint(new float[]{-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097}, 6);
LineSet521.setCoord(Coordinate522);

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA& ColorRGBA523 =  ColorRGBA();
ColorRGBA523.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet521.addChild(&ColorRGBA523);

Shape520.setGeometry(&LineSet521);

HAnimSegment516.addChild(&Shape520);

HAnimSite& HAnimSite524 =  HAnimSite();
HAnimSite524.X3DNode::setName(CString("r_calcaneus_posterior"));
HAnimSite524.setDEF(CString("hanim_r_calcaneus_posterior"));
HAnimSite524.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
TouchSensor& TouchSensor525 =  TouchSensor();
TouchSensor525.setDescription(CString("HAnimSite 62 r_calcaneus_posterior"));
HAnimSite524.addChild(&TouchSensor525);

Shape& Shape526 =  Shape();
Shape526.setUSE(CString("HAnimSiteShape"));
HAnimSite524.addChild(&Shape526);

Billboard& Billboard527 =  Billboard();
Shape& Shape528 =  Shape();
Text& Text529 =  Text();
Text529.setString(new CString[]{CString("62")}, 1);
CFontStyle& FontStyle530 =  CFontStyle();
FontStyle530.setSize(0.035);
Text529.setFontStyle(&FontStyle530);

Shape528.setGeometry(&Text529);

Billboard527.addChild(&Shape528);

HAnimSite524.addChild(Billboard527);

HAnimSegment516.addChild(&HAnimSite524);

HAnimSite& HAnimSite531 =  HAnimSite();
HAnimSite531.X3DNode::setName(CString("r_sphyrion"));
HAnimSite531.setDEF(CString("hanim_r_sphyrion"));
HAnimSite531.setTranslation(new float[]{-0.0603,0.061,-0.1002});
TouchSensor& TouchSensor532 =  TouchSensor();
TouchSensor532.setDescription(CString("HAnimSite 54 r_sphyrion"));
HAnimSite531.addChild(&TouchSensor532);

Shape& Shape533 =  Shape();
Shape533.setUSE(CString("HAnimSiteShape"));
HAnimSite531.addChild(&Shape533);

Billboard& Billboard534 =  Billboard();
Shape& Shape535 =  Shape();
Text& Text536 =  Text();
Text536.setString(new CString[]{CString("54")}, 1);
CFontStyle& FontStyle537 =  CFontStyle();
FontStyle537.setSize(0.035);
Text536.setFontStyle(&FontStyle537);

Shape535.setGeometry(&Text536);

Billboard534.addChild(&Shape535);

HAnimSite531.addChild(Billboard534);

HAnimSegment516.addChild(&HAnimSite531);

Shape& Shape538 =  Shape();
LineSet& LineSet539 =  LineSet();
LineSet539.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate540 =  Coordinate();
Coordinate540.setPoint(new float[]{-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278}, 6);
LineSet539.setCoord(Coordinate540);

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA& ColorRGBA541 =  ColorRGBA();
ColorRGBA541.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet539.addChild(&ColorRGBA541);

Shape538.setGeometry(&LineSet539);

HAnimSegment516.addChild(&Shape538);

HAnimJoint515.addChildren(&HAnimSegment516);

HAnimJoint& HAnimJoint542 =  HAnimJoint();
HAnimJoint542.X3DNode::setName(CString("r_talocalcaneonavicular"));
HAnimJoint542.setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint542.setCenter(new float[]{-0.0781,0.0283,-0.097});
HAnimSegment& HAnimSegment543 =  HAnimSegment();
HAnimSegment543.X3DNode::setName(CString("r_navicular"));
HAnimSegment543.setDEF(CString("hanim_r_navicular"));
Transform& Transform544 =  Transform();
Transform544.setTranslation(new float[]{-0.0781,0.0283,-0.097});
Transform& Transform545 =  Transform();
//Empty Transform
Shape& Shape546 =  Shape();
Shape546.setUSE(CString("HAnimJointShape"));
Transform545.addChild(&Shape546);

Transform544.addChild(&Transform545);

HAnimSegment543.addChild(&Transform544);

Shape& Shape547 =  Shape();
LineSet& LineSet548 =  LineSet();
LineSet548.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate549 =  Coordinate();
Coordinate549.setPoint(new float[]{-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835}, 6);
LineSet548.setCoord(Coordinate549);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA& ColorRGBA550 =  ColorRGBA();
ColorRGBA550.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet548.addChild(&ColorRGBA550);

Shape547.setGeometry(&LineSet548);

HAnimSegment543.addChild(&Shape547);

Shape& Shape551 =  Shape();
LineSet& LineSet552 =  LineSet();
LineSet552.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate553 =  Coordinate();
Coordinate553.setPoint(new float[]{-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805}, 6);
LineSet552.setCoord(Coordinate553);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA& ColorRGBA554 =  ColorRGBA();
ColorRGBA554.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet552.addChild(&ColorRGBA554);

Shape551.setGeometry(&LineSet552);

HAnimSegment543.addChild(&Shape551);

Shape& Shape555 =  Shape();
LineSet& LineSet556 =  LineSet();
LineSet556.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate557 =  Coordinate();
Coordinate557.setPoint(new float[]{-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821}, 6);
LineSet556.setCoord(Coordinate557);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA& ColorRGBA558 =  ColorRGBA();
ColorRGBA558.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet556.addChild(&ColorRGBA558);

Shape555.setGeometry(&LineSet556);

HAnimSegment543.addChild(&Shape555);

HAnimJoint542.addChildren(&HAnimSegment543);

HAnimJoint& HAnimJoint559 =  HAnimJoint();
HAnimJoint559.X3DNode::setName(CString("r_cuneonavicular_1"));
HAnimJoint559.setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint559.setCenter(new float[]{-0.0672,0.0235,-0.0835});
HAnimSegment& HAnimSegment560 =  HAnimSegment();
HAnimSegment560.X3DNode::setName(CString("r_cuneiform_1"));
HAnimSegment560.setDEF(CString("hanim_r_cuneiform_1"));
Transform& Transform561 =  Transform();
Transform561.setTranslation(new float[]{-0.0672,0.0235,-0.0835});
Transform& Transform562 =  Transform();
//Empty Transform
Shape& Shape563 =  Shape();
Shape563.setUSE(CString("HAnimJointShape"));
Transform562.addChild(&Shape563);

Transform561.addChild(&Transform562);

HAnimSegment560.addChild(&Transform561);

Shape& Shape564 =  Shape();
LineSet& LineSet565 =  LineSet();
LineSet565.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate566 =  Coordinate();
Coordinate566.setPoint(new float[]{-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577}, 6);
LineSet565.setCoord(Coordinate566);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA& ColorRGBA567 =  ColorRGBA();
ColorRGBA567.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet565.addChild(&ColorRGBA567);

Shape564.setGeometry(&LineSet565);

HAnimSegment560.addChild(&Shape564);

HAnimJoint559.addChildren(&HAnimSegment560);

HAnimJoint& HAnimJoint568 =  HAnimJoint();
HAnimJoint568.X3DNode::setName(CString("r_tarsometatarsal_1"));
HAnimJoint568.setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint568.setCenter(new float[]{-0.0644,0.0147,-0.0577});
HAnimSegment& HAnimSegment569 =  HAnimSegment();
HAnimSegment569.X3DNode::setName(CString("r_metatarsal_1"));
HAnimSegment569.setDEF(CString("hanim_r_metatarsal_1"));
Transform& Transform570 =  Transform();
Transform570.setTranslation(new float[]{-0.0644,0.0147,-0.0577});
Transform& Transform571 =  Transform();
//Empty Transform
Shape& Shape572 =  Shape();
Shape572.setUSE(CString("HAnimJointShape"));
Transform571.addChild(&Shape572);

Transform570.addChild(&Transform571);

HAnimSegment569.addChild(&Transform570);

Shape& Shape573 =  Shape();
LineSet& LineSet574 =  LineSet();
LineSet574.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate575 =  Coordinate();
Coordinate575.setPoint(new float[]{-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083}, 6);
LineSet574.setCoord(Coordinate575);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA& ColorRGBA576 =  ColorRGBA();
ColorRGBA576.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet574.addChild(&ColorRGBA576);

Shape573.setGeometry(&LineSet574);

HAnimSegment569.addChild(&Shape573);

HAnimJoint568.addChildren(&HAnimSegment569);

HAnimJoint& HAnimJoint577 =  HAnimJoint();
HAnimJoint577.X3DNode::setName(CString("r_metatarsophalangeal_1"));
HAnimJoint577.setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint577.setCenter(new float[]{-0.0619,0.0059,-0.0083});
HAnimSegment& HAnimSegment578 =  HAnimSegment();
HAnimSegment578.X3DNode::setName(CString("r_tarsal_proximal_phalanx_1"));
HAnimSegment578.setDEF(CString("hanim_r_tarsal_proximal_phalanx_1"));
Transform& Transform579 =  Transform();
Transform579.setTranslation(new float[]{-0.0619,0.0059,-0.0083});
Transform& Transform580 =  Transform();
//Empty Transform
Shape& Shape581 =  Shape();
Shape581.setUSE(CString("HAnimJointShape"));
Transform580.addChild(&Shape581);

Transform579.addChild(&Transform580);

HAnimSegment578.addChild(&Transform579);

Shape& Shape582 =  Shape();
LineSet& LineSet583 =  LineSet();
LineSet583.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate584 =  Coordinate();
Coordinate584.setPoint(new float[]{-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083}, 6);
LineSet583.setCoord(Coordinate584);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA585 =  ColorRGBA();
ColorRGBA585.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet583.addChild(&ColorRGBA585);

Shape582.setGeometry(&LineSet583);

HAnimSegment578.addChild(&Shape582);

HAnimSite& HAnimSite586 =  HAnimSite();
HAnimSite586.X3DNode::setName(CString("r_metatarsal_phalanx_1"));
HAnimSite586.setDEF(CString("hanim_r_metatarsal_phalanx_1"));
TouchSensor& TouchSensor587 =  TouchSensor();
TouchSensor587.setDescription(CString("HAnimSite 59 r_metatarsal_phalanx_1"));
HAnimSite586.addChild(&TouchSensor587);

Shape& Shape588 =  Shape();
Shape588.setUSE(CString("HAnimSiteShape"));
HAnimSite586.addChild(&Shape588);

Billboard& Billboard589 =  Billboard();
Shape& Shape590 =  Shape();
Text& Text591 =  Text();
Text591.setString(new CString[]{CString("59")}, 1);
CFontStyle& FontStyle592 =  CFontStyle();
FontStyle592.setSize(0.035);
Text591.setFontStyle(&FontStyle592);

Shape590.setGeometry(&Text591);

Billboard589.addChild(&Shape590);

HAnimSite586.addChild(Billboard589);

HAnimSegment578.addChild(&HAnimSite586);

HAnimJoint577.addChildren(&HAnimSegment578);

HAnimJoint& HAnimJoint593 =  HAnimJoint();
HAnimJoint593.X3DNode::setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint593.setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint577.addChildren(&HAnimJoint593);

HAnimJoint568.addChildren(&HAnimJoint577);

HAnimJoint559.addChildren(&HAnimJoint568);

HAnimJoint542.addChildren(&HAnimJoint559);

HAnimJoint& HAnimJoint594 =  HAnimJoint();
HAnimJoint594.X3DNode::setName(CString("r_cuneonavicular_2"));
HAnimJoint594.setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint594.setCenter(new float[]{-0.0812,0.025,-0.0805});
HAnimSegment& HAnimSegment595 =  HAnimSegment();
HAnimSegment595.X3DNode::setName(CString("r_cuneiform_2"));
HAnimSegment595.setDEF(CString("hanim_r_cuneiform_2"));
Transform& Transform596 =  Transform();
Transform596.setTranslation(new float[]{-0.0812,0.025,-0.0805});
Transform& Transform597 =  Transform();
//Empty Transform
Shape& Shape598 =  Shape();
Shape598.setUSE(CString("HAnimJointShape"));
Transform597.addChild(&Shape598);

Transform596.addChild(&Transform597);

HAnimSegment595.addChild(&Transform596);

Shape& Shape599 =  Shape();
LineSet& LineSet600 =  LineSet();
LineSet600.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate601 =  Coordinate();
Coordinate601.setPoint(new float[]{-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608}, 6);
LineSet600.setCoord(Coordinate601);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA602 =  ColorRGBA();
ColorRGBA602.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet600.addChild(&ColorRGBA602);

Shape599.setGeometry(&LineSet600);

HAnimSegment595.addChild(&Shape599);

HAnimJoint594.addChildren(&HAnimSegment595);

HAnimJoint& HAnimJoint603 =  HAnimJoint();
HAnimJoint603.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint603.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint603.setCenter(new float[]{-0.08,0.0175,-0.0608});
HAnimSegment& HAnimSegment604 =  HAnimSegment();
HAnimSegment604.X3DNode::setName(CString("r_metatarsal_2"));
HAnimSegment604.setDEF(CString("hanim_r_metatarsal_2"));
Transform& Transform605 =  Transform();
Transform605.setTranslation(new float[]{-0.08,0.0175,-0.0608});
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
Coordinate610.setPoint(new float[]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004}, 6);
LineSet609.setCoord(Coordinate610);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA611 =  ColorRGBA();
ColorRGBA611.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet609.addChild(&ColorRGBA611);

Shape608.setGeometry(&LineSet609);

HAnimSegment604.addChild(&Shape608);

HAnimJoint603.addChildren(&HAnimSegment604);

HAnimJoint& HAnimJoint612 =  HAnimJoint();
HAnimJoint612.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint612.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint612.setCenter(new float[]{-0.0823,0.0064,-0.004});
HAnimSegment& HAnimSegment613 =  HAnimSegment();
HAnimSegment613.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment613.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Transform& Transform614 =  Transform();
Transform614.setTranslation(new float[]{-0.0823,0.0064,-0.004});
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
Coordinate619.setPoint(new float[]{-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121}, 6);
LineSet618.setCoord(Coordinate619);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA620 =  ColorRGBA();
ColorRGBA620.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet618.addChild(&ColorRGBA620);

Shape617.setGeometry(&LineSet618);

HAnimSegment613.addChild(&Shape617);

HAnimJoint612.addChildren(&HAnimSegment613);

HAnimJoint& HAnimJoint621 =  HAnimJoint();
HAnimJoint621.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint621.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint621.setCenter(new float[]{-0.0841,0.0041,0.0121});
HAnimSegment& HAnimSegment622 =  HAnimSegment();
HAnimSegment622.X3DNode::setName(CString("r_tarsal_middle_phalanx_2"));
HAnimSegment622.setDEF(CString("hanim_r_tarsal_middle_phalanx_2"));
Transform& Transform623 =  Transform();
Transform623.setTranslation(new float[]{-0.0841,0.0041,0.0121});
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
Coordinate628.setPoint(new float[]{-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216}, 6);
LineSet627.setCoord(Coordinate628);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA629 =  ColorRGBA();
ColorRGBA629.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet627.addChild(&ColorRGBA629);

Shape626.setGeometry(&LineSet627);

HAnimSegment622.addChild(&Shape626);

HAnimJoint621.addChildren(&HAnimSegment622);

HAnimJoint& HAnimJoint630 =  HAnimJoint();
HAnimJoint630.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint630.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint630.setCenter(new float[]{-0.0841,0.0013,0.0216});
HAnimJoint621.addChildren(&HAnimJoint630);

HAnimJoint612.addChildren(&HAnimJoint621);

HAnimJoint603.addChildren(&HAnimJoint612);

HAnimJoint594.addChildren(&HAnimJoint603);

HAnimJoint542.addChildren(&HAnimJoint594);

HAnimJoint& HAnimJoint631 =  HAnimJoint();
HAnimJoint631.X3DNode::setName(CString("r_cuneonavicular_3"));
HAnimJoint631.setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint631.setCenter(new float[]{-0.0928,0.0248,-0.0821});
HAnimSegment& HAnimSegment632 =  HAnimSegment();
HAnimSegment632.X3DNode::setName(CString("r_cuneiform_3"));
HAnimSegment632.setDEF(CString("hanim_r_cuneiform_3"));
Transform& Transform633 =  Transform();
Transform633.setTranslation(new float[]{-0.0928,0.0248,-0.0821});
Transform& Transform634 =  Transform();
//Empty Transform
Shape& Shape635 =  Shape();
Shape635.setUSE(CString("HAnimJointShape"));
Transform634.addChild(&Shape635);

Transform633.addChild(&Transform634);

HAnimSegment632.addChild(&Transform633);

Shape& Shape636 =  Shape();
LineSet& LineSet637 =  LineSet();
LineSet637.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate638 =  Coordinate();
Coordinate638.setPoint(new float[]{-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625}, 6);
LineSet637.setCoord(Coordinate638);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA& ColorRGBA639 =  ColorRGBA();
ColorRGBA639.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet637.addChild(&ColorRGBA639);

Shape636.setGeometry(&LineSet637);

HAnimSegment632.addChild(&Shape636);

HAnimJoint631.addChildren(&HAnimSegment632);

HAnimJoint& HAnimJoint640 =  HAnimJoint();
HAnimJoint640.X3DNode::setName(CString("r_tarsometatarsal_3"));
HAnimJoint640.setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimJoint640.setCenter(new float[]{-0.0944,0.0175,-0.0625});
HAnimSegment& HAnimSegment641 =  HAnimSegment();
HAnimSegment641.X3DNode::setName(CString("r_metatarsal_3"));
HAnimSegment641.setDEF(CString("hanim_r_metatarsal_3"));
Transform& Transform642 =  Transform();
Transform642.setTranslation(new float[]{-0.0944,0.0175,-0.0625});
Transform& Transform643 =  Transform();
//Empty Transform
Shape& Shape644 =  Shape();
Shape644.setUSE(CString("HAnimJointShape"));
Transform643.addChild(&Shape644);

Transform642.addChild(&Transform643);

HAnimSegment641.addChild(&Transform642);

Shape& Shape645 =  Shape();
LineSet& LineSet646 =  LineSet();
LineSet646.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate647 =  Coordinate();
Coordinate647.setPoint(new float[]{-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065}, 6);
LineSet646.setCoord(Coordinate647);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA& ColorRGBA648 =  ColorRGBA();
ColorRGBA648.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet646.addChild(&ColorRGBA648);

Shape645.setGeometry(&LineSet646);

HAnimSegment641.addChild(&Shape645);

HAnimJoint640.addChildren(&HAnimSegment641);

HAnimJoint& HAnimJoint649 =  HAnimJoint();
HAnimJoint649.X3DNode::setName(CString("r_metatarsophalangeal_3"));
HAnimJoint649.setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint649.setCenter(new float[]{-0.0963,0.0065,-0.0065});
HAnimSegment& HAnimSegment650 =  HAnimSegment();
HAnimSegment650.X3DNode::setName(CString("r_tarsal_proximal_phalanx_3"));
HAnimSegment650.setDEF(CString("hanim_r_tarsal_proximal_phalanx_3"));
Transform& Transform651 =  Transform();
Transform651.setTranslation(new float[]{-0.0963,0.0065,-0.0065});
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
Coordinate656.setPoint(new float[]{-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086}, 6);
LineSet655.setCoord(Coordinate656);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA657 =  ColorRGBA();
ColorRGBA657.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet655.addChild(&ColorRGBA657);

Shape654.setGeometry(&LineSet655);

HAnimSegment650.addChild(&Shape654);

HAnimJoint649.addChildren(&HAnimSegment650);

HAnimJoint& HAnimJoint658 =  HAnimJoint();
HAnimJoint658.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint658.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint658.setCenter(new float[]{-0.0987,0.0034,0.0086});
HAnimSegment& HAnimSegment659 =  HAnimSegment();
HAnimSegment659.X3DNode::setName(CString("r_tarsal_middle_phalanx_3"));
HAnimSegment659.setDEF(CString("hanim_r_tarsal_middle_phalanx_3"));
Transform& Transform660 =  Transform();
Transform660.setTranslation(new float[]{-0.0987,0.0034,0.0086});
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
Coordinate665.setPoint(new float[]{-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178}, 6);
LineSet664.setCoord(Coordinate665);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA666 =  ColorRGBA();
ColorRGBA666.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet664.addChild(&ColorRGBA666);

Shape663.setGeometry(&LineSet664);

HAnimSegment659.addChild(&Shape663);

HAnimJoint658.addChildren(&HAnimSegment659);

HAnimJoint& HAnimJoint667 =  HAnimJoint();
HAnimJoint667.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint667.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint667.setCenter(new float[]{-0.1002,0.0013,0.0178});
HAnimJoint658.addChildren(&HAnimJoint667);

HAnimJoint649.addChildren(&HAnimJoint658);

HAnimJoint640.addChildren(&HAnimJoint649);

HAnimJoint631.addChildren(&HAnimJoint640);

HAnimJoint542.addChildren(&HAnimJoint631);

HAnimJoint515.addChildren(&HAnimJoint542);

HAnimJoint& HAnimJoint668 =  HAnimJoint();
HAnimJoint668.X3DNode::setName(CString("r_calcaneocuboid"));
HAnimJoint668.setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint668.setCenter(new float[]{-0.0889,0.0494,-0.1278});
HAnimSegment& HAnimSegment669 =  HAnimSegment();
HAnimSegment669.X3DNode::setName(CString("r_calcaneus"));
HAnimSegment669.setDEF(CString("hanim_r_calcaneus"));
Transform& Transform670 =  Transform();
Transform670.setTranslation(new float[]{-0.0889,0.0494,-0.1278});
Transform& Transform671 =  Transform();
//Empty Transform
Shape& Shape672 =  Shape();
Shape672.setUSE(CString("HAnimJointShape"));
Transform671.addChild(&Shape672);

Transform670.addChild(&Transform671);

HAnimSegment669.addChild(&Transform670);

Shape& Shape673 =  Shape();
LineSet& LineSet674 =  LineSet();
LineSet674.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate675 =  Coordinate();
Coordinate675.setPoint(new float[]{-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998}, 6);
LineSet674.setCoord(Coordinate675);

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA& ColorRGBA676 =  ColorRGBA();
ColorRGBA676.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet674.addChild(&ColorRGBA676);

Shape673.setGeometry(&LineSet674);

HAnimSegment669.addChild(&Shape673);

HAnimJoint668.addChildren(&HAnimSegment669);

HAnimJoint& HAnimJoint677 =  HAnimJoint();
HAnimJoint677.X3DNode::setName(CString("r_transversetarsal"));
HAnimJoint677.setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint677.setCenter(new float[]{-0.1105,0.0267,-0.0998});
HAnimSegment& HAnimSegment678 =  HAnimSegment();
HAnimSegment678.X3DNode::setName(CString("r_cuboid"));
HAnimSegment678.setDEF(CString("hanim_r_cuboid"));
Transform& Transform679 =  Transform();
Transform679.setTranslation(new float[]{-0.1105,0.0267,-0.0998});
Transform& Transform680 =  Transform();
//Empty Transform
Shape& Shape681 =  Shape();
Shape681.setUSE(CString("HAnimJointShape"));
Transform680.addChild(&Shape681);

Transform679.addChild(&Transform680);

HAnimSegment678.addChild(&Transform679);

Shape& Shape682 =  Shape();
LineSet& LineSet683 =  LineSet();
LineSet683.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate684 =  Coordinate();
Coordinate684.setPoint(new float[]{-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634}, 6);
LineSet683.setCoord(Coordinate684);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA& ColorRGBA685 =  ColorRGBA();
ColorRGBA685.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet683.addChild(&ColorRGBA685);

Shape682.setGeometry(&LineSet683);

HAnimSegment678.addChild(&Shape682);

Shape& Shape686 =  Shape();
LineSet& LineSet687 =  LineSet();
LineSet687.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate688 =  Coordinate();
Coordinate688.setPoint(new float[]{-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671}, 6);
LineSet687.setCoord(Coordinate688);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA& ColorRGBA689 =  ColorRGBA();
ColorRGBA689.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet687.addChild(&ColorRGBA689);

Shape686.setGeometry(&LineSet687);

HAnimSegment678.addChild(&Shape686);

HAnimJoint677.addChildren(&HAnimSegment678);

HAnimJoint& HAnimJoint690 =  HAnimJoint();
HAnimJoint690.X3DNode::setName(CString("r_tarsometatarsal_4"));
HAnimJoint690.setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint690.setCenter(new float[]{-0.1063,0.016,-0.0634});
HAnimSegment& HAnimSegment691 =  HAnimSegment();
HAnimSegment691.X3DNode::setName(CString("r_metatarsal_4"));
HAnimSegment691.setDEF(CString("hanim_r_metatarsal_4"));
Transform& Transform692 =  Transform();
Transform692.setTranslation(new float[]{-0.1063,0.016,-0.0634});
Transform& Transform693 =  Transform();
//Empty Transform
Shape& Shape694 =  Shape();
Shape694.setUSE(CString("HAnimJointShape"));
Transform693.addChild(&Shape694);

Transform692.addChild(&Transform693);

HAnimSegment691.addChild(&Transform692);

Shape& Shape695 =  Shape();
LineSet& LineSet696 =  LineSet();
LineSet696.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate697 =  Coordinate();
Coordinate697.setPoint(new float[]{-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107}, 6);
LineSet696.setCoord(Coordinate697);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA& ColorRGBA698 =  ColorRGBA();
ColorRGBA698.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet696.addChild(&ColorRGBA698);

Shape695.setGeometry(&LineSet696);

HAnimSegment691.addChild(&Shape695);

HAnimJoint690.addChildren(&HAnimSegment691);

HAnimJoint& HAnimJoint699 =  HAnimJoint();
HAnimJoint699.X3DNode::setName(CString("r_metatarsophalangeal_4"));
HAnimJoint699.setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint699.setCenter(new float[]{-0.1097,0.0058,-0.0107});
HAnimSegment& HAnimSegment700 =  HAnimSegment();
HAnimSegment700.X3DNode::setName(CString("r_tarsal_proximal_phalanx_4"));
HAnimSegment700.setDEF(CString("hanim_r_tarsal_proximal_phalanx_4"));
Transform& Transform701 =  Transform();
Transform701.setTranslation(new float[]{-0.1097,0.0058,-0.0107});
Transform& Transform702 =  Transform();
//Empty Transform
Shape& Shape703 =  Shape();
Shape703.setUSE(CString("HAnimJointShape"));
Transform702.addChild(&Shape703);

Transform701.addChild(&Transform702);

HAnimSegment700.addChild(&Transform701);

Shape& Shape704 =  Shape();
LineSet& LineSet705 =  LineSet();
LineSet705.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate706 =  Coordinate();
Coordinate706.setPoint(new float[]{-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044}, 6);
LineSet705.setCoord(Coordinate706);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA707 =  ColorRGBA();
ColorRGBA707.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet705.addChild(&ColorRGBA707);

Shape704.setGeometry(&LineSet705);

HAnimSegment700.addChild(&Shape704);

HAnimJoint699.addChildren(&HAnimSegment700);

HAnimJoint& HAnimJoint708 =  HAnimJoint();
HAnimJoint708.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint708.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint708.setCenter(new float[]{-0.114,0.0037,0.0044});
HAnimSegment& HAnimSegment709 =  HAnimSegment();
HAnimSegment709.X3DNode::setName(CString("r_tarsal_middle_phalanx_4"));
HAnimSegment709.setDEF(CString("hanim_r_tarsal_middle_phalanx_4"));
Transform& Transform710 =  Transform();
Transform710.setTranslation(new float[]{-0.114,0.0037,0.0044});
Transform& Transform711 =  Transform();
//Empty Transform
Shape& Shape712 =  Shape();
Shape712.setUSE(CString("HAnimJointShape"));
Transform711.addChild(&Shape712);

Transform710.addChild(&Transform711);

HAnimSegment709.addChild(&Transform710);

Shape& Shape713 =  Shape();
LineSet& LineSet714 =  LineSet();
LineSet714.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate715 =  Coordinate();
Coordinate715.setPoint(new float[]{-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118}, 6);
LineSet714.setCoord(Coordinate715);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA716 =  ColorRGBA();
ColorRGBA716.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet714.addChild(&ColorRGBA716);

Shape713.setGeometry(&LineSet714);

HAnimSegment709.addChild(&Shape713);

HAnimJoint708.addChildren(&HAnimSegment709);

HAnimJoint& HAnimJoint717 =  HAnimJoint();
HAnimJoint717.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint717.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint717.setCenter(new float[]{-0.1155,0.0008,0.0118});
HAnimJoint708.addChildren(&HAnimJoint717);

HAnimJoint699.addChildren(&HAnimJoint708);

HAnimJoint690.addChildren(&HAnimJoint699);

HAnimJoint677.addChildren(&HAnimJoint690);

HAnimJoint& HAnimJoint718 =  HAnimJoint();
HAnimJoint718.X3DNode::setName(CString("r_tarsometatarsal_5"));
HAnimJoint718.setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint718.setCenter(new float[]{-0.1206,0.0124,-0.0671});
HAnimSegment& HAnimSegment719 =  HAnimSegment();
HAnimSegment719.X3DNode::setName(CString("r_metatarsal_5"));
HAnimSegment719.setDEF(CString("hanim_r_metatarsal_5"));
Transform& Transform720 =  Transform();
Transform720.setTranslation(new float[]{-0.1206,0.0124,-0.0671});
Transform& Transform721 =  Transform();
//Empty Transform
Shape& Shape722 =  Shape();
Shape722.setUSE(CString("HAnimJointShape"));
Transform721.addChild(&Shape722);

Transform720.addChild(&Transform721);

HAnimSegment719.addChild(&Transform720);

Shape& Shape723 =  Shape();
LineSet& LineSet724 =  LineSet();
LineSet724.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate725 =  Coordinate();
Coordinate725.setPoint(new float[]{-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153}, 6);
LineSet724.setCoord(Coordinate725);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA& ColorRGBA726 =  ColorRGBA();
ColorRGBA726.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet724.addChild(&ColorRGBA726);

Shape723.setGeometry(&LineSet724);

HAnimSegment719.addChild(&Shape723);

HAnimJoint718.addChildren(&HAnimSegment719);

HAnimJoint& HAnimJoint727 =  HAnimJoint();
HAnimJoint727.X3DNode::setName(CString("r_metatarsophalangeal_5"));
HAnimJoint727.setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint727.setCenter(new float[]{-0.1239,0.0051,-0.0153});
HAnimSegment& HAnimSegment728 =  HAnimSegment();
HAnimSegment728.X3DNode::setName(CString("r_tarsal_proximal_phalanx_5"));
HAnimSegment728.setDEF(CString("hanim_r_tarsal_proximal_phalanx_5"));
Transform& Transform729 =  Transform();
Transform729.setTranslation(new float[]{-0.1239,0.0051,-0.0153});
Transform& Transform730 =  Transform();
//Empty Transform
Shape& Shape731 =  Shape();
Shape731.setUSE(CString("HAnimJointShape"));
Transform730.addChild(&Shape731);

Transform729.addChild(&Transform730);

HAnimSegment728.addChild(&Transform729);

Shape& Shape732 =  Shape();
LineSet& LineSet733 =  LineSet();
LineSet733.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate734 =  Coordinate();
Coordinate734.setPoint(new float[]{-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077}, 6);
LineSet733.setCoord(Coordinate734);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA735 =  ColorRGBA();
ColorRGBA735.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet733.addChild(&ColorRGBA735);

Shape732.setGeometry(&LineSet733);

HAnimSegment728.addChild(&Shape732);

HAnimSite& HAnimSite736 =  HAnimSite();
HAnimSite736.X3DNode::setName(CString("r_metatarsal_phalanx_5"));
HAnimSite736.setDEF(CString("hanim_r_metatarsal_phalanx_5"));
TouchSensor& TouchSensor737 =  TouchSensor();
TouchSensor737.setDescription(CString("HAnimSite 60 r_metatarsal_phalanx_5"));
HAnimSite736.addChild(&TouchSensor737);

Shape& Shape738 =  Shape();
Shape738.setUSE(CString("HAnimSiteShape"));
HAnimSite736.addChild(&Shape738);

Billboard& Billboard739 =  Billboard();
Shape& Shape740 =  Shape();
Text& Text741 =  Text();
Text741.setString(new CString[]{CString("60")}, 1);
CFontStyle& FontStyle742 =  CFontStyle();
FontStyle742.setSize(0.035);
Text741.setFontStyle(&FontStyle742);

Shape740.setGeometry(&Text741);

Billboard739.addChild(&Shape740);

HAnimSite736.addChild(Billboard739);

HAnimSegment728.addChild(&HAnimSite736);

HAnimJoint727.addChildren(&HAnimSegment728);

HAnimJoint& HAnimJoint743 =  HAnimJoint();
HAnimJoint743.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint743.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint743.setCenter(new float[]{-0.1262,0.0023,-0.0077});
HAnimSegment& HAnimSegment744 =  HAnimSegment();
HAnimSegment744.X3DNode::setName(CString("r_tarsal_middle_phalanx_5"));
HAnimSegment744.setDEF(CString("hanim_r_tarsal_middle_phalanx_5"));
Transform& Transform745 =  Transform();
Transform745.setTranslation(new float[]{-0.1262,0.0023,-0.0077});
Transform& Transform746 =  Transform();
//Empty Transform
Shape& Shape747 =  Shape();
Shape747.setUSE(CString("HAnimJointShape"));
Transform746.addChild(&Shape747);

Transform745.addChild(&Transform746);

HAnimSegment744.addChild(&Transform745);

Shape& Shape748 =  Shape();
LineSet& LineSet749 =  LineSet();
LineSet749.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate750 =  Coordinate();
Coordinate750.setPoint(new float[]{-0.1262,0.0023,-0.0077,-0.1271,0,0}, 6);
LineSet749.setCoord(Coordinate750);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA751 =  ColorRGBA();
ColorRGBA751.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet749.addChild(&ColorRGBA751);

Shape748.setGeometry(&LineSet749);

HAnimSegment744.addChild(&Shape748);

HAnimJoint743.addChildren(&HAnimSegment744);

HAnimJoint& HAnimJoint752 =  HAnimJoint();
HAnimJoint752.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint752.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimJoint752.setCenter(new float[]{-0.1271,0,0});
HAnimJoint743.addChildren(&HAnimJoint752);

HAnimJoint727.addChildren(&HAnimJoint743);

HAnimJoint718.addChildren(&HAnimJoint727);

HAnimJoint677.addChildren(&HAnimJoint718);

HAnimJoint668.addChildren(&HAnimJoint677);

HAnimJoint515.addChildren(&HAnimJoint668);

HAnimJoint485.addChildren(&HAnimJoint515);

HAnimJoint448.addChildren(&HAnimJoint485);

HAnimJoint60.addChildren(&HAnimJoint448);

HAnimJoint47.addChildren(&HAnimJoint60);

HAnimJoint& HAnimJoint753 =  HAnimJoint();
HAnimJoint753.X3DNode::setName(CString("vl5"));
HAnimJoint753.setDEF(CString("hanim_vl5"));
HAnimJoint753.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimSegment& HAnimSegment754 =  HAnimSegment();
HAnimSegment754.X3DNode::setName(CString("l5"));
HAnimSegment754.setDEF(CString("hanim_l5"));
Transform& Transform755 =  Transform();
Transform755.setTranslation(new float[]{0.0028,1.0568,-0.0776});
Transform& Transform756 =  Transform();
//Empty Transform
Shape& Shape757 =  Shape();
Shape757.setUSE(CString("HAnimJointShape"));
Transform756.addChild(&Shape757);

Transform755.addChild(&Transform756);

HAnimSegment754.addChild(&Transform755);

Shape& Shape758 =  Shape();
LineSet& LineSet759 =  LineSet();
LineSet759.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate760 =  Coordinate();
Coordinate760.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet759.setCoord(Coordinate760);

//from vl5 to vl4 vertices 2
ColorRGBA& ColorRGBA761 =  ColorRGBA();
ColorRGBA761.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet759.addChild(&ColorRGBA761);

Shape758.setGeometry(&LineSet759);

HAnimSegment754.addChild(&Shape758);

HAnimSite& HAnimSite762 =  HAnimSite();
HAnimSite762.X3DNode::setName(CString("navel"));
HAnimSite762.setDEF(CString("hanim_navel"));
HAnimSite762.setTranslation(new float[]{0.0069,1.0966,0.1017});
TouchSensor& TouchSensor763 =  TouchSensor();
TouchSensor763.setDescription(CString("HAnimSite 84 navel"));
HAnimSite762.addChild(&TouchSensor763);

Shape& Shape764 =  Shape();
Shape764.setUSE(CString("HAnimSiteShape"));
HAnimSite762.addChild(&Shape764);

Billboard& Billboard765 =  Billboard();
Shape& Shape766 =  Shape();
Text& Text767 =  Text();
Text767.setString(new CString[]{CString("84")}, 1);
CFontStyle& FontStyle768 =  CFontStyle();
FontStyle768.setSize(0.035);
Text767.setFontStyle(&FontStyle768);

Shape766.setGeometry(&Text767);

Billboard765.addChild(&Shape766);

HAnimSite762.addChild(Billboard765);

HAnimSegment754.addChild(&HAnimSite762);

HAnimSite& HAnimSite769 =  HAnimSite();
HAnimSite769.X3DNode::setName(CString("waist_preferred_anterior"));
HAnimSite769.setDEF(CString("hanim_waist_preferred_anterior"));
TouchSensor& TouchSensor770 =  TouchSensor();
TouchSensor770.setDescription(CString("HAnimSite 26 waist_preferred_anterior"));
HAnimSite769.addChild(&TouchSensor770);

Shape& Shape771 =  Shape();
Shape771.setUSE(CString("HAnimSiteShape"));
HAnimSite769.addChild(&Shape771);

Billboard& Billboard772 =  Billboard();
Shape& Shape773 =  Shape();
Text& Text774 =  Text();
Text774.setString(new CString[]{CString("26")}, 1);
CFontStyle& FontStyle775 =  CFontStyle();
FontStyle775.setSize(0.035);
Text774.setFontStyle(&FontStyle775);

Shape773.setGeometry(&Text774);

Billboard772.addChild(&Shape773);

HAnimSite769.addChild(Billboard772);

HAnimSegment754.addChild(&HAnimSite769);

HAnimSite& HAnimSite776 =  HAnimSite();
HAnimSite776.X3DNode::setName(CString("waist_preferred_posterior"));
HAnimSite776.setDEF(CString("hanim_waist_preferred_posterior"));
HAnimSite776.setTranslation(new float[]{0.29,1.0915,-0.1091});
TouchSensor& TouchSensor777 =  TouchSensor();
TouchSensor777.setDescription(CString("HAnimSite 27 waist_preferred_posterior"));
HAnimSite776.addChild(&TouchSensor777);

Shape& Shape778 =  Shape();
Shape778.setUSE(CString("HAnimSiteShape"));
HAnimSite776.addChild(&Shape778);

Billboard& Billboard779 =  Billboard();
Shape& Shape780 =  Shape();
Text& Text781 =  Text();
Text781.setString(new CString[]{CString("27")}, 1);
CFontStyle& FontStyle782 =  CFontStyle();
FontStyle782.setSize(0.035);
Text781.setFontStyle(&FontStyle782);

Shape780.setGeometry(&Text781);

Billboard779.addChild(&Shape780);

HAnimSite776.addChild(Billboard779);

HAnimSegment754.addChild(&HAnimSite776);

HAnimJoint753.addChildren(&HAnimSegment754);

HAnimJoint& HAnimJoint783 =  HAnimJoint();
HAnimJoint783.X3DNode::setName(CString("vl4"));
HAnimJoint783.setDEF(CString("hanim_vl4"));
HAnimJoint783.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimSegment& HAnimSegment784 =  HAnimSegment();
HAnimSegment784.X3DNode::setName(CString("l4"));
HAnimSegment784.setDEF(CString("hanim_l4"));
Transform& Transform785 =  Transform();
Transform785.setTranslation(new float[]{0.0035,1.0925,-0.0787});
Transform& Transform786 =  Transform();
//Empty Transform
Shape& Shape787 =  Shape();
Shape787.setUSE(CString("HAnimJointShape"));
Transform786.addChild(&Shape787);

Transform785.addChild(&Transform786);

HAnimSegment784.addChild(&Transform785);

Shape& Shape788 =  Shape();
LineSet& LineSet789 =  LineSet();
LineSet789.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate790 =  Coordinate();
Coordinate790.setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet789.setCoord(Coordinate790);

//from vl4 to vl3 vertices 2
ColorRGBA& ColorRGBA791 =  ColorRGBA();
ColorRGBA791.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet789.addChild(&ColorRGBA791);

Shape788.setGeometry(&LineSet789);

HAnimSegment784.addChild(&Shape788);

HAnimJoint783.addChildren(&HAnimSegment784);

HAnimJoint& HAnimJoint792 =  HAnimJoint();
HAnimJoint792.X3DNode::setName(CString("vl3"));
HAnimJoint792.setDEF(CString("hanim_vl3"));
HAnimJoint792.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimSegment& HAnimSegment793 =  HAnimSegment();
HAnimSegment793.X3DNode::setName(CString("l3"));
HAnimSegment793.setDEF(CString("hanim_l3"));
Transform& Transform794 =  Transform();
Transform794.setTranslation(new float[]{0.0041,1.1276,-0.0796});
Transform& Transform795 =  Transform();
//Empty Transform
Shape& Shape796 =  Shape();
Shape796.setUSE(CString("HAnimJointShape"));
Transform795.addChild(&Shape796);

Transform794.addChild(&Transform795);

HAnimSegment793.addChild(&Transform794);

Shape& Shape797 =  Shape();
LineSet& LineSet798 =  LineSet();
LineSet798.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate799 =  Coordinate();
Coordinate799.setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet798.setCoord(Coordinate799);

//from vl3 to vl2 vertices 2
ColorRGBA& ColorRGBA800 =  ColorRGBA();
ColorRGBA800.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet798.addChild(&ColorRGBA800);

Shape797.setGeometry(&LineSet798);

HAnimSegment793.addChild(&Shape797);

HAnimJoint792.addChildren(&HAnimSegment793);

HAnimJoint& HAnimJoint801 =  HAnimJoint();
HAnimJoint801.X3DNode::setName(CString("vl2"));
HAnimJoint801.setDEF(CString("hanim_vl2"));
HAnimJoint801.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimSegment& HAnimSegment802 =  HAnimSegment();
HAnimSegment802.X3DNode::setName(CString("l2"));
HAnimSegment802.setDEF(CString("hanim_l2"));
Transform& Transform803 =  Transform();
Transform803.setTranslation(new float[]{0.0045,1.1546,-0.08});
Transform& Transform804 =  Transform();
//Empty Transform
Shape& Shape805 =  Shape();
Shape805.setUSE(CString("HAnimJointShape"));
Transform804.addChild(&Shape805);

Transform803.addChild(&Transform804);

HAnimSegment802.addChild(&Transform803);

Shape& Shape806 =  Shape();
LineSet& LineSet807 =  LineSet();
LineSet807.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate808 =  Coordinate();
Coordinate808.setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet807.setCoord(Coordinate808);

//from vl2 to vl1 vertices 2
ColorRGBA& ColorRGBA809 =  ColorRGBA();
ColorRGBA809.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet807.addChild(&ColorRGBA809);

Shape806.setGeometry(&LineSet807);

HAnimSegment802.addChild(&Shape806);

HAnimSite& HAnimSite810 =  HAnimSite();
HAnimSite810.X3DNode::setName(CString("l_rib10"));
HAnimSite810.setDEF(CString("hanim_l_rib10"));
HAnimSite810.setTranslation(new float[]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor811 =  TouchSensor();
TouchSensor811.setDescription(CString("HAnimSite 28 l_rib10"));
HAnimSite810.addChild(&TouchSensor811);

Shape& Shape812 =  Shape();
Shape812.setUSE(CString("HAnimSiteShape"));
HAnimSite810.addChild(&Shape812);

Billboard& Billboard813 =  Billboard();
Shape& Shape814 =  Shape();
Text& Text815 =  Text();
Text815.setString(new CString[]{CString("28")}, 1);
CFontStyle& FontStyle816 =  CFontStyle();
FontStyle816.setSize(0.035);
Text815.setFontStyle(&FontStyle816);

Shape814.setGeometry(&Text815);

Billboard813.addChild(&Shape814);

HAnimSite810.addChild(Billboard813);

HAnimSegment802.addChild(&HAnimSite810);

HAnimSite& HAnimSite817 =  HAnimSite();
HAnimSite817.X3DNode::setName(CString("r_rib10"));
HAnimSite817.setDEF(CString("hanim_r_rib10"));
HAnimSite817.setTranslation(new float[]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor818 =  TouchSensor();
TouchSensor818.setDescription(CString("HAnimSite 30 r_rib10"));
HAnimSite817.addChild(&TouchSensor818);

Shape& Shape819 =  Shape();
Shape819.setUSE(CString("HAnimSiteShape"));
HAnimSite817.addChild(&Shape819);

Billboard& Billboard820 =  Billboard();
Shape& Shape821 =  Shape();
Text& Text822 =  Text();
Text822.setString(new CString[]{CString("30")}, 1);
CFontStyle& FontStyle823 =  CFontStyle();
FontStyle823.setSize(0.035);
Text822.setFontStyle(&FontStyle823);

Shape821.setGeometry(&Text822);

Billboard820.addChild(&Shape821);

HAnimSite817.addChild(Billboard820);

HAnimSegment802.addChild(&HAnimSite817);

HAnimSite& HAnimSite824 =  HAnimSite();
HAnimSite824.X3DNode::setName(CString("spine_2_middle_back"));
HAnimSite824.setDEF(CString("hanim_spine_2_middle_back"));
TouchSensor& TouchSensor825 =  TouchSensor();
TouchSensor825.setDescription(CString("HAnimSite spine_2_middle_back"));
HAnimSite824.addChild(&TouchSensor825);

Shape& Shape826 =  Shape();
Shape826.setUSE(CString("HAnimSiteShape"));
HAnimSite824.addChild(&Shape826);

Billboard& Billboard827 =  Billboard();
Shape& Shape828 =  Shape();
Text& Text829 =  Text();
Text829.setString(new CString[]{CString("")}, 0);
CFontStyle& FontStyle830 =  CFontStyle();
FontStyle830.setSize(0.035);
Text829.setFontStyle(&FontStyle830);

Shape828.setGeometry(&Text829);

Billboard827.addChild(&Shape828);

HAnimSite824.addChild(Billboard827);

HAnimSegment802.addChild(&HAnimSite824);

HAnimJoint801.addChildren(&HAnimSegment802);

HAnimJoint& HAnimJoint831 =  HAnimJoint();
HAnimJoint831.X3DNode::setName(CString("vl1"));
HAnimJoint831.setDEF(CString("hanim_vl1"));
HAnimJoint831.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimSegment& HAnimSegment832 =  HAnimSegment();
HAnimSegment832.X3DNode::setName(CString("l1"));
HAnimSegment832.setDEF(CString("hanim_l1"));
Transform& Transform833 =  Transform();
Transform833.setTranslation(new float[]{0.0048,1.1912,-0.0805});
Transform& Transform834 =  Transform();
//Empty Transform
Shape& Shape835 =  Shape();
Shape835.setUSE(CString("HAnimJointShape"));
Transform834.addChild(&Shape835);

Transform833.addChild(&Transform834);

HAnimSegment832.addChild(&Transform833);

Shape& Shape836 =  Shape();
LineSet& LineSet837 =  LineSet();
LineSet837.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate838 =  Coordinate();
Coordinate838.setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet837.setCoord(Coordinate838);

//from vl1 to vt12 vertices 2
ColorRGBA& ColorRGBA839 =  ColorRGBA();
ColorRGBA839.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet837.addChild(&ColorRGBA839);

Shape836.setGeometry(&LineSet837);

HAnimSegment832.addChild(&Shape836);

HAnimJoint831.addChildren(&HAnimSegment832);

HAnimJoint& HAnimJoint840 =  HAnimJoint();
HAnimJoint840.X3DNode::setName(CString("vt12"));
HAnimJoint840.setDEF(CString("hanim_vt12"));
HAnimJoint840.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimSegment& HAnimSegment841 =  HAnimSegment();
HAnimSegment841.X3DNode::setName(CString("t12"));
HAnimSegment841.setDEF(CString("hanim_t12"));
Transform& Transform842 =  Transform();
Transform842.setTranslation(new float[]{0.0051,1.2278,-0.0808});
Transform& Transform843 =  Transform();
//Empty Transform
Shape& Shape844 =  Shape();
Shape844.setUSE(CString("HAnimJointShape"));
Transform843.addChild(&Shape844);

Transform842.addChild(&Transform843);

HAnimSegment841.addChild(&Transform842);

Shape& Shape845 =  Shape();
LineSet& LineSet846 =  LineSet();
LineSet846.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate847 =  Coordinate();
Coordinate847.setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet846.setCoord(Coordinate847);

//from vt12 to vt11 vertices 2
ColorRGBA& ColorRGBA848 =  ColorRGBA();
ColorRGBA848.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet846.addChild(&ColorRGBA848);

Shape845.setGeometry(&LineSet846);

HAnimSegment841.addChild(&Shape845);

HAnimJoint840.addChildren(&HAnimSegment841);

HAnimJoint& HAnimJoint849 =  HAnimJoint();
HAnimJoint849.X3DNode::setName(CString("vt11"));
HAnimJoint849.setDEF(CString("hanim_vt11"));
HAnimJoint849.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimSegment& HAnimSegment850 =  HAnimSegment();
HAnimSegment850.X3DNode::setName(CString("t11"));
HAnimSegment850.setDEF(CString("hanim_t11"));
Transform& Transform851 =  Transform();
Transform851.setTranslation(new float[]{0.0053,1.2679,-0.081});
Transform& Transform852 =  Transform();
//Empty Transform
Shape& Shape853 =  Shape();
Shape853.setUSE(CString("HAnimJointShape"));
Transform852.addChild(&Shape853);

Transform851.addChild(&Transform852);

HAnimSegment850.addChild(&Transform851);

Shape& Shape854 =  Shape();
LineSet& LineSet855 =  LineSet();
LineSet855.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate856 =  Coordinate();
Coordinate856.setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet855.setCoord(Coordinate856);

//from vt11 to vt10 vertices 2
ColorRGBA& ColorRGBA857 =  ColorRGBA();
ColorRGBA857.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet855.addChild(&ColorRGBA857);

Shape854.setGeometry(&LineSet855);

HAnimSegment850.addChild(&Shape854);

HAnimJoint849.addChildren(&HAnimSegment850);

HAnimJoint& HAnimJoint858 =  HAnimJoint();
HAnimJoint858.X3DNode::setName(CString("vt10"));
HAnimJoint858.setDEF(CString("hanim_vt10"));
HAnimJoint858.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimSegment& HAnimSegment859 =  HAnimSegment();
HAnimSegment859.X3DNode::setName(CString("t10"));
HAnimSegment859.setDEF(CString("hanim_t10"));
Transform& Transform860 =  Transform();
Transform860.setTranslation(new float[]{0.0056,1.2848,-0.0822});
Transform& Transform861 =  Transform();
//Empty Transform
Shape& Shape862 =  Shape();
Shape862.setUSE(CString("HAnimJointShape"));
Transform861.addChild(&Shape862);

Transform860.addChild(&Transform861);

HAnimSegment859.addChild(&Transform860);

Shape& Shape863 =  Shape();
LineSet& LineSet864 =  LineSet();
LineSet864.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate865 =  Coordinate();
Coordinate865.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet864.setCoord(Coordinate865);

//from vt10 to vt9 vertices 2
ColorRGBA& ColorRGBA866 =  ColorRGBA();
ColorRGBA866.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet864.addChild(&ColorRGBA866);

Shape863.setGeometry(&LineSet864);

HAnimSegment859.addChild(&Shape863);

HAnimSite& HAnimSite867 =  HAnimSite();
HAnimSite867.X3DNode::setName(CString("substernale"));
HAnimSite867.setDEF(CString("hanim_substernale"));
HAnimSite867.setTranslation(new float[]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor868 =  TouchSensor();
TouchSensor868.setDescription(CString("HAnimSite 13 substernale"));
HAnimSite867.addChild(&TouchSensor868);

Shape& Shape869 =  Shape();
Shape869.setUSE(CString("HAnimSiteShape"));
HAnimSite867.addChild(&Shape869);

Billboard& Billboard870 =  Billboard();
Shape& Shape871 =  Shape();
Text& Text872 =  Text();
Text872.setString(new CString[]{CString("13")}, 1);
CFontStyle& FontStyle873 =  CFontStyle();
FontStyle873.setSize(0.035);
Text872.setFontStyle(&FontStyle873);

Shape871.setGeometry(&Text872);

Billboard870.addChild(&Shape871);

HAnimSite867.addChild(Billboard870);

HAnimSegment859.addChild(&HAnimSite867);

HAnimJoint858.addChildren(&HAnimSegment859);

HAnimJoint& HAnimJoint874 =  HAnimJoint();
HAnimJoint874.X3DNode::setName(CString("vt9"));
HAnimJoint874.setDEF(CString("hanim_vt9"));
HAnimJoint874.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimSegment& HAnimSegment875 =  HAnimSegment();
HAnimSegment875.X3DNode::setName(CString("t9"));
HAnimSegment875.setDEF(CString("hanim_t9"));
Transform& Transform876 =  Transform();
Transform876.setTranslation(new float[]{0.0057,1.3126,-0.0838});
Transform& Transform877 =  Transform();
//Empty Transform
Shape& Shape878 =  Shape();
Shape878.setUSE(CString("HAnimJointShape"));
Transform877.addChild(&Shape878);

Transform876.addChild(&Transform877);

HAnimSegment875.addChild(&Transform876);

Shape& Shape879 =  Shape();
LineSet& LineSet880 =  LineSet();
LineSet880.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate881 =  Coordinate();
Coordinate881.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet880.setCoord(Coordinate881);

//from vt9 to vt8 vertices 2
ColorRGBA& ColorRGBA882 =  ColorRGBA();
ColorRGBA882.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet880.addChild(&ColorRGBA882);

Shape879.setGeometry(&LineSet880);

HAnimSegment875.addChild(&Shape879);

HAnimSite& HAnimSite883 =  HAnimSite();
HAnimSite883.X3DNode::setName(CString("l_thelion"));
HAnimSite883.setDEF(CString("hanim_l_thelion"));
HAnimSite883.setTranslation(new float[]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor884 =  TouchSensor();
TouchSensor884.setDescription(CString("HAnimSite 29 l_thelion"));
HAnimSite883.addChild(&TouchSensor884);

Shape& Shape885 =  Shape();
Shape885.setUSE(CString("HAnimSiteShape"));
HAnimSite883.addChild(&Shape885);

Billboard& Billboard886 =  Billboard();
Shape& Shape887 =  Shape();
Text& Text888 =  Text();
Text888.setString(new CString[]{CString("29")}, 1);
CFontStyle& FontStyle889 =  CFontStyle();
FontStyle889.setSize(0.035);
Text888.setFontStyle(&FontStyle889);

Shape887.setGeometry(&Text888);

Billboard886.addChild(&Shape887);

HAnimSite883.addChild(Billboard886);

HAnimSegment875.addChild(&HAnimSite883);

HAnimSite& HAnimSite890 =  HAnimSite();
HAnimSite890.X3DNode::setName(CString("r_thelion"));
HAnimSite890.setDEF(CString("hanim_r_thelion"));
HAnimSite890.setTranslation(new float[]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor891 =  TouchSensor();
TouchSensor891.setDescription(CString("HAnimSite 31 r_thelion"));
HAnimSite890.addChild(&TouchSensor891);

Shape& Shape892 =  Shape();
Shape892.setUSE(CString("HAnimSiteShape"));
HAnimSite890.addChild(&Shape892);

Billboard& Billboard893 =  Billboard();
Shape& Shape894 =  Shape();
Text& Text895 =  Text();
Text895.setString(new CString[]{CString("31")}, 1);
CFontStyle& FontStyle896 =  CFontStyle();
FontStyle896.setSize(0.035);
Text895.setFontStyle(&FontStyle896);

Shape894.setGeometry(&Text895);

Billboard893.addChild(&Shape894);

HAnimSite890.addChild(Billboard893);

HAnimSegment875.addChild(&HAnimSite890);

HAnimJoint874.addChildren(&HAnimSegment875);

HAnimJoint& HAnimJoint897 =  HAnimJoint();
HAnimJoint897.X3DNode::setName(CString("vt8"));
HAnimJoint897.setDEF(CString("hanim_vt8"));
HAnimJoint897.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimSegment& HAnimSegment898 =  HAnimSegment();
HAnimSegment898.X3DNode::setName(CString("t8"));
HAnimSegment898.setDEF(CString("hanim_t8"));
Transform& Transform899 =  Transform();
Transform899.setTranslation(new float[]{0.0057,1.3382,-0.0845});
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
Coordinate904.setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet903.setCoord(Coordinate904);

//from vt8 to vt7 vertices 2
ColorRGBA& ColorRGBA905 =  ColorRGBA();
ColorRGBA905.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet903.addChild(&ColorRGBA905);

Shape902.setGeometry(&LineSet903);

HAnimSegment898.addChild(&Shape902);

HAnimJoint897.addChildren(&HAnimSegment898);

HAnimJoint& HAnimJoint906 =  HAnimJoint();
HAnimJoint906.X3DNode::setName(CString("vt7"));
HAnimJoint906.setDEF(CString("hanim_vt7"));
HAnimJoint906.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimSegment& HAnimSegment907 =  HAnimSegment();
HAnimSegment907.X3DNode::setName(CString("t7"));
HAnimSegment907.setDEF(CString("hanim_t7"));
Transform& Transform908 =  Transform();
Transform908.setTranslation(new float[]{0.0058,1.3625,-0.0833});
Transform& Transform909 =  Transform();
//Empty Transform
Shape& Shape910 =  Shape();
Shape910.setUSE(CString("HAnimJointShape"));
Transform909.addChild(&Shape910);

Transform908.addChild(&Transform909);

HAnimSegment907.addChild(&Transform908);

Shape& Shape911 =  Shape();
LineSet& LineSet912 =  LineSet();
LineSet912.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate913 =  Coordinate();
Coordinate913.setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet912.setCoord(Coordinate913);

//from vt7 to vt6 vertices 2
ColorRGBA& ColorRGBA914 =  ColorRGBA();
ColorRGBA914.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet912.addChild(&ColorRGBA914);

Shape911.setGeometry(&LineSet912);

HAnimSegment907.addChild(&Shape911);

HAnimJoint906.addChildren(&HAnimSegment907);

HAnimJoint& HAnimJoint915 =  HAnimJoint();
HAnimJoint915.X3DNode::setName(CString("vt6"));
HAnimJoint915.setDEF(CString("hanim_vt6"));
HAnimJoint915.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimSegment& HAnimSegment916 =  HAnimSegment();
HAnimSegment916.X3DNode::setName(CString("t6"));
HAnimSegment916.setDEF(CString("hanim_t6"));
Transform& Transform917 =  Transform();
Transform917.setTranslation(new float[]{0.0059,1.3866,-0.08});
Transform& Transform918 =  Transform();
//Empty Transform
Shape& Shape919 =  Shape();
Shape919.setUSE(CString("HAnimJointShape"));
Transform918.addChild(&Shape919);

Transform917.addChild(&Transform918);

HAnimSegment916.addChild(&Transform917);

Shape& Shape920 =  Shape();
LineSet& LineSet921 =  LineSet();
LineSet921.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate922 =  Coordinate();
Coordinate922.setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet921.setCoord(Coordinate922);

//from vt6 to vt5 vertices 2
ColorRGBA& ColorRGBA923 =  ColorRGBA();
ColorRGBA923.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet921.addChild(&ColorRGBA923);

Shape920.setGeometry(&LineSet921);

HAnimSegment916.addChild(&Shape920);

HAnimSite& HAnimSite924 =  HAnimSite();
HAnimSite924.X3DNode::setName(CString("l_chest_midsagittal_plane"));
HAnimSite924.setDEF(CString("hanim_l_chest_midsagittal_plane"));
TouchSensor& TouchSensor925 =  TouchSensor();
TouchSensor925.setDescription(CString("HAnimSite 94 l_chest_midsagittal_plane"));
HAnimSite924.addChild(&TouchSensor925);

Shape& Shape926 =  Shape();
Shape926.setUSE(CString("HAnimSiteShape"));
HAnimSite924.addChild(&Shape926);

Billboard& Billboard927 =  Billboard();
Shape& Shape928 =  Shape();
Text& Text929 =  Text();
Text929.setString(new CString[]{CString("94")}, 1);
CFontStyle& FontStyle930 =  CFontStyle();
FontStyle930.setSize(0.035);
Text929.setFontStyle(&FontStyle930);

Shape928.setGeometry(&Text929);

Billboard927.addChild(&Shape928);

HAnimSite924.addChild(Billboard927);

HAnimSegment916.addChild(&HAnimSite924);

HAnimSite& HAnimSite931 =  HAnimSite();
HAnimSite931.X3DNode::setName(CString("mesosternale"));
HAnimSite931.setDEF(CString("hanim_mesosternale"));
TouchSensor& TouchSensor932 =  TouchSensor();
TouchSensor932.setDescription(CString("HAnimSite 88 mesosternale"));
HAnimSite931.addChild(&TouchSensor932);

Shape& Shape933 =  Shape();
Shape933.setUSE(CString("HAnimSiteShape"));
HAnimSite931.addChild(&Shape933);

Billboard& Billboard934 =  Billboard();
Shape& Shape935 =  Shape();
Text& Text936 =  Text();
Text936.setString(new CString[]{CString("88")}, 1);
CFontStyle& FontStyle937 =  CFontStyle();
FontStyle937.setSize(0.035);
Text936.setFontStyle(&FontStyle937);

Shape935.setGeometry(&Text936);

Billboard934.addChild(&Shape935);

HAnimSite931.addChild(Billboard934);

HAnimSegment916.addChild(&HAnimSite931);

HAnimSite& HAnimSite938 =  HAnimSite();
HAnimSite938.X3DNode::setName(CString("r_chest_midsagittal_plane"));
HAnimSite938.setDEF(CString("hanim_r_chest_midsagittal_plane"));
TouchSensor& TouchSensor939 =  TouchSensor();
TouchSensor939.setDescription(CString("HAnimSite 95 r_chest_midsagittal_plane"));
HAnimSite938.addChild(&TouchSensor939);

Shape& Shape940 =  Shape();
Shape940.setUSE(CString("HAnimSiteShape"));
HAnimSite938.addChild(&Shape940);

Billboard& Billboard941 =  Billboard();
Shape& Shape942 =  Shape();
Text& Text943 =  Text();
Text943.setString(new CString[]{CString("95")}, 1);
CFontStyle& FontStyle944 =  CFontStyle();
FontStyle944.setSize(0.035);
Text943.setFontStyle(&FontStyle944);

Shape942.setGeometry(&Text943);

Billboard941.addChild(&Shape942);

HAnimSite938.addChild(Billboard941);

HAnimSegment916.addChild(&HAnimSite938);

HAnimSite& HAnimSite945 =  HAnimSite();
HAnimSite945.X3DNode::setName(CString("rear_center_midsagittal_plane"));
HAnimSite945.setDEF(CString("hanim_rear_center_midsagittal_plane"));
TouchSensor& TouchSensor946 =  TouchSensor();
TouchSensor946.setDescription(CString("HAnimSite 92 rear_center_midsagittal_plane"));
HAnimSite945.addChild(&TouchSensor946);

Shape& Shape947 =  Shape();
Shape947.setUSE(CString("HAnimSiteShape"));
HAnimSite945.addChild(&Shape947);

Billboard& Billboard948 =  Billboard();
Shape& Shape949 =  Shape();
Text& Text950 =  Text();
Text950.setString(new CString[]{CString("92")}, 1);
CFontStyle& FontStyle951 =  CFontStyle();
FontStyle951.setSize(0.035);
Text950.setFontStyle(&FontStyle951);

Shape949.setGeometry(&Text950);

Billboard948.addChild(&Shape949);

HAnimSite945.addChild(Billboard948);

HAnimSegment916.addChild(&HAnimSite945);

HAnimJoint915.addChildren(&HAnimSegment916);

HAnimJoint& HAnimJoint952 =  HAnimJoint();
HAnimJoint952.X3DNode::setName(CString("vt5"));
HAnimJoint952.setDEF(CString("hanim_vt5"));
HAnimJoint952.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimSegment& HAnimSegment953 =  HAnimSegment();
HAnimSegment953.X3DNode::setName(CString("t5"));
HAnimSegment953.setDEF(CString("hanim_t5"));
Transform& Transform954 =  Transform();
Transform954.setTranslation(new float[]{0.006,1.4102,-0.0745});
Transform& Transform955 =  Transform();
//Empty Transform
Shape& Shape956 =  Shape();
Shape956.setUSE(CString("HAnimJointShape"));
Transform955.addChild(&Shape956);

Transform954.addChild(&Transform955);

HAnimSegment953.addChild(&Transform954);

Shape& Shape957 =  Shape();
LineSet& LineSet958 =  LineSet();
LineSet958.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate959 =  Coordinate();
Coordinate959.setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet958.setCoord(Coordinate959);

//from vt5 to vt4 vertices 2
ColorRGBA& ColorRGBA960 =  ColorRGBA();
ColorRGBA960.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet958.addChild(&ColorRGBA960);

Shape957.setGeometry(&LineSet958);

HAnimSegment953.addChild(&Shape957);

HAnimSite& HAnimSite961 =  HAnimSite();
HAnimSite961.X3DNode::setName(CString("spine_1_middle_back"));
HAnimSite961.setDEF(CString("hanim_spine_1_middle_back"));
TouchSensor& TouchSensor962 =  TouchSensor();
TouchSensor962.setDescription(CString("HAnimSite 24 spine_1_middle_back"));
HAnimSite961.addChild(&TouchSensor962);

Shape& Shape963 =  Shape();
Shape963.setUSE(CString("HAnimSiteShape"));
HAnimSite961.addChild(&Shape963);

Billboard& Billboard964 =  Billboard();
Shape& Shape965 =  Shape();
Text& Text966 =  Text();
Text966.setString(new CString[]{CString("24")}, 1);
CFontStyle& FontStyle967 =  CFontStyle();
FontStyle967.setSize(0.035);
Text966.setFontStyle(&FontStyle967);

Shape965.setGeometry(&Text966);

Billboard964.addChild(&Shape965);

HAnimSite961.addChild(Billboard964);

HAnimSegment953.addChild(&HAnimSite961);

HAnimJoint952.addChildren(&HAnimSegment953);

HAnimJoint& HAnimJoint968 =  HAnimJoint();
HAnimJoint968.X3DNode::setName(CString("vt4"));
HAnimJoint968.setDEF(CString("hanim_vt4"));
HAnimJoint968.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimSegment& HAnimSegment969 =  HAnimSegment();
HAnimSegment969.X3DNode::setName(CString("t4"));
HAnimSegment969.setDEF(CString("hanim_t4"));
Transform& Transform970 =  Transform();
Transform970.setTranslation(new float[]{0.0061,1.432,-0.0675});
Transform& Transform971 =  Transform();
//Empty Transform
Shape& Shape972 =  Shape();
Shape972.setUSE(CString("HAnimJointShape"));
Transform971.addChild(&Shape972);

Transform970.addChild(&Transform971);

HAnimSegment969.addChild(&Transform970);

Shape& Shape973 =  Shape();
LineSet& LineSet974 =  LineSet();
LineSet974.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate975 =  Coordinate();
Coordinate975.setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet974.setCoord(Coordinate975);

//from vt4 to vt3 vertices 2
ColorRGBA& ColorRGBA976 =  ColorRGBA();
ColorRGBA976.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet974.addChild(&ColorRGBA976);

Shape973.setGeometry(&LineSet974);

HAnimSegment969.addChild(&Shape973);

HAnimJoint968.addChildren(&HAnimSegment969);

HAnimJoint& HAnimJoint977 =  HAnimJoint();
HAnimJoint977.X3DNode::setName(CString("vt3"));
HAnimJoint977.setDEF(CString("hanim_vt3"));
HAnimJoint977.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimSegment& HAnimSegment978 =  HAnimSegment();
HAnimSegment978.X3DNode::setName(CString("t3"));
HAnimSegment978.setDEF(CString("hanim_t3"));
Transform& Transform979 =  Transform();
Transform979.setTranslation(new float[]{0.0062,1.4583,-0.057});
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
Coordinate984.setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet983.setCoord(Coordinate984);

//from vt3 to vt2 vertices 2
ColorRGBA& ColorRGBA985 =  ColorRGBA();
ColorRGBA985.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet983.addChild(&ColorRGBA985);

Shape982.setGeometry(&LineSet983);

HAnimSegment978.addChild(&Shape982);

HAnimJoint977.addChildren(&HAnimSegment978);

HAnimJoint& HAnimJoint986 =  HAnimJoint();
HAnimJoint986.X3DNode::setName(CString("vt2"));
HAnimJoint986.setDEF(CString("hanim_vt2"));
HAnimJoint986.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimSegment& HAnimSegment987 =  HAnimSegment();
HAnimSegment987.X3DNode::setName(CString("t2"));
HAnimSegment987.setDEF(CString("hanim_t2"));
Transform& Transform988 =  Transform();
Transform988.setTranslation(new float[]{0.0063,1.4761,-0.0484});
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
Coordinate993.setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet992.setCoord(Coordinate993);

//from vt2 to vt1 vertices 2
ColorRGBA& ColorRGBA994 =  ColorRGBA();
ColorRGBA994.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet992.addChild(&ColorRGBA994);

Shape991.setGeometry(&LineSet992);

HAnimSegment987.addChild(&Shape991);

HAnimJoint986.addChildren(&HAnimSegment987);

HAnimJoint& HAnimJoint995 =  HAnimJoint();
HAnimJoint995.X3DNode::setName(CString("vt1"));
HAnimJoint995.setDEF(CString("hanim_vt1"));
HAnimJoint995.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimSegment& HAnimSegment996 =  HAnimSegment();
HAnimSegment996.X3DNode::setName(CString("t1"));
HAnimSegment996.setDEF(CString("hanim_t1"));
Transform& Transform997 =  Transform();
Transform997.setTranslation(new float[]{0.0065,1.4951,-0.0387});
Transform& Transform998 =  Transform();
//Empty Transform
Shape& Shape999 =  Shape();
Shape999.setUSE(CString("HAnimJointShape"));
Transform998.addChild(&Shape999);

Transform997.addChild(&Transform998);

HAnimSegment996.addChild(&Transform997);

Shape& Shape1000 =  Shape();
LineSet& LineSet1001 =  LineSet();
LineSet1001.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1002 =  Coordinate();
Coordinate1002.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet1001.setCoord(Coordinate1002);

//from vt1 to vc7 vertices 2
ColorRGBA& ColorRGBA1003 =  ColorRGBA();
ColorRGBA1003.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1001.addChild(&ColorRGBA1003);

Shape1000.setGeometry(&LineSet1001);

HAnimSegment996.addChild(&Shape1000);

HAnimSite& HAnimSite1004 =  HAnimSite();
HAnimSite1004.X3DNode::setName(CString("cervicale"));
HAnimSite1004.setDEF(CString("hanim_cervicale"));
HAnimSite1004.setTranslation(new float[]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor1005 =  TouchSensor();
TouchSensor1005.setDescription(CString("HAnimSite 10 cervicale"));
HAnimSite1004.addChild(&TouchSensor1005);

Shape& Shape1006 =  Shape();
Shape1006.setUSE(CString("HAnimSiteShape"));
HAnimSite1004.addChild(&Shape1006);

Billboard& Billboard1007 =  Billboard();
Shape& Shape1008 =  Shape();
Text& Text1009 =  Text();
Text1009.setString(new CString[]{CString("10")}, 1);
CFontStyle& FontStyle1010 =  CFontStyle();
FontStyle1010.setSize(0.035);
Text1009.setFontStyle(&FontStyle1010);

Shape1008.setGeometry(&Text1009);

Billboard1007.addChild(&Shape1008);

HAnimSite1004.addChild(Billboard1007);

HAnimSegment996.addChild(&HAnimSite1004);

HAnimSite& HAnimSite1011 =  HAnimSite();
HAnimSite1011.X3DNode::setName(CString("suprasternale"));
HAnimSite1011.setDEF(CString("hanim_suprasternale"));
HAnimSite1011.setTranslation(new float[]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor1012 =  TouchSensor();
TouchSensor1012.setDescription(CString("HAnimSite 12 suprasternale"));
HAnimSite1011.addChild(&TouchSensor1012);

Shape& Shape1013 =  Shape();
Shape1013.setUSE(CString("HAnimSiteShape"));
HAnimSite1011.addChild(&Shape1013);

Billboard& Billboard1014 =  Billboard();
Shape& Shape1015 =  Shape();
Text& Text1016 =  Text();
Text1016.setString(new CString[]{CString("12")}, 1);
CFontStyle& FontStyle1017 =  CFontStyle();
FontStyle1017.setSize(0.035);
Text1016.setFontStyle(&FontStyle1017);

Shape1015.setGeometry(&Text1016);

Billboard1014.addChild(&Shape1015);

HAnimSite1011.addChild(Billboard1014);

HAnimSegment996.addChild(&HAnimSite1011);

Shape& Shape1018 =  Shape();
LineSet& LineSet1019 =  LineSet();
LineSet1019.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1020 =  Coordinate();
Coordinate1020.setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet1019.setCoord(Coordinate1020);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA& ColorRGBA1021 =  ColorRGBA();
ColorRGBA1021.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1019.addChild(&ColorRGBA1021);

Shape1018.setGeometry(&LineSet1019);

HAnimSegment996.addChild(&Shape1018);

Shape& Shape1022 =  Shape();
LineSet& LineSet1023 =  LineSet();
LineSet1023.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1024 =  Coordinate();
Coordinate1024.setPoint(new float[]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
LineSet1023.setCoord(Coordinate1024);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA& ColorRGBA1025 =  ColorRGBA();
ColorRGBA1025.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1023.addChild(&ColorRGBA1025);

Shape1022.setGeometry(&LineSet1023);

HAnimSegment996.addChild(&Shape1022);

HAnimJoint995.addChildren(&HAnimSegment996);

HAnimJoint& HAnimJoint1026 =  HAnimJoint();
HAnimJoint1026.X3DNode::setName(CString("vc7"));
HAnimJoint1026.setDEF(CString("hanim_vc7"));
HAnimJoint1026.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimSegment& HAnimSegment1027 =  HAnimSegment();
HAnimSegment1027.X3DNode::setName(CString("c7"));
HAnimSegment1027.setDEF(CString("hanim_c7"));
Transform& Transform1028 =  Transform();
Transform1028.setTranslation(new float[]{0.0066,1.5132,-0.0301});
Transform& Transform1029 =  Transform();
//Empty Transform
Shape& Shape1030 =  Shape();
Shape1030.setUSE(CString("HAnimJointShape"));
Transform1029.addChild(&Shape1030);

Transform1028.addChild(&Transform1029);

HAnimSegment1027.addChild(&Transform1028);

Shape& Shape1031 =  Shape();
LineSet& LineSet1032 =  LineSet();
LineSet1032.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1033 =  Coordinate();
Coordinate1033.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet1032.setCoord(Coordinate1033);

//from vc7 to vc6 vertices 2
ColorRGBA& ColorRGBA1034 =  ColorRGBA();
ColorRGBA1034.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1032.addChild(&ColorRGBA1034);

Shape1031.setGeometry(&LineSet1032);

HAnimSegment1027.addChild(&Shape1031);

HAnimSite& HAnimSite1035 =  HAnimSite();
HAnimSite1035.X3DNode::setName(CString("l_neck_base"));
HAnimSite1035.setDEF(CString("hanim_l_neck_base"));
HAnimSite1035.setTranslation(new float[]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor1036 =  TouchSensor();
TouchSensor1036.setDescription(CString("HAnimSite 82 l_neck_base"));
HAnimSite1035.addChild(&TouchSensor1036);

Shape& Shape1037 =  Shape();
Shape1037.setUSE(CString("HAnimSiteShape"));
HAnimSite1035.addChild(&Shape1037);

Billboard& Billboard1038 =  Billboard();
Shape& Shape1039 =  Shape();
Text& Text1040 =  Text();
Text1040.setString(new CString[]{CString("82")}, 1);
CFontStyle& FontStyle1041 =  CFontStyle();
FontStyle1041.setSize(0.035);
Text1040.setFontStyle(&FontStyle1041);

Shape1039.setGeometry(&Text1040);

Billboard1038.addChild(&Shape1039);

HAnimSite1035.addChild(Billboard1038);

HAnimSegment1027.addChild(&HAnimSite1035);

HAnimSite& HAnimSite1042 =  HAnimSite();
HAnimSite1042.X3DNode::setName(CString("r_neck_base"));
HAnimSite1042.setDEF(CString("hanim_r_neck_base"));
HAnimSite1042.setTranslation(new float[]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor1043 =  TouchSensor();
TouchSensor1043.setDescription(CString("HAnimSite 83 r_neck_base"));
HAnimSite1042.addChild(&TouchSensor1043);

Shape& Shape1044 =  Shape();
Shape1044.setUSE(CString("HAnimSiteShape"));
HAnimSite1042.addChild(&Shape1044);

Billboard& Billboard1045 =  Billboard();
Shape& Shape1046 =  Shape();
Text& Text1047 =  Text();
Text1047.setString(new CString[]{CString("83")}, 1);
CFontStyle& FontStyle1048 =  CFontStyle();
FontStyle1048.setSize(0.035);
Text1047.setFontStyle(&FontStyle1048);

Shape1046.setGeometry(&Text1047);

Billboard1045.addChild(&Shape1046);

HAnimSite1042.addChild(Billboard1045);

HAnimSegment1027.addChild(&HAnimSite1042);

HAnimJoint1026.addChildren(&HAnimSegment1027);

HAnimJoint& HAnimJoint1049 =  HAnimJoint();
HAnimJoint1049.X3DNode::setName(CString("vc6"));
HAnimJoint1049.setDEF(CString("hanim_vc6"));
HAnimJoint1049.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimSegment& HAnimSegment1050 =  HAnimSegment();
HAnimSegment1050.X3DNode::setName(CString("c6"));
HAnimSegment1050.setDEF(CString("hanim_c6"));
Transform& Transform1051 =  Transform();
Transform1051.setTranslation(new float[]{0.0066,1.5357,-0.0143});
Transform& Transform1052 =  Transform();
//Empty Transform
Shape& Shape1053 =  Shape();
Shape1053.setUSE(CString("HAnimJointShape"));
Transform1052.addChild(&Shape1053);

Transform1051.addChild(&Transform1052);

HAnimSegment1050.addChild(&Transform1051);

Shape& Shape1054 =  Shape();
LineSet& LineSet1055 =  LineSet();
LineSet1055.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1056 =  Coordinate();
Coordinate1056.setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet1055.setCoord(Coordinate1056);

//from vc6 to vc5 vertices 2
ColorRGBA& ColorRGBA1057 =  ColorRGBA();
ColorRGBA1057.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1055.addChild(&ColorRGBA1057);

Shape1054.setGeometry(&LineSet1055);

HAnimSegment1050.addChild(&Shape1054);

HAnimJoint1049.addChildren(&HAnimSegment1050);

HAnimJoint& HAnimJoint1058 =  HAnimJoint();
HAnimJoint1058.X3DNode::setName(CString("vc5"));
HAnimJoint1058.setDEF(CString("hanim_vc5"));
HAnimJoint1058.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimSegment& HAnimSegment1059 =  HAnimSegment();
HAnimSegment1059.X3DNode::setName(CString("c5"));
HAnimSegment1059.setDEF(CString("hanim_c5"));
Transform& Transform1060 =  Transform();
Transform1060.setTranslation(new float[]{0.0066,1.552,-0.0082});
Transform& Transform1061 =  Transform();
//Empty Transform
Shape& Shape1062 =  Shape();
Shape1062.setUSE(CString("HAnimJointShape"));
Transform1061.addChild(&Shape1062);

Transform1060.addChild(&Transform1061);

HAnimSegment1059.addChild(&Transform1060);

Shape& Shape1063 =  Shape();
LineSet& LineSet1064 =  LineSet();
LineSet1064.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1065 =  Coordinate();
Coordinate1065.setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet1064.setCoord(Coordinate1065);

//from vc5 to vc4 vertices 2
ColorRGBA& ColorRGBA1066 =  ColorRGBA();
ColorRGBA1066.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1064.addChild(&ColorRGBA1066);

Shape1063.setGeometry(&LineSet1064);

HAnimSegment1059.addChild(&Shape1063);

HAnimJoint1058.addChildren(&HAnimSegment1059);

HAnimJoint& HAnimJoint1067 =  HAnimJoint();
HAnimJoint1067.X3DNode::setName(CString("vc4"));
HAnimJoint1067.setDEF(CString("hanim_vc4"));
HAnimJoint1067.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimSegment& HAnimSegment1068 =  HAnimSegment();
HAnimSegment1068.X3DNode::setName(CString("c4"));
HAnimSegment1068.setDEF(CString("hanim_c4"));
Transform& Transform1069 =  Transform();
Transform1069.setTranslation(new float[]{0.0066,1.5662,-0.0084});
Transform& Transform1070 =  Transform();
//Empty Transform
Shape& Shape1071 =  Shape();
Shape1071.setUSE(CString("HAnimJointShape"));
Transform1070.addChild(&Shape1071);

Transform1069.addChild(&Transform1070);

HAnimSegment1068.addChild(&Transform1069);

Shape& Shape1072 =  Shape();
LineSet& LineSet1073 =  LineSet();
LineSet1073.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1074 =  Coordinate();
Coordinate1074.setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet1073.setCoord(Coordinate1074);

//from vc4 to vc3 vertices 2
ColorRGBA& ColorRGBA1075 =  ColorRGBA();
ColorRGBA1075.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1073.addChild(&ColorRGBA1075);

Shape1072.setGeometry(&LineSet1073);

HAnimSegment1068.addChild(&Shape1072);

HAnimJoint1067.addChildren(&HAnimSegment1068);

HAnimJoint& HAnimJoint1076 =  HAnimJoint();
HAnimJoint1076.X3DNode::setName(CString("vc3"));
HAnimJoint1076.setDEF(CString("hanim_vc3"));
HAnimJoint1076.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimSegment& HAnimSegment1077 =  HAnimSegment();
HAnimSegment1077.X3DNode::setName(CString("c3"));
HAnimSegment1077.setDEF(CString("hanim_c3"));
Transform& Transform1078 =  Transform();
Transform1078.setTranslation(new float[]{0.0066,1.58,-0.0103});
Transform& Transform1079 =  Transform();
//Empty Transform
Shape& Shape1080 =  Shape();
Shape1080.setUSE(CString("HAnimJointShape"));
Transform1079.addChild(&Shape1080);

Transform1078.addChild(&Transform1079);

HAnimSegment1077.addChild(&Transform1078);

Shape& Shape1081 =  Shape();
LineSet& LineSet1082 =  LineSet();
LineSet1082.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1083 =  Coordinate();
Coordinate1083.setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet1082.setCoord(Coordinate1083);

//from vc3 to vc2 vertices 2
ColorRGBA& ColorRGBA1084 =  ColorRGBA();
ColorRGBA1084.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1082.addChild(&ColorRGBA1084);

Shape1081.setGeometry(&LineSet1082);

HAnimSegment1077.addChild(&Shape1081);

HAnimJoint1076.addChildren(&HAnimSegment1077);

HAnimJoint& HAnimJoint1085 =  HAnimJoint();
HAnimJoint1085.X3DNode::setName(CString("vc2"));
HAnimJoint1085.setDEF(CString("hanim_vc2"));
HAnimJoint1085.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimSegment& HAnimSegment1086 =  HAnimSegment();
HAnimSegment1086.X3DNode::setName(CString("c2"));
HAnimSegment1086.setDEF(CString("hanim_c2"));
Transform& Transform1087 =  Transform();
Transform1087.setTranslation(new float[]{0.0066,1.5928,-0.0103});
Transform& Transform1088 =  Transform();
//Empty Transform
Shape& Shape1089 =  Shape();
Shape1089.setUSE(CString("HAnimJointShape"));
Transform1088.addChild(&Shape1089);

Transform1087.addChild(&Transform1088);

HAnimSegment1086.addChild(&Transform1087);

Shape& Shape1090 =  Shape();
LineSet& LineSet1091 =  LineSet();
LineSet1091.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1092 =  Coordinate();
Coordinate1092.setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet1091.setCoord(Coordinate1092);

//from vc2 to vc1 vertices 2
ColorRGBA& ColorRGBA1093 =  ColorRGBA();
ColorRGBA1093.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1091.addChild(&ColorRGBA1093);

Shape1090.setGeometry(&LineSet1091);

HAnimSegment1086.addChild(&Shape1090);

HAnimSite& HAnimSite1094 =  HAnimSite();
HAnimSite1094.X3DNode::setName(CString("adams_apple"));
HAnimSite1094.setDEF(CString("hanim_adams_apple"));
TouchSensor& TouchSensor1095 =  TouchSensor();
TouchSensor1095.setDescription(CString("HAnimSite 11 adams_apple"));
HAnimSite1094.addChild(&TouchSensor1095);

Shape& Shape1096 =  Shape();
Shape1096.setUSE(CString("HAnimSiteShape"));
HAnimSite1094.addChild(&Shape1096);

Billboard& Billboard1097 =  Billboard();
Shape& Shape1098 =  Shape();
Text& Text1099 =  Text();
Text1099.setString(new CString[]{CString("11")}, 1);
CFontStyle& FontStyle1100 =  CFontStyle();
FontStyle1100.setSize(0.035);
Text1099.setFontStyle(&FontStyle1100);

Shape1098.setGeometry(&Text1099);

Billboard1097.addChild(&Shape1098);

HAnimSite1094.addChild(Billboard1097);

HAnimSegment1086.addChild(&HAnimSite1094);

HAnimJoint1085.addChildren(&HAnimSegment1086);

HAnimJoint& HAnimJoint1101 =  HAnimJoint();
HAnimJoint1101.X3DNode::setName(CString("vc1"));
HAnimJoint1101.setDEF(CString("hanim_vc1"));
HAnimJoint1101.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimSegment& HAnimSegment1102 =  HAnimSegment();
HAnimSegment1102.X3DNode::setName(CString("c1"));
HAnimSegment1102.setDEF(CString("hanim_c1"));
Transform& Transform1103 =  Transform();
Transform1103.setTranslation(new float[]{0.0066,1.6144,-0.0034});
Transform& Transform1104 =  Transform();
//Empty Transform
Shape& Shape1105 =  Shape();
Shape1105.setUSE(CString("HAnimJointShape"));
Transform1104.addChild(&Shape1105);

Transform1103.addChild(&Transform1104);

HAnimSegment1102.addChild(&Transform1103);

Shape& Shape1106 =  Shape();
LineSet& LineSet1107 =  LineSet();
LineSet1107.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1108 =  Coordinate();
Coordinate1108.setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet1107.setCoord(Coordinate1108);

//from vc1 to skullbase vertices 2
ColorRGBA& ColorRGBA1109 =  ColorRGBA();
ColorRGBA1109.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1107.addChild(&ColorRGBA1109);

Shape1106.setGeometry(&LineSet1107);

HAnimSegment1102.addChild(&Shape1106);

HAnimJoint1101.addChildren(&HAnimSegment1102);

HAnimJoint& HAnimJoint1110 =  HAnimJoint();
HAnimJoint1110.X3DNode::setName(CString("skullbase"));
HAnimJoint1110.setDEF(CString("hanim_skullbase"));
HAnimJoint1110.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimSegment& HAnimSegment1111 =  HAnimSegment();
HAnimSegment1111.X3DNode::setName(CString("skull"));
HAnimSegment1111.setDEF(CString("hanim_skull"));
Transform& Transform1112 =  Transform();
Transform1112.setTranslation(new float[]{0.0044,1.6209,0.0236});
Transform& Transform1113 =  Transform();
//Empty Transform
Shape& Shape1114 =  Shape();
Shape1114.setUSE(CString("HAnimJointShape"));
Transform1113.addChild(&Shape1114);

Transform1112.addChild(&Transform1113);

HAnimSegment1111.addChild(&Transform1112);

Shape& Shape1115 =  Shape();
LineSet& LineSet1116 =  LineSet();
LineSet1116.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1117 =  Coordinate();
Coordinate1117.setPoint(new float[]{0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689}, 6);
LineSet1116.setCoord(Coordinate1117);

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA& ColorRGBA1118 =  ColorRGBA();
ColorRGBA1118.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1116.addChild(&ColorRGBA1118);

Shape1115.setGeometry(&LineSet1116);

HAnimSegment1111.addChild(&Shape1115);

HAnimSite& HAnimSite1119 =  HAnimSite();
HAnimSite1119.X3DNode::setName(CString("glabella"));
HAnimSite1119.setDEF(CString("hanim_glabella"));
TouchSensor& TouchSensor1120 =  TouchSensor();
TouchSensor1120.setDescription(CString("HAnimSite 1 glabella"));
HAnimSite1119.addChild(&TouchSensor1120);

Shape& Shape1121 =  Shape();
Shape1121.setUSE(CString("HAnimSiteShape"));
HAnimSite1119.addChild(&Shape1121);

Billboard& Billboard1122 =  Billboard();
Shape& Shape1123 =  Shape();
Text& Text1124 =  Text();
Text1124.setString(new CString[]{CString("1")}, 1);
CFontStyle& FontStyle1125 =  CFontStyle();
FontStyle1125.setSize(0.035);
Text1124.setFontStyle(&FontStyle1125);

Shape1123.setGeometry(&Text1124);

Billboard1122.addChild(&Shape1123);

HAnimSite1119.addChild(Billboard1122);

HAnimSegment1111.addChild(&HAnimSite1119);

HAnimSite& HAnimSite1126 =  HAnimSite();
HAnimSite1126.X3DNode::setName(CString("l_ectocanthus"));
HAnimSite1126.setDEF(CString("hanim_l_ectocanthus"));
TouchSensor& TouchSensor1127 =  TouchSensor();
TouchSensor1127.setDescription(CString("HAnimSite 85 l_ectocanthus"));
HAnimSite1126.addChild(&TouchSensor1127);

Shape& Shape1128 =  Shape();
Shape1128.setUSE(CString("HAnimSiteShape"));
HAnimSite1126.addChild(&Shape1128);

Billboard& Billboard1129 =  Billboard();
Shape& Shape1130 =  Shape();
Text& Text1131 =  Text();
Text1131.setString(new CString[]{CString("85")}, 1);
CFontStyle& FontStyle1132 =  CFontStyle();
FontStyle1132.setSize(0.035);
Text1131.setFontStyle(&FontStyle1132);

Shape1130.setGeometry(&Text1131);

Billboard1129.addChild(&Shape1130);

HAnimSite1126.addChild(Billboard1129);

HAnimSegment1111.addChild(&HAnimSite1126);

HAnimSite& HAnimSite1133 =  HAnimSite();
HAnimSite1133.X3DNode::setName(CString("l_infraorbitale"));
HAnimSite1133.setDEF(CString("hanim_l_infraorbitale"));
HAnimSite1133.setTranslation(new float[]{0.0341,1.6171,0.0752});
TouchSensor& TouchSensor1134 =  TouchSensor();
TouchSensor1134.setDescription(CString("HAnimSite 3 l_infraorbitale"));
HAnimSite1133.addChild(&TouchSensor1134);

Shape& Shape1135 =  Shape();
Shape1135.setUSE(CString("HAnimSiteShape"));
HAnimSite1133.addChild(&Shape1135);

Billboard& Billboard1136 =  Billboard();
Shape& Shape1137 =  Shape();
Text& Text1138 =  Text();
Text1138.setString(new CString[]{CString("3")}, 1);
CFontStyle& FontStyle1139 =  CFontStyle();
FontStyle1139.setSize(0.035);
Text1138.setFontStyle(&FontStyle1139);

Shape1137.setGeometry(&Text1138);

Billboard1136.addChild(&Shape1137);

HAnimSite1133.addChild(Billboard1136);

HAnimSegment1111.addChild(&HAnimSite1133);

HAnimSite& HAnimSite1140 =  HAnimSite();
HAnimSite1140.X3DNode::setName(CString("l_tragion"));
HAnimSite1140.setDEF(CString("hanim_l_tragion"));
HAnimSite1140.setTranslation(new float[]{0.0739,1.6348,0.0282});
TouchSensor& TouchSensor1141 =  TouchSensor();
TouchSensor1141.setDescription(CString("HAnimSite 4 l_tragion"));
HAnimSite1140.addChild(&TouchSensor1141);

Shape& Shape1142 =  Shape();
Shape1142.setUSE(CString("HAnimSiteShape"));
HAnimSite1140.addChild(&Shape1142);

Billboard& Billboard1143 =  Billboard();
Shape& Shape1144 =  Shape();
Text& Text1145 =  Text();
Text1145.setString(new CString[]{CString("4")}, 1);
CFontStyle& FontStyle1146 =  CFontStyle();
FontStyle1146.setSize(0.035);
Text1145.setFontStyle(&FontStyle1146);

Shape1144.setGeometry(&Text1145);

Billboard1143.addChild(&Shape1144);

HAnimSite1140.addChild(Billboard1143);

HAnimSegment1111.addChild(&HAnimSite1140);

HAnimSite& HAnimSite1147 =  HAnimSite();
HAnimSite1147.X3DNode::setName(CString("nuchale"));
HAnimSite1147.setDEF(CString("hanim_nuchale"));
HAnimSite1147.setTranslation(new float[]{0.0039,1.5972,-0.0796});
TouchSensor& TouchSensor1148 =  TouchSensor();
TouchSensor1148.setDescription(CString("HAnimSite 81 nuchale"));
HAnimSite1147.addChild(&TouchSensor1148);

Shape& Shape1149 =  Shape();
Shape1149.setUSE(CString("HAnimSiteShape"));
HAnimSite1147.addChild(&Shape1149);

Billboard& Billboard1150 =  Billboard();
Shape& Shape1151 =  Shape();
Text& Text1152 =  Text();
Text1152.setString(new CString[]{CString("81")}, 1);
CFontStyle& FontStyle1153 =  CFontStyle();
FontStyle1153.setSize(0.035);
Text1152.setFontStyle(&FontStyle1153);

Shape1151.setGeometry(&Text1152);

Billboard1150.addChild(&Shape1151);

HAnimSite1147.addChild(Billboard1150);

HAnimSegment1111.addChild(&HAnimSite1147);

HAnimSite& HAnimSite1154 =  HAnimSite();
HAnimSite1154.X3DNode::setName(CString("opisthocranion"));
HAnimSite1154.setDEF(CString("hanim_opisthocranion"));
TouchSensor& TouchSensor1155 =  TouchSensor();
TouchSensor1155.setDescription(CString("HAnimSite 89 opisthocranion"));
HAnimSite1154.addChild(&TouchSensor1155);

Shape& Shape1156 =  Shape();
Shape1156.setUSE(CString("HAnimSiteShape"));
HAnimSite1154.addChild(&Shape1156);

Billboard& Billboard1157 =  Billboard();
Shape& Shape1158 =  Shape();
Text& Text1159 =  Text();
Text1159.setString(new CString[]{CString("89")}, 1);
CFontStyle& FontStyle1160 =  CFontStyle();
FontStyle1160.setSize(0.035);
Text1159.setFontStyle(&FontStyle1160);

Shape1158.setGeometry(&Text1159);

Billboard1157.addChild(&Shape1158);

HAnimSite1154.addChild(Billboard1157);

HAnimSegment1111.addChild(&HAnimSite1154);

HAnimSite& HAnimSite1161 =  HAnimSite();
HAnimSite1161.X3DNode::setName(CString("r_ectocanthus"));
HAnimSite1161.setDEF(CString("hanim_r_ectocanthus"));
TouchSensor& TouchSensor1162 =  TouchSensor();
TouchSensor1162.setDescription(CString("HAnimSite 86 r_ectocanthus"));
HAnimSite1161.addChild(&TouchSensor1162);

Shape& Shape1163 =  Shape();
Shape1163.setUSE(CString("HAnimSiteShape"));
HAnimSite1161.addChild(&Shape1163);

Billboard& Billboard1164 =  Billboard();
Shape& Shape1165 =  Shape();
Text& Text1166 =  Text();
Text1166.setString(new CString[]{CString("86")}, 1);
CFontStyle& FontStyle1167 =  CFontStyle();
FontStyle1167.setSize(0.035);
Text1166.setFontStyle(&FontStyle1167);

Shape1165.setGeometry(&Text1166);

Billboard1164.addChild(&Shape1165);

HAnimSite1161.addChild(Billboard1164);

HAnimSegment1111.addChild(&HAnimSite1161);

HAnimSite& HAnimSite1168 =  HAnimSite();
HAnimSite1168.X3DNode::setName(CString("r_infraorbitale"));
HAnimSite1168.setDEF(CString("hanim_r_infraorbitale"));
HAnimSite1168.setTranslation(new float[]{-0.0237,1.6171,0.0752});
TouchSensor& TouchSensor1169 =  TouchSensor();
TouchSensor1169.setDescription(CString("HAnimSite 6 r_infraorbitale"));
HAnimSite1168.addChild(&TouchSensor1169);

Shape& Shape1170 =  Shape();
Shape1170.setUSE(CString("HAnimSiteShape"));
HAnimSite1168.addChild(&Shape1170);

Billboard& Billboard1171 =  Billboard();
Shape& Shape1172 =  Shape();
Text& Text1173 =  Text();
Text1173.setString(new CString[]{CString("6")}, 1);
CFontStyle& FontStyle1174 =  CFontStyle();
FontStyle1174.setSize(0.035);
Text1173.setFontStyle(&FontStyle1174);

Shape1172.setGeometry(&Text1173);

Billboard1171.addChild(&Shape1172);

HAnimSite1168.addChild(Billboard1171);

HAnimSegment1111.addChild(&HAnimSite1168);

HAnimSite& HAnimSite1175 =  HAnimSite();
HAnimSite1175.X3DNode::setName(CString("r_tragion"));
HAnimSite1175.setDEF(CString("hanim_r_tragion"));
HAnimSite1175.setTranslation(new float[]{-0.0646,1.6347,0.0302});
TouchSensor& TouchSensor1176 =  TouchSensor();
TouchSensor1176.setDescription(CString("HAnimSite 7 r_tragion"));
HAnimSite1175.addChild(&TouchSensor1176);

Shape& Shape1177 =  Shape();
Shape1177.setUSE(CString("HAnimSiteShape"));
HAnimSite1175.addChild(&Shape1177);

Billboard& Billboard1178 =  Billboard();
Shape& Shape1179 =  Shape();
Text& Text1180 =  Text();
Text1180.setString(new CString[]{CString("7")}, 1);
CFontStyle& FontStyle1181 =  CFontStyle();
FontStyle1181.setSize(0.035);
Text1180.setFontStyle(&FontStyle1181);

Shape1179.setGeometry(&Text1180);

Billboard1178.addChild(&Shape1179);

HAnimSite1175.addChild(Billboard1178);

HAnimSegment1111.addChild(&HAnimSite1175);

HAnimSite& HAnimSite1182 =  HAnimSite();
HAnimSite1182.X3DNode::setName(CString("sellion"));
HAnimSite1182.setDEF(CString("hanim_sellion"));
HAnimSite1182.setTranslation(new float[]{0.0058,1.6316,0.0852});
TouchSensor& TouchSensor1183 =  TouchSensor();
TouchSensor1183.setDescription(CString("HAnimSite 2 sellion"));
HAnimSite1182.addChild(&TouchSensor1183);

Shape& Shape1184 =  Shape();
Shape1184.setUSE(CString("HAnimSiteShape"));
HAnimSite1182.addChild(&Shape1184);

Billboard& Billboard1185 =  Billboard();
Shape& Shape1186 =  Shape();
Text& Text1187 =  Text();
Text1187.setString(new CString[]{CString("2")}, 1);
CFontStyle& FontStyle1188 =  CFontStyle();
FontStyle1188.setSize(0.035);
Text1187.setFontStyle(&FontStyle1188);

Shape1186.setGeometry(&Text1187);

Billboard1185.addChild(&Shape1186);

HAnimSite1182.addChild(Billboard1185);

HAnimSegment1111.addChild(&HAnimSite1182);

HAnimSite& HAnimSite1189 =  HAnimSite();
HAnimSite1189.X3DNode::setName(CString("skull_vertex"));
HAnimSite1189.setDEF(CString("hanim_skull_vertex"));
HAnimSite1189.setTranslation(new float[]{0.005,1.7504,0.0055});
TouchSensor& TouchSensor1190 =  TouchSensor();
TouchSensor1190.setDescription(CString("HAnimSite 0 skull_vertex"));
HAnimSite1189.addChild(&TouchSensor1190);

Shape& Shape1191 =  Shape();
Shape1191.setUSE(CString("HAnimSiteShape"));
HAnimSite1189.addChild(&Shape1191);

Billboard& Billboard1192 =  Billboard();
Shape& Shape1193 =  Shape();
Text& Text1194 =  Text();
Text1194.setString(new CString[]{CString("0")}, 1);
CFontStyle& FontStyle1195 =  CFontStyle();
FontStyle1195.setSize(0.035);
Text1194.setFontStyle(&FontStyle1195);

Shape1193.setGeometry(&Text1194);

Billboard1192.addChild(&Shape1193);

HAnimSite1189.addChild(Billboard1192);

HAnimSegment1111.addChild(&HAnimSite1189);

Shape& Shape1196 =  Shape();
LineSet& LineSet1197 =  LineSet();
LineSet1197.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1198 =  Coordinate();
Coordinate1198.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689}, 6);
LineSet1197.setCoord(Coordinate1198);

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA& ColorRGBA1199 =  ColorRGBA();
ColorRGBA1199.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1197.addChild(&ColorRGBA1199);

Shape1196.setGeometry(&LineSet1197);

HAnimSegment1111.addChild(&Shape1196);

Shape& Shape1200 =  Shape();
LineSet& LineSet1201 =  LineSet();
LineSet1201.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1202 =  Coordinate();
Coordinate1202.setPoint(new float[]{0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188}, 6);
LineSet1201.setCoord(Coordinate1202);

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA& ColorRGBA1203 =  ColorRGBA();
ColorRGBA1203.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1201.addChild(&ColorRGBA1203);

Shape1200.setGeometry(&LineSet1201);

HAnimSegment1111.addChild(&Shape1200);

Shape& Shape1204 =  Shape();
LineSet& LineSet1205 =  LineSet();
LineSet1205.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1206 =  Coordinate();
Coordinate1206.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188}, 6);
LineSet1205.setCoord(Coordinate1206);

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA& ColorRGBA1207 =  ColorRGBA();
ColorRGBA1207.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1205.addChild(&ColorRGBA1207);

Shape1204.setGeometry(&LineSet1205);

HAnimSegment1111.addChild(&Shape1204);

Shape& Shape1208 =  Shape();
LineSet& LineSet1209 =  LineSet();
LineSet1209.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1210 =  Coordinate();
Coordinate1210.setPoint(new float[]{0.0044,1.6209,0.0236,0.0216,1.4053,0.0051}, 6);
LineSet1209.setCoord(Coordinate1210);

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA1211 =  ColorRGBA();
ColorRGBA1211.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1209.addChild(&ColorRGBA1211);

Shape1208.setGeometry(&LineSet1209);

HAnimSegment1111.addChild(&Shape1208);

Shape& Shape1212 =  Shape();
LineSet& LineSet1213 =  LineSet();
LineSet1213.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1214 =  Coordinate();
Coordinate1214.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051}, 6);
LineSet1213.setCoord(Coordinate1214);

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA1215 =  ColorRGBA();
ColorRGBA1215.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1213.addChild(&ColorRGBA1215);

Shape1212.setGeometry(&LineSet1213);

HAnimSegment1111.addChild(&Shape1212);

Shape& Shape1216 =  Shape();
LineSet& LineSet1217 =  LineSet();
LineSet1217.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1218 =  Coordinate();
Coordinate1218.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865}, 6);
LineSet1217.setCoord(Coordinate1218);

//from skullbase to temporomandibular vertices 2
ColorRGBA& ColorRGBA1219 =  ColorRGBA();
ColorRGBA1219.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1217.addChild(&ColorRGBA1219);

Shape1216.setGeometry(&LineSet1217);

HAnimSegment1111.addChild(&Shape1216);

HAnimJoint1110.addChildren(&HAnimSegment1111);

HAnimJoint& HAnimJoint1220 =  HAnimJoint();
HAnimJoint1220.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint1220.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint1220.setCenter(new float[]{0.0503,1.4157,-0.0689});
HAnimJoint1110.addChildren(&HAnimJoint1220);

HAnimJoint& HAnimJoint1221 =  HAnimJoint();
HAnimJoint1221.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint1221.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint1221.setCenter(new float[]{-0.0507,1.4157,-0.0689});
HAnimJoint1110.addChildren(&HAnimJoint1221);

HAnimJoint& HAnimJoint1222 =  HAnimJoint();
HAnimJoint1222.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint1222.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint1222.setCenter(new float[]{0.0479,1.3963,-0.0188});
HAnimJoint1110.addChildren(&HAnimJoint1222);

HAnimJoint& HAnimJoint1223 =  HAnimJoint();
HAnimJoint1223.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint1223.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint1223.setCenter(new float[]{-0.0483,1.3963,-0.0188});
HAnimJoint1110.addChildren(&HAnimJoint1223);

HAnimJoint& HAnimJoint1224 =  HAnimJoint();
HAnimJoint1224.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint1224.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint1224.setCenter(new float[]{0.0216,1.4053,0.0051});
HAnimJoint1110.addChildren(&HAnimJoint1224);

HAnimJoint& HAnimJoint1225 =  HAnimJoint();
HAnimJoint1225.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint1225.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint1225.setCenter(new float[]{-0.0219,1.4053,0.0051});
HAnimJoint1110.addChildren(&HAnimJoint1225);

HAnimJoint& HAnimJoint1226 =  HAnimJoint();
HAnimJoint1226.X3DNode::setName(CString("temporomandibular"));
HAnimJoint1226.setDEF(CString("hanim_temporomandibular"));
HAnimJoint1226.setCenter(new float[]{-0.0002,1.3043,-0.0865});
HAnimJoint1110.addChildren(&HAnimJoint1226);

HAnimJoint1101.addChildren(&HAnimJoint1110);

HAnimJoint1085.addChildren(&HAnimJoint1101);

HAnimJoint1076.addChildren(&HAnimJoint1085);

HAnimJoint1067.addChildren(&HAnimJoint1076);

HAnimJoint1058.addChildren(&HAnimJoint1067);

HAnimJoint1049.addChildren(&HAnimJoint1058);

HAnimJoint1026.addChildren(&HAnimJoint1049);

HAnimJoint995.addChildren(&HAnimJoint1026);

HAnimJoint& HAnimJoint1227 =  HAnimJoint();
HAnimJoint1227.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint1227.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint1227.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment1228 =  HAnimSegment();
HAnimSegment1228.X3DNode::setName(CString("l_clavicle"));
HAnimSegment1228.setDEF(CString("hanim_l_clavicle"));
Transform& Transform1229 =  Transform();
Transform1229.setTranslation(new float[]{0.082,1.4488,-0.0353});
Transform& Transform1230 =  Transform();
//Empty Transform
Shape& Shape1231 =  Shape();
Shape1231.setUSE(CString("HAnimJointShape"));
Transform1230.addChild(&Shape1231);

Transform1229.addChild(&Transform1230);

HAnimSegment1228.addChild(&Transform1229);

Shape& Shape1232 =  Shape();
LineSet& LineSet1233 =  LineSet();
LineSet1233.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1234 =  Coordinate();
Coordinate1234.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet1233.setCoord(Coordinate1234);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA& ColorRGBA1235 =  ColorRGBA();
ColorRGBA1235.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1233.addChild(&ColorRGBA1235);

Shape1232.setGeometry(&LineSet1233);

HAnimSegment1228.addChild(&Shape1232);

HAnimSite& HAnimSite1236 =  HAnimSite();
HAnimSite1236.X3DNode::setName(CString("l_acromion"));
HAnimSite1236.setDEF(CString("hanim_l_acromion"));
HAnimSite1236.setTranslation(new float[]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor1237 =  TouchSensor();
TouchSensor1237.setDescription(CString("HAnimSite 15 l_acromion"));
HAnimSite1236.addChild(&TouchSensor1237);

Shape& Shape1238 =  Shape();
Shape1238.setUSE(CString("HAnimSiteShape"));
HAnimSite1236.addChild(&Shape1238);

Billboard& Billboard1239 =  Billboard();
Shape& Shape1240 =  Shape();
Text& Text1241 =  Text();
Text1241.setString(new CString[]{CString("15")}, 1);
CFontStyle& FontStyle1242 =  CFontStyle();
FontStyle1242.setSize(0.035);
Text1241.setFontStyle(&FontStyle1242);

Shape1240.setGeometry(&Text1241);

Billboard1239.addChild(&Shape1240);

HAnimSite1236.addChild(Billboard1239);

HAnimSegment1228.addChild(&HAnimSite1236);

HAnimSite& HAnimSite1243 =  HAnimSite();
HAnimSite1243.X3DNode::setName(CString("l_axilla_distal"));
HAnimSite1243.setDEF(CString("hanim_l_axilla_distal"));
HAnimSite1243.setTranslation(new float[]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor1244 =  TouchSensor();
TouchSensor1244.setDescription(CString("HAnimSite 17 l_axilla_distal"));
HAnimSite1243.addChild(&TouchSensor1244);

Shape& Shape1245 =  Shape();
Shape1245.setUSE(CString("HAnimSiteShape"));
HAnimSite1243.addChild(&Shape1245);

Billboard& Billboard1246 =  Billboard();
Shape& Shape1247 =  Shape();
Text& Text1248 =  Text();
Text1248.setString(new CString[]{CString("17")}, 1);
CFontStyle& FontStyle1249 =  CFontStyle();
FontStyle1249.setSize(0.035);
Text1248.setFontStyle(&FontStyle1249);

Shape1247.setGeometry(&Text1248);

Billboard1246.addChild(&Shape1247);

HAnimSite1243.addChild(Billboard1246);

HAnimSegment1228.addChild(&HAnimSite1243);

HAnimSite& HAnimSite1250 =  HAnimSite();
HAnimSite1250.X3DNode::setName(CString("l_axilla_posterior_folds"));
HAnimSite1250.setDEF(CString("hanim_l_axilla_posterior_folds"));
TouchSensor& TouchSensor1251 =  TouchSensor();
TouchSensor1251.setDescription(CString("HAnimSite 18 l_axilla_posterior_folds"));
HAnimSite1250.addChild(&TouchSensor1251);

Shape& Shape1252 =  Shape();
Shape1252.setUSE(CString("HAnimSiteShape"));
HAnimSite1250.addChild(&Shape1252);

Billboard& Billboard1253 =  Billboard();
Shape& Shape1254 =  Shape();
Text& Text1255 =  Text();
Text1255.setString(new CString[]{CString("18")}, 1);
CFontStyle& FontStyle1256 =  CFontStyle();
FontStyle1256.setSize(0.035);
Text1255.setFontStyle(&FontStyle1256);

Shape1254.setGeometry(&Text1255);

Billboard1253.addChild(&Shape1254);

HAnimSite1250.addChild(Billboard1253);

HAnimSegment1228.addChild(&HAnimSite1250);

HAnimSite& HAnimSite1257 =  HAnimSite();
HAnimSite1257.X3DNode::setName(CString("l_axilla_proximal"));
HAnimSite1257.setDEF(CString("hanim_l_axilla_proximal"));
HAnimSite1257.setTranslation(new float[]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor1258 =  TouchSensor();
TouchSensor1258.setDescription(CString("HAnimSite 16 l_axilla_proximal"));
HAnimSite1257.addChild(&TouchSensor1258);

Shape& Shape1259 =  Shape();
Shape1259.setUSE(CString("HAnimSiteShape"));
HAnimSite1257.addChild(&Shape1259);

Billboard& Billboard1260 =  Billboard();
Shape& Shape1261 =  Shape();
Text& Text1262 =  Text();
Text1262.setString(new CString[]{CString("16")}, 1);
CFontStyle& FontStyle1263 =  CFontStyle();
FontStyle1263.setSize(0.035);
Text1262.setFontStyle(&FontStyle1263);

Shape1261.setGeometry(&Text1262);

Billboard1260.addChild(&Shape1261);

HAnimSite1257.addChild(Billboard1260);

HAnimSegment1228.addChild(&HAnimSite1257);

HAnimSite& HAnimSite1264 =  HAnimSite();
HAnimSite1264.X3DNode::setName(CString("l_clavicale"));
HAnimSite1264.setDEF(CString("hanim_l_clavicale"));
HAnimSite1264.setTranslation(new float[]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor1265 =  TouchSensor();
TouchSensor1265.setDescription(CString("HAnimSite 14 l_clavicale"));
HAnimSite1264.addChild(&TouchSensor1265);

Shape& Shape1266 =  Shape();
Shape1266.setUSE(CString("HAnimSiteShape"));
HAnimSite1264.addChild(&Shape1266);

Billboard& Billboard1267 =  Billboard();
Shape& Shape1268 =  Shape();
Text& Text1269 =  Text();
Text1269.setString(new CString[]{CString("14")}, 1);
CFontStyle& FontStyle1270 =  CFontStyle();
FontStyle1270.setSize(0.035);
Text1269.setFontStyle(&FontStyle1270);

Shape1268.setGeometry(&Text1269);

Billboard1267.addChild(&Shape1268);

HAnimSite1264.addChild(Billboard1267);

HAnimSegment1228.addChild(&HAnimSite1264);

HAnimJoint1227.addChildren(&HAnimSegment1228);

HAnimJoint& HAnimJoint1271 =  HAnimJoint();
HAnimJoint1271.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint1271.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint1271.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment1272 =  HAnimSegment();
HAnimSegment1272.X3DNode::setName(CString("l_scapula"));
HAnimSegment1272.setDEF(CString("hanim_l_scapula"));
Transform& Transform1273 =  Transform();
Transform1273.setTranslation(new float[]{0.0962,1.4269,-0.0424});
Transform& Transform1274 =  Transform();
//Empty Transform
Shape& Shape1275 =  Shape();
Shape1275.setUSE(CString("HAnimJointShape"));
Transform1274.addChild(&Shape1275);

Transform1273.addChild(&Transform1274);

HAnimSegment1272.addChild(&Transform1273);

Shape& Shape1276 =  Shape();
LineSet& LineSet1277 =  LineSet();
LineSet1277.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1278 =  Coordinate();
Coordinate1278.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet1277.setCoord(Coordinate1278);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA& ColorRGBA1279 =  ColorRGBA();
ColorRGBA1279.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1277.addChild(&ColorRGBA1279);

Shape1276.setGeometry(&LineSet1277);

HAnimSegment1272.addChild(&Shape1276);

HAnimJoint1271.addChildren(&HAnimSegment1272);

HAnimJoint& HAnimJoint1280 =  HAnimJoint();
HAnimJoint1280.X3DNode::setName(CString("l_shoulder"));
HAnimJoint1280.setDEF(CString("hanim_l_shoulder"));
HAnimJoint1280.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment1281 =  HAnimSegment();
HAnimSegment1281.X3DNode::setName(CString("l_upperarm"));
HAnimSegment1281.setDEF(CString("hanim_l_upperarm"));
Transform& Transform1282 =  Transform();
Transform1282.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Transform& Transform1283 =  Transform();
//Empty Transform
Shape& Shape1284 =  Shape();
Shape1284.setUSE(CString("HAnimJointShape"));
Transform1283.addChild(&Shape1284);

Transform1282.addChild(&Transform1283);

HAnimSegment1281.addChild(&Transform1282);

Shape& Shape1285 =  Shape();
LineSet& LineSet1286 =  LineSet();
LineSet1286.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1287 =  Coordinate();
Coordinate1287.setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet1286.setCoord(Coordinate1287);

//from l_shoulder to l_elbow vertices 2
ColorRGBA& ColorRGBA1288 =  ColorRGBA();
ColorRGBA1288.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1286.addChild(&ColorRGBA1288);

Shape1285.setGeometry(&LineSet1286);

HAnimSegment1281.addChild(&Shape1285);

HAnimSite& HAnimSite1289 =  HAnimSite();
HAnimSite1289.X3DNode::setName(CString("l_bideltoid"));
HAnimSite1289.setDEF(CString("hanim_l_bideltoid"));
TouchSensor& TouchSensor1290 =  TouchSensor();
TouchSensor1290.setDescription(CString("HAnimSite 96 l_bideltoid"));
HAnimSite1289.addChild(&TouchSensor1290);

Shape& Shape1291 =  Shape();
Shape1291.setUSE(CString("HAnimSiteShape"));
HAnimSite1289.addChild(&Shape1291);

Billboard& Billboard1292 =  Billboard();
Shape& Shape1293 =  Shape();
Text& Text1294 =  Text();
Text1294.setString(new CString[]{CString("96")}, 1);
CFontStyle& FontStyle1295 =  CFontStyle();
FontStyle1295.setSize(0.035);
Text1294.setFontStyle(&FontStyle1295);

Shape1293.setGeometry(&Text1294);

Billboard1292.addChild(&Shape1293);

HAnimSite1289.addChild(Billboard1292);

HAnimSegment1281.addChild(&HAnimSite1289);

HAnimSite& HAnimSite1296 =  HAnimSite();
HAnimSite1296.X3DNode::setName(CString("l_humeral_lateral_epicondyles"));
HAnimSite1296.setDEF(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimSite1296.setTranslation(new float[]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor1297 =  TouchSensor();
TouchSensor1297.setDescription(CString("HAnimSite 63 l_humeral_lateral_epicondyles"));
HAnimSite1296.addChild(&TouchSensor1297);

Shape& Shape1298 =  Shape();
Shape1298.setUSE(CString("HAnimSiteShape"));
HAnimSite1296.addChild(&Shape1298);

Billboard& Billboard1299 =  Billboard();
Shape& Shape1300 =  Shape();
Text& Text1301 =  Text();
Text1301.setString(new CString[]{CString("63")}, 1);
CFontStyle& FontStyle1302 =  CFontStyle();
FontStyle1302.setSize(0.035);
Text1301.setFontStyle(&FontStyle1302);

Shape1300.setGeometry(&Text1301);

Billboard1299.addChild(&Shape1300);

HAnimSite1296.addChild(Billboard1299);

HAnimSegment1281.addChild(&HAnimSite1296);

HAnimJoint1280.addChildren(&HAnimSegment1281);

HAnimJoint& HAnimJoint1303 =  HAnimJoint();
HAnimJoint1303.X3DNode::setName(CString("l_elbow"));
HAnimJoint1303.setDEF(CString("hanim_l_elbow"));
HAnimJoint1303.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment1304 =  HAnimSegment();
HAnimSegment1304.X3DNode::setName(CString("l_forearm"));
HAnimSegment1304.setDEF(CString("hanim_l_forearm"));
Transform& Transform1305 =  Transform();
Transform1305.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Transform& Transform1306 =  Transform();
//Empty Transform
Shape& Shape1307 =  Shape();
Shape1307.setUSE(CString("HAnimJointShape"));
Transform1306.addChild(&Shape1307);

Transform1305.addChild(&Transform1306);

HAnimSegment1304.addChild(&Transform1305);

Shape& Shape1308 =  Shape();
LineSet& LineSet1309 =  LineSet();
LineSet1309.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1310 =  Coordinate();
Coordinate1310.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet1309.setCoord(Coordinate1310);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA& ColorRGBA1311 =  ColorRGBA();
ColorRGBA1311.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1309.addChild(&ColorRGBA1311);

Shape1308.setGeometry(&LineSet1309);

HAnimSegment1304.addChild(&Shape1308);

HAnimSite& HAnimSite1312 =  HAnimSite();
HAnimSite1312.X3DNode::setName(CString("l_humeral_medial_epicondyles"));
HAnimSite1312.setDEF(CString("hanim_l_humeral_medial_epicondyles"));
HAnimSite1312.setTranslation(new float[]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor1313 =  TouchSensor();
TouchSensor1313.setDescription(CString("HAnimSite 64 l_humeral_medial_epicondyles"));
HAnimSite1312.addChild(&TouchSensor1313);

Shape& Shape1314 =  Shape();
Shape1314.setUSE(CString("HAnimSiteShape"));
HAnimSite1312.addChild(&Shape1314);

Billboard& Billboard1315 =  Billboard();
Shape& Shape1316 =  Shape();
Text& Text1317 =  Text();
Text1317.setString(new CString[]{CString("64")}, 1);
CFontStyle& FontStyle1318 =  CFontStyle();
FontStyle1318.setSize(0.035);
Text1317.setFontStyle(&FontStyle1318);

Shape1316.setGeometry(&Text1317);

Billboard1315.addChild(&Shape1316);

HAnimSite1312.addChild(Billboard1315);

HAnimSegment1304.addChild(&HAnimSite1312);

HAnimSite& HAnimSite1319 =  HAnimSite();
HAnimSite1319.X3DNode::setName(CString("l_olecranon"));
HAnimSite1319.setDEF(CString("hanim_l_olecranon"));
HAnimSite1319.setTranslation(new float[]{-0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor1320 =  TouchSensor();
TouchSensor1320.setDescription(CString("HAnimSite 65 l_olecranon"));
HAnimSite1319.addChild(&TouchSensor1320);

Shape& Shape1321 =  Shape();
Shape1321.setUSE(CString("HAnimSiteShape"));
HAnimSite1319.addChild(&Shape1321);

Billboard& Billboard1322 =  Billboard();
Shape& Shape1323 =  Shape();
Text& Text1324 =  Text();
Text1324.setString(new CString[]{CString("65")}, 1);
CFontStyle& FontStyle1325 =  CFontStyle();
FontStyle1325.setSize(0.035);
Text1324.setFontStyle(&FontStyle1325);

Shape1323.setGeometry(&Text1324);

Billboard1322.addChild(&Shape1323);

HAnimSite1319.addChild(Billboard1322);

HAnimSegment1304.addChild(&HAnimSite1319);

HAnimSite& HAnimSite1326 =  HAnimSite();
HAnimSite1326.X3DNode::setName(CString("l_radial_styloid"));
HAnimSite1326.setDEF(CString("hanim_l_radial_styloid"));
HAnimSite1326.setTranslation(new float[]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor1327 =  TouchSensor();
TouchSensor1327.setDescription(CString("HAnimSite 71 l_radial_styloid"));
HAnimSite1326.addChild(&TouchSensor1327);

Shape& Shape1328 =  Shape();
Shape1328.setUSE(CString("HAnimSiteShape"));
HAnimSite1326.addChild(&Shape1328);

Billboard& Billboard1329 =  Billboard();
Shape& Shape1330 =  Shape();
Text& Text1331 =  Text();
Text1331.setString(new CString[]{CString("71")}, 1);
CFontStyle& FontStyle1332 =  CFontStyle();
FontStyle1332.setSize(0.035);
Text1331.setFontStyle(&FontStyle1332);

Shape1330.setGeometry(&Text1331);

Billboard1329.addChild(&Shape1330);

HAnimSite1326.addChild(Billboard1329);

HAnimSegment1304.addChild(&HAnimSite1326);

HAnimSite& HAnimSite1333 =  HAnimSite();
HAnimSite1333.X3DNode::setName(CString("l_radiale"));
HAnimSite1333.setDEF(CString("hanim_l_radiale"));
HAnimSite1333.setTranslation(new float[]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor1334 =  TouchSensor();
TouchSensor1334.setDescription(CString("HAnimSite 69 l_radiale"));
HAnimSite1333.addChild(&TouchSensor1334);

Shape& Shape1335 =  Shape();
Shape1335.setUSE(CString("HAnimSiteShape"));
HAnimSite1333.addChild(&Shape1335);

Billboard& Billboard1336 =  Billboard();
Shape& Shape1337 =  Shape();
Text& Text1338 =  Text();
Text1338.setString(new CString[]{CString("69")}, 1);
CFontStyle& FontStyle1339 =  CFontStyle();
FontStyle1339.setSize(0.035);
Text1338.setFontStyle(&FontStyle1339);

Shape1337.setGeometry(&Text1338);

Billboard1336.addChild(&Shape1337);

HAnimSite1333.addChild(Billboard1336);

HAnimSegment1304.addChild(&HAnimSite1333);

HAnimJoint1303.addChildren(&HAnimSegment1304);

HAnimJoint& HAnimJoint1340 =  HAnimJoint();
HAnimJoint1340.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint1340.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint1340.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment1341 =  HAnimSegment();
HAnimSegment1341.X3DNode::setName(CString("l_carpal"));
HAnimSegment1341.setDEF(CString("hanim_l_carpal"));
Transform& Transform1342 =  Transform();
Transform1342.setScale(new float[]{0.2,0.2,0.2});
Transform1342.setTranslation(new float[]{0.2,0.85,-0.05});
Transform1342.setRotation(new float[]{0,0,1,-3.14});
//Transform left hand
Transform& Transform1343 =  Transform();
Transform1343.setRotation(new float[]{0,1,0,-1.57});
//Transform left hand
Shape& Shape1344 =  Shape();
Shape1344.setUSE(CString("HAnimJointShape"));
Transform1343.addChild(&Shape1344);

Transform1342.addChild(&Transform1343);

HAnimSegment1341.addChild(&Transform1342);

Shape& Shape1345 =  Shape();
LineSet& LineSet1346 =  LineSet();
LineSet1346.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1347 =  Coordinate();
Coordinate1347.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826}, 6);
LineSet1346.setCoord(Coordinate1347);

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA& ColorRGBA1348 =  ColorRGBA();
ColorRGBA1348.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1346.addChild(&ColorRGBA1348);

Shape1345.setGeometry(&LineSet1346);

HAnimSegment1341.addChild(&Shape1345);

HAnimSite& HAnimSite1349 =  HAnimSite();
HAnimSite1349.X3DNode::setName(CString("l_ulnar_styloid"));
HAnimSite1349.setDEF(CString("hanim_l_ulnar_styloid"));
HAnimSite1349.setTranslation(new float[]{-0.2142,0.8529,-0.0648});
TouchSensor& TouchSensor1350 =  TouchSensor();
TouchSensor1350.setDescription(CString("HAnimSite 70 l_ulnar_styloid"));
HAnimSite1349.addChild(&TouchSensor1350);

Shape& Shape1351 =  Shape();
Shape1351.setUSE(CString("HAnimSiteShape"));
HAnimSite1349.addChild(&Shape1351);

Billboard& Billboard1352 =  Billboard();
Shape& Shape1353 =  Shape();
Text& Text1354 =  Text();
Text1354.setString(new CString[]{CString("70")}, 1);
CFontStyle& FontStyle1355 =  CFontStyle();
FontStyle1355.setSize(0.035);
Text1354.setFontStyle(&FontStyle1355);

Shape1353.setGeometry(&Text1354);

Billboard1352.addChild(&Shape1353);

HAnimSite1349.addChild(Billboard1352);

HAnimSegment1341.addChild(&HAnimSite1349);

Shape& Shape1356 =  Shape();
LineSet& LineSet1357 =  LineSet();
LineSet1357.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1358 =  Coordinate();
Coordinate1358.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935}, 6);
LineSet1357.setCoord(Coordinate1358);

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA& ColorRGBA1359 =  ColorRGBA();
ColorRGBA1359.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1357.addChild(&ColorRGBA1359);

Shape1356.setGeometry(&LineSet1357);

HAnimSegment1341.addChild(&Shape1356);

Shape& Shape1360 =  Shape();
LineSet& LineSet1361 =  LineSet();
LineSet1361.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1362 =  Coordinate();
Coordinate1362.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067}, 6);
LineSet1361.setCoord(Coordinate1362);

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA& ColorRGBA1363 =  ColorRGBA();
ColorRGBA1363.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1361.addChild(&ColorRGBA1363);

Shape1360.setGeometry(&LineSet1361);

HAnimSegment1341.addChild(&Shape1360);

Shape& Shape1364 =  Shape();
LineSet& LineSet1365 =  LineSet();
LineSet1365.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1366 =  Coordinate();
Coordinate1366.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276}, 6);
LineSet1365.setCoord(Coordinate1366);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA& ColorRGBA1367 =  ColorRGBA();
ColorRGBA1367.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1365.addChild(&ColorRGBA1367);

Shape1364.setGeometry(&LineSet1365);

HAnimSegment1341.addChild(&Shape1364);

HAnimJoint1340.addChildren(&HAnimSegment1341);

HAnimJoint& HAnimJoint1368 =  HAnimJoint();
HAnimJoint1368.X3DNode::setName(CString("l_midcarpal_1"));
HAnimJoint1368.setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint1368.setCenter(new float[]{0.1811,0.6975,-0.0826});
HAnimSegment& HAnimSegment1369 =  HAnimSegment();
HAnimSegment1369.X3DNode::setName(CString("l_trapezium"));
HAnimSegment1369.setDEF(CString("hanim_l_trapezium"));
Transform& Transform1370 =  Transform();
Transform1370.setTranslation(new float[]{0.1811,0.6975,-0.0826});
Transform& Transform1371 =  Transform();
//Empty Transform
Shape& Shape1372 =  Shape();
Shape1372.setUSE(CString("HAnimJointShape"));
Transform1371.addChild(&Shape1372);

Transform1370.addChild(&Transform1371);

HAnimSegment1369.addChild(&Transform1370);

Shape& Shape1373 =  Shape();
LineSet& LineSet1374 =  LineSet();
LineSet1374.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1375 =  Coordinate();
Coordinate1375.setPoint(new float[]{0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534}, 6);
LineSet1374.setCoord(Coordinate1375);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1376 =  ColorRGBA();
ColorRGBA1376.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1374.addChild(&ColorRGBA1376);

Shape1373.setGeometry(&LineSet1374);

HAnimSegment1369.addChild(&Shape1373);

HAnimJoint1368.addChildren(&HAnimSegment1369);

HAnimJoint& HAnimJoint1377 =  HAnimJoint();
HAnimJoint1377.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint1377.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint1377.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment1378 =  HAnimSegment();
HAnimSegment1378.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment1378.setDEF(CString("hanim_l_metacarpal_1"));
Transform& Transform1379 =  Transform();
Transform1379.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Transform& Transform1380 =  Transform();
//Empty Transform
Shape& Shape1381 =  Shape();
Shape1381.setUSE(CString("HAnimJointShape"));
Transform1380.addChild(&Shape1381);

Transform1379.addChild(&Transform1380);

HAnimSegment1378.addChild(&Transform1379);

Shape& Shape1382 =  Shape();
LineSet& LineSet1383 =  LineSet();
LineSet1383.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1384 =  Coordinate();
Coordinate1384.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet1383.setCoord(Coordinate1384);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1385 =  ColorRGBA();
ColorRGBA1385.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1383.addChild(&ColorRGBA1385);

Shape1382.setGeometry(&LineSet1383);

HAnimSegment1378.addChild(&Shape1382);

HAnimJoint1377.addChildren(&HAnimSegment1378);

HAnimJoint& HAnimJoint1386 =  HAnimJoint();
HAnimJoint1386.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint1386.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint1386.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment1387 =  HAnimSegment();
HAnimSegment1387.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment1387.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform& Transform1388 =  Transform();
Transform1388.setTranslation(new float[]{0.1951,0.8226,0.0246});
Transform& Transform1389 =  Transform();
//Empty Transform
Shape& Shape1390 =  Shape();
Shape1390.setUSE(CString("HAnimJointShape"));
Transform1389.addChild(&Shape1390);

Transform1388.addChild(&Transform1389);

HAnimSegment1387.addChild(&Transform1388);

Shape& Shape1391 =  Shape();
LineSet& LineSet1392 =  LineSet();
LineSet1392.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1393 =  Coordinate();
Coordinate1393.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet1392.setCoord(Coordinate1393);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1394 =  ColorRGBA();
ColorRGBA1394.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1392.addChild(&ColorRGBA1394);

Shape1391.setGeometry(&LineSet1392);

HAnimSegment1387.addChild(&Shape1391);

HAnimJoint1386.addChildren(&HAnimSegment1387);

HAnimJoint& HAnimJoint1395 =  HAnimJoint();
HAnimJoint1395.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint1395.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint1395.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint1386.addChildren(&HAnimJoint1395);

HAnimJoint1377.addChildren(&HAnimJoint1386);

HAnimJoint1368.addChildren(&HAnimJoint1377);

HAnimJoint1340.addChildren(&HAnimJoint1368);

HAnimJoint& HAnimJoint1396 =  HAnimJoint();
HAnimJoint1396.X3DNode::setName(CString("l_midcarpal_2"));
HAnimJoint1396.setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint1396.setCenter(new float[]{0.1811,0.6984,-0.0935});
HAnimSegment& HAnimSegment1397 =  HAnimSegment();
HAnimSegment1397.X3DNode::setName(CString("l_trapezoid"));
HAnimSegment1397.setDEF(CString("hanim_l_trapezoid"));
Transform& Transform1398 =  Transform();
Transform1398.setTranslation(new float[]{0.1811,0.6984,-0.0935});
Transform& Transform1399 =  Transform();
//Empty Transform
Shape& Shape1400 =  Shape();
Shape1400.setUSE(CString("HAnimJointShape"));
Transform1399.addChild(&Shape1400);

Transform1398.addChild(&Transform1399);

HAnimSegment1397.addChild(&Transform1398);

Shape& Shape1401 =  Shape();
LineSet& LineSet1402 =  LineSet();
LineSet1402.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1403 =  Coordinate();
Coordinate1403.setPoint(new float[]{0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028}, 6);
LineSet1402.setCoord(Coordinate1403);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1404 =  ColorRGBA();
ColorRGBA1404.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1402.addChild(&ColorRGBA1404);

Shape1401.setGeometry(&LineSet1402);

HAnimSegment1397.addChild(&Shape1401);

HAnimJoint1396.addChildren(&HAnimSegment1397);

HAnimJoint& HAnimJoint1405 =  HAnimJoint();
HAnimJoint1405.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint1405.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint1405.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment1406 =  HAnimSegment();
HAnimSegment1406.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment1406.setDEF(CString("hanim_l_metacarpal_2"));
Transform& Transform1407 =  Transform();
Transform1407.setTranslation(new float[]{0.1983,0.8024,-0.028});
Transform& Transform1408 =  Transform();
//Empty Transform
Shape& Shape1409 =  Shape();
Shape1409.setUSE(CString("HAnimJointShape"));
Transform1408.addChild(&Shape1409);

Transform1407.addChild(&Transform1408);

HAnimSegment1406.addChild(&Transform1407);

Shape& Shape1410 =  Shape();
LineSet& LineSet1411 =  LineSet();
LineSet1411.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1412 =  Coordinate();
Coordinate1412.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet1411.setCoord(Coordinate1412);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1413 =  ColorRGBA();
ColorRGBA1413.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1411.addChild(&ColorRGBA1413);

Shape1410.setGeometry(&LineSet1411);

HAnimSegment1406.addChild(&Shape1410);

HAnimSite& HAnimSite1414 =  HAnimSite();
HAnimSite1414.X3DNode::setName(CString("l_metacarpal_phalanx_2"));
HAnimSite1414.setDEF(CString("hanim_l_metacarpal_phalanx_2"));
HAnimSite1414.setTranslation(new float[]{0.2009,0.8139,-0.0237});
TouchSensor& TouchSensor1415 =  TouchSensor();
TouchSensor1415.setDescription(CString("HAnimSite 75 l_metacarpal_phalanx_2"));
HAnimSite1414.addChild(&TouchSensor1415);

Shape& Shape1416 =  Shape();
Shape1416.setUSE(CString("HAnimSiteShape"));
HAnimSite1414.addChild(&Shape1416);

Billboard& Billboard1417 =  Billboard();
Shape& Shape1418 =  Shape();
Text& Text1419 =  Text();
Text1419.setString(new CString[]{CString("75")}, 1);
CFontStyle& FontStyle1420 =  CFontStyle();
FontStyle1420.setSize(0.035);
Text1419.setFontStyle(&FontStyle1420);

Shape1418.setGeometry(&Text1419);

Billboard1417.addChild(&Shape1418);

HAnimSite1414.addChild(Billboard1417);

HAnimSegment1406.addChild(&HAnimSite1414);

HAnimJoint1405.addChildren(&HAnimSegment1406);

HAnimJoint& HAnimJoint1421 =  HAnimJoint();
HAnimJoint1421.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint1421.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint1421.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment1422 =  HAnimSegment();
HAnimSegment1422.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment1422.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform& Transform1423 =  Transform();
Transform1423.setTranslation(new float[]{0.1983,0.7815,-0.028});
Transform& Transform1424 =  Transform();
//Empty Transform
Shape& Shape1425 =  Shape();
Shape1425.setUSE(CString("HAnimJointShape"));
Transform1424.addChild(&Shape1425);

Transform1423.addChild(&Transform1424);

HAnimSegment1422.addChild(&Transform1423);

Shape& Shape1426 =  Shape();
LineSet& LineSet1427 =  LineSet();
LineSet1427.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1428 =  Coordinate();
Coordinate1428.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet1427.setCoord(Coordinate1428);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1429 =  ColorRGBA();
ColorRGBA1429.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1427.addChild(&ColorRGBA1429);

Shape1426.setGeometry(&LineSet1427);

HAnimSegment1422.addChild(&Shape1426);

HAnimJoint1421.addChildren(&HAnimSegment1422);

HAnimJoint& HAnimJoint1430 =  HAnimJoint();
HAnimJoint1430.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint1430.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint1430.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment1431 =  HAnimSegment();
HAnimSegment1431.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment1431.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform& Transform1432 =  Transform();
Transform1432.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Transform& Transform1433 =  Transform();
//Empty Transform
Shape& Shape1434 =  Shape();
Shape1434.setUSE(CString("HAnimJointShape"));
Transform1433.addChild(&Shape1434);

Transform1432.addChild(&Transform1433);

HAnimSegment1431.addChild(&Transform1432);

Shape& Shape1435 =  Shape();
LineSet& LineSet1436 =  LineSet();
LineSet1436.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1437 =  Coordinate();
Coordinate1437.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet1436.setCoord(Coordinate1437);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1438 =  ColorRGBA();
ColorRGBA1438.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1436.addChild(&ColorRGBA1438);

Shape1435.setGeometry(&LineSet1436);

HAnimSegment1431.addChild(&Shape1435);

HAnimJoint1430.addChildren(&HAnimSegment1431);

HAnimJoint& HAnimJoint1439 =  HAnimJoint();
HAnimJoint1439.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint1439.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint1439.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint1430.addChildren(&HAnimJoint1439);

HAnimJoint1421.addChildren(&HAnimJoint1430);

HAnimJoint1405.addChildren(&HAnimJoint1421);

HAnimJoint1396.addChildren(&HAnimJoint1405);

HAnimJoint1340.addChildren(&HAnimJoint1396);

HAnimJoint& HAnimJoint1440 =  HAnimJoint();
HAnimJoint1440.X3DNode::setName(CString("l_midcarpal_3"));
HAnimJoint1440.setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint1440.setCenter(new float[]{0.1809,0.7,-0.1067});
HAnimSegment& HAnimSegment1441 =  HAnimSegment();
HAnimSegment1441.X3DNode::setName(CString("l_capitate"));
HAnimSegment1441.setDEF(CString("hanim_l_capitate"));
Transform& Transform1442 =  Transform();
Transform1442.setTranslation(new float[]{0.1809,0.7,-0.1067});
Transform& Transform1443 =  Transform();
//Empty Transform
Shape& Shape1444 =  Shape();
Shape1444.setUSE(CString("HAnimJointShape"));
Transform1443.addChild(&Shape1444);

Transform1442.addChild(&Transform1443);

HAnimSegment1441.addChild(&Transform1442);

Shape& Shape1445 =  Shape();
LineSet& LineSet1446 =  LineSet();
LineSet1446.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1447 =  Coordinate();
Coordinate1447.setPoint(new float[]{0.1809,0.7,-0.1067,0.1987,0.8029,-0.053}, 6);
LineSet1446.setCoord(Coordinate1447);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1448 =  ColorRGBA();
ColorRGBA1448.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1446.addChild(&ColorRGBA1448);

Shape1445.setGeometry(&LineSet1446);

HAnimSegment1441.addChild(&Shape1445);

HAnimJoint1440.addChildren(&HAnimSegment1441);

HAnimJoint& HAnimJoint1449 =  HAnimJoint();
HAnimJoint1449.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint1449.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint1449.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment1450 =  HAnimSegment();
HAnimSegment1450.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment1450.setDEF(CString("hanim_l_metacarpal_3"));
Transform& Transform1451 =  Transform();
Transform1451.setTranslation(new float[]{0.1987,0.8029,-0.053});
Transform& Transform1452 =  Transform();
//Empty Transform
Shape& Shape1453 =  Shape();
Shape1453.setUSE(CString("HAnimJointShape"));
Transform1452.addChild(&Shape1453);

Transform1451.addChild(&Transform1452);

HAnimSegment1450.addChild(&Transform1451);

Shape& Shape1454 =  Shape();
LineSet& LineSet1455 =  LineSet();
LineSet1455.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1456 =  Coordinate();
Coordinate1456.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet1455.setCoord(Coordinate1456);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1457 =  ColorRGBA();
ColorRGBA1457.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1455.addChild(&ColorRGBA1457);

Shape1454.setGeometry(&LineSet1455);

HAnimSegment1450.addChild(&Shape1454);

HAnimSite& HAnimSite1458 =  HAnimSite();
HAnimSite1458.X3DNode::setName(CString("l_metacarpal_phalanx_3"));
HAnimSite1458.setDEF(CString("hanim_l_metacarpal_phalanx_3"));
TouchSensor& TouchSensor1459 =  TouchSensor();
TouchSensor1459.setDescription(CString("HAnimSite 76 l_metacarpal_phalanx_3"));
HAnimSite1458.addChild(&TouchSensor1459);

Shape& Shape1460 =  Shape();
Shape1460.setUSE(CString("HAnimSiteShape"));
HAnimSite1458.addChild(&Shape1460);

Billboard& Billboard1461 =  Billboard();
Shape& Shape1462 =  Shape();
Text& Text1463 =  Text();
Text1463.setString(new CString[]{CString("76")}, 1);
CFontStyle& FontStyle1464 =  CFontStyle();
FontStyle1464.setSize(0.035);
Text1463.setFontStyle(&FontStyle1464);

Shape1462.setGeometry(&Text1463);

Billboard1461.addChild(&Shape1462);

HAnimSite1458.addChild(Billboard1461);

HAnimSegment1450.addChild(&HAnimSite1458);

HAnimJoint1449.addChildren(&HAnimSegment1450);

HAnimJoint& HAnimJoint1465 =  HAnimJoint();
HAnimJoint1465.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint1465.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint1465.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment1466 =  HAnimSegment();
HAnimSegment1466.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment1466.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform& Transform1467 =  Transform();
Transform1467.setTranslation(new float[]{0.1987,0.7818,-0.053});
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
Coordinate1472.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet1471.setCoord(Coordinate1472);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1473 =  ColorRGBA();
ColorRGBA1473.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1471.addChild(&ColorRGBA1473);

Shape1470.setGeometry(&LineSet1471);

HAnimSegment1466.addChild(&Shape1470);

HAnimJoint1465.addChildren(&HAnimSegment1466);

HAnimJoint& HAnimJoint1474 =  HAnimJoint();
HAnimJoint1474.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint1474.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint1474.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment1475 =  HAnimSegment();
HAnimSegment1475.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment1475.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform& Transform1476 =  Transform();
Transform1476.setTranslation(new float[]{0.2013,0.7273,-0.0503});
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
Coordinate1481.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet1480.setCoord(Coordinate1481);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1482 =  ColorRGBA();
ColorRGBA1482.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1480.addChild(&ColorRGBA1482);

Shape1479.setGeometry(&LineSet1480);

HAnimSegment1475.addChild(&Shape1479);

HAnimJoint1474.addChildren(&HAnimSegment1475);

HAnimJoint& HAnimJoint1483 =  HAnimJoint();
HAnimJoint1483.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint1483.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint1483.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint1474.addChildren(&HAnimJoint1483);

HAnimJoint1465.addChildren(&HAnimJoint1474);

HAnimJoint1449.addChildren(&HAnimJoint1465);

HAnimJoint1440.addChildren(&HAnimJoint1449);

HAnimJoint1340.addChildren(&HAnimJoint1440);

HAnimJoint& HAnimJoint1484 =  HAnimJoint();
HAnimJoint1484.X3DNode::setName(CString("l_midcarpal_4_5"));
HAnimJoint1484.setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint1484.setCenter(new float[]{0.1809,0.6973,-0.1276});
HAnimSegment& HAnimSegment1485 =  HAnimSegment();
HAnimSegment1485.X3DNode::setName(CString("l_hamate"));
HAnimSegment1485.setDEF(CString("hanim_l_hamate"));
Transform& Transform1486 =  Transform();
Transform1486.setTranslation(new float[]{0.1809,0.6973,-0.1276});
Transform& Transform1487 =  Transform();
//Empty Transform
Shape& Shape1488 =  Shape();
Shape1488.setUSE(CString("HAnimJointShape"));
Transform1487.addChild(&Shape1488);

Transform1486.addChild(&Transform1487);

HAnimSegment1485.addChild(&Transform1486);

Shape& Shape1489 =  Shape();
LineSet& LineSet1490 =  LineSet();
LineSet1490.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1491 =  Coordinate();
Coordinate1491.setPoint(new float[]{0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794}, 6);
LineSet1490.setCoord(Coordinate1491);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1492 =  ColorRGBA();
ColorRGBA1492.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1490.addChild(&ColorRGBA1492);

Shape1489.setGeometry(&LineSet1490);

HAnimSegment1485.addChild(&Shape1489);

Shape& Shape1493 =  Shape();
LineSet& LineSet1494 =  LineSet();
LineSet1494.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1495 =  Coordinate();
Coordinate1495.setPoint(new float[]{0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036}, 6);
LineSet1494.setCoord(Coordinate1495);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1496 =  ColorRGBA();
ColorRGBA1496.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1494.addChild(&ColorRGBA1496);

Shape1493.setGeometry(&LineSet1494);

HAnimSegment1485.addChild(&Shape1493);

HAnimJoint1484.addChildren(&HAnimSegment1485);

HAnimJoint& HAnimJoint1497 =  HAnimJoint();
HAnimJoint1497.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint1497.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint1497.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment1498 =  HAnimSegment();
HAnimSegment1498.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment1498.setDEF(CString("hanim_l_metacarpal_4"));
Transform& Transform1499 =  Transform();
Transform1499.setTranslation(new float[]{0.1956,0.8019,-0.0794});
Transform& Transform1500 =  Transform();
//Empty Transform
Shape& Shape1501 =  Shape();
Shape1501.setUSE(CString("HAnimJointShape"));
Transform1500.addChild(&Shape1501);

Transform1499.addChild(&Transform1500);

HAnimSegment1498.addChild(&Transform1499);

Shape& Shape1502 =  Shape();
LineSet& LineSet1503 =  LineSet();
LineSet1503.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1504 =  Coordinate();
Coordinate1504.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet1503.setCoord(Coordinate1504);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1505 =  ColorRGBA();
ColorRGBA1505.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1503.addChild(&ColorRGBA1505);

Shape1502.setGeometry(&LineSet1503);

HAnimSegment1498.addChild(&Shape1502);

HAnimJoint1497.addChildren(&HAnimSegment1498);

HAnimJoint& HAnimJoint1506 =  HAnimJoint();
HAnimJoint1506.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint1506.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint1506.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment1507 =  HAnimSegment();
HAnimSegment1507.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment1507.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform& Transform1508 =  Transform();
Transform1508.setTranslation(new float[]{0.1956,0.7815,-0.0794});
Transform& Transform1509 =  Transform();
//Empty Transform
Shape& Shape1510 =  Shape();
Shape1510.setUSE(CString("HAnimJointShape"));
Transform1509.addChild(&Shape1510);

Transform1508.addChild(&Transform1509);

HAnimSegment1507.addChild(&Transform1508);

Shape& Shape1511 =  Shape();
LineSet& LineSet1512 =  LineSet();
LineSet1512.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1513 =  Coordinate();
Coordinate1513.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet1512.setCoord(Coordinate1513);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1514 =  ColorRGBA();
ColorRGBA1514.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1512.addChild(&ColorRGBA1514);

Shape1511.setGeometry(&LineSet1512);

HAnimSegment1507.addChild(&Shape1511);

HAnimJoint1506.addChildren(&HAnimSegment1507);

HAnimJoint& HAnimJoint1515 =  HAnimJoint();
HAnimJoint1515.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint1515.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint1515.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment1516 =  HAnimSegment();
HAnimSegment1516.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment1516.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform& Transform1517 =  Transform();
Transform1517.setTranslation(new float[]{0.1973,0.7287,-0.0777});
Transform& Transform1518 =  Transform();
//Empty Transform
Shape& Shape1519 =  Shape();
Shape1519.setUSE(CString("HAnimJointShape"));
Transform1518.addChild(&Shape1519);

Transform1517.addChild(&Transform1518);

HAnimSegment1516.addChild(&Transform1517);

Shape& Shape1520 =  Shape();
LineSet& LineSet1521 =  LineSet();
LineSet1521.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1522 =  Coordinate();
Coordinate1522.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet1521.setCoord(Coordinate1522);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1523 =  ColorRGBA();
ColorRGBA1523.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1521.addChild(&ColorRGBA1523);

Shape1520.setGeometry(&LineSet1521);

HAnimSegment1516.addChild(&Shape1520);

HAnimJoint1515.addChildren(&HAnimSegment1516);

HAnimJoint& HAnimJoint1524 =  HAnimJoint();
HAnimJoint1524.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint1524.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint1524.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint1515.addChildren(&HAnimJoint1524);

HAnimJoint1506.addChildren(&HAnimJoint1515);

HAnimJoint1497.addChildren(&HAnimJoint1506);

HAnimJoint1484.addChildren(&HAnimJoint1497);

HAnimJoint& HAnimJoint1525 =  HAnimJoint();
HAnimJoint1525.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint1525.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint1525.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment1526 =  HAnimSegment();
HAnimSegment1526.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment1526.setDEF(CString("hanim_l_metacarpal_5"));
Transform& Transform1527 =  Transform();
Transform1527.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Transform& Transform1528 =  Transform();
//Empty Transform
Shape& Shape1529 =  Shape();
Shape1529.setUSE(CString("HAnimJointShape"));
Transform1528.addChild(&Shape1529);

Transform1527.addChild(&Transform1528);

HAnimSegment1526.addChild(&Transform1527);

Shape& Shape1530 =  Shape();
LineSet& LineSet1531 =  LineSet();
LineSet1531.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1532 =  Coordinate();
Coordinate1532.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet1531.setCoord(Coordinate1532);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1533 =  ColorRGBA();
ColorRGBA1533.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1531.addChild(&ColorRGBA1533);

Shape1530.setGeometry(&LineSet1531);

HAnimSegment1526.addChild(&Shape1530);

HAnimSite& HAnimSite1534 =  HAnimSite();
HAnimSite1534.X3DNode::setName(CString("l_metacarpal_phalanx_5"));
HAnimSite1534.setDEF(CString("hanim_l_metacarpal_phalanx_5"));
HAnimSite1534.setTranslation(new float[]{0.1929,0.786,-0.1122});
TouchSensor& TouchSensor1535 =  TouchSensor();
TouchSensor1535.setDescription(CString("HAnimSite 77 l_metacarpal_phalanx_5"));
HAnimSite1534.addChild(&TouchSensor1535);

Shape& Shape1536 =  Shape();
Shape1536.setUSE(CString("HAnimSiteShape"));
HAnimSite1534.addChild(&Shape1536);

Billboard& Billboard1537 =  Billboard();
Shape& Shape1538 =  Shape();
Text& Text1539 =  Text();
Text1539.setString(new CString[]{CString("77")}, 1);
CFontStyle& FontStyle1540 =  CFontStyle();
FontStyle1540.setSize(0.035);
Text1539.setFontStyle(&FontStyle1540);

Shape1538.setGeometry(&Text1539);

Billboard1537.addChild(&Shape1538);

HAnimSite1534.addChild(Billboard1537);

HAnimSegment1526.addChild(&HAnimSite1534);

HAnimJoint1525.addChildren(&HAnimSegment1526);

HAnimJoint& HAnimJoint1541 =  HAnimJoint();
HAnimJoint1541.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint1541.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint1541.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment1542 =  HAnimSegment();
HAnimSegment1542.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment1542.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform& Transform1543 =  Transform();
Transform1543.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Transform& Transform1544 =  Transform();
//Empty Transform
Shape& Shape1545 =  Shape();
Shape1545.setUSE(CString("HAnimJointShape"));
Transform1544.addChild(&Shape1545);

Transform1543.addChild(&Transform1544);

HAnimSegment1542.addChild(&Transform1543);

Shape& Shape1546 =  Shape();
LineSet& LineSet1547 =  LineSet();
LineSet1547.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1548 =  Coordinate();
Coordinate1548.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet1547.setCoord(Coordinate1548);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1549 =  ColorRGBA();
ColorRGBA1549.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1547.addChild(&ColorRGBA1549);

Shape1546.setGeometry(&LineSet1547);

HAnimSegment1542.addChild(&Shape1546);

HAnimJoint1541.addChildren(&HAnimSegment1542);

HAnimJoint& HAnimJoint1550 =  HAnimJoint();
HAnimJoint1550.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint1550.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint1550.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment1551 =  HAnimSegment();
HAnimSegment1551.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment1551.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform& Transform1552 =  Transform();
Transform1552.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Transform& Transform1553 =  Transform();
//Empty Transform
Shape& Shape1554 =  Shape();
Shape1554.setUSE(CString("HAnimJointShape"));
Transform1553.addChild(&Shape1554);

Transform1552.addChild(&Transform1553);

HAnimSegment1551.addChild(&Transform1552);

Shape& Shape1555 =  Shape();
LineSet& LineSet1556 =  LineSet();
LineSet1556.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1557 =  Coordinate();
Coordinate1557.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet1556.setCoord(Coordinate1557);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1558 =  ColorRGBA();
ColorRGBA1558.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1556.addChild(&ColorRGBA1558);

Shape1555.setGeometry(&LineSet1556);

HAnimSegment1551.addChild(&Shape1555);

HAnimJoint1550.addChildren(&HAnimSegment1551);

HAnimJoint& HAnimJoint1559 =  HAnimJoint();
HAnimJoint1559.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint1559.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint1559.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint1550.addChildren(&HAnimJoint1559);

HAnimJoint1541.addChildren(&HAnimJoint1550);

HAnimJoint1525.addChildren(&HAnimJoint1541);

HAnimJoint1484.addChildren(&HAnimJoint1525);

HAnimJoint1340.addChildren(&HAnimJoint1484);

HAnimJoint1303.addChildren(&HAnimJoint1340);

HAnimJoint1280.addChildren(&HAnimJoint1303);

HAnimJoint1271.addChildren(&HAnimJoint1280);

HAnimJoint1227.addChildren(&HAnimJoint1271);

HAnimJoint995.addChildren(&HAnimJoint1227);

HAnimJoint& HAnimJoint1560 =  HAnimJoint();
HAnimJoint1560.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint1560.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1560.setCenter(new float[]{-0.0694,1.46,-0.033});
HAnimSegment& HAnimSegment1561 =  HAnimSegment();
HAnimSegment1561.X3DNode::setName(CString("r_clavicle"));
HAnimSegment1561.setDEF(CString("hanim_r_clavicle"));
Transform& Transform1562 =  Transform();
Transform1562.setTranslation(new float[]{-0.0694,1.46,-0.033});
Transform& Transform1563 =  Transform();
//Empty Transform
Shape& Shape1564 =  Shape();
Shape1564.setUSE(CString("HAnimJointShape"));
Transform1563.addChild(&Shape1564);

Transform1562.addChild(&Transform1563);

HAnimSegment1561.addChild(&Transform1562);

Shape& Shape1565 =  Shape();
LineSet& LineSet1566 =  LineSet();
LineSet1566.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1567 =  Coordinate();
Coordinate1567.setPoint(new float[]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
LineSet1566.setCoord(Coordinate1567);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA& ColorRGBA1568 =  ColorRGBA();
ColorRGBA1568.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1566.addChild(&ColorRGBA1568);

Shape1565.setGeometry(&LineSet1566);

HAnimSegment1561.addChild(&Shape1565);

HAnimSite& HAnimSite1569 =  HAnimSite();
HAnimSite1569.X3DNode::setName(CString("r_acromion"));
HAnimSite1569.setDEF(CString("hanim_r_acromion"));
HAnimSite1569.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor1570 =  TouchSensor();
TouchSensor1570.setDescription(CString("HAnimSite 20 r_acromion"));
HAnimSite1569.addChild(&TouchSensor1570);

Shape& Shape1571 =  Shape();
Shape1571.setUSE(CString("HAnimSiteShape"));
HAnimSite1569.addChild(&Shape1571);

Billboard& Billboard1572 =  Billboard();
Shape& Shape1573 =  Shape();
Text& Text1574 =  Text();
Text1574.setString(new CString[]{CString("20")}, 1);
CFontStyle& FontStyle1575 =  CFontStyle();
FontStyle1575.setSize(0.035);
Text1574.setFontStyle(&FontStyle1575);

Shape1573.setGeometry(&Text1574);

Billboard1572.addChild(&Shape1573);

HAnimSite1569.addChild(Billboard1572);

HAnimSegment1561.addChild(&HAnimSite1569);

HAnimSite& HAnimSite1576 =  HAnimSite();
HAnimSite1576.X3DNode::setName(CString("r_axilla_distal"));
HAnimSite1576.setDEF(CString("hanim_r_axilla_distal"));
HAnimSite1576.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor1577 =  TouchSensor();
TouchSensor1577.setDescription(CString("HAnimSite 22 r_axilla_distal"));
HAnimSite1576.addChild(&TouchSensor1577);

Shape& Shape1578 =  Shape();
Shape1578.setUSE(CString("HAnimSiteShape"));
HAnimSite1576.addChild(&Shape1578);

Billboard& Billboard1579 =  Billboard();
Shape& Shape1580 =  Shape();
Text& Text1581 =  Text();
Text1581.setString(new CString[]{CString("22")}, 1);
CFontStyle& FontStyle1582 =  CFontStyle();
FontStyle1582.setSize(0.035);
Text1581.setFontStyle(&FontStyle1582);

Shape1580.setGeometry(&Text1581);

Billboard1579.addChild(&Shape1580);

HAnimSite1576.addChild(Billboard1579);

HAnimSegment1561.addChild(&HAnimSite1576);

HAnimSite& HAnimSite1583 =  HAnimSite();
HAnimSite1583.X3DNode::setName(CString("r_axilla_posterior_folds"));
HAnimSite1583.setDEF(CString("hanim_r_axilla_posterior_folds"));
TouchSensor& TouchSensor1584 =  TouchSensor();
TouchSensor1584.setDescription(CString("HAnimSite 23 r_axilla_posterior_folds"));
HAnimSite1583.addChild(&TouchSensor1584);

Shape& Shape1585 =  Shape();
Shape1585.setUSE(CString("HAnimSiteShape"));
HAnimSite1583.addChild(&Shape1585);

Billboard& Billboard1586 =  Billboard();
Shape& Shape1587 =  Shape();
Text& Text1588 =  Text();
Text1588.setString(new CString[]{CString("23")}, 1);
CFontStyle& FontStyle1589 =  CFontStyle();
FontStyle1589.setSize(0.035);
Text1588.setFontStyle(&FontStyle1589);

Shape1587.setGeometry(&Text1588);

Billboard1586.addChild(&Shape1587);

HAnimSite1583.addChild(Billboard1586);

HAnimSegment1561.addChild(&HAnimSite1583);

HAnimSite& HAnimSite1590 =  HAnimSite();
HAnimSite1590.X3DNode::setName(CString("r_axilla_proximal"));
HAnimSite1590.setDEF(CString("hanim_r_axilla_proximal"));
HAnimSite1590.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor1591 =  TouchSensor();
TouchSensor1591.setDescription(CString("HAnimSite 21 r_axilla_proximal"));
HAnimSite1590.addChild(&TouchSensor1591);

Shape& Shape1592 =  Shape();
Shape1592.setUSE(CString("HAnimSiteShape"));
HAnimSite1590.addChild(&Shape1592);

Billboard& Billboard1593 =  Billboard();
Shape& Shape1594 =  Shape();
Text& Text1595 =  Text();
Text1595.setString(new CString[]{CString("21")}, 1);
CFontStyle& FontStyle1596 =  CFontStyle();
FontStyle1596.setSize(0.035);
Text1595.setFontStyle(&FontStyle1596);

Shape1594.setGeometry(&Text1595);

Billboard1593.addChild(&Shape1594);

HAnimSite1590.addChild(Billboard1593);

HAnimSegment1561.addChild(&HAnimSite1590);

HAnimSite& HAnimSite1597 =  HAnimSite();
HAnimSite1597.X3DNode::setName(CString("r_clavicale"));
HAnimSite1597.setDEF(CString("hanim_r_clavicale"));
HAnimSite1597.setTranslation(new float[]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor1598 =  TouchSensor();
TouchSensor1598.setDescription(CString("HAnimSite 19 r_clavicale"));
HAnimSite1597.addChild(&TouchSensor1598);

Shape& Shape1599 =  Shape();
Shape1599.setUSE(CString("HAnimSiteShape"));
HAnimSite1597.addChild(&Shape1599);

Billboard& Billboard1600 =  Billboard();
Shape& Shape1601 =  Shape();
Text& Text1602 =  Text();
Text1602.setString(new CString[]{CString("19")}, 1);
CFontStyle& FontStyle1603 =  CFontStyle();
FontStyle1603.setSize(0.035);
Text1602.setFontStyle(&FontStyle1603);

Shape1601.setGeometry(&Text1602);

Billboard1600.addChild(&Shape1601);

HAnimSite1597.addChild(Billboard1600);

HAnimSegment1561.addChild(&HAnimSite1597);

HAnimJoint1560.addChildren(&HAnimSegment1561);

HAnimJoint& HAnimJoint1604 =  HAnimJoint();
HAnimJoint1604.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint1604.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1604.setCenter(new float[]{-0.0836,1.4281,-0.0401});
HAnimSegment& HAnimSegment1605 =  HAnimSegment();
HAnimSegment1605.X3DNode::setName(CString("r_scapula"));
HAnimSegment1605.setDEF(CString("hanim_r_scapula"));
Transform& Transform1606 =  Transform();
Transform1606.setTranslation(new float[]{-0.0836,1.4281,-0.0401});
Transform& Transform1607 =  Transform();
//Empty Transform
Shape& Shape1608 =  Shape();
Shape1608.setUSE(CString("HAnimJointShape"));
Transform1607.addChild(&Shape1608);

Transform1606.addChild(&Transform1607);

HAnimSegment1605.addChild(&Transform1606);

Shape& Shape1609 =  Shape();
LineSet& LineSet1610 =  LineSet();
LineSet1610.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1611 =  Coordinate();
Coordinate1611.setPoint(new float[]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
LineSet1610.setCoord(Coordinate1611);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA& ColorRGBA1612 =  ColorRGBA();
ColorRGBA1612.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1610.addChild(&ColorRGBA1612);

Shape1609.setGeometry(&LineSet1610);

HAnimSegment1605.addChild(&Shape1609);

HAnimJoint1604.addChildren(&HAnimSegment1605);

HAnimJoint& HAnimJoint1613 =  HAnimJoint();
HAnimJoint1613.X3DNode::setName(CString("r_shoulder"));
HAnimJoint1613.setDEF(CString("hanim_r_shoulder"));
HAnimJoint1613.setCenter(new float[]{-0.1907,1.4407,-0.0325});
HAnimSegment& HAnimSegment1614 =  HAnimSegment();
HAnimSegment1614.X3DNode::setName(CString("r_upperarm"));
HAnimSegment1614.setDEF(CString("hanim_r_upperarm"));
Transform& Transform1615 =  Transform();
Transform1615.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Transform& Transform1616 =  Transform();
//Empty Transform
Shape& Shape1617 =  Shape();
Shape1617.setUSE(CString("HAnimJointShape"));
Transform1616.addChild(&Shape1617);

Transform1615.addChild(&Transform1616);

HAnimSegment1614.addChild(&Transform1615);

Shape& Shape1618 =  Shape();
LineSet& LineSet1619 =  LineSet();
LineSet1619.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1620 =  Coordinate();
Coordinate1620.setPoint(new float[]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet1619.setCoord(Coordinate1620);

//from r_shoulder to r_elbow vertices 2
ColorRGBA& ColorRGBA1621 =  ColorRGBA();
ColorRGBA1621.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1619.addChild(&ColorRGBA1621);

Shape1618.setGeometry(&LineSet1619);

HAnimSegment1614.addChild(&Shape1618);

HAnimSite& HAnimSite1622 =  HAnimSite();
HAnimSite1622.X3DNode::setName(CString("r_bideltoid"));
HAnimSite1622.setDEF(CString("hanim_r_bideltoid"));
TouchSensor& TouchSensor1623 =  TouchSensor();
TouchSensor1623.setDescription(CString("HAnimSite 97 r_bideltoid"));
HAnimSite1622.addChild(&TouchSensor1623);

Shape& Shape1624 =  Shape();
Shape1624.setUSE(CString("HAnimSiteShape"));
HAnimSite1622.addChild(&Shape1624);

Billboard& Billboard1625 =  Billboard();
Shape& Shape1626 =  Shape();
Text& Text1627 =  Text();
Text1627.setString(new CString[]{CString("97")}, 1);
CFontStyle& FontStyle1628 =  CFontStyle();
FontStyle1628.setSize(0.035);
Text1627.setFontStyle(&FontStyle1628);

Shape1626.setGeometry(&Text1627);

Billboard1625.addChild(&Shape1626);

HAnimSite1622.addChild(Billboard1625);

HAnimSegment1614.addChild(&HAnimSite1622);

HAnimSite& HAnimSite1629 =  HAnimSite();
HAnimSite1629.X3DNode::setName(CString("r_humeral_lateral_epicondyles"));
HAnimSite1629.setDEF(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimSite1629.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor1630 =  TouchSensor();
TouchSensor1630.setDescription(CString("HAnimSite 66 r_humeral_lateral_epicondyles"));
HAnimSite1629.addChild(&TouchSensor1630);

Shape& Shape1631 =  Shape();
Shape1631.setUSE(CString("HAnimSiteShape"));
HAnimSite1629.addChild(&Shape1631);

Billboard& Billboard1632 =  Billboard();
Shape& Shape1633 =  Shape();
Text& Text1634 =  Text();
Text1634.setString(new CString[]{CString("66")}, 1);
CFontStyle& FontStyle1635 =  CFontStyle();
FontStyle1635.setSize(0.035);
Text1634.setFontStyle(&FontStyle1635);

Shape1633.setGeometry(&Text1634);

Billboard1632.addChild(&Shape1633);

HAnimSite1629.addChild(Billboard1632);

HAnimSegment1614.addChild(&HAnimSite1629);

HAnimJoint1613.addChildren(&HAnimSegment1614);

HAnimJoint& HAnimJoint1636 =  HAnimJoint();
HAnimJoint1636.X3DNode::setName(CString("r_elbow"));
HAnimJoint1636.setDEF(CString("hanim_r_elbow"));
HAnimJoint1636.setCenter(new float[]{-0.1949,1.1388,-0.062});
HAnimSegment& HAnimSegment1637 =  HAnimSegment();
HAnimSegment1637.X3DNode::setName(CString("r_forearm"));
HAnimSegment1637.setDEF(CString("hanim_r_forearm"));
Transform& Transform1638 =  Transform();
Transform1638.setTranslation(new float[]{-0.1949,1.1388,-0.062});
Transform& Transform1639 =  Transform();
//Empty Transform
Shape& Shape1640 =  Shape();
Shape1640.setUSE(CString("HAnimJointShape"));
Transform1639.addChild(&Shape1640);

Transform1638.addChild(&Transform1639);

HAnimSegment1637.addChild(&Transform1638);

Shape& Shape1641 =  Shape();
LineSet& LineSet1642 =  LineSet();
LineSet1642.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1643 =  Coordinate();
Coordinate1643.setPoint(new float[]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet1642.setCoord(Coordinate1643);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA& ColorRGBA1644 =  ColorRGBA();
ColorRGBA1644.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1642.addChild(&ColorRGBA1644);

Shape1641.setGeometry(&LineSet1642);

HAnimSegment1637.addChild(&Shape1641);

HAnimSite& HAnimSite1645 =  HAnimSite();
HAnimSite1645.X3DNode::setName(CString("r_humeral_medial_epicondyles"));
HAnimSite1645.setDEF(CString("hanim_r_humeral_medial_epicondyles"));
HAnimSite1645.setTranslation(new float[]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor1646 =  TouchSensor();
TouchSensor1646.setDescription(CString("HAnimSite 67 r_humeral_medial_epicondyles"));
HAnimSite1645.addChild(&TouchSensor1646);

Shape& Shape1647 =  Shape();
Shape1647.setUSE(CString("HAnimSiteShape"));
HAnimSite1645.addChild(&Shape1647);

Billboard& Billboard1648 =  Billboard();
Shape& Shape1649 =  Shape();
Text& Text1650 =  Text();
Text1650.setString(new CString[]{CString("67")}, 1);
CFontStyle& FontStyle1651 =  CFontStyle();
FontStyle1651.setSize(0.035);
Text1650.setFontStyle(&FontStyle1651);

Shape1649.setGeometry(&Text1650);

Billboard1648.addChild(&Shape1649);

HAnimSite1645.addChild(Billboard1648);

HAnimSegment1637.addChild(&HAnimSite1645);

HAnimSite& HAnimSite1652 =  HAnimSite();
HAnimSite1652.X3DNode::setName(CString("r_olecranon"));
HAnimSite1652.setDEF(CString("hanim_r_olecranon"));
HAnimSite1652.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor1653 =  TouchSensor();
TouchSensor1653.setDescription(CString("HAnimSite 68 r_olecranon"));
HAnimSite1652.addChild(&TouchSensor1653);

Shape& Shape1654 =  Shape();
Shape1654.setUSE(CString("HAnimSiteShape"));
HAnimSite1652.addChild(&Shape1654);

Billboard& Billboard1655 =  Billboard();
Shape& Shape1656 =  Shape();
Text& Text1657 =  Text();
Text1657.setString(new CString[]{CString("68")}, 1);
CFontStyle& FontStyle1658 =  CFontStyle();
FontStyle1658.setSize(0.035);
Text1657.setFontStyle(&FontStyle1658);

Shape1656.setGeometry(&Text1657);

Billboard1655.addChild(&Shape1656);

HAnimSite1652.addChild(Billboard1655);

HAnimSegment1637.addChild(&HAnimSite1652);

HAnimSite& HAnimSite1659 =  HAnimSite();
HAnimSite1659.X3DNode::setName(CString("r_radial_styloid"));
HAnimSite1659.setDEF(CString("hanim_r_radial_styloid"));
HAnimSite1659.setTranslation(new float[]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor1660 =  TouchSensor();
TouchSensor1660.setDescription(CString("HAnimSite 74 r_radial_styloid"));
HAnimSite1659.addChild(&TouchSensor1660);

Shape& Shape1661 =  Shape();
Shape1661.setUSE(CString("HAnimSiteShape"));
HAnimSite1659.addChild(&Shape1661);

Billboard& Billboard1662 =  Billboard();
Shape& Shape1663 =  Shape();
Text& Text1664 =  Text();
Text1664.setString(new CString[]{CString("74")}, 1);
CFontStyle& FontStyle1665 =  CFontStyle();
FontStyle1665.setSize(0.035);
Text1664.setFontStyle(&FontStyle1665);

Shape1663.setGeometry(&Text1664);

Billboard1662.addChild(&Shape1663);

HAnimSite1659.addChild(Billboard1662);

HAnimSegment1637.addChild(&HAnimSite1659);

HAnimSite& HAnimSite1666 =  HAnimSite();
HAnimSite1666.X3DNode::setName(CString("r_radiale"));
HAnimSite1666.setDEF(CString("hanim_r_radiale"));
HAnimSite1666.setTranslation(new float[]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor1667 =  TouchSensor();
TouchSensor1667.setDescription(CString("HAnimSite 72 r_radiale"));
HAnimSite1666.addChild(&TouchSensor1667);

Shape& Shape1668 =  Shape();
Shape1668.setUSE(CString("HAnimSiteShape"));
HAnimSite1666.addChild(&Shape1668);

Billboard& Billboard1669 =  Billboard();
Shape& Shape1670 =  Shape();
Text& Text1671 =  Text();
Text1671.setString(new CString[]{CString("72")}, 1);
CFontStyle& FontStyle1672 =  CFontStyle();
FontStyle1672.setSize(0.035);
Text1671.setFontStyle(&FontStyle1672);

Shape1670.setGeometry(&Text1671);

Billboard1669.addChild(&Shape1670);

HAnimSite1666.addChild(Billboard1669);

HAnimSegment1637.addChild(&HAnimSite1666);

HAnimJoint1636.addChildren(&HAnimSegment1637);

HAnimJoint& HAnimJoint1673 =  HAnimJoint();
HAnimJoint1673.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint1673.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint1673.setCenter(new float[]{-0.1959,0.8694,-0.0521});
HAnimSegment& HAnimSegment1674 =  HAnimSegment();
HAnimSegment1674.X3DNode::setName(CString("r_carpal"));
HAnimSegment1674.setDEF(CString("hanim_r_carpal"));
Transform& Transform1675 =  Transform();
Transform1675.setScale(new float[]{0.2,0.2,0.2});
Transform1675.setTranslation(new float[]{-0.2,0.85,-0.05});
Transform1675.setRotation(new float[]{0,0,1,-3.14});
//Transform right hand
Transform& Transform1676 =  Transform();
Transform1676.setRotation(new float[]{0,1,0,1.57});
//Transform right hand
Shape& Shape1677 =  Shape();
Shape1677.setUSE(CString("HAnimJointShape"));
Transform1676.addChild(&Shape1677);

Transform1675.addChild(&Transform1676);

HAnimSegment1674.addChild(&Transform1675);

Shape& Shape1678 =  Shape();
LineSet& LineSet1679 =  LineSet();
LineSet1679.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1680 =  Coordinate();
Coordinate1680.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826}, 6);
LineSet1679.setCoord(Coordinate1680);

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA& ColorRGBA1681 =  ColorRGBA();
ColorRGBA1681.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1679.addChild(&ColorRGBA1681);

Shape1678.setGeometry(&LineSet1679);

HAnimSegment1674.addChild(&Shape1678);

HAnimSite& HAnimSite1682 =  HAnimSite();
HAnimSite1682.X3DNode::setName(CString("r_ulnar_styloid"));
HAnimSite1682.setDEF(CString("hanim_r_ulnar_styloid"));
HAnimSite1682.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
TouchSensor& TouchSensor1683 =  TouchSensor();
TouchSensor1683.setDescription(CString("HAnimSite 73 r_ulnar_styloid"));
HAnimSite1682.addChild(&TouchSensor1683);

Shape& Shape1684 =  Shape();
Shape1684.setUSE(CString("HAnimSiteShape"));
HAnimSite1682.addChild(&Shape1684);

Billboard& Billboard1685 =  Billboard();
Shape& Shape1686 =  Shape();
Text& Text1687 =  Text();
Text1687.setString(new CString[]{CString("73")}, 1);
CFontStyle& FontStyle1688 =  CFontStyle();
FontStyle1688.setSize(0.035);
Text1687.setFontStyle(&FontStyle1688);

Shape1686.setGeometry(&Text1687);

Billboard1685.addChild(&Shape1686);

HAnimSite1682.addChild(Billboard1685);

HAnimSegment1674.addChild(&HAnimSite1682);

Shape& Shape1689 =  Shape();
LineSet& LineSet1690 =  LineSet();
LineSet1690.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1691 =  Coordinate();
Coordinate1691.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935}, 6);
LineSet1690.setCoord(Coordinate1691);

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA& ColorRGBA1692 =  ColorRGBA();
ColorRGBA1692.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1690.addChild(&ColorRGBA1692);

Shape1689.setGeometry(&LineSet1690);

HAnimSegment1674.addChild(&Shape1689);

Shape& Shape1693 =  Shape();
LineSet& LineSet1694 =  LineSet();
LineSet1694.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1695 =  Coordinate();
Coordinate1695.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067}, 6);
LineSet1694.setCoord(Coordinate1695);

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA& ColorRGBA1696 =  ColorRGBA();
ColorRGBA1696.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1694.addChild(&ColorRGBA1696);

Shape1693.setGeometry(&LineSet1694);

HAnimSegment1674.addChild(&Shape1693);

Shape& Shape1697 =  Shape();
LineSet& LineSet1698 =  LineSet();
LineSet1698.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1699 =  Coordinate();
Coordinate1699.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276}, 6);
LineSet1698.setCoord(Coordinate1699);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA& ColorRGBA1700 =  ColorRGBA();
ColorRGBA1700.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1698.addChild(&ColorRGBA1700);

Shape1697.setGeometry(&LineSet1698);

HAnimSegment1674.addChild(&Shape1697);

HAnimJoint1673.addChildren(&HAnimSegment1674);

HAnimJoint& HAnimJoint1701 =  HAnimJoint();
HAnimJoint1701.X3DNode::setName(CString("r_midcarpal_1"));
HAnimJoint1701.setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint1701.setCenter(new float[]{-0.1811,0.6975,-0.0826});
HAnimSegment& HAnimSegment1702 =  HAnimSegment();
HAnimSegment1702.X3DNode::setName(CString("r_trapezium"));
HAnimSegment1702.setDEF(CString("hanim_r_trapezium"));
Transform& Transform1703 =  Transform();
Transform1703.setTranslation(new float[]{-0.1811,0.6975,-0.0826});
Transform& Transform1704 =  Transform();
//Empty Transform
Shape& Shape1705 =  Shape();
Shape1705.setUSE(CString("HAnimJointShape"));
Transform1704.addChild(&Shape1705);

Transform1703.addChild(&Transform1704);

HAnimSegment1702.addChild(&Transform1703);

Shape& Shape1706 =  Shape();
LineSet& LineSet1707 =  LineSet();
LineSet1707.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1708 =  Coordinate();
Coordinate1708.setPoint(new float[]{-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473}, 6);
LineSet1707.setCoord(Coordinate1708);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1709 =  ColorRGBA();
ColorRGBA1709.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1707.addChild(&ColorRGBA1709);

Shape1706.setGeometry(&LineSet1707);

HAnimSegment1702.addChild(&Shape1706);

HAnimJoint1701.addChildren(&HAnimSegment1702);

HAnimJoint& HAnimJoint1710 =  HAnimJoint();
HAnimJoint1710.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint1710.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint1710.setCenter(new float[]{-0.1899,0.8502,-0.0473});
HAnimSegment& HAnimSegment1711 =  HAnimSegment();
HAnimSegment1711.X3DNode::setName(CString("r_metacarpal_1"));
HAnimSegment1711.setDEF(CString("hanim_r_metacarpal_1"));
Transform& Transform1712 =  Transform();
Transform1712.setTranslation(new float[]{-0.1899,0.8502,-0.0473});
Transform& Transform1713 =  Transform();
//Empty Transform
Shape& Shape1714 =  Shape();
Shape1714.setUSE(CString("HAnimJointShape"));
Transform1713.addChild(&Shape1714);

Transform1712.addChild(&Transform1713);

HAnimSegment1711.addChild(&Transform1712);

Shape& Shape1715 =  Shape();
LineSet& LineSet1716 =  LineSet();
LineSet1716.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1717 =  Coordinate();
Coordinate1717.setPoint(new float[]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
LineSet1716.setCoord(Coordinate1717);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1718 =  ColorRGBA();
ColorRGBA1718.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1716.addChild(&ColorRGBA1718);

Shape1715.setGeometry(&LineSet1716);

HAnimSegment1711.addChild(&Shape1715);

HAnimJoint1710.addChildren(&HAnimSegment1711);

HAnimJoint& HAnimJoint1719 =  HAnimJoint();
HAnimJoint1719.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1719.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint1719.setCenter(new float[]{-0.1874,0.8256,0.0306});
HAnimSegment& HAnimSegment1720 =  HAnimSegment();
HAnimSegment1720.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1720.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform& Transform1721 =  Transform();
Transform1721.setTranslation(new float[]{-0.1874,0.8256,0.0306});
Transform& Transform1722 =  Transform();
//Empty Transform
Shape& Shape1723 =  Shape();
Shape1723.setUSE(CString("HAnimJointShape"));
Transform1722.addChild(&Shape1723);

Transform1721.addChild(&Transform1722);

HAnimSegment1720.addChild(&Transform1721);

Shape& Shape1724 =  Shape();
LineSet& LineSet1725 =  LineSet();
LineSet1725.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1726 =  Coordinate();
Coordinate1726.setPoint(new float[]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
LineSet1725.setCoord(Coordinate1726);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1727 =  ColorRGBA();
ColorRGBA1727.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1725.addChild(&ColorRGBA1727);

Shape1724.setGeometry(&LineSet1725);

HAnimSegment1720.addChild(&Shape1724);

HAnimJoint1719.addChildren(&HAnimSegment1720);

HAnimJoint& HAnimJoint1728 =  HAnimJoint();
HAnimJoint1728.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1728.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint1728.setCenter(new float[]{-0.1864,0.819,0.0506});
HAnimJoint1719.addChildren(&HAnimJoint1728);

HAnimJoint1710.addChildren(&HAnimJoint1719);

HAnimJoint1701.addChildren(&HAnimJoint1710);

HAnimJoint1673.addChildren(&HAnimJoint1701);

HAnimJoint& HAnimJoint1729 =  HAnimJoint();
HAnimJoint1729.X3DNode::setName(CString("r_midcarpal_2"));
HAnimJoint1729.setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint1729.setCenter(new float[]{-0.1811,0.6984,-0.0935});
HAnimSegment& HAnimSegment1730 =  HAnimSegment();
HAnimSegment1730.X3DNode::setName(CString("r_trapezoid"));
HAnimSegment1730.setDEF(CString("hanim_r_trapezoid"));
Transform& Transform1731 =  Transform();
Transform1731.setTranslation(new float[]{-0.1811,0.6984,-0.0935});
Transform& Transform1732 =  Transform();
//Empty Transform
Shape& Shape1733 =  Shape();
Shape1733.setUSE(CString("HAnimJointShape"));
Transform1732.addChild(&Shape1733);

Transform1731.addChild(&Transform1732);

HAnimSegment1730.addChild(&Transform1731);

Shape& Shape1734 =  Shape();
LineSet& LineSet1735 =  LineSet();
LineSet1735.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1736 =  Coordinate();
Coordinate1736.setPoint(new float[]{-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218}, 6);
LineSet1735.setCoord(Coordinate1736);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1737 =  ColorRGBA();
ColorRGBA1737.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1735.addChild(&ColorRGBA1737);

Shape1734.setGeometry(&LineSet1735);

HAnimSegment1730.addChild(&Shape1734);

HAnimJoint1729.addChildren(&HAnimSegment1730);

HAnimJoint& HAnimJoint1738 =  HAnimJoint();
HAnimJoint1738.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint1738.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint1738.setCenter(new float[]{-0.1961,0.8055,-0.0218});
HAnimSegment& HAnimSegment1739 =  HAnimSegment();
HAnimSegment1739.X3DNode::setName(CString("r_metacarpal_2"));
HAnimSegment1739.setDEF(CString("hanim_r_metacarpal_2"));
Transform& Transform1740 =  Transform();
Transform1740.setTranslation(new float[]{-0.1961,0.8055,-0.0218});
Transform& Transform1741 =  Transform();
//Empty Transform
Shape& Shape1742 =  Shape();
Shape1742.setUSE(CString("HAnimJointShape"));
Transform1741.addChild(&Shape1742);

Transform1740.addChild(&Transform1741);

HAnimSegment1739.addChild(&Transform1740);

Shape& Shape1743 =  Shape();
LineSet& LineSet1744 =  LineSet();
LineSet1744.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1745 =  Coordinate();
Coordinate1745.setPoint(new float[]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
LineSet1744.setCoord(Coordinate1745);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1746 =  ColorRGBA();
ColorRGBA1746.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1744.addChild(&ColorRGBA1746);

Shape1743.setGeometry(&LineSet1744);

HAnimSegment1739.addChild(&Shape1743);

HAnimSite& HAnimSite1747 =  HAnimSite();
HAnimSite1747.X3DNode::setName(CString("r_metacarpal_phalanx_2"));
HAnimSite1747.setDEF(CString("hanim_r_metacarpal_phalanx_2"));
HAnimSite1747.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
TouchSensor& TouchSensor1748 =  TouchSensor();
TouchSensor1748.setDescription(CString("HAnimSite 78 r_metacarpal_phalanx_2"));
HAnimSite1747.addChild(&TouchSensor1748);

Shape& Shape1749 =  Shape();
Shape1749.setUSE(CString("HAnimSiteShape"));
HAnimSite1747.addChild(&Shape1749);

Billboard& Billboard1750 =  Billboard();
Shape& Shape1751 =  Shape();
Text& Text1752 =  Text();
Text1752.setString(new CString[]{CString("78")}, 1);
CFontStyle& FontStyle1753 =  CFontStyle();
FontStyle1753.setSize(0.035);
Text1752.setFontStyle(&FontStyle1753);

Shape1751.setGeometry(&Text1752);

Billboard1750.addChild(&Shape1751);

HAnimSite1747.addChild(Billboard1750);

HAnimSegment1739.addChild(&HAnimSite1747);

HAnimJoint1738.addChildren(&HAnimSegment1739);

HAnimJoint& HAnimJoint1754 =  HAnimJoint();
HAnimJoint1754.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1754.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint1754.setCenter(new float[]{-0.1961,0.7846,-0.0218});
HAnimSegment& HAnimSegment1755 =  HAnimSegment();
HAnimSegment1755.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1755.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform& Transform1756 =  Transform();
Transform1756.setTranslation(new float[]{-0.1961,0.7846,-0.0218});
Transform& Transform1757 =  Transform();
//Empty Transform
Shape& Shape1758 =  Shape();
Shape1758.setUSE(CString("HAnimJointShape"));
Transform1757.addChild(&Shape1758);

Transform1756.addChild(&Transform1757);

HAnimSegment1755.addChild(&Transform1756);

Shape& Shape1759 =  Shape();
LineSet& LineSet1760 =  LineSet();
LineSet1760.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1761 =  Coordinate();
Coordinate1761.setPoint(new float[]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
LineSet1760.setCoord(Coordinate1761);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1762 =  ColorRGBA();
ColorRGBA1762.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1760.addChild(&ColorRGBA1762);

Shape1759.setGeometry(&LineSet1760);

HAnimSegment1755.addChild(&Shape1759);

HAnimJoint1754.addChildren(&HAnimSegment1755);

HAnimJoint& HAnimJoint1763 =  HAnimJoint();
HAnimJoint1763.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1763.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1763.setCenter(new float[]{-0.1954,0.7393,-0.0185});
HAnimSegment& HAnimSegment1764 =  HAnimSegment();
HAnimSegment1764.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1764.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform& Transform1765 =  Transform();
Transform1765.setTranslation(new float[]{-0.1954,0.7393,-0.0185});
Transform& Transform1766 =  Transform();
//Empty Transform
Shape& Shape1767 =  Shape();
Shape1767.setUSE(CString("HAnimJointShape"));
Transform1766.addChild(&Shape1767);

Transform1765.addChild(&Transform1766);

HAnimSegment1764.addChild(&Transform1765);

Shape& Shape1768 =  Shape();
LineSet& LineSet1769 =  LineSet();
LineSet1769.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1770 =  Coordinate();
Coordinate1770.setPoint(new float[]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
LineSet1769.setCoord(Coordinate1770);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1771 =  ColorRGBA();
ColorRGBA1771.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1769.addChild(&ColorRGBA1771);

Shape1768.setGeometry(&LineSet1769);

HAnimSegment1764.addChild(&Shape1768);

HAnimJoint1763.addChildren(&HAnimSegment1764);

HAnimJoint& HAnimJoint1772 =  HAnimJoint();
HAnimJoint1772.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1772.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint1772.setCenter(new float[]{-0.1945,0.7169,-0.0173});
HAnimJoint1763.addChildren(&HAnimJoint1772);

HAnimJoint1754.addChildren(&HAnimJoint1763);

HAnimJoint1738.addChildren(&HAnimJoint1754);

HAnimJoint1729.addChildren(&HAnimJoint1738);

HAnimJoint1673.addChildren(&HAnimJoint1729);

HAnimJoint& HAnimJoint1773 =  HAnimJoint();
HAnimJoint1773.X3DNode::setName(CString("r_midcarpal_3"));
HAnimJoint1773.setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint1773.setCenter(new float[]{-0.1809,0.7,-0.1067});
HAnimSegment& HAnimSegment1774 =  HAnimSegment();
HAnimSegment1774.X3DNode::setName(CString("r_capitate"));
HAnimSegment1774.setDEF(CString("hanim_r_capitate"));
Transform& Transform1775 =  Transform();
Transform1775.setTranslation(new float[]{-0.1809,0.7,-0.1067});
Transform& Transform1776 =  Transform();
//Empty Transform
Shape& Shape1777 =  Shape();
Shape1777.setUSE(CString("HAnimJointShape"));
Transform1776.addChild(&Shape1777);

Transform1775.addChild(&Transform1776);

HAnimSegment1774.addChild(&Transform1775);

Shape& Shape1778 =  Shape();
LineSet& LineSet1779 =  LineSet();
LineSet1779.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1780 =  Coordinate();
Coordinate1780.setPoint(new float[]{-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468}, 6);
LineSet1779.setCoord(Coordinate1780);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1781 =  ColorRGBA();
ColorRGBA1781.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1779.addChild(&ColorRGBA1781);

Shape1778.setGeometry(&LineSet1779);

HAnimSegment1774.addChild(&Shape1778);

HAnimJoint1773.addChildren(&HAnimSegment1774);

HAnimJoint& HAnimJoint1782 =  HAnimJoint();
HAnimJoint1782.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint1782.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint1782.setCenter(new float[]{-0.1972,0.806,-0.0468});
HAnimSegment& HAnimSegment1783 =  HAnimSegment();
HAnimSegment1783.X3DNode::setName(CString("r_metacarpal_3"));
HAnimSegment1783.setDEF(CString("hanim_r_metacarpal_3"));
Transform& Transform1784 =  Transform();
Transform1784.setTranslation(new float[]{-0.1972,0.806,-0.0468});
Transform& Transform1785 =  Transform();
//Empty Transform
Shape& Shape1786 =  Shape();
Shape1786.setUSE(CString("HAnimJointShape"));
Transform1785.addChild(&Shape1786);

Transform1784.addChild(&Transform1785);

HAnimSegment1783.addChild(&Transform1784);

Shape& Shape1787 =  Shape();
LineSet& LineSet1788 =  LineSet();
LineSet1788.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1789 =  Coordinate();
Coordinate1789.setPoint(new float[]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
LineSet1788.setCoord(Coordinate1789);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1790 =  ColorRGBA();
ColorRGBA1790.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1788.addChild(&ColorRGBA1790);

Shape1787.setGeometry(&LineSet1788);

HAnimSegment1783.addChild(&Shape1787);

HAnimSite& HAnimSite1791 =  HAnimSite();
HAnimSite1791.X3DNode::setName(CString("r_metacarpal_phalanx_3"));
HAnimSite1791.setDEF(CString("hanim_r_metacarpal_phalanx_3"));
TouchSensor& TouchSensor1792 =  TouchSensor();
TouchSensor1792.setDescription(CString("HAnimSite 79 r_metacarpal_phalanx_3"));
HAnimSite1791.addChild(&TouchSensor1792);

Shape& Shape1793 =  Shape();
Shape1793.setUSE(CString("HAnimSiteShape"));
HAnimSite1791.addChild(&Shape1793);

Billboard& Billboard1794 =  Billboard();
Shape& Shape1795 =  Shape();
Text& Text1796 =  Text();
Text1796.setString(new CString[]{CString("79")}, 1);
CFontStyle& FontStyle1797 =  CFontStyle();
FontStyle1797.setSize(0.035);
Text1796.setFontStyle(&FontStyle1797);

Shape1795.setGeometry(&Text1796);

Billboard1794.addChild(&Shape1795);

HAnimSite1791.addChild(Billboard1794);

HAnimSegment1783.addChild(&HAnimSite1791);

HAnimJoint1782.addChildren(&HAnimSegment1783);

HAnimJoint& HAnimJoint1798 =  HAnimJoint();
HAnimJoint1798.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1798.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint1798.setCenter(new float[]{-0.1972,0.7849,-0.0468});
HAnimSegment& HAnimSegment1799 =  HAnimSegment();
HAnimSegment1799.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1799.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform& Transform1800 =  Transform();
Transform1800.setTranslation(new float[]{-0.1972,0.7849,-0.0468});
Transform& Transform1801 =  Transform();
//Empty Transform
Shape& Shape1802 =  Shape();
Shape1802.setUSE(CString("HAnimJointShape"));
Transform1801.addChild(&Shape1802);

Transform1800.addChild(&Transform1801);

HAnimSegment1799.addChild(&Transform1800);

Shape& Shape1803 =  Shape();
LineSet& LineSet1804 =  LineSet();
LineSet1804.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1805 =  Coordinate();
Coordinate1805.setPoint(new float[]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
LineSet1804.setCoord(Coordinate1805);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1806 =  ColorRGBA();
ColorRGBA1806.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1804.addChild(&ColorRGBA1806);

Shape1803.setGeometry(&LineSet1804);

HAnimSegment1799.addChild(&Shape1803);

HAnimJoint1798.addChildren(&HAnimSegment1799);

HAnimJoint& HAnimJoint1807 =  HAnimJoint();
HAnimJoint1807.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1807.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1807.setCenter(new float[]{-0.195,0.7304,-0.0441});
HAnimSegment& HAnimSegment1808 =  HAnimSegment();
HAnimSegment1808.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1808.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform& Transform1809 =  Transform();
Transform1809.setTranslation(new float[]{-0.195,0.7304,-0.0441});
Transform& Transform1810 =  Transform();
//Empty Transform
Shape& Shape1811 =  Shape();
Shape1811.setUSE(CString("HAnimJointShape"));
Transform1810.addChild(&Shape1811);

Transform1809.addChild(&Transform1810);

HAnimSegment1808.addChild(&Transform1809);

Shape& Shape1812 =  Shape();
LineSet& LineSet1813 =  LineSet();
LineSet1813.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1814 =  Coordinate();
Coordinate1814.setPoint(new float[]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
LineSet1813.setCoord(Coordinate1814);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1815 =  ColorRGBA();
ColorRGBA1815.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1813.addChild(&ColorRGBA1815);

Shape1812.setGeometry(&LineSet1813);

HAnimSegment1808.addChild(&Shape1812);

HAnimJoint1807.addChildren(&HAnimSegment1808);

HAnimJoint& HAnimJoint1816 =  HAnimJoint();
HAnimJoint1816.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1816.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint1816.setCenter(new float[]{-0.1939,0.7042,-0.0432});
HAnimJoint1807.addChildren(&HAnimJoint1816);

HAnimJoint1798.addChildren(&HAnimJoint1807);

HAnimJoint1782.addChildren(&HAnimJoint1798);

HAnimJoint1773.addChildren(&HAnimJoint1782);

HAnimJoint1673.addChildren(&HAnimJoint1773);

HAnimJoint& HAnimJoint1817 =  HAnimJoint();
HAnimJoint1817.X3DNode::setName(CString("r_midcarpal_4_5"));
HAnimJoint1817.setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint1817.setCenter(new float[]{-0.1809,0.6973,-0.1276});
HAnimSegment& HAnimSegment1818 =  HAnimSegment();
HAnimSegment1818.X3DNode::setName(CString("r_hamate"));
HAnimSegment1818.setDEF(CString("hanim_r_hamate"));
Transform& Transform1819 =  Transform();
Transform1819.setTranslation(new float[]{-0.1809,0.6973,-0.1276});
Transform& Transform1820 =  Transform();
//Empty Transform
Shape& Shape1821 =  Shape();
Shape1821.setUSE(CString("HAnimJointShape"));
Transform1820.addChild(&Shape1821);

Transform1819.addChild(&Transform1820);

HAnimSegment1818.addChild(&Transform1819);

Shape& Shape1822 =  Shape();
LineSet& LineSet1823 =  LineSet();
LineSet1823.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1824 =  Coordinate();
Coordinate1824.setPoint(new float[]{-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732}, 6);
LineSet1823.setCoord(Coordinate1824);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1825 =  ColorRGBA();
ColorRGBA1825.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1823.addChild(&ColorRGBA1825);

Shape1822.setGeometry(&LineSet1823);

HAnimSegment1818.addChild(&Shape1822);

Shape& Shape1826 =  Shape();
LineSet& LineSet1827 =  LineSet();
LineSet1827.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1828 =  Coordinate();
Coordinate1828.setPoint(new float[]{-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975}, 6);
LineSet1827.setCoord(Coordinate1828);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1829 =  ColorRGBA();
ColorRGBA1829.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1827.addChild(&ColorRGBA1829);

Shape1826.setGeometry(&LineSet1827);

HAnimSegment1818.addChild(&Shape1826);

HAnimJoint1817.addChildren(&HAnimSegment1818);

HAnimJoint& HAnimJoint1830 =  HAnimJoint();
HAnimJoint1830.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint1830.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint1830.setCenter(new float[]{-0.1951,0.8049,-0.0732});
HAnimSegment& HAnimSegment1831 =  HAnimSegment();
HAnimSegment1831.X3DNode::setName(CString("r_metacarpal_4"));
HAnimSegment1831.setDEF(CString("hanim_r_metacarpal_4"));
Transform& Transform1832 =  Transform();
Transform1832.setTranslation(new float[]{-0.1951,0.8049,-0.0732});
Transform& Transform1833 =  Transform();
//Empty Transform
Shape& Shape1834 =  Shape();
Shape1834.setUSE(CString("HAnimJointShape"));
Transform1833.addChild(&Shape1834);

Transform1832.addChild(&Transform1833);

HAnimSegment1831.addChild(&Transform1832);

Shape& Shape1835 =  Shape();
LineSet& LineSet1836 =  LineSet();
LineSet1836.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1837 =  Coordinate();
Coordinate1837.setPoint(new float[]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
LineSet1836.setCoord(Coordinate1837);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1838 =  ColorRGBA();
ColorRGBA1838.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1836.addChild(&ColorRGBA1838);

Shape1835.setGeometry(&LineSet1836);

HAnimSegment1831.addChild(&Shape1835);

HAnimJoint1830.addChildren(&HAnimSegment1831);

HAnimJoint& HAnimJoint1839 =  HAnimJoint();
HAnimJoint1839.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1839.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint1839.setCenter(new float[]{-0.1951,0.7845,-0.0732});
HAnimSegment& HAnimSegment1840 =  HAnimSegment();
HAnimSegment1840.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1840.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform& Transform1841 =  Transform();
Transform1841.setTranslation(new float[]{-0.1951,0.7845,-0.0732});
Transform& Transform1842 =  Transform();
//Empty Transform
Shape& Shape1843 =  Shape();
Shape1843.setUSE(CString("HAnimJointShape"));
Transform1842.addChild(&Shape1843);

Transform1841.addChild(&Transform1842);

HAnimSegment1840.addChild(&Transform1841);

Shape& Shape1844 =  Shape();
LineSet& LineSet1845 =  LineSet();
LineSet1845.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1846 =  Coordinate();
Coordinate1846.setPoint(new float[]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
LineSet1845.setCoord(Coordinate1846);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1847 =  ColorRGBA();
ColorRGBA1847.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1845.addChild(&ColorRGBA1847);

Shape1844.setGeometry(&LineSet1845);

HAnimSegment1840.addChild(&Shape1844);

HAnimJoint1839.addChildren(&HAnimSegment1840);

HAnimJoint& HAnimJoint1848 =  HAnimJoint();
HAnimJoint1848.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1848.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1848.setCenter(new float[]{-0.192,0.7318,-0.0716});
HAnimSegment& HAnimSegment1849 =  HAnimSegment();
HAnimSegment1849.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1849.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform& Transform1850 =  Transform();
Transform1850.setTranslation(new float[]{-0.192,0.7318,-0.0716});
Transform& Transform1851 =  Transform();
//Empty Transform
Shape& Shape1852 =  Shape();
Shape1852.setUSE(CString("HAnimJointShape"));
Transform1851.addChild(&Shape1852);

Transform1850.addChild(&Transform1851);

HAnimSegment1849.addChild(&Transform1850);

Shape& Shape1853 =  Shape();
LineSet& LineSet1854 =  LineSet();
LineSet1854.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1855 =  Coordinate();
Coordinate1855.setPoint(new float[]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
LineSet1854.setCoord(Coordinate1855);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1856 =  ColorRGBA();
ColorRGBA1856.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1854.addChild(&ColorRGBA1856);

Shape1853.setGeometry(&LineSet1854);

HAnimSegment1849.addChild(&Shape1853);

HAnimJoint1848.addChildren(&HAnimSegment1849);

HAnimJoint& HAnimJoint1857 =  HAnimJoint();
HAnimJoint1857.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1857.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint1857.setCenter(new float[]{-0.1908,0.7077,-0.0706});
HAnimJoint1848.addChildren(&HAnimJoint1857);

HAnimJoint1839.addChildren(&HAnimJoint1848);

HAnimJoint1830.addChildren(&HAnimJoint1839);

HAnimJoint1817.addChildren(&HAnimJoint1830);

HAnimJoint& HAnimJoint1858 =  HAnimJoint();
HAnimJoint1858.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint1858.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint1858.setCenter(new float[]{-0.1926,0.8096,-0.0975});
HAnimSegment& HAnimSegment1859 =  HAnimSegment();
HAnimSegment1859.X3DNode::setName(CString("r_metacarpal_5"));
HAnimSegment1859.setDEF(CString("hanim_r_metacarpal_5"));
Transform& Transform1860 =  Transform();
Transform1860.setTranslation(new float[]{-0.1926,0.8096,-0.0975});
Transform& Transform1861 =  Transform();
//Empty Transform
Shape& Shape1862 =  Shape();
Shape1862.setUSE(CString("HAnimJointShape"));
Transform1861.addChild(&Shape1862);

Transform1860.addChild(&Transform1861);

HAnimSegment1859.addChild(&Transform1860);

Shape& Shape1863 =  Shape();
LineSet& LineSet1864 =  LineSet();
LineSet1864.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1865 =  Coordinate();
Coordinate1865.setPoint(new float[]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
LineSet1864.setCoord(Coordinate1865);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1866 =  ColorRGBA();
ColorRGBA1866.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1864.addChild(&ColorRGBA1866);

Shape1863.setGeometry(&LineSet1864);

HAnimSegment1859.addChild(&Shape1863);

HAnimSite& HAnimSite1867 =  HAnimSite();
HAnimSite1867.X3DNode::setName(CString("r_metacarpal_phalanx_5"));
HAnimSite1867.setDEF(CString("hanim_r_metacarpal_phalanx_5"));
HAnimSite1867.setTranslation(new float[]{-0.1929,0.789,-0.1064});
TouchSensor& TouchSensor1868 =  TouchSensor();
TouchSensor1868.setDescription(CString("HAnimSite 80 r_metacarpal_phalanx_5"));
HAnimSite1867.addChild(&TouchSensor1868);

Shape& Shape1869 =  Shape();
Shape1869.setUSE(CString("HAnimSiteShape"));
HAnimSite1867.addChild(&Shape1869);

Billboard& Billboard1870 =  Billboard();
Shape& Shape1871 =  Shape();
Text& Text1872 =  Text();
Text1872.setString(new CString[]{CString("80")}, 1);
CFontStyle& FontStyle1873 =  CFontStyle();
FontStyle1873.setSize(0.035);
Text1872.setFontStyle(&FontStyle1873);

Shape1871.setGeometry(&Text1872);

Billboard1870.addChild(&Shape1871);

HAnimSite1867.addChild(Billboard1870);

HAnimSegment1859.addChild(&HAnimSite1867);

HAnimJoint1858.addChildren(&HAnimSegment1859);

HAnimJoint& HAnimJoint1874 =  HAnimJoint();
HAnimJoint1874.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1874.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint1874.setCenter(new float[]{-0.1926,0.7896,-0.0975});
HAnimSegment& HAnimSegment1875 =  HAnimSegment();
HAnimSegment1875.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1875.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform& Transform1876 =  Transform();
Transform1876.setTranslation(new float[]{-0.1926,0.7896,-0.0975});
Transform& Transform1877 =  Transform();
//Empty Transform
Shape& Shape1878 =  Shape();
Shape1878.setUSE(CString("HAnimJointShape"));
Transform1877.addChild(&Shape1878);

Transform1876.addChild(&Transform1877);

HAnimSegment1875.addChild(&Transform1876);

Shape& Shape1879 =  Shape();
LineSet& LineSet1880 =  LineSet();
LineSet1880.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1881 =  Coordinate();
Coordinate1881.setPoint(new float[]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
LineSet1880.setCoord(Coordinate1881);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1882 =  ColorRGBA();
ColorRGBA1882.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1880.addChild(&ColorRGBA1882);

Shape1879.setGeometry(&LineSet1880);

HAnimSegment1875.addChild(&Shape1879);

HAnimJoint1874.addChildren(&HAnimSegment1875);

HAnimJoint& HAnimJoint1883 =  HAnimJoint();
HAnimJoint1883.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1883.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1883.setCenter(new float[]{-0.1902,0.7483,-0.0963});
HAnimSegment& HAnimSegment1884 =  HAnimSegment();
HAnimSegment1884.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1884.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform& Transform1885 =  Transform();
Transform1885.setTranslation(new float[]{-0.1902,0.7483,-0.0963});
Transform& Transform1886 =  Transform();
//Empty Transform
Shape& Shape1887 =  Shape();
Shape1887.setUSE(CString("HAnimJointShape"));
Transform1886.addChild(&Shape1887);

Transform1885.addChild(&Transform1886);

HAnimSegment1884.addChild(&Transform1885);

Shape& Shape1888 =  Shape();
LineSet& LineSet1889 =  LineSet();
LineSet1889.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1890 =  Coordinate();
Coordinate1890.setPoint(new float[]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
LineSet1889.setCoord(Coordinate1890);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1891 =  ColorRGBA();
ColorRGBA1891.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1889.addChild(&ColorRGBA1891);

Shape1888.setGeometry(&LineSet1889);

HAnimSegment1884.addChild(&Shape1888);

HAnimJoint1883.addChildren(&HAnimSegment1884);

HAnimJoint& HAnimJoint1892 =  HAnimJoint();
HAnimJoint1892.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1892.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint1892.setCenter(new float[]{-0.1908,0.754,-0.096});
HAnimJoint1883.addChildren(&HAnimJoint1892);

HAnimJoint1874.addChildren(&HAnimJoint1883);

HAnimJoint1858.addChildren(&HAnimJoint1874);

HAnimJoint1817.addChildren(&HAnimJoint1858);

HAnimJoint1673.addChildren(&HAnimJoint1817);

HAnimJoint1636.addChildren(&HAnimJoint1673);

HAnimJoint1613.addChildren(&HAnimJoint1636);

HAnimJoint1604.addChildren(&HAnimJoint1613);

HAnimJoint1560.addChildren(&HAnimJoint1604);

HAnimJoint995.addChildren(&HAnimJoint1560);

HAnimJoint986.addChildren(&HAnimJoint995);

HAnimJoint977.addChildren(&HAnimJoint986);

HAnimJoint968.addChildren(&HAnimJoint977);

HAnimJoint952.addChildren(&HAnimJoint968);

HAnimJoint915.addChildren(&HAnimJoint952);

HAnimJoint906.addChildren(&HAnimJoint915);

HAnimJoint897.addChildren(&HAnimJoint906);

HAnimJoint874.addChildren(&HAnimJoint897);

HAnimJoint858.addChildren(&HAnimJoint874);

HAnimJoint849.addChildren(&HAnimJoint858);

HAnimJoint840.addChildren(&HAnimJoint849);

HAnimJoint831.addChildren(&HAnimJoint840);

HAnimJoint801.addChildren(&HAnimJoint831);

HAnimJoint792.addChildren(&HAnimJoint801);

HAnimJoint783.addChildren(&HAnimJoint792);

HAnimJoint753.addChildren(&HAnimJoint783);

HAnimJoint47.addChildren(&HAnimJoint753);

HAnimHumanoid38.setSkeleton(&HAnimJoint47);

HAnimJoint& HAnimJoint1893 =  HAnimJoint();
HAnimJoint1893.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid38.setJoints(&HAnimJoint1893);

HAnimJoint& HAnimJoint1894 =  HAnimJoint();
HAnimJoint1894.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid38.setJoints(&HAnimJoint1894);

HAnimJoint& HAnimJoint1895 =  HAnimJoint();
HAnimJoint1895.setUSE(CString("hanim_l_hip"));
HAnimHumanoid38.setJoints(&HAnimJoint1895);

HAnimJoint& HAnimJoint1896 =  HAnimJoint();
HAnimJoint1896.setUSE(CString("hanim_l_knee"));
HAnimHumanoid38.setJoints(&HAnimJoint1896);

HAnimJoint& HAnimJoint1897 =  HAnimJoint();
HAnimJoint1897.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid38.setJoints(&HAnimJoint1897);

HAnimJoint& HAnimJoint1898 =  HAnimJoint();
HAnimJoint1898.setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1898);

HAnimJoint& HAnimJoint1899 =  HAnimJoint();
HAnimJoint1899.setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1899);

HAnimJoint& HAnimJoint1900 =  HAnimJoint();
HAnimJoint1900.setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1900);

HAnimJoint& HAnimJoint1901 =  HAnimJoint();
HAnimJoint1901.setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1901);

HAnimJoint& HAnimJoint1902 =  HAnimJoint();
HAnimJoint1902.setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1902);

HAnimJoint& HAnimJoint1903 =  HAnimJoint();
HAnimJoint1903.setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1903);

HAnimJoint& HAnimJoint1904 =  HAnimJoint();
HAnimJoint1904.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1904);

HAnimJoint& HAnimJoint1905 =  HAnimJoint();
HAnimJoint1905.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1905);

HAnimJoint& HAnimJoint1906 =  HAnimJoint();
HAnimJoint1906.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1906);

HAnimJoint& HAnimJoint1907 =  HAnimJoint();
HAnimJoint1907.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1907);

HAnimJoint& HAnimJoint1908 =  HAnimJoint();
HAnimJoint1908.setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1908);

HAnimJoint& HAnimJoint1909 =  HAnimJoint();
HAnimJoint1909.setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1909);

HAnimJoint& HAnimJoint1910 =  HAnimJoint();
HAnimJoint1910.setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1910);

HAnimJoint& HAnimJoint1911 =  HAnimJoint();
HAnimJoint1911.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1911);

HAnimJoint& HAnimJoint1912 =  HAnimJoint();
HAnimJoint1912.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1912);

HAnimJoint& HAnimJoint1913 =  HAnimJoint();
HAnimJoint1913.setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid38.setJoints(&HAnimJoint1913);

HAnimJoint& HAnimJoint1914 =  HAnimJoint();
HAnimJoint1914.setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid38.setJoints(&HAnimJoint1914);

HAnimJoint& HAnimJoint1915 =  HAnimJoint();
HAnimJoint1915.setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1915);

HAnimJoint& HAnimJoint1916 =  HAnimJoint();
HAnimJoint1916.setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1916);

HAnimJoint& HAnimJoint1917 =  HAnimJoint();
HAnimJoint1917.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1917);

HAnimJoint& HAnimJoint1918 =  HAnimJoint();
HAnimJoint1918.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1918);

HAnimJoint& HAnimJoint1919 =  HAnimJoint();
HAnimJoint1919.setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1919);

HAnimJoint& HAnimJoint1920 =  HAnimJoint();
HAnimJoint1920.setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1920);

HAnimJoint& HAnimJoint1921 =  HAnimJoint();
HAnimJoint1921.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1921);

HAnimJoint& HAnimJoint1922 =  HAnimJoint();
HAnimJoint1922.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1922);

HAnimJoint& HAnimJoint1923 =  HAnimJoint();
HAnimJoint1923.setUSE(CString("hanim_r_hip"));
HAnimHumanoid38.setJoints(&HAnimJoint1923);

HAnimJoint& HAnimJoint1924 =  HAnimJoint();
HAnimJoint1924.setUSE(CString("hanim_r_knee"));
HAnimHumanoid38.setJoints(&HAnimJoint1924);

HAnimJoint& HAnimJoint1925 =  HAnimJoint();
HAnimJoint1925.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid38.setJoints(&HAnimJoint1925);

HAnimJoint& HAnimJoint1926 =  HAnimJoint();
HAnimJoint1926.setUSE(CString("hanim_r_talocalcaneonavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1926);

HAnimJoint& HAnimJoint1927 =  HAnimJoint();
HAnimJoint1927.setUSE(CString("hanim_r_cuneonavicular_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1927);

HAnimJoint& HAnimJoint1928 =  HAnimJoint();
HAnimJoint1928.setUSE(CString("hanim_r_tarsometatarsal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1928);

HAnimJoint& HAnimJoint1929 =  HAnimJoint();
HAnimJoint1929.setUSE(CString("hanim_r_metatarsophalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1929);

HAnimJoint& HAnimJoint1930 =  HAnimJoint();
HAnimJoint1930.setUSE(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1930);

HAnimJoint& HAnimJoint1931 =  HAnimJoint();
HAnimJoint1931.setUSE(CString("hanim_r_cuneonavicular_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1931);

HAnimJoint& HAnimJoint1932 =  HAnimJoint();
HAnimJoint1932.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1932);

HAnimJoint& HAnimJoint1933 =  HAnimJoint();
HAnimJoint1933.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1933);

HAnimJoint& HAnimJoint1934 =  HAnimJoint();
HAnimJoint1934.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1934);

HAnimJoint& HAnimJoint1935 =  HAnimJoint();
HAnimJoint1935.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1935);

HAnimJoint& HAnimJoint1936 =  HAnimJoint();
HAnimJoint1936.setUSE(CString("hanim_r_cuneonavicular_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1936);

HAnimJoint& HAnimJoint1937 =  HAnimJoint();
HAnimJoint1937.setUSE(CString("hanim_r_tarsometatarsal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1937);

HAnimJoint& HAnimJoint1938 =  HAnimJoint();
HAnimJoint1938.setUSE(CString("hanim_r_metatarsophalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1938);

HAnimJoint& HAnimJoint1939 =  HAnimJoint();
HAnimJoint1939.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1939);

HAnimJoint& HAnimJoint1940 =  HAnimJoint();
HAnimJoint1940.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1940);

HAnimJoint& HAnimJoint1941 =  HAnimJoint();
HAnimJoint1941.setUSE(CString("hanim_r_calcaneocuboid"));
HAnimHumanoid38.setJoints(&HAnimJoint1941);

HAnimJoint& HAnimJoint1942 =  HAnimJoint();
HAnimJoint1942.setUSE(CString("hanim_r_transversetarsal"));
HAnimHumanoid38.setJoints(&HAnimJoint1942);

HAnimJoint& HAnimJoint1943 =  HAnimJoint();
HAnimJoint1943.setUSE(CString("hanim_r_tarsometatarsal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1943);

HAnimJoint& HAnimJoint1944 =  HAnimJoint();
HAnimJoint1944.setUSE(CString("hanim_r_metatarsophalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1944);

HAnimJoint& HAnimJoint1945 =  HAnimJoint();
HAnimJoint1945.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1945);

HAnimJoint& HAnimJoint1946 =  HAnimJoint();
HAnimJoint1946.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint1946);

HAnimJoint& HAnimJoint1947 =  HAnimJoint();
HAnimJoint1947.setUSE(CString("hanim_r_tarsometatarsal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1947);

HAnimJoint& HAnimJoint1948 =  HAnimJoint();
HAnimJoint1948.setUSE(CString("hanim_r_metatarsophalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1948);

HAnimJoint& HAnimJoint1949 =  HAnimJoint();
HAnimJoint1949.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1949);

HAnimJoint& HAnimJoint1950 =  HAnimJoint();
HAnimJoint1950.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint1950);

HAnimJoint& HAnimJoint1951 =  HAnimJoint();
HAnimJoint1951.setUSE(CString("hanim_vl5"));
HAnimHumanoid38.setJoints(&HAnimJoint1951);

HAnimJoint& HAnimJoint1952 =  HAnimJoint();
HAnimJoint1952.setUSE(CString("hanim_vl4"));
HAnimHumanoid38.setJoints(&HAnimJoint1952);

HAnimJoint& HAnimJoint1953 =  HAnimJoint();
HAnimJoint1953.setUSE(CString("hanim_vl3"));
HAnimHumanoid38.setJoints(&HAnimJoint1953);

HAnimJoint& HAnimJoint1954 =  HAnimJoint();
HAnimJoint1954.setUSE(CString("hanim_vl2"));
HAnimHumanoid38.setJoints(&HAnimJoint1954);

HAnimJoint& HAnimJoint1955 =  HAnimJoint();
HAnimJoint1955.setUSE(CString("hanim_vl1"));
HAnimHumanoid38.setJoints(&HAnimJoint1955);

HAnimJoint& HAnimJoint1956 =  HAnimJoint();
HAnimJoint1956.setUSE(CString("hanim_vt12"));
HAnimHumanoid38.setJoints(&HAnimJoint1956);

HAnimJoint& HAnimJoint1957 =  HAnimJoint();
HAnimJoint1957.setUSE(CString("hanim_vt11"));
HAnimHumanoid38.setJoints(&HAnimJoint1957);

HAnimJoint& HAnimJoint1958 =  HAnimJoint();
HAnimJoint1958.setUSE(CString("hanim_vt10"));
HAnimHumanoid38.setJoints(&HAnimJoint1958);

HAnimJoint& HAnimJoint1959 =  HAnimJoint();
HAnimJoint1959.setUSE(CString("hanim_vt9"));
HAnimHumanoid38.setJoints(&HAnimJoint1959);

HAnimJoint& HAnimJoint1960 =  HAnimJoint();
HAnimJoint1960.setUSE(CString("hanim_vt8"));
HAnimHumanoid38.setJoints(&HAnimJoint1960);

HAnimJoint& HAnimJoint1961 =  HAnimJoint();
HAnimJoint1961.setUSE(CString("hanim_vt7"));
HAnimHumanoid38.setJoints(&HAnimJoint1961);

HAnimJoint& HAnimJoint1962 =  HAnimJoint();
HAnimJoint1962.setUSE(CString("hanim_vt6"));
HAnimHumanoid38.setJoints(&HAnimJoint1962);

HAnimJoint& HAnimJoint1963 =  HAnimJoint();
HAnimJoint1963.setUSE(CString("hanim_vt5"));
HAnimHumanoid38.setJoints(&HAnimJoint1963);

HAnimJoint& HAnimJoint1964 =  HAnimJoint();
HAnimJoint1964.setUSE(CString("hanim_vt4"));
HAnimHumanoid38.setJoints(&HAnimJoint1964);

HAnimJoint& HAnimJoint1965 =  HAnimJoint();
HAnimJoint1965.setUSE(CString("hanim_vt3"));
HAnimHumanoid38.setJoints(&HAnimJoint1965);

HAnimJoint& HAnimJoint1966 =  HAnimJoint();
HAnimJoint1966.setUSE(CString("hanim_vt2"));
HAnimHumanoid38.setJoints(&HAnimJoint1966);

HAnimJoint& HAnimJoint1967 =  HAnimJoint();
HAnimJoint1967.setUSE(CString("hanim_vt1"));
HAnimHumanoid38.setJoints(&HAnimJoint1967);

HAnimJoint& HAnimJoint1968 =  HAnimJoint();
HAnimJoint1968.setUSE(CString("hanim_vc7"));
HAnimHumanoid38.setJoints(&HAnimJoint1968);

HAnimJoint& HAnimJoint1969 =  HAnimJoint();
HAnimJoint1969.setUSE(CString("hanim_vc6"));
HAnimHumanoid38.setJoints(&HAnimJoint1969);

HAnimJoint& HAnimJoint1970 =  HAnimJoint();
HAnimJoint1970.setUSE(CString("hanim_vc5"));
HAnimHumanoid38.setJoints(&HAnimJoint1970);

HAnimJoint& HAnimJoint1971 =  HAnimJoint();
HAnimJoint1971.setUSE(CString("hanim_vc4"));
HAnimHumanoid38.setJoints(&HAnimJoint1971);

HAnimJoint& HAnimJoint1972 =  HAnimJoint();
HAnimJoint1972.setUSE(CString("hanim_vc3"));
HAnimHumanoid38.setJoints(&HAnimJoint1972);

HAnimJoint& HAnimJoint1973 =  HAnimJoint();
HAnimJoint1973.setUSE(CString("hanim_vc2"));
HAnimHumanoid38.setJoints(&HAnimJoint1973);

HAnimJoint& HAnimJoint1974 =  HAnimJoint();
HAnimJoint1974.setUSE(CString("hanim_vc1"));
HAnimHumanoid38.setJoints(&HAnimJoint1974);

HAnimJoint& HAnimJoint1975 =  HAnimJoint();
HAnimJoint1975.setUSE(CString("hanim_skullbase"));
HAnimHumanoid38.setJoints(&HAnimJoint1975);

HAnimJoint& HAnimJoint1976 =  HAnimJoint();
HAnimJoint1976.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1976);

HAnimJoint& HAnimJoint1977 =  HAnimJoint();
HAnimJoint1977.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1977);

HAnimJoint& HAnimJoint1978 =  HAnimJoint();
HAnimJoint1978.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1978);

HAnimJoint& HAnimJoint1979 =  HAnimJoint();
HAnimJoint1979.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1979);

HAnimJoint& HAnimJoint1980 =  HAnimJoint();
HAnimJoint1980.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1980);

HAnimJoint& HAnimJoint1981 =  HAnimJoint();
HAnimJoint1981.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid38.setJoints(&HAnimJoint1981);

HAnimJoint& HAnimJoint1982 =  HAnimJoint();
HAnimJoint1982.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid38.setJoints(&HAnimJoint1982);

HAnimJoint& HAnimJoint1983 =  HAnimJoint();
HAnimJoint1983.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1983);

HAnimJoint& HAnimJoint1984 =  HAnimJoint();
HAnimJoint1984.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint1984);

HAnimJoint& HAnimJoint1985 =  HAnimJoint();
HAnimJoint1985.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid38.setJoints(&HAnimJoint1985);

HAnimJoint& HAnimJoint1986 =  HAnimJoint();
HAnimJoint1986.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid38.setJoints(&HAnimJoint1986);

HAnimJoint& HAnimJoint1987 =  HAnimJoint();
HAnimJoint1987.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid38.setJoints(&HAnimJoint1987);

HAnimJoint& HAnimJoint1988 =  HAnimJoint();
HAnimJoint1988.setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1988);

HAnimJoint& HAnimJoint1989 =  HAnimJoint();
HAnimJoint1989.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1989);

HAnimJoint& HAnimJoint1990 =  HAnimJoint();
HAnimJoint1990.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1990);

HAnimJoint& HAnimJoint1991 =  HAnimJoint();
HAnimJoint1991.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint1991);

HAnimJoint& HAnimJoint1992 =  HAnimJoint();
HAnimJoint1992.setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1992);

HAnimJoint& HAnimJoint1993 =  HAnimJoint();
HAnimJoint1993.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1993);

HAnimJoint& HAnimJoint1994 =  HAnimJoint();
HAnimJoint1994.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1994);

HAnimJoint& HAnimJoint1995 =  HAnimJoint();
HAnimJoint1995.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1995);

HAnimJoint& HAnimJoint1996 =  HAnimJoint();
HAnimJoint1996.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint1996);

HAnimJoint& HAnimJoint1997 =  HAnimJoint();
HAnimJoint1997.setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1997);

HAnimJoint& HAnimJoint1998 =  HAnimJoint();
HAnimJoint1998.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1998);

HAnimJoint& HAnimJoint1999 =  HAnimJoint();
HAnimJoint1999.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint1999);

HAnimJoint& HAnimJoint2000 =  HAnimJoint();
HAnimJoint2000.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint2000);

HAnimJoint& HAnimJoint2001 =  HAnimJoint();
HAnimJoint2001.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint2001);

HAnimJoint& HAnimJoint2002 =  HAnimJoint();
HAnimJoint2002.setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid38.setJoints(&HAnimJoint2002);

HAnimJoint& HAnimJoint2003 =  HAnimJoint();
HAnimJoint2003.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint2003);

HAnimJoint& HAnimJoint2004 =  HAnimJoint();
HAnimJoint2004.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint2004);

HAnimJoint& HAnimJoint2005 =  HAnimJoint();
HAnimJoint2005.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint2005);

HAnimJoint& HAnimJoint2006 =  HAnimJoint();
HAnimJoint2006.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint2006);

HAnimJoint& HAnimJoint2007 =  HAnimJoint();
HAnimJoint2007.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint2007);

HAnimJoint& HAnimJoint2008 =  HAnimJoint();
HAnimJoint2008.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint2008);

HAnimJoint& HAnimJoint2009 =  HAnimJoint();
HAnimJoint2009.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint2009);

HAnimJoint& HAnimJoint2010 =  HAnimJoint();
HAnimJoint2010.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint2010);

HAnimJoint& HAnimJoint2011 =  HAnimJoint();
HAnimJoint2011.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint2011);

HAnimJoint& HAnimJoint2012 =  HAnimJoint();
HAnimJoint2012.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid38.setJoints(&HAnimJoint2012);

HAnimJoint& HAnimJoint2013 =  HAnimJoint();
HAnimJoint2013.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid38.setJoints(&HAnimJoint2013);

HAnimJoint& HAnimJoint2014 =  HAnimJoint();
HAnimJoint2014.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid38.setJoints(&HAnimJoint2014);

HAnimJoint& HAnimJoint2015 =  HAnimJoint();
HAnimJoint2015.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid38.setJoints(&HAnimJoint2015);

HAnimJoint& HAnimJoint2016 =  HAnimJoint();
HAnimJoint2016.setUSE(CString("hanim_r_midcarpal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint2016);

HAnimJoint& HAnimJoint2017 =  HAnimJoint();
HAnimJoint2017.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint2017);

HAnimJoint& HAnimJoint2018 =  HAnimJoint();
HAnimJoint2018.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint2018);

HAnimJoint& HAnimJoint2019 =  HAnimJoint();
HAnimJoint2019.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid38.setJoints(&HAnimJoint2019);

HAnimJoint& HAnimJoint2020 =  HAnimJoint();
HAnimJoint2020.setUSE(CString("hanim_r_midcarpal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint2020);

HAnimJoint& HAnimJoint2021 =  HAnimJoint();
HAnimJoint2021.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint2021);

HAnimJoint& HAnimJoint2022 =  HAnimJoint();
HAnimJoint2022.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint2022);

HAnimJoint& HAnimJoint2023 =  HAnimJoint();
HAnimJoint2023.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint2023);

HAnimJoint& HAnimJoint2024 =  HAnimJoint();
HAnimJoint2024.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid38.setJoints(&HAnimJoint2024);

HAnimJoint& HAnimJoint2025 =  HAnimJoint();
HAnimJoint2025.setUSE(CString("hanim_r_midcarpal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint2025);

HAnimJoint& HAnimJoint2026 =  HAnimJoint();
HAnimJoint2026.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint2026);

HAnimJoint& HAnimJoint2027 =  HAnimJoint();
HAnimJoint2027.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint2027);

HAnimJoint& HAnimJoint2028 =  HAnimJoint();
HAnimJoint2028.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint2028);

HAnimJoint& HAnimJoint2029 =  HAnimJoint();
HAnimJoint2029.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid38.setJoints(&HAnimJoint2029);

HAnimJoint& HAnimJoint2030 =  HAnimJoint();
HAnimJoint2030.setUSE(CString("hanim_r_midcarpal_4_5"));
HAnimHumanoid38.setJoints(&HAnimJoint2030);

HAnimJoint& HAnimJoint2031 =  HAnimJoint();
HAnimJoint2031.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint2031);

HAnimJoint& HAnimJoint2032 =  HAnimJoint();
HAnimJoint2032.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint2032);

HAnimJoint& HAnimJoint2033 =  HAnimJoint();
HAnimJoint2033.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint2033);

HAnimJoint& HAnimJoint2034 =  HAnimJoint();
HAnimJoint2034.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid38.setJoints(&HAnimJoint2034);

HAnimJoint& HAnimJoint2035 =  HAnimJoint();
HAnimJoint2035.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint2035);

HAnimJoint& HAnimJoint2036 =  HAnimJoint();
HAnimJoint2036.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint2036);

HAnimJoint& HAnimJoint2037 =  HAnimJoint();
HAnimJoint2037.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint2037);

HAnimJoint& HAnimJoint2038 =  HAnimJoint();
HAnimJoint2038.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid38.setJoints(&HAnimJoint2038);

HAnimSegment& HAnimSegment2039 =  HAnimSegment();
HAnimSegment2039.setUSE(CString("hanim_sacrum"));
HAnimHumanoid38.setSegments(&HAnimSegment2039);

HAnimSegment& HAnimSegment2040 =  HAnimSegment();
HAnimSegment2040.setUSE(CString("hanim_pelvis"));
HAnimHumanoid38.setSegments(&HAnimSegment2040);

HAnimSegment& HAnimSegment2041 =  HAnimSegment();
HAnimSegment2041.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid38.setSegments(&HAnimSegment2041);

HAnimSegment& HAnimSegment2042 =  HAnimSegment();
HAnimSegment2042.setUSE(CString("hanim_l_calf"));
HAnimHumanoid38.setSegments(&HAnimSegment2042);

HAnimSegment& HAnimSegment2043 =  HAnimSegment();
HAnimSegment2043.setUSE(CString("hanim_l_talus"));
HAnimHumanoid38.setSegments(&HAnimSegment2043);

HAnimSegment& HAnimSegment2044 =  HAnimSegment();
HAnimSegment2044.setUSE(CString("hanim_l_navicular"));
HAnimHumanoid38.setSegments(&HAnimSegment2044);

HAnimSegment& HAnimSegment2045 =  HAnimSegment();
HAnimSegment2045.setUSE(CString("hanim_l_cuneiform_1"));
HAnimHumanoid38.setSegments(&HAnimSegment2045);

HAnimSegment& HAnimSegment2046 =  HAnimSegment();
HAnimSegment2046.setUSE(CString("hanim_l_metatarsal_1"));
HAnimHumanoid38.setSegments(&HAnimSegment2046);

HAnimSegment& HAnimSegment2047 =  HAnimSegment();
HAnimSegment2047.setUSE(CString("hanim_l_tarsal_proximal_phalanx_1"));
HAnimHumanoid38.setSegments(&HAnimSegment2047);

HAnimSegment& HAnimSegment2048 =  HAnimSegment();
HAnimSegment2048.setUSE(CString("hanim_l_cuneiform_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2048);

HAnimSegment& HAnimSegment2049 =  HAnimSegment();
HAnimSegment2049.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2049);

HAnimSegment& HAnimSegment2050 =  HAnimSegment();
HAnimSegment2050.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2050);

HAnimSegment& HAnimSegment2051 =  HAnimSegment();
HAnimSegment2051.setUSE(CString("hanim_l_tarsal_middle_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2051);

HAnimSegment& HAnimSegment2052 =  HAnimSegment();
HAnimSegment2052.setUSE(CString("hanim_l_cuneiform_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2052);

HAnimSegment& HAnimSegment2053 =  HAnimSegment();
HAnimSegment2053.setUSE(CString("hanim_l_metatarsal_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2053);

HAnimSegment& HAnimSegment2054 =  HAnimSegment();
HAnimSegment2054.setUSE(CString("hanim_l_tarsal_proximal_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2054);

HAnimSegment& HAnimSegment2055 =  HAnimSegment();
HAnimSegment2055.setUSE(CString("hanim_l_tarsal_middle_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2055);

HAnimSegment& HAnimSegment2056 =  HAnimSegment();
HAnimSegment2056.setUSE(CString("hanim_l_calcaneus"));
HAnimHumanoid38.setSegments(&HAnimSegment2056);

HAnimSegment& HAnimSegment2057 =  HAnimSegment();
HAnimSegment2057.setUSE(CString("hanim_l_cuboid"));
HAnimHumanoid38.setSegments(&HAnimSegment2057);

HAnimSegment& HAnimSegment2058 =  HAnimSegment();
HAnimSegment2058.setUSE(CString("hanim_l_metatarsal_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2058);

HAnimSegment& HAnimSegment2059 =  HAnimSegment();
HAnimSegment2059.setUSE(CString("hanim_l_tarsal_proximal_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2059);

HAnimSegment& HAnimSegment2060 =  HAnimSegment();
HAnimSegment2060.setUSE(CString("hanim_l_tarsal_middle_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2060);

HAnimSegment& HAnimSegment2061 =  HAnimSegment();
HAnimSegment2061.setUSE(CString("hanim_l_metatarsal_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2061);

HAnimSegment& HAnimSegment2062 =  HAnimSegment();
HAnimSegment2062.setUSE(CString("hanim_l_tarsal_proximal_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2062);

HAnimSegment& HAnimSegment2063 =  HAnimSegment();
HAnimSegment2063.setUSE(CString("hanim_l_tarsal_middle_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2063);

HAnimSegment& HAnimSegment2064 =  HAnimSegment();
HAnimSegment2064.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid38.setSegments(&HAnimSegment2064);

HAnimSegment& HAnimSegment2065 =  HAnimSegment();
HAnimSegment2065.setUSE(CString("hanim_r_calf"));
HAnimHumanoid38.setSegments(&HAnimSegment2065);

HAnimSegment& HAnimSegment2066 =  HAnimSegment();
HAnimSegment2066.setUSE(CString("hanim_r_talus"));
HAnimHumanoid38.setSegments(&HAnimSegment2066);

HAnimSegment& HAnimSegment2067 =  HAnimSegment();
HAnimSegment2067.setUSE(CString("hanim_r_navicular"));
HAnimHumanoid38.setSegments(&HAnimSegment2067);

HAnimSegment& HAnimSegment2068 =  HAnimSegment();
HAnimSegment2068.setUSE(CString("hanim_r_cuneiform_1"));
HAnimHumanoid38.setSegments(&HAnimSegment2068);

HAnimSegment& HAnimSegment2069 =  HAnimSegment();
HAnimSegment2069.setUSE(CString("hanim_r_metatarsal_1"));
HAnimHumanoid38.setSegments(&HAnimSegment2069);

HAnimSegment& HAnimSegment2070 =  HAnimSegment();
HAnimSegment2070.setUSE(CString("hanim_r_tarsal_proximal_phalanx_1"));
HAnimHumanoid38.setSegments(&HAnimSegment2070);

HAnimSegment& HAnimSegment2071 =  HAnimSegment();
HAnimSegment2071.setUSE(CString("hanim_r_cuneiform_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2071);

HAnimSegment& HAnimSegment2072 =  HAnimSegment();
HAnimSegment2072.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2072);

HAnimSegment& HAnimSegment2073 =  HAnimSegment();
HAnimSegment2073.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2073);

HAnimSegment& HAnimSegment2074 =  HAnimSegment();
HAnimSegment2074.setUSE(CString("hanim_r_tarsal_middle_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2074);

HAnimSegment& HAnimSegment2075 =  HAnimSegment();
HAnimSegment2075.setUSE(CString("hanim_r_cuneiform_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2075);

HAnimSegment& HAnimSegment2076 =  HAnimSegment();
HAnimSegment2076.setUSE(CString("hanim_r_metatarsal_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2076);

HAnimSegment& HAnimSegment2077 =  HAnimSegment();
HAnimSegment2077.setUSE(CString("hanim_r_tarsal_proximal_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2077);

HAnimSegment& HAnimSegment2078 =  HAnimSegment();
HAnimSegment2078.setUSE(CString("hanim_r_tarsal_middle_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2078);

HAnimSegment& HAnimSegment2079 =  HAnimSegment();
HAnimSegment2079.setUSE(CString("hanim_r_calcaneus"));
HAnimHumanoid38.setSegments(&HAnimSegment2079);

HAnimSegment& HAnimSegment2080 =  HAnimSegment();
HAnimSegment2080.setUSE(CString("hanim_r_cuboid"));
HAnimHumanoid38.setSegments(&HAnimSegment2080);

HAnimSegment& HAnimSegment2081 =  HAnimSegment();
HAnimSegment2081.setUSE(CString("hanim_r_metatarsal_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2081);

HAnimSegment& HAnimSegment2082 =  HAnimSegment();
HAnimSegment2082.setUSE(CString("hanim_r_tarsal_proximal_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2082);

HAnimSegment& HAnimSegment2083 =  HAnimSegment();
HAnimSegment2083.setUSE(CString("hanim_r_tarsal_middle_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2083);

HAnimSegment& HAnimSegment2084 =  HAnimSegment();
HAnimSegment2084.setUSE(CString("hanim_r_metatarsal_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2084);

HAnimSegment& HAnimSegment2085 =  HAnimSegment();
HAnimSegment2085.setUSE(CString("hanim_r_tarsal_proximal_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2085);

HAnimSegment& HAnimSegment2086 =  HAnimSegment();
HAnimSegment2086.setUSE(CString("hanim_r_tarsal_middle_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2086);

HAnimSegment& HAnimSegment2087 =  HAnimSegment();
HAnimSegment2087.setUSE(CString("hanim_l5"));
HAnimHumanoid38.setSegments(&HAnimSegment2087);

HAnimSegment& HAnimSegment2088 =  HAnimSegment();
HAnimSegment2088.setUSE(CString("hanim_l4"));
HAnimHumanoid38.setSegments(&HAnimSegment2088);

HAnimSegment& HAnimSegment2089 =  HAnimSegment();
HAnimSegment2089.setUSE(CString("hanim_l3"));
HAnimHumanoid38.setSegments(&HAnimSegment2089);

HAnimSegment& HAnimSegment2090 =  HAnimSegment();
HAnimSegment2090.setUSE(CString("hanim_l2"));
HAnimHumanoid38.setSegments(&HAnimSegment2090);

HAnimSegment& HAnimSegment2091 =  HAnimSegment();
HAnimSegment2091.setUSE(CString("hanim_l1"));
HAnimHumanoid38.setSegments(&HAnimSegment2091);

HAnimSegment& HAnimSegment2092 =  HAnimSegment();
HAnimSegment2092.setUSE(CString("hanim_t12"));
HAnimHumanoid38.setSegments(&HAnimSegment2092);

HAnimSegment& HAnimSegment2093 =  HAnimSegment();
HAnimSegment2093.setUSE(CString("hanim_t11"));
HAnimHumanoid38.setSegments(&HAnimSegment2093);

HAnimSegment& HAnimSegment2094 =  HAnimSegment();
HAnimSegment2094.setUSE(CString("hanim_t10"));
HAnimHumanoid38.setSegments(&HAnimSegment2094);

HAnimSegment& HAnimSegment2095 =  HAnimSegment();
HAnimSegment2095.setUSE(CString("hanim_t9"));
HAnimHumanoid38.setSegments(&HAnimSegment2095);

HAnimSegment& HAnimSegment2096 =  HAnimSegment();
HAnimSegment2096.setUSE(CString("hanim_t8"));
HAnimHumanoid38.setSegments(&HAnimSegment2096);

HAnimSegment& HAnimSegment2097 =  HAnimSegment();
HAnimSegment2097.setUSE(CString("hanim_t7"));
HAnimHumanoid38.setSegments(&HAnimSegment2097);

HAnimSegment& HAnimSegment2098 =  HAnimSegment();
HAnimSegment2098.setUSE(CString("hanim_t6"));
HAnimHumanoid38.setSegments(&HAnimSegment2098);

HAnimSegment& HAnimSegment2099 =  HAnimSegment();
HAnimSegment2099.setUSE(CString("hanim_t5"));
HAnimHumanoid38.setSegments(&HAnimSegment2099);

HAnimSegment& HAnimSegment2100 =  HAnimSegment();
HAnimSegment2100.setUSE(CString("hanim_t4"));
HAnimHumanoid38.setSegments(&HAnimSegment2100);

HAnimSegment& HAnimSegment2101 =  HAnimSegment();
HAnimSegment2101.setUSE(CString("hanim_t3"));
HAnimHumanoid38.setSegments(&HAnimSegment2101);

HAnimSegment& HAnimSegment2102 =  HAnimSegment();
HAnimSegment2102.setUSE(CString("hanim_t2"));
HAnimHumanoid38.setSegments(&HAnimSegment2102);

HAnimSegment& HAnimSegment2103 =  HAnimSegment();
HAnimSegment2103.setUSE(CString("hanim_t1"));
HAnimHumanoid38.setSegments(&HAnimSegment2103);

HAnimSegment& HAnimSegment2104 =  HAnimSegment();
HAnimSegment2104.setUSE(CString("hanim_c7"));
HAnimHumanoid38.setSegments(&HAnimSegment2104);

HAnimSegment& HAnimSegment2105 =  HAnimSegment();
HAnimSegment2105.setUSE(CString("hanim_c6"));
HAnimHumanoid38.setSegments(&HAnimSegment2105);

HAnimSegment& HAnimSegment2106 =  HAnimSegment();
HAnimSegment2106.setUSE(CString("hanim_c5"));
HAnimHumanoid38.setSegments(&HAnimSegment2106);

HAnimSegment& HAnimSegment2107 =  HAnimSegment();
HAnimSegment2107.setUSE(CString("hanim_c4"));
HAnimHumanoid38.setSegments(&HAnimSegment2107);

HAnimSegment& HAnimSegment2108 =  HAnimSegment();
HAnimSegment2108.setUSE(CString("hanim_c3"));
HAnimHumanoid38.setSegments(&HAnimSegment2108);

HAnimSegment& HAnimSegment2109 =  HAnimSegment();
HAnimSegment2109.setUSE(CString("hanim_c2"));
HAnimHumanoid38.setSegments(&HAnimSegment2109);

HAnimSegment& HAnimSegment2110 =  HAnimSegment();
HAnimSegment2110.setUSE(CString("hanim_c1"));
HAnimHumanoid38.setSegments(&HAnimSegment2110);

HAnimSegment& HAnimSegment2111 =  HAnimSegment();
HAnimSegment2111.setUSE(CString("hanim_skull"));
HAnimHumanoid38.setSegments(&HAnimSegment2111);

HAnimSegment& HAnimSegment2112 =  HAnimSegment();
HAnimSegment2112.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid38.setSegments(&HAnimSegment2112);

HAnimSegment& HAnimSegment2113 =  HAnimSegment();
HAnimSegment2113.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid38.setSegments(&HAnimSegment2113);

HAnimSegment& HAnimSegment2114 =  HAnimSegment();
HAnimSegment2114.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid38.setSegments(&HAnimSegment2114);

HAnimSegment& HAnimSegment2115 =  HAnimSegment();
HAnimSegment2115.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid38.setSegments(&HAnimSegment2115);

HAnimSegment& HAnimSegment2116 =  HAnimSegment();
HAnimSegment2116.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid38.setSegments(&HAnimSegment2116);

HAnimSegment& HAnimSegment2117 =  HAnimSegment();
HAnimSegment2117.setUSE(CString("hanim_l_trapezium"));
HAnimHumanoid38.setSegments(&HAnimSegment2117);

HAnimSegment& HAnimSegment2118 =  HAnimSegment();
HAnimSegment2118.setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid38.setSegments(&HAnimSegment2118);

HAnimSegment& HAnimSegment2119 =  HAnimSegment();
HAnimSegment2119.setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid38.setSegments(&HAnimSegment2119);

HAnimSegment& HAnimSegment2120 =  HAnimSegment();
HAnimSegment2120.setUSE(CString("hanim_l_trapezoid"));
HAnimHumanoid38.setSegments(&HAnimSegment2120);

HAnimSegment& HAnimSegment2121 =  HAnimSegment();
HAnimSegment2121.setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2121);

HAnimSegment& HAnimSegment2122 =  HAnimSegment();
HAnimSegment2122.setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2122);

HAnimSegment& HAnimSegment2123 =  HAnimSegment();
HAnimSegment2123.setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2123);

HAnimSegment& HAnimSegment2124 =  HAnimSegment();
HAnimSegment2124.setUSE(CString("hanim_l_capitate"));
HAnimHumanoid38.setSegments(&HAnimSegment2124);

HAnimSegment& HAnimSegment2125 =  HAnimSegment();
HAnimSegment2125.setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2125);

HAnimSegment& HAnimSegment2126 =  HAnimSegment();
HAnimSegment2126.setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2126);

HAnimSegment& HAnimSegment2127 =  HAnimSegment();
HAnimSegment2127.setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2127);

HAnimSegment& HAnimSegment2128 =  HAnimSegment();
HAnimSegment2128.setUSE(CString("hanim_l_hamate"));
HAnimHumanoid38.setSegments(&HAnimSegment2128);

HAnimSegment& HAnimSegment2129 =  HAnimSegment();
HAnimSegment2129.setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2129);

HAnimSegment& HAnimSegment2130 =  HAnimSegment();
HAnimSegment2130.setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2130);

HAnimSegment& HAnimSegment2131 =  HAnimSegment();
HAnimSegment2131.setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2131);

HAnimSegment& HAnimSegment2132 =  HAnimSegment();
HAnimSegment2132.setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2132);

HAnimSegment& HAnimSegment2133 =  HAnimSegment();
HAnimSegment2133.setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2133);

HAnimSegment& HAnimSegment2134 =  HAnimSegment();
HAnimSegment2134.setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2134);

HAnimSegment& HAnimSegment2135 =  HAnimSegment();
HAnimSegment2135.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid38.setSegments(&HAnimSegment2135);

HAnimSegment& HAnimSegment2136 =  HAnimSegment();
HAnimSegment2136.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid38.setSegments(&HAnimSegment2136);

HAnimSegment& HAnimSegment2137 =  HAnimSegment();
HAnimSegment2137.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid38.setSegments(&HAnimSegment2137);

HAnimSegment& HAnimSegment2138 =  HAnimSegment();
HAnimSegment2138.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid38.setSegments(&HAnimSegment2138);

HAnimSegment& HAnimSegment2139 =  HAnimSegment();
HAnimSegment2139.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid38.setSegments(&HAnimSegment2139);

HAnimSegment& HAnimSegment2140 =  HAnimSegment();
HAnimSegment2140.setUSE(CString("hanim_r_trapezium"));
HAnimHumanoid38.setSegments(&HAnimSegment2140);

HAnimSegment& HAnimSegment2141 =  HAnimSegment();
HAnimSegment2141.setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid38.setSegments(&HAnimSegment2141);

HAnimSegment& HAnimSegment2142 =  HAnimSegment();
HAnimSegment2142.setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid38.setSegments(&HAnimSegment2142);

HAnimSegment& HAnimSegment2143 =  HAnimSegment();
HAnimSegment2143.setUSE(CString("hanim_r_trapezoid"));
HAnimHumanoid38.setSegments(&HAnimSegment2143);

HAnimSegment& HAnimSegment2144 =  HAnimSegment();
HAnimSegment2144.setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2144);

HAnimSegment& HAnimSegment2145 =  HAnimSegment();
HAnimSegment2145.setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2145);

HAnimSegment& HAnimSegment2146 =  HAnimSegment();
HAnimSegment2146.setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid38.setSegments(&HAnimSegment2146);

HAnimSegment& HAnimSegment2147 =  HAnimSegment();
HAnimSegment2147.setUSE(CString("hanim_r_capitate"));
HAnimHumanoid38.setSegments(&HAnimSegment2147);

HAnimSegment& HAnimSegment2148 =  HAnimSegment();
HAnimSegment2148.setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2148);

HAnimSegment& HAnimSegment2149 =  HAnimSegment();
HAnimSegment2149.setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2149);

HAnimSegment& HAnimSegment2150 =  HAnimSegment();
HAnimSegment2150.setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid38.setSegments(&HAnimSegment2150);

HAnimSegment& HAnimSegment2151 =  HAnimSegment();
HAnimSegment2151.setUSE(CString("hanim_r_hamate"));
HAnimHumanoid38.setSegments(&HAnimSegment2151);

HAnimSegment& HAnimSegment2152 =  HAnimSegment();
HAnimSegment2152.setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2152);

HAnimSegment& HAnimSegment2153 =  HAnimSegment();
HAnimSegment2153.setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2153);

HAnimSegment& HAnimSegment2154 =  HAnimSegment();
HAnimSegment2154.setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid38.setSegments(&HAnimSegment2154);

HAnimSegment& HAnimSegment2155 =  HAnimSegment();
HAnimSegment2155.setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2155);

HAnimSegment& HAnimSegment2156 =  HAnimSegment();
HAnimSegment2156.setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2156);

HAnimSegment& HAnimSegment2157 =  HAnimSegment();
HAnimSegment2157.setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid38.setSegments(&HAnimSegment2157);

HAnimSite& HAnimSite2158 =  HAnimSite();
HAnimSite2158.setUSE(CString("hanim_buttocks_standing_wall_contact_point"));
HAnimHumanoid38.setSites(&HAnimSite2158);

HAnimSite& HAnimSite2159 =  HAnimSite();
HAnimSite2159.setUSE(CString("hanim_crotch"));
HAnimHumanoid38.setSites(&HAnimSite2159);

HAnimSite& HAnimSite2160 =  HAnimSite();
HAnimSite2160.setUSE(CString("hanim_l_asis"));
HAnimHumanoid38.setSites(&HAnimSite2160);

HAnimSite& HAnimSite2161 =  HAnimSite();
HAnimSite2161.setUSE(CString("hanim_l_iliocristale"));
HAnimHumanoid38.setSites(&HAnimSite2161);

HAnimSite& HAnimSite2162 =  HAnimSite();
HAnimSite2162.setUSE(CString("hanim_l_psis"));
HAnimHumanoid38.setSites(&HAnimSite2162);

HAnimSite& HAnimSite2163 =  HAnimSite();
HAnimSite2163.setUSE(CString("hanim_l_trochanterion"));
HAnimHumanoid38.setSites(&HAnimSite2163);

HAnimSite& HAnimSite2164 =  HAnimSite();
HAnimSite2164.setUSE(CString("hanim_r_asis"));
HAnimHumanoid38.setSites(&HAnimSite2164);

HAnimSite& HAnimSite2165 =  HAnimSite();
HAnimSite2165.setUSE(CString("hanim_r_iliocristale"));
HAnimHumanoid38.setSites(&HAnimSite2165);

HAnimSite& HAnimSite2166 =  HAnimSite();
HAnimSite2166.setUSE(CString("hanim_r_psis"));
HAnimHumanoid38.setSites(&HAnimSite2166);

HAnimSite& HAnimSite2167 =  HAnimSite();
HAnimSite2167.setUSE(CString("hanim_r_trochanterion"));
HAnimHumanoid38.setSites(&HAnimSite2167);

HAnimSite& HAnimSite2168 =  HAnimSite();
HAnimSite2168.setUSE(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite2168);

HAnimSite& HAnimSite2169 =  HAnimSite();
HAnimSite2169.setUSE(CString("hanim_l_femoral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite2169);

HAnimSite& HAnimSite2170 =  HAnimSite();
HAnimSite2170.setUSE(CString("hanim_l_knee_crease"));
HAnimHumanoid38.setSites(&HAnimSite2170);

HAnimSite& HAnimSite2171 =  HAnimSite();
HAnimSite2171.setUSE(CString("hanim_l_suprapatella"));
HAnimHumanoid38.setSites(&HAnimSite2171);

HAnimSite& HAnimSite2172 =  HAnimSite();
HAnimSite2172.setUSE(CString("hanim_l_lateral_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite2172);

HAnimSite& HAnimSite2173 =  HAnimSite();
HAnimSite2173.setUSE(CString("hanim_l_medial_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite2173);

HAnimSite& HAnimSite2174 =  HAnimSite();
HAnimSite2174.setUSE(CString("hanim_l_tibiale"));
HAnimHumanoid38.setSites(&HAnimSite2174);

HAnimSite& HAnimSite2175 =  HAnimSite();
HAnimSite2175.setUSE(CString("hanim_l_calcaneus_posterior"));
HAnimHumanoid38.setSites(&HAnimSite2175);

HAnimSite& HAnimSite2176 =  HAnimSite();
HAnimSite2176.setUSE(CString("hanim_l_sphyrion"));
HAnimHumanoid38.setSites(&HAnimSite2176);

HAnimSite& HAnimSite2177 =  HAnimSite();
HAnimSite2177.setUSE(CString("hanim_l_metatarsal_phalanx_1"));
HAnimHumanoid38.setSites(&HAnimSite2177);

HAnimSite& HAnimSite2178 =  HAnimSite();
HAnimSite2178.setUSE(CString("hanim_l_metatarsal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite2178);

HAnimSite& HAnimSite2179 =  HAnimSite();
HAnimSite2179.setUSE(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite2179);

HAnimSite& HAnimSite2180 =  HAnimSite();
HAnimSite2180.setUSE(CString("hanim_r_femoral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite2180);

HAnimSite& HAnimSite2181 =  HAnimSite();
HAnimSite2181.setUSE(CString("hanim_r_knee_crease"));
HAnimHumanoid38.setSites(&HAnimSite2181);

HAnimSite& HAnimSite2182 =  HAnimSite();
HAnimSite2182.setUSE(CString("hanim_r_suprapatella"));
HAnimHumanoid38.setSites(&HAnimSite2182);

HAnimSite& HAnimSite2183 =  HAnimSite();
HAnimSite2183.setUSE(CString("hanim_r_lateral_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite2183);

HAnimSite& HAnimSite2184 =  HAnimSite();
HAnimSite2184.setUSE(CString("hanim_r_medial_malleolus"));
HAnimHumanoid38.setSites(&HAnimSite2184);

HAnimSite& HAnimSite2185 =  HAnimSite();
HAnimSite2185.setUSE(CString("hanim_r_tibiale"));
HAnimHumanoid38.setSites(&HAnimSite2185);

HAnimSite& HAnimSite2186 =  HAnimSite();
HAnimSite2186.setUSE(CString("hanim_r_calcaneus_posterior"));
HAnimHumanoid38.setSites(&HAnimSite2186);

HAnimSite& HAnimSite2187 =  HAnimSite();
HAnimSite2187.setUSE(CString("hanim_r_sphyrion"));
HAnimHumanoid38.setSites(&HAnimSite2187);

HAnimSite& HAnimSite2188 =  HAnimSite();
HAnimSite2188.setUSE(CString("hanim_r_metatarsal_phalanx_1"));
HAnimHumanoid38.setSites(&HAnimSite2188);

HAnimSite& HAnimSite2189 =  HAnimSite();
HAnimSite2189.setUSE(CString("hanim_r_metatarsal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite2189);

HAnimSite& HAnimSite2190 =  HAnimSite();
HAnimSite2190.setUSE(CString("hanim_navel"));
HAnimHumanoid38.setSites(&HAnimSite2190);

HAnimSite& HAnimSite2191 =  HAnimSite();
HAnimSite2191.setUSE(CString("hanim_waist_preferred_anterior"));
HAnimHumanoid38.setSites(&HAnimSite2191);

HAnimSite& HAnimSite2192 =  HAnimSite();
HAnimSite2192.setUSE(CString("hanim_waist_preferred_posterior"));
HAnimHumanoid38.setSites(&HAnimSite2192);

HAnimSite& HAnimSite2193 =  HAnimSite();
HAnimSite2193.setUSE(CString("hanim_l_rib10"));
HAnimHumanoid38.setSites(&HAnimSite2193);

HAnimSite& HAnimSite2194 =  HAnimSite();
HAnimSite2194.setUSE(CString("hanim_r_rib10"));
HAnimHumanoid38.setSites(&HAnimSite2194);

HAnimSite& HAnimSite2195 =  HAnimSite();
HAnimSite2195.setUSE(CString("hanim_spine_2_middle_back"));
HAnimHumanoid38.setSites(&HAnimSite2195);

HAnimSite& HAnimSite2196 =  HAnimSite();
HAnimSite2196.setUSE(CString("hanim_substernale"));
HAnimHumanoid38.setSites(&HAnimSite2196);

HAnimSite& HAnimSite2197 =  HAnimSite();
HAnimSite2197.setUSE(CString("hanim_l_thelion"));
HAnimHumanoid38.setSites(&HAnimSite2197);

HAnimSite& HAnimSite2198 =  HAnimSite();
HAnimSite2198.setUSE(CString("hanim_r_thelion"));
HAnimHumanoid38.setSites(&HAnimSite2198);

HAnimSite& HAnimSite2199 =  HAnimSite();
HAnimSite2199.setUSE(CString("hanim_l_chest_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite2199);

HAnimSite& HAnimSite2200 =  HAnimSite();
HAnimSite2200.setUSE(CString("hanim_mesosternale"));
HAnimHumanoid38.setSites(&HAnimSite2200);

HAnimSite& HAnimSite2201 =  HAnimSite();
HAnimSite2201.setUSE(CString("hanim_r_chest_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite2201);

HAnimSite& HAnimSite2202 =  HAnimSite();
HAnimSite2202.setUSE(CString("hanim_rear_center_midsagittal_plane"));
HAnimHumanoid38.setSites(&HAnimSite2202);

HAnimSite& HAnimSite2203 =  HAnimSite();
HAnimSite2203.setUSE(CString("hanim_spine_1_middle_back"));
HAnimHumanoid38.setSites(&HAnimSite2203);

HAnimSite& HAnimSite2204 =  HAnimSite();
HAnimSite2204.setUSE(CString("hanim_cervicale"));
HAnimHumanoid38.setSites(&HAnimSite2204);

HAnimSite& HAnimSite2205 =  HAnimSite();
HAnimSite2205.setUSE(CString("hanim_suprasternale"));
HAnimHumanoid38.setSites(&HAnimSite2205);

HAnimSite& HAnimSite2206 =  HAnimSite();
HAnimSite2206.setUSE(CString("hanim_l_neck_base"));
HAnimHumanoid38.setSites(&HAnimSite2206);

HAnimSite& HAnimSite2207 =  HAnimSite();
HAnimSite2207.setUSE(CString("hanim_r_neck_base"));
HAnimHumanoid38.setSites(&HAnimSite2207);

HAnimSite& HAnimSite2208 =  HAnimSite();
HAnimSite2208.setUSE(CString("hanim_adams_apple"));
HAnimHumanoid38.setSites(&HAnimSite2208);

HAnimSite& HAnimSite2209 =  HAnimSite();
HAnimSite2209.setUSE(CString("hanim_glabella"));
HAnimHumanoid38.setSites(&HAnimSite2209);

HAnimSite& HAnimSite2210 =  HAnimSite();
HAnimSite2210.setUSE(CString("hanim_l_ectocanthus"));
HAnimHumanoid38.setSites(&HAnimSite2210);

HAnimSite& HAnimSite2211 =  HAnimSite();
HAnimSite2211.setUSE(CString("hanim_l_infraorbitale"));
HAnimHumanoid38.setSites(&HAnimSite2211);

HAnimSite& HAnimSite2212 =  HAnimSite();
HAnimSite2212.setUSE(CString("hanim_l_tragion"));
HAnimHumanoid38.setSites(&HAnimSite2212);

HAnimSite& HAnimSite2213 =  HAnimSite();
HAnimSite2213.setUSE(CString("hanim_nuchale"));
HAnimHumanoid38.setSites(&HAnimSite2213);

HAnimSite& HAnimSite2214 =  HAnimSite();
HAnimSite2214.setUSE(CString("hanim_opisthocranion"));
HAnimHumanoid38.setSites(&HAnimSite2214);

HAnimSite& HAnimSite2215 =  HAnimSite();
HAnimSite2215.setUSE(CString("hanim_r_ectocanthus"));
HAnimHumanoid38.setSites(&HAnimSite2215);

HAnimSite& HAnimSite2216 =  HAnimSite();
HAnimSite2216.setUSE(CString("hanim_r_infraorbitale"));
HAnimHumanoid38.setSites(&HAnimSite2216);

HAnimSite& HAnimSite2217 =  HAnimSite();
HAnimSite2217.setUSE(CString("hanim_r_tragion"));
HAnimHumanoid38.setSites(&HAnimSite2217);

HAnimSite& HAnimSite2218 =  HAnimSite();
HAnimSite2218.setUSE(CString("hanim_sellion"));
HAnimHumanoid38.setSites(&HAnimSite2218);

HAnimSite& HAnimSite2219 =  HAnimSite();
HAnimSite2219.setUSE(CString("hanim_skull_vertex"));
HAnimHumanoid38.setSites(&HAnimSite2219);

HAnimSite& HAnimSite2220 =  HAnimSite();
HAnimSite2220.setUSE(CString("hanim_l_acromion"));
HAnimHumanoid38.setSites(&HAnimSite2220);

HAnimSite& HAnimSite2221 =  HAnimSite();
HAnimSite2221.setUSE(CString("hanim_l_axilla_distal"));
HAnimHumanoid38.setSites(&HAnimSite2221);

HAnimSite& HAnimSite2222 =  HAnimSite();
HAnimSite2222.setUSE(CString("hanim_l_axilla_posterior_folds"));
HAnimHumanoid38.setSites(&HAnimSite2222);

HAnimSite& HAnimSite2223 =  HAnimSite();
HAnimSite2223.setUSE(CString("hanim_l_axilla_proximal"));
HAnimHumanoid38.setSites(&HAnimSite2223);

HAnimSite& HAnimSite2224 =  HAnimSite();
HAnimSite2224.setUSE(CString("hanim_l_clavicale"));
HAnimHumanoid38.setSites(&HAnimSite2224);

HAnimSite& HAnimSite2225 =  HAnimSite();
HAnimSite2225.setUSE(CString("hanim_l_bideltoid"));
HAnimHumanoid38.setSites(&HAnimSite2225);

HAnimSite& HAnimSite2226 =  HAnimSite();
HAnimSite2226.setUSE(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite2226);

HAnimSite& HAnimSite2227 =  HAnimSite();
HAnimSite2227.setUSE(CString("hanim_l_humeral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite2227);

HAnimSite& HAnimSite2228 =  HAnimSite();
HAnimSite2228.setUSE(CString("hanim_l_olecranon"));
HAnimHumanoid38.setSites(&HAnimSite2228);

HAnimSite& HAnimSite2229 =  HAnimSite();
HAnimSite2229.setUSE(CString("hanim_l_radial_styloid"));
HAnimHumanoid38.setSites(&HAnimSite2229);

HAnimSite& HAnimSite2230 =  HAnimSite();
HAnimSite2230.setUSE(CString("hanim_l_radiale"));
HAnimHumanoid38.setSites(&HAnimSite2230);

HAnimSite& HAnimSite2231 =  HAnimSite();
HAnimSite2231.setUSE(CString("hanim_l_ulnar_styloid"));
HAnimHumanoid38.setSites(&HAnimSite2231);

HAnimSite& HAnimSite2232 =  HAnimSite();
HAnimSite2232.setUSE(CString("hanim_l_metacarpal_phalanx_2"));
HAnimHumanoid38.setSites(&HAnimSite2232);

HAnimSite& HAnimSite2233 =  HAnimSite();
HAnimSite2233.setUSE(CString("hanim_l_metacarpal_phalanx_3"));
HAnimHumanoid38.setSites(&HAnimSite2233);

HAnimSite& HAnimSite2234 =  HAnimSite();
HAnimSite2234.setUSE(CString("hanim_l_metacarpal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite2234);

HAnimSite& HAnimSite2235 =  HAnimSite();
HAnimSite2235.setUSE(CString("hanim_r_acromion"));
HAnimHumanoid38.setSites(&HAnimSite2235);

HAnimSite& HAnimSite2236 =  HAnimSite();
HAnimSite2236.setUSE(CString("hanim_r_axilla_distal"));
HAnimHumanoid38.setSites(&HAnimSite2236);

HAnimSite& HAnimSite2237 =  HAnimSite();
HAnimSite2237.setUSE(CString("hanim_r_axilla_posterior_folds"));
HAnimHumanoid38.setSites(&HAnimSite2237);

HAnimSite& HAnimSite2238 =  HAnimSite();
HAnimSite2238.setUSE(CString("hanim_r_axilla_proximal"));
HAnimHumanoid38.setSites(&HAnimSite2238);

HAnimSite& HAnimSite2239 =  HAnimSite();
HAnimSite2239.setUSE(CString("hanim_r_clavicale"));
HAnimHumanoid38.setSites(&HAnimSite2239);

HAnimSite& HAnimSite2240 =  HAnimSite();
HAnimSite2240.setUSE(CString("hanim_r_bideltoid"));
HAnimHumanoid38.setSites(&HAnimSite2240);

HAnimSite& HAnimSite2241 =  HAnimSite();
HAnimSite2241.setUSE(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite2241);

HAnimSite& HAnimSite2242 =  HAnimSite();
HAnimSite2242.setUSE(CString("hanim_r_humeral_medial_epicondyles"));
HAnimHumanoid38.setSites(&HAnimSite2242);

HAnimSite& HAnimSite2243 =  HAnimSite();
HAnimSite2243.setUSE(CString("hanim_r_olecranon"));
HAnimHumanoid38.setSites(&HAnimSite2243);

HAnimSite& HAnimSite2244 =  HAnimSite();
HAnimSite2244.setUSE(CString("hanim_r_radial_styloid"));
HAnimHumanoid38.setSites(&HAnimSite2244);

HAnimSite& HAnimSite2245 =  HAnimSite();
HAnimSite2245.setUSE(CString("hanim_r_radiale"));
HAnimHumanoid38.setSites(&HAnimSite2245);

HAnimSite& HAnimSite2246 =  HAnimSite();
HAnimSite2246.setUSE(CString("hanim_r_ulnar_styloid"));
HAnimHumanoid38.setSites(&HAnimSite2246);

HAnimSite& HAnimSite2247 =  HAnimSite();
HAnimSite2247.setUSE(CString("hanim_r_metacarpal_phalanx_2"));
HAnimHumanoid38.setSites(&HAnimSite2247);

HAnimSite& HAnimSite2248 =  HAnimSite();
HAnimSite2248.setUSE(CString("hanim_r_metacarpal_phalanx_3"));
HAnimHumanoid38.setSites(&HAnimSite2248);

HAnimSite& HAnimSite2249 =  HAnimSite();
HAnimSite2249.setUSE(CString("hanim_r_metacarpal_phalanx_5"));
HAnimHumanoid38.setSites(&HAnimSite2249);

Scene11.addChild(&HAnimHumanoid38);

X3D0.setScene(&Scene11);

}
