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
meta3.content = "Humanoid1.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid1.x3d";
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
ImageTexture49.url = new MFString(new java.lang.String["./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
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
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment53 = createNode("HAnimSegment");
HAnimSegment53.name = "sacrum";
HAnimSegment53.DEF = "hanim_sacrum";
Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[0,0.824,0.0277]);
Transform Transform55 = createNode("Transform");
//Empty Transform
Shape Shape56 = createNode("Shape");
Shape56.USE = "HAnimJointShape";
Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Transform54.children = new MFNode();

Transform54.children[0] = Transform55;

HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = Transform54;

Shape Shape57 = createNode("Shape");
LineSet LineSet58 = createNode("LineSet");
LineSet58.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate59 = createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet58.coord = Coordinate59;

//from humanoid_root to sacroiliac vertices 2
ColorRGBA ColorRGBA60 = createNode("ColorRGBA");
ColorRGBA60.USE = "HAnimSegmentLineColorRGBA";
LineSet58.color = ColorRGBA60;

Shape57.geometry = LineSet58;

HAnimSegment53.children[1] = Shape57;

HAnimSite HAnimSite61 = createNode("HAnimSite");
HAnimSite61.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite61.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
TouchSensor TouchSensor62 = createNode("TouchSensor");
TouchSensor62.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite61.children = new MFNode();

HAnimSite61.children[0] = TouchSensor62;

Shape Shape63 = createNode("Shape");
Shape63.USE = "HAnimSiteShape";
HAnimSite61.children[1] = Shape63;

HAnimSegment53.children[2] = HAnimSite61;

HAnimSite HAnimSite64 = createNode("HAnimSite");
HAnimSite64.name = "crotch_pt";
HAnimSite64.DEF = "hanim_crotch_pt";
HAnimSite64.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor65 = createNode("TouchSensor");
TouchSensor65.description = "HAnimSite crotch_pt";
HAnimSite64.children = new MFNode();

HAnimSite64.children[0] = TouchSensor65;

Shape Shape66 = createNode("Shape");
Shape66.USE = "HAnimSiteShape";
HAnimSite64.children[1] = Shape66;

HAnimSegment53.children[3] = HAnimSite64;

HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.name = "l_asis_pt";
HAnimSite67.DEF = "hanim_l_asis_pt";
HAnimSite67.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor68 = createNode("TouchSensor");
TouchSensor68.description = "HAnimSite l_asis_pt";
HAnimSite67.children = new MFNode();

HAnimSite67.children[0] = TouchSensor68;

Shape Shape69 = createNode("Shape");
Shape69.USE = "HAnimSiteShape";
HAnimSite67.children[1] = Shape69;

HAnimSegment53.children[4] = HAnimSite67;

HAnimSite HAnimSite70 = createNode("HAnimSite");
HAnimSite70.name = "l_iliocristale_pt";
HAnimSite70.DEF = "hanim_l_iliocristale_pt";
HAnimSite70.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor71 = createNode("TouchSensor");
TouchSensor71.description = "HAnimSite l_iliocristale_pt";
HAnimSite70.children = new MFNode();

HAnimSite70.children[0] = TouchSensor71;

Shape Shape72 = createNode("Shape");
Shape72.USE = "HAnimSiteShape";
HAnimSite70.children[1] = Shape72;

HAnimSegment53.children[5] = HAnimSite70;

HAnimSite HAnimSite73 = createNode("HAnimSite");
HAnimSite73.name = "l_psis_pt";
HAnimSite73.DEF = "hanim_l_psis_pt";
HAnimSite73.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor74 = createNode("TouchSensor");
TouchSensor74.description = "HAnimSite l_psis_pt";
HAnimSite73.children = new MFNode();

HAnimSite73.children[0] = TouchSensor74;

Shape Shape75 = createNode("Shape");
Shape75.USE = "HAnimSiteShape";
HAnimSite73.children[1] = Shape75;

HAnimSegment53.children[6] = HAnimSite73;

HAnimSite HAnimSite76 = createNode("HAnimSite");
HAnimSite76.name = "l_trochanterion_pt";
HAnimSite76.DEF = "hanim_l_trochanterion_pt";
HAnimSite76.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor77 = createNode("TouchSensor");
TouchSensor77.description = "HAnimSite l_trochanterion_pt";
HAnimSite76.children = new MFNode();

HAnimSite76.children[0] = TouchSensor77;

Shape Shape78 = createNode("Shape");
Shape78.USE = "HAnimSiteShape";
HAnimSite76.children[1] = Shape78;

HAnimSegment53.children[7] = HAnimSite76;

HAnimSite HAnimSite79 = createNode("HAnimSite");
HAnimSite79.name = "r_asis_pt";
HAnimSite79.DEF = "hanim_r_asis_pt";
HAnimSite79.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor80 = createNode("TouchSensor");
TouchSensor80.description = "HAnimSite r_asis_pt";
HAnimSite79.children = new MFNode();

HAnimSite79.children[0] = TouchSensor80;

Shape Shape81 = createNode("Shape");
Shape81.USE = "HAnimSiteShape";
HAnimSite79.children[1] = Shape81;

HAnimSegment53.children[8] = HAnimSite79;

HAnimSite HAnimSite82 = createNode("HAnimSite");
HAnimSite82.name = "r_iliocristale_pt";
HAnimSite82.DEF = "hanim_r_iliocristale_pt";
HAnimSite82.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor83 = createNode("TouchSensor");
TouchSensor83.description = "HAnimSite r_iliocristale_pt";
HAnimSite82.children = new MFNode();

HAnimSite82.children[0] = TouchSensor83;

Shape Shape84 = createNode("Shape");
Shape84.USE = "HAnimSiteShape";
HAnimSite82.children[1] = Shape84;

HAnimSegment53.children[9] = HAnimSite82;

HAnimSite HAnimSite85 = createNode("HAnimSite");
HAnimSite85.name = "r_psis_pt";
HAnimSite85.DEF = "hanim_r_psis_pt";
HAnimSite85.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor86 = createNode("TouchSensor");
TouchSensor86.description = "HAnimSite r_psis_pt";
HAnimSite85.children = new MFNode();

HAnimSite85.children[0] = TouchSensor86;

Shape Shape87 = createNode("Shape");
Shape87.USE = "HAnimSiteShape";
HAnimSite85.children[1] = Shape87;

HAnimSegment53.children[10] = HAnimSite85;

HAnimSite HAnimSite88 = createNode("HAnimSite");
HAnimSite88.name = "r_trochanterion_pt";
HAnimSite88.DEF = "hanim_r_trochanterion_pt";
HAnimSite88.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor89 = createNode("TouchSensor");
TouchSensor89.description = "HAnimSite r_trochanterion_pt";
HAnimSite88.children = new MFNode();

HAnimSite88.children[0] = TouchSensor89;

Shape Shape90 = createNode("Shape");
Shape90.USE = "HAnimSiteShape";
HAnimSite88.children[1] = Shape90;

HAnimSegment53.children[11] = HAnimSite88;

Shape Shape91 = createNode("Shape");
LineSet LineSet92 = createNode("LineSet");
LineSet92.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate93 = createNode("Coordinate");
Coordinate93.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet92.coord = Coordinate93;

//from humanoid_root to vl5 vertices 2
ColorRGBA ColorRGBA94 = createNode("ColorRGBA");
ColorRGBA94.USE = "HAnimSegmentLineColorRGBA";
LineSet92.color = ColorRGBA94;

Shape91.geometry = LineSet92;

HAnimSegment53.children[12] = Shape91;

HAnimSite HAnimSite95 = createNode("HAnimSite");
HAnimSite95.name = "navel_pt";
HAnimSite95.DEF = "hanim_navel_pt";
HAnimSite95.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor96 = createNode("TouchSensor");
TouchSensor96.description = "HAnimSite navel_pt";
HAnimSite95.children = new MFNode();

HAnimSite95.children[0] = TouchSensor96;

Shape Shape97 = createNode("Shape");
Shape97.USE = "HAnimSiteShape";
HAnimSite95.children[1] = Shape97;

HAnimSegment53.children[13] = HAnimSite95;

HAnimSite HAnimSite98 = createNode("HAnimSite");
HAnimSite98.name = "waist_preferred_anterior_pt";
HAnimSite98.DEF = "hanim_waist_preferred_anterior_pt";
TouchSensor TouchSensor99 = createNode("TouchSensor");
TouchSensor99.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite98.children = new MFNode();

HAnimSite98.children[0] = TouchSensor99;

Shape Shape100 = createNode("Shape");
Shape100.USE = "HAnimSiteShape";
HAnimSite98.children[1] = Shape100;

HAnimSegment53.children[14] = HAnimSite98;

HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.name = "waist_preferred_posterior_pt";
HAnimSite101.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite101.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor102 = createNode("TouchSensor");
TouchSensor102.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite101.children = new MFNode();

HAnimSite101.children[0] = TouchSensor102;

Shape Shape103 = createNode("Shape");
Shape103.USE = "HAnimSiteShape";
HAnimSite101.children[1] = Shape103;

HAnimSegment53.children[15] = HAnimSite101;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

HAnimJoint HAnimJoint104 = createNode("HAnimJoint");
HAnimJoint104.name = "sacroiliac";
HAnimJoint104.DEF = "hanim_sacroiliac";
HAnimJoint104.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint104.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment105 = createNode("HAnimSegment");
HAnimSegment105.name = "pelvis";
HAnimSegment105.DEF = "hanim_pelvis";
Transform Transform106 = createNode("Transform");
Transform106.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Transform Transform107 = createNode("Transform");
//Empty Transform
Shape Shape108 = createNode("Shape");
Shape108.USE = "HAnimJointShape";
Transform107.child = new undefined();

Transform107.child[0] = Shape108;

Transform106.children = new MFNode();

Transform106.children[0] = Transform107;

HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = Transform106;

Shape Shape109 = createNode("Shape");
LineSet LineSet110 = createNode("LineSet");
LineSet110.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate111 = createNode("Coordinate");
Coordinate111.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet110.coord = Coordinate111;

//from sacroiliac to l_hip vertices 2
ColorRGBA ColorRGBA112 = createNode("ColorRGBA");
ColorRGBA112.USE = "HAnimSegmentLineColorRGBA";
LineSet110.color = ColorRGBA112;

Shape109.geometry = LineSet110;

HAnimSegment105.children[1] = Shape109;

HAnimSite HAnimSite113 = createNode("HAnimSite");
HAnimSite113.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite113.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite113.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor114 = createNode("TouchSensor");
TouchSensor114.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = TouchSensor114;

Shape Shape115 = createNode("Shape");
Shape115.USE = "HAnimSiteShape";
HAnimSite113.children[1] = Shape115;

HAnimSegment105.children[2] = HAnimSite113;

HAnimSite HAnimSite116 = createNode("HAnimSite");
HAnimSite116.name = "l_femoral_medial_epicondyles_pt";
HAnimSite116.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite116.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor117 = createNode("TouchSensor");
TouchSensor117.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite116.children = new MFNode();

HAnimSite116.children[0] = TouchSensor117;

Shape Shape118 = createNode("Shape");
Shape118.USE = "HAnimSiteShape";
HAnimSite116.children[1] = Shape118;

HAnimSegment105.children[3] = HAnimSite116;

HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.name = "l_knee_crease_pt";
HAnimSite119.DEF = "hanim_l_knee_crease_pt";
HAnimSite119.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor120 = createNode("TouchSensor");
TouchSensor120.description = "HAnimSite l_knee_crease_pt";
HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = TouchSensor120;

Shape Shape121 = createNode("Shape");
Shape121.USE = "HAnimSiteShape";
HAnimSite119.children[1] = Shape121;

HAnimSegment105.children[4] = HAnimSite119;

HAnimSite HAnimSite122 = createNode("HAnimSite");
HAnimSite122.name = "l_suprapatella_pt";
HAnimSite122.DEF = "hanim_l_suprapatella_pt";
TouchSensor TouchSensor123 = createNode("TouchSensor");
TouchSensor123.description = "HAnimSite l_suprapatella_pt";
HAnimSite122.children = new MFNode();

HAnimSite122.children[0] = TouchSensor123;

Shape Shape124 = createNode("Shape");
Shape124.USE = "HAnimSiteShape";
HAnimSite122.children[1] = Shape124;

HAnimSegment105.children[5] = HAnimSite122;

Shape Shape125 = createNode("Shape");
LineSet LineSet126 = createNode("LineSet");
LineSet126.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate127 = createNode("Coordinate");
Coordinate127.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet126.coord = Coordinate127;

//from sacroiliac to r_hip vertices 2
ColorRGBA ColorRGBA128 = createNode("ColorRGBA");
ColorRGBA128.USE = "HAnimSegmentLineColorRGBA";
LineSet126.color = ColorRGBA128;

Shape125.geometry = LineSet126;

HAnimSegment105.children[6] = Shape125;

HAnimSite HAnimSite129 = createNode("HAnimSite");
HAnimSite129.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite129.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite129.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor130 = createNode("TouchSensor");
TouchSensor130.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = TouchSensor130;

Shape Shape131 = createNode("Shape");
Shape131.USE = "HAnimSiteShape";
HAnimSite129.children[1] = Shape131;

HAnimSegment105.children[7] = HAnimSite129;

HAnimSite HAnimSite132 = createNode("HAnimSite");
HAnimSite132.name = "r_femoral_medial_epicondyles_pt";
HAnimSite132.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite132.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor133 = createNode("TouchSensor");
TouchSensor133.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

Shape Shape134 = createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

HAnimSegment105.children[8] = HAnimSite132;

HAnimSite HAnimSite135 = createNode("HAnimSite");
HAnimSite135.name = "r_knee_crease_pt";
HAnimSite135.DEF = "hanim_r_knee_crease_pt";
HAnimSite135.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor136 = createNode("TouchSensor");
TouchSensor136.description = "HAnimSite r_knee_crease_pt";
HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = TouchSensor136;

Shape Shape137 = createNode("Shape");
Shape137.USE = "HAnimSiteShape";
HAnimSite135.children[1] = Shape137;

HAnimSegment105.children[9] = HAnimSite135;

HAnimSite HAnimSite138 = createNode("HAnimSite");
HAnimSite138.name = "r_suprapatella_pt";
HAnimSite138.DEF = "hanim_r_suprapatella_pt";
TouchSensor TouchSensor139 = createNode("TouchSensor");
TouchSensor139.description = "HAnimSite r_suprapatella_pt";
HAnimSite138.children = new MFNode();

HAnimSite138.children[0] = TouchSensor139;

Shape Shape140 = createNode("Shape");
Shape140.USE = "HAnimSiteShape";
HAnimSite138.children[1] = Shape140;

HAnimSegment105.children[10] = HAnimSite138;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

HAnimJoint HAnimJoint141 = createNode("HAnimJoint");
HAnimJoint141.name = "l_hip";
HAnimJoint141.DEF = "hanim_l_hip";
HAnimJoint141.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment142 = createNode("HAnimSegment");
HAnimSegment142.name = "l_thigh";
HAnimSegment142.DEF = "hanim_l_thigh";
Transform Transform143 = createNode("Transform");
Transform143.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Transform Transform144 = createNode("Transform");
//Empty Transform
Shape Shape145 = createNode("Shape");
Shape145.USE = "HAnimJointShape";
Transform144.child = new undefined();

Transform144.child[0] = Shape145;

Transform143.children = new MFNode();

Transform143.children[0] = Transform144;

HAnimSegment142.children = new MFNode();

HAnimSegment142.children[0] = Transform143;

Shape Shape146 = createNode("Shape");
LineSet LineSet147 = createNode("LineSet");
LineSet147.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate148 = createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet147.coord = Coordinate148;

//from l_hip to l_knee vertices 2
ColorRGBA ColorRGBA149 = createNode("ColorRGBA");
ColorRGBA149.USE = "HAnimSegmentLineColorRGBA";
LineSet147.color = ColorRGBA149;

Shape146.geometry = LineSet147;

HAnimSegment142.children[1] = Shape146;

HAnimSite HAnimSite150 = createNode("HAnimSite");
HAnimSite150.name = "l_lateral_malleolus_pt";
HAnimSite150.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite150.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor151 = createNode("TouchSensor");
TouchSensor151.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite150.children = new MFNode();

HAnimSite150.children[0] = TouchSensor151;

Shape Shape152 = createNode("Shape");
Shape152.USE = "HAnimSiteShape";
HAnimSite150.children[1] = Shape152;

HAnimSegment142.children[2] = HAnimSite150;

HAnimSite HAnimSite153 = createNode("HAnimSite");
HAnimSite153.name = "l_medial_malleolus_pt";
HAnimSite153.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite153.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor154 = createNode("TouchSensor");
TouchSensor154.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite153.children = new MFNode();

HAnimSite153.children[0] = TouchSensor154;

Shape Shape155 = createNode("Shape");
Shape155.USE = "HAnimSiteShape";
HAnimSite153.children[1] = Shape155;

HAnimSegment142.children[3] = HAnimSite153;

HAnimSite HAnimSite156 = createNode("HAnimSite");
HAnimSite156.name = "l_tibiale_pt";
HAnimSite156.DEF = "hanim_l_tibiale_pt";
TouchSensor TouchSensor157 = createNode("TouchSensor");
TouchSensor157.description = "HAnimSite l_tibiale_pt";
HAnimSite156.children = new MFNode();

HAnimSite156.children[0] = TouchSensor157;

Shape Shape158 = createNode("Shape");
Shape158.USE = "HAnimSiteShape";
HAnimSite156.children[1] = Shape158;

HAnimSegment142.children[4] = HAnimSite156;

HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

HAnimJoint HAnimJoint159 = createNode("HAnimJoint");
HAnimJoint159.name = "l_knee";
HAnimJoint159.DEF = "hanim_l_knee";
HAnimJoint159.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint159.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint159.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment160 = createNode("HAnimSegment");
HAnimSegment160.name = "l_calf";
HAnimSegment160.DEF = "hanim_l_calf";
Transform Transform161 = createNode("Transform");
Transform161.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Transform Transform162 = createNode("Transform");
//Empty Transform
Shape Shape163 = createNode("Shape");
Shape163.USE = "HAnimJointShape";
Transform162.child = new undefined();

Transform162.child[0] = Shape163;

Transform161.children = new MFNode();

Transform161.children[0] = Transform162;

HAnimSegment160.children = new MFNode();

HAnimSegment160.children[0] = Transform161;

Shape Shape164 = createNode("Shape");
LineSet LineSet165 = createNode("LineSet");
LineSet165.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate166 = createNode("Coordinate");
Coordinate166.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet165.coord = Coordinate166;

//from l_knee to l_talocrural vertices 2
ColorRGBA ColorRGBA167 = createNode("ColorRGBA");
ColorRGBA167.USE = "HAnimSegmentLineColorRGBA";
LineSet165.color = ColorRGBA167;

Shape164.geometry = LineSet165;

HAnimSegment160.children[1] = Shape164;

HAnimSite HAnimSite168 = createNode("HAnimSite");
HAnimSite168.name = "l_calcaneus_posterior_pt";
HAnimSite168.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite168.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor169 = createNode("TouchSensor");
TouchSensor169.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite168.children = new MFNode();

HAnimSite168.children[0] = TouchSensor169;

Shape Shape170 = createNode("Shape");
Shape170.USE = "HAnimSiteShape";
HAnimSite168.children[1] = Shape170;

HAnimSegment160.children[2] = HAnimSite168;

HAnimSite HAnimSite171 = createNode("HAnimSite");
HAnimSite171.name = "l_sphyrion_pt";
HAnimSite171.DEF = "hanim_l_sphyrion_pt";
HAnimSite171.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor172 = createNode("TouchSensor");
TouchSensor172.description = "HAnimSite l_sphyrion_pt";
HAnimSite171.children = new MFNode();

HAnimSite171.children[0] = TouchSensor172;

Shape Shape173 = createNode("Shape");
Shape173.USE = "HAnimSiteShape";
HAnimSite171.children[1] = Shape173;

HAnimSegment160.children[3] = HAnimSite171;

HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimSegment160;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.name = "l_talocrural";
HAnimJoint174.DEF = "hanim_l_talocrural";
HAnimJoint174.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint174.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint174.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment175 = createNode("HAnimSegment");
HAnimSegment175.name = "l_talus";
HAnimSegment175.DEF = "hanim_l_talus";
Transform Transform176 = createNode("Transform");
Transform176.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform176.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform176.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
Transform Transform177 = createNode("Transform");
//Empty Transform left foot
Shape Shape178 = createNode("Shape");
Shape178.USE = "HAnimJointShape";
Transform177.child = new undefined();

Transform177.child[0] = Shape178;

Transform176.children = new MFNode();

Transform176.children[0] = Transform177;

HAnimSegment175.children = new MFNode();

HAnimSegment175.children[0] = Transform176;

Shape Shape179 = createNode("Shape");
LineSet LineSet180 = createNode("LineSet");
LineSet180.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate181 = createNode("Coordinate");
Coordinate181.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004]);
LineSet180.coord = Coordinate181;

//from l_talocrural to l_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA182 = createNode("ColorRGBA");
ColorRGBA182.USE = "HAnimSegmentLineColorRGBA";
LineSet180.color = ColorRGBA182;

Shape179.geometry = LineSet180;

HAnimSegment175.children[1] = Shape179;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.name = "l_metatarsophalangeal_2";
HAnimJoint183.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint183.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint183.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint183.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint174.children[1] = HAnimJoint183;

HAnimJoint159.children[1] = HAnimJoint174;

HAnimJoint141.children[1] = HAnimJoint159;

HAnimJoint104.children[1] = HAnimJoint141;

HAnimJoint HAnimJoint184 = createNode("HAnimJoint");
HAnimJoint184.name = "r_hip";
HAnimJoint184.DEF = "hanim_r_hip";
HAnimJoint184.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint184.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint184.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment185 = createNode("HAnimSegment");
HAnimSegment185.name = "r_thigh";
HAnimSegment185.DEF = "hanim_r_thigh";
Transform Transform186 = createNode("Transform");
Transform186.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform187 = createNode("Transform");
//Empty Transform
Shape Shape188 = createNode("Shape");
Shape188.USE = "HAnimJointShape";
Transform187.child = new undefined();

Transform187.child[0] = Shape188;

Transform186.children = new MFNode();

Transform186.children[0] = Transform187;

HAnimSegment185.children = new MFNode();

HAnimSegment185.children[0] = Transform186;

Shape Shape189 = createNode("Shape");
LineSet LineSet190 = createNode("LineSet");
LineSet190.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate191 = createNode("Coordinate");
Coordinate191.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet190.coord = Coordinate191;

//from r_hip to r_knee vertices 2
ColorRGBA ColorRGBA192 = createNode("ColorRGBA");
ColorRGBA192.USE = "HAnimSegmentLineColorRGBA";
LineSet190.color = ColorRGBA192;

Shape189.geometry = LineSet190;

HAnimSegment185.children[1] = Shape189;

HAnimSite HAnimSite193 = createNode("HAnimSite");
HAnimSite193.name = "r_lateral_malleolus_pt";
HAnimSite193.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite193.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor194 = createNode("TouchSensor");
TouchSensor194.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite193.children = new MFNode();

HAnimSite193.children[0] = TouchSensor194;

Shape Shape195 = createNode("Shape");
Shape195.USE = "HAnimSiteShape";
HAnimSite193.children[1] = Shape195;

HAnimSegment185.children[2] = HAnimSite193;

HAnimSite HAnimSite196 = createNode("HAnimSite");
HAnimSite196.name = "r_medial_malleolus_pt";
HAnimSite196.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite196.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor197 = createNode("TouchSensor");
TouchSensor197.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite196.children = new MFNode();

HAnimSite196.children[0] = TouchSensor197;

Shape Shape198 = createNode("Shape");
Shape198.USE = "HAnimSiteShape";
HAnimSite196.children[1] = Shape198;

HAnimSegment185.children[3] = HAnimSite196;

HAnimSite HAnimSite199 = createNode("HAnimSite");
HAnimSite199.name = "r_tibiale_pt";
HAnimSite199.DEF = "hanim_r_tibiale_pt";
TouchSensor TouchSensor200 = createNode("TouchSensor");
TouchSensor200.description = "HAnimSite r_tibiale_pt";
HAnimSite199.children = new MFNode();

HAnimSite199.children[0] = TouchSensor200;

Shape Shape201 = createNode("Shape");
Shape201.USE = "HAnimSiteShape";
HAnimSite199.children[1] = Shape201;

HAnimSegment185.children[4] = HAnimSite199;

HAnimJoint184.children = new MFNode();

HAnimJoint184.children[0] = HAnimSegment185;

HAnimJoint HAnimJoint202 = createNode("HAnimJoint");
HAnimJoint202.name = "r_knee";
HAnimJoint202.DEF = "hanim_r_knee";
HAnimJoint202.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint202.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint202.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment203 = createNode("HAnimSegment");
HAnimSegment203.name = "r_calf";
HAnimSegment203.DEF = "hanim_r_calf";
Transform Transform204 = createNode("Transform");
Transform204.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform205 = createNode("Transform");
//Empty Transform
Shape Shape206 = createNode("Shape");
Shape206.USE = "HAnimJointShape";
Transform205.child = new undefined();

Transform205.child[0] = Shape206;

Transform204.children = new MFNode();

Transform204.children[0] = Transform205;

HAnimSegment203.children = new MFNode();

HAnimSegment203.children[0] = Transform204;

Shape Shape207 = createNode("Shape");
LineSet LineSet208 = createNode("LineSet");
LineSet208.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate209 = createNode("Coordinate");
Coordinate209.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet208.coord = Coordinate209;

//from r_knee to r_talocrural vertices 2
ColorRGBA ColorRGBA210 = createNode("ColorRGBA");
ColorRGBA210.USE = "HAnimSegmentLineColorRGBA";
LineSet208.color = ColorRGBA210;

Shape207.geometry = LineSet208;

HAnimSegment203.children[1] = Shape207;

HAnimSite HAnimSite211 = createNode("HAnimSite");
HAnimSite211.name = "r_calcaneus_posterior_pt";
HAnimSite211.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite211.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor212 = createNode("TouchSensor");
TouchSensor212.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite211.children = new MFNode();

HAnimSite211.children[0] = TouchSensor212;

Shape Shape213 = createNode("Shape");
Shape213.USE = "HAnimSiteShape";
HAnimSite211.children[1] = Shape213;

HAnimSegment203.children[2] = HAnimSite211;

HAnimSite HAnimSite214 = createNode("HAnimSite");
HAnimSite214.name = "r_sphyrion_pt";
HAnimSite214.DEF = "hanim_r_sphyrion_pt";
HAnimSite214.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor215 = createNode("TouchSensor");
TouchSensor215.description = "HAnimSite r_sphyrion_pt";
HAnimSite214.children = new MFNode();

HAnimSite214.children[0] = TouchSensor215;

Shape Shape216 = createNode("Shape");
Shape216.USE = "HAnimSiteShape";
HAnimSite214.children[1] = Shape216;

HAnimSegment203.children[3] = HAnimSite214;

HAnimJoint202.children = new MFNode();

HAnimJoint202.children[0] = HAnimSegment203;

HAnimJoint HAnimJoint217 = createNode("HAnimJoint");
HAnimJoint217.name = "r_talocrural";
HAnimJoint217.DEF = "hanim_r_talocrural";
HAnimJoint217.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint217.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint217.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment218 = createNode("HAnimSegment");
HAnimSegment218.name = "r_talus";
HAnimSegment218.DEF = "hanim_r_talus";
Transform Transform219 = createNode("Transform");
Transform219.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform219.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform219.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
Transform Transform220 = createNode("Transform");
//Empty Transform right foot
Shape Shape221 = createNode("Shape");
Shape221.USE = "HAnimJointShape";
Transform220.child = new undefined();

Transform220.child[0] = Shape221;

Transform219.children = new MFNode();

Transform219.children[0] = Transform220;

HAnimSegment218.children = new MFNode();

HAnimSegment218.children[0] = Transform219;

Shape Shape222 = createNode("Shape");
LineSet LineSet223 = createNode("LineSet");
LineSet223.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate224 = createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004]);
LineSet223.coord = Coordinate224;

//from r_talocrural to r_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA225 = createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA";
LineSet223.color = ColorRGBA225;

Shape222.geometry = LineSet223;

HAnimSegment218.children[1] = Shape222;

HAnimJoint217.children = new MFNode();

HAnimJoint217.children[0] = HAnimSegment218;

HAnimJoint HAnimJoint226 = createNode("HAnimJoint");
HAnimJoint226.name = "r_metatarsophalangeal_2";
HAnimJoint226.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint226.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint226.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint226.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint217.children[1] = HAnimJoint226;

HAnimJoint202.children[1] = HAnimJoint217;

HAnimJoint184.children[1] = HAnimJoint202;

HAnimJoint104.children[2] = HAnimJoint184;

HAnimJoint52.children[1] = HAnimJoint104;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.name = "vl5";
HAnimJoint227.DEF = "hanim_vl5";
HAnimJoint227.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint227.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint227.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment228 = createNode("HAnimSegment");
HAnimSegment228.name = "l5";
HAnimSegment228.DEF = "hanim_l5";
Transform Transform229 = createNode("Transform");
Transform229.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Transform Transform230 = createNode("Transform");
//Empty Transform
Shape Shape231 = createNode("Shape");
Shape231.USE = "HAnimJointShape";
Transform230.child = new undefined();

Transform230.child[0] = Shape231;

Transform229.children = new MFNode();

Transform229.children[0] = Transform230;

HAnimSegment228.children = new MFNode();

HAnimSegment228.children[0] = Transform229;

Shape Shape232 = createNode("Shape");
LineSet LineSet233 = createNode("LineSet");
LineSet233.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate234 = createNode("Coordinate");
Coordinate234.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236]);
LineSet233.coord = Coordinate234;

//from vl5 to skullbase vertices 2
ColorRGBA ColorRGBA235 = createNode("ColorRGBA");
ColorRGBA235.USE = "HAnimSegmentLineColorRGBA";
LineSet233.color = ColorRGBA235;

Shape232.geometry = LineSet233;

HAnimSegment228.children[1] = Shape232;

HAnimSite HAnimSite236 = createNode("HAnimSite");
HAnimSite236.name = "glabella_pt";
HAnimSite236.DEF = "hanim_glabella_pt";
TouchSensor TouchSensor237 = createNode("TouchSensor");
TouchSensor237.description = "HAnimSite glabella_pt";
HAnimSite236.children = new MFNode();

HAnimSite236.children[0] = TouchSensor237;

Shape Shape238 = createNode("Shape");
Shape238.USE = "HAnimSiteShape";
HAnimSite236.children[1] = Shape238;

HAnimSegment228.children[2] = HAnimSite236;

HAnimSite HAnimSite239 = createNode("HAnimSite");
HAnimSite239.name = "l_ectocanthus_pt";
HAnimSite239.DEF = "hanim_l_ectocanthus_pt";
TouchSensor TouchSensor240 = createNode("TouchSensor");
TouchSensor240.description = "HAnimSite l_ectocanthus_pt";
HAnimSite239.children = new MFNode();

HAnimSite239.children[0] = TouchSensor240;

Shape Shape241 = createNode("Shape");
Shape241.USE = "HAnimSiteShape";
HAnimSite239.children[1] = Shape241;

HAnimSegment228.children[3] = HAnimSite239;

HAnimSite HAnimSite242 = createNode("HAnimSite");
HAnimSite242.name = "l_infraorbitale_pt";
HAnimSite242.DEF = "hanim_l_infraorbitale_pt";
HAnimSite242.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor243 = createNode("TouchSensor");
TouchSensor243.description = "HAnimSite l_infraorbitale_pt";
HAnimSite242.children = new MFNode();

HAnimSite242.children[0] = TouchSensor243;

Shape Shape244 = createNode("Shape");
Shape244.USE = "HAnimSiteShape";
HAnimSite242.children[1] = Shape244;

HAnimSegment228.children[4] = HAnimSite242;

HAnimSite HAnimSite245 = createNode("HAnimSite");
HAnimSite245.name = "l_tragion_pt";
HAnimSite245.DEF = "hanim_l_tragion_pt";
HAnimSite245.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor246 = createNode("TouchSensor");
TouchSensor246.description = "HAnimSite l_tragion_pt";
HAnimSite245.children = new MFNode();

HAnimSite245.children[0] = TouchSensor246;

Shape Shape247 = createNode("Shape");
Shape247.USE = "HAnimSiteShape";
HAnimSite245.children[1] = Shape247;

HAnimSegment228.children[5] = HAnimSite245;

HAnimSite HAnimSite248 = createNode("HAnimSite");
HAnimSite248.name = "nuchale_pt";
HAnimSite248.DEF = "hanim_nuchale_pt";
HAnimSite248.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor249 = createNode("TouchSensor");
TouchSensor249.description = "HAnimSite nuchale_pt";
HAnimSite248.children = new MFNode();

HAnimSite248.children[0] = TouchSensor249;

Shape Shape250 = createNode("Shape");
Shape250.USE = "HAnimSiteShape";
HAnimSite248.children[1] = Shape250;

HAnimSegment228.children[6] = HAnimSite248;

HAnimSite HAnimSite251 = createNode("HAnimSite");
HAnimSite251.name = "opisthocranion_pt";
HAnimSite251.DEF = "hanim_opisthocranion_pt";
TouchSensor TouchSensor252 = createNode("TouchSensor");
TouchSensor252.description = "HAnimSite opisthocranion_pt";
HAnimSite251.children = new MFNode();

HAnimSite251.children[0] = TouchSensor252;

Shape Shape253 = createNode("Shape");
Shape253.USE = "HAnimSiteShape";
HAnimSite251.children[1] = Shape253;

HAnimSegment228.children[7] = HAnimSite251;

HAnimSite HAnimSite254 = createNode("HAnimSite");
HAnimSite254.name = "r_ectocanthus_pt";
HAnimSite254.DEF = "hanim_r_ectocanthus_pt";
TouchSensor TouchSensor255 = createNode("TouchSensor");
TouchSensor255.description = "HAnimSite r_ectocanthus_pt";
HAnimSite254.children = new MFNode();

HAnimSite254.children[0] = TouchSensor255;

Shape Shape256 = createNode("Shape");
Shape256.USE = "HAnimSiteShape";
HAnimSite254.children[1] = Shape256;

HAnimSegment228.children[8] = HAnimSite254;

HAnimSite HAnimSite257 = createNode("HAnimSite");
HAnimSite257.name = "r_infraorbitale_pt";
HAnimSite257.DEF = "hanim_r_infraorbitale_pt";
HAnimSite257.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor258 = createNode("TouchSensor");
TouchSensor258.description = "HAnimSite r_infraorbitale_pt";
HAnimSite257.children = new MFNode();

HAnimSite257.children[0] = TouchSensor258;

Shape Shape259 = createNode("Shape");
Shape259.USE = "HAnimSiteShape";
HAnimSite257.children[1] = Shape259;

HAnimSegment228.children[9] = HAnimSite257;

HAnimSite HAnimSite260 = createNode("HAnimSite");
HAnimSite260.name = "r_tragion_pt";
HAnimSite260.DEF = "hanim_r_tragion_pt";
HAnimSite260.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor261 = createNode("TouchSensor");
TouchSensor261.description = "HAnimSite r_tragion_pt";
HAnimSite260.children = new MFNode();

HAnimSite260.children[0] = TouchSensor261;

Shape Shape262 = createNode("Shape");
Shape262.USE = "HAnimSiteShape";
HAnimSite260.children[1] = Shape262;

HAnimSegment228.children[10] = HAnimSite260;

HAnimSite HAnimSite263 = createNode("HAnimSite");
HAnimSite263.name = "sellion_pt";
HAnimSite263.DEF = "hanim_sellion_pt";
HAnimSite263.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor264 = createNode("TouchSensor");
TouchSensor264.description = "HAnimSite sellion_pt";
HAnimSite263.children = new MFNode();

HAnimSite263.children[0] = TouchSensor264;

Shape Shape265 = createNode("Shape");
Shape265.USE = "HAnimSiteShape";
HAnimSite263.children[1] = Shape265;

HAnimSegment228.children[11] = HAnimSite263;

HAnimSite HAnimSite266 = createNode("HAnimSite");
HAnimSite266.name = "skull_vertex_pt";
HAnimSite266.DEF = "hanim_skull_vertex_pt";
HAnimSite266.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor267 = createNode("TouchSensor");
TouchSensor267.description = "HAnimSite skull_vertex_pt";
HAnimSite266.children = new MFNode();

HAnimSite266.children[0] = TouchSensor267;

Shape Shape268 = createNode("Shape");
Shape268.USE = "HAnimSiteShape";
HAnimSite266.children[1] = Shape268;

HAnimSegment228.children[12] = HAnimSite266;

Shape Shape269 = createNode("Shape");
LineSet LineSet270 = createNode("LineSet");
LineSet270.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate271 = createNode("Coordinate");
Coordinate271.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387]);
LineSet270.coord = Coordinate271;

//from vl5 to l_shoulder vertices 2
ColorRGBA ColorRGBA272 = createNode("ColorRGBA");
ColorRGBA272.USE = "HAnimSegmentLineColorRGBA";
LineSet270.color = ColorRGBA272;

Shape269.geometry = LineSet270;

HAnimSegment228.children[13] = Shape269;

HAnimSite HAnimSite273 = createNode("HAnimSite");
HAnimSite273.name = "l_bideltoid_pt";
HAnimSite273.DEF = "hanim_l_bideltoid_pt";
TouchSensor TouchSensor274 = createNode("TouchSensor");
TouchSensor274.description = "HAnimSite l_bideltoid_pt";
HAnimSite273.children = new MFNode();

HAnimSite273.children[0] = TouchSensor274;

Shape Shape275 = createNode("Shape");
Shape275.USE = "HAnimSiteShape";
HAnimSite273.children[1] = Shape275;

HAnimSegment228.children[14] = HAnimSite273;

HAnimSite HAnimSite276 = createNode("HAnimSite");
HAnimSite276.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite276.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite276.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor277 = createNode("TouchSensor");
TouchSensor277.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite276.children = new MFNode();

HAnimSite276.children[0] = TouchSensor277;

Shape Shape278 = createNode("Shape");
Shape278.USE = "HAnimSiteShape";
HAnimSite276.children[1] = Shape278;

HAnimSegment228.children[15] = HAnimSite276;

Shape Shape279 = createNode("Shape");
LineSet LineSet280 = createNode("LineSet");
LineSet280.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate281 = createNode("Coordinate");
Coordinate281.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325]);
LineSet280.coord = Coordinate281;

//from vl5 to r_shoulder vertices 2
ColorRGBA ColorRGBA282 = createNode("ColorRGBA");
ColorRGBA282.USE = "HAnimSegmentLineColorRGBA";
LineSet280.color = ColorRGBA282;

Shape279.geometry = LineSet280;

HAnimSegment228.children[16] = Shape279;

HAnimSite HAnimSite283 = createNode("HAnimSite");
HAnimSite283.name = "r_bideltoid_pt";
HAnimSite283.DEF = "hanim_r_bideltoid_pt";
TouchSensor TouchSensor284 = createNode("TouchSensor");
TouchSensor284.description = "HAnimSite r_bideltoid_pt";
HAnimSite283.children = new MFNode();

HAnimSite283.children[0] = TouchSensor284;

Shape Shape285 = createNode("Shape");
Shape285.USE = "HAnimSiteShape";
HAnimSite283.children[1] = Shape285;

HAnimSegment228.children[17] = HAnimSite283;

HAnimSite HAnimSite286 = createNode("HAnimSite");
HAnimSite286.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite286.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite286.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor287 = createNode("TouchSensor");
TouchSensor287.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite286.children = new MFNode();

HAnimSite286.children[0] = TouchSensor287;

Shape Shape288 = createNode("Shape");
Shape288.USE = "HAnimSiteShape";
HAnimSite286.children[1] = Shape288;

HAnimSegment228.children[18] = HAnimSite286;

HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.name = "skullbase";
HAnimJoint289.DEF = "hanim_skullbase";
HAnimJoint289.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint289.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint289.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint227.children[1] = HAnimJoint289;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.name = "l_shoulder";
HAnimJoint290.DEF = "hanim_l_shoulder";
HAnimJoint290.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint290.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint290.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment291 = createNode("HAnimSegment");
HAnimSegment291.name = "l_upperarm";
HAnimSegment291.DEF = "hanim_l_upperarm";
Transform Transform292 = createNode("Transform");
Transform292.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform293 = createNode("Transform");
//Empty Transform
Shape Shape294 = createNode("Shape");
Shape294.USE = "HAnimJointShape";
Transform293.child = new undefined();

Transform293.child[0] = Shape294;

Transform292.children = new MFNode();

Transform292.children[0] = Transform293;

HAnimSegment291.children = new MFNode();

HAnimSegment291.children[0] = Transform292;

Shape Shape295 = createNode("Shape");
LineSet LineSet296 = createNode("LineSet");
LineSet296.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate297 = createNode("Coordinate");
Coordinate297.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet296.coord = Coordinate297;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA298 = createNode("ColorRGBA");
ColorRGBA298.USE = "HAnimSegmentLineColorRGBA";
LineSet296.color = ColorRGBA298;

Shape295.geometry = LineSet296;

HAnimSegment291.children[1] = Shape295;

HAnimSite HAnimSite299 = createNode("HAnimSite");
HAnimSite299.name = "l_humeral_medial_epicondyles_pt";
HAnimSite299.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite299.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor300 = createNode("TouchSensor");
TouchSensor300.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite299.children = new MFNode();

HAnimSite299.children[0] = TouchSensor300;

Shape Shape301 = createNode("Shape");
Shape301.USE = "HAnimSiteShape";
HAnimSite299.children[1] = Shape301;

HAnimSegment291.children[2] = HAnimSite299;

HAnimSite HAnimSite302 = createNode("HAnimSite");
HAnimSite302.name = "l_olecranon_pt";
HAnimSite302.DEF = "hanim_l_olecranon_pt";
HAnimSite302.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor303 = createNode("TouchSensor");
TouchSensor303.description = "HAnimSite l_olecranon_pt";
HAnimSite302.children = new MFNode();

HAnimSite302.children[0] = TouchSensor303;

Shape Shape304 = createNode("Shape");
Shape304.USE = "HAnimSiteShape";
HAnimSite302.children[1] = Shape304;

HAnimSegment291.children[3] = HAnimSite302;

HAnimSite HAnimSite305 = createNode("HAnimSite");
HAnimSite305.name = "l_radial_styloid_pt";
HAnimSite305.DEF = "hanim_l_radial_styloid_pt";
HAnimSite305.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor306 = createNode("TouchSensor");
TouchSensor306.description = "HAnimSite l_radial_styloid_pt";
HAnimSite305.children = new MFNode();

HAnimSite305.children[0] = TouchSensor306;

Shape Shape307 = createNode("Shape");
Shape307.USE = "HAnimSiteShape";
HAnimSite305.children[1] = Shape307;

HAnimSegment291.children[4] = HAnimSite305;

HAnimSite HAnimSite308 = createNode("HAnimSite");
HAnimSite308.name = "l_radiale_pt";
HAnimSite308.DEF = "hanim_l_radiale_pt";
HAnimSite308.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor309 = createNode("TouchSensor");
TouchSensor309.description = "HAnimSite l_radiale_pt";
HAnimSite308.children = new MFNode();

HAnimSite308.children[0] = TouchSensor309;

Shape Shape310 = createNode("Shape");
Shape310.USE = "HAnimSiteShape";
HAnimSite308.children[1] = Shape310;

HAnimSegment291.children[5] = HAnimSite308;

HAnimJoint290.children = new MFNode();

HAnimJoint290.children[0] = HAnimSegment291;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.name = "l_elbow";
HAnimJoint311.DEF = "hanim_l_elbow";
HAnimJoint311.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint311.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint311.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment312 = createNode("HAnimSegment");
HAnimSegment312.name = "l_forearm";
HAnimSegment312.DEF = "hanim_l_forearm";
Transform Transform313 = createNode("Transform");
Transform313.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform314 = createNode("Transform");
//Empty Transform
Shape Shape315 = createNode("Shape");
Shape315.USE = "HAnimJointShape";
Transform314.child = new undefined();

Transform314.child[0] = Shape315;

Transform313.children = new MFNode();

Transform313.children[0] = Transform314;

HAnimSegment312.children = new MFNode();

HAnimSegment312.children[0] = Transform313;

Shape Shape316 = createNode("Shape");
LineSet LineSet317 = createNode("LineSet");
LineSet317.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate318 = createNode("Coordinate");
Coordinate318.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet317.coord = Coordinate318;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA319 = createNode("ColorRGBA");
ColorRGBA319.USE = "HAnimSegmentLineColorRGBA";
LineSet317.color = ColorRGBA319;

Shape316.geometry = LineSet317;

HAnimSegment312.children[1] = Shape316;

HAnimSite HAnimSite320 = createNode("HAnimSite");
HAnimSite320.name = "l_ulnar_styloid_pt";
HAnimSite320.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite320.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor321 = createNode("TouchSensor");
TouchSensor321.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite320.children = new MFNode();

HAnimSite320.children[0] = TouchSensor321;

Shape Shape322 = createNode("Shape");
Shape322.USE = "HAnimSiteShape";
HAnimSite320.children[1] = Shape322;

HAnimSegment312.children[2] = HAnimSite320;

HAnimJoint311.children = new MFNode();

HAnimJoint311.children[0] = HAnimSegment312;

HAnimJoint HAnimJoint323 = createNode("HAnimJoint");
HAnimJoint323.name = "l_radiocarpal";
HAnimJoint323.DEF = "hanim_l_radiocarpal";
HAnimJoint323.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint323.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint323.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint311.children[1] = HAnimJoint323;

HAnimJoint290.children[1] = HAnimJoint311;

HAnimJoint227.children[2] = HAnimJoint290;

HAnimJoint HAnimJoint324 = createNode("HAnimJoint");
HAnimJoint324.name = "r_shoulder";
HAnimJoint324.DEF = "hanim_r_shoulder";
HAnimJoint324.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint324.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint324.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment325 = createNode("HAnimSegment");
HAnimSegment325.name = "r_upperarm";
HAnimSegment325.DEF = "hanim_r_upperarm";
Transform Transform326 = createNode("Transform");
Transform326.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform327 = createNode("Transform");
//Empty Transform
Shape Shape328 = createNode("Shape");
Shape328.USE = "HAnimJointShape";
Transform327.child = new undefined();

Transform327.child[0] = Shape328;

Transform326.children = new MFNode();

Transform326.children[0] = Transform327;

HAnimSegment325.children = new MFNode();

HAnimSegment325.children[0] = Transform326;

Shape Shape329 = createNode("Shape");
LineSet LineSet330 = createNode("LineSet");
LineSet330.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate331 = createNode("Coordinate");
Coordinate331.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet330.coord = Coordinate331;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA332 = createNode("ColorRGBA");
ColorRGBA332.USE = "HAnimSegmentLineColorRGBA";
LineSet330.color = ColorRGBA332;

Shape329.geometry = LineSet330;

HAnimSegment325.children[1] = Shape329;

HAnimSite HAnimSite333 = createNode("HAnimSite");
HAnimSite333.name = "r_humeral_medial_epicondyles_pt";
HAnimSite333.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite333.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor334 = createNode("TouchSensor");
TouchSensor334.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite333.children = new MFNode();

HAnimSite333.children[0] = TouchSensor334;

Shape Shape335 = createNode("Shape");
Shape335.USE = "HAnimSiteShape";
HAnimSite333.children[1] = Shape335;

HAnimSegment325.children[2] = HAnimSite333;

HAnimSite HAnimSite336 = createNode("HAnimSite");
HAnimSite336.name = "r_olecranon_pt";
HAnimSite336.DEF = "hanim_r_olecranon_pt";
HAnimSite336.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor337 = createNode("TouchSensor");
TouchSensor337.description = "HAnimSite r_olecranon_pt";
HAnimSite336.children = new MFNode();

HAnimSite336.children[0] = TouchSensor337;

Shape Shape338 = createNode("Shape");
Shape338.USE = "HAnimSiteShape";
HAnimSite336.children[1] = Shape338;

HAnimSegment325.children[3] = HAnimSite336;

HAnimSite HAnimSite339 = createNode("HAnimSite");
HAnimSite339.name = "r_radial_styloid_pt";
HAnimSite339.DEF = "hanim_r_radial_styloid_pt";
HAnimSite339.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor340 = createNode("TouchSensor");
TouchSensor340.description = "HAnimSite r_radial_styloid_pt";
HAnimSite339.children = new MFNode();

HAnimSite339.children[0] = TouchSensor340;

Shape Shape341 = createNode("Shape");
Shape341.USE = "HAnimSiteShape";
HAnimSite339.children[1] = Shape341;

HAnimSegment325.children[4] = HAnimSite339;

HAnimSite HAnimSite342 = createNode("HAnimSite");
HAnimSite342.name = "r_radiale_pt";
HAnimSite342.DEF = "hanim_r_radiale_pt";
HAnimSite342.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor343 = createNode("TouchSensor");
TouchSensor343.description = "HAnimSite r_radiale_pt";
HAnimSite342.children = new MFNode();

HAnimSite342.children[0] = TouchSensor343;

Shape Shape344 = createNode("Shape");
Shape344.USE = "HAnimSiteShape";
HAnimSite342.children[1] = Shape344;

HAnimSegment325.children[5] = HAnimSite342;

HAnimJoint324.children = new MFNode();

HAnimJoint324.children[0] = HAnimSegment325;

HAnimJoint HAnimJoint345 = createNode("HAnimJoint");
HAnimJoint345.name = "r_elbow";
HAnimJoint345.DEF = "hanim_r_elbow";
HAnimJoint345.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint345.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint345.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment346 = createNode("HAnimSegment");
HAnimSegment346.name = "r_forearm";
HAnimSegment346.DEF = "hanim_r_forearm";
Transform Transform347 = createNode("Transform");
Transform347.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform348 = createNode("Transform");
//Empty Transform
Shape Shape349 = createNode("Shape");
Shape349.USE = "HAnimJointShape";
Transform348.child = new undefined();

Transform348.child[0] = Shape349;

Transform347.children = new MFNode();

Transform347.children[0] = Transform348;

HAnimSegment346.children = new MFNode();

HAnimSegment346.children[0] = Transform347;

Shape Shape350 = createNode("Shape");
LineSet LineSet351 = createNode("LineSet");
LineSet351.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate352 = createNode("Coordinate");
Coordinate352.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet351.coord = Coordinate352;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA353 = createNode("ColorRGBA");
ColorRGBA353.USE = "HAnimSegmentLineColorRGBA";
LineSet351.color = ColorRGBA353;

Shape350.geometry = LineSet351;

HAnimSegment346.children[1] = Shape350;

HAnimSite HAnimSite354 = createNode("HAnimSite");
HAnimSite354.name = "r_ulnar_styloid_pt";
HAnimSite354.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite354.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor355 = createNode("TouchSensor");
TouchSensor355.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite354.children = new MFNode();

HAnimSite354.children[0] = TouchSensor355;

Shape Shape356 = createNode("Shape");
Shape356.USE = "HAnimSiteShape";
HAnimSite354.children[1] = Shape356;

HAnimSegment346.children[2] = HAnimSite354;

HAnimJoint345.children = new MFNode();

HAnimJoint345.children[0] = HAnimSegment346;

HAnimJoint HAnimJoint357 = createNode("HAnimJoint");
HAnimJoint357.name = "r_radiocarpal";
HAnimJoint357.DEF = "hanim_r_radiocarpal";
HAnimJoint357.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint357.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint357.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint345.children[1] = HAnimJoint357;

HAnimJoint324.children[1] = HAnimJoint345;

HAnimJoint227.children[3] = HAnimJoint324;

HAnimJoint52.children[2] = HAnimJoint227;

HAnimHumanoid43.joints[1] = HAnimJoint52;

HAnimJoint HAnimJoint358 = createNode("HAnimJoint");
HAnimJoint358.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint358;

HAnimJoint HAnimJoint359 = createNode("HAnimJoint");
HAnimJoint359.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint359;

HAnimJoint HAnimJoint360 = createNode("HAnimJoint");
HAnimJoint360.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint360;

HAnimJoint HAnimJoint361 = createNode("HAnimJoint");
HAnimJoint361.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint361;

HAnimJoint HAnimJoint362 = createNode("HAnimJoint");
HAnimJoint362.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint362;

HAnimJoint HAnimJoint363 = createNode("HAnimJoint");
HAnimJoint363.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[7] = HAnimJoint363;

HAnimJoint HAnimJoint364 = createNode("HAnimJoint");
HAnimJoint364.USE = "hanim_r_hip";
HAnimHumanoid43.joints[8] = HAnimJoint364;

HAnimJoint HAnimJoint365 = createNode("HAnimJoint");
HAnimJoint365.USE = "hanim_r_knee";
HAnimHumanoid43.joints[9] = HAnimJoint365;

HAnimJoint HAnimJoint366 = createNode("HAnimJoint");
HAnimJoint366.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[10] = HAnimJoint366;

HAnimJoint HAnimJoint367 = createNode("HAnimJoint");
HAnimJoint367.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[11] = HAnimJoint367;

HAnimJoint HAnimJoint368 = createNode("HAnimJoint");
HAnimJoint368.USE = "hanim_vl5";
HAnimHumanoid43.joints[12] = HAnimJoint368;

HAnimJoint HAnimJoint369 = createNode("HAnimJoint");
HAnimJoint369.USE = "hanim_skullbase";
HAnimHumanoid43.joints[13] = HAnimJoint369;

HAnimJoint HAnimJoint370 = createNode("HAnimJoint");
HAnimJoint370.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[14] = HAnimJoint370;

HAnimJoint HAnimJoint371 = createNode("HAnimJoint");
HAnimJoint371.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[15] = HAnimJoint371;

HAnimJoint HAnimJoint372 = createNode("HAnimJoint");
HAnimJoint372.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[16] = HAnimJoint372;

HAnimJoint HAnimJoint373 = createNode("HAnimJoint");
HAnimJoint373.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[17] = HAnimJoint373;

HAnimJoint HAnimJoint374 = createNode("HAnimJoint");
HAnimJoint374.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[18] = HAnimJoint374;

HAnimJoint HAnimJoint375 = createNode("HAnimJoint");
HAnimJoint375.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[19] = HAnimJoint375;

HAnimSegment HAnimSegment376 = createNode("HAnimSegment");
HAnimSegment376.USE = "hanim_sacrum";
HAnimHumanoid43.segments[20] = HAnimSegment376;

HAnimSegment HAnimSegment377 = createNode("HAnimSegment");
HAnimSegment377.USE = "hanim_pelvis";
HAnimHumanoid43.segments[21] = HAnimSegment377;

HAnimSegment HAnimSegment378 = createNode("HAnimSegment");
HAnimSegment378.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[22] = HAnimSegment378;

HAnimSegment HAnimSegment379 = createNode("HAnimSegment");
HAnimSegment379.USE = "hanim_l_calf";
HAnimHumanoid43.segments[23] = HAnimSegment379;

HAnimSegment HAnimSegment380 = createNode("HAnimSegment");
HAnimSegment380.USE = "hanim_l_talus";
HAnimHumanoid43.segments[24] = HAnimSegment380;

HAnimSegment HAnimSegment381 = createNode("HAnimSegment");
HAnimSegment381.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[25] = HAnimSegment381;

HAnimSegment HAnimSegment382 = createNode("HAnimSegment");
HAnimSegment382.USE = "hanim_r_calf";
HAnimHumanoid43.segments[26] = HAnimSegment382;

HAnimSegment HAnimSegment383 = createNode("HAnimSegment");
HAnimSegment383.USE = "hanim_r_talus";
HAnimHumanoid43.segments[27] = HAnimSegment383;

HAnimSegment HAnimSegment384 = createNode("HAnimSegment");
HAnimSegment384.USE = "hanim_l5";
HAnimHumanoid43.segments[28] = HAnimSegment384;

HAnimSegment HAnimSegment385 = createNode("HAnimSegment");
HAnimSegment385.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[29] = HAnimSegment385;

HAnimSegment HAnimSegment386 = createNode("HAnimSegment");
HAnimSegment386.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[30] = HAnimSegment386;

HAnimSegment HAnimSegment387 = createNode("HAnimSegment");
HAnimSegment387.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[31] = HAnimSegment387;

HAnimSegment HAnimSegment388 = createNode("HAnimSegment");
HAnimSegment388.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[32] = HAnimSegment388;

HAnimSite HAnimSite389 = createNode("HAnimSite");
HAnimSite389.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid43.viewpoints[33] = HAnimSite389;

HAnimSite HAnimSite390 = createNode("HAnimSite");
HAnimSite390.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[34] = HAnimSite390;

HAnimSite HAnimSite391 = createNode("HAnimSite");
HAnimSite391.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[35] = HAnimSite391;

HAnimSite HAnimSite392 = createNode("HAnimSite");
HAnimSite392.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[36] = HAnimSite392;

HAnimSite HAnimSite393 = createNode("HAnimSite");
HAnimSite393.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[37] = HAnimSite393;

HAnimSite HAnimSite394 = createNode("HAnimSite");
HAnimSite394.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[38] = HAnimSite394;

HAnimSite HAnimSite395 = createNode("HAnimSite");
HAnimSite395.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[39] = HAnimSite395;

HAnimSite HAnimSite396 = createNode("HAnimSite");
HAnimSite396.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[40] = HAnimSite396;

HAnimSite HAnimSite397 = createNode("HAnimSite");
HAnimSite397.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[41] = HAnimSite397;

HAnimSite HAnimSite398 = createNode("HAnimSite");
HAnimSite398.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[42] = HAnimSite398;

HAnimSite HAnimSite399 = createNode("HAnimSite");
HAnimSite399.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[43] = HAnimSite399;

HAnimSite HAnimSite400 = createNode("HAnimSite");
HAnimSite400.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid43.viewpoints[44] = HAnimSite400;

HAnimSite HAnimSite401 = createNode("HAnimSite");
HAnimSite401.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[45] = HAnimSite401;

HAnimSite HAnimSite402 = createNode("HAnimSite");
HAnimSite402.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[46] = HAnimSite402;

HAnimSite HAnimSite403 = createNode("HAnimSite");
HAnimSite403.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[47] = HAnimSite403;

HAnimSite HAnimSite404 = createNode("HAnimSite");
HAnimSite404.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[48] = HAnimSite404;

HAnimSite HAnimSite405 = createNode("HAnimSite");
HAnimSite405.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid43.viewpoints[49] = HAnimSite405;

HAnimSite HAnimSite406 = createNode("HAnimSite");
HAnimSite406.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[50] = HAnimSite406;

HAnimSite HAnimSite407 = createNode("HAnimSite");
HAnimSite407.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[51] = HAnimSite407;

HAnimSite HAnimSite408 = createNode("HAnimSite");
HAnimSite408.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[52] = HAnimSite408;

HAnimSite HAnimSite409 = createNode("HAnimSite");
HAnimSite409.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid43.viewpoints[53] = HAnimSite409;

HAnimSite HAnimSite410 = createNode("HAnimSite");
HAnimSite410.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[54] = HAnimSite410;

HAnimSite HAnimSite411 = createNode("HAnimSite");
HAnimSite411.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[55] = HAnimSite411;

HAnimSite HAnimSite412 = createNode("HAnimSite");
HAnimSite412.USE = "hanim_l_tibiale_pt";
HAnimHumanoid43.viewpoints[56] = HAnimSite412;

HAnimSite HAnimSite413 = createNode("HAnimSite");
HAnimSite413.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[57] = HAnimSite413;

HAnimSite HAnimSite414 = createNode("HAnimSite");
HAnimSite414.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[58] = HAnimSite414;

HAnimSite HAnimSite415 = createNode("HAnimSite");
HAnimSite415.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[59] = HAnimSite415;

HAnimSite HAnimSite416 = createNode("HAnimSite");
HAnimSite416.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[60] = HAnimSite416;

HAnimSite HAnimSite417 = createNode("HAnimSite");
HAnimSite417.USE = "hanim_r_tibiale_pt";
HAnimHumanoid43.viewpoints[61] = HAnimSite417;

HAnimSite HAnimSite418 = createNode("HAnimSite");
HAnimSite418.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[62] = HAnimSite418;

HAnimSite HAnimSite419 = createNode("HAnimSite");
HAnimSite419.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[63] = HAnimSite419;

HAnimSite HAnimSite420 = createNode("HAnimSite");
HAnimSite420.USE = "hanim_glabella_pt";
HAnimHumanoid43.viewpoints[64] = HAnimSite420;

HAnimSite HAnimSite421 = createNode("HAnimSite");
HAnimSite421.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid43.viewpoints[65] = HAnimSite421;

HAnimSite HAnimSite422 = createNode("HAnimSite");
HAnimSite422.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[66] = HAnimSite422;

HAnimSite HAnimSite423 = createNode("HAnimSite");
HAnimSite423.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[67] = HAnimSite423;

HAnimSite HAnimSite424 = createNode("HAnimSite");
HAnimSite424.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[68] = HAnimSite424;

HAnimSite HAnimSite425 = createNode("HAnimSite");
HAnimSite425.USE = "hanim_opisthocranion_pt";
HAnimHumanoid43.viewpoints[69] = HAnimSite425;

HAnimSite HAnimSite426 = createNode("HAnimSite");
HAnimSite426.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid43.viewpoints[70] = HAnimSite426;

HAnimSite HAnimSite427 = createNode("HAnimSite");
HAnimSite427.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[71] = HAnimSite427;

HAnimSite HAnimSite428 = createNode("HAnimSite");
HAnimSite428.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[72] = HAnimSite428;

HAnimSite HAnimSite429 = createNode("HAnimSite");
HAnimSite429.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[73] = HAnimSite429;

HAnimSite HAnimSite430 = createNode("HAnimSite");
HAnimSite430.USE = "hanim_skull_vertex_pt";
HAnimHumanoid43.viewpoints[74] = HAnimSite430;

HAnimSite HAnimSite431 = createNode("HAnimSite");
HAnimSite431.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid43.viewpoints[75] = HAnimSite431;

HAnimSite HAnimSite432 = createNode("HAnimSite");
HAnimSite432.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[76] = HAnimSite432;

HAnimSite HAnimSite433 = createNode("HAnimSite");
HAnimSite433.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid43.viewpoints[77] = HAnimSite433;

HAnimSite HAnimSite434 = createNode("HAnimSite");
HAnimSite434.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[78] = HAnimSite434;

HAnimSite HAnimSite435 = createNode("HAnimSite");
HAnimSite435.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[79] = HAnimSite435;

HAnimSite HAnimSite436 = createNode("HAnimSite");
HAnimSite436.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[80] = HAnimSite436;

HAnimSite HAnimSite437 = createNode("HAnimSite");
HAnimSite437.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[81] = HAnimSite437;

HAnimSite HAnimSite438 = createNode("HAnimSite");
HAnimSite438.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[82] = HAnimSite438;

HAnimSite HAnimSite439 = createNode("HAnimSite");
HAnimSite439.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[83] = HAnimSite439;

HAnimSite HAnimSite440 = createNode("HAnimSite");
HAnimSite440.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[84] = HAnimSite440;

HAnimSite HAnimSite441 = createNode("HAnimSite");
HAnimSite441.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[85] = HAnimSite441;

HAnimSite HAnimSite442 = createNode("HAnimSite");
HAnimSite442.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[86] = HAnimSite442;

HAnimSite HAnimSite443 = createNode("HAnimSite");
HAnimSite443.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[87] = HAnimSite443;

HAnimSite HAnimSite444 = createNode("HAnimSite");
HAnimSite444.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[88] = HAnimSite444;

children[4] = HAnimHumanoid43;

}
