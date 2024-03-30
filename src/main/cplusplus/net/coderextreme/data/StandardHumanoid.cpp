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
meta3.setContent(CString("StandardHumanoid.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("identifier"));
meta4.setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoid.x3d"));
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

Shape& Shape61 =  Shape();
LineSet& LineSet62 =  LineSet();
LineSet62.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate63 =  Coordinate();
Coordinate63.setPoint(new float[6]{0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
LineSet62.setCoord(Coordinate63);

//from humanoid_root to vl5 vertices 2
ColorRGBA& ColorRGBA64 =  ColorRGBA();
ColorRGBA64.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet62.addChild(&ColorRGBA64);

Shape61.setGeometry(&LineSet62);

HAnimSegment53.addChild(&Shape61);

HAnimJoint52.addChildren(&HAnimSegment53);

HAnimJoint& HAnimJoint65 =  HAnimJoint();
HAnimJoint65.X3DNode::setName(CString("sacroiliac"));
HAnimJoint65.setDEF(CString("hanim_sacroiliac"));
HAnimJoint65.setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint65.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint65.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment66 =  HAnimSegment();
HAnimSegment66.X3DNode::setName(CString("pelvis"));
HAnimSegment66.setDEF(CString("hanim_pelvis"));
Transform& Transform67 =  Transform();
Transform67.setTranslation(new float[3]{0,0.9149,0.0016});
Transform& Transform68 =  Transform();
//Empty Transform
Shape& Shape69 =  Shape();
Shape69.setUSE(CString("HAnimJointShape"));
Transform68.addChild(&Shape69);

Transform67.addChild(&Transform68);

HAnimSegment66.addChild(&Transform67);

Shape& Shape70 =  Shape();
LineSet& LineSet71 =  LineSet();
LineSet71.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate72 =  Coordinate();
Coordinate72.setPoint(new float[6]{0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
LineSet71.setCoord(Coordinate72);

//from sacroiliac to l_hip vertices 2
ColorRGBA& ColorRGBA73 =  ColorRGBA();
ColorRGBA73.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet71.addChild(&ColorRGBA73);

Shape70.setGeometry(&LineSet71);

HAnimSegment66.addChild(&Shape70);

Shape& Shape74 =  Shape();
LineSet& LineSet75 =  LineSet();
LineSet75.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate76 =  Coordinate();
Coordinate76.setPoint(new float[6]{0,0.9149,0.0016,-0.095,0.9171,0.0029}, 6);
LineSet75.setCoord(Coordinate76);

//from sacroiliac to r_hip vertices 2
ColorRGBA& ColorRGBA77 =  ColorRGBA();
ColorRGBA77.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet75.addChild(&ColorRGBA77);

Shape74.setGeometry(&LineSet75);

HAnimSegment66.addChild(&Shape74);

HAnimJoint65.addChildren(&HAnimSegment66);

HAnimJoint& HAnimJoint78 =  HAnimJoint();
HAnimJoint78.X3DNode::setName(CString("l_hip"));
HAnimJoint78.setDEF(CString("hanim_l_hip"));
HAnimJoint78.setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint78.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint78.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment79 =  HAnimSegment();
HAnimSegment79.X3DNode::setName(CString("l_thigh"));
HAnimSegment79.setDEF(CString("hanim_l_thigh"));
Transform& Transform80 =  Transform();
Transform80.setTranslation(new float[3]{0.0961,0.9124,-0.0001});
Transform& Transform81 =  Transform();
//Empty Transform
Shape& Shape82 =  Shape();
Shape82.setUSE(CString("HAnimJointShape"));
Transform81.addChild(&Shape82);

Transform80.addChild(&Transform81);

HAnimSegment79.addChild(&Transform80);

Shape& Shape83 =  Shape();
LineSet& LineSet84 =  LineSet();
LineSet84.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate85 =  Coordinate();
Coordinate85.setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
LineSet84.setCoord(Coordinate85);

//from l_hip to l_knee vertices 2
ColorRGBA& ColorRGBA86 =  ColorRGBA();
ColorRGBA86.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet84.addChild(&ColorRGBA86);

Shape83.setGeometry(&LineSet84);

HAnimSegment79.addChild(&Shape83);

HAnimJoint78.addChildren(&HAnimSegment79);

HAnimJoint& HAnimJoint87 =  HAnimJoint();
HAnimJoint87.X3DNode::setName(CString("l_knee"));
HAnimJoint87.setDEF(CString("hanim_l_knee"));
HAnimJoint87.setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint87.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint87.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment88 =  HAnimSegment();
HAnimSegment88.X3DNode::setName(CString("l_calf"));
HAnimSegment88.setDEF(CString("hanim_l_calf"));
Transform& Transform89 =  Transform();
Transform89.setTranslation(new float[3]{0.104,0.4867,0.0308});
Transform& Transform90 =  Transform();
//Empty Transform
Shape& Shape91 =  Shape();
Shape91.setUSE(CString("HAnimJointShape"));
Transform90.addChild(&Shape91);

Transform89.addChild(&Transform90);

HAnimSegment88.addChild(&Transform89);

Shape& Shape92 =  Shape();
LineSet& LineSet93 =  LineSet();
LineSet93.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate94 =  Coordinate();
Coordinate94.setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
LineSet93.setCoord(Coordinate94);

//from l_knee to l_talocrural vertices 2
ColorRGBA& ColorRGBA95 =  ColorRGBA();
ColorRGBA95.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet93.addChild(&ColorRGBA95);

Shape92.setGeometry(&LineSet93);

HAnimSegment88.addChild(&Shape92);

HAnimJoint87.addChildren(&HAnimSegment88);

HAnimJoint& HAnimJoint96 =  HAnimJoint();
HAnimJoint96.X3DNode::setName(CString("l_talocrural"));
HAnimJoint96.setDEF(CString("hanim_l_talocrural"));
HAnimJoint96.setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint96.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint96.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment97 =  HAnimSegment();
HAnimSegment97.X3DNode::setName(CString("l_talus"));
HAnimSegment97.setDEF(CString("hanim_l_talus"));
Transform& Transform98 =  Transform();
Transform98.setScale(new float[3]{0.15,0.15,0.15});
Transform98.setTranslation(new float[3]{0.08,0.06,-0.025});
Transform98.setRotation(new float[4]{1,0,0,-1.57});
//Transform left foot
Transform& Transform99 =  Transform();
//Empty Transform left foot
Shape& Shape100 =  Shape();
Shape100.setUSE(CString("HAnimJointShape"));
Transform99.addChild(&Shape100);

Transform98.addChild(&Transform99);

HAnimSegment97.addChild(&Transform98);

Shape& Shape101 =  Shape();
LineSet& LineSet102 =  LineSet();
LineSet102.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate103 =  Coordinate();
Coordinate103.setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097}, 6);
LineSet102.setCoord(Coordinate103);

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA& ColorRGBA104 =  ColorRGBA();
ColorRGBA104.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet102.addChild(&ColorRGBA104);

Shape101.setGeometry(&LineSet102);

HAnimSegment97.addChild(&Shape101);

Shape& Shape105 =  Shape();
LineSet& LineSet106 =  LineSet();
LineSet106.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate107 =  Coordinate();
Coordinate107.setPoint(new float[6]{0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278}, 6);
LineSet106.setCoord(Coordinate107);

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA& ColorRGBA108 =  ColorRGBA();
ColorRGBA108.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet106.addChild(&ColorRGBA108);

Shape105.setGeometry(&LineSet106);

HAnimSegment97.addChild(&Shape105);

HAnimJoint96.addChildren(&HAnimSegment97);

HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.X3DNode::setName(CString("l_talocalcaneonavicular"));
HAnimJoint109.setDEF(CString("hanim_l_talocalcaneonavicular"));
HAnimJoint109.setCenter(new float[3]{0.0781,0.0283,-0.097});
HAnimJoint109.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint109.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment110 =  HAnimSegment();
HAnimSegment110.X3DNode::setName(CString("l_navicular"));
HAnimSegment110.setDEF(CString("hanim_l_navicular"));
Transform& Transform111 =  Transform();
Transform111.setTranslation(new float[3]{0.0781,0.0283,-0.097});
Transform& Transform112 =  Transform();
//Empty Transform
Shape& Shape113 =  Shape();
Shape113.setUSE(CString("HAnimJointShape"));
Transform112.addChild(&Shape113);

Transform111.addChild(&Transform112);

HAnimSegment110.addChild(&Transform111);

Shape& Shape114 =  Shape();
LineSet& LineSet115 =  LineSet();
LineSet115.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate116 =  Coordinate();
Coordinate116.setPoint(new float[6]{0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835}, 6);
LineSet115.setCoord(Coordinate116);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA& ColorRGBA117 =  ColorRGBA();
ColorRGBA117.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet115.addChild(&ColorRGBA117);

Shape114.setGeometry(&LineSet115);

HAnimSegment110.addChild(&Shape114);

Shape& Shape118 =  Shape();
LineSet& LineSet119 =  LineSet();
LineSet119.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate120 =  Coordinate();
Coordinate120.setPoint(new float[6]{0.0781,0.0283,-0.097,0.0812,0.025,-0.0805}, 6);
LineSet119.setCoord(Coordinate120);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA& ColorRGBA121 =  ColorRGBA();
ColorRGBA121.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet119.addChild(&ColorRGBA121);

Shape118.setGeometry(&LineSet119);

HAnimSegment110.addChild(&Shape118);

Shape& Shape122 =  Shape();
LineSet& LineSet123 =  LineSet();
LineSet123.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate124 =  Coordinate();
Coordinate124.setPoint(new float[6]{0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821}, 6);
LineSet123.setCoord(Coordinate124);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA& ColorRGBA125 =  ColorRGBA();
ColorRGBA125.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet123.addChild(&ColorRGBA125);

Shape122.setGeometry(&LineSet123);

HAnimSegment110.addChild(&Shape122);

HAnimJoint109.addChildren(&HAnimSegment110);

HAnimJoint& HAnimJoint126 =  HAnimJoint();
HAnimJoint126.X3DNode::setName(CString("l_cuneonavicular_1"));
HAnimJoint126.setDEF(CString("hanim_l_cuneonavicular_1"));
HAnimJoint126.setCenter(new float[3]{0.0672,0.0235,-0.0835});
HAnimJoint126.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint126.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment127 =  HAnimSegment();
HAnimSegment127.X3DNode::setName(CString("l_cuneiform_1"));
HAnimSegment127.setDEF(CString("hanim_l_cuneiform_1"));
Transform& Transform128 =  Transform();
Transform128.setTranslation(new float[3]{0.0672,0.0235,-0.0835});
Transform& Transform129 =  Transform();
//Empty Transform
Shape& Shape130 =  Shape();
Shape130.setUSE(CString("HAnimJointShape"));
Transform129.addChild(&Shape130);

Transform128.addChild(&Transform129);

HAnimSegment127.addChild(&Transform128);

Shape& Shape131 =  Shape();
LineSet& LineSet132 =  LineSet();
LineSet132.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate133 =  Coordinate();
Coordinate133.setPoint(new float[6]{0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577}, 6);
LineSet132.setCoord(Coordinate133);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA& ColorRGBA134 =  ColorRGBA();
ColorRGBA134.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet132.addChild(&ColorRGBA134);

Shape131.setGeometry(&LineSet132);

HAnimSegment127.addChild(&Shape131);

HAnimJoint126.addChildren(&HAnimSegment127);

HAnimJoint& HAnimJoint135 =  HAnimJoint();
HAnimJoint135.X3DNode::setName(CString("l_tarsometatarsal_1"));
HAnimJoint135.setDEF(CString("hanim_l_tarsometatarsal_1"));
HAnimJoint135.setCenter(new float[3]{0.0644,0.0147,-0.0577});
HAnimJoint135.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint135.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment136 =  HAnimSegment();
HAnimSegment136.X3DNode::setName(CString("l_metatarsal_1"));
HAnimSegment136.setDEF(CString("hanim_l_metatarsal_1"));
Transform& Transform137 =  Transform();
Transform137.setTranslation(new float[3]{0.0644,0.0147,-0.0577});
Transform& Transform138 =  Transform();
//Empty Transform
Shape& Shape139 =  Shape();
Shape139.setUSE(CString("HAnimJointShape"));
Transform138.addChild(&Shape139);

Transform137.addChild(&Transform138);

HAnimSegment136.addChild(&Transform137);

Shape& Shape140 =  Shape();
LineSet& LineSet141 =  LineSet();
LineSet141.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate142 =  Coordinate();
Coordinate142.setPoint(new float[6]{0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083}, 6);
LineSet141.setCoord(Coordinate142);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA& ColorRGBA143 =  ColorRGBA();
ColorRGBA143.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet141.addChild(&ColorRGBA143);

Shape140.setGeometry(&LineSet141);

HAnimSegment136.addChild(&Shape140);

HAnimJoint135.addChildren(&HAnimSegment136);

HAnimJoint& HAnimJoint144 =  HAnimJoint();
HAnimJoint144.X3DNode::setName(CString("l_metatarsophalangeal_1"));
HAnimJoint144.setDEF(CString("hanim_l_metatarsophalangeal_1"));
HAnimJoint144.setCenter(new float[3]{0.0619,0.0059,-0.0083});
HAnimJoint144.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint144.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment145 =  HAnimSegment();
HAnimSegment145.X3DNode::setName(CString("l_tarsal_proximal_phalanx_1"));
HAnimSegment145.setDEF(CString("hanim_l_tarsal_proximal_phalanx_1"));
Transform& Transform146 =  Transform();
Transform146.setTranslation(new float[3]{0.0619,0.0059,-0.0083});
Transform& Transform147 =  Transform();
//Empty Transform
Shape& Shape148 =  Shape();
Shape148.setUSE(CString("HAnimJointShape"));
Transform147.addChild(&Shape148);

Transform146.addChild(&Transform147);

HAnimSegment145.addChild(&Transform146);

Shape& Shape149 =  Shape();
LineSet& LineSet150 =  LineSet();
LineSet150.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate151 =  Coordinate();
Coordinate151.setPoint(new float[6]{0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083}, 6);
LineSet150.setCoord(Coordinate151);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA152 =  ColorRGBA();
ColorRGBA152.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet150.addChild(&ColorRGBA152);

Shape149.setGeometry(&LineSet150);

HAnimSegment145.addChild(&Shape149);

HAnimJoint144.addChildren(&HAnimSegment145);

HAnimJoint& HAnimJoint153 =  HAnimJoint();
HAnimJoint153.X3DNode::setName(CString("l_tarsal_interphalangeal_1"));
HAnimJoint153.setDEF(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimJoint153.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint153.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint144.addChildren(&HAnimJoint153);

HAnimJoint135.addChildren(&HAnimJoint144);

HAnimJoint126.addChildren(&HAnimJoint135);

HAnimJoint109.addChildren(&HAnimJoint126);

HAnimJoint& HAnimJoint154 =  HAnimJoint();
HAnimJoint154.X3DNode::setName(CString("l_cuneonavicular_2"));
HAnimJoint154.setDEF(CString("hanim_l_cuneonavicular_2"));
HAnimJoint154.setCenter(new float[3]{0.0812,0.025,-0.0805});
HAnimJoint154.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint154.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment155 =  HAnimSegment();
HAnimSegment155.X3DNode::setName(CString("l_cuneiform_2"));
HAnimSegment155.setDEF(CString("hanim_l_cuneiform_2"));
Transform& Transform156 =  Transform();
Transform156.setTranslation(new float[3]{0.0812,0.025,-0.0805});
Transform& Transform157 =  Transform();
//Empty Transform
Shape& Shape158 =  Shape();
Shape158.setUSE(CString("HAnimJointShape"));
Transform157.addChild(&Shape158);

Transform156.addChild(&Transform157);

HAnimSegment155.addChild(&Transform156);

Shape& Shape159 =  Shape();
LineSet& LineSet160 =  LineSet();
LineSet160.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate161 =  Coordinate();
Coordinate161.setPoint(new float[6]{0.0812,0.025,-0.0805,0.08,0.0175,-0.0608}, 6);
LineSet160.setCoord(Coordinate161);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA162 =  ColorRGBA();
ColorRGBA162.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet160.addChild(&ColorRGBA162);

Shape159.setGeometry(&LineSet160);

HAnimSegment155.addChild(&Shape159);

HAnimJoint154.addChildren(&HAnimSegment155);

HAnimJoint& HAnimJoint163 =  HAnimJoint();
HAnimJoint163.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint163.setDEF(CString("hanim_l_tarsometatarsal_2"));
HAnimJoint163.setCenter(new float[3]{0.08,0.0175,-0.0608});
HAnimJoint163.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint163.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment164 =  HAnimSegment();
HAnimSegment164.X3DNode::setName(CString("l_metatarsal_2"));
HAnimSegment164.setDEF(CString("hanim_l_metatarsal_2"));
Transform& Transform165 =  Transform();
Transform165.setTranslation(new float[3]{0.08,0.0175,-0.0608});
Transform& Transform166 =  Transform();
//Empty Transform
Shape& Shape167 =  Shape();
Shape167.setUSE(CString("HAnimJointShape"));
Transform166.addChild(&Shape167);

Transform165.addChild(&Transform166);

HAnimSegment164.addChild(&Transform165);

Shape& Shape168 =  Shape();
LineSet& LineSet169 =  LineSet();
LineSet169.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate170 =  Coordinate();
Coordinate170.setPoint(new float[6]{0.08,0.0175,-0.0608,0.0824,0.0064,-0.004}, 6);
LineSet169.setCoord(Coordinate170);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA& ColorRGBA171 =  ColorRGBA();
ColorRGBA171.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet169.addChild(&ColorRGBA171);

Shape168.setGeometry(&LineSet169);

HAnimSegment164.addChild(&Shape168);

HAnimJoint163.addChildren(&HAnimSegment164);

HAnimJoint& HAnimJoint172 =  HAnimJoint();
HAnimJoint172.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint172.setDEF(CString("hanim_l_metatarsophalangeal_2"));
HAnimJoint172.setCenter(new float[3]{0.0824,0.0064,-0.004});
HAnimJoint172.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint172.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment173 =  HAnimSegment();
HAnimSegment173.X3DNode::setName(CString("l_tarsal_proximal_phalanx_2"));
HAnimSegment173.setDEF(CString("hanim_l_tarsal_proximal_phalanx_2"));
Transform& Transform174 =  Transform();
Transform174.setTranslation(new float[3]{0.0824,0.0064,-0.004});
Transform& Transform175 =  Transform();
//Empty Transform
Shape& Shape176 =  Shape();
Shape176.setUSE(CString("HAnimJointShape"));
Transform175.addChild(&Shape176);

Transform174.addChild(&Transform175);

HAnimSegment173.addChild(&Transform174);

Shape& Shape177 =  Shape();
LineSet& LineSet178 =  LineSet();
LineSet178.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate179 =  Coordinate();
Coordinate179.setPoint(new float[6]{0.0824,0.0064,-0.004,0.0841,0.0041,0.0121}, 6);
LineSet178.setCoord(Coordinate179);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA180 =  ColorRGBA();
ColorRGBA180.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet178.addChild(&ColorRGBA180);

Shape177.setGeometry(&LineSet178);

HAnimSegment173.addChild(&Shape177);

HAnimJoint172.addChildren(&HAnimSegment173);

HAnimJoint& HAnimJoint181 =  HAnimJoint();
HAnimJoint181.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_2"));
HAnimJoint181.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimJoint181.setCenter(new float[3]{0.0841,0.0041,0.0121});
HAnimJoint181.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint181.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment182 =  HAnimSegment();
HAnimSegment182.X3DNode::setName(CString("l_tarsal_middle_phalanx_2"));
HAnimSegment182.setDEF(CString("hanim_l_tarsal_middle_phalanx_2"));
Transform& Transform183 =  Transform();
Transform183.setTranslation(new float[3]{0.0841,0.0041,0.0121});
Transform& Transform184 =  Transform();
//Empty Transform
Shape& Shape185 =  Shape();
Shape185.setUSE(CString("HAnimJointShape"));
Transform184.addChild(&Shape185);

Transform183.addChild(&Transform184);

HAnimSegment182.addChild(&Transform183);

Shape& Shape186 =  Shape();
LineSet& LineSet187 =  LineSet();
LineSet187.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate188 =  Coordinate();
Coordinate188.setPoint(new float[6]{0.0841,0.0041,0.0121,0.0841,0.0013,0.0216}, 6);
LineSet187.setCoord(Coordinate188);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA189 =  ColorRGBA();
ColorRGBA189.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet187.addChild(&ColorRGBA189);

Shape186.setGeometry(&LineSet187);

HAnimSegment182.addChild(&Shape186);

HAnimJoint181.addChildren(&HAnimSegment182);

HAnimJoint& HAnimJoint190 =  HAnimJoint();
HAnimJoint190.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint190.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimJoint190.setCenter(new float[3]{0.0841,0.0013,0.0216});
HAnimJoint190.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint190.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint181.addChildren(&HAnimJoint190);

HAnimJoint172.addChildren(&HAnimJoint181);

HAnimJoint163.addChildren(&HAnimJoint172);

HAnimJoint154.addChildren(&HAnimJoint163);

HAnimJoint109.addChildren(&HAnimJoint154);

HAnimJoint& HAnimJoint191 =  HAnimJoint();
HAnimJoint191.X3DNode::setName(CString("l_cuneonavicular_3"));
HAnimJoint191.setDEF(CString("hanim_l_cuneonavicular_3"));
HAnimJoint191.setCenter(new float[3]{0.0928,0.0248,-0.0821});
HAnimJoint191.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint191.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment192 =  HAnimSegment();
HAnimSegment192.X3DNode::setName(CString("l_cuneiform_3"));
HAnimSegment192.setDEF(CString("hanim_l_cuneiform_3"));
Transform& Transform193 =  Transform();
Transform193.setTranslation(new float[3]{0.0928,0.0248,-0.0821});
Transform& Transform194 =  Transform();
//Empty Transform
Shape& Shape195 =  Shape();
Shape195.setUSE(CString("HAnimJointShape"));
Transform194.addChild(&Shape195);

Transform193.addChild(&Transform194);

HAnimSegment192.addChild(&Transform193);

Shape& Shape196 =  Shape();
LineSet& LineSet197 =  LineSet();
LineSet197.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate198 =  Coordinate();
Coordinate198.setPoint(new float[6]{0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625}, 6);
LineSet197.setCoord(Coordinate198);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA& ColorRGBA199 =  ColorRGBA();
ColorRGBA199.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet197.addChild(&ColorRGBA199);

Shape196.setGeometry(&LineSet197);

HAnimSegment192.addChild(&Shape196);

HAnimJoint191.addChildren(&HAnimSegment192);

HAnimJoint& HAnimJoint200 =  HAnimJoint();
HAnimJoint200.X3DNode::setName(CString("l_tarsometatarsal_3"));
HAnimJoint200.setDEF(CString("hanim_l_tarsometatarsal_3"));
HAnimJoint200.setCenter(new float[3]{0.0944,0.0175,-0.0625});
HAnimJoint200.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint200.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment201 =  HAnimSegment();
HAnimSegment201.X3DNode::setName(CString("l_metatarsal_3"));
HAnimSegment201.setDEF(CString("hanim_l_metatarsal_3"));
Transform& Transform202 =  Transform();
Transform202.setTranslation(new float[3]{0.0944,0.0175,-0.0625});
Transform& Transform203 =  Transform();
//Empty Transform
Shape& Shape204 =  Shape();
Shape204.setUSE(CString("HAnimJointShape"));
Transform203.addChild(&Shape204);

Transform202.addChild(&Transform203);

HAnimSegment201.addChild(&Transform202);

Shape& Shape205 =  Shape();
LineSet& LineSet206 =  LineSet();
LineSet206.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate207 =  Coordinate();
Coordinate207.setPoint(new float[6]{0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065}, 6);
LineSet206.setCoord(Coordinate207);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA& ColorRGBA208 =  ColorRGBA();
ColorRGBA208.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet206.addChild(&ColorRGBA208);

Shape205.setGeometry(&LineSet206);

HAnimSegment201.addChild(&Shape205);

HAnimJoint200.addChildren(&HAnimSegment201);

HAnimJoint& HAnimJoint209 =  HAnimJoint();
HAnimJoint209.X3DNode::setName(CString("l_metatarsophalangeal_3"));
HAnimJoint209.setDEF(CString("hanim_l_metatarsophalangeal_3"));
HAnimJoint209.setCenter(new float[3]{0.0963,0.0065,-0.0065});
HAnimJoint209.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint209.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment210 =  HAnimSegment();
HAnimSegment210.X3DNode::setName(CString("l_tarsal_proximal_phalanx_3"));
HAnimSegment210.setDEF(CString("hanim_l_tarsal_proximal_phalanx_3"));
Transform& Transform211 =  Transform();
Transform211.setTranslation(new float[3]{0.0963,0.0065,-0.0065});
Transform& Transform212 =  Transform();
//Empty Transform
Shape& Shape213 =  Shape();
Shape213.setUSE(CString("HAnimJointShape"));
Transform212.addChild(&Shape213);

Transform211.addChild(&Transform212);

HAnimSegment210.addChild(&Transform211);

Shape& Shape214 =  Shape();
LineSet& LineSet215 =  LineSet();
LineSet215.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate216 =  Coordinate();
Coordinate216.setPoint(new float[6]{0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086}, 6);
LineSet215.setCoord(Coordinate216);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA217 =  ColorRGBA();
ColorRGBA217.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet215.addChild(&ColorRGBA217);

Shape214.setGeometry(&LineSet215);

HAnimSegment210.addChild(&Shape214);

HAnimJoint209.addChildren(&HAnimSegment210);

HAnimJoint& HAnimJoint218 =  HAnimJoint();
HAnimJoint218.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_3"));
HAnimJoint218.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimJoint218.setCenter(new float[3]{0.0987,0.0034,0.0086});
HAnimJoint218.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint218.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment219 =  HAnimSegment();
HAnimSegment219.X3DNode::setName(CString("l_tarsal_middle_phalanx_3"));
HAnimSegment219.setDEF(CString("hanim_l_tarsal_middle_phalanx_3"));
Transform& Transform220 =  Transform();
Transform220.setTranslation(new float[3]{0.0987,0.0034,0.0086});
Transform& Transform221 =  Transform();
//Empty Transform
Shape& Shape222 =  Shape();
Shape222.setUSE(CString("HAnimJointShape"));
Transform221.addChild(&Shape222);

Transform220.addChild(&Transform221);

HAnimSegment219.addChild(&Transform220);

Shape& Shape223 =  Shape();
LineSet& LineSet224 =  LineSet();
LineSet224.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate225 =  Coordinate();
Coordinate225.setPoint(new float[6]{0.0987,0.0034,0.0086,0.1002,0.0013,0.0178}, 6);
LineSet224.setCoord(Coordinate225);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA226 =  ColorRGBA();
ColorRGBA226.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet224.addChild(&ColorRGBA226);

Shape223.setGeometry(&LineSet224);

HAnimSegment219.addChild(&Shape223);

HAnimJoint218.addChildren(&HAnimSegment219);

HAnimJoint& HAnimJoint227 =  HAnimJoint();
HAnimJoint227.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_3"));
HAnimJoint227.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimJoint227.setCenter(new float[3]{0.1002,0.0013,0.0178});
HAnimJoint227.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint227.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint218.addChildren(&HAnimJoint227);

HAnimJoint209.addChildren(&HAnimJoint218);

HAnimJoint200.addChildren(&HAnimJoint209);

HAnimJoint191.addChildren(&HAnimJoint200);

HAnimJoint109.addChildren(&HAnimJoint191);

HAnimJoint96.addChildren(&HAnimJoint109);

HAnimJoint& HAnimJoint228 =  HAnimJoint();
HAnimJoint228.X3DNode::setName(CString("l_calcaneocuboid"));
HAnimJoint228.setDEF(CString("hanim_l_calcaneocuboid"));
HAnimJoint228.setCenter(new float[3]{0.0889,0.0494,-0.1278});
HAnimJoint228.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint228.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment229 =  HAnimSegment();
HAnimSegment229.X3DNode::setName(CString("l_calcaneus"));
HAnimSegment229.setDEF(CString("hanim_l_calcaneus"));
Transform& Transform230 =  Transform();
Transform230.setTranslation(new float[3]{0.0889,0.0494,-0.1278});
Transform& Transform231 =  Transform();
//Empty Transform
Shape& Shape232 =  Shape();
Shape232.setUSE(CString("HAnimJointShape"));
Transform231.addChild(&Shape232);

Transform230.addChild(&Transform231);

HAnimSegment229.addChild(&Transform230);

Shape& Shape233 =  Shape();
LineSet& LineSet234 =  LineSet();
LineSet234.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate235 =  Coordinate();
Coordinate235.setPoint(new float[6]{0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998}, 6);
LineSet234.setCoord(Coordinate235);

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA& ColorRGBA236 =  ColorRGBA();
ColorRGBA236.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet234.addChild(&ColorRGBA236);

Shape233.setGeometry(&LineSet234);

HAnimSegment229.addChild(&Shape233);

HAnimJoint228.addChildren(&HAnimSegment229);

HAnimJoint& HAnimJoint237 =  HAnimJoint();
HAnimJoint237.X3DNode::setName(CString("l_transversetarsal"));
HAnimJoint237.setDEF(CString("hanim_l_transversetarsal"));
HAnimJoint237.setCenter(new float[3]{0.1105,0.0267,-0.0998});
HAnimJoint237.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint237.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment238 =  HAnimSegment();
HAnimSegment238.X3DNode::setName(CString("l_cuboid"));
HAnimSegment238.setDEF(CString("hanim_l_cuboid"));
Transform& Transform239 =  Transform();
Transform239.setTranslation(new float[3]{0.1105,0.0267,-0.0998});
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
Coordinate244.setPoint(new float[6]{0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634}, 6);
LineSet243.setCoord(Coordinate244);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA& ColorRGBA245 =  ColorRGBA();
ColorRGBA245.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet243.addChild(&ColorRGBA245);

Shape242.setGeometry(&LineSet243);

HAnimSegment238.addChild(&Shape242);

Shape& Shape246 =  Shape();
LineSet& LineSet247 =  LineSet();
LineSet247.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate248 =  Coordinate();
Coordinate248.setPoint(new float[6]{0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671}, 6);
LineSet247.setCoord(Coordinate248);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA& ColorRGBA249 =  ColorRGBA();
ColorRGBA249.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet247.addChild(&ColorRGBA249);

Shape246.setGeometry(&LineSet247);

HAnimSegment238.addChild(&Shape246);

HAnimJoint237.addChildren(&HAnimSegment238);

HAnimJoint& HAnimJoint250 =  HAnimJoint();
HAnimJoint250.X3DNode::setName(CString("l_tarsometatarsal_4"));
HAnimJoint250.setDEF(CString("hanim_l_tarsometatarsal_4"));
HAnimJoint250.setCenter(new float[3]{0.1063,0.016,-0.0634});
HAnimJoint250.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint250.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment251 =  HAnimSegment();
HAnimSegment251.X3DNode::setName(CString("l_metatarsal_4"));
HAnimSegment251.setDEF(CString("hanim_l_metatarsal_4"));
Transform& Transform252 =  Transform();
Transform252.setTranslation(new float[3]{0.1063,0.016,-0.0634});
Transform& Transform253 =  Transform();
//Empty Transform
Shape& Shape254 =  Shape();
Shape254.setUSE(CString("HAnimJointShape"));
Transform253.addChild(&Shape254);

Transform252.addChild(&Transform253);

HAnimSegment251.addChild(&Transform252);

Shape& Shape255 =  Shape();
LineSet& LineSet256 =  LineSet();
LineSet256.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate257 =  Coordinate();
Coordinate257.setPoint(new float[6]{0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107}, 6);
LineSet256.setCoord(Coordinate257);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA& ColorRGBA258 =  ColorRGBA();
ColorRGBA258.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet256.addChild(&ColorRGBA258);

Shape255.setGeometry(&LineSet256);

HAnimSegment251.addChild(&Shape255);

HAnimJoint250.addChildren(&HAnimSegment251);

HAnimJoint& HAnimJoint259 =  HAnimJoint();
HAnimJoint259.X3DNode::setName(CString("l_metatarsophalangeal_4"));
HAnimJoint259.setDEF(CString("hanim_l_metatarsophalangeal_4"));
HAnimJoint259.setCenter(new float[3]{0.1097,0.0058,-0.0107});
HAnimJoint259.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint259.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment260 =  HAnimSegment();
HAnimSegment260.X3DNode::setName(CString("l_tarsal_proximal_phalanx_4"));
HAnimSegment260.setDEF(CString("hanim_l_tarsal_proximal_phalanx_4"));
Transform& Transform261 =  Transform();
Transform261.setTranslation(new float[3]{0.1097,0.0058,-0.0107});
Transform& Transform262 =  Transform();
//Empty Transform
Shape& Shape263 =  Shape();
Shape263.setUSE(CString("HAnimJointShape"));
Transform262.addChild(&Shape263);

Transform261.addChild(&Transform262);

HAnimSegment260.addChild(&Transform261);

Shape& Shape264 =  Shape();
LineSet& LineSet265 =  LineSet();
LineSet265.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate266 =  Coordinate();
Coordinate266.setPoint(new float[6]{0.1097,0.0058,-0.0107,0.114,0.0037,0.0044}, 6);
LineSet265.setCoord(Coordinate266);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA267 =  ColorRGBA();
ColorRGBA267.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet265.addChild(&ColorRGBA267);

Shape264.setGeometry(&LineSet265);

HAnimSegment260.addChild(&Shape264);

HAnimJoint259.addChildren(&HAnimSegment260);

HAnimJoint& HAnimJoint268 =  HAnimJoint();
HAnimJoint268.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_4"));
HAnimJoint268.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimJoint268.setCenter(new float[3]{0.114,0.0037,0.0044});
HAnimJoint268.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint268.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment269 =  HAnimSegment();
HAnimSegment269.X3DNode::setName(CString("l_tarsal_middle_phalanx_4"));
HAnimSegment269.setDEF(CString("hanim_l_tarsal_middle_phalanx_4"));
Transform& Transform270 =  Transform();
Transform270.setTranslation(new float[3]{0.114,0.0037,0.0044});
Transform& Transform271 =  Transform();
//Empty Transform
Shape& Shape272 =  Shape();
Shape272.setUSE(CString("HAnimJointShape"));
Transform271.addChild(&Shape272);

Transform270.addChild(&Transform271);

HAnimSegment269.addChild(&Transform270);

Shape& Shape273 =  Shape();
LineSet& LineSet274 =  LineSet();
LineSet274.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate275 =  Coordinate();
Coordinate275.setPoint(new float[6]{0.114,0.0037,0.0044,0.1155,0.0008,0.0118}, 6);
LineSet274.setCoord(Coordinate275);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA276 =  ColorRGBA();
ColorRGBA276.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet274.addChild(&ColorRGBA276);

Shape273.setGeometry(&LineSet274);

HAnimSegment269.addChild(&Shape273);

HAnimJoint268.addChildren(&HAnimSegment269);

HAnimJoint& HAnimJoint277 =  HAnimJoint();
HAnimJoint277.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_4"));
HAnimJoint277.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimJoint277.setCenter(new float[3]{0.1155,0.0008,0.0118});
HAnimJoint277.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint277.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint268.addChildren(&HAnimJoint277);

HAnimJoint259.addChildren(&HAnimJoint268);

HAnimJoint250.addChildren(&HAnimJoint259);

HAnimJoint237.addChildren(&HAnimJoint250);

HAnimJoint& HAnimJoint278 =  HAnimJoint();
HAnimJoint278.X3DNode::setName(CString("l_tarsometatarsal_5"));
HAnimJoint278.setDEF(CString("hanim_l_tarsometatarsal_5"));
HAnimJoint278.setCenter(new float[3]{0.1206,0.0124,-0.0671});
HAnimJoint278.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint278.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment279 =  HAnimSegment();
HAnimSegment279.X3DNode::setName(CString("l_metatarsal_5"));
HAnimSegment279.setDEF(CString("hanim_l_metatarsal_5"));
Transform& Transform280 =  Transform();
Transform280.setTranslation(new float[3]{0.1206,0.0124,-0.0671});
Transform& Transform281 =  Transform();
//Empty Transform
Shape& Shape282 =  Shape();
Shape282.setUSE(CString("HAnimJointShape"));
Transform281.addChild(&Shape282);

Transform280.addChild(&Transform281);

HAnimSegment279.addChild(&Transform280);

Shape& Shape283 =  Shape();
LineSet& LineSet284 =  LineSet();
LineSet284.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate285 =  Coordinate();
Coordinate285.setPoint(new float[6]{0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153}, 6);
LineSet284.setCoord(Coordinate285);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA& ColorRGBA286 =  ColorRGBA();
ColorRGBA286.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet284.addChild(&ColorRGBA286);

Shape283.setGeometry(&LineSet284);

HAnimSegment279.addChild(&Shape283);

HAnimJoint278.addChildren(&HAnimSegment279);

HAnimJoint& HAnimJoint287 =  HAnimJoint();
HAnimJoint287.X3DNode::setName(CString("l_metatarsophalangeal_5"));
HAnimJoint287.setDEF(CString("hanim_l_metatarsophalangeal_5"));
HAnimJoint287.setCenter(new float[3]{0.1239,0.0051,-0.0153});
HAnimJoint287.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint287.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment288 =  HAnimSegment();
HAnimSegment288.X3DNode::setName(CString("l_tarsal_proximal_phalanx_5"));
HAnimSegment288.setDEF(CString("hanim_l_tarsal_proximal_phalanx_5"));
Transform& Transform289 =  Transform();
Transform289.setTranslation(new float[3]{0.1239,0.0051,-0.0153});
Transform& Transform290 =  Transform();
//Empty Transform
Shape& Shape291 =  Shape();
Shape291.setUSE(CString("HAnimJointShape"));
Transform290.addChild(&Shape291);

Transform289.addChild(&Transform290);

HAnimSegment288.addChild(&Transform289);

Shape& Shape292 =  Shape();
LineSet& LineSet293 =  LineSet();
LineSet293.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate294 =  Coordinate();
Coordinate294.setPoint(new float[6]{0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077}, 6);
LineSet293.setCoord(Coordinate294);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA295 =  ColorRGBA();
ColorRGBA295.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet293.addChild(&ColorRGBA295);

Shape292.setGeometry(&LineSet293);

HAnimSegment288.addChild(&Shape292);

HAnimJoint287.addChildren(&HAnimSegment288);

HAnimJoint& HAnimJoint296 =  HAnimJoint();
HAnimJoint296.X3DNode::setName(CString("l_tarsal_proximal_interphalangeal_5"));
HAnimJoint296.setDEF(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimJoint296.setCenter(new float[3]{0.1262,0.0023,-0.0077});
HAnimJoint296.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint296.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment297 =  HAnimSegment();
HAnimSegment297.X3DNode::setName(CString("l_tarsal_middle_phalanx_5"));
HAnimSegment297.setDEF(CString("hanim_l_tarsal_middle_phalanx_5"));
Transform& Transform298 =  Transform();
Transform298.setTranslation(new float[3]{0.1262,0.0023,-0.0077});
Transform& Transform299 =  Transform();
//Empty Transform
Shape& Shape300 =  Shape();
Shape300.setUSE(CString("HAnimJointShape"));
Transform299.addChild(&Shape300);

Transform298.addChild(&Transform299);

HAnimSegment297.addChild(&Transform298);

Shape& Shape301 =  Shape();
LineSet& LineSet302 =  LineSet();
LineSet302.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate303 =  Coordinate();
Coordinate303.setPoint(new float[6]{0.1262,0.0023,-0.0077,0.1271,0,0}, 6);
LineSet302.setCoord(Coordinate303);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA304 =  ColorRGBA();
ColorRGBA304.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet302.addChild(&ColorRGBA304);

Shape301.setGeometry(&LineSet302);

HAnimSegment297.addChild(&Shape301);

HAnimJoint296.addChildren(&HAnimSegment297);

HAnimJoint& HAnimJoint305 =  HAnimJoint();
HAnimJoint305.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_5"));
HAnimJoint305.setDEF(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimJoint305.setCenter(new float[3]{0.1271,0,0});
HAnimJoint305.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint305.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint296.addChildren(&HAnimJoint305);

HAnimJoint287.addChildren(&HAnimJoint296);

HAnimJoint278.addChildren(&HAnimJoint287);

HAnimJoint237.addChildren(&HAnimJoint278);

HAnimJoint228.addChildren(&HAnimJoint237);

HAnimJoint96.addChildren(&HAnimJoint228);

HAnimJoint87.addChildren(&HAnimJoint96);

HAnimJoint78.addChildren(&HAnimJoint87);

HAnimJoint65.addChildren(&HAnimJoint78);

HAnimJoint& HAnimJoint306 =  HAnimJoint();
HAnimJoint306.X3DNode::setName(CString("r_hip"));
HAnimJoint306.setDEF(CString("hanim_r_hip"));
HAnimJoint306.setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint306.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint306.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment307 =  HAnimSegment();
HAnimSegment307.X3DNode::setName(CString("r_thigh"));
HAnimSegment307.setDEF(CString("hanim_r_thigh"));
Transform& Transform308 =  Transform();
Transform308.setTranslation(new float[3]{-0.095,0.9171,0.0029});
Transform& Transform309 =  Transform();
//Empty Transform
Shape& Shape310 =  Shape();
Shape310.setUSE(CString("HAnimJointShape"));
Transform309.addChild(&Shape310);

Transform308.addChild(&Transform309);

HAnimSegment307.addChild(&Transform308);

Shape& Shape311 =  Shape();
LineSet& LineSet312 =  LineSet();
LineSet312.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate313 =  Coordinate();
Coordinate313.setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
LineSet312.setCoord(Coordinate313);

//from r_hip to r_knee vertices 2
ColorRGBA& ColorRGBA314 =  ColorRGBA();
ColorRGBA314.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet312.addChild(&ColorRGBA314);

Shape311.setGeometry(&LineSet312);

HAnimSegment307.addChild(&Shape311);

HAnimJoint306.addChildren(&HAnimSegment307);

HAnimJoint& HAnimJoint315 =  HAnimJoint();
HAnimJoint315.X3DNode::setName(CString("r_knee"));
HAnimJoint315.setDEF(CString("hanim_r_knee"));
HAnimJoint315.setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint315.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint315.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment316 =  HAnimSegment();
HAnimSegment316.X3DNode::setName(CString("r_calf"));
HAnimSegment316.setDEF(CString("hanim_r_calf"));
Transform& Transform317 =  Transform();
Transform317.setTranslation(new float[3]{-0.0867,0.4913,0.0318});
Transform& Transform318 =  Transform();
//Empty Transform
Shape& Shape319 =  Shape();
Shape319.setUSE(CString("HAnimJointShape"));
Transform318.addChild(&Shape319);

Transform317.addChild(&Transform318);

HAnimSegment316.addChild(&Transform317);

Shape& Shape320 =  Shape();
LineSet& LineSet321 =  LineSet();
LineSet321.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate322 =  Coordinate();
Coordinate322.setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
LineSet321.setCoord(Coordinate322);

//from r_knee to r_talocrural vertices 2
ColorRGBA& ColorRGBA323 =  ColorRGBA();
ColorRGBA323.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet321.addChild(&ColorRGBA323);

Shape320.setGeometry(&LineSet321);

HAnimSegment316.addChild(&Shape320);

HAnimJoint315.addChildren(&HAnimSegment316);

HAnimJoint& HAnimJoint324 =  HAnimJoint();
HAnimJoint324.X3DNode::setName(CString("r_talocrural"));
HAnimJoint324.setDEF(CString("hanim_r_talocrural"));
HAnimJoint324.setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint324.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint324.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment325 =  HAnimSegment();
HAnimSegment325.X3DNode::setName(CString("r_talus"));
HAnimSegment325.setDEF(CString("hanim_r_talus"));
Transform& Transform326 =  Transform();
Transform326.setScale(new float[3]{0.15,0.15,0.15});
Transform326.setTranslation(new float[3]{-0.05,0.06,-0.025});
Transform326.setRotation(new float[4]{1,0,0,-1.57});
//Transform right foot
Transform& Transform327 =  Transform();
//Empty Transform right foot
Shape& Shape328 =  Shape();
Shape328.setUSE(CString("HAnimJointShape"));
Transform327.addChild(&Shape328);

Transform326.addChild(&Transform327);

HAnimSegment325.addChild(&Transform326);

Shape& Shape329 =  Shape();
LineSet& LineSet330 =  LineSet();
LineSet330.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate331 =  Coordinate();
Coordinate331.setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097}, 6);
LineSet330.setCoord(Coordinate331);

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA& ColorRGBA332 =  ColorRGBA();
ColorRGBA332.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet330.addChild(&ColorRGBA332);

Shape329.setGeometry(&LineSet330);

HAnimSegment325.addChild(&Shape329);

Shape& Shape333 =  Shape();
LineSet& LineSet334 =  LineSet();
LineSet334.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate335 =  Coordinate();
Coordinate335.setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278}, 6);
LineSet334.setCoord(Coordinate335);

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA& ColorRGBA336 =  ColorRGBA();
ColorRGBA336.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet334.addChild(&ColorRGBA336);

Shape333.setGeometry(&LineSet334);

HAnimSegment325.addChild(&Shape333);

HAnimJoint324.addChildren(&HAnimSegment325);

HAnimJoint& HAnimJoint337 =  HAnimJoint();
HAnimJoint337.X3DNode::setName(CString("r_talocalcaneonavicular"));
HAnimJoint337.setDEF(CString("hanim_r_talocalcaneonavicular"));
HAnimJoint337.setCenter(new float[3]{-0.0781,0.0283,-0.097});
HAnimJoint337.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint337.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment338 =  HAnimSegment();
HAnimSegment338.X3DNode::setName(CString("r_navicular"));
HAnimSegment338.setDEF(CString("hanim_r_navicular"));
Transform& Transform339 =  Transform();
Transform339.setTranslation(new float[3]{-0.0781,0.0283,-0.097});
Transform& Transform340 =  Transform();
//Empty Transform
Shape& Shape341 =  Shape();
Shape341.setUSE(CString("HAnimJointShape"));
Transform340.addChild(&Shape341);

Transform339.addChild(&Transform340);

HAnimSegment338.addChild(&Transform339);

Shape& Shape342 =  Shape();
LineSet& LineSet343 =  LineSet();
LineSet343.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate344 =  Coordinate();
Coordinate344.setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835}, 6);
LineSet343.setCoord(Coordinate344);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA& ColorRGBA345 =  ColorRGBA();
ColorRGBA345.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet343.addChild(&ColorRGBA345);

Shape342.setGeometry(&LineSet343);

HAnimSegment338.addChild(&Shape342);

Shape& Shape346 =  Shape();
LineSet& LineSet347 =  LineSet();
LineSet347.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate348 =  Coordinate();
Coordinate348.setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805}, 6);
LineSet347.setCoord(Coordinate348);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA& ColorRGBA349 =  ColorRGBA();
ColorRGBA349.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet347.addChild(&ColorRGBA349);

Shape346.setGeometry(&LineSet347);

HAnimSegment338.addChild(&Shape346);

Shape& Shape350 =  Shape();
LineSet& LineSet351 =  LineSet();
LineSet351.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate352 =  Coordinate();
Coordinate352.setPoint(new float[6]{-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821}, 6);
LineSet351.setCoord(Coordinate352);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA& ColorRGBA353 =  ColorRGBA();
ColorRGBA353.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet351.addChild(&ColorRGBA353);

Shape350.setGeometry(&LineSet351);

HAnimSegment338.addChild(&Shape350);

HAnimJoint337.addChildren(&HAnimSegment338);

HAnimJoint& HAnimJoint354 =  HAnimJoint();
HAnimJoint354.X3DNode::setName(CString("r_cuneonavicular_1"));
HAnimJoint354.setDEF(CString("hanim_r_cuneonavicular_1"));
HAnimJoint354.setCenter(new float[3]{-0.0672,0.0235,-0.0835});
HAnimJoint354.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint354.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment355 =  HAnimSegment();
HAnimSegment355.X3DNode::setName(CString("r_cuneiform_1"));
HAnimSegment355.setDEF(CString("hanim_r_cuneiform_1"));
Transform& Transform356 =  Transform();
Transform356.setTranslation(new float[3]{-0.0672,0.0235,-0.0835});
Transform& Transform357 =  Transform();
//Empty Transform
Shape& Shape358 =  Shape();
Shape358.setUSE(CString("HAnimJointShape"));
Transform357.addChild(&Shape358);

Transform356.addChild(&Transform357);

HAnimSegment355.addChild(&Transform356);

Shape& Shape359 =  Shape();
LineSet& LineSet360 =  LineSet();
LineSet360.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate361 =  Coordinate();
Coordinate361.setPoint(new float[6]{-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577}, 6);
LineSet360.setCoord(Coordinate361);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA& ColorRGBA362 =  ColorRGBA();
ColorRGBA362.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet360.addChild(&ColorRGBA362);

Shape359.setGeometry(&LineSet360);

HAnimSegment355.addChild(&Shape359);

HAnimJoint354.addChildren(&HAnimSegment355);

HAnimJoint& HAnimJoint363 =  HAnimJoint();
HAnimJoint363.X3DNode::setName(CString("r_tarsometatarsal_1"));
HAnimJoint363.setDEF(CString("hanim_r_tarsometatarsal_1"));
HAnimJoint363.setCenter(new float[3]{-0.0644,0.0147,-0.0577});
HAnimJoint363.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint363.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment364 =  HAnimSegment();
HAnimSegment364.X3DNode::setName(CString("r_metatarsal_1"));
HAnimSegment364.setDEF(CString("hanim_r_metatarsal_1"));
Transform& Transform365 =  Transform();
Transform365.setTranslation(new float[3]{-0.0644,0.0147,-0.0577});
Transform& Transform366 =  Transform();
//Empty Transform
Shape& Shape367 =  Shape();
Shape367.setUSE(CString("HAnimJointShape"));
Transform366.addChild(&Shape367);

Transform365.addChild(&Transform366);

HAnimSegment364.addChild(&Transform365);

Shape& Shape368 =  Shape();
LineSet& LineSet369 =  LineSet();
LineSet369.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate370 =  Coordinate();
Coordinate370.setPoint(new float[6]{-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083}, 6);
LineSet369.setCoord(Coordinate370);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA& ColorRGBA371 =  ColorRGBA();
ColorRGBA371.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet369.addChild(&ColorRGBA371);

Shape368.setGeometry(&LineSet369);

HAnimSegment364.addChild(&Shape368);

HAnimJoint363.addChildren(&HAnimSegment364);

HAnimJoint& HAnimJoint372 =  HAnimJoint();
HAnimJoint372.X3DNode::setName(CString("r_metatarsophalangeal_1"));
HAnimJoint372.setDEF(CString("hanim_r_metatarsophalangeal_1"));
HAnimJoint372.setCenter(new float[3]{-0.0619,0.0059,-0.0083});
HAnimJoint372.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint372.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment373 =  HAnimSegment();
HAnimSegment373.X3DNode::setName(CString("r_tarsal_proximal_phalanx_1"));
HAnimSegment373.setDEF(CString("hanim_r_tarsal_proximal_phalanx_1"));
Transform& Transform374 =  Transform();
Transform374.setTranslation(new float[3]{-0.0619,0.0059,-0.0083});
Transform& Transform375 =  Transform();
//Empty Transform
Shape& Shape376 =  Shape();
Shape376.setUSE(CString("HAnimJointShape"));
Transform375.addChild(&Shape376);

Transform374.addChild(&Transform375);

HAnimSegment373.addChild(&Transform374);

Shape& Shape377 =  Shape();
LineSet& LineSet378 =  LineSet();
LineSet378.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate379 =  Coordinate();
Coordinate379.setPoint(new float[6]{-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083}, 6);
LineSet378.setCoord(Coordinate379);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA380 =  ColorRGBA();
ColorRGBA380.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet378.addChild(&ColorRGBA380);

Shape377.setGeometry(&LineSet378);

HAnimSegment373.addChild(&Shape377);

HAnimJoint372.addChildren(&HAnimSegment373);

HAnimJoint& HAnimJoint381 =  HAnimJoint();
HAnimJoint381.X3DNode::setName(CString("r_tarsal_interphalangeal_1"));
HAnimJoint381.setDEF(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimJoint381.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint381.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint372.addChildren(&HAnimJoint381);

HAnimJoint363.addChildren(&HAnimJoint372);

HAnimJoint354.addChildren(&HAnimJoint363);

HAnimJoint337.addChildren(&HAnimJoint354);

HAnimJoint& HAnimJoint382 =  HAnimJoint();
HAnimJoint382.X3DNode::setName(CString("r_cuneonavicular_2"));
HAnimJoint382.setDEF(CString("hanim_r_cuneonavicular_2"));
HAnimJoint382.setCenter(new float[3]{-0.0812,0.025,-0.0805});
HAnimJoint382.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint382.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment383 =  HAnimSegment();
HAnimSegment383.X3DNode::setName(CString("r_cuneiform_2"));
HAnimSegment383.setDEF(CString("hanim_r_cuneiform_2"));
Transform& Transform384 =  Transform();
Transform384.setTranslation(new float[3]{-0.0812,0.025,-0.0805});
Transform& Transform385 =  Transform();
//Empty Transform
Shape& Shape386 =  Shape();
Shape386.setUSE(CString("HAnimJointShape"));
Transform385.addChild(&Shape386);

Transform384.addChild(&Transform385);

HAnimSegment383.addChild(&Transform384);

Shape& Shape387 =  Shape();
LineSet& LineSet388 =  LineSet();
LineSet388.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate389 =  Coordinate();
Coordinate389.setPoint(new float[6]{-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608}, 6);
LineSet388.setCoord(Coordinate389);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA& ColorRGBA390 =  ColorRGBA();
ColorRGBA390.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet388.addChild(&ColorRGBA390);

Shape387.setGeometry(&LineSet388);

HAnimSegment383.addChild(&Shape387);

HAnimJoint382.addChildren(&HAnimSegment383);

HAnimJoint& HAnimJoint391 =  HAnimJoint();
HAnimJoint391.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint391.setDEF(CString("hanim_r_tarsometatarsal_2"));
HAnimJoint391.setCenter(new float[3]{-0.08,0.0175,-0.0608});
HAnimJoint391.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint391.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment392 =  HAnimSegment();
HAnimSegment392.X3DNode::setName(CString("r_metatarsal_2"));
HAnimSegment392.setDEF(CString("hanim_r_metatarsal_2"));
Transform& Transform393 =  Transform();
Transform393.setTranslation(new float[3]{-0.08,0.0175,-0.0608});
Transform& Transform394 =  Transform();
//Empty Transform
Shape& Shape395 =  Shape();
Shape395.setUSE(CString("HAnimJointShape"));
Transform394.addChild(&Shape395);

Transform393.addChild(&Transform394);

HAnimSegment392.addChild(&Transform393);

Shape& Shape396 =  Shape();
LineSet& LineSet397 =  LineSet();
LineSet397.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate398 =  Coordinate();
Coordinate398.setPoint(new float[6]{-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004}, 6);
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
HAnimJoint400.setCenter(new float[3]{-0.0823,0.0064,-0.004});
HAnimJoint400.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint400.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment401 =  HAnimSegment();
HAnimSegment401.X3DNode::setName(CString("r_tarsal_proximal_phalanx_2"));
HAnimSegment401.setDEF(CString("hanim_r_tarsal_proximal_phalanx_2"));
Transform& Transform402 =  Transform();
Transform402.setTranslation(new float[3]{-0.0823,0.0064,-0.004});
Transform& Transform403 =  Transform();
//Empty Transform
Shape& Shape404 =  Shape();
Shape404.setUSE(CString("HAnimJointShape"));
Transform403.addChild(&Shape404);

Transform402.addChild(&Transform403);

HAnimSegment401.addChild(&Transform402);

Shape& Shape405 =  Shape();
LineSet& LineSet406 =  LineSet();
LineSet406.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate407 =  Coordinate();
Coordinate407.setPoint(new float[6]{-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121}, 6);
LineSet406.setCoord(Coordinate407);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA408 =  ColorRGBA();
ColorRGBA408.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet406.addChild(&ColorRGBA408);

Shape405.setGeometry(&LineSet406);

HAnimSegment401.addChild(&Shape405);

HAnimJoint400.addChildren(&HAnimSegment401);

HAnimJoint& HAnimJoint409 =  HAnimJoint();
HAnimJoint409.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_2"));
HAnimJoint409.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimJoint409.setCenter(new float[3]{-0.0841,0.0041,0.0121});
HAnimJoint409.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint409.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment410 =  HAnimSegment();
HAnimSegment410.X3DNode::setName(CString("r_tarsal_middle_phalanx_2"));
HAnimSegment410.setDEF(CString("hanim_r_tarsal_middle_phalanx_2"));
Transform& Transform411 =  Transform();
Transform411.setTranslation(new float[3]{-0.0841,0.0041,0.0121});
Transform& Transform412 =  Transform();
//Empty Transform
Shape& Shape413 =  Shape();
Shape413.setUSE(CString("HAnimJointShape"));
Transform412.addChild(&Shape413);

Transform411.addChild(&Transform412);

HAnimSegment410.addChild(&Transform411);

Shape& Shape414 =  Shape();
LineSet& LineSet415 =  LineSet();
LineSet415.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate416 =  Coordinate();
Coordinate416.setPoint(new float[6]{-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216}, 6);
LineSet415.setCoord(Coordinate416);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA417 =  ColorRGBA();
ColorRGBA417.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet415.addChild(&ColorRGBA417);

Shape414.setGeometry(&LineSet415);

HAnimSegment410.addChild(&Shape414);

HAnimJoint409.addChildren(&HAnimSegment410);

HAnimJoint& HAnimJoint418 =  HAnimJoint();
HAnimJoint418.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint418.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimJoint418.setCenter(new float[3]{-0.0841,0.0013,0.0216});
HAnimJoint418.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint418.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint409.addChildren(&HAnimJoint418);

HAnimJoint400.addChildren(&HAnimJoint409);

HAnimJoint391.addChildren(&HAnimJoint400);

HAnimJoint382.addChildren(&HAnimJoint391);

HAnimJoint337.addChildren(&HAnimJoint382);

HAnimJoint& HAnimJoint419 =  HAnimJoint();
HAnimJoint419.X3DNode::setName(CString("r_cuneonavicular_3"));
HAnimJoint419.setDEF(CString("hanim_r_cuneonavicular_3"));
HAnimJoint419.setCenter(new float[3]{-0.0928,0.0248,-0.0821});
HAnimJoint419.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint419.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment420 =  HAnimSegment();
HAnimSegment420.X3DNode::setName(CString("r_cuneiform_3"));
HAnimSegment420.setDEF(CString("hanim_r_cuneiform_3"));
Transform& Transform421 =  Transform();
Transform421.setTranslation(new float[3]{-0.0928,0.0248,-0.0821});
Transform& Transform422 =  Transform();
//Empty Transform
Shape& Shape423 =  Shape();
Shape423.setUSE(CString("HAnimJointShape"));
Transform422.addChild(&Shape423);

Transform421.addChild(&Transform422);

HAnimSegment420.addChild(&Transform421);

Shape& Shape424 =  Shape();
LineSet& LineSet425 =  LineSet();
LineSet425.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate426 =  Coordinate();
Coordinate426.setPoint(new float[6]{-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625}, 6);
LineSet425.setCoord(Coordinate426);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA& ColorRGBA427 =  ColorRGBA();
ColorRGBA427.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet425.addChild(&ColorRGBA427);

Shape424.setGeometry(&LineSet425);

HAnimSegment420.addChild(&Shape424);

HAnimJoint419.addChildren(&HAnimSegment420);

HAnimJoint& HAnimJoint428 =  HAnimJoint();
HAnimJoint428.X3DNode::setName(CString("r_tarsometatarsal_3"));
HAnimJoint428.setDEF(CString("hanim_r_tarsometatarsal_3"));
HAnimJoint428.setCenter(new float[3]{-0.0944,0.0175,-0.0625});
HAnimJoint428.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint428.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment429 =  HAnimSegment();
HAnimSegment429.X3DNode::setName(CString("r_metatarsal_3"));
HAnimSegment429.setDEF(CString("hanim_r_metatarsal_3"));
Transform& Transform430 =  Transform();
Transform430.setTranslation(new float[3]{-0.0944,0.0175,-0.0625});
Transform& Transform431 =  Transform();
//Empty Transform
Shape& Shape432 =  Shape();
Shape432.setUSE(CString("HAnimJointShape"));
Transform431.addChild(&Shape432);

Transform430.addChild(&Transform431);

HAnimSegment429.addChild(&Transform430);

Shape& Shape433 =  Shape();
LineSet& LineSet434 =  LineSet();
LineSet434.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate435 =  Coordinate();
Coordinate435.setPoint(new float[6]{-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065}, 6);
LineSet434.setCoord(Coordinate435);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA& ColorRGBA436 =  ColorRGBA();
ColorRGBA436.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet434.addChild(&ColorRGBA436);

Shape433.setGeometry(&LineSet434);

HAnimSegment429.addChild(&Shape433);

HAnimJoint428.addChildren(&HAnimSegment429);

HAnimJoint& HAnimJoint437 =  HAnimJoint();
HAnimJoint437.X3DNode::setName(CString("r_metatarsophalangeal_3"));
HAnimJoint437.setDEF(CString("hanim_r_metatarsophalangeal_3"));
HAnimJoint437.setCenter(new float[3]{-0.0963,0.0065,-0.0065});
HAnimJoint437.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint437.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment438 =  HAnimSegment();
HAnimSegment438.X3DNode::setName(CString("r_tarsal_proximal_phalanx_3"));
HAnimSegment438.setDEF(CString("hanim_r_tarsal_proximal_phalanx_3"));
Transform& Transform439 =  Transform();
Transform439.setTranslation(new float[3]{-0.0963,0.0065,-0.0065});
Transform& Transform440 =  Transform();
//Empty Transform
Shape& Shape441 =  Shape();
Shape441.setUSE(CString("HAnimJointShape"));
Transform440.addChild(&Shape441);

Transform439.addChild(&Transform440);

HAnimSegment438.addChild(&Transform439);

Shape& Shape442 =  Shape();
LineSet& LineSet443 =  LineSet();
LineSet443.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate444 =  Coordinate();
Coordinate444.setPoint(new float[6]{-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086}, 6);
LineSet443.setCoord(Coordinate444);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA445 =  ColorRGBA();
ColorRGBA445.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet443.addChild(&ColorRGBA445);

Shape442.setGeometry(&LineSet443);

HAnimSegment438.addChild(&Shape442);

HAnimJoint437.addChildren(&HAnimSegment438);

HAnimJoint& HAnimJoint446 =  HAnimJoint();
HAnimJoint446.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_3"));
HAnimJoint446.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimJoint446.setCenter(new float[3]{-0.0987,0.0034,0.0086});
HAnimJoint446.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint446.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment447 =  HAnimSegment();
HAnimSegment447.X3DNode::setName(CString("r_tarsal_middle_phalanx_3"));
HAnimSegment447.setDEF(CString("hanim_r_tarsal_middle_phalanx_3"));
Transform& Transform448 =  Transform();
Transform448.setTranslation(new float[3]{-0.0987,0.0034,0.0086});
Transform& Transform449 =  Transform();
//Empty Transform
Shape& Shape450 =  Shape();
Shape450.setUSE(CString("HAnimJointShape"));
Transform449.addChild(&Shape450);

Transform448.addChild(&Transform449);

HAnimSegment447.addChild(&Transform448);

Shape& Shape451 =  Shape();
LineSet& LineSet452 =  LineSet();
LineSet452.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate453 =  Coordinate();
Coordinate453.setPoint(new float[6]{-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178}, 6);
LineSet452.setCoord(Coordinate453);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA454 =  ColorRGBA();
ColorRGBA454.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet452.addChild(&ColorRGBA454);

Shape451.setGeometry(&LineSet452);

HAnimSegment447.addChild(&Shape451);

HAnimJoint446.addChildren(&HAnimSegment447);

HAnimJoint& HAnimJoint455 =  HAnimJoint();
HAnimJoint455.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_3"));
HAnimJoint455.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimJoint455.setCenter(new float[3]{-0.1002,0.0013,0.0178});
HAnimJoint455.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint455.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint446.addChildren(&HAnimJoint455);

HAnimJoint437.addChildren(&HAnimJoint446);

HAnimJoint428.addChildren(&HAnimJoint437);

HAnimJoint419.addChildren(&HAnimJoint428);

HAnimJoint337.addChildren(&HAnimJoint419);

HAnimJoint324.addChildren(&HAnimJoint337);

HAnimJoint& HAnimJoint456 =  HAnimJoint();
HAnimJoint456.X3DNode::setName(CString("r_calcaneocuboid"));
HAnimJoint456.setDEF(CString("hanim_r_calcaneocuboid"));
HAnimJoint456.setCenter(new float[3]{-0.0889,0.0494,-0.1278});
HAnimJoint456.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint456.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment457 =  HAnimSegment();
HAnimSegment457.X3DNode::setName(CString("r_calcaneus"));
HAnimSegment457.setDEF(CString("hanim_r_calcaneus"));
Transform& Transform458 =  Transform();
Transform458.setTranslation(new float[3]{-0.0889,0.0494,-0.1278});
Transform& Transform459 =  Transform();
//Empty Transform
Shape& Shape460 =  Shape();
Shape460.setUSE(CString("HAnimJointShape"));
Transform459.addChild(&Shape460);

Transform458.addChild(&Transform459);

HAnimSegment457.addChild(&Transform458);

Shape& Shape461 =  Shape();
LineSet& LineSet462 =  LineSet();
LineSet462.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate463 =  Coordinate();
Coordinate463.setPoint(new float[6]{-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998}, 6);
LineSet462.setCoord(Coordinate463);

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA& ColorRGBA464 =  ColorRGBA();
ColorRGBA464.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet462.addChild(&ColorRGBA464);

Shape461.setGeometry(&LineSet462);

HAnimSegment457.addChild(&Shape461);

HAnimJoint456.addChildren(&HAnimSegment457);

HAnimJoint& HAnimJoint465 =  HAnimJoint();
HAnimJoint465.X3DNode::setName(CString("r_transversetarsal"));
HAnimJoint465.setDEF(CString("hanim_r_transversetarsal"));
HAnimJoint465.setCenter(new float[3]{-0.1105,0.0267,-0.0998});
HAnimJoint465.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint465.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment466 =  HAnimSegment();
HAnimSegment466.X3DNode::setName(CString("r_cuboid"));
HAnimSegment466.setDEF(CString("hanim_r_cuboid"));
Transform& Transform467 =  Transform();
Transform467.setTranslation(new float[3]{-0.1105,0.0267,-0.0998});
Transform& Transform468 =  Transform();
//Empty Transform
Shape& Shape469 =  Shape();
Shape469.setUSE(CString("HAnimJointShape"));
Transform468.addChild(&Shape469);

Transform467.addChild(&Transform468);

HAnimSegment466.addChild(&Transform467);

Shape& Shape470 =  Shape();
LineSet& LineSet471 =  LineSet();
LineSet471.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate472 =  Coordinate();
Coordinate472.setPoint(new float[6]{-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634}, 6);
LineSet471.setCoord(Coordinate472);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA& ColorRGBA473 =  ColorRGBA();
ColorRGBA473.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet471.addChild(&ColorRGBA473);

Shape470.setGeometry(&LineSet471);

HAnimSegment466.addChild(&Shape470);

Shape& Shape474 =  Shape();
LineSet& LineSet475 =  LineSet();
LineSet475.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate476 =  Coordinate();
Coordinate476.setPoint(new float[6]{-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671}, 6);
LineSet475.setCoord(Coordinate476);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA& ColorRGBA477 =  ColorRGBA();
ColorRGBA477.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet475.addChild(&ColorRGBA477);

Shape474.setGeometry(&LineSet475);

HAnimSegment466.addChild(&Shape474);

HAnimJoint465.addChildren(&HAnimSegment466);

HAnimJoint& HAnimJoint478 =  HAnimJoint();
HAnimJoint478.X3DNode::setName(CString("r_tarsometatarsal_4"));
HAnimJoint478.setDEF(CString("hanim_r_tarsometatarsal_4"));
HAnimJoint478.setCenter(new float[3]{-0.1063,0.016,-0.0634});
HAnimJoint478.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint478.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment479 =  HAnimSegment();
HAnimSegment479.X3DNode::setName(CString("r_metatarsal_4"));
HAnimSegment479.setDEF(CString("hanim_r_metatarsal_4"));
Transform& Transform480 =  Transform();
Transform480.setTranslation(new float[3]{-0.1063,0.016,-0.0634});
Transform& Transform481 =  Transform();
//Empty Transform
Shape& Shape482 =  Shape();
Shape482.setUSE(CString("HAnimJointShape"));
Transform481.addChild(&Shape482);

Transform480.addChild(&Transform481);

HAnimSegment479.addChild(&Transform480);

Shape& Shape483 =  Shape();
LineSet& LineSet484 =  LineSet();
LineSet484.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate485 =  Coordinate();
Coordinate485.setPoint(new float[6]{-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107}, 6);
LineSet484.setCoord(Coordinate485);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA& ColorRGBA486 =  ColorRGBA();
ColorRGBA486.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet484.addChild(&ColorRGBA486);

Shape483.setGeometry(&LineSet484);

HAnimSegment479.addChild(&Shape483);

HAnimJoint478.addChildren(&HAnimSegment479);

HAnimJoint& HAnimJoint487 =  HAnimJoint();
HAnimJoint487.X3DNode::setName(CString("r_metatarsophalangeal_4"));
HAnimJoint487.setDEF(CString("hanim_r_metatarsophalangeal_4"));
HAnimJoint487.setCenter(new float[3]{-0.1097,0.0058,-0.0107});
HAnimJoint487.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint487.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment488 =  HAnimSegment();
HAnimSegment488.X3DNode::setName(CString("r_tarsal_proximal_phalanx_4"));
HAnimSegment488.setDEF(CString("hanim_r_tarsal_proximal_phalanx_4"));
Transform& Transform489 =  Transform();
Transform489.setTranslation(new float[3]{-0.1097,0.0058,-0.0107});
Transform& Transform490 =  Transform();
//Empty Transform
Shape& Shape491 =  Shape();
Shape491.setUSE(CString("HAnimJointShape"));
Transform490.addChild(&Shape491);

Transform489.addChild(&Transform490);

HAnimSegment488.addChild(&Transform489);

Shape& Shape492 =  Shape();
LineSet& LineSet493 =  LineSet();
LineSet493.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate494 =  Coordinate();
Coordinate494.setPoint(new float[6]{-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044}, 6);
LineSet493.setCoord(Coordinate494);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA495 =  ColorRGBA();
ColorRGBA495.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet493.addChild(&ColorRGBA495);

Shape492.setGeometry(&LineSet493);

HAnimSegment488.addChild(&Shape492);

HAnimJoint487.addChildren(&HAnimSegment488);

HAnimJoint& HAnimJoint496 =  HAnimJoint();
HAnimJoint496.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_4"));
HAnimJoint496.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimJoint496.setCenter(new float[3]{-0.114,0.0037,0.0044});
HAnimJoint496.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint496.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment497 =  HAnimSegment();
HAnimSegment497.X3DNode::setName(CString("r_tarsal_middle_phalanx_4"));
HAnimSegment497.setDEF(CString("hanim_r_tarsal_middle_phalanx_4"));
Transform& Transform498 =  Transform();
Transform498.setTranslation(new float[3]{-0.114,0.0037,0.0044});
Transform& Transform499 =  Transform();
//Empty Transform
Shape& Shape500 =  Shape();
Shape500.setUSE(CString("HAnimJointShape"));
Transform499.addChild(&Shape500);

Transform498.addChild(&Transform499);

HAnimSegment497.addChild(&Transform498);

Shape& Shape501 =  Shape();
LineSet& LineSet502 =  LineSet();
LineSet502.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate503 =  Coordinate();
Coordinate503.setPoint(new float[6]{-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118}, 6);
LineSet502.setCoord(Coordinate503);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA504 =  ColorRGBA();
ColorRGBA504.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet502.addChild(&ColorRGBA504);

Shape501.setGeometry(&LineSet502);

HAnimSegment497.addChild(&Shape501);

HAnimJoint496.addChildren(&HAnimSegment497);

HAnimJoint& HAnimJoint505 =  HAnimJoint();
HAnimJoint505.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_4"));
HAnimJoint505.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimJoint505.setCenter(new float[3]{-0.1155,0.0008,0.0118});
HAnimJoint505.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint505.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint496.addChildren(&HAnimJoint505);

HAnimJoint487.addChildren(&HAnimJoint496);

HAnimJoint478.addChildren(&HAnimJoint487);

HAnimJoint465.addChildren(&HAnimJoint478);

HAnimJoint& HAnimJoint506 =  HAnimJoint();
HAnimJoint506.X3DNode::setName(CString("r_tarsometatarsal_5"));
HAnimJoint506.setDEF(CString("hanim_r_tarsometatarsal_5"));
HAnimJoint506.setCenter(new float[3]{-0.1206,0.0124,-0.0671});
HAnimJoint506.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint506.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment507 =  HAnimSegment();
HAnimSegment507.X3DNode::setName(CString("r_metatarsal_5"));
HAnimSegment507.setDEF(CString("hanim_r_metatarsal_5"));
Transform& Transform508 =  Transform();
Transform508.setTranslation(new float[3]{-0.1206,0.0124,-0.0671});
Transform& Transform509 =  Transform();
//Empty Transform
Shape& Shape510 =  Shape();
Shape510.setUSE(CString("HAnimJointShape"));
Transform509.addChild(&Shape510);

Transform508.addChild(&Transform509);

HAnimSegment507.addChild(&Transform508);

Shape& Shape511 =  Shape();
LineSet& LineSet512 =  LineSet();
LineSet512.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate513 =  Coordinate();
Coordinate513.setPoint(new float[6]{-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153}, 6);
LineSet512.setCoord(Coordinate513);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA& ColorRGBA514 =  ColorRGBA();
ColorRGBA514.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet512.addChild(&ColorRGBA514);

Shape511.setGeometry(&LineSet512);

HAnimSegment507.addChild(&Shape511);

HAnimJoint506.addChildren(&HAnimSegment507);

HAnimJoint& HAnimJoint515 =  HAnimJoint();
HAnimJoint515.X3DNode::setName(CString("r_metatarsophalangeal_5"));
HAnimJoint515.setDEF(CString("hanim_r_metatarsophalangeal_5"));
HAnimJoint515.setCenter(new float[3]{-0.1239,0.0051,-0.0153});
HAnimJoint515.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint515.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment516 =  HAnimSegment();
HAnimSegment516.X3DNode::setName(CString("r_tarsal_proximal_phalanx_5"));
HAnimSegment516.setDEF(CString("hanim_r_tarsal_proximal_phalanx_5"));
Transform& Transform517 =  Transform();
Transform517.setTranslation(new float[3]{-0.1239,0.0051,-0.0153});
Transform& Transform518 =  Transform();
//Empty Transform
Shape& Shape519 =  Shape();
Shape519.setUSE(CString("HAnimJointShape"));
Transform518.addChild(&Shape519);

Transform517.addChild(&Transform518);

HAnimSegment516.addChild(&Transform517);

Shape& Shape520 =  Shape();
LineSet& LineSet521 =  LineSet();
LineSet521.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate522 =  Coordinate();
Coordinate522.setPoint(new float[6]{-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077}, 6);
LineSet521.setCoord(Coordinate522);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA523 =  ColorRGBA();
ColorRGBA523.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet521.addChild(&ColorRGBA523);

Shape520.setGeometry(&LineSet521);

HAnimSegment516.addChild(&Shape520);

HAnimJoint515.addChildren(&HAnimSegment516);

HAnimJoint& HAnimJoint524 =  HAnimJoint();
HAnimJoint524.X3DNode::setName(CString("r_tarsal_proximal_interphalangeal_5"));
HAnimJoint524.setDEF(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimJoint524.setCenter(new float[3]{-0.1262,0.0023,-0.0077});
HAnimJoint524.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint524.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment525 =  HAnimSegment();
HAnimSegment525.X3DNode::setName(CString("r_tarsal_middle_phalanx_5"));
HAnimSegment525.setDEF(CString("hanim_r_tarsal_middle_phalanx_5"));
Transform& Transform526 =  Transform();
Transform526.setTranslation(new float[3]{-0.1262,0.0023,-0.0077});
Transform& Transform527 =  Transform();
//Empty Transform
Shape& Shape528 =  Shape();
Shape528.setUSE(CString("HAnimJointShape"));
Transform527.addChild(&Shape528);

Transform526.addChild(&Transform527);

HAnimSegment525.addChild(&Transform526);

Shape& Shape529 =  Shape();
LineSet& LineSet530 =  LineSet();
LineSet530.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate531 =  Coordinate();
Coordinate531.setPoint(new float[6]{-0.1262,0.0023,-0.0077,-0.1271,0,0}, 6);
LineSet530.setCoord(Coordinate531);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA532 =  ColorRGBA();
ColorRGBA532.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet530.addChild(&ColorRGBA532);

Shape529.setGeometry(&LineSet530);

HAnimSegment525.addChild(&Shape529);

HAnimJoint524.addChildren(&HAnimSegment525);

HAnimJoint& HAnimJoint533 =  HAnimJoint();
HAnimJoint533.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_5"));
HAnimJoint533.setDEF(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimJoint533.setCenter(new float[3]{-0.1271,0,0});
HAnimJoint533.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint533.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint524.addChildren(&HAnimJoint533);

HAnimJoint515.addChildren(&HAnimJoint524);

HAnimJoint506.addChildren(&HAnimJoint515);

HAnimJoint465.addChildren(&HAnimJoint506);

HAnimJoint456.addChildren(&HAnimJoint465);

HAnimJoint324.addChildren(&HAnimJoint456);

HAnimJoint315.addChildren(&HAnimJoint324);

HAnimJoint306.addChildren(&HAnimJoint315);

HAnimJoint65.addChildren(&HAnimJoint306);

HAnimJoint52.addChildren(&HAnimJoint65);

HAnimJoint& HAnimJoint534 =  HAnimJoint();
HAnimJoint534.X3DNode::setName(CString("vl5"));
HAnimJoint534.setDEF(CString("hanim_vl5"));
HAnimJoint534.setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint534.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint534.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment535 =  HAnimSegment();
HAnimSegment535.X3DNode::setName(CString("l5"));
HAnimSegment535.setDEF(CString("hanim_l5"));
Transform& Transform536 =  Transform();
Transform536.setTranslation(new float[3]{0.0028,1.0568,-0.0776});
Transform& Transform537 =  Transform();
//Empty Transform
Shape& Shape538 =  Shape();
Shape538.setUSE(CString("HAnimJointShape"));
Transform537.addChild(&Shape538);

Transform536.addChild(&Transform537);

HAnimSegment535.addChild(&Transform536);

Shape& Shape539 =  Shape();
LineSet& LineSet540 =  LineSet();
LineSet540.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate541 =  Coordinate();
Coordinate541.setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
LineSet540.setCoord(Coordinate541);

//from vl5 to vl4 vertices 2
ColorRGBA& ColorRGBA542 =  ColorRGBA();
ColorRGBA542.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet540.addChild(&ColorRGBA542);

Shape539.setGeometry(&LineSet540);

HAnimSegment535.addChild(&Shape539);

HAnimJoint534.addChildren(&HAnimSegment535);

HAnimJoint& HAnimJoint543 =  HAnimJoint();
HAnimJoint543.X3DNode::setName(CString("vl4"));
HAnimJoint543.setDEF(CString("hanim_vl4"));
HAnimJoint543.setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint543.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint543.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment544 =  HAnimSegment();
HAnimSegment544.X3DNode::setName(CString("l4"));
HAnimSegment544.setDEF(CString("hanim_l4"));
Transform& Transform545 =  Transform();
Transform545.setTranslation(new float[3]{0.0035,1.0925,-0.0787});
Transform& Transform546 =  Transform();
//Empty Transform
Shape& Shape547 =  Shape();
Shape547.setUSE(CString("HAnimJointShape"));
Transform546.addChild(&Shape547);

Transform545.addChild(&Transform546);

HAnimSegment544.addChild(&Transform545);

Shape& Shape548 =  Shape();
LineSet& LineSet549 =  LineSet();
LineSet549.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate550 =  Coordinate();
Coordinate550.setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
LineSet549.setCoord(Coordinate550);

//from vl4 to vl3 vertices 2
ColorRGBA& ColorRGBA551 =  ColorRGBA();
ColorRGBA551.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet549.addChild(&ColorRGBA551);

Shape548.setGeometry(&LineSet549);

HAnimSegment544.addChild(&Shape548);

HAnimJoint543.addChildren(&HAnimSegment544);

HAnimJoint& HAnimJoint552 =  HAnimJoint();
HAnimJoint552.X3DNode::setName(CString("vl3"));
HAnimJoint552.setDEF(CString("hanim_vl3"));
HAnimJoint552.setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint552.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint552.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment553 =  HAnimSegment();
HAnimSegment553.X3DNode::setName(CString("l3"));
HAnimSegment553.setDEF(CString("hanim_l3"));
Transform& Transform554 =  Transform();
Transform554.setTranslation(new float[3]{0.0041,1.1276,-0.0796});
Transform& Transform555 =  Transform();
//Empty Transform
Shape& Shape556 =  Shape();
Shape556.setUSE(CString("HAnimJointShape"));
Transform555.addChild(&Shape556);

Transform554.addChild(&Transform555);

HAnimSegment553.addChild(&Transform554);

Shape& Shape557 =  Shape();
LineSet& LineSet558 =  LineSet();
LineSet558.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate559 =  Coordinate();
Coordinate559.setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
LineSet558.setCoord(Coordinate559);

//from vl3 to vl2 vertices 2
ColorRGBA& ColorRGBA560 =  ColorRGBA();
ColorRGBA560.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet558.addChild(&ColorRGBA560);

Shape557.setGeometry(&LineSet558);

HAnimSegment553.addChild(&Shape557);

HAnimJoint552.addChildren(&HAnimSegment553);

HAnimJoint& HAnimJoint561 =  HAnimJoint();
HAnimJoint561.X3DNode::setName(CString("vl2"));
HAnimJoint561.setDEF(CString("hanim_vl2"));
HAnimJoint561.setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint561.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint561.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment562 =  HAnimSegment();
HAnimSegment562.X3DNode::setName(CString("l2"));
HAnimSegment562.setDEF(CString("hanim_l2"));
Transform& Transform563 =  Transform();
Transform563.setTranslation(new float[3]{0.0045,1.1546,-0.08});
Transform& Transform564 =  Transform();
//Empty Transform
Shape& Shape565 =  Shape();
Shape565.setUSE(CString("HAnimJointShape"));
Transform564.addChild(&Shape565);

Transform563.addChild(&Transform564);

HAnimSegment562.addChild(&Transform563);

Shape& Shape566 =  Shape();
LineSet& LineSet567 =  LineSet();
LineSet567.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate568 =  Coordinate();
Coordinate568.setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
LineSet567.setCoord(Coordinate568);

//from vl2 to vl1 vertices 2
ColorRGBA& ColorRGBA569 =  ColorRGBA();
ColorRGBA569.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet567.addChild(&ColorRGBA569);

Shape566.setGeometry(&LineSet567);

HAnimSegment562.addChild(&Shape566);

HAnimJoint561.addChildren(&HAnimSegment562);

HAnimJoint& HAnimJoint570 =  HAnimJoint();
HAnimJoint570.X3DNode::setName(CString("vl1"));
HAnimJoint570.setDEF(CString("hanim_vl1"));
HAnimJoint570.setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint570.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint570.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment571 =  HAnimSegment();
HAnimSegment571.X3DNode::setName(CString("l1"));
HAnimSegment571.setDEF(CString("hanim_l1"));
Transform& Transform572 =  Transform();
Transform572.setTranslation(new float[3]{0.0048,1.1912,-0.0805});
Transform& Transform573 =  Transform();
//Empty Transform
Shape& Shape574 =  Shape();
Shape574.setUSE(CString("HAnimJointShape"));
Transform573.addChild(&Shape574);

Transform572.addChild(&Transform573);

HAnimSegment571.addChild(&Transform572);

Shape& Shape575 =  Shape();
LineSet& LineSet576 =  LineSet();
LineSet576.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate577 =  Coordinate();
Coordinate577.setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
LineSet576.setCoord(Coordinate577);

//from vl1 to vt12 vertices 2
ColorRGBA& ColorRGBA578 =  ColorRGBA();
ColorRGBA578.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet576.addChild(&ColorRGBA578);

Shape575.setGeometry(&LineSet576);

HAnimSegment571.addChild(&Shape575);

HAnimJoint570.addChildren(&HAnimSegment571);

HAnimJoint& HAnimJoint579 =  HAnimJoint();
HAnimJoint579.X3DNode::setName(CString("vt12"));
HAnimJoint579.setDEF(CString("hanim_vt12"));
HAnimJoint579.setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint579.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint579.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment580 =  HAnimSegment();
HAnimSegment580.X3DNode::setName(CString("t12"));
HAnimSegment580.setDEF(CString("hanim_t12"));
Transform& Transform581 =  Transform();
Transform581.setTranslation(new float[3]{0.0051,1.2278,-0.0808});
Transform& Transform582 =  Transform();
//Empty Transform
Shape& Shape583 =  Shape();
Shape583.setUSE(CString("HAnimJointShape"));
Transform582.addChild(&Shape583);

Transform581.addChild(&Transform582);

HAnimSegment580.addChild(&Transform581);

Shape& Shape584 =  Shape();
LineSet& LineSet585 =  LineSet();
LineSet585.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate586 =  Coordinate();
Coordinate586.setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
LineSet585.setCoord(Coordinate586);

//from vt12 to vt11 vertices 2
ColorRGBA& ColorRGBA587 =  ColorRGBA();
ColorRGBA587.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet585.addChild(&ColorRGBA587);

Shape584.setGeometry(&LineSet585);

HAnimSegment580.addChild(&Shape584);

HAnimJoint579.addChildren(&HAnimSegment580);

HAnimJoint& HAnimJoint588 =  HAnimJoint();
HAnimJoint588.X3DNode::setName(CString("vt11"));
HAnimJoint588.setDEF(CString("hanim_vt11"));
HAnimJoint588.setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint588.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint588.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment589 =  HAnimSegment();
HAnimSegment589.X3DNode::setName(CString("t11"));
HAnimSegment589.setDEF(CString("hanim_t11"));
Transform& Transform590 =  Transform();
Transform590.setTranslation(new float[3]{0.0053,1.2679,-0.081});
Transform& Transform591 =  Transform();
//Empty Transform
Shape& Shape592 =  Shape();
Shape592.setUSE(CString("HAnimJointShape"));
Transform591.addChild(&Shape592);

Transform590.addChild(&Transform591);

HAnimSegment589.addChild(&Transform590);

Shape& Shape593 =  Shape();
LineSet& LineSet594 =  LineSet();
LineSet594.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate595 =  Coordinate();
Coordinate595.setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
LineSet594.setCoord(Coordinate595);

//from vt11 to vt10 vertices 2
ColorRGBA& ColorRGBA596 =  ColorRGBA();
ColorRGBA596.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet594.addChild(&ColorRGBA596);

Shape593.setGeometry(&LineSet594);

HAnimSegment589.addChild(&Shape593);

HAnimJoint588.addChildren(&HAnimSegment589);

HAnimJoint& HAnimJoint597 =  HAnimJoint();
HAnimJoint597.X3DNode::setName(CString("vt10"));
HAnimJoint597.setDEF(CString("hanim_vt10"));
HAnimJoint597.setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint597.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint597.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment598 =  HAnimSegment();
HAnimSegment598.X3DNode::setName(CString("t10"));
HAnimSegment598.setDEF(CString("hanim_t10"));
Transform& Transform599 =  Transform();
Transform599.setTranslation(new float[3]{0.0056,1.2848,-0.0822});
Transform& Transform600 =  Transform();
//Empty Transform
Shape& Shape601 =  Shape();
Shape601.setUSE(CString("HAnimJointShape"));
Transform600.addChild(&Shape601);

Transform599.addChild(&Transform600);

HAnimSegment598.addChild(&Transform599);

Shape& Shape602 =  Shape();
LineSet& LineSet603 =  LineSet();
LineSet603.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate604 =  Coordinate();
Coordinate604.setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
LineSet603.setCoord(Coordinate604);

//from vt10 to vt9 vertices 2
ColorRGBA& ColorRGBA605 =  ColorRGBA();
ColorRGBA605.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet603.addChild(&ColorRGBA605);

Shape602.setGeometry(&LineSet603);

HAnimSegment598.addChild(&Shape602);

HAnimJoint597.addChildren(&HAnimSegment598);

HAnimJoint& HAnimJoint606 =  HAnimJoint();
HAnimJoint606.X3DNode::setName(CString("vt9"));
HAnimJoint606.setDEF(CString("hanim_vt9"));
HAnimJoint606.setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint606.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint606.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment607 =  HAnimSegment();
HAnimSegment607.X3DNode::setName(CString("t9"));
HAnimSegment607.setDEF(CString("hanim_t9"));
Transform& Transform608 =  Transform();
Transform608.setTranslation(new float[3]{0.0057,1.3126,-0.0838});
Transform& Transform609 =  Transform();
//Empty Transform
Shape& Shape610 =  Shape();
Shape610.setUSE(CString("HAnimJointShape"));
Transform609.addChild(&Shape610);

Transform608.addChild(&Transform609);

HAnimSegment607.addChild(&Transform608);

Shape& Shape611 =  Shape();
LineSet& LineSet612 =  LineSet();
LineSet612.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate613 =  Coordinate();
Coordinate613.setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
LineSet612.setCoord(Coordinate613);

//from vt9 to vt8 vertices 2
ColorRGBA& ColorRGBA614 =  ColorRGBA();
ColorRGBA614.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet612.addChild(&ColorRGBA614);

Shape611.setGeometry(&LineSet612);

HAnimSegment607.addChild(&Shape611);

HAnimJoint606.addChildren(&HAnimSegment607);

HAnimJoint& HAnimJoint615 =  HAnimJoint();
HAnimJoint615.X3DNode::setName(CString("vt8"));
HAnimJoint615.setDEF(CString("hanim_vt8"));
HAnimJoint615.setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint615.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint615.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment616 =  HAnimSegment();
HAnimSegment616.X3DNode::setName(CString("t8"));
HAnimSegment616.setDEF(CString("hanim_t8"));
Transform& Transform617 =  Transform();
Transform617.setTranslation(new float[3]{0.0057,1.3382,-0.0845});
Transform& Transform618 =  Transform();
//Empty Transform
Shape& Shape619 =  Shape();
Shape619.setUSE(CString("HAnimJointShape"));
Transform618.addChild(&Shape619);

Transform617.addChild(&Transform618);

HAnimSegment616.addChild(&Transform617);

Shape& Shape620 =  Shape();
LineSet& LineSet621 =  LineSet();
LineSet621.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate622 =  Coordinate();
Coordinate622.setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
LineSet621.setCoord(Coordinate622);

//from vt8 to vt7 vertices 2
ColorRGBA& ColorRGBA623 =  ColorRGBA();
ColorRGBA623.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet621.addChild(&ColorRGBA623);

Shape620.setGeometry(&LineSet621);

HAnimSegment616.addChild(&Shape620);

HAnimJoint615.addChildren(&HAnimSegment616);

HAnimJoint& HAnimJoint624 =  HAnimJoint();
HAnimJoint624.X3DNode::setName(CString("vt7"));
HAnimJoint624.setDEF(CString("hanim_vt7"));
HAnimJoint624.setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint624.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint624.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment625 =  HAnimSegment();
HAnimSegment625.X3DNode::setName(CString("t7"));
HAnimSegment625.setDEF(CString("hanim_t7"));
Transform& Transform626 =  Transform();
Transform626.setTranslation(new float[3]{0.0058,1.3625,-0.0833});
Transform& Transform627 =  Transform();
//Empty Transform
Shape& Shape628 =  Shape();
Shape628.setUSE(CString("HAnimJointShape"));
Transform627.addChild(&Shape628);

Transform626.addChild(&Transform627);

HAnimSegment625.addChild(&Transform626);

Shape& Shape629 =  Shape();
LineSet& LineSet630 =  LineSet();
LineSet630.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate631 =  Coordinate();
Coordinate631.setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
LineSet630.setCoord(Coordinate631);

//from vt7 to vt6 vertices 2
ColorRGBA& ColorRGBA632 =  ColorRGBA();
ColorRGBA632.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet630.addChild(&ColorRGBA632);

Shape629.setGeometry(&LineSet630);

HAnimSegment625.addChild(&Shape629);

HAnimJoint624.addChildren(&HAnimSegment625);

HAnimJoint& HAnimJoint633 =  HAnimJoint();
HAnimJoint633.X3DNode::setName(CString("vt6"));
HAnimJoint633.setDEF(CString("hanim_vt6"));
HAnimJoint633.setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint633.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint633.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment634 =  HAnimSegment();
HAnimSegment634.X3DNode::setName(CString("t6"));
HAnimSegment634.setDEF(CString("hanim_t6"));
Transform& Transform635 =  Transform();
Transform635.setTranslation(new float[3]{0.0059,1.3866,-0.08});
Transform& Transform636 =  Transform();
//Empty Transform
Shape& Shape637 =  Shape();
Shape637.setUSE(CString("HAnimJointShape"));
Transform636.addChild(&Shape637);

Transform635.addChild(&Transform636);

HAnimSegment634.addChild(&Transform635);

Shape& Shape638 =  Shape();
LineSet& LineSet639 =  LineSet();
LineSet639.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate640 =  Coordinate();
Coordinate640.setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
LineSet639.setCoord(Coordinate640);

//from vt6 to vt5 vertices 2
ColorRGBA& ColorRGBA641 =  ColorRGBA();
ColorRGBA641.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet639.addChild(&ColorRGBA641);

Shape638.setGeometry(&LineSet639);

HAnimSegment634.addChild(&Shape638);

HAnimJoint633.addChildren(&HAnimSegment634);

HAnimJoint& HAnimJoint642 =  HAnimJoint();
HAnimJoint642.X3DNode::setName(CString("vt5"));
HAnimJoint642.setDEF(CString("hanim_vt5"));
HAnimJoint642.setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint642.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint642.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment643 =  HAnimSegment();
HAnimSegment643.X3DNode::setName(CString("t5"));
HAnimSegment643.setDEF(CString("hanim_t5"));
Transform& Transform644 =  Transform();
Transform644.setTranslation(new float[3]{0.006,1.4102,-0.0745});
Transform& Transform645 =  Transform();
//Empty Transform
Shape& Shape646 =  Shape();
Shape646.setUSE(CString("HAnimJointShape"));
Transform645.addChild(&Shape646);

Transform644.addChild(&Transform645);

HAnimSegment643.addChild(&Transform644);

Shape& Shape647 =  Shape();
LineSet& LineSet648 =  LineSet();
LineSet648.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate649 =  Coordinate();
Coordinate649.setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
LineSet648.setCoord(Coordinate649);

//from vt5 to vt4 vertices 2
ColorRGBA& ColorRGBA650 =  ColorRGBA();
ColorRGBA650.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet648.addChild(&ColorRGBA650);

Shape647.setGeometry(&LineSet648);

HAnimSegment643.addChild(&Shape647);

HAnimJoint642.addChildren(&HAnimSegment643);

HAnimJoint& HAnimJoint651 =  HAnimJoint();
HAnimJoint651.X3DNode::setName(CString("vt4"));
HAnimJoint651.setDEF(CString("hanim_vt4"));
HAnimJoint651.setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint651.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint651.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment652 =  HAnimSegment();
HAnimSegment652.X3DNode::setName(CString("t4"));
HAnimSegment652.setDEF(CString("hanim_t4"));
Transform& Transform653 =  Transform();
Transform653.setTranslation(new float[3]{0.0061,1.432,-0.0675});
Transform& Transform654 =  Transform();
//Empty Transform
Shape& Shape655 =  Shape();
Shape655.setUSE(CString("HAnimJointShape"));
Transform654.addChild(&Shape655);

Transform653.addChild(&Transform654);

HAnimSegment652.addChild(&Transform653);

Shape& Shape656 =  Shape();
LineSet& LineSet657 =  LineSet();
LineSet657.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate658 =  Coordinate();
Coordinate658.setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
LineSet657.setCoord(Coordinate658);

//from vt4 to vt3 vertices 2
ColorRGBA& ColorRGBA659 =  ColorRGBA();
ColorRGBA659.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet657.addChild(&ColorRGBA659);

Shape656.setGeometry(&LineSet657);

HAnimSegment652.addChild(&Shape656);

HAnimJoint651.addChildren(&HAnimSegment652);

HAnimJoint& HAnimJoint660 =  HAnimJoint();
HAnimJoint660.X3DNode::setName(CString("vt3"));
HAnimJoint660.setDEF(CString("hanim_vt3"));
HAnimJoint660.setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint660.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint660.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment661 =  HAnimSegment();
HAnimSegment661.X3DNode::setName(CString("t3"));
HAnimSegment661.setDEF(CString("hanim_t3"));
Transform& Transform662 =  Transform();
Transform662.setTranslation(new float[3]{0.0062,1.4583,-0.057});
Transform& Transform663 =  Transform();
//Empty Transform
Shape& Shape664 =  Shape();
Shape664.setUSE(CString("HAnimJointShape"));
Transform663.addChild(&Shape664);

Transform662.addChild(&Transform663);

HAnimSegment661.addChild(&Transform662);

Shape& Shape665 =  Shape();
LineSet& LineSet666 =  LineSet();
LineSet666.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate667 =  Coordinate();
Coordinate667.setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
LineSet666.setCoord(Coordinate667);

//from vt3 to vt2 vertices 2
ColorRGBA& ColorRGBA668 =  ColorRGBA();
ColorRGBA668.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet666.addChild(&ColorRGBA668);

Shape665.setGeometry(&LineSet666);

HAnimSegment661.addChild(&Shape665);

HAnimJoint660.addChildren(&HAnimSegment661);

HAnimJoint& HAnimJoint669 =  HAnimJoint();
HAnimJoint669.X3DNode::setName(CString("vt2"));
HAnimJoint669.setDEF(CString("hanim_vt2"));
HAnimJoint669.setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint669.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint669.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment670 =  HAnimSegment();
HAnimSegment670.X3DNode::setName(CString("t2"));
HAnimSegment670.setDEF(CString("hanim_t2"));
Transform& Transform671 =  Transform();
Transform671.setTranslation(new float[3]{0.0063,1.4761,-0.0484});
Transform& Transform672 =  Transform();
//Empty Transform
Shape& Shape673 =  Shape();
Shape673.setUSE(CString("HAnimJointShape"));
Transform672.addChild(&Shape673);

Transform671.addChild(&Transform672);

HAnimSegment670.addChild(&Transform671);

Shape& Shape674 =  Shape();
LineSet& LineSet675 =  LineSet();
LineSet675.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate676 =  Coordinate();
Coordinate676.setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
LineSet675.setCoord(Coordinate676);

//from vt2 to vt1 vertices 2
ColorRGBA& ColorRGBA677 =  ColorRGBA();
ColorRGBA677.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet675.addChild(&ColorRGBA677);

Shape674.setGeometry(&LineSet675);

HAnimSegment670.addChild(&Shape674);

HAnimJoint669.addChildren(&HAnimSegment670);

HAnimJoint& HAnimJoint678 =  HAnimJoint();
HAnimJoint678.X3DNode::setName(CString("vt1"));
HAnimJoint678.setDEF(CString("hanim_vt1"));
HAnimJoint678.setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint678.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint678.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment679 =  HAnimSegment();
HAnimSegment679.X3DNode::setName(CString("t1"));
HAnimSegment679.setDEF(CString("hanim_t1"));
Transform& Transform680 =  Transform();
Transform680.setTranslation(new float[3]{0.0065,1.4951,-0.0387});
Transform& Transform681 =  Transform();
//Empty Transform
Shape& Shape682 =  Shape();
Shape682.setUSE(CString("HAnimJointShape"));
Transform681.addChild(&Shape682);

Transform680.addChild(&Transform681);

HAnimSegment679.addChild(&Transform680);

Shape& Shape683 =  Shape();
LineSet& LineSet684 =  LineSet();
LineSet684.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate685 =  Coordinate();
Coordinate685.setPoint(new float[6]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
LineSet684.setCoord(Coordinate685);

//from vt1 to vc7 vertices 2
ColorRGBA& ColorRGBA686 =  ColorRGBA();
ColorRGBA686.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet684.addChild(&ColorRGBA686);

Shape683.setGeometry(&LineSet684);

HAnimSegment679.addChild(&Shape683);

Shape& Shape687 =  Shape();
LineSet& LineSet688 =  LineSet();
LineSet688.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate689 =  Coordinate();
Coordinate689.setPoint(new float[6]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
LineSet688.setCoord(Coordinate689);

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA& ColorRGBA690 =  ColorRGBA();
ColorRGBA690.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet688.addChild(&ColorRGBA690);

Shape687.setGeometry(&LineSet688);

HAnimSegment679.addChild(&Shape687);

Shape& Shape691 =  Shape();
LineSet& LineSet692 =  LineSet();
LineSet692.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate693 =  Coordinate();
Coordinate693.setPoint(new float[6]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
LineSet692.setCoord(Coordinate693);

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA& ColorRGBA694 =  ColorRGBA();
ColorRGBA694.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet692.addChild(&ColorRGBA694);

Shape691.setGeometry(&LineSet692);

HAnimSegment679.addChild(&Shape691);

HAnimJoint678.addChildren(&HAnimSegment679);

HAnimJoint& HAnimJoint695 =  HAnimJoint();
HAnimJoint695.X3DNode::setName(CString("vc7"));
HAnimJoint695.setDEF(CString("hanim_vc7"));
HAnimJoint695.setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint695.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint695.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment696 =  HAnimSegment();
HAnimSegment696.X3DNode::setName(CString("c7"));
HAnimSegment696.setDEF(CString("hanim_c7"));
Transform& Transform697 =  Transform();
Transform697.setTranslation(new float[3]{0.0066,1.5132,-0.0301});
Transform& Transform698 =  Transform();
//Empty Transform
Shape& Shape699 =  Shape();
Shape699.setUSE(CString("HAnimJointShape"));
Transform698.addChild(&Shape699);

Transform697.addChild(&Transform698);

HAnimSegment696.addChild(&Transform697);

Shape& Shape700 =  Shape();
LineSet& LineSet701 =  LineSet();
LineSet701.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate702 =  Coordinate();
Coordinate702.setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
LineSet701.setCoord(Coordinate702);

//from vc7 to vc6 vertices 2
ColorRGBA& ColorRGBA703 =  ColorRGBA();
ColorRGBA703.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet701.addChild(&ColorRGBA703);

Shape700.setGeometry(&LineSet701);

HAnimSegment696.addChild(&Shape700);

HAnimJoint695.addChildren(&HAnimSegment696);

HAnimJoint& HAnimJoint704 =  HAnimJoint();
HAnimJoint704.X3DNode::setName(CString("vc6"));
HAnimJoint704.setDEF(CString("hanim_vc6"));
HAnimJoint704.setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint704.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint704.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment705 =  HAnimSegment();
HAnimSegment705.X3DNode::setName(CString("c6"));
HAnimSegment705.setDEF(CString("hanim_c6"));
Transform& Transform706 =  Transform();
Transform706.setTranslation(new float[3]{0.0066,1.5357,-0.0143});
Transform& Transform707 =  Transform();
//Empty Transform
Shape& Shape708 =  Shape();
Shape708.setUSE(CString("HAnimJointShape"));
Transform707.addChild(&Shape708);

Transform706.addChild(&Transform707);

HAnimSegment705.addChild(&Transform706);

Shape& Shape709 =  Shape();
LineSet& LineSet710 =  LineSet();
LineSet710.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate711 =  Coordinate();
Coordinate711.setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
LineSet710.setCoord(Coordinate711);

//from vc6 to vc5 vertices 2
ColorRGBA& ColorRGBA712 =  ColorRGBA();
ColorRGBA712.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet710.addChild(&ColorRGBA712);

Shape709.setGeometry(&LineSet710);

HAnimSegment705.addChild(&Shape709);

HAnimJoint704.addChildren(&HAnimSegment705);

HAnimJoint& HAnimJoint713 =  HAnimJoint();
HAnimJoint713.X3DNode::setName(CString("vc5"));
HAnimJoint713.setDEF(CString("hanim_vc5"));
HAnimJoint713.setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint713.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint713.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment714 =  HAnimSegment();
HAnimSegment714.X3DNode::setName(CString("c5"));
HAnimSegment714.setDEF(CString("hanim_c5"));
Transform& Transform715 =  Transform();
Transform715.setTranslation(new float[3]{0.0066,1.552,-0.0082});
Transform& Transform716 =  Transform();
//Empty Transform
Shape& Shape717 =  Shape();
Shape717.setUSE(CString("HAnimJointShape"));
Transform716.addChild(&Shape717);

Transform715.addChild(&Transform716);

HAnimSegment714.addChild(&Transform715);

Shape& Shape718 =  Shape();
LineSet& LineSet719 =  LineSet();
LineSet719.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate720 =  Coordinate();
Coordinate720.setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
LineSet719.setCoord(Coordinate720);

//from vc5 to vc4 vertices 2
ColorRGBA& ColorRGBA721 =  ColorRGBA();
ColorRGBA721.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet719.addChild(&ColorRGBA721);

Shape718.setGeometry(&LineSet719);

HAnimSegment714.addChild(&Shape718);

HAnimJoint713.addChildren(&HAnimSegment714);

HAnimJoint& HAnimJoint722 =  HAnimJoint();
HAnimJoint722.X3DNode::setName(CString("vc4"));
HAnimJoint722.setDEF(CString("hanim_vc4"));
HAnimJoint722.setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint722.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint722.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment723 =  HAnimSegment();
HAnimSegment723.X3DNode::setName(CString("c4"));
HAnimSegment723.setDEF(CString("hanim_c4"));
Transform& Transform724 =  Transform();
Transform724.setTranslation(new float[3]{0.0066,1.5662,-0.0084});
Transform& Transform725 =  Transform();
//Empty Transform
Shape& Shape726 =  Shape();
Shape726.setUSE(CString("HAnimJointShape"));
Transform725.addChild(&Shape726);

Transform724.addChild(&Transform725);

HAnimSegment723.addChild(&Transform724);

Shape& Shape727 =  Shape();
LineSet& LineSet728 =  LineSet();
LineSet728.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate729 =  Coordinate();
Coordinate729.setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
LineSet728.setCoord(Coordinate729);

//from vc4 to vc3 vertices 2
ColorRGBA& ColorRGBA730 =  ColorRGBA();
ColorRGBA730.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet728.addChild(&ColorRGBA730);

Shape727.setGeometry(&LineSet728);

HAnimSegment723.addChild(&Shape727);

HAnimJoint722.addChildren(&HAnimSegment723);

HAnimJoint& HAnimJoint731 =  HAnimJoint();
HAnimJoint731.X3DNode::setName(CString("vc3"));
HAnimJoint731.setDEF(CString("hanim_vc3"));
HAnimJoint731.setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint731.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint731.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment732 =  HAnimSegment();
HAnimSegment732.X3DNode::setName(CString("c3"));
HAnimSegment732.setDEF(CString("hanim_c3"));
Transform& Transform733 =  Transform();
Transform733.setTranslation(new float[3]{0.0066,1.58,-0.0103});
Transform& Transform734 =  Transform();
//Empty Transform
Shape& Shape735 =  Shape();
Shape735.setUSE(CString("HAnimJointShape"));
Transform734.addChild(&Shape735);

Transform733.addChild(&Transform734);

HAnimSegment732.addChild(&Transform733);

Shape& Shape736 =  Shape();
LineSet& LineSet737 =  LineSet();
LineSet737.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate738 =  Coordinate();
Coordinate738.setPoint(new float[6]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
LineSet737.setCoord(Coordinate738);

//from vc3 to vc2 vertices 2
ColorRGBA& ColorRGBA739 =  ColorRGBA();
ColorRGBA739.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet737.addChild(&ColorRGBA739);

Shape736.setGeometry(&LineSet737);

HAnimSegment732.addChild(&Shape736);

HAnimJoint731.addChildren(&HAnimSegment732);

HAnimJoint& HAnimJoint740 =  HAnimJoint();
HAnimJoint740.X3DNode::setName(CString("vc2"));
HAnimJoint740.setDEF(CString("hanim_vc2"));
HAnimJoint740.setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint740.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint740.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment741 =  HAnimSegment();
HAnimSegment741.X3DNode::setName(CString("c2"));
HAnimSegment741.setDEF(CString("hanim_c2"));
Transform& Transform742 =  Transform();
Transform742.setTranslation(new float[3]{0.0066,1.5928,-0.0103});
Transform& Transform743 =  Transform();
//Empty Transform
Shape& Shape744 =  Shape();
Shape744.setUSE(CString("HAnimJointShape"));
Transform743.addChild(&Shape744);

Transform742.addChild(&Transform743);

HAnimSegment741.addChild(&Transform742);

Shape& Shape745 =  Shape();
LineSet& LineSet746 =  LineSet();
LineSet746.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate747 =  Coordinate();
Coordinate747.setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
LineSet746.setCoord(Coordinate747);

//from vc2 to vc1 vertices 2
ColorRGBA& ColorRGBA748 =  ColorRGBA();
ColorRGBA748.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet746.addChild(&ColorRGBA748);

Shape745.setGeometry(&LineSet746);

HAnimSegment741.addChild(&Shape745);

HAnimJoint740.addChildren(&HAnimSegment741);

HAnimJoint& HAnimJoint749 =  HAnimJoint();
HAnimJoint749.X3DNode::setName(CString("vc1"));
HAnimJoint749.setDEF(CString("hanim_vc1"));
HAnimJoint749.setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint749.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint749.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment750 =  HAnimSegment();
HAnimSegment750.X3DNode::setName(CString("c1"));
HAnimSegment750.setDEF(CString("hanim_c1"));
Transform& Transform751 =  Transform();
Transform751.setTranslation(new float[3]{0.0066,1.6144,-0.0034});
Transform& Transform752 =  Transform();
//Empty Transform
Shape& Shape753 =  Shape();
Shape753.setUSE(CString("HAnimJointShape"));
Transform752.addChild(&Shape753);

Transform751.addChild(&Transform752);

HAnimSegment750.addChild(&Transform751);

Shape& Shape754 =  Shape();
LineSet& LineSet755 =  LineSet();
LineSet755.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate756 =  Coordinate();
Coordinate756.setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
LineSet755.setCoord(Coordinate756);

//from vc1 to skullbase vertices 2
ColorRGBA& ColorRGBA757 =  ColorRGBA();
ColorRGBA757.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet755.addChild(&ColorRGBA757);

Shape754.setGeometry(&LineSet755);

HAnimSegment750.addChild(&Shape754);

HAnimJoint749.addChildren(&HAnimSegment750);

HAnimJoint& HAnimJoint758 =  HAnimJoint();
HAnimJoint758.X3DNode::setName(CString("skullbase"));
HAnimJoint758.setDEF(CString("hanim_skullbase"));
HAnimJoint758.setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint758.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint758.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment759 =  HAnimSegment();
HAnimSegment759.X3DNode::setName(CString("skull"));
HAnimSegment759.setDEF(CString("hanim_skull"));
Transform& Transform760 =  Transform();
Transform760.setTranslation(new float[3]{0.0044,1.6209,0.0236});
Transform& Transform761 =  Transform();
//Empty Transform
Shape& Shape762 =  Shape();
Shape762.setUSE(CString("HAnimJointShape"));
Transform761.addChild(&Shape762);

Transform760.addChild(&Transform761);

HAnimSegment759.addChild(&Transform760);

Shape& Shape763 =  Shape();
LineSet& LineSet764 =  LineSet();
LineSet764.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate765 =  Coordinate();
Coordinate765.setPoint(new float[6]{0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689}, 6);
LineSet764.setCoord(Coordinate765);

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA& ColorRGBA766 =  ColorRGBA();
ColorRGBA766.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet764.addChild(&ColorRGBA766);

Shape763.setGeometry(&LineSet764);

HAnimSegment759.addChild(&Shape763);

Shape& Shape767 =  Shape();
LineSet& LineSet768 =  LineSet();
LineSet768.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate769 =  Coordinate();
Coordinate769.setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689}, 6);
LineSet768.setCoord(Coordinate769);

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA& ColorRGBA770 =  ColorRGBA();
ColorRGBA770.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet768.addChild(&ColorRGBA770);

Shape767.setGeometry(&LineSet768);

HAnimSegment759.addChild(&Shape767);

Shape& Shape771 =  Shape();
LineSet& LineSet772 =  LineSet();
LineSet772.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate773 =  Coordinate();
Coordinate773.setPoint(new float[6]{0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188}, 6);
LineSet772.setCoord(Coordinate773);

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA& ColorRGBA774 =  ColorRGBA();
ColorRGBA774.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet772.addChild(&ColorRGBA774);

Shape771.setGeometry(&LineSet772);

HAnimSegment759.addChild(&Shape771);

Shape& Shape775 =  Shape();
LineSet& LineSet776 =  LineSet();
LineSet776.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate777 =  Coordinate();
Coordinate777.setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188}, 6);
LineSet776.setCoord(Coordinate777);

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA& ColorRGBA778 =  ColorRGBA();
ColorRGBA778.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet776.addChild(&ColorRGBA778);

Shape775.setGeometry(&LineSet776);

HAnimSegment759.addChild(&Shape775);

Shape& Shape779 =  Shape();
LineSet& LineSet780 =  LineSet();
LineSet780.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate781 =  Coordinate();
Coordinate781.setPoint(new float[6]{0.0044,1.6209,0.0236,0.0216,1.4053,0.0051}, 6);
LineSet780.setCoord(Coordinate781);

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA782 =  ColorRGBA();
ColorRGBA782.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet780.addChild(&ColorRGBA782);

Shape779.setGeometry(&LineSet780);

HAnimSegment759.addChild(&Shape779);

Shape& Shape783 =  Shape();
LineSet& LineSet784 =  LineSet();
LineSet784.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate785 =  Coordinate();
Coordinate785.setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051}, 6);
LineSet784.setCoord(Coordinate785);

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA& ColorRGBA786 =  ColorRGBA();
ColorRGBA786.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet784.addChild(&ColorRGBA786);

Shape783.setGeometry(&LineSet784);

HAnimSegment759.addChild(&Shape783);

Shape& Shape787 =  Shape();
LineSet& LineSet788 =  LineSet();
LineSet788.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate789 =  Coordinate();
Coordinate789.setPoint(new float[6]{0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865}, 6);
LineSet788.setCoord(Coordinate789);

//from skullbase to temporomandibular vertices 2
ColorRGBA& ColorRGBA790 =  ColorRGBA();
ColorRGBA790.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet788.addChild(&ColorRGBA790);

Shape787.setGeometry(&LineSet788);

HAnimSegment759.addChild(&Shape787);

HAnimJoint758.addChildren(&HAnimSegment759);

HAnimJoint& HAnimJoint791 =  HAnimJoint();
HAnimJoint791.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint791.setDEF(CString("hanim_l_eyelid_joint"));
HAnimJoint791.setCenter(new float[3]{0.0503,1.4157,-0.0689});
HAnimJoint791.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint791.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758.addChildren(&HAnimJoint791);

HAnimJoint& HAnimJoint792 =  HAnimJoint();
HAnimJoint792.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint792.setDEF(CString("hanim_r_eyelid_joint"));
HAnimJoint792.setCenter(new float[3]{-0.0507,1.4157,-0.0689});
HAnimJoint792.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint792.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758.addChildren(&HAnimJoint792);

HAnimJoint& HAnimJoint793 =  HAnimJoint();
HAnimJoint793.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint793.setDEF(CString("hanim_l_eyeball_joint"));
HAnimJoint793.setCenter(new float[3]{0.0479,1.3963,-0.0188});
HAnimJoint793.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint793.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758.addChildren(&HAnimJoint793);

HAnimJoint& HAnimJoint794 =  HAnimJoint();
HAnimJoint794.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint794.setDEF(CString("hanim_r_eyeball_joint"));
HAnimJoint794.setCenter(new float[3]{-0.0483,1.3963,-0.0188});
HAnimJoint794.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint794.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758.addChildren(&HAnimJoint794);

HAnimJoint& HAnimJoint795 =  HAnimJoint();
HAnimJoint795.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint795.setDEF(CString("hanim_l_eyebrow_joint"));
HAnimJoint795.setCenter(new float[3]{0.0216,1.4053,0.0051});
HAnimJoint795.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint795.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758.addChildren(&HAnimJoint795);

HAnimJoint& HAnimJoint796 =  HAnimJoint();
HAnimJoint796.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint796.setDEF(CString("hanim_r_eyebrow_joint"));
HAnimJoint796.setCenter(new float[3]{-0.0219,1.4053,0.0051});
HAnimJoint796.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint796.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758.addChildren(&HAnimJoint796);

HAnimJoint& HAnimJoint797 =  HAnimJoint();
HAnimJoint797.X3DNode::setName(CString("temporomandibular"));
HAnimJoint797.setDEF(CString("hanim_temporomandibular"));
HAnimJoint797.setCenter(new float[3]{-0.0002,1.3043,-0.0865});
HAnimJoint797.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint797.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint758.addChildren(&HAnimJoint797);

HAnimJoint749.addChildren(&HAnimJoint758);

HAnimJoint740.addChildren(&HAnimJoint749);

HAnimJoint731.addChildren(&HAnimJoint740);

HAnimJoint722.addChildren(&HAnimJoint731);

HAnimJoint713.addChildren(&HAnimJoint722);

HAnimJoint704.addChildren(&HAnimJoint713);

HAnimJoint695.addChildren(&HAnimJoint704);

HAnimJoint678.addChildren(&HAnimJoint695);

HAnimJoint& HAnimJoint798 =  HAnimJoint();
HAnimJoint798.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint798.setDEF(CString("hanim_l_sternoclavicular"));
HAnimJoint798.setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint798.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint798.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment799 =  HAnimSegment();
HAnimSegment799.X3DNode::setName(CString("l_clavicle"));
HAnimSegment799.setDEF(CString("hanim_l_clavicle"));
Transform& Transform800 =  Transform();
Transform800.setTranslation(new float[3]{0.082,1.4488,-0.0353});
Transform& Transform801 =  Transform();
//Empty Transform
Shape& Shape802 =  Shape();
Shape802.setUSE(CString("HAnimJointShape"));
Transform801.addChild(&Shape802);

Transform800.addChild(&Transform801);

HAnimSegment799.addChild(&Transform800);

Shape& Shape803 =  Shape();
LineSet& LineSet804 =  LineSet();
LineSet804.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate805 =  Coordinate();
Coordinate805.setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
LineSet804.setCoord(Coordinate805);

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA& ColorRGBA806 =  ColorRGBA();
ColorRGBA806.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet804.addChild(&ColorRGBA806);

Shape803.setGeometry(&LineSet804);

HAnimSegment799.addChild(&Shape803);

HAnimJoint798.addChildren(&HAnimSegment799);

HAnimJoint& HAnimJoint807 =  HAnimJoint();
HAnimJoint807.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint807.setDEF(CString("hanim_l_acromioclavicular"));
HAnimJoint807.setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint807.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint807.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment808 =  HAnimSegment();
HAnimSegment808.X3DNode::setName(CString("l_scapula"));
HAnimSegment808.setDEF(CString("hanim_l_scapula"));
Transform& Transform809 =  Transform();
Transform809.setTranslation(new float[3]{0.0962,1.4269,-0.0424});
Transform& Transform810 =  Transform();
//Empty Transform
Shape& Shape811 =  Shape();
Shape811.setUSE(CString("HAnimJointShape"));
Transform810.addChild(&Shape811);

Transform809.addChild(&Transform810);

HAnimSegment808.addChild(&Transform809);

Shape& Shape812 =  Shape();
LineSet& LineSet813 =  LineSet();
LineSet813.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate814 =  Coordinate();
Coordinate814.setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
LineSet813.setCoord(Coordinate814);

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA& ColorRGBA815 =  ColorRGBA();
ColorRGBA815.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet813.addChild(&ColorRGBA815);

Shape812.setGeometry(&LineSet813);

HAnimSegment808.addChild(&Shape812);

HAnimJoint807.addChildren(&HAnimSegment808);

HAnimJoint& HAnimJoint816 =  HAnimJoint();
HAnimJoint816.X3DNode::setName(CString("l_shoulder"));
HAnimJoint816.setDEF(CString("hanim_l_shoulder"));
HAnimJoint816.setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint816.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint816.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment817 =  HAnimSegment();
HAnimSegment817.X3DNode::setName(CString("l_upperarm"));
HAnimSegment817.setDEF(CString("hanim_l_upperarm"));
Transform& Transform818 =  Transform();
Transform818.setTranslation(new float[3]{0.2029,1.4376,-0.0387});
Transform& Transform819 =  Transform();
//Empty Transform
Shape& Shape820 =  Shape();
Shape820.setUSE(CString("HAnimJointShape"));
Transform819.addChild(&Shape820);

Transform818.addChild(&Transform819);

HAnimSegment817.addChild(&Transform818);

Shape& Shape821 =  Shape();
LineSet& LineSet822 =  LineSet();
LineSet822.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate823 =  Coordinate();
Coordinate823.setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
LineSet822.setCoord(Coordinate823);

//from l_shoulder to l_elbow vertices 2
ColorRGBA& ColorRGBA824 =  ColorRGBA();
ColorRGBA824.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet822.addChild(&ColorRGBA824);

Shape821.setGeometry(&LineSet822);

HAnimSegment817.addChild(&Shape821);

HAnimJoint816.addChildren(&HAnimSegment817);

HAnimJoint& HAnimJoint825 =  HAnimJoint();
HAnimJoint825.X3DNode::setName(CString("l_elbow"));
HAnimJoint825.setDEF(CString("hanim_l_elbow"));
HAnimJoint825.setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint825.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint825.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment826 =  HAnimSegment();
HAnimSegment826.X3DNode::setName(CString("l_forearm"));
HAnimSegment826.setDEF(CString("hanim_l_forearm"));
Transform& Transform827 =  Transform();
Transform827.setTranslation(new float[3]{0.2014,1.1357,-0.0682});
Transform& Transform828 =  Transform();
//Empty Transform
Shape& Shape829 =  Shape();
Shape829.setUSE(CString("HAnimJointShape"));
Transform828.addChild(&Shape829);

Transform827.addChild(&Transform828);

HAnimSegment826.addChild(&Transform827);

Shape& Shape830 =  Shape();
LineSet& LineSet831 =  LineSet();
LineSet831.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate832 =  Coordinate();
Coordinate832.setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
LineSet831.setCoord(Coordinate832);

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA& ColorRGBA833 =  ColorRGBA();
ColorRGBA833.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet831.addChild(&ColorRGBA833);

Shape830.setGeometry(&LineSet831);

HAnimSegment826.addChild(&Shape830);

HAnimJoint825.addChildren(&HAnimSegment826);

HAnimJoint& HAnimJoint834 =  HAnimJoint();
HAnimJoint834.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint834.setDEF(CString("hanim_l_radiocarpal"));
HAnimJoint834.setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint834.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint834.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment835 =  HAnimSegment();
HAnimSegment835.X3DNode::setName(CString("l_carpal"));
HAnimSegment835.setDEF(CString("hanim_l_carpal"));
Transform& Transform836 =  Transform();
Transform836.setScale(new float[3]{0.2,0.2,0.2});
Transform836.setTranslation(new float[3]{0.2,0.85,-0.05});
Transform836.setRotation(new float[4]{0,0,1,-3.14});
//Transform left hand
Transform& Transform837 =  Transform();
Transform837.setRotation(new float[4]{0,1,0,-1.57});
//Transform left hand
Shape& Shape838 =  Shape();
Shape838.setUSE(CString("HAnimJointShape"));
Transform837.addChild(&Shape838);

Transform836.addChild(&Transform837);

HAnimSegment835.addChild(&Transform836);

Shape& Shape839 =  Shape();
LineSet& LineSet840 =  LineSet();
LineSet840.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate841 =  Coordinate();
Coordinate841.setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826}, 6);
LineSet840.setCoord(Coordinate841);

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA& ColorRGBA842 =  ColorRGBA();
ColorRGBA842.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet840.addChild(&ColorRGBA842);

Shape839.setGeometry(&LineSet840);

HAnimSegment835.addChild(&Shape839);

Shape& Shape843 =  Shape();
LineSet& LineSet844 =  LineSet();
LineSet844.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate845 =  Coordinate();
Coordinate845.setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935}, 6);
LineSet844.setCoord(Coordinate845);

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA& ColorRGBA846 =  ColorRGBA();
ColorRGBA846.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet844.addChild(&ColorRGBA846);

Shape843.setGeometry(&LineSet844);

HAnimSegment835.addChild(&Shape843);

Shape& Shape847 =  Shape();
LineSet& LineSet848 =  LineSet();
LineSet848.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate849 =  Coordinate();
Coordinate849.setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067}, 6);
LineSet848.setCoord(Coordinate849);

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA& ColorRGBA850 =  ColorRGBA();
ColorRGBA850.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet848.addChild(&ColorRGBA850);

Shape847.setGeometry(&LineSet848);

HAnimSegment835.addChild(&Shape847);

Shape& Shape851 =  Shape();
LineSet& LineSet852 =  LineSet();
LineSet852.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate853 =  Coordinate();
Coordinate853.setPoint(new float[6]{0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276}, 6);
LineSet852.setCoord(Coordinate853);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA& ColorRGBA854 =  ColorRGBA();
ColorRGBA854.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet852.addChild(&ColorRGBA854);

Shape851.setGeometry(&LineSet852);

HAnimSegment835.addChild(&Shape851);

HAnimJoint834.addChildren(&HAnimSegment835);

HAnimJoint& HAnimJoint855 =  HAnimJoint();
HAnimJoint855.X3DNode::setName(CString("l_midcarpal_1"));
HAnimJoint855.setDEF(CString("hanim_l_midcarpal_1"));
HAnimJoint855.setCenter(new float[3]{0.1811,0.6975,-0.0826});
HAnimJoint855.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint855.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment856 =  HAnimSegment();
HAnimSegment856.X3DNode::setName(CString("l_trapezium"));
HAnimSegment856.setDEF(CString("hanim_l_trapezium"));
Transform& Transform857 =  Transform();
Transform857.setTranslation(new float[3]{0.1811,0.6975,-0.0826});
Transform& Transform858 =  Transform();
//Empty Transform
Shape& Shape859 =  Shape();
Shape859.setUSE(CString("HAnimJointShape"));
Transform858.addChild(&Shape859);

Transform857.addChild(&Transform858);

HAnimSegment856.addChild(&Transform857);

Shape& Shape860 =  Shape();
LineSet& LineSet861 =  LineSet();
LineSet861.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate862 =  Coordinate();
Coordinate862.setPoint(new float[6]{0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534}, 6);
LineSet861.setCoord(Coordinate862);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA863 =  ColorRGBA();
ColorRGBA863.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet861.addChild(&ColorRGBA863);

Shape860.setGeometry(&LineSet861);

HAnimSegment856.addChild(&Shape860);

HAnimJoint855.addChildren(&HAnimSegment856);

HAnimJoint& HAnimJoint864 =  HAnimJoint();
HAnimJoint864.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint864.setDEF(CString("hanim_l_carpometacarpal_1"));
HAnimJoint864.setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint864.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint864.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment865 =  HAnimSegment();
HAnimSegment865.X3DNode::setName(CString("l_metacarpal_1"));
HAnimSegment865.setDEF(CString("hanim_l_metacarpal_1"));
Transform& Transform866 =  Transform();
Transform866.setTranslation(new float[3]{0.1924,0.8472,-0.0534});
Transform& Transform867 =  Transform();
//Empty Transform
Shape& Shape868 =  Shape();
Shape868.setUSE(CString("HAnimJointShape"));
Transform867.addChild(&Shape868);

Transform866.addChild(&Transform867);

HAnimSegment865.addChild(&Transform866);

Shape& Shape869 =  Shape();
LineSet& LineSet870 =  LineSet();
LineSet870.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate871 =  Coordinate();
Coordinate871.setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
LineSet870.setCoord(Coordinate871);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA872 =  ColorRGBA();
ColorRGBA872.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet870.addChild(&ColorRGBA872);

Shape869.setGeometry(&LineSet870);

HAnimSegment865.addChild(&Shape869);

HAnimJoint864.addChildren(&HAnimSegment865);

HAnimJoint& HAnimJoint873 =  HAnimJoint();
HAnimJoint873.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint873.setDEF(CString("hanim_l_metacarpophalangeal_1"));
HAnimJoint873.setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint873.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint873.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment874 =  HAnimSegment();
HAnimSegment874.X3DNode::setName(CString("l_carpal_proximal_phalanx_1"));
HAnimSegment874.setDEF(CString("hanim_l_carpal_proximal_phalanx_1"));
Transform& Transform875 =  Transform();
Transform875.setTranslation(new float[3]{0.1951,0.8226,0.0246});
Transform& Transform876 =  Transform();
//Empty Transform
Shape& Shape877 =  Shape();
Shape877.setUSE(CString("HAnimJointShape"));
Transform876.addChild(&Shape877);

Transform875.addChild(&Transform876);

HAnimSegment874.addChild(&Transform875);

Shape& Shape878 =  Shape();
LineSet& LineSet879 =  LineSet();
LineSet879.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate880 =  Coordinate();
Coordinate880.setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
LineSet879.setCoord(Coordinate880);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA881 =  ColorRGBA();
ColorRGBA881.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet879.addChild(&ColorRGBA881);

Shape878.setGeometry(&LineSet879);

HAnimSegment874.addChild(&Shape878);

HAnimJoint873.addChildren(&HAnimSegment874);

HAnimJoint& HAnimJoint882 =  HAnimJoint();
HAnimJoint882.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint882.setDEF(CString("hanim_l_carpal_interphalangeal_1"));
HAnimJoint882.setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint882.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint882.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint873.addChildren(&HAnimJoint882);

HAnimJoint864.addChildren(&HAnimJoint873);

HAnimJoint855.addChildren(&HAnimJoint864);

HAnimJoint834.addChildren(&HAnimJoint855);

HAnimJoint& HAnimJoint883 =  HAnimJoint();
HAnimJoint883.X3DNode::setName(CString("l_midcarpal_2"));
HAnimJoint883.setDEF(CString("hanim_l_midcarpal_2"));
HAnimJoint883.setCenter(new float[3]{0.1811,0.6984,-0.0935});
HAnimJoint883.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint883.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment884 =  HAnimSegment();
HAnimSegment884.X3DNode::setName(CString("l_trapezoid"));
HAnimSegment884.setDEF(CString("hanim_l_trapezoid"));
Transform& Transform885 =  Transform();
Transform885.setTranslation(new float[3]{0.1811,0.6984,-0.0935});
Transform& Transform886 =  Transform();
//Empty Transform
Shape& Shape887 =  Shape();
Shape887.setUSE(CString("HAnimJointShape"));
Transform886.addChild(&Shape887);

Transform885.addChild(&Transform886);

HAnimSegment884.addChild(&Transform885);

Shape& Shape888 =  Shape();
LineSet& LineSet889 =  LineSet();
LineSet889.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate890 =  Coordinate();
Coordinate890.setPoint(new float[6]{0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028}, 6);
LineSet889.setCoord(Coordinate890);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA891 =  ColorRGBA();
ColorRGBA891.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet889.addChild(&ColorRGBA891);

Shape888.setGeometry(&LineSet889);

HAnimSegment884.addChild(&Shape888);

HAnimJoint883.addChildren(&HAnimSegment884);

HAnimJoint& HAnimJoint892 =  HAnimJoint();
HAnimJoint892.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint892.setDEF(CString("hanim_l_carpometacarpal_2"));
HAnimJoint892.setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint892.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint892.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment893 =  HAnimSegment();
HAnimSegment893.X3DNode::setName(CString("l_metacarpal_2"));
HAnimSegment893.setDEF(CString("hanim_l_metacarpal_2"));
Transform& Transform894 =  Transform();
Transform894.setTranslation(new float[3]{0.1983,0.8024,-0.028});
Transform& Transform895 =  Transform();
//Empty Transform
Shape& Shape896 =  Shape();
Shape896.setUSE(CString("HAnimJointShape"));
Transform895.addChild(&Shape896);

Transform894.addChild(&Transform895);

HAnimSegment893.addChild(&Transform894);

Shape& Shape897 =  Shape();
LineSet& LineSet898 =  LineSet();
LineSet898.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate899 =  Coordinate();
Coordinate899.setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
LineSet898.setCoord(Coordinate899);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA900 =  ColorRGBA();
ColorRGBA900.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet898.addChild(&ColorRGBA900);

Shape897.setGeometry(&LineSet898);

HAnimSegment893.addChild(&Shape897);

HAnimJoint892.addChildren(&HAnimSegment893);

HAnimJoint& HAnimJoint901 =  HAnimJoint();
HAnimJoint901.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint901.setDEF(CString("hanim_l_metacarpophalangeal_2"));
HAnimJoint901.setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint901.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint901.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment902 =  HAnimSegment();
HAnimSegment902.X3DNode::setName(CString("l_carpal_proximal_phalanx_2"));
HAnimSegment902.setDEF(CString("hanim_l_carpal_proximal_phalanx_2"));
Transform& Transform903 =  Transform();
Transform903.setTranslation(new float[3]{0.1983,0.7815,-0.028});
Transform& Transform904 =  Transform();
//Empty Transform
Shape& Shape905 =  Shape();
Shape905.setUSE(CString("HAnimJointShape"));
Transform904.addChild(&Shape905);

Transform903.addChild(&Transform904);

HAnimSegment902.addChild(&Transform903);

Shape& Shape906 =  Shape();
LineSet& LineSet907 =  LineSet();
LineSet907.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate908 =  Coordinate();
Coordinate908.setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
LineSet907.setCoord(Coordinate908);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA909 =  ColorRGBA();
ColorRGBA909.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet907.addChild(&ColorRGBA909);

Shape906.setGeometry(&LineSet907);

HAnimSegment902.addChild(&Shape906);

HAnimJoint901.addChildren(&HAnimSegment902);

HAnimJoint& HAnimJoint910 =  HAnimJoint();
HAnimJoint910.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint910.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimJoint910.setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint910.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint910.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment911 =  HAnimSegment();
HAnimSegment911.X3DNode::setName(CString("l_carpal_middle_phalanx_2"));
HAnimSegment911.setDEF(CString("hanim_l_carpal_middle_phalanx_2"));
Transform& Transform912 =  Transform();
Transform912.setTranslation(new float[3]{0.2017,0.7363,-0.0248});
Transform& Transform913 =  Transform();
//Empty Transform
Shape& Shape914 =  Shape();
Shape914.setUSE(CString("HAnimJointShape"));
Transform913.addChild(&Shape914);

Transform912.addChild(&Transform913);

HAnimSegment911.addChild(&Transform912);

Shape& Shape915 =  Shape();
LineSet& LineSet916 =  LineSet();
LineSet916.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate917 =  Coordinate();
Coordinate917.setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
LineSet916.setCoord(Coordinate917);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA918 =  ColorRGBA();
ColorRGBA918.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet916.addChild(&ColorRGBA918);

Shape915.setGeometry(&LineSet916);

HAnimSegment911.addChild(&Shape915);

HAnimJoint910.addChildren(&HAnimSegment911);

HAnimJoint& HAnimJoint919 =  HAnimJoint();
HAnimJoint919.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint919.setDEF(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimJoint919.setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint919.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint919.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint910.addChildren(&HAnimJoint919);

HAnimJoint901.addChildren(&HAnimJoint910);

HAnimJoint892.addChildren(&HAnimJoint901);

HAnimJoint883.addChildren(&HAnimJoint892);

HAnimJoint834.addChildren(&HAnimJoint883);

HAnimJoint& HAnimJoint920 =  HAnimJoint();
HAnimJoint920.X3DNode::setName(CString("l_midcarpal_3"));
HAnimJoint920.setDEF(CString("hanim_l_midcarpal_3"));
HAnimJoint920.setCenter(new float[3]{0.1809,0.7,-0.1067});
HAnimJoint920.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint920.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment921 =  HAnimSegment();
HAnimSegment921.X3DNode::setName(CString("l_capitate"));
HAnimSegment921.setDEF(CString("hanim_l_capitate"));
Transform& Transform922 =  Transform();
Transform922.setTranslation(new float[3]{0.1809,0.7,-0.1067});
Transform& Transform923 =  Transform();
//Empty Transform
Shape& Shape924 =  Shape();
Shape924.setUSE(CString("HAnimJointShape"));
Transform923.addChild(&Shape924);

Transform922.addChild(&Transform923);

HAnimSegment921.addChild(&Transform922);

Shape& Shape925 =  Shape();
LineSet& LineSet926 =  LineSet();
LineSet926.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate927 =  Coordinate();
Coordinate927.setPoint(new float[6]{0.1809,0.7,-0.1067,0.1987,0.8029,-0.053}, 6);
LineSet926.setCoord(Coordinate927);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA928 =  ColorRGBA();
ColorRGBA928.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet926.addChild(&ColorRGBA928);

Shape925.setGeometry(&LineSet926);

HAnimSegment921.addChild(&Shape925);

HAnimJoint920.addChildren(&HAnimSegment921);

HAnimJoint& HAnimJoint929 =  HAnimJoint();
HAnimJoint929.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint929.setDEF(CString("hanim_l_carpometacarpal_3"));
HAnimJoint929.setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint929.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint929.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment930 =  HAnimSegment();
HAnimSegment930.X3DNode::setName(CString("l_metacarpal_3"));
HAnimSegment930.setDEF(CString("hanim_l_metacarpal_3"));
Transform& Transform931 =  Transform();
Transform931.setTranslation(new float[3]{0.1987,0.8029,-0.053});
Transform& Transform932 =  Transform();
//Empty Transform
Shape& Shape933 =  Shape();
Shape933.setUSE(CString("HAnimJointShape"));
Transform932.addChild(&Shape933);

Transform931.addChild(&Transform932);

HAnimSegment930.addChild(&Transform931);

Shape& Shape934 =  Shape();
LineSet& LineSet935 =  LineSet();
LineSet935.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate936 =  Coordinate();
Coordinate936.setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
LineSet935.setCoord(Coordinate936);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA937 =  ColorRGBA();
ColorRGBA937.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet935.addChild(&ColorRGBA937);

Shape934.setGeometry(&LineSet935);

HAnimSegment930.addChild(&Shape934);

HAnimJoint929.addChildren(&HAnimSegment930);

HAnimJoint& HAnimJoint938 =  HAnimJoint();
HAnimJoint938.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint938.setDEF(CString("hanim_l_metacarpophalangeal_3"));
HAnimJoint938.setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint938.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint938.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment939 =  HAnimSegment();
HAnimSegment939.X3DNode::setName(CString("l_carpal_proximal_phalanx_3"));
HAnimSegment939.setDEF(CString("hanim_l_carpal_proximal_phalanx_3"));
Transform& Transform940 =  Transform();
Transform940.setTranslation(new float[3]{0.1987,0.7818,-0.053});
Transform& Transform941 =  Transform();
//Empty Transform
Shape& Shape942 =  Shape();
Shape942.setUSE(CString("HAnimJointShape"));
Transform941.addChild(&Shape942);

Transform940.addChild(&Transform941);

HAnimSegment939.addChild(&Transform940);

Shape& Shape943 =  Shape();
LineSet& LineSet944 =  LineSet();
LineSet944.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate945 =  Coordinate();
Coordinate945.setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
LineSet944.setCoord(Coordinate945);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA946 =  ColorRGBA();
ColorRGBA946.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet944.addChild(&ColorRGBA946);

Shape943.setGeometry(&LineSet944);

HAnimSegment939.addChild(&Shape943);

HAnimJoint938.addChildren(&HAnimSegment939);

HAnimJoint& HAnimJoint947 =  HAnimJoint();
HAnimJoint947.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint947.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimJoint947.setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint947.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint947.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment948 =  HAnimSegment();
HAnimSegment948.X3DNode::setName(CString("l_carpal_middle_phalanx_3"));
HAnimSegment948.setDEF(CString("hanim_l_carpal_middle_phalanx_3"));
Transform& Transform949 =  Transform();
Transform949.setTranslation(new float[3]{0.2013,0.7273,-0.0503});
Transform& Transform950 =  Transform();
//Empty Transform
Shape& Shape951 =  Shape();
Shape951.setUSE(CString("HAnimJointShape"));
Transform950.addChild(&Shape951);

Transform949.addChild(&Transform950);

HAnimSegment948.addChild(&Transform949);

Shape& Shape952 =  Shape();
LineSet& LineSet953 =  LineSet();
LineSet953.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate954 =  Coordinate();
Coordinate954.setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
LineSet953.setCoord(Coordinate954);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA955 =  ColorRGBA();
ColorRGBA955.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet953.addChild(&ColorRGBA955);

Shape952.setGeometry(&LineSet953);

HAnimSegment948.addChild(&Shape952);

HAnimJoint947.addChildren(&HAnimSegment948);

HAnimJoint& HAnimJoint956 =  HAnimJoint();
HAnimJoint956.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint956.setDEF(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimJoint956.setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint956.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint956.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint947.addChildren(&HAnimJoint956);

HAnimJoint938.addChildren(&HAnimJoint947);

HAnimJoint929.addChildren(&HAnimJoint938);

HAnimJoint920.addChildren(&HAnimJoint929);

HAnimJoint834.addChildren(&HAnimJoint920);

HAnimJoint& HAnimJoint957 =  HAnimJoint();
HAnimJoint957.X3DNode::setName(CString("l_midcarpal_4_5"));
HAnimJoint957.setDEF(CString("hanim_l_midcarpal_4_5"));
HAnimJoint957.setCenter(new float[3]{0.1809,0.6973,-0.1276});
HAnimJoint957.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint957.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment958 =  HAnimSegment();
HAnimSegment958.X3DNode::setName(CString("l_hamate"));
HAnimSegment958.setDEF(CString("hanim_l_hamate"));
Transform& Transform959 =  Transform();
Transform959.setTranslation(new float[3]{0.1809,0.6973,-0.1276});
Transform& Transform960 =  Transform();
//Empty Transform
Shape& Shape961 =  Shape();
Shape961.setUSE(CString("HAnimJointShape"));
Transform960.addChild(&Shape961);

Transform959.addChild(&Transform960);

HAnimSegment958.addChild(&Transform959);

Shape& Shape962 =  Shape();
LineSet& LineSet963 =  LineSet();
LineSet963.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate964 =  Coordinate();
Coordinate964.setPoint(new float[6]{0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794}, 6);
LineSet963.setCoord(Coordinate964);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA965 =  ColorRGBA();
ColorRGBA965.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet963.addChild(&ColorRGBA965);

Shape962.setGeometry(&LineSet963);

HAnimSegment958.addChild(&Shape962);

Shape& Shape966 =  Shape();
LineSet& LineSet967 =  LineSet();
LineSet967.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate968 =  Coordinate();
Coordinate968.setPoint(new float[6]{0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036}, 6);
LineSet967.setCoord(Coordinate968);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA969 =  ColorRGBA();
ColorRGBA969.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet967.addChild(&ColorRGBA969);

Shape966.setGeometry(&LineSet967);

HAnimSegment958.addChild(&Shape966);

HAnimJoint957.addChildren(&HAnimSegment958);

HAnimJoint& HAnimJoint970 =  HAnimJoint();
HAnimJoint970.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint970.setDEF(CString("hanim_l_carpometacarpal_4"));
HAnimJoint970.setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint970.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint970.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment971 =  HAnimSegment();
HAnimSegment971.X3DNode::setName(CString("l_metacarpal_4"));
HAnimSegment971.setDEF(CString("hanim_l_metacarpal_4"));
Transform& Transform972 =  Transform();
Transform972.setTranslation(new float[3]{0.1956,0.8019,-0.0794});
Transform& Transform973 =  Transform();
//Empty Transform
Shape& Shape974 =  Shape();
Shape974.setUSE(CString("HAnimJointShape"));
Transform973.addChild(&Shape974);

Transform972.addChild(&Transform973);

HAnimSegment971.addChild(&Transform972);

Shape& Shape975 =  Shape();
LineSet& LineSet976 =  LineSet();
LineSet976.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate977 =  Coordinate();
Coordinate977.setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
LineSet976.setCoord(Coordinate977);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA978 =  ColorRGBA();
ColorRGBA978.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet976.addChild(&ColorRGBA978);

Shape975.setGeometry(&LineSet976);

HAnimSegment971.addChild(&Shape975);

HAnimJoint970.addChildren(&HAnimSegment971);

HAnimJoint& HAnimJoint979 =  HAnimJoint();
HAnimJoint979.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint979.setDEF(CString("hanim_l_metacarpophalangeal_4"));
HAnimJoint979.setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint979.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint979.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment980 =  HAnimSegment();
HAnimSegment980.X3DNode::setName(CString("l_carpal_proximal_phalanx_4"));
HAnimSegment980.setDEF(CString("hanim_l_carpal_proximal_phalanx_4"));
Transform& Transform981 =  Transform();
Transform981.setTranslation(new float[3]{0.1956,0.7815,-0.0794});
Transform& Transform982 =  Transform();
//Empty Transform
Shape& Shape983 =  Shape();
Shape983.setUSE(CString("HAnimJointShape"));
Transform982.addChild(&Shape983);

Transform981.addChild(&Transform982);

HAnimSegment980.addChild(&Transform981);

Shape& Shape984 =  Shape();
LineSet& LineSet985 =  LineSet();
LineSet985.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate986 =  Coordinate();
Coordinate986.setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
LineSet985.setCoord(Coordinate986);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA987 =  ColorRGBA();
ColorRGBA987.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet985.addChild(&ColorRGBA987);

Shape984.setGeometry(&LineSet985);

HAnimSegment980.addChild(&Shape984);

HAnimJoint979.addChildren(&HAnimSegment980);

HAnimJoint& HAnimJoint988 =  HAnimJoint();
HAnimJoint988.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint988.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimJoint988.setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint988.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint988.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment989 =  HAnimSegment();
HAnimSegment989.X3DNode::setName(CString("l_carpal_middle_phalanx_4"));
HAnimSegment989.setDEF(CString("hanim_l_carpal_middle_phalanx_4"));
Transform& Transform990 =  Transform();
Transform990.setTranslation(new float[3]{0.1973,0.7287,-0.0777});
Transform& Transform991 =  Transform();
//Empty Transform
Shape& Shape992 =  Shape();
Shape992.setUSE(CString("HAnimJointShape"));
Transform991.addChild(&Shape992);

Transform990.addChild(&Transform991);

HAnimSegment989.addChild(&Transform990);

Shape& Shape993 =  Shape();
LineSet& LineSet994 =  LineSet();
LineSet994.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate995 =  Coordinate();
Coordinate995.setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
LineSet994.setCoord(Coordinate995);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA996 =  ColorRGBA();
ColorRGBA996.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet994.addChild(&ColorRGBA996);

Shape993.setGeometry(&LineSet994);

HAnimSegment989.addChild(&Shape993);

HAnimJoint988.addChildren(&HAnimSegment989);

HAnimJoint& HAnimJoint997 =  HAnimJoint();
HAnimJoint997.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint997.setDEF(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimJoint997.setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint997.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint997.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint988.addChildren(&HAnimJoint997);

HAnimJoint979.addChildren(&HAnimJoint988);

HAnimJoint970.addChildren(&HAnimJoint979);

HAnimJoint957.addChildren(&HAnimJoint970);

HAnimJoint& HAnimJoint998 =  HAnimJoint();
HAnimJoint998.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint998.setDEF(CString("hanim_l_carpometacarpal_5"));
HAnimJoint998.setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint998.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint998.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment999 =  HAnimSegment();
HAnimSegment999.X3DNode::setName(CString("l_metacarpal_5"));
HAnimSegment999.setDEF(CString("hanim_l_metacarpal_5"));
Transform& Transform1000 =  Transform();
Transform1000.setTranslation(new float[3]{0.1925,0.8066,-0.1036});
Transform& Transform1001 =  Transform();
//Empty Transform
Shape& Shape1002 =  Shape();
Shape1002.setUSE(CString("HAnimJointShape"));
Transform1001.addChild(&Shape1002);

Transform1000.addChild(&Transform1001);

HAnimSegment999.addChild(&Transform1000);

Shape& Shape1003 =  Shape();
LineSet& LineSet1004 =  LineSet();
LineSet1004.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1005 =  Coordinate();
Coordinate1005.setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
LineSet1004.setCoord(Coordinate1005);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1006 =  ColorRGBA();
ColorRGBA1006.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1004.addChild(&ColorRGBA1006);

Shape1003.setGeometry(&LineSet1004);

HAnimSegment999.addChild(&Shape1003);

HAnimJoint998.addChildren(&HAnimSegment999);

HAnimJoint& HAnimJoint1007 =  HAnimJoint();
HAnimJoint1007.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint1007.setDEF(CString("hanim_l_metacarpophalangeal_5"));
HAnimJoint1007.setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint1007.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1007.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1008 =  HAnimSegment();
HAnimSegment1008.X3DNode::setName(CString("l_carpal_proximal_phalanx_5"));
HAnimSegment1008.setDEF(CString("hanim_l_carpal_proximal_phalanx_5"));
Transform& Transform1009 =  Transform();
Transform1009.setTranslation(new float[3]{0.1925,0.7866,-0.1036});
Transform& Transform1010 =  Transform();
//Empty Transform
Shape& Shape1011 =  Shape();
Shape1011.setUSE(CString("HAnimJointShape"));
Transform1010.addChild(&Shape1011);

Transform1009.addChild(&Transform1010);

HAnimSegment1008.addChild(&Transform1009);

Shape& Shape1012 =  Shape();
LineSet& LineSet1013 =  LineSet();
LineSet1013.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1014 =  Coordinate();
Coordinate1014.setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
LineSet1013.setCoord(Coordinate1014);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1015 =  ColorRGBA();
ColorRGBA1015.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1013.addChild(&ColorRGBA1015);

Shape1012.setGeometry(&LineSet1013);

HAnimSegment1008.addChild(&Shape1012);

HAnimJoint1007.addChildren(&HAnimSegment1008);

HAnimJoint& HAnimJoint1016 =  HAnimJoint();
HAnimJoint1016.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint1016.setDEF(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimJoint1016.setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint1016.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1016.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1017 =  HAnimSegment();
HAnimSegment1017.X3DNode::setName(CString("l_carpal_middle_phalanx_5"));
HAnimSegment1017.setDEF(CString("hanim_l_carpal_middle_phalanx_5"));
Transform& Transform1018 =  Transform();
Transform1018.setTranslation(new float[3]{0.1938,0.7452,-0.1024});
Transform& Transform1019 =  Transform();
//Empty Transform
Shape& Shape1020 =  Shape();
Shape1020.setUSE(CString("HAnimJointShape"));
Transform1019.addChild(&Shape1020);

Transform1018.addChild(&Transform1019);

HAnimSegment1017.addChild(&Transform1018);

Shape& Shape1021 =  Shape();
LineSet& LineSet1022 =  LineSet();
LineSet1022.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1023 =  Coordinate();
Coordinate1023.setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
LineSet1022.setCoord(Coordinate1023);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1024 =  ColorRGBA();
ColorRGBA1024.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1022.addChild(&ColorRGBA1024);

Shape1021.setGeometry(&LineSet1022);

HAnimSegment1017.addChild(&Shape1021);

HAnimJoint1016.addChildren(&HAnimSegment1017);

HAnimJoint& HAnimJoint1025 =  HAnimJoint();
HAnimJoint1025.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint1025.setDEF(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimJoint1025.setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint1025.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1025.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1016.addChildren(&HAnimJoint1025);

HAnimJoint1007.addChildren(&HAnimJoint1016);

HAnimJoint998.addChildren(&HAnimJoint1007);

HAnimJoint957.addChildren(&HAnimJoint998);

HAnimJoint834.addChildren(&HAnimJoint957);

HAnimJoint825.addChildren(&HAnimJoint834);

HAnimJoint816.addChildren(&HAnimJoint825);

HAnimJoint807.addChildren(&HAnimJoint816);

HAnimJoint798.addChildren(&HAnimJoint807);

HAnimJoint678.addChildren(&HAnimJoint798);

HAnimJoint& HAnimJoint1026 =  HAnimJoint();
HAnimJoint1026.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint1026.setDEF(CString("hanim_r_sternoclavicular"));
HAnimJoint1026.setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint1026.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1026.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1027 =  HAnimSegment();
HAnimSegment1027.X3DNode::setName(CString("r_clavicle"));
HAnimSegment1027.setDEF(CString("hanim_r_clavicle"));
Transform& Transform1028 =  Transform();
Transform1028.setTranslation(new float[3]{-0.0694,1.46,-0.033});
Transform& Transform1029 =  Transform();
//Empty Transform
Shape& Shape1030 =  Shape();
Shape1030.setUSE(CString("HAnimJointShape"));
Transform1029.addChild(&Shape1030);

Transform1028.addChild(&Transform1029);

HAnimSegment1027.addChild(&Transform1028);

Shape& Shape1031 =  Shape();
LineSet& LineSet1032 =  LineSet();
LineSet1032.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1033 =  Coordinate();
Coordinate1033.setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
LineSet1032.setCoord(Coordinate1033);

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA& ColorRGBA1034 =  ColorRGBA();
ColorRGBA1034.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1032.addChild(&ColorRGBA1034);

Shape1031.setGeometry(&LineSet1032);

HAnimSegment1027.addChild(&Shape1031);

HAnimJoint1026.addChildren(&HAnimSegment1027);

HAnimJoint& HAnimJoint1035 =  HAnimJoint();
HAnimJoint1035.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint1035.setDEF(CString("hanim_r_acromioclavicular"));
HAnimJoint1035.setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint1035.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1035.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1036 =  HAnimSegment();
HAnimSegment1036.X3DNode::setName(CString("r_scapula"));
HAnimSegment1036.setDEF(CString("hanim_r_scapula"));
Transform& Transform1037 =  Transform();
Transform1037.setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
Transform& Transform1038 =  Transform();
//Empty Transform
Shape& Shape1039 =  Shape();
Shape1039.setUSE(CString("HAnimJointShape"));
Transform1038.addChild(&Shape1039);

Transform1037.addChild(&Transform1038);

HAnimSegment1036.addChild(&Transform1037);

Shape& Shape1040 =  Shape();
LineSet& LineSet1041 =  LineSet();
LineSet1041.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1042 =  Coordinate();
Coordinate1042.setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
LineSet1041.setCoord(Coordinate1042);

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA& ColorRGBA1043 =  ColorRGBA();
ColorRGBA1043.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1041.addChild(&ColorRGBA1043);

Shape1040.setGeometry(&LineSet1041);

HAnimSegment1036.addChild(&Shape1040);

HAnimJoint1035.addChildren(&HAnimSegment1036);

HAnimJoint& HAnimJoint1044 =  HAnimJoint();
HAnimJoint1044.X3DNode::setName(CString("r_shoulder"));
HAnimJoint1044.setDEF(CString("hanim_r_shoulder"));
HAnimJoint1044.setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint1044.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1044.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1045 =  HAnimSegment();
HAnimSegment1045.X3DNode::setName(CString("r_upperarm"));
HAnimSegment1045.setDEF(CString("hanim_r_upperarm"));
Transform& Transform1046 =  Transform();
Transform1046.setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
Transform& Transform1047 =  Transform();
//Empty Transform
Shape& Shape1048 =  Shape();
Shape1048.setUSE(CString("HAnimJointShape"));
Transform1047.addChild(&Shape1048);

Transform1046.addChild(&Transform1047);

HAnimSegment1045.addChild(&Transform1046);

Shape& Shape1049 =  Shape();
LineSet& LineSet1050 =  LineSet();
LineSet1050.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1051 =  Coordinate();
Coordinate1051.setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
LineSet1050.setCoord(Coordinate1051);

//from r_shoulder to r_elbow vertices 2
ColorRGBA& ColorRGBA1052 =  ColorRGBA();
ColorRGBA1052.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1050.addChild(&ColorRGBA1052);

Shape1049.setGeometry(&LineSet1050);

HAnimSegment1045.addChild(&Shape1049);

HAnimJoint1044.addChildren(&HAnimSegment1045);

HAnimJoint& HAnimJoint1053 =  HAnimJoint();
HAnimJoint1053.X3DNode::setName(CString("r_elbow"));
HAnimJoint1053.setDEF(CString("hanim_r_elbow"));
HAnimJoint1053.setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint1053.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1053.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1054 =  HAnimSegment();
HAnimSegment1054.X3DNode::setName(CString("r_forearm"));
HAnimSegment1054.setDEF(CString("hanim_r_forearm"));
Transform& Transform1055 =  Transform();
Transform1055.setTranslation(new float[3]{-0.1949,1.1388,-0.062});
Transform& Transform1056 =  Transform();
//Empty Transform
Shape& Shape1057 =  Shape();
Shape1057.setUSE(CString("HAnimJointShape"));
Transform1056.addChild(&Shape1057);

Transform1055.addChild(&Transform1056);

HAnimSegment1054.addChild(&Transform1055);

Shape& Shape1058 =  Shape();
LineSet& LineSet1059 =  LineSet();
LineSet1059.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1060 =  Coordinate();
Coordinate1060.setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
LineSet1059.setCoord(Coordinate1060);

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA& ColorRGBA1061 =  ColorRGBA();
ColorRGBA1061.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1059.addChild(&ColorRGBA1061);

Shape1058.setGeometry(&LineSet1059);

HAnimSegment1054.addChild(&Shape1058);

HAnimJoint1053.addChildren(&HAnimSegment1054);

HAnimJoint& HAnimJoint1062 =  HAnimJoint();
HAnimJoint1062.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint1062.setDEF(CString("hanim_r_radiocarpal"));
HAnimJoint1062.setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint1062.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1062.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1063 =  HAnimSegment();
HAnimSegment1063.X3DNode::setName(CString("r_carpal"));
HAnimSegment1063.setDEF(CString("hanim_r_carpal"));
Transform& Transform1064 =  Transform();
Transform1064.setScale(new float[3]{0.2,0.2,0.2});
Transform1064.setTranslation(new float[3]{-0.2,0.85,-0.05});
Transform1064.setRotation(new float[4]{0,0,1,-3.14});
//Transform right hand
Transform& Transform1065 =  Transform();
Transform1065.setRotation(new float[4]{0,1,0,1.57});
//Transform right hand
Shape& Shape1066 =  Shape();
Shape1066.setUSE(CString("HAnimJointShape"));
Transform1065.addChild(&Shape1066);

Transform1064.addChild(&Transform1065);

HAnimSegment1063.addChild(&Transform1064);

Shape& Shape1067 =  Shape();
LineSet& LineSet1068 =  LineSet();
LineSet1068.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1069 =  Coordinate();
Coordinate1069.setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826}, 6);
LineSet1068.setCoord(Coordinate1069);

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA& ColorRGBA1070 =  ColorRGBA();
ColorRGBA1070.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1068.addChild(&ColorRGBA1070);

Shape1067.setGeometry(&LineSet1068);

HAnimSegment1063.addChild(&Shape1067);

Shape& Shape1071 =  Shape();
LineSet& LineSet1072 =  LineSet();
LineSet1072.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1073 =  Coordinate();
Coordinate1073.setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935}, 6);
LineSet1072.setCoord(Coordinate1073);

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA& ColorRGBA1074 =  ColorRGBA();
ColorRGBA1074.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1072.addChild(&ColorRGBA1074);

Shape1071.setGeometry(&LineSet1072);

HAnimSegment1063.addChild(&Shape1071);

Shape& Shape1075 =  Shape();
LineSet& LineSet1076 =  LineSet();
LineSet1076.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1077 =  Coordinate();
Coordinate1077.setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067}, 6);
LineSet1076.setCoord(Coordinate1077);

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA& ColorRGBA1078 =  ColorRGBA();
ColorRGBA1078.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1076.addChild(&ColorRGBA1078);

Shape1075.setGeometry(&LineSet1076);

HAnimSegment1063.addChild(&Shape1075);

Shape& Shape1079 =  Shape();
LineSet& LineSet1080 =  LineSet();
LineSet1080.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1081 =  Coordinate();
Coordinate1081.setPoint(new float[6]{-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276}, 6);
LineSet1080.setCoord(Coordinate1081);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA& ColorRGBA1082 =  ColorRGBA();
ColorRGBA1082.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1080.addChild(&ColorRGBA1082);

Shape1079.setGeometry(&LineSet1080);

HAnimSegment1063.addChild(&Shape1079);

HAnimJoint1062.addChildren(&HAnimSegment1063);

HAnimJoint& HAnimJoint1083 =  HAnimJoint();
HAnimJoint1083.X3DNode::setName(CString("r_midcarpal_1"));
HAnimJoint1083.setDEF(CString("hanim_r_midcarpal_1"));
HAnimJoint1083.setCenter(new float[3]{-0.1811,0.6975,-0.0826});
HAnimJoint1083.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1083.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1084 =  HAnimSegment();
HAnimSegment1084.X3DNode::setName(CString("r_trapezium"));
HAnimSegment1084.setDEF(CString("hanim_r_trapezium"));
Transform& Transform1085 =  Transform();
Transform1085.setTranslation(new float[3]{-0.1811,0.6975,-0.0826});
Transform& Transform1086 =  Transform();
//Empty Transform
Shape& Shape1087 =  Shape();
Shape1087.setUSE(CString("HAnimJointShape"));
Transform1086.addChild(&Shape1087);

Transform1085.addChild(&Transform1086);

HAnimSegment1084.addChild(&Transform1085);

Shape& Shape1088 =  Shape();
LineSet& LineSet1089 =  LineSet();
LineSet1089.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1090 =  Coordinate();
Coordinate1090.setPoint(new float[6]{-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473}, 6);
LineSet1089.setCoord(Coordinate1090);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA& ColorRGBA1091 =  ColorRGBA();
ColorRGBA1091.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1089.addChild(&ColorRGBA1091);

Shape1088.setGeometry(&LineSet1089);

HAnimSegment1084.addChild(&Shape1088);

HAnimJoint1083.addChildren(&HAnimSegment1084);

HAnimJoint& HAnimJoint1092 =  HAnimJoint();
HAnimJoint1092.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint1092.setDEF(CString("hanim_r_carpometacarpal_1"));
HAnimJoint1092.setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint1092.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1092.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1093 =  HAnimSegment();
HAnimSegment1093.X3DNode::setName(CString("r_metacarpal_1"));
HAnimSegment1093.setDEF(CString("hanim_r_metacarpal_1"));
Transform& Transform1094 =  Transform();
Transform1094.setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
Transform& Transform1095 =  Transform();
//Empty Transform
Shape& Shape1096 =  Shape();
Shape1096.setUSE(CString("HAnimJointShape"));
Transform1095.addChild(&Shape1096);

Transform1094.addChild(&Transform1095);

HAnimSegment1093.addChild(&Transform1094);

Shape& Shape1097 =  Shape();
LineSet& LineSet1098 =  LineSet();
LineSet1098.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1099 =  Coordinate();
Coordinate1099.setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
LineSet1098.setCoord(Coordinate1099);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA& ColorRGBA1100 =  ColorRGBA();
ColorRGBA1100.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1098.addChild(&ColorRGBA1100);

Shape1097.setGeometry(&LineSet1098);

HAnimSegment1093.addChild(&Shape1097);

HAnimJoint1092.addChildren(&HAnimSegment1093);

HAnimJoint& HAnimJoint1101 =  HAnimJoint();
HAnimJoint1101.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint1101.setDEF(CString("hanim_r_metacarpophalangeal_1"));
HAnimJoint1101.setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint1101.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1101.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1102 =  HAnimSegment();
HAnimSegment1102.X3DNode::setName(CString("r_carpal_proximal_phalanx_1"));
HAnimSegment1102.setDEF(CString("hanim_r_carpal_proximal_phalanx_1"));
Transform& Transform1103 =  Transform();
Transform1103.setTranslation(new float[3]{-0.1874,0.8256,0.0306});
Transform& Transform1104 =  Transform();
//Empty Transform
Shape& Shape1105 =  Shape();
Shape1105.setUSE(CString("HAnimJointShape"));
Transform1104.addChild(&Shape1105);

Transform1103.addChild(&Transform1104);

HAnimSegment1102.addChild(&Transform1103);

Shape& Shape1106 =  Shape();
LineSet& LineSet1107 =  LineSet();
LineSet1107.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1108 =  Coordinate();
Coordinate1108.setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
LineSet1107.setCoord(Coordinate1108);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA& ColorRGBA1109 =  ColorRGBA();
ColorRGBA1109.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1107.addChild(&ColorRGBA1109);

Shape1106.setGeometry(&LineSet1107);

HAnimSegment1102.addChild(&Shape1106);

HAnimJoint1101.addChildren(&HAnimSegment1102);

HAnimJoint& HAnimJoint1110 =  HAnimJoint();
HAnimJoint1110.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint1110.setDEF(CString("hanim_r_carpal_interphalangeal_1"));
HAnimJoint1110.setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint1110.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1110.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1101.addChildren(&HAnimJoint1110);

HAnimJoint1092.addChildren(&HAnimJoint1101);

HAnimJoint1083.addChildren(&HAnimJoint1092);

HAnimJoint1062.addChildren(&HAnimJoint1083);

HAnimJoint& HAnimJoint1111 =  HAnimJoint();
HAnimJoint1111.X3DNode::setName(CString("r_midcarpal_2"));
HAnimJoint1111.setDEF(CString("hanim_r_midcarpal_2"));
HAnimJoint1111.setCenter(new float[3]{-0.1811,0.6984,-0.0935});
HAnimJoint1111.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1111.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1112 =  HAnimSegment();
HAnimSegment1112.X3DNode::setName(CString("r_trapezoid"));
HAnimSegment1112.setDEF(CString("hanim_r_trapezoid"));
Transform& Transform1113 =  Transform();
Transform1113.setTranslation(new float[3]{-0.1811,0.6984,-0.0935});
Transform& Transform1114 =  Transform();
//Empty Transform
Shape& Shape1115 =  Shape();
Shape1115.setUSE(CString("HAnimJointShape"));
Transform1114.addChild(&Shape1115);

Transform1113.addChild(&Transform1114);

HAnimSegment1112.addChild(&Transform1113);

Shape& Shape1116 =  Shape();
LineSet& LineSet1117 =  LineSet();
LineSet1117.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1118 =  Coordinate();
Coordinate1118.setPoint(new float[6]{-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218}, 6);
LineSet1117.setCoord(Coordinate1118);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA& ColorRGBA1119 =  ColorRGBA();
ColorRGBA1119.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1117.addChild(&ColorRGBA1119);

Shape1116.setGeometry(&LineSet1117);

HAnimSegment1112.addChild(&Shape1116);

HAnimJoint1111.addChildren(&HAnimSegment1112);

HAnimJoint& HAnimJoint1120 =  HAnimJoint();
HAnimJoint1120.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint1120.setDEF(CString("hanim_r_carpometacarpal_2"));
HAnimJoint1120.setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint1120.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1120.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1121 =  HAnimSegment();
HAnimSegment1121.X3DNode::setName(CString("r_metacarpal_2"));
HAnimSegment1121.setDEF(CString("hanim_r_metacarpal_2"));
Transform& Transform1122 =  Transform();
Transform1122.setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
Transform& Transform1123 =  Transform();
//Empty Transform
Shape& Shape1124 =  Shape();
Shape1124.setUSE(CString("HAnimJointShape"));
Transform1123.addChild(&Shape1124);

Transform1122.addChild(&Transform1123);

HAnimSegment1121.addChild(&Transform1122);

Shape& Shape1125 =  Shape();
LineSet& LineSet1126 =  LineSet();
LineSet1126.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1127 =  Coordinate();
Coordinate1127.setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
LineSet1126.setCoord(Coordinate1127);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA& ColorRGBA1128 =  ColorRGBA();
ColorRGBA1128.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1126.addChild(&ColorRGBA1128);

Shape1125.setGeometry(&LineSet1126);

HAnimSegment1121.addChild(&Shape1125);

HAnimJoint1120.addChildren(&HAnimSegment1121);

HAnimJoint& HAnimJoint1129 =  HAnimJoint();
HAnimJoint1129.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint1129.setDEF(CString("hanim_r_metacarpophalangeal_2"));
HAnimJoint1129.setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint1129.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1129.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1130 =  HAnimSegment();
HAnimSegment1130.X3DNode::setName(CString("r_carpal_proximal_phalanx_2"));
HAnimSegment1130.setDEF(CString("hanim_r_carpal_proximal_phalanx_2"));
Transform& Transform1131 =  Transform();
Transform1131.setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
Transform& Transform1132 =  Transform();
//Empty Transform
Shape& Shape1133 =  Shape();
Shape1133.setUSE(CString("HAnimJointShape"));
Transform1132.addChild(&Shape1133);

Transform1131.addChild(&Transform1132);

HAnimSegment1130.addChild(&Transform1131);

Shape& Shape1134 =  Shape();
LineSet& LineSet1135 =  LineSet();
LineSet1135.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1136 =  Coordinate();
Coordinate1136.setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
LineSet1135.setCoord(Coordinate1136);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1137 =  ColorRGBA();
ColorRGBA1137.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1135.addChild(&ColorRGBA1137);

Shape1134.setGeometry(&LineSet1135);

HAnimSegment1130.addChild(&Shape1134);

HAnimJoint1129.addChildren(&HAnimSegment1130);

HAnimJoint& HAnimJoint1138 =  HAnimJoint();
HAnimJoint1138.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint1138.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimJoint1138.setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint1138.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1138.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1139 =  HAnimSegment();
HAnimSegment1139.X3DNode::setName(CString("r_carpal_middle_phalanx_2"));
HAnimSegment1139.setDEF(CString("hanim_r_carpal_middle_phalanx_2"));
Transform& Transform1140 =  Transform();
Transform1140.setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
Transform& Transform1141 =  Transform();
//Empty Transform
Shape& Shape1142 =  Shape();
Shape1142.setUSE(CString("HAnimJointShape"));
Transform1141.addChild(&Shape1142);

Transform1140.addChild(&Transform1141);

HAnimSegment1139.addChild(&Transform1140);

Shape& Shape1143 =  Shape();
LineSet& LineSet1144 =  LineSet();
LineSet1144.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1145 =  Coordinate();
Coordinate1145.setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
LineSet1144.setCoord(Coordinate1145);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA& ColorRGBA1146 =  ColorRGBA();
ColorRGBA1146.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1144.addChild(&ColorRGBA1146);

Shape1143.setGeometry(&LineSet1144);

HAnimSegment1139.addChild(&Shape1143);

HAnimJoint1138.addChildren(&HAnimSegment1139);

HAnimJoint& HAnimJoint1147 =  HAnimJoint();
HAnimJoint1147.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint1147.setDEF(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimJoint1147.setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint1147.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1147.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1138.addChildren(&HAnimJoint1147);

HAnimJoint1129.addChildren(&HAnimJoint1138);

HAnimJoint1120.addChildren(&HAnimJoint1129);

HAnimJoint1111.addChildren(&HAnimJoint1120);

HAnimJoint1062.addChildren(&HAnimJoint1111);

HAnimJoint& HAnimJoint1148 =  HAnimJoint();
HAnimJoint1148.X3DNode::setName(CString("r_midcarpal_3"));
HAnimJoint1148.setDEF(CString("hanim_r_midcarpal_3"));
HAnimJoint1148.setCenter(new float[3]{-0.1809,0.7,-0.1067});
HAnimJoint1148.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1148.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1149 =  HAnimSegment();
HAnimSegment1149.X3DNode::setName(CString("r_capitate"));
HAnimSegment1149.setDEF(CString("hanim_r_capitate"));
Transform& Transform1150 =  Transform();
Transform1150.setTranslation(new float[3]{-0.1809,0.7,-0.1067});
Transform& Transform1151 =  Transform();
//Empty Transform
Shape& Shape1152 =  Shape();
Shape1152.setUSE(CString("HAnimJointShape"));
Transform1151.addChild(&Shape1152);

Transform1150.addChild(&Transform1151);

HAnimSegment1149.addChild(&Transform1150);

Shape& Shape1153 =  Shape();
LineSet& LineSet1154 =  LineSet();
LineSet1154.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1155 =  Coordinate();
Coordinate1155.setPoint(new float[6]{-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468}, 6);
LineSet1154.setCoord(Coordinate1155);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA& ColorRGBA1156 =  ColorRGBA();
ColorRGBA1156.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1154.addChild(&ColorRGBA1156);

Shape1153.setGeometry(&LineSet1154);

HAnimSegment1149.addChild(&Shape1153);

HAnimJoint1148.addChildren(&HAnimSegment1149);

HAnimJoint& HAnimJoint1157 =  HAnimJoint();
HAnimJoint1157.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint1157.setDEF(CString("hanim_r_carpometacarpal_3"));
HAnimJoint1157.setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint1157.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1157.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1158 =  HAnimSegment();
HAnimSegment1158.X3DNode::setName(CString("r_metacarpal_3"));
HAnimSegment1158.setDEF(CString("hanim_r_metacarpal_3"));
Transform& Transform1159 =  Transform();
Transform1159.setTranslation(new float[3]{-0.1972,0.806,-0.0468});
Transform& Transform1160 =  Transform();
//Empty Transform
Shape& Shape1161 =  Shape();
Shape1161.setUSE(CString("HAnimJointShape"));
Transform1160.addChild(&Shape1161);

Transform1159.addChild(&Transform1160);

HAnimSegment1158.addChild(&Transform1159);

Shape& Shape1162 =  Shape();
LineSet& LineSet1163 =  LineSet();
LineSet1163.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1164 =  Coordinate();
Coordinate1164.setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
LineSet1163.setCoord(Coordinate1164);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA& ColorRGBA1165 =  ColorRGBA();
ColorRGBA1165.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1163.addChild(&ColorRGBA1165);

Shape1162.setGeometry(&LineSet1163);

HAnimSegment1158.addChild(&Shape1162);

HAnimJoint1157.addChildren(&HAnimSegment1158);

HAnimJoint& HAnimJoint1166 =  HAnimJoint();
HAnimJoint1166.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint1166.setDEF(CString("hanim_r_metacarpophalangeal_3"));
HAnimJoint1166.setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint1166.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1166.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1167 =  HAnimSegment();
HAnimSegment1167.X3DNode::setName(CString("r_carpal_proximal_phalanx_3"));
HAnimSegment1167.setDEF(CString("hanim_r_carpal_proximal_phalanx_3"));
Transform& Transform1168 =  Transform();
Transform1168.setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
Transform& Transform1169 =  Transform();
//Empty Transform
Shape& Shape1170 =  Shape();
Shape1170.setUSE(CString("HAnimJointShape"));
Transform1169.addChild(&Shape1170);

Transform1168.addChild(&Transform1169);

HAnimSegment1167.addChild(&Transform1168);

Shape& Shape1171 =  Shape();
LineSet& LineSet1172 =  LineSet();
LineSet1172.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1173 =  Coordinate();
Coordinate1173.setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
LineSet1172.setCoord(Coordinate1173);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1174 =  ColorRGBA();
ColorRGBA1174.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1172.addChild(&ColorRGBA1174);

Shape1171.setGeometry(&LineSet1172);

HAnimSegment1167.addChild(&Shape1171);

HAnimJoint1166.addChildren(&HAnimSegment1167);

HAnimJoint& HAnimJoint1175 =  HAnimJoint();
HAnimJoint1175.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint1175.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimJoint1175.setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint1175.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1175.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1176 =  HAnimSegment();
HAnimSegment1176.X3DNode::setName(CString("r_carpal_middle_phalanx_3"));
HAnimSegment1176.setDEF(CString("hanim_r_carpal_middle_phalanx_3"));
Transform& Transform1177 =  Transform();
Transform1177.setTranslation(new float[3]{-0.195,0.7304,-0.0441});
Transform& Transform1178 =  Transform();
//Empty Transform
Shape& Shape1179 =  Shape();
Shape1179.setUSE(CString("HAnimJointShape"));
Transform1178.addChild(&Shape1179);

Transform1177.addChild(&Transform1178);

HAnimSegment1176.addChild(&Transform1177);

Shape& Shape1180 =  Shape();
LineSet& LineSet1181 =  LineSet();
LineSet1181.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1182 =  Coordinate();
Coordinate1182.setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
LineSet1181.setCoord(Coordinate1182);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA& ColorRGBA1183 =  ColorRGBA();
ColorRGBA1183.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1181.addChild(&ColorRGBA1183);

Shape1180.setGeometry(&LineSet1181);

HAnimSegment1176.addChild(&Shape1180);

HAnimJoint1175.addChildren(&HAnimSegment1176);

HAnimJoint& HAnimJoint1184 =  HAnimJoint();
HAnimJoint1184.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint1184.setDEF(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimJoint1184.setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint1184.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1184.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1175.addChildren(&HAnimJoint1184);

HAnimJoint1166.addChildren(&HAnimJoint1175);

HAnimJoint1157.addChildren(&HAnimJoint1166);

HAnimJoint1148.addChildren(&HAnimJoint1157);

HAnimJoint1062.addChildren(&HAnimJoint1148);

HAnimJoint& HAnimJoint1185 =  HAnimJoint();
HAnimJoint1185.X3DNode::setName(CString("r_midcarpal_4_5"));
HAnimJoint1185.setDEF(CString("hanim_r_midcarpal_4_5"));
HAnimJoint1185.setCenter(new float[3]{-0.1809,0.6973,-0.1276});
HAnimJoint1185.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1185.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1186 =  HAnimSegment();
HAnimSegment1186.X3DNode::setName(CString("r_hamate"));
HAnimSegment1186.setDEF(CString("hanim_r_hamate"));
Transform& Transform1187 =  Transform();
Transform1187.setTranslation(new float[3]{-0.1809,0.6973,-0.1276});
Transform& Transform1188 =  Transform();
//Empty Transform
Shape& Shape1189 =  Shape();
Shape1189.setUSE(CString("HAnimJointShape"));
Transform1188.addChild(&Shape1189);

Transform1187.addChild(&Transform1188);

HAnimSegment1186.addChild(&Transform1187);

Shape& Shape1190 =  Shape();
LineSet& LineSet1191 =  LineSet();
LineSet1191.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1192 =  Coordinate();
Coordinate1192.setPoint(new float[6]{-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732}, 6);
LineSet1191.setCoord(Coordinate1192);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA& ColorRGBA1193 =  ColorRGBA();
ColorRGBA1193.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1191.addChild(&ColorRGBA1193);

Shape1190.setGeometry(&LineSet1191);

HAnimSegment1186.addChild(&Shape1190);

Shape& Shape1194 =  Shape();
LineSet& LineSet1195 =  LineSet();
LineSet1195.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1196 =  Coordinate();
Coordinate1196.setPoint(new float[6]{-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975}, 6);
LineSet1195.setCoord(Coordinate1196);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA& ColorRGBA1197 =  ColorRGBA();
ColorRGBA1197.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1195.addChild(&ColorRGBA1197);

Shape1194.setGeometry(&LineSet1195);

HAnimSegment1186.addChild(&Shape1194);

HAnimJoint1185.addChildren(&HAnimSegment1186);

HAnimJoint& HAnimJoint1198 =  HAnimJoint();
HAnimJoint1198.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint1198.setDEF(CString("hanim_r_carpometacarpal_4"));
HAnimJoint1198.setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint1198.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1198.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1199 =  HAnimSegment();
HAnimSegment1199.X3DNode::setName(CString("r_metacarpal_4"));
HAnimSegment1199.setDEF(CString("hanim_r_metacarpal_4"));
Transform& Transform1200 =  Transform();
Transform1200.setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
Transform& Transform1201 =  Transform();
//Empty Transform
Shape& Shape1202 =  Shape();
Shape1202.setUSE(CString("HAnimJointShape"));
Transform1201.addChild(&Shape1202);

Transform1200.addChild(&Transform1201);

HAnimSegment1199.addChild(&Transform1200);

Shape& Shape1203 =  Shape();
LineSet& LineSet1204 =  LineSet();
LineSet1204.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1205 =  Coordinate();
Coordinate1205.setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
LineSet1204.setCoord(Coordinate1205);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA& ColorRGBA1206 =  ColorRGBA();
ColorRGBA1206.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1204.addChild(&ColorRGBA1206);

Shape1203.setGeometry(&LineSet1204);

HAnimSegment1199.addChild(&Shape1203);

HAnimJoint1198.addChildren(&HAnimSegment1199);

HAnimJoint& HAnimJoint1207 =  HAnimJoint();
HAnimJoint1207.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint1207.setDEF(CString("hanim_r_metacarpophalangeal_4"));
HAnimJoint1207.setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint1207.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1207.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1208 =  HAnimSegment();
HAnimSegment1208.X3DNode::setName(CString("r_carpal_proximal_phalanx_4"));
HAnimSegment1208.setDEF(CString("hanim_r_carpal_proximal_phalanx_4"));
Transform& Transform1209 =  Transform();
Transform1209.setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
Transform& Transform1210 =  Transform();
//Empty Transform
Shape& Shape1211 =  Shape();
Shape1211.setUSE(CString("HAnimJointShape"));
Transform1210.addChild(&Shape1211);

Transform1209.addChild(&Transform1210);

HAnimSegment1208.addChild(&Transform1209);

Shape& Shape1212 =  Shape();
LineSet& LineSet1213 =  LineSet();
LineSet1213.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1214 =  Coordinate();
Coordinate1214.setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
LineSet1213.setCoord(Coordinate1214);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1215 =  ColorRGBA();
ColorRGBA1215.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1213.addChild(&ColorRGBA1215);

Shape1212.setGeometry(&LineSet1213);

HAnimSegment1208.addChild(&Shape1212);

HAnimJoint1207.addChildren(&HAnimSegment1208);

HAnimJoint& HAnimJoint1216 =  HAnimJoint();
HAnimJoint1216.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint1216.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimJoint1216.setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint1216.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1216.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1217 =  HAnimSegment();
HAnimSegment1217.X3DNode::setName(CString("r_carpal_middle_phalanx_4"));
HAnimSegment1217.setDEF(CString("hanim_r_carpal_middle_phalanx_4"));
Transform& Transform1218 =  Transform();
Transform1218.setTranslation(new float[3]{-0.192,0.7318,-0.0716});
Transform& Transform1219 =  Transform();
//Empty Transform
Shape& Shape1220 =  Shape();
Shape1220.setUSE(CString("HAnimJointShape"));
Transform1219.addChild(&Shape1220);

Transform1218.addChild(&Transform1219);

HAnimSegment1217.addChild(&Transform1218);

Shape& Shape1221 =  Shape();
LineSet& LineSet1222 =  LineSet();
LineSet1222.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1223 =  Coordinate();
Coordinate1223.setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
LineSet1222.setCoord(Coordinate1223);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA& ColorRGBA1224 =  ColorRGBA();
ColorRGBA1224.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1222.addChild(&ColorRGBA1224);

Shape1221.setGeometry(&LineSet1222);

HAnimSegment1217.addChild(&Shape1221);

HAnimJoint1216.addChildren(&HAnimSegment1217);

HAnimJoint& HAnimJoint1225 =  HAnimJoint();
HAnimJoint1225.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint1225.setDEF(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimJoint1225.setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1225.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1225.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1216.addChildren(&HAnimJoint1225);

HAnimJoint1207.addChildren(&HAnimJoint1216);

HAnimJoint1198.addChildren(&HAnimJoint1207);

HAnimJoint1185.addChildren(&HAnimJoint1198);

HAnimJoint& HAnimJoint1226 =  HAnimJoint();
HAnimJoint1226.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint1226.setDEF(CString("hanim_r_carpometacarpal_5"));
HAnimJoint1226.setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint1226.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1226.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1227 =  HAnimSegment();
HAnimSegment1227.X3DNode::setName(CString("r_metacarpal_5"));
HAnimSegment1227.setDEF(CString("hanim_r_metacarpal_5"));
Transform& Transform1228 =  Transform();
Transform1228.setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
Transform& Transform1229 =  Transform();
//Empty Transform
Shape& Shape1230 =  Shape();
Shape1230.setUSE(CString("HAnimJointShape"));
Transform1229.addChild(&Shape1230);

Transform1228.addChild(&Transform1229);

HAnimSegment1227.addChild(&Transform1228);

Shape& Shape1231 =  Shape();
LineSet& LineSet1232 =  LineSet();
LineSet1232.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1233 =  Coordinate();
Coordinate1233.setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
LineSet1232.setCoord(Coordinate1233);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA& ColorRGBA1234 =  ColorRGBA();
ColorRGBA1234.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1232.addChild(&ColorRGBA1234);

Shape1231.setGeometry(&LineSet1232);

HAnimSegment1227.addChild(&Shape1231);

HAnimJoint1226.addChildren(&HAnimSegment1227);

HAnimJoint& HAnimJoint1235 =  HAnimJoint();
HAnimJoint1235.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint1235.setDEF(CString("hanim_r_metacarpophalangeal_5"));
HAnimJoint1235.setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint1235.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1235.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1236 =  HAnimSegment();
HAnimSegment1236.X3DNode::setName(CString("r_carpal_proximal_phalanx_5"));
HAnimSegment1236.setDEF(CString("hanim_r_carpal_proximal_phalanx_5"));
Transform& Transform1237 =  Transform();
Transform1237.setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
Transform& Transform1238 =  Transform();
//Empty Transform
Shape& Shape1239 =  Shape();
Shape1239.setUSE(CString("HAnimJointShape"));
Transform1238.addChild(&Shape1239);

Transform1237.addChild(&Transform1238);

HAnimSegment1236.addChild(&Transform1237);

Shape& Shape1240 =  Shape();
LineSet& LineSet1241 =  LineSet();
LineSet1241.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1242 =  Coordinate();
Coordinate1242.setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
LineSet1241.setCoord(Coordinate1242);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1243 =  ColorRGBA();
ColorRGBA1243.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1241.addChild(&ColorRGBA1243);

Shape1240.setGeometry(&LineSet1241);

HAnimSegment1236.addChild(&Shape1240);

HAnimJoint1235.addChildren(&HAnimSegment1236);

HAnimJoint& HAnimJoint1244 =  HAnimJoint();
HAnimJoint1244.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint1244.setDEF(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimJoint1244.setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint1244.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1244.setLlimit(new float[3]{0,0,0}, 3);
HAnimSegment& HAnimSegment1245 =  HAnimSegment();
HAnimSegment1245.X3DNode::setName(CString("r_carpal_middle_phalanx_5"));
HAnimSegment1245.setDEF(CString("hanim_r_carpal_middle_phalanx_5"));
Transform& Transform1246 =  Transform();
Transform1246.setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
Transform& Transform1247 =  Transform();
//Empty Transform
Shape& Shape1248 =  Shape();
Shape1248.setUSE(CString("HAnimJointShape"));
Transform1247.addChild(&Shape1248);

Transform1246.addChild(&Transform1247);

HAnimSegment1245.addChild(&Transform1246);

Shape& Shape1249 =  Shape();
LineSet& LineSet1250 =  LineSet();
LineSet1250.setVertexCount(new int32_t[1]{2}, 1);
Coordinate& Coordinate1251 =  Coordinate();
Coordinate1251.setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
LineSet1250.setCoord(Coordinate1251);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA& ColorRGBA1252 =  ColorRGBA();
ColorRGBA1252.setUSE(CString("HAnimSegmentLineColorRGBA"));
LineSet1250.addChild(&ColorRGBA1252);

Shape1249.setGeometry(&LineSet1250);

HAnimSegment1245.addChild(&Shape1249);

HAnimJoint1244.addChildren(&HAnimSegment1245);

HAnimJoint& HAnimJoint1253 =  HAnimJoint();
HAnimJoint1253.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint1253.setDEF(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimJoint1253.setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1253.setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1253.setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint1244.addChildren(&HAnimJoint1253);

HAnimJoint1235.addChildren(&HAnimJoint1244);

HAnimJoint1226.addChildren(&HAnimJoint1235);

HAnimJoint1185.addChildren(&HAnimJoint1226);

HAnimJoint1062.addChildren(&HAnimJoint1185);

HAnimJoint1053.addChildren(&HAnimJoint1062);

HAnimJoint1044.addChildren(&HAnimJoint1053);

HAnimJoint1035.addChildren(&HAnimJoint1044);

HAnimJoint1026.addChildren(&HAnimJoint1035);

HAnimJoint678.addChildren(&HAnimJoint1026);

HAnimJoint669.addChildren(&HAnimJoint678);

HAnimJoint660.addChildren(&HAnimJoint669);

HAnimJoint651.addChildren(&HAnimJoint660);

HAnimJoint642.addChildren(&HAnimJoint651);

HAnimJoint633.addChildren(&HAnimJoint642);

HAnimJoint624.addChildren(&HAnimJoint633);

HAnimJoint615.addChildren(&HAnimJoint624);

HAnimJoint606.addChildren(&HAnimJoint615);

HAnimJoint597.addChildren(&HAnimJoint606);

HAnimJoint588.addChildren(&HAnimJoint597);

HAnimJoint579.addChildren(&HAnimJoint588);

HAnimJoint570.addChildren(&HAnimJoint579);

HAnimJoint561.addChildren(&HAnimJoint570);

HAnimJoint552.addChildren(&HAnimJoint561);

HAnimJoint543.addChildren(&HAnimJoint552);

HAnimJoint534.addChildren(&HAnimJoint543);

HAnimJoint52.addChildren(&HAnimJoint534);

HAnimHumanoid43.setSkeleton(&HAnimJoint52);

HAnimJoint& HAnimJoint1254 =  HAnimJoint();
HAnimJoint1254.setUSE(CString("hanim_humanoid_root"));
HAnimHumanoid43.setJoints(&HAnimJoint1254);

HAnimJoint& HAnimJoint1255 =  HAnimJoint();
HAnimJoint1255.setUSE(CString("hanim_sacroiliac"));
HAnimHumanoid43.setJoints(&HAnimJoint1255);

HAnimJoint& HAnimJoint1256 =  HAnimJoint();
HAnimJoint1256.setUSE(CString("hanim_l_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1256);

HAnimJoint& HAnimJoint1257 =  HAnimJoint();
HAnimJoint1257.setUSE(CString("hanim_l_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1257);

HAnimJoint& HAnimJoint1258 =  HAnimJoint();
HAnimJoint1258.setUSE(CString("hanim_l_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint1258);

HAnimJoint& HAnimJoint1259 =  HAnimJoint();
HAnimJoint1259.setUSE(CString("hanim_l_talocalcaneonavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1259);

HAnimJoint& HAnimJoint1260 =  HAnimJoint();
HAnimJoint1260.setUSE(CString("hanim_l_cuneonavicular_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1260);

HAnimJoint& HAnimJoint1261 =  HAnimJoint();
HAnimJoint1261.setUSE(CString("hanim_l_tarsometatarsal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1261);

HAnimJoint& HAnimJoint1262 =  HAnimJoint();
HAnimJoint1262.setUSE(CString("hanim_l_metatarsophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1262);

HAnimJoint& HAnimJoint1263 =  HAnimJoint();
HAnimJoint1263.setUSE(CString("hanim_l_tarsal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1263);

HAnimJoint& HAnimJoint1264 =  HAnimJoint();
HAnimJoint1264.setUSE(CString("hanim_l_cuneonavicular_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1264);

HAnimJoint& HAnimJoint1265 =  HAnimJoint();
HAnimJoint1265.setUSE(CString("hanim_l_tarsometatarsal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1265);

HAnimJoint& HAnimJoint1266 =  HAnimJoint();
HAnimJoint1266.setUSE(CString("hanim_l_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1266);

HAnimJoint& HAnimJoint1267 =  HAnimJoint();
HAnimJoint1267.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1267);

HAnimJoint& HAnimJoint1268 =  HAnimJoint();
HAnimJoint1268.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1268);

HAnimJoint& HAnimJoint1269 =  HAnimJoint();
HAnimJoint1269.setUSE(CString("hanim_l_cuneonavicular_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1269);

HAnimJoint& HAnimJoint1270 =  HAnimJoint();
HAnimJoint1270.setUSE(CString("hanim_l_tarsometatarsal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1270);

HAnimJoint& HAnimJoint1271 =  HAnimJoint();
HAnimJoint1271.setUSE(CString("hanim_l_metatarsophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1271);

HAnimJoint& HAnimJoint1272 =  HAnimJoint();
HAnimJoint1272.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1272);

HAnimJoint& HAnimJoint1273 =  HAnimJoint();
HAnimJoint1273.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1273);

HAnimJoint& HAnimJoint1274 =  HAnimJoint();
HAnimJoint1274.setUSE(CString("hanim_l_calcaneocuboid"));
HAnimHumanoid43.setJoints(&HAnimJoint1274);

HAnimJoint& HAnimJoint1275 =  HAnimJoint();
HAnimJoint1275.setUSE(CString("hanim_l_transversetarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1275);

HAnimJoint& HAnimJoint1276 =  HAnimJoint();
HAnimJoint1276.setUSE(CString("hanim_l_tarsometatarsal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1276);

HAnimJoint& HAnimJoint1277 =  HAnimJoint();
HAnimJoint1277.setUSE(CString("hanim_l_metatarsophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1277);

HAnimJoint& HAnimJoint1278 =  HAnimJoint();
HAnimJoint1278.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1278);

HAnimJoint& HAnimJoint1279 =  HAnimJoint();
HAnimJoint1279.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1279);

HAnimJoint& HAnimJoint1280 =  HAnimJoint();
HAnimJoint1280.setUSE(CString("hanim_l_tarsometatarsal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1280);

HAnimJoint& HAnimJoint1281 =  HAnimJoint();
HAnimJoint1281.setUSE(CString("hanim_l_metatarsophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1281);

HAnimJoint& HAnimJoint1282 =  HAnimJoint();
HAnimJoint1282.setUSE(CString("hanim_l_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1282);

HAnimJoint& HAnimJoint1283 =  HAnimJoint();
HAnimJoint1283.setUSE(CString("hanim_l_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1283);

HAnimJoint& HAnimJoint1284 =  HAnimJoint();
HAnimJoint1284.setUSE(CString("hanim_r_hip"));
HAnimHumanoid43.setJoints(&HAnimJoint1284);

HAnimJoint& HAnimJoint1285 =  HAnimJoint();
HAnimJoint1285.setUSE(CString("hanim_r_knee"));
HAnimHumanoid43.setJoints(&HAnimJoint1285);

HAnimJoint& HAnimJoint1286 =  HAnimJoint();
HAnimJoint1286.setUSE(CString("hanim_r_talocrural"));
HAnimHumanoid43.setJoints(&HAnimJoint1286);

HAnimJoint& HAnimJoint1287 =  HAnimJoint();
HAnimJoint1287.setUSE(CString("hanim_r_talocalcaneonavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1287);

HAnimJoint& HAnimJoint1288 =  HAnimJoint();
HAnimJoint1288.setUSE(CString("hanim_r_cuneonavicular_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1288);

HAnimJoint& HAnimJoint1289 =  HAnimJoint();
HAnimJoint1289.setUSE(CString("hanim_r_tarsometatarsal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1289);

HAnimJoint& HAnimJoint1290 =  HAnimJoint();
HAnimJoint1290.setUSE(CString("hanim_r_metatarsophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1290);

HAnimJoint& HAnimJoint1291 =  HAnimJoint();
HAnimJoint1291.setUSE(CString("hanim_r_tarsal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1291);

HAnimJoint& HAnimJoint1292 =  HAnimJoint();
HAnimJoint1292.setUSE(CString("hanim_r_cuneonavicular_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1292);

HAnimJoint& HAnimJoint1293 =  HAnimJoint();
HAnimJoint1293.setUSE(CString("hanim_r_tarsometatarsal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1293);

HAnimJoint& HAnimJoint1294 =  HAnimJoint();
HAnimJoint1294.setUSE(CString("hanim_r_metatarsophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1294);

HAnimJoint& HAnimJoint1295 =  HAnimJoint();
HAnimJoint1295.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1295);

HAnimJoint& HAnimJoint1296 =  HAnimJoint();
HAnimJoint1296.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1296);

HAnimJoint& HAnimJoint1297 =  HAnimJoint();
HAnimJoint1297.setUSE(CString("hanim_r_cuneonavicular_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1297);

HAnimJoint& HAnimJoint1298 =  HAnimJoint();
HAnimJoint1298.setUSE(CString("hanim_r_tarsometatarsal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1298);

HAnimJoint& HAnimJoint1299 =  HAnimJoint();
HAnimJoint1299.setUSE(CString("hanim_r_metatarsophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1299);

HAnimJoint& HAnimJoint1300 =  HAnimJoint();
HAnimJoint1300.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1300);

HAnimJoint& HAnimJoint1301 =  HAnimJoint();
HAnimJoint1301.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1301);

HAnimJoint& HAnimJoint1302 =  HAnimJoint();
HAnimJoint1302.setUSE(CString("hanim_r_calcaneocuboid"));
HAnimHumanoid43.setJoints(&HAnimJoint1302);

HAnimJoint& HAnimJoint1303 =  HAnimJoint();
HAnimJoint1303.setUSE(CString("hanim_r_transversetarsal"));
HAnimHumanoid43.setJoints(&HAnimJoint1303);

HAnimJoint& HAnimJoint1304 =  HAnimJoint();
HAnimJoint1304.setUSE(CString("hanim_r_tarsometatarsal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1304);

HAnimJoint& HAnimJoint1305 =  HAnimJoint();
HAnimJoint1305.setUSE(CString("hanim_r_metatarsophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1305);

HAnimJoint& HAnimJoint1306 =  HAnimJoint();
HAnimJoint1306.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1306);

HAnimJoint& HAnimJoint1307 =  HAnimJoint();
HAnimJoint1307.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1307);

HAnimJoint& HAnimJoint1308 =  HAnimJoint();
HAnimJoint1308.setUSE(CString("hanim_r_tarsometatarsal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1308);

HAnimJoint& HAnimJoint1309 =  HAnimJoint();
HAnimJoint1309.setUSE(CString("hanim_r_metatarsophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1309);

HAnimJoint& HAnimJoint1310 =  HAnimJoint();
HAnimJoint1310.setUSE(CString("hanim_r_tarsal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1310);

HAnimJoint& HAnimJoint1311 =  HAnimJoint();
HAnimJoint1311.setUSE(CString("hanim_r_tarsal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1311);

HAnimJoint& HAnimJoint1312 =  HAnimJoint();
HAnimJoint1312.setUSE(CString("hanim_vl5"));
HAnimHumanoid43.setJoints(&HAnimJoint1312);

HAnimJoint& HAnimJoint1313 =  HAnimJoint();
HAnimJoint1313.setUSE(CString("hanim_vl4"));
HAnimHumanoid43.setJoints(&HAnimJoint1313);

HAnimJoint& HAnimJoint1314 =  HAnimJoint();
HAnimJoint1314.setUSE(CString("hanim_vl3"));
HAnimHumanoid43.setJoints(&HAnimJoint1314);

HAnimJoint& HAnimJoint1315 =  HAnimJoint();
HAnimJoint1315.setUSE(CString("hanim_vl2"));
HAnimHumanoid43.setJoints(&HAnimJoint1315);

HAnimJoint& HAnimJoint1316 =  HAnimJoint();
HAnimJoint1316.setUSE(CString("hanim_vl1"));
HAnimHumanoid43.setJoints(&HAnimJoint1316);

HAnimJoint& HAnimJoint1317 =  HAnimJoint();
HAnimJoint1317.setUSE(CString("hanim_vt12"));
HAnimHumanoid43.setJoints(&HAnimJoint1317);

HAnimJoint& HAnimJoint1318 =  HAnimJoint();
HAnimJoint1318.setUSE(CString("hanim_vt11"));
HAnimHumanoid43.setJoints(&HAnimJoint1318);

HAnimJoint& HAnimJoint1319 =  HAnimJoint();
HAnimJoint1319.setUSE(CString("hanim_vt10"));
HAnimHumanoid43.setJoints(&HAnimJoint1319);

HAnimJoint& HAnimJoint1320 =  HAnimJoint();
HAnimJoint1320.setUSE(CString("hanim_vt9"));
HAnimHumanoid43.setJoints(&HAnimJoint1320);

HAnimJoint& HAnimJoint1321 =  HAnimJoint();
HAnimJoint1321.setUSE(CString("hanim_vt8"));
HAnimHumanoid43.setJoints(&HAnimJoint1321);

HAnimJoint& HAnimJoint1322 =  HAnimJoint();
HAnimJoint1322.setUSE(CString("hanim_vt7"));
HAnimHumanoid43.setJoints(&HAnimJoint1322);

HAnimJoint& HAnimJoint1323 =  HAnimJoint();
HAnimJoint1323.setUSE(CString("hanim_vt6"));
HAnimHumanoid43.setJoints(&HAnimJoint1323);

HAnimJoint& HAnimJoint1324 =  HAnimJoint();
HAnimJoint1324.setUSE(CString("hanim_vt5"));
HAnimHumanoid43.setJoints(&HAnimJoint1324);

HAnimJoint& HAnimJoint1325 =  HAnimJoint();
HAnimJoint1325.setUSE(CString("hanim_vt4"));
HAnimHumanoid43.setJoints(&HAnimJoint1325);

HAnimJoint& HAnimJoint1326 =  HAnimJoint();
HAnimJoint1326.setUSE(CString("hanim_vt3"));
HAnimHumanoid43.setJoints(&HAnimJoint1326);

HAnimJoint& HAnimJoint1327 =  HAnimJoint();
HAnimJoint1327.setUSE(CString("hanim_vt2"));
HAnimHumanoid43.setJoints(&HAnimJoint1327);

HAnimJoint& HAnimJoint1328 =  HAnimJoint();
HAnimJoint1328.setUSE(CString("hanim_vt1"));
HAnimHumanoid43.setJoints(&HAnimJoint1328);

HAnimJoint& HAnimJoint1329 =  HAnimJoint();
HAnimJoint1329.setUSE(CString("hanim_vc7"));
HAnimHumanoid43.setJoints(&HAnimJoint1329);

HAnimJoint& HAnimJoint1330 =  HAnimJoint();
HAnimJoint1330.setUSE(CString("hanim_vc6"));
HAnimHumanoid43.setJoints(&HAnimJoint1330);

HAnimJoint& HAnimJoint1331 =  HAnimJoint();
HAnimJoint1331.setUSE(CString("hanim_vc5"));
HAnimHumanoid43.setJoints(&HAnimJoint1331);

HAnimJoint& HAnimJoint1332 =  HAnimJoint();
HAnimJoint1332.setUSE(CString("hanim_vc4"));
HAnimHumanoid43.setJoints(&HAnimJoint1332);

HAnimJoint& HAnimJoint1333 =  HAnimJoint();
HAnimJoint1333.setUSE(CString("hanim_vc3"));
HAnimHumanoid43.setJoints(&HAnimJoint1333);

HAnimJoint& HAnimJoint1334 =  HAnimJoint();
HAnimJoint1334.setUSE(CString("hanim_vc2"));
HAnimHumanoid43.setJoints(&HAnimJoint1334);

HAnimJoint& HAnimJoint1335 =  HAnimJoint();
HAnimJoint1335.setUSE(CString("hanim_vc1"));
HAnimHumanoid43.setJoints(&HAnimJoint1335);

HAnimJoint& HAnimJoint1336 =  HAnimJoint();
HAnimJoint1336.setUSE(CString("hanim_skullbase"));
HAnimHumanoid43.setJoints(&HAnimJoint1336);

HAnimJoint& HAnimJoint1337 =  HAnimJoint();
HAnimJoint1337.setUSE(CString("hanim_l_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1337);

HAnimJoint& HAnimJoint1338 =  HAnimJoint();
HAnimJoint1338.setUSE(CString("hanim_r_eyelid_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1338);

HAnimJoint& HAnimJoint1339 =  HAnimJoint();
HAnimJoint1339.setUSE(CString("hanim_l_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1339);

HAnimJoint& HAnimJoint1340 =  HAnimJoint();
HAnimJoint1340.setUSE(CString("hanim_r_eyeball_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1340);

HAnimJoint& HAnimJoint1341 =  HAnimJoint();
HAnimJoint1341.setUSE(CString("hanim_l_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1341);

HAnimJoint& HAnimJoint1342 =  HAnimJoint();
HAnimJoint1342.setUSE(CString("hanim_r_eyebrow_joint"));
HAnimHumanoid43.setJoints(&HAnimJoint1342);

HAnimJoint& HAnimJoint1343 =  HAnimJoint();
HAnimJoint1343.setUSE(CString("hanim_temporomandibular"));
HAnimHumanoid43.setJoints(&HAnimJoint1343);

HAnimJoint& HAnimJoint1344 =  HAnimJoint();
HAnimJoint1344.setUSE(CString("hanim_l_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1344);

HAnimJoint& HAnimJoint1345 =  HAnimJoint();
HAnimJoint1345.setUSE(CString("hanim_l_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1345);

HAnimJoint& HAnimJoint1346 =  HAnimJoint();
HAnimJoint1346.setUSE(CString("hanim_l_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1346);

HAnimJoint& HAnimJoint1347 =  HAnimJoint();
HAnimJoint1347.setUSE(CString("hanim_l_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1347);

HAnimJoint& HAnimJoint1348 =  HAnimJoint();
HAnimJoint1348.setUSE(CString("hanim_l_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint1348);

HAnimJoint& HAnimJoint1349 =  HAnimJoint();
HAnimJoint1349.setUSE(CString("hanim_l_midcarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1349);

HAnimJoint& HAnimJoint1350 =  HAnimJoint();
HAnimJoint1350.setUSE(CString("hanim_l_carpometacarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1350);

HAnimJoint& HAnimJoint1351 =  HAnimJoint();
HAnimJoint1351.setUSE(CString("hanim_l_metacarpophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1351);

HAnimJoint& HAnimJoint1352 =  HAnimJoint();
HAnimJoint1352.setUSE(CString("hanim_l_carpal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1352);

HAnimJoint& HAnimJoint1353 =  HAnimJoint();
HAnimJoint1353.setUSE(CString("hanim_l_midcarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1353);

HAnimJoint& HAnimJoint1354 =  HAnimJoint();
HAnimJoint1354.setUSE(CString("hanim_l_carpometacarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1354);

HAnimJoint& HAnimJoint1355 =  HAnimJoint();
HAnimJoint1355.setUSE(CString("hanim_l_metacarpophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1355);

HAnimJoint& HAnimJoint1356 =  HAnimJoint();
HAnimJoint1356.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1356);

HAnimJoint& HAnimJoint1357 =  HAnimJoint();
HAnimJoint1357.setUSE(CString("hanim_l_carpal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1357);

HAnimJoint& HAnimJoint1358 =  HAnimJoint();
HAnimJoint1358.setUSE(CString("hanim_l_midcarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1358);

HAnimJoint& HAnimJoint1359 =  HAnimJoint();
HAnimJoint1359.setUSE(CString("hanim_l_carpometacarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1359);

HAnimJoint& HAnimJoint1360 =  HAnimJoint();
HAnimJoint1360.setUSE(CString("hanim_l_metacarpophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1360);

HAnimJoint& HAnimJoint1361 =  HAnimJoint();
HAnimJoint1361.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1361);

HAnimJoint& HAnimJoint1362 =  HAnimJoint();
HAnimJoint1362.setUSE(CString("hanim_l_carpal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1362);

HAnimJoint& HAnimJoint1363 =  HAnimJoint();
HAnimJoint1363.setUSE(CString("hanim_l_midcarpal_4_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1363);

HAnimJoint& HAnimJoint1364 =  HAnimJoint();
HAnimJoint1364.setUSE(CString("hanim_l_carpometacarpal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1364);

HAnimJoint& HAnimJoint1365 =  HAnimJoint();
HAnimJoint1365.setUSE(CString("hanim_l_metacarpophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1365);

HAnimJoint& HAnimJoint1366 =  HAnimJoint();
HAnimJoint1366.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1366);

HAnimJoint& HAnimJoint1367 =  HAnimJoint();
HAnimJoint1367.setUSE(CString("hanim_l_carpal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1367);

HAnimJoint& HAnimJoint1368 =  HAnimJoint();
HAnimJoint1368.setUSE(CString("hanim_l_carpometacarpal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1368);

HAnimJoint& HAnimJoint1369 =  HAnimJoint();
HAnimJoint1369.setUSE(CString("hanim_l_metacarpophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1369);

HAnimJoint& HAnimJoint1370 =  HAnimJoint();
HAnimJoint1370.setUSE(CString("hanim_l_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1370);

HAnimJoint& HAnimJoint1371 =  HAnimJoint();
HAnimJoint1371.setUSE(CString("hanim_l_carpal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1371);

HAnimJoint& HAnimJoint1372 =  HAnimJoint();
HAnimJoint1372.setUSE(CString("hanim_r_sternoclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1372);

HAnimJoint& HAnimJoint1373 =  HAnimJoint();
HAnimJoint1373.setUSE(CString("hanim_r_acromioclavicular"));
HAnimHumanoid43.setJoints(&HAnimJoint1373);

HAnimJoint& HAnimJoint1374 =  HAnimJoint();
HAnimJoint1374.setUSE(CString("hanim_r_shoulder"));
HAnimHumanoid43.setJoints(&HAnimJoint1374);

HAnimJoint& HAnimJoint1375 =  HAnimJoint();
HAnimJoint1375.setUSE(CString("hanim_r_elbow"));
HAnimHumanoid43.setJoints(&HAnimJoint1375);

HAnimJoint& HAnimJoint1376 =  HAnimJoint();
HAnimJoint1376.setUSE(CString("hanim_r_radiocarpal"));
HAnimHumanoid43.setJoints(&HAnimJoint1376);

HAnimJoint& HAnimJoint1377 =  HAnimJoint();
HAnimJoint1377.setUSE(CString("hanim_r_midcarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1377);

HAnimJoint& HAnimJoint1378 =  HAnimJoint();
HAnimJoint1378.setUSE(CString("hanim_r_carpometacarpal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1378);

HAnimJoint& HAnimJoint1379 =  HAnimJoint();
HAnimJoint1379.setUSE(CString("hanim_r_metacarpophalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1379);

HAnimJoint& HAnimJoint1380 =  HAnimJoint();
HAnimJoint1380.setUSE(CString("hanim_r_carpal_interphalangeal_1"));
HAnimHumanoid43.setJoints(&HAnimJoint1380);

HAnimJoint& HAnimJoint1381 =  HAnimJoint();
HAnimJoint1381.setUSE(CString("hanim_r_midcarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1381);

HAnimJoint& HAnimJoint1382 =  HAnimJoint();
HAnimJoint1382.setUSE(CString("hanim_r_carpometacarpal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1382);

HAnimJoint& HAnimJoint1383 =  HAnimJoint();
HAnimJoint1383.setUSE(CString("hanim_r_metacarpophalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1383);

HAnimJoint& HAnimJoint1384 =  HAnimJoint();
HAnimJoint1384.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1384);

HAnimJoint& HAnimJoint1385 =  HAnimJoint();
HAnimJoint1385.setUSE(CString("hanim_r_carpal_distal_interphalangeal_2"));
HAnimHumanoid43.setJoints(&HAnimJoint1385);

HAnimJoint& HAnimJoint1386 =  HAnimJoint();
HAnimJoint1386.setUSE(CString("hanim_r_midcarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1386);

HAnimJoint& HAnimJoint1387 =  HAnimJoint();
HAnimJoint1387.setUSE(CString("hanim_r_carpometacarpal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1387);

HAnimJoint& HAnimJoint1388 =  HAnimJoint();
HAnimJoint1388.setUSE(CString("hanim_r_metacarpophalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1388);

HAnimJoint& HAnimJoint1389 =  HAnimJoint();
HAnimJoint1389.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1389);

HAnimJoint& HAnimJoint1390 =  HAnimJoint();
HAnimJoint1390.setUSE(CString("hanim_r_carpal_distal_interphalangeal_3"));
HAnimHumanoid43.setJoints(&HAnimJoint1390);

HAnimJoint& HAnimJoint1391 =  HAnimJoint();
HAnimJoint1391.setUSE(CString("hanim_r_midcarpal_4_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1391);

HAnimJoint& HAnimJoint1392 =  HAnimJoint();
HAnimJoint1392.setUSE(CString("hanim_r_carpometacarpal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1392);

HAnimJoint& HAnimJoint1393 =  HAnimJoint();
HAnimJoint1393.setUSE(CString("hanim_r_metacarpophalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1393);

HAnimJoint& HAnimJoint1394 =  HAnimJoint();
HAnimJoint1394.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1394);

HAnimJoint& HAnimJoint1395 =  HAnimJoint();
HAnimJoint1395.setUSE(CString("hanim_r_carpal_distal_interphalangeal_4"));
HAnimHumanoid43.setJoints(&HAnimJoint1395);

HAnimJoint& HAnimJoint1396 =  HAnimJoint();
HAnimJoint1396.setUSE(CString("hanim_r_carpometacarpal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1396);

HAnimJoint& HAnimJoint1397 =  HAnimJoint();
HAnimJoint1397.setUSE(CString("hanim_r_metacarpophalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1397);

HAnimJoint& HAnimJoint1398 =  HAnimJoint();
HAnimJoint1398.setUSE(CString("hanim_r_carpal_proximal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1398);

HAnimJoint& HAnimJoint1399 =  HAnimJoint();
HAnimJoint1399.setUSE(CString("hanim_r_carpal_distal_interphalangeal_5"));
HAnimHumanoid43.setJoints(&HAnimJoint1399);

HAnimSegment& HAnimSegment1400 =  HAnimSegment();
HAnimSegment1400.setUSE(CString("hanim_sacrum"));
HAnimHumanoid43.setSegments(&HAnimSegment1400);

HAnimSegment& HAnimSegment1401 =  HAnimSegment();
HAnimSegment1401.setUSE(CString("hanim_pelvis"));
HAnimHumanoid43.setSegments(&HAnimSegment1401);

HAnimSegment& HAnimSegment1402 =  HAnimSegment();
HAnimSegment1402.setUSE(CString("hanim_l_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1402);

HAnimSegment& HAnimSegment1403 =  HAnimSegment();
HAnimSegment1403.setUSE(CString("hanim_l_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1403);

HAnimSegment& HAnimSegment1404 =  HAnimSegment();
HAnimSegment1404.setUSE(CString("hanim_l_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment1404);

HAnimSegment& HAnimSegment1405 =  HAnimSegment();
HAnimSegment1405.setUSE(CString("hanim_l_navicular"));
HAnimHumanoid43.setSegments(&HAnimSegment1405);

HAnimSegment& HAnimSegment1406 =  HAnimSegment();
HAnimSegment1406.setUSE(CString("hanim_l_cuneiform_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1406);

HAnimSegment& HAnimSegment1407 =  HAnimSegment();
HAnimSegment1407.setUSE(CString("hanim_l_metatarsal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1407);

HAnimSegment& HAnimSegment1408 =  HAnimSegment();
HAnimSegment1408.setUSE(CString("hanim_l_tarsal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1408);

HAnimSegment& HAnimSegment1409 =  HAnimSegment();
HAnimSegment1409.setUSE(CString("hanim_l_cuneiform_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1409);

HAnimSegment& HAnimSegment1410 =  HAnimSegment();
HAnimSegment1410.setUSE(CString("hanim_l_metatarsal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1410);

HAnimSegment& HAnimSegment1411 =  HAnimSegment();
HAnimSegment1411.setUSE(CString("hanim_l_tarsal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1411);

HAnimSegment& HAnimSegment1412 =  HAnimSegment();
HAnimSegment1412.setUSE(CString("hanim_l_tarsal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1412);

HAnimSegment& HAnimSegment1413 =  HAnimSegment();
HAnimSegment1413.setUSE(CString("hanim_l_cuneiform_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1413);

HAnimSegment& HAnimSegment1414 =  HAnimSegment();
HAnimSegment1414.setUSE(CString("hanim_l_metatarsal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1414);

HAnimSegment& HAnimSegment1415 =  HAnimSegment();
HAnimSegment1415.setUSE(CString("hanim_l_tarsal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1415);

HAnimSegment& HAnimSegment1416 =  HAnimSegment();
HAnimSegment1416.setUSE(CString("hanim_l_tarsal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1416);

HAnimSegment& HAnimSegment1417 =  HAnimSegment();
HAnimSegment1417.setUSE(CString("hanim_l_calcaneus"));
HAnimHumanoid43.setSegments(&HAnimSegment1417);

HAnimSegment& HAnimSegment1418 =  HAnimSegment();
HAnimSegment1418.setUSE(CString("hanim_l_cuboid"));
HAnimHumanoid43.setSegments(&HAnimSegment1418);

HAnimSegment& HAnimSegment1419 =  HAnimSegment();
HAnimSegment1419.setUSE(CString("hanim_l_metatarsal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1419);

HAnimSegment& HAnimSegment1420 =  HAnimSegment();
HAnimSegment1420.setUSE(CString("hanim_l_tarsal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1420);

HAnimSegment& HAnimSegment1421 =  HAnimSegment();
HAnimSegment1421.setUSE(CString("hanim_l_tarsal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1421);

HAnimSegment& HAnimSegment1422 =  HAnimSegment();
HAnimSegment1422.setUSE(CString("hanim_l_metatarsal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1422);

HAnimSegment& HAnimSegment1423 =  HAnimSegment();
HAnimSegment1423.setUSE(CString("hanim_l_tarsal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1423);

HAnimSegment& HAnimSegment1424 =  HAnimSegment();
HAnimSegment1424.setUSE(CString("hanim_l_tarsal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1424);

HAnimSegment& HAnimSegment1425 =  HAnimSegment();
HAnimSegment1425.setUSE(CString("hanim_r_thigh"));
HAnimHumanoid43.setSegments(&HAnimSegment1425);

HAnimSegment& HAnimSegment1426 =  HAnimSegment();
HAnimSegment1426.setUSE(CString("hanim_r_calf"));
HAnimHumanoid43.setSegments(&HAnimSegment1426);

HAnimSegment& HAnimSegment1427 =  HAnimSegment();
HAnimSegment1427.setUSE(CString("hanim_r_talus"));
HAnimHumanoid43.setSegments(&HAnimSegment1427);

HAnimSegment& HAnimSegment1428 =  HAnimSegment();
HAnimSegment1428.setUSE(CString("hanim_r_navicular"));
HAnimHumanoid43.setSegments(&HAnimSegment1428);

HAnimSegment& HAnimSegment1429 =  HAnimSegment();
HAnimSegment1429.setUSE(CString("hanim_r_cuneiform_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1429);

HAnimSegment& HAnimSegment1430 =  HAnimSegment();
HAnimSegment1430.setUSE(CString("hanim_r_metatarsal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1430);

HAnimSegment& HAnimSegment1431 =  HAnimSegment();
HAnimSegment1431.setUSE(CString("hanim_r_tarsal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1431);

HAnimSegment& HAnimSegment1432 =  HAnimSegment();
HAnimSegment1432.setUSE(CString("hanim_r_cuneiform_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1432);

HAnimSegment& HAnimSegment1433 =  HAnimSegment();
HAnimSegment1433.setUSE(CString("hanim_r_metatarsal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1433);

HAnimSegment& HAnimSegment1434 =  HAnimSegment();
HAnimSegment1434.setUSE(CString("hanim_r_tarsal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1434);

HAnimSegment& HAnimSegment1435 =  HAnimSegment();
HAnimSegment1435.setUSE(CString("hanim_r_tarsal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1435);

HAnimSegment& HAnimSegment1436 =  HAnimSegment();
HAnimSegment1436.setUSE(CString("hanim_r_cuneiform_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1436);

HAnimSegment& HAnimSegment1437 =  HAnimSegment();
HAnimSegment1437.setUSE(CString("hanim_r_metatarsal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1437);

HAnimSegment& HAnimSegment1438 =  HAnimSegment();
HAnimSegment1438.setUSE(CString("hanim_r_tarsal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1438);

HAnimSegment& HAnimSegment1439 =  HAnimSegment();
HAnimSegment1439.setUSE(CString("hanim_r_tarsal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1439);

HAnimSegment& HAnimSegment1440 =  HAnimSegment();
HAnimSegment1440.setUSE(CString("hanim_r_calcaneus"));
HAnimHumanoid43.setSegments(&HAnimSegment1440);

HAnimSegment& HAnimSegment1441 =  HAnimSegment();
HAnimSegment1441.setUSE(CString("hanim_r_cuboid"));
HAnimHumanoid43.setSegments(&HAnimSegment1441);

HAnimSegment& HAnimSegment1442 =  HAnimSegment();
HAnimSegment1442.setUSE(CString("hanim_r_metatarsal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1442);

HAnimSegment& HAnimSegment1443 =  HAnimSegment();
HAnimSegment1443.setUSE(CString("hanim_r_tarsal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1443);

HAnimSegment& HAnimSegment1444 =  HAnimSegment();
HAnimSegment1444.setUSE(CString("hanim_r_tarsal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1444);

HAnimSegment& HAnimSegment1445 =  HAnimSegment();
HAnimSegment1445.setUSE(CString("hanim_r_metatarsal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1445);

HAnimSegment& HAnimSegment1446 =  HAnimSegment();
HAnimSegment1446.setUSE(CString("hanim_r_tarsal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1446);

HAnimSegment& HAnimSegment1447 =  HAnimSegment();
HAnimSegment1447.setUSE(CString("hanim_r_tarsal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1447);

HAnimSegment& HAnimSegment1448 =  HAnimSegment();
HAnimSegment1448.setUSE(CString("hanim_l5"));
HAnimHumanoid43.setSegments(&HAnimSegment1448);

HAnimSegment& HAnimSegment1449 =  HAnimSegment();
HAnimSegment1449.setUSE(CString("hanim_l4"));
HAnimHumanoid43.setSegments(&HAnimSegment1449);

HAnimSegment& HAnimSegment1450 =  HAnimSegment();
HAnimSegment1450.setUSE(CString("hanim_l3"));
HAnimHumanoid43.setSegments(&HAnimSegment1450);

HAnimSegment& HAnimSegment1451 =  HAnimSegment();
HAnimSegment1451.setUSE(CString("hanim_l2"));
HAnimHumanoid43.setSegments(&HAnimSegment1451);

HAnimSegment& HAnimSegment1452 =  HAnimSegment();
HAnimSegment1452.setUSE(CString("hanim_l1"));
HAnimHumanoid43.setSegments(&HAnimSegment1452);

HAnimSegment& HAnimSegment1453 =  HAnimSegment();
HAnimSegment1453.setUSE(CString("hanim_t12"));
HAnimHumanoid43.setSegments(&HAnimSegment1453);

HAnimSegment& HAnimSegment1454 =  HAnimSegment();
HAnimSegment1454.setUSE(CString("hanim_t11"));
HAnimHumanoid43.setSegments(&HAnimSegment1454);

HAnimSegment& HAnimSegment1455 =  HAnimSegment();
HAnimSegment1455.setUSE(CString("hanim_t10"));
HAnimHumanoid43.setSegments(&HAnimSegment1455);

HAnimSegment& HAnimSegment1456 =  HAnimSegment();
HAnimSegment1456.setUSE(CString("hanim_t9"));
HAnimHumanoid43.setSegments(&HAnimSegment1456);

HAnimSegment& HAnimSegment1457 =  HAnimSegment();
HAnimSegment1457.setUSE(CString("hanim_t8"));
HAnimHumanoid43.setSegments(&HAnimSegment1457);

HAnimSegment& HAnimSegment1458 =  HAnimSegment();
HAnimSegment1458.setUSE(CString("hanim_t7"));
HAnimHumanoid43.setSegments(&HAnimSegment1458);

HAnimSegment& HAnimSegment1459 =  HAnimSegment();
HAnimSegment1459.setUSE(CString("hanim_t6"));
HAnimHumanoid43.setSegments(&HAnimSegment1459);

HAnimSegment& HAnimSegment1460 =  HAnimSegment();
HAnimSegment1460.setUSE(CString("hanim_t5"));
HAnimHumanoid43.setSegments(&HAnimSegment1460);

HAnimSegment& HAnimSegment1461 =  HAnimSegment();
HAnimSegment1461.setUSE(CString("hanim_t4"));
HAnimHumanoid43.setSegments(&HAnimSegment1461);

HAnimSegment& HAnimSegment1462 =  HAnimSegment();
HAnimSegment1462.setUSE(CString("hanim_t3"));
HAnimHumanoid43.setSegments(&HAnimSegment1462);

HAnimSegment& HAnimSegment1463 =  HAnimSegment();
HAnimSegment1463.setUSE(CString("hanim_t2"));
HAnimHumanoid43.setSegments(&HAnimSegment1463);

HAnimSegment& HAnimSegment1464 =  HAnimSegment();
HAnimSegment1464.setUSE(CString("hanim_t1"));
HAnimHumanoid43.setSegments(&HAnimSegment1464);

HAnimSegment& HAnimSegment1465 =  HAnimSegment();
HAnimSegment1465.setUSE(CString("hanim_c7"));
HAnimHumanoid43.setSegments(&HAnimSegment1465);

HAnimSegment& HAnimSegment1466 =  HAnimSegment();
HAnimSegment1466.setUSE(CString("hanim_c6"));
HAnimHumanoid43.setSegments(&HAnimSegment1466);

HAnimSegment& HAnimSegment1467 =  HAnimSegment();
HAnimSegment1467.setUSE(CString("hanim_c5"));
HAnimHumanoid43.setSegments(&HAnimSegment1467);

HAnimSegment& HAnimSegment1468 =  HAnimSegment();
HAnimSegment1468.setUSE(CString("hanim_c4"));
HAnimHumanoid43.setSegments(&HAnimSegment1468);

HAnimSegment& HAnimSegment1469 =  HAnimSegment();
HAnimSegment1469.setUSE(CString("hanim_c3"));
HAnimHumanoid43.setSegments(&HAnimSegment1469);

HAnimSegment& HAnimSegment1470 =  HAnimSegment();
HAnimSegment1470.setUSE(CString("hanim_c2"));
HAnimHumanoid43.setSegments(&HAnimSegment1470);

HAnimSegment& HAnimSegment1471 =  HAnimSegment();
HAnimSegment1471.setUSE(CString("hanim_c1"));
HAnimHumanoid43.setSegments(&HAnimSegment1471);

HAnimSegment& HAnimSegment1472 =  HAnimSegment();
HAnimSegment1472.setUSE(CString("hanim_skull"));
HAnimHumanoid43.setSegments(&HAnimSegment1472);

HAnimSegment& HAnimSegment1473 =  HAnimSegment();
HAnimSegment1473.setUSE(CString("hanim_l_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1473);

HAnimSegment& HAnimSegment1474 =  HAnimSegment();
HAnimSegment1474.setUSE(CString("hanim_l_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1474);

HAnimSegment& HAnimSegment1475 =  HAnimSegment();
HAnimSegment1475.setUSE(CString("hanim_l_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1475);

HAnimSegment& HAnimSegment1476 =  HAnimSegment();
HAnimSegment1476.setUSE(CString("hanim_l_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1476);

HAnimSegment& HAnimSegment1477 =  HAnimSegment();
HAnimSegment1477.setUSE(CString("hanim_l_carpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1477);

HAnimSegment& HAnimSegment1478 =  HAnimSegment();
HAnimSegment1478.setUSE(CString("hanim_l_trapezium"));
HAnimHumanoid43.setSegments(&HAnimSegment1478);

HAnimSegment& HAnimSegment1479 =  HAnimSegment();
HAnimSegment1479.setUSE(CString("hanim_l_metacarpal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1479);

HAnimSegment& HAnimSegment1480 =  HAnimSegment();
HAnimSegment1480.setUSE(CString("hanim_l_carpal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1480);

HAnimSegment& HAnimSegment1481 =  HAnimSegment();
HAnimSegment1481.setUSE(CString("hanim_l_trapezoid"));
HAnimHumanoid43.setSegments(&HAnimSegment1481);

HAnimSegment& HAnimSegment1482 =  HAnimSegment();
HAnimSegment1482.setUSE(CString("hanim_l_metacarpal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1482);

HAnimSegment& HAnimSegment1483 =  HAnimSegment();
HAnimSegment1483.setUSE(CString("hanim_l_carpal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1483);

HAnimSegment& HAnimSegment1484 =  HAnimSegment();
HAnimSegment1484.setUSE(CString("hanim_l_carpal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1484);

HAnimSegment& HAnimSegment1485 =  HAnimSegment();
HAnimSegment1485.setUSE(CString("hanim_l_capitate"));
HAnimHumanoid43.setSegments(&HAnimSegment1485);

HAnimSegment& HAnimSegment1486 =  HAnimSegment();
HAnimSegment1486.setUSE(CString("hanim_l_metacarpal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1486);

HAnimSegment& HAnimSegment1487 =  HAnimSegment();
HAnimSegment1487.setUSE(CString("hanim_l_carpal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1487);

HAnimSegment& HAnimSegment1488 =  HAnimSegment();
HAnimSegment1488.setUSE(CString("hanim_l_carpal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1488);

HAnimSegment& HAnimSegment1489 =  HAnimSegment();
HAnimSegment1489.setUSE(CString("hanim_l_hamate"));
HAnimHumanoid43.setSegments(&HAnimSegment1489);

HAnimSegment& HAnimSegment1490 =  HAnimSegment();
HAnimSegment1490.setUSE(CString("hanim_l_metacarpal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1490);

HAnimSegment& HAnimSegment1491 =  HAnimSegment();
HAnimSegment1491.setUSE(CString("hanim_l_carpal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1491);

HAnimSegment& HAnimSegment1492 =  HAnimSegment();
HAnimSegment1492.setUSE(CString("hanim_l_carpal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1492);

HAnimSegment& HAnimSegment1493 =  HAnimSegment();
HAnimSegment1493.setUSE(CString("hanim_l_metacarpal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1493);

HAnimSegment& HAnimSegment1494 =  HAnimSegment();
HAnimSegment1494.setUSE(CString("hanim_l_carpal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1494);

HAnimSegment& HAnimSegment1495 =  HAnimSegment();
HAnimSegment1495.setUSE(CString("hanim_l_carpal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1495);

HAnimSegment& HAnimSegment1496 =  HAnimSegment();
HAnimSegment1496.setUSE(CString("hanim_r_clavicle"));
HAnimHumanoid43.setSegments(&HAnimSegment1496);

HAnimSegment& HAnimSegment1497 =  HAnimSegment();
HAnimSegment1497.setUSE(CString("hanim_r_scapula"));
HAnimHumanoid43.setSegments(&HAnimSegment1497);

HAnimSegment& HAnimSegment1498 =  HAnimSegment();
HAnimSegment1498.setUSE(CString("hanim_r_upperarm"));
HAnimHumanoid43.setSegments(&HAnimSegment1498);

HAnimSegment& HAnimSegment1499 =  HAnimSegment();
HAnimSegment1499.setUSE(CString("hanim_r_forearm"));
HAnimHumanoid43.setSegments(&HAnimSegment1499);

HAnimSegment& HAnimSegment1500 =  HAnimSegment();
HAnimSegment1500.setUSE(CString("hanim_r_carpal"));
HAnimHumanoid43.setSegments(&HAnimSegment1500);

HAnimSegment& HAnimSegment1501 =  HAnimSegment();
HAnimSegment1501.setUSE(CString("hanim_r_trapezium"));
HAnimHumanoid43.setSegments(&HAnimSegment1501);

HAnimSegment& HAnimSegment1502 =  HAnimSegment();
HAnimSegment1502.setUSE(CString("hanim_r_metacarpal_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1502);

HAnimSegment& HAnimSegment1503 =  HAnimSegment();
HAnimSegment1503.setUSE(CString("hanim_r_carpal_proximal_phalanx_1"));
HAnimHumanoid43.setSegments(&HAnimSegment1503);

HAnimSegment& HAnimSegment1504 =  HAnimSegment();
HAnimSegment1504.setUSE(CString("hanim_r_trapezoid"));
HAnimHumanoid43.setSegments(&HAnimSegment1504);

HAnimSegment& HAnimSegment1505 =  HAnimSegment();
HAnimSegment1505.setUSE(CString("hanim_r_metacarpal_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1505);

HAnimSegment& HAnimSegment1506 =  HAnimSegment();
HAnimSegment1506.setUSE(CString("hanim_r_carpal_proximal_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1506);

HAnimSegment& HAnimSegment1507 =  HAnimSegment();
HAnimSegment1507.setUSE(CString("hanim_r_carpal_middle_phalanx_2"));
HAnimHumanoid43.setSegments(&HAnimSegment1507);

HAnimSegment& HAnimSegment1508 =  HAnimSegment();
HAnimSegment1508.setUSE(CString("hanim_r_capitate"));
HAnimHumanoid43.setSegments(&HAnimSegment1508);

HAnimSegment& HAnimSegment1509 =  HAnimSegment();
HAnimSegment1509.setUSE(CString("hanim_r_metacarpal_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1509);

HAnimSegment& HAnimSegment1510 =  HAnimSegment();
HAnimSegment1510.setUSE(CString("hanim_r_carpal_proximal_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1510);

HAnimSegment& HAnimSegment1511 =  HAnimSegment();
HAnimSegment1511.setUSE(CString("hanim_r_carpal_middle_phalanx_3"));
HAnimHumanoid43.setSegments(&HAnimSegment1511);

HAnimSegment& HAnimSegment1512 =  HAnimSegment();
HAnimSegment1512.setUSE(CString("hanim_r_hamate"));
HAnimHumanoid43.setSegments(&HAnimSegment1512);

HAnimSegment& HAnimSegment1513 =  HAnimSegment();
HAnimSegment1513.setUSE(CString("hanim_r_metacarpal_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1513);

HAnimSegment& HAnimSegment1514 =  HAnimSegment();
HAnimSegment1514.setUSE(CString("hanim_r_carpal_proximal_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1514);

HAnimSegment& HAnimSegment1515 =  HAnimSegment();
HAnimSegment1515.setUSE(CString("hanim_r_carpal_middle_phalanx_4"));
HAnimHumanoid43.setSegments(&HAnimSegment1515);

HAnimSegment& HAnimSegment1516 =  HAnimSegment();
HAnimSegment1516.setUSE(CString("hanim_r_metacarpal_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1516);

HAnimSegment& HAnimSegment1517 =  HAnimSegment();
HAnimSegment1517.setUSE(CString("hanim_r_carpal_proximal_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1517);

HAnimSegment& HAnimSegment1518 =  HAnimSegment();
HAnimSegment1518.setUSE(CString("hanim_r_carpal_middle_phalanx_5"));
HAnimHumanoid43.setSegments(&HAnimSegment1518);

Scene11.addChild(&HAnimHumanoid43);

X3D0.setScene(&Scene11);

}
