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
meta3.setContent(CString("DonHumanoid.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("identifier"));
meta4.setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/DonHumanoid.x3d"));
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
Coordinate181.setPoint(new float[]{0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097}, 6);
LineSet180.setCoord(Coordinate181);

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA& ColorRGBA182 =  ColorRGBA();
ColorRGBA182.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet180.addChild(&ColorRGBA182);

Shape179.setGeometry(&LineSet180);

HAnimSegment175.addChild(&Shape179);

Shape& Shape183 =  Shape();
LineSet& LineSet184 =  LineSet();
LineSet184.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate185 =  Coordinate();
Coordinate185.setPoint(new float[]{0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278}, 6);
LineSet184.setCoord(Coordinate185);

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA& ColorRGBA186 =  ColorRGBA();
ColorRGBA186.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet184.addChild(&ColorRGBA186);

Shape183.setGeometry(&LineSet184);

HAnimSegment175.addChild(&Shape183);

HAnimJoint174.addChildren(&HAnimSegment175);

HAnimJoint& HAnimJoint187 =  HAnimJoint();
HAnimJoint187.X3DNode::setName(CString("l_talocalcaneonavicular"));
HAnimJoint187.setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint187.setCenter(new float[]{0.0781,0.0283,-0.097});
HAnimSegment& HAnimSegment188 =  HAnimSegment();
HAnimSegment188.X3DNode::setName(CString("l_navicular"));
HAnimSegment188.setDEF(CString("hanim_l_navicular"));
Transform& Transform189 =  Transform();
Transform189.setTranslation(new float[]{0.0781,0.0283,-0.097});
Transform& Transform190 =  Transform();
//Empty Transform
Shape& Shape191 =  Shape();
Shape191.setUSE(CString("HAnimJointShape"));
Transform190.addChild(&Shape191);

Transform189.addChild(&Transform190);

HAnimSegment188.addChild(&Transform189);

Shape& Shape192 =  Shape();
LineSet& LineSet193 =  LineSet();
LineSet193.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate194 =  Coordinate();
Coordinate194.setPoint(new float[]{0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835}, 6);
LineSet193.setCoord(Coordinate194);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA& ColorRGBA195 =  ColorRGBA();
ColorRGBA195.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet193.addChild(&ColorRGBA195);

Shape192.setGeometry(&LineSet193);

HAnimSegment188.addChild(&Shape192);

Shape& Shape196 =  Shape();
LineSet& LineSet197 =  LineSet();
LineSet197.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate198 =  Coordinate();
Coordinate198.setPoint(new float[]{0.0781,0.0283,-0.097,0.0812,0.025,-0.0805}, 6);
LineSet197.setCoord(Coordinate198);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA& ColorRGBA199 =  ColorRGBA();
ColorRGBA199.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet197.addChild(&ColorRGBA199);

Shape196.setGeometry(&LineSet197);

HAnimSegment188.addChild(&Shape196);

Shape& Shape200 =  Shape();
LineSet& LineSet201 =  LineSet();
LineSet201.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate202 =  Coordinate();
Coordinate202.setPoint(new float[]{0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821}, 6);
LineSet201.setCoord(Coordinate202);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA& ColorRGBA203 =  ColorRGBA();
ColorRGBA203.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet201.addChild(&ColorRGBA203);

Shape200.setGeometry(&LineSet201);

HAnimSegment188.addChild(&Shape200);

HAnimJoint187.addChildren(&HAnimSegment188);

HAnimJoint& HAnimJoint204 =  HAnimJoint();
HAnimJoint204.X3DNode::setName(CString("l_cuneonavicular_1"));
HAnimJoint204.setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint204.setCenter(new float[]{0.0672,0.0235,-0.0835});
HAnimSegment& HAnimSegment205 =  HAnimSegment();
HAnimSegment205.X3DNode::setName(CString("l_cuneiform_1"));
HAnimSegment205.setDEF(CString("hanim_l_cuneiform_1"));
Transform& Transform206 =  Transform();
Transform206.setTranslation(new float[]{0.0672,0.0235,-0.0835});
Transform& Transform207 =  Transform();
//Empty Transform
Shape& Shape208 =  Shape();
Shape208.setUSE(CString("HAnimJointShape"));
Transform207.addChild(&Shape208);

Transform206.addChild(&Transform207);

HAnimSegment205.addChild(&Transform206);

Shape& Shape209 =  Shape();
LineSet& LineSet210 =  LineSet();
LineSet210.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate211 =  Coordinate();
Coordinate211.setPoint(new float[]{0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577}, 6);
LineSet210.setCoord(Coordinate211);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA& ColorRGBA212 =  ColorRGBA();
ColorRGBA212.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet210.addChild(&ColorRGBA212);

Shape209.setGeometry(&LineSet210);

HAnimSegment205.addChild(&Shape209);

HAnimJoint204.addChildren(&HAnimSegment205);

HAnimJoint& HAnimJoint213 =  HAnimJoint();
HAnimJoint213.X3DNode::setName(CString("l_tarsometatarsal_1"));
HAnimJoint213.setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint213.setCenter(new float[]{0.0644,0.0147,-0.0577});
HAnimSegment& HAnimSegment214 =  HAnimSegment();
HAnimSegment214.X3DNode::setName(CString("l_metatarsal_1"));
HAnimSegment214.setDEF(CString("hanim_l_metatarsal_1"));
Transform& Transform215 =  Transform();
Transform215.setTranslation(new float[]{0.0644,0.0147,-0.0577});
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
Coordinate220.setPoint(new float[]{0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083}, 6);
LineSet219.setCoord(Coordinate220);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA& ColorRGBA221 =  ColorRGBA();
ColorRGBA221.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet219.addChild(&ColorRGBA221);

Shape218.setGeometry(&LineSet219);

HAnimSegment214.addChild(&Shape218);

HAnimSite& HAnimSite222 =  HAnimSite();
HAnimSite222.X3DNode::setName(CString("l_metatarsal_phalanx_1"));
HAnimSite222.setDEF(CString("hanim_l_metatarsal_phalanx_1"));
TouchSensor& TouchSensor223 =  TouchSensor();
TouchSensor223.setDescription(CString("HAnimSite l_metatarsal_phalanx_1"));
HAnimSite222.addChild(&TouchSensor223);

Shape& Shape224 =  Shape();
Shape224.setUSE(CString("HAnimSiteShape"));
HAnimSite222.addChild(&Shape224);

HAnimSegment214.addChild(&HAnimSite222);

HAnimJoint213.addChildren(&HAnimSegment214);

HAnimJoint& HAnimJoint225 =  HAnimJoint();
HAnimJoint225.X3DNode::setName(CString("l_metatarsophalangeal_1"));
HAnimJoint225.setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint225.setCenter(new float[]{0.0619,0.0059,-0.0083});
HAnimSegment& HAnimSegment226 =  HAnimSegment();
HAnimSegment226.X3DNode::setName(CString("l_tarsal_proximal_phalanx_1"));
HAnimSegment226.setDEF(CString("hanim_l_tarsal_proximal_phalanx_1"));
Transform& Transform227 =  Transform();
Transform227.setTranslation(new float[]{0.0619,0.0059,-0.0083});
Transform& Transform228 =  Transform();
//Empty Transform
Shape& Shape229 =  Shape();
Shape229.setUSE(CString("HAnimJointShape"));
Transform228.addChild(&Shape229);

Transform227.addChild(&Transform228);

HAnimSegment226.addChild(&Transform227);

Shape& Shape230 =  Shape();
LineSet& LineSet231 =  LineSet();
LineSet231.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate232 =  Coordinate();
Coordinate232.setPoint(new float[]{0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083}, 6);
LineSet231.setCoord(Coordinate232);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA233 =  ColorRGBA();
ColorRGBA233.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet231.addChild(&ColorRGBA233);

Shape230.setGeometry(&LineSet231);

HAnimSegment226.addChild(&Shape230);

HAnimSite& HAnimSite234 =  HAnimSite();
HAnimSite234.X3DNode::setName(CString("l_tarsal_distal_phalanx_1_tip"));
HAnimSite234.setDEF(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor235 =  TouchSensor();
TouchSensor235.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_1_tip"));
HAnimSite234.addChild(&TouchSensor235);

Shape& Shape236 =  Shape();
Shape236.setUSE(CString("HAnimSiteShape"));
HAnimSite234.addChild(&Shape236);

HAnimSegment226.addChild(&HAnimSite234);

HAnimJoint225.addChildren(&HAnimSegment226);

HAnimJoint& HAnimJoint237 =  HAnimJoint();
HAnimJoint237.X3DNode::setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint237.setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint225.addChildren(&HAnimJoint237);

HAnimJoint213.addChildren(&HAnimJoint225);

HAnimJoint204.addChildren(&HAnimJoint213);

HAnimJoint187.addChildren(&HAnimJoint204);

HAnimJoint& HAnimJoint238 =  HAnimJoint();
HAnimJoint238.X3DNode::setName(CString("l_cuneonavicular_2"));
HAnimJoint238.setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint238.setCenter(new float[]{0.0812,0.025,-0.0805});
HAnimSegment& HAnimSegment239 =  HAnimSegment();
HAnimSegment239.X3DNode::setName(CString("l_cuneiform_2"));
HAnimSegment239.setDEF(CString("hanim_l_cuneiform_2"));
Transform& Transform240 =  Transform();
Transform240.setTranslation(new float[]{0.0812,0.025,-0.0805});
Transform& Transform241 =  Transform();
//Empty Transform
Shape& Shape242 =  Shape();
Shape242.setUSE(CString("HAnimJointShape"));
Transform241.addChild(&Shape242);

Transform240.addChild(&Transform241);

HAnimSegment239.addChild(&Transform240);

Shape& Shape243 =  Shape();
LineSet& LineSet244 =  LineSet();
LineSet244.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate245 =  Coordinate();
Coordinate245.setPoint(new float[]{0.0812,0.025,-0.0805,0.08,0.0175,-0.0608}, 6);
LineSet244.setCoord(Coordinate245);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA246 =  ColorRGBA();
ColorRGBA246.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet244.addChild(&ColorRGBA246);

Shape243.setGeometry(&LineSet244);

HAnimSegment239.addChild(&Shape243);

HAnimJoint238.addChildren(&HAnimSegment239);

HAnimJoint& HAnimJoint247 =  HAnimJoint();
HAnimJoint247.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint247.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint247.setCenter(new float[]{0.08,0.0175,-0.0608});
HAnimSegment& HAnimSegment248 =  HAnimSegment();
HAnimSegment248.X3DNode::setName(CString("l_metatarsal_2"));
HAnimSegment248.setDEF(CString("hanim_l_metatarsal_2"));
Transform& Transform249 =  Transform();
Transform249.setTranslation(new float[]{0.08,0.0175,-0.0608});
Transform& Transform250 =  Transform();
//Empty Transform
Shape& Shape251 =  Shape();
Shape251.setUSE(CString("HAnimJointShape"));
Transform250.addChild(&Shape251);

Transform249.addChild(&Transform250);

HAnimSegment248.addChild(&Transform249);

Shape& Shape252 =  Shape();
LineSet& LineSet253 =  LineSet();
LineSet253.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate254 =  Coordinate();
Coordinate254.setPoint(new float[]{0.08,0.0175,-0.0608,0.0824,0.0064,-0.004}, 6);
LineSet253.setCoord(Coordinate254);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA255 =  ColorRGBA();
ColorRGBA255.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet253.addChild(&ColorRGBA255);

Shape252.setGeometry(&LineSet253);

HAnimSegment248.addChild(&Shape252);

HAnimJoint247.addChildren(&HAnimSegment248);

HAnimJoint& HAnimJoint256 =  HAnimJoint();
HAnimJoint256.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint256.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint256.setCenter(new float[]{0.0824,0.0064,-0.004});
HAnimSegment& HAnimSegment257 =  HAnimSegment();
HAnimSegment257.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment257.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform& Transform258 =  Transform();
Transform258.setTranslation(new float[]{0.0824,0.0064,-0.004});
Transform& Transform259 =  Transform();
//Empty Transform
Shape& Shape260 =  Shape();
Shape260.setUSE(CString("HAnimJointShape"));
Transform259.addChild(&Shape260);

Transform258.addChild(&Transform259);

HAnimSegment257.addChild(&Transform258);

Shape& Shape261 =  Shape();
LineSet& LineSet262 =  LineSet();
LineSet262.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate263 =  Coordinate();
Coordinate263.setPoint(new float[]{0.0824,0.0064,-0.004,0.0841,0.0041,0.0121}, 6);
LineSet262.setCoord(Coordinate263);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA264 =  ColorRGBA();
ColorRGBA264.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet262.addChild(&ColorRGBA264);

Shape261.setGeometry(&LineSet262);

HAnimSegment257.addChild(&Shape261);

HAnimJoint256.addChildren(&HAnimSegment257);

HAnimJoint& HAnimJoint265 =  HAnimJoint();
HAnimJoint265.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint265.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint265.setCenter(new float[]{0.0841,0.0041,0.0121});
HAnimSegment& HAnimSegment266 =  HAnimSegment();
HAnimSegment266.X3DNode::setName(CString("l_tarsal_middle_phalanx_2"));
HAnimSegment266.setDEF(CString("hanim_l_tarsal_middle_phalanx_2"));
Transform& Transform267 =  Transform();
Transform267.setTranslation(new float[]{0.0841,0.0041,0.0121});
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
Coordinate272.setPoint(new float[]{0.0841,0.0041,0.0121,0.0841,0.0013,0.0216}, 6);
LineSet271.setCoord(Coordinate272);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA273 =  ColorRGBA();
ColorRGBA273.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet271.addChild(&ColorRGBA273);

Shape270.setGeometry(&LineSet271);

HAnimSegment266.addChild(&Shape270);

HAnimSite& HAnimSite274 =  HAnimSite();
HAnimSite274.X3DNode::setName(CString("l_tarsal_distal_phalanx_2_tip"));
HAnimSite274.setDEF(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimSite274.setTranslation(new float[]{0.1195,0.0079,0.1433});
TouchSensor& TouchSensor275 =  TouchSensor();
TouchSensor275.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_2_tip"));
HAnimSite274.addChild(&TouchSensor275);

Shape& Shape276 =  Shape();
Shape276.setUSE(CString("HAnimSiteShape"));
HAnimSite274.addChild(&Shape276);

HAnimSegment266.addChild(&HAnimSite274);

HAnimJoint265.addChildren(&HAnimSegment266);

HAnimJoint& HAnimJoint277 =  HAnimJoint();
HAnimJoint277.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint277.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint277.setCenter(new float[]{0.0841,0.0013,0.0216});
HAnimJoint265.addChildren(&HAnimJoint277);

HAnimJoint256.addChildren(&HAnimJoint265);

HAnimJoint247.addChildren(&HAnimJoint256);

HAnimJoint238.addChildren(&HAnimJoint247);

HAnimJoint187.addChildren(&HAnimJoint238);

HAnimJoint& HAnimJoint278 =  HAnimJoint();
HAnimJoint278.X3DNode::setName(CString("l_cuneonavicular_3"));
HAnimJoint278.setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint278.setCenter(new float[]{0.0928,0.0248,-0.0821});
HAnimSegment& HAnimSegment279 =  HAnimSegment();
HAnimSegment279.X3DNode::setName(CString("l_cuneiform_3"));
HAnimSegment279.setDEF(CString("hanim_l_cuneiform_3"));
Transform& Transform280 =  Transform();
Transform280.setTranslation(new float[]{0.0928,0.0248,-0.0821});
Transform& Transform281 =  Transform();
//Empty Transform
Shape& Shape282 =  Shape();
Shape282.setUSE(CString("HAnimJointShape"));
Transform281.addChild(&Shape282);

Transform280.addChild(&Transform281);

HAnimSegment279.addChild(&Transform280);

Shape& Shape283 =  Shape();
LineSet& LineSet284 =  LineSet();
LineSet284.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate285 =  Coordinate();
Coordinate285.setPoint(new float[]{0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625}, 6);
LineSet284.setCoord(Coordinate285);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA& ColorRGBA286 =  ColorRGBA();
ColorRGBA286.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet284.addChild(&ColorRGBA286);

Shape283.setGeometry(&LineSet284);

HAnimSegment279.addChild(&Shape283);

HAnimJoint278.addChildren(&HAnimSegment279);

HAnimJoint& HAnimJoint287 =  HAnimJoint();
HAnimJoint287.X3DNode::setName(CString("l_tarsometatarsal_3"));
HAnimJoint287.setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint287.setCenter(new float[]{0.0944,0.0175,-0.0625});
HAnimSegment& HAnimSegment288 =  HAnimSegment();
HAnimSegment288.X3DNode::setName(CString("l_metatarsal_3"));
HAnimSegment288.setDEF(CString("hanim_l_metatarsal_3"));
Transform& Transform289 =  Transform();
Transform289.setTranslation(new float[]{0.0944,0.0175,-0.0625});
Transform& Transform290 =  Transform();
//Empty Transform
Shape& Shape291 =  Shape();
Shape291.setUSE(CString("HAnimJointShape"));
Transform290.addChild(&Shape291);

Transform289.addChild(&Transform290);

HAnimSegment288.addChild(&Transform289);

Shape& Shape292 =  Shape();
LineSet& LineSet293 =  LineSet();
LineSet293.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate294 =  Coordinate();
Coordinate294.setPoint(new float[]{0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065}, 6);
LineSet293.setCoord(Coordinate294);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA& ColorRGBA295 =  ColorRGBA();
ColorRGBA295.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet293.addChild(&ColorRGBA295);

Shape292.setGeometry(&LineSet293);

HAnimSegment288.addChild(&Shape292);

HAnimJoint287.addChildren(&HAnimSegment288);

HAnimJoint& HAnimJoint296 =  HAnimJoint();
HAnimJoint296.X3DNode::setName(CString("l_metatarsophalangeal_3"));
HAnimJoint296.setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint296.setCenter(new float[]{0.0963,0.0065,-0.0065});
HAnimSegment& HAnimSegment297 =  HAnimSegment();
HAnimSegment297.X3DNode::setName(CString("l_tarsal_proximal_phalanx_3"));
HAnimSegment297.setDEF(CString("hanim_l_tarsal_proximal_phalanx_3"));
Transform& Transform298 =  Transform();
Transform298.setTranslation(new float[]{0.0963,0.0065,-0.0065});
Transform& Transform299 =  Transform();
//Empty Transform
Shape& Shape300 =  Shape();
Shape300.setUSE(CString("HAnimJointShape"));
Transform299.addChild(&Shape300);

Transform298.addChild(&Transform299);

HAnimSegment297.addChild(&Transform298);

Shape& Shape301 =  Shape();
LineSet& LineSet302 =  LineSet();
LineSet302.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate303 =  Coordinate();
Coordinate303.setPoint(new float[]{0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086}, 6);
LineSet302.setCoord(Coordinate303);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA304 =  ColorRGBA();
ColorRGBA304.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet302.addChild(&ColorRGBA304);

Shape301.setGeometry(&LineSet302);

HAnimSegment297.addChild(&Shape301);

HAnimJoint296.addChildren(&HAnimSegment297);

HAnimJoint& HAnimJoint305 =  HAnimJoint();
HAnimJoint305.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint305.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint305.setCenter(new float[]{0.0987,0.0034,0.0086});
HAnimSegment& HAnimSegment306 =  HAnimSegment();
HAnimSegment306.X3DNode::setName(CString("l_tarsal_middle_phalanx_3"));
HAnimSegment306.setDEF(CString("hanim_l_tarsal_middle_phalanx_3"));
Transform& Transform307 =  Transform();
Transform307.setTranslation(new float[]{0.0987,0.0034,0.0086});
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
Coordinate312.setPoint(new float[]{0.0987,0.0034,0.0086,0.1002,0.0013,0.0178}, 6);
LineSet311.setCoord(Coordinate312);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA313 =  ColorRGBA();
ColorRGBA313.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet311.addChild(&ColorRGBA313);

Shape310.setGeometry(&LineSet311);

HAnimSegment306.addChild(&Shape310);

HAnimSite& HAnimSite314 =  HAnimSite();
HAnimSite314.X3DNode::setName(CString("l_tarsal_distal_phalanx_3_tip"));
HAnimSite314.setDEF(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor315 =  TouchSensor();
TouchSensor315.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_3_tip"));
HAnimSite314.addChild(&TouchSensor315);

Shape& Shape316 =  Shape();
Shape316.setUSE(CString("HAnimSiteShape"));
HAnimSite314.addChild(&Shape316);

HAnimSegment306.addChild(&HAnimSite314);

HAnimJoint305.addChildren(&HAnimSegment306);

HAnimJoint& HAnimJoint317 =  HAnimJoint();
HAnimJoint317.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint317.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint317.setCenter(new float[]{0.1002,0.0013,0.0178});
HAnimJoint305.addChildren(&HAnimJoint317);

HAnimJoint296.addChildren(&HAnimJoint305);

HAnimJoint287.addChildren(&HAnimJoint296);

HAnimJoint278.addChildren(&HAnimJoint287);

HAnimJoint187.addChildren(&HAnimJoint278);

HAnimJoint174.addChildren(&HAnimJoint187);

HAnimJoint& HAnimJoint318 =  HAnimJoint();
HAnimJoint318.X3DNode::setName(CString("l_calcaneocuboid"));
HAnimJoint318.setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint318.setCenter(new float[]{0.0889,0.0494,-0.1278});
HAnimSegment& HAnimSegment319 =  HAnimSegment();
HAnimSegment319.X3DNode::setName(CString("l_calcaneus"));
HAnimSegment319.setDEF(CString("hanim_l_calcaneus"));
Transform& Transform320 =  Transform();
Transform320.setTranslation(new float[]{0.0889,0.0494,-0.1278});
Transform& Transform321 =  Transform();
//Empty Transform
Shape& Shape322 =  Shape();
Shape322.setUSE(CString("HAnimJointShape"));
Transform321.addChild(&Shape322);

Transform320.addChild(&Transform321);

HAnimSegment319.addChild(&Transform320);

Shape& Shape323 =  Shape();
LineSet& LineSet324 =  LineSet();
LineSet324.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate325 =  Coordinate();
Coordinate325.setPoint(new float[]{0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998}, 6);
LineSet324.setCoord(Coordinate325);

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA& ColorRGBA326 =  ColorRGBA();
ColorRGBA326.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet324.addChild(&ColorRGBA326);

Shape323.setGeometry(&LineSet324);

HAnimSegment319.addChild(&Shape323);

HAnimJoint318.addChildren(&HAnimSegment319);

HAnimJoint& HAnimJoint327 =  HAnimJoint();
HAnimJoint327.X3DNode::setName(CString("l_transversetarsal"));
HAnimJoint327.setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint327.setCenter(new float[]{0.1105,0.0267,-0.0998});
HAnimSegment& HAnimSegment328 =  HAnimSegment();
HAnimSegment328.X3DNode::setName(CString("l_cuboid"));
HAnimSegment328.setDEF(CString("hanim_l_cuboid"));
Transform& Transform329 =  Transform();
Transform329.setTranslation(new float[]{0.1105,0.0267,-0.0998});
Transform& Transform330 =  Transform();
//Empty Transform
Shape& Shape331 =  Shape();
Shape331.setUSE(CString("HAnimJointShape"));
Transform330.addChild(&Shape331);

Transform329.addChild(&Transform330);

HAnimSegment328.addChild(&Transform329);

Shape& Shape332 =  Shape();
LineSet& LineSet333 =  LineSet();
LineSet333.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate334 =  Coordinate();
Coordinate334.setPoint(new float[]{0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634}, 6);
LineSet333.setCoord(Coordinate334);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA& ColorRGBA335 =  ColorRGBA();
ColorRGBA335.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet333.addChild(&ColorRGBA335);

Shape332.setGeometry(&LineSet333);

HAnimSegment328.addChild(&Shape332);

Shape& Shape336 =  Shape();
LineSet& LineSet337 =  LineSet();
LineSet337.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate338 =  Coordinate();
Coordinate338.setPoint(new float[]{0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671}, 6);
LineSet337.setCoord(Coordinate338);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA& ColorRGBA339 =  ColorRGBA();
ColorRGBA339.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet337.addChild(&ColorRGBA339);

Shape336.setGeometry(&LineSet337);

HAnimSegment328.addChild(&Shape336);

HAnimJoint327.addChildren(&HAnimSegment328);

HAnimJoint& HAnimJoint340 =  HAnimJoint();
HAnimJoint340.X3DNode::setName(CString("l_tarsometatarsal_4"));
HAnimJoint340.setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint340.setCenter(new float[]{0.1063,0.016,-0.0634});
HAnimSegment& HAnimSegment341 =  HAnimSegment();
HAnimSegment341.X3DNode::setName(CString("l_metatarsal_4"));
HAnimSegment341.setDEF(CString("hanim_l_metatarsal_4"));
Transform& Transform342 =  Transform();
Transform342.setTranslation(new float[]{0.1063,0.016,-0.0634});
Transform& Transform343 =  Transform();
//Empty Transform
Shape& Shape344 =  Shape();
Shape344.setUSE(CString("HAnimJointShape"));
Transform343.addChild(&Shape344);

Transform342.addChild(&Transform343);

HAnimSegment341.addChild(&Transform342);

Shape& Shape345 =  Shape();
LineSet& LineSet346 =  LineSet();
LineSet346.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate347 =  Coordinate();
Coordinate347.setPoint(new float[]{0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107}, 6);
LineSet346.setCoord(Coordinate347);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA& ColorRGBA348 =  ColorRGBA();
ColorRGBA348.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet346.addChild(&ColorRGBA348);

Shape345.setGeometry(&LineSet346);

HAnimSegment341.addChild(&Shape345);

HAnimJoint340.addChildren(&HAnimSegment341);

HAnimJoint& HAnimJoint349 =  HAnimJoint();
HAnimJoint349.X3DNode::setName(CString("l_metatarsophalangeal_4"));
HAnimJoint349.setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint349.setCenter(new float[]{0.1097,0.0058,-0.0107});
HAnimSegment& HAnimSegment350 =  HAnimSegment();
HAnimSegment350.X3DNode::setName(CString("l_tarsal_proximal_phalanx_4"));
HAnimSegment350.setDEF(CString("hanim_l_tarsal_proximal_phalanx_4"));
Transform& Transform351 =  Transform();
Transform351.setTranslation(new float[]{0.1097,0.0058,-0.0107});
Transform& Transform352 =  Transform();
//Empty Transform
Shape& Shape353 =  Shape();
Shape353.setUSE(CString("HAnimJointShape"));
Transform352.addChild(&Shape353);

Transform351.addChild(&Transform352);

HAnimSegment350.addChild(&Transform351);

Shape& Shape354 =  Shape();
LineSet& LineSet355 =  LineSet();
LineSet355.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate356 =  Coordinate();
Coordinate356.setPoint(new float[]{0.1097,0.0058,-0.0107,0.114,0.0037,0.0044}, 6);
LineSet355.setCoord(Coordinate356);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA357 =  ColorRGBA();
ColorRGBA357.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet355.addChild(&ColorRGBA357);

Shape354.setGeometry(&LineSet355);

HAnimSegment350.addChild(&Shape354);

HAnimJoint349.addChildren(&HAnimSegment350);

HAnimJoint& HAnimJoint358 =  HAnimJoint();
HAnimJoint358.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint358.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint358.setCenter(new float[]{0.114,0.0037,0.0044});
HAnimSegment& HAnimSegment359 =  HAnimSegment();
HAnimSegment359.X3DNode::setName(CString("l_tarsal_middle_phalanx_4"));
HAnimSegment359.setDEF(CString("hanim_l_tarsal_middle_phalanx_4"));
Transform& Transform360 =  Transform();
Transform360.setTranslation(new float[]{0.114,0.0037,0.0044});
Transform& Transform361 =  Transform();
//Empty Transform
Shape& Shape362 =  Shape();
Shape362.setUSE(CString("HAnimJointShape"));
Transform361.addChild(&Shape362);

Transform360.addChild(&Transform361);

HAnimSegment359.addChild(&Transform360);

Shape& Shape363 =  Shape();
LineSet& LineSet364 =  LineSet();
LineSet364.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate365 =  Coordinate();
Coordinate365.setPoint(new float[]{0.114,0.0037,0.0044,0.1155,0.0008,0.0118}, 6);
LineSet364.setCoord(Coordinate365);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA366 =  ColorRGBA();
ColorRGBA366.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet364.addChild(&ColorRGBA366);

Shape363.setGeometry(&LineSet364);

HAnimSegment359.addChild(&Shape363);

HAnimSite& HAnimSite367 =  HAnimSite();
HAnimSite367.X3DNode::setName(CString("l_tarsal_distal_phalanx_4_tip"));
HAnimSite367.setDEF(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor368 =  TouchSensor();
TouchSensor368.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_4_tip"));
HAnimSite367.addChild(&TouchSensor368);

Shape& Shape369 =  Shape();
Shape369.setUSE(CString("HAnimSiteShape"));
HAnimSite367.addChild(&Shape369);

HAnimSegment359.addChild(&HAnimSite367);

HAnimJoint358.addChildren(&HAnimSegment359);

HAnimJoint& HAnimJoint370 =  HAnimJoint();
HAnimJoint370.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint370.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint370.setCenter(new float[]{0.1155,0.0008,0.0118});
HAnimJoint358.addChildren(&HAnimJoint370);

HAnimJoint349.addChildren(&HAnimJoint358);

HAnimJoint340.addChildren(&HAnimJoint349);

HAnimJoint327.addChildren(&HAnimJoint340);

HAnimJoint& HAnimJoint371 =  HAnimJoint();
HAnimJoint371.X3DNode::setName(CString("l_tarsometatarsal_5"));
HAnimJoint371.setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint371.setCenter(new float[]{0.1206,0.0124,-0.0671});
HAnimSegment& HAnimSegment372 =  HAnimSegment();
HAnimSegment372.X3DNode::setName(CString("l_metatarsal_5"));
HAnimSegment372.setDEF(CString("hanim_l_metatarsal_5"));
Transform& Transform373 =  Transform();
Transform373.setTranslation(new float[]{0.1206,0.0124,-0.0671});
Transform& Transform374 =  Transform();
//Empty Transform
Shape& Shape375 =  Shape();
Shape375.setUSE(CString("HAnimJointShape"));
Transform374.addChild(&Shape375);

Transform373.addChild(&Transform374);

HAnimSegment372.addChild(&Transform373);

Shape& Shape376 =  Shape();
LineSet& LineSet377 =  LineSet();
LineSet377.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate378 =  Coordinate();
Coordinate378.setPoint(new float[]{0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153}, 6);
LineSet377.setCoord(Coordinate378);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA& ColorRGBA379 =  ColorRGBA();
ColorRGBA379.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet377.addChild(&ColorRGBA379);

Shape376.setGeometry(&LineSet377);

HAnimSegment372.addChild(&Shape376);

HAnimSite& HAnimSite380 =  HAnimSite();
HAnimSite380.X3DNode::setName(CString("l_metatarsal_phalanx_5"));
HAnimSite380.setDEF(CString("hanim_l_metatarsal_phalanx_5"));
TouchSensor& TouchSensor381 =  TouchSensor();
TouchSensor381.setDescription(CString("HAnimSite l_metatarsal_phalanx_5"));
HAnimSite380.addChild(&TouchSensor381);

Shape& Shape382 =  Shape();
Shape382.setUSE(CString("HAnimSiteShape"));
HAnimSite380.addChild(&Shape382);

HAnimSegment372.addChild(&HAnimSite380);

HAnimJoint371.addChildren(&HAnimSegment372);

HAnimJoint& HAnimJoint383 =  HAnimJoint();
HAnimJoint383.X3DNode::setName(CString("l_metatarsophalangeal_5"));
HAnimJoint383.setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint383.setCenter(new float[]{0.1239,0.0051,-0.0153});
HAnimSegment& HAnimSegment384 =  HAnimSegment();
HAnimSegment384.X3DNode::setName(CString("l_tarsal_proximal_phalanx_5"));
HAnimSegment384.setDEF(CString("hanim_l_tarsal_proximal_phalanx_5"));
Transform& Transform385 =  Transform();
Transform385.setTranslation(new float[]{0.1239,0.0051,-0.0153});
Transform& Transform386 =  Transform();
//Empty Transform
Shape& Shape387 =  Shape();
Shape387.setUSE(CString("HAnimJointShape"));
Transform386.addChild(&Shape387);

Transform385.addChild(&Transform386);

HAnimSegment384.addChild(&Transform385);

Shape& Shape388 =  Shape();
LineSet& LineSet389 =  LineSet();
LineSet389.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate390 =  Coordinate();
Coordinate390.setPoint(new float[]{0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077}, 6);
LineSet389.setCoord(Coordinate390);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA391 =  ColorRGBA();
ColorRGBA391.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet389.addChild(&ColorRGBA391);

Shape388.setGeometry(&LineSet389);

HAnimSegment384.addChild(&Shape388);

HAnimJoint383.addChildren(&HAnimSegment384);

HAnimJoint& HAnimJoint392 =  HAnimJoint();
HAnimJoint392.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint392.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint392.setCenter(new float[]{0.1262,0.0023,-0.0077});
HAnimSegment& HAnimSegment393 =  HAnimSegment();
HAnimSegment393.X3DNode::setName(CString("l_tarsal_middle_phalanx_5"));
HAnimSegment393.setDEF(CString("hanim_l_tarsal_middle_phalanx_5"));
Transform& Transform394 =  Transform();
Transform394.setTranslation(new float[]{0.1262,0.0023,-0.0077});
Transform& Transform395 =  Transform();
//Empty Transform
Shape& Shape396 =  Shape();
Shape396.setUSE(CString("HAnimJointShape"));
Transform395.addChild(&Shape396);

Transform394.addChild(&Transform395);

HAnimSegment393.addChild(&Transform394);

Shape& Shape397 =  Shape();
LineSet& LineSet398 =  LineSet();
LineSet398.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate399 =  Coordinate();
Coordinate399.setPoint(new float[]{0.1262,0.0023,-0.0077,0.1271,0,0}, 6);
LineSet398.setCoord(Coordinate399);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA400 =  ColorRGBA();
ColorRGBA400.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet398.addChild(&ColorRGBA400);

Shape397.setGeometry(&LineSet398);

HAnimSegment393.addChild(&Shape397);

HAnimSite& HAnimSite401 =  HAnimSite();
HAnimSite401.X3DNode::setName(CString("l_tarsal_distal_phalanx_5_tip"));
HAnimSite401.setDEF(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor402 =  TouchSensor();
TouchSensor402.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_5_tip"));
HAnimSite401.addChild(&TouchSensor402);

Shape& Shape403 =  Shape();
Shape403.setUSE(CString("HAnimSiteShape"));
HAnimSite401.addChild(&Shape403);

HAnimSegment393.addChild(&HAnimSite401);

HAnimJoint392.addChildren(&HAnimSegment393);

HAnimJoint& HAnimJoint404 =  HAnimJoint();
HAnimJoint404.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint404.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint404.setCenter(new float[]{0.1271,0,0});
HAnimJoint392.addChildren(&HAnimJoint404);

HAnimJoint383.addChildren(&HAnimJoint392);

HAnimJoint371.addChildren(&HAnimJoint383);

HAnimJoint327.addChildren(&HAnimJoint371);

HAnimJoint318.addChildren(&HAnimJoint327);

HAnimJoint174.addChildren(&HAnimJoint318);

HAnimJoint159.addChildren(&HAnimJoint174);

HAnimJoint141.addChildren(&HAnimJoint159);

HAnimJoint104.addChildren(&HAnimJoint141);

HAnimJoint& HAnimJoint405 =  HAnimJoint();
HAnimJoint405.X3DNode::setName(CString("r_hip"));
HAnimJoint405.setDEF(CString("hanim_r_hip"));
HAnimJoint405.setCenter(new float[]{-0.095,0.9171,0.0029});
HAnimSegment& HAnimSegment406 =  HAnimSegment();
HAnimSegment406.X3DNode::setName(CString("r_thigh"));
HAnimSegment406.setDEF(CString("hanim_r_thigh"));
Transform& Transform407 =  Transform();
Transform407.setTranslation(new float[]{-0.095,0.9171,0.0029});
Transform& Transform408 =  Transform();
//Empty Transform
Shape& Shape409 =  Shape();
Shape409.setUSE(CString("HAnimJointShape"));
Transform408.addChild(&Shape409);

Transform407.addChild(&Transform408);

HAnimSegment406.addChild(&Transform407);

Shape& Shape410 =  Shape();
LineSet& LineSet411 =  LineSet();
LineSet411.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate412 =  Coordinate();
Coordinate412.setPoint(new float[]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet411.setCoord(Coordinate412);

//from r_hip to r_knee vertices 2
ColorRGBA& ColorRGBA413 =  ColorRGBA();
ColorRGBA413.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet411.addChild(&ColorRGBA413);

Shape410.setGeometry(&LineSet411);

HAnimSegment406.addChild(&Shape410);

HAnimSite& HAnimSite414 =  HAnimSite();
HAnimSite414.X3DNode::setName(CString("r_lateral_malleolus"));
HAnimSite414.setDEF(CString("hanim_r_lateral_malleolus"));
HAnimSite414.setTranslation(new float[]{-0.1006,0.0658,-0.1075});
TouchSensor& TouchSensor415 =  TouchSensor();
TouchSensor415.setDescription(CString("HAnimSite r_lateral_malleolus"));
HAnimSite414.addChild(&TouchSensor415);

Shape& Shape416 =  Shape();
Shape416.setUSE(CString("HAnimSiteShape"));
HAnimSite414.addChild(&Shape416);

HAnimSegment406.addChild(&HAnimSite414);

HAnimSite& HAnimSite417 =  HAnimSite();
HAnimSite417.X3DNode::setName(CString("r_medial_malleolus"));
HAnimSite417.setDEF(CString("hanim_r_medial_malleolus"));
HAnimSite417.setTranslation(new float[]{-0.0591,0.076,-0.0928});
TouchSensor& TouchSensor418 =  TouchSensor();
TouchSensor418.setDescription(CString("HAnimSite r_medial_malleolus"));
HAnimSite417.addChild(&TouchSensor418);

Shape& Shape419 =  Shape();
Shape419.setUSE(CString("HAnimSiteShape"));
HAnimSite417.addChild(&Shape419);

HAnimSegment406.addChild(&HAnimSite417);

HAnimSite& HAnimSite420 =  HAnimSite();
HAnimSite420.X3DNode::setName(CString("r_tibiale"));
HAnimSite420.setDEF(CString("hanim_r_tibiale"));
TouchSensor& TouchSensor421 =  TouchSensor();
TouchSensor421.setDescription(CString("HAnimSite r_tibiale"));
HAnimSite420.addChild(&TouchSensor421);

Shape& Shape422 =  Shape();
Shape422.setUSE(CString("HAnimSiteShape"));
HAnimSite420.addChild(&Shape422);

HAnimSegment406.addChild(&HAnimSite420);

HAnimJoint405.addChildren(&HAnimSegment406);

HAnimJoint& HAnimJoint423 =  HAnimJoint();
HAnimJoint423.X3DNode::setName(CString("r_knee"));
HAnimJoint423.setDEF(CString("hanim_r_knee"));
HAnimJoint423.setCenter(new float[]{-0.0867,0.4913,0.0318});
HAnimSegment& HAnimSegment424 =  HAnimSegment();
HAnimSegment424.X3DNode::setName(CString("r_calf"));
HAnimSegment424.setDEF(CString("hanim_r_calf"));
Transform& Transform425 =  Transform();
Transform425.setTranslation(new float[]{-0.0867,0.4913,0.0318});
Transform& Transform426 =  Transform();
//Empty Transform
Shape& Shape427 =  Shape();
Shape427.setUSE(CString("HAnimJointShape"));
Transform426.addChild(&Shape427);

Transform425.addChild(&Transform426);

HAnimSegment424.addChild(&Transform425);

Shape& Shape428 =  Shape();
LineSet& LineSet429 =  LineSet();
LineSet429.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate430 =  Coordinate();
Coordinate430.setPoint(new float[]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet429.setCoord(Coordinate430);

//from r_knee to r_talocrural vertices 2
ColorRGBA& ColorRGBA431 =  ColorRGBA();
ColorRGBA431.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet429.addChild(&ColorRGBA431);

Shape428.setGeometry(&LineSet429);

HAnimSegment424.addChild(&Shape428);

HAnimSite& HAnimSite432 =  HAnimSite();
HAnimSite432.X3DNode::setName(CString("r_calcaneus_posterior"));
HAnimSite432.setDEF(CString("hanim_r_calcaneus_posterior"));
HAnimSite432.setTranslation(new float[]{-0.0692,0.0297,-0.1221});
TouchSensor& TouchSensor433 =  TouchSensor();
TouchSensor433.setDescription(CString("HAnimSite r_calcaneus_posterior"));
HAnimSite432.addChild(&TouchSensor433);

Shape& Shape434 =  Shape();
Shape434.setUSE(CString("HAnimSiteShape"));
HAnimSite432.addChild(&Shape434);

HAnimSegment424.addChild(&HAnimSite432);

HAnimSite& HAnimSite435 =  HAnimSite();
HAnimSite435.X3DNode::setName(CString("r_sphyrion"));
HAnimSite435.setDEF(CString("hanim_r_sphyrion"));
HAnimSite435.setTranslation(new float[]{-0.0603,0.061,-0.1002});
TouchSensor& TouchSensor436 =  TouchSensor();
TouchSensor436.setDescription(CString("HAnimSite r_sphyrion"));
HAnimSite435.addChild(&TouchSensor436);

Shape& Shape437 =  Shape();
Shape437.setUSE(CString("HAnimSiteShape"));
HAnimSite435.addChild(&Shape437);

HAnimSegment424.addChild(&HAnimSite435);

HAnimJoint423.addChildren(&HAnimSegment424);

HAnimJoint& HAnimJoint438 =  HAnimJoint();
HAnimJoint438.X3DNode::setName(CString("r_talocrural"));
HAnimJoint438.setDEF(CString("hanim_r_talocrural"));
HAnimJoint438.setCenter(new float[]{-0.0801,0.0712,-0.0766});
HAnimSegment& HAnimSegment439 =  HAnimSegment();
HAnimSegment439.X3DNode::setName(CString("r_talus"));
HAnimSegment439.setDEF(CString("hanim_r_talus"));
Transform& Transform440 =  Transform();
Transform440.setScale(new float[]{0.15,0.15,0.15});
Transform440.setTranslation(new float[]{-0.05,0.06,-0.025});
Transform440.setRotation(new float[]{1,0,0,-1.57});
//Transform right foot
Transform& Transform441 =  Transform();
//Empty Transform right foot
Shape& Shape442 =  Shape();
Shape442.setUSE(CString("HAnimJointShape"));
Transform441.addChild(&Shape442);

Transform440.addChild(&Transform441);

HAnimSegment439.addChild(&Transform440);

Shape& Shape443 =  Shape();
LineSet& LineSet444 =  LineSet();
LineSet444.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate445 =  Coordinate();
Coordinate445.setPoint(new float[]{-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097}, 6);
LineSet444.setCoord(Coordinate445);

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA& ColorRGBA446 =  ColorRGBA();
ColorRGBA446.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet444.addChild(&ColorRGBA446);

Shape443.setGeometry(&LineSet444);

HAnimSegment439.addChild(&Shape443);

Shape& Shape447 =  Shape();
LineSet& LineSet448 =  LineSet();
LineSet448.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate449 =  Coordinate();
Coordinate449.setPoint(new float[]{-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278}, 6);
LineSet448.setCoord(Coordinate449);

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA& ColorRGBA450 =  ColorRGBA();
ColorRGBA450.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet448.addChild(&ColorRGBA450);

Shape447.setGeometry(&LineSet448);

HAnimSegment439.addChild(&Shape447);

HAnimJoint438.addChildren(&HAnimSegment439);

HAnimJoint& HAnimJoint451 =  HAnimJoint();
HAnimJoint451.X3DNode::setName(CString("r_talocalcaneonavicular"));
HAnimJoint451.setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint451.setCenter(new float[]{-0.0781,0.0283,-0.097});
HAnimSegment& HAnimSegment452 =  HAnimSegment();
HAnimSegment452.X3DNode::setName(CString("r_navicular"));
HAnimSegment452.setDEF(CString("hanim_r_navicular"));
Transform& Transform453 =  Transform();
Transform453.setTranslation(new float[]{-0.0781,0.0283,-0.097});
Transform& Transform454 =  Transform();
//Empty Transform
Shape& Shape455 =  Shape();
Shape455.setUSE(CString("HAnimJointShape"));
Transform454.addChild(&Shape455);

Transform453.addChild(&Transform454);

HAnimSegment452.addChild(&Transform453);

Shape& Shape456 =  Shape();
LineSet& LineSet457 =  LineSet();
LineSet457.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate458 =  Coordinate();
Coordinate458.setPoint(new float[]{-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835}, 6);
LineSet457.setCoord(Coordinate458);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA& ColorRGBA459 =  ColorRGBA();
ColorRGBA459.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet457.addChild(&ColorRGBA459);

Shape456.setGeometry(&LineSet457);

HAnimSegment452.addChild(&Shape456);

Shape& Shape460 =  Shape();
LineSet& LineSet461 =  LineSet();
LineSet461.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate462 =  Coordinate();
Coordinate462.setPoint(new float[]{-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805}, 6);
LineSet461.setCoord(Coordinate462);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA& ColorRGBA463 =  ColorRGBA();
ColorRGBA463.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet461.addChild(&ColorRGBA463);

Shape460.setGeometry(&LineSet461);

HAnimSegment452.addChild(&Shape460);

Shape& Shape464 =  Shape();
LineSet& LineSet465 =  LineSet();
LineSet465.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate466 =  Coordinate();
Coordinate466.setPoint(new float[]{-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821}, 6);
LineSet465.setCoord(Coordinate466);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA& ColorRGBA467 =  ColorRGBA();
ColorRGBA467.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet465.addChild(&ColorRGBA467);

Shape464.setGeometry(&LineSet465);

HAnimSegment452.addChild(&Shape464);

HAnimJoint451.addChildren(&HAnimSegment452);

HAnimJoint& HAnimJoint468 =  HAnimJoint();
HAnimJoint468.X3DNode::setName(CString("r_cuneonavicular_1"));
HAnimJoint468.setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint468.setCenter(new float[]{-0.0672,0.0235,-0.0835});
HAnimSegment& HAnimSegment469 =  HAnimSegment();
HAnimSegment469.X3DNode::setName(CString("r_cuneiform_1"));
HAnimSegment469.setDEF(CString("hanim_r_cuneiform_1"));
Transform& Transform470 =  Transform();
Transform470.setTranslation(new float[]{-0.0672,0.0235,-0.0835});
Transform& Transform471 =  Transform();
//Empty Transform
Shape& Shape472 =  Shape();
Shape472.setUSE(CString("HAnimJointShape"));
Transform471.addChild(&Shape472);

Transform470.addChild(&Transform471);

HAnimSegment469.addChild(&Transform470);

Shape& Shape473 =  Shape();
LineSet& LineSet474 =  LineSet();
LineSet474.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate475 =  Coordinate();
Coordinate475.setPoint(new float[]{-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577}, 6);
LineSet474.setCoord(Coordinate475);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA& ColorRGBA476 =  ColorRGBA();
ColorRGBA476.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet474.addChild(&ColorRGBA476);

Shape473.setGeometry(&LineSet474);

HAnimSegment469.addChild(&Shape473);

HAnimJoint468.addChildren(&HAnimSegment469);

HAnimJoint& HAnimJoint477 =  HAnimJoint();
HAnimJoint477.X3DNode::setName(CString("r_tarsometatarsal_1"));
HAnimJoint477.setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint477.setCenter(new float[]{-0.0644,0.0147,-0.0577});
HAnimSegment& HAnimSegment478 =  HAnimSegment();
HAnimSegment478.X3DNode::setName(CString("r_metatarsal_1"));
HAnimSegment478.setDEF(CString("hanim_r_metatarsal_1"));
Transform& Transform479 =  Transform();
Transform479.setTranslation(new float[]{-0.0644,0.0147,-0.0577});
Transform& Transform480 =  Transform();
//Empty Transform
Shape& Shape481 =  Shape();
Shape481.setUSE(CString("HAnimJointShape"));
Transform480.addChild(&Shape481);

Transform479.addChild(&Transform480);

HAnimSegment478.addChild(&Transform479);

Shape& Shape482 =  Shape();
LineSet& LineSet483 =  LineSet();
LineSet483.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate484 =  Coordinate();
Coordinate484.setPoint(new float[]{-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083}, 6);
LineSet483.setCoord(Coordinate484);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA& ColorRGBA485 =  ColorRGBA();
ColorRGBA485.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet483.addChild(&ColorRGBA485);

Shape482.setGeometry(&LineSet483);

HAnimSegment478.addChild(&Shape482);

HAnimSite& HAnimSite486 =  HAnimSite();
HAnimSite486.X3DNode::setName(CString("r_metatarsal_phalanx_1"));
HAnimSite486.setDEF(CString("hanim_r_metatarsal_phalanx_1"));
TouchSensor& TouchSensor487 =  TouchSensor();
TouchSensor487.setDescription(CString("HAnimSite r_metatarsal_phalanx_1"));
HAnimSite486.addChild(&TouchSensor487);

Shape& Shape488 =  Shape();
Shape488.setUSE(CString("HAnimSiteShape"));
HAnimSite486.addChild(&Shape488);

HAnimSegment478.addChild(&HAnimSite486);

HAnimJoint477.addChildren(&HAnimSegment478);

HAnimJoint& HAnimJoint489 =  HAnimJoint();
HAnimJoint489.X3DNode::setName(CString("r_metatarsophalangeal_1"));
HAnimJoint489.setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint489.setCenter(new float[]{-0.0619,0.0059,-0.0083});
HAnimSegment& HAnimSegment490 =  HAnimSegment();
HAnimSegment490.X3DNode::setName(CString("r_tarsal_proximal_phalanx_1"));
HAnimSegment490.setDEF(CString("hanim_r_tarsal_proximal_phalanx_1"));
Transform& Transform491 =  Transform();
Transform491.setTranslation(new float[]{-0.0619,0.0059,-0.0083});
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
Coordinate496.setPoint(new float[]{-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083}, 6);
LineSet495.setCoord(Coordinate496);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA497 =  ColorRGBA();
ColorRGBA497.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet495.addChild(&ColorRGBA497);

Shape494.setGeometry(&LineSet495);

HAnimSegment490.addChild(&Shape494);

HAnimSite& HAnimSite498 =  HAnimSite();
HAnimSite498.X3DNode::setName(CString("r_tarsal_distal_phalanx_1_tip"));
HAnimSite498.setDEF(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor499 =  TouchSensor();
TouchSensor499.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_1_tip"));
HAnimSite498.addChild(&TouchSensor499);

Shape& Shape500 =  Shape();
Shape500.setUSE(CString("HAnimSiteShape"));
HAnimSite498.addChild(&Shape500);

HAnimSegment490.addChild(&HAnimSite498);

HAnimJoint489.addChildren(&HAnimSegment490);

HAnimJoint& HAnimJoint501 =  HAnimJoint();
HAnimJoint501.X3DNode::setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint501.setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint489.addChildren(&HAnimJoint501);

HAnimJoint477.addChildren(&HAnimJoint489);

HAnimJoint468.addChildren(&HAnimJoint477);

HAnimJoint451.addChildren(&HAnimJoint468);

HAnimJoint& HAnimJoint502 =  HAnimJoint();
HAnimJoint502.X3DNode::setName(CString("r_cuneonavicular_2"));
HAnimJoint502.setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint502.setCenter(new float[]{-0.0812,0.025,-0.0805});
HAnimSegment& HAnimSegment503 =  HAnimSegment();
HAnimSegment503.X3DNode::setName(CString("r_cuneiform_2"));
HAnimSegment503.setDEF(CString("hanim_r_cuneiform_2"));
Transform& Transform504 =  Transform();
Transform504.setTranslation(new float[]{-0.0812,0.025,-0.0805});
Transform& Transform505 =  Transform();
//Empty Transform
Shape& Shape506 =  Shape();
Shape506.setUSE(CString("HAnimJointShape"));
Transform505.addChild(&Shape506);

Transform504.addChild(&Transform505);

HAnimSegment503.addChild(&Transform504);

Shape& Shape507 =  Shape();
LineSet& LineSet508 =  LineSet();
LineSet508.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate509 =  Coordinate();
Coordinate509.setPoint(new float[]{-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608}, 6);
LineSet508.setCoord(Coordinate509);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA510 =  ColorRGBA();
ColorRGBA510.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet508.addChild(&ColorRGBA510);

Shape507.setGeometry(&LineSet508);

HAnimSegment503.addChild(&Shape507);

HAnimJoint502.addChildren(&HAnimSegment503);

HAnimJoint& HAnimJoint511 =  HAnimJoint();
HAnimJoint511.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint511.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint511.setCenter(new float[]{-0.08,0.0175,-0.0608});
HAnimSegment& HAnimSegment512 =  HAnimSegment();
HAnimSegment512.X3DNode::setName(CString("r_metatarsal_2"));
HAnimSegment512.setDEF(CString("hanim_r_metatarsal_2"));
Transform& Transform513 =  Transform();
Transform513.setTranslation(new float[]{-0.08,0.0175,-0.0608});
Transform& Transform514 =  Transform();
//Empty Transform
Shape& Shape515 =  Shape();
Shape515.setUSE(CString("HAnimJointShape"));
Transform514.addChild(&Shape515);

Transform513.addChild(&Transform514);

HAnimSegment512.addChild(&Transform513);

Shape& Shape516 =  Shape();
LineSet& LineSet517 =  LineSet();
LineSet517.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate518 =  Coordinate();
Coordinate518.setPoint(new float[]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004}, 6);
LineSet517.setCoord(Coordinate518);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA519 =  ColorRGBA();
ColorRGBA519.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet517.addChild(&ColorRGBA519);

Shape516.setGeometry(&LineSet517);

HAnimSegment512.addChild(&Shape516);

HAnimJoint511.addChildren(&HAnimSegment512);

HAnimJoint& HAnimJoint520 =  HAnimJoint();
HAnimJoint520.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint520.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint520.setCenter(new float[]{-0.0823,0.0064,-0.004});
HAnimSegment& HAnimSegment521 =  HAnimSegment();
HAnimSegment521.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment521.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Transform& Transform522 =  Transform();
Transform522.setTranslation(new float[]{-0.0823,0.0064,-0.004});
Transform& Transform523 =  Transform();
//Empty Transform
Shape& Shape524 =  Shape();
Shape524.setUSE(CString("HAnimJointShape"));
Transform523.addChild(&Shape524);

Transform522.addChild(&Transform523);

HAnimSegment521.addChild(&Transform522);

Shape& Shape525 =  Shape();
LineSet& LineSet526 =  LineSet();
LineSet526.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate527 =  Coordinate();
Coordinate527.setPoint(new float[]{-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121}, 6);
LineSet526.setCoord(Coordinate527);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA528 =  ColorRGBA();
ColorRGBA528.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet526.addChild(&ColorRGBA528);

Shape525.setGeometry(&LineSet526);

HAnimSegment521.addChild(&Shape525);

HAnimJoint520.addChildren(&HAnimSegment521);

HAnimJoint& HAnimJoint529 =  HAnimJoint();
HAnimJoint529.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint529.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint529.setCenter(new float[]{-0.0841,0.0041,0.0121});
HAnimSegment& HAnimSegment530 =  HAnimSegment();
HAnimSegment530.X3DNode::setName(CString("r_tarsal_middle_phalanx_2"));
HAnimSegment530.setDEF(CString("hanim_r_tarsal_middle_phalanx_2"));
Transform& Transform531 =  Transform();
Transform531.setTranslation(new float[]{-0.0841,0.0041,0.0121});
Transform& Transform532 =  Transform();
//Empty Transform
Shape& Shape533 =  Shape();
Shape533.setUSE(CString("HAnimJointShape"));
Transform532.addChild(&Shape533);

Transform531.addChild(&Transform532);

HAnimSegment530.addChild(&Transform531);

Shape& Shape534 =  Shape();
LineSet& LineSet535 =  LineSet();
LineSet535.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate536 =  Coordinate();
Coordinate536.setPoint(new float[]{-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216}, 6);
LineSet535.setCoord(Coordinate536);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA537 =  ColorRGBA();
ColorRGBA537.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet535.addChild(&ColorRGBA537);

Shape534.setGeometry(&LineSet535);

HAnimSegment530.addChild(&Shape534);

HAnimSite& HAnimSite538 =  HAnimSite();
HAnimSite538.X3DNode::setName(CString("r_tarsal_distal_phalanx_2_tip"));
HAnimSite538.setDEF(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimSite538.setTranslation(new float[]{-0.0883,0.0134,0.1383});
TouchSensor& TouchSensor539 =  TouchSensor();
TouchSensor539.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_2_tip"));
HAnimSite538.addChild(&TouchSensor539);

Shape& Shape540 =  Shape();
Shape540.setUSE(CString("HAnimSiteShape"));
HAnimSite538.addChild(&Shape540);

HAnimSegment530.addChild(&HAnimSite538);

HAnimJoint529.addChildren(&HAnimSegment530);

HAnimJoint& HAnimJoint541 =  HAnimJoint();
HAnimJoint541.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint541.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint541.setCenter(new float[]{-0.0841,0.0013,0.0216});
HAnimJoint529.addChildren(&HAnimJoint541);

HAnimJoint520.addChildren(&HAnimJoint529);

HAnimJoint511.addChildren(&HAnimJoint520);

HAnimJoint502.addChildren(&HAnimJoint511);

HAnimJoint451.addChildren(&HAnimJoint502);

HAnimJoint& HAnimJoint542 =  HAnimJoint();
HAnimJoint542.X3DNode::setName(CString("r_cuneonavicular_3"));
HAnimJoint542.setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint542.setCenter(new float[]{-0.0928,0.0248,-0.0821});
HAnimSegment& HAnimSegment543 =  HAnimSegment();
HAnimSegment543.X3DNode::setName(CString("r_cuneiform_3"));
HAnimSegment543.setDEF(CString("hanim_r_cuneiform_3"));
Transform& Transform544 =  Transform();
Transform544.setTranslation(new float[]{-0.0928,0.0248,-0.0821});
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
Coordinate549.setPoint(new float[]{-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625}, 6);
LineSet548.setCoord(Coordinate549);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA& ColorRGBA550 =  ColorRGBA();
ColorRGBA550.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet548.addChild(&ColorRGBA550);

Shape547.setGeometry(&LineSet548);

HAnimSegment543.addChild(&Shape547);

HAnimJoint542.addChildren(&HAnimSegment543);

HAnimJoint& HAnimJoint551 =  HAnimJoint();
HAnimJoint551.X3DNode::setName(CString("r_tarsometatarsal_3"));
HAnimJoint551.setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimJoint551.setCenter(new float[]{-0.0944,0.0175,-0.0625});
HAnimSegment& HAnimSegment552 =  HAnimSegment();
HAnimSegment552.X3DNode::setName(CString("r_metatarsal_3"));
HAnimSegment552.setDEF(CString("hanim_r_metatarsal_3"));
Transform& Transform553 =  Transform();
Transform553.setTranslation(new float[]{-0.0944,0.0175,-0.0625});
Transform& Transform554 =  Transform();
//Empty Transform
Shape& Shape555 =  Shape();
Shape555.setUSE(CString("HAnimJointShape"));
Transform554.addChild(&Shape555);

Transform553.addChild(&Transform554);

HAnimSegment552.addChild(&Transform553);

Shape& Shape556 =  Shape();
LineSet& LineSet557 =  LineSet();
LineSet557.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate558 =  Coordinate();
Coordinate558.setPoint(new float[]{-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065}, 6);
LineSet557.setCoord(Coordinate558);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA& ColorRGBA559 =  ColorRGBA();
ColorRGBA559.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet557.addChild(&ColorRGBA559);

Shape556.setGeometry(&LineSet557);

HAnimSegment552.addChild(&Shape556);

HAnimJoint551.addChildren(&HAnimSegment552);

HAnimJoint& HAnimJoint560 =  HAnimJoint();
HAnimJoint560.X3DNode::setName(CString("r_metatarsophalangeal_3"));
HAnimJoint560.setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint560.setCenter(new float[]{-0.0963,0.0065,-0.0065});
HAnimSegment& HAnimSegment561 =  HAnimSegment();
HAnimSegment561.X3DNode::setName(CString("r_tarsal_proximal_phalanx_3"));
HAnimSegment561.setDEF(CString("hanim_r_tarsal_proximal_phalanx_3"));
Transform& Transform562 =  Transform();
Transform562.setTranslation(new float[]{-0.0963,0.0065,-0.0065});
Transform& Transform563 =  Transform();
//Empty Transform
Shape& Shape564 =  Shape();
Shape564.setUSE(CString("HAnimJointShape"));
Transform563.addChild(&Shape564);

Transform562.addChild(&Transform563);

HAnimSegment561.addChild(&Transform562);

Shape& Shape565 =  Shape();
LineSet& LineSet566 =  LineSet();
LineSet566.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate567 =  Coordinate();
Coordinate567.setPoint(new float[]{-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086}, 6);
LineSet566.setCoord(Coordinate567);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA568 =  ColorRGBA();
ColorRGBA568.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet566.addChild(&ColorRGBA568);

Shape565.setGeometry(&LineSet566);

HAnimSegment561.addChild(&Shape565);

HAnimJoint560.addChildren(&HAnimSegment561);

HAnimJoint& HAnimJoint569 =  HAnimJoint();
HAnimJoint569.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint569.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint569.setCenter(new float[]{-0.0987,0.0034,0.0086});
HAnimSegment& HAnimSegment570 =  HAnimSegment();
HAnimSegment570.X3DNode::setName(CString("r_tarsal_middle_phalanx_3"));
HAnimSegment570.setDEF(CString("hanim_r_tarsal_middle_phalanx_3"));
Transform& Transform571 =  Transform();
Transform571.setTranslation(new float[]{-0.0987,0.0034,0.0086});
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
Coordinate576.setPoint(new float[]{-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178}, 6);
LineSet575.setCoord(Coordinate576);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA577 =  ColorRGBA();
ColorRGBA577.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet575.addChild(&ColorRGBA577);

Shape574.setGeometry(&LineSet575);

HAnimSegment570.addChild(&Shape574);

HAnimSite& HAnimSite578 =  HAnimSite();
HAnimSite578.X3DNode::setName(CString("r_tarsal_distal_phalanx_3_tip"));
HAnimSite578.setDEF(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor579 =  TouchSensor();
TouchSensor579.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_3_tip"));
HAnimSite578.addChild(&TouchSensor579);

Shape& Shape580 =  Shape();
Shape580.setUSE(CString("HAnimSiteShape"));
HAnimSite578.addChild(&Shape580);

HAnimSegment570.addChild(&HAnimSite578);

HAnimJoint569.addChildren(&HAnimSegment570);

HAnimJoint& HAnimJoint581 =  HAnimJoint();
HAnimJoint581.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint581.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint581.setCenter(new float[]{-0.1002,0.0013,0.0178});
HAnimJoint569.addChildren(&HAnimJoint581);

HAnimJoint560.addChildren(&HAnimJoint569);

HAnimJoint551.addChildren(&HAnimJoint560);

HAnimJoint542.addChildren(&HAnimJoint551);

HAnimJoint451.addChildren(&HAnimJoint542);

HAnimJoint438.addChildren(&HAnimJoint451);

HAnimJoint& HAnimJoint582 =  HAnimJoint();
HAnimJoint582.X3DNode::setName(CString("r_calcaneocuboid"));
HAnimJoint582.setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint582.setCenter(new float[]{-0.0889,0.0494,-0.1278});
HAnimSegment& HAnimSegment583 =  HAnimSegment();
HAnimSegment583.X3DNode::setName(CString("r_calcaneus"));
HAnimSegment583.setDEF(CString("hanim_r_calcaneus"));
Transform& Transform584 =  Transform();
Transform584.setTranslation(new float[]{-0.0889,0.0494,-0.1278});
Transform& Transform585 =  Transform();
//Empty Transform
Shape& Shape586 =  Shape();
Shape586.setUSE(CString("HAnimJointShape"));
Transform585.addChild(&Shape586);

Transform584.addChild(&Transform585);

HAnimSegment583.addChild(&Transform584);

Shape& Shape587 =  Shape();
LineSet& LineSet588 =  LineSet();
LineSet588.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate589 =  Coordinate();
Coordinate589.setPoint(new float[]{-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998}, 6);
LineSet588.setCoord(Coordinate589);

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA& ColorRGBA590 =  ColorRGBA();
ColorRGBA590.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet588.addChild(&ColorRGBA590);

Shape587.setGeometry(&LineSet588);

HAnimSegment583.addChild(&Shape587);

HAnimJoint582.addChildren(&HAnimSegment583);

HAnimJoint& HAnimJoint591 =  HAnimJoint();
HAnimJoint591.X3DNode::setName(CString("r_transversetarsal"));
HAnimJoint591.setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint591.setCenter(new float[]{-0.1105,0.0267,-0.0998});
HAnimSegment& HAnimSegment592 =  HAnimSegment();
HAnimSegment592.X3DNode::setName(CString("r_cuboid"));
HAnimSegment592.setDEF(CString("hanim_r_cuboid"));
Transform& Transform593 =  Transform();
Transform593.setTranslation(new float[]{-0.1105,0.0267,-0.0998});
Transform& Transform594 =  Transform();
//Empty Transform
Shape& Shape595 =  Shape();
Shape595.setUSE(CString("HAnimJointShape"));
Transform594.addChild(&Shape595);

Transform593.addChild(&Transform594);

HAnimSegment592.addChild(&Transform593);

Shape& Shape596 =  Shape();
LineSet& LineSet597 =  LineSet();
LineSet597.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate598 =  Coordinate();
Coordinate598.setPoint(new float[]{-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634}, 6);
LineSet597.setCoord(Coordinate598);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA& ColorRGBA599 =  ColorRGBA();
ColorRGBA599.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet597.addChild(&ColorRGBA599);

Shape596.setGeometry(&LineSet597);

HAnimSegment592.addChild(&Shape596);

Shape& Shape600 =  Shape();
LineSet& LineSet601 =  LineSet();
LineSet601.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate602 =  Coordinate();
Coordinate602.setPoint(new float[]{-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671}, 6);
LineSet601.setCoord(Coordinate602);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA& ColorRGBA603 =  ColorRGBA();
ColorRGBA603.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet601.addChild(&ColorRGBA603);

Shape600.setGeometry(&LineSet601);

HAnimSegment592.addChild(&Shape600);

HAnimJoint591.addChildren(&HAnimSegment592);

HAnimJoint& HAnimJoint604 =  HAnimJoint();
HAnimJoint604.X3DNode::setName(CString("r_tarsometatarsal_4"));
HAnimJoint604.setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint604.setCenter(new float[]{-0.1063,0.016,-0.0634});
HAnimSegment& HAnimSegment605 =  HAnimSegment();
HAnimSegment605.X3DNode::setName(CString("r_metatarsal_4"));
HAnimSegment605.setDEF(CString("hanim_r_metatarsal_4"));
Transform& Transform606 =  Transform();
Transform606.setTranslation(new float[]{-0.1063,0.016,-0.0634});
Transform& Transform607 =  Transform();
//Empty Transform
Shape& Shape608 =  Shape();
Shape608.setUSE(CString("HAnimJointShape"));
Transform607.addChild(&Shape608);

Transform606.addChild(&Transform607);

HAnimSegment605.addChild(&Transform606);

Shape& Shape609 =  Shape();
LineSet& LineSet610 =  LineSet();
LineSet610.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate611 =  Coordinate();
Coordinate611.setPoint(new float[]{-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107}, 6);
LineSet610.setCoord(Coordinate611);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA& ColorRGBA612 =  ColorRGBA();
ColorRGBA612.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet610.addChild(&ColorRGBA612);

Shape609.setGeometry(&LineSet610);

HAnimSegment605.addChild(&Shape609);

HAnimJoint604.addChildren(&HAnimSegment605);

HAnimJoint& HAnimJoint613 =  HAnimJoint();
HAnimJoint613.X3DNode::setName(CString("r_metatarsophalangeal_4"));
HAnimJoint613.setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint613.setCenter(new float[]{-0.1097,0.0058,-0.0107});
HAnimSegment& HAnimSegment614 =  HAnimSegment();
HAnimSegment614.X3DNode::setName(CString("r_tarsal_proximal_phalanx_4"));
HAnimSegment614.setDEF(CString("hanim_r_tarsal_proximal_phalanx_4"));
Transform& Transform615 =  Transform();
Transform615.setTranslation(new float[]{-0.1097,0.0058,-0.0107});
Transform& Transform616 =  Transform();
//Empty Transform
Shape& Shape617 =  Shape();
Shape617.setUSE(CString("HAnimJointShape"));
Transform616.addChild(&Shape617);

Transform615.addChild(&Transform616);

HAnimSegment614.addChild(&Transform615);

Shape& Shape618 =  Shape();
LineSet& LineSet619 =  LineSet();
LineSet619.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate620 =  Coordinate();
Coordinate620.setPoint(new float[]{-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044}, 6);
LineSet619.setCoord(Coordinate620);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA621 =  ColorRGBA();
ColorRGBA621.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet619.addChild(&ColorRGBA621);

Shape618.setGeometry(&LineSet619);

HAnimSegment614.addChild(&Shape618);

HAnimJoint613.addChildren(&HAnimSegment614);

HAnimJoint& HAnimJoint622 =  HAnimJoint();
HAnimJoint622.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint622.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint622.setCenter(new float[]{-0.114,0.0037,0.0044});
HAnimSegment& HAnimSegment623 =  HAnimSegment();
HAnimSegment623.X3DNode::setName(CString("r_tarsal_middle_phalanx_4"));
HAnimSegment623.setDEF(CString("hanim_r_tarsal_middle_phalanx_4"));
Transform& Transform624 =  Transform();
Transform624.setTranslation(new float[]{-0.114,0.0037,0.0044});
Transform& Transform625 =  Transform();
//Empty Transform
Shape& Shape626 =  Shape();
Shape626.setUSE(CString("HAnimJointShape"));
Transform625.addChild(&Shape626);

Transform624.addChild(&Transform625);

HAnimSegment623.addChild(&Transform624);

Shape& Shape627 =  Shape();
LineSet& LineSet628 =  LineSet();
LineSet628.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate629 =  Coordinate();
Coordinate629.setPoint(new float[]{-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118}, 6);
LineSet628.setCoord(Coordinate629);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA630 =  ColorRGBA();
ColorRGBA630.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet628.addChild(&ColorRGBA630);

Shape627.setGeometry(&LineSet628);

HAnimSegment623.addChild(&Shape627);

HAnimSite& HAnimSite631 =  HAnimSite();
HAnimSite631.X3DNode::setName(CString("r_tarsal_distal_phalanx_4_tip"));
HAnimSite631.setDEF(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor632 =  TouchSensor();
TouchSensor632.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_4_tip"));
HAnimSite631.addChild(&TouchSensor632);

Shape& Shape633 =  Shape();
Shape633.setUSE(CString("HAnimSiteShape"));
HAnimSite631.addChild(&Shape633);

HAnimSegment623.addChild(&HAnimSite631);

HAnimJoint622.addChildren(&HAnimSegment623);

HAnimJoint& HAnimJoint634 =  HAnimJoint();
HAnimJoint634.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint634.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint634.setCenter(new float[]{-0.1155,0.0008,0.0118});
HAnimJoint622.addChildren(&HAnimJoint634);

HAnimJoint613.addChildren(&HAnimJoint622);

HAnimJoint604.addChildren(&HAnimJoint613);

HAnimJoint591.addChildren(&HAnimJoint604);

HAnimJoint& HAnimJoint635 =  HAnimJoint();
HAnimJoint635.X3DNode::setName(CString("r_tarsometatarsal_5"));
HAnimJoint635.setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint635.setCenter(new float[]{-0.1206,0.0124,-0.0671});
HAnimSegment& HAnimSegment636 =  HAnimSegment();
HAnimSegment636.X3DNode::setName(CString("r_metatarsal_5"));
HAnimSegment636.setDEF(CString("hanim_r_metatarsal_5"));
Transform& Transform637 =  Transform();
Transform637.setTranslation(new float[]{-0.1206,0.0124,-0.0671});
Transform& Transform638 =  Transform();
//Empty Transform
Shape& Shape639 =  Shape();
Shape639.setUSE(CString("HAnimJointShape"));
Transform638.addChild(&Shape639);

Transform637.addChild(&Transform638);

HAnimSegment636.addChild(&Transform637);

Shape& Shape640 =  Shape();
LineSet& LineSet641 =  LineSet();
LineSet641.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate642 =  Coordinate();
Coordinate642.setPoint(new float[]{-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153}, 6);
LineSet641.setCoord(Coordinate642);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA& ColorRGBA643 =  ColorRGBA();
ColorRGBA643.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet641.addChild(&ColorRGBA643);

Shape640.setGeometry(&LineSet641);

HAnimSegment636.addChild(&Shape640);

HAnimSite& HAnimSite644 =  HAnimSite();
HAnimSite644.X3DNode::setName(CString("r_metatarsal_phalanx_5"));
HAnimSite644.setDEF(CString("hanim_r_metatarsal_phalanx_5"));
TouchSensor& TouchSensor645 =  TouchSensor();
TouchSensor645.setDescription(CString("HAnimSite r_metatarsal_phalanx_5"));
HAnimSite644.addChild(&TouchSensor645);

Shape& Shape646 =  Shape();
Shape646.setUSE(CString("HAnimSiteShape"));
HAnimSite644.addChild(&Shape646);

HAnimSegment636.addChild(&HAnimSite644);

HAnimJoint635.addChildren(&HAnimSegment636);

HAnimJoint& HAnimJoint647 =  HAnimJoint();
HAnimJoint647.X3DNode::setName(CString("r_metatarsophalangeal_5"));
HAnimJoint647.setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint647.setCenter(new float[]{-0.1239,0.0051,-0.0153});
HAnimSegment& HAnimSegment648 =  HAnimSegment();
HAnimSegment648.X3DNode::setName(CString("r_tarsal_proximal_phalanx_5"));
HAnimSegment648.setDEF(CString("hanim_r_tarsal_proximal_phalanx_5"));
Transform& Transform649 =  Transform();
Transform649.setTranslation(new float[]{-0.1239,0.0051,-0.0153});
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
Coordinate654.setPoint(new float[]{-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077}, 6);
LineSet653.setCoord(Coordinate654);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA655 =  ColorRGBA();
ColorRGBA655.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet653.addChild(&ColorRGBA655);

Shape652.setGeometry(&LineSet653);

HAnimSegment648.addChild(&Shape652);

HAnimJoint647.addChildren(&HAnimSegment648);

HAnimJoint& HAnimJoint656 =  HAnimJoint();
HAnimJoint656.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint656.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint656.setCenter(new float[]{-0.1262,0.0023,-0.0077});
HAnimSegment& HAnimSegment657 =  HAnimSegment();
HAnimSegment657.X3DNode::setName(CString("r_tarsal_middle_phalanx_5"));
HAnimSegment657.setDEF(CString("hanim_r_tarsal_middle_phalanx_5"));
Transform& Transform658 =  Transform();
Transform658.setTranslation(new float[]{-0.1262,0.0023,-0.0077});
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
Coordinate663.setPoint(new float[]{-0.1262,0.0023,-0.0077,-0.1271,0,0}, 6);
LineSet662.setCoord(Coordinate663);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA664 =  ColorRGBA();
ColorRGBA664.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet662.addChild(&ColorRGBA664);

Shape661.setGeometry(&LineSet662);

HAnimSegment657.addChild(&Shape661);

HAnimSite& HAnimSite665 =  HAnimSite();
HAnimSite665.X3DNode::setName(CString("r_tarsal_distal_phalanx_5_tip"));
HAnimSite665.setDEF(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor666 =  TouchSensor();
TouchSensor666.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_5_tip"));
HAnimSite665.addChild(&TouchSensor666);

Shape& Shape667 =  Shape();
Shape667.setUSE(CString("HAnimSiteShape"));
HAnimSite665.addChild(&Shape667);

HAnimSegment657.addChild(&HAnimSite665);

HAnimJoint656.addChildren(&HAnimSegment657);

HAnimJoint& HAnimJoint668 =  HAnimJoint();
HAnimJoint668.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint668.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimJoint668.setCenter(new float[]{-0.1271,0,0});
HAnimJoint656.addChildren(&HAnimJoint668);

HAnimJoint647.addChildren(&HAnimJoint656);

HAnimJoint635.addChildren(&HAnimJoint647);

HAnimJoint591.addChildren(&HAnimJoint635);

HAnimJoint582.addChildren(&HAnimJoint591);

HAnimJoint438.addChildren(&HAnimJoint582);

HAnimJoint423.addChildren(&HAnimJoint438);

HAnimJoint405.addChildren(&HAnimJoint423);

HAnimJoint104.addChildren(&HAnimJoint405);

HAnimJoint52.addChildren(&HAnimJoint104);

HAnimJoint& HAnimJoint669 =  HAnimJoint();
HAnimJoint669.X3DNode::setName(CString("vl5"));
HAnimJoint669.setDEF(CString("hanim_vl5"));
HAnimJoint669.setCenter(new float[]{0.0028,1.0568,-0.0776});
HAnimSegment& HAnimSegment670 =  HAnimSegment();
HAnimSegment670.X3DNode::setName(CString("l5"));
HAnimSegment670.setDEF(CString("hanim_l5"));
Transform& Transform671 =  Transform();
Transform671.setTranslation(new float[]{0.0028,1.0568,-0.0776});
Transform& Transform672 =  Transform();
//Empty Transform
Shape& Shape673 =  Shape();
Shape673.setUSE(CString("HAnimJointShape"));
Transform672.addChild(&Shape673);

Transform671.addChild(&Transform672);

HAnimSegment670.addChild(&Transform671);

Shape& Shape674 =  Shape();
LineSet& LineSet675 =  LineSet();
LineSet675.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate676 =  Coordinate();
Coordinate676.setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet675.setCoord(Coordinate676);

//from vl5 to vl4 vertices 2
ColorRGBA& ColorRGBA677 =  ColorRGBA();
ColorRGBA677.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet675.addChild(&ColorRGBA677);

Shape674.setGeometry(&LineSet675);

HAnimSegment670.addChild(&Shape674);

HAnimJoint669.addChildren(&HAnimSegment670);

HAnimJoint& HAnimJoint678 =  HAnimJoint();
HAnimJoint678.X3DNode::setName(CString("vl4"));
HAnimJoint678.setDEF(CString("hanim_vl4"));
HAnimJoint678.setCenter(new float[]{0.0035,1.0925,-0.0787});
HAnimSegment& HAnimSegment679 =  HAnimSegment();
HAnimSegment679.X3DNode::setName(CString("l4"));
HAnimSegment679.setDEF(CString("hanim_l4"));
Transform& Transform680 =  Transform();
Transform680.setTranslation(new float[]{0.0035,1.0925,-0.0787});
Transform& Transform681 =  Transform();
//Empty Transform
Shape& Shape682 =  Shape();
Shape682.setUSE(CString("HAnimJointShape"));
Transform681.addChild(&Shape682);

Transform680.addChild(&Transform681);

HAnimSegment679.addChild(&Transform680);

Shape& Shape683 =  Shape();
LineSet& LineSet684 =  LineSet();
LineSet684.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate685 =  Coordinate();
Coordinate685.setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet684.setCoord(Coordinate685);

//from vl4 to vl3 vertices 2
ColorRGBA& ColorRGBA686 =  ColorRGBA();
ColorRGBA686.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet684.addChild(&ColorRGBA686);

Shape683.setGeometry(&LineSet684);

HAnimSegment679.addChild(&Shape683);

HAnimJoint678.addChildren(&HAnimSegment679);

HAnimJoint& HAnimJoint687 =  HAnimJoint();
HAnimJoint687.X3DNode::setName(CString("vl3"));
HAnimJoint687.setDEF(CString("hanim_vl3"));
HAnimJoint687.setCenter(new float[]{0.0041,1.1276,-0.0796});
HAnimSegment& HAnimSegment688 =  HAnimSegment();
HAnimSegment688.X3DNode::setName(CString("l3"));
HAnimSegment688.setDEF(CString("hanim_l3"));
Transform& Transform689 =  Transform();
Transform689.setTranslation(new float[]{0.0041,1.1276,-0.0796});
Transform& Transform690 =  Transform();
//Empty Transform
Shape& Shape691 =  Shape();
Shape691.setUSE(CString("HAnimJointShape"));
Transform690.addChild(&Shape691);

Transform689.addChild(&Transform690);

HAnimSegment688.addChild(&Transform689);

Shape& Shape692 =  Shape();
LineSet& LineSet693 =  LineSet();
LineSet693.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate694 =  Coordinate();
Coordinate694.setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet693.setCoord(Coordinate694);

//from vl3 to vl2 vertices 2
ColorRGBA& ColorRGBA695 =  ColorRGBA();
ColorRGBA695.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet693.addChild(&ColorRGBA695);

Shape692.setGeometry(&LineSet693);

HAnimSegment688.addChild(&Shape692);

HAnimSite& HAnimSite696 =  HAnimSite();
HAnimSite696.X3DNode::setName(CString("l_rib10"));
HAnimSite696.setDEF(CString("hanim_l_rib10"));
HAnimSite696.setTranslation(new float[]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor697 =  TouchSensor();
TouchSensor697.setDescription(CString("HAnimSite l_rib10"));
HAnimSite696.addChild(&TouchSensor697);

Shape& Shape698 =  Shape();
Shape698.setUSE(CString("HAnimSiteShape"));
HAnimSite696.addChild(&Shape698);

HAnimSegment688.addChild(&HAnimSite696);

HAnimSite& HAnimSite699 =  HAnimSite();
HAnimSite699.X3DNode::setName(CString("r_rib10"));
HAnimSite699.setDEF(CString("hanim_r_rib10"));
HAnimSite699.setTranslation(new float[]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor700 =  TouchSensor();
TouchSensor700.setDescription(CString("HAnimSite r_rib10"));
HAnimSite699.addChild(&TouchSensor700);

Shape& Shape701 =  Shape();
Shape701.setUSE(CString("HAnimSiteShape"));
HAnimSite699.addChild(&Shape701);

HAnimSegment688.addChild(&HAnimSite699);

HAnimSite& HAnimSite702 =  HAnimSite();
HAnimSite702.X3DNode::setName(CString("spine_2_middle_back"));
HAnimSite702.setDEF(CString("hanim_spine_2_middle_back"));
TouchSensor& TouchSensor703 =  TouchSensor();
TouchSensor703.setDescription(CString("HAnimSite spine_2_middle_back"));
HAnimSite702.addChild(&TouchSensor703);

Shape& Shape704 =  Shape();
Shape704.setUSE(CString("HAnimSiteShape"));
HAnimSite702.addChild(&Shape704);

HAnimSegment688.addChild(&HAnimSite702);

HAnimJoint687.addChildren(&HAnimSegment688);

HAnimJoint& HAnimJoint705 =  HAnimJoint();
HAnimJoint705.X3DNode::setName(CString("vl2"));
HAnimJoint705.setDEF(CString("hanim_vl2"));
HAnimJoint705.setCenter(new float[]{0.0045,1.1546,-0.08});
HAnimSegment& HAnimSegment706 =  HAnimSegment();
HAnimSegment706.X3DNode::setName(CString("l2"));
HAnimSegment706.setDEF(CString("hanim_l2"));
Transform& Transform707 =  Transform();
Transform707.setTranslation(new float[]{0.0045,1.1546,-0.08});
Transform& Transform708 =  Transform();
//Empty Transform
Shape& Shape709 =  Shape();
Shape709.setUSE(CString("HAnimJointShape"));
Transform708.addChild(&Shape709);

Transform707.addChild(&Transform708);

HAnimSegment706.addChild(&Transform707);

Shape& Shape710 =  Shape();
LineSet& LineSet711 =  LineSet();
LineSet711.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate712 =  Coordinate();
Coordinate712.setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet711.setCoord(Coordinate712);

//from vl2 to vl1 vertices 2
ColorRGBA& ColorRGBA713 =  ColorRGBA();
ColorRGBA713.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet711.addChild(&ColorRGBA713);

Shape710.setGeometry(&LineSet711);

HAnimSegment706.addChild(&Shape710);

HAnimJoint705.addChildren(&HAnimSegment706);

HAnimJoint& HAnimJoint714 =  HAnimJoint();
HAnimJoint714.X3DNode::setName(CString("vl1"));
HAnimJoint714.setDEF(CString("hanim_vl1"));
HAnimJoint714.setCenter(new float[]{0.0048,1.1912,-0.0805});
HAnimSegment& HAnimSegment715 =  HAnimSegment();
HAnimSegment715.X3DNode::setName(CString("l1"));
HAnimSegment715.setDEF(CString("hanim_l1"));
Transform& Transform716 =  Transform();
Transform716.setTranslation(new float[]{0.0048,1.1912,-0.0805});
Transform& Transform717 =  Transform();
//Empty Transform
Shape& Shape718 =  Shape();
Shape718.setUSE(CString("HAnimJointShape"));
Transform717.addChild(&Shape718);

Transform716.addChild(&Transform717);

HAnimSegment715.addChild(&Transform716);

Shape& Shape719 =  Shape();
LineSet& LineSet720 =  LineSet();
LineSet720.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate721 =  Coordinate();
Coordinate721.setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet720.setCoord(Coordinate721);

//from vl1 to vt12 vertices 2
ColorRGBA& ColorRGBA722 =  ColorRGBA();
ColorRGBA722.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet720.addChild(&ColorRGBA722);

Shape719.setGeometry(&LineSet720);

HAnimSegment715.addChild(&Shape719);

HAnimJoint714.addChildren(&HAnimSegment715);

HAnimJoint& HAnimJoint723 =  HAnimJoint();
HAnimJoint723.X3DNode::setName(CString("vt12"));
HAnimJoint723.setDEF(CString("hanim_vt12"));
HAnimJoint723.setCenter(new float[]{0.0051,1.2278,-0.0808});
HAnimSegment& HAnimSegment724 =  HAnimSegment();
HAnimSegment724.X3DNode::setName(CString("t12"));
HAnimSegment724.setDEF(CString("hanim_t12"));
Transform& Transform725 =  Transform();
Transform725.setTranslation(new float[]{0.0051,1.2278,-0.0808});
Transform& Transform726 =  Transform();
//Empty Transform
Shape& Shape727 =  Shape();
Shape727.setUSE(CString("HAnimJointShape"));
Transform726.addChild(&Shape727);

Transform725.addChild(&Transform726);

HAnimSegment724.addChild(&Transform725);

Shape& Shape728 =  Shape();
LineSet& LineSet729 =  LineSet();
LineSet729.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate730 =  Coordinate();
Coordinate730.setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet729.setCoord(Coordinate730);

//from vt12 to vt11 vertices 2
ColorRGBA& ColorRGBA731 =  ColorRGBA();
ColorRGBA731.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet729.addChild(&ColorRGBA731);

Shape728.setGeometry(&LineSet729);

HAnimSegment724.addChild(&Shape728);

HAnimJoint723.addChildren(&HAnimSegment724);

HAnimJoint& HAnimJoint732 =  HAnimJoint();
HAnimJoint732.X3DNode::setName(CString("vt11"));
HAnimJoint732.setDEF(CString("hanim_vt11"));
HAnimJoint732.setCenter(new float[]{0.0053,1.2679,-0.081});
HAnimSegment& HAnimSegment733 =  HAnimSegment();
HAnimSegment733.X3DNode::setName(CString("t11"));
HAnimSegment733.setDEF(CString("hanim_t11"));
Transform& Transform734 =  Transform();
Transform734.setTranslation(new float[]{0.0053,1.2679,-0.081});
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
Coordinate739.setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet738.setCoord(Coordinate739);

//from vt11 to vt10 vertices 2
ColorRGBA& ColorRGBA740 =  ColorRGBA();
ColorRGBA740.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet738.addChild(&ColorRGBA740);

Shape737.setGeometry(&LineSet738);

HAnimSegment733.addChild(&Shape737);

HAnimSite& HAnimSite741 =  HAnimSite();
HAnimSite741.X3DNode::setName(CString("substernale"));
HAnimSite741.setDEF(CString("hanim_substernale"));
HAnimSite741.setTranslation(new float[]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor742 =  TouchSensor();
TouchSensor742.setDescription(CString("HAnimSite substernale"));
HAnimSite741.addChild(&TouchSensor742);

Shape& Shape743 =  Shape();
Shape743.setUSE(CString("HAnimSiteShape"));
HAnimSite741.addChild(&Shape743);

HAnimSegment733.addChild(&HAnimSite741);

HAnimJoint732.addChildren(&HAnimSegment733);

HAnimJoint& HAnimJoint744 =  HAnimJoint();
HAnimJoint744.X3DNode::setName(CString("vt10"));
HAnimJoint744.setDEF(CString("hanim_vt10"));
HAnimJoint744.setCenter(new float[]{0.0056,1.2848,-0.0822});
HAnimSegment& HAnimSegment745 =  HAnimSegment();
HAnimSegment745.X3DNode::setName(CString("t10"));
HAnimSegment745.setDEF(CString("hanim_t10"));
Transform& Transform746 =  Transform();
Transform746.setTranslation(new float[]{0.0056,1.2848,-0.0822});
Transform& Transform747 =  Transform();
//Empty Transform
Shape& Shape748 =  Shape();
Shape748.setUSE(CString("HAnimJointShape"));
Transform747.addChild(&Shape748);

Transform746.addChild(&Transform747);

HAnimSegment745.addChild(&Transform746);

Shape& Shape749 =  Shape();
LineSet& LineSet750 =  LineSet();
LineSet750.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate751 =  Coordinate();
Coordinate751.setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet750.setCoord(Coordinate751);

//from vt10 to vt9 vertices 2
ColorRGBA& ColorRGBA752 =  ColorRGBA();
ColorRGBA752.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet750.addChild(&ColorRGBA752);

Shape749.setGeometry(&LineSet750);

HAnimSegment745.addChild(&Shape749);

HAnimSite& HAnimSite753 =  HAnimSite();
HAnimSite753.X3DNode::setName(CString("l_thelion"));
HAnimSite753.setDEF(CString("hanim_l_thelion"));
HAnimSite753.setTranslation(new float[]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor754 =  TouchSensor();
TouchSensor754.setDescription(CString("HAnimSite l_thelion"));
HAnimSite753.addChild(&TouchSensor754);

Shape& Shape755 =  Shape();
Shape755.setUSE(CString("HAnimSiteShape"));
HAnimSite753.addChild(&Shape755);

HAnimSegment745.addChild(&HAnimSite753);

HAnimSite& HAnimSite756 =  HAnimSite();
HAnimSite756.X3DNode::setName(CString("r_thelion"));
HAnimSite756.setDEF(CString("hanim_r_thelion"));
HAnimSite756.setTranslation(new float[]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor757 =  TouchSensor();
TouchSensor757.setDescription(CString("HAnimSite r_thelion"));
HAnimSite756.addChild(&TouchSensor757);

Shape& Shape758 =  Shape();
Shape758.setUSE(CString("HAnimSiteShape"));
HAnimSite756.addChild(&Shape758);

HAnimSegment745.addChild(&HAnimSite756);

HAnimJoint744.addChildren(&HAnimSegment745);

HAnimJoint& HAnimJoint759 =  HAnimJoint();
HAnimJoint759.X3DNode::setName(CString("vt9"));
HAnimJoint759.setDEF(CString("hanim_vt9"));
HAnimJoint759.setCenter(new float[]{0.0057,1.3126,-0.0838});
HAnimSegment& HAnimSegment760 =  HAnimSegment();
HAnimSegment760.X3DNode::setName(CString("t9"));
HAnimSegment760.setDEF(CString("hanim_t9"));
Transform& Transform761 =  Transform();
Transform761.setTranslation(new float[]{0.0057,1.3126,-0.0838});
Transform& Transform762 =  Transform();
//Empty Transform
Shape& Shape763 =  Shape();
Shape763.setUSE(CString("HAnimJointShape"));
Transform762.addChild(&Shape763);

Transform761.addChild(&Transform762);

HAnimSegment760.addChild(&Transform761);

Shape& Shape764 =  Shape();
LineSet& LineSet765 =  LineSet();
LineSet765.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate766 =  Coordinate();
Coordinate766.setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet765.setCoord(Coordinate766);

//from vt9 to vt8 vertices 2
ColorRGBA& ColorRGBA767 =  ColorRGBA();
ColorRGBA767.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet765.addChild(&ColorRGBA767);

Shape764.setGeometry(&LineSet765);

HAnimSegment760.addChild(&Shape764);

HAnimJoint759.addChildren(&HAnimSegment760);

HAnimJoint& HAnimJoint768 =  HAnimJoint();
HAnimJoint768.X3DNode::setName(CString("vt8"));
HAnimJoint768.setDEF(CString("hanim_vt8"));
HAnimJoint768.setCenter(new float[]{0.0057,1.3382,-0.0845});
HAnimSegment& HAnimSegment769 =  HAnimSegment();
HAnimSegment769.X3DNode::setName(CString("t8"));
HAnimSegment769.setDEF(CString("hanim_t8"));
Transform& Transform770 =  Transform();
Transform770.setTranslation(new float[]{0.0057,1.3382,-0.0845});
Transform& Transform771 =  Transform();
//Empty Transform
Shape& Shape772 =  Shape();
Shape772.setUSE(CString("HAnimJointShape"));
Transform771.addChild(&Shape772);

Transform770.addChild(&Transform771);

HAnimSegment769.addChild(&Transform770);

Shape& Shape773 =  Shape();
LineSet& LineSet774 =  LineSet();
LineSet774.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate775 =  Coordinate();
Coordinate775.setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet774.setCoord(Coordinate775);

//from vt8 to vt7 vertices 2
ColorRGBA& ColorRGBA776 =  ColorRGBA();
ColorRGBA776.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet774.addChild(&ColorRGBA776);

Shape773.setGeometry(&LineSet774);

HAnimSegment769.addChild(&Shape773);

HAnimJoint768.addChildren(&HAnimSegment769);

HAnimJoint& HAnimJoint777 =  HAnimJoint();
HAnimJoint777.X3DNode::setName(CString("vt7"));
HAnimJoint777.setDEF(CString("hanim_vt7"));
HAnimJoint777.setCenter(new float[]{0.0058,1.3625,-0.0833});
HAnimSegment& HAnimSegment778 =  HAnimSegment();
HAnimSegment778.X3DNode::setName(CString("t7"));
HAnimSegment778.setDEF(CString("hanim_t7"));
Transform& Transform779 =  Transform();
Transform779.setTranslation(new float[]{0.0058,1.3625,-0.0833});
Transform& Transform780 =  Transform();
//Empty Transform
Shape& Shape781 =  Shape();
Shape781.setUSE(CString("HAnimJointShape"));
Transform780.addChild(&Shape781);

Transform779.addChild(&Transform780);

HAnimSegment778.addChild(&Transform779);

Shape& Shape782 =  Shape();
LineSet& LineSet783 =  LineSet();
LineSet783.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate784 =  Coordinate();
Coordinate784.setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet783.setCoord(Coordinate784);

//from vt7 to vt6 vertices 2
ColorRGBA& ColorRGBA785 =  ColorRGBA();
ColorRGBA785.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet783.addChild(&ColorRGBA785);

Shape782.setGeometry(&LineSet783);

HAnimSegment778.addChild(&Shape782);

HAnimSite& HAnimSite786 =  HAnimSite();
HAnimSite786.X3DNode::setName(CString("l_chest_midsagittal_plane"));
HAnimSite786.setDEF(CString("hanim_l_chest_midsagittal_plane"));
TouchSensor& TouchSensor787 =  TouchSensor();
TouchSensor787.setDescription(CString("HAnimSite l_chest_midsagittal_plane"));
HAnimSite786.addChild(&TouchSensor787);

Shape& Shape788 =  Shape();
Shape788.setUSE(CString("HAnimSiteShape"));
HAnimSite786.addChild(&Shape788);

HAnimSegment778.addChild(&HAnimSite786);

HAnimSite& HAnimSite789 =  HAnimSite();
HAnimSite789.X3DNode::setName(CString("mesosternale"));
HAnimSite789.setDEF(CString("hanim_mesosternale"));
TouchSensor& TouchSensor790 =  TouchSensor();
TouchSensor790.setDescription(CString("HAnimSite mesosternale"));
HAnimSite789.addChild(&TouchSensor790);

Shape& Shape791 =  Shape();
Shape791.setUSE(CString("HAnimSiteShape"));
HAnimSite789.addChild(&Shape791);

HAnimSegment778.addChild(&HAnimSite789);

HAnimSite& HAnimSite792 =  HAnimSite();
HAnimSite792.X3DNode::setName(CString("r_chest_midsagittal_plane"));
HAnimSite792.setDEF(CString("hanim_r_chest_midsagittal_plane"));
TouchSensor& TouchSensor793 =  TouchSensor();
TouchSensor793.setDescription(CString("HAnimSite r_chest_midsagittal_plane"));
HAnimSite792.addChild(&TouchSensor793);

Shape& Shape794 =  Shape();
Shape794.setUSE(CString("HAnimSiteShape"));
HAnimSite792.addChild(&Shape794);

HAnimSegment778.addChild(&HAnimSite792);

HAnimSite& HAnimSite795 =  HAnimSite();
HAnimSite795.X3DNode::setName(CString("rear_center_midsagittal_plane"));
HAnimSite795.setDEF(CString("hanim_rear_center_midsagittal_plane"));
TouchSensor& TouchSensor796 =  TouchSensor();
TouchSensor796.setDescription(CString("HAnimSite rear_center_midsagittal_plane"));
HAnimSite795.addChild(&TouchSensor796);

Shape& Shape797 =  Shape();
Shape797.setUSE(CString("HAnimSiteShape"));
HAnimSite795.addChild(&Shape797);

HAnimSegment778.addChild(&HAnimSite795);

HAnimJoint777.addChildren(&HAnimSegment778);

HAnimJoint& HAnimJoint798 =  HAnimJoint();
HAnimJoint798.X3DNode::setName(CString("vt6"));
HAnimJoint798.setDEF(CString("hanim_vt6"));
HAnimJoint798.setCenter(new float[]{0.0059,1.3866,-0.08});
HAnimSegment& HAnimSegment799 =  HAnimSegment();
HAnimSegment799.X3DNode::setName(CString("t6"));
HAnimSegment799.setDEF(CString("hanim_t6"));
Transform& Transform800 =  Transform();
Transform800.setTranslation(new float[]{0.0059,1.3866,-0.08});
Transform& Transform801 =  Transform();
//Empty Transform
Shape& Shape802 =  Shape();
Shape802.setUSE(CString("HAnimJointShape"));
Transform801.addChild(&Shape802);

Transform800.addChild(&Transform801);

HAnimSegment799.addChild(&Transform800);

Shape& Shape803 =  Shape();
LineSet& LineSet804 =  LineSet();
LineSet804.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate805 =  Coordinate();
Coordinate805.setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet804.setCoord(Coordinate805);

//from vt6 to vt5 vertices 2
ColorRGBA& ColorRGBA806 =  ColorRGBA();
ColorRGBA806.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet804.addChild(&ColorRGBA806);

Shape803.setGeometry(&LineSet804);

HAnimSegment799.addChild(&Shape803);

HAnimSite& HAnimSite807 =  HAnimSite();
HAnimSite807.X3DNode::setName(CString("spine_1_middle_back"));
HAnimSite807.setDEF(CString("hanim_spine_1_middle_back"));
TouchSensor& TouchSensor808 =  TouchSensor();
TouchSensor808.setDescription(CString("HAnimSite spine_1_middle_back"));
HAnimSite807.addChild(&TouchSensor808);

Shape& Shape809 =  Shape();
Shape809.setUSE(CString("HAnimSiteShape"));
HAnimSite807.addChild(&Shape809);

HAnimSegment799.addChild(&HAnimSite807);

HAnimJoint798.addChildren(&HAnimSegment799);

HAnimJoint& HAnimJoint810 =  HAnimJoint();
HAnimJoint810.X3DNode::setName(CString("vt5"));
HAnimJoint810.setDEF(CString("hanim_vt5"));
HAnimJoint810.setCenter(new float[]{0.006,1.4102,-0.0745});
HAnimSegment& HAnimSegment811 =  HAnimSegment();
HAnimSegment811.X3DNode::setName(CString("t5"));
HAnimSegment811.setDEF(CString("hanim_t5"));
Transform& Transform812 =  Transform();
Transform812.setTranslation(new float[]{0.006,1.4102,-0.0745});
Transform& Transform813 =  Transform();
//Empty Transform
Shape& Shape814 =  Shape();
Shape814.setUSE(CString("HAnimJointShape"));
Transform813.addChild(&Shape814);

Transform812.addChild(&Transform813);

HAnimSegment811.addChild(&Transform812);

Shape& Shape815 =  Shape();
LineSet& LineSet816 =  LineSet();
LineSet816.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate817 =  Coordinate();
Coordinate817.setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet816.setCoord(Coordinate817);

//from vt5 to vt4 vertices 2
ColorRGBA& ColorRGBA818 =  ColorRGBA();
ColorRGBA818.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet816.addChild(&ColorRGBA818);

Shape815.setGeometry(&LineSet816);

HAnimSegment811.addChild(&Shape815);

HAnimJoint810.addChildren(&HAnimSegment811);

HAnimJoint& HAnimJoint819 =  HAnimJoint();
HAnimJoint819.X3DNode::setName(CString("vt4"));
HAnimJoint819.setDEF(CString("hanim_vt4"));
HAnimJoint819.setCenter(new float[]{0.0061,1.432,-0.0675});
HAnimSegment& HAnimSegment820 =  HAnimSegment();
HAnimSegment820.X3DNode::setName(CString("t4"));
HAnimSegment820.setDEF(CString("hanim_t4"));
Transform& Transform821 =  Transform();
Transform821.setTranslation(new float[]{0.0061,1.432,-0.0675});
Transform& Transform822 =  Transform();
//Empty Transform
Shape& Shape823 =  Shape();
Shape823.setUSE(CString("HAnimJointShape"));
Transform822.addChild(&Shape823);

Transform821.addChild(&Transform822);

HAnimSegment820.addChild(&Transform821);

Shape& Shape824 =  Shape();
LineSet& LineSet825 =  LineSet();
LineSet825.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate826 =  Coordinate();
Coordinate826.setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet825.setCoord(Coordinate826);

//from vt4 to vt3 vertices 2
ColorRGBA& ColorRGBA827 =  ColorRGBA();
ColorRGBA827.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet825.addChild(&ColorRGBA827);

Shape824.setGeometry(&LineSet825);

HAnimSegment820.addChild(&Shape824);

HAnimJoint819.addChildren(&HAnimSegment820);

HAnimJoint& HAnimJoint828 =  HAnimJoint();
HAnimJoint828.X3DNode::setName(CString("vt3"));
HAnimJoint828.setDEF(CString("hanim_vt3"));
HAnimJoint828.setCenter(new float[]{0.0062,1.4583,-0.057});
HAnimSegment& HAnimSegment829 =  HAnimSegment();
HAnimSegment829.X3DNode::setName(CString("t3"));
HAnimSegment829.setDEF(CString("hanim_t3"));
Transform& Transform830 =  Transform();
Transform830.setTranslation(new float[]{0.0062,1.4583,-0.057});
Transform& Transform831 =  Transform();
//Empty Transform
Shape& Shape832 =  Shape();
Shape832.setUSE(CString("HAnimJointShape"));
Transform831.addChild(&Shape832);

Transform830.addChild(&Transform831);

HAnimSegment829.addChild(&Transform830);

Shape& Shape833 =  Shape();
LineSet& LineSet834 =  LineSet();
LineSet834.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate835 =  Coordinate();
Coordinate835.setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet834.setCoord(Coordinate835);

//from vt3 to vt2 vertices 2
ColorRGBA& ColorRGBA836 =  ColorRGBA();
ColorRGBA836.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet834.addChild(&ColorRGBA836);

Shape833.setGeometry(&LineSet834);

HAnimSegment829.addChild(&Shape833);

HAnimJoint828.addChildren(&HAnimSegment829);

HAnimJoint& HAnimJoint837 =  HAnimJoint();
HAnimJoint837.X3DNode::setName(CString("vt2"));
HAnimJoint837.setDEF(CString("hanim_vt2"));
HAnimJoint837.setCenter(new float[]{0.0063,1.4761,-0.0484});
HAnimSegment& HAnimSegment838 =  HAnimSegment();
HAnimSegment838.X3DNode::setName(CString("t2"));
HAnimSegment838.setDEF(CString("hanim_t2"));
Transform& Transform839 =  Transform();
Transform839.setTranslation(new float[]{0.0063,1.4761,-0.0484});
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
Coordinate844.setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet843.setCoord(Coordinate844);

//from vt2 to vt1 vertices 2
ColorRGBA& ColorRGBA845 =  ColorRGBA();
ColorRGBA845.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet843.addChild(&ColorRGBA845);

Shape842.setGeometry(&LineSet843);

HAnimSegment838.addChild(&Shape842);

HAnimSite& HAnimSite846 =  HAnimSite();
HAnimSite846.X3DNode::setName(CString("cervicale"));
HAnimSite846.setDEF(CString("hanim_cervicale"));
HAnimSite846.setTranslation(new float[]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor847 =  TouchSensor();
TouchSensor847.setDescription(CString("HAnimSite cervicale"));
HAnimSite846.addChild(&TouchSensor847);

Shape& Shape848 =  Shape();
Shape848.setUSE(CString("HAnimSiteShape"));
HAnimSite846.addChild(&Shape848);

HAnimSegment838.addChild(&HAnimSite846);

HAnimSite& HAnimSite849 =  HAnimSite();
HAnimSite849.X3DNode::setName(CString("suprasternale"));
HAnimSite849.setDEF(CString("hanim_suprasternale"));
HAnimSite849.setTranslation(new float[]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor850 =  TouchSensor();
TouchSensor850.setDescription(CString("HAnimSite suprasternale"));
HAnimSite849.addChild(&TouchSensor850);

Shape& Shape851 =  Shape();
Shape851.setUSE(CString("HAnimSiteShape"));
HAnimSite849.addChild(&Shape851);

HAnimSegment838.addChild(&HAnimSite849);

HAnimJoint837.addChildren(&HAnimSegment838);

HAnimJoint& HAnimJoint852 =  HAnimJoint();
HAnimJoint852.X3DNode::setName(CString("vt1"));
HAnimJoint852.setDEF(CString("hanim_vt1"));
HAnimJoint852.setCenter(new float[]{0.0065,1.4951,-0.0387});
HAnimSegment& HAnimSegment853 =  HAnimSegment();
HAnimSegment853.X3DNode::setName(CString("t1"));
HAnimSegment853.setDEF(CString("hanim_t1"));
Transform& Transform854 =  Transform();
Transform854.setTranslation(new float[]{0.0065,1.4951,-0.0387});
Transform& Transform855 =  Transform();
//Empty Transform
Shape& Shape856 =  Shape();
Shape856.setUSE(CString("HAnimJointShape"));
Transform855.addChild(&Shape856);

Transform854.addChild(&Transform855);

HAnimSegment853.addChild(&Transform854);

Shape& Shape857 =  Shape();
LineSet& LineSet858 =  LineSet();
LineSet858.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate859 =  Coordinate();
Coordinate859.setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet858.setCoord(Coordinate859);

//from vt1 to vc7 vertices 2
ColorRGBA& ColorRGBA860 =  ColorRGBA();
ColorRGBA860.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet858.addChild(&ColorRGBA860);

Shape857.setGeometry(&LineSet858);

HAnimSegment853.addChild(&Shape857);

HAnimSite& HAnimSite861 =  HAnimSite();
HAnimSite861.X3DNode::setName(CString("l_neck_base"));
HAnimSite861.setDEF(CString("hanim_l_neck_base"));
HAnimSite861.setTranslation(new float[]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor862 =  TouchSensor();
TouchSensor862.setDescription(CString("HAnimSite l_neck_base"));
HAnimSite861.addChild(&TouchSensor862);

Shape& Shape863 =  Shape();
Shape863.setUSE(CString("HAnimSiteShape"));
HAnimSite861.addChild(&Shape863);

HAnimSegment853.addChild(&HAnimSite861);

HAnimSite& HAnimSite864 =  HAnimSite();
HAnimSite864.X3DNode::setName(CString("r_neck_base"));
HAnimSite864.setDEF(CString("hanim_r_neck_base"));
HAnimSite864.setTranslation(new float[]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor865 =  TouchSensor();
TouchSensor865.setDescription(CString("HAnimSite r_neck_base"));
HAnimSite864.addChild(&TouchSensor865);

Shape& Shape866 =  Shape();
Shape866.setUSE(CString("HAnimSiteShape"));
HAnimSite864.addChild(&Shape866);

HAnimSegment853.addChild(&HAnimSite864);

Shape& Shape867 =  Shape();
LineSet& LineSet868 =  LineSet();
LineSet868.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate869 =  Coordinate();
Coordinate869.setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet868.setCoord(Coordinate869);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA& ColorRGBA870 =  ColorRGBA();
ColorRGBA870.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet868.addChild(&ColorRGBA870);

Shape867.setGeometry(&LineSet868);

HAnimSegment853.addChild(&Shape867);

HAnimSite& HAnimSite871 =  HAnimSite();
HAnimSite871.X3DNode::setName(CString("l_acromion"));
HAnimSite871.setDEF(CString("hanim_l_acromion"));
HAnimSite871.setTranslation(new float[]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor872 =  TouchSensor();
TouchSensor872.setDescription(CString("HAnimSite l_acromion"));
HAnimSite871.addChild(&TouchSensor872);

Shape& Shape873 =  Shape();
Shape873.setUSE(CString("HAnimSiteShape"));
HAnimSite871.addChild(&Shape873);

HAnimSegment853.addChild(&HAnimSite871);

HAnimSite& HAnimSite874 =  HAnimSite();
HAnimSite874.X3DNode::setName(CString("l_axilla_distal_pt"));
HAnimSite874.setDEF(CString("hanim_l_axilla_distal_pt"));
HAnimSite874.setTranslation(new float[]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor875 =  TouchSensor();
TouchSensor875.setDescription(CString("HAnimSite l_axilla_distal_pt"));
HAnimSite874.addChild(&TouchSensor875);

Shape& Shape876 =  Shape();
Shape876.setUSE(CString("HAnimSiteShape"));
HAnimSite874.addChild(&Shape876);

HAnimSegment853.addChild(&HAnimSite874);

HAnimSite& HAnimSite877 =  HAnimSite();
HAnimSite877.X3DNode::setName(CString("l_axilla_posterior_folds"));
HAnimSite877.setDEF(CString("hanim_l_axilla_posterior_folds"));
TouchSensor& TouchSensor878 =  TouchSensor();
TouchSensor878.setDescription(CString("HAnimSite l_axilla_posterior_folds"));
HAnimSite877.addChild(&TouchSensor878);

Shape& Shape879 =  Shape();
Shape879.setUSE(CString("HAnimSiteShape"));
HAnimSite877.addChild(&Shape879);

HAnimSegment853.addChild(&HAnimSite877);

HAnimSite& HAnimSite880 =  HAnimSite();
HAnimSite880.X3DNode::setName(CString("l_axilla_proximal"));
HAnimSite880.setDEF(CString("hanim_l_axilla_proximal"));
HAnimSite880.setTranslation(new float[]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor881 =  TouchSensor();
TouchSensor881.setDescription(CString("HAnimSite l_axilla_proximal"));
HAnimSite880.addChild(&TouchSensor881);

Shape& Shape882 =  Shape();
Shape882.setUSE(CString("HAnimSiteShape"));
HAnimSite880.addChild(&Shape882);

HAnimSegment853.addChild(&HAnimSite880);

HAnimSite& HAnimSite883 =  HAnimSite();
HAnimSite883.X3DNode::setName(CString("l_clavicale"));
HAnimSite883.setDEF(CString("hanim_l_clavicale"));
HAnimSite883.setTranslation(new float[]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor884 =  TouchSensor();
TouchSensor884.setDescription(CString("HAnimSite l_clavicale"));
HAnimSite883.addChild(&TouchSensor884);

Shape& Shape885 =  Shape();
Shape885.setUSE(CString("HAnimSiteShape"));
HAnimSite883.addChild(&Shape885);

HAnimSegment853.addChild(&HAnimSite883);

Shape& Shape886 =  Shape();
LineSet& LineSet887 =  LineSet();
LineSet887.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate888 =  Coordinate();
Coordinate888.setPoint(new float[]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
LineSet887.setCoord(Coordinate888);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA& ColorRGBA889 =  ColorRGBA();
ColorRGBA889.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet887.addChild(&ColorRGBA889);

Shape886.setGeometry(&LineSet887);

HAnimSegment853.addChild(&Shape886);

HAnimSite& HAnimSite890 =  HAnimSite();
HAnimSite890.X3DNode::setName(CString("r_acromion"));
HAnimSite890.setDEF(CString("hanim_r_acromion"));
HAnimSite890.setTranslation(new float[]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor891 =  TouchSensor();
TouchSensor891.setDescription(CString("HAnimSite r_acromion"));
HAnimSite890.addChild(&TouchSensor891);

Shape& Shape892 =  Shape();
Shape892.setUSE(CString("HAnimSiteShape"));
HAnimSite890.addChild(&Shape892);

HAnimSegment853.addChild(&HAnimSite890);

HAnimSite& HAnimSite893 =  HAnimSite();
HAnimSite893.X3DNode::setName(CString("r_axilla_distal_pt"));
HAnimSite893.setDEF(CString("hanim_r_axilla_distal_pt"));
HAnimSite893.setTranslation(new float[]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor894 =  TouchSensor();
TouchSensor894.setDescription(CString("HAnimSite r_axilla_distal_pt"));
HAnimSite893.addChild(&TouchSensor894);

Shape& Shape895 =  Shape();
Shape895.setUSE(CString("HAnimSiteShape"));
HAnimSite893.addChild(&Shape895);

HAnimSegment853.addChild(&HAnimSite893);

HAnimSite& HAnimSite896 =  HAnimSite();
HAnimSite896.X3DNode::setName(CString("r_axilla_posterior_folds"));
HAnimSite896.setDEF(CString("hanim_r_axilla_posterior_folds"));
TouchSensor& TouchSensor897 =  TouchSensor();
TouchSensor897.setDescription(CString("HAnimSite r_axilla_posterior_folds"));
HAnimSite896.addChild(&TouchSensor897);

Shape& Shape898 =  Shape();
Shape898.setUSE(CString("HAnimSiteShape"));
HAnimSite896.addChild(&Shape898);

HAnimSegment853.addChild(&HAnimSite896);

HAnimSite& HAnimSite899 =  HAnimSite();
HAnimSite899.X3DNode::setName(CString("r_axilla_proximal"));
HAnimSite899.setDEF(CString("hanim_r_axilla_proximal"));
HAnimSite899.setTranslation(new float[]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor900 =  TouchSensor();
TouchSensor900.setDescription(CString("HAnimSite r_axilla_proximal"));
HAnimSite899.addChild(&TouchSensor900);

Shape& Shape901 =  Shape();
Shape901.setUSE(CString("HAnimSiteShape"));
HAnimSite899.addChild(&Shape901);

HAnimSegment853.addChild(&HAnimSite899);

HAnimSite& HAnimSite902 =  HAnimSite();
HAnimSite902.X3DNode::setName(CString("r_clavicale"));
HAnimSite902.setDEF(CString("hanim_r_clavicale"));
HAnimSite902.setTranslation(new float[]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor903 =  TouchSensor();
TouchSensor903.setDescription(CString("HAnimSite r_clavicale"));
HAnimSite902.addChild(&TouchSensor903);

Shape& Shape904 =  Shape();
Shape904.setUSE(CString("HAnimSiteShape"));
HAnimSite902.addChild(&Shape904);

HAnimSegment853.addChild(&HAnimSite902);

HAnimJoint852.addChildren(&HAnimSegment853);

HAnimJoint& HAnimJoint905 =  HAnimJoint();
HAnimJoint905.X3DNode::setName(CString("vc7"));
HAnimJoint905.setDEF(CString("hanim_vc7"));
HAnimJoint905.setCenter(new float[]{0.0066,1.5132,-0.0301});
HAnimSegment& HAnimSegment906 =  HAnimSegment();
HAnimSegment906.X3DNode::setName(CString("c7"));
HAnimSegment906.setDEF(CString("hanim_c7"));
Transform& Transform907 =  Transform();
Transform907.setTranslation(new float[]{0.0066,1.5132,-0.0301});
Transform& Transform908 =  Transform();
//Empty Transform
Shape& Shape909 =  Shape();
Shape909.setUSE(CString("HAnimJointShape"));
Transform908.addChild(&Shape909);

Transform907.addChild(&Transform908);

HAnimSegment906.addChild(&Transform907);

Shape& Shape910 =  Shape();
LineSet& LineSet911 =  LineSet();
LineSet911.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate912 =  Coordinate();
Coordinate912.setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet911.setCoord(Coordinate912);

//from vc7 to vc6 vertices 2
ColorRGBA& ColorRGBA913 =  ColorRGBA();
ColorRGBA913.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet911.addChild(&ColorRGBA913);

Shape910.setGeometry(&LineSet911);

HAnimSegment906.addChild(&Shape910);

HAnimJoint905.addChildren(&HAnimSegment906);

HAnimJoint& HAnimJoint914 =  HAnimJoint();
HAnimJoint914.X3DNode::setName(CString("vc6"));
HAnimJoint914.setDEF(CString("hanim_vc6"));
HAnimJoint914.setCenter(new float[]{0.0066,1.5357,-0.0143});
HAnimSegment& HAnimSegment915 =  HAnimSegment();
HAnimSegment915.X3DNode::setName(CString("c6"));
HAnimSegment915.setDEF(CString("hanim_c6"));
Transform& Transform916 =  Transform();
Transform916.setTranslation(new float[]{0.0066,1.5357,-0.0143});
Transform& Transform917 =  Transform();
//Empty Transform
Shape& Shape918 =  Shape();
Shape918.setUSE(CString("HAnimJointShape"));
Transform917.addChild(&Shape918);

Transform916.addChild(&Transform917);

HAnimSegment915.addChild(&Transform916);

Shape& Shape919 =  Shape();
LineSet& LineSet920 =  LineSet();
LineSet920.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate921 =  Coordinate();
Coordinate921.setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet920.setCoord(Coordinate921);

//from vc6 to vc5 vertices 2
ColorRGBA& ColorRGBA922 =  ColorRGBA();
ColorRGBA922.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet920.addChild(&ColorRGBA922);

Shape919.setGeometry(&LineSet920);

HAnimSegment915.addChild(&Shape919);

HAnimJoint914.addChildren(&HAnimSegment915);

HAnimJoint& HAnimJoint923 =  HAnimJoint();
HAnimJoint923.X3DNode::setName(CString("vc5"));
HAnimJoint923.setDEF(CString("hanim_vc5"));
HAnimJoint923.setCenter(new float[]{0.0066,1.552,-0.0082});
HAnimSegment& HAnimSegment924 =  HAnimSegment();
HAnimSegment924.X3DNode::setName(CString("c5"));
HAnimSegment924.setDEF(CString("hanim_c5"));
Transform& Transform925 =  Transform();
Transform925.setTranslation(new float[]{0.0066,1.552,-0.0082});
Transform& Transform926 =  Transform();
//Empty Transform
Shape& Shape927 =  Shape();
Shape927.setUSE(CString("HAnimJointShape"));
Transform926.addChild(&Shape927);

Transform925.addChild(&Transform926);

HAnimSegment924.addChild(&Transform925);

Shape& Shape928 =  Shape();
LineSet& LineSet929 =  LineSet();
LineSet929.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate930 =  Coordinate();
Coordinate930.setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet929.setCoord(Coordinate930);

//from vc5 to vc4 vertices 2
ColorRGBA& ColorRGBA931 =  ColorRGBA();
ColorRGBA931.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet929.addChild(&ColorRGBA931);

Shape928.setGeometry(&LineSet929);

HAnimSegment924.addChild(&Shape928);

HAnimJoint923.addChildren(&HAnimSegment924);

HAnimJoint& HAnimJoint932 =  HAnimJoint();
HAnimJoint932.X3DNode::setName(CString("vc4"));
HAnimJoint932.setDEF(CString("hanim_vc4"));
HAnimJoint932.setCenter(new float[]{0.0066,1.5662,-0.0084});
HAnimSegment& HAnimSegment933 =  HAnimSegment();
HAnimSegment933.X3DNode::setName(CString("c4"));
HAnimSegment933.setDEF(CString("hanim_c4"));
Transform& Transform934 =  Transform();
Transform934.setTranslation(new float[]{0.0066,1.5662,-0.0084});
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
Coordinate939.setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet938.setCoord(Coordinate939);

//from vc4 to vc3 vertices 2
ColorRGBA& ColorRGBA940 =  ColorRGBA();
ColorRGBA940.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet938.addChild(&ColorRGBA940);

Shape937.setGeometry(&LineSet938);

HAnimSegment933.addChild(&Shape937);

HAnimJoint932.addChildren(&HAnimSegment933);

HAnimJoint& HAnimJoint941 =  HAnimJoint();
HAnimJoint941.X3DNode::setName(CString("vc3"));
HAnimJoint941.setDEF(CString("hanim_vc3"));
HAnimJoint941.setCenter(new float[]{0.0066,1.58,-0.0103});
HAnimSegment& HAnimSegment942 =  HAnimSegment();
HAnimSegment942.X3DNode::setName(CString("c3"));
HAnimSegment942.setDEF(CString("hanim_c3"));
Transform& Transform943 =  Transform();
Transform943.setTranslation(new float[]{0.0066,1.58,-0.0103});
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
Coordinate948.setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet947.setCoord(Coordinate948);

//from vc3 to vc2 vertices 2
ColorRGBA& ColorRGBA949 =  ColorRGBA();
ColorRGBA949.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet947.addChild(&ColorRGBA949);

Shape946.setGeometry(&LineSet947);

HAnimSegment942.addChild(&Shape946);

HAnimSite& HAnimSite950 =  HAnimSite();
HAnimSite950.X3DNode::setName(CString("adams_apple"));
HAnimSite950.setDEF(CString("hanim_adams_apple"));
TouchSensor& TouchSensor951 =  TouchSensor();
TouchSensor951.setDescription(CString("HAnimSite adams_apple"));
HAnimSite950.addChild(&TouchSensor951);

Shape& Shape952 =  Shape();
Shape952.setUSE(CString("HAnimSiteShape"));
HAnimSite950.addChild(&Shape952);

HAnimSegment942.addChild(&HAnimSite950);

HAnimJoint941.addChildren(&HAnimSegment942);

HAnimJoint& HAnimJoint953 =  HAnimJoint();
HAnimJoint953.X3DNode::setName(CString("vc2"));
HAnimJoint953.setDEF(CString("hanim_vc2"));
HAnimJoint953.setCenter(new float[]{0.0066,1.5928,-0.0103});
HAnimSegment& HAnimSegment954 =  HAnimSegment();
HAnimSegment954.X3DNode::setName(CString("c2"));
HAnimSegment954.setDEF(CString("hanim_c2"));
Transform& Transform955 =  Transform();
Transform955.setTranslation(new float[]{0.0066,1.5928,-0.0103});
Transform& Transform956 =  Transform();
//Empty Transform
Shape& Shape957 =  Shape();
Shape957.setUSE(CString("HAnimJointShape"));
Transform956.addChild(&Shape957);

Transform955.addChild(&Transform956);

HAnimSegment954.addChild(&Transform955);

Shape& Shape958 =  Shape();
LineSet& LineSet959 =  LineSet();
LineSet959.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate960 =  Coordinate();
Coordinate960.setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet959.setCoord(Coordinate960);

//from vc2 to vc1 vertices 2
ColorRGBA& ColorRGBA961 =  ColorRGBA();
ColorRGBA961.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet959.addChild(&ColorRGBA961);

Shape958.setGeometry(&LineSet959);

HAnimSegment954.addChild(&Shape958);

HAnimJoint953.addChildren(&HAnimSegment954);

HAnimJoint& HAnimJoint962 =  HAnimJoint();
HAnimJoint962.X3DNode::setName(CString("vc1"));
HAnimJoint962.setDEF(CString("hanim_vc1"));
HAnimJoint962.setCenter(new float[]{0.0066,1.6144,-0.0034});
HAnimSegment& HAnimSegment963 =  HAnimSegment();
HAnimSegment963.X3DNode::setName(CString("c1"));
HAnimSegment963.setDEF(CString("hanim_c1"));
Transform& Transform964 =  Transform();
Transform964.setTranslation(new float[]{0.0066,1.6144,-0.0034});
Transform& Transform965 =  Transform();
//Empty Transform
Shape& Shape966 =  Shape();
Shape966.setUSE(CString("HAnimJointShape"));
Transform965.addChild(&Shape966);

Transform964.addChild(&Transform965);

HAnimSegment963.addChild(&Transform964);

Shape& Shape967 =  Shape();
LineSet& LineSet968 =  LineSet();
LineSet968.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate969 =  Coordinate();
Coordinate969.setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet968.setCoord(Coordinate969);

//from vc1 to skullbase vertices 2
ColorRGBA& ColorRGBA970 =  ColorRGBA();
ColorRGBA970.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet968.addChild(&ColorRGBA970);

Shape967.setGeometry(&LineSet968);

HAnimSegment963.addChild(&Shape967);

HAnimSite& HAnimSite971 =  HAnimSite();
HAnimSite971.X3DNode::setName(CString("glabella"));
HAnimSite971.setDEF(CString("hanim_glabella"));
TouchSensor& TouchSensor972 =  TouchSensor();
TouchSensor972.setDescription(CString("HAnimSite glabella"));
HAnimSite971.addChild(&TouchSensor972);

Shape& Shape973 =  Shape();
Shape973.setUSE(CString("HAnimSiteShape"));
HAnimSite971.addChild(&Shape973);

HAnimSegment963.addChild(&HAnimSite971);

HAnimSite& HAnimSite974 =  HAnimSite();
HAnimSite974.X3DNode::setName(CString("l_ectocanthus"));
HAnimSite974.setDEF(CString("hanim_l_ectocanthus"));
TouchSensor& TouchSensor975 =  TouchSensor();
TouchSensor975.setDescription(CString("HAnimSite l_ectocanthus"));
HAnimSite974.addChild(&TouchSensor975);

Shape& Shape976 =  Shape();
Shape976.setUSE(CString("HAnimSiteShape"));
HAnimSite974.addChild(&Shape976);

HAnimSegment963.addChild(&HAnimSite974);

HAnimSite& HAnimSite977 =  HAnimSite();
HAnimSite977.X3DNode::setName(CString("l_infraorbitale"));
HAnimSite977.setDEF(CString("hanim_l_infraorbitale"));
HAnimSite977.setTranslation(new float[]{0.0341,1.6171,0.0752});
TouchSensor& TouchSensor978 =  TouchSensor();
TouchSensor978.setDescription(CString("HAnimSite l_infraorbitale"));
HAnimSite977.addChild(&TouchSensor978);

Shape& Shape979 =  Shape();
Shape979.setUSE(CString("HAnimSiteShape"));
HAnimSite977.addChild(&Shape979);

HAnimSegment963.addChild(&HAnimSite977);

HAnimSite& HAnimSite980 =  HAnimSite();
HAnimSite980.X3DNode::setName(CString("l_tragion"));
HAnimSite980.setDEF(CString("hanim_l_tragion"));
HAnimSite980.setTranslation(new float[]{0.0739,1.6348,0.0282});
TouchSensor& TouchSensor981 =  TouchSensor();
TouchSensor981.setDescription(CString("HAnimSite l_tragion"));
HAnimSite980.addChild(&TouchSensor981);

Shape& Shape982 =  Shape();
Shape982.setUSE(CString("HAnimSiteShape"));
HAnimSite980.addChild(&Shape982);

HAnimSegment963.addChild(&HAnimSite980);

HAnimSite& HAnimSite983 =  HAnimSite();
HAnimSite983.X3DNode::setName(CString("nuchale"));
HAnimSite983.setDEF(CString("hanim_nuchale"));
HAnimSite983.setTranslation(new float[]{0.0039,1.5972,-0.0796});
TouchSensor& TouchSensor984 =  TouchSensor();
TouchSensor984.setDescription(CString("HAnimSite nuchale"));
HAnimSite983.addChild(&TouchSensor984);

Shape& Shape985 =  Shape();
Shape985.setUSE(CString("HAnimSiteShape"));
HAnimSite983.addChild(&Shape985);

HAnimSegment963.addChild(&HAnimSite983);

HAnimSite& HAnimSite986 =  HAnimSite();
HAnimSite986.X3DNode::setName(CString("opisthocranion"));
HAnimSite986.setDEF(CString("hanim_opisthocranion"));
TouchSensor& TouchSensor987 =  TouchSensor();
TouchSensor987.setDescription(CString("HAnimSite opisthocranion"));
HAnimSite986.addChild(&TouchSensor987);

Shape& Shape988 =  Shape();
Shape988.setUSE(CString("HAnimSiteShape"));
HAnimSite986.addChild(&Shape988);

HAnimSegment963.addChild(&HAnimSite986);

HAnimSite& HAnimSite989 =  HAnimSite();
HAnimSite989.X3DNode::setName(CString("r_ectocanthus"));
HAnimSite989.setDEF(CString("hanim_r_ectocanthus"));
TouchSensor& TouchSensor990 =  TouchSensor();
TouchSensor990.setDescription(CString("HAnimSite r_ectocanthus"));
HAnimSite989.addChild(&TouchSensor990);

Shape& Shape991 =  Shape();
Shape991.setUSE(CString("HAnimSiteShape"));
HAnimSite989.addChild(&Shape991);

HAnimSegment963.addChild(&HAnimSite989);

HAnimSite& HAnimSite992 =  HAnimSite();
HAnimSite992.X3DNode::setName(CString("r_infraorbitale"));
HAnimSite992.setDEF(CString("hanim_r_infraorbitale"));
HAnimSite992.setTranslation(new float[]{-0.0237,1.6171,0.0752});
TouchSensor& TouchSensor993 =  TouchSensor();
TouchSensor993.setDescription(CString("HAnimSite r_infraorbitale"));
HAnimSite992.addChild(&TouchSensor993);

Shape& Shape994 =  Shape();
Shape994.setUSE(CString("HAnimSiteShape"));
HAnimSite992.addChild(&Shape994);

HAnimSegment963.addChild(&HAnimSite992);

HAnimSite& HAnimSite995 =  HAnimSite();
HAnimSite995.X3DNode::setName(CString("r_tragion"));
HAnimSite995.setDEF(CString("hanim_r_tragion"));
HAnimSite995.setTranslation(new float[]{-0.0646,1.6347,0.0302});
TouchSensor& TouchSensor996 =  TouchSensor();
TouchSensor996.setDescription(CString("HAnimSite r_tragion"));
HAnimSite995.addChild(&TouchSensor996);

Shape& Shape997 =  Shape();
Shape997.setUSE(CString("HAnimSiteShape"));
HAnimSite995.addChild(&Shape997);

HAnimSegment963.addChild(&HAnimSite995);

HAnimSite& HAnimSite998 =  HAnimSite();
HAnimSite998.X3DNode::setName(CString("sellion"));
HAnimSite998.setDEF(CString("hanim_sellion"));
HAnimSite998.setTranslation(new float[]{0.0058,1.6316,0.0852});
TouchSensor& TouchSensor999 =  TouchSensor();
TouchSensor999.setDescription(CString("HAnimSite sellion"));
HAnimSite998.addChild(&TouchSensor999);

Shape& Shape1000 =  Shape();
Shape1000.setUSE(CString("HAnimSiteShape"));
HAnimSite998.addChild(&Shape1000);

HAnimSegment963.addChild(&HAnimSite998);

HAnimSite& HAnimSite1001 =  HAnimSite();
HAnimSite1001.X3DNode::setName(CString("skull_vertex"));
HAnimSite1001.setDEF(CString("hanim_skull_vertex"));
TouchSensor& TouchSensor1002 =  TouchSensor();
TouchSensor1002.setDescription(CString("HAnimSite skull_vertex"));
HAnimSite1001.addChild(&TouchSensor1002);

Shape& Shape1003 =  Shape();
Shape1003.setUSE(CString("HAnimSiteShape"));
HAnimSite1001.addChild(&Shape1003);

HAnimSegment963.addChild(&HAnimSite1001);

HAnimJoint962.addChildren(&HAnimSegment963);

HAnimJoint& HAnimJoint1004 =  HAnimJoint();
HAnimJoint1004.X3DNode::setName(CString("skullbase"));
HAnimJoint1004.setDEF(CString("hanim_skullbase"));
HAnimJoint1004.setCenter(new float[]{0.0044,1.6209,0.0236});
HAnimSegment& HAnimSegment1005 =  HAnimSegment();
HAnimSegment1005.X3DNode::setName(CString("skull"));
HAnimSegment1005.setDEF(CString("hanim_skull"));
Transform& Transform1006 =  Transform();
Transform1006.setTranslation(new float[]{0.0044,1.6209,0.0236});
Transform& Transform1007 =  Transform();
//Empty Transform
Shape& Shape1008 =  Shape();
Shape1008.setUSE(CString("HAnimJointShape"));
Transform1007.addChild(&Shape1008);

Transform1006.addChild(&Transform1007);

HAnimSegment1005.addChild(&Transform1006);

Shape& Shape1009 =  Shape();
LineSet& LineSet1010 =  LineSet();
LineSet1010.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1011 =  Coordinate();
Coordinate1011.setPoint(new float[]{0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689}, 6);
LineSet1010.setCoord(Coordinate1011);

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA& ColorRGBA1012 =  ColorRGBA();
ColorRGBA1012.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1010.addChild(&ColorRGBA1012);

Shape1009.setGeometry(&LineSet1010);

HAnimSegment1005.addChild(&Shape1009);

Shape& Shape1013 =  Shape();
LineSet& LineSet1014 =  LineSet();
LineSet1014.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1015 =  Coordinate();
Coordinate1015.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689}, 6);
LineSet1014.setCoord(Coordinate1015);

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA& ColorRGBA1016 =  ColorRGBA();
ColorRGBA1016.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1014.addChild(&ColorRGBA1016);

Shape1013.setGeometry(&LineSet1014);

HAnimSegment1005.addChild(&Shape1013);

Shape& Shape1017 =  Shape();
LineSet& LineSet1018 =  LineSet();
LineSet1018.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1019 =  Coordinate();
Coordinate1019.setPoint(new float[]{0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188}, 6);
LineSet1018.setCoord(Coordinate1019);

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA& ColorRGBA1020 =  ColorRGBA();
ColorRGBA1020.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1018.addChild(&ColorRGBA1020);

Shape1017.setGeometry(&LineSet1018);

HAnimSegment1005.addChild(&Shape1017);

Shape& Shape1021 =  Shape();
LineSet& LineSet1022 =  LineSet();
LineSet1022.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1023 =  Coordinate();
Coordinate1023.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188}, 6);
LineSet1022.setCoord(Coordinate1023);

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA& ColorRGBA1024 =  ColorRGBA();
ColorRGBA1024.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1022.addChild(&ColorRGBA1024);

Shape1021.setGeometry(&LineSet1022);

HAnimSegment1005.addChild(&Shape1021);

Shape& Shape1025 =  Shape();
LineSet& LineSet1026 =  LineSet();
LineSet1026.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1027 =  Coordinate();
Coordinate1027.setPoint(new float[]{0.0044,1.6209,0.0236,0.0216,1.4053,0.0051}, 6);
LineSet1026.setCoord(Coordinate1027);

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA1028 =  ColorRGBA();
ColorRGBA1028.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1026.addChild(&ColorRGBA1028);

Shape1025.setGeometry(&LineSet1026);

HAnimSegment1005.addChild(&Shape1025);

Shape& Shape1029 =  Shape();
LineSet& LineSet1030 =  LineSet();
LineSet1030.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1031 =  Coordinate();
Coordinate1031.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051}, 6);
LineSet1030.setCoord(Coordinate1031);

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA1032 =  ColorRGBA();
ColorRGBA1032.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1030.addChild(&ColorRGBA1032);

Shape1029.setGeometry(&LineSet1030);

HAnimSegment1005.addChild(&Shape1029);

Shape& Shape1033 =  Shape();
LineSet& LineSet1034 =  LineSet();
LineSet1034.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1035 =  Coordinate();
Coordinate1035.setPoint(new float[]{0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865}, 6);
LineSet1034.setCoord(Coordinate1035);

//from skullbase to temporomandibular vertices 2
ColorRGBA& ColorRGBA1036 =  ColorRGBA();
ColorRGBA1036.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1034.addChild(&ColorRGBA1036);

Shape1033.setGeometry(&LineSet1034);

HAnimSegment1005.addChild(&Shape1033);

HAnimSite& HAnimSite1037 =  HAnimSite();
HAnimSite1037.X3DNode::setName(CString("l_gonion"));
HAnimSite1037.setDEF(CString("hanim_l_gonion"));
HAnimSite1037.setTranslation(new float[]{0.0631,1.553,0.033});
TouchSensor& TouchSensor1038 =  TouchSensor();
TouchSensor1038.setDescription(CString("HAnimSite l_gonion"));
HAnimSite1037.addChild(&TouchSensor1038);

Shape& Shape1039 =  Shape();
Shape1039.setUSE(CString("HAnimSiteShape"));
HAnimSite1037.addChild(&Shape1039);

HAnimSegment1005.addChild(&HAnimSite1037);

HAnimSite& HAnimSite1040 =  HAnimSite();
HAnimSite1040.X3DNode::setName(CString("menton"));
HAnimSite1040.setDEF(CString("hanim_menton"));
TouchSensor& TouchSensor1041 =  TouchSensor();
TouchSensor1041.setDescription(CString("HAnimSite menton"));
HAnimSite1040.addChild(&TouchSensor1041);

Shape& Shape1042 =  Shape();
Shape1042.setUSE(CString("HAnimSiteShape"));
HAnimSite1040.addChild(&Shape1042);

HAnimSegment1005.addChild(&HAnimSite1040);

HAnimSite& HAnimSite1043 =  HAnimSite();
HAnimSite1043.X3DNode::setName(CString("r_gonion"));
HAnimSite1043.setDEF(CString("hanim_r_gonion"));
HAnimSite1043.setTranslation(new float[]{-0.052,1.5529,0.0347});
TouchSensor& TouchSensor1044 =  TouchSensor();
TouchSensor1044.setDescription(CString("HAnimSite r_gonion"));
HAnimSite1043.addChild(&TouchSensor1044);

Shape& Shape1045 =  Shape();
Shape1045.setUSE(CString("HAnimSiteShape"));
HAnimSite1043.addChild(&Shape1045);

HAnimSegment1005.addChild(&HAnimSite1043);

HAnimSite& HAnimSite1046 =  HAnimSite();
HAnimSite1046.X3DNode::setName(CString("supramenton"));
HAnimSite1046.setDEF(CString("hanim_supramenton"));
HAnimSite1046.setTranslation(new float[]{0.0061,1.541,0.0805});
TouchSensor& TouchSensor1047 =  TouchSensor();
TouchSensor1047.setDescription(CString("HAnimSite supramenton"));
HAnimSite1046.addChild(&TouchSensor1047);

Shape& Shape1048 =  Shape();
Shape1048.setUSE(CString("HAnimSiteShape"));
HAnimSite1046.addChild(&Shape1048);

HAnimSegment1005.addChild(&HAnimSite1046);

HAnimJoint1004.addChildren(&HAnimSegment1005);

HAnimJoint& HAnimJoint1049 =  HAnimJoint();
HAnimJoint1049.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint1049.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint1049.setCenter(new float[]{0.0503,1.4157,-0.0689});
HAnimJoint1004.addChildren(&HAnimJoint1049);

HAnimJoint& HAnimJoint1050 =  HAnimJoint();
HAnimJoint1050.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint1050.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint1050.setCenter(new float[]{-0.0507,1.4157,-0.0689});
HAnimJoint1004.addChildren(&HAnimJoint1050);

HAnimJoint& HAnimJoint1051 =  HAnimJoint();
HAnimJoint1051.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint1051.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint1051.setCenter(new float[]{0.0479,1.3963,-0.0188});
HAnimJoint1004.addChildren(&HAnimJoint1051);

HAnimJoint& HAnimJoint1052 =  HAnimJoint();
HAnimJoint1052.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint1052.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint1052.setCenter(new float[]{-0.0483,1.3963,-0.0188});
HAnimJoint1004.addChildren(&HAnimJoint1052);

HAnimJoint& HAnimJoint1053 =  HAnimJoint();
HAnimJoint1053.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint1053.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint1053.setCenter(new float[]{0.0216,1.4053,0.0051});
HAnimJoint1004.addChildren(&HAnimJoint1053);

HAnimJoint& HAnimJoint1054 =  HAnimJoint();
HAnimJoint1054.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint1054.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint1054.setCenter(new float[]{-0.0219,1.4053,0.0051});
HAnimJoint1004.addChildren(&HAnimJoint1054);

HAnimJoint& HAnimJoint1055 =  HAnimJoint();
HAnimJoint1055.X3DNode::setName(CString("temporomandibular"));
HAnimJoint1055.setDEF(CString("hanim_temporomandibular"));
HAnimJoint1055.setCenter(new float[]{-0.0002,1.3043,-0.0865});
HAnimJoint1004.addChildren(&HAnimJoint1055);

HAnimJoint962.addChildren(&HAnimJoint1004);

HAnimJoint953.addChildren(&HAnimJoint962);

HAnimJoint941.addChildren(&HAnimJoint953);

HAnimJoint932.addChildren(&HAnimJoint941);

HAnimJoint923.addChildren(&HAnimJoint932);

HAnimJoint914.addChildren(&HAnimJoint923);

HAnimJoint905.addChildren(&HAnimJoint914);

HAnimJoint852.addChildren(&HAnimJoint905);

HAnimJoint& HAnimJoint1056 =  HAnimJoint();
HAnimJoint1056.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint1056.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint1056.setCenter(new float[]{0.082,1.4488,-0.0353});
HAnimSegment& HAnimSegment1057 =  HAnimSegment();
HAnimSegment1057.X3DNode::setName(CString("l_clavicle"));
HAnimSegment1057.setDEF(CString("hanim_l_clavicle"));
Transform& Transform1058 =  Transform();
Transform1058.setTranslation(new float[]{0.082,1.4488,-0.0353});
Transform& Transform1059 =  Transform();
//Empty Transform
Shape& Shape1060 =  Shape();
Shape1060.setUSE(CString("HAnimJointShape"));
Transform1059.addChild(&Shape1060);

Transform1058.addChild(&Transform1059);

HAnimSegment1057.addChild(&Transform1058);

Shape& Shape1061 =  Shape();
LineSet& LineSet1062 =  LineSet();
LineSet1062.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1063 =  Coordinate();
Coordinate1063.setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet1062.setCoord(Coordinate1063);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA& ColorRGBA1064 =  ColorRGBA();
ColorRGBA1064.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1062.addChild(&ColorRGBA1064);

Shape1061.setGeometry(&LineSet1062);

HAnimSegment1057.addChild(&Shape1061);

HAnimJoint1056.addChildren(&HAnimSegment1057);

HAnimJoint& HAnimJoint1065 =  HAnimJoint();
HAnimJoint1065.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint1065.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint1065.setCenter(new float[]{0.0962,1.4269,-0.0424});
HAnimSegment& HAnimSegment1066 =  HAnimSegment();
HAnimSegment1066.X3DNode::setName(CString("l_scapula"));
HAnimSegment1066.setDEF(CString("hanim_l_scapula"));
Transform& Transform1067 =  Transform();
Transform1067.setTranslation(new float[]{0.0962,1.4269,-0.0424});
Transform& Transform1068 =  Transform();
//Empty Transform
Shape& Shape1069 =  Shape();
Shape1069.setUSE(CString("HAnimJointShape"));
Transform1068.addChild(&Shape1069);

Transform1067.addChild(&Transform1068);

HAnimSegment1066.addChild(&Transform1067);

Shape& Shape1070 =  Shape();
LineSet& LineSet1071 =  LineSet();
LineSet1071.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1072 =  Coordinate();
Coordinate1072.setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet1071.setCoord(Coordinate1072);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA& ColorRGBA1073 =  ColorRGBA();
ColorRGBA1073.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1071.addChild(&ColorRGBA1073);

Shape1070.setGeometry(&LineSet1071);

HAnimSegment1066.addChild(&Shape1070);

HAnimSite& HAnimSite1074 =  HAnimSite();
HAnimSite1074.X3DNode::setName(CString("l_bideltoid"));
HAnimSite1074.setDEF(CString("hanim_l_bideltoid"));
TouchSensor& TouchSensor1075 =  TouchSensor();
TouchSensor1075.setDescription(CString("HAnimSite l_bideltoid"));
HAnimSite1074.addChild(&TouchSensor1075);

Shape& Shape1076 =  Shape();
Shape1076.setUSE(CString("HAnimSiteShape"));
HAnimSite1074.addChild(&Shape1076);

HAnimSegment1066.addChild(&HAnimSite1074);

HAnimSite& HAnimSite1077 =  HAnimSite();
HAnimSite1077.X3DNode::setName(CString("l_humeral_lateral_epicondyles"));
HAnimSite1077.setDEF(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimSite1077.setTranslation(new float[]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor1078 =  TouchSensor();
TouchSensor1078.setDescription(CString("HAnimSite l_humeral_lateral_epicondyles"));
HAnimSite1077.addChild(&TouchSensor1078);

Shape& Shape1079 =  Shape();
Shape1079.setUSE(CString("HAnimSiteShape"));
HAnimSite1077.addChild(&Shape1079);

HAnimSegment1066.addChild(&HAnimSite1077);

HAnimJoint1065.addChildren(&HAnimSegment1066);

HAnimJoint& HAnimJoint1080 =  HAnimJoint();
HAnimJoint1080.X3DNode::setName(CString("l_shoulder"));
HAnimJoint1080.setDEF(CString("hanim_l_shoulder"));
HAnimJoint1080.setCenter(new float[]{0.2029,1.4376,-0.0387});
HAnimSegment& HAnimSegment1081 =  HAnimSegment();
HAnimSegment1081.X3DNode::setName(CString("l_upperarm"));
HAnimSegment1081.setDEF(CString("hanim_l_upperarm"));
Transform& Transform1082 =  Transform();
Transform1082.setTranslation(new float[]{0.2029,1.4376,-0.0387});
Transform& Transform1083 =  Transform();
//Empty Transform
Shape& Shape1084 =  Shape();
Shape1084.setUSE(CString("HAnimJointShape"));
Transform1083.addChild(&Shape1084);

Transform1082.addChild(&Transform1083);

HAnimSegment1081.addChild(&Transform1082);

Shape& Shape1085 =  Shape();
LineSet& LineSet1086 =  LineSet();
LineSet1086.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1087 =  Coordinate();
Coordinate1087.setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet1086.setCoord(Coordinate1087);

//from l_shoulder to l_elbow vertices 2
ColorRGBA& ColorRGBA1088 =  ColorRGBA();
ColorRGBA1088.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1086.addChild(&ColorRGBA1088);

Shape1085.setGeometry(&LineSet1086);

HAnimSegment1081.addChild(&Shape1085);

HAnimSite& HAnimSite1089 =  HAnimSite();
HAnimSite1089.X3DNode::setName(CString("l_humeral_medial_epicondyles"));
HAnimSite1089.setDEF(CString("hanim_l_humeral_medial_epicondyles"));
HAnimSite1089.setTranslation(new float[]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor1090 =  TouchSensor();
TouchSensor1090.setDescription(CString("HAnimSite l_humeral_medial_epicondyles"));
HAnimSite1089.addChild(&TouchSensor1090);

Shape& Shape1091 =  Shape();
Shape1091.setUSE(CString("HAnimSiteShape"));
HAnimSite1089.addChild(&Shape1091);

HAnimSegment1081.addChild(&HAnimSite1089);

HAnimSite& HAnimSite1092 =  HAnimSite();
HAnimSite1092.X3DNode::setName(CString("l_olecranon"));
HAnimSite1092.setDEF(CString("hanim_l_olecranon"));
HAnimSite1092.setTranslation(new float[]{-0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor1093 =  TouchSensor();
TouchSensor1093.setDescription(CString("HAnimSite l_olecranon"));
HAnimSite1092.addChild(&TouchSensor1093);

Shape& Shape1094 =  Shape();
Shape1094.setUSE(CString("HAnimSiteShape"));
HAnimSite1092.addChild(&Shape1094);

HAnimSegment1081.addChild(&HAnimSite1092);

HAnimSite& HAnimSite1095 =  HAnimSite();
HAnimSite1095.X3DNode::setName(CString("l_radial_styloid"));
HAnimSite1095.setDEF(CString("hanim_l_radial_styloid"));
HAnimSite1095.setTranslation(new float[]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor1096 =  TouchSensor();
TouchSensor1096.setDescription(CString("HAnimSite l_radial_styloid"));
HAnimSite1095.addChild(&TouchSensor1096);

Shape& Shape1097 =  Shape();
Shape1097.setUSE(CString("HAnimSiteShape"));
HAnimSite1095.addChild(&Shape1097);

HAnimSegment1081.addChild(&HAnimSite1095);

HAnimSite& HAnimSite1098 =  HAnimSite();
HAnimSite1098.X3DNode::setName(CString("l_radiale"));
HAnimSite1098.setDEF(CString("hanim_l_radiale"));
HAnimSite1098.setTranslation(new float[]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor1099 =  TouchSensor();
TouchSensor1099.setDescription(CString("HAnimSite l_radiale"));
HAnimSite1098.addChild(&TouchSensor1099);

Shape& Shape1100 =  Shape();
Shape1100.setUSE(CString("HAnimSiteShape"));
HAnimSite1098.addChild(&Shape1100);

HAnimSegment1081.addChild(&HAnimSite1098);

HAnimJoint1080.addChildren(&HAnimSegment1081);

HAnimJoint& HAnimJoint1101 =  HAnimJoint();
HAnimJoint1101.X3DNode::setName(CString("l_elbow"));
HAnimJoint1101.setDEF(CString("hanim_l_elbow"));
HAnimJoint1101.setCenter(new float[]{0.2014,1.1357,-0.0682});
HAnimSegment& HAnimSegment1102 =  HAnimSegment();
HAnimSegment1102.X3DNode::setName(CString("l_forearm"));
HAnimSegment1102.setDEF(CString("hanim_l_forearm"));
Transform& Transform1103 =  Transform();
Transform1103.setTranslation(new float[]{0.2014,1.1357,-0.0682});
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
Coordinate1108.setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet1107.setCoord(Coordinate1108);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA& ColorRGBA1109 =  ColorRGBA();
ColorRGBA1109.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1107.addChild(&ColorRGBA1109);

Shape1106.setGeometry(&LineSet1107);

HAnimSegment1102.addChild(&Shape1106);

HAnimSite& HAnimSite1110 =  HAnimSite();
HAnimSite1110.X3DNode::setName(CString("l_ulnar_styloid"));
HAnimSite1110.setDEF(CString("hanim_l_ulnar_styloid"));
HAnimSite1110.setTranslation(new float[]{-0.2142,0.8529,-0.0648});
TouchSensor& TouchSensor1111 =  TouchSensor();
TouchSensor1111.setDescription(CString("HAnimSite l_ulnar_styloid"));
HAnimSite1110.addChild(&TouchSensor1111);

Shape& Shape1112 =  Shape();
Shape1112.setUSE(CString("HAnimSiteShape"));
HAnimSite1110.addChild(&Shape1112);

HAnimSegment1102.addChild(&HAnimSite1110);

HAnimJoint1101.addChildren(&HAnimSegment1102);

HAnimJoint& HAnimJoint1113 =  HAnimJoint();
HAnimJoint1113.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint1113.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint1113.setCenter(new float[]{0.1984,0.8663,-0.0583});
HAnimSegment& HAnimSegment1114 =  HAnimSegment();
HAnimSegment1114.X3DNode::setName(CString("l_carpal"));
HAnimSegment1114.setDEF(CString("hanim_l_carpal"));
Transform& Transform1115 =  Transform();
Transform1115.setScale(new float[]{0.2,0.2,0.2});
Transform1115.setTranslation(new float[]{0.2,0.85,-0.05});
Transform1115.setRotation(new float[]{0,0,1,-3.14});
//Transform left hand
Transform& Transform1116 =  Transform();
Transform1116.setRotation(new float[]{0,1,0,-1.57});
//Transform left hand
Shape& Shape1117 =  Shape();
Shape1117.setUSE(CString("HAnimJointShape"));
Transform1116.addChild(&Shape1117);

Transform1115.addChild(&Transform1116);

HAnimSegment1114.addChild(&Transform1115);

Shape& Shape1118 =  Shape();
LineSet& LineSet1119 =  LineSet();
LineSet1119.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1120 =  Coordinate();
Coordinate1120.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826}, 6);
LineSet1119.setCoord(Coordinate1120);

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA& ColorRGBA1121 =  ColorRGBA();
ColorRGBA1121.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1119.addChild(&ColorRGBA1121);

Shape1118.setGeometry(&LineSet1119);

HAnimSegment1114.addChild(&Shape1118);

Shape& Shape1122 =  Shape();
LineSet& LineSet1123 =  LineSet();
LineSet1123.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1124 =  Coordinate();
Coordinate1124.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935}, 6);
LineSet1123.setCoord(Coordinate1124);

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA& ColorRGBA1125 =  ColorRGBA();
ColorRGBA1125.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1123.addChild(&ColorRGBA1125);

Shape1122.setGeometry(&LineSet1123);

HAnimSegment1114.addChild(&Shape1122);

Shape& Shape1126 =  Shape();
LineSet& LineSet1127 =  LineSet();
LineSet1127.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1128 =  Coordinate();
Coordinate1128.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067}, 6);
LineSet1127.setCoord(Coordinate1128);

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA& ColorRGBA1129 =  ColorRGBA();
ColorRGBA1129.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1127.addChild(&ColorRGBA1129);

Shape1126.setGeometry(&LineSet1127);

HAnimSegment1114.addChild(&Shape1126);

Shape& Shape1130 =  Shape();
LineSet& LineSet1131 =  LineSet();
LineSet1131.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1132 =  Coordinate();
Coordinate1132.setPoint(new float[]{0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276}, 6);
LineSet1131.setCoord(Coordinate1132);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA& ColorRGBA1133 =  ColorRGBA();
ColorRGBA1133.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1131.addChild(&ColorRGBA1133);

Shape1130.setGeometry(&LineSet1131);

HAnimSegment1114.addChild(&Shape1130);

HAnimJoint1113.addChildren(&HAnimSegment1114);

HAnimJoint& HAnimJoint1134 =  HAnimJoint();
HAnimJoint1134.X3DNode::setName(CString("l_midcarpal_1"));
HAnimJoint1134.setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint1134.setCenter(new float[]{0.1811,0.6975,-0.0826});
HAnimSegment& HAnimSegment1135 =  HAnimSegment();
HAnimSegment1135.X3DNode::setName(CString("l_trapezium"));
HAnimSegment1135.setDEF(CString("hanim_l_trapezium"));
Transform& Transform1136 =  Transform();
Transform1136.setTranslation(new float[]{0.1811,0.6975,-0.0826});
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
Coordinate1141.setPoint(new float[]{0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534}, 6);
LineSet1140.setCoord(Coordinate1141);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1142 =  ColorRGBA();
ColorRGBA1142.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1140.addChild(&ColorRGBA1142);

Shape1139.setGeometry(&LineSet1140);

HAnimSegment1135.addChild(&Shape1139);

HAnimJoint1134.addChildren(&HAnimSegment1135);

HAnimJoint& HAnimJoint1143 =  HAnimJoint();
HAnimJoint1143.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint1143.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint1143.setCenter(new float[]{0.1924,0.8472,-0.0534});
HAnimSegment& HAnimSegment1144 =  HAnimSegment();
HAnimSegment1144.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment1144.setDEF(CString("hanim_l_metacarpal_1"));
Transform& Transform1145 =  Transform();
Transform1145.setTranslation(new float[]{0.1924,0.8472,-0.0534});
Transform& Transform1146 =  Transform();
//Empty Transform
Shape& Shape1147 =  Shape();
Shape1147.setUSE(CString("HAnimJointShape"));
Transform1146.addChild(&Shape1147);

Transform1145.addChild(&Transform1146);

HAnimSegment1144.addChild(&Transform1145);

Shape& Shape1148 =  Shape();
LineSet& LineSet1149 =  LineSet();
LineSet1149.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1150 =  Coordinate();
Coordinate1150.setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet1149.setCoord(Coordinate1150);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1151 =  ColorRGBA();
ColorRGBA1151.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1149.addChild(&ColorRGBA1151);

Shape1148.setGeometry(&LineSet1149);

HAnimSegment1144.addChild(&Shape1148);

HAnimJoint1143.addChildren(&HAnimSegment1144);

HAnimJoint& HAnimJoint1152 =  HAnimJoint();
HAnimJoint1152.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint1152.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint1152.setCenter(new float[]{0.1951,0.8226,0.0246});
HAnimSegment& HAnimSegment1153 =  HAnimSegment();
HAnimSegment1153.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment1153.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform& Transform1154 =  Transform();
Transform1154.setTranslation(new float[]{0.1951,0.8226,0.0246});
Transform& Transform1155 =  Transform();
//Empty Transform
Shape& Shape1156 =  Shape();
Shape1156.setUSE(CString("HAnimJointShape"));
Transform1155.addChild(&Shape1156);

Transform1154.addChild(&Transform1155);

HAnimSegment1153.addChild(&Transform1154);

Shape& Shape1157 =  Shape();
LineSet& LineSet1158 =  LineSet();
LineSet1158.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1159 =  Coordinate();
Coordinate1159.setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet1158.setCoord(Coordinate1159);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1160 =  ColorRGBA();
ColorRGBA1160.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1158.addChild(&ColorRGBA1160);

Shape1157.setGeometry(&LineSet1158);

HAnimSegment1153.addChild(&Shape1157);

HAnimSite& HAnimSite1161 =  HAnimSite();
HAnimSite1161.X3DNode::setName(CString("l_carpal_distal_phalanx_1_tip"));
HAnimSite1161.setDEF(CString("hanim_l_carpal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor1162 =  TouchSensor();
TouchSensor1162.setDescription(CString("HAnimSite l_carpal_distal_phalanx_1_tip"));
HAnimSite1161.addChild(&TouchSensor1162);

Shape& Shape1163 =  Shape();
Shape1163.setUSE(CString("HAnimSiteShape"));
HAnimSite1161.addChild(&Shape1163);

HAnimSegment1153.addChild(&HAnimSite1161);

HAnimJoint1152.addChildren(&HAnimSegment1153);

HAnimJoint& HAnimJoint1164 =  HAnimJoint();
HAnimJoint1164.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint1164.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint1164.setCenter(new float[]{0.1955,0.8159,0.0464});
HAnimJoint1152.addChildren(&HAnimJoint1164);

HAnimJoint1143.addChildren(&HAnimJoint1152);

HAnimJoint1134.addChildren(&HAnimJoint1143);

HAnimJoint1113.addChildren(&HAnimJoint1134);

HAnimJoint& HAnimJoint1165 =  HAnimJoint();
HAnimJoint1165.X3DNode::setName(CString("l_midcarpal_2"));
HAnimJoint1165.setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint1165.setCenter(new float[]{0.1811,0.6984,-0.0935});
HAnimSegment& HAnimSegment1166 =  HAnimSegment();
HAnimSegment1166.X3DNode::setName(CString("l_trapezoid"));
HAnimSegment1166.setDEF(CString("hanim_l_trapezoid"));
Transform& Transform1167 =  Transform();
Transform1167.setTranslation(new float[]{0.1811,0.6984,-0.0935});
Transform& Transform1168 =  Transform();
//Empty Transform
Shape& Shape1169 =  Shape();
Shape1169.setUSE(CString("HAnimJointShape"));
Transform1168.addChild(&Shape1169);

Transform1167.addChild(&Transform1168);

HAnimSegment1166.addChild(&Transform1167);

Shape& Shape1170 =  Shape();
LineSet& LineSet1171 =  LineSet();
LineSet1171.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1172 =  Coordinate();
Coordinate1172.setPoint(new float[]{0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028}, 6);
LineSet1171.setCoord(Coordinate1172);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1173 =  ColorRGBA();
ColorRGBA1173.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1171.addChild(&ColorRGBA1173);

Shape1170.setGeometry(&LineSet1171);

HAnimSegment1166.addChild(&Shape1170);

HAnimSite& HAnimSite1174 =  HAnimSite();
HAnimSite1174.X3DNode::setName(CString("l_metacarpal_phalanx_2"));
HAnimSite1174.setDEF(CString("hanim_l_metacarpal_phalanx_2"));
HAnimSite1174.setTranslation(new float[]{0.2009,0.8139,-0.0237});
TouchSensor& TouchSensor1175 =  TouchSensor();
TouchSensor1175.setDescription(CString("HAnimSite l_metacarpal_phalanx_2"));
HAnimSite1174.addChild(&TouchSensor1175);

Shape& Shape1176 =  Shape();
Shape1176.setUSE(CString("HAnimSiteShape"));
HAnimSite1174.addChild(&Shape1176);

HAnimSegment1166.addChild(&HAnimSite1174);

HAnimJoint1165.addChildren(&HAnimSegment1166);

HAnimJoint& HAnimJoint1177 =  HAnimJoint();
HAnimJoint1177.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint1177.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint1177.setCenter(new float[]{0.1983,0.8024,-0.028});
HAnimSegment& HAnimSegment1178 =  HAnimSegment();
HAnimSegment1178.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment1178.setDEF(CString("hanim_l_metacarpal_2"));
Transform& Transform1179 =  Transform();
Transform1179.setTranslation(new float[]{0.1983,0.8024,-0.028});
Transform& Transform1180 =  Transform();
//Empty Transform
Shape& Shape1181 =  Shape();
Shape1181.setUSE(CString("HAnimJointShape"));
Transform1180.addChild(&Shape1181);

Transform1179.addChild(&Transform1180);

HAnimSegment1178.addChild(&Transform1179);

Shape& Shape1182 =  Shape();
LineSet& LineSet1183 =  LineSet();
LineSet1183.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1184 =  Coordinate();
Coordinate1184.setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet1183.setCoord(Coordinate1184);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1185 =  ColorRGBA();
ColorRGBA1185.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1183.addChild(&ColorRGBA1185);

Shape1182.setGeometry(&LineSet1183);

HAnimSegment1178.addChild(&Shape1182);

HAnimJoint1177.addChildren(&HAnimSegment1178);

HAnimJoint& HAnimJoint1186 =  HAnimJoint();
HAnimJoint1186.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint1186.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint1186.setCenter(new float[]{0.1983,0.7815,-0.028});
HAnimSegment& HAnimSegment1187 =  HAnimSegment();
HAnimSegment1187.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment1187.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform& Transform1188 =  Transform();
Transform1188.setTranslation(new float[]{0.1983,0.7815,-0.028});
Transform& Transform1189 =  Transform();
//Empty Transform
Shape& Shape1190 =  Shape();
Shape1190.setUSE(CString("HAnimJointShape"));
Transform1189.addChild(&Shape1190);

Transform1188.addChild(&Transform1189);

HAnimSegment1187.addChild(&Transform1188);

Shape& Shape1191 =  Shape();
LineSet& LineSet1192 =  LineSet();
LineSet1192.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1193 =  Coordinate();
Coordinate1193.setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet1192.setCoord(Coordinate1193);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1194 =  ColorRGBA();
ColorRGBA1194.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1192.addChild(&ColorRGBA1194);

Shape1191.setGeometry(&LineSet1192);

HAnimSegment1187.addChild(&Shape1191);

HAnimJoint1186.addChildren(&HAnimSegment1187);

HAnimJoint& HAnimJoint1195 =  HAnimJoint();
HAnimJoint1195.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint1195.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint1195.setCenter(new float[]{0.2017,0.7363,-0.0248});
HAnimSegment& HAnimSegment1196 =  HAnimSegment();
HAnimSegment1196.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment1196.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform& Transform1197 =  Transform();
Transform1197.setTranslation(new float[]{0.2017,0.7363,-0.0248});
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
Coordinate1202.setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet1201.setCoord(Coordinate1202);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1203 =  ColorRGBA();
ColorRGBA1203.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1201.addChild(&ColorRGBA1203);

Shape1200.setGeometry(&LineSet1201);

HAnimSegment1196.addChild(&Shape1200);

HAnimSite& HAnimSite1204 =  HAnimSite();
HAnimSite1204.X3DNode::setName(CString("l_carpal_distal_phalanx_2_tip"));
HAnimSite1204.setDEF(CString("hanim_l_carpal_distal_phalanx_2_tip"));
TouchSensor& TouchSensor1205 =  TouchSensor();
TouchSensor1205.setDescription(CString("HAnimSite l_carpal_distal_phalanx_2_tip"));
HAnimSite1204.addChild(&TouchSensor1205);

Shape& Shape1206 =  Shape();
Shape1206.setUSE(CString("HAnimSiteShape"));
HAnimSite1204.addChild(&Shape1206);

HAnimSegment1196.addChild(&HAnimSite1204);

HAnimSite& HAnimSite1207 =  HAnimSite();
HAnimSite1207.X3DNode::setName(CString("l_dactylion"));
HAnimSite1207.setDEF(CString("hanim_l_dactylion"));
HAnimSite1207.setTranslation(new float[]{0.2056,0.6743,-0.0482});
TouchSensor& TouchSensor1208 =  TouchSensor();
TouchSensor1208.setDescription(CString("HAnimSite l_dactylion"));
HAnimSite1207.addChild(&TouchSensor1208);

Shape& Shape1209 =  Shape();
Shape1209.setUSE(CString("HAnimSiteShape"));
HAnimSite1207.addChild(&Shape1209);

HAnimSegment1196.addChild(&HAnimSite1207);

HAnimJoint1195.addChildren(&HAnimSegment1196);

HAnimJoint& HAnimJoint1210 =  HAnimJoint();
HAnimJoint1210.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint1210.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint1210.setCenter(new float[]{0.2028,0.7139,-0.0236});
HAnimJoint1195.addChildren(&HAnimJoint1210);

HAnimJoint1186.addChildren(&HAnimJoint1195);

HAnimJoint1177.addChildren(&HAnimJoint1186);

HAnimJoint1165.addChildren(&HAnimJoint1177);

HAnimJoint1113.addChildren(&HAnimJoint1165);

HAnimJoint& HAnimJoint1211 =  HAnimJoint();
HAnimJoint1211.X3DNode::setName(CString("l_midcarpal_3"));
HAnimJoint1211.setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint1211.setCenter(new float[]{0.1809,0.7,-0.1067});
HAnimSegment& HAnimSegment1212 =  HAnimSegment();
HAnimSegment1212.X3DNode::setName(CString("l_capitate"));
HAnimSegment1212.setDEF(CString("hanim_l_capitate"));
Transform& Transform1213 =  Transform();
Transform1213.setTranslation(new float[]{0.1809,0.7,-0.1067});
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
Coordinate1218.setPoint(new float[]{0.1809,0.7,-0.1067,0.1987,0.8029,-0.053}, 6);
LineSet1217.setCoord(Coordinate1218);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1219 =  ColorRGBA();
ColorRGBA1219.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1217.addChild(&ColorRGBA1219);

Shape1216.setGeometry(&LineSet1217);

HAnimSegment1212.addChild(&Shape1216);

HAnimSite& HAnimSite1220 =  HAnimSite();
HAnimSite1220.X3DNode::setName(CString("l_metacarpal_phalanx_3"));
HAnimSite1220.setDEF(CString("hanim_l_metacarpal_phalanx_3"));
TouchSensor& TouchSensor1221 =  TouchSensor();
TouchSensor1221.setDescription(CString("HAnimSite l_metacarpal_phalanx_3"));
HAnimSite1220.addChild(&TouchSensor1221);

Shape& Shape1222 =  Shape();
Shape1222.setUSE(CString("HAnimSiteShape"));
HAnimSite1220.addChild(&Shape1222);

HAnimSegment1212.addChild(&HAnimSite1220);

HAnimJoint1211.addChildren(&HAnimSegment1212);

HAnimJoint& HAnimJoint1223 =  HAnimJoint();
HAnimJoint1223.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint1223.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint1223.setCenter(new float[]{0.1987,0.8029,-0.053});
HAnimSegment& HAnimSegment1224 =  HAnimSegment();
HAnimSegment1224.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment1224.setDEF(CString("hanim_l_metacarpal_3"));
Transform& Transform1225 =  Transform();
Transform1225.setTranslation(new float[]{0.1987,0.8029,-0.053});
Transform& Transform1226 =  Transform();
//Empty Transform
Shape& Shape1227 =  Shape();
Shape1227.setUSE(CString("HAnimJointShape"));
Transform1226.addChild(&Shape1227);

Transform1225.addChild(&Transform1226);

HAnimSegment1224.addChild(&Transform1225);

Shape& Shape1228 =  Shape();
LineSet& LineSet1229 =  LineSet();
LineSet1229.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1230 =  Coordinate();
Coordinate1230.setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet1229.setCoord(Coordinate1230);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1231 =  ColorRGBA();
ColorRGBA1231.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1229.addChild(&ColorRGBA1231);

Shape1228.setGeometry(&LineSet1229);

HAnimSegment1224.addChild(&Shape1228);

HAnimJoint1223.addChildren(&HAnimSegment1224);

HAnimJoint& HAnimJoint1232 =  HAnimJoint();
HAnimJoint1232.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint1232.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint1232.setCenter(new float[]{0.1987,0.7818,-0.053});
HAnimSegment& HAnimSegment1233 =  HAnimSegment();
HAnimSegment1233.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment1233.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform& Transform1234 =  Transform();
Transform1234.setTranslation(new float[]{0.1987,0.7818,-0.053});
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
Coordinate1239.setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet1238.setCoord(Coordinate1239);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1240 =  ColorRGBA();
ColorRGBA1240.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1238.addChild(&ColorRGBA1240);

Shape1237.setGeometry(&LineSet1238);

HAnimSegment1233.addChild(&Shape1237);

HAnimJoint1232.addChildren(&HAnimSegment1233);

HAnimJoint& HAnimJoint1241 =  HAnimJoint();
HAnimJoint1241.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint1241.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint1241.setCenter(new float[]{0.2013,0.7273,-0.0503});
HAnimSegment& HAnimSegment1242 =  HAnimSegment();
HAnimSegment1242.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment1242.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform& Transform1243 =  Transform();
Transform1243.setTranslation(new float[]{0.2013,0.7273,-0.0503});
Transform& Transform1244 =  Transform();
//Empty Transform
Shape& Shape1245 =  Shape();
Shape1245.setUSE(CString("HAnimJointShape"));
Transform1244.addChild(&Shape1245);

Transform1243.addChild(&Transform1244);

HAnimSegment1242.addChild(&Transform1243);

Shape& Shape1246 =  Shape();
LineSet& LineSet1247 =  LineSet();
LineSet1247.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1248 =  Coordinate();
Coordinate1248.setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet1247.setCoord(Coordinate1248);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1249 =  ColorRGBA();
ColorRGBA1249.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1247.addChild(&ColorRGBA1249);

Shape1246.setGeometry(&LineSet1247);

HAnimSegment1242.addChild(&Shape1246);

HAnimSite& HAnimSite1250 =  HAnimSite();
HAnimSite1250.X3DNode::setName(CString("l_carpal_distal_phalanx_3_tip"));
HAnimSite1250.setDEF(CString("hanim_l_carpal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor1251 =  TouchSensor();
TouchSensor1251.setDescription(CString("HAnimSite l_carpal_distal_phalanx_3_tip"));
HAnimSite1250.addChild(&TouchSensor1251);

Shape& Shape1252 =  Shape();
Shape1252.setUSE(CString("HAnimSiteShape"));
HAnimSite1250.addChild(&Shape1252);

HAnimSegment1242.addChild(&HAnimSite1250);

HAnimJoint1241.addChildren(&HAnimSegment1242);

HAnimJoint& HAnimJoint1253 =  HAnimJoint();
HAnimJoint1253.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint1253.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint1253.setCenter(new float[]{0.2026,0.7011,-0.0494});
HAnimJoint1241.addChildren(&HAnimJoint1253);

HAnimJoint1232.addChildren(&HAnimJoint1241);

HAnimJoint1223.addChildren(&HAnimJoint1232);

HAnimJoint1211.addChildren(&HAnimJoint1223);

HAnimJoint1113.addChildren(&HAnimJoint1211);

HAnimJoint& HAnimJoint1254 =  HAnimJoint();
HAnimJoint1254.X3DNode::setName(CString("l_midcarpal_4_5"));
HAnimJoint1254.setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint1254.setCenter(new float[]{0.1809,0.6973,-0.1276});
HAnimSegment& HAnimSegment1255 =  HAnimSegment();
HAnimSegment1255.X3DNode::setName(CString("l_hamate"));
HAnimSegment1255.setDEF(CString("hanim_l_hamate"));
Transform& Transform1256 =  Transform();
Transform1256.setTranslation(new float[]{0.1809,0.6973,-0.1276});
Transform& Transform1257 =  Transform();
//Empty Transform
Shape& Shape1258 =  Shape();
Shape1258.setUSE(CString("HAnimJointShape"));
Transform1257.addChild(&Shape1258);

Transform1256.addChild(&Transform1257);

HAnimSegment1255.addChild(&Transform1256);

Shape& Shape1259 =  Shape();
LineSet& LineSet1260 =  LineSet();
LineSet1260.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1261 =  Coordinate();
Coordinate1261.setPoint(new float[]{0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794}, 6);
LineSet1260.setCoord(Coordinate1261);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1262 =  ColorRGBA();
ColorRGBA1262.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1260.addChild(&ColorRGBA1262);

Shape1259.setGeometry(&LineSet1260);

HAnimSegment1255.addChild(&Shape1259);

Shape& Shape1263 =  Shape();
LineSet& LineSet1264 =  LineSet();
LineSet1264.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1265 =  Coordinate();
Coordinate1265.setPoint(new float[]{0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036}, 6);
LineSet1264.setCoord(Coordinate1265);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1266 =  ColorRGBA();
ColorRGBA1266.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1264.addChild(&ColorRGBA1266);

Shape1263.setGeometry(&LineSet1264);

HAnimSegment1255.addChild(&Shape1263);

HAnimSite& HAnimSite1267 =  HAnimSite();
HAnimSite1267.X3DNode::setName(CString("l_metacarpal_phalanx_5"));
HAnimSite1267.setDEF(CString("hanim_l_metacarpal_phalanx_5"));
HAnimSite1267.setTranslation(new float[]{0.1929,0.786,-0.1122});
TouchSensor& TouchSensor1268 =  TouchSensor();
TouchSensor1268.setDescription(CString("HAnimSite l_metacarpal_phalanx_5"));
HAnimSite1267.addChild(&TouchSensor1268);

Shape& Shape1269 =  Shape();
Shape1269.setUSE(CString("HAnimSiteShape"));
HAnimSite1267.addChild(&Shape1269);

HAnimSegment1255.addChild(&HAnimSite1267);

HAnimJoint1254.addChildren(&HAnimSegment1255);

HAnimJoint& HAnimJoint1270 =  HAnimJoint();
HAnimJoint1270.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint1270.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint1270.setCenter(new float[]{0.1956,0.8019,-0.0794});
HAnimSegment& HAnimSegment1271 =  HAnimSegment();
HAnimSegment1271.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment1271.setDEF(CString("hanim_l_metacarpal_4"));
Transform& Transform1272 =  Transform();
Transform1272.setTranslation(new float[]{0.1956,0.8019,-0.0794});
Transform& Transform1273 =  Transform();
//Empty Transform
Shape& Shape1274 =  Shape();
Shape1274.setUSE(CString("HAnimJointShape"));
Transform1273.addChild(&Shape1274);

Transform1272.addChild(&Transform1273);

HAnimSegment1271.addChild(&Transform1272);

Shape& Shape1275 =  Shape();
LineSet& LineSet1276 =  LineSet();
LineSet1276.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1277 =  Coordinate();
Coordinate1277.setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet1276.setCoord(Coordinate1277);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1278 =  ColorRGBA();
ColorRGBA1278.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1276.addChild(&ColorRGBA1278);

Shape1275.setGeometry(&LineSet1276);

HAnimSegment1271.addChild(&Shape1275);

HAnimJoint1270.addChildren(&HAnimSegment1271);

HAnimJoint& HAnimJoint1279 =  HAnimJoint();
HAnimJoint1279.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint1279.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint1279.setCenter(new float[]{0.1956,0.7815,-0.0794});
HAnimSegment& HAnimSegment1280 =  HAnimSegment();
HAnimSegment1280.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment1280.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform& Transform1281 =  Transform();
Transform1281.setTranslation(new float[]{0.1956,0.7815,-0.0794});
Transform& Transform1282 =  Transform();
//Empty Transform
Shape& Shape1283 =  Shape();
Shape1283.setUSE(CString("HAnimJointShape"));
Transform1282.addChild(&Shape1283);

Transform1281.addChild(&Transform1282);

HAnimSegment1280.addChild(&Transform1281);

Shape& Shape1284 =  Shape();
LineSet& LineSet1285 =  LineSet();
LineSet1285.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1286 =  Coordinate();
Coordinate1286.setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet1285.setCoord(Coordinate1286);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1287 =  ColorRGBA();
ColorRGBA1287.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1285.addChild(&ColorRGBA1287);

Shape1284.setGeometry(&LineSet1285);

HAnimSegment1280.addChild(&Shape1284);

HAnimJoint1279.addChildren(&HAnimSegment1280);

HAnimJoint& HAnimJoint1288 =  HAnimJoint();
HAnimJoint1288.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint1288.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint1288.setCenter(new float[]{0.1973,0.7287,-0.0777});
HAnimSegment& HAnimSegment1289 =  HAnimSegment();
HAnimSegment1289.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment1289.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform& Transform1290 =  Transform();
Transform1290.setTranslation(new float[]{0.1973,0.7287,-0.0777});
Transform& Transform1291 =  Transform();
//Empty Transform
Shape& Shape1292 =  Shape();
Shape1292.setUSE(CString("HAnimJointShape"));
Transform1291.addChild(&Shape1292);

Transform1290.addChild(&Transform1291);

HAnimSegment1289.addChild(&Transform1290);

Shape& Shape1293 =  Shape();
LineSet& LineSet1294 =  LineSet();
LineSet1294.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1295 =  Coordinate();
Coordinate1295.setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet1294.setCoord(Coordinate1295);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1296 =  ColorRGBA();
ColorRGBA1296.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1294.addChild(&ColorRGBA1296);

Shape1293.setGeometry(&LineSet1294);

HAnimSegment1289.addChild(&Shape1293);

HAnimSite& HAnimSite1297 =  HAnimSite();
HAnimSite1297.X3DNode::setName(CString("l_carpal_distal_phalanx_4_tip"));
HAnimSite1297.setDEF(CString("hanim_l_carpal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor1298 =  TouchSensor();
TouchSensor1298.setDescription(CString("HAnimSite l_carpal_distal_phalanx_4_tip"));
HAnimSite1297.addChild(&TouchSensor1298);

Shape& Shape1299 =  Shape();
Shape1299.setUSE(CString("HAnimSiteShape"));
HAnimSite1297.addChild(&Shape1299);

HAnimSegment1289.addChild(&HAnimSite1297);

HAnimJoint1288.addChildren(&HAnimSegment1289);

HAnimJoint& HAnimJoint1300 =  HAnimJoint();
HAnimJoint1300.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint1300.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint1300.setCenter(new float[]{0.1983,0.7045,-0.0767});
HAnimJoint1288.addChildren(&HAnimJoint1300);

HAnimJoint1279.addChildren(&HAnimJoint1288);

HAnimJoint1270.addChildren(&HAnimJoint1279);

HAnimJoint1254.addChildren(&HAnimJoint1270);

HAnimJoint& HAnimJoint1301 =  HAnimJoint();
HAnimJoint1301.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint1301.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint1301.setCenter(new float[]{0.1925,0.8066,-0.1036});
HAnimSegment& HAnimSegment1302 =  HAnimSegment();
HAnimSegment1302.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment1302.setDEF(CString("hanim_l_metacarpal_5"));
Transform& Transform1303 =  Transform();
Transform1303.setTranslation(new float[]{0.1925,0.8066,-0.1036});
Transform& Transform1304 =  Transform();
//Empty Transform
Shape& Shape1305 =  Shape();
Shape1305.setUSE(CString("HAnimJointShape"));
Transform1304.addChild(&Shape1305);

Transform1303.addChild(&Transform1304);

HAnimSegment1302.addChild(&Transform1303);

Shape& Shape1306 =  Shape();
LineSet& LineSet1307 =  LineSet();
LineSet1307.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1308 =  Coordinate();
Coordinate1308.setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet1307.setCoord(Coordinate1308);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1309 =  ColorRGBA();
ColorRGBA1309.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1307.addChild(&ColorRGBA1309);

Shape1306.setGeometry(&LineSet1307);

HAnimSegment1302.addChild(&Shape1306);

HAnimJoint1301.addChildren(&HAnimSegment1302);

HAnimJoint& HAnimJoint1310 =  HAnimJoint();
HAnimJoint1310.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint1310.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint1310.setCenter(new float[]{0.1925,0.7866,-0.1036});
HAnimSegment& HAnimSegment1311 =  HAnimSegment();
HAnimSegment1311.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment1311.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform& Transform1312 =  Transform();
Transform1312.setTranslation(new float[]{0.1925,0.7866,-0.1036});
Transform& Transform1313 =  Transform();
//Empty Transform
Shape& Shape1314 =  Shape();
Shape1314.setUSE(CString("HAnimJointShape"));
Transform1313.addChild(&Shape1314);

Transform1312.addChild(&Transform1313);

HAnimSegment1311.addChild(&Transform1312);

Shape& Shape1315 =  Shape();
LineSet& LineSet1316 =  LineSet();
LineSet1316.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1317 =  Coordinate();
Coordinate1317.setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet1316.setCoord(Coordinate1317);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1318 =  ColorRGBA();
ColorRGBA1318.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1316.addChild(&ColorRGBA1318);

Shape1315.setGeometry(&LineSet1316);

HAnimSegment1311.addChild(&Shape1315);

HAnimJoint1310.addChildren(&HAnimSegment1311);

HAnimJoint& HAnimJoint1319 =  HAnimJoint();
HAnimJoint1319.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint1319.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint1319.setCenter(new float[]{0.1938,0.7452,-0.1024});
HAnimSegment& HAnimSegment1320 =  HAnimSegment();
HAnimSegment1320.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment1320.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform& Transform1321 =  Transform();
Transform1321.setTranslation(new float[]{0.1938,0.7452,-0.1024});
Transform& Transform1322 =  Transform();
//Empty Transform
Shape& Shape1323 =  Shape();
Shape1323.setUSE(CString("HAnimJointShape"));
Transform1322.addChild(&Shape1323);

Transform1321.addChild(&Transform1322);

HAnimSegment1320.addChild(&Transform1321);

Shape& Shape1324 =  Shape();
LineSet& LineSet1325 =  LineSet();
LineSet1325.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1326 =  Coordinate();
Coordinate1326.setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet1325.setCoord(Coordinate1326);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1327 =  ColorRGBA();
ColorRGBA1327.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1325.addChild(&ColorRGBA1327);

Shape1324.setGeometry(&LineSet1325);

HAnimSegment1320.addChild(&Shape1324);

HAnimSite& HAnimSite1328 =  HAnimSite();
HAnimSite1328.X3DNode::setName(CString("l_carpal_distal_phalanx_5_tip"));
HAnimSite1328.setDEF(CString("hanim_l_carpal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor1329 =  TouchSensor();
TouchSensor1329.setDescription(CString("HAnimSite l_carpal_distal_phalanx_5_tip"));
HAnimSite1328.addChild(&TouchSensor1329);

Shape& Shape1330 =  Shape();
Shape1330.setUSE(CString("HAnimSiteShape"));
HAnimSite1328.addChild(&Shape1330);

HAnimSegment1320.addChild(&HAnimSite1328);

HAnimJoint1319.addChildren(&HAnimSegment1320);

HAnimJoint& HAnimJoint1331 =  HAnimJoint();
HAnimJoint1331.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint1331.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint1331.setCenter(new float[]{0.1948,0.7277,-0.1017});
HAnimJoint1319.addChildren(&HAnimJoint1331);

HAnimJoint1310.addChildren(&HAnimJoint1319);

HAnimJoint1301.addChildren(&HAnimJoint1310);

HAnimJoint1254.addChildren(&HAnimJoint1301);

HAnimJoint1113.addChildren(&HAnimJoint1254);

HAnimJoint1101.addChildren(&HAnimJoint1113);

HAnimJoint1080.addChildren(&HAnimJoint1101);

HAnimJoint1065.addChildren(&HAnimJoint1080);

HAnimJoint1056.addChildren(&HAnimJoint1065);

HAnimJoint852.addChildren(&HAnimJoint1056);

HAnimJoint& HAnimJoint1332 =  HAnimJoint();
HAnimJoint1332.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint1332.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1332.setCenter(new float[]{-0.0694,1.46,-0.033});
HAnimSegment& HAnimSegment1333 =  HAnimSegment();
HAnimSegment1333.X3DNode::setName(CString("r_clavicle"));
HAnimSegment1333.setDEF(CString("hanim_r_clavicle"));
Transform& Transform1334 =  Transform();
Transform1334.setTranslation(new float[]{-0.0694,1.46,-0.033});
Transform& Transform1335 =  Transform();
//Empty Transform
Shape& Shape1336 =  Shape();
Shape1336.setUSE(CString("HAnimJointShape"));
Transform1335.addChild(&Shape1336);

Transform1334.addChild(&Transform1335);

HAnimSegment1333.addChild(&Transform1334);

Shape& Shape1337 =  Shape();
LineSet& LineSet1338 =  LineSet();
LineSet1338.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1339 =  Coordinate();
Coordinate1339.setPoint(new float[]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
LineSet1338.setCoord(Coordinate1339);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA& ColorRGBA1340 =  ColorRGBA();
ColorRGBA1340.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1338.addChild(&ColorRGBA1340);

Shape1337.setGeometry(&LineSet1338);

HAnimSegment1333.addChild(&Shape1337);

HAnimJoint1332.addChildren(&HAnimSegment1333);

HAnimJoint& HAnimJoint1341 =  HAnimJoint();
HAnimJoint1341.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint1341.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1341.setCenter(new float[]{-0.0836,1.4281,-0.0401});
HAnimSegment& HAnimSegment1342 =  HAnimSegment();
HAnimSegment1342.X3DNode::setName(CString("r_scapula"));
HAnimSegment1342.setDEF(CString("hanim_r_scapula"));
Transform& Transform1343 =  Transform();
Transform1343.setTranslation(new float[]{-0.0836,1.4281,-0.0401});
Transform& Transform1344 =  Transform();
//Empty Transform
Shape& Shape1345 =  Shape();
Shape1345.setUSE(CString("HAnimJointShape"));
Transform1344.addChild(&Shape1345);

Transform1343.addChild(&Transform1344);

HAnimSegment1342.addChild(&Transform1343);

Shape& Shape1346 =  Shape();
LineSet& LineSet1347 =  LineSet();
LineSet1347.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1348 =  Coordinate();
Coordinate1348.setPoint(new float[]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
LineSet1347.setCoord(Coordinate1348);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA& ColorRGBA1349 =  ColorRGBA();
ColorRGBA1349.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1347.addChild(&ColorRGBA1349);

Shape1346.setGeometry(&LineSet1347);

HAnimSegment1342.addChild(&Shape1346);

HAnimSite& HAnimSite1350 =  HAnimSite();
HAnimSite1350.X3DNode::setName(CString("r_bideltoid"));
HAnimSite1350.setDEF(CString("hanim_r_bideltoid"));
TouchSensor& TouchSensor1351 =  TouchSensor();
TouchSensor1351.setDescription(CString("HAnimSite r_bideltoid"));
HAnimSite1350.addChild(&TouchSensor1351);

Shape& Shape1352 =  Shape();
Shape1352.setUSE(CString("HAnimSiteShape"));
HAnimSite1350.addChild(&Shape1352);

HAnimSegment1342.addChild(&HAnimSite1350);

HAnimSite& HAnimSite1353 =  HAnimSite();
HAnimSite1353.X3DNode::setName(CString("r_humeral_lateral_epicondyles"));
HAnimSite1353.setDEF(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimSite1353.setTranslation(new float[]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor1354 =  TouchSensor();
TouchSensor1354.setDescription(CString("HAnimSite r_humeral_lateral_epicondyles"));
HAnimSite1353.addChild(&TouchSensor1354);

Shape& Shape1355 =  Shape();
Shape1355.setUSE(CString("HAnimSiteShape"));
HAnimSite1353.addChild(&Shape1355);

HAnimSegment1342.addChild(&HAnimSite1353);

HAnimJoint1341.addChildren(&HAnimSegment1342);

HAnimJoint& HAnimJoint1356 =  HAnimJoint();
HAnimJoint1356.X3DNode::setName(CString("r_shoulder"));
HAnimJoint1356.setDEF(CString("hanim_r_shoulder"));
HAnimJoint1356.setCenter(new float[]{-0.1907,1.4407,-0.0325});
HAnimSegment& HAnimSegment1357 =  HAnimSegment();
HAnimSegment1357.X3DNode::setName(CString("r_upperarm"));
HAnimSegment1357.setDEF(CString("hanim_r_upperarm"));
Transform& Transform1358 =  Transform();
Transform1358.setTranslation(new float[]{-0.1907,1.4407,-0.0325});
Transform& Transform1359 =  Transform();
//Empty Transform
Shape& Shape1360 =  Shape();
Shape1360.setUSE(CString("HAnimJointShape"));
Transform1359.addChild(&Shape1360);

Transform1358.addChild(&Transform1359);

HAnimSegment1357.addChild(&Transform1358);

Shape& Shape1361 =  Shape();
LineSet& LineSet1362 =  LineSet();
LineSet1362.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1363 =  Coordinate();
Coordinate1363.setPoint(new float[]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet1362.setCoord(Coordinate1363);

//from r_shoulder to r_elbow vertices 2
ColorRGBA& ColorRGBA1364 =  ColorRGBA();
ColorRGBA1364.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1362.addChild(&ColorRGBA1364);

Shape1361.setGeometry(&LineSet1362);

HAnimSegment1357.addChild(&Shape1361);

HAnimSite& HAnimSite1365 =  HAnimSite();
HAnimSite1365.X3DNode::setName(CString("r_humeral_medial_epicondyles"));
HAnimSite1365.setDEF(CString("hanim_r_humeral_medial_epicondyles"));
HAnimSite1365.setTranslation(new float[]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor1366 =  TouchSensor();
TouchSensor1366.setDescription(CString("HAnimSite r_humeral_medial_epicondyles"));
HAnimSite1365.addChild(&TouchSensor1366);

Shape& Shape1367 =  Shape();
Shape1367.setUSE(CString("HAnimSiteShape"));
HAnimSite1365.addChild(&Shape1367);

HAnimSegment1357.addChild(&HAnimSite1365);

HAnimSite& HAnimSite1368 =  HAnimSite();
HAnimSite1368.X3DNode::setName(CString("r_olecranon"));
HAnimSite1368.setDEF(CString("hanim_r_olecranon"));
HAnimSite1368.setTranslation(new float[]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor1369 =  TouchSensor();
TouchSensor1369.setDescription(CString("HAnimSite r_olecranon"));
HAnimSite1368.addChild(&TouchSensor1369);

Shape& Shape1370 =  Shape();
Shape1370.setUSE(CString("HAnimSiteShape"));
HAnimSite1368.addChild(&Shape1370);

HAnimSegment1357.addChild(&HAnimSite1368);

HAnimSite& HAnimSite1371 =  HAnimSite();
HAnimSite1371.X3DNode::setName(CString("r_radial_styloid"));
HAnimSite1371.setDEF(CString("hanim_r_radial_styloid"));
HAnimSite1371.setTranslation(new float[]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor1372 =  TouchSensor();
TouchSensor1372.setDescription(CString("HAnimSite r_radial_styloid"));
HAnimSite1371.addChild(&TouchSensor1372);

Shape& Shape1373 =  Shape();
Shape1373.setUSE(CString("HAnimSiteShape"));
HAnimSite1371.addChild(&Shape1373);

HAnimSegment1357.addChild(&HAnimSite1371);

HAnimSite& HAnimSite1374 =  HAnimSite();
HAnimSite1374.X3DNode::setName(CString("r_radiale"));
HAnimSite1374.setDEF(CString("hanim_r_radiale"));
HAnimSite1374.setTranslation(new float[]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor1375 =  TouchSensor();
TouchSensor1375.setDescription(CString("HAnimSite r_radiale"));
HAnimSite1374.addChild(&TouchSensor1375);

Shape& Shape1376 =  Shape();
Shape1376.setUSE(CString("HAnimSiteShape"));
HAnimSite1374.addChild(&Shape1376);

HAnimSegment1357.addChild(&HAnimSite1374);

HAnimJoint1356.addChildren(&HAnimSegment1357);

HAnimJoint& HAnimJoint1377 =  HAnimJoint();
HAnimJoint1377.X3DNode::setName(CString("r_elbow"));
HAnimJoint1377.setDEF(CString("hanim_r_elbow"));
HAnimJoint1377.setCenter(new float[]{-0.1949,1.1388,-0.062});
HAnimSegment& HAnimSegment1378 =  HAnimSegment();
HAnimSegment1378.X3DNode::setName(CString("r_forearm"));
HAnimSegment1378.setDEF(CString("hanim_r_forearm"));
Transform& Transform1379 =  Transform();
Transform1379.setTranslation(new float[]{-0.1949,1.1388,-0.062});
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
Coordinate1384.setPoint(new float[]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet1383.setCoord(Coordinate1384);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA& ColorRGBA1385 =  ColorRGBA();
ColorRGBA1385.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1383.addChild(&ColorRGBA1385);

Shape1382.setGeometry(&LineSet1383);

HAnimSegment1378.addChild(&Shape1382);

HAnimSite& HAnimSite1386 =  HAnimSite();
HAnimSite1386.X3DNode::setName(CString("r_ulnar_styloid"));
HAnimSite1386.setDEF(CString("hanim_r_ulnar_styloid"));
HAnimSite1386.setTranslation(new float[]{-0.2117,0.8562,-0.0584});
TouchSensor& TouchSensor1387 =  TouchSensor();
TouchSensor1387.setDescription(CString("HAnimSite r_ulnar_styloid"));
HAnimSite1386.addChild(&TouchSensor1387);

Shape& Shape1388 =  Shape();
Shape1388.setUSE(CString("HAnimSiteShape"));
HAnimSite1386.addChild(&Shape1388);

HAnimSegment1378.addChild(&HAnimSite1386);

HAnimJoint1377.addChildren(&HAnimSegment1378);

HAnimJoint& HAnimJoint1389 =  HAnimJoint();
HAnimJoint1389.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint1389.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint1389.setCenter(new float[]{-0.1959,0.8694,-0.0521});
HAnimSegment& HAnimSegment1390 =  HAnimSegment();
HAnimSegment1390.X3DNode::setName(CString("r_carpal"));
HAnimSegment1390.setDEF(CString("hanim_r_carpal"));
Transform& Transform1391 =  Transform();
Transform1391.setScale(new float[]{0.2,0.2,0.2});
Transform1391.setTranslation(new float[]{-0.2,0.85,-0.05});
Transform1391.setRotation(new float[]{0,0,1,-3.14});
//Transform right hand
Transform& Transform1392 =  Transform();
Transform1392.setRotation(new float[]{0,1,0,1.57});
//Transform right hand
Shape& Shape1393 =  Shape();
Shape1393.setUSE(CString("HAnimJointShape"));
Transform1392.addChild(&Shape1393);

Transform1391.addChild(&Transform1392);

HAnimSegment1390.addChild(&Transform1391);

Shape& Shape1394 =  Shape();
LineSet& LineSet1395 =  LineSet();
LineSet1395.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1396 =  Coordinate();
Coordinate1396.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826}, 6);
LineSet1395.setCoord(Coordinate1396);

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA& ColorRGBA1397 =  ColorRGBA();
ColorRGBA1397.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1395.addChild(&ColorRGBA1397);

Shape1394.setGeometry(&LineSet1395);

HAnimSegment1390.addChild(&Shape1394);

Shape& Shape1398 =  Shape();
LineSet& LineSet1399 =  LineSet();
LineSet1399.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1400 =  Coordinate();
Coordinate1400.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935}, 6);
LineSet1399.setCoord(Coordinate1400);

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA& ColorRGBA1401 =  ColorRGBA();
ColorRGBA1401.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1399.addChild(&ColorRGBA1401);

Shape1398.setGeometry(&LineSet1399);

HAnimSegment1390.addChild(&Shape1398);

Shape& Shape1402 =  Shape();
LineSet& LineSet1403 =  LineSet();
LineSet1403.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1404 =  Coordinate();
Coordinate1404.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067}, 6);
LineSet1403.setCoord(Coordinate1404);

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA& ColorRGBA1405 =  ColorRGBA();
ColorRGBA1405.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1403.addChild(&ColorRGBA1405);

Shape1402.setGeometry(&LineSet1403);

HAnimSegment1390.addChild(&Shape1402);

Shape& Shape1406 =  Shape();
LineSet& LineSet1407 =  LineSet();
LineSet1407.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1408 =  Coordinate();
Coordinate1408.setPoint(new float[]{-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276}, 6);
LineSet1407.setCoord(Coordinate1408);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA& ColorRGBA1409 =  ColorRGBA();
ColorRGBA1409.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1407.addChild(&ColorRGBA1409);

Shape1406.setGeometry(&LineSet1407);

HAnimSegment1390.addChild(&Shape1406);

HAnimJoint1389.addChildren(&HAnimSegment1390);

HAnimJoint& HAnimJoint1410 =  HAnimJoint();
HAnimJoint1410.X3DNode::setName(CString("r_midcarpal_1"));
HAnimJoint1410.setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint1410.setCenter(new float[]{-0.1811,0.6975,-0.0826});
HAnimSegment& HAnimSegment1411 =  HAnimSegment();
HAnimSegment1411.X3DNode::setName(CString("r_trapezium"));
HAnimSegment1411.setDEF(CString("hanim_r_trapezium"));
Transform& Transform1412 =  Transform();
Transform1412.setTranslation(new float[]{-0.1811,0.6975,-0.0826});
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
Coordinate1417.setPoint(new float[]{-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473}, 6);
LineSet1416.setCoord(Coordinate1417);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1418 =  ColorRGBA();
ColorRGBA1418.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1416.addChild(&ColorRGBA1418);

Shape1415.setGeometry(&LineSet1416);

HAnimSegment1411.addChild(&Shape1415);

HAnimJoint1410.addChildren(&HAnimSegment1411);

HAnimJoint& HAnimJoint1419 =  HAnimJoint();
HAnimJoint1419.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint1419.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint1419.setCenter(new float[]{-0.1899,0.8502,-0.0473});
HAnimSegment& HAnimSegment1420 =  HAnimSegment();
HAnimSegment1420.X3DNode::setName(CString("r_metacarpal_1"));
HAnimSegment1420.setDEF(CString("hanim_r_metacarpal_1"));
Transform& Transform1421 =  Transform();
Transform1421.setTranslation(new float[]{-0.1899,0.8502,-0.0473});
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
Coordinate1426.setPoint(new float[]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
LineSet1425.setCoord(Coordinate1426);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1427 =  ColorRGBA();
ColorRGBA1427.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1425.addChild(&ColorRGBA1427);

Shape1424.setGeometry(&LineSet1425);

HAnimSegment1420.addChild(&Shape1424);

HAnimJoint1419.addChildren(&HAnimSegment1420);

HAnimJoint& HAnimJoint1428 =  HAnimJoint();
HAnimJoint1428.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1428.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint1428.setCenter(new float[]{-0.1874,0.8256,0.0306});
HAnimSegment& HAnimSegment1429 =  HAnimSegment();
HAnimSegment1429.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1429.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform& Transform1430 =  Transform();
Transform1430.setTranslation(new float[]{-0.1874,0.8256,0.0306});
Transform& Transform1431 =  Transform();
//Empty Transform
Shape& Shape1432 =  Shape();
Shape1432.setUSE(CString("HAnimJointShape"));
Transform1431.addChild(&Shape1432);

Transform1430.addChild(&Transform1431);

HAnimSegment1429.addChild(&Transform1430);

Shape& Shape1433 =  Shape();
LineSet& LineSet1434 =  LineSet();
LineSet1434.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1435 =  Coordinate();
Coordinate1435.setPoint(new float[]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
LineSet1434.setCoord(Coordinate1435);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1436 =  ColorRGBA();
ColorRGBA1436.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1434.addChild(&ColorRGBA1436);

Shape1433.setGeometry(&LineSet1434);

HAnimSegment1429.addChild(&Shape1433);

HAnimSite& HAnimSite1437 =  HAnimSite();
HAnimSite1437.X3DNode::setName(CString("r_carpal_distal_phalanx_1_tip"));
HAnimSite1437.setDEF(CString("hanim_r_carpal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor1438 =  TouchSensor();
TouchSensor1438.setDescription(CString("HAnimSite r_carpal_distal_phalanx_1_tip"));
HAnimSite1437.addChild(&TouchSensor1438);

Shape& Shape1439 =  Shape();
Shape1439.setUSE(CString("HAnimSiteShape"));
HAnimSite1437.addChild(&Shape1439);

HAnimSegment1429.addChild(&HAnimSite1437);

HAnimJoint1428.addChildren(&HAnimSegment1429);

HAnimJoint& HAnimJoint1440 =  HAnimJoint();
HAnimJoint1440.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1440.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint1440.setCenter(new float[]{-0.1864,0.819,0.0506});
HAnimJoint1428.addChildren(&HAnimJoint1440);

HAnimJoint1419.addChildren(&HAnimJoint1428);

HAnimJoint1410.addChildren(&HAnimJoint1419);

HAnimJoint1389.addChildren(&HAnimJoint1410);

HAnimJoint& HAnimJoint1441 =  HAnimJoint();
HAnimJoint1441.X3DNode::setName(CString("r_midcarpal_2"));
HAnimJoint1441.setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint1441.setCenter(new float[]{-0.1811,0.6984,-0.0935});
HAnimSegment& HAnimSegment1442 =  HAnimSegment();
HAnimSegment1442.X3DNode::setName(CString("r_trapezoid"));
HAnimSegment1442.setDEF(CString("hanim_r_trapezoid"));
Transform& Transform1443 =  Transform();
Transform1443.setTranslation(new float[]{-0.1811,0.6984,-0.0935});
Transform& Transform1444 =  Transform();
//Empty Transform
Shape& Shape1445 =  Shape();
Shape1445.setUSE(CString("HAnimJointShape"));
Transform1444.addChild(&Shape1445);

Transform1443.addChild(&Transform1444);

HAnimSegment1442.addChild(&Transform1443);

Shape& Shape1446 =  Shape();
LineSet& LineSet1447 =  LineSet();
LineSet1447.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1448 =  Coordinate();
Coordinate1448.setPoint(new float[]{-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218}, 6);
LineSet1447.setCoord(Coordinate1448);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1449 =  ColorRGBA();
ColorRGBA1449.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1447.addChild(&ColorRGBA1449);

Shape1446.setGeometry(&LineSet1447);

HAnimSegment1442.addChild(&Shape1446);

HAnimSite& HAnimSite1450 =  HAnimSite();
HAnimSite1450.X3DNode::setName(CString("r_metacarpal_phalanx_2"));
HAnimSite1450.setDEF(CString("hanim_r_metacarpal_phalanx_2"));
HAnimSite1450.setTranslation(new float[]{-0.1977,0.8169,-0.0177});
TouchSensor& TouchSensor1451 =  TouchSensor();
TouchSensor1451.setDescription(CString("HAnimSite r_metacarpal_phalanx_2"));
HAnimSite1450.addChild(&TouchSensor1451);

Shape& Shape1452 =  Shape();
Shape1452.setUSE(CString("HAnimSiteShape"));
HAnimSite1450.addChild(&Shape1452);

HAnimSegment1442.addChild(&HAnimSite1450);

HAnimJoint1441.addChildren(&HAnimSegment1442);

HAnimJoint& HAnimJoint1453 =  HAnimJoint();
HAnimJoint1453.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint1453.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint1453.setCenter(new float[]{-0.1961,0.8055,-0.0218});
HAnimSegment& HAnimSegment1454 =  HAnimSegment();
HAnimSegment1454.X3DNode::setName(CString("r_metacarpal_2"));
HAnimSegment1454.setDEF(CString("hanim_r_metacarpal_2"));
Transform& Transform1455 =  Transform();
Transform1455.setTranslation(new float[]{-0.1961,0.8055,-0.0218});
Transform& Transform1456 =  Transform();
//Empty Transform
Shape& Shape1457 =  Shape();
Shape1457.setUSE(CString("HAnimJointShape"));
Transform1456.addChild(&Shape1457);

Transform1455.addChild(&Transform1456);

HAnimSegment1454.addChild(&Transform1455);

Shape& Shape1458 =  Shape();
LineSet& LineSet1459 =  LineSet();
LineSet1459.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1460 =  Coordinate();
Coordinate1460.setPoint(new float[]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
LineSet1459.setCoord(Coordinate1460);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1461 =  ColorRGBA();
ColorRGBA1461.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1459.addChild(&ColorRGBA1461);

Shape1458.setGeometry(&LineSet1459);

HAnimSegment1454.addChild(&Shape1458);

HAnimJoint1453.addChildren(&HAnimSegment1454);

HAnimJoint& HAnimJoint1462 =  HAnimJoint();
HAnimJoint1462.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1462.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint1462.setCenter(new float[]{-0.1961,0.7846,-0.0218});
HAnimSegment& HAnimSegment1463 =  HAnimSegment();
HAnimSegment1463.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1463.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform& Transform1464 =  Transform();
Transform1464.setTranslation(new float[]{-0.1961,0.7846,-0.0218});
Transform& Transform1465 =  Transform();
//Empty Transform
Shape& Shape1466 =  Shape();
Shape1466.setUSE(CString("HAnimJointShape"));
Transform1465.addChild(&Shape1466);

Transform1464.addChild(&Transform1465);

HAnimSegment1463.addChild(&Transform1464);

Shape& Shape1467 =  Shape();
LineSet& LineSet1468 =  LineSet();
LineSet1468.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1469 =  Coordinate();
Coordinate1469.setPoint(new float[]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
LineSet1468.setCoord(Coordinate1469);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1470 =  ColorRGBA();
ColorRGBA1470.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1468.addChild(&ColorRGBA1470);

Shape1467.setGeometry(&LineSet1468);

HAnimSegment1463.addChild(&Shape1467);

HAnimJoint1462.addChildren(&HAnimSegment1463);

HAnimJoint& HAnimJoint1471 =  HAnimJoint();
HAnimJoint1471.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1471.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1471.setCenter(new float[]{-0.1954,0.7393,-0.0185});
HAnimSegment& HAnimSegment1472 =  HAnimSegment();
HAnimSegment1472.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1472.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform& Transform1473 =  Transform();
Transform1473.setTranslation(new float[]{-0.1954,0.7393,-0.0185});
Transform& Transform1474 =  Transform();
//Empty Transform
Shape& Shape1475 =  Shape();
Shape1475.setUSE(CString("HAnimJointShape"));
Transform1474.addChild(&Shape1475);

Transform1473.addChild(&Transform1474);

HAnimSegment1472.addChild(&Transform1473);

Shape& Shape1476 =  Shape();
LineSet& LineSet1477 =  LineSet();
LineSet1477.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1478 =  Coordinate();
Coordinate1478.setPoint(new float[]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
LineSet1477.setCoord(Coordinate1478);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1479 =  ColorRGBA();
ColorRGBA1479.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1477.addChild(&ColorRGBA1479);

Shape1476.setGeometry(&LineSet1477);

HAnimSegment1472.addChild(&Shape1476);

HAnimSite& HAnimSite1480 =  HAnimSite();
HAnimSite1480.X3DNode::setName(CString("r_carpal_distal_phalanx_2_tip"));
HAnimSite1480.setDEF(CString("hanim_r_carpal_distal_phalanx_2_tip"));
TouchSensor& TouchSensor1481 =  TouchSensor();
TouchSensor1481.setDescription(CString("HAnimSite r_carpal_distal_phalanx_2_tip"));
HAnimSite1480.addChild(&TouchSensor1481);

Shape& Shape1482 =  Shape();
Shape1482.setUSE(CString("HAnimSiteShape"));
HAnimSite1480.addChild(&Shape1482);

HAnimSegment1472.addChild(&HAnimSite1480);

HAnimSite& HAnimSite1483 =  HAnimSite();
HAnimSite1483.X3DNode::setName(CString("r_dactylion"));
HAnimSite1483.setDEF(CString("hanim_r_dactylion"));
HAnimSite1483.setTranslation(new float[]{-0.1941,0.6772,-0.0423});
TouchSensor& TouchSensor1484 =  TouchSensor();
TouchSensor1484.setDescription(CString("HAnimSite r_dactylion"));
HAnimSite1483.addChild(&TouchSensor1484);

Shape& Shape1485 =  Shape();
Shape1485.setUSE(CString("HAnimSiteShape"));
HAnimSite1483.addChild(&Shape1485);

HAnimSegment1472.addChild(&HAnimSite1483);

HAnimJoint1471.addChildren(&HAnimSegment1472);

HAnimJoint& HAnimJoint1486 =  HAnimJoint();
HAnimJoint1486.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1486.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint1486.setCenter(new float[]{-0.1945,0.7169,-0.0173});
HAnimJoint1471.addChildren(&HAnimJoint1486);

HAnimJoint1462.addChildren(&HAnimJoint1471);

HAnimJoint1453.addChildren(&HAnimJoint1462);

HAnimJoint1441.addChildren(&HAnimJoint1453);

HAnimJoint1389.addChildren(&HAnimJoint1441);

HAnimJoint& HAnimJoint1487 =  HAnimJoint();
HAnimJoint1487.X3DNode::setName(CString("r_midcarpal_3"));
HAnimJoint1487.setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint1487.setCenter(new float[]{-0.1809,0.7,-0.1067});
HAnimSegment& HAnimSegment1488 =  HAnimSegment();
HAnimSegment1488.X3DNode::setName(CString("r_capitate"));
HAnimSegment1488.setDEF(CString("hanim_r_capitate"));
Transform& Transform1489 =  Transform();
Transform1489.setTranslation(new float[]{-0.1809,0.7,-0.1067});
Transform& Transform1490 =  Transform();
//Empty Transform
Shape& Shape1491 =  Shape();
Shape1491.setUSE(CString("HAnimJointShape"));
Transform1490.addChild(&Shape1491);

Transform1489.addChild(&Transform1490);

HAnimSegment1488.addChild(&Transform1489);

Shape& Shape1492 =  Shape();
LineSet& LineSet1493 =  LineSet();
LineSet1493.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1494 =  Coordinate();
Coordinate1494.setPoint(new float[]{-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468}, 6);
LineSet1493.setCoord(Coordinate1494);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1495 =  ColorRGBA();
ColorRGBA1495.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1493.addChild(&ColorRGBA1495);

Shape1492.setGeometry(&LineSet1493);

HAnimSegment1488.addChild(&Shape1492);

HAnimSite& HAnimSite1496 =  HAnimSite();
HAnimSite1496.X3DNode::setName(CString("r_metacarpal_phalanx_3"));
HAnimSite1496.setDEF(CString("hanim_r_metacarpal_phalanx_3"));
TouchSensor& TouchSensor1497 =  TouchSensor();
TouchSensor1497.setDescription(CString("HAnimSite r_metacarpal_phalanx_3"));
HAnimSite1496.addChild(&TouchSensor1497);

Shape& Shape1498 =  Shape();
Shape1498.setUSE(CString("HAnimSiteShape"));
HAnimSite1496.addChild(&Shape1498);

HAnimSegment1488.addChild(&HAnimSite1496);

HAnimJoint1487.addChildren(&HAnimSegment1488);

HAnimJoint& HAnimJoint1499 =  HAnimJoint();
HAnimJoint1499.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint1499.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint1499.setCenter(new float[]{-0.1972,0.806,-0.0468});
HAnimSegment& HAnimSegment1500 =  HAnimSegment();
HAnimSegment1500.X3DNode::setName(CString("r_metacarpal_3"));
HAnimSegment1500.setDEF(CString("hanim_r_metacarpal_3"));
Transform& Transform1501 =  Transform();
Transform1501.setTranslation(new float[]{-0.1972,0.806,-0.0468});
Transform& Transform1502 =  Transform();
//Empty Transform
Shape& Shape1503 =  Shape();
Shape1503.setUSE(CString("HAnimJointShape"));
Transform1502.addChild(&Shape1503);

Transform1501.addChild(&Transform1502);

HAnimSegment1500.addChild(&Transform1501);

Shape& Shape1504 =  Shape();
LineSet& LineSet1505 =  LineSet();
LineSet1505.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1506 =  Coordinate();
Coordinate1506.setPoint(new float[]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
LineSet1505.setCoord(Coordinate1506);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1507 =  ColorRGBA();
ColorRGBA1507.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1505.addChild(&ColorRGBA1507);

Shape1504.setGeometry(&LineSet1505);

HAnimSegment1500.addChild(&Shape1504);

HAnimJoint1499.addChildren(&HAnimSegment1500);

HAnimJoint& HAnimJoint1508 =  HAnimJoint();
HAnimJoint1508.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1508.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint1508.setCenter(new float[]{-0.1972,0.7849,-0.0468});
HAnimSegment& HAnimSegment1509 =  HAnimSegment();
HAnimSegment1509.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1509.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform& Transform1510 =  Transform();
Transform1510.setTranslation(new float[]{-0.1972,0.7849,-0.0468});
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
Coordinate1515.setPoint(new float[]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
LineSet1514.setCoord(Coordinate1515);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1516 =  ColorRGBA();
ColorRGBA1516.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1514.addChild(&ColorRGBA1516);

Shape1513.setGeometry(&LineSet1514);

HAnimSegment1509.addChild(&Shape1513);

HAnimJoint1508.addChildren(&HAnimSegment1509);

HAnimJoint& HAnimJoint1517 =  HAnimJoint();
HAnimJoint1517.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1517.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1517.setCenter(new float[]{-0.195,0.7304,-0.0441});
HAnimSegment& HAnimSegment1518 =  HAnimSegment();
HAnimSegment1518.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1518.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform& Transform1519 =  Transform();
Transform1519.setTranslation(new float[]{-0.195,0.7304,-0.0441});
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
Coordinate1524.setPoint(new float[]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
LineSet1523.setCoord(Coordinate1524);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1525 =  ColorRGBA();
ColorRGBA1525.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1523.addChild(&ColorRGBA1525);

Shape1522.setGeometry(&LineSet1523);

HAnimSegment1518.addChild(&Shape1522);

HAnimSite& HAnimSite1526 =  HAnimSite();
HAnimSite1526.X3DNode::setName(CString("r_carpal_distal_phalanx_3_tip"));
HAnimSite1526.setDEF(CString("hanim_r_carpal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor1527 =  TouchSensor();
TouchSensor1527.setDescription(CString("HAnimSite r_carpal_distal_phalanx_3_tip"));
HAnimSite1526.addChild(&TouchSensor1527);

Shape& Shape1528 =  Shape();
Shape1528.setUSE(CString("HAnimSiteShape"));
HAnimSite1526.addChild(&Shape1528);

HAnimSegment1518.addChild(&HAnimSite1526);

HAnimJoint1517.addChildren(&HAnimSegment1518);

HAnimJoint& HAnimJoint1529 =  HAnimJoint();
HAnimJoint1529.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1529.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint1529.setCenter(new float[]{-0.1939,0.7042,-0.0432});
HAnimJoint1517.addChildren(&HAnimJoint1529);

HAnimJoint1508.addChildren(&HAnimJoint1517);

HAnimJoint1499.addChildren(&HAnimJoint1508);

HAnimJoint1487.addChildren(&HAnimJoint1499);

HAnimJoint1389.addChildren(&HAnimJoint1487);

HAnimJoint& HAnimJoint1530 =  HAnimJoint();
HAnimJoint1530.X3DNode::setName(CString("r_midcarpal_4_5"));
HAnimJoint1530.setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint1530.setCenter(new float[]{-0.1809,0.6973,-0.1276});
HAnimSegment& HAnimSegment1531 =  HAnimSegment();
HAnimSegment1531.X3DNode::setName(CString("r_hamate"));
HAnimSegment1531.setDEF(CString("hanim_r_hamate"));
Transform& Transform1532 =  Transform();
Transform1532.setTranslation(new float[]{-0.1809,0.6973,-0.1276});
Transform& Transform1533 =  Transform();
//Empty Transform
Shape& Shape1534 =  Shape();
Shape1534.setUSE(CString("HAnimJointShape"));
Transform1533.addChild(&Shape1534);

Transform1532.addChild(&Transform1533);

HAnimSegment1531.addChild(&Transform1532);

Shape& Shape1535 =  Shape();
LineSet& LineSet1536 =  LineSet();
LineSet1536.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1537 =  Coordinate();
Coordinate1537.setPoint(new float[]{-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732}, 6);
LineSet1536.setCoord(Coordinate1537);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1538 =  ColorRGBA();
ColorRGBA1538.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1536.addChild(&ColorRGBA1538);

Shape1535.setGeometry(&LineSet1536);

HAnimSegment1531.addChild(&Shape1535);

Shape& Shape1539 =  Shape();
LineSet& LineSet1540 =  LineSet();
LineSet1540.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1541 =  Coordinate();
Coordinate1541.setPoint(new float[]{-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975}, 6);
LineSet1540.setCoord(Coordinate1541);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1542 =  ColorRGBA();
ColorRGBA1542.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1540.addChild(&ColorRGBA1542);

Shape1539.setGeometry(&LineSet1540);

HAnimSegment1531.addChild(&Shape1539);

HAnimSite& HAnimSite1543 =  HAnimSite();
HAnimSite1543.X3DNode::setName(CString("r_metacarpal_phalanx_5"));
HAnimSite1543.setDEF(CString("hanim_r_metacarpal_phalanx_5"));
HAnimSite1543.setTranslation(new float[]{-0.1929,0.789,-0.1064});
TouchSensor& TouchSensor1544 =  TouchSensor();
TouchSensor1544.setDescription(CString("HAnimSite r_metacarpal_phalanx_5"));
HAnimSite1543.addChild(&TouchSensor1544);

Shape& Shape1545 =  Shape();
Shape1545.setUSE(CString("HAnimSiteShape"));
HAnimSite1543.addChild(&Shape1545);

HAnimSegment1531.addChild(&HAnimSite1543);

HAnimJoint1530.addChildren(&HAnimSegment1531);

HAnimJoint& HAnimJoint1546 =  HAnimJoint();
HAnimJoint1546.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint1546.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint1546.setCenter(new float[]{-0.1951,0.8049,-0.0732});
HAnimSegment& HAnimSegment1547 =  HAnimSegment();
HAnimSegment1547.X3DNode::setName(CString("r_metacarpal_4"));
HAnimSegment1547.setDEF(CString("hanim_r_metacarpal_4"));
Transform& Transform1548 =  Transform();
Transform1548.setTranslation(new float[]{-0.1951,0.8049,-0.0732});
Transform& Transform1549 =  Transform();
//Empty Transform
Shape& Shape1550 =  Shape();
Shape1550.setUSE(CString("HAnimJointShape"));
Transform1549.addChild(&Shape1550);

Transform1548.addChild(&Transform1549);

HAnimSegment1547.addChild(&Transform1548);

Shape& Shape1551 =  Shape();
LineSet& LineSet1552 =  LineSet();
LineSet1552.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1553 =  Coordinate();
Coordinate1553.setPoint(new float[]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
LineSet1552.setCoord(Coordinate1553);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1554 =  ColorRGBA();
ColorRGBA1554.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1552.addChild(&ColorRGBA1554);

Shape1551.setGeometry(&LineSet1552);

HAnimSegment1547.addChild(&Shape1551);

HAnimJoint1546.addChildren(&HAnimSegment1547);

HAnimJoint& HAnimJoint1555 =  HAnimJoint();
HAnimJoint1555.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1555.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint1555.setCenter(new float[]{-0.1951,0.7845,-0.0732});
HAnimSegment& HAnimSegment1556 =  HAnimSegment();
HAnimSegment1556.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1556.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform& Transform1557 =  Transform();
Transform1557.setTranslation(new float[]{-0.1951,0.7845,-0.0732});
Transform& Transform1558 =  Transform();
//Empty Transform
Shape& Shape1559 =  Shape();
Shape1559.setUSE(CString("HAnimJointShape"));
Transform1558.addChild(&Shape1559);

Transform1557.addChild(&Transform1558);

HAnimSegment1556.addChild(&Transform1557);

Shape& Shape1560 =  Shape();
LineSet& LineSet1561 =  LineSet();
LineSet1561.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1562 =  Coordinate();
Coordinate1562.setPoint(new float[]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
LineSet1561.setCoord(Coordinate1562);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1563 =  ColorRGBA();
ColorRGBA1563.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1561.addChild(&ColorRGBA1563);

Shape1560.setGeometry(&LineSet1561);

HAnimSegment1556.addChild(&Shape1560);

HAnimJoint1555.addChildren(&HAnimSegment1556);

HAnimJoint& HAnimJoint1564 =  HAnimJoint();
HAnimJoint1564.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1564.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1564.setCenter(new float[]{-0.192,0.7318,-0.0716});
HAnimSegment& HAnimSegment1565 =  HAnimSegment();
HAnimSegment1565.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1565.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform& Transform1566 =  Transform();
Transform1566.setTranslation(new float[]{-0.192,0.7318,-0.0716});
Transform& Transform1567 =  Transform();
//Empty Transform
Shape& Shape1568 =  Shape();
Shape1568.setUSE(CString("HAnimJointShape"));
Transform1567.addChild(&Shape1568);

Transform1566.addChild(&Transform1567);

HAnimSegment1565.addChild(&Transform1566);

Shape& Shape1569 =  Shape();
LineSet& LineSet1570 =  LineSet();
LineSet1570.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1571 =  Coordinate();
Coordinate1571.setPoint(new float[]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
LineSet1570.setCoord(Coordinate1571);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1572 =  ColorRGBA();
ColorRGBA1572.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1570.addChild(&ColorRGBA1572);

Shape1569.setGeometry(&LineSet1570);

HAnimSegment1565.addChild(&Shape1569);

HAnimSite& HAnimSite1573 =  HAnimSite();
HAnimSite1573.X3DNode::setName(CString("r_carpal_distal_phalanx_4_tip"));
HAnimSite1573.setDEF(CString("hanim_r_carpal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor1574 =  TouchSensor();
TouchSensor1574.setDescription(CString("HAnimSite r_carpal_distal_phalanx_4_tip"));
HAnimSite1573.addChild(&TouchSensor1574);

Shape& Shape1575 =  Shape();
Shape1575.setUSE(CString("HAnimSiteShape"));
HAnimSite1573.addChild(&Shape1575);

HAnimSegment1565.addChild(&HAnimSite1573);

HAnimJoint1564.addChildren(&HAnimSegment1565);

HAnimJoint& HAnimJoint1576 =  HAnimJoint();
HAnimJoint1576.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1576.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint1576.setCenter(new float[]{-0.1908,0.7077,-0.0706});
HAnimJoint1564.addChildren(&HAnimJoint1576);

HAnimJoint1555.addChildren(&HAnimJoint1564);

HAnimJoint1546.addChildren(&HAnimJoint1555);

HAnimJoint1530.addChildren(&HAnimJoint1546);

HAnimJoint& HAnimJoint1577 =  HAnimJoint();
HAnimJoint1577.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint1577.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint1577.setCenter(new float[]{-0.1926,0.8096,-0.0975});
HAnimSegment& HAnimSegment1578 =  HAnimSegment();
HAnimSegment1578.X3DNode::setName(CString("r_metacarpal_5"));
HAnimSegment1578.setDEF(CString("hanim_r_metacarpal_5"));
Transform& Transform1579 =  Transform();
Transform1579.setTranslation(new float[]{-0.1926,0.8096,-0.0975});
Transform& Transform1580 =  Transform();
//Empty Transform
Shape& Shape1581 =  Shape();
Shape1581.setUSE(CString("HAnimJointShape"));
Transform1580.addChild(&Shape1581);

Transform1579.addChild(&Transform1580);

HAnimSegment1578.addChild(&Transform1579);

Shape& Shape1582 =  Shape();
LineSet& LineSet1583 =  LineSet();
LineSet1583.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1584 =  Coordinate();
Coordinate1584.setPoint(new float[]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
LineSet1583.setCoord(Coordinate1584);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1585 =  ColorRGBA();
ColorRGBA1585.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1583.addChild(&ColorRGBA1585);

Shape1582.setGeometry(&LineSet1583);

HAnimSegment1578.addChild(&Shape1582);

HAnimJoint1577.addChildren(&HAnimSegment1578);

HAnimJoint& HAnimJoint1586 =  HAnimJoint();
HAnimJoint1586.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1586.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint1586.setCenter(new float[]{-0.1926,0.7896,-0.0975});
HAnimSegment& HAnimSegment1587 =  HAnimSegment();
HAnimSegment1587.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1587.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform& Transform1588 =  Transform();
Transform1588.setTranslation(new float[]{-0.1926,0.7896,-0.0975});
Transform& Transform1589 =  Transform();
//Empty Transform
Shape& Shape1590 =  Shape();
Shape1590.setUSE(CString("HAnimJointShape"));
Transform1589.addChild(&Shape1590);

Transform1588.addChild(&Transform1589);

HAnimSegment1587.addChild(&Transform1588);

Shape& Shape1591 =  Shape();
LineSet& LineSet1592 =  LineSet();
LineSet1592.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1593 =  Coordinate();
Coordinate1593.setPoint(new float[]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
LineSet1592.setCoord(Coordinate1593);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1594 =  ColorRGBA();
ColorRGBA1594.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1592.addChild(&ColorRGBA1594);

Shape1591.setGeometry(&LineSet1592);

HAnimSegment1587.addChild(&Shape1591);

HAnimJoint1586.addChildren(&HAnimSegment1587);

HAnimJoint& HAnimJoint1595 =  HAnimJoint();
HAnimJoint1595.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1595.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1595.setCenter(new float[]{-0.1902,0.7483,-0.0963});
HAnimSegment& HAnimSegment1596 =  HAnimSegment();
HAnimSegment1596.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1596.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform& Transform1597 =  Transform();
Transform1597.setTranslation(new float[]{-0.1902,0.7483,-0.0963});
Transform& Transform1598 =  Transform();
//Empty Transform
Shape& Shape1599 =  Shape();
Shape1599.setUSE(CString("HAnimJointShape"));
Transform1598.addChild(&Shape1599);

Transform1597.addChild(&Transform1598);

HAnimSegment1596.addChild(&Transform1597);

Shape& Shape1600 =  Shape();
LineSet& LineSet1601 =  LineSet();
LineSet1601.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate1602 =  Coordinate();
Coordinate1602.setPoint(new float[]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
LineSet1601.setCoord(Coordinate1602);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1603 =  ColorRGBA();
ColorRGBA1603.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1601.addChild(&ColorRGBA1603);

Shape1600.setGeometry(&LineSet1601);

HAnimSegment1596.addChild(&Shape1600);

HAnimSite& HAnimSite1604 =  HAnimSite();
HAnimSite1604.X3DNode::setName(CString("r_carpal_distal_phalanx_5_tip"));
HAnimSite1604.setDEF(CString("hanim_r_carpal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor1605 =  TouchSensor();
TouchSensor1605.setDescription(CString("HAnimSite r_carpal_distal_phalanx_5_tip"));
HAnimSite1604.addChild(&TouchSensor1605);

Shape& Shape1606 =  Shape();
Shape1606.setUSE(CString("HAnimSiteShape"));
HAnimSite1604.addChild(&Shape1606);

HAnimSegment1596.addChild(&HAnimSite1604);

HAnimJoint1595.addChildren(&HAnimSegment1596);

HAnimJoint& HAnimJoint1607 =  HAnimJoint();
HAnimJoint1607.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1607.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint1607.setCenter(new float[]{-0.1908,0.754,-0.096});
HAnimJoint1595.addChildren(&HAnimJoint1607);

HAnimJoint1586.addChildren(&HAnimJoint1595);

HAnimJoint1577.addChildren(&HAnimJoint1586);

HAnimJoint1530.addChildren(&HAnimJoint1577);

HAnimJoint1389.addChildren(&HAnimJoint1530);

HAnimJoint1377.addChildren(&HAnimJoint1389);

HAnimJoint1356.addChildren(&HAnimJoint1377);

HAnimJoint1341.addChildren(&HAnimJoint1356);

HAnimJoint1332.addChildren(&HAnimJoint1341);

HAnimJoint852.addChildren(&HAnimJoint1332);

HAnimJoint837.addChildren(&HAnimJoint852);

HAnimJoint828.addChildren(&HAnimJoint837);

HAnimJoint819.addChildren(&HAnimJoint828);

HAnimJoint810.addChildren(&HAnimJoint819);

HAnimJoint798.addChildren(&HAnimJoint810);

HAnimJoint777.addChildren(&HAnimJoint798);

HAnimJoint768.addChildren(&HAnimJoint777);

HAnimJoint759.addChildren(&HAnimJoint768);

HAnimJoint744.addChildren(&HAnimJoint759);

HAnimJoint732.addChildren(&HAnimJoint744);

HAnimJoint723.addChildren(&HAnimJoint732);

HAnimJoint714.addChildren(&HAnimJoint723);

HAnimJoint705.addChildren(&HAnimJoint714);

HAnimJoint687.addChildren(&HAnimJoint705);

HAnimJoint678.addChildren(&HAnimJoint687);

HAnimJoint669.addChildren(&HAnimJoint678);

HAnimJoint52.addChildren(&HAnimJoint669);

HAnimHumanoid43.setSkeleton(&HAnimJoint52);

HAnimJoint& HAnimJoint1608 =  HAnimJoint();
HAnimJoint1608.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid43.setJoints(&HAnimJoint1608);

HAnimJoint& HAnimJoint1609 =  HAnimJoint();
HAnimJoint1609.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid43.setJoints(&HAnimJoint1609);

HAnimJoint& HAnimJoint1610 =  HAnimJoint();
HAnimJoint1610.setUSE(CString("hanim_l_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1610);

HAnimJoint& HAnimJoint1611 =  HAnimJoint();
HAnimJoint1611.setUSE(CString("hanim_l_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1611);

HAnimJoint& HAnimJoint1612 =  HAnimJoint();
HAnimJoint1612.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint1612);

HAnimJoint& HAnimJoint1613 =  HAnimJoint();
HAnimJoint1613.setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1613);

HAnimJoint& HAnimJoint1614 =  HAnimJoint();
HAnimJoint1614.setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1614);

HAnimJoint& HAnimJoint1615 =  HAnimJoint();
HAnimJoint1615.setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1615);

HAnimJoint& HAnimJoint1616 =  HAnimJoint();
HAnimJoint1616.setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1616);

HAnimJoint& HAnimJoint1617 =  HAnimJoint();
HAnimJoint1617.setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1617);

HAnimJoint& HAnimJoint1618 =  HAnimJoint();
HAnimJoint1618.setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1618);

HAnimJoint& HAnimJoint1619 =  HAnimJoint();
HAnimJoint1619.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1619);

HAnimJoint& HAnimJoint1620 =  HAnimJoint();
HAnimJoint1620.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1620);

HAnimJoint& HAnimJoint1621 =  HAnimJoint();
HAnimJoint1621.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1621);

HAnimJoint& HAnimJoint1622 =  HAnimJoint();
HAnimJoint1622.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1622);

HAnimJoint& HAnimJoint1623 =  HAnimJoint();
HAnimJoint1623.setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1623);

HAnimJoint& HAnimJoint1624 =  HAnimJoint();
HAnimJoint1624.setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1624);

HAnimJoint& HAnimJoint1625 =  HAnimJoint();
HAnimJoint1625.setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1625);

HAnimJoint& HAnimJoint1626 =  HAnimJoint();
HAnimJoint1626.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1626);

HAnimJoint& HAnimJoint1627 =  HAnimJoint();
HAnimJoint1627.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1627);

HAnimJoint& HAnimJoint1628 =  HAnimJoint();
HAnimJoint1628.setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid43.setJoints(&HAnimJoint1628);

HAnimJoint& HAnimJoint1629 =  HAnimJoint();
HAnimJoint1629.setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1629);

HAnimJoint& HAnimJoint1630 =  HAnimJoint();
HAnimJoint1630.setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1630);

HAnimJoint& HAnimJoint1631 =  HAnimJoint();
HAnimJoint1631.setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1631);

HAnimJoint& HAnimJoint1632 =  HAnimJoint();
HAnimJoint1632.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1632);

HAnimJoint& HAnimJoint1633 =  HAnimJoint();
HAnimJoint1633.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1633);

HAnimJoint& HAnimJoint1634 =  HAnimJoint();
HAnimJoint1634.setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1634);

HAnimJoint& HAnimJoint1635 =  HAnimJoint();
HAnimJoint1635.setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1635);

HAnimJoint& HAnimJoint1636 =  HAnimJoint();
HAnimJoint1636.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1636);

HAnimJoint& HAnimJoint1637 =  HAnimJoint();
HAnimJoint1637.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1637);

HAnimJoint& HAnimJoint1638 =  HAnimJoint();
HAnimJoint1638.setUSE(CString("hanim_r_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1638);

HAnimJoint& HAnimJoint1639 =  HAnimJoint();
HAnimJoint1639.setUSE(CString("hanim_r_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1639);

HAnimJoint& HAnimJoint1640 =  HAnimJoint();
HAnimJoint1640.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint1640);

HAnimJoint& HAnimJoint1641 =  HAnimJoint();
HAnimJoint1641.setUSE(CString("hanim_r_talocalcaneonavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1641);

HAnimJoint& HAnimJoint1642 =  HAnimJoint();
HAnimJoint1642.setUSE(CString("hanim_r_cuneonavicular_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1642);

HAnimJoint& HAnimJoint1643 =  HAnimJoint();
HAnimJoint1643.setUSE(CString("hanim_r_tarsometatarsal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1643);

HAnimJoint& HAnimJoint1644 =  HAnimJoint();
HAnimJoint1644.setUSE(CString("hanim_r_metatarsophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1644);

HAnimJoint& HAnimJoint1645 =  HAnimJoint();
HAnimJoint1645.setUSE(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1645);

HAnimJoint& HAnimJoint1646 =  HAnimJoint();
HAnimJoint1646.setUSE(CString("hanim_r_cuneonavicular_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1646);

HAnimJoint& HAnimJoint1647 =  HAnimJoint();
HAnimJoint1647.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1647);

HAnimJoint& HAnimJoint1648 =  HAnimJoint();
HAnimJoint1648.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1648);

HAnimJoint& HAnimJoint1649 =  HAnimJoint();
HAnimJoint1649.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1649);

HAnimJoint& HAnimJoint1650 =  HAnimJoint();
HAnimJoint1650.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1650);

HAnimJoint& HAnimJoint1651 =  HAnimJoint();
HAnimJoint1651.setUSE(CString("hanim_r_cuneonavicular_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1651);

HAnimJoint& HAnimJoint1652 =  HAnimJoint();
HAnimJoint1652.setUSE(CString("hanim_r_tarsometatarsal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1652);

HAnimJoint& HAnimJoint1653 =  HAnimJoint();
HAnimJoint1653.setUSE(CString("hanim_r_metatarsophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1653);

HAnimJoint& HAnimJoint1654 =  HAnimJoint();
HAnimJoint1654.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1654);

HAnimJoint& HAnimJoint1655 =  HAnimJoint();
HAnimJoint1655.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1655);

HAnimJoint& HAnimJoint1656 =  HAnimJoint();
HAnimJoint1656.setUSE(CString("hanim_r_calcaneocuboid"));
HAnimHumanoid43.setJoints(&HAnimJoint1656);

HAnimJoint& HAnimJoint1657 =  HAnimJoint();
HAnimJoint1657.setUSE(CString("hanim_r_transversetarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1657);

HAnimJoint& HAnimJoint1658 =  HAnimJoint();
HAnimJoint1658.setUSE(CString("hanim_r_tarsometatarsal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1658);

HAnimJoint& HAnimJoint1659 =  HAnimJoint();
HAnimJoint1659.setUSE(CString("hanim_r_metatarsophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1659);

HAnimJoint& HAnimJoint1660 =  HAnimJoint();
HAnimJoint1660.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1660);

HAnimJoint& HAnimJoint1661 =  HAnimJoint();
HAnimJoint1661.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1661);

HAnimJoint& HAnimJoint1662 =  HAnimJoint();
HAnimJoint1662.setUSE(CString("hanim_r_tarsometatarsal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1662);

HAnimJoint& HAnimJoint1663 =  HAnimJoint();
HAnimJoint1663.setUSE(CString("hanim_r_metatarsophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1663);

HAnimJoint& HAnimJoint1664 =  HAnimJoint();
HAnimJoint1664.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1664);

HAnimJoint& HAnimJoint1665 =  HAnimJoint();
HAnimJoint1665.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1665);

HAnimJoint& HAnimJoint1666 =  HAnimJoint();
HAnimJoint1666.setUSE(CString("hanim_vl5"));
HAnimHumanoid43.setJoints(&HAnimJoint1666);

HAnimJoint& HAnimJoint1667 =  HAnimJoint();
HAnimJoint1667.setUSE(CString("hanim_vl4"));
HAnimHumanoid43.setJoints(&HAnimJoint1667);

HAnimJoint& HAnimJoint1668 =  HAnimJoint();
HAnimJoint1668.setUSE(CString("hanim_vl3"));
HAnimHumanoid43.setJoints(&HAnimJoint1668);

HAnimJoint& HAnimJoint1669 =  HAnimJoint();
HAnimJoint1669.setUSE(CString("hanim_vl2"));
HAnimHumanoid43.setJoints(&HAnimJoint1669);

HAnimJoint& HAnimJoint1670 =  HAnimJoint();
HAnimJoint1670.setUSE(CString("hanim_vl1"));
HAnimHumanoid43.setJoints(&HAnimJoint1670);

HAnimJoint& HAnimJoint1671 =  HAnimJoint();
HAnimJoint1671.setUSE(CString("hanim_vt12"));
HAnimHumanoid43.setJoints(&HAnimJoint1671);

HAnimJoint& HAnimJoint1672 =  HAnimJoint();
HAnimJoint1672.setUSE(CString("hanim_vt11"));
HAnimHumanoid43.setJoints(&HAnimJoint1672);

HAnimJoint& HAnimJoint1673 =  HAnimJoint();
HAnimJoint1673.setUSE(CString("hanim_vt10"));
HAnimHumanoid43.setJoints(&HAnimJoint1673);

HAnimJoint& HAnimJoint1674 =  HAnimJoint();
HAnimJoint1674.setUSE(CString("hanim_vt9"));
HAnimHumanoid43.setJoints(&HAnimJoint1674);

HAnimJoint& HAnimJoint1675 =  HAnimJoint();
HAnimJoint1675.setUSE(CString("hanim_vt8"));
HAnimHumanoid43.setJoints(&HAnimJoint1675);

HAnimJoint& HAnimJoint1676 =  HAnimJoint();
HAnimJoint1676.setUSE(CString("hanim_vt7"));
HAnimHumanoid43.setJoints(&HAnimJoint1676);

HAnimJoint& HAnimJoint1677 =  HAnimJoint();
HAnimJoint1677.setUSE(CString("hanim_vt6"));
HAnimHumanoid43.setJoints(&HAnimJoint1677);

HAnimJoint& HAnimJoint1678 =  HAnimJoint();
HAnimJoint1678.setUSE(CString("hanim_vt5"));
HAnimHumanoid43.setJoints(&HAnimJoint1678);

HAnimJoint& HAnimJoint1679 =  HAnimJoint();
HAnimJoint1679.setUSE(CString("hanim_vt4"));
HAnimHumanoid43.setJoints(&HAnimJoint1679);

HAnimJoint& HAnimJoint1680 =  HAnimJoint();
HAnimJoint1680.setUSE(CString("hanim_vt3"));
HAnimHumanoid43.setJoints(&HAnimJoint1680);

HAnimJoint& HAnimJoint1681 =  HAnimJoint();
HAnimJoint1681.setUSE(CString("hanim_vt2"));
HAnimHumanoid43.setJoints(&HAnimJoint1681);

HAnimJoint& HAnimJoint1682 =  HAnimJoint();
HAnimJoint1682.setUSE(CString("hanim_vt1"));
HAnimHumanoid43.setJoints(&HAnimJoint1682);

HAnimJoint& HAnimJoint1683 =  HAnimJoint();
HAnimJoint1683.setUSE(CString("hanim_vc7"));
HAnimHumanoid43.setJoints(&HAnimJoint1683);

HAnimJoint& HAnimJoint1684 =  HAnimJoint();
HAnimJoint1684.setUSE(CString("hanim_vc6"));
HAnimHumanoid43.setJoints(&HAnimJoint1684);

HAnimJoint& HAnimJoint1685 =  HAnimJoint();
HAnimJoint1685.setUSE(CString("hanim_vc5"));
HAnimHumanoid43.setJoints(&HAnimJoint1685);

HAnimJoint& HAnimJoint1686 =  HAnimJoint();
HAnimJoint1686.setUSE(CString("hanim_vc4"));
HAnimHumanoid43.setJoints(&HAnimJoint1686);

HAnimJoint& HAnimJoint1687 =  HAnimJoint();
HAnimJoint1687.setUSE(CString("hanim_vc3"));
HAnimHumanoid43.setJoints(&HAnimJoint1687);

HAnimJoint& HAnimJoint1688 =  HAnimJoint();
HAnimJoint1688.setUSE(CString("hanim_vc2"));
HAnimHumanoid43.setJoints(&HAnimJoint1688);

HAnimJoint& HAnimJoint1689 =  HAnimJoint();
HAnimJoint1689.setUSE(CString("hanim_vc1"));
HAnimHumanoid43.setJoints(&HAnimJoint1689);

HAnimJoint& HAnimJoint1690 =  HAnimJoint();
HAnimJoint1690.setUSE(CString("hanim_skullbase"));
HAnimHumanoid43.setJoints(&HAnimJoint1690);

HAnimJoint& HAnimJoint1691 =  HAnimJoint();
HAnimJoint1691.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1691);

HAnimJoint& HAnimJoint1692 =  HAnimJoint();
HAnimJoint1692.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1692);

HAnimJoint& HAnimJoint1693 =  HAnimJoint();
HAnimJoint1693.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1693);

HAnimJoint& HAnimJoint1694 =  HAnimJoint();
HAnimJoint1694.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1694);

HAnimJoint& HAnimJoint1695 =  HAnimJoint();
HAnimJoint1695.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1695);

HAnimJoint& HAnimJoint1696 =  HAnimJoint();
HAnimJoint1696.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1696);

HAnimJoint& HAnimJoint1697 =  HAnimJoint();
HAnimJoint1697.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid43.setJoints(&HAnimJoint1697);

HAnimJoint& HAnimJoint1698 =  HAnimJoint();
HAnimJoint1698.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1698);

HAnimJoint& HAnimJoint1699 =  HAnimJoint();
HAnimJoint1699.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1699);

HAnimJoint& HAnimJoint1700 =  HAnimJoint();
HAnimJoint1700.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1700);

HAnimJoint& HAnimJoint1701 =  HAnimJoint();
HAnimJoint1701.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1701);

HAnimJoint& HAnimJoint1702 =  HAnimJoint();
HAnimJoint1702.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint1702);

HAnimJoint& HAnimJoint1703 =  HAnimJoint();
HAnimJoint1703.setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1703);

HAnimJoint& HAnimJoint1704 =  HAnimJoint();
HAnimJoint1704.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1704);

HAnimJoint& HAnimJoint1705 =  HAnimJoint();
HAnimJoint1705.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1705);

HAnimJoint& HAnimJoint1706 =  HAnimJoint();
HAnimJoint1706.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1706);

HAnimJoint& HAnimJoint1707 =  HAnimJoint();
HAnimJoint1707.setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1707);

HAnimJoint& HAnimJoint1708 =  HAnimJoint();
HAnimJoint1708.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1708);

HAnimJoint& HAnimJoint1709 =  HAnimJoint();
HAnimJoint1709.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1709);

HAnimJoint& HAnimJoint1710 =  HAnimJoint();
HAnimJoint1710.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1710);

HAnimJoint& HAnimJoint1711 =  HAnimJoint();
HAnimJoint1711.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1711);

HAnimJoint& HAnimJoint1712 =  HAnimJoint();
HAnimJoint1712.setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1712);

HAnimJoint& HAnimJoint1713 =  HAnimJoint();
HAnimJoint1713.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1713);

HAnimJoint& HAnimJoint1714 =  HAnimJoint();
HAnimJoint1714.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1714);

HAnimJoint& HAnimJoint1715 =  HAnimJoint();
HAnimJoint1715.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1715);

HAnimJoint& HAnimJoint1716 =  HAnimJoint();
HAnimJoint1716.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1716);

HAnimJoint& HAnimJoint1717 =  HAnimJoint();
HAnimJoint1717.setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1717);

HAnimJoint& HAnimJoint1718 =  HAnimJoint();
HAnimJoint1718.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1718);

HAnimJoint& HAnimJoint1719 =  HAnimJoint();
HAnimJoint1719.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1719);

HAnimJoint& HAnimJoint1720 =  HAnimJoint();
HAnimJoint1720.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1720);

HAnimJoint& HAnimJoint1721 =  HAnimJoint();
HAnimJoint1721.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1721);

HAnimJoint& HAnimJoint1722 =  HAnimJoint();
HAnimJoint1722.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1722);

HAnimJoint& HAnimJoint1723 =  HAnimJoint();
HAnimJoint1723.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1723);

HAnimJoint& HAnimJoint1724 =  HAnimJoint();
HAnimJoint1724.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1724);

HAnimJoint& HAnimJoint1725 =  HAnimJoint();
HAnimJoint1725.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1725);

HAnimJoint& HAnimJoint1726 =  HAnimJoint();
HAnimJoint1726.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1726);

HAnimJoint& HAnimJoint1727 =  HAnimJoint();
HAnimJoint1727.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1727);

HAnimJoint& HAnimJoint1728 =  HAnimJoint();
HAnimJoint1728.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1728);

HAnimJoint& HAnimJoint1729 =  HAnimJoint();
HAnimJoint1729.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1729);

HAnimJoint& HAnimJoint1730 =  HAnimJoint();
HAnimJoint1730.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint1730);

HAnimJoint& HAnimJoint1731 =  HAnimJoint();
HAnimJoint1731.setUSE(CString("hanim_r_midcarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1731);

HAnimJoint& HAnimJoint1732 =  HAnimJoint();
HAnimJoint1732.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1732);

HAnimJoint& HAnimJoint1733 =  HAnimJoint();
HAnimJoint1733.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1733);

HAnimJoint& HAnimJoint1734 =  HAnimJoint();
HAnimJoint1734.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1734);

HAnimJoint& HAnimJoint1735 =  HAnimJoint();
HAnimJoint1735.setUSE(CString("hanim_r_midcarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1735);

HAnimJoint& HAnimJoint1736 =  HAnimJoint();
HAnimJoint1736.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1736);

HAnimJoint& HAnimJoint1737 =  HAnimJoint();
HAnimJoint1737.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1737);

HAnimJoint& HAnimJoint1738 =  HAnimJoint();
HAnimJoint1738.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1738);

HAnimJoint& HAnimJoint1739 =  HAnimJoint();
HAnimJoint1739.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1739);

HAnimJoint& HAnimJoint1740 =  HAnimJoint();
HAnimJoint1740.setUSE(CString("hanim_r_midcarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1740);

HAnimJoint& HAnimJoint1741 =  HAnimJoint();
HAnimJoint1741.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1741);

HAnimJoint& HAnimJoint1742 =  HAnimJoint();
HAnimJoint1742.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1742);

HAnimJoint& HAnimJoint1743 =  HAnimJoint();
HAnimJoint1743.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1743);

HAnimJoint& HAnimJoint1744 =  HAnimJoint();
HAnimJoint1744.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1744);

HAnimJoint& HAnimJoint1745 =  HAnimJoint();
HAnimJoint1745.setUSE(CString("hanim_r_midcarpal_4_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1745);

HAnimJoint& HAnimJoint1746 =  HAnimJoint();
HAnimJoint1746.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1746);

HAnimJoint& HAnimJoint1747 =  HAnimJoint();
HAnimJoint1747.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1747);

HAnimJoint& HAnimJoint1748 =  HAnimJoint();
HAnimJoint1748.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1748);

HAnimJoint& HAnimJoint1749 =  HAnimJoint();
HAnimJoint1749.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1749);

HAnimJoint& HAnimJoint1750 =  HAnimJoint();
HAnimJoint1750.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1750);

HAnimJoint& HAnimJoint1751 =  HAnimJoint();
HAnimJoint1751.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1751);

HAnimJoint& HAnimJoint1752 =  HAnimJoint();
HAnimJoint1752.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1752);

HAnimJoint& HAnimJoint1753 =  HAnimJoint();
HAnimJoint1753.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1753);

HAnimSegment& HAnimSegment1754 =  HAnimSegment();
HAnimSegment1754.setUSE(CString("hanim_sacrum"));
HAnimHumanoid43.setSegments(&HAnimSegment1754);

HAnimSegment& HAnimSegment1755 =  HAnimSegment();
HAnimSegment1755.setUSE(CString("hanim_pelvis"));
HAnimHumanoid43.setSegments(&HAnimSegment1755);

HAnimSegment& HAnimSegment1756 =  HAnimSegment();
HAnimSegment1756.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1756);

HAnimSegment& HAnimSegment1757 =  HAnimSegment();
HAnimSegment1757.setUSE(CString("hanim_l_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1757);

HAnimSegment& HAnimSegment1758 =  HAnimSegment();
HAnimSegment1758.setUSE(CString("hanim_l_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment1758);

HAnimSegment& HAnimSegment1759 =  HAnimSegment();
HAnimSegment1759.setUSE(CString("hanim_l_navicular"));
HAnimHumanoid43.setSegments(&HAnimSegment1759);

HAnimSegment& HAnimSegment1760 =  HAnimSegment();
HAnimSegment1760.setUSE(CString("hanim_l_cuneiform_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1760);

HAnimSegment& HAnimSegment1761 =  HAnimSegment();
HAnimSegment1761.setUSE(CString("hanim_l_metatarsal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1761);

HAnimSegment& HAnimSegment1762 =  HAnimSegment();
HAnimSegment1762.setUSE(CString("hanim_l_tarsal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1762);

HAnimSegment& HAnimSegment1763 =  HAnimSegment();
HAnimSegment1763.setUSE(CString("hanim_l_cuneiform_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1763);

HAnimSegment& HAnimSegment1764 =  HAnimSegment();
HAnimSegment1764.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1764);

HAnimSegment& HAnimSegment1765 =  HAnimSegment();
HAnimSegment1765.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1765);

HAnimSegment& HAnimSegment1766 =  HAnimSegment();
HAnimSegment1766.setUSE(CString("hanim_l_tarsal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1766);

HAnimSegment& HAnimSegment1767 =  HAnimSegment();
HAnimSegment1767.setUSE(CString("hanim_l_cuneiform_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1767);

HAnimSegment& HAnimSegment1768 =  HAnimSegment();
HAnimSegment1768.setUSE(CString("hanim_l_metatarsal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1768);

HAnimSegment& HAnimSegment1769 =  HAnimSegment();
HAnimSegment1769.setUSE(CString("hanim_l_tarsal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1769);

HAnimSegment& HAnimSegment1770 =  HAnimSegment();
HAnimSegment1770.setUSE(CString("hanim_l_tarsal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1770);

HAnimSegment& HAnimSegment1771 =  HAnimSegment();
HAnimSegment1771.setUSE(CString("hanim_l_calcaneus"));
HAnimHumanoid43.setSegments(&HAnimSegment1771);

HAnimSegment& HAnimSegment1772 =  HAnimSegment();
HAnimSegment1772.setUSE(CString("hanim_l_cuboid"));
HAnimHumanoid43.setSegments(&HAnimSegment1772);

HAnimSegment& HAnimSegment1773 =  HAnimSegment();
HAnimSegment1773.setUSE(CString("hanim_l_metatarsal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1773);

HAnimSegment& HAnimSegment1774 =  HAnimSegment();
HAnimSegment1774.setUSE(CString("hanim_l_tarsal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1774);

HAnimSegment& HAnimSegment1775 =  HAnimSegment();
HAnimSegment1775.setUSE(CString("hanim_l_tarsal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1775);

HAnimSegment& HAnimSegment1776 =  HAnimSegment();
HAnimSegment1776.setUSE(CString("hanim_l_metatarsal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1776);

HAnimSegment& HAnimSegment1777 =  HAnimSegment();
HAnimSegment1777.setUSE(CString("hanim_l_tarsal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1777);

HAnimSegment& HAnimSegment1778 =  HAnimSegment();
HAnimSegment1778.setUSE(CString("hanim_l_tarsal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1778);

HAnimSegment& HAnimSegment1779 =  HAnimSegment();
HAnimSegment1779.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1779);

HAnimSegment& HAnimSegment1780 =  HAnimSegment();
HAnimSegment1780.setUSE(CString("hanim_r_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1780);

HAnimSegment& HAnimSegment1781 =  HAnimSegment();
HAnimSegment1781.setUSE(CString("hanim_r_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment1781);

HAnimSegment& HAnimSegment1782 =  HAnimSegment();
HAnimSegment1782.setUSE(CString("hanim_r_navicular"));
HAnimHumanoid43.setSegments(&HAnimSegment1782);

HAnimSegment& HAnimSegment1783 =  HAnimSegment();
HAnimSegment1783.setUSE(CString("hanim_r_cuneiform_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1783);

HAnimSegment& HAnimSegment1784 =  HAnimSegment();
HAnimSegment1784.setUSE(CString("hanim_r_metatarsal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1784);

HAnimSegment& HAnimSegment1785 =  HAnimSegment();
HAnimSegment1785.setUSE(CString("hanim_r_tarsal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1785);

HAnimSegment& HAnimSegment1786 =  HAnimSegment();
HAnimSegment1786.setUSE(CString("hanim_r_cuneiform_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1786);

HAnimSegment& HAnimSegment1787 =  HAnimSegment();
HAnimSegment1787.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1787);

HAnimSegment& HAnimSegment1788 =  HAnimSegment();
HAnimSegment1788.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1788);

HAnimSegment& HAnimSegment1789 =  HAnimSegment();
HAnimSegment1789.setUSE(CString("hanim_r_tarsal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1789);

HAnimSegment& HAnimSegment1790 =  HAnimSegment();
HAnimSegment1790.setUSE(CString("hanim_r_cuneiform_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1790);

HAnimSegment& HAnimSegment1791 =  HAnimSegment();
HAnimSegment1791.setUSE(CString("hanim_r_metatarsal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1791);

HAnimSegment& HAnimSegment1792 =  HAnimSegment();
HAnimSegment1792.setUSE(CString("hanim_r_tarsal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1792);

HAnimSegment& HAnimSegment1793 =  HAnimSegment();
HAnimSegment1793.setUSE(CString("hanim_r_tarsal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1793);

HAnimSegment& HAnimSegment1794 =  HAnimSegment();
HAnimSegment1794.setUSE(CString("hanim_r_calcaneus"));
HAnimHumanoid43.setSegments(&HAnimSegment1794);

HAnimSegment& HAnimSegment1795 =  HAnimSegment();
HAnimSegment1795.setUSE(CString("hanim_r_cuboid"));
HAnimHumanoid43.setSegments(&HAnimSegment1795);

HAnimSegment& HAnimSegment1796 =  HAnimSegment();
HAnimSegment1796.setUSE(CString("hanim_r_metatarsal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1796);

HAnimSegment& HAnimSegment1797 =  HAnimSegment();
HAnimSegment1797.setUSE(CString("hanim_r_tarsal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1797);

HAnimSegment& HAnimSegment1798 =  HAnimSegment();
HAnimSegment1798.setUSE(CString("hanim_r_tarsal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1798);

HAnimSegment& HAnimSegment1799 =  HAnimSegment();
HAnimSegment1799.setUSE(CString("hanim_r_metatarsal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1799);

HAnimSegment& HAnimSegment1800 =  HAnimSegment();
HAnimSegment1800.setUSE(CString("hanim_r_tarsal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1800);

HAnimSegment& HAnimSegment1801 =  HAnimSegment();
HAnimSegment1801.setUSE(CString("hanim_r_tarsal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1801);

HAnimSegment& HAnimSegment1802 =  HAnimSegment();
HAnimSegment1802.setUSE(CString("hanim_l5"));
HAnimHumanoid43.setSegments(&HAnimSegment1802);

HAnimSegment& HAnimSegment1803 =  HAnimSegment();
HAnimSegment1803.setUSE(CString("hanim_l4"));
HAnimHumanoid43.setSegments(&HAnimSegment1803);

HAnimSegment& HAnimSegment1804 =  HAnimSegment();
HAnimSegment1804.setUSE(CString("hanim_l3"));
HAnimHumanoid43.setSegments(&HAnimSegment1804);

HAnimSegment& HAnimSegment1805 =  HAnimSegment();
HAnimSegment1805.setUSE(CString("hanim_l2"));
HAnimHumanoid43.setSegments(&HAnimSegment1805);

HAnimSegment& HAnimSegment1806 =  HAnimSegment();
HAnimSegment1806.setUSE(CString("hanim_l1"));
HAnimHumanoid43.setSegments(&HAnimSegment1806);

HAnimSegment& HAnimSegment1807 =  HAnimSegment();
HAnimSegment1807.setUSE(CString("hanim_t12"));
HAnimHumanoid43.setSegments(&HAnimSegment1807);

HAnimSegment& HAnimSegment1808 =  HAnimSegment();
HAnimSegment1808.setUSE(CString("hanim_t11"));
HAnimHumanoid43.setSegments(&HAnimSegment1808);

HAnimSegment& HAnimSegment1809 =  HAnimSegment();
HAnimSegment1809.setUSE(CString("hanim_t10"));
HAnimHumanoid43.setSegments(&HAnimSegment1809);

HAnimSegment& HAnimSegment1810 =  HAnimSegment();
HAnimSegment1810.setUSE(CString("hanim_t9"));
HAnimHumanoid43.setSegments(&HAnimSegment1810);

HAnimSegment& HAnimSegment1811 =  HAnimSegment();
HAnimSegment1811.setUSE(CString("hanim_t8"));
HAnimHumanoid43.setSegments(&HAnimSegment1811);

HAnimSegment& HAnimSegment1812 =  HAnimSegment();
HAnimSegment1812.setUSE(CString("hanim_t7"));
HAnimHumanoid43.setSegments(&HAnimSegment1812);

HAnimSegment& HAnimSegment1813 =  HAnimSegment();
HAnimSegment1813.setUSE(CString("hanim_t6"));
HAnimHumanoid43.setSegments(&HAnimSegment1813);

HAnimSegment& HAnimSegment1814 =  HAnimSegment();
HAnimSegment1814.setUSE(CString("hanim_t5"));
HAnimHumanoid43.setSegments(&HAnimSegment1814);

HAnimSegment& HAnimSegment1815 =  HAnimSegment();
HAnimSegment1815.setUSE(CString("hanim_t4"));
HAnimHumanoid43.setSegments(&HAnimSegment1815);

HAnimSegment& HAnimSegment1816 =  HAnimSegment();
HAnimSegment1816.setUSE(CString("hanim_t3"));
HAnimHumanoid43.setSegments(&HAnimSegment1816);

HAnimSegment& HAnimSegment1817 =  HAnimSegment();
HAnimSegment1817.setUSE(CString("hanim_t2"));
HAnimHumanoid43.setSegments(&HAnimSegment1817);

HAnimSegment& HAnimSegment1818 =  HAnimSegment();
HAnimSegment1818.setUSE(CString("hanim_t1"));
HAnimHumanoid43.setSegments(&HAnimSegment1818);

HAnimSegment& HAnimSegment1819 =  HAnimSegment();
HAnimSegment1819.setUSE(CString("hanim_c7"));
HAnimHumanoid43.setSegments(&HAnimSegment1819);

HAnimSegment& HAnimSegment1820 =  HAnimSegment();
HAnimSegment1820.setUSE(CString("hanim_c6"));
HAnimHumanoid43.setSegments(&HAnimSegment1820);

HAnimSegment& HAnimSegment1821 =  HAnimSegment();
HAnimSegment1821.setUSE(CString("hanim_c5"));
HAnimHumanoid43.setSegments(&HAnimSegment1821);

HAnimSegment& HAnimSegment1822 =  HAnimSegment();
HAnimSegment1822.setUSE(CString("hanim_c4"));
HAnimHumanoid43.setSegments(&HAnimSegment1822);

HAnimSegment& HAnimSegment1823 =  HAnimSegment();
HAnimSegment1823.setUSE(CString("hanim_c3"));
HAnimHumanoid43.setSegments(&HAnimSegment1823);

HAnimSegment& HAnimSegment1824 =  HAnimSegment();
HAnimSegment1824.setUSE(CString("hanim_c2"));
HAnimHumanoid43.setSegments(&HAnimSegment1824);

HAnimSegment& HAnimSegment1825 =  HAnimSegment();
HAnimSegment1825.setUSE(CString("hanim_c1"));
HAnimHumanoid43.setSegments(&HAnimSegment1825);

HAnimSegment& HAnimSegment1826 =  HAnimSegment();
HAnimSegment1826.setUSE(CString("hanim_skull"));
HAnimHumanoid43.setSegments(&HAnimSegment1826);

HAnimSegment& HAnimSegment1827 =  HAnimSegment();
HAnimSegment1827.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1827);

HAnimSegment& HAnimSegment1828 =  HAnimSegment();
HAnimSegment1828.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1828);

HAnimSegment& HAnimSegment1829 =  HAnimSegment();
HAnimSegment1829.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1829);

HAnimSegment& HAnimSegment1830 =  HAnimSegment();
HAnimSegment1830.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1830);

HAnimSegment& HAnimSegment1831 =  HAnimSegment();
HAnimSegment1831.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1831);

HAnimSegment& HAnimSegment1832 =  HAnimSegment();
HAnimSegment1832.setUSE(CString("hanim_l_trapezium"));
HAnimHumanoid43.setSegments(&HAnimSegment1832);

HAnimSegment& HAnimSegment1833 =  HAnimSegment();
HAnimSegment1833.setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1833);

HAnimSegment& HAnimSegment1834 =  HAnimSegment();
HAnimSegment1834.setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1834);

HAnimSegment& HAnimSegment1835 =  HAnimSegment();
HAnimSegment1835.setUSE(CString("hanim_l_trapezoid"));
HAnimHumanoid43.setSegments(&HAnimSegment1835);

HAnimSegment& HAnimSegment1836 =  HAnimSegment();
HAnimSegment1836.setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1836);

HAnimSegment& HAnimSegment1837 =  HAnimSegment();
HAnimSegment1837.setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1837);

HAnimSegment& HAnimSegment1838 =  HAnimSegment();
HAnimSegment1838.setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1838);

HAnimSegment& HAnimSegment1839 =  HAnimSegment();
HAnimSegment1839.setUSE(CString("hanim_l_capitate"));
HAnimHumanoid43.setSegments(&HAnimSegment1839);

HAnimSegment& HAnimSegment1840 =  HAnimSegment();
HAnimSegment1840.setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1840);

HAnimSegment& HAnimSegment1841 =  HAnimSegment();
HAnimSegment1841.setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1841);

HAnimSegment& HAnimSegment1842 =  HAnimSegment();
HAnimSegment1842.setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1842);

HAnimSegment& HAnimSegment1843 =  HAnimSegment();
HAnimSegment1843.setUSE(CString("hanim_l_hamate"));
HAnimHumanoid43.setSegments(&HAnimSegment1843);

HAnimSegment& HAnimSegment1844 =  HAnimSegment();
HAnimSegment1844.setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1844);

HAnimSegment& HAnimSegment1845 =  HAnimSegment();
HAnimSegment1845.setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1845);

HAnimSegment& HAnimSegment1846 =  HAnimSegment();
HAnimSegment1846.setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1846);

HAnimSegment& HAnimSegment1847 =  HAnimSegment();
HAnimSegment1847.setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1847);

HAnimSegment& HAnimSegment1848 =  HAnimSegment();
HAnimSegment1848.setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1848);

HAnimSegment& HAnimSegment1849 =  HAnimSegment();
HAnimSegment1849.setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1849);

HAnimSegment& HAnimSegment1850 =  HAnimSegment();
HAnimSegment1850.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1850);

HAnimSegment& HAnimSegment1851 =  HAnimSegment();
HAnimSegment1851.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1851);

HAnimSegment& HAnimSegment1852 =  HAnimSegment();
HAnimSegment1852.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1852);

HAnimSegment& HAnimSegment1853 =  HAnimSegment();
HAnimSegment1853.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1853);

HAnimSegment& HAnimSegment1854 =  HAnimSegment();
HAnimSegment1854.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1854);

HAnimSegment& HAnimSegment1855 =  HAnimSegment();
HAnimSegment1855.setUSE(CString("hanim_r_trapezium"));
HAnimHumanoid43.setSegments(&HAnimSegment1855);

HAnimSegment& HAnimSegment1856 =  HAnimSegment();
HAnimSegment1856.setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1856);

HAnimSegment& HAnimSegment1857 =  HAnimSegment();
HAnimSegment1857.setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1857);

HAnimSegment& HAnimSegment1858 =  HAnimSegment();
HAnimSegment1858.setUSE(CString("hanim_r_trapezoid"));
HAnimHumanoid43.setSegments(&HAnimSegment1858);

HAnimSegment& HAnimSegment1859 =  HAnimSegment();
HAnimSegment1859.setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1859);

HAnimSegment& HAnimSegment1860 =  HAnimSegment();
HAnimSegment1860.setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1860);

HAnimSegment& HAnimSegment1861 =  HAnimSegment();
HAnimSegment1861.setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1861);

HAnimSegment& HAnimSegment1862 =  HAnimSegment();
HAnimSegment1862.setUSE(CString("hanim_r_capitate"));
HAnimHumanoid43.setSegments(&HAnimSegment1862);

HAnimSegment& HAnimSegment1863 =  HAnimSegment();
HAnimSegment1863.setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1863);

HAnimSegment& HAnimSegment1864 =  HAnimSegment();
HAnimSegment1864.setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1864);

HAnimSegment& HAnimSegment1865 =  HAnimSegment();
HAnimSegment1865.setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1865);

HAnimSegment& HAnimSegment1866 =  HAnimSegment();
HAnimSegment1866.setUSE(CString("hanim_r_hamate"));
HAnimHumanoid43.setSegments(&HAnimSegment1866);

HAnimSegment& HAnimSegment1867 =  HAnimSegment();
HAnimSegment1867.setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1867);

HAnimSegment& HAnimSegment1868 =  HAnimSegment();
HAnimSegment1868.setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1868);

HAnimSegment& HAnimSegment1869 =  HAnimSegment();
HAnimSegment1869.setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1869);

HAnimSegment& HAnimSegment1870 =  HAnimSegment();
HAnimSegment1870.setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1870);

HAnimSegment& HAnimSegment1871 =  HAnimSegment();
HAnimSegment1871.setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1871);

HAnimSegment& HAnimSegment1872 =  HAnimSegment();
HAnimSegment1872.setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1872);

HAnimSite& HAnimSite1873 =  HAnimSite();
HAnimSite1873.setUSE(CString("hanim_buttocks_standing_wall_contact_point"));
HAnimHumanoid43.setSites(&HAnimSite1873);

HAnimSite& HAnimSite1874 =  HAnimSite();
HAnimSite1874.setUSE(CString("hanim_crotch"));
HAnimHumanoid43.setSites(&HAnimSite1874);

HAnimSite& HAnimSite1875 =  HAnimSite();
HAnimSite1875.setUSE(CString("hanim_l_asis"));
HAnimHumanoid43.setSites(&HAnimSite1875);

HAnimSite& HAnimSite1876 =  HAnimSite();
HAnimSite1876.setUSE(CString("hanim_l_iliocristale"));
HAnimHumanoid43.setSites(&HAnimSite1876);

HAnimSite& HAnimSite1877 =  HAnimSite();
HAnimSite1877.setUSE(CString("hanim_l_psis"));
HAnimHumanoid43.setSites(&HAnimSite1877);

HAnimSite& HAnimSite1878 =  HAnimSite();
HAnimSite1878.setUSE(CString("hanim_l_trochanterion"));
HAnimHumanoid43.setSites(&HAnimSite1878);

HAnimSite& HAnimSite1879 =  HAnimSite();
HAnimSite1879.setUSE(CString("hanim_r_asis"));
HAnimHumanoid43.setSites(&HAnimSite1879);

HAnimSite& HAnimSite1880 =  HAnimSite();
HAnimSite1880.setUSE(CString("hanim_r_iliocristale"));
HAnimHumanoid43.setSites(&HAnimSite1880);

HAnimSite& HAnimSite1881 =  HAnimSite();
HAnimSite1881.setUSE(CString("hanim_r_psis"));
HAnimHumanoid43.setSites(&HAnimSite1881);

HAnimSite& HAnimSite1882 =  HAnimSite();
HAnimSite1882.setUSE(CString("hanim_r_trochanterion"));
HAnimHumanoid43.setSites(&HAnimSite1882);

HAnimSite& HAnimSite1883 =  HAnimSite();
HAnimSite1883.setUSE(CString("hanim_navel"));
HAnimHumanoid43.setSites(&HAnimSite1883);

HAnimSite& HAnimSite1884 =  HAnimSite();
HAnimSite1884.setUSE(CString("hanim_waist_preferred_anterior"));
HAnimHumanoid43.setSites(&HAnimSite1884);

HAnimSite& HAnimSite1885 =  HAnimSite();
HAnimSite1885.setUSE(CString("hanim_waist_preferred_posterior"));
HAnimHumanoid43.setSites(&HAnimSite1885);

HAnimSite& HAnimSite1886 =  HAnimSite();
HAnimSite1886.setUSE(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1886);

HAnimSite& HAnimSite1887 =  HAnimSite();
HAnimSite1887.setUSE(CString("hanim_l_femoral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1887);

HAnimSite& HAnimSite1888 =  HAnimSite();
HAnimSite1888.setUSE(CString("hanim_l_knee_crease"));
HAnimHumanoid43.setSites(&HAnimSite1888);

HAnimSite& HAnimSite1889 =  HAnimSite();
HAnimSite1889.setUSE(CString("hanim_l_suprapatella"));
HAnimHumanoid43.setSites(&HAnimSite1889);

HAnimSite& HAnimSite1890 =  HAnimSite();
HAnimSite1890.setUSE(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1890);

HAnimSite& HAnimSite1891 =  HAnimSite();
HAnimSite1891.setUSE(CString("hanim_r_femoral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1891);

HAnimSite& HAnimSite1892 =  HAnimSite();
HAnimSite1892.setUSE(CString("hanim_r_knee_crease"));
HAnimHumanoid43.setSites(&HAnimSite1892);

HAnimSite& HAnimSite1893 =  HAnimSite();
HAnimSite1893.setUSE(CString("hanim_r_suprapatella"));
HAnimHumanoid43.setSites(&HAnimSite1893);

HAnimSite& HAnimSite1894 =  HAnimSite();
HAnimSite1894.setUSE(CString("hanim_l_lateral_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite1894);

HAnimSite& HAnimSite1895 =  HAnimSite();
HAnimSite1895.setUSE(CString("hanim_l_medial_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite1895);

HAnimSite& HAnimSite1896 =  HAnimSite();
HAnimSite1896.setUSE(CString("hanim_l_tibiale"));
HAnimHumanoid43.setSites(&HAnimSite1896);

HAnimSite& HAnimSite1897 =  HAnimSite();
HAnimSite1897.setUSE(CString("hanim_l_calcaneus_posterior"));
HAnimHumanoid43.setSites(&HAnimSite1897);

HAnimSite& HAnimSite1898 =  HAnimSite();
HAnimSite1898.setUSE(CString("hanim_l_sphyrion"));
HAnimHumanoid43.setSites(&HAnimSite1898);

HAnimSite& HAnimSite1899 =  HAnimSite();
HAnimSite1899.setUSE(CString("hanim_l_metatarsal_phalanx_1"));
HAnimHumanoid43.setSites(&HAnimSite1899);

HAnimSite& HAnimSite1900 =  HAnimSite();
HAnimSite1900.setUSE(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1900);

HAnimSite& HAnimSite1901 =  HAnimSite();
HAnimSite1901.setUSE(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1901);

HAnimSite& HAnimSite1902 =  HAnimSite();
HAnimSite1902.setUSE(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1902);

HAnimSite& HAnimSite1903 =  HAnimSite();
HAnimSite1903.setUSE(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1903);

HAnimSite& HAnimSite1904 =  HAnimSite();
HAnimSite1904.setUSE(CString("hanim_l_metatarsal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite1904);

HAnimSite& HAnimSite1905 =  HAnimSite();
HAnimSite1905.setUSE(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1905);

HAnimSite& HAnimSite1906 =  HAnimSite();
HAnimSite1906.setUSE(CString("hanim_r_lateral_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite1906);

HAnimSite& HAnimSite1907 =  HAnimSite();
HAnimSite1907.setUSE(CString("hanim_r_medial_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite1907);

HAnimSite& HAnimSite1908 =  HAnimSite();
HAnimSite1908.setUSE(CString("hanim_r_tibiale"));
HAnimHumanoid43.setSites(&HAnimSite1908);

HAnimSite& HAnimSite1909 =  HAnimSite();
HAnimSite1909.setUSE(CString("hanim_r_calcaneus_posterior"));
HAnimHumanoid43.setSites(&HAnimSite1909);

HAnimSite& HAnimSite1910 =  HAnimSite();
HAnimSite1910.setUSE(CString("hanim_r_sphyrion"));
HAnimHumanoid43.setSites(&HAnimSite1910);

HAnimSite& HAnimSite1911 =  HAnimSite();
HAnimSite1911.setUSE(CString("hanim_r_metatarsal_phalanx_1"));
HAnimHumanoid43.setSites(&HAnimSite1911);

HAnimSite& HAnimSite1912 =  HAnimSite();
HAnimSite1912.setUSE(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1912);

HAnimSite& HAnimSite1913 =  HAnimSite();
HAnimSite1913.setUSE(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1913);

HAnimSite& HAnimSite1914 =  HAnimSite();
HAnimSite1914.setUSE(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1914);

HAnimSite& HAnimSite1915 =  HAnimSite();
HAnimSite1915.setUSE(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1915);

HAnimSite& HAnimSite1916 =  HAnimSite();
HAnimSite1916.setUSE(CString("hanim_r_metatarsal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite1916);

HAnimSite& HAnimSite1917 =  HAnimSite();
HAnimSite1917.setUSE(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1917);

HAnimSite& HAnimSite1918 =  HAnimSite();
HAnimSite1918.setUSE(CString("hanim_l_rib10"));
HAnimHumanoid43.setSites(&HAnimSite1918);

HAnimSite& HAnimSite1919 =  HAnimSite();
HAnimSite1919.setUSE(CString("hanim_r_rib10"));
HAnimHumanoid43.setSites(&HAnimSite1919);

HAnimSite& HAnimSite1920 =  HAnimSite();
HAnimSite1920.setUSE(CString("hanim_spine_2_middle_back"));
HAnimHumanoid43.setSites(&HAnimSite1920);

HAnimSite& HAnimSite1921 =  HAnimSite();
HAnimSite1921.setUSE(CString("hanim_substernale"));
HAnimHumanoid43.setSites(&HAnimSite1921);

HAnimSite& HAnimSite1922 =  HAnimSite();
HAnimSite1922.setUSE(CString("hanim_l_thelion"));
HAnimHumanoid43.setSites(&HAnimSite1922);

HAnimSite& HAnimSite1923 =  HAnimSite();
HAnimSite1923.setUSE(CString("hanim_r_thelion"));
HAnimHumanoid43.setSites(&HAnimSite1923);

HAnimSite& HAnimSite1924 =  HAnimSite();
HAnimSite1924.setUSE(CString("hanim_l_chest_midsagittal_plane"));
HAnimHumanoid43.setSites(&HAnimSite1924);

HAnimSite& HAnimSite1925 =  HAnimSite();
HAnimSite1925.setUSE(CString("hanim_mesosternale"));
HAnimHumanoid43.setSites(&HAnimSite1925);

HAnimSite& HAnimSite1926 =  HAnimSite();
HAnimSite1926.setUSE(CString("hanim_r_chest_midsagittal_plane"));
HAnimHumanoid43.setSites(&HAnimSite1926);

HAnimSite& HAnimSite1927 =  HAnimSite();
HAnimSite1927.setUSE(CString("hanim_rear_center_midsagittal_plane"));
HAnimHumanoid43.setSites(&HAnimSite1927);

HAnimSite& HAnimSite1928 =  HAnimSite();
HAnimSite1928.setUSE(CString("hanim_spine_1_middle_back"));
HAnimHumanoid43.setSites(&HAnimSite1928);

HAnimSite& HAnimSite1929 =  HAnimSite();
HAnimSite1929.setUSE(CString("hanim_cervicale"));
HAnimHumanoid43.setSites(&HAnimSite1929);

HAnimSite& HAnimSite1930 =  HAnimSite();
HAnimSite1930.setUSE(CString("hanim_suprasternale"));
HAnimHumanoid43.setSites(&HAnimSite1930);

HAnimSite& HAnimSite1931 =  HAnimSite();
HAnimSite1931.setUSE(CString("hanim_l_neck_base"));
HAnimHumanoid43.setSites(&HAnimSite1931);

HAnimSite& HAnimSite1932 =  HAnimSite();
HAnimSite1932.setUSE(CString("hanim_r_neck_base"));
HAnimHumanoid43.setSites(&HAnimSite1932);

HAnimSite& HAnimSite1933 =  HAnimSite();
HAnimSite1933.setUSE(CString("hanim_l_acromion"));
HAnimHumanoid43.setSites(&HAnimSite1933);

HAnimSite& HAnimSite1934 =  HAnimSite();
HAnimSite1934.setUSE(CString("hanim_l_axilla_distal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1934);

HAnimSite& HAnimSite1935 =  HAnimSite();
HAnimSite1935.setUSE(CString("hanim_l_axilla_posterior_folds"));
HAnimHumanoid43.setSites(&HAnimSite1935);

HAnimSite& HAnimSite1936 =  HAnimSite();
HAnimSite1936.setUSE(CString("hanim_l_axilla_proximal"));
HAnimHumanoid43.setSites(&HAnimSite1936);

HAnimSite& HAnimSite1937 =  HAnimSite();
HAnimSite1937.setUSE(CString("hanim_l_clavicale"));
HAnimHumanoid43.setSites(&HAnimSite1937);

HAnimSite& HAnimSite1938 =  HAnimSite();
HAnimSite1938.setUSE(CString("hanim_r_acromion"));
HAnimHumanoid43.setSites(&HAnimSite1938);

HAnimSite& HAnimSite1939 =  HAnimSite();
HAnimSite1939.setUSE(CString("hanim_r_axilla_distal_pt"));
HAnimHumanoid43.setSites(&HAnimSite1939);

HAnimSite& HAnimSite1940 =  HAnimSite();
HAnimSite1940.setUSE(CString("hanim_r_axilla_posterior_folds"));
HAnimHumanoid43.setSites(&HAnimSite1940);

HAnimSite& HAnimSite1941 =  HAnimSite();
HAnimSite1941.setUSE(CString("hanim_r_axilla_proximal"));
HAnimHumanoid43.setSites(&HAnimSite1941);

HAnimSite& HAnimSite1942 =  HAnimSite();
HAnimSite1942.setUSE(CString("hanim_r_clavicale"));
HAnimHumanoid43.setSites(&HAnimSite1942);

HAnimSite& HAnimSite1943 =  HAnimSite();
HAnimSite1943.setUSE(CString("hanim_adams_apple"));
HAnimHumanoid43.setSites(&HAnimSite1943);

HAnimSite& HAnimSite1944 =  HAnimSite();
HAnimSite1944.setUSE(CString("hanim_glabella"));
HAnimHumanoid43.setSites(&HAnimSite1944);

HAnimSite& HAnimSite1945 =  HAnimSite();
HAnimSite1945.setUSE(CString("hanim_l_ectocanthus"));
HAnimHumanoid43.setSites(&HAnimSite1945);

HAnimSite& HAnimSite1946 =  HAnimSite();
HAnimSite1946.setUSE(CString("hanim_l_infraorbitale"));
HAnimHumanoid43.setSites(&HAnimSite1946);

HAnimSite& HAnimSite1947 =  HAnimSite();
HAnimSite1947.setUSE(CString("hanim_l_tragion"));
HAnimHumanoid43.setSites(&HAnimSite1947);

HAnimSite& HAnimSite1948 =  HAnimSite();
HAnimSite1948.setUSE(CString("hanim_nuchale"));
HAnimHumanoid43.setSites(&HAnimSite1948);

HAnimSite& HAnimSite1949 =  HAnimSite();
HAnimSite1949.setUSE(CString("hanim_opisthocranion"));
HAnimHumanoid43.setSites(&HAnimSite1949);

HAnimSite& HAnimSite1950 =  HAnimSite();
HAnimSite1950.setUSE(CString("hanim_r_ectocanthus"));
HAnimHumanoid43.setSites(&HAnimSite1950);

HAnimSite& HAnimSite1951 =  HAnimSite();
HAnimSite1951.setUSE(CString("hanim_r_infraorbitale"));
HAnimHumanoid43.setSites(&HAnimSite1951);

HAnimSite& HAnimSite1952 =  HAnimSite();
HAnimSite1952.setUSE(CString("hanim_r_tragion"));
HAnimHumanoid43.setSites(&HAnimSite1952);

HAnimSite& HAnimSite1953 =  HAnimSite();
HAnimSite1953.setUSE(CString("hanim_sellion"));
HAnimHumanoid43.setSites(&HAnimSite1953);

HAnimSite& HAnimSite1954 =  HAnimSite();
HAnimSite1954.setUSE(CString("hanim_skull_vertex"));
HAnimHumanoid43.setSites(&HAnimSite1954);

HAnimSite& HAnimSite1955 =  HAnimSite();
HAnimSite1955.setUSE(CString("hanim_l_gonion"));
HAnimHumanoid43.setSites(&HAnimSite1955);

HAnimSite& HAnimSite1956 =  HAnimSite();
HAnimSite1956.setUSE(CString("hanim_menton"));
HAnimHumanoid43.setSites(&HAnimSite1956);

HAnimSite& HAnimSite1957 =  HAnimSite();
HAnimSite1957.setUSE(CString("hanim_r_gonion"));
HAnimHumanoid43.setSites(&HAnimSite1957);

HAnimSite& HAnimSite1958 =  HAnimSite();
HAnimSite1958.setUSE(CString("hanim_supramenton"));
HAnimHumanoid43.setSites(&HAnimSite1958);

HAnimSite& HAnimSite1959 =  HAnimSite();
HAnimSite1959.setUSE(CString("hanim_l_bideltoid"));
HAnimHumanoid43.setSites(&HAnimSite1959);

HAnimSite& HAnimSite1960 =  HAnimSite();
HAnimSite1960.setUSE(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1960);

HAnimSite& HAnimSite1961 =  HAnimSite();
HAnimSite1961.setUSE(CString("hanim_l_humeral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1961);

HAnimSite& HAnimSite1962 =  HAnimSite();
HAnimSite1962.setUSE(CString("hanim_l_olecranon"));
HAnimHumanoid43.setSites(&HAnimSite1962);

HAnimSite& HAnimSite1963 =  HAnimSite();
HAnimSite1963.setUSE(CString("hanim_l_radial_styloid"));
HAnimHumanoid43.setSites(&HAnimSite1963);

HAnimSite& HAnimSite1964 =  HAnimSite();
HAnimSite1964.setUSE(CString("hanim_l_radiale"));
HAnimHumanoid43.setSites(&HAnimSite1964);

HAnimSite& HAnimSite1965 =  HAnimSite();
HAnimSite1965.setUSE(CString("hanim_l_ulnar_styloid"));
HAnimHumanoid43.setSites(&HAnimSite1965);

HAnimSite& HAnimSite1966 =  HAnimSite();
HAnimSite1966.setUSE(CString("hanim_l_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1966);

HAnimSite& HAnimSite1967 =  HAnimSite();
HAnimSite1967.setUSE(CString("hanim_l_metacarpal_phalanx_2"));
HAnimHumanoid43.setSites(&HAnimSite1967);

HAnimSite& HAnimSite1968 =  HAnimSite();
HAnimSite1968.setUSE(CString("hanim_l_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1968);

HAnimSite& HAnimSite1969 =  HAnimSite();
HAnimSite1969.setUSE(CString("hanim_l_dactylion"));
HAnimHumanoid43.setSites(&HAnimSite1969);

HAnimSite& HAnimSite1970 =  HAnimSite();
HAnimSite1970.setUSE(CString("hanim_l_metacarpal_phalanx_3"));
HAnimHumanoid43.setSites(&HAnimSite1970);

HAnimSite& HAnimSite1971 =  HAnimSite();
HAnimSite1971.setUSE(CString("hanim_l_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1971);

HAnimSite& HAnimSite1972 =  HAnimSite();
HAnimSite1972.setUSE(CString("hanim_l_metacarpal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite1972);

HAnimSite& HAnimSite1973 =  HAnimSite();
HAnimSite1973.setUSE(CString("hanim_l_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1973);

HAnimSite& HAnimSite1974 =  HAnimSite();
HAnimSite1974.setUSE(CString("hanim_l_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1974);

HAnimSite& HAnimSite1975 =  HAnimSite();
HAnimSite1975.setUSE(CString("hanim_r_bideltoid"));
HAnimHumanoid43.setSites(&HAnimSite1975);

HAnimSite& HAnimSite1976 =  HAnimSite();
HAnimSite1976.setUSE(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1976);

HAnimSite& HAnimSite1977 =  HAnimSite();
HAnimSite1977.setUSE(CString("hanim_r_humeral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite1977);

HAnimSite& HAnimSite1978 =  HAnimSite();
HAnimSite1978.setUSE(CString("hanim_r_olecranon"));
HAnimHumanoid43.setSites(&HAnimSite1978);

HAnimSite& HAnimSite1979 =  HAnimSite();
HAnimSite1979.setUSE(CString("hanim_r_radial_styloid"));
HAnimHumanoid43.setSites(&HAnimSite1979);

HAnimSite& HAnimSite1980 =  HAnimSite();
HAnimSite1980.setUSE(CString("hanim_r_radiale"));
HAnimHumanoid43.setSites(&HAnimSite1980);

HAnimSite& HAnimSite1981 =  HAnimSite();
HAnimSite1981.setUSE(CString("hanim_r_ulnar_styloid"));
HAnimHumanoid43.setSites(&HAnimSite1981);

HAnimSite& HAnimSite1982 =  HAnimSite();
HAnimSite1982.setUSE(CString("hanim_r_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite1982);

HAnimSite& HAnimSite1983 =  HAnimSite();
HAnimSite1983.setUSE(CString("hanim_r_metacarpal_phalanx_2"));
HAnimHumanoid43.setSites(&HAnimSite1983);

HAnimSite& HAnimSite1984 =  HAnimSite();
HAnimSite1984.setUSE(CString("hanim_r_carpal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite1984);

HAnimSite& HAnimSite1985 =  HAnimSite();
HAnimSite1985.setUSE(CString("hanim_r_dactylion"));
HAnimHumanoid43.setSites(&HAnimSite1985);

HAnimSite& HAnimSite1986 =  HAnimSite();
HAnimSite1986.setUSE(CString("hanim_r_metacarpal_phalanx_3"));
HAnimHumanoid43.setSites(&HAnimSite1986);

HAnimSite& HAnimSite1987 =  HAnimSite();
HAnimSite1987.setUSE(CString("hanim_r_carpal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite1987);

HAnimSite& HAnimSite1988 =  HAnimSite();
HAnimSite1988.setUSE(CString("hanim_r_metacarpal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite1988);

HAnimSite& HAnimSite1989 =  HAnimSite();
HAnimSite1989.setUSE(CString("hanim_r_carpal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite1989);

HAnimSite& HAnimSite1990 =  HAnimSite();
HAnimSite1990.setUSE(CString("hanim_r_carpal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite1990);

Scene11.addChild(&HAnimHumanoid43);

X3D0.setScene(&Scene11);

}
