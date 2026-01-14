#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "Humanoid4NoSegSite.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4NoSegSite.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "description";
meta5.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "h2.pl";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "14 Jan 2023";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "creator";
meta8.content = "John Carlson";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "created";
meta9.content = "9 November 2020";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "license";
meta10.content = "../license.html";
head1.meta[8] = meta10;

head = head1;

Transform Transform12 = createNode("Transform");
//DEF for markerfor XYZ axes
Shape Shape13 = createNode("Shape");
Shape13.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
IndexedLineSet IndexedLineSet14 = createNode("IndexedLineSet");
IndexedLineSet14.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet14.colorPerVertex = False;
IndexedLineSet14.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate15 = createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet14.coord = Coordinate15;

Color Color16 = createNode("Color");
Color16.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet14.color = Color16;

Shape13.geometry = IndexedLineSet14;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

children = new MFNode();

children[0] = Transform12;

Group Group17 = createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
Transform Transform18 = createNode("Transform");
Transform Transform19 = createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,2,0]);
Shape Shape20 = createNode("Shape");
Shape20.DEF = "HAnimRootShape";
Sphere Sphere21 = createNode("Sphere");
Sphere21.radius = 0.02;
Shape20.geometry = Sphere21;

Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.DEF = "HAnimRootMaterial";
Material23.diffuseColor = new SFColor(new float[0.8,0,0]);
Material23.transparency = 0.3;
Appearance22.material = Material23;

Shape20.appearance = Appearance22;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape25 = createNode("Shape");
Shape25.DEF = "HAnimJointShape";
Sphere Sphere26 = createNode("Sphere");
Sphere26.radius = 0.02;
Shape25.geometry = Sphere26;

Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.DEF = "HAnimJointMaterial";
Material28.diffuseColor = new SFColor(new float[0,0,0.8]);
Material28.transparency = 0.3;
Appearance27.material = Material28;

Shape25.appearance = Appearance27;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform18.children[1] = Transform24;

Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,2.05,0]);
Shape Shape30 = createNode("Shape");
Shape30.DEF = "HAnimSegmentLine";
LineSet LineSet31 = createNode("LineSet");
LineSet31.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA32 = createNode("ColorRGBA");
ColorRGBA32.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA32.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet31.color = ColorRGBA32;

Coordinate Coordinate33 = createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet31.coord = Coordinate33;

Shape30.geometry = LineSet31;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Transform18.children[2] = Transform29;

Transform Transform34 = createNode("Transform");
Transform34.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape35 = createNode("Shape");
Shape35.DEF = "HAnimSiteShape";
IndexedFaceSet IndexedFaceSet36 = createNode("IndexedFaceSet");
IndexedFaceSet36.DEF = "DiamondIFS";
IndexedFaceSet36.creaseAngle = 0.5;
IndexedFaceSet36.solid = False;
IndexedFaceSet36.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA ColorRGBA37 = createNode("ColorRGBA");
ColorRGBA37.DEF = "HAnimSiteColorRGBA";
ColorRGBA37.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet36.color = ColorRGBA37;

Coordinate Coordinate38 = createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet36.coord = Coordinate38;

Shape35.geometry = IndexedFaceSet36;

Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.diffuseColor = new SFColor(new float[1,1,0]);
Material40.transparency = 0.3;
Appearance39.material = Material40;

Shape35.appearance = Appearance39;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

Transform18.children[3] = Transform34;

Group17.children = new MFNode();

Group17.children[0] = Transform18;

children[1] = Group17;

NavigationInfo NavigationInfo41 = createNode("NavigationInfo");
NavigationInfo41.speed = 1.5;
children[2] = NavigationInfo41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.description = "default";
children[3] = Viewpoint42;

HAnimHumanoid HAnimHumanoid43 = createNode("HAnimHumanoid");
HAnimHumanoid43.name = "HAnim";
HAnimHumanoid43.DEF = "hanim_HAnim";
HAnimHumanoid43.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid43.version = "2.0";
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
Shape Shape44 = createNode("Shape");
Shape44.DEF = "SkinShape";
IndexedFaceSet IndexedFaceSet45 = createNode("IndexedFaceSet");
IndexedFaceSet45.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet45.creaseAngle = 3.1;
Coordinate Coordinate46 = createNode("Coordinate");
Coordinate46.DEF = "TheSkinCoord";
Coordinate46.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
IndexedFaceSet45.coord = Coordinate46;

Color Color47 = createNode("Color");
Color47.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet45.color = Color47;

Shape44.geometry = IndexedFaceSet45;

Appearance Appearance48 = createNode("Appearance");
Appearance48.DEF = "SkinAppearance";
ImageTexture ImageTexture49 = createNode("ImageTexture");
ImageTexture49.DEF = "zBlueSpiralBkg2";
ImageTexture49.description = "Blue Spiral Pattern";
ImageTexture49.url = new MFString(new java.lang.String["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance48.texture = ImageTexture49;

Material Material50 = createNode("Material");
Material50.DEF = "SkinMaterial";
Material50.ambientIntensity = 0.6;
Material50.diffuseColor = new SFColor(new float[1,1,1]);
Material50.shininess = 0.6;
Material50.transparency = 0.2;
Appearance48.material = Material50;

Shape44.appearance = Appearance48;

HAnimHumanoid43.skin = new MFNode();

HAnimHumanoid43.skin[0] = Shape44;

Coordinate Coordinate51 = createNode("Coordinate");
Coordinate51.USE = "TheSkinCoord";
HAnimHumanoid43.skinCoord = Coordinate51;

HAnimJoint HAnimJoint52 = createNode("HAnimJoint");
HAnimJoint52.name = "humanoid_root";
HAnimJoint52.DEF = "hanim_humanoid_root";
HAnimJoint52.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint52.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint52.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint53 = createNode("HAnimJoint");
HAnimJoint53.name = "sacroiliac";
HAnimJoint53.DEF = "hanim_sacroiliac";
HAnimJoint53.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint53.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint53.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint53.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint53.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint54 = createNode("HAnimJoint");
HAnimJoint54.name = "l_hip";
HAnimJoint54.DEF = "hanim_l_hip";
HAnimJoint54.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint54.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint54.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint54.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint54.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint55 = createNode("HAnimJoint");
HAnimJoint55.name = "l_knee";
HAnimJoint55.DEF = "hanim_l_knee";
HAnimJoint55.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint55.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint55.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint55.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint55.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint56 = createNode("HAnimJoint");
HAnimJoint56.name = "l_talocrural";
HAnimJoint56.DEF = "hanim_l_talocrural";
HAnimJoint56.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint56.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint56.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint56.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint56.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint57 = createNode("HAnimJoint");
HAnimJoint57.name = "l_talocalcaneonavicular";
HAnimJoint57.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint57.center = new SFVec3f(new float[0.0781,0.0283,-0.097]);
HAnimJoint57.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint57.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint58 = createNode("HAnimJoint");
HAnimJoint58.name = "l_cuneonavicular_1";
HAnimJoint58.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint58.center = new SFVec3f(new float[0.0672,0.0235,-0.0835]);
HAnimJoint58.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint58.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint58.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint58.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint59 = createNode("HAnimJoint");
HAnimJoint59.name = "l_tarsometatarsal_1";
HAnimJoint59.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint59.center = new SFVec3f(new float[0.0644,0.0147,-0.0577]);
HAnimJoint59.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint59.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint59.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint59.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint60 = createNode("HAnimJoint");
HAnimJoint60.name = "l_metatarsophalangeal_1";
HAnimJoint60.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint60.center = new SFVec3f(new float[0.0619,0.0059,-0.0083]);
HAnimJoint60.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint60.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint61 = createNode("HAnimJoint");
HAnimJoint61.name = "l_tarsal_interphalangeal_1";
HAnimJoint61.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint61.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint61.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimJoint61;

HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimJoint60;

HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimJoint59;

HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimJoint58;

HAnimJoint HAnimJoint62 = createNode("HAnimJoint");
HAnimJoint62.name = "l_cuneonavicular_2";
HAnimJoint62.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint62.center = new SFVec3f(new float[0.0812,0.025,-0.0805]);
HAnimJoint62.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint62.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint62.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint62.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint63 = createNode("HAnimJoint");
HAnimJoint63.name = "l_tarsometatarsal_2";
HAnimJoint63.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint63.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
HAnimJoint63.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint63.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint63.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint63.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint64 = createNode("HAnimJoint");
HAnimJoint64.name = "l_metatarsophalangeal_2";
HAnimJoint64.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint64.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint64.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint64.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint65 = createNode("HAnimJoint");
HAnimJoint65.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint65.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint65.center = new SFVec3f(new float[0.0841,0.0041,0.0121]);
HAnimJoint65.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint65.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint65.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint65.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint66 = createNode("HAnimJoint");
HAnimJoint66.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint66.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint66.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint66.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint66.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint66.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint66.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimJoint66;

HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimJoint65;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimJoint64;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimJoint63;

HAnimJoint57.children[1] = HAnimJoint62;

HAnimJoint HAnimJoint67 = createNode("HAnimJoint");
HAnimJoint67.name = "l_cuneonavicular_3";
HAnimJoint67.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint67.center = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
HAnimJoint67.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint67.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint67.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint67.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint68 = createNode("HAnimJoint");
HAnimJoint68.name = "l_tarsometatarsal_3";
HAnimJoint68.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint68.center = new SFVec3f(new float[0.0944,0.0175,-0.0625]);
HAnimJoint68.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint68.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint68.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint68.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint69 = createNode("HAnimJoint");
HAnimJoint69.name = "l_metatarsophalangeal_3";
HAnimJoint69.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint69.center = new SFVec3f(new float[0.0963,0.0065,-0.0065]);
HAnimJoint69.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint69.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint69.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint69.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint70 = createNode("HAnimJoint");
HAnimJoint70.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint70.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint70.center = new SFVec3f(new float[0.0987,0.0034,0.0086]);
HAnimJoint70.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint70.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint70.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint70.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint71 = createNode("HAnimJoint");
HAnimJoint71.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint71.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint71.center = new SFVec3f(new float[0.1002,0.0013,0.0178]);
HAnimJoint71.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint71.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint71.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint71.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimJoint71;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimJoint70;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimJoint69;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimJoint68;

HAnimJoint57.children[2] = HAnimJoint67;

HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimJoint57;

HAnimJoint HAnimJoint72 = createNode("HAnimJoint");
HAnimJoint72.name = "l_calcaneocuboid";
HAnimJoint72.DEF = "hanim_l_calcaneocuboid";
HAnimJoint72.center = new SFVec3f(new float[0.0889,0.0494,-0.1278]);
HAnimJoint72.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint72.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint72.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint72.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint73 = createNode("HAnimJoint");
HAnimJoint73.name = "l_transversetarsal";
HAnimJoint73.DEF = "hanim_l_transversetarsal";
HAnimJoint73.center = new SFVec3f(new float[0.1105,0.0267,-0.0998]);
HAnimJoint73.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint73.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint73.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint74 = createNode("HAnimJoint");
HAnimJoint74.name = "l_tarsometatarsal_4";
HAnimJoint74.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint74.center = new SFVec3f(new float[0.1063,0.016,-0.0634]);
HAnimJoint74.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint74.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint74.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint74.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint75 = createNode("HAnimJoint");
HAnimJoint75.name = "l_metatarsophalangeal_4";
HAnimJoint75.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint75.center = new SFVec3f(new float[0.1097,0.0058,-0.0107]);
HAnimJoint75.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint75.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint75.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint75.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint76 = createNode("HAnimJoint");
HAnimJoint76.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint76.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint76.center = new SFVec3f(new float[0.114,0.0037,0.0044]);
HAnimJoint76.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint76.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint76.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint76.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint77 = createNode("HAnimJoint");
HAnimJoint77.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint77.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint77.center = new SFVec3f(new float[0.1155,0.0008,0.0118]);
HAnimJoint77.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint77.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint77.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint77.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimJoint77;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimJoint76;

HAnimJoint74.children = new MFNode();

HAnimJoint74.children[0] = HAnimJoint75;

HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimJoint74;

HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.name = "l_tarsometatarsal_5";
HAnimJoint78.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint78.center = new SFVec3f(new float[0.1206,0.0124,-0.0671]);
HAnimJoint78.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint78.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint79 = createNode("HAnimJoint");
HAnimJoint79.name = "l_metatarsophalangeal_5";
HAnimJoint79.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint79.center = new SFVec3f(new float[0.1239,0.0051,-0.0153]);
HAnimJoint79.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint79.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint79.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint79.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint80 = createNode("HAnimJoint");
HAnimJoint80.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint80.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint80.center = new SFVec3f(new float[0.1262,0.0023,-0.0077]);
HAnimJoint80.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint80.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint80.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint81 = createNode("HAnimJoint");
HAnimJoint81.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint81.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint81.center = new SFVec3f(new float[0.1271,0,0]);
HAnimJoint81.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint81.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint81.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint81.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimJoint81;

HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimJoint80;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimJoint79;

HAnimJoint73.children[1] = HAnimJoint78;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimJoint73;

HAnimJoint56.children[1] = HAnimJoint72;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimJoint56;

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimJoint55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimJoint54;

HAnimJoint HAnimJoint82 = createNode("HAnimJoint");
HAnimJoint82.name = "r_hip";
HAnimJoint82.DEF = "hanim_r_hip";
HAnimJoint82.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint82.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint82.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint83 = createNode("HAnimJoint");
HAnimJoint83.name = "r_knee";
HAnimJoint83.DEF = "hanim_r_knee";
HAnimJoint83.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint83.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint83.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint83.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint83.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint84 = createNode("HAnimJoint");
HAnimJoint84.name = "r_talocrural";
HAnimJoint84.DEF = "hanim_r_talocrural";
HAnimJoint84.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint84.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint84.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint84.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint84.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint85 = createNode("HAnimJoint");
HAnimJoint85.name = "r_talocalcaneonavicular";
HAnimJoint85.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint85.center = new SFVec3f(new float[-0.0781,0.0283,-0.097]);
HAnimJoint85.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint85.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint85.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint85.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint86 = createNode("HAnimJoint");
HAnimJoint86.name = "r_cuneonavicular_1";
HAnimJoint86.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint86.center = new SFVec3f(new float[-0.0672,0.0235,-0.0835]);
HAnimJoint86.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint86.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint86.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint86.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.name = "r_tarsometatarsal_1";
HAnimJoint87.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint87.center = new SFVec3f(new float[-0.0644,0.0147,-0.0577]);
HAnimJoint87.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint87.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint88 = createNode("HAnimJoint");
HAnimJoint88.name = "r_metatarsophalangeal_1";
HAnimJoint88.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint88.center = new SFVec3f(new float[-0.0619,0.0059,-0.0083]);
HAnimJoint88.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint88.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint88.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint88.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint89 = createNode("HAnimJoint");
HAnimJoint89.name = "r_tarsal_interphalangeal_1";
HAnimJoint89.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint89.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint89.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimJoint89;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimJoint88;

HAnimJoint86.children = new MFNode();

HAnimJoint86.children[0] = HAnimJoint87;

HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimJoint86;

HAnimJoint HAnimJoint90 = createNode("HAnimJoint");
HAnimJoint90.name = "r_cuneonavicular_2";
HAnimJoint90.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint90.center = new SFVec3f(new float[-0.0812,0.025,-0.0805]);
HAnimJoint90.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint90.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint90.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint91 = createNode("HAnimJoint");
HAnimJoint91.name = "r_tarsometatarsal_2";
HAnimJoint91.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint91.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
HAnimJoint91.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint91.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint91.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint91.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint92 = createNode("HAnimJoint");
HAnimJoint92.name = "r_metatarsophalangeal_2";
HAnimJoint92.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint92.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint92.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint92.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint92.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint92.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint93 = createNode("HAnimJoint");
HAnimJoint93.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint93.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint93.center = new SFVec3f(new float[-0.0841,0.0041,0.0121]);
HAnimJoint93.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint93.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint93.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint93.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint94 = createNode("HAnimJoint");
HAnimJoint94.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint94.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint94.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint94.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint94.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimJoint94;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimJoint93;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimJoint92;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimJoint91;

HAnimJoint85.children[1] = HAnimJoint90;

HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.name = "r_cuneonavicular_3";
HAnimJoint95.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint95.center = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
HAnimJoint95.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint95.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint95.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint95.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.name = "r_tarsometatarsal_3";
HAnimJoint96.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint96.center = new SFVec3f(new float[-0.0944,0.0175,-0.0625]);
HAnimJoint96.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint96.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.name = "r_metatarsophalangeal_3";
HAnimJoint97.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint97.center = new SFVec3f(new float[-0.0963,0.0065,-0.0065]);
HAnimJoint97.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint97.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint97.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint97.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint98 = createNode("HAnimJoint");
HAnimJoint98.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint98.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint98.center = new SFVec3f(new float[-0.0987,0.0034,0.0086]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint99 = createNode("HAnimJoint");
HAnimJoint99.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint99.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint99.center = new SFVec3f(new float[-0.1002,0.0013,0.0178]);
HAnimJoint99.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint99.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint99.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint99.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimJoint99;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimJoint98;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimJoint97;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimJoint96;

HAnimJoint85.children[2] = HAnimJoint95;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimJoint85;

HAnimJoint HAnimJoint100 = createNode("HAnimJoint");
HAnimJoint100.name = "r_calcaneocuboid";
HAnimJoint100.DEF = "hanim_r_calcaneocuboid";
HAnimJoint100.center = new SFVec3f(new float[-0.0889,0.0494,-0.1278]);
HAnimJoint100.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint100.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint101 = createNode("HAnimJoint");
HAnimJoint101.name = "r_transversetarsal";
HAnimJoint101.DEF = "hanim_r_transversetarsal";
HAnimJoint101.center = new SFVec3f(new float[-0.1105,0.0267,-0.0998]);
HAnimJoint101.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint101.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint101.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint102 = createNode("HAnimJoint");
HAnimJoint102.name = "r_tarsometatarsal_4";
HAnimJoint102.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint102.center = new SFVec3f(new float[-0.1063,0.016,-0.0634]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint102.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint102.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint103 = createNode("HAnimJoint");
HAnimJoint103.name = "r_metatarsophalangeal_4";
HAnimJoint103.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint103.center = new SFVec3f(new float[-0.1097,0.0058,-0.0107]);
HAnimJoint103.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint103.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint103.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint103.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint104.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint104.center = new SFVec3f(new float[-0.114,0.0037,0.0044]);
HAnimJoint104.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint104.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint104.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint105 = createNode("HAnimJoint");
HAnimJoint105.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint105.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint105.center = new SFVec3f(new float[-0.1155,0.0008,0.0118]);
HAnimJoint105.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint105.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimJoint105;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimJoint103;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimJoint102;

HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.name = "r_tarsometatarsal_5";
HAnimJoint106.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint106.center = new SFVec3f(new float[-0.1206,0.0124,-0.0671]);
HAnimJoint106.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint106.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint106.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint106.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint107 = createNode("HAnimJoint");
HAnimJoint107.name = "r_metatarsophalangeal_5";
HAnimJoint107.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint107.center = new SFVec3f(new float[-0.1239,0.0051,-0.0153]);
HAnimJoint107.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint107.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint107.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint107.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint108 = createNode("HAnimJoint");
HAnimJoint108.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint108.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint108.center = new SFVec3f(new float[-0.1262,0.0023,-0.0077]);
HAnimJoint108.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint108.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint108.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint109.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint109.center = new SFVec3f(new float[-0.1271,0,0]);
HAnimJoint109.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint109.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimJoint109;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimJoint107;

HAnimJoint101.children[1] = HAnimJoint106;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimJoint101;

HAnimJoint84.children[1] = HAnimJoint100;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimJoint84;

HAnimJoint82.children = new MFNode();

HAnimJoint82.children[0] = HAnimJoint83;

HAnimJoint53.children[1] = HAnimJoint82;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimJoint53;

HAnimJoint HAnimJoint110 = createNode("HAnimJoint");
HAnimJoint110.name = "vl5";
HAnimJoint110.DEF = "hanim_vl5";
HAnimJoint110.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint110.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint110.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint110.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint111 = createNode("HAnimJoint");
HAnimJoint111.name = "vl4";
HAnimJoint111.DEF = "hanim_vl4";
HAnimJoint111.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint111.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint111.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint111.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint111.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint112 = createNode("HAnimJoint");
HAnimJoint112.name = "vl3";
HAnimJoint112.DEF = "hanim_vl3";
HAnimJoint112.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint112.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint112.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint112.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint112.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.name = "vl2";
HAnimJoint113.DEF = "hanim_vl2";
HAnimJoint113.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint113.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint113.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint113.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint114 = createNode("HAnimJoint");
HAnimJoint114.name = "vl1";
HAnimJoint114.DEF = "hanim_vl1";
HAnimJoint114.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint114.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint114.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint114.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint115 = createNode("HAnimJoint");
HAnimJoint115.name = "vt12";
HAnimJoint115.DEF = "hanim_vt12";
HAnimJoint115.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint115.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint115.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint115.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint115.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint116 = createNode("HAnimJoint");
HAnimJoint116.name = "vt11";
HAnimJoint116.DEF = "hanim_vt11";
HAnimJoint116.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint116.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint116.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint116.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint117 = createNode("HAnimJoint");
HAnimJoint117.name = "vt10";
HAnimJoint117.DEF = "hanim_vt10";
HAnimJoint117.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint117.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint117.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint117.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint117.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint118 = createNode("HAnimJoint");
HAnimJoint118.name = "vt9";
HAnimJoint118.DEF = "hanim_vt9";
HAnimJoint118.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint118.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint118.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint118.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint119 = createNode("HAnimJoint");
HAnimJoint119.name = "vt8";
HAnimJoint119.DEF = "hanim_vt8";
HAnimJoint119.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint119.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint119.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint119.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint119.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.name = "vt7";
HAnimJoint120.DEF = "hanim_vt7";
HAnimJoint120.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint120.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint120.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint120.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint121 = createNode("HAnimJoint");
HAnimJoint121.name = "vt6";
HAnimJoint121.DEF = "hanim_vt6";
HAnimJoint121.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint121.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint121.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint121.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint121.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint122 = createNode("HAnimJoint");
HAnimJoint122.name = "vt5";
HAnimJoint122.DEF = "hanim_vt5";
HAnimJoint122.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint122.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint122.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint122.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint122.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint123 = createNode("HAnimJoint");
HAnimJoint123.name = "vt4";
HAnimJoint123.DEF = "hanim_vt4";
HAnimJoint123.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint123.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint123.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint123.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint123.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint124 = createNode("HAnimJoint");
HAnimJoint124.name = "vt3";
HAnimJoint124.DEF = "hanim_vt3";
HAnimJoint124.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint124.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint124.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint124.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint124.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint125 = createNode("HAnimJoint");
HAnimJoint125.name = "vt2";
HAnimJoint125.DEF = "hanim_vt2";
HAnimJoint125.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint125.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint125.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint125.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint125.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.name = "vt1";
HAnimJoint126.DEF = "hanim_vt1";
HAnimJoint126.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint126.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint126.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint126.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint126.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.name = "vc7";
HAnimJoint127.DEF = "hanim_vc7";
HAnimJoint127.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint127.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint127.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint127.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint128 = createNode("HAnimJoint");
HAnimJoint128.name = "vc6";
HAnimJoint128.DEF = "hanim_vc6";
HAnimJoint128.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint128.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint128.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint128.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint128.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint129 = createNode("HAnimJoint");
HAnimJoint129.name = "vc5";
HAnimJoint129.DEF = "hanim_vc5";
HAnimJoint129.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint129.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint129.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint129.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint129.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint130 = createNode("HAnimJoint");
HAnimJoint130.name = "vc4";
HAnimJoint130.DEF = "hanim_vc4";
HAnimJoint130.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint130.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint130.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint130.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint130.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint131 = createNode("HAnimJoint");
HAnimJoint131.name = "vc3";
HAnimJoint131.DEF = "hanim_vc3";
HAnimJoint131.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint131.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint131.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint131.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint131.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.name = "vc2";
HAnimJoint132.DEF = "hanim_vc2";
HAnimJoint132.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint132.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint132.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint132.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint133 = createNode("HAnimJoint");
HAnimJoint133.name = "vc1";
HAnimJoint133.DEF = "hanim_vc1";
HAnimJoint133.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint133.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint133.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint133.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint133.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.name = "skullbase";
HAnimJoint134.DEF = "hanim_skullbase";
HAnimJoint134.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint134.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint134.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint134.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.name = "l_eyelid_joint";
HAnimJoint135.DEF = "hanim_l_eyelid_joint";
HAnimJoint135.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint135.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint135.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint135.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimJoint135;

HAnimJoint HAnimJoint136 = createNode("HAnimJoint");
HAnimJoint136.name = "r_eyelid_joint";
HAnimJoint136.DEF = "hanim_r_eyelid_joint";
HAnimJoint136.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint136.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint136.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint136.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint136.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.children[1] = HAnimJoint136;

HAnimJoint HAnimJoint137 = createNode("HAnimJoint");
HAnimJoint137.name = "l_eyeball_joint";
HAnimJoint137.DEF = "hanim_l_eyeball_joint";
HAnimJoint137.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint137.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint137.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint137.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint137.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.children[2] = HAnimJoint137;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.name = "r_eyeball_joint";
HAnimJoint138.DEF = "hanim_r_eyeball_joint";
HAnimJoint138.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint138.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint138.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint138.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint138.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.children[3] = HAnimJoint138;

HAnimJoint HAnimJoint139 = createNode("HAnimJoint");
HAnimJoint139.name = "l_eyebrow_joint";
HAnimJoint139.DEF = "hanim_l_eyebrow_joint";
HAnimJoint139.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint139.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint139.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint139.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint139.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.children[4] = HAnimJoint139;

HAnimJoint HAnimJoint140 = createNode("HAnimJoint");
HAnimJoint140.name = "r_eyebrow_joint";
HAnimJoint140.DEF = "hanim_r_eyebrow_joint";
HAnimJoint140.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint140.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint140.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint140.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint140.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.children[5] = HAnimJoint140;

HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.name = "temporomandibular";
HAnimJoint141.DEF = "hanim_temporomandibular";
HAnimJoint141.center = new SFVec3f(new float[-0.0002,1.3043,-0.0865]);
HAnimJoint141.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint141.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.children[6] = HAnimJoint141;

HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimJoint134;

HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimJoint133;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimJoint132;

HAnimJoint130.children = new MFNode();

HAnimJoint130.children[0] = HAnimJoint131;

HAnimJoint129.children = new MFNode();

HAnimJoint129.children[0] = HAnimJoint130;

HAnimJoint128.children = new MFNode();

HAnimJoint128.children[0] = HAnimJoint129;

HAnimJoint127.children = new MFNode();

HAnimJoint127.children[0] = HAnimJoint128;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimJoint127;

HAnimJoint HAnimJoint142 = createNode("HAnimJoint");
HAnimJoint142.name = "l_sternoclavicular";
HAnimJoint142.DEF = "hanim_l_sternoclavicular";
HAnimJoint142.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint142.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint142.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint142.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint142.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint143 = createNode("HAnimJoint");
HAnimJoint143.name = "l_acromioclavicular";
HAnimJoint143.DEF = "hanim_l_acromioclavicular";
HAnimJoint143.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint143.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint143.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint143.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.name = "l_shoulder";
HAnimJoint144.DEF = "hanim_l_shoulder";
HAnimJoint144.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint144.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint144.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint144.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint144.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint145 = createNode("HAnimJoint");
HAnimJoint145.name = "l_elbow";
HAnimJoint145.DEF = "hanim_l_elbow";
HAnimJoint145.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint145.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint145.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint145.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint145.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint146 = createNode("HAnimJoint");
HAnimJoint146.name = "l_radiocarpal";
HAnimJoint146.DEF = "hanim_l_radiocarpal";
HAnimJoint146.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint146.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint146.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint146.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint146.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.name = "l_midcarpal_1";
HAnimJoint147.DEF = "hanim_l_midcarpal_1";
HAnimJoint147.center = new SFVec3f(new float[0.1811,0.6975,-0.0826]);
HAnimJoint147.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint147.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint147.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint147.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint148 = createNode("HAnimJoint");
HAnimJoint148.name = "l_carpometacarpal_1";
HAnimJoint148.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint148.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint148.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint148.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint148.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint149 = createNode("HAnimJoint");
HAnimJoint149.name = "l_metacarpophalangeal_1";
HAnimJoint149.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint149.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint149.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint149.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint149.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint149.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.name = "l_carpal_interphalangeal_1";
HAnimJoint150.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint150.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint150.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint150.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint150.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint150.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint149.children = new MFNode();

HAnimJoint149.children[0] = HAnimJoint150;

HAnimJoint148.children = new MFNode();

HAnimJoint148.children[0] = HAnimJoint149;

HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimJoint148;

HAnimJoint146.children = new MFNode();

HAnimJoint146.children[0] = HAnimJoint147;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.name = "l_midcarpal_2";
HAnimJoint151.DEF = "hanim_l_midcarpal_2";
HAnimJoint151.center = new SFVec3f(new float[0.1811,0.6984,-0.0935]);
HAnimJoint151.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint151.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint151.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint151.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.name = "l_carpometacarpal_2";
HAnimJoint152.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint152.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint152.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint152.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint152.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint152.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.name = "l_metacarpophalangeal_2";
HAnimJoint153.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint153.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint153.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint153.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint153.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint153.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint154.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint154.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint154.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint154.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint155 = createNode("HAnimJoint");
HAnimJoint155.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint155.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint155.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint155.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint155.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint155.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint155.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimJoint155;

HAnimJoint153.children = new MFNode();

HAnimJoint153.children[0] = HAnimJoint154;

HAnimJoint152.children = new MFNode();

HAnimJoint152.children[0] = HAnimJoint153;

HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimJoint152;

HAnimJoint146.children[1] = HAnimJoint151;

HAnimJoint HAnimJoint156 = createNode("HAnimJoint");
HAnimJoint156.name = "l_midcarpal_3";
HAnimJoint156.DEF = "hanim_l_midcarpal_3";
HAnimJoint156.center = new SFVec3f(new float[0.1809,0.7,-0.1067]);
HAnimJoint156.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint156.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint156.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint156.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint157 = createNode("HAnimJoint");
HAnimJoint157.name = "l_carpometacarpal_3";
HAnimJoint157.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint157.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint157.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint157.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint157.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint158 = createNode("HAnimJoint");
HAnimJoint158.name = "l_metacarpophalangeal_3";
HAnimJoint158.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint158.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint158.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint158.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint158.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint158.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint159.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint159.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint159.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint159.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint159.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint159.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint160.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint160.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint160.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint160.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint160.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint160.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimJoint160;

HAnimJoint158.children = new MFNode();

HAnimJoint158.children[0] = HAnimJoint159;

HAnimJoint157.children = new MFNode();

HAnimJoint157.children[0] = HAnimJoint158;

HAnimJoint156.children = new MFNode();

HAnimJoint156.children[0] = HAnimJoint157;

HAnimJoint146.children[2] = HAnimJoint156;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.name = "l_midcarpal_4_5";
HAnimJoint161.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint161.center = new SFVec3f(new float[0.1809,0.6973,-0.1276]);
HAnimJoint161.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint161.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint161.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint161.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint162 = createNode("HAnimJoint");
HAnimJoint162.name = "l_carpometacarpal_4";
HAnimJoint162.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint162.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint162.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint162.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint162.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint162.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.name = "l_metacarpophalangeal_4";
HAnimJoint163.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint163.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint163.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint163.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint163.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint164 = createNode("HAnimJoint");
HAnimJoint164.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint164.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint164.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint164.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint164.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint164.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint164.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint165.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint165.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint165.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint165.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint165.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint165.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint164.children = new MFNode();

HAnimJoint164.children[0] = HAnimJoint165;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimJoint164;

HAnimJoint162.children = new MFNode();

HAnimJoint162.children[0] = HAnimJoint163;

HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimJoint162;

HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.name = "l_carpometacarpal_5";
HAnimJoint166.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint166.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint166.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint166.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint166.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint166.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.name = "l_metacarpophalangeal_5";
HAnimJoint167.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint167.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint167.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint167.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint167.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint167.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint168 = createNode("HAnimJoint");
HAnimJoint168.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint168.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint168.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint168.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint168.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint168.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint168.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint169 = createNode("HAnimJoint");
HAnimJoint169.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint169.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint169.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint169.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint169.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint169.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint169.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint168.children = new MFNode();

HAnimJoint168.children[0] = HAnimJoint169;

HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimJoint168;

HAnimJoint166.children = new MFNode();

HAnimJoint166.children[0] = HAnimJoint167;

HAnimJoint161.children[1] = HAnimJoint166;

HAnimJoint146.children[3] = HAnimJoint161;

HAnimJoint145.children = new MFNode();

HAnimJoint145.children[0] = HAnimJoint146;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimJoint145;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimJoint144;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimJoint143;

HAnimJoint126.children[1] = HAnimJoint142;

HAnimJoint HAnimJoint170 = createNode("HAnimJoint");
HAnimJoint170.name = "r_sternoclavicular";
HAnimJoint170.DEF = "hanim_r_sternoclavicular";
HAnimJoint170.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint170.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint170.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint170.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint170.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint171 = createNode("HAnimJoint");
HAnimJoint171.name = "r_acromioclavicular";
HAnimJoint171.DEF = "hanim_r_acromioclavicular";
HAnimJoint171.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint171.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint171.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint171.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint171.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.name = "r_shoulder";
HAnimJoint172.DEF = "hanim_r_shoulder";
HAnimJoint172.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint172.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint172.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint173 = createNode("HAnimJoint");
HAnimJoint173.name = "r_elbow";
HAnimJoint173.DEF = "hanim_r_elbow";
HAnimJoint173.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint173.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint173.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint173.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint173.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.name = "r_radiocarpal";
HAnimJoint174.DEF = "hanim_r_radiocarpal";
HAnimJoint174.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint174.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint174.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint174.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint174.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.name = "r_midcarpal_1";
HAnimJoint175.DEF = "hanim_r_midcarpal_1";
HAnimJoint175.center = new SFVec3f(new float[-0.1811,0.6975,-0.0826]);
HAnimJoint175.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint175.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint175.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint175.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.name = "r_carpometacarpal_1";
HAnimJoint176.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint176.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint176.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint176.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint176.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint176.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint177 = createNode("HAnimJoint");
HAnimJoint177.name = "r_metacarpophalangeal_1";
HAnimJoint177.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint177.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint177.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint177.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint177.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint177.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.name = "r_carpal_interphalangeal_1";
HAnimJoint178.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint178.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint178.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint178.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint178.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint178.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint177.children = new MFNode();

HAnimJoint177.children[0] = HAnimJoint178;

HAnimJoint176.children = new MFNode();

HAnimJoint176.children[0] = HAnimJoint177;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimJoint176;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimJoint175;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.name = "r_midcarpal_2";
HAnimJoint179.DEF = "hanim_r_midcarpal_2";
HAnimJoint179.center = new SFVec3f(new float[-0.1811,0.6984,-0.0935]);
HAnimJoint179.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint179.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint179.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint179.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.name = "r_carpometacarpal_2";
HAnimJoint180.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint180.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint180.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint180.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint180.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.name = "r_metacarpophalangeal_2";
HAnimJoint181.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint181.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint181.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint181.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint182.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint182.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint182.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint182.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint182.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint182.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint183.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint183.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint183.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint183.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint183.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint183.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint182.children = new MFNode();

HAnimJoint182.children[0] = HAnimJoint183;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimJoint182;

HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimJoint181;

HAnimJoint179.children = new MFNode();

HAnimJoint179.children[0] = HAnimJoint180;

HAnimJoint174.children[1] = HAnimJoint179;

HAnimJoint HAnimJoint184 = createNode("HAnimJoint");
HAnimJoint184.name = "r_midcarpal_3";
HAnimJoint184.DEF = "hanim_r_midcarpal_3";
HAnimJoint184.center = new SFVec3f(new float[-0.1809,0.7,-0.1067]);
HAnimJoint184.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint184.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint184.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint184.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint185 = createNode("HAnimJoint");
HAnimJoint185.name = "r_carpometacarpal_3";
HAnimJoint185.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint185.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint185.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint185.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint185.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint185.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint186 = createNode("HAnimJoint");
HAnimJoint186.name = "r_metacarpophalangeal_3";
HAnimJoint186.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint186.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint186.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint186.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint186.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint186.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint187.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint187.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint187.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint187.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint187.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint187.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint188.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint188.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint188.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint188.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint188.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint188.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint187.children = new MFNode();

HAnimJoint187.children[0] = HAnimJoint188;

HAnimJoint186.children = new MFNode();

HAnimJoint186.children[0] = HAnimJoint187;

HAnimJoint185.children = new MFNode();

HAnimJoint185.children[0] = HAnimJoint186;

HAnimJoint184.children = new MFNode();

HAnimJoint184.children[0] = HAnimJoint185;

HAnimJoint174.children[2] = HAnimJoint184;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.name = "r_midcarpal_4_5";
HAnimJoint189.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint189.center = new SFVec3f(new float[-0.1809,0.6973,-0.1276]);
HAnimJoint189.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint189.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint189.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint189.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint190 = createNode("HAnimJoint");
HAnimJoint190.name = "r_carpometacarpal_4";
HAnimJoint190.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint190.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint190.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint190.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint190.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint190.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint191 = createNode("HAnimJoint");
HAnimJoint191.name = "r_metacarpophalangeal_4";
HAnimJoint191.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint191.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint191.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint191.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint191.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint191.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint192 = createNode("HAnimJoint");
HAnimJoint192.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint192.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint192.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint192.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint192.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint192.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint192.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint193 = createNode("HAnimJoint");
HAnimJoint193.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint193.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint193.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint193.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint193.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint193.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint193.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint192.children = new MFNode();

HAnimJoint192.children[0] = HAnimJoint193;

HAnimJoint191.children = new MFNode();

HAnimJoint191.children[0] = HAnimJoint192;

HAnimJoint190.children = new MFNode();

HAnimJoint190.children[0] = HAnimJoint191;

HAnimJoint189.children = new MFNode();

HAnimJoint189.children[0] = HAnimJoint190;

HAnimJoint HAnimJoint194 = createNode("HAnimJoint");
HAnimJoint194.name = "r_carpometacarpal_5";
HAnimJoint194.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint194.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint194.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint194.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint194.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint194.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.name = "r_metacarpophalangeal_5";
HAnimJoint195.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint195.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint195.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint195.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint195.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint195.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint196.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint196.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint196.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint196.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint196.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint196.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint197.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint197.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint197.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint197.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint197.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint197.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimJoint197;

HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimJoint196;

HAnimJoint194.children = new MFNode();

HAnimJoint194.children[0] = HAnimJoint195;

HAnimJoint189.children[1] = HAnimJoint194;

HAnimJoint174.children[3] = HAnimJoint189;

HAnimJoint173.children = new MFNode();

HAnimJoint173.children[0] = HAnimJoint174;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimJoint173;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimJoint172;

HAnimJoint170.children = new MFNode();

HAnimJoint170.children[0] = HAnimJoint171;

HAnimJoint126.children[2] = HAnimJoint170;

HAnimJoint125.children = new MFNode();

HAnimJoint125.children[0] = HAnimJoint126;

HAnimJoint124.children = new MFNode();

HAnimJoint124.children[0] = HAnimJoint125;

HAnimJoint123.children = new MFNode();

HAnimJoint123.children[0] = HAnimJoint124;

HAnimJoint122.children = new MFNode();

HAnimJoint122.children[0] = HAnimJoint123;

HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimJoint122;

HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimJoint121;

HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimJoint120;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimJoint119;

HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimJoint118;

HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimJoint117;

HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimJoint116;

HAnimJoint114.children = new MFNode();

HAnimJoint114.children[0] = HAnimJoint115;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimJoint114;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimJoint113;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimJoint112;

HAnimJoint110.children = new MFNode();

HAnimJoint110.children[0] = HAnimJoint111;

HAnimJoint52.children[1] = HAnimJoint110;

HAnimHumanoid43.joints[1] = HAnimJoint52;

HAnimJoint HAnimJoint198 = createNode("HAnimJoint");
HAnimJoint198.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint198;

HAnimJoint HAnimJoint199 = createNode("HAnimJoint");
HAnimJoint199.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint199;

HAnimJoint HAnimJoint200 = createNode("HAnimJoint");
HAnimJoint200.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint200;

HAnimJoint HAnimJoint201 = createNode("HAnimJoint");
HAnimJoint201.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint201;

HAnimJoint HAnimJoint202 = createNode("HAnimJoint");
HAnimJoint202.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint202;

HAnimJoint HAnimJoint203 = createNode("HAnimJoint");
HAnimJoint203.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid43.joints[7] = HAnimJoint203;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid43.joints[8] = HAnimJoint204;

HAnimJoint HAnimJoint205 = createNode("HAnimJoint");
HAnimJoint205.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid43.joints[9] = HAnimJoint205;

HAnimJoint HAnimJoint206 = createNode("HAnimJoint");
HAnimJoint206.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid43.joints[10] = HAnimJoint206;

HAnimJoint HAnimJoint207 = createNode("HAnimJoint");
HAnimJoint207.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[11] = HAnimJoint207;

HAnimJoint HAnimJoint208 = createNode("HAnimJoint");
HAnimJoint208.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid43.joints[12] = HAnimJoint208;

HAnimJoint HAnimJoint209 = createNode("HAnimJoint");
HAnimJoint209.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint209;

HAnimJoint HAnimJoint210 = createNode("HAnimJoint");
HAnimJoint210.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint210;

HAnimJoint HAnimJoint211 = createNode("HAnimJoint");
HAnimJoint211.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint211;

HAnimJoint HAnimJoint212 = createNode("HAnimJoint");
HAnimJoint212.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[16] = HAnimJoint212;

HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid43.joints[17] = HAnimJoint213;

HAnimJoint HAnimJoint214 = createNode("HAnimJoint");
HAnimJoint214.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid43.joints[18] = HAnimJoint214;

HAnimJoint HAnimJoint215 = createNode("HAnimJoint");
HAnimJoint215.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid43.joints[19] = HAnimJoint215;

HAnimJoint HAnimJoint216 = createNode("HAnimJoint");
HAnimJoint216.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[20] = HAnimJoint216;

HAnimJoint HAnimJoint217 = createNode("HAnimJoint");
HAnimJoint217.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[21] = HAnimJoint217;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid43.joints[22] = HAnimJoint218;

HAnimJoint HAnimJoint219 = createNode("HAnimJoint");
HAnimJoint219.USE = "hanim_l_transversetarsal";
HAnimHumanoid43.joints[23] = HAnimJoint219;

HAnimJoint HAnimJoint220 = createNode("HAnimJoint");
HAnimJoint220.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid43.joints[24] = HAnimJoint220;

HAnimJoint HAnimJoint221 = createNode("HAnimJoint");
HAnimJoint221.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid43.joints[25] = HAnimJoint221;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[26] = HAnimJoint222;

HAnimJoint HAnimJoint223 = createNode("HAnimJoint");
HAnimJoint223.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[27] = HAnimJoint223;

HAnimJoint HAnimJoint224 = createNode("HAnimJoint");
HAnimJoint224.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid43.joints[28] = HAnimJoint224;

HAnimJoint HAnimJoint225 = createNode("HAnimJoint");
HAnimJoint225.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid43.joints[29] = HAnimJoint225;

HAnimJoint HAnimJoint226 = createNode("HAnimJoint");
HAnimJoint226.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[30] = HAnimJoint226;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[31] = HAnimJoint227;

HAnimJoint HAnimJoint228 = createNode("HAnimJoint");
HAnimJoint228.USE = "hanim_r_hip";
HAnimHumanoid43.joints[32] = HAnimJoint228;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.USE = "hanim_r_knee";
HAnimHumanoid43.joints[33] = HAnimJoint229;

HAnimJoint HAnimJoint230 = createNode("HAnimJoint");
HAnimJoint230.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[34] = HAnimJoint230;

HAnimJoint HAnimJoint231 = createNode("HAnimJoint");
HAnimJoint231.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid43.joints[35] = HAnimJoint231;

HAnimJoint HAnimJoint232 = createNode("HAnimJoint");
HAnimJoint232.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid43.joints[36] = HAnimJoint232;

HAnimJoint HAnimJoint233 = createNode("HAnimJoint");
HAnimJoint233.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid43.joints[37] = HAnimJoint233;

HAnimJoint HAnimJoint234 = createNode("HAnimJoint");
HAnimJoint234.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid43.joints[38] = HAnimJoint234;

HAnimJoint HAnimJoint235 = createNode("HAnimJoint");
HAnimJoint235.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[39] = HAnimJoint235;

HAnimJoint HAnimJoint236 = createNode("HAnimJoint");
HAnimJoint236.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid43.joints[40] = HAnimJoint236;

HAnimJoint HAnimJoint237 = createNode("HAnimJoint");
HAnimJoint237.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[41] = HAnimJoint237;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[42] = HAnimJoint238;

HAnimJoint HAnimJoint239 = createNode("HAnimJoint");
HAnimJoint239.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[43] = HAnimJoint239;

HAnimJoint HAnimJoint240 = createNode("HAnimJoint");
HAnimJoint240.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[44] = HAnimJoint240;

HAnimJoint HAnimJoint241 = createNode("HAnimJoint");
HAnimJoint241.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid43.joints[45] = HAnimJoint241;

HAnimJoint HAnimJoint242 = createNode("HAnimJoint");
HAnimJoint242.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid43.joints[46] = HAnimJoint242;

HAnimJoint HAnimJoint243 = createNode("HAnimJoint");
HAnimJoint243.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid43.joints[47] = HAnimJoint243;

HAnimJoint HAnimJoint244 = createNode("HAnimJoint");
HAnimJoint244.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[48] = HAnimJoint244;

HAnimJoint HAnimJoint245 = createNode("HAnimJoint");
HAnimJoint245.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[49] = HAnimJoint245;

HAnimJoint HAnimJoint246 = createNode("HAnimJoint");
HAnimJoint246.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid43.joints[50] = HAnimJoint246;

HAnimJoint HAnimJoint247 = createNode("HAnimJoint");
HAnimJoint247.USE = "hanim_r_transversetarsal";
HAnimHumanoid43.joints[51] = HAnimJoint247;

HAnimJoint HAnimJoint248 = createNode("HAnimJoint");
HAnimJoint248.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid43.joints[52] = HAnimJoint248;

HAnimJoint HAnimJoint249 = createNode("HAnimJoint");
HAnimJoint249.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid43.joints[53] = HAnimJoint249;

HAnimJoint HAnimJoint250 = createNode("HAnimJoint");
HAnimJoint250.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint250;

HAnimJoint HAnimJoint251 = createNode("HAnimJoint");
HAnimJoint251.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[55] = HAnimJoint251;

HAnimJoint HAnimJoint252 = createNode("HAnimJoint");
HAnimJoint252.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid43.joints[56] = HAnimJoint252;

HAnimJoint HAnimJoint253 = createNode("HAnimJoint");
HAnimJoint253.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid43.joints[57] = HAnimJoint253;

HAnimJoint HAnimJoint254 = createNode("HAnimJoint");
HAnimJoint254.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[58] = HAnimJoint254;

HAnimJoint HAnimJoint255 = createNode("HAnimJoint");
HAnimJoint255.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[59] = HAnimJoint255;

HAnimJoint HAnimJoint256 = createNode("HAnimJoint");
HAnimJoint256.USE = "hanim_vl5";
HAnimHumanoid43.joints[60] = HAnimJoint256;

HAnimJoint HAnimJoint257 = createNode("HAnimJoint");
HAnimJoint257.USE = "hanim_vl4";
HAnimHumanoid43.joints[61] = HAnimJoint257;

HAnimJoint HAnimJoint258 = createNode("HAnimJoint");
HAnimJoint258.USE = "hanim_vl3";
HAnimHumanoid43.joints[62] = HAnimJoint258;

HAnimJoint HAnimJoint259 = createNode("HAnimJoint");
HAnimJoint259.USE = "hanim_vl2";
HAnimHumanoid43.joints[63] = HAnimJoint259;

HAnimJoint HAnimJoint260 = createNode("HAnimJoint");
HAnimJoint260.USE = "hanim_vl1";
HAnimHumanoid43.joints[64] = HAnimJoint260;

HAnimJoint HAnimJoint261 = createNode("HAnimJoint");
HAnimJoint261.USE = "hanim_vt12";
HAnimHumanoid43.joints[65] = HAnimJoint261;

HAnimJoint HAnimJoint262 = createNode("HAnimJoint");
HAnimJoint262.USE = "hanim_vt11";
HAnimHumanoid43.joints[66] = HAnimJoint262;

HAnimJoint HAnimJoint263 = createNode("HAnimJoint");
HAnimJoint263.USE = "hanim_vt10";
HAnimHumanoid43.joints[67] = HAnimJoint263;

HAnimJoint HAnimJoint264 = createNode("HAnimJoint");
HAnimJoint264.USE = "hanim_vt9";
HAnimHumanoid43.joints[68] = HAnimJoint264;

HAnimJoint HAnimJoint265 = createNode("HAnimJoint");
HAnimJoint265.USE = "hanim_vt8";
HAnimHumanoid43.joints[69] = HAnimJoint265;

HAnimJoint HAnimJoint266 = createNode("HAnimJoint");
HAnimJoint266.USE = "hanim_vt7";
HAnimHumanoid43.joints[70] = HAnimJoint266;

HAnimJoint HAnimJoint267 = createNode("HAnimJoint");
HAnimJoint267.USE = "hanim_vt6";
HAnimHumanoid43.joints[71] = HAnimJoint267;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.USE = "hanim_vt5";
HAnimHumanoid43.joints[72] = HAnimJoint268;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.USE = "hanim_vt4";
HAnimHumanoid43.joints[73] = HAnimJoint269;

HAnimJoint HAnimJoint270 = createNode("HAnimJoint");
HAnimJoint270.USE = "hanim_vt3";
HAnimHumanoid43.joints[74] = HAnimJoint270;

HAnimJoint HAnimJoint271 = createNode("HAnimJoint");
HAnimJoint271.USE = "hanim_vt2";
HAnimHumanoid43.joints[75] = HAnimJoint271;

HAnimJoint HAnimJoint272 = createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_vt1";
HAnimHumanoid43.joints[76] = HAnimJoint272;

HAnimJoint HAnimJoint273 = createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_vc7";
HAnimHumanoid43.joints[77] = HAnimJoint273;

HAnimJoint HAnimJoint274 = createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_vc6";
HAnimHumanoid43.joints[78] = HAnimJoint274;

HAnimJoint HAnimJoint275 = createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_vc5";
HAnimHumanoid43.joints[79] = HAnimJoint275;

HAnimJoint HAnimJoint276 = createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_vc4";
HAnimHumanoid43.joints[80] = HAnimJoint276;

HAnimJoint HAnimJoint277 = createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_vc3";
HAnimHumanoid43.joints[81] = HAnimJoint277;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_vc2";
HAnimHumanoid43.joints[82] = HAnimJoint278;

HAnimJoint HAnimJoint279 = createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_vc1";
HAnimHumanoid43.joints[83] = HAnimJoint279;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_skullbase";
HAnimHumanoid43.joints[84] = HAnimJoint280;

HAnimJoint HAnimJoint281 = createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[85] = HAnimJoint281;

HAnimJoint HAnimJoint282 = createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[86] = HAnimJoint282;

HAnimJoint HAnimJoint283 = createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[87] = HAnimJoint283;

HAnimJoint HAnimJoint284 = createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[88] = HAnimJoint284;

HAnimJoint HAnimJoint285 = createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[89] = HAnimJoint285;

HAnimJoint HAnimJoint286 = createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[90] = HAnimJoint286;

HAnimJoint HAnimJoint287 = createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[91] = HAnimJoint287;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[92] = HAnimJoint288;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[93] = HAnimJoint289;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[94] = HAnimJoint290;

HAnimJoint HAnimJoint291 = createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[95] = HAnimJoint291;

HAnimJoint HAnimJoint292 = createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[96] = HAnimJoint292;

HAnimJoint HAnimJoint293 = createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_l_midcarpal_1";
HAnimHumanoid43.joints[97] = HAnimJoint293;

HAnimJoint HAnimJoint294 = createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[98] = HAnimJoint294;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[99] = HAnimJoint295;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[100] = HAnimJoint296;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_l_midcarpal_2";
HAnimHumanoid43.joints[101] = HAnimJoint297;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[102] = HAnimJoint298;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[103] = HAnimJoint299;

HAnimJoint HAnimJoint300 = createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[104] = HAnimJoint300;

HAnimJoint HAnimJoint301 = createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[105] = HAnimJoint301;

HAnimJoint HAnimJoint302 = createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_l_midcarpal_3";
HAnimHumanoid43.joints[106] = HAnimJoint302;

HAnimJoint HAnimJoint303 = createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[107] = HAnimJoint303;

HAnimJoint HAnimJoint304 = createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[108] = HAnimJoint304;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[109] = HAnimJoint305;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[110] = HAnimJoint306;

HAnimJoint HAnimJoint307 = createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid43.joints[111] = HAnimJoint307;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[112] = HAnimJoint308;

HAnimJoint HAnimJoint309 = createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[113] = HAnimJoint309;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[114] = HAnimJoint310;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[115] = HAnimJoint311;

HAnimJoint HAnimJoint312 = createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[116] = HAnimJoint312;

HAnimJoint HAnimJoint313 = createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[117] = HAnimJoint313;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[118] = HAnimJoint314;

HAnimJoint HAnimJoint315 = createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[119] = HAnimJoint315;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[120] = HAnimJoint316;

HAnimJoint HAnimJoint317 = createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[121] = HAnimJoint317;

HAnimJoint HAnimJoint318 = createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[122] = HAnimJoint318;

HAnimJoint HAnimJoint319 = createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[123] = HAnimJoint319;

HAnimJoint HAnimJoint320 = createNode("HAnimJoint");
HAnimJoint320.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[124] = HAnimJoint320;

HAnimJoint HAnimJoint321 = createNode("HAnimJoint");
HAnimJoint321.USE = "hanim_r_midcarpal_1";
HAnimHumanoid43.joints[125] = HAnimJoint321;

HAnimJoint HAnimJoint322 = createNode("HAnimJoint");
HAnimJoint322.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[126] = HAnimJoint322;

HAnimJoint HAnimJoint323 = createNode("HAnimJoint");
HAnimJoint323.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[127] = HAnimJoint323;

HAnimJoint HAnimJoint324 = createNode("HAnimJoint");
HAnimJoint324.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[128] = HAnimJoint324;

HAnimJoint HAnimJoint325 = createNode("HAnimJoint");
HAnimJoint325.USE = "hanim_r_midcarpal_2";
HAnimHumanoid43.joints[129] = HAnimJoint325;

HAnimJoint HAnimJoint326 = createNode("HAnimJoint");
HAnimJoint326.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[130] = HAnimJoint326;

HAnimJoint HAnimJoint327 = createNode("HAnimJoint");
HAnimJoint327.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[131] = HAnimJoint327;

HAnimJoint HAnimJoint328 = createNode("HAnimJoint");
HAnimJoint328.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[132] = HAnimJoint328;

HAnimJoint HAnimJoint329 = createNode("HAnimJoint");
HAnimJoint329.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[133] = HAnimJoint329;

HAnimJoint HAnimJoint330 = createNode("HAnimJoint");
HAnimJoint330.USE = "hanim_r_midcarpal_3";
HAnimHumanoid43.joints[134] = HAnimJoint330;

HAnimJoint HAnimJoint331 = createNode("HAnimJoint");
HAnimJoint331.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[135] = HAnimJoint331;

HAnimJoint HAnimJoint332 = createNode("HAnimJoint");
HAnimJoint332.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[136] = HAnimJoint332;

HAnimJoint HAnimJoint333 = createNode("HAnimJoint");
HAnimJoint333.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[137] = HAnimJoint333;

HAnimJoint HAnimJoint334 = createNode("HAnimJoint");
HAnimJoint334.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[138] = HAnimJoint334;

HAnimJoint HAnimJoint335 = createNode("HAnimJoint");
HAnimJoint335.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid43.joints[139] = HAnimJoint335;

HAnimJoint HAnimJoint336 = createNode("HAnimJoint");
HAnimJoint336.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[140] = HAnimJoint336;

HAnimJoint HAnimJoint337 = createNode("HAnimJoint");
HAnimJoint337.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[141] = HAnimJoint337;

HAnimJoint HAnimJoint338 = createNode("HAnimJoint");
HAnimJoint338.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[142] = HAnimJoint338;

HAnimJoint HAnimJoint339 = createNode("HAnimJoint");
HAnimJoint339.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[143] = HAnimJoint339;

HAnimJoint HAnimJoint340 = createNode("HAnimJoint");
HAnimJoint340.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[144] = HAnimJoint340;

HAnimJoint HAnimJoint341 = createNode("HAnimJoint");
HAnimJoint341.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[145] = HAnimJoint341;

HAnimJoint HAnimJoint342 = createNode("HAnimJoint");
HAnimJoint342.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[146] = HAnimJoint342;

HAnimJoint HAnimJoint343 = createNode("HAnimJoint");
HAnimJoint343.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[147] = HAnimJoint343;

children[4] = HAnimHumanoid43;

}
