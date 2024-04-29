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
meta3.content = "JohnBoy.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d";
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
Coordinate466.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796]);
LineSet465.coord = Coordinate466;

//from vl5 to vl3 vertices 2
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
HAnimJoint489.name = "vl3";
HAnimJoint489.DEF = "hanim_vl3";
HAnimJoint489.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment490 = createNode("HAnimSegment");
HAnimSegment490.name = "l3";
HAnimSegment490.DEF = "hanim_l3";
Transform Transform491 = createNode("Transform");
Transform491.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
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
Coordinate496.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805]);
LineSet495.coord = Coordinate496;

//from vl3 to vl1 vertices 2
ColorRGBA ColorRGBA497 = createNode("ColorRGBA");
ColorRGBA497.USE = "HAnimSegmentLineColorRGBA";
LineSet495.color = ColorRGBA497;

Shape494.geometry = LineSet495;

HAnimSegment490.children[1] = Shape494;

HAnimSite HAnimSite498 = createNode("HAnimSite");
HAnimSite498.name = "l_rib10";
HAnimSite498.DEF = "hanim_l_rib10";
HAnimSite498.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor499 = createNode("TouchSensor");
TouchSensor499.description = "HAnimSite 28 l_rib10";
HAnimSite498.children = new MFNode();

HAnimSite498.children[0] = TouchSensor499;

Shape Shape500 = createNode("Shape");
Shape500.USE = "HAnimSiteShape";
HAnimSite498.children[1] = Shape500;

Billboard Billboard501 = createNode("Billboard");
Shape Shape502 = createNode("Shape");
Text Text503 = createNode("Text");
Text503.string = new MFString(new java.lang.String["28"]);
FontStyle FontStyle504 = createNode("FontStyle");
FontStyle504.size = 0.035;
Text503.fontStyle = FontStyle504;

Shape502.geometry = Text503;

Billboard501.children = new MFNode();

Billboard501.children[0] = Shape502;

HAnimSite498.children[2] = Billboard501;

HAnimSegment490.children[2] = HAnimSite498;

HAnimSite HAnimSite505 = createNode("HAnimSite");
HAnimSite505.name = "r_rib10";
HAnimSite505.DEF = "hanim_r_rib10";
HAnimSite505.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor506 = createNode("TouchSensor");
TouchSensor506.description = "HAnimSite 30 r_rib10";
HAnimSite505.children = new MFNode();

HAnimSite505.children[0] = TouchSensor506;

Shape Shape507 = createNode("Shape");
Shape507.USE = "HAnimSiteShape";
HAnimSite505.children[1] = Shape507;

Billboard Billboard508 = createNode("Billboard");
Shape Shape509 = createNode("Shape");
Text Text510 = createNode("Text");
Text510.string = new MFString(new java.lang.String["30"]);
FontStyle FontStyle511 = createNode("FontStyle");
FontStyle511.size = 0.035;
Text510.fontStyle = FontStyle511;

Shape509.geometry = Text510;

Billboard508.children = new MFNode();

Billboard508.children[0] = Shape509;

HAnimSite505.children[2] = Billboard508;

HAnimSegment490.children[3] = HAnimSite505;

HAnimSite HAnimSite512 = createNode("HAnimSite");
HAnimSite512.name = "spine_1_middle_back";
HAnimSite512.DEF = "hanim_spine_1_middle_back";
TouchSensor TouchSensor513 = createNode("TouchSensor");
TouchSensor513.description = "HAnimSite 24 spine_1_middle_back";
HAnimSite512.children = new MFNode();

HAnimSite512.children[0] = TouchSensor513;

Shape Shape514 = createNode("Shape");
Shape514.USE = "HAnimSiteShape";
HAnimSite512.children[1] = Shape514;

Billboard Billboard515 = createNode("Billboard");
Shape Shape516 = createNode("Shape");
Text Text517 = createNode("Text");
Text517.string = new MFString(new java.lang.String["24"]);
FontStyle FontStyle518 = createNode("FontStyle");
FontStyle518.size = 0.035;
Text517.fontStyle = FontStyle518;

Shape516.geometry = Text517;

Billboard515.children = new MFNode();

Billboard515.children[0] = Shape516;

HAnimSite512.children[2] = Billboard515;

HAnimSegment490.children[4] = HAnimSite512;

HAnimSite HAnimSite519 = createNode("HAnimSite");
HAnimSite519.name = "spine_2_middle_back";
HAnimSite519.DEF = "hanim_spine_2_middle_back";
TouchSensor TouchSensor520 = createNode("TouchSensor");
TouchSensor520.description = "HAnimSite spine_2_middle_back";
HAnimSite519.children = new MFNode();

HAnimSite519.children[0] = TouchSensor520;

Shape Shape521 = createNode("Shape");
Shape521.USE = "HAnimSiteShape";
HAnimSite519.children[1] = Shape521;

Billboard Billboard522 = createNode("Billboard");
Shape Shape523 = createNode("Shape");
Text Text524 = createNode("Text");
Text524.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle525 = createNode("FontStyle");
FontStyle525.size = 0.035;
Text524.fontStyle = FontStyle525;

Shape523.geometry = Text524;

Billboard522.children = new MFNode();

Billboard522.children[0] = Shape523;

HAnimSite519.children[2] = Billboard522;

HAnimSegment490.children[5] = HAnimSite519;

HAnimJoint489.children = new MFNode();

HAnimJoint489.children[0] = HAnimSegment490;

HAnimJoint HAnimJoint526 = createNode("HAnimJoint");
HAnimJoint526.name = "vl1";
HAnimJoint526.DEF = "hanim_vl1";
HAnimJoint526.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment527 = createNode("HAnimSegment");
HAnimSegment527.name = "l1";
HAnimSegment527.DEF = "hanim_l1";
Transform Transform528 = createNode("Transform");
Transform528.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform529 = createNode("Transform");
//Empty Transform
Shape Shape530 = createNode("Shape");
Shape530.USE = "HAnimJointShape";
Transform529.child = new undefined();

Transform529.child[0] = Shape530;

Transform528.children = new MFNode();

Transform528.children[0] = Transform529;

HAnimSegment527.children = new MFNode();

HAnimSegment527.children[0] = Transform528;

Shape Shape531 = createNode("Shape");
LineSet LineSet532 = createNode("LineSet");
LineSet532.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate533 = createNode("Coordinate");
Coordinate533.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822]);
LineSet532.coord = Coordinate533;

//from vl1 to vt10 vertices 2
ColorRGBA ColorRGBA534 = createNode("ColorRGBA");
ColorRGBA534.USE = "HAnimSegmentLineColorRGBA";
LineSet532.color = ColorRGBA534;

Shape531.geometry = LineSet532;

HAnimSegment527.children[1] = Shape531;

HAnimJoint526.children = new MFNode();

HAnimJoint526.children[0] = HAnimSegment527;

HAnimJoint HAnimJoint535 = createNode("HAnimJoint");
HAnimJoint535.name = "vt10";
HAnimJoint535.DEF = "hanim_vt10";
HAnimJoint535.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment536 = createNode("HAnimSegment");
HAnimSegment536.name = "t10";
HAnimSegment536.DEF = "hanim_t10";
Transform Transform537 = createNode("Transform");
Transform537.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform538 = createNode("Transform");
//Empty Transform
Shape Shape539 = createNode("Shape");
Shape539.USE = "HAnimJointShape";
Transform538.child = new undefined();

Transform538.child[0] = Shape539;

Transform537.children = new MFNode();

Transform537.children[0] = Transform538;

HAnimSegment536.children = new MFNode();

HAnimSegment536.children[0] = Transform537;

Shape Shape540 = createNode("Shape");
LineSet LineSet541 = createNode("LineSet");
LineSet541.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate542 = createNode("Coordinate");
Coordinate542.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08]);
LineSet541.coord = Coordinate542;

//from vt10 to vt6 vertices 2
ColorRGBA ColorRGBA543 = createNode("ColorRGBA");
ColorRGBA543.USE = "HAnimSegmentLineColorRGBA";
LineSet541.color = ColorRGBA543;

Shape540.geometry = LineSet541;

HAnimSegment536.children[1] = Shape540;

HAnimSite HAnimSite544 = createNode("HAnimSite");
HAnimSite544.name = "l_thelion";
HAnimSite544.DEF = "hanim_l_thelion";
HAnimSite544.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor545 = createNode("TouchSensor");
TouchSensor545.description = "HAnimSite 29 l_thelion";
HAnimSite544.children = new MFNode();

HAnimSite544.children[0] = TouchSensor545;

Shape Shape546 = createNode("Shape");
Shape546.USE = "HAnimSiteShape";
HAnimSite544.children[1] = Shape546;

Billboard Billboard547 = createNode("Billboard");
Shape Shape548 = createNode("Shape");
Text Text549 = createNode("Text");
Text549.string = new MFString(new java.lang.String["29"]);
FontStyle FontStyle550 = createNode("FontStyle");
FontStyle550.size = 0.035;
Text549.fontStyle = FontStyle550;

Shape548.geometry = Text549;

Billboard547.children = new MFNode();

Billboard547.children[0] = Shape548;

HAnimSite544.children[2] = Billboard547;

HAnimSegment536.children[2] = HAnimSite544;

HAnimSite HAnimSite551 = createNode("HAnimSite");
HAnimSite551.name = "r_thelion";
HAnimSite551.DEF = "hanim_r_thelion";
HAnimSite551.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor552 = createNode("TouchSensor");
TouchSensor552.description = "HAnimSite 31 r_thelion";
HAnimSite551.children = new MFNode();

HAnimSite551.children[0] = TouchSensor552;

Shape Shape553 = createNode("Shape");
Shape553.USE = "HAnimSiteShape";
HAnimSite551.children[1] = Shape553;

Billboard Billboard554 = createNode("Billboard");
Shape Shape555 = createNode("Shape");
Text Text556 = createNode("Text");
Text556.string = new MFString(new java.lang.String["31"]);
FontStyle FontStyle557 = createNode("FontStyle");
FontStyle557.size = 0.035;
Text556.fontStyle = FontStyle557;

Shape555.geometry = Text556;

Billboard554.children = new MFNode();

Billboard554.children[0] = Shape555;

HAnimSite551.children[2] = Billboard554;

HAnimSegment536.children[3] = HAnimSite551;

HAnimSite HAnimSite558 = createNode("HAnimSite");
HAnimSite558.name = "substernale";
HAnimSite558.DEF = "hanim_substernale";
HAnimSite558.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor559 = createNode("TouchSensor");
TouchSensor559.description = "HAnimSite 13 substernale";
HAnimSite558.children = new MFNode();

HAnimSite558.children[0] = TouchSensor559;

Shape Shape560 = createNode("Shape");
Shape560.USE = "HAnimSiteShape";
HAnimSite558.children[1] = Shape560;

Billboard Billboard561 = createNode("Billboard");
Shape Shape562 = createNode("Shape");
Text Text563 = createNode("Text");
Text563.string = new MFString(new java.lang.String["13"]);
FontStyle FontStyle564 = createNode("FontStyle");
FontStyle564.size = 0.035;
Text563.fontStyle = FontStyle564;

Shape562.geometry = Text563;

Billboard561.children = new MFNode();

Billboard561.children[0] = Shape562;

HAnimSite558.children[2] = Billboard561;

HAnimSegment536.children[4] = HAnimSite558;

HAnimJoint535.children = new MFNode();

HAnimJoint535.children[0] = HAnimSegment536;

HAnimJoint HAnimJoint565 = createNode("HAnimJoint");
HAnimJoint565.name = "vt6";
HAnimJoint565.DEF = "hanim_vt6";
HAnimJoint565.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment566 = createNode("HAnimSegment");
HAnimSegment566.name = "t6";
HAnimSegment566.DEF = "hanim_t6";
Transform Transform567 = createNode("Transform");
Transform567.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform568 = createNode("Transform");
//Empty Transform
Shape Shape569 = createNode("Shape");
Shape569.USE = "HAnimJointShape";
Transform568.child = new undefined();

Transform568.child[0] = Shape569;

Transform567.children = new MFNode();

Transform567.children[0] = Transform568;

HAnimSegment566.children = new MFNode();

HAnimSegment566.children[0] = Transform567;

Shape Shape570 = createNode("Shape");
LineSet LineSet571 = createNode("LineSet");
LineSet571.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate572 = createNode("Coordinate");
Coordinate572.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387]);
LineSet571.coord = Coordinate572;

//from vt6 to vt1 vertices 2
ColorRGBA ColorRGBA573 = createNode("ColorRGBA");
ColorRGBA573.USE = "HAnimSegmentLineColorRGBA";
LineSet571.color = ColorRGBA573;

Shape570.geometry = LineSet571;

HAnimSegment566.children[1] = Shape570;

HAnimSite HAnimSite574 = createNode("HAnimSite");
HAnimSite574.name = "l_chest_midsagittal_plane";
HAnimSite574.DEF = "hanim_l_chest_midsagittal_plane";
TouchSensor TouchSensor575 = createNode("TouchSensor");
TouchSensor575.description = "HAnimSite 94 l_chest_midsagittal_plane";
HAnimSite574.children = new MFNode();

HAnimSite574.children[0] = TouchSensor575;

Shape Shape576 = createNode("Shape");
Shape576.USE = "HAnimSiteShape";
HAnimSite574.children[1] = Shape576;

Billboard Billboard577 = createNode("Billboard");
Shape Shape578 = createNode("Shape");
Text Text579 = createNode("Text");
Text579.string = new MFString(new java.lang.String["94"]);
FontStyle FontStyle580 = createNode("FontStyle");
FontStyle580.size = 0.035;
Text579.fontStyle = FontStyle580;

Shape578.geometry = Text579;

Billboard577.children = new MFNode();

Billboard577.children[0] = Shape578;

HAnimSite574.children[2] = Billboard577;

HAnimSegment566.children[2] = HAnimSite574;

HAnimSite HAnimSite581 = createNode("HAnimSite");
HAnimSite581.name = "mesosternale";
HAnimSite581.DEF = "hanim_mesosternale";
TouchSensor TouchSensor582 = createNode("TouchSensor");
TouchSensor582.description = "HAnimSite 88 mesosternale";
HAnimSite581.children = new MFNode();

HAnimSite581.children[0] = TouchSensor582;

Shape Shape583 = createNode("Shape");
Shape583.USE = "HAnimSiteShape";
HAnimSite581.children[1] = Shape583;

Billboard Billboard584 = createNode("Billboard");
Shape Shape585 = createNode("Shape");
Text Text586 = createNode("Text");
Text586.string = new MFString(new java.lang.String["88"]);
FontStyle FontStyle587 = createNode("FontStyle");
FontStyle587.size = 0.035;
Text586.fontStyle = FontStyle587;

Shape585.geometry = Text586;

Billboard584.children = new MFNode();

Billboard584.children[0] = Shape585;

HAnimSite581.children[2] = Billboard584;

HAnimSegment566.children[3] = HAnimSite581;

HAnimSite HAnimSite588 = createNode("HAnimSite");
HAnimSite588.name = "r_chest_midsagittal_plane";
HAnimSite588.DEF = "hanim_r_chest_midsagittal_plane";
TouchSensor TouchSensor589 = createNode("TouchSensor");
TouchSensor589.description = "HAnimSite 95 r_chest_midsagittal_plane";
HAnimSite588.children = new MFNode();

HAnimSite588.children[0] = TouchSensor589;

Shape Shape590 = createNode("Shape");
Shape590.USE = "HAnimSiteShape";
HAnimSite588.children[1] = Shape590;

Billboard Billboard591 = createNode("Billboard");
Shape Shape592 = createNode("Shape");
Text Text593 = createNode("Text");
Text593.string = new MFString(new java.lang.String["95"]);
FontStyle FontStyle594 = createNode("FontStyle");
FontStyle594.size = 0.035;
Text593.fontStyle = FontStyle594;

Shape592.geometry = Text593;

Billboard591.children = new MFNode();

Billboard591.children[0] = Shape592;

HAnimSite588.children[2] = Billboard591;

HAnimSegment566.children[4] = HAnimSite588;

HAnimSite HAnimSite595 = createNode("HAnimSite");
HAnimSite595.name = "rear_center_midsagittal_plane";
HAnimSite595.DEF = "hanim_rear_center_midsagittal_plane";
TouchSensor TouchSensor596 = createNode("TouchSensor");
TouchSensor596.description = "HAnimSite 92 rear_center_midsagittal_plane";
HAnimSite595.children = new MFNode();

HAnimSite595.children[0] = TouchSensor596;

Shape Shape597 = createNode("Shape");
Shape597.USE = "HAnimSiteShape";
HAnimSite595.children[1] = Shape597;

Billboard Billboard598 = createNode("Billboard");
Shape Shape599 = createNode("Shape");
Text Text600 = createNode("Text");
Text600.string = new MFString(new java.lang.String["92"]);
FontStyle FontStyle601 = createNode("FontStyle");
FontStyle601.size = 0.035;
Text600.fontStyle = FontStyle601;

Shape599.geometry = Text600;

Billboard598.children = new MFNode();

Billboard598.children[0] = Shape599;

HAnimSite595.children[2] = Billboard598;

HAnimSegment566.children[5] = HAnimSite595;

HAnimJoint565.children = new MFNode();

HAnimJoint565.children[0] = HAnimSegment566;

HAnimJoint HAnimJoint602 = createNode("HAnimJoint");
HAnimJoint602.name = "vt1";
HAnimJoint602.DEF = "hanim_vt1";
HAnimJoint602.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment603 = createNode("HAnimSegment");
HAnimSegment603.name = "t1";
HAnimSegment603.DEF = "hanim_t1";
Transform Transform604 = createNode("Transform");
Transform604.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Transform Transform605 = createNode("Transform");
//Empty Transform
Shape Shape606 = createNode("Shape");
Shape606.USE = "HAnimJointShape";
Transform605.child = new undefined();

Transform605.child[0] = Shape606;

Transform604.children = new MFNode();

Transform604.children[0] = Transform605;

HAnimSegment603.children = new MFNode();

HAnimSegment603.children[0] = Transform604;

Shape Shape607 = createNode("Shape");
LineSet LineSet608 = createNode("LineSet");
LineSet608.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate609 = createNode("Coordinate");
Coordinate609.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084]);
LineSet608.coord = Coordinate609;

//from vt1 to vc4 vertices 2
ColorRGBA ColorRGBA610 = createNode("ColorRGBA");
ColorRGBA610.USE = "HAnimSegmentLineColorRGBA";
LineSet608.color = ColorRGBA610;

Shape607.geometry = LineSet608;

HAnimSegment603.children[1] = Shape607;

HAnimSite HAnimSite611 = createNode("HAnimSite");
HAnimSite611.name = "cervicale";
HAnimSite611.DEF = "hanim_cervicale";
HAnimSite611.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor612 = createNode("TouchSensor");
TouchSensor612.description = "HAnimSite 10 cervicale";
HAnimSite611.children = new MFNode();

HAnimSite611.children[0] = TouchSensor612;

Shape Shape613 = createNode("Shape");
Shape613.USE = "HAnimSiteShape";
HAnimSite611.children[1] = Shape613;

Billboard Billboard614 = createNode("Billboard");
Shape Shape615 = createNode("Shape");
Text Text616 = createNode("Text");
Text616.string = new MFString(new java.lang.String["10"]);
FontStyle FontStyle617 = createNode("FontStyle");
FontStyle617.size = 0.035;
Text616.fontStyle = FontStyle617;

Shape615.geometry = Text616;

Billboard614.children = new MFNode();

Billboard614.children[0] = Shape615;

HAnimSite611.children[2] = Billboard614;

HAnimSegment603.children[2] = HAnimSite611;

HAnimSite HAnimSite618 = createNode("HAnimSite");
HAnimSite618.name = "l_neck_base";
HAnimSite618.DEF = "hanim_l_neck_base";
HAnimSite618.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor619 = createNode("TouchSensor");
TouchSensor619.description = "HAnimSite 82 l_neck_base";
HAnimSite618.children = new MFNode();

HAnimSite618.children[0] = TouchSensor619;

Shape Shape620 = createNode("Shape");
Shape620.USE = "HAnimSiteShape";
HAnimSite618.children[1] = Shape620;

Billboard Billboard621 = createNode("Billboard");
Shape Shape622 = createNode("Shape");
Text Text623 = createNode("Text");
Text623.string = new MFString(new java.lang.String["82"]);
FontStyle FontStyle624 = createNode("FontStyle");
FontStyle624.size = 0.035;
Text623.fontStyle = FontStyle624;

Shape622.geometry = Text623;

Billboard621.children = new MFNode();

Billboard621.children[0] = Shape622;

HAnimSite618.children[2] = Billboard621;

HAnimSegment603.children[3] = HAnimSite618;

HAnimSite HAnimSite625 = createNode("HAnimSite");
HAnimSite625.name = "r_neck_base";
HAnimSite625.DEF = "hanim_r_neck_base";
HAnimSite625.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor626 = createNode("TouchSensor");
TouchSensor626.description = "HAnimSite 83 r_neck_base";
HAnimSite625.children = new MFNode();

HAnimSite625.children[0] = TouchSensor626;

Shape Shape627 = createNode("Shape");
Shape627.USE = "HAnimSiteShape";
HAnimSite625.children[1] = Shape627;

Billboard Billboard628 = createNode("Billboard");
Shape Shape629 = createNode("Shape");
Text Text630 = createNode("Text");
Text630.string = new MFString(new java.lang.String["83"]);
FontStyle FontStyle631 = createNode("FontStyle");
FontStyle631.size = 0.035;
Text630.fontStyle = FontStyle631;

Shape629.geometry = Text630;

Billboard628.children = new MFNode();

Billboard628.children[0] = Shape629;

HAnimSite625.children[2] = Billboard628;

HAnimSegment603.children[4] = HAnimSite625;

HAnimSite HAnimSite632 = createNode("HAnimSite");
HAnimSite632.name = "suprasternale";
HAnimSite632.DEF = "hanim_suprasternale";
HAnimSite632.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor633 = createNode("TouchSensor");
TouchSensor633.description = "HAnimSite 12 suprasternale";
HAnimSite632.children = new MFNode();

HAnimSite632.children[0] = TouchSensor633;

Shape Shape634 = createNode("Shape");
Shape634.USE = "HAnimSiteShape";
HAnimSite632.children[1] = Shape634;

Billboard Billboard635 = createNode("Billboard");
Shape Shape636 = createNode("Shape");
Text Text637 = createNode("Text");
Text637.string = new MFString(new java.lang.String["12"]);
FontStyle FontStyle638 = createNode("FontStyle");
FontStyle638.size = 0.035;
Text637.fontStyle = FontStyle638;

Shape636.geometry = Text637;

Billboard635.children = new MFNode();

Billboard635.children[0] = Shape636;

HAnimSite632.children[2] = Billboard635;

HAnimSegment603.children[5] = HAnimSite632;

Shape Shape639 = createNode("Shape");
LineSet LineSet640 = createNode("LineSet");
LineSet640.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate641 = createNode("Coordinate");
Coordinate641.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet640.coord = Coordinate641;

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA ColorRGBA642 = createNode("ColorRGBA");
ColorRGBA642.USE = "HAnimSegmentLineColorRGBA";
LineSet640.color = ColorRGBA642;

Shape639.geometry = LineSet640;

HAnimSegment603.children[6] = Shape639;

Shape Shape643 = createNode("Shape");
LineSet LineSet644 = createNode("LineSet");
LineSet644.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate645 = createNode("Coordinate");
Coordinate645.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet644.coord = Coordinate645;

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA ColorRGBA646 = createNode("ColorRGBA");
ColorRGBA646.USE = "HAnimSegmentLineColorRGBA";
LineSet644.color = ColorRGBA646;

Shape643.geometry = LineSet644;

HAnimSegment603.children[7] = Shape643;

HAnimJoint602.children = new MFNode();

HAnimJoint602.children[0] = HAnimSegment603;

HAnimJoint HAnimJoint647 = createNode("HAnimJoint");
HAnimJoint647.name = "vc4";
HAnimJoint647.DEF = "hanim_vc4";
HAnimJoint647.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment648 = createNode("HAnimSegment");
HAnimSegment648.name = "c4";
HAnimSegment648.DEF = "hanim_c4";
Transform Transform649 = createNode("Transform");
Transform649.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
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
Coordinate654.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103]);
LineSet653.coord = Coordinate654;

//from vc4 to vc2 vertices 2
ColorRGBA ColorRGBA655 = createNode("ColorRGBA");
ColorRGBA655.USE = "HAnimSegmentLineColorRGBA";
LineSet653.color = ColorRGBA655;

Shape652.geometry = LineSet653;

HAnimSegment648.children[1] = Shape652;

HAnimJoint647.children = new MFNode();

HAnimJoint647.children[0] = HAnimSegment648;

HAnimJoint HAnimJoint656 = createNode("HAnimJoint");
HAnimJoint656.name = "vc2";
HAnimJoint656.DEF = "hanim_vc2";
HAnimJoint656.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment657 = createNode("HAnimSegment");
HAnimSegment657.name = "c2";
HAnimSegment657.DEF = "hanim_c2";
Transform Transform658 = createNode("Transform");
Transform658.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
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
Coordinate663.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236]);
LineSet662.coord = Coordinate663;

//from vc2 to skullbase vertices 2
ColorRGBA ColorRGBA664 = createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimSegment657.children[1] = Shape661;

HAnimSite HAnimSite665 = createNode("HAnimSite");
HAnimSite665.name = "adams_apple";
HAnimSite665.DEF = "hanim_adams_apple";
TouchSensor TouchSensor666 = createNode("TouchSensor");
TouchSensor666.description = "HAnimSite 11 adams_apple";
HAnimSite665.children = new MFNode();

HAnimSite665.children[0] = TouchSensor666;

Shape Shape667 = createNode("Shape");
Shape667.USE = "HAnimSiteShape";
HAnimSite665.children[1] = Shape667;

Billboard Billboard668 = createNode("Billboard");
Shape Shape669 = createNode("Shape");
Text Text670 = createNode("Text");
Text670.string = new MFString(new java.lang.String["11"]);
FontStyle FontStyle671 = createNode("FontStyle");
FontStyle671.size = 0.035;
Text670.fontStyle = FontStyle671;

Shape669.geometry = Text670;

Billboard668.children = new MFNode();

Billboard668.children[0] = Shape669;

HAnimSite665.children[2] = Billboard668;

HAnimSegment657.children[2] = HAnimSite665;

HAnimJoint656.children = new MFNode();

HAnimJoint656.children[0] = HAnimSegment657;

HAnimJoint HAnimJoint672 = createNode("HAnimJoint");
HAnimJoint672.name = "skullbase";
HAnimJoint672.DEF = "hanim_skullbase";
HAnimJoint672.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint656.children[1] = HAnimJoint672;

HAnimJoint647.children[1] = HAnimJoint656;

HAnimJoint602.children[1] = HAnimJoint647;

HAnimJoint HAnimJoint673 = createNode("HAnimJoint");
HAnimJoint673.name = "l_sternoclavicular";
HAnimJoint673.DEF = "hanim_l_sternoclavicular";
HAnimJoint673.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment674 = createNode("HAnimSegment");
HAnimSegment674.name = "l_clavicle";
HAnimSegment674.DEF = "hanim_l_clavicle";
Transform Transform675 = createNode("Transform");
Transform675.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Transform Transform676 = createNode("Transform");
//Empty Transform
Shape Shape677 = createNode("Shape");
Shape677.USE = "HAnimJointShape";
Transform676.child = new undefined();

Transform676.child[0] = Shape677;

Transform675.children = new MFNode();

Transform675.children[0] = Transform676;

HAnimSegment674.children = new MFNode();

HAnimSegment674.children[0] = Transform675;

Shape Shape678 = createNode("Shape");
LineSet LineSet679 = createNode("LineSet");
LineSet679.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate680 = createNode("Coordinate");
Coordinate680.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet679.coord = Coordinate680;

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA ColorRGBA681 = createNode("ColorRGBA");
ColorRGBA681.USE = "HAnimSegmentLineColorRGBA";
LineSet679.color = ColorRGBA681;

Shape678.geometry = LineSet679;

HAnimSegment674.children[1] = Shape678;

HAnimSite HAnimSite682 = createNode("HAnimSite");
HAnimSite682.name = "l_acromion";
HAnimSite682.DEF = "hanim_l_acromion";
HAnimSite682.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor683 = createNode("TouchSensor");
TouchSensor683.description = "HAnimSite 15 l_acromion";
HAnimSite682.children = new MFNode();

HAnimSite682.children[0] = TouchSensor683;

Shape Shape684 = createNode("Shape");
Shape684.USE = "HAnimSiteShape";
HAnimSite682.children[1] = Shape684;

Billboard Billboard685 = createNode("Billboard");
Shape Shape686 = createNode("Shape");
Text Text687 = createNode("Text");
Text687.string = new MFString(new java.lang.String["15"]);
FontStyle FontStyle688 = createNode("FontStyle");
FontStyle688.size = 0.035;
Text687.fontStyle = FontStyle688;

Shape686.geometry = Text687;

Billboard685.children = new MFNode();

Billboard685.children[0] = Shape686;

HAnimSite682.children[2] = Billboard685;

HAnimSegment674.children[2] = HAnimSite682;

HAnimSite HAnimSite689 = createNode("HAnimSite");
HAnimSite689.name = "l_axilla_distal";
HAnimSite689.DEF = "hanim_l_axilla_distal";
HAnimSite689.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor690 = createNode("TouchSensor");
TouchSensor690.description = "HAnimSite 17 l_axilla_distal";
HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = TouchSensor690;

Shape Shape691 = createNode("Shape");
Shape691.USE = "HAnimSiteShape";
HAnimSite689.children[1] = Shape691;

Billboard Billboard692 = createNode("Billboard");
Shape Shape693 = createNode("Shape");
Text Text694 = createNode("Text");
Text694.string = new MFString(new java.lang.String["17"]);
FontStyle FontStyle695 = createNode("FontStyle");
FontStyle695.size = 0.035;
Text694.fontStyle = FontStyle695;

Shape693.geometry = Text694;

Billboard692.children = new MFNode();

Billboard692.children[0] = Shape693;

HAnimSite689.children[2] = Billboard692;

HAnimSegment674.children[3] = HAnimSite689;

HAnimSite HAnimSite696 = createNode("HAnimSite");
HAnimSite696.name = "l_axilla_posterior_folds";
HAnimSite696.DEF = "hanim_l_axilla_posterior_folds";
TouchSensor TouchSensor697 = createNode("TouchSensor");
TouchSensor697.description = "HAnimSite 18 l_axilla_posterior_folds";
HAnimSite696.children = new MFNode();

HAnimSite696.children[0] = TouchSensor697;

Shape Shape698 = createNode("Shape");
Shape698.USE = "HAnimSiteShape";
HAnimSite696.children[1] = Shape698;

Billboard Billboard699 = createNode("Billboard");
Shape Shape700 = createNode("Shape");
Text Text701 = createNode("Text");
Text701.string = new MFString(new java.lang.String["18"]);
FontStyle FontStyle702 = createNode("FontStyle");
FontStyle702.size = 0.035;
Text701.fontStyle = FontStyle702;

Shape700.geometry = Text701;

Billboard699.children = new MFNode();

Billboard699.children[0] = Shape700;

HAnimSite696.children[2] = Billboard699;

HAnimSegment674.children[4] = HAnimSite696;

HAnimSite HAnimSite703 = createNode("HAnimSite");
HAnimSite703.name = "l_axilla_proximal";
HAnimSite703.DEF = "hanim_l_axilla_proximal";
HAnimSite703.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor704 = createNode("TouchSensor");
TouchSensor704.description = "HAnimSite 16 l_axilla_proximal";
HAnimSite703.children = new MFNode();

HAnimSite703.children[0] = TouchSensor704;

Shape Shape705 = createNode("Shape");
Shape705.USE = "HAnimSiteShape";
HAnimSite703.children[1] = Shape705;

Billboard Billboard706 = createNode("Billboard");
Shape Shape707 = createNode("Shape");
Text Text708 = createNode("Text");
Text708.string = new MFString(new java.lang.String["16"]);
FontStyle FontStyle709 = createNode("FontStyle");
FontStyle709.size = 0.035;
Text708.fontStyle = FontStyle709;

Shape707.geometry = Text708;

Billboard706.children = new MFNode();

Billboard706.children[0] = Shape707;

HAnimSite703.children[2] = Billboard706;

HAnimSegment674.children[5] = HAnimSite703;

HAnimSite HAnimSite710 = createNode("HAnimSite");
HAnimSite710.name = "l_clavicale";
HAnimSite710.DEF = "hanim_l_clavicale";
HAnimSite710.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor711 = createNode("TouchSensor");
TouchSensor711.description = "HAnimSite 14 l_clavicale";
HAnimSite710.children = new MFNode();

HAnimSite710.children[0] = TouchSensor711;

Shape Shape712 = createNode("Shape");
Shape712.USE = "HAnimSiteShape";
HAnimSite710.children[1] = Shape712;

Billboard Billboard713 = createNode("Billboard");
Shape Shape714 = createNode("Shape");
Text Text715 = createNode("Text");
Text715.string = new MFString(new java.lang.String["14"]);
FontStyle FontStyle716 = createNode("FontStyle");
FontStyle716.size = 0.035;
Text715.fontStyle = FontStyle716;

Shape714.geometry = Text715;

Billboard713.children = new MFNode();

Billboard713.children[0] = Shape714;

HAnimSite710.children[2] = Billboard713;

HAnimSegment674.children[6] = HAnimSite710;

HAnimJoint673.children = new MFNode();

HAnimJoint673.children[0] = HAnimSegment674;

HAnimJoint HAnimJoint717 = createNode("HAnimJoint");
HAnimJoint717.name = "l_acromioclavicular";
HAnimJoint717.DEF = "hanim_l_acromioclavicular";
HAnimJoint717.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment718 = createNode("HAnimSegment");
HAnimSegment718.name = "l_scapula";
HAnimSegment718.DEF = "hanim_l_scapula";
Transform Transform719 = createNode("Transform");
Transform719.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Transform Transform720 = createNode("Transform");
//Empty Transform
Shape Shape721 = createNode("Shape");
Shape721.USE = "HAnimJointShape";
Transform720.child = new undefined();

Transform720.child[0] = Shape721;

Transform719.children = new MFNode();

Transform719.children[0] = Transform720;

HAnimSegment718.children = new MFNode();

HAnimSegment718.children[0] = Transform719;

Shape Shape722 = createNode("Shape");
LineSet LineSet723 = createNode("LineSet");
LineSet723.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate724 = createNode("Coordinate");
Coordinate724.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet723.coord = Coordinate724;

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA ColorRGBA725 = createNode("ColorRGBA");
ColorRGBA725.USE = "HAnimSegmentLineColorRGBA";
LineSet723.color = ColorRGBA725;

Shape722.geometry = LineSet723;

HAnimSegment718.children[1] = Shape722;

HAnimJoint717.children = new MFNode();

HAnimJoint717.children[0] = HAnimSegment718;

HAnimJoint HAnimJoint726 = createNode("HAnimJoint");
HAnimJoint726.name = "l_shoulder";
HAnimJoint726.DEF = "hanim_l_shoulder";
HAnimJoint726.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment727 = createNode("HAnimSegment");
HAnimSegment727.name = "l_upperarm";
HAnimSegment727.DEF = "hanim_l_upperarm";
Transform Transform728 = createNode("Transform");
Transform728.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform729 = createNode("Transform");
//Empty Transform
Shape Shape730 = createNode("Shape");
Shape730.USE = "HAnimJointShape";
Transform729.child = new undefined();

Transform729.child[0] = Shape730;

Transform728.children = new MFNode();

Transform728.children[0] = Transform729;

HAnimSegment727.children = new MFNode();

HAnimSegment727.children[0] = Transform728;

Shape Shape731 = createNode("Shape");
LineSet LineSet732 = createNode("LineSet");
LineSet732.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate733 = createNode("Coordinate");
Coordinate733.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet732.coord = Coordinate733;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA734 = createNode("ColorRGBA");
ColorRGBA734.USE = "HAnimSegmentLineColorRGBA";
LineSet732.color = ColorRGBA734;

Shape731.geometry = LineSet732;

HAnimSegment727.children[1] = Shape731;

HAnimSite HAnimSite735 = createNode("HAnimSite");
HAnimSite735.name = "l_bideltoid";
HAnimSite735.DEF = "hanim_l_bideltoid";
TouchSensor TouchSensor736 = createNode("TouchSensor");
TouchSensor736.description = "HAnimSite 96 l_bideltoid";
HAnimSite735.children = new MFNode();

HAnimSite735.children[0] = TouchSensor736;

Shape Shape737 = createNode("Shape");
Shape737.USE = "HAnimSiteShape";
HAnimSite735.children[1] = Shape737;

Billboard Billboard738 = createNode("Billboard");
Shape Shape739 = createNode("Shape");
Text Text740 = createNode("Text");
Text740.string = new MFString(new java.lang.String["96"]);
FontStyle FontStyle741 = createNode("FontStyle");
FontStyle741.size = 0.035;
Text740.fontStyle = FontStyle741;

Shape739.geometry = Text740;

Billboard738.children = new MFNode();

Billboard738.children[0] = Shape739;

HAnimSite735.children[2] = Billboard738;

HAnimSegment727.children[2] = HAnimSite735;

HAnimSite HAnimSite742 = createNode("HAnimSite");
HAnimSite742.name = "l_humeral_lateral_epicondyles";
HAnimSite742.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite742.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor743 = createNode("TouchSensor");
TouchSensor743.description = "HAnimSite 63 l_humeral_lateral_epicondyles";
HAnimSite742.children = new MFNode();

HAnimSite742.children[0] = TouchSensor743;

Shape Shape744 = createNode("Shape");
Shape744.USE = "HAnimSiteShape";
HAnimSite742.children[1] = Shape744;

Billboard Billboard745 = createNode("Billboard");
Shape Shape746 = createNode("Shape");
Text Text747 = createNode("Text");
Text747.string = new MFString(new java.lang.String["63"]);
FontStyle FontStyle748 = createNode("FontStyle");
FontStyle748.size = 0.035;
Text747.fontStyle = FontStyle748;

Shape746.geometry = Text747;

Billboard745.children = new MFNode();

Billboard745.children[0] = Shape746;

HAnimSite742.children[2] = Billboard745;

HAnimSegment727.children[3] = HAnimSite742;

HAnimJoint726.children = new MFNode();

HAnimJoint726.children[0] = HAnimSegment727;

HAnimJoint HAnimJoint749 = createNode("HAnimJoint");
HAnimJoint749.name = "l_elbow";
HAnimJoint749.DEF = "hanim_l_elbow";
HAnimJoint749.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment750 = createNode("HAnimSegment");
HAnimSegment750.name = "l_forearm";
HAnimSegment750.DEF = "hanim_l_forearm";
Transform Transform751 = createNode("Transform");
Transform751.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform752 = createNode("Transform");
//Empty Transform
Shape Shape753 = createNode("Shape");
Shape753.USE = "HAnimJointShape";
Transform752.child = new undefined();

Transform752.child[0] = Shape753;

Transform751.children = new MFNode();

Transform751.children[0] = Transform752;

HAnimSegment750.children = new MFNode();

HAnimSegment750.children[0] = Transform751;

Shape Shape754 = createNode("Shape");
LineSet LineSet755 = createNode("LineSet");
LineSet755.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate756 = createNode("Coordinate");
Coordinate756.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet755.coord = Coordinate756;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA757 = createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSegmentLineColorRGBA";
LineSet755.color = ColorRGBA757;

Shape754.geometry = LineSet755;

HAnimSegment750.children[1] = Shape754;

HAnimSite HAnimSite758 = createNode("HAnimSite");
HAnimSite758.name = "l_humeral_medial_epicondyles";
HAnimSite758.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite758.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor759 = createNode("TouchSensor");
TouchSensor759.description = "HAnimSite 64 l_humeral_medial_epicondyles";
HAnimSite758.children = new MFNode();

HAnimSite758.children[0] = TouchSensor759;

Shape Shape760 = createNode("Shape");
Shape760.USE = "HAnimSiteShape";
HAnimSite758.children[1] = Shape760;

Billboard Billboard761 = createNode("Billboard");
Shape Shape762 = createNode("Shape");
Text Text763 = createNode("Text");
Text763.string = new MFString(new java.lang.String["64"]);
FontStyle FontStyle764 = createNode("FontStyle");
FontStyle764.size = 0.035;
Text763.fontStyle = FontStyle764;

Shape762.geometry = Text763;

Billboard761.children = new MFNode();

Billboard761.children[0] = Shape762;

HAnimSite758.children[2] = Billboard761;

HAnimSegment750.children[2] = HAnimSite758;

HAnimSite HAnimSite765 = createNode("HAnimSite");
HAnimSite765.name = "l_olecranon";
HAnimSite765.DEF = "hanim_l_olecranon";
HAnimSite765.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor766 = createNode("TouchSensor");
TouchSensor766.description = "HAnimSite 65 l_olecranon";
HAnimSite765.children = new MFNode();

HAnimSite765.children[0] = TouchSensor766;

Shape Shape767 = createNode("Shape");
Shape767.USE = "HAnimSiteShape";
HAnimSite765.children[1] = Shape767;

Billboard Billboard768 = createNode("Billboard");
Shape Shape769 = createNode("Shape");
Text Text770 = createNode("Text");
Text770.string = new MFString(new java.lang.String["65"]);
FontStyle FontStyle771 = createNode("FontStyle");
FontStyle771.size = 0.035;
Text770.fontStyle = FontStyle771;

Shape769.geometry = Text770;

Billboard768.children = new MFNode();

Billboard768.children[0] = Shape769;

HAnimSite765.children[2] = Billboard768;

HAnimSegment750.children[3] = HAnimSite765;

HAnimSite HAnimSite772 = createNode("HAnimSite");
HAnimSite772.name = "l_radial_styloid";
HAnimSite772.DEF = "hanim_l_radial_styloid";
HAnimSite772.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor773 = createNode("TouchSensor");
TouchSensor773.description = "HAnimSite 71 l_radial_styloid";
HAnimSite772.children = new MFNode();

HAnimSite772.children[0] = TouchSensor773;

Shape Shape774 = createNode("Shape");
Shape774.USE = "HAnimSiteShape";
HAnimSite772.children[1] = Shape774;

Billboard Billboard775 = createNode("Billboard");
Shape Shape776 = createNode("Shape");
Text Text777 = createNode("Text");
Text777.string = new MFString(new java.lang.String["71"]);
FontStyle FontStyle778 = createNode("FontStyle");
FontStyle778.size = 0.035;
Text777.fontStyle = FontStyle778;

Shape776.geometry = Text777;

Billboard775.children = new MFNode();

Billboard775.children[0] = Shape776;

HAnimSite772.children[2] = Billboard775;

HAnimSegment750.children[4] = HAnimSite772;

HAnimSite HAnimSite779 = createNode("HAnimSite");
HAnimSite779.name = "l_radiale";
HAnimSite779.DEF = "hanim_l_radiale";
HAnimSite779.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor780 = createNode("TouchSensor");
TouchSensor780.description = "HAnimSite 69 l_radiale";
HAnimSite779.children = new MFNode();

HAnimSite779.children[0] = TouchSensor780;

Shape Shape781 = createNode("Shape");
Shape781.USE = "HAnimSiteShape";
HAnimSite779.children[1] = Shape781;

Billboard Billboard782 = createNode("Billboard");
Shape Shape783 = createNode("Shape");
Text Text784 = createNode("Text");
Text784.string = new MFString(new java.lang.String["69"]);
FontStyle FontStyle785 = createNode("FontStyle");
FontStyle785.size = 0.035;
Text784.fontStyle = FontStyle785;

Shape783.geometry = Text784;

Billboard782.children = new MFNode();

Billboard782.children[0] = Shape783;

HAnimSite779.children[2] = Billboard782;

HAnimSegment750.children[5] = HAnimSite779;

HAnimJoint749.children = new MFNode();

HAnimJoint749.children[0] = HAnimSegment750;

HAnimJoint HAnimJoint786 = createNode("HAnimJoint");
HAnimJoint786.name = "l_radiocarpal";
HAnimJoint786.DEF = "hanim_l_radiocarpal";
HAnimJoint786.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment787 = createNode("HAnimSegment");
HAnimSegment787.name = "l_carpal";
HAnimSegment787.DEF = "hanim_l_carpal";
Transform Transform788 = createNode("Transform");
Transform788.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform788.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform788.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
Transform Transform789 = createNode("Transform");
Transform789.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
Shape Shape790 = createNode("Shape");
Shape790.USE = "HAnimJointShape";
Transform789.child = new undefined();

Transform789.child[0] = Shape790;

Transform788.children = new MFNode();

Transform788.children[0] = Transform789;

HAnimSegment787.children = new MFNode();

HAnimSegment787.children[0] = Transform788;

Shape Shape791 = createNode("Shape");
LineSet LineSet792 = createNode("LineSet");
LineSet792.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate793 = createNode("Coordinate");
Coordinate793.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet792.coord = Coordinate793;

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA794 = createNode("ColorRGBA");
ColorRGBA794.USE = "HAnimSegmentLineColorRGBA";
LineSet792.color = ColorRGBA794;

Shape791.geometry = LineSet792;

HAnimSegment787.children[1] = Shape791;

HAnimSite HAnimSite795 = createNode("HAnimSite");
HAnimSite795.name = "l_ulnar_styloid";
HAnimSite795.DEF = "hanim_l_ulnar_styloid";
HAnimSite795.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor796 = createNode("TouchSensor");
TouchSensor796.description = "HAnimSite 70 l_ulnar_styloid";
HAnimSite795.children = new MFNode();

HAnimSite795.children[0] = TouchSensor796;

Shape Shape797 = createNode("Shape");
Shape797.USE = "HAnimSiteShape";
HAnimSite795.children[1] = Shape797;

Billboard Billboard798 = createNode("Billboard");
Shape Shape799 = createNode("Shape");
Text Text800 = createNode("Text");
Text800.string = new MFString(new java.lang.String["70"]);
FontStyle FontStyle801 = createNode("FontStyle");
FontStyle801.size = 0.035;
Text800.fontStyle = FontStyle801;

Shape799.geometry = Text800;

Billboard798.children = new MFNode();

Billboard798.children[0] = Shape799;

HAnimSite795.children[2] = Billboard798;

HAnimSegment787.children[2] = HAnimSite795;

Shape Shape802 = createNode("Shape");
LineSet LineSet803 = createNode("LineSet");
LineSet803.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate804 = createNode("Coordinate");
Coordinate804.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet803.coord = Coordinate804;

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA805 = createNode("ColorRGBA");
ColorRGBA805.USE = "HAnimSegmentLineColorRGBA";
LineSet803.color = ColorRGBA805;

Shape802.geometry = LineSet803;

HAnimSegment787.children[3] = Shape802;

Shape Shape806 = createNode("Shape");
LineSet LineSet807 = createNode("LineSet");
LineSet807.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate808 = createNode("Coordinate");
Coordinate808.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet807.coord = Coordinate808;

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA809 = createNode("ColorRGBA");
ColorRGBA809.USE = "HAnimSegmentLineColorRGBA";
LineSet807.color = ColorRGBA809;

Shape806.geometry = LineSet807;

HAnimSegment787.children[4] = Shape806;

Shape Shape810 = createNode("Shape");
LineSet LineSet811 = createNode("LineSet");
LineSet811.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate812 = createNode("Coordinate");
Coordinate812.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet811.coord = Coordinate812;

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA813 = createNode("ColorRGBA");
ColorRGBA813.USE = "HAnimSegmentLineColorRGBA";
LineSet811.color = ColorRGBA813;

Shape810.geometry = LineSet811;

HAnimSegment787.children[5] = Shape810;

Shape Shape814 = createNode("Shape");
LineSet LineSet815 = createNode("LineSet");
LineSet815.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate816 = createNode("Coordinate");
Coordinate816.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet815.coord = Coordinate816;

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA817 = createNode("ColorRGBA");
ColorRGBA817.USE = "HAnimSegmentLineColorRGBA";
LineSet815.color = ColorRGBA817;

Shape814.geometry = LineSet815;

HAnimSegment787.children[6] = Shape814;

HAnimJoint786.children = new MFNode();

HAnimJoint786.children[0] = HAnimSegment787;

HAnimJoint HAnimJoint818 = createNode("HAnimJoint");
HAnimJoint818.name = "l_carpometacarpal_1";
HAnimJoint818.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint818.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment819 = createNode("HAnimSegment");
HAnimSegment819.name = "l_metacarpal_1";
HAnimSegment819.DEF = "hanim_l_metacarpal_1";
Transform Transform820 = createNode("Transform");
Transform820.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Transform Transform821 = createNode("Transform");
//Empty Transform
Shape Shape822 = createNode("Shape");
Shape822.USE = "HAnimJointShape";
Transform821.child = new undefined();

Transform821.child[0] = Shape822;

Transform820.children = new MFNode();

Transform820.children[0] = Transform821;

HAnimSegment819.children = new MFNode();

HAnimSegment819.children[0] = Transform820;

Shape Shape823 = createNode("Shape");
LineSet LineSet824 = createNode("LineSet");
LineSet824.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate825 = createNode("Coordinate");
Coordinate825.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet824.coord = Coordinate825;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA826 = createNode("ColorRGBA");
ColorRGBA826.USE = "HAnimSegmentLineColorRGBA";
LineSet824.color = ColorRGBA826;

Shape823.geometry = LineSet824;

HAnimSegment819.children[1] = Shape823;

HAnimJoint818.children = new MFNode();

HAnimJoint818.children[0] = HAnimSegment819;

HAnimJoint HAnimJoint827 = createNode("HAnimJoint");
HAnimJoint827.name = "l_metacarpophalangeal_1";
HAnimJoint827.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint827.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment828 = createNode("HAnimSegment");
HAnimSegment828.name = "l_carpal_proximal_phalanx_1";
HAnimSegment828.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform829 = createNode("Transform");
Transform829.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform830 = createNode("Transform");
//Empty Transform
Shape Shape831 = createNode("Shape");
Shape831.USE = "HAnimJointShape";
Transform830.child = new undefined();

Transform830.child[0] = Shape831;

Transform829.children = new MFNode();

Transform829.children[0] = Transform830;

HAnimSegment828.children = new MFNode();

HAnimSegment828.children[0] = Transform829;

Shape Shape832 = createNode("Shape");
LineSet LineSet833 = createNode("LineSet");
LineSet833.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate834 = createNode("Coordinate");
Coordinate834.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet833.coord = Coordinate834;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA835 = createNode("ColorRGBA");
ColorRGBA835.USE = "HAnimSegmentLineColorRGBA";
LineSet833.color = ColorRGBA835;

Shape832.geometry = LineSet833;

HAnimSegment828.children[1] = Shape832;

HAnimJoint827.children = new MFNode();

HAnimJoint827.children[0] = HAnimSegment828;

HAnimJoint HAnimJoint836 = createNode("HAnimJoint");
HAnimJoint836.name = "l_carpal_interphalangeal_1";
HAnimJoint836.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint836.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint827.children[1] = HAnimJoint836;

HAnimJoint818.children[1] = HAnimJoint827;

HAnimJoint786.children[1] = HAnimJoint818;

HAnimJoint HAnimJoint837 = createNode("HAnimJoint");
HAnimJoint837.name = "l_carpometacarpal_2";
HAnimJoint837.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint837.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment838 = createNode("HAnimSegment");
HAnimSegment838.name = "l_metacarpal_2";
HAnimSegment838.DEF = "hanim_l_metacarpal_2";
Transform Transform839 = createNode("Transform");
Transform839.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
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
Coordinate844.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet843.coord = Coordinate844;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA845 = createNode("ColorRGBA");
ColorRGBA845.USE = "HAnimSegmentLineColorRGBA";
LineSet843.color = ColorRGBA845;

Shape842.geometry = LineSet843;

HAnimSegment838.children[1] = Shape842;

HAnimSite HAnimSite846 = createNode("HAnimSite");
HAnimSite846.name = "l_metacarpal_phalanx_2";
HAnimSite846.DEF = "hanim_l_metacarpal_phalanx_2";
HAnimSite846.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor847 = createNode("TouchSensor");
TouchSensor847.description = "HAnimSite 75 l_metacarpal_phalanx_2";
HAnimSite846.children = new MFNode();

HAnimSite846.children[0] = TouchSensor847;

Shape Shape848 = createNode("Shape");
Shape848.USE = "HAnimSiteShape";
HAnimSite846.children[1] = Shape848;

Billboard Billboard849 = createNode("Billboard");
Shape Shape850 = createNode("Shape");
Text Text851 = createNode("Text");
Text851.string = new MFString(new java.lang.String["75"]);
FontStyle FontStyle852 = createNode("FontStyle");
FontStyle852.size = 0.035;
Text851.fontStyle = FontStyle852;

Shape850.geometry = Text851;

Billboard849.children = new MFNode();

Billboard849.children[0] = Shape850;

HAnimSite846.children[2] = Billboard849;

HAnimSegment838.children[2] = HAnimSite846;

HAnimJoint837.children = new MFNode();

HAnimJoint837.children[0] = HAnimSegment838;

HAnimJoint HAnimJoint853 = createNode("HAnimJoint");
HAnimJoint853.name = "l_metacarpophalangeal_2";
HAnimJoint853.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint853.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment854 = createNode("HAnimSegment");
HAnimSegment854.name = "l_carpal_proximal_phalanx_2";
HAnimSegment854.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform855 = createNode("Transform");
Transform855.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform856 = createNode("Transform");
//Empty Transform
Shape Shape857 = createNode("Shape");
Shape857.USE = "HAnimJointShape";
Transform856.child = new undefined();

Transform856.child[0] = Shape857;

Transform855.children = new MFNode();

Transform855.children[0] = Transform856;

HAnimSegment854.children = new MFNode();

HAnimSegment854.children[0] = Transform855;

Shape Shape858 = createNode("Shape");
LineSet LineSet859 = createNode("LineSet");
LineSet859.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate860 = createNode("Coordinate");
Coordinate860.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet859.coord = Coordinate860;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA861 = createNode("ColorRGBA");
ColorRGBA861.USE = "HAnimSegmentLineColorRGBA";
LineSet859.color = ColorRGBA861;

Shape858.geometry = LineSet859;

HAnimSegment854.children[1] = Shape858;

HAnimJoint853.children = new MFNode();

HAnimJoint853.children[0] = HAnimSegment854;

HAnimJoint HAnimJoint862 = createNode("HAnimJoint");
HAnimJoint862.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint862.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint862.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment863 = createNode("HAnimSegment");
HAnimSegment863.name = "l_carpal_middle_phalanx_2";
HAnimSegment863.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform864 = createNode("Transform");
Transform864.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform865 = createNode("Transform");
//Empty Transform
Shape Shape866 = createNode("Shape");
Shape866.USE = "HAnimJointShape";
Transform865.child = new undefined();

Transform865.child[0] = Shape866;

Transform864.children = new MFNode();

Transform864.children[0] = Transform865;

HAnimSegment863.children = new MFNode();

HAnimSegment863.children[0] = Transform864;

Shape Shape867 = createNode("Shape");
LineSet LineSet868 = createNode("LineSet");
LineSet868.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate869 = createNode("Coordinate");
Coordinate869.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet868.coord = Coordinate869;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA870 = createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSegmentLineColorRGBA";
LineSet868.color = ColorRGBA870;

Shape867.geometry = LineSet868;

HAnimSegment863.children[1] = Shape867;

HAnimJoint862.children = new MFNode();

HAnimJoint862.children[0] = HAnimSegment863;

HAnimJoint HAnimJoint871 = createNode("HAnimJoint");
HAnimJoint871.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint871.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint871.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint862.children[1] = HAnimJoint871;

HAnimJoint853.children[1] = HAnimJoint862;

HAnimJoint837.children[1] = HAnimJoint853;

HAnimJoint786.children[2] = HAnimJoint837;

HAnimJoint HAnimJoint872 = createNode("HAnimJoint");
HAnimJoint872.name = "l_carpometacarpal_3";
HAnimJoint872.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint872.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment873 = createNode("HAnimSegment");
HAnimSegment873.name = "l_metacarpal_3";
HAnimSegment873.DEF = "hanim_l_metacarpal_3";
Transform Transform874 = createNode("Transform");
Transform874.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Transform Transform875 = createNode("Transform");
//Empty Transform
Shape Shape876 = createNode("Shape");
Shape876.USE = "HAnimJointShape";
Transform875.child = new undefined();

Transform875.child[0] = Shape876;

Transform874.children = new MFNode();

Transform874.children[0] = Transform875;

HAnimSegment873.children = new MFNode();

HAnimSegment873.children[0] = Transform874;

Shape Shape877 = createNode("Shape");
LineSet LineSet878 = createNode("LineSet");
LineSet878.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate879 = createNode("Coordinate");
Coordinate879.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet878.coord = Coordinate879;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA880 = createNode("ColorRGBA");
ColorRGBA880.USE = "HAnimSegmentLineColorRGBA";
LineSet878.color = ColorRGBA880;

Shape877.geometry = LineSet878;

HAnimSegment873.children[1] = Shape877;

HAnimSite HAnimSite881 = createNode("HAnimSite");
HAnimSite881.name = "l_metacarpal_phalanx_3";
HAnimSite881.DEF = "hanim_l_metacarpal_phalanx_3";
TouchSensor TouchSensor882 = createNode("TouchSensor");
TouchSensor882.description = "HAnimSite 76 l_metacarpal_phalanx_3";
HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = TouchSensor882;

Shape Shape883 = createNode("Shape");
Shape883.USE = "HAnimSiteShape";
HAnimSite881.children[1] = Shape883;

Billboard Billboard884 = createNode("Billboard");
Shape Shape885 = createNode("Shape");
Text Text886 = createNode("Text");
Text886.string = new MFString(new java.lang.String["76"]);
FontStyle FontStyle887 = createNode("FontStyle");
FontStyle887.size = 0.035;
Text886.fontStyle = FontStyle887;

Shape885.geometry = Text886;

Billboard884.children = new MFNode();

Billboard884.children[0] = Shape885;

HAnimSite881.children[2] = Billboard884;

HAnimSegment873.children[2] = HAnimSite881;

HAnimJoint872.children = new MFNode();

HAnimJoint872.children[0] = HAnimSegment873;

HAnimJoint HAnimJoint888 = createNode("HAnimJoint");
HAnimJoint888.name = "l_metacarpophalangeal_3";
HAnimJoint888.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint888.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment889 = createNode("HAnimSegment");
HAnimSegment889.name = "l_carpal_proximal_phalanx_3";
HAnimSegment889.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform890 = createNode("Transform");
Transform890.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Transform Transform891 = createNode("Transform");
//Empty Transform
Shape Shape892 = createNode("Shape");
Shape892.USE = "HAnimJointShape";
Transform891.child = new undefined();

Transform891.child[0] = Shape892;

Transform890.children = new MFNode();

Transform890.children[0] = Transform891;

HAnimSegment889.children = new MFNode();

HAnimSegment889.children[0] = Transform890;

Shape Shape893 = createNode("Shape");
LineSet LineSet894 = createNode("LineSet");
LineSet894.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate895 = createNode("Coordinate");
Coordinate895.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet894.coord = Coordinate895;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA896 = createNode("ColorRGBA");
ColorRGBA896.USE = "HAnimSegmentLineColorRGBA";
LineSet894.color = ColorRGBA896;

Shape893.geometry = LineSet894;

HAnimSegment889.children[1] = Shape893;

HAnimJoint888.children = new MFNode();

HAnimJoint888.children[0] = HAnimSegment889;

HAnimJoint HAnimJoint897 = createNode("HAnimJoint");
HAnimJoint897.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint897.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint897.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment898 = createNode("HAnimSegment");
HAnimSegment898.name = "l_carpal_middle_phalanx_3";
HAnimSegment898.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform899 = createNode("Transform");
Transform899.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Transform Transform900 = createNode("Transform");
//Empty Transform
Shape Shape901 = createNode("Shape");
Shape901.USE = "HAnimJointShape";
Transform900.child = new undefined();

Transform900.child[0] = Shape901;

Transform899.children = new MFNode();

Transform899.children[0] = Transform900;

HAnimSegment898.children = new MFNode();

HAnimSegment898.children[0] = Transform899;

Shape Shape902 = createNode("Shape");
LineSet LineSet903 = createNode("LineSet");
LineSet903.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate904 = createNode("Coordinate");
Coordinate904.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet903.coord = Coordinate904;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA905 = createNode("ColorRGBA");
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA";
LineSet903.color = ColorRGBA905;

Shape902.geometry = LineSet903;

HAnimSegment898.children[1] = Shape902;

HAnimJoint897.children = new MFNode();

HAnimJoint897.children[0] = HAnimSegment898;

HAnimJoint HAnimJoint906 = createNode("HAnimJoint");
HAnimJoint906.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint906.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint906.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint897.children[1] = HAnimJoint906;

HAnimJoint888.children[1] = HAnimJoint897;

HAnimJoint872.children[1] = HAnimJoint888;

HAnimJoint786.children[3] = HAnimJoint872;

HAnimJoint HAnimJoint907 = createNode("HAnimJoint");
HAnimJoint907.name = "l_carpometacarpal_4";
HAnimJoint907.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint907.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment908 = createNode("HAnimSegment");
HAnimSegment908.name = "l_metacarpal_4";
HAnimSegment908.DEF = "hanim_l_metacarpal_4";
Transform Transform909 = createNode("Transform");
Transform909.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Transform Transform910 = createNode("Transform");
//Empty Transform
Shape Shape911 = createNode("Shape");
Shape911.USE = "HAnimJointShape";
Transform910.child = new undefined();

Transform910.child[0] = Shape911;

Transform909.children = new MFNode();

Transform909.children[0] = Transform910;

HAnimSegment908.children = new MFNode();

HAnimSegment908.children[0] = Transform909;

Shape Shape912 = createNode("Shape");
LineSet LineSet913 = createNode("LineSet");
LineSet913.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate914 = createNode("Coordinate");
Coordinate914.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet913.coord = Coordinate914;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA915 = createNode("ColorRGBA");
ColorRGBA915.USE = "HAnimSegmentLineColorRGBA";
LineSet913.color = ColorRGBA915;

Shape912.geometry = LineSet913;

HAnimSegment908.children[1] = Shape912;

HAnimJoint907.children = new MFNode();

HAnimJoint907.children[0] = HAnimSegment908;

HAnimJoint HAnimJoint916 = createNode("HAnimJoint");
HAnimJoint916.name = "l_metacarpophalangeal_4";
HAnimJoint916.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint916.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment917 = createNode("HAnimSegment");
HAnimSegment917.name = "l_carpal_proximal_phalanx_4";
HAnimSegment917.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform918 = createNode("Transform");
Transform918.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform919 = createNode("Transform");
//Empty Transform
Shape Shape920 = createNode("Shape");
Shape920.USE = "HAnimJointShape";
Transform919.child = new undefined();

Transform919.child[0] = Shape920;

Transform918.children = new MFNode();

Transform918.children[0] = Transform919;

HAnimSegment917.children = new MFNode();

HAnimSegment917.children[0] = Transform918;

Shape Shape921 = createNode("Shape");
LineSet LineSet922 = createNode("LineSet");
LineSet922.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate923 = createNode("Coordinate");
Coordinate923.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet922.coord = Coordinate923;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA924 = createNode("ColorRGBA");
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA";
LineSet922.color = ColorRGBA924;

Shape921.geometry = LineSet922;

HAnimSegment917.children[1] = Shape921;

HAnimJoint916.children = new MFNode();

HAnimJoint916.children[0] = HAnimSegment917;

HAnimJoint HAnimJoint925 = createNode("HAnimJoint");
HAnimJoint925.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint925.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint925.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment926 = createNode("HAnimSegment");
HAnimSegment926.name = "l_carpal_middle_phalanx_4";
HAnimSegment926.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform927 = createNode("Transform");
Transform927.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Transform Transform928 = createNode("Transform");
//Empty Transform
Shape Shape929 = createNode("Shape");
Shape929.USE = "HAnimJointShape";
Transform928.child = new undefined();

Transform928.child[0] = Shape929;

Transform927.children = new MFNode();

Transform927.children[0] = Transform928;

HAnimSegment926.children = new MFNode();

HAnimSegment926.children[0] = Transform927;

Shape Shape930 = createNode("Shape");
LineSet LineSet931 = createNode("LineSet");
LineSet931.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate932 = createNode("Coordinate");
Coordinate932.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet931.coord = Coordinate932;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA933 = createNode("ColorRGBA");
ColorRGBA933.USE = "HAnimSegmentLineColorRGBA";
LineSet931.color = ColorRGBA933;

Shape930.geometry = LineSet931;

HAnimSegment926.children[1] = Shape930;

HAnimJoint925.children = new MFNode();

HAnimJoint925.children[0] = HAnimSegment926;

HAnimJoint HAnimJoint934 = createNode("HAnimJoint");
HAnimJoint934.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint934.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint934.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint925.children[1] = HAnimJoint934;

HAnimJoint916.children[1] = HAnimJoint925;

HAnimJoint907.children[1] = HAnimJoint916;

HAnimJoint786.children[4] = HAnimJoint907;

HAnimJoint HAnimJoint935 = createNode("HAnimJoint");
HAnimJoint935.name = "l_carpometacarpal_5";
HAnimJoint935.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint935.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment936 = createNode("HAnimSegment");
HAnimSegment936.name = "l_metacarpal_5";
HAnimSegment936.DEF = "hanim_l_metacarpal_5";
Transform Transform937 = createNode("Transform");
Transform937.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Transform Transform938 = createNode("Transform");
//Empty Transform
Shape Shape939 = createNode("Shape");
Shape939.USE = "HAnimJointShape";
Transform938.child = new undefined();

Transform938.child[0] = Shape939;

Transform937.children = new MFNode();

Transform937.children[0] = Transform938;

HAnimSegment936.children = new MFNode();

HAnimSegment936.children[0] = Transform937;

Shape Shape940 = createNode("Shape");
LineSet LineSet941 = createNode("LineSet");
LineSet941.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate942 = createNode("Coordinate");
Coordinate942.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet941.coord = Coordinate942;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA943 = createNode("ColorRGBA");
ColorRGBA943.USE = "HAnimSegmentLineColorRGBA";
LineSet941.color = ColorRGBA943;

Shape940.geometry = LineSet941;

HAnimSegment936.children[1] = Shape940;

HAnimSite HAnimSite944 = createNode("HAnimSite");
HAnimSite944.name = "l_metacarpal_phalanx_5";
HAnimSite944.DEF = "hanim_l_metacarpal_phalanx_5";
HAnimSite944.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor945 = createNode("TouchSensor");
TouchSensor945.description = "HAnimSite 77 l_metacarpal_phalanx_5";
HAnimSite944.children = new MFNode();

HAnimSite944.children[0] = TouchSensor945;

Shape Shape946 = createNode("Shape");
Shape946.USE = "HAnimSiteShape";
HAnimSite944.children[1] = Shape946;

Billboard Billboard947 = createNode("Billboard");
Shape Shape948 = createNode("Shape");
Text Text949 = createNode("Text");
Text949.string = new MFString(new java.lang.String["77"]);
FontStyle FontStyle950 = createNode("FontStyle");
FontStyle950.size = 0.035;
Text949.fontStyle = FontStyle950;

Shape948.geometry = Text949;

Billboard947.children = new MFNode();

Billboard947.children[0] = Shape948;

HAnimSite944.children[2] = Billboard947;

HAnimSegment936.children[2] = HAnimSite944;

HAnimJoint935.children = new MFNode();

HAnimJoint935.children[0] = HAnimSegment936;

HAnimJoint HAnimJoint951 = createNode("HAnimJoint");
HAnimJoint951.name = "l_metacarpophalangeal_5";
HAnimJoint951.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint951.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment952 = createNode("HAnimSegment");
HAnimSegment952.name = "l_carpal_proximal_phalanx_5";
HAnimSegment952.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform953 = createNode("Transform");
Transform953.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Transform Transform954 = createNode("Transform");
//Empty Transform
Shape Shape955 = createNode("Shape");
Shape955.USE = "HAnimJointShape";
Transform954.child = new undefined();

Transform954.child[0] = Shape955;

Transform953.children = new MFNode();

Transform953.children[0] = Transform954;

HAnimSegment952.children = new MFNode();

HAnimSegment952.children[0] = Transform953;

Shape Shape956 = createNode("Shape");
LineSet LineSet957 = createNode("LineSet");
LineSet957.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate958 = createNode("Coordinate");
Coordinate958.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet957.coord = Coordinate958;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA959 = createNode("ColorRGBA");
ColorRGBA959.USE = "HAnimSegmentLineColorRGBA";
LineSet957.color = ColorRGBA959;

Shape956.geometry = LineSet957;

HAnimSegment952.children[1] = Shape956;

HAnimJoint951.children = new MFNode();

HAnimJoint951.children[0] = HAnimSegment952;

HAnimJoint HAnimJoint960 = createNode("HAnimJoint");
HAnimJoint960.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint960.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint960.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment961 = createNode("HAnimSegment");
HAnimSegment961.name = "l_carpal_middle_phalanx_5";
HAnimSegment961.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform962 = createNode("Transform");
Transform962.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform963 = createNode("Transform");
//Empty Transform
Shape Shape964 = createNode("Shape");
Shape964.USE = "HAnimJointShape";
Transform963.child = new undefined();

Transform963.child[0] = Shape964;

Transform962.children = new MFNode();

Transform962.children[0] = Transform963;

HAnimSegment961.children = new MFNode();

HAnimSegment961.children[0] = Transform962;

Shape Shape965 = createNode("Shape");
LineSet LineSet966 = createNode("LineSet");
LineSet966.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate967 = createNode("Coordinate");
Coordinate967.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet966.coord = Coordinate967;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA968 = createNode("ColorRGBA");
ColorRGBA968.USE = "HAnimSegmentLineColorRGBA";
LineSet966.color = ColorRGBA968;

Shape965.geometry = LineSet966;

HAnimSegment961.children[1] = Shape965;

HAnimJoint960.children = new MFNode();

HAnimJoint960.children[0] = HAnimSegment961;

HAnimJoint HAnimJoint969 = createNode("HAnimJoint");
HAnimJoint969.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint969.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint969.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint960.children[1] = HAnimJoint969;

HAnimJoint951.children[1] = HAnimJoint960;

HAnimJoint935.children[1] = HAnimJoint951;

HAnimJoint786.children[5] = HAnimJoint935;

HAnimJoint749.children[1] = HAnimJoint786;

HAnimJoint726.children[1] = HAnimJoint749;

HAnimJoint717.children[1] = HAnimJoint726;

HAnimJoint673.children[1] = HAnimJoint717;

HAnimJoint602.children[2] = HAnimJoint673;

HAnimJoint HAnimJoint970 = createNode("HAnimJoint");
HAnimJoint970.name = "r_sternoclavicular";
HAnimJoint970.DEF = "hanim_r_sternoclavicular";
HAnimJoint970.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimSegment HAnimSegment971 = createNode("HAnimSegment");
HAnimSegment971.name = "r_clavicle";
HAnimSegment971.DEF = "hanim_r_clavicle";
Transform Transform972 = createNode("Transform");
Transform972.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
Transform Transform973 = createNode("Transform");
//Empty Transform
Shape Shape974 = createNode("Shape");
Shape974.USE = "HAnimJointShape";
Transform973.child = new undefined();

Transform973.child[0] = Shape974;

Transform972.children = new MFNode();

Transform972.children[0] = Transform973;

HAnimSegment971.children = new MFNode();

HAnimSegment971.children[0] = Transform972;

Shape Shape975 = createNode("Shape");
LineSet LineSet976 = createNode("LineSet");
LineSet976.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate977 = createNode("Coordinate");
Coordinate977.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet976.coord = Coordinate977;

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA ColorRGBA978 = createNode("ColorRGBA");
ColorRGBA978.USE = "HAnimSegmentLineColorRGBA";
LineSet976.color = ColorRGBA978;

Shape975.geometry = LineSet976;

HAnimSegment971.children[1] = Shape975;

HAnimSite HAnimSite979 = createNode("HAnimSite");
HAnimSite979.name = "r_acromion";
HAnimSite979.DEF = "hanim_r_acromion";
HAnimSite979.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor980 = createNode("TouchSensor");
TouchSensor980.description = "HAnimSite 20 r_acromion";
HAnimSite979.children = new MFNode();

HAnimSite979.children[0] = TouchSensor980;

Shape Shape981 = createNode("Shape");
Shape981.USE = "HAnimSiteShape";
HAnimSite979.children[1] = Shape981;

Billboard Billboard982 = createNode("Billboard");
Shape Shape983 = createNode("Shape");
Text Text984 = createNode("Text");
Text984.string = new MFString(new java.lang.String["20"]);
FontStyle FontStyle985 = createNode("FontStyle");
FontStyle985.size = 0.035;
Text984.fontStyle = FontStyle985;

Shape983.geometry = Text984;

Billboard982.children = new MFNode();

Billboard982.children[0] = Shape983;

HAnimSite979.children[2] = Billboard982;

HAnimSegment971.children[2] = HAnimSite979;

HAnimSite HAnimSite986 = createNode("HAnimSite");
HAnimSite986.name = "r_axilla_distal";
HAnimSite986.DEF = "hanim_r_axilla_distal";
HAnimSite986.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor987 = createNode("TouchSensor");
TouchSensor987.description = "HAnimSite 22 r_axilla_distal";
HAnimSite986.children = new MFNode();

HAnimSite986.children[0] = TouchSensor987;

Shape Shape988 = createNode("Shape");
Shape988.USE = "HAnimSiteShape";
HAnimSite986.children[1] = Shape988;

Billboard Billboard989 = createNode("Billboard");
Shape Shape990 = createNode("Shape");
Text Text991 = createNode("Text");
Text991.string = new MFString(new java.lang.String["22"]);
FontStyle FontStyle992 = createNode("FontStyle");
FontStyle992.size = 0.035;
Text991.fontStyle = FontStyle992;

Shape990.geometry = Text991;

Billboard989.children = new MFNode();

Billboard989.children[0] = Shape990;

HAnimSite986.children[2] = Billboard989;

HAnimSegment971.children[3] = HAnimSite986;

HAnimSite HAnimSite993 = createNode("HAnimSite");
HAnimSite993.name = "r_axilla_posterior_folds";
HAnimSite993.DEF = "hanim_r_axilla_posterior_folds";
TouchSensor TouchSensor994 = createNode("TouchSensor");
TouchSensor994.description = "HAnimSite 23 r_axilla_posterior_folds";
HAnimSite993.children = new MFNode();

HAnimSite993.children[0] = TouchSensor994;

Shape Shape995 = createNode("Shape");
Shape995.USE = "HAnimSiteShape";
HAnimSite993.children[1] = Shape995;

Billboard Billboard996 = createNode("Billboard");
Shape Shape997 = createNode("Shape");
Text Text998 = createNode("Text");
Text998.string = new MFString(new java.lang.String["23"]);
FontStyle FontStyle999 = createNode("FontStyle");
FontStyle999.size = 0.035;
Text998.fontStyle = FontStyle999;

Shape997.geometry = Text998;

Billboard996.children = new MFNode();

Billboard996.children[0] = Shape997;

HAnimSite993.children[2] = Billboard996;

HAnimSegment971.children[4] = HAnimSite993;

HAnimSite HAnimSite1000 = createNode("HAnimSite");
HAnimSite1000.name = "r_axilla_proximal";
HAnimSite1000.DEF = "hanim_r_axilla_proximal";
HAnimSite1000.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor1001 = createNode("TouchSensor");
TouchSensor1001.description = "HAnimSite 21 r_axilla_proximal";
HAnimSite1000.children = new MFNode();

HAnimSite1000.children[0] = TouchSensor1001;

Shape Shape1002 = createNode("Shape");
Shape1002.USE = "HAnimSiteShape";
HAnimSite1000.children[1] = Shape1002;

Billboard Billboard1003 = createNode("Billboard");
Shape Shape1004 = createNode("Shape");
Text Text1005 = createNode("Text");
Text1005.string = new MFString(new java.lang.String["21"]);
FontStyle FontStyle1006 = createNode("FontStyle");
FontStyle1006.size = 0.035;
Text1005.fontStyle = FontStyle1006;

Shape1004.geometry = Text1005;

Billboard1003.children = new MFNode();

Billboard1003.children[0] = Shape1004;

HAnimSite1000.children[2] = Billboard1003;

HAnimSegment971.children[5] = HAnimSite1000;

HAnimSite HAnimSite1007 = createNode("HAnimSite");
HAnimSite1007.name = "r_clavicale";
HAnimSite1007.DEF = "hanim_r_clavicale";
HAnimSite1007.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor1008 = createNode("TouchSensor");
TouchSensor1008.description = "HAnimSite 19 r_clavicale";
HAnimSite1007.children = new MFNode();

HAnimSite1007.children[0] = TouchSensor1008;

Shape Shape1009 = createNode("Shape");
Shape1009.USE = "HAnimSiteShape";
HAnimSite1007.children[1] = Shape1009;

Billboard Billboard1010 = createNode("Billboard");
Shape Shape1011 = createNode("Shape");
Text Text1012 = createNode("Text");
Text1012.string = new MFString(new java.lang.String["19"]);
FontStyle FontStyle1013 = createNode("FontStyle");
FontStyle1013.size = 0.035;
Text1012.fontStyle = FontStyle1013;

Shape1011.geometry = Text1012;

Billboard1010.children = new MFNode();

Billboard1010.children[0] = Shape1011;

HAnimSite1007.children[2] = Billboard1010;

HAnimSegment971.children[6] = HAnimSite1007;

HAnimJoint970.children = new MFNode();

HAnimJoint970.children[0] = HAnimSegment971;

HAnimJoint HAnimJoint1014 = createNode("HAnimJoint");
HAnimJoint1014.name = "r_acromioclavicular";
HAnimJoint1014.DEF = "hanim_r_acromioclavicular";
HAnimJoint1014.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimSegment HAnimSegment1015 = createNode("HAnimSegment");
HAnimSegment1015.name = "r_scapula";
HAnimSegment1015.DEF = "hanim_r_scapula";
Transform Transform1016 = createNode("Transform");
Transform1016.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform1017 = createNode("Transform");
//Empty Transform
Shape Shape1018 = createNode("Shape");
Shape1018.USE = "HAnimJointShape";
Transform1017.child = new undefined();

Transform1017.child[0] = Shape1018;

Transform1016.children = new MFNode();

Transform1016.children[0] = Transform1017;

HAnimSegment1015.children = new MFNode();

HAnimSegment1015.children[0] = Transform1016;

Shape Shape1019 = createNode("Shape");
LineSet LineSet1020 = createNode("LineSet");
LineSet1020.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1021 = createNode("Coordinate");
Coordinate1021.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1020.coord = Coordinate1021;

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA ColorRGBA1022 = createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSegmentLineColorRGBA";
LineSet1020.color = ColorRGBA1022;

Shape1019.geometry = LineSet1020;

HAnimSegment1015.children[1] = Shape1019;

HAnimJoint1014.children = new MFNode();

HAnimJoint1014.children[0] = HAnimSegment1015;

HAnimJoint HAnimJoint1023 = createNode("HAnimJoint");
HAnimJoint1023.name = "r_shoulder";
HAnimJoint1023.DEF = "hanim_r_shoulder";
HAnimJoint1023.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment HAnimSegment1024 = createNode("HAnimSegment");
HAnimSegment1024.name = "r_upperarm";
HAnimSegment1024.DEF = "hanim_r_upperarm";
Transform Transform1025 = createNode("Transform");
Transform1025.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform1026 = createNode("Transform");
//Empty Transform
Shape Shape1027 = createNode("Shape");
Shape1027.USE = "HAnimJointShape";
Transform1026.child = new undefined();

Transform1026.child[0] = Shape1027;

Transform1025.children = new MFNode();

Transform1025.children[0] = Transform1026;

HAnimSegment1024.children = new MFNode();

HAnimSegment1024.children[0] = Transform1025;

Shape Shape1028 = createNode("Shape");
LineSet LineSet1029 = createNode("LineSet");
LineSet1029.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1030 = createNode("Coordinate");
Coordinate1030.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1029.coord = Coordinate1030;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA1031 = createNode("ColorRGBA");
ColorRGBA1031.USE = "HAnimSegmentLineColorRGBA";
LineSet1029.color = ColorRGBA1031;

Shape1028.geometry = LineSet1029;

HAnimSegment1024.children[1] = Shape1028;

HAnimSite HAnimSite1032 = createNode("HAnimSite");
HAnimSite1032.name = "r_bideltoid";
HAnimSite1032.DEF = "hanim_r_bideltoid";
TouchSensor TouchSensor1033 = createNode("TouchSensor");
TouchSensor1033.description = "HAnimSite 97 r_bideltoid";
HAnimSite1032.children = new MFNode();

HAnimSite1032.children[0] = TouchSensor1033;

Shape Shape1034 = createNode("Shape");
Shape1034.USE = "HAnimSiteShape";
HAnimSite1032.children[1] = Shape1034;

Billboard Billboard1035 = createNode("Billboard");
Shape Shape1036 = createNode("Shape");
Text Text1037 = createNode("Text");
Text1037.string = new MFString(new java.lang.String["97"]);
FontStyle FontStyle1038 = createNode("FontStyle");
FontStyle1038.size = 0.035;
Text1037.fontStyle = FontStyle1038;

Shape1036.geometry = Text1037;

Billboard1035.children = new MFNode();

Billboard1035.children[0] = Shape1036;

HAnimSite1032.children[2] = Billboard1035;

HAnimSegment1024.children[2] = HAnimSite1032;

HAnimSite HAnimSite1039 = createNode("HAnimSite");
HAnimSite1039.name = "r_humeral_lateral_epicondyles";
HAnimSite1039.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite1039.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1040 = createNode("TouchSensor");
TouchSensor1040.description = "HAnimSite 66 r_humeral_lateral_epicondyles";
HAnimSite1039.children = new MFNode();

HAnimSite1039.children[0] = TouchSensor1040;

Shape Shape1041 = createNode("Shape");
Shape1041.USE = "HAnimSiteShape";
HAnimSite1039.children[1] = Shape1041;

Billboard Billboard1042 = createNode("Billboard");
Shape Shape1043 = createNode("Shape");
Text Text1044 = createNode("Text");
Text1044.string = new MFString(new java.lang.String["66"]);
FontStyle FontStyle1045 = createNode("FontStyle");
FontStyle1045.size = 0.035;
Text1044.fontStyle = FontStyle1045;

Shape1043.geometry = Text1044;

Billboard1042.children = new MFNode();

Billboard1042.children[0] = Shape1043;

HAnimSite1039.children[2] = Billboard1042;

HAnimSegment1024.children[3] = HAnimSite1039;

HAnimJoint1023.children = new MFNode();

HAnimJoint1023.children[0] = HAnimSegment1024;

HAnimJoint HAnimJoint1046 = createNode("HAnimJoint");
HAnimJoint1046.name = "r_elbow";
HAnimJoint1046.DEF = "hanim_r_elbow";
HAnimJoint1046.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment HAnimSegment1047 = createNode("HAnimSegment");
HAnimSegment1047.name = "r_forearm";
HAnimSegment1047.DEF = "hanim_r_forearm";
Transform Transform1048 = createNode("Transform");
Transform1048.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform1049 = createNode("Transform");
//Empty Transform
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
Coordinate1053.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1052.coord = Coordinate1053;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA1054 = createNode("ColorRGBA");
ColorRGBA1054.USE = "HAnimSegmentLineColorRGBA";
LineSet1052.color = ColorRGBA1054;

Shape1051.geometry = LineSet1052;

HAnimSegment1047.children[1] = Shape1051;

HAnimSite HAnimSite1055 = createNode("HAnimSite");
HAnimSite1055.name = "r_humeral_medial_epicondyles";
HAnimSite1055.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite1055.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1056 = createNode("TouchSensor");
TouchSensor1056.description = "HAnimSite 67 r_humeral_medial_epicondyles";
HAnimSite1055.children = new MFNode();

HAnimSite1055.children[0] = TouchSensor1056;

Shape Shape1057 = createNode("Shape");
Shape1057.USE = "HAnimSiteShape";
HAnimSite1055.children[1] = Shape1057;

Billboard Billboard1058 = createNode("Billboard");
Shape Shape1059 = createNode("Shape");
Text Text1060 = createNode("Text");
Text1060.string = new MFString(new java.lang.String["67"]);
FontStyle FontStyle1061 = createNode("FontStyle");
FontStyle1061.size = 0.035;
Text1060.fontStyle = FontStyle1061;

Shape1059.geometry = Text1060;

Billboard1058.children = new MFNode();

Billboard1058.children[0] = Shape1059;

HAnimSite1055.children[2] = Billboard1058;

HAnimSegment1047.children[2] = HAnimSite1055;

HAnimSite HAnimSite1062 = createNode("HAnimSite");
HAnimSite1062.name = "r_olecranon";
HAnimSite1062.DEF = "hanim_r_olecranon";
HAnimSite1062.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1063 = createNode("TouchSensor");
TouchSensor1063.description = "HAnimSite 68 r_olecranon";
HAnimSite1062.children = new MFNode();

HAnimSite1062.children[0] = TouchSensor1063;

Shape Shape1064 = createNode("Shape");
Shape1064.USE = "HAnimSiteShape";
HAnimSite1062.children[1] = Shape1064;

Billboard Billboard1065 = createNode("Billboard");
Shape Shape1066 = createNode("Shape");
Text Text1067 = createNode("Text");
Text1067.string = new MFString(new java.lang.String["68"]);
FontStyle FontStyle1068 = createNode("FontStyle");
FontStyle1068.size = 0.035;
Text1067.fontStyle = FontStyle1068;

Shape1066.geometry = Text1067;

Billboard1065.children = new MFNode();

Billboard1065.children[0] = Shape1066;

HAnimSite1062.children[2] = Billboard1065;

HAnimSegment1047.children[3] = HAnimSite1062;

HAnimSite HAnimSite1069 = createNode("HAnimSite");
HAnimSite1069.name = "r_radial_styloid";
HAnimSite1069.DEF = "hanim_r_radial_styloid";
HAnimSite1069.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1070 = createNode("TouchSensor");
TouchSensor1070.description = "HAnimSite 74 r_radial_styloid";
HAnimSite1069.children = new MFNode();

HAnimSite1069.children[0] = TouchSensor1070;

Shape Shape1071 = createNode("Shape");
Shape1071.USE = "HAnimSiteShape";
HAnimSite1069.children[1] = Shape1071;

Billboard Billboard1072 = createNode("Billboard");
Shape Shape1073 = createNode("Shape");
Text Text1074 = createNode("Text");
Text1074.string = new MFString(new java.lang.String["74"]);
FontStyle FontStyle1075 = createNode("FontStyle");
FontStyle1075.size = 0.035;
Text1074.fontStyle = FontStyle1075;

Shape1073.geometry = Text1074;

Billboard1072.children = new MFNode();

Billboard1072.children[0] = Shape1073;

HAnimSite1069.children[2] = Billboard1072;

HAnimSegment1047.children[4] = HAnimSite1069;

HAnimSite HAnimSite1076 = createNode("HAnimSite");
HAnimSite1076.name = "r_radiale";
HAnimSite1076.DEF = "hanim_r_radiale";
HAnimSite1076.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1077 = createNode("TouchSensor");
TouchSensor1077.description = "HAnimSite 72 r_radiale";
HAnimSite1076.children = new MFNode();

HAnimSite1076.children[0] = TouchSensor1077;

Shape Shape1078 = createNode("Shape");
Shape1078.USE = "HAnimSiteShape";
HAnimSite1076.children[1] = Shape1078;

Billboard Billboard1079 = createNode("Billboard");
Shape Shape1080 = createNode("Shape");
Text Text1081 = createNode("Text");
Text1081.string = new MFString(new java.lang.String["72"]);
FontStyle FontStyle1082 = createNode("FontStyle");
FontStyle1082.size = 0.035;
Text1081.fontStyle = FontStyle1082;

Shape1080.geometry = Text1081;

Billboard1079.children = new MFNode();

Billboard1079.children[0] = Shape1080;

HAnimSite1076.children[2] = Billboard1079;

HAnimSegment1047.children[5] = HAnimSite1076;

HAnimJoint1046.children = new MFNode();

HAnimJoint1046.children[0] = HAnimSegment1047;

HAnimJoint HAnimJoint1083 = createNode("HAnimJoint");
HAnimJoint1083.name = "r_radiocarpal";
HAnimJoint1083.DEF = "hanim_r_radiocarpal";
HAnimJoint1083.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimSegment HAnimSegment1084 = createNode("HAnimSegment");
HAnimSegment1084.name = "r_carpal";
HAnimSegment1084.DEF = "hanim_r_carpal";
Transform Transform1085 = createNode("Transform");
Transform1085.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1085.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1085.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
Transform Transform1086 = createNode("Transform");
Transform1086.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
Shape Shape1087 = createNode("Shape");
Shape1087.USE = "HAnimJointShape";
Transform1086.child = new undefined();

Transform1086.child[0] = Shape1087;

Transform1085.children = new MFNode();

Transform1085.children[0] = Transform1086;

HAnimSegment1084.children = new MFNode();

HAnimSegment1084.children[0] = Transform1085;

Shape Shape1088 = createNode("Shape");
LineSet LineSet1089 = createNode("LineSet");
LineSet1089.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1090 = createNode("Coordinate");
Coordinate1090.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet1089.coord = Coordinate1090;

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1091 = createNode("ColorRGBA");
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA";
LineSet1089.color = ColorRGBA1091;

Shape1088.geometry = LineSet1089;

HAnimSegment1084.children[1] = Shape1088;

HAnimSite HAnimSite1092 = createNode("HAnimSite");
HAnimSite1092.name = "r_ulnar_styloid";
HAnimSite1092.DEF = "hanim_r_ulnar_styloid";
HAnimSite1092.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1093 = createNode("TouchSensor");
TouchSensor1093.description = "HAnimSite 73 r_ulnar_styloid";
HAnimSite1092.children = new MFNode();

HAnimSite1092.children[0] = TouchSensor1093;

Shape Shape1094 = createNode("Shape");
Shape1094.USE = "HAnimSiteShape";
HAnimSite1092.children[1] = Shape1094;

Billboard Billboard1095 = createNode("Billboard");
Shape Shape1096 = createNode("Shape");
Text Text1097 = createNode("Text");
Text1097.string = new MFString(new java.lang.String["73"]);
FontStyle FontStyle1098 = createNode("FontStyle");
FontStyle1098.size = 0.035;
Text1097.fontStyle = FontStyle1098;

Shape1096.geometry = Text1097;

Billboard1095.children = new MFNode();

Billboard1095.children[0] = Shape1096;

HAnimSite1092.children[2] = Billboard1095;

HAnimSegment1084.children[2] = HAnimSite1092;

Shape Shape1099 = createNode("Shape");
LineSet LineSet1100 = createNode("LineSet");
LineSet1100.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1101 = createNode("Coordinate");
Coordinate1101.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet1100.coord = Coordinate1101;

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1102 = createNode("ColorRGBA");
ColorRGBA1102.USE = "HAnimSegmentLineColorRGBA";
LineSet1100.color = ColorRGBA1102;

Shape1099.geometry = LineSet1100;

HAnimSegment1084.children[3] = Shape1099;

Shape Shape1103 = createNode("Shape");
LineSet LineSet1104 = createNode("LineSet");
LineSet1104.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1105 = createNode("Coordinate");
Coordinate1105.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet1104.coord = Coordinate1105;

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1106 = createNode("ColorRGBA");
ColorRGBA1106.USE = "HAnimSegmentLineColorRGBA";
LineSet1104.color = ColorRGBA1106;

Shape1103.geometry = LineSet1104;

HAnimSegment1084.children[4] = Shape1103;

Shape Shape1107 = createNode("Shape");
LineSet LineSet1108 = createNode("LineSet");
LineSet1108.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1109 = createNode("Coordinate");
Coordinate1109.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet1108.coord = Coordinate1109;

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1110 = createNode("ColorRGBA");
ColorRGBA1110.USE = "HAnimSegmentLineColorRGBA";
LineSet1108.color = ColorRGBA1110;

Shape1107.geometry = LineSet1108;

HAnimSegment1084.children[5] = Shape1107;

Shape Shape1111 = createNode("Shape");
LineSet LineSet1112 = createNode("LineSet");
LineSet1112.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1113 = createNode("Coordinate");
Coordinate1113.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet1112.coord = Coordinate1113;

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1114 = createNode("ColorRGBA");
ColorRGBA1114.USE = "HAnimSegmentLineColorRGBA";
LineSet1112.color = ColorRGBA1114;

Shape1111.geometry = LineSet1112;

HAnimSegment1084.children[6] = Shape1111;

HAnimJoint1083.children = new MFNode();

HAnimJoint1083.children[0] = HAnimSegment1084;

HAnimJoint HAnimJoint1115 = createNode("HAnimJoint");
HAnimJoint1115.name = "r_carpometacarpal_1";
HAnimJoint1115.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1115.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimSegment HAnimSegment1116 = createNode("HAnimSegment");
HAnimSegment1116.name = "r_metacarpal_1";
HAnimSegment1116.DEF = "hanim_r_metacarpal_1";
Transform Transform1117 = createNode("Transform");
Transform1117.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
Transform Transform1118 = createNode("Transform");
//Empty Transform
Shape Shape1119 = createNode("Shape");
Shape1119.USE = "HAnimJointShape";
Transform1118.child = new undefined();

Transform1118.child[0] = Shape1119;

Transform1117.children = new MFNode();

Transform1117.children[0] = Transform1118;

HAnimSegment1116.children = new MFNode();

HAnimSegment1116.children[0] = Transform1117;

Shape Shape1120 = createNode("Shape");
LineSet LineSet1121 = createNode("LineSet");
LineSet1121.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1122 = createNode("Coordinate");
Coordinate1122.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1121.coord = Coordinate1122;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1123 = createNode("ColorRGBA");
ColorRGBA1123.USE = "HAnimSegmentLineColorRGBA";
LineSet1121.color = ColorRGBA1123;

Shape1120.geometry = LineSet1121;

HAnimSegment1116.children[1] = Shape1120;

HAnimJoint1115.children = new MFNode();

HAnimJoint1115.children[0] = HAnimSegment1116;

HAnimJoint HAnimJoint1124 = createNode("HAnimJoint");
HAnimJoint1124.name = "r_metacarpophalangeal_1";
HAnimJoint1124.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1124.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimSegment HAnimSegment1125 = createNode("HAnimSegment");
HAnimSegment1125.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1125.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform1126 = createNode("Transform");
Transform1126.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
Transform Transform1127 = createNode("Transform");
//Empty Transform
Shape Shape1128 = createNode("Shape");
Shape1128.USE = "HAnimJointShape";
Transform1127.child = new undefined();

Transform1127.child[0] = Shape1128;

Transform1126.children = new MFNode();

Transform1126.children[0] = Transform1127;

HAnimSegment1125.children = new MFNode();

HAnimSegment1125.children[0] = Transform1126;

Shape Shape1129 = createNode("Shape");
LineSet LineSet1130 = createNode("LineSet");
LineSet1130.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1131 = createNode("Coordinate");
Coordinate1131.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1130.coord = Coordinate1131;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1132 = createNode("ColorRGBA");
ColorRGBA1132.USE = "HAnimSegmentLineColorRGBA";
LineSet1130.color = ColorRGBA1132;

Shape1129.geometry = LineSet1130;

HAnimSegment1125.children[1] = Shape1129;

HAnimJoint1124.children = new MFNode();

HAnimJoint1124.children[0] = HAnimSegment1125;

HAnimJoint HAnimJoint1133 = createNode("HAnimJoint");
HAnimJoint1133.name = "r_carpal_interphalangeal_1";
HAnimJoint1133.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1133.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1124.children[1] = HAnimJoint1133;

HAnimJoint1115.children[1] = HAnimJoint1124;

HAnimJoint1083.children[1] = HAnimJoint1115;

HAnimJoint HAnimJoint1134 = createNode("HAnimJoint");
HAnimJoint1134.name = "r_carpometacarpal_2";
HAnimJoint1134.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1134.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimSegment HAnimSegment1135 = createNode("HAnimSegment");
HAnimSegment1135.name = "r_metacarpal_2";
HAnimSegment1135.DEF = "hanim_r_metacarpal_2";
Transform Transform1136 = createNode("Transform");
Transform1136.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
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
Coordinate1141.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1140.coord = Coordinate1141;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1142 = createNode("ColorRGBA");
ColorRGBA1142.USE = "HAnimSegmentLineColorRGBA";
LineSet1140.color = ColorRGBA1142;

Shape1139.geometry = LineSet1140;

HAnimSegment1135.children[1] = Shape1139;

HAnimSite HAnimSite1143 = createNode("HAnimSite");
HAnimSite1143.name = "r_metacarpal_phalanx_2";
HAnimSite1143.DEF = "hanim_r_metacarpal_phalanx_2";
HAnimSite1143.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1144 = createNode("TouchSensor");
TouchSensor1144.description = "HAnimSite 78 r_metacarpal_phalanx_2";
HAnimSite1143.children = new MFNode();

HAnimSite1143.children[0] = TouchSensor1144;

Shape Shape1145 = createNode("Shape");
Shape1145.USE = "HAnimSiteShape";
HAnimSite1143.children[1] = Shape1145;

Billboard Billboard1146 = createNode("Billboard");
Shape Shape1147 = createNode("Shape");
Text Text1148 = createNode("Text");
Text1148.string = new MFString(new java.lang.String["78"]);
FontStyle FontStyle1149 = createNode("FontStyle");
FontStyle1149.size = 0.035;
Text1148.fontStyle = FontStyle1149;

Shape1147.geometry = Text1148;

Billboard1146.children = new MFNode();

Billboard1146.children[0] = Shape1147;

HAnimSite1143.children[2] = Billboard1146;

HAnimSegment1135.children[2] = HAnimSite1143;

HAnimJoint1134.children = new MFNode();

HAnimJoint1134.children[0] = HAnimSegment1135;

HAnimJoint HAnimJoint1150 = createNode("HAnimJoint");
HAnimJoint1150.name = "r_metacarpophalangeal_2";
HAnimJoint1150.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1150.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimSegment HAnimSegment1151 = createNode("HAnimSegment");
HAnimSegment1151.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1151.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform1152 = createNode("Transform");
Transform1152.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform1153 = createNode("Transform");
//Empty Transform
Shape Shape1154 = createNode("Shape");
Shape1154.USE = "HAnimJointShape";
Transform1153.child = new undefined();

Transform1153.child[0] = Shape1154;

Transform1152.children = new MFNode();

Transform1152.children[0] = Transform1153;

HAnimSegment1151.children = new MFNode();

HAnimSegment1151.children[0] = Transform1152;

Shape Shape1155 = createNode("Shape");
LineSet LineSet1156 = createNode("LineSet");
LineSet1156.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1157 = createNode("Coordinate");
Coordinate1157.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1156.coord = Coordinate1157;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1158 = createNode("ColorRGBA");
ColorRGBA1158.USE = "HAnimSegmentLineColorRGBA";
LineSet1156.color = ColorRGBA1158;

Shape1155.geometry = LineSet1156;

HAnimSegment1151.children[1] = Shape1155;

HAnimJoint1150.children = new MFNode();

HAnimJoint1150.children[0] = HAnimSegment1151;

HAnimJoint HAnimJoint1159 = createNode("HAnimJoint");
HAnimJoint1159.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1159.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1159.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimSegment HAnimSegment1160 = createNode("HAnimSegment");
HAnimSegment1160.name = "r_carpal_middle_phalanx_2";
HAnimSegment1160.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform1161 = createNode("Transform");
Transform1161.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform1162 = createNode("Transform");
//Empty Transform
Shape Shape1163 = createNode("Shape");
Shape1163.USE = "HAnimJointShape";
Transform1162.child = new undefined();

Transform1162.child[0] = Shape1163;

Transform1161.children = new MFNode();

Transform1161.children[0] = Transform1162;

HAnimSegment1160.children = new MFNode();

HAnimSegment1160.children[0] = Transform1161;

Shape Shape1164 = createNode("Shape");
LineSet LineSet1165 = createNode("LineSet");
LineSet1165.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1166 = createNode("Coordinate");
Coordinate1166.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1165.coord = Coordinate1166;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1167 = createNode("ColorRGBA");
ColorRGBA1167.USE = "HAnimSegmentLineColorRGBA";
LineSet1165.color = ColorRGBA1167;

Shape1164.geometry = LineSet1165;

HAnimSegment1160.children[1] = Shape1164;

HAnimJoint1159.children = new MFNode();

HAnimJoint1159.children[0] = HAnimSegment1160;

HAnimJoint HAnimJoint1168 = createNode("HAnimJoint");
HAnimJoint1168.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1168.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1168.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1159.children[1] = HAnimJoint1168;

HAnimJoint1150.children[1] = HAnimJoint1159;

HAnimJoint1134.children[1] = HAnimJoint1150;

HAnimJoint1083.children[2] = HAnimJoint1134;

HAnimJoint HAnimJoint1169 = createNode("HAnimJoint");
HAnimJoint1169.name = "r_carpometacarpal_3";
HAnimJoint1169.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1169.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimSegment HAnimSegment1170 = createNode("HAnimSegment");
HAnimSegment1170.name = "r_metacarpal_3";
HAnimSegment1170.DEF = "hanim_r_metacarpal_3";
Transform Transform1171 = createNode("Transform");
Transform1171.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform1172 = createNode("Transform");
//Empty Transform
Shape Shape1173 = createNode("Shape");
Shape1173.USE = "HAnimJointShape";
Transform1172.child = new undefined();

Transform1172.child[0] = Shape1173;

Transform1171.children = new MFNode();

Transform1171.children[0] = Transform1172;

HAnimSegment1170.children = new MFNode();

HAnimSegment1170.children[0] = Transform1171;

Shape Shape1174 = createNode("Shape");
LineSet LineSet1175 = createNode("LineSet");
LineSet1175.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1176 = createNode("Coordinate");
Coordinate1176.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1175.coord = Coordinate1176;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1177 = createNode("ColorRGBA");
ColorRGBA1177.USE = "HAnimSegmentLineColorRGBA";
LineSet1175.color = ColorRGBA1177;

Shape1174.geometry = LineSet1175;

HAnimSegment1170.children[1] = Shape1174;

HAnimSite HAnimSite1178 = createNode("HAnimSite");
HAnimSite1178.name = "r_metacarpal_phalanx_3";
HAnimSite1178.DEF = "hanim_r_metacarpal_phalanx_3";
TouchSensor TouchSensor1179 = createNode("TouchSensor");
TouchSensor1179.description = "HAnimSite 79 r_metacarpal_phalanx_3";
HAnimSite1178.children = new MFNode();

HAnimSite1178.children[0] = TouchSensor1179;

Shape Shape1180 = createNode("Shape");
Shape1180.USE = "HAnimSiteShape";
HAnimSite1178.children[1] = Shape1180;

Billboard Billboard1181 = createNode("Billboard");
Shape Shape1182 = createNode("Shape");
Text Text1183 = createNode("Text");
Text1183.string = new MFString(new java.lang.String["79"]);
FontStyle FontStyle1184 = createNode("FontStyle");
FontStyle1184.size = 0.035;
Text1183.fontStyle = FontStyle1184;

Shape1182.geometry = Text1183;

Billboard1181.children = new MFNode();

Billboard1181.children[0] = Shape1182;

HAnimSite1178.children[2] = Billboard1181;

HAnimSegment1170.children[2] = HAnimSite1178;

HAnimJoint1169.children = new MFNode();

HAnimJoint1169.children[0] = HAnimSegment1170;

HAnimJoint HAnimJoint1185 = createNode("HAnimJoint");
HAnimJoint1185.name = "r_metacarpophalangeal_3";
HAnimJoint1185.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1185.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimSegment HAnimSegment1186 = createNode("HAnimSegment");
HAnimSegment1186.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1186.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform1187 = createNode("Transform");
Transform1187.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
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
Coordinate1192.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1191.coord = Coordinate1192;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1193 = createNode("ColorRGBA");
ColorRGBA1193.USE = "HAnimSegmentLineColorRGBA";
LineSet1191.color = ColorRGBA1193;

Shape1190.geometry = LineSet1191;

HAnimSegment1186.children[1] = Shape1190;

HAnimJoint1185.children = new MFNode();

HAnimJoint1185.children[0] = HAnimSegment1186;

HAnimJoint HAnimJoint1194 = createNode("HAnimJoint");
HAnimJoint1194.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1194.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1194.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimSegment HAnimSegment1195 = createNode("HAnimSegment");
HAnimSegment1195.name = "r_carpal_middle_phalanx_3";
HAnimSegment1195.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform1196 = createNode("Transform");
Transform1196.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
Transform Transform1197 = createNode("Transform");
//Empty Transform
Shape Shape1198 = createNode("Shape");
Shape1198.USE = "HAnimJointShape";
Transform1197.child = new undefined();

Transform1197.child[0] = Shape1198;

Transform1196.children = new MFNode();

Transform1196.children[0] = Transform1197;

HAnimSegment1195.children = new MFNode();

HAnimSegment1195.children[0] = Transform1196;

Shape Shape1199 = createNode("Shape");
LineSet LineSet1200 = createNode("LineSet");
LineSet1200.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1201 = createNode("Coordinate");
Coordinate1201.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1200.coord = Coordinate1201;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1202 = createNode("ColorRGBA");
ColorRGBA1202.USE = "HAnimSegmentLineColorRGBA";
LineSet1200.color = ColorRGBA1202;

Shape1199.geometry = LineSet1200;

HAnimSegment1195.children[1] = Shape1199;

HAnimJoint1194.children = new MFNode();

HAnimJoint1194.children[0] = HAnimSegment1195;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1203.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1203.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1194.children[1] = HAnimJoint1203;

HAnimJoint1185.children[1] = HAnimJoint1194;

HAnimJoint1169.children[1] = HAnimJoint1185;

HAnimJoint1083.children[3] = HAnimJoint1169;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.name = "r_carpometacarpal_4";
HAnimJoint1204.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1204.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimSegment HAnimSegment1205 = createNode("HAnimSegment");
HAnimSegment1205.name = "r_metacarpal_4";
HAnimSegment1205.DEF = "hanim_r_metacarpal_4";
Transform Transform1206 = createNode("Transform");
Transform1206.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
Transform Transform1207 = createNode("Transform");
//Empty Transform
Shape Shape1208 = createNode("Shape");
Shape1208.USE = "HAnimJointShape";
Transform1207.child = new undefined();

Transform1207.child[0] = Shape1208;

Transform1206.children = new MFNode();

Transform1206.children[0] = Transform1207;

HAnimSegment1205.children = new MFNode();

HAnimSegment1205.children[0] = Transform1206;

Shape Shape1209 = createNode("Shape");
LineSet LineSet1210 = createNode("LineSet");
LineSet1210.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1211 = createNode("Coordinate");
Coordinate1211.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1210.coord = Coordinate1211;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1212 = createNode("ColorRGBA");
ColorRGBA1212.USE = "HAnimSegmentLineColorRGBA";
LineSet1210.color = ColorRGBA1212;

Shape1209.geometry = LineSet1210;

HAnimSegment1205.children[1] = Shape1209;

HAnimJoint1204.children = new MFNode();

HAnimJoint1204.children[0] = HAnimSegment1205;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.name = "r_metacarpophalangeal_4";
HAnimJoint1213.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1213.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimSegment HAnimSegment1214 = createNode("HAnimSegment");
HAnimSegment1214.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1214.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform1215 = createNode("Transform");
Transform1215.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform1216 = createNode("Transform");
//Empty Transform
Shape Shape1217 = createNode("Shape");
Shape1217.USE = "HAnimJointShape";
Transform1216.child = new undefined();

Transform1216.child[0] = Shape1217;

Transform1215.children = new MFNode();

Transform1215.children[0] = Transform1216;

HAnimSegment1214.children = new MFNode();

HAnimSegment1214.children[0] = Transform1215;

Shape Shape1218 = createNode("Shape");
LineSet LineSet1219 = createNode("LineSet");
LineSet1219.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1220 = createNode("Coordinate");
Coordinate1220.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1219.coord = Coordinate1220;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1221 = createNode("ColorRGBA");
ColorRGBA1221.USE = "HAnimSegmentLineColorRGBA";
LineSet1219.color = ColorRGBA1221;

Shape1218.geometry = LineSet1219;

HAnimSegment1214.children[1] = Shape1218;

HAnimJoint1213.children = new MFNode();

HAnimJoint1213.children[0] = HAnimSegment1214;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1222.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1222.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimSegment HAnimSegment1223 = createNode("HAnimSegment");
HAnimSegment1223.name = "r_carpal_middle_phalanx_4";
HAnimSegment1223.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform1224 = createNode("Transform");
Transform1224.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform1225 = createNode("Transform");
//Empty Transform
Shape Shape1226 = createNode("Shape");
Shape1226.USE = "HAnimJointShape";
Transform1225.child = new undefined();

Transform1225.child[0] = Shape1226;

Transform1224.children = new MFNode();

Transform1224.children[0] = Transform1225;

HAnimSegment1223.children = new MFNode();

HAnimSegment1223.children[0] = Transform1224;

Shape Shape1227 = createNode("Shape");
LineSet LineSet1228 = createNode("LineSet");
LineSet1228.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1229 = createNode("Coordinate");
Coordinate1229.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1228.coord = Coordinate1229;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1230 = createNode("ColorRGBA");
ColorRGBA1230.USE = "HAnimSegmentLineColorRGBA";
LineSet1228.color = ColorRGBA1230;

Shape1227.geometry = LineSet1228;

HAnimSegment1223.children[1] = Shape1227;

HAnimJoint1222.children = new MFNode();

HAnimJoint1222.children[0] = HAnimSegment1223;

HAnimJoint HAnimJoint1231 = createNode("HAnimJoint");
HAnimJoint1231.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1231.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1231.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1222.children[1] = HAnimJoint1231;

HAnimJoint1213.children[1] = HAnimJoint1222;

HAnimJoint1204.children[1] = HAnimJoint1213;

HAnimJoint1083.children[4] = HAnimJoint1204;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.name = "r_carpometacarpal_5";
HAnimJoint1232.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1232.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimSegment HAnimSegment1233 = createNode("HAnimSegment");
HAnimSegment1233.name = "r_metacarpal_5";
HAnimSegment1233.DEF = "hanim_r_metacarpal_5";
Transform Transform1234 = createNode("Transform");
Transform1234.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
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
Coordinate1239.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1238.coord = Coordinate1239;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1240 = createNode("ColorRGBA");
ColorRGBA1240.USE = "HAnimSegmentLineColorRGBA";
LineSet1238.color = ColorRGBA1240;

Shape1237.geometry = LineSet1238;

HAnimSegment1233.children[1] = Shape1237;

HAnimSite HAnimSite1241 = createNode("HAnimSite");
HAnimSite1241.name = "r_metacarpal_phalanx_5";
HAnimSite1241.DEF = "hanim_r_metacarpal_phalanx_5";
HAnimSite1241.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1242 = createNode("TouchSensor");
TouchSensor1242.description = "HAnimSite 80 r_metacarpal_phalanx_5";
HAnimSite1241.children = new MFNode();

HAnimSite1241.children[0] = TouchSensor1242;

Shape Shape1243 = createNode("Shape");
Shape1243.USE = "HAnimSiteShape";
HAnimSite1241.children[1] = Shape1243;

Billboard Billboard1244 = createNode("Billboard");
Shape Shape1245 = createNode("Shape");
Text Text1246 = createNode("Text");
Text1246.string = new MFString(new java.lang.String["80"]);
FontStyle FontStyle1247 = createNode("FontStyle");
FontStyle1247.size = 0.035;
Text1246.fontStyle = FontStyle1247;

Shape1245.geometry = Text1246;

Billboard1244.children = new MFNode();

Billboard1244.children[0] = Shape1245;

HAnimSite1241.children[2] = Billboard1244;

HAnimSegment1233.children[2] = HAnimSite1241;

HAnimJoint1232.children = new MFNode();

HAnimJoint1232.children[0] = HAnimSegment1233;

HAnimJoint HAnimJoint1248 = createNode("HAnimJoint");
HAnimJoint1248.name = "r_metacarpophalangeal_5";
HAnimJoint1248.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1248.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimSegment HAnimSegment1249 = createNode("HAnimSegment");
HAnimSegment1249.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1249.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform1250 = createNode("Transform");
Transform1250.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
Transform Transform1251 = createNode("Transform");
//Empty Transform
Shape Shape1252 = createNode("Shape");
Shape1252.USE = "HAnimJointShape";
Transform1251.child = new undefined();

Transform1251.child[0] = Shape1252;

Transform1250.children = new MFNode();

Transform1250.children[0] = Transform1251;

HAnimSegment1249.children = new MFNode();

HAnimSegment1249.children[0] = Transform1250;

Shape Shape1253 = createNode("Shape");
LineSet LineSet1254 = createNode("LineSet");
LineSet1254.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1255 = createNode("Coordinate");
Coordinate1255.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1254.coord = Coordinate1255;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1256 = createNode("ColorRGBA");
ColorRGBA1256.USE = "HAnimSegmentLineColorRGBA";
LineSet1254.color = ColorRGBA1256;

Shape1253.geometry = LineSet1254;

HAnimSegment1249.children[1] = Shape1253;

HAnimJoint1248.children = new MFNode();

HAnimJoint1248.children[0] = HAnimSegment1249;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1257.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1257.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimSegment HAnimSegment1258 = createNode("HAnimSegment");
HAnimSegment1258.name = "r_carpal_middle_phalanx_5";
HAnimSegment1258.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform1259 = createNode("Transform");
Transform1259.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
Transform Transform1260 = createNode("Transform");
//Empty Transform
Shape Shape1261 = createNode("Shape");
Shape1261.USE = "HAnimJointShape";
Transform1260.child = new undefined();

Transform1260.child[0] = Shape1261;

Transform1259.children = new MFNode();

Transform1259.children[0] = Transform1260;

HAnimSegment1258.children = new MFNode();

HAnimSegment1258.children[0] = Transform1259;

Shape Shape1262 = createNode("Shape");
LineSet LineSet1263 = createNode("LineSet");
LineSet1263.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1264 = createNode("Coordinate");
Coordinate1264.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1263.coord = Coordinate1264;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1265 = createNode("ColorRGBA");
ColorRGBA1265.USE = "HAnimSegmentLineColorRGBA";
LineSet1263.color = ColorRGBA1265;

Shape1262.geometry = LineSet1263;

HAnimSegment1258.children[1] = Shape1262;

HAnimJoint1257.children = new MFNode();

HAnimJoint1257.children[0] = HAnimSegment1258;

HAnimJoint HAnimJoint1266 = createNode("HAnimJoint");
HAnimJoint1266.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1266.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1266.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1257.children[1] = HAnimJoint1266;

HAnimJoint1248.children[1] = HAnimJoint1257;

HAnimJoint1232.children[1] = HAnimJoint1248;

HAnimJoint1083.children[5] = HAnimJoint1232;

HAnimJoint1046.children[1] = HAnimJoint1083;

HAnimJoint1023.children[1] = HAnimJoint1046;

HAnimJoint1014.children[1] = HAnimJoint1023;

HAnimJoint970.children[1] = HAnimJoint1014;

HAnimJoint602.children[3] = HAnimJoint970;

HAnimJoint565.children[1] = HAnimJoint602;

HAnimJoint535.children[1] = HAnimJoint565;

HAnimJoint526.children[1] = HAnimJoint535;

HAnimJoint489.children[1] = HAnimJoint526;

HAnimJoint459.children[1] = HAnimJoint489;

HAnimJoint47.children[2] = HAnimJoint459;

HAnimHumanoid38.joints[1] = HAnimJoint47;

HAnimJoint HAnimJoint1267 = createNode("HAnimJoint");
HAnimJoint1267.USE = "hanim_humanoid_root";
HAnimHumanoid38.joints[2] = HAnimJoint1267;

HAnimJoint HAnimJoint1268 = createNode("HAnimJoint");
HAnimJoint1268.USE = "hanim_sacroiliac";
HAnimHumanoid38.joints[3] = HAnimJoint1268;

HAnimJoint HAnimJoint1269 = createNode("HAnimJoint");
HAnimJoint1269.USE = "hanim_l_hip";
HAnimHumanoid38.joints[4] = HAnimJoint1269;

HAnimJoint HAnimJoint1270 = createNode("HAnimJoint");
HAnimJoint1270.USE = "hanim_l_knee";
HAnimHumanoid38.joints[5] = HAnimJoint1270;

HAnimJoint HAnimJoint1271 = createNode("HAnimJoint");
HAnimJoint1271.USE = "hanim_l_talocrural";
HAnimHumanoid38.joints[6] = HAnimJoint1271;

HAnimJoint HAnimJoint1272 = createNode("HAnimJoint");
HAnimJoint1272.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid38.joints[7] = HAnimJoint1272;

HAnimJoint HAnimJoint1273 = createNode("HAnimJoint");
HAnimJoint1273.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid38.joints[8] = HAnimJoint1273;

HAnimJoint HAnimJoint1274 = createNode("HAnimJoint");
HAnimJoint1274.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid38.joints[9] = HAnimJoint1274;

HAnimJoint HAnimJoint1275 = createNode("HAnimJoint");
HAnimJoint1275.USE = "hanim_r_hip";
HAnimHumanoid38.joints[10] = HAnimJoint1275;

HAnimJoint HAnimJoint1276 = createNode("HAnimJoint");
HAnimJoint1276.USE = "hanim_r_knee";
HAnimHumanoid38.joints[11] = HAnimJoint1276;

HAnimJoint HAnimJoint1277 = createNode("HAnimJoint");
HAnimJoint1277.USE = "hanim_r_talocrural";
HAnimHumanoid38.joints[12] = HAnimJoint1277;

HAnimJoint HAnimJoint1278 = createNode("HAnimJoint");
HAnimJoint1278.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid38.joints[13] = HAnimJoint1278;

HAnimJoint HAnimJoint1279 = createNode("HAnimJoint");
HAnimJoint1279.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid38.joints[14] = HAnimJoint1279;

HAnimJoint HAnimJoint1280 = createNode("HAnimJoint");
HAnimJoint1280.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid38.joints[15] = HAnimJoint1280;

HAnimJoint HAnimJoint1281 = createNode("HAnimJoint");
HAnimJoint1281.USE = "hanim_vl5";
HAnimHumanoid38.joints[16] = HAnimJoint1281;

HAnimJoint HAnimJoint1282 = createNode("HAnimJoint");
HAnimJoint1282.USE = "hanim_vl3";
HAnimHumanoid38.joints[17] = HAnimJoint1282;

HAnimJoint HAnimJoint1283 = createNode("HAnimJoint");
HAnimJoint1283.USE = "hanim_vl1";
HAnimHumanoid38.joints[18] = HAnimJoint1283;

HAnimJoint HAnimJoint1284 = createNode("HAnimJoint");
HAnimJoint1284.USE = "hanim_vt10";
HAnimHumanoid38.joints[19] = HAnimJoint1284;

HAnimJoint HAnimJoint1285 = createNode("HAnimJoint");
HAnimJoint1285.USE = "hanim_vt6";
HAnimHumanoid38.joints[20] = HAnimJoint1285;

HAnimJoint HAnimJoint1286 = createNode("HAnimJoint");
HAnimJoint1286.USE = "hanim_vt1";
HAnimHumanoid38.joints[21] = HAnimJoint1286;

HAnimJoint HAnimJoint1287 = createNode("HAnimJoint");
HAnimJoint1287.USE = "hanim_vc4";
HAnimHumanoid38.joints[22] = HAnimJoint1287;

HAnimJoint HAnimJoint1288 = createNode("HAnimJoint");
HAnimJoint1288.USE = "hanim_vc2";
HAnimHumanoid38.joints[23] = HAnimJoint1288;

HAnimJoint HAnimJoint1289 = createNode("HAnimJoint");
HAnimJoint1289.USE = "hanim_skullbase";
HAnimHumanoid38.joints[24] = HAnimJoint1289;

HAnimJoint HAnimJoint1290 = createNode("HAnimJoint");
HAnimJoint1290.USE = "hanim_l_sternoclavicular";
HAnimHumanoid38.joints[25] = HAnimJoint1290;

HAnimJoint HAnimJoint1291 = createNode("HAnimJoint");
HAnimJoint1291.USE = "hanim_l_acromioclavicular";
HAnimHumanoid38.joints[26] = HAnimJoint1291;

HAnimJoint HAnimJoint1292 = createNode("HAnimJoint");
HAnimJoint1292.USE = "hanim_l_shoulder";
HAnimHumanoid38.joints[27] = HAnimJoint1292;

HAnimJoint HAnimJoint1293 = createNode("HAnimJoint");
HAnimJoint1293.USE = "hanim_l_elbow";
HAnimHumanoid38.joints[28] = HAnimJoint1293;

HAnimJoint HAnimJoint1294 = createNode("HAnimJoint");
HAnimJoint1294.USE = "hanim_l_radiocarpal";
HAnimHumanoid38.joints[29] = HAnimJoint1294;

HAnimJoint HAnimJoint1295 = createNode("HAnimJoint");
HAnimJoint1295.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid38.joints[30] = HAnimJoint1295;

HAnimJoint HAnimJoint1296 = createNode("HAnimJoint");
HAnimJoint1296.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid38.joints[31] = HAnimJoint1296;

HAnimJoint HAnimJoint1297 = createNode("HAnimJoint");
HAnimJoint1297.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid38.joints[32] = HAnimJoint1297;

HAnimJoint HAnimJoint1298 = createNode("HAnimJoint");
HAnimJoint1298.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid38.joints[33] = HAnimJoint1298;

HAnimJoint HAnimJoint1299 = createNode("HAnimJoint");
HAnimJoint1299.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid38.joints[34] = HAnimJoint1299;

HAnimJoint HAnimJoint1300 = createNode("HAnimJoint");
HAnimJoint1300.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[35] = HAnimJoint1300;

HAnimJoint HAnimJoint1301 = createNode("HAnimJoint");
HAnimJoint1301.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid38.joints[36] = HAnimJoint1301;

HAnimJoint HAnimJoint1302 = createNode("HAnimJoint");
HAnimJoint1302.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid38.joints[37] = HAnimJoint1302;

HAnimJoint HAnimJoint1303 = createNode("HAnimJoint");
HAnimJoint1303.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid38.joints[38] = HAnimJoint1303;

HAnimJoint HAnimJoint1304 = createNode("HAnimJoint");
HAnimJoint1304.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[39] = HAnimJoint1304;

HAnimJoint HAnimJoint1305 = createNode("HAnimJoint");
HAnimJoint1305.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid38.joints[40] = HAnimJoint1305;

HAnimJoint HAnimJoint1306 = createNode("HAnimJoint");
HAnimJoint1306.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid38.joints[41] = HAnimJoint1306;

HAnimJoint HAnimJoint1307 = createNode("HAnimJoint");
HAnimJoint1307.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid38.joints[42] = HAnimJoint1307;

HAnimJoint HAnimJoint1308 = createNode("HAnimJoint");
HAnimJoint1308.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[43] = HAnimJoint1308;

HAnimJoint HAnimJoint1309 = createNode("HAnimJoint");
HAnimJoint1309.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid38.joints[44] = HAnimJoint1309;

HAnimJoint HAnimJoint1310 = createNode("HAnimJoint");
HAnimJoint1310.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid38.joints[45] = HAnimJoint1310;

HAnimJoint HAnimJoint1311 = createNode("HAnimJoint");
HAnimJoint1311.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid38.joints[46] = HAnimJoint1311;

HAnimJoint HAnimJoint1312 = createNode("HAnimJoint");
HAnimJoint1312.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[47] = HAnimJoint1312;

HAnimJoint HAnimJoint1313 = createNode("HAnimJoint");
HAnimJoint1313.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid38.joints[48] = HAnimJoint1313;

HAnimJoint HAnimJoint1314 = createNode("HAnimJoint");
HAnimJoint1314.USE = "hanim_r_sternoclavicular";
HAnimHumanoid38.joints[49] = HAnimJoint1314;

HAnimJoint HAnimJoint1315 = createNode("HAnimJoint");
HAnimJoint1315.USE = "hanim_r_acromioclavicular";
HAnimHumanoid38.joints[50] = HAnimJoint1315;

HAnimJoint HAnimJoint1316 = createNode("HAnimJoint");
HAnimJoint1316.USE = "hanim_r_shoulder";
HAnimHumanoid38.joints[51] = HAnimJoint1316;

HAnimJoint HAnimJoint1317 = createNode("HAnimJoint");
HAnimJoint1317.USE = "hanim_r_elbow";
HAnimHumanoid38.joints[52] = HAnimJoint1317;

HAnimJoint HAnimJoint1318 = createNode("HAnimJoint");
HAnimJoint1318.USE = "hanim_r_radiocarpal";
HAnimHumanoid38.joints[53] = HAnimJoint1318;

HAnimJoint HAnimJoint1319 = createNode("HAnimJoint");
HAnimJoint1319.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid38.joints[54] = HAnimJoint1319;

HAnimJoint HAnimJoint1320 = createNode("HAnimJoint");
HAnimJoint1320.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid38.joints[55] = HAnimJoint1320;

HAnimJoint HAnimJoint1321 = createNode("HAnimJoint");
HAnimJoint1321.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid38.joints[56] = HAnimJoint1321;

HAnimJoint HAnimJoint1322 = createNode("HAnimJoint");
HAnimJoint1322.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid38.joints[57] = HAnimJoint1322;

HAnimJoint HAnimJoint1323 = createNode("HAnimJoint");
HAnimJoint1323.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid38.joints[58] = HAnimJoint1323;

HAnimJoint HAnimJoint1324 = createNode("HAnimJoint");
HAnimJoint1324.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[59] = HAnimJoint1324;

HAnimJoint HAnimJoint1325 = createNode("HAnimJoint");
HAnimJoint1325.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid38.joints[60] = HAnimJoint1325;

HAnimJoint HAnimJoint1326 = createNode("HAnimJoint");
HAnimJoint1326.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid38.joints[61] = HAnimJoint1326;

HAnimJoint HAnimJoint1327 = createNode("HAnimJoint");
HAnimJoint1327.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid38.joints[62] = HAnimJoint1327;

HAnimJoint HAnimJoint1328 = createNode("HAnimJoint");
HAnimJoint1328.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[63] = HAnimJoint1328;

HAnimJoint HAnimJoint1329 = createNode("HAnimJoint");
HAnimJoint1329.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid38.joints[64] = HAnimJoint1329;

HAnimJoint HAnimJoint1330 = createNode("HAnimJoint");
HAnimJoint1330.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid38.joints[65] = HAnimJoint1330;

HAnimJoint HAnimJoint1331 = createNode("HAnimJoint");
HAnimJoint1331.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid38.joints[66] = HAnimJoint1331;

HAnimJoint HAnimJoint1332 = createNode("HAnimJoint");
HAnimJoint1332.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[67] = HAnimJoint1332;

HAnimJoint HAnimJoint1333 = createNode("HAnimJoint");
HAnimJoint1333.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid38.joints[68] = HAnimJoint1333;

HAnimJoint HAnimJoint1334 = createNode("HAnimJoint");
HAnimJoint1334.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid38.joints[69] = HAnimJoint1334;

HAnimJoint HAnimJoint1335 = createNode("HAnimJoint");
HAnimJoint1335.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid38.joints[70] = HAnimJoint1335;

HAnimJoint HAnimJoint1336 = createNode("HAnimJoint");
HAnimJoint1336.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[71] = HAnimJoint1336;

HAnimJoint HAnimJoint1337 = createNode("HAnimJoint");
HAnimJoint1337.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid38.joints[72] = HAnimJoint1337;

HAnimSegment HAnimSegment1338 = createNode("HAnimSegment");
HAnimSegment1338.USE = "hanim_sacrum";
HAnimHumanoid38.segments[73] = HAnimSegment1338;

HAnimSegment HAnimSegment1339 = createNode("HAnimSegment");
HAnimSegment1339.USE = "hanim_pelvis";
HAnimHumanoid38.segments[74] = HAnimSegment1339;

HAnimSegment HAnimSegment1340 = createNode("HAnimSegment");
HAnimSegment1340.USE = "hanim_l_thigh";
HAnimHumanoid38.segments[75] = HAnimSegment1340;

HAnimSegment HAnimSegment1341 = createNode("HAnimSegment");
HAnimSegment1341.USE = "hanim_l_calf";
HAnimHumanoid38.segments[76] = HAnimSegment1341;

HAnimSegment HAnimSegment1342 = createNode("HAnimSegment");
HAnimSegment1342.USE = "hanim_l_talus";
HAnimHumanoid38.segments[77] = HAnimSegment1342;

HAnimSegment HAnimSegment1343 = createNode("HAnimSegment");
HAnimSegment1343.USE = "hanim_l_metatarsal_2";
HAnimHumanoid38.segments[78] = HAnimSegment1343;

HAnimSegment HAnimSegment1344 = createNode("HAnimSegment");
HAnimSegment1344.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid38.segments[79] = HAnimSegment1344;

HAnimSegment HAnimSegment1345 = createNode("HAnimSegment");
HAnimSegment1345.USE = "hanim_r_thigh";
HAnimHumanoid38.segments[80] = HAnimSegment1345;

HAnimSegment HAnimSegment1346 = createNode("HAnimSegment");
HAnimSegment1346.USE = "hanim_r_calf";
HAnimHumanoid38.segments[81] = HAnimSegment1346;

HAnimSegment HAnimSegment1347 = createNode("HAnimSegment");
HAnimSegment1347.USE = "hanim_r_talus";
HAnimHumanoid38.segments[82] = HAnimSegment1347;

HAnimSegment HAnimSegment1348 = createNode("HAnimSegment");
HAnimSegment1348.USE = "hanim_r_metatarsal_2";
HAnimHumanoid38.segments[83] = HAnimSegment1348;

HAnimSegment HAnimSegment1349 = createNode("HAnimSegment");
HAnimSegment1349.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid38.segments[84] = HAnimSegment1349;

HAnimSegment HAnimSegment1350 = createNode("HAnimSegment");
HAnimSegment1350.USE = "hanim_l5";
HAnimHumanoid38.segments[85] = HAnimSegment1350;

HAnimSegment HAnimSegment1351 = createNode("HAnimSegment");
HAnimSegment1351.USE = "hanim_l3";
HAnimHumanoid38.segments[86] = HAnimSegment1351;

HAnimSegment HAnimSegment1352 = createNode("HAnimSegment");
HAnimSegment1352.USE = "hanim_l1";
HAnimHumanoid38.segments[87] = HAnimSegment1352;

HAnimSegment HAnimSegment1353 = createNode("HAnimSegment");
HAnimSegment1353.USE = "hanim_t10";
HAnimHumanoid38.segments[88] = HAnimSegment1353;

HAnimSegment HAnimSegment1354 = createNode("HAnimSegment");
HAnimSegment1354.USE = "hanim_t6";
HAnimHumanoid38.segments[89] = HAnimSegment1354;

HAnimSegment HAnimSegment1355 = createNode("HAnimSegment");
HAnimSegment1355.USE = "hanim_t1";
HAnimHumanoid38.segments[90] = HAnimSegment1355;

HAnimSegment HAnimSegment1356 = createNode("HAnimSegment");
HAnimSegment1356.USE = "hanim_c4";
HAnimHumanoid38.segments[91] = HAnimSegment1356;

HAnimSegment HAnimSegment1357 = createNode("HAnimSegment");
HAnimSegment1357.USE = "hanim_c2";
HAnimHumanoid38.segments[92] = HAnimSegment1357;

HAnimSegment HAnimSegment1358 = createNode("HAnimSegment");
HAnimSegment1358.USE = "hanim_l_clavicle";
HAnimHumanoid38.segments[93] = HAnimSegment1358;

HAnimSegment HAnimSegment1359 = createNode("HAnimSegment");
HAnimSegment1359.USE = "hanim_l_scapula";
HAnimHumanoid38.segments[94] = HAnimSegment1359;

HAnimSegment HAnimSegment1360 = createNode("HAnimSegment");
HAnimSegment1360.USE = "hanim_l_upperarm";
HAnimHumanoid38.segments[95] = HAnimSegment1360;

HAnimSegment HAnimSegment1361 = createNode("HAnimSegment");
HAnimSegment1361.USE = "hanim_l_forearm";
HAnimHumanoid38.segments[96] = HAnimSegment1361;

HAnimSegment HAnimSegment1362 = createNode("HAnimSegment");
HAnimSegment1362.USE = "hanim_l_carpal";
HAnimHumanoid38.segments[97] = HAnimSegment1362;

HAnimSegment HAnimSegment1363 = createNode("HAnimSegment");
HAnimSegment1363.USE = "hanim_l_metacarpal_1";
HAnimHumanoid38.segments[98] = HAnimSegment1363;

HAnimSegment HAnimSegment1364 = createNode("HAnimSegment");
HAnimSegment1364.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid38.segments[99] = HAnimSegment1364;

HAnimSegment HAnimSegment1365 = createNode("HAnimSegment");
HAnimSegment1365.USE = "hanim_l_metacarpal_2";
HAnimHumanoid38.segments[100] = HAnimSegment1365;

HAnimSegment HAnimSegment1366 = createNode("HAnimSegment");
HAnimSegment1366.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid38.segments[101] = HAnimSegment1366;

HAnimSegment HAnimSegment1367 = createNode("HAnimSegment");
HAnimSegment1367.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid38.segments[102] = HAnimSegment1367;

HAnimSegment HAnimSegment1368 = createNode("HAnimSegment");
HAnimSegment1368.USE = "hanim_l_metacarpal_3";
HAnimHumanoid38.segments[103] = HAnimSegment1368;

HAnimSegment HAnimSegment1369 = createNode("HAnimSegment");
HAnimSegment1369.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid38.segments[104] = HAnimSegment1369;

HAnimSegment HAnimSegment1370 = createNode("HAnimSegment");
HAnimSegment1370.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid38.segments[105] = HAnimSegment1370;

HAnimSegment HAnimSegment1371 = createNode("HAnimSegment");
HAnimSegment1371.USE = "hanim_l_metacarpal_4";
HAnimHumanoid38.segments[106] = HAnimSegment1371;

HAnimSegment HAnimSegment1372 = createNode("HAnimSegment");
HAnimSegment1372.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid38.segments[107] = HAnimSegment1372;

HAnimSegment HAnimSegment1373 = createNode("HAnimSegment");
HAnimSegment1373.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid38.segments[108] = HAnimSegment1373;

HAnimSegment HAnimSegment1374 = createNode("HAnimSegment");
HAnimSegment1374.USE = "hanim_l_metacarpal_5";
HAnimHumanoid38.segments[109] = HAnimSegment1374;

HAnimSegment HAnimSegment1375 = createNode("HAnimSegment");
HAnimSegment1375.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid38.segments[110] = HAnimSegment1375;

HAnimSegment HAnimSegment1376 = createNode("HAnimSegment");
HAnimSegment1376.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid38.segments[111] = HAnimSegment1376;

HAnimSegment HAnimSegment1377 = createNode("HAnimSegment");
HAnimSegment1377.USE = "hanim_r_clavicle";
HAnimHumanoid38.segments[112] = HAnimSegment1377;

HAnimSegment HAnimSegment1378 = createNode("HAnimSegment");
HAnimSegment1378.USE = "hanim_r_scapula";
HAnimHumanoid38.segments[113] = HAnimSegment1378;

HAnimSegment HAnimSegment1379 = createNode("HAnimSegment");
HAnimSegment1379.USE = "hanim_r_upperarm";
HAnimHumanoid38.segments[114] = HAnimSegment1379;

HAnimSegment HAnimSegment1380 = createNode("HAnimSegment");
HAnimSegment1380.USE = "hanim_r_forearm";
HAnimHumanoid38.segments[115] = HAnimSegment1380;

HAnimSegment HAnimSegment1381 = createNode("HAnimSegment");
HAnimSegment1381.USE = "hanim_r_carpal";
HAnimHumanoid38.segments[116] = HAnimSegment1381;

HAnimSegment HAnimSegment1382 = createNode("HAnimSegment");
HAnimSegment1382.USE = "hanim_r_metacarpal_1";
HAnimHumanoid38.segments[117] = HAnimSegment1382;

HAnimSegment HAnimSegment1383 = createNode("HAnimSegment");
HAnimSegment1383.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid38.segments[118] = HAnimSegment1383;

HAnimSegment HAnimSegment1384 = createNode("HAnimSegment");
HAnimSegment1384.USE = "hanim_r_metacarpal_2";
HAnimHumanoid38.segments[119] = HAnimSegment1384;

HAnimSegment HAnimSegment1385 = createNode("HAnimSegment");
HAnimSegment1385.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid38.segments[120] = HAnimSegment1385;

HAnimSegment HAnimSegment1386 = createNode("HAnimSegment");
HAnimSegment1386.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid38.segments[121] = HAnimSegment1386;

HAnimSegment HAnimSegment1387 = createNode("HAnimSegment");
HAnimSegment1387.USE = "hanim_r_metacarpal_3";
HAnimHumanoid38.segments[122] = HAnimSegment1387;

HAnimSegment HAnimSegment1388 = createNode("HAnimSegment");
HAnimSegment1388.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid38.segments[123] = HAnimSegment1388;

HAnimSegment HAnimSegment1389 = createNode("HAnimSegment");
HAnimSegment1389.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid38.segments[124] = HAnimSegment1389;

HAnimSegment HAnimSegment1390 = createNode("HAnimSegment");
HAnimSegment1390.USE = "hanim_r_metacarpal_4";
HAnimHumanoid38.segments[125] = HAnimSegment1390;

HAnimSegment HAnimSegment1391 = createNode("HAnimSegment");
HAnimSegment1391.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid38.segments[126] = HAnimSegment1391;

HAnimSegment HAnimSegment1392 = createNode("HAnimSegment");
HAnimSegment1392.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid38.segments[127] = HAnimSegment1392;

HAnimSegment HAnimSegment1393 = createNode("HAnimSegment");
HAnimSegment1393.USE = "hanim_r_metacarpal_5";
HAnimHumanoid38.segments[128] = HAnimSegment1393;

HAnimSegment HAnimSegment1394 = createNode("HAnimSegment");
HAnimSegment1394.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid38.segments[129] = HAnimSegment1394;

HAnimSegment HAnimSegment1395 = createNode("HAnimSegment");
HAnimSegment1395.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid38.segments[130] = HAnimSegment1395;

HAnimSite HAnimSite1396 = createNode("HAnimSite");
HAnimSite1396.USE = "hanim_buttocks_standing_wall_contact_point";
HAnimHumanoid38.viewpoints[131] = HAnimSite1396;

HAnimSite HAnimSite1397 = createNode("HAnimSite");
HAnimSite1397.USE = "hanim_crotch";
HAnimHumanoid38.viewpoints[132] = HAnimSite1397;

HAnimSite HAnimSite1398 = createNode("HAnimSite");
HAnimSite1398.USE = "hanim_l_asis";
HAnimHumanoid38.viewpoints[133] = HAnimSite1398;

HAnimSite HAnimSite1399 = createNode("HAnimSite");
HAnimSite1399.USE = "hanim_l_iliocristale";
HAnimHumanoid38.viewpoints[134] = HAnimSite1399;

HAnimSite HAnimSite1400 = createNode("HAnimSite");
HAnimSite1400.USE = "hanim_l_psis";
HAnimHumanoid38.viewpoints[135] = HAnimSite1400;

HAnimSite HAnimSite1401 = createNode("HAnimSite");
HAnimSite1401.USE = "hanim_l_trochanterion";
HAnimHumanoid38.viewpoints[136] = HAnimSite1401;

HAnimSite HAnimSite1402 = createNode("HAnimSite");
HAnimSite1402.USE = "hanim_r_asis";
HAnimHumanoid38.viewpoints[137] = HAnimSite1402;

HAnimSite HAnimSite1403 = createNode("HAnimSite");
HAnimSite1403.USE = "hanim_r_iliocristale";
HAnimHumanoid38.viewpoints[138] = HAnimSite1403;

HAnimSite HAnimSite1404 = createNode("HAnimSite");
HAnimSite1404.USE = "hanim_r_psis";
HAnimHumanoid38.viewpoints[139] = HAnimSite1404;

HAnimSite HAnimSite1405 = createNode("HAnimSite");
HAnimSite1405.USE = "hanim_r_trochanterion";
HAnimHumanoid38.viewpoints[140] = HAnimSite1405;

HAnimSite HAnimSite1406 = createNode("HAnimSite");
HAnimSite1406.USE = "hanim_l_femoral_lateral_epicondyles";
HAnimHumanoid38.viewpoints[141] = HAnimSite1406;

HAnimSite HAnimSite1407 = createNode("HAnimSite");
HAnimSite1407.USE = "hanim_l_femoral_medial_epicondyles";
HAnimHumanoid38.viewpoints[142] = HAnimSite1407;

HAnimSite HAnimSite1408 = createNode("HAnimSite");
HAnimSite1408.USE = "hanim_l_knee_crease";
HAnimHumanoid38.viewpoints[143] = HAnimSite1408;

HAnimSite HAnimSite1409 = createNode("HAnimSite");
HAnimSite1409.USE = "hanim_l_suprapatella";
HAnimHumanoid38.viewpoints[144] = HAnimSite1409;

HAnimSite HAnimSite1410 = createNode("HAnimSite");
HAnimSite1410.USE = "hanim_l_lateral_malleolus";
HAnimHumanoid38.viewpoints[145] = HAnimSite1410;

HAnimSite HAnimSite1411 = createNode("HAnimSite");
HAnimSite1411.USE = "hanim_l_medial_malleolus";
HAnimHumanoid38.viewpoints[146] = HAnimSite1411;

HAnimSite HAnimSite1412 = createNode("HAnimSite");
HAnimSite1412.USE = "hanim_l_tibiale";
HAnimHumanoid38.viewpoints[147] = HAnimSite1412;

HAnimSite HAnimSite1413 = createNode("HAnimSite");
HAnimSite1413.USE = "hanim_l_calcaneus_posterior";
HAnimHumanoid38.viewpoints[148] = HAnimSite1413;

HAnimSite HAnimSite1414 = createNode("HAnimSite");
HAnimSite1414.USE = "hanim_l_sphyrion";
HAnimHumanoid38.viewpoints[149] = HAnimSite1414;

HAnimSite HAnimSite1415 = createNode("HAnimSite");
HAnimSite1415.USE = "hanim_l_metatarsal_phalanx_1";
HAnimHumanoid38.viewpoints[150] = HAnimSite1415;

HAnimSite HAnimSite1416 = createNode("HAnimSite");
HAnimSite1416.USE = "hanim_l_metatarsal_phalanx_5";
HAnimHumanoid38.viewpoints[151] = HAnimSite1416;

HAnimSite HAnimSite1417 = createNode("HAnimSite");
HAnimSite1417.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid38.viewpoints[152] = HAnimSite1417;

HAnimSite HAnimSite1418 = createNode("HAnimSite");
HAnimSite1418.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid38.viewpoints[153] = HAnimSite1418;

HAnimSite HAnimSite1419 = createNode("HAnimSite");
HAnimSite1419.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid38.viewpoints[154] = HAnimSite1419;

HAnimSite HAnimSite1420 = createNode("HAnimSite");
HAnimSite1420.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid38.viewpoints[155] = HAnimSite1420;

HAnimSite HAnimSite1421 = createNode("HAnimSite");
HAnimSite1421.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid38.viewpoints[156] = HAnimSite1421;

HAnimSite HAnimSite1422 = createNode("HAnimSite");
HAnimSite1422.USE = "hanim_r_femoral_lateral_epicondyles";
HAnimHumanoid38.viewpoints[157] = HAnimSite1422;

HAnimSite HAnimSite1423 = createNode("HAnimSite");
HAnimSite1423.USE = "hanim_r_femoral_medial_epicondyles";
HAnimHumanoid38.viewpoints[158] = HAnimSite1423;

HAnimSite HAnimSite1424 = createNode("HAnimSite");
HAnimSite1424.USE = "hanim_r_knee_crease";
HAnimHumanoid38.viewpoints[159] = HAnimSite1424;

HAnimSite HAnimSite1425 = createNode("HAnimSite");
HAnimSite1425.USE = "hanim_r_suprapatella";
HAnimHumanoid38.viewpoints[160] = HAnimSite1425;

HAnimSite HAnimSite1426 = createNode("HAnimSite");
HAnimSite1426.USE = "hanim_r_lateral_malleolus";
HAnimHumanoid38.viewpoints[161] = HAnimSite1426;

HAnimSite HAnimSite1427 = createNode("HAnimSite");
HAnimSite1427.USE = "hanim_r_medial_malleolus";
HAnimHumanoid38.viewpoints[162] = HAnimSite1427;

HAnimSite HAnimSite1428 = createNode("HAnimSite");
HAnimSite1428.USE = "hanim_r_tibiale";
HAnimHumanoid38.viewpoints[163] = HAnimSite1428;

HAnimSite HAnimSite1429 = createNode("HAnimSite");
HAnimSite1429.USE = "hanim_r_calcaneus_posterior";
HAnimHumanoid38.viewpoints[164] = HAnimSite1429;

HAnimSite HAnimSite1430 = createNode("HAnimSite");
HAnimSite1430.USE = "hanim_r_sphyrion";
HAnimHumanoid38.viewpoints[165] = HAnimSite1430;

HAnimSite HAnimSite1431 = createNode("HAnimSite");
HAnimSite1431.USE = "hanim_r_metatarsal_phalanx_1";
HAnimHumanoid38.viewpoints[166] = HAnimSite1431;

HAnimSite HAnimSite1432 = createNode("HAnimSite");
HAnimSite1432.USE = "hanim_r_metatarsal_phalanx_5";
HAnimHumanoid38.viewpoints[167] = HAnimSite1432;

HAnimSite HAnimSite1433 = createNode("HAnimSite");
HAnimSite1433.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid38.viewpoints[168] = HAnimSite1433;

HAnimSite HAnimSite1434 = createNode("HAnimSite");
HAnimSite1434.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid38.viewpoints[169] = HAnimSite1434;

HAnimSite HAnimSite1435 = createNode("HAnimSite");
HAnimSite1435.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid38.viewpoints[170] = HAnimSite1435;

HAnimSite HAnimSite1436 = createNode("HAnimSite");
HAnimSite1436.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid38.viewpoints[171] = HAnimSite1436;

HAnimSite HAnimSite1437 = createNode("HAnimSite");
HAnimSite1437.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid38.viewpoints[172] = HAnimSite1437;

HAnimSite HAnimSite1438 = createNode("HAnimSite");
HAnimSite1438.USE = "hanim_navel";
HAnimHumanoid38.viewpoints[173] = HAnimSite1438;

HAnimSite HAnimSite1439 = createNode("HAnimSite");
HAnimSite1439.USE = "hanim_waist_preferred_anterior";
HAnimHumanoid38.viewpoints[174] = HAnimSite1439;

HAnimSite HAnimSite1440 = createNode("HAnimSite");
HAnimSite1440.USE = "hanim_waist_preferred_posterior";
HAnimHumanoid38.viewpoints[175] = HAnimSite1440;

HAnimSite HAnimSite1441 = createNode("HAnimSite");
HAnimSite1441.USE = "hanim_l_rib10";
HAnimHumanoid38.viewpoints[176] = HAnimSite1441;

HAnimSite HAnimSite1442 = createNode("HAnimSite");
HAnimSite1442.USE = "hanim_r_rib10";
HAnimHumanoid38.viewpoints[177] = HAnimSite1442;

HAnimSite HAnimSite1443 = createNode("HAnimSite");
HAnimSite1443.USE = "hanim_spine_1_middle_back";
HAnimHumanoid38.viewpoints[178] = HAnimSite1443;

HAnimSite HAnimSite1444 = createNode("HAnimSite");
HAnimSite1444.USE = "hanim_spine_2_middle_back";
HAnimHumanoid38.viewpoints[179] = HAnimSite1444;

HAnimSite HAnimSite1445 = createNode("HAnimSite");
HAnimSite1445.USE = "hanim_l_thelion";
HAnimHumanoid38.viewpoints[180] = HAnimSite1445;

HAnimSite HAnimSite1446 = createNode("HAnimSite");
HAnimSite1446.USE = "hanim_r_thelion";
HAnimHumanoid38.viewpoints[181] = HAnimSite1446;

HAnimSite HAnimSite1447 = createNode("HAnimSite");
HAnimSite1447.USE = "hanim_substernale";
HAnimHumanoid38.viewpoints[182] = HAnimSite1447;

HAnimSite HAnimSite1448 = createNode("HAnimSite");
HAnimSite1448.USE = "hanim_l_chest_midsagittal_plane";
HAnimHumanoid38.viewpoints[183] = HAnimSite1448;

HAnimSite HAnimSite1449 = createNode("HAnimSite");
HAnimSite1449.USE = "hanim_mesosternale";
HAnimHumanoid38.viewpoints[184] = HAnimSite1449;

HAnimSite HAnimSite1450 = createNode("HAnimSite");
HAnimSite1450.USE = "hanim_r_chest_midsagittal_plane";
HAnimHumanoid38.viewpoints[185] = HAnimSite1450;

HAnimSite HAnimSite1451 = createNode("HAnimSite");
HAnimSite1451.USE = "hanim_rear_center_midsagittal_plane";
HAnimHumanoid38.viewpoints[186] = HAnimSite1451;

HAnimSite HAnimSite1452 = createNode("HAnimSite");
HAnimSite1452.USE = "hanim_cervicale";
HAnimHumanoid38.viewpoints[187] = HAnimSite1452;

HAnimSite HAnimSite1453 = createNode("HAnimSite");
HAnimSite1453.USE = "hanim_l_neck_base";
HAnimHumanoid38.viewpoints[188] = HAnimSite1453;

HAnimSite HAnimSite1454 = createNode("HAnimSite");
HAnimSite1454.USE = "hanim_r_neck_base";
HAnimHumanoid38.viewpoints[189] = HAnimSite1454;

HAnimSite HAnimSite1455 = createNode("HAnimSite");
HAnimSite1455.USE = "hanim_suprasternale";
HAnimHumanoid38.viewpoints[190] = HAnimSite1455;

HAnimSite HAnimSite1456 = createNode("HAnimSite");
HAnimSite1456.USE = "hanim_adams_apple";
HAnimHumanoid38.viewpoints[191] = HAnimSite1456;

HAnimSite HAnimSite1457 = createNode("HAnimSite");
HAnimSite1457.USE = "hanim_l_acromion";
HAnimHumanoid38.viewpoints[192] = HAnimSite1457;

HAnimSite HAnimSite1458 = createNode("HAnimSite");
HAnimSite1458.USE = "hanim_l_axilla_distal";
HAnimHumanoid38.viewpoints[193] = HAnimSite1458;

HAnimSite HAnimSite1459 = createNode("HAnimSite");
HAnimSite1459.USE = "hanim_l_axilla_posterior_folds";
HAnimHumanoid38.viewpoints[194] = HAnimSite1459;

HAnimSite HAnimSite1460 = createNode("HAnimSite");
HAnimSite1460.USE = "hanim_l_axilla_proximal";
HAnimHumanoid38.viewpoints[195] = HAnimSite1460;

HAnimSite HAnimSite1461 = createNode("HAnimSite");
HAnimSite1461.USE = "hanim_l_clavicale";
HAnimHumanoid38.viewpoints[196] = HAnimSite1461;

HAnimSite HAnimSite1462 = createNode("HAnimSite");
HAnimSite1462.USE = "hanim_l_bideltoid";
HAnimHumanoid38.viewpoints[197] = HAnimSite1462;

HAnimSite HAnimSite1463 = createNode("HAnimSite");
HAnimSite1463.USE = "hanim_l_humeral_lateral_epicondyles";
HAnimHumanoid38.viewpoints[198] = HAnimSite1463;

HAnimSite HAnimSite1464 = createNode("HAnimSite");
HAnimSite1464.USE = "hanim_l_humeral_medial_epicondyles";
HAnimHumanoid38.viewpoints[199] = HAnimSite1464;

HAnimSite HAnimSite1465 = createNode("HAnimSite");
HAnimSite1465.USE = "hanim_l_olecranon";
HAnimHumanoid38.viewpoints[200] = HAnimSite1465;

HAnimSite HAnimSite1466 = createNode("HAnimSite");
HAnimSite1466.USE = "hanim_l_radial_styloid";
HAnimHumanoid38.viewpoints[201] = HAnimSite1466;

HAnimSite HAnimSite1467 = createNode("HAnimSite");
HAnimSite1467.USE = "hanim_l_radiale";
HAnimHumanoid38.viewpoints[202] = HAnimSite1467;

HAnimSite HAnimSite1468 = createNode("HAnimSite");
HAnimSite1468.USE = "hanim_l_ulnar_styloid";
HAnimHumanoid38.viewpoints[203] = HAnimSite1468;

HAnimSite HAnimSite1469 = createNode("HAnimSite");
HAnimSite1469.USE = "hanim_l_metacarpal_phalanx_2";
HAnimHumanoid38.viewpoints[204] = HAnimSite1469;

HAnimSite HAnimSite1470 = createNode("HAnimSite");
HAnimSite1470.USE = "hanim_l_metacarpal_phalanx_3";
HAnimHumanoid38.viewpoints[205] = HAnimSite1470;

HAnimSite HAnimSite1471 = createNode("HAnimSite");
HAnimSite1471.USE = "hanim_l_metacarpal_phalanx_5";
HAnimHumanoid38.viewpoints[206] = HAnimSite1471;

HAnimSite HAnimSite1472 = createNode("HAnimSite");
HAnimSite1472.USE = "hanim_r_acromion";
HAnimHumanoid38.viewpoints[207] = HAnimSite1472;

HAnimSite HAnimSite1473 = createNode("HAnimSite");
HAnimSite1473.USE = "hanim_r_axilla_distal";
HAnimHumanoid38.viewpoints[208] = HAnimSite1473;

HAnimSite HAnimSite1474 = createNode("HAnimSite");
HAnimSite1474.USE = "hanim_r_axilla_posterior_folds";
HAnimHumanoid38.viewpoints[209] = HAnimSite1474;

HAnimSite HAnimSite1475 = createNode("HAnimSite");
HAnimSite1475.USE = "hanim_r_axilla_proximal";
HAnimHumanoid38.viewpoints[210] = HAnimSite1475;

HAnimSite HAnimSite1476 = createNode("HAnimSite");
HAnimSite1476.USE = "hanim_r_clavicale";
HAnimHumanoid38.viewpoints[211] = HAnimSite1476;

HAnimSite HAnimSite1477 = createNode("HAnimSite");
HAnimSite1477.USE = "hanim_r_bideltoid";
HAnimHumanoid38.viewpoints[212] = HAnimSite1477;

HAnimSite HAnimSite1478 = createNode("HAnimSite");
HAnimSite1478.USE = "hanim_r_humeral_lateral_epicondyles";
HAnimHumanoid38.viewpoints[213] = HAnimSite1478;

HAnimSite HAnimSite1479 = createNode("HAnimSite");
HAnimSite1479.USE = "hanim_r_humeral_medial_epicondyles";
HAnimHumanoid38.viewpoints[214] = HAnimSite1479;

HAnimSite HAnimSite1480 = createNode("HAnimSite");
HAnimSite1480.USE = "hanim_r_olecranon";
HAnimHumanoid38.viewpoints[215] = HAnimSite1480;

HAnimSite HAnimSite1481 = createNode("HAnimSite");
HAnimSite1481.USE = "hanim_r_radial_styloid";
HAnimHumanoid38.viewpoints[216] = HAnimSite1481;

HAnimSite HAnimSite1482 = createNode("HAnimSite");
HAnimSite1482.USE = "hanim_r_radiale";
HAnimHumanoid38.viewpoints[217] = HAnimSite1482;

HAnimSite HAnimSite1483 = createNode("HAnimSite");
HAnimSite1483.USE = "hanim_r_ulnar_styloid";
HAnimHumanoid38.viewpoints[218] = HAnimSite1483;

HAnimSite HAnimSite1484 = createNode("HAnimSite");
HAnimSite1484.USE = "hanim_r_metacarpal_phalanx_2";
HAnimHumanoid38.viewpoints[219] = HAnimSite1484;

HAnimSite HAnimSite1485 = createNode("HAnimSite");
HAnimSite1485.USE = "hanim_r_metacarpal_phalanx_3";
HAnimHumanoid38.viewpoints[220] = HAnimSite1485;

HAnimSite HAnimSite1486 = createNode("HAnimSite");
HAnimSite1486.USE = "hanim_r_metacarpal_phalanx_5";
HAnimHumanoid38.viewpoints[221] = HAnimSite1486;

children[4] = HAnimHumanoid38;

}
