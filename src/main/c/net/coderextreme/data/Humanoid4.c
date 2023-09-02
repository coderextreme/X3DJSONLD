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
meta3.content = "Humanoid4.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4.x3d";
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
Coordinate181.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097]);
LineSet180.coord = Coordinate181;

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA ColorRGBA182 = createNode("ColorRGBA");
ColorRGBA182.USE = "HAnimSegmentLineColorRGBA";
LineSet180.color = ColorRGBA182;

Shape179.geometry = LineSet180;

HAnimSegment175.children[1] = Shape179;

Shape Shape183 = createNode("Shape");
LineSet LineSet184 = createNode("LineSet");
LineSet184.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate185 = createNode("Coordinate");
Coordinate185.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278]);
LineSet184.coord = Coordinate185;

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA ColorRGBA186 = createNode("ColorRGBA");
ColorRGBA186.USE = "HAnimSegmentLineColorRGBA";
LineSet184.color = ColorRGBA186;

Shape183.geometry = LineSet184;

HAnimSegment175.children[2] = Shape183;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.name = "l_talocalcaneonavicular";
HAnimJoint187.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint187.center = new SFVec3f(new float[0.0781,0.0283,-0.097]);
HAnimJoint187.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint187.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment188 = createNode("HAnimSegment");
HAnimSegment188.name = "l_navicular";
HAnimSegment188.DEF = "hanim_l_navicular";
Transform Transform189 = createNode("Transform");
Transform189.translation = new SFVec3f(new float[0.0781,0.0283,-0.097]);
Transform Transform190 = createNode("Transform");
//Empty Transform
Shape Shape191 = createNode("Shape");
Shape191.USE = "HAnimJointShape";
Transform190.child = new undefined();

Transform190.child[0] = Shape191;

Transform189.children = new MFNode();

Transform189.children[0] = Transform190;

HAnimSegment188.children = new MFNode();

HAnimSegment188.children[0] = Transform189;

Shape Shape192 = createNode("Shape");
LineSet LineSet193 = createNode("LineSet");
LineSet193.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate194 = createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835]);
LineSet193.coord = Coordinate194;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA ColorRGBA195 = createNode("ColorRGBA");
ColorRGBA195.USE = "HAnimSegmentLineColorRGBA";
LineSet193.color = ColorRGBA195;

Shape192.geometry = LineSet193;

HAnimSegment188.children[1] = Shape192;

Shape Shape196 = createNode("Shape");
LineSet LineSet197 = createNode("LineSet");
LineSet197.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate198 = createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0812,0.025,-0.0805]);
LineSet197.coord = Coordinate198;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA ColorRGBA199 = createNode("ColorRGBA");
ColorRGBA199.USE = "HAnimSegmentLineColorRGBA";
LineSet197.color = ColorRGBA199;

Shape196.geometry = LineSet197;

HAnimSegment188.children[2] = Shape196;

Shape Shape200 = createNode("Shape");
LineSet LineSet201 = createNode("LineSet");
LineSet201.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate202 = createNode("Coordinate");
Coordinate202.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821]);
LineSet201.coord = Coordinate202;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA ColorRGBA203 = createNode("ColorRGBA");
ColorRGBA203.USE = "HAnimSegmentLineColorRGBA";
LineSet201.color = ColorRGBA203;

Shape200.geometry = LineSet201;

HAnimSegment188.children[3] = Shape200;

HAnimJoint187.children = new MFNode();

HAnimJoint187.children[0] = HAnimSegment188;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.name = "l_cuneonavicular_1";
HAnimJoint204.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint204.center = new SFVec3f(new float[0.0672,0.0235,-0.0835]);
HAnimJoint204.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint204.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment205 = createNode("HAnimSegment");
HAnimSegment205.name = "l_cuneiform_1";
HAnimSegment205.DEF = "hanim_l_cuneiform_1";
Transform Transform206 = createNode("Transform");
Transform206.translation = new SFVec3f(new float[0.0672,0.0235,-0.0835]);
Transform Transform207 = createNode("Transform");
//Empty Transform
Shape Shape208 = createNode("Shape");
Shape208.USE = "HAnimJointShape";
Transform207.child = new undefined();

Transform207.child[0] = Shape208;

Transform206.children = new MFNode();

Transform206.children[0] = Transform207;

HAnimSegment205.children = new MFNode();

HAnimSegment205.children[0] = Transform206;

Shape Shape209 = createNode("Shape");
LineSet LineSet210 = createNode("LineSet");
LineSet210.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate211 = createNode("Coordinate");
Coordinate211.point = new MFVec3f(new float[0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577]);
LineSet210.coord = Coordinate211;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA ColorRGBA212 = createNode("ColorRGBA");
ColorRGBA212.USE = "HAnimSegmentLineColorRGBA";
LineSet210.color = ColorRGBA212;

Shape209.geometry = LineSet210;

HAnimSegment205.children[1] = Shape209;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.name = "l_tarsometatarsal_1";
HAnimJoint213.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint213.center = new SFVec3f(new float[0.0644,0.0147,-0.0577]);
HAnimJoint213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment214 = createNode("HAnimSegment");
HAnimSegment214.name = "l_metatarsal_1";
HAnimSegment214.DEF = "hanim_l_metatarsal_1";
Transform Transform215 = createNode("Transform");
Transform215.translation = new SFVec3f(new float[0.0644,0.0147,-0.0577]);
Transform Transform216 = createNode("Transform");
//Empty Transform
Shape Shape217 = createNode("Shape");
Shape217.USE = "HAnimJointShape";
Transform216.child = new undefined();

Transform216.child[0] = Shape217;

Transform215.children = new MFNode();

Transform215.children[0] = Transform216;

HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = Transform215;

Shape Shape218 = createNode("Shape");
LineSet LineSet219 = createNode("LineSet");
LineSet219.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate220 = createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083]);
LineSet219.coord = Coordinate220;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA ColorRGBA221 = createNode("ColorRGBA");
ColorRGBA221.USE = "HAnimSegmentLineColorRGBA";
LineSet219.color = ColorRGBA221;

Shape218.geometry = LineSet219;

HAnimSegment214.children[1] = Shape218;

HAnimSite HAnimSite222 = createNode("HAnimSite");
HAnimSite222.name = "l_metatarsal_phalanx_1_pt";
HAnimSite222.DEF = "hanim_l_metatarsal_phalanx_1_pt";
TouchSensor TouchSensor223 = createNode("TouchSensor");
TouchSensor223.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite222.children = new MFNode();

HAnimSite222.children[0] = TouchSensor223;

Shape Shape224 = createNode("Shape");
Shape224.USE = "HAnimSiteShape";
HAnimSite222.children[1] = Shape224;

HAnimSegment214.children[2] = HAnimSite222;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

HAnimJoint HAnimJoint225 = createNode("HAnimJoint");
HAnimJoint225.name = "l_metatarsophalangeal_1";
HAnimJoint225.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint225.center = new SFVec3f(new float[0.0619,0.0059,-0.0083]);
HAnimJoint225.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint225.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment226 = createNode("HAnimSegment");
HAnimSegment226.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment226.DEF = "hanim_l_tarsal_proximal_phalanx_1";
Transform Transform227 = createNode("Transform");
Transform227.translation = new SFVec3f(new float[0.0619,0.0059,-0.0083]);
Transform Transform228 = createNode("Transform");
//Empty Transform
Shape Shape229 = createNode("Shape");
Shape229.USE = "HAnimJointShape";
Transform228.child = new undefined();

Transform228.child[0] = Shape229;

Transform227.children = new MFNode();

Transform227.children[0] = Transform228;

HAnimSegment226.children = new MFNode();

HAnimSegment226.children[0] = Transform227;

Shape Shape230 = createNode("Shape");
LineSet LineSet231 = createNode("LineSet");
LineSet231.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate232 = createNode("Coordinate");
Coordinate232.point = new MFVec3f(new float[0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083]);
LineSet231.coord = Coordinate232;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA233 = createNode("ColorRGBA");
ColorRGBA233.USE = "HAnimSegmentLineColorRGBA";
LineSet231.color = ColorRGBA233;

Shape230.geometry = LineSet231;

HAnimSegment226.children[1] = Shape230;

HAnimSite HAnimSite234 = createNode("HAnimSite");
HAnimSite234.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite234.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor235 = createNode("TouchSensor");
TouchSensor235.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite234.children = new MFNode();

HAnimSite234.children[0] = TouchSensor235;

Shape Shape236 = createNode("Shape");
Shape236.USE = "HAnimSiteShape";
HAnimSite234.children[1] = Shape236;

HAnimSegment226.children[2] = HAnimSite234;

HAnimJoint225.children = new MFNode();

HAnimJoint225.children[0] = HAnimSegment226;

HAnimJoint HAnimJoint237 = createNode("HAnimJoint");
HAnimJoint237.name = "l_tarsal_interphalangeal_1";
HAnimJoint237.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint237.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint237.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint225.children[1] = HAnimJoint237;

HAnimJoint213.children[1] = HAnimJoint225;

HAnimJoint204.children[1] = HAnimJoint213;

HAnimJoint187.children[1] = HAnimJoint204;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.name = "l_cuneonavicular_2";
HAnimJoint238.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint238.center = new SFVec3f(new float[0.0812,0.025,-0.0805]);
HAnimJoint238.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint238.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment239 = createNode("HAnimSegment");
HAnimSegment239.name = "l_cuneiform_2";
HAnimSegment239.DEF = "hanim_l_cuneiform_2";
Transform Transform240 = createNode("Transform");
Transform240.translation = new SFVec3f(new float[0.0812,0.025,-0.0805]);
Transform Transform241 = createNode("Transform");
//Empty Transform
Shape Shape242 = createNode("Shape");
Shape242.USE = "HAnimJointShape";
Transform241.child = new undefined();

Transform241.child[0] = Shape242;

Transform240.children = new MFNode();

Transform240.children[0] = Transform241;

HAnimSegment239.children = new MFNode();

HAnimSegment239.children[0] = Transform240;

Shape Shape243 = createNode("Shape");
LineSet LineSet244 = createNode("LineSet");
LineSet244.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate245 = createNode("Coordinate");
Coordinate245.point = new MFVec3f(new float[0.0812,0.025,-0.0805,0.08,0.0175,-0.0608]);
LineSet244.coord = Coordinate245;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA246 = createNode("ColorRGBA");
ColorRGBA246.USE = "HAnimSegmentLineColorRGBA";
LineSet244.color = ColorRGBA246;

Shape243.geometry = LineSet244;

HAnimSegment239.children[1] = Shape243;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

HAnimJoint HAnimJoint247 = createNode("HAnimJoint");
HAnimJoint247.name = "l_tarsometatarsal_2";
HAnimJoint247.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint247.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
HAnimJoint247.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint247.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment248 = createNode("HAnimSegment");
HAnimSegment248.name = "l_metatarsal_2";
HAnimSegment248.DEF = "hanim_l_metatarsal_2";
Transform Transform249 = createNode("Transform");
Transform249.translation = new SFVec3f(new float[0.08,0.0175,-0.0608]);
Transform Transform250 = createNode("Transform");
//Empty Transform
Shape Shape251 = createNode("Shape");
Shape251.USE = "HAnimJointShape";
Transform250.child = new undefined();

Transform250.child[0] = Shape251;

Transform249.children = new MFNode();

Transform249.children[0] = Transform250;

HAnimSegment248.children = new MFNode();

HAnimSegment248.children[0] = Transform249;

Shape Shape252 = createNode("Shape");
LineSet LineSet253 = createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate254 = createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
LineSet253.coord = Coordinate254;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA255 = createNode("ColorRGBA");
ColorRGBA255.USE = "HAnimSegmentLineColorRGBA";
LineSet253.color = ColorRGBA255;

Shape252.geometry = LineSet253;

HAnimSegment248.children[1] = Shape252;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

HAnimJoint HAnimJoint256 = createNode("HAnimJoint");
HAnimJoint256.name = "l_metatarsophalangeal_2";
HAnimJoint256.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint256.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint256.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment257 = createNode("HAnimSegment");
HAnimSegment257.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment257.DEF = "hanim_l_tarsal_proximal_phalanx_2";
Transform Transform258 = createNode("Transform");
Transform258.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
Transform Transform259 = createNode("Transform");
//Empty Transform
Shape Shape260 = createNode("Shape");
Shape260.USE = "HAnimJointShape";
Transform259.child = new undefined();

Transform259.child[0] = Shape260;

Transform258.children = new MFNode();

Transform258.children[0] = Transform259;

HAnimSegment257.children = new MFNode();

HAnimSegment257.children[0] = Transform258;

Shape Shape261 = createNode("Shape");
LineSet LineSet262 = createNode("LineSet");
LineSet262.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate263 = createNode("Coordinate");
Coordinate263.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0041,0.0121]);
LineSet262.coord = Coordinate263;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA264 = createNode("ColorRGBA");
ColorRGBA264.USE = "HAnimSegmentLineColorRGBA";
LineSet262.color = ColorRGBA264;

Shape261.geometry = LineSet262;

HAnimSegment257.children[1] = Shape261;

HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

HAnimJoint HAnimJoint265 = createNode("HAnimJoint");
HAnimJoint265.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint265.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint265.center = new SFVec3f(new float[0.0841,0.0041,0.0121]);
HAnimJoint265.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint265.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment266 = createNode("HAnimSegment");
HAnimSegment266.name = "l_tarsal_middle_phalanx_2";
HAnimSegment266.DEF = "hanim_l_tarsal_middle_phalanx_2";
Transform Transform267 = createNode("Transform");
Transform267.translation = new SFVec3f(new float[0.0841,0.0041,0.0121]);
Transform Transform268 = createNode("Transform");
//Empty Transform
Shape Shape269 = createNode("Shape");
Shape269.USE = "HAnimJointShape";
Transform268.child = new undefined();

Transform268.child[0] = Shape269;

Transform267.children = new MFNode();

Transform267.children[0] = Transform268;

HAnimSegment266.children = new MFNode();

HAnimSegment266.children[0] = Transform267;

Shape Shape270 = createNode("Shape");
LineSet LineSet271 = createNode("LineSet");
LineSet271.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate272 = createNode("Coordinate");
Coordinate272.point = new MFVec3f(new float[0.0841,0.0041,0.0121,0.0841,0.0013,0.0216]);
LineSet271.coord = Coordinate272;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA273 = createNode("ColorRGBA");
ColorRGBA273.USE = "HAnimSegmentLineColorRGBA";
LineSet271.color = ColorRGBA273;

Shape270.geometry = LineSet271;

HAnimSegment266.children[1] = Shape270;

HAnimSite HAnimSite274 = createNode("HAnimSite");
HAnimSite274.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite274.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite274.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor275 = createNode("TouchSensor");
TouchSensor275.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite274.children = new MFNode();

HAnimSite274.children[0] = TouchSensor275;

Shape Shape276 = createNode("Shape");
Shape276.USE = "HAnimSiteShape";
HAnimSite274.children[1] = Shape276;

HAnimSegment266.children[2] = HAnimSite274;

HAnimJoint265.children = new MFNode();

HAnimJoint265.children[0] = HAnimSegment266;

HAnimJoint HAnimJoint277 = createNode("HAnimJoint");
HAnimJoint277.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint277.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint277.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint277.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint277.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint265.children[1] = HAnimJoint277;

HAnimJoint256.children[1] = HAnimJoint265;

HAnimJoint247.children[1] = HAnimJoint256;

HAnimJoint238.children[1] = HAnimJoint247;

HAnimJoint187.children[2] = HAnimJoint238;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.name = "l_cuneonavicular_3";
HAnimJoint278.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint278.center = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
HAnimJoint278.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint278.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment279 = createNode("HAnimSegment");
HAnimSegment279.name = "l_cuneiform_3";
HAnimSegment279.DEF = "hanim_l_cuneiform_3";
Transform Transform280 = createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
Transform Transform281 = createNode("Transform");
//Empty Transform
Shape Shape282 = createNode("Shape");
Shape282.USE = "HAnimJointShape";
Transform281.child = new undefined();

Transform281.child[0] = Shape282;

Transform280.children = new MFNode();

Transform280.children[0] = Transform281;

HAnimSegment279.children = new MFNode();

HAnimSegment279.children[0] = Transform280;

Shape Shape283 = createNode("Shape");
LineSet LineSet284 = createNode("LineSet");
LineSet284.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate285 = createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[0.0928,0.0248,-0.0821,0.0841,0.0013,0.0216]);
LineSet284.coord = Coordinate285;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA ColorRGBA286 = createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSegmentLineColorRGBA";
LineSet284.color = ColorRGBA286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

HAnimJoint HAnimJoint287 = createNode("HAnimJoint");
HAnimJoint287.name = "l_tarsometatarsal_3";
HAnimJoint287.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint287.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint287.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment288 = createNode("HAnimSegment");
HAnimSegment288.name = "l_metatarsal_3";
HAnimSegment288.DEF = "hanim_l_metatarsal_3";
Transform Transform289 = createNode("Transform");
Transform289.translation = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
Transform Transform290 = createNode("Transform");
//Empty Transform
Shape Shape291 = createNode("Shape");
Shape291.USE = "HAnimJointShape";
Transform290.child = new undefined();

Transform290.child[0] = Shape291;

Transform289.children = new MFNode();

Transform289.children[0] = Transform290;

HAnimSegment288.children = new MFNode();

HAnimSegment288.children[0] = Transform289;

Shape Shape292 = createNode("Shape");
LineSet LineSet293 = createNode("LineSet");
LineSet293.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate294 = createNode("Coordinate");
Coordinate294.point = new MFVec3f(new float[0.0963,0.0065,-0.0065]);
LineSet293.coord = Coordinate294;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
ColorRGBA ColorRGBA295 = createNode("ColorRGBA");
ColorRGBA295.USE = "HAnimSegmentLineColorRGBA";
LineSet293.color = ColorRGBA295;

Shape292.geometry = LineSet293;

HAnimSegment288.children[1] = Shape292;

HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.name = "l_metatarsophalangeal_3";
HAnimJoint296.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint296.center = new SFVec3f(new float[0.0963,0.0065,-0.0065]);
HAnimJoint296.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint296.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment297 = createNode("HAnimSegment");
HAnimSegment297.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment297.DEF = "hanim_l_tarsal_proximal_phalanx_3";
Transform Transform298 = createNode("Transform");
Transform298.translation = new SFVec3f(new float[0.0963,0.0065,-0.0065]);
Transform Transform299 = createNode("Transform");
//Empty Transform
Shape Shape300 = createNode("Shape");
Shape300.USE = "HAnimJointShape";
Transform299.child = new undefined();

Transform299.child[0] = Shape300;

Transform298.children = new MFNode();

Transform298.children[0] = Transform299;

HAnimSegment297.children = new MFNode();

HAnimSegment297.children[0] = Transform298;

Shape Shape301 = createNode("Shape");
LineSet LineSet302 = createNode("LineSet");
LineSet302.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate303 = createNode("Coordinate");
Coordinate303.point = new MFVec3f(new float[0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086]);
LineSet302.coord = Coordinate303;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA304 = createNode("ColorRGBA");
ColorRGBA304.USE = "HAnimSegmentLineColorRGBA";
LineSet302.color = ColorRGBA304;

Shape301.geometry = LineSet302;

HAnimSegment297.children[1] = Shape301;

HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = HAnimSegment297;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint305.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint305.center = new SFVec3f(new float[0.0987,0.0034,0.0086]);
HAnimJoint305.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint305.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment306 = createNode("HAnimSegment");
HAnimSegment306.name = "l_tarsal_middle_phalanx_3";
HAnimSegment306.DEF = "hanim_l_tarsal_middle_phalanx_3";
Transform Transform307 = createNode("Transform");
Transform307.translation = new SFVec3f(new float[0.0987,0.0034,0.0086]);
Transform Transform308 = createNode("Transform");
//Empty Transform
Shape Shape309 = createNode("Shape");
Shape309.USE = "HAnimJointShape";
Transform308.child = new undefined();

Transform308.child[0] = Shape309;

Transform307.children = new MFNode();

Transform307.children[0] = Transform308;

HAnimSegment306.children = new MFNode();

HAnimSegment306.children[0] = Transform307;

Shape Shape310 = createNode("Shape");
LineSet LineSet311 = createNode("LineSet");
LineSet311.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate312 = createNode("Coordinate");
Coordinate312.point = new MFVec3f(new float[0.0987,0.0034,0.0086,0.1002,0.0013,0.0178]);
LineSet311.coord = Coordinate312;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA313 = createNode("ColorRGBA");
ColorRGBA313.USE = "HAnimSegmentLineColorRGBA";
LineSet311.color = ColorRGBA313;

Shape310.geometry = LineSet311;

HAnimSegment306.children[1] = Shape310;

HAnimSite HAnimSite314 = createNode("HAnimSite");
HAnimSite314.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite314.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor315 = createNode("TouchSensor");
TouchSensor315.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite314.children = new MFNode();

HAnimSite314.children[0] = TouchSensor315;

Shape Shape316 = createNode("Shape");
Shape316.USE = "HAnimSiteShape";
HAnimSite314.children[1] = Shape316;

HAnimSegment306.children[2] = HAnimSite314;

HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

HAnimJoint HAnimJoint317 = createNode("HAnimJoint");
HAnimJoint317.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint317.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint317.center = new SFVec3f(new float[0.1002,0.0013,0.0178]);
HAnimJoint317.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint317.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint305.children[1] = HAnimJoint317;

HAnimJoint296.children[1] = HAnimJoint305;

HAnimJoint287.children[1] = HAnimJoint296;

HAnimJoint278.children[1] = HAnimJoint287;

HAnimJoint187.children[3] = HAnimJoint278;

HAnimJoint174.children[1] = HAnimJoint187;

HAnimJoint HAnimJoint318 = createNode("HAnimJoint");
HAnimJoint318.name = "l_calcaneocuboid";
HAnimJoint318.DEF = "hanim_l_calcaneocuboid";
HAnimJoint318.center = new SFVec3f(new float[0.0889,0.0494,-0.1278]);
HAnimJoint318.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint318.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment319 = createNode("HAnimSegment");
HAnimSegment319.name = "l_calcaneus";
HAnimSegment319.DEF = "hanim_l_calcaneus";
Transform Transform320 = createNode("Transform");
Transform320.translation = new SFVec3f(new float[0.0889,0.0494,-0.1278]);
Transform Transform321 = createNode("Transform");
//Empty Transform
Shape Shape322 = createNode("Shape");
Shape322.USE = "HAnimJointShape";
Transform321.child = new undefined();

Transform321.child[0] = Shape322;

Transform320.children = new MFNode();

Transform320.children[0] = Transform321;

HAnimSegment319.children = new MFNode();

HAnimSegment319.children[0] = Transform320;

Shape Shape323 = createNode("Shape");
LineSet LineSet324 = createNode("LineSet");
LineSet324.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate325 = createNode("Coordinate");
Coordinate325.point = new MFVec3f(new float[0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998]);
LineSet324.coord = Coordinate325;

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA ColorRGBA326 = createNode("ColorRGBA");
ColorRGBA326.USE = "HAnimSegmentLineColorRGBA";
LineSet324.color = ColorRGBA326;

Shape323.geometry = LineSet324;

HAnimSegment319.children[1] = Shape323;

HAnimJoint318.children = new MFNode();

HAnimJoint318.children[0] = HAnimSegment319;

HAnimJoint HAnimJoint327 = createNode("HAnimJoint");
HAnimJoint327.name = "l_transversetarsal";
HAnimJoint327.DEF = "hanim_l_transversetarsal";
HAnimJoint327.center = new SFVec3f(new float[0.1105,0.0267,-0.0998]);
HAnimJoint327.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint327.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment328 = createNode("HAnimSegment");
HAnimSegment328.name = "l_cuboid";
HAnimSegment328.DEF = "hanim_l_cuboid";
Transform Transform329 = createNode("Transform");
Transform329.translation = new SFVec3f(new float[0.1105,0.0267,-0.0998]);
Transform Transform330 = createNode("Transform");
//Empty Transform
Shape Shape331 = createNode("Shape");
Shape331.USE = "HAnimJointShape";
Transform330.child = new undefined();

Transform330.child[0] = Shape331;

Transform329.children = new MFNode();

Transform329.children[0] = Transform330;

HAnimSegment328.children = new MFNode();

HAnimSegment328.children[0] = Transform329;

Shape Shape332 = createNode("Shape");
LineSet LineSet333 = createNode("LineSet");
LineSet333.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate334 = createNode("Coordinate");
Coordinate334.point = new MFVec3f(new float[0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634]);
LineSet333.coord = Coordinate334;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA ColorRGBA335 = createNode("ColorRGBA");
ColorRGBA335.USE = "HAnimSegmentLineColorRGBA";
LineSet333.color = ColorRGBA335;

Shape332.geometry = LineSet333;

HAnimSegment328.children[1] = Shape332;

Shape Shape336 = createNode("Shape");
LineSet LineSet337 = createNode("LineSet");
LineSet337.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate338 = createNode("Coordinate");
Coordinate338.point = new MFVec3f(new float[0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671]);
LineSet337.coord = Coordinate338;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA ColorRGBA339 = createNode("ColorRGBA");
ColorRGBA339.USE = "HAnimSegmentLineColorRGBA";
LineSet337.color = ColorRGBA339;

Shape336.geometry = LineSet337;

HAnimSegment328.children[2] = Shape336;

HAnimJoint327.children = new MFNode();

HAnimJoint327.children[0] = HAnimSegment328;

HAnimJoint HAnimJoint340 = createNode("HAnimJoint");
HAnimJoint340.name = "l_tarsometatarsal_4";
HAnimJoint340.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint340.center = new SFVec3f(new float[0.1063,0.016,-0.0634]);
HAnimJoint340.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint340.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment341 = createNode("HAnimSegment");
HAnimSegment341.name = "l_metatarsal_4";
HAnimSegment341.DEF = "hanim_l_metatarsal_4";
Transform Transform342 = createNode("Transform");
Transform342.translation = new SFVec3f(new float[0.1063,0.016,-0.0634]);
Transform Transform343 = createNode("Transform");
//Empty Transform
Shape Shape344 = createNode("Shape");
Shape344.USE = "HAnimJointShape";
Transform343.child = new undefined();

Transform343.child[0] = Shape344;

Transform342.children = new MFNode();

Transform342.children[0] = Transform343;

HAnimSegment341.children = new MFNode();

HAnimSegment341.children[0] = Transform342;

Shape Shape345 = createNode("Shape");
LineSet LineSet346 = createNode("LineSet");
LineSet346.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate347 = createNode("Coordinate");
Coordinate347.point = new MFVec3f(new float[0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107]);
LineSet346.coord = Coordinate347;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA ColorRGBA348 = createNode("ColorRGBA");
ColorRGBA348.USE = "HAnimSegmentLineColorRGBA";
LineSet346.color = ColorRGBA348;

Shape345.geometry = LineSet346;

HAnimSegment341.children[1] = Shape345;

HAnimJoint340.children = new MFNode();

HAnimJoint340.children[0] = HAnimSegment341;

HAnimJoint HAnimJoint349 = createNode("HAnimJoint");
HAnimJoint349.name = "l_metatarsophalangeal_4";
HAnimJoint349.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint349.center = new SFVec3f(new float[0.1097,0.0058,-0.0107]);
HAnimJoint349.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint349.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment350 = createNode("HAnimSegment");
HAnimSegment350.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment350.DEF = "hanim_l_tarsal_proximal_phalanx_4";
Transform Transform351 = createNode("Transform");
Transform351.translation = new SFVec3f(new float[0.1097,0.0058,-0.0107]);
Transform Transform352 = createNode("Transform");
//Empty Transform
Shape Shape353 = createNode("Shape");
Shape353.USE = "HAnimJointShape";
Transform352.child = new undefined();

Transform352.child[0] = Shape353;

Transform351.children = new MFNode();

Transform351.children[0] = Transform352;

HAnimSegment350.children = new MFNode();

HAnimSegment350.children[0] = Transform351;

Shape Shape354 = createNode("Shape");
LineSet LineSet355 = createNode("LineSet");
LineSet355.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate356 = createNode("Coordinate");
Coordinate356.point = new MFVec3f(new float[0.1097,0.0058,-0.0107,0.114,0.0037,0.0044]);
LineSet355.coord = Coordinate356;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA357 = createNode("ColorRGBA");
ColorRGBA357.USE = "HAnimSegmentLineColorRGBA";
LineSet355.color = ColorRGBA357;

Shape354.geometry = LineSet355;

HAnimSegment350.children[1] = Shape354;

HAnimJoint349.children = new MFNode();

HAnimJoint349.children[0] = HAnimSegment350;

HAnimJoint HAnimJoint358 = createNode("HAnimJoint");
HAnimJoint358.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint358.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint358.center = new SFVec3f(new float[0.114,0.0037,0.0044]);
HAnimJoint358.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint358.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment359 = createNode("HAnimSegment");
HAnimSegment359.name = "l_tarsal_middle_phalanx_4";
HAnimSegment359.DEF = "hanim_l_tarsal_middle_phalanx_4";
Transform Transform360 = createNode("Transform");
Transform360.translation = new SFVec3f(new float[0.114,0.0037,0.0044]);
Transform Transform361 = createNode("Transform");
//Empty Transform
Shape Shape362 = createNode("Shape");
Shape362.USE = "HAnimJointShape";
Transform361.child = new undefined();

Transform361.child[0] = Shape362;

Transform360.children = new MFNode();

Transform360.children[0] = Transform361;

HAnimSegment359.children = new MFNode();

HAnimSegment359.children[0] = Transform360;

Shape Shape363 = createNode("Shape");
LineSet LineSet364 = createNode("LineSet");
LineSet364.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate365 = createNode("Coordinate");
Coordinate365.point = new MFVec3f(new float[0.114,0.0037,0.0044,0.1155,0.0008,0.0118]);
LineSet364.coord = Coordinate365;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA366 = createNode("ColorRGBA");
ColorRGBA366.USE = "HAnimSegmentLineColorRGBA";
LineSet364.color = ColorRGBA366;

Shape363.geometry = LineSet364;

HAnimSegment359.children[1] = Shape363;

HAnimSite HAnimSite367 = createNode("HAnimSite");
HAnimSite367.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite367.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor368 = createNode("TouchSensor");
TouchSensor368.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite367.children = new MFNode();

HAnimSite367.children[0] = TouchSensor368;

Shape Shape369 = createNode("Shape");
Shape369.USE = "HAnimSiteShape";
HAnimSite367.children[1] = Shape369;

HAnimSegment359.children[2] = HAnimSite367;

HAnimJoint358.children = new MFNode();

HAnimJoint358.children[0] = HAnimSegment359;

HAnimJoint HAnimJoint370 = createNode("HAnimJoint");
HAnimJoint370.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint370.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint370.center = new SFVec3f(new float[0.1155,0.0008,0.0118]);
HAnimJoint370.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint370.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint358.children[1] = HAnimJoint370;

HAnimJoint349.children[1] = HAnimJoint358;

HAnimJoint340.children[1] = HAnimJoint349;

HAnimJoint327.children[1] = HAnimJoint340;

HAnimJoint HAnimJoint371 = createNode("HAnimJoint");
HAnimJoint371.name = "l_tarsometatarsal_5";
HAnimJoint371.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint371.center = new SFVec3f(new float[0.1206,0.0124,-0.0671]);
HAnimJoint371.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint371.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment372 = createNode("HAnimSegment");
HAnimSegment372.name = "l_metatarsal_5";
HAnimSegment372.DEF = "hanim_l_metatarsal_5";
Transform Transform373 = createNode("Transform");
Transform373.translation = new SFVec3f(new float[0.1206,0.0124,-0.0671]);
Transform Transform374 = createNode("Transform");
//Empty Transform
Shape Shape375 = createNode("Shape");
Shape375.USE = "HAnimJointShape";
Transform374.child = new undefined();

Transform374.child[0] = Shape375;

Transform373.children = new MFNode();

Transform373.children[0] = Transform374;

HAnimSegment372.children = new MFNode();

HAnimSegment372.children[0] = Transform373;

Shape Shape376 = createNode("Shape");
LineSet LineSet377 = createNode("LineSet");
LineSet377.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate378 = createNode("Coordinate");
Coordinate378.point = new MFVec3f(new float[0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153]);
LineSet377.coord = Coordinate378;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA ColorRGBA379 = createNode("ColorRGBA");
ColorRGBA379.USE = "HAnimSegmentLineColorRGBA";
LineSet377.color = ColorRGBA379;

Shape376.geometry = LineSet377;

HAnimSegment372.children[1] = Shape376;

HAnimSite HAnimSite380 = createNode("HAnimSite");
HAnimSite380.name = "l_metatarsal_phalanx_5_pt";
HAnimSite380.DEF = "hanim_l_metatarsal_phalanx_5_pt";
TouchSensor TouchSensor381 = createNode("TouchSensor");
TouchSensor381.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite380.children = new MFNode();

HAnimSite380.children[0] = TouchSensor381;

Shape Shape382 = createNode("Shape");
Shape382.USE = "HAnimSiteShape";
HAnimSite380.children[1] = Shape382;

HAnimSegment372.children[2] = HAnimSite380;

HAnimJoint371.children = new MFNode();

HAnimJoint371.children[0] = HAnimSegment372;

HAnimJoint HAnimJoint383 = createNode("HAnimJoint");
HAnimJoint383.name = "l_metatarsophalangeal_5";
HAnimJoint383.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint383.center = new SFVec3f(new float[0.1239,0.0051,-0.0153]);
HAnimJoint383.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint383.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment384 = createNode("HAnimSegment");
HAnimSegment384.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment384.DEF = "hanim_l_tarsal_proximal_phalanx_5";
Transform Transform385 = createNode("Transform");
Transform385.translation = new SFVec3f(new float[0.1239,0.0051,-0.0153]);
Transform Transform386 = createNode("Transform");
//Empty Transform
Shape Shape387 = createNode("Shape");
Shape387.USE = "HAnimJointShape";
Transform386.child = new undefined();

Transform386.child[0] = Shape387;

Transform385.children = new MFNode();

Transform385.children[0] = Transform386;

HAnimSegment384.children = new MFNode();

HAnimSegment384.children[0] = Transform385;

Shape Shape388 = createNode("Shape");
LineSet LineSet389 = createNode("LineSet");
LineSet389.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate390 = createNode("Coordinate");
Coordinate390.point = new MFVec3f(new float[0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077]);
LineSet389.coord = Coordinate390;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA391 = createNode("ColorRGBA");
ColorRGBA391.USE = "HAnimSegmentLineColorRGBA";
LineSet389.color = ColorRGBA391;

Shape388.geometry = LineSet389;

HAnimSegment384.children[1] = Shape388;

HAnimJoint383.children = new MFNode();

HAnimJoint383.children[0] = HAnimSegment384;

HAnimJoint HAnimJoint392 = createNode("HAnimJoint");
HAnimJoint392.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint392.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint392.center = new SFVec3f(new float[0.1262,0.0023,-0.0077]);
HAnimJoint392.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint392.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment393 = createNode("HAnimSegment");
HAnimSegment393.name = "l_tarsal_middle_phalanx_5";
HAnimSegment393.DEF = "hanim_l_tarsal_middle_phalanx_5";
Transform Transform394 = createNode("Transform");
Transform394.translation = new SFVec3f(new float[0.1262,0.0023,-0.0077]);
Transform Transform395 = createNode("Transform");
//Empty Transform
Shape Shape396 = createNode("Shape");
Shape396.USE = "HAnimJointShape";
Transform395.child = new undefined();

Transform395.child[0] = Shape396;

Transform394.children = new MFNode();

Transform394.children[0] = Transform395;

HAnimSegment393.children = new MFNode();

HAnimSegment393.children[0] = Transform394;

Shape Shape397 = createNode("Shape");
LineSet LineSet398 = createNode("LineSet");
LineSet398.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate399 = createNode("Coordinate");
Coordinate399.point = new MFVec3f(new float[0.1262,0.0023,-0.0077,0.1271,0,0]);
LineSet398.coord = Coordinate399;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA400 = createNode("ColorRGBA");
ColorRGBA400.USE = "HAnimSegmentLineColorRGBA";
LineSet398.color = ColorRGBA400;

Shape397.geometry = LineSet398;

HAnimSegment393.children[1] = Shape397;

HAnimSite HAnimSite401 = createNode("HAnimSite");
HAnimSite401.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite401.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor402 = createNode("TouchSensor");
TouchSensor402.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite401.children = new MFNode();

HAnimSite401.children[0] = TouchSensor402;

Shape Shape403 = createNode("Shape");
Shape403.USE = "HAnimSiteShape";
HAnimSite401.children[1] = Shape403;

HAnimSegment393.children[2] = HAnimSite401;

HAnimJoint392.children = new MFNode();

HAnimJoint392.children[0] = HAnimSegment393;

HAnimJoint HAnimJoint404 = createNode("HAnimJoint");
HAnimJoint404.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint404.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint404.center = new SFVec3f(new float[0.1271,0,0]);
HAnimJoint404.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint404.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint392.children[1] = HAnimJoint404;

HAnimJoint383.children[1] = HAnimJoint392;

HAnimJoint371.children[1] = HAnimJoint383;

HAnimJoint327.children[2] = HAnimJoint371;

HAnimJoint318.children[1] = HAnimJoint327;

HAnimJoint174.children[2] = HAnimJoint318;

HAnimJoint159.children[1] = HAnimJoint174;

HAnimJoint141.children[1] = HAnimJoint159;

HAnimJoint104.children[1] = HAnimJoint141;

HAnimJoint HAnimJoint405 = createNode("HAnimJoint");
HAnimJoint405.name = "r_hip";
HAnimJoint405.DEF = "hanim_r_hip";
HAnimJoint405.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint405.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint405.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment406 = createNode("HAnimSegment");
HAnimSegment406.name = "r_thigh";
HAnimSegment406.DEF = "hanim_r_thigh";
Transform Transform407 = createNode("Transform");
Transform407.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform408 = createNode("Transform");
//Empty Transform
Shape Shape409 = createNode("Shape");
Shape409.USE = "HAnimJointShape";
Transform408.child = new undefined();

Transform408.child[0] = Shape409;

Transform407.children = new MFNode();

Transform407.children[0] = Transform408;

HAnimSegment406.children = new MFNode();

HAnimSegment406.children[0] = Transform407;

Shape Shape410 = createNode("Shape");
LineSet LineSet411 = createNode("LineSet");
LineSet411.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate412 = createNode("Coordinate");
Coordinate412.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet411.coord = Coordinate412;

//from r_hip to r_knee vertices 2
ColorRGBA ColorRGBA413 = createNode("ColorRGBA");
ColorRGBA413.USE = "HAnimSegmentLineColorRGBA";
LineSet411.color = ColorRGBA413;

Shape410.geometry = LineSet411;

HAnimSegment406.children[1] = Shape410;

HAnimSite HAnimSite414 = createNode("HAnimSite");
HAnimSite414.name = "r_lateral_malleolus_pt";
HAnimSite414.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite414.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor415 = createNode("TouchSensor");
TouchSensor415.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite414.children = new MFNode();

HAnimSite414.children[0] = TouchSensor415;

Shape Shape416 = createNode("Shape");
Shape416.USE = "HAnimSiteShape";
HAnimSite414.children[1] = Shape416;

HAnimSegment406.children[2] = HAnimSite414;

HAnimSite HAnimSite417 = createNode("HAnimSite");
HAnimSite417.name = "r_medial_malleolus_pt";
HAnimSite417.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite417.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor418 = createNode("TouchSensor");
TouchSensor418.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite417.children = new MFNode();

HAnimSite417.children[0] = TouchSensor418;

Shape Shape419 = createNode("Shape");
Shape419.USE = "HAnimSiteShape";
HAnimSite417.children[1] = Shape419;

HAnimSegment406.children[3] = HAnimSite417;

HAnimSite HAnimSite420 = createNode("HAnimSite");
HAnimSite420.name = "r_tibiale_pt";
HAnimSite420.DEF = "hanim_r_tibiale_pt";
TouchSensor TouchSensor421 = createNode("TouchSensor");
TouchSensor421.description = "HAnimSite r_tibiale_pt";
HAnimSite420.children = new MFNode();

HAnimSite420.children[0] = TouchSensor421;

Shape Shape422 = createNode("Shape");
Shape422.USE = "HAnimSiteShape";
HAnimSite420.children[1] = Shape422;

HAnimSegment406.children[4] = HAnimSite420;

HAnimJoint405.children = new MFNode();

HAnimJoint405.children[0] = HAnimSegment406;

HAnimJoint HAnimJoint423 = createNode("HAnimJoint");
HAnimJoint423.name = "r_knee";
HAnimJoint423.DEF = "hanim_r_knee";
HAnimJoint423.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint423.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint423.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment424 = createNode("HAnimSegment");
HAnimSegment424.name = "r_calf";
HAnimSegment424.DEF = "hanim_r_calf";
Transform Transform425 = createNode("Transform");
Transform425.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform426 = createNode("Transform");
//Empty Transform
Shape Shape427 = createNode("Shape");
Shape427.USE = "HAnimJointShape";
Transform426.child = new undefined();

Transform426.child[0] = Shape427;

Transform425.children = new MFNode();

Transform425.children[0] = Transform426;

HAnimSegment424.children = new MFNode();

HAnimSegment424.children[0] = Transform425;

Shape Shape428 = createNode("Shape");
LineSet LineSet429 = createNode("LineSet");
LineSet429.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate430 = createNode("Coordinate");
Coordinate430.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet429.coord = Coordinate430;

//from r_knee to r_talocrural vertices 2
ColorRGBA ColorRGBA431 = createNode("ColorRGBA");
ColorRGBA431.USE = "HAnimSegmentLineColorRGBA";
LineSet429.color = ColorRGBA431;

Shape428.geometry = LineSet429;

HAnimSegment424.children[1] = Shape428;

HAnimSite HAnimSite432 = createNode("HAnimSite");
HAnimSite432.name = "r_calcaneus_posterior_pt";
HAnimSite432.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite432.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor433 = createNode("TouchSensor");
TouchSensor433.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite432.children = new MFNode();

HAnimSite432.children[0] = TouchSensor433;

Shape Shape434 = createNode("Shape");
Shape434.USE = "HAnimSiteShape";
HAnimSite432.children[1] = Shape434;

HAnimSegment424.children[2] = HAnimSite432;

HAnimSite HAnimSite435 = createNode("HAnimSite");
HAnimSite435.name = "r_sphyrion_pt";
HAnimSite435.DEF = "hanim_r_sphyrion_pt";
HAnimSite435.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor436 = createNode("TouchSensor");
TouchSensor436.description = "HAnimSite r_sphyrion_pt";
HAnimSite435.children = new MFNode();

HAnimSite435.children[0] = TouchSensor436;

Shape Shape437 = createNode("Shape");
Shape437.USE = "HAnimSiteShape";
HAnimSite435.children[1] = Shape437;

HAnimSegment424.children[3] = HAnimSite435;

HAnimJoint423.children = new MFNode();

HAnimJoint423.children[0] = HAnimSegment424;

HAnimJoint HAnimJoint438 = createNode("HAnimJoint");
HAnimJoint438.name = "r_talocrural";
HAnimJoint438.DEF = "hanim_r_talocrural";
HAnimJoint438.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint438.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint438.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment439 = createNode("HAnimSegment");
HAnimSegment439.name = "r_talus";
HAnimSegment439.DEF = "hanim_r_talus";
Transform Transform440 = createNode("Transform");
Transform440.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform440.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform440.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
Transform Transform441 = createNode("Transform");
//Empty Transform right foot
Shape Shape442 = createNode("Shape");
Shape442.USE = "HAnimJointShape";
Transform441.child = new undefined();

Transform441.child[0] = Shape442;

Transform440.children = new MFNode();

Transform440.children[0] = Transform441;

HAnimSegment439.children = new MFNode();

HAnimSegment439.children[0] = Transform440;

Shape Shape443 = createNode("Shape");
LineSet LineSet444 = createNode("LineSet");
LineSet444.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate445 = createNode("Coordinate");
Coordinate445.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097]);
LineSet444.coord = Coordinate445;

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA ColorRGBA446 = createNode("ColorRGBA");
ColorRGBA446.USE = "HAnimSegmentLineColorRGBA";
LineSet444.color = ColorRGBA446;

Shape443.geometry = LineSet444;

HAnimSegment439.children[1] = Shape443;

Shape Shape447 = createNode("Shape");
LineSet LineSet448 = createNode("LineSet");
LineSet448.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate449 = createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278]);
LineSet448.coord = Coordinate449;

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA ColorRGBA450 = createNode("ColorRGBA");
ColorRGBA450.USE = "HAnimSegmentLineColorRGBA";
LineSet448.color = ColorRGBA450;

Shape447.geometry = LineSet448;

HAnimSegment439.children[2] = Shape447;

HAnimJoint438.children = new MFNode();

HAnimJoint438.children[0] = HAnimSegment439;

HAnimJoint HAnimJoint451 = createNode("HAnimJoint");
HAnimJoint451.name = "r_talocalcaneonavicular";
HAnimJoint451.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint451.center = new SFVec3f(new float[-0.0781,0.0283,-0.097]);
HAnimJoint451.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint451.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment452 = createNode("HAnimSegment");
HAnimSegment452.name = "r_navicular";
HAnimSegment452.DEF = "hanim_r_navicular";
Transform Transform453 = createNode("Transform");
Transform453.translation = new SFVec3f(new float[-0.0781,0.0283,-0.097]);
Transform Transform454 = createNode("Transform");
//Empty Transform
Shape Shape455 = createNode("Shape");
Shape455.USE = "HAnimJointShape";
Transform454.child = new undefined();

Transform454.child[0] = Shape455;

Transform453.children = new MFNode();

Transform453.children[0] = Transform454;

HAnimSegment452.children = new MFNode();

HAnimSegment452.children[0] = Transform453;

Shape Shape456 = createNode("Shape");
LineSet LineSet457 = createNode("LineSet");
LineSet457.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate458 = createNode("Coordinate");
Coordinate458.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835]);
LineSet457.coord = Coordinate458;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA ColorRGBA459 = createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSegmentLineColorRGBA";
LineSet457.color = ColorRGBA459;

Shape456.geometry = LineSet457;

HAnimSegment452.children[1] = Shape456;

Shape Shape460 = createNode("Shape");
LineSet LineSet461 = createNode("LineSet");
LineSet461.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate462 = createNode("Coordinate");
Coordinate462.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805]);
LineSet461.coord = Coordinate462;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA ColorRGBA463 = createNode("ColorRGBA");
ColorRGBA463.USE = "HAnimSegmentLineColorRGBA";
LineSet461.color = ColorRGBA463;

Shape460.geometry = LineSet461;

HAnimSegment452.children[2] = Shape460;

Shape Shape464 = createNode("Shape");
LineSet LineSet465 = createNode("LineSet");
LineSet465.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate466 = createNode("Coordinate");
Coordinate466.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821]);
LineSet465.coord = Coordinate466;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA ColorRGBA467 = createNode("ColorRGBA");
ColorRGBA467.USE = "HAnimSegmentLineColorRGBA";
LineSet465.color = ColorRGBA467;

Shape464.geometry = LineSet465;

HAnimSegment452.children[3] = Shape464;

HAnimJoint451.children = new MFNode();

HAnimJoint451.children[0] = HAnimSegment452;

HAnimJoint HAnimJoint468 = createNode("HAnimJoint");
HAnimJoint468.name = "r_cuneonavicular_1";
HAnimJoint468.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint468.center = new SFVec3f(new float[-0.0672,0.0235,-0.0835]);
HAnimJoint468.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint468.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment469 = createNode("HAnimSegment");
HAnimSegment469.name = "r_cuneiform_1";
HAnimSegment469.DEF = "hanim_r_cuneiform_1";
Transform Transform470 = createNode("Transform");
Transform470.translation = new SFVec3f(new float[-0.0672,0.0235,-0.0835]);
Transform Transform471 = createNode("Transform");
//Empty Transform
Shape Shape472 = createNode("Shape");
Shape472.USE = "HAnimJointShape";
Transform471.child = new undefined();

Transform471.child[0] = Shape472;

Transform470.children = new MFNode();

Transform470.children[0] = Transform471;

HAnimSegment469.children = new MFNode();

HAnimSegment469.children[0] = Transform470;

Shape Shape473 = createNode("Shape");
LineSet LineSet474 = createNode("LineSet");
LineSet474.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate475 = createNode("Coordinate");
Coordinate475.point = new MFVec3f(new float[-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577]);
LineSet474.coord = Coordinate475;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA ColorRGBA476 = createNode("ColorRGBA");
ColorRGBA476.USE = "HAnimSegmentLineColorRGBA";
LineSet474.color = ColorRGBA476;

Shape473.geometry = LineSet474;

HAnimSegment469.children[1] = Shape473;

HAnimJoint468.children = new MFNode();

HAnimJoint468.children[0] = HAnimSegment469;

HAnimJoint HAnimJoint477 = createNode("HAnimJoint");
HAnimJoint477.name = "r_tarsometatarsal_1";
HAnimJoint477.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint477.center = new SFVec3f(new float[-0.0644,0.0147,-0.0577]);
HAnimJoint477.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint477.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment478 = createNode("HAnimSegment");
HAnimSegment478.name = "r_metatarsal_1";
HAnimSegment478.DEF = "hanim_r_metatarsal_1";
Transform Transform479 = createNode("Transform");
Transform479.translation = new SFVec3f(new float[-0.0644,0.0147,-0.0577]);
Transform Transform480 = createNode("Transform");
//Empty Transform
Shape Shape481 = createNode("Shape");
Shape481.USE = "HAnimJointShape";
Transform480.child = new undefined();

Transform480.child[0] = Shape481;

Transform479.children = new MFNode();

Transform479.children[0] = Transform480;

HAnimSegment478.children = new MFNode();

HAnimSegment478.children[0] = Transform479;

Shape Shape482 = createNode("Shape");
LineSet LineSet483 = createNode("LineSet");
LineSet483.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate484 = createNode("Coordinate");
Coordinate484.point = new MFVec3f(new float[-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083]);
LineSet483.coord = Coordinate484;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA ColorRGBA485 = createNode("ColorRGBA");
ColorRGBA485.USE = "HAnimSegmentLineColorRGBA";
LineSet483.color = ColorRGBA485;

Shape482.geometry = LineSet483;

HAnimSegment478.children[1] = Shape482;

HAnimSite HAnimSite486 = createNode("HAnimSite");
HAnimSite486.name = "r_metatarsal_phalanx_1_pt";
HAnimSite486.DEF = "hanim_r_metatarsal_phalanx_1_pt";
TouchSensor TouchSensor487 = createNode("TouchSensor");
TouchSensor487.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite486.children = new MFNode();

HAnimSite486.children[0] = TouchSensor487;

Shape Shape488 = createNode("Shape");
Shape488.USE = "HAnimSiteShape";
HAnimSite486.children[1] = Shape488;

HAnimSegment478.children[2] = HAnimSite486;

HAnimJoint477.children = new MFNode();

HAnimJoint477.children[0] = HAnimSegment478;

HAnimJoint HAnimJoint489 = createNode("HAnimJoint");
HAnimJoint489.name = "r_metatarsophalangeal_1";
HAnimJoint489.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint489.center = new SFVec3f(new float[-0.0619,0.0059,-0.0083]);
HAnimJoint489.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint489.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment490 = createNode("HAnimSegment");
HAnimSegment490.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment490.DEF = "hanim_r_tarsal_proximal_phalanx_1";
Transform Transform491 = createNode("Transform");
Transform491.translation = new SFVec3f(new float[-0.0619,0.0059,-0.0083]);
Transform Transform492 = createNode("Transform");
//Empty Transform
Shape Shape493 = createNode("Shape");
Shape493.USE = "HAnimJointShape";
Transform492.child = new undefined();

Transform492.child[0] = Shape493;

Transform491.children = new MFNode();

Transform491.children[0] = Transform492;

HAnimSegment490.children = new MFNode();

HAnimSegment490.children[0] = Transform491;

Shape Shape494 = createNode("Shape");
LineSet LineSet495 = createNode("LineSet");
LineSet495.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate496 = createNode("Coordinate");
Coordinate496.point = new MFVec3f(new float[-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083]);
LineSet495.coord = Coordinate496;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA497 = createNode("ColorRGBA");
ColorRGBA497.USE = "HAnimSegmentLineColorRGBA";
LineSet495.color = ColorRGBA497;

Shape494.geometry = LineSet495;

HAnimSegment490.children[1] = Shape494;

HAnimSite HAnimSite498 = createNode("HAnimSite");
HAnimSite498.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite498.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor499 = createNode("TouchSensor");
TouchSensor499.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite498.children = new MFNode();

HAnimSite498.children[0] = TouchSensor499;

Shape Shape500 = createNode("Shape");
Shape500.USE = "HAnimSiteShape";
HAnimSite498.children[1] = Shape500;

HAnimSegment490.children[2] = HAnimSite498;

HAnimJoint489.children = new MFNode();

HAnimJoint489.children[0] = HAnimSegment490;

HAnimJoint HAnimJoint501 = createNode("HAnimJoint");
HAnimJoint501.name = "r_tarsal_interphalangeal_1";
HAnimJoint501.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint501.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint501.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint489.children[1] = HAnimJoint501;

HAnimJoint477.children[1] = HAnimJoint489;

HAnimJoint468.children[1] = HAnimJoint477;

HAnimJoint451.children[1] = HAnimJoint468;

HAnimJoint HAnimJoint502 = createNode("HAnimJoint");
HAnimJoint502.name = "r_cuneonavicular_2";
HAnimJoint502.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint502.center = new SFVec3f(new float[-0.0812,0.025,-0.0805]);
HAnimJoint502.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint502.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment503 = createNode("HAnimSegment");
HAnimSegment503.name = "r_cuneiform_2";
HAnimSegment503.DEF = "hanim_r_cuneiform_2";
Transform Transform504 = createNode("Transform");
Transform504.translation = new SFVec3f(new float[-0.0812,0.025,-0.0805]);
Transform Transform505 = createNode("Transform");
//Empty Transform
Shape Shape506 = createNode("Shape");
Shape506.USE = "HAnimJointShape";
Transform505.child = new undefined();

Transform505.child[0] = Shape506;

Transform504.children = new MFNode();

Transform504.children[0] = Transform505;

HAnimSegment503.children = new MFNode();

HAnimSegment503.children[0] = Transform504;

Shape Shape507 = createNode("Shape");
LineSet LineSet508 = createNode("LineSet");
LineSet508.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate509 = createNode("Coordinate");
Coordinate509.point = new MFVec3f(new float[-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608]);
LineSet508.coord = Coordinate509;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA510 = createNode("ColorRGBA");
ColorRGBA510.USE = "HAnimSegmentLineColorRGBA";
LineSet508.color = ColorRGBA510;

Shape507.geometry = LineSet508;

HAnimSegment503.children[1] = Shape507;

HAnimJoint502.children = new MFNode();

HAnimJoint502.children[0] = HAnimSegment503;

HAnimJoint HAnimJoint511 = createNode("HAnimJoint");
HAnimJoint511.name = "r_tarsometatarsal_2";
HAnimJoint511.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint511.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
HAnimJoint511.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint511.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment512 = createNode("HAnimSegment");
HAnimSegment512.name = "r_metatarsal_2";
HAnimSegment512.DEF = "hanim_r_metatarsal_2";
Transform Transform513 = createNode("Transform");
Transform513.translation = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
Transform Transform514 = createNode("Transform");
//Empty Transform
Shape Shape515 = createNode("Shape");
Shape515.USE = "HAnimJointShape";
Transform514.child = new undefined();

Transform514.child[0] = Shape515;

Transform513.children = new MFNode();

Transform513.children[0] = Transform514;

HAnimSegment512.children = new MFNode();

HAnimSegment512.children[0] = Transform513;

Shape Shape516 = createNode("Shape");
LineSet LineSet517 = createNode("LineSet");
LineSet517.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate518 = createNode("Coordinate");
Coordinate518.point = new MFVec3f(new float[-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
LineSet517.coord = Coordinate518;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA519 = createNode("ColorRGBA");
ColorRGBA519.USE = "HAnimSegmentLineColorRGBA";
LineSet517.color = ColorRGBA519;

Shape516.geometry = LineSet517;

HAnimSegment512.children[1] = Shape516;

HAnimJoint511.children = new MFNode();

HAnimJoint511.children[0] = HAnimSegment512;

HAnimJoint HAnimJoint520 = createNode("HAnimJoint");
HAnimJoint520.name = "r_metatarsophalangeal_2";
HAnimJoint520.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint520.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint520.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint520.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment521 = createNode("HAnimSegment");
HAnimSegment521.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment521.DEF = "hanim_r_tarsal_proximal_phalanx_2";
Transform Transform522 = createNode("Transform");
Transform522.translation = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
Transform Transform523 = createNode("Transform");
//Empty Transform
Shape Shape524 = createNode("Shape");
Shape524.USE = "HAnimJointShape";
Transform523.child = new undefined();

Transform523.child[0] = Shape524;

Transform522.children = new MFNode();

Transform522.children[0] = Transform523;

HAnimSegment521.children = new MFNode();

HAnimSegment521.children[0] = Transform522;

Shape Shape525 = createNode("Shape");
LineSet LineSet526 = createNode("LineSet");
LineSet526.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate527 = createNode("Coordinate");
Coordinate527.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121]);
LineSet526.coord = Coordinate527;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA528 = createNode("ColorRGBA");
ColorRGBA528.USE = "HAnimSegmentLineColorRGBA";
LineSet526.color = ColorRGBA528;

Shape525.geometry = LineSet526;

HAnimSegment521.children[1] = Shape525;

HAnimJoint520.children = new MFNode();

HAnimJoint520.children[0] = HAnimSegment521;

HAnimJoint HAnimJoint529 = createNode("HAnimJoint");
HAnimJoint529.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint529.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint529.center = new SFVec3f(new float[-0.0841,0.0041,0.0121]);
HAnimJoint529.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint529.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment530 = createNode("HAnimSegment");
HAnimSegment530.name = "r_tarsal_middle_phalanx_2";
HAnimSegment530.DEF = "hanim_r_tarsal_middle_phalanx_2";
Transform Transform531 = createNode("Transform");
Transform531.translation = new SFVec3f(new float[-0.0841,0.0041,0.0121]);
Transform Transform532 = createNode("Transform");
//Empty Transform
Shape Shape533 = createNode("Shape");
Shape533.USE = "HAnimJointShape";
Transform532.child = new undefined();

Transform532.child[0] = Shape533;

Transform531.children = new MFNode();

Transform531.children[0] = Transform532;

HAnimSegment530.children = new MFNode();

HAnimSegment530.children[0] = Transform531;

Shape Shape534 = createNode("Shape");
LineSet LineSet535 = createNode("LineSet");
LineSet535.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate536 = createNode("Coordinate");
Coordinate536.point = new MFVec3f(new float[-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216]);
LineSet535.coord = Coordinate536;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA537 = createNode("ColorRGBA");
ColorRGBA537.USE = "HAnimSegmentLineColorRGBA";
LineSet535.color = ColorRGBA537;

Shape534.geometry = LineSet535;

HAnimSegment530.children[1] = Shape534;

HAnimSite HAnimSite538 = createNode("HAnimSite");
HAnimSite538.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite538.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite538.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor539 = createNode("TouchSensor");
TouchSensor539.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite538.children = new MFNode();

HAnimSite538.children[0] = TouchSensor539;

Shape Shape540 = createNode("Shape");
Shape540.USE = "HAnimSiteShape";
HAnimSite538.children[1] = Shape540;

HAnimSegment530.children[2] = HAnimSite538;

HAnimJoint529.children = new MFNode();

HAnimJoint529.children[0] = HAnimSegment530;

HAnimJoint HAnimJoint541 = createNode("HAnimJoint");
HAnimJoint541.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint541.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint541.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint541.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint541.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint529.children[1] = HAnimJoint541;

HAnimJoint520.children[1] = HAnimJoint529;

HAnimJoint511.children[1] = HAnimJoint520;

HAnimJoint502.children[1] = HAnimJoint511;

HAnimJoint451.children[2] = HAnimJoint502;

HAnimJoint HAnimJoint542 = createNode("HAnimJoint");
HAnimJoint542.name = "r_cuneonavicular_3";
HAnimJoint542.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint542.center = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
HAnimJoint542.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint542.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment543 = createNode("HAnimSegment");
HAnimSegment543.name = "r_cuneiform_3";
HAnimSegment543.DEF = "hanim_r_cuneiform_3";
Transform Transform544 = createNode("Transform");
Transform544.translation = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
Transform Transform545 = createNode("Transform");
//Empty Transform
Shape Shape546 = createNode("Shape");
Shape546.USE = "HAnimJointShape";
Transform545.child = new undefined();

Transform545.child[0] = Shape546;

Transform544.children = new MFNode();

Transform544.children[0] = Transform545;

HAnimSegment543.children = new MFNode();

HAnimSegment543.children[0] = Transform544;

Shape Shape547 = createNode("Shape");
LineSet LineSet548 = createNode("LineSet");
LineSet548.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate549 = createNode("Coordinate");
Coordinate549.point = new MFVec3f(new float[-0.0928,0.0248,-0.0821,-0.0841,0.0013,0.0216]);
LineSet548.coord = Coordinate549;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA ColorRGBA550 = createNode("ColorRGBA");
ColorRGBA550.USE = "HAnimSegmentLineColorRGBA";
LineSet548.color = ColorRGBA550;

Shape547.geometry = LineSet548;

HAnimSegment543.children[1] = Shape547;

HAnimJoint542.children = new MFNode();

HAnimJoint542.children[0] = HAnimSegment543;

HAnimJoint HAnimJoint551 = createNode("HAnimJoint");
HAnimJoint551.name = "r_tarsometatarsal_3";
HAnimJoint551.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint551.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint551.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment552 = createNode("HAnimSegment");
HAnimSegment552.name = "r_metatarsal_3";
HAnimSegment552.DEF = "hanim_r_metatarsal_3";
Transform Transform553 = createNode("Transform");
Transform553.translation = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
Transform Transform554 = createNode("Transform");
//Empty Transform
Shape Shape555 = createNode("Shape");
Shape555.USE = "HAnimJointShape";
Transform554.child = new undefined();

Transform554.child[0] = Shape555;

Transform553.children = new MFNode();

Transform553.children[0] = Transform554;

HAnimSegment552.children = new MFNode();

HAnimSegment552.children[0] = Transform553;

Shape Shape556 = createNode("Shape");
LineSet LineSet557 = createNode("LineSet");
LineSet557.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate558 = createNode("Coordinate");
Coordinate558.point = new MFVec3f(new float[-0.0963,0.0065,-0.0065]);
LineSet557.coord = Coordinate558;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
ColorRGBA ColorRGBA559 = createNode("ColorRGBA");
ColorRGBA559.USE = "HAnimSegmentLineColorRGBA";
LineSet557.color = ColorRGBA559;

Shape556.geometry = LineSet557;

HAnimSegment552.children[1] = Shape556;

HAnimJoint551.children = new MFNode();

HAnimJoint551.children[0] = HAnimSegment552;

HAnimJoint HAnimJoint560 = createNode("HAnimJoint");
HAnimJoint560.name = "r_metatarsophalangeal_3";
HAnimJoint560.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint560.center = new SFVec3f(new float[-0.0963,0.0065,-0.0065]);
HAnimJoint560.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint560.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment561 = createNode("HAnimSegment");
HAnimSegment561.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment561.DEF = "hanim_r_tarsal_proximal_phalanx_3";
Transform Transform562 = createNode("Transform");
Transform562.translation = new SFVec3f(new float[-0.0963,0.0065,-0.0065]);
Transform Transform563 = createNode("Transform");
//Empty Transform
Shape Shape564 = createNode("Shape");
Shape564.USE = "HAnimJointShape";
Transform563.child = new undefined();

Transform563.child[0] = Shape564;

Transform562.children = new MFNode();

Transform562.children[0] = Transform563;

HAnimSegment561.children = new MFNode();

HAnimSegment561.children[0] = Transform562;

Shape Shape565 = createNode("Shape");
LineSet LineSet566 = createNode("LineSet");
LineSet566.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate567 = createNode("Coordinate");
Coordinate567.point = new MFVec3f(new float[-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086]);
LineSet566.coord = Coordinate567;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA568 = createNode("ColorRGBA");
ColorRGBA568.USE = "HAnimSegmentLineColorRGBA";
LineSet566.color = ColorRGBA568;

Shape565.geometry = LineSet566;

HAnimSegment561.children[1] = Shape565;

HAnimJoint560.children = new MFNode();

HAnimJoint560.children[0] = HAnimSegment561;

HAnimJoint HAnimJoint569 = createNode("HAnimJoint");
HAnimJoint569.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint569.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint569.center = new SFVec3f(new float[-0.0987,0.0034,0.0086]);
HAnimJoint569.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint569.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment570 = createNode("HAnimSegment");
HAnimSegment570.name = "r_tarsal_middle_phalanx_3";
HAnimSegment570.DEF = "hanim_r_tarsal_middle_phalanx_3";
Transform Transform571 = createNode("Transform");
Transform571.translation = new SFVec3f(new float[-0.0987,0.0034,0.0086]);
Transform Transform572 = createNode("Transform");
//Empty Transform
Shape Shape573 = createNode("Shape");
Shape573.USE = "HAnimJointShape";
Transform572.child = new undefined();

Transform572.child[0] = Shape573;

Transform571.children = new MFNode();

Transform571.children[0] = Transform572;

HAnimSegment570.children = new MFNode();

HAnimSegment570.children[0] = Transform571;

Shape Shape574 = createNode("Shape");
LineSet LineSet575 = createNode("LineSet");
LineSet575.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate576 = createNode("Coordinate");
Coordinate576.point = new MFVec3f(new float[-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178]);
LineSet575.coord = Coordinate576;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA577 = createNode("ColorRGBA");
ColorRGBA577.USE = "HAnimSegmentLineColorRGBA";
LineSet575.color = ColorRGBA577;

Shape574.geometry = LineSet575;

HAnimSegment570.children[1] = Shape574;

HAnimSite HAnimSite578 = createNode("HAnimSite");
HAnimSite578.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite578.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor579 = createNode("TouchSensor");
TouchSensor579.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite578.children = new MFNode();

HAnimSite578.children[0] = TouchSensor579;

Shape Shape580 = createNode("Shape");
Shape580.USE = "HAnimSiteShape";
HAnimSite578.children[1] = Shape580;

HAnimSegment570.children[2] = HAnimSite578;

HAnimJoint569.children = new MFNode();

HAnimJoint569.children[0] = HAnimSegment570;

HAnimJoint HAnimJoint581 = createNode("HAnimJoint");
HAnimJoint581.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint581.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint581.center = new SFVec3f(new float[-0.1002,0.0013,0.0178]);
HAnimJoint581.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint581.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint569.children[1] = HAnimJoint581;

HAnimJoint560.children[1] = HAnimJoint569;

HAnimJoint551.children[1] = HAnimJoint560;

HAnimJoint542.children[1] = HAnimJoint551;

HAnimJoint451.children[3] = HAnimJoint542;

HAnimJoint438.children[1] = HAnimJoint451;

HAnimJoint HAnimJoint582 = createNode("HAnimJoint");
HAnimJoint582.name = "r_calcaneocuboid";
HAnimJoint582.DEF = "hanim_r_calcaneocuboid";
HAnimJoint582.center = new SFVec3f(new float[-0.0889,0.0494,-0.1278]);
HAnimJoint582.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint582.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment583 = createNode("HAnimSegment");
HAnimSegment583.name = "r_calcaneus";
HAnimSegment583.DEF = "hanim_r_calcaneus";
Transform Transform584 = createNode("Transform");
Transform584.translation = new SFVec3f(new float[-0.0889,0.0494,-0.1278]);
Transform Transform585 = createNode("Transform");
//Empty Transform
Shape Shape586 = createNode("Shape");
Shape586.USE = "HAnimJointShape";
Transform585.child = new undefined();

Transform585.child[0] = Shape586;

Transform584.children = new MFNode();

Transform584.children[0] = Transform585;

HAnimSegment583.children = new MFNode();

HAnimSegment583.children[0] = Transform584;

Shape Shape587 = createNode("Shape");
LineSet LineSet588 = createNode("LineSet");
LineSet588.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate589 = createNode("Coordinate");
Coordinate589.point = new MFVec3f(new float[-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998]);
LineSet588.coord = Coordinate589;

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA ColorRGBA590 = createNode("ColorRGBA");
ColorRGBA590.USE = "HAnimSegmentLineColorRGBA";
LineSet588.color = ColorRGBA590;

Shape587.geometry = LineSet588;

HAnimSegment583.children[1] = Shape587;

HAnimJoint582.children = new MFNode();

HAnimJoint582.children[0] = HAnimSegment583;

HAnimJoint HAnimJoint591 = createNode("HAnimJoint");
HAnimJoint591.name = "r_transversetarsal";
HAnimJoint591.DEF = "hanim_r_transversetarsal";
HAnimJoint591.center = new SFVec3f(new float[-0.1105,0.0267,-0.0998]);
HAnimJoint591.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint591.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment592 = createNode("HAnimSegment");
HAnimSegment592.name = "r_cuboid";
HAnimSegment592.DEF = "hanim_r_cuboid";
Transform Transform593 = createNode("Transform");
Transform593.translation = new SFVec3f(new float[-0.1105,0.0267,-0.0998]);
Transform Transform594 = createNode("Transform");
//Empty Transform
Shape Shape595 = createNode("Shape");
Shape595.USE = "HAnimJointShape";
Transform594.child = new undefined();

Transform594.child[0] = Shape595;

Transform593.children = new MFNode();

Transform593.children[0] = Transform594;

HAnimSegment592.children = new MFNode();

HAnimSegment592.children[0] = Transform593;

Shape Shape596 = createNode("Shape");
LineSet LineSet597 = createNode("LineSet");
LineSet597.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate598 = createNode("Coordinate");
Coordinate598.point = new MFVec3f(new float[-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634]);
LineSet597.coord = Coordinate598;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA ColorRGBA599 = createNode("ColorRGBA");
ColorRGBA599.USE = "HAnimSegmentLineColorRGBA";
LineSet597.color = ColorRGBA599;

Shape596.geometry = LineSet597;

HAnimSegment592.children[1] = Shape596;

Shape Shape600 = createNode("Shape");
LineSet LineSet601 = createNode("LineSet");
LineSet601.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate602 = createNode("Coordinate");
Coordinate602.point = new MFVec3f(new float[-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671]);
LineSet601.coord = Coordinate602;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA ColorRGBA603 = createNode("ColorRGBA");
ColorRGBA603.USE = "HAnimSegmentLineColorRGBA";
LineSet601.color = ColorRGBA603;

Shape600.geometry = LineSet601;

HAnimSegment592.children[2] = Shape600;

HAnimJoint591.children = new MFNode();

HAnimJoint591.children[0] = HAnimSegment592;

HAnimJoint HAnimJoint604 = createNode("HAnimJoint");
HAnimJoint604.name = "r_tarsometatarsal_4";
HAnimJoint604.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint604.center = new SFVec3f(new float[-0.1063,0.016,-0.0634]);
HAnimJoint604.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment605 = createNode("HAnimSegment");
HAnimSegment605.name = "r_metatarsal_4";
HAnimSegment605.DEF = "hanim_r_metatarsal_4";
Transform Transform606 = createNode("Transform");
Transform606.translation = new SFVec3f(new float[-0.1063,0.016,-0.0634]);
Transform Transform607 = createNode("Transform");
//Empty Transform
Shape Shape608 = createNode("Shape");
Shape608.USE = "HAnimJointShape";
Transform607.child = new undefined();

Transform607.child[0] = Shape608;

Transform606.children = new MFNode();

Transform606.children[0] = Transform607;

HAnimSegment605.children = new MFNode();

HAnimSegment605.children[0] = Transform606;

Shape Shape609 = createNode("Shape");
LineSet LineSet610 = createNode("LineSet");
LineSet610.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate611 = createNode("Coordinate");
Coordinate611.point = new MFVec3f(new float[-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107]);
LineSet610.coord = Coordinate611;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA ColorRGBA612 = createNode("ColorRGBA");
ColorRGBA612.USE = "HAnimSegmentLineColorRGBA";
LineSet610.color = ColorRGBA612;

Shape609.geometry = LineSet610;

HAnimSegment605.children[1] = Shape609;

HAnimJoint604.children = new MFNode();

HAnimJoint604.children[0] = HAnimSegment605;

HAnimJoint HAnimJoint613 = createNode("HAnimJoint");
HAnimJoint613.name = "r_metatarsophalangeal_4";
HAnimJoint613.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint613.center = new SFVec3f(new float[-0.1097,0.0058,-0.0107]);
HAnimJoint613.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint613.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment614 = createNode("HAnimSegment");
HAnimSegment614.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment614.DEF = "hanim_r_tarsal_proximal_phalanx_4";
Transform Transform615 = createNode("Transform");
Transform615.translation = new SFVec3f(new float[-0.1097,0.0058,-0.0107]);
Transform Transform616 = createNode("Transform");
//Empty Transform
Shape Shape617 = createNode("Shape");
Shape617.USE = "HAnimJointShape";
Transform616.child = new undefined();

Transform616.child[0] = Shape617;

Transform615.children = new MFNode();

Transform615.children[0] = Transform616;

HAnimSegment614.children = new MFNode();

HAnimSegment614.children[0] = Transform615;

Shape Shape618 = createNode("Shape");
LineSet LineSet619 = createNode("LineSet");
LineSet619.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate620 = createNode("Coordinate");
Coordinate620.point = new MFVec3f(new float[-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044]);
LineSet619.coord = Coordinate620;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA621 = createNode("ColorRGBA");
ColorRGBA621.USE = "HAnimSegmentLineColorRGBA";
LineSet619.color = ColorRGBA621;

Shape618.geometry = LineSet619;

HAnimSegment614.children[1] = Shape618;

HAnimJoint613.children = new MFNode();

HAnimJoint613.children[0] = HAnimSegment614;

HAnimJoint HAnimJoint622 = createNode("HAnimJoint");
HAnimJoint622.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint622.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint622.center = new SFVec3f(new float[-0.114,0.0037,0.0044]);
HAnimJoint622.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint622.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment623 = createNode("HAnimSegment");
HAnimSegment623.name = "r_tarsal_middle_phalanx_4";
HAnimSegment623.DEF = "hanim_r_tarsal_middle_phalanx_4";
Transform Transform624 = createNode("Transform");
Transform624.translation = new SFVec3f(new float[-0.114,0.0037,0.0044]);
Transform Transform625 = createNode("Transform");
//Empty Transform
Shape Shape626 = createNode("Shape");
Shape626.USE = "HAnimJointShape";
Transform625.child = new undefined();

Transform625.child[0] = Shape626;

Transform624.children = new MFNode();

Transform624.children[0] = Transform625;

HAnimSegment623.children = new MFNode();

HAnimSegment623.children[0] = Transform624;

Shape Shape627 = createNode("Shape");
LineSet LineSet628 = createNode("LineSet");
LineSet628.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate629 = createNode("Coordinate");
Coordinate629.point = new MFVec3f(new float[-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118]);
LineSet628.coord = Coordinate629;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA630 = createNode("ColorRGBA");
ColorRGBA630.USE = "HAnimSegmentLineColorRGBA";
LineSet628.color = ColorRGBA630;

Shape627.geometry = LineSet628;

HAnimSegment623.children[1] = Shape627;

HAnimSite HAnimSite631 = createNode("HAnimSite");
HAnimSite631.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite631.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor632 = createNode("TouchSensor");
TouchSensor632.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite631.children = new MFNode();

HAnimSite631.children[0] = TouchSensor632;

Shape Shape633 = createNode("Shape");
Shape633.USE = "HAnimSiteShape";
HAnimSite631.children[1] = Shape633;

HAnimSegment623.children[2] = HAnimSite631;

HAnimJoint622.children = new MFNode();

HAnimJoint622.children[0] = HAnimSegment623;

HAnimJoint HAnimJoint634 = createNode("HAnimJoint");
HAnimJoint634.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint634.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint634.center = new SFVec3f(new float[-0.1155,0.0008,0.0118]);
HAnimJoint634.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint634.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint622.children[1] = HAnimJoint634;

HAnimJoint613.children[1] = HAnimJoint622;

HAnimJoint604.children[1] = HAnimJoint613;

HAnimJoint591.children[1] = HAnimJoint604;

HAnimJoint HAnimJoint635 = createNode("HAnimJoint");
HAnimJoint635.name = "r_tarsometatarsal_5";
HAnimJoint635.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint635.center = new SFVec3f(new float[-0.1206,0.0124,-0.0671]);
HAnimJoint635.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint635.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment636 = createNode("HAnimSegment");
HAnimSegment636.name = "r_metatarsal_5";
HAnimSegment636.DEF = "hanim_r_metatarsal_5";
Transform Transform637 = createNode("Transform");
Transform637.translation = new SFVec3f(new float[-0.1206,0.0124,-0.0671]);
Transform Transform638 = createNode("Transform");
//Empty Transform
Shape Shape639 = createNode("Shape");
Shape639.USE = "HAnimJointShape";
Transform638.child = new undefined();

Transform638.child[0] = Shape639;

Transform637.children = new MFNode();

Transform637.children[0] = Transform638;

HAnimSegment636.children = new MFNode();

HAnimSegment636.children[0] = Transform637;

Shape Shape640 = createNode("Shape");
LineSet LineSet641 = createNode("LineSet");
LineSet641.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate642 = createNode("Coordinate");
Coordinate642.point = new MFVec3f(new float[-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153]);
LineSet641.coord = Coordinate642;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA ColorRGBA643 = createNode("ColorRGBA");
ColorRGBA643.USE = "HAnimSegmentLineColorRGBA";
LineSet641.color = ColorRGBA643;

Shape640.geometry = LineSet641;

HAnimSegment636.children[1] = Shape640;

HAnimSite HAnimSite644 = createNode("HAnimSite");
HAnimSite644.name = "r_metatarsal_phalanx_5_pt";
HAnimSite644.DEF = "hanim_r_metatarsal_phalanx_5_pt";
TouchSensor TouchSensor645 = createNode("TouchSensor");
TouchSensor645.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite644.children = new MFNode();

HAnimSite644.children[0] = TouchSensor645;

Shape Shape646 = createNode("Shape");
Shape646.USE = "HAnimSiteShape";
HAnimSite644.children[1] = Shape646;

HAnimSegment636.children[2] = HAnimSite644;

HAnimJoint635.children = new MFNode();

HAnimJoint635.children[0] = HAnimSegment636;

HAnimJoint HAnimJoint647 = createNode("HAnimJoint");
HAnimJoint647.name = "r_metatarsophalangeal_5";
HAnimJoint647.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint647.center = new SFVec3f(new float[-0.1239,0.0051,-0.0153]);
HAnimJoint647.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint647.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment648 = createNode("HAnimSegment");
HAnimSegment648.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment648.DEF = "hanim_r_tarsal_proximal_phalanx_5";
Transform Transform649 = createNode("Transform");
Transform649.translation = new SFVec3f(new float[-0.1239,0.0051,-0.0153]);
Transform Transform650 = createNode("Transform");
//Empty Transform
Shape Shape651 = createNode("Shape");
Shape651.USE = "HAnimJointShape";
Transform650.child = new undefined();

Transform650.child[0] = Shape651;

Transform649.children = new MFNode();

Transform649.children[0] = Transform650;

HAnimSegment648.children = new MFNode();

HAnimSegment648.children[0] = Transform649;

Shape Shape652 = createNode("Shape");
LineSet LineSet653 = createNode("LineSet");
LineSet653.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate654 = createNode("Coordinate");
Coordinate654.point = new MFVec3f(new float[-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077]);
LineSet653.coord = Coordinate654;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA655 = createNode("ColorRGBA");
ColorRGBA655.USE = "HAnimSegmentLineColorRGBA";
LineSet653.color = ColorRGBA655;

Shape652.geometry = LineSet653;

HAnimSegment648.children[1] = Shape652;

HAnimJoint647.children = new MFNode();

HAnimJoint647.children[0] = HAnimSegment648;

HAnimJoint HAnimJoint656 = createNode("HAnimJoint");
HAnimJoint656.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint656.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint656.center = new SFVec3f(new float[-0.1262,0.0023,-0.0077]);
HAnimJoint656.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint656.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment657 = createNode("HAnimSegment");
HAnimSegment657.name = "r_tarsal_middle_phalanx_5";
HAnimSegment657.DEF = "hanim_r_tarsal_middle_phalanx_5";
Transform Transform658 = createNode("Transform");
Transform658.translation = new SFVec3f(new float[-0.1262,0.0023,-0.0077]);
Transform Transform659 = createNode("Transform");
//Empty Transform
Shape Shape660 = createNode("Shape");
Shape660.USE = "HAnimJointShape";
Transform659.child = new undefined();

Transform659.child[0] = Shape660;

Transform658.children = new MFNode();

Transform658.children[0] = Transform659;

HAnimSegment657.children = new MFNode();

HAnimSegment657.children[0] = Transform658;

Shape Shape661 = createNode("Shape");
LineSet LineSet662 = createNode("LineSet");
LineSet662.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate663 = createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[-0.1262,0.0023,-0.0077,-0.1271,0,0]);
LineSet662.coord = Coordinate663;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA664 = createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimSegment657.children[1] = Shape661;

HAnimSite HAnimSite665 = createNode("HAnimSite");
HAnimSite665.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite665.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor666 = createNode("TouchSensor");
TouchSensor666.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite665.children = new MFNode();

HAnimSite665.children[0] = TouchSensor666;

Shape Shape667 = createNode("Shape");
Shape667.USE = "HAnimSiteShape";
HAnimSite665.children[1] = Shape667;

HAnimSegment657.children[2] = HAnimSite665;

HAnimJoint656.children = new MFNode();

HAnimJoint656.children[0] = HAnimSegment657;

HAnimJoint HAnimJoint668 = createNode("HAnimJoint");
HAnimJoint668.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint668.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint668.center = new SFVec3f(new float[-0.1271,0,0]);
HAnimJoint668.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint668.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint656.children[1] = HAnimJoint668;

HAnimJoint647.children[1] = HAnimJoint656;

HAnimJoint635.children[1] = HAnimJoint647;

HAnimJoint591.children[2] = HAnimJoint635;

HAnimJoint582.children[1] = HAnimJoint591;

HAnimJoint438.children[2] = HAnimJoint582;

HAnimJoint423.children[1] = HAnimJoint438;

HAnimJoint405.children[1] = HAnimJoint423;

HAnimJoint104.children[2] = HAnimJoint405;

HAnimJoint52.children[1] = HAnimJoint104;

HAnimJoint HAnimJoint669 = createNode("HAnimJoint");
HAnimJoint669.name = "vl5";
HAnimJoint669.DEF = "hanim_vl5";
HAnimJoint669.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint669.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint669.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment670 = createNode("HAnimSegment");
HAnimSegment670.name = "l5";
HAnimSegment670.DEF = "hanim_l5";
Transform Transform671 = createNode("Transform");
Transform671.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Transform Transform672 = createNode("Transform");
//Empty Transform
Shape Shape673 = createNode("Shape");
Shape673.USE = "HAnimJointShape";
Transform672.child = new undefined();

Transform672.child[0] = Shape673;

Transform671.children = new MFNode();

Transform671.children[0] = Transform672;

HAnimSegment670.children = new MFNode();

HAnimSegment670.children[0] = Transform671;

Shape Shape674 = createNode("Shape");
LineSet LineSet675 = createNode("LineSet");
LineSet675.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate676 = createNode("Coordinate");
Coordinate676.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet675.coord = Coordinate676;

//from vl5 to vl4 vertices 2
ColorRGBA ColorRGBA677 = createNode("ColorRGBA");
ColorRGBA677.USE = "HAnimSegmentLineColorRGBA";
LineSet675.color = ColorRGBA677;

Shape674.geometry = LineSet675;

HAnimSegment670.children[1] = Shape674;

HAnimJoint669.children = new MFNode();

HAnimJoint669.children[0] = HAnimSegment670;

HAnimJoint HAnimJoint678 = createNode("HAnimJoint");
HAnimJoint678.name = "vl4";
HAnimJoint678.DEF = "hanim_vl4";
HAnimJoint678.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint678.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint678.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment679 = createNode("HAnimSegment");
HAnimSegment679.name = "l4";
HAnimSegment679.DEF = "hanim_l4";
Transform Transform680 = createNode("Transform");
Transform680.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Transform Transform681 = createNode("Transform");
//Empty Transform
Shape Shape682 = createNode("Shape");
Shape682.USE = "HAnimJointShape";
Transform681.child = new undefined();

Transform681.child[0] = Shape682;

Transform680.children = new MFNode();

Transform680.children[0] = Transform681;

HAnimSegment679.children = new MFNode();

HAnimSegment679.children[0] = Transform680;

Shape Shape683 = createNode("Shape");
LineSet LineSet684 = createNode("LineSet");
LineSet684.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate685 = createNode("Coordinate");
Coordinate685.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet684.coord = Coordinate685;

//from vl4 to vl3 vertices 2
ColorRGBA ColorRGBA686 = createNode("ColorRGBA");
ColorRGBA686.USE = "HAnimSegmentLineColorRGBA";
LineSet684.color = ColorRGBA686;

Shape683.geometry = LineSet684;

HAnimSegment679.children[1] = Shape683;

HAnimJoint678.children = new MFNode();

HAnimJoint678.children[0] = HAnimSegment679;

HAnimJoint HAnimJoint687 = createNode("HAnimJoint");
HAnimJoint687.name = "vl3";
HAnimJoint687.DEF = "hanim_vl3";
HAnimJoint687.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint687.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint687.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment688 = createNode("HAnimSegment");
HAnimSegment688.name = "l3";
HAnimSegment688.DEF = "hanim_l3";
Transform Transform689 = createNode("Transform");
Transform689.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Transform Transform690 = createNode("Transform");
//Empty Transform
Shape Shape691 = createNode("Shape");
Shape691.USE = "HAnimJointShape";
Transform690.child = new undefined();

Transform690.child[0] = Shape691;

Transform689.children = new MFNode();

Transform689.children[0] = Transform690;

HAnimSegment688.children = new MFNode();

HAnimSegment688.children[0] = Transform689;

Shape Shape692 = createNode("Shape");
LineSet LineSet693 = createNode("LineSet");
LineSet693.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate694 = createNode("Coordinate");
Coordinate694.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet693.coord = Coordinate694;

//from vl3 to vl2 vertices 2
ColorRGBA ColorRGBA695 = createNode("ColorRGBA");
ColorRGBA695.USE = "HAnimSegmentLineColorRGBA";
LineSet693.color = ColorRGBA695;

Shape692.geometry = LineSet693;

HAnimSegment688.children[1] = Shape692;

HAnimSite HAnimSite696 = createNode("HAnimSite");
HAnimSite696.name = "l_rib10_pt";
HAnimSite696.DEF = "hanim_l_rib10_pt";
HAnimSite696.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor697 = createNode("TouchSensor");
TouchSensor697.description = "HAnimSite l_rib10_pt";
HAnimSite696.children = new MFNode();

HAnimSite696.children[0] = TouchSensor697;

Shape Shape698 = createNode("Shape");
Shape698.USE = "HAnimSiteShape";
HAnimSite696.children[1] = Shape698;

HAnimSegment688.children[2] = HAnimSite696;

HAnimSite HAnimSite699 = createNode("HAnimSite");
HAnimSite699.name = "r_rib10_pt";
HAnimSite699.DEF = "hanim_r_rib10_pt";
HAnimSite699.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor700 = createNode("TouchSensor");
TouchSensor700.description = "HAnimSite r_rib10_pt";
HAnimSite699.children = new MFNode();

HAnimSite699.children[0] = TouchSensor700;

Shape Shape701 = createNode("Shape");
Shape701.USE = "HAnimSiteShape";
HAnimSite699.children[1] = Shape701;

HAnimSegment688.children[3] = HAnimSite699;

HAnimSite HAnimSite702 = createNode("HAnimSite");
HAnimSite702.name = "spine_2_middle_back_pt";
HAnimSite702.DEF = "hanim_spine_2_middle_back_pt";
TouchSensor TouchSensor703 = createNode("TouchSensor");
TouchSensor703.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite702.children = new MFNode();

HAnimSite702.children[0] = TouchSensor703;

Shape Shape704 = createNode("Shape");
Shape704.USE = "HAnimSiteShape";
HAnimSite702.children[1] = Shape704;

HAnimSegment688.children[4] = HAnimSite702;

HAnimJoint687.children = new MFNode();

HAnimJoint687.children[0] = HAnimSegment688;

HAnimJoint HAnimJoint705 = createNode("HAnimJoint");
HAnimJoint705.name = "vl2";
HAnimJoint705.DEF = "hanim_vl2";
HAnimJoint705.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint705.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint705.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment706 = createNode("HAnimSegment");
HAnimSegment706.name = "l2";
HAnimSegment706.DEF = "hanim_l2";
Transform Transform707 = createNode("Transform");
Transform707.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Transform Transform708 = createNode("Transform");
//Empty Transform
Shape Shape709 = createNode("Shape");
Shape709.USE = "HAnimJointShape";
Transform708.child = new undefined();

Transform708.child[0] = Shape709;

Transform707.children = new MFNode();

Transform707.children[0] = Transform708;

HAnimSegment706.children = new MFNode();

HAnimSegment706.children[0] = Transform707;

Shape Shape710 = createNode("Shape");
LineSet LineSet711 = createNode("LineSet");
LineSet711.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate712 = createNode("Coordinate");
Coordinate712.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet711.coord = Coordinate712;

//from vl2 to vl1 vertices 2
ColorRGBA ColorRGBA713 = createNode("ColorRGBA");
ColorRGBA713.USE = "HAnimSegmentLineColorRGBA";
LineSet711.color = ColorRGBA713;

Shape710.geometry = LineSet711;

HAnimSegment706.children[1] = Shape710;

HAnimJoint705.children = new MFNode();

HAnimJoint705.children[0] = HAnimSegment706;

HAnimJoint HAnimJoint714 = createNode("HAnimJoint");
HAnimJoint714.name = "vl1";
HAnimJoint714.DEF = "hanim_vl1";
HAnimJoint714.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint714.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint714.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment715 = createNode("HAnimSegment");
HAnimSegment715.name = "l1";
HAnimSegment715.DEF = "hanim_l1";
Transform Transform716 = createNode("Transform");
Transform716.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform717 = createNode("Transform");
//Empty Transform
Shape Shape718 = createNode("Shape");
Shape718.USE = "HAnimJointShape";
Transform717.child = new undefined();

Transform717.child[0] = Shape718;

Transform716.children = new MFNode();

Transform716.children[0] = Transform717;

HAnimSegment715.children = new MFNode();

HAnimSegment715.children[0] = Transform716;

Shape Shape719 = createNode("Shape");
LineSet LineSet720 = createNode("LineSet");
LineSet720.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate721 = createNode("Coordinate");
Coordinate721.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet720.coord = Coordinate721;

//from vl1 to vt12 vertices 2
ColorRGBA ColorRGBA722 = createNode("ColorRGBA");
ColorRGBA722.USE = "HAnimSegmentLineColorRGBA";
LineSet720.color = ColorRGBA722;

Shape719.geometry = LineSet720;

HAnimSegment715.children[1] = Shape719;

HAnimJoint714.children = new MFNode();

HAnimJoint714.children[0] = HAnimSegment715;

HAnimJoint HAnimJoint723 = createNode("HAnimJoint");
HAnimJoint723.name = "vt12";
HAnimJoint723.DEF = "hanim_vt12";
HAnimJoint723.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint723.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint723.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment724 = createNode("HAnimSegment");
HAnimSegment724.name = "t12";
HAnimSegment724.DEF = "hanim_t12";
Transform Transform725 = createNode("Transform");
Transform725.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Transform Transform726 = createNode("Transform");
//Empty Transform
Shape Shape727 = createNode("Shape");
Shape727.USE = "HAnimJointShape";
Transform726.child = new undefined();

Transform726.child[0] = Shape727;

Transform725.children = new MFNode();

Transform725.children[0] = Transform726;

HAnimSegment724.children = new MFNode();

HAnimSegment724.children[0] = Transform725;

Shape Shape728 = createNode("Shape");
LineSet LineSet729 = createNode("LineSet");
LineSet729.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate730 = createNode("Coordinate");
Coordinate730.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet729.coord = Coordinate730;

//from vt12 to vt11 vertices 2
ColorRGBA ColorRGBA731 = createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
LineSet729.color = ColorRGBA731;

Shape728.geometry = LineSet729;

HAnimSegment724.children[1] = Shape728;

HAnimJoint723.children = new MFNode();

HAnimJoint723.children[0] = HAnimSegment724;

HAnimJoint HAnimJoint732 = createNode("HAnimJoint");
HAnimJoint732.name = "vt11";
HAnimJoint732.DEF = "hanim_vt11";
HAnimJoint732.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint732.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint732.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment733 = createNode("HAnimSegment");
HAnimSegment733.name = "t11";
HAnimSegment733.DEF = "hanim_t11";
Transform Transform734 = createNode("Transform");
Transform734.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Transform Transform735 = createNode("Transform");
//Empty Transform
Shape Shape736 = createNode("Shape");
Shape736.USE = "HAnimJointShape";
Transform735.child = new undefined();

Transform735.child[0] = Shape736;

Transform734.children = new MFNode();

Transform734.children[0] = Transform735;

HAnimSegment733.children = new MFNode();

HAnimSegment733.children[0] = Transform734;

Shape Shape737 = createNode("Shape");
LineSet LineSet738 = createNode("LineSet");
LineSet738.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate739 = createNode("Coordinate");
Coordinate739.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet738.coord = Coordinate739;

//from vt11 to vt10 vertices 2
ColorRGBA ColorRGBA740 = createNode("ColorRGBA");
ColorRGBA740.USE = "HAnimSegmentLineColorRGBA";
LineSet738.color = ColorRGBA740;

Shape737.geometry = LineSet738;

HAnimSegment733.children[1] = Shape737;

HAnimSite HAnimSite741 = createNode("HAnimSite");
HAnimSite741.name = "substernale_pt";
HAnimSite741.DEF = "hanim_substernale_pt";
HAnimSite741.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor742 = createNode("TouchSensor");
TouchSensor742.description = "HAnimSite substernale_pt";
HAnimSite741.children = new MFNode();

HAnimSite741.children[0] = TouchSensor742;

Shape Shape743 = createNode("Shape");
Shape743.USE = "HAnimSiteShape";
HAnimSite741.children[1] = Shape743;

HAnimSegment733.children[2] = HAnimSite741;

HAnimJoint732.children = new MFNode();

HAnimJoint732.children[0] = HAnimSegment733;

HAnimJoint HAnimJoint744 = createNode("HAnimJoint");
HAnimJoint744.name = "vt10";
HAnimJoint744.DEF = "hanim_vt10";
HAnimJoint744.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint744.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint744.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment745 = createNode("HAnimSegment");
HAnimSegment745.name = "t10";
HAnimSegment745.DEF = "hanim_t10";
Transform Transform746 = createNode("Transform");
Transform746.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform747 = createNode("Transform");
//Empty Transform
Shape Shape748 = createNode("Shape");
Shape748.USE = "HAnimJointShape";
Transform747.child = new undefined();

Transform747.child[0] = Shape748;

Transform746.children = new MFNode();

Transform746.children[0] = Transform747;

HAnimSegment745.children = new MFNode();

HAnimSegment745.children[0] = Transform746;

Shape Shape749 = createNode("Shape");
LineSet LineSet750 = createNode("LineSet");
LineSet750.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate751 = createNode("Coordinate");
Coordinate751.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet750.coord = Coordinate751;

//from vt10 to vt9 vertices 2
ColorRGBA ColorRGBA752 = createNode("ColorRGBA");
ColorRGBA752.USE = "HAnimSegmentLineColorRGBA";
LineSet750.color = ColorRGBA752;

Shape749.geometry = LineSet750;

HAnimSegment745.children[1] = Shape749;

HAnimSite HAnimSite753 = createNode("HAnimSite");
HAnimSite753.name = "l_thelion_pt";
HAnimSite753.DEF = "hanim_l_thelion_pt";
HAnimSite753.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor754 = createNode("TouchSensor");
TouchSensor754.description = "HAnimSite l_thelion_pt";
HAnimSite753.children = new MFNode();

HAnimSite753.children[0] = TouchSensor754;

Shape Shape755 = createNode("Shape");
Shape755.USE = "HAnimSiteShape";
HAnimSite753.children[1] = Shape755;

HAnimSegment745.children[2] = HAnimSite753;

HAnimSite HAnimSite756 = createNode("HAnimSite");
HAnimSite756.name = "r_thelion_pt";
HAnimSite756.DEF = "hanim_r_thelion_pt";
HAnimSite756.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor757 = createNode("TouchSensor");
TouchSensor757.description = "HAnimSite r_thelion_pt";
HAnimSite756.children = new MFNode();

HAnimSite756.children[0] = TouchSensor757;

Shape Shape758 = createNode("Shape");
Shape758.USE = "HAnimSiteShape";
HAnimSite756.children[1] = Shape758;

HAnimSegment745.children[3] = HAnimSite756;

HAnimJoint744.children = new MFNode();

HAnimJoint744.children[0] = HAnimSegment745;

HAnimJoint HAnimJoint759 = createNode("HAnimJoint");
HAnimJoint759.name = "vt9";
HAnimJoint759.DEF = "hanim_vt9";
HAnimJoint759.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint759.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint759.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment760 = createNode("HAnimSegment");
HAnimSegment760.name = "t9";
HAnimSegment760.DEF = "hanim_t9";
Transform Transform761 = createNode("Transform");
Transform761.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Transform Transform762 = createNode("Transform");
//Empty Transform
Shape Shape763 = createNode("Shape");
Shape763.USE = "HAnimJointShape";
Transform762.child = new undefined();

Transform762.child[0] = Shape763;

Transform761.children = new MFNode();

Transform761.children[0] = Transform762;

HAnimSegment760.children = new MFNode();

HAnimSegment760.children[0] = Transform761;

Shape Shape764 = createNode("Shape");
LineSet LineSet765 = createNode("LineSet");
LineSet765.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate766 = createNode("Coordinate");
Coordinate766.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet765.coord = Coordinate766;

//from vt9 to vt8 vertices 2
ColorRGBA ColorRGBA767 = createNode("ColorRGBA");
ColorRGBA767.USE = "HAnimSegmentLineColorRGBA";
LineSet765.color = ColorRGBA767;

Shape764.geometry = LineSet765;

HAnimSegment760.children[1] = Shape764;

HAnimJoint759.children = new MFNode();

HAnimJoint759.children[0] = HAnimSegment760;

HAnimJoint HAnimJoint768 = createNode("HAnimJoint");
HAnimJoint768.name = "vt8";
HAnimJoint768.DEF = "hanim_vt8";
HAnimJoint768.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint768.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint768.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment769 = createNode("HAnimSegment");
HAnimSegment769.name = "t8";
HAnimSegment769.DEF = "hanim_t8";
Transform Transform770 = createNode("Transform");
Transform770.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Transform Transform771 = createNode("Transform");
//Empty Transform
Shape Shape772 = createNode("Shape");
Shape772.USE = "HAnimJointShape";
Transform771.child = new undefined();

Transform771.child[0] = Shape772;

Transform770.children = new MFNode();

Transform770.children[0] = Transform771;

HAnimSegment769.children = new MFNode();

HAnimSegment769.children[0] = Transform770;

Shape Shape773 = createNode("Shape");
LineSet LineSet774 = createNode("LineSet");
LineSet774.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate775 = createNode("Coordinate");
Coordinate775.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet774.coord = Coordinate775;

//from vt8 to vt7 vertices 2
ColorRGBA ColorRGBA776 = createNode("ColorRGBA");
ColorRGBA776.USE = "HAnimSegmentLineColorRGBA";
LineSet774.color = ColorRGBA776;

Shape773.geometry = LineSet774;

HAnimSegment769.children[1] = Shape773;

HAnimJoint768.children = new MFNode();

HAnimJoint768.children[0] = HAnimSegment769;

HAnimJoint HAnimJoint777 = createNode("HAnimJoint");
HAnimJoint777.name = "vt7";
HAnimJoint777.DEF = "hanim_vt7";
HAnimJoint777.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint777.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint777.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment778 = createNode("HAnimSegment");
HAnimSegment778.name = "t7";
HAnimSegment778.DEF = "hanim_t7";
Transform Transform779 = createNode("Transform");
Transform779.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Transform Transform780 = createNode("Transform");
//Empty Transform
Shape Shape781 = createNode("Shape");
Shape781.USE = "HAnimJointShape";
Transform780.child = new undefined();

Transform780.child[0] = Shape781;

Transform779.children = new MFNode();

Transform779.children[0] = Transform780;

HAnimSegment778.children = new MFNode();

HAnimSegment778.children[0] = Transform779;

Shape Shape782 = createNode("Shape");
LineSet LineSet783 = createNode("LineSet");
LineSet783.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate784 = createNode("Coordinate");
Coordinate784.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet783.coord = Coordinate784;

//from vt7 to vt6 vertices 2
ColorRGBA ColorRGBA785 = createNode("ColorRGBA");
ColorRGBA785.USE = "HAnimSegmentLineColorRGBA";
LineSet783.color = ColorRGBA785;

Shape782.geometry = LineSet783;

HAnimSegment778.children[1] = Shape782;

HAnimSite HAnimSite786 = createNode("HAnimSite");
HAnimSite786.name = "l_chest_midsagittal_plane_pt";
HAnimSite786.DEF = "hanim_l_chest_midsagittal_plane_pt";
TouchSensor TouchSensor787 = createNode("TouchSensor");
TouchSensor787.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = TouchSensor787;

Shape Shape788 = createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786.children[1] = Shape788;

HAnimSegment778.children[2] = HAnimSite786;

HAnimSite HAnimSite789 = createNode("HAnimSite");
HAnimSite789.name = "mesosternale_pt";
HAnimSite789.DEF = "hanim_mesosternale_pt";
TouchSensor TouchSensor790 = createNode("TouchSensor");
TouchSensor790.description = "HAnimSite mesosternale_pt";
HAnimSite789.children = new MFNode();

HAnimSite789.children[0] = TouchSensor790;

Shape Shape791 = createNode("Shape");
Shape791.USE = "HAnimSiteShape";
HAnimSite789.children[1] = Shape791;

HAnimSegment778.children[3] = HAnimSite789;

HAnimSite HAnimSite792 = createNode("HAnimSite");
HAnimSite792.name = "r_chest_midsagittal_plane_pt";
HAnimSite792.DEF = "hanim_r_chest_midsagittal_plane_pt";
TouchSensor TouchSensor793 = createNode("TouchSensor");
TouchSensor793.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite792.children = new MFNode();

HAnimSite792.children[0] = TouchSensor793;

Shape Shape794 = createNode("Shape");
Shape794.USE = "HAnimSiteShape";
HAnimSite792.children[1] = Shape794;

HAnimSegment778.children[4] = HAnimSite792;

HAnimSite HAnimSite795 = createNode("HAnimSite");
HAnimSite795.name = "rear_center_midsagittal_plane_pt";
HAnimSite795.DEF = "hanim_rear_center_midsagittal_plane_pt";
TouchSensor TouchSensor796 = createNode("TouchSensor");
TouchSensor796.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite795.children = new MFNode();

HAnimSite795.children[0] = TouchSensor796;

Shape Shape797 = createNode("Shape");
Shape797.USE = "HAnimSiteShape";
HAnimSite795.children[1] = Shape797;

HAnimSegment778.children[5] = HAnimSite795;

HAnimJoint777.children = new MFNode();

HAnimJoint777.children[0] = HAnimSegment778;

HAnimJoint HAnimJoint798 = createNode("HAnimJoint");
HAnimJoint798.name = "vt6";
HAnimJoint798.DEF = "hanim_vt6";
HAnimJoint798.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint798.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint798.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment799 = createNode("HAnimSegment");
HAnimSegment799.name = "t6";
HAnimSegment799.DEF = "hanim_t6";
Transform Transform800 = createNode("Transform");
Transform800.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform801 = createNode("Transform");
//Empty Transform
Shape Shape802 = createNode("Shape");
Shape802.USE = "HAnimJointShape";
Transform801.child = new undefined();

Transform801.child[0] = Shape802;

Transform800.children = new MFNode();

Transform800.children[0] = Transform801;

HAnimSegment799.children = new MFNode();

HAnimSegment799.children[0] = Transform800;

Shape Shape803 = createNode("Shape");
LineSet LineSet804 = createNode("LineSet");
LineSet804.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate805 = createNode("Coordinate");
Coordinate805.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet804.coord = Coordinate805;

//from vt6 to vt5 vertices 2
ColorRGBA ColorRGBA806 = createNode("ColorRGBA");
ColorRGBA806.USE = "HAnimSegmentLineColorRGBA";
LineSet804.color = ColorRGBA806;

Shape803.geometry = LineSet804;

HAnimSegment799.children[1] = Shape803;

HAnimSite HAnimSite807 = createNode("HAnimSite");
HAnimSite807.name = "spine_1_middle_back_pt";
HAnimSite807.DEF = "hanim_spine_1_middle_back_pt";
TouchSensor TouchSensor808 = createNode("TouchSensor");
TouchSensor808.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite807.children = new MFNode();

HAnimSite807.children[0] = TouchSensor808;

Shape Shape809 = createNode("Shape");
Shape809.USE = "HAnimSiteShape";
HAnimSite807.children[1] = Shape809;

HAnimSegment799.children[2] = HAnimSite807;

HAnimJoint798.children = new MFNode();

HAnimJoint798.children[0] = HAnimSegment799;

HAnimJoint HAnimJoint810 = createNode("HAnimJoint");
HAnimJoint810.name = "vt5";
HAnimJoint810.DEF = "hanim_vt5";
HAnimJoint810.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint810.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint810.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment811 = createNode("HAnimSegment");
HAnimSegment811.name = "t5";
HAnimSegment811.DEF = "hanim_t5";
Transform Transform812 = createNode("Transform");
Transform812.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Transform Transform813 = createNode("Transform");
//Empty Transform
Shape Shape814 = createNode("Shape");
Shape814.USE = "HAnimJointShape";
Transform813.child = new undefined();

Transform813.child[0] = Shape814;

Transform812.children = new MFNode();

Transform812.children[0] = Transform813;

HAnimSegment811.children = new MFNode();

HAnimSegment811.children[0] = Transform812;

Shape Shape815 = createNode("Shape");
LineSet LineSet816 = createNode("LineSet");
LineSet816.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate817 = createNode("Coordinate");
Coordinate817.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet816.coord = Coordinate817;

//from vt5 to vt4 vertices 2
ColorRGBA ColorRGBA818 = createNode("ColorRGBA");
ColorRGBA818.USE = "HAnimSegmentLineColorRGBA";
LineSet816.color = ColorRGBA818;

Shape815.geometry = LineSet816;

HAnimSegment811.children[1] = Shape815;

HAnimJoint810.children = new MFNode();

HAnimJoint810.children[0] = HAnimSegment811;

HAnimJoint HAnimJoint819 = createNode("HAnimJoint");
HAnimJoint819.name = "vt4";
HAnimJoint819.DEF = "hanim_vt4";
HAnimJoint819.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint819.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint819.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment820 = createNode("HAnimSegment");
HAnimSegment820.name = "t4";
HAnimSegment820.DEF = "hanim_t4";
Transform Transform821 = createNode("Transform");
Transform821.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Transform Transform822 = createNode("Transform");
//Empty Transform
Shape Shape823 = createNode("Shape");
Shape823.USE = "HAnimJointShape";
Transform822.child = new undefined();

Transform822.child[0] = Shape823;

Transform821.children = new MFNode();

Transform821.children[0] = Transform822;

HAnimSegment820.children = new MFNode();

HAnimSegment820.children[0] = Transform821;

Shape Shape824 = createNode("Shape");
LineSet LineSet825 = createNode("LineSet");
LineSet825.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate826 = createNode("Coordinate");
Coordinate826.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet825.coord = Coordinate826;

//from vt4 to vt3 vertices 2
ColorRGBA ColorRGBA827 = createNode("ColorRGBA");
ColorRGBA827.USE = "HAnimSegmentLineColorRGBA";
LineSet825.color = ColorRGBA827;

Shape824.geometry = LineSet825;

HAnimSegment820.children[1] = Shape824;

HAnimJoint819.children = new MFNode();

HAnimJoint819.children[0] = HAnimSegment820;

HAnimJoint HAnimJoint828 = createNode("HAnimJoint");
HAnimJoint828.name = "vt3";
HAnimJoint828.DEF = "hanim_vt3";
HAnimJoint828.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint828.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint828.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment829 = createNode("HAnimSegment");
HAnimSegment829.name = "t3";
HAnimSegment829.DEF = "hanim_t3";
Transform Transform830 = createNode("Transform");
Transform830.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Transform Transform831 = createNode("Transform");
//Empty Transform
Shape Shape832 = createNode("Shape");
Shape832.USE = "HAnimJointShape";
Transform831.child = new undefined();

Transform831.child[0] = Shape832;

Transform830.children = new MFNode();

Transform830.children[0] = Transform831;

HAnimSegment829.children = new MFNode();

HAnimSegment829.children[0] = Transform830;

Shape Shape833 = createNode("Shape");
LineSet LineSet834 = createNode("LineSet");
LineSet834.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate835 = createNode("Coordinate");
Coordinate835.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet834.coord = Coordinate835;

//from vt3 to vt2 vertices 2
ColorRGBA ColorRGBA836 = createNode("ColorRGBA");
ColorRGBA836.USE = "HAnimSegmentLineColorRGBA";
LineSet834.color = ColorRGBA836;

Shape833.geometry = LineSet834;

HAnimSegment829.children[1] = Shape833;

HAnimJoint828.children = new MFNode();

HAnimJoint828.children[0] = HAnimSegment829;

HAnimJoint HAnimJoint837 = createNode("HAnimJoint");
HAnimJoint837.name = "vt2";
HAnimJoint837.DEF = "hanim_vt2";
HAnimJoint837.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint837.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint837.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment838 = createNode("HAnimSegment");
HAnimSegment838.name = "t2";
HAnimSegment838.DEF = "hanim_t2";
Transform Transform839 = createNode("Transform");
Transform839.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Transform Transform840 = createNode("Transform");
//Empty Transform
Shape Shape841 = createNode("Shape");
Shape841.USE = "HAnimJointShape";
Transform840.child = new undefined();

Transform840.child[0] = Shape841;

Transform839.children = new MFNode();

Transform839.children[0] = Transform840;

HAnimSegment838.children = new MFNode();

HAnimSegment838.children[0] = Transform839;

Shape Shape842 = createNode("Shape");
LineSet LineSet843 = createNode("LineSet");
LineSet843.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate844 = createNode("Coordinate");
Coordinate844.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet843.coord = Coordinate844;

//from vt2 to vt1 vertices 2
ColorRGBA ColorRGBA845 = createNode("ColorRGBA");
ColorRGBA845.USE = "HAnimSegmentLineColorRGBA";
LineSet843.color = ColorRGBA845;

Shape842.geometry = LineSet843;

HAnimSegment838.children[1] = Shape842;

HAnimSite HAnimSite846 = createNode("HAnimSite");
HAnimSite846.name = "cervicale_pt";
HAnimSite846.DEF = "hanim_cervicale_pt";
HAnimSite846.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor847 = createNode("TouchSensor");
TouchSensor847.description = "HAnimSite cervicale_pt";
HAnimSite846.children = new MFNode();

HAnimSite846.children[0] = TouchSensor847;

Shape Shape848 = createNode("Shape");
Shape848.USE = "HAnimSiteShape";
HAnimSite846.children[1] = Shape848;

HAnimSegment838.children[2] = HAnimSite846;

HAnimSite HAnimSite849 = createNode("HAnimSite");
HAnimSite849.name = "suprasternale_pt";
HAnimSite849.DEF = "hanim_suprasternale_pt";
HAnimSite849.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor850 = createNode("TouchSensor");
TouchSensor850.description = "HAnimSite suprasternale_pt";
HAnimSite849.children = new MFNode();

HAnimSite849.children[0] = TouchSensor850;

Shape Shape851 = createNode("Shape");
Shape851.USE = "HAnimSiteShape";
HAnimSite849.children[1] = Shape851;

HAnimSegment838.children[3] = HAnimSite849;

HAnimJoint837.children = new MFNode();

HAnimJoint837.children[0] = HAnimSegment838;

HAnimJoint HAnimJoint852 = createNode("HAnimJoint");
HAnimJoint852.name = "vt1";
HAnimJoint852.DEF = "hanim_vt1";
HAnimJoint852.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint852.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint852.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment853 = createNode("HAnimSegment");
HAnimSegment853.name = "t1";
HAnimSegment853.DEF = "hanim_t1";
Transform Transform854 = createNode("Transform");
Transform854.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Transform Transform855 = createNode("Transform");
//Empty Transform
Shape Shape856 = createNode("Shape");
Shape856.USE = "HAnimJointShape";
Transform855.child = new undefined();

Transform855.child[0] = Shape856;

Transform854.children = new MFNode();

Transform854.children[0] = Transform855;

HAnimSegment853.children = new MFNode();

HAnimSegment853.children[0] = Transform854;

Shape Shape857 = createNode("Shape");
LineSet LineSet858 = createNode("LineSet");
LineSet858.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate859 = createNode("Coordinate");
Coordinate859.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet858.coord = Coordinate859;

//from vt1 to vc7 vertices 2
ColorRGBA ColorRGBA860 = createNode("ColorRGBA");
ColorRGBA860.USE = "HAnimSegmentLineColorRGBA";
LineSet858.color = ColorRGBA860;

Shape857.geometry = LineSet858;

HAnimSegment853.children[1] = Shape857;

HAnimSite HAnimSite861 = createNode("HAnimSite");
HAnimSite861.name = "l_neck_base_pt";
HAnimSite861.DEF = "hanim_l_neck_base_pt";
HAnimSite861.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor862 = createNode("TouchSensor");
TouchSensor862.description = "HAnimSite l_neck_base_pt";
HAnimSite861.children = new MFNode();

HAnimSite861.children[0] = TouchSensor862;

Shape Shape863 = createNode("Shape");
Shape863.USE = "HAnimSiteShape";
HAnimSite861.children[1] = Shape863;

HAnimSegment853.children[2] = HAnimSite861;

HAnimSite HAnimSite864 = createNode("HAnimSite");
HAnimSite864.name = "r_neck_base_pt";
HAnimSite864.DEF = "hanim_r_neck_base_pt";
HAnimSite864.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor865 = createNode("TouchSensor");
TouchSensor865.description = "HAnimSite r_neck_base_pt";
HAnimSite864.children = new MFNode();

HAnimSite864.children[0] = TouchSensor865;

Shape Shape866 = createNode("Shape");
Shape866.USE = "HAnimSiteShape";
HAnimSite864.children[1] = Shape866;

HAnimSegment853.children[3] = HAnimSite864;

Shape Shape867 = createNode("Shape");
LineSet LineSet868 = createNode("LineSet");
LineSet868.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate869 = createNode("Coordinate");
Coordinate869.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet868.coord = Coordinate869;

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA ColorRGBA870 = createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSegmentLineColorRGBA";
LineSet868.color = ColorRGBA870;

Shape867.geometry = LineSet868;

HAnimSegment853.children[4] = Shape867;

HAnimSite HAnimSite871 = createNode("HAnimSite");
HAnimSite871.name = "l_acromion_pt";
HAnimSite871.DEF = "hanim_l_acromion_pt";
HAnimSite871.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor872 = createNode("TouchSensor");
TouchSensor872.description = "HAnimSite l_acromion_pt";
HAnimSite871.children = new MFNode();

HAnimSite871.children[0] = TouchSensor872;

Shape Shape873 = createNode("Shape");
Shape873.USE = "HAnimSiteShape";
HAnimSite871.children[1] = Shape873;

HAnimSegment853.children[5] = HAnimSite871;

HAnimSite HAnimSite874 = createNode("HAnimSite");
HAnimSite874.name = "l_axilla_distal_pt";
HAnimSite874.DEF = "hanim_l_axilla_distal_pt";
HAnimSite874.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor875 = createNode("TouchSensor");
TouchSensor875.description = "HAnimSite l_axilla_distal_pt";
HAnimSite874.children = new MFNode();

HAnimSite874.children[0] = TouchSensor875;

Shape Shape876 = createNode("Shape");
Shape876.USE = "HAnimSiteShape";
HAnimSite874.children[1] = Shape876;

HAnimSegment853.children[6] = HAnimSite874;

HAnimSite HAnimSite877 = createNode("HAnimSite");
HAnimSite877.name = "l_axilla_posterior_folds_pt";
HAnimSite877.DEF = "hanim_l_axilla_posterior_folds_pt";
TouchSensor TouchSensor878 = createNode("TouchSensor");
TouchSensor878.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite877.children = new MFNode();

HAnimSite877.children[0] = TouchSensor878;

Shape Shape879 = createNode("Shape");
Shape879.USE = "HAnimSiteShape";
HAnimSite877.children[1] = Shape879;

HAnimSegment853.children[7] = HAnimSite877;

HAnimSite HAnimSite880 = createNode("HAnimSite");
HAnimSite880.name = "l_axilla_proximal_pt";
HAnimSite880.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite880.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor881 = createNode("TouchSensor");
TouchSensor881.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite880.children = new MFNode();

HAnimSite880.children[0] = TouchSensor881;

Shape Shape882 = createNode("Shape");
Shape882.USE = "HAnimSiteShape";
HAnimSite880.children[1] = Shape882;

HAnimSegment853.children[8] = HAnimSite880;

HAnimSite HAnimSite883 = createNode("HAnimSite");
HAnimSite883.name = "l_clavicale_pt";
HAnimSite883.DEF = "hanim_l_clavicale_pt";
HAnimSite883.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor884 = createNode("TouchSensor");
TouchSensor884.description = "HAnimSite l_clavicale_pt";
HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = TouchSensor884;

Shape Shape885 = createNode("Shape");
Shape885.USE = "HAnimSiteShape";
HAnimSite883.children[1] = Shape885;

HAnimSegment853.children[9] = HAnimSite883;

Shape Shape886 = createNode("Shape");
LineSet LineSet887 = createNode("LineSet");
LineSet887.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate888 = createNode("Coordinate");
Coordinate888.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet887.coord = Coordinate888;

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA ColorRGBA889 = createNode("ColorRGBA");
ColorRGBA889.USE = "HAnimSegmentLineColorRGBA";
LineSet887.color = ColorRGBA889;

Shape886.geometry = LineSet887;

HAnimSegment853.children[10] = Shape886;

HAnimSite HAnimSite890 = createNode("HAnimSite");
HAnimSite890.name = "r_acromion_pt";
HAnimSite890.DEF = "hanim_r_acromion_pt";
HAnimSite890.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor891 = createNode("TouchSensor");
TouchSensor891.description = "HAnimSite r_acromion_pt";
HAnimSite890.children = new MFNode();

HAnimSite890.children[0] = TouchSensor891;

Shape Shape892 = createNode("Shape");
Shape892.USE = "HAnimSiteShape";
HAnimSite890.children[1] = Shape892;

HAnimSegment853.children[11] = HAnimSite890;

HAnimSite HAnimSite893 = createNode("HAnimSite");
HAnimSite893.name = "r_axilla_distal_pt";
HAnimSite893.DEF = "hanim_r_axilla_distal_pt";
HAnimSite893.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor894 = createNode("TouchSensor");
TouchSensor894.description = "HAnimSite r_axilla_distal_pt";
HAnimSite893.children = new MFNode();

HAnimSite893.children[0] = TouchSensor894;

Shape Shape895 = createNode("Shape");
Shape895.USE = "HAnimSiteShape";
HAnimSite893.children[1] = Shape895;

HAnimSegment853.children[12] = HAnimSite893;

HAnimSite HAnimSite896 = createNode("HAnimSite");
HAnimSite896.name = "r_axilla_posterior_folds_pt";
HAnimSite896.DEF = "hanim_r_axilla_posterior_folds_pt";
TouchSensor TouchSensor897 = createNode("TouchSensor");
TouchSensor897.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite896.children = new MFNode();

HAnimSite896.children[0] = TouchSensor897;

Shape Shape898 = createNode("Shape");
Shape898.USE = "HAnimSiteShape";
HAnimSite896.children[1] = Shape898;

HAnimSegment853.children[13] = HAnimSite896;

HAnimSite HAnimSite899 = createNode("HAnimSite");
HAnimSite899.name = "r_axilla_proximal_pt";
HAnimSite899.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite899.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor900 = createNode("TouchSensor");
TouchSensor900.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite899.children = new MFNode();

HAnimSite899.children[0] = TouchSensor900;

Shape Shape901 = createNode("Shape");
Shape901.USE = "HAnimSiteShape";
HAnimSite899.children[1] = Shape901;

HAnimSegment853.children[14] = HAnimSite899;

HAnimSite HAnimSite902 = createNode("HAnimSite");
HAnimSite902.name = "r_clavicale_pt";
HAnimSite902.DEF = "hanim_r_clavicale_pt";
HAnimSite902.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor903 = createNode("TouchSensor");
TouchSensor903.description = "HAnimSite r_clavicale_pt";
HAnimSite902.children = new MFNode();

HAnimSite902.children[0] = TouchSensor903;

Shape Shape904 = createNode("Shape");
Shape904.USE = "HAnimSiteShape";
HAnimSite902.children[1] = Shape904;

HAnimSegment853.children[15] = HAnimSite902;

HAnimJoint852.children = new MFNode();

HAnimJoint852.children[0] = HAnimSegment853;

HAnimJoint HAnimJoint905 = createNode("HAnimJoint");
HAnimJoint905.name = "vc7";
HAnimJoint905.DEF = "hanim_vc7";
HAnimJoint905.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint905.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint905.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment906 = createNode("HAnimSegment");
HAnimSegment906.name = "c7";
HAnimSegment906.DEF = "hanim_c7";
Transform Transform907 = createNode("Transform");
Transform907.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Transform Transform908 = createNode("Transform");
//Empty Transform
Shape Shape909 = createNode("Shape");
Shape909.USE = "HAnimJointShape";
Transform908.child = new undefined();

Transform908.child[0] = Shape909;

Transform907.children = new MFNode();

Transform907.children[0] = Transform908;

HAnimSegment906.children = new MFNode();

HAnimSegment906.children[0] = Transform907;

Shape Shape910 = createNode("Shape");
LineSet LineSet911 = createNode("LineSet");
LineSet911.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate912 = createNode("Coordinate");
Coordinate912.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet911.coord = Coordinate912;

//from vc7 to vc6 vertices 2
ColorRGBA ColorRGBA913 = createNode("ColorRGBA");
ColorRGBA913.USE = "HAnimSegmentLineColorRGBA";
LineSet911.color = ColorRGBA913;

Shape910.geometry = LineSet911;

HAnimSegment906.children[1] = Shape910;

HAnimJoint905.children = new MFNode();

HAnimJoint905.children[0] = HAnimSegment906;

HAnimJoint HAnimJoint914 = createNode("HAnimJoint");
HAnimJoint914.name = "vc6";
HAnimJoint914.DEF = "hanim_vc6";
HAnimJoint914.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint914.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint914.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment915 = createNode("HAnimSegment");
HAnimSegment915.name = "c6";
HAnimSegment915.DEF = "hanim_c6";
Transform Transform916 = createNode("Transform");
Transform916.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Transform Transform917 = createNode("Transform");
//Empty Transform
Shape Shape918 = createNode("Shape");
Shape918.USE = "HAnimJointShape";
Transform917.child = new undefined();

Transform917.child[0] = Shape918;

Transform916.children = new MFNode();

Transform916.children[0] = Transform917;

HAnimSegment915.children = new MFNode();

HAnimSegment915.children[0] = Transform916;

Shape Shape919 = createNode("Shape");
LineSet LineSet920 = createNode("LineSet");
LineSet920.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate921 = createNode("Coordinate");
Coordinate921.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet920.coord = Coordinate921;

//from vc6 to vc5 vertices 2
ColorRGBA ColorRGBA922 = createNode("ColorRGBA");
ColorRGBA922.USE = "HAnimSegmentLineColorRGBA";
LineSet920.color = ColorRGBA922;

Shape919.geometry = LineSet920;

HAnimSegment915.children[1] = Shape919;

HAnimJoint914.children = new MFNode();

HAnimJoint914.children[0] = HAnimSegment915;

HAnimJoint HAnimJoint923 = createNode("HAnimJoint");
HAnimJoint923.name = "vc5";
HAnimJoint923.DEF = "hanim_vc5";
HAnimJoint923.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint923.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint923.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment924 = createNode("HAnimSegment");
HAnimSegment924.name = "c5";
HAnimSegment924.DEF = "hanim_c5";
Transform Transform925 = createNode("Transform");
Transform925.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Transform Transform926 = createNode("Transform");
//Empty Transform
Shape Shape927 = createNode("Shape");
Shape927.USE = "HAnimJointShape";
Transform926.child = new undefined();

Transform926.child[0] = Shape927;

Transform925.children = new MFNode();

Transform925.children[0] = Transform926;

HAnimSegment924.children = new MFNode();

HAnimSegment924.children[0] = Transform925;

Shape Shape928 = createNode("Shape");
LineSet LineSet929 = createNode("LineSet");
LineSet929.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate930 = createNode("Coordinate");
Coordinate930.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet929.coord = Coordinate930;

//from vc5 to vc4 vertices 2
ColorRGBA ColorRGBA931 = createNode("ColorRGBA");
ColorRGBA931.USE = "HAnimSegmentLineColorRGBA";
LineSet929.color = ColorRGBA931;

Shape928.geometry = LineSet929;

HAnimSegment924.children[1] = Shape928;

HAnimJoint923.children = new MFNode();

HAnimJoint923.children[0] = HAnimSegment924;

HAnimJoint HAnimJoint932 = createNode("HAnimJoint");
HAnimJoint932.name = "vc4";
HAnimJoint932.DEF = "hanim_vc4";
HAnimJoint932.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint932.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint932.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment933 = createNode("HAnimSegment");
HAnimSegment933.name = "c4";
HAnimSegment933.DEF = "hanim_c4";
Transform Transform934 = createNode("Transform");
Transform934.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Transform Transform935 = createNode("Transform");
//Empty Transform
Shape Shape936 = createNode("Shape");
Shape936.USE = "HAnimJointShape";
Transform935.child = new undefined();

Transform935.child[0] = Shape936;

Transform934.children = new MFNode();

Transform934.children[0] = Transform935;

HAnimSegment933.children = new MFNode();

HAnimSegment933.children[0] = Transform934;

Shape Shape937 = createNode("Shape");
LineSet LineSet938 = createNode("LineSet");
LineSet938.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate939 = createNode("Coordinate");
Coordinate939.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet938.coord = Coordinate939;

//from vc4 to vc3 vertices 2
ColorRGBA ColorRGBA940 = createNode("ColorRGBA");
ColorRGBA940.USE = "HAnimSegmentLineColorRGBA";
LineSet938.color = ColorRGBA940;

Shape937.geometry = LineSet938;

HAnimSegment933.children[1] = Shape937;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

HAnimJoint HAnimJoint941 = createNode("HAnimJoint");
HAnimJoint941.name = "vc3";
HAnimJoint941.DEF = "hanim_vc3";
HAnimJoint941.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint941.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint941.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment942 = createNode("HAnimSegment");
HAnimSegment942.name = "c3";
HAnimSegment942.DEF = "hanim_c3";
Transform Transform943 = createNode("Transform");
Transform943.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Transform Transform944 = createNode("Transform");
//Empty Transform
Shape Shape945 = createNode("Shape");
Shape945.USE = "HAnimJointShape";
Transform944.child = new undefined();

Transform944.child[0] = Shape945;

Transform943.children = new MFNode();

Transform943.children[0] = Transform944;

HAnimSegment942.children = new MFNode();

HAnimSegment942.children[0] = Transform943;

Shape Shape946 = createNode("Shape");
LineSet LineSet947 = createNode("LineSet");
LineSet947.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate948 = createNode("Coordinate");
Coordinate948.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet947.coord = Coordinate948;

//from vc3 to vc2 vertices 2
ColorRGBA ColorRGBA949 = createNode("ColorRGBA");
ColorRGBA949.USE = "HAnimSegmentLineColorRGBA";
LineSet947.color = ColorRGBA949;

Shape946.geometry = LineSet947;

HAnimSegment942.children[1] = Shape946;

HAnimSite HAnimSite950 = createNode("HAnimSite");
HAnimSite950.name = "adams_apple_pt";
HAnimSite950.DEF = "hanim_adams_apple_pt";
TouchSensor TouchSensor951 = createNode("TouchSensor");
TouchSensor951.description = "HAnimSite adams_apple_pt";
HAnimSite950.children = new MFNode();

HAnimSite950.children[0] = TouchSensor951;

Shape Shape952 = createNode("Shape");
Shape952.USE = "HAnimSiteShape";
HAnimSite950.children[1] = Shape952;

HAnimSegment942.children[2] = HAnimSite950;

HAnimJoint941.children = new MFNode();

HAnimJoint941.children[0] = HAnimSegment942;

HAnimJoint HAnimJoint953 = createNode("HAnimJoint");
HAnimJoint953.name = "vc2";
HAnimJoint953.DEF = "hanim_vc2";
HAnimJoint953.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint953.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint953.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment954 = createNode("HAnimSegment");
HAnimSegment954.name = "c2";
HAnimSegment954.DEF = "hanim_c2";
Transform Transform955 = createNode("Transform");
Transform955.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Transform Transform956 = createNode("Transform");
//Empty Transform
Shape Shape957 = createNode("Shape");
Shape957.USE = "HAnimJointShape";
Transform956.child = new undefined();

Transform956.child[0] = Shape957;

Transform955.children = new MFNode();

Transform955.children[0] = Transform956;

HAnimSegment954.children = new MFNode();

HAnimSegment954.children[0] = Transform955;

Shape Shape958 = createNode("Shape");
LineSet LineSet959 = createNode("LineSet");
LineSet959.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate960 = createNode("Coordinate");
Coordinate960.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet959.coord = Coordinate960;

//from vc2 to vc1 vertices 2
ColorRGBA ColorRGBA961 = createNode("ColorRGBA");
ColorRGBA961.USE = "HAnimSegmentLineColorRGBA";
LineSet959.color = ColorRGBA961;

Shape958.geometry = LineSet959;

HAnimSegment954.children[1] = Shape958;

HAnimJoint953.children = new MFNode();

HAnimJoint953.children[0] = HAnimSegment954;

HAnimJoint HAnimJoint962 = createNode("HAnimJoint");
HAnimJoint962.name = "vc1";
HAnimJoint962.DEF = "hanim_vc1";
HAnimJoint962.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint962.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint962.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment963 = createNode("HAnimSegment");
HAnimSegment963.name = "c1";
HAnimSegment963.DEF = "hanim_c1";
Transform Transform964 = createNode("Transform");
Transform964.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Transform Transform965 = createNode("Transform");
//Empty Transform
Shape Shape966 = createNode("Shape");
Shape966.USE = "HAnimJointShape";
Transform965.child = new undefined();

Transform965.child[0] = Shape966;

Transform964.children = new MFNode();

Transform964.children[0] = Transform965;

HAnimSegment963.children = new MFNode();

HAnimSegment963.children[0] = Transform964;

Shape Shape967 = createNode("Shape");
LineSet LineSet968 = createNode("LineSet");
LineSet968.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate969 = createNode("Coordinate");
Coordinate969.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet968.coord = Coordinate969;

//from vc1 to skullbase vertices 2
ColorRGBA ColorRGBA970 = createNode("ColorRGBA");
ColorRGBA970.USE = "HAnimSegmentLineColorRGBA";
LineSet968.color = ColorRGBA970;

Shape967.geometry = LineSet968;

HAnimSegment963.children[1] = Shape967;

HAnimSite HAnimSite971 = createNode("HAnimSite");
HAnimSite971.name = "glabella_pt";
HAnimSite971.DEF = "hanim_glabella_pt";
TouchSensor TouchSensor972 = createNode("TouchSensor");
TouchSensor972.description = "HAnimSite glabella_pt";
HAnimSite971.children = new MFNode();

HAnimSite971.children[0] = TouchSensor972;

Shape Shape973 = createNode("Shape");
Shape973.USE = "HAnimSiteShape";
HAnimSite971.children[1] = Shape973;

HAnimSegment963.children[2] = HAnimSite971;

HAnimSite HAnimSite974 = createNode("HAnimSite");
HAnimSite974.name = "l_ectocanthus_pt";
HAnimSite974.DEF = "hanim_l_ectocanthus_pt";
TouchSensor TouchSensor975 = createNode("TouchSensor");
TouchSensor975.description = "HAnimSite l_ectocanthus_pt";
HAnimSite974.children = new MFNode();

HAnimSite974.children[0] = TouchSensor975;

Shape Shape976 = createNode("Shape");
Shape976.USE = "HAnimSiteShape";
HAnimSite974.children[1] = Shape976;

HAnimSegment963.children[3] = HAnimSite974;

HAnimSite HAnimSite977 = createNode("HAnimSite");
HAnimSite977.name = "l_infraorbitale_pt";
HAnimSite977.DEF = "hanim_l_infraorbitale_pt";
HAnimSite977.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor978 = createNode("TouchSensor");
TouchSensor978.description = "HAnimSite l_infraorbitale_pt";
HAnimSite977.children = new MFNode();

HAnimSite977.children[0] = TouchSensor978;

Shape Shape979 = createNode("Shape");
Shape979.USE = "HAnimSiteShape";
HAnimSite977.children[1] = Shape979;

HAnimSegment963.children[4] = HAnimSite977;

HAnimSite HAnimSite980 = createNode("HAnimSite");
HAnimSite980.name = "l_tragion_pt";
HAnimSite980.DEF = "hanim_l_tragion_pt";
HAnimSite980.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor981 = createNode("TouchSensor");
TouchSensor981.description = "HAnimSite l_tragion_pt";
HAnimSite980.children = new MFNode();

HAnimSite980.children[0] = TouchSensor981;

Shape Shape982 = createNode("Shape");
Shape982.USE = "HAnimSiteShape";
HAnimSite980.children[1] = Shape982;

HAnimSegment963.children[5] = HAnimSite980;

HAnimSite HAnimSite983 = createNode("HAnimSite");
HAnimSite983.name = "nuchale_pt";
HAnimSite983.DEF = "hanim_nuchale_pt";
HAnimSite983.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor984 = createNode("TouchSensor");
TouchSensor984.description = "HAnimSite nuchale_pt";
HAnimSite983.children = new MFNode();

HAnimSite983.children[0] = TouchSensor984;

Shape Shape985 = createNode("Shape");
Shape985.USE = "HAnimSiteShape";
HAnimSite983.children[1] = Shape985;

HAnimSegment963.children[6] = HAnimSite983;

HAnimSite HAnimSite986 = createNode("HAnimSite");
HAnimSite986.name = "opisthocranion_pt";
HAnimSite986.DEF = "hanim_opisthocranion_pt";
TouchSensor TouchSensor987 = createNode("TouchSensor");
TouchSensor987.description = "HAnimSite opisthocranion_pt";
HAnimSite986.children = new MFNode();

HAnimSite986.children[0] = TouchSensor987;

Shape Shape988 = createNode("Shape");
Shape988.USE = "HAnimSiteShape";
HAnimSite986.children[1] = Shape988;

HAnimSegment963.children[7] = HAnimSite986;

HAnimSite HAnimSite989 = createNode("HAnimSite");
HAnimSite989.name = "r_ectocanthus_pt";
HAnimSite989.DEF = "hanim_r_ectocanthus_pt";
TouchSensor TouchSensor990 = createNode("TouchSensor");
TouchSensor990.description = "HAnimSite r_ectocanthus_pt";
HAnimSite989.children = new MFNode();

HAnimSite989.children[0] = TouchSensor990;

Shape Shape991 = createNode("Shape");
Shape991.USE = "HAnimSiteShape";
HAnimSite989.children[1] = Shape991;

HAnimSegment963.children[8] = HAnimSite989;

HAnimSite HAnimSite992 = createNode("HAnimSite");
HAnimSite992.name = "r_infraorbitale_pt";
HAnimSite992.DEF = "hanim_r_infraorbitale_pt";
HAnimSite992.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor993 = createNode("TouchSensor");
TouchSensor993.description = "HAnimSite r_infraorbitale_pt";
HAnimSite992.children = new MFNode();

HAnimSite992.children[0] = TouchSensor993;

Shape Shape994 = createNode("Shape");
Shape994.USE = "HAnimSiteShape";
HAnimSite992.children[1] = Shape994;

HAnimSegment963.children[9] = HAnimSite992;

HAnimSite HAnimSite995 = createNode("HAnimSite");
HAnimSite995.name = "r_tragion_pt";
HAnimSite995.DEF = "hanim_r_tragion_pt";
HAnimSite995.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor996 = createNode("TouchSensor");
TouchSensor996.description = "HAnimSite r_tragion_pt";
HAnimSite995.children = new MFNode();

HAnimSite995.children[0] = TouchSensor996;

Shape Shape997 = createNode("Shape");
Shape997.USE = "HAnimSiteShape";
HAnimSite995.children[1] = Shape997;

HAnimSegment963.children[10] = HAnimSite995;

HAnimSite HAnimSite998 = createNode("HAnimSite");
HAnimSite998.name = "sellion_pt";
HAnimSite998.DEF = "hanim_sellion_pt";
HAnimSite998.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor999 = createNode("TouchSensor");
TouchSensor999.description = "HAnimSite sellion_pt";
HAnimSite998.children = new MFNode();

HAnimSite998.children[0] = TouchSensor999;

Shape Shape1000 = createNode("Shape");
Shape1000.USE = "HAnimSiteShape";
HAnimSite998.children[1] = Shape1000;

HAnimSegment963.children[11] = HAnimSite998;

HAnimSite HAnimSite1001 = createNode("HAnimSite");
HAnimSite1001.name = "skull_vertex_pt";
HAnimSite1001.DEF = "hanim_skull_vertex_pt";
HAnimSite1001.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor1002 = createNode("TouchSensor");
TouchSensor1002.description = "HAnimSite skull_vertex_pt";
HAnimSite1001.children = new MFNode();

HAnimSite1001.children[0] = TouchSensor1002;

Shape Shape1003 = createNode("Shape");
Shape1003.USE = "HAnimSiteShape";
HAnimSite1001.children[1] = Shape1003;

HAnimSegment963.children[12] = HAnimSite1001;

HAnimJoint962.children = new MFNode();

HAnimJoint962.children[0] = HAnimSegment963;

HAnimJoint HAnimJoint1004 = createNode("HAnimJoint");
HAnimJoint1004.name = "skullbase";
HAnimJoint1004.DEF = "hanim_skullbase";
HAnimJoint1004.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint1004.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1005 = createNode("HAnimSegment");
HAnimSegment1005.name = "skull";
HAnimSegment1005.DEF = "hanim_skull";
Transform Transform1006 = createNode("Transform");
Transform1006.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Transform Transform1007 = createNode("Transform");
//Empty Transform
Shape Shape1008 = createNode("Shape");
Shape1008.USE = "HAnimJointShape";
Transform1007.child = new undefined();

Transform1007.child[0] = Shape1008;

Transform1006.children = new MFNode();

Transform1006.children[0] = Transform1007;

HAnimSegment1005.children = new MFNode();

HAnimSegment1005.children[0] = Transform1006;

Shape Shape1009 = createNode("Shape");
LineSet LineSet1010 = createNode("LineSet");
LineSet1010.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1011 = createNode("Coordinate");
Coordinate1011.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
LineSet1010.coord = Coordinate1011;

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA ColorRGBA1012 = createNode("ColorRGBA");
ColorRGBA1012.USE = "HAnimSegmentLineColorRGBA";
LineSet1010.color = ColorRGBA1012;

Shape1009.geometry = LineSet1010;

HAnimSegment1005.children[1] = Shape1009;

Shape Shape1013 = createNode("Shape");
LineSet LineSet1014 = createNode("LineSet");
LineSet1014.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1015 = createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
LineSet1014.coord = Coordinate1015;

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA ColorRGBA1016 = createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSegmentLineColorRGBA";
LineSet1014.color = ColorRGBA1016;

Shape1013.geometry = LineSet1014;

HAnimSegment1005.children[2] = Shape1013;

Shape Shape1017 = createNode("Shape");
LineSet LineSet1018 = createNode("LineSet");
LineSet1018.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1019 = createNode("Coordinate");
Coordinate1019.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
LineSet1018.coord = Coordinate1019;

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA ColorRGBA1020 = createNode("ColorRGBA");
ColorRGBA1020.USE = "HAnimSegmentLineColorRGBA";
LineSet1018.color = ColorRGBA1020;

Shape1017.geometry = LineSet1018;

HAnimSegment1005.children[3] = Shape1017;

Shape Shape1021 = createNode("Shape");
LineSet LineSet1022 = createNode("LineSet");
LineSet1022.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1023 = createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
LineSet1022.coord = Coordinate1023;

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA ColorRGBA1024 = createNode("ColorRGBA");
ColorRGBA1024.USE = "HAnimSegmentLineColorRGBA";
LineSet1022.color = ColorRGBA1024;

Shape1021.geometry = LineSet1022;

HAnimSegment1005.children[4] = Shape1021;

Shape Shape1025 = createNode("Shape");
LineSet LineSet1026 = createNode("LineSet");
LineSet1026.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1027 = createNode("Coordinate");
Coordinate1027.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
LineSet1026.coord = Coordinate1027;

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA ColorRGBA1028 = createNode("ColorRGBA");
ColorRGBA1028.USE = "HAnimSegmentLineColorRGBA";
LineSet1026.color = ColorRGBA1028;

Shape1025.geometry = LineSet1026;

HAnimSegment1005.children[5] = Shape1025;

Shape Shape1029 = createNode("Shape");
LineSet LineSet1030 = createNode("LineSet");
LineSet1030.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1031 = createNode("Coordinate");
Coordinate1031.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
LineSet1030.coord = Coordinate1031;

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA ColorRGBA1032 = createNode("ColorRGBA");
ColorRGBA1032.USE = "HAnimSegmentLineColorRGBA";
LineSet1030.color = ColorRGBA1032;

Shape1029.geometry = LineSet1030;

HAnimSegment1005.children[6] = Shape1029;

Shape Shape1033 = createNode("Shape");
LineSet LineSet1034 = createNode("LineSet");
LineSet1034.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1035 = createNode("Coordinate");
Coordinate1035.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
LineSet1034.coord = Coordinate1035;

//from skullbase to temporomandibular vertices 2
ColorRGBA ColorRGBA1036 = createNode("ColorRGBA");
ColorRGBA1036.USE = "HAnimSegmentLineColorRGBA";
LineSet1034.color = ColorRGBA1036;

Shape1033.geometry = LineSet1034;

HAnimSegment1005.children[7] = Shape1033;

HAnimSite HAnimSite1037 = createNode("HAnimSite");
HAnimSite1037.name = "l_gonion_pt";
HAnimSite1037.DEF = "hanim_l_gonion_pt";
HAnimSite1037.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor1038 = createNode("TouchSensor");
TouchSensor1038.description = "HAnimSite l_gonion_pt";
HAnimSite1037.children = new MFNode();

HAnimSite1037.children[0] = TouchSensor1038;

Shape Shape1039 = createNode("Shape");
Shape1039.USE = "HAnimSiteShape";
HAnimSite1037.children[1] = Shape1039;

HAnimSegment1005.children[8] = HAnimSite1037;

HAnimSite HAnimSite1040 = createNode("HAnimSite");
HAnimSite1040.name = "menton_pt";
HAnimSite1040.DEF = "hanim_menton_pt";
TouchSensor TouchSensor1041 = createNode("TouchSensor");
TouchSensor1041.description = "HAnimSite menton_pt";
HAnimSite1040.children = new MFNode();

HAnimSite1040.children[0] = TouchSensor1041;

Shape Shape1042 = createNode("Shape");
Shape1042.USE = "HAnimSiteShape";
HAnimSite1040.children[1] = Shape1042;

HAnimSegment1005.children[9] = HAnimSite1040;

HAnimSite HAnimSite1043 = createNode("HAnimSite");
HAnimSite1043.name = "r_gonion_pt";
HAnimSite1043.DEF = "hanim_r_gonion_pt";
HAnimSite1043.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor1044 = createNode("TouchSensor");
TouchSensor1044.description = "HAnimSite r_gonion_pt";
HAnimSite1043.children = new MFNode();

HAnimSite1043.children[0] = TouchSensor1044;

Shape Shape1045 = createNode("Shape");
Shape1045.USE = "HAnimSiteShape";
HAnimSite1043.children[1] = Shape1045;

HAnimSegment1005.children[10] = HAnimSite1043;

HAnimSite HAnimSite1046 = createNode("HAnimSite");
HAnimSite1046.name = "supramenton_pt";
HAnimSite1046.DEF = "hanim_supramenton_pt";
HAnimSite1046.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor1047 = createNode("TouchSensor");
TouchSensor1047.description = "HAnimSite supramenton_pt";
HAnimSite1046.children = new MFNode();

HAnimSite1046.children[0] = TouchSensor1047;

Shape Shape1048 = createNode("Shape");
Shape1048.USE = "HAnimSiteShape";
HAnimSite1046.children[1] = Shape1048;

HAnimSegment1005.children[11] = HAnimSite1046;

HAnimJoint1004.children = new MFNode();

HAnimJoint1004.children[0] = HAnimSegment1005;

HAnimJoint HAnimJoint1049 = createNode("HAnimJoint");
HAnimJoint1049.name = "l_eyelid_joint";
HAnimJoint1049.DEF = "hanim_l_eyelid_joint";
HAnimJoint1049.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint1049.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1049.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[1] = HAnimJoint1049;

HAnimJoint HAnimJoint1050 = createNode("HAnimJoint");
HAnimJoint1050.name = "r_eyelid_joint";
HAnimJoint1050.DEF = "hanim_r_eyelid_joint";
HAnimJoint1050.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint1050.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1050.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[2] = HAnimJoint1050;

HAnimJoint HAnimJoint1051 = createNode("HAnimJoint");
HAnimJoint1051.name = "l_eyeball_joint";
HAnimJoint1051.DEF = "hanim_l_eyeball_joint";
HAnimJoint1051.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint1051.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1051.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[3] = HAnimJoint1051;

HAnimJoint HAnimJoint1052 = createNode("HAnimJoint");
HAnimJoint1052.name = "r_eyeball_joint";
HAnimJoint1052.DEF = "hanim_r_eyeball_joint";
HAnimJoint1052.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint1052.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1052.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[4] = HAnimJoint1052;

HAnimJoint HAnimJoint1053 = createNode("HAnimJoint");
HAnimJoint1053.name = "l_eyebrow_joint";
HAnimJoint1053.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1053.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint1053.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1053.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[5] = HAnimJoint1053;

HAnimJoint HAnimJoint1054 = createNode("HAnimJoint");
HAnimJoint1054.name = "r_eyebrow_joint";
HAnimJoint1054.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1054.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint1054.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1054.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[6] = HAnimJoint1054;

HAnimJoint HAnimJoint1055 = createNode("HAnimJoint");
HAnimJoint1055.name = "temporomandibular";
HAnimJoint1055.DEF = "hanim_temporomandibular";
HAnimJoint1055.center = new SFVec3f(new float[-0.0002,1.3043,-0.0865]);
HAnimJoint1055.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1055.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[7] = HAnimJoint1055;

HAnimJoint962.children[1] = HAnimJoint1004;

HAnimJoint953.children[1] = HAnimJoint962;

HAnimJoint941.children[1] = HAnimJoint953;

HAnimJoint932.children[1] = HAnimJoint941;

HAnimJoint923.children[1] = HAnimJoint932;

HAnimJoint914.children[1] = HAnimJoint923;

HAnimJoint905.children[1] = HAnimJoint914;

HAnimJoint852.children[1] = HAnimJoint905;

HAnimJoint HAnimJoint1056 = createNode("HAnimJoint");
HAnimJoint1056.name = "l_sternoclavicular";
HAnimJoint1056.DEF = "hanim_l_sternoclavicular";
HAnimJoint1056.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint1056.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1056.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1057 = createNode("HAnimSegment");
HAnimSegment1057.name = "l_clavicle";
HAnimSegment1057.DEF = "hanim_l_clavicle";
Transform Transform1058 = createNode("Transform");
Transform1058.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Transform Transform1059 = createNode("Transform");
//Empty Transform
Shape Shape1060 = createNode("Shape");
Shape1060.USE = "HAnimJointShape";
Transform1059.child = new undefined();

Transform1059.child[0] = Shape1060;

Transform1058.children = new MFNode();

Transform1058.children[0] = Transform1059;

HAnimSegment1057.children = new MFNode();

HAnimSegment1057.children[0] = Transform1058;

Shape Shape1061 = createNode("Shape");
LineSet LineSet1062 = createNode("LineSet");
LineSet1062.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1063 = createNode("Coordinate");
Coordinate1063.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet1062.coord = Coordinate1063;

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA ColorRGBA1064 = createNode("ColorRGBA");
ColorRGBA1064.USE = "HAnimSegmentLineColorRGBA";
LineSet1062.color = ColorRGBA1064;

Shape1061.geometry = LineSet1062;

HAnimSegment1057.children[1] = Shape1061;

HAnimJoint1056.children = new MFNode();

HAnimJoint1056.children[0] = HAnimSegment1057;

HAnimJoint HAnimJoint1065 = createNode("HAnimJoint");
HAnimJoint1065.name = "l_acromioclavicular";
HAnimJoint1065.DEF = "hanim_l_acromioclavicular";
HAnimJoint1065.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint1065.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1065.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1066 = createNode("HAnimSegment");
HAnimSegment1066.name = "l_scapula";
HAnimSegment1066.DEF = "hanim_l_scapula";
Transform Transform1067 = createNode("Transform");
Transform1067.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Transform Transform1068 = createNode("Transform");
//Empty Transform
Shape Shape1069 = createNode("Shape");
Shape1069.USE = "HAnimJointShape";
Transform1068.child = new undefined();

Transform1068.child[0] = Shape1069;

Transform1067.children = new MFNode();

Transform1067.children[0] = Transform1068;

HAnimSegment1066.children = new MFNode();

HAnimSegment1066.children[0] = Transform1067;

Shape Shape1070 = createNode("Shape");
LineSet LineSet1071 = createNode("LineSet");
LineSet1071.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1072 = createNode("Coordinate");
Coordinate1072.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet1071.coord = Coordinate1072;

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA ColorRGBA1073 = createNode("ColorRGBA");
ColorRGBA1073.USE = "HAnimSegmentLineColorRGBA";
LineSet1071.color = ColorRGBA1073;

Shape1070.geometry = LineSet1071;

HAnimSegment1066.children[1] = Shape1070;

HAnimSite HAnimSite1074 = createNode("HAnimSite");
HAnimSite1074.name = "l_bideltoid_pt";
HAnimSite1074.DEF = "hanim_l_bideltoid_pt";
TouchSensor TouchSensor1075 = createNode("TouchSensor");
TouchSensor1075.description = "HAnimSite l_bideltoid_pt";
HAnimSite1074.children = new MFNode();

HAnimSite1074.children[0] = TouchSensor1075;

Shape Shape1076 = createNode("Shape");
Shape1076.USE = "HAnimSiteShape";
HAnimSite1074.children[1] = Shape1076;

HAnimSegment1066.children[2] = HAnimSite1074;

HAnimSite HAnimSite1077 = createNode("HAnimSite");
HAnimSite1077.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite1077.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite1077.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor1078 = createNode("TouchSensor");
TouchSensor1078.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite1077.children = new MFNode();

HAnimSite1077.children[0] = TouchSensor1078;

Shape Shape1079 = createNode("Shape");
Shape1079.USE = "HAnimSiteShape";
HAnimSite1077.children[1] = Shape1079;

HAnimSegment1066.children[3] = HAnimSite1077;

HAnimJoint1065.children = new MFNode();

HAnimJoint1065.children[0] = HAnimSegment1066;

HAnimJoint HAnimJoint1080 = createNode("HAnimJoint");
HAnimJoint1080.name = "l_shoulder";
HAnimJoint1080.DEF = "hanim_l_shoulder";
HAnimJoint1080.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint1080.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1080.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1081 = createNode("HAnimSegment");
HAnimSegment1081.name = "l_upperarm";
HAnimSegment1081.DEF = "hanim_l_upperarm";
Transform Transform1082 = createNode("Transform");
Transform1082.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform1083 = createNode("Transform");
//Empty Transform
Shape Shape1084 = createNode("Shape");
Shape1084.USE = "HAnimJointShape";
Transform1083.child = new undefined();

Transform1083.child[0] = Shape1084;

Transform1082.children = new MFNode();

Transform1082.children[0] = Transform1083;

HAnimSegment1081.children = new MFNode();

HAnimSegment1081.children[0] = Transform1082;

Shape Shape1085 = createNode("Shape");
LineSet LineSet1086 = createNode("LineSet");
LineSet1086.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1087 = createNode("Coordinate");
Coordinate1087.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet1086.coord = Coordinate1087;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA1088 = createNode("ColorRGBA");
ColorRGBA1088.USE = "HAnimSegmentLineColorRGBA";
LineSet1086.color = ColorRGBA1088;

Shape1085.geometry = LineSet1086;

HAnimSegment1081.children[1] = Shape1085;

HAnimSite HAnimSite1089 = createNode("HAnimSite");
HAnimSite1089.name = "l_humeral_medial_epicondyles_pt";
HAnimSite1089.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite1089.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor1090 = createNode("TouchSensor");
TouchSensor1090.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite1089.children = new MFNode();

HAnimSite1089.children[0] = TouchSensor1090;

Shape Shape1091 = createNode("Shape");
Shape1091.USE = "HAnimSiteShape";
HAnimSite1089.children[1] = Shape1091;

HAnimSegment1081.children[2] = HAnimSite1089;

HAnimSite HAnimSite1092 = createNode("HAnimSite");
HAnimSite1092.name = "l_olecranon_pt";
HAnimSite1092.DEF = "hanim_l_olecranon_pt";
HAnimSite1092.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor1093 = createNode("TouchSensor");
TouchSensor1093.description = "HAnimSite l_olecranon_pt";
HAnimSite1092.children = new MFNode();

HAnimSite1092.children[0] = TouchSensor1093;

Shape Shape1094 = createNode("Shape");
Shape1094.USE = "HAnimSiteShape";
HAnimSite1092.children[1] = Shape1094;

HAnimSegment1081.children[3] = HAnimSite1092;

HAnimSite HAnimSite1095 = createNode("HAnimSite");
HAnimSite1095.name = "l_radial_styloid_pt";
HAnimSite1095.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1095.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor1096 = createNode("TouchSensor");
TouchSensor1096.description = "HAnimSite l_radial_styloid_pt";
HAnimSite1095.children = new MFNode();

HAnimSite1095.children[0] = TouchSensor1096;

Shape Shape1097 = createNode("Shape");
Shape1097.USE = "HAnimSiteShape";
HAnimSite1095.children[1] = Shape1097;

HAnimSegment1081.children[4] = HAnimSite1095;

HAnimSite HAnimSite1098 = createNode("HAnimSite");
HAnimSite1098.name = "l_radiale_pt";
HAnimSite1098.DEF = "hanim_l_radiale_pt";
HAnimSite1098.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor1099 = createNode("TouchSensor");
TouchSensor1099.description = "HAnimSite l_radiale_pt";
HAnimSite1098.children = new MFNode();

HAnimSite1098.children[0] = TouchSensor1099;

Shape Shape1100 = createNode("Shape");
Shape1100.USE = "HAnimSiteShape";
HAnimSite1098.children[1] = Shape1100;

HAnimSegment1081.children[5] = HAnimSite1098;

HAnimJoint1080.children = new MFNode();

HAnimJoint1080.children[0] = HAnimSegment1081;

HAnimJoint HAnimJoint1101 = createNode("HAnimJoint");
HAnimJoint1101.name = "l_elbow";
HAnimJoint1101.DEF = "hanim_l_elbow";
HAnimJoint1101.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint1101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1101.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1102 = createNode("HAnimSegment");
HAnimSegment1102.name = "l_forearm";
HAnimSegment1102.DEF = "hanim_l_forearm";
Transform Transform1103 = createNode("Transform");
Transform1103.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform1104 = createNode("Transform");
//Empty Transform
Shape Shape1105 = createNode("Shape");
Shape1105.USE = "HAnimJointShape";
Transform1104.child = new undefined();

Transform1104.child[0] = Shape1105;

Transform1103.children = new MFNode();

Transform1103.children[0] = Transform1104;

HAnimSegment1102.children = new MFNode();

HAnimSegment1102.children[0] = Transform1103;

Shape Shape1106 = createNode("Shape");
LineSet LineSet1107 = createNode("LineSet");
LineSet1107.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1108 = createNode("Coordinate");
Coordinate1108.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1107.coord = Coordinate1108;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA1109 = createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSegmentLineColorRGBA";
LineSet1107.color = ColorRGBA1109;

Shape1106.geometry = LineSet1107;

HAnimSegment1102.children[1] = Shape1106;

HAnimSite HAnimSite1110 = createNode("HAnimSite");
HAnimSite1110.name = "l_ulnar_styloid_pt";
HAnimSite1110.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1110.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor1111 = createNode("TouchSensor");
TouchSensor1111.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1110.children = new MFNode();

HAnimSite1110.children[0] = TouchSensor1111;

Shape Shape1112 = createNode("Shape");
Shape1112.USE = "HAnimSiteShape";
HAnimSite1110.children[1] = Shape1112;

HAnimSegment1102.children[2] = HAnimSite1110;

HAnimJoint1101.children = new MFNode();

HAnimJoint1101.children[0] = HAnimSegment1102;

HAnimJoint HAnimJoint1113 = createNode("HAnimJoint");
HAnimJoint1113.name = "l_radiocarpal";
HAnimJoint1113.DEF = "hanim_l_radiocarpal";
HAnimJoint1113.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint1113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1113.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1114 = createNode("HAnimSegment");
HAnimSegment1114.name = "l_carpal";
HAnimSegment1114.DEF = "hanim_l_carpal";
Transform Transform1115 = createNode("Transform");
Transform1115.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1115.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1115.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
Transform Transform1116 = createNode("Transform");
Transform1116.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
Shape Shape1117 = createNode("Shape");
Shape1117.USE = "HAnimJointShape";
Transform1116.child = new undefined();

Transform1116.child[0] = Shape1117;

Transform1115.children = new MFNode();

Transform1115.children[0] = Transform1116;

HAnimSegment1114.children = new MFNode();

HAnimSegment1114.children[0] = Transform1115;

Shape Shape1118 = createNode("Shape");
LineSet LineSet1119 = createNode("LineSet");
LineSet1119.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1120 = createNode("Coordinate");
Coordinate1120.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826]);
LineSet1119.coord = Coordinate1120;

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA ColorRGBA1121 = createNode("ColorRGBA");
ColorRGBA1121.USE = "HAnimSegmentLineColorRGBA";
LineSet1119.color = ColorRGBA1121;

Shape1118.geometry = LineSet1119;

HAnimSegment1114.children[1] = Shape1118;

Shape Shape1122 = createNode("Shape");
LineSet LineSet1123 = createNode("LineSet");
LineSet1123.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1124 = createNode("Coordinate");
Coordinate1124.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935]);
LineSet1123.coord = Coordinate1124;

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA ColorRGBA1125 = createNode("ColorRGBA");
ColorRGBA1125.USE = "HAnimSegmentLineColorRGBA";
LineSet1123.color = ColorRGBA1125;

Shape1122.geometry = LineSet1123;

HAnimSegment1114.children[2] = Shape1122;

Shape Shape1126 = createNode("Shape");
LineSet LineSet1127 = createNode("LineSet");
LineSet1127.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1128 = createNode("Coordinate");
Coordinate1128.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067]);
LineSet1127.coord = Coordinate1128;

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA ColorRGBA1129 = createNode("ColorRGBA");
ColorRGBA1129.USE = "HAnimSegmentLineColorRGBA";
LineSet1127.color = ColorRGBA1129;

Shape1126.geometry = LineSet1127;

HAnimSegment1114.children[3] = Shape1126;

Shape Shape1130 = createNode("Shape");
LineSet LineSet1131 = createNode("LineSet");
LineSet1131.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1132 = createNode("Coordinate");
Coordinate1132.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276]);
LineSet1131.coord = Coordinate1132;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA1133 = createNode("ColorRGBA");
ColorRGBA1133.USE = "HAnimSegmentLineColorRGBA";
LineSet1131.color = ColorRGBA1133;

Shape1130.geometry = LineSet1131;

HAnimSegment1114.children[4] = Shape1130;

HAnimJoint1113.children = new MFNode();

HAnimJoint1113.children[0] = HAnimSegment1114;

HAnimJoint HAnimJoint1134 = createNode("HAnimJoint");
HAnimJoint1134.name = "l_midcarpal_1";
HAnimJoint1134.DEF = "hanim_l_midcarpal_1";
HAnimJoint1134.center = new SFVec3f(new float[0.1811,0.6975,-0.0826]);
HAnimJoint1134.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1134.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1135 = createNode("HAnimSegment");
HAnimSegment1135.name = "l_trapezium";
HAnimSegment1135.DEF = "hanim_l_trapezium";
Transform Transform1136 = createNode("Transform");
Transform1136.translation = new SFVec3f(new float[0.1811,0.6975,-0.0826]);
Transform Transform1137 = createNode("Transform");
//Empty Transform
Shape Shape1138 = createNode("Shape");
Shape1138.USE = "HAnimJointShape";
Transform1137.child = new undefined();

Transform1137.child[0] = Shape1138;

Transform1136.children = new MFNode();

Transform1136.children[0] = Transform1137;

HAnimSegment1135.children = new MFNode();

HAnimSegment1135.children[0] = Transform1136;

Shape Shape1139 = createNode("Shape");
LineSet LineSet1140 = createNode("LineSet");
LineSet1140.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1141 = createNode("Coordinate");
Coordinate1141.point = new MFVec3f(new float[0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534]);
LineSet1140.coord = Coordinate1141;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1142 = createNode("ColorRGBA");
ColorRGBA1142.USE = "HAnimSegmentLineColorRGBA";
LineSet1140.color = ColorRGBA1142;

Shape1139.geometry = LineSet1140;

HAnimSegment1135.children[1] = Shape1139;

HAnimJoint1134.children = new MFNode();

HAnimJoint1134.children[0] = HAnimSegment1135;

HAnimJoint HAnimJoint1143 = createNode("HAnimJoint");
HAnimJoint1143.name = "l_carpometacarpal_1";
HAnimJoint1143.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1143.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1143.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1144 = createNode("HAnimSegment");
HAnimSegment1144.name = "l_metacarpal_1";
HAnimSegment1144.DEF = "hanim_l_metacarpal_1";
Transform Transform1145 = createNode("Transform");
Transform1145.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Transform Transform1146 = createNode("Transform");
//Empty Transform
Shape Shape1147 = createNode("Shape");
Shape1147.USE = "HAnimJointShape";
Transform1146.child = new undefined();

Transform1146.child[0] = Shape1147;

Transform1145.children = new MFNode();

Transform1145.children[0] = Transform1146;

HAnimSegment1144.children = new MFNode();

HAnimSegment1144.children[0] = Transform1145;

Shape Shape1148 = createNode("Shape");
LineSet LineSet1149 = createNode("LineSet");
LineSet1149.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1150 = createNode("Coordinate");
Coordinate1150.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1149.coord = Coordinate1150;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1151 = createNode("ColorRGBA");
ColorRGBA1151.USE = "HAnimSegmentLineColorRGBA";
LineSet1149.color = ColorRGBA1151;

Shape1148.geometry = LineSet1149;

HAnimSegment1144.children[1] = Shape1148;

HAnimJoint1143.children = new MFNode();

HAnimJoint1143.children[0] = HAnimSegment1144;

HAnimJoint HAnimJoint1152 = createNode("HAnimJoint");
HAnimJoint1152.name = "l_metacarpophalangeal_1";
HAnimJoint1152.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1152.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1152.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1152.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1153 = createNode("HAnimSegment");
HAnimSegment1153.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1153.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform1154 = createNode("Transform");
Transform1154.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform1155 = createNode("Transform");
//Empty Transform
Shape Shape1156 = createNode("Shape");
Shape1156.USE = "HAnimJointShape";
Transform1155.child = new undefined();

Transform1155.child[0] = Shape1156;

Transform1154.children = new MFNode();

Transform1154.children[0] = Transform1155;

HAnimSegment1153.children = new MFNode();

HAnimSegment1153.children[0] = Transform1154;

Shape Shape1157 = createNode("Shape");
LineSet LineSet1158 = createNode("LineSet");
LineSet1158.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1159 = createNode("Coordinate");
Coordinate1159.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1158.coord = Coordinate1159;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1160 = createNode("ColorRGBA");
ColorRGBA1160.USE = "HAnimSegmentLineColorRGBA";
LineSet1158.color = ColorRGBA1160;

Shape1157.geometry = LineSet1158;

HAnimSegment1153.children[1] = Shape1157;

HAnimSite HAnimSite1161 = createNode("HAnimSite");
HAnimSite1161.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite1161.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor1162 = createNode("TouchSensor");
TouchSensor1162.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite1161.children = new MFNode();

HAnimSite1161.children[0] = TouchSensor1162;

Shape Shape1163 = createNode("Shape");
Shape1163.USE = "HAnimSiteShape";
HAnimSite1161.children[1] = Shape1163;

HAnimSegment1153.children[2] = HAnimSite1161;

HAnimJoint1152.children = new MFNode();

HAnimJoint1152.children[0] = HAnimSegment1153;

HAnimJoint HAnimJoint1164 = createNode("HAnimJoint");
HAnimJoint1164.name = "l_carpal_interphalangeal_1";
HAnimJoint1164.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1164.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1164.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1164.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1152.children[1] = HAnimJoint1164;

HAnimJoint1143.children[1] = HAnimJoint1152;

HAnimJoint1134.children[1] = HAnimJoint1143;

HAnimJoint1113.children[1] = HAnimJoint1134;

HAnimJoint HAnimJoint1165 = createNode("HAnimJoint");
HAnimJoint1165.name = "l_midcarpal_2";
HAnimJoint1165.DEF = "hanim_l_midcarpal_2";
HAnimJoint1165.center = new SFVec3f(new float[0.1811,0.6984,-0.0935]);
HAnimJoint1165.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1165.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1166 = createNode("HAnimSegment");
HAnimSegment1166.name = "l_trapezoid";
HAnimSegment1166.DEF = "hanim_l_trapezoid";
Transform Transform1167 = createNode("Transform");
Transform1167.translation = new SFVec3f(new float[0.1811,0.6984,-0.0935]);
Transform Transform1168 = createNode("Transform");
//Empty Transform
Shape Shape1169 = createNode("Shape");
Shape1169.USE = "HAnimJointShape";
Transform1168.child = new undefined();

Transform1168.child[0] = Shape1169;

Transform1167.children = new MFNode();

Transform1167.children[0] = Transform1168;

HAnimSegment1166.children = new MFNode();

HAnimSegment1166.children[0] = Transform1167;

Shape Shape1170 = createNode("Shape");
LineSet LineSet1171 = createNode("LineSet");
LineSet1171.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1172 = createNode("Coordinate");
Coordinate1172.point = new MFVec3f(new float[0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028]);
LineSet1171.coord = Coordinate1172;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1173 = createNode("ColorRGBA");
ColorRGBA1173.USE = "HAnimSegmentLineColorRGBA";
LineSet1171.color = ColorRGBA1173;

Shape1170.geometry = LineSet1171;

HAnimSegment1166.children[1] = Shape1170;

HAnimSite HAnimSite1174 = createNode("HAnimSite");
HAnimSite1174.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1174.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1174.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor1175 = createNode("TouchSensor");
TouchSensor1175.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite1174.children = new MFNode();

HAnimSite1174.children[0] = TouchSensor1175;

Shape Shape1176 = createNode("Shape");
Shape1176.USE = "HAnimSiteShape";
HAnimSite1174.children[1] = Shape1176;

HAnimSegment1166.children[2] = HAnimSite1174;

HAnimJoint1165.children = new MFNode();

HAnimJoint1165.children[0] = HAnimSegment1166;

HAnimJoint HAnimJoint1177 = createNode("HAnimJoint");
HAnimJoint1177.name = "l_carpometacarpal_2";
HAnimJoint1177.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1177.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1177.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1177.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1178 = createNode("HAnimSegment");
HAnimSegment1178.name = "l_metacarpal_2";
HAnimSegment1178.DEF = "hanim_l_metacarpal_2";
Transform Transform1179 = createNode("Transform");
Transform1179.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Transform Transform1180 = createNode("Transform");
//Empty Transform
Shape Shape1181 = createNode("Shape");
Shape1181.USE = "HAnimJointShape";
Transform1180.child = new undefined();

Transform1180.child[0] = Shape1181;

Transform1179.children = new MFNode();

Transform1179.children[0] = Transform1180;

HAnimSegment1178.children = new MFNode();

HAnimSegment1178.children[0] = Transform1179;

Shape Shape1182 = createNode("Shape");
LineSet LineSet1183 = createNode("LineSet");
LineSet1183.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1184 = createNode("Coordinate");
Coordinate1184.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1183.coord = Coordinate1184;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1185 = createNode("ColorRGBA");
ColorRGBA1185.USE = "HAnimSegmentLineColorRGBA";
LineSet1183.color = ColorRGBA1185;

Shape1182.geometry = LineSet1183;

HAnimSegment1178.children[1] = Shape1182;

HAnimJoint1177.children = new MFNode();

HAnimJoint1177.children[0] = HAnimSegment1178;

HAnimJoint HAnimJoint1186 = createNode("HAnimJoint");
HAnimJoint1186.name = "l_metacarpophalangeal_2";
HAnimJoint1186.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1186.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1186.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1186.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1187 = createNode("HAnimSegment");
HAnimSegment1187.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1187.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform1188 = createNode("Transform");
Transform1188.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform1189 = createNode("Transform");
//Empty Transform
Shape Shape1190 = createNode("Shape");
Shape1190.USE = "HAnimJointShape";
Transform1189.child = new undefined();

Transform1189.child[0] = Shape1190;

Transform1188.children = new MFNode();

Transform1188.children[0] = Transform1189;

HAnimSegment1187.children = new MFNode();

HAnimSegment1187.children[0] = Transform1188;

Shape Shape1191 = createNode("Shape");
LineSet LineSet1192 = createNode("LineSet");
LineSet1192.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1193 = createNode("Coordinate");
Coordinate1193.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1192.coord = Coordinate1193;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1194 = createNode("ColorRGBA");
ColorRGBA1194.USE = "HAnimSegmentLineColorRGBA";
LineSet1192.color = ColorRGBA1194;

Shape1191.geometry = LineSet1192;

HAnimSegment1187.children[1] = Shape1191;

HAnimJoint1186.children = new MFNode();

HAnimJoint1186.children[0] = HAnimSegment1187;

HAnimJoint HAnimJoint1195 = createNode("HAnimJoint");
HAnimJoint1195.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1195.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1195.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1195.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1195.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1196 = createNode("HAnimSegment");
HAnimSegment1196.name = "l_carpal_middle_phalanx_2";
HAnimSegment1196.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform1197 = createNode("Transform");
Transform1197.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform1198 = createNode("Transform");
//Empty Transform
Shape Shape1199 = createNode("Shape");
Shape1199.USE = "HAnimJointShape";
Transform1198.child = new undefined();

Transform1198.child[0] = Shape1199;

Transform1197.children = new MFNode();

Transform1197.children[0] = Transform1198;

HAnimSegment1196.children = new MFNode();

HAnimSegment1196.children[0] = Transform1197;

Shape Shape1200 = createNode("Shape");
LineSet LineSet1201 = createNode("LineSet");
LineSet1201.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1202 = createNode("Coordinate");
Coordinate1202.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1201.coord = Coordinate1202;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1203 = createNode("ColorRGBA");
ColorRGBA1203.USE = "HAnimSegmentLineColorRGBA";
LineSet1201.color = ColorRGBA1203;

Shape1200.geometry = LineSet1201;

HAnimSegment1196.children[1] = Shape1200;

HAnimSite HAnimSite1204 = createNode("HAnimSite");
HAnimSite1204.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite1204.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor1205 = createNode("TouchSensor");
TouchSensor1205.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite1204.children = new MFNode();

HAnimSite1204.children[0] = TouchSensor1205;

Shape Shape1206 = createNode("Shape");
Shape1206.USE = "HAnimSiteShape";
HAnimSite1204.children[1] = Shape1206;

HAnimSegment1196.children[2] = HAnimSite1204;

HAnimSite HAnimSite1207 = createNode("HAnimSite");
HAnimSite1207.name = "l_dactylion_pt";
HAnimSite1207.DEF = "hanim_l_dactylion_pt";
HAnimSite1207.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor1208 = createNode("TouchSensor");
TouchSensor1208.description = "HAnimSite l_dactylion_pt";
HAnimSite1207.children = new MFNode();

HAnimSite1207.children[0] = TouchSensor1208;

Shape Shape1209 = createNode("Shape");
Shape1209.USE = "HAnimSiteShape";
HAnimSite1207.children[1] = Shape1209;

HAnimSegment1196.children[3] = HAnimSite1207;

HAnimJoint1195.children = new MFNode();

HAnimJoint1195.children[0] = HAnimSegment1196;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1210.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1210.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1210.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1210.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1195.children[1] = HAnimJoint1210;

HAnimJoint1186.children[1] = HAnimJoint1195;

HAnimJoint1177.children[1] = HAnimJoint1186;

HAnimJoint1165.children[1] = HAnimJoint1177;

HAnimJoint1113.children[2] = HAnimJoint1165;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.name = "l_midcarpal_3";
HAnimJoint1211.DEF = "hanim_l_midcarpal_3";
HAnimJoint1211.center = new SFVec3f(new float[0.1809,0.7,-0.1067]);
HAnimJoint1211.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1211.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1212 = createNode("HAnimSegment");
HAnimSegment1212.name = "l_capitate";
HAnimSegment1212.DEF = "hanim_l_capitate";
Transform Transform1213 = createNode("Transform");
Transform1213.translation = new SFVec3f(new float[0.1809,0.7,-0.1067]);
Transform Transform1214 = createNode("Transform");
//Empty Transform
Shape Shape1215 = createNode("Shape");
Shape1215.USE = "HAnimJointShape";
Transform1214.child = new undefined();

Transform1214.child[0] = Shape1215;

Transform1213.children = new MFNode();

Transform1213.children[0] = Transform1214;

HAnimSegment1212.children = new MFNode();

HAnimSegment1212.children[0] = Transform1213;

Shape Shape1216 = createNode("Shape");
LineSet LineSet1217 = createNode("LineSet");
LineSet1217.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1218 = createNode("Coordinate");
Coordinate1218.point = new MFVec3f(new float[0.1809,0.7,-0.1067,0.1987,0.8029,-0.053]);
LineSet1217.coord = Coordinate1218;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1219 = createNode("ColorRGBA");
ColorRGBA1219.USE = "HAnimSegmentLineColorRGBA";
LineSet1217.color = ColorRGBA1219;

Shape1216.geometry = LineSet1217;

HAnimSegment1212.children[1] = Shape1216;

HAnimSite HAnimSite1220 = createNode("HAnimSite");
HAnimSite1220.name = "l_metacarpal_phalanx_3_pt";
HAnimSite1220.DEF = "hanim_l_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor1221 = createNode("TouchSensor");
TouchSensor1221.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite1220.children = new MFNode();

HAnimSite1220.children[0] = TouchSensor1221;

Shape Shape1222 = createNode("Shape");
Shape1222.USE = "HAnimSiteShape";
HAnimSite1220.children[1] = Shape1222;

HAnimSegment1212.children[2] = HAnimSite1220;

HAnimJoint1211.children = new MFNode();

HAnimJoint1211.children[0] = HAnimSegment1212;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.name = "l_carpometacarpal_3";
HAnimJoint1223.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1223.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1223.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1224 = createNode("HAnimSegment");
HAnimSegment1224.name = "l_metacarpal_3";
HAnimSegment1224.DEF = "hanim_l_metacarpal_3";
Transform Transform1225 = createNode("Transform");
Transform1225.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Transform Transform1226 = createNode("Transform");
//Empty Transform
Shape Shape1227 = createNode("Shape");
Shape1227.USE = "HAnimJointShape";
Transform1226.child = new undefined();

Transform1226.child[0] = Shape1227;

Transform1225.children = new MFNode();

Transform1225.children[0] = Transform1226;

HAnimSegment1224.children = new MFNode();

HAnimSegment1224.children[0] = Transform1225;

Shape Shape1228 = createNode("Shape");
LineSet LineSet1229 = createNode("LineSet");
LineSet1229.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1230 = createNode("Coordinate");
Coordinate1230.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1229.coord = Coordinate1230;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1231 = createNode("ColorRGBA");
ColorRGBA1231.USE = "HAnimSegmentLineColorRGBA";
LineSet1229.color = ColorRGBA1231;

Shape1228.geometry = LineSet1229;

HAnimSegment1224.children[1] = Shape1228;

HAnimJoint1223.children = new MFNode();

HAnimJoint1223.children[0] = HAnimSegment1224;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.name = "l_metacarpophalangeal_3";
HAnimJoint1232.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1232.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1232.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1232.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1233 = createNode("HAnimSegment");
HAnimSegment1233.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1233.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform1234 = createNode("Transform");
Transform1234.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Transform Transform1235 = createNode("Transform");
//Empty Transform
Shape Shape1236 = createNode("Shape");
Shape1236.USE = "HAnimJointShape";
Transform1235.child = new undefined();

Transform1235.child[0] = Shape1236;

Transform1234.children = new MFNode();

Transform1234.children[0] = Transform1235;

HAnimSegment1233.children = new MFNode();

HAnimSegment1233.children[0] = Transform1234;

Shape Shape1237 = createNode("Shape");
LineSet LineSet1238 = createNode("LineSet");
LineSet1238.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1239 = createNode("Coordinate");
Coordinate1239.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1238.coord = Coordinate1239;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1240 = createNode("ColorRGBA");
ColorRGBA1240.USE = "HAnimSegmentLineColorRGBA";
LineSet1238.color = ColorRGBA1240;

Shape1237.geometry = LineSet1238;

HAnimSegment1233.children[1] = Shape1237;

HAnimJoint1232.children = new MFNode();

HAnimJoint1232.children[0] = HAnimSegment1233;

HAnimJoint HAnimJoint1241 = createNode("HAnimJoint");
HAnimJoint1241.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1241.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1241.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1241.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1241.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1242 = createNode("HAnimSegment");
HAnimSegment1242.name = "l_carpal_middle_phalanx_3";
HAnimSegment1242.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform1243 = createNode("Transform");
Transform1243.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Transform Transform1244 = createNode("Transform");
//Empty Transform
Shape Shape1245 = createNode("Shape");
Shape1245.USE = "HAnimJointShape";
Transform1244.child = new undefined();

Transform1244.child[0] = Shape1245;

Transform1243.children = new MFNode();

Transform1243.children[0] = Transform1244;

HAnimSegment1242.children = new MFNode();

HAnimSegment1242.children[0] = Transform1243;

Shape Shape1246 = createNode("Shape");
LineSet LineSet1247 = createNode("LineSet");
LineSet1247.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1248 = createNode("Coordinate");
Coordinate1248.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1247.coord = Coordinate1248;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1249 = createNode("ColorRGBA");
ColorRGBA1249.USE = "HAnimSegmentLineColorRGBA";
LineSet1247.color = ColorRGBA1249;

Shape1246.geometry = LineSet1247;

HAnimSegment1242.children[1] = Shape1246;

HAnimSite HAnimSite1250 = createNode("HAnimSite");
HAnimSite1250.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite1250.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor1251 = createNode("TouchSensor");
TouchSensor1251.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite1250.children = new MFNode();

HAnimSite1250.children[0] = TouchSensor1251;

Shape Shape1252 = createNode("Shape");
Shape1252.USE = "HAnimSiteShape";
HAnimSite1250.children[1] = Shape1252;

HAnimSegment1242.children[2] = HAnimSite1250;

HAnimJoint1241.children = new MFNode();

HAnimJoint1241.children[0] = HAnimSegment1242;

HAnimJoint HAnimJoint1253 = createNode("HAnimJoint");
HAnimJoint1253.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1253.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1253.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1253.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1253.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1241.children[1] = HAnimJoint1253;

HAnimJoint1232.children[1] = HAnimJoint1241;

HAnimJoint1223.children[1] = HAnimJoint1232;

HAnimJoint1211.children[1] = HAnimJoint1223;

HAnimJoint1113.children[3] = HAnimJoint1211;

HAnimJoint HAnimJoint1254 = createNode("HAnimJoint");
HAnimJoint1254.name = "l_midcarpal_4_5";
HAnimJoint1254.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1254.center = new SFVec3f(new float[0.1809,0.6973,-0.1276]);
HAnimJoint1254.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1254.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1255 = createNode("HAnimSegment");
HAnimSegment1255.name = "l_hamate";
HAnimSegment1255.DEF = "hanim_l_hamate";
Transform Transform1256 = createNode("Transform");
Transform1256.translation = new SFVec3f(new float[0.1809,0.6973,-0.1276]);
Transform Transform1257 = createNode("Transform");
//Empty Transform
Shape Shape1258 = createNode("Shape");
Shape1258.USE = "HAnimJointShape";
Transform1257.child = new undefined();

Transform1257.child[0] = Shape1258;

Transform1256.children = new MFNode();

Transform1256.children[0] = Transform1257;

HAnimSegment1255.children = new MFNode();

HAnimSegment1255.children[0] = Transform1256;

Shape Shape1259 = createNode("Shape");
LineSet LineSet1260 = createNode("LineSet");
LineSet1260.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1261 = createNode("Coordinate");
Coordinate1261.point = new MFVec3f(new float[0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794]);
LineSet1260.coord = Coordinate1261;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1262 = createNode("ColorRGBA");
ColorRGBA1262.USE = "HAnimSegmentLineColorRGBA";
LineSet1260.color = ColorRGBA1262;

Shape1259.geometry = LineSet1260;

HAnimSegment1255.children[1] = Shape1259;

Shape Shape1263 = createNode("Shape");
LineSet LineSet1264 = createNode("LineSet");
LineSet1264.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1265 = createNode("Coordinate");
Coordinate1265.point = new MFVec3f(new float[0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036]);
LineSet1264.coord = Coordinate1265;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1266 = createNode("ColorRGBA");
ColorRGBA1266.USE = "HAnimSegmentLineColorRGBA";
LineSet1264.color = ColorRGBA1266;

Shape1263.geometry = LineSet1264;

HAnimSegment1255.children[2] = Shape1263;

HAnimSite HAnimSite1267 = createNode("HAnimSite");
HAnimSite1267.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1267.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1267.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor1268 = createNode("TouchSensor");
TouchSensor1268.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite1267.children = new MFNode();

HAnimSite1267.children[0] = TouchSensor1268;

Shape Shape1269 = createNode("Shape");
Shape1269.USE = "HAnimSiteShape";
HAnimSite1267.children[1] = Shape1269;

HAnimSegment1255.children[3] = HAnimSite1267;

HAnimJoint1254.children = new MFNode();

HAnimJoint1254.children[0] = HAnimSegment1255;

HAnimJoint HAnimJoint1270 = createNode("HAnimJoint");
HAnimJoint1270.name = "l_carpometacarpal_4";
HAnimJoint1270.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1270.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1270.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1270.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1271 = createNode("HAnimSegment");
HAnimSegment1271.name = "l_metacarpal_4";
HAnimSegment1271.DEF = "hanim_l_metacarpal_4";
Transform Transform1272 = createNode("Transform");
Transform1272.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Transform Transform1273 = createNode("Transform");
//Empty Transform
Shape Shape1274 = createNode("Shape");
Shape1274.USE = "HAnimJointShape";
Transform1273.child = new undefined();

Transform1273.child[0] = Shape1274;

Transform1272.children = new MFNode();

Transform1272.children[0] = Transform1273;

HAnimSegment1271.children = new MFNode();

HAnimSegment1271.children[0] = Transform1272;

Shape Shape1275 = createNode("Shape");
LineSet LineSet1276 = createNode("LineSet");
LineSet1276.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1277 = createNode("Coordinate");
Coordinate1277.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1276.coord = Coordinate1277;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1278 = createNode("ColorRGBA");
ColorRGBA1278.USE = "HAnimSegmentLineColorRGBA";
LineSet1276.color = ColorRGBA1278;

Shape1275.geometry = LineSet1276;

HAnimSegment1271.children[1] = Shape1275;

HAnimJoint1270.children = new MFNode();

HAnimJoint1270.children[0] = HAnimSegment1271;

HAnimJoint HAnimJoint1279 = createNode("HAnimJoint");
HAnimJoint1279.name = "l_metacarpophalangeal_4";
HAnimJoint1279.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1279.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1279.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1279.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1280 = createNode("HAnimSegment");
HAnimSegment1280.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1280.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform1281 = createNode("Transform");
Transform1281.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform1282 = createNode("Transform");
//Empty Transform
Shape Shape1283 = createNode("Shape");
Shape1283.USE = "HAnimJointShape";
Transform1282.child = new undefined();

Transform1282.child[0] = Shape1283;

Transform1281.children = new MFNode();

Transform1281.children[0] = Transform1282;

HAnimSegment1280.children = new MFNode();

HAnimSegment1280.children[0] = Transform1281;

Shape Shape1284 = createNode("Shape");
LineSet LineSet1285 = createNode("LineSet");
LineSet1285.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1286 = createNode("Coordinate");
Coordinate1286.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1285.coord = Coordinate1286;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1287 = createNode("ColorRGBA");
ColorRGBA1287.USE = "HAnimSegmentLineColorRGBA";
LineSet1285.color = ColorRGBA1287;

Shape1284.geometry = LineSet1285;

HAnimSegment1280.children[1] = Shape1284;

HAnimJoint1279.children = new MFNode();

HAnimJoint1279.children[0] = HAnimSegment1280;

HAnimJoint HAnimJoint1288 = createNode("HAnimJoint");
HAnimJoint1288.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1288.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1288.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1288.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1288.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1289 = createNode("HAnimSegment");
HAnimSegment1289.name = "l_carpal_middle_phalanx_4";
HAnimSegment1289.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform1290 = createNode("Transform");
Transform1290.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Transform Transform1291 = createNode("Transform");
//Empty Transform
Shape Shape1292 = createNode("Shape");
Shape1292.USE = "HAnimJointShape";
Transform1291.child = new undefined();

Transform1291.child[0] = Shape1292;

Transform1290.children = new MFNode();

Transform1290.children[0] = Transform1291;

HAnimSegment1289.children = new MFNode();

HAnimSegment1289.children[0] = Transform1290;

Shape Shape1293 = createNode("Shape");
LineSet LineSet1294 = createNode("LineSet");
LineSet1294.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1295 = createNode("Coordinate");
Coordinate1295.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1294.coord = Coordinate1295;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1296 = createNode("ColorRGBA");
ColorRGBA1296.USE = "HAnimSegmentLineColorRGBA";
LineSet1294.color = ColorRGBA1296;

Shape1293.geometry = LineSet1294;

HAnimSegment1289.children[1] = Shape1293;

HAnimSite HAnimSite1297 = createNode("HAnimSite");
HAnimSite1297.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite1297.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor1298 = createNode("TouchSensor");
TouchSensor1298.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite1297.children = new MFNode();

HAnimSite1297.children[0] = TouchSensor1298;

Shape Shape1299 = createNode("Shape");
Shape1299.USE = "HAnimSiteShape";
HAnimSite1297.children[1] = Shape1299;

HAnimSegment1289.children[2] = HAnimSite1297;

HAnimJoint1288.children = new MFNode();

HAnimJoint1288.children[0] = HAnimSegment1289;

HAnimJoint HAnimJoint1300 = createNode("HAnimJoint");
HAnimJoint1300.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1300.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1300.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1300.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1300.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1288.children[1] = HAnimJoint1300;

HAnimJoint1279.children[1] = HAnimJoint1288;

HAnimJoint1270.children[1] = HAnimJoint1279;

HAnimJoint1254.children[1] = HAnimJoint1270;

HAnimJoint HAnimJoint1301 = createNode("HAnimJoint");
HAnimJoint1301.name = "l_carpometacarpal_5";
HAnimJoint1301.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1301.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1301.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1301.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1302 = createNode("HAnimSegment");
HAnimSegment1302.name = "l_metacarpal_5";
HAnimSegment1302.DEF = "hanim_l_metacarpal_5";
Transform Transform1303 = createNode("Transform");
Transform1303.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Transform Transform1304 = createNode("Transform");
//Empty Transform
Shape Shape1305 = createNode("Shape");
Shape1305.USE = "HAnimJointShape";
Transform1304.child = new undefined();

Transform1304.child[0] = Shape1305;

Transform1303.children = new MFNode();

Transform1303.children[0] = Transform1304;

HAnimSegment1302.children = new MFNode();

HAnimSegment1302.children[0] = Transform1303;

Shape Shape1306 = createNode("Shape");
LineSet LineSet1307 = createNode("LineSet");
LineSet1307.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1308 = createNode("Coordinate");
Coordinate1308.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1307.coord = Coordinate1308;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1309 = createNode("ColorRGBA");
ColorRGBA1309.USE = "HAnimSegmentLineColorRGBA";
LineSet1307.color = ColorRGBA1309;

Shape1306.geometry = LineSet1307;

HAnimSegment1302.children[1] = Shape1306;

HAnimJoint1301.children = new MFNode();

HAnimJoint1301.children[0] = HAnimSegment1302;

HAnimJoint HAnimJoint1310 = createNode("HAnimJoint");
HAnimJoint1310.name = "l_metacarpophalangeal_5";
HAnimJoint1310.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1310.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1310.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1310.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1311 = createNode("HAnimSegment");
HAnimSegment1311.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1311.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform1312 = createNode("Transform");
Transform1312.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Transform Transform1313 = createNode("Transform");
//Empty Transform
Shape Shape1314 = createNode("Shape");
Shape1314.USE = "HAnimJointShape";
Transform1313.child = new undefined();

Transform1313.child[0] = Shape1314;

Transform1312.children = new MFNode();

Transform1312.children[0] = Transform1313;

HAnimSegment1311.children = new MFNode();

HAnimSegment1311.children[0] = Transform1312;

Shape Shape1315 = createNode("Shape");
LineSet LineSet1316 = createNode("LineSet");
LineSet1316.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1317 = createNode("Coordinate");
Coordinate1317.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1316.coord = Coordinate1317;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1318 = createNode("ColorRGBA");
ColorRGBA1318.USE = "HAnimSegmentLineColorRGBA";
LineSet1316.color = ColorRGBA1318;

Shape1315.geometry = LineSet1316;

HAnimSegment1311.children[1] = Shape1315;

HAnimJoint1310.children = new MFNode();

HAnimJoint1310.children[0] = HAnimSegment1311;

HAnimJoint HAnimJoint1319 = createNode("HAnimJoint");
HAnimJoint1319.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1319.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1319.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1319.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1319.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1320 = createNode("HAnimSegment");
HAnimSegment1320.name = "l_carpal_middle_phalanx_5";
HAnimSegment1320.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform1321 = createNode("Transform");
Transform1321.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform1322 = createNode("Transform");
//Empty Transform
Shape Shape1323 = createNode("Shape");
Shape1323.USE = "HAnimJointShape";
Transform1322.child = new undefined();

Transform1322.child[0] = Shape1323;

Transform1321.children = new MFNode();

Transform1321.children[0] = Transform1322;

HAnimSegment1320.children = new MFNode();

HAnimSegment1320.children[0] = Transform1321;

Shape Shape1324 = createNode("Shape");
LineSet LineSet1325 = createNode("LineSet");
LineSet1325.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1326 = createNode("Coordinate");
Coordinate1326.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1325.coord = Coordinate1326;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1327 = createNode("ColorRGBA");
ColorRGBA1327.USE = "HAnimSegmentLineColorRGBA";
LineSet1325.color = ColorRGBA1327;

Shape1324.geometry = LineSet1325;

HAnimSegment1320.children[1] = Shape1324;

HAnimSite HAnimSite1328 = createNode("HAnimSite");
HAnimSite1328.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite1328.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor1329 = createNode("TouchSensor");
TouchSensor1329.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite1328.children = new MFNode();

HAnimSite1328.children[0] = TouchSensor1329;

Shape Shape1330 = createNode("Shape");
Shape1330.USE = "HAnimSiteShape";
HAnimSite1328.children[1] = Shape1330;

HAnimSegment1320.children[2] = HAnimSite1328;

HAnimJoint1319.children = new MFNode();

HAnimJoint1319.children[0] = HAnimSegment1320;

HAnimJoint HAnimJoint1331 = createNode("HAnimJoint");
HAnimJoint1331.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1331.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1331.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1331.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1331.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1319.children[1] = HAnimJoint1331;

HAnimJoint1310.children[1] = HAnimJoint1319;

HAnimJoint1301.children[1] = HAnimJoint1310;

HAnimJoint1254.children[2] = HAnimJoint1301;

HAnimJoint1113.children[4] = HAnimJoint1254;

HAnimJoint1101.children[1] = HAnimJoint1113;

HAnimJoint1080.children[1] = HAnimJoint1101;

HAnimJoint1065.children[1] = HAnimJoint1080;

HAnimJoint1056.children[1] = HAnimJoint1065;

HAnimJoint852.children[2] = HAnimJoint1056;

HAnimJoint HAnimJoint1332 = createNode("HAnimJoint");
HAnimJoint1332.name = "r_sternoclavicular";
HAnimJoint1332.DEF = "hanim_r_sternoclavicular";
HAnimJoint1332.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint1332.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1332.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1333 = createNode("HAnimSegment");
HAnimSegment1333.name = "r_clavicle";
HAnimSegment1333.DEF = "hanim_r_clavicle";
Transform Transform1334 = createNode("Transform");
Transform1334.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
Transform Transform1335 = createNode("Transform");
//Empty Transform
Shape Shape1336 = createNode("Shape");
Shape1336.USE = "HAnimJointShape";
Transform1335.child = new undefined();

Transform1335.child[0] = Shape1336;

Transform1334.children = new MFNode();

Transform1334.children[0] = Transform1335;

HAnimSegment1333.children = new MFNode();

HAnimSegment1333.children[0] = Transform1334;

Shape Shape1337 = createNode("Shape");
LineSet LineSet1338 = createNode("LineSet");
LineSet1338.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1339 = createNode("Coordinate");
Coordinate1339.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1338.coord = Coordinate1339;

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA ColorRGBA1340 = createNode("ColorRGBA");
ColorRGBA1340.USE = "HAnimSegmentLineColorRGBA";
LineSet1338.color = ColorRGBA1340;

Shape1337.geometry = LineSet1338;

HAnimSegment1333.children[1] = Shape1337;

HAnimJoint1332.children = new MFNode();

HAnimJoint1332.children[0] = HAnimSegment1333;

HAnimJoint HAnimJoint1341 = createNode("HAnimJoint");
HAnimJoint1341.name = "r_acromioclavicular";
HAnimJoint1341.DEF = "hanim_r_acromioclavicular";
HAnimJoint1341.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint1341.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1341.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1342 = createNode("HAnimSegment");
HAnimSegment1342.name = "r_scapula";
HAnimSegment1342.DEF = "hanim_r_scapula";
Transform Transform1343 = createNode("Transform");
Transform1343.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform1344 = createNode("Transform");
//Empty Transform
Shape Shape1345 = createNode("Shape");
Shape1345.USE = "HAnimJointShape";
Transform1344.child = new undefined();

Transform1344.child[0] = Shape1345;

Transform1343.children = new MFNode();

Transform1343.children[0] = Transform1344;

HAnimSegment1342.children = new MFNode();

HAnimSegment1342.children[0] = Transform1343;

Shape Shape1346 = createNode("Shape");
LineSet LineSet1347 = createNode("LineSet");
LineSet1347.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1348 = createNode("Coordinate");
Coordinate1348.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1347.coord = Coordinate1348;

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA ColorRGBA1349 = createNode("ColorRGBA");
ColorRGBA1349.USE = "HAnimSegmentLineColorRGBA";
LineSet1347.color = ColorRGBA1349;

Shape1346.geometry = LineSet1347;

HAnimSegment1342.children[1] = Shape1346;

HAnimSite HAnimSite1350 = createNode("HAnimSite");
HAnimSite1350.name = "r_bideltoid_pt";
HAnimSite1350.DEF = "hanim_r_bideltoid_pt";
TouchSensor TouchSensor1351 = createNode("TouchSensor");
TouchSensor1351.description = "HAnimSite r_bideltoid_pt";
HAnimSite1350.children = new MFNode();

HAnimSite1350.children[0] = TouchSensor1351;

Shape Shape1352 = createNode("Shape");
Shape1352.USE = "HAnimSiteShape";
HAnimSite1350.children[1] = Shape1352;

HAnimSegment1342.children[2] = HAnimSite1350;

HAnimSite HAnimSite1353 = createNode("HAnimSite");
HAnimSite1353.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite1353.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite1353.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1354 = createNode("TouchSensor");
TouchSensor1354.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite1353.children = new MFNode();

HAnimSite1353.children[0] = TouchSensor1354;

Shape Shape1355 = createNode("Shape");
Shape1355.USE = "HAnimSiteShape";
HAnimSite1353.children[1] = Shape1355;

HAnimSegment1342.children[3] = HAnimSite1353;

HAnimJoint1341.children = new MFNode();

HAnimJoint1341.children[0] = HAnimSegment1342;

HAnimJoint HAnimJoint1356 = createNode("HAnimJoint");
HAnimJoint1356.name = "r_shoulder";
HAnimJoint1356.DEF = "hanim_r_shoulder";
HAnimJoint1356.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint1356.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1356.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1357 = createNode("HAnimSegment");
HAnimSegment1357.name = "r_upperarm";
HAnimSegment1357.DEF = "hanim_r_upperarm";
Transform Transform1358 = createNode("Transform");
Transform1358.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform1359 = createNode("Transform");
//Empty Transform
Shape Shape1360 = createNode("Shape");
Shape1360.USE = "HAnimJointShape";
Transform1359.child = new undefined();

Transform1359.child[0] = Shape1360;

Transform1358.children = new MFNode();

Transform1358.children[0] = Transform1359;

HAnimSegment1357.children = new MFNode();

HAnimSegment1357.children[0] = Transform1358;

Shape Shape1361 = createNode("Shape");
LineSet LineSet1362 = createNode("LineSet");
LineSet1362.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1363 = createNode("Coordinate");
Coordinate1363.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1362.coord = Coordinate1363;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA1364 = createNode("ColorRGBA");
ColorRGBA1364.USE = "HAnimSegmentLineColorRGBA";
LineSet1362.color = ColorRGBA1364;

Shape1361.geometry = LineSet1362;

HAnimSegment1357.children[1] = Shape1361;

HAnimSite HAnimSite1365 = createNode("HAnimSite");
HAnimSite1365.name = "r_humeral_medial_epicondyles_pt";
HAnimSite1365.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite1365.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1366 = createNode("TouchSensor");
TouchSensor1366.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite1365.children = new MFNode();

HAnimSite1365.children[0] = TouchSensor1366;

Shape Shape1367 = createNode("Shape");
Shape1367.USE = "HAnimSiteShape";
HAnimSite1365.children[1] = Shape1367;

HAnimSegment1357.children[2] = HAnimSite1365;

HAnimSite HAnimSite1368 = createNode("HAnimSite");
HAnimSite1368.name = "r_olecranon_pt";
HAnimSite1368.DEF = "hanim_r_olecranon_pt";
HAnimSite1368.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1369 = createNode("TouchSensor");
TouchSensor1369.description = "HAnimSite r_olecranon_pt";
HAnimSite1368.children = new MFNode();

HAnimSite1368.children[0] = TouchSensor1369;

Shape Shape1370 = createNode("Shape");
Shape1370.USE = "HAnimSiteShape";
HAnimSite1368.children[1] = Shape1370;

HAnimSegment1357.children[3] = HAnimSite1368;

HAnimSite HAnimSite1371 = createNode("HAnimSite");
HAnimSite1371.name = "r_radial_styloid_pt";
HAnimSite1371.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1371.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1372 = createNode("TouchSensor");
TouchSensor1372.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1371.children = new MFNode();

HAnimSite1371.children[0] = TouchSensor1372;

Shape Shape1373 = createNode("Shape");
Shape1373.USE = "HAnimSiteShape";
HAnimSite1371.children[1] = Shape1373;

HAnimSegment1357.children[4] = HAnimSite1371;

HAnimSite HAnimSite1374 = createNode("HAnimSite");
HAnimSite1374.name = "r_radiale_pt";
HAnimSite1374.DEF = "hanim_r_radiale_pt";
HAnimSite1374.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1375 = createNode("TouchSensor");
TouchSensor1375.description = "HAnimSite r_radiale_pt";
HAnimSite1374.children = new MFNode();

HAnimSite1374.children[0] = TouchSensor1375;

Shape Shape1376 = createNode("Shape");
Shape1376.USE = "HAnimSiteShape";
HAnimSite1374.children[1] = Shape1376;

HAnimSegment1357.children[5] = HAnimSite1374;

HAnimJoint1356.children = new MFNode();

HAnimJoint1356.children[0] = HAnimSegment1357;

HAnimJoint HAnimJoint1377 = createNode("HAnimJoint");
HAnimJoint1377.name = "r_elbow";
HAnimJoint1377.DEF = "hanim_r_elbow";
HAnimJoint1377.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint1377.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1377.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1378 = createNode("HAnimSegment");
HAnimSegment1378.name = "r_forearm";
HAnimSegment1378.DEF = "hanim_r_forearm";
Transform Transform1379 = createNode("Transform");
Transform1379.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform1380 = createNode("Transform");
//Empty Transform
Shape Shape1381 = createNode("Shape");
Shape1381.USE = "HAnimJointShape";
Transform1380.child = new undefined();

Transform1380.child[0] = Shape1381;

Transform1379.children = new MFNode();

Transform1379.children[0] = Transform1380;

HAnimSegment1378.children = new MFNode();

HAnimSegment1378.children[0] = Transform1379;

Shape Shape1382 = createNode("Shape");
LineSet LineSet1383 = createNode("LineSet");
LineSet1383.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1384 = createNode("Coordinate");
Coordinate1384.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1383.coord = Coordinate1384;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA1385 = createNode("ColorRGBA");
ColorRGBA1385.USE = "HAnimSegmentLineColorRGBA";
LineSet1383.color = ColorRGBA1385;

Shape1382.geometry = LineSet1383;

HAnimSegment1378.children[1] = Shape1382;

HAnimSite HAnimSite1386 = createNode("HAnimSite");
HAnimSite1386.name = "r_ulnar_styloid_pt";
HAnimSite1386.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1386.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1387 = createNode("TouchSensor");
TouchSensor1387.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1386.children = new MFNode();

HAnimSite1386.children[0] = TouchSensor1387;

Shape Shape1388 = createNode("Shape");
Shape1388.USE = "HAnimSiteShape";
HAnimSite1386.children[1] = Shape1388;

HAnimSegment1378.children[2] = HAnimSite1386;

HAnimJoint1377.children = new MFNode();

HAnimJoint1377.children[0] = HAnimSegment1378;

HAnimJoint HAnimJoint1389 = createNode("HAnimJoint");
HAnimJoint1389.name = "r_radiocarpal";
HAnimJoint1389.DEF = "hanim_r_radiocarpal";
HAnimJoint1389.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint1389.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1389.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1390 = createNode("HAnimSegment");
HAnimSegment1390.name = "r_carpal";
HAnimSegment1390.DEF = "hanim_r_carpal";
Transform Transform1391 = createNode("Transform");
Transform1391.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1391.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1391.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
Transform Transform1392 = createNode("Transform");
Transform1392.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
Shape Shape1393 = createNode("Shape");
Shape1393.USE = "HAnimJointShape";
Transform1392.child = new undefined();

Transform1392.child[0] = Shape1393;

Transform1391.children = new MFNode();

Transform1391.children[0] = Transform1392;

HAnimSegment1390.children = new MFNode();

HAnimSegment1390.children[0] = Transform1391;

Shape Shape1394 = createNode("Shape");
LineSet LineSet1395 = createNode("LineSet");
LineSet1395.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1396 = createNode("Coordinate");
Coordinate1396.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826]);
LineSet1395.coord = Coordinate1396;

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA ColorRGBA1397 = createNode("ColorRGBA");
ColorRGBA1397.USE = "HAnimSegmentLineColorRGBA";
LineSet1395.color = ColorRGBA1397;

Shape1394.geometry = LineSet1395;

HAnimSegment1390.children[1] = Shape1394;

Shape Shape1398 = createNode("Shape");
LineSet LineSet1399 = createNode("LineSet");
LineSet1399.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1400 = createNode("Coordinate");
Coordinate1400.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935]);
LineSet1399.coord = Coordinate1400;

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA ColorRGBA1401 = createNode("ColorRGBA");
ColorRGBA1401.USE = "HAnimSegmentLineColorRGBA";
LineSet1399.color = ColorRGBA1401;

Shape1398.geometry = LineSet1399;

HAnimSegment1390.children[2] = Shape1398;

Shape Shape1402 = createNode("Shape");
LineSet LineSet1403 = createNode("LineSet");
LineSet1403.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1404 = createNode("Coordinate");
Coordinate1404.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067]);
LineSet1403.coord = Coordinate1404;

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA ColorRGBA1405 = createNode("ColorRGBA");
ColorRGBA1405.USE = "HAnimSegmentLineColorRGBA";
LineSet1403.color = ColorRGBA1405;

Shape1402.geometry = LineSet1403;

HAnimSegment1390.children[3] = Shape1402;

Shape Shape1406 = createNode("Shape");
LineSet LineSet1407 = createNode("LineSet");
LineSet1407.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1408 = createNode("Coordinate");
Coordinate1408.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276]);
LineSet1407.coord = Coordinate1408;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA1409 = createNode("ColorRGBA");
ColorRGBA1409.USE = "HAnimSegmentLineColorRGBA";
LineSet1407.color = ColorRGBA1409;

Shape1406.geometry = LineSet1407;

HAnimSegment1390.children[4] = Shape1406;

HAnimJoint1389.children = new MFNode();

HAnimJoint1389.children[0] = HAnimSegment1390;

HAnimJoint HAnimJoint1410 = createNode("HAnimJoint");
HAnimJoint1410.name = "r_midcarpal_1";
HAnimJoint1410.DEF = "hanim_r_midcarpal_1";
HAnimJoint1410.center = new SFVec3f(new float[-0.1811,0.6975,-0.0826]);
HAnimJoint1410.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1410.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1411 = createNode("HAnimSegment");
HAnimSegment1411.name = "r_trapezium";
HAnimSegment1411.DEF = "hanim_r_trapezium";
Transform Transform1412 = createNode("Transform");
Transform1412.translation = new SFVec3f(new float[-0.1811,0.6975,-0.0826]);
Transform Transform1413 = createNode("Transform");
//Empty Transform
Shape Shape1414 = createNode("Shape");
Shape1414.USE = "HAnimJointShape";
Transform1413.child = new undefined();

Transform1413.child[0] = Shape1414;

Transform1412.children = new MFNode();

Transform1412.children[0] = Transform1413;

HAnimSegment1411.children = new MFNode();

HAnimSegment1411.children[0] = Transform1412;

Shape Shape1415 = createNode("Shape");
LineSet LineSet1416 = createNode("LineSet");
LineSet1416.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1417 = createNode("Coordinate");
Coordinate1417.point = new MFVec3f(new float[-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473]);
LineSet1416.coord = Coordinate1417;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1418 = createNode("ColorRGBA");
ColorRGBA1418.USE = "HAnimSegmentLineColorRGBA";
LineSet1416.color = ColorRGBA1418;

Shape1415.geometry = LineSet1416;

HAnimSegment1411.children[1] = Shape1415;

HAnimJoint1410.children = new MFNode();

HAnimJoint1410.children[0] = HAnimSegment1411;

HAnimJoint HAnimJoint1419 = createNode("HAnimJoint");
HAnimJoint1419.name = "r_carpometacarpal_1";
HAnimJoint1419.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1419.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1419.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1419.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1420 = createNode("HAnimSegment");
HAnimSegment1420.name = "r_metacarpal_1";
HAnimSegment1420.DEF = "hanim_r_metacarpal_1";
Transform Transform1421 = createNode("Transform");
Transform1421.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
Transform Transform1422 = createNode("Transform");
//Empty Transform
Shape Shape1423 = createNode("Shape");
Shape1423.USE = "HAnimJointShape";
Transform1422.child = new undefined();

Transform1422.child[0] = Shape1423;

Transform1421.children = new MFNode();

Transform1421.children[0] = Transform1422;

HAnimSegment1420.children = new MFNode();

HAnimSegment1420.children[0] = Transform1421;

Shape Shape1424 = createNode("Shape");
LineSet LineSet1425 = createNode("LineSet");
LineSet1425.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1426 = createNode("Coordinate");
Coordinate1426.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1425.coord = Coordinate1426;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1427 = createNode("ColorRGBA");
ColorRGBA1427.USE = "HAnimSegmentLineColorRGBA";
LineSet1425.color = ColorRGBA1427;

Shape1424.geometry = LineSet1425;

HAnimSegment1420.children[1] = Shape1424;

HAnimJoint1419.children = new MFNode();

HAnimJoint1419.children[0] = HAnimSegment1420;

HAnimJoint HAnimJoint1428 = createNode("HAnimJoint");
HAnimJoint1428.name = "r_metacarpophalangeal_1";
HAnimJoint1428.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1428.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1428.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1428.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1429 = createNode("HAnimSegment");
HAnimSegment1429.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1429.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform1430 = createNode("Transform");
Transform1430.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
Transform Transform1431 = createNode("Transform");
//Empty Transform
Shape Shape1432 = createNode("Shape");
Shape1432.USE = "HAnimJointShape";
Transform1431.child = new undefined();

Transform1431.child[0] = Shape1432;

Transform1430.children = new MFNode();

Transform1430.children[0] = Transform1431;

HAnimSegment1429.children = new MFNode();

HAnimSegment1429.children[0] = Transform1430;

Shape Shape1433 = createNode("Shape");
LineSet LineSet1434 = createNode("LineSet");
LineSet1434.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1435 = createNode("Coordinate");
Coordinate1435.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1434.coord = Coordinate1435;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1436 = createNode("ColorRGBA");
ColorRGBA1436.USE = "HAnimSegmentLineColorRGBA";
LineSet1434.color = ColorRGBA1436;

Shape1433.geometry = LineSet1434;

HAnimSegment1429.children[1] = Shape1433;

HAnimSite HAnimSite1437 = createNode("HAnimSite");
HAnimSite1437.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1437.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor1438 = createNode("TouchSensor");
TouchSensor1438.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1437.children = new MFNode();

HAnimSite1437.children[0] = TouchSensor1438;

Shape Shape1439 = createNode("Shape");
Shape1439.USE = "HAnimSiteShape";
HAnimSite1437.children[1] = Shape1439;

HAnimSegment1429.children[2] = HAnimSite1437;

HAnimJoint1428.children = new MFNode();

HAnimJoint1428.children[0] = HAnimSegment1429;

HAnimJoint HAnimJoint1440 = createNode("HAnimJoint");
HAnimJoint1440.name = "r_carpal_interphalangeal_1";
HAnimJoint1440.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1440.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1440.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1440.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1428.children[1] = HAnimJoint1440;

HAnimJoint1419.children[1] = HAnimJoint1428;

HAnimJoint1410.children[1] = HAnimJoint1419;

HAnimJoint1389.children[1] = HAnimJoint1410;

HAnimJoint HAnimJoint1441 = createNode("HAnimJoint");
HAnimJoint1441.name = "r_midcarpal_2";
HAnimJoint1441.DEF = "hanim_r_midcarpal_2";
HAnimJoint1441.center = new SFVec3f(new float[-0.1811,0.6984,-0.0935]);
HAnimJoint1441.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1441.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1442 = createNode("HAnimSegment");
HAnimSegment1442.name = "r_trapezoid";
HAnimSegment1442.DEF = "hanim_r_trapezoid";
Transform Transform1443 = createNode("Transform");
Transform1443.translation = new SFVec3f(new float[-0.1811,0.6984,-0.0935]);
Transform Transform1444 = createNode("Transform");
//Empty Transform
Shape Shape1445 = createNode("Shape");
Shape1445.USE = "HAnimJointShape";
Transform1444.child = new undefined();

Transform1444.child[0] = Shape1445;

Transform1443.children = new MFNode();

Transform1443.children[0] = Transform1444;

HAnimSegment1442.children = new MFNode();

HAnimSegment1442.children[0] = Transform1443;

Shape Shape1446 = createNode("Shape");
LineSet LineSet1447 = createNode("LineSet");
LineSet1447.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1448 = createNode("Coordinate");
Coordinate1448.point = new MFVec3f(new float[-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218]);
LineSet1447.coord = Coordinate1448;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1449 = createNode("ColorRGBA");
ColorRGBA1449.USE = "HAnimSegmentLineColorRGBA";
LineSet1447.color = ColorRGBA1449;

Shape1446.geometry = LineSet1447;

HAnimSegment1442.children[1] = Shape1446;

HAnimSite HAnimSite1450 = createNode("HAnimSite");
HAnimSite1450.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1450.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1450.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1451 = createNode("TouchSensor");
TouchSensor1451.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1450.children = new MFNode();

HAnimSite1450.children[0] = TouchSensor1451;

Shape Shape1452 = createNode("Shape");
Shape1452.USE = "HAnimSiteShape";
HAnimSite1450.children[1] = Shape1452;

HAnimSegment1442.children[2] = HAnimSite1450;

HAnimJoint1441.children = new MFNode();

HAnimJoint1441.children[0] = HAnimSegment1442;

HAnimJoint HAnimJoint1453 = createNode("HAnimJoint");
HAnimJoint1453.name = "r_carpometacarpal_2";
HAnimJoint1453.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1453.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1453.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1453.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1454 = createNode("HAnimSegment");
HAnimSegment1454.name = "r_metacarpal_2";
HAnimSegment1454.DEF = "hanim_r_metacarpal_2";
Transform Transform1455 = createNode("Transform");
Transform1455.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
Transform Transform1456 = createNode("Transform");
//Empty Transform
Shape Shape1457 = createNode("Shape");
Shape1457.USE = "HAnimJointShape";
Transform1456.child = new undefined();

Transform1456.child[0] = Shape1457;

Transform1455.children = new MFNode();

Transform1455.children[0] = Transform1456;

HAnimSegment1454.children = new MFNode();

HAnimSegment1454.children[0] = Transform1455;

Shape Shape1458 = createNode("Shape");
LineSet LineSet1459 = createNode("LineSet");
LineSet1459.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1460 = createNode("Coordinate");
Coordinate1460.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1459.coord = Coordinate1460;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1461 = createNode("ColorRGBA");
ColorRGBA1461.USE = "HAnimSegmentLineColorRGBA";
LineSet1459.color = ColorRGBA1461;

Shape1458.geometry = LineSet1459;

HAnimSegment1454.children[1] = Shape1458;

HAnimJoint1453.children = new MFNode();

HAnimJoint1453.children[0] = HAnimSegment1454;

HAnimJoint HAnimJoint1462 = createNode("HAnimJoint");
HAnimJoint1462.name = "r_metacarpophalangeal_2";
HAnimJoint1462.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1462.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1462.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1462.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1463 = createNode("HAnimSegment");
HAnimSegment1463.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1463.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform1464 = createNode("Transform");
Transform1464.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform1465 = createNode("Transform");
//Empty Transform
Shape Shape1466 = createNode("Shape");
Shape1466.USE = "HAnimJointShape";
Transform1465.child = new undefined();

Transform1465.child[0] = Shape1466;

Transform1464.children = new MFNode();

Transform1464.children[0] = Transform1465;

HAnimSegment1463.children = new MFNode();

HAnimSegment1463.children[0] = Transform1464;

Shape Shape1467 = createNode("Shape");
LineSet LineSet1468 = createNode("LineSet");
LineSet1468.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1469 = createNode("Coordinate");
Coordinate1469.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1468.coord = Coordinate1469;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1470 = createNode("ColorRGBA");
ColorRGBA1470.USE = "HAnimSegmentLineColorRGBA";
LineSet1468.color = ColorRGBA1470;

Shape1467.geometry = LineSet1468;

HAnimSegment1463.children[1] = Shape1467;

HAnimJoint1462.children = new MFNode();

HAnimJoint1462.children[0] = HAnimSegment1463;

HAnimJoint HAnimJoint1471 = createNode("HAnimJoint");
HAnimJoint1471.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1471.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1471.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1471.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1471.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1472 = createNode("HAnimSegment");
HAnimSegment1472.name = "r_carpal_middle_phalanx_2";
HAnimSegment1472.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform1473 = createNode("Transform");
Transform1473.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform1474 = createNode("Transform");
//Empty Transform
Shape Shape1475 = createNode("Shape");
Shape1475.USE = "HAnimJointShape";
Transform1474.child = new undefined();

Transform1474.child[0] = Shape1475;

Transform1473.children = new MFNode();

Transform1473.children[0] = Transform1474;

HAnimSegment1472.children = new MFNode();

HAnimSegment1472.children[0] = Transform1473;

Shape Shape1476 = createNode("Shape");
LineSet LineSet1477 = createNode("LineSet");
LineSet1477.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1478 = createNode("Coordinate");
Coordinate1478.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1477.coord = Coordinate1478;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1479 = createNode("ColorRGBA");
ColorRGBA1479.USE = "HAnimSegmentLineColorRGBA";
LineSet1477.color = ColorRGBA1479;

Shape1476.geometry = LineSet1477;

HAnimSegment1472.children[1] = Shape1476;

HAnimSite HAnimSite1480 = createNode("HAnimSite");
HAnimSite1480.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1480.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor1481 = createNode("TouchSensor");
TouchSensor1481.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1480.children = new MFNode();

HAnimSite1480.children[0] = TouchSensor1481;

Shape Shape1482 = createNode("Shape");
Shape1482.USE = "HAnimSiteShape";
HAnimSite1480.children[1] = Shape1482;

HAnimSegment1472.children[2] = HAnimSite1480;

HAnimSite HAnimSite1483 = createNode("HAnimSite");
HAnimSite1483.name = "r_dactylion_pt";
HAnimSite1483.DEF = "hanim_r_dactylion_pt";
HAnimSite1483.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1484 = createNode("TouchSensor");
TouchSensor1484.description = "HAnimSite r_dactylion_pt";
HAnimSite1483.children = new MFNode();

HAnimSite1483.children[0] = TouchSensor1484;

Shape Shape1485 = createNode("Shape");
Shape1485.USE = "HAnimSiteShape";
HAnimSite1483.children[1] = Shape1485;

HAnimSegment1472.children[3] = HAnimSite1483;

HAnimJoint1471.children = new MFNode();

HAnimJoint1471.children[0] = HAnimSegment1472;

HAnimJoint HAnimJoint1486 = createNode("HAnimJoint");
HAnimJoint1486.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1486.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1486.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1486.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1486.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1471.children[1] = HAnimJoint1486;

HAnimJoint1462.children[1] = HAnimJoint1471;

HAnimJoint1453.children[1] = HAnimJoint1462;

HAnimJoint1441.children[1] = HAnimJoint1453;

HAnimJoint1389.children[2] = HAnimJoint1441;

HAnimJoint HAnimJoint1487 = createNode("HAnimJoint");
HAnimJoint1487.name = "r_midcarpal_3";
HAnimJoint1487.DEF = "hanim_r_midcarpal_3";
HAnimJoint1487.center = new SFVec3f(new float[-0.1809,0.7,-0.1067]);
HAnimJoint1487.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1487.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1488 = createNode("HAnimSegment");
HAnimSegment1488.name = "r_capitate";
HAnimSegment1488.DEF = "hanim_r_capitate";
Transform Transform1489 = createNode("Transform");
Transform1489.translation = new SFVec3f(new float[-0.1809,0.7,-0.1067]);
Transform Transform1490 = createNode("Transform");
//Empty Transform
Shape Shape1491 = createNode("Shape");
Shape1491.USE = "HAnimJointShape";
Transform1490.child = new undefined();

Transform1490.child[0] = Shape1491;

Transform1489.children = new MFNode();

Transform1489.children[0] = Transform1490;

HAnimSegment1488.children = new MFNode();

HAnimSegment1488.children[0] = Transform1489;

Shape Shape1492 = createNode("Shape");
LineSet LineSet1493 = createNode("LineSet");
LineSet1493.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1494 = createNode("Coordinate");
Coordinate1494.point = new MFVec3f(new float[-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468]);
LineSet1493.coord = Coordinate1494;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1495 = createNode("ColorRGBA");
ColorRGBA1495.USE = "HAnimSegmentLineColorRGBA";
LineSet1493.color = ColorRGBA1495;

Shape1492.geometry = LineSet1493;

HAnimSegment1488.children[1] = Shape1492;

HAnimSite HAnimSite1496 = createNode("HAnimSite");
HAnimSite1496.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1496.DEF = "hanim_r_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor1497 = createNode("TouchSensor");
TouchSensor1497.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1496.children = new MFNode();

HAnimSite1496.children[0] = TouchSensor1497;

Shape Shape1498 = createNode("Shape");
Shape1498.USE = "HAnimSiteShape";
HAnimSite1496.children[1] = Shape1498;

HAnimSegment1488.children[2] = HAnimSite1496;

HAnimJoint1487.children = new MFNode();

HAnimJoint1487.children[0] = HAnimSegment1488;

HAnimJoint HAnimJoint1499 = createNode("HAnimJoint");
HAnimJoint1499.name = "r_carpometacarpal_3";
HAnimJoint1499.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1499.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1499.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1499.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1500 = createNode("HAnimSegment");
HAnimSegment1500.name = "r_metacarpal_3";
HAnimSegment1500.DEF = "hanim_r_metacarpal_3";
Transform Transform1501 = createNode("Transform");
Transform1501.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform1502 = createNode("Transform");
//Empty Transform
Shape Shape1503 = createNode("Shape");
Shape1503.USE = "HAnimJointShape";
Transform1502.child = new undefined();

Transform1502.child[0] = Shape1503;

Transform1501.children = new MFNode();

Transform1501.children[0] = Transform1502;

HAnimSegment1500.children = new MFNode();

HAnimSegment1500.children[0] = Transform1501;

Shape Shape1504 = createNode("Shape");
LineSet LineSet1505 = createNode("LineSet");
LineSet1505.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1506 = createNode("Coordinate");
Coordinate1506.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1505.coord = Coordinate1506;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1507 = createNode("ColorRGBA");
ColorRGBA1507.USE = "HAnimSegmentLineColorRGBA";
LineSet1505.color = ColorRGBA1507;

Shape1504.geometry = LineSet1505;

HAnimSegment1500.children[1] = Shape1504;

HAnimJoint1499.children = new MFNode();

HAnimJoint1499.children[0] = HAnimSegment1500;

HAnimJoint HAnimJoint1508 = createNode("HAnimJoint");
HAnimJoint1508.name = "r_metacarpophalangeal_3";
HAnimJoint1508.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1508.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1508.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1508.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1509 = createNode("HAnimSegment");
HAnimSegment1509.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1509.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform1510 = createNode("Transform");
Transform1510.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
Transform Transform1511 = createNode("Transform");
//Empty Transform
Shape Shape1512 = createNode("Shape");
Shape1512.USE = "HAnimJointShape";
Transform1511.child = new undefined();

Transform1511.child[0] = Shape1512;

Transform1510.children = new MFNode();

Transform1510.children[0] = Transform1511;

HAnimSegment1509.children = new MFNode();

HAnimSegment1509.children[0] = Transform1510;

Shape Shape1513 = createNode("Shape");
LineSet LineSet1514 = createNode("LineSet");
LineSet1514.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1515 = createNode("Coordinate");
Coordinate1515.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1514.coord = Coordinate1515;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1516 = createNode("ColorRGBA");
ColorRGBA1516.USE = "HAnimSegmentLineColorRGBA";
LineSet1514.color = ColorRGBA1516;

Shape1513.geometry = LineSet1514;

HAnimSegment1509.children[1] = Shape1513;

HAnimJoint1508.children = new MFNode();

HAnimJoint1508.children[0] = HAnimSegment1509;

HAnimJoint HAnimJoint1517 = createNode("HAnimJoint");
HAnimJoint1517.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1517.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1517.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1517.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1517.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1518 = createNode("HAnimSegment");
HAnimSegment1518.name = "r_carpal_middle_phalanx_3";
HAnimSegment1518.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform1519 = createNode("Transform");
Transform1519.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
Transform Transform1520 = createNode("Transform");
//Empty Transform
Shape Shape1521 = createNode("Shape");
Shape1521.USE = "HAnimJointShape";
Transform1520.child = new undefined();

Transform1520.child[0] = Shape1521;

Transform1519.children = new MFNode();

Transform1519.children[0] = Transform1520;

HAnimSegment1518.children = new MFNode();

HAnimSegment1518.children[0] = Transform1519;

Shape Shape1522 = createNode("Shape");
LineSet LineSet1523 = createNode("LineSet");
LineSet1523.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1524 = createNode("Coordinate");
Coordinate1524.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1523.coord = Coordinate1524;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1525 = createNode("ColorRGBA");
ColorRGBA1525.USE = "HAnimSegmentLineColorRGBA";
LineSet1523.color = ColorRGBA1525;

Shape1522.geometry = LineSet1523;

HAnimSegment1518.children[1] = Shape1522;

HAnimSite HAnimSite1526 = createNode("HAnimSite");
HAnimSite1526.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1526.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor1527 = createNode("TouchSensor");
TouchSensor1527.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1526.children = new MFNode();

HAnimSite1526.children[0] = TouchSensor1527;

Shape Shape1528 = createNode("Shape");
Shape1528.USE = "HAnimSiteShape";
HAnimSite1526.children[1] = Shape1528;

HAnimSegment1518.children[2] = HAnimSite1526;

HAnimJoint1517.children = new MFNode();

HAnimJoint1517.children[0] = HAnimSegment1518;

HAnimJoint HAnimJoint1529 = createNode("HAnimJoint");
HAnimJoint1529.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1529.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1529.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1529.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1529.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1517.children[1] = HAnimJoint1529;

HAnimJoint1508.children[1] = HAnimJoint1517;

HAnimJoint1499.children[1] = HAnimJoint1508;

HAnimJoint1487.children[1] = HAnimJoint1499;

HAnimJoint1389.children[3] = HAnimJoint1487;

HAnimJoint HAnimJoint1530 = createNode("HAnimJoint");
HAnimJoint1530.name = "r_midcarpal_4_5";
HAnimJoint1530.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1530.center = new SFVec3f(new float[-0.1809,0.6973,-0.1276]);
HAnimJoint1530.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1530.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1531 = createNode("HAnimSegment");
HAnimSegment1531.name = "r_hamate";
HAnimSegment1531.DEF = "hanim_r_hamate";
Transform Transform1532 = createNode("Transform");
Transform1532.translation = new SFVec3f(new float[-0.1809,0.6973,-0.1276]);
Transform Transform1533 = createNode("Transform");
//Empty Transform
Shape Shape1534 = createNode("Shape");
Shape1534.USE = "HAnimJointShape";
Transform1533.child = new undefined();

Transform1533.child[0] = Shape1534;

Transform1532.children = new MFNode();

Transform1532.children[0] = Transform1533;

HAnimSegment1531.children = new MFNode();

HAnimSegment1531.children[0] = Transform1532;

Shape Shape1535 = createNode("Shape");
LineSet LineSet1536 = createNode("LineSet");
LineSet1536.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1537 = createNode("Coordinate");
Coordinate1537.point = new MFVec3f(new float[-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732]);
LineSet1536.coord = Coordinate1537;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1538 = createNode("ColorRGBA");
ColorRGBA1538.USE = "HAnimSegmentLineColorRGBA";
LineSet1536.color = ColorRGBA1538;

Shape1535.geometry = LineSet1536;

HAnimSegment1531.children[1] = Shape1535;

Shape Shape1539 = createNode("Shape");
LineSet LineSet1540 = createNode("LineSet");
LineSet1540.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1541 = createNode("Coordinate");
Coordinate1541.point = new MFVec3f(new float[-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975]);
LineSet1540.coord = Coordinate1541;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1542 = createNode("ColorRGBA");
ColorRGBA1542.USE = "HAnimSegmentLineColorRGBA";
LineSet1540.color = ColorRGBA1542;

Shape1539.geometry = LineSet1540;

HAnimSegment1531.children[2] = Shape1539;

HAnimSite HAnimSite1543 = createNode("HAnimSite");
HAnimSite1543.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1543.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1543.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1544 = createNode("TouchSensor");
TouchSensor1544.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1543.children = new MFNode();

HAnimSite1543.children[0] = TouchSensor1544;

Shape Shape1545 = createNode("Shape");
Shape1545.USE = "HAnimSiteShape";
HAnimSite1543.children[1] = Shape1545;

HAnimSegment1531.children[3] = HAnimSite1543;

HAnimJoint1530.children = new MFNode();

HAnimJoint1530.children[0] = HAnimSegment1531;

HAnimJoint HAnimJoint1546 = createNode("HAnimJoint");
HAnimJoint1546.name = "r_carpometacarpal_4";
HAnimJoint1546.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1546.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1546.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1546.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1547 = createNode("HAnimSegment");
HAnimSegment1547.name = "r_metacarpal_4";
HAnimSegment1547.DEF = "hanim_r_metacarpal_4";
Transform Transform1548 = createNode("Transform");
Transform1548.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
Transform Transform1549 = createNode("Transform");
//Empty Transform
Shape Shape1550 = createNode("Shape");
Shape1550.USE = "HAnimJointShape";
Transform1549.child = new undefined();

Transform1549.child[0] = Shape1550;

Transform1548.children = new MFNode();

Transform1548.children[0] = Transform1549;

HAnimSegment1547.children = new MFNode();

HAnimSegment1547.children[0] = Transform1548;

Shape Shape1551 = createNode("Shape");
LineSet LineSet1552 = createNode("LineSet");
LineSet1552.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1553 = createNode("Coordinate");
Coordinate1553.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1552.coord = Coordinate1553;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1554 = createNode("ColorRGBA");
ColorRGBA1554.USE = "HAnimSegmentLineColorRGBA";
LineSet1552.color = ColorRGBA1554;

Shape1551.geometry = LineSet1552;

HAnimSegment1547.children[1] = Shape1551;

HAnimJoint1546.children = new MFNode();

HAnimJoint1546.children[0] = HAnimSegment1547;

HAnimJoint HAnimJoint1555 = createNode("HAnimJoint");
HAnimJoint1555.name = "r_metacarpophalangeal_4";
HAnimJoint1555.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1555.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1555.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1555.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1556 = createNode("HAnimSegment");
HAnimSegment1556.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1556.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform1557 = createNode("Transform");
Transform1557.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform1558 = createNode("Transform");
//Empty Transform
Shape Shape1559 = createNode("Shape");
Shape1559.USE = "HAnimJointShape";
Transform1558.child = new undefined();

Transform1558.child[0] = Shape1559;

Transform1557.children = new MFNode();

Transform1557.children[0] = Transform1558;

HAnimSegment1556.children = new MFNode();

HAnimSegment1556.children[0] = Transform1557;

Shape Shape1560 = createNode("Shape");
LineSet LineSet1561 = createNode("LineSet");
LineSet1561.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1562 = createNode("Coordinate");
Coordinate1562.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1561.coord = Coordinate1562;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1563 = createNode("ColorRGBA");
ColorRGBA1563.USE = "HAnimSegmentLineColorRGBA";
LineSet1561.color = ColorRGBA1563;

Shape1560.geometry = LineSet1561;

HAnimSegment1556.children[1] = Shape1560;

HAnimJoint1555.children = new MFNode();

HAnimJoint1555.children[0] = HAnimSegment1556;

HAnimJoint HAnimJoint1564 = createNode("HAnimJoint");
HAnimJoint1564.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1564.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1564.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1564.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1564.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1565 = createNode("HAnimSegment");
HAnimSegment1565.name = "r_carpal_middle_phalanx_4";
HAnimSegment1565.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform1566 = createNode("Transform");
Transform1566.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform1567 = createNode("Transform");
//Empty Transform
Shape Shape1568 = createNode("Shape");
Shape1568.USE = "HAnimJointShape";
Transform1567.child = new undefined();

Transform1567.child[0] = Shape1568;

Transform1566.children = new MFNode();

Transform1566.children[0] = Transform1567;

HAnimSegment1565.children = new MFNode();

HAnimSegment1565.children[0] = Transform1566;

Shape Shape1569 = createNode("Shape");
LineSet LineSet1570 = createNode("LineSet");
LineSet1570.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1571 = createNode("Coordinate");
Coordinate1571.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1570.coord = Coordinate1571;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1572 = createNode("ColorRGBA");
ColorRGBA1572.USE = "HAnimSegmentLineColorRGBA";
LineSet1570.color = ColorRGBA1572;

Shape1569.geometry = LineSet1570;

HAnimSegment1565.children[1] = Shape1569;

HAnimSite HAnimSite1573 = createNode("HAnimSite");
HAnimSite1573.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1573.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor1574 = createNode("TouchSensor");
TouchSensor1574.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1573.children = new MFNode();

HAnimSite1573.children[0] = TouchSensor1574;

Shape Shape1575 = createNode("Shape");
Shape1575.USE = "HAnimSiteShape";
HAnimSite1573.children[1] = Shape1575;

HAnimSegment1565.children[2] = HAnimSite1573;

HAnimJoint1564.children = new MFNode();

HAnimJoint1564.children[0] = HAnimSegment1565;

HAnimJoint HAnimJoint1576 = createNode("HAnimJoint");
HAnimJoint1576.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1576.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1576.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1576.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1576.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1564.children[1] = HAnimJoint1576;

HAnimJoint1555.children[1] = HAnimJoint1564;

HAnimJoint1546.children[1] = HAnimJoint1555;

HAnimJoint1530.children[1] = HAnimJoint1546;

HAnimJoint HAnimJoint1577 = createNode("HAnimJoint");
HAnimJoint1577.name = "r_carpometacarpal_5";
HAnimJoint1577.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1577.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1577.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1577.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1578 = createNode("HAnimSegment");
HAnimSegment1578.name = "r_metacarpal_5";
HAnimSegment1578.DEF = "hanim_r_metacarpal_5";
Transform Transform1579 = createNode("Transform");
Transform1579.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
Transform Transform1580 = createNode("Transform");
//Empty Transform
Shape Shape1581 = createNode("Shape");
Shape1581.USE = "HAnimJointShape";
Transform1580.child = new undefined();

Transform1580.child[0] = Shape1581;

Transform1579.children = new MFNode();

Transform1579.children[0] = Transform1580;

HAnimSegment1578.children = new MFNode();

HAnimSegment1578.children[0] = Transform1579;

Shape Shape1582 = createNode("Shape");
LineSet LineSet1583 = createNode("LineSet");
LineSet1583.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1584 = createNode("Coordinate");
Coordinate1584.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1583.coord = Coordinate1584;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1585 = createNode("ColorRGBA");
ColorRGBA1585.USE = "HAnimSegmentLineColorRGBA";
LineSet1583.color = ColorRGBA1585;

Shape1582.geometry = LineSet1583;

HAnimSegment1578.children[1] = Shape1582;

HAnimJoint1577.children = new MFNode();

HAnimJoint1577.children[0] = HAnimSegment1578;

HAnimJoint HAnimJoint1586 = createNode("HAnimJoint");
HAnimJoint1586.name = "r_metacarpophalangeal_5";
HAnimJoint1586.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1586.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1586.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1586.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1587 = createNode("HAnimSegment");
HAnimSegment1587.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1587.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform1588 = createNode("Transform");
Transform1588.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
Transform Transform1589 = createNode("Transform");
//Empty Transform
Shape Shape1590 = createNode("Shape");
Shape1590.USE = "HAnimJointShape";
Transform1589.child = new undefined();

Transform1589.child[0] = Shape1590;

Transform1588.children = new MFNode();

Transform1588.children[0] = Transform1589;

HAnimSegment1587.children = new MFNode();

HAnimSegment1587.children[0] = Transform1588;

Shape Shape1591 = createNode("Shape");
LineSet LineSet1592 = createNode("LineSet");
LineSet1592.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1593 = createNode("Coordinate");
Coordinate1593.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1592.coord = Coordinate1593;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1594 = createNode("ColorRGBA");
ColorRGBA1594.USE = "HAnimSegmentLineColorRGBA";
LineSet1592.color = ColorRGBA1594;

Shape1591.geometry = LineSet1592;

HAnimSegment1587.children[1] = Shape1591;

HAnimJoint1586.children = new MFNode();

HAnimJoint1586.children[0] = HAnimSegment1587;

HAnimJoint HAnimJoint1595 = createNode("HAnimJoint");
HAnimJoint1595.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1595.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1595.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1595.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1595.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1596 = createNode("HAnimSegment");
HAnimSegment1596.name = "r_carpal_middle_phalanx_5";
HAnimSegment1596.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform1597 = createNode("Transform");
Transform1597.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
Transform Transform1598 = createNode("Transform");
//Empty Transform
Shape Shape1599 = createNode("Shape");
Shape1599.USE = "HAnimJointShape";
Transform1598.child = new undefined();

Transform1598.child[0] = Shape1599;

Transform1597.children = new MFNode();

Transform1597.children[0] = Transform1598;

HAnimSegment1596.children = new MFNode();

HAnimSegment1596.children[0] = Transform1597;

Shape Shape1600 = createNode("Shape");
LineSet LineSet1601 = createNode("LineSet");
LineSet1601.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1602 = createNode("Coordinate");
Coordinate1602.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1601.coord = Coordinate1602;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1603 = createNode("ColorRGBA");
ColorRGBA1603.USE = "HAnimSegmentLineColorRGBA";
LineSet1601.color = ColorRGBA1603;

Shape1600.geometry = LineSet1601;

HAnimSegment1596.children[1] = Shape1600;

HAnimSite HAnimSite1604 = createNode("HAnimSite");
HAnimSite1604.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1604.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor1605 = createNode("TouchSensor");
TouchSensor1605.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1604.children = new MFNode();

HAnimSite1604.children[0] = TouchSensor1605;

Shape Shape1606 = createNode("Shape");
Shape1606.USE = "HAnimSiteShape";
HAnimSite1604.children[1] = Shape1606;

HAnimSegment1596.children[2] = HAnimSite1604;

HAnimJoint1595.children = new MFNode();

HAnimJoint1595.children[0] = HAnimSegment1596;

HAnimJoint HAnimJoint1607 = createNode("HAnimJoint");
HAnimJoint1607.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1607.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1607.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1607.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1607.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1595.children[1] = HAnimJoint1607;

HAnimJoint1586.children[1] = HAnimJoint1595;

HAnimJoint1577.children[1] = HAnimJoint1586;

HAnimJoint1530.children[2] = HAnimJoint1577;

HAnimJoint1389.children[4] = HAnimJoint1530;

HAnimJoint1377.children[1] = HAnimJoint1389;

HAnimJoint1356.children[1] = HAnimJoint1377;

HAnimJoint1341.children[1] = HAnimJoint1356;

HAnimJoint1332.children[1] = HAnimJoint1341;

HAnimJoint852.children[3] = HAnimJoint1332;

HAnimJoint837.children[1] = HAnimJoint852;

HAnimJoint828.children[1] = HAnimJoint837;

HAnimJoint819.children[1] = HAnimJoint828;

HAnimJoint810.children[1] = HAnimJoint819;

HAnimJoint798.children[1] = HAnimJoint810;

HAnimJoint777.children[1] = HAnimJoint798;

HAnimJoint768.children[1] = HAnimJoint777;

HAnimJoint759.children[1] = HAnimJoint768;

HAnimJoint744.children[1] = HAnimJoint759;

HAnimJoint732.children[1] = HAnimJoint744;

HAnimJoint723.children[1] = HAnimJoint732;

HAnimJoint714.children[1] = HAnimJoint723;

HAnimJoint705.children[1] = HAnimJoint714;

HAnimJoint687.children[1] = HAnimJoint705;

HAnimJoint678.children[1] = HAnimJoint687;

HAnimJoint669.children[1] = HAnimJoint678;

HAnimJoint52.children[2] = HAnimJoint669;

HAnimHumanoid43.joints[1] = HAnimJoint52;

HAnimJoint HAnimJoint1608 = createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint1608;

HAnimJoint HAnimJoint1609 = createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint1609;

HAnimJoint HAnimJoint1610 = createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint1610;

HAnimJoint HAnimJoint1611 = createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint1611;

HAnimJoint HAnimJoint1612 = createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint1612;

HAnimJoint HAnimJoint1613 = createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid43.joints[7] = HAnimJoint1613;

HAnimJoint HAnimJoint1614 = createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid43.joints[8] = HAnimJoint1614;

HAnimJoint HAnimJoint1615 = createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid43.joints[9] = HAnimJoint1615;

HAnimJoint HAnimJoint1616 = createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid43.joints[10] = HAnimJoint1616;

HAnimJoint HAnimJoint1617 = createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[11] = HAnimJoint1617;

HAnimJoint HAnimJoint1618 = createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid43.joints[12] = HAnimJoint1618;

HAnimJoint HAnimJoint1619 = createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1619;

HAnimJoint HAnimJoint1620 = createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1620;

HAnimJoint HAnimJoint1621 = createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1621;

HAnimJoint HAnimJoint1622 = createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[16] = HAnimJoint1622;

HAnimJoint HAnimJoint1623 = createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid43.joints[17] = HAnimJoint1623;

HAnimJoint HAnimJoint1624 = createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid43.joints[18] = HAnimJoint1624;

HAnimJoint HAnimJoint1625 = createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid43.joints[19] = HAnimJoint1625;

HAnimJoint HAnimJoint1626 = createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[20] = HAnimJoint1626;

HAnimJoint HAnimJoint1627 = createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[21] = HAnimJoint1627;

HAnimJoint HAnimJoint1628 = createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid43.joints[22] = HAnimJoint1628;

HAnimJoint HAnimJoint1629 = createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_l_transversetarsal";
HAnimHumanoid43.joints[23] = HAnimJoint1629;

HAnimJoint HAnimJoint1630 = createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid43.joints[24] = HAnimJoint1630;

HAnimJoint HAnimJoint1631 = createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid43.joints[25] = HAnimJoint1631;

HAnimJoint HAnimJoint1632 = createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[26] = HAnimJoint1632;

HAnimJoint HAnimJoint1633 = createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[27] = HAnimJoint1633;

HAnimJoint HAnimJoint1634 = createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid43.joints[28] = HAnimJoint1634;

HAnimJoint HAnimJoint1635 = createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid43.joints[29] = HAnimJoint1635;

HAnimJoint HAnimJoint1636 = createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[30] = HAnimJoint1636;

HAnimJoint HAnimJoint1637 = createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[31] = HAnimJoint1637;

HAnimJoint HAnimJoint1638 = createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_r_hip";
HAnimHumanoid43.joints[32] = HAnimJoint1638;

HAnimJoint HAnimJoint1639 = createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_knee";
HAnimHumanoid43.joints[33] = HAnimJoint1639;

HAnimJoint HAnimJoint1640 = createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[34] = HAnimJoint1640;

HAnimJoint HAnimJoint1641 = createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid43.joints[35] = HAnimJoint1641;

HAnimJoint HAnimJoint1642 = createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid43.joints[36] = HAnimJoint1642;

HAnimJoint HAnimJoint1643 = createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid43.joints[37] = HAnimJoint1643;

HAnimJoint HAnimJoint1644 = createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid43.joints[38] = HAnimJoint1644;

HAnimJoint HAnimJoint1645 = createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[39] = HAnimJoint1645;

HAnimJoint HAnimJoint1646 = createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid43.joints[40] = HAnimJoint1646;

HAnimJoint HAnimJoint1647 = createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[41] = HAnimJoint1647;

HAnimJoint HAnimJoint1648 = createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[42] = HAnimJoint1648;

HAnimJoint HAnimJoint1649 = createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[43] = HAnimJoint1649;

HAnimJoint HAnimJoint1650 = createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[44] = HAnimJoint1650;

HAnimJoint HAnimJoint1651 = createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid43.joints[45] = HAnimJoint1651;

HAnimJoint HAnimJoint1652 = createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid43.joints[46] = HAnimJoint1652;

HAnimJoint HAnimJoint1653 = createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid43.joints[47] = HAnimJoint1653;

HAnimJoint HAnimJoint1654 = createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[48] = HAnimJoint1654;

HAnimJoint HAnimJoint1655 = createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[49] = HAnimJoint1655;

HAnimJoint HAnimJoint1656 = createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid43.joints[50] = HAnimJoint1656;

HAnimJoint HAnimJoint1657 = createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_transversetarsal";
HAnimHumanoid43.joints[51] = HAnimJoint1657;

HAnimJoint HAnimJoint1658 = createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid43.joints[52] = HAnimJoint1658;

HAnimJoint HAnimJoint1659 = createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid43.joints[53] = HAnimJoint1659;

HAnimJoint HAnimJoint1660 = createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint1660;

HAnimJoint HAnimJoint1661 = createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[55] = HAnimJoint1661;

HAnimJoint HAnimJoint1662 = createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid43.joints[56] = HAnimJoint1662;

HAnimJoint HAnimJoint1663 = createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid43.joints[57] = HAnimJoint1663;

HAnimJoint HAnimJoint1664 = createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[58] = HAnimJoint1664;

HAnimJoint HAnimJoint1665 = createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[59] = HAnimJoint1665;

HAnimJoint HAnimJoint1666 = createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_vl5";
HAnimHumanoid43.joints[60] = HAnimJoint1666;

HAnimJoint HAnimJoint1667 = createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_vl4";
HAnimHumanoid43.joints[61] = HAnimJoint1667;

HAnimJoint HAnimJoint1668 = createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_vl3";
HAnimHumanoid43.joints[62] = HAnimJoint1668;

HAnimJoint HAnimJoint1669 = createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_vl2";
HAnimHumanoid43.joints[63] = HAnimJoint1669;

HAnimJoint HAnimJoint1670 = createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_vl1";
HAnimHumanoid43.joints[64] = HAnimJoint1670;

HAnimJoint HAnimJoint1671 = createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_vt12";
HAnimHumanoid43.joints[65] = HAnimJoint1671;

HAnimJoint HAnimJoint1672 = createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vt11";
HAnimHumanoid43.joints[66] = HAnimJoint1672;

HAnimJoint HAnimJoint1673 = createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vt10";
HAnimHumanoid43.joints[67] = HAnimJoint1673;

HAnimJoint HAnimJoint1674 = createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vt9";
HAnimHumanoid43.joints[68] = HAnimJoint1674;

HAnimJoint HAnimJoint1675 = createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vt8";
HAnimHumanoid43.joints[69] = HAnimJoint1675;

HAnimJoint HAnimJoint1676 = createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vt7";
HAnimHumanoid43.joints[70] = HAnimJoint1676;

HAnimJoint HAnimJoint1677 = createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vt6";
HAnimHumanoid43.joints[71] = HAnimJoint1677;

HAnimJoint HAnimJoint1678 = createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vt5";
HAnimHumanoid43.joints[72] = HAnimJoint1678;

HAnimJoint HAnimJoint1679 = createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vt4";
HAnimHumanoid43.joints[73] = HAnimJoint1679;

HAnimJoint HAnimJoint1680 = createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vt3";
HAnimHumanoid43.joints[74] = HAnimJoint1680;

HAnimJoint HAnimJoint1681 = createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vt2";
HAnimHumanoid43.joints[75] = HAnimJoint1681;

HAnimJoint HAnimJoint1682 = createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_vt1";
HAnimHumanoid43.joints[76] = HAnimJoint1682;

HAnimJoint HAnimJoint1683 = createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_vc7";
HAnimHumanoid43.joints[77] = HAnimJoint1683;

HAnimJoint HAnimJoint1684 = createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_vc6";
HAnimHumanoid43.joints[78] = HAnimJoint1684;

HAnimJoint HAnimJoint1685 = createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_vc5";
HAnimHumanoid43.joints[79] = HAnimJoint1685;

HAnimJoint HAnimJoint1686 = createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_vc4";
HAnimHumanoid43.joints[80] = HAnimJoint1686;

HAnimJoint HAnimJoint1687 = createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_vc3";
HAnimHumanoid43.joints[81] = HAnimJoint1687;

HAnimJoint HAnimJoint1688 = createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_vc2";
HAnimHumanoid43.joints[82] = HAnimJoint1688;

HAnimJoint HAnimJoint1689 = createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_vc1";
HAnimHumanoid43.joints[83] = HAnimJoint1689;

HAnimJoint HAnimJoint1690 = createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_skullbase";
HAnimHumanoid43.joints[84] = HAnimJoint1690;

HAnimJoint HAnimJoint1691 = createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[85] = HAnimJoint1691;

HAnimJoint HAnimJoint1692 = createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[86] = HAnimJoint1692;

HAnimJoint HAnimJoint1693 = createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[87] = HAnimJoint1693;

HAnimJoint HAnimJoint1694 = createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[88] = HAnimJoint1694;

HAnimJoint HAnimJoint1695 = createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[89] = HAnimJoint1695;

HAnimJoint HAnimJoint1696 = createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[90] = HAnimJoint1696;

HAnimJoint HAnimJoint1697 = createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[91] = HAnimJoint1697;

HAnimJoint HAnimJoint1698 = createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[92] = HAnimJoint1698;

HAnimJoint HAnimJoint1699 = createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[93] = HAnimJoint1699;

HAnimJoint HAnimJoint1700 = createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[94] = HAnimJoint1700;

HAnimJoint HAnimJoint1701 = createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[95] = HAnimJoint1701;

HAnimJoint HAnimJoint1702 = createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[96] = HAnimJoint1702;

HAnimJoint HAnimJoint1703 = createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_l_midcarpal_1";
HAnimHumanoid43.joints[97] = HAnimJoint1703;

HAnimJoint HAnimJoint1704 = createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[98] = HAnimJoint1704;

HAnimJoint HAnimJoint1705 = createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[99] = HAnimJoint1705;

HAnimJoint HAnimJoint1706 = createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[100] = HAnimJoint1706;

HAnimJoint HAnimJoint1707 = createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_l_midcarpal_2";
HAnimHumanoid43.joints[101] = HAnimJoint1707;

HAnimJoint HAnimJoint1708 = createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[102] = HAnimJoint1708;

HAnimJoint HAnimJoint1709 = createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[103] = HAnimJoint1709;

HAnimJoint HAnimJoint1710 = createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[104] = HAnimJoint1710;

HAnimJoint HAnimJoint1711 = createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[105] = HAnimJoint1711;

HAnimJoint HAnimJoint1712 = createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_midcarpal_3";
HAnimHumanoid43.joints[106] = HAnimJoint1712;

HAnimJoint HAnimJoint1713 = createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[107] = HAnimJoint1713;

HAnimJoint HAnimJoint1714 = createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[108] = HAnimJoint1714;

HAnimJoint HAnimJoint1715 = createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[109] = HAnimJoint1715;

HAnimJoint HAnimJoint1716 = createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[110] = HAnimJoint1716;

HAnimJoint HAnimJoint1717 = createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid43.joints[111] = HAnimJoint1717;

HAnimJoint HAnimJoint1718 = createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[112] = HAnimJoint1718;

HAnimJoint HAnimJoint1719 = createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[113] = HAnimJoint1719;

HAnimJoint HAnimJoint1720 = createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[114] = HAnimJoint1720;

HAnimJoint HAnimJoint1721 = createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[115] = HAnimJoint1721;

HAnimJoint HAnimJoint1722 = createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[116] = HAnimJoint1722;

HAnimJoint HAnimJoint1723 = createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[117] = HAnimJoint1723;

HAnimJoint HAnimJoint1724 = createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[118] = HAnimJoint1724;

HAnimJoint HAnimJoint1725 = createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[119] = HAnimJoint1725;

HAnimJoint HAnimJoint1726 = createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[120] = HAnimJoint1726;

HAnimJoint HAnimJoint1727 = createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[121] = HAnimJoint1727;

HAnimJoint HAnimJoint1728 = createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[122] = HAnimJoint1728;

HAnimJoint HAnimJoint1729 = createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[123] = HAnimJoint1729;

HAnimJoint HAnimJoint1730 = createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[124] = HAnimJoint1730;

HAnimJoint HAnimJoint1731 = createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_midcarpal_1";
HAnimHumanoid43.joints[125] = HAnimJoint1731;

HAnimJoint HAnimJoint1732 = createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[126] = HAnimJoint1732;

HAnimJoint HAnimJoint1733 = createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[127] = HAnimJoint1733;

HAnimJoint HAnimJoint1734 = createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[128] = HAnimJoint1734;

HAnimJoint HAnimJoint1735 = createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_midcarpal_2";
HAnimHumanoid43.joints[129] = HAnimJoint1735;

HAnimJoint HAnimJoint1736 = createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[130] = HAnimJoint1736;

HAnimJoint HAnimJoint1737 = createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[131] = HAnimJoint1737;

HAnimJoint HAnimJoint1738 = createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[132] = HAnimJoint1738;

HAnimJoint HAnimJoint1739 = createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[133] = HAnimJoint1739;

HAnimJoint HAnimJoint1740 = createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_r_midcarpal_3";
HAnimHumanoid43.joints[134] = HAnimJoint1740;

HAnimJoint HAnimJoint1741 = createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[135] = HAnimJoint1741;

HAnimJoint HAnimJoint1742 = createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[136] = HAnimJoint1742;

HAnimJoint HAnimJoint1743 = createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[137] = HAnimJoint1743;

HAnimJoint HAnimJoint1744 = createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[138] = HAnimJoint1744;

HAnimJoint HAnimJoint1745 = createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid43.joints[139] = HAnimJoint1745;

HAnimJoint HAnimJoint1746 = createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[140] = HAnimJoint1746;

HAnimJoint HAnimJoint1747 = createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[141] = HAnimJoint1747;

HAnimJoint HAnimJoint1748 = createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[142] = HAnimJoint1748;

HAnimJoint HAnimJoint1749 = createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[143] = HAnimJoint1749;

HAnimJoint HAnimJoint1750 = createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[144] = HAnimJoint1750;

HAnimJoint HAnimJoint1751 = createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[145] = HAnimJoint1751;

HAnimJoint HAnimJoint1752 = createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[146] = HAnimJoint1752;

HAnimJoint HAnimJoint1753 = createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[147] = HAnimJoint1753;

HAnimSegment HAnimSegment1754 = createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_sacrum";
HAnimHumanoid43.segments[148] = HAnimSegment1754;

HAnimSegment HAnimSegment1755 = createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_pelvis";
HAnimHumanoid43.segments[149] = HAnimSegment1755;

HAnimSegment HAnimSegment1756 = createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[150] = HAnimSegment1756;

HAnimSegment HAnimSegment1757 = createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_l_calf";
HAnimHumanoid43.segments[151] = HAnimSegment1757;

HAnimSegment HAnimSegment1758 = createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_talus";
HAnimHumanoid43.segments[152] = HAnimSegment1758;

HAnimSegment HAnimSegment1759 = createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_l_navicular";
HAnimHumanoid43.segments[153] = HAnimSegment1759;

HAnimSegment HAnimSegment1760 = createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_cuneiform_1";
HAnimHumanoid43.segments[154] = HAnimSegment1760;

HAnimSegment HAnimSegment1761 = createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_l_metatarsal_1";
HAnimHumanoid43.segments[155] = HAnimSegment1761;

HAnimSegment HAnimSegment1762 = createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[156] = HAnimSegment1762;

HAnimSegment HAnimSegment1763 = createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_l_cuneiform_2";
HAnimHumanoid43.segments[157] = HAnimSegment1763;

HAnimSegment HAnimSegment1764 = createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[158] = HAnimSegment1764;

HAnimSegment HAnimSegment1765 = createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[159] = HAnimSegment1765;

HAnimSegment HAnimSegment1766 = createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[160] = HAnimSegment1766;

HAnimSegment HAnimSegment1767 = createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_l_cuneiform_3";
HAnimHumanoid43.segments[161] = HAnimSegment1767;

HAnimSegment HAnimSegment1768 = createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_metatarsal_3";
HAnimHumanoid43.segments[162] = HAnimSegment1768;

HAnimSegment HAnimSegment1769 = createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[163] = HAnimSegment1769;

HAnimSegment HAnimSegment1770 = createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[164] = HAnimSegment1770;

HAnimSegment HAnimSegment1771 = createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_l_calcaneus";
HAnimHumanoid43.segments[165] = HAnimSegment1771;

HAnimSegment HAnimSegment1772 = createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_l_cuboid";
HAnimHumanoid43.segments[166] = HAnimSegment1772;

HAnimSegment HAnimSegment1773 = createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_l_metatarsal_4";
HAnimHumanoid43.segments[167] = HAnimSegment1773;

HAnimSegment HAnimSegment1774 = createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[168] = HAnimSegment1774;

HAnimSegment HAnimSegment1775 = createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[169] = HAnimSegment1775;

HAnimSegment HAnimSegment1776 = createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_l_metatarsal_5";
HAnimHumanoid43.segments[170] = HAnimSegment1776;

HAnimSegment HAnimSegment1777 = createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[171] = HAnimSegment1777;

HAnimSegment HAnimSegment1778 = createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[172] = HAnimSegment1778;

HAnimSegment HAnimSegment1779 = createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[173] = HAnimSegment1779;

HAnimSegment HAnimSegment1780 = createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_r_calf";
HAnimHumanoid43.segments[174] = HAnimSegment1780;

HAnimSegment HAnimSegment1781 = createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_r_talus";
HAnimHumanoid43.segments[175] = HAnimSegment1781;

HAnimSegment HAnimSegment1782 = createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_r_navicular";
HAnimHumanoid43.segments[176] = HAnimSegment1782;

HAnimSegment HAnimSegment1783 = createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_r_cuneiform_1";
HAnimHumanoid43.segments[177] = HAnimSegment1783;

HAnimSegment HAnimSegment1784 = createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_r_metatarsal_1";
HAnimHumanoid43.segments[178] = HAnimSegment1784;

HAnimSegment HAnimSegment1785 = createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[179] = HAnimSegment1785;

HAnimSegment HAnimSegment1786 = createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_r_cuneiform_2";
HAnimHumanoid43.segments[180] = HAnimSegment1786;

HAnimSegment HAnimSegment1787 = createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[181] = HAnimSegment1787;

HAnimSegment HAnimSegment1788 = createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[182] = HAnimSegment1788;

HAnimSegment HAnimSegment1789 = createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[183] = HAnimSegment1789;

HAnimSegment HAnimSegment1790 = createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_r_cuneiform_3";
HAnimHumanoid43.segments[184] = HAnimSegment1790;

HAnimSegment HAnimSegment1791 = createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_r_metatarsal_3";
HAnimHumanoid43.segments[185] = HAnimSegment1791;

HAnimSegment HAnimSegment1792 = createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[186] = HAnimSegment1792;

HAnimSegment HAnimSegment1793 = createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[187] = HAnimSegment1793;

HAnimSegment HAnimSegment1794 = createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_r_calcaneus";
HAnimHumanoid43.segments[188] = HAnimSegment1794;

HAnimSegment HAnimSegment1795 = createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_r_cuboid";
HAnimHumanoid43.segments[189] = HAnimSegment1795;

HAnimSegment HAnimSegment1796 = createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_r_metatarsal_4";
HAnimHumanoid43.segments[190] = HAnimSegment1796;

HAnimSegment HAnimSegment1797 = createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[191] = HAnimSegment1797;

HAnimSegment HAnimSegment1798 = createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[192] = HAnimSegment1798;

HAnimSegment HAnimSegment1799 = createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_r_metatarsal_5";
HAnimHumanoid43.segments[193] = HAnimSegment1799;

HAnimSegment HAnimSegment1800 = createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[194] = HAnimSegment1800;

HAnimSegment HAnimSegment1801 = createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[195] = HAnimSegment1801;

HAnimSegment HAnimSegment1802 = createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_l5";
HAnimHumanoid43.segments[196] = HAnimSegment1802;

HAnimSegment HAnimSegment1803 = createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_l4";
HAnimHumanoid43.segments[197] = HAnimSegment1803;

HAnimSegment HAnimSegment1804 = createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_l3";
HAnimHumanoid43.segments[198] = HAnimSegment1804;

HAnimSegment HAnimSegment1805 = createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_l2";
HAnimHumanoid43.segments[199] = HAnimSegment1805;

HAnimSegment HAnimSegment1806 = createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_l1";
HAnimHumanoid43.segments[200] = HAnimSegment1806;

HAnimSegment HAnimSegment1807 = createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_t12";
HAnimHumanoid43.segments[201] = HAnimSegment1807;

HAnimSegment HAnimSegment1808 = createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_t11";
HAnimHumanoid43.segments[202] = HAnimSegment1808;

HAnimSegment HAnimSegment1809 = createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_t10";
HAnimHumanoid43.segments[203] = HAnimSegment1809;

HAnimSegment HAnimSegment1810 = createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t9";
HAnimHumanoid43.segments[204] = HAnimSegment1810;

HAnimSegment HAnimSegment1811 = createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_t8";
HAnimHumanoid43.segments[205] = HAnimSegment1811;

HAnimSegment HAnimSegment1812 = createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_t7";
HAnimHumanoid43.segments[206] = HAnimSegment1812;

HAnimSegment HAnimSegment1813 = createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_t6";
HAnimHumanoid43.segments[207] = HAnimSegment1813;

HAnimSegment HAnimSegment1814 = createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_t5";
HAnimHumanoid43.segments[208] = HAnimSegment1814;

HAnimSegment HAnimSegment1815 = createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_t4";
HAnimHumanoid43.segments[209] = HAnimSegment1815;

HAnimSegment HAnimSegment1816 = createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_t3";
HAnimHumanoid43.segments[210] = HAnimSegment1816;

HAnimSegment HAnimSegment1817 = createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_t2";
HAnimHumanoid43.segments[211] = HAnimSegment1817;

HAnimSegment HAnimSegment1818 = createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_t1";
HAnimHumanoid43.segments[212] = HAnimSegment1818;

HAnimSegment HAnimSegment1819 = createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_c7";
HAnimHumanoid43.segments[213] = HAnimSegment1819;

HAnimSegment HAnimSegment1820 = createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_c6";
HAnimHumanoid43.segments[214] = HAnimSegment1820;

HAnimSegment HAnimSegment1821 = createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_c5";
HAnimHumanoid43.segments[215] = HAnimSegment1821;

HAnimSegment HAnimSegment1822 = createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_c4";
HAnimHumanoid43.segments[216] = HAnimSegment1822;

HAnimSegment HAnimSegment1823 = createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_c3";
HAnimHumanoid43.segments[217] = HAnimSegment1823;

HAnimSegment HAnimSegment1824 = createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_c2";
HAnimHumanoid43.segments[218] = HAnimSegment1824;

HAnimSegment HAnimSegment1825 = createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_c1";
HAnimHumanoid43.segments[219] = HAnimSegment1825;

HAnimSegment HAnimSegment1826 = createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_skull";
HAnimHumanoid43.segments[220] = HAnimSegment1826;

HAnimSegment HAnimSegment1827 = createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[221] = HAnimSegment1827;

HAnimSegment HAnimSegment1828 = createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[222] = HAnimSegment1828;

HAnimSegment HAnimSegment1829 = createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[223] = HAnimSegment1829;

HAnimSegment HAnimSegment1830 = createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[224] = HAnimSegment1830;

HAnimSegment HAnimSegment1831 = createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[225] = HAnimSegment1831;

HAnimSegment HAnimSegment1832 = createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_trapezium";
HAnimHumanoid43.segments[226] = HAnimSegment1832;

HAnimSegment HAnimSegment1833 = createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[227] = HAnimSegment1833;

HAnimSegment HAnimSegment1834 = createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[228] = HAnimSegment1834;

HAnimSegment HAnimSegment1835 = createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_l_trapezoid";
HAnimHumanoid43.segments[229] = HAnimSegment1835;

HAnimSegment HAnimSegment1836 = createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[230] = HAnimSegment1836;

HAnimSegment HAnimSegment1837 = createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[231] = HAnimSegment1837;

HAnimSegment HAnimSegment1838 = createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[232] = HAnimSegment1838;

HAnimSegment HAnimSegment1839 = createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_l_capitate";
HAnimHumanoid43.segments[233] = HAnimSegment1839;

HAnimSegment HAnimSegment1840 = createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[234] = HAnimSegment1840;

HAnimSegment HAnimSegment1841 = createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[235] = HAnimSegment1841;

HAnimSegment HAnimSegment1842 = createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[236] = HAnimSegment1842;

HAnimSegment HAnimSegment1843 = createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_l_hamate";
HAnimHumanoid43.segments[237] = HAnimSegment1843;

HAnimSegment HAnimSegment1844 = createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[238] = HAnimSegment1844;

HAnimSegment HAnimSegment1845 = createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[239] = HAnimSegment1845;

HAnimSegment HAnimSegment1846 = createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[240] = HAnimSegment1846;

HAnimSegment HAnimSegment1847 = createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[241] = HAnimSegment1847;

HAnimSegment HAnimSegment1848 = createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[242] = HAnimSegment1848;

HAnimSegment HAnimSegment1849 = createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[243] = HAnimSegment1849;

HAnimSegment HAnimSegment1850 = createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[244] = HAnimSegment1850;

HAnimSegment HAnimSegment1851 = createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[245] = HAnimSegment1851;

HAnimSegment HAnimSegment1852 = createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[246] = HAnimSegment1852;

HAnimSegment HAnimSegment1853 = createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[247] = HAnimSegment1853;

HAnimSegment HAnimSegment1854 = createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[248] = HAnimSegment1854;

HAnimSegment HAnimSegment1855 = createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_trapezium";
HAnimHumanoid43.segments[249] = HAnimSegment1855;

HAnimSegment HAnimSegment1856 = createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[250] = HAnimSegment1856;

HAnimSegment HAnimSegment1857 = createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[251] = HAnimSegment1857;

HAnimSegment HAnimSegment1858 = createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_r_trapezoid";
HAnimHumanoid43.segments[252] = HAnimSegment1858;

HAnimSegment HAnimSegment1859 = createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[253] = HAnimSegment1859;

HAnimSegment HAnimSegment1860 = createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[254] = HAnimSegment1860;

HAnimSegment HAnimSegment1861 = createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[255] = HAnimSegment1861;

HAnimSegment HAnimSegment1862 = createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_r_capitate";
HAnimHumanoid43.segments[256] = HAnimSegment1862;

HAnimSegment HAnimSegment1863 = createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[257] = HAnimSegment1863;

HAnimSegment HAnimSegment1864 = createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[258] = HAnimSegment1864;

HAnimSegment HAnimSegment1865 = createNode("HAnimSegment");
HAnimSegment1865.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[259] = HAnimSegment1865;

HAnimSegment HAnimSegment1866 = createNode("HAnimSegment");
HAnimSegment1866.USE = "hanim_r_hamate";
HAnimHumanoid43.segments[260] = HAnimSegment1866;

HAnimSegment HAnimSegment1867 = createNode("HAnimSegment");
HAnimSegment1867.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[261] = HAnimSegment1867;

HAnimSegment HAnimSegment1868 = createNode("HAnimSegment");
HAnimSegment1868.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[262] = HAnimSegment1868;

HAnimSegment HAnimSegment1869 = createNode("HAnimSegment");
HAnimSegment1869.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[263] = HAnimSegment1869;

HAnimSegment HAnimSegment1870 = createNode("HAnimSegment");
HAnimSegment1870.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[264] = HAnimSegment1870;

HAnimSegment HAnimSegment1871 = createNode("HAnimSegment");
HAnimSegment1871.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[265] = HAnimSegment1871;

HAnimSegment HAnimSegment1872 = createNode("HAnimSegment");
HAnimSegment1872.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[266] = HAnimSegment1872;

HAnimSite HAnimSite1873 = createNode("HAnimSite");
HAnimSite1873.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid43.viewpoints[267] = HAnimSite1873;

HAnimSite HAnimSite1874 = createNode("HAnimSite");
HAnimSite1874.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite1874;

HAnimSite HAnimSite1875 = createNode("HAnimSite");
HAnimSite1875.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite1875;

HAnimSite HAnimSite1876 = createNode("HAnimSite");
HAnimSite1876.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite1876;

HAnimSite HAnimSite1877 = createNode("HAnimSite");
HAnimSite1877.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[271] = HAnimSite1877;

HAnimSite HAnimSite1878 = createNode("HAnimSite");
HAnimSite1878.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[272] = HAnimSite1878;

HAnimSite HAnimSite1879 = createNode("HAnimSite");
HAnimSite1879.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[273] = HAnimSite1879;

HAnimSite HAnimSite1880 = createNode("HAnimSite");
HAnimSite1880.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[274] = HAnimSite1880;

HAnimSite HAnimSite1881 = createNode("HAnimSite");
HAnimSite1881.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[275] = HAnimSite1881;

HAnimSite HAnimSite1882 = createNode("HAnimSite");
HAnimSite1882.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[276] = HAnimSite1882;

HAnimSite HAnimSite1883 = createNode("HAnimSite");
HAnimSite1883.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[277] = HAnimSite1883;

HAnimSite HAnimSite1884 = createNode("HAnimSite");
HAnimSite1884.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid43.viewpoints[278] = HAnimSite1884;

HAnimSite HAnimSite1885 = createNode("HAnimSite");
HAnimSite1885.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[279] = HAnimSite1885;

HAnimSite HAnimSite1886 = createNode("HAnimSite");
HAnimSite1886.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[280] = HAnimSite1886;

HAnimSite HAnimSite1887 = createNode("HAnimSite");
HAnimSite1887.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[281] = HAnimSite1887;

HAnimSite HAnimSite1888 = createNode("HAnimSite");
HAnimSite1888.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[282] = HAnimSite1888;

HAnimSite HAnimSite1889 = createNode("HAnimSite");
HAnimSite1889.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid43.viewpoints[283] = HAnimSite1889;

HAnimSite HAnimSite1890 = createNode("HAnimSite");
HAnimSite1890.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[284] = HAnimSite1890;

HAnimSite HAnimSite1891 = createNode("HAnimSite");
HAnimSite1891.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[285] = HAnimSite1891;

HAnimSite HAnimSite1892 = createNode("HAnimSite");
HAnimSite1892.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[286] = HAnimSite1892;

HAnimSite HAnimSite1893 = createNode("HAnimSite");
HAnimSite1893.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid43.viewpoints[287] = HAnimSite1893;

HAnimSite HAnimSite1894 = createNode("HAnimSite");
HAnimSite1894.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[288] = HAnimSite1894;

HAnimSite HAnimSite1895 = createNode("HAnimSite");
HAnimSite1895.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[289] = HAnimSite1895;

HAnimSite HAnimSite1896 = createNode("HAnimSite");
HAnimSite1896.USE = "hanim_l_tibiale_pt";
HAnimHumanoid43.viewpoints[290] = HAnimSite1896;

HAnimSite HAnimSite1897 = createNode("HAnimSite");
HAnimSite1897.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[291] = HAnimSite1897;

HAnimSite HAnimSite1898 = createNode("HAnimSite");
HAnimSite1898.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[292] = HAnimSite1898;

HAnimSite HAnimSite1899 = createNode("HAnimSite");
HAnimSite1899.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[293] = HAnimSite1899;

HAnimSite HAnimSite1900 = createNode("HAnimSite");
HAnimSite1900.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[294] = HAnimSite1900;

HAnimSite HAnimSite1901 = createNode("HAnimSite");
HAnimSite1901.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[295] = HAnimSite1901;

HAnimSite HAnimSite1902 = createNode("HAnimSite");
HAnimSite1902.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[296] = HAnimSite1902;

HAnimSite HAnimSite1903 = createNode("HAnimSite");
HAnimSite1903.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[297] = HAnimSite1903;

HAnimSite HAnimSite1904 = createNode("HAnimSite");
HAnimSite1904.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[298] = HAnimSite1904;

HAnimSite HAnimSite1905 = createNode("HAnimSite");
HAnimSite1905.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[299] = HAnimSite1905;

HAnimSite HAnimSite1906 = createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[300] = HAnimSite1906;

HAnimSite HAnimSite1907 = createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[301] = HAnimSite1907;

HAnimSite HAnimSite1908 = createNode("HAnimSite");
HAnimSite1908.USE = "hanim_r_tibiale_pt";
HAnimHumanoid43.viewpoints[302] = HAnimSite1908;

HAnimSite HAnimSite1909 = createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[303] = HAnimSite1909;

HAnimSite HAnimSite1910 = createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[304] = HAnimSite1910;

HAnimSite HAnimSite1911 = createNode("HAnimSite");
HAnimSite1911.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[305] = HAnimSite1911;

HAnimSite HAnimSite1912 = createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[306] = HAnimSite1912;

HAnimSite HAnimSite1913 = createNode("HAnimSite");
HAnimSite1913.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[307] = HAnimSite1913;

HAnimSite HAnimSite1914 = createNode("HAnimSite");
HAnimSite1914.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[308] = HAnimSite1914;

HAnimSite HAnimSite1915 = createNode("HAnimSite");
HAnimSite1915.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[309] = HAnimSite1915;

HAnimSite HAnimSite1916 = createNode("HAnimSite");
HAnimSite1916.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[310] = HAnimSite1916;

HAnimSite HAnimSite1917 = createNode("HAnimSite");
HAnimSite1917.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[311] = HAnimSite1917;

HAnimSite HAnimSite1918 = createNode("HAnimSite");
HAnimSite1918.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[312] = HAnimSite1918;

HAnimSite HAnimSite1919 = createNode("HAnimSite");
HAnimSite1919.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[313] = HAnimSite1919;

HAnimSite HAnimSite1920 = createNode("HAnimSite");
HAnimSite1920.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid43.viewpoints[314] = HAnimSite1920;

HAnimSite HAnimSite1921 = createNode("HAnimSite");
HAnimSite1921.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[315] = HAnimSite1921;

HAnimSite HAnimSite1922 = createNode("HAnimSite");
HAnimSite1922.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[316] = HAnimSite1922;

HAnimSite HAnimSite1923 = createNode("HAnimSite");
HAnimSite1923.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[317] = HAnimSite1923;

HAnimSite HAnimSite1924 = createNode("HAnimSite");
HAnimSite1924.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[318] = HAnimSite1924;

HAnimSite HAnimSite1925 = createNode("HAnimSite");
HAnimSite1925.USE = "hanim_mesosternale_pt";
HAnimHumanoid43.viewpoints[319] = HAnimSite1925;

HAnimSite HAnimSite1926 = createNode("HAnimSite");
HAnimSite1926.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[320] = HAnimSite1926;

HAnimSite HAnimSite1927 = createNode("HAnimSite");
HAnimSite1927.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[321] = HAnimSite1927;

HAnimSite HAnimSite1928 = createNode("HAnimSite");
HAnimSite1928.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid43.viewpoints[322] = HAnimSite1928;

HAnimSite HAnimSite1929 = createNode("HAnimSite");
HAnimSite1929.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[323] = HAnimSite1929;

HAnimSite HAnimSite1930 = createNode("HAnimSite");
HAnimSite1930.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[324] = HAnimSite1930;

HAnimSite HAnimSite1931 = createNode("HAnimSite");
HAnimSite1931.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[325] = HAnimSite1931;

HAnimSite HAnimSite1932 = createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[326] = HAnimSite1932;

HAnimSite HAnimSite1933 = createNode("HAnimSite");
HAnimSite1933.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[327] = HAnimSite1933;

HAnimSite HAnimSite1934 = createNode("HAnimSite");
HAnimSite1934.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[328] = HAnimSite1934;

HAnimSite HAnimSite1935 = createNode("HAnimSite");
HAnimSite1935.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[329] = HAnimSite1935;

HAnimSite HAnimSite1936 = createNode("HAnimSite");
HAnimSite1936.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[330] = HAnimSite1936;

HAnimSite HAnimSite1937 = createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[331] = HAnimSite1937;

HAnimSite HAnimSite1938 = createNode("HAnimSite");
HAnimSite1938.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[332] = HAnimSite1938;

HAnimSite HAnimSite1939 = createNode("HAnimSite");
HAnimSite1939.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[333] = HAnimSite1939;

HAnimSite HAnimSite1940 = createNode("HAnimSite");
HAnimSite1940.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[334] = HAnimSite1940;

HAnimSite HAnimSite1941 = createNode("HAnimSite");
HAnimSite1941.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[335] = HAnimSite1941;

HAnimSite HAnimSite1942 = createNode("HAnimSite");
HAnimSite1942.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[336] = HAnimSite1942;

HAnimSite HAnimSite1943 = createNode("HAnimSite");
HAnimSite1943.USE = "hanim_adams_apple_pt";
HAnimHumanoid43.viewpoints[337] = HAnimSite1943;

HAnimSite HAnimSite1944 = createNode("HAnimSite");
HAnimSite1944.USE = "hanim_glabella_pt";
HAnimHumanoid43.viewpoints[338] = HAnimSite1944;

HAnimSite HAnimSite1945 = createNode("HAnimSite");
HAnimSite1945.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid43.viewpoints[339] = HAnimSite1945;

HAnimSite HAnimSite1946 = createNode("HAnimSite");
HAnimSite1946.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[340] = HAnimSite1946;

HAnimSite HAnimSite1947 = createNode("HAnimSite");
HAnimSite1947.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[341] = HAnimSite1947;

HAnimSite HAnimSite1948 = createNode("HAnimSite");
HAnimSite1948.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[342] = HAnimSite1948;

HAnimSite HAnimSite1949 = createNode("HAnimSite");
HAnimSite1949.USE = "hanim_opisthocranion_pt";
HAnimHumanoid43.viewpoints[343] = HAnimSite1949;

HAnimSite HAnimSite1950 = createNode("HAnimSite");
HAnimSite1950.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid43.viewpoints[344] = HAnimSite1950;

HAnimSite HAnimSite1951 = createNode("HAnimSite");
HAnimSite1951.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[345] = HAnimSite1951;

HAnimSite HAnimSite1952 = createNode("HAnimSite");
HAnimSite1952.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[346] = HAnimSite1952;

HAnimSite HAnimSite1953 = createNode("HAnimSite");
HAnimSite1953.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[347] = HAnimSite1953;

HAnimSite HAnimSite1954 = createNode("HAnimSite");
HAnimSite1954.USE = "hanim_skull_vertex_pt";
HAnimHumanoid43.viewpoints[348] = HAnimSite1954;

HAnimSite HAnimSite1955 = createNode("HAnimSite");
HAnimSite1955.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[349] = HAnimSite1955;

HAnimSite HAnimSite1956 = createNode("HAnimSite");
HAnimSite1956.USE = "hanim_menton_pt";
HAnimHumanoid43.viewpoints[350] = HAnimSite1956;

HAnimSite HAnimSite1957 = createNode("HAnimSite");
HAnimSite1957.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[351] = HAnimSite1957;

HAnimSite HAnimSite1958 = createNode("HAnimSite");
HAnimSite1958.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[352] = HAnimSite1958;

HAnimSite HAnimSite1959 = createNode("HAnimSite");
HAnimSite1959.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid43.viewpoints[353] = HAnimSite1959;

HAnimSite HAnimSite1960 = createNode("HAnimSite");
HAnimSite1960.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[354] = HAnimSite1960;

HAnimSite HAnimSite1961 = createNode("HAnimSite");
HAnimSite1961.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[355] = HAnimSite1961;

HAnimSite HAnimSite1962 = createNode("HAnimSite");
HAnimSite1962.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[356] = HAnimSite1962;

HAnimSite HAnimSite1963 = createNode("HAnimSite");
HAnimSite1963.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[357] = HAnimSite1963;

HAnimSite HAnimSite1964 = createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[358] = HAnimSite1964;

HAnimSite HAnimSite1965 = createNode("HAnimSite");
HAnimSite1965.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[359] = HAnimSite1965;

HAnimSite HAnimSite1966 = createNode("HAnimSite");
HAnimSite1966.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[360] = HAnimSite1966;

HAnimSite HAnimSite1967 = createNode("HAnimSite");
HAnimSite1967.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[361] = HAnimSite1967;

HAnimSite HAnimSite1968 = createNode("HAnimSite");
HAnimSite1968.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[362] = HAnimSite1968;

HAnimSite HAnimSite1969 = createNode("HAnimSite");
HAnimSite1969.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[363] = HAnimSite1969;

HAnimSite HAnimSite1970 = createNode("HAnimSite");
HAnimSite1970.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[364] = HAnimSite1970;

HAnimSite HAnimSite1971 = createNode("HAnimSite");
HAnimSite1971.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[365] = HAnimSite1971;

HAnimSite HAnimSite1972 = createNode("HAnimSite");
HAnimSite1972.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[366] = HAnimSite1972;

HAnimSite HAnimSite1973 = createNode("HAnimSite");
HAnimSite1973.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[367] = HAnimSite1973;

HAnimSite HAnimSite1974 = createNode("HAnimSite");
HAnimSite1974.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[368] = HAnimSite1974;

HAnimSite HAnimSite1975 = createNode("HAnimSite");
HAnimSite1975.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid43.viewpoints[369] = HAnimSite1975;

HAnimSite HAnimSite1976 = createNode("HAnimSite");
HAnimSite1976.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[370] = HAnimSite1976;

HAnimSite HAnimSite1977 = createNode("HAnimSite");
HAnimSite1977.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[371] = HAnimSite1977;

HAnimSite HAnimSite1978 = createNode("HAnimSite");
HAnimSite1978.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[372] = HAnimSite1978;

HAnimSite HAnimSite1979 = createNode("HAnimSite");
HAnimSite1979.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[373] = HAnimSite1979;

HAnimSite HAnimSite1980 = createNode("HAnimSite");
HAnimSite1980.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[374] = HAnimSite1980;

HAnimSite HAnimSite1981 = createNode("HAnimSite");
HAnimSite1981.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[375] = HAnimSite1981;

HAnimSite HAnimSite1982 = createNode("HAnimSite");
HAnimSite1982.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[376] = HAnimSite1982;

HAnimSite HAnimSite1983 = createNode("HAnimSite");
HAnimSite1983.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[377] = HAnimSite1983;

HAnimSite HAnimSite1984 = createNode("HAnimSite");
HAnimSite1984.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[378] = HAnimSite1984;

HAnimSite HAnimSite1985 = createNode("HAnimSite");
HAnimSite1985.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[379] = HAnimSite1985;

HAnimSite HAnimSite1986 = createNode("HAnimSite");
HAnimSite1986.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[380] = HAnimSite1986;

HAnimSite HAnimSite1987 = createNode("HAnimSite");
HAnimSite1987.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[381] = HAnimSite1987;

HAnimSite HAnimSite1988 = createNode("HAnimSite");
HAnimSite1988.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[382] = HAnimSite1988;

HAnimSite HAnimSite1989 = createNode("HAnimSite");
HAnimSite1989.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[383] = HAnimSite1989;

HAnimSite HAnimSite1990 = createNode("HAnimSite");
HAnimSite1990.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[384] = HAnimSite1990;

children[4] = HAnimHumanoid43;

}
