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
IndexedLineSet14.setColorIndex(new int[3]{0,1,2}, 3);
IndexedLineSet14.setColorPerVertex(False);
IndexedLineSet14.setCoordIndex(new int32_t[9]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate15 =  Coordinate();
Coordinate15.setPoint(new float[12]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1}, 12);
IndexedLineSet14.setCoord(&Coordinate15);

CColor& Color16 =  CColor();
Color16.setColor(new float[9]{1,0,0,0,0.6,0,0,0,1}, 9);
IndexedLineSet14.setColor(&Color16);

Shape13.setGeometry(&IndexedLineSet14);

Transform12.addChild(&Shape13);

Scene11.addChild(&Transform12);

Group& Group17 =  Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform& Transform18 =  Transform();
Transform& Transform19 =  Transform();
Transform19.setTranslation(new float[3]{0,2,0});
Shape& Shape20 =  Shape();
Shape20.setDEF(CString("HAnimRootShape"));
Sphere& Sphere21 =  Sphere();
Sphere21.setRadius(0.02);
Shape20.setGeometry(&Sphere21);

Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDEF(CString("HAnimRootMaterial"));
Material23.setDiffuseColor(new float[3]{0.8,0,0});
Material23.setTransparency(0.3);
Appearance22.addChild(&Material23);

Shape20.addChild(&Appearance22);

Transform19.addChild(&Shape20);

Transform18.addChild(&Transform19);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[3]{0,2.1,0});
Shape& Shape25 =  Shape();
Shape25.setDEF(CString("HAnimJointShape"));
Sphere& Sphere26 =  Sphere();
Sphere26.setRadius(0.02);
Shape25.setGeometry(&Sphere26);

Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDEF(CString("HAnimJointMaterial"));
Material28.setDiffuseColor(new float[3]{0,0,0.8});
Material28.setTransparency(0.3);
Appearance27.addChild(&Material28);

Shape25.addChild(&Appearance27);

Transform24.addChild(&Shape25);

Transform18.addChild(&Transform24);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[3]{0,2.05,0});
Shape& Shape30 =  Shape();
Shape30.setDEF(CString("HAnimSegmentLine"));
LineSet& LineSet31 =  LineSet();
LineSet31.setVertexCount(new int32_t[1]{2}, 1);
ColorRGBA& ColorRGBA32 =  ColorRGBA();
ColorRGBA32.setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA32.setColor(new float[8]{1,1,0,1,1,1,0,0.1}, 8);
LineSet31.addChild(&ColorRGBA32);

Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setPoint(new float[6]{-0.05,0,0,0.05,0,0}, 6);
LineSet31.setCoord(Coordinate33);

Shape30.setGeometry(&LineSet31);

Transform29.addChild(&Shape30);

Transform18.addChild(&Transform29);

Transform& Transform34 =  Transform();
Transform34.setTranslation(new float[3]{0,2.1,0});
Shape& Shape35 =  Shape();
Shape35.setDEF(CString("HAnimSiteShape"));
IndexedFaceSet& IndexedFaceSet36 =  IndexedFaceSet();
IndexedFaceSet36.setDEF(CString("DiamondIFS"));
IndexedFaceSet36.setCreaseAngle(0.5);
IndexedFaceSet36.setSolid(False);
IndexedFaceSet36.setCoordIndex(new int32_t[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
ColorRGBA& ColorRGBA37 =  ColorRGBA();
ColorRGBA37.setDEF(CString("HAnimSiteColorRGBA"));
ColorRGBA37.setColor(new float[24]{1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1}, 24);
IndexedFaceSet36.addChild(&ColorRGBA37);

Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0}, 18);
IndexedFaceSet36.setCoord(&Coordinate38);

Shape35.setGeometry(&IndexedFaceSet36);

Appearance& Appearance39 =  Appearance();
Material& Material40 =  Material();
Material40.setDiffuseColor(new float[3]{1,1,0});
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
HAnimHumanoid43.setInfo(new CString[1]{CString("humanoidVersion=2.0")}, 1);
HAnimHumanoid43.setVersion(CString("2.0"));
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
Shape& Shape44 =  Shape();
Shape44.setDEF(CString("SkinShape"));
IndexedFaceSet& IndexedFaceSet45 =  IndexedFaceSet();
IndexedFaceSet45.setCoordIndex(new int32_t[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
IndexedFaceSet45.setCreaseAngle(3.1);
Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setDEF(CString("TheSkinCoord"));
Coordinate46.setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
IndexedFaceSet45.setCoord(&Coordinate46);

CColor& Color47 =  CColor();
Color47.setColor(new float[2079]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1}, 2079);
IndexedFaceSet45.setColor(&Color47);

Shape44.setGeometry(&IndexedFaceSet45);

Appearance& Appearance48 =  Appearance();
Appearance48.setDEF(CString("SkinAppearance"));
ImageTexture& ImageTexture49 =  ImageTexture();
ImageTexture49.setDEF(CString("zBlueSpiralBkg2"));
ImageTexture49.setDescription(CString("Blue Spiral Pattern"));
ImageTexture49.setUrl(new CString[3]{CString("./data/zBlueSpiralBkg2.gif"), CString("zBlueSpiralBkg2.gif"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 3);
Appearance48.addChild(&ImageTexture49);

Material& Material50 =  Material();
Material50.setDEF(CString("SkinMaterial"));
Material50.setAmbientIntensity(0.6);
Material50.setDiffuseColor(new float[3]{1,1,1});
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
HAnimJoint52.setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint52.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint52.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment53 =  HAnimSegment();
HAnimSegment53.X3DNode::setName(CString("sacrum"));
HAnimSegment53.setDEF(CString("hanim_sacrum"));
Transform& Transform54 =  Transform();
Transform54.setTranslation(new float[3]{0,0.824,0.0277});
Transform& Transform55 =  Transform();
//Empty Transform
Shape& Shape56 =  Shape();
Shape56.setUSE(CString("HAnimJointShape"));
Transform55.addChild(&Shape56);

Transform54.addChild(&Transform55);

HAnimSegment53.addChild(&Transform54);

Shape& Shape57 =  Shape();
LineSet& LineSet58 =  LineSet();
LineSet58.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate59 =  Coordinate();
Coordinate59.setPoint(new float[6]{0,0.824,0.0277,0,0.9149,0.0016}, 6);
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
HAnimSite64.setTranslation(new float[3]{0.0034,0.8266,0.0257});
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
HAnimSite67.setTranslation(new float[3]{0.0925,0.9983,0.1052});
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
HAnimSite70.setTranslation(new float[3]{0.1612,1.0537,0.0008});
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
HAnimSite73.setTranslation(new float[3]{0.0774,1.019,-0.1151});
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
HAnimSite76.setTranslation(new float[3]{0.1677,0.8336,0.0303});
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
HAnimSite79.setTranslation(new float[3]{-0.0887,1.0021,0.1112});
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
HAnimSite82.setTranslation(new float[3]{-0.1525,1.0628,0.0035});
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
HAnimSite85.setTranslation(new float[3]{-0.0716,1.019,-0.1138});
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
HAnimSite88.setTranslation(new float[3]{-0.1689,0.8419,0.0352});
TouchSensor& TouchSensor89 =  TouchSensor();
TouchSensor89.setDescription(CString("HAnimSite r_trochanterion"));
HAnimSite88.addChild(&TouchSensor89);

Shape& Shape90 =  Shape();
Shape90.setUSE(CString("HAnimSiteShape"));
HAnimSite88.addChild(&Shape90);

HAnimSegment53.addChild(&HAnimSite88);

Shape& Shape91 =  Shape();
LineSet& LineSet92 =  LineSet();
LineSet92.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate93 =  Coordinate();
Coordinate93.setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet92.setCoord(Coordinate93);

//from humanoid_root to vl5 vertices 2
ColorRGBA& ColorRGBA94 =  ColorRGBA();
ColorRGBA94.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet92.addChild(&ColorRGBA94);

Shape91.setGeometry(&LineSet92);

HAnimSegment53.addChild(&Shape91);

HAnimSite& HAnimSite95 =  HAnimSite();
HAnimSite95.X3DNode::setName(CString("adams_apple"));
HAnimSite95.setDEF(CString("hanim_adams_apple"));
TouchSensor& TouchSensor96 =  TouchSensor();
TouchSensor96.setDescription(CString("HAnimSite adams_apple"));
HAnimSite95.addChild(&TouchSensor96);

Shape& Shape97 =  Shape();
Shape97.setUSE(CString("HAnimSiteShape"));
HAnimSite95.addChild(&Shape97);

HAnimSegment53.addChild(&HAnimSite95);

HAnimSite& HAnimSite98 =  HAnimSite();
HAnimSite98.X3DNode::setName(CString("cervicale"));
HAnimSite98.setDEF(CString("hanim_cervicale"));
HAnimSite98.setTranslation(new float[3]{0.0064,1.52,-0.0815});
TouchSensor& TouchSensor99 =  TouchSensor();
TouchSensor99.setDescription(CString("HAnimSite cervicale"));
HAnimSite98.addChild(&TouchSensor99);

Shape& Shape100 =  Shape();
Shape100.setUSE(CString("HAnimSiteShape"));
HAnimSite98.addChild(&Shape100);

HAnimSegment53.addChild(&HAnimSite98);

HAnimSite& HAnimSite101 =  HAnimSite();
HAnimSite101.X3DNode::setName(CString("l_acromion"));
HAnimSite101.setDEF(CString("hanim_l_acromion"));
HAnimSite101.setTranslation(new float[3]{0.2032,1.476,-0.049});
TouchSensor& TouchSensor102 =  TouchSensor();
TouchSensor102.setDescription(CString("HAnimSite l_acromion"));
HAnimSite101.addChild(&TouchSensor102);

Shape& Shape103 =  Shape();
Shape103.setUSE(CString("HAnimSiteShape"));
HAnimSite101.addChild(&Shape103);

HAnimSegment53.addChild(&HAnimSite101);

HAnimSite& HAnimSite104 =  HAnimSite();
HAnimSite104.X3DNode::setName(CString("l_axilla_distal_pt"));
HAnimSite104.setDEF(CString("hanim_l_axilla_distal_pt"));
HAnimSite104.setTranslation(new float[3]{0.1706,1.4072,-0.0875});
TouchSensor& TouchSensor105 =  TouchSensor();
TouchSensor105.setDescription(CString("HAnimSite l_axilla_distal_pt"));
HAnimSite104.addChild(&TouchSensor105);

Shape& Shape106 =  Shape();
Shape106.setUSE(CString("HAnimSiteShape"));
HAnimSite104.addChild(&Shape106);

HAnimSegment53.addChild(&HAnimSite104);

HAnimSite& HAnimSite107 =  HAnimSite();
HAnimSite107.X3DNode::setName(CString("l_axilla_posterior_folds"));
HAnimSite107.setDEF(CString("hanim_l_axilla_posterior_folds"));
TouchSensor& TouchSensor108 =  TouchSensor();
TouchSensor108.setDescription(CString("HAnimSite l_axilla_posterior_folds"));
HAnimSite107.addChild(&TouchSensor108);

Shape& Shape109 =  Shape();
Shape109.setUSE(CString("HAnimSiteShape"));
HAnimSite107.addChild(&Shape109);

HAnimSegment53.addChild(&HAnimSite107);

HAnimSite& HAnimSite110 =  HAnimSite();
HAnimSite110.X3DNode::setName(CString("l_axilla_proximal"));
HAnimSite110.setDEF(CString("hanim_l_axilla_proximal"));
HAnimSite110.setTranslation(new float[3]{0.1777,1.4065,-0.0075});
TouchSensor& TouchSensor111 =  TouchSensor();
TouchSensor111.setDescription(CString("HAnimSite l_axilla_proximal"));
HAnimSite110.addChild(&TouchSensor111);

Shape& Shape112 =  Shape();
Shape112.setUSE(CString("HAnimSiteShape"));
HAnimSite110.addChild(&Shape112);

HAnimSegment53.addChild(&HAnimSite110);

HAnimSite& HAnimSite113 =  HAnimSite();
HAnimSite113.X3DNode::setName(CString("l_chest_midsagittal_plane"));
HAnimSite113.setDEF(CString("hanim_l_chest_midsagittal_plane"));
TouchSensor& TouchSensor114 =  TouchSensor();
TouchSensor114.setDescription(CString("HAnimSite l_chest_midsagittal_plane"));
HAnimSite113.addChild(&TouchSensor114);

Shape& Shape115 =  Shape();
Shape115.setUSE(CString("HAnimSiteShape"));
HAnimSite113.addChild(&Shape115);

HAnimSegment53.addChild(&HAnimSite113);

HAnimSite& HAnimSite116 =  HAnimSite();
HAnimSite116.X3DNode::setName(CString("l_clavicale"));
HAnimSite116.setDEF(CString("hanim_l_clavicale"));
HAnimSite116.setTranslation(new float[3]{0.0271,1.4943,0.0394});
TouchSensor& TouchSensor117 =  TouchSensor();
TouchSensor117.setDescription(CString("HAnimSite l_clavicale"));
HAnimSite116.addChild(&TouchSensor117);

Shape& Shape118 =  Shape();
Shape118.setUSE(CString("HAnimSiteShape"));
HAnimSite116.addChild(&Shape118);

HAnimSegment53.addChild(&HAnimSite116);

HAnimSite& HAnimSite119 =  HAnimSite();
HAnimSite119.X3DNode::setName(CString("l_neck_base"));
HAnimSite119.setDEF(CString("hanim_l_neck_base"));
HAnimSite119.setTranslation(new float[3]{0.0646,1.5141,-0.038});
TouchSensor& TouchSensor120 =  TouchSensor();
TouchSensor120.setDescription(CString("HAnimSite l_neck_base"));
HAnimSite119.addChild(&TouchSensor120);

Shape& Shape121 =  Shape();
Shape121.setUSE(CString("HAnimSiteShape"));
HAnimSite119.addChild(&Shape121);

HAnimSegment53.addChild(&HAnimSite119);

HAnimSite& HAnimSite122 =  HAnimSite();
HAnimSite122.X3DNode::setName(CString("l_rib10"));
HAnimSite122.setDEF(CString("hanim_l_rib10"));
HAnimSite122.setTranslation(new float[3]{0.0871,1.1925,0.0992});
TouchSensor& TouchSensor123 =  TouchSensor();
TouchSensor123.setDescription(CString("HAnimSite l_rib10"));
HAnimSite122.addChild(&TouchSensor123);

Shape& Shape124 =  Shape();
Shape124.setUSE(CString("HAnimSiteShape"));
HAnimSite122.addChild(&Shape124);

HAnimSegment53.addChild(&HAnimSite122);

HAnimSite& HAnimSite125 =  HAnimSite();
HAnimSite125.X3DNode::setName(CString("l_thelion"));
HAnimSite125.setDEF(CString("hanim_l_thelion"));
HAnimSite125.setTranslation(new float[3]{0.0918,1.3382,0.1192});
TouchSensor& TouchSensor126 =  TouchSensor();
TouchSensor126.setDescription(CString("HAnimSite l_thelion"));
HAnimSite125.addChild(&TouchSensor126);

Shape& Shape127 =  Shape();
Shape127.setUSE(CString("HAnimSiteShape"));
HAnimSite125.addChild(&Shape127);

HAnimSegment53.addChild(&HAnimSite125);

HAnimSite& HAnimSite128 =  HAnimSite();
HAnimSite128.X3DNode::setName(CString("mesosternale"));
HAnimSite128.setDEF(CString("hanim_mesosternale"));
TouchSensor& TouchSensor129 =  TouchSensor();
TouchSensor129.setDescription(CString("HAnimSite mesosternale"));
HAnimSite128.addChild(&TouchSensor129);

Shape& Shape130 =  Shape();
Shape130.setUSE(CString("HAnimSiteShape"));
HAnimSite128.addChild(&Shape130);

HAnimSegment53.addChild(&HAnimSite128);

HAnimSite& HAnimSite131 =  HAnimSite();
HAnimSite131.X3DNode::setName(CString("navel"));
HAnimSite131.setDEF(CString("hanim_navel"));
HAnimSite131.setTranslation(new float[3]{0.0069,1.0966,0.1017});
TouchSensor& TouchSensor132 =  TouchSensor();
TouchSensor132.setDescription(CString("HAnimSite navel"));
HAnimSite131.addChild(&TouchSensor132);

Shape& Shape133 =  Shape();
Shape133.setUSE(CString("HAnimSiteShape"));
HAnimSite131.addChild(&Shape133);

HAnimSegment53.addChild(&HAnimSite131);

HAnimSite& HAnimSite134 =  HAnimSite();
HAnimSite134.X3DNode::setName(CString("r_acromion"));
HAnimSite134.setDEF(CString("hanim_r_acromion"));
HAnimSite134.setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
TouchSensor& TouchSensor135 =  TouchSensor();
TouchSensor135.setDescription(CString("HAnimSite r_acromion"));
HAnimSite134.addChild(&TouchSensor135);

Shape& Shape136 =  Shape();
Shape136.setUSE(CString("HAnimSiteShape"));
HAnimSite134.addChild(&Shape136);

HAnimSegment53.addChild(&HAnimSite134);

HAnimSite& HAnimSite137 =  HAnimSite();
HAnimSite137.X3DNode::setName(CString("r_axilla_distal_pt"));
HAnimSite137.setDEF(CString("hanim_r_axilla_distal_pt"));
HAnimSite137.setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
TouchSensor& TouchSensor138 =  TouchSensor();
TouchSensor138.setDescription(CString("HAnimSite r_axilla_distal_pt"));
HAnimSite137.addChild(&TouchSensor138);

Shape& Shape139 =  Shape();
Shape139.setUSE(CString("HAnimSiteShape"));
HAnimSite137.addChild(&Shape139);

HAnimSegment53.addChild(&HAnimSite137);

HAnimSite& HAnimSite140 =  HAnimSite();
HAnimSite140.X3DNode::setName(CString("r_axilla_posterior_folds"));
HAnimSite140.setDEF(CString("hanim_r_axilla_posterior_folds"));
TouchSensor& TouchSensor141 =  TouchSensor();
TouchSensor141.setDescription(CString("HAnimSite r_axilla_posterior_folds"));
HAnimSite140.addChild(&TouchSensor141);

Shape& Shape142 =  Shape();
Shape142.setUSE(CString("HAnimSiteShape"));
HAnimSite140.addChild(&Shape142);

HAnimSegment53.addChild(&HAnimSite140);

HAnimSite& HAnimSite143 =  HAnimSite();
HAnimSite143.X3DNode::setName(CString("r_axilla_proximal"));
HAnimSite143.setDEF(CString("hanim_r_axilla_proximal"));
HAnimSite143.setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
TouchSensor& TouchSensor144 =  TouchSensor();
TouchSensor144.setDescription(CString("HAnimSite r_axilla_proximal"));
HAnimSite143.addChild(&TouchSensor144);

Shape& Shape145 =  Shape();
Shape145.setUSE(CString("HAnimSiteShape"));
HAnimSite143.addChild(&Shape145);

HAnimSegment53.addChild(&HAnimSite143);

HAnimSite& HAnimSite146 =  HAnimSite();
HAnimSite146.X3DNode::setName(CString("r_chest_midsagittal_plane"));
HAnimSite146.setDEF(CString("hanim_r_chest_midsagittal_plane"));
TouchSensor& TouchSensor147 =  TouchSensor();
TouchSensor147.setDescription(CString("HAnimSite r_chest_midsagittal_plane"));
HAnimSite146.addChild(&TouchSensor147);

Shape& Shape148 =  Shape();
Shape148.setUSE(CString("HAnimSiteShape"));
HAnimSite146.addChild(&Shape148);

HAnimSegment53.addChild(&HAnimSite146);

HAnimSite& HAnimSite149 =  HAnimSite();
HAnimSite149.X3DNode::setName(CString("r_clavicale"));
HAnimSite149.setDEF(CString("hanim_r_clavicale"));
HAnimSite149.setTranslation(new float[3]{-0.0115,1.4943,0.04});
TouchSensor& TouchSensor150 =  TouchSensor();
TouchSensor150.setDescription(CString("HAnimSite r_clavicale"));
HAnimSite149.addChild(&TouchSensor150);

Shape& Shape151 =  Shape();
Shape151.setUSE(CString("HAnimSiteShape"));
HAnimSite149.addChild(&Shape151);

HAnimSegment53.addChild(&HAnimSite149);

HAnimSite& HAnimSite152 =  HAnimSite();
HAnimSite152.X3DNode::setName(CString("r_neck_base"));
HAnimSite152.setDEF(CString("hanim_r_neck_base"));
HAnimSite152.setTranslation(new float[3]{-0.0419,1.5149,-0.022});
TouchSensor& TouchSensor153 =  TouchSensor();
TouchSensor153.setDescription(CString("HAnimSite r_neck_base"));
HAnimSite152.addChild(&TouchSensor153);

Shape& Shape154 =  Shape();
Shape154.setUSE(CString("HAnimSiteShape"));
HAnimSite152.addChild(&Shape154);

HAnimSegment53.addChild(&HAnimSite152);

HAnimSite& HAnimSite155 =  HAnimSite();
HAnimSite155.X3DNode::setName(CString("r_rib10"));
HAnimSite155.setDEF(CString("hanim_r_rib10"));
HAnimSite155.setTranslation(new float[3]{-0.0711,1.1941,0.1016});
TouchSensor& TouchSensor156 =  TouchSensor();
TouchSensor156.setDescription(CString("HAnimSite r_rib10"));
HAnimSite155.addChild(&TouchSensor156);

Shape& Shape157 =  Shape();
Shape157.setUSE(CString("HAnimSiteShape"));
HAnimSite155.addChild(&Shape157);

HAnimSegment53.addChild(&HAnimSite155);

HAnimSite& HAnimSite158 =  HAnimSite();
HAnimSite158.X3DNode::setName(CString("r_thelion"));
HAnimSite158.setDEF(CString("hanim_r_thelion"));
HAnimSite158.setTranslation(new float[3]{-0.0736,1.3385,0.1217});
TouchSensor& TouchSensor159 =  TouchSensor();
TouchSensor159.setDescription(CString("HAnimSite r_thelion"));
HAnimSite158.addChild(&TouchSensor159);

Shape& Shape160 =  Shape();
Shape160.setUSE(CString("HAnimSiteShape"));
HAnimSite158.addChild(&Shape160);

HAnimSegment53.addChild(&HAnimSite158);

HAnimSite& HAnimSite161 =  HAnimSite();
HAnimSite161.X3DNode::setName(CString("rear_center_midsagittal_plane"));
HAnimSite161.setDEF(CString("hanim_rear_center_midsagittal_plane"));
TouchSensor& TouchSensor162 =  TouchSensor();
TouchSensor162.setDescription(CString("HAnimSite rear_center_midsagittal_plane"));
HAnimSite161.addChild(&TouchSensor162);

Shape& Shape163 =  Shape();
Shape163.setUSE(CString("HAnimSiteShape"));
HAnimSite161.addChild(&Shape163);

HAnimSegment53.addChild(&HAnimSite161);

HAnimSite& HAnimSite164 =  HAnimSite();
HAnimSite164.X3DNode::setName(CString("spine_1_middle_back"));
HAnimSite164.setDEF(CString("hanim_spine_1_middle_back"));
TouchSensor& TouchSensor165 =  TouchSensor();
TouchSensor165.setDescription(CString("HAnimSite spine_1_middle_back"));
HAnimSite164.addChild(&TouchSensor165);

Shape& Shape166 =  Shape();
Shape166.setUSE(CString("HAnimSiteShape"));
HAnimSite164.addChild(&Shape166);

HAnimSegment53.addChild(&HAnimSite164);

HAnimSite& HAnimSite167 =  HAnimSite();
HAnimSite167.X3DNode::setName(CString("spine_2_middle_back"));
HAnimSite167.setDEF(CString("hanim_spine_2_middle_back"));
TouchSensor& TouchSensor168 =  TouchSensor();
TouchSensor168.setDescription(CString("HAnimSite spine_2_middle_back"));
HAnimSite167.addChild(&TouchSensor168);

Shape& Shape169 =  Shape();
Shape169.setUSE(CString("HAnimSiteShape"));
HAnimSite167.addChild(&Shape169);

HAnimSegment53.addChild(&HAnimSite167);

HAnimSite& HAnimSite170 =  HAnimSite();
HAnimSite170.X3DNode::setName(CString("substernale"));
HAnimSite170.setDEF(CString("hanim_substernale"));
HAnimSite170.setTranslation(new float[3]{0.0085,1.2995,0.1147});
TouchSensor& TouchSensor171 =  TouchSensor();
TouchSensor171.setDescription(CString("HAnimSite substernale"));
HAnimSite170.addChild(&TouchSensor171);

Shape& Shape172 =  Shape();
Shape172.setUSE(CString("HAnimSiteShape"));
HAnimSite170.addChild(&Shape172);

HAnimSegment53.addChild(&HAnimSite170);

HAnimSite& HAnimSite173 =  HAnimSite();
HAnimSite173.X3DNode::setName(CString("suprasternale"));
HAnimSite173.setDEF(CString("hanim_suprasternale"));
HAnimSite173.setTranslation(new float[3]{0.0084,1.4714,0.0551});
TouchSensor& TouchSensor174 =  TouchSensor();
TouchSensor174.setDescription(CString("HAnimSite suprasternale"));
HAnimSite173.addChild(&TouchSensor174);

Shape& Shape175 =  Shape();
Shape175.setUSE(CString("HAnimSiteShape"));
HAnimSite173.addChild(&Shape175);

HAnimSegment53.addChild(&HAnimSite173);

HAnimSite& HAnimSite176 =  HAnimSite();
HAnimSite176.X3DNode::setName(CString("waist_preferred_anterior"));
HAnimSite176.setDEF(CString("hanim_waist_preferred_anterior"));
TouchSensor& TouchSensor177 =  TouchSensor();
TouchSensor177.setDescription(CString("HAnimSite waist_preferred_anterior"));
HAnimSite176.addChild(&TouchSensor177);

Shape& Shape178 =  Shape();
Shape178.setUSE(CString("HAnimSiteShape"));
HAnimSite176.addChild(&Shape178);

HAnimSegment53.addChild(&HAnimSite176);

HAnimSite& HAnimSite179 =  HAnimSite();
HAnimSite179.X3DNode::setName(CString("waist_preferred_posterior"));
HAnimSite179.setDEF(CString("hanim_waist_preferred_posterior"));
HAnimSite179.setTranslation(new float[3]{0.29,1.0915,-0.1091});
TouchSensor& TouchSensor180 =  TouchSensor();
TouchSensor180.setDescription(CString("HAnimSite waist_preferred_posterior"));
HAnimSite179.addChild(&TouchSensor180);

Shape& Shape181 =  Shape();
Shape181.setUSE(CString("HAnimSiteShape"));
HAnimSite179.addChild(&Shape181);

HAnimSegment53.addChild(&HAnimSite179);

HAnimJoint52.addChildren(&HAnimSegment53);

HAnimJoint& HAnimJoint182 =  HAnimJoint();
HAnimJoint182.X3DNode::setName(CString("sacroiliac"));
HAnimJoint182.setDEF(CString("hanim_sacroiliac"));
HAnimJoint182.setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint182.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint182.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment183 =  HAnimSegment();
HAnimSegment183.X3DNode::setName(CString("pelvis"));
HAnimSegment183.setDEF(CString("hanim_pelvis"));
Transform& Transform184 =  Transform();
Transform184.setTranslation(new float[3]{0,0.9149,0.0016});
Transform& Transform185 =  Transform();
//Empty Transform
Shape& Shape186 =  Shape();
Shape186.setUSE(CString("HAnimJointShape"));
Transform185.addChild(&Shape186);

Transform184.addChild(&Transform185);

HAnimSegment183.addChild(&Transform184);

Shape& Shape187 =  Shape();
LineSet& LineSet188 =  LineSet();
LineSet188.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate189 =  Coordinate();
Coordinate189.setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet188.setCoord(Coordinate189);

//from sacroiliac to l_hip vertices 2
ColorRGBA& ColorRGBA190 =  ColorRGBA();
ColorRGBA190.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet188.addChild(&ColorRGBA190);

Shape187.setGeometry(&LineSet188);

HAnimSegment183.addChild(&Shape187);

HAnimSite& HAnimSite191 =  HAnimSite();
HAnimSite191.X3DNode::setName(CString("l_femoral_lateral_epicondyles"));
HAnimSite191.setDEF(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimSite191.setTranslation(new float[3]{0.1598,0.4967,0.0297});
TouchSensor& TouchSensor192 =  TouchSensor();
TouchSensor192.setDescription(CString("HAnimSite l_femoral_lateral_epicondyles"));
HAnimSite191.addChild(&TouchSensor192);

Shape& Shape193 =  Shape();
Shape193.setUSE(CString("HAnimSiteShape"));
HAnimSite191.addChild(&Shape193);

HAnimSegment183.addChild(&HAnimSite191);

HAnimSite& HAnimSite194 =  HAnimSite();
HAnimSite194.X3DNode::setName(CString("l_femoral_medial_epicondyles"));
HAnimSite194.setDEF(CString("hanim_l_femoral_medial_epicondyles"));
HAnimSite194.setTranslation(new float[3]{0.0398,0.4946,0.0303});
TouchSensor& TouchSensor195 =  TouchSensor();
TouchSensor195.setDescription(CString("HAnimSite l_femoral_medial_epicondyles"));
HAnimSite194.addChild(&TouchSensor195);

Shape& Shape196 =  Shape();
Shape196.setUSE(CString("HAnimSiteShape"));
HAnimSite194.addChild(&Shape196);

HAnimSegment183.addChild(&HAnimSite194);

HAnimSite& HAnimSite197 =  HAnimSite();
HAnimSite197.X3DNode::setName(CString("l_knee_crease"));
HAnimSite197.setDEF(CString("hanim_l_knee_crease"));
HAnimSite197.setTranslation(new float[3]{0.0993,0.4881,-0.0309});
TouchSensor& TouchSensor198 =  TouchSensor();
TouchSensor198.setDescription(CString("HAnimSite l_knee_crease"));
HAnimSite197.addChild(&TouchSensor198);

Shape& Shape199 =  Shape();
Shape199.setUSE(CString("HAnimSiteShape"));
HAnimSite197.addChild(&Shape199);

HAnimSegment183.addChild(&HAnimSite197);

HAnimSite& HAnimSite200 =  HAnimSite();
HAnimSite200.X3DNode::setName(CString("l_suprapatella"));
HAnimSite200.setDEF(CString("hanim_l_suprapatella"));
TouchSensor& TouchSensor201 =  TouchSensor();
TouchSensor201.setDescription(CString("HAnimSite l_suprapatella"));
HAnimSite200.addChild(&TouchSensor201);

Shape& Shape202 =  Shape();
Shape202.setUSE(CString("HAnimSiteShape"));
HAnimSite200.addChild(&Shape202);

HAnimSegment183.addChild(&HAnimSite200);

Shape& Shape203 =  Shape();
LineSet& LineSet204 =  LineSet();
LineSet204.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate205 =  Coordinate();
Coordinate205.setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029}, 6);
LineSet204.setCoord(Coordinate205);

//from sacroiliac to r_hip vertices 2
ColorRGBA& ColorRGBA206 =  ColorRGBA();
ColorRGBA206.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet204.addChild(&ColorRGBA206);

Shape203.setGeometry(&LineSet204);

HAnimSegment183.addChild(&Shape203);

HAnimSite& HAnimSite207 =  HAnimSite();
HAnimSite207.X3DNode::setName(CString("r_femoral_lateral_epicondyles"));
HAnimSite207.setDEF(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimSite207.setTranslation(new float[3]{-0.1421,0.4992,0.031});
TouchSensor& TouchSensor208 =  TouchSensor();
TouchSensor208.setDescription(CString("HAnimSite r_femoral_lateral_epicondyles"));
HAnimSite207.addChild(&TouchSensor208);

Shape& Shape209 =  Shape();
Shape209.setUSE(CString("HAnimSiteShape"));
HAnimSite207.addChild(&Shape209);

HAnimSegment183.addChild(&HAnimSite207);

HAnimSite& HAnimSite210 =  HAnimSite();
HAnimSite210.X3DNode::setName(CString("r_femoral_medial_epicondyles"));
HAnimSite210.setDEF(CString("hanim_r_femoral_medial_epicondyles"));
HAnimSite210.setTranslation(new float[3]{-0.0221,0.5014,0.0289});
TouchSensor& TouchSensor211 =  TouchSensor();
TouchSensor211.setDescription(CString("HAnimSite r_femoral_medial_epicondyles"));
HAnimSite210.addChild(&TouchSensor211);

Shape& Shape212 =  Shape();
Shape212.setUSE(CString("HAnimSiteShape"));
HAnimSite210.addChild(&Shape212);

HAnimSegment183.addChild(&HAnimSite210);

HAnimSite& HAnimSite213 =  HAnimSite();
HAnimSite213.X3DNode::setName(CString("r_knee_crease"));
HAnimSite213.setDEF(CString("hanim_r_knee_crease"));
HAnimSite213.setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
TouchSensor& TouchSensor214 =  TouchSensor();
TouchSensor214.setDescription(CString("HAnimSite r_knee_crease"));
HAnimSite213.addChild(&TouchSensor214);

Shape& Shape215 =  Shape();
Shape215.setUSE(CString("HAnimSiteShape"));
HAnimSite213.addChild(&Shape215);

HAnimSegment183.addChild(&HAnimSite213);

HAnimSite& HAnimSite216 =  HAnimSite();
HAnimSite216.X3DNode::setName(CString("r_suprapatella"));
HAnimSite216.setDEF(CString("hanim_r_suprapatella"));
TouchSensor& TouchSensor217 =  TouchSensor();
TouchSensor217.setDescription(CString("HAnimSite r_suprapatella"));
HAnimSite216.addChild(&TouchSensor217);

Shape& Shape218 =  Shape();
Shape218.setUSE(CString("HAnimSiteShape"));
HAnimSite216.addChild(&Shape218);

HAnimSegment183.addChild(&HAnimSite216);

HAnimJoint182.addChildren(&HAnimSegment183);

HAnimJoint& HAnimJoint219 =  HAnimJoint();
HAnimJoint219.X3DNode::setName(CString("l_hip"));
HAnimJoint219.setDEF(CString("hanim_l_hip"));
HAnimJoint219.setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint219.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint219.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment220 =  HAnimSegment();
HAnimSegment220.X3DNode::setName(CString("l_thigh"));
HAnimSegment220.setDEF(CString("hanim_l_thigh"));
Transform& Transform221 =  Transform();
Transform221.setTranslation(new float[3]{0.0961,0.9124,-0.0001});
Transform& Transform222 =  Transform();
//Empty Transform
Shape& Shape223 =  Shape();
Shape223.setUSE(CString("HAnimJointShape"));
Transform222.addChild(&Shape223);

Transform221.addChild(&Transform222);

HAnimSegment220.addChild(&Transform221);

Shape& Shape224 =  Shape();
LineSet& LineSet225 =  LineSet();
LineSet225.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate226 =  Coordinate();
Coordinate226.setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
LineSet225.setCoord(Coordinate226);

//from l_hip to l_knee vertices 2
ColorRGBA& ColorRGBA227 =  ColorRGBA();
ColorRGBA227.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet225.addChild(&ColorRGBA227);

Shape224.setGeometry(&LineSet225);

HAnimSegment220.addChild(&Shape224);

HAnimSite& HAnimSite228 =  HAnimSite();
HAnimSite228.X3DNode::setName(CString("l_lateral_malleolus"));
HAnimSite228.setDEF(CString("hanim_l_lateral_malleolus"));
HAnimSite228.setTranslation(new float[3]{0.1308,0.0597,-0.1032});
TouchSensor& TouchSensor229 =  TouchSensor();
TouchSensor229.setDescription(CString("HAnimSite l_lateral_malleolus"));
HAnimSite228.addChild(&TouchSensor229);

Shape& Shape230 =  Shape();
Shape230.setUSE(CString("HAnimSiteShape"));
HAnimSite228.addChild(&Shape230);

HAnimSegment220.addChild(&HAnimSite228);

HAnimSite& HAnimSite231 =  HAnimSite();
HAnimSite231.X3DNode::setName(CString("l_medial_malleolus"));
HAnimSite231.setDEF(CString("hanim_l_medial_malleolus"));
HAnimSite231.setTranslation(new float[3]{0.089,0.0716,-0.0881});
TouchSensor& TouchSensor232 =  TouchSensor();
TouchSensor232.setDescription(CString("HAnimSite l_medial_malleolus"));
HAnimSite231.addChild(&TouchSensor232);

Shape& Shape233 =  Shape();
Shape233.setUSE(CString("HAnimSiteShape"));
HAnimSite231.addChild(&Shape233);

HAnimSegment220.addChild(&HAnimSite231);

HAnimSite& HAnimSite234 =  HAnimSite();
HAnimSite234.X3DNode::setName(CString("l_tibiale"));
HAnimSite234.setDEF(CString("hanim_l_tibiale"));
TouchSensor& TouchSensor235 =  TouchSensor();
TouchSensor235.setDescription(CString("HAnimSite l_tibiale"));
HAnimSite234.addChild(&TouchSensor235);

Shape& Shape236 =  Shape();
Shape236.setUSE(CString("HAnimSiteShape"));
HAnimSite234.addChild(&Shape236);

HAnimSegment220.addChild(&HAnimSite234);

HAnimJoint219.addChildren(&HAnimSegment220);

HAnimJoint& HAnimJoint237 =  HAnimJoint();
HAnimJoint237.X3DNode::setName(CString("l_knee"));
HAnimJoint237.setDEF(CString("hanim_l_knee"));
HAnimJoint237.setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint237.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint237.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment238 =  HAnimSegment();
HAnimSegment238.X3DNode::setName(CString("l_calf"));
HAnimSegment238.setDEF(CString("hanim_l_calf"));
Transform& Transform239 =  Transform();
Transform239.setTranslation(new float[3]{0.104,0.4867,0.0308});
Transform& Transform240 =  Transform();
//Empty Transform
Shape& Shape241 =  Shape();
Shape241.setUSE(CString("HAnimJointShape"));
Transform240.addChild(&Shape241);

Transform239.addChild(&Transform240);

HAnimSegment238.addChild(&Transform239);

Shape& Shape242 =  Shape();
LineSet& LineSet243 =  LineSet();
LineSet243.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate244 =  Coordinate();
Coordinate244.setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet243.setCoord(Coordinate244);

//from l_knee to l_talocrural vertices 2
ColorRGBA& ColorRGBA245 =  ColorRGBA();
ColorRGBA245.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet243.addChild(&ColorRGBA245);

Shape242.setGeometry(&LineSet243);

HAnimSegment238.addChild(&Shape242);

HAnimSite& HAnimSite246 =  HAnimSite();
HAnimSite246.X3DNode::setName(CString("l_calcaneus_posterior"));
HAnimSite246.setDEF(CString("hanim_l_calcaneus_posterior"));
HAnimSite246.setTranslation(new float[3]{0.0974,0.0259,-0.1171});
TouchSensor& TouchSensor247 =  TouchSensor();
TouchSensor247.setDescription(CString("HAnimSite l_calcaneus_posterior"));
HAnimSite246.addChild(&TouchSensor247);

Shape& Shape248 =  Shape();
Shape248.setUSE(CString("HAnimSiteShape"));
HAnimSite246.addChild(&Shape248);

HAnimSegment238.addChild(&HAnimSite246);

HAnimSite& HAnimSite249 =  HAnimSite();
HAnimSite249.X3DNode::setName(CString("l_sphyrion"));
HAnimSite249.setDEF(CString("hanim_l_sphyrion"));
HAnimSite249.setTranslation(new float[3]{0.089,0.0575,-0.0943});
TouchSensor& TouchSensor250 =  TouchSensor();
TouchSensor250.setDescription(CString("HAnimSite l_sphyrion"));
HAnimSite249.addChild(&TouchSensor250);

Shape& Shape251 =  Shape();
Shape251.setUSE(CString("HAnimSiteShape"));
HAnimSite249.addChild(&Shape251);

HAnimSegment238.addChild(&HAnimSite249);

HAnimJoint237.addChildren(&HAnimSegment238);

HAnimJoint& HAnimJoint252 =  HAnimJoint();
HAnimJoint252.X3DNode::setName(CString("l_talocrural"));
HAnimJoint252.setDEF(CString("hanim_l_talocrural"));
HAnimJoint252.setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint252.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint252.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment253 =  HAnimSegment();
HAnimSegment253.X3DNode::setName(CString("l_talus"));
HAnimSegment253.setDEF(CString("hanim_l_talus"));
Transform& Transform254 =  Transform();
Transform254.setScale(new float[3]{0.15,0.15,0.15});
Transform254.setTranslation(new float[3]{0.08,0.06,-0.025});
Transform254.setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
Transform& Transform255 =  Transform();
//Empty Transform left foot
Shape& Shape256 =  Shape();
Shape256.setUSE(CString("HAnimJointShape"));
Transform255.addChild(&Shape256);

Transform254.addChild(&Transform255);

HAnimSegment253.addChild(&Transform254);

Shape& Shape257 =  Shape();
LineSet& LineSet258 =  LineSet();
LineSet258.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate259 =  Coordinate();
Coordinate259.setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004}, 6);
LineSet258.setCoord(Coordinate259);

//from l_talocrural to l_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA260 =  ColorRGBA();
ColorRGBA260.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet258.addChild(&ColorRGBA260);

Shape257.setGeometry(&LineSet258);

HAnimSegment253.addChild(&Shape257);

HAnimSite& HAnimSite261 =  HAnimSite();
HAnimSite261.X3DNode::setName(CString("l_metatarsal_phalanx_1"));
HAnimSite261.setDEF(CString("hanim_l_metatarsal_phalanx_1"));
TouchSensor& TouchSensor262 =  TouchSensor();
TouchSensor262.setDescription(CString("HAnimSite l_metatarsal_phalanx_1"));
HAnimSite261.addChild(&TouchSensor262);

Shape& Shape263 =  Shape();
Shape263.setUSE(CString("HAnimSiteShape"));
HAnimSite261.addChild(&Shape263);

HAnimSegment253.addChild(&HAnimSite261);

HAnimSite& HAnimSite264 =  HAnimSite();
HAnimSite264.X3DNode::setName(CString("l_metatarsal_phalanx_5"));
HAnimSite264.setDEF(CString("hanim_l_metatarsal_phalanx_5"));
TouchSensor& TouchSensor265 =  TouchSensor();
TouchSensor265.setDescription(CString("HAnimSite l_metatarsal_phalanx_5"));
HAnimSite264.addChild(&TouchSensor265);

Shape& Shape266 =  Shape();
Shape266.setUSE(CString("HAnimSiteShape"));
HAnimSite264.addChild(&Shape266);

HAnimSegment253.addChild(&HAnimSite264);

HAnimSite& HAnimSite267 =  HAnimSite();
HAnimSite267.X3DNode::setName(CString("l_tarsal_distal_phalanx_1_tip"));
HAnimSite267.setDEF(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor268 =  TouchSensor();
TouchSensor268.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_1_tip"));
HAnimSite267.addChild(&TouchSensor268);

Shape& Shape269 =  Shape();
Shape269.setUSE(CString("HAnimSiteShape"));
HAnimSite267.addChild(&Shape269);

HAnimSegment253.addChild(&HAnimSite267);

HAnimSite& HAnimSite270 =  HAnimSite();
HAnimSite270.X3DNode::setName(CString("l_tarsal_distal_phalanx_2_tip"));
HAnimSite270.setDEF(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimSite270.setTranslation(new float[3]{0.1195,0.0079,0.1433});
TouchSensor& TouchSensor271 =  TouchSensor();
TouchSensor271.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_2_tip"));
HAnimSite270.addChild(&TouchSensor271);

Shape& Shape272 =  Shape();
Shape272.setUSE(CString("HAnimSiteShape"));
HAnimSite270.addChild(&Shape272);

HAnimSegment253.addChild(&HAnimSite270);

HAnimSite& HAnimSite273 =  HAnimSite();
HAnimSite273.X3DNode::setName(CString("l_tarsal_distal_phalanx_3_tip"));
HAnimSite273.setDEF(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor274 =  TouchSensor();
TouchSensor274.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_3_tip"));
HAnimSite273.addChild(&TouchSensor274);

Shape& Shape275 =  Shape();
Shape275.setUSE(CString("HAnimSiteShape"));
HAnimSite273.addChild(&Shape275);

HAnimSegment253.addChild(&HAnimSite273);

HAnimSite& HAnimSite276 =  HAnimSite();
HAnimSite276.X3DNode::setName(CString("l_tarsal_distal_phalanx_4_tip"));
HAnimSite276.setDEF(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor277 =  TouchSensor();
TouchSensor277.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_4_tip"));
HAnimSite276.addChild(&TouchSensor277);

Shape& Shape278 =  Shape();
Shape278.setUSE(CString("HAnimSiteShape"));
HAnimSite276.addChild(&Shape278);

HAnimSegment253.addChild(&HAnimSite276);

HAnimSite& HAnimSite279 =  HAnimSite();
HAnimSite279.X3DNode::setName(CString("l_tarsal_distal_phalanx_5_tip"));
HAnimSite279.setDEF(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor280 =  TouchSensor();
TouchSensor280.setDescription(CString("HAnimSite l_tarsal_distal_phalanx_5_tip"));
HAnimSite279.addChild(&TouchSensor280);

Shape& Shape281 =  Shape();
Shape281.setUSE(CString("HAnimSiteShape"));
HAnimSite279.addChild(&Shape281);

HAnimSegment253.addChild(&HAnimSite279);

HAnimJoint252.addChildren(&HAnimSegment253);

HAnimJoint& HAnimJoint282 =  HAnimJoint();
HAnimJoint282.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint282.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint282.setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimJoint282.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint282.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint252.addChildren(&HAnimJoint282);

HAnimJoint237.addChildren(&HAnimJoint252);

HAnimJoint219.addChildren(&HAnimJoint237);

HAnimJoint182.addChildren(&HAnimJoint219);

HAnimJoint& HAnimJoint283 =  HAnimJoint();
HAnimJoint283.X3DNode::setName(CString("r_hip"));
HAnimJoint283.setDEF(CString("hanim_r_hip"));
HAnimJoint283.setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint283.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint283.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment284 =  HAnimSegment();
HAnimSegment284.X3DNode::setName(CString("r_thigh"));
HAnimSegment284.setDEF(CString("hanim_r_thigh"));
Transform& Transform285 =  Transform();
Transform285.setTranslation(new float[3]{-0.095,0.9171,0.0029});
Transform& Transform286 =  Transform();
//Empty Transform
Shape& Shape287 =  Shape();
Shape287.setUSE(CString("HAnimJointShape"));
Transform286.addChild(&Shape287);

Transform285.addChild(&Transform286);

HAnimSegment284.addChild(&Transform285);

Shape& Shape288 =  Shape();
LineSet& LineSet289 =  LineSet();
LineSet289.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate290 =  Coordinate();
Coordinate290.setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet289.setCoord(Coordinate290);

//from r_hip to r_knee vertices 2
ColorRGBA& ColorRGBA291 =  ColorRGBA();
ColorRGBA291.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet289.addChild(&ColorRGBA291);

Shape288.setGeometry(&LineSet289);

HAnimSegment284.addChild(&Shape288);

HAnimSite& HAnimSite292 =  HAnimSite();
HAnimSite292.X3DNode::setName(CString("r_lateral_malleolus"));
HAnimSite292.setDEF(CString("hanim_r_lateral_malleolus"));
HAnimSite292.setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
TouchSensor& TouchSensor293 =  TouchSensor();
TouchSensor293.setDescription(CString("HAnimSite r_lateral_malleolus"));
HAnimSite292.addChild(&TouchSensor293);

Shape& Shape294 =  Shape();
Shape294.setUSE(CString("HAnimSiteShape"));
HAnimSite292.addChild(&Shape294);

HAnimSegment284.addChild(&HAnimSite292);

HAnimSite& HAnimSite295 =  HAnimSite();
HAnimSite295.X3DNode::setName(CString("r_medial_malleolus"));
HAnimSite295.setDEF(CString("hanim_r_medial_malleolus"));
HAnimSite295.setTranslation(new float[3]{-0.0591,0.076,-0.0928});
TouchSensor& TouchSensor296 =  TouchSensor();
TouchSensor296.setDescription(CString("HAnimSite r_medial_malleolus"));
HAnimSite295.addChild(&TouchSensor296);

Shape& Shape297 =  Shape();
Shape297.setUSE(CString("HAnimSiteShape"));
HAnimSite295.addChild(&Shape297);

HAnimSegment284.addChild(&HAnimSite295);

HAnimSite& HAnimSite298 =  HAnimSite();
HAnimSite298.X3DNode::setName(CString("r_tibiale"));
HAnimSite298.setDEF(CString("hanim_r_tibiale"));
TouchSensor& TouchSensor299 =  TouchSensor();
TouchSensor299.setDescription(CString("HAnimSite r_tibiale"));
HAnimSite298.addChild(&TouchSensor299);

Shape& Shape300 =  Shape();
Shape300.setUSE(CString("HAnimSiteShape"));
HAnimSite298.addChild(&Shape300);

HAnimSegment284.addChild(&HAnimSite298);

HAnimJoint283.addChildren(&HAnimSegment284);

HAnimJoint& HAnimJoint301 =  HAnimJoint();
HAnimJoint301.X3DNode::setName(CString("r_knee"));
HAnimJoint301.setDEF(CString("hanim_r_knee"));
HAnimJoint301.setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint301.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint301.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment302 =  HAnimSegment();
HAnimSegment302.X3DNode::setName(CString("r_calf"));
HAnimSegment302.setDEF(CString("hanim_r_calf"));
Transform& Transform303 =  Transform();
Transform303.setTranslation(new float[3]{-0.0867,0.4913,0.0318});
Transform& Transform304 =  Transform();
//Empty Transform
Shape& Shape305 =  Shape();
Shape305.setUSE(CString("HAnimJointShape"));
Transform304.addChild(&Shape305);

Transform303.addChild(&Transform304);

HAnimSegment302.addChild(&Transform303);

Shape& Shape306 =  Shape();
LineSet& LineSet307 =  LineSet();
LineSet307.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate308 =  Coordinate();
Coordinate308.setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet307.setCoord(Coordinate308);

//from r_knee to r_talocrural vertices 2
ColorRGBA& ColorRGBA309 =  ColorRGBA();
ColorRGBA309.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet307.addChild(&ColorRGBA309);

Shape306.setGeometry(&LineSet307);

HAnimSegment302.addChild(&Shape306);

HAnimSite& HAnimSite310 =  HAnimSite();
HAnimSite310.X3DNode::setName(CString("r_calcaneus_posterior"));
HAnimSite310.setDEF(CString("hanim_r_calcaneus_posterior"));
HAnimSite310.setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
TouchSensor& TouchSensor311 =  TouchSensor();
TouchSensor311.setDescription(CString("HAnimSite r_calcaneus_posterior"));
HAnimSite310.addChild(&TouchSensor311);

Shape& Shape312 =  Shape();
Shape312.setUSE(CString("HAnimSiteShape"));
HAnimSite310.addChild(&Shape312);

HAnimSegment302.addChild(&HAnimSite310);

HAnimSite& HAnimSite313 =  HAnimSite();
HAnimSite313.X3DNode::setName(CString("r_sphyrion"));
HAnimSite313.setDEF(CString("hanim_r_sphyrion"));
HAnimSite313.setTranslation(new float[3]{-0.0603,0.061,-0.1002});
TouchSensor& TouchSensor314 =  TouchSensor();
TouchSensor314.setDescription(CString("HAnimSite r_sphyrion"));
HAnimSite313.addChild(&TouchSensor314);

Shape& Shape315 =  Shape();
Shape315.setUSE(CString("HAnimSiteShape"));
HAnimSite313.addChild(&Shape315);

HAnimSegment302.addChild(&HAnimSite313);

HAnimJoint301.addChildren(&HAnimSegment302);

HAnimJoint& HAnimJoint316 =  HAnimJoint();
HAnimJoint316.X3DNode::setName(CString("r_talocrural"));
HAnimJoint316.setDEF(CString("hanim_r_talocrural"));
HAnimJoint316.setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint316.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint316.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment317 =  HAnimSegment();
HAnimSegment317.X3DNode::setName(CString("r_talus"));
HAnimSegment317.setDEF(CString("hanim_r_talus"));
Transform& Transform318 =  Transform();
Transform318.setScale(new float[3]{0.15,0.15,0.15});
Transform318.setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform318.setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
Transform& Transform319 =  Transform();
//Empty Transform right foot
Shape& Shape320 =  Shape();
Shape320.setUSE(CString("HAnimJointShape"));
Transform319.addChild(&Shape320);

Transform318.addChild(&Transform319);

HAnimSegment317.addChild(&Transform318);

Shape& Shape321 =  Shape();
LineSet& LineSet322 =  LineSet();
LineSet322.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate323 =  Coordinate();
Coordinate323.setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004}, 6);
LineSet322.setCoord(Coordinate323);

//from r_talocrural to r_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA324 =  ColorRGBA();
ColorRGBA324.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet322.addChild(&ColorRGBA324);

Shape321.setGeometry(&LineSet322);

HAnimSegment317.addChild(&Shape321);

HAnimSite& HAnimSite325 =  HAnimSite();
HAnimSite325.X3DNode::setName(CString("r_metatarsal_phalanx_1"));
HAnimSite325.setDEF(CString("hanim_r_metatarsal_phalanx_1"));
TouchSensor& TouchSensor326 =  TouchSensor();
TouchSensor326.setDescription(CString("HAnimSite r_metatarsal_phalanx_1"));
HAnimSite325.addChild(&TouchSensor326);

Shape& Shape327 =  Shape();
Shape327.setUSE(CString("HAnimSiteShape"));
HAnimSite325.addChild(&Shape327);

HAnimSegment317.addChild(&HAnimSite325);

HAnimSite& HAnimSite328 =  HAnimSite();
HAnimSite328.X3DNode::setName(CString("r_metatarsal_phalanx_5"));
HAnimSite328.setDEF(CString("hanim_r_metatarsal_phalanx_5"));
TouchSensor& TouchSensor329 =  TouchSensor();
TouchSensor329.setDescription(CString("HAnimSite r_metatarsal_phalanx_5"));
HAnimSite328.addChild(&TouchSensor329);

Shape& Shape330 =  Shape();
Shape330.setUSE(CString("HAnimSiteShape"));
HAnimSite328.addChild(&Shape330);

HAnimSegment317.addChild(&HAnimSite328);

HAnimSite& HAnimSite331 =  HAnimSite();
HAnimSite331.X3DNode::setName(CString("r_tarsal_distal_phalanx_1_tip"));
HAnimSite331.setDEF(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor332 =  TouchSensor();
TouchSensor332.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_1_tip"));
HAnimSite331.addChild(&TouchSensor332);

Shape& Shape333 =  Shape();
Shape333.setUSE(CString("HAnimSiteShape"));
HAnimSite331.addChild(&Shape333);

HAnimSegment317.addChild(&HAnimSite331);

HAnimSite& HAnimSite334 =  HAnimSite();
HAnimSite334.X3DNode::setName(CString("r_tarsal_distal_phalanx_2_tip"));
HAnimSite334.setDEF(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimSite334.setTranslation(new float[3]{-0.0883,0.0134,0.1383});
TouchSensor& TouchSensor335 =  TouchSensor();
TouchSensor335.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_2_tip"));
HAnimSite334.addChild(&TouchSensor335);

Shape& Shape336 =  Shape();
Shape336.setUSE(CString("HAnimSiteShape"));
HAnimSite334.addChild(&Shape336);

HAnimSegment317.addChild(&HAnimSite334);

HAnimSite& HAnimSite337 =  HAnimSite();
HAnimSite337.X3DNode::setName(CString("r_tarsal_distal_phalanx_3_tip"));
HAnimSite337.setDEF(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
TouchSensor& TouchSensor338 =  TouchSensor();
TouchSensor338.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_3_tip"));
HAnimSite337.addChild(&TouchSensor338);

Shape& Shape339 =  Shape();
Shape339.setUSE(CString("HAnimSiteShape"));
HAnimSite337.addChild(&Shape339);

HAnimSegment317.addChild(&HAnimSite337);

HAnimSite& HAnimSite340 =  HAnimSite();
HAnimSite340.X3DNode::setName(CString("r_tarsal_distal_phalanx_4_tip"));
HAnimSite340.setDEF(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
TouchSensor& TouchSensor341 =  TouchSensor();
TouchSensor341.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_4_tip"));
HAnimSite340.addChild(&TouchSensor341);

Shape& Shape342 =  Shape();
Shape342.setUSE(CString("HAnimSiteShape"));
HAnimSite340.addChild(&Shape342);

HAnimSegment317.addChild(&HAnimSite340);

HAnimSite& HAnimSite343 =  HAnimSite();
HAnimSite343.X3DNode::setName(CString("r_tarsal_distal_phalanx_5_tip"));
HAnimSite343.setDEF(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
TouchSensor& TouchSensor344 =  TouchSensor();
TouchSensor344.setDescription(CString("HAnimSite r_tarsal_distal_phalanx_5_tip"));
HAnimSite343.addChild(&TouchSensor344);

Shape& Shape345 =  Shape();
Shape345.setUSE(CString("HAnimSiteShape"));
HAnimSite343.addChild(&Shape345);

HAnimSegment317.addChild(&HAnimSite343);

HAnimJoint316.addChildren(&HAnimSegment317);

HAnimJoint& HAnimJoint346 =  HAnimJoint();
HAnimJoint346.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint346.setDEF(CString("hanim_r_metatarsophalangeal_2"));
HAnimJoint346.setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimJoint346.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint346.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint316.addChildren(&HAnimJoint346);

HAnimJoint301.addChildren(&HAnimJoint316);

HAnimJoint283.addChildren(&HAnimJoint301);

HAnimJoint182.addChildren(&HAnimJoint283);

HAnimJoint52.addChildren(&HAnimJoint182);

HAnimJoint& HAnimJoint347 =  HAnimJoint();
HAnimJoint347.X3DNode::setName(CString("vl5"));
HAnimJoint347.setDEF(CString("hanim_vl5"));
HAnimJoint347.setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint347.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint347.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment348 =  HAnimSegment();
HAnimSegment348.X3DNode::setName(CString("l5"));
HAnimSegment348.setDEF(CString("hanim_l5"));
Transform& Transform349 =  Transform();
Transform349.setTranslation(new float[3]{0.0028,1.0568,-0.0776});
Transform& Transform350 =  Transform();
//Empty Transform
Shape& Shape351 =  Shape();
Shape351.setUSE(CString("HAnimJointShape"));
Transform350.addChild(&Shape351);

Transform349.addChild(&Transform350);

HAnimSegment348.addChild(&Transform349);

Shape& Shape352 =  Shape();
LineSet& LineSet353 =  LineSet();
LineSet353.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate354 =  Coordinate();
Coordinate354.setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236}, 6);
LineSet353.setCoord(Coordinate354);

//from vl5 to skullbase vertices 2
ColorRGBA& ColorRGBA355 =  ColorRGBA();
ColorRGBA355.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet353.addChild(&ColorRGBA355);

Shape352.setGeometry(&LineSet353);

HAnimSegment348.addChild(&Shape352);

HAnimSite& HAnimSite356 =  HAnimSite();
HAnimSite356.X3DNode::setName(CString("glabella"));
HAnimSite356.setDEF(CString("hanim_glabella"));
TouchSensor& TouchSensor357 =  TouchSensor();
TouchSensor357.setDescription(CString("HAnimSite glabella"));
HAnimSite356.addChild(&TouchSensor357);

Shape& Shape358 =  Shape();
Shape358.setUSE(CString("HAnimSiteShape"));
HAnimSite356.addChild(&Shape358);

HAnimSegment348.addChild(&HAnimSite356);

HAnimSite& HAnimSite359 =  HAnimSite();
HAnimSite359.X3DNode::setName(CString("l_ectocanthus"));
HAnimSite359.setDEF(CString("hanim_l_ectocanthus"));
TouchSensor& TouchSensor360 =  TouchSensor();
TouchSensor360.setDescription(CString("HAnimSite l_ectocanthus"));
HAnimSite359.addChild(&TouchSensor360);

Shape& Shape361 =  Shape();
Shape361.setUSE(CString("HAnimSiteShape"));
HAnimSite359.addChild(&Shape361);

HAnimSegment348.addChild(&HAnimSite359);

HAnimSite& HAnimSite362 =  HAnimSite();
HAnimSite362.X3DNode::setName(CString("l_gonion"));
HAnimSite362.setDEF(CString("hanim_l_gonion"));
HAnimSite362.setTranslation(new float[3]{0.0631,1.553,0.033});
TouchSensor& TouchSensor363 =  TouchSensor();
TouchSensor363.setDescription(CString("HAnimSite l_gonion"));
HAnimSite362.addChild(&TouchSensor363);

Shape& Shape364 =  Shape();
Shape364.setUSE(CString("HAnimSiteShape"));
HAnimSite362.addChild(&Shape364);

HAnimSegment348.addChild(&HAnimSite362);

HAnimSite& HAnimSite365 =  HAnimSite();
HAnimSite365.X3DNode::setName(CString("l_infraorbitale"));
HAnimSite365.setDEF(CString("hanim_l_infraorbitale"));
HAnimSite365.setTranslation(new float[3]{0.0341,1.6171,0.0752});
TouchSensor& TouchSensor366 =  TouchSensor();
TouchSensor366.setDescription(CString("HAnimSite l_infraorbitale"));
HAnimSite365.addChild(&TouchSensor366);

Shape& Shape367 =  Shape();
Shape367.setUSE(CString("HAnimSiteShape"));
HAnimSite365.addChild(&Shape367);

HAnimSegment348.addChild(&HAnimSite365);

HAnimSite& HAnimSite368 =  HAnimSite();
HAnimSite368.X3DNode::setName(CString("l_tragion"));
HAnimSite368.setDEF(CString("hanim_l_tragion"));
HAnimSite368.setTranslation(new float[3]{0.0739,1.6348,0.0282});
TouchSensor& TouchSensor369 =  TouchSensor();
TouchSensor369.setDescription(CString("HAnimSite l_tragion"));
HAnimSite368.addChild(&TouchSensor369);

Shape& Shape370 =  Shape();
Shape370.setUSE(CString("HAnimSiteShape"));
HAnimSite368.addChild(&Shape370);

HAnimSegment348.addChild(&HAnimSite368);

HAnimSite& HAnimSite371 =  HAnimSite();
HAnimSite371.X3DNode::setName(CString("menton"));
HAnimSite371.setDEF(CString("hanim_menton"));
TouchSensor& TouchSensor372 =  TouchSensor();
TouchSensor372.setDescription(CString("HAnimSite menton"));
HAnimSite371.addChild(&TouchSensor372);

Shape& Shape373 =  Shape();
Shape373.setUSE(CString("HAnimSiteShape"));
HAnimSite371.addChild(&Shape373);

HAnimSegment348.addChild(&HAnimSite371);

HAnimSite& HAnimSite374 =  HAnimSite();
HAnimSite374.X3DNode::setName(CString("nuchale"));
HAnimSite374.setDEF(CString("hanim_nuchale"));
HAnimSite374.setTranslation(new float[3]{0.0039,1.5972,-0.0796});
TouchSensor& TouchSensor375 =  TouchSensor();
TouchSensor375.setDescription(CString("HAnimSite nuchale"));
HAnimSite374.addChild(&TouchSensor375);

Shape& Shape376 =  Shape();
Shape376.setUSE(CString("HAnimSiteShape"));
HAnimSite374.addChild(&Shape376);

HAnimSegment348.addChild(&HAnimSite374);

HAnimSite& HAnimSite377 =  HAnimSite();
HAnimSite377.X3DNode::setName(CString("opisthocranion"));
HAnimSite377.setDEF(CString("hanim_opisthocranion"));
TouchSensor& TouchSensor378 =  TouchSensor();
TouchSensor378.setDescription(CString("HAnimSite opisthocranion"));
HAnimSite377.addChild(&TouchSensor378);

Shape& Shape379 =  Shape();
Shape379.setUSE(CString("HAnimSiteShape"));
HAnimSite377.addChild(&Shape379);

HAnimSegment348.addChild(&HAnimSite377);

HAnimSite& HAnimSite380 =  HAnimSite();
HAnimSite380.X3DNode::setName(CString("r_ectocanthus"));
HAnimSite380.setDEF(CString("hanim_r_ectocanthus"));
TouchSensor& TouchSensor381 =  TouchSensor();
TouchSensor381.setDescription(CString("HAnimSite r_ectocanthus"));
HAnimSite380.addChild(&TouchSensor381);

Shape& Shape382 =  Shape();
Shape382.setUSE(CString("HAnimSiteShape"));
HAnimSite380.addChild(&Shape382);

HAnimSegment348.addChild(&HAnimSite380);

HAnimSite& HAnimSite383 =  HAnimSite();
HAnimSite383.X3DNode::setName(CString("r_gonion"));
HAnimSite383.setDEF(CString("hanim_r_gonion"));
HAnimSite383.setTranslation(new float[3]{-0.052,1.5529,0.0347});
TouchSensor& TouchSensor384 =  TouchSensor();
TouchSensor384.setDescription(CString("HAnimSite r_gonion"));
HAnimSite383.addChild(&TouchSensor384);

Shape& Shape385 =  Shape();
Shape385.setUSE(CString("HAnimSiteShape"));
HAnimSite383.addChild(&Shape385);

HAnimSegment348.addChild(&HAnimSite383);

HAnimSite& HAnimSite386 =  HAnimSite();
HAnimSite386.X3DNode::setName(CString("r_infraorbitale"));
HAnimSite386.setDEF(CString("hanim_r_infraorbitale"));
HAnimSite386.setTranslation(new float[3]{-0.0237,1.6171,0.0752});
TouchSensor& TouchSensor387 =  TouchSensor();
TouchSensor387.setDescription(CString("HAnimSite r_infraorbitale"));
HAnimSite386.addChild(&TouchSensor387);

Shape& Shape388 =  Shape();
Shape388.setUSE(CString("HAnimSiteShape"));
HAnimSite386.addChild(&Shape388);

HAnimSegment348.addChild(&HAnimSite386);

HAnimSite& HAnimSite389 =  HAnimSite();
HAnimSite389.X3DNode::setName(CString("r_tragion"));
HAnimSite389.setDEF(CString("hanim_r_tragion"));
HAnimSite389.setTranslation(new float[3]{-0.0646,1.6347,0.0302});
TouchSensor& TouchSensor390 =  TouchSensor();
TouchSensor390.setDescription(CString("HAnimSite r_tragion"));
HAnimSite389.addChild(&TouchSensor390);

Shape& Shape391 =  Shape();
Shape391.setUSE(CString("HAnimSiteShape"));
HAnimSite389.addChild(&Shape391);

HAnimSegment348.addChild(&HAnimSite389);

HAnimSite& HAnimSite392 =  HAnimSite();
HAnimSite392.X3DNode::setName(CString("sellion"));
HAnimSite392.setDEF(CString("hanim_sellion"));
HAnimSite392.setTranslation(new float[3]{0.0058,1.6316,0.0852});
TouchSensor& TouchSensor393 =  TouchSensor();
TouchSensor393.setDescription(CString("HAnimSite sellion"));
HAnimSite392.addChild(&TouchSensor393);

Shape& Shape394 =  Shape();
Shape394.setUSE(CString("HAnimSiteShape"));
HAnimSite392.addChild(&Shape394);

HAnimSegment348.addChild(&HAnimSite392);

HAnimSite& HAnimSite395 =  HAnimSite();
HAnimSite395.X3DNode::setName(CString("skull_vertex"));
HAnimSite395.setDEF(CString("hanim_skull_vertex"));
TouchSensor& TouchSensor396 =  TouchSensor();
TouchSensor396.setDescription(CString("HAnimSite skull_vertex"));
HAnimSite395.addChild(&TouchSensor396);

Shape& Shape397 =  Shape();
Shape397.setUSE(CString("HAnimSiteShape"));
HAnimSite395.addChild(&Shape397);

HAnimSegment348.addChild(&HAnimSite395);

HAnimSite& HAnimSite398 =  HAnimSite();
HAnimSite398.X3DNode::setName(CString("supramenton"));
HAnimSite398.setDEF(CString("hanim_supramenton"));
HAnimSite398.setTranslation(new float[3]{0.0061,1.541,0.0805});
TouchSensor& TouchSensor399 =  TouchSensor();
TouchSensor399.setDescription(CString("HAnimSite supramenton"));
HAnimSite398.addChild(&TouchSensor399);

Shape& Shape400 =  Shape();
Shape400.setUSE(CString("HAnimSiteShape"));
HAnimSite398.addChild(&Shape400);

HAnimSegment348.addChild(&HAnimSite398);

Shape& Shape401 =  Shape();
LineSet& LineSet402 =  LineSet();
LineSet402.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate403 =  Coordinate();
Coordinate403.setPoint(new float[6]{0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387}, 6);
LineSet402.setCoord(Coordinate403);

//from vl5 to l_shoulder vertices 2
ColorRGBA& ColorRGBA404 =  ColorRGBA();
ColorRGBA404.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet402.addChild(&ColorRGBA404);

Shape401.setGeometry(&LineSet402);

HAnimSegment348.addChild(&Shape401);

HAnimSite& HAnimSite405 =  HAnimSite();
HAnimSite405.X3DNode::setName(CString("l_bideltoid"));
HAnimSite405.setDEF(CString("hanim_l_bideltoid"));
TouchSensor& TouchSensor406 =  TouchSensor();
TouchSensor406.setDescription(CString("HAnimSite l_bideltoid"));
HAnimSite405.addChild(&TouchSensor406);

Shape& Shape407 =  Shape();
Shape407.setUSE(CString("HAnimSiteShape"));
HAnimSite405.addChild(&Shape407);

HAnimSegment348.addChild(&HAnimSite405);

HAnimSite& HAnimSite408 =  HAnimSite();
HAnimSite408.X3DNode::setName(CString("l_humeral_lateral_epicondyles"));
HAnimSite408.setDEF(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimSite408.setTranslation(new float[3]{0.228,1.1482,-0.11});
TouchSensor& TouchSensor409 =  TouchSensor();
TouchSensor409.setDescription(CString("HAnimSite l_humeral_lateral_epicondyles"));
HAnimSite408.addChild(&TouchSensor409);

Shape& Shape410 =  Shape();
Shape410.setUSE(CString("HAnimSiteShape"));
HAnimSite408.addChild(&Shape410);

HAnimSegment348.addChild(&HAnimSite408);

Shape& Shape411 =  Shape();
LineSet& LineSet412 =  LineSet();
LineSet412.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate413 =  Coordinate();
Coordinate413.setPoint(new float[6]{0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325}, 6);
LineSet412.setCoord(Coordinate413);

//from vl5 to r_shoulder vertices 2
ColorRGBA& ColorRGBA414 =  ColorRGBA();
ColorRGBA414.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet412.addChild(&ColorRGBA414);

Shape411.setGeometry(&LineSet412);

HAnimSegment348.addChild(&Shape411);

HAnimSite& HAnimSite415 =  HAnimSite();
HAnimSite415.X3DNode::setName(CString("r_bideltoid"));
HAnimSite415.setDEF(CString("hanim_r_bideltoid"));
TouchSensor& TouchSensor416 =  TouchSensor();
TouchSensor416.setDescription(CString("HAnimSite r_bideltoid"));
HAnimSite415.addChild(&TouchSensor416);

Shape& Shape417 =  Shape();
Shape417.setUSE(CString("HAnimSiteShape"));
HAnimSite415.addChild(&Shape417);

HAnimSegment348.addChild(&HAnimSite415);

HAnimSite& HAnimSite418 =  HAnimSite();
HAnimSite418.X3DNode::setName(CString("r_humeral_lateral_epicondyles"));
HAnimSite418.setDEF(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimSite418.setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
TouchSensor& TouchSensor419 =  TouchSensor();
TouchSensor419.setDescription(CString("HAnimSite r_humeral_lateral_epicondyles"));
HAnimSite418.addChild(&TouchSensor419);

Shape& Shape420 =  Shape();
Shape420.setUSE(CString("HAnimSiteShape"));
HAnimSite418.addChild(&Shape420);

HAnimSegment348.addChild(&HAnimSite418);

HAnimJoint347.addChildren(&HAnimSegment348);

HAnimJoint& HAnimJoint421 =  HAnimJoint();
HAnimJoint421.X3DNode::setName(CString("skullbase"));
HAnimJoint421.setDEF(CString("hanim_skullbase"));
HAnimJoint421.setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint421.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint421.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint347.addChildren(&HAnimJoint421);

HAnimJoint& HAnimJoint422 =  HAnimJoint();
HAnimJoint422.X3DNode::setName(CString("l_shoulder"));
HAnimJoint422.setDEF(CString("hanim_l_shoulder"));
HAnimJoint422.setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint422.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint422.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment423 =  HAnimSegment();
HAnimSegment423.X3DNode::setName(CString("l_upperarm"));
HAnimSegment423.setDEF(CString("hanim_l_upperarm"));
Transform& Transform424 =  Transform();
Transform424.setTranslation(new float[3]{0.2029,1.4376,-0.0387});
Transform& Transform425 =  Transform();
//Empty Transform
Shape& Shape426 =  Shape();
Shape426.setUSE(CString("HAnimJointShape"));
Transform425.addChild(&Shape426);

Transform424.addChild(&Transform425);

HAnimSegment423.addChild(&Transform424);

Shape& Shape427 =  Shape();
LineSet& LineSet428 =  LineSet();
LineSet428.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate429 =  Coordinate();
Coordinate429.setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet428.setCoord(Coordinate429);

//from l_shoulder to l_elbow vertices 2
ColorRGBA& ColorRGBA430 =  ColorRGBA();
ColorRGBA430.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet428.addChild(&ColorRGBA430);

Shape427.setGeometry(&LineSet428);

HAnimSegment423.addChild(&Shape427);

HAnimSite& HAnimSite431 =  HAnimSite();
HAnimSite431.X3DNode::setName(CString("l_humeral_medial_epicondyles"));
HAnimSite431.setDEF(CString("hanim_l_humeral_medial_epicondyles"));
HAnimSite431.setTranslation(new float[3]{0.1735,1.1272,-0.1113});
TouchSensor& TouchSensor432 =  TouchSensor();
TouchSensor432.setDescription(CString("HAnimSite l_humeral_medial_epicondyles"));
HAnimSite431.addChild(&TouchSensor432);

Shape& Shape433 =  Shape();
Shape433.setUSE(CString("HAnimSiteShape"));
HAnimSite431.addChild(&Shape433);

HAnimSegment423.addChild(&HAnimSite431);

HAnimSite& HAnimSite434 =  HAnimSite();
HAnimSite434.X3DNode::setName(CString("l_olecranon"));
HAnimSite434.setDEF(CString("hanim_l_olecranon"));
HAnimSite434.setTranslation(new float[3]{-0.1962,1.1375,-0.1123});
TouchSensor& TouchSensor435 =  TouchSensor();
TouchSensor435.setDescription(CString("HAnimSite l_olecranon"));
HAnimSite434.addChild(&TouchSensor435);

Shape& Shape436 =  Shape();
Shape436.setUSE(CString("HAnimSiteShape"));
HAnimSite434.addChild(&Shape436);

HAnimSegment423.addChild(&HAnimSite434);

HAnimSite& HAnimSite437 =  HAnimSite();
HAnimSite437.X3DNode::setName(CString("l_radial_styloid"));
HAnimSite437.setDEF(CString("hanim_l_radial_styloid"));
HAnimSite437.setTranslation(new float[3]{0.1901,0.8645,-0.0415});
TouchSensor& TouchSensor438 =  TouchSensor();
TouchSensor438.setDescription(CString("HAnimSite l_radial_styloid"));
HAnimSite437.addChild(&TouchSensor438);

Shape& Shape439 =  Shape();
Shape439.setUSE(CString("HAnimSiteShape"));
HAnimSite437.addChild(&Shape439);

HAnimSegment423.addChild(&HAnimSite437);

HAnimSite& HAnimSite440 =  HAnimSite();
HAnimSite440.X3DNode::setName(CString("l_radiale"));
HAnimSite440.setDEF(CString("hanim_l_radiale"));
HAnimSite440.setTranslation(new float[3]{0.2182,1.1212,-0.1167});
TouchSensor& TouchSensor441 =  TouchSensor();
TouchSensor441.setDescription(CString("HAnimSite l_radiale"));
HAnimSite440.addChild(&TouchSensor441);

Shape& Shape442 =  Shape();
Shape442.setUSE(CString("HAnimSiteShape"));
HAnimSite440.addChild(&Shape442);

HAnimSegment423.addChild(&HAnimSite440);

HAnimJoint422.addChildren(&HAnimSegment423);

HAnimJoint& HAnimJoint443 =  HAnimJoint();
HAnimJoint443.X3DNode::setName(CString("l_elbow"));
HAnimJoint443.setDEF(CString("hanim_l_elbow"));
HAnimJoint443.setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint443.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint443.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment444 =  HAnimSegment();
HAnimSegment444.X3DNode::setName(CString("l_forearm"));
HAnimSegment444.setDEF(CString("hanim_l_forearm"));
Transform& Transform445 =  Transform();
Transform445.setTranslation(new float[3]{0.2014,1.1357,-0.0682});
Transform& Transform446 =  Transform();
//Empty Transform
Shape& Shape447 =  Shape();
Shape447.setUSE(CString("HAnimJointShape"));
Transform446.addChild(&Shape447);

Transform445.addChild(&Transform446);

HAnimSegment444.addChild(&Transform445);

Shape& Shape448 =  Shape();
LineSet& LineSet449 =  LineSet();
LineSet449.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate450 =  Coordinate();
Coordinate450.setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet449.setCoord(Coordinate450);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA& ColorRGBA451 =  ColorRGBA();
ColorRGBA451.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet449.addChild(&ColorRGBA451);

Shape448.setGeometry(&LineSet449);

HAnimSegment444.addChild(&Shape448);

HAnimSite& HAnimSite452 =  HAnimSite();
HAnimSite452.X3DNode::setName(CString("l_carpal_distal_phalanx_1_tip"));
HAnimSite452.setDEF(CString("hanim_l_carpal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor453 =  TouchSensor();
TouchSensor453.setDescription(CString("HAnimSite l_carpal_distal_phalanx_1_tip"));
HAnimSite452.addChild(&TouchSensor453);

Shape& Shape454 =  Shape();
Shape454.setUSE(CString("HAnimSiteShape"));
HAnimSite452.addChild(&Shape454);

HAnimSegment444.addChild(&HAnimSite452);

HAnimSite& HAnimSite455 =  HAnimSite();
HAnimSite455.X3DNode::setName(CString("l_dactylion"));
HAnimSite455.setDEF(CString("hanim_l_dactylion"));
HAnimSite455.setTranslation(new float[3]{0.2056,0.6743,-0.0482});
TouchSensor& TouchSensor456 =  TouchSensor();
TouchSensor456.setDescription(CString("HAnimSite l_dactylion"));
HAnimSite455.addChild(&TouchSensor456);

Shape& Shape457 =  Shape();
Shape457.setUSE(CString("HAnimSiteShape"));
HAnimSite455.addChild(&Shape457);

HAnimSegment444.addChild(&HAnimSite455);

HAnimSite& HAnimSite458 =  HAnimSite();
HAnimSite458.X3DNode::setName(CString("l_metacarpal_phalanx_2"));
HAnimSite458.setDEF(CString("hanim_l_metacarpal_phalanx_2"));
HAnimSite458.setTranslation(new float[3]{0.2009,0.8139,-0.0237});
TouchSensor& TouchSensor459 =  TouchSensor();
TouchSensor459.setDescription(CString("HAnimSite l_metacarpal_phalanx_2"));
HAnimSite458.addChild(&TouchSensor459);

Shape& Shape460 =  Shape();
Shape460.setUSE(CString("HAnimSiteShape"));
HAnimSite458.addChild(&Shape460);

HAnimSegment444.addChild(&HAnimSite458);

HAnimSite& HAnimSite461 =  HAnimSite();
HAnimSite461.X3DNode::setName(CString("l_metacarpal_phalanx_3"));
HAnimSite461.setDEF(CString("hanim_l_metacarpal_phalanx_3"));
TouchSensor& TouchSensor462 =  TouchSensor();
TouchSensor462.setDescription(CString("HAnimSite l_metacarpal_phalanx_3"));
HAnimSite461.addChild(&TouchSensor462);

Shape& Shape463 =  Shape();
Shape463.setUSE(CString("HAnimSiteShape"));
HAnimSite461.addChild(&Shape463);

HAnimSegment444.addChild(&HAnimSite461);

HAnimSite& HAnimSite464 =  HAnimSite();
HAnimSite464.X3DNode::setName(CString("l_metacarpal_phalanx_5"));
HAnimSite464.setDEF(CString("hanim_l_metacarpal_phalanx_5"));
HAnimSite464.setTranslation(new float[3]{0.1929,0.786,-0.1122});
TouchSensor& TouchSensor465 =  TouchSensor();
TouchSensor465.setDescription(CString("HAnimSite l_metacarpal_phalanx_5"));
HAnimSite464.addChild(&TouchSensor465);

Shape& Shape466 =  Shape();
Shape466.setUSE(CString("HAnimSiteShape"));
HAnimSite464.addChild(&Shape466);

HAnimSegment444.addChild(&HAnimSite464);

HAnimSite& HAnimSite467 =  HAnimSite();
HAnimSite467.X3DNode::setName(CString("l_ulnar_styloid"));
HAnimSite467.setDEF(CString("hanim_l_ulnar_styloid"));
HAnimSite467.setTranslation(new float[3]{-0.2142,0.8529,-0.0648});
TouchSensor& TouchSensor468 =  TouchSensor();
TouchSensor468.setDescription(CString("HAnimSite l_ulnar_styloid"));
HAnimSite467.addChild(&TouchSensor468);

Shape& Shape469 =  Shape();
Shape469.setUSE(CString("HAnimSiteShape"));
HAnimSite467.addChild(&Shape469);

HAnimSegment444.addChild(&HAnimSite467);

HAnimJoint443.addChildren(&HAnimSegment444);

HAnimJoint& HAnimJoint470 =  HAnimJoint();
HAnimJoint470.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint470.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint470.setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint470.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint470.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint443.addChildren(&HAnimJoint470);

HAnimJoint422.addChildren(&HAnimJoint443);

HAnimJoint347.addChildren(&HAnimJoint422);

HAnimJoint& HAnimJoint471 =  HAnimJoint();
HAnimJoint471.X3DNode::setName(CString("r_shoulder"));
HAnimJoint471.setDEF(CString("hanim_r_shoulder"));
HAnimJoint471.setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint471.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint471.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment472 =  HAnimSegment();
HAnimSegment472.X3DNode::setName(CString("r_upperarm"));
HAnimSegment472.setDEF(CString("hanim_r_upperarm"));
Transform& Transform473 =  Transform();
Transform473.setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
Transform& Transform474 =  Transform();
//Empty Transform
Shape& Shape475 =  Shape();
Shape475.setUSE(CString("HAnimJointShape"));
Transform474.addChild(&Shape475);

Transform473.addChild(&Transform474);

HAnimSegment472.addChild(&Transform473);

Shape& Shape476 =  Shape();
LineSet& LineSet477 =  LineSet();
LineSet477.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate478 =  Coordinate();
Coordinate478.setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet477.setCoord(Coordinate478);

//from r_shoulder to r_elbow vertices 2
ColorRGBA& ColorRGBA479 =  ColorRGBA();
ColorRGBA479.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet477.addChild(&ColorRGBA479);

Shape476.setGeometry(&LineSet477);

HAnimSegment472.addChild(&Shape476);

HAnimSite& HAnimSite480 =  HAnimSite();
HAnimSite480.X3DNode::setName(CString("r_humeral_medial_epicondyles"));
HAnimSite480.setDEF(CString("hanim_r_humeral_medial_epicondyles"));
HAnimSite480.setTranslation(new float[3]{-0.168,1.1298,-0.1062});
TouchSensor& TouchSensor481 =  TouchSensor();
TouchSensor481.setDescription(CString("HAnimSite r_humeral_medial_epicondyles"));
HAnimSite480.addChild(&TouchSensor481);

Shape& Shape482 =  Shape();
Shape482.setUSE(CString("HAnimSiteShape"));
HAnimSite480.addChild(&Shape482);

HAnimSegment472.addChild(&HAnimSite480);

HAnimSite& HAnimSite483 =  HAnimSite();
HAnimSite483.X3DNode::setName(CString("r_olecranon"));
HAnimSite483.setDEF(CString("hanim_r_olecranon"));
HAnimSite483.setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
TouchSensor& TouchSensor484 =  TouchSensor();
TouchSensor484.setDescription(CString("HAnimSite r_olecranon"));
HAnimSite483.addChild(&TouchSensor484);

Shape& Shape485 =  Shape();
Shape485.setUSE(CString("HAnimSiteShape"));
HAnimSite483.addChild(&Shape485);

HAnimSegment472.addChild(&HAnimSite483);

HAnimSite& HAnimSite486 =  HAnimSite();
HAnimSite486.X3DNode::setName(CString("r_radial_styloid"));
HAnimSite486.setDEF(CString("hanim_r_radial_styloid"));
HAnimSite486.setTranslation(new float[3]{-0.1884,0.8676,-0.036});
TouchSensor& TouchSensor487 =  TouchSensor();
TouchSensor487.setDescription(CString("HAnimSite r_radial_styloid"));
HAnimSite486.addChild(&TouchSensor487);

Shape& Shape488 =  Shape();
Shape488.setUSE(CString("HAnimSiteShape"));
HAnimSite486.addChild(&Shape488);

HAnimSegment472.addChild(&HAnimSite486);

HAnimSite& HAnimSite489 =  HAnimSite();
HAnimSite489.X3DNode::setName(CString("r_radiale"));
HAnimSite489.setDEF(CString("hanim_r_radiale"));
HAnimSite489.setTranslation(new float[3]{-0.213,1.1305,-0.1091});
TouchSensor& TouchSensor490 =  TouchSensor();
TouchSensor490.setDescription(CString("HAnimSite r_radiale"));
HAnimSite489.addChild(&TouchSensor490);

Shape& Shape491 =  Shape();
Shape491.setUSE(CString("HAnimSiteShape"));
HAnimSite489.addChild(&Shape491);

HAnimSegment472.addChild(&HAnimSite489);

HAnimJoint471.addChildren(&HAnimSegment472);

HAnimJoint& HAnimJoint492 =  HAnimJoint();
HAnimJoint492.X3DNode::setName(CString("r_elbow"));
HAnimJoint492.setDEF(CString("hanim_r_elbow"));
HAnimJoint492.setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint492.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint492.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment493 =  HAnimSegment();
HAnimSegment493.X3DNode::setName(CString("r_forearm"));
HAnimSegment493.setDEF(CString("hanim_r_forearm"));
Transform& Transform494 =  Transform();
Transform494.setTranslation(new float[3]{-0.1949,1.1388,-0.062});
Transform& Transform495 =  Transform();
//Empty Transform
Shape& Shape496 =  Shape();
Shape496.setUSE(CString("HAnimJointShape"));
Transform495.addChild(&Shape496);

Transform494.addChild(&Transform495);

HAnimSegment493.addChild(&Transform494);

Shape& Shape497 =  Shape();
LineSet& LineSet498 =  LineSet();
LineSet498.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate499 =  Coordinate();
Coordinate499.setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet498.setCoord(Coordinate499);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA& ColorRGBA500 =  ColorRGBA();
ColorRGBA500.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet498.addChild(&ColorRGBA500);

Shape497.setGeometry(&LineSet498);

HAnimSegment493.addChild(&Shape497);

HAnimSite& HAnimSite501 =  HAnimSite();
HAnimSite501.X3DNode::setName(CString("r_carpal_distal_phalanx_1_tip"));
HAnimSite501.setDEF(CString("hanim_r_carpal_distal_phalanx_1_tip"));
TouchSensor& TouchSensor502 =  TouchSensor();
TouchSensor502.setDescription(CString("HAnimSite r_carpal_distal_phalanx_1_tip"));
HAnimSite501.addChild(&TouchSensor502);

Shape& Shape503 =  Shape();
Shape503.setUSE(CString("HAnimSiteShape"));
HAnimSite501.addChild(&Shape503);

HAnimSegment493.addChild(&HAnimSite501);

HAnimSite& HAnimSite504 =  HAnimSite();
HAnimSite504.X3DNode::setName(CString("r_dactylion"));
HAnimSite504.setDEF(CString("hanim_r_dactylion"));
HAnimSite504.setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
TouchSensor& TouchSensor505 =  TouchSensor();
TouchSensor505.setDescription(CString("HAnimSite r_dactylion"));
HAnimSite504.addChild(&TouchSensor505);

Shape& Shape506 =  Shape();
Shape506.setUSE(CString("HAnimSiteShape"));
HAnimSite504.addChild(&Shape506);

HAnimSegment493.addChild(&HAnimSite504);

HAnimSite& HAnimSite507 =  HAnimSite();
HAnimSite507.X3DNode::setName(CString("r_metacarpal_phalanx_2"));
HAnimSite507.setDEF(CString("hanim_r_metacarpal_phalanx_2"));
HAnimSite507.setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
TouchSensor& TouchSensor508 =  TouchSensor();
TouchSensor508.setDescription(CString("HAnimSite r_metacarpal_phalanx_2"));
HAnimSite507.addChild(&TouchSensor508);

Shape& Shape509 =  Shape();
Shape509.setUSE(CString("HAnimSiteShape"));
HAnimSite507.addChild(&Shape509);

HAnimSegment493.addChild(&HAnimSite507);

HAnimSite& HAnimSite510 =  HAnimSite();
HAnimSite510.X3DNode::setName(CString("r_metacarpal_phalanx_3"));
HAnimSite510.setDEF(CString("hanim_r_metacarpal_phalanx_3"));
TouchSensor& TouchSensor511 =  TouchSensor();
TouchSensor511.setDescription(CString("HAnimSite r_metacarpal_phalanx_3"));
HAnimSite510.addChild(&TouchSensor511);

Shape& Shape512 =  Shape();
Shape512.setUSE(CString("HAnimSiteShape"));
HAnimSite510.addChild(&Shape512);

HAnimSegment493.addChild(&HAnimSite510);

HAnimSite& HAnimSite513 =  HAnimSite();
HAnimSite513.X3DNode::setName(CString("r_metacarpal_phalanx_5"));
HAnimSite513.setDEF(CString("hanim_r_metacarpal_phalanx_5"));
HAnimSite513.setTranslation(new float[3]{-0.1929,0.789,-0.1064});
TouchSensor& TouchSensor514 =  TouchSensor();
TouchSensor514.setDescription(CString("HAnimSite r_metacarpal_phalanx_5"));
HAnimSite513.addChild(&TouchSensor514);

Shape& Shape515 =  Shape();
Shape515.setUSE(CString("HAnimSiteShape"));
HAnimSite513.addChild(&Shape515);

HAnimSegment493.addChild(&HAnimSite513);

HAnimSite& HAnimSite516 =  HAnimSite();
HAnimSite516.X3DNode::setName(CString("r_ulnar_styloid"));
HAnimSite516.setDEF(CString("hanim_r_ulnar_styloid"));
HAnimSite516.setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
TouchSensor& TouchSensor517 =  TouchSensor();
TouchSensor517.setDescription(CString("HAnimSite r_ulnar_styloid"));
HAnimSite516.addChild(&TouchSensor517);

Shape& Shape518 =  Shape();
Shape518.setUSE(CString("HAnimSiteShape"));
HAnimSite516.addChild(&Shape518);

HAnimSegment493.addChild(&HAnimSite516);

HAnimJoint492.addChildren(&HAnimSegment493);

HAnimJoint& HAnimJoint519 =  HAnimJoint();
HAnimJoint519.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint519.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint519.setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint519.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint519.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint492.addChildren(&HAnimJoint519);

HAnimJoint471.addChildren(&HAnimJoint492);

HAnimJoint347.addChildren(&HAnimJoint471);

HAnimJoint52.addChildren(&HAnimJoint347);

HAnimHumanoid43.setSkeleton(&HAnimJoint52);

HAnimJoint& HAnimJoint520 =  HAnimJoint();
HAnimJoint520.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid43.setJoints(&HAnimJoint520);

HAnimJoint& HAnimJoint521 =  HAnimJoint();
HAnimJoint521.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid43.setJoints(&HAnimJoint521);

HAnimJoint& HAnimJoint522 =  HAnimJoint();
HAnimJoint522.setUSE(CString("hanim_l_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint522);

HAnimJoint& HAnimJoint523 =  HAnimJoint();
HAnimJoint523.setUSE(CString("hanim_l_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint523);

HAnimJoint& HAnimJoint524 =  HAnimJoint();
HAnimJoint524.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint524);

HAnimJoint& HAnimJoint525 =  HAnimJoint();
HAnimJoint525.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint525);

HAnimJoint& HAnimJoint526 =  HAnimJoint();
HAnimJoint526.setUSE(CString("hanim_r_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint526);

HAnimJoint& HAnimJoint527 =  HAnimJoint();
HAnimJoint527.setUSE(CString("hanim_r_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint527);

HAnimJoint& HAnimJoint528 =  HAnimJoint();
HAnimJoint528.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint528);

HAnimJoint& HAnimJoint529 =  HAnimJoint();
HAnimJoint529.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint529);

HAnimJoint& HAnimJoint530 =  HAnimJoint();
HAnimJoint530.setUSE(CString("hanim_vl5"));
HAnimHumanoid43.setJoints(&HAnimJoint530);

HAnimJoint& HAnimJoint531 =  HAnimJoint();
HAnimJoint531.setUSE(CString("hanim_skullbase"));
HAnimHumanoid43.setJoints(&HAnimJoint531);

HAnimJoint& HAnimJoint532 =  HAnimJoint();
HAnimJoint532.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint532);

HAnimJoint& HAnimJoint533 =  HAnimJoint();
HAnimJoint533.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint533);

HAnimJoint& HAnimJoint534 =  HAnimJoint();
HAnimJoint534.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint534);

HAnimJoint& HAnimJoint535 =  HAnimJoint();
HAnimJoint535.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint535);

HAnimJoint& HAnimJoint536 =  HAnimJoint();
HAnimJoint536.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint536);

HAnimJoint& HAnimJoint537 =  HAnimJoint();
HAnimJoint537.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint537);

HAnimSegment& HAnimSegment538 =  HAnimSegment();
HAnimSegment538.setUSE(CString("hanim_sacrum"));
HAnimHumanoid43.setSegments(&HAnimSegment538);

HAnimSegment& HAnimSegment539 =  HAnimSegment();
HAnimSegment539.setUSE(CString("hanim_pelvis"));
HAnimHumanoid43.setSegments(&HAnimSegment539);

HAnimSegment& HAnimSegment540 =  HAnimSegment();
HAnimSegment540.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment540);

HAnimSegment& HAnimSegment541 =  HAnimSegment();
HAnimSegment541.setUSE(CString("hanim_l_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment541);

HAnimSegment& HAnimSegment542 =  HAnimSegment();
HAnimSegment542.setUSE(CString("hanim_l_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment542);

HAnimSegment& HAnimSegment543 =  HAnimSegment();
HAnimSegment543.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment543);

HAnimSegment& HAnimSegment544 =  HAnimSegment();
HAnimSegment544.setUSE(CString("hanim_r_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment544);

HAnimSegment& HAnimSegment545 =  HAnimSegment();
HAnimSegment545.setUSE(CString("hanim_r_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment545);

HAnimSegment& HAnimSegment546 =  HAnimSegment();
HAnimSegment546.setUSE(CString("hanim_l5"));
HAnimHumanoid43.setSegments(&HAnimSegment546);

HAnimSegment& HAnimSegment547 =  HAnimSegment();
HAnimSegment547.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment547);

HAnimSegment& HAnimSegment548 =  HAnimSegment();
HAnimSegment548.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment548);

HAnimSegment& HAnimSegment549 =  HAnimSegment();
HAnimSegment549.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment549);

HAnimSegment& HAnimSegment550 =  HAnimSegment();
HAnimSegment550.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment550);

HAnimSite& HAnimSite551 =  HAnimSite();
HAnimSite551.setUSE(CString("hanim_buttocks_standing_wall_contact_point"));
HAnimHumanoid43.setSites(&HAnimSite551);

HAnimSite& HAnimSite552 =  HAnimSite();
HAnimSite552.setUSE(CString("hanim_crotch"));
HAnimHumanoid43.setSites(&HAnimSite552);

HAnimSite& HAnimSite553 =  HAnimSite();
HAnimSite553.setUSE(CString("hanim_l_asis"));
HAnimHumanoid43.setSites(&HAnimSite553);

HAnimSite& HAnimSite554 =  HAnimSite();
HAnimSite554.setUSE(CString("hanim_l_iliocristale"));
HAnimHumanoid43.setSites(&HAnimSite554);

HAnimSite& HAnimSite555 =  HAnimSite();
HAnimSite555.setUSE(CString("hanim_l_psis"));
HAnimHumanoid43.setSites(&HAnimSite555);

HAnimSite& HAnimSite556 =  HAnimSite();
HAnimSite556.setUSE(CString("hanim_l_trochanterion"));
HAnimHumanoid43.setSites(&HAnimSite556);

HAnimSite& HAnimSite557 =  HAnimSite();
HAnimSite557.setUSE(CString("hanim_r_asis"));
HAnimHumanoid43.setSites(&HAnimSite557);

HAnimSite& HAnimSite558 =  HAnimSite();
HAnimSite558.setUSE(CString("hanim_r_iliocristale"));
HAnimHumanoid43.setSites(&HAnimSite558);

HAnimSite& HAnimSite559 =  HAnimSite();
HAnimSite559.setUSE(CString("hanim_r_psis"));
HAnimHumanoid43.setSites(&HAnimSite559);

HAnimSite& HAnimSite560 =  HAnimSite();
HAnimSite560.setUSE(CString("hanim_r_trochanterion"));
HAnimHumanoid43.setSites(&HAnimSite560);

HAnimSite& HAnimSite561 =  HAnimSite();
HAnimSite561.setUSE(CString("hanim_adams_apple"));
HAnimHumanoid43.setSites(&HAnimSite561);

HAnimSite& HAnimSite562 =  HAnimSite();
HAnimSite562.setUSE(CString("hanim_cervicale"));
HAnimHumanoid43.setSites(&HAnimSite562);

HAnimSite& HAnimSite563 =  HAnimSite();
HAnimSite563.setUSE(CString("hanim_l_acromion"));
HAnimHumanoid43.setSites(&HAnimSite563);

HAnimSite& HAnimSite564 =  HAnimSite();
HAnimSite564.setUSE(CString("hanim_l_axilla_distal_pt"));
HAnimHumanoid43.setSites(&HAnimSite564);

HAnimSite& HAnimSite565 =  HAnimSite();
HAnimSite565.setUSE(CString("hanim_l_axilla_posterior_folds"));
HAnimHumanoid43.setSites(&HAnimSite565);

HAnimSite& HAnimSite566 =  HAnimSite();
HAnimSite566.setUSE(CString("hanim_l_axilla_proximal"));
HAnimHumanoid43.setSites(&HAnimSite566);

HAnimSite& HAnimSite567 =  HAnimSite();
HAnimSite567.setUSE(CString("hanim_l_chest_midsagittal_plane"));
HAnimHumanoid43.setSites(&HAnimSite567);

HAnimSite& HAnimSite568 =  HAnimSite();
HAnimSite568.setUSE(CString("hanim_l_clavicale"));
HAnimHumanoid43.setSites(&HAnimSite568);

HAnimSite& HAnimSite569 =  HAnimSite();
HAnimSite569.setUSE(CString("hanim_l_neck_base"));
HAnimHumanoid43.setSites(&HAnimSite569);

HAnimSite& HAnimSite570 =  HAnimSite();
HAnimSite570.setUSE(CString("hanim_l_rib10"));
HAnimHumanoid43.setSites(&HAnimSite570);

HAnimSite& HAnimSite571 =  HAnimSite();
HAnimSite571.setUSE(CString("hanim_l_thelion"));
HAnimHumanoid43.setSites(&HAnimSite571);

HAnimSite& HAnimSite572 =  HAnimSite();
HAnimSite572.setUSE(CString("hanim_mesosternale"));
HAnimHumanoid43.setSites(&HAnimSite572);

HAnimSite& HAnimSite573 =  HAnimSite();
HAnimSite573.setUSE(CString("hanim_navel"));
HAnimHumanoid43.setSites(&HAnimSite573);

HAnimSite& HAnimSite574 =  HAnimSite();
HAnimSite574.setUSE(CString("hanim_r_acromion"));
HAnimHumanoid43.setSites(&HAnimSite574);

HAnimSite& HAnimSite575 =  HAnimSite();
HAnimSite575.setUSE(CString("hanim_r_axilla_distal_pt"));
HAnimHumanoid43.setSites(&HAnimSite575);

HAnimSite& HAnimSite576 =  HAnimSite();
HAnimSite576.setUSE(CString("hanim_r_axilla_posterior_folds"));
HAnimHumanoid43.setSites(&HAnimSite576);

HAnimSite& HAnimSite577 =  HAnimSite();
HAnimSite577.setUSE(CString("hanim_r_axilla_proximal"));
HAnimHumanoid43.setSites(&HAnimSite577);

HAnimSite& HAnimSite578 =  HAnimSite();
HAnimSite578.setUSE(CString("hanim_r_chest_midsagittal_plane"));
HAnimHumanoid43.setSites(&HAnimSite578);

HAnimSite& HAnimSite579 =  HAnimSite();
HAnimSite579.setUSE(CString("hanim_r_clavicale"));
HAnimHumanoid43.setSites(&HAnimSite579);

HAnimSite& HAnimSite580 =  HAnimSite();
HAnimSite580.setUSE(CString("hanim_r_neck_base"));
HAnimHumanoid43.setSites(&HAnimSite580);

HAnimSite& HAnimSite581 =  HAnimSite();
HAnimSite581.setUSE(CString("hanim_r_rib10"));
HAnimHumanoid43.setSites(&HAnimSite581);

HAnimSite& HAnimSite582 =  HAnimSite();
HAnimSite582.setUSE(CString("hanim_r_thelion"));
HAnimHumanoid43.setSites(&HAnimSite582);

HAnimSite& HAnimSite583 =  HAnimSite();
HAnimSite583.setUSE(CString("hanim_rear_center_midsagittal_plane"));
HAnimHumanoid43.setSites(&HAnimSite583);

HAnimSite& HAnimSite584 =  HAnimSite();
HAnimSite584.setUSE(CString("hanim_spine_1_middle_back"));
HAnimHumanoid43.setSites(&HAnimSite584);

HAnimSite& HAnimSite585 =  HAnimSite();
HAnimSite585.setUSE(CString("hanim_spine_2_middle_back"));
HAnimHumanoid43.setSites(&HAnimSite585);

HAnimSite& HAnimSite586 =  HAnimSite();
HAnimSite586.setUSE(CString("hanim_substernale"));
HAnimHumanoid43.setSites(&HAnimSite586);

HAnimSite& HAnimSite587 =  HAnimSite();
HAnimSite587.setUSE(CString("hanim_suprasternale"));
HAnimHumanoid43.setSites(&HAnimSite587);

HAnimSite& HAnimSite588 =  HAnimSite();
HAnimSite588.setUSE(CString("hanim_waist_preferred_anterior"));
HAnimHumanoid43.setSites(&HAnimSite588);

HAnimSite& HAnimSite589 =  HAnimSite();
HAnimSite589.setUSE(CString("hanim_waist_preferred_posterior"));
HAnimHumanoid43.setSites(&HAnimSite589);

HAnimSite& HAnimSite590 =  HAnimSite();
HAnimSite590.setUSE(CString("hanim_l_femoral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite590);

HAnimSite& HAnimSite591 =  HAnimSite();
HAnimSite591.setUSE(CString("hanim_l_femoral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite591);

HAnimSite& HAnimSite592 =  HAnimSite();
HAnimSite592.setUSE(CString("hanim_l_knee_crease"));
HAnimHumanoid43.setSites(&HAnimSite592);

HAnimSite& HAnimSite593 =  HAnimSite();
HAnimSite593.setUSE(CString("hanim_l_suprapatella"));
HAnimHumanoid43.setSites(&HAnimSite593);

HAnimSite& HAnimSite594 =  HAnimSite();
HAnimSite594.setUSE(CString("hanim_r_femoral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite594);

HAnimSite& HAnimSite595 =  HAnimSite();
HAnimSite595.setUSE(CString("hanim_r_femoral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite595);

HAnimSite& HAnimSite596 =  HAnimSite();
HAnimSite596.setUSE(CString("hanim_r_knee_crease"));
HAnimHumanoid43.setSites(&HAnimSite596);

HAnimSite& HAnimSite597 =  HAnimSite();
HAnimSite597.setUSE(CString("hanim_r_suprapatella"));
HAnimHumanoid43.setSites(&HAnimSite597);

HAnimSite& HAnimSite598 =  HAnimSite();
HAnimSite598.setUSE(CString("hanim_l_lateral_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite598);

HAnimSite& HAnimSite599 =  HAnimSite();
HAnimSite599.setUSE(CString("hanim_l_medial_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite599);

HAnimSite& HAnimSite600 =  HAnimSite();
HAnimSite600.setUSE(CString("hanim_l_tibiale"));
HAnimHumanoid43.setSites(&HAnimSite600);

HAnimSite& HAnimSite601 =  HAnimSite();
HAnimSite601.setUSE(CString("hanim_l_calcaneus_posterior"));
HAnimHumanoid43.setSites(&HAnimSite601);

HAnimSite& HAnimSite602 =  HAnimSite();
HAnimSite602.setUSE(CString("hanim_l_sphyrion"));
HAnimHumanoid43.setSites(&HAnimSite602);

HAnimSite& HAnimSite603 =  HAnimSite();
HAnimSite603.setUSE(CString("hanim_l_metatarsal_phalanx_1"));
HAnimHumanoid43.setSites(&HAnimSite603);

HAnimSite& HAnimSite604 =  HAnimSite();
HAnimSite604.setUSE(CString("hanim_l_metatarsal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite604);

HAnimSite& HAnimSite605 =  HAnimSite();
HAnimSite605.setUSE(CString("hanim_l_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite605);

HAnimSite& HAnimSite606 =  HAnimSite();
HAnimSite606.setUSE(CString("hanim_l_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite606);

HAnimSite& HAnimSite607 =  HAnimSite();
HAnimSite607.setUSE(CString("hanim_l_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite607);

HAnimSite& HAnimSite608 =  HAnimSite();
HAnimSite608.setUSE(CString("hanim_l_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite608);

HAnimSite& HAnimSite609 =  HAnimSite();
HAnimSite609.setUSE(CString("hanim_l_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite609);

HAnimSite& HAnimSite610 =  HAnimSite();
HAnimSite610.setUSE(CString("hanim_r_lateral_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite610);

HAnimSite& HAnimSite611 =  HAnimSite();
HAnimSite611.setUSE(CString("hanim_r_medial_malleolus"));
HAnimHumanoid43.setSites(&HAnimSite611);

HAnimSite& HAnimSite612 =  HAnimSite();
HAnimSite612.setUSE(CString("hanim_r_tibiale"));
HAnimHumanoid43.setSites(&HAnimSite612);

HAnimSite& HAnimSite613 =  HAnimSite();
HAnimSite613.setUSE(CString("hanim_r_calcaneus_posterior"));
HAnimHumanoid43.setSites(&HAnimSite613);

HAnimSite& HAnimSite614 =  HAnimSite();
HAnimSite614.setUSE(CString("hanim_r_sphyrion"));
HAnimHumanoid43.setSites(&HAnimSite614);

HAnimSite& HAnimSite615 =  HAnimSite();
HAnimSite615.setUSE(CString("hanim_r_metatarsal_phalanx_1"));
HAnimHumanoid43.setSites(&HAnimSite615);

HAnimSite& HAnimSite616 =  HAnimSite();
HAnimSite616.setUSE(CString("hanim_r_metatarsal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite616);

HAnimSite& HAnimSite617 =  HAnimSite();
HAnimSite617.setUSE(CString("hanim_r_tarsal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite617);

HAnimSite& HAnimSite618 =  HAnimSite();
HAnimSite618.setUSE(CString("hanim_r_tarsal_distal_phalanx_2_tip"));
HAnimHumanoid43.setSites(&HAnimSite618);

HAnimSite& HAnimSite619 =  HAnimSite();
HAnimSite619.setUSE(CString("hanim_r_tarsal_distal_phalanx_3_tip"));
HAnimHumanoid43.setSites(&HAnimSite619);

HAnimSite& HAnimSite620 =  HAnimSite();
HAnimSite620.setUSE(CString("hanim_r_tarsal_distal_phalanx_4_tip"));
HAnimHumanoid43.setSites(&HAnimSite620);

HAnimSite& HAnimSite621 =  HAnimSite();
HAnimSite621.setUSE(CString("hanim_r_tarsal_distal_phalanx_5_tip"));
HAnimHumanoid43.setSites(&HAnimSite621);

HAnimSite& HAnimSite622 =  HAnimSite();
HAnimSite622.setUSE(CString("hanim_glabella"));
HAnimHumanoid43.setSites(&HAnimSite622);

HAnimSite& HAnimSite623 =  HAnimSite();
HAnimSite623.setUSE(CString("hanim_l_ectocanthus"));
HAnimHumanoid43.setSites(&HAnimSite623);

HAnimSite& HAnimSite624 =  HAnimSite();
HAnimSite624.setUSE(CString("hanim_l_gonion"));
HAnimHumanoid43.setSites(&HAnimSite624);

HAnimSite& HAnimSite625 =  HAnimSite();
HAnimSite625.setUSE(CString("hanim_l_infraorbitale"));
HAnimHumanoid43.setSites(&HAnimSite625);

HAnimSite& HAnimSite626 =  HAnimSite();
HAnimSite626.setUSE(CString("hanim_l_tragion"));
HAnimHumanoid43.setSites(&HAnimSite626);

HAnimSite& HAnimSite627 =  HAnimSite();
HAnimSite627.setUSE(CString("hanim_menton"));
HAnimHumanoid43.setSites(&HAnimSite627);

HAnimSite& HAnimSite628 =  HAnimSite();
HAnimSite628.setUSE(CString("hanim_nuchale"));
HAnimHumanoid43.setSites(&HAnimSite628);

HAnimSite& HAnimSite629 =  HAnimSite();
HAnimSite629.setUSE(CString("hanim_opisthocranion"));
HAnimHumanoid43.setSites(&HAnimSite629);

HAnimSite& HAnimSite630 =  HAnimSite();
HAnimSite630.setUSE(CString("hanim_r_ectocanthus"));
HAnimHumanoid43.setSites(&HAnimSite630);

HAnimSite& HAnimSite631 =  HAnimSite();
HAnimSite631.setUSE(CString("hanim_r_gonion"));
HAnimHumanoid43.setSites(&HAnimSite631);

HAnimSite& HAnimSite632 =  HAnimSite();
HAnimSite632.setUSE(CString("hanim_r_infraorbitale"));
HAnimHumanoid43.setSites(&HAnimSite632);

HAnimSite& HAnimSite633 =  HAnimSite();
HAnimSite633.setUSE(CString("hanim_r_tragion"));
HAnimHumanoid43.setSites(&HAnimSite633);

HAnimSite& HAnimSite634 =  HAnimSite();
HAnimSite634.setUSE(CString("hanim_sellion"));
HAnimHumanoid43.setSites(&HAnimSite634);

HAnimSite& HAnimSite635 =  HAnimSite();
HAnimSite635.setUSE(CString("hanim_skull_vertex"));
HAnimHumanoid43.setSites(&HAnimSite635);

HAnimSite& HAnimSite636 =  HAnimSite();
HAnimSite636.setUSE(CString("hanim_supramenton"));
HAnimHumanoid43.setSites(&HAnimSite636);

HAnimSite& HAnimSite637 =  HAnimSite();
HAnimSite637.setUSE(CString("hanim_l_bideltoid"));
HAnimHumanoid43.setSites(&HAnimSite637);

HAnimSite& HAnimSite638 =  HAnimSite();
HAnimSite638.setUSE(CString("hanim_l_humeral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite638);

HAnimSite& HAnimSite639 =  HAnimSite();
HAnimSite639.setUSE(CString("hanim_r_bideltoid"));
HAnimHumanoid43.setSites(&HAnimSite639);

HAnimSite& HAnimSite640 =  HAnimSite();
HAnimSite640.setUSE(CString("hanim_r_humeral_lateral_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite640);

HAnimSite& HAnimSite641 =  HAnimSite();
HAnimSite641.setUSE(CString("hanim_l_humeral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite641);

HAnimSite& HAnimSite642 =  HAnimSite();
HAnimSite642.setUSE(CString("hanim_l_olecranon"));
HAnimHumanoid43.setSites(&HAnimSite642);

HAnimSite& HAnimSite643 =  HAnimSite();
HAnimSite643.setUSE(CString("hanim_l_radial_styloid"));
HAnimHumanoid43.setSites(&HAnimSite643);

HAnimSite& HAnimSite644 =  HAnimSite();
HAnimSite644.setUSE(CString("hanim_l_radiale"));
HAnimHumanoid43.setSites(&HAnimSite644);

HAnimSite& HAnimSite645 =  HAnimSite();
HAnimSite645.setUSE(CString("hanim_l_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite645);

HAnimSite& HAnimSite646 =  HAnimSite();
HAnimSite646.setUSE(CString("hanim_l_dactylion"));
HAnimHumanoid43.setSites(&HAnimSite646);

HAnimSite& HAnimSite647 =  HAnimSite();
HAnimSite647.setUSE(CString("hanim_l_metacarpal_phalanx_2"));
HAnimHumanoid43.setSites(&HAnimSite647);

HAnimSite& HAnimSite648 =  HAnimSite();
HAnimSite648.setUSE(CString("hanim_l_metacarpal_phalanx_3"));
HAnimHumanoid43.setSites(&HAnimSite648);

HAnimSite& HAnimSite649 =  HAnimSite();
HAnimSite649.setUSE(CString("hanim_l_metacarpal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite649);

HAnimSite& HAnimSite650 =  HAnimSite();
HAnimSite650.setUSE(CString("hanim_l_ulnar_styloid"));
HAnimHumanoid43.setSites(&HAnimSite650);

HAnimSite& HAnimSite651 =  HAnimSite();
HAnimSite651.setUSE(CString("hanim_r_humeral_medial_epicondyles"));
HAnimHumanoid43.setSites(&HAnimSite651);

HAnimSite& HAnimSite652 =  HAnimSite();
HAnimSite652.setUSE(CString("hanim_r_olecranon"));
HAnimHumanoid43.setSites(&HAnimSite652);

HAnimSite& HAnimSite653 =  HAnimSite();
HAnimSite653.setUSE(CString("hanim_r_radial_styloid"));
HAnimHumanoid43.setSites(&HAnimSite653);

HAnimSite& HAnimSite654 =  HAnimSite();
HAnimSite654.setUSE(CString("hanim_r_radiale"));
HAnimHumanoid43.setSites(&HAnimSite654);

HAnimSite& HAnimSite655 =  HAnimSite();
HAnimSite655.setUSE(CString("hanim_r_carpal_distal_phalanx_1_tip"));
HAnimHumanoid43.setSites(&HAnimSite655);

HAnimSite& HAnimSite656 =  HAnimSite();
HAnimSite656.setUSE(CString("hanim_r_dactylion"));
HAnimHumanoid43.setSites(&HAnimSite656);

HAnimSite& HAnimSite657 =  HAnimSite();
HAnimSite657.setUSE(CString("hanim_r_metacarpal_phalanx_2"));
HAnimHumanoid43.setSites(&HAnimSite657);

HAnimSite& HAnimSite658 =  HAnimSite();
HAnimSite658.setUSE(CString("hanim_r_metacarpal_phalanx_3"));
HAnimHumanoid43.setSites(&HAnimSite658);

HAnimSite& HAnimSite659 =  HAnimSite();
HAnimSite659.setUSE(CString("hanim_r_metacarpal_phalanx_5"));
HAnimHumanoid43.setSites(&HAnimSite659);

HAnimSite& HAnimSite660 =  HAnimSite();
HAnimSite660.setUSE(CString("hanim_r_ulnar_styloid"));
HAnimHumanoid43.setSites(&HAnimSite660);

Scene11.addChild(&HAnimHumanoid43);

X3D0.setScene(&Scene11);

}
