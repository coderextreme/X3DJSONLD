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
meta3.content = "JohnJoint20.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint20.x3d";
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
meta7.content = "20 Jan 2023";
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
ImageTexture49.url = new MFString(new java.lang.String["../resources/images/zBlueSpiralBkg2.gif","../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
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
HAnimDisplacer HAnimDisplacer54 = createNode("HAnimDisplacer");
HAnimDisplacer54.name = "sacrum_feature";
HAnimDisplacer54.coordIndex = new MFInt32(new int[0]);
HAnimDisplacer54.displacements = new MFVec3f(new float[0,0,0]);
HAnimSegment53.displacers = new MFNode();

HAnimSegment53.displacers[0] = HAnimDisplacer54;

HAnimDisplacer HAnimDisplacer55 = createNode("HAnimDisplacer");
HAnimDisplacer55.name = "sacrum_config";
HAnimDisplacer55.coordIndex = new MFInt32(new int[0]);
HAnimDisplacer55.displacements = new MFVec3f(new float[0,0,0]);
HAnimSegment53.displacers[1] = HAnimDisplacer55;

Transform Transform56 = createNode("Transform");
//Empty Transform
Transform Transform57 = createNode("Transform");
//Empty Transform
Shape Shape58 = createNode("Shape");
Shape58.USE = "HAnimJointShape";
Transform57.child = new undefined();

Transform57.child[0] = Shape58;

Transform56.children = new MFNode();

Transform56.children[0] = Transform57;

HAnimSegment53.children[2] = Transform56;

Shape Shape59 = createNode("Shape");
LineSet LineSet60 = createNode("LineSet");
LineSet60.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet60.coord = Coordinate61;

//from humanoid_root to sacroiliac vertices 2
ColorRGBA ColorRGBA62 = createNode("ColorRGBA");
ColorRGBA62.USE = "HAnimSegmentLineColorRGBA";
LineSet60.color = ColorRGBA62;

Shape59.geometry = LineSet60;

HAnimSegment53.children[3] = Shape59;

HAnimSite HAnimSite63 = createNode("HAnimSite");
HAnimSite63.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite63.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite63.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor64 = createNode("TouchSensor");
TouchSensor64.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite63.children = new MFNode();

HAnimSite63.children[0] = TouchSensor64;

Shape Shape65 = createNode("Shape");
Shape65.USE = "HAnimSiteShape";
HAnimSite63.children[1] = Shape65;

HAnimSegment53.children[4] = HAnimSite63;

HAnimSite HAnimSite66 = createNode("HAnimSite");
HAnimSite66.name = "crotch_pt";
HAnimSite66.DEF = "hanim_crotch_pt";
HAnimSite66.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor67 = createNode("TouchSensor");
TouchSensor67.description = "HAnimSite crotch_pt";
HAnimSite66.children = new MFNode();

HAnimSite66.children[0] = TouchSensor67;

Shape Shape68 = createNode("Shape");
Shape68.USE = "HAnimSiteShape";
HAnimSite66.children[1] = Shape68;

HAnimSegment53.children[5] = HAnimSite66;

HAnimSite HAnimSite69 = createNode("HAnimSite");
HAnimSite69.name = "l_asis_pt";
HAnimSite69.DEF = "hanim_l_asis_pt";
HAnimSite69.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor70 = createNode("TouchSensor");
TouchSensor70.description = "HAnimSite l_asis_pt";
HAnimSite69.children = new MFNode();

HAnimSite69.children[0] = TouchSensor70;

Shape Shape71 = createNode("Shape");
Shape71.USE = "HAnimSiteShape";
HAnimSite69.children[1] = Shape71;

HAnimSegment53.children[6] = HAnimSite69;

HAnimSite HAnimSite72 = createNode("HAnimSite");
HAnimSite72.name = "l_iliocristale_pt";
HAnimSite72.DEF = "hanim_l_iliocristale_pt";
HAnimSite72.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor73 = createNode("TouchSensor");
TouchSensor73.description = "HAnimSite l_iliocristale_pt";
HAnimSite72.children = new MFNode();

HAnimSite72.children[0] = TouchSensor73;

Shape Shape74 = createNode("Shape");
Shape74.USE = "HAnimSiteShape";
HAnimSite72.children[1] = Shape74;

HAnimSegment53.children[7] = HAnimSite72;

HAnimSite HAnimSite75 = createNode("HAnimSite");
HAnimSite75.name = "l_psis_pt";
HAnimSite75.DEF = "hanim_l_psis_pt";
HAnimSite75.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor76 = createNode("TouchSensor");
TouchSensor76.description = "HAnimSite l_psis_pt";
HAnimSite75.children = new MFNode();

HAnimSite75.children[0] = TouchSensor76;

Shape Shape77 = createNode("Shape");
Shape77.USE = "HAnimSiteShape";
HAnimSite75.children[1] = Shape77;

HAnimSegment53.children[8] = HAnimSite75;

HAnimSite HAnimSite78 = createNode("HAnimSite");
HAnimSite78.name = "l_trochanterion_pt";
HAnimSite78.DEF = "hanim_l_trochanterion_pt";
HAnimSite78.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor79 = createNode("TouchSensor");
TouchSensor79.description = "HAnimSite l_trochanterion_pt";
HAnimSite78.children = new MFNode();

HAnimSite78.children[0] = TouchSensor79;

Shape Shape80 = createNode("Shape");
Shape80.USE = "HAnimSiteShape";
HAnimSite78.children[1] = Shape80;

HAnimSegment53.children[9] = HAnimSite78;

HAnimSite HAnimSite81 = createNode("HAnimSite");
HAnimSite81.name = "r_asis_pt";
HAnimSite81.DEF = "hanim_r_asis_pt";
HAnimSite81.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor82 = createNode("TouchSensor");
TouchSensor82.description = "HAnimSite r_asis_pt";
HAnimSite81.children = new MFNode();

HAnimSite81.children[0] = TouchSensor82;

Shape Shape83 = createNode("Shape");
Shape83.USE = "HAnimSiteShape";
HAnimSite81.children[1] = Shape83;

HAnimSegment53.children[10] = HAnimSite81;

HAnimSite HAnimSite84 = createNode("HAnimSite");
HAnimSite84.name = "r_iliocristale_pt";
HAnimSite84.DEF = "hanim_r_iliocristale_pt";
HAnimSite84.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor85 = createNode("TouchSensor");
TouchSensor85.description = "HAnimSite r_iliocristale_pt";
HAnimSite84.children = new MFNode();

HAnimSite84.children[0] = TouchSensor85;

Shape Shape86 = createNode("Shape");
Shape86.USE = "HAnimSiteShape";
HAnimSite84.children[1] = Shape86;

HAnimSegment53.children[11] = HAnimSite84;

HAnimSite HAnimSite87 = createNode("HAnimSite");
HAnimSite87.name = "r_psis_pt";
HAnimSite87.DEF = "hanim_r_psis_pt";
HAnimSite87.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor88 = createNode("TouchSensor");
TouchSensor88.description = "HAnimSite r_psis_pt";
HAnimSite87.children = new MFNode();

HAnimSite87.children[0] = TouchSensor88;

Shape Shape89 = createNode("Shape");
Shape89.USE = "HAnimSiteShape";
HAnimSite87.children[1] = Shape89;

HAnimSegment53.children[12] = HAnimSite87;

HAnimSite HAnimSite90 = createNode("HAnimSite");
HAnimSite90.name = "r_trochanterion_pt";
HAnimSite90.DEF = "hanim_r_trochanterion_pt";
HAnimSite90.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor91 = createNode("TouchSensor");
TouchSensor91.description = "HAnimSite r_trochanterion_pt";
HAnimSite90.children = new MFNode();

HAnimSite90.children[0] = TouchSensor91;

Shape Shape92 = createNode("Shape");
Shape92.USE = "HAnimSiteShape";
HAnimSite90.children[1] = Shape92;

HAnimSegment53.children[13] = HAnimSite90;

Shape Shape93 = createNode("Shape");
LineSet LineSet94 = createNode("LineSet");
LineSet94.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate95 = createNode("Coordinate");
Coordinate95.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet94.coord = Coordinate95;

//from humanoid_root to vl5 vertices 2
ColorRGBA ColorRGBA96 = createNode("ColorRGBA");
ColorRGBA96.USE = "HAnimSegmentLineColorRGBA";
LineSet94.color = ColorRGBA96;

Shape93.geometry = LineSet94;

HAnimSegment53.children[14] = Shape93;

HAnimSite HAnimSite97 = createNode("HAnimSite");
HAnimSite97.name = "navel_pt";
HAnimSite97.DEF = "hanim_navel_pt";
HAnimSite97.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor98 = createNode("TouchSensor");
TouchSensor98.description = "HAnimSite navel_pt";
HAnimSite97.children = new MFNode();

HAnimSite97.children[0] = TouchSensor98;

Shape Shape99 = createNode("Shape");
Shape99.USE = "HAnimSiteShape";
HAnimSite97.children[1] = Shape99;

HAnimSegment53.children[15] = HAnimSite97;

HAnimSite HAnimSite100 = createNode("HAnimSite");
HAnimSite100.name = "waist_preferred_anterior_pt";
HAnimSite100.DEF = "hanim_waist_preferred_anterior_pt";
HAnimSite100.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor101 = createNode("TouchSensor");
TouchSensor101.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite100.children = new MFNode();

HAnimSite100.children[0] = TouchSensor101;

Shape Shape102 = createNode("Shape");
Shape102.USE = "HAnimSiteShape";
HAnimSite100.children[1] = Shape102;

HAnimSegment53.children[16] = HAnimSite100;

HAnimSite HAnimSite103 = createNode("HAnimSite");
HAnimSite103.name = "waist_preferred_posterior_pt";
HAnimSite103.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite103.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor104 = createNode("TouchSensor");
TouchSensor104.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite103.children = new MFNode();

HAnimSite103.children[0] = TouchSensor104;

Shape Shape105 = createNode("Shape");
Shape105.USE = "HAnimSiteShape";
HAnimSite103.children[1] = Shape105;

HAnimSegment53.children[17] = HAnimSite103;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

HAnimJoint HAnimJoint106 = createNode("HAnimJoint");
HAnimJoint106.name = "sacroiliac";
HAnimJoint106.DEF = "hanim_sacroiliac";
HAnimJoint106.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint106.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint106.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment107 = createNode("HAnimSegment");
HAnimSegment107.name = "pelvis";
HAnimSegment107.DEF = "hanim_pelvis";
Transform Transform108 = createNode("Transform");
//Empty Transform
Transform Transform109 = createNode("Transform");
//Empty Transform
Shape Shape110 = createNode("Shape");
Shape110.USE = "HAnimJointShape";
Transform109.child = new undefined();

Transform109.child[0] = Shape110;

Transform108.children = new MFNode();

Transform108.children[0] = Transform109;

HAnimSegment107.children = new MFNode();

HAnimSegment107.children[0] = Transform108;

Shape Shape111 = createNode("Shape");
LineSet LineSet112 = createNode("LineSet");
LineSet112.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate113 = createNode("Coordinate");
Coordinate113.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet112.coord = Coordinate113;

//from sacroiliac to l_hip vertices 2
ColorRGBA ColorRGBA114 = createNode("ColorRGBA");
ColorRGBA114.USE = "HAnimSegmentLineColorRGBA";
LineSet112.color = ColorRGBA114;

Shape111.geometry = LineSet112;

HAnimSegment107.children[1] = Shape111;

HAnimSite HAnimSite115 = createNode("HAnimSite");
HAnimSite115.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite115.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite115.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor116 = createNode("TouchSensor");
TouchSensor116.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite115.children = new MFNode();

HAnimSite115.children[0] = TouchSensor116;

Shape Shape117 = createNode("Shape");
Shape117.USE = "HAnimSiteShape";
HAnimSite115.children[1] = Shape117;

HAnimSegment107.children[2] = HAnimSite115;

HAnimSite HAnimSite118 = createNode("HAnimSite");
HAnimSite118.name = "l_femoral_medial_epicondyles_pt";
HAnimSite118.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite118.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor119 = createNode("TouchSensor");
TouchSensor119.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = TouchSensor119;

Shape Shape120 = createNode("Shape");
Shape120.USE = "HAnimSiteShape";
HAnimSite118.children[1] = Shape120;

HAnimSegment107.children[3] = HAnimSite118;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.name = "l_knee_crease_pt";
HAnimSite121.DEF = "hanim_l_knee_crease_pt";
HAnimSite121.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor122 = createNode("TouchSensor");
TouchSensor122.description = "HAnimSite l_knee_crease_pt";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = TouchSensor122;

Shape Shape123 = createNode("Shape");
Shape123.USE = "HAnimSiteShape";
HAnimSite121.children[1] = Shape123;

HAnimSegment107.children[4] = HAnimSite121;

HAnimSite HAnimSite124 = createNode("HAnimSite");
HAnimSite124.name = "l_suprapatella_pt";
HAnimSite124.DEF = "hanim_l_suprapatella_pt";
HAnimSite124.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor125 = createNode("TouchSensor");
TouchSensor125.description = "HAnimSite l_suprapatella_pt";
HAnimSite124.children = new MFNode();

HAnimSite124.children[0] = TouchSensor125;

Shape Shape126 = createNode("Shape");
Shape126.USE = "HAnimSiteShape";
HAnimSite124.children[1] = Shape126;

HAnimSegment107.children[5] = HAnimSite124;

Shape Shape127 = createNode("Shape");
LineSet LineSet128 = createNode("LineSet");
LineSet128.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate129 = createNode("Coordinate");
Coordinate129.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet128.coord = Coordinate129;

//from sacroiliac to r_hip vertices 2
ColorRGBA ColorRGBA130 = createNode("ColorRGBA");
ColorRGBA130.USE = "HAnimSegmentLineColorRGBA";
LineSet128.color = ColorRGBA130;

Shape127.geometry = LineSet128;

HAnimSegment107.children[6] = Shape127;

HAnimSite HAnimSite131 = createNode("HAnimSite");
HAnimSite131.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite131.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite131.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor132 = createNode("TouchSensor");
TouchSensor132.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite131.children = new MFNode();

HAnimSite131.children[0] = TouchSensor132;

Shape Shape133 = createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131.children[1] = Shape133;

HAnimSegment107.children[7] = HAnimSite131;

HAnimSite HAnimSite134 = createNode("HAnimSite");
HAnimSite134.name = "r_femoral_medial_epicondyles_pt";
HAnimSite134.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite134.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor135 = createNode("TouchSensor");
TouchSensor135.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite134.children = new MFNode();

HAnimSite134.children[0] = TouchSensor135;

Shape Shape136 = createNode("Shape");
Shape136.USE = "HAnimSiteShape";
HAnimSite134.children[1] = Shape136;

HAnimSegment107.children[8] = HAnimSite134;

HAnimSite HAnimSite137 = createNode("HAnimSite");
HAnimSite137.name = "r_knee_crease_pt";
HAnimSite137.DEF = "hanim_r_knee_crease_pt";
HAnimSite137.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor138 = createNode("TouchSensor");
TouchSensor138.description = "HAnimSite r_knee_crease_pt";
HAnimSite137.children = new MFNode();

HAnimSite137.children[0] = TouchSensor138;

Shape Shape139 = createNode("Shape");
Shape139.USE = "HAnimSiteShape";
HAnimSite137.children[1] = Shape139;

HAnimSegment107.children[9] = HAnimSite137;

HAnimSite HAnimSite140 = createNode("HAnimSite");
HAnimSite140.name = "r_suprapatella_pt";
HAnimSite140.DEF = "hanim_r_suprapatella_pt";
HAnimSite140.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor141 = createNode("TouchSensor");
TouchSensor141.description = "HAnimSite r_suprapatella_pt";
HAnimSite140.children = new MFNode();

HAnimSite140.children[0] = TouchSensor141;

Shape Shape142 = createNode("Shape");
Shape142.USE = "HAnimSiteShape";
HAnimSite140.children[1] = Shape142;

HAnimSegment107.children[10] = HAnimSite140;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimSegment107;

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
//Empty Transform
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
HAnimSite152.name = "l_lateral_malleolus_pt";
HAnimSite152.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite152.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor153 = createNode("TouchSensor");
TouchSensor153.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite152.children = new MFNode();

HAnimSite152.children[0] = TouchSensor153;

Shape Shape154 = createNode("Shape");
Shape154.USE = "HAnimSiteShape";
HAnimSite152.children[1] = Shape154;

HAnimSegment144.children[2] = HAnimSite152;

HAnimSite HAnimSite155 = createNode("HAnimSite");
HAnimSite155.name = "l_medial_malleolus_pt";
HAnimSite155.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite155.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor156 = createNode("TouchSensor");
TouchSensor156.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite155.children = new MFNode();

HAnimSite155.children[0] = TouchSensor156;

Shape Shape157 = createNode("Shape");
Shape157.USE = "HAnimSiteShape";
HAnimSite155.children[1] = Shape157;

HAnimSegment144.children[3] = HAnimSite155;

HAnimSite HAnimSite158 = createNode("HAnimSite");
HAnimSite158.name = "l_tibiale_pt";
HAnimSite158.DEF = "hanim_l_tibiale_pt";
HAnimSite158.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor159 = createNode("TouchSensor");
TouchSensor159.description = "HAnimSite l_tibiale_pt";
HAnimSite158.children = new MFNode();

HAnimSite158.children[0] = TouchSensor159;

Shape Shape160 = createNode("Shape");
Shape160.USE = "HAnimSiteShape";
HAnimSite158.children[1] = Shape160;

HAnimSegment144.children[4] = HAnimSite158;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

HAnimJoint HAnimJoint161 = createNode("HAnimJoint");
HAnimJoint161.name = "l_knee";
HAnimJoint161.DEF = "hanim_l_knee";
HAnimJoint161.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint161.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint161.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment162 = createNode("HAnimSegment");
HAnimSegment162.name = "l_calf";
HAnimSegment162.DEF = "hanim_l_calf";
Transform Transform163 = createNode("Transform");
//Empty Transform
Transform Transform164 = createNode("Transform");
//Empty Transform
Shape Shape165 = createNode("Shape");
Shape165.USE = "HAnimJointShape";
Transform164.child = new undefined();

Transform164.child[0] = Shape165;

Transform163.children = new MFNode();

Transform163.children[0] = Transform164;

HAnimSegment162.children = new MFNode();

HAnimSegment162.children[0] = Transform163;

Shape Shape166 = createNode("Shape");
LineSet LineSet167 = createNode("LineSet");
LineSet167.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate168 = createNode("Coordinate");
Coordinate168.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet167.coord = Coordinate168;

//from l_knee to l_talocrural vertices 2
ColorRGBA ColorRGBA169 = createNode("ColorRGBA");
ColorRGBA169.USE = "HAnimSegmentLineColorRGBA";
LineSet167.color = ColorRGBA169;

Shape166.geometry = LineSet167;

HAnimSegment162.children[1] = Shape166;

HAnimSite HAnimSite170 = createNode("HAnimSite");
HAnimSite170.name = "l_calcaneus_posterior_pt";
HAnimSite170.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite170.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor171 = createNode("TouchSensor");
TouchSensor171.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite170.children = new MFNode();

HAnimSite170.children[0] = TouchSensor171;

Shape Shape172 = createNode("Shape");
Shape172.USE = "HAnimSiteShape";
HAnimSite170.children[1] = Shape172;

HAnimSegment162.children[2] = HAnimSite170;

HAnimSite HAnimSite173 = createNode("HAnimSite");
HAnimSite173.name = "l_sphyrion_pt";
HAnimSite173.DEF = "hanim_l_sphyrion_pt";
HAnimSite173.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor174 = createNode("TouchSensor");
TouchSensor174.description = "HAnimSite l_sphyrion_pt";
HAnimSite173.children = new MFNode();

HAnimSite173.children[0] = TouchSensor174;

Shape Shape175 = createNode("Shape");
Shape175.USE = "HAnimSiteShape";
HAnimSite173.children[1] = Shape175;

HAnimSegment162.children[3] = HAnimSite173;

HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimSegment162;

HAnimJoint HAnimJoint176 = createNode("HAnimJoint");
HAnimJoint176.name = "l_talocrural";
HAnimJoint176.DEF = "hanim_l_talocrural";
HAnimJoint176.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint176.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint176.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment177 = createNode("HAnimSegment");
HAnimSegment177.name = "l_talus";
HAnimSegment177.DEF = "hanim_l_talus";
Transform Transform178 = createNode("Transform");
Transform178.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform178.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform178.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
Transform Transform179 = createNode("Transform");
//Empty Transform left foot
Shape Shape180 = createNode("Shape");
Shape180.USE = "HAnimJointShape";
Transform179.child = new undefined();

Transform179.child[0] = Shape180;

Transform178.children = new MFNode();

Transform178.children[0] = Transform179;

HAnimSegment177.children = new MFNode();

HAnimSegment177.children[0] = Transform178;

Shape Shape181 = createNode("Shape");
LineSet LineSet182 = createNode("LineSet");
LineSet182.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate183 = createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet182.coord = Coordinate183;

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA ColorRGBA184 = createNode("ColorRGBA");
ColorRGBA184.USE = "HAnimSegmentLineColorRGBA";
LineSet182.color = ColorRGBA184;

Shape181.geometry = LineSet182;

HAnimSegment177.children[1] = Shape181;

Shape Shape185 = createNode("Shape");
LineSet LineSet186 = createNode("LineSet");
LineSet186.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate187 = createNode("Coordinate");
Coordinate187.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet186.coord = Coordinate187;

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA ColorRGBA188 = createNode("ColorRGBA");
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA";
LineSet186.color = ColorRGBA188;

Shape185.geometry = LineSet186;

HAnimSegment177.children[2] = Shape185;

HAnimJoint176.children = new MFNode();

HAnimJoint176.children[0] = HAnimSegment177;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.name = "l_talocalcaneonavicular";
HAnimJoint189.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint189.center = new SFVec3f(new float[0,1,0]);
HAnimJoint189.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint189.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment190 = createNode("HAnimSegment");
HAnimSegment190.name = "l_navicular";
HAnimSegment190.DEF = "hanim_l_navicular";
Transform Transform191 = createNode("Transform");
//Empty Transform
Transform Transform192 = createNode("Transform");
//Empty Transform
Shape Shape193 = createNode("Shape");
Shape193.USE = "HAnimJointShape";
Transform192.child = new undefined();

Transform192.child[0] = Shape193;

Transform191.children = new MFNode();

Transform191.children[0] = Transform192;

HAnimSegment190.children = new MFNode();

HAnimSegment190.children[0] = Transform191;

Shape Shape194 = createNode("Shape");
LineSet LineSet195 = createNode("LineSet");
LineSet195.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate196 = createNode("Coordinate");
Coordinate196.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet195.coord = Coordinate196;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA ColorRGBA197 = createNode("ColorRGBA");
ColorRGBA197.USE = "HAnimSegmentLineColorRGBA";
LineSet195.color = ColorRGBA197;

Shape194.geometry = LineSet195;

HAnimSegment190.children[1] = Shape194;

Shape Shape198 = createNode("Shape");
LineSet LineSet199 = createNode("LineSet");
LineSet199.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate200 = createNode("Coordinate");
Coordinate200.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet199.coord = Coordinate200;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA ColorRGBA201 = createNode("ColorRGBA");
ColorRGBA201.USE = "HAnimSegmentLineColorRGBA";
LineSet199.color = ColorRGBA201;

Shape198.geometry = LineSet199;

HAnimSegment190.children[2] = Shape198;

Shape Shape202 = createNode("Shape");
LineSet LineSet203 = createNode("LineSet");
LineSet203.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate204 = createNode("Coordinate");
Coordinate204.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet203.coord = Coordinate204;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA ColorRGBA205 = createNode("ColorRGBA");
ColorRGBA205.USE = "HAnimSegmentLineColorRGBA";
LineSet203.color = ColorRGBA205;

Shape202.geometry = LineSet203;

HAnimSegment190.children[3] = Shape202;

HAnimJoint189.children = new MFNode();

HAnimJoint189.children[0] = HAnimSegment190;

HAnimJoint HAnimJoint206 = createNode("HAnimJoint");
HAnimJoint206.name = "l_cuneonavicular_1";
HAnimJoint206.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint206.center = new SFVec3f(new float[0,1,0]);
HAnimJoint206.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint206.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment207 = createNode("HAnimSegment");
HAnimSegment207.name = "l_cuneiform_1";
HAnimSegment207.DEF = "hanim_l_cuneiform_1";
Transform Transform208 = createNode("Transform");
//Empty Transform
Transform Transform209 = createNode("Transform");
//Empty Transform
Shape Shape210 = createNode("Shape");
Shape210.USE = "HAnimJointShape";
Transform209.child = new undefined();

Transform209.child[0] = Shape210;

Transform208.children = new MFNode();

Transform208.children[0] = Transform209;

HAnimSegment207.children = new MFNode();

HAnimSegment207.children[0] = Transform208;

Shape Shape211 = createNode("Shape");
LineSet LineSet212 = createNode("LineSet");
LineSet212.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate213 = createNode("Coordinate");
Coordinate213.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet212.coord = Coordinate213;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA ColorRGBA214 = createNode("ColorRGBA");
ColorRGBA214.USE = "HAnimSegmentLineColorRGBA";
LineSet212.color = ColorRGBA214;

Shape211.geometry = LineSet212;

HAnimSegment207.children[1] = Shape211;

HAnimJoint206.children = new MFNode();

HAnimJoint206.children[0] = HAnimSegment207;

HAnimJoint HAnimJoint215 = createNode("HAnimJoint");
HAnimJoint215.name = "l_tarsometatarsal_1";
HAnimJoint215.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint215.center = new SFVec3f(new float[0,1,0]);
HAnimJoint215.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint215.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment216 = createNode("HAnimSegment");
HAnimSegment216.name = "l_metatarsal_1";
HAnimSegment216.DEF = "hanim_l_metatarsal_1";
Transform Transform217 = createNode("Transform");
//Empty Transform
Transform Transform218 = createNode("Transform");
//Empty Transform
Shape Shape219 = createNode("Shape");
Shape219.USE = "HAnimJointShape";
Transform218.child = new undefined();

Transform218.child[0] = Shape219;

Transform217.children = new MFNode();

Transform217.children[0] = Transform218;

HAnimSegment216.children = new MFNode();

HAnimSegment216.children[0] = Transform217;

Shape Shape220 = createNode("Shape");
LineSet LineSet221 = createNode("LineSet");
LineSet221.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate222 = createNode("Coordinate");
Coordinate222.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet221.coord = Coordinate222;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA ColorRGBA223 = createNode("ColorRGBA");
ColorRGBA223.USE = "HAnimSegmentLineColorRGBA";
LineSet221.color = ColorRGBA223;

Shape220.geometry = LineSet221;

HAnimSegment216.children[1] = Shape220;

HAnimSite HAnimSite224 = createNode("HAnimSite");
HAnimSite224.name = "l_metatarsal_phalanx_1_pt";
HAnimSite224.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite224.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor225 = createNode("TouchSensor");
TouchSensor225.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite224.children = new MFNode();

HAnimSite224.children[0] = TouchSensor225;

Shape Shape226 = createNode("Shape");
Shape226.USE = "HAnimSiteShape";
HAnimSite224.children[1] = Shape226;

HAnimSegment216.children[2] = HAnimSite224;

HAnimJoint215.children = new MFNode();

HAnimJoint215.children[0] = HAnimSegment216;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.name = "l_metatarsophalangeal_1";
HAnimJoint227.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint227.center = new SFVec3f(new float[0,1,0]);
HAnimJoint227.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint227.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment228 = createNode("HAnimSegment");
HAnimSegment228.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment228.DEF = "hanim_l_tarsal_proximal_phalanx_1";
Transform Transform229 = createNode("Transform");
//Empty Transform
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
Coordinate234.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet233.coord = Coordinate234;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA235 = createNode("ColorRGBA");
ColorRGBA235.USE = "HAnimSegmentLineColorRGBA";
LineSet233.color = ColorRGBA235;

Shape232.geometry = LineSet233;

HAnimSegment228.children[1] = Shape232;

HAnimSite HAnimSite236 = createNode("HAnimSite");
HAnimSite236.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite236.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite236.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor237 = createNode("TouchSensor");
TouchSensor237.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite236.children = new MFNode();

HAnimSite236.children[0] = TouchSensor237;

Shape Shape238 = createNode("Shape");
Shape238.USE = "HAnimSiteShape";
HAnimSite236.children[1] = Shape238;

HAnimSegment228.children[2] = HAnimSite236;

HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

HAnimJoint HAnimJoint239 = createNode("HAnimJoint");
HAnimJoint239.name = "l_tarsal_interphalangeal_1";
HAnimJoint239.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint239.center = new SFVec3f(new float[0,1,0]);
HAnimJoint239.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint239.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint227.children[1] = HAnimJoint239;

HAnimJoint215.children[1] = HAnimJoint227;

HAnimJoint206.children[1] = HAnimJoint215;

HAnimJoint189.children[1] = HAnimJoint206;

HAnimJoint HAnimJoint240 = createNode("HAnimJoint");
HAnimJoint240.name = "l_cuneonavicular_2";
HAnimJoint240.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint240.center = new SFVec3f(new float[0,1,0]);
HAnimJoint240.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint240.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment241 = createNode("HAnimSegment");
HAnimSegment241.name = "l_cuneiform_2";
HAnimSegment241.DEF = "hanim_l_cuneiform_2";
Transform Transform242 = createNode("Transform");
//Empty Transform
Transform Transform243 = createNode("Transform");
//Empty Transform
Shape Shape244 = createNode("Shape");
Shape244.USE = "HAnimJointShape";
Transform243.child = new undefined();

Transform243.child[0] = Shape244;

Transform242.children = new MFNode();

Transform242.children[0] = Transform243;

HAnimSegment241.children = new MFNode();

HAnimSegment241.children[0] = Transform242;

Shape Shape245 = createNode("Shape");
LineSet LineSet246 = createNode("LineSet");
LineSet246.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate247 = createNode("Coordinate");
Coordinate247.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet246.coord = Coordinate247;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA248 = createNode("ColorRGBA");
ColorRGBA248.USE = "HAnimSegmentLineColorRGBA";
LineSet246.color = ColorRGBA248;

Shape245.geometry = LineSet246;

HAnimSegment241.children[1] = Shape245;

HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

HAnimJoint HAnimJoint249 = createNode("HAnimJoint");
HAnimJoint249.name = "l_tarsometatarsal_2";
HAnimJoint249.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint249.center = new SFVec3f(new float[0,1,0]);
HAnimJoint249.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint249.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment250 = createNode("HAnimSegment");
HAnimSegment250.name = "l_metatarsal_2";
HAnimSegment250.DEF = "hanim_l_metatarsal_2";
Transform Transform251 = createNode("Transform");
//Empty Transform
Transform Transform252 = createNode("Transform");
//Empty Transform
Shape Shape253 = createNode("Shape");
Shape253.USE = "HAnimJointShape";
Transform252.child = new undefined();

Transform252.child[0] = Shape253;

Transform251.children = new MFNode();

Transform251.children[0] = Transform252;

HAnimSegment250.children = new MFNode();

HAnimSegment250.children[0] = Transform251;

Shape Shape254 = createNode("Shape");
LineSet LineSet255 = createNode("LineSet");
LineSet255.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate256 = createNode("Coordinate");
Coordinate256.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet255.coord = Coordinate256;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA257 = createNode("ColorRGBA");
ColorRGBA257.USE = "HAnimSegmentLineColorRGBA";
LineSet255.color = ColorRGBA257;

Shape254.geometry = LineSet255;

HAnimSegment250.children[1] = Shape254;

HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

HAnimJoint HAnimJoint258 = createNode("HAnimJoint");
HAnimJoint258.name = "l_metatarsophalangeal_2";
HAnimJoint258.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint258.center = new SFVec3f(new float[0,1,0]);
HAnimJoint258.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint258.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment259 = createNode("HAnimSegment");
HAnimSegment259.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment259.DEF = "hanim_l_tarsal_proximal_phalanx_2";
Transform Transform260 = createNode("Transform");
//Empty Transform
Transform Transform261 = createNode("Transform");
//Empty Transform
Shape Shape262 = createNode("Shape");
Shape262.USE = "HAnimJointShape";
Transform261.child = new undefined();

Transform261.child[0] = Shape262;

Transform260.children = new MFNode();

Transform260.children[0] = Transform261;

HAnimSegment259.children = new MFNode();

HAnimSegment259.children[0] = Transform260;

Shape Shape263 = createNode("Shape");
LineSet LineSet264 = createNode("LineSet");
LineSet264.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate265 = createNode("Coordinate");
Coordinate265.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet264.coord = Coordinate265;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA266 = createNode("ColorRGBA");
ColorRGBA266.USE = "HAnimSegmentLineColorRGBA";
LineSet264.color = ColorRGBA266;

Shape263.geometry = LineSet264;

HAnimSegment259.children[1] = Shape263;

HAnimJoint258.children = new MFNode();

HAnimJoint258.children[0] = HAnimSegment259;

HAnimJoint HAnimJoint267 = createNode("HAnimJoint");
HAnimJoint267.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint267.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint267.center = new SFVec3f(new float[0,1,0]);
HAnimJoint267.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint267.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment268 = createNode("HAnimSegment");
HAnimSegment268.name = "l_tarsal_middle_phalanx_2";
HAnimSegment268.DEF = "hanim_l_tarsal_middle_phalanx_2";
Transform Transform269 = createNode("Transform");
//Empty Transform
Transform Transform270 = createNode("Transform");
//Empty Transform
Shape Shape271 = createNode("Shape");
Shape271.USE = "HAnimJointShape";
Transform270.child = new undefined();

Transform270.child[0] = Shape271;

Transform269.children = new MFNode();

Transform269.children[0] = Transform270;

HAnimSegment268.children = new MFNode();

HAnimSegment268.children[0] = Transform269;

Shape Shape272 = createNode("Shape");
LineSet LineSet273 = createNode("LineSet");
LineSet273.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate274 = createNode("Coordinate");
Coordinate274.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet273.coord = Coordinate274;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA275 = createNode("ColorRGBA");
ColorRGBA275.USE = "HAnimSegmentLineColorRGBA";
LineSet273.color = ColorRGBA275;

Shape272.geometry = LineSet273;

HAnimSegment268.children[1] = Shape272;

HAnimSite HAnimSite276 = createNode("HAnimSite");
HAnimSite276.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite276.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite276.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor277 = createNode("TouchSensor");
TouchSensor277.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite276.children = new MFNode();

HAnimSite276.children[0] = TouchSensor277;

Shape Shape278 = createNode("Shape");
Shape278.USE = "HAnimSiteShape";
HAnimSite276.children[1] = Shape278;

HAnimSegment268.children[2] = HAnimSite276;

HAnimJoint267.children = new MFNode();

HAnimJoint267.children[0] = HAnimSegment268;

HAnimJoint HAnimJoint279 = createNode("HAnimJoint");
HAnimJoint279.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint279.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint279.center = new SFVec3f(new float[0,1,0]);
HAnimJoint279.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint279.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint267.children[1] = HAnimJoint279;

HAnimJoint258.children[1] = HAnimJoint267;

HAnimJoint249.children[1] = HAnimJoint258;

HAnimJoint240.children[1] = HAnimJoint249;

HAnimJoint189.children[2] = HAnimJoint240;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.name = "l_cuneonavicular_3";
HAnimJoint280.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint280.center = new SFVec3f(new float[0,1,0]);
HAnimJoint280.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint280.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment281 = createNode("HAnimSegment");
HAnimSegment281.name = "l_cuneiform_3";
HAnimSegment281.DEF = "hanim_l_cuneiform_3";
Transform Transform282 = createNode("Transform");
//Empty Transform
Transform Transform283 = createNode("Transform");
//Empty Transform
Shape Shape284 = createNode("Shape");
Shape284.USE = "HAnimJointShape";
Transform283.child = new undefined();

Transform283.child[0] = Shape284;

Transform282.children = new MFNode();

Transform282.children[0] = Transform283;

HAnimSegment281.children = new MFNode();

HAnimSegment281.children[0] = Transform282;

Shape Shape285 = createNode("Shape");
LineSet LineSet286 = createNode("LineSet");
LineSet286.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate287 = createNode("Coordinate");
Coordinate287.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet286.coord = Coordinate287;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA ColorRGBA288 = createNode("ColorRGBA");
ColorRGBA288.USE = "HAnimSegmentLineColorRGBA";
LineSet286.color = ColorRGBA288;

Shape285.geometry = LineSet286;

HAnimSegment281.children[1] = Shape285;

HAnimJoint280.children = new MFNode();

HAnimJoint280.children[0] = HAnimSegment281;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.name = "l_tarsometatarsal_3";
HAnimJoint289.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint289.center = new SFVec3f(new float[0,1,0]);
HAnimJoint289.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint289.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment290 = createNode("HAnimSegment");
HAnimSegment290.name = "l_metatarsal_3";
HAnimSegment290.DEF = "hanim_l_metatarsal_3";
Transform Transform291 = createNode("Transform");
//Empty Transform
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
Coordinate296.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet295.coord = Coordinate296;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA ColorRGBA297 = createNode("ColorRGBA");
ColorRGBA297.USE = "HAnimSegmentLineColorRGBA";
LineSet295.color = ColorRGBA297;

Shape294.geometry = LineSet295;

HAnimSegment290.children[1] = Shape294;

HAnimJoint289.children = new MFNode();

HAnimJoint289.children[0] = HAnimSegment290;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.name = "l_metatarsophalangeal_3";
HAnimJoint298.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint298.center = new SFVec3f(new float[0,1,0]);
HAnimJoint298.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint298.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment299.DEF = "hanim_l_tarsal_proximal_phalanx_3";
Transform Transform300 = createNode("Transform");
//Empty Transform
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
Coordinate305.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet304.coord = Coordinate305;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA306 = createNode("ColorRGBA");
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA";
LineSet304.color = ColorRGBA306;

Shape303.geometry = LineSet304;

HAnimSegment299.children[1] = Shape303;

HAnimJoint298.children = new MFNode();

HAnimJoint298.children[0] = HAnimSegment299;

HAnimJoint HAnimJoint307 = createNode("HAnimJoint");
HAnimJoint307.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint307.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint307.center = new SFVec3f(new float[0,1,0]);
HAnimJoint307.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint307.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment308 = createNode("HAnimSegment");
HAnimSegment308.name = "l_tarsal_middle_phalanx_3";
HAnimSegment308.DEF = "hanim_l_tarsal_middle_phalanx_3";
Transform Transform309 = createNode("Transform");
//Empty Transform
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
Coordinate314.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet313.coord = Coordinate314;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA315 = createNode("ColorRGBA");
ColorRGBA315.USE = "HAnimSegmentLineColorRGBA";
LineSet313.color = ColorRGBA315;

Shape312.geometry = LineSet313;

HAnimSegment308.children[1] = Shape312;

HAnimSite HAnimSite316 = createNode("HAnimSite");
HAnimSite316.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite316.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite316.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor317 = createNode("TouchSensor");
TouchSensor317.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite316.children = new MFNode();

HAnimSite316.children[0] = TouchSensor317;

Shape Shape318 = createNode("Shape");
Shape318.USE = "HAnimSiteShape";
HAnimSite316.children[1] = Shape318;

HAnimSegment308.children[2] = HAnimSite316;

HAnimJoint307.children = new MFNode();

HAnimJoint307.children[0] = HAnimSegment308;

HAnimJoint HAnimJoint319 = createNode("HAnimJoint");
HAnimJoint319.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint319.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint319.center = new SFVec3f(new float[0,1,0]);
HAnimJoint319.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint319.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint307.children[1] = HAnimJoint319;

HAnimJoint298.children[1] = HAnimJoint307;

HAnimJoint289.children[1] = HAnimJoint298;

HAnimJoint280.children[1] = HAnimJoint289;

HAnimJoint189.children[3] = HAnimJoint280;

HAnimJoint176.children[1] = HAnimJoint189;

HAnimJoint HAnimJoint320 = createNode("HAnimJoint");
HAnimJoint320.name = "l_calcaneocuboid";
HAnimJoint320.DEF = "hanim_l_calcaneocuboid";
HAnimJoint320.center = new SFVec3f(new float[0,1,0]);
HAnimJoint320.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint320.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment321 = createNode("HAnimSegment");
HAnimSegment321.name = "l_calcaneus";
HAnimSegment321.DEF = "hanim_l_calcaneus";
Transform Transform322 = createNode("Transform");
//Empty Transform
Transform Transform323 = createNode("Transform");
//Empty Transform
Shape Shape324 = createNode("Shape");
Shape324.USE = "HAnimJointShape";
Transform323.child = new undefined();

Transform323.child[0] = Shape324;

Transform322.children = new MFNode();

Transform322.children[0] = Transform323;

HAnimSegment321.children = new MFNode();

HAnimSegment321.children[0] = Transform322;

Shape Shape325 = createNode("Shape");
LineSet LineSet326 = createNode("LineSet");
LineSet326.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate327 = createNode("Coordinate");
Coordinate327.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet326.coord = Coordinate327;

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA ColorRGBA328 = createNode("ColorRGBA");
ColorRGBA328.USE = "HAnimSegmentLineColorRGBA";
LineSet326.color = ColorRGBA328;

Shape325.geometry = LineSet326;

HAnimSegment321.children[1] = Shape325;

HAnimJoint320.children = new MFNode();

HAnimJoint320.children[0] = HAnimSegment321;

HAnimJoint HAnimJoint329 = createNode("HAnimJoint");
HAnimJoint329.name = "l_transversetarsal";
HAnimJoint329.DEF = "hanim_l_transversetarsal";
HAnimJoint329.center = new SFVec3f(new float[0,1,0]);
HAnimJoint329.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint329.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment330 = createNode("HAnimSegment");
HAnimSegment330.name = "l_cuboid";
HAnimSegment330.DEF = "hanim_l_cuboid";
Transform Transform331 = createNode("Transform");
//Empty Transform
Transform Transform332 = createNode("Transform");
//Empty Transform
Shape Shape333 = createNode("Shape");
Shape333.USE = "HAnimJointShape";
Transform332.child = new undefined();

Transform332.child[0] = Shape333;

Transform331.children = new MFNode();

Transform331.children[0] = Transform332;

HAnimSegment330.children = new MFNode();

HAnimSegment330.children[0] = Transform331;

Shape Shape334 = createNode("Shape");
LineSet LineSet335 = createNode("LineSet");
LineSet335.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate336 = createNode("Coordinate");
Coordinate336.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet335.coord = Coordinate336;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA ColorRGBA337 = createNode("ColorRGBA");
ColorRGBA337.USE = "HAnimSegmentLineColorRGBA";
LineSet335.color = ColorRGBA337;

Shape334.geometry = LineSet335;

HAnimSegment330.children[1] = Shape334;

Shape Shape338 = createNode("Shape");
LineSet LineSet339 = createNode("LineSet");
LineSet339.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate340 = createNode("Coordinate");
Coordinate340.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet339.coord = Coordinate340;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA ColorRGBA341 = createNode("ColorRGBA");
ColorRGBA341.USE = "HAnimSegmentLineColorRGBA";
LineSet339.color = ColorRGBA341;

Shape338.geometry = LineSet339;

HAnimSegment330.children[2] = Shape338;

HAnimJoint329.children = new MFNode();

HAnimJoint329.children[0] = HAnimSegment330;

HAnimJoint HAnimJoint342 = createNode("HAnimJoint");
HAnimJoint342.name = "l_tarsometatarsal_4";
HAnimJoint342.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint342.center = new SFVec3f(new float[0,1,0]);
HAnimJoint342.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint342.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment343 = createNode("HAnimSegment");
HAnimSegment343.name = "l_metatarsal_4";
HAnimSegment343.DEF = "hanim_l_metatarsal_4";
Transform Transform344 = createNode("Transform");
//Empty Transform
Transform Transform345 = createNode("Transform");
//Empty Transform
Shape Shape346 = createNode("Shape");
Shape346.USE = "HAnimJointShape";
Transform345.child = new undefined();

Transform345.child[0] = Shape346;

Transform344.children = new MFNode();

Transform344.children[0] = Transform345;

HAnimSegment343.children = new MFNode();

HAnimSegment343.children[0] = Transform344;

Shape Shape347 = createNode("Shape");
LineSet LineSet348 = createNode("LineSet");
LineSet348.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate349 = createNode("Coordinate");
Coordinate349.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet348.coord = Coordinate349;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA ColorRGBA350 = createNode("ColorRGBA");
ColorRGBA350.USE = "HAnimSegmentLineColorRGBA";
LineSet348.color = ColorRGBA350;

Shape347.geometry = LineSet348;

HAnimSegment343.children[1] = Shape347;

HAnimJoint342.children = new MFNode();

HAnimJoint342.children[0] = HAnimSegment343;

HAnimJoint HAnimJoint351 = createNode("HAnimJoint");
HAnimJoint351.name = "l_metatarsophalangeal_4";
HAnimJoint351.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint351.center = new SFVec3f(new float[0,1,0]);
HAnimJoint351.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint351.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment352 = createNode("HAnimSegment");
HAnimSegment352.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment352.DEF = "hanim_l_tarsal_proximal_phalanx_4";
Transform Transform353 = createNode("Transform");
//Empty Transform
Transform Transform354 = createNode("Transform");
//Empty Transform
Shape Shape355 = createNode("Shape");
Shape355.USE = "HAnimJointShape";
Transform354.child = new undefined();

Transform354.child[0] = Shape355;

Transform353.children = new MFNode();

Transform353.children[0] = Transform354;

HAnimSegment352.children = new MFNode();

HAnimSegment352.children[0] = Transform353;

Shape Shape356 = createNode("Shape");
LineSet LineSet357 = createNode("LineSet");
LineSet357.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate358 = createNode("Coordinate");
Coordinate358.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet357.coord = Coordinate358;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA359 = createNode("ColorRGBA");
ColorRGBA359.USE = "HAnimSegmentLineColorRGBA";
LineSet357.color = ColorRGBA359;

Shape356.geometry = LineSet357;

HAnimSegment352.children[1] = Shape356;

HAnimJoint351.children = new MFNode();

HAnimJoint351.children[0] = HAnimSegment352;

HAnimJoint HAnimJoint360 = createNode("HAnimJoint");
HAnimJoint360.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint360.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint360.center = new SFVec3f(new float[0,1,0]);
HAnimJoint360.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint360.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment361 = createNode("HAnimSegment");
HAnimSegment361.name = "l_tarsal_middle_phalanx_4";
HAnimSegment361.DEF = "hanim_l_tarsal_middle_phalanx_4";
Transform Transform362 = createNode("Transform");
//Empty Transform
Transform Transform363 = createNode("Transform");
//Empty Transform
Shape Shape364 = createNode("Shape");
Shape364.USE = "HAnimJointShape";
Transform363.child = new undefined();

Transform363.child[0] = Shape364;

Transform362.children = new MFNode();

Transform362.children[0] = Transform363;

HAnimSegment361.children = new MFNode();

HAnimSegment361.children[0] = Transform362;

Shape Shape365 = createNode("Shape");
LineSet LineSet366 = createNode("LineSet");
LineSet366.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate367 = createNode("Coordinate");
Coordinate367.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet366.coord = Coordinate367;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA368 = createNode("ColorRGBA");
ColorRGBA368.USE = "HAnimSegmentLineColorRGBA";
LineSet366.color = ColorRGBA368;

Shape365.geometry = LineSet366;

HAnimSegment361.children[1] = Shape365;

HAnimSite HAnimSite369 = createNode("HAnimSite");
HAnimSite369.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite369.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite369.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor370 = createNode("TouchSensor");
TouchSensor370.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite369.children = new MFNode();

HAnimSite369.children[0] = TouchSensor370;

Shape Shape371 = createNode("Shape");
Shape371.USE = "HAnimSiteShape";
HAnimSite369.children[1] = Shape371;

HAnimSegment361.children[2] = HAnimSite369;

HAnimJoint360.children = new MFNode();

HAnimJoint360.children[0] = HAnimSegment361;

HAnimJoint HAnimJoint372 = createNode("HAnimJoint");
HAnimJoint372.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint372.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint372.center = new SFVec3f(new float[0,1,0]);
HAnimJoint372.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint372.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint360.children[1] = HAnimJoint372;

HAnimJoint351.children[1] = HAnimJoint360;

HAnimJoint342.children[1] = HAnimJoint351;

HAnimJoint329.children[1] = HAnimJoint342;

HAnimJoint HAnimJoint373 = createNode("HAnimJoint");
HAnimJoint373.name = "l_tarsometatarsal_5";
HAnimJoint373.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint373.center = new SFVec3f(new float[0,1,0]);
HAnimJoint373.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint373.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment374 = createNode("HAnimSegment");
HAnimSegment374.name = "l_metatarsal_5";
HAnimSegment374.DEF = "hanim_l_metatarsal_5";
Transform Transform375 = createNode("Transform");
//Empty Transform
Transform Transform376 = createNode("Transform");
//Empty Transform
Shape Shape377 = createNode("Shape");
Shape377.USE = "HAnimJointShape";
Transform376.child = new undefined();

Transform376.child[0] = Shape377;

Transform375.children = new MFNode();

Transform375.children[0] = Transform376;

HAnimSegment374.children = new MFNode();

HAnimSegment374.children[0] = Transform375;

Shape Shape378 = createNode("Shape");
LineSet LineSet379 = createNode("LineSet");
LineSet379.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate380 = createNode("Coordinate");
Coordinate380.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet379.coord = Coordinate380;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA ColorRGBA381 = createNode("ColorRGBA");
ColorRGBA381.USE = "HAnimSegmentLineColorRGBA";
LineSet379.color = ColorRGBA381;

Shape378.geometry = LineSet379;

HAnimSegment374.children[1] = Shape378;

HAnimSite HAnimSite382 = createNode("HAnimSite");
HAnimSite382.name = "l_metatarsal_phalanx_5_pt";
HAnimSite382.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite382.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor383 = createNode("TouchSensor");
TouchSensor383.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite382.children = new MFNode();

HAnimSite382.children[0] = TouchSensor383;

Shape Shape384 = createNode("Shape");
Shape384.USE = "HAnimSiteShape";
HAnimSite382.children[1] = Shape384;

HAnimSegment374.children[2] = HAnimSite382;

HAnimJoint373.children = new MFNode();

HAnimJoint373.children[0] = HAnimSegment374;

HAnimJoint HAnimJoint385 = createNode("HAnimJoint");
HAnimJoint385.name = "l_metatarsophalangeal_5";
HAnimJoint385.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint385.center = new SFVec3f(new float[0,1,0]);
HAnimJoint385.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint385.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment386 = createNode("HAnimSegment");
HAnimSegment386.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment386.DEF = "hanim_l_tarsal_proximal_phalanx_5";
Transform Transform387 = createNode("Transform");
//Empty Transform
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
Coordinate392.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet391.coord = Coordinate392;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA393 = createNode("ColorRGBA");
ColorRGBA393.USE = "HAnimSegmentLineColorRGBA";
LineSet391.color = ColorRGBA393;

Shape390.geometry = LineSet391;

HAnimSegment386.children[1] = Shape390;

HAnimJoint385.children = new MFNode();

HAnimJoint385.children[0] = HAnimSegment386;

HAnimJoint HAnimJoint394 = createNode("HAnimJoint");
HAnimJoint394.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint394.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint394.center = new SFVec3f(new float[0,1,0]);
HAnimJoint394.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint394.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment395 = createNode("HAnimSegment");
HAnimSegment395.name = "l_tarsal_middle_phalanx_5";
HAnimSegment395.DEF = "hanim_l_tarsal_middle_phalanx_5";
Transform Transform396 = createNode("Transform");
//Empty Transform
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
Coordinate401.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet400.coord = Coordinate401;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA402 = createNode("ColorRGBA");
ColorRGBA402.USE = "HAnimSegmentLineColorRGBA";
LineSet400.color = ColorRGBA402;

Shape399.geometry = LineSet400;

HAnimSegment395.children[1] = Shape399;

HAnimSite HAnimSite403 = createNode("HAnimSite");
HAnimSite403.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite403.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite403.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor404 = createNode("TouchSensor");
TouchSensor404.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite403.children = new MFNode();

HAnimSite403.children[0] = TouchSensor404;

Shape Shape405 = createNode("Shape");
Shape405.USE = "HAnimSiteShape";
HAnimSite403.children[1] = Shape405;

HAnimSegment395.children[2] = HAnimSite403;

HAnimJoint394.children = new MFNode();

HAnimJoint394.children[0] = HAnimSegment395;

HAnimJoint HAnimJoint406 = createNode("HAnimJoint");
HAnimJoint406.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint406.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint406.center = new SFVec3f(new float[0,1,0]);
HAnimJoint406.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint406.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint394.children[1] = HAnimJoint406;

HAnimJoint385.children[1] = HAnimJoint394;

HAnimJoint373.children[1] = HAnimJoint385;

HAnimJoint329.children[2] = HAnimJoint373;

HAnimJoint320.children[1] = HAnimJoint329;

HAnimJoint176.children[2] = HAnimJoint320;

HAnimJoint161.children[1] = HAnimJoint176;

HAnimJoint143.children[1] = HAnimJoint161;

HAnimJoint106.children[1] = HAnimJoint143;

HAnimJoint HAnimJoint407 = createNode("HAnimJoint");
HAnimJoint407.name = "r_hip";
HAnimJoint407.DEF = "hanim_r_hip";
HAnimJoint407.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint407.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint407.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment408 = createNode("HAnimSegment");
HAnimSegment408.name = "r_thigh";
HAnimSegment408.DEF = "hanim_r_thigh";
Transform Transform409 = createNode("Transform");
//Empty Transform
Transform Transform410 = createNode("Transform");
//Empty Transform
Shape Shape411 = createNode("Shape");
Shape411.USE = "HAnimJointShape";
Transform410.child = new undefined();

Transform410.child[0] = Shape411;

Transform409.children = new MFNode();

Transform409.children[0] = Transform410;

HAnimSegment408.children = new MFNode();

HAnimSegment408.children[0] = Transform409;

Shape Shape412 = createNode("Shape");
LineSet LineSet413 = createNode("LineSet");
LineSet413.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate414 = createNode("Coordinate");
Coordinate414.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet413.coord = Coordinate414;

//from r_hip to r_knee vertices 2
ColorRGBA ColorRGBA415 = createNode("ColorRGBA");
ColorRGBA415.USE = "HAnimSegmentLineColorRGBA";
LineSet413.color = ColorRGBA415;

Shape412.geometry = LineSet413;

HAnimSegment408.children[1] = Shape412;

HAnimSite HAnimSite416 = createNode("HAnimSite");
HAnimSite416.name = "r_lateral_malleolus_pt";
HAnimSite416.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite416.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor417 = createNode("TouchSensor");
TouchSensor417.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite416.children = new MFNode();

HAnimSite416.children[0] = TouchSensor417;

Shape Shape418 = createNode("Shape");
Shape418.USE = "HAnimSiteShape";
HAnimSite416.children[1] = Shape418;

HAnimSegment408.children[2] = HAnimSite416;

HAnimSite HAnimSite419 = createNode("HAnimSite");
HAnimSite419.name = "r_medial_malleolus_pt";
HAnimSite419.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite419.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor420 = createNode("TouchSensor");
TouchSensor420.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite419.children = new MFNode();

HAnimSite419.children[0] = TouchSensor420;

Shape Shape421 = createNode("Shape");
Shape421.USE = "HAnimSiteShape";
HAnimSite419.children[1] = Shape421;

HAnimSegment408.children[3] = HAnimSite419;

HAnimSite HAnimSite422 = createNode("HAnimSite");
HAnimSite422.name = "r_tibiale_pt";
HAnimSite422.DEF = "hanim_r_tibiale_pt";
HAnimSite422.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor423 = createNode("TouchSensor");
TouchSensor423.description = "HAnimSite r_tibiale_pt";
HAnimSite422.children = new MFNode();

HAnimSite422.children[0] = TouchSensor423;

Shape Shape424 = createNode("Shape");
Shape424.USE = "HAnimSiteShape";
HAnimSite422.children[1] = Shape424;

HAnimSegment408.children[4] = HAnimSite422;

HAnimJoint407.children = new MFNode();

HAnimJoint407.children[0] = HAnimSegment408;

HAnimJoint HAnimJoint425 = createNode("HAnimJoint");
HAnimJoint425.name = "r_knee";
HAnimJoint425.DEF = "hanim_r_knee";
HAnimJoint425.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint425.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint425.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment426 = createNode("HAnimSegment");
HAnimSegment426.name = "r_calf";
HAnimSegment426.DEF = "hanim_r_calf";
Transform Transform427 = createNode("Transform");
//Empty Transform
Transform Transform428 = createNode("Transform");
//Empty Transform
Shape Shape429 = createNode("Shape");
Shape429.USE = "HAnimJointShape";
Transform428.child = new undefined();

Transform428.child[0] = Shape429;

Transform427.children = new MFNode();

Transform427.children[0] = Transform428;

HAnimSegment426.children = new MFNode();

HAnimSegment426.children[0] = Transform427;

Shape Shape430 = createNode("Shape");
LineSet LineSet431 = createNode("LineSet");
LineSet431.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate432 = createNode("Coordinate");
Coordinate432.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet431.coord = Coordinate432;

//from r_knee to r_talocrural vertices 2
ColorRGBA ColorRGBA433 = createNode("ColorRGBA");
ColorRGBA433.USE = "HAnimSegmentLineColorRGBA";
LineSet431.color = ColorRGBA433;

Shape430.geometry = LineSet431;

HAnimSegment426.children[1] = Shape430;

HAnimSite HAnimSite434 = createNode("HAnimSite");
HAnimSite434.name = "r_calcaneus_posterior_pt";
HAnimSite434.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite434.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor435 = createNode("TouchSensor");
TouchSensor435.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite434.children = new MFNode();

HAnimSite434.children[0] = TouchSensor435;

Shape Shape436 = createNode("Shape");
Shape436.USE = "HAnimSiteShape";
HAnimSite434.children[1] = Shape436;

HAnimSegment426.children[2] = HAnimSite434;

HAnimSite HAnimSite437 = createNode("HAnimSite");
HAnimSite437.name = "r_sphyrion_pt";
HAnimSite437.DEF = "hanim_r_sphyrion_pt";
HAnimSite437.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor438 = createNode("TouchSensor");
TouchSensor438.description = "HAnimSite r_sphyrion_pt";
HAnimSite437.children = new MFNode();

HAnimSite437.children[0] = TouchSensor438;

Shape Shape439 = createNode("Shape");
Shape439.USE = "HAnimSiteShape";
HAnimSite437.children[1] = Shape439;

HAnimSegment426.children[3] = HAnimSite437;

HAnimJoint425.children = new MFNode();

HAnimJoint425.children[0] = HAnimSegment426;

HAnimJoint HAnimJoint440 = createNode("HAnimJoint");
HAnimJoint440.name = "r_talocrural";
HAnimJoint440.DEF = "hanim_r_talocrural";
HAnimJoint440.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint440.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint440.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment441 = createNode("HAnimSegment");
HAnimSegment441.name = "r_talus";
HAnimSegment441.DEF = "hanim_r_talus";
Transform Transform442 = createNode("Transform");
Transform442.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform442.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform442.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
Transform Transform443 = createNode("Transform");
//Empty Transform right foot
Shape Shape444 = createNode("Shape");
Shape444.USE = "HAnimJointShape";
Transform443.child = new undefined();

Transform443.child[0] = Shape444;

Transform442.children = new MFNode();

Transform442.children[0] = Transform443;

HAnimSegment441.children = new MFNode();

HAnimSegment441.children[0] = Transform442;

Shape Shape445 = createNode("Shape");
LineSet LineSet446 = createNode("LineSet");
LineSet446.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate447 = createNode("Coordinate");
Coordinate447.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet446.coord = Coordinate447;

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA ColorRGBA448 = createNode("ColorRGBA");
ColorRGBA448.USE = "HAnimSegmentLineColorRGBA";
LineSet446.color = ColorRGBA448;

Shape445.geometry = LineSet446;

HAnimSegment441.children[1] = Shape445;

Shape Shape449 = createNode("Shape");
LineSet LineSet450 = createNode("LineSet");
LineSet450.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate451 = createNode("Coordinate");
Coordinate451.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet450.coord = Coordinate451;

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA ColorRGBA452 = createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSegmentLineColorRGBA";
LineSet450.color = ColorRGBA452;

Shape449.geometry = LineSet450;

HAnimSegment441.children[2] = Shape449;

HAnimJoint440.children = new MFNode();

HAnimJoint440.children[0] = HAnimSegment441;

HAnimJoint HAnimJoint453 = createNode("HAnimJoint");
HAnimJoint453.name = "r_talocalcaneonavicular";
HAnimJoint453.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint453.center = new SFVec3f(new float[0,1,0]);
HAnimJoint453.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint453.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment454 = createNode("HAnimSegment");
HAnimSegment454.name = "r_navicular";
HAnimSegment454.DEF = "hanim_r_navicular";
Transform Transform455 = createNode("Transform");
//Empty Transform
Transform Transform456 = createNode("Transform");
//Empty Transform
Shape Shape457 = createNode("Shape");
Shape457.USE = "HAnimJointShape";
Transform456.child = new undefined();

Transform456.child[0] = Shape457;

Transform455.children = new MFNode();

Transform455.children[0] = Transform456;

HAnimSegment454.children = new MFNode();

HAnimSegment454.children[0] = Transform455;

Shape Shape458 = createNode("Shape");
LineSet LineSet459 = createNode("LineSet");
LineSet459.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate460 = createNode("Coordinate");
Coordinate460.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet459.coord = Coordinate460;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA ColorRGBA461 = createNode("ColorRGBA");
ColorRGBA461.USE = "HAnimSegmentLineColorRGBA";
LineSet459.color = ColorRGBA461;

Shape458.geometry = LineSet459;

HAnimSegment454.children[1] = Shape458;

Shape Shape462 = createNode("Shape");
LineSet LineSet463 = createNode("LineSet");
LineSet463.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate464 = createNode("Coordinate");
Coordinate464.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet463.coord = Coordinate464;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA ColorRGBA465 = createNode("ColorRGBA");
ColorRGBA465.USE = "HAnimSegmentLineColorRGBA";
LineSet463.color = ColorRGBA465;

Shape462.geometry = LineSet463;

HAnimSegment454.children[2] = Shape462;

Shape Shape466 = createNode("Shape");
LineSet LineSet467 = createNode("LineSet");
LineSet467.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate468 = createNode("Coordinate");
Coordinate468.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet467.coord = Coordinate468;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA ColorRGBA469 = createNode("ColorRGBA");
ColorRGBA469.USE = "HAnimSegmentLineColorRGBA";
LineSet467.color = ColorRGBA469;

Shape466.geometry = LineSet467;

HAnimSegment454.children[3] = Shape466;

HAnimJoint453.children = new MFNode();

HAnimJoint453.children[0] = HAnimSegment454;

HAnimJoint HAnimJoint470 = createNode("HAnimJoint");
HAnimJoint470.name = "r_cuneonavicular_1";
HAnimJoint470.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint470.center = new SFVec3f(new float[0,1,0]);
HAnimJoint470.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint470.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment471 = createNode("HAnimSegment");
HAnimSegment471.name = "r_cuneiform_1";
HAnimSegment471.DEF = "hanim_r_cuneiform_1";
Transform Transform472 = createNode("Transform");
//Empty Transform
Transform Transform473 = createNode("Transform");
//Empty Transform
Shape Shape474 = createNode("Shape");
Shape474.USE = "HAnimJointShape";
Transform473.child = new undefined();

Transform473.child[0] = Shape474;

Transform472.children = new MFNode();

Transform472.children[0] = Transform473;

HAnimSegment471.children = new MFNode();

HAnimSegment471.children[0] = Transform472;

Shape Shape475 = createNode("Shape");
LineSet LineSet476 = createNode("LineSet");
LineSet476.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate477 = createNode("Coordinate");
Coordinate477.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet476.coord = Coordinate477;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA ColorRGBA478 = createNode("ColorRGBA");
ColorRGBA478.USE = "HAnimSegmentLineColorRGBA";
LineSet476.color = ColorRGBA478;

Shape475.geometry = LineSet476;

HAnimSegment471.children[1] = Shape475;

HAnimJoint470.children = new MFNode();

HAnimJoint470.children[0] = HAnimSegment471;

HAnimJoint HAnimJoint479 = createNode("HAnimJoint");
HAnimJoint479.name = "r_tarsometatarsal_1";
HAnimJoint479.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint479.center = new SFVec3f(new float[0,1,0]);
HAnimJoint479.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint479.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment480 = createNode("HAnimSegment");
HAnimSegment480.name = "r_metatarsal_1";
HAnimSegment480.DEF = "hanim_r_metatarsal_1";
Transform Transform481 = createNode("Transform");
//Empty Transform
Transform Transform482 = createNode("Transform");
//Empty Transform
Shape Shape483 = createNode("Shape");
Shape483.USE = "HAnimJointShape";
Transform482.child = new undefined();

Transform482.child[0] = Shape483;

Transform481.children = new MFNode();

Transform481.children[0] = Transform482;

HAnimSegment480.children = new MFNode();

HAnimSegment480.children[0] = Transform481;

Shape Shape484 = createNode("Shape");
LineSet LineSet485 = createNode("LineSet");
LineSet485.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate486 = createNode("Coordinate");
Coordinate486.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet485.coord = Coordinate486;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA ColorRGBA487 = createNode("ColorRGBA");
ColorRGBA487.USE = "HAnimSegmentLineColorRGBA";
LineSet485.color = ColorRGBA487;

Shape484.geometry = LineSet485;

HAnimSegment480.children[1] = Shape484;

HAnimSite HAnimSite488 = createNode("HAnimSite");
HAnimSite488.name = "r_metatarsal_phalanx_1_pt";
HAnimSite488.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite488.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor489 = createNode("TouchSensor");
TouchSensor489.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite488.children = new MFNode();

HAnimSite488.children[0] = TouchSensor489;

Shape Shape490 = createNode("Shape");
Shape490.USE = "HAnimSiteShape";
HAnimSite488.children[1] = Shape490;

HAnimSegment480.children[2] = HAnimSite488;

HAnimJoint479.children = new MFNode();

HAnimJoint479.children[0] = HAnimSegment480;

HAnimJoint HAnimJoint491 = createNode("HAnimJoint");
HAnimJoint491.name = "r_metatarsophalangeal_1";
HAnimJoint491.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint491.center = new SFVec3f(new float[0,1,0]);
HAnimJoint491.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint491.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment492 = createNode("HAnimSegment");
HAnimSegment492.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment492.DEF = "hanim_r_tarsal_proximal_phalanx_1";
Transform Transform493 = createNode("Transform");
//Empty Transform
Transform Transform494 = createNode("Transform");
//Empty Transform
Shape Shape495 = createNode("Shape");
Shape495.USE = "HAnimJointShape";
Transform494.child = new undefined();

Transform494.child[0] = Shape495;

Transform493.children = new MFNode();

Transform493.children[0] = Transform494;

HAnimSegment492.children = new MFNode();

HAnimSegment492.children[0] = Transform493;

Shape Shape496 = createNode("Shape");
LineSet LineSet497 = createNode("LineSet");
LineSet497.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate498 = createNode("Coordinate");
Coordinate498.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet497.coord = Coordinate498;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA499 = createNode("ColorRGBA");
ColorRGBA499.USE = "HAnimSegmentLineColorRGBA";
LineSet497.color = ColorRGBA499;

Shape496.geometry = LineSet497;

HAnimSegment492.children[1] = Shape496;

HAnimSite HAnimSite500 = createNode("HAnimSite");
HAnimSite500.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite500.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite500.translation = new SFVec3f(new float[0.1,-1.05,0]);
TouchSensor TouchSensor501 = createNode("TouchSensor");
TouchSensor501.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite500.children = new MFNode();

HAnimSite500.children[0] = TouchSensor501;

Shape Shape502 = createNode("Shape");
Shape502.USE = "HAnimSiteShape";
HAnimSite500.children[1] = Shape502;

HAnimSegment492.children[2] = HAnimSite500;

HAnimJoint491.children = new MFNode();

HAnimJoint491.children[0] = HAnimSegment492;

HAnimJoint HAnimJoint503 = createNode("HAnimJoint");
HAnimJoint503.name = "r_tarsal_interphalangeal_1";
HAnimJoint503.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint503.center = new SFVec3f(new float[0,1,0]);
HAnimJoint503.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint503.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint491.children[1] = HAnimJoint503;

HAnimJoint479.children[1] = HAnimJoint491;

HAnimJoint470.children[1] = HAnimJoint479;

HAnimJoint453.children[1] = HAnimJoint470;

HAnimJoint HAnimJoint504 = createNode("HAnimJoint");
HAnimJoint504.name = "r_cuneonavicular_2";
HAnimJoint504.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint504.center = new SFVec3f(new float[0,1,0]);
HAnimJoint504.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint504.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment505 = createNode("HAnimSegment");
HAnimSegment505.name = "r_cuneiform_2";
HAnimSegment505.DEF = "hanim_r_cuneiform_2";
Transform Transform506 = createNode("Transform");
//Empty Transform
Transform Transform507 = createNode("Transform");
//Empty Transform
Shape Shape508 = createNode("Shape");
Shape508.USE = "HAnimJointShape";
Transform507.child = new undefined();

Transform507.child[0] = Shape508;

Transform506.children = new MFNode();

Transform506.children[0] = Transform507;

HAnimSegment505.children = new MFNode();

HAnimSegment505.children[0] = Transform506;

Shape Shape509 = createNode("Shape");
LineSet LineSet510 = createNode("LineSet");
LineSet510.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate511 = createNode("Coordinate");
Coordinate511.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet510.coord = Coordinate511;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA512 = createNode("ColorRGBA");
ColorRGBA512.USE = "HAnimSegmentLineColorRGBA";
LineSet510.color = ColorRGBA512;

Shape509.geometry = LineSet510;

HAnimSegment505.children[1] = Shape509;

HAnimJoint504.children = new MFNode();

HAnimJoint504.children[0] = HAnimSegment505;

HAnimJoint HAnimJoint513 = createNode("HAnimJoint");
HAnimJoint513.name = "r_tarsometatarsal_2";
HAnimJoint513.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint513.center = new SFVec3f(new float[0,1,0]);
HAnimJoint513.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint513.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment514 = createNode("HAnimSegment");
HAnimSegment514.name = "r_metatarsal_2";
HAnimSegment514.DEF = "hanim_r_metatarsal_2";
Transform Transform515 = createNode("Transform");
//Empty Transform
Transform Transform516 = createNode("Transform");
//Empty Transform
Shape Shape517 = createNode("Shape");
Shape517.USE = "HAnimJointShape";
Transform516.child = new undefined();

Transform516.child[0] = Shape517;

Transform515.children = new MFNode();

Transform515.children[0] = Transform516;

HAnimSegment514.children = new MFNode();

HAnimSegment514.children[0] = Transform515;

Shape Shape518 = createNode("Shape");
LineSet LineSet519 = createNode("LineSet");
LineSet519.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate520 = createNode("Coordinate");
Coordinate520.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet519.coord = Coordinate520;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA521 = createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSegmentLineColorRGBA";
LineSet519.color = ColorRGBA521;

Shape518.geometry = LineSet519;

HAnimSegment514.children[1] = Shape518;

HAnimJoint513.children = new MFNode();

HAnimJoint513.children[0] = HAnimSegment514;

HAnimJoint HAnimJoint522 = createNode("HAnimJoint");
HAnimJoint522.name = "r_metatarsophalangeal_2";
HAnimJoint522.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint522.center = new SFVec3f(new float[0,1,0]);
HAnimJoint522.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint522.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment523 = createNode("HAnimSegment");
HAnimSegment523.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment523.DEF = "hanim_r_tarsal_proximal_phalanx_2";
Transform Transform524 = createNode("Transform");
//Empty Transform
Transform Transform525 = createNode("Transform");
//Empty Transform
Shape Shape526 = createNode("Shape");
Shape526.USE = "HAnimJointShape";
Transform525.child = new undefined();

Transform525.child[0] = Shape526;

Transform524.children = new MFNode();

Transform524.children[0] = Transform525;

HAnimSegment523.children = new MFNode();

HAnimSegment523.children[0] = Transform524;

Shape Shape527 = createNode("Shape");
LineSet LineSet528 = createNode("LineSet");
LineSet528.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate529 = createNode("Coordinate");
Coordinate529.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet528.coord = Coordinate529;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA530 = createNode("ColorRGBA");
ColorRGBA530.USE = "HAnimSegmentLineColorRGBA";
LineSet528.color = ColorRGBA530;

Shape527.geometry = LineSet528;

HAnimSegment523.children[1] = Shape527;

HAnimJoint522.children = new MFNode();

HAnimJoint522.children[0] = HAnimSegment523;

HAnimJoint HAnimJoint531 = createNode("HAnimJoint");
HAnimJoint531.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint531.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint531.center = new SFVec3f(new float[0,1,0]);
HAnimJoint531.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint531.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment532 = createNode("HAnimSegment");
HAnimSegment532.name = "r_tarsal_middle_phalanx_2";
HAnimSegment532.DEF = "hanim_r_tarsal_middle_phalanx_2";
Transform Transform533 = createNode("Transform");
//Empty Transform
Transform Transform534 = createNode("Transform");
//Empty Transform
Shape Shape535 = createNode("Shape");
Shape535.USE = "HAnimJointShape";
Transform534.child = new undefined();

Transform534.child[0] = Shape535;

Transform533.children = new MFNode();

Transform533.children[0] = Transform534;

HAnimSegment532.children = new MFNode();

HAnimSegment532.children[0] = Transform533;

Shape Shape536 = createNode("Shape");
LineSet LineSet537 = createNode("LineSet");
LineSet537.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate538 = createNode("Coordinate");
Coordinate538.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet537.coord = Coordinate538;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA539 = createNode("ColorRGBA");
ColorRGBA539.USE = "HAnimSegmentLineColorRGBA";
LineSet537.color = ColorRGBA539;

Shape536.geometry = LineSet537;

HAnimSegment532.children[1] = Shape536;

HAnimSite HAnimSite540 = createNode("HAnimSite");
HAnimSite540.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite540.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite540.translation = new SFVec3f(new float[-0.05,-1.12,0]);
TouchSensor TouchSensor541 = createNode("TouchSensor");
TouchSensor541.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite540.children = new MFNode();

HAnimSite540.children[0] = TouchSensor541;

Shape Shape542 = createNode("Shape");
Shape542.USE = "HAnimSiteShape";
HAnimSite540.children[1] = Shape542;

HAnimSegment532.children[2] = HAnimSite540;

HAnimJoint531.children = new MFNode();

HAnimJoint531.children[0] = HAnimSegment532;

HAnimJoint HAnimJoint543 = createNode("HAnimJoint");
HAnimJoint543.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint543.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint543.center = new SFVec3f(new float[0,1,0]);
HAnimJoint543.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint543.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint531.children[1] = HAnimJoint543;

HAnimJoint522.children[1] = HAnimJoint531;

HAnimJoint513.children[1] = HAnimJoint522;

HAnimJoint504.children[1] = HAnimJoint513;

HAnimJoint453.children[2] = HAnimJoint504;

HAnimJoint HAnimJoint544 = createNode("HAnimJoint");
HAnimJoint544.name = "r_cuneonavicular_3";
HAnimJoint544.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint544.center = new SFVec3f(new float[0,1,0]);
HAnimJoint544.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint544.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment545 = createNode("HAnimSegment");
HAnimSegment545.name = "r_cuneiform_3";
HAnimSegment545.DEF = "hanim_r_cuneiform_3";
Transform Transform546 = createNode("Transform");
//Empty Transform
Transform Transform547 = createNode("Transform");
//Empty Transform
Shape Shape548 = createNode("Shape");
Shape548.USE = "HAnimJointShape";
Transform547.child = new undefined();

Transform547.child[0] = Shape548;

Transform546.children = new MFNode();

Transform546.children[0] = Transform547;

HAnimSegment545.children = new MFNode();

HAnimSegment545.children[0] = Transform546;

Shape Shape549 = createNode("Shape");
LineSet LineSet550 = createNode("LineSet");
LineSet550.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate551 = createNode("Coordinate");
Coordinate551.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet550.coord = Coordinate551;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA ColorRGBA552 = createNode("ColorRGBA");
ColorRGBA552.USE = "HAnimSegmentLineColorRGBA";
LineSet550.color = ColorRGBA552;

Shape549.geometry = LineSet550;

HAnimSegment545.children[1] = Shape549;

HAnimJoint544.children = new MFNode();

HAnimJoint544.children[0] = HAnimSegment545;

HAnimJoint HAnimJoint553 = createNode("HAnimJoint");
HAnimJoint553.name = "r_tarsometatarsal_3";
HAnimJoint553.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint553.center = new SFVec3f(new float[0,1,0]);
HAnimJoint553.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint553.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment554 = createNode("HAnimSegment");
HAnimSegment554.name = "r_metatarsal_3";
HAnimSegment554.DEF = "hanim_r_metatarsal_3";
Transform Transform555 = createNode("Transform");
//Empty Transform
Transform Transform556 = createNode("Transform");
//Empty Transform
Shape Shape557 = createNode("Shape");
Shape557.USE = "HAnimJointShape";
Transform556.child = new undefined();

Transform556.child[0] = Shape557;

Transform555.children = new MFNode();

Transform555.children[0] = Transform556;

HAnimSegment554.children = new MFNode();

HAnimSegment554.children[0] = Transform555;

Shape Shape558 = createNode("Shape");
LineSet LineSet559 = createNode("LineSet");
LineSet559.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate560 = createNode("Coordinate");
Coordinate560.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet559.coord = Coordinate560;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA ColorRGBA561 = createNode("ColorRGBA");
ColorRGBA561.USE = "HAnimSegmentLineColorRGBA";
LineSet559.color = ColorRGBA561;

Shape558.geometry = LineSet559;

HAnimSegment554.children[1] = Shape558;

HAnimJoint553.children = new MFNode();

HAnimJoint553.children[0] = HAnimSegment554;

HAnimJoint HAnimJoint562 = createNode("HAnimJoint");
HAnimJoint562.name = "r_metatarsophalangeal_3";
HAnimJoint562.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint562.center = new SFVec3f(new float[0,1,0]);
HAnimJoint562.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint562.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment563 = createNode("HAnimSegment");
HAnimSegment563.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment563.DEF = "hanim_r_tarsal_proximal_phalanx_3";
Transform Transform564 = createNode("Transform");
//Empty Transform
Transform Transform565 = createNode("Transform");
//Empty Transform
Shape Shape566 = createNode("Shape");
Shape566.USE = "HAnimJointShape";
Transform565.child = new undefined();

Transform565.child[0] = Shape566;

Transform564.children = new MFNode();

Transform564.children[0] = Transform565;

HAnimSegment563.children = new MFNode();

HAnimSegment563.children[0] = Transform564;

Shape Shape567 = createNode("Shape");
LineSet LineSet568 = createNode("LineSet");
LineSet568.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate569 = createNode("Coordinate");
Coordinate569.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet568.coord = Coordinate569;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA570 = createNode("ColorRGBA");
ColorRGBA570.USE = "HAnimSegmentLineColorRGBA";
LineSet568.color = ColorRGBA570;

Shape567.geometry = LineSet568;

HAnimSegment563.children[1] = Shape567;

HAnimJoint562.children = new MFNode();

HAnimJoint562.children[0] = HAnimSegment563;

HAnimJoint HAnimJoint571 = createNode("HAnimJoint");
HAnimJoint571.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint571.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint571.center = new SFVec3f(new float[0,1,0]);
HAnimJoint571.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint571.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment572 = createNode("HAnimSegment");
HAnimSegment572.name = "r_tarsal_middle_phalanx_3";
HAnimSegment572.DEF = "hanim_r_tarsal_middle_phalanx_3";
Transform Transform573 = createNode("Transform");
//Empty Transform
Transform Transform574 = createNode("Transform");
//Empty Transform
Shape Shape575 = createNode("Shape");
Shape575.USE = "HAnimJointShape";
Transform574.child = new undefined();

Transform574.child[0] = Shape575;

Transform573.children = new MFNode();

Transform573.children[0] = Transform574;

HAnimSegment572.children = new MFNode();

HAnimSegment572.children[0] = Transform573;

Shape Shape576 = createNode("Shape");
LineSet LineSet577 = createNode("LineSet");
LineSet577.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate578 = createNode("Coordinate");
Coordinate578.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet577.coord = Coordinate578;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA579 = createNode("ColorRGBA");
ColorRGBA579.USE = "HAnimSegmentLineColorRGBA";
LineSet577.color = ColorRGBA579;

Shape576.geometry = LineSet577;

HAnimSegment572.children[1] = Shape576;

HAnimSite HAnimSite580 = createNode("HAnimSite");
HAnimSite580.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite580.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite580.translation = new SFVec3f(new float[-0.15,-1.13,0]);
TouchSensor TouchSensor581 = createNode("TouchSensor");
TouchSensor581.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite580.children = new MFNode();

HAnimSite580.children[0] = TouchSensor581;

Shape Shape582 = createNode("Shape");
Shape582.USE = "HAnimSiteShape";
HAnimSite580.children[1] = Shape582;

HAnimSegment572.children[2] = HAnimSite580;

HAnimJoint571.children = new MFNode();

HAnimJoint571.children[0] = HAnimSegment572;

HAnimJoint HAnimJoint583 = createNode("HAnimJoint");
HAnimJoint583.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint583.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint583.center = new SFVec3f(new float[0,1,0]);
HAnimJoint583.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint583.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint571.children[1] = HAnimJoint583;

HAnimJoint562.children[1] = HAnimJoint571;

HAnimJoint553.children[1] = HAnimJoint562;

HAnimJoint544.children[1] = HAnimJoint553;

HAnimJoint453.children[3] = HAnimJoint544;

HAnimJoint440.children[1] = HAnimJoint453;

HAnimJoint HAnimJoint584 = createNode("HAnimJoint");
HAnimJoint584.name = "r_calcaneocuboid";
HAnimJoint584.DEF = "hanim_r_calcaneocuboid";
HAnimJoint584.center = new SFVec3f(new float[0,1,0]);
HAnimJoint584.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint584.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment585 = createNode("HAnimSegment");
HAnimSegment585.name = "r_calcaneus";
HAnimSegment585.DEF = "hanim_r_calcaneus";
Transform Transform586 = createNode("Transform");
//Empty Transform
Transform Transform587 = createNode("Transform");
//Empty Transform
Shape Shape588 = createNode("Shape");
Shape588.USE = "HAnimJointShape";
Transform587.child = new undefined();

Transform587.child[0] = Shape588;

Transform586.children = new MFNode();

Transform586.children[0] = Transform587;

HAnimSegment585.children = new MFNode();

HAnimSegment585.children[0] = Transform586;

Shape Shape589 = createNode("Shape");
LineSet LineSet590 = createNode("LineSet");
LineSet590.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate591 = createNode("Coordinate");
Coordinate591.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet590.coord = Coordinate591;

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA ColorRGBA592 = createNode("ColorRGBA");
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA";
LineSet590.color = ColorRGBA592;

Shape589.geometry = LineSet590;

HAnimSegment585.children[1] = Shape589;

HAnimJoint584.children = new MFNode();

HAnimJoint584.children[0] = HAnimSegment585;

HAnimJoint HAnimJoint593 = createNode("HAnimJoint");
HAnimJoint593.name = "r_transversetarsal";
HAnimJoint593.DEF = "hanim_r_transversetarsal";
HAnimJoint593.center = new SFVec3f(new float[0,1,0]);
HAnimJoint593.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint593.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment594 = createNode("HAnimSegment");
HAnimSegment594.name = "r_cuboid";
HAnimSegment594.DEF = "hanim_r_cuboid";
Transform Transform595 = createNode("Transform");
//Empty Transform
Transform Transform596 = createNode("Transform");
//Empty Transform
Shape Shape597 = createNode("Shape");
Shape597.USE = "HAnimJointShape";
Transform596.child = new undefined();

Transform596.child[0] = Shape597;

Transform595.children = new MFNode();

Transform595.children[0] = Transform596;

HAnimSegment594.children = new MFNode();

HAnimSegment594.children[0] = Transform595;

Shape Shape598 = createNode("Shape");
LineSet LineSet599 = createNode("LineSet");
LineSet599.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate600 = createNode("Coordinate");
Coordinate600.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet599.coord = Coordinate600;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA ColorRGBA601 = createNode("ColorRGBA");
ColorRGBA601.USE = "HAnimSegmentLineColorRGBA";
LineSet599.color = ColorRGBA601;

Shape598.geometry = LineSet599;

HAnimSegment594.children[1] = Shape598;

Shape Shape602 = createNode("Shape");
LineSet LineSet603 = createNode("LineSet");
LineSet603.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate604 = createNode("Coordinate");
Coordinate604.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet603.coord = Coordinate604;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA ColorRGBA605 = createNode("ColorRGBA");
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA";
LineSet603.color = ColorRGBA605;

Shape602.geometry = LineSet603;

HAnimSegment594.children[2] = Shape602;

HAnimJoint593.children = new MFNode();

HAnimJoint593.children[0] = HAnimSegment594;

HAnimJoint HAnimJoint606 = createNode("HAnimJoint");
HAnimJoint606.name = "r_tarsometatarsal_4";
HAnimJoint606.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint606.center = new SFVec3f(new float[0,1,0]);
HAnimJoint606.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint606.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment607 = createNode("HAnimSegment");
HAnimSegment607.name = "r_metatarsal_4";
HAnimSegment607.DEF = "hanim_r_metatarsal_4";
Transform Transform608 = createNode("Transform");
//Empty Transform
Transform Transform609 = createNode("Transform");
//Empty Transform
Shape Shape610 = createNode("Shape");
Shape610.USE = "HAnimJointShape";
Transform609.child = new undefined();

Transform609.child[0] = Shape610;

Transform608.children = new MFNode();

Transform608.children[0] = Transform609;

HAnimSegment607.children = new MFNode();

HAnimSegment607.children[0] = Transform608;

Shape Shape611 = createNode("Shape");
LineSet LineSet612 = createNode("LineSet");
LineSet612.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate613 = createNode("Coordinate");
Coordinate613.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet612.coord = Coordinate613;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA ColorRGBA614 = createNode("ColorRGBA");
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA";
LineSet612.color = ColorRGBA614;

Shape611.geometry = LineSet612;

HAnimSegment607.children[1] = Shape611;

HAnimJoint606.children = new MFNode();

HAnimJoint606.children[0] = HAnimSegment607;

HAnimJoint HAnimJoint615 = createNode("HAnimJoint");
HAnimJoint615.name = "r_metatarsophalangeal_4";
HAnimJoint615.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint615.center = new SFVec3f(new float[0,1,0]);
HAnimJoint615.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint615.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment616 = createNode("HAnimSegment");
HAnimSegment616.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment616.DEF = "hanim_r_tarsal_proximal_phalanx_4";
Transform Transform617 = createNode("Transform");
//Empty Transform
Transform Transform618 = createNode("Transform");
//Empty Transform
Shape Shape619 = createNode("Shape");
Shape619.USE = "HAnimJointShape";
Transform618.child = new undefined();

Transform618.child[0] = Shape619;

Transform617.children = new MFNode();

Transform617.children[0] = Transform618;

HAnimSegment616.children = new MFNode();

HAnimSegment616.children[0] = Transform617;

Shape Shape620 = createNode("Shape");
LineSet LineSet621 = createNode("LineSet");
LineSet621.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate622 = createNode("Coordinate");
Coordinate622.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet621.coord = Coordinate622;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA623 = createNode("ColorRGBA");
ColorRGBA623.USE = "HAnimSegmentLineColorRGBA";
LineSet621.color = ColorRGBA623;

Shape620.geometry = LineSet621;

HAnimSegment616.children[1] = Shape620;

HAnimJoint615.children = new MFNode();

HAnimJoint615.children[0] = HAnimSegment616;

HAnimJoint HAnimJoint624 = createNode("HAnimJoint");
HAnimJoint624.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint624.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint624.center = new SFVec3f(new float[0,1,0]);
HAnimJoint624.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint624.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment625 = createNode("HAnimSegment");
HAnimSegment625.name = "r_tarsal_middle_phalanx_4";
HAnimSegment625.DEF = "hanim_r_tarsal_middle_phalanx_4";
Transform Transform626 = createNode("Transform");
//Empty Transform
Transform Transform627 = createNode("Transform");
//Empty Transform
Shape Shape628 = createNode("Shape");
Shape628.USE = "HAnimJointShape";
Transform627.child = new undefined();

Transform627.child[0] = Shape628;

Transform626.children = new MFNode();

Transform626.children[0] = Transform627;

HAnimSegment625.children = new MFNode();

HAnimSegment625.children[0] = Transform626;

Shape Shape629 = createNode("Shape");
LineSet LineSet630 = createNode("LineSet");
LineSet630.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate631 = createNode("Coordinate");
Coordinate631.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet630.coord = Coordinate631;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA632 = createNode("ColorRGBA");
ColorRGBA632.USE = "HAnimSegmentLineColorRGBA";
LineSet630.color = ColorRGBA632;

Shape629.geometry = LineSet630;

HAnimSegment625.children[1] = Shape629;

HAnimSite HAnimSite633 = createNode("HAnimSite");
HAnimSite633.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite633.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite633.translation = new SFVec3f(new float[-0.25,-1.1,0]);
TouchSensor TouchSensor634 = createNode("TouchSensor");
TouchSensor634.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite633.children = new MFNode();

HAnimSite633.children[0] = TouchSensor634;

Shape Shape635 = createNode("Shape");
Shape635.USE = "HAnimSiteShape";
HAnimSite633.children[1] = Shape635;

HAnimSegment625.children[2] = HAnimSite633;

HAnimJoint624.children = new MFNode();

HAnimJoint624.children[0] = HAnimSegment625;

HAnimJoint HAnimJoint636 = createNode("HAnimJoint");
HAnimJoint636.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint636.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint636.center = new SFVec3f(new float[0,1,0]);
HAnimJoint636.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint636.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint624.children[1] = HAnimJoint636;

HAnimJoint615.children[1] = HAnimJoint624;

HAnimJoint606.children[1] = HAnimJoint615;

HAnimJoint593.children[1] = HAnimJoint606;

HAnimJoint HAnimJoint637 = createNode("HAnimJoint");
HAnimJoint637.name = "r_tarsometatarsal_5";
HAnimJoint637.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint637.center = new SFVec3f(new float[0,1,0]);
HAnimJoint637.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint637.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment638 = createNode("HAnimSegment");
HAnimSegment638.name = "r_metatarsal_5";
HAnimSegment638.DEF = "hanim_r_metatarsal_5";
Transform Transform639 = createNode("Transform");
//Empty Transform
Transform Transform640 = createNode("Transform");
//Empty Transform
Shape Shape641 = createNode("Shape");
Shape641.USE = "HAnimJointShape";
Transform640.child = new undefined();

Transform640.child[0] = Shape641;

Transform639.children = new MFNode();

Transform639.children[0] = Transform640;

HAnimSegment638.children = new MFNode();

HAnimSegment638.children[0] = Transform639;

Shape Shape642 = createNode("Shape");
LineSet LineSet643 = createNode("LineSet");
LineSet643.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate644 = createNode("Coordinate");
Coordinate644.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet643.coord = Coordinate644;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA ColorRGBA645 = createNode("ColorRGBA");
ColorRGBA645.USE = "HAnimSegmentLineColorRGBA";
LineSet643.color = ColorRGBA645;

Shape642.geometry = LineSet643;

HAnimSegment638.children[1] = Shape642;

HAnimSite HAnimSite646 = createNode("HAnimSite");
HAnimSite646.name = "r_metatarsal_phalanx_5_pt";
HAnimSite646.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite646.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor647 = createNode("TouchSensor");
TouchSensor647.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite646.children = new MFNode();

HAnimSite646.children[0] = TouchSensor647;

Shape Shape648 = createNode("Shape");
Shape648.USE = "HAnimSiteShape";
HAnimSite646.children[1] = Shape648;

HAnimSegment638.children[2] = HAnimSite646;

HAnimJoint637.children = new MFNode();

HAnimJoint637.children[0] = HAnimSegment638;

HAnimJoint HAnimJoint649 = createNode("HAnimJoint");
HAnimJoint649.name = "r_metatarsophalangeal_5";
HAnimJoint649.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint649.center = new SFVec3f(new float[0,1,0]);
HAnimJoint649.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint649.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment650 = createNode("HAnimSegment");
HAnimSegment650.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment650.DEF = "hanim_r_tarsal_proximal_phalanx_5";
Transform Transform651 = createNode("Transform");
//Empty Transform
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
Coordinate656.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet655.coord = Coordinate656;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA657 = createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
LineSet655.color = ColorRGBA657;

Shape654.geometry = LineSet655;

HAnimSegment650.children[1] = Shape654;

HAnimJoint649.children = new MFNode();

HAnimJoint649.children[0] = HAnimSegment650;

HAnimJoint HAnimJoint658 = createNode("HAnimJoint");
HAnimJoint658.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint658.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint658.center = new SFVec3f(new float[0,1,0]);
HAnimJoint658.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment659 = createNode("HAnimSegment");
HAnimSegment659.name = "r_tarsal_middle_phalanx_5";
HAnimSegment659.DEF = "hanim_r_tarsal_middle_phalanx_5";
Transform Transform660 = createNode("Transform");
//Empty Transform
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
Coordinate665.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet664.coord = Coordinate665;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA666 = createNode("ColorRGBA");
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA";
LineSet664.color = ColorRGBA666;

Shape663.geometry = LineSet664;

HAnimSegment659.children[1] = Shape663;

HAnimSite HAnimSite667 = createNode("HAnimSite");
HAnimSite667.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite667.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite667.translation = new SFVec3f(new float[-0.34,-1.05,0]);
TouchSensor TouchSensor668 = createNode("TouchSensor");
TouchSensor668.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite667.children = new MFNode();

HAnimSite667.children[0] = TouchSensor668;

Shape Shape669 = createNode("Shape");
Shape669.USE = "HAnimSiteShape";
HAnimSite667.children[1] = Shape669;

HAnimSegment659.children[2] = HAnimSite667;

HAnimJoint658.children = new MFNode();

HAnimJoint658.children[0] = HAnimSegment659;

HAnimJoint HAnimJoint670 = createNode("HAnimJoint");
HAnimJoint670.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint670.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint670.center = new SFVec3f(new float[0,1,0]);
HAnimJoint670.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint670.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.children[1] = HAnimJoint670;

HAnimJoint649.children[1] = HAnimJoint658;

HAnimJoint637.children[1] = HAnimJoint649;

HAnimJoint593.children[2] = HAnimJoint637;

HAnimJoint584.children[1] = HAnimJoint593;

HAnimJoint440.children[2] = HAnimJoint584;

HAnimJoint425.children[1] = HAnimJoint440;

HAnimJoint407.children[1] = HAnimJoint425;

HAnimJoint106.children[2] = HAnimJoint407;

HAnimJoint52.children[1] = HAnimJoint106;

HAnimJoint HAnimJoint671 = createNode("HAnimJoint");
HAnimJoint671.name = "vl5";
HAnimJoint671.DEF = "hanim_vl5";
HAnimJoint671.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint671.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint671.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment672 = createNode("HAnimSegment");
HAnimSegment672.name = "l5";
HAnimSegment672.DEF = "hanim_l5";
Transform Transform673 = createNode("Transform");
//Empty Transform
Transform Transform674 = createNode("Transform");
//Empty Transform
Shape Shape675 = createNode("Shape");
Shape675.USE = "HAnimJointShape";
Transform674.child = new undefined();

Transform674.child[0] = Shape675;

Transform673.children = new MFNode();

Transform673.children[0] = Transform674;

HAnimSegment672.children = new MFNode();

HAnimSegment672.children[0] = Transform673;

Shape Shape676 = createNode("Shape");
LineSet LineSet677 = createNode("LineSet");
LineSet677.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate678 = createNode("Coordinate");
Coordinate678.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet677.coord = Coordinate678;

//from vl5 to vl4 vertices 2
ColorRGBA ColorRGBA679 = createNode("ColorRGBA");
ColorRGBA679.USE = "HAnimSegmentLineColorRGBA";
LineSet677.color = ColorRGBA679;

Shape676.geometry = LineSet677;

HAnimSegment672.children[1] = Shape676;

HAnimJoint671.children = new MFNode();

HAnimJoint671.children[0] = HAnimSegment672;

HAnimJoint HAnimJoint680 = createNode("HAnimJoint");
HAnimJoint680.name = "vl4";
HAnimJoint680.DEF = "hanim_vl4";
HAnimJoint680.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint680.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint680.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment681 = createNode("HAnimSegment");
HAnimSegment681.name = "l4";
HAnimSegment681.DEF = "hanim_l4";
Transform Transform682 = createNode("Transform");
//Empty Transform
Transform Transform683 = createNode("Transform");
//Empty Transform
Shape Shape684 = createNode("Shape");
Shape684.USE = "HAnimJointShape";
Transform683.child = new undefined();

Transform683.child[0] = Shape684;

Transform682.children = new MFNode();

Transform682.children[0] = Transform683;

HAnimSegment681.children = new MFNode();

HAnimSegment681.children[0] = Transform682;

Shape Shape685 = createNode("Shape");
LineSet LineSet686 = createNode("LineSet");
LineSet686.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate687 = createNode("Coordinate");
Coordinate687.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet686.coord = Coordinate687;

//from vl4 to vl3 vertices 2
ColorRGBA ColorRGBA688 = createNode("ColorRGBA");
ColorRGBA688.USE = "HAnimSegmentLineColorRGBA";
LineSet686.color = ColorRGBA688;

Shape685.geometry = LineSet686;

HAnimSegment681.children[1] = Shape685;

HAnimJoint680.children = new MFNode();

HAnimJoint680.children[0] = HAnimSegment681;

HAnimJoint HAnimJoint689 = createNode("HAnimJoint");
HAnimJoint689.name = "vl3";
HAnimJoint689.DEF = "hanim_vl3";
HAnimJoint689.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint689.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint689.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment690 = createNode("HAnimSegment");
HAnimSegment690.name = "l3";
HAnimSegment690.DEF = "hanim_l3";
Transform Transform691 = createNode("Transform");
//Empty Transform
Transform Transform692 = createNode("Transform");
//Empty Transform
Shape Shape693 = createNode("Shape");
Shape693.USE = "HAnimJointShape";
Transform692.child = new undefined();

Transform692.child[0] = Shape693;

Transform691.children = new MFNode();

Transform691.children[0] = Transform692;

HAnimSegment690.children = new MFNode();

HAnimSegment690.children[0] = Transform691;

Shape Shape694 = createNode("Shape");
LineSet LineSet695 = createNode("LineSet");
LineSet695.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate696 = createNode("Coordinate");
Coordinate696.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet695.coord = Coordinate696;

//from vl3 to vl2 vertices 2
ColorRGBA ColorRGBA697 = createNode("ColorRGBA");
ColorRGBA697.USE = "HAnimSegmentLineColorRGBA";
LineSet695.color = ColorRGBA697;

Shape694.geometry = LineSet695;

HAnimSegment690.children[1] = Shape694;

HAnimSite HAnimSite698 = createNode("HAnimSite");
HAnimSite698.name = "l_rib10_pt";
HAnimSite698.DEF = "hanim_l_rib10_pt";
HAnimSite698.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor699 = createNode("TouchSensor");
TouchSensor699.description = "HAnimSite l_rib10_pt";
HAnimSite698.children = new MFNode();

HAnimSite698.children[0] = TouchSensor699;

Shape Shape700 = createNode("Shape");
Shape700.USE = "HAnimSiteShape";
HAnimSite698.children[1] = Shape700;

HAnimSegment690.children[2] = HAnimSite698;

HAnimSite HAnimSite701 = createNode("HAnimSite");
HAnimSite701.name = "r_rib10_pt";
HAnimSite701.DEF = "hanim_r_rib10_pt";
HAnimSite701.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor702 = createNode("TouchSensor");
TouchSensor702.description = "HAnimSite r_rib10_pt";
HAnimSite701.children = new MFNode();

HAnimSite701.children[0] = TouchSensor702;

Shape Shape703 = createNode("Shape");
Shape703.USE = "HAnimSiteShape";
HAnimSite701.children[1] = Shape703;

HAnimSegment690.children[3] = HAnimSite701;

HAnimSite HAnimSite704 = createNode("HAnimSite");
HAnimSite704.name = "spine_2_middle_back_pt";
HAnimSite704.DEF = "hanim_spine_2_middle_back_pt";
HAnimSite704.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor705 = createNode("TouchSensor");
TouchSensor705.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite704.children = new MFNode();

HAnimSite704.children[0] = TouchSensor705;

Shape Shape706 = createNode("Shape");
Shape706.USE = "HAnimSiteShape";
HAnimSite704.children[1] = Shape706;

HAnimSegment690.children[4] = HAnimSite704;

HAnimJoint689.children = new MFNode();

HAnimJoint689.children[0] = HAnimSegment690;

HAnimJoint HAnimJoint707 = createNode("HAnimJoint");
HAnimJoint707.name = "vl2";
HAnimJoint707.DEF = "hanim_vl2";
HAnimJoint707.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint707.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint707.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment708 = createNode("HAnimSegment");
HAnimSegment708.name = "l2";
HAnimSegment708.DEF = "hanim_l2";
Transform Transform709 = createNode("Transform");
//Empty Transform
Transform Transform710 = createNode("Transform");
//Empty Transform
Shape Shape711 = createNode("Shape");
Shape711.USE = "HAnimJointShape";
Transform710.child = new undefined();

Transform710.child[0] = Shape711;

Transform709.children = new MFNode();

Transform709.children[0] = Transform710;

HAnimSegment708.children = new MFNode();

HAnimSegment708.children[0] = Transform709;

Shape Shape712 = createNode("Shape");
LineSet LineSet713 = createNode("LineSet");
LineSet713.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate714 = createNode("Coordinate");
Coordinate714.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet713.coord = Coordinate714;

//from vl2 to vl1 vertices 2
ColorRGBA ColorRGBA715 = createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
LineSet713.color = ColorRGBA715;

Shape712.geometry = LineSet713;

HAnimSegment708.children[1] = Shape712;

HAnimJoint707.children = new MFNode();

HAnimJoint707.children[0] = HAnimSegment708;

HAnimJoint HAnimJoint716 = createNode("HAnimJoint");
HAnimJoint716.name = "vl1";
HAnimJoint716.DEF = "hanim_vl1";
HAnimJoint716.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint716.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint716.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment717 = createNode("HAnimSegment");
HAnimSegment717.name = "l1";
HAnimSegment717.DEF = "hanim_l1";
Transform Transform718 = createNode("Transform");
//Empty Transform
Transform Transform719 = createNode("Transform");
//Empty Transform
Shape Shape720 = createNode("Shape");
Shape720.USE = "HAnimJointShape";
Transform719.child = new undefined();

Transform719.child[0] = Shape720;

Transform718.children = new MFNode();

Transform718.children[0] = Transform719;

HAnimSegment717.children = new MFNode();

HAnimSegment717.children[0] = Transform718;

Shape Shape721 = createNode("Shape");
LineSet LineSet722 = createNode("LineSet");
LineSet722.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate723 = createNode("Coordinate");
Coordinate723.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet722.coord = Coordinate723;

//from vl1 to vt12 vertices 2
ColorRGBA ColorRGBA724 = createNode("ColorRGBA");
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA724;

Shape721.geometry = LineSet722;

HAnimSegment717.children[1] = Shape721;

HAnimJoint716.children = new MFNode();

HAnimJoint716.children[0] = HAnimSegment717;

HAnimJoint HAnimJoint725 = createNode("HAnimJoint");
HAnimJoint725.name = "vt12";
HAnimJoint725.DEF = "hanim_vt12";
HAnimJoint725.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint725.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint725.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment726 = createNode("HAnimSegment");
HAnimSegment726.name = "t12";
HAnimSegment726.DEF = "hanim_t12";
Transform Transform727 = createNode("Transform");
//Empty Transform
Transform Transform728 = createNode("Transform");
//Empty Transform
Shape Shape729 = createNode("Shape");
Shape729.USE = "HAnimJointShape";
Transform728.child = new undefined();

Transform728.child[0] = Shape729;

Transform727.children = new MFNode();

Transform727.children[0] = Transform728;

HAnimSegment726.children = new MFNode();

HAnimSegment726.children[0] = Transform727;

Shape Shape730 = createNode("Shape");
LineSet LineSet731 = createNode("LineSet");
LineSet731.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate732 = createNode("Coordinate");
Coordinate732.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet731.coord = Coordinate732;

//from vt12 to vt11 vertices 2
ColorRGBA ColorRGBA733 = createNode("ColorRGBA");
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA";
LineSet731.color = ColorRGBA733;

Shape730.geometry = LineSet731;

HAnimSegment726.children[1] = Shape730;

HAnimJoint725.children = new MFNode();

HAnimJoint725.children[0] = HAnimSegment726;

HAnimJoint HAnimJoint734 = createNode("HAnimJoint");
HAnimJoint734.name = "vt11";
HAnimJoint734.DEF = "hanim_vt11";
HAnimJoint734.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint734.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint734.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment735 = createNode("HAnimSegment");
HAnimSegment735.name = "t11";
HAnimSegment735.DEF = "hanim_t11";
Transform Transform736 = createNode("Transform");
//Empty Transform
Transform Transform737 = createNode("Transform");
//Empty Transform
Shape Shape738 = createNode("Shape");
Shape738.USE = "HAnimJointShape";
Transform737.child = new undefined();

Transform737.child[0] = Shape738;

Transform736.children = new MFNode();

Transform736.children[0] = Transform737;

HAnimSegment735.children = new MFNode();

HAnimSegment735.children[0] = Transform736;

Shape Shape739 = createNode("Shape");
LineSet LineSet740 = createNode("LineSet");
LineSet740.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate741 = createNode("Coordinate");
Coordinate741.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet740.coord = Coordinate741;

//from vt11 to vt10 vertices 2
ColorRGBA ColorRGBA742 = createNode("ColorRGBA");
ColorRGBA742.USE = "HAnimSegmentLineColorRGBA";
LineSet740.color = ColorRGBA742;

Shape739.geometry = LineSet740;

HAnimSegment735.children[1] = Shape739;

HAnimSite HAnimSite743 = createNode("HAnimSite");
HAnimSite743.name = "substernale_pt";
HAnimSite743.DEF = "hanim_substernale_pt";
HAnimSite743.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor744 = createNode("TouchSensor");
TouchSensor744.description = "HAnimSite substernale_pt";
HAnimSite743.children = new MFNode();

HAnimSite743.children[0] = TouchSensor744;

Shape Shape745 = createNode("Shape");
Shape745.USE = "HAnimSiteShape";
HAnimSite743.children[1] = Shape745;

HAnimSegment735.children[2] = HAnimSite743;

HAnimJoint734.children = new MFNode();

HAnimJoint734.children[0] = HAnimSegment735;

HAnimJoint HAnimJoint746 = createNode("HAnimJoint");
HAnimJoint746.name = "vt10";
HAnimJoint746.DEF = "hanim_vt10";
HAnimJoint746.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint746.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint746.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment747 = createNode("HAnimSegment");
HAnimSegment747.name = "t10";
HAnimSegment747.DEF = "hanim_t10";
Transform Transform748 = createNode("Transform");
//Empty Transform
Transform Transform749 = createNode("Transform");
//Empty Transform
Shape Shape750 = createNode("Shape");
Shape750.USE = "HAnimJointShape";
Transform749.child = new undefined();

Transform749.child[0] = Shape750;

Transform748.children = new MFNode();

Transform748.children[0] = Transform749;

HAnimSegment747.children = new MFNode();

HAnimSegment747.children[0] = Transform748;

Shape Shape751 = createNode("Shape");
LineSet LineSet752 = createNode("LineSet");
LineSet752.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate753 = createNode("Coordinate");
Coordinate753.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet752.coord = Coordinate753;

//from vt10 to vt9 vertices 2
ColorRGBA ColorRGBA754 = createNode("ColorRGBA");
ColorRGBA754.USE = "HAnimSegmentLineColorRGBA";
LineSet752.color = ColorRGBA754;

Shape751.geometry = LineSet752;

HAnimSegment747.children[1] = Shape751;

HAnimSite HAnimSite755 = createNode("HAnimSite");
HAnimSite755.name = "l_thelion_pt";
HAnimSite755.DEF = "hanim_l_thelion_pt";
HAnimSite755.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor756 = createNode("TouchSensor");
TouchSensor756.description = "HAnimSite l_thelion_pt";
HAnimSite755.children = new MFNode();

HAnimSite755.children[0] = TouchSensor756;

Shape Shape757 = createNode("Shape");
Shape757.USE = "HAnimSiteShape";
HAnimSite755.children[1] = Shape757;

HAnimSegment747.children[2] = HAnimSite755;

HAnimSite HAnimSite758 = createNode("HAnimSite");
HAnimSite758.name = "r_thelion_pt";
HAnimSite758.DEF = "hanim_r_thelion_pt";
HAnimSite758.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor759 = createNode("TouchSensor");
TouchSensor759.description = "HAnimSite r_thelion_pt";
HAnimSite758.children = new MFNode();

HAnimSite758.children[0] = TouchSensor759;

Shape Shape760 = createNode("Shape");
Shape760.USE = "HAnimSiteShape";
HAnimSite758.children[1] = Shape760;

HAnimSegment747.children[3] = HAnimSite758;

HAnimJoint746.children = new MFNode();

HAnimJoint746.children[0] = HAnimSegment747;

HAnimJoint HAnimJoint761 = createNode("HAnimJoint");
HAnimJoint761.name = "vt9";
HAnimJoint761.DEF = "hanim_vt9";
HAnimJoint761.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint761.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint761.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment762 = createNode("HAnimSegment");
HAnimSegment762.name = "t9";
HAnimSegment762.DEF = "hanim_t9";
Transform Transform763 = createNode("Transform");
//Empty Transform
Transform Transform764 = createNode("Transform");
//Empty Transform
Shape Shape765 = createNode("Shape");
Shape765.USE = "HAnimJointShape";
Transform764.child = new undefined();

Transform764.child[0] = Shape765;

Transform763.children = new MFNode();

Transform763.children[0] = Transform764;

HAnimSegment762.children = new MFNode();

HAnimSegment762.children[0] = Transform763;

Shape Shape766 = createNode("Shape");
LineSet LineSet767 = createNode("LineSet");
LineSet767.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate768 = createNode("Coordinate");
Coordinate768.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet767.coord = Coordinate768;

//from vt9 to vt8 vertices 2
ColorRGBA ColorRGBA769 = createNode("ColorRGBA");
ColorRGBA769.USE = "HAnimSegmentLineColorRGBA";
LineSet767.color = ColorRGBA769;

Shape766.geometry = LineSet767;

HAnimSegment762.children[1] = Shape766;

HAnimJoint761.children = new MFNode();

HAnimJoint761.children[0] = HAnimSegment762;

HAnimJoint HAnimJoint770 = createNode("HAnimJoint");
HAnimJoint770.name = "vt8";
HAnimJoint770.DEF = "hanim_vt8";
HAnimJoint770.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint770.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint770.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment771 = createNode("HAnimSegment");
HAnimSegment771.name = "t8";
HAnimSegment771.DEF = "hanim_t8";
Transform Transform772 = createNode("Transform");
//Empty Transform
Transform Transform773 = createNode("Transform");
//Empty Transform
Shape Shape774 = createNode("Shape");
Shape774.USE = "HAnimJointShape";
Transform773.child = new undefined();

Transform773.child[0] = Shape774;

Transform772.children = new MFNode();

Transform772.children[0] = Transform773;

HAnimSegment771.children = new MFNode();

HAnimSegment771.children[0] = Transform772;

Shape Shape775 = createNode("Shape");
LineSet LineSet776 = createNode("LineSet");
LineSet776.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate777 = createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet776.coord = Coordinate777;

//from vt8 to vt7 vertices 2
ColorRGBA ColorRGBA778 = createNode("ColorRGBA");
ColorRGBA778.USE = "HAnimSegmentLineColorRGBA";
LineSet776.color = ColorRGBA778;

Shape775.geometry = LineSet776;

HAnimSegment771.children[1] = Shape775;

HAnimJoint770.children = new MFNode();

HAnimJoint770.children[0] = HAnimSegment771;

HAnimJoint HAnimJoint779 = createNode("HAnimJoint");
HAnimJoint779.name = "vt7";
HAnimJoint779.DEF = "hanim_vt7";
HAnimJoint779.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint779.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint779.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment780 = createNode("HAnimSegment");
HAnimSegment780.name = "t7";
HAnimSegment780.DEF = "hanim_t7";
Transform Transform781 = createNode("Transform");
//Empty Transform
Transform Transform782 = createNode("Transform");
//Empty Transform
Shape Shape783 = createNode("Shape");
Shape783.USE = "HAnimJointShape";
Transform782.child = new undefined();

Transform782.child[0] = Shape783;

Transform781.children = new MFNode();

Transform781.children[0] = Transform782;

HAnimSegment780.children = new MFNode();

HAnimSegment780.children[0] = Transform781;

Shape Shape784 = createNode("Shape");
LineSet LineSet785 = createNode("LineSet");
LineSet785.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate786 = createNode("Coordinate");
Coordinate786.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet785.coord = Coordinate786;

//from vt7 to vt6 vertices 2
ColorRGBA ColorRGBA787 = createNode("ColorRGBA");
ColorRGBA787.USE = "HAnimSegmentLineColorRGBA";
LineSet785.color = ColorRGBA787;

Shape784.geometry = LineSet785;

HAnimSegment780.children[1] = Shape784;

HAnimSite HAnimSite788 = createNode("HAnimSite");
HAnimSite788.name = "l_chest_midsagittal_plane_pt";
HAnimSite788.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite788.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor789 = createNode("TouchSensor");
TouchSensor789.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite788.children = new MFNode();

HAnimSite788.children[0] = TouchSensor789;

Shape Shape790 = createNode("Shape");
Shape790.USE = "HAnimSiteShape";
HAnimSite788.children[1] = Shape790;

HAnimSegment780.children[2] = HAnimSite788;

HAnimSite HAnimSite791 = createNode("HAnimSite");
HAnimSite791.name = "mesosternale_pt";
HAnimSite791.DEF = "hanim_mesosternale_pt";
HAnimSite791.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor792 = createNode("TouchSensor");
TouchSensor792.description = "HAnimSite mesosternale_pt";
HAnimSite791.children = new MFNode();

HAnimSite791.children[0] = TouchSensor792;

Shape Shape793 = createNode("Shape");
Shape793.USE = "HAnimSiteShape";
HAnimSite791.children[1] = Shape793;

HAnimSegment780.children[3] = HAnimSite791;

HAnimSite HAnimSite794 = createNode("HAnimSite");
HAnimSite794.name = "r_chest_midsagittal_plane_pt";
HAnimSite794.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite794.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor795 = createNode("TouchSensor");
TouchSensor795.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite794.children = new MFNode();

HAnimSite794.children[0] = TouchSensor795;

Shape Shape796 = createNode("Shape");
Shape796.USE = "HAnimSiteShape";
HAnimSite794.children[1] = Shape796;

HAnimSegment780.children[4] = HAnimSite794;

HAnimSite HAnimSite797 = createNode("HAnimSite");
HAnimSite797.name = "rear_center_midsagittal_plane_pt";
HAnimSite797.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite797.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor798 = createNode("TouchSensor");
TouchSensor798.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite797.children = new MFNode();

HAnimSite797.children[0] = TouchSensor798;

Shape Shape799 = createNode("Shape");
Shape799.USE = "HAnimSiteShape";
HAnimSite797.children[1] = Shape799;

HAnimSegment780.children[5] = HAnimSite797;

HAnimJoint779.children = new MFNode();

HAnimJoint779.children[0] = HAnimSegment780;

HAnimJoint HAnimJoint800 = createNode("HAnimJoint");
HAnimJoint800.name = "vt6";
HAnimJoint800.DEF = "hanim_vt6";
HAnimJoint800.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint800.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint800.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment801 = createNode("HAnimSegment");
HAnimSegment801.name = "t6";
HAnimSegment801.DEF = "hanim_t6";
Transform Transform802 = createNode("Transform");
//Empty Transform
Transform Transform803 = createNode("Transform");
//Empty Transform
Shape Shape804 = createNode("Shape");
Shape804.USE = "HAnimJointShape";
Transform803.child = new undefined();

Transform803.child[0] = Shape804;

Transform802.children = new MFNode();

Transform802.children[0] = Transform803;

HAnimSegment801.children = new MFNode();

HAnimSegment801.children[0] = Transform802;

Shape Shape805 = createNode("Shape");
LineSet LineSet806 = createNode("LineSet");
LineSet806.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate807 = createNode("Coordinate");
Coordinate807.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet806.coord = Coordinate807;

//from vt6 to vt5 vertices 2
ColorRGBA ColorRGBA808 = createNode("ColorRGBA");
ColorRGBA808.USE = "HAnimSegmentLineColorRGBA";
LineSet806.color = ColorRGBA808;

Shape805.geometry = LineSet806;

HAnimSegment801.children[1] = Shape805;

HAnimSite HAnimSite809 = createNode("HAnimSite");
HAnimSite809.name = "spine_1_middle_back_pt";
HAnimSite809.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite809.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor810 = createNode("TouchSensor");
TouchSensor810.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite809.children = new MFNode();

HAnimSite809.children[0] = TouchSensor810;

Shape Shape811 = createNode("Shape");
Shape811.USE = "HAnimSiteShape";
HAnimSite809.children[1] = Shape811;

HAnimSegment801.children[2] = HAnimSite809;

HAnimJoint800.children = new MFNode();

HAnimJoint800.children[0] = HAnimSegment801;

HAnimJoint HAnimJoint812 = createNode("HAnimJoint");
HAnimJoint812.name = "vt5";
HAnimJoint812.DEF = "hanim_vt5";
HAnimJoint812.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint812.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint812.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment813 = createNode("HAnimSegment");
HAnimSegment813.name = "t5";
HAnimSegment813.DEF = "hanim_t5";
Transform Transform814 = createNode("Transform");
//Empty Transform
Transform Transform815 = createNode("Transform");
//Empty Transform
Shape Shape816 = createNode("Shape");
Shape816.USE = "HAnimJointShape";
Transform815.child = new undefined();

Transform815.child[0] = Shape816;

Transform814.children = new MFNode();

Transform814.children[0] = Transform815;

HAnimSegment813.children = new MFNode();

HAnimSegment813.children[0] = Transform814;

Shape Shape817 = createNode("Shape");
LineSet LineSet818 = createNode("LineSet");
LineSet818.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate819 = createNode("Coordinate");
Coordinate819.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet818.coord = Coordinate819;

//from vt5 to vt4 vertices 2
ColorRGBA ColorRGBA820 = createNode("ColorRGBA");
ColorRGBA820.USE = "HAnimSegmentLineColorRGBA";
LineSet818.color = ColorRGBA820;

Shape817.geometry = LineSet818;

HAnimSegment813.children[1] = Shape817;

HAnimJoint812.children = new MFNode();

HAnimJoint812.children[0] = HAnimSegment813;

HAnimJoint HAnimJoint821 = createNode("HAnimJoint");
HAnimJoint821.name = "vt4";
HAnimJoint821.DEF = "hanim_vt4";
HAnimJoint821.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint821.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint821.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment822 = createNode("HAnimSegment");
HAnimSegment822.name = "t4";
HAnimSegment822.DEF = "hanim_t4";
Transform Transform823 = createNode("Transform");
//Empty Transform
Transform Transform824 = createNode("Transform");
//Empty Transform
Shape Shape825 = createNode("Shape");
Shape825.USE = "HAnimJointShape";
Transform824.child = new undefined();

Transform824.child[0] = Shape825;

Transform823.children = new MFNode();

Transform823.children[0] = Transform824;

HAnimSegment822.children = new MFNode();

HAnimSegment822.children[0] = Transform823;

Shape Shape826 = createNode("Shape");
LineSet LineSet827 = createNode("LineSet");
LineSet827.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate828 = createNode("Coordinate");
Coordinate828.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet827.coord = Coordinate828;

//from vt4 to vt3 vertices 2
ColorRGBA ColorRGBA829 = createNode("ColorRGBA");
ColorRGBA829.USE = "HAnimSegmentLineColorRGBA";
LineSet827.color = ColorRGBA829;

Shape826.geometry = LineSet827;

HAnimSegment822.children[1] = Shape826;

HAnimJoint821.children = new MFNode();

HAnimJoint821.children[0] = HAnimSegment822;

HAnimJoint HAnimJoint830 = createNode("HAnimJoint");
HAnimJoint830.name = "vt3";
HAnimJoint830.DEF = "hanim_vt3";
HAnimJoint830.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint830.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint830.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment831 = createNode("HAnimSegment");
HAnimSegment831.name = "t3";
HAnimSegment831.DEF = "hanim_t3";
Transform Transform832 = createNode("Transform");
//Empty Transform
Transform Transform833 = createNode("Transform");
//Empty Transform
Shape Shape834 = createNode("Shape");
Shape834.USE = "HAnimJointShape";
Transform833.child = new undefined();

Transform833.child[0] = Shape834;

Transform832.children = new MFNode();

Transform832.children[0] = Transform833;

HAnimSegment831.children = new MFNode();

HAnimSegment831.children[0] = Transform832;

Shape Shape835 = createNode("Shape");
LineSet LineSet836 = createNode("LineSet");
LineSet836.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate837 = createNode("Coordinate");
Coordinate837.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet836.coord = Coordinate837;

//from vt3 to vt2 vertices 2
ColorRGBA ColorRGBA838 = createNode("ColorRGBA");
ColorRGBA838.USE = "HAnimSegmentLineColorRGBA";
LineSet836.color = ColorRGBA838;

Shape835.geometry = LineSet836;

HAnimSegment831.children[1] = Shape835;

HAnimJoint830.children = new MFNode();

HAnimJoint830.children[0] = HAnimSegment831;

HAnimJoint HAnimJoint839 = createNode("HAnimJoint");
HAnimJoint839.name = "vt2";
HAnimJoint839.DEF = "hanim_vt2";
HAnimJoint839.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint839.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint839.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment840 = createNode("HAnimSegment");
HAnimSegment840.name = "t2";
HAnimSegment840.DEF = "hanim_t2";
Transform Transform841 = createNode("Transform");
//Empty Transform
Transform Transform842 = createNode("Transform");
//Empty Transform
Shape Shape843 = createNode("Shape");
Shape843.USE = "HAnimJointShape";
Transform842.child = new undefined();

Transform842.child[0] = Shape843;

Transform841.children = new MFNode();

Transform841.children[0] = Transform842;

HAnimSegment840.children = new MFNode();

HAnimSegment840.children[0] = Transform841;

Shape Shape844 = createNode("Shape");
LineSet LineSet845 = createNode("LineSet");
LineSet845.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate846 = createNode("Coordinate");
Coordinate846.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet845.coord = Coordinate846;

//from vt2 to vt1 vertices 2
ColorRGBA ColorRGBA847 = createNode("ColorRGBA");
ColorRGBA847.USE = "HAnimSegmentLineColorRGBA";
LineSet845.color = ColorRGBA847;

Shape844.geometry = LineSet845;

HAnimSegment840.children[1] = Shape844;

HAnimSite HAnimSite848 = createNode("HAnimSite");
HAnimSite848.name = "cervicale_pt";
HAnimSite848.DEF = "hanim_cervicale_pt";
HAnimSite848.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor849 = createNode("TouchSensor");
TouchSensor849.description = "HAnimSite cervicale_pt";
HAnimSite848.children = new MFNode();

HAnimSite848.children[0] = TouchSensor849;

Shape Shape850 = createNode("Shape");
Shape850.USE = "HAnimSiteShape";
HAnimSite848.children[1] = Shape850;

HAnimSegment840.children[2] = HAnimSite848;

HAnimSite HAnimSite851 = createNode("HAnimSite");
HAnimSite851.name = "suprasternale_pt";
HAnimSite851.DEF = "hanim_suprasternale_pt";
HAnimSite851.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor852 = createNode("TouchSensor");
TouchSensor852.description = "HAnimSite suprasternale_pt";
HAnimSite851.children = new MFNode();

HAnimSite851.children[0] = TouchSensor852;

Shape Shape853 = createNode("Shape");
Shape853.USE = "HAnimSiteShape";
HAnimSite851.children[1] = Shape853;

HAnimSegment840.children[3] = HAnimSite851;

HAnimJoint839.children = new MFNode();

HAnimJoint839.children[0] = HAnimSegment840;

HAnimJoint HAnimJoint854 = createNode("HAnimJoint");
HAnimJoint854.name = "vt1";
HAnimJoint854.DEF = "hanim_vt1";
HAnimJoint854.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint854.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint854.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment855 = createNode("HAnimSegment");
HAnimSegment855.name = "t1";
HAnimSegment855.DEF = "hanim_t1";
Transform Transform856 = createNode("Transform");
//Empty Transform
Transform Transform857 = createNode("Transform");
//Empty Transform
Shape Shape858 = createNode("Shape");
Shape858.USE = "HAnimJointShape";
Transform857.child = new undefined();

Transform857.child[0] = Shape858;

Transform856.children = new MFNode();

Transform856.children[0] = Transform857;

HAnimSegment855.children = new MFNode();

HAnimSegment855.children[0] = Transform856;

Shape Shape859 = createNode("Shape");
LineSet LineSet860 = createNode("LineSet");
LineSet860.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate861 = createNode("Coordinate");
Coordinate861.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet860.coord = Coordinate861;

//from vt1 to vc7 vertices 2
ColorRGBA ColorRGBA862 = createNode("ColorRGBA");
ColorRGBA862.USE = "HAnimSegmentLineColorRGBA";
LineSet860.color = ColorRGBA862;

Shape859.geometry = LineSet860;

HAnimSegment855.children[1] = Shape859;

HAnimSite HAnimSite863 = createNode("HAnimSite");
HAnimSite863.name = "l_neck_base_pt";
HAnimSite863.DEF = "hanim_l_neck_base_pt";
HAnimSite863.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor864 = createNode("TouchSensor");
TouchSensor864.description = "HAnimSite l_neck_base_pt";
HAnimSite863.children = new MFNode();

HAnimSite863.children[0] = TouchSensor864;

Shape Shape865 = createNode("Shape");
Shape865.USE = "HAnimSiteShape";
HAnimSite863.children[1] = Shape865;

HAnimSegment855.children[2] = HAnimSite863;

HAnimSite HAnimSite866 = createNode("HAnimSite");
HAnimSite866.name = "r_neck_base_pt";
HAnimSite866.DEF = "hanim_r_neck_base_pt";
HAnimSite866.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor867 = createNode("TouchSensor");
TouchSensor867.description = "HAnimSite r_neck_base_pt";
HAnimSite866.children = new MFNode();

HAnimSite866.children[0] = TouchSensor867;

Shape Shape868 = createNode("Shape");
Shape868.USE = "HAnimSiteShape";
HAnimSite866.children[1] = Shape868;

HAnimSegment855.children[3] = HAnimSite866;

Shape Shape869 = createNode("Shape");
LineSet LineSet870 = createNode("LineSet");
LineSet870.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate871 = createNode("Coordinate");
Coordinate871.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet870.coord = Coordinate871;

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA ColorRGBA872 = createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSegmentLineColorRGBA";
LineSet870.color = ColorRGBA872;

Shape869.geometry = LineSet870;

HAnimSegment855.children[4] = Shape869;

HAnimSite HAnimSite873 = createNode("HAnimSite");
HAnimSite873.name = "l_acromion_pt";
HAnimSite873.DEF = "hanim_l_acromion_pt";
HAnimSite873.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor874 = createNode("TouchSensor");
TouchSensor874.description = "HAnimSite l_acromion_pt";
HAnimSite873.children = new MFNode();

HAnimSite873.children[0] = TouchSensor874;

Shape Shape875 = createNode("Shape");
Shape875.USE = "HAnimSiteShape";
HAnimSite873.children[1] = Shape875;

HAnimSegment855.children[5] = HAnimSite873;

HAnimSite HAnimSite876 = createNode("HAnimSite");
HAnimSite876.name = "l_axilla_distal_pt";
HAnimSite876.DEF = "hanim_l_axilla_distal_pt";
HAnimSite876.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor877 = createNode("TouchSensor");
TouchSensor877.description = "HAnimSite l_axilla_distal_pt";
HAnimSite876.children = new MFNode();

HAnimSite876.children[0] = TouchSensor877;

Shape Shape878 = createNode("Shape");
Shape878.USE = "HAnimSiteShape";
HAnimSite876.children[1] = Shape878;

HAnimSegment855.children[6] = HAnimSite876;

HAnimSite HAnimSite879 = createNode("HAnimSite");
HAnimSite879.name = "l_axilla_posterior_folds_pt";
HAnimSite879.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite879.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor880 = createNode("TouchSensor");
TouchSensor880.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite879.children = new MFNode();

HAnimSite879.children[0] = TouchSensor880;

Shape Shape881 = createNode("Shape");
Shape881.USE = "HAnimSiteShape";
HAnimSite879.children[1] = Shape881;

HAnimSegment855.children[7] = HAnimSite879;

HAnimSite HAnimSite882 = createNode("HAnimSite");
HAnimSite882.name = "l_axilla_proximal_pt";
HAnimSite882.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite882.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor883 = createNode("TouchSensor");
TouchSensor883.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite882.children = new MFNode();

HAnimSite882.children[0] = TouchSensor883;

Shape Shape884 = createNode("Shape");
Shape884.USE = "HAnimSiteShape";
HAnimSite882.children[1] = Shape884;

HAnimSegment855.children[8] = HAnimSite882;

HAnimSite HAnimSite885 = createNode("HAnimSite");
HAnimSite885.name = "l_clavicale_pt";
HAnimSite885.DEF = "hanim_l_clavicale_pt";
HAnimSite885.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor886 = createNode("TouchSensor");
TouchSensor886.description = "HAnimSite l_clavicale_pt";
HAnimSite885.children = new MFNode();

HAnimSite885.children[0] = TouchSensor886;

Shape Shape887 = createNode("Shape");
Shape887.USE = "HAnimSiteShape";
HAnimSite885.children[1] = Shape887;

HAnimSegment855.children[9] = HAnimSite885;

Shape Shape888 = createNode("Shape");
LineSet LineSet889 = createNode("LineSet");
LineSet889.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate890 = createNode("Coordinate");
Coordinate890.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet889.coord = Coordinate890;

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA ColorRGBA891 = createNode("ColorRGBA");
ColorRGBA891.USE = "HAnimSegmentLineColorRGBA";
LineSet889.color = ColorRGBA891;

Shape888.geometry = LineSet889;

HAnimSegment855.children[10] = Shape888;

HAnimSite HAnimSite892 = createNode("HAnimSite");
HAnimSite892.name = "r_acromion_pt";
HAnimSite892.DEF = "hanim_r_acromion_pt";
HAnimSite892.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor893 = createNode("TouchSensor");
TouchSensor893.description = "HAnimSite r_acromion_pt";
HAnimSite892.children = new MFNode();

HAnimSite892.children[0] = TouchSensor893;

Shape Shape894 = createNode("Shape");
Shape894.USE = "HAnimSiteShape";
HAnimSite892.children[1] = Shape894;

HAnimSegment855.children[11] = HAnimSite892;

HAnimSite HAnimSite895 = createNode("HAnimSite");
HAnimSite895.name = "r_axilla_distal_pt";
HAnimSite895.DEF = "hanim_r_axilla_distal_pt";
HAnimSite895.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor896 = createNode("TouchSensor");
TouchSensor896.description = "HAnimSite r_axilla_distal_pt";
HAnimSite895.children = new MFNode();

HAnimSite895.children[0] = TouchSensor896;

Shape Shape897 = createNode("Shape");
Shape897.USE = "HAnimSiteShape";
HAnimSite895.children[1] = Shape897;

HAnimSegment855.children[12] = HAnimSite895;

HAnimSite HAnimSite898 = createNode("HAnimSite");
HAnimSite898.name = "r_axilla_posterior_folds_pt";
HAnimSite898.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite898.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor899 = createNode("TouchSensor");
TouchSensor899.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite898.children = new MFNode();

HAnimSite898.children[0] = TouchSensor899;

Shape Shape900 = createNode("Shape");
Shape900.USE = "HAnimSiteShape";
HAnimSite898.children[1] = Shape900;

HAnimSegment855.children[13] = HAnimSite898;

HAnimSite HAnimSite901 = createNode("HAnimSite");
HAnimSite901.name = "r_axilla_proximal_pt";
HAnimSite901.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite901.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor902 = createNode("TouchSensor");
TouchSensor902.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite901.children = new MFNode();

HAnimSite901.children[0] = TouchSensor902;

Shape Shape903 = createNode("Shape");
Shape903.USE = "HAnimSiteShape";
HAnimSite901.children[1] = Shape903;

HAnimSegment855.children[14] = HAnimSite901;

HAnimSite HAnimSite904 = createNode("HAnimSite");
HAnimSite904.name = "r_clavicale_pt";
HAnimSite904.DEF = "hanim_r_clavicale_pt";
HAnimSite904.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor905 = createNode("TouchSensor");
TouchSensor905.description = "HAnimSite r_clavicale_pt";
HAnimSite904.children = new MFNode();

HAnimSite904.children[0] = TouchSensor905;

Shape Shape906 = createNode("Shape");
Shape906.USE = "HAnimSiteShape";
HAnimSite904.children[1] = Shape906;

HAnimSegment855.children[15] = HAnimSite904;

HAnimJoint854.children = new MFNode();

HAnimJoint854.children[0] = HAnimSegment855;

HAnimJoint HAnimJoint907 = createNode("HAnimJoint");
HAnimJoint907.name = "vc7";
HAnimJoint907.DEF = "hanim_vc7";
HAnimJoint907.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint907.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint907.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment908 = createNode("HAnimSegment");
HAnimSegment908.name = "c7";
HAnimSegment908.DEF = "hanim_c7";
Transform Transform909 = createNode("Transform");
//Empty Transform
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
Coordinate914.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet913.coord = Coordinate914;

//from vc7 to vc6 vertices 2
ColorRGBA ColorRGBA915 = createNode("ColorRGBA");
ColorRGBA915.USE = "HAnimSegmentLineColorRGBA";
LineSet913.color = ColorRGBA915;

Shape912.geometry = LineSet913;

HAnimSegment908.children[1] = Shape912;

HAnimJoint907.children = new MFNode();

HAnimJoint907.children[0] = HAnimSegment908;

HAnimJoint HAnimJoint916 = createNode("HAnimJoint");
HAnimJoint916.name = "vc6";
HAnimJoint916.DEF = "hanim_vc6";
HAnimJoint916.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint916.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint916.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment917 = createNode("HAnimSegment");
HAnimSegment917.name = "c6";
HAnimSegment917.DEF = "hanim_c6";
Transform Transform918 = createNode("Transform");
//Empty Transform
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
Coordinate923.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet922.coord = Coordinate923;

//from vc6 to vc5 vertices 2
ColorRGBA ColorRGBA924 = createNode("ColorRGBA");
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA";
LineSet922.color = ColorRGBA924;

Shape921.geometry = LineSet922;

HAnimSegment917.children[1] = Shape921;

HAnimJoint916.children = new MFNode();

HAnimJoint916.children[0] = HAnimSegment917;

HAnimJoint HAnimJoint925 = createNode("HAnimJoint");
HAnimJoint925.name = "vc5";
HAnimJoint925.DEF = "hanim_vc5";
HAnimJoint925.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint925.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint925.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment926 = createNode("HAnimSegment");
HAnimSegment926.name = "c5";
HAnimSegment926.DEF = "hanim_c5";
Transform Transform927 = createNode("Transform");
//Empty Transform
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
Coordinate932.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet931.coord = Coordinate932;

//from vc5 to vc4 vertices 2
ColorRGBA ColorRGBA933 = createNode("ColorRGBA");
ColorRGBA933.USE = "HAnimSegmentLineColorRGBA";
LineSet931.color = ColorRGBA933;

Shape930.geometry = LineSet931;

HAnimSegment926.children[1] = Shape930;

HAnimJoint925.children = new MFNode();

HAnimJoint925.children[0] = HAnimSegment926;

HAnimJoint HAnimJoint934 = createNode("HAnimJoint");
HAnimJoint934.name = "vc4";
HAnimJoint934.DEF = "hanim_vc4";
HAnimJoint934.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint934.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint934.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment935 = createNode("HAnimSegment");
HAnimSegment935.name = "c4";
HAnimSegment935.DEF = "hanim_c4";
Transform Transform936 = createNode("Transform");
//Empty Transform
Transform Transform937 = createNode("Transform");
//Empty Transform
Shape Shape938 = createNode("Shape");
Shape938.USE = "HAnimJointShape";
Transform937.child = new undefined();

Transform937.child[0] = Shape938;

Transform936.children = new MFNode();

Transform936.children[0] = Transform937;

HAnimSegment935.children = new MFNode();

HAnimSegment935.children[0] = Transform936;

Shape Shape939 = createNode("Shape");
LineSet LineSet940 = createNode("LineSet");
LineSet940.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate941 = createNode("Coordinate");
Coordinate941.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet940.coord = Coordinate941;

//from vc4 to vc3 vertices 2
ColorRGBA ColorRGBA942 = createNode("ColorRGBA");
ColorRGBA942.USE = "HAnimSegmentLineColorRGBA";
LineSet940.color = ColorRGBA942;

Shape939.geometry = LineSet940;

HAnimSegment935.children[1] = Shape939;

HAnimJoint934.children = new MFNode();

HAnimJoint934.children[0] = HAnimSegment935;

HAnimJoint HAnimJoint943 = createNode("HAnimJoint");
HAnimJoint943.name = "vc3";
HAnimJoint943.DEF = "hanim_vc3";
HAnimJoint943.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint943.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint943.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment944 = createNode("HAnimSegment");
HAnimSegment944.name = "c3";
HAnimSegment944.DEF = "hanim_c3";
Transform Transform945 = createNode("Transform");
//Empty Transform
Transform Transform946 = createNode("Transform");
//Empty Transform
Shape Shape947 = createNode("Shape");
Shape947.USE = "HAnimJointShape";
Transform946.child = new undefined();

Transform946.child[0] = Shape947;

Transform945.children = new MFNode();

Transform945.children[0] = Transform946;

HAnimSegment944.children = new MFNode();

HAnimSegment944.children[0] = Transform945;

Shape Shape948 = createNode("Shape");
LineSet LineSet949 = createNode("LineSet");
LineSet949.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate950 = createNode("Coordinate");
Coordinate950.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet949.coord = Coordinate950;

//from vc3 to vc2 vertices 2
ColorRGBA ColorRGBA951 = createNode("ColorRGBA");
ColorRGBA951.USE = "HAnimSegmentLineColorRGBA";
LineSet949.color = ColorRGBA951;

Shape948.geometry = LineSet949;

HAnimSegment944.children[1] = Shape948;

HAnimSite HAnimSite952 = createNode("HAnimSite");
HAnimSite952.name = "adams_apple_pt";
HAnimSite952.DEF = "hanim_adams_apple_pt";
HAnimSite952.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor953 = createNode("TouchSensor");
TouchSensor953.description = "HAnimSite adams_apple_pt";
HAnimSite952.children = new MFNode();

HAnimSite952.children[0] = TouchSensor953;

Shape Shape954 = createNode("Shape");
Shape954.USE = "HAnimSiteShape";
HAnimSite952.children[1] = Shape954;

HAnimSegment944.children[2] = HAnimSite952;

HAnimJoint943.children = new MFNode();

HAnimJoint943.children[0] = HAnimSegment944;

HAnimJoint HAnimJoint955 = createNode("HAnimJoint");
HAnimJoint955.name = "vc2";
HAnimJoint955.DEF = "hanim_vc2";
HAnimJoint955.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint955.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint955.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment956 = createNode("HAnimSegment");
HAnimSegment956.name = "c2";
HAnimSegment956.DEF = "hanim_c2";
Transform Transform957 = createNode("Transform");
//Empty Transform
Transform Transform958 = createNode("Transform");
//Empty Transform
Shape Shape959 = createNode("Shape");
Shape959.USE = "HAnimJointShape";
Transform958.child = new undefined();

Transform958.child[0] = Shape959;

Transform957.children = new MFNode();

Transform957.children[0] = Transform958;

HAnimSegment956.children = new MFNode();

HAnimSegment956.children[0] = Transform957;

Shape Shape960 = createNode("Shape");
LineSet LineSet961 = createNode("LineSet");
LineSet961.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate962 = createNode("Coordinate");
Coordinate962.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet961.coord = Coordinate962;

//from vc2 to vc1 vertices 2
ColorRGBA ColorRGBA963 = createNode("ColorRGBA");
ColorRGBA963.USE = "HAnimSegmentLineColorRGBA";
LineSet961.color = ColorRGBA963;

Shape960.geometry = LineSet961;

HAnimSegment956.children[1] = Shape960;

HAnimJoint955.children = new MFNode();

HAnimJoint955.children[0] = HAnimSegment956;

HAnimJoint HAnimJoint964 = createNode("HAnimJoint");
HAnimJoint964.name = "vc1";
HAnimJoint964.DEF = "hanim_vc1";
HAnimJoint964.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint964.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint964.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment965 = createNode("HAnimSegment");
HAnimSegment965.name = "c1";
HAnimSegment965.DEF = "hanim_c1";
Transform Transform966 = createNode("Transform");
//Empty Transform
Transform Transform967 = createNode("Transform");
//Empty Transform
Shape Shape968 = createNode("Shape");
Shape968.USE = "HAnimJointShape";
Transform967.child = new undefined();

Transform967.child[0] = Shape968;

Transform966.children = new MFNode();

Transform966.children[0] = Transform967;

HAnimSegment965.children = new MFNode();

HAnimSegment965.children[0] = Transform966;

Shape Shape969 = createNode("Shape");
LineSet LineSet970 = createNode("LineSet");
LineSet970.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate971 = createNode("Coordinate");
Coordinate971.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet970.coord = Coordinate971;

//from vc1 to skullbase vertices 2
ColorRGBA ColorRGBA972 = createNode("ColorRGBA");
ColorRGBA972.USE = "HAnimSegmentLineColorRGBA";
LineSet970.color = ColorRGBA972;

Shape969.geometry = LineSet970;

HAnimSegment965.children[1] = Shape969;

HAnimSite HAnimSite973 = createNode("HAnimSite");
HAnimSite973.name = "glabella_pt";
HAnimSite973.DEF = "hanim_glabella_pt";
HAnimSite973.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor974 = createNode("TouchSensor");
TouchSensor974.description = "HAnimSite glabella_pt";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = TouchSensor974;

Shape Shape975 = createNode("Shape");
Shape975.USE = "HAnimSiteShape";
HAnimSite973.children[1] = Shape975;

HAnimSegment965.children[2] = HAnimSite973;

HAnimSite HAnimSite976 = createNode("HAnimSite");
HAnimSite976.name = "l_ectocanthus_pt";
HAnimSite976.DEF = "hanim_l_ectocanthus_pt";
HAnimSite976.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor977 = createNode("TouchSensor");
TouchSensor977.description = "HAnimSite l_ectocanthus_pt";
HAnimSite976.children = new MFNode();

HAnimSite976.children[0] = TouchSensor977;

Shape Shape978 = createNode("Shape");
Shape978.USE = "HAnimSiteShape";
HAnimSite976.children[1] = Shape978;

HAnimSegment965.children[3] = HAnimSite976;

HAnimSite HAnimSite979 = createNode("HAnimSite");
HAnimSite979.name = "l_infraorbitale_pt";
HAnimSite979.DEF = "hanim_l_infraorbitale_pt";
HAnimSite979.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor980 = createNode("TouchSensor");
TouchSensor980.description = "HAnimSite l_infraorbitale_pt";
HAnimSite979.children = new MFNode();

HAnimSite979.children[0] = TouchSensor980;

Shape Shape981 = createNode("Shape");
Shape981.USE = "HAnimSiteShape";
HAnimSite979.children[1] = Shape981;

HAnimSegment965.children[4] = HAnimSite979;

HAnimSite HAnimSite982 = createNode("HAnimSite");
HAnimSite982.name = "l_tragion_pt";
HAnimSite982.DEF = "hanim_l_tragion_pt";
HAnimSite982.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor983 = createNode("TouchSensor");
TouchSensor983.description = "HAnimSite l_tragion_pt";
HAnimSite982.children = new MFNode();

HAnimSite982.children[0] = TouchSensor983;

Shape Shape984 = createNode("Shape");
Shape984.USE = "HAnimSiteShape";
HAnimSite982.children[1] = Shape984;

HAnimSegment965.children[5] = HAnimSite982;

HAnimSite HAnimSite985 = createNode("HAnimSite");
HAnimSite985.name = "nuchale_pt";
HAnimSite985.DEF = "hanim_nuchale_pt";
HAnimSite985.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor986 = createNode("TouchSensor");
TouchSensor986.description = "HAnimSite nuchale_pt";
HAnimSite985.children = new MFNode();

HAnimSite985.children[0] = TouchSensor986;

Shape Shape987 = createNode("Shape");
Shape987.USE = "HAnimSiteShape";
HAnimSite985.children[1] = Shape987;

HAnimSegment965.children[6] = HAnimSite985;

HAnimSite HAnimSite988 = createNode("HAnimSite");
HAnimSite988.name = "opisthocranion_pt";
HAnimSite988.DEF = "hanim_opisthocranion_pt";
HAnimSite988.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor989 = createNode("TouchSensor");
TouchSensor989.description = "HAnimSite opisthocranion_pt";
HAnimSite988.children = new MFNode();

HAnimSite988.children[0] = TouchSensor989;

Shape Shape990 = createNode("Shape");
Shape990.USE = "HAnimSiteShape";
HAnimSite988.children[1] = Shape990;

HAnimSegment965.children[7] = HAnimSite988;

HAnimSite HAnimSite991 = createNode("HAnimSite");
HAnimSite991.name = "r_ectocanthus_pt";
HAnimSite991.DEF = "hanim_r_ectocanthus_pt";
HAnimSite991.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor992 = createNode("TouchSensor");
TouchSensor992.description = "HAnimSite r_ectocanthus_pt";
HAnimSite991.children = new MFNode();

HAnimSite991.children[0] = TouchSensor992;

Shape Shape993 = createNode("Shape");
Shape993.USE = "HAnimSiteShape";
HAnimSite991.children[1] = Shape993;

HAnimSegment965.children[8] = HAnimSite991;

HAnimSite HAnimSite994 = createNode("HAnimSite");
HAnimSite994.name = "r_infraorbitale_pt";
HAnimSite994.DEF = "hanim_r_infraorbitale_pt";
HAnimSite994.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor995 = createNode("TouchSensor");
TouchSensor995.description = "HAnimSite r_infraorbitale_pt";
HAnimSite994.children = new MFNode();

HAnimSite994.children[0] = TouchSensor995;

Shape Shape996 = createNode("Shape");
Shape996.USE = "HAnimSiteShape";
HAnimSite994.children[1] = Shape996;

HAnimSegment965.children[9] = HAnimSite994;

HAnimSite HAnimSite997 = createNode("HAnimSite");
HAnimSite997.name = "r_tragion_pt";
HAnimSite997.DEF = "hanim_r_tragion_pt";
HAnimSite997.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor998 = createNode("TouchSensor");
TouchSensor998.description = "HAnimSite r_tragion_pt";
HAnimSite997.children = new MFNode();

HAnimSite997.children[0] = TouchSensor998;

Shape Shape999 = createNode("Shape");
Shape999.USE = "HAnimSiteShape";
HAnimSite997.children[1] = Shape999;

HAnimSegment965.children[10] = HAnimSite997;

HAnimSite HAnimSite1000 = createNode("HAnimSite");
HAnimSite1000.name = "sellion_pt";
HAnimSite1000.DEF = "hanim_sellion_pt";
HAnimSite1000.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor1001 = createNode("TouchSensor");
TouchSensor1001.description = "HAnimSite sellion_pt";
HAnimSite1000.children = new MFNode();

HAnimSite1000.children[0] = TouchSensor1001;

Shape Shape1002 = createNode("Shape");
Shape1002.USE = "HAnimSiteShape";
HAnimSite1000.children[1] = Shape1002;

HAnimSegment965.children[11] = HAnimSite1000;

HAnimSite HAnimSite1003 = createNode("HAnimSite");
HAnimSite1003.name = "skull_vertex_pt";
HAnimSite1003.DEF = "hanim_skull_vertex_pt";
HAnimSite1003.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor1004 = createNode("TouchSensor");
TouchSensor1004.description = "HAnimSite skull_vertex_pt";
HAnimSite1003.children = new MFNode();

HAnimSite1003.children[0] = TouchSensor1004;

Shape Shape1005 = createNode("Shape");
Shape1005.USE = "HAnimSiteShape";
HAnimSite1003.children[1] = Shape1005;

HAnimSegment965.children[12] = HAnimSite1003;

HAnimJoint964.children = new MFNode();

HAnimJoint964.children[0] = HAnimSegment965;

HAnimJoint HAnimJoint1006 = createNode("HAnimJoint");
HAnimJoint1006.name = "skullbase";
HAnimJoint1006.DEF = "hanim_skullbase";
HAnimJoint1006.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint1006.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1007 = createNode("HAnimSegment");
HAnimSegment1007.name = "skull";
HAnimSegment1007.DEF = "hanim_skull";
Transform Transform1008 = createNode("Transform");
//Empty Transform
Transform Transform1009 = createNode("Transform");
//Empty Transform
Shape Shape1010 = createNode("Shape");
Shape1010.USE = "HAnimJointShape";
Transform1009.child = new undefined();

Transform1009.child[0] = Shape1010;

Transform1008.children = new MFNode();

Transform1008.children[0] = Transform1009;

HAnimSegment1007.children = new MFNode();

HAnimSegment1007.children[0] = Transform1008;

Shape Shape1011 = createNode("Shape");
LineSet LineSet1012 = createNode("LineSet");
LineSet1012.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1013 = createNode("Coordinate");
Coordinate1013.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1012.coord = Coordinate1013;

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA ColorRGBA1014 = createNode("ColorRGBA");
ColorRGBA1014.USE = "HAnimSegmentLineColorRGBA";
LineSet1012.color = ColorRGBA1014;

Shape1011.geometry = LineSet1012;

HAnimSegment1007.children[1] = Shape1011;

Shape Shape1015 = createNode("Shape");
LineSet LineSet1016 = createNode("LineSet");
LineSet1016.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1017 = createNode("Coordinate");
Coordinate1017.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1016.coord = Coordinate1017;

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA ColorRGBA1018 = createNode("ColorRGBA");
ColorRGBA1018.USE = "HAnimSegmentLineColorRGBA";
LineSet1016.color = ColorRGBA1018;

Shape1015.geometry = LineSet1016;

HAnimSegment1007.children[2] = Shape1015;

Shape Shape1019 = createNode("Shape");
LineSet LineSet1020 = createNode("LineSet");
LineSet1020.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1021 = createNode("Coordinate");
Coordinate1021.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1020.coord = Coordinate1021;

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA ColorRGBA1022 = createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSegmentLineColorRGBA";
LineSet1020.color = ColorRGBA1022;

Shape1019.geometry = LineSet1020;

HAnimSegment1007.children[3] = Shape1019;

Shape Shape1023 = createNode("Shape");
LineSet LineSet1024 = createNode("LineSet");
LineSet1024.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1025 = createNode("Coordinate");
Coordinate1025.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1024.coord = Coordinate1025;

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA ColorRGBA1026 = createNode("ColorRGBA");
ColorRGBA1026.USE = "HAnimSegmentLineColorRGBA";
LineSet1024.color = ColorRGBA1026;

Shape1023.geometry = LineSet1024;

HAnimSegment1007.children[4] = Shape1023;

Shape Shape1027 = createNode("Shape");
LineSet LineSet1028 = createNode("LineSet");
LineSet1028.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1029 = createNode("Coordinate");
Coordinate1029.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1028.coord = Coordinate1029;

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA ColorRGBA1030 = createNode("ColorRGBA");
ColorRGBA1030.USE = "HAnimSegmentLineColorRGBA";
LineSet1028.color = ColorRGBA1030;

Shape1027.geometry = LineSet1028;

HAnimSegment1007.children[5] = Shape1027;

Shape Shape1031 = createNode("Shape");
LineSet LineSet1032 = createNode("LineSet");
LineSet1032.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1033 = createNode("Coordinate");
Coordinate1033.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1032.coord = Coordinate1033;

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA ColorRGBA1034 = createNode("ColorRGBA");
ColorRGBA1034.USE = "HAnimSegmentLineColorRGBA";
LineSet1032.color = ColorRGBA1034;

Shape1031.geometry = LineSet1032;

HAnimSegment1007.children[6] = Shape1031;

Shape Shape1035 = createNode("Shape");
LineSet LineSet1036 = createNode("LineSet");
LineSet1036.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1037 = createNode("Coordinate");
Coordinate1037.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1036.coord = Coordinate1037;

//from skullbase to temporomandibular vertices 2
ColorRGBA ColorRGBA1038 = createNode("ColorRGBA");
ColorRGBA1038.USE = "HAnimSegmentLineColorRGBA";
LineSet1036.color = ColorRGBA1038;

Shape1035.geometry = LineSet1036;

HAnimSegment1007.children[7] = Shape1035;

HAnimSite HAnimSite1039 = createNode("HAnimSite");
HAnimSite1039.name = "l_gonion_pt";
HAnimSite1039.DEF = "hanim_l_gonion_pt";
HAnimSite1039.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor1040 = createNode("TouchSensor");
TouchSensor1040.description = "HAnimSite l_gonion_pt";
HAnimSite1039.children = new MFNode();

HAnimSite1039.children[0] = TouchSensor1040;

Shape Shape1041 = createNode("Shape");
Shape1041.USE = "HAnimSiteShape";
HAnimSite1039.children[1] = Shape1041;

HAnimSegment1007.children[8] = HAnimSite1039;

HAnimSite HAnimSite1042 = createNode("HAnimSite");
HAnimSite1042.name = "menton_pt";
HAnimSite1042.DEF = "hanim_menton_pt";
HAnimSite1042.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1043 = createNode("TouchSensor");
TouchSensor1043.description = "HAnimSite menton_pt";
HAnimSite1042.children = new MFNode();

HAnimSite1042.children[0] = TouchSensor1043;

Shape Shape1044 = createNode("Shape");
Shape1044.USE = "HAnimSiteShape";
HAnimSite1042.children[1] = Shape1044;

HAnimSegment1007.children[9] = HAnimSite1042;

HAnimSite HAnimSite1045 = createNode("HAnimSite");
HAnimSite1045.name = "r_gonion_pt";
HAnimSite1045.DEF = "hanim_r_gonion_pt";
HAnimSite1045.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor1046 = createNode("TouchSensor");
TouchSensor1046.description = "HAnimSite r_gonion_pt";
HAnimSite1045.children = new MFNode();

HAnimSite1045.children[0] = TouchSensor1046;

Shape Shape1047 = createNode("Shape");
Shape1047.USE = "HAnimSiteShape";
HAnimSite1045.children[1] = Shape1047;

HAnimSegment1007.children[10] = HAnimSite1045;

HAnimSite HAnimSite1048 = createNode("HAnimSite");
HAnimSite1048.name = "supramenton_pt";
HAnimSite1048.DEF = "hanim_supramenton_pt";
HAnimSite1048.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor1049 = createNode("TouchSensor");
TouchSensor1049.description = "HAnimSite supramenton_pt";
HAnimSite1048.children = new MFNode();

HAnimSite1048.children[0] = TouchSensor1049;

Shape Shape1050 = createNode("Shape");
Shape1050.USE = "HAnimSiteShape";
HAnimSite1048.children[1] = Shape1050;

HAnimSegment1007.children[11] = HAnimSite1048;

HAnimJoint1006.children = new MFNode();

HAnimJoint1006.children[0] = HAnimSegment1007;

HAnimJoint HAnimJoint1051 = createNode("HAnimJoint");
HAnimJoint1051.name = "l_eyelid_joint";
HAnimJoint1051.DEF = "hanim_l_eyelid_joint";
HAnimJoint1051.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1051.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1051.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[1] = HAnimJoint1051;

HAnimJoint HAnimJoint1052 = createNode("HAnimJoint");
HAnimJoint1052.name = "r_eyelid_joint";
HAnimJoint1052.DEF = "hanim_r_eyelid_joint";
HAnimJoint1052.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1052.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1052.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[2] = HAnimJoint1052;

HAnimJoint HAnimJoint1053 = createNode("HAnimJoint");
HAnimJoint1053.name = "l_eyeball_joint";
HAnimJoint1053.DEF = "hanim_l_eyeball_joint";
HAnimJoint1053.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1053.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1053.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[3] = HAnimJoint1053;

HAnimJoint HAnimJoint1054 = createNode("HAnimJoint");
HAnimJoint1054.name = "r_eyeball_joint";
HAnimJoint1054.DEF = "hanim_r_eyeball_joint";
HAnimJoint1054.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1054.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1054.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[4] = HAnimJoint1054;

HAnimJoint HAnimJoint1055 = createNode("HAnimJoint");
HAnimJoint1055.name = "l_eyebrow_joint";
HAnimJoint1055.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1055.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1055.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1055.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[5] = HAnimJoint1055;

HAnimJoint HAnimJoint1056 = createNode("HAnimJoint");
HAnimJoint1056.name = "r_eyebrow_joint";
HAnimJoint1056.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1056.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1056.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1056.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[6] = HAnimJoint1056;

HAnimJoint HAnimJoint1057 = createNode("HAnimJoint");
HAnimJoint1057.name = "temporomandibular";
HAnimJoint1057.DEF = "hanim_temporomandibular";
HAnimJoint1057.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1057.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1057.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[7] = HAnimJoint1057;

HAnimDisplacer HAnimDisplacer1058 = createNode("HAnimDisplacer");
HAnimDisplacer1058.name = "skull_tip_raiser_action";
HAnimDisplacer1058.DEF = "Joe_skull_tip_raiser_action";
HAnimDisplacer1058.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer1058.displacements = new MFVec3f(new float[0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint1006.displacers[8] = HAnimDisplacer1058;

HAnimJoint964.children[1] = HAnimJoint1006;

HAnimJoint955.children[1] = HAnimJoint964;

HAnimJoint943.children[1] = HAnimJoint955;

HAnimJoint934.children[1] = HAnimJoint943;

HAnimJoint925.children[1] = HAnimJoint934;

HAnimJoint916.children[1] = HAnimJoint925;

HAnimJoint907.children[1] = HAnimJoint916;

HAnimJoint854.children[1] = HAnimJoint907;

HAnimJoint HAnimJoint1059 = createNode("HAnimJoint");
HAnimJoint1059.name = "l_sternoclavicular";
HAnimJoint1059.DEF = "hanim_l_sternoclavicular";
HAnimJoint1059.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint1059.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1059.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1060 = createNode("HAnimSegment");
HAnimSegment1060.name = "l_clavicle";
HAnimSegment1060.DEF = "hanim_l_clavicle";
Transform Transform1061 = createNode("Transform");
//Empty Transform
Transform Transform1062 = createNode("Transform");
//Empty Transform
Shape Shape1063 = createNode("Shape");
Shape1063.USE = "HAnimJointShape";
Transform1062.child = new undefined();

Transform1062.child[0] = Shape1063;

Transform1061.children = new MFNode();

Transform1061.children[0] = Transform1062;

HAnimSegment1060.children = new MFNode();

HAnimSegment1060.children[0] = Transform1061;

Shape Shape1064 = createNode("Shape");
LineSet LineSet1065 = createNode("LineSet");
LineSet1065.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1066 = createNode("Coordinate");
Coordinate1066.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet1065.coord = Coordinate1066;

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA ColorRGBA1067 = createNode("ColorRGBA");
ColorRGBA1067.USE = "HAnimSegmentLineColorRGBA";
LineSet1065.color = ColorRGBA1067;

Shape1064.geometry = LineSet1065;

HAnimSegment1060.children[1] = Shape1064;

HAnimJoint1059.children = new MFNode();

HAnimJoint1059.children[0] = HAnimSegment1060;

HAnimJoint HAnimJoint1068 = createNode("HAnimJoint");
HAnimJoint1068.name = "l_acromioclavicular";
HAnimJoint1068.DEF = "hanim_l_acromioclavicular";
HAnimJoint1068.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint1068.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1068.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1069 = createNode("HAnimSegment");
HAnimSegment1069.name = "l_scapula";
HAnimSegment1069.DEF = "hanim_l_scapula";
Transform Transform1070 = createNode("Transform");
//Empty Transform
Transform Transform1071 = createNode("Transform");
//Empty Transform
Shape Shape1072 = createNode("Shape");
Shape1072.USE = "HAnimJointShape";
Transform1071.child = new undefined();

Transform1071.child[0] = Shape1072;

Transform1070.children = new MFNode();

Transform1070.children[0] = Transform1071;

HAnimSegment1069.children = new MFNode();

HAnimSegment1069.children[0] = Transform1070;

Shape Shape1073 = createNode("Shape");
LineSet LineSet1074 = createNode("LineSet");
LineSet1074.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1075 = createNode("Coordinate");
Coordinate1075.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet1074.coord = Coordinate1075;

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA ColorRGBA1076 = createNode("ColorRGBA");
ColorRGBA1076.USE = "HAnimSegmentLineColorRGBA";
LineSet1074.color = ColorRGBA1076;

Shape1073.geometry = LineSet1074;

HAnimSegment1069.children[1] = Shape1073;

HAnimSite HAnimSite1077 = createNode("HAnimSite");
HAnimSite1077.name = "l_bideltoid_pt";
HAnimSite1077.DEF = "hanim_l_bideltoid_pt";
HAnimSite1077.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1078 = createNode("TouchSensor");
TouchSensor1078.description = "HAnimSite l_bideltoid_pt";
HAnimSite1077.children = new MFNode();

HAnimSite1077.children[0] = TouchSensor1078;

Shape Shape1079 = createNode("Shape");
Shape1079.USE = "HAnimSiteShape";
HAnimSite1077.children[1] = Shape1079;

HAnimSegment1069.children[2] = HAnimSite1077;

HAnimSite HAnimSite1080 = createNode("HAnimSite");
HAnimSite1080.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite1080.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite1080.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor1081 = createNode("TouchSensor");
TouchSensor1081.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite1080.children = new MFNode();

HAnimSite1080.children[0] = TouchSensor1081;

Shape Shape1082 = createNode("Shape");
Shape1082.USE = "HAnimSiteShape";
HAnimSite1080.children[1] = Shape1082;

HAnimSegment1069.children[3] = HAnimSite1080;

HAnimJoint1068.children = new MFNode();

HAnimJoint1068.children[0] = HAnimSegment1069;

HAnimJoint HAnimJoint1083 = createNode("HAnimJoint");
HAnimJoint1083.name = "l_shoulder";
HAnimJoint1083.DEF = "hanim_l_shoulder";
HAnimJoint1083.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint1083.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1083.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1084 = createNode("HAnimSegment");
HAnimSegment1084.name = "l_upperarm";
HAnimSegment1084.DEF = "hanim_l_upperarm";
Transform Transform1085 = createNode("Transform");
//Empty Transform
Transform Transform1086 = createNode("Transform");
//Empty Transform
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
Coordinate1090.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet1089.coord = Coordinate1090;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA1091 = createNode("ColorRGBA");
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA";
LineSet1089.color = ColorRGBA1091;

Shape1088.geometry = LineSet1089;

HAnimSegment1084.children[1] = Shape1088;

HAnimSite HAnimSite1092 = createNode("HAnimSite");
HAnimSite1092.name = "l_humeral_medial_epicondyles_pt";
HAnimSite1092.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite1092.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor1093 = createNode("TouchSensor");
TouchSensor1093.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite1092.children = new MFNode();

HAnimSite1092.children[0] = TouchSensor1093;

Shape Shape1094 = createNode("Shape");
Shape1094.USE = "HAnimSiteShape";
HAnimSite1092.children[1] = Shape1094;

HAnimSegment1084.children[2] = HAnimSite1092;

HAnimSite HAnimSite1095 = createNode("HAnimSite");
HAnimSite1095.name = "l_olecranon_pt";
HAnimSite1095.DEF = "hanim_l_olecranon_pt";
HAnimSite1095.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor1096 = createNode("TouchSensor");
TouchSensor1096.description = "HAnimSite l_olecranon_pt";
HAnimSite1095.children = new MFNode();

HAnimSite1095.children[0] = TouchSensor1096;

Shape Shape1097 = createNode("Shape");
Shape1097.USE = "HAnimSiteShape";
HAnimSite1095.children[1] = Shape1097;

HAnimSegment1084.children[3] = HAnimSite1095;

HAnimSite HAnimSite1098 = createNode("HAnimSite");
HAnimSite1098.name = "l_radial_styloid_pt";
HAnimSite1098.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1098.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor1099 = createNode("TouchSensor");
TouchSensor1099.description = "HAnimSite l_radial_styloid_pt";
HAnimSite1098.children = new MFNode();

HAnimSite1098.children[0] = TouchSensor1099;

Shape Shape1100 = createNode("Shape");
Shape1100.USE = "HAnimSiteShape";
HAnimSite1098.children[1] = Shape1100;

HAnimSegment1084.children[4] = HAnimSite1098;

HAnimSite HAnimSite1101 = createNode("HAnimSite");
HAnimSite1101.name = "l_radiale_pt";
HAnimSite1101.DEF = "hanim_l_radiale_pt";
HAnimSite1101.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor1102 = createNode("TouchSensor");
TouchSensor1102.description = "HAnimSite l_radiale_pt";
HAnimSite1101.children = new MFNode();

HAnimSite1101.children[0] = TouchSensor1102;

Shape Shape1103 = createNode("Shape");
Shape1103.USE = "HAnimSiteShape";
HAnimSite1101.children[1] = Shape1103;

HAnimSegment1084.children[5] = HAnimSite1101;

HAnimJoint1083.children = new MFNode();

HAnimJoint1083.children[0] = HAnimSegment1084;

HAnimJoint HAnimJoint1104 = createNode("HAnimJoint");
HAnimJoint1104.name = "l_elbow";
HAnimJoint1104.DEF = "hanim_l_elbow";
HAnimJoint1104.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint1104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1104.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1105 = createNode("HAnimSegment");
HAnimSegment1105.name = "l_forearm";
HAnimSegment1105.DEF = "hanim_l_forearm";
Transform Transform1106 = createNode("Transform");
//Empty Transform
Transform Transform1107 = createNode("Transform");
//Empty Transform
Shape Shape1108 = createNode("Shape");
Shape1108.USE = "HAnimJointShape";
Transform1107.child = new undefined();

Transform1107.child[0] = Shape1108;

Transform1106.children = new MFNode();

Transform1106.children[0] = Transform1107;

HAnimSegment1105.children = new MFNode();

HAnimSegment1105.children[0] = Transform1106;

Shape Shape1109 = createNode("Shape");
LineSet LineSet1110 = createNode("LineSet");
LineSet1110.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1111 = createNode("Coordinate");
Coordinate1111.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1110.coord = Coordinate1111;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA1112 = createNode("ColorRGBA");
ColorRGBA1112.USE = "HAnimSegmentLineColorRGBA";
LineSet1110.color = ColorRGBA1112;

Shape1109.geometry = LineSet1110;

HAnimSegment1105.children[1] = Shape1109;

HAnimSite HAnimSite1113 = createNode("HAnimSite");
HAnimSite1113.name = "l_ulnar_styloid_pt";
HAnimSite1113.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1113.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor1114 = createNode("TouchSensor");
TouchSensor1114.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1113.children = new MFNode();

HAnimSite1113.children[0] = TouchSensor1114;

Shape Shape1115 = createNode("Shape");
Shape1115.USE = "HAnimSiteShape";
HAnimSite1113.children[1] = Shape1115;

HAnimSegment1105.children[2] = HAnimSite1113;

HAnimJoint1104.children = new MFNode();

HAnimJoint1104.children[0] = HAnimSegment1105;

HAnimJoint HAnimJoint1116 = createNode("HAnimJoint");
HAnimJoint1116.name = "l_radiocarpal";
HAnimJoint1116.DEF = "hanim_l_radiocarpal";
HAnimJoint1116.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint1116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1116.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1117 = createNode("HAnimSegment");
HAnimSegment1117.name = "l_carpal";
HAnimSegment1117.DEF = "hanim_l_carpal";
Transform Transform1118 = createNode("Transform");
Transform1118.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1118.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1118.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
Transform Transform1119 = createNode("Transform");
Transform1119.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
Shape Shape1120 = createNode("Shape");
Shape1120.USE = "HAnimJointShape";
Transform1119.child = new undefined();

Transform1119.child[0] = Shape1120;

Transform1118.children = new MFNode();

Transform1118.children[0] = Transform1119;

HAnimSegment1117.children = new MFNode();

HAnimSegment1117.children[0] = Transform1118;

Shape Shape1121 = createNode("Shape");
LineSet LineSet1122 = createNode("LineSet");
LineSet1122.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1123 = createNode("Coordinate");
Coordinate1123.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1122.coord = Coordinate1123;

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA ColorRGBA1124 = createNode("ColorRGBA");
ColorRGBA1124.USE = "HAnimSegmentLineColorRGBA";
LineSet1122.color = ColorRGBA1124;

Shape1121.geometry = LineSet1122;

HAnimSegment1117.children[1] = Shape1121;

Shape Shape1125 = createNode("Shape");
LineSet LineSet1126 = createNode("LineSet");
LineSet1126.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1127 = createNode("Coordinate");
Coordinate1127.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1126.coord = Coordinate1127;

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA ColorRGBA1128 = createNode("ColorRGBA");
ColorRGBA1128.USE = "HAnimSegmentLineColorRGBA";
LineSet1126.color = ColorRGBA1128;

Shape1125.geometry = LineSet1126;

HAnimSegment1117.children[2] = Shape1125;

Shape Shape1129 = createNode("Shape");
LineSet LineSet1130 = createNode("LineSet");
LineSet1130.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1131 = createNode("Coordinate");
Coordinate1131.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1130.coord = Coordinate1131;

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA ColorRGBA1132 = createNode("ColorRGBA");
ColorRGBA1132.USE = "HAnimSegmentLineColorRGBA";
LineSet1130.color = ColorRGBA1132;

Shape1129.geometry = LineSet1130;

HAnimSegment1117.children[3] = Shape1129;

Shape Shape1133 = createNode("Shape");
LineSet LineSet1134 = createNode("LineSet");
LineSet1134.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1135 = createNode("Coordinate");
Coordinate1135.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1134.coord = Coordinate1135;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA1136 = createNode("ColorRGBA");
ColorRGBA1136.USE = "HAnimSegmentLineColorRGBA";
LineSet1134.color = ColorRGBA1136;

Shape1133.geometry = LineSet1134;

HAnimSegment1117.children[4] = Shape1133;

HAnimJoint1116.children = new MFNode();

HAnimJoint1116.children[0] = HAnimSegment1117;

HAnimJoint HAnimJoint1137 = createNode("HAnimJoint");
HAnimJoint1137.name = "l_midcarpal_1";
HAnimJoint1137.DEF = "hanim_l_midcarpal_1";
HAnimJoint1137.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1137.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1137.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1138 = createNode("HAnimSegment");
HAnimSegment1138.name = "l_trapezium";
HAnimSegment1138.DEF = "hanim_l_trapezium";
Transform Transform1139 = createNode("Transform");
//Empty Transform
Transform Transform1140 = createNode("Transform");
//Empty Transform
Shape Shape1141 = createNode("Shape");
Shape1141.USE = "HAnimJointShape";
Transform1140.child = new undefined();

Transform1140.child[0] = Shape1141;

Transform1139.children = new MFNode();

Transform1139.children[0] = Transform1140;

HAnimSegment1138.children = new MFNode();

HAnimSegment1138.children[0] = Transform1139;

Shape Shape1142 = createNode("Shape");
LineSet LineSet1143 = createNode("LineSet");
LineSet1143.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1144 = createNode("Coordinate");
Coordinate1144.point = new MFVec3f(new float[0,1,0,0.1924,0.8472,-0.0534]);
LineSet1143.coord = Coordinate1144;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1145 = createNode("ColorRGBA");
ColorRGBA1145.USE = "HAnimSegmentLineColorRGBA";
LineSet1143.color = ColorRGBA1145;

Shape1142.geometry = LineSet1143;

HAnimSegment1138.children[1] = Shape1142;

HAnimJoint1137.children = new MFNode();

HAnimJoint1137.children[0] = HAnimSegment1138;

HAnimJoint HAnimJoint1146 = createNode("HAnimJoint");
HAnimJoint1146.name = "l_carpometacarpal_1";
HAnimJoint1146.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1146.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1146.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1146.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1147 = createNode("HAnimSegment");
HAnimSegment1147.name = "l_metacarpal_1";
HAnimSegment1147.DEF = "hanim_l_metacarpal_1";
Transform Transform1148 = createNode("Transform");
//Empty Transform
Transform Transform1149 = createNode("Transform");
//Empty Transform
Shape Shape1150 = createNode("Shape");
Shape1150.USE = "HAnimJointShape";
Transform1149.child = new undefined();

Transform1149.child[0] = Shape1150;

Transform1148.children = new MFNode();

Transform1148.children[0] = Transform1149;

HAnimSegment1147.children = new MFNode();

HAnimSegment1147.children[0] = Transform1148;

Shape Shape1151 = createNode("Shape");
LineSet LineSet1152 = createNode("LineSet");
LineSet1152.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1153 = createNode("Coordinate");
Coordinate1153.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1152.coord = Coordinate1153;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1154 = createNode("ColorRGBA");
ColorRGBA1154.USE = "HAnimSegmentLineColorRGBA";
LineSet1152.color = ColorRGBA1154;

Shape1151.geometry = LineSet1152;

HAnimSegment1147.children[1] = Shape1151;

HAnimJoint1146.children = new MFNode();

HAnimJoint1146.children[0] = HAnimSegment1147;

HAnimJoint HAnimJoint1155 = createNode("HAnimJoint");
HAnimJoint1155.name = "l_metacarpophalangeal_1";
HAnimJoint1155.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1155.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1155.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1155.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1156 = createNode("HAnimSegment");
HAnimSegment1156.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1156.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform1157 = createNode("Transform");
//Empty Transform
Transform Transform1158 = createNode("Transform");
//Empty Transform
Shape Shape1159 = createNode("Shape");
Shape1159.USE = "HAnimJointShape";
Transform1158.child = new undefined();

Transform1158.child[0] = Shape1159;

Transform1157.children = new MFNode();

Transform1157.children[0] = Transform1158;

HAnimSegment1156.children = new MFNode();

HAnimSegment1156.children[0] = Transform1157;

Shape Shape1160 = createNode("Shape");
LineSet LineSet1161 = createNode("LineSet");
LineSet1161.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1162 = createNode("Coordinate");
Coordinate1162.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1161.coord = Coordinate1162;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1163 = createNode("ColorRGBA");
ColorRGBA1163.USE = "HAnimSegmentLineColorRGBA";
LineSet1161.color = ColorRGBA1163;

Shape1160.geometry = LineSet1161;

HAnimSegment1156.children[1] = Shape1160;

HAnimSite HAnimSite1164 = createNode("HAnimSite");
HAnimSite1164.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite1164.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite1164.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1165 = createNode("TouchSensor");
TouchSensor1165.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite1164.children = new MFNode();

HAnimSite1164.children[0] = TouchSensor1165;

Shape Shape1166 = createNode("Shape");
Shape1166.USE = "HAnimSiteShape";
HAnimSite1164.children[1] = Shape1166;

HAnimSegment1156.children[2] = HAnimSite1164;

HAnimJoint1155.children = new MFNode();

HAnimJoint1155.children[0] = HAnimSegment1156;

HAnimJoint HAnimJoint1167 = createNode("HAnimJoint");
HAnimJoint1167.name = "l_carpal_interphalangeal_1";
HAnimJoint1167.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1167.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1167.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1167.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1155.children[1] = HAnimJoint1167;

HAnimJoint1146.children[1] = HAnimJoint1155;

HAnimJoint1137.children[1] = HAnimJoint1146;

HAnimJoint1116.children[1] = HAnimJoint1137;

HAnimJoint HAnimJoint1168 = createNode("HAnimJoint");
HAnimJoint1168.name = "l_midcarpal_2";
HAnimJoint1168.DEF = "hanim_l_midcarpal_2";
HAnimJoint1168.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1168.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1168.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1169 = createNode("HAnimSegment");
HAnimSegment1169.name = "l_trapezoid";
HAnimSegment1169.DEF = "hanim_l_trapezoid";
Transform Transform1170 = createNode("Transform");
//Empty Transform
Transform Transform1171 = createNode("Transform");
//Empty Transform
Shape Shape1172 = createNode("Shape");
Shape1172.USE = "HAnimJointShape";
Transform1171.child = new undefined();

Transform1171.child[0] = Shape1172;

Transform1170.children = new MFNode();

Transform1170.children[0] = Transform1171;

HAnimSegment1169.children = new MFNode();

HAnimSegment1169.children[0] = Transform1170;

Shape Shape1173 = createNode("Shape");
LineSet LineSet1174 = createNode("LineSet");
LineSet1174.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1175 = createNode("Coordinate");
Coordinate1175.point = new MFVec3f(new float[0,1,0,0.1983,0.8024,-0.028]);
LineSet1174.coord = Coordinate1175;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1176 = createNode("ColorRGBA");
ColorRGBA1176.USE = "HAnimSegmentLineColorRGBA";
LineSet1174.color = ColorRGBA1176;

Shape1173.geometry = LineSet1174;

HAnimSegment1169.children[1] = Shape1173;

HAnimSite HAnimSite1177 = createNode("HAnimSite");
HAnimSite1177.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1177.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1177.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor1178 = createNode("TouchSensor");
TouchSensor1178.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite1177.children = new MFNode();

HAnimSite1177.children[0] = TouchSensor1178;

Shape Shape1179 = createNode("Shape");
Shape1179.USE = "HAnimSiteShape";
HAnimSite1177.children[1] = Shape1179;

HAnimSegment1169.children[2] = HAnimSite1177;

HAnimJoint1168.children = new MFNode();

HAnimJoint1168.children[0] = HAnimSegment1169;

HAnimJoint HAnimJoint1180 = createNode("HAnimJoint");
HAnimJoint1180.name = "l_carpometacarpal_2";
HAnimJoint1180.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1180.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1180.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1181 = createNode("HAnimSegment");
HAnimSegment1181.name = "l_metacarpal_2";
HAnimSegment1181.DEF = "hanim_l_metacarpal_2";
Transform Transform1182 = createNode("Transform");
//Empty Transform
Transform Transform1183 = createNode("Transform");
//Empty Transform
Shape Shape1184 = createNode("Shape");
Shape1184.USE = "HAnimJointShape";
Transform1183.child = new undefined();

Transform1183.child[0] = Shape1184;

Transform1182.children = new MFNode();

Transform1182.children[0] = Transform1183;

HAnimSegment1181.children = new MFNode();

HAnimSegment1181.children[0] = Transform1182;

Shape Shape1185 = createNode("Shape");
LineSet LineSet1186 = createNode("LineSet");
LineSet1186.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1187 = createNode("Coordinate");
Coordinate1187.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1186.coord = Coordinate1187;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1188 = createNode("ColorRGBA");
ColorRGBA1188.USE = "HAnimSegmentLineColorRGBA";
LineSet1186.color = ColorRGBA1188;

Shape1185.geometry = LineSet1186;

HAnimSegment1181.children[1] = Shape1185;

HAnimJoint1180.children = new MFNode();

HAnimJoint1180.children[0] = HAnimSegment1181;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.name = "l_metacarpophalangeal_2";
HAnimJoint1189.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1189.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1189.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1189.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1190 = createNode("HAnimSegment");
HAnimSegment1190.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1190.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform1191 = createNode("Transform");
//Empty Transform
Transform Transform1192 = createNode("Transform");
//Empty Transform
Shape Shape1193 = createNode("Shape");
Shape1193.USE = "HAnimJointShape";
Transform1192.child = new undefined();

Transform1192.child[0] = Shape1193;

Transform1191.children = new MFNode();

Transform1191.children[0] = Transform1192;

HAnimSegment1190.children = new MFNode();

HAnimSegment1190.children[0] = Transform1191;

Shape Shape1194 = createNode("Shape");
LineSet LineSet1195 = createNode("LineSet");
LineSet1195.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1196 = createNode("Coordinate");
Coordinate1196.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1195.coord = Coordinate1196;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1197 = createNode("ColorRGBA");
ColorRGBA1197.USE = "HAnimSegmentLineColorRGBA";
LineSet1195.color = ColorRGBA1197;

Shape1194.geometry = LineSet1195;

HAnimSegment1190.children[1] = Shape1194;

HAnimJoint1189.children = new MFNode();

HAnimJoint1189.children[0] = HAnimSegment1190;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1198.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1198.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1198.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1198.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1199 = createNode("HAnimSegment");
HAnimSegment1199.name = "l_carpal_middle_phalanx_2";
HAnimSegment1199.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform1200 = createNode("Transform");
//Empty Transform
Transform Transform1201 = createNode("Transform");
//Empty Transform
Shape Shape1202 = createNode("Shape");
Shape1202.USE = "HAnimJointShape";
Transform1201.child = new undefined();

Transform1201.child[0] = Shape1202;

Transform1200.children = new MFNode();

Transform1200.children[0] = Transform1201;

HAnimSegment1199.children = new MFNode();

HAnimSegment1199.children[0] = Transform1200;

Shape Shape1203 = createNode("Shape");
LineSet LineSet1204 = createNode("LineSet");
LineSet1204.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1205 = createNode("Coordinate");
Coordinate1205.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1204.coord = Coordinate1205;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1206 = createNode("ColorRGBA");
ColorRGBA1206.USE = "HAnimSegmentLineColorRGBA";
LineSet1204.color = ColorRGBA1206;

Shape1203.geometry = LineSet1204;

HAnimSegment1199.children[1] = Shape1203;

HAnimSite HAnimSite1207 = createNode("HAnimSite");
HAnimSite1207.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite1207.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite1207.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1208 = createNode("TouchSensor");
TouchSensor1208.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite1207.children = new MFNode();

HAnimSite1207.children[0] = TouchSensor1208;

Shape Shape1209 = createNode("Shape");
Shape1209.USE = "HAnimSiteShape";
HAnimSite1207.children[1] = Shape1209;

HAnimSegment1199.children[2] = HAnimSite1207;

HAnimSite HAnimSite1210 = createNode("HAnimSite");
HAnimSite1210.name = "l_dactylion_pt";
HAnimSite1210.DEF = "hanim_l_dactylion_pt";
HAnimSite1210.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor1211 = createNode("TouchSensor");
TouchSensor1211.description = "HAnimSite l_dactylion_pt";
HAnimSite1210.children = new MFNode();

HAnimSite1210.children[0] = TouchSensor1211;

Shape Shape1212 = createNode("Shape");
Shape1212.USE = "HAnimSiteShape";
HAnimSite1210.children[1] = Shape1212;

HAnimSegment1199.children[3] = HAnimSite1210;

HAnimJoint1198.children = new MFNode();

HAnimJoint1198.children[0] = HAnimSegment1199;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1213.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1213.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1213.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1198.children[1] = HAnimJoint1213;

HAnimJoint1189.children[1] = HAnimJoint1198;

HAnimJoint1180.children[1] = HAnimJoint1189;

HAnimJoint1168.children[1] = HAnimJoint1180;

HAnimJoint1116.children[2] = HAnimJoint1168;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.name = "l_midcarpal_3";
HAnimJoint1214.DEF = "hanim_l_midcarpal_3";
HAnimJoint1214.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1214.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1214.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1215 = createNode("HAnimSegment");
HAnimSegment1215.name = "l_capitate";
HAnimSegment1215.DEF = "hanim_l_capitate";
Transform Transform1216 = createNode("Transform");
//Empty Transform
Transform Transform1217 = createNode("Transform");
//Empty Transform
Shape Shape1218 = createNode("Shape");
Shape1218.USE = "HAnimJointShape";
Transform1217.child = new undefined();

Transform1217.child[0] = Shape1218;

Transform1216.children = new MFNode();

Transform1216.children[0] = Transform1217;

HAnimSegment1215.children = new MFNode();

HAnimSegment1215.children[0] = Transform1216;

Shape Shape1219 = createNode("Shape");
LineSet LineSet1220 = createNode("LineSet");
LineSet1220.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1221 = createNode("Coordinate");
Coordinate1221.point = new MFVec3f(new float[0,1,0,0.1987,0.8029,-0.053]);
LineSet1220.coord = Coordinate1221;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1222 = createNode("ColorRGBA");
ColorRGBA1222.USE = "HAnimSegmentLineColorRGBA";
LineSet1220.color = ColorRGBA1222;

Shape1219.geometry = LineSet1220;

HAnimSegment1215.children[1] = Shape1219;

HAnimSite HAnimSite1223 = createNode("HAnimSite");
HAnimSite1223.name = "l_metacarpal_phalanx_3_pt";
HAnimSite1223.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite1223.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1224 = createNode("TouchSensor");
TouchSensor1224.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite1223.children = new MFNode();

HAnimSite1223.children[0] = TouchSensor1224;

Shape Shape1225 = createNode("Shape");
Shape1225.USE = "HAnimSiteShape";
HAnimSite1223.children[1] = Shape1225;

HAnimSegment1215.children[2] = HAnimSite1223;

HAnimJoint1214.children = new MFNode();

HAnimJoint1214.children[0] = HAnimSegment1215;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.name = "l_carpometacarpal_3";
HAnimJoint1226.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1226.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1226.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1226.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1227 = createNode("HAnimSegment");
HAnimSegment1227.name = "l_metacarpal_3";
HAnimSegment1227.DEF = "hanim_l_metacarpal_3";
Transform Transform1228 = createNode("Transform");
//Empty Transform
Transform Transform1229 = createNode("Transform");
//Empty Transform
Shape Shape1230 = createNode("Shape");
Shape1230.USE = "HAnimJointShape";
Transform1229.child = new undefined();

Transform1229.child[0] = Shape1230;

Transform1228.children = new MFNode();

Transform1228.children[0] = Transform1229;

HAnimSegment1227.children = new MFNode();

HAnimSegment1227.children[0] = Transform1228;

Shape Shape1231 = createNode("Shape");
LineSet LineSet1232 = createNode("LineSet");
LineSet1232.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1233 = createNode("Coordinate");
Coordinate1233.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1232.coord = Coordinate1233;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1234 = createNode("ColorRGBA");
ColorRGBA1234.USE = "HAnimSegmentLineColorRGBA";
LineSet1232.color = ColorRGBA1234;

Shape1231.geometry = LineSet1232;

HAnimSegment1227.children[1] = Shape1231;

HAnimJoint1226.children = new MFNode();

HAnimJoint1226.children[0] = HAnimSegment1227;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.name = "l_metacarpophalangeal_3";
HAnimJoint1235.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1235.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1235.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1235.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1236 = createNode("HAnimSegment");
HAnimSegment1236.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1236.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform1237 = createNode("Transform");
//Empty Transform
Transform Transform1238 = createNode("Transform");
//Empty Transform
Shape Shape1239 = createNode("Shape");
Shape1239.USE = "HAnimJointShape";
Transform1238.child = new undefined();

Transform1238.child[0] = Shape1239;

Transform1237.children = new MFNode();

Transform1237.children[0] = Transform1238;

HAnimSegment1236.children = new MFNode();

HAnimSegment1236.children[0] = Transform1237;

Shape Shape1240 = createNode("Shape");
LineSet LineSet1241 = createNode("LineSet");
LineSet1241.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1242 = createNode("Coordinate");
Coordinate1242.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1241.coord = Coordinate1242;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1243 = createNode("ColorRGBA");
ColorRGBA1243.USE = "HAnimSegmentLineColorRGBA";
LineSet1241.color = ColorRGBA1243;

Shape1240.geometry = LineSet1241;

HAnimSegment1236.children[1] = Shape1240;

HAnimJoint1235.children = new MFNode();

HAnimJoint1235.children[0] = HAnimSegment1236;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1244.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1244.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1244.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1244.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1245 = createNode("HAnimSegment");
HAnimSegment1245.name = "l_carpal_middle_phalanx_3";
HAnimSegment1245.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform1246 = createNode("Transform");
//Empty Transform
Transform Transform1247 = createNode("Transform");
//Empty Transform
Shape Shape1248 = createNode("Shape");
Shape1248.USE = "HAnimJointShape";
Transform1247.child = new undefined();

Transform1247.child[0] = Shape1248;

Transform1246.children = new MFNode();

Transform1246.children[0] = Transform1247;

HAnimSegment1245.children = new MFNode();

HAnimSegment1245.children[0] = Transform1246;

Shape Shape1249 = createNode("Shape");
LineSet LineSet1250 = createNode("LineSet");
LineSet1250.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1251 = createNode("Coordinate");
Coordinate1251.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1250.coord = Coordinate1251;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1252 = createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSegmentLineColorRGBA";
LineSet1250.color = ColorRGBA1252;

Shape1249.geometry = LineSet1250;

HAnimSegment1245.children[1] = Shape1249;

HAnimSite HAnimSite1253 = createNode("HAnimSite");
HAnimSite1253.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite1253.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite1253.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1254 = createNode("TouchSensor");
TouchSensor1254.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite1253.children = new MFNode();

HAnimSite1253.children[0] = TouchSensor1254;

Shape Shape1255 = createNode("Shape");
Shape1255.USE = "HAnimSiteShape";
HAnimSite1253.children[1] = Shape1255;

HAnimSegment1245.children[2] = HAnimSite1253;

HAnimJoint1244.children = new MFNode();

HAnimJoint1244.children[0] = HAnimSegment1245;

HAnimJoint HAnimJoint1256 = createNode("HAnimJoint");
HAnimJoint1256.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1256.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1256.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1256.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1244.children[1] = HAnimJoint1256;

HAnimJoint1235.children[1] = HAnimJoint1244;

HAnimJoint1226.children[1] = HAnimJoint1235;

HAnimJoint1214.children[1] = HAnimJoint1226;

HAnimJoint1116.children[3] = HAnimJoint1214;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.name = "l_midcarpal_4_5";
HAnimJoint1257.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1257.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1257.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1257.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1258 = createNode("HAnimSegment");
HAnimSegment1258.name = "l_hamate";
HAnimSegment1258.DEF = "hanim_l_hamate";
Transform Transform1259 = createNode("Transform");
//Empty Transform
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
Coordinate1264.point = new MFVec3f(new float[0,1,0,0.1956,0.8019,-0.0794]);
LineSet1263.coord = Coordinate1264;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1265 = createNode("ColorRGBA");
ColorRGBA1265.USE = "HAnimSegmentLineColorRGBA";
LineSet1263.color = ColorRGBA1265;

Shape1262.geometry = LineSet1263;

HAnimSegment1258.children[1] = Shape1262;

Shape Shape1266 = createNode("Shape");
LineSet LineSet1267 = createNode("LineSet");
LineSet1267.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1268 = createNode("Coordinate");
Coordinate1268.point = new MFVec3f(new float[0,1,0,0.1925,0.8066,-0.1036]);
LineSet1267.coord = Coordinate1268;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1269 = createNode("ColorRGBA");
ColorRGBA1269.USE = "HAnimSegmentLineColorRGBA";
LineSet1267.color = ColorRGBA1269;

Shape1266.geometry = LineSet1267;

HAnimSegment1258.children[2] = Shape1266;

HAnimSite HAnimSite1270 = createNode("HAnimSite");
HAnimSite1270.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1270.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1270.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor1271 = createNode("TouchSensor");
TouchSensor1271.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite1270.children = new MFNode();

HAnimSite1270.children[0] = TouchSensor1271;

Shape Shape1272 = createNode("Shape");
Shape1272.USE = "HAnimSiteShape";
HAnimSite1270.children[1] = Shape1272;

HAnimSegment1258.children[3] = HAnimSite1270;

HAnimJoint1257.children = new MFNode();

HAnimJoint1257.children[0] = HAnimSegment1258;

HAnimJoint HAnimJoint1273 = createNode("HAnimJoint");
HAnimJoint1273.name = "l_carpometacarpal_4";
HAnimJoint1273.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1273.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1273.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1273.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1274 = createNode("HAnimSegment");
HAnimSegment1274.name = "l_metacarpal_4";
HAnimSegment1274.DEF = "hanim_l_metacarpal_4";
Transform Transform1275 = createNode("Transform");
//Empty Transform
Transform Transform1276 = createNode("Transform");
//Empty Transform
Shape Shape1277 = createNode("Shape");
Shape1277.USE = "HAnimJointShape";
Transform1276.child = new undefined();

Transform1276.child[0] = Shape1277;

Transform1275.children = new MFNode();

Transform1275.children[0] = Transform1276;

HAnimSegment1274.children = new MFNode();

HAnimSegment1274.children[0] = Transform1275;

Shape Shape1278 = createNode("Shape");
LineSet LineSet1279 = createNode("LineSet");
LineSet1279.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1280 = createNode("Coordinate");
Coordinate1280.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1279.coord = Coordinate1280;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1281 = createNode("ColorRGBA");
ColorRGBA1281.USE = "HAnimSegmentLineColorRGBA";
LineSet1279.color = ColorRGBA1281;

Shape1278.geometry = LineSet1279;

HAnimSegment1274.children[1] = Shape1278;

HAnimJoint1273.children = new MFNode();

HAnimJoint1273.children[0] = HAnimSegment1274;

HAnimJoint HAnimJoint1282 = createNode("HAnimJoint");
HAnimJoint1282.name = "l_metacarpophalangeal_4";
HAnimJoint1282.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1282.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1282.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1282.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1283 = createNode("HAnimSegment");
HAnimSegment1283.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1283.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform1284 = createNode("Transform");
//Empty Transform
Transform Transform1285 = createNode("Transform");
//Empty Transform
Shape Shape1286 = createNode("Shape");
Shape1286.USE = "HAnimJointShape";
Transform1285.child = new undefined();

Transform1285.child[0] = Shape1286;

Transform1284.children = new MFNode();

Transform1284.children[0] = Transform1285;

HAnimSegment1283.children = new MFNode();

HAnimSegment1283.children[0] = Transform1284;

Shape Shape1287 = createNode("Shape");
LineSet LineSet1288 = createNode("LineSet");
LineSet1288.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1289 = createNode("Coordinate");
Coordinate1289.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1288.coord = Coordinate1289;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1290 = createNode("ColorRGBA");
ColorRGBA1290.USE = "HAnimSegmentLineColorRGBA";
LineSet1288.color = ColorRGBA1290;

Shape1287.geometry = LineSet1288;

HAnimSegment1283.children[1] = Shape1287;

HAnimJoint1282.children = new MFNode();

HAnimJoint1282.children[0] = HAnimSegment1283;

HAnimJoint HAnimJoint1291 = createNode("HAnimJoint");
HAnimJoint1291.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1291.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1291.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1291.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1291.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1292 = createNode("HAnimSegment");
HAnimSegment1292.name = "l_carpal_middle_phalanx_4";
HAnimSegment1292.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform1293 = createNode("Transform");
//Empty Transform
Transform Transform1294 = createNode("Transform");
//Empty Transform
Shape Shape1295 = createNode("Shape");
Shape1295.USE = "HAnimJointShape";
Transform1294.child = new undefined();

Transform1294.child[0] = Shape1295;

Transform1293.children = new MFNode();

Transform1293.children[0] = Transform1294;

HAnimSegment1292.children = new MFNode();

HAnimSegment1292.children[0] = Transform1293;

Shape Shape1296 = createNode("Shape");
LineSet LineSet1297 = createNode("LineSet");
LineSet1297.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1298 = createNode("Coordinate");
Coordinate1298.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1297.coord = Coordinate1298;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1299 = createNode("ColorRGBA");
ColorRGBA1299.USE = "HAnimSegmentLineColorRGBA";
LineSet1297.color = ColorRGBA1299;

Shape1296.geometry = LineSet1297;

HAnimSegment1292.children[1] = Shape1296;

HAnimSite HAnimSite1300 = createNode("HAnimSite");
HAnimSite1300.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite1300.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite1300.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1301 = createNode("TouchSensor");
TouchSensor1301.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite1300.children = new MFNode();

HAnimSite1300.children[0] = TouchSensor1301;

Shape Shape1302 = createNode("Shape");
Shape1302.USE = "HAnimSiteShape";
HAnimSite1300.children[1] = Shape1302;

HAnimSegment1292.children[2] = HAnimSite1300;

HAnimJoint1291.children = new MFNode();

HAnimJoint1291.children[0] = HAnimSegment1292;

HAnimJoint HAnimJoint1303 = createNode("HAnimJoint");
HAnimJoint1303.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1303.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1303.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1303.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1303.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1291.children[1] = HAnimJoint1303;

HAnimJoint1282.children[1] = HAnimJoint1291;

HAnimJoint1273.children[1] = HAnimJoint1282;

HAnimJoint1257.children[1] = HAnimJoint1273;

HAnimJoint HAnimJoint1304 = createNode("HAnimJoint");
HAnimJoint1304.name = "l_carpometacarpal_5";
HAnimJoint1304.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1304.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1304.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1304.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1305 = createNode("HAnimSegment");
HAnimSegment1305.name = "l_metacarpal_5";
HAnimSegment1305.DEF = "hanim_l_metacarpal_5";
Transform Transform1306 = createNode("Transform");
//Empty Transform
Transform Transform1307 = createNode("Transform");
//Empty Transform
Shape Shape1308 = createNode("Shape");
Shape1308.USE = "HAnimJointShape";
Transform1307.child = new undefined();

Transform1307.child[0] = Shape1308;

Transform1306.children = new MFNode();

Transform1306.children[0] = Transform1307;

HAnimSegment1305.children = new MFNode();

HAnimSegment1305.children[0] = Transform1306;

Shape Shape1309 = createNode("Shape");
LineSet LineSet1310 = createNode("LineSet");
LineSet1310.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1311 = createNode("Coordinate");
Coordinate1311.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1310.coord = Coordinate1311;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1312 = createNode("ColorRGBA");
ColorRGBA1312.USE = "HAnimSegmentLineColorRGBA";
LineSet1310.color = ColorRGBA1312;

Shape1309.geometry = LineSet1310;

HAnimSegment1305.children[1] = Shape1309;

HAnimJoint1304.children = new MFNode();

HAnimJoint1304.children[0] = HAnimSegment1305;

HAnimJoint HAnimJoint1313 = createNode("HAnimJoint");
HAnimJoint1313.name = "l_metacarpophalangeal_5";
HAnimJoint1313.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1313.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1313.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1313.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1314 = createNode("HAnimSegment");
HAnimSegment1314.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1314.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform1315 = createNode("Transform");
//Empty Transform
Transform Transform1316 = createNode("Transform");
//Empty Transform
Shape Shape1317 = createNode("Shape");
Shape1317.USE = "HAnimJointShape";
Transform1316.child = new undefined();

Transform1316.child[0] = Shape1317;

Transform1315.children = new MFNode();

Transform1315.children[0] = Transform1316;

HAnimSegment1314.children = new MFNode();

HAnimSegment1314.children[0] = Transform1315;

Shape Shape1318 = createNode("Shape");
LineSet LineSet1319 = createNode("LineSet");
LineSet1319.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1320 = createNode("Coordinate");
Coordinate1320.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1319.coord = Coordinate1320;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1321 = createNode("ColorRGBA");
ColorRGBA1321.USE = "HAnimSegmentLineColorRGBA";
LineSet1319.color = ColorRGBA1321;

Shape1318.geometry = LineSet1319;

HAnimSegment1314.children[1] = Shape1318;

HAnimJoint1313.children = new MFNode();

HAnimJoint1313.children[0] = HAnimSegment1314;

HAnimJoint HAnimJoint1322 = createNode("HAnimJoint");
HAnimJoint1322.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1322.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1322.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1322.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1322.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1323 = createNode("HAnimSegment");
HAnimSegment1323.name = "l_carpal_middle_phalanx_5";
HAnimSegment1323.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform1324 = createNode("Transform");
//Empty Transform
Transform Transform1325 = createNode("Transform");
//Empty Transform
Shape Shape1326 = createNode("Shape");
Shape1326.USE = "HAnimJointShape";
Transform1325.child = new undefined();

Transform1325.child[0] = Shape1326;

Transform1324.children = new MFNode();

Transform1324.children[0] = Transform1325;

HAnimSegment1323.children = new MFNode();

HAnimSegment1323.children[0] = Transform1324;

Shape Shape1327 = createNode("Shape");
LineSet LineSet1328 = createNode("LineSet");
LineSet1328.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1329 = createNode("Coordinate");
Coordinate1329.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1328.coord = Coordinate1329;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1330 = createNode("ColorRGBA");
ColorRGBA1330.USE = "HAnimSegmentLineColorRGBA";
LineSet1328.color = ColorRGBA1330;

Shape1327.geometry = LineSet1328;

HAnimSegment1323.children[1] = Shape1327;

HAnimSite HAnimSite1331 = createNode("HAnimSite");
HAnimSite1331.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite1331.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite1331.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1332 = createNode("TouchSensor");
TouchSensor1332.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite1331.children = new MFNode();

HAnimSite1331.children[0] = TouchSensor1332;

Shape Shape1333 = createNode("Shape");
Shape1333.USE = "HAnimSiteShape";
HAnimSite1331.children[1] = Shape1333;

HAnimSegment1323.children[2] = HAnimSite1331;

HAnimJoint1322.children = new MFNode();

HAnimJoint1322.children[0] = HAnimSegment1323;

HAnimJoint HAnimJoint1334 = createNode("HAnimJoint");
HAnimJoint1334.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1334.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1334.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1334.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1334.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1322.children[1] = HAnimJoint1334;

HAnimJoint1313.children[1] = HAnimJoint1322;

HAnimJoint1304.children[1] = HAnimJoint1313;

HAnimJoint1257.children[2] = HAnimJoint1304;

HAnimJoint1116.children[4] = HAnimJoint1257;

HAnimJoint1104.children[1] = HAnimJoint1116;

HAnimJoint1083.children[1] = HAnimJoint1104;

HAnimJoint1068.children[1] = HAnimJoint1083;

HAnimJoint1059.children[1] = HAnimJoint1068;

HAnimJoint854.children[2] = HAnimJoint1059;

HAnimJoint HAnimJoint1335 = createNode("HAnimJoint");
HAnimJoint1335.name = "r_sternoclavicular";
HAnimJoint1335.DEF = "hanim_r_sternoclavicular";
HAnimJoint1335.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint1335.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1335.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1336 = createNode("HAnimSegment");
HAnimSegment1336.name = "r_clavicle";
HAnimSegment1336.DEF = "hanim_r_clavicle";
Transform Transform1337 = createNode("Transform");
//Empty Transform
Transform Transform1338 = createNode("Transform");
//Empty Transform
Shape Shape1339 = createNode("Shape");
Shape1339.USE = "HAnimJointShape";
Transform1338.child = new undefined();

Transform1338.child[0] = Shape1339;

Transform1337.children = new MFNode();

Transform1337.children[0] = Transform1338;

HAnimSegment1336.children = new MFNode();

HAnimSegment1336.children[0] = Transform1337;

Shape Shape1340 = createNode("Shape");
LineSet LineSet1341 = createNode("LineSet");
LineSet1341.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1342 = createNode("Coordinate");
Coordinate1342.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1341.coord = Coordinate1342;

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA ColorRGBA1343 = createNode("ColorRGBA");
ColorRGBA1343.USE = "HAnimSegmentLineColorRGBA";
LineSet1341.color = ColorRGBA1343;

Shape1340.geometry = LineSet1341;

HAnimSegment1336.children[1] = Shape1340;

HAnimJoint1335.children = new MFNode();

HAnimJoint1335.children[0] = HAnimSegment1336;

HAnimJoint HAnimJoint1344 = createNode("HAnimJoint");
HAnimJoint1344.name = "r_acromioclavicular";
HAnimJoint1344.DEF = "hanim_r_acromioclavicular";
HAnimJoint1344.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint1344.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1344.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1345 = createNode("HAnimSegment");
HAnimSegment1345.name = "r_scapula";
HAnimSegment1345.DEF = "hanim_r_scapula";
Transform Transform1346 = createNode("Transform");
//Empty Transform
Transform Transform1347 = createNode("Transform");
//Empty Transform
Shape Shape1348 = createNode("Shape");
Shape1348.USE = "HAnimJointShape";
Transform1347.child = new undefined();

Transform1347.child[0] = Shape1348;

Transform1346.children = new MFNode();

Transform1346.children[0] = Transform1347;

HAnimSegment1345.children = new MFNode();

HAnimSegment1345.children[0] = Transform1346;

Shape Shape1349 = createNode("Shape");
LineSet LineSet1350 = createNode("LineSet");
LineSet1350.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1351 = createNode("Coordinate");
Coordinate1351.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1350.coord = Coordinate1351;

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA ColorRGBA1352 = createNode("ColorRGBA");
ColorRGBA1352.USE = "HAnimSegmentLineColorRGBA";
LineSet1350.color = ColorRGBA1352;

Shape1349.geometry = LineSet1350;

HAnimSegment1345.children[1] = Shape1349;

HAnimSite HAnimSite1353 = createNode("HAnimSite");
HAnimSite1353.name = "r_bideltoid_pt";
HAnimSite1353.DEF = "hanim_r_bideltoid_pt";
HAnimSite1353.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1354 = createNode("TouchSensor");
TouchSensor1354.description = "HAnimSite r_bideltoid_pt";
HAnimSite1353.children = new MFNode();

HAnimSite1353.children[0] = TouchSensor1354;

Shape Shape1355 = createNode("Shape");
Shape1355.USE = "HAnimSiteShape";
HAnimSite1353.children[1] = Shape1355;

HAnimSegment1345.children[2] = HAnimSite1353;

HAnimSite HAnimSite1356 = createNode("HAnimSite");
HAnimSite1356.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite1356.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite1356.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1357 = createNode("TouchSensor");
TouchSensor1357.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite1356.children = new MFNode();

HAnimSite1356.children[0] = TouchSensor1357;

Shape Shape1358 = createNode("Shape");
Shape1358.USE = "HAnimSiteShape";
HAnimSite1356.children[1] = Shape1358;

HAnimSegment1345.children[3] = HAnimSite1356;

HAnimJoint1344.children = new MFNode();

HAnimJoint1344.children[0] = HAnimSegment1345;

HAnimJoint HAnimJoint1359 = createNode("HAnimJoint");
HAnimJoint1359.name = "r_shoulder";
HAnimJoint1359.DEF = "hanim_r_shoulder";
HAnimJoint1359.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint1359.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1359.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1360 = createNode("HAnimSegment");
HAnimSegment1360.name = "r_upperarm";
HAnimSegment1360.DEF = "hanim_r_upperarm";
Transform Transform1361 = createNode("Transform");
//Empty Transform
Transform Transform1362 = createNode("Transform");
//Empty Transform
Shape Shape1363 = createNode("Shape");
Shape1363.USE = "HAnimJointShape";
Transform1362.child = new undefined();

Transform1362.child[0] = Shape1363;

Transform1361.children = new MFNode();

Transform1361.children[0] = Transform1362;

HAnimSegment1360.children = new MFNode();

HAnimSegment1360.children[0] = Transform1361;

Shape Shape1364 = createNode("Shape");
LineSet LineSet1365 = createNode("LineSet");
LineSet1365.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1366 = createNode("Coordinate");
Coordinate1366.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1365.coord = Coordinate1366;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA1367 = createNode("ColorRGBA");
ColorRGBA1367.USE = "HAnimSegmentLineColorRGBA";
LineSet1365.color = ColorRGBA1367;

Shape1364.geometry = LineSet1365;

HAnimSegment1360.children[1] = Shape1364;

HAnimSite HAnimSite1368 = createNode("HAnimSite");
HAnimSite1368.name = "r_humeral_medial_epicondyles_pt";
HAnimSite1368.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite1368.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1369 = createNode("TouchSensor");
TouchSensor1369.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite1368.children = new MFNode();

HAnimSite1368.children[0] = TouchSensor1369;

Shape Shape1370 = createNode("Shape");
Shape1370.USE = "HAnimSiteShape";
HAnimSite1368.children[1] = Shape1370;

HAnimSegment1360.children[2] = HAnimSite1368;

HAnimSite HAnimSite1371 = createNode("HAnimSite");
HAnimSite1371.name = "r_olecranon_pt";
HAnimSite1371.DEF = "hanim_r_olecranon_pt";
HAnimSite1371.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1372 = createNode("TouchSensor");
TouchSensor1372.description = "HAnimSite r_olecranon_pt";
HAnimSite1371.children = new MFNode();

HAnimSite1371.children[0] = TouchSensor1372;

Shape Shape1373 = createNode("Shape");
Shape1373.USE = "HAnimSiteShape";
HAnimSite1371.children[1] = Shape1373;

HAnimSegment1360.children[3] = HAnimSite1371;

HAnimSite HAnimSite1374 = createNode("HAnimSite");
HAnimSite1374.name = "r_radial_styloid_pt";
HAnimSite1374.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1374.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1375 = createNode("TouchSensor");
TouchSensor1375.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1374.children = new MFNode();

HAnimSite1374.children[0] = TouchSensor1375;

Shape Shape1376 = createNode("Shape");
Shape1376.USE = "HAnimSiteShape";
HAnimSite1374.children[1] = Shape1376;

HAnimSegment1360.children[4] = HAnimSite1374;

HAnimSite HAnimSite1377 = createNode("HAnimSite");
HAnimSite1377.name = "r_radiale_pt";
HAnimSite1377.DEF = "hanim_r_radiale_pt";
HAnimSite1377.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1378 = createNode("TouchSensor");
TouchSensor1378.description = "HAnimSite r_radiale_pt";
HAnimSite1377.children = new MFNode();

HAnimSite1377.children[0] = TouchSensor1378;

Shape Shape1379 = createNode("Shape");
Shape1379.USE = "HAnimSiteShape";
HAnimSite1377.children[1] = Shape1379;

HAnimSegment1360.children[5] = HAnimSite1377;

HAnimJoint1359.children = new MFNode();

HAnimJoint1359.children[0] = HAnimSegment1360;

HAnimJoint HAnimJoint1380 = createNode("HAnimJoint");
HAnimJoint1380.name = "r_elbow";
HAnimJoint1380.DEF = "hanim_r_elbow";
HAnimJoint1380.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint1380.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1380.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1381 = createNode("HAnimSegment");
HAnimSegment1381.name = "r_forearm";
HAnimSegment1381.DEF = "hanim_r_forearm";
Transform Transform1382 = createNode("Transform");
//Empty Transform
Transform Transform1383 = createNode("Transform");
//Empty Transform
Shape Shape1384 = createNode("Shape");
Shape1384.USE = "HAnimJointShape";
Transform1383.child = new undefined();

Transform1383.child[0] = Shape1384;

Transform1382.children = new MFNode();

Transform1382.children[0] = Transform1383;

HAnimSegment1381.children = new MFNode();

HAnimSegment1381.children[0] = Transform1382;

Shape Shape1385 = createNode("Shape");
LineSet LineSet1386 = createNode("LineSet");
LineSet1386.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1387 = createNode("Coordinate");
Coordinate1387.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1386.coord = Coordinate1387;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA1388 = createNode("ColorRGBA");
ColorRGBA1388.USE = "HAnimSegmentLineColorRGBA";
LineSet1386.color = ColorRGBA1388;

Shape1385.geometry = LineSet1386;

HAnimSegment1381.children[1] = Shape1385;

HAnimSite HAnimSite1389 = createNode("HAnimSite");
HAnimSite1389.name = "r_ulnar_styloid_pt";
HAnimSite1389.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1389.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1390 = createNode("TouchSensor");
TouchSensor1390.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1389.children = new MFNode();

HAnimSite1389.children[0] = TouchSensor1390;

Shape Shape1391 = createNode("Shape");
Shape1391.USE = "HAnimSiteShape";
HAnimSite1389.children[1] = Shape1391;

HAnimSegment1381.children[2] = HAnimSite1389;

HAnimJoint1380.children = new MFNode();

HAnimJoint1380.children[0] = HAnimSegment1381;

HAnimJoint HAnimJoint1392 = createNode("HAnimJoint");
HAnimJoint1392.name = "r_radiocarpal";
HAnimJoint1392.DEF = "hanim_r_radiocarpal";
HAnimJoint1392.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint1392.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1392.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1393 = createNode("HAnimSegment");
HAnimSegment1393.name = "r_carpal";
HAnimSegment1393.DEF = "hanim_r_carpal";
Transform Transform1394 = createNode("Transform");
Transform1394.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1394.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1394.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
Transform Transform1395 = createNode("Transform");
Transform1395.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
Shape Shape1396 = createNode("Shape");
Shape1396.USE = "HAnimJointShape";
Transform1395.child = new undefined();

Transform1395.child[0] = Shape1396;

Transform1394.children = new MFNode();

Transform1394.children[0] = Transform1395;

HAnimSegment1393.children = new MFNode();

HAnimSegment1393.children[0] = Transform1394;

Shape Shape1397 = createNode("Shape");
LineSet LineSet1398 = createNode("LineSet");
LineSet1398.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1399 = createNode("Coordinate");
Coordinate1399.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1398.coord = Coordinate1399;

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA ColorRGBA1400 = createNode("ColorRGBA");
ColorRGBA1400.USE = "HAnimSegmentLineColorRGBA";
LineSet1398.color = ColorRGBA1400;

Shape1397.geometry = LineSet1398;

HAnimSegment1393.children[1] = Shape1397;

Shape Shape1401 = createNode("Shape");
LineSet LineSet1402 = createNode("LineSet");
LineSet1402.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1403 = createNode("Coordinate");
Coordinate1403.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1402.coord = Coordinate1403;

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA ColorRGBA1404 = createNode("ColorRGBA");
ColorRGBA1404.USE = "HAnimSegmentLineColorRGBA";
LineSet1402.color = ColorRGBA1404;

Shape1401.geometry = LineSet1402;

HAnimSegment1393.children[2] = Shape1401;

Shape Shape1405 = createNode("Shape");
LineSet LineSet1406 = createNode("LineSet");
LineSet1406.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1407 = createNode("Coordinate");
Coordinate1407.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1406.coord = Coordinate1407;

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA ColorRGBA1408 = createNode("ColorRGBA");
ColorRGBA1408.USE = "HAnimSegmentLineColorRGBA";
LineSet1406.color = ColorRGBA1408;

Shape1405.geometry = LineSet1406;

HAnimSegment1393.children[3] = Shape1405;

Shape Shape1409 = createNode("Shape");
LineSet LineSet1410 = createNode("LineSet");
LineSet1410.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1411 = createNode("Coordinate");
Coordinate1411.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1410.coord = Coordinate1411;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA1412 = createNode("ColorRGBA");
ColorRGBA1412.USE = "HAnimSegmentLineColorRGBA";
LineSet1410.color = ColorRGBA1412;

Shape1409.geometry = LineSet1410;

HAnimSegment1393.children[4] = Shape1409;

HAnimJoint1392.children = new MFNode();

HAnimJoint1392.children[0] = HAnimSegment1393;

HAnimJoint HAnimJoint1413 = createNode("HAnimJoint");
HAnimJoint1413.name = "r_midcarpal_1";
HAnimJoint1413.DEF = "hanim_r_midcarpal_1";
HAnimJoint1413.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1413.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1413.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1414 = createNode("HAnimSegment");
HAnimSegment1414.name = "r_trapezium";
HAnimSegment1414.DEF = "hanim_r_trapezium";
Transform Transform1415 = createNode("Transform");
//Empty Transform
Transform Transform1416 = createNode("Transform");
//Empty Transform
Shape Shape1417 = createNode("Shape");
Shape1417.USE = "HAnimJointShape";
Transform1416.child = new undefined();

Transform1416.child[0] = Shape1417;

Transform1415.children = new MFNode();

Transform1415.children[0] = Transform1416;

HAnimSegment1414.children = new MFNode();

HAnimSegment1414.children[0] = Transform1415;

Shape Shape1418 = createNode("Shape");
LineSet LineSet1419 = createNode("LineSet");
LineSet1419.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1420 = createNode("Coordinate");
Coordinate1420.point = new MFVec3f(new float[0,1,0,-0.1899,0.8502,-0.0473]);
LineSet1419.coord = Coordinate1420;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1421 = createNode("ColorRGBA");
ColorRGBA1421.USE = "HAnimSegmentLineColorRGBA";
LineSet1419.color = ColorRGBA1421;

Shape1418.geometry = LineSet1419;

HAnimSegment1414.children[1] = Shape1418;

HAnimJoint1413.children = new MFNode();

HAnimJoint1413.children[0] = HAnimSegment1414;

HAnimJoint HAnimJoint1422 = createNode("HAnimJoint");
HAnimJoint1422.name = "r_carpometacarpal_1";
HAnimJoint1422.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1422.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1422.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1422.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1423 = createNode("HAnimSegment");
HAnimSegment1423.name = "r_metacarpal_1";
HAnimSegment1423.DEF = "hanim_r_metacarpal_1";
Transform Transform1424 = createNode("Transform");
//Empty Transform
Transform Transform1425 = createNode("Transform");
//Empty Transform
Shape Shape1426 = createNode("Shape");
Shape1426.USE = "HAnimJointShape";
Transform1425.child = new undefined();

Transform1425.child[0] = Shape1426;

Transform1424.children = new MFNode();

Transform1424.children[0] = Transform1425;

HAnimSegment1423.children = new MFNode();

HAnimSegment1423.children[0] = Transform1424;

Shape Shape1427 = createNode("Shape");
LineSet LineSet1428 = createNode("LineSet");
LineSet1428.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1429 = createNode("Coordinate");
Coordinate1429.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1428.coord = Coordinate1429;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1430 = createNode("ColorRGBA");
ColorRGBA1430.USE = "HAnimSegmentLineColorRGBA";
LineSet1428.color = ColorRGBA1430;

Shape1427.geometry = LineSet1428;

HAnimSegment1423.children[1] = Shape1427;

HAnimJoint1422.children = new MFNode();

HAnimJoint1422.children[0] = HAnimSegment1423;

HAnimJoint HAnimJoint1431 = createNode("HAnimJoint");
HAnimJoint1431.name = "r_metacarpophalangeal_1";
HAnimJoint1431.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1431.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1431.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1431.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1432 = createNode("HAnimSegment");
HAnimSegment1432.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1432.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform1433 = createNode("Transform");
//Empty Transform
Transform Transform1434 = createNode("Transform");
//Empty Transform
Shape Shape1435 = createNode("Shape");
Shape1435.USE = "HAnimJointShape";
Transform1434.child = new undefined();

Transform1434.child[0] = Shape1435;

Transform1433.children = new MFNode();

Transform1433.children[0] = Transform1434;

HAnimSegment1432.children = new MFNode();

HAnimSegment1432.children[0] = Transform1433;

Shape Shape1436 = createNode("Shape");
LineSet LineSet1437 = createNode("LineSet");
LineSet1437.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1438 = createNode("Coordinate");
Coordinate1438.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1437.coord = Coordinate1438;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1439 = createNode("ColorRGBA");
ColorRGBA1439.USE = "HAnimSegmentLineColorRGBA";
LineSet1437.color = ColorRGBA1439;

Shape1436.geometry = LineSet1437;

HAnimSegment1432.children[1] = Shape1436;

HAnimSite HAnimSite1440 = createNode("HAnimSite");
HAnimSite1440.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1440.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite1440.translation = new SFVec3f(new float[-0.35,0.4,0]);
TouchSensor TouchSensor1441 = createNode("TouchSensor");
TouchSensor1441.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1440.children = new MFNode();

HAnimSite1440.children[0] = TouchSensor1441;

Shape Shape1442 = createNode("Shape");
Shape1442.USE = "HAnimSiteShape";
HAnimSite1440.children[1] = Shape1442;

HAnimSegment1432.children[2] = HAnimSite1440;

HAnimJoint1431.children = new MFNode();

HAnimJoint1431.children[0] = HAnimSegment1432;

HAnimJoint HAnimJoint1443 = createNode("HAnimJoint");
HAnimJoint1443.name = "r_carpal_interphalangeal_1";
HAnimJoint1443.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1443.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1443.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1443.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1431.children[1] = HAnimJoint1443;

HAnimJoint1422.children[1] = HAnimJoint1431;

HAnimJoint1413.children[1] = HAnimJoint1422;

HAnimJoint1392.children[1] = HAnimJoint1413;

HAnimJoint HAnimJoint1444 = createNode("HAnimJoint");
HAnimJoint1444.name = "r_midcarpal_2";
HAnimJoint1444.DEF = "hanim_r_midcarpal_2";
HAnimJoint1444.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1444.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1444.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1445 = createNode("HAnimSegment");
HAnimSegment1445.name = "r_trapezoid";
HAnimSegment1445.DEF = "hanim_r_trapezoid";
Transform Transform1446 = createNode("Transform");
//Empty Transform
Transform Transform1447 = createNode("Transform");
//Empty Transform
Shape Shape1448 = createNode("Shape");
Shape1448.USE = "HAnimJointShape";
Transform1447.child = new undefined();

Transform1447.child[0] = Shape1448;

Transform1446.children = new MFNode();

Transform1446.children[0] = Transform1447;

HAnimSegment1445.children = new MFNode();

HAnimSegment1445.children[0] = Transform1446;

Shape Shape1449 = createNode("Shape");
LineSet LineSet1450 = createNode("LineSet");
LineSet1450.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1451 = createNode("Coordinate");
Coordinate1451.point = new MFVec3f(new float[0,1,0,-0.1961,0.8055,-0.0218]);
LineSet1450.coord = Coordinate1451;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1452 = createNode("ColorRGBA");
ColorRGBA1452.USE = "HAnimSegmentLineColorRGBA";
LineSet1450.color = ColorRGBA1452;

Shape1449.geometry = LineSet1450;

HAnimSegment1445.children[1] = Shape1449;

HAnimSite HAnimSite1453 = createNode("HAnimSite");
HAnimSite1453.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1453.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1453.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1454 = createNode("TouchSensor");
TouchSensor1454.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1453.children = new MFNode();

HAnimSite1453.children[0] = TouchSensor1454;

Shape Shape1455 = createNode("Shape");
Shape1455.USE = "HAnimSiteShape";
HAnimSite1453.children[1] = Shape1455;

HAnimSegment1445.children[2] = HAnimSite1453;

HAnimJoint1444.children = new MFNode();

HAnimJoint1444.children[0] = HAnimSegment1445;

HAnimJoint HAnimJoint1456 = createNode("HAnimJoint");
HAnimJoint1456.name = "r_carpometacarpal_2";
HAnimJoint1456.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1456.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1456.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1456.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1457 = createNode("HAnimSegment");
HAnimSegment1457.name = "r_metacarpal_2";
HAnimSegment1457.DEF = "hanim_r_metacarpal_2";
Transform Transform1458 = createNode("Transform");
//Empty Transform
Transform Transform1459 = createNode("Transform");
//Empty Transform
Shape Shape1460 = createNode("Shape");
Shape1460.USE = "HAnimJointShape";
Transform1459.child = new undefined();

Transform1459.child[0] = Shape1460;

Transform1458.children = new MFNode();

Transform1458.children[0] = Transform1459;

HAnimSegment1457.children = new MFNode();

HAnimSegment1457.children[0] = Transform1458;

Shape Shape1461 = createNode("Shape");
LineSet LineSet1462 = createNode("LineSet");
LineSet1462.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1463 = createNode("Coordinate");
Coordinate1463.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1462.coord = Coordinate1463;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1464 = createNode("ColorRGBA");
ColorRGBA1464.USE = "HAnimSegmentLineColorRGBA";
LineSet1462.color = ColorRGBA1464;

Shape1461.geometry = LineSet1462;

HAnimSegment1457.children[1] = Shape1461;

HAnimJoint1456.children = new MFNode();

HAnimJoint1456.children[0] = HAnimSegment1457;

HAnimJoint HAnimJoint1465 = createNode("HAnimJoint");
HAnimJoint1465.name = "r_metacarpophalangeal_2";
HAnimJoint1465.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1465.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1465.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1465.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1466 = createNode("HAnimSegment");
HAnimSegment1466.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1466.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform1467 = createNode("Transform");
//Empty Transform
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
Coordinate1472.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1471.coord = Coordinate1472;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1473 = createNode("ColorRGBA");
ColorRGBA1473.USE = "HAnimSegmentLineColorRGBA";
LineSet1471.color = ColorRGBA1473;

Shape1470.geometry = LineSet1471;

HAnimSegment1466.children[1] = Shape1470;

HAnimJoint1465.children = new MFNode();

HAnimJoint1465.children[0] = HAnimSegment1466;

HAnimJoint HAnimJoint1474 = createNode("HAnimJoint");
HAnimJoint1474.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1474.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1474.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1474.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1474.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1475 = createNode("HAnimSegment");
HAnimSegment1475.name = "r_carpal_middle_phalanx_2";
HAnimSegment1475.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform1476 = createNode("Transform");
//Empty Transform
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
Coordinate1481.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1480.coord = Coordinate1481;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1482 = createNode("ColorRGBA");
ColorRGBA1482.USE = "HAnimSegmentLineColorRGBA";
LineSet1480.color = ColorRGBA1482;

Shape1479.geometry = LineSet1480;

HAnimSegment1475.children[1] = Shape1479;

HAnimSite HAnimSite1483 = createNode("HAnimSite");
HAnimSite1483.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1483.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite1483.translation = new SFVec3f(new float[-0.24,0.87,0]);
TouchSensor TouchSensor1484 = createNode("TouchSensor");
TouchSensor1484.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1483.children = new MFNode();

HAnimSite1483.children[0] = TouchSensor1484;

Shape Shape1485 = createNode("Shape");
Shape1485.USE = "HAnimSiteShape";
HAnimSite1483.children[1] = Shape1485;

HAnimSegment1475.children[2] = HAnimSite1483;

HAnimSite HAnimSite1486 = createNode("HAnimSite");
HAnimSite1486.name = "r_dactylion_pt";
HAnimSite1486.DEF = "hanim_r_dactylion_pt";
HAnimSite1486.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1487 = createNode("TouchSensor");
TouchSensor1487.description = "HAnimSite r_dactylion_pt";
HAnimSite1486.children = new MFNode();

HAnimSite1486.children[0] = TouchSensor1487;

Shape Shape1488 = createNode("Shape");
Shape1488.USE = "HAnimSiteShape";
HAnimSite1486.children[1] = Shape1488;

HAnimSegment1475.children[3] = HAnimSite1486;

HAnimJoint1474.children = new MFNode();

HAnimJoint1474.children[0] = HAnimSegment1475;

HAnimJoint HAnimJoint1489 = createNode("HAnimJoint");
HAnimJoint1489.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1489.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1489.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1489.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1489.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1474.children[1] = HAnimJoint1489;

HAnimJoint1465.children[1] = HAnimJoint1474;

HAnimJoint1456.children[1] = HAnimJoint1465;

HAnimJoint1444.children[1] = HAnimJoint1456;

HAnimJoint1392.children[2] = HAnimJoint1444;

HAnimJoint HAnimJoint1490 = createNode("HAnimJoint");
HAnimJoint1490.name = "r_midcarpal_3";
HAnimJoint1490.DEF = "hanim_r_midcarpal_3";
HAnimJoint1490.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1490.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1490.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1491 = createNode("HAnimSegment");
HAnimSegment1491.name = "r_capitate";
HAnimSegment1491.DEF = "hanim_r_capitate";
Transform Transform1492 = createNode("Transform");
//Empty Transform
Transform Transform1493 = createNode("Transform");
//Empty Transform
Shape Shape1494 = createNode("Shape");
Shape1494.USE = "HAnimJointShape";
Transform1493.child = new undefined();

Transform1493.child[0] = Shape1494;

Transform1492.children = new MFNode();

Transform1492.children[0] = Transform1493;

HAnimSegment1491.children = new MFNode();

HAnimSegment1491.children[0] = Transform1492;

Shape Shape1495 = createNode("Shape");
LineSet LineSet1496 = createNode("LineSet");
LineSet1496.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1497 = createNode("Coordinate");
Coordinate1497.point = new MFVec3f(new float[0,1,0,-0.1972,0.806,-0.0468]);
LineSet1496.coord = Coordinate1497;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1498 = createNode("ColorRGBA");
ColorRGBA1498.USE = "HAnimSegmentLineColorRGBA";
LineSet1496.color = ColorRGBA1498;

Shape1495.geometry = LineSet1496;

HAnimSegment1491.children[1] = Shape1495;

HAnimSite HAnimSite1499 = createNode("HAnimSite");
HAnimSite1499.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1499.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite1499.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1500 = createNode("TouchSensor");
TouchSensor1500.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1499.children = new MFNode();

HAnimSite1499.children[0] = TouchSensor1500;

Shape Shape1501 = createNode("Shape");
Shape1501.USE = "HAnimSiteShape";
HAnimSite1499.children[1] = Shape1501;

HAnimSegment1491.children[2] = HAnimSite1499;

HAnimJoint1490.children = new MFNode();

HAnimJoint1490.children[0] = HAnimSegment1491;

HAnimJoint HAnimJoint1502 = createNode("HAnimJoint");
HAnimJoint1502.name = "r_carpometacarpal_3";
HAnimJoint1502.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1502.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1502.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1502.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1503 = createNode("HAnimSegment");
HAnimSegment1503.name = "r_metacarpal_3";
HAnimSegment1503.DEF = "hanim_r_metacarpal_3";
Transform Transform1504 = createNode("Transform");
//Empty Transform
Transform Transform1505 = createNode("Transform");
//Empty Transform
Shape Shape1506 = createNode("Shape");
Shape1506.USE = "HAnimJointShape";
Transform1505.child = new undefined();

Transform1505.child[0] = Shape1506;

Transform1504.children = new MFNode();

Transform1504.children[0] = Transform1505;

HAnimSegment1503.children = new MFNode();

HAnimSegment1503.children[0] = Transform1504;

Shape Shape1507 = createNode("Shape");
LineSet LineSet1508 = createNode("LineSet");
LineSet1508.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1509 = createNode("Coordinate");
Coordinate1509.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1508.coord = Coordinate1509;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1510 = createNode("ColorRGBA");
ColorRGBA1510.USE = "HAnimSegmentLineColorRGBA";
LineSet1508.color = ColorRGBA1510;

Shape1507.geometry = LineSet1508;

HAnimSegment1503.children[1] = Shape1507;

HAnimJoint1502.children = new MFNode();

HAnimJoint1502.children[0] = HAnimSegment1503;

HAnimJoint HAnimJoint1511 = createNode("HAnimJoint");
HAnimJoint1511.name = "r_metacarpophalangeal_3";
HAnimJoint1511.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1511.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1511.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1511.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1512 = createNode("HAnimSegment");
HAnimSegment1512.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1512.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform1513 = createNode("Transform");
//Empty Transform
Transform Transform1514 = createNode("Transform");
//Empty Transform
Shape Shape1515 = createNode("Shape");
Shape1515.USE = "HAnimJointShape";
Transform1514.child = new undefined();

Transform1514.child[0] = Shape1515;

Transform1513.children = new MFNode();

Transform1513.children[0] = Transform1514;

HAnimSegment1512.children = new MFNode();

HAnimSegment1512.children[0] = Transform1513;

Shape Shape1516 = createNode("Shape");
LineSet LineSet1517 = createNode("LineSet");
LineSet1517.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1518 = createNode("Coordinate");
Coordinate1518.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1517.coord = Coordinate1518;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1519 = createNode("ColorRGBA");
ColorRGBA1519.USE = "HAnimSegmentLineColorRGBA";
LineSet1517.color = ColorRGBA1519;

Shape1516.geometry = LineSet1517;

HAnimSegment1512.children[1] = Shape1516;

HAnimJoint1511.children = new MFNode();

HAnimJoint1511.children[0] = HAnimSegment1512;

HAnimJoint HAnimJoint1520 = createNode("HAnimJoint");
HAnimJoint1520.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1520.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1520.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1520.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1520.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1521 = createNode("HAnimSegment");
HAnimSegment1521.name = "r_carpal_middle_phalanx_3";
HAnimSegment1521.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform1522 = createNode("Transform");
//Empty Transform
Transform Transform1523 = createNode("Transform");
//Empty Transform
Shape Shape1524 = createNode("Shape");
Shape1524.USE = "HAnimJointShape";
Transform1523.child = new undefined();

Transform1523.child[0] = Shape1524;

Transform1522.children = new MFNode();

Transform1522.children[0] = Transform1523;

HAnimSegment1521.children = new MFNode();

HAnimSegment1521.children[0] = Transform1522;

Shape Shape1525 = createNode("Shape");
LineSet LineSet1526 = createNode("LineSet");
LineSet1526.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1527 = createNode("Coordinate");
Coordinate1527.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1526.coord = Coordinate1527;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1528 = createNode("ColorRGBA");
ColorRGBA1528.USE = "HAnimSegmentLineColorRGBA";
LineSet1526.color = ColorRGBA1528;

Shape1525.geometry = LineSet1526;

HAnimSegment1521.children[1] = Shape1525;

HAnimSite HAnimSite1529 = createNode("HAnimSite");
HAnimSite1529.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1529.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite1529.translation = new SFVec3f(new float[-0.08,0.96,0]);
TouchSensor TouchSensor1530 = createNode("TouchSensor");
TouchSensor1530.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1529.children = new MFNode();

HAnimSite1529.children[0] = TouchSensor1530;

Shape Shape1531 = createNode("Shape");
Shape1531.USE = "HAnimSiteShape";
HAnimSite1529.children[1] = Shape1531;

HAnimSegment1521.children[2] = HAnimSite1529;

HAnimJoint1520.children = new MFNode();

HAnimJoint1520.children[0] = HAnimSegment1521;

HAnimJoint HAnimJoint1532 = createNode("HAnimJoint");
HAnimJoint1532.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1532.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1532.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1532.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1532.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1520.children[1] = HAnimJoint1532;

HAnimJoint1511.children[1] = HAnimJoint1520;

HAnimJoint1502.children[1] = HAnimJoint1511;

HAnimJoint1490.children[1] = HAnimJoint1502;

HAnimJoint1392.children[3] = HAnimJoint1490;

HAnimJoint HAnimJoint1533 = createNode("HAnimJoint");
HAnimJoint1533.name = "r_midcarpal_4_5";
HAnimJoint1533.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1533.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1533.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1533.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1534 = createNode("HAnimSegment");
HAnimSegment1534.name = "r_hamate";
HAnimSegment1534.DEF = "hanim_r_hamate";
Transform Transform1535 = createNode("Transform");
//Empty Transform
Transform Transform1536 = createNode("Transform");
//Empty Transform
Shape Shape1537 = createNode("Shape");
Shape1537.USE = "HAnimJointShape";
Transform1536.child = new undefined();

Transform1536.child[0] = Shape1537;

Transform1535.children = new MFNode();

Transform1535.children[0] = Transform1536;

HAnimSegment1534.children = new MFNode();

HAnimSegment1534.children[0] = Transform1535;

Shape Shape1538 = createNode("Shape");
LineSet LineSet1539 = createNode("LineSet");
LineSet1539.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1540 = createNode("Coordinate");
Coordinate1540.point = new MFVec3f(new float[0,1,0,-0.1951,0.8049,-0.0732]);
LineSet1539.coord = Coordinate1540;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1541 = createNode("ColorRGBA");
ColorRGBA1541.USE = "HAnimSegmentLineColorRGBA";
LineSet1539.color = ColorRGBA1541;

Shape1538.geometry = LineSet1539;

HAnimSegment1534.children[1] = Shape1538;

Shape Shape1542 = createNode("Shape");
LineSet LineSet1543 = createNode("LineSet");
LineSet1543.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1544 = createNode("Coordinate");
Coordinate1544.point = new MFVec3f(new float[0,1,0,-0.1926,0.8096,-0.0975]);
LineSet1543.coord = Coordinate1544;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1545 = createNode("ColorRGBA");
ColorRGBA1545.USE = "HAnimSegmentLineColorRGBA";
LineSet1543.color = ColorRGBA1545;

Shape1542.geometry = LineSet1543;

HAnimSegment1534.children[2] = Shape1542;

HAnimSite HAnimSite1546 = createNode("HAnimSite");
HAnimSite1546.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1546.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1546.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1547 = createNode("TouchSensor");
TouchSensor1547.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1546.children = new MFNode();

HAnimSite1546.children[0] = TouchSensor1547;

Shape Shape1548 = createNode("Shape");
Shape1548.USE = "HAnimSiteShape";
HAnimSite1546.children[1] = Shape1548;

HAnimSegment1534.children[3] = HAnimSite1546;

HAnimJoint1533.children = new MFNode();

HAnimJoint1533.children[0] = HAnimSegment1534;

HAnimJoint HAnimJoint1549 = createNode("HAnimJoint");
HAnimJoint1549.name = "r_carpometacarpal_4";
HAnimJoint1549.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1549.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1549.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1549.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1550 = createNode("HAnimSegment");
HAnimSegment1550.name = "r_metacarpal_4";
HAnimSegment1550.DEF = "hanim_r_metacarpal_4";
Transform Transform1551 = createNode("Transform");
//Empty Transform
Transform Transform1552 = createNode("Transform");
//Empty Transform
Shape Shape1553 = createNode("Shape");
Shape1553.USE = "HAnimJointShape";
Transform1552.child = new undefined();

Transform1552.child[0] = Shape1553;

Transform1551.children = new MFNode();

Transform1551.children[0] = Transform1552;

HAnimSegment1550.children = new MFNode();

HAnimSegment1550.children[0] = Transform1551;

Shape Shape1554 = createNode("Shape");
LineSet LineSet1555 = createNode("LineSet");
LineSet1555.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1556 = createNode("Coordinate");
Coordinate1556.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1555.coord = Coordinate1556;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1557 = createNode("ColorRGBA");
ColorRGBA1557.USE = "HAnimSegmentLineColorRGBA";
LineSet1555.color = ColorRGBA1557;

Shape1554.geometry = LineSet1555;

HAnimSegment1550.children[1] = Shape1554;

HAnimJoint1549.children = new MFNode();

HAnimJoint1549.children[0] = HAnimSegment1550;

HAnimJoint HAnimJoint1558 = createNode("HAnimJoint");
HAnimJoint1558.name = "r_metacarpophalangeal_4";
HAnimJoint1558.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1558.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1558.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1558.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1559 = createNode("HAnimSegment");
HAnimSegment1559.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1559.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform1560 = createNode("Transform");
//Empty Transform
Transform Transform1561 = createNode("Transform");
//Empty Transform
Shape Shape1562 = createNode("Shape");
Shape1562.USE = "HAnimJointShape";
Transform1561.child = new undefined();

Transform1561.child[0] = Shape1562;

Transform1560.children = new MFNode();

Transform1560.children[0] = Transform1561;

HAnimSegment1559.children = new MFNode();

HAnimSegment1559.children[0] = Transform1560;

Shape Shape1563 = createNode("Shape");
LineSet LineSet1564 = createNode("LineSet");
LineSet1564.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1565 = createNode("Coordinate");
Coordinate1565.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1564.coord = Coordinate1565;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1566 = createNode("ColorRGBA");
ColorRGBA1566.USE = "HAnimSegmentLineColorRGBA";
LineSet1564.color = ColorRGBA1566;

Shape1563.geometry = LineSet1564;

HAnimSegment1559.children[1] = Shape1563;

HAnimJoint1558.children = new MFNode();

HAnimJoint1558.children[0] = HAnimSegment1559;

HAnimJoint HAnimJoint1567 = createNode("HAnimJoint");
HAnimJoint1567.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1567.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1567.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1567.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1567.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1568 = createNode("HAnimSegment");
HAnimSegment1568.name = "r_carpal_middle_phalanx_4";
HAnimSegment1568.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform1569 = createNode("Transform");
//Empty Transform
Transform Transform1570 = createNode("Transform");
//Empty Transform
Shape Shape1571 = createNode("Shape");
Shape1571.USE = "HAnimJointShape";
Transform1570.child = new undefined();

Transform1570.child[0] = Shape1571;

Transform1569.children = new MFNode();

Transform1569.children[0] = Transform1570;

HAnimSegment1568.children = new MFNode();

HAnimSegment1568.children[0] = Transform1569;

Shape Shape1572 = createNode("Shape");
LineSet LineSet1573 = createNode("LineSet");
LineSet1573.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1574 = createNode("Coordinate");
Coordinate1574.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1573.coord = Coordinate1574;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1575 = createNode("ColorRGBA");
ColorRGBA1575.USE = "HAnimSegmentLineColorRGBA";
LineSet1573.color = ColorRGBA1575;

Shape1572.geometry = LineSet1573;

HAnimSegment1568.children[1] = Shape1572;

HAnimSite HAnimSite1576 = createNode("HAnimSite");
HAnimSite1576.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1576.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite1576.translation = new SFVec3f(new float[0.1,0.93,0]);
TouchSensor TouchSensor1577 = createNode("TouchSensor");
TouchSensor1577.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1576.children = new MFNode();

HAnimSite1576.children[0] = TouchSensor1577;

Shape Shape1578 = createNode("Shape");
Shape1578.USE = "HAnimSiteShape";
HAnimSite1576.children[1] = Shape1578;

HAnimSegment1568.children[2] = HAnimSite1576;

HAnimJoint1567.children = new MFNode();

HAnimJoint1567.children[0] = HAnimSegment1568;

HAnimJoint HAnimJoint1579 = createNode("HAnimJoint");
HAnimJoint1579.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1579.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1579.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1579.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1579.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1567.children[1] = HAnimJoint1579;

HAnimJoint1558.children[1] = HAnimJoint1567;

HAnimJoint1549.children[1] = HAnimJoint1558;

HAnimJoint1533.children[1] = HAnimJoint1549;

HAnimJoint HAnimJoint1580 = createNode("HAnimJoint");
HAnimJoint1580.name = "r_carpometacarpal_5";
HAnimJoint1580.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1580.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1580.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1580.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1581 = createNode("HAnimSegment");
HAnimSegment1581.name = "r_metacarpal_5";
HAnimSegment1581.DEF = "hanim_r_metacarpal_5";
Transform Transform1582 = createNode("Transform");
//Empty Transform
Transform Transform1583 = createNode("Transform");
//Empty Transform
Shape Shape1584 = createNode("Shape");
Shape1584.USE = "HAnimJointShape";
Transform1583.child = new undefined();

Transform1583.child[0] = Shape1584;

Transform1582.children = new MFNode();

Transform1582.children[0] = Transform1583;

HAnimSegment1581.children = new MFNode();

HAnimSegment1581.children[0] = Transform1582;

Shape Shape1585 = createNode("Shape");
LineSet LineSet1586 = createNode("LineSet");
LineSet1586.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1587 = createNode("Coordinate");
Coordinate1587.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1586.coord = Coordinate1587;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1588 = createNode("ColorRGBA");
ColorRGBA1588.USE = "HAnimSegmentLineColorRGBA";
LineSet1586.color = ColorRGBA1588;

Shape1585.geometry = LineSet1586;

HAnimSegment1581.children[1] = Shape1585;

HAnimJoint1580.children = new MFNode();

HAnimJoint1580.children[0] = HAnimSegment1581;

HAnimJoint HAnimJoint1589 = createNode("HAnimJoint");
HAnimJoint1589.name = "r_metacarpophalangeal_5";
HAnimJoint1589.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1589.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1589.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1589.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1590 = createNode("HAnimSegment");
HAnimSegment1590.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1590.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform1591 = createNode("Transform");
//Empty Transform
Transform Transform1592 = createNode("Transform");
//Empty Transform
Shape Shape1593 = createNode("Shape");
Shape1593.USE = "HAnimJointShape";
Transform1592.child = new undefined();

Transform1592.child[0] = Shape1593;

Transform1591.children = new MFNode();

Transform1591.children[0] = Transform1592;

HAnimSegment1590.children = new MFNode();

HAnimSegment1590.children[0] = Transform1591;

Shape Shape1594 = createNode("Shape");
LineSet LineSet1595 = createNode("LineSet");
LineSet1595.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1596 = createNode("Coordinate");
Coordinate1596.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1595.coord = Coordinate1596;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1597 = createNode("ColorRGBA");
ColorRGBA1597.USE = "HAnimSegmentLineColorRGBA";
LineSet1595.color = ColorRGBA1597;

Shape1594.geometry = LineSet1595;

HAnimSegment1590.children[1] = Shape1594;

HAnimJoint1589.children = new MFNode();

HAnimJoint1589.children[0] = HAnimSegment1590;

HAnimJoint HAnimJoint1598 = createNode("HAnimJoint");
HAnimJoint1598.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1598.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1598.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1598.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1598.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1599 = createNode("HAnimSegment");
HAnimSegment1599.name = "r_carpal_middle_phalanx_5";
HAnimSegment1599.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform1600 = createNode("Transform");
//Empty Transform
Transform Transform1601 = createNode("Transform");
//Empty Transform
Shape Shape1602 = createNode("Shape");
Shape1602.USE = "HAnimJointShape";
Transform1601.child = new undefined();

Transform1601.child[0] = Shape1602;

Transform1600.children = new MFNode();

Transform1600.children[0] = Transform1601;

HAnimSegment1599.children = new MFNode();

HAnimSegment1599.children[0] = Transform1600;

Shape Shape1603 = createNode("Shape");
LineSet LineSet1604 = createNode("LineSet");
LineSet1604.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1605 = createNode("Coordinate");
Coordinate1605.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1604.coord = Coordinate1605;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1606 = createNode("ColorRGBA");
ColorRGBA1606.USE = "HAnimSegmentLineColorRGBA";
LineSet1604.color = ColorRGBA1606;

Shape1603.geometry = LineSet1604;

HAnimSegment1599.children[1] = Shape1603;

HAnimSite HAnimSite1607 = createNode("HAnimSite");
HAnimSite1607.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1607.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite1607.translation = new SFVec3f(new float[0.25,0.79,0]);
TouchSensor TouchSensor1608 = createNode("TouchSensor");
TouchSensor1608.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1607.children = new MFNode();

HAnimSite1607.children[0] = TouchSensor1608;

Shape Shape1609 = createNode("Shape");
Shape1609.USE = "HAnimSiteShape";
HAnimSite1607.children[1] = Shape1609;

HAnimSegment1599.children[2] = HAnimSite1607;

HAnimJoint1598.children = new MFNode();

HAnimJoint1598.children[0] = HAnimSegment1599;

HAnimJoint HAnimJoint1610 = createNode("HAnimJoint");
HAnimJoint1610.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1610.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1610.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1610.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1610.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1598.children[1] = HAnimJoint1610;

HAnimJoint1589.children[1] = HAnimJoint1598;

HAnimJoint1580.children[1] = HAnimJoint1589;

HAnimJoint1533.children[2] = HAnimJoint1580;

HAnimJoint1392.children[4] = HAnimJoint1533;

HAnimJoint1380.children[1] = HAnimJoint1392;

HAnimJoint1359.children[1] = HAnimJoint1380;

HAnimJoint1344.children[1] = HAnimJoint1359;

HAnimJoint1335.children[1] = HAnimJoint1344;

HAnimJoint854.children[3] = HAnimJoint1335;

HAnimJoint839.children[1] = HAnimJoint854;

HAnimJoint830.children[1] = HAnimJoint839;

HAnimJoint821.children[1] = HAnimJoint830;

HAnimJoint812.children[1] = HAnimJoint821;

HAnimJoint800.children[1] = HAnimJoint812;

HAnimJoint779.children[1] = HAnimJoint800;

HAnimJoint770.children[1] = HAnimJoint779;

HAnimJoint761.children[1] = HAnimJoint770;

HAnimJoint746.children[1] = HAnimJoint761;

HAnimJoint734.children[1] = HAnimJoint746;

HAnimJoint725.children[1] = HAnimJoint734;

HAnimJoint716.children[1] = HAnimJoint725;

HAnimJoint707.children[1] = HAnimJoint716;

HAnimJoint689.children[1] = HAnimJoint707;

HAnimJoint680.children[1] = HAnimJoint689;

HAnimJoint671.children[1] = HAnimJoint680;

HAnimJoint52.children[2] = HAnimJoint671;

HAnimHumanoid43.joints[1] = HAnimJoint52;

HAnimJoint HAnimJoint1611 = createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint1611;

HAnimJoint HAnimJoint1612 = createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[3] = HAnimJoint1612;

HAnimJoint HAnimJoint1613 = createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid43.joints[4] = HAnimJoint1613;

HAnimJoint HAnimJoint1614 = createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[5] = HAnimJoint1614;

HAnimJoint HAnimJoint1615 = createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[6] = HAnimJoint1615;

HAnimJoint HAnimJoint1616 = createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[7] = HAnimJoint1616;

HAnimJoint HAnimJoint1617 = createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[8] = HAnimJoint1617;

HAnimJoint HAnimJoint1618 = createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[9] = HAnimJoint1618;

HAnimJoint HAnimJoint1619 = createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[10] = HAnimJoint1619;

HAnimJoint HAnimJoint1620 = createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[11] = HAnimJoint1620;

HAnimJoint HAnimJoint1621 = createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[12] = HAnimJoint1621;

HAnimJoint HAnimJoint1622 = createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[13] = HAnimJoint1622;

HAnimJoint HAnimJoint1623 = createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[14] = HAnimJoint1623;

HAnimJoint HAnimJoint1624 = createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1624;

HAnimJoint HAnimJoint1625 = createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[16] = HAnimJoint1625;

HAnimJoint HAnimJoint1626 = createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[17] = HAnimJoint1626;

HAnimJoint HAnimJoint1627 = createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[18] = HAnimJoint1627;

HAnimJoint HAnimJoint1628 = createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid43.joints[19] = HAnimJoint1628;

HAnimJoint HAnimJoint1629 = createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid43.joints[20] = HAnimJoint1629;

HAnimJoint HAnimJoint1630 = createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid43.joints[21] = HAnimJoint1630;

HAnimJoint HAnimJoint1631 = createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[22] = HAnimJoint1631;

HAnimJoint HAnimJoint1632 = createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[23] = HAnimJoint1632;

HAnimJoint HAnimJoint1633 = createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[24] = HAnimJoint1633;

HAnimJoint HAnimJoint1634 = createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[25] = HAnimJoint1634;

HAnimJoint HAnimJoint1635 = createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_l_hip";
HAnimHumanoid43.joints[26] = HAnimJoint1635;

HAnimJoint HAnimJoint1636 = createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_l_knee";
HAnimHumanoid43.joints[27] = HAnimJoint1636;

HAnimJoint HAnimJoint1637 = createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[28] = HAnimJoint1637;

HAnimJoint HAnimJoint1638 = createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[29] = HAnimJoint1638;

HAnimJoint HAnimJoint1639 = createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[30] = HAnimJoint1639;

HAnimJoint HAnimJoint1640 = createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[31] = HAnimJoint1640;

HAnimJoint HAnimJoint1641 = createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[32] = HAnimJoint1641;

HAnimJoint HAnimJoint1642 = createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid43.joints[33] = HAnimJoint1642;

HAnimJoint HAnimJoint1643 = createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[34] = HAnimJoint1643;

HAnimJoint HAnimJoint1644 = createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid43.joints[35] = HAnimJoint1644;

HAnimJoint HAnimJoint1645 = createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid43.joints[36] = HAnimJoint1645;

HAnimJoint HAnimJoint1646 = createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid43.joints[37] = HAnimJoint1646;

HAnimJoint HAnimJoint1647 = createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_l_midcarpal_1";
HAnimHumanoid43.joints[38] = HAnimJoint1647;

HAnimJoint HAnimJoint1648 = createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_l_midcarpal_2";
HAnimHumanoid43.joints[39] = HAnimJoint1648;

HAnimJoint HAnimJoint1649 = createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_l_midcarpal_3";
HAnimHumanoid43.joints[40] = HAnimJoint1649;

HAnimJoint HAnimJoint1650 = createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid43.joints[41] = HAnimJoint1650;

HAnimJoint HAnimJoint1651 = createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[42] = HAnimJoint1651;

HAnimJoint HAnimJoint1652 = createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[43] = HAnimJoint1652;

HAnimJoint HAnimJoint1653 = createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[44] = HAnimJoint1653;

HAnimJoint HAnimJoint1654 = createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid43.joints[45] = HAnimJoint1654;

HAnimJoint HAnimJoint1655 = createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[46] = HAnimJoint1655;

HAnimJoint HAnimJoint1656 = createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[47] = HAnimJoint1656;

HAnimJoint HAnimJoint1657 = createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[48] = HAnimJoint1657;

HAnimJoint HAnimJoint1658 = createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[49] = HAnimJoint1658;

HAnimJoint HAnimJoint1659 = createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[50] = HAnimJoint1659;

HAnimJoint HAnimJoint1660 = createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[51] = HAnimJoint1660;

HAnimJoint HAnimJoint1661 = createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[52] = HAnimJoint1661;

HAnimJoint HAnimJoint1662 = createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[53] = HAnimJoint1662;

HAnimJoint HAnimJoint1663 = createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint1663;

HAnimJoint HAnimJoint1664 = createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[55] = HAnimJoint1664;

HAnimJoint HAnimJoint1665 = createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid43.joints[56] = HAnimJoint1665;

HAnimJoint HAnimJoint1666 = createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[57] = HAnimJoint1666;

HAnimJoint HAnimJoint1667 = createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid43.joints[58] = HAnimJoint1667;

HAnimJoint HAnimJoint1668 = createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid43.joints[59] = HAnimJoint1668;

HAnimJoint HAnimJoint1669 = createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid43.joints[60] = HAnimJoint1669;

HAnimJoint HAnimJoint1670 = createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_l_transversetarsal";
HAnimHumanoid43.joints[61] = HAnimJoint1670;

HAnimJoint HAnimJoint1671 = createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[62] = HAnimJoint1671;

HAnimJoint HAnimJoint1672 = createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid43.joints[63] = HAnimJoint1672;

HAnimJoint HAnimJoint1673 = createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[64] = HAnimJoint1673;

HAnimJoint HAnimJoint1674 = createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[65] = HAnimJoint1674;

HAnimJoint HAnimJoint1675 = createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[66] = HAnimJoint1675;

HAnimJoint HAnimJoint1676 = createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[67] = HAnimJoint1676;

HAnimJoint HAnimJoint1677 = createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[68] = HAnimJoint1677;

HAnimJoint HAnimJoint1678 = createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[69] = HAnimJoint1678;

HAnimJoint HAnimJoint1679 = createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[70] = HAnimJoint1679;

HAnimJoint HAnimJoint1680 = createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[71] = HAnimJoint1680;

HAnimJoint HAnimJoint1681 = createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[72] = HAnimJoint1681;

HAnimJoint HAnimJoint1682 = createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[73] = HAnimJoint1682;

HAnimJoint HAnimJoint1683 = createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[74] = HAnimJoint1683;

HAnimJoint HAnimJoint1684 = createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[75] = HAnimJoint1684;

HAnimJoint HAnimJoint1685 = createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[76] = HAnimJoint1685;

HAnimJoint HAnimJoint1686 = createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[77] = HAnimJoint1686;

HAnimJoint HAnimJoint1687 = createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid43.joints[78] = HAnimJoint1687;

HAnimJoint HAnimJoint1688 = createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid43.joints[79] = HAnimJoint1688;

HAnimJoint HAnimJoint1689 = createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid43.joints[80] = HAnimJoint1689;

HAnimJoint HAnimJoint1690 = createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[81] = HAnimJoint1690;

HAnimJoint HAnimJoint1691 = createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[82] = HAnimJoint1691;

HAnimJoint HAnimJoint1692 = createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[83] = HAnimJoint1692;

HAnimJoint HAnimJoint1693 = createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[84] = HAnimJoint1693;

HAnimJoint HAnimJoint1694 = createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_r_hip";
HAnimHumanoid43.joints[85] = HAnimJoint1694;

HAnimJoint HAnimJoint1695 = createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_r_knee";
HAnimHumanoid43.joints[86] = HAnimJoint1695;

HAnimJoint HAnimJoint1696 = createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[87] = HAnimJoint1696;

HAnimJoint HAnimJoint1697 = createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[88] = HAnimJoint1697;

HAnimJoint HAnimJoint1698 = createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[89] = HAnimJoint1698;

HAnimJoint HAnimJoint1699 = createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[90] = HAnimJoint1699;

HAnimJoint HAnimJoint1700 = createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[91] = HAnimJoint1700;

HAnimJoint HAnimJoint1701 = createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid43.joints[92] = HAnimJoint1701;

HAnimJoint HAnimJoint1702 = createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[93] = HAnimJoint1702;

HAnimJoint HAnimJoint1703 = createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid43.joints[94] = HAnimJoint1703;

HAnimJoint HAnimJoint1704 = createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid43.joints[95] = HAnimJoint1704;

HAnimJoint HAnimJoint1705 = createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid43.joints[96] = HAnimJoint1705;

HAnimJoint HAnimJoint1706 = createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_r_midcarpal_1";
HAnimHumanoid43.joints[97] = HAnimJoint1706;

HAnimJoint HAnimJoint1707 = createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_r_midcarpal_2";
HAnimHumanoid43.joints[98] = HAnimJoint1707;

HAnimJoint HAnimJoint1708 = createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_r_midcarpal_3";
HAnimHumanoid43.joints[99] = HAnimJoint1708;

HAnimJoint HAnimJoint1709 = createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid43.joints[100] = HAnimJoint1709;

HAnimJoint HAnimJoint1710 = createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[101] = HAnimJoint1710;

HAnimJoint HAnimJoint1711 = createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[102] = HAnimJoint1711;

HAnimJoint HAnimJoint1712 = createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[103] = HAnimJoint1712;

HAnimJoint HAnimJoint1713 = createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid43.joints[104] = HAnimJoint1713;

HAnimJoint HAnimJoint1714 = createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[105] = HAnimJoint1714;

HAnimJoint HAnimJoint1715 = createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[106] = HAnimJoint1715;

HAnimJoint HAnimJoint1716 = createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[107] = HAnimJoint1716;

HAnimJoint HAnimJoint1717 = createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[108] = HAnimJoint1717;

HAnimJoint HAnimJoint1718 = createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[109] = HAnimJoint1718;

HAnimJoint HAnimJoint1719 = createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[110] = HAnimJoint1719;

HAnimJoint HAnimJoint1720 = createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[111] = HAnimJoint1720;

HAnimJoint HAnimJoint1721 = createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[112] = HAnimJoint1721;

HAnimJoint HAnimJoint1722 = createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[113] = HAnimJoint1722;

HAnimJoint HAnimJoint1723 = createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[114] = HAnimJoint1723;

HAnimJoint HAnimJoint1724 = createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid43.joints[115] = HAnimJoint1724;

HAnimJoint HAnimJoint1725 = createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[116] = HAnimJoint1725;

HAnimJoint HAnimJoint1726 = createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid43.joints[117] = HAnimJoint1726;

HAnimJoint HAnimJoint1727 = createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid43.joints[118] = HAnimJoint1727;

HAnimJoint HAnimJoint1728 = createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid43.joints[119] = HAnimJoint1728;

HAnimJoint HAnimJoint1729 = createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_transversetarsal";
HAnimHumanoid43.joints[120] = HAnimJoint1729;

HAnimJoint HAnimJoint1730 = createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[121] = HAnimJoint1730;

HAnimJoint HAnimJoint1731 = createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_skullbase";
HAnimHumanoid43.joints[122] = HAnimJoint1731;

HAnimJoint HAnimJoint1732 = createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[123] = HAnimJoint1732;

HAnimJoint HAnimJoint1733 = createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_vc1";
HAnimHumanoid43.joints[124] = HAnimJoint1733;

HAnimJoint HAnimJoint1734 = createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_vc2";
HAnimHumanoid43.joints[125] = HAnimJoint1734;

HAnimJoint HAnimJoint1735 = createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_vc3";
HAnimHumanoid43.joints[126] = HAnimJoint1735;

HAnimJoint HAnimJoint1736 = createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_vc4";
HAnimHumanoid43.joints[127] = HAnimJoint1736;

HAnimJoint HAnimJoint1737 = createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_vc5";
HAnimHumanoid43.joints[128] = HAnimJoint1737;

HAnimJoint HAnimJoint1738 = createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_vc6";
HAnimHumanoid43.joints[129] = HAnimJoint1738;

HAnimJoint HAnimJoint1739 = createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_vc7";
HAnimHumanoid43.joints[130] = HAnimJoint1739;

HAnimJoint HAnimJoint1740 = createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_vl1";
HAnimHumanoid43.joints[131] = HAnimJoint1740;

HAnimJoint HAnimJoint1741 = createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_vl2";
HAnimHumanoid43.joints[132] = HAnimJoint1741;

HAnimJoint HAnimJoint1742 = createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_vl3";
HAnimHumanoid43.joints[133] = HAnimJoint1742;

HAnimJoint HAnimJoint1743 = createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_vl4";
HAnimHumanoid43.joints[134] = HAnimJoint1743;

HAnimJoint HAnimJoint1744 = createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_vl5";
HAnimHumanoid43.joints[135] = HAnimJoint1744;

HAnimJoint HAnimJoint1745 = createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_vt1";
HAnimHumanoid43.joints[136] = HAnimJoint1745;

HAnimJoint HAnimJoint1746 = createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_vt10";
HAnimHumanoid43.joints[137] = HAnimJoint1746;

HAnimJoint HAnimJoint1747 = createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_vt11";
HAnimHumanoid43.joints[138] = HAnimJoint1747;

HAnimJoint HAnimJoint1748 = createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_vt12";
HAnimHumanoid43.joints[139] = HAnimJoint1748;

HAnimJoint HAnimJoint1749 = createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_vt2";
HAnimHumanoid43.joints[140] = HAnimJoint1749;

HAnimJoint HAnimJoint1750 = createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_vt3";
HAnimHumanoid43.joints[141] = HAnimJoint1750;

HAnimJoint HAnimJoint1751 = createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_vt4";
HAnimHumanoid43.joints[142] = HAnimJoint1751;

HAnimJoint HAnimJoint1752 = createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_vt5";
HAnimHumanoid43.joints[143] = HAnimJoint1752;

HAnimJoint HAnimJoint1753 = createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_vt6";
HAnimHumanoid43.joints[144] = HAnimJoint1753;

HAnimJoint HAnimJoint1754 = createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_vt7";
HAnimHumanoid43.joints[145] = HAnimJoint1754;

HAnimJoint HAnimJoint1755 = createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_vt8";
HAnimHumanoid43.joints[146] = HAnimJoint1755;

HAnimJoint HAnimJoint1756 = createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_vt9";
HAnimHumanoid43.joints[147] = HAnimJoint1756;

children[4] = HAnimHumanoid43;

}
