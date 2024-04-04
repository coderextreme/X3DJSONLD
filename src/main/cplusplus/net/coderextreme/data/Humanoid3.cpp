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
meta3.setContent(CString("Humanoid3.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("identifier"));
meta4.setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d"));
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
ImageTexture49.setDescription(CString("Blue Spiral Pattern"));
ImageTexture49.setUrl(new CString[]{CString("./data/zBlueSpiralBkg2.gif"), CString("zBlueSpiralBkg2.gif"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 3);
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
HAnimSegment& HAnimSegment53 =  HAnimSegment();
HAnimSegment53.X3DNode::setName(CString("sacrum"));
HAnimSegment53.setDEF(CString("hanim_sacrum"));
Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[]{0,0.824,0.0277});
Transform& Transform55 =  Transform();
//Empty Transform
Shape& Shape56 =  Shape();
Shape56.setUSE(CString("HAnimJointShape"));
Transform55.addChild(&Shape56);

Transform54.addChild(&Transform55);

HAnimSegment53.addChild(&Transform54);

Shape& Shape57 =  Shape();
LineSet& LineSet58 =  LineSet();
LineSet58.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate59 =  Coordinate();
Coordinate59.setPoint(new float[]{0,0.824,0.0277,0,0.9149,0.0016}, 6);
LineSet58.setCoord(Coordinate59);

//from humanoid_root to sacroiliac vertices 2
ColorRGBA& ColorRGBA60 =  ColorRGBA();
ColorRGBA60.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet58.addChild(&ColorRGBA60);

Shape57.setGeometry(&LineSet58);

HAnimSegment53.addChild(&Shape57);

HAnimSite& HAnimSite61 =  HAnimSite();
HAnimSite61.X3DNode::setName(CString("buttocks_standing_wall_contact_point"));
HAnimSite61.setDEF(CString("hanim_buttocks_standing_wall_contact_point"));
TouchSensor& TouchSensor62 =  TouchSensor();
TouchSensor62.setDescription(CString("HAnimSite buttocks_standing_wall_contact_point"));
HAnimSite61.addChild(&TouchSensor62);

Shape& Shape63 =  Shape();
Shape63.setUSE(CString("HAnimSiteShape"));
HAnimSite61.addChild(&Shape63);

HAnimSegment53.addChild(&HAnimSite61);

HAnimSite& HAnimSite64 =  HAnimSite();
HAnimSite64.X3DNode::setName(CString("crotch"));
HAnimSite64.setDEF(CString("hanim_crotch"));
HAnimSite64.setTranslation(new float[]{0.0034,0.8266,0.0257});
TouchSensor& TouchSensor65 =  TouchSensor();
TouchSensor65.setDescription(CString("HAnimSite crotch"));
HAnimSite64.addChild(&TouchSensor65);

Shape& Shape66 =  Shape();
Shape66.setUSE(CString("HAnimSiteShape"));
HAnimSite64.addChild(&Shape66);

HAnimSegment53.addChild(&HAnimSite64);

HAnimSite& HAnimSite67 =  HAnimSite();
HAnimSite67.X3DNode::setName(CString("l_asis"));
HAnimSite67.setDEF(CString("hanim_l_asis"));
HAnimSite67.setTranslation(new float[]{0.0925,0.9983,0.1052});
TouchSensor& TouchSensor68 =  TouchSensor();
TouchSensor68.setDescription(CString("HAnimSite l_asis"));
HAnimSite67.addChild(&TouchSensor68);

Shape& Shape69 =  Shape();
Shape69.setUSE(CString("HAnimSiteShape"));
HAnimSite67.addChild(&Shape69);

HAnimSegment53.addChild(&HAnimSite67);

HAnimSite& HAnimSite70 =  HAnimSite();
HAnimSite70.X3DNode::setName(CString("l_iliocristale"));
HAnimSite70.setDEF(CString("hanim_l_iliocristale"));
HAnimSite70.setTranslation(new float[]{0.1612,1.0537,0.0008});
TouchSensor& TouchSensor71 =  TouchSensor();
TouchSensor71.setDescription(CString("HAnimSite l_iliocristale"));
HAnimSite70.addChild(&TouchSensor71);

Shape& Shape72 =  Shape();
Shape72.setUSE(CString("HAnimSiteShape"));
HAnimSite70.addChild(&Shape72);

HAnimSegment53.addChild(&HAnimSite70);

HAnimSite& HAnimSite73 =  HAnimSite();
HAnimSite73.X3DNode::setName(CString("l_psis"));
HAnimSite73.setDEF(CString("hanim_l_psis"));
HAnimSite73.setTranslation(new float[]{0.0774,1.019,-0.1151});
TouchSensor& TouchSensor74 =  TouchSensor();
TouchSensor74.setDescription(CString("HAnimSite l_psis"));
HAnimSite73.addChild(&TouchSensor74);

Shape& Shape75 =  Shape();
Shape75.setUSE(CString("HAnimSiteShape"));
HAnimSite73.addChild(&Shape75);

HAnimSegment53.addChild(&HAnimSite73);

HAnimSite& HAnimSite76 =  HAnimSite();
HAnimSite76.X3DNode::setName(CString("l_trochanterion"));
HAnimSite76.setDEF(CString("hanim_l_trochanterion"));
HAnimSite76.setTranslation(new float[]{0.1677,0.8336,0.0303});
TouchSensor& TouchSensor77 =  TouchSensor();
TouchSensor77.setDescription(CString("HAnimSite l_trochanterion"));
HAnimSite76.addChild(&TouchSensor77);

Shape& Shape78 =  Shape();
Shape78.setUSE(CString("HAnimSiteShape"));
HAnimSite76.addChild(&Shape78);

HAnimSegment53.addChild(&HAnimSite76);

HAnimSite& HAnimSite79 =  HAnimSite();
HAnimSite79.X3DNode::setName(CString("r_asis"));
HAnimSite79.setDEF(CString("hanim_r_asis"));
HAnimSite79.setTranslation(new float[]{-0.0887,1.0021,0.1112});
TouchSensor& TouchSensor80 =  TouchSensor();
TouchSensor80.setDescription(CString("HAnimSite r_asis"));
HAnimSite79.addChild(&TouchSensor80);

Shape& Shape81 =  Shape();
Shape81.setUSE(CString("HAnimSiteShape"));
HAnimSite79.addChild(&Shape81);

HAnimSegment53.addChild(&HAnimSite79);

HAnimSite& HAnimSite82 =  HAnimSite();
HAnimSite82.X3DNode::setName(CString("r_iliocristale"));
HAnimSite82.setDEF(CString("hanim_r_iliocristale"));
HAnimSite82.setTranslation(new float[]{-0.1525,1.0628,0.0035});
TouchSensor& TouchSensor83 =  TouchSensor();
TouchSensor83.setDescription(CString("HAnimSite r_iliocristale"));
HAnimSite82.addChild(&TouchSensor83);

Shape& Shape84 =  Shape();
Shape84.setUSE(CString("HAnimSiteShape"));
HAnimSite82.addChild(&Shape84);

HAnimSegment53.addChild(&HAnimSite82);

HAnimSite& HAnimSite85 =  HAnimSite();
HAnimSite85.X3DNode::setName(CString("r_psis"));
HAnimSite85.setDEF(CString("hanim_r_psis"));
HAnimSite85.setTranslation(new float[]{-0.0716,1.019,-0.1138});
TouchSensor& TouchSensor86 =  TouchSensor();
TouchSensor86.setDescription(CString("HAnimSite r_psis"));
HAnimSite85.addChild(&TouchSensor86);

Shape& Shape87 =  Shape();
Shape87.setUSE(CString("HAnimSiteShape"));
HAnimSite85.addChild(&Shape87);

HAnimSegment53.addChild(&HAnimSite85);

HAnimSite& HAnimSite88 =  HAnimSite();
HAnimSite88.X3DNode::setName(CString("r_trochanterion"));
HAnimSite88.setDEF(CString("hanim_r_trochanterion"));
HAnimSite88.setTranslation(new float[]{-0.1689,0.8419,0.0352});
TouchSensor& TouchSensor89 =  TouchSensor();
TouchSensor89.setDescription(CString("HAnimSite r_trochanterion"));
HAnimSite88.addChild(&TouchSensor89);

Shape& Shape90 =  Shape();
Shape90.setUSE(CString("HAnimSiteShape"));
HAnimSite88.addChild(&Shape90);

HAnimSegment53.addChild(&HAnimSite88);

Shape& Shape91 =  Shape();
LineSet& LineSet92 =  LineSet();
LineSet92.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate93 =  Coordinate();
Coordinate93.setPoint(new float[]{0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet92.setCoord(Coordinate93);

//from humanoid_root to vl5 vertices 2
ColorRGBA& ColorRGBA94 =  ColorRGBA();
ColorRGBA94.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet92.addChild(&ColorRGBA94);

Shape91.setGeometry(&LineSet92);

HAnimSegment53.addChild(&Shape91);

HAnimSite& HAnimSite95 =  HAnimSite();
HAnimSite95.X3DNode::setName(CString("navel"));
HAnimSite95.setDEF(CString("hanim_navel"));
HAnimSite95.setTranslation(new float[]{0.0069,1.0966,0.1017});
TouchSensor& TouchSensor96 =  TouchSensor();
TouchSensor96.setDescription(CString("HAnimSite navel"));
HAnimSite95.addChild(&TouchSensor96);

Shape& Shape97 =  Shape();
Shape97.setUSE(CString("HAnimSiteShape"));
HAnimSite95.addChild(&Shape97);

HAnimSegment53.addChild(&HAnimSite95);

HAnimSite& HAnimSite98 =  HAnimSite();
HAnimSite98.X3DNode::setName(CString("waist_preferred_anterior"));
HAnimSite98.setDEF(CString("hanim_waist_preferred_anterior"));
TouchSensor& TouchSensor99 =  TouchSensor();
TouchSensor99.setDescription(CString("HAnimSite waist_preferred_anterior"));
HAnimSite98.addChild(&TouchSensor99);

Shape& Shape100 =  Shape();
Shape100.setUSE(CString("HAnimSiteShape"));
HAnimSite98.addChild(&Shape100);

HAnimSegment53.addChild(&HAnimSite98);

HAnimSite& HAnimSite101 =  HAnimSite();
HAnimSite101.X3DNode::setName(CString("waist_preferred_posterior"));
HAnimSite101.setDEF(CString("hanim_waist_preferred_posterior"));
HAnimSite101.setTranslation(new float[]{0.29,1.0915,-0.1091});
TouchSensor& TouchSensor102 =  TouchSensor();
TouchSensor102.setDescription(CString("HAnimSite waist_preferred_posterior"));
HAnimSite101.addChild(&TouchSensor102);

Shape& Shape103 =  Shape();
Shape103.setUSE(CString("HAnimSiteShape"));
HAnimSite101.addChild(&Shape103);

HAnimSegment53.addChild(&HAnimSite101);

HAnimJoint52.addChildren(&HAnimSegment53);

HAnimJoint& HAnimJoint104 =  HAnimJoint();
HAnimJoint104.X3DNode::setName(CString("sacroiliac"));
HAnimJoint104.setDEF(CString("hanim_sacroiliac"));
HAnimJoint104.setCenter(new float[]{0,0.9149,0.0016});
HAnimSegment& HAnimSegment105 =  HAnimSegment();
HAnimSegment105.X3DNode::setName(CString("pelvis"));
HAnimSegment105.setDEF(CString("hanim_pelvis"));
Transform& Transform106 =  Transform();
Transform106.setTranslation(new float[]{0,0.9149,0.0016});
Transform& Transform107 =  Transform();
//Empty Transform
Shape& Shape108 =  Shape();
Shape108.setUSE(CString("HAnimJointShape"));
Transform107.addChild(&Shape108);

Transform106.addChild(&Transform107);

HAnimSegment105.addChild(&Transform106);

Shape& Shape109 =  Shape();
LineSet& LineSet110 =  LineSet();
LineSet110.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate111 =  Coordinate();
Coordinate111.setPoint(new float[]{0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet110.setCoord(Coordinate111);

//from sacroiliac to l_hip vertices 2
ColorRGBA& ColorRGBA112 =  ColorRGBA();
ColorRGBA112.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet110.addChild(&ColorRGBA112);

Shape109.setGeometry(&LineSet110);

HAnimSegment105.addChild(&Shape109);

HAnimSite& HAnimSite113 =  HAnimSite();
HAnimSite113.X3DNode::setName(CString("l_femoral_lateral_epicondyles"));
HAnimSite113.setDEF(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimSite113.setTranslation(new float[]{0.1598,0.4967,0.0297});
TouchSensor& TouchSensor114 =  TouchSensor();
TouchSensor114.setDescription(CString("HAnimSite l_femoral_lateral_epicondyles"));
HAnimSite113.addChild(&TouchSensor114);

Shape& Shape115 =  Shape();
Shape115.setUSE(CString("HAnimSiteShape"));
HAnimSite113.addChild(&Shape115);

HAnimSegment105.addChild(&HAnimSite113);

HAnimSite& HAnimSite116 =  HAnimSite();
HAnimSite116.X3DNode::setName(CString("l_femoral_medial_epicondyles"));
HAnimSite116.setDEF(CString("hanim_l_femoral_medial_epicondyles"));
HAnimSite116.setTranslation(new float[]{0.0398,0.4946,0.0303});
TouchSensor& TouchSensor117 =  TouchSensor();
TouchSensor117.setDescription(CString("HAnimSite l_femoral_medial_epicondyles"));
HAnimSite116.addChild(&TouchSensor117);

Shape& Shape118 =  Shape();
Shape118.setUSE(CString("HAnimSiteShape"));
HAnimSite116.addChild(&Shape118);

HAnimSegment105.addChild(&HAnimSite116);

HAnimSite& HAnimSite119 =  HAnimSite();
HAnimSite119.X3DNode::setName(CString("l_knee_crease"));
HAnimSite119.setDEF(CString("hanim_l_knee_crease"));
HAnimSite119.setTranslation(new float[]{0.0993,0.4881,-0.0309});
TouchSensor& TouchSensor120 =  TouchSensor();
TouchSensor120.setDescription(CString("HAnimSite l_knee_crease"));
HAnimSite119.addChild(&TouchSensor120);

Shape& Shape121 =  Shape();
Shape121.setUSE(CString("HAnimSiteShape"));
HAnimSite119.addChild(&Shape121);

HAnimSegment105.addChild(&HAnimSite119);

HAnimSite& HAnimSite122 =  HAnimSite();
HAnimSite122.X3DNode::setName(CString("l_suprapatella"));
HAnimSite122.setDEF(CString("hanim_l_suprapatella"));
TouchSensor& TouchSensor123 =  TouchSensor();
TouchSensor123.setDescription(CString("HAnimSite l_suprapatella"));
HAnimSite122.addChild(&TouchSensor123);

Shape& Shape124 =  Shape();
Shape124.setUSE(CString("HAnimSiteShape"));
HAnimSite122.addChild(&Shape124);

HAnimSegment105.addChild(&HAnimSite122);

Shape& Shape125 =  Shape();
LineSet& LineSet126 =  LineSet();
LineSet126.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate127 =  Coordinate();
Coordinate127.setPoint(new float[]{0,0.9149,0.0016,-0.095,0.9171,0.0029}, 6);
LineSet126.setCoord(Coordinate127);

//from sacroiliac to r_hip vertices 2
ColorRGBA& ColorRGBA128 =  ColorRGBA();
ColorRGBA128.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet126.addChild(&ColorRGBA128);

Shape125.setGeometry(&LineSet126);

HAnimSegment105.addChild(&Shape125);

HAnimSite& HAnimSite129 =  HAnimSite();
HAnimSite129.X3DNode::setName(CString("r_femoral_lateral_epicondyles"));
HAnimSite129.setDEF(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimSite129.setTranslation(new float[]{-0.1421,0.4992,0.031});
TouchSensor& TouchSensor130 =  TouchSensor();
TouchSensor130.setDescription(CString("HAnimSite r_femoral_lateral_epicondyles"));
HAnimSite129.addChild(&TouchSensor130);

Shape& Shape131 =  Shape();
Shape131.setUSE(CString("HAnimSiteShape"));
HAnimSite129.addChild(&Shape131);

HAnimSegment105.addChild(&HAnimSite129);

HAnimSite& HAnimSite132 =  HAnimSite();
HAnimSite132.X3DNode::setName(CString("r_femoral_medial_epicondyles"));
HAnimSite132.setDEF(CString("hanim_r_femoral_medial_epicondyles"));
HAnimSite132.setTranslation(new float[]{-0.0221,0.5014,0.0289});
TouchSensor& TouchSensor133 =  TouchSensor();
TouchSensor133.setDescription(CString("HAnimSite r_femoral_medial_epicondyles"));
HAnimSite132.addChild(&TouchSensor133);

Shape& Shape134 =  Shape();
Shape134.setUSE(CString("HAnimSiteShape"));
HAnimSite132.addChild(&Shape134);

HAnimSegment105.addChild(&HAnimSite132);

HAnimSite& HAnimSite135 =  HAnimSite();
HAnimSite135.X3DNode::setName(CString("r_knee_crease"));
HAnimSite135.setDEF(CString("hanim_r_knee_crease"));
HAnimSite135.setTranslation(new float[]{-0.0825,0.4932,-0.0326});
TouchSensor& TouchSensor136 =  TouchSensor();
TouchSensor136.setDescription(CString("HAnimSite r_knee_crease"));
HAnimSite135.addChild(&TouchSensor136);

Shape& Shape137 =  Shape();
Shape137.setUSE(CString("HAnimSiteShape"));
HAnimSite135.addChild(&Shape137);

HAnimSegment105.addChild(&HAnimSite135);

HAnimSite& HAnimSite138 =  HAnimSite();
HAnimSite138.X3DNode::setName(CString("r_suprapatella"));
HAnimSite138.setDEF(CString("hanim_r_suprapatella"));
TouchSensor& TouchSensor139 =  TouchSensor();
TouchSensor139.setDescription(CString("HAnimSite r_suprapatella"));
HAnimSite138.addChild(&TouchSensor139);

Shape& Shape140 =  Shape();
Shape140.setUSE(CString("HAnimSiteShape"));
HAnimSite138.addChild(&Shape140);

HAnimSegment105.addChild(&HAnimSite138);

HAnimJoint104.addChildren(&HAnimSegment105);

HAnimJoint& HAnimJoint141 =  HAnimJoint();
HAnimJoint141.X3DNode::setName(CString("l_hip"));
HAnimJoint141.setDEF(CString("hanim_l_hip"));
HAnimJoint141.setCenter(new float[]{0.0961,0.9124,-0.0001});
HAnimSegment& HAnimSegment142 =  HAnimSegment();
HAnimSegment142.X3DNode::setName(CString("l_thigh"));
HAnimSegment142.setDEF(CString("hanim_l_thigh"));
Transform& Transform143 =  Transform();
Transform143.setTranslation(new float[]{0.0961,0.9124,-0.0001});
Transform& Transform144 =  Transform();
//Empty Transform
Shape& Shape145 =  Shape();
Shape145.setUSE(CString("HAnimJointShape"));
Transform144.addChild(&Shape145);

Transform143.addChild(&Transform144);

HAnimSegment142.addChild(&Transform143);

Shape& Shape146 =  Shape();
LineSet& LineSet147 =  LineSet();
LineSet147.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate148 =  Coordinate();
Coordinate148.setPoint(new float[]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
LineSet147.setCoord(Coordinate148);

//from l_hip to l_knee vertices 2
ColorRGBA& ColorRGBA149 =  ColorRGBA();
ColorRGBA149.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet147.addChild(&ColorRGBA149);

Shape146.setGeometry(&LineSet147);

HAnimSegment142.addChild(&Shape146);

HAnimSite& HAnimSite150 =  HAnimSite();
HAnimSite150.X3DNode::setName(CString("l_lateral_malleolus"));
HAnimSite150.setDEF(CString("hanim_l_lateral_malleolus"));
HAnimSite150.setTranslation(new float[]{0.1308,0.0597,-0.1032});
TouchSensor& TouchSensor151 =  TouchSensor();
TouchSensor151.setDescription(CString("HAnimSite l_lateral_malleolus"));
HAnimSite150.addChild(&TouchSensor151);

Shape& Shape152 =  Shape();
Shape152.setUSE(CString("HAnimSiteShape"));
HAnimSite150.addChild(&Shape152);

HAnimSegment142.addChild(&HAnimSite150);

HAnimSite& HAnimSite153 =  HAnimSite();
HAnimSite153.X3DNode::setName(CString("l_medial_malleolus"));
HAnimSite153.setDEF(CString("hanim_l_medial_malleolus"));
HAnimSite153.setTranslation(new float[]{0.089,0.0716,-0.0881});
TouchSensor& TouchSensor154 =  TouchSensor();
TouchSensor154.setDescription(CString("HAnimSite l_medial_malleolus"));
HAnimSite153.addChild(&TouchSensor154);

Shape& Shape155 =  Shape();
Shape155.setUSE(CString("HAnimSiteShape"));
HAnimSite153.addChild(&Shape155);

HAnimSegment142.addChild(&HAnimSite153);

HAnimSite& HAnimSite156 =  HAnimSite();
HAnimSite156.X3DNode::setName(CString("l_tibiale"));
HAnimSite156.setDEF(CString("hanim_l_tibiale"));
TouchSensor& TouchSensor157 =  TouchSensor();
TouchSensor157.setDescription(CString("HAnimSite l_tibiale"));
HAnimSite156.addChild(&TouchSensor157);

Shape& Shape158 =  Shape();
Shape158.setUSE(CString("HAnimSiteShape"));
HAnimSite156.addChild(&Shape158);

HAnimSegment142.addChild(&HAnimSite156);

HAnimJoint141.addChildren(&HAnimSegment142);

HAnimJoint& HAnimJoint159 =  HAnimJoint();
HAnimJoint159.X3DNode::setName(CString("l_knee"));
HAnimJoint159.setDEF(CString("hanim_l_knee"));
HAnimJoint159.setCenter(new float[]{0.104,0.4867,0.0308});
HAnimSegment& HAnimSegment160 =  HAnimSegment();
HAnimSegment160.X3DNode::setName(CString("l_calf"));
HAnimSegment160.setDEF(CString("hanim_l_calf"));
Transform& Transform161 =  Transform();
Transform161.setTranslation(new float[]{0.104,0.4867,0.0308});
Transform& Transform162 =  Transform();
//Empty Transform
Shape& Shape163 =  Shape();
Shape163.setUSE(CString("HAnimJointShape"));
Transform162.addChild(&Shape163);

Transform161.addChild(&Transform162);

HAnimSegment160.addChild(&Transform161);

Shape& Shape164 =  Shape();
LineSet& LineSet165 =  LineSet();
LineSet165.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate166 =  Coordinate();
Coordinate166.setPoint(new float[]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet165.setCoord(Coordinate166);

//from l_knee to l_talocrural vertices 2
ColorRGBA& ColorRGBA167 =  ColorRGBA();
ColorRGBA167.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet165.addChild(&ColorRGBA167);

Shape164.setGeometry(&LineSet165);

HAnimSegment160.addChild(&Shape164);

HAnimSite& HAnimSite168 =  HAnimSite();
HAnimSite168.X3DNode::setName(CString("l_calcaneus_posterior"));
HAnimSite168.setDEF(CString("hanim_l_calcaneus_posterior"));
HAnimSite168.setTranslation(new float[]{0.0974,0.0259,-0.1171});
TouchSensor& TouchSensor169 =  TouchSensor();
TouchSensor169.setDescription(CString("HAnimSite l_calcaneus_posterior"));
HAnimSite168.addChild(&TouchSensor169);

Shape& Shape170 =  Shape();
Shape170.setUSE(CString("HAnimSiteShape"));
HAnimSite168.addChild(&Shape170);

HAnimSegment160.addChild(&HAnimSite168);

HAnimSite& HAnimSite171 =  HAnimSite();
HAnimSite171.X3DNode::setName(CString("l_sphyrion"));
HAnimSite171.setDEF(CString("hanim_l_sphyrion"));
HAnimSite171.setTranslation(new float[]{0.089,0.0575,-0.0943});
TouchSensor& TouchSensor172 =  TouchSensor();
TouchSensor172.setDescription(CString("HAnimSite l_sphyrion"));
HAnimSite171.addChild(&TouchSensor172);

Shape& Shape173 =  Shape();
Shape173.setUSE(CString("HAnimSiteShape"));
HAnimSite171.addChild(&Shape173);

HAnimSegment160.addChild(&HAnimSite171);

HAnimJoint159.addChildren(&HAnimSegment160);

HAnimJoint& HAnimJoint174 =  HAnimJoint();
HAnimJoint174.X3DNode::setName(CString("l_talocrural"));
HAnimJoint174.setDEF(CString("hanim_l_talocrural"));
HAnimJoint174.setCenter(new float[]{0.1101,0.0656,-0.0736});
HAnimSegment& HAnimSegment175 =  HAnimSegment();
HAnimSegment175.X3DNode::setName(CString("l_talus"));
HAnimSegment175.setDEF(CString("hanim_l_talus"));
Transform& Transform176 =  Transform();
Transform176.setScale(new float[]{0.15,0.15,0.15});
Transform176.setTranslation(new float[]{0.08,0.06,-0.025});
Transform176.setRotation(new float[]{1,0,0,-1.57});
//Transform left foot
Transform& Transform177 =  Transform();
//Empty Transform left foot
Shape& Shape178 =  Shape();
Shape178.setUSE(CString("HAnimJointShape"));
Transform177.addChild(&Shape178);

Transform176.addChild(&Transform177);

HAnimSegment175.addChild(&Transform176);

Shape& Shape179 =  Shape();
LineSet& LineSet180 =  LineSet();
LineSet180.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate181 =  Coordinate();
Coordinate181.setPoint(new float[]{0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608}, 6);
LineSet180.setCoord(Coordinate181);

//from l_talocrural to l_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA182 =  ColorRGBA();
ColorRGBA182.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet180.addChild(&ColorRGBA182);

Shape179.setGeometry(&LineSet180);

HAnimSegment175.addChild(&Shape179);

HAnimJoint174.addChildren(&HAnimSegment175);

HAnimJoint& HAnimJoint183 =  HAnimJoint();
HAnimJoint183.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint183.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint183.setCenter(new float[]{0.08,0.0175,-0.0608});
HAnimSegment& HAnimSegment184 =  HAnimSegment();
HAnimSegment184.X3DNode::setName(CString("l_metatarsal_2"));
HAnimSegment184.setDEF(CString("hanim_l_metatarsal_2"));
Transform& Transform185 =  Transform();
Transform185.setTranslation(new float[]{0.08,0.0175,-0.0608});
Transform& Transform186 =  Transform();
//Empty Transform
Shape& Shape187 =  Shape();
Shape187.setUSE(CString("HAnimJointShape"));
Transform186.addChild(&Shape187);

Transform185.addChild(&Transform186);

HAnimSegment184.addChild(&Transform185);

Shape& Shape188 =  Shape();
LineSet& LineSet189 =  LineSet();
LineSet189.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate190 =  Coordinate();
Coordinate190.setPoint(new float[]{0.08,0.0175,-0.0608,0.0824,0.0064,-0.004}, 6);
LineSet189.setCoord(Coordinate190);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA191 =  ColorRGBA();
ColorRGBA191.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet189.addChild(&ColorRGBA191);

Shape188.setGeometry(&LineSet189);

HAnimSegment184.addChild(&Shape188);

HAnimSite& HAnimSite192 =  HAnimSite();
HAnimSite192.X3DNode::setName(CString("l_metatarsal_phalanx_1"));
HAnimSite192.setDEF(CString("hanim_l_metatarsal_phalanx_1"));
TouchSensor& TouchSensor193 =  TouchSensor();
TouchSensor193.setDescription(CString("HAnimSite l_metatarsal_phalanx_1"));
HAnimSite192.addChild(&TouchSensor193);

Shape& Shape194 =  Shape();
Shape194.setUSE(CString("HAnimSiteShape"));
HAnimSite192.addChild(&Shape194);

HAnimSegment184.addChild(&HAnimSite192);

HAnimSite& HAnimSite195 =  HAnimSite();
HAnimSite195.X3DNode::setName(CString("l_metatarsal_phalanx_5"));
HAnimSite195.setDEF(CString("hanim_l_metatarsal_phalanx_5"));
TouchSensor& TouchSensor196 =  TouchSensor();
TouchSensor196.setDescription(CString("HAnimSite l_metatarsal_phalanx_5"));
HAnimSite195.addChild(&TouchSensor196);

Shape& Shape197 =  Shape();
Shape197.setUSE(CString("HAnimSiteShape"));
HAnimSite195.addChild(&Shape197);

HAnimSegment184.addChild(&HAnimSite195);

HAnimSite& HAnimSite198 =  HAnimSite();
HAnimSite198.X3DNode::setName(CString("l_tarsal_distal_phalanx_1_tip"));
HAnimSite198.setDEF(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor199 =  TouchSensor();
TouchSensor199.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_1_tip"));
HAnimSite198.addChild(&TouchSensor199);

Shape& Shape200 =  Shape();
Shape200.setUSE(CString("HAnimSiteShape"));
HAnimSite198.addChild(&Shape200);

HAnimSegment184.addChild(&HAnimSite198);

HAnimSite& HAnimSite201 =  HAnimSite();
HAnimSite201.X3DNode::setName(CString("l_tarsal_distal_phalanx_2_tip"));
HAnimSite201.setDEF(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimSite201.setTranslation(new float[]{0.1195,0.0079,0.1433});
TouchSensor& TouchSensor202 =  TouchSensor();
TouchSensor202.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_2_tip"));
HAnimSite201.addChild(&TouchSensor202);

Shape& Shape203 =  Shape();
Shape203.setUSE(CString("HAnimSiteShape"));
HAnimSite201.addChild(&Shape203);

HAnimSegment184.addChild(&HAnimSite201);

HAnimSite& HAnimSite204 =  HAnimSite();
HAnimSite204.X3DNode::setName(CString("l_tarsal_distal_phalanx_3_tip"));
HAnimSite204.setDEF(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor205 =  TouchSensor();
TouchSensor205.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_3_tip"));
HAnimSite204.addChild(&TouchSensor205);

Shape& Shape206 =  Shape();
Shape206.setUSE(CString("HAnimSiteShape"));
HAnimSite204.addChild(&Shape206);

HAnimSegment184.addChild(&HAnimSite204);

HAnimSite& HAnimSite207 =  HAnimSite();
HAnimSite207.X3DNode::setName(CString("l_tarsal_distal_phalanx_4_tip"));
HAnimSite207.setDEF(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor208 =  TouchSensor();
TouchSensor208.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_4_tip"));
HAnimSite207.addChild(&TouchSensor208);

Shape& Shape209 =  Shape();
Shape209.setUSE(CString("HAnimSiteShape"));
HAnimSite207.addChild(&Shape209);

HAnimSegment184.addChild(&HAnimSite207);

HAnimSite& HAnimSite210 =  HAnimSite();
HAnimSite210.X3DNode::setName(CString("l_tarsal_distal_phalanx_5_tip"));
HAnimSite210.setDEF(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor211 =  TouchSensor();
TouchSensor211.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_5_tip"));
HAnimSite210.addChild(&TouchSensor211);

Shape& Shape212 =  Shape();
Shape212.setUSE(CString("HAnimSiteShape"));
HAnimSite210.addChild(&Shape212);

HAnimSegment184.addChild(&HAnimSite210);

HAnimJoint183.addChildren(&HAnimSegment184);

HAnimJoint& HAnimJoint213 =  HAnimJoint();
HAnimJoint213.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint213.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint213.setCenter(new float[]{0.0824,0.0064,-0.004});
HAnimSegment& HAnimSegment214 =  HAnimSegment();
HAnimSegment214.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment214.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform& Transform215 =  Transform();
Transform215.setTranslation(new float[]{0.0824,0.0064,-0.004});
Transform& Transform216 =  Transform();
//Empty Transform
Shape& Shape217 =  Shape();
Shape217.setUSE(CString("HAnimJointShape"));
Transform216.addChild(&Shape217);

Transform215.addChild(&Transform216);

HAnimSegment214.addChild(&Transform215);

Shape& Shape218 =  Shape();
LineSet& LineSet219 =  LineSet();
LineSet219.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate220 =  Coordinate();
Coordinate220.setPoint(new float[]{0.0824,0.0064,-0.004,0.0841,0.0013,0.0216}, 6);
LineSet219.setCoord(Coordinate220);

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA221 =  ColorRGBA();
ColorRGBA221.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet219.addChild(&ColorRGBA221);

Shape218.setGeometry(&LineSet219);

HAnimSegment214.addChild(&Shape218);

HAnimJoint213.addChildren(&HAnimSegment214);

HAnimJoint& HAnimJoint222 =  HAnimJoint();
HAnimJoint222.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint222.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint222.setCenter(new float[]{0.0841,0.0013,0.0216});
HAnimJoint213.addChildren(&HAnimJoint222);

HAnimJoint183.addChildren(&HAnimJoint213);

HAnimJoint174.addChildren(&HAnimJoint183);

HAnimJoint159.addChildren(&HAnimJoint174);

HAnimJoint141.addChildren(&HAnimJoint159);

HAnimJoint104.addChildren(&HAnimJoint141);

HAnimJoint& HAnimJoint223 =  HAnimJoint();
HAnimJoint223.X3DNode::setName(CString("r_hip"));
HAnimJoint223.setDEF(CString("hanim_r_hip"));
HAnimJoint223.setCenter(new float[]{-0.095,0.9171,0.0029});
HAnimSegment& HAnimSegment224 =  HAnimSegment();
HAnimSegment224.X3DNode::setName(CString("r_thigh"));
HAnimSegment224.setDEF(CString("hanim_r_thigh"));
Transform& Transform225 =  Transform();
Transform225.setTranslation(new float[]{-0.095,0.9171,0.0029});
Transform& Transform226 =  Transform();
//Empty Transform
Shape& Shape227 =  Shape();
Shape227.setUSE(CString("HAnimJointShape"));
Transform226.addChild(&Shape227);

Transform225.addChild(&Transform226);

HAnimSegment224.addChild(&Transform225);

Shape& Shape228 =  Shape();
LineSet& LineSet229 =  LineSet();
LineSet229.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate230 =  Coordinate();
Coordinate230.setPoint(new float[]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet229.setCoord(Coordinate230);

//from r_hip to r_knee vertices 2
ColorRGBA& ColorRGBA231 =  ColorRGBA();
ColorRGBA231.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet229.addChild(&ColorRGBA231);

Shape228.setGeometry(&LineSet229);

HAnimSegment224.addChild(&Shape228);

HAnimSite& HAnimSite232 =  HAnimSite();
HAnimSite232.X3DNode::setName(CString("r_lateral_malleolus"));
HAnimSite232.setDEF(CString("hanim_r_lateral_malleolus"));
HAnimSite232.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
TouchSensor& TouchSensor233 =  TouchSensor();
TouchSensor233.setDescription(CString("HAnimSite r_lateral_malleolus"));
HAnimSite232.addChild(&TouchSensor233);

Shape& Shape234 =  Shape();
Shape234.setUSE(CString("HAnimSiteShape"));
HAnimSite232.addChild(&Shape234);

HAnimSegment224.addChild(&HAnimSite232);

HAnimSite& HAnimSite235 =  HAnimSite();
HAnimSite235.X3DNode::setName(CString("r_medial_malleolus"));
HAnimSite235.setDEF(CString("hanim_r_medial_malleolus"));
HAnimSite235.setTranslation(new float[]{-0.0591,0.076,-0.0928});
TouchSensor& TouchSensor236 =  TouchSensor();
TouchSensor236.setDescription(CString("HAnimSite r_medial_malleolus"));
HAnimSite235.addChild(&TouchSensor236);

Shape& Shape237 =  Shape();
Shape237.setUSE(CString("HAnimSiteShape"));
HAnimSite235.addChild(&Shape237);

HAnimSegment224.addChild(&HAnimSite235);

HAnimSite& HAnimSite238 =  HAnimSite();
HAnimSite238.X3DNode::setName(CString("r_tibiale"));
HAnimSite238.setDEF(CString("hanim_r_tibiale"));
TouchSensor& TouchSensor239 =  TouchSensor();
TouchSensor239.setDescription(CString("HAnimSite r_tibiale"));
HAnimSite238.addChild(&TouchSensor239);

Shape& Shape240 =  Shape();
Shape240.setUSE(CString("HAnimSiteShape"));
HAnimSite238.addChild(&Shape240);

HAnimSegment224.addChild(&HAnimSite238);

HAnimJoint223.addChildren(&HAnimSegment224);

HAnimJoint& HAnimJoint241 =  HAnimJoint();
HAnimJoint241.X3DNode::setName(CString("r_knee"));
HAnimJoint241.setDEF(CString("hanim_r_knee"));
HAnimJoint241.setCenter(new float[]{-0.0867,0.4913,0.0318});
HAnimSegment& HAnimSegment242 =  HAnimSegment();
HAnimSegment242.X3DNode::setName(CString("r_calf"));
HAnimSegment242.setDEF(CString("hanim_r_calf"));
Transform& Transform243 =  Transform();
Transform243.setTranslation(new float[]{-0.0867,0.4913,0.0318});
Transform& Transform244 =  Transform();
//Empty Transform
Shape& Shape245 =  Shape();
Shape245.setUSE(CString("HAnimJointShape"));
Transform244.addChild(&Shape245);

Transform243.addChild(&Transform244);

HAnimSegment242.addChild(&Transform243);

Shape& Shape246 =  Shape();
LineSet& LineSet247 =  LineSet();
LineSet247.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate248 =  Coordinate();
Coordinate248.setPoint(new float[]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet247.setCoord(Coordinate248);

//from r_knee to r_talocrural vertices 2
ColorRGBA& ColorRGBA249 =  ColorRGBA();
ColorRGBA249.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet247.addChild(&ColorRGBA249);

Shape246.setGeometry(&LineSet247);

HAnimSegment242.addChild(&Shape246);

HAnimSite& HAnimSite250 =  HAnimSite();
HAnimSite250.X3DNode::setName(CString("r_calcaneus_posterior"));
HAnimSite250.setDEF(CString("hanim_r_calcaneus_posterior"));
HAnimSite250.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
TouchSensor& TouchSensor251 =  TouchSensor();
TouchSensor251.setDescription(CString("HAnimSite r_calcaneus_posterior"));
HAnimSite250.addChild(&TouchSensor251);

Shape& Shape252 =  Shape();
Shape252.setUSE(CString("HAnimSiteShape"));
HAnimSite250.addChild(&Shape252);

HAnimSegment242.addChild(&HAnimSite250);

HAnimSite& HAnimSite253 =  HAnimSite();
HAnimSite253.X3DNode::setName(CString("r_sphyrion"));
HAnimSite253.setDEF(CString("hanim_r_sphyrion"));
HAnimSite253.setTranslation(new float[]{-0.0603,0.061,-0.1002});
TouchSensor& TouchSensor254 =  TouchSensor();
TouchSensor254.setDescription(CString("HAnimSite r_sphyrion"));
HAnimSite253.addChild(&TouchSensor254);

Shape& Shape255 =  Shape();
Shape255.setUSE(CString("HAnimSiteShape"));
HAnimSite253.addChild(&Shape255);

HAnimSegment242.addChild(&HAnimSite253);

HAnimJoint241.addChildren(&HAnimSegment242);

HAnimJoint& HAnimJoint256 =  HAnimJoint();
HAnimJoint256.X3DNode::setName(CString("r_talocrural"));
HAnimJoint256.setDEF(CString("hanim_r_talocrural"));
HAnimJoint256.setCenter(new float[]{-0.0801,0.0712,-0.0766});
HAnimSegment& HAnimSegment257 =  HAnimSegment();
HAnimSegment257.X3DNode::setName(CString("r_talus"));
HAnimSegment257.setDEF(CString("hanim_r_talus"));
Transform& Transform258 =  Transform();
Transform258.setScale(new float[]{0.15,0.15,0.15});
Transform258.setTranslation(new float[]{-0.05,0.06,-0.025});
Transform258.setRotation(new float[]{1,0,0,-1.57});
//Transform right foot
Transform& Transform259 =  Transform();
//Empty Transform right foot
Shape& Shape260 =  Shape();
Shape260.setUSE(CString("HAnimJointShape"));
Transform259.addChild(&Shape260);

Transform258.addChild(&Transform259);

HAnimSegment257.addChild(&Transform258);

Shape& Shape261 =  Shape();
LineSet& LineSet262 =  LineSet();
LineSet262.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate263 =  Coordinate();
Coordinate263.setPoint(new float[]{-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608}, 6);
LineSet262.setCoord(Coordinate263);

//from r_talocrural to r_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA264 =  ColorRGBA();
ColorRGBA264.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet262.addChild(&ColorRGBA264);

Shape261.setGeometry(&LineSet262);

HAnimSegment257.addChild(&Shape261);

HAnimJoint256.addChildren(&HAnimSegment257);

HAnimJoint& HAnimJoint265 =  HAnimJoint();
HAnimJoint265.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint265.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint265.setCenter(new float[]{-0.08,0.0175,-0.0608});
HAnimSegment& HAnimSegment266 =  HAnimSegment();
HAnimSegment266.X3DNode::setName(CString("r_metatarsal_2"));
HAnimSegment266.setDEF(CString("hanim_r_metatarsal_2"));
Transform& Transform267 =  Transform();
Transform267.setTranslation(new float[]{-0.08,0.0175,-0.0608});
Transform& Transform268 =  Transform();
//Empty Transform
Shape& Shape269 =  Shape();
Shape269.setUSE(CString("HAnimJointShape"));
Transform268.addChild(&Shape269);

Transform267.addChild(&Transform268);

HAnimSegment266.addChild(&Transform267);

Shape& Shape270 =  Shape();
LineSet& LineSet271 =  LineSet();
LineSet271.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate272 =  Coordinate();
Coordinate272.setPoint(new float[]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004}, 6);
LineSet271.setCoord(Coordinate272);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA273 =  ColorRGBA();
ColorRGBA273.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet271.addChild(&ColorRGBA273);

Shape270.setGeometry(&LineSet271);

HAnimSegment266.addChild(&Shape270);

HAnimSite& HAnimSite274 =  HAnimSite();
HAnimSite274.X3DNode::setName(CString("r_metatarsal_phalanx_1"));
HAnimSite274.setDEF(CString("hanim_r_metatarsal_phalanx_1"));
TouchSensor& TouchSensor275 =  TouchSensor();
TouchSensor275.setDescription(CString("HAnimSite r_metatarsal_phalanx_1"));
HAnimSite274.addChild(&TouchSensor275);

Shape& Shape276 =  Shape();
Shape276.setUSE(CString("HAnimSiteShape"));
HAnimSite274.addChild(&Shape276);

HAnimSegment266.addChild(&HAnimSite274);

HAnimSite& HAnimSite277 =  HAnimSite();
HAnimSite277.X3DNode::setName(CString("r_metatarsal_phalanx_5"));
HAnimSite277.setDEF(CString("hanim_r_metatarsal_phalanx_5"));
TouchSensor& TouchSensor278 =  TouchSensor();
TouchSensor278.setDescription(CString("HAnimSite r_metatarsal_phalanx_5"));
HAnimSite277.addChild(&TouchSensor278);

Shape& Shape279 =  Shape();
Shape279.setUSE(CString("HAnimSiteShape"));
HAnimSite277.addChild(&Shape279);

HAnimSegment266.addChild(&HAnimSite277);

HAnimSite& HAnimSite280 =  HAnimSite();
HAnimSite280.X3DNode::setName(CString("r_tarsal_distal_phalanx_1_tip"));
HAnimSite280.setDEF(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor281 =  TouchSensor();
TouchSensor281.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_1_tip"));
HAnimSite280.addChild(&TouchSensor281);

Shape& Shape282 =  Shape();
Shape282.setUSE(CString("HAnimSiteShape"));
HAnimSite280.addChild(&Shape282);

HAnimSegment266.addChild(&HAnimSite280);

HAnimSite& HAnimSite283 =  HAnimSite();
HAnimSite283.X3DNode::setName(CString("r_tarsal_distal_phalanx_2_tip"));
HAnimSite283.setDEF(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimSite283.setTranslation(new float[]{-0.0883,0.0134,0.1383});
TouchSensor& TouchSensor284 =  TouchSensor();
TouchSensor284.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_2_tip"));
HAnimSite283.addChild(&TouchSensor284);

Shape& Shape285 =  Shape();
Shape285.setUSE(CString("HAnimSiteShape"));
HAnimSite283.addChild(&Shape285);

HAnimSegment266.addChild(&HAnimSite283);

HAnimSite& HAnimSite286 =  HAnimSite();
HAnimSite286.X3DNode::setName(CString("r_tarsal_distal_phalanx_3_tip"));
HAnimSite286.setDEF(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor287 =  TouchSensor();
TouchSensor287.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_3_tip"));
HAnimSite286.addChild(&TouchSensor287);

Shape& Shape288 =  Shape();
Shape288.setUSE(CString("HAnimSiteShape"));
HAnimSite286.addChild(&Shape288);

HAnimSegment266.addChild(&HAnimSite286);

HAnimSite& HAnimSite289 =  HAnimSite();
HAnimSite289.X3DNode::setName(CString("r_tarsal_distal_phalanx_4_tip"));
HAnimSite289.setDEF(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor290 =  TouchSensor();
TouchSensor290.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_4_tip"));
HAnimSite289.addChild(&TouchSensor290);

Shape& Shape291 =  Shape();
Shape291.setUSE(CString("HAnimSiteShape"));
HAnimSite289.addChild(&Shape291);

HAnimSegment266.addChild(&HAnimSite289);

HAnimSite& HAnimSite292 =  HAnimSite();
HAnimSite292.X3DNode::setName(CString("r_tarsal_distal_phalanx_5_tip"));
HAnimSite292.setDEF(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor293 =  TouchSensor();
TouchSensor293.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_5_tip"));
HAnimSite292.addChild(&TouchSensor293);

Shape& Shape294 =  Shape();
Shape294.setUSE(CString("HAnimSiteShape"));
HAnimSite292.addChild(&Shape294);

HAnimSegment266.addChild(&HAnimSite292);

HAnimJoint265.addChildren(&HAnimSegment266);

HAnimJoint& HAnimJoint295 =  HAnimJoint();
HAnimJoint295.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint295.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint295.setCenter(new float[]{-0.0823,0.0064,-0.004});
HAnimSegment& HAnimSegment296 =  HAnimSegment();
HAnimSegment296.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment296.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Transform& Transform297 =  Transform();
Transform297.setTranslation(new float[]{-0.0823,0.0064,-0.004});
Transform& Transform298 =  Transform();
//Empty Transform
Shape& Shape299 =  Shape();
Shape299.setUSE(CString("HAnimJointShape"));
Transform298.addChild(&Shape299);

Transform297.addChild(&Transform298);

HAnimSegment296.addChild(&Transform297);

Shape& Shape300 =  Shape();
LineSet& LineSet301 =  LineSet();
LineSet301.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate302 =  Coordinate();
Coordinate302.setPoint(new float[]{-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216}, 6);
LineSet301.setCoord(Coordinate302);

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA303 =  ColorRGBA();
ColorRGBA303.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet301.addChild(&ColorRGBA303);

Shape300.setGeometry(&LineSet301);

HAnimSegment296.addChild(&Shape300);

HAnimJoint295.addChildren(&HAnimSegment296);

HAnimJoint& HAnimJoint304 =  HAnimJoint();
HAnimJoint304.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint304.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint304.setCenter(new float[]{-0.0841,0.0013,0.0216});
HAnimJoint295.addChildren(&HAnimJoint304);

HAnimJoint265.addChildren(&HAnimJoint295);

HAnimJoint256.addChildren(&HAnimJoint265);

HAnimJoint241.addChildren(&HAnimJoint256);

HAnimJoint223.addChildren(&HAnimJoint241);

HAnimJoint104.addChildren(&HAnimJoint223);

HAnimJoint52.addChildren(&HAnimJoint104);

HAnimJoint& HAnimJoint305 =  HAnimJoint();
HAnimJoint305.X3DNode::setName(CString("vl5"));
HAnimJoint305.setDEF(CString("hanim_vl5"));
HAnimJoint305.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimSegment& HAnimSegment306 =  HAnimSegment();
HAnimSegment306.X3DNode::setName(CString("l5"));
HAnimSegment306.setDEF(CString("hanim_l5"));
Transform& Transform307 =  Transform();
Transform307.setTranslation(new float[]{0.0028,1.0568,-0.0776});
Transform& Transform308 =  Transform();
//Empty Transform
Shape& Shape309 =  Shape();
Shape309.setUSE(CString("HAnimJointShape"));
Transform308.addChild(&Shape309);

Transform307.addChild(&Transform308);

HAnimSegment306.addChild(&Transform307);

Shape& Shape310 =  Shape();
LineSet& LineSet311 =  LineSet();
LineSet311.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate312 =  Coordinate();
Coordinate312.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet311.setCoord(Coordinate312);

//from vl5 to vl4 vertices 2
ColorRGBA& ColorRGBA313 =  ColorRGBA();
ColorRGBA313.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet311.addChild(&ColorRGBA313);

Shape310.setGeometry(&LineSet311);

HAnimSegment306.addChild(&Shape310);

HAnimJoint305.addChildren(&HAnimSegment306);

HAnimJoint& HAnimJoint314 =  HAnimJoint();
HAnimJoint314.X3DNode::setName(CString("vl4"));
HAnimJoint314.setDEF(CString("hanim_vl4"));
HAnimJoint314.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimSegment& HAnimSegment315 =  HAnimSegment();
HAnimSegment315.X3DNode::setName(CString("l4"));
HAnimSegment315.setDEF(CString("hanim_l4"));
Transform& Transform316 =  Transform();
Transform316.setTranslation(new float[]{0.0035,1.0925,-0.0787});
Transform& Transform317 =  Transform();
//Empty Transform
Shape& Shape318 =  Shape();
Shape318.setUSE(CString("HAnimJointShape"));
Transform317.addChild(&Shape318);

Transform316.addChild(&Transform317);

HAnimSegment315.addChild(&Transform316);

Shape& Shape319 =  Shape();
LineSet& LineSet320 =  LineSet();
LineSet320.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate321 =  Coordinate();
Coordinate321.setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet320.setCoord(Coordinate321);

//from vl4 to vl3 vertices 2
ColorRGBA& ColorRGBA322 =  ColorRGBA();
ColorRGBA322.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet320.addChild(&ColorRGBA322);

Shape319.setGeometry(&LineSet320);

HAnimSegment315.addChild(&Shape319);

HAnimJoint314.addChildren(&HAnimSegment315);

HAnimJoint& HAnimJoint323 =  HAnimJoint();
HAnimJoint323.X3DNode::setName(CString("vl3"));
HAnimJoint323.setDEF(CString("hanim_vl3"));
HAnimJoint323.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimSegment& HAnimSegment324 =  HAnimSegment();
HAnimSegment324.X3DNode::setName(CString("l3"));
HAnimSegment324.setDEF(CString("hanim_l3"));
Transform& Transform325 =  Transform();
Transform325.setTranslation(new float[]{0.0041,1.1276,-0.0796});
Transform& Transform326 =  Transform();
//Empty Transform
Shape& Shape327 =  Shape();
Shape327.setUSE(CString("HAnimJointShape"));
Transform326.addChild(&Shape327);

Transform325.addChild(&Transform326);

HAnimSegment324.addChild(&Transform325);

Shape& Shape328 =  Shape();
LineSet& LineSet329 =  LineSet();
LineSet329.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate330 =  Coordinate();
Coordinate330.setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet329.setCoord(Coordinate330);

//from vl3 to vl2 vertices 2
ColorRGBA& ColorRGBA331 =  ColorRGBA();
ColorRGBA331.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet329.addChild(&ColorRGBA331);

Shape328.setGeometry(&LineSet329);

HAnimSegment324.addChild(&Shape328);

HAnimSite& HAnimSite332 =  HAnimSite();
HAnimSite332.X3DNode::setName(CString("l_rib10"));
HAnimSite332.setDEF(CString("hanim_l_rib10"));
HAnimSite332.setTranslation(new float[]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor333 =  TouchSensor();
TouchSensor333.setDescription(CString("HAnimSite l_rib10"));
HAnimSite332.addChild(&TouchSensor333);

Shape& Shape334 =  Shape();
Shape334.setUSE(CString("HAnimSiteShape"));
HAnimSite332.addChild(&Shape334);

HAnimSegment324.addChild(&HAnimSite332);

HAnimSite& HAnimSite335 =  HAnimSite();
HAnimSite335.X3DNode::setName(CString("r_rib10"));
HAnimSite335.setDEF(CString("hanim_r_rib10"));
HAnimSite335.setTranslation(new float[]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor336 =  TouchSensor();
TouchSensor336.setDescription(CString("HAnimSite r_rib10"));
HAnimSite335.addChild(&TouchSensor336);

Shape& Shape337 =  Shape();
Shape337.setUSE(CString("HAnimSiteShape"));
HAnimSite335.addChild(&Shape337);

HAnimSegment324.addChild(&HAnimSite335);

HAnimSite& HAnimSite338 =  HAnimSite();
HAnimSite338.X3DNode::setName(CString("spine_2_middle_back"));
HAnimSite338.setDEF(CString("hanim_spine_2_middle_back"));
TouchSensor& TouchSensor339 =  TouchSensor();
TouchSensor339.setDescription(CString("HAnimSite spine_2_middle_back"));
HAnimSite338.addChild(&TouchSensor339);

Shape& Shape340 =  Shape();
Shape340.setUSE(CString("HAnimSiteShape"));
HAnimSite338.addChild(&Shape340);

HAnimSegment324.addChild(&HAnimSite338);

HAnimJoint323.addChildren(&HAnimSegment324);

HAnimJoint& HAnimJoint341 =  HAnimJoint();
HAnimJoint341.X3DNode::setName(CString("vl2"));
HAnimJoint341.setDEF(CString("hanim_vl2"));
HAnimJoint341.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimSegment& HAnimSegment342 =  HAnimSegment();
HAnimSegment342.X3DNode::setName(CString("l2"));
HAnimSegment342.setDEF(CString("hanim_l2"));
Transform& Transform343 =  Transform();
Transform343.setTranslation(new float[]{0.0045,1.1546,-0.08});
Transform& Transform344 =  Transform();
//Empty Transform
Shape& Shape345 =  Shape();
Shape345.setUSE(CString("HAnimJointShape"));
Transform344.addChild(&Shape345);

Transform343.addChild(&Transform344);

HAnimSegment342.addChild(&Transform343);

Shape& Shape346 =  Shape();
LineSet& LineSet347 =  LineSet();
LineSet347.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate348 =  Coordinate();
Coordinate348.setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet347.setCoord(Coordinate348);

//from vl2 to vl1 vertices 2
ColorRGBA& ColorRGBA349 =  ColorRGBA();
ColorRGBA349.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet347.addChild(&ColorRGBA349);

Shape346.setGeometry(&LineSet347);

HAnimSegment342.addChild(&Shape346);

HAnimJoint341.addChildren(&HAnimSegment342);

HAnimJoint& HAnimJoint350 =  HAnimJoint();
HAnimJoint350.X3DNode::setName(CString("vl1"));
HAnimJoint350.setDEF(CString("hanim_vl1"));
HAnimJoint350.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimSegment& HAnimSegment351 =  HAnimSegment();
HAnimSegment351.X3DNode::setName(CString("l1"));
HAnimSegment351.setDEF(CString("hanim_l1"));
Transform& Transform352 =  Transform();
Transform352.setTranslation(new float[]{0.0048,1.1912,-0.0805});
Transform& Transform353 =  Transform();
//Empty Transform
Shape& Shape354 =  Shape();
Shape354.setUSE(CString("HAnimJointShape"));
Transform353.addChild(&Shape354);

Transform352.addChild(&Transform353);

HAnimSegment351.addChild(&Transform352);

Shape& Shape355 =  Shape();
LineSet& LineSet356 =  LineSet();
LineSet356.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate357 =  Coordinate();
Coordinate357.setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet356.setCoord(Coordinate357);

//from vl1 to vt12 vertices 2
ColorRGBA& ColorRGBA358 =  ColorRGBA();
ColorRGBA358.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet356.addChild(&ColorRGBA358);

Shape355.setGeometry(&LineSet356);

HAnimSegment351.addChild(&Shape355);

HAnimJoint350.addChildren(&HAnimSegment351);

HAnimJoint& HAnimJoint359 =  HAnimJoint();
HAnimJoint359.X3DNode::setName(CString("vt12"));
HAnimJoint359.setDEF(CString("hanim_vt12"));
HAnimJoint359.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimSegment& HAnimSegment360 =  HAnimSegment();
HAnimSegment360.X3DNode::setName(CString("t12"));
HAnimSegment360.setDEF(CString("hanim_t12"));
Transform& Transform361 =  Transform();
Transform361.setTranslation(new float[]{0.0051,1.2278,-0.0808});
Transform& Transform362 =  Transform();
//Empty Transform
Shape& Shape363 =  Shape();
Shape363.setUSE(CString("HAnimJointShape"));
Transform362.addChild(&Shape363);

Transform361.addChild(&Transform362);

HAnimSegment360.addChild(&Transform361);

Shape& Shape364 =  Shape();
LineSet& LineSet365 =  LineSet();
LineSet365.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate366 =  Coordinate();
Coordinate366.setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet365.setCoord(Coordinate366);

//from vt12 to vt11 vertices 2
ColorRGBA& ColorRGBA367 =  ColorRGBA();
ColorRGBA367.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet365.addChild(&ColorRGBA367);

Shape364.setGeometry(&LineSet365);

HAnimSegment360.addChild(&Shape364);

HAnimJoint359.addChildren(&HAnimSegment360);

HAnimJoint& HAnimJoint368 =  HAnimJoint();
HAnimJoint368.X3DNode::setName(CString("vt11"));
HAnimJoint368.setDEF(CString("hanim_vt11"));
HAnimJoint368.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimSegment& HAnimSegment369 =  HAnimSegment();
HAnimSegment369.X3DNode::setName(CString("t11"));
HAnimSegment369.setDEF(CString("hanim_t11"));
Transform& Transform370 =  Transform();
Transform370.setTranslation(new float[]{0.0053,1.2679,-0.081});
Transform& Transform371 =  Transform();
//Empty Transform
Shape& Shape372 =  Shape();
Shape372.setUSE(CString("HAnimJointShape"));
Transform371.addChild(&Shape372);

Transform370.addChild(&Transform371);

HAnimSegment369.addChild(&Transform370);

Shape& Shape373 =  Shape();
LineSet& LineSet374 =  LineSet();
LineSet374.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate375 =  Coordinate();
Coordinate375.setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet374.setCoord(Coordinate375);

//from vt11 to vt10 vertices 2
ColorRGBA& ColorRGBA376 =  ColorRGBA();
ColorRGBA376.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet374.addChild(&ColorRGBA376);

Shape373.setGeometry(&LineSet374);

HAnimSegment369.addChild(&Shape373);

HAnimSite& HAnimSite377 =  HAnimSite();
HAnimSite377.X3DNode::setName(CString("substernale"));
HAnimSite377.setDEF(CString("hanim_substernale"));
HAnimSite377.setTranslation(new float[]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor378 =  TouchSensor();
TouchSensor378.setDescription(CString("HAnimSite substernale"));
HAnimSite377.addChild(&TouchSensor378);

Shape& Shape379 =  Shape();
Shape379.setUSE(CString("HAnimSiteShape"));
HAnimSite377.addChild(&Shape379);

HAnimSegment369.addChild(&HAnimSite377);

HAnimJoint368.addChildren(&HAnimSegment369);

HAnimJoint& HAnimJoint380 =  HAnimJoint();
HAnimJoint380.X3DNode::setName(CString("vt10"));
HAnimJoint380.setDEF(CString("hanim_vt10"));
HAnimJoint380.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimSegment& HAnimSegment381 =  HAnimSegment();
HAnimSegment381.X3DNode::setName(CString("t10"));
HAnimSegment381.setDEF(CString("hanim_t10"));
Transform& Transform382 =  Transform();
Transform382.setTranslation(new float[]{0.0056,1.2848,-0.0822});
Transform& Transform383 =  Transform();
//Empty Transform
Shape& Shape384 =  Shape();
Shape384.setUSE(CString("HAnimJointShape"));
Transform383.addChild(&Shape384);

Transform382.addChild(&Transform383);

HAnimSegment381.addChild(&Transform382);

Shape& Shape385 =  Shape();
LineSet& LineSet386 =  LineSet();
LineSet386.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate387 =  Coordinate();
Coordinate387.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet386.setCoord(Coordinate387);

//from vt10 to vt9 vertices 2
ColorRGBA& ColorRGBA388 =  ColorRGBA();
ColorRGBA388.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet386.addChild(&ColorRGBA388);

Shape385.setGeometry(&LineSet386);

HAnimSegment381.addChild(&Shape385);

HAnimSite& HAnimSite389 =  HAnimSite();
HAnimSite389.X3DNode::setName(CString("l_thelion"));
HAnimSite389.setDEF(CString("hanim_l_thelion"));
HAnimSite389.setTranslation(new float[]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor390 =  TouchSensor();
TouchSensor390.setDescription(CString("HAnimSite l_thelion"));
HAnimSite389.addChild(&TouchSensor390);

Shape& Shape391 =  Shape();
Shape391.setUSE(CString("HAnimSiteShape"));
HAnimSite389.addChild(&Shape391);

HAnimSegment381.addChild(&HAnimSite389);

HAnimSite& HAnimSite392 =  HAnimSite();
HAnimSite392.X3DNode::setName(CString("r_thelion"));
HAnimSite392.setDEF(CString("hanim_r_thelion"));
HAnimSite392.setTranslation(new float[]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor393 =  TouchSensor();
TouchSensor393.setDescription(CString("HAnimSite r_thelion"));
HAnimSite392.addChild(&TouchSensor393);

Shape& Shape394 =  Shape();
Shape394.setUSE(CString("HAnimSiteShape"));
HAnimSite392.addChild(&Shape394);

HAnimSegment381.addChild(&HAnimSite392);

HAnimJoint380.addChildren(&HAnimSegment381);

HAnimJoint& HAnimJoint395 =  HAnimJoint();
HAnimJoint395.X3DNode::setName(CString("vt9"));
HAnimJoint395.setDEF(CString("hanim_vt9"));
HAnimJoint395.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimSegment& HAnimSegment396 =  HAnimSegment();
HAnimSegment396.X3DNode::setName(CString("t9"));
HAnimSegment396.setDEF(CString("hanim_t9"));
Transform& Transform397 =  Transform();
Transform397.setTranslation(new float[]{0.0057,1.3126,-0.0838});
Transform& Transform398 =  Transform();
//Empty Transform
Shape& Shape399 =  Shape();
Shape399.setUSE(CString("HAnimJointShape"));
Transform398.addChild(&Shape399);

Transform397.addChild(&Transform398);

HAnimSegment396.addChild(&Transform397);

Shape& Shape400 =  Shape();
LineSet& LineSet401 =  LineSet();
LineSet401.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate402 =  Coordinate();
Coordinate402.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet401.setCoord(Coordinate402);

//from vt9 to vt8 vertices 2
ColorRGBA& ColorRGBA403 =  ColorRGBA();
ColorRGBA403.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet401.addChild(&ColorRGBA403);

Shape400.setGeometry(&LineSet401);

HAnimSegment396.addChild(&Shape400);

HAnimJoint395.addChildren(&HAnimSegment396);

HAnimJoint& HAnimJoint404 =  HAnimJoint();
HAnimJoint404.X3DNode::setName(CString("vt8"));
HAnimJoint404.setDEF(CString("hanim_vt8"));
HAnimJoint404.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimSegment& HAnimSegment405 =  HAnimSegment();
HAnimSegment405.X3DNode::setName(CString("t8"));
HAnimSegment405.setDEF(CString("hanim_t8"));
Transform& Transform406 =  Transform();
Transform406.setTranslation(new float[]{0.0057,1.3382,-0.0845});
Transform& Transform407 =  Transform();
//Empty Transform
Shape& Shape408 =  Shape();
Shape408.setUSE(CString("HAnimJointShape"));
Transform407.addChild(&Shape408);

Transform406.addChild(&Transform407);

HAnimSegment405.addChild(&Transform406);

Shape& Shape409 =  Shape();
LineSet& LineSet410 =  LineSet();
LineSet410.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate411 =  Coordinate();
Coordinate411.setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet410.setCoord(Coordinate411);

//from vt8 to vt7 vertices 2
ColorRGBA& ColorRGBA412 =  ColorRGBA();
ColorRGBA412.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet410.addChild(&ColorRGBA412);

Shape409.setGeometry(&LineSet410);

HAnimSegment405.addChild(&Shape409);

HAnimJoint404.addChildren(&HAnimSegment405);

HAnimJoint& HAnimJoint413 =  HAnimJoint();
HAnimJoint413.X3DNode::setName(CString("vt7"));
HAnimJoint413.setDEF(CString("hanim_vt7"));
HAnimJoint413.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimSegment& HAnimSegment414 =  HAnimSegment();
HAnimSegment414.X3DNode::setName(CString("t7"));
HAnimSegment414.setDEF(CString("hanim_t7"));
Transform& Transform415 =  Transform();
Transform415.setTranslation(new float[]{0.0058,1.3625,-0.0833});
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
Coordinate420.setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet419.setCoord(Coordinate420);

//from vt7 to vt6 vertices 2
ColorRGBA& ColorRGBA421 =  ColorRGBA();
ColorRGBA421.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet419.addChild(&ColorRGBA421);

Shape418.setGeometry(&LineSet419);

HAnimSegment414.addChild(&Shape418);

HAnimSite& HAnimSite422 =  HAnimSite();
HAnimSite422.X3DNode::setName(CString("l_chest_midsagittal_plane"));
HAnimSite422.setDEF(CString("hanim_l_chest_midsagittal_plane"));
TouchSensor& TouchSensor423 =  TouchSensor();
TouchSensor423.setDescription(CString("HAnimSite l_chest_midsagittal_plane"));
HAnimSite422.addChild(&TouchSensor423);

Shape& Shape424 =  Shape();
Shape424.setUSE(CString("HAnimSiteShape"));
HAnimSite422.addChild(&Shape424);

HAnimSegment414.addChild(&HAnimSite422);

HAnimSite& HAnimSite425 =  HAnimSite();
HAnimSite425.X3DNode::setName(CString("mesosternale"));
HAnimSite425.setDEF(CString("hanim_mesosternale"));
TouchSensor& TouchSensor426 =  TouchSensor();
TouchSensor426.setDescription(CString("HAnimSite mesosternale"));
HAnimSite425.addChild(&TouchSensor426);

Shape& Shape427 =  Shape();
Shape427.setUSE(CString("HAnimSiteShape"));
HAnimSite425.addChild(&Shape427);

HAnimSegment414.addChild(&HAnimSite425);

HAnimSite& HAnimSite428 =  HAnimSite();
HAnimSite428.X3DNode::setName(CString("r_chest_midsagittal_plane"));
HAnimSite428.setDEF(CString("hanim_r_chest_midsagittal_plane"));
TouchSensor& TouchSensor429 =  TouchSensor();
TouchSensor429.setDescription(CString("HAnimSite r_chest_midsagittal_plane"));
HAnimSite428.addChild(&TouchSensor429);

Shape& Shape430 =  Shape();
Shape430.setUSE(CString("HAnimSiteShape"));
HAnimSite428.addChild(&Shape430);

HAnimSegment414.addChild(&HAnimSite428);

HAnimSite& HAnimSite431 =  HAnimSite();
HAnimSite431.X3DNode::setName(CString("rear_center_midsagittal_plane"));
HAnimSite431.setDEF(CString("hanim_rear_center_midsagittal_plane"));
TouchSensor& TouchSensor432 =  TouchSensor();
TouchSensor432.setDescription(CString("HAnimSite rear_center_midsagittal_plane"));
HAnimSite431.addChild(&TouchSensor432);

Shape& Shape433 =  Shape();
Shape433.setUSE(CString("HAnimSiteShape"));
HAnimSite431.addChild(&Shape433);

HAnimSegment414.addChild(&HAnimSite431);

HAnimJoint413.addChildren(&HAnimSegment414);

HAnimJoint& HAnimJoint434 =  HAnimJoint();
HAnimJoint434.X3DNode::setName(CString("vt6"));
HAnimJoint434.setDEF(CString("hanim_vt6"));
HAnimJoint434.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimSegment& HAnimSegment435 =  HAnimSegment();
HAnimSegment435.X3DNode::setName(CString("t6"));
HAnimSegment435.setDEF(CString("hanim_t6"));
Transform& Transform436 =  Transform();
Transform436.setTranslation(new float[]{0.0059,1.3866,-0.08});
Transform& Transform437 =  Transform();
//Empty Transform
Shape& Shape438 =  Shape();
Shape438.setUSE(CString("HAnimJointShape"));
Transform437.addChild(&Shape438);

Transform436.addChild(&Transform437);

HAnimSegment435.addChild(&Transform436);

Shape& Shape439 =  Shape();
LineSet& LineSet440 =  LineSet();
LineSet440.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate441 =  Coordinate();
Coordinate441.setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet440.setCoord(Coordinate441);

//from vt6 to vt5 vertices 2
ColorRGBA& ColorRGBA442 =  ColorRGBA();
ColorRGBA442.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet440.addChild(&ColorRGBA442);

Shape439.setGeometry(&LineSet440);

HAnimSegment435.addChild(&Shape439);

HAnimSite& HAnimSite443 =  HAnimSite();
HAnimSite443.X3DNode::setName(CString("spine_1_middle_back"));
HAnimSite443.setDEF(CString("hanim_spine_1_middle_back"));
TouchSensor& TouchSensor444 =  TouchSensor();
TouchSensor444.setDescription(CString("HAnimSite spine_1_middle_back"));
HAnimSite443.addChild(&TouchSensor444);

Shape& Shape445 =  Shape();
Shape445.setUSE(CString("HAnimSiteShape"));
HAnimSite443.addChild(&Shape445);

HAnimSegment435.addChild(&HAnimSite443);

HAnimJoint434.addChildren(&HAnimSegment435);

HAnimJoint& HAnimJoint446 =  HAnimJoint();
HAnimJoint446.X3DNode::setName(CString("vt5"));
HAnimJoint446.setDEF(CString("hanim_vt5"));
HAnimJoint446.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimSegment& HAnimSegment447 =  HAnimSegment();
HAnimSegment447.X3DNode::setName(CString("t5"));
HAnimSegment447.setDEF(CString("hanim_t5"));
Transform& Transform448 =  Transform();
Transform448.setTranslation(new float[]{0.006,1.4102,-0.0745});
Transform& Transform449 =  Transform();
//Empty Transform
Shape& Shape450 =  Shape();
Shape450.setUSE(CString("HAnimJointShape"));
Transform449.addChild(&Shape450);

Transform448.addChild(&Transform449);

HAnimSegment447.addChild(&Transform448);

Shape& Shape451 =  Shape();
LineSet& LineSet452 =  LineSet();
LineSet452.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate453 =  Coordinate();
Coordinate453.setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet452.setCoord(Coordinate453);

//from vt5 to vt4 vertices 2
ColorRGBA& ColorRGBA454 =  ColorRGBA();
ColorRGBA454.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet452.addChild(&ColorRGBA454);

Shape451.setGeometry(&LineSet452);

HAnimSegment447.addChild(&Shape451);

HAnimJoint446.addChildren(&HAnimSegment447);

HAnimJoint& HAnimJoint455 =  HAnimJoint();
HAnimJoint455.X3DNode::setName(CString("vt4"));
HAnimJoint455.setDEF(CString("hanim_vt4"));
HAnimJoint455.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimSegment& HAnimSegment456 =  HAnimSegment();
HAnimSegment456.X3DNode::setName(CString("t4"));
HAnimSegment456.setDEF(CString("hanim_t4"));
Transform& Transform457 =  Transform();
Transform457.setTranslation(new float[]{0.0061,1.432,-0.0675});
Transform& Transform458 =  Transform();
//Empty Transform
Shape& Shape459 =  Shape();
Shape459.setUSE(CString("HAnimJointShape"));
Transform458.addChild(&Shape459);

Transform457.addChild(&Transform458);

HAnimSegment456.addChild(&Transform457);

Shape& Shape460 =  Shape();
LineSet& LineSet461 =  LineSet();
LineSet461.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate462 =  Coordinate();
Coordinate462.setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet461.setCoord(Coordinate462);

//from vt4 to vt3 vertices 2
ColorRGBA& ColorRGBA463 =  ColorRGBA();
ColorRGBA463.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet461.addChild(&ColorRGBA463);

Shape460.setGeometry(&LineSet461);

HAnimSegment456.addChild(&Shape460);

HAnimJoint455.addChildren(&HAnimSegment456);

HAnimJoint& HAnimJoint464 =  HAnimJoint();
HAnimJoint464.X3DNode::setName(CString("vt3"));
HAnimJoint464.setDEF(CString("hanim_vt3"));
HAnimJoint464.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimSegment& HAnimSegment465 =  HAnimSegment();
HAnimSegment465.X3DNode::setName(CString("t3"));
HAnimSegment465.setDEF(CString("hanim_t3"));
Transform& Transform466 =  Transform();
Transform466.setTranslation(new float[]{0.0062,1.4583,-0.057});
Transform& Transform467 =  Transform();
//Empty Transform
Shape& Shape468 =  Shape();
Shape468.setUSE(CString("HAnimJointShape"));
Transform467.addChild(&Shape468);

Transform466.addChild(&Transform467);

HAnimSegment465.addChild(&Transform466);

Shape& Shape469 =  Shape();
LineSet& LineSet470 =  LineSet();
LineSet470.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate471 =  Coordinate();
Coordinate471.setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet470.setCoord(Coordinate471);

//from vt3 to vt2 vertices 2
ColorRGBA& ColorRGBA472 =  ColorRGBA();
ColorRGBA472.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet470.addChild(&ColorRGBA472);

Shape469.setGeometry(&LineSet470);

HAnimSegment465.addChild(&Shape469);

HAnimJoint464.addChildren(&HAnimSegment465);

HAnimJoint& HAnimJoint473 =  HAnimJoint();
HAnimJoint473.X3DNode::setName(CString("vt2"));
HAnimJoint473.setDEF(CString("hanim_vt2"));
HAnimJoint473.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimSegment& HAnimSegment474 =  HAnimSegment();
HAnimSegment474.X3DNode::setName(CString("t2"));
HAnimSegment474.setDEF(CString("hanim_t2"));
Transform& Transform475 =  Transform();
Transform475.setTranslation(new float[]{0.0063,1.4761,-0.0484});
Transform& Transform476 =  Transform();
//Empty Transform
Shape& Shape477 =  Shape();
Shape477.setUSE(CString("HAnimJointShape"));
Transform476.addChild(&Shape477);

Transform475.addChild(&Transform476);

HAnimSegment474.addChild(&Transform475);

Shape& Shape478 =  Shape();
LineSet& LineSet479 =  LineSet();
LineSet479.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate480 =  Coordinate();
Coordinate480.setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet479.setCoord(Coordinate480);

//from vt2 to vt1 vertices 2
ColorRGBA& ColorRGBA481 =  ColorRGBA();
ColorRGBA481.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet479.addChild(&ColorRGBA481);

Shape478.setGeometry(&LineSet479);

HAnimSegment474.addChild(&Shape478);

HAnimSite& HAnimSite482 =  HAnimSite();
HAnimSite482.X3DNode::setName(CString("cervicale"));
HAnimSite482.setDEF(CString("hanim_cervicale"));
HAnimSite482.setTranslation(new float[]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor483 =  TouchSensor();
TouchSensor483.setDescription(CString("HAnimSite cervicale"));
HAnimSite482.addChild(&TouchSensor483);

Shape& Shape484 =  Shape();
Shape484.setUSE(CString("HAnimSiteShape"));
HAnimSite482.addChild(&Shape484);

HAnimSegment474.addChild(&HAnimSite482);

HAnimSite& HAnimSite485 =  HAnimSite();
HAnimSite485.X3DNode::setName(CString("suprasternale"));
HAnimSite485.setDEF(CString("hanim_suprasternale"));
HAnimSite485.setTranslation(new float[]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor486 =  TouchSensor();
TouchSensor486.setDescription(CString("HAnimSite suprasternale"));
HAnimSite485.addChild(&TouchSensor486);

Shape& Shape487 =  Shape();
Shape487.setUSE(CString("HAnimSiteShape"));
HAnimSite485.addChild(&Shape487);

HAnimSegment474.addChild(&HAnimSite485);

HAnimJoint473.addChildren(&HAnimSegment474);

HAnimJoint& HAnimJoint488 =  HAnimJoint();
HAnimJoint488.X3DNode::setName(CString("vt1"));
HAnimJoint488.setDEF(CString("hanim_vt1"));
HAnimJoint488.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimSegment& HAnimSegment489 =  HAnimSegment();
HAnimSegment489.X3DNode::setName(CString("t1"));
HAnimSegment489.setDEF(CString("hanim_t1"));
Transform& Transform490 =  Transform();
Transform490.setTranslation(new float[]{0.0065,1.4951,-0.0387});
Transform& Transform491 =  Transform();
//Empty Transform
Shape& Shape492 =  Shape();
Shape492.setUSE(CString("HAnimJointShape"));
Transform491.addChild(&Shape492);

Transform490.addChild(&Transform491);

HAnimSegment489.addChild(&Transform490);

Shape& Shape493 =  Shape();
LineSet& LineSet494 =  LineSet();
LineSet494.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate495 =  Coordinate();
Coordinate495.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet494.setCoord(Coordinate495);

//from vt1 to vc7 vertices 2
ColorRGBA& ColorRGBA496 =  ColorRGBA();
ColorRGBA496.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet494.addChild(&ColorRGBA496);

Shape493.setGeometry(&LineSet494);

HAnimSegment489.addChild(&Shape493);

HAnimSite& HAnimSite497 =  HAnimSite();
HAnimSite497.X3DNode::setName(CString("l_neck_base"));
HAnimSite497.setDEF(CString("hanim_l_neck_base"));
HAnimSite497.setTranslation(new float[]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor498 =  TouchSensor();
TouchSensor498.setDescription(CString("HAnimSite l_neck_base"));
HAnimSite497.addChild(&TouchSensor498);

Shape& Shape499 =  Shape();
Shape499.setUSE(CString("HAnimSiteShape"));
HAnimSite497.addChild(&Shape499);

HAnimSegment489.addChild(&HAnimSite497);

HAnimSite& HAnimSite500 =  HAnimSite();
HAnimSite500.X3DNode::setName(CString("r_neck_base"));
HAnimSite500.setDEF(CString("hanim_r_neck_base"));
HAnimSite500.setTranslation(new float[]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor501 =  TouchSensor();
TouchSensor501.setDescription(CString("HAnimSite r_neck_base"));
HAnimSite500.addChild(&TouchSensor501);

Shape& Shape502 =  Shape();
Shape502.setUSE(CString("HAnimSiteShape"));
HAnimSite500.addChild(&Shape502);

HAnimSegment489.addChild(&HAnimSite500);

Shape& Shape503 =  Shape();
LineSet& LineSet504 =  LineSet();
LineSet504.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate505 =  Coordinate();
Coordinate505.setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet504.setCoord(Coordinate505);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA& ColorRGBA506 =  ColorRGBA();
ColorRGBA506.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet504.addChild(&ColorRGBA506);

Shape503.setGeometry(&LineSet504);

HAnimSegment489.addChild(&Shape503);

HAnimSite& HAnimSite507 =  HAnimSite();
HAnimSite507.X3DNode::setName(CString("l_acromion"));
HAnimSite507.setDEF(CString("hanim_l_acromion"));
HAnimSite507.setTranslation(new float[]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor508 =  TouchSensor();
TouchSensor508.setDescription(CString("HAnimSite l_acromion"));
HAnimSite507.addChild(&TouchSensor508);

Shape& Shape509 =  Shape();
Shape509.setUSE(CString("HAnimSiteShape"));
HAnimSite507.addChild(&Shape509);

HAnimSegment489.addChild(&HAnimSite507);

HAnimSite& HAnimSite510 =  HAnimSite();
HAnimSite510.X3DNode::setName(CString("l_axilla_distal_pt"));
HAnimSite510.setDEF(CString("hanim_l_axilla_distal_pt"));
HAnimSite510.setTranslation(new float[]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor511 =  TouchSensor();
TouchSensor511.setDescription(CString("HAnimSite l_axilla_distal_pt"));
HAnimSite510.addChild(&TouchSensor511);

Shape& Shape512 =  Shape();
Shape512.setUSE(CString("HAnimSiteShape"));
HAnimSite510.addChild(&Shape512);

HAnimSegment489.addChild(&HAnimSite510);

HAnimSite& HAnimSite513 =  HAnimSite();
HAnimSite513.X3DNode::setName(CString("l_axilla_posterior_folds"));
HAnimSite513.setDEF(CString("hanim_l_axilla_posterior_folds"));
TouchSensor& TouchSensor514 =  TouchSensor();
TouchSensor514.setDescription(CString("HAnimSite l_axilla_posterior_folds"));
HAnimSite513.addChild(&TouchSensor514);

Shape& Shape515 =  Shape();
Shape515.setUSE(CString("HAnimSiteShape"));
HAnimSite513.addChild(&Shape515);

HAnimSegment489.addChild(&HAnimSite513);

HAnimSite& HAnimSite516 =  HAnimSite();
HAnimSite516.X3DNode::setName(CString("l_axilla_proximal"));
HAnimSite516.setDEF(CString("hanim_l_axilla_proximal"));
HAnimSite516.setTranslation(new float[]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor517 =  TouchSensor();
TouchSensor517.setDescription(CString("HAnimSite l_axilla_proximal"));
HAnimSite516.addChild(&TouchSensor517);

Shape& Shape518 =  Shape();
Shape518.setUSE(CString("HAnimSiteShape"));
HAnimSite516.addChild(&Shape518);

HAnimSegment489.addChild(&HAnimSite516);

HAnimSite& HAnimSite519 =  HAnimSite();
HAnimSite519.X3DNode::setName(CString("l_clavicale"));
HAnimSite519.setDEF(CString("hanim_l_clavicale"));
HAnimSite519.setTranslation(new float[]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor520 =  TouchSensor();
TouchSensor520.setDescription(CString("HAnimSite l_clavicale"));
HAnimSite519.addChild(&TouchSensor520);

Shape& Shape521 =  Shape();
Shape521.setUSE(CString("HAnimSiteShape"));
HAnimSite519.addChild(&Shape521);

HAnimSegment489.addChild(&HAnimSite519);

Shape& Shape522 =  Shape();
LineSet& LineSet523 =  LineSet();
LineSet523.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate524 =  Coordinate();
Coordinate524.setPoint(new float[]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
LineSet523.setCoord(Coordinate524);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA& ColorRGBA525 =  ColorRGBA();
ColorRGBA525.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet523.addChild(&ColorRGBA525);

Shape522.setGeometry(&LineSet523);

HAnimSegment489.addChild(&Shape522);

HAnimSite& HAnimSite526 =  HAnimSite();
HAnimSite526.X3DNode::setName(CString("r_acromion"));
HAnimSite526.setDEF(CString("hanim_r_acromion"));
HAnimSite526.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor527 =  TouchSensor();
TouchSensor527.setDescription(CString("HAnimSite r_acromion"));
HAnimSite526.addChild(&TouchSensor527);

Shape& Shape528 =  Shape();
Shape528.setUSE(CString("HAnimSiteShape"));
HAnimSite526.addChild(&Shape528);

HAnimSegment489.addChild(&HAnimSite526);

HAnimSite& HAnimSite529 =  HAnimSite();
HAnimSite529.X3DNode::setName(CString("r_axilla_distal_pt"));
HAnimSite529.setDEF(CString("hanim_r_axilla_distal_pt"));
HAnimSite529.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor530 =  TouchSensor();
TouchSensor530.setDescription(CString("HAnimSite r_axilla_distal_pt"));
HAnimSite529.addChild(&TouchSensor530);

Shape& Shape531 =  Shape();
Shape531.setUSE(CString("HAnimSiteShape"));
HAnimSite529.addChild(&Shape531);

HAnimSegment489.addChild(&HAnimSite529);

HAnimSite& HAnimSite532 =  HAnimSite();
HAnimSite532.X3DNode::setName(CString("r_axilla_posterior_folds"));
HAnimSite532.setDEF(CString("hanim_r_axilla_posterior_folds"));
TouchSensor& TouchSensor533 =  TouchSensor();
TouchSensor533.setDescription(CString("HAnimSite r_axilla_posterior_folds"));
HAnimSite532.addChild(&TouchSensor533);

Shape& Shape534 =  Shape();
Shape534.setUSE(CString("HAnimSiteShape"));
HAnimSite532.addChild(&Shape534);

HAnimSegment489.addChild(&HAnimSite532);

HAnimSite& HAnimSite535 =  HAnimSite();
HAnimSite535.X3DNode::setName(CString("r_axilla_proximal"));
HAnimSite535.setDEF(CString("hanim_r_axilla_proximal"));
HAnimSite535.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor536 =  TouchSensor();
TouchSensor536.setDescription(CString("HAnimSite r_axilla_proximal"));
HAnimSite535.addChild(&TouchSensor536);

Shape& Shape537 =  Shape();
Shape537.setUSE(CString("HAnimSiteShape"));
HAnimSite535.addChild(&Shape537);

HAnimSegment489.addChild(&HAnimSite535);

HAnimSite& HAnimSite538 =  HAnimSite();
HAnimSite538.X3DNode::setName(CString("r_clavicale"));
HAnimSite538.setDEF(CString("hanim_r_clavicale"));
HAnimSite538.setTranslation(new float[]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor539 =  TouchSensor();
TouchSensor539.setDescription(CString("HAnimSite r_clavicale"));
HAnimSite538.addChild(&TouchSensor539);

Shape& Shape540 =  Shape();
Shape540.setUSE(CString("HAnimSiteShape"));
HAnimSite538.addChild(&Shape540);

HAnimSegment489.addChild(&HAnimSite538);

HAnimJoint488.addChildren(&HAnimSegment489);

HAnimJoint& HAnimJoint541 =  HAnimJoint();
HAnimJoint541.X3DNode::setName(CString("vc7"));
HAnimJoint541.setDEF(CString("hanim_vc7"));
HAnimJoint541.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimSegment& HAnimSegment542 =  HAnimSegment();
HAnimSegment542.X3DNode::setName(CString("c7"));
HAnimSegment542.setDEF(CString("hanim_c7"));
Transform& Transform543 =  Transform();
Transform543.setTranslation(new float[]{0.0066,1.5132,-0.0301});
Transform& Transform544 =  Transform();
//Empty Transform
Shape& Shape545 =  Shape();
Shape545.setUSE(CString("HAnimJointShape"));
Transform544.addChild(&Shape545);

Transform543.addChild(&Transform544);

HAnimSegment542.addChild(&Transform543);

Shape& Shape546 =  Shape();
LineSet& LineSet547 =  LineSet();
LineSet547.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate548 =  Coordinate();
Coordinate548.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet547.setCoord(Coordinate548);

//from vc7 to vc6 vertices 2
ColorRGBA& ColorRGBA549 =  ColorRGBA();
ColorRGBA549.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet547.addChild(&ColorRGBA549);

Shape546.setGeometry(&LineSet547);

HAnimSegment542.addChild(&Shape546);

HAnimJoint541.addChildren(&HAnimSegment542);

HAnimJoint& HAnimJoint550 =  HAnimJoint();
HAnimJoint550.X3DNode::setName(CString("vc6"));
HAnimJoint550.setDEF(CString("hanim_vc6"));
HAnimJoint550.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimSegment& HAnimSegment551 =  HAnimSegment();
HAnimSegment551.X3DNode::setName(CString("c6"));
HAnimSegment551.setDEF(CString("hanim_c6"));
Transform& Transform552 =  Transform();
Transform552.setTranslation(new float[]{0.0066,1.5357,-0.0143});
Transform& Transform553 =  Transform();
//Empty Transform
Shape& Shape554 =  Shape();
Shape554.setUSE(CString("HAnimJointShape"));
Transform553.addChild(&Shape554);

Transform552.addChild(&Transform553);

HAnimSegment551.addChild(&Transform552);

Shape& Shape555 =  Shape();
LineSet& LineSet556 =  LineSet();
LineSet556.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate557 =  Coordinate();
Coordinate557.setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet556.setCoord(Coordinate557);

//from vc6 to vc5 vertices 2
ColorRGBA& ColorRGBA558 =  ColorRGBA();
ColorRGBA558.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet556.addChild(&ColorRGBA558);

Shape555.setGeometry(&LineSet556);

HAnimSegment551.addChild(&Shape555);

HAnimJoint550.addChildren(&HAnimSegment551);

HAnimJoint& HAnimJoint559 =  HAnimJoint();
HAnimJoint559.X3DNode::setName(CString("vc5"));
HAnimJoint559.setDEF(CString("hanim_vc5"));
HAnimJoint559.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimSegment& HAnimSegment560 =  HAnimSegment();
HAnimSegment560.X3DNode::setName(CString("c5"));
HAnimSegment560.setDEF(CString("hanim_c5"));
Transform& Transform561 =  Transform();
Transform561.setTranslation(new float[]{0.0066,1.552,-0.0082});
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
Coordinate566.setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet565.setCoord(Coordinate566);

//from vc5 to vc4 vertices 2
ColorRGBA& ColorRGBA567 =  ColorRGBA();
ColorRGBA567.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet565.addChild(&ColorRGBA567);

Shape564.setGeometry(&LineSet565);

HAnimSegment560.addChild(&Shape564);

HAnimJoint559.addChildren(&HAnimSegment560);

HAnimJoint& HAnimJoint568 =  HAnimJoint();
HAnimJoint568.X3DNode::setName(CString("vc4"));
HAnimJoint568.setDEF(CString("hanim_vc4"));
HAnimJoint568.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimSegment& HAnimSegment569 =  HAnimSegment();
HAnimSegment569.X3DNode::setName(CString("c4"));
HAnimSegment569.setDEF(CString("hanim_c4"));
Transform& Transform570 =  Transform();
Transform570.setTranslation(new float[]{0.0066,1.5662,-0.0084});
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
Coordinate575.setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet574.setCoord(Coordinate575);

//from vc4 to vc3 vertices 2
ColorRGBA& ColorRGBA576 =  ColorRGBA();
ColorRGBA576.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet574.addChild(&ColorRGBA576);

Shape573.setGeometry(&LineSet574);

HAnimSegment569.addChild(&Shape573);

HAnimJoint568.addChildren(&HAnimSegment569);

HAnimJoint& HAnimJoint577 =  HAnimJoint();
HAnimJoint577.X3DNode::setName(CString("vc3"));
HAnimJoint577.setDEF(CString("hanim_vc3"));
HAnimJoint577.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimSegment& HAnimSegment578 =  HAnimSegment();
HAnimSegment578.X3DNode::setName(CString("c3"));
HAnimSegment578.setDEF(CString("hanim_c3"));
Transform& Transform579 =  Transform();
Transform579.setTranslation(new float[]{0.0066,1.58,-0.0103});
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
Coordinate584.setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet583.setCoord(Coordinate584);

//from vc3 to vc2 vertices 2
ColorRGBA& ColorRGBA585 =  ColorRGBA();
ColorRGBA585.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet583.addChild(&ColorRGBA585);

Shape582.setGeometry(&LineSet583);

HAnimSegment578.addChild(&Shape582);

HAnimSite& HAnimSite586 =  HAnimSite();
HAnimSite586.X3DNode::setName(CString("adams_apple"));
HAnimSite586.setDEF(CString("hanim_adams_apple"));
TouchSensor& TouchSensor587 =  TouchSensor();
TouchSensor587.setDescription(CString("HAnimSite adams_apple"));
HAnimSite586.addChild(&TouchSensor587);

Shape& Shape588 =  Shape();
Shape588.setUSE(CString("HAnimSiteShape"));
HAnimSite586.addChild(&Shape588);

HAnimSegment578.addChild(&HAnimSite586);

HAnimJoint577.addChildren(&HAnimSegment578);

HAnimJoint& HAnimJoint589 =  HAnimJoint();
HAnimJoint589.X3DNode::setName(CString("vc2"));
HAnimJoint589.setDEF(CString("hanim_vc2"));
HAnimJoint589.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimSegment& HAnimSegment590 =  HAnimSegment();
HAnimSegment590.X3DNode::setName(CString("c2"));
HAnimSegment590.setDEF(CString("hanim_c2"));
Transform& Transform591 =  Transform();
Transform591.setTranslation(new float[]{0.0066,1.5928,-0.0103});
Transform& Transform592 =  Transform();
//Empty Transform
Shape& Shape593 =  Shape();
Shape593.setUSE(CString("HAnimJointShape"));
Transform592.addChild(&Shape593);

Transform591.addChild(&Transform592);

HAnimSegment590.addChild(&Transform591);

Shape& Shape594 =  Shape();
LineSet& LineSet595 =  LineSet();
LineSet595.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate596 =  Coordinate();
Coordinate596.setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet595.setCoord(Coordinate596);

//from vc2 to vc1 vertices 2
ColorRGBA& ColorRGBA597 =  ColorRGBA();
ColorRGBA597.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet595.addChild(&ColorRGBA597);

Shape594.setGeometry(&LineSet595);

HAnimSegment590.addChild(&Shape594);

HAnimJoint589.addChildren(&HAnimSegment590);

HAnimJoint& HAnimJoint598 =  HAnimJoint();
HAnimJoint598.X3DNode::setName(CString("vc1"));
HAnimJoint598.setDEF(CString("hanim_vc1"));
HAnimJoint598.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimSegment& HAnimSegment599 =  HAnimSegment();
HAnimSegment599.X3DNode::setName(CString("c1"));
HAnimSegment599.setDEF(CString("hanim_c1"));
Transform& Transform600 =  Transform();
Transform600.setTranslation(new float[]{0.0066,1.6144,-0.0034});
Transform& Transform601 =  Transform();
//Empty Transform
Shape& Shape602 =  Shape();
Shape602.setUSE(CString("HAnimJointShape"));
Transform601.addChild(&Shape602);

Transform600.addChild(&Transform601);

HAnimSegment599.addChild(&Transform600);

Shape& Shape603 =  Shape();
LineSet& LineSet604 =  LineSet();
LineSet604.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate605 =  Coordinate();
Coordinate605.setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet604.setCoord(Coordinate605);

//from vc1 to skullbase vertices 2
ColorRGBA& ColorRGBA606 =  ColorRGBA();
ColorRGBA606.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet604.addChild(&ColorRGBA606);

Shape603.setGeometry(&LineSet604);

HAnimSegment599.addChild(&Shape603);

HAnimSite& HAnimSite607 =  HAnimSite();
HAnimSite607.X3DNode::setName(CString("glabella"));
HAnimSite607.setDEF(CString("hanim_glabella"));
TouchSensor& TouchSensor608 =  TouchSensor();
TouchSensor608.setDescription(CString("HAnimSite glabella"));
HAnimSite607.addChild(&TouchSensor608);

Shape& Shape609 =  Shape();
Shape609.setUSE(CString("HAnimSiteShape"));
HAnimSite607.addChild(&Shape609);

HAnimSegment599.addChild(&HAnimSite607);

HAnimSite& HAnimSite610 =  HAnimSite();
HAnimSite610.X3DNode::setName(CString("l_ectocanthus"));
HAnimSite610.setDEF(CString("hanim_l_ectocanthus"));
TouchSensor& TouchSensor611 =  TouchSensor();
TouchSensor611.setDescription(CString("HAnimSite l_ectocanthus"));
HAnimSite610.addChild(&TouchSensor611);

Shape& Shape612 =  Shape();
Shape612.setUSE(CString("HAnimSiteShape"));
HAnimSite610.addChild(&Shape612);

HAnimSegment599.addChild(&HAnimSite610);

HAnimSite& HAnimSite613 =  HAnimSite();
HAnimSite613.X3DNode::setName(CString("l_infraorbitale"));
HAnimSite613.setDEF(CString("hanim_l_infraorbitale"));
HAnimSite613.setTranslation(new float[]{0.0341,1.6171,0.0752});
TouchSensor& TouchSensor614 =  TouchSensor();
TouchSensor614.setDescription(CString("HAnimSite l_infraorbitale"));
HAnimSite613.addChild(&TouchSensor614);

Shape& Shape615 =  Shape();
Shape615.setUSE(CString("HAnimSiteShape"));
HAnimSite613.addChild(&Shape615);

HAnimSegment599.addChild(&HAnimSite613);

HAnimSite& HAnimSite616 =  HAnimSite();
HAnimSite616.X3DNode::setName(CString("l_tragion"));
HAnimSite616.setDEF(CString("hanim_l_tragion"));
HAnimSite616.setTranslation(new float[]{0.0739,1.6348,0.0282});
TouchSensor& TouchSensor617 =  TouchSensor();
TouchSensor617.setDescription(CString("HAnimSite l_tragion"));
HAnimSite616.addChild(&TouchSensor617);

Shape& Shape618 =  Shape();
Shape618.setUSE(CString("HAnimSiteShape"));
HAnimSite616.addChild(&Shape618);

HAnimSegment599.addChild(&HAnimSite616);

HAnimSite& HAnimSite619 =  HAnimSite();
HAnimSite619.X3DNode::setName(CString("nuchale"));
HAnimSite619.setDEF(CString("hanim_nuchale"));
HAnimSite619.setTranslation(new float[]{0.0039,1.5972,-0.0796});
TouchSensor& TouchSensor620 =  TouchSensor();
TouchSensor620.setDescription(CString("HAnimSite nuchale"));
HAnimSite619.addChild(&TouchSensor620);

Shape& Shape621 =  Shape();
Shape621.setUSE(CString("HAnimSiteShape"));
HAnimSite619.addChild(&Shape621);

HAnimSegment599.addChild(&HAnimSite619);

HAnimSite& HAnimSite622 =  HAnimSite();
HAnimSite622.X3DNode::setName(CString("opisthocranion"));
HAnimSite622.setDEF(CString("hanim_opisthocranion"));
TouchSensor& TouchSensor623 =  TouchSensor();
TouchSensor623.setDescription(CString("HAnimSite opisthocranion"));
HAnimSite622.addChild(&TouchSensor623);

Shape& Shape624 =  Shape();
Shape624.setUSE(CString("HAnimSiteShape"));
HAnimSite622.addChild(&Shape624);

HAnimSegment599.addChild(&HAnimSite622);

HAnimSite& HAnimSite625 =  HAnimSite();
HAnimSite625.X3DNode::setName(CString("r_ectocanthus"));
HAnimSite625.setDEF(CString("hanim_r_ectocanthus"));
TouchSensor& TouchSensor626 =  TouchSensor();
TouchSensor626.setDescription(CString("HAnimSite r_ectocanthus"));
HAnimSite625.addChild(&TouchSensor626);

Shape& Shape627 =  Shape();
Shape627.setUSE(CString("HAnimSiteShape"));
HAnimSite625.addChild(&Shape627);

HAnimSegment599.addChild(&HAnimSite625);

HAnimSite& HAnimSite628 =  HAnimSite();
HAnimSite628.X3DNode::setName(CString("r_infraorbitale"));
HAnimSite628.setDEF(CString("hanim_r_infraorbitale"));
HAnimSite628.setTranslation(new float[]{-0.0237,1.6171,0.0752});
TouchSensor& TouchSensor629 =  TouchSensor();
TouchSensor629.setDescription(CString("HAnimSite r_infraorbitale"));
HAnimSite628.addChild(&TouchSensor629);

Shape& Shape630 =  Shape();
Shape630.setUSE(CString("HAnimSiteShape"));
HAnimSite628.addChild(&Shape630);

HAnimSegment599.addChild(&HAnimSite628);

HAnimSite& HAnimSite631 =  HAnimSite();
HAnimSite631.X3DNode::setName(CString("r_tragion"));
HAnimSite631.setDEF(CString("hanim_r_tragion"));
HAnimSite631.setTranslation(new float[]{-0.0646,1.6347,0.0302});
TouchSensor& TouchSensor632 =  TouchSensor();
TouchSensor632.setDescription(CString("HAnimSite r_tragion"));
HAnimSite631.addChild(&TouchSensor632);

Shape& Shape633 =  Shape();
Shape633.setUSE(CString("HAnimSiteShape"));
HAnimSite631.addChild(&Shape633);

HAnimSegment599.addChild(&HAnimSite631);

HAnimSite& HAnimSite634 =  HAnimSite();
HAnimSite634.X3DNode::setName(CString("sellion"));
HAnimSite634.setDEF(CString("hanim_sellion"));
HAnimSite634.setTranslation(new float[]{0.0058,1.6316,0.0852});
TouchSensor& TouchSensor635 =  TouchSensor();
TouchSensor635.setDescription(CString("HAnimSite sellion"));
HAnimSite634.addChild(&TouchSensor635);

Shape& Shape636 =  Shape();
Shape636.setUSE(CString("HAnimSiteShape"));
HAnimSite634.addChild(&Shape636);

HAnimSegment599.addChild(&HAnimSite634);

HAnimSite& HAnimSite637 =  HAnimSite();
HAnimSite637.X3DNode::setName(CString("skull_vertex"));
HAnimSite637.setDEF(CString("hanim_skull_vertex"));
TouchSensor& TouchSensor638 =  TouchSensor();
TouchSensor638.setDescription(CString("HAnimSite skull_vertex"));
HAnimSite637.addChild(&TouchSensor638);

Shape& Shape639 =  Shape();
Shape639.setUSE(CString("HAnimSiteShape"));
HAnimSite637.addChild(&Shape639);

HAnimSegment599.addChild(&HAnimSite637);

HAnimJoint598.addChildren(&HAnimSegment599);

HAnimJoint& HAnimJoint640 =  HAnimJoint();
HAnimJoint640.X3DNode::setName(CString("skullbase"));
HAnimJoint640.setDEF(CString("hanim_skullbase"));
HAnimJoint640.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimSegment& HAnimSegment641 =  HAnimSegment();
HAnimSegment641.X3DNode::setName(CString("skull"));
HAnimSegment641.setDEF(CString("hanim_skull"));
Transform& Transform642 =  Transform();
Transform642.setTranslation(new float[]{0.0044,1.6209,0.0236});
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
Coordinate647.setPoint(new float[]{0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689}, 6);
LineSet646.setCoord(Coordinate647);

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA& ColorRGBA648 =  ColorRGBA();
ColorRGBA648.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet646.addChild(&ColorRGBA648);

Shape645.setGeometry(&LineSet646);

HAnimSegment641.addChild(&Shape645);

Shape& Shape649 =  Shape();
LineSet& LineSet650 =  LineSet();
LineSet650.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate651 =  Coordinate();
Coordinate651.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689}, 6);
LineSet650.setCoord(Coordinate651);

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA& ColorRGBA652 =  ColorRGBA();
ColorRGBA652.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet650.addChild(&ColorRGBA652);

Shape649.setGeometry(&LineSet650);

HAnimSegment641.addChild(&Shape649);

Shape& Shape653 =  Shape();
LineSet& LineSet654 =  LineSet();
LineSet654.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate655 =  Coordinate();
Coordinate655.setPoint(new float[]{0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188}, 6);
LineSet654.setCoord(Coordinate655);

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA& ColorRGBA656 =  ColorRGBA();
ColorRGBA656.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet654.addChild(&ColorRGBA656);

Shape653.setGeometry(&LineSet654);

HAnimSegment641.addChild(&Shape653);

Shape& Shape657 =  Shape();
LineSet& LineSet658 =  LineSet();
LineSet658.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate659 =  Coordinate();
Coordinate659.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188}, 6);
LineSet658.setCoord(Coordinate659);

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA& ColorRGBA660 =  ColorRGBA();
ColorRGBA660.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet658.addChild(&ColorRGBA660);

Shape657.setGeometry(&LineSet658);

HAnimSegment641.addChild(&Shape657);

Shape& Shape661 =  Shape();
LineSet& LineSet662 =  LineSet();
LineSet662.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate663 =  Coordinate();
Coordinate663.setPoint(new float[]{0.0044,1.6209,0.0236,0.0216,1.4053,0.0051}, 6);
LineSet662.setCoord(Coordinate663);

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA664 =  ColorRGBA();
ColorRGBA664.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet662.addChild(&ColorRGBA664);

Shape661.setGeometry(&LineSet662);

HAnimSegment641.addChild(&Shape661);

Shape& Shape665 =  Shape();
LineSet& LineSet666 =  LineSet();
LineSet666.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate667 =  Coordinate();
Coordinate667.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051}, 6);
LineSet666.setCoord(Coordinate667);

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA668 =  ColorRGBA();
ColorRGBA668.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet666.addChild(&ColorRGBA668);

Shape665.setGeometry(&LineSet666);

HAnimSegment641.addChild(&Shape665);

Shape& Shape669 =  Shape();
LineSet& LineSet670 =  LineSet();
LineSet670.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate671 =  Coordinate();
Coordinate671.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865}, 6);
LineSet670.setCoord(Coordinate671);

//from skullbase to temporomandibular vertices 2
ColorRGBA& ColorRGBA672 =  ColorRGBA();
ColorRGBA672.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet670.addChild(&ColorRGBA672);

Shape669.setGeometry(&LineSet670);

HAnimSegment641.addChild(&Shape669);

HAnimSite& HAnimSite673 =  HAnimSite();
HAnimSite673.X3DNode::setName(CString("l_gonion"));
HAnimSite673.setDEF(CString("hanim_l_gonion"));
HAnimSite673.setTranslation(new float[]{0.0631,1.553,0.033});
TouchSensor& TouchSensor674 =  TouchSensor();
TouchSensor674.setDescription(CString("HAnimSite l_gonion"));
HAnimSite673.addChild(&TouchSensor674);

Shape& Shape675 =  Shape();
Shape675.setUSE(CString("HAnimSiteShape"));
HAnimSite673.addChild(&Shape675);

HAnimSegment641.addChild(&HAnimSite673);

HAnimSite& HAnimSite676 =  HAnimSite();
HAnimSite676.X3DNode::setName(CString("menton"));
HAnimSite676.setDEF(CString("hanim_menton"));
TouchSensor& TouchSensor677 =  TouchSensor();
TouchSensor677.setDescription(CString("HAnimSite menton"));
HAnimSite676.addChild(&TouchSensor677);

Shape& Shape678 =  Shape();
Shape678.setUSE(CString("HAnimSiteShape"));
HAnimSite676.addChild(&Shape678);

HAnimSegment641.addChild(&HAnimSite676);

HAnimSite& HAnimSite679 =  HAnimSite();
HAnimSite679.X3DNode::setName(CString("r_gonion"));
HAnimSite679.setDEF(CString("hanim_r_gonion"));
HAnimSite679.setTranslation(new float[]{-0.052,1.5529,0.0347});
TouchSensor& TouchSensor680 =  TouchSensor();
TouchSensor680.setDescription(CString("HAnimSite r_gonion"));
HAnimSite679.addChild(&TouchSensor680);

Shape& Shape681 =  Shape();
Shape681.setUSE(CString("HAnimSiteShape"));
HAnimSite679.addChild(&Shape681);

HAnimSegment641.addChild(&HAnimSite679);

HAnimSite& HAnimSite682 =  HAnimSite();
HAnimSite682.X3DNode::setName(CString("supramenton"));
HAnimSite682.setDEF(CString("hanim_supramenton"));
HAnimSite682.setTranslation(new float[]{0.0061,1.541,0.0805});
TouchSensor& TouchSensor683 =  TouchSensor();
TouchSensor683.setDescription(CString("HAnimSite supramenton"));
HAnimSite682.addChild(&TouchSensor683);

Shape& Shape684 =  Shape();
Shape684.setUSE(CString("HAnimSiteShape"));
HAnimSite682.addChild(&Shape684);

HAnimSegment641.addChild(&HAnimSite682);

HAnimJoint640.addChildren(&HAnimSegment641);

HAnimJoint& HAnimJoint685 =  HAnimJoint();
HAnimJoint685.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint685.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint685.setCenter(new float[]{0.0503,1.4157,-0.0689});
HAnimJoint640.addChildren(&HAnimJoint685);

HAnimJoint& HAnimJoint686 =  HAnimJoint();
HAnimJoint686.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint686.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint686.setCenter(new float[]{-0.0507,1.4157,-0.0689});
HAnimJoint640.addChildren(&HAnimJoint686);

HAnimJoint& HAnimJoint687 =  HAnimJoint();
HAnimJoint687.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint687.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint687.setCenter(new float[]{0.0479,1.3963,-0.0188});
HAnimJoint640.addChildren(&HAnimJoint687);

HAnimJoint& HAnimJoint688 =  HAnimJoint();
HAnimJoint688.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint688.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint688.setCenter(new float[]{-0.0483,1.3963,-0.0188});
HAnimJoint640.addChildren(&HAnimJoint688);

HAnimJoint& HAnimJoint689 =  HAnimJoint();
HAnimJoint689.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint689.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint689.setCenter(new float[]{0.0216,1.4053,0.0051});
HAnimJoint640.addChildren(&HAnimJoint689);

HAnimJoint& HAnimJoint690 =  HAnimJoint();
HAnimJoint690.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint690.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint690.setCenter(new float[]{-0.0219,1.4053,0.0051});
HAnimJoint640.addChildren(&HAnimJoint690);

HAnimJoint& HAnimJoint691 =  HAnimJoint();
HAnimJoint691.X3DNode::setName(CString("temporomandibular"));
HAnimJoint691.setDEF(CString("hanim_temporomandibular"));
HAnimJoint691.setCenter(new float[]{-0.0002,1.3043,-0.0865});
HAnimJoint640.addChildren(&HAnimJoint691);

HAnimJoint598.addChildren(&HAnimJoint640);

HAnimJoint589.addChildren(&HAnimJoint598);

HAnimJoint577.addChildren(&HAnimJoint589);

HAnimJoint568.addChildren(&HAnimJoint577);

HAnimJoint559.addChildren(&HAnimJoint568);

HAnimJoint550.addChildren(&HAnimJoint559);

HAnimJoint541.addChildren(&HAnimJoint550);

HAnimJoint488.addChildren(&HAnimJoint541);

HAnimJoint& HAnimJoint692 =  HAnimJoint();
HAnimJoint692.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint692.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint692.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment693 =  HAnimSegment();
HAnimSegment693.X3DNode::setName(CString("l_clavicle"));
HAnimSegment693.setDEF(CString("hanim_l_clavicle"));
Transform& Transform694 =  Transform();
Transform694.setTranslation(new float[]{0.082,1.4488,-0.0353});
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
Coordinate699.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet698.setCoord(Coordinate699);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA& ColorRGBA700 =  ColorRGBA();
ColorRGBA700.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet698.addChild(&ColorRGBA700);

Shape697.setGeometry(&LineSet698);

HAnimSegment693.addChild(&Shape697);

HAnimJoint692.addChildren(&HAnimSegment693);

HAnimJoint& HAnimJoint701 =  HAnimJoint();
HAnimJoint701.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint701.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint701.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment702 =  HAnimSegment();
HAnimSegment702.X3DNode::setName(CString("l_scapula"));
HAnimSegment702.setDEF(CString("hanim_l_scapula"));
Transform& Transform703 =  Transform();
Transform703.setTranslation(new float[]{0.0962,1.4269,-0.0424});
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
Coordinate708.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet707.setCoord(Coordinate708);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA& ColorRGBA709 =  ColorRGBA();
ColorRGBA709.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet707.addChild(&ColorRGBA709);

Shape706.setGeometry(&LineSet707);

HAnimSegment702.addChild(&Shape706);

HAnimSite& HAnimSite710 =  HAnimSite();
HAnimSite710.X3DNode::setName(CString("l_bideltoid"));
HAnimSite710.setDEF(CString("hanim_l_bideltoid"));
TouchSensor& TouchSensor711 =  TouchSensor();
TouchSensor711.setDescription(CString("HAnimSite l_bideltoid"));
HAnimSite710.addChild(&TouchSensor711);

Shape& Shape712 =  Shape();
Shape712.setUSE(CString("HAnimSiteShape"));
HAnimSite710.addChild(&Shape712);

HAnimSegment702.addChild(&HAnimSite710);

HAnimSite& HAnimSite713 =  HAnimSite();
HAnimSite713.X3DNode::setName(CString("l_humeral_lateral_epicondyles"));
HAnimSite713.setDEF(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimSite713.setTranslation(new float[]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor714 =  TouchSensor();
TouchSensor714.setDescription(CString("HAnimSite l_humeral_lateral_epicondyles"));
HAnimSite713.addChild(&TouchSensor714);

Shape& Shape715 =  Shape();
Shape715.setUSE(CString("HAnimSiteShape"));
HAnimSite713.addChild(&Shape715);

HAnimSegment702.addChild(&HAnimSite713);

HAnimJoint701.addChildren(&HAnimSegment702);

HAnimJoint& HAnimJoint716 =  HAnimJoint();
HAnimJoint716.X3DNode::setName(CString("l_shoulder"));
HAnimJoint716.setDEF(CString("hanim_l_shoulder"));
HAnimJoint716.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment717 =  HAnimSegment();
HAnimSegment717.X3DNode::setName(CString("l_upperarm"));
HAnimSegment717.setDEF(CString("hanim_l_upperarm"));
Transform& Transform718 =  Transform();
Transform718.setTranslation(new float[]{0.2029,1.4376,-0.0387});
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
Coordinate723.setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet722.setCoord(Coordinate723);

//from l_shoulder to l_elbow vertices 2
ColorRGBA& ColorRGBA724 =  ColorRGBA();
ColorRGBA724.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet722.addChild(&ColorRGBA724);

Shape721.setGeometry(&LineSet722);

HAnimSegment717.addChild(&Shape721);

HAnimSite& HAnimSite725 =  HAnimSite();
HAnimSite725.X3DNode::setName(CString("l_humeral_medial_epicondyles"));
HAnimSite725.setDEF(CString("hanim_l_humeral_medial_epicondyles"));
HAnimSite725.setTranslation(new float[]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor726 =  TouchSensor();
TouchSensor726.setDescription(CString("HAnimSite l_humeral_medial_epicondyles"));
HAnimSite725.addChild(&TouchSensor726);

Shape& Shape727 =  Shape();
Shape727.setUSE(CString("HAnimSiteShape"));
HAnimSite725.addChild(&Shape727);

HAnimSegment717.addChild(&HAnimSite725);

HAnimSite& HAnimSite728 =  HAnimSite();
HAnimSite728.X3DNode::setName(CString("l_olecranon"));
HAnimSite728.setDEF(CString("hanim_l_olecranon"));
HAnimSite728.setTranslation(new float[]{-0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor729 =  TouchSensor();
TouchSensor729.setDescription(CString("HAnimSite l_olecranon"));
HAnimSite728.addChild(&TouchSensor729);

Shape& Shape730 =  Shape();
Shape730.setUSE(CString("HAnimSiteShape"));
HAnimSite728.addChild(&Shape730);

HAnimSegment717.addChild(&HAnimSite728);

HAnimSite& HAnimSite731 =  HAnimSite();
HAnimSite731.X3DNode::setName(CString("l_radial_styloid"));
HAnimSite731.setDEF(CString("hanim_l_radial_styloid"));
HAnimSite731.setTranslation(new float[]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor732 =  TouchSensor();
TouchSensor732.setDescription(CString("HAnimSite l_radial_styloid"));
HAnimSite731.addChild(&TouchSensor732);

Shape& Shape733 =  Shape();
Shape733.setUSE(CString("HAnimSiteShape"));
HAnimSite731.addChild(&Shape733);

HAnimSegment717.addChild(&HAnimSite731);

HAnimSite& HAnimSite734 =  HAnimSite();
HAnimSite734.X3DNode::setName(CString("l_radiale"));
HAnimSite734.setDEF(CString("hanim_l_radiale"));
HAnimSite734.setTranslation(new float[]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor735 =  TouchSensor();
TouchSensor735.setDescription(CString("HAnimSite l_radiale"));
HAnimSite734.addChild(&TouchSensor735);

Shape& Shape736 =  Shape();
Shape736.setUSE(CString("HAnimSiteShape"));
HAnimSite734.addChild(&Shape736);

HAnimSegment717.addChild(&HAnimSite734);

HAnimJoint716.addChildren(&HAnimSegment717);

HAnimJoint& HAnimJoint737 =  HAnimJoint();
HAnimJoint737.X3DNode::setName(CString("l_elbow"));
HAnimJoint737.setDEF(CString("hanim_l_elbow"));
HAnimJoint737.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment738 =  HAnimSegment();
HAnimSegment738.X3DNode::setName(CString("l_forearm"));
HAnimSegment738.setDEF(CString("hanim_l_forearm"));
Transform& Transform739 =  Transform();
Transform739.setTranslation(new float[]{0.2014,1.1357,-0.0682});
Transform& Transform740 =  Transform();
//Empty Transform
Shape& Shape741 =  Shape();
Shape741.setUSE(CString("HAnimJointShape"));
Transform740.addChild(&Shape741);

Transform739.addChild(&Transform740);

HAnimSegment738.addChild(&Transform739);

Shape& Shape742 =  Shape();
LineSet& LineSet743 =  LineSet();
LineSet743.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate744 =  Coordinate();
Coordinate744.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet743.setCoord(Coordinate744);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA& ColorRGBA745 =  ColorRGBA();
ColorRGBA745.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet743.addChild(&ColorRGBA745);

Shape742.setGeometry(&LineSet743);

HAnimSegment738.addChild(&Shape742);

HAnimSite& HAnimSite746 =  HAnimSite();
HAnimSite746.X3DNode::setName(CString("l_ulnar_styloid"));
HAnimSite746.setDEF(CString("hanim_l_ulnar_styloid"));
HAnimSite746.setTranslation(new float[]{-0.2142,0.8529,-0.0648});
TouchSensor& TouchSensor747 =  TouchSensor();
TouchSensor747.setDescription(CString("HAnimSite l_ulnar_styloid"));
HAnimSite746.addChild(&TouchSensor747);

Shape& Shape748 =  Shape();
Shape748.setUSE(CString("HAnimSiteShape"));
HAnimSite746.addChild(&Shape748);

HAnimSegment738.addChild(&HAnimSite746);

HAnimJoint737.addChildren(&HAnimSegment738);

HAnimJoint& HAnimJoint749 =  HAnimJoint();
HAnimJoint749.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint749.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint749.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment750 =  HAnimSegment();
HAnimSegment750.X3DNode::setName(CString("l_carpal"));
HAnimSegment750.setDEF(CString("hanim_l_carpal"));
Transform& Transform751 =  Transform();
Transform751.setScale(new float[]{0.2,0.2,0.2});
Transform751.setTranslation(new float[]{0.2,0.85,-0.05});
Transform751.setRotation(new float[]{0,0,1,-3.14});
//Transform left hand
Transform& Transform752 =  Transform();
Transform752.setRotation(new float[]{0,1,0,-1.57});
//Transform left hand
Shape& Shape753 =  Shape();
Shape753.setUSE(CString("HAnimJointShape"));
Transform752.addChild(&Shape753);

Transform751.addChild(&Transform752);

HAnimSegment750.addChild(&Transform751);

Shape& Shape754 =  Shape();
LineSet& LineSet755 =  LineSet();
LineSet755.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate756 =  Coordinate();
Coordinate756.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534}, 6);
LineSet755.setCoord(Coordinate756);

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA757 =  ColorRGBA();
ColorRGBA757.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet755.addChild(&ColorRGBA757);

Shape754.setGeometry(&LineSet755);

HAnimSegment750.addChild(&Shape754);

Shape& Shape758 =  Shape();
LineSet& LineSet759 =  LineSet();
LineSet759.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate760 =  Coordinate();
Coordinate760.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028}, 6);
LineSet759.setCoord(Coordinate760);

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA761 =  ColorRGBA();
ColorRGBA761.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet759.addChild(&ColorRGBA761);

Shape758.setGeometry(&LineSet759);

HAnimSegment750.addChild(&Shape758);

HAnimSite& HAnimSite762 =  HAnimSite();
HAnimSite762.X3DNode::setName(CString("l_metacarpal_phalanx_2"));
HAnimSite762.setDEF(CString("hanim_l_metacarpal_phalanx_2"));
HAnimSite762.setTranslation(new float[]{0.2009,0.8139,-0.0237});
TouchSensor& TouchSensor763 =  TouchSensor();
TouchSensor763.setDescription(CString("HAnimSite l_metacarpal_phalanx_2"));
HAnimSite762.addChild(&TouchSensor763);

Shape& Shape764 =  Shape();
Shape764.setUSE(CString("HAnimSiteShape"));
HAnimSite762.addChild(&Shape764);

HAnimSegment750.addChild(&HAnimSite762);

Shape& Shape765 =  Shape();
LineSet& LineSet766 =  LineSet();
LineSet766.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate767 =  Coordinate();
Coordinate767.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053}, 6);
LineSet766.setCoord(Coordinate767);

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA768 =  ColorRGBA();
ColorRGBA768.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet766.addChild(&ColorRGBA768);

Shape765.setGeometry(&LineSet766);

HAnimSegment750.addChild(&Shape765);

HAnimSite& HAnimSite769 =  HAnimSite();
HAnimSite769.X3DNode::setName(CString("l_metacarpal_phalanx_3"));
HAnimSite769.setDEF(CString("hanim_l_metacarpal_phalanx_3"));
TouchSensor& TouchSensor770 =  TouchSensor();
TouchSensor770.setDescription(CString("HAnimSite l_metacarpal_phalanx_3"));
HAnimSite769.addChild(&TouchSensor770);

Shape& Shape771 =  Shape();
Shape771.setUSE(CString("HAnimSiteShape"));
HAnimSite769.addChild(&Shape771);

HAnimSegment750.addChild(&HAnimSite769);

Shape& Shape772 =  Shape();
LineSet& LineSet773 =  LineSet();
LineSet773.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate774 =  Coordinate();
Coordinate774.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794}, 6);
LineSet773.setCoord(Coordinate774);

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA775 =  ColorRGBA();
ColorRGBA775.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet773.addChild(&ColorRGBA775);

Shape772.setGeometry(&LineSet773);

HAnimSegment750.addChild(&Shape772);

Shape& Shape776 =  Shape();
LineSet& LineSet777 =  LineSet();
LineSet777.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate778 =  Coordinate();
Coordinate778.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036}, 6);
LineSet777.setCoord(Coordinate778);

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA779 =  ColorRGBA();
ColorRGBA779.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet777.addChild(&ColorRGBA779);

Shape776.setGeometry(&LineSet777);

HAnimSegment750.addChild(&Shape776);

HAnimSite& HAnimSite780 =  HAnimSite();
HAnimSite780.X3DNode::setName(CString("l_metacarpal_phalanx_5"));
HAnimSite780.setDEF(CString("hanim_l_metacarpal_phalanx_5"));
HAnimSite780.setTranslation(new float[]{0.1929,0.786,-0.1122});
TouchSensor& TouchSensor781 =  TouchSensor();
TouchSensor781.setDescription(CString("HAnimSite l_metacarpal_phalanx_5"));
HAnimSite780.addChild(&TouchSensor781);

Shape& Shape782 =  Shape();
Shape782.setUSE(CString("HAnimSiteShape"));
HAnimSite780.addChild(&Shape782);

HAnimSegment750.addChild(&HAnimSite780);

HAnimJoint749.addChildren(&HAnimSegment750);

HAnimJoint& HAnimJoint783 =  HAnimJoint();
HAnimJoint783.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint783.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint783.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment784 =  HAnimSegment();
HAnimSegment784.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment784.setDEF(CString("hanim_l_metacarpal_1"));
Transform& Transform785 =  Transform();
Transform785.setTranslation(new float[]{0.1924,0.8472,-0.0534});
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
Coordinate790.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet789.setCoord(Coordinate790);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA791 =  ColorRGBA();
ColorRGBA791.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet789.addChild(&ColorRGBA791);

Shape788.setGeometry(&LineSet789);

HAnimSegment784.addChild(&Shape788);

HAnimJoint783.addChildren(&HAnimSegment784);

HAnimJoint& HAnimJoint792 =  HAnimJoint();
HAnimJoint792.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint792.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint792.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment793 =  HAnimSegment();
HAnimSegment793.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment793.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform& Transform794 =  Transform();
Transform794.setTranslation(new float[]{0.1951,0.8226,0.0246});
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
Coordinate799.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet798.setCoord(Coordinate799);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA800 =  ColorRGBA();
ColorRGBA800.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet798.addChild(&ColorRGBA800);

Shape797.setGeometry(&LineSet798);

HAnimSegment793.addChild(&Shape797);

HAnimSite& HAnimSite801 =  HAnimSite();
HAnimSite801.X3DNode::setName(CString("l_carpal_distal_phalanx_1_tip"));
HAnimSite801.setDEF(CString("hanim_l_carpal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor802 =  TouchSensor();
TouchSensor802.setDescription(CString("HAnimSite l_carpal_distal_phalanx_1_tip"));
HAnimSite801.addChild(&TouchSensor802);

Shape& Shape803 =  Shape();
Shape803.setUSE(CString("HAnimSiteShape"));
HAnimSite801.addChild(&Shape803);

HAnimSegment793.addChild(&HAnimSite801);

HAnimJoint792.addChildren(&HAnimSegment793);

HAnimJoint& HAnimJoint804 =  HAnimJoint();
HAnimJoint804.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint804.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint804.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint792.addChildren(&HAnimJoint804);

HAnimJoint783.addChildren(&HAnimJoint792);

HAnimJoint749.addChildren(&HAnimJoint783);

HAnimJoint& HAnimJoint805 =  HAnimJoint();
HAnimJoint805.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint805.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint805.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment806 =  HAnimSegment();
HAnimSegment806.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment806.setDEF(CString("hanim_l_metacarpal_2"));
Transform& Transform807 =  Transform();
Transform807.setTranslation(new float[]{0.1983,0.8024,-0.028});
Transform& Transform808 =  Transform();
//Empty Transform
Shape& Shape809 =  Shape();
Shape809.setUSE(CString("HAnimJointShape"));
Transform808.addChild(&Shape809);

Transform807.addChild(&Transform808);

HAnimSegment806.addChild(&Transform807);

Shape& Shape810 =  Shape();
LineSet& LineSet811 =  LineSet();
LineSet811.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate812 =  Coordinate();
Coordinate812.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet811.setCoord(Coordinate812);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA813 =  ColorRGBA();
ColorRGBA813.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet811.addChild(&ColorRGBA813);

Shape810.setGeometry(&LineSet811);

HAnimSegment806.addChild(&Shape810);

HAnimJoint805.addChildren(&HAnimSegment806);

HAnimJoint& HAnimJoint814 =  HAnimJoint();
HAnimJoint814.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint814.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint814.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment815 =  HAnimSegment();
HAnimSegment815.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment815.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform& Transform816 =  Transform();
Transform816.setTranslation(new float[]{0.1983,0.7815,-0.028});
Transform& Transform817 =  Transform();
//Empty Transform
Shape& Shape818 =  Shape();
Shape818.setUSE(CString("HAnimJointShape"));
Transform817.addChild(&Shape818);

Transform816.addChild(&Transform817);

HAnimSegment815.addChild(&Transform816);

Shape& Shape819 =  Shape();
LineSet& LineSet820 =  LineSet();
LineSet820.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate821 =  Coordinate();
Coordinate821.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet820.setCoord(Coordinate821);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA822 =  ColorRGBA();
ColorRGBA822.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet820.addChild(&ColorRGBA822);

Shape819.setGeometry(&LineSet820);

HAnimSegment815.addChild(&Shape819);

HAnimJoint814.addChildren(&HAnimSegment815);

HAnimJoint& HAnimJoint823 =  HAnimJoint();
HAnimJoint823.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint823.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint823.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment824 =  HAnimSegment();
HAnimSegment824.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment824.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform& Transform825 =  Transform();
Transform825.setTranslation(new float[]{0.2017,0.7363,-0.0248});
Transform& Transform826 =  Transform();
//Empty Transform
Shape& Shape827 =  Shape();
Shape827.setUSE(CString("HAnimJointShape"));
Transform826.addChild(&Shape827);

Transform825.addChild(&Transform826);

HAnimSegment824.addChild(&Transform825);

Shape& Shape828 =  Shape();
LineSet& LineSet829 =  LineSet();
LineSet829.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate830 =  Coordinate();
Coordinate830.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet829.setCoord(Coordinate830);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA831 =  ColorRGBA();
ColorRGBA831.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet829.addChild(&ColorRGBA831);

Shape828.setGeometry(&LineSet829);

HAnimSegment824.addChild(&Shape828);

HAnimSite& HAnimSite832 =  HAnimSite();
HAnimSite832.X3DNode::setName(CString("l_carpal_distal_phalanx_2_tip"));
HAnimSite832.setDEF(CString("hanim_l_carpal_distal_phalanx_2_tip"));
TouchSensor& TouchSensor833 =  TouchSensor();
TouchSensor833.setDescription(CString("HAnimSite l_carpal_distal_phalanx_2_tip"));
HAnimSite832.addChild(&TouchSensor833);

Shape& Shape834 =  Shape();
Shape834.setUSE(CString("HAnimSiteShape"));
HAnimSite832.addChild(&Shape834);

HAnimSegment824.addChild(&HAnimSite832);

HAnimSite& HAnimSite835 =  HAnimSite();
HAnimSite835.X3DNode::setName(CString("l_dactylion"));
HAnimSite835.setDEF(CString("hanim_l_dactylion"));
HAnimSite835.setTranslation(new float[]{0.2056,0.6743,-0.0482});
TouchSensor& TouchSensor836 =  TouchSensor();
TouchSensor836.setDescription(CString("HAnimSite l_dactylion"));
HAnimSite835.addChild(&TouchSensor836);

Shape& Shape837 =  Shape();
Shape837.setUSE(CString("HAnimSiteShape"));
HAnimSite835.addChild(&Shape837);

HAnimSegment824.addChild(&HAnimSite835);

HAnimJoint823.addChildren(&HAnimSegment824);

HAnimJoint& HAnimJoint838 =  HAnimJoint();
HAnimJoint838.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint838.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint838.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint823.addChildren(&HAnimJoint838);

HAnimJoint814.addChildren(&HAnimJoint823);

HAnimJoint805.addChildren(&HAnimJoint814);

HAnimJoint749.addChildren(&HAnimJoint805);

HAnimJoint& HAnimJoint839 =  HAnimJoint();
HAnimJoint839.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint839.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint839.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment840 =  HAnimSegment();
HAnimSegment840.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment840.setDEF(CString("hanim_l_metacarpal_3"));
Transform& Transform841 =  Transform();
Transform841.setTranslation(new float[]{0.1987,0.8029,-0.053});
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
Coordinate846.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet845.setCoord(Coordinate846);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA847 =  ColorRGBA();
ColorRGBA847.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet845.addChild(&ColorRGBA847);

Shape844.setGeometry(&LineSet845);

HAnimSegment840.addChild(&Shape844);

HAnimJoint839.addChildren(&HAnimSegment840);

HAnimJoint& HAnimJoint848 =  HAnimJoint();
HAnimJoint848.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint848.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint848.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment849 =  HAnimSegment();
HAnimSegment849.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment849.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform& Transform850 =  Transform();
Transform850.setTranslation(new float[]{0.1987,0.7818,-0.053});
Transform& Transform851 =  Transform();
//Empty Transform
Shape& Shape852 =  Shape();
Shape852.setUSE(CString("HAnimJointShape"));
Transform851.addChild(&Shape852);

Transform850.addChild(&Transform851);

HAnimSegment849.addChild(&Transform850);

Shape& Shape853 =  Shape();
LineSet& LineSet854 =  LineSet();
LineSet854.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate855 =  Coordinate();
Coordinate855.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet854.setCoord(Coordinate855);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA856 =  ColorRGBA();
ColorRGBA856.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet854.addChild(&ColorRGBA856);

Shape853.setGeometry(&LineSet854);

HAnimSegment849.addChild(&Shape853);

HAnimJoint848.addChildren(&HAnimSegment849);

HAnimJoint& HAnimJoint857 =  HAnimJoint();
HAnimJoint857.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint857.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint857.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment858 =  HAnimSegment();
HAnimSegment858.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment858.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform& Transform859 =  Transform();
Transform859.setTranslation(new float[]{0.2013,0.7273,-0.0503});
Transform& Transform860 =  Transform();
//Empty Transform
Shape& Shape861 =  Shape();
Shape861.setUSE(CString("HAnimJointShape"));
Transform860.addChild(&Shape861);

Transform859.addChild(&Transform860);

HAnimSegment858.addChild(&Transform859);

Shape& Shape862 =  Shape();
LineSet& LineSet863 =  LineSet();
LineSet863.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate864 =  Coordinate();
Coordinate864.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet863.setCoord(Coordinate864);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA865 =  ColorRGBA();
ColorRGBA865.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet863.addChild(&ColorRGBA865);

Shape862.setGeometry(&LineSet863);

HAnimSegment858.addChild(&Shape862);

HAnimSite& HAnimSite866 =  HAnimSite();
HAnimSite866.X3DNode::setName(CString("l_carpal_distal_phalanx_3_tip"));
HAnimSite866.setDEF(CString("hanim_l_carpal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor867 =  TouchSensor();
TouchSensor867.setDescription(CString("HAnimSite l_carpal_distal_phalanx_3_tip"));
HAnimSite866.addChild(&TouchSensor867);

Shape& Shape868 =  Shape();
Shape868.setUSE(CString("HAnimSiteShape"));
HAnimSite866.addChild(&Shape868);

HAnimSegment858.addChild(&HAnimSite866);

HAnimJoint857.addChildren(&HAnimSegment858);

HAnimJoint& HAnimJoint869 =  HAnimJoint();
HAnimJoint869.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint869.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint869.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint857.addChildren(&HAnimJoint869);

HAnimJoint848.addChildren(&HAnimJoint857);

HAnimJoint839.addChildren(&HAnimJoint848);

HAnimJoint749.addChildren(&HAnimJoint839);

HAnimJoint& HAnimJoint870 =  HAnimJoint();
HAnimJoint870.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint870.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint870.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment871 =  HAnimSegment();
HAnimSegment871.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment871.setDEF(CString("hanim_l_metacarpal_4"));
Transform& Transform872 =  Transform();
Transform872.setTranslation(new float[]{0.1956,0.8019,-0.0794});
Transform& Transform873 =  Transform();
//Empty Transform
Shape& Shape874 =  Shape();
Shape874.setUSE(CString("HAnimJointShape"));
Transform873.addChild(&Shape874);

Transform872.addChild(&Transform873);

HAnimSegment871.addChild(&Transform872);

Shape& Shape875 =  Shape();
LineSet& LineSet876 =  LineSet();
LineSet876.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate877 =  Coordinate();
Coordinate877.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet876.setCoord(Coordinate877);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA878 =  ColorRGBA();
ColorRGBA878.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet876.addChild(&ColorRGBA878);

Shape875.setGeometry(&LineSet876);

HAnimSegment871.addChild(&Shape875);

HAnimJoint870.addChildren(&HAnimSegment871);

HAnimJoint& HAnimJoint879 =  HAnimJoint();
HAnimJoint879.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint879.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint879.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment880 =  HAnimSegment();
HAnimSegment880.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment880.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform& Transform881 =  Transform();
Transform881.setTranslation(new float[]{0.1956,0.7815,-0.0794});
Transform& Transform882 =  Transform();
//Empty Transform
Shape& Shape883 =  Shape();
Shape883.setUSE(CString("HAnimJointShape"));
Transform882.addChild(&Shape883);

Transform881.addChild(&Transform882);

HAnimSegment880.addChild(&Transform881);

Shape& Shape884 =  Shape();
LineSet& LineSet885 =  LineSet();
LineSet885.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate886 =  Coordinate();
Coordinate886.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet885.setCoord(Coordinate886);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA887 =  ColorRGBA();
ColorRGBA887.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet885.addChild(&ColorRGBA887);

Shape884.setGeometry(&LineSet885);

HAnimSegment880.addChild(&Shape884);

HAnimJoint879.addChildren(&HAnimSegment880);

HAnimJoint& HAnimJoint888 =  HAnimJoint();
HAnimJoint888.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint888.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint888.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment889 =  HAnimSegment();
HAnimSegment889.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment889.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform& Transform890 =  Transform();
Transform890.setTranslation(new float[]{0.1973,0.7287,-0.0777});
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
Coordinate895.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet894.setCoord(Coordinate895);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA896 =  ColorRGBA();
ColorRGBA896.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet894.addChild(&ColorRGBA896);

Shape893.setGeometry(&LineSet894);

HAnimSegment889.addChild(&Shape893);

HAnimSite& HAnimSite897 =  HAnimSite();
HAnimSite897.X3DNode::setName(CString("l_carpal_distal_phalanx_4_tip"));
HAnimSite897.setDEF(CString("hanim_l_carpal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor898 =  TouchSensor();
TouchSensor898.setDescription(CString("HAnimSite l_carpal_distal_phalanx_4_tip"));
HAnimSite897.addChild(&TouchSensor898);

Shape& Shape899 =  Shape();
Shape899.setUSE(CString("HAnimSiteShape"));
HAnimSite897.addChild(&Shape899);

HAnimSegment889.addChild(&HAnimSite897);

HAnimJoint888.addChildren(&HAnimSegment889);

HAnimJoint& HAnimJoint900 =  HAnimJoint();
HAnimJoint900.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint900.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint900.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint888.addChildren(&HAnimJoint900);

HAnimJoint879.addChildren(&HAnimJoint888);

HAnimJoint870.addChildren(&HAnimJoint879);

HAnimJoint749.addChildren(&HAnimJoint870);

HAnimJoint& HAnimJoint901 =  HAnimJoint();
HAnimJoint901.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint901.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint901.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment902 =  HAnimSegment();
HAnimSegment902.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment902.setDEF(CString("hanim_l_metacarpal_5"));
Transform& Transform903 =  Transform();
Transform903.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Transform& Transform904 =  Transform();
//Empty Transform
Shape& Shape905 =  Shape();
Shape905.setUSE(CString("HAnimJointShape"));
Transform904.addChild(&Shape905);

Transform903.addChild(&Transform904);

HAnimSegment902.addChild(&Transform903);

Shape& Shape906 =  Shape();
LineSet& LineSet907 =  LineSet();
LineSet907.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate908 =  Coordinate();
Coordinate908.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet907.setCoord(Coordinate908);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA909 =  ColorRGBA();
ColorRGBA909.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet907.addChild(&ColorRGBA909);

Shape906.setGeometry(&LineSet907);

HAnimSegment902.addChild(&Shape906);

HAnimJoint901.addChildren(&HAnimSegment902);

HAnimJoint& HAnimJoint910 =  HAnimJoint();
HAnimJoint910.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint910.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint910.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment911 =  HAnimSegment();
HAnimSegment911.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment911.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform& Transform912 =  Transform();
Transform912.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Transform& Transform913 =  Transform();
//Empty Transform
Shape& Shape914 =  Shape();
Shape914.setUSE(CString("HAnimJointShape"));
Transform913.addChild(&Shape914);

Transform912.addChild(&Transform913);

HAnimSegment911.addChild(&Transform912);

Shape& Shape915 =  Shape();
LineSet& LineSet916 =  LineSet();
LineSet916.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate917 =  Coordinate();
Coordinate917.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet916.setCoord(Coordinate917);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA918 =  ColorRGBA();
ColorRGBA918.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet916.addChild(&ColorRGBA918);

Shape915.setGeometry(&LineSet916);

HAnimSegment911.addChild(&Shape915);

HAnimJoint910.addChildren(&HAnimSegment911);

HAnimJoint& HAnimJoint919 =  HAnimJoint();
HAnimJoint919.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint919.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint919.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment920 =  HAnimSegment();
HAnimSegment920.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment920.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform& Transform921 =  Transform();
Transform921.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Transform& Transform922 =  Transform();
//Empty Transform
Shape& Shape923 =  Shape();
Shape923.setUSE(CString("HAnimJointShape"));
Transform922.addChild(&Shape923);

Transform921.addChild(&Transform922);

HAnimSegment920.addChild(&Transform921);

Shape& Shape924 =  Shape();
LineSet& LineSet925 =  LineSet();
LineSet925.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate926 =  Coordinate();
Coordinate926.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet925.setCoord(Coordinate926);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA927 =  ColorRGBA();
ColorRGBA927.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet925.addChild(&ColorRGBA927);

Shape924.setGeometry(&LineSet925);

HAnimSegment920.addChild(&Shape924);

HAnimSite& HAnimSite928 =  HAnimSite();
HAnimSite928.X3DNode::setName(CString("l_carpal_distal_phalanx_5_tip"));
HAnimSite928.setDEF(CString("hanim_l_carpal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor929 =  TouchSensor();
TouchSensor929.setDescription(CString("HAnimSite l_carpal_distal_phalanx_5_tip"));
HAnimSite928.addChild(&TouchSensor929);

Shape& Shape930 =  Shape();
Shape930.setUSE(CString("HAnimSiteShape"));
HAnimSite928.addChild(&Shape930);

HAnimSegment920.addChild(&HAnimSite928);

HAnimJoint919.addChildren(&HAnimSegment920);

HAnimJoint& HAnimJoint931 =  HAnimJoint();
HAnimJoint931.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint931.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint931.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint919.addChildren(&HAnimJoint931);

HAnimJoint910.addChildren(&HAnimJoint919);

HAnimJoint901.addChildren(&HAnimJoint910);

HAnimJoint749.addChildren(&HAnimJoint901);

HAnimJoint737.addChildren(&HAnimJoint749);

HAnimJoint716.addChildren(&HAnimJoint737);

HAnimJoint701.addChildren(&HAnimJoint716);

HAnimJoint692.addChildren(&HAnimJoint701);

HAnimJoint488.addChildren(&HAnimJoint692);

HAnimJoint& HAnimJoint932 =  HAnimJoint();
HAnimJoint932.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint932.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint932.setCenter(new float[]{-0.0694,1.46,-0.033});
HAnimSegment& HAnimSegment933 =  HAnimSegment();
HAnimSegment933.X3DNode::setName(CString("r_clavicle"));
HAnimSegment933.setDEF(CString("hanim_r_clavicle"));
Transform& Transform934 =  Transform();
Transform934.setTranslation(new float[]{-0.0694,1.46,-0.033});
Transform& Transform935 =  Transform();
//Empty Transform
Shape& Shape936 =  Shape();
Shape936.setUSE(CString("HAnimJointShape"));
Transform935.addChild(&Shape936);

Transform934.addChild(&Transform935);

HAnimSegment933.addChild(&Transform934);

Shape& Shape937 =  Shape();
LineSet& LineSet938 =  LineSet();
LineSet938.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate939 =  Coordinate();
Coordinate939.setPoint(new float[]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
LineSet938.setCoord(Coordinate939);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA& ColorRGBA940 =  ColorRGBA();
ColorRGBA940.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet938.addChild(&ColorRGBA940);

Shape937.setGeometry(&LineSet938);

HAnimSegment933.addChild(&Shape937);

HAnimJoint932.addChildren(&HAnimSegment933);

HAnimJoint& HAnimJoint941 =  HAnimJoint();
HAnimJoint941.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint941.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint941.setCenter(new float[]{-0.0836,1.4281,-0.0401});
HAnimSegment& HAnimSegment942 =  HAnimSegment();
HAnimSegment942.X3DNode::setName(CString("r_scapula"));
HAnimSegment942.setDEF(CString("hanim_r_scapula"));
Transform& Transform943 =  Transform();
Transform943.setTranslation(new float[]{-0.0836,1.4281,-0.0401});
Transform& Transform944 =  Transform();
//Empty Transform
Shape& Shape945 =  Shape();
Shape945.setUSE(CString("HAnimJointShape"));
Transform944.addChild(&Shape945);

Transform943.addChild(&Transform944);

HAnimSegment942.addChild(&Transform943);

Shape& Shape946 =  Shape();
LineSet& LineSet947 =  LineSet();
LineSet947.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate948 =  Coordinate();
Coordinate948.setPoint(new float[]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
LineSet947.setCoord(Coordinate948);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA& ColorRGBA949 =  ColorRGBA();
ColorRGBA949.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet947.addChild(&ColorRGBA949);

Shape946.setGeometry(&LineSet947);

HAnimSegment942.addChild(&Shape946);

HAnimSite& HAnimSite950 =  HAnimSite();
HAnimSite950.X3DNode::setName(CString("r_bideltoid"));
HAnimSite950.setDEF(CString("hanim_r_bideltoid"));
TouchSensor& TouchSensor951 =  TouchSensor();
TouchSensor951.setDescription(CString("HAnimSite r_bideltoid"));
HAnimSite950.addChild(&TouchSensor951);

Shape& Shape952 =  Shape();
Shape952.setUSE(CString("HAnimSiteShape"));
HAnimSite950.addChild(&Shape952);

HAnimSegment942.addChild(&HAnimSite950);

HAnimSite& HAnimSite953 =  HAnimSite();
HAnimSite953.X3DNode::setName(CString("r_humeral_lateral_epicondyles"));
HAnimSite953.setDEF(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimSite953.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor954 =  TouchSensor();
TouchSensor954.setDescription(CString("HAnimSite r_humeral_lateral_epicondyles"));
HAnimSite953.addChild(&TouchSensor954);

Shape& Shape955 =  Shape();
Shape955.setUSE(CString("HAnimSiteShape"));
HAnimSite953.addChild(&Shape955);

HAnimSegment942.addChild(&HAnimSite953);

HAnimJoint941.addChildren(&HAnimSegment942);

HAnimJoint& HAnimJoint956 =  HAnimJoint();
HAnimJoint956.X3DNode::setName(CString("r_shoulder"));
HAnimJoint956.setDEF(CString("hanim_r_shoulder"));
HAnimJoint956.setCenter(new float[]{-0.1907,1.4407,-0.0325});
HAnimSegment& HAnimSegment957 =  HAnimSegment();
HAnimSegment957.X3DNode::setName(CString("r_upperarm"));
HAnimSegment957.setDEF(CString("hanim_r_upperarm"));
Transform& Transform958 =  Transform();
Transform958.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Transform& Transform959 =  Transform();
//Empty Transform
Shape& Shape960 =  Shape();
Shape960.setUSE(CString("HAnimJointShape"));
Transform959.addChild(&Shape960);

Transform958.addChild(&Transform959);

HAnimSegment957.addChild(&Transform958);

Shape& Shape961 =  Shape();
LineSet& LineSet962 =  LineSet();
LineSet962.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate963 =  Coordinate();
Coordinate963.setPoint(new float[]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet962.setCoord(Coordinate963);

//from r_shoulder to r_elbow vertices 2
ColorRGBA& ColorRGBA964 =  ColorRGBA();
ColorRGBA964.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet962.addChild(&ColorRGBA964);

Shape961.setGeometry(&LineSet962);

HAnimSegment957.addChild(&Shape961);

HAnimSite& HAnimSite965 =  HAnimSite();
HAnimSite965.X3DNode::setName(CString("r_humeral_medial_epicondyles"));
HAnimSite965.setDEF(CString("hanim_r_humeral_medial_epicondyles"));
HAnimSite965.setTranslation(new float[]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor966 =  TouchSensor();
TouchSensor966.setDescription(CString("HAnimSite r_humeral_medial_epicondyles"));
HAnimSite965.addChild(&TouchSensor966);

Shape& Shape967 =  Shape();
Shape967.setUSE(CString("HAnimSiteShape"));
HAnimSite965.addChild(&Shape967);

HAnimSegment957.addChild(&HAnimSite965);

HAnimSite& HAnimSite968 =  HAnimSite();
HAnimSite968.X3DNode::setName(CString("r_olecranon"));
HAnimSite968.setDEF(CString("hanim_r_olecranon"));
HAnimSite968.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor969 =  TouchSensor();
TouchSensor969.setDescription(CString("HAnimSite r_olecranon"));
HAnimSite968.addChild(&TouchSensor969);

Shape& Shape970 =  Shape();
Shape970.setUSE(CString("HAnimSiteShape"));
HAnimSite968.addChild(&Shape970);

HAnimSegment957.addChild(&HAnimSite968);

HAnimSite& HAnimSite971 =  HAnimSite();
HAnimSite971.X3DNode::setName(CString("r_radial_styloid"));
HAnimSite971.setDEF(CString("hanim_r_radial_styloid"));
HAnimSite971.setTranslation(new float[]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor972 =  TouchSensor();
TouchSensor972.setDescription(CString("HAnimSite r_radial_styloid"));
HAnimSite971.addChild(&TouchSensor972);

Shape& Shape973 =  Shape();
Shape973.setUSE(CString("HAnimSiteShape"));
HAnimSite971.addChild(&Shape973);

HAnimSegment957.addChild(&HAnimSite971);

HAnimSite& HAnimSite974 =  HAnimSite();
HAnimSite974.X3DNode::setName(CString("r_radiale"));
HAnimSite974.setDEF(CString("hanim_r_radiale"));
HAnimSite974.setTranslation(new float[]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor975 =  TouchSensor();
TouchSensor975.setDescription(CString("HAnimSite r_radiale"));
HAnimSite974.addChild(&TouchSensor975);

Shape& Shape976 =  Shape();
Shape976.setUSE(CString("HAnimSiteShape"));
HAnimSite974.addChild(&Shape976);

HAnimSegment957.addChild(&HAnimSite974);

HAnimJoint956.addChildren(&HAnimSegment957);

HAnimJoint& HAnimJoint977 =  HAnimJoint();
HAnimJoint977.X3DNode::setName(CString("r_elbow"));
HAnimJoint977.setDEF(CString("hanim_r_elbow"));
HAnimJoint977.setCenter(new float[]{-0.1949,1.1388,-0.062});
HAnimSegment& HAnimSegment978 =  HAnimSegment();
HAnimSegment978.X3DNode::setName(CString("r_forearm"));
HAnimSegment978.setDEF(CString("hanim_r_forearm"));
Transform& Transform979 =  Transform();
Transform979.setTranslation(new float[]{-0.1949,1.1388,-0.062});
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
Coordinate984.setPoint(new float[]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet983.setCoord(Coordinate984);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA& ColorRGBA985 =  ColorRGBA();
ColorRGBA985.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet983.addChild(&ColorRGBA985);

Shape982.setGeometry(&LineSet983);

HAnimSegment978.addChild(&Shape982);

HAnimSite& HAnimSite986 =  HAnimSite();
HAnimSite986.X3DNode::setName(CString("r_ulnar_styloid"));
HAnimSite986.setDEF(CString("hanim_r_ulnar_styloid"));
HAnimSite986.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
TouchSensor& TouchSensor987 =  TouchSensor();
TouchSensor987.setDescription(CString("HAnimSite r_ulnar_styloid"));
HAnimSite986.addChild(&TouchSensor987);

Shape& Shape988 =  Shape();
Shape988.setUSE(CString("HAnimSiteShape"));
HAnimSite986.addChild(&Shape988);

HAnimSegment978.addChild(&HAnimSite986);

HAnimJoint977.addChildren(&HAnimSegment978);

HAnimJoint& HAnimJoint989 =  HAnimJoint();
HAnimJoint989.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint989.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint989.setCenter(new float[]{-0.1959,0.8694,-0.0521});
HAnimSegment& HAnimSegment990 =  HAnimSegment();
HAnimSegment990.X3DNode::setName(CString("r_carpal"));
HAnimSegment990.setDEF(CString("hanim_r_carpal"));
Transform& Transform991 =  Transform();
Transform991.setScale(new float[]{0.2,0.2,0.2});
Transform991.setTranslation(new float[]{-0.2,0.85,-0.05});
Transform991.setRotation(new float[]{0,0,1,-3.14});
//Transform right hand
Transform& Transform992 =  Transform();
Transform992.setRotation(new float[]{0,1,0,1.57});
//Transform right hand
Shape& Shape993 =  Shape();
Shape993.setUSE(CString("HAnimJointShape"));
Transform992.addChild(&Shape993);

Transform991.addChild(&Transform992);

HAnimSegment990.addChild(&Transform991);

Shape& Shape994 =  Shape();
LineSet& LineSet995 =  LineSet();
LineSet995.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate996 =  Coordinate();
Coordinate996.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473}, 6);
LineSet995.setCoord(Coordinate996);

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA997 =  ColorRGBA();
ColorRGBA997.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet995.addChild(&ColorRGBA997);

Shape994.setGeometry(&LineSet995);

HAnimSegment990.addChild(&Shape994);

Shape& Shape998 =  Shape();
LineSet& LineSet999 =  LineSet();
LineSet999.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1000 =  Coordinate();
Coordinate1000.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218}, 6);
LineSet999.setCoord(Coordinate1000);

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1001 =  ColorRGBA();
ColorRGBA1001.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet999.addChild(&ColorRGBA1001);

Shape998.setGeometry(&LineSet999);

HAnimSegment990.addChild(&Shape998);

HAnimSite& HAnimSite1002 =  HAnimSite();
HAnimSite1002.X3DNode::setName(CString("r_metacarpal_phalanx_2"));
HAnimSite1002.setDEF(CString("hanim_r_metacarpal_phalanx_2"));
HAnimSite1002.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
TouchSensor& TouchSensor1003 =  TouchSensor();
TouchSensor1003.setDescription(CString("HAnimSite r_metacarpal_phalanx_2"));
HAnimSite1002.addChild(&TouchSensor1003);

Shape& Shape1004 =  Shape();
Shape1004.setUSE(CString("HAnimSiteShape"));
HAnimSite1002.addChild(&Shape1004);

HAnimSegment990.addChild(&HAnimSite1002);

Shape& Shape1005 =  Shape();
LineSet& LineSet1006 =  LineSet();
LineSet1006.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1007 =  Coordinate();
Coordinate1007.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468}, 6);
LineSet1006.setCoord(Coordinate1007);

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1008 =  ColorRGBA();
ColorRGBA1008.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1006.addChild(&ColorRGBA1008);

Shape1005.setGeometry(&LineSet1006);

HAnimSegment990.addChild(&Shape1005);

HAnimSite& HAnimSite1009 =  HAnimSite();
HAnimSite1009.X3DNode::setName(CString("r_metacarpal_phalanx_3"));
HAnimSite1009.setDEF(CString("hanim_r_metacarpal_phalanx_3"));
TouchSensor& TouchSensor1010 =  TouchSensor();
TouchSensor1010.setDescription(CString("HAnimSite r_metacarpal_phalanx_3"));
HAnimSite1009.addChild(&TouchSensor1010);

Shape& Shape1011 =  Shape();
Shape1011.setUSE(CString("HAnimSiteShape"));
HAnimSite1009.addChild(&Shape1011);

HAnimSegment990.addChild(&HAnimSite1009);

Shape& Shape1012 =  Shape();
LineSet& LineSet1013 =  LineSet();
LineSet1013.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1014 =  Coordinate();
Coordinate1014.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732}, 6);
LineSet1013.setCoord(Coordinate1014);

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1015 =  ColorRGBA();
ColorRGBA1015.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1013.addChild(&ColorRGBA1015);

Shape1012.setGeometry(&LineSet1013);

HAnimSegment990.addChild(&Shape1012);

Shape& Shape1016 =  Shape();
LineSet& LineSet1017 =  LineSet();
LineSet1017.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1018 =  Coordinate();
Coordinate1018.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975}, 6);
LineSet1017.setCoord(Coordinate1018);

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1019 =  ColorRGBA();
ColorRGBA1019.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1017.addChild(&ColorRGBA1019);

Shape1016.setGeometry(&LineSet1017);

HAnimSegment990.addChild(&Shape1016);

HAnimSite& HAnimSite1020 =  HAnimSite();
HAnimSite1020.X3DNode::setName(CString("r_metacarpal_phalanx_5"));
HAnimSite1020.setDEF(CString("hanim_r_metacarpal_phalanx_5"));
HAnimSite1020.setTranslation(new float[]{-0.1929,0.789,-0.1064});
TouchSensor& TouchSensor1021 =  TouchSensor();
TouchSensor1021.setDescription(CString("HAnimSite r_metacarpal_phalanx_5"));
HAnimSite1020.addChild(&TouchSensor1021);

Shape& Shape1022 =  Shape();
Shape1022.setUSE(CString("HAnimSiteShape"));
HAnimSite1020.addChild(&Shape1022);

HAnimSegment990.addChild(&HAnimSite1020);

HAnimJoint989.addChildren(&HAnimSegment990);

HAnimJoint& HAnimJoint1023 =  HAnimJoint();
HAnimJoint1023.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint1023.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint1023.setCenter(new float[]{-0.1899,0.8502,-0.0473});
HAnimSegment& HAnimSegment1024 =  HAnimSegment();
HAnimSegment1024.X3DNode::setName(CString("r_metacarpal_1"));
HAnimSegment1024.setDEF(CString("hanim_r_metacarpal_1"));
Transform& Transform1025 =  Transform();
Transform1025.setTranslation(new float[]{-0.1899,0.8502,-0.0473});
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
Coordinate1030.setPoint(new float[]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
LineSet1029.setCoord(Coordinate1030);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1031 =  ColorRGBA();
ColorRGBA1031.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1029.addChild(&ColorRGBA1031);

Shape1028.setGeometry(&LineSet1029);

HAnimSegment1024.addChild(&Shape1028);

HAnimJoint1023.addChildren(&HAnimSegment1024);

HAnimJoint& HAnimJoint1032 =  HAnimJoint();
HAnimJoint1032.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1032.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint1032.setCenter(new float[]{-0.1874,0.8256,0.0306});
HAnimSegment& HAnimSegment1033 =  HAnimSegment();
HAnimSegment1033.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1033.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform& Transform1034 =  Transform();
Transform1034.setTranslation(new float[]{-0.1874,0.8256,0.0306});
Transform& Transform1035 =  Transform();
//Empty Transform
Shape& Shape1036 =  Shape();
Shape1036.setUSE(CString("HAnimJointShape"));
Transform1035.addChild(&Shape1036);

Transform1034.addChild(&Transform1035);

HAnimSegment1033.addChild(&Transform1034);

Shape& Shape1037 =  Shape();
LineSet& LineSet1038 =  LineSet();
LineSet1038.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1039 =  Coordinate();
Coordinate1039.setPoint(new float[]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
LineSet1038.setCoord(Coordinate1039);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1040 =  ColorRGBA();
ColorRGBA1040.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1038.addChild(&ColorRGBA1040);

Shape1037.setGeometry(&LineSet1038);

HAnimSegment1033.addChild(&Shape1037);

HAnimSite& HAnimSite1041 =  HAnimSite();
HAnimSite1041.X3DNode::setName(CString("r_carpal_distal_phalanx_1_tip"));
HAnimSite1041.setDEF(CString("hanim_r_carpal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor1042 =  TouchSensor();
TouchSensor1042.setDescription(CString("HAnimSite r_carpal_distal_phalanx_1_tip"));
HAnimSite1041.addChild(&TouchSensor1042);

Shape& Shape1043 =  Shape();
Shape1043.setUSE(CString("HAnimSiteShape"));
HAnimSite1041.addChild(&Shape1043);

HAnimSegment1033.addChild(&HAnimSite1041);

HAnimJoint1032.addChildren(&HAnimSegment1033);

HAnimJoint& HAnimJoint1044 =  HAnimJoint();
HAnimJoint1044.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1044.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint1044.setCenter(new float[]{-0.1864,0.819,0.0506});
HAnimJoint1032.addChildren(&HAnimJoint1044);

HAnimJoint1023.addChildren(&HAnimJoint1032);

HAnimJoint989.addChildren(&HAnimJoint1023);

HAnimJoint& HAnimJoint1045 =  HAnimJoint();
HAnimJoint1045.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint1045.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint1045.setCenter(new float[]{-0.1961,0.8055,-0.0218});
HAnimSegment& HAnimSegment1046 =  HAnimSegment();
HAnimSegment1046.X3DNode::setName(CString("r_metacarpal_2"));
HAnimSegment1046.setDEF(CString("hanim_r_metacarpal_2"));
Transform& Transform1047 =  Transform();
Transform1047.setTranslation(new float[]{-0.1961,0.8055,-0.0218});
Transform& Transform1048 =  Transform();
//Empty Transform
Shape& Shape1049 =  Shape();
Shape1049.setUSE(CString("HAnimJointShape"));
Transform1048.addChild(&Shape1049);

Transform1047.addChild(&Transform1048);

HAnimSegment1046.addChild(&Transform1047);

Shape& Shape1050 =  Shape();
LineSet& LineSet1051 =  LineSet();
LineSet1051.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1052 =  Coordinate();
Coordinate1052.setPoint(new float[]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
LineSet1051.setCoord(Coordinate1052);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1053 =  ColorRGBA();
ColorRGBA1053.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1051.addChild(&ColorRGBA1053);

Shape1050.setGeometry(&LineSet1051);

HAnimSegment1046.addChild(&Shape1050);

HAnimJoint1045.addChildren(&HAnimSegment1046);

HAnimJoint& HAnimJoint1054 =  HAnimJoint();
HAnimJoint1054.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1054.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint1054.setCenter(new float[]{-0.1961,0.7846,-0.0218});
HAnimSegment& HAnimSegment1055 =  HAnimSegment();
HAnimSegment1055.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1055.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform& Transform1056 =  Transform();
Transform1056.setTranslation(new float[]{-0.1961,0.7846,-0.0218});
Transform& Transform1057 =  Transform();
//Empty Transform
Shape& Shape1058 =  Shape();
Shape1058.setUSE(CString("HAnimJointShape"));
Transform1057.addChild(&Shape1058);

Transform1056.addChild(&Transform1057);

HAnimSegment1055.addChild(&Transform1056);

Shape& Shape1059 =  Shape();
LineSet& LineSet1060 =  LineSet();
LineSet1060.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1061 =  Coordinate();
Coordinate1061.setPoint(new float[]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
LineSet1060.setCoord(Coordinate1061);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1062 =  ColorRGBA();
ColorRGBA1062.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1060.addChild(&ColorRGBA1062);

Shape1059.setGeometry(&LineSet1060);

HAnimSegment1055.addChild(&Shape1059);

HAnimJoint1054.addChildren(&HAnimSegment1055);

HAnimJoint& HAnimJoint1063 =  HAnimJoint();
HAnimJoint1063.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1063.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1063.setCenter(new float[]{-0.1954,0.7393,-0.0185});
HAnimSegment& HAnimSegment1064 =  HAnimSegment();
HAnimSegment1064.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1064.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform& Transform1065 =  Transform();
Transform1065.setTranslation(new float[]{-0.1954,0.7393,-0.0185});
Transform& Transform1066 =  Transform();
//Empty Transform
Shape& Shape1067 =  Shape();
Shape1067.setUSE(CString("HAnimJointShape"));
Transform1066.addChild(&Shape1067);

Transform1065.addChild(&Transform1066);

HAnimSegment1064.addChild(&Transform1065);

Shape& Shape1068 =  Shape();
LineSet& LineSet1069 =  LineSet();
LineSet1069.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1070 =  Coordinate();
Coordinate1070.setPoint(new float[]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
LineSet1069.setCoord(Coordinate1070);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1071 =  ColorRGBA();
ColorRGBA1071.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1069.addChild(&ColorRGBA1071);

Shape1068.setGeometry(&LineSet1069);

HAnimSegment1064.addChild(&Shape1068);

HAnimSite& HAnimSite1072 =  HAnimSite();
HAnimSite1072.X3DNode::setName(CString("r_carpal_distal_phalanx_2_tip"));
HAnimSite1072.setDEF(CString("hanim_r_carpal_distal_phalanx_2_tip"));
TouchSensor& TouchSensor1073 =  TouchSensor();
TouchSensor1073.setDescription(CString("HAnimSite r_carpal_distal_phalanx_2_tip"));
HAnimSite1072.addChild(&TouchSensor1073);

Shape& Shape1074 =  Shape();
Shape1074.setUSE(CString("HAnimSiteShape"));
HAnimSite1072.addChild(&Shape1074);

HAnimSegment1064.addChild(&HAnimSite1072);

HAnimSite& HAnimSite1075 =  HAnimSite();
HAnimSite1075.X3DNode::setName(CString("r_dactylion"));
HAnimSite1075.setDEF(CString("hanim_r_dactylion"));
HAnimSite1075.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
TouchSensor& TouchSensor1076 =  TouchSensor();
TouchSensor1076.setDescription(CString("HAnimSite r_dactylion"));
HAnimSite1075.addChild(&TouchSensor1076);

Shape& Shape1077 =  Shape();
Shape1077.setUSE(CString("HAnimSiteShape"));
HAnimSite1075.addChild(&Shape1077);

HAnimSegment1064.addChild(&HAnimSite1075);

HAnimJoint1063.addChildren(&HAnimSegment1064);

HAnimJoint& HAnimJoint1078 =  HAnimJoint();
HAnimJoint1078.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1078.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint1078.setCenter(new float[]{-0.1945,0.7169,-0.0173});
HAnimJoint1063.addChildren(&HAnimJoint1078);

HAnimJoint1054.addChildren(&HAnimJoint1063);

HAnimJoint1045.addChildren(&HAnimJoint1054);

HAnimJoint989.addChildren(&HAnimJoint1045);

HAnimJoint& HAnimJoint1079 =  HAnimJoint();
HAnimJoint1079.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint1079.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint1079.setCenter(new float[]{-0.1972,0.806,-0.0468});
HAnimSegment& HAnimSegment1080 =  HAnimSegment();
HAnimSegment1080.X3DNode::setName(CString("r_metacarpal_3"));
HAnimSegment1080.setDEF(CString("hanim_r_metacarpal_3"));
Transform& Transform1081 =  Transform();
Transform1081.setTranslation(new float[]{-0.1972,0.806,-0.0468});
Transform& Transform1082 =  Transform();
//Empty Transform
Shape& Shape1083 =  Shape();
Shape1083.setUSE(CString("HAnimJointShape"));
Transform1082.addChild(&Shape1083);

Transform1081.addChild(&Transform1082);

HAnimSegment1080.addChild(&Transform1081);

Shape& Shape1084 =  Shape();
LineSet& LineSet1085 =  LineSet();
LineSet1085.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1086 =  Coordinate();
Coordinate1086.setPoint(new float[]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
LineSet1085.setCoord(Coordinate1086);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1087 =  ColorRGBA();
ColorRGBA1087.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1085.addChild(&ColorRGBA1087);

Shape1084.setGeometry(&LineSet1085);

HAnimSegment1080.addChild(&Shape1084);

HAnimJoint1079.addChildren(&HAnimSegment1080);

HAnimJoint& HAnimJoint1088 =  HAnimJoint();
HAnimJoint1088.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1088.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint1088.setCenter(new float[]{-0.1972,0.7849,-0.0468});
HAnimSegment& HAnimSegment1089 =  HAnimSegment();
HAnimSegment1089.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1089.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform& Transform1090 =  Transform();
Transform1090.setTranslation(new float[]{-0.1972,0.7849,-0.0468});
Transform& Transform1091 =  Transform();
//Empty Transform
Shape& Shape1092 =  Shape();
Shape1092.setUSE(CString("HAnimJointShape"));
Transform1091.addChild(&Shape1092);

Transform1090.addChild(&Transform1091);

HAnimSegment1089.addChild(&Transform1090);

Shape& Shape1093 =  Shape();
LineSet& LineSet1094 =  LineSet();
LineSet1094.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1095 =  Coordinate();
Coordinate1095.setPoint(new float[]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
LineSet1094.setCoord(Coordinate1095);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1096 =  ColorRGBA();
ColorRGBA1096.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1094.addChild(&ColorRGBA1096);

Shape1093.setGeometry(&LineSet1094);

HAnimSegment1089.addChild(&Shape1093);

HAnimJoint1088.addChildren(&HAnimSegment1089);

HAnimJoint& HAnimJoint1097 =  HAnimJoint();
HAnimJoint1097.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1097.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1097.setCenter(new float[]{-0.195,0.7304,-0.0441});
HAnimSegment& HAnimSegment1098 =  HAnimSegment();
HAnimSegment1098.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1098.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform& Transform1099 =  Transform();
Transform1099.setTranslation(new float[]{-0.195,0.7304,-0.0441});
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
Coordinate1104.setPoint(new float[]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
LineSet1103.setCoord(Coordinate1104);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1105 =  ColorRGBA();
ColorRGBA1105.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1103.addChild(&ColorRGBA1105);

Shape1102.setGeometry(&LineSet1103);

HAnimSegment1098.addChild(&Shape1102);

HAnimSite& HAnimSite1106 =  HAnimSite();
HAnimSite1106.X3DNode::setName(CString("r_carpal_distal_phalanx_3_tip"));
HAnimSite1106.setDEF(CString("hanim_r_carpal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor1107 =  TouchSensor();
TouchSensor1107.setDescription(CString("HAnimSite r_carpal_distal_phalanx_3_tip"));
HAnimSite1106.addChild(&TouchSensor1107);

Shape& Shape1108 =  Shape();
Shape1108.setUSE(CString("HAnimSiteShape"));
HAnimSite1106.addChild(&Shape1108);

HAnimSegment1098.addChild(&HAnimSite1106);

HAnimJoint1097.addChildren(&HAnimSegment1098);

HAnimJoint& HAnimJoint1109 =  HAnimJoint();
HAnimJoint1109.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1109.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint1109.setCenter(new float[]{-0.1939,0.7042,-0.0432});
HAnimJoint1097.addChildren(&HAnimJoint1109);

HAnimJoint1088.addChildren(&HAnimJoint1097);

HAnimJoint1079.addChildren(&HAnimJoint1088);

HAnimJoint989.addChildren(&HAnimJoint1079);

HAnimJoint& HAnimJoint1110 =  HAnimJoint();
HAnimJoint1110.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint1110.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint1110.setCenter(new float[]{-0.1951,0.8049,-0.0732});
HAnimSegment& HAnimSegment1111 =  HAnimSegment();
HAnimSegment1111.X3DNode::setName(CString("r_metacarpal_4"));
HAnimSegment1111.setDEF(CString("hanim_r_metacarpal_4"));
Transform& Transform1112 =  Transform();
Transform1112.setTranslation(new float[]{-0.1951,0.8049,-0.0732});
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
Coordinate1117.setPoint(new float[]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
LineSet1116.setCoord(Coordinate1117);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1118 =  ColorRGBA();
ColorRGBA1118.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1116.addChild(&ColorRGBA1118);

Shape1115.setGeometry(&LineSet1116);

HAnimSegment1111.addChild(&Shape1115);

HAnimJoint1110.addChildren(&HAnimSegment1111);

HAnimJoint& HAnimJoint1119 =  HAnimJoint();
HAnimJoint1119.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1119.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint1119.setCenter(new float[]{-0.1951,0.7845,-0.0732});
HAnimSegment& HAnimSegment1120 =  HAnimSegment();
HAnimSegment1120.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1120.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform& Transform1121 =  Transform();
Transform1121.setTranslation(new float[]{-0.1951,0.7845,-0.0732});
Transform& Transform1122 =  Transform();
//Empty Transform
Shape& Shape1123 =  Shape();
Shape1123.setUSE(CString("HAnimJointShape"));
Transform1122.addChild(&Shape1123);

Transform1121.addChild(&Transform1122);

HAnimSegment1120.addChild(&Transform1121);

Shape& Shape1124 =  Shape();
LineSet& LineSet1125 =  LineSet();
LineSet1125.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1126 =  Coordinate();
Coordinate1126.setPoint(new float[]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
LineSet1125.setCoord(Coordinate1126);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1127 =  ColorRGBA();
ColorRGBA1127.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1125.addChild(&ColorRGBA1127);

Shape1124.setGeometry(&LineSet1125);

HAnimSegment1120.addChild(&Shape1124);

HAnimJoint1119.addChildren(&HAnimSegment1120);

HAnimJoint& HAnimJoint1128 =  HAnimJoint();
HAnimJoint1128.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1128.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1128.setCenter(new float[]{-0.192,0.7318,-0.0716});
HAnimSegment& HAnimSegment1129 =  HAnimSegment();
HAnimSegment1129.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1129.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform& Transform1130 =  Transform();
Transform1130.setTranslation(new float[]{-0.192,0.7318,-0.0716});
Transform& Transform1131 =  Transform();
//Empty Transform
Shape& Shape1132 =  Shape();
Shape1132.setUSE(CString("HAnimJointShape"));
Transform1131.addChild(&Shape1132);

Transform1130.addChild(&Transform1131);

HAnimSegment1129.addChild(&Transform1130);

Shape& Shape1133 =  Shape();
LineSet& LineSet1134 =  LineSet();
LineSet1134.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1135 =  Coordinate();
Coordinate1135.setPoint(new float[]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
LineSet1134.setCoord(Coordinate1135);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1136 =  ColorRGBA();
ColorRGBA1136.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1134.addChild(&ColorRGBA1136);

Shape1133.setGeometry(&LineSet1134);

HAnimSegment1129.addChild(&Shape1133);

HAnimSite& HAnimSite1137 =  HAnimSite();
HAnimSite1137.X3DNode::setName(CString("r_carpal_distal_phalanx_4_tip"));
HAnimSite1137.setDEF(CString("hanim_r_carpal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor1138 =  TouchSensor();
TouchSensor1138.setDescription(CString("HAnimSite r_carpal_distal_phalanx_4_tip"));
HAnimSite1137.addChild(&TouchSensor1138);

Shape& Shape1139 =  Shape();
Shape1139.setUSE(CString("HAnimSiteShape"));
HAnimSite1137.addChild(&Shape1139);

HAnimSegment1129.addChild(&HAnimSite1137);

HAnimJoint1128.addChildren(&HAnimSegment1129);

HAnimJoint& HAnimJoint1140 =  HAnimJoint();
HAnimJoint1140.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1140.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint1140.setCenter(new float[]{-0.1908,0.7077,-0.0706});
HAnimJoint1128.addChildren(&HAnimJoint1140);

HAnimJoint1119.addChildren(&HAnimJoint1128);

HAnimJoint1110.addChildren(&HAnimJoint1119);

HAnimJoint989.addChildren(&HAnimJoint1110);

HAnimJoint& HAnimJoint1141 =  HAnimJoint();
HAnimJoint1141.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint1141.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint1141.setCenter(new float[]{-0.1926,0.8096,-0.0975});
HAnimSegment& HAnimSegment1142 =  HAnimSegment();
HAnimSegment1142.X3DNode::setName(CString("r_metacarpal_5"));
HAnimSegment1142.setDEF(CString("hanim_r_metacarpal_5"));
Transform& Transform1143 =  Transform();
Transform1143.setTranslation(new float[]{-0.1926,0.8096,-0.0975});
Transform& Transform1144 =  Transform();
//Empty Transform
Shape& Shape1145 =  Shape();
Shape1145.setUSE(CString("HAnimJointShape"));
Transform1144.addChild(&Shape1145);

Transform1143.addChild(&Transform1144);

HAnimSegment1142.addChild(&Transform1143);

Shape& Shape1146 =  Shape();
LineSet& LineSet1147 =  LineSet();
LineSet1147.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1148 =  Coordinate();
Coordinate1148.setPoint(new float[]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
LineSet1147.setCoord(Coordinate1148);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1149 =  ColorRGBA();
ColorRGBA1149.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1147.addChild(&ColorRGBA1149);

Shape1146.setGeometry(&LineSet1147);

HAnimSegment1142.addChild(&Shape1146);

HAnimJoint1141.addChildren(&HAnimSegment1142);

HAnimJoint& HAnimJoint1150 =  HAnimJoint();
HAnimJoint1150.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1150.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint1150.setCenter(new float[]{-0.1926,0.7896,-0.0975});
HAnimSegment& HAnimSegment1151 =  HAnimSegment();
HAnimSegment1151.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1151.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform& Transform1152 =  Transform();
Transform1152.setTranslation(new float[]{-0.1926,0.7896,-0.0975});
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
Coordinate1157.setPoint(new float[]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
LineSet1156.setCoord(Coordinate1157);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1158 =  ColorRGBA();
ColorRGBA1158.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1156.addChild(&ColorRGBA1158);

Shape1155.setGeometry(&LineSet1156);

HAnimSegment1151.addChild(&Shape1155);

HAnimJoint1150.addChildren(&HAnimSegment1151);

HAnimJoint& HAnimJoint1159 =  HAnimJoint();
HAnimJoint1159.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1159.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1159.setCenter(new float[]{-0.1902,0.7483,-0.0963});
HAnimSegment& HAnimSegment1160 =  HAnimSegment();
HAnimSegment1160.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1160.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform& Transform1161 =  Transform();
Transform1161.setTranslation(new float[]{-0.1902,0.7483,-0.0963});
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
Coordinate1166.setPoint(new float[]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
LineSet1165.setCoord(Coordinate1166);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1167 =  ColorRGBA();
ColorRGBA1167.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1165.addChild(&ColorRGBA1167);

Shape1164.setGeometry(&LineSet1165);

HAnimSegment1160.addChild(&Shape1164);

HAnimSite& HAnimSite1168 =  HAnimSite();
HAnimSite1168.X3DNode::setName(CString("r_carpal_distal_phalanx_5_tip"));
HAnimSite1168.setDEF(CString("hanim_r_carpal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor1169 =  TouchSensor();
TouchSensor1169.setDescription(CString("HAnimSite r_carpal_distal_phalanx_5_tip"));
HAnimSite1168.addChild(&TouchSensor1169);

Shape& Shape1170 =  Shape();
Shape1170.setUSE(CString("HAnimSiteShape"));
HAnimSite1168.addChild(&Shape1170);

HAnimSegment1160.addChild(&HAnimSite1168);

HAnimJoint1159.addChildren(&HAnimSegment1160);

HAnimJoint& HAnimJoint1171 =  HAnimJoint();
HAnimJoint1171.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1171.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint1171.setCenter(new float[]{-0.1908,0.754,-0.096});
HAnimJoint1159.addChildren(&HAnimJoint1171);

HAnimJoint1150.addChildren(&HAnimJoint1159);

HAnimJoint1141.addChildren(&HAnimJoint1150);

HAnimJoint989.addChildren(&HAnimJoint1141);

HAnimJoint977.addChildren(&HAnimJoint989);

HAnimJoint956.addChildren(&HAnimJoint977);

HAnimJoint941.addChildren(&HAnimJoint956);

HAnimJoint932.addChildren(&HAnimJoint941);

HAnimJoint488.addChildren(&HAnimJoint932);

HAnimJoint473.addChildren(&HAnimJoint488);

HAnimJoint464.addChildren(&HAnimJoint473);

HAnimJoint455.addChildren(&HAnimJoint464);

HAnimJoint446.addChildren(&HAnimJoint455);

HAnimJoint434.addChildren(&HAnimJoint446);

HAnimJoint413.addChildren(&HAnimJoint434);

HAnimJoint404.addChildren(&HAnimJoint413);

HAnimJoint395.addChildren(&HAnimJoint404);

HAnimJoint380.addChildren(&HAnimJoint395);

HAnimJoint368.addChildren(&HAnimJoint380);

HAnimJoint359.addChildren(&HAnimJoint368);

HAnimJoint350.addChildren(&HAnimJoint359);

HAnimJoint341.addChildren(&HAnimJoint350);

HAnimJoint323.addChildren(&HAnimJoint341);

HAnimJoint314.addChildren(&HAnimJoint323);

HAnimJoint305.addChildren(&HAnimJoint314);

HAnimJoint52.addChildren(&HAnimJoint305);

HAnimHumanoid43.setSkeleton(&HAnimJoint52);

HAnimJoint& HAnimJoint1172 =  HAnimJoint();
HAnimJoint1172.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid43.setJoints(&HAnimJoint1172);

HAnimJoint& HAnimJoint1173 =  HAnimJoint();
HAnimJoint1173.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid43.setJoints(&HAnimJoint1173);

HAnimJoint& HAnimJoint1174 =  HAnimJoint();
HAnimJoint1174.setUSE(CString("hanim_l_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1174);

HAnimJoint& HAnimJoint1175 =  HAnimJoint();
HAnimJoint1175.setUSE(CString("hanim_l_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1175);

HAnimJoint& HAnimJoint1176 =  HAnimJoint();
HAnimJoint1176.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint1176);

HAnimJoint& HAnimJoint1177 =  HAnimJoint();
HAnimJoint1177.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1177);

HAnimJoint& HAnimJoint1178 =  HAnimJoint();
HAnimJoint1178.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1178);

HAnimJoint& HAnimJoint1179 =  HAnimJoint();
HAnimJoint1179.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1179);

HAnimJoint& HAnimJoint1180 =  HAnimJoint();
HAnimJoint1180.setUSE(CString("hanim_r_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1180);

HAnimJoint& HAnimJoint1181 =  HAnimJoint();
HAnimJoint1181.setUSE(CString("hanim_r_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1181);

HAnimJoint& HAnimJoint1182 =  HAnimJoint();
HAnimJoint1182.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint1182);

HAnimJoint& HAnimJoint1183 =  HAnimJoint();
HAnimJoint1183.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1183);

HAnimJoint& HAnimJoint1184 =  HAnimJoint();
HAnimJoint1184.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1184);

HAnimJoint& HAnimJoint1185 =  HAnimJoint();
HAnimJoint1185.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1185);

HAnimJoint& HAnimJoint1186 =  HAnimJoint();
HAnimJoint1186.setUSE(CString("hanim_vl5"));
HAnimHumanoid43.setJoints(&HAnimJoint1186);

HAnimJoint& HAnimJoint1187 =  HAnimJoint();
HAnimJoint1187.setUSE(CString("hanim_vl4"));
HAnimHumanoid43.setJoints(&HAnimJoint1187);

HAnimJoint& HAnimJoint1188 =  HAnimJoint();
HAnimJoint1188.setUSE(CString("hanim_vl3"));
HAnimHumanoid43.setJoints(&HAnimJoint1188);

HAnimJoint& HAnimJoint1189 =  HAnimJoint();
HAnimJoint1189.setUSE(CString("hanim_vl2"));
HAnimHumanoid43.setJoints(&HAnimJoint1189);

HAnimJoint& HAnimJoint1190 =  HAnimJoint();
HAnimJoint1190.setUSE(CString("hanim_vl1"));
HAnimHumanoid43.setJoints(&HAnimJoint1190);

HAnimJoint& HAnimJoint1191 =  HAnimJoint();
HAnimJoint1191.setUSE(CString("hanim_vt12"));
HAnimHumanoid43.setJoints(&HAnimJoint1191);

HAnimJoint& HAnimJoint1192 =  HAnimJoint();
HAnimJoint1192.setUSE(CString("hanim_vt11"));
HAnimHumanoid43.setJoints(&HAnimJoint1192);

HAnimJoint& HAnimJoint1193 =  HAnimJoint();
HAnimJoint1193.setUSE(CString("hanim_vt10"));
HAnimHumanoid43.setJoints(&HAnimJoint1193);

HAnimJoint& HAnimJoint1194 =  HAnimJoint();
HAnimJoint1194.setUSE(CString("hanim_vt9"));
HAnimHumanoid43.setJoints(&HAnimJoint1194);

HAnimJoint& HAnimJoint1195 =  HAnimJoint();
HAnimJoint1195.setUSE(CString("hanim_vt8"));
HAnimHumanoid43.setJoints(&HAnimJoint1195);

HAnimJoint& HAnimJoint1196 =  HAnimJoint();
HAnimJoint1196.setUSE(CString("hanim_vt7"));
HAnimHumanoid43.setJoints(&HAnimJoint1196);

HAnimJoint& HAnimJoint1197 =  HAnimJoint();
HAnimJoint1197.setUSE(CString("hanim_vt6"));
HAnimHumanoid43.setJoints(&HAnimJoint1197);

HAnimJoint& HAnimJoint1198 =  HAnimJoint();
HAnimJoint1198.setUSE(CString("hanim_vt5"));
HAnimHumanoid43.setJoints(&HAnimJoint1198);

HAnimJoint& HAnimJoint1199 =  HAnimJoint();
HAnimJoint1199.setUSE(CString("hanim_vt4"));
HAnimHumanoid43.setJoints(&HAnimJoint1199);

HAnimJoint& HAnimJoint1200 =  HAnimJoint();
HAnimJoint1200.setUSE(CString("hanim_vt3"));
HAnimHumanoid43.setJoints(&HAnimJoint1200);

HAnimJoint& HAnimJoint1201 =  HAnimJoint();
HAnimJoint1201.setUSE(CString("hanim_vt2"));
HAnimHumanoid43.setJoints(&HAnimJoint1201);

HAnimJoint& HAnimJoint1202 =  HAnimJoint();
HAnimJoint1202.setUSE(CString("hanim_vt1"));
HAnimHumanoid43.setJoints(&HAnimJoint1202);

HAnimJoint& HAnimJoint1203 =  HAnimJoint();
HAnimJoint1203.setUSE(CString("hanim_vc7"));
HAnimHumanoid43.setJoints(&HAnimJoint1203);

HAnimJoint& HAnimJoint1204 =  HAnimJoint();
HAnimJoint1204.setUSE(CString("hanim_vc6"));
HAnimHumanoid43.setJoints(&HAnimJoint1204);

HAnimJoint& HAnimJoint1205 =  HAnimJoint();
HAnimJoint1205.setUSE(CString("hanim_vc5"));
HAnimHumanoid43.setJoints(&HAnimJoint1205);

HAnimJoint& HAnimJoint1206 =  HAnimJoint();
HAnimJoint1206.setUSE(CString("hanim_vc4"));
HAnimHumanoid43.setJoints(&HAnimJoint1206);

HAnimJoint& HAnimJoint1207 =  HAnimJoint();
HAnimJoint1207.setUSE(CString("hanim_vc3"));
HAnimHumanoid43.setJoints(&HAnimJoint1207);

HAnimJoint& HAnimJoint1208 =  HAnimJoint();
HAnimJoint1208.setUSE(CString("hanim_vc2"));
HAnimHumanoid43.setJoints(&HAnimJoint1208);

HAnimJoint& HAnimJoint1209 =  HAnimJoint();
HAnimJoint1209.setUSE(CString("hanim_vc1"));
HAnimHumanoid43.setJoints(&HAnimJoint1209);

HAnimJoint& HAnimJoint1210 =  HAnimJoint();
HAnimJoint1210.setUSE(CString("hanim_skullbase"));
HAnimHumanoid43.setJoints(&HAnimJoint1210);

HAnimJoint& HAnimJoint1211 =  HAnimJoint();
HAnimJoint1211.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1211);

HAnimJoint& HAnimJoint1212 =  HAnimJoint();
HAnimJoint1212.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1212);

HAnimJoint& HAnimJoint1213 =  HAnimJoint();
HAnimJoint1213.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1213);

HAnimJoint& HAnimJoint1214 =  HAnimJoint();
HAnimJoint1214.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1214);

HAnimJoint& HAnimJoint1215 =  HAnimJoint();
HAnimJoint1215.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1215);

HAnimJoint& HAnimJoint1216 =  HAnimJoint();
HAnimJoint1216.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1216);

HAnimJoint& HAnimJoint1217 =  HAnimJoint();
HAnimJoint1217.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid43.setJoints(&HAnimJoint1217);

HAnimJoint& HAnimJoint1218 =  HAnimJoint();
HAnimJoint1218.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1218);

HAnimJoint& HAnimJoint1219 =  HAnimJoint();
HAnimJoint1219.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1219);

HAnimJoint& HAnimJoint1220 =  HAnimJoint();
HAnimJoint1220.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1220);

HAnimJoint& HAnimJoint1221 =  HAnimJoint();
HAnimJoint1221.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1221);

HAnimJoint& HAnimJoint1222 =  HAnimJoint();
HAnimJoint1222.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint1222);

HAnimJoint& HAnimJoint1223 =  HAnimJoint();
HAnimJoint1223.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1223);

HAnimJoint& HAnimJoint1224 =  HAnimJoint();
HAnimJoint1224.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1224);

HAnimJoint& HAnimJoint1225 =  HAnimJoint();
HAnimJoint1225.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1225);

HAnimJoint& HAnimJoint1226 =  HAnimJoint();
HAnimJoint1226.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1226);

HAnimJoint& HAnimJoint1227 =  HAnimJoint();
HAnimJoint1227.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1227);

HAnimJoint& HAnimJoint1228 =  HAnimJoint();
HAnimJoint1228.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1228);

HAnimJoint& HAnimJoint1229 =  HAnimJoint();
HAnimJoint1229.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1229);

HAnimJoint& HAnimJoint1230 =  HAnimJoint();
HAnimJoint1230.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1230);

HAnimJoint& HAnimJoint1231 =  HAnimJoint();
HAnimJoint1231.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1231);

HAnimJoint& HAnimJoint1232 =  HAnimJoint();
HAnimJoint1232.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1232);

HAnimJoint& HAnimJoint1233 =  HAnimJoint();
HAnimJoint1233.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1233);

HAnimJoint& HAnimJoint1234 =  HAnimJoint();
HAnimJoint1234.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1234);

HAnimJoint& HAnimJoint1235 =  HAnimJoint();
HAnimJoint1235.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1235);

HAnimJoint& HAnimJoint1236 =  HAnimJoint();
HAnimJoint1236.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1236);

HAnimJoint& HAnimJoint1237 =  HAnimJoint();
HAnimJoint1237.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1237);

HAnimJoint& HAnimJoint1238 =  HAnimJoint();
HAnimJoint1238.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1238);

HAnimJoint& HAnimJoint1239 =  HAnimJoint();
HAnimJoint1239.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1239);

HAnimJoint& HAnimJoint1240 =  HAnimJoint();
HAnimJoint1240.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1240);

HAnimJoint& HAnimJoint1241 =  HAnimJoint();
HAnimJoint1241.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1241);

HAnimJoint& HAnimJoint1242 =  HAnimJoint();
HAnimJoint1242.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1242);

HAnimJoint& HAnimJoint1243 =  HAnimJoint();
HAnimJoint1243.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1243);

HAnimJoint& HAnimJoint1244 =  HAnimJoint();
HAnimJoint1244.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1244);

HAnimJoint& HAnimJoint1245 =  HAnimJoint();
HAnimJoint1245.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1245);

HAnimJoint& HAnimJoint1246 =  HAnimJoint();
HAnimJoint1246.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint1246);

HAnimJoint& HAnimJoint1247 =  HAnimJoint();
HAnimJoint1247.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1247);

HAnimJoint& HAnimJoint1248 =  HAnimJoint();
HAnimJoint1248.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1248);

HAnimJoint& HAnimJoint1249 =  HAnimJoint();
HAnimJoint1249.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1249);

HAnimJoint& HAnimJoint1250 =  HAnimJoint();
HAnimJoint1250.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1250);

HAnimJoint& HAnimJoint1251 =  HAnimJoint();
HAnimJoint1251.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1251);

HAnimJoint& HAnimJoint1252 =  HAnimJoint();
HAnimJoint1252.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1252);

HAnimJoint& HAnimJoint1253 =  HAnimJoint();
HAnimJoint1253.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1253);

HAnimJoint& HAnimJoint1254 =  HAnimJoint();
HAnimJoint1254.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1254);

HAnimJoint& HAnimJoint1255 =  HAnimJoint();
HAnimJoint1255.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1255);

HAnimJoint& HAnimJoint1256 =  HAnimJoint();
HAnimJoint1256.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1256);

HAnimJoint& HAnimJoint1257 =  HAnimJoint();
HAnimJoint1257.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1257);

HAnimJoint& HAnimJoint1258 =  HAnimJoint();
HAnimJoint1258.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1258);

HAnimJoint& HAnimJoint1259 =  HAnimJoint();
HAnimJoint1259.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1259);

HAnimJoint& HAnimJoint1260 =  HAnimJoint();
HAnimJoint1260.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1260);

HAnimJoint& HAnimJoint1261 =  HAnimJoint();
HAnimJoint1261.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1261);

HAnimJoint& HAnimJoint1262 =  HAnimJoint();
HAnimJoint1262.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1262);

HAnimJoint& HAnimJoint1263 =  HAnimJoint();
HAnimJoint1263.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1263);

HAnimJoint& HAnimJoint1264 =  HAnimJoint();
HAnimJoint1264.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1264);

HAnimJoint& HAnimJoint1265 =  HAnimJoint();
HAnimJoint1265.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1265);

HAnimSegment& HAnimSegment1266 =  HAnimSegment();
HAnimSegment1266.setUSE(CString("hanim_sacrum"));
HAnimHumanoid43.setSegments(&HAnimSegment1266);

HAnimSegment& HAnimSegment1267 =  HAnimSegment();
HAnimSegment1267.setUSE(CString("hanim_pelvis"));
HAnimHumanoid43.setSegments(&HAnimSegment1267);

HAnimSegment& HAnimSegment1268 =  HAnimSegment();
HAnimSegment1268.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1268);

HAnimSegment& HAnimSegment1269 =  HAnimSegment();
HAnimSegment1269.setUSE(CString("hanim_l_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1269);

HAnimSegment& HAnimSegment1270 =  HAnimSegment();
HAnimSegment1270.setUSE(CString("hanim_l_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment1270);

HAnimSegment& HAnimSegment1271 =  HAnimSegment();
HAnimSegment1271.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1271);

HAnimSegment& HAnimSegment1272 =  HAnimSegment();
HAnimSegment1272.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1272);

HAnimSegment& HAnimSegment1273 =  HAnimSegment();
HAnimSegment1273.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1273);

HAnimSegment& HAnimSegment1274 =  HAnimSegment();
HAnimSegment1274.setUSE(CString("hanim_r_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1274);

HAnimSegment& HAnimSegment1275 =  HAnimSegment();
HAnimSegment1275.setUSE(CString("hanim_r_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment1275);

HAnimSegment& HAnimSegment1276 =  HAnimSegment();
HAnimSegment1276.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1276);

HAnimSegment& HAnimSegment1277 =  HAnimSegment();
HAnimSegment1277.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1277);

HAnimSegment& HAnimSegment1278 =  HAnimSegment();
HAnimSegment1278.setUSE(CString("hanim_l5"));
HAnimHumanoid43.setSegments(&HAnimSegment1278);

HAnimSegment& HAnimSegment1279 =  HAnimSegment();
HAnimSegment1279.setUSE(CString("hanim_l4"));
HAnimHumanoid43.setSegments(&HAnimSegment1279);

HAnimSegment& HAnimSegment1280 =  HAnimSegment();
HAnimSegment1280.setUSE(CString("hanim_l3"));
HAnimHumanoid43.setSegments(&HAnimSegment1280);

HAnimSegment& HAnimSegment1281 =  HAnimSegment();
HAnimSegment1281.setUSE(CString("hanim_l2"));
HAnimHumanoid43.setSegments(&HAnimSegment1281);

HAnimSegment& HAnimSegment1282 =  HAnimSegment();
HAnimSegment1282.setUSE(CString("hanim_l1"));
HAnimHumanoid43.setSegments(&HAnimSegment1282);

HAnimSegment& HAnimSegment1283 =  HAnimSegment();
HAnimSegment1283.setUSE(CString("hanim_t12"));
HAnimHumanoid43.setSegments(&HAnimSegment1283);

HAnimSegment& HAnimSegment1284 =  HAnimSegment();
HAnimSegment1284.setUSE(CString("hanim_t11"));
HAnimHumanoid43.setSegments(&HAnimSegment1284);

HAnimSegment& HAnimSegment1285 =  HAnimSegment();
HAnimSegment1285.setUSE(CString("hanim_t10"));
HAnimHumanoid43.setSegments(&HAnimSegment1285);

HAnimSegment& HAnimSegment1286 =  HAnimSegment();
HAnimSegment1286.setUSE(CString("hanim_t9"));
HAnimHumanoid43.setSegments(&HAnimSegment1286);

HAnimSegment& HAnimSegment1287 =  HAnimSegment();
HAnimSegment1287.setUSE(CString("hanim_t8"));
HAnimHumanoid43.setSegments(&HAnimSegment1287);

HAnimSegment& HAnimSegment1288 =  HAnimSegment();
HAnimSegment1288.setUSE(CString("hanim_t7"));
HAnimHumanoid43.setSegments(&HAnimSegment1288);

HAnimSegment& HAnimSegment1289 =  HAnimSegment();
HAnimSegment1289.setUSE(CString("hanim_t6"));
HAnimHumanoid43.setSegments(&HAnimSegment1289);

HAnimSegment& HAnimSegment1290 =  HAnimSegment();
HAnimSegment1290.setUSE(CString("hanim_t5"));
HAnimHumanoid43.setSegments(&HAnimSegment1290);

HAnimSegment& HAnimSegment1291 =  HAnimSegment();
HAnimSegment1291.setUSE(CString("hanim_t4"));
HAnimHumanoid43.setSegments(&HAnimSegment1291);

HAnimSegment& HAnimSegment1292 =  HAnimSegment();
HAnimSegment1292.setUSE(CString("hanim_t3"));
HAnimHumanoid43.setSegments(&HAnimSegment1292);

HAnimSegment& HAnimSegment1293 =  HAnimSegment();
HAnimSegment1293.setUSE(CString("hanim_t2"));
HAnimHumanoid43.setSegments(&HAnimSegment1293);

HAnimSegment& HAnimSegment1294 =  HAnimSegment();
HAnimSegment1294.setUSE(CString("hanim_t1"));
HAnimHumanoid43.setSegments(&HAnimSegment1294);

HAnimSegment& HAnimSegment1295 =  HAnimSegment();
HAnimSegment1295.setUSE(CString("hanim_c7"));
HAnimHumanoid43.setSegments(&HAnimSegment1295);

HAnimSegment& HAnimSegment1296 =  HAnimSegment();
HAnimSegment1296.setUSE(CString("hanim_c6"));
HAnimHumanoid43.setSegments(&HAnimSegment1296);

HAnimSegment& HAnimSegment1297 =  HAnimSegment();
HAnimSegment1297.setUSE(CString("hanim_c5"));
HAnimHumanoid43.setSegments(&HAnimSegment1297);

HAnimSegment& HAnimSegment1298 =  HAnimSegment();
HAnimSegment1298.setUSE(CString("hanim_c4"));
HAnimHumanoid43.setSegments(&HAnimSegment1298);

HAnimSegment& HAnimSegment1299 =  HAnimSegment();
HAnimSegment1299.setUSE(CString("hanim_c3"));
HAnimHumanoid43.setSegments(&HAnimSegment1299);

HAnimSegment& HAnimSegment1300 =  HAnimSegment();
HAnimSegment1300.setUSE(CString("hanim_c2"));
HAnimHumanoid43.setSegments(&HAnimSegment1300);

HAnimSegment& HAnimSegment1301 =  HAnimSegment();
HAnimSegment1301.setUSE(CString("hanim_c1"));
HAnimHumanoid43.setSegments(&HAnimSegment1301);

HAnimSegment& HAnimSegment1302 =  HAnimSegment();
HAnimSegment1302.setUSE(CString("hanim_skull"));
HAnimHumanoid43.setSegments(&HAnimSegment1302);

HAnimSegment& HAnimSegment1303 =  HAnimSegment();
HAnimSegment1303.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1303);

HAnimSegment& HAnimSegment1304 =  HAnimSegment();
HAnimSegment1304.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1304);

HAnimSegment& HAnimSegment1305 =  HAnimSegment();
HAnimSegment1305.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1305);

HAnimSegment& HAnimSegment1306 =  HAnimSegment();
HAnimSegment1306.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1306);

HAnimSegment& HAnimSegment1307 =  HAnimSegment();
HAnimSegment1307.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1307);

HAnimSegment& HAnimSegment1308 =  HAnimSegment();
HAnimSegment1308.setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1308);

HAnimSegment& HAnimSegment1309 =  HAnimSegment();
HAnimSegment1309.setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1309);

HAnimSegment& HAnimSegment1310 =  HAnimSegment();
HAnimSegment1310.setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1310);

HAnimSegment& HAnimSegment1311 =  HAnimSegment();
HAnimSegment1311.setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1311);

HAnimSegment& HAnimSegment1312 =  HAnimSegment();
HAnimSegment1312.setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1312);

HAnimSegment& HAnimSegment1313 =  HAnimSegment();
HAnimSegment1313.setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1313);

HAnimSegment& HAnimSegment1314 =  HAnimSegment();
HAnimSegment1314.setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1314);

HAnimSegment& HAnimSegment1315 =  HAnimSegment();
HAnimSegment1315.setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1315);

HAnimSegment& HAnimSegment1316 =  HAnimSegment();
HAnimSegment1316.setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1316);

HAnimSegment& HAnimSegment1317 =  HAnimSegment();
HAnimSegment1317.setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1317);

HAnimSegment& HAnimSegment1318 =  HAnimSegment();
HAnimSegment1318.setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1318);

HAnimSegment& HAnimSegment1319 =  HAnimSegment();
HAnimSegment1319.setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1319);

HAnimSegment& HAnimSegment1320 =  HAnimSegment();
HAnimSegment1320.setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1320);

HAnimSegment& HAnimSegment1321 =  HAnimSegment();
HAnimSegment1321.setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1321);

HAnimSegment& HAnimSegment1322 =  HAnimSegment();
HAnimSegment1322.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1322);

HAnimSegment& HAnimSegment1323 =  HAnimSegment();
HAnimSegment1323.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1323);

HAnimSegment& HAnimSegment1324 =  HAnimSegment();
HAnimSegment1324.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1324);

HAnimSegment& HAnimSegment1325 =  HAnimSegment();
HAnimSegment1325.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1325);

HAnimSegment& HAnimSegment1326 =  HAnimSegment();
HAnimSegment1326.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1326);

HAnimSegment& HAnimSegment1327 =  HAnimSegment();
HAnimSegment1327.setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1327);

HAnimSegment& HAnimSegment1328 =  HAnimSegment();
HAnimSegment1328.setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1328);

HAnimSegment& HAnimSegment1329 =  HAnimSegment();
HAnimSegment1329.setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1329);

HAnimSegment& HAnimSegment1330 =  HAnimSegment();
HAnimSegment1330.setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1330);

HAnimSegment& HAnimSegment1331 =  HAnimSegment();
HAnimSegment1331.setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1331);

HAnimSegment& HAnimSegment1332 =  HAnimSegment();
HAnimSegment1332.setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1332);

HAnimSegment& HAnimSegment1333 =  HAnimSegment();
HAnimSegment1333.setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1333);

HAnimSegment& HAnimSegment1334 =  HAnimSegment();
HAnimSegment1334.setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1334);

HAnimSegment& HAnimSegment1335 =  HAnimSegment();
HAnimSegment1335.setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1335);

HAnimSegment& HAnimSegment1336 =  HAnimSegment();
HAnimSegment1336.setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1336);

HAnimSegment& HAnimSegment1337 =  HAnimSegment();
HAnimSegment1337.setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1337);

HAnimSegment& HAnimSegment1338 =  HAnimSegment();
HAnimSegment1338.setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1338);

HAnimSegment& HAnimSegment1339 =  HAnimSegment();
HAnimSegment1339.setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1339);

HAnimSegment& HAnimSegment1340 =  HAnimSegment();
HAnimSegment1340.setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1340);

HAnimSite& HAnimSite1341 =  HAnimSite();
HAnimSite1341.setUSE(CString("hanim_buttocks_standing_wall_contact_point"));
HAnimHumanoid43.setSites(&HAnimSite1341);

HAnimSite& HAnimSite1342 =  HAnimSite();
HAnimSite1342.setUSE(CString("hanim_crotch"));
HAnimHumanoid43.setSites(&HAnimSite1342);

HAnimSite& HAnimSite1343 =  HAnimSite();
HAnimSite1343.setUSE(CString("hanim_l_asis"));
HAnimHumanoid43.setSites(&HAnimSite1343);

HAnimSite& HAnimSite1344 =  HAnimSite();
HAnimSite1344.setUSE(CString("hanim_l_iliocristale"));
HAnimHumanoid43.setSites(&HAnimSite1344);

HAnimSite& HAnimSite1345 =  HAnimSite();
HAnimSite1345.setUSE(CString("hanim_l_psis"));
HAnimHumanoid43.setSites(&HAnimSite1345);

HAnimSite& HAnimSite1346 =  HAnimSite();
HAnimSite1346.setUSE(CString("hanim_l_trochanterion"));
HAnimHumanoid43.setSites(&HAnimSite1346);

HAnimSite& HAnimSite1347 =  HAnimSite();
HAnimSite1347.setUSE(CString("hanim_r_asis"));
HAnimHumanoid43.setSites(&HAnimSite1347);

HAnimSite& HAnimSite1348 =  HAnimSite();
HAnimSite1348.setUSE(CString("hanim_r_iliocristale"));
HAnimHumanoid43.setSites(&HAnimSite1348);

HAnimSite& HAnimSite1349 =  HAnimSite();
HAnimSite1349.setUSE(CString("hanim_r_psis"));
HAnimHumanoid43.setSites(&HAnimSite1349);

HAnimSite& HAnimSite1350 =  HAnimSite();
HAnimSite1350.setUSE(CString("hanim_r_trochanterion"));
HAnimHumanoid43.setSites(&HAnimSite1350);

HAnimSite& HAnimSite1351 =  HAnimSite();
HAnimSite1351.setUSE(CString("hanim_navel"));
HAnimHumanoid43.setSites(&HAnimSite1351);

HAnimSite& HAnimSite1352 =  HAnimSite();
HAnimSite1352.setUSE(CString("hanim_waist_preferred_anterior"));
HAnimHumanoid43.setSites(&HAnimSite1352);

HAnimSite& HAnimSite1353 =  HAnimSite();
HAnimSite1353.setUSE(CString("hanim_waist_preferred_posterior"));
HAnimHumanoid43.setSites(&HAnimSite1353);

HAnimSite& HAnimSite1354 =  HAnimSite();
HAnimSite1354.setUSE(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1354);

HAnimSite& HAnimSite1355 =  HAnimSite();
HAnimSite1355.setUSE(CString("hanim_l_femoral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1355);

HAnimSite& HAnimSite1356 =  HAnimSite();
HAnimSite1356.setUSE(CString("hanim_l_knee_crease"));
HAnimHumanoid43.setSites(&HAnimSite1356);

HAnimSite& HAnimSite1357 =  HAnimSite();
HAnimSite1357.setUSE(CString("hanim_l_suprapatella"));
HAnimHumanoid43.setSites(&HAnimSite1357);

HAnimSite& HAnimSite1358 =  HAnimSite();
HAnimSite1358.setUSE(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1358);

HAnimSite& HAnimSite1359 =  HAnimSite();
HAnimSite1359.setUSE(CString("hanim_r_femoral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1359);

HAnimSite& HAnimSite1360 =  HAnimSite();
HAnimSite1360.setUSE(CString("hanim_r_knee_crease"));
HAnimHumanoid43.setSites(&HAnimSite1360);

HAnimSite& HAnimSite1361 =  HAnimSite();
HAnimSite1361.setUSE(CString("hanim_r_suprapatella"));
HAnimHumanoid43.setSites(&HAnimSite1361);

HAnimSite& HAnimSite1362 =  HAnimSite();
HAnimSite1362.setUSE(CString("hanim_l_lateral_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite1362);

HAnimSite& HAnimSite1363 =  HAnimSite();
HAnimSite1363.setUSE(CString("hanim_l_medial_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite1363);

HAnimSite& HAnimSite1364 =  HAnimSite();
HAnimSite1364.setUSE(CString("hanim_l_tibiale"));
HAnimHumanoid43.setSites(&HAnimSite1364);

HAnimSite& HAnimSite1365 =  HAnimSite();
HAnimSite1365.setUSE(CString("hanim_l_calcaneus_posterior"));
HAnimHumanoid43.setSites(&HAnimSite1365);

HAnimSite& HAnimSite1366 =  HAnimSite();
HAnimSite1366.setUSE(CString("hanim_l_sphyrion"));
HAnimHumanoid43.setSites(&HAnimSite1366);

HAnimSite& HAnimSite1367 =  HAnimSite();
HAnimSite1367.setUSE(CString("hanim_l_metatarsal_phalanx_1"));
HAnimHumanoid43.setSites(&HAnimSite1367);

HAnimSite& HAnimSite1368 =  HAnimSite();
HAnimSite1368.setUSE(CString("hanim_l_metatarsal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite1368);

HAnimSite& HAnimSite1369 =  HAnimSite();
HAnimSite1369.setUSE(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1369);

HAnimSite& HAnimSite1370 =  HAnimSite();
HAnimSite1370.setUSE(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1370);

HAnimSite& HAnimSite1371 =  HAnimSite();
HAnimSite1371.setUSE(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1371);

HAnimSite& HAnimSite1372 =  HAnimSite();
HAnimSite1372.setUSE(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1372);

HAnimSite& HAnimSite1373 =  HAnimSite();
HAnimSite1373.setUSE(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1373);

HAnimSite& HAnimSite1374 =  HAnimSite();
HAnimSite1374.setUSE(CString("hanim_r_lateral_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite1374);

HAnimSite& HAnimSite1375 =  HAnimSite();
HAnimSite1375.setUSE(CString("hanim_r_medial_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite1375);

HAnimSite& HAnimSite1376 =  HAnimSite();
HAnimSite1376.setUSE(CString("hanim_r_tibiale"));
HAnimHumanoid43.setSites(&HAnimSite1376);

HAnimSite& HAnimSite1377 =  HAnimSite();
HAnimSite1377.setUSE(CString("hanim_r_calcaneus_posterior"));
HAnimHumanoid43.setSites(&HAnimSite1377);

HAnimSite& HAnimSite1378 =  HAnimSite();
HAnimSite1378.setUSE(CString("hanim_r_sphyrion"));
HAnimHumanoid43.setSites(&HAnimSite1378);

HAnimSite& HAnimSite1379 =  HAnimSite();
HAnimSite1379.setUSE(CString("hanim_r_metatarsal_phalanx_1"));
HAnimHumanoid43.setSites(&HAnimSite1379);

HAnimSite& HAnimSite1380 =  HAnimSite();
HAnimSite1380.setUSE(CString("hanim_r_metatarsal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite1380);

HAnimSite& HAnimSite1381 =  HAnimSite();
HAnimSite1381.setUSE(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1381);

HAnimSite& HAnimSite1382 =  HAnimSite();
HAnimSite1382.setUSE(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1382);

HAnimSite& HAnimSite1383 =  HAnimSite();
HAnimSite1383.setUSE(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1383);

HAnimSite& HAnimSite1384 =  HAnimSite();
HAnimSite1384.setUSE(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1384);

HAnimSite& HAnimSite1385 =  HAnimSite();
HAnimSite1385.setUSE(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1385);

HAnimSite& HAnimSite1386 =  HAnimSite();
HAnimSite1386.setUSE(CString("hanim_l_rib10"));
HAnimHumanoid43.setSites(&HAnimSite1386);

HAnimSite& HAnimSite1387 =  HAnimSite();
HAnimSite1387.setUSE(CString("hanim_r_rib10"));
HAnimHumanoid43.setSites(&HAnimSite1387);

HAnimSite& HAnimSite1388 =  HAnimSite();
HAnimSite1388.setUSE(CString("hanim_spine_2_middle_back"));
HAnimHumanoid43.setSites(&HAnimSite1388);

HAnimSite& HAnimSite1389 =  HAnimSite();
HAnimSite1389.setUSE(CString("hanim_substernale"));
HAnimHumanoid43.setSites(&HAnimSite1389);

HAnimSite& HAnimSite1390 =  HAnimSite();
HAnimSite1390.setUSE(CString("hanim_l_thelion"));
HAnimHumanoid43.setSites(&HAnimSite1390);

HAnimSite& HAnimSite1391 =  HAnimSite();
HAnimSite1391.setUSE(CString("hanim_r_thelion"));
HAnimHumanoid43.setSites(&HAnimSite1391);

HAnimSite& HAnimSite1392 =  HAnimSite();
HAnimSite1392.setUSE(CString("hanim_l_chest_midsagittal_plane"));
HAnimHumanoid43.setSites(&HAnimSite1392);

HAnimSite& HAnimSite1393 =  HAnimSite();
HAnimSite1393.setUSE(CString("hanim_mesosternale"));
HAnimHumanoid43.setSites(&HAnimSite1393);

HAnimSite& HAnimSite1394 =  HAnimSite();
HAnimSite1394.setUSE(CString("hanim_r_chest_midsagittal_plane"));
HAnimHumanoid43.setSites(&HAnimSite1394);

HAnimSite& HAnimSite1395 =  HAnimSite();
HAnimSite1395.setUSE(CString("hanim_rear_center_midsagittal_plane"));
HAnimHumanoid43.setSites(&HAnimSite1395);

HAnimSite& HAnimSite1396 =  HAnimSite();
HAnimSite1396.setUSE(CString("hanim_spine_1_middle_back"));
HAnimHumanoid43.setSites(&HAnimSite1396);

HAnimSite& HAnimSite1397 =  HAnimSite();
HAnimSite1397.setUSE(CString("hanim_cervicale"));
HAnimHumanoid43.setSites(&HAnimSite1397);

HAnimSite& HAnimSite1398 =  HAnimSite();
HAnimSite1398.setUSE(CString("hanim_suprasternale"));
HAnimHumanoid43.setSites(&HAnimSite1398);

HAnimSite& HAnimSite1399 =  HAnimSite();
HAnimSite1399.setUSE(CString("hanim_l_neck_base"));
HAnimHumanoid43.setSites(&HAnimSite1399);

HAnimSite& HAnimSite1400 =  HAnimSite();
HAnimSite1400.setUSE(CString("hanim_r_neck_base"));
HAnimHumanoid43.setSites(&HAnimSite1400);

HAnimSite& HAnimSite1401 =  HAnimSite();
HAnimSite1401.setUSE(CString("hanim_l_acromion"));
HAnimHumanoid43.setSites(&HAnimSite1401);

HAnimSite& HAnimSite1402 =  HAnimSite();
HAnimSite1402.setUSE(CString("hanim_l_axilla_distal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1402);

HAnimSite& HAnimSite1403 =  HAnimSite();
HAnimSite1403.setUSE(CString("hanim_l_axilla_posterior_folds"));
HAnimHumanoid43.setSites(&HAnimSite1403);

HAnimSite& HAnimSite1404 =  HAnimSite();
HAnimSite1404.setUSE(CString("hanim_l_axilla_proximal"));
HAnimHumanoid43.setSites(&HAnimSite1404);

HAnimSite& HAnimSite1405 =  HAnimSite();
HAnimSite1405.setUSE(CString("hanim_l_clavicale"));
HAnimHumanoid43.setSites(&HAnimSite1405);

HAnimSite& HAnimSite1406 =  HAnimSite();
HAnimSite1406.setUSE(CString("hanim_r_acromion"));
HAnimHumanoid43.setSites(&HAnimSite1406);

HAnimSite& HAnimSite1407 =  HAnimSite();
HAnimSite1407.setUSE(CString("hanim_r_axilla_distal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1407);

HAnimSite& HAnimSite1408 =  HAnimSite();
HAnimSite1408.setUSE(CString("hanim_r_axilla_posterior_folds"));
HAnimHumanoid43.setSites(&HAnimSite1408);

HAnimSite& HAnimSite1409 =  HAnimSite();
HAnimSite1409.setUSE(CString("hanim_r_axilla_proximal"));
HAnimHumanoid43.setSites(&HAnimSite1409);

HAnimSite& HAnimSite1410 =  HAnimSite();
HAnimSite1410.setUSE(CString("hanim_r_clavicale"));
HAnimHumanoid43.setSites(&HAnimSite1410);

HAnimSite& HAnimSite1411 =  HAnimSite();
HAnimSite1411.setUSE(CString("hanim_adams_apple"));
HAnimHumanoid43.setSites(&HAnimSite1411);

HAnimSite& HAnimSite1412 =  HAnimSite();
HAnimSite1412.setUSE(CString("hanim_glabella"));
HAnimHumanoid43.setSites(&HAnimSite1412);

HAnimSite& HAnimSite1413 =  HAnimSite();
HAnimSite1413.setUSE(CString("hanim_l_ectocanthus"));
HAnimHumanoid43.setSites(&HAnimSite1413);

HAnimSite& HAnimSite1414 =  HAnimSite();
HAnimSite1414.setUSE(CString("hanim_l_infraorbitale"));
HAnimHumanoid43.setSites(&HAnimSite1414);

HAnimSite& HAnimSite1415 =  HAnimSite();
HAnimSite1415.setUSE(CString("hanim_l_tragion"));
HAnimHumanoid43.setSites(&HAnimSite1415);

HAnimSite& HAnimSite1416 =  HAnimSite();
HAnimSite1416.setUSE(CString("hanim_nuchale"));
HAnimHumanoid43.setSites(&HAnimSite1416);

HAnimSite& HAnimSite1417 =  HAnimSite();
HAnimSite1417.setUSE(CString("hanim_opisthocranion"));
HAnimHumanoid43.setSites(&HAnimSite1417);

HAnimSite& HAnimSite1418 =  HAnimSite();
HAnimSite1418.setUSE(CString("hanim_r_ectocanthus"));
HAnimHumanoid43.setSites(&HAnimSite1418);

HAnimSite& HAnimSite1419 =  HAnimSite();
HAnimSite1419.setUSE(CString("hanim_r_infraorbitale"));
HAnimHumanoid43.setSites(&HAnimSite1419);

HAnimSite& HAnimSite1420 =  HAnimSite();
HAnimSite1420.setUSE(CString("hanim_r_tragion"));
HAnimHumanoid43.setSites(&HAnimSite1420);

HAnimSite& HAnimSite1421 =  HAnimSite();
HAnimSite1421.setUSE(CString("hanim_sellion"));
HAnimHumanoid43.setSites(&HAnimSite1421);

HAnimSite& HAnimSite1422 =  HAnimSite();
HAnimSite1422.setUSE(CString("hanim_skull_vertex"));
HAnimHumanoid43.setSites(&HAnimSite1422);

HAnimSite& HAnimSite1423 =  HAnimSite();
HAnimSite1423.setUSE(CString("hanim_l_gonion"));
HAnimHumanoid43.setSites(&HAnimSite1423);

HAnimSite& HAnimSite1424 =  HAnimSite();
HAnimSite1424.setUSE(CString("hanim_menton"));
HAnimHumanoid43.setSites(&HAnimSite1424);

HAnimSite& HAnimSite1425 =  HAnimSite();
HAnimSite1425.setUSE(CString("hanim_r_gonion"));
HAnimHumanoid43.setSites(&HAnimSite1425);

HAnimSite& HAnimSite1426 =  HAnimSite();
HAnimSite1426.setUSE(CString("hanim_supramenton"));
HAnimHumanoid43.setSites(&HAnimSite1426);

HAnimSite& HAnimSite1427 =  HAnimSite();
HAnimSite1427.setUSE(CString("hanim_l_bideltoid"));
HAnimHumanoid43.setSites(&HAnimSite1427);

HAnimSite& HAnimSite1428 =  HAnimSite();
HAnimSite1428.setUSE(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1428);

HAnimSite& HAnimSite1429 =  HAnimSite();
HAnimSite1429.setUSE(CString("hanim_l_humeral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1429);

HAnimSite& HAnimSite1430 =  HAnimSite();
HAnimSite1430.setUSE(CString("hanim_l_olecranon"));
HAnimHumanoid43.setSites(&HAnimSite1430);

HAnimSite& HAnimSite1431 =  HAnimSite();
HAnimSite1431.setUSE(CString("hanim_l_radial_styloid"));
HAnimHumanoid43.setSites(&HAnimSite1431);

HAnimSite& HAnimSite1432 =  HAnimSite();
HAnimSite1432.setUSE(CString("hanim_l_radiale"));
HAnimHumanoid43.setSites(&HAnimSite1432);

HAnimSite& HAnimSite1433 =  HAnimSite();
HAnimSite1433.setUSE(CString("hanim_l_ulnar_styloid"));
HAnimHumanoid43.setSites(&HAnimSite1433);

HAnimSite& HAnimSite1434 =  HAnimSite();
HAnimSite1434.setUSE(CString("hanim_l_metacarpal_phalanx_2"));
HAnimHumanoid43.setSites(&HAnimSite1434);

HAnimSite& HAnimSite1435 =  HAnimSite();
HAnimSite1435.setUSE(CString("hanim_l_metacarpal_phalanx_3"));
HAnimHumanoid43.setSites(&HAnimSite1435);

HAnimSite& HAnimSite1436 =  HAnimSite();
HAnimSite1436.setUSE(CString("hanim_l_metacarpal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite1436);

HAnimSite& HAnimSite1437 =  HAnimSite();
HAnimSite1437.setUSE(CString("hanim_l_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1437);

HAnimSite& HAnimSite1438 =  HAnimSite();
HAnimSite1438.setUSE(CString("hanim_l_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1438);

HAnimSite& HAnimSite1439 =  HAnimSite();
HAnimSite1439.setUSE(CString("hanim_l_dactylion"));
HAnimHumanoid43.setSites(&HAnimSite1439);

HAnimSite& HAnimSite1440 =  HAnimSite();
HAnimSite1440.setUSE(CString("hanim_l_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1440);

HAnimSite& HAnimSite1441 =  HAnimSite();
HAnimSite1441.setUSE(CString("hanim_l_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1441);

HAnimSite& HAnimSite1442 =  HAnimSite();
HAnimSite1442.setUSE(CString("hanim_l_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1442);

HAnimSite& HAnimSite1443 =  HAnimSite();
HAnimSite1443.setUSE(CString("hanim_r_bideltoid"));
HAnimHumanoid43.setSites(&HAnimSite1443);

HAnimSite& HAnimSite1444 =  HAnimSite();
HAnimSite1444.setUSE(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1444);

HAnimSite& HAnimSite1445 =  HAnimSite();
HAnimSite1445.setUSE(CString("hanim_r_humeral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1445);

HAnimSite& HAnimSite1446 =  HAnimSite();
HAnimSite1446.setUSE(CString("hanim_r_olecranon"));
HAnimHumanoid43.setSites(&HAnimSite1446);

HAnimSite& HAnimSite1447 =  HAnimSite();
HAnimSite1447.setUSE(CString("hanim_r_radial_styloid"));
HAnimHumanoid43.setSites(&HAnimSite1447);

HAnimSite& HAnimSite1448 =  HAnimSite();
HAnimSite1448.setUSE(CString("hanim_r_radiale"));
HAnimHumanoid43.setSites(&HAnimSite1448);

HAnimSite& HAnimSite1449 =  HAnimSite();
HAnimSite1449.setUSE(CString("hanim_r_ulnar_styloid"));
HAnimHumanoid43.setSites(&HAnimSite1449);

HAnimSite& HAnimSite1450 =  HAnimSite();
HAnimSite1450.setUSE(CString("hanim_r_metacarpal_phalanx_2"));
HAnimHumanoid43.setSites(&HAnimSite1450);

HAnimSite& HAnimSite1451 =  HAnimSite();
HAnimSite1451.setUSE(CString("hanim_r_metacarpal_phalanx_3"));
HAnimHumanoid43.setSites(&HAnimSite1451);

HAnimSite& HAnimSite1452 =  HAnimSite();
HAnimSite1452.setUSE(CString("hanim_r_metacarpal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite1452);

HAnimSite& HAnimSite1453 =  HAnimSite();
HAnimSite1453.setUSE(CString("hanim_r_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1453);

HAnimSite& HAnimSite1454 =  HAnimSite();
HAnimSite1454.setUSE(CString("hanim_r_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1454);

HAnimSite& HAnimSite1455 =  HAnimSite();
HAnimSite1455.setUSE(CString("hanim_r_dactylion"));
HAnimHumanoid43.setSites(&HAnimSite1455);

HAnimSite& HAnimSite1456 =  HAnimSite();
HAnimSite1456.setUSE(CString("hanim_r_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1456);

HAnimSite& HAnimSite1457 =  HAnimSite();
HAnimSite1457.setUSE(CString("hanim_r_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1457);

HAnimSite& HAnimSite1458 =  HAnimSite();
HAnimSite1458.setUSE(CString("hanim_r_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1458);

Scene11.addChild(&HAnimHumanoid43);

X3D0.setScene(&Scene11);

}
