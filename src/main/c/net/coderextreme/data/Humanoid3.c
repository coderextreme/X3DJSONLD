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
meta3.content = "Humanoid3.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d";
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
Transform19.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape20 = createNode("Shape");
Shape20.DEF = "HAnimJointShape";
Sphere Sphere21 = createNode("Sphere");
Sphere21.radius = 0.02;
Shape20.geometry = Sphere21;

Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.DEF = "HAnimJointMaterial";
Material23.diffuseColor = new SFColor(new float[0,0,0]);
Appearance22.material = Material23;

Shape20.appearance = Appearance22;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,2.05,0]);
Shape Shape25 = createNode("Shape");
Shape25.DEF = "HAnimSegmentLine";
LineSet LineSet26 = createNode("LineSet");
LineSet26.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA27 = createNode("ColorRGBA");
ColorRGBA27.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA27.color = new MFColorRGBA(new float[1,1,0,0,1,1,0,0]);
LineSet26.color = ColorRGBA27;

Coordinate Coordinate28 = createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet26.coord = Coordinate28;

Shape25.geometry = LineSet26;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform18.children[1] = Transform24;

Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape30 = createNode("Shape");
Shape30.DEF = "HAnimSiteShape";
IndexedFaceSet IndexedFaceSet31 = createNode("IndexedFaceSet");
IndexedFaceSet31.DEF = "DiamondIFS";
IndexedFaceSet31.creaseAngle = 0.5;
IndexedFaceSet31.solid = False;
IndexedFaceSet31.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA ColorRGBA32 = createNode("ColorRGBA");
ColorRGBA32.DEF = "HAnimSiteColorRGBA";
ColorRGBA32.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet31.color = ColorRGBA32;

Coordinate Coordinate33 = createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet31.coord = Coordinate33;

Shape30.geometry = IndexedFaceSet31;

Appearance Appearance34 = createNode("Appearance");
Material Material35 = createNode("Material");
Material35.diffuseColor = new SFColor(new float[1,1,1]);
Material35.transparency = 1;
Appearance34.material = Material35;

Shape30.appearance = Appearance34;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Transform18.children[2] = Transform29;

Group17.children = new MFNode();

Group17.children[0] = Transform18;

children[1] = Group17;

NavigationInfo NavigationInfo36 = createNode("NavigationInfo");
NavigationInfo36.speed = 1.5;
children[2] = NavigationInfo36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.position = new SFVec3f(new float[0,1,3]);
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint37.description = "default";
children[3] = Viewpoint37;

HAnimHumanoid HAnimHumanoid38 = createNode("HAnimHumanoid");
HAnimHumanoid38.name = "HAnim";
HAnimHumanoid38.DEF = "hanim_HAnim";
HAnimHumanoid38.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid38.version = "2.0";
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
Shape Shape39 = createNode("Shape");
Shape39.DEF = "SkinShape";
IndexedFaceSet IndexedFaceSet40 = createNode("IndexedFaceSet");
IndexedFaceSet40.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet40.creaseAngle = 3.1;
Coordinate Coordinate41 = createNode("Coordinate");
Coordinate41.DEF = "TheSkinCoord";
Coordinate41.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
IndexedFaceSet40.coord = Coordinate41;

Color Color42 = createNode("Color");
Color42.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet40.color = Color42;

Shape39.geometry = IndexedFaceSet40;

Appearance Appearance43 = createNode("Appearance");
Appearance43.DEF = "SkinAppearance";
ImageTexture ImageTexture44 = createNode("ImageTexture");
ImageTexture44.DEF = "zBlueSpiralBkg2";
ImageTexture44.description = "Blue Spiral Pattern";
ImageTexture44.url = new MFString(new java.lang.String["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance43.texture = ImageTexture44;

Material Material45 = createNode("Material");
Material45.DEF = "SkinMaterial";
Material45.ambientIntensity = 0.6;
Material45.diffuseColor = new SFColor(new float[1,1,1]);
Material45.shininess = 0.6;
Material45.transparency = 1;
Appearance43.material = Material45;

Shape39.appearance = Appearance43;

HAnimHumanoid38.skin = new MFNode();

HAnimHumanoid38.skin[0] = Shape39;

Coordinate Coordinate46 = createNode("Coordinate");
Coordinate46.USE = "TheSkinCoord";
HAnimHumanoid38.skinCoord = Coordinate46;

HAnimJoint HAnimJoint47 = createNode("HAnimJoint");
HAnimJoint47.name = "humanoid_root";
HAnimJoint47.DEF = "hanim_humanoid_root";
HAnimJoint47.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint47.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint47.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment48 = createNode("HAnimSegment");
HAnimSegment48.name = "sacrum";
HAnimSegment48.DEF = "hanim_sacrum";
Transform Transform49 = createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,0.824,0.0277]);
Transform Transform50 = createNode("Transform");
//Empty Transform
Shape Shape51 = createNode("Shape");
Shape51.USE = "HAnimJointShape";
Transform50.child = new undefined();

Transform50.child[0] = Shape51;

Transform49.children = new MFNode();

Transform49.children[0] = Transform50;

HAnimSegment48.children = new MFNode();

HAnimSegment48.children[0] = Transform49;

Shape Shape52 = createNode("Shape");
LineSet LineSet53 = createNode("LineSet");
LineSet53.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet53.coord = Coordinate54;

//from humanoid_root to sacroiliac vertices 2
ColorRGBA ColorRGBA55 = createNode("ColorRGBA");
ColorRGBA55.USE = "HAnimSegmentLineColorRGBA";
LineSet53.color = ColorRGBA55;

Shape52.geometry = LineSet53;

HAnimSegment48.children[1] = Shape52;

Shape Shape56 = createNode("Shape");
LineSet LineSet57 = createNode("LineSet");
LineSet57.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate58 = createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet57.coord = Coordinate58;

//from humanoid_root to vl5 vertices 2
ColorRGBA ColorRGBA59 = createNode("ColorRGBA");
ColorRGBA59.USE = "HAnimSegmentLineColorRGBA";
LineSet57.color = ColorRGBA59;

Shape56.geometry = LineSet57;

HAnimSegment48.children[2] = Shape56;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimSegment48;

HAnimJoint HAnimJoint60 = createNode("HAnimJoint");
HAnimJoint60.name = "sacroiliac";
HAnimJoint60.DEF = "hanim_sacroiliac";
HAnimJoint60.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment61 = createNode("HAnimSegment");
HAnimSegment61.name = "pelvis";
HAnimSegment61.DEF = "hanim_pelvis";
Transform Transform62 = createNode("Transform");
Transform62.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Transform Transform63 = createNode("Transform");
//Empty Transform
Shape Shape64 = createNode("Shape");
Shape64.USE = "HAnimJointShape";
Transform63.child = new undefined();

Transform63.child[0] = Shape64;

Transform62.children = new MFNode();

Transform62.children[0] = Transform63;

HAnimSegment61.children = new MFNode();

HAnimSegment61.children[0] = Transform62;

Shape Shape65 = createNode("Shape");
LineSet LineSet66 = createNode("LineSet");
LineSet66.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate67 = createNode("Coordinate");
Coordinate67.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet66.coord = Coordinate67;

//from sacroiliac to l_hip vertices 2
ColorRGBA ColorRGBA68 = createNode("ColorRGBA");
ColorRGBA68.USE = "HAnimSegmentLineColorRGBA";
LineSet66.color = ColorRGBA68;

Shape65.geometry = LineSet66;

HAnimSegment61.children[1] = Shape65;

HAnimSite HAnimSite69 = createNode("HAnimSite");
HAnimSite69.name = "buttocks_standing_wall_contact_point";
HAnimSite69.DEF = "hanim_buttocks_standing_wall_contact_point";
TouchSensor TouchSensor70 = createNode("TouchSensor");
TouchSensor70.description = "HAnimSite 93 buttocks_standing_wall_contact_point";
HAnimSite69.children = new MFNode();

HAnimSite69.children[0] = TouchSensor70;

Shape Shape71 = createNode("Shape");
Shape71.USE = "HAnimSiteShape";
HAnimSite69.children[1] = Shape71;

Billboard Billboard72 = createNode("Billboard");
Shape Shape73 = createNode("Shape");
Text Text74 = createNode("Text");
Text74.string = new MFString(new java.lang.String["93"]);
FontStyle FontStyle75 = createNode("FontStyle");
FontStyle75.size = 0.035;
Text74.fontStyle = FontStyle75;

Shape73.geometry = Text74;

Billboard72.children = new MFNode();

Billboard72.children[0] = Shape73;

HAnimSite69.children[2] = Billboard72;

HAnimSegment61.children[2] = HAnimSite69;

HAnimSite HAnimSite76 = createNode("HAnimSite");
HAnimSite76.name = "crotch";
HAnimSite76.DEF = "hanim_crotch";
HAnimSite76.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor77 = createNode("TouchSensor");
TouchSensor77.description = "HAnimSite 38 crotch";
HAnimSite76.children = new MFNode();

HAnimSite76.children[0] = TouchSensor77;

Shape Shape78 = createNode("Shape");
Shape78.USE = "HAnimSiteShape";
HAnimSite76.children[1] = Shape78;

Billboard Billboard79 = createNode("Billboard");
Shape Shape80 = createNode("Shape");
Text Text81 = createNode("Text");
Text81.string = new MFString(new java.lang.String["38"]);
FontStyle FontStyle82 = createNode("FontStyle");
FontStyle82.size = 0.035;
Text81.fontStyle = FontStyle82;

Shape80.geometry = Text81;

Billboard79.children = new MFNode();

Billboard79.children[0] = Shape80;

HAnimSite76.children[2] = Billboard79;

HAnimSegment61.children[3] = HAnimSite76;

HAnimSite HAnimSite83 = createNode("HAnimSite");
HAnimSite83.name = "l_asis";
HAnimSite83.DEF = "hanim_l_asis";
HAnimSite83.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor84 = createNode("TouchSensor");
TouchSensor84.description = "HAnimSite 32 l_asis";
HAnimSite83.children = new MFNode();

HAnimSite83.children[0] = TouchSensor84;

Shape Shape85 = createNode("Shape");
Shape85.USE = "HAnimSiteShape";
HAnimSite83.children[1] = Shape85;

Billboard Billboard86 = createNode("Billboard");
Shape Shape87 = createNode("Shape");
Text Text88 = createNode("Text");
Text88.string = new MFString(new java.lang.String["32"]);
FontStyle FontStyle89 = createNode("FontStyle");
FontStyle89.size = 0.035;
Text88.fontStyle = FontStyle89;

Shape87.geometry = Text88;

Billboard86.children = new MFNode();

Billboard86.children[0] = Shape87;

HAnimSite83.children[2] = Billboard86;

HAnimSegment61.children[4] = HAnimSite83;

HAnimSite HAnimSite90 = createNode("HAnimSite");
HAnimSite90.name = "l_iliocristale";
HAnimSite90.DEF = "hanim_l_iliocristale";
HAnimSite90.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor91 = createNode("TouchSensor");
TouchSensor91.description = "HAnimSite 33 l_iliocristale";
HAnimSite90.children = new MFNode();

HAnimSite90.children[0] = TouchSensor91;

Shape Shape92 = createNode("Shape");
Shape92.USE = "HAnimSiteShape";
HAnimSite90.children[1] = Shape92;

Billboard Billboard93 = createNode("Billboard");
Shape Shape94 = createNode("Shape");
Text Text95 = createNode("Text");
Text95.string = new MFString(new java.lang.String["33"]);
FontStyle FontStyle96 = createNode("FontStyle");
FontStyle96.size = 0.035;
Text95.fontStyle = FontStyle96;

Shape94.geometry = Text95;

Billboard93.children = new MFNode();

Billboard93.children[0] = Shape94;

HAnimSite90.children[2] = Billboard93;

HAnimSegment61.children[5] = HAnimSite90;

HAnimSite HAnimSite97 = createNode("HAnimSite");
HAnimSite97.name = "l_psis";
HAnimSite97.DEF = "hanim_l_psis";
HAnimSite97.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor98 = createNode("TouchSensor");
TouchSensor98.description = "HAnimSite 34 l_psis";
HAnimSite97.children = new MFNode();

HAnimSite97.children[0] = TouchSensor98;

Shape Shape99 = createNode("Shape");
Shape99.USE = "HAnimSiteShape";
HAnimSite97.children[1] = Shape99;

Billboard Billboard100 = createNode("Billboard");
Shape Shape101 = createNode("Shape");
Text Text102 = createNode("Text");
Text102.string = new MFString(new java.lang.String["34"]);
FontStyle FontStyle103 = createNode("FontStyle");
FontStyle103.size = 0.035;
Text102.fontStyle = FontStyle103;

Shape101.geometry = Text102;

Billboard100.children = new MFNode();

Billboard100.children[0] = Shape101;

HAnimSite97.children[2] = Billboard100;

HAnimSegment61.children[6] = HAnimSite97;

HAnimSite HAnimSite104 = createNode("HAnimSite");
HAnimSite104.name = "l_trochanterion";
HAnimSite104.DEF = "hanim_l_trochanterion";
HAnimSite104.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor105 = createNode("TouchSensor");
TouchSensor105.description = "HAnimSite 42 l_trochanterion";
HAnimSite104.children = new MFNode();

HAnimSite104.children[0] = TouchSensor105;

Shape Shape106 = createNode("Shape");
Shape106.USE = "HAnimSiteShape";
HAnimSite104.children[1] = Shape106;

Billboard Billboard107 = createNode("Billboard");
Shape Shape108 = createNode("Shape");
Text Text109 = createNode("Text");
Text109.string = new MFString(new java.lang.String["42"]);
FontStyle FontStyle110 = createNode("FontStyle");
FontStyle110.size = 0.035;
Text109.fontStyle = FontStyle110;

Shape108.geometry = Text109;

Billboard107.children = new MFNode();

Billboard107.children[0] = Shape108;

HAnimSite104.children[2] = Billboard107;

HAnimSegment61.children[7] = HAnimSite104;

HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.name = "r_asis";
HAnimSite111.DEF = "hanim_r_asis";
HAnimSite111.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor112 = createNode("TouchSensor");
TouchSensor112.description = "HAnimSite 35 r_asis";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = TouchSensor112;

Shape Shape113 = createNode("Shape");
Shape113.USE = "HAnimSiteShape";
HAnimSite111.children[1] = Shape113;

Billboard Billboard114 = createNode("Billboard");
Shape Shape115 = createNode("Shape");
Text Text116 = createNode("Text");
Text116.string = new MFString(new java.lang.String["35"]);
FontStyle FontStyle117 = createNode("FontStyle");
FontStyle117.size = 0.035;
Text116.fontStyle = FontStyle117;

Shape115.geometry = Text116;

Billboard114.children = new MFNode();

Billboard114.children[0] = Shape115;

HAnimSite111.children[2] = Billboard114;

HAnimSegment61.children[8] = HAnimSite111;

HAnimSite HAnimSite118 = createNode("HAnimSite");
HAnimSite118.name = "r_iliocristale";
HAnimSite118.DEF = "hanim_r_iliocristale";
HAnimSite118.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor119 = createNode("TouchSensor");
TouchSensor119.description = "HAnimSite 36 r_iliocristale";
HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = TouchSensor119;

Shape Shape120 = createNode("Shape");
Shape120.USE = "HAnimSiteShape";
HAnimSite118.children[1] = Shape120;

Billboard Billboard121 = createNode("Billboard");
Shape Shape122 = createNode("Shape");
Text Text123 = createNode("Text");
Text123.string = new MFString(new java.lang.String["36"]);
FontStyle FontStyle124 = createNode("FontStyle");
FontStyle124.size = 0.035;
Text123.fontStyle = FontStyle124;

Shape122.geometry = Text123;

Billboard121.children = new MFNode();

Billboard121.children[0] = Shape122;

HAnimSite118.children[2] = Billboard121;

HAnimSegment61.children[9] = HAnimSite118;

HAnimSite HAnimSite125 = createNode("HAnimSite");
HAnimSite125.name = "r_psis";
HAnimSite125.DEF = "hanim_r_psis";
HAnimSite125.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor126 = createNode("TouchSensor");
TouchSensor126.description = "HAnimSite 37 r_psis";
HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = TouchSensor126;

Shape Shape127 = createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125.children[1] = Shape127;

Billboard Billboard128 = createNode("Billboard");
Shape Shape129 = createNode("Shape");
Text Text130 = createNode("Text");
Text130.string = new MFString(new java.lang.String["37"]);
FontStyle FontStyle131 = createNode("FontStyle");
FontStyle131.size = 0.035;
Text130.fontStyle = FontStyle131;

Shape129.geometry = Text130;

Billboard128.children = new MFNode();

Billboard128.children[0] = Shape129;

HAnimSite125.children[2] = Billboard128;

HAnimSegment61.children[10] = HAnimSite125;

HAnimSite HAnimSite132 = createNode("HAnimSite");
HAnimSite132.name = "r_trochanterion";
HAnimSite132.DEF = "hanim_r_trochanterion";
HAnimSite132.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor133 = createNode("TouchSensor");
TouchSensor133.description = "HAnimSite 46 r_trochanterion";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

Shape Shape134 = createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

Billboard Billboard135 = createNode("Billboard");
Shape Shape136 = createNode("Shape");
Text Text137 = createNode("Text");
Text137.string = new MFString(new java.lang.String["46"]);
FontStyle FontStyle138 = createNode("FontStyle");
FontStyle138.size = 0.035;
Text137.fontStyle = FontStyle138;

Shape136.geometry = Text137;

Billboard135.children = new MFNode();

Billboard135.children[0] = Shape136;

HAnimSite132.children[2] = Billboard135;

HAnimSegment61.children[11] = HAnimSite132;

Shape Shape139 = createNode("Shape");
LineSet LineSet140 = createNode("LineSet");
LineSet140.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate141 = createNode("Coordinate");
Coordinate141.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet140.coord = Coordinate141;

//from sacroiliac to r_hip vertices 2
ColorRGBA ColorRGBA142 = createNode("ColorRGBA");
ColorRGBA142.USE = "HAnimSegmentLineColorRGBA";
LineSet140.color = ColorRGBA142;

Shape139.geometry = LineSet140;

HAnimSegment61.children[12] = Shape139;

HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimSegment61;

HAnimJoint HAnimJoint143 = createNode("HAnimJoint");
HAnimJoint143.name = "l_hip";
HAnimJoint143.DEF = "hanim_l_hip";
HAnimJoint143.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint143.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment144 = createNode("HAnimSegment");
HAnimSegment144.name = "l_thigh";
HAnimSegment144.DEF = "hanim_l_thigh";
Transform Transform145 = createNode("Transform");
Transform145.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Transform Transform146 = createNode("Transform");
//Empty Transform
Shape Shape147 = createNode("Shape");
Shape147.USE = "HAnimJointShape";
Transform146.child = new undefined();

Transform146.child[0] = Shape147;

Transform145.children = new MFNode();

Transform145.children[0] = Transform146;

HAnimSegment144.children = new MFNode();

HAnimSegment144.children[0] = Transform145;

Shape Shape148 = createNode("Shape");
LineSet LineSet149 = createNode("LineSet");
LineSet149.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate150 = createNode("Coordinate");
Coordinate150.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet149.coord = Coordinate150;

//from l_hip to l_knee vertices 2
ColorRGBA ColorRGBA151 = createNode("ColorRGBA");
ColorRGBA151.USE = "HAnimSegmentLineColorRGBA";
LineSet149.color = ColorRGBA151;

Shape148.geometry = LineSet149;

HAnimSegment144.children[1] = Shape148;

HAnimSite HAnimSite152 = createNode("HAnimSite");
HAnimSite152.name = "l_femoral_lateral_epicondyles";
HAnimSite152.DEF = "hanim_l_femoral_lateral_epicondyles";
HAnimSite152.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor153 = createNode("TouchSensor");
TouchSensor153.description = "HAnimSite 40 l_femoral_lateral_epicondyles";
HAnimSite152.children = new MFNode();

HAnimSite152.children[0] = TouchSensor153;

Shape Shape154 = createNode("Shape");
Shape154.USE = "HAnimSiteShape";
HAnimSite152.children[1] = Shape154;

Billboard Billboard155 = createNode("Billboard");
Shape Shape156 = createNode("Shape");
Text Text157 = createNode("Text");
Text157.string = new MFString(new java.lang.String["40"]);
FontStyle FontStyle158 = createNode("FontStyle");
FontStyle158.size = 0.035;
Text157.fontStyle = FontStyle158;

Shape156.geometry = Text157;

Billboard155.children = new MFNode();

Billboard155.children[0] = Shape156;

HAnimSite152.children[2] = Billboard155;

HAnimSegment144.children[2] = HAnimSite152;

HAnimSite HAnimSite159 = createNode("HAnimSite");
HAnimSite159.name = "l_femoral_medial_epicondyles";
HAnimSite159.DEF = "hanim_l_femoral_medial_epicondyles";
HAnimSite159.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor160 = createNode("TouchSensor");
TouchSensor160.description = "HAnimSite 39 l_femoral_medial_epicondyles";
HAnimSite159.children = new MFNode();

HAnimSite159.children[0] = TouchSensor160;

Shape Shape161 = createNode("Shape");
Shape161.USE = "HAnimSiteShape";
HAnimSite159.children[1] = Shape161;

Billboard Billboard162 = createNode("Billboard");
Shape Shape163 = createNode("Shape");
Text Text164 = createNode("Text");
Text164.string = new MFString(new java.lang.String["39"]);
FontStyle FontStyle165 = createNode("FontStyle");
FontStyle165.size = 0.035;
Text164.fontStyle = FontStyle165;

Shape163.geometry = Text164;

Billboard162.children = new MFNode();

Billboard162.children[0] = Shape163;

HAnimSite159.children[2] = Billboard162;

HAnimSegment144.children[3] = HAnimSite159;

HAnimSite HAnimSite166 = createNode("HAnimSite");
HAnimSite166.name = "l_knee_crease";
HAnimSite166.DEF = "hanim_l_knee_crease";
HAnimSite166.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor167 = createNode("TouchSensor");
TouchSensor167.description = "HAnimSite 90 l_knee_crease";
HAnimSite166.children = new MFNode();

HAnimSite166.children[0] = TouchSensor167;

Shape Shape168 = createNode("Shape");
Shape168.USE = "HAnimSiteShape";
HAnimSite166.children[1] = Shape168;

Billboard Billboard169 = createNode("Billboard");
Shape Shape170 = createNode("Shape");
Text Text171 = createNode("Text");
Text171.string = new MFString(new java.lang.String["90"]);
FontStyle FontStyle172 = createNode("FontStyle");
FontStyle172.size = 0.035;
Text171.fontStyle = FontStyle172;

Shape170.geometry = Text171;

Billboard169.children = new MFNode();

Billboard169.children[0] = Shape170;

HAnimSite166.children[2] = Billboard169;

HAnimSegment144.children[4] = HAnimSite166;

HAnimSite HAnimSite173 = createNode("HAnimSite");
HAnimSite173.name = "l_suprapatella";
HAnimSite173.DEF = "hanim_l_suprapatella";
TouchSensor TouchSensor174 = createNode("TouchSensor");
TouchSensor174.description = "HAnimSite 41 l_suprapatella";
HAnimSite173.children = new MFNode();

HAnimSite173.children[0] = TouchSensor174;

Shape Shape175 = createNode("Shape");
Shape175.USE = "HAnimSiteShape";
HAnimSite173.children[1] = Shape175;

Billboard Billboard176 = createNode("Billboard");
Shape Shape177 = createNode("Shape");
Text Text178 = createNode("Text");
Text178.string = new MFString(new java.lang.String["41"]);
FontStyle FontStyle179 = createNode("FontStyle");
FontStyle179.size = 0.035;
Text178.fontStyle = FontStyle179;

Shape177.geometry = Text178;

Billboard176.children = new MFNode();

Billboard176.children[0] = Shape177;

HAnimSite173.children[2] = Billboard176;

HAnimSegment144.children[5] = HAnimSite173;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.name = "l_knee";
HAnimJoint180.DEF = "hanim_l_knee";
HAnimJoint180.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint180.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.name = "l_calf";
HAnimSegment181.DEF = "hanim_l_calf";
Transform Transform182 = createNode("Transform");
Transform182.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Transform Transform183 = createNode("Transform");
//Empty Transform
Shape Shape184 = createNode("Shape");
Shape184.USE = "HAnimJointShape";
Transform183.child = new undefined();

Transform183.child[0] = Shape184;

Transform182.children = new MFNode();

Transform182.children[0] = Transform183;

HAnimSegment181.children = new MFNode();

HAnimSegment181.children[0] = Transform182;

Shape Shape185 = createNode("Shape");
LineSet LineSet186 = createNode("LineSet");
LineSet186.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate187 = createNode("Coordinate");
Coordinate187.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet186.coord = Coordinate187;

//from l_knee to l_talocrural vertices 2
ColorRGBA ColorRGBA188 = createNode("ColorRGBA");
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA";
LineSet186.color = ColorRGBA188;

Shape185.geometry = LineSet186;

HAnimSegment181.children[1] = Shape185;

HAnimSite HAnimSite189 = createNode("HAnimSite");
HAnimSite189.name = "l_lateral_malleolus";
HAnimSite189.DEF = "hanim_l_lateral_malleolus";
HAnimSite189.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor190 = createNode("TouchSensor");
TouchSensor190.description = "HAnimSite 49 l_lateral_malleolus";
HAnimSite189.children = new MFNode();

HAnimSite189.children[0] = TouchSensor190;

Shape Shape191 = createNode("Shape");
Shape191.USE = "HAnimSiteShape";
HAnimSite189.children[1] = Shape191;

Billboard Billboard192 = createNode("Billboard");
Shape Shape193 = createNode("Shape");
Text Text194 = createNode("Text");
Text194.string = new MFString(new java.lang.String["49"]);
FontStyle FontStyle195 = createNode("FontStyle");
FontStyle195.size = 0.035;
Text194.fontStyle = FontStyle195;

Shape193.geometry = Text194;

Billboard192.children = new MFNode();

Billboard192.children[0] = Shape193;

HAnimSite189.children[2] = Billboard192;

HAnimSegment181.children[2] = HAnimSite189;

HAnimSite HAnimSite196 = createNode("HAnimSite");
HAnimSite196.name = "l_medial_malleolus";
HAnimSite196.DEF = "hanim_l_medial_malleolus";
HAnimSite196.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor197 = createNode("TouchSensor");
TouchSensor197.description = "HAnimSite 48 l_medial_malleolus";
HAnimSite196.children = new MFNode();

HAnimSite196.children[0] = TouchSensor197;

Shape Shape198 = createNode("Shape");
Shape198.USE = "HAnimSiteShape";
HAnimSite196.children[1] = Shape198;

Billboard Billboard199 = createNode("Billboard");
Shape Shape200 = createNode("Shape");
Text Text201 = createNode("Text");
Text201.string = new MFString(new java.lang.String["48"]);
FontStyle FontStyle202 = createNode("FontStyle");
FontStyle202.size = 0.035;
Text201.fontStyle = FontStyle202;

Shape200.geometry = Text201;

Billboard199.children = new MFNode();

Billboard199.children[0] = Shape200;

HAnimSite196.children[2] = Billboard199;

HAnimSegment181.children[3] = HAnimSite196;

HAnimSite HAnimSite203 = createNode("HAnimSite");
HAnimSite203.name = "l_tibiale";
HAnimSite203.DEF = "hanim_l_tibiale";
TouchSensor TouchSensor204 = createNode("TouchSensor");
TouchSensor204.description = "HAnimSite 47 l_tibiale";
HAnimSite203.children = new MFNode();

HAnimSite203.children[0] = TouchSensor204;

Shape Shape205 = createNode("Shape");
Shape205.USE = "HAnimSiteShape";
HAnimSite203.children[1] = Shape205;

Billboard Billboard206 = createNode("Billboard");
Shape Shape207 = createNode("Shape");
Text Text208 = createNode("Text");
Text208.string = new MFString(new java.lang.String["47"]);
FontStyle FontStyle209 = createNode("FontStyle");
FontStyle209.size = 0.035;
Text208.fontStyle = FontStyle209;

Shape207.geometry = Text208;

Billboard206.children = new MFNode();

Billboard206.children[0] = Shape207;

HAnimSite203.children[2] = Billboard206;

HAnimSegment181.children[4] = HAnimSite203;

HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

HAnimJoint HAnimJoint210 = createNode("HAnimJoint");
HAnimJoint210.name = "l_talocrural";
HAnimJoint210.DEF = "hanim_l_talocrural";
HAnimJoint210.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint210.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint210.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment211 = createNode("HAnimSegment");
HAnimSegment211.name = "l_talus";
HAnimSegment211.DEF = "hanim_l_talus";
Transform Transform212 = createNode("Transform");
Transform212.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform212.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform212.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
Transform Transform213 = createNode("Transform");
//Empty Transform left foot
Shape Shape214 = createNode("Shape");
Shape214.USE = "HAnimJointShape";
Transform213.child = new undefined();

Transform213.child[0] = Shape214;

Transform212.children = new MFNode();

Transform212.children[0] = Transform213;

HAnimSegment211.children = new MFNode();

HAnimSegment211.children[0] = Transform212;

Shape Shape215 = createNode("Shape");
LineSet LineSet216 = createNode("LineSet");
LineSet216.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate217 = createNode("Coordinate");
Coordinate217.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608]);
LineSet216.coord = Coordinate217;

//from l_talocrural to l_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA218 = createNode("ColorRGBA");
ColorRGBA218.USE = "HAnimSegmentLineColorRGBA";
LineSet216.color = ColorRGBA218;

Shape215.geometry = LineSet216;

HAnimSegment211.children[1] = Shape215;

HAnimSite HAnimSite219 = createNode("HAnimSite");
HAnimSite219.name = "l_calcaneus_posterior";
HAnimSite219.DEF = "hanim_l_calcaneus_posterior";
HAnimSite219.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor220 = createNode("TouchSensor");
TouchSensor220.description = "HAnimSite 58 l_calcaneus_posterior";
HAnimSite219.children = new MFNode();

HAnimSite219.children[0] = TouchSensor220;

Shape Shape221 = createNode("Shape");
Shape221.USE = "HAnimSiteShape";
HAnimSite219.children[1] = Shape221;

Billboard Billboard222 = createNode("Billboard");
Shape Shape223 = createNode("Shape");
Text Text224 = createNode("Text");
Text224.string = new MFString(new java.lang.String["58"]);
FontStyle FontStyle225 = createNode("FontStyle");
FontStyle225.size = 0.035;
Text224.fontStyle = FontStyle225;

Shape223.geometry = Text224;

Billboard222.children = new MFNode();

Billboard222.children[0] = Shape223;

HAnimSite219.children[2] = Billboard222;

HAnimSegment211.children[2] = HAnimSite219;

HAnimSite HAnimSite226 = createNode("HAnimSite");
HAnimSite226.name = "l_sphyrion";
HAnimSite226.DEF = "hanim_l_sphyrion";
HAnimSite226.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor227 = createNode("TouchSensor");
TouchSensor227.description = "HAnimSite 50 l_sphyrion";
HAnimSite226.children = new MFNode();

HAnimSite226.children[0] = TouchSensor227;

Shape Shape228 = createNode("Shape");
Shape228.USE = "HAnimSiteShape";
HAnimSite226.children[1] = Shape228;

Billboard Billboard229 = createNode("Billboard");
Shape Shape230 = createNode("Shape");
Text Text231 = createNode("Text");
Text231.string = new MFString(new java.lang.String["50"]);
FontStyle FontStyle232 = createNode("FontStyle");
FontStyle232.size = 0.035;
Text231.fontStyle = FontStyle232;

Shape230.geometry = Text231;

Billboard229.children = new MFNode();

Billboard229.children[0] = Shape230;

HAnimSite226.children[2] = Billboard229;

HAnimSegment211.children[3] = HAnimSite226;

HAnimJoint210.children = new MFNode();

HAnimJoint210.children[0] = HAnimSegment211;

HAnimJoint HAnimJoint233 = createNode("HAnimJoint");
HAnimJoint233.name = "l_tarsometatarsal_2";
HAnimJoint233.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint233.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
HAnimJoint233.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint233.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment234 = createNode("HAnimSegment");
HAnimSegment234.name = "l_metatarsal_2";
HAnimSegment234.DEF = "hanim_l_metatarsal_2";
Transform Transform235 = createNode("Transform");
Transform235.translation = new SFVec3f(new float[0.08,0.0175,-0.0608]);
Transform Transform236 = createNode("Transform");
//Empty Transform
Shape Shape237 = createNode("Shape");
Shape237.USE = "HAnimJointShape";
Transform236.child = new undefined();

Transform236.child[0] = Shape237;

Transform235.children = new MFNode();

Transform235.children[0] = Transform236;

HAnimSegment234.children = new MFNode();

HAnimSegment234.children[0] = Transform235;

Shape Shape238 = createNode("Shape");
LineSet LineSet239 = createNode("LineSet");
LineSet239.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate240 = createNode("Coordinate");
Coordinate240.point = new MFVec3f(new float[0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
LineSet239.coord = Coordinate240;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA241 = createNode("ColorRGBA");
ColorRGBA241.USE = "HAnimSegmentLineColorRGBA";
LineSet239.color = ColorRGBA241;

Shape238.geometry = LineSet239;

HAnimSegment234.children[1] = Shape238;

HAnimJoint233.children = new MFNode();

HAnimJoint233.children[0] = HAnimSegment234;

HAnimJoint HAnimJoint242 = createNode("HAnimJoint");
HAnimJoint242.name = "l_metatarsophalangeal_2";
HAnimJoint242.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint242.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint242.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint242.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment243 = createNode("HAnimSegment");
HAnimSegment243.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment243.DEF = "hanim_l_tarsal_proximal_phalanx_2";
Transform Transform244 = createNode("Transform");
Transform244.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
Transform Transform245 = createNode("Transform");
//Empty Transform
Shape Shape246 = createNode("Shape");
Shape246.USE = "HAnimJointShape";
Transform245.child = new undefined();

Transform245.child[0] = Shape246;

Transform244.children = new MFNode();

Transform244.children[0] = Transform245;

HAnimSegment243.children = new MFNode();

HAnimSegment243.children[0] = Transform244;

Shape Shape247 = createNode("Shape");
LineSet LineSet248 = createNode("LineSet");
LineSet248.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate249 = createNode("Coordinate");
Coordinate249.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0013,0.0216]);
LineSet248.coord = Coordinate249;

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA250 = createNode("ColorRGBA");
ColorRGBA250.USE = "HAnimSegmentLineColorRGBA";
LineSet248.color = ColorRGBA250;

Shape247.geometry = LineSet248;

HAnimSegment243.children[1] = Shape247;

HAnimSite HAnimSite251 = createNode("HAnimSite");
HAnimSite251.name = "l_metatarsal_phalanx_1";
HAnimSite251.DEF = "hanim_l_metatarsal_phalanx_1";
TouchSensor TouchSensor252 = createNode("TouchSensor");
TouchSensor252.description = "HAnimSite 55 l_metatarsal_phalanx_1";
HAnimSite251.children = new MFNode();

HAnimSite251.children[0] = TouchSensor252;

Shape Shape253 = createNode("Shape");
Shape253.USE = "HAnimSiteShape";
HAnimSite251.children[1] = Shape253;

Billboard Billboard254 = createNode("Billboard");
Shape Shape255 = createNode("Shape");
Text Text256 = createNode("Text");
Text256.string = new MFString(new java.lang.String["55"]);
FontStyle FontStyle257 = createNode("FontStyle");
FontStyle257.size = 0.035;
Text256.fontStyle = FontStyle257;

Shape255.geometry = Text256;

Billboard254.children = new MFNode();

Billboard254.children[0] = Shape255;

HAnimSite251.children[2] = Billboard254;

HAnimSegment243.children[2] = HAnimSite251;

HAnimSite HAnimSite258 = createNode("HAnimSite");
HAnimSite258.name = "l_metatarsal_phalanx_5";
HAnimSite258.DEF = "hanim_l_metatarsal_phalanx_5";
TouchSensor TouchSensor259 = createNode("TouchSensor");
TouchSensor259.description = "HAnimSite 56 l_metatarsal_phalanx_5";
HAnimSite258.children = new MFNode();

HAnimSite258.children[0] = TouchSensor259;

Shape Shape260 = createNode("Shape");
Shape260.USE = "HAnimSiteShape";
HAnimSite258.children[1] = Shape260;

Billboard Billboard261 = createNode("Billboard");
Shape Shape262 = createNode("Shape");
Text Text263 = createNode("Text");
Text263.string = new MFString(new java.lang.String["56"]);
FontStyle FontStyle264 = createNode("FontStyle");
FontStyle264.size = 0.035;
Text263.fontStyle = FontStyle264;

Shape262.geometry = Text263;

Billboard261.children = new MFNode();

Billboard261.children[0] = Shape262;

HAnimSite258.children[2] = Billboard261;

HAnimSegment243.children[3] = HAnimSite258;

HAnimSite HAnimSite265 = createNode("HAnimSite");
HAnimSite265.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite265.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor266 = createNode("TouchSensor");
TouchSensor266.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = TouchSensor266;

Shape Shape267 = createNode("Shape");
Shape267.USE = "HAnimSiteShape";
HAnimSite265.children[1] = Shape267;

Billboard Billboard268 = createNode("Billboard");
Shape Shape269 = createNode("Shape");
Text Text270 = createNode("Text");
Text270.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle271 = createNode("FontStyle");
FontStyle271.size = 0.035;
Text270.fontStyle = FontStyle271;

Shape269.geometry = Text270;

Billboard268.children = new MFNode();

Billboard268.children[0] = Shape269;

HAnimSite265.children[2] = Billboard268;

HAnimSegment243.children[4] = HAnimSite265;

HAnimSite HAnimSite272 = createNode("HAnimSite");
HAnimSite272.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite272.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite272.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor273 = createNode("TouchSensor");
TouchSensor273.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite272.children = new MFNode();

HAnimSite272.children[0] = TouchSensor273;

Shape Shape274 = createNode("Shape");
Shape274.USE = "HAnimSiteShape";
HAnimSite272.children[1] = Shape274;

Billboard Billboard275 = createNode("Billboard");
Shape Shape276 = createNode("Shape");
Text Text277 = createNode("Text");
Text277.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle278 = createNode("FontStyle");
FontStyle278.size = 0.035;
Text277.fontStyle = FontStyle278;

Shape276.geometry = Text277;

Billboard275.children = new MFNode();

Billboard275.children[0] = Shape276;

HAnimSite272.children[2] = Billboard275;

HAnimSegment243.children[5] = HAnimSite272;

HAnimSite HAnimSite279 = createNode("HAnimSite");
HAnimSite279.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite279.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor280 = createNode("TouchSensor");
TouchSensor280.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite279.children = new MFNode();

HAnimSite279.children[0] = TouchSensor280;

Shape Shape281 = createNode("Shape");
Shape281.USE = "HAnimSiteShape";
HAnimSite279.children[1] = Shape281;

Billboard Billboard282 = createNode("Billboard");
Shape Shape283 = createNode("Shape");
Text Text284 = createNode("Text");
Text284.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle285 = createNode("FontStyle");
FontStyle285.size = 0.035;
Text284.fontStyle = FontStyle285;

Shape283.geometry = Text284;

Billboard282.children = new MFNode();

Billboard282.children[0] = Shape283;

HAnimSite279.children[2] = Billboard282;

HAnimSegment243.children[6] = HAnimSite279;

HAnimSite HAnimSite286 = createNode("HAnimSite");
HAnimSite286.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite286.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor287 = createNode("TouchSensor");
TouchSensor287.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite286.children = new MFNode();

HAnimSite286.children[0] = TouchSensor287;

Shape Shape288 = createNode("Shape");
Shape288.USE = "HAnimSiteShape";
HAnimSite286.children[1] = Shape288;

Billboard Billboard289 = createNode("Billboard");
Shape Shape290 = createNode("Shape");
Text Text291 = createNode("Text");
Text291.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle292 = createNode("FontStyle");
FontStyle292.size = 0.035;
Text291.fontStyle = FontStyle292;

Shape290.geometry = Text291;

Billboard289.children = new MFNode();

Billboard289.children[0] = Shape290;

HAnimSite286.children[2] = Billboard289;

HAnimSegment243.children[7] = HAnimSite286;

HAnimSite HAnimSite293 = createNode("HAnimSite");
HAnimSite293.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite293.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor294 = createNode("TouchSensor");
TouchSensor294.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite293.children = new MFNode();

HAnimSite293.children[0] = TouchSensor294;

Shape Shape295 = createNode("Shape");
Shape295.USE = "HAnimSiteShape";
HAnimSite293.children[1] = Shape295;

Billboard Billboard296 = createNode("Billboard");
Shape Shape297 = createNode("Shape");
Text Text298 = createNode("Text");
Text298.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle299 = createNode("FontStyle");
FontStyle299.size = 0.035;
Text298.fontStyle = FontStyle299;

Shape297.geometry = Text298;

Billboard296.children = new MFNode();

Billboard296.children[0] = Shape297;

HAnimSite293.children[2] = Billboard296;

HAnimSegment243.children[8] = HAnimSite293;

HAnimJoint242.children = new MFNode();

HAnimJoint242.children[0] = HAnimSegment243;

HAnimJoint HAnimJoint300 = createNode("HAnimJoint");
HAnimJoint300.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint300.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint300.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint300.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint300.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint242.children[1] = HAnimJoint300;

HAnimJoint233.children[1] = HAnimJoint242;

HAnimJoint210.children[1] = HAnimJoint233;

HAnimJoint180.children[1] = HAnimJoint210;

HAnimJoint143.children[1] = HAnimJoint180;

HAnimJoint60.children[1] = HAnimJoint143;

HAnimJoint HAnimJoint301 = createNode("HAnimJoint");
HAnimJoint301.name = "r_hip";
HAnimJoint301.DEF = "hanim_r_hip";
HAnimJoint301.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint301.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint301.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment302 = createNode("HAnimSegment");
HAnimSegment302.name = "r_thigh";
HAnimSegment302.DEF = "hanim_r_thigh";
Transform Transform303 = createNode("Transform");
Transform303.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform304 = createNode("Transform");
//Empty Transform
Shape Shape305 = createNode("Shape");
Shape305.USE = "HAnimJointShape";
Transform304.child = new undefined();

Transform304.child[0] = Shape305;

Transform303.children = new MFNode();

Transform303.children[0] = Transform304;

HAnimSegment302.children = new MFNode();

HAnimSegment302.children[0] = Transform303;

Shape Shape306 = createNode("Shape");
LineSet LineSet307 = createNode("LineSet");
LineSet307.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate308 = createNode("Coordinate");
Coordinate308.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet307.coord = Coordinate308;

//from r_hip to r_knee vertices 2
ColorRGBA ColorRGBA309 = createNode("ColorRGBA");
ColorRGBA309.USE = "HAnimSegmentLineColorRGBA";
LineSet307.color = ColorRGBA309;

Shape306.geometry = LineSet307;

HAnimSegment302.children[1] = Shape306;

HAnimSite HAnimSite310 = createNode("HAnimSite");
HAnimSite310.name = "r_femoral_lateral_epicondyles";
HAnimSite310.DEF = "hanim_r_femoral_lateral_epicondyles";
HAnimSite310.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor311 = createNode("TouchSensor");
TouchSensor311.description = "HAnimSite 44 r_femoral_lateral_epicondyles";
HAnimSite310.children = new MFNode();

HAnimSite310.children[0] = TouchSensor311;

Shape Shape312 = createNode("Shape");
Shape312.USE = "HAnimSiteShape";
HAnimSite310.children[1] = Shape312;

Billboard Billboard313 = createNode("Billboard");
Shape Shape314 = createNode("Shape");
Text Text315 = createNode("Text");
Text315.string = new MFString(new java.lang.String["44"]);
FontStyle FontStyle316 = createNode("FontStyle");
FontStyle316.size = 0.035;
Text315.fontStyle = FontStyle316;

Shape314.geometry = Text315;

Billboard313.children = new MFNode();

Billboard313.children[0] = Shape314;

HAnimSite310.children[2] = Billboard313;

HAnimSegment302.children[2] = HAnimSite310;

HAnimSite HAnimSite317 = createNode("HAnimSite");
HAnimSite317.name = "r_femoral_medial_epicondyles";
HAnimSite317.DEF = "hanim_r_femoral_medial_epicondyles";
HAnimSite317.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor318 = createNode("TouchSensor");
TouchSensor318.description = "HAnimSite 43 r_femoral_medial_epicondyles";
HAnimSite317.children = new MFNode();

HAnimSite317.children[0] = TouchSensor318;

Shape Shape319 = createNode("Shape");
Shape319.USE = "HAnimSiteShape";
HAnimSite317.children[1] = Shape319;

Billboard Billboard320 = createNode("Billboard");
Shape Shape321 = createNode("Shape");
Text Text322 = createNode("Text");
Text322.string = new MFString(new java.lang.String["43"]);
FontStyle FontStyle323 = createNode("FontStyle");
FontStyle323.size = 0.035;
Text322.fontStyle = FontStyle323;

Shape321.geometry = Text322;

Billboard320.children = new MFNode();

Billboard320.children[0] = Shape321;

HAnimSite317.children[2] = Billboard320;

HAnimSegment302.children[3] = HAnimSite317;

HAnimSite HAnimSite324 = createNode("HAnimSite");
HAnimSite324.name = "r_knee_crease";
HAnimSite324.DEF = "hanim_r_knee_crease";
HAnimSite324.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor325 = createNode("TouchSensor");
TouchSensor325.description = "HAnimSite 91 r_knee_crease";
HAnimSite324.children = new MFNode();

HAnimSite324.children[0] = TouchSensor325;

Shape Shape326 = createNode("Shape");
Shape326.USE = "HAnimSiteShape";
HAnimSite324.children[1] = Shape326;

Billboard Billboard327 = createNode("Billboard");
Shape Shape328 = createNode("Shape");
Text Text329 = createNode("Text");
Text329.string = new MFString(new java.lang.String["91"]);
FontStyle FontStyle330 = createNode("FontStyle");
FontStyle330.size = 0.035;
Text329.fontStyle = FontStyle330;

Shape328.geometry = Text329;

Billboard327.children = new MFNode();

Billboard327.children[0] = Shape328;

HAnimSite324.children[2] = Billboard327;

HAnimSegment302.children[4] = HAnimSite324;

HAnimSite HAnimSite331 = createNode("HAnimSite");
HAnimSite331.name = "r_suprapatella";
HAnimSite331.DEF = "hanim_r_suprapatella";
TouchSensor TouchSensor332 = createNode("TouchSensor");
TouchSensor332.description = "HAnimSite 45 r_suprapatella";
HAnimSite331.children = new MFNode();

HAnimSite331.children[0] = TouchSensor332;

Shape Shape333 = createNode("Shape");
Shape333.USE = "HAnimSiteShape";
HAnimSite331.children[1] = Shape333;

Billboard Billboard334 = createNode("Billboard");
Shape Shape335 = createNode("Shape");
Text Text336 = createNode("Text");
Text336.string = new MFString(new java.lang.String["45"]);
FontStyle FontStyle337 = createNode("FontStyle");
FontStyle337.size = 0.035;
Text336.fontStyle = FontStyle337;

Shape335.geometry = Text336;

Billboard334.children = new MFNode();

Billboard334.children[0] = Shape335;

HAnimSite331.children[2] = Billboard334;

HAnimSegment302.children[5] = HAnimSite331;

HAnimJoint301.children = new MFNode();

HAnimJoint301.children[0] = HAnimSegment302;

HAnimJoint HAnimJoint338 = createNode("HAnimJoint");
HAnimJoint338.name = "r_knee";
HAnimJoint338.DEF = "hanim_r_knee";
HAnimJoint338.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint338.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint338.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment339 = createNode("HAnimSegment");
HAnimSegment339.name = "r_calf";
HAnimSegment339.DEF = "hanim_r_calf";
Transform Transform340 = createNode("Transform");
Transform340.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform341 = createNode("Transform");
//Empty Transform
Shape Shape342 = createNode("Shape");
Shape342.USE = "HAnimJointShape";
Transform341.child = new undefined();

Transform341.child[0] = Shape342;

Transform340.children = new MFNode();

Transform340.children[0] = Transform341;

HAnimSegment339.children = new MFNode();

HAnimSegment339.children[0] = Transform340;

Shape Shape343 = createNode("Shape");
LineSet LineSet344 = createNode("LineSet");
LineSet344.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate345 = createNode("Coordinate");
Coordinate345.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet344.coord = Coordinate345;

//from r_knee to r_talocrural vertices 2
ColorRGBA ColorRGBA346 = createNode("ColorRGBA");
ColorRGBA346.USE = "HAnimSegmentLineColorRGBA";
LineSet344.color = ColorRGBA346;

Shape343.geometry = LineSet344;

HAnimSegment339.children[1] = Shape343;

HAnimSite HAnimSite347 = createNode("HAnimSite");
HAnimSite347.name = "r_lateral_malleolus";
HAnimSite347.DEF = "hanim_r_lateral_malleolus";
HAnimSite347.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor348 = createNode("TouchSensor");
TouchSensor348.description = "HAnimSite 53 r_lateral_malleolus";
HAnimSite347.children = new MFNode();

HAnimSite347.children[0] = TouchSensor348;

Shape Shape349 = createNode("Shape");
Shape349.USE = "HAnimSiteShape";
HAnimSite347.children[1] = Shape349;

Billboard Billboard350 = createNode("Billboard");
Shape Shape351 = createNode("Shape");
Text Text352 = createNode("Text");
Text352.string = new MFString(new java.lang.String["53"]);
FontStyle FontStyle353 = createNode("FontStyle");
FontStyle353.size = 0.035;
Text352.fontStyle = FontStyle353;

Shape351.geometry = Text352;

Billboard350.children = new MFNode();

Billboard350.children[0] = Shape351;

HAnimSite347.children[2] = Billboard350;

HAnimSegment339.children[2] = HAnimSite347;

HAnimSite HAnimSite354 = createNode("HAnimSite");
HAnimSite354.name = "r_medial_malleolus";
HAnimSite354.DEF = "hanim_r_medial_malleolus";
HAnimSite354.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor355 = createNode("TouchSensor");
TouchSensor355.description = "HAnimSite 52 r_medial_malleolus";
HAnimSite354.children = new MFNode();

HAnimSite354.children[0] = TouchSensor355;

Shape Shape356 = createNode("Shape");
Shape356.USE = "HAnimSiteShape";
HAnimSite354.children[1] = Shape356;

Billboard Billboard357 = createNode("Billboard");
Shape Shape358 = createNode("Shape");
Text Text359 = createNode("Text");
Text359.string = new MFString(new java.lang.String["52"]);
FontStyle FontStyle360 = createNode("FontStyle");
FontStyle360.size = 0.035;
Text359.fontStyle = FontStyle360;

Shape358.geometry = Text359;

Billboard357.children = new MFNode();

Billboard357.children[0] = Shape358;

HAnimSite354.children[2] = Billboard357;

HAnimSegment339.children[3] = HAnimSite354;

HAnimSite HAnimSite361 = createNode("HAnimSite");
HAnimSite361.name = "r_tibiale";
HAnimSite361.DEF = "hanim_r_tibiale";
TouchSensor TouchSensor362 = createNode("TouchSensor");
TouchSensor362.description = "HAnimSite 51 r_tibiale";
HAnimSite361.children = new MFNode();

HAnimSite361.children[0] = TouchSensor362;

Shape Shape363 = createNode("Shape");
Shape363.USE = "HAnimSiteShape";
HAnimSite361.children[1] = Shape363;

Billboard Billboard364 = createNode("Billboard");
Shape Shape365 = createNode("Shape");
Text Text366 = createNode("Text");
Text366.string = new MFString(new java.lang.String["51"]);
FontStyle FontStyle367 = createNode("FontStyle");
FontStyle367.size = 0.035;
Text366.fontStyle = FontStyle367;

Shape365.geometry = Text366;

Billboard364.children = new MFNode();

Billboard364.children[0] = Shape365;

HAnimSite361.children[2] = Billboard364;

HAnimSegment339.children[4] = HAnimSite361;

HAnimJoint338.children = new MFNode();

HAnimJoint338.children[0] = HAnimSegment339;

HAnimJoint HAnimJoint368 = createNode("HAnimJoint");
HAnimJoint368.name = "r_talocrural";
HAnimJoint368.DEF = "hanim_r_talocrural";
HAnimJoint368.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint368.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint368.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment369 = createNode("HAnimSegment");
HAnimSegment369.name = "r_talus";
HAnimSegment369.DEF = "hanim_r_talus";
Transform Transform370 = createNode("Transform");
Transform370.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform370.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform370.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
Transform Transform371 = createNode("Transform");
//Empty Transform right foot
Shape Shape372 = createNode("Shape");
Shape372.USE = "HAnimJointShape";
Transform371.child = new undefined();

Transform371.child[0] = Shape372;

Transform370.children = new MFNode();

Transform370.children[0] = Transform371;

HAnimSegment369.children = new MFNode();

HAnimSegment369.children[0] = Transform370;

Shape Shape373 = createNode("Shape");
LineSet LineSet374 = createNode("LineSet");
LineSet374.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate375 = createNode("Coordinate");
Coordinate375.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608]);
LineSet374.coord = Coordinate375;

//from r_talocrural to r_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA376 = createNode("ColorRGBA");
ColorRGBA376.USE = "HAnimSegmentLineColorRGBA";
LineSet374.color = ColorRGBA376;

Shape373.geometry = LineSet374;

HAnimSegment369.children[1] = Shape373;

HAnimSite HAnimSite377 = createNode("HAnimSite");
HAnimSite377.name = "r_calcaneus_posterior";
HAnimSite377.DEF = "hanim_r_calcaneus_posterior";
HAnimSite377.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor378 = createNode("TouchSensor");
TouchSensor378.description = "HAnimSite 62 r_calcaneus_posterior";
HAnimSite377.children = new MFNode();

HAnimSite377.children[0] = TouchSensor378;

Shape Shape379 = createNode("Shape");
Shape379.USE = "HAnimSiteShape";
HAnimSite377.children[1] = Shape379;

Billboard Billboard380 = createNode("Billboard");
Shape Shape381 = createNode("Shape");
Text Text382 = createNode("Text");
Text382.string = new MFString(new java.lang.String["62"]);
FontStyle FontStyle383 = createNode("FontStyle");
FontStyle383.size = 0.035;
Text382.fontStyle = FontStyle383;

Shape381.geometry = Text382;

Billboard380.children = new MFNode();

Billboard380.children[0] = Shape381;

HAnimSite377.children[2] = Billboard380;

HAnimSegment369.children[2] = HAnimSite377;

HAnimSite HAnimSite384 = createNode("HAnimSite");
HAnimSite384.name = "r_sphyrion";
HAnimSite384.DEF = "hanim_r_sphyrion";
HAnimSite384.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor385 = createNode("TouchSensor");
TouchSensor385.description = "HAnimSite 54 r_sphyrion";
HAnimSite384.children = new MFNode();

HAnimSite384.children[0] = TouchSensor385;

Shape Shape386 = createNode("Shape");
Shape386.USE = "HAnimSiteShape";
HAnimSite384.children[1] = Shape386;

Billboard Billboard387 = createNode("Billboard");
Shape Shape388 = createNode("Shape");
Text Text389 = createNode("Text");
Text389.string = new MFString(new java.lang.String["54"]);
FontStyle FontStyle390 = createNode("FontStyle");
FontStyle390.size = 0.035;
Text389.fontStyle = FontStyle390;

Shape388.geometry = Text389;

Billboard387.children = new MFNode();

Billboard387.children[0] = Shape388;

HAnimSite384.children[2] = Billboard387;

HAnimSegment369.children[3] = HAnimSite384;

HAnimJoint368.children = new MFNode();

HAnimJoint368.children[0] = HAnimSegment369;

HAnimJoint HAnimJoint391 = createNode("HAnimJoint");
HAnimJoint391.name = "r_tarsometatarsal_2";
HAnimJoint391.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint391.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
HAnimJoint391.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint391.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment392 = createNode("HAnimSegment");
HAnimSegment392.name = "r_metatarsal_2";
HAnimSegment392.DEF = "hanim_r_metatarsal_2";
Transform Transform393 = createNode("Transform");
Transform393.translation = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
Transform Transform394 = createNode("Transform");
//Empty Transform
Shape Shape395 = createNode("Shape");
Shape395.USE = "HAnimJointShape";
Transform394.child = new undefined();

Transform394.child[0] = Shape395;

Transform393.children = new MFNode();

Transform393.children[0] = Transform394;

HAnimSegment392.children = new MFNode();

HAnimSegment392.children[0] = Transform393;

Shape Shape396 = createNode("Shape");
LineSet LineSet397 = createNode("LineSet");
LineSet397.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate398 = createNode("Coordinate");
Coordinate398.point = new MFVec3f(new float[-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
LineSet397.coord = Coordinate398;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA399 = createNode("ColorRGBA");
ColorRGBA399.USE = "HAnimSegmentLineColorRGBA";
LineSet397.color = ColorRGBA399;

Shape396.geometry = LineSet397;

HAnimSegment392.children[1] = Shape396;

HAnimJoint391.children = new MFNode();

HAnimJoint391.children[0] = HAnimSegment392;

HAnimJoint HAnimJoint400 = createNode("HAnimJoint");
HAnimJoint400.name = "r_metatarsophalangeal_2";
HAnimJoint400.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint400.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint400.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint400.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment401 = createNode("HAnimSegment");
HAnimSegment401.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment401.DEF = "hanim_r_tarsal_proximal_phalanx_2";
Transform Transform402 = createNode("Transform");
Transform402.translation = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
Transform Transform403 = createNode("Transform");
//Empty Transform
Shape Shape404 = createNode("Shape");
Shape404.USE = "HAnimJointShape";
Transform403.child = new undefined();

Transform403.child[0] = Shape404;

Transform402.children = new MFNode();

Transform402.children[0] = Transform403;

HAnimSegment401.children = new MFNode();

HAnimSegment401.children[0] = Transform402;

Shape Shape405 = createNode("Shape");
LineSet LineSet406 = createNode("LineSet");
LineSet406.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate407 = createNode("Coordinate");
Coordinate407.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216]);
LineSet406.coord = Coordinate407;

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA408 = createNode("ColorRGBA");
ColorRGBA408.USE = "HAnimSegmentLineColorRGBA";
LineSet406.color = ColorRGBA408;

Shape405.geometry = LineSet406;

HAnimSegment401.children[1] = Shape405;

HAnimSite HAnimSite409 = createNode("HAnimSite");
HAnimSite409.name = "r_metatarsal_phalanx_1";
HAnimSite409.DEF = "hanim_r_metatarsal_phalanx_1";
TouchSensor TouchSensor410 = createNode("TouchSensor");
TouchSensor410.description = "HAnimSite 59 r_metatarsal_phalanx_1";
HAnimSite409.children = new MFNode();

HAnimSite409.children[0] = TouchSensor410;

Shape Shape411 = createNode("Shape");
Shape411.USE = "HAnimSiteShape";
HAnimSite409.children[1] = Shape411;

Billboard Billboard412 = createNode("Billboard");
Shape Shape413 = createNode("Shape");
Text Text414 = createNode("Text");
Text414.string = new MFString(new java.lang.String["59"]);
FontStyle FontStyle415 = createNode("FontStyle");
FontStyle415.size = 0.035;
Text414.fontStyle = FontStyle415;

Shape413.geometry = Text414;

Billboard412.children = new MFNode();

Billboard412.children[0] = Shape413;

HAnimSite409.children[2] = Billboard412;

HAnimSegment401.children[2] = HAnimSite409;

HAnimSite HAnimSite416 = createNode("HAnimSite");
HAnimSite416.name = "r_metatarsal_phalanx_5";
HAnimSite416.DEF = "hanim_r_metatarsal_phalanx_5";
TouchSensor TouchSensor417 = createNode("TouchSensor");
TouchSensor417.description = "HAnimSite 60 r_metatarsal_phalanx_5";
HAnimSite416.children = new MFNode();

HAnimSite416.children[0] = TouchSensor417;

Shape Shape418 = createNode("Shape");
Shape418.USE = "HAnimSiteShape";
HAnimSite416.children[1] = Shape418;

Billboard Billboard419 = createNode("Billboard");
Shape Shape420 = createNode("Shape");
Text Text421 = createNode("Text");
Text421.string = new MFString(new java.lang.String["60"]);
FontStyle FontStyle422 = createNode("FontStyle");
FontStyle422.size = 0.035;
Text421.fontStyle = FontStyle422;

Shape420.geometry = Text421;

Billboard419.children = new MFNode();

Billboard419.children[0] = Shape420;

HAnimSite416.children[2] = Billboard419;

HAnimSegment401.children[3] = HAnimSite416;

HAnimSite HAnimSite423 = createNode("HAnimSite");
HAnimSite423.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite423.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor424 = createNode("TouchSensor");
TouchSensor424.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite423.children = new MFNode();

HAnimSite423.children[0] = TouchSensor424;

Shape Shape425 = createNode("Shape");
Shape425.USE = "HAnimSiteShape";
HAnimSite423.children[1] = Shape425;

Billboard Billboard426 = createNode("Billboard");
Shape Shape427 = createNode("Shape");
Text Text428 = createNode("Text");
Text428.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle429 = createNode("FontStyle");
FontStyle429.size = 0.035;
Text428.fontStyle = FontStyle429;

Shape427.geometry = Text428;

Billboard426.children = new MFNode();

Billboard426.children[0] = Shape427;

HAnimSite423.children[2] = Billboard426;

HAnimSegment401.children[4] = HAnimSite423;

HAnimSite HAnimSite430 = createNode("HAnimSite");
HAnimSite430.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite430.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite430.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor431 = createNode("TouchSensor");
TouchSensor431.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite430.children = new MFNode();

HAnimSite430.children[0] = TouchSensor431;

Shape Shape432 = createNode("Shape");
Shape432.USE = "HAnimSiteShape";
HAnimSite430.children[1] = Shape432;

Billboard Billboard433 = createNode("Billboard");
Shape Shape434 = createNode("Shape");
Text Text435 = createNode("Text");
Text435.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle436 = createNode("FontStyle");
FontStyle436.size = 0.035;
Text435.fontStyle = FontStyle436;

Shape434.geometry = Text435;

Billboard433.children = new MFNode();

Billboard433.children[0] = Shape434;

HAnimSite430.children[2] = Billboard433;

HAnimSegment401.children[5] = HAnimSite430;

HAnimSite HAnimSite437 = createNode("HAnimSite");
HAnimSite437.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite437.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor438 = createNode("TouchSensor");
TouchSensor438.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite437.children = new MFNode();

HAnimSite437.children[0] = TouchSensor438;

Shape Shape439 = createNode("Shape");
Shape439.USE = "HAnimSiteShape";
HAnimSite437.children[1] = Shape439;

Billboard Billboard440 = createNode("Billboard");
Shape Shape441 = createNode("Shape");
Text Text442 = createNode("Text");
Text442.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle443 = createNode("FontStyle");
FontStyle443.size = 0.035;
Text442.fontStyle = FontStyle443;

Shape441.geometry = Text442;

Billboard440.children = new MFNode();

Billboard440.children[0] = Shape441;

HAnimSite437.children[2] = Billboard440;

HAnimSegment401.children[6] = HAnimSite437;

HAnimSite HAnimSite444 = createNode("HAnimSite");
HAnimSite444.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite444.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor445 = createNode("TouchSensor");
TouchSensor445.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite444.children = new MFNode();

HAnimSite444.children[0] = TouchSensor445;

Shape Shape446 = createNode("Shape");
Shape446.USE = "HAnimSiteShape";
HAnimSite444.children[1] = Shape446;

Billboard Billboard447 = createNode("Billboard");
Shape Shape448 = createNode("Shape");
Text Text449 = createNode("Text");
Text449.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle450 = createNode("FontStyle");
FontStyle450.size = 0.035;
Text449.fontStyle = FontStyle450;

Shape448.geometry = Text449;

Billboard447.children = new MFNode();

Billboard447.children[0] = Shape448;

HAnimSite444.children[2] = Billboard447;

HAnimSegment401.children[7] = HAnimSite444;

HAnimSite HAnimSite451 = createNode("HAnimSite");
HAnimSite451.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite451.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor452 = createNode("TouchSensor");
TouchSensor452.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite451.children = new MFNode();

HAnimSite451.children[0] = TouchSensor452;

Shape Shape453 = createNode("Shape");
Shape453.USE = "HAnimSiteShape";
HAnimSite451.children[1] = Shape453;

Billboard Billboard454 = createNode("Billboard");
Shape Shape455 = createNode("Shape");
Text Text456 = createNode("Text");
Text456.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle457 = createNode("FontStyle");
FontStyle457.size = 0.035;
Text456.fontStyle = FontStyle457;

Shape455.geometry = Text456;

Billboard454.children = new MFNode();

Billboard454.children[0] = Shape455;

HAnimSite451.children[2] = Billboard454;

HAnimSegment401.children[8] = HAnimSite451;

HAnimJoint400.children = new MFNode();

HAnimJoint400.children[0] = HAnimSegment401;

HAnimJoint HAnimJoint458 = createNode("HAnimJoint");
HAnimJoint458.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint458.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint458.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint458.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint458.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint400.children[1] = HAnimJoint458;

HAnimJoint391.children[1] = HAnimJoint400;

HAnimJoint368.children[1] = HAnimJoint391;

HAnimJoint338.children[1] = HAnimJoint368;

HAnimJoint301.children[1] = HAnimJoint338;

HAnimJoint60.children[2] = HAnimJoint301;

HAnimJoint47.children[1] = HAnimJoint60;

HAnimJoint HAnimJoint459 = createNode("HAnimJoint");
HAnimJoint459.name = "vl5";
HAnimJoint459.DEF = "hanim_vl5";
HAnimJoint459.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint459.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint459.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment460 = createNode("HAnimSegment");
HAnimSegment460.name = "l5";
HAnimSegment460.DEF = "hanim_l5";
Transform Transform461 = createNode("Transform");
Transform461.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Transform Transform462 = createNode("Transform");
//Empty Transform
Shape Shape463 = createNode("Shape");
Shape463.USE = "HAnimJointShape";
Transform462.child = new undefined();

Transform462.child[0] = Shape463;

Transform461.children = new MFNode();

Transform461.children[0] = Transform462;

HAnimSegment460.children = new MFNode();

HAnimSegment460.children[0] = Transform461;

Shape Shape464 = createNode("Shape");
LineSet LineSet465 = createNode("LineSet");
LineSet465.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate466 = createNode("Coordinate");
Coordinate466.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet465.coord = Coordinate466;

//from vl5 to vl4 vertices 2
ColorRGBA ColorRGBA467 = createNode("ColorRGBA");
ColorRGBA467.USE = "HAnimSegmentLineColorRGBA";
LineSet465.color = ColorRGBA467;

Shape464.geometry = LineSet465;

HAnimSegment460.children[1] = Shape464;

HAnimSite HAnimSite468 = createNode("HAnimSite");
HAnimSite468.name = "navel";
HAnimSite468.DEF = "hanim_navel";
HAnimSite468.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor469 = createNode("TouchSensor");
TouchSensor469.description = "HAnimSite 84 navel";
HAnimSite468.children = new MFNode();

HAnimSite468.children[0] = TouchSensor469;

Shape Shape470 = createNode("Shape");
Shape470.USE = "HAnimSiteShape";
HAnimSite468.children[1] = Shape470;

Billboard Billboard471 = createNode("Billboard");
Shape Shape472 = createNode("Shape");
Text Text473 = createNode("Text");
Text473.string = new MFString(new java.lang.String["84"]);
FontStyle FontStyle474 = createNode("FontStyle");
FontStyle474.size = 0.035;
Text473.fontStyle = FontStyle474;

Shape472.geometry = Text473;

Billboard471.children = new MFNode();

Billboard471.children[0] = Shape472;

HAnimSite468.children[2] = Billboard471;

HAnimSegment460.children[2] = HAnimSite468;

HAnimSite HAnimSite475 = createNode("HAnimSite");
HAnimSite475.name = "waist_preferred_anterior";
HAnimSite475.DEF = "hanim_waist_preferred_anterior";
TouchSensor TouchSensor476 = createNode("TouchSensor");
TouchSensor476.description = "HAnimSite 26 waist_preferred_anterior";
HAnimSite475.children = new MFNode();

HAnimSite475.children[0] = TouchSensor476;

Shape Shape477 = createNode("Shape");
Shape477.USE = "HAnimSiteShape";
HAnimSite475.children[1] = Shape477;

Billboard Billboard478 = createNode("Billboard");
Shape Shape479 = createNode("Shape");
Text Text480 = createNode("Text");
Text480.string = new MFString(new java.lang.String["26"]);
FontStyle FontStyle481 = createNode("FontStyle");
FontStyle481.size = 0.035;
Text480.fontStyle = FontStyle481;

Shape479.geometry = Text480;

Billboard478.children = new MFNode();

Billboard478.children[0] = Shape479;

HAnimSite475.children[2] = Billboard478;

HAnimSegment460.children[3] = HAnimSite475;

HAnimSite HAnimSite482 = createNode("HAnimSite");
HAnimSite482.name = "waist_preferred_posterior";
HAnimSite482.DEF = "hanim_waist_preferred_posterior";
HAnimSite482.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor483 = createNode("TouchSensor");
TouchSensor483.description = "HAnimSite 27 waist_preferred_posterior";
HAnimSite482.children = new MFNode();

HAnimSite482.children[0] = TouchSensor483;

Shape Shape484 = createNode("Shape");
Shape484.USE = "HAnimSiteShape";
HAnimSite482.children[1] = Shape484;

Billboard Billboard485 = createNode("Billboard");
Shape Shape486 = createNode("Shape");
Text Text487 = createNode("Text");
Text487.string = new MFString(new java.lang.String["27"]);
FontStyle FontStyle488 = createNode("FontStyle");
FontStyle488.size = 0.035;
Text487.fontStyle = FontStyle488;

Shape486.geometry = Text487;

Billboard485.children = new MFNode();

Billboard485.children[0] = Shape486;

HAnimSite482.children[2] = Billboard485;

HAnimSegment460.children[4] = HAnimSite482;

HAnimJoint459.children = new MFNode();

HAnimJoint459.children[0] = HAnimSegment460;

HAnimJoint HAnimJoint489 = createNode("HAnimJoint");
HAnimJoint489.name = "vl4";
HAnimJoint489.DEF = "hanim_vl4";
HAnimJoint489.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint489.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint489.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment490 = createNode("HAnimSegment");
HAnimSegment490.name = "l4";
HAnimSegment490.DEF = "hanim_l4";
Transform Transform491 = createNode("Transform");
Transform491.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
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
Coordinate496.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet495.coord = Coordinate496;

//from vl4 to vl3 vertices 2
ColorRGBA ColorRGBA497 = createNode("ColorRGBA");
ColorRGBA497.USE = "HAnimSegmentLineColorRGBA";
LineSet495.color = ColorRGBA497;

Shape494.geometry = LineSet495;

HAnimSegment490.children[1] = Shape494;

HAnimJoint489.children = new MFNode();

HAnimJoint489.children[0] = HAnimSegment490;

HAnimJoint HAnimJoint498 = createNode("HAnimJoint");
HAnimJoint498.name = "vl3";
HAnimJoint498.DEF = "hanim_vl3";
HAnimJoint498.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint498.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint498.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment499 = createNode("HAnimSegment");
HAnimSegment499.name = "l3";
HAnimSegment499.DEF = "hanim_l3";
Transform Transform500 = createNode("Transform");
Transform500.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Transform Transform501 = createNode("Transform");
//Empty Transform
Shape Shape502 = createNode("Shape");
Shape502.USE = "HAnimJointShape";
Transform501.child = new undefined();

Transform501.child[0] = Shape502;

Transform500.children = new MFNode();

Transform500.children[0] = Transform501;

HAnimSegment499.children = new MFNode();

HAnimSegment499.children[0] = Transform500;

Shape Shape503 = createNode("Shape");
LineSet LineSet504 = createNode("LineSet");
LineSet504.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate505 = createNode("Coordinate");
Coordinate505.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet504.coord = Coordinate505;

//from vl3 to vl2 vertices 2
ColorRGBA ColorRGBA506 = createNode("ColorRGBA");
ColorRGBA506.USE = "HAnimSegmentLineColorRGBA";
LineSet504.color = ColorRGBA506;

Shape503.geometry = LineSet504;

HAnimSegment499.children[1] = Shape503;

HAnimJoint498.children = new MFNode();

HAnimJoint498.children[0] = HAnimSegment499;

HAnimJoint HAnimJoint507 = createNode("HAnimJoint");
HAnimJoint507.name = "vl2";
HAnimJoint507.DEF = "hanim_vl2";
HAnimJoint507.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint507.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint507.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment508 = createNode("HAnimSegment");
HAnimSegment508.name = "l2";
HAnimSegment508.DEF = "hanim_l2";
Transform Transform509 = createNode("Transform");
Transform509.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Transform Transform510 = createNode("Transform");
//Empty Transform
Shape Shape511 = createNode("Shape");
Shape511.USE = "HAnimJointShape";
Transform510.child = new undefined();

Transform510.child[0] = Shape511;

Transform509.children = new MFNode();

Transform509.children[0] = Transform510;

HAnimSegment508.children = new MFNode();

HAnimSegment508.children[0] = Transform509;

Shape Shape512 = createNode("Shape");
LineSet LineSet513 = createNode("LineSet");
LineSet513.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate514 = createNode("Coordinate");
Coordinate514.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet513.coord = Coordinate514;

//from vl2 to vl1 vertices 2
ColorRGBA ColorRGBA515 = createNode("ColorRGBA");
ColorRGBA515.USE = "HAnimSegmentLineColorRGBA";
LineSet513.color = ColorRGBA515;

Shape512.geometry = LineSet513;

HAnimSegment508.children[1] = Shape512;

HAnimSite HAnimSite516 = createNode("HAnimSite");
HAnimSite516.name = "l_rib10";
HAnimSite516.DEF = "hanim_l_rib10";
HAnimSite516.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor517 = createNode("TouchSensor");
TouchSensor517.description = "HAnimSite 28 l_rib10";
HAnimSite516.children = new MFNode();

HAnimSite516.children[0] = TouchSensor517;

Shape Shape518 = createNode("Shape");
Shape518.USE = "HAnimSiteShape";
HAnimSite516.children[1] = Shape518;

Billboard Billboard519 = createNode("Billboard");
Shape Shape520 = createNode("Shape");
Text Text521 = createNode("Text");
Text521.string = new MFString(new java.lang.String["28"]);
FontStyle FontStyle522 = createNode("FontStyle");
FontStyle522.size = 0.035;
Text521.fontStyle = FontStyle522;

Shape520.geometry = Text521;

Billboard519.children = new MFNode();

Billboard519.children[0] = Shape520;

HAnimSite516.children[2] = Billboard519;

HAnimSegment508.children[2] = HAnimSite516;

HAnimSite HAnimSite523 = createNode("HAnimSite");
HAnimSite523.name = "r_rib10";
HAnimSite523.DEF = "hanim_r_rib10";
HAnimSite523.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor524 = createNode("TouchSensor");
TouchSensor524.description = "HAnimSite 30 r_rib10";
HAnimSite523.children = new MFNode();

HAnimSite523.children[0] = TouchSensor524;

Shape Shape525 = createNode("Shape");
Shape525.USE = "HAnimSiteShape";
HAnimSite523.children[1] = Shape525;

Billboard Billboard526 = createNode("Billboard");
Shape Shape527 = createNode("Shape");
Text Text528 = createNode("Text");
Text528.string = new MFString(new java.lang.String["30"]);
FontStyle FontStyle529 = createNode("FontStyle");
FontStyle529.size = 0.035;
Text528.fontStyle = FontStyle529;

Shape527.geometry = Text528;

Billboard526.children = new MFNode();

Billboard526.children[0] = Shape527;

HAnimSite523.children[2] = Billboard526;

HAnimSegment508.children[3] = HAnimSite523;

HAnimSite HAnimSite530 = createNode("HAnimSite");
HAnimSite530.name = "spine_2_middle_back";
HAnimSite530.DEF = "hanim_spine_2_middle_back";
TouchSensor TouchSensor531 = createNode("TouchSensor");
TouchSensor531.description = "HAnimSite spine_2_middle_back";
HAnimSite530.children = new MFNode();

HAnimSite530.children[0] = TouchSensor531;

Shape Shape532 = createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530.children[1] = Shape532;

Billboard Billboard533 = createNode("Billboard");
Shape Shape534 = createNode("Shape");
Text Text535 = createNode("Text");
Text535.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle536 = createNode("FontStyle");
FontStyle536.size = 0.035;
Text535.fontStyle = FontStyle536;

Shape534.geometry = Text535;

Billboard533.children = new MFNode();

Billboard533.children[0] = Shape534;

HAnimSite530.children[2] = Billboard533;

HAnimSegment508.children[4] = HAnimSite530;

HAnimJoint507.children = new MFNode();

HAnimJoint507.children[0] = HAnimSegment508;

HAnimJoint HAnimJoint537 = createNode("HAnimJoint");
HAnimJoint537.name = "vl1";
HAnimJoint537.DEF = "hanim_vl1";
HAnimJoint537.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint537.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint537.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment538 = createNode("HAnimSegment");
HAnimSegment538.name = "l1";
HAnimSegment538.DEF = "hanim_l1";
Transform Transform539 = createNode("Transform");
Transform539.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform540 = createNode("Transform");
//Empty Transform
Shape Shape541 = createNode("Shape");
Shape541.USE = "HAnimJointShape";
Transform540.child = new undefined();

Transform540.child[0] = Shape541;

Transform539.children = new MFNode();

Transform539.children[0] = Transform540;

HAnimSegment538.children = new MFNode();

HAnimSegment538.children[0] = Transform539;

Shape Shape542 = createNode("Shape");
LineSet LineSet543 = createNode("LineSet");
LineSet543.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate544 = createNode("Coordinate");
Coordinate544.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet543.coord = Coordinate544;

//from vl1 to vt12 vertices 2
ColorRGBA ColorRGBA545 = createNode("ColorRGBA");
ColorRGBA545.USE = "HAnimSegmentLineColorRGBA";
LineSet543.color = ColorRGBA545;

Shape542.geometry = LineSet543;

HAnimSegment538.children[1] = Shape542;

HAnimJoint537.children = new MFNode();

HAnimJoint537.children[0] = HAnimSegment538;

HAnimJoint HAnimJoint546 = createNode("HAnimJoint");
HAnimJoint546.name = "vt12";
HAnimJoint546.DEF = "hanim_vt12";
HAnimJoint546.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint546.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint546.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment547 = createNode("HAnimSegment");
HAnimSegment547.name = "t12";
HAnimSegment547.DEF = "hanim_t12";
Transform Transform548 = createNode("Transform");
Transform548.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Transform Transform549 = createNode("Transform");
//Empty Transform
Shape Shape550 = createNode("Shape");
Shape550.USE = "HAnimJointShape";
Transform549.child = new undefined();

Transform549.child[0] = Shape550;

Transform548.children = new MFNode();

Transform548.children[0] = Transform549;

HAnimSegment547.children = new MFNode();

HAnimSegment547.children[0] = Transform548;

Shape Shape551 = createNode("Shape");
LineSet LineSet552 = createNode("LineSet");
LineSet552.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate553 = createNode("Coordinate");
Coordinate553.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet552.coord = Coordinate553;

//from vt12 to vt11 vertices 2
ColorRGBA ColorRGBA554 = createNode("ColorRGBA");
ColorRGBA554.USE = "HAnimSegmentLineColorRGBA";
LineSet552.color = ColorRGBA554;

Shape551.geometry = LineSet552;

HAnimSegment547.children[1] = Shape551;

HAnimJoint546.children = new MFNode();

HAnimJoint546.children[0] = HAnimSegment547;

HAnimJoint HAnimJoint555 = createNode("HAnimJoint");
HAnimJoint555.name = "vt11";
HAnimJoint555.DEF = "hanim_vt11";
HAnimJoint555.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint555.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint555.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment556 = createNode("HAnimSegment");
HAnimSegment556.name = "t11";
HAnimSegment556.DEF = "hanim_t11";
Transform Transform557 = createNode("Transform");
Transform557.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Transform Transform558 = createNode("Transform");
//Empty Transform
Shape Shape559 = createNode("Shape");
Shape559.USE = "HAnimJointShape";
Transform558.child = new undefined();

Transform558.child[0] = Shape559;

Transform557.children = new MFNode();

Transform557.children[0] = Transform558;

HAnimSegment556.children = new MFNode();

HAnimSegment556.children[0] = Transform557;

Shape Shape560 = createNode("Shape");
LineSet LineSet561 = createNode("LineSet");
LineSet561.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate562 = createNode("Coordinate");
Coordinate562.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet561.coord = Coordinate562;

//from vt11 to vt10 vertices 2
ColorRGBA ColorRGBA563 = createNode("ColorRGBA");
ColorRGBA563.USE = "HAnimSegmentLineColorRGBA";
LineSet561.color = ColorRGBA563;

Shape560.geometry = LineSet561;

HAnimSegment556.children[1] = Shape560;

HAnimJoint555.children = new MFNode();

HAnimJoint555.children[0] = HAnimSegment556;

HAnimJoint HAnimJoint564 = createNode("HAnimJoint");
HAnimJoint564.name = "vt10";
HAnimJoint564.DEF = "hanim_vt10";
HAnimJoint564.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint564.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint564.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment565 = createNode("HAnimSegment");
HAnimSegment565.name = "t10";
HAnimSegment565.DEF = "hanim_t10";
Transform Transform566 = createNode("Transform");
Transform566.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform567 = createNode("Transform");
//Empty Transform
Shape Shape568 = createNode("Shape");
Shape568.USE = "HAnimJointShape";
Transform567.child = new undefined();

Transform567.child[0] = Shape568;

Transform566.children = new MFNode();

Transform566.children[0] = Transform567;

HAnimSegment565.children = new MFNode();

HAnimSegment565.children[0] = Transform566;

Shape Shape569 = createNode("Shape");
LineSet LineSet570 = createNode("LineSet");
LineSet570.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate571 = createNode("Coordinate");
Coordinate571.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet570.coord = Coordinate571;

//from vt10 to vt9 vertices 2
ColorRGBA ColorRGBA572 = createNode("ColorRGBA");
ColorRGBA572.USE = "HAnimSegmentLineColorRGBA";
LineSet570.color = ColorRGBA572;

Shape569.geometry = LineSet570;

HAnimSegment565.children[1] = Shape569;

HAnimSite HAnimSite573 = createNode("HAnimSite");
HAnimSite573.name = "substernale";
HAnimSite573.DEF = "hanim_substernale";
HAnimSite573.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor574 = createNode("TouchSensor");
TouchSensor574.description = "HAnimSite 13 substernale";
HAnimSite573.children = new MFNode();

HAnimSite573.children[0] = TouchSensor574;

Shape Shape575 = createNode("Shape");
Shape575.USE = "HAnimSiteShape";
HAnimSite573.children[1] = Shape575;

Billboard Billboard576 = createNode("Billboard");
Shape Shape577 = createNode("Shape");
Text Text578 = createNode("Text");
Text578.string = new MFString(new java.lang.String["13"]);
FontStyle FontStyle579 = createNode("FontStyle");
FontStyle579.size = 0.035;
Text578.fontStyle = FontStyle579;

Shape577.geometry = Text578;

Billboard576.children = new MFNode();

Billboard576.children[0] = Shape577;

HAnimSite573.children[2] = Billboard576;

HAnimSegment565.children[2] = HAnimSite573;

HAnimJoint564.children = new MFNode();

HAnimJoint564.children[0] = HAnimSegment565;

HAnimJoint HAnimJoint580 = createNode("HAnimJoint");
HAnimJoint580.name = "vt9";
HAnimJoint580.DEF = "hanim_vt9";
HAnimJoint580.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint580.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint580.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment581 = createNode("HAnimSegment");
HAnimSegment581.name = "t9";
HAnimSegment581.DEF = "hanim_t9";
Transform Transform582 = createNode("Transform");
Transform582.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Transform Transform583 = createNode("Transform");
//Empty Transform
Shape Shape584 = createNode("Shape");
Shape584.USE = "HAnimJointShape";
Transform583.child = new undefined();

Transform583.child[0] = Shape584;

Transform582.children = new MFNode();

Transform582.children[0] = Transform583;

HAnimSegment581.children = new MFNode();

HAnimSegment581.children[0] = Transform582;

Shape Shape585 = createNode("Shape");
LineSet LineSet586 = createNode("LineSet");
LineSet586.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate587 = createNode("Coordinate");
Coordinate587.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet586.coord = Coordinate587;

//from vt9 to vt8 vertices 2
ColorRGBA ColorRGBA588 = createNode("ColorRGBA");
ColorRGBA588.USE = "HAnimSegmentLineColorRGBA";
LineSet586.color = ColorRGBA588;

Shape585.geometry = LineSet586;

HAnimSegment581.children[1] = Shape585;

HAnimSite HAnimSite589 = createNode("HAnimSite");
HAnimSite589.name = "l_thelion";
HAnimSite589.DEF = "hanim_l_thelion";
HAnimSite589.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor590 = createNode("TouchSensor");
TouchSensor590.description = "HAnimSite 29 l_thelion";
HAnimSite589.children = new MFNode();

HAnimSite589.children[0] = TouchSensor590;

Shape Shape591 = createNode("Shape");
Shape591.USE = "HAnimSiteShape";
HAnimSite589.children[1] = Shape591;

Billboard Billboard592 = createNode("Billboard");
Shape Shape593 = createNode("Shape");
Text Text594 = createNode("Text");
Text594.string = new MFString(new java.lang.String["29"]);
FontStyle FontStyle595 = createNode("FontStyle");
FontStyle595.size = 0.035;
Text594.fontStyle = FontStyle595;

Shape593.geometry = Text594;

Billboard592.children = new MFNode();

Billboard592.children[0] = Shape593;

HAnimSite589.children[2] = Billboard592;

HAnimSegment581.children[2] = HAnimSite589;

HAnimSite HAnimSite596 = createNode("HAnimSite");
HAnimSite596.name = "r_thelion";
HAnimSite596.DEF = "hanim_r_thelion";
HAnimSite596.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor597 = createNode("TouchSensor");
TouchSensor597.description = "HAnimSite 31 r_thelion";
HAnimSite596.children = new MFNode();

HAnimSite596.children[0] = TouchSensor597;

Shape Shape598 = createNode("Shape");
Shape598.USE = "HAnimSiteShape";
HAnimSite596.children[1] = Shape598;

Billboard Billboard599 = createNode("Billboard");
Shape Shape600 = createNode("Shape");
Text Text601 = createNode("Text");
Text601.string = new MFString(new java.lang.String["31"]);
FontStyle FontStyle602 = createNode("FontStyle");
FontStyle602.size = 0.035;
Text601.fontStyle = FontStyle602;

Shape600.geometry = Text601;

Billboard599.children = new MFNode();

Billboard599.children[0] = Shape600;

HAnimSite596.children[2] = Billboard599;

HAnimSegment581.children[3] = HAnimSite596;

HAnimJoint580.children = new MFNode();

HAnimJoint580.children[0] = HAnimSegment581;

HAnimJoint HAnimJoint603 = createNode("HAnimJoint");
HAnimJoint603.name = "vt8";
HAnimJoint603.DEF = "hanim_vt8";
HAnimJoint603.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint603.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint603.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment604 = createNode("HAnimSegment");
HAnimSegment604.name = "t8";
HAnimSegment604.DEF = "hanim_t8";
Transform Transform605 = createNode("Transform");
Transform605.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Transform Transform606 = createNode("Transform");
//Empty Transform
Shape Shape607 = createNode("Shape");
Shape607.USE = "HAnimJointShape";
Transform606.child = new undefined();

Transform606.child[0] = Shape607;

Transform605.children = new MFNode();

Transform605.children[0] = Transform606;

HAnimSegment604.children = new MFNode();

HAnimSegment604.children[0] = Transform605;

Shape Shape608 = createNode("Shape");
LineSet LineSet609 = createNode("LineSet");
LineSet609.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate610 = createNode("Coordinate");
Coordinate610.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet609.coord = Coordinate610;

//from vt8 to vt7 vertices 2
ColorRGBA ColorRGBA611 = createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
LineSet609.color = ColorRGBA611;

Shape608.geometry = LineSet609;

HAnimSegment604.children[1] = Shape608;

HAnimJoint603.children = new MFNode();

HAnimJoint603.children[0] = HAnimSegment604;

HAnimJoint HAnimJoint612 = createNode("HAnimJoint");
HAnimJoint612.name = "vt7";
HAnimJoint612.DEF = "hanim_vt7";
HAnimJoint612.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint612.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint612.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment613 = createNode("HAnimSegment");
HAnimSegment613.name = "t7";
HAnimSegment613.DEF = "hanim_t7";
Transform Transform614 = createNode("Transform");
Transform614.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Transform Transform615 = createNode("Transform");
//Empty Transform
Shape Shape616 = createNode("Shape");
Shape616.USE = "HAnimJointShape";
Transform615.child = new undefined();

Transform615.child[0] = Shape616;

Transform614.children = new MFNode();

Transform614.children[0] = Transform615;

HAnimSegment613.children = new MFNode();

HAnimSegment613.children[0] = Transform614;

Shape Shape617 = createNode("Shape");
LineSet LineSet618 = createNode("LineSet");
LineSet618.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate619 = createNode("Coordinate");
Coordinate619.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet618.coord = Coordinate619;

//from vt7 to vt6 vertices 2
ColorRGBA ColorRGBA620 = createNode("ColorRGBA");
ColorRGBA620.USE = "HAnimSegmentLineColorRGBA";
LineSet618.color = ColorRGBA620;

Shape617.geometry = LineSet618;

HAnimSegment613.children[1] = Shape617;

HAnimJoint612.children = new MFNode();

HAnimJoint612.children[0] = HAnimSegment613;

HAnimJoint HAnimJoint621 = createNode("HAnimJoint");
HAnimJoint621.name = "vt6";
HAnimJoint621.DEF = "hanim_vt6";
HAnimJoint621.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint621.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint621.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment622 = createNode("HAnimSegment");
HAnimSegment622.name = "t6";
HAnimSegment622.DEF = "hanim_t6";
Transform Transform623 = createNode("Transform");
Transform623.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform624 = createNode("Transform");
//Empty Transform
Shape Shape625 = createNode("Shape");
Shape625.USE = "HAnimJointShape";
Transform624.child = new undefined();

Transform624.child[0] = Shape625;

Transform623.children = new MFNode();

Transform623.children[0] = Transform624;

HAnimSegment622.children = new MFNode();

HAnimSegment622.children[0] = Transform623;

Shape Shape626 = createNode("Shape");
LineSet LineSet627 = createNode("LineSet");
LineSet627.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate628 = createNode("Coordinate");
Coordinate628.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet627.coord = Coordinate628;

//from vt6 to vt5 vertices 2
ColorRGBA ColorRGBA629 = createNode("ColorRGBA");
ColorRGBA629.USE = "HAnimSegmentLineColorRGBA";
LineSet627.color = ColorRGBA629;

Shape626.geometry = LineSet627;

HAnimSegment622.children[1] = Shape626;

HAnimSite HAnimSite630 = createNode("HAnimSite");
HAnimSite630.name = "l_chest_midsagittal_plane";
HAnimSite630.DEF = "hanim_l_chest_midsagittal_plane";
TouchSensor TouchSensor631 = createNode("TouchSensor");
TouchSensor631.description = "HAnimSite 94 l_chest_midsagittal_plane";
HAnimSite630.children = new MFNode();

HAnimSite630.children[0] = TouchSensor631;

Shape Shape632 = createNode("Shape");
Shape632.USE = "HAnimSiteShape";
HAnimSite630.children[1] = Shape632;

Billboard Billboard633 = createNode("Billboard");
Shape Shape634 = createNode("Shape");
Text Text635 = createNode("Text");
Text635.string = new MFString(new java.lang.String["94"]);
FontStyle FontStyle636 = createNode("FontStyle");
FontStyle636.size = 0.035;
Text635.fontStyle = FontStyle636;

Shape634.geometry = Text635;

Billboard633.children = new MFNode();

Billboard633.children[0] = Shape634;

HAnimSite630.children[2] = Billboard633;

HAnimSegment622.children[2] = HAnimSite630;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.name = "mesosternale";
HAnimSite637.DEF = "hanim_mesosternale";
TouchSensor TouchSensor638 = createNode("TouchSensor");
TouchSensor638.description = "HAnimSite 88 mesosternale";
HAnimSite637.children = new MFNode();

HAnimSite637.children[0] = TouchSensor638;

Shape Shape639 = createNode("Shape");
Shape639.USE = "HAnimSiteShape";
HAnimSite637.children[1] = Shape639;

Billboard Billboard640 = createNode("Billboard");
Shape Shape641 = createNode("Shape");
Text Text642 = createNode("Text");
Text642.string = new MFString(new java.lang.String["88"]);
FontStyle FontStyle643 = createNode("FontStyle");
FontStyle643.size = 0.035;
Text642.fontStyle = FontStyle643;

Shape641.geometry = Text642;

Billboard640.children = new MFNode();

Billboard640.children[0] = Shape641;

HAnimSite637.children[2] = Billboard640;

HAnimSegment622.children[3] = HAnimSite637;

HAnimSite HAnimSite644 = createNode("HAnimSite");
HAnimSite644.name = "r_chest_midsagittal_plane";
HAnimSite644.DEF = "hanim_r_chest_midsagittal_plane";
TouchSensor TouchSensor645 = createNode("TouchSensor");
TouchSensor645.description = "HAnimSite 95 r_chest_midsagittal_plane";
HAnimSite644.children = new MFNode();

HAnimSite644.children[0] = TouchSensor645;

Shape Shape646 = createNode("Shape");
Shape646.USE = "HAnimSiteShape";
HAnimSite644.children[1] = Shape646;

Billboard Billboard647 = createNode("Billboard");
Shape Shape648 = createNode("Shape");
Text Text649 = createNode("Text");
Text649.string = new MFString(new java.lang.String["95"]);
FontStyle FontStyle650 = createNode("FontStyle");
FontStyle650.size = 0.035;
Text649.fontStyle = FontStyle650;

Shape648.geometry = Text649;

Billboard647.children = new MFNode();

Billboard647.children[0] = Shape648;

HAnimSite644.children[2] = Billboard647;

HAnimSegment622.children[4] = HAnimSite644;

HAnimSite HAnimSite651 = createNode("HAnimSite");
HAnimSite651.name = "rear_center_midsagittal_plane";
HAnimSite651.DEF = "hanim_rear_center_midsagittal_plane";
TouchSensor TouchSensor652 = createNode("TouchSensor");
TouchSensor652.description = "HAnimSite 92 rear_center_midsagittal_plane";
HAnimSite651.children = new MFNode();

HAnimSite651.children[0] = TouchSensor652;

Shape Shape653 = createNode("Shape");
Shape653.USE = "HAnimSiteShape";
HAnimSite651.children[1] = Shape653;

Billboard Billboard654 = createNode("Billboard");
Shape Shape655 = createNode("Shape");
Text Text656 = createNode("Text");
Text656.string = new MFString(new java.lang.String["92"]);
FontStyle FontStyle657 = createNode("FontStyle");
FontStyle657.size = 0.035;
Text656.fontStyle = FontStyle657;

Shape655.geometry = Text656;

Billboard654.children = new MFNode();

Billboard654.children[0] = Shape655;

HAnimSite651.children[2] = Billboard654;

HAnimSegment622.children[5] = HAnimSite651;

HAnimJoint621.children = new MFNode();

HAnimJoint621.children[0] = HAnimSegment622;

HAnimJoint HAnimJoint658 = createNode("HAnimJoint");
HAnimJoint658.name = "vt5";
HAnimJoint658.DEF = "hanim_vt5";
HAnimJoint658.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint658.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment659 = createNode("HAnimSegment");
HAnimSegment659.name = "t5";
HAnimSegment659.DEF = "hanim_t5";
Transform Transform660 = createNode("Transform");
Transform660.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Transform Transform661 = createNode("Transform");
//Empty Transform
Shape Shape662 = createNode("Shape");
Shape662.USE = "HAnimJointShape";
Transform661.child = new undefined();

Transform661.child[0] = Shape662;

Transform660.children = new MFNode();

Transform660.children[0] = Transform661;

HAnimSegment659.children = new MFNode();

HAnimSegment659.children[0] = Transform660;

Shape Shape663 = createNode("Shape");
LineSet LineSet664 = createNode("LineSet");
LineSet664.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate665 = createNode("Coordinate");
Coordinate665.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet664.coord = Coordinate665;

//from vt5 to vt4 vertices 2
ColorRGBA ColorRGBA666 = createNode("ColorRGBA");
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA";
LineSet664.color = ColorRGBA666;

Shape663.geometry = LineSet664;

HAnimSegment659.children[1] = Shape663;

HAnimSite HAnimSite667 = createNode("HAnimSite");
HAnimSite667.name = "spine_1_middle_back";
HAnimSite667.DEF = "hanim_spine_1_middle_back";
TouchSensor TouchSensor668 = createNode("TouchSensor");
TouchSensor668.description = "HAnimSite 24 spine_1_middle_back";
HAnimSite667.children = new MFNode();

HAnimSite667.children[0] = TouchSensor668;

Shape Shape669 = createNode("Shape");
Shape669.USE = "HAnimSiteShape";
HAnimSite667.children[1] = Shape669;

Billboard Billboard670 = createNode("Billboard");
Shape Shape671 = createNode("Shape");
Text Text672 = createNode("Text");
Text672.string = new MFString(new java.lang.String["24"]);
FontStyle FontStyle673 = createNode("FontStyle");
FontStyle673.size = 0.035;
Text672.fontStyle = FontStyle673;

Shape671.geometry = Text672;

Billboard670.children = new MFNode();

Billboard670.children[0] = Shape671;

HAnimSite667.children[2] = Billboard670;

HAnimSegment659.children[2] = HAnimSite667;

HAnimJoint658.children = new MFNode();

HAnimJoint658.children[0] = HAnimSegment659;

HAnimJoint HAnimJoint674 = createNode("HAnimJoint");
HAnimJoint674.name = "vt4";
HAnimJoint674.DEF = "hanim_vt4";
HAnimJoint674.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint674.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint674.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment675 = createNode("HAnimSegment");
HAnimSegment675.name = "t4";
HAnimSegment675.DEF = "hanim_t4";
Transform Transform676 = createNode("Transform");
Transform676.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Transform Transform677 = createNode("Transform");
//Empty Transform
Shape Shape678 = createNode("Shape");
Shape678.USE = "HAnimJointShape";
Transform677.child = new undefined();

Transform677.child[0] = Shape678;

Transform676.children = new MFNode();

Transform676.children[0] = Transform677;

HAnimSegment675.children = new MFNode();

HAnimSegment675.children[0] = Transform676;

Shape Shape679 = createNode("Shape");
LineSet LineSet680 = createNode("LineSet");
LineSet680.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate681 = createNode("Coordinate");
Coordinate681.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet680.coord = Coordinate681;

//from vt4 to vt3 vertices 2
ColorRGBA ColorRGBA682 = createNode("ColorRGBA");
ColorRGBA682.USE = "HAnimSegmentLineColorRGBA";
LineSet680.color = ColorRGBA682;

Shape679.geometry = LineSet680;

HAnimSegment675.children[1] = Shape679;

HAnimJoint674.children = new MFNode();

HAnimJoint674.children[0] = HAnimSegment675;

HAnimJoint HAnimJoint683 = createNode("HAnimJoint");
HAnimJoint683.name = "vt3";
HAnimJoint683.DEF = "hanim_vt3";
HAnimJoint683.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint683.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint683.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment684 = createNode("HAnimSegment");
HAnimSegment684.name = "t3";
HAnimSegment684.DEF = "hanim_t3";
Transform Transform685 = createNode("Transform");
Transform685.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Transform Transform686 = createNode("Transform");
//Empty Transform
Shape Shape687 = createNode("Shape");
Shape687.USE = "HAnimJointShape";
Transform686.child = new undefined();

Transform686.child[0] = Shape687;

Transform685.children = new MFNode();

Transform685.children[0] = Transform686;

HAnimSegment684.children = new MFNode();

HAnimSegment684.children[0] = Transform685;

Shape Shape688 = createNode("Shape");
LineSet LineSet689 = createNode("LineSet");
LineSet689.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate690 = createNode("Coordinate");
Coordinate690.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet689.coord = Coordinate690;

//from vt3 to vt2 vertices 2
ColorRGBA ColorRGBA691 = createNode("ColorRGBA");
ColorRGBA691.USE = "HAnimSegmentLineColorRGBA";
LineSet689.color = ColorRGBA691;

Shape688.geometry = LineSet689;

HAnimSegment684.children[1] = Shape688;

HAnimJoint683.children = new MFNode();

HAnimJoint683.children[0] = HAnimSegment684;

HAnimJoint HAnimJoint692 = createNode("HAnimJoint");
HAnimJoint692.name = "vt2";
HAnimJoint692.DEF = "hanim_vt2";
HAnimJoint692.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint692.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint692.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment693 = createNode("HAnimSegment");
HAnimSegment693.name = "t2";
HAnimSegment693.DEF = "hanim_t2";
Transform Transform694 = createNode("Transform");
Transform694.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Transform Transform695 = createNode("Transform");
//Empty Transform
Shape Shape696 = createNode("Shape");
Shape696.USE = "HAnimJointShape";
Transform695.child = new undefined();

Transform695.child[0] = Shape696;

Transform694.children = new MFNode();

Transform694.children[0] = Transform695;

HAnimSegment693.children = new MFNode();

HAnimSegment693.children[0] = Transform694;

Shape Shape697 = createNode("Shape");
LineSet LineSet698 = createNode("LineSet");
LineSet698.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate699 = createNode("Coordinate");
Coordinate699.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet698.coord = Coordinate699;

//from vt2 to vt1 vertices 2
ColorRGBA ColorRGBA700 = createNode("ColorRGBA");
ColorRGBA700.USE = "HAnimSegmentLineColorRGBA";
LineSet698.color = ColorRGBA700;

Shape697.geometry = LineSet698;

HAnimSegment693.children[1] = Shape697;

HAnimJoint692.children = new MFNode();

HAnimJoint692.children[0] = HAnimSegment693;

HAnimJoint HAnimJoint701 = createNode("HAnimJoint");
HAnimJoint701.name = "vt1";
HAnimJoint701.DEF = "hanim_vt1";
HAnimJoint701.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint701.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint701.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment702 = createNode("HAnimSegment");
HAnimSegment702.name = "t1";
HAnimSegment702.DEF = "hanim_t1";
Transform Transform703 = createNode("Transform");
Transform703.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Transform Transform704 = createNode("Transform");
//Empty Transform
Shape Shape705 = createNode("Shape");
Shape705.USE = "HAnimJointShape";
Transform704.child = new undefined();

Transform704.child[0] = Shape705;

Transform703.children = new MFNode();

Transform703.children[0] = Transform704;

HAnimSegment702.children = new MFNode();

HAnimSegment702.children[0] = Transform703;

Shape Shape706 = createNode("Shape");
LineSet LineSet707 = createNode("LineSet");
LineSet707.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate708 = createNode("Coordinate");
Coordinate708.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet707.coord = Coordinate708;

//from vt1 to vc7 vertices 2
ColorRGBA ColorRGBA709 = createNode("ColorRGBA");
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA";
LineSet707.color = ColorRGBA709;

Shape706.geometry = LineSet707;

HAnimSegment702.children[1] = Shape706;

HAnimSite HAnimSite710 = createNode("HAnimSite");
HAnimSite710.name = "cervicale";
HAnimSite710.DEF = "hanim_cervicale";
HAnimSite710.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor711 = createNode("TouchSensor");
TouchSensor711.description = "HAnimSite 10 cervicale";
HAnimSite710.children = new MFNode();

HAnimSite710.children[0] = TouchSensor711;

Shape Shape712 = createNode("Shape");
Shape712.USE = "HAnimSiteShape";
HAnimSite710.children[1] = Shape712;

Billboard Billboard713 = createNode("Billboard");
Shape Shape714 = createNode("Shape");
Text Text715 = createNode("Text");
Text715.string = new MFString(new java.lang.String["10"]);
FontStyle FontStyle716 = createNode("FontStyle");
FontStyle716.size = 0.035;
Text715.fontStyle = FontStyle716;

Shape714.geometry = Text715;

Billboard713.children = new MFNode();

Billboard713.children[0] = Shape714;

HAnimSite710.children[2] = Billboard713;

HAnimSegment702.children[2] = HAnimSite710;

HAnimSite HAnimSite717 = createNode("HAnimSite");
HAnimSite717.name = "suprasternale";
HAnimSite717.DEF = "hanim_suprasternale";
HAnimSite717.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor718 = createNode("TouchSensor");
TouchSensor718.description = "HAnimSite 12 suprasternale";
HAnimSite717.children = new MFNode();

HAnimSite717.children[0] = TouchSensor718;

Shape Shape719 = createNode("Shape");
Shape719.USE = "HAnimSiteShape";
HAnimSite717.children[1] = Shape719;

Billboard Billboard720 = createNode("Billboard");
Shape Shape721 = createNode("Shape");
Text Text722 = createNode("Text");
Text722.string = new MFString(new java.lang.String["12"]);
FontStyle FontStyle723 = createNode("FontStyle");
FontStyle723.size = 0.035;
Text722.fontStyle = FontStyle723;

Shape721.geometry = Text722;

Billboard720.children = new MFNode();

Billboard720.children[0] = Shape721;

HAnimSite717.children[2] = Billboard720;

HAnimSegment702.children[3] = HAnimSite717;

Shape Shape724 = createNode("Shape");
LineSet LineSet725 = createNode("LineSet");
LineSet725.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate726 = createNode("Coordinate");
Coordinate726.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet725.coord = Coordinate726;

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA ColorRGBA727 = createNode("ColorRGBA");
ColorRGBA727.USE = "HAnimSegmentLineColorRGBA";
LineSet725.color = ColorRGBA727;

Shape724.geometry = LineSet725;

HAnimSegment702.children[4] = Shape724;

Shape Shape728 = createNode("Shape");
LineSet LineSet729 = createNode("LineSet");
LineSet729.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate730 = createNode("Coordinate");
Coordinate730.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet729.coord = Coordinate730;

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA ColorRGBA731 = createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
LineSet729.color = ColorRGBA731;

Shape728.geometry = LineSet729;

HAnimSegment702.children[5] = Shape728;

HAnimJoint701.children = new MFNode();

HAnimJoint701.children[0] = HAnimSegment702;

HAnimJoint HAnimJoint732 = createNode("HAnimJoint");
HAnimJoint732.name = "vc7";
HAnimJoint732.DEF = "hanim_vc7";
HAnimJoint732.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint732.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint732.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment733 = createNode("HAnimSegment");
HAnimSegment733.name = "c7";
HAnimSegment733.DEF = "hanim_c7";
Transform Transform734 = createNode("Transform");
Transform734.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
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
Coordinate739.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet738.coord = Coordinate739;

//from vc7 to vc6 vertices 2
ColorRGBA ColorRGBA740 = createNode("ColorRGBA");
ColorRGBA740.USE = "HAnimSegmentLineColorRGBA";
LineSet738.color = ColorRGBA740;

Shape737.geometry = LineSet738;

HAnimSegment733.children[1] = Shape737;

HAnimSite HAnimSite741 = createNode("HAnimSite");
HAnimSite741.name = "l_neck_base";
HAnimSite741.DEF = "hanim_l_neck_base";
HAnimSite741.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor742 = createNode("TouchSensor");
TouchSensor742.description = "HAnimSite 82 l_neck_base";
HAnimSite741.children = new MFNode();

HAnimSite741.children[0] = TouchSensor742;

Shape Shape743 = createNode("Shape");
Shape743.USE = "HAnimSiteShape";
HAnimSite741.children[1] = Shape743;

Billboard Billboard744 = createNode("Billboard");
Shape Shape745 = createNode("Shape");
Text Text746 = createNode("Text");
Text746.string = new MFString(new java.lang.String["82"]);
FontStyle FontStyle747 = createNode("FontStyle");
FontStyle747.size = 0.035;
Text746.fontStyle = FontStyle747;

Shape745.geometry = Text746;

Billboard744.children = new MFNode();

Billboard744.children[0] = Shape745;

HAnimSite741.children[2] = Billboard744;

HAnimSegment733.children[2] = HAnimSite741;

HAnimSite HAnimSite748 = createNode("HAnimSite");
HAnimSite748.name = "r_neck_base";
HAnimSite748.DEF = "hanim_r_neck_base";
HAnimSite748.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor749 = createNode("TouchSensor");
TouchSensor749.description = "HAnimSite 83 r_neck_base";
HAnimSite748.children = new MFNode();

HAnimSite748.children[0] = TouchSensor749;

Shape Shape750 = createNode("Shape");
Shape750.USE = "HAnimSiteShape";
HAnimSite748.children[1] = Shape750;

Billboard Billboard751 = createNode("Billboard");
Shape Shape752 = createNode("Shape");
Text Text753 = createNode("Text");
Text753.string = new MFString(new java.lang.String["83"]);
FontStyle FontStyle754 = createNode("FontStyle");
FontStyle754.size = 0.035;
Text753.fontStyle = FontStyle754;

Shape752.geometry = Text753;

Billboard751.children = new MFNode();

Billboard751.children[0] = Shape752;

HAnimSite748.children[2] = Billboard751;

HAnimSegment733.children[3] = HAnimSite748;

HAnimJoint732.children = new MFNode();

HAnimJoint732.children[0] = HAnimSegment733;

HAnimJoint HAnimJoint755 = createNode("HAnimJoint");
HAnimJoint755.name = "vc6";
HAnimJoint755.DEF = "hanim_vc6";
HAnimJoint755.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint755.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint755.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment756 = createNode("HAnimSegment");
HAnimSegment756.name = "c6";
HAnimSegment756.DEF = "hanim_c6";
Transform Transform757 = createNode("Transform");
Transform757.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Transform Transform758 = createNode("Transform");
//Empty Transform
Shape Shape759 = createNode("Shape");
Shape759.USE = "HAnimJointShape";
Transform758.child = new undefined();

Transform758.child[0] = Shape759;

Transform757.children = new MFNode();

Transform757.children[0] = Transform758;

HAnimSegment756.children = new MFNode();

HAnimSegment756.children[0] = Transform757;

Shape Shape760 = createNode("Shape");
LineSet LineSet761 = createNode("LineSet");
LineSet761.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate762 = createNode("Coordinate");
Coordinate762.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet761.coord = Coordinate762;

//from vc6 to vc5 vertices 2
ColorRGBA ColorRGBA763 = createNode("ColorRGBA");
ColorRGBA763.USE = "HAnimSegmentLineColorRGBA";
LineSet761.color = ColorRGBA763;

Shape760.geometry = LineSet761;

HAnimSegment756.children[1] = Shape760;

HAnimJoint755.children = new MFNode();

HAnimJoint755.children[0] = HAnimSegment756;

HAnimJoint HAnimJoint764 = createNode("HAnimJoint");
HAnimJoint764.name = "vc5";
HAnimJoint764.DEF = "hanim_vc5";
HAnimJoint764.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint764.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint764.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment765 = createNode("HAnimSegment");
HAnimSegment765.name = "c5";
HAnimSegment765.DEF = "hanim_c5";
Transform Transform766 = createNode("Transform");
Transform766.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Transform Transform767 = createNode("Transform");
//Empty Transform
Shape Shape768 = createNode("Shape");
Shape768.USE = "HAnimJointShape";
Transform767.child = new undefined();

Transform767.child[0] = Shape768;

Transform766.children = new MFNode();

Transform766.children[0] = Transform767;

HAnimSegment765.children = new MFNode();

HAnimSegment765.children[0] = Transform766;

Shape Shape769 = createNode("Shape");
LineSet LineSet770 = createNode("LineSet");
LineSet770.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate771 = createNode("Coordinate");
Coordinate771.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet770.coord = Coordinate771;

//from vc5 to vc4 vertices 2
ColorRGBA ColorRGBA772 = createNode("ColorRGBA");
ColorRGBA772.USE = "HAnimSegmentLineColorRGBA";
LineSet770.color = ColorRGBA772;

Shape769.geometry = LineSet770;

HAnimSegment765.children[1] = Shape769;

HAnimJoint764.children = new MFNode();

HAnimJoint764.children[0] = HAnimSegment765;

HAnimJoint HAnimJoint773 = createNode("HAnimJoint");
HAnimJoint773.name = "vc4";
HAnimJoint773.DEF = "hanim_vc4";
HAnimJoint773.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint773.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint773.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment774 = createNode("HAnimSegment");
HAnimSegment774.name = "c4";
HAnimSegment774.DEF = "hanim_c4";
Transform Transform775 = createNode("Transform");
Transform775.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Transform Transform776 = createNode("Transform");
//Empty Transform
Shape Shape777 = createNode("Shape");
Shape777.USE = "HAnimJointShape";
Transform776.child = new undefined();

Transform776.child[0] = Shape777;

Transform775.children = new MFNode();

Transform775.children[0] = Transform776;

HAnimSegment774.children = new MFNode();

HAnimSegment774.children[0] = Transform775;

Shape Shape778 = createNode("Shape");
LineSet LineSet779 = createNode("LineSet");
LineSet779.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate780 = createNode("Coordinate");
Coordinate780.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet779.coord = Coordinate780;

//from vc4 to vc3 vertices 2
ColorRGBA ColorRGBA781 = createNode("ColorRGBA");
ColorRGBA781.USE = "HAnimSegmentLineColorRGBA";
LineSet779.color = ColorRGBA781;

Shape778.geometry = LineSet779;

HAnimSegment774.children[1] = Shape778;

HAnimJoint773.children = new MFNode();

HAnimJoint773.children[0] = HAnimSegment774;

HAnimJoint HAnimJoint782 = createNode("HAnimJoint");
HAnimJoint782.name = "vc3";
HAnimJoint782.DEF = "hanim_vc3";
HAnimJoint782.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint782.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint782.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment783 = createNode("HAnimSegment");
HAnimSegment783.name = "c3";
HAnimSegment783.DEF = "hanim_c3";
Transform Transform784 = createNode("Transform");
Transform784.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Transform Transform785 = createNode("Transform");
//Empty Transform
Shape Shape786 = createNode("Shape");
Shape786.USE = "HAnimJointShape";
Transform785.child = new undefined();

Transform785.child[0] = Shape786;

Transform784.children = new MFNode();

Transform784.children[0] = Transform785;

HAnimSegment783.children = new MFNode();

HAnimSegment783.children[0] = Transform784;

Shape Shape787 = createNode("Shape");
LineSet LineSet788 = createNode("LineSet");
LineSet788.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate789 = createNode("Coordinate");
Coordinate789.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet788.coord = Coordinate789;

//from vc3 to vc2 vertices 2
ColorRGBA ColorRGBA790 = createNode("ColorRGBA");
ColorRGBA790.USE = "HAnimSegmentLineColorRGBA";
LineSet788.color = ColorRGBA790;

Shape787.geometry = LineSet788;

HAnimSegment783.children[1] = Shape787;

HAnimJoint782.children = new MFNode();

HAnimJoint782.children[0] = HAnimSegment783;

HAnimJoint HAnimJoint791 = createNode("HAnimJoint");
HAnimJoint791.name = "vc2";
HAnimJoint791.DEF = "hanim_vc2";
HAnimJoint791.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint791.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint791.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment792 = createNode("HAnimSegment");
HAnimSegment792.name = "c2";
HAnimSegment792.DEF = "hanim_c2";
Transform Transform793 = createNode("Transform");
Transform793.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Transform Transform794 = createNode("Transform");
//Empty Transform
Shape Shape795 = createNode("Shape");
Shape795.USE = "HAnimJointShape";
Transform794.child = new undefined();

Transform794.child[0] = Shape795;

Transform793.children = new MFNode();

Transform793.children[0] = Transform794;

HAnimSegment792.children = new MFNode();

HAnimSegment792.children[0] = Transform793;

Shape Shape796 = createNode("Shape");
LineSet LineSet797 = createNode("LineSet");
LineSet797.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate798 = createNode("Coordinate");
Coordinate798.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet797.coord = Coordinate798;

//from vc2 to vc1 vertices 2
ColorRGBA ColorRGBA799 = createNode("ColorRGBA");
ColorRGBA799.USE = "HAnimSegmentLineColorRGBA";
LineSet797.color = ColorRGBA799;

Shape796.geometry = LineSet797;

HAnimSegment792.children[1] = Shape796;

HAnimSite HAnimSite800 = createNode("HAnimSite");
HAnimSite800.name = "adams_apple";
HAnimSite800.DEF = "hanim_adams_apple";
TouchSensor TouchSensor801 = createNode("TouchSensor");
TouchSensor801.description = "HAnimSite 11 adams_apple";
HAnimSite800.children = new MFNode();

HAnimSite800.children[0] = TouchSensor801;

Shape Shape802 = createNode("Shape");
Shape802.USE = "HAnimSiteShape";
HAnimSite800.children[1] = Shape802;

Billboard Billboard803 = createNode("Billboard");
Shape Shape804 = createNode("Shape");
Text Text805 = createNode("Text");
Text805.string = new MFString(new java.lang.String["11"]);
FontStyle FontStyle806 = createNode("FontStyle");
FontStyle806.size = 0.035;
Text805.fontStyle = FontStyle806;

Shape804.geometry = Text805;

Billboard803.children = new MFNode();

Billboard803.children[0] = Shape804;

HAnimSite800.children[2] = Billboard803;

HAnimSegment792.children[2] = HAnimSite800;

HAnimJoint791.children = new MFNode();

HAnimJoint791.children[0] = HAnimSegment792;

HAnimJoint HAnimJoint807 = createNode("HAnimJoint");
HAnimJoint807.name = "vc1";
HAnimJoint807.DEF = "hanim_vc1";
HAnimJoint807.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint807.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint807.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment808 = createNode("HAnimSegment");
HAnimSegment808.name = "c1";
HAnimSegment808.DEF = "hanim_c1";
Transform Transform809 = createNode("Transform");
Transform809.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Transform Transform810 = createNode("Transform");
//Empty Transform
Shape Shape811 = createNode("Shape");
Shape811.USE = "HAnimJointShape";
Transform810.child = new undefined();

Transform810.child[0] = Shape811;

Transform809.children = new MFNode();

Transform809.children[0] = Transform810;

HAnimSegment808.children = new MFNode();

HAnimSegment808.children[0] = Transform809;

Shape Shape812 = createNode("Shape");
LineSet LineSet813 = createNode("LineSet");
LineSet813.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate814 = createNode("Coordinate");
Coordinate814.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet813.coord = Coordinate814;

//from vc1 to skullbase vertices 2
ColorRGBA ColorRGBA815 = createNode("ColorRGBA");
ColorRGBA815.USE = "HAnimSegmentLineColorRGBA";
LineSet813.color = ColorRGBA815;

Shape812.geometry = LineSet813;

HAnimSegment808.children[1] = Shape812;

HAnimJoint807.children = new MFNode();

HAnimJoint807.children[0] = HAnimSegment808;

HAnimJoint HAnimJoint816 = createNode("HAnimJoint");
HAnimJoint816.name = "skullbase";
HAnimJoint816.DEF = "hanim_skullbase";
HAnimJoint816.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint816.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint816.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment817 = createNode("HAnimSegment");
HAnimSegment817.name = "skull";
HAnimSegment817.DEF = "hanim_skull";
Transform Transform818 = createNode("Transform");
Transform818.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Transform Transform819 = createNode("Transform");
//Empty Transform
Shape Shape820 = createNode("Shape");
Shape820.USE = "HAnimJointShape";
Transform819.child = new undefined();

Transform819.child[0] = Shape820;

Transform818.children = new MFNode();

Transform818.children[0] = Transform819;

HAnimSegment817.children = new MFNode();

HAnimSegment817.children[0] = Transform818;

Shape Shape821 = createNode("Shape");
LineSet LineSet822 = createNode("LineSet");
LineSet822.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate823 = createNode("Coordinate");
Coordinate823.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
LineSet822.coord = Coordinate823;

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA ColorRGBA824 = createNode("ColorRGBA");
ColorRGBA824.USE = "HAnimSegmentLineColorRGBA";
LineSet822.color = ColorRGBA824;

Shape821.geometry = LineSet822;

HAnimSegment817.children[1] = Shape821;

HAnimSite HAnimSite825 = createNode("HAnimSite");
HAnimSite825.name = "glabella";
HAnimSite825.DEF = "hanim_glabella";
TouchSensor TouchSensor826 = createNode("TouchSensor");
TouchSensor826.description = "HAnimSite 1 glabella";
HAnimSite825.children = new MFNode();

HAnimSite825.children[0] = TouchSensor826;

Shape Shape827 = createNode("Shape");
Shape827.USE = "HAnimSiteShape";
HAnimSite825.children[1] = Shape827;

Billboard Billboard828 = createNode("Billboard");
Shape Shape829 = createNode("Shape");
Text Text830 = createNode("Text");
Text830.string = new MFString(new java.lang.String["1"]);
FontStyle FontStyle831 = createNode("FontStyle");
FontStyle831.size = 0.035;
Text830.fontStyle = FontStyle831;

Shape829.geometry = Text830;

Billboard828.children = new MFNode();

Billboard828.children[0] = Shape829;

HAnimSite825.children[2] = Billboard828;

HAnimSegment817.children[2] = HAnimSite825;

HAnimSite HAnimSite832 = createNode("HAnimSite");
HAnimSite832.name = "l_ectocanthus";
HAnimSite832.DEF = "hanim_l_ectocanthus";
TouchSensor TouchSensor833 = createNode("TouchSensor");
TouchSensor833.description = "HAnimSite 85 l_ectocanthus";
HAnimSite832.children = new MFNode();

HAnimSite832.children[0] = TouchSensor833;

Shape Shape834 = createNode("Shape");
Shape834.USE = "HAnimSiteShape";
HAnimSite832.children[1] = Shape834;

Billboard Billboard835 = createNode("Billboard");
Shape Shape836 = createNode("Shape");
Text Text837 = createNode("Text");
Text837.string = new MFString(new java.lang.String["85"]);
FontStyle FontStyle838 = createNode("FontStyle");
FontStyle838.size = 0.035;
Text837.fontStyle = FontStyle838;

Shape836.geometry = Text837;

Billboard835.children = new MFNode();

Billboard835.children[0] = Shape836;

HAnimSite832.children[2] = Billboard835;

HAnimSegment817.children[3] = HAnimSite832;

HAnimSite HAnimSite839 = createNode("HAnimSite");
HAnimSite839.name = "l_infraorbitale";
HAnimSite839.DEF = "hanim_l_infraorbitale";
HAnimSite839.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor840 = createNode("TouchSensor");
TouchSensor840.description = "HAnimSite 3 l_infraorbitale";
HAnimSite839.children = new MFNode();

HAnimSite839.children[0] = TouchSensor840;

Shape Shape841 = createNode("Shape");
Shape841.USE = "HAnimSiteShape";
HAnimSite839.children[1] = Shape841;

Billboard Billboard842 = createNode("Billboard");
Shape Shape843 = createNode("Shape");
Text Text844 = createNode("Text");
Text844.string = new MFString(new java.lang.String["3"]);
FontStyle FontStyle845 = createNode("FontStyle");
FontStyle845.size = 0.035;
Text844.fontStyle = FontStyle845;

Shape843.geometry = Text844;

Billboard842.children = new MFNode();

Billboard842.children[0] = Shape843;

HAnimSite839.children[2] = Billboard842;

HAnimSegment817.children[4] = HAnimSite839;

HAnimSite HAnimSite846 = createNode("HAnimSite");
HAnimSite846.name = "l_tragion";
HAnimSite846.DEF = "hanim_l_tragion";
HAnimSite846.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor847 = createNode("TouchSensor");
TouchSensor847.description = "HAnimSite 4 l_tragion";
HAnimSite846.children = new MFNode();

HAnimSite846.children[0] = TouchSensor847;

Shape Shape848 = createNode("Shape");
Shape848.USE = "HAnimSiteShape";
HAnimSite846.children[1] = Shape848;

Billboard Billboard849 = createNode("Billboard");
Shape Shape850 = createNode("Shape");
Text Text851 = createNode("Text");
Text851.string = new MFString(new java.lang.String["4"]);
FontStyle FontStyle852 = createNode("FontStyle");
FontStyle852.size = 0.035;
Text851.fontStyle = FontStyle852;

Shape850.geometry = Text851;

Billboard849.children = new MFNode();

Billboard849.children[0] = Shape850;

HAnimSite846.children[2] = Billboard849;

HAnimSegment817.children[5] = HAnimSite846;

HAnimSite HAnimSite853 = createNode("HAnimSite");
HAnimSite853.name = "nuchale";
HAnimSite853.DEF = "hanim_nuchale";
HAnimSite853.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor854 = createNode("TouchSensor");
TouchSensor854.description = "HAnimSite 81 nuchale";
HAnimSite853.children = new MFNode();

HAnimSite853.children[0] = TouchSensor854;

Shape Shape855 = createNode("Shape");
Shape855.USE = "HAnimSiteShape";
HAnimSite853.children[1] = Shape855;

Billboard Billboard856 = createNode("Billboard");
Shape Shape857 = createNode("Shape");
Text Text858 = createNode("Text");
Text858.string = new MFString(new java.lang.String["81"]);
FontStyle FontStyle859 = createNode("FontStyle");
FontStyle859.size = 0.035;
Text858.fontStyle = FontStyle859;

Shape857.geometry = Text858;

Billboard856.children = new MFNode();

Billboard856.children[0] = Shape857;

HAnimSite853.children[2] = Billboard856;

HAnimSegment817.children[6] = HAnimSite853;

HAnimSite HAnimSite860 = createNode("HAnimSite");
HAnimSite860.name = "opisthocranion";
HAnimSite860.DEF = "hanim_opisthocranion";
TouchSensor TouchSensor861 = createNode("TouchSensor");
TouchSensor861.description = "HAnimSite 89 opisthocranion";
HAnimSite860.children = new MFNode();

HAnimSite860.children[0] = TouchSensor861;

Shape Shape862 = createNode("Shape");
Shape862.USE = "HAnimSiteShape";
HAnimSite860.children[1] = Shape862;

Billboard Billboard863 = createNode("Billboard");
Shape Shape864 = createNode("Shape");
Text Text865 = createNode("Text");
Text865.string = new MFString(new java.lang.String["89"]);
FontStyle FontStyle866 = createNode("FontStyle");
FontStyle866.size = 0.035;
Text865.fontStyle = FontStyle866;

Shape864.geometry = Text865;

Billboard863.children = new MFNode();

Billboard863.children[0] = Shape864;

HAnimSite860.children[2] = Billboard863;

HAnimSegment817.children[7] = HAnimSite860;

HAnimSite HAnimSite867 = createNode("HAnimSite");
HAnimSite867.name = "r_ectocanthus";
HAnimSite867.DEF = "hanim_r_ectocanthus";
TouchSensor TouchSensor868 = createNode("TouchSensor");
TouchSensor868.description = "HAnimSite 86 r_ectocanthus";
HAnimSite867.children = new MFNode();

HAnimSite867.children[0] = TouchSensor868;

Shape Shape869 = createNode("Shape");
Shape869.USE = "HAnimSiteShape";
HAnimSite867.children[1] = Shape869;

Billboard Billboard870 = createNode("Billboard");
Shape Shape871 = createNode("Shape");
Text Text872 = createNode("Text");
Text872.string = new MFString(new java.lang.String["86"]);
FontStyle FontStyle873 = createNode("FontStyle");
FontStyle873.size = 0.035;
Text872.fontStyle = FontStyle873;

Shape871.geometry = Text872;

Billboard870.children = new MFNode();

Billboard870.children[0] = Shape871;

HAnimSite867.children[2] = Billboard870;

HAnimSegment817.children[8] = HAnimSite867;

HAnimSite HAnimSite874 = createNode("HAnimSite");
HAnimSite874.name = "r_infraorbitale";
HAnimSite874.DEF = "hanim_r_infraorbitale";
HAnimSite874.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor875 = createNode("TouchSensor");
TouchSensor875.description = "HAnimSite 6 r_infraorbitale";
HAnimSite874.children = new MFNode();

HAnimSite874.children[0] = TouchSensor875;

Shape Shape876 = createNode("Shape");
Shape876.USE = "HAnimSiteShape";
HAnimSite874.children[1] = Shape876;

Billboard Billboard877 = createNode("Billboard");
Shape Shape878 = createNode("Shape");
Text Text879 = createNode("Text");
Text879.string = new MFString(new java.lang.String["6"]);
FontStyle FontStyle880 = createNode("FontStyle");
FontStyle880.size = 0.035;
Text879.fontStyle = FontStyle880;

Shape878.geometry = Text879;

Billboard877.children = new MFNode();

Billboard877.children[0] = Shape878;

HAnimSite874.children[2] = Billboard877;

HAnimSegment817.children[9] = HAnimSite874;

HAnimSite HAnimSite881 = createNode("HAnimSite");
HAnimSite881.name = "r_tragion";
HAnimSite881.DEF = "hanim_r_tragion";
HAnimSite881.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor882 = createNode("TouchSensor");
TouchSensor882.description = "HAnimSite 7 r_tragion";
HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = TouchSensor882;

Shape Shape883 = createNode("Shape");
Shape883.USE = "HAnimSiteShape";
HAnimSite881.children[1] = Shape883;

Billboard Billboard884 = createNode("Billboard");
Shape Shape885 = createNode("Shape");
Text Text886 = createNode("Text");
Text886.string = new MFString(new java.lang.String["7"]);
FontStyle FontStyle887 = createNode("FontStyle");
FontStyle887.size = 0.035;
Text886.fontStyle = FontStyle887;

Shape885.geometry = Text886;

Billboard884.children = new MFNode();

Billboard884.children[0] = Shape885;

HAnimSite881.children[2] = Billboard884;

HAnimSegment817.children[10] = HAnimSite881;

HAnimSite HAnimSite888 = createNode("HAnimSite");
HAnimSite888.name = "sellion";
HAnimSite888.DEF = "hanim_sellion";
HAnimSite888.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor889 = createNode("TouchSensor");
TouchSensor889.description = "HAnimSite 2 sellion";
HAnimSite888.children = new MFNode();

HAnimSite888.children[0] = TouchSensor889;

Shape Shape890 = createNode("Shape");
Shape890.USE = "HAnimSiteShape";
HAnimSite888.children[1] = Shape890;

Billboard Billboard891 = createNode("Billboard");
Shape Shape892 = createNode("Shape");
Text Text893 = createNode("Text");
Text893.string = new MFString(new java.lang.String["2"]);
FontStyle FontStyle894 = createNode("FontStyle");
FontStyle894.size = 0.035;
Text893.fontStyle = FontStyle894;

Shape892.geometry = Text893;

Billboard891.children = new MFNode();

Billboard891.children[0] = Shape892;

HAnimSite888.children[2] = Billboard891;

HAnimSegment817.children[11] = HAnimSite888;

HAnimSite HAnimSite895 = createNode("HAnimSite");
HAnimSite895.name = "skull_vertex";
HAnimSite895.DEF = "hanim_skull_vertex";
HAnimSite895.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor896 = createNode("TouchSensor");
TouchSensor896.description = "HAnimSite 0 skull_vertex";
HAnimSite895.children = new MFNode();

HAnimSite895.children[0] = TouchSensor896;

Shape Shape897 = createNode("Shape");
Shape897.USE = "HAnimSiteShape";
HAnimSite895.children[1] = Shape897;

Billboard Billboard898 = createNode("Billboard");
Shape Shape899 = createNode("Shape");
Text Text900 = createNode("Text");
Text900.string = new MFString(new java.lang.String["0"]);
FontStyle FontStyle901 = createNode("FontStyle");
FontStyle901.size = 0.035;
Text900.fontStyle = FontStyle901;

Shape899.geometry = Text900;

Billboard898.children = new MFNode();

Billboard898.children[0] = Shape899;

HAnimSite895.children[2] = Billboard898;

HAnimSegment817.children[12] = HAnimSite895;

Shape Shape902 = createNode("Shape");
LineSet LineSet903 = createNode("LineSet");
LineSet903.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate904 = createNode("Coordinate");
Coordinate904.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
LineSet903.coord = Coordinate904;

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA ColorRGBA905 = createNode("ColorRGBA");
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA";
LineSet903.color = ColorRGBA905;

Shape902.geometry = LineSet903;

HAnimSegment817.children[13] = Shape902;

Shape Shape906 = createNode("Shape");
LineSet LineSet907 = createNode("LineSet");
LineSet907.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate908 = createNode("Coordinate");
Coordinate908.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
LineSet907.coord = Coordinate908;

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA ColorRGBA909 = createNode("ColorRGBA");
ColorRGBA909.USE = "HAnimSegmentLineColorRGBA";
LineSet907.color = ColorRGBA909;

Shape906.geometry = LineSet907;

HAnimSegment817.children[14] = Shape906;

Shape Shape910 = createNode("Shape");
LineSet LineSet911 = createNode("LineSet");
LineSet911.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate912 = createNode("Coordinate");
Coordinate912.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
LineSet911.coord = Coordinate912;

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA ColorRGBA913 = createNode("ColorRGBA");
ColorRGBA913.USE = "HAnimSegmentLineColorRGBA";
LineSet911.color = ColorRGBA913;

Shape910.geometry = LineSet911;

HAnimSegment817.children[15] = Shape910;

Shape Shape914 = createNode("Shape");
LineSet LineSet915 = createNode("LineSet");
LineSet915.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate916 = createNode("Coordinate");
Coordinate916.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
LineSet915.coord = Coordinate916;

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA ColorRGBA917 = createNode("ColorRGBA");
ColorRGBA917.USE = "HAnimSegmentLineColorRGBA";
LineSet915.color = ColorRGBA917;

Shape914.geometry = LineSet915;

HAnimSegment817.children[16] = Shape914;

Shape Shape918 = createNode("Shape");
LineSet LineSet919 = createNode("LineSet");
LineSet919.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate920 = createNode("Coordinate");
Coordinate920.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
LineSet919.coord = Coordinate920;

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA ColorRGBA921 = createNode("ColorRGBA");
ColorRGBA921.USE = "HAnimSegmentLineColorRGBA";
LineSet919.color = ColorRGBA921;

Shape918.geometry = LineSet919;

HAnimSegment817.children[17] = Shape918;

Shape Shape922 = createNode("Shape");
LineSet LineSet923 = createNode("LineSet");
LineSet923.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate924 = createNode("Coordinate");
Coordinate924.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
LineSet923.coord = Coordinate924;

//from skullbase to temporomandibular vertices 2
ColorRGBA ColorRGBA925 = createNode("ColorRGBA");
ColorRGBA925.USE = "HAnimSegmentLineColorRGBA";
LineSet923.color = ColorRGBA925;

Shape922.geometry = LineSet923;

HAnimSegment817.children[18] = Shape922;

HAnimJoint816.children = new MFNode();

HAnimJoint816.children[0] = HAnimSegment817;

HAnimJoint HAnimJoint926 = createNode("HAnimJoint");
HAnimJoint926.name = "l_eyelid_joint";
HAnimJoint926.DEF = "hanim_l_eyelid_joint";
HAnimJoint926.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint926.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint926.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint816.children[1] = HAnimJoint926;

HAnimJoint HAnimJoint927 = createNode("HAnimJoint");
HAnimJoint927.name = "r_eyelid_joint";
HAnimJoint927.DEF = "hanim_r_eyelid_joint";
HAnimJoint927.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint927.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint927.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint816.children[2] = HAnimJoint927;

HAnimJoint HAnimJoint928 = createNode("HAnimJoint");
HAnimJoint928.name = "l_eyeball_joint";
HAnimJoint928.DEF = "hanim_l_eyeball_joint";
HAnimJoint928.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint928.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint928.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint816.children[3] = HAnimJoint928;

HAnimJoint HAnimJoint929 = createNode("HAnimJoint");
HAnimJoint929.name = "r_eyeball_joint";
HAnimJoint929.DEF = "hanim_r_eyeball_joint";
HAnimJoint929.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint929.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint929.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint816.children[4] = HAnimJoint929;

HAnimJoint HAnimJoint930 = createNode("HAnimJoint");
HAnimJoint930.name = "l_eyebrow_joint";
HAnimJoint930.DEF = "hanim_l_eyebrow_joint";
HAnimJoint930.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint930.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint930.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint816.children[5] = HAnimJoint930;

HAnimJoint HAnimJoint931 = createNode("HAnimJoint");
HAnimJoint931.name = "r_eyebrow_joint";
HAnimJoint931.DEF = "hanim_r_eyebrow_joint";
HAnimJoint931.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint931.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint931.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint816.children[6] = HAnimJoint931;

HAnimJoint HAnimJoint932 = createNode("HAnimJoint");
HAnimJoint932.name = "temporomandibular";
HAnimJoint932.DEF = "hanim_temporomandibular";
HAnimJoint932.center = new SFVec3f(new float[-0.0002,1.3043,-0.0865]);
HAnimJoint932.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint932.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint816.children[7] = HAnimJoint932;

HAnimJoint807.children[1] = HAnimJoint816;

HAnimJoint791.children[1] = HAnimJoint807;

HAnimJoint782.children[1] = HAnimJoint791;

HAnimJoint773.children[1] = HAnimJoint782;

HAnimJoint764.children[1] = HAnimJoint773;

HAnimJoint755.children[1] = HAnimJoint764;

HAnimJoint732.children[1] = HAnimJoint755;

HAnimJoint701.children[1] = HAnimJoint732;

HAnimJoint HAnimJoint933 = createNode("HAnimJoint");
HAnimJoint933.name = "l_sternoclavicular";
HAnimJoint933.DEF = "hanim_l_sternoclavicular";
HAnimJoint933.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint933.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint933.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment934 = createNode("HAnimSegment");
HAnimSegment934.name = "l_clavicle";
HAnimSegment934.DEF = "hanim_l_clavicle";
Transform Transform935 = createNode("Transform");
Transform935.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Transform Transform936 = createNode("Transform");
//Empty Transform
Shape Shape937 = createNode("Shape");
Shape937.USE = "HAnimJointShape";
Transform936.child = new undefined();

Transform936.child[0] = Shape937;

Transform935.children = new MFNode();

Transform935.children[0] = Transform936;

HAnimSegment934.children = new MFNode();

HAnimSegment934.children[0] = Transform935;

Shape Shape938 = createNode("Shape");
LineSet LineSet939 = createNode("LineSet");
LineSet939.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate940 = createNode("Coordinate");
Coordinate940.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet939.coord = Coordinate940;

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA ColorRGBA941 = createNode("ColorRGBA");
ColorRGBA941.USE = "HAnimSegmentLineColorRGBA";
LineSet939.color = ColorRGBA941;

Shape938.geometry = LineSet939;

HAnimSegment934.children[1] = Shape938;

HAnimSite HAnimSite942 = createNode("HAnimSite");
HAnimSite942.name = "l_acromion";
HAnimSite942.DEF = "hanim_l_acromion";
HAnimSite942.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor943 = createNode("TouchSensor");
TouchSensor943.description = "HAnimSite 15 l_acromion";
HAnimSite942.children = new MFNode();

HAnimSite942.children[0] = TouchSensor943;

Shape Shape944 = createNode("Shape");
Shape944.USE = "HAnimSiteShape";
HAnimSite942.children[1] = Shape944;

Billboard Billboard945 = createNode("Billboard");
Shape Shape946 = createNode("Shape");
Text Text947 = createNode("Text");
Text947.string = new MFString(new java.lang.String["15"]);
FontStyle FontStyle948 = createNode("FontStyle");
FontStyle948.size = 0.035;
Text947.fontStyle = FontStyle948;

Shape946.geometry = Text947;

Billboard945.children = new MFNode();

Billboard945.children[0] = Shape946;

HAnimSite942.children[2] = Billboard945;

HAnimSegment934.children[2] = HAnimSite942;

HAnimSite HAnimSite949 = createNode("HAnimSite");
HAnimSite949.name = "l_axilla_distal";
HAnimSite949.DEF = "hanim_l_axilla_distal";
HAnimSite949.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor950 = createNode("TouchSensor");
TouchSensor950.description = "HAnimSite 17 l_axilla_distal";
HAnimSite949.children = new MFNode();

HAnimSite949.children[0] = TouchSensor950;

Shape Shape951 = createNode("Shape");
Shape951.USE = "HAnimSiteShape";
HAnimSite949.children[1] = Shape951;

Billboard Billboard952 = createNode("Billboard");
Shape Shape953 = createNode("Shape");
Text Text954 = createNode("Text");
Text954.string = new MFString(new java.lang.String["17"]);
FontStyle FontStyle955 = createNode("FontStyle");
FontStyle955.size = 0.035;
Text954.fontStyle = FontStyle955;

Shape953.geometry = Text954;

Billboard952.children = new MFNode();

Billboard952.children[0] = Shape953;

HAnimSite949.children[2] = Billboard952;

HAnimSegment934.children[3] = HAnimSite949;

HAnimSite HAnimSite956 = createNode("HAnimSite");
HAnimSite956.name = "l_axilla_posterior_folds";
HAnimSite956.DEF = "hanim_l_axilla_posterior_folds";
TouchSensor TouchSensor957 = createNode("TouchSensor");
TouchSensor957.description = "HAnimSite 18 l_axilla_posterior_folds";
HAnimSite956.children = new MFNode();

HAnimSite956.children[0] = TouchSensor957;

Shape Shape958 = createNode("Shape");
Shape958.USE = "HAnimSiteShape";
HAnimSite956.children[1] = Shape958;

Billboard Billboard959 = createNode("Billboard");
Shape Shape960 = createNode("Shape");
Text Text961 = createNode("Text");
Text961.string = new MFString(new java.lang.String["18"]);
FontStyle FontStyle962 = createNode("FontStyle");
FontStyle962.size = 0.035;
Text961.fontStyle = FontStyle962;

Shape960.geometry = Text961;

Billboard959.children = new MFNode();

Billboard959.children[0] = Shape960;

HAnimSite956.children[2] = Billboard959;

HAnimSegment934.children[4] = HAnimSite956;

HAnimSite HAnimSite963 = createNode("HAnimSite");
HAnimSite963.name = "l_axilla_proximal";
HAnimSite963.DEF = "hanim_l_axilla_proximal";
HAnimSite963.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor964 = createNode("TouchSensor");
TouchSensor964.description = "HAnimSite 16 l_axilla_proximal";
HAnimSite963.children = new MFNode();

HAnimSite963.children[0] = TouchSensor964;

Shape Shape965 = createNode("Shape");
Shape965.USE = "HAnimSiteShape";
HAnimSite963.children[1] = Shape965;

Billboard Billboard966 = createNode("Billboard");
Shape Shape967 = createNode("Shape");
Text Text968 = createNode("Text");
Text968.string = new MFString(new java.lang.String["16"]);
FontStyle FontStyle969 = createNode("FontStyle");
FontStyle969.size = 0.035;
Text968.fontStyle = FontStyle969;

Shape967.geometry = Text968;

Billboard966.children = new MFNode();

Billboard966.children[0] = Shape967;

HAnimSite963.children[2] = Billboard966;

HAnimSegment934.children[5] = HAnimSite963;

HAnimSite HAnimSite970 = createNode("HAnimSite");
HAnimSite970.name = "l_clavicale";
HAnimSite970.DEF = "hanim_l_clavicale";
HAnimSite970.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor971 = createNode("TouchSensor");
TouchSensor971.description = "HAnimSite 14 l_clavicale";
HAnimSite970.children = new MFNode();

HAnimSite970.children[0] = TouchSensor971;

Shape Shape972 = createNode("Shape");
Shape972.USE = "HAnimSiteShape";
HAnimSite970.children[1] = Shape972;

Billboard Billboard973 = createNode("Billboard");
Shape Shape974 = createNode("Shape");
Text Text975 = createNode("Text");
Text975.string = new MFString(new java.lang.String["14"]);
FontStyle FontStyle976 = createNode("FontStyle");
FontStyle976.size = 0.035;
Text975.fontStyle = FontStyle976;

Shape974.geometry = Text975;

Billboard973.children = new MFNode();

Billboard973.children[0] = Shape974;

HAnimSite970.children[2] = Billboard973;

HAnimSegment934.children[6] = HAnimSite970;

HAnimJoint933.children = new MFNode();

HAnimJoint933.children[0] = HAnimSegment934;

HAnimJoint HAnimJoint977 = createNode("HAnimJoint");
HAnimJoint977.name = "l_acromioclavicular";
HAnimJoint977.DEF = "hanim_l_acromioclavicular";
HAnimJoint977.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint977.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint977.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment978 = createNode("HAnimSegment");
HAnimSegment978.name = "l_scapula";
HAnimSegment978.DEF = "hanim_l_scapula";
Transform Transform979 = createNode("Transform");
Transform979.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Transform Transform980 = createNode("Transform");
//Empty Transform
Shape Shape981 = createNode("Shape");
Shape981.USE = "HAnimJointShape";
Transform980.child = new undefined();

Transform980.child[0] = Shape981;

Transform979.children = new MFNode();

Transform979.children[0] = Transform980;

HAnimSegment978.children = new MFNode();

HAnimSegment978.children[0] = Transform979;

Shape Shape982 = createNode("Shape");
LineSet LineSet983 = createNode("LineSet");
LineSet983.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate984 = createNode("Coordinate");
Coordinate984.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet983.coord = Coordinate984;

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA ColorRGBA985 = createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA";
LineSet983.color = ColorRGBA985;

Shape982.geometry = LineSet983;

HAnimSegment978.children[1] = Shape982;

HAnimJoint977.children = new MFNode();

HAnimJoint977.children[0] = HAnimSegment978;

HAnimJoint HAnimJoint986 = createNode("HAnimJoint");
HAnimJoint986.name = "l_shoulder";
HAnimJoint986.DEF = "hanim_l_shoulder";
HAnimJoint986.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint986.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint986.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment987 = createNode("HAnimSegment");
HAnimSegment987.name = "l_upperarm";
HAnimSegment987.DEF = "hanim_l_upperarm";
Transform Transform988 = createNode("Transform");
Transform988.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform989 = createNode("Transform");
//Empty Transform
Shape Shape990 = createNode("Shape");
Shape990.USE = "HAnimJointShape";
Transform989.child = new undefined();

Transform989.child[0] = Shape990;

Transform988.children = new MFNode();

Transform988.children[0] = Transform989;

HAnimSegment987.children = new MFNode();

HAnimSegment987.children[0] = Transform988;

Shape Shape991 = createNode("Shape");
LineSet LineSet992 = createNode("LineSet");
LineSet992.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate993 = createNode("Coordinate");
Coordinate993.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet992.coord = Coordinate993;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA994 = createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
LineSet992.color = ColorRGBA994;

Shape991.geometry = LineSet992;

HAnimSegment987.children[1] = Shape991;

HAnimSite HAnimSite995 = createNode("HAnimSite");
HAnimSite995.name = "l_bideltoid";
HAnimSite995.DEF = "hanim_l_bideltoid";
TouchSensor TouchSensor996 = createNode("TouchSensor");
TouchSensor996.description = "HAnimSite 96 l_bideltoid";
HAnimSite995.children = new MFNode();

HAnimSite995.children[0] = TouchSensor996;

Shape Shape997 = createNode("Shape");
Shape997.USE = "HAnimSiteShape";
HAnimSite995.children[1] = Shape997;

Billboard Billboard998 = createNode("Billboard");
Shape Shape999 = createNode("Shape");
Text Text1000 = createNode("Text");
Text1000.string = new MFString(new java.lang.String["96"]);
FontStyle FontStyle1001 = createNode("FontStyle");
FontStyle1001.size = 0.035;
Text1000.fontStyle = FontStyle1001;

Shape999.geometry = Text1000;

Billboard998.children = new MFNode();

Billboard998.children[0] = Shape999;

HAnimSite995.children[2] = Billboard998;

HAnimSegment987.children[2] = HAnimSite995;

HAnimSite HAnimSite1002 = createNode("HAnimSite");
HAnimSite1002.name = "l_humeral_lateral_epicondyles";
HAnimSite1002.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite1002.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor1003 = createNode("TouchSensor");
TouchSensor1003.description = "HAnimSite 63 l_humeral_lateral_epicondyles";
HAnimSite1002.children = new MFNode();

HAnimSite1002.children[0] = TouchSensor1003;

Shape Shape1004 = createNode("Shape");
Shape1004.USE = "HAnimSiteShape";
HAnimSite1002.children[1] = Shape1004;

Billboard Billboard1005 = createNode("Billboard");
Shape Shape1006 = createNode("Shape");
Text Text1007 = createNode("Text");
Text1007.string = new MFString(new java.lang.String["63"]);
FontStyle FontStyle1008 = createNode("FontStyle");
FontStyle1008.size = 0.035;
Text1007.fontStyle = FontStyle1008;

Shape1006.geometry = Text1007;

Billboard1005.children = new MFNode();

Billboard1005.children[0] = Shape1006;

HAnimSite1002.children[2] = Billboard1005;

HAnimSegment987.children[3] = HAnimSite1002;

HAnimJoint986.children = new MFNode();

HAnimJoint986.children[0] = HAnimSegment987;

HAnimJoint HAnimJoint1009 = createNode("HAnimJoint");
HAnimJoint1009.name = "l_elbow";
HAnimJoint1009.DEF = "hanim_l_elbow";
HAnimJoint1009.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint1009.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1009.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1010 = createNode("HAnimSegment");
HAnimSegment1010.name = "l_forearm";
HAnimSegment1010.DEF = "hanim_l_forearm";
Transform Transform1011 = createNode("Transform");
Transform1011.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform1012 = createNode("Transform");
//Empty Transform
Shape Shape1013 = createNode("Shape");
Shape1013.USE = "HAnimJointShape";
Transform1012.child = new undefined();

Transform1012.child[0] = Shape1013;

Transform1011.children = new MFNode();

Transform1011.children[0] = Transform1012;

HAnimSegment1010.children = new MFNode();

HAnimSegment1010.children[0] = Transform1011;

Shape Shape1014 = createNode("Shape");
LineSet LineSet1015 = createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1016 = createNode("Coordinate");
Coordinate1016.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1015.coord = Coordinate1016;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA1017 = createNode("ColorRGBA");
ColorRGBA1017.USE = "HAnimSegmentLineColorRGBA";
LineSet1015.color = ColorRGBA1017;

Shape1014.geometry = LineSet1015;

HAnimSegment1010.children[1] = Shape1014;

HAnimSite HAnimSite1018 = createNode("HAnimSite");
HAnimSite1018.name = "l_humeral_medial_epicondyles";
HAnimSite1018.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite1018.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor1019 = createNode("TouchSensor");
TouchSensor1019.description = "HAnimSite 64 l_humeral_medial_epicondyles";
HAnimSite1018.children = new MFNode();

HAnimSite1018.children[0] = TouchSensor1019;

Shape Shape1020 = createNode("Shape");
Shape1020.USE = "HAnimSiteShape";
HAnimSite1018.children[1] = Shape1020;

Billboard Billboard1021 = createNode("Billboard");
Shape Shape1022 = createNode("Shape");
Text Text1023 = createNode("Text");
Text1023.string = new MFString(new java.lang.String["64"]);
FontStyle FontStyle1024 = createNode("FontStyle");
FontStyle1024.size = 0.035;
Text1023.fontStyle = FontStyle1024;

Shape1022.geometry = Text1023;

Billboard1021.children = new MFNode();

Billboard1021.children[0] = Shape1022;

HAnimSite1018.children[2] = Billboard1021;

HAnimSegment1010.children[2] = HAnimSite1018;

HAnimSite HAnimSite1025 = createNode("HAnimSite");
HAnimSite1025.name = "l_olecranon";
HAnimSite1025.DEF = "hanim_l_olecranon";
HAnimSite1025.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor1026 = createNode("TouchSensor");
TouchSensor1026.description = "HAnimSite 65 l_olecranon";
HAnimSite1025.children = new MFNode();

HAnimSite1025.children[0] = TouchSensor1026;

Shape Shape1027 = createNode("Shape");
Shape1027.USE = "HAnimSiteShape";
HAnimSite1025.children[1] = Shape1027;

Billboard Billboard1028 = createNode("Billboard");
Shape Shape1029 = createNode("Shape");
Text Text1030 = createNode("Text");
Text1030.string = new MFString(new java.lang.String["65"]);
FontStyle FontStyle1031 = createNode("FontStyle");
FontStyle1031.size = 0.035;
Text1030.fontStyle = FontStyle1031;

Shape1029.geometry = Text1030;

Billboard1028.children = new MFNode();

Billboard1028.children[0] = Shape1029;

HAnimSite1025.children[2] = Billboard1028;

HAnimSegment1010.children[3] = HAnimSite1025;

HAnimSite HAnimSite1032 = createNode("HAnimSite");
HAnimSite1032.name = "l_radial_styloid";
HAnimSite1032.DEF = "hanim_l_radial_styloid";
HAnimSite1032.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor1033 = createNode("TouchSensor");
TouchSensor1033.description = "HAnimSite 71 l_radial_styloid";
HAnimSite1032.children = new MFNode();

HAnimSite1032.children[0] = TouchSensor1033;

Shape Shape1034 = createNode("Shape");
Shape1034.USE = "HAnimSiteShape";
HAnimSite1032.children[1] = Shape1034;

Billboard Billboard1035 = createNode("Billboard");
Shape Shape1036 = createNode("Shape");
Text Text1037 = createNode("Text");
Text1037.string = new MFString(new java.lang.String["71"]);
FontStyle FontStyle1038 = createNode("FontStyle");
FontStyle1038.size = 0.035;
Text1037.fontStyle = FontStyle1038;

Shape1036.geometry = Text1037;

Billboard1035.children = new MFNode();

Billboard1035.children[0] = Shape1036;

HAnimSite1032.children[2] = Billboard1035;

HAnimSegment1010.children[4] = HAnimSite1032;

HAnimSite HAnimSite1039 = createNode("HAnimSite");
HAnimSite1039.name = "l_radiale";
HAnimSite1039.DEF = "hanim_l_radiale";
HAnimSite1039.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor1040 = createNode("TouchSensor");
TouchSensor1040.description = "HAnimSite 69 l_radiale";
HAnimSite1039.children = new MFNode();

HAnimSite1039.children[0] = TouchSensor1040;

Shape Shape1041 = createNode("Shape");
Shape1041.USE = "HAnimSiteShape";
HAnimSite1039.children[1] = Shape1041;

Billboard Billboard1042 = createNode("Billboard");
Shape Shape1043 = createNode("Shape");
Text Text1044 = createNode("Text");
Text1044.string = new MFString(new java.lang.String["69"]);
FontStyle FontStyle1045 = createNode("FontStyle");
FontStyle1045.size = 0.035;
Text1044.fontStyle = FontStyle1045;

Shape1043.geometry = Text1044;

Billboard1042.children = new MFNode();

Billboard1042.children[0] = Shape1043;

HAnimSite1039.children[2] = Billboard1042;

HAnimSegment1010.children[5] = HAnimSite1039;

HAnimJoint1009.children = new MFNode();

HAnimJoint1009.children[0] = HAnimSegment1010;

HAnimJoint HAnimJoint1046 = createNode("HAnimJoint");
HAnimJoint1046.name = "l_radiocarpal";
HAnimJoint1046.DEF = "hanim_l_radiocarpal";
HAnimJoint1046.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint1046.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1046.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1047 = createNode("HAnimSegment");
HAnimSegment1047.name = "l_carpal";
HAnimSegment1047.DEF = "hanim_l_carpal";
Transform Transform1048 = createNode("Transform");
Transform1048.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1048.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1048.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
Transform Transform1049 = createNode("Transform");
Transform1049.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
Shape Shape1050 = createNode("Shape");
Shape1050.USE = "HAnimJointShape";
Transform1049.child = new undefined();

Transform1049.child[0] = Shape1050;

Transform1048.children = new MFNode();

Transform1048.children[0] = Transform1049;

HAnimSegment1047.children = new MFNode();

HAnimSegment1047.children[0] = Transform1048;

Shape Shape1051 = createNode("Shape");
LineSet LineSet1052 = createNode("LineSet");
LineSet1052.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1053 = createNode("Coordinate");
Coordinate1053.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet1052.coord = Coordinate1053;

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1054 = createNode("ColorRGBA");
ColorRGBA1054.USE = "HAnimSegmentLineColorRGBA";
LineSet1052.color = ColorRGBA1054;

Shape1051.geometry = LineSet1052;

HAnimSegment1047.children[1] = Shape1051;

HAnimSite HAnimSite1055 = createNode("HAnimSite");
HAnimSite1055.name = "l_ulnar_styloid";
HAnimSite1055.DEF = "hanim_l_ulnar_styloid";
HAnimSite1055.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor1056 = createNode("TouchSensor");
TouchSensor1056.description = "HAnimSite 70 l_ulnar_styloid";
HAnimSite1055.children = new MFNode();

HAnimSite1055.children[0] = TouchSensor1056;

Shape Shape1057 = createNode("Shape");
Shape1057.USE = "HAnimSiteShape";
HAnimSite1055.children[1] = Shape1057;

Billboard Billboard1058 = createNode("Billboard");
Shape Shape1059 = createNode("Shape");
Text Text1060 = createNode("Text");
Text1060.string = new MFString(new java.lang.String["70"]);
FontStyle FontStyle1061 = createNode("FontStyle");
FontStyle1061.size = 0.035;
Text1060.fontStyle = FontStyle1061;

Shape1059.geometry = Text1060;

Billboard1058.children = new MFNode();

Billboard1058.children[0] = Shape1059;

HAnimSite1055.children[2] = Billboard1058;

HAnimSegment1047.children[2] = HAnimSite1055;

Shape Shape1062 = createNode("Shape");
LineSet LineSet1063 = createNode("LineSet");
LineSet1063.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1064 = createNode("Coordinate");
Coordinate1064.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet1063.coord = Coordinate1064;

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1065 = createNode("ColorRGBA");
ColorRGBA1065.USE = "HAnimSegmentLineColorRGBA";
LineSet1063.color = ColorRGBA1065;

Shape1062.geometry = LineSet1063;

HAnimSegment1047.children[3] = Shape1062;

Shape Shape1066 = createNode("Shape");
LineSet LineSet1067 = createNode("LineSet");
LineSet1067.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1068 = createNode("Coordinate");
Coordinate1068.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet1067.coord = Coordinate1068;

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1069 = createNode("ColorRGBA");
ColorRGBA1069.USE = "HAnimSegmentLineColorRGBA";
LineSet1067.color = ColorRGBA1069;

Shape1066.geometry = LineSet1067;

HAnimSegment1047.children[4] = Shape1066;

Shape Shape1070 = createNode("Shape");
LineSet LineSet1071 = createNode("LineSet");
LineSet1071.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1072 = createNode("Coordinate");
Coordinate1072.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet1071.coord = Coordinate1072;

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1073 = createNode("ColorRGBA");
ColorRGBA1073.USE = "HAnimSegmentLineColorRGBA";
LineSet1071.color = ColorRGBA1073;

Shape1070.geometry = LineSet1071;

HAnimSegment1047.children[5] = Shape1070;

Shape Shape1074 = createNode("Shape");
LineSet LineSet1075 = createNode("LineSet");
LineSet1075.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1076 = createNode("Coordinate");
Coordinate1076.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet1075.coord = Coordinate1076;

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1077 = createNode("ColorRGBA");
ColorRGBA1077.USE = "HAnimSegmentLineColorRGBA";
LineSet1075.color = ColorRGBA1077;

Shape1074.geometry = LineSet1075;

HAnimSegment1047.children[6] = Shape1074;

HAnimJoint1046.children = new MFNode();

HAnimJoint1046.children[0] = HAnimSegment1047;

HAnimJoint HAnimJoint1078 = createNode("HAnimJoint");
HAnimJoint1078.name = "l_carpometacarpal_1";
HAnimJoint1078.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1078.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1078.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1078.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1079 = createNode("HAnimSegment");
HAnimSegment1079.name = "l_metacarpal_1";
HAnimSegment1079.DEF = "hanim_l_metacarpal_1";
Transform Transform1080 = createNode("Transform");
Transform1080.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Transform Transform1081 = createNode("Transform");
//Empty Transform
Shape Shape1082 = createNode("Shape");
Shape1082.USE = "HAnimJointShape";
Transform1081.child = new undefined();

Transform1081.child[0] = Shape1082;

Transform1080.children = new MFNode();

Transform1080.children[0] = Transform1081;

HAnimSegment1079.children = new MFNode();

HAnimSegment1079.children[0] = Transform1080;

Shape Shape1083 = createNode("Shape");
LineSet LineSet1084 = createNode("LineSet");
LineSet1084.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1085 = createNode("Coordinate");
Coordinate1085.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1084.coord = Coordinate1085;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1086 = createNode("ColorRGBA");
ColorRGBA1086.USE = "HAnimSegmentLineColorRGBA";
LineSet1084.color = ColorRGBA1086;

Shape1083.geometry = LineSet1084;

HAnimSegment1079.children[1] = Shape1083;

HAnimJoint1078.children = new MFNode();

HAnimJoint1078.children[0] = HAnimSegment1079;

HAnimJoint HAnimJoint1087 = createNode("HAnimJoint");
HAnimJoint1087.name = "l_metacarpophalangeal_1";
HAnimJoint1087.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1087.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1087.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1087.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1088 = createNode("HAnimSegment");
HAnimSegment1088.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1088.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform1089 = createNode("Transform");
Transform1089.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform1090 = createNode("Transform");
//Empty Transform
Shape Shape1091 = createNode("Shape");
Shape1091.USE = "HAnimJointShape";
Transform1090.child = new undefined();

Transform1090.child[0] = Shape1091;

Transform1089.children = new MFNode();

Transform1089.children[0] = Transform1090;

HAnimSegment1088.children = new MFNode();

HAnimSegment1088.children[0] = Transform1089;

Shape Shape1092 = createNode("Shape");
LineSet LineSet1093 = createNode("LineSet");
LineSet1093.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1094 = createNode("Coordinate");
Coordinate1094.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1093.coord = Coordinate1094;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1095 = createNode("ColorRGBA");
ColorRGBA1095.USE = "HAnimSegmentLineColorRGBA";
LineSet1093.color = ColorRGBA1095;

Shape1092.geometry = LineSet1093;

HAnimSegment1088.children[1] = Shape1092;

HAnimJoint1087.children = new MFNode();

HAnimJoint1087.children[0] = HAnimSegment1088;

HAnimJoint HAnimJoint1096 = createNode("HAnimJoint");
HAnimJoint1096.name = "l_carpal_interphalangeal_1";
HAnimJoint1096.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1096.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1096.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1096.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1087.children[1] = HAnimJoint1096;

HAnimJoint1078.children[1] = HAnimJoint1087;

HAnimJoint1046.children[1] = HAnimJoint1078;

HAnimJoint HAnimJoint1097 = createNode("HAnimJoint");
HAnimJoint1097.name = "l_carpometacarpal_2";
HAnimJoint1097.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1097.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1097.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1097.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1098 = createNode("HAnimSegment");
HAnimSegment1098.name = "l_metacarpal_2";
HAnimSegment1098.DEF = "hanim_l_metacarpal_2";
Transform Transform1099 = createNode("Transform");
Transform1099.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Transform Transform1100 = createNode("Transform");
//Empty Transform
Shape Shape1101 = createNode("Shape");
Shape1101.USE = "HAnimJointShape";
Transform1100.child = new undefined();

Transform1100.child[0] = Shape1101;

Transform1099.children = new MFNode();

Transform1099.children[0] = Transform1100;

HAnimSegment1098.children = new MFNode();

HAnimSegment1098.children[0] = Transform1099;

Shape Shape1102 = createNode("Shape");
LineSet LineSet1103 = createNode("LineSet");
LineSet1103.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1104 = createNode("Coordinate");
Coordinate1104.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1103.coord = Coordinate1104;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1105 = createNode("ColorRGBA");
ColorRGBA1105.USE = "HAnimSegmentLineColorRGBA";
LineSet1103.color = ColorRGBA1105;

Shape1102.geometry = LineSet1103;

HAnimSegment1098.children[1] = Shape1102;

HAnimSite HAnimSite1106 = createNode("HAnimSite");
HAnimSite1106.name = "l_metacarpal_phalanx_2";
HAnimSite1106.DEF = "hanim_l_metacarpal_phalanx_2";
HAnimSite1106.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor1107 = createNode("TouchSensor");
TouchSensor1107.description = "HAnimSite 75 l_metacarpal_phalanx_2";
HAnimSite1106.children = new MFNode();

HAnimSite1106.children[0] = TouchSensor1107;

Shape Shape1108 = createNode("Shape");
Shape1108.USE = "HAnimSiteShape";
HAnimSite1106.children[1] = Shape1108;

Billboard Billboard1109 = createNode("Billboard");
Shape Shape1110 = createNode("Shape");
Text Text1111 = createNode("Text");
Text1111.string = new MFString(new java.lang.String["75"]);
FontStyle FontStyle1112 = createNode("FontStyle");
FontStyle1112.size = 0.035;
Text1111.fontStyle = FontStyle1112;

Shape1110.geometry = Text1111;

Billboard1109.children = new MFNode();

Billboard1109.children[0] = Shape1110;

HAnimSite1106.children[2] = Billboard1109;

HAnimSegment1098.children[2] = HAnimSite1106;

HAnimJoint1097.children = new MFNode();

HAnimJoint1097.children[0] = HAnimSegment1098;

HAnimJoint HAnimJoint1113 = createNode("HAnimJoint");
HAnimJoint1113.name = "l_metacarpophalangeal_2";
HAnimJoint1113.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1113.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1113.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1114 = createNode("HAnimSegment");
HAnimSegment1114.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1114.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform1115 = createNode("Transform");
Transform1115.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform1116 = createNode("Transform");
//Empty Transform
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
Coordinate1120.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1119.coord = Coordinate1120;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1121 = createNode("ColorRGBA");
ColorRGBA1121.USE = "HAnimSegmentLineColorRGBA";
LineSet1119.color = ColorRGBA1121;

Shape1118.geometry = LineSet1119;

HAnimSegment1114.children[1] = Shape1118;

HAnimJoint1113.children = new MFNode();

HAnimJoint1113.children[0] = HAnimSegment1114;

HAnimJoint HAnimJoint1122 = createNode("HAnimJoint");
HAnimJoint1122.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1122.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1122.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1122.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1122.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1123 = createNode("HAnimSegment");
HAnimSegment1123.name = "l_carpal_middle_phalanx_2";
HAnimSegment1123.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform1124 = createNode("Transform");
Transform1124.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform1125 = createNode("Transform");
//Empty Transform
Shape Shape1126 = createNode("Shape");
Shape1126.USE = "HAnimJointShape";
Transform1125.child = new undefined();

Transform1125.child[0] = Shape1126;

Transform1124.children = new MFNode();

Transform1124.children[0] = Transform1125;

HAnimSegment1123.children = new MFNode();

HAnimSegment1123.children[0] = Transform1124;

Shape Shape1127 = createNode("Shape");
LineSet LineSet1128 = createNode("LineSet");
LineSet1128.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1129 = createNode("Coordinate");
Coordinate1129.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1128.coord = Coordinate1129;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1130 = createNode("ColorRGBA");
ColorRGBA1130.USE = "HAnimSegmentLineColorRGBA";
LineSet1128.color = ColorRGBA1130;

Shape1127.geometry = LineSet1128;

HAnimSegment1123.children[1] = Shape1127;

HAnimJoint1122.children = new MFNode();

HAnimJoint1122.children[0] = HAnimSegment1123;

HAnimJoint HAnimJoint1131 = createNode("HAnimJoint");
HAnimJoint1131.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1131.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1131.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1131.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1131.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1122.children[1] = HAnimJoint1131;

HAnimJoint1113.children[1] = HAnimJoint1122;

HAnimJoint1097.children[1] = HAnimJoint1113;

HAnimJoint1046.children[2] = HAnimJoint1097;

HAnimJoint HAnimJoint1132 = createNode("HAnimJoint");
HAnimJoint1132.name = "l_carpometacarpal_3";
HAnimJoint1132.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1132.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1132.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1132.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1133 = createNode("HAnimSegment");
HAnimSegment1133.name = "l_metacarpal_3";
HAnimSegment1133.DEF = "hanim_l_metacarpal_3";
Transform Transform1134 = createNode("Transform");
Transform1134.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Transform Transform1135 = createNode("Transform");
//Empty Transform
Shape Shape1136 = createNode("Shape");
Shape1136.USE = "HAnimJointShape";
Transform1135.child = new undefined();

Transform1135.child[0] = Shape1136;

Transform1134.children = new MFNode();

Transform1134.children[0] = Transform1135;

HAnimSegment1133.children = new MFNode();

HAnimSegment1133.children[0] = Transform1134;

Shape Shape1137 = createNode("Shape");
LineSet LineSet1138 = createNode("LineSet");
LineSet1138.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1139 = createNode("Coordinate");
Coordinate1139.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1138.coord = Coordinate1139;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1140 = createNode("ColorRGBA");
ColorRGBA1140.USE = "HAnimSegmentLineColorRGBA";
LineSet1138.color = ColorRGBA1140;

Shape1137.geometry = LineSet1138;

HAnimSegment1133.children[1] = Shape1137;

HAnimSite HAnimSite1141 = createNode("HAnimSite");
HAnimSite1141.name = "l_metacarpal_phalanx_3";
HAnimSite1141.DEF = "hanim_l_metacarpal_phalanx_3";
TouchSensor TouchSensor1142 = createNode("TouchSensor");
TouchSensor1142.description = "HAnimSite 76 l_metacarpal_phalanx_3";
HAnimSite1141.children = new MFNode();

HAnimSite1141.children[0] = TouchSensor1142;

Shape Shape1143 = createNode("Shape");
Shape1143.USE = "HAnimSiteShape";
HAnimSite1141.children[1] = Shape1143;

Billboard Billboard1144 = createNode("Billboard");
Shape Shape1145 = createNode("Shape");
Text Text1146 = createNode("Text");
Text1146.string = new MFString(new java.lang.String["76"]);
FontStyle FontStyle1147 = createNode("FontStyle");
FontStyle1147.size = 0.035;
Text1146.fontStyle = FontStyle1147;

Shape1145.geometry = Text1146;

Billboard1144.children = new MFNode();

Billboard1144.children[0] = Shape1145;

HAnimSite1141.children[2] = Billboard1144;

HAnimSegment1133.children[2] = HAnimSite1141;

HAnimJoint1132.children = new MFNode();

HAnimJoint1132.children[0] = HAnimSegment1133;

HAnimJoint HAnimJoint1148 = createNode("HAnimJoint");
HAnimJoint1148.name = "l_metacarpophalangeal_3";
HAnimJoint1148.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1148.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1148.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1149 = createNode("HAnimSegment");
HAnimSegment1149.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1149.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform1150 = createNode("Transform");
Transform1150.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Transform Transform1151 = createNode("Transform");
//Empty Transform
Shape Shape1152 = createNode("Shape");
Shape1152.USE = "HAnimJointShape";
Transform1151.child = new undefined();

Transform1151.child[0] = Shape1152;

Transform1150.children = new MFNode();

Transform1150.children[0] = Transform1151;

HAnimSegment1149.children = new MFNode();

HAnimSegment1149.children[0] = Transform1150;

Shape Shape1153 = createNode("Shape");
LineSet LineSet1154 = createNode("LineSet");
LineSet1154.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1155 = createNode("Coordinate");
Coordinate1155.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1154.coord = Coordinate1155;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1156 = createNode("ColorRGBA");
ColorRGBA1156.USE = "HAnimSegmentLineColorRGBA";
LineSet1154.color = ColorRGBA1156;

Shape1153.geometry = LineSet1154;

HAnimSegment1149.children[1] = Shape1153;

HAnimJoint1148.children = new MFNode();

HAnimJoint1148.children[0] = HAnimSegment1149;

HAnimJoint HAnimJoint1157 = createNode("HAnimJoint");
HAnimJoint1157.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1157.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1157.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1157.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1158 = createNode("HAnimSegment");
HAnimSegment1158.name = "l_carpal_middle_phalanx_3";
HAnimSegment1158.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform1159 = createNode("Transform");
Transform1159.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Transform Transform1160 = createNode("Transform");
//Empty Transform
Shape Shape1161 = createNode("Shape");
Shape1161.USE = "HAnimJointShape";
Transform1160.child = new undefined();

Transform1160.child[0] = Shape1161;

Transform1159.children = new MFNode();

Transform1159.children[0] = Transform1160;

HAnimSegment1158.children = new MFNode();

HAnimSegment1158.children[0] = Transform1159;

Shape Shape1162 = createNode("Shape");
LineSet LineSet1163 = createNode("LineSet");
LineSet1163.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1164 = createNode("Coordinate");
Coordinate1164.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1163.coord = Coordinate1164;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1165 = createNode("ColorRGBA");
ColorRGBA1165.USE = "HAnimSegmentLineColorRGBA";
LineSet1163.color = ColorRGBA1165;

Shape1162.geometry = LineSet1163;

HAnimSegment1158.children[1] = Shape1162;

HAnimJoint1157.children = new MFNode();

HAnimJoint1157.children[0] = HAnimSegment1158;

HAnimJoint HAnimJoint1166 = createNode("HAnimJoint");
HAnimJoint1166.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1166.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1166.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1166.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1166.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1157.children[1] = HAnimJoint1166;

HAnimJoint1148.children[1] = HAnimJoint1157;

HAnimJoint1132.children[1] = HAnimJoint1148;

HAnimJoint1046.children[3] = HAnimJoint1132;

HAnimJoint HAnimJoint1167 = createNode("HAnimJoint");
HAnimJoint1167.name = "l_carpometacarpal_4";
HAnimJoint1167.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1167.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1167.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1167.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1168 = createNode("HAnimSegment");
HAnimSegment1168.name = "l_metacarpal_4";
HAnimSegment1168.DEF = "hanim_l_metacarpal_4";
Transform Transform1169 = createNode("Transform");
Transform1169.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Transform Transform1170 = createNode("Transform");
//Empty Transform
Shape Shape1171 = createNode("Shape");
Shape1171.USE = "HAnimJointShape";
Transform1170.child = new undefined();

Transform1170.child[0] = Shape1171;

Transform1169.children = new MFNode();

Transform1169.children[0] = Transform1170;

HAnimSegment1168.children = new MFNode();

HAnimSegment1168.children[0] = Transform1169;

Shape Shape1172 = createNode("Shape");
LineSet LineSet1173 = createNode("LineSet");
LineSet1173.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1174 = createNode("Coordinate");
Coordinate1174.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1173.coord = Coordinate1174;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1175 = createNode("ColorRGBA");
ColorRGBA1175.USE = "HAnimSegmentLineColorRGBA";
LineSet1173.color = ColorRGBA1175;

Shape1172.geometry = LineSet1173;

HAnimSegment1168.children[1] = Shape1172;

HAnimJoint1167.children = new MFNode();

HAnimJoint1167.children[0] = HAnimSegment1168;

HAnimJoint HAnimJoint1176 = createNode("HAnimJoint");
HAnimJoint1176.name = "l_metacarpophalangeal_4";
HAnimJoint1176.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1176.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1176.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1176.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1177 = createNode("HAnimSegment");
HAnimSegment1177.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1177.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform1178 = createNode("Transform");
Transform1178.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform1179 = createNode("Transform");
//Empty Transform
Shape Shape1180 = createNode("Shape");
Shape1180.USE = "HAnimJointShape";
Transform1179.child = new undefined();

Transform1179.child[0] = Shape1180;

Transform1178.children = new MFNode();

Transform1178.children[0] = Transform1179;

HAnimSegment1177.children = new MFNode();

HAnimSegment1177.children[0] = Transform1178;

Shape Shape1181 = createNode("Shape");
LineSet LineSet1182 = createNode("LineSet");
LineSet1182.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1183 = createNode("Coordinate");
Coordinate1183.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1182.coord = Coordinate1183;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1184 = createNode("ColorRGBA");
ColorRGBA1184.USE = "HAnimSegmentLineColorRGBA";
LineSet1182.color = ColorRGBA1184;

Shape1181.geometry = LineSet1182;

HAnimSegment1177.children[1] = Shape1181;

HAnimJoint1176.children = new MFNode();

HAnimJoint1176.children[0] = HAnimSegment1177;

HAnimJoint HAnimJoint1185 = createNode("HAnimJoint");
HAnimJoint1185.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1185.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1185.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1185.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1185.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1186 = createNode("HAnimSegment");
HAnimSegment1186.name = "l_carpal_middle_phalanx_4";
HAnimSegment1186.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform1187 = createNode("Transform");
Transform1187.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Transform Transform1188 = createNode("Transform");
//Empty Transform
Shape Shape1189 = createNode("Shape");
Shape1189.USE = "HAnimJointShape";
Transform1188.child = new undefined();

Transform1188.child[0] = Shape1189;

Transform1187.children = new MFNode();

Transform1187.children[0] = Transform1188;

HAnimSegment1186.children = new MFNode();

HAnimSegment1186.children[0] = Transform1187;

Shape Shape1190 = createNode("Shape");
LineSet LineSet1191 = createNode("LineSet");
LineSet1191.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1192 = createNode("Coordinate");
Coordinate1192.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1191.coord = Coordinate1192;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1193 = createNode("ColorRGBA");
ColorRGBA1193.USE = "HAnimSegmentLineColorRGBA";
LineSet1191.color = ColorRGBA1193;

Shape1190.geometry = LineSet1191;

HAnimSegment1186.children[1] = Shape1190;

HAnimJoint1185.children = new MFNode();

HAnimJoint1185.children[0] = HAnimSegment1186;

HAnimJoint HAnimJoint1194 = createNode("HAnimJoint");
HAnimJoint1194.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1194.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1194.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1194.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1194.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1185.children[1] = HAnimJoint1194;

HAnimJoint1176.children[1] = HAnimJoint1185;

HAnimJoint1167.children[1] = HAnimJoint1176;

HAnimJoint1046.children[4] = HAnimJoint1167;

HAnimJoint HAnimJoint1195 = createNode("HAnimJoint");
HAnimJoint1195.name = "l_carpometacarpal_5";
HAnimJoint1195.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1195.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1195.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1195.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1196 = createNode("HAnimSegment");
HAnimSegment1196.name = "l_metacarpal_5";
HAnimSegment1196.DEF = "hanim_l_metacarpal_5";
Transform Transform1197 = createNode("Transform");
Transform1197.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
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
Coordinate1202.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1201.coord = Coordinate1202;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1203 = createNode("ColorRGBA");
ColorRGBA1203.USE = "HAnimSegmentLineColorRGBA";
LineSet1201.color = ColorRGBA1203;

Shape1200.geometry = LineSet1201;

HAnimSegment1196.children[1] = Shape1200;

HAnimSite HAnimSite1204 = createNode("HAnimSite");
HAnimSite1204.name = "l_metacarpal_phalanx_5";
HAnimSite1204.DEF = "hanim_l_metacarpal_phalanx_5";
HAnimSite1204.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor1205 = createNode("TouchSensor");
TouchSensor1205.description = "HAnimSite 77 l_metacarpal_phalanx_5";
HAnimSite1204.children = new MFNode();

HAnimSite1204.children[0] = TouchSensor1205;

Shape Shape1206 = createNode("Shape");
Shape1206.USE = "HAnimSiteShape";
HAnimSite1204.children[1] = Shape1206;

Billboard Billboard1207 = createNode("Billboard");
Shape Shape1208 = createNode("Shape");
Text Text1209 = createNode("Text");
Text1209.string = new MFString(new java.lang.String["77"]);
FontStyle FontStyle1210 = createNode("FontStyle");
FontStyle1210.size = 0.035;
Text1209.fontStyle = FontStyle1210;

Shape1208.geometry = Text1209;

Billboard1207.children = new MFNode();

Billboard1207.children[0] = Shape1208;

HAnimSite1204.children[2] = Billboard1207;

HAnimSegment1196.children[2] = HAnimSite1204;

HAnimJoint1195.children = new MFNode();

HAnimJoint1195.children[0] = HAnimSegment1196;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.name = "l_metacarpophalangeal_5";
HAnimJoint1211.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1211.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1211.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1211.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1212 = createNode("HAnimSegment");
HAnimSegment1212.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1212.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform1213 = createNode("Transform");
Transform1213.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
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
Coordinate1218.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1217.coord = Coordinate1218;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1219 = createNode("ColorRGBA");
ColorRGBA1219.USE = "HAnimSegmentLineColorRGBA";
LineSet1217.color = ColorRGBA1219;

Shape1216.geometry = LineSet1217;

HAnimSegment1212.children[1] = Shape1216;

HAnimJoint1211.children = new MFNode();

HAnimJoint1211.children[0] = HAnimSegment1212;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1220.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1220.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1220.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1220.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1221 = createNode("HAnimSegment");
HAnimSegment1221.name = "l_carpal_middle_phalanx_5";
HAnimSegment1221.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform1222 = createNode("Transform");
Transform1222.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform1223 = createNode("Transform");
//Empty Transform
Shape Shape1224 = createNode("Shape");
Shape1224.USE = "HAnimJointShape";
Transform1223.child = new undefined();

Transform1223.child[0] = Shape1224;

Transform1222.children = new MFNode();

Transform1222.children[0] = Transform1223;

HAnimSegment1221.children = new MFNode();

HAnimSegment1221.children[0] = Transform1222;

Shape Shape1225 = createNode("Shape");
LineSet LineSet1226 = createNode("LineSet");
LineSet1226.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1227 = createNode("Coordinate");
Coordinate1227.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1226.coord = Coordinate1227;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1228 = createNode("ColorRGBA");
ColorRGBA1228.USE = "HAnimSegmentLineColorRGBA";
LineSet1226.color = ColorRGBA1228;

Shape1225.geometry = LineSet1226;

HAnimSegment1221.children[1] = Shape1225;

HAnimJoint1220.children = new MFNode();

HAnimJoint1220.children[0] = HAnimSegment1221;

HAnimJoint HAnimJoint1229 = createNode("HAnimJoint");
HAnimJoint1229.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1229.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1229.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1229.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1229.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1220.children[1] = HAnimJoint1229;

HAnimJoint1211.children[1] = HAnimJoint1220;

HAnimJoint1195.children[1] = HAnimJoint1211;

HAnimJoint1046.children[5] = HAnimJoint1195;

HAnimJoint1009.children[1] = HAnimJoint1046;

HAnimJoint986.children[1] = HAnimJoint1009;

HAnimJoint977.children[1] = HAnimJoint986;

HAnimJoint933.children[1] = HAnimJoint977;

HAnimJoint701.children[2] = HAnimJoint933;

HAnimJoint HAnimJoint1230 = createNode("HAnimJoint");
HAnimJoint1230.name = "r_sternoclavicular";
HAnimJoint1230.DEF = "hanim_r_sternoclavicular";
HAnimJoint1230.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint1230.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1230.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1231 = createNode("HAnimSegment");
HAnimSegment1231.name = "r_clavicle";
HAnimSegment1231.DEF = "hanim_r_clavicle";
Transform Transform1232 = createNode("Transform");
Transform1232.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
Transform Transform1233 = createNode("Transform");
//Empty Transform
Shape Shape1234 = createNode("Shape");
Shape1234.USE = "HAnimJointShape";
Transform1233.child = new undefined();

Transform1233.child[0] = Shape1234;

Transform1232.children = new MFNode();

Transform1232.children[0] = Transform1233;

HAnimSegment1231.children = new MFNode();

HAnimSegment1231.children[0] = Transform1232;

Shape Shape1235 = createNode("Shape");
LineSet LineSet1236 = createNode("LineSet");
LineSet1236.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1237 = createNode("Coordinate");
Coordinate1237.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1236.coord = Coordinate1237;

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA ColorRGBA1238 = createNode("ColorRGBA");
ColorRGBA1238.USE = "HAnimSegmentLineColorRGBA";
LineSet1236.color = ColorRGBA1238;

Shape1235.geometry = LineSet1236;

HAnimSegment1231.children[1] = Shape1235;

HAnimSite HAnimSite1239 = createNode("HAnimSite");
HAnimSite1239.name = "r_acromion";
HAnimSite1239.DEF = "hanim_r_acromion";
HAnimSite1239.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor1240 = createNode("TouchSensor");
TouchSensor1240.description = "HAnimSite 20 r_acromion";
HAnimSite1239.children = new MFNode();

HAnimSite1239.children[0] = TouchSensor1240;

Shape Shape1241 = createNode("Shape");
Shape1241.USE = "HAnimSiteShape";
HAnimSite1239.children[1] = Shape1241;

Billboard Billboard1242 = createNode("Billboard");
Shape Shape1243 = createNode("Shape");
Text Text1244 = createNode("Text");
Text1244.string = new MFString(new java.lang.String["20"]);
FontStyle FontStyle1245 = createNode("FontStyle");
FontStyle1245.size = 0.035;
Text1244.fontStyle = FontStyle1245;

Shape1243.geometry = Text1244;

Billboard1242.children = new MFNode();

Billboard1242.children[0] = Shape1243;

HAnimSite1239.children[2] = Billboard1242;

HAnimSegment1231.children[2] = HAnimSite1239;

HAnimSite HAnimSite1246 = createNode("HAnimSite");
HAnimSite1246.name = "r_axilla_distal";
HAnimSite1246.DEF = "hanim_r_axilla_distal";
HAnimSite1246.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor1247 = createNode("TouchSensor");
TouchSensor1247.description = "HAnimSite 22 r_axilla_distal";
HAnimSite1246.children = new MFNode();

HAnimSite1246.children[0] = TouchSensor1247;

Shape Shape1248 = createNode("Shape");
Shape1248.USE = "HAnimSiteShape";
HAnimSite1246.children[1] = Shape1248;

Billboard Billboard1249 = createNode("Billboard");
Shape Shape1250 = createNode("Shape");
Text Text1251 = createNode("Text");
Text1251.string = new MFString(new java.lang.String["22"]);
FontStyle FontStyle1252 = createNode("FontStyle");
FontStyle1252.size = 0.035;
Text1251.fontStyle = FontStyle1252;

Shape1250.geometry = Text1251;

Billboard1249.children = new MFNode();

Billboard1249.children[0] = Shape1250;

HAnimSite1246.children[2] = Billboard1249;

HAnimSegment1231.children[3] = HAnimSite1246;

HAnimSite HAnimSite1253 = createNode("HAnimSite");
HAnimSite1253.name = "r_axilla_posterior_folds";
HAnimSite1253.DEF = "hanim_r_axilla_posterior_folds";
TouchSensor TouchSensor1254 = createNode("TouchSensor");
TouchSensor1254.description = "HAnimSite 23 r_axilla_posterior_folds";
HAnimSite1253.children = new MFNode();

HAnimSite1253.children[0] = TouchSensor1254;

Shape Shape1255 = createNode("Shape");
Shape1255.USE = "HAnimSiteShape";
HAnimSite1253.children[1] = Shape1255;

Billboard Billboard1256 = createNode("Billboard");
Shape Shape1257 = createNode("Shape");
Text Text1258 = createNode("Text");
Text1258.string = new MFString(new java.lang.String["23"]);
FontStyle FontStyle1259 = createNode("FontStyle");
FontStyle1259.size = 0.035;
Text1258.fontStyle = FontStyle1259;

Shape1257.geometry = Text1258;

Billboard1256.children = new MFNode();

Billboard1256.children[0] = Shape1257;

HAnimSite1253.children[2] = Billboard1256;

HAnimSegment1231.children[4] = HAnimSite1253;

HAnimSite HAnimSite1260 = createNode("HAnimSite");
HAnimSite1260.name = "r_axilla_proximal";
HAnimSite1260.DEF = "hanim_r_axilla_proximal";
HAnimSite1260.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor1261 = createNode("TouchSensor");
TouchSensor1261.description = "HAnimSite 21 r_axilla_proximal";
HAnimSite1260.children = new MFNode();

HAnimSite1260.children[0] = TouchSensor1261;

Shape Shape1262 = createNode("Shape");
Shape1262.USE = "HAnimSiteShape";
HAnimSite1260.children[1] = Shape1262;

Billboard Billboard1263 = createNode("Billboard");
Shape Shape1264 = createNode("Shape");
Text Text1265 = createNode("Text");
Text1265.string = new MFString(new java.lang.String["21"]);
FontStyle FontStyle1266 = createNode("FontStyle");
FontStyle1266.size = 0.035;
Text1265.fontStyle = FontStyle1266;

Shape1264.geometry = Text1265;

Billboard1263.children = new MFNode();

Billboard1263.children[0] = Shape1264;

HAnimSite1260.children[2] = Billboard1263;

HAnimSegment1231.children[5] = HAnimSite1260;

HAnimSite HAnimSite1267 = createNode("HAnimSite");
HAnimSite1267.name = "r_clavicale";
HAnimSite1267.DEF = "hanim_r_clavicale";
HAnimSite1267.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor1268 = createNode("TouchSensor");
TouchSensor1268.description = "HAnimSite 19 r_clavicale";
HAnimSite1267.children = new MFNode();

HAnimSite1267.children[0] = TouchSensor1268;

Shape Shape1269 = createNode("Shape");
Shape1269.USE = "HAnimSiteShape";
HAnimSite1267.children[1] = Shape1269;

Billboard Billboard1270 = createNode("Billboard");
Shape Shape1271 = createNode("Shape");
Text Text1272 = createNode("Text");
Text1272.string = new MFString(new java.lang.String["19"]);
FontStyle FontStyle1273 = createNode("FontStyle");
FontStyle1273.size = 0.035;
Text1272.fontStyle = FontStyle1273;

Shape1271.geometry = Text1272;

Billboard1270.children = new MFNode();

Billboard1270.children[0] = Shape1271;

HAnimSite1267.children[2] = Billboard1270;

HAnimSegment1231.children[6] = HAnimSite1267;

HAnimJoint1230.children = new MFNode();

HAnimJoint1230.children[0] = HAnimSegment1231;

HAnimJoint HAnimJoint1274 = createNode("HAnimJoint");
HAnimJoint1274.name = "r_acromioclavicular";
HAnimJoint1274.DEF = "hanim_r_acromioclavicular";
HAnimJoint1274.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint1274.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1274.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1275 = createNode("HAnimSegment");
HAnimSegment1275.name = "r_scapula";
HAnimSegment1275.DEF = "hanim_r_scapula";
Transform Transform1276 = createNode("Transform");
Transform1276.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform1277 = createNode("Transform");
//Empty Transform
Shape Shape1278 = createNode("Shape");
Shape1278.USE = "HAnimJointShape";
Transform1277.child = new undefined();

Transform1277.child[0] = Shape1278;

Transform1276.children = new MFNode();

Transform1276.children[0] = Transform1277;

HAnimSegment1275.children = new MFNode();

HAnimSegment1275.children[0] = Transform1276;

Shape Shape1279 = createNode("Shape");
LineSet LineSet1280 = createNode("LineSet");
LineSet1280.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1281 = createNode("Coordinate");
Coordinate1281.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1280.coord = Coordinate1281;

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA ColorRGBA1282 = createNode("ColorRGBA");
ColorRGBA1282.USE = "HAnimSegmentLineColorRGBA";
LineSet1280.color = ColorRGBA1282;

Shape1279.geometry = LineSet1280;

HAnimSegment1275.children[1] = Shape1279;

HAnimJoint1274.children = new MFNode();

HAnimJoint1274.children[0] = HAnimSegment1275;

HAnimJoint HAnimJoint1283 = createNode("HAnimJoint");
HAnimJoint1283.name = "r_shoulder";
HAnimJoint1283.DEF = "hanim_r_shoulder";
HAnimJoint1283.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint1283.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1283.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1284 = createNode("HAnimSegment");
HAnimSegment1284.name = "r_upperarm";
HAnimSegment1284.DEF = "hanim_r_upperarm";
Transform Transform1285 = createNode("Transform");
Transform1285.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform1286 = createNode("Transform");
//Empty Transform
Shape Shape1287 = createNode("Shape");
Shape1287.USE = "HAnimJointShape";
Transform1286.child = new undefined();

Transform1286.child[0] = Shape1287;

Transform1285.children = new MFNode();

Transform1285.children[0] = Transform1286;

HAnimSegment1284.children = new MFNode();

HAnimSegment1284.children[0] = Transform1285;

Shape Shape1288 = createNode("Shape");
LineSet LineSet1289 = createNode("LineSet");
LineSet1289.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1290 = createNode("Coordinate");
Coordinate1290.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1289.coord = Coordinate1290;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA1291 = createNode("ColorRGBA");
ColorRGBA1291.USE = "HAnimSegmentLineColorRGBA";
LineSet1289.color = ColorRGBA1291;

Shape1288.geometry = LineSet1289;

HAnimSegment1284.children[1] = Shape1288;

HAnimSite HAnimSite1292 = createNode("HAnimSite");
HAnimSite1292.name = "r_bideltoid";
HAnimSite1292.DEF = "hanim_r_bideltoid";
TouchSensor TouchSensor1293 = createNode("TouchSensor");
TouchSensor1293.description = "HAnimSite 97 r_bideltoid";
HAnimSite1292.children = new MFNode();

HAnimSite1292.children[0] = TouchSensor1293;

Shape Shape1294 = createNode("Shape");
Shape1294.USE = "HAnimSiteShape";
HAnimSite1292.children[1] = Shape1294;

Billboard Billboard1295 = createNode("Billboard");
Shape Shape1296 = createNode("Shape");
Text Text1297 = createNode("Text");
Text1297.string = new MFString(new java.lang.String["97"]);
FontStyle FontStyle1298 = createNode("FontStyle");
FontStyle1298.size = 0.035;
Text1297.fontStyle = FontStyle1298;

Shape1296.geometry = Text1297;

Billboard1295.children = new MFNode();

Billboard1295.children[0] = Shape1296;

HAnimSite1292.children[2] = Billboard1295;

HAnimSegment1284.children[2] = HAnimSite1292;

HAnimSite HAnimSite1299 = createNode("HAnimSite");
HAnimSite1299.name = "r_humeral_lateral_epicondyles";
HAnimSite1299.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite1299.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1300 = createNode("TouchSensor");
TouchSensor1300.description = "HAnimSite 66 r_humeral_lateral_epicondyles";
HAnimSite1299.children = new MFNode();

HAnimSite1299.children[0] = TouchSensor1300;

Shape Shape1301 = createNode("Shape");
Shape1301.USE = "HAnimSiteShape";
HAnimSite1299.children[1] = Shape1301;

Billboard Billboard1302 = createNode("Billboard");
Shape Shape1303 = createNode("Shape");
Text Text1304 = createNode("Text");
Text1304.string = new MFString(new java.lang.String["66"]);
FontStyle FontStyle1305 = createNode("FontStyle");
FontStyle1305.size = 0.035;
Text1304.fontStyle = FontStyle1305;

Shape1303.geometry = Text1304;

Billboard1302.children = new MFNode();

Billboard1302.children[0] = Shape1303;

HAnimSite1299.children[2] = Billboard1302;

HAnimSegment1284.children[3] = HAnimSite1299;

HAnimJoint1283.children = new MFNode();

HAnimJoint1283.children[0] = HAnimSegment1284;

HAnimJoint HAnimJoint1306 = createNode("HAnimJoint");
HAnimJoint1306.name = "r_elbow";
HAnimJoint1306.DEF = "hanim_r_elbow";
HAnimJoint1306.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint1306.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1306.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1307 = createNode("HAnimSegment");
HAnimSegment1307.name = "r_forearm";
HAnimSegment1307.DEF = "hanim_r_forearm";
Transform Transform1308 = createNode("Transform");
Transform1308.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform1309 = createNode("Transform");
//Empty Transform
Shape Shape1310 = createNode("Shape");
Shape1310.USE = "HAnimJointShape";
Transform1309.child = new undefined();

Transform1309.child[0] = Shape1310;

Transform1308.children = new MFNode();

Transform1308.children[0] = Transform1309;

HAnimSegment1307.children = new MFNode();

HAnimSegment1307.children[0] = Transform1308;

Shape Shape1311 = createNode("Shape");
LineSet LineSet1312 = createNode("LineSet");
LineSet1312.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1313 = createNode("Coordinate");
Coordinate1313.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1312.coord = Coordinate1313;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA1314 = createNode("ColorRGBA");
ColorRGBA1314.USE = "HAnimSegmentLineColorRGBA";
LineSet1312.color = ColorRGBA1314;

Shape1311.geometry = LineSet1312;

HAnimSegment1307.children[1] = Shape1311;

HAnimSite HAnimSite1315 = createNode("HAnimSite");
HAnimSite1315.name = "r_humeral_medial_epicondyles";
HAnimSite1315.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite1315.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1316 = createNode("TouchSensor");
TouchSensor1316.description = "HAnimSite 67 r_humeral_medial_epicondyles";
HAnimSite1315.children = new MFNode();

HAnimSite1315.children[0] = TouchSensor1316;

Shape Shape1317 = createNode("Shape");
Shape1317.USE = "HAnimSiteShape";
HAnimSite1315.children[1] = Shape1317;

Billboard Billboard1318 = createNode("Billboard");
Shape Shape1319 = createNode("Shape");
Text Text1320 = createNode("Text");
Text1320.string = new MFString(new java.lang.String["67"]);
FontStyle FontStyle1321 = createNode("FontStyle");
FontStyle1321.size = 0.035;
Text1320.fontStyle = FontStyle1321;

Shape1319.geometry = Text1320;

Billboard1318.children = new MFNode();

Billboard1318.children[0] = Shape1319;

HAnimSite1315.children[2] = Billboard1318;

HAnimSegment1307.children[2] = HAnimSite1315;

HAnimSite HAnimSite1322 = createNode("HAnimSite");
HAnimSite1322.name = "r_olecranon";
HAnimSite1322.DEF = "hanim_r_olecranon";
HAnimSite1322.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1323 = createNode("TouchSensor");
TouchSensor1323.description = "HAnimSite 68 r_olecranon";
HAnimSite1322.children = new MFNode();

HAnimSite1322.children[0] = TouchSensor1323;

Shape Shape1324 = createNode("Shape");
Shape1324.USE = "HAnimSiteShape";
HAnimSite1322.children[1] = Shape1324;

Billboard Billboard1325 = createNode("Billboard");
Shape Shape1326 = createNode("Shape");
Text Text1327 = createNode("Text");
Text1327.string = new MFString(new java.lang.String["68"]);
FontStyle FontStyle1328 = createNode("FontStyle");
FontStyle1328.size = 0.035;
Text1327.fontStyle = FontStyle1328;

Shape1326.geometry = Text1327;

Billboard1325.children = new MFNode();

Billboard1325.children[0] = Shape1326;

HAnimSite1322.children[2] = Billboard1325;

HAnimSegment1307.children[3] = HAnimSite1322;

HAnimSite HAnimSite1329 = createNode("HAnimSite");
HAnimSite1329.name = "r_radial_styloid";
HAnimSite1329.DEF = "hanim_r_radial_styloid";
HAnimSite1329.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1330 = createNode("TouchSensor");
TouchSensor1330.description = "HAnimSite 74 r_radial_styloid";
HAnimSite1329.children = new MFNode();

HAnimSite1329.children[0] = TouchSensor1330;

Shape Shape1331 = createNode("Shape");
Shape1331.USE = "HAnimSiteShape";
HAnimSite1329.children[1] = Shape1331;

Billboard Billboard1332 = createNode("Billboard");
Shape Shape1333 = createNode("Shape");
Text Text1334 = createNode("Text");
Text1334.string = new MFString(new java.lang.String["74"]);
FontStyle FontStyle1335 = createNode("FontStyle");
FontStyle1335.size = 0.035;
Text1334.fontStyle = FontStyle1335;

Shape1333.geometry = Text1334;

Billboard1332.children = new MFNode();

Billboard1332.children[0] = Shape1333;

HAnimSite1329.children[2] = Billboard1332;

HAnimSegment1307.children[4] = HAnimSite1329;

HAnimSite HAnimSite1336 = createNode("HAnimSite");
HAnimSite1336.name = "r_radiale";
HAnimSite1336.DEF = "hanim_r_radiale";
HAnimSite1336.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1337 = createNode("TouchSensor");
TouchSensor1337.description = "HAnimSite 72 r_radiale";
HAnimSite1336.children = new MFNode();

HAnimSite1336.children[0] = TouchSensor1337;

Shape Shape1338 = createNode("Shape");
Shape1338.USE = "HAnimSiteShape";
HAnimSite1336.children[1] = Shape1338;

Billboard Billboard1339 = createNode("Billboard");
Shape Shape1340 = createNode("Shape");
Text Text1341 = createNode("Text");
Text1341.string = new MFString(new java.lang.String["72"]);
FontStyle FontStyle1342 = createNode("FontStyle");
FontStyle1342.size = 0.035;
Text1341.fontStyle = FontStyle1342;

Shape1340.geometry = Text1341;

Billboard1339.children = new MFNode();

Billboard1339.children[0] = Shape1340;

HAnimSite1336.children[2] = Billboard1339;

HAnimSegment1307.children[5] = HAnimSite1336;

HAnimJoint1306.children = new MFNode();

HAnimJoint1306.children[0] = HAnimSegment1307;

HAnimJoint HAnimJoint1343 = createNode("HAnimJoint");
HAnimJoint1343.name = "r_radiocarpal";
HAnimJoint1343.DEF = "hanim_r_radiocarpal";
HAnimJoint1343.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint1343.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1343.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1344 = createNode("HAnimSegment");
HAnimSegment1344.name = "r_carpal";
HAnimSegment1344.DEF = "hanim_r_carpal";
Transform Transform1345 = createNode("Transform");
Transform1345.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1345.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1345.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
Transform Transform1346 = createNode("Transform");
Transform1346.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
Shape Shape1347 = createNode("Shape");
Shape1347.USE = "HAnimJointShape";
Transform1346.child = new undefined();

Transform1346.child[0] = Shape1347;

Transform1345.children = new MFNode();

Transform1345.children[0] = Transform1346;

HAnimSegment1344.children = new MFNode();

HAnimSegment1344.children[0] = Transform1345;

Shape Shape1348 = createNode("Shape");
LineSet LineSet1349 = createNode("LineSet");
LineSet1349.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1350 = createNode("Coordinate");
Coordinate1350.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet1349.coord = Coordinate1350;

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1351 = createNode("ColorRGBA");
ColorRGBA1351.USE = "HAnimSegmentLineColorRGBA";
LineSet1349.color = ColorRGBA1351;

Shape1348.geometry = LineSet1349;

HAnimSegment1344.children[1] = Shape1348;

HAnimSite HAnimSite1352 = createNode("HAnimSite");
HAnimSite1352.name = "r_ulnar_styloid";
HAnimSite1352.DEF = "hanim_r_ulnar_styloid";
HAnimSite1352.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1353 = createNode("TouchSensor");
TouchSensor1353.description = "HAnimSite 73 r_ulnar_styloid";
HAnimSite1352.children = new MFNode();

HAnimSite1352.children[0] = TouchSensor1353;

Shape Shape1354 = createNode("Shape");
Shape1354.USE = "HAnimSiteShape";
HAnimSite1352.children[1] = Shape1354;

Billboard Billboard1355 = createNode("Billboard");
Shape Shape1356 = createNode("Shape");
Text Text1357 = createNode("Text");
Text1357.string = new MFString(new java.lang.String["73"]);
FontStyle FontStyle1358 = createNode("FontStyle");
FontStyle1358.size = 0.035;
Text1357.fontStyle = FontStyle1358;

Shape1356.geometry = Text1357;

Billboard1355.children = new MFNode();

Billboard1355.children[0] = Shape1356;

HAnimSite1352.children[2] = Billboard1355;

HAnimSegment1344.children[2] = HAnimSite1352;

Shape Shape1359 = createNode("Shape");
LineSet LineSet1360 = createNode("LineSet");
LineSet1360.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1361 = createNode("Coordinate");
Coordinate1361.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet1360.coord = Coordinate1361;

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1362 = createNode("ColorRGBA");
ColorRGBA1362.USE = "HAnimSegmentLineColorRGBA";
LineSet1360.color = ColorRGBA1362;

Shape1359.geometry = LineSet1360;

HAnimSegment1344.children[3] = Shape1359;

Shape Shape1363 = createNode("Shape");
LineSet LineSet1364 = createNode("LineSet");
LineSet1364.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1365 = createNode("Coordinate");
Coordinate1365.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet1364.coord = Coordinate1365;

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1366 = createNode("ColorRGBA");
ColorRGBA1366.USE = "HAnimSegmentLineColorRGBA";
LineSet1364.color = ColorRGBA1366;

Shape1363.geometry = LineSet1364;

HAnimSegment1344.children[4] = Shape1363;

Shape Shape1367 = createNode("Shape");
LineSet LineSet1368 = createNode("LineSet");
LineSet1368.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1369 = createNode("Coordinate");
Coordinate1369.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet1368.coord = Coordinate1369;

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1370 = createNode("ColorRGBA");
ColorRGBA1370.USE = "HAnimSegmentLineColorRGBA";
LineSet1368.color = ColorRGBA1370;

Shape1367.geometry = LineSet1368;

HAnimSegment1344.children[5] = Shape1367;

Shape Shape1371 = createNode("Shape");
LineSet LineSet1372 = createNode("LineSet");
LineSet1372.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1373 = createNode("Coordinate");
Coordinate1373.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet1372.coord = Coordinate1373;

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1374 = createNode("ColorRGBA");
ColorRGBA1374.USE = "HAnimSegmentLineColorRGBA";
LineSet1372.color = ColorRGBA1374;

Shape1371.geometry = LineSet1372;

HAnimSegment1344.children[6] = Shape1371;

HAnimJoint1343.children = new MFNode();

HAnimJoint1343.children[0] = HAnimSegment1344;

HAnimJoint HAnimJoint1375 = createNode("HAnimJoint");
HAnimJoint1375.name = "r_carpometacarpal_1";
HAnimJoint1375.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1375.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1375.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1375.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1376 = createNode("HAnimSegment");
HAnimSegment1376.name = "r_metacarpal_1";
HAnimSegment1376.DEF = "hanim_r_metacarpal_1";
Transform Transform1377 = createNode("Transform");
Transform1377.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
Transform Transform1378 = createNode("Transform");
//Empty Transform
Shape Shape1379 = createNode("Shape");
Shape1379.USE = "HAnimJointShape";
Transform1378.child = new undefined();

Transform1378.child[0] = Shape1379;

Transform1377.children = new MFNode();

Transform1377.children[0] = Transform1378;

HAnimSegment1376.children = new MFNode();

HAnimSegment1376.children[0] = Transform1377;

Shape Shape1380 = createNode("Shape");
LineSet LineSet1381 = createNode("LineSet");
LineSet1381.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1382 = createNode("Coordinate");
Coordinate1382.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1381.coord = Coordinate1382;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1383 = createNode("ColorRGBA");
ColorRGBA1383.USE = "HAnimSegmentLineColorRGBA";
LineSet1381.color = ColorRGBA1383;

Shape1380.geometry = LineSet1381;

HAnimSegment1376.children[1] = Shape1380;

HAnimJoint1375.children = new MFNode();

HAnimJoint1375.children[0] = HAnimSegment1376;

HAnimJoint HAnimJoint1384 = createNode("HAnimJoint");
HAnimJoint1384.name = "r_metacarpophalangeal_1";
HAnimJoint1384.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1384.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1384.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1384.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1385 = createNode("HAnimSegment");
HAnimSegment1385.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1385.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform1386 = createNode("Transform");
Transform1386.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
Transform Transform1387 = createNode("Transform");
//Empty Transform
Shape Shape1388 = createNode("Shape");
Shape1388.USE = "HAnimJointShape";
Transform1387.child = new undefined();

Transform1387.child[0] = Shape1388;

Transform1386.children = new MFNode();

Transform1386.children[0] = Transform1387;

HAnimSegment1385.children = new MFNode();

HAnimSegment1385.children[0] = Transform1386;

Shape Shape1389 = createNode("Shape");
LineSet LineSet1390 = createNode("LineSet");
LineSet1390.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1391 = createNode("Coordinate");
Coordinate1391.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1390.coord = Coordinate1391;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1392 = createNode("ColorRGBA");
ColorRGBA1392.USE = "HAnimSegmentLineColorRGBA";
LineSet1390.color = ColorRGBA1392;

Shape1389.geometry = LineSet1390;

HAnimSegment1385.children[1] = Shape1389;

HAnimJoint1384.children = new MFNode();

HAnimJoint1384.children[0] = HAnimSegment1385;

HAnimJoint HAnimJoint1393 = createNode("HAnimJoint");
HAnimJoint1393.name = "r_carpal_interphalangeal_1";
HAnimJoint1393.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1393.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1393.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1393.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1384.children[1] = HAnimJoint1393;

HAnimJoint1375.children[1] = HAnimJoint1384;

HAnimJoint1343.children[1] = HAnimJoint1375;

HAnimJoint HAnimJoint1394 = createNode("HAnimJoint");
HAnimJoint1394.name = "r_carpometacarpal_2";
HAnimJoint1394.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1394.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1394.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1394.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1395 = createNode("HAnimSegment");
HAnimSegment1395.name = "r_metacarpal_2";
HAnimSegment1395.DEF = "hanim_r_metacarpal_2";
Transform Transform1396 = createNode("Transform");
Transform1396.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
Transform Transform1397 = createNode("Transform");
//Empty Transform
Shape Shape1398 = createNode("Shape");
Shape1398.USE = "HAnimJointShape";
Transform1397.child = new undefined();

Transform1397.child[0] = Shape1398;

Transform1396.children = new MFNode();

Transform1396.children[0] = Transform1397;

HAnimSegment1395.children = new MFNode();

HAnimSegment1395.children[0] = Transform1396;

Shape Shape1399 = createNode("Shape");
LineSet LineSet1400 = createNode("LineSet");
LineSet1400.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1401 = createNode("Coordinate");
Coordinate1401.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1400.coord = Coordinate1401;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1402 = createNode("ColorRGBA");
ColorRGBA1402.USE = "HAnimSegmentLineColorRGBA";
LineSet1400.color = ColorRGBA1402;

Shape1399.geometry = LineSet1400;

HAnimSegment1395.children[1] = Shape1399;

HAnimSite HAnimSite1403 = createNode("HAnimSite");
HAnimSite1403.name = "r_metacarpal_phalanx_2";
HAnimSite1403.DEF = "hanim_r_metacarpal_phalanx_2";
HAnimSite1403.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1404 = createNode("TouchSensor");
TouchSensor1404.description = "HAnimSite 78 r_metacarpal_phalanx_2";
HAnimSite1403.children = new MFNode();

HAnimSite1403.children[0] = TouchSensor1404;

Shape Shape1405 = createNode("Shape");
Shape1405.USE = "HAnimSiteShape";
HAnimSite1403.children[1] = Shape1405;

Billboard Billboard1406 = createNode("Billboard");
Shape Shape1407 = createNode("Shape");
Text Text1408 = createNode("Text");
Text1408.string = new MFString(new java.lang.String["78"]);
FontStyle FontStyle1409 = createNode("FontStyle");
FontStyle1409.size = 0.035;
Text1408.fontStyle = FontStyle1409;

Shape1407.geometry = Text1408;

Billboard1406.children = new MFNode();

Billboard1406.children[0] = Shape1407;

HAnimSite1403.children[2] = Billboard1406;

HAnimSegment1395.children[2] = HAnimSite1403;

HAnimJoint1394.children = new MFNode();

HAnimJoint1394.children[0] = HAnimSegment1395;

HAnimJoint HAnimJoint1410 = createNode("HAnimJoint");
HAnimJoint1410.name = "r_metacarpophalangeal_2";
HAnimJoint1410.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1410.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1410.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1410.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1411 = createNode("HAnimSegment");
HAnimSegment1411.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1411.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform1412 = createNode("Transform");
Transform1412.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
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
Coordinate1417.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1416.coord = Coordinate1417;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1418 = createNode("ColorRGBA");
ColorRGBA1418.USE = "HAnimSegmentLineColorRGBA";
LineSet1416.color = ColorRGBA1418;

Shape1415.geometry = LineSet1416;

HAnimSegment1411.children[1] = Shape1415;

HAnimJoint1410.children = new MFNode();

HAnimJoint1410.children[0] = HAnimSegment1411;

HAnimJoint HAnimJoint1419 = createNode("HAnimJoint");
HAnimJoint1419.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1419.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1419.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1419.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1419.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1420 = createNode("HAnimSegment");
HAnimSegment1420.name = "r_carpal_middle_phalanx_2";
HAnimSegment1420.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform1421 = createNode("Transform");
Transform1421.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
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
Coordinate1426.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1425.coord = Coordinate1426;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1427 = createNode("ColorRGBA");
ColorRGBA1427.USE = "HAnimSegmentLineColorRGBA";
LineSet1425.color = ColorRGBA1427;

Shape1424.geometry = LineSet1425;

HAnimSegment1420.children[1] = Shape1424;

HAnimJoint1419.children = new MFNode();

HAnimJoint1419.children[0] = HAnimSegment1420;

HAnimJoint HAnimJoint1428 = createNode("HAnimJoint");
HAnimJoint1428.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1428.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1428.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1428.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1428.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1419.children[1] = HAnimJoint1428;

HAnimJoint1410.children[1] = HAnimJoint1419;

HAnimJoint1394.children[1] = HAnimJoint1410;

HAnimJoint1343.children[2] = HAnimJoint1394;

HAnimJoint HAnimJoint1429 = createNode("HAnimJoint");
HAnimJoint1429.name = "r_carpometacarpal_3";
HAnimJoint1429.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1429.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1429.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1429.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1430 = createNode("HAnimSegment");
HAnimSegment1430.name = "r_metacarpal_3";
HAnimSegment1430.DEF = "hanim_r_metacarpal_3";
Transform Transform1431 = createNode("Transform");
Transform1431.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform1432 = createNode("Transform");
//Empty Transform
Shape Shape1433 = createNode("Shape");
Shape1433.USE = "HAnimJointShape";
Transform1432.child = new undefined();

Transform1432.child[0] = Shape1433;

Transform1431.children = new MFNode();

Transform1431.children[0] = Transform1432;

HAnimSegment1430.children = new MFNode();

HAnimSegment1430.children[0] = Transform1431;

Shape Shape1434 = createNode("Shape");
LineSet LineSet1435 = createNode("LineSet");
LineSet1435.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1436 = createNode("Coordinate");
Coordinate1436.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1435.coord = Coordinate1436;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1437 = createNode("ColorRGBA");
ColorRGBA1437.USE = "HAnimSegmentLineColorRGBA";
LineSet1435.color = ColorRGBA1437;

Shape1434.geometry = LineSet1435;

HAnimSegment1430.children[1] = Shape1434;

HAnimSite HAnimSite1438 = createNode("HAnimSite");
HAnimSite1438.name = "r_metacarpal_phalanx_3";
HAnimSite1438.DEF = "hanim_r_metacarpal_phalanx_3";
TouchSensor TouchSensor1439 = createNode("TouchSensor");
TouchSensor1439.description = "HAnimSite 79 r_metacarpal_phalanx_3";
HAnimSite1438.children = new MFNode();

HAnimSite1438.children[0] = TouchSensor1439;

Shape Shape1440 = createNode("Shape");
Shape1440.USE = "HAnimSiteShape";
HAnimSite1438.children[1] = Shape1440;

Billboard Billboard1441 = createNode("Billboard");
Shape Shape1442 = createNode("Shape");
Text Text1443 = createNode("Text");
Text1443.string = new MFString(new java.lang.String["79"]);
FontStyle FontStyle1444 = createNode("FontStyle");
FontStyle1444.size = 0.035;
Text1443.fontStyle = FontStyle1444;

Shape1442.geometry = Text1443;

Billboard1441.children = new MFNode();

Billboard1441.children[0] = Shape1442;

HAnimSite1438.children[2] = Billboard1441;

HAnimSegment1430.children[2] = HAnimSite1438;

HAnimJoint1429.children = new MFNode();

HAnimJoint1429.children[0] = HAnimSegment1430;

HAnimJoint HAnimJoint1445 = createNode("HAnimJoint");
HAnimJoint1445.name = "r_metacarpophalangeal_3";
HAnimJoint1445.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1445.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1445.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1445.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1446 = createNode("HAnimSegment");
HAnimSegment1446.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1446.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform1447 = createNode("Transform");
Transform1447.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
Transform Transform1448 = createNode("Transform");
//Empty Transform
Shape Shape1449 = createNode("Shape");
Shape1449.USE = "HAnimJointShape";
Transform1448.child = new undefined();

Transform1448.child[0] = Shape1449;

Transform1447.children = new MFNode();

Transform1447.children[0] = Transform1448;

HAnimSegment1446.children = new MFNode();

HAnimSegment1446.children[0] = Transform1447;

Shape Shape1450 = createNode("Shape");
LineSet LineSet1451 = createNode("LineSet");
LineSet1451.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1452 = createNode("Coordinate");
Coordinate1452.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1451.coord = Coordinate1452;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1453 = createNode("ColorRGBA");
ColorRGBA1453.USE = "HAnimSegmentLineColorRGBA";
LineSet1451.color = ColorRGBA1453;

Shape1450.geometry = LineSet1451;

HAnimSegment1446.children[1] = Shape1450;

HAnimJoint1445.children = new MFNode();

HAnimJoint1445.children[0] = HAnimSegment1446;

HAnimJoint HAnimJoint1454 = createNode("HAnimJoint");
HAnimJoint1454.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1454.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1454.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1454.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1454.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1455 = createNode("HAnimSegment");
HAnimSegment1455.name = "r_carpal_middle_phalanx_3";
HAnimSegment1455.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform1456 = createNode("Transform");
Transform1456.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
Transform Transform1457 = createNode("Transform");
//Empty Transform
Shape Shape1458 = createNode("Shape");
Shape1458.USE = "HAnimJointShape";
Transform1457.child = new undefined();

Transform1457.child[0] = Shape1458;

Transform1456.children = new MFNode();

Transform1456.children[0] = Transform1457;

HAnimSegment1455.children = new MFNode();

HAnimSegment1455.children[0] = Transform1456;

Shape Shape1459 = createNode("Shape");
LineSet LineSet1460 = createNode("LineSet");
LineSet1460.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1461 = createNode("Coordinate");
Coordinate1461.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1460.coord = Coordinate1461;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1462 = createNode("ColorRGBA");
ColorRGBA1462.USE = "HAnimSegmentLineColorRGBA";
LineSet1460.color = ColorRGBA1462;

Shape1459.geometry = LineSet1460;

HAnimSegment1455.children[1] = Shape1459;

HAnimJoint1454.children = new MFNode();

HAnimJoint1454.children[0] = HAnimSegment1455;

HAnimJoint HAnimJoint1463 = createNode("HAnimJoint");
HAnimJoint1463.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1463.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1463.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1463.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1463.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1454.children[1] = HAnimJoint1463;

HAnimJoint1445.children[1] = HAnimJoint1454;

HAnimJoint1429.children[1] = HAnimJoint1445;

HAnimJoint1343.children[3] = HAnimJoint1429;

HAnimJoint HAnimJoint1464 = createNode("HAnimJoint");
HAnimJoint1464.name = "r_carpometacarpal_4";
HAnimJoint1464.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1464.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1464.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1464.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1465 = createNode("HAnimSegment");
HAnimSegment1465.name = "r_metacarpal_4";
HAnimSegment1465.DEF = "hanim_r_metacarpal_4";
Transform Transform1466 = createNode("Transform");
Transform1466.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
Transform Transform1467 = createNode("Transform");
//Empty Transform
Shape Shape1468 = createNode("Shape");
Shape1468.USE = "HAnimJointShape";
Transform1467.child = new undefined();

Transform1467.child[0] = Shape1468;

Transform1466.children = new MFNode();

Transform1466.children[0] = Transform1467;

HAnimSegment1465.children = new MFNode();

HAnimSegment1465.children[0] = Transform1466;

Shape Shape1469 = createNode("Shape");
LineSet LineSet1470 = createNode("LineSet");
LineSet1470.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1471 = createNode("Coordinate");
Coordinate1471.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1470.coord = Coordinate1471;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1472 = createNode("ColorRGBA");
ColorRGBA1472.USE = "HAnimSegmentLineColorRGBA";
LineSet1470.color = ColorRGBA1472;

Shape1469.geometry = LineSet1470;

HAnimSegment1465.children[1] = Shape1469;

HAnimJoint1464.children = new MFNode();

HAnimJoint1464.children[0] = HAnimSegment1465;

HAnimJoint HAnimJoint1473 = createNode("HAnimJoint");
HAnimJoint1473.name = "r_metacarpophalangeal_4";
HAnimJoint1473.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1473.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1473.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1473.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1474 = createNode("HAnimSegment");
HAnimSegment1474.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1474.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform1475 = createNode("Transform");
Transform1475.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform1476 = createNode("Transform");
//Empty Transform
Shape Shape1477 = createNode("Shape");
Shape1477.USE = "HAnimJointShape";
Transform1476.child = new undefined();

Transform1476.child[0] = Shape1477;

Transform1475.children = new MFNode();

Transform1475.children[0] = Transform1476;

HAnimSegment1474.children = new MFNode();

HAnimSegment1474.children[0] = Transform1475;

Shape Shape1478 = createNode("Shape");
LineSet LineSet1479 = createNode("LineSet");
LineSet1479.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1480 = createNode("Coordinate");
Coordinate1480.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1479.coord = Coordinate1480;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1481 = createNode("ColorRGBA");
ColorRGBA1481.USE = "HAnimSegmentLineColorRGBA";
LineSet1479.color = ColorRGBA1481;

Shape1478.geometry = LineSet1479;

HAnimSegment1474.children[1] = Shape1478;

HAnimJoint1473.children = new MFNode();

HAnimJoint1473.children[0] = HAnimSegment1474;

HAnimJoint HAnimJoint1482 = createNode("HAnimJoint");
HAnimJoint1482.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1482.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1482.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1482.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1482.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1483 = createNode("HAnimSegment");
HAnimSegment1483.name = "r_carpal_middle_phalanx_4";
HAnimSegment1483.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform1484 = createNode("Transform");
Transform1484.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform1485 = createNode("Transform");
//Empty Transform
Shape Shape1486 = createNode("Shape");
Shape1486.USE = "HAnimJointShape";
Transform1485.child = new undefined();

Transform1485.child[0] = Shape1486;

Transform1484.children = new MFNode();

Transform1484.children[0] = Transform1485;

HAnimSegment1483.children = new MFNode();

HAnimSegment1483.children[0] = Transform1484;

Shape Shape1487 = createNode("Shape");
LineSet LineSet1488 = createNode("LineSet");
LineSet1488.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1489 = createNode("Coordinate");
Coordinate1489.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1488.coord = Coordinate1489;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1490 = createNode("ColorRGBA");
ColorRGBA1490.USE = "HAnimSegmentLineColorRGBA";
LineSet1488.color = ColorRGBA1490;

Shape1487.geometry = LineSet1488;

HAnimSegment1483.children[1] = Shape1487;

HAnimJoint1482.children = new MFNode();

HAnimJoint1482.children[0] = HAnimSegment1483;

HAnimJoint HAnimJoint1491 = createNode("HAnimJoint");
HAnimJoint1491.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1491.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1491.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1491.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1491.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1482.children[1] = HAnimJoint1491;

HAnimJoint1473.children[1] = HAnimJoint1482;

HAnimJoint1464.children[1] = HAnimJoint1473;

HAnimJoint1343.children[4] = HAnimJoint1464;

HAnimJoint HAnimJoint1492 = createNode("HAnimJoint");
HAnimJoint1492.name = "r_carpometacarpal_5";
HAnimJoint1492.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1492.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1492.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1492.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1493 = createNode("HAnimSegment");
HAnimSegment1493.name = "r_metacarpal_5";
HAnimSegment1493.DEF = "hanim_r_metacarpal_5";
Transform Transform1494 = createNode("Transform");
Transform1494.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
Transform Transform1495 = createNode("Transform");
//Empty Transform
Shape Shape1496 = createNode("Shape");
Shape1496.USE = "HAnimJointShape";
Transform1495.child = new undefined();

Transform1495.child[0] = Shape1496;

Transform1494.children = new MFNode();

Transform1494.children[0] = Transform1495;

HAnimSegment1493.children = new MFNode();

HAnimSegment1493.children[0] = Transform1494;

Shape Shape1497 = createNode("Shape");
LineSet LineSet1498 = createNode("LineSet");
LineSet1498.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1499 = createNode("Coordinate");
Coordinate1499.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1498.coord = Coordinate1499;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1500 = createNode("ColorRGBA");
ColorRGBA1500.USE = "HAnimSegmentLineColorRGBA";
LineSet1498.color = ColorRGBA1500;

Shape1497.geometry = LineSet1498;

HAnimSegment1493.children[1] = Shape1497;

HAnimSite HAnimSite1501 = createNode("HAnimSite");
HAnimSite1501.name = "r_metacarpal_phalanx_5";
HAnimSite1501.DEF = "hanim_r_metacarpal_phalanx_5";
HAnimSite1501.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1502 = createNode("TouchSensor");
TouchSensor1502.description = "HAnimSite 80 r_metacarpal_phalanx_5";
HAnimSite1501.children = new MFNode();

HAnimSite1501.children[0] = TouchSensor1502;

Shape Shape1503 = createNode("Shape");
Shape1503.USE = "HAnimSiteShape";
HAnimSite1501.children[1] = Shape1503;

Billboard Billboard1504 = createNode("Billboard");
Shape Shape1505 = createNode("Shape");
Text Text1506 = createNode("Text");
Text1506.string = new MFString(new java.lang.String["80"]);
FontStyle FontStyle1507 = createNode("FontStyle");
FontStyle1507.size = 0.035;
Text1506.fontStyle = FontStyle1507;

Shape1505.geometry = Text1506;

Billboard1504.children = new MFNode();

Billboard1504.children[0] = Shape1505;

HAnimSite1501.children[2] = Billboard1504;

HAnimSegment1493.children[2] = HAnimSite1501;

HAnimJoint1492.children = new MFNode();

HAnimJoint1492.children[0] = HAnimSegment1493;

HAnimJoint HAnimJoint1508 = createNode("HAnimJoint");
HAnimJoint1508.name = "r_metacarpophalangeal_5";
HAnimJoint1508.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1508.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1508.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1508.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1509 = createNode("HAnimSegment");
HAnimSegment1509.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1509.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform1510 = createNode("Transform");
Transform1510.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
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
Coordinate1515.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1514.coord = Coordinate1515;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1516 = createNode("ColorRGBA");
ColorRGBA1516.USE = "HAnimSegmentLineColorRGBA";
LineSet1514.color = ColorRGBA1516;

Shape1513.geometry = LineSet1514;

HAnimSegment1509.children[1] = Shape1513;

HAnimJoint1508.children = new MFNode();

HAnimJoint1508.children[0] = HAnimSegment1509;

HAnimJoint HAnimJoint1517 = createNode("HAnimJoint");
HAnimJoint1517.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1517.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1517.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1517.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1517.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1518 = createNode("HAnimSegment");
HAnimSegment1518.name = "r_carpal_middle_phalanx_5";
HAnimSegment1518.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform1519 = createNode("Transform");
Transform1519.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
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
Coordinate1524.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1523.coord = Coordinate1524;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1525 = createNode("ColorRGBA");
ColorRGBA1525.USE = "HAnimSegmentLineColorRGBA";
LineSet1523.color = ColorRGBA1525;

Shape1522.geometry = LineSet1523;

HAnimSegment1518.children[1] = Shape1522;

HAnimJoint1517.children = new MFNode();

HAnimJoint1517.children[0] = HAnimSegment1518;

HAnimJoint HAnimJoint1526 = createNode("HAnimJoint");
HAnimJoint1526.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1526.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1526.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1526.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1526.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1517.children[1] = HAnimJoint1526;

HAnimJoint1508.children[1] = HAnimJoint1517;

HAnimJoint1492.children[1] = HAnimJoint1508;

HAnimJoint1343.children[5] = HAnimJoint1492;

HAnimJoint1306.children[1] = HAnimJoint1343;

HAnimJoint1283.children[1] = HAnimJoint1306;

HAnimJoint1274.children[1] = HAnimJoint1283;

HAnimJoint1230.children[1] = HAnimJoint1274;

HAnimJoint701.children[3] = HAnimJoint1230;

HAnimJoint692.children[1] = HAnimJoint701;

HAnimJoint683.children[1] = HAnimJoint692;

HAnimJoint674.children[1] = HAnimJoint683;

HAnimJoint658.children[1] = HAnimJoint674;

HAnimJoint621.children[1] = HAnimJoint658;

HAnimJoint612.children[1] = HAnimJoint621;

HAnimJoint603.children[1] = HAnimJoint612;

HAnimJoint580.children[1] = HAnimJoint603;

HAnimJoint564.children[1] = HAnimJoint580;

HAnimJoint555.children[1] = HAnimJoint564;

HAnimJoint546.children[1] = HAnimJoint555;

HAnimJoint537.children[1] = HAnimJoint546;

HAnimJoint507.children[1] = HAnimJoint537;

HAnimJoint498.children[1] = HAnimJoint507;

HAnimJoint489.children[1] = HAnimJoint498;

HAnimJoint459.children[1] = HAnimJoint489;

HAnimJoint47.children[2] = HAnimJoint459;

HAnimHumanoid38.joints[1] = HAnimJoint47;

HAnimJoint HAnimJoint1527 = createNode("HAnimJoint");
HAnimJoint1527.USE = "hanim_humanoid_root";
HAnimHumanoid38.joints[2] = HAnimJoint1527;

HAnimJoint HAnimJoint1528 = createNode("HAnimJoint");
HAnimJoint1528.USE = "hanim_sacroiliac";
HAnimHumanoid38.joints[3] = HAnimJoint1528;

HAnimJoint HAnimJoint1529 = createNode("HAnimJoint");
HAnimJoint1529.USE = "hanim_l_hip";
HAnimHumanoid38.joints[4] = HAnimJoint1529;

HAnimJoint HAnimJoint1530 = createNode("HAnimJoint");
HAnimJoint1530.USE = "hanim_l_knee";
HAnimHumanoid38.joints[5] = HAnimJoint1530;

HAnimJoint HAnimJoint1531 = createNode("HAnimJoint");
HAnimJoint1531.USE = "hanim_l_talocrural";
HAnimHumanoid38.joints[6] = HAnimJoint1531;

HAnimJoint HAnimJoint1532 = createNode("HAnimJoint");
HAnimJoint1532.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid38.joints[7] = HAnimJoint1532;

HAnimJoint HAnimJoint1533 = createNode("HAnimJoint");
HAnimJoint1533.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid38.joints[8] = HAnimJoint1533;

HAnimJoint HAnimJoint1534 = createNode("HAnimJoint");
HAnimJoint1534.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid38.joints[9] = HAnimJoint1534;

HAnimJoint HAnimJoint1535 = createNode("HAnimJoint");
HAnimJoint1535.USE = "hanim_r_hip";
HAnimHumanoid38.joints[10] = HAnimJoint1535;

HAnimJoint HAnimJoint1536 = createNode("HAnimJoint");
HAnimJoint1536.USE = "hanim_r_knee";
HAnimHumanoid38.joints[11] = HAnimJoint1536;

HAnimJoint HAnimJoint1537 = createNode("HAnimJoint");
HAnimJoint1537.USE = "hanim_r_talocrural";
HAnimHumanoid38.joints[12] = HAnimJoint1537;

HAnimJoint HAnimJoint1538 = createNode("HAnimJoint");
HAnimJoint1538.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid38.joints[13] = HAnimJoint1538;

HAnimJoint HAnimJoint1539 = createNode("HAnimJoint");
HAnimJoint1539.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid38.joints[14] = HAnimJoint1539;

HAnimJoint HAnimJoint1540 = createNode("HAnimJoint");
HAnimJoint1540.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid38.joints[15] = HAnimJoint1540;

HAnimJoint HAnimJoint1541 = createNode("HAnimJoint");
HAnimJoint1541.USE = "hanim_vl5";
HAnimHumanoid38.joints[16] = HAnimJoint1541;

HAnimJoint HAnimJoint1542 = createNode("HAnimJoint");
HAnimJoint1542.USE = "hanim_vl4";
HAnimHumanoid38.joints[17] = HAnimJoint1542;

HAnimJoint HAnimJoint1543 = createNode("HAnimJoint");
HAnimJoint1543.USE = "hanim_vl3";
HAnimHumanoid38.joints[18] = HAnimJoint1543;

HAnimJoint HAnimJoint1544 = createNode("HAnimJoint");
HAnimJoint1544.USE = "hanim_vl2";
HAnimHumanoid38.joints[19] = HAnimJoint1544;

HAnimJoint HAnimJoint1545 = createNode("HAnimJoint");
HAnimJoint1545.USE = "hanim_vl1";
HAnimHumanoid38.joints[20] = HAnimJoint1545;

HAnimJoint HAnimJoint1546 = createNode("HAnimJoint");
HAnimJoint1546.USE = "hanim_vt12";
HAnimHumanoid38.joints[21] = HAnimJoint1546;

HAnimJoint HAnimJoint1547 = createNode("HAnimJoint");
HAnimJoint1547.USE = "hanim_vt11";
HAnimHumanoid38.joints[22] = HAnimJoint1547;

HAnimJoint HAnimJoint1548 = createNode("HAnimJoint");
HAnimJoint1548.USE = "hanim_vt10";
HAnimHumanoid38.joints[23] = HAnimJoint1548;

HAnimJoint HAnimJoint1549 = createNode("HAnimJoint");
HAnimJoint1549.USE = "hanim_vt9";
HAnimHumanoid38.joints[24] = HAnimJoint1549;

HAnimJoint HAnimJoint1550 = createNode("HAnimJoint");
HAnimJoint1550.USE = "hanim_vt8";
HAnimHumanoid38.joints[25] = HAnimJoint1550;

HAnimJoint HAnimJoint1551 = createNode("HAnimJoint");
HAnimJoint1551.USE = "hanim_vt7";
HAnimHumanoid38.joints[26] = HAnimJoint1551;

HAnimJoint HAnimJoint1552 = createNode("HAnimJoint");
HAnimJoint1552.USE = "hanim_vt6";
HAnimHumanoid38.joints[27] = HAnimJoint1552;

HAnimJoint HAnimJoint1553 = createNode("HAnimJoint");
HAnimJoint1553.USE = "hanim_vt5";
HAnimHumanoid38.joints[28] = HAnimJoint1553;

HAnimJoint HAnimJoint1554 = createNode("HAnimJoint");
HAnimJoint1554.USE = "hanim_vt4";
HAnimHumanoid38.joints[29] = HAnimJoint1554;

HAnimJoint HAnimJoint1555 = createNode("HAnimJoint");
HAnimJoint1555.USE = "hanim_vt3";
HAnimHumanoid38.joints[30] = HAnimJoint1555;

HAnimJoint HAnimJoint1556 = createNode("HAnimJoint");
HAnimJoint1556.USE = "hanim_vt2";
HAnimHumanoid38.joints[31] = HAnimJoint1556;

HAnimJoint HAnimJoint1557 = createNode("HAnimJoint");
HAnimJoint1557.USE = "hanim_vt1";
HAnimHumanoid38.joints[32] = HAnimJoint1557;

HAnimJoint HAnimJoint1558 = createNode("HAnimJoint");
HAnimJoint1558.USE = "hanim_vc7";
HAnimHumanoid38.joints[33] = HAnimJoint1558;

HAnimJoint HAnimJoint1559 = createNode("HAnimJoint");
HAnimJoint1559.USE = "hanim_vc6";
HAnimHumanoid38.joints[34] = HAnimJoint1559;

HAnimJoint HAnimJoint1560 = createNode("HAnimJoint");
HAnimJoint1560.USE = "hanim_vc5";
HAnimHumanoid38.joints[35] = HAnimJoint1560;

HAnimJoint HAnimJoint1561 = createNode("HAnimJoint");
HAnimJoint1561.USE = "hanim_vc4";
HAnimHumanoid38.joints[36] = HAnimJoint1561;

HAnimJoint HAnimJoint1562 = createNode("HAnimJoint");
HAnimJoint1562.USE = "hanim_vc3";
HAnimHumanoid38.joints[37] = HAnimJoint1562;

HAnimJoint HAnimJoint1563 = createNode("HAnimJoint");
HAnimJoint1563.USE = "hanim_vc2";
HAnimHumanoid38.joints[38] = HAnimJoint1563;

HAnimJoint HAnimJoint1564 = createNode("HAnimJoint");
HAnimJoint1564.USE = "hanim_vc1";
HAnimHumanoid38.joints[39] = HAnimJoint1564;

HAnimJoint HAnimJoint1565 = createNode("HAnimJoint");
HAnimJoint1565.USE = "hanim_skullbase";
HAnimHumanoid38.joints[40] = HAnimJoint1565;

HAnimJoint HAnimJoint1566 = createNode("HAnimJoint");
HAnimJoint1566.USE = "hanim_l_eyelid_joint";
HAnimHumanoid38.joints[41] = HAnimJoint1566;

HAnimJoint HAnimJoint1567 = createNode("HAnimJoint");
HAnimJoint1567.USE = "hanim_r_eyelid_joint";
HAnimHumanoid38.joints[42] = HAnimJoint1567;

HAnimJoint HAnimJoint1568 = createNode("HAnimJoint");
HAnimJoint1568.USE = "hanim_l_eyeball_joint";
HAnimHumanoid38.joints[43] = HAnimJoint1568;

HAnimJoint HAnimJoint1569 = createNode("HAnimJoint");
HAnimJoint1569.USE = "hanim_r_eyeball_joint";
HAnimHumanoid38.joints[44] = HAnimJoint1569;

HAnimJoint HAnimJoint1570 = createNode("HAnimJoint");
HAnimJoint1570.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid38.joints[45] = HAnimJoint1570;

HAnimJoint HAnimJoint1571 = createNode("HAnimJoint");
HAnimJoint1571.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid38.joints[46] = HAnimJoint1571;

HAnimJoint HAnimJoint1572 = createNode("HAnimJoint");
HAnimJoint1572.USE = "hanim_temporomandibular";
HAnimHumanoid38.joints[47] = HAnimJoint1572;

HAnimJoint HAnimJoint1573 = createNode("HAnimJoint");
HAnimJoint1573.USE = "hanim_l_sternoclavicular";
HAnimHumanoid38.joints[48] = HAnimJoint1573;

HAnimJoint HAnimJoint1574 = createNode("HAnimJoint");
HAnimJoint1574.USE = "hanim_l_acromioclavicular";
HAnimHumanoid38.joints[49] = HAnimJoint1574;

HAnimJoint HAnimJoint1575 = createNode("HAnimJoint");
HAnimJoint1575.USE = "hanim_l_shoulder";
HAnimHumanoid38.joints[50] = HAnimJoint1575;

HAnimJoint HAnimJoint1576 = createNode("HAnimJoint");
HAnimJoint1576.USE = "hanim_l_elbow";
HAnimHumanoid38.joints[51] = HAnimJoint1576;

HAnimJoint HAnimJoint1577 = createNode("HAnimJoint");
HAnimJoint1577.USE = "hanim_l_radiocarpal";
HAnimHumanoid38.joints[52] = HAnimJoint1577;

HAnimJoint HAnimJoint1578 = createNode("HAnimJoint");
HAnimJoint1578.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid38.joints[53] = HAnimJoint1578;

HAnimJoint HAnimJoint1579 = createNode("HAnimJoint");
HAnimJoint1579.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid38.joints[54] = HAnimJoint1579;

HAnimJoint HAnimJoint1580 = createNode("HAnimJoint");
HAnimJoint1580.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid38.joints[55] = HAnimJoint1580;

HAnimJoint HAnimJoint1581 = createNode("HAnimJoint");
HAnimJoint1581.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid38.joints[56] = HAnimJoint1581;

HAnimJoint HAnimJoint1582 = createNode("HAnimJoint");
HAnimJoint1582.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid38.joints[57] = HAnimJoint1582;

HAnimJoint HAnimJoint1583 = createNode("HAnimJoint");
HAnimJoint1583.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[58] = HAnimJoint1583;

HAnimJoint HAnimJoint1584 = createNode("HAnimJoint");
HAnimJoint1584.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid38.joints[59] = HAnimJoint1584;

HAnimJoint HAnimJoint1585 = createNode("HAnimJoint");
HAnimJoint1585.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid38.joints[60] = HAnimJoint1585;

HAnimJoint HAnimJoint1586 = createNode("HAnimJoint");
HAnimJoint1586.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid38.joints[61] = HAnimJoint1586;

HAnimJoint HAnimJoint1587 = createNode("HAnimJoint");
HAnimJoint1587.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[62] = HAnimJoint1587;

HAnimJoint HAnimJoint1588 = createNode("HAnimJoint");
HAnimJoint1588.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid38.joints[63] = HAnimJoint1588;

HAnimJoint HAnimJoint1589 = createNode("HAnimJoint");
HAnimJoint1589.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid38.joints[64] = HAnimJoint1589;

HAnimJoint HAnimJoint1590 = createNode("HAnimJoint");
HAnimJoint1590.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid38.joints[65] = HAnimJoint1590;

HAnimJoint HAnimJoint1591 = createNode("HAnimJoint");
HAnimJoint1591.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[66] = HAnimJoint1591;

HAnimJoint HAnimJoint1592 = createNode("HAnimJoint");
HAnimJoint1592.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid38.joints[67] = HAnimJoint1592;

HAnimJoint HAnimJoint1593 = createNode("HAnimJoint");
HAnimJoint1593.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid38.joints[68] = HAnimJoint1593;

HAnimJoint HAnimJoint1594 = createNode("HAnimJoint");
HAnimJoint1594.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid38.joints[69] = HAnimJoint1594;

HAnimJoint HAnimJoint1595 = createNode("HAnimJoint");
HAnimJoint1595.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[70] = HAnimJoint1595;

HAnimJoint HAnimJoint1596 = createNode("HAnimJoint");
HAnimJoint1596.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid38.joints[71] = HAnimJoint1596;

HAnimJoint HAnimJoint1597 = createNode("HAnimJoint");
HAnimJoint1597.USE = "hanim_r_sternoclavicular";
HAnimHumanoid38.joints[72] = HAnimJoint1597;

HAnimJoint HAnimJoint1598 = createNode("HAnimJoint");
HAnimJoint1598.USE = "hanim_r_acromioclavicular";
HAnimHumanoid38.joints[73] = HAnimJoint1598;

HAnimJoint HAnimJoint1599 = createNode("HAnimJoint");
HAnimJoint1599.USE = "hanim_r_shoulder";
HAnimHumanoid38.joints[74] = HAnimJoint1599;

HAnimJoint HAnimJoint1600 = createNode("HAnimJoint");
HAnimJoint1600.USE = "hanim_r_elbow";
HAnimHumanoid38.joints[75] = HAnimJoint1600;

HAnimJoint HAnimJoint1601 = createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_r_radiocarpal";
HAnimHumanoid38.joints[76] = HAnimJoint1601;

HAnimJoint HAnimJoint1602 = createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid38.joints[77] = HAnimJoint1602;

HAnimJoint HAnimJoint1603 = createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid38.joints[78] = HAnimJoint1603;

HAnimJoint HAnimJoint1604 = createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid38.joints[79] = HAnimJoint1604;

HAnimJoint HAnimJoint1605 = createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid38.joints[80] = HAnimJoint1605;

HAnimJoint HAnimJoint1606 = createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid38.joints[81] = HAnimJoint1606;

HAnimJoint HAnimJoint1607 = createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[82] = HAnimJoint1607;

HAnimJoint HAnimJoint1608 = createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid38.joints[83] = HAnimJoint1608;

HAnimJoint HAnimJoint1609 = createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid38.joints[84] = HAnimJoint1609;

HAnimJoint HAnimJoint1610 = createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid38.joints[85] = HAnimJoint1610;

HAnimJoint HAnimJoint1611 = createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[86] = HAnimJoint1611;

HAnimJoint HAnimJoint1612 = createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid38.joints[87] = HAnimJoint1612;

HAnimJoint HAnimJoint1613 = createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid38.joints[88] = HAnimJoint1613;

HAnimJoint HAnimJoint1614 = createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid38.joints[89] = HAnimJoint1614;

HAnimJoint HAnimJoint1615 = createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[90] = HAnimJoint1615;

HAnimJoint HAnimJoint1616 = createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid38.joints[91] = HAnimJoint1616;

HAnimJoint HAnimJoint1617 = createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid38.joints[92] = HAnimJoint1617;

HAnimJoint HAnimJoint1618 = createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid38.joints[93] = HAnimJoint1618;

HAnimJoint HAnimJoint1619 = createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[94] = HAnimJoint1619;

HAnimJoint HAnimJoint1620 = createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid38.joints[95] = HAnimJoint1620;

children[4] = HAnimHumanoid38;

}
