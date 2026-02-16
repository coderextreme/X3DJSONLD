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
meta3.content = "StandardHumanoid.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoid.x3d";
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
Coordinate217.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097]);
LineSet216.coord = Coordinate217;

//from l_talocrural to l_talocalcaneonavicular vertices 2
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

Shape Shape233 = createNode("Shape");
LineSet LineSet234 = createNode("LineSet");
LineSet234.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate235 = createNode("Coordinate");
Coordinate235.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278]);
LineSet234.coord = Coordinate235;

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA ColorRGBA236 = createNode("ColorRGBA");
ColorRGBA236.USE = "HAnimSegmentLineColorRGBA";
LineSet234.color = ColorRGBA236;

Shape233.geometry = LineSet234;

HAnimSegment211.children[4] = Shape233;

HAnimJoint210.children = new MFNode();

HAnimJoint210.children[0] = HAnimSegment211;

HAnimJoint HAnimJoint237 = createNode("HAnimJoint");
HAnimJoint237.name = "l_talocalcaneonavicular";
HAnimJoint237.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint237.center = new SFVec3f(new float[0.0781,0.0283,-0.097]);
HAnimJoint237.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint237.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment238 = createNode("HAnimSegment");
HAnimSegment238.name = "l_navicular";
HAnimSegment238.DEF = "hanim_l_navicular";
Transform Transform239 = createNode("Transform");
Transform239.translation = new SFVec3f(new float[0.0781,0.0283,-0.097]);
Transform Transform240 = createNode("Transform");
//Empty Transform
Shape Shape241 = createNode("Shape");
Shape241.USE = "HAnimJointShape";
Transform240.child = new undefined();

Transform240.child[0] = Shape241;

Transform239.children = new MFNode();

Transform239.children[0] = Transform240;

HAnimSegment238.children = new MFNode();

HAnimSegment238.children[0] = Transform239;

Shape Shape242 = createNode("Shape");
LineSet LineSet243 = createNode("LineSet");
LineSet243.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate244 = createNode("Coordinate");
Coordinate244.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835]);
LineSet243.coord = Coordinate244;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA ColorRGBA245 = createNode("ColorRGBA");
ColorRGBA245.USE = "HAnimSegmentLineColorRGBA";
LineSet243.color = ColorRGBA245;

Shape242.geometry = LineSet243;

HAnimSegment238.children[1] = Shape242;

Shape Shape246 = createNode("Shape");
LineSet LineSet247 = createNode("LineSet");
LineSet247.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate248 = createNode("Coordinate");
Coordinate248.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0812,0.025,-0.0805]);
LineSet247.coord = Coordinate248;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA ColorRGBA249 = createNode("ColorRGBA");
ColorRGBA249.USE = "HAnimSegmentLineColorRGBA";
LineSet247.color = ColorRGBA249;

Shape246.geometry = LineSet247;

HAnimSegment238.children[2] = Shape246;

Shape Shape250 = createNode("Shape");
LineSet LineSet251 = createNode("LineSet");
LineSet251.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate252 = createNode("Coordinate");
Coordinate252.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821]);
LineSet251.coord = Coordinate252;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA ColorRGBA253 = createNode("ColorRGBA");
ColorRGBA253.USE = "HAnimSegmentLineColorRGBA";
LineSet251.color = ColorRGBA253;

Shape250.geometry = LineSet251;

HAnimSegment238.children[3] = Shape250;

HAnimJoint237.children = new MFNode();

HAnimJoint237.children[0] = HAnimSegment238;

HAnimJoint HAnimJoint254 = createNode("HAnimJoint");
HAnimJoint254.name = "l_cuneonavicular_1";
HAnimJoint254.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint254.center = new SFVec3f(new float[0.0672,0.0235,-0.0835]);
HAnimJoint254.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint254.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment255 = createNode("HAnimSegment");
HAnimSegment255.name = "l_cuneiform_1";
HAnimSegment255.DEF = "hanim_l_cuneiform_1";
Transform Transform256 = createNode("Transform");
Transform256.translation = new SFVec3f(new float[0.0672,0.0235,-0.0835]);
Transform Transform257 = createNode("Transform");
//Empty Transform
Shape Shape258 = createNode("Shape");
Shape258.USE = "HAnimJointShape";
Transform257.child = new undefined();

Transform257.child[0] = Shape258;

Transform256.children = new MFNode();

Transform256.children[0] = Transform257;

HAnimSegment255.children = new MFNode();

HAnimSegment255.children[0] = Transform256;

Shape Shape259 = createNode("Shape");
LineSet LineSet260 = createNode("LineSet");
LineSet260.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate261 = createNode("Coordinate");
Coordinate261.point = new MFVec3f(new float[0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577]);
LineSet260.coord = Coordinate261;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA ColorRGBA262 = createNode("ColorRGBA");
ColorRGBA262.USE = "HAnimSegmentLineColorRGBA";
LineSet260.color = ColorRGBA262;

Shape259.geometry = LineSet260;

HAnimSegment255.children[1] = Shape259;

HAnimJoint254.children = new MFNode();

HAnimJoint254.children[0] = HAnimSegment255;

HAnimJoint HAnimJoint263 = createNode("HAnimJoint");
HAnimJoint263.name = "l_tarsometatarsal_1";
HAnimJoint263.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint263.center = new SFVec3f(new float[0.0644,0.0147,-0.0577]);
HAnimJoint263.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint263.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment264 = createNode("HAnimSegment");
HAnimSegment264.name = "l_metatarsal_1";
HAnimSegment264.DEF = "hanim_l_metatarsal_1";
Transform Transform265 = createNode("Transform");
Transform265.translation = new SFVec3f(new float[0.0644,0.0147,-0.0577]);
Transform Transform266 = createNode("Transform");
//Empty Transform
Shape Shape267 = createNode("Shape");
Shape267.USE = "HAnimJointShape";
Transform266.child = new undefined();

Transform266.child[0] = Shape267;

Transform265.children = new MFNode();

Transform265.children[0] = Transform266;

HAnimSegment264.children = new MFNode();

HAnimSegment264.children[0] = Transform265;

Shape Shape268 = createNode("Shape");
LineSet LineSet269 = createNode("LineSet");
LineSet269.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate270 = createNode("Coordinate");
Coordinate270.point = new MFVec3f(new float[0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083]);
LineSet269.coord = Coordinate270;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA ColorRGBA271 = createNode("ColorRGBA");
ColorRGBA271.USE = "HAnimSegmentLineColorRGBA";
LineSet269.color = ColorRGBA271;

Shape268.geometry = LineSet269;

HAnimSegment264.children[1] = Shape268;

HAnimJoint263.children = new MFNode();

HAnimJoint263.children[0] = HAnimSegment264;

HAnimJoint HAnimJoint272 = createNode("HAnimJoint");
HAnimJoint272.name = "l_metatarsophalangeal_1";
HAnimJoint272.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint272.center = new SFVec3f(new float[0.0619,0.0059,-0.0083]);
HAnimJoint272.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint272.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment273 = createNode("HAnimSegment");
HAnimSegment273.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment273.DEF = "hanim_l_tarsal_proximal_phalanx_1";
Transform Transform274 = createNode("Transform");
Transform274.translation = new SFVec3f(new float[0.0619,0.0059,-0.0083]);
Transform Transform275 = createNode("Transform");
//Empty Transform
Shape Shape276 = createNode("Shape");
Shape276.USE = "HAnimJointShape";
Transform275.child = new undefined();

Transform275.child[0] = Shape276;

Transform274.children = new MFNode();

Transform274.children[0] = Transform275;

HAnimSegment273.children = new MFNode();

HAnimSegment273.children[0] = Transform274;

Shape Shape277 = createNode("Shape");
LineSet LineSet278 = createNode("LineSet");
LineSet278.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate279 = createNode("Coordinate");
Coordinate279.point = new MFVec3f(new float[0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083]);
LineSet278.coord = Coordinate279;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA280 = createNode("ColorRGBA");
ColorRGBA280.USE = "HAnimSegmentLineColorRGBA";
LineSet278.color = ColorRGBA280;

Shape277.geometry = LineSet278;

HAnimSegment273.children[1] = Shape277;

HAnimSite HAnimSite281 = createNode("HAnimSite");
HAnimSite281.name = "l_metatarsal_phalanx_1";
HAnimSite281.DEF = "hanim_l_metatarsal_phalanx_1";
TouchSensor TouchSensor282 = createNode("TouchSensor");
TouchSensor282.description = "HAnimSite 55 l_metatarsal_phalanx_1";
HAnimSite281.children = new MFNode();

HAnimSite281.children[0] = TouchSensor282;

Shape Shape283 = createNode("Shape");
Shape283.USE = "HAnimSiteShape";
HAnimSite281.children[1] = Shape283;

Billboard Billboard284 = createNode("Billboard");
Shape Shape285 = createNode("Shape");
Text Text286 = createNode("Text");
Text286.string = new MFString(new java.lang.String["55"]);
FontStyle FontStyle287 = createNode("FontStyle");
FontStyle287.size = 0.035;
Text286.fontStyle = FontStyle287;

Shape285.geometry = Text286;

Billboard284.children = new MFNode();

Billboard284.children[0] = Shape285;

HAnimSite281.children[2] = Billboard284;

HAnimSegment273.children[2] = HAnimSite281;

HAnimJoint272.children = new MFNode();

HAnimJoint272.children[0] = HAnimSegment273;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.name = "l_tarsal_interphalangeal_1";
HAnimJoint288.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint288.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint288.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint272.children[1] = HAnimJoint288;

HAnimJoint263.children[1] = HAnimJoint272;

HAnimJoint254.children[1] = HAnimJoint263;

HAnimJoint237.children[1] = HAnimJoint254;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.name = "l_cuneonavicular_2";
HAnimJoint289.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint289.center = new SFVec3f(new float[0.0812,0.025,-0.0805]);
HAnimJoint289.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint289.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment290 = createNode("HAnimSegment");
HAnimSegment290.name = "l_cuneiform_2";
HAnimSegment290.DEF = "hanim_l_cuneiform_2";
Transform Transform291 = createNode("Transform");
Transform291.translation = new SFVec3f(new float[0.0812,0.025,-0.0805]);
Transform Transform292 = createNode("Transform");
//Empty Transform
Shape Shape293 = createNode("Shape");
Shape293.USE = "HAnimJointShape";
Transform292.child = new undefined();

Transform292.child[0] = Shape293;

Transform291.children = new MFNode();

Transform291.children[0] = Transform292;

HAnimSegment290.children = new MFNode();

HAnimSegment290.children[0] = Transform291;

Shape Shape294 = createNode("Shape");
LineSet LineSet295 = createNode("LineSet");
LineSet295.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate296 = createNode("Coordinate");
Coordinate296.point = new MFVec3f(new float[0.0812,0.025,-0.0805,0.08,0.0175,-0.0608]);
LineSet295.coord = Coordinate296;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA297 = createNode("ColorRGBA");
ColorRGBA297.USE = "HAnimSegmentLineColorRGBA";
LineSet295.color = ColorRGBA297;

Shape294.geometry = LineSet295;

HAnimSegment290.children[1] = Shape294;

HAnimJoint289.children = new MFNode();

HAnimJoint289.children[0] = HAnimSegment290;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.name = "l_tarsometatarsal_2";
HAnimJoint298.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint298.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
HAnimJoint298.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint298.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.name = "l_metatarsal_2";
HAnimSegment299.DEF = "hanim_l_metatarsal_2";
Transform Transform300 = createNode("Transform");
Transform300.translation = new SFVec3f(new float[0.08,0.0175,-0.0608]);
Transform Transform301 = createNode("Transform");
//Empty Transform
Shape Shape302 = createNode("Shape");
Shape302.USE = "HAnimJointShape";
Transform301.child = new undefined();

Transform301.child[0] = Shape302;

Transform300.children = new MFNode();

Transform300.children[0] = Transform301;

HAnimSegment299.children = new MFNode();

HAnimSegment299.children[0] = Transform300;

Shape Shape303 = createNode("Shape");
LineSet LineSet304 = createNode("LineSet");
LineSet304.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate305 = createNode("Coordinate");
Coordinate305.point = new MFVec3f(new float[0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
LineSet304.coord = Coordinate305;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA306 = createNode("ColorRGBA");
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA";
LineSet304.color = ColorRGBA306;

Shape303.geometry = LineSet304;

HAnimSegment299.children[1] = Shape303;

HAnimJoint298.children = new MFNode();

HAnimJoint298.children[0] = HAnimSegment299;

HAnimJoint HAnimJoint307 = createNode("HAnimJoint");
HAnimJoint307.name = "l_metatarsophalangeal_2";
HAnimJoint307.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint307.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint307.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint307.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment308 = createNode("HAnimSegment");
HAnimSegment308.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment308.DEF = "hanim_l_tarsal_proximal_phalanx_2";
Transform Transform309 = createNode("Transform");
Transform309.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
Transform Transform310 = createNode("Transform");
//Empty Transform
Shape Shape311 = createNode("Shape");
Shape311.USE = "HAnimJointShape";
Transform310.child = new undefined();

Transform310.child[0] = Shape311;

Transform309.children = new MFNode();

Transform309.children[0] = Transform310;

HAnimSegment308.children = new MFNode();

HAnimSegment308.children[0] = Transform309;

Shape Shape312 = createNode("Shape");
LineSet LineSet313 = createNode("LineSet");
LineSet313.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate314 = createNode("Coordinate");
Coordinate314.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0041,0.0121]);
LineSet313.coord = Coordinate314;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA315 = createNode("ColorRGBA");
ColorRGBA315.USE = "HAnimSegmentLineColorRGBA";
LineSet313.color = ColorRGBA315;

Shape312.geometry = LineSet313;

HAnimSegment308.children[1] = Shape312;

HAnimJoint307.children = new MFNode();

HAnimJoint307.children[0] = HAnimSegment308;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint316.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint316.center = new SFVec3f(new float[0.0841,0.0041,0.0121]);
HAnimJoint316.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint316.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment317 = createNode("HAnimSegment");
HAnimSegment317.name = "l_tarsal_middle_phalanx_2";
HAnimSegment317.DEF = "hanim_l_tarsal_middle_phalanx_2";
Transform Transform318 = createNode("Transform");
Transform318.translation = new SFVec3f(new float[0.0841,0.0041,0.0121]);
Transform Transform319 = createNode("Transform");
//Empty Transform
Shape Shape320 = createNode("Shape");
Shape320.USE = "HAnimJointShape";
Transform319.child = new undefined();

Transform319.child[0] = Shape320;

Transform318.children = new MFNode();

Transform318.children[0] = Transform319;

HAnimSegment317.children = new MFNode();

HAnimSegment317.children[0] = Transform318;

Shape Shape321 = createNode("Shape");
LineSet LineSet322 = createNode("LineSet");
LineSet322.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate323 = createNode("Coordinate");
Coordinate323.point = new MFVec3f(new float[0.0841,0.0041,0.0121,0.0841,0.0013,0.0216]);
LineSet322.coord = Coordinate323;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA324 = createNode("ColorRGBA");
ColorRGBA324.USE = "HAnimSegmentLineColorRGBA";
LineSet322.color = ColorRGBA324;

Shape321.geometry = LineSet322;

HAnimSegment317.children[1] = Shape321;

HAnimJoint316.children = new MFNode();

HAnimJoint316.children[0] = HAnimSegment317;

HAnimJoint HAnimJoint325 = createNode("HAnimJoint");
HAnimJoint325.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint325.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint325.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint325.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint325.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint316.children[1] = HAnimJoint325;

HAnimJoint307.children[1] = HAnimJoint316;

HAnimJoint298.children[1] = HAnimJoint307;

HAnimJoint289.children[1] = HAnimJoint298;

HAnimJoint237.children[2] = HAnimJoint289;

HAnimJoint HAnimJoint326 = createNode("HAnimJoint");
HAnimJoint326.name = "l_cuneonavicular_3";
HAnimJoint326.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint326.center = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
HAnimJoint326.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint326.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment327 = createNode("HAnimSegment");
HAnimSegment327.name = "l_cuneiform_3";
HAnimSegment327.DEF = "hanim_l_cuneiform_3";
Transform Transform328 = createNode("Transform");
Transform328.translation = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
Transform Transform329 = createNode("Transform");
//Empty Transform
Shape Shape330 = createNode("Shape");
Shape330.USE = "HAnimJointShape";
Transform329.child = new undefined();

Transform329.child[0] = Shape330;

Transform328.children = new MFNode();

Transform328.children[0] = Transform329;

HAnimSegment327.children = new MFNode();

HAnimSegment327.children[0] = Transform328;

Shape Shape331 = createNode("Shape");
LineSet LineSet332 = createNode("LineSet");
LineSet332.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate333 = createNode("Coordinate");
Coordinate333.point = new MFVec3f(new float[0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625]);
LineSet332.coord = Coordinate333;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA ColorRGBA334 = createNode("ColorRGBA");
ColorRGBA334.USE = "HAnimSegmentLineColorRGBA";
LineSet332.color = ColorRGBA334;

Shape331.geometry = LineSet332;

HAnimSegment327.children[1] = Shape331;

HAnimJoint326.children = new MFNode();

HAnimJoint326.children[0] = HAnimSegment327;

HAnimJoint HAnimJoint335 = createNode("HAnimJoint");
HAnimJoint335.name = "l_tarsometatarsal_3";
HAnimJoint335.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint335.center = new SFVec3f(new float[0.0944,0.0175,-0.0625]);
HAnimJoint335.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint335.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment336 = createNode("HAnimSegment");
HAnimSegment336.name = "l_metatarsal_3";
HAnimSegment336.DEF = "hanim_l_metatarsal_3";
Transform Transform337 = createNode("Transform");
Transform337.translation = new SFVec3f(new float[0.0944,0.0175,-0.0625]);
Transform Transform338 = createNode("Transform");
//Empty Transform
Shape Shape339 = createNode("Shape");
Shape339.USE = "HAnimJointShape";
Transform338.child = new undefined();

Transform338.child[0] = Shape339;

Transform337.children = new MFNode();

Transform337.children[0] = Transform338;

HAnimSegment336.children = new MFNode();

HAnimSegment336.children[0] = Transform337;

Shape Shape340 = createNode("Shape");
LineSet LineSet341 = createNode("LineSet");
LineSet341.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate342 = createNode("Coordinate");
Coordinate342.point = new MFVec3f(new float[0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065]);
LineSet341.coord = Coordinate342;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA ColorRGBA343 = createNode("ColorRGBA");
ColorRGBA343.USE = "HAnimSegmentLineColorRGBA";
LineSet341.color = ColorRGBA343;

Shape340.geometry = LineSet341;

HAnimSegment336.children[1] = Shape340;

HAnimJoint335.children = new MFNode();

HAnimJoint335.children[0] = HAnimSegment336;

HAnimJoint HAnimJoint344 = createNode("HAnimJoint");
HAnimJoint344.name = "l_metatarsophalangeal_3";
HAnimJoint344.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint344.center = new SFVec3f(new float[0.0963,0.0065,-0.0065]);
HAnimJoint344.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint344.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment345 = createNode("HAnimSegment");
HAnimSegment345.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment345.DEF = "hanim_l_tarsal_proximal_phalanx_3";
Transform Transform346 = createNode("Transform");
Transform346.translation = new SFVec3f(new float[0.0963,0.0065,-0.0065]);
Transform Transform347 = createNode("Transform");
//Empty Transform
Shape Shape348 = createNode("Shape");
Shape348.USE = "HAnimJointShape";
Transform347.child = new undefined();

Transform347.child[0] = Shape348;

Transform346.children = new MFNode();

Transform346.children[0] = Transform347;

HAnimSegment345.children = new MFNode();

HAnimSegment345.children[0] = Transform346;

Shape Shape349 = createNode("Shape");
LineSet LineSet350 = createNode("LineSet");
LineSet350.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate351 = createNode("Coordinate");
Coordinate351.point = new MFVec3f(new float[0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086]);
LineSet350.coord = Coordinate351;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA352 = createNode("ColorRGBA");
ColorRGBA352.USE = "HAnimSegmentLineColorRGBA";
LineSet350.color = ColorRGBA352;

Shape349.geometry = LineSet350;

HAnimSegment345.children[1] = Shape349;

HAnimJoint344.children = new MFNode();

HAnimJoint344.children[0] = HAnimSegment345;

HAnimJoint HAnimJoint353 = createNode("HAnimJoint");
HAnimJoint353.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint353.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint353.center = new SFVec3f(new float[0.0987,0.0034,0.0086]);
HAnimJoint353.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint353.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment354 = createNode("HAnimSegment");
HAnimSegment354.name = "l_tarsal_middle_phalanx_3";
HAnimSegment354.DEF = "hanim_l_tarsal_middle_phalanx_3";
Transform Transform355 = createNode("Transform");
Transform355.translation = new SFVec3f(new float[0.0987,0.0034,0.0086]);
Transform Transform356 = createNode("Transform");
//Empty Transform
Shape Shape357 = createNode("Shape");
Shape357.USE = "HAnimJointShape";
Transform356.child = new undefined();

Transform356.child[0] = Shape357;

Transform355.children = new MFNode();

Transform355.children[0] = Transform356;

HAnimSegment354.children = new MFNode();

HAnimSegment354.children[0] = Transform355;

Shape Shape358 = createNode("Shape");
LineSet LineSet359 = createNode("LineSet");
LineSet359.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate360 = createNode("Coordinate");
Coordinate360.point = new MFVec3f(new float[0.0987,0.0034,0.0086,0.1002,0.0013,0.0178]);
LineSet359.coord = Coordinate360;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA361 = createNode("ColorRGBA");
ColorRGBA361.USE = "HAnimSegmentLineColorRGBA";
LineSet359.color = ColorRGBA361;

Shape358.geometry = LineSet359;

HAnimSegment354.children[1] = Shape358;

HAnimJoint353.children = new MFNode();

HAnimJoint353.children[0] = HAnimSegment354;

HAnimJoint HAnimJoint362 = createNode("HAnimJoint");
HAnimJoint362.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint362.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint362.center = new SFVec3f(new float[0.1002,0.0013,0.0178]);
HAnimJoint362.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint362.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint353.children[1] = HAnimJoint362;

HAnimJoint344.children[1] = HAnimJoint353;

HAnimJoint335.children[1] = HAnimJoint344;

HAnimJoint326.children[1] = HAnimJoint335;

HAnimJoint237.children[3] = HAnimJoint326;

HAnimJoint210.children[1] = HAnimJoint237;

HAnimJoint HAnimJoint363 = createNode("HAnimJoint");
HAnimJoint363.name = "l_calcaneocuboid";
HAnimJoint363.DEF = "hanim_l_calcaneocuboid";
HAnimJoint363.center = new SFVec3f(new float[0.0889,0.0494,-0.1278]);
HAnimJoint363.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint363.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment364 = createNode("HAnimSegment");
HAnimSegment364.name = "l_calcaneus";
HAnimSegment364.DEF = "hanim_l_calcaneus";
Transform Transform365 = createNode("Transform");
Transform365.translation = new SFVec3f(new float[0.0889,0.0494,-0.1278]);
Transform Transform366 = createNode("Transform");
//Empty Transform
Shape Shape367 = createNode("Shape");
Shape367.USE = "HAnimJointShape";
Transform366.child = new undefined();

Transform366.child[0] = Shape367;

Transform365.children = new MFNode();

Transform365.children[0] = Transform366;

HAnimSegment364.children = new MFNode();

HAnimSegment364.children[0] = Transform365;

Shape Shape368 = createNode("Shape");
LineSet LineSet369 = createNode("LineSet");
LineSet369.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate370 = createNode("Coordinate");
Coordinate370.point = new MFVec3f(new float[0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998]);
LineSet369.coord = Coordinate370;

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA ColorRGBA371 = createNode("ColorRGBA");
ColorRGBA371.USE = "HAnimSegmentLineColorRGBA";
LineSet369.color = ColorRGBA371;

Shape368.geometry = LineSet369;

HAnimSegment364.children[1] = Shape368;

HAnimJoint363.children = new MFNode();

HAnimJoint363.children[0] = HAnimSegment364;

HAnimJoint HAnimJoint372 = createNode("HAnimJoint");
HAnimJoint372.name = "l_transversetarsal";
HAnimJoint372.DEF = "hanim_l_transversetarsal";
HAnimJoint372.center = new SFVec3f(new float[0.1105,0.0267,-0.0998]);
HAnimJoint372.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint372.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment373 = createNode("HAnimSegment");
HAnimSegment373.name = "l_cuboid";
HAnimSegment373.DEF = "hanim_l_cuboid";
Transform Transform374 = createNode("Transform");
Transform374.translation = new SFVec3f(new float[0.1105,0.0267,-0.0998]);
Transform Transform375 = createNode("Transform");
//Empty Transform
Shape Shape376 = createNode("Shape");
Shape376.USE = "HAnimJointShape";
Transform375.child = new undefined();

Transform375.child[0] = Shape376;

Transform374.children = new MFNode();

Transform374.children[0] = Transform375;

HAnimSegment373.children = new MFNode();

HAnimSegment373.children[0] = Transform374;

Shape Shape377 = createNode("Shape");
LineSet LineSet378 = createNode("LineSet");
LineSet378.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate379 = createNode("Coordinate");
Coordinate379.point = new MFVec3f(new float[0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634]);
LineSet378.coord = Coordinate379;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA ColorRGBA380 = createNode("ColorRGBA");
ColorRGBA380.USE = "HAnimSegmentLineColorRGBA";
LineSet378.color = ColorRGBA380;

Shape377.geometry = LineSet378;

HAnimSegment373.children[1] = Shape377;

Shape Shape381 = createNode("Shape");
LineSet LineSet382 = createNode("LineSet");
LineSet382.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate383 = createNode("Coordinate");
Coordinate383.point = new MFVec3f(new float[0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671]);
LineSet382.coord = Coordinate383;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA ColorRGBA384 = createNode("ColorRGBA");
ColorRGBA384.USE = "HAnimSegmentLineColorRGBA";
LineSet382.color = ColorRGBA384;

Shape381.geometry = LineSet382;

HAnimSegment373.children[2] = Shape381;

HAnimJoint372.children = new MFNode();

HAnimJoint372.children[0] = HAnimSegment373;

HAnimJoint HAnimJoint385 = createNode("HAnimJoint");
HAnimJoint385.name = "l_tarsometatarsal_4";
HAnimJoint385.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint385.center = new SFVec3f(new float[0.1063,0.016,-0.0634]);
HAnimJoint385.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint385.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment386 = createNode("HAnimSegment");
HAnimSegment386.name = "l_metatarsal_4";
HAnimSegment386.DEF = "hanim_l_metatarsal_4";
Transform Transform387 = createNode("Transform");
Transform387.translation = new SFVec3f(new float[0.1063,0.016,-0.0634]);
Transform Transform388 = createNode("Transform");
//Empty Transform
Shape Shape389 = createNode("Shape");
Shape389.USE = "HAnimJointShape";
Transform388.child = new undefined();

Transform388.child[0] = Shape389;

Transform387.children = new MFNode();

Transform387.children[0] = Transform388;

HAnimSegment386.children = new MFNode();

HAnimSegment386.children[0] = Transform387;

Shape Shape390 = createNode("Shape");
LineSet LineSet391 = createNode("LineSet");
LineSet391.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate392 = createNode("Coordinate");
Coordinate392.point = new MFVec3f(new float[0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107]);
LineSet391.coord = Coordinate392;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA ColorRGBA393 = createNode("ColorRGBA");
ColorRGBA393.USE = "HAnimSegmentLineColorRGBA";
LineSet391.color = ColorRGBA393;

Shape390.geometry = LineSet391;

HAnimSegment386.children[1] = Shape390;

HAnimJoint385.children = new MFNode();

HAnimJoint385.children[0] = HAnimSegment386;

HAnimJoint HAnimJoint394 = createNode("HAnimJoint");
HAnimJoint394.name = "l_metatarsophalangeal_4";
HAnimJoint394.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint394.center = new SFVec3f(new float[0.1097,0.0058,-0.0107]);
HAnimJoint394.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint394.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment395 = createNode("HAnimSegment");
HAnimSegment395.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment395.DEF = "hanim_l_tarsal_proximal_phalanx_4";
Transform Transform396 = createNode("Transform");
Transform396.translation = new SFVec3f(new float[0.1097,0.0058,-0.0107]);
Transform Transform397 = createNode("Transform");
//Empty Transform
Shape Shape398 = createNode("Shape");
Shape398.USE = "HAnimJointShape";
Transform397.child = new undefined();

Transform397.child[0] = Shape398;

Transform396.children = new MFNode();

Transform396.children[0] = Transform397;

HAnimSegment395.children = new MFNode();

HAnimSegment395.children[0] = Transform396;

Shape Shape399 = createNode("Shape");
LineSet LineSet400 = createNode("LineSet");
LineSet400.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate401 = createNode("Coordinate");
Coordinate401.point = new MFVec3f(new float[0.1097,0.0058,-0.0107,0.114,0.0037,0.0044]);
LineSet400.coord = Coordinate401;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA402 = createNode("ColorRGBA");
ColorRGBA402.USE = "HAnimSegmentLineColorRGBA";
LineSet400.color = ColorRGBA402;

Shape399.geometry = LineSet400;

HAnimSegment395.children[1] = Shape399;

HAnimJoint394.children = new MFNode();

HAnimJoint394.children[0] = HAnimSegment395;

HAnimJoint HAnimJoint403 = createNode("HAnimJoint");
HAnimJoint403.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint403.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint403.center = new SFVec3f(new float[0.114,0.0037,0.0044]);
HAnimJoint403.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint403.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment404 = createNode("HAnimSegment");
HAnimSegment404.name = "l_tarsal_middle_phalanx_4";
HAnimSegment404.DEF = "hanim_l_tarsal_middle_phalanx_4";
Transform Transform405 = createNode("Transform");
Transform405.translation = new SFVec3f(new float[0.114,0.0037,0.0044]);
Transform Transform406 = createNode("Transform");
//Empty Transform
Shape Shape407 = createNode("Shape");
Shape407.USE = "HAnimJointShape";
Transform406.child = new undefined();

Transform406.child[0] = Shape407;

Transform405.children = new MFNode();

Transform405.children[0] = Transform406;

HAnimSegment404.children = new MFNode();

HAnimSegment404.children[0] = Transform405;

Shape Shape408 = createNode("Shape");
LineSet LineSet409 = createNode("LineSet");
LineSet409.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate410 = createNode("Coordinate");
Coordinate410.point = new MFVec3f(new float[0.114,0.0037,0.0044,0.1155,0.0008,0.0118]);
LineSet409.coord = Coordinate410;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA411 = createNode("ColorRGBA");
ColorRGBA411.USE = "HAnimSegmentLineColorRGBA";
LineSet409.color = ColorRGBA411;

Shape408.geometry = LineSet409;

HAnimSegment404.children[1] = Shape408;

HAnimJoint403.children = new MFNode();

HAnimJoint403.children[0] = HAnimSegment404;

HAnimJoint HAnimJoint412 = createNode("HAnimJoint");
HAnimJoint412.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint412.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint412.center = new SFVec3f(new float[0.1155,0.0008,0.0118]);
HAnimJoint412.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint412.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint403.children[1] = HAnimJoint412;

HAnimJoint394.children[1] = HAnimJoint403;

HAnimJoint385.children[1] = HAnimJoint394;

HAnimJoint372.children[1] = HAnimJoint385;

HAnimJoint HAnimJoint413 = createNode("HAnimJoint");
HAnimJoint413.name = "l_tarsometatarsal_5";
HAnimJoint413.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint413.center = new SFVec3f(new float[0.1206,0.0124,-0.0671]);
HAnimJoint413.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint413.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment414 = createNode("HAnimSegment");
HAnimSegment414.name = "l_metatarsal_5";
HAnimSegment414.DEF = "hanim_l_metatarsal_5";
Transform Transform415 = createNode("Transform");
Transform415.translation = new SFVec3f(new float[0.1206,0.0124,-0.0671]);
Transform Transform416 = createNode("Transform");
//Empty Transform
Shape Shape417 = createNode("Shape");
Shape417.USE = "HAnimJointShape";
Transform416.child = new undefined();

Transform416.child[0] = Shape417;

Transform415.children = new MFNode();

Transform415.children[0] = Transform416;

HAnimSegment414.children = new MFNode();

HAnimSegment414.children[0] = Transform415;

Shape Shape418 = createNode("Shape");
LineSet LineSet419 = createNode("LineSet");
LineSet419.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate420 = createNode("Coordinate");
Coordinate420.point = new MFVec3f(new float[0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153]);
LineSet419.coord = Coordinate420;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA ColorRGBA421 = createNode("ColorRGBA");
ColorRGBA421.USE = "HAnimSegmentLineColorRGBA";
LineSet419.color = ColorRGBA421;

Shape418.geometry = LineSet419;

HAnimSegment414.children[1] = Shape418;

HAnimJoint413.children = new MFNode();

HAnimJoint413.children[0] = HAnimSegment414;

HAnimJoint HAnimJoint422 = createNode("HAnimJoint");
HAnimJoint422.name = "l_metatarsophalangeal_5";
HAnimJoint422.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint422.center = new SFVec3f(new float[0.1239,0.0051,-0.0153]);
HAnimJoint422.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint422.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment423 = createNode("HAnimSegment");
HAnimSegment423.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment423.DEF = "hanim_l_tarsal_proximal_phalanx_5";
Transform Transform424 = createNode("Transform");
Transform424.translation = new SFVec3f(new float[0.1239,0.0051,-0.0153]);
Transform Transform425 = createNode("Transform");
//Empty Transform
Shape Shape426 = createNode("Shape");
Shape426.USE = "HAnimJointShape";
Transform425.child = new undefined();

Transform425.child[0] = Shape426;

Transform424.children = new MFNode();

Transform424.children[0] = Transform425;

HAnimSegment423.children = new MFNode();

HAnimSegment423.children[0] = Transform424;

Shape Shape427 = createNode("Shape");
LineSet LineSet428 = createNode("LineSet");
LineSet428.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate429 = createNode("Coordinate");
Coordinate429.point = new MFVec3f(new float[0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077]);
LineSet428.coord = Coordinate429;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA430 = createNode("ColorRGBA");
ColorRGBA430.USE = "HAnimSegmentLineColorRGBA";
LineSet428.color = ColorRGBA430;

Shape427.geometry = LineSet428;

HAnimSegment423.children[1] = Shape427;

HAnimSite HAnimSite431 = createNode("HAnimSite");
HAnimSite431.name = "l_metatarsal_phalanx_5";
HAnimSite431.DEF = "hanim_l_metatarsal_phalanx_5";
TouchSensor TouchSensor432 = createNode("TouchSensor");
TouchSensor432.description = "HAnimSite 56 l_metatarsal_phalanx_5";
HAnimSite431.children = new MFNode();

HAnimSite431.children[0] = TouchSensor432;

Shape Shape433 = createNode("Shape");
Shape433.USE = "HAnimSiteShape";
HAnimSite431.children[1] = Shape433;

Billboard Billboard434 = createNode("Billboard");
Shape Shape435 = createNode("Shape");
Text Text436 = createNode("Text");
Text436.string = new MFString(new java.lang.String["56"]);
FontStyle FontStyle437 = createNode("FontStyle");
FontStyle437.size = 0.035;
Text436.fontStyle = FontStyle437;

Shape435.geometry = Text436;

Billboard434.children = new MFNode();

Billboard434.children[0] = Shape435;

HAnimSite431.children[2] = Billboard434;

HAnimSegment423.children[2] = HAnimSite431;

HAnimJoint422.children = new MFNode();

HAnimJoint422.children[0] = HAnimSegment423;

HAnimJoint HAnimJoint438 = createNode("HAnimJoint");
HAnimJoint438.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint438.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint438.center = new SFVec3f(new float[0.1262,0.0023,-0.0077]);
HAnimJoint438.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint438.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment439 = createNode("HAnimSegment");
HAnimSegment439.name = "l_tarsal_middle_phalanx_5";
HAnimSegment439.DEF = "hanim_l_tarsal_middle_phalanx_5";
Transform Transform440 = createNode("Transform");
Transform440.translation = new SFVec3f(new float[0.1262,0.0023,-0.0077]);
Transform Transform441 = createNode("Transform");
//Empty Transform
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
Coordinate445.point = new MFVec3f(new float[0.1262,0.0023,-0.0077,0.1271,0,0]);
LineSet444.coord = Coordinate445;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA446 = createNode("ColorRGBA");
ColorRGBA446.USE = "HAnimSegmentLineColorRGBA";
LineSet444.color = ColorRGBA446;

Shape443.geometry = LineSet444;

HAnimSegment439.children[1] = Shape443;

HAnimJoint438.children = new MFNode();

HAnimJoint438.children[0] = HAnimSegment439;

HAnimJoint HAnimJoint447 = createNode("HAnimJoint");
HAnimJoint447.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint447.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint447.center = new SFVec3f(new float[0.1271,0,0]);
HAnimJoint447.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint447.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint438.children[1] = HAnimJoint447;

HAnimJoint422.children[1] = HAnimJoint438;

HAnimJoint413.children[1] = HAnimJoint422;

HAnimJoint372.children[2] = HAnimJoint413;

HAnimJoint363.children[1] = HAnimJoint372;

HAnimJoint210.children[2] = HAnimJoint363;

HAnimJoint180.children[1] = HAnimJoint210;

HAnimJoint143.children[1] = HAnimJoint180;

HAnimJoint60.children[1] = HAnimJoint143;

HAnimJoint HAnimJoint448 = createNode("HAnimJoint");
HAnimJoint448.name = "r_hip";
HAnimJoint448.DEF = "hanim_r_hip";
HAnimJoint448.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint448.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint448.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment449 = createNode("HAnimSegment");
HAnimSegment449.name = "r_thigh";
HAnimSegment449.DEF = "hanim_r_thigh";
Transform Transform450 = createNode("Transform");
Transform450.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform451 = createNode("Transform");
//Empty Transform
Shape Shape452 = createNode("Shape");
Shape452.USE = "HAnimJointShape";
Transform451.child = new undefined();

Transform451.child[0] = Shape452;

Transform450.children = new MFNode();

Transform450.children[0] = Transform451;

HAnimSegment449.children = new MFNode();

HAnimSegment449.children[0] = Transform450;

Shape Shape453 = createNode("Shape");
LineSet LineSet454 = createNode("LineSet");
LineSet454.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate455 = createNode("Coordinate");
Coordinate455.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet454.coord = Coordinate455;

//from r_hip to r_knee vertices 2
ColorRGBA ColorRGBA456 = createNode("ColorRGBA");
ColorRGBA456.USE = "HAnimSegmentLineColorRGBA";
LineSet454.color = ColorRGBA456;

Shape453.geometry = LineSet454;

HAnimSegment449.children[1] = Shape453;

HAnimSite HAnimSite457 = createNode("HAnimSite");
HAnimSite457.name = "r_femoral_lateral_epicondyles";
HAnimSite457.DEF = "hanim_r_femoral_lateral_epicondyles";
HAnimSite457.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor458 = createNode("TouchSensor");
TouchSensor458.description = "HAnimSite 44 r_femoral_lateral_epicondyles";
HAnimSite457.children = new MFNode();

HAnimSite457.children[0] = TouchSensor458;

Shape Shape459 = createNode("Shape");
Shape459.USE = "HAnimSiteShape";
HAnimSite457.children[1] = Shape459;

Billboard Billboard460 = createNode("Billboard");
Shape Shape461 = createNode("Shape");
Text Text462 = createNode("Text");
Text462.string = new MFString(new java.lang.String["44"]);
FontStyle FontStyle463 = createNode("FontStyle");
FontStyle463.size = 0.035;
Text462.fontStyle = FontStyle463;

Shape461.geometry = Text462;

Billboard460.children = new MFNode();

Billboard460.children[0] = Shape461;

HAnimSite457.children[2] = Billboard460;

HAnimSegment449.children[2] = HAnimSite457;

HAnimSite HAnimSite464 = createNode("HAnimSite");
HAnimSite464.name = "r_femoral_medial_epicondyles";
HAnimSite464.DEF = "hanim_r_femoral_medial_epicondyles";
HAnimSite464.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor465 = createNode("TouchSensor");
TouchSensor465.description = "HAnimSite 43 r_femoral_medial_epicondyles";
HAnimSite464.children = new MFNode();

HAnimSite464.children[0] = TouchSensor465;

Shape Shape466 = createNode("Shape");
Shape466.USE = "HAnimSiteShape";
HAnimSite464.children[1] = Shape466;

Billboard Billboard467 = createNode("Billboard");
Shape Shape468 = createNode("Shape");
Text Text469 = createNode("Text");
Text469.string = new MFString(new java.lang.String["43"]);
FontStyle FontStyle470 = createNode("FontStyle");
FontStyle470.size = 0.035;
Text469.fontStyle = FontStyle470;

Shape468.geometry = Text469;

Billboard467.children = new MFNode();

Billboard467.children[0] = Shape468;

HAnimSite464.children[2] = Billboard467;

HAnimSegment449.children[3] = HAnimSite464;

HAnimSite HAnimSite471 = createNode("HAnimSite");
HAnimSite471.name = "r_knee_crease";
HAnimSite471.DEF = "hanim_r_knee_crease";
HAnimSite471.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor472 = createNode("TouchSensor");
TouchSensor472.description = "HAnimSite 91 r_knee_crease";
HAnimSite471.children = new MFNode();

HAnimSite471.children[0] = TouchSensor472;

Shape Shape473 = createNode("Shape");
Shape473.USE = "HAnimSiteShape";
HAnimSite471.children[1] = Shape473;

Billboard Billboard474 = createNode("Billboard");
Shape Shape475 = createNode("Shape");
Text Text476 = createNode("Text");
Text476.string = new MFString(new java.lang.String["91"]);
FontStyle FontStyle477 = createNode("FontStyle");
FontStyle477.size = 0.035;
Text476.fontStyle = FontStyle477;

Shape475.geometry = Text476;

Billboard474.children = new MFNode();

Billboard474.children[0] = Shape475;

HAnimSite471.children[2] = Billboard474;

HAnimSegment449.children[4] = HAnimSite471;

HAnimSite HAnimSite478 = createNode("HAnimSite");
HAnimSite478.name = "r_suprapatella";
HAnimSite478.DEF = "hanim_r_suprapatella";
TouchSensor TouchSensor479 = createNode("TouchSensor");
TouchSensor479.description = "HAnimSite 45 r_suprapatella";
HAnimSite478.children = new MFNode();

HAnimSite478.children[0] = TouchSensor479;

Shape Shape480 = createNode("Shape");
Shape480.USE = "HAnimSiteShape";
HAnimSite478.children[1] = Shape480;

Billboard Billboard481 = createNode("Billboard");
Shape Shape482 = createNode("Shape");
Text Text483 = createNode("Text");
Text483.string = new MFString(new java.lang.String["45"]);
FontStyle FontStyle484 = createNode("FontStyle");
FontStyle484.size = 0.035;
Text483.fontStyle = FontStyle484;

Shape482.geometry = Text483;

Billboard481.children = new MFNode();

Billboard481.children[0] = Shape482;

HAnimSite478.children[2] = Billboard481;

HAnimSegment449.children[5] = HAnimSite478;

HAnimJoint448.children = new MFNode();

HAnimJoint448.children[0] = HAnimSegment449;

HAnimJoint HAnimJoint485 = createNode("HAnimJoint");
HAnimJoint485.name = "r_knee";
HAnimJoint485.DEF = "hanim_r_knee";
HAnimJoint485.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint485.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint485.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.name = "r_calf";
HAnimSegment486.DEF = "hanim_r_calf";
Transform Transform487 = createNode("Transform");
Transform487.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform488 = createNode("Transform");
//Empty Transform
Shape Shape489 = createNode("Shape");
Shape489.USE = "HAnimJointShape";
Transform488.child = new undefined();

Transform488.child[0] = Shape489;

Transform487.children = new MFNode();

Transform487.children[0] = Transform488;

HAnimSegment486.children = new MFNode();

HAnimSegment486.children[0] = Transform487;

Shape Shape490 = createNode("Shape");
LineSet LineSet491 = createNode("LineSet");
LineSet491.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate492 = createNode("Coordinate");
Coordinate492.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet491.coord = Coordinate492;

//from r_knee to r_talocrural vertices 2
ColorRGBA ColorRGBA493 = createNode("ColorRGBA");
ColorRGBA493.USE = "HAnimSegmentLineColorRGBA";
LineSet491.color = ColorRGBA493;

Shape490.geometry = LineSet491;

HAnimSegment486.children[1] = Shape490;

HAnimSite HAnimSite494 = createNode("HAnimSite");
HAnimSite494.name = "r_lateral_malleolus";
HAnimSite494.DEF = "hanim_r_lateral_malleolus";
HAnimSite494.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor495 = createNode("TouchSensor");
TouchSensor495.description = "HAnimSite 53 r_lateral_malleolus";
HAnimSite494.children = new MFNode();

HAnimSite494.children[0] = TouchSensor495;

Shape Shape496 = createNode("Shape");
Shape496.USE = "HAnimSiteShape";
HAnimSite494.children[1] = Shape496;

Billboard Billboard497 = createNode("Billboard");
Shape Shape498 = createNode("Shape");
Text Text499 = createNode("Text");
Text499.string = new MFString(new java.lang.String["53"]);
FontStyle FontStyle500 = createNode("FontStyle");
FontStyle500.size = 0.035;
Text499.fontStyle = FontStyle500;

Shape498.geometry = Text499;

Billboard497.children = new MFNode();

Billboard497.children[0] = Shape498;

HAnimSite494.children[2] = Billboard497;

HAnimSegment486.children[2] = HAnimSite494;

HAnimSite HAnimSite501 = createNode("HAnimSite");
HAnimSite501.name = "r_medial_malleolus";
HAnimSite501.DEF = "hanim_r_medial_malleolus";
HAnimSite501.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor502 = createNode("TouchSensor");
TouchSensor502.description = "HAnimSite 52 r_medial_malleolus";
HAnimSite501.children = new MFNode();

HAnimSite501.children[0] = TouchSensor502;

Shape Shape503 = createNode("Shape");
Shape503.USE = "HAnimSiteShape";
HAnimSite501.children[1] = Shape503;

Billboard Billboard504 = createNode("Billboard");
Shape Shape505 = createNode("Shape");
Text Text506 = createNode("Text");
Text506.string = new MFString(new java.lang.String["52"]);
FontStyle FontStyle507 = createNode("FontStyle");
FontStyle507.size = 0.035;
Text506.fontStyle = FontStyle507;

Shape505.geometry = Text506;

Billboard504.children = new MFNode();

Billboard504.children[0] = Shape505;

HAnimSite501.children[2] = Billboard504;

HAnimSegment486.children[3] = HAnimSite501;

HAnimSite HAnimSite508 = createNode("HAnimSite");
HAnimSite508.name = "r_tibiale";
HAnimSite508.DEF = "hanim_r_tibiale";
TouchSensor TouchSensor509 = createNode("TouchSensor");
TouchSensor509.description = "HAnimSite 51 r_tibiale";
HAnimSite508.children = new MFNode();

HAnimSite508.children[0] = TouchSensor509;

Shape Shape510 = createNode("Shape");
Shape510.USE = "HAnimSiteShape";
HAnimSite508.children[1] = Shape510;

Billboard Billboard511 = createNode("Billboard");
Shape Shape512 = createNode("Shape");
Text Text513 = createNode("Text");
Text513.string = new MFString(new java.lang.String["51"]);
FontStyle FontStyle514 = createNode("FontStyle");
FontStyle514.size = 0.035;
Text513.fontStyle = FontStyle514;

Shape512.geometry = Text513;

Billboard511.children = new MFNode();

Billboard511.children[0] = Shape512;

HAnimSite508.children[2] = Billboard511;

HAnimSegment486.children[4] = HAnimSite508;

HAnimJoint485.children = new MFNode();

HAnimJoint485.children[0] = HAnimSegment486;

HAnimJoint HAnimJoint515 = createNode("HAnimJoint");
HAnimJoint515.name = "r_talocrural";
HAnimJoint515.DEF = "hanim_r_talocrural";
HAnimJoint515.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint515.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint515.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment516 = createNode("HAnimSegment");
HAnimSegment516.name = "r_talus";
HAnimSegment516.DEF = "hanim_r_talus";
Transform Transform517 = createNode("Transform");
Transform517.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform517.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform517.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
Transform Transform518 = createNode("Transform");
//Empty Transform right foot
Shape Shape519 = createNode("Shape");
Shape519.USE = "HAnimJointShape";
Transform518.child = new undefined();

Transform518.child[0] = Shape519;

Transform517.children = new MFNode();

Transform517.children[0] = Transform518;

HAnimSegment516.children = new MFNode();

HAnimSegment516.children[0] = Transform517;

Shape Shape520 = createNode("Shape");
LineSet LineSet521 = createNode("LineSet");
LineSet521.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate522 = createNode("Coordinate");
Coordinate522.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097]);
LineSet521.coord = Coordinate522;

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA ColorRGBA523 = createNode("ColorRGBA");
ColorRGBA523.USE = "HAnimSegmentLineColorRGBA";
LineSet521.color = ColorRGBA523;

Shape520.geometry = LineSet521;

HAnimSegment516.children[1] = Shape520;

HAnimSite HAnimSite524 = createNode("HAnimSite");
HAnimSite524.name = "r_calcaneus_posterior";
HAnimSite524.DEF = "hanim_r_calcaneus_posterior";
HAnimSite524.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor525 = createNode("TouchSensor");
TouchSensor525.description = "HAnimSite 62 r_calcaneus_posterior";
HAnimSite524.children = new MFNode();

HAnimSite524.children[0] = TouchSensor525;

Shape Shape526 = createNode("Shape");
Shape526.USE = "HAnimSiteShape";
HAnimSite524.children[1] = Shape526;

Billboard Billboard527 = createNode("Billboard");
Shape Shape528 = createNode("Shape");
Text Text529 = createNode("Text");
Text529.string = new MFString(new java.lang.String["62"]);
FontStyle FontStyle530 = createNode("FontStyle");
FontStyle530.size = 0.035;
Text529.fontStyle = FontStyle530;

Shape528.geometry = Text529;

Billboard527.children = new MFNode();

Billboard527.children[0] = Shape528;

HAnimSite524.children[2] = Billboard527;

HAnimSegment516.children[2] = HAnimSite524;

HAnimSite HAnimSite531 = createNode("HAnimSite");
HAnimSite531.name = "r_sphyrion";
HAnimSite531.DEF = "hanim_r_sphyrion";
HAnimSite531.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor532 = createNode("TouchSensor");
TouchSensor532.description = "HAnimSite 54 r_sphyrion";
HAnimSite531.children = new MFNode();

HAnimSite531.children[0] = TouchSensor532;

Shape Shape533 = createNode("Shape");
Shape533.USE = "HAnimSiteShape";
HAnimSite531.children[1] = Shape533;

Billboard Billboard534 = createNode("Billboard");
Shape Shape535 = createNode("Shape");
Text Text536 = createNode("Text");
Text536.string = new MFString(new java.lang.String["54"]);
FontStyle FontStyle537 = createNode("FontStyle");
FontStyle537.size = 0.035;
Text536.fontStyle = FontStyle537;

Shape535.geometry = Text536;

Billboard534.children = new MFNode();

Billboard534.children[0] = Shape535;

HAnimSite531.children[2] = Billboard534;

HAnimSegment516.children[3] = HAnimSite531;

Shape Shape538 = createNode("Shape");
LineSet LineSet539 = createNode("LineSet");
LineSet539.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate540 = createNode("Coordinate");
Coordinate540.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278]);
LineSet539.coord = Coordinate540;

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA ColorRGBA541 = createNode("ColorRGBA");
ColorRGBA541.USE = "HAnimSegmentLineColorRGBA";
LineSet539.color = ColorRGBA541;

Shape538.geometry = LineSet539;

HAnimSegment516.children[4] = Shape538;

HAnimJoint515.children = new MFNode();

HAnimJoint515.children[0] = HAnimSegment516;

HAnimJoint HAnimJoint542 = createNode("HAnimJoint");
HAnimJoint542.name = "r_talocalcaneonavicular";
HAnimJoint542.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint542.center = new SFVec3f(new float[-0.0781,0.0283,-0.097]);
HAnimJoint542.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint542.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment543 = createNode("HAnimSegment");
HAnimSegment543.name = "r_navicular";
HAnimSegment543.DEF = "hanim_r_navicular";
Transform Transform544 = createNode("Transform");
Transform544.translation = new SFVec3f(new float[-0.0781,0.0283,-0.097]);
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
Coordinate549.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835]);
LineSet548.coord = Coordinate549;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA ColorRGBA550 = createNode("ColorRGBA");
ColorRGBA550.USE = "HAnimSegmentLineColorRGBA";
LineSet548.color = ColorRGBA550;

Shape547.geometry = LineSet548;

HAnimSegment543.children[1] = Shape547;

Shape Shape551 = createNode("Shape");
LineSet LineSet552 = createNode("LineSet");
LineSet552.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate553 = createNode("Coordinate");
Coordinate553.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805]);
LineSet552.coord = Coordinate553;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA ColorRGBA554 = createNode("ColorRGBA");
ColorRGBA554.USE = "HAnimSegmentLineColorRGBA";
LineSet552.color = ColorRGBA554;

Shape551.geometry = LineSet552;

HAnimSegment543.children[2] = Shape551;

Shape Shape555 = createNode("Shape");
LineSet LineSet556 = createNode("LineSet");
LineSet556.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate557 = createNode("Coordinate");
Coordinate557.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821]);
LineSet556.coord = Coordinate557;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA ColorRGBA558 = createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
LineSet556.color = ColorRGBA558;

Shape555.geometry = LineSet556;

HAnimSegment543.children[3] = Shape555;

HAnimJoint542.children = new MFNode();

HAnimJoint542.children[0] = HAnimSegment543;

HAnimJoint HAnimJoint559 = createNode("HAnimJoint");
HAnimJoint559.name = "r_cuneonavicular_1";
HAnimJoint559.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint559.center = new SFVec3f(new float[-0.0672,0.0235,-0.0835]);
HAnimJoint559.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint559.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment560 = createNode("HAnimSegment");
HAnimSegment560.name = "r_cuneiform_1";
HAnimSegment560.DEF = "hanim_r_cuneiform_1";
Transform Transform561 = createNode("Transform");
Transform561.translation = new SFVec3f(new float[-0.0672,0.0235,-0.0835]);
Transform Transform562 = createNode("Transform");
//Empty Transform
Shape Shape563 = createNode("Shape");
Shape563.USE = "HAnimJointShape";
Transform562.child = new undefined();

Transform562.child[0] = Shape563;

Transform561.children = new MFNode();

Transform561.children[0] = Transform562;

HAnimSegment560.children = new MFNode();

HAnimSegment560.children[0] = Transform561;

Shape Shape564 = createNode("Shape");
LineSet LineSet565 = createNode("LineSet");
LineSet565.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate566 = createNode("Coordinate");
Coordinate566.point = new MFVec3f(new float[-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577]);
LineSet565.coord = Coordinate566;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA ColorRGBA567 = createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
LineSet565.color = ColorRGBA567;

Shape564.geometry = LineSet565;

HAnimSegment560.children[1] = Shape564;

HAnimJoint559.children = new MFNode();

HAnimJoint559.children[0] = HAnimSegment560;

HAnimJoint HAnimJoint568 = createNode("HAnimJoint");
HAnimJoint568.name = "r_tarsometatarsal_1";
HAnimJoint568.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint568.center = new SFVec3f(new float[-0.0644,0.0147,-0.0577]);
HAnimJoint568.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint568.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment569 = createNode("HAnimSegment");
HAnimSegment569.name = "r_metatarsal_1";
HAnimSegment569.DEF = "hanim_r_metatarsal_1";
Transform Transform570 = createNode("Transform");
Transform570.translation = new SFVec3f(new float[-0.0644,0.0147,-0.0577]);
Transform Transform571 = createNode("Transform");
//Empty Transform
Shape Shape572 = createNode("Shape");
Shape572.USE = "HAnimJointShape";
Transform571.child = new undefined();

Transform571.child[0] = Shape572;

Transform570.children = new MFNode();

Transform570.children[0] = Transform571;

HAnimSegment569.children = new MFNode();

HAnimSegment569.children[0] = Transform570;

Shape Shape573 = createNode("Shape");
LineSet LineSet574 = createNode("LineSet");
LineSet574.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate575 = createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083]);
LineSet574.coord = Coordinate575;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA ColorRGBA576 = createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
LineSet574.color = ColorRGBA576;

Shape573.geometry = LineSet574;

HAnimSegment569.children[1] = Shape573;

HAnimJoint568.children = new MFNode();

HAnimJoint568.children[0] = HAnimSegment569;

HAnimJoint HAnimJoint577 = createNode("HAnimJoint");
HAnimJoint577.name = "r_metatarsophalangeal_1";
HAnimJoint577.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint577.center = new SFVec3f(new float[-0.0619,0.0059,-0.0083]);
HAnimJoint577.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint577.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment578 = createNode("HAnimSegment");
HAnimSegment578.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment578.DEF = "hanim_r_tarsal_proximal_phalanx_1";
Transform Transform579 = createNode("Transform");
Transform579.translation = new SFVec3f(new float[-0.0619,0.0059,-0.0083]);
Transform Transform580 = createNode("Transform");
//Empty Transform
Shape Shape581 = createNode("Shape");
Shape581.USE = "HAnimJointShape";
Transform580.child = new undefined();

Transform580.child[0] = Shape581;

Transform579.children = new MFNode();

Transform579.children[0] = Transform580;

HAnimSegment578.children = new MFNode();

HAnimSegment578.children[0] = Transform579;

Shape Shape582 = createNode("Shape");
LineSet LineSet583 = createNode("LineSet");
LineSet583.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate584 = createNode("Coordinate");
Coordinate584.point = new MFVec3f(new float[-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083]);
LineSet583.coord = Coordinate584;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA585 = createNode("ColorRGBA");
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA";
LineSet583.color = ColorRGBA585;

Shape582.geometry = LineSet583;

HAnimSegment578.children[1] = Shape582;

HAnimSite HAnimSite586 = createNode("HAnimSite");
HAnimSite586.name = "r_metatarsal_phalanx_1";
HAnimSite586.DEF = "hanim_r_metatarsal_phalanx_1";
TouchSensor TouchSensor587 = createNode("TouchSensor");
TouchSensor587.description = "HAnimSite 59 r_metatarsal_phalanx_1";
HAnimSite586.children = new MFNode();

HAnimSite586.children[0] = TouchSensor587;

Shape Shape588 = createNode("Shape");
Shape588.USE = "HAnimSiteShape";
HAnimSite586.children[1] = Shape588;

Billboard Billboard589 = createNode("Billboard");
Shape Shape590 = createNode("Shape");
Text Text591 = createNode("Text");
Text591.string = new MFString(new java.lang.String["59"]);
FontStyle FontStyle592 = createNode("FontStyle");
FontStyle592.size = 0.035;
Text591.fontStyle = FontStyle592;

Shape590.geometry = Text591;

Billboard589.children = new MFNode();

Billboard589.children[0] = Shape590;

HAnimSite586.children[2] = Billboard589;

HAnimSegment578.children[2] = HAnimSite586;

HAnimJoint577.children = new MFNode();

HAnimJoint577.children[0] = HAnimSegment578;

HAnimJoint HAnimJoint593 = createNode("HAnimJoint");
HAnimJoint593.name = "r_tarsal_interphalangeal_1";
HAnimJoint593.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint593.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint593.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint577.children[1] = HAnimJoint593;

HAnimJoint568.children[1] = HAnimJoint577;

HAnimJoint559.children[1] = HAnimJoint568;

HAnimJoint542.children[1] = HAnimJoint559;

HAnimJoint HAnimJoint594 = createNode("HAnimJoint");
HAnimJoint594.name = "r_cuneonavicular_2";
HAnimJoint594.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint594.center = new SFVec3f(new float[-0.0812,0.025,-0.0805]);
HAnimJoint594.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint594.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment595 = createNode("HAnimSegment");
HAnimSegment595.name = "r_cuneiform_2";
HAnimSegment595.DEF = "hanim_r_cuneiform_2";
Transform Transform596 = createNode("Transform");
Transform596.translation = new SFVec3f(new float[-0.0812,0.025,-0.0805]);
Transform Transform597 = createNode("Transform");
//Empty Transform
Shape Shape598 = createNode("Shape");
Shape598.USE = "HAnimJointShape";
Transform597.child = new undefined();

Transform597.child[0] = Shape598;

Transform596.children = new MFNode();

Transform596.children[0] = Transform597;

HAnimSegment595.children = new MFNode();

HAnimSegment595.children[0] = Transform596;

Shape Shape599 = createNode("Shape");
LineSet LineSet600 = createNode("LineSet");
LineSet600.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate601 = createNode("Coordinate");
Coordinate601.point = new MFVec3f(new float[-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608]);
LineSet600.coord = Coordinate601;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA602 = createNode("ColorRGBA");
ColorRGBA602.USE = "HAnimSegmentLineColorRGBA";
LineSet600.color = ColorRGBA602;

Shape599.geometry = LineSet600;

HAnimSegment595.children[1] = Shape599;

HAnimJoint594.children = new MFNode();

HAnimJoint594.children[0] = HAnimSegment595;

HAnimJoint HAnimJoint603 = createNode("HAnimJoint");
HAnimJoint603.name = "r_tarsometatarsal_2";
HAnimJoint603.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint603.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
HAnimJoint603.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint603.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment604 = createNode("HAnimSegment");
HAnimSegment604.name = "r_metatarsal_2";
HAnimSegment604.DEF = "hanim_r_metatarsal_2";
Transform Transform605 = createNode("Transform");
Transform605.translation = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
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
Coordinate610.point = new MFVec3f(new float[-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
LineSet609.coord = Coordinate610;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA611 = createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
LineSet609.color = ColorRGBA611;

Shape608.geometry = LineSet609;

HAnimSegment604.children[1] = Shape608;

HAnimJoint603.children = new MFNode();

HAnimJoint603.children[0] = HAnimSegment604;

HAnimJoint HAnimJoint612 = createNode("HAnimJoint");
HAnimJoint612.name = "r_metatarsophalangeal_2";
HAnimJoint612.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint612.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint612.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint612.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment613 = createNode("HAnimSegment");
HAnimSegment613.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment613.DEF = "hanim_r_tarsal_proximal_phalanx_2";
Transform Transform614 = createNode("Transform");
Transform614.translation = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
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
Coordinate619.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121]);
LineSet618.coord = Coordinate619;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA620 = createNode("ColorRGBA");
ColorRGBA620.USE = "HAnimSegmentLineColorRGBA";
LineSet618.color = ColorRGBA620;

Shape617.geometry = LineSet618;

HAnimSegment613.children[1] = Shape617;

HAnimJoint612.children = new MFNode();

HAnimJoint612.children[0] = HAnimSegment613;

HAnimJoint HAnimJoint621 = createNode("HAnimJoint");
HAnimJoint621.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint621.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint621.center = new SFVec3f(new float[-0.0841,0.0041,0.0121]);
HAnimJoint621.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint621.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment622 = createNode("HAnimSegment");
HAnimSegment622.name = "r_tarsal_middle_phalanx_2";
HAnimSegment622.DEF = "hanim_r_tarsal_middle_phalanx_2";
Transform Transform623 = createNode("Transform");
Transform623.translation = new SFVec3f(new float[-0.0841,0.0041,0.0121]);
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
Coordinate628.point = new MFVec3f(new float[-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216]);
LineSet627.coord = Coordinate628;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA629 = createNode("ColorRGBA");
ColorRGBA629.USE = "HAnimSegmentLineColorRGBA";
LineSet627.color = ColorRGBA629;

Shape626.geometry = LineSet627;

HAnimSegment622.children[1] = Shape626;

HAnimJoint621.children = new MFNode();

HAnimJoint621.children[0] = HAnimSegment622;

HAnimJoint HAnimJoint630 = createNode("HAnimJoint");
HAnimJoint630.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint630.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint630.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint630.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint630.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint621.children[1] = HAnimJoint630;

HAnimJoint612.children[1] = HAnimJoint621;

HAnimJoint603.children[1] = HAnimJoint612;

HAnimJoint594.children[1] = HAnimJoint603;

HAnimJoint542.children[2] = HAnimJoint594;

HAnimJoint HAnimJoint631 = createNode("HAnimJoint");
HAnimJoint631.name = "r_cuneonavicular_3";
HAnimJoint631.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint631.center = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
HAnimJoint631.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint631.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment632 = createNode("HAnimSegment");
HAnimSegment632.name = "r_cuneiform_3";
HAnimSegment632.DEF = "hanim_r_cuneiform_3";
Transform Transform633 = createNode("Transform");
Transform633.translation = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
Transform Transform634 = createNode("Transform");
//Empty Transform
Shape Shape635 = createNode("Shape");
Shape635.USE = "HAnimJointShape";
Transform634.child = new undefined();

Transform634.child[0] = Shape635;

Transform633.children = new MFNode();

Transform633.children[0] = Transform634;

HAnimSegment632.children = new MFNode();

HAnimSegment632.children[0] = Transform633;

Shape Shape636 = createNode("Shape");
LineSet LineSet637 = createNode("LineSet");
LineSet637.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate638 = createNode("Coordinate");
Coordinate638.point = new MFVec3f(new float[-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625]);
LineSet637.coord = Coordinate638;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA ColorRGBA639 = createNode("ColorRGBA");
ColorRGBA639.USE = "HAnimSegmentLineColorRGBA";
LineSet637.color = ColorRGBA639;

Shape636.geometry = LineSet637;

HAnimSegment632.children[1] = Shape636;

HAnimJoint631.children = new MFNode();

HAnimJoint631.children[0] = HAnimSegment632;

HAnimJoint HAnimJoint640 = createNode("HAnimJoint");
HAnimJoint640.name = "r_tarsometatarsal_3";
HAnimJoint640.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint640.center = new SFVec3f(new float[-0.0944,0.0175,-0.0625]);
HAnimJoint640.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment641 = createNode("HAnimSegment");
HAnimSegment641.name = "r_metatarsal_3";
HAnimSegment641.DEF = "hanim_r_metatarsal_3";
Transform Transform642 = createNode("Transform");
Transform642.translation = new SFVec3f(new float[-0.0944,0.0175,-0.0625]);
Transform Transform643 = createNode("Transform");
//Empty Transform
Shape Shape644 = createNode("Shape");
Shape644.USE = "HAnimJointShape";
Transform643.child = new undefined();

Transform643.child[0] = Shape644;

Transform642.children = new MFNode();

Transform642.children[0] = Transform643;

HAnimSegment641.children = new MFNode();

HAnimSegment641.children[0] = Transform642;

Shape Shape645 = createNode("Shape");
LineSet LineSet646 = createNode("LineSet");
LineSet646.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate647 = createNode("Coordinate");
Coordinate647.point = new MFVec3f(new float[-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065]);
LineSet646.coord = Coordinate647;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA ColorRGBA648 = createNode("ColorRGBA");
ColorRGBA648.USE = "HAnimSegmentLineColorRGBA";
LineSet646.color = ColorRGBA648;

Shape645.geometry = LineSet646;

HAnimSegment641.children[1] = Shape645;

HAnimJoint640.children = new MFNode();

HAnimJoint640.children[0] = HAnimSegment641;

HAnimJoint HAnimJoint649 = createNode("HAnimJoint");
HAnimJoint649.name = "r_metatarsophalangeal_3";
HAnimJoint649.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint649.center = new SFVec3f(new float[-0.0963,0.0065,-0.0065]);
HAnimJoint649.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint649.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment650 = createNode("HAnimSegment");
HAnimSegment650.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment650.DEF = "hanim_r_tarsal_proximal_phalanx_3";
Transform Transform651 = createNode("Transform");
Transform651.translation = new SFVec3f(new float[-0.0963,0.0065,-0.0065]);
Transform Transform652 = createNode("Transform");
//Empty Transform
Shape Shape653 = createNode("Shape");
Shape653.USE = "HAnimJointShape";
Transform652.child = new undefined();

Transform652.child[0] = Shape653;

Transform651.children = new MFNode();

Transform651.children[0] = Transform652;

HAnimSegment650.children = new MFNode();

HAnimSegment650.children[0] = Transform651;

Shape Shape654 = createNode("Shape");
LineSet LineSet655 = createNode("LineSet");
LineSet655.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate656 = createNode("Coordinate");
Coordinate656.point = new MFVec3f(new float[-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086]);
LineSet655.coord = Coordinate656;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA657 = createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
LineSet655.color = ColorRGBA657;

Shape654.geometry = LineSet655;

HAnimSegment650.children[1] = Shape654;

HAnimJoint649.children = new MFNode();

HAnimJoint649.children[0] = HAnimSegment650;

HAnimJoint HAnimJoint658 = createNode("HAnimJoint");
HAnimJoint658.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint658.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint658.center = new SFVec3f(new float[-0.0987,0.0034,0.0086]);
HAnimJoint658.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment659 = createNode("HAnimSegment");
HAnimSegment659.name = "r_tarsal_middle_phalanx_3";
HAnimSegment659.DEF = "hanim_r_tarsal_middle_phalanx_3";
Transform Transform660 = createNode("Transform");
Transform660.translation = new SFVec3f(new float[-0.0987,0.0034,0.0086]);
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
Coordinate665.point = new MFVec3f(new float[-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178]);
LineSet664.coord = Coordinate665;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA666 = createNode("ColorRGBA");
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA";
LineSet664.color = ColorRGBA666;

Shape663.geometry = LineSet664;

HAnimSegment659.children[1] = Shape663;

HAnimJoint658.children = new MFNode();

HAnimJoint658.children[0] = HAnimSegment659;

HAnimJoint HAnimJoint667 = createNode("HAnimJoint");
HAnimJoint667.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint667.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint667.center = new SFVec3f(new float[-0.1002,0.0013,0.0178]);
HAnimJoint667.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint667.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.children[1] = HAnimJoint667;

HAnimJoint649.children[1] = HAnimJoint658;

HAnimJoint640.children[1] = HAnimJoint649;

HAnimJoint631.children[1] = HAnimJoint640;

HAnimJoint542.children[3] = HAnimJoint631;

HAnimJoint515.children[1] = HAnimJoint542;

HAnimJoint HAnimJoint668 = createNode("HAnimJoint");
HAnimJoint668.name = "r_calcaneocuboid";
HAnimJoint668.DEF = "hanim_r_calcaneocuboid";
HAnimJoint668.center = new SFVec3f(new float[-0.0889,0.0494,-0.1278]);
HAnimJoint668.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint668.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment669 = createNode("HAnimSegment");
HAnimSegment669.name = "r_calcaneus";
HAnimSegment669.DEF = "hanim_r_calcaneus";
Transform Transform670 = createNode("Transform");
Transform670.translation = new SFVec3f(new float[-0.0889,0.0494,-0.1278]);
Transform Transform671 = createNode("Transform");
//Empty Transform
Shape Shape672 = createNode("Shape");
Shape672.USE = "HAnimJointShape";
Transform671.child = new undefined();

Transform671.child[0] = Shape672;

Transform670.children = new MFNode();

Transform670.children[0] = Transform671;

HAnimSegment669.children = new MFNode();

HAnimSegment669.children[0] = Transform670;

Shape Shape673 = createNode("Shape");
LineSet LineSet674 = createNode("LineSet");
LineSet674.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate675 = createNode("Coordinate");
Coordinate675.point = new MFVec3f(new float[-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998]);
LineSet674.coord = Coordinate675;

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA ColorRGBA676 = createNode("ColorRGBA");
ColorRGBA676.USE = "HAnimSegmentLineColorRGBA";
LineSet674.color = ColorRGBA676;

Shape673.geometry = LineSet674;

HAnimSegment669.children[1] = Shape673;

HAnimJoint668.children = new MFNode();

HAnimJoint668.children[0] = HAnimSegment669;

HAnimJoint HAnimJoint677 = createNode("HAnimJoint");
HAnimJoint677.name = "r_transversetarsal";
HAnimJoint677.DEF = "hanim_r_transversetarsal";
HAnimJoint677.center = new SFVec3f(new float[-0.1105,0.0267,-0.0998]);
HAnimJoint677.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint677.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment678 = createNode("HAnimSegment");
HAnimSegment678.name = "r_cuboid";
HAnimSegment678.DEF = "hanim_r_cuboid";
Transform Transform679 = createNode("Transform");
Transform679.translation = new SFVec3f(new float[-0.1105,0.0267,-0.0998]);
Transform Transform680 = createNode("Transform");
//Empty Transform
Shape Shape681 = createNode("Shape");
Shape681.USE = "HAnimJointShape";
Transform680.child = new undefined();

Transform680.child[0] = Shape681;

Transform679.children = new MFNode();

Transform679.children[0] = Transform680;

HAnimSegment678.children = new MFNode();

HAnimSegment678.children[0] = Transform679;

Shape Shape682 = createNode("Shape");
LineSet LineSet683 = createNode("LineSet");
LineSet683.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate684 = createNode("Coordinate");
Coordinate684.point = new MFVec3f(new float[-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634]);
LineSet683.coord = Coordinate684;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA ColorRGBA685 = createNode("ColorRGBA");
ColorRGBA685.USE = "HAnimSegmentLineColorRGBA";
LineSet683.color = ColorRGBA685;

Shape682.geometry = LineSet683;

HAnimSegment678.children[1] = Shape682;

Shape Shape686 = createNode("Shape");
LineSet LineSet687 = createNode("LineSet");
LineSet687.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate688 = createNode("Coordinate");
Coordinate688.point = new MFVec3f(new float[-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671]);
LineSet687.coord = Coordinate688;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA ColorRGBA689 = createNode("ColorRGBA");
ColorRGBA689.USE = "HAnimSegmentLineColorRGBA";
LineSet687.color = ColorRGBA689;

Shape686.geometry = LineSet687;

HAnimSegment678.children[2] = Shape686;

HAnimJoint677.children = new MFNode();

HAnimJoint677.children[0] = HAnimSegment678;

HAnimJoint HAnimJoint690 = createNode("HAnimJoint");
HAnimJoint690.name = "r_tarsometatarsal_4";
HAnimJoint690.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint690.center = new SFVec3f(new float[-0.1063,0.016,-0.0634]);
HAnimJoint690.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint690.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment691 = createNode("HAnimSegment");
HAnimSegment691.name = "r_metatarsal_4";
HAnimSegment691.DEF = "hanim_r_metatarsal_4";
Transform Transform692 = createNode("Transform");
Transform692.translation = new SFVec3f(new float[-0.1063,0.016,-0.0634]);
Transform Transform693 = createNode("Transform");
//Empty Transform
Shape Shape694 = createNode("Shape");
Shape694.USE = "HAnimJointShape";
Transform693.child = new undefined();

Transform693.child[0] = Shape694;

Transform692.children = new MFNode();

Transform692.children[0] = Transform693;

HAnimSegment691.children = new MFNode();

HAnimSegment691.children[0] = Transform692;

Shape Shape695 = createNode("Shape");
LineSet LineSet696 = createNode("LineSet");
LineSet696.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate697 = createNode("Coordinate");
Coordinate697.point = new MFVec3f(new float[-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107]);
LineSet696.coord = Coordinate697;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA ColorRGBA698 = createNode("ColorRGBA");
ColorRGBA698.USE = "HAnimSegmentLineColorRGBA";
LineSet696.color = ColorRGBA698;

Shape695.geometry = LineSet696;

HAnimSegment691.children[1] = Shape695;

HAnimJoint690.children = new MFNode();

HAnimJoint690.children[0] = HAnimSegment691;

HAnimJoint HAnimJoint699 = createNode("HAnimJoint");
HAnimJoint699.name = "r_metatarsophalangeal_4";
HAnimJoint699.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint699.center = new SFVec3f(new float[-0.1097,0.0058,-0.0107]);
HAnimJoint699.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint699.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment700 = createNode("HAnimSegment");
HAnimSegment700.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment700.DEF = "hanim_r_tarsal_proximal_phalanx_4";
Transform Transform701 = createNode("Transform");
Transform701.translation = new SFVec3f(new float[-0.1097,0.0058,-0.0107]);
Transform Transform702 = createNode("Transform");
//Empty Transform
Shape Shape703 = createNode("Shape");
Shape703.USE = "HAnimJointShape";
Transform702.child = new undefined();

Transform702.child[0] = Shape703;

Transform701.children = new MFNode();

Transform701.children[0] = Transform702;

HAnimSegment700.children = new MFNode();

HAnimSegment700.children[0] = Transform701;

Shape Shape704 = createNode("Shape");
LineSet LineSet705 = createNode("LineSet");
LineSet705.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate706 = createNode("Coordinate");
Coordinate706.point = new MFVec3f(new float[-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044]);
LineSet705.coord = Coordinate706;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA707 = createNode("ColorRGBA");
ColorRGBA707.USE = "HAnimSegmentLineColorRGBA";
LineSet705.color = ColorRGBA707;

Shape704.geometry = LineSet705;

HAnimSegment700.children[1] = Shape704;

HAnimJoint699.children = new MFNode();

HAnimJoint699.children[0] = HAnimSegment700;

HAnimJoint HAnimJoint708 = createNode("HAnimJoint");
HAnimJoint708.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint708.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint708.center = new SFVec3f(new float[-0.114,0.0037,0.0044]);
HAnimJoint708.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint708.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment709 = createNode("HAnimSegment");
HAnimSegment709.name = "r_tarsal_middle_phalanx_4";
HAnimSegment709.DEF = "hanim_r_tarsal_middle_phalanx_4";
Transform Transform710 = createNode("Transform");
Transform710.translation = new SFVec3f(new float[-0.114,0.0037,0.0044]);
Transform Transform711 = createNode("Transform");
//Empty Transform
Shape Shape712 = createNode("Shape");
Shape712.USE = "HAnimJointShape";
Transform711.child = new undefined();

Transform711.child[0] = Shape712;

Transform710.children = new MFNode();

Transform710.children[0] = Transform711;

HAnimSegment709.children = new MFNode();

HAnimSegment709.children[0] = Transform710;

Shape Shape713 = createNode("Shape");
LineSet LineSet714 = createNode("LineSet");
LineSet714.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate715 = createNode("Coordinate");
Coordinate715.point = new MFVec3f(new float[-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118]);
LineSet714.coord = Coordinate715;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA716 = createNode("ColorRGBA");
ColorRGBA716.USE = "HAnimSegmentLineColorRGBA";
LineSet714.color = ColorRGBA716;

Shape713.geometry = LineSet714;

HAnimSegment709.children[1] = Shape713;

HAnimJoint708.children = new MFNode();

HAnimJoint708.children[0] = HAnimSegment709;

HAnimJoint HAnimJoint717 = createNode("HAnimJoint");
HAnimJoint717.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint717.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint717.center = new SFVec3f(new float[-0.1155,0.0008,0.0118]);
HAnimJoint717.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint717.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint708.children[1] = HAnimJoint717;

HAnimJoint699.children[1] = HAnimJoint708;

HAnimJoint690.children[1] = HAnimJoint699;

HAnimJoint677.children[1] = HAnimJoint690;

HAnimJoint HAnimJoint718 = createNode("HAnimJoint");
HAnimJoint718.name = "r_tarsometatarsal_5";
HAnimJoint718.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint718.center = new SFVec3f(new float[-0.1206,0.0124,-0.0671]);
HAnimJoint718.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint718.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment719 = createNode("HAnimSegment");
HAnimSegment719.name = "r_metatarsal_5";
HAnimSegment719.DEF = "hanim_r_metatarsal_5";
Transform Transform720 = createNode("Transform");
Transform720.translation = new SFVec3f(new float[-0.1206,0.0124,-0.0671]);
Transform Transform721 = createNode("Transform");
//Empty Transform
Shape Shape722 = createNode("Shape");
Shape722.USE = "HAnimJointShape";
Transform721.child = new undefined();

Transform721.child[0] = Shape722;

Transform720.children = new MFNode();

Transform720.children[0] = Transform721;

HAnimSegment719.children = new MFNode();

HAnimSegment719.children[0] = Transform720;

Shape Shape723 = createNode("Shape");
LineSet LineSet724 = createNode("LineSet");
LineSet724.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate725 = createNode("Coordinate");
Coordinate725.point = new MFVec3f(new float[-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153]);
LineSet724.coord = Coordinate725;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA ColorRGBA726 = createNode("ColorRGBA");
ColorRGBA726.USE = "HAnimSegmentLineColorRGBA";
LineSet724.color = ColorRGBA726;

Shape723.geometry = LineSet724;

HAnimSegment719.children[1] = Shape723;

HAnimJoint718.children = new MFNode();

HAnimJoint718.children[0] = HAnimSegment719;

HAnimJoint HAnimJoint727 = createNode("HAnimJoint");
HAnimJoint727.name = "r_metatarsophalangeal_5";
HAnimJoint727.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint727.center = new SFVec3f(new float[-0.1239,0.0051,-0.0153]);
HAnimJoint727.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint727.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment728 = createNode("HAnimSegment");
HAnimSegment728.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment728.DEF = "hanim_r_tarsal_proximal_phalanx_5";
Transform Transform729 = createNode("Transform");
Transform729.translation = new SFVec3f(new float[-0.1239,0.0051,-0.0153]);
Transform Transform730 = createNode("Transform");
//Empty Transform
Shape Shape731 = createNode("Shape");
Shape731.USE = "HAnimJointShape";
Transform730.child = new undefined();

Transform730.child[0] = Shape731;

Transform729.children = new MFNode();

Transform729.children[0] = Transform730;

HAnimSegment728.children = new MFNode();

HAnimSegment728.children[0] = Transform729;

Shape Shape732 = createNode("Shape");
LineSet LineSet733 = createNode("LineSet");
LineSet733.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate734 = createNode("Coordinate");
Coordinate734.point = new MFVec3f(new float[-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077]);
LineSet733.coord = Coordinate734;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA735 = createNode("ColorRGBA");
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA";
LineSet733.color = ColorRGBA735;

Shape732.geometry = LineSet733;

HAnimSegment728.children[1] = Shape732;

HAnimSite HAnimSite736 = createNode("HAnimSite");
HAnimSite736.name = "r_metatarsal_phalanx_5";
HAnimSite736.DEF = "hanim_r_metatarsal_phalanx_5";
TouchSensor TouchSensor737 = createNode("TouchSensor");
TouchSensor737.description = "HAnimSite 60 r_metatarsal_phalanx_5";
HAnimSite736.children = new MFNode();

HAnimSite736.children[0] = TouchSensor737;

Shape Shape738 = createNode("Shape");
Shape738.USE = "HAnimSiteShape";
HAnimSite736.children[1] = Shape738;

Billboard Billboard739 = createNode("Billboard");
Shape Shape740 = createNode("Shape");
Text Text741 = createNode("Text");
Text741.string = new MFString(new java.lang.String["60"]);
FontStyle FontStyle742 = createNode("FontStyle");
FontStyle742.size = 0.035;
Text741.fontStyle = FontStyle742;

Shape740.geometry = Text741;

Billboard739.children = new MFNode();

Billboard739.children[0] = Shape740;

HAnimSite736.children[2] = Billboard739;

HAnimSegment728.children[2] = HAnimSite736;

HAnimJoint727.children = new MFNode();

HAnimJoint727.children[0] = HAnimSegment728;

HAnimJoint HAnimJoint743 = createNode("HAnimJoint");
HAnimJoint743.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint743.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint743.center = new SFVec3f(new float[-0.1262,0.0023,-0.0077]);
HAnimJoint743.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint743.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment744 = createNode("HAnimSegment");
HAnimSegment744.name = "r_tarsal_middle_phalanx_5";
HAnimSegment744.DEF = "hanim_r_tarsal_middle_phalanx_5";
Transform Transform745 = createNode("Transform");
Transform745.translation = new SFVec3f(new float[-0.1262,0.0023,-0.0077]);
Transform Transform746 = createNode("Transform");
//Empty Transform
Shape Shape747 = createNode("Shape");
Shape747.USE = "HAnimJointShape";
Transform746.child = new undefined();

Transform746.child[0] = Shape747;

Transform745.children = new MFNode();

Transform745.children[0] = Transform746;

HAnimSegment744.children = new MFNode();

HAnimSegment744.children[0] = Transform745;

Shape Shape748 = createNode("Shape");
LineSet LineSet749 = createNode("LineSet");
LineSet749.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate750 = createNode("Coordinate");
Coordinate750.point = new MFVec3f(new float[-0.1262,0.0023,-0.0077,-0.1271,0,0]);
LineSet749.coord = Coordinate750;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA751 = createNode("ColorRGBA");
ColorRGBA751.USE = "HAnimSegmentLineColorRGBA";
LineSet749.color = ColorRGBA751;

Shape748.geometry = LineSet749;

HAnimSegment744.children[1] = Shape748;

HAnimJoint743.children = new MFNode();

HAnimJoint743.children[0] = HAnimSegment744;

HAnimJoint HAnimJoint752 = createNode("HAnimJoint");
HAnimJoint752.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint752.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint752.center = new SFVec3f(new float[-0.1271,0,0]);
HAnimJoint752.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint752.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint743.children[1] = HAnimJoint752;

HAnimJoint727.children[1] = HAnimJoint743;

HAnimJoint718.children[1] = HAnimJoint727;

HAnimJoint677.children[2] = HAnimJoint718;

HAnimJoint668.children[1] = HAnimJoint677;

HAnimJoint515.children[2] = HAnimJoint668;

HAnimJoint485.children[1] = HAnimJoint515;

HAnimJoint448.children[1] = HAnimJoint485;

HAnimJoint60.children[2] = HAnimJoint448;

HAnimJoint47.children[1] = HAnimJoint60;

HAnimJoint HAnimJoint753 = createNode("HAnimJoint");
HAnimJoint753.name = "vl5";
HAnimJoint753.DEF = "hanim_vl5";
HAnimJoint753.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint753.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint753.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment754 = createNode("HAnimSegment");
HAnimSegment754.name = "l5";
HAnimSegment754.DEF = "hanim_l5";
Transform Transform755 = createNode("Transform");
Transform755.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Transform Transform756 = createNode("Transform");
//Empty Transform
Shape Shape757 = createNode("Shape");
Shape757.USE = "HAnimJointShape";
Transform756.child = new undefined();

Transform756.child[0] = Shape757;

Transform755.children = new MFNode();

Transform755.children[0] = Transform756;

HAnimSegment754.children = new MFNode();

HAnimSegment754.children[0] = Transform755;

Shape Shape758 = createNode("Shape");
LineSet LineSet759 = createNode("LineSet");
LineSet759.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate760 = createNode("Coordinate");
Coordinate760.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet759.coord = Coordinate760;

//from vl5 to vl4 vertices 2
ColorRGBA ColorRGBA761 = createNode("ColorRGBA");
ColorRGBA761.USE = "HAnimSegmentLineColorRGBA";
LineSet759.color = ColorRGBA761;

Shape758.geometry = LineSet759;

HAnimSegment754.children[1] = Shape758;

HAnimSite HAnimSite762 = createNode("HAnimSite");
HAnimSite762.name = "navel";
HAnimSite762.DEF = "hanim_navel";
HAnimSite762.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor763 = createNode("TouchSensor");
TouchSensor763.description = "HAnimSite 84 navel";
HAnimSite762.children = new MFNode();

HAnimSite762.children[0] = TouchSensor763;

Shape Shape764 = createNode("Shape");
Shape764.USE = "HAnimSiteShape";
HAnimSite762.children[1] = Shape764;

Billboard Billboard765 = createNode("Billboard");
Shape Shape766 = createNode("Shape");
Text Text767 = createNode("Text");
Text767.string = new MFString(new java.lang.String["84"]);
FontStyle FontStyle768 = createNode("FontStyle");
FontStyle768.size = 0.035;
Text767.fontStyle = FontStyle768;

Shape766.geometry = Text767;

Billboard765.children = new MFNode();

Billboard765.children[0] = Shape766;

HAnimSite762.children[2] = Billboard765;

HAnimSegment754.children[2] = HAnimSite762;

HAnimSite HAnimSite769 = createNode("HAnimSite");
HAnimSite769.name = "waist_preferred_anterior";
HAnimSite769.DEF = "hanim_waist_preferred_anterior";
TouchSensor TouchSensor770 = createNode("TouchSensor");
TouchSensor770.description = "HAnimSite 26 waist_preferred_anterior";
HAnimSite769.children = new MFNode();

HAnimSite769.children[0] = TouchSensor770;

Shape Shape771 = createNode("Shape");
Shape771.USE = "HAnimSiteShape";
HAnimSite769.children[1] = Shape771;

Billboard Billboard772 = createNode("Billboard");
Shape Shape773 = createNode("Shape");
Text Text774 = createNode("Text");
Text774.string = new MFString(new java.lang.String["26"]);
FontStyle FontStyle775 = createNode("FontStyle");
FontStyle775.size = 0.035;
Text774.fontStyle = FontStyle775;

Shape773.geometry = Text774;

Billboard772.children = new MFNode();

Billboard772.children[0] = Shape773;

HAnimSite769.children[2] = Billboard772;

HAnimSegment754.children[3] = HAnimSite769;

HAnimSite HAnimSite776 = createNode("HAnimSite");
HAnimSite776.name = "waist_preferred_posterior";
HAnimSite776.DEF = "hanim_waist_preferred_posterior";
HAnimSite776.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor777 = createNode("TouchSensor");
TouchSensor777.description = "HAnimSite 27 waist_preferred_posterior";
HAnimSite776.children = new MFNode();

HAnimSite776.children[0] = TouchSensor777;

Shape Shape778 = createNode("Shape");
Shape778.USE = "HAnimSiteShape";
HAnimSite776.children[1] = Shape778;

Billboard Billboard779 = createNode("Billboard");
Shape Shape780 = createNode("Shape");
Text Text781 = createNode("Text");
Text781.string = new MFString(new java.lang.String["27"]);
FontStyle FontStyle782 = createNode("FontStyle");
FontStyle782.size = 0.035;
Text781.fontStyle = FontStyle782;

Shape780.geometry = Text781;

Billboard779.children = new MFNode();

Billboard779.children[0] = Shape780;

HAnimSite776.children[2] = Billboard779;

HAnimSegment754.children[4] = HAnimSite776;

HAnimJoint753.children = new MFNode();

HAnimJoint753.children[0] = HAnimSegment754;

HAnimJoint HAnimJoint783 = createNode("HAnimJoint");
HAnimJoint783.name = "vl4";
HAnimJoint783.DEF = "hanim_vl4";
HAnimJoint783.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint783.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint783.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment784 = createNode("HAnimSegment");
HAnimSegment784.name = "l4";
HAnimSegment784.DEF = "hanim_l4";
Transform Transform785 = createNode("Transform");
Transform785.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Transform Transform786 = createNode("Transform");
//Empty Transform
Shape Shape787 = createNode("Shape");
Shape787.USE = "HAnimJointShape";
Transform786.child = new undefined();

Transform786.child[0] = Shape787;

Transform785.children = new MFNode();

Transform785.children[0] = Transform786;

HAnimSegment784.children = new MFNode();

HAnimSegment784.children[0] = Transform785;

Shape Shape788 = createNode("Shape");
LineSet LineSet789 = createNode("LineSet");
LineSet789.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate790 = createNode("Coordinate");
Coordinate790.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet789.coord = Coordinate790;

//from vl4 to vl3 vertices 2
ColorRGBA ColorRGBA791 = createNode("ColorRGBA");
ColorRGBA791.USE = "HAnimSegmentLineColorRGBA";
LineSet789.color = ColorRGBA791;

Shape788.geometry = LineSet789;

HAnimSegment784.children[1] = Shape788;

HAnimJoint783.children = new MFNode();

HAnimJoint783.children[0] = HAnimSegment784;

HAnimJoint HAnimJoint792 = createNode("HAnimJoint");
HAnimJoint792.name = "vl3";
HAnimJoint792.DEF = "hanim_vl3";
HAnimJoint792.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint792.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint792.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment793 = createNode("HAnimSegment");
HAnimSegment793.name = "l3";
HAnimSegment793.DEF = "hanim_l3";
Transform Transform794 = createNode("Transform");
Transform794.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Transform Transform795 = createNode("Transform");
//Empty Transform
Shape Shape796 = createNode("Shape");
Shape796.USE = "HAnimJointShape";
Transform795.child = new undefined();

Transform795.child[0] = Shape796;

Transform794.children = new MFNode();

Transform794.children[0] = Transform795;

HAnimSegment793.children = new MFNode();

HAnimSegment793.children[0] = Transform794;

Shape Shape797 = createNode("Shape");
LineSet LineSet798 = createNode("LineSet");
LineSet798.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate799 = createNode("Coordinate");
Coordinate799.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet798.coord = Coordinate799;

//from vl3 to vl2 vertices 2
ColorRGBA ColorRGBA800 = createNode("ColorRGBA");
ColorRGBA800.USE = "HAnimSegmentLineColorRGBA";
LineSet798.color = ColorRGBA800;

Shape797.geometry = LineSet798;

HAnimSegment793.children[1] = Shape797;

HAnimJoint792.children = new MFNode();

HAnimJoint792.children[0] = HAnimSegment793;

HAnimJoint HAnimJoint801 = createNode("HAnimJoint");
HAnimJoint801.name = "vl2";
HAnimJoint801.DEF = "hanim_vl2";
HAnimJoint801.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint801.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint801.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment802 = createNode("HAnimSegment");
HAnimSegment802.name = "l2";
HAnimSegment802.DEF = "hanim_l2";
Transform Transform803 = createNode("Transform");
Transform803.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Transform Transform804 = createNode("Transform");
//Empty Transform
Shape Shape805 = createNode("Shape");
Shape805.USE = "HAnimJointShape";
Transform804.child = new undefined();

Transform804.child[0] = Shape805;

Transform803.children = new MFNode();

Transform803.children[0] = Transform804;

HAnimSegment802.children = new MFNode();

HAnimSegment802.children[0] = Transform803;

Shape Shape806 = createNode("Shape");
LineSet LineSet807 = createNode("LineSet");
LineSet807.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate808 = createNode("Coordinate");
Coordinate808.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet807.coord = Coordinate808;

//from vl2 to vl1 vertices 2
ColorRGBA ColorRGBA809 = createNode("ColorRGBA");
ColorRGBA809.USE = "HAnimSegmentLineColorRGBA";
LineSet807.color = ColorRGBA809;

Shape806.geometry = LineSet807;

HAnimSegment802.children[1] = Shape806;

HAnimSite HAnimSite810 = createNode("HAnimSite");
HAnimSite810.name = "l_rib10";
HAnimSite810.DEF = "hanim_l_rib10";
HAnimSite810.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor811 = createNode("TouchSensor");
TouchSensor811.description = "HAnimSite 28 l_rib10";
HAnimSite810.children = new MFNode();

HAnimSite810.children[0] = TouchSensor811;

Shape Shape812 = createNode("Shape");
Shape812.USE = "HAnimSiteShape";
HAnimSite810.children[1] = Shape812;

Billboard Billboard813 = createNode("Billboard");
Shape Shape814 = createNode("Shape");
Text Text815 = createNode("Text");
Text815.string = new MFString(new java.lang.String["28"]);
FontStyle FontStyle816 = createNode("FontStyle");
FontStyle816.size = 0.035;
Text815.fontStyle = FontStyle816;

Shape814.geometry = Text815;

Billboard813.children = new MFNode();

Billboard813.children[0] = Shape814;

HAnimSite810.children[2] = Billboard813;

HAnimSegment802.children[2] = HAnimSite810;

HAnimSite HAnimSite817 = createNode("HAnimSite");
HAnimSite817.name = "r_rib10";
HAnimSite817.DEF = "hanim_r_rib10";
HAnimSite817.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor818 = createNode("TouchSensor");
TouchSensor818.description = "HAnimSite 30 r_rib10";
HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = TouchSensor818;

Shape Shape819 = createNode("Shape");
Shape819.USE = "HAnimSiteShape";
HAnimSite817.children[1] = Shape819;

Billboard Billboard820 = createNode("Billboard");
Shape Shape821 = createNode("Shape");
Text Text822 = createNode("Text");
Text822.string = new MFString(new java.lang.String["30"]);
FontStyle FontStyle823 = createNode("FontStyle");
FontStyle823.size = 0.035;
Text822.fontStyle = FontStyle823;

Shape821.geometry = Text822;

Billboard820.children = new MFNode();

Billboard820.children[0] = Shape821;

HAnimSite817.children[2] = Billboard820;

HAnimSegment802.children[3] = HAnimSite817;

HAnimSite HAnimSite824 = createNode("HAnimSite");
HAnimSite824.name = "spine_2_middle_back";
HAnimSite824.DEF = "hanim_spine_2_middle_back";
TouchSensor TouchSensor825 = createNode("TouchSensor");
TouchSensor825.description = "HAnimSite spine_2_middle_back";
HAnimSite824.children = new MFNode();

HAnimSite824.children[0] = TouchSensor825;

Shape Shape826 = createNode("Shape");
Shape826.USE = "HAnimSiteShape";
HAnimSite824.children[1] = Shape826;

Billboard Billboard827 = createNode("Billboard");
Shape Shape828 = createNode("Shape");
Text Text829 = createNode("Text");
Text829.string = new MFString(new java.lang.String[""]);
FontStyle FontStyle830 = createNode("FontStyle");
FontStyle830.size = 0.035;
Text829.fontStyle = FontStyle830;

Shape828.geometry = Text829;

Billboard827.children = new MFNode();

Billboard827.children[0] = Shape828;

HAnimSite824.children[2] = Billboard827;

HAnimSegment802.children[4] = HAnimSite824;

HAnimJoint801.children = new MFNode();

HAnimJoint801.children[0] = HAnimSegment802;

HAnimJoint HAnimJoint831 = createNode("HAnimJoint");
HAnimJoint831.name = "vl1";
HAnimJoint831.DEF = "hanim_vl1";
HAnimJoint831.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint831.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint831.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment832 = createNode("HAnimSegment");
HAnimSegment832.name = "l1";
HAnimSegment832.DEF = "hanim_l1";
Transform Transform833 = createNode("Transform");
Transform833.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform834 = createNode("Transform");
//Empty Transform
Shape Shape835 = createNode("Shape");
Shape835.USE = "HAnimJointShape";
Transform834.child = new undefined();

Transform834.child[0] = Shape835;

Transform833.children = new MFNode();

Transform833.children[0] = Transform834;

HAnimSegment832.children = new MFNode();

HAnimSegment832.children[0] = Transform833;

Shape Shape836 = createNode("Shape");
LineSet LineSet837 = createNode("LineSet");
LineSet837.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate838 = createNode("Coordinate");
Coordinate838.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet837.coord = Coordinate838;

//from vl1 to vt12 vertices 2
ColorRGBA ColorRGBA839 = createNode("ColorRGBA");
ColorRGBA839.USE = "HAnimSegmentLineColorRGBA";
LineSet837.color = ColorRGBA839;

Shape836.geometry = LineSet837;

HAnimSegment832.children[1] = Shape836;

HAnimJoint831.children = new MFNode();

HAnimJoint831.children[0] = HAnimSegment832;

HAnimJoint HAnimJoint840 = createNode("HAnimJoint");
HAnimJoint840.name = "vt12";
HAnimJoint840.DEF = "hanim_vt12";
HAnimJoint840.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint840.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint840.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment841 = createNode("HAnimSegment");
HAnimSegment841.name = "t12";
HAnimSegment841.DEF = "hanim_t12";
Transform Transform842 = createNode("Transform");
Transform842.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Transform Transform843 = createNode("Transform");
//Empty Transform
Shape Shape844 = createNode("Shape");
Shape844.USE = "HAnimJointShape";
Transform843.child = new undefined();

Transform843.child[0] = Shape844;

Transform842.children = new MFNode();

Transform842.children[0] = Transform843;

HAnimSegment841.children = new MFNode();

HAnimSegment841.children[0] = Transform842;

Shape Shape845 = createNode("Shape");
LineSet LineSet846 = createNode("LineSet");
LineSet846.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate847 = createNode("Coordinate");
Coordinate847.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet846.coord = Coordinate847;

//from vt12 to vt11 vertices 2
ColorRGBA ColorRGBA848 = createNode("ColorRGBA");
ColorRGBA848.USE = "HAnimSegmentLineColorRGBA";
LineSet846.color = ColorRGBA848;

Shape845.geometry = LineSet846;

HAnimSegment841.children[1] = Shape845;

HAnimJoint840.children = new MFNode();

HAnimJoint840.children[0] = HAnimSegment841;

HAnimJoint HAnimJoint849 = createNode("HAnimJoint");
HAnimJoint849.name = "vt11";
HAnimJoint849.DEF = "hanim_vt11";
HAnimJoint849.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint849.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint849.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment850 = createNode("HAnimSegment");
HAnimSegment850.name = "t11";
HAnimSegment850.DEF = "hanim_t11";
Transform Transform851 = createNode("Transform");
Transform851.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Transform Transform852 = createNode("Transform");
//Empty Transform
Shape Shape853 = createNode("Shape");
Shape853.USE = "HAnimJointShape";
Transform852.child = new undefined();

Transform852.child[0] = Shape853;

Transform851.children = new MFNode();

Transform851.children[0] = Transform852;

HAnimSegment850.children = new MFNode();

HAnimSegment850.children[0] = Transform851;

Shape Shape854 = createNode("Shape");
LineSet LineSet855 = createNode("LineSet");
LineSet855.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate856 = createNode("Coordinate");
Coordinate856.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet855.coord = Coordinate856;

//from vt11 to vt10 vertices 2
ColorRGBA ColorRGBA857 = createNode("ColorRGBA");
ColorRGBA857.USE = "HAnimSegmentLineColorRGBA";
LineSet855.color = ColorRGBA857;

Shape854.geometry = LineSet855;

HAnimSegment850.children[1] = Shape854;

HAnimJoint849.children = new MFNode();

HAnimJoint849.children[0] = HAnimSegment850;

HAnimJoint HAnimJoint858 = createNode("HAnimJoint");
HAnimJoint858.name = "vt10";
HAnimJoint858.DEF = "hanim_vt10";
HAnimJoint858.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint858.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint858.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment859 = createNode("HAnimSegment");
HAnimSegment859.name = "t10";
HAnimSegment859.DEF = "hanim_t10";
Transform Transform860 = createNode("Transform");
Transform860.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform861 = createNode("Transform");
//Empty Transform
Shape Shape862 = createNode("Shape");
Shape862.USE = "HAnimJointShape";
Transform861.child = new undefined();

Transform861.child[0] = Shape862;

Transform860.children = new MFNode();

Transform860.children[0] = Transform861;

HAnimSegment859.children = new MFNode();

HAnimSegment859.children[0] = Transform860;

Shape Shape863 = createNode("Shape");
LineSet LineSet864 = createNode("LineSet");
LineSet864.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate865 = createNode("Coordinate");
Coordinate865.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet864.coord = Coordinate865;

//from vt10 to vt9 vertices 2
ColorRGBA ColorRGBA866 = createNode("ColorRGBA");
ColorRGBA866.USE = "HAnimSegmentLineColorRGBA";
LineSet864.color = ColorRGBA866;

Shape863.geometry = LineSet864;

HAnimSegment859.children[1] = Shape863;

HAnimSite HAnimSite867 = createNode("HAnimSite");
HAnimSite867.name = "substernale";
HAnimSite867.DEF = "hanim_substernale";
HAnimSite867.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor868 = createNode("TouchSensor");
TouchSensor868.description = "HAnimSite 13 substernale";
HAnimSite867.children = new MFNode();

HAnimSite867.children[0] = TouchSensor868;

Shape Shape869 = createNode("Shape");
Shape869.USE = "HAnimSiteShape";
HAnimSite867.children[1] = Shape869;

Billboard Billboard870 = createNode("Billboard");
Shape Shape871 = createNode("Shape");
Text Text872 = createNode("Text");
Text872.string = new MFString(new java.lang.String["13"]);
FontStyle FontStyle873 = createNode("FontStyle");
FontStyle873.size = 0.035;
Text872.fontStyle = FontStyle873;

Shape871.geometry = Text872;

Billboard870.children = new MFNode();

Billboard870.children[0] = Shape871;

HAnimSite867.children[2] = Billboard870;

HAnimSegment859.children[2] = HAnimSite867;

HAnimJoint858.children = new MFNode();

HAnimJoint858.children[0] = HAnimSegment859;

HAnimJoint HAnimJoint874 = createNode("HAnimJoint");
HAnimJoint874.name = "vt9";
HAnimJoint874.DEF = "hanim_vt9";
HAnimJoint874.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint874.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint874.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment875 = createNode("HAnimSegment");
HAnimSegment875.name = "t9";
HAnimSegment875.DEF = "hanim_t9";
Transform Transform876 = createNode("Transform");
Transform876.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Transform Transform877 = createNode("Transform");
//Empty Transform
Shape Shape878 = createNode("Shape");
Shape878.USE = "HAnimJointShape";
Transform877.child = new undefined();

Transform877.child[0] = Shape878;

Transform876.children = new MFNode();

Transform876.children[0] = Transform877;

HAnimSegment875.children = new MFNode();

HAnimSegment875.children[0] = Transform876;

Shape Shape879 = createNode("Shape");
LineSet LineSet880 = createNode("LineSet");
LineSet880.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate881 = createNode("Coordinate");
Coordinate881.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet880.coord = Coordinate881;

//from vt9 to vt8 vertices 2
ColorRGBA ColorRGBA882 = createNode("ColorRGBA");
ColorRGBA882.USE = "HAnimSegmentLineColorRGBA";
LineSet880.color = ColorRGBA882;

Shape879.geometry = LineSet880;

HAnimSegment875.children[1] = Shape879;

HAnimSite HAnimSite883 = createNode("HAnimSite");
HAnimSite883.name = "l_thelion";
HAnimSite883.DEF = "hanim_l_thelion";
HAnimSite883.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor884 = createNode("TouchSensor");
TouchSensor884.description = "HAnimSite 29 l_thelion";
HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = TouchSensor884;

Shape Shape885 = createNode("Shape");
Shape885.USE = "HAnimSiteShape";
HAnimSite883.children[1] = Shape885;

Billboard Billboard886 = createNode("Billboard");
Shape Shape887 = createNode("Shape");
Text Text888 = createNode("Text");
Text888.string = new MFString(new java.lang.String["29"]);
FontStyle FontStyle889 = createNode("FontStyle");
FontStyle889.size = 0.035;
Text888.fontStyle = FontStyle889;

Shape887.geometry = Text888;

Billboard886.children = new MFNode();

Billboard886.children[0] = Shape887;

HAnimSite883.children[2] = Billboard886;

HAnimSegment875.children[2] = HAnimSite883;

HAnimSite HAnimSite890 = createNode("HAnimSite");
HAnimSite890.name = "r_thelion";
HAnimSite890.DEF = "hanim_r_thelion";
HAnimSite890.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor891 = createNode("TouchSensor");
TouchSensor891.description = "HAnimSite 31 r_thelion";
HAnimSite890.children = new MFNode();

HAnimSite890.children[0] = TouchSensor891;

Shape Shape892 = createNode("Shape");
Shape892.USE = "HAnimSiteShape";
HAnimSite890.children[1] = Shape892;

Billboard Billboard893 = createNode("Billboard");
Shape Shape894 = createNode("Shape");
Text Text895 = createNode("Text");
Text895.string = new MFString(new java.lang.String["31"]);
FontStyle FontStyle896 = createNode("FontStyle");
FontStyle896.size = 0.035;
Text895.fontStyle = FontStyle896;

Shape894.geometry = Text895;

Billboard893.children = new MFNode();

Billboard893.children[0] = Shape894;

HAnimSite890.children[2] = Billboard893;

HAnimSegment875.children[3] = HAnimSite890;

HAnimJoint874.children = new MFNode();

HAnimJoint874.children[0] = HAnimSegment875;

HAnimJoint HAnimJoint897 = createNode("HAnimJoint");
HAnimJoint897.name = "vt8";
HAnimJoint897.DEF = "hanim_vt8";
HAnimJoint897.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint897.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint897.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment898 = createNode("HAnimSegment");
HAnimSegment898.name = "t8";
HAnimSegment898.DEF = "hanim_t8";
Transform Transform899 = createNode("Transform");
Transform899.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
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
Coordinate904.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet903.coord = Coordinate904;

//from vt8 to vt7 vertices 2
ColorRGBA ColorRGBA905 = createNode("ColorRGBA");
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA";
LineSet903.color = ColorRGBA905;

Shape902.geometry = LineSet903;

HAnimSegment898.children[1] = Shape902;

HAnimJoint897.children = new MFNode();

HAnimJoint897.children[0] = HAnimSegment898;

HAnimJoint HAnimJoint906 = createNode("HAnimJoint");
HAnimJoint906.name = "vt7";
HAnimJoint906.DEF = "hanim_vt7";
HAnimJoint906.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint906.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint906.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment907 = createNode("HAnimSegment");
HAnimSegment907.name = "t7";
HAnimSegment907.DEF = "hanim_t7";
Transform Transform908 = createNode("Transform");
Transform908.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Transform Transform909 = createNode("Transform");
//Empty Transform
Shape Shape910 = createNode("Shape");
Shape910.USE = "HAnimJointShape";
Transform909.child = new undefined();

Transform909.child[0] = Shape910;

Transform908.children = new MFNode();

Transform908.children[0] = Transform909;

HAnimSegment907.children = new MFNode();

HAnimSegment907.children[0] = Transform908;

Shape Shape911 = createNode("Shape");
LineSet LineSet912 = createNode("LineSet");
LineSet912.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate913 = createNode("Coordinate");
Coordinate913.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet912.coord = Coordinate913;

//from vt7 to vt6 vertices 2
ColorRGBA ColorRGBA914 = createNode("ColorRGBA");
ColorRGBA914.USE = "HAnimSegmentLineColorRGBA";
LineSet912.color = ColorRGBA914;

Shape911.geometry = LineSet912;

HAnimSegment907.children[1] = Shape911;

HAnimJoint906.children = new MFNode();

HAnimJoint906.children[0] = HAnimSegment907;

HAnimJoint HAnimJoint915 = createNode("HAnimJoint");
HAnimJoint915.name = "vt6";
HAnimJoint915.DEF = "hanim_vt6";
HAnimJoint915.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint915.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint915.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment916 = createNode("HAnimSegment");
HAnimSegment916.name = "t6";
HAnimSegment916.DEF = "hanim_t6";
Transform Transform917 = createNode("Transform");
Transform917.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform918 = createNode("Transform");
//Empty Transform
Shape Shape919 = createNode("Shape");
Shape919.USE = "HAnimJointShape";
Transform918.child = new undefined();

Transform918.child[0] = Shape919;

Transform917.children = new MFNode();

Transform917.children[0] = Transform918;

HAnimSegment916.children = new MFNode();

HAnimSegment916.children[0] = Transform917;

Shape Shape920 = createNode("Shape");
LineSet LineSet921 = createNode("LineSet");
LineSet921.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate922 = createNode("Coordinate");
Coordinate922.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet921.coord = Coordinate922;

//from vt6 to vt5 vertices 2
ColorRGBA ColorRGBA923 = createNode("ColorRGBA");
ColorRGBA923.USE = "HAnimSegmentLineColorRGBA";
LineSet921.color = ColorRGBA923;

Shape920.geometry = LineSet921;

HAnimSegment916.children[1] = Shape920;

HAnimSite HAnimSite924 = createNode("HAnimSite");
HAnimSite924.name = "l_chest_midsagittal_plane";
HAnimSite924.DEF = "hanim_l_chest_midsagittal_plane";
TouchSensor TouchSensor925 = createNode("TouchSensor");
TouchSensor925.description = "HAnimSite 94 l_chest_midsagittal_plane";
HAnimSite924.children = new MFNode();

HAnimSite924.children[0] = TouchSensor925;

Shape Shape926 = createNode("Shape");
Shape926.USE = "HAnimSiteShape";
HAnimSite924.children[1] = Shape926;

Billboard Billboard927 = createNode("Billboard");
Shape Shape928 = createNode("Shape");
Text Text929 = createNode("Text");
Text929.string = new MFString(new java.lang.String["94"]);
FontStyle FontStyle930 = createNode("FontStyle");
FontStyle930.size = 0.035;
Text929.fontStyle = FontStyle930;

Shape928.geometry = Text929;

Billboard927.children = new MFNode();

Billboard927.children[0] = Shape928;

HAnimSite924.children[2] = Billboard927;

HAnimSegment916.children[2] = HAnimSite924;

HAnimSite HAnimSite931 = createNode("HAnimSite");
HAnimSite931.name = "mesosternale";
HAnimSite931.DEF = "hanim_mesosternale";
TouchSensor TouchSensor932 = createNode("TouchSensor");
TouchSensor932.description = "HAnimSite 88 mesosternale";
HAnimSite931.children = new MFNode();

HAnimSite931.children[0] = TouchSensor932;

Shape Shape933 = createNode("Shape");
Shape933.USE = "HAnimSiteShape";
HAnimSite931.children[1] = Shape933;

Billboard Billboard934 = createNode("Billboard");
Shape Shape935 = createNode("Shape");
Text Text936 = createNode("Text");
Text936.string = new MFString(new java.lang.String["88"]);
FontStyle FontStyle937 = createNode("FontStyle");
FontStyle937.size = 0.035;
Text936.fontStyle = FontStyle937;

Shape935.geometry = Text936;

Billboard934.children = new MFNode();

Billboard934.children[0] = Shape935;

HAnimSite931.children[2] = Billboard934;

HAnimSegment916.children[3] = HAnimSite931;

HAnimSite HAnimSite938 = createNode("HAnimSite");
HAnimSite938.name = "r_chest_midsagittal_plane";
HAnimSite938.DEF = "hanim_r_chest_midsagittal_plane";
TouchSensor TouchSensor939 = createNode("TouchSensor");
TouchSensor939.description = "HAnimSite 95 r_chest_midsagittal_plane";
HAnimSite938.children = new MFNode();

HAnimSite938.children[0] = TouchSensor939;

Shape Shape940 = createNode("Shape");
Shape940.USE = "HAnimSiteShape";
HAnimSite938.children[1] = Shape940;

Billboard Billboard941 = createNode("Billboard");
Shape Shape942 = createNode("Shape");
Text Text943 = createNode("Text");
Text943.string = new MFString(new java.lang.String["95"]);
FontStyle FontStyle944 = createNode("FontStyle");
FontStyle944.size = 0.035;
Text943.fontStyle = FontStyle944;

Shape942.geometry = Text943;

Billboard941.children = new MFNode();

Billboard941.children[0] = Shape942;

HAnimSite938.children[2] = Billboard941;

HAnimSegment916.children[4] = HAnimSite938;

HAnimSite HAnimSite945 = createNode("HAnimSite");
HAnimSite945.name = "rear_center_midsagittal_plane";
HAnimSite945.DEF = "hanim_rear_center_midsagittal_plane";
TouchSensor TouchSensor946 = createNode("TouchSensor");
TouchSensor946.description = "HAnimSite 92 rear_center_midsagittal_plane";
HAnimSite945.children = new MFNode();

HAnimSite945.children[0] = TouchSensor946;

Shape Shape947 = createNode("Shape");
Shape947.USE = "HAnimSiteShape";
HAnimSite945.children[1] = Shape947;

Billboard Billboard948 = createNode("Billboard");
Shape Shape949 = createNode("Shape");
Text Text950 = createNode("Text");
Text950.string = new MFString(new java.lang.String["92"]);
FontStyle FontStyle951 = createNode("FontStyle");
FontStyle951.size = 0.035;
Text950.fontStyle = FontStyle951;

Shape949.geometry = Text950;

Billboard948.children = new MFNode();

Billboard948.children[0] = Shape949;

HAnimSite945.children[2] = Billboard948;

HAnimSegment916.children[5] = HAnimSite945;

HAnimJoint915.children = new MFNode();

HAnimJoint915.children[0] = HAnimSegment916;

HAnimJoint HAnimJoint952 = createNode("HAnimJoint");
HAnimJoint952.name = "vt5";
HAnimJoint952.DEF = "hanim_vt5";
HAnimJoint952.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint952.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint952.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment953 = createNode("HAnimSegment");
HAnimSegment953.name = "t5";
HAnimSegment953.DEF = "hanim_t5";
Transform Transform954 = createNode("Transform");
Transform954.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Transform Transform955 = createNode("Transform");
//Empty Transform
Shape Shape956 = createNode("Shape");
Shape956.USE = "HAnimJointShape";
Transform955.child = new undefined();

Transform955.child[0] = Shape956;

Transform954.children = new MFNode();

Transform954.children[0] = Transform955;

HAnimSegment953.children = new MFNode();

HAnimSegment953.children[0] = Transform954;

Shape Shape957 = createNode("Shape");
LineSet LineSet958 = createNode("LineSet");
LineSet958.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate959 = createNode("Coordinate");
Coordinate959.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet958.coord = Coordinate959;

//from vt5 to vt4 vertices 2
ColorRGBA ColorRGBA960 = createNode("ColorRGBA");
ColorRGBA960.USE = "HAnimSegmentLineColorRGBA";
LineSet958.color = ColorRGBA960;

Shape957.geometry = LineSet958;

HAnimSegment953.children[1] = Shape957;

HAnimSite HAnimSite961 = createNode("HAnimSite");
HAnimSite961.name = "spine_1_middle_back";
HAnimSite961.DEF = "hanim_spine_1_middle_back";
TouchSensor TouchSensor962 = createNode("TouchSensor");
TouchSensor962.description = "HAnimSite 24 spine_1_middle_back";
HAnimSite961.children = new MFNode();

HAnimSite961.children[0] = TouchSensor962;

Shape Shape963 = createNode("Shape");
Shape963.USE = "HAnimSiteShape";
HAnimSite961.children[1] = Shape963;

Billboard Billboard964 = createNode("Billboard");
Shape Shape965 = createNode("Shape");
Text Text966 = createNode("Text");
Text966.string = new MFString(new java.lang.String["24"]);
FontStyle FontStyle967 = createNode("FontStyle");
FontStyle967.size = 0.035;
Text966.fontStyle = FontStyle967;

Shape965.geometry = Text966;

Billboard964.children = new MFNode();

Billboard964.children[0] = Shape965;

HAnimSite961.children[2] = Billboard964;

HAnimSegment953.children[2] = HAnimSite961;

HAnimJoint952.children = new MFNode();

HAnimJoint952.children[0] = HAnimSegment953;

HAnimJoint HAnimJoint968 = createNode("HAnimJoint");
HAnimJoint968.name = "vt4";
HAnimJoint968.DEF = "hanim_vt4";
HAnimJoint968.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint968.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint968.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment969 = createNode("HAnimSegment");
HAnimSegment969.name = "t4";
HAnimSegment969.DEF = "hanim_t4";
Transform Transform970 = createNode("Transform");
Transform970.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Transform Transform971 = createNode("Transform");
//Empty Transform
Shape Shape972 = createNode("Shape");
Shape972.USE = "HAnimJointShape";
Transform971.child = new undefined();

Transform971.child[0] = Shape972;

Transform970.children = new MFNode();

Transform970.children[0] = Transform971;

HAnimSegment969.children = new MFNode();

HAnimSegment969.children[0] = Transform970;

Shape Shape973 = createNode("Shape");
LineSet LineSet974 = createNode("LineSet");
LineSet974.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate975 = createNode("Coordinate");
Coordinate975.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet974.coord = Coordinate975;

//from vt4 to vt3 vertices 2
ColorRGBA ColorRGBA976 = createNode("ColorRGBA");
ColorRGBA976.USE = "HAnimSegmentLineColorRGBA";
LineSet974.color = ColorRGBA976;

Shape973.geometry = LineSet974;

HAnimSegment969.children[1] = Shape973;

HAnimJoint968.children = new MFNode();

HAnimJoint968.children[0] = HAnimSegment969;

HAnimJoint HAnimJoint977 = createNode("HAnimJoint");
HAnimJoint977.name = "vt3";
HAnimJoint977.DEF = "hanim_vt3";
HAnimJoint977.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint977.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint977.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment978 = createNode("HAnimSegment");
HAnimSegment978.name = "t3";
HAnimSegment978.DEF = "hanim_t3";
Transform Transform979 = createNode("Transform");
Transform979.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
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
Coordinate984.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet983.coord = Coordinate984;

//from vt3 to vt2 vertices 2
ColorRGBA ColorRGBA985 = createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA";
LineSet983.color = ColorRGBA985;

Shape982.geometry = LineSet983;

HAnimSegment978.children[1] = Shape982;

HAnimJoint977.children = new MFNode();

HAnimJoint977.children[0] = HAnimSegment978;

HAnimJoint HAnimJoint986 = createNode("HAnimJoint");
HAnimJoint986.name = "vt2";
HAnimJoint986.DEF = "hanim_vt2";
HAnimJoint986.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint986.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint986.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment987 = createNode("HAnimSegment");
HAnimSegment987.name = "t2";
HAnimSegment987.DEF = "hanim_t2";
Transform Transform988 = createNode("Transform");
Transform988.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
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
Coordinate993.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet992.coord = Coordinate993;

//from vt2 to vt1 vertices 2
ColorRGBA ColorRGBA994 = createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
LineSet992.color = ColorRGBA994;

Shape991.geometry = LineSet992;

HAnimSegment987.children[1] = Shape991;

HAnimJoint986.children = new MFNode();

HAnimJoint986.children[0] = HAnimSegment987;

HAnimJoint HAnimJoint995 = createNode("HAnimJoint");
HAnimJoint995.name = "vt1";
HAnimJoint995.DEF = "hanim_vt1";
HAnimJoint995.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint995.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint995.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment996 = createNode("HAnimSegment");
HAnimSegment996.name = "t1";
HAnimSegment996.DEF = "hanim_t1";
Transform Transform997 = createNode("Transform");
Transform997.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Transform Transform998 = createNode("Transform");
//Empty Transform
Shape Shape999 = createNode("Shape");
Shape999.USE = "HAnimJointShape";
Transform998.child = new undefined();

Transform998.child[0] = Shape999;

Transform997.children = new MFNode();

Transform997.children[0] = Transform998;

HAnimSegment996.children = new MFNode();

HAnimSegment996.children[0] = Transform997;

Shape Shape1000 = createNode("Shape");
LineSet LineSet1001 = createNode("LineSet");
LineSet1001.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1002 = createNode("Coordinate");
Coordinate1002.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet1001.coord = Coordinate1002;

//from vt1 to vc7 vertices 2
ColorRGBA ColorRGBA1003 = createNode("ColorRGBA");
ColorRGBA1003.USE = "HAnimSegmentLineColorRGBA";
LineSet1001.color = ColorRGBA1003;

Shape1000.geometry = LineSet1001;

HAnimSegment996.children[1] = Shape1000;

HAnimSite HAnimSite1004 = createNode("HAnimSite");
HAnimSite1004.name = "cervicale";
HAnimSite1004.DEF = "hanim_cervicale";
HAnimSite1004.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor1005 = createNode("TouchSensor");
TouchSensor1005.description = "HAnimSite 10 cervicale";
HAnimSite1004.children = new MFNode();

HAnimSite1004.children[0] = TouchSensor1005;

Shape Shape1006 = createNode("Shape");
Shape1006.USE = "HAnimSiteShape";
HAnimSite1004.children[1] = Shape1006;

Billboard Billboard1007 = createNode("Billboard");
Shape Shape1008 = createNode("Shape");
Text Text1009 = createNode("Text");
Text1009.string = new MFString(new java.lang.String["10"]);
FontStyle FontStyle1010 = createNode("FontStyle");
FontStyle1010.size = 0.035;
Text1009.fontStyle = FontStyle1010;

Shape1008.geometry = Text1009;

Billboard1007.children = new MFNode();

Billboard1007.children[0] = Shape1008;

HAnimSite1004.children[2] = Billboard1007;

HAnimSegment996.children[2] = HAnimSite1004;

HAnimSite HAnimSite1011 = createNode("HAnimSite");
HAnimSite1011.name = "suprasternale";
HAnimSite1011.DEF = "hanim_suprasternale";
HAnimSite1011.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor1012 = createNode("TouchSensor");
TouchSensor1012.description = "HAnimSite 12 suprasternale";
HAnimSite1011.children = new MFNode();

HAnimSite1011.children[0] = TouchSensor1012;

Shape Shape1013 = createNode("Shape");
Shape1013.USE = "HAnimSiteShape";
HAnimSite1011.children[1] = Shape1013;

Billboard Billboard1014 = createNode("Billboard");
Shape Shape1015 = createNode("Shape");
Text Text1016 = createNode("Text");
Text1016.string = new MFString(new java.lang.String["12"]);
FontStyle FontStyle1017 = createNode("FontStyle");
FontStyle1017.size = 0.035;
Text1016.fontStyle = FontStyle1017;

Shape1015.geometry = Text1016;

Billboard1014.children = new MFNode();

Billboard1014.children[0] = Shape1015;

HAnimSite1011.children[2] = Billboard1014;

HAnimSegment996.children[3] = HAnimSite1011;

Shape Shape1018 = createNode("Shape");
LineSet LineSet1019 = createNode("LineSet");
LineSet1019.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1020 = createNode("Coordinate");
Coordinate1020.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet1019.coord = Coordinate1020;

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA ColorRGBA1021 = createNode("ColorRGBA");
ColorRGBA1021.USE = "HAnimSegmentLineColorRGBA";
LineSet1019.color = ColorRGBA1021;

Shape1018.geometry = LineSet1019;

HAnimSegment996.children[4] = Shape1018;

Shape Shape1022 = createNode("Shape");
LineSet LineSet1023 = createNode("LineSet");
LineSet1023.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1024 = createNode("Coordinate");
Coordinate1024.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet1023.coord = Coordinate1024;

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA ColorRGBA1025 = createNode("ColorRGBA");
ColorRGBA1025.USE = "HAnimSegmentLineColorRGBA";
LineSet1023.color = ColorRGBA1025;

Shape1022.geometry = LineSet1023;

HAnimSegment996.children[5] = Shape1022;

HAnimJoint995.children = new MFNode();

HAnimJoint995.children[0] = HAnimSegment996;

HAnimJoint HAnimJoint1026 = createNode("HAnimJoint");
HAnimJoint1026.name = "vc7";
HAnimJoint1026.DEF = "hanim_vc7";
HAnimJoint1026.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint1026.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1026.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1027 = createNode("HAnimSegment");
HAnimSegment1027.name = "c7";
HAnimSegment1027.DEF = "hanim_c7";
Transform Transform1028 = createNode("Transform");
Transform1028.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Transform Transform1029 = createNode("Transform");
//Empty Transform
Shape Shape1030 = createNode("Shape");
Shape1030.USE = "HAnimJointShape";
Transform1029.child = new undefined();

Transform1029.child[0] = Shape1030;

Transform1028.children = new MFNode();

Transform1028.children[0] = Transform1029;

HAnimSegment1027.children = new MFNode();

HAnimSegment1027.children[0] = Transform1028;

Shape Shape1031 = createNode("Shape");
LineSet LineSet1032 = createNode("LineSet");
LineSet1032.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1033 = createNode("Coordinate");
Coordinate1033.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet1032.coord = Coordinate1033;

//from vc7 to vc6 vertices 2
ColorRGBA ColorRGBA1034 = createNode("ColorRGBA");
ColorRGBA1034.USE = "HAnimSegmentLineColorRGBA";
LineSet1032.color = ColorRGBA1034;

Shape1031.geometry = LineSet1032;

HAnimSegment1027.children[1] = Shape1031;

HAnimSite HAnimSite1035 = createNode("HAnimSite");
HAnimSite1035.name = "l_neck_base";
HAnimSite1035.DEF = "hanim_l_neck_base";
HAnimSite1035.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor1036 = createNode("TouchSensor");
TouchSensor1036.description = "HAnimSite 82 l_neck_base";
HAnimSite1035.children = new MFNode();

HAnimSite1035.children[0] = TouchSensor1036;

Shape Shape1037 = createNode("Shape");
Shape1037.USE = "HAnimSiteShape";
HAnimSite1035.children[1] = Shape1037;

Billboard Billboard1038 = createNode("Billboard");
Shape Shape1039 = createNode("Shape");
Text Text1040 = createNode("Text");
Text1040.string = new MFString(new java.lang.String["82"]);
FontStyle FontStyle1041 = createNode("FontStyle");
FontStyle1041.size = 0.035;
Text1040.fontStyle = FontStyle1041;

Shape1039.geometry = Text1040;

Billboard1038.children = new MFNode();

Billboard1038.children[0] = Shape1039;

HAnimSite1035.children[2] = Billboard1038;

HAnimSegment1027.children[2] = HAnimSite1035;

HAnimSite HAnimSite1042 = createNode("HAnimSite");
HAnimSite1042.name = "r_neck_base";
HAnimSite1042.DEF = "hanim_r_neck_base";
HAnimSite1042.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor1043 = createNode("TouchSensor");
TouchSensor1043.description = "HAnimSite 83 r_neck_base";
HAnimSite1042.children = new MFNode();

HAnimSite1042.children[0] = TouchSensor1043;

Shape Shape1044 = createNode("Shape");
Shape1044.USE = "HAnimSiteShape";
HAnimSite1042.children[1] = Shape1044;

Billboard Billboard1045 = createNode("Billboard");
Shape Shape1046 = createNode("Shape");
Text Text1047 = createNode("Text");
Text1047.string = new MFString(new java.lang.String["83"]);
FontStyle FontStyle1048 = createNode("FontStyle");
FontStyle1048.size = 0.035;
Text1047.fontStyle = FontStyle1048;

Shape1046.geometry = Text1047;

Billboard1045.children = new MFNode();

Billboard1045.children[0] = Shape1046;

HAnimSite1042.children[2] = Billboard1045;

HAnimSegment1027.children[3] = HAnimSite1042;

HAnimJoint1026.children = new MFNode();

HAnimJoint1026.children[0] = HAnimSegment1027;

HAnimJoint HAnimJoint1049 = createNode("HAnimJoint");
HAnimJoint1049.name = "vc6";
HAnimJoint1049.DEF = "hanim_vc6";
HAnimJoint1049.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint1049.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1049.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1050 = createNode("HAnimSegment");
HAnimSegment1050.name = "c6";
HAnimSegment1050.DEF = "hanim_c6";
Transform Transform1051 = createNode("Transform");
Transform1051.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Transform Transform1052 = createNode("Transform");
//Empty Transform
Shape Shape1053 = createNode("Shape");
Shape1053.USE = "HAnimJointShape";
Transform1052.child = new undefined();

Transform1052.child[0] = Shape1053;

Transform1051.children = new MFNode();

Transform1051.children[0] = Transform1052;

HAnimSegment1050.children = new MFNode();

HAnimSegment1050.children[0] = Transform1051;

Shape Shape1054 = createNode("Shape");
LineSet LineSet1055 = createNode("LineSet");
LineSet1055.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1056 = createNode("Coordinate");
Coordinate1056.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet1055.coord = Coordinate1056;

//from vc6 to vc5 vertices 2
ColorRGBA ColorRGBA1057 = createNode("ColorRGBA");
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA";
LineSet1055.color = ColorRGBA1057;

Shape1054.geometry = LineSet1055;

HAnimSegment1050.children[1] = Shape1054;

HAnimJoint1049.children = new MFNode();

HAnimJoint1049.children[0] = HAnimSegment1050;

HAnimJoint HAnimJoint1058 = createNode("HAnimJoint");
HAnimJoint1058.name = "vc5";
HAnimJoint1058.DEF = "hanim_vc5";
HAnimJoint1058.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint1058.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1058.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1059 = createNode("HAnimSegment");
HAnimSegment1059.name = "c5";
HAnimSegment1059.DEF = "hanim_c5";
Transform Transform1060 = createNode("Transform");
Transform1060.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Transform Transform1061 = createNode("Transform");
//Empty Transform
Shape Shape1062 = createNode("Shape");
Shape1062.USE = "HAnimJointShape";
Transform1061.child = new undefined();

Transform1061.child[0] = Shape1062;

Transform1060.children = new MFNode();

Transform1060.children[0] = Transform1061;

HAnimSegment1059.children = new MFNode();

HAnimSegment1059.children[0] = Transform1060;

Shape Shape1063 = createNode("Shape");
LineSet LineSet1064 = createNode("LineSet");
LineSet1064.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1065 = createNode("Coordinate");
Coordinate1065.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet1064.coord = Coordinate1065;

//from vc5 to vc4 vertices 2
ColorRGBA ColorRGBA1066 = createNode("ColorRGBA");
ColorRGBA1066.USE = "HAnimSegmentLineColorRGBA";
LineSet1064.color = ColorRGBA1066;

Shape1063.geometry = LineSet1064;

HAnimSegment1059.children[1] = Shape1063;

HAnimJoint1058.children = new MFNode();

HAnimJoint1058.children[0] = HAnimSegment1059;

HAnimJoint HAnimJoint1067 = createNode("HAnimJoint");
HAnimJoint1067.name = "vc4";
HAnimJoint1067.DEF = "hanim_vc4";
HAnimJoint1067.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint1067.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1067.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1068 = createNode("HAnimSegment");
HAnimSegment1068.name = "c4";
HAnimSegment1068.DEF = "hanim_c4";
Transform Transform1069 = createNode("Transform");
Transform1069.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Transform Transform1070 = createNode("Transform");
//Empty Transform
Shape Shape1071 = createNode("Shape");
Shape1071.USE = "HAnimJointShape";
Transform1070.child = new undefined();

Transform1070.child[0] = Shape1071;

Transform1069.children = new MFNode();

Transform1069.children[0] = Transform1070;

HAnimSegment1068.children = new MFNode();

HAnimSegment1068.children[0] = Transform1069;

Shape Shape1072 = createNode("Shape");
LineSet LineSet1073 = createNode("LineSet");
LineSet1073.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1074 = createNode("Coordinate");
Coordinate1074.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet1073.coord = Coordinate1074;

//from vc4 to vc3 vertices 2
ColorRGBA ColorRGBA1075 = createNode("ColorRGBA");
ColorRGBA1075.USE = "HAnimSegmentLineColorRGBA";
LineSet1073.color = ColorRGBA1075;

Shape1072.geometry = LineSet1073;

HAnimSegment1068.children[1] = Shape1072;

HAnimJoint1067.children = new MFNode();

HAnimJoint1067.children[0] = HAnimSegment1068;

HAnimJoint HAnimJoint1076 = createNode("HAnimJoint");
HAnimJoint1076.name = "vc3";
HAnimJoint1076.DEF = "hanim_vc3";
HAnimJoint1076.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint1076.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1076.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1077 = createNode("HAnimSegment");
HAnimSegment1077.name = "c3";
HAnimSegment1077.DEF = "hanim_c3";
Transform Transform1078 = createNode("Transform");
Transform1078.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Transform Transform1079 = createNode("Transform");
//Empty Transform
Shape Shape1080 = createNode("Shape");
Shape1080.USE = "HAnimJointShape";
Transform1079.child = new undefined();

Transform1079.child[0] = Shape1080;

Transform1078.children = new MFNode();

Transform1078.children[0] = Transform1079;

HAnimSegment1077.children = new MFNode();

HAnimSegment1077.children[0] = Transform1078;

Shape Shape1081 = createNode("Shape");
LineSet LineSet1082 = createNode("LineSet");
LineSet1082.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1083 = createNode("Coordinate");
Coordinate1083.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet1082.coord = Coordinate1083;

//from vc3 to vc2 vertices 2
ColorRGBA ColorRGBA1084 = createNode("ColorRGBA");
ColorRGBA1084.USE = "HAnimSegmentLineColorRGBA";
LineSet1082.color = ColorRGBA1084;

Shape1081.geometry = LineSet1082;

HAnimSegment1077.children[1] = Shape1081;

HAnimJoint1076.children = new MFNode();

HAnimJoint1076.children[0] = HAnimSegment1077;

HAnimJoint HAnimJoint1085 = createNode("HAnimJoint");
HAnimJoint1085.name = "vc2";
HAnimJoint1085.DEF = "hanim_vc2";
HAnimJoint1085.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint1085.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1085.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1086 = createNode("HAnimSegment");
HAnimSegment1086.name = "c2";
HAnimSegment1086.DEF = "hanim_c2";
Transform Transform1087 = createNode("Transform");
Transform1087.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Transform Transform1088 = createNode("Transform");
//Empty Transform
Shape Shape1089 = createNode("Shape");
Shape1089.USE = "HAnimJointShape";
Transform1088.child = new undefined();

Transform1088.child[0] = Shape1089;

Transform1087.children = new MFNode();

Transform1087.children[0] = Transform1088;

HAnimSegment1086.children = new MFNode();

HAnimSegment1086.children[0] = Transform1087;

Shape Shape1090 = createNode("Shape");
LineSet LineSet1091 = createNode("LineSet");
LineSet1091.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1092 = createNode("Coordinate");
Coordinate1092.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet1091.coord = Coordinate1092;

//from vc2 to vc1 vertices 2
ColorRGBA ColorRGBA1093 = createNode("ColorRGBA");
ColorRGBA1093.USE = "HAnimSegmentLineColorRGBA";
LineSet1091.color = ColorRGBA1093;

Shape1090.geometry = LineSet1091;

HAnimSegment1086.children[1] = Shape1090;

HAnimSite HAnimSite1094 = createNode("HAnimSite");
HAnimSite1094.name = "adams_apple";
HAnimSite1094.DEF = "hanim_adams_apple";
TouchSensor TouchSensor1095 = createNode("TouchSensor");
TouchSensor1095.description = "HAnimSite 11 adams_apple";
HAnimSite1094.children = new MFNode();

HAnimSite1094.children[0] = TouchSensor1095;

Shape Shape1096 = createNode("Shape");
Shape1096.USE = "HAnimSiteShape";
HAnimSite1094.children[1] = Shape1096;

Billboard Billboard1097 = createNode("Billboard");
Shape Shape1098 = createNode("Shape");
Text Text1099 = createNode("Text");
Text1099.string = new MFString(new java.lang.String["11"]);
FontStyle FontStyle1100 = createNode("FontStyle");
FontStyle1100.size = 0.035;
Text1099.fontStyle = FontStyle1100;

Shape1098.geometry = Text1099;

Billboard1097.children = new MFNode();

Billboard1097.children[0] = Shape1098;

HAnimSite1094.children[2] = Billboard1097;

HAnimSegment1086.children[2] = HAnimSite1094;

HAnimJoint1085.children = new MFNode();

HAnimJoint1085.children[0] = HAnimSegment1086;

HAnimJoint HAnimJoint1101 = createNode("HAnimJoint");
HAnimJoint1101.name = "vc1";
HAnimJoint1101.DEF = "hanim_vc1";
HAnimJoint1101.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint1101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1101.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1102 = createNode("HAnimSegment");
HAnimSegment1102.name = "c1";
HAnimSegment1102.DEF = "hanim_c1";
Transform Transform1103 = createNode("Transform");
Transform1103.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
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
Coordinate1108.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet1107.coord = Coordinate1108;

//from vc1 to skullbase vertices 2
ColorRGBA ColorRGBA1109 = createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSegmentLineColorRGBA";
LineSet1107.color = ColorRGBA1109;

Shape1106.geometry = LineSet1107;

HAnimSegment1102.children[1] = Shape1106;

HAnimJoint1101.children = new MFNode();

HAnimJoint1101.children[0] = HAnimSegment1102;

HAnimJoint HAnimJoint1110 = createNode("HAnimJoint");
HAnimJoint1110.name = "skullbase";
HAnimJoint1110.DEF = "hanim_skullbase";
HAnimJoint1110.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint1110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1111 = createNode("HAnimSegment");
HAnimSegment1111.name = "skull";
HAnimSegment1111.DEF = "hanim_skull";
Transform Transform1112 = createNode("Transform");
Transform1112.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Transform Transform1113 = createNode("Transform");
//Empty Transform
Shape Shape1114 = createNode("Shape");
Shape1114.USE = "HAnimJointShape";
Transform1113.child = new undefined();

Transform1113.child[0] = Shape1114;

Transform1112.children = new MFNode();

Transform1112.children[0] = Transform1113;

HAnimSegment1111.children = new MFNode();

HAnimSegment1111.children[0] = Transform1112;

Shape Shape1115 = createNode("Shape");
LineSet LineSet1116 = createNode("LineSet");
LineSet1116.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1117 = createNode("Coordinate");
Coordinate1117.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
LineSet1116.coord = Coordinate1117;

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA ColorRGBA1118 = createNode("ColorRGBA");
ColorRGBA1118.USE = "HAnimSegmentLineColorRGBA";
LineSet1116.color = ColorRGBA1118;

Shape1115.geometry = LineSet1116;

HAnimSegment1111.children[1] = Shape1115;

HAnimSite HAnimSite1119 = createNode("HAnimSite");
HAnimSite1119.name = "glabella";
HAnimSite1119.DEF = "hanim_glabella";
TouchSensor TouchSensor1120 = createNode("TouchSensor");
TouchSensor1120.description = "HAnimSite 1 glabella";
HAnimSite1119.children = new MFNode();

HAnimSite1119.children[0] = TouchSensor1120;

Shape Shape1121 = createNode("Shape");
Shape1121.USE = "HAnimSiteShape";
HAnimSite1119.children[1] = Shape1121;

Billboard Billboard1122 = createNode("Billboard");
Shape Shape1123 = createNode("Shape");
Text Text1124 = createNode("Text");
Text1124.string = new MFString(new java.lang.String["1"]);
FontStyle FontStyle1125 = createNode("FontStyle");
FontStyle1125.size = 0.035;
Text1124.fontStyle = FontStyle1125;

Shape1123.geometry = Text1124;

Billboard1122.children = new MFNode();

Billboard1122.children[0] = Shape1123;

HAnimSite1119.children[2] = Billboard1122;

HAnimSegment1111.children[2] = HAnimSite1119;

HAnimSite HAnimSite1126 = createNode("HAnimSite");
HAnimSite1126.name = "l_ectocanthus";
HAnimSite1126.DEF = "hanim_l_ectocanthus";
TouchSensor TouchSensor1127 = createNode("TouchSensor");
TouchSensor1127.description = "HAnimSite 85 l_ectocanthus";
HAnimSite1126.children = new MFNode();

HAnimSite1126.children[0] = TouchSensor1127;

Shape Shape1128 = createNode("Shape");
Shape1128.USE = "HAnimSiteShape";
HAnimSite1126.children[1] = Shape1128;

Billboard Billboard1129 = createNode("Billboard");
Shape Shape1130 = createNode("Shape");
Text Text1131 = createNode("Text");
Text1131.string = new MFString(new java.lang.String["85"]);
FontStyle FontStyle1132 = createNode("FontStyle");
FontStyle1132.size = 0.035;
Text1131.fontStyle = FontStyle1132;

Shape1130.geometry = Text1131;

Billboard1129.children = new MFNode();

Billboard1129.children[0] = Shape1130;

HAnimSite1126.children[2] = Billboard1129;

HAnimSegment1111.children[3] = HAnimSite1126;

HAnimSite HAnimSite1133 = createNode("HAnimSite");
HAnimSite1133.name = "l_infraorbitale";
HAnimSite1133.DEF = "hanim_l_infraorbitale";
HAnimSite1133.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor1134 = createNode("TouchSensor");
TouchSensor1134.description = "HAnimSite 3 l_infraorbitale";
HAnimSite1133.children = new MFNode();

HAnimSite1133.children[0] = TouchSensor1134;

Shape Shape1135 = createNode("Shape");
Shape1135.USE = "HAnimSiteShape";
HAnimSite1133.children[1] = Shape1135;

Billboard Billboard1136 = createNode("Billboard");
Shape Shape1137 = createNode("Shape");
Text Text1138 = createNode("Text");
Text1138.string = new MFString(new java.lang.String["3"]);
FontStyle FontStyle1139 = createNode("FontStyle");
FontStyle1139.size = 0.035;
Text1138.fontStyle = FontStyle1139;

Shape1137.geometry = Text1138;

Billboard1136.children = new MFNode();

Billboard1136.children[0] = Shape1137;

HAnimSite1133.children[2] = Billboard1136;

HAnimSegment1111.children[4] = HAnimSite1133;

HAnimSite HAnimSite1140 = createNode("HAnimSite");
HAnimSite1140.name = "l_tragion";
HAnimSite1140.DEF = "hanim_l_tragion";
HAnimSite1140.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor1141 = createNode("TouchSensor");
TouchSensor1141.description = "HAnimSite 4 l_tragion";
HAnimSite1140.children = new MFNode();

HAnimSite1140.children[0] = TouchSensor1141;

Shape Shape1142 = createNode("Shape");
Shape1142.USE = "HAnimSiteShape";
HAnimSite1140.children[1] = Shape1142;

Billboard Billboard1143 = createNode("Billboard");
Shape Shape1144 = createNode("Shape");
Text Text1145 = createNode("Text");
Text1145.string = new MFString(new java.lang.String["4"]);
FontStyle FontStyle1146 = createNode("FontStyle");
FontStyle1146.size = 0.035;
Text1145.fontStyle = FontStyle1146;

Shape1144.geometry = Text1145;

Billboard1143.children = new MFNode();

Billboard1143.children[0] = Shape1144;

HAnimSite1140.children[2] = Billboard1143;

HAnimSegment1111.children[5] = HAnimSite1140;

HAnimSite HAnimSite1147 = createNode("HAnimSite");
HAnimSite1147.name = "nuchale";
HAnimSite1147.DEF = "hanim_nuchale";
HAnimSite1147.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor1148 = createNode("TouchSensor");
TouchSensor1148.description = "HAnimSite 81 nuchale";
HAnimSite1147.children = new MFNode();

HAnimSite1147.children[0] = TouchSensor1148;

Shape Shape1149 = createNode("Shape");
Shape1149.USE = "HAnimSiteShape";
HAnimSite1147.children[1] = Shape1149;

Billboard Billboard1150 = createNode("Billboard");
Shape Shape1151 = createNode("Shape");
Text Text1152 = createNode("Text");
Text1152.string = new MFString(new java.lang.String["81"]);
FontStyle FontStyle1153 = createNode("FontStyle");
FontStyle1153.size = 0.035;
Text1152.fontStyle = FontStyle1153;

Shape1151.geometry = Text1152;

Billboard1150.children = new MFNode();

Billboard1150.children[0] = Shape1151;

HAnimSite1147.children[2] = Billboard1150;

HAnimSegment1111.children[6] = HAnimSite1147;

HAnimSite HAnimSite1154 = createNode("HAnimSite");
HAnimSite1154.name = "opisthocranion";
HAnimSite1154.DEF = "hanim_opisthocranion";
TouchSensor TouchSensor1155 = createNode("TouchSensor");
TouchSensor1155.description = "HAnimSite 89 opisthocranion";
HAnimSite1154.children = new MFNode();

HAnimSite1154.children[0] = TouchSensor1155;

Shape Shape1156 = createNode("Shape");
Shape1156.USE = "HAnimSiteShape";
HAnimSite1154.children[1] = Shape1156;

Billboard Billboard1157 = createNode("Billboard");
Shape Shape1158 = createNode("Shape");
Text Text1159 = createNode("Text");
Text1159.string = new MFString(new java.lang.String["89"]);
FontStyle FontStyle1160 = createNode("FontStyle");
FontStyle1160.size = 0.035;
Text1159.fontStyle = FontStyle1160;

Shape1158.geometry = Text1159;

Billboard1157.children = new MFNode();

Billboard1157.children[0] = Shape1158;

HAnimSite1154.children[2] = Billboard1157;

HAnimSegment1111.children[7] = HAnimSite1154;

HAnimSite HAnimSite1161 = createNode("HAnimSite");
HAnimSite1161.name = "r_ectocanthus";
HAnimSite1161.DEF = "hanim_r_ectocanthus";
TouchSensor TouchSensor1162 = createNode("TouchSensor");
TouchSensor1162.description = "HAnimSite 86 r_ectocanthus";
HAnimSite1161.children = new MFNode();

HAnimSite1161.children[0] = TouchSensor1162;

Shape Shape1163 = createNode("Shape");
Shape1163.USE = "HAnimSiteShape";
HAnimSite1161.children[1] = Shape1163;

Billboard Billboard1164 = createNode("Billboard");
Shape Shape1165 = createNode("Shape");
Text Text1166 = createNode("Text");
Text1166.string = new MFString(new java.lang.String["86"]);
FontStyle FontStyle1167 = createNode("FontStyle");
FontStyle1167.size = 0.035;
Text1166.fontStyle = FontStyle1167;

Shape1165.geometry = Text1166;

Billboard1164.children = new MFNode();

Billboard1164.children[0] = Shape1165;

HAnimSite1161.children[2] = Billboard1164;

HAnimSegment1111.children[8] = HAnimSite1161;

HAnimSite HAnimSite1168 = createNode("HAnimSite");
HAnimSite1168.name = "r_infraorbitale";
HAnimSite1168.DEF = "hanim_r_infraorbitale";
HAnimSite1168.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor1169 = createNode("TouchSensor");
TouchSensor1169.description = "HAnimSite 6 r_infraorbitale";
HAnimSite1168.children = new MFNode();

HAnimSite1168.children[0] = TouchSensor1169;

Shape Shape1170 = createNode("Shape");
Shape1170.USE = "HAnimSiteShape";
HAnimSite1168.children[1] = Shape1170;

Billboard Billboard1171 = createNode("Billboard");
Shape Shape1172 = createNode("Shape");
Text Text1173 = createNode("Text");
Text1173.string = new MFString(new java.lang.String["6"]);
FontStyle FontStyle1174 = createNode("FontStyle");
FontStyle1174.size = 0.035;
Text1173.fontStyle = FontStyle1174;

Shape1172.geometry = Text1173;

Billboard1171.children = new MFNode();

Billboard1171.children[0] = Shape1172;

HAnimSite1168.children[2] = Billboard1171;

HAnimSegment1111.children[9] = HAnimSite1168;

HAnimSite HAnimSite1175 = createNode("HAnimSite");
HAnimSite1175.name = "r_tragion";
HAnimSite1175.DEF = "hanim_r_tragion";
HAnimSite1175.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor1176 = createNode("TouchSensor");
TouchSensor1176.description = "HAnimSite 7 r_tragion";
HAnimSite1175.children = new MFNode();

HAnimSite1175.children[0] = TouchSensor1176;

Shape Shape1177 = createNode("Shape");
Shape1177.USE = "HAnimSiteShape";
HAnimSite1175.children[1] = Shape1177;

Billboard Billboard1178 = createNode("Billboard");
Shape Shape1179 = createNode("Shape");
Text Text1180 = createNode("Text");
Text1180.string = new MFString(new java.lang.String["7"]);
FontStyle FontStyle1181 = createNode("FontStyle");
FontStyle1181.size = 0.035;
Text1180.fontStyle = FontStyle1181;

Shape1179.geometry = Text1180;

Billboard1178.children = new MFNode();

Billboard1178.children[0] = Shape1179;

HAnimSite1175.children[2] = Billboard1178;

HAnimSegment1111.children[10] = HAnimSite1175;

HAnimSite HAnimSite1182 = createNode("HAnimSite");
HAnimSite1182.name = "sellion";
HAnimSite1182.DEF = "hanim_sellion";
HAnimSite1182.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor1183 = createNode("TouchSensor");
TouchSensor1183.description = "HAnimSite 2 sellion";
HAnimSite1182.children = new MFNode();

HAnimSite1182.children[0] = TouchSensor1183;

Shape Shape1184 = createNode("Shape");
Shape1184.USE = "HAnimSiteShape";
HAnimSite1182.children[1] = Shape1184;

Billboard Billboard1185 = createNode("Billboard");
Shape Shape1186 = createNode("Shape");
Text Text1187 = createNode("Text");
Text1187.string = new MFString(new java.lang.String["2"]);
FontStyle FontStyle1188 = createNode("FontStyle");
FontStyle1188.size = 0.035;
Text1187.fontStyle = FontStyle1188;

Shape1186.geometry = Text1187;

Billboard1185.children = new MFNode();

Billboard1185.children[0] = Shape1186;

HAnimSite1182.children[2] = Billboard1185;

HAnimSegment1111.children[11] = HAnimSite1182;

HAnimSite HAnimSite1189 = createNode("HAnimSite");
HAnimSite1189.name = "skull_vertex";
HAnimSite1189.DEF = "hanim_skull_vertex";
HAnimSite1189.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor1190 = createNode("TouchSensor");
TouchSensor1190.description = "HAnimSite 0 skull_vertex";
HAnimSite1189.children = new MFNode();

HAnimSite1189.children[0] = TouchSensor1190;

Shape Shape1191 = createNode("Shape");
Shape1191.USE = "HAnimSiteShape";
HAnimSite1189.children[1] = Shape1191;

Billboard Billboard1192 = createNode("Billboard");
Shape Shape1193 = createNode("Shape");
Text Text1194 = createNode("Text");
Text1194.string = new MFString(new java.lang.String["0"]);
FontStyle FontStyle1195 = createNode("FontStyle");
FontStyle1195.size = 0.035;
Text1194.fontStyle = FontStyle1195;

Shape1193.geometry = Text1194;

Billboard1192.children = new MFNode();

Billboard1192.children[0] = Shape1193;

HAnimSite1189.children[2] = Billboard1192;

HAnimSegment1111.children[12] = HAnimSite1189;

Shape Shape1196 = createNode("Shape");
LineSet LineSet1197 = createNode("LineSet");
LineSet1197.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1198 = createNode("Coordinate");
Coordinate1198.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
LineSet1197.coord = Coordinate1198;

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA ColorRGBA1199 = createNode("ColorRGBA");
ColorRGBA1199.USE = "HAnimSegmentLineColorRGBA";
LineSet1197.color = ColorRGBA1199;

Shape1196.geometry = LineSet1197;

HAnimSegment1111.children[13] = Shape1196;

Shape Shape1200 = createNode("Shape");
LineSet LineSet1201 = createNode("LineSet");
LineSet1201.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1202 = createNode("Coordinate");
Coordinate1202.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
LineSet1201.coord = Coordinate1202;

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA ColorRGBA1203 = createNode("ColorRGBA");
ColorRGBA1203.USE = "HAnimSegmentLineColorRGBA";
LineSet1201.color = ColorRGBA1203;

Shape1200.geometry = LineSet1201;

HAnimSegment1111.children[14] = Shape1200;

Shape Shape1204 = createNode("Shape");
LineSet LineSet1205 = createNode("LineSet");
LineSet1205.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1206 = createNode("Coordinate");
Coordinate1206.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
LineSet1205.coord = Coordinate1206;

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA ColorRGBA1207 = createNode("ColorRGBA");
ColorRGBA1207.USE = "HAnimSegmentLineColorRGBA";
LineSet1205.color = ColorRGBA1207;

Shape1204.geometry = LineSet1205;

HAnimSegment1111.children[15] = Shape1204;

Shape Shape1208 = createNode("Shape");
LineSet LineSet1209 = createNode("LineSet");
LineSet1209.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1210 = createNode("Coordinate");
Coordinate1210.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
LineSet1209.coord = Coordinate1210;

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA ColorRGBA1211 = createNode("ColorRGBA");
ColorRGBA1211.USE = "HAnimSegmentLineColorRGBA";
LineSet1209.color = ColorRGBA1211;

Shape1208.geometry = LineSet1209;

HAnimSegment1111.children[16] = Shape1208;

Shape Shape1212 = createNode("Shape");
LineSet LineSet1213 = createNode("LineSet");
LineSet1213.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1214 = createNode("Coordinate");
Coordinate1214.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
LineSet1213.coord = Coordinate1214;

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA ColorRGBA1215 = createNode("ColorRGBA");
ColorRGBA1215.USE = "HAnimSegmentLineColorRGBA";
LineSet1213.color = ColorRGBA1215;

Shape1212.geometry = LineSet1213;

HAnimSegment1111.children[17] = Shape1212;

Shape Shape1216 = createNode("Shape");
LineSet LineSet1217 = createNode("LineSet");
LineSet1217.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1218 = createNode("Coordinate");
Coordinate1218.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
LineSet1217.coord = Coordinate1218;

//from skullbase to temporomandibular vertices 2
ColorRGBA ColorRGBA1219 = createNode("ColorRGBA");
ColorRGBA1219.USE = "HAnimSegmentLineColorRGBA";
LineSet1217.color = ColorRGBA1219;

Shape1216.geometry = LineSet1217;

HAnimSegment1111.children[18] = Shape1216;

HAnimJoint1110.children = new MFNode();

HAnimJoint1110.children[0] = HAnimSegment1111;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.name = "l_eyelid_joint";
HAnimJoint1220.DEF = "hanim_l_eyelid_joint";
HAnimJoint1220.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint1220.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1220.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.children[1] = HAnimJoint1220;

HAnimJoint HAnimJoint1221 = createNode("HAnimJoint");
HAnimJoint1221.name = "r_eyelid_joint";
HAnimJoint1221.DEF = "hanim_r_eyelid_joint";
HAnimJoint1221.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint1221.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1221.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.children[2] = HAnimJoint1221;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.name = "l_eyeball_joint";
HAnimJoint1222.DEF = "hanim_l_eyeball_joint";
HAnimJoint1222.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint1222.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1222.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.children[3] = HAnimJoint1222;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.name = "r_eyeball_joint";
HAnimJoint1223.DEF = "hanim_r_eyeball_joint";
HAnimJoint1223.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint1223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1223.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.children[4] = HAnimJoint1223;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.name = "l_eyebrow_joint";
HAnimJoint1224.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1224.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint1224.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1224.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.children[5] = HAnimJoint1224;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.name = "r_eyebrow_joint";
HAnimJoint1225.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1225.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint1225.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1225.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.children[6] = HAnimJoint1225;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.name = "temporomandibular";
HAnimJoint1226.DEF = "hanim_temporomandibular";
HAnimJoint1226.center = new SFVec3f(new float[-0.0002,1.3043,-0.0865]);
HAnimJoint1226.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1226.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.children[7] = HAnimJoint1226;

HAnimJoint1101.children[1] = HAnimJoint1110;

HAnimJoint1085.children[1] = HAnimJoint1101;

HAnimJoint1076.children[1] = HAnimJoint1085;

HAnimJoint1067.children[1] = HAnimJoint1076;

HAnimJoint1058.children[1] = HAnimJoint1067;

HAnimJoint1049.children[1] = HAnimJoint1058;

HAnimJoint1026.children[1] = HAnimJoint1049;

HAnimJoint995.children[1] = HAnimJoint1026;

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.name = "l_sternoclavicular";
HAnimJoint1227.DEF = "hanim_l_sternoclavicular";
HAnimJoint1227.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint1227.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1227.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1228 = createNode("HAnimSegment");
HAnimSegment1228.name = "l_clavicle";
HAnimSegment1228.DEF = "hanim_l_clavicle";
Transform Transform1229 = createNode("Transform");
Transform1229.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Transform Transform1230 = createNode("Transform");
//Empty Transform
Shape Shape1231 = createNode("Shape");
Shape1231.USE = "HAnimJointShape";
Transform1230.child = new undefined();

Transform1230.child[0] = Shape1231;

Transform1229.children = new MFNode();

Transform1229.children[0] = Transform1230;

HAnimSegment1228.children = new MFNode();

HAnimSegment1228.children[0] = Transform1229;

Shape Shape1232 = createNode("Shape");
LineSet LineSet1233 = createNode("LineSet");
LineSet1233.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1234 = createNode("Coordinate");
Coordinate1234.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet1233.coord = Coordinate1234;

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA ColorRGBA1235 = createNode("ColorRGBA");
ColorRGBA1235.USE = "HAnimSegmentLineColorRGBA";
LineSet1233.color = ColorRGBA1235;

Shape1232.geometry = LineSet1233;

HAnimSegment1228.children[1] = Shape1232;

HAnimSite HAnimSite1236 = createNode("HAnimSite");
HAnimSite1236.name = "l_acromion";
HAnimSite1236.DEF = "hanim_l_acromion";
HAnimSite1236.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor1237 = createNode("TouchSensor");
TouchSensor1237.description = "HAnimSite 15 l_acromion";
HAnimSite1236.children = new MFNode();

HAnimSite1236.children[0] = TouchSensor1237;

Shape Shape1238 = createNode("Shape");
Shape1238.USE = "HAnimSiteShape";
HAnimSite1236.children[1] = Shape1238;

Billboard Billboard1239 = createNode("Billboard");
Shape Shape1240 = createNode("Shape");
Text Text1241 = createNode("Text");
Text1241.string = new MFString(new java.lang.String["15"]);
FontStyle FontStyle1242 = createNode("FontStyle");
FontStyle1242.size = 0.035;
Text1241.fontStyle = FontStyle1242;

Shape1240.geometry = Text1241;

Billboard1239.children = new MFNode();

Billboard1239.children[0] = Shape1240;

HAnimSite1236.children[2] = Billboard1239;

HAnimSegment1228.children[2] = HAnimSite1236;

HAnimSite HAnimSite1243 = createNode("HAnimSite");
HAnimSite1243.name = "l_axilla_distal";
HAnimSite1243.DEF = "hanim_l_axilla_distal";
HAnimSite1243.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor1244 = createNode("TouchSensor");
TouchSensor1244.description = "HAnimSite 17 l_axilla_distal";
HAnimSite1243.children = new MFNode();

HAnimSite1243.children[0] = TouchSensor1244;

Shape Shape1245 = createNode("Shape");
Shape1245.USE = "HAnimSiteShape";
HAnimSite1243.children[1] = Shape1245;

Billboard Billboard1246 = createNode("Billboard");
Shape Shape1247 = createNode("Shape");
Text Text1248 = createNode("Text");
Text1248.string = new MFString(new java.lang.String["17"]);
FontStyle FontStyle1249 = createNode("FontStyle");
FontStyle1249.size = 0.035;
Text1248.fontStyle = FontStyle1249;

Shape1247.geometry = Text1248;

Billboard1246.children = new MFNode();

Billboard1246.children[0] = Shape1247;

HAnimSite1243.children[2] = Billboard1246;

HAnimSegment1228.children[3] = HAnimSite1243;

HAnimSite HAnimSite1250 = createNode("HAnimSite");
HAnimSite1250.name = "l_axilla_posterior_folds";
HAnimSite1250.DEF = "hanim_l_axilla_posterior_folds";
TouchSensor TouchSensor1251 = createNode("TouchSensor");
TouchSensor1251.description = "HAnimSite 18 l_axilla_posterior_folds";
HAnimSite1250.children = new MFNode();

HAnimSite1250.children[0] = TouchSensor1251;

Shape Shape1252 = createNode("Shape");
Shape1252.USE = "HAnimSiteShape";
HAnimSite1250.children[1] = Shape1252;

Billboard Billboard1253 = createNode("Billboard");
Shape Shape1254 = createNode("Shape");
Text Text1255 = createNode("Text");
Text1255.string = new MFString(new java.lang.String["18"]);
FontStyle FontStyle1256 = createNode("FontStyle");
FontStyle1256.size = 0.035;
Text1255.fontStyle = FontStyle1256;

Shape1254.geometry = Text1255;

Billboard1253.children = new MFNode();

Billboard1253.children[0] = Shape1254;

HAnimSite1250.children[2] = Billboard1253;

HAnimSegment1228.children[4] = HAnimSite1250;

HAnimSite HAnimSite1257 = createNode("HAnimSite");
HAnimSite1257.name = "l_axilla_proximal";
HAnimSite1257.DEF = "hanim_l_axilla_proximal";
HAnimSite1257.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor1258 = createNode("TouchSensor");
TouchSensor1258.description = "HAnimSite 16 l_axilla_proximal";
HAnimSite1257.children = new MFNode();

HAnimSite1257.children[0] = TouchSensor1258;

Shape Shape1259 = createNode("Shape");
Shape1259.USE = "HAnimSiteShape";
HAnimSite1257.children[1] = Shape1259;

Billboard Billboard1260 = createNode("Billboard");
Shape Shape1261 = createNode("Shape");
Text Text1262 = createNode("Text");
Text1262.string = new MFString(new java.lang.String["16"]);
FontStyle FontStyle1263 = createNode("FontStyle");
FontStyle1263.size = 0.035;
Text1262.fontStyle = FontStyle1263;

Shape1261.geometry = Text1262;

Billboard1260.children = new MFNode();

Billboard1260.children[0] = Shape1261;

HAnimSite1257.children[2] = Billboard1260;

HAnimSegment1228.children[5] = HAnimSite1257;

HAnimSite HAnimSite1264 = createNode("HAnimSite");
HAnimSite1264.name = "l_clavicale";
HAnimSite1264.DEF = "hanim_l_clavicale";
HAnimSite1264.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor1265 = createNode("TouchSensor");
TouchSensor1265.description = "HAnimSite 14 l_clavicale";
HAnimSite1264.children = new MFNode();

HAnimSite1264.children[0] = TouchSensor1265;

Shape Shape1266 = createNode("Shape");
Shape1266.USE = "HAnimSiteShape";
HAnimSite1264.children[1] = Shape1266;

Billboard Billboard1267 = createNode("Billboard");
Shape Shape1268 = createNode("Shape");
Text Text1269 = createNode("Text");
Text1269.string = new MFString(new java.lang.String["14"]);
FontStyle FontStyle1270 = createNode("FontStyle");
FontStyle1270.size = 0.035;
Text1269.fontStyle = FontStyle1270;

Shape1268.geometry = Text1269;

Billboard1267.children = new MFNode();

Billboard1267.children[0] = Shape1268;

HAnimSite1264.children[2] = Billboard1267;

HAnimSegment1228.children[6] = HAnimSite1264;

HAnimJoint1227.children = new MFNode();

HAnimJoint1227.children[0] = HAnimSegment1228;

HAnimJoint HAnimJoint1271 = createNode("HAnimJoint");
HAnimJoint1271.name = "l_acromioclavicular";
HAnimJoint1271.DEF = "hanim_l_acromioclavicular";
HAnimJoint1271.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint1271.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1271.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1272 = createNode("HAnimSegment");
HAnimSegment1272.name = "l_scapula";
HAnimSegment1272.DEF = "hanim_l_scapula";
Transform Transform1273 = createNode("Transform");
Transform1273.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Transform Transform1274 = createNode("Transform");
//Empty Transform
Shape Shape1275 = createNode("Shape");
Shape1275.USE = "HAnimJointShape";
Transform1274.child = new undefined();

Transform1274.child[0] = Shape1275;

Transform1273.children = new MFNode();

Transform1273.children[0] = Transform1274;

HAnimSegment1272.children = new MFNode();

HAnimSegment1272.children[0] = Transform1273;

Shape Shape1276 = createNode("Shape");
LineSet LineSet1277 = createNode("LineSet");
LineSet1277.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1278 = createNode("Coordinate");
Coordinate1278.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet1277.coord = Coordinate1278;

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA ColorRGBA1279 = createNode("ColorRGBA");
ColorRGBA1279.USE = "HAnimSegmentLineColorRGBA";
LineSet1277.color = ColorRGBA1279;

Shape1276.geometry = LineSet1277;

HAnimSegment1272.children[1] = Shape1276;

HAnimJoint1271.children = new MFNode();

HAnimJoint1271.children[0] = HAnimSegment1272;

HAnimJoint HAnimJoint1280 = createNode("HAnimJoint");
HAnimJoint1280.name = "l_shoulder";
HAnimJoint1280.DEF = "hanim_l_shoulder";
HAnimJoint1280.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint1280.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1280.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1281 = createNode("HAnimSegment");
HAnimSegment1281.name = "l_upperarm";
HAnimSegment1281.DEF = "hanim_l_upperarm";
Transform Transform1282 = createNode("Transform");
Transform1282.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform1283 = createNode("Transform");
//Empty Transform
Shape Shape1284 = createNode("Shape");
Shape1284.USE = "HAnimJointShape";
Transform1283.child = new undefined();

Transform1283.child[0] = Shape1284;

Transform1282.children = new MFNode();

Transform1282.children[0] = Transform1283;

HAnimSegment1281.children = new MFNode();

HAnimSegment1281.children[0] = Transform1282;

Shape Shape1285 = createNode("Shape");
LineSet LineSet1286 = createNode("LineSet");
LineSet1286.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1287 = createNode("Coordinate");
Coordinate1287.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet1286.coord = Coordinate1287;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA1288 = createNode("ColorRGBA");
ColorRGBA1288.USE = "HAnimSegmentLineColorRGBA";
LineSet1286.color = ColorRGBA1288;

Shape1285.geometry = LineSet1286;

HAnimSegment1281.children[1] = Shape1285;

HAnimSite HAnimSite1289 = createNode("HAnimSite");
HAnimSite1289.name = "l_bideltoid";
HAnimSite1289.DEF = "hanim_l_bideltoid";
TouchSensor TouchSensor1290 = createNode("TouchSensor");
TouchSensor1290.description = "HAnimSite 96 l_bideltoid";
HAnimSite1289.children = new MFNode();

HAnimSite1289.children[0] = TouchSensor1290;

Shape Shape1291 = createNode("Shape");
Shape1291.USE = "HAnimSiteShape";
HAnimSite1289.children[1] = Shape1291;

Billboard Billboard1292 = createNode("Billboard");
Shape Shape1293 = createNode("Shape");
Text Text1294 = createNode("Text");
Text1294.string = new MFString(new java.lang.String["96"]);
FontStyle FontStyle1295 = createNode("FontStyle");
FontStyle1295.size = 0.035;
Text1294.fontStyle = FontStyle1295;

Shape1293.geometry = Text1294;

Billboard1292.children = new MFNode();

Billboard1292.children[0] = Shape1293;

HAnimSite1289.children[2] = Billboard1292;

HAnimSegment1281.children[2] = HAnimSite1289;

HAnimSite HAnimSite1296 = createNode("HAnimSite");
HAnimSite1296.name = "l_humeral_lateral_epicondyles";
HAnimSite1296.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite1296.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor1297 = createNode("TouchSensor");
TouchSensor1297.description = "HAnimSite 63 l_humeral_lateral_epicondyles";
HAnimSite1296.children = new MFNode();

HAnimSite1296.children[0] = TouchSensor1297;

Shape Shape1298 = createNode("Shape");
Shape1298.USE = "HAnimSiteShape";
HAnimSite1296.children[1] = Shape1298;

Billboard Billboard1299 = createNode("Billboard");
Shape Shape1300 = createNode("Shape");
Text Text1301 = createNode("Text");
Text1301.string = new MFString(new java.lang.String["63"]);
FontStyle FontStyle1302 = createNode("FontStyle");
FontStyle1302.size = 0.035;
Text1301.fontStyle = FontStyle1302;

Shape1300.geometry = Text1301;

Billboard1299.children = new MFNode();

Billboard1299.children[0] = Shape1300;

HAnimSite1296.children[2] = Billboard1299;

HAnimSegment1281.children[3] = HAnimSite1296;

HAnimJoint1280.children = new MFNode();

HAnimJoint1280.children[0] = HAnimSegment1281;

HAnimJoint HAnimJoint1303 = createNode("HAnimJoint");
HAnimJoint1303.name = "l_elbow";
HAnimJoint1303.DEF = "hanim_l_elbow";
HAnimJoint1303.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint1303.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1303.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1304 = createNode("HAnimSegment");
HAnimSegment1304.name = "l_forearm";
HAnimSegment1304.DEF = "hanim_l_forearm";
Transform Transform1305 = createNode("Transform");
Transform1305.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform1306 = createNode("Transform");
//Empty Transform
Shape Shape1307 = createNode("Shape");
Shape1307.USE = "HAnimJointShape";
Transform1306.child = new undefined();

Transform1306.child[0] = Shape1307;

Transform1305.children = new MFNode();

Transform1305.children[0] = Transform1306;

HAnimSegment1304.children = new MFNode();

HAnimSegment1304.children[0] = Transform1305;

Shape Shape1308 = createNode("Shape");
LineSet LineSet1309 = createNode("LineSet");
LineSet1309.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1310 = createNode("Coordinate");
Coordinate1310.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1309.coord = Coordinate1310;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA1311 = createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSegmentLineColorRGBA";
LineSet1309.color = ColorRGBA1311;

Shape1308.geometry = LineSet1309;

HAnimSegment1304.children[1] = Shape1308;

HAnimSite HAnimSite1312 = createNode("HAnimSite");
HAnimSite1312.name = "l_humeral_medial_epicondyles";
HAnimSite1312.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite1312.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor1313 = createNode("TouchSensor");
TouchSensor1313.description = "HAnimSite 64 l_humeral_medial_epicondyles";
HAnimSite1312.children = new MFNode();

HAnimSite1312.children[0] = TouchSensor1313;

Shape Shape1314 = createNode("Shape");
Shape1314.USE = "HAnimSiteShape";
HAnimSite1312.children[1] = Shape1314;

Billboard Billboard1315 = createNode("Billboard");
Shape Shape1316 = createNode("Shape");
Text Text1317 = createNode("Text");
Text1317.string = new MFString(new java.lang.String["64"]);
FontStyle FontStyle1318 = createNode("FontStyle");
FontStyle1318.size = 0.035;
Text1317.fontStyle = FontStyle1318;

Shape1316.geometry = Text1317;

Billboard1315.children = new MFNode();

Billboard1315.children[0] = Shape1316;

HAnimSite1312.children[2] = Billboard1315;

HAnimSegment1304.children[2] = HAnimSite1312;

HAnimSite HAnimSite1319 = createNode("HAnimSite");
HAnimSite1319.name = "l_olecranon";
HAnimSite1319.DEF = "hanim_l_olecranon";
HAnimSite1319.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor1320 = createNode("TouchSensor");
TouchSensor1320.description = "HAnimSite 65 l_olecranon";
HAnimSite1319.children = new MFNode();

HAnimSite1319.children[0] = TouchSensor1320;

Shape Shape1321 = createNode("Shape");
Shape1321.USE = "HAnimSiteShape";
HAnimSite1319.children[1] = Shape1321;

Billboard Billboard1322 = createNode("Billboard");
Shape Shape1323 = createNode("Shape");
Text Text1324 = createNode("Text");
Text1324.string = new MFString(new java.lang.String["65"]);
FontStyle FontStyle1325 = createNode("FontStyle");
FontStyle1325.size = 0.035;
Text1324.fontStyle = FontStyle1325;

Shape1323.geometry = Text1324;

Billboard1322.children = new MFNode();

Billboard1322.children[0] = Shape1323;

HAnimSite1319.children[2] = Billboard1322;

HAnimSegment1304.children[3] = HAnimSite1319;

HAnimSite HAnimSite1326 = createNode("HAnimSite");
HAnimSite1326.name = "l_radial_styloid";
HAnimSite1326.DEF = "hanim_l_radial_styloid";
HAnimSite1326.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor1327 = createNode("TouchSensor");
TouchSensor1327.description = "HAnimSite 71 l_radial_styloid";
HAnimSite1326.children = new MFNode();

HAnimSite1326.children[0] = TouchSensor1327;

Shape Shape1328 = createNode("Shape");
Shape1328.USE = "HAnimSiteShape";
HAnimSite1326.children[1] = Shape1328;

Billboard Billboard1329 = createNode("Billboard");
Shape Shape1330 = createNode("Shape");
Text Text1331 = createNode("Text");
Text1331.string = new MFString(new java.lang.String["71"]);
FontStyle FontStyle1332 = createNode("FontStyle");
FontStyle1332.size = 0.035;
Text1331.fontStyle = FontStyle1332;

Shape1330.geometry = Text1331;

Billboard1329.children = new MFNode();

Billboard1329.children[0] = Shape1330;

HAnimSite1326.children[2] = Billboard1329;

HAnimSegment1304.children[4] = HAnimSite1326;

HAnimSite HAnimSite1333 = createNode("HAnimSite");
HAnimSite1333.name = "l_radiale";
HAnimSite1333.DEF = "hanim_l_radiale";
HAnimSite1333.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor1334 = createNode("TouchSensor");
TouchSensor1334.description = "HAnimSite 69 l_radiale";
HAnimSite1333.children = new MFNode();

HAnimSite1333.children[0] = TouchSensor1334;

Shape Shape1335 = createNode("Shape");
Shape1335.USE = "HAnimSiteShape";
HAnimSite1333.children[1] = Shape1335;

Billboard Billboard1336 = createNode("Billboard");
Shape Shape1337 = createNode("Shape");
Text Text1338 = createNode("Text");
Text1338.string = new MFString(new java.lang.String["69"]);
FontStyle FontStyle1339 = createNode("FontStyle");
FontStyle1339.size = 0.035;
Text1338.fontStyle = FontStyle1339;

Shape1337.geometry = Text1338;

Billboard1336.children = new MFNode();

Billboard1336.children[0] = Shape1337;

HAnimSite1333.children[2] = Billboard1336;

HAnimSegment1304.children[5] = HAnimSite1333;

HAnimJoint1303.children = new MFNode();

HAnimJoint1303.children[0] = HAnimSegment1304;

HAnimJoint HAnimJoint1340 = createNode("HAnimJoint");
HAnimJoint1340.name = "l_radiocarpal";
HAnimJoint1340.DEF = "hanim_l_radiocarpal";
HAnimJoint1340.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint1340.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1340.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1341 = createNode("HAnimSegment");
HAnimSegment1341.name = "l_carpal";
HAnimSegment1341.DEF = "hanim_l_carpal";
Transform Transform1342 = createNode("Transform");
Transform1342.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1342.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1342.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
Transform Transform1343 = createNode("Transform");
Transform1343.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
Shape Shape1344 = createNode("Shape");
Shape1344.USE = "HAnimJointShape";
Transform1343.child = new undefined();

Transform1343.child[0] = Shape1344;

Transform1342.children = new MFNode();

Transform1342.children[0] = Transform1343;

HAnimSegment1341.children = new MFNode();

HAnimSegment1341.children[0] = Transform1342;

Shape Shape1345 = createNode("Shape");
LineSet LineSet1346 = createNode("LineSet");
LineSet1346.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1347 = createNode("Coordinate");
Coordinate1347.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826]);
LineSet1346.coord = Coordinate1347;

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA ColorRGBA1348 = createNode("ColorRGBA");
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA";
LineSet1346.color = ColorRGBA1348;

Shape1345.geometry = LineSet1346;

HAnimSegment1341.children[1] = Shape1345;

HAnimSite HAnimSite1349 = createNode("HAnimSite");
HAnimSite1349.name = "l_ulnar_styloid";
HAnimSite1349.DEF = "hanim_l_ulnar_styloid";
HAnimSite1349.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor1350 = createNode("TouchSensor");
TouchSensor1350.description = "HAnimSite 70 l_ulnar_styloid";
HAnimSite1349.children = new MFNode();

HAnimSite1349.children[0] = TouchSensor1350;

Shape Shape1351 = createNode("Shape");
Shape1351.USE = "HAnimSiteShape";
HAnimSite1349.children[1] = Shape1351;

Billboard Billboard1352 = createNode("Billboard");
Shape Shape1353 = createNode("Shape");
Text Text1354 = createNode("Text");
Text1354.string = new MFString(new java.lang.String["70"]);
FontStyle FontStyle1355 = createNode("FontStyle");
FontStyle1355.size = 0.035;
Text1354.fontStyle = FontStyle1355;

Shape1353.geometry = Text1354;

Billboard1352.children = new MFNode();

Billboard1352.children[0] = Shape1353;

HAnimSite1349.children[2] = Billboard1352;

HAnimSegment1341.children[2] = HAnimSite1349;

Shape Shape1356 = createNode("Shape");
LineSet LineSet1357 = createNode("LineSet");
LineSet1357.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1358 = createNode("Coordinate");
Coordinate1358.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935]);
LineSet1357.coord = Coordinate1358;

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA ColorRGBA1359 = createNode("ColorRGBA");
ColorRGBA1359.USE = "HAnimSegmentLineColorRGBA";
LineSet1357.color = ColorRGBA1359;

Shape1356.geometry = LineSet1357;

HAnimSegment1341.children[3] = Shape1356;

Shape Shape1360 = createNode("Shape");
LineSet LineSet1361 = createNode("LineSet");
LineSet1361.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1362 = createNode("Coordinate");
Coordinate1362.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067]);
LineSet1361.coord = Coordinate1362;

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA ColorRGBA1363 = createNode("ColorRGBA");
ColorRGBA1363.USE = "HAnimSegmentLineColorRGBA";
LineSet1361.color = ColorRGBA1363;

Shape1360.geometry = LineSet1361;

HAnimSegment1341.children[4] = Shape1360;

Shape Shape1364 = createNode("Shape");
LineSet LineSet1365 = createNode("LineSet");
LineSet1365.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1366 = createNode("Coordinate");
Coordinate1366.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276]);
LineSet1365.coord = Coordinate1366;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA1367 = createNode("ColorRGBA");
ColorRGBA1367.USE = "HAnimSegmentLineColorRGBA";
LineSet1365.color = ColorRGBA1367;

Shape1364.geometry = LineSet1365;

HAnimSegment1341.children[5] = Shape1364;

HAnimJoint1340.children = new MFNode();

HAnimJoint1340.children[0] = HAnimSegment1341;

HAnimJoint HAnimJoint1368 = createNode("HAnimJoint");
HAnimJoint1368.name = "l_midcarpal_1";
HAnimJoint1368.DEF = "hanim_l_midcarpal_1";
HAnimJoint1368.center = new SFVec3f(new float[0.1811,0.6975,-0.0826]);
HAnimJoint1368.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1368.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1369 = createNode("HAnimSegment");
HAnimSegment1369.name = "l_trapezium";
HAnimSegment1369.DEF = "hanim_l_trapezium";
Transform Transform1370 = createNode("Transform");
Transform1370.translation = new SFVec3f(new float[0.1811,0.6975,-0.0826]);
Transform Transform1371 = createNode("Transform");
//Empty Transform
Shape Shape1372 = createNode("Shape");
Shape1372.USE = "HAnimJointShape";
Transform1371.child = new undefined();

Transform1371.child[0] = Shape1372;

Transform1370.children = new MFNode();

Transform1370.children[0] = Transform1371;

HAnimSegment1369.children = new MFNode();

HAnimSegment1369.children[0] = Transform1370;

Shape Shape1373 = createNode("Shape");
LineSet LineSet1374 = createNode("LineSet");
LineSet1374.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1375 = createNode("Coordinate");
Coordinate1375.point = new MFVec3f(new float[0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534]);
LineSet1374.coord = Coordinate1375;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1376 = createNode("ColorRGBA");
ColorRGBA1376.USE = "HAnimSegmentLineColorRGBA";
LineSet1374.color = ColorRGBA1376;

Shape1373.geometry = LineSet1374;

HAnimSegment1369.children[1] = Shape1373;

HAnimJoint1368.children = new MFNode();

HAnimJoint1368.children[0] = HAnimSegment1369;

HAnimJoint HAnimJoint1377 = createNode("HAnimJoint");
HAnimJoint1377.name = "l_carpometacarpal_1";
HAnimJoint1377.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1377.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1377.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1377.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1378 = createNode("HAnimSegment");
HAnimSegment1378.name = "l_metacarpal_1";
HAnimSegment1378.DEF = "hanim_l_metacarpal_1";
Transform Transform1379 = createNode("Transform");
Transform1379.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
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
Coordinate1384.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1383.coord = Coordinate1384;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1385 = createNode("ColorRGBA");
ColorRGBA1385.USE = "HAnimSegmentLineColorRGBA";
LineSet1383.color = ColorRGBA1385;

Shape1382.geometry = LineSet1383;

HAnimSegment1378.children[1] = Shape1382;

HAnimJoint1377.children = new MFNode();

HAnimJoint1377.children[0] = HAnimSegment1378;

HAnimJoint HAnimJoint1386 = createNode("HAnimJoint");
HAnimJoint1386.name = "l_metacarpophalangeal_1";
HAnimJoint1386.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1386.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1386.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1386.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1387 = createNode("HAnimSegment");
HAnimSegment1387.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1387.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform1388 = createNode("Transform");
Transform1388.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform1389 = createNode("Transform");
//Empty Transform
Shape Shape1390 = createNode("Shape");
Shape1390.USE = "HAnimJointShape";
Transform1389.child = new undefined();

Transform1389.child[0] = Shape1390;

Transform1388.children = new MFNode();

Transform1388.children[0] = Transform1389;

HAnimSegment1387.children = new MFNode();

HAnimSegment1387.children[0] = Transform1388;

Shape Shape1391 = createNode("Shape");
LineSet LineSet1392 = createNode("LineSet");
LineSet1392.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1393 = createNode("Coordinate");
Coordinate1393.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1392.coord = Coordinate1393;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1394 = createNode("ColorRGBA");
ColorRGBA1394.USE = "HAnimSegmentLineColorRGBA";
LineSet1392.color = ColorRGBA1394;

Shape1391.geometry = LineSet1392;

HAnimSegment1387.children[1] = Shape1391;

HAnimJoint1386.children = new MFNode();

HAnimJoint1386.children[0] = HAnimSegment1387;

HAnimJoint HAnimJoint1395 = createNode("HAnimJoint");
HAnimJoint1395.name = "l_carpal_interphalangeal_1";
HAnimJoint1395.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1395.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1395.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1395.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1386.children[1] = HAnimJoint1395;

HAnimJoint1377.children[1] = HAnimJoint1386;

HAnimJoint1368.children[1] = HAnimJoint1377;

HAnimJoint1340.children[1] = HAnimJoint1368;

HAnimJoint HAnimJoint1396 = createNode("HAnimJoint");
HAnimJoint1396.name = "l_midcarpal_2";
HAnimJoint1396.DEF = "hanim_l_midcarpal_2";
HAnimJoint1396.center = new SFVec3f(new float[0.1811,0.6984,-0.0935]);
HAnimJoint1396.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1396.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1397 = createNode("HAnimSegment");
HAnimSegment1397.name = "l_trapezoid";
HAnimSegment1397.DEF = "hanim_l_trapezoid";
Transform Transform1398 = createNode("Transform");
Transform1398.translation = new SFVec3f(new float[0.1811,0.6984,-0.0935]);
Transform Transform1399 = createNode("Transform");
//Empty Transform
Shape Shape1400 = createNode("Shape");
Shape1400.USE = "HAnimJointShape";
Transform1399.child = new undefined();

Transform1399.child[0] = Shape1400;

Transform1398.children = new MFNode();

Transform1398.children[0] = Transform1399;

HAnimSegment1397.children = new MFNode();

HAnimSegment1397.children[0] = Transform1398;

Shape Shape1401 = createNode("Shape");
LineSet LineSet1402 = createNode("LineSet");
LineSet1402.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1403 = createNode("Coordinate");
Coordinate1403.point = new MFVec3f(new float[0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028]);
LineSet1402.coord = Coordinate1403;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1404 = createNode("ColorRGBA");
ColorRGBA1404.USE = "HAnimSegmentLineColorRGBA";
LineSet1402.color = ColorRGBA1404;

Shape1401.geometry = LineSet1402;

HAnimSegment1397.children[1] = Shape1401;

HAnimJoint1396.children = new MFNode();

HAnimJoint1396.children[0] = HAnimSegment1397;

HAnimJoint HAnimJoint1405 = createNode("HAnimJoint");
HAnimJoint1405.name = "l_carpometacarpal_2";
HAnimJoint1405.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1405.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1405.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1405.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1406 = createNode("HAnimSegment");
HAnimSegment1406.name = "l_metacarpal_2";
HAnimSegment1406.DEF = "hanim_l_metacarpal_2";
Transform Transform1407 = createNode("Transform");
Transform1407.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Transform Transform1408 = createNode("Transform");
//Empty Transform
Shape Shape1409 = createNode("Shape");
Shape1409.USE = "HAnimJointShape";
Transform1408.child = new undefined();

Transform1408.child[0] = Shape1409;

Transform1407.children = new MFNode();

Transform1407.children[0] = Transform1408;

HAnimSegment1406.children = new MFNode();

HAnimSegment1406.children[0] = Transform1407;

Shape Shape1410 = createNode("Shape");
LineSet LineSet1411 = createNode("LineSet");
LineSet1411.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1412 = createNode("Coordinate");
Coordinate1412.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1411.coord = Coordinate1412;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1413 = createNode("ColorRGBA");
ColorRGBA1413.USE = "HAnimSegmentLineColorRGBA";
LineSet1411.color = ColorRGBA1413;

Shape1410.geometry = LineSet1411;

HAnimSegment1406.children[1] = Shape1410;

HAnimSite HAnimSite1414 = createNode("HAnimSite");
HAnimSite1414.name = "l_metacarpal_phalanx_2";
HAnimSite1414.DEF = "hanim_l_metacarpal_phalanx_2";
HAnimSite1414.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor1415 = createNode("TouchSensor");
TouchSensor1415.description = "HAnimSite 75 l_metacarpal_phalanx_2";
HAnimSite1414.children = new MFNode();

HAnimSite1414.children[0] = TouchSensor1415;

Shape Shape1416 = createNode("Shape");
Shape1416.USE = "HAnimSiteShape";
HAnimSite1414.children[1] = Shape1416;

Billboard Billboard1417 = createNode("Billboard");
Shape Shape1418 = createNode("Shape");
Text Text1419 = createNode("Text");
Text1419.string = new MFString(new java.lang.String["75"]);
FontStyle FontStyle1420 = createNode("FontStyle");
FontStyle1420.size = 0.035;
Text1419.fontStyle = FontStyle1420;

Shape1418.geometry = Text1419;

Billboard1417.children = new MFNode();

Billboard1417.children[0] = Shape1418;

HAnimSite1414.children[2] = Billboard1417;

HAnimSegment1406.children[2] = HAnimSite1414;

HAnimJoint1405.children = new MFNode();

HAnimJoint1405.children[0] = HAnimSegment1406;

HAnimJoint HAnimJoint1421 = createNode("HAnimJoint");
HAnimJoint1421.name = "l_metacarpophalangeal_2";
HAnimJoint1421.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1421.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1421.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1421.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1422 = createNode("HAnimSegment");
HAnimSegment1422.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1422.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform1423 = createNode("Transform");
Transform1423.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform1424 = createNode("Transform");
//Empty Transform
Shape Shape1425 = createNode("Shape");
Shape1425.USE = "HAnimJointShape";
Transform1424.child = new undefined();

Transform1424.child[0] = Shape1425;

Transform1423.children = new MFNode();

Transform1423.children[0] = Transform1424;

HAnimSegment1422.children = new MFNode();

HAnimSegment1422.children[0] = Transform1423;

Shape Shape1426 = createNode("Shape");
LineSet LineSet1427 = createNode("LineSet");
LineSet1427.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1428 = createNode("Coordinate");
Coordinate1428.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1427.coord = Coordinate1428;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1429 = createNode("ColorRGBA");
ColorRGBA1429.USE = "HAnimSegmentLineColorRGBA";
LineSet1427.color = ColorRGBA1429;

Shape1426.geometry = LineSet1427;

HAnimSegment1422.children[1] = Shape1426;

HAnimJoint1421.children = new MFNode();

HAnimJoint1421.children[0] = HAnimSegment1422;

HAnimJoint HAnimJoint1430 = createNode("HAnimJoint");
HAnimJoint1430.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1430.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1430.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1430.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1430.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1431 = createNode("HAnimSegment");
HAnimSegment1431.name = "l_carpal_middle_phalanx_2";
HAnimSegment1431.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform1432 = createNode("Transform");
Transform1432.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform1433 = createNode("Transform");
//Empty Transform
Shape Shape1434 = createNode("Shape");
Shape1434.USE = "HAnimJointShape";
Transform1433.child = new undefined();

Transform1433.child[0] = Shape1434;

Transform1432.children = new MFNode();

Transform1432.children[0] = Transform1433;

HAnimSegment1431.children = new MFNode();

HAnimSegment1431.children[0] = Transform1432;

Shape Shape1435 = createNode("Shape");
LineSet LineSet1436 = createNode("LineSet");
LineSet1436.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1437 = createNode("Coordinate");
Coordinate1437.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1436.coord = Coordinate1437;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1438 = createNode("ColorRGBA");
ColorRGBA1438.USE = "HAnimSegmentLineColorRGBA";
LineSet1436.color = ColorRGBA1438;

Shape1435.geometry = LineSet1436;

HAnimSegment1431.children[1] = Shape1435;

HAnimJoint1430.children = new MFNode();

HAnimJoint1430.children[0] = HAnimSegment1431;

HAnimJoint HAnimJoint1439 = createNode("HAnimJoint");
HAnimJoint1439.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1439.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1439.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1439.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1439.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1430.children[1] = HAnimJoint1439;

HAnimJoint1421.children[1] = HAnimJoint1430;

HAnimJoint1405.children[1] = HAnimJoint1421;

HAnimJoint1396.children[1] = HAnimJoint1405;

HAnimJoint1340.children[2] = HAnimJoint1396;

HAnimJoint HAnimJoint1440 = createNode("HAnimJoint");
HAnimJoint1440.name = "l_midcarpal_3";
HAnimJoint1440.DEF = "hanim_l_midcarpal_3";
HAnimJoint1440.center = new SFVec3f(new float[0.1809,0.7,-0.1067]);
HAnimJoint1440.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1440.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1441 = createNode("HAnimSegment");
HAnimSegment1441.name = "l_capitate";
HAnimSegment1441.DEF = "hanim_l_capitate";
Transform Transform1442 = createNode("Transform");
Transform1442.translation = new SFVec3f(new float[0.1809,0.7,-0.1067]);
Transform Transform1443 = createNode("Transform");
//Empty Transform
Shape Shape1444 = createNode("Shape");
Shape1444.USE = "HAnimJointShape";
Transform1443.child = new undefined();

Transform1443.child[0] = Shape1444;

Transform1442.children = new MFNode();

Transform1442.children[0] = Transform1443;

HAnimSegment1441.children = new MFNode();

HAnimSegment1441.children[0] = Transform1442;

Shape Shape1445 = createNode("Shape");
LineSet LineSet1446 = createNode("LineSet");
LineSet1446.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1447 = createNode("Coordinate");
Coordinate1447.point = new MFVec3f(new float[0.1809,0.7,-0.1067,0.1987,0.8029,-0.053]);
LineSet1446.coord = Coordinate1447;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1448 = createNode("ColorRGBA");
ColorRGBA1448.USE = "HAnimSegmentLineColorRGBA";
LineSet1446.color = ColorRGBA1448;

Shape1445.geometry = LineSet1446;

HAnimSegment1441.children[1] = Shape1445;

HAnimJoint1440.children = new MFNode();

HAnimJoint1440.children[0] = HAnimSegment1441;

HAnimJoint HAnimJoint1449 = createNode("HAnimJoint");
HAnimJoint1449.name = "l_carpometacarpal_3";
HAnimJoint1449.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1449.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1449.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1449.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1450 = createNode("HAnimSegment");
HAnimSegment1450.name = "l_metacarpal_3";
HAnimSegment1450.DEF = "hanim_l_metacarpal_3";
Transform Transform1451 = createNode("Transform");
Transform1451.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Transform Transform1452 = createNode("Transform");
//Empty Transform
Shape Shape1453 = createNode("Shape");
Shape1453.USE = "HAnimJointShape";
Transform1452.child = new undefined();

Transform1452.child[0] = Shape1453;

Transform1451.children = new MFNode();

Transform1451.children[0] = Transform1452;

HAnimSegment1450.children = new MFNode();

HAnimSegment1450.children[0] = Transform1451;

Shape Shape1454 = createNode("Shape");
LineSet LineSet1455 = createNode("LineSet");
LineSet1455.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1456 = createNode("Coordinate");
Coordinate1456.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1455.coord = Coordinate1456;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1457 = createNode("ColorRGBA");
ColorRGBA1457.USE = "HAnimSegmentLineColorRGBA";
LineSet1455.color = ColorRGBA1457;

Shape1454.geometry = LineSet1455;

HAnimSegment1450.children[1] = Shape1454;

HAnimSite HAnimSite1458 = createNode("HAnimSite");
HAnimSite1458.name = "l_metacarpal_phalanx_3";
HAnimSite1458.DEF = "hanim_l_metacarpal_phalanx_3";
TouchSensor TouchSensor1459 = createNode("TouchSensor");
TouchSensor1459.description = "HAnimSite 76 l_metacarpal_phalanx_3";
HAnimSite1458.children = new MFNode();

HAnimSite1458.children[0] = TouchSensor1459;

Shape Shape1460 = createNode("Shape");
Shape1460.USE = "HAnimSiteShape";
HAnimSite1458.children[1] = Shape1460;

Billboard Billboard1461 = createNode("Billboard");
Shape Shape1462 = createNode("Shape");
Text Text1463 = createNode("Text");
Text1463.string = new MFString(new java.lang.String["76"]);
FontStyle FontStyle1464 = createNode("FontStyle");
FontStyle1464.size = 0.035;
Text1463.fontStyle = FontStyle1464;

Shape1462.geometry = Text1463;

Billboard1461.children = new MFNode();

Billboard1461.children[0] = Shape1462;

HAnimSite1458.children[2] = Billboard1461;

HAnimSegment1450.children[2] = HAnimSite1458;

HAnimJoint1449.children = new MFNode();

HAnimJoint1449.children[0] = HAnimSegment1450;

HAnimJoint HAnimJoint1465 = createNode("HAnimJoint");
HAnimJoint1465.name = "l_metacarpophalangeal_3";
HAnimJoint1465.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1465.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1465.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1465.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1466 = createNode("HAnimSegment");
HAnimSegment1466.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1466.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform1467 = createNode("Transform");
Transform1467.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Transform Transform1468 = createNode("Transform");
//Empty Transform
Shape Shape1469 = createNode("Shape");
Shape1469.USE = "HAnimJointShape";
Transform1468.child = new undefined();

Transform1468.child[0] = Shape1469;

Transform1467.children = new MFNode();

Transform1467.children[0] = Transform1468;

HAnimSegment1466.children = new MFNode();

HAnimSegment1466.children[0] = Transform1467;

Shape Shape1470 = createNode("Shape");
LineSet LineSet1471 = createNode("LineSet");
LineSet1471.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1472 = createNode("Coordinate");
Coordinate1472.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1471.coord = Coordinate1472;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1473 = createNode("ColorRGBA");
ColorRGBA1473.USE = "HAnimSegmentLineColorRGBA";
LineSet1471.color = ColorRGBA1473;

Shape1470.geometry = LineSet1471;

HAnimSegment1466.children[1] = Shape1470;

HAnimJoint1465.children = new MFNode();

HAnimJoint1465.children[0] = HAnimSegment1466;

HAnimJoint HAnimJoint1474 = createNode("HAnimJoint");
HAnimJoint1474.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1474.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1474.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1474.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1474.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1475 = createNode("HAnimSegment");
HAnimSegment1475.name = "l_carpal_middle_phalanx_3";
HAnimSegment1475.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform1476 = createNode("Transform");
Transform1476.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Transform Transform1477 = createNode("Transform");
//Empty Transform
Shape Shape1478 = createNode("Shape");
Shape1478.USE = "HAnimJointShape";
Transform1477.child = new undefined();

Transform1477.child[0] = Shape1478;

Transform1476.children = new MFNode();

Transform1476.children[0] = Transform1477;

HAnimSegment1475.children = new MFNode();

HAnimSegment1475.children[0] = Transform1476;

Shape Shape1479 = createNode("Shape");
LineSet LineSet1480 = createNode("LineSet");
LineSet1480.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1481 = createNode("Coordinate");
Coordinate1481.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1480.coord = Coordinate1481;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1482 = createNode("ColorRGBA");
ColorRGBA1482.USE = "HAnimSegmentLineColorRGBA";
LineSet1480.color = ColorRGBA1482;

Shape1479.geometry = LineSet1480;

HAnimSegment1475.children[1] = Shape1479;

HAnimJoint1474.children = new MFNode();

HAnimJoint1474.children[0] = HAnimSegment1475;

HAnimJoint HAnimJoint1483 = createNode("HAnimJoint");
HAnimJoint1483.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1483.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1483.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1483.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1483.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1474.children[1] = HAnimJoint1483;

HAnimJoint1465.children[1] = HAnimJoint1474;

HAnimJoint1449.children[1] = HAnimJoint1465;

HAnimJoint1440.children[1] = HAnimJoint1449;

HAnimJoint1340.children[3] = HAnimJoint1440;

HAnimJoint HAnimJoint1484 = createNode("HAnimJoint");
HAnimJoint1484.name = "l_midcarpal_4_5";
HAnimJoint1484.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1484.center = new SFVec3f(new float[0.1809,0.6973,-0.1276]);
HAnimJoint1484.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1484.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1485 = createNode("HAnimSegment");
HAnimSegment1485.name = "l_hamate";
HAnimSegment1485.DEF = "hanim_l_hamate";
Transform Transform1486 = createNode("Transform");
Transform1486.translation = new SFVec3f(new float[0.1809,0.6973,-0.1276]);
Transform Transform1487 = createNode("Transform");
//Empty Transform
Shape Shape1488 = createNode("Shape");
Shape1488.USE = "HAnimJointShape";
Transform1487.child = new undefined();

Transform1487.child[0] = Shape1488;

Transform1486.children = new MFNode();

Transform1486.children[0] = Transform1487;

HAnimSegment1485.children = new MFNode();

HAnimSegment1485.children[0] = Transform1486;

Shape Shape1489 = createNode("Shape");
LineSet LineSet1490 = createNode("LineSet");
LineSet1490.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1491 = createNode("Coordinate");
Coordinate1491.point = new MFVec3f(new float[0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794]);
LineSet1490.coord = Coordinate1491;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1492 = createNode("ColorRGBA");
ColorRGBA1492.USE = "HAnimSegmentLineColorRGBA";
LineSet1490.color = ColorRGBA1492;

Shape1489.geometry = LineSet1490;

HAnimSegment1485.children[1] = Shape1489;

Shape Shape1493 = createNode("Shape");
LineSet LineSet1494 = createNode("LineSet");
LineSet1494.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1495 = createNode("Coordinate");
Coordinate1495.point = new MFVec3f(new float[0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036]);
LineSet1494.coord = Coordinate1495;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1496 = createNode("ColorRGBA");
ColorRGBA1496.USE = "HAnimSegmentLineColorRGBA";
LineSet1494.color = ColorRGBA1496;

Shape1493.geometry = LineSet1494;

HAnimSegment1485.children[2] = Shape1493;

HAnimJoint1484.children = new MFNode();

HAnimJoint1484.children[0] = HAnimSegment1485;

HAnimJoint HAnimJoint1497 = createNode("HAnimJoint");
HAnimJoint1497.name = "l_carpometacarpal_4";
HAnimJoint1497.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1497.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1497.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1497.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1498 = createNode("HAnimSegment");
HAnimSegment1498.name = "l_metacarpal_4";
HAnimSegment1498.DEF = "hanim_l_metacarpal_4";
Transform Transform1499 = createNode("Transform");
Transform1499.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Transform Transform1500 = createNode("Transform");
//Empty Transform
Shape Shape1501 = createNode("Shape");
Shape1501.USE = "HAnimJointShape";
Transform1500.child = new undefined();

Transform1500.child[0] = Shape1501;

Transform1499.children = new MFNode();

Transform1499.children[0] = Transform1500;

HAnimSegment1498.children = new MFNode();

HAnimSegment1498.children[0] = Transform1499;

Shape Shape1502 = createNode("Shape");
LineSet LineSet1503 = createNode("LineSet");
LineSet1503.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1504 = createNode("Coordinate");
Coordinate1504.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1503.coord = Coordinate1504;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1505 = createNode("ColorRGBA");
ColorRGBA1505.USE = "HAnimSegmentLineColorRGBA";
LineSet1503.color = ColorRGBA1505;

Shape1502.geometry = LineSet1503;

HAnimSegment1498.children[1] = Shape1502;

HAnimJoint1497.children = new MFNode();

HAnimJoint1497.children[0] = HAnimSegment1498;

HAnimJoint HAnimJoint1506 = createNode("HAnimJoint");
HAnimJoint1506.name = "l_metacarpophalangeal_4";
HAnimJoint1506.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1506.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1506.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1506.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1507 = createNode("HAnimSegment");
HAnimSegment1507.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1507.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform1508 = createNode("Transform");
Transform1508.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform1509 = createNode("Transform");
//Empty Transform
Shape Shape1510 = createNode("Shape");
Shape1510.USE = "HAnimJointShape";
Transform1509.child = new undefined();

Transform1509.child[0] = Shape1510;

Transform1508.children = new MFNode();

Transform1508.children[0] = Transform1509;

HAnimSegment1507.children = new MFNode();

HAnimSegment1507.children[0] = Transform1508;

Shape Shape1511 = createNode("Shape");
LineSet LineSet1512 = createNode("LineSet");
LineSet1512.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1513 = createNode("Coordinate");
Coordinate1513.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1512.coord = Coordinate1513;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1514 = createNode("ColorRGBA");
ColorRGBA1514.USE = "HAnimSegmentLineColorRGBA";
LineSet1512.color = ColorRGBA1514;

Shape1511.geometry = LineSet1512;

HAnimSegment1507.children[1] = Shape1511;

HAnimJoint1506.children = new MFNode();

HAnimJoint1506.children[0] = HAnimSegment1507;

HAnimJoint HAnimJoint1515 = createNode("HAnimJoint");
HAnimJoint1515.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1515.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1515.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1515.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1515.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1516 = createNode("HAnimSegment");
HAnimSegment1516.name = "l_carpal_middle_phalanx_4";
HAnimSegment1516.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform1517 = createNode("Transform");
Transform1517.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Transform Transform1518 = createNode("Transform");
//Empty Transform
Shape Shape1519 = createNode("Shape");
Shape1519.USE = "HAnimJointShape";
Transform1518.child = new undefined();

Transform1518.child[0] = Shape1519;

Transform1517.children = new MFNode();

Transform1517.children[0] = Transform1518;

HAnimSegment1516.children = new MFNode();

HAnimSegment1516.children[0] = Transform1517;

Shape Shape1520 = createNode("Shape");
LineSet LineSet1521 = createNode("LineSet");
LineSet1521.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1522 = createNode("Coordinate");
Coordinate1522.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1521.coord = Coordinate1522;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1523 = createNode("ColorRGBA");
ColorRGBA1523.USE = "HAnimSegmentLineColorRGBA";
LineSet1521.color = ColorRGBA1523;

Shape1520.geometry = LineSet1521;

HAnimSegment1516.children[1] = Shape1520;

HAnimJoint1515.children = new MFNode();

HAnimJoint1515.children[0] = HAnimSegment1516;

HAnimJoint HAnimJoint1524 = createNode("HAnimJoint");
HAnimJoint1524.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1524.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1524.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1524.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1524.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1515.children[1] = HAnimJoint1524;

HAnimJoint1506.children[1] = HAnimJoint1515;

HAnimJoint1497.children[1] = HAnimJoint1506;

HAnimJoint1484.children[1] = HAnimJoint1497;

HAnimJoint HAnimJoint1525 = createNode("HAnimJoint");
HAnimJoint1525.name = "l_carpometacarpal_5";
HAnimJoint1525.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1525.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1525.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1525.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1526 = createNode("HAnimSegment");
HAnimSegment1526.name = "l_metacarpal_5";
HAnimSegment1526.DEF = "hanim_l_metacarpal_5";
Transform Transform1527 = createNode("Transform");
Transform1527.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Transform Transform1528 = createNode("Transform");
//Empty Transform
Shape Shape1529 = createNode("Shape");
Shape1529.USE = "HAnimJointShape";
Transform1528.child = new undefined();

Transform1528.child[0] = Shape1529;

Transform1527.children = new MFNode();

Transform1527.children[0] = Transform1528;

HAnimSegment1526.children = new MFNode();

HAnimSegment1526.children[0] = Transform1527;

Shape Shape1530 = createNode("Shape");
LineSet LineSet1531 = createNode("LineSet");
LineSet1531.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1532 = createNode("Coordinate");
Coordinate1532.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1531.coord = Coordinate1532;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1533 = createNode("ColorRGBA");
ColorRGBA1533.USE = "HAnimSegmentLineColorRGBA";
LineSet1531.color = ColorRGBA1533;

Shape1530.geometry = LineSet1531;

HAnimSegment1526.children[1] = Shape1530;

HAnimSite HAnimSite1534 = createNode("HAnimSite");
HAnimSite1534.name = "l_metacarpal_phalanx_5";
HAnimSite1534.DEF = "hanim_l_metacarpal_phalanx_5";
HAnimSite1534.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor1535 = createNode("TouchSensor");
TouchSensor1535.description = "HAnimSite 77 l_metacarpal_phalanx_5";
HAnimSite1534.children = new MFNode();

HAnimSite1534.children[0] = TouchSensor1535;

Shape Shape1536 = createNode("Shape");
Shape1536.USE = "HAnimSiteShape";
HAnimSite1534.children[1] = Shape1536;

Billboard Billboard1537 = createNode("Billboard");
Shape Shape1538 = createNode("Shape");
Text Text1539 = createNode("Text");
Text1539.string = new MFString(new java.lang.String["77"]);
FontStyle FontStyle1540 = createNode("FontStyle");
FontStyle1540.size = 0.035;
Text1539.fontStyle = FontStyle1540;

Shape1538.geometry = Text1539;

Billboard1537.children = new MFNode();

Billboard1537.children[0] = Shape1538;

HAnimSite1534.children[2] = Billboard1537;

HAnimSegment1526.children[2] = HAnimSite1534;

HAnimJoint1525.children = new MFNode();

HAnimJoint1525.children[0] = HAnimSegment1526;

HAnimJoint HAnimJoint1541 = createNode("HAnimJoint");
HAnimJoint1541.name = "l_metacarpophalangeal_5";
HAnimJoint1541.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1541.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1541.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1541.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1542 = createNode("HAnimSegment");
HAnimSegment1542.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1542.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform1543 = createNode("Transform");
Transform1543.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Transform Transform1544 = createNode("Transform");
//Empty Transform
Shape Shape1545 = createNode("Shape");
Shape1545.USE = "HAnimJointShape";
Transform1544.child = new undefined();

Transform1544.child[0] = Shape1545;

Transform1543.children = new MFNode();

Transform1543.children[0] = Transform1544;

HAnimSegment1542.children = new MFNode();

HAnimSegment1542.children[0] = Transform1543;

Shape Shape1546 = createNode("Shape");
LineSet LineSet1547 = createNode("LineSet");
LineSet1547.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1548 = createNode("Coordinate");
Coordinate1548.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1547.coord = Coordinate1548;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1549 = createNode("ColorRGBA");
ColorRGBA1549.USE = "HAnimSegmentLineColorRGBA";
LineSet1547.color = ColorRGBA1549;

Shape1546.geometry = LineSet1547;

HAnimSegment1542.children[1] = Shape1546;

HAnimJoint1541.children = new MFNode();

HAnimJoint1541.children[0] = HAnimSegment1542;

HAnimJoint HAnimJoint1550 = createNode("HAnimJoint");
HAnimJoint1550.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1550.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1550.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1550.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1550.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1551 = createNode("HAnimSegment");
HAnimSegment1551.name = "l_carpal_middle_phalanx_5";
HAnimSegment1551.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform1552 = createNode("Transform");
Transform1552.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform1553 = createNode("Transform");
//Empty Transform
Shape Shape1554 = createNode("Shape");
Shape1554.USE = "HAnimJointShape";
Transform1553.child = new undefined();

Transform1553.child[0] = Shape1554;

Transform1552.children = new MFNode();

Transform1552.children[0] = Transform1553;

HAnimSegment1551.children = new MFNode();

HAnimSegment1551.children[0] = Transform1552;

Shape Shape1555 = createNode("Shape");
LineSet LineSet1556 = createNode("LineSet");
LineSet1556.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1557 = createNode("Coordinate");
Coordinate1557.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1556.coord = Coordinate1557;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1558 = createNode("ColorRGBA");
ColorRGBA1558.USE = "HAnimSegmentLineColorRGBA";
LineSet1556.color = ColorRGBA1558;

Shape1555.geometry = LineSet1556;

HAnimSegment1551.children[1] = Shape1555;

HAnimJoint1550.children = new MFNode();

HAnimJoint1550.children[0] = HAnimSegment1551;

HAnimJoint HAnimJoint1559 = createNode("HAnimJoint");
HAnimJoint1559.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1559.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1559.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1559.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1559.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1550.children[1] = HAnimJoint1559;

HAnimJoint1541.children[1] = HAnimJoint1550;

HAnimJoint1525.children[1] = HAnimJoint1541;

HAnimJoint1484.children[2] = HAnimJoint1525;

HAnimJoint1340.children[4] = HAnimJoint1484;

HAnimJoint1303.children[1] = HAnimJoint1340;

HAnimJoint1280.children[1] = HAnimJoint1303;

HAnimJoint1271.children[1] = HAnimJoint1280;

HAnimJoint1227.children[1] = HAnimJoint1271;

HAnimJoint995.children[2] = HAnimJoint1227;

HAnimJoint HAnimJoint1560 = createNode("HAnimJoint");
HAnimJoint1560.name = "r_sternoclavicular";
HAnimJoint1560.DEF = "hanim_r_sternoclavicular";
HAnimJoint1560.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint1560.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1560.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1561 = createNode("HAnimSegment");
HAnimSegment1561.name = "r_clavicle";
HAnimSegment1561.DEF = "hanim_r_clavicle";
Transform Transform1562 = createNode("Transform");
Transform1562.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
Transform Transform1563 = createNode("Transform");
//Empty Transform
Shape Shape1564 = createNode("Shape");
Shape1564.USE = "HAnimJointShape";
Transform1563.child = new undefined();

Transform1563.child[0] = Shape1564;

Transform1562.children = new MFNode();

Transform1562.children[0] = Transform1563;

HAnimSegment1561.children = new MFNode();

HAnimSegment1561.children[0] = Transform1562;

Shape Shape1565 = createNode("Shape");
LineSet LineSet1566 = createNode("LineSet");
LineSet1566.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1567 = createNode("Coordinate");
Coordinate1567.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1566.coord = Coordinate1567;

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA ColorRGBA1568 = createNode("ColorRGBA");
ColorRGBA1568.USE = "HAnimSegmentLineColorRGBA";
LineSet1566.color = ColorRGBA1568;

Shape1565.geometry = LineSet1566;

HAnimSegment1561.children[1] = Shape1565;

HAnimSite HAnimSite1569 = createNode("HAnimSite");
HAnimSite1569.name = "r_acromion";
HAnimSite1569.DEF = "hanim_r_acromion";
HAnimSite1569.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor1570 = createNode("TouchSensor");
TouchSensor1570.description = "HAnimSite 20 r_acromion";
HAnimSite1569.children = new MFNode();

HAnimSite1569.children[0] = TouchSensor1570;

Shape Shape1571 = createNode("Shape");
Shape1571.USE = "HAnimSiteShape";
HAnimSite1569.children[1] = Shape1571;

Billboard Billboard1572 = createNode("Billboard");
Shape Shape1573 = createNode("Shape");
Text Text1574 = createNode("Text");
Text1574.string = new MFString(new java.lang.String["20"]);
FontStyle FontStyle1575 = createNode("FontStyle");
FontStyle1575.size = 0.035;
Text1574.fontStyle = FontStyle1575;

Shape1573.geometry = Text1574;

Billboard1572.children = new MFNode();

Billboard1572.children[0] = Shape1573;

HAnimSite1569.children[2] = Billboard1572;

HAnimSegment1561.children[2] = HAnimSite1569;

HAnimSite HAnimSite1576 = createNode("HAnimSite");
HAnimSite1576.name = "r_axilla_distal";
HAnimSite1576.DEF = "hanim_r_axilla_distal";
HAnimSite1576.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor1577 = createNode("TouchSensor");
TouchSensor1577.description = "HAnimSite 22 r_axilla_distal";
HAnimSite1576.children = new MFNode();

HAnimSite1576.children[0] = TouchSensor1577;

Shape Shape1578 = createNode("Shape");
Shape1578.USE = "HAnimSiteShape";
HAnimSite1576.children[1] = Shape1578;

Billboard Billboard1579 = createNode("Billboard");
Shape Shape1580 = createNode("Shape");
Text Text1581 = createNode("Text");
Text1581.string = new MFString(new java.lang.String["22"]);
FontStyle FontStyle1582 = createNode("FontStyle");
FontStyle1582.size = 0.035;
Text1581.fontStyle = FontStyle1582;

Shape1580.geometry = Text1581;

Billboard1579.children = new MFNode();

Billboard1579.children[0] = Shape1580;

HAnimSite1576.children[2] = Billboard1579;

HAnimSegment1561.children[3] = HAnimSite1576;

HAnimSite HAnimSite1583 = createNode("HAnimSite");
HAnimSite1583.name = "r_axilla_posterior_folds";
HAnimSite1583.DEF = "hanim_r_axilla_posterior_folds";
TouchSensor TouchSensor1584 = createNode("TouchSensor");
TouchSensor1584.description = "HAnimSite 23 r_axilla_posterior_folds";
HAnimSite1583.children = new MFNode();

HAnimSite1583.children[0] = TouchSensor1584;

Shape Shape1585 = createNode("Shape");
Shape1585.USE = "HAnimSiteShape";
HAnimSite1583.children[1] = Shape1585;

Billboard Billboard1586 = createNode("Billboard");
Shape Shape1587 = createNode("Shape");
Text Text1588 = createNode("Text");
Text1588.string = new MFString(new java.lang.String["23"]);
FontStyle FontStyle1589 = createNode("FontStyle");
FontStyle1589.size = 0.035;
Text1588.fontStyle = FontStyle1589;

Shape1587.geometry = Text1588;

Billboard1586.children = new MFNode();

Billboard1586.children[0] = Shape1587;

HAnimSite1583.children[2] = Billboard1586;

HAnimSegment1561.children[4] = HAnimSite1583;

HAnimSite HAnimSite1590 = createNode("HAnimSite");
HAnimSite1590.name = "r_axilla_proximal";
HAnimSite1590.DEF = "hanim_r_axilla_proximal";
HAnimSite1590.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor1591 = createNode("TouchSensor");
TouchSensor1591.description = "HAnimSite 21 r_axilla_proximal";
HAnimSite1590.children = new MFNode();

HAnimSite1590.children[0] = TouchSensor1591;

Shape Shape1592 = createNode("Shape");
Shape1592.USE = "HAnimSiteShape";
HAnimSite1590.children[1] = Shape1592;

Billboard Billboard1593 = createNode("Billboard");
Shape Shape1594 = createNode("Shape");
Text Text1595 = createNode("Text");
Text1595.string = new MFString(new java.lang.String["21"]);
FontStyle FontStyle1596 = createNode("FontStyle");
FontStyle1596.size = 0.035;
Text1595.fontStyle = FontStyle1596;

Shape1594.geometry = Text1595;

Billboard1593.children = new MFNode();

Billboard1593.children[0] = Shape1594;

HAnimSite1590.children[2] = Billboard1593;

HAnimSegment1561.children[5] = HAnimSite1590;

HAnimSite HAnimSite1597 = createNode("HAnimSite");
HAnimSite1597.name = "r_clavicale";
HAnimSite1597.DEF = "hanim_r_clavicale";
HAnimSite1597.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor1598 = createNode("TouchSensor");
TouchSensor1598.description = "HAnimSite 19 r_clavicale";
HAnimSite1597.children = new MFNode();

HAnimSite1597.children[0] = TouchSensor1598;

Shape Shape1599 = createNode("Shape");
Shape1599.USE = "HAnimSiteShape";
HAnimSite1597.children[1] = Shape1599;

Billboard Billboard1600 = createNode("Billboard");
Shape Shape1601 = createNode("Shape");
Text Text1602 = createNode("Text");
Text1602.string = new MFString(new java.lang.String["19"]);
FontStyle FontStyle1603 = createNode("FontStyle");
FontStyle1603.size = 0.035;
Text1602.fontStyle = FontStyle1603;

Shape1601.geometry = Text1602;

Billboard1600.children = new MFNode();

Billboard1600.children[0] = Shape1601;

HAnimSite1597.children[2] = Billboard1600;

HAnimSegment1561.children[6] = HAnimSite1597;

HAnimJoint1560.children = new MFNode();

HAnimJoint1560.children[0] = HAnimSegment1561;

HAnimJoint HAnimJoint1604 = createNode("HAnimJoint");
HAnimJoint1604.name = "r_acromioclavicular";
HAnimJoint1604.DEF = "hanim_r_acromioclavicular";
HAnimJoint1604.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint1604.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1604.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1605 = createNode("HAnimSegment");
HAnimSegment1605.name = "r_scapula";
HAnimSegment1605.DEF = "hanim_r_scapula";
Transform Transform1606 = createNode("Transform");
Transform1606.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform1607 = createNode("Transform");
//Empty Transform
Shape Shape1608 = createNode("Shape");
Shape1608.USE = "HAnimJointShape";
Transform1607.child = new undefined();

Transform1607.child[0] = Shape1608;

Transform1606.children = new MFNode();

Transform1606.children[0] = Transform1607;

HAnimSegment1605.children = new MFNode();

HAnimSegment1605.children[0] = Transform1606;

Shape Shape1609 = createNode("Shape");
LineSet LineSet1610 = createNode("LineSet");
LineSet1610.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1611 = createNode("Coordinate");
Coordinate1611.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1610.coord = Coordinate1611;

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA ColorRGBA1612 = createNode("ColorRGBA");
ColorRGBA1612.USE = "HAnimSegmentLineColorRGBA";
LineSet1610.color = ColorRGBA1612;

Shape1609.geometry = LineSet1610;

HAnimSegment1605.children[1] = Shape1609;

HAnimJoint1604.children = new MFNode();

HAnimJoint1604.children[0] = HAnimSegment1605;

HAnimJoint HAnimJoint1613 = createNode("HAnimJoint");
HAnimJoint1613.name = "r_shoulder";
HAnimJoint1613.DEF = "hanim_r_shoulder";
HAnimJoint1613.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint1613.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1613.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1614 = createNode("HAnimSegment");
HAnimSegment1614.name = "r_upperarm";
HAnimSegment1614.DEF = "hanim_r_upperarm";
Transform Transform1615 = createNode("Transform");
Transform1615.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform1616 = createNode("Transform");
//Empty Transform
Shape Shape1617 = createNode("Shape");
Shape1617.USE = "HAnimJointShape";
Transform1616.child = new undefined();

Transform1616.child[0] = Shape1617;

Transform1615.children = new MFNode();

Transform1615.children[0] = Transform1616;

HAnimSegment1614.children = new MFNode();

HAnimSegment1614.children[0] = Transform1615;

Shape Shape1618 = createNode("Shape");
LineSet LineSet1619 = createNode("LineSet");
LineSet1619.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1620 = createNode("Coordinate");
Coordinate1620.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1619.coord = Coordinate1620;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA1621 = createNode("ColorRGBA");
ColorRGBA1621.USE = "HAnimSegmentLineColorRGBA";
LineSet1619.color = ColorRGBA1621;

Shape1618.geometry = LineSet1619;

HAnimSegment1614.children[1] = Shape1618;

HAnimSite HAnimSite1622 = createNode("HAnimSite");
HAnimSite1622.name = "r_bideltoid";
HAnimSite1622.DEF = "hanim_r_bideltoid";
TouchSensor TouchSensor1623 = createNode("TouchSensor");
TouchSensor1623.description = "HAnimSite 97 r_bideltoid";
HAnimSite1622.children = new MFNode();

HAnimSite1622.children[0] = TouchSensor1623;

Shape Shape1624 = createNode("Shape");
Shape1624.USE = "HAnimSiteShape";
HAnimSite1622.children[1] = Shape1624;

Billboard Billboard1625 = createNode("Billboard");
Shape Shape1626 = createNode("Shape");
Text Text1627 = createNode("Text");
Text1627.string = new MFString(new java.lang.String["97"]);
FontStyle FontStyle1628 = createNode("FontStyle");
FontStyle1628.size = 0.035;
Text1627.fontStyle = FontStyle1628;

Shape1626.geometry = Text1627;

Billboard1625.children = new MFNode();

Billboard1625.children[0] = Shape1626;

HAnimSite1622.children[2] = Billboard1625;

HAnimSegment1614.children[2] = HAnimSite1622;

HAnimSite HAnimSite1629 = createNode("HAnimSite");
HAnimSite1629.name = "r_humeral_lateral_epicondyles";
HAnimSite1629.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite1629.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1630 = createNode("TouchSensor");
TouchSensor1630.description = "HAnimSite 66 r_humeral_lateral_epicondyles";
HAnimSite1629.children = new MFNode();

HAnimSite1629.children[0] = TouchSensor1630;

Shape Shape1631 = createNode("Shape");
Shape1631.USE = "HAnimSiteShape";
HAnimSite1629.children[1] = Shape1631;

Billboard Billboard1632 = createNode("Billboard");
Shape Shape1633 = createNode("Shape");
Text Text1634 = createNode("Text");
Text1634.string = new MFString(new java.lang.String["66"]);
FontStyle FontStyle1635 = createNode("FontStyle");
FontStyle1635.size = 0.035;
Text1634.fontStyle = FontStyle1635;

Shape1633.geometry = Text1634;

Billboard1632.children = new MFNode();

Billboard1632.children[0] = Shape1633;

HAnimSite1629.children[2] = Billboard1632;

HAnimSegment1614.children[3] = HAnimSite1629;

HAnimJoint1613.children = new MFNode();

HAnimJoint1613.children[0] = HAnimSegment1614;

HAnimJoint HAnimJoint1636 = createNode("HAnimJoint");
HAnimJoint1636.name = "r_elbow";
HAnimJoint1636.DEF = "hanim_r_elbow";
HAnimJoint1636.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint1636.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1636.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1637 = createNode("HAnimSegment");
HAnimSegment1637.name = "r_forearm";
HAnimSegment1637.DEF = "hanim_r_forearm";
Transform Transform1638 = createNode("Transform");
Transform1638.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform1639 = createNode("Transform");
//Empty Transform
Shape Shape1640 = createNode("Shape");
Shape1640.USE = "HAnimJointShape";
Transform1639.child = new undefined();

Transform1639.child[0] = Shape1640;

Transform1638.children = new MFNode();

Transform1638.children[0] = Transform1639;

HAnimSegment1637.children = new MFNode();

HAnimSegment1637.children[0] = Transform1638;

Shape Shape1641 = createNode("Shape");
LineSet LineSet1642 = createNode("LineSet");
LineSet1642.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1643 = createNode("Coordinate");
Coordinate1643.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1642.coord = Coordinate1643;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA1644 = createNode("ColorRGBA");
ColorRGBA1644.USE = "HAnimSegmentLineColorRGBA";
LineSet1642.color = ColorRGBA1644;

Shape1641.geometry = LineSet1642;

HAnimSegment1637.children[1] = Shape1641;

HAnimSite HAnimSite1645 = createNode("HAnimSite");
HAnimSite1645.name = "r_humeral_medial_epicondyles";
HAnimSite1645.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite1645.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1646 = createNode("TouchSensor");
TouchSensor1646.description = "HAnimSite 67 r_humeral_medial_epicondyles";
HAnimSite1645.children = new MFNode();

HAnimSite1645.children[0] = TouchSensor1646;

Shape Shape1647 = createNode("Shape");
Shape1647.USE = "HAnimSiteShape";
HAnimSite1645.children[1] = Shape1647;

Billboard Billboard1648 = createNode("Billboard");
Shape Shape1649 = createNode("Shape");
Text Text1650 = createNode("Text");
Text1650.string = new MFString(new java.lang.String["67"]);
FontStyle FontStyle1651 = createNode("FontStyle");
FontStyle1651.size = 0.035;
Text1650.fontStyle = FontStyle1651;

Shape1649.geometry = Text1650;

Billboard1648.children = new MFNode();

Billboard1648.children[0] = Shape1649;

HAnimSite1645.children[2] = Billboard1648;

HAnimSegment1637.children[2] = HAnimSite1645;

HAnimSite HAnimSite1652 = createNode("HAnimSite");
HAnimSite1652.name = "r_olecranon";
HAnimSite1652.DEF = "hanim_r_olecranon";
HAnimSite1652.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1653 = createNode("TouchSensor");
TouchSensor1653.description = "HAnimSite 68 r_olecranon";
HAnimSite1652.children = new MFNode();

HAnimSite1652.children[0] = TouchSensor1653;

Shape Shape1654 = createNode("Shape");
Shape1654.USE = "HAnimSiteShape";
HAnimSite1652.children[1] = Shape1654;

Billboard Billboard1655 = createNode("Billboard");
Shape Shape1656 = createNode("Shape");
Text Text1657 = createNode("Text");
Text1657.string = new MFString(new java.lang.String["68"]);
FontStyle FontStyle1658 = createNode("FontStyle");
FontStyle1658.size = 0.035;
Text1657.fontStyle = FontStyle1658;

Shape1656.geometry = Text1657;

Billboard1655.children = new MFNode();

Billboard1655.children[0] = Shape1656;

HAnimSite1652.children[2] = Billboard1655;

HAnimSegment1637.children[3] = HAnimSite1652;

HAnimSite HAnimSite1659 = createNode("HAnimSite");
HAnimSite1659.name = "r_radial_styloid";
HAnimSite1659.DEF = "hanim_r_radial_styloid";
HAnimSite1659.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1660 = createNode("TouchSensor");
TouchSensor1660.description = "HAnimSite 74 r_radial_styloid";
HAnimSite1659.children = new MFNode();

HAnimSite1659.children[0] = TouchSensor1660;

Shape Shape1661 = createNode("Shape");
Shape1661.USE = "HAnimSiteShape";
HAnimSite1659.children[1] = Shape1661;

Billboard Billboard1662 = createNode("Billboard");
Shape Shape1663 = createNode("Shape");
Text Text1664 = createNode("Text");
Text1664.string = new MFString(new java.lang.String["74"]);
FontStyle FontStyle1665 = createNode("FontStyle");
FontStyle1665.size = 0.035;
Text1664.fontStyle = FontStyle1665;

Shape1663.geometry = Text1664;

Billboard1662.children = new MFNode();

Billboard1662.children[0] = Shape1663;

HAnimSite1659.children[2] = Billboard1662;

HAnimSegment1637.children[4] = HAnimSite1659;

HAnimSite HAnimSite1666 = createNode("HAnimSite");
HAnimSite1666.name = "r_radiale";
HAnimSite1666.DEF = "hanim_r_radiale";
HAnimSite1666.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1667 = createNode("TouchSensor");
TouchSensor1667.description = "HAnimSite 72 r_radiale";
HAnimSite1666.children = new MFNode();

HAnimSite1666.children[0] = TouchSensor1667;

Shape Shape1668 = createNode("Shape");
Shape1668.USE = "HAnimSiteShape";
HAnimSite1666.children[1] = Shape1668;

Billboard Billboard1669 = createNode("Billboard");
Shape Shape1670 = createNode("Shape");
Text Text1671 = createNode("Text");
Text1671.string = new MFString(new java.lang.String["72"]);
FontStyle FontStyle1672 = createNode("FontStyle");
FontStyle1672.size = 0.035;
Text1671.fontStyle = FontStyle1672;

Shape1670.geometry = Text1671;

Billboard1669.children = new MFNode();

Billboard1669.children[0] = Shape1670;

HAnimSite1666.children[2] = Billboard1669;

HAnimSegment1637.children[5] = HAnimSite1666;

HAnimJoint1636.children = new MFNode();

HAnimJoint1636.children[0] = HAnimSegment1637;

HAnimJoint HAnimJoint1673 = createNode("HAnimJoint");
HAnimJoint1673.name = "r_radiocarpal";
HAnimJoint1673.DEF = "hanim_r_radiocarpal";
HAnimJoint1673.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint1673.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1673.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1674 = createNode("HAnimSegment");
HAnimSegment1674.name = "r_carpal";
HAnimSegment1674.DEF = "hanim_r_carpal";
Transform Transform1675 = createNode("Transform");
Transform1675.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1675.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1675.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
Transform Transform1676 = createNode("Transform");
Transform1676.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
Shape Shape1677 = createNode("Shape");
Shape1677.USE = "HAnimJointShape";
Transform1676.child = new undefined();

Transform1676.child[0] = Shape1677;

Transform1675.children = new MFNode();

Transform1675.children[0] = Transform1676;

HAnimSegment1674.children = new MFNode();

HAnimSegment1674.children[0] = Transform1675;

Shape Shape1678 = createNode("Shape");
LineSet LineSet1679 = createNode("LineSet");
LineSet1679.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1680 = createNode("Coordinate");
Coordinate1680.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826]);
LineSet1679.coord = Coordinate1680;

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA ColorRGBA1681 = createNode("ColorRGBA");
ColorRGBA1681.USE = "HAnimSegmentLineColorRGBA";
LineSet1679.color = ColorRGBA1681;

Shape1678.geometry = LineSet1679;

HAnimSegment1674.children[1] = Shape1678;

HAnimSite HAnimSite1682 = createNode("HAnimSite");
HAnimSite1682.name = "r_ulnar_styloid";
HAnimSite1682.DEF = "hanim_r_ulnar_styloid";
HAnimSite1682.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1683 = createNode("TouchSensor");
TouchSensor1683.description = "HAnimSite 73 r_ulnar_styloid";
HAnimSite1682.children = new MFNode();

HAnimSite1682.children[0] = TouchSensor1683;

Shape Shape1684 = createNode("Shape");
Shape1684.USE = "HAnimSiteShape";
HAnimSite1682.children[1] = Shape1684;

Billboard Billboard1685 = createNode("Billboard");
Shape Shape1686 = createNode("Shape");
Text Text1687 = createNode("Text");
Text1687.string = new MFString(new java.lang.String["73"]);
FontStyle FontStyle1688 = createNode("FontStyle");
FontStyle1688.size = 0.035;
Text1687.fontStyle = FontStyle1688;

Shape1686.geometry = Text1687;

Billboard1685.children = new MFNode();

Billboard1685.children[0] = Shape1686;

HAnimSite1682.children[2] = Billboard1685;

HAnimSegment1674.children[2] = HAnimSite1682;

Shape Shape1689 = createNode("Shape");
LineSet LineSet1690 = createNode("LineSet");
LineSet1690.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1691 = createNode("Coordinate");
Coordinate1691.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935]);
LineSet1690.coord = Coordinate1691;

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA ColorRGBA1692 = createNode("ColorRGBA");
ColorRGBA1692.USE = "HAnimSegmentLineColorRGBA";
LineSet1690.color = ColorRGBA1692;

Shape1689.geometry = LineSet1690;

HAnimSegment1674.children[3] = Shape1689;

Shape Shape1693 = createNode("Shape");
LineSet LineSet1694 = createNode("LineSet");
LineSet1694.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1695 = createNode("Coordinate");
Coordinate1695.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067]);
LineSet1694.coord = Coordinate1695;

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA ColorRGBA1696 = createNode("ColorRGBA");
ColorRGBA1696.USE = "HAnimSegmentLineColorRGBA";
LineSet1694.color = ColorRGBA1696;

Shape1693.geometry = LineSet1694;

HAnimSegment1674.children[4] = Shape1693;

Shape Shape1697 = createNode("Shape");
LineSet LineSet1698 = createNode("LineSet");
LineSet1698.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1699 = createNode("Coordinate");
Coordinate1699.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276]);
LineSet1698.coord = Coordinate1699;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA1700 = createNode("ColorRGBA");
ColorRGBA1700.USE = "HAnimSegmentLineColorRGBA";
LineSet1698.color = ColorRGBA1700;

Shape1697.geometry = LineSet1698;

HAnimSegment1674.children[5] = Shape1697;

HAnimJoint1673.children = new MFNode();

HAnimJoint1673.children[0] = HAnimSegment1674;

HAnimJoint HAnimJoint1701 = createNode("HAnimJoint");
HAnimJoint1701.name = "r_midcarpal_1";
HAnimJoint1701.DEF = "hanim_r_midcarpal_1";
HAnimJoint1701.center = new SFVec3f(new float[-0.1811,0.6975,-0.0826]);
HAnimJoint1701.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1701.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1702 = createNode("HAnimSegment");
HAnimSegment1702.name = "r_trapezium";
HAnimSegment1702.DEF = "hanim_r_trapezium";
Transform Transform1703 = createNode("Transform");
Transform1703.translation = new SFVec3f(new float[-0.1811,0.6975,-0.0826]);
Transform Transform1704 = createNode("Transform");
//Empty Transform
Shape Shape1705 = createNode("Shape");
Shape1705.USE = "HAnimJointShape";
Transform1704.child = new undefined();

Transform1704.child[0] = Shape1705;

Transform1703.children = new MFNode();

Transform1703.children[0] = Transform1704;

HAnimSegment1702.children = new MFNode();

HAnimSegment1702.children[0] = Transform1703;

Shape Shape1706 = createNode("Shape");
LineSet LineSet1707 = createNode("LineSet");
LineSet1707.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1708 = createNode("Coordinate");
Coordinate1708.point = new MFVec3f(new float[-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473]);
LineSet1707.coord = Coordinate1708;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1709 = createNode("ColorRGBA");
ColorRGBA1709.USE = "HAnimSegmentLineColorRGBA";
LineSet1707.color = ColorRGBA1709;

Shape1706.geometry = LineSet1707;

HAnimSegment1702.children[1] = Shape1706;

HAnimJoint1701.children = new MFNode();

HAnimJoint1701.children[0] = HAnimSegment1702;

HAnimJoint HAnimJoint1710 = createNode("HAnimJoint");
HAnimJoint1710.name = "r_carpometacarpal_1";
HAnimJoint1710.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1710.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1710.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1710.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1711 = createNode("HAnimSegment");
HAnimSegment1711.name = "r_metacarpal_1";
HAnimSegment1711.DEF = "hanim_r_metacarpal_1";
Transform Transform1712 = createNode("Transform");
Transform1712.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
Transform Transform1713 = createNode("Transform");
//Empty Transform
Shape Shape1714 = createNode("Shape");
Shape1714.USE = "HAnimJointShape";
Transform1713.child = new undefined();

Transform1713.child[0] = Shape1714;

Transform1712.children = new MFNode();

Transform1712.children[0] = Transform1713;

HAnimSegment1711.children = new MFNode();

HAnimSegment1711.children[0] = Transform1712;

Shape Shape1715 = createNode("Shape");
LineSet LineSet1716 = createNode("LineSet");
LineSet1716.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1717 = createNode("Coordinate");
Coordinate1717.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1716.coord = Coordinate1717;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1718 = createNode("ColorRGBA");
ColorRGBA1718.USE = "HAnimSegmentLineColorRGBA";
LineSet1716.color = ColorRGBA1718;

Shape1715.geometry = LineSet1716;

HAnimSegment1711.children[1] = Shape1715;

HAnimJoint1710.children = new MFNode();

HAnimJoint1710.children[0] = HAnimSegment1711;

HAnimJoint HAnimJoint1719 = createNode("HAnimJoint");
HAnimJoint1719.name = "r_metacarpophalangeal_1";
HAnimJoint1719.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1719.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1719.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1719.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1720 = createNode("HAnimSegment");
HAnimSegment1720.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1720.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform1721 = createNode("Transform");
Transform1721.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
Transform Transform1722 = createNode("Transform");
//Empty Transform
Shape Shape1723 = createNode("Shape");
Shape1723.USE = "HAnimJointShape";
Transform1722.child = new undefined();

Transform1722.child[0] = Shape1723;

Transform1721.children = new MFNode();

Transform1721.children[0] = Transform1722;

HAnimSegment1720.children = new MFNode();

HAnimSegment1720.children[0] = Transform1721;

Shape Shape1724 = createNode("Shape");
LineSet LineSet1725 = createNode("LineSet");
LineSet1725.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1726 = createNode("Coordinate");
Coordinate1726.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1725.coord = Coordinate1726;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1727 = createNode("ColorRGBA");
ColorRGBA1727.USE = "HAnimSegmentLineColorRGBA";
LineSet1725.color = ColorRGBA1727;

Shape1724.geometry = LineSet1725;

HAnimSegment1720.children[1] = Shape1724;

HAnimJoint1719.children = new MFNode();

HAnimJoint1719.children[0] = HAnimSegment1720;

HAnimJoint HAnimJoint1728 = createNode("HAnimJoint");
HAnimJoint1728.name = "r_carpal_interphalangeal_1";
HAnimJoint1728.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1728.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1728.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1728.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1719.children[1] = HAnimJoint1728;

HAnimJoint1710.children[1] = HAnimJoint1719;

HAnimJoint1701.children[1] = HAnimJoint1710;

HAnimJoint1673.children[1] = HAnimJoint1701;

HAnimJoint HAnimJoint1729 = createNode("HAnimJoint");
HAnimJoint1729.name = "r_midcarpal_2";
HAnimJoint1729.DEF = "hanim_r_midcarpal_2";
HAnimJoint1729.center = new SFVec3f(new float[-0.1811,0.6984,-0.0935]);
HAnimJoint1729.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1729.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1730 = createNode("HAnimSegment");
HAnimSegment1730.name = "r_trapezoid";
HAnimSegment1730.DEF = "hanim_r_trapezoid";
Transform Transform1731 = createNode("Transform");
Transform1731.translation = new SFVec3f(new float[-0.1811,0.6984,-0.0935]);
Transform Transform1732 = createNode("Transform");
//Empty Transform
Shape Shape1733 = createNode("Shape");
Shape1733.USE = "HAnimJointShape";
Transform1732.child = new undefined();

Transform1732.child[0] = Shape1733;

Transform1731.children = new MFNode();

Transform1731.children[0] = Transform1732;

HAnimSegment1730.children = new MFNode();

HAnimSegment1730.children[0] = Transform1731;

Shape Shape1734 = createNode("Shape");
LineSet LineSet1735 = createNode("LineSet");
LineSet1735.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1736 = createNode("Coordinate");
Coordinate1736.point = new MFVec3f(new float[-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218]);
LineSet1735.coord = Coordinate1736;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1737 = createNode("ColorRGBA");
ColorRGBA1737.USE = "HAnimSegmentLineColorRGBA";
LineSet1735.color = ColorRGBA1737;

Shape1734.geometry = LineSet1735;

HAnimSegment1730.children[1] = Shape1734;

HAnimJoint1729.children = new MFNode();

HAnimJoint1729.children[0] = HAnimSegment1730;

HAnimJoint HAnimJoint1738 = createNode("HAnimJoint");
HAnimJoint1738.name = "r_carpometacarpal_2";
HAnimJoint1738.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1738.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1738.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1738.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1739 = createNode("HAnimSegment");
HAnimSegment1739.name = "r_metacarpal_2";
HAnimSegment1739.DEF = "hanim_r_metacarpal_2";
Transform Transform1740 = createNode("Transform");
Transform1740.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
Transform Transform1741 = createNode("Transform");
//Empty Transform
Shape Shape1742 = createNode("Shape");
Shape1742.USE = "HAnimJointShape";
Transform1741.child = new undefined();

Transform1741.child[0] = Shape1742;

Transform1740.children = new MFNode();

Transform1740.children[0] = Transform1741;

HAnimSegment1739.children = new MFNode();

HAnimSegment1739.children[0] = Transform1740;

Shape Shape1743 = createNode("Shape");
LineSet LineSet1744 = createNode("LineSet");
LineSet1744.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1745 = createNode("Coordinate");
Coordinate1745.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1744.coord = Coordinate1745;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1746 = createNode("ColorRGBA");
ColorRGBA1746.USE = "HAnimSegmentLineColorRGBA";
LineSet1744.color = ColorRGBA1746;

Shape1743.geometry = LineSet1744;

HAnimSegment1739.children[1] = Shape1743;

HAnimSite HAnimSite1747 = createNode("HAnimSite");
HAnimSite1747.name = "r_metacarpal_phalanx_2";
HAnimSite1747.DEF = "hanim_r_metacarpal_phalanx_2";
HAnimSite1747.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1748 = createNode("TouchSensor");
TouchSensor1748.description = "HAnimSite 78 r_metacarpal_phalanx_2";
HAnimSite1747.children = new MFNode();

HAnimSite1747.children[0] = TouchSensor1748;

Shape Shape1749 = createNode("Shape");
Shape1749.USE = "HAnimSiteShape";
HAnimSite1747.children[1] = Shape1749;

Billboard Billboard1750 = createNode("Billboard");
Shape Shape1751 = createNode("Shape");
Text Text1752 = createNode("Text");
Text1752.string = new MFString(new java.lang.String["78"]);
FontStyle FontStyle1753 = createNode("FontStyle");
FontStyle1753.size = 0.035;
Text1752.fontStyle = FontStyle1753;

Shape1751.geometry = Text1752;

Billboard1750.children = new MFNode();

Billboard1750.children[0] = Shape1751;

HAnimSite1747.children[2] = Billboard1750;

HAnimSegment1739.children[2] = HAnimSite1747;

HAnimJoint1738.children = new MFNode();

HAnimJoint1738.children[0] = HAnimSegment1739;

HAnimJoint HAnimJoint1754 = createNode("HAnimJoint");
HAnimJoint1754.name = "r_metacarpophalangeal_2";
HAnimJoint1754.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1754.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1754.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1754.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1755 = createNode("HAnimSegment");
HAnimSegment1755.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1755.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform1756 = createNode("Transform");
Transform1756.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform1757 = createNode("Transform");
//Empty Transform
Shape Shape1758 = createNode("Shape");
Shape1758.USE = "HAnimJointShape";
Transform1757.child = new undefined();

Transform1757.child[0] = Shape1758;

Transform1756.children = new MFNode();

Transform1756.children[0] = Transform1757;

HAnimSegment1755.children = new MFNode();

HAnimSegment1755.children[0] = Transform1756;

Shape Shape1759 = createNode("Shape");
LineSet LineSet1760 = createNode("LineSet");
LineSet1760.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1761 = createNode("Coordinate");
Coordinate1761.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1760.coord = Coordinate1761;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1762 = createNode("ColorRGBA");
ColorRGBA1762.USE = "HAnimSegmentLineColorRGBA";
LineSet1760.color = ColorRGBA1762;

Shape1759.geometry = LineSet1760;

HAnimSegment1755.children[1] = Shape1759;

HAnimJoint1754.children = new MFNode();

HAnimJoint1754.children[0] = HAnimSegment1755;

HAnimJoint HAnimJoint1763 = createNode("HAnimJoint");
HAnimJoint1763.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1763.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1763.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1763.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1763.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1764 = createNode("HAnimSegment");
HAnimSegment1764.name = "r_carpal_middle_phalanx_2";
HAnimSegment1764.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform1765 = createNode("Transform");
Transform1765.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform1766 = createNode("Transform");
//Empty Transform
Shape Shape1767 = createNode("Shape");
Shape1767.USE = "HAnimJointShape";
Transform1766.child = new undefined();

Transform1766.child[0] = Shape1767;

Transform1765.children = new MFNode();

Transform1765.children[0] = Transform1766;

HAnimSegment1764.children = new MFNode();

HAnimSegment1764.children[0] = Transform1765;

Shape Shape1768 = createNode("Shape");
LineSet LineSet1769 = createNode("LineSet");
LineSet1769.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1770 = createNode("Coordinate");
Coordinate1770.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1769.coord = Coordinate1770;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1771 = createNode("ColorRGBA");
ColorRGBA1771.USE = "HAnimSegmentLineColorRGBA";
LineSet1769.color = ColorRGBA1771;

Shape1768.geometry = LineSet1769;

HAnimSegment1764.children[1] = Shape1768;

HAnimJoint1763.children = new MFNode();

HAnimJoint1763.children[0] = HAnimSegment1764;

HAnimJoint HAnimJoint1772 = createNode("HAnimJoint");
HAnimJoint1772.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1772.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1772.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1772.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1772.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1763.children[1] = HAnimJoint1772;

HAnimJoint1754.children[1] = HAnimJoint1763;

HAnimJoint1738.children[1] = HAnimJoint1754;

HAnimJoint1729.children[1] = HAnimJoint1738;

HAnimJoint1673.children[2] = HAnimJoint1729;

HAnimJoint HAnimJoint1773 = createNode("HAnimJoint");
HAnimJoint1773.name = "r_midcarpal_3";
HAnimJoint1773.DEF = "hanim_r_midcarpal_3";
HAnimJoint1773.center = new SFVec3f(new float[-0.1809,0.7,-0.1067]);
HAnimJoint1773.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1773.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1774 = createNode("HAnimSegment");
HAnimSegment1774.name = "r_capitate";
HAnimSegment1774.DEF = "hanim_r_capitate";
Transform Transform1775 = createNode("Transform");
Transform1775.translation = new SFVec3f(new float[-0.1809,0.7,-0.1067]);
Transform Transform1776 = createNode("Transform");
//Empty Transform
Shape Shape1777 = createNode("Shape");
Shape1777.USE = "HAnimJointShape";
Transform1776.child = new undefined();

Transform1776.child[0] = Shape1777;

Transform1775.children = new MFNode();

Transform1775.children[0] = Transform1776;

HAnimSegment1774.children = new MFNode();

HAnimSegment1774.children[0] = Transform1775;

Shape Shape1778 = createNode("Shape");
LineSet LineSet1779 = createNode("LineSet");
LineSet1779.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1780 = createNode("Coordinate");
Coordinate1780.point = new MFVec3f(new float[-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468]);
LineSet1779.coord = Coordinate1780;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1781 = createNode("ColorRGBA");
ColorRGBA1781.USE = "HAnimSegmentLineColorRGBA";
LineSet1779.color = ColorRGBA1781;

Shape1778.geometry = LineSet1779;

HAnimSegment1774.children[1] = Shape1778;

HAnimJoint1773.children = new MFNode();

HAnimJoint1773.children[0] = HAnimSegment1774;

HAnimJoint HAnimJoint1782 = createNode("HAnimJoint");
HAnimJoint1782.name = "r_carpometacarpal_3";
HAnimJoint1782.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1782.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1782.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1782.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1783 = createNode("HAnimSegment");
HAnimSegment1783.name = "r_metacarpal_3";
HAnimSegment1783.DEF = "hanim_r_metacarpal_3";
Transform Transform1784 = createNode("Transform");
Transform1784.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform1785 = createNode("Transform");
//Empty Transform
Shape Shape1786 = createNode("Shape");
Shape1786.USE = "HAnimJointShape";
Transform1785.child = new undefined();

Transform1785.child[0] = Shape1786;

Transform1784.children = new MFNode();

Transform1784.children[0] = Transform1785;

HAnimSegment1783.children = new MFNode();

HAnimSegment1783.children[0] = Transform1784;

Shape Shape1787 = createNode("Shape");
LineSet LineSet1788 = createNode("LineSet");
LineSet1788.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1789 = createNode("Coordinate");
Coordinate1789.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1788.coord = Coordinate1789;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1790 = createNode("ColorRGBA");
ColorRGBA1790.USE = "HAnimSegmentLineColorRGBA";
LineSet1788.color = ColorRGBA1790;

Shape1787.geometry = LineSet1788;

HAnimSegment1783.children[1] = Shape1787;

HAnimSite HAnimSite1791 = createNode("HAnimSite");
HAnimSite1791.name = "r_metacarpal_phalanx_3";
HAnimSite1791.DEF = "hanim_r_metacarpal_phalanx_3";
TouchSensor TouchSensor1792 = createNode("TouchSensor");
TouchSensor1792.description = "HAnimSite 79 r_metacarpal_phalanx_3";
HAnimSite1791.children = new MFNode();

HAnimSite1791.children[0] = TouchSensor1792;

Shape Shape1793 = createNode("Shape");
Shape1793.USE = "HAnimSiteShape";
HAnimSite1791.children[1] = Shape1793;

Billboard Billboard1794 = createNode("Billboard");
Shape Shape1795 = createNode("Shape");
Text Text1796 = createNode("Text");
Text1796.string = new MFString(new java.lang.String["79"]);
FontStyle FontStyle1797 = createNode("FontStyle");
FontStyle1797.size = 0.035;
Text1796.fontStyle = FontStyle1797;

Shape1795.geometry = Text1796;

Billboard1794.children = new MFNode();

Billboard1794.children[0] = Shape1795;

HAnimSite1791.children[2] = Billboard1794;

HAnimSegment1783.children[2] = HAnimSite1791;

HAnimJoint1782.children = new MFNode();

HAnimJoint1782.children[0] = HAnimSegment1783;

HAnimJoint HAnimJoint1798 = createNode("HAnimJoint");
HAnimJoint1798.name = "r_metacarpophalangeal_3";
HAnimJoint1798.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1798.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1798.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1798.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1799 = createNode("HAnimSegment");
HAnimSegment1799.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1799.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform1800 = createNode("Transform");
Transform1800.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
Transform Transform1801 = createNode("Transform");
//Empty Transform
Shape Shape1802 = createNode("Shape");
Shape1802.USE = "HAnimJointShape";
Transform1801.child = new undefined();

Transform1801.child[0] = Shape1802;

Transform1800.children = new MFNode();

Transform1800.children[0] = Transform1801;

HAnimSegment1799.children = new MFNode();

HAnimSegment1799.children[0] = Transform1800;

Shape Shape1803 = createNode("Shape");
LineSet LineSet1804 = createNode("LineSet");
LineSet1804.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1805 = createNode("Coordinate");
Coordinate1805.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1804.coord = Coordinate1805;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1806 = createNode("ColorRGBA");
ColorRGBA1806.USE = "HAnimSegmentLineColorRGBA";
LineSet1804.color = ColorRGBA1806;

Shape1803.geometry = LineSet1804;

HAnimSegment1799.children[1] = Shape1803;

HAnimJoint1798.children = new MFNode();

HAnimJoint1798.children[0] = HAnimSegment1799;

HAnimJoint HAnimJoint1807 = createNode("HAnimJoint");
HAnimJoint1807.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1807.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1807.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1807.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1807.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1808 = createNode("HAnimSegment");
HAnimSegment1808.name = "r_carpal_middle_phalanx_3";
HAnimSegment1808.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform1809 = createNode("Transform");
Transform1809.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
Transform Transform1810 = createNode("Transform");
//Empty Transform
Shape Shape1811 = createNode("Shape");
Shape1811.USE = "HAnimJointShape";
Transform1810.child = new undefined();

Transform1810.child[0] = Shape1811;

Transform1809.children = new MFNode();

Transform1809.children[0] = Transform1810;

HAnimSegment1808.children = new MFNode();

HAnimSegment1808.children[0] = Transform1809;

Shape Shape1812 = createNode("Shape");
LineSet LineSet1813 = createNode("LineSet");
LineSet1813.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1814 = createNode("Coordinate");
Coordinate1814.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1813.coord = Coordinate1814;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1815 = createNode("ColorRGBA");
ColorRGBA1815.USE = "HAnimSegmentLineColorRGBA";
LineSet1813.color = ColorRGBA1815;

Shape1812.geometry = LineSet1813;

HAnimSegment1808.children[1] = Shape1812;

HAnimJoint1807.children = new MFNode();

HAnimJoint1807.children[0] = HAnimSegment1808;

HAnimJoint HAnimJoint1816 = createNode("HAnimJoint");
HAnimJoint1816.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1816.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1816.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1816.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1816.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1807.children[1] = HAnimJoint1816;

HAnimJoint1798.children[1] = HAnimJoint1807;

HAnimJoint1782.children[1] = HAnimJoint1798;

HAnimJoint1773.children[1] = HAnimJoint1782;

HAnimJoint1673.children[3] = HAnimJoint1773;

HAnimJoint HAnimJoint1817 = createNode("HAnimJoint");
HAnimJoint1817.name = "r_midcarpal_4_5";
HAnimJoint1817.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1817.center = new SFVec3f(new float[-0.1809,0.6973,-0.1276]);
HAnimJoint1817.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1817.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1818 = createNode("HAnimSegment");
HAnimSegment1818.name = "r_hamate";
HAnimSegment1818.DEF = "hanim_r_hamate";
Transform Transform1819 = createNode("Transform");
Transform1819.translation = new SFVec3f(new float[-0.1809,0.6973,-0.1276]);
Transform Transform1820 = createNode("Transform");
//Empty Transform
Shape Shape1821 = createNode("Shape");
Shape1821.USE = "HAnimJointShape";
Transform1820.child = new undefined();

Transform1820.child[0] = Shape1821;

Transform1819.children = new MFNode();

Transform1819.children[0] = Transform1820;

HAnimSegment1818.children = new MFNode();

HAnimSegment1818.children[0] = Transform1819;

Shape Shape1822 = createNode("Shape");
LineSet LineSet1823 = createNode("LineSet");
LineSet1823.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1824 = createNode("Coordinate");
Coordinate1824.point = new MFVec3f(new float[-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732]);
LineSet1823.coord = Coordinate1824;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1825 = createNode("ColorRGBA");
ColorRGBA1825.USE = "HAnimSegmentLineColorRGBA";
LineSet1823.color = ColorRGBA1825;

Shape1822.geometry = LineSet1823;

HAnimSegment1818.children[1] = Shape1822;

Shape Shape1826 = createNode("Shape");
LineSet LineSet1827 = createNode("LineSet");
LineSet1827.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1828 = createNode("Coordinate");
Coordinate1828.point = new MFVec3f(new float[-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975]);
LineSet1827.coord = Coordinate1828;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1829 = createNode("ColorRGBA");
ColorRGBA1829.USE = "HAnimSegmentLineColorRGBA";
LineSet1827.color = ColorRGBA1829;

Shape1826.geometry = LineSet1827;

HAnimSegment1818.children[2] = Shape1826;

HAnimJoint1817.children = new MFNode();

HAnimJoint1817.children[0] = HAnimSegment1818;

HAnimJoint HAnimJoint1830 = createNode("HAnimJoint");
HAnimJoint1830.name = "r_carpometacarpal_4";
HAnimJoint1830.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1830.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1830.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1830.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1831 = createNode("HAnimSegment");
HAnimSegment1831.name = "r_metacarpal_4";
HAnimSegment1831.DEF = "hanim_r_metacarpal_4";
Transform Transform1832 = createNode("Transform");
Transform1832.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
Transform Transform1833 = createNode("Transform");
//Empty Transform
Shape Shape1834 = createNode("Shape");
Shape1834.USE = "HAnimJointShape";
Transform1833.child = new undefined();

Transform1833.child[0] = Shape1834;

Transform1832.children = new MFNode();

Transform1832.children[0] = Transform1833;

HAnimSegment1831.children = new MFNode();

HAnimSegment1831.children[0] = Transform1832;

Shape Shape1835 = createNode("Shape");
LineSet LineSet1836 = createNode("LineSet");
LineSet1836.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1837 = createNode("Coordinate");
Coordinate1837.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1836.coord = Coordinate1837;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1838 = createNode("ColorRGBA");
ColorRGBA1838.USE = "HAnimSegmentLineColorRGBA";
LineSet1836.color = ColorRGBA1838;

Shape1835.geometry = LineSet1836;

HAnimSegment1831.children[1] = Shape1835;

HAnimJoint1830.children = new MFNode();

HAnimJoint1830.children[0] = HAnimSegment1831;

HAnimJoint HAnimJoint1839 = createNode("HAnimJoint");
HAnimJoint1839.name = "r_metacarpophalangeal_4";
HAnimJoint1839.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1839.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1839.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1839.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1840 = createNode("HAnimSegment");
HAnimSegment1840.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1840.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform1841 = createNode("Transform");
Transform1841.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform1842 = createNode("Transform");
//Empty Transform
Shape Shape1843 = createNode("Shape");
Shape1843.USE = "HAnimJointShape";
Transform1842.child = new undefined();

Transform1842.child[0] = Shape1843;

Transform1841.children = new MFNode();

Transform1841.children[0] = Transform1842;

HAnimSegment1840.children = new MFNode();

HAnimSegment1840.children[0] = Transform1841;

Shape Shape1844 = createNode("Shape");
LineSet LineSet1845 = createNode("LineSet");
LineSet1845.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1846 = createNode("Coordinate");
Coordinate1846.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1845.coord = Coordinate1846;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1847 = createNode("ColorRGBA");
ColorRGBA1847.USE = "HAnimSegmentLineColorRGBA";
LineSet1845.color = ColorRGBA1847;

Shape1844.geometry = LineSet1845;

HAnimSegment1840.children[1] = Shape1844;

HAnimJoint1839.children = new MFNode();

HAnimJoint1839.children[0] = HAnimSegment1840;

HAnimJoint HAnimJoint1848 = createNode("HAnimJoint");
HAnimJoint1848.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1848.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1848.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1848.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1848.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1849 = createNode("HAnimSegment");
HAnimSegment1849.name = "r_carpal_middle_phalanx_4";
HAnimSegment1849.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform1850 = createNode("Transform");
Transform1850.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform1851 = createNode("Transform");
//Empty Transform
Shape Shape1852 = createNode("Shape");
Shape1852.USE = "HAnimJointShape";
Transform1851.child = new undefined();

Transform1851.child[0] = Shape1852;

Transform1850.children = new MFNode();

Transform1850.children[0] = Transform1851;

HAnimSegment1849.children = new MFNode();

HAnimSegment1849.children[0] = Transform1850;

Shape Shape1853 = createNode("Shape");
LineSet LineSet1854 = createNode("LineSet");
LineSet1854.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1855 = createNode("Coordinate");
Coordinate1855.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1854.coord = Coordinate1855;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1856 = createNode("ColorRGBA");
ColorRGBA1856.USE = "HAnimSegmentLineColorRGBA";
LineSet1854.color = ColorRGBA1856;

Shape1853.geometry = LineSet1854;

HAnimSegment1849.children[1] = Shape1853;

HAnimJoint1848.children = new MFNode();

HAnimJoint1848.children[0] = HAnimSegment1849;

HAnimJoint HAnimJoint1857 = createNode("HAnimJoint");
HAnimJoint1857.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1857.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1857.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1857.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1857.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1848.children[1] = HAnimJoint1857;

HAnimJoint1839.children[1] = HAnimJoint1848;

HAnimJoint1830.children[1] = HAnimJoint1839;

HAnimJoint1817.children[1] = HAnimJoint1830;

HAnimJoint HAnimJoint1858 = createNode("HAnimJoint");
HAnimJoint1858.name = "r_carpometacarpal_5";
HAnimJoint1858.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1858.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1858.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1858.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1859 = createNode("HAnimSegment");
HAnimSegment1859.name = "r_metacarpal_5";
HAnimSegment1859.DEF = "hanim_r_metacarpal_5";
Transform Transform1860 = createNode("Transform");
Transform1860.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
Transform Transform1861 = createNode("Transform");
//Empty Transform
Shape Shape1862 = createNode("Shape");
Shape1862.USE = "HAnimJointShape";
Transform1861.child = new undefined();

Transform1861.child[0] = Shape1862;

Transform1860.children = new MFNode();

Transform1860.children[0] = Transform1861;

HAnimSegment1859.children = new MFNode();

HAnimSegment1859.children[0] = Transform1860;

Shape Shape1863 = createNode("Shape");
LineSet LineSet1864 = createNode("LineSet");
LineSet1864.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1865 = createNode("Coordinate");
Coordinate1865.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1864.coord = Coordinate1865;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1866 = createNode("ColorRGBA");
ColorRGBA1866.USE = "HAnimSegmentLineColorRGBA";
LineSet1864.color = ColorRGBA1866;

Shape1863.geometry = LineSet1864;

HAnimSegment1859.children[1] = Shape1863;

HAnimSite HAnimSite1867 = createNode("HAnimSite");
HAnimSite1867.name = "r_metacarpal_phalanx_5";
HAnimSite1867.DEF = "hanim_r_metacarpal_phalanx_5";
HAnimSite1867.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1868 = createNode("TouchSensor");
TouchSensor1868.description = "HAnimSite 80 r_metacarpal_phalanx_5";
HAnimSite1867.children = new MFNode();

HAnimSite1867.children[0] = TouchSensor1868;

Shape Shape1869 = createNode("Shape");
Shape1869.USE = "HAnimSiteShape";
HAnimSite1867.children[1] = Shape1869;

Billboard Billboard1870 = createNode("Billboard");
Shape Shape1871 = createNode("Shape");
Text Text1872 = createNode("Text");
Text1872.string = new MFString(new java.lang.String["80"]);
FontStyle FontStyle1873 = createNode("FontStyle");
FontStyle1873.size = 0.035;
Text1872.fontStyle = FontStyle1873;

Shape1871.geometry = Text1872;

Billboard1870.children = new MFNode();

Billboard1870.children[0] = Shape1871;

HAnimSite1867.children[2] = Billboard1870;

HAnimSegment1859.children[2] = HAnimSite1867;

HAnimJoint1858.children = new MFNode();

HAnimJoint1858.children[0] = HAnimSegment1859;

HAnimJoint HAnimJoint1874 = createNode("HAnimJoint");
HAnimJoint1874.name = "r_metacarpophalangeal_5";
HAnimJoint1874.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1874.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1874.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1874.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1875 = createNode("HAnimSegment");
HAnimSegment1875.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1875.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform1876 = createNode("Transform");
Transform1876.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
Transform Transform1877 = createNode("Transform");
//Empty Transform
Shape Shape1878 = createNode("Shape");
Shape1878.USE = "HAnimJointShape";
Transform1877.child = new undefined();

Transform1877.child[0] = Shape1878;

Transform1876.children = new MFNode();

Transform1876.children[0] = Transform1877;

HAnimSegment1875.children = new MFNode();

HAnimSegment1875.children[0] = Transform1876;

Shape Shape1879 = createNode("Shape");
LineSet LineSet1880 = createNode("LineSet");
LineSet1880.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1881 = createNode("Coordinate");
Coordinate1881.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1880.coord = Coordinate1881;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1882 = createNode("ColorRGBA");
ColorRGBA1882.USE = "HAnimSegmentLineColorRGBA";
LineSet1880.color = ColorRGBA1882;

Shape1879.geometry = LineSet1880;

HAnimSegment1875.children[1] = Shape1879;

HAnimJoint1874.children = new MFNode();

HAnimJoint1874.children[0] = HAnimSegment1875;

HAnimJoint HAnimJoint1883 = createNode("HAnimJoint");
HAnimJoint1883.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1883.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1883.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1883.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1883.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1884 = createNode("HAnimSegment");
HAnimSegment1884.name = "r_carpal_middle_phalanx_5";
HAnimSegment1884.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform1885 = createNode("Transform");
Transform1885.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
Transform Transform1886 = createNode("Transform");
//Empty Transform
Shape Shape1887 = createNode("Shape");
Shape1887.USE = "HAnimJointShape";
Transform1886.child = new undefined();

Transform1886.child[0] = Shape1887;

Transform1885.children = new MFNode();

Transform1885.children[0] = Transform1886;

HAnimSegment1884.children = new MFNode();

HAnimSegment1884.children[0] = Transform1885;

Shape Shape1888 = createNode("Shape");
LineSet LineSet1889 = createNode("LineSet");
LineSet1889.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1890 = createNode("Coordinate");
Coordinate1890.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1889.coord = Coordinate1890;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1891 = createNode("ColorRGBA");
ColorRGBA1891.USE = "HAnimSegmentLineColorRGBA";
LineSet1889.color = ColorRGBA1891;

Shape1888.geometry = LineSet1889;

HAnimSegment1884.children[1] = Shape1888;

HAnimJoint1883.children = new MFNode();

HAnimJoint1883.children[0] = HAnimSegment1884;

HAnimJoint HAnimJoint1892 = createNode("HAnimJoint");
HAnimJoint1892.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1892.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1892.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1892.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1892.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1883.children[1] = HAnimJoint1892;

HAnimJoint1874.children[1] = HAnimJoint1883;

HAnimJoint1858.children[1] = HAnimJoint1874;

HAnimJoint1817.children[2] = HAnimJoint1858;

HAnimJoint1673.children[4] = HAnimJoint1817;

HAnimJoint1636.children[1] = HAnimJoint1673;

HAnimJoint1613.children[1] = HAnimJoint1636;

HAnimJoint1604.children[1] = HAnimJoint1613;

HAnimJoint1560.children[1] = HAnimJoint1604;

HAnimJoint995.children[3] = HAnimJoint1560;

HAnimJoint986.children[1] = HAnimJoint995;

HAnimJoint977.children[1] = HAnimJoint986;

HAnimJoint968.children[1] = HAnimJoint977;

HAnimJoint952.children[1] = HAnimJoint968;

HAnimJoint915.children[1] = HAnimJoint952;

HAnimJoint906.children[1] = HAnimJoint915;

HAnimJoint897.children[1] = HAnimJoint906;

HAnimJoint874.children[1] = HAnimJoint897;

HAnimJoint858.children[1] = HAnimJoint874;

HAnimJoint849.children[1] = HAnimJoint858;

HAnimJoint840.children[1] = HAnimJoint849;

HAnimJoint831.children[1] = HAnimJoint840;

HAnimJoint801.children[1] = HAnimJoint831;

HAnimJoint792.children[1] = HAnimJoint801;

HAnimJoint783.children[1] = HAnimJoint792;

HAnimJoint753.children[1] = HAnimJoint783;

HAnimJoint47.children[2] = HAnimJoint753;

HAnimHumanoid38.joints[1] = HAnimJoint47;

HAnimJoint HAnimJoint1893 = createNode("HAnimJoint");
HAnimJoint1893.USE = "hanim_humanoid_root";
HAnimHumanoid38.joints[2] = HAnimJoint1893;

HAnimJoint HAnimJoint1894 = createNode("HAnimJoint");
HAnimJoint1894.USE = "hanim_sacroiliac";
HAnimHumanoid38.joints[3] = HAnimJoint1894;

HAnimJoint HAnimJoint1895 = createNode("HAnimJoint");
HAnimJoint1895.USE = "hanim_l_hip";
HAnimHumanoid38.joints[4] = HAnimJoint1895;

HAnimJoint HAnimJoint1896 = createNode("HAnimJoint");
HAnimJoint1896.USE = "hanim_l_knee";
HAnimHumanoid38.joints[5] = HAnimJoint1896;

HAnimJoint HAnimJoint1897 = createNode("HAnimJoint");
HAnimJoint1897.USE = "hanim_l_talocrural";
HAnimHumanoid38.joints[6] = HAnimJoint1897;

HAnimJoint HAnimJoint1898 = createNode("HAnimJoint");
HAnimJoint1898.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid38.joints[7] = HAnimJoint1898;

HAnimJoint HAnimJoint1899 = createNode("HAnimJoint");
HAnimJoint1899.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid38.joints[8] = HAnimJoint1899;

HAnimJoint HAnimJoint1900 = createNode("HAnimJoint");
HAnimJoint1900.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid38.joints[9] = HAnimJoint1900;

HAnimJoint HAnimJoint1901 = createNode("HAnimJoint");
HAnimJoint1901.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid38.joints[10] = HAnimJoint1901;

HAnimJoint HAnimJoint1902 = createNode("HAnimJoint");
HAnimJoint1902.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid38.joints[11] = HAnimJoint1902;

HAnimJoint HAnimJoint1903 = createNode("HAnimJoint");
HAnimJoint1903.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid38.joints[12] = HAnimJoint1903;

HAnimJoint HAnimJoint1904 = createNode("HAnimJoint");
HAnimJoint1904.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid38.joints[13] = HAnimJoint1904;

HAnimJoint HAnimJoint1905 = createNode("HAnimJoint");
HAnimJoint1905.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid38.joints[14] = HAnimJoint1905;

HAnimJoint HAnimJoint1906 = createNode("HAnimJoint");
HAnimJoint1906.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[15] = HAnimJoint1906;

HAnimJoint HAnimJoint1907 = createNode("HAnimJoint");
HAnimJoint1907.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid38.joints[16] = HAnimJoint1907;

HAnimJoint HAnimJoint1908 = createNode("HAnimJoint");
HAnimJoint1908.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid38.joints[17] = HAnimJoint1908;

HAnimJoint HAnimJoint1909 = createNode("HAnimJoint");
HAnimJoint1909.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid38.joints[18] = HAnimJoint1909;

HAnimJoint HAnimJoint1910 = createNode("HAnimJoint");
HAnimJoint1910.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid38.joints[19] = HAnimJoint1910;

HAnimJoint HAnimJoint1911 = createNode("HAnimJoint");
HAnimJoint1911.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[20] = HAnimJoint1911;

HAnimJoint HAnimJoint1912 = createNode("HAnimJoint");
HAnimJoint1912.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid38.joints[21] = HAnimJoint1912;

HAnimJoint HAnimJoint1913 = createNode("HAnimJoint");
HAnimJoint1913.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid38.joints[22] = HAnimJoint1913;

HAnimJoint HAnimJoint1914 = createNode("HAnimJoint");
HAnimJoint1914.USE = "hanim_l_transversetarsal";
HAnimHumanoid38.joints[23] = HAnimJoint1914;

HAnimJoint HAnimJoint1915 = createNode("HAnimJoint");
HAnimJoint1915.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid38.joints[24] = HAnimJoint1915;

HAnimJoint HAnimJoint1916 = createNode("HAnimJoint");
HAnimJoint1916.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid38.joints[25] = HAnimJoint1916;

HAnimJoint HAnimJoint1917 = createNode("HAnimJoint");
HAnimJoint1917.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[26] = HAnimJoint1917;

HAnimJoint HAnimJoint1918 = createNode("HAnimJoint");
HAnimJoint1918.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid38.joints[27] = HAnimJoint1918;

HAnimJoint HAnimJoint1919 = createNode("HAnimJoint");
HAnimJoint1919.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid38.joints[28] = HAnimJoint1919;

HAnimJoint HAnimJoint1920 = createNode("HAnimJoint");
HAnimJoint1920.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid38.joints[29] = HAnimJoint1920;

HAnimJoint HAnimJoint1921 = createNode("HAnimJoint");
HAnimJoint1921.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[30] = HAnimJoint1921;

HAnimJoint HAnimJoint1922 = createNode("HAnimJoint");
HAnimJoint1922.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid38.joints[31] = HAnimJoint1922;

HAnimJoint HAnimJoint1923 = createNode("HAnimJoint");
HAnimJoint1923.USE = "hanim_r_hip";
HAnimHumanoid38.joints[32] = HAnimJoint1923;

HAnimJoint HAnimJoint1924 = createNode("HAnimJoint");
HAnimJoint1924.USE = "hanim_r_knee";
HAnimHumanoid38.joints[33] = HAnimJoint1924;

HAnimJoint HAnimJoint1925 = createNode("HAnimJoint");
HAnimJoint1925.USE = "hanim_r_talocrural";
HAnimHumanoid38.joints[34] = HAnimJoint1925;

HAnimJoint HAnimJoint1926 = createNode("HAnimJoint");
HAnimJoint1926.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid38.joints[35] = HAnimJoint1926;

HAnimJoint HAnimJoint1927 = createNode("HAnimJoint");
HAnimJoint1927.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid38.joints[36] = HAnimJoint1927;

HAnimJoint HAnimJoint1928 = createNode("HAnimJoint");
HAnimJoint1928.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid38.joints[37] = HAnimJoint1928;

HAnimJoint HAnimJoint1929 = createNode("HAnimJoint");
HAnimJoint1929.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid38.joints[38] = HAnimJoint1929;

HAnimJoint HAnimJoint1930 = createNode("HAnimJoint");
HAnimJoint1930.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid38.joints[39] = HAnimJoint1930;

HAnimJoint HAnimJoint1931 = createNode("HAnimJoint");
HAnimJoint1931.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid38.joints[40] = HAnimJoint1931;

HAnimJoint HAnimJoint1932 = createNode("HAnimJoint");
HAnimJoint1932.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid38.joints[41] = HAnimJoint1932;

HAnimJoint HAnimJoint1933 = createNode("HAnimJoint");
HAnimJoint1933.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid38.joints[42] = HAnimJoint1933;

HAnimJoint HAnimJoint1934 = createNode("HAnimJoint");
HAnimJoint1934.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[43] = HAnimJoint1934;

HAnimJoint HAnimJoint1935 = createNode("HAnimJoint");
HAnimJoint1935.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid38.joints[44] = HAnimJoint1935;

HAnimJoint HAnimJoint1936 = createNode("HAnimJoint");
HAnimJoint1936.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid38.joints[45] = HAnimJoint1936;

HAnimJoint HAnimJoint1937 = createNode("HAnimJoint");
HAnimJoint1937.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid38.joints[46] = HAnimJoint1937;

HAnimJoint HAnimJoint1938 = createNode("HAnimJoint");
HAnimJoint1938.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid38.joints[47] = HAnimJoint1938;

HAnimJoint HAnimJoint1939 = createNode("HAnimJoint");
HAnimJoint1939.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[48] = HAnimJoint1939;

HAnimJoint HAnimJoint1940 = createNode("HAnimJoint");
HAnimJoint1940.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid38.joints[49] = HAnimJoint1940;

HAnimJoint HAnimJoint1941 = createNode("HAnimJoint");
HAnimJoint1941.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid38.joints[50] = HAnimJoint1941;

HAnimJoint HAnimJoint1942 = createNode("HAnimJoint");
HAnimJoint1942.USE = "hanim_r_transversetarsal";
HAnimHumanoid38.joints[51] = HAnimJoint1942;

HAnimJoint HAnimJoint1943 = createNode("HAnimJoint");
HAnimJoint1943.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid38.joints[52] = HAnimJoint1943;

HAnimJoint HAnimJoint1944 = createNode("HAnimJoint");
HAnimJoint1944.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid38.joints[53] = HAnimJoint1944;

HAnimJoint HAnimJoint1945 = createNode("HAnimJoint");
HAnimJoint1945.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[54] = HAnimJoint1945;

HAnimJoint HAnimJoint1946 = createNode("HAnimJoint");
HAnimJoint1946.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid38.joints[55] = HAnimJoint1946;

HAnimJoint HAnimJoint1947 = createNode("HAnimJoint");
HAnimJoint1947.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid38.joints[56] = HAnimJoint1947;

HAnimJoint HAnimJoint1948 = createNode("HAnimJoint");
HAnimJoint1948.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid38.joints[57] = HAnimJoint1948;

HAnimJoint HAnimJoint1949 = createNode("HAnimJoint");
HAnimJoint1949.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[58] = HAnimJoint1949;

HAnimJoint HAnimJoint1950 = createNode("HAnimJoint");
HAnimJoint1950.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid38.joints[59] = HAnimJoint1950;

HAnimJoint HAnimJoint1951 = createNode("HAnimJoint");
HAnimJoint1951.USE = "hanim_vl5";
HAnimHumanoid38.joints[60] = HAnimJoint1951;

HAnimJoint HAnimJoint1952 = createNode("HAnimJoint");
HAnimJoint1952.USE = "hanim_vl4";
HAnimHumanoid38.joints[61] = HAnimJoint1952;

HAnimJoint HAnimJoint1953 = createNode("HAnimJoint");
HAnimJoint1953.USE = "hanim_vl3";
HAnimHumanoid38.joints[62] = HAnimJoint1953;

HAnimJoint HAnimJoint1954 = createNode("HAnimJoint");
HAnimJoint1954.USE = "hanim_vl2";
HAnimHumanoid38.joints[63] = HAnimJoint1954;

HAnimJoint HAnimJoint1955 = createNode("HAnimJoint");
HAnimJoint1955.USE = "hanim_vl1";
HAnimHumanoid38.joints[64] = HAnimJoint1955;

HAnimJoint HAnimJoint1956 = createNode("HAnimJoint");
HAnimJoint1956.USE = "hanim_vt12";
HAnimHumanoid38.joints[65] = HAnimJoint1956;

HAnimJoint HAnimJoint1957 = createNode("HAnimJoint");
HAnimJoint1957.USE = "hanim_vt11";
HAnimHumanoid38.joints[66] = HAnimJoint1957;

HAnimJoint HAnimJoint1958 = createNode("HAnimJoint");
HAnimJoint1958.USE = "hanim_vt10";
HAnimHumanoid38.joints[67] = HAnimJoint1958;

HAnimJoint HAnimJoint1959 = createNode("HAnimJoint");
HAnimJoint1959.USE = "hanim_vt9";
HAnimHumanoid38.joints[68] = HAnimJoint1959;

HAnimJoint HAnimJoint1960 = createNode("HAnimJoint");
HAnimJoint1960.USE = "hanim_vt8";
HAnimHumanoid38.joints[69] = HAnimJoint1960;

HAnimJoint HAnimJoint1961 = createNode("HAnimJoint");
HAnimJoint1961.USE = "hanim_vt7";
HAnimHumanoid38.joints[70] = HAnimJoint1961;

HAnimJoint HAnimJoint1962 = createNode("HAnimJoint");
HAnimJoint1962.USE = "hanim_vt6";
HAnimHumanoid38.joints[71] = HAnimJoint1962;

HAnimJoint HAnimJoint1963 = createNode("HAnimJoint");
HAnimJoint1963.USE = "hanim_vt5";
HAnimHumanoid38.joints[72] = HAnimJoint1963;

HAnimJoint HAnimJoint1964 = createNode("HAnimJoint");
HAnimJoint1964.USE = "hanim_vt4";
HAnimHumanoid38.joints[73] = HAnimJoint1964;

HAnimJoint HAnimJoint1965 = createNode("HAnimJoint");
HAnimJoint1965.USE = "hanim_vt3";
HAnimHumanoid38.joints[74] = HAnimJoint1965;

HAnimJoint HAnimJoint1966 = createNode("HAnimJoint");
HAnimJoint1966.USE = "hanim_vt2";
HAnimHumanoid38.joints[75] = HAnimJoint1966;

HAnimJoint HAnimJoint1967 = createNode("HAnimJoint");
HAnimJoint1967.USE = "hanim_vt1";
HAnimHumanoid38.joints[76] = HAnimJoint1967;

HAnimJoint HAnimJoint1968 = createNode("HAnimJoint");
HAnimJoint1968.USE = "hanim_vc7";
HAnimHumanoid38.joints[77] = HAnimJoint1968;

HAnimJoint HAnimJoint1969 = createNode("HAnimJoint");
HAnimJoint1969.USE = "hanim_vc6";
HAnimHumanoid38.joints[78] = HAnimJoint1969;

HAnimJoint HAnimJoint1970 = createNode("HAnimJoint");
HAnimJoint1970.USE = "hanim_vc5";
HAnimHumanoid38.joints[79] = HAnimJoint1970;

HAnimJoint HAnimJoint1971 = createNode("HAnimJoint");
HAnimJoint1971.USE = "hanim_vc4";
HAnimHumanoid38.joints[80] = HAnimJoint1971;

HAnimJoint HAnimJoint1972 = createNode("HAnimJoint");
HAnimJoint1972.USE = "hanim_vc3";
HAnimHumanoid38.joints[81] = HAnimJoint1972;

HAnimJoint HAnimJoint1973 = createNode("HAnimJoint");
HAnimJoint1973.USE = "hanim_vc2";
HAnimHumanoid38.joints[82] = HAnimJoint1973;

HAnimJoint HAnimJoint1974 = createNode("HAnimJoint");
HAnimJoint1974.USE = "hanim_vc1";
HAnimHumanoid38.joints[83] = HAnimJoint1974;

HAnimJoint HAnimJoint1975 = createNode("HAnimJoint");
HAnimJoint1975.USE = "hanim_skullbase";
HAnimHumanoid38.joints[84] = HAnimJoint1975;

HAnimJoint HAnimJoint1976 = createNode("HAnimJoint");
HAnimJoint1976.USE = "hanim_l_eyelid_joint";
HAnimHumanoid38.joints[85] = HAnimJoint1976;

HAnimJoint HAnimJoint1977 = createNode("HAnimJoint");
HAnimJoint1977.USE = "hanim_r_eyelid_joint";
HAnimHumanoid38.joints[86] = HAnimJoint1977;

HAnimJoint HAnimJoint1978 = createNode("HAnimJoint");
HAnimJoint1978.USE = "hanim_l_eyeball_joint";
HAnimHumanoid38.joints[87] = HAnimJoint1978;

HAnimJoint HAnimJoint1979 = createNode("HAnimJoint");
HAnimJoint1979.USE = "hanim_r_eyeball_joint";
HAnimHumanoid38.joints[88] = HAnimJoint1979;

HAnimJoint HAnimJoint1980 = createNode("HAnimJoint");
HAnimJoint1980.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid38.joints[89] = HAnimJoint1980;

HAnimJoint HAnimJoint1981 = createNode("HAnimJoint");
HAnimJoint1981.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid38.joints[90] = HAnimJoint1981;

HAnimJoint HAnimJoint1982 = createNode("HAnimJoint");
HAnimJoint1982.USE = "hanim_temporomandibular";
HAnimHumanoid38.joints[91] = HAnimJoint1982;

HAnimJoint HAnimJoint1983 = createNode("HAnimJoint");
HAnimJoint1983.USE = "hanim_l_sternoclavicular";
HAnimHumanoid38.joints[92] = HAnimJoint1983;

HAnimJoint HAnimJoint1984 = createNode("HAnimJoint");
HAnimJoint1984.USE = "hanim_l_acromioclavicular";
HAnimHumanoid38.joints[93] = HAnimJoint1984;

HAnimJoint HAnimJoint1985 = createNode("HAnimJoint");
HAnimJoint1985.USE = "hanim_l_shoulder";
HAnimHumanoid38.joints[94] = HAnimJoint1985;

HAnimJoint HAnimJoint1986 = createNode("HAnimJoint");
HAnimJoint1986.USE = "hanim_l_elbow";
HAnimHumanoid38.joints[95] = HAnimJoint1986;

HAnimJoint HAnimJoint1987 = createNode("HAnimJoint");
HAnimJoint1987.USE = "hanim_l_radiocarpal";
HAnimHumanoid38.joints[96] = HAnimJoint1987;

HAnimJoint HAnimJoint1988 = createNode("HAnimJoint");
HAnimJoint1988.USE = "hanim_l_midcarpal_1";
HAnimHumanoid38.joints[97] = HAnimJoint1988;

HAnimJoint HAnimJoint1989 = createNode("HAnimJoint");
HAnimJoint1989.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid38.joints[98] = HAnimJoint1989;

HAnimJoint HAnimJoint1990 = createNode("HAnimJoint");
HAnimJoint1990.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid38.joints[99] = HAnimJoint1990;

HAnimJoint HAnimJoint1991 = createNode("HAnimJoint");
HAnimJoint1991.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid38.joints[100] = HAnimJoint1991;

HAnimJoint HAnimJoint1992 = createNode("HAnimJoint");
HAnimJoint1992.USE = "hanim_l_midcarpal_2";
HAnimHumanoid38.joints[101] = HAnimJoint1992;

HAnimJoint HAnimJoint1993 = createNode("HAnimJoint");
HAnimJoint1993.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid38.joints[102] = HAnimJoint1993;

HAnimJoint HAnimJoint1994 = createNode("HAnimJoint");
HAnimJoint1994.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid38.joints[103] = HAnimJoint1994;

HAnimJoint HAnimJoint1995 = createNode("HAnimJoint");
HAnimJoint1995.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[104] = HAnimJoint1995;

HAnimJoint HAnimJoint1996 = createNode("HAnimJoint");
HAnimJoint1996.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid38.joints[105] = HAnimJoint1996;

HAnimJoint HAnimJoint1997 = createNode("HAnimJoint");
HAnimJoint1997.USE = "hanim_l_midcarpal_3";
HAnimHumanoid38.joints[106] = HAnimJoint1997;

HAnimJoint HAnimJoint1998 = createNode("HAnimJoint");
HAnimJoint1998.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid38.joints[107] = HAnimJoint1998;

HAnimJoint HAnimJoint1999 = createNode("HAnimJoint");
HAnimJoint1999.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid38.joints[108] = HAnimJoint1999;

HAnimJoint HAnimJoint2000 = createNode("HAnimJoint");
HAnimJoint2000.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[109] = HAnimJoint2000;

HAnimJoint HAnimJoint2001 = createNode("HAnimJoint");
HAnimJoint2001.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid38.joints[110] = HAnimJoint2001;

HAnimJoint HAnimJoint2002 = createNode("HAnimJoint");
HAnimJoint2002.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid38.joints[111] = HAnimJoint2002;

HAnimJoint HAnimJoint2003 = createNode("HAnimJoint");
HAnimJoint2003.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid38.joints[112] = HAnimJoint2003;

HAnimJoint HAnimJoint2004 = createNode("HAnimJoint");
HAnimJoint2004.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid38.joints[113] = HAnimJoint2004;

HAnimJoint HAnimJoint2005 = createNode("HAnimJoint");
HAnimJoint2005.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[114] = HAnimJoint2005;

HAnimJoint HAnimJoint2006 = createNode("HAnimJoint");
HAnimJoint2006.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid38.joints[115] = HAnimJoint2006;

HAnimJoint HAnimJoint2007 = createNode("HAnimJoint");
HAnimJoint2007.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid38.joints[116] = HAnimJoint2007;

HAnimJoint HAnimJoint2008 = createNode("HAnimJoint");
HAnimJoint2008.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid38.joints[117] = HAnimJoint2008;

HAnimJoint HAnimJoint2009 = createNode("HAnimJoint");
HAnimJoint2009.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[118] = HAnimJoint2009;

HAnimJoint HAnimJoint2010 = createNode("HAnimJoint");
HAnimJoint2010.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid38.joints[119] = HAnimJoint2010;

HAnimJoint HAnimJoint2011 = createNode("HAnimJoint");
HAnimJoint2011.USE = "hanim_r_sternoclavicular";
HAnimHumanoid38.joints[120] = HAnimJoint2011;

HAnimJoint HAnimJoint2012 = createNode("HAnimJoint");
HAnimJoint2012.USE = "hanim_r_acromioclavicular";
HAnimHumanoid38.joints[121] = HAnimJoint2012;

HAnimJoint HAnimJoint2013 = createNode("HAnimJoint");
HAnimJoint2013.USE = "hanim_r_shoulder";
HAnimHumanoid38.joints[122] = HAnimJoint2013;

HAnimJoint HAnimJoint2014 = createNode("HAnimJoint");
HAnimJoint2014.USE = "hanim_r_elbow";
HAnimHumanoid38.joints[123] = HAnimJoint2014;

HAnimJoint HAnimJoint2015 = createNode("HAnimJoint");
HAnimJoint2015.USE = "hanim_r_radiocarpal";
HAnimHumanoid38.joints[124] = HAnimJoint2015;

HAnimJoint HAnimJoint2016 = createNode("HAnimJoint");
HAnimJoint2016.USE = "hanim_r_midcarpal_1";
HAnimHumanoid38.joints[125] = HAnimJoint2016;

HAnimJoint HAnimJoint2017 = createNode("HAnimJoint");
HAnimJoint2017.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid38.joints[126] = HAnimJoint2017;

HAnimJoint HAnimJoint2018 = createNode("HAnimJoint");
HAnimJoint2018.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid38.joints[127] = HAnimJoint2018;

HAnimJoint HAnimJoint2019 = createNode("HAnimJoint");
HAnimJoint2019.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid38.joints[128] = HAnimJoint2019;

HAnimJoint HAnimJoint2020 = createNode("HAnimJoint");
HAnimJoint2020.USE = "hanim_r_midcarpal_2";
HAnimHumanoid38.joints[129] = HAnimJoint2020;

HAnimJoint HAnimJoint2021 = createNode("HAnimJoint");
HAnimJoint2021.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid38.joints[130] = HAnimJoint2021;

HAnimJoint HAnimJoint2022 = createNode("HAnimJoint");
HAnimJoint2022.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid38.joints[131] = HAnimJoint2022;

HAnimJoint HAnimJoint2023 = createNode("HAnimJoint");
HAnimJoint2023.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[132] = HAnimJoint2023;

HAnimJoint HAnimJoint2024 = createNode("HAnimJoint");
HAnimJoint2024.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid38.joints[133] = HAnimJoint2024;

HAnimJoint HAnimJoint2025 = createNode("HAnimJoint");
HAnimJoint2025.USE = "hanim_r_midcarpal_3";
HAnimHumanoid38.joints[134] = HAnimJoint2025;

HAnimJoint HAnimJoint2026 = createNode("HAnimJoint");
HAnimJoint2026.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid38.joints[135] = HAnimJoint2026;

HAnimJoint HAnimJoint2027 = createNode("HAnimJoint");
HAnimJoint2027.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid38.joints[136] = HAnimJoint2027;

HAnimJoint HAnimJoint2028 = createNode("HAnimJoint");
HAnimJoint2028.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[137] = HAnimJoint2028;

HAnimJoint HAnimJoint2029 = createNode("HAnimJoint");
HAnimJoint2029.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid38.joints[138] = HAnimJoint2029;

HAnimJoint HAnimJoint2030 = createNode("HAnimJoint");
HAnimJoint2030.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid38.joints[139] = HAnimJoint2030;

HAnimJoint HAnimJoint2031 = createNode("HAnimJoint");
HAnimJoint2031.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid38.joints[140] = HAnimJoint2031;

HAnimJoint HAnimJoint2032 = createNode("HAnimJoint");
HAnimJoint2032.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid38.joints[141] = HAnimJoint2032;

HAnimJoint HAnimJoint2033 = createNode("HAnimJoint");
HAnimJoint2033.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[142] = HAnimJoint2033;

HAnimJoint HAnimJoint2034 = createNode("HAnimJoint");
HAnimJoint2034.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid38.joints[143] = HAnimJoint2034;

HAnimJoint HAnimJoint2035 = createNode("HAnimJoint");
HAnimJoint2035.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid38.joints[144] = HAnimJoint2035;

HAnimJoint HAnimJoint2036 = createNode("HAnimJoint");
HAnimJoint2036.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid38.joints[145] = HAnimJoint2036;

HAnimJoint HAnimJoint2037 = createNode("HAnimJoint");
HAnimJoint2037.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[146] = HAnimJoint2037;

HAnimJoint HAnimJoint2038 = createNode("HAnimJoint");
HAnimJoint2038.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid38.joints[147] = HAnimJoint2038;

children[4] = HAnimHumanoid38;

}
