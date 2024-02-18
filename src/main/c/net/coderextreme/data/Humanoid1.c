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
HAnimSite61.name = "buttocks_standing_wall_contact_point";
HAnimSite61.DEF = "hanim_buttocks_standing_wall_contact_point";
TouchSensor TouchSensor62 = createNode("TouchSensor");
TouchSensor62.description = "HAnimSite buttocks_standing_wall_contact_point";
HAnimSite61.children = new MFNode();

HAnimSite61.children[0] = TouchSensor62;

Shape Shape63 = createNode("Shape");
Shape63.USE = "HAnimSiteShape";
HAnimSite61.children[1] = Shape63;

HAnimSegment53.children[2] = HAnimSite61;

HAnimSite HAnimSite64 = createNode("HAnimSite");
HAnimSite64.name = "crotch";
HAnimSite64.DEF = "hanim_crotch";
HAnimSite64.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor65 = createNode("TouchSensor");
TouchSensor65.description = "HAnimSite crotch";
HAnimSite64.children = new MFNode();

HAnimSite64.children[0] = TouchSensor65;

Shape Shape66 = createNode("Shape");
Shape66.USE = "HAnimSiteShape";
HAnimSite64.children[1] = Shape66;

HAnimSegment53.children[3] = HAnimSite64;

HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.name = "l_asis";
HAnimSite67.DEF = "hanim_l_asis";
HAnimSite67.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor68 = createNode("TouchSensor");
TouchSensor68.description = "HAnimSite l_asis";
HAnimSite67.children = new MFNode();

HAnimSite67.children[0] = TouchSensor68;

Shape Shape69 = createNode("Shape");
Shape69.USE = "HAnimSiteShape";
HAnimSite67.children[1] = Shape69;

HAnimSegment53.children[4] = HAnimSite67;

HAnimSite HAnimSite70 = createNode("HAnimSite");
HAnimSite70.name = "l_iliocristale";
HAnimSite70.DEF = "hanim_l_iliocristale";
HAnimSite70.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor71 = createNode("TouchSensor");
TouchSensor71.description = "HAnimSite l_iliocristale";
HAnimSite70.children = new MFNode();

HAnimSite70.children[0] = TouchSensor71;

Shape Shape72 = createNode("Shape");
Shape72.USE = "HAnimSiteShape";
HAnimSite70.children[1] = Shape72;

HAnimSegment53.children[5] = HAnimSite70;

HAnimSite HAnimSite73 = createNode("HAnimSite");
HAnimSite73.name = "l_psis";
HAnimSite73.DEF = "hanim_l_psis";
HAnimSite73.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor74 = createNode("TouchSensor");
TouchSensor74.description = "HAnimSite l_psis";
HAnimSite73.children = new MFNode();

HAnimSite73.children[0] = TouchSensor74;

Shape Shape75 = createNode("Shape");
Shape75.USE = "HAnimSiteShape";
HAnimSite73.children[1] = Shape75;

HAnimSegment53.children[6] = HAnimSite73;

HAnimSite HAnimSite76 = createNode("HAnimSite");
HAnimSite76.name = "l_trochanterion";
HAnimSite76.DEF = "hanim_l_trochanterion";
HAnimSite76.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor77 = createNode("TouchSensor");
TouchSensor77.description = "HAnimSite l_trochanterion";
HAnimSite76.children = new MFNode();

HAnimSite76.children[0] = TouchSensor77;

Shape Shape78 = createNode("Shape");
Shape78.USE = "HAnimSiteShape";
HAnimSite76.children[1] = Shape78;

HAnimSegment53.children[7] = HAnimSite76;

HAnimSite HAnimSite79 = createNode("HAnimSite");
HAnimSite79.name = "r_asis";
HAnimSite79.DEF = "hanim_r_asis";
HAnimSite79.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor80 = createNode("TouchSensor");
TouchSensor80.description = "HAnimSite r_asis";
HAnimSite79.children = new MFNode();

HAnimSite79.children[0] = TouchSensor80;

Shape Shape81 = createNode("Shape");
Shape81.USE = "HAnimSiteShape";
HAnimSite79.children[1] = Shape81;

HAnimSegment53.children[8] = HAnimSite79;

HAnimSite HAnimSite82 = createNode("HAnimSite");
HAnimSite82.name = "r_iliocristale";
HAnimSite82.DEF = "hanim_r_iliocristale";
HAnimSite82.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor83 = createNode("TouchSensor");
TouchSensor83.description = "HAnimSite r_iliocristale";
HAnimSite82.children = new MFNode();

HAnimSite82.children[0] = TouchSensor83;

Shape Shape84 = createNode("Shape");
Shape84.USE = "HAnimSiteShape";
HAnimSite82.children[1] = Shape84;

HAnimSegment53.children[9] = HAnimSite82;

HAnimSite HAnimSite85 = createNode("HAnimSite");
HAnimSite85.name = "r_psis";
HAnimSite85.DEF = "hanim_r_psis";
HAnimSite85.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor86 = createNode("TouchSensor");
TouchSensor86.description = "HAnimSite r_psis";
HAnimSite85.children = new MFNode();

HAnimSite85.children[0] = TouchSensor86;

Shape Shape87 = createNode("Shape");
Shape87.USE = "HAnimSiteShape";
HAnimSite85.children[1] = Shape87;

HAnimSegment53.children[10] = HAnimSite85;

HAnimSite HAnimSite88 = createNode("HAnimSite");
HAnimSite88.name = "r_trochanterion";
HAnimSite88.DEF = "hanim_r_trochanterion";
HAnimSite88.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor89 = createNode("TouchSensor");
TouchSensor89.description = "HAnimSite r_trochanterion";
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
HAnimSite95.name = "adams_apple";
HAnimSite95.DEF = "hanim_adams_apple";
TouchSensor TouchSensor96 = createNode("TouchSensor");
TouchSensor96.description = "HAnimSite adams_apple";
HAnimSite95.children = new MFNode();

HAnimSite95.children[0] = TouchSensor96;

Shape Shape97 = createNode("Shape");
Shape97.USE = "HAnimSiteShape";
HAnimSite95.children[1] = Shape97;

HAnimSegment53.children[13] = HAnimSite95;

HAnimSite HAnimSite98 = createNode("HAnimSite");
HAnimSite98.name = "cervicale";
HAnimSite98.DEF = "hanim_cervicale";
HAnimSite98.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor99 = createNode("TouchSensor");
TouchSensor99.description = "HAnimSite cervicale";
HAnimSite98.children = new MFNode();

HAnimSite98.children[0] = TouchSensor99;

Shape Shape100 = createNode("Shape");
Shape100.USE = "HAnimSiteShape";
HAnimSite98.children[1] = Shape100;

HAnimSegment53.children[14] = HAnimSite98;

HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.name = "l_acromion";
HAnimSite101.DEF = "hanim_l_acromion";
HAnimSite101.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor102 = createNode("TouchSensor");
TouchSensor102.description = "HAnimSite l_acromion";
HAnimSite101.children = new MFNode();

HAnimSite101.children[0] = TouchSensor102;

Shape Shape103 = createNode("Shape");
Shape103.USE = "HAnimSiteShape";
HAnimSite101.children[1] = Shape103;

HAnimSegment53.children[15] = HAnimSite101;

HAnimSite HAnimSite104 = createNode("HAnimSite");
HAnimSite104.name = "l_axilla_distal_pt";
HAnimSite104.DEF = "hanim_l_axilla_distal_pt";
HAnimSite104.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor105 = createNode("TouchSensor");
TouchSensor105.description = "HAnimSite l_axilla_distal_pt";
HAnimSite104.children = new MFNode();

HAnimSite104.children[0] = TouchSensor105;

Shape Shape106 = createNode("Shape");
Shape106.USE = "HAnimSiteShape";
HAnimSite104.children[1] = Shape106;

HAnimSegment53.children[16] = HAnimSite104;

HAnimSite HAnimSite107 = createNode("HAnimSite");
HAnimSite107.name = "l_axilla_posterior_folds";
HAnimSite107.DEF = "hanim_l_axilla_posterior_folds";
TouchSensor TouchSensor108 = createNode("TouchSensor");
TouchSensor108.description = "HAnimSite l_axilla_posterior_folds";
HAnimSite107.children = new MFNode();

HAnimSite107.children[0] = TouchSensor108;

Shape Shape109 = createNode("Shape");
Shape109.USE = "HAnimSiteShape";
HAnimSite107.children[1] = Shape109;

HAnimSegment53.children[17] = HAnimSite107;

HAnimSite HAnimSite110 = createNode("HAnimSite");
HAnimSite110.name = "l_axilla_proximal";
HAnimSite110.DEF = "hanim_l_axilla_proximal";
HAnimSite110.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor111 = createNode("TouchSensor");
TouchSensor111.description = "HAnimSite l_axilla_proximal";
HAnimSite110.children = new MFNode();

HAnimSite110.children[0] = TouchSensor111;

Shape Shape112 = createNode("Shape");
Shape112.USE = "HAnimSiteShape";
HAnimSite110.children[1] = Shape112;

HAnimSegment53.children[18] = HAnimSite110;

HAnimSite HAnimSite113 = createNode("HAnimSite");
HAnimSite113.name = "l_chest_midsagittal_plane";
HAnimSite113.DEF = "hanim_l_chest_midsagittal_plane";
TouchSensor TouchSensor114 = createNode("TouchSensor");
TouchSensor114.description = "HAnimSite l_chest_midsagittal_plane";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = TouchSensor114;

Shape Shape115 = createNode("Shape");
Shape115.USE = "HAnimSiteShape";
HAnimSite113.children[1] = Shape115;

HAnimSegment53.children[19] = HAnimSite113;

HAnimSite HAnimSite116 = createNode("HAnimSite");
HAnimSite116.name = "l_clavicale";
HAnimSite116.DEF = "hanim_l_clavicale";
HAnimSite116.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor117 = createNode("TouchSensor");
TouchSensor117.description = "HAnimSite l_clavicale";
HAnimSite116.children = new MFNode();

HAnimSite116.children[0] = TouchSensor117;

Shape Shape118 = createNode("Shape");
Shape118.USE = "HAnimSiteShape";
HAnimSite116.children[1] = Shape118;

HAnimSegment53.children[20] = HAnimSite116;

HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.name = "l_neck_base";
HAnimSite119.DEF = "hanim_l_neck_base";
HAnimSite119.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor120 = createNode("TouchSensor");
TouchSensor120.description = "HAnimSite l_neck_base";
HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = TouchSensor120;

Shape Shape121 = createNode("Shape");
Shape121.USE = "HAnimSiteShape";
HAnimSite119.children[1] = Shape121;

HAnimSegment53.children[21] = HAnimSite119;

HAnimSite HAnimSite122 = createNode("HAnimSite");
HAnimSite122.name = "l_rib10";
HAnimSite122.DEF = "hanim_l_rib10";
HAnimSite122.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor123 = createNode("TouchSensor");
TouchSensor123.description = "HAnimSite l_rib10";
HAnimSite122.children = new MFNode();

HAnimSite122.children[0] = TouchSensor123;

Shape Shape124 = createNode("Shape");
Shape124.USE = "HAnimSiteShape";
HAnimSite122.children[1] = Shape124;

HAnimSegment53.children[22] = HAnimSite122;

HAnimSite HAnimSite125 = createNode("HAnimSite");
HAnimSite125.name = "l_thelion";
HAnimSite125.DEF = "hanim_l_thelion";
HAnimSite125.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor126 = createNode("TouchSensor");
TouchSensor126.description = "HAnimSite l_thelion";
HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = TouchSensor126;

Shape Shape127 = createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125.children[1] = Shape127;

HAnimSegment53.children[23] = HAnimSite125;

HAnimSite HAnimSite128 = createNode("HAnimSite");
HAnimSite128.name = "mesosternale";
HAnimSite128.DEF = "hanim_mesosternale";
TouchSensor TouchSensor129 = createNode("TouchSensor");
TouchSensor129.description = "HAnimSite mesosternale";
HAnimSite128.children = new MFNode();

HAnimSite128.children[0] = TouchSensor129;

Shape Shape130 = createNode("Shape");
Shape130.USE = "HAnimSiteShape";
HAnimSite128.children[1] = Shape130;

HAnimSegment53.children[24] = HAnimSite128;

HAnimSite HAnimSite131 = createNode("HAnimSite");
HAnimSite131.name = "navel";
HAnimSite131.DEF = "hanim_navel";
HAnimSite131.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor132 = createNode("TouchSensor");
TouchSensor132.description = "HAnimSite navel";
HAnimSite131.children = new MFNode();

HAnimSite131.children[0] = TouchSensor132;

Shape Shape133 = createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131.children[1] = Shape133;

HAnimSegment53.children[25] = HAnimSite131;

HAnimSite HAnimSite134 = createNode("HAnimSite");
HAnimSite134.name = "r_acromion";
HAnimSite134.DEF = "hanim_r_acromion";
HAnimSite134.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor135 = createNode("TouchSensor");
TouchSensor135.description = "HAnimSite r_acromion";
HAnimSite134.children = new MFNode();

HAnimSite134.children[0] = TouchSensor135;

Shape Shape136 = createNode("Shape");
Shape136.USE = "HAnimSiteShape";
HAnimSite134.children[1] = Shape136;

HAnimSegment53.children[26] = HAnimSite134;

HAnimSite HAnimSite137 = createNode("HAnimSite");
HAnimSite137.name = "r_axilla_distal_pt";
HAnimSite137.DEF = "hanim_r_axilla_distal_pt";
HAnimSite137.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor138 = createNode("TouchSensor");
TouchSensor138.description = "HAnimSite r_axilla_distal_pt";
HAnimSite137.children = new MFNode();

HAnimSite137.children[0] = TouchSensor138;

Shape Shape139 = createNode("Shape");
Shape139.USE = "HAnimSiteShape";
HAnimSite137.children[1] = Shape139;

HAnimSegment53.children[27] = HAnimSite137;

HAnimSite HAnimSite140 = createNode("HAnimSite");
HAnimSite140.name = "r_axilla_posterior_folds";
HAnimSite140.DEF = "hanim_r_axilla_posterior_folds";
TouchSensor TouchSensor141 = createNode("TouchSensor");
TouchSensor141.description = "HAnimSite r_axilla_posterior_folds";
HAnimSite140.children = new MFNode();

HAnimSite140.children[0] = TouchSensor141;

Shape Shape142 = createNode("Shape");
Shape142.USE = "HAnimSiteShape";
HAnimSite140.children[1] = Shape142;

HAnimSegment53.children[28] = HAnimSite140;

HAnimSite HAnimSite143 = createNode("HAnimSite");
HAnimSite143.name = "r_axilla_proximal";
HAnimSite143.DEF = "hanim_r_axilla_proximal";
HAnimSite143.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor144 = createNode("TouchSensor");
TouchSensor144.description = "HAnimSite r_axilla_proximal";
HAnimSite143.children = new MFNode();

HAnimSite143.children[0] = TouchSensor144;

Shape Shape145 = createNode("Shape");
Shape145.USE = "HAnimSiteShape";
HAnimSite143.children[1] = Shape145;

HAnimSegment53.children[29] = HAnimSite143;

HAnimSite HAnimSite146 = createNode("HAnimSite");
HAnimSite146.name = "r_chest_midsagittal_plane";
HAnimSite146.DEF = "hanim_r_chest_midsagittal_plane";
TouchSensor TouchSensor147 = createNode("TouchSensor");
TouchSensor147.description = "HAnimSite r_chest_midsagittal_plane";
HAnimSite146.children = new MFNode();

HAnimSite146.children[0] = TouchSensor147;

Shape Shape148 = createNode("Shape");
Shape148.USE = "HAnimSiteShape";
HAnimSite146.children[1] = Shape148;

HAnimSegment53.children[30] = HAnimSite146;

HAnimSite HAnimSite149 = createNode("HAnimSite");
HAnimSite149.name = "r_clavicale";
HAnimSite149.DEF = "hanim_r_clavicale";
HAnimSite149.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor150 = createNode("TouchSensor");
TouchSensor150.description = "HAnimSite r_clavicale";
HAnimSite149.children = new MFNode();

HAnimSite149.children[0] = TouchSensor150;

Shape Shape151 = createNode("Shape");
Shape151.USE = "HAnimSiteShape";
HAnimSite149.children[1] = Shape151;

HAnimSegment53.children[31] = HAnimSite149;

HAnimSite HAnimSite152 = createNode("HAnimSite");
HAnimSite152.name = "r_neck_base";
HAnimSite152.DEF = "hanim_r_neck_base";
HAnimSite152.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor153 = createNode("TouchSensor");
TouchSensor153.description = "HAnimSite r_neck_base";
HAnimSite152.children = new MFNode();

HAnimSite152.children[0] = TouchSensor153;

Shape Shape154 = createNode("Shape");
Shape154.USE = "HAnimSiteShape";
HAnimSite152.children[1] = Shape154;

HAnimSegment53.children[32] = HAnimSite152;

HAnimSite HAnimSite155 = createNode("HAnimSite");
HAnimSite155.name = "r_rib10";
HAnimSite155.DEF = "hanim_r_rib10";
HAnimSite155.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor156 = createNode("TouchSensor");
TouchSensor156.description = "HAnimSite r_rib10";
HAnimSite155.children = new MFNode();

HAnimSite155.children[0] = TouchSensor156;

Shape Shape157 = createNode("Shape");
Shape157.USE = "HAnimSiteShape";
HAnimSite155.children[1] = Shape157;

HAnimSegment53.children[33] = HAnimSite155;

HAnimSite HAnimSite158 = createNode("HAnimSite");
HAnimSite158.name = "r_thelion";
HAnimSite158.DEF = "hanim_r_thelion";
HAnimSite158.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor159 = createNode("TouchSensor");
TouchSensor159.description = "HAnimSite r_thelion";
HAnimSite158.children = new MFNode();

HAnimSite158.children[0] = TouchSensor159;

Shape Shape160 = createNode("Shape");
Shape160.USE = "HAnimSiteShape";
HAnimSite158.children[1] = Shape160;

HAnimSegment53.children[34] = HAnimSite158;

HAnimSite HAnimSite161 = createNode("HAnimSite");
HAnimSite161.name = "rear_center_midsagittal_plane";
HAnimSite161.DEF = "hanim_rear_center_midsagittal_plane";
TouchSensor TouchSensor162 = createNode("TouchSensor");
TouchSensor162.description = "HAnimSite rear_center_midsagittal_plane";
HAnimSite161.children = new MFNode();

HAnimSite161.children[0] = TouchSensor162;

Shape Shape163 = createNode("Shape");
Shape163.USE = "HAnimSiteShape";
HAnimSite161.children[1] = Shape163;

HAnimSegment53.children[35] = HAnimSite161;

HAnimSite HAnimSite164 = createNode("HAnimSite");
HAnimSite164.name = "spine_1_middle_back";
HAnimSite164.DEF = "hanim_spine_1_middle_back";
TouchSensor TouchSensor165 = createNode("TouchSensor");
TouchSensor165.description = "HAnimSite spine_1_middle_back";
HAnimSite164.children = new MFNode();

HAnimSite164.children[0] = TouchSensor165;

Shape Shape166 = createNode("Shape");
Shape166.USE = "HAnimSiteShape";
HAnimSite164.children[1] = Shape166;

HAnimSegment53.children[36] = HAnimSite164;

HAnimSite HAnimSite167 = createNode("HAnimSite");
HAnimSite167.name = "spine_2_middle_back";
HAnimSite167.DEF = "hanim_spine_2_middle_back";
TouchSensor TouchSensor168 = createNode("TouchSensor");
TouchSensor168.description = "HAnimSite spine_2_middle_back";
HAnimSite167.children = new MFNode();

HAnimSite167.children[0] = TouchSensor168;

Shape Shape169 = createNode("Shape");
Shape169.USE = "HAnimSiteShape";
HAnimSite167.children[1] = Shape169;

HAnimSegment53.children[37] = HAnimSite167;

HAnimSite HAnimSite170 = createNode("HAnimSite");
HAnimSite170.name = "substernale";
HAnimSite170.DEF = "hanim_substernale";
HAnimSite170.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor171 = createNode("TouchSensor");
TouchSensor171.description = "HAnimSite substernale";
HAnimSite170.children = new MFNode();

HAnimSite170.children[0] = TouchSensor171;

Shape Shape172 = createNode("Shape");
Shape172.USE = "HAnimSiteShape";
HAnimSite170.children[1] = Shape172;

HAnimSegment53.children[38] = HAnimSite170;

HAnimSite HAnimSite173 = createNode("HAnimSite");
HAnimSite173.name = "suprasternale";
HAnimSite173.DEF = "hanim_suprasternale";
HAnimSite173.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor174 = createNode("TouchSensor");
TouchSensor174.description = "HAnimSite suprasternale";
HAnimSite173.children = new MFNode();

HAnimSite173.children[0] = TouchSensor174;

Shape Shape175 = createNode("Shape");
Shape175.USE = "HAnimSiteShape";
HAnimSite173.children[1] = Shape175;

HAnimSegment53.children[39] = HAnimSite173;

HAnimSite HAnimSite176 = createNode("HAnimSite");
HAnimSite176.name = "waist_preferred_anterior";
HAnimSite176.DEF = "hanim_waist_preferred_anterior";
TouchSensor TouchSensor177 = createNode("TouchSensor");
TouchSensor177.description = "HAnimSite waist_preferred_anterior";
HAnimSite176.children = new MFNode();

HAnimSite176.children[0] = TouchSensor177;

Shape Shape178 = createNode("Shape");
Shape178.USE = "HAnimSiteShape";
HAnimSite176.children[1] = Shape178;

HAnimSegment53.children[40] = HAnimSite176;

HAnimSite HAnimSite179 = createNode("HAnimSite");
HAnimSite179.name = "waist_preferred_posterior";
HAnimSite179.DEF = "hanim_waist_preferred_posterior";
HAnimSite179.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor180 = createNode("TouchSensor");
TouchSensor180.description = "HAnimSite waist_preferred_posterior";
HAnimSite179.children = new MFNode();

HAnimSite179.children[0] = TouchSensor180;

Shape Shape181 = createNode("Shape");
Shape181.USE = "HAnimSiteShape";
HAnimSite179.children[1] = Shape181;

HAnimSegment53.children[41] = HAnimSite179;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.name = "sacroiliac";
HAnimJoint182.DEF = "hanim_sacroiliac";
HAnimJoint182.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint182.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint182.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment183 = createNode("HAnimSegment");
HAnimSegment183.name = "pelvis";
HAnimSegment183.DEF = "hanim_pelvis";
Transform Transform184 = createNode("Transform");
Transform184.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Transform Transform185 = createNode("Transform");
//Empty Transform
Shape Shape186 = createNode("Shape");
Shape186.USE = "HAnimJointShape";
Transform185.child = new undefined();

Transform185.child[0] = Shape186;

Transform184.children = new MFNode();

Transform184.children[0] = Transform185;

HAnimSegment183.children = new MFNode();

HAnimSegment183.children[0] = Transform184;

Shape Shape187 = createNode("Shape");
LineSet LineSet188 = createNode("LineSet");
LineSet188.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate189 = createNode("Coordinate");
Coordinate189.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet188.coord = Coordinate189;

//from sacroiliac to l_hip vertices 2
ColorRGBA ColorRGBA190 = createNode("ColorRGBA");
ColorRGBA190.USE = "HAnimSegmentLineColorRGBA";
LineSet188.color = ColorRGBA190;

Shape187.geometry = LineSet188;

HAnimSegment183.children[1] = Shape187;

HAnimSite HAnimSite191 = createNode("HAnimSite");
HAnimSite191.name = "l_femoral_lateral_epicondyles";
HAnimSite191.DEF = "hanim_l_femoral_lateral_epicondyles";
HAnimSite191.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor192 = createNode("TouchSensor");
TouchSensor192.description = "HAnimSite l_femoral_lateral_epicondyles";
HAnimSite191.children = new MFNode();

HAnimSite191.children[0] = TouchSensor192;

Shape Shape193 = createNode("Shape");
Shape193.USE = "HAnimSiteShape";
HAnimSite191.children[1] = Shape193;

HAnimSegment183.children[2] = HAnimSite191;

HAnimSite HAnimSite194 = createNode("HAnimSite");
HAnimSite194.name = "l_femoral_medial_epicondyles";
HAnimSite194.DEF = "hanim_l_femoral_medial_epicondyles";
HAnimSite194.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor195 = createNode("TouchSensor");
TouchSensor195.description = "HAnimSite l_femoral_medial_epicondyles";
HAnimSite194.children = new MFNode();

HAnimSite194.children[0] = TouchSensor195;

Shape Shape196 = createNode("Shape");
Shape196.USE = "HAnimSiteShape";
HAnimSite194.children[1] = Shape196;

HAnimSegment183.children[3] = HAnimSite194;

HAnimSite HAnimSite197 = createNode("HAnimSite");
HAnimSite197.name = "l_knee_crease";
HAnimSite197.DEF = "hanim_l_knee_crease";
HAnimSite197.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor198 = createNode("TouchSensor");
TouchSensor198.description = "HAnimSite l_knee_crease";
HAnimSite197.children = new MFNode();

HAnimSite197.children[0] = TouchSensor198;

Shape Shape199 = createNode("Shape");
Shape199.USE = "HAnimSiteShape";
HAnimSite197.children[1] = Shape199;

HAnimSegment183.children[4] = HAnimSite197;

HAnimSite HAnimSite200 = createNode("HAnimSite");
HAnimSite200.name = "l_suprapatella";
HAnimSite200.DEF = "hanim_l_suprapatella";
TouchSensor TouchSensor201 = createNode("TouchSensor");
TouchSensor201.description = "HAnimSite l_suprapatella";
HAnimSite200.children = new MFNode();

HAnimSite200.children[0] = TouchSensor201;

Shape Shape202 = createNode("Shape");
Shape202.USE = "HAnimSiteShape";
HAnimSite200.children[1] = Shape202;

HAnimSegment183.children[5] = HAnimSite200;

Shape Shape203 = createNode("Shape");
LineSet LineSet204 = createNode("LineSet");
LineSet204.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate205 = createNode("Coordinate");
Coordinate205.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet204.coord = Coordinate205;

//from sacroiliac to r_hip vertices 2
ColorRGBA ColorRGBA206 = createNode("ColorRGBA");
ColorRGBA206.USE = "HAnimSegmentLineColorRGBA";
LineSet204.color = ColorRGBA206;

Shape203.geometry = LineSet204;

HAnimSegment183.children[6] = Shape203;

HAnimSite HAnimSite207 = createNode("HAnimSite");
HAnimSite207.name = "r_femoral_lateral_epicondyles";
HAnimSite207.DEF = "hanim_r_femoral_lateral_epicondyles";
HAnimSite207.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor208 = createNode("TouchSensor");
TouchSensor208.description = "HAnimSite r_femoral_lateral_epicondyles";
HAnimSite207.children = new MFNode();

HAnimSite207.children[0] = TouchSensor208;

Shape Shape209 = createNode("Shape");
Shape209.USE = "HAnimSiteShape";
HAnimSite207.children[1] = Shape209;

HAnimSegment183.children[7] = HAnimSite207;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.name = "r_femoral_medial_epicondyles";
HAnimSite210.DEF = "hanim_r_femoral_medial_epicondyles";
HAnimSite210.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor211 = createNode("TouchSensor");
TouchSensor211.description = "HAnimSite r_femoral_medial_epicondyles";
HAnimSite210.children = new MFNode();

HAnimSite210.children[0] = TouchSensor211;

Shape Shape212 = createNode("Shape");
Shape212.USE = "HAnimSiteShape";
HAnimSite210.children[1] = Shape212;

HAnimSegment183.children[8] = HAnimSite210;

HAnimSite HAnimSite213 = createNode("HAnimSite");
HAnimSite213.name = "r_knee_crease";
HAnimSite213.DEF = "hanim_r_knee_crease";
HAnimSite213.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor214 = createNode("TouchSensor");
TouchSensor214.description = "HAnimSite r_knee_crease";
HAnimSite213.children = new MFNode();

HAnimSite213.children[0] = TouchSensor214;

Shape Shape215 = createNode("Shape");
Shape215.USE = "HAnimSiteShape";
HAnimSite213.children[1] = Shape215;

HAnimSegment183.children[9] = HAnimSite213;

HAnimSite HAnimSite216 = createNode("HAnimSite");
HAnimSite216.name = "r_suprapatella";
HAnimSite216.DEF = "hanim_r_suprapatella";
TouchSensor TouchSensor217 = createNode("TouchSensor");
TouchSensor217.description = "HAnimSite r_suprapatella";
HAnimSite216.children = new MFNode();

HAnimSite216.children[0] = TouchSensor217;

Shape Shape218 = createNode("Shape");
Shape218.USE = "HAnimSiteShape";
HAnimSite216.children[1] = Shape218;

HAnimSegment183.children[10] = HAnimSite216;

HAnimJoint182.children = new MFNode();

HAnimJoint182.children[0] = HAnimSegment183;

HAnimJoint HAnimJoint219 = createNode("HAnimJoint");
HAnimJoint219.name = "l_hip";
HAnimJoint219.DEF = "hanim_l_hip";
HAnimJoint219.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint219.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint219.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment220 = createNode("HAnimSegment");
HAnimSegment220.name = "l_thigh";
HAnimSegment220.DEF = "hanim_l_thigh";
Transform Transform221 = createNode("Transform");
Transform221.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Transform Transform222 = createNode("Transform");
//Empty Transform
Shape Shape223 = createNode("Shape");
Shape223.USE = "HAnimJointShape";
Transform222.child = new undefined();

Transform222.child[0] = Shape223;

Transform221.children = new MFNode();

Transform221.children[0] = Transform222;

HAnimSegment220.children = new MFNode();

HAnimSegment220.children[0] = Transform221;

Shape Shape224 = createNode("Shape");
LineSet LineSet225 = createNode("LineSet");
LineSet225.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate226 = createNode("Coordinate");
Coordinate226.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet225.coord = Coordinate226;

//from l_hip to l_knee vertices 2
ColorRGBA ColorRGBA227 = createNode("ColorRGBA");
ColorRGBA227.USE = "HAnimSegmentLineColorRGBA";
LineSet225.color = ColorRGBA227;

Shape224.geometry = LineSet225;

HAnimSegment220.children[1] = Shape224;

HAnimSite HAnimSite228 = createNode("HAnimSite");
HAnimSite228.name = "l_lateral_malleolus";
HAnimSite228.DEF = "hanim_l_lateral_malleolus";
HAnimSite228.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor229 = createNode("TouchSensor");
TouchSensor229.description = "HAnimSite l_lateral_malleolus";
HAnimSite228.children = new MFNode();

HAnimSite228.children[0] = TouchSensor229;

Shape Shape230 = createNode("Shape");
Shape230.USE = "HAnimSiteShape";
HAnimSite228.children[1] = Shape230;

HAnimSegment220.children[2] = HAnimSite228;

HAnimSite HAnimSite231 = createNode("HAnimSite");
HAnimSite231.name = "l_medial_malleolus";
HAnimSite231.DEF = "hanim_l_medial_malleolus";
HAnimSite231.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor232 = createNode("TouchSensor");
TouchSensor232.description = "HAnimSite l_medial_malleolus";
HAnimSite231.children = new MFNode();

HAnimSite231.children[0] = TouchSensor232;

Shape Shape233 = createNode("Shape");
Shape233.USE = "HAnimSiteShape";
HAnimSite231.children[1] = Shape233;

HAnimSegment220.children[3] = HAnimSite231;

HAnimSite HAnimSite234 = createNode("HAnimSite");
HAnimSite234.name = "l_tibiale";
HAnimSite234.DEF = "hanim_l_tibiale";
TouchSensor TouchSensor235 = createNode("TouchSensor");
TouchSensor235.description = "HAnimSite l_tibiale";
HAnimSite234.children = new MFNode();

HAnimSite234.children[0] = TouchSensor235;

Shape Shape236 = createNode("Shape");
Shape236.USE = "HAnimSiteShape";
HAnimSite234.children[1] = Shape236;

HAnimSegment220.children[4] = HAnimSite234;

HAnimJoint219.children = new MFNode();

HAnimJoint219.children[0] = HAnimSegment220;

HAnimJoint HAnimJoint237 = createNode("HAnimJoint");
HAnimJoint237.name = "l_knee";
HAnimJoint237.DEF = "hanim_l_knee";
HAnimJoint237.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint237.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint237.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment238 = createNode("HAnimSegment");
HAnimSegment238.name = "l_calf";
HAnimSegment238.DEF = "hanim_l_calf";
Transform Transform239 = createNode("Transform");
Transform239.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
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
Coordinate244.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet243.coord = Coordinate244;

//from l_knee to l_talocrural vertices 2
ColorRGBA ColorRGBA245 = createNode("ColorRGBA");
ColorRGBA245.USE = "HAnimSegmentLineColorRGBA";
LineSet243.color = ColorRGBA245;

Shape242.geometry = LineSet243;

HAnimSegment238.children[1] = Shape242;

HAnimSite HAnimSite246 = createNode("HAnimSite");
HAnimSite246.name = "l_calcaneus_posterior";
HAnimSite246.DEF = "hanim_l_calcaneus_posterior";
HAnimSite246.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor247 = createNode("TouchSensor");
TouchSensor247.description = "HAnimSite l_calcaneus_posterior";
HAnimSite246.children = new MFNode();

HAnimSite246.children[0] = TouchSensor247;

Shape Shape248 = createNode("Shape");
Shape248.USE = "HAnimSiteShape";
HAnimSite246.children[1] = Shape248;

HAnimSegment238.children[2] = HAnimSite246;

HAnimSite HAnimSite249 = createNode("HAnimSite");
HAnimSite249.name = "l_sphyrion";
HAnimSite249.DEF = "hanim_l_sphyrion";
HAnimSite249.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor250 = createNode("TouchSensor");
TouchSensor250.description = "HAnimSite l_sphyrion";
HAnimSite249.children = new MFNode();

HAnimSite249.children[0] = TouchSensor250;

Shape Shape251 = createNode("Shape");
Shape251.USE = "HAnimSiteShape";
HAnimSite249.children[1] = Shape251;

HAnimSegment238.children[3] = HAnimSite249;

HAnimJoint237.children = new MFNode();

HAnimJoint237.children[0] = HAnimSegment238;

HAnimJoint HAnimJoint252 = createNode("HAnimJoint");
HAnimJoint252.name = "l_talocrural";
HAnimJoint252.DEF = "hanim_l_talocrural";
HAnimJoint252.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint252.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint252.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment253 = createNode("HAnimSegment");
HAnimSegment253.name = "l_talus";
HAnimSegment253.DEF = "hanim_l_talus";
Transform Transform254 = createNode("Transform");
Transform254.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform254.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform254.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
Transform Transform255 = createNode("Transform");
//Empty Transform left foot
Shape Shape256 = createNode("Shape");
Shape256.USE = "HAnimJointShape";
Transform255.child = new undefined();

Transform255.child[0] = Shape256;

Transform254.children = new MFNode();

Transform254.children[0] = Transform255;

HAnimSegment253.children = new MFNode();

HAnimSegment253.children[0] = Transform254;

Shape Shape257 = createNode("Shape");
LineSet LineSet258 = createNode("LineSet");
LineSet258.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate259 = createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004]);
LineSet258.coord = Coordinate259;

//from l_talocrural to l_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA260 = createNode("ColorRGBA");
ColorRGBA260.USE = "HAnimSegmentLineColorRGBA";
LineSet258.color = ColorRGBA260;

Shape257.geometry = LineSet258;

HAnimSegment253.children[1] = Shape257;

HAnimSite HAnimSite261 = createNode("HAnimSite");
HAnimSite261.name = "l_metatarsal_phalanx_1";
HAnimSite261.DEF = "hanim_l_metatarsal_phalanx_1";
TouchSensor TouchSensor262 = createNode("TouchSensor");
TouchSensor262.description = "HAnimSite l_metatarsal_phalanx_1";
HAnimSite261.children = new MFNode();

HAnimSite261.children[0] = TouchSensor262;

Shape Shape263 = createNode("Shape");
Shape263.USE = "HAnimSiteShape";
HAnimSite261.children[1] = Shape263;

HAnimSegment253.children[2] = HAnimSite261;

HAnimSite HAnimSite264 = createNode("HAnimSite");
HAnimSite264.name = "l_metatarsal_phalanx_5";
HAnimSite264.DEF = "hanim_l_metatarsal_phalanx_5";
TouchSensor TouchSensor265 = createNode("TouchSensor");
TouchSensor265.description = "HAnimSite l_metatarsal_phalanx_5";
HAnimSite264.children = new MFNode();

HAnimSite264.children[0] = TouchSensor265;

Shape Shape266 = createNode("Shape");
Shape266.USE = "HAnimSiteShape";
HAnimSite264.children[1] = Shape266;

HAnimSegment253.children[3] = HAnimSite264;

HAnimSite HAnimSite267 = createNode("HAnimSite");
HAnimSite267.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite267.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor268 = createNode("TouchSensor");
TouchSensor268.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite267.children = new MFNode();

HAnimSite267.children[0] = TouchSensor268;

Shape Shape269 = createNode("Shape");
Shape269.USE = "HAnimSiteShape";
HAnimSite267.children[1] = Shape269;

HAnimSegment253.children[4] = HAnimSite267;

HAnimSite HAnimSite270 = createNode("HAnimSite");
HAnimSite270.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite270.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite270.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor271 = createNode("TouchSensor");
TouchSensor271.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite270.children = new MFNode();

HAnimSite270.children[0] = TouchSensor271;

Shape Shape272 = createNode("Shape");
Shape272.USE = "HAnimSiteShape";
HAnimSite270.children[1] = Shape272;

HAnimSegment253.children[5] = HAnimSite270;

HAnimSite HAnimSite273 = createNode("HAnimSite");
HAnimSite273.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite273.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor274 = createNode("TouchSensor");
TouchSensor274.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite273.children = new MFNode();

HAnimSite273.children[0] = TouchSensor274;

Shape Shape275 = createNode("Shape");
Shape275.USE = "HAnimSiteShape";
HAnimSite273.children[1] = Shape275;

HAnimSegment253.children[6] = HAnimSite273;

HAnimSite HAnimSite276 = createNode("HAnimSite");
HAnimSite276.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite276.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor277 = createNode("TouchSensor");
TouchSensor277.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite276.children = new MFNode();

HAnimSite276.children[0] = TouchSensor277;

Shape Shape278 = createNode("Shape");
Shape278.USE = "HAnimSiteShape";
HAnimSite276.children[1] = Shape278;

HAnimSegment253.children[7] = HAnimSite276;

HAnimSite HAnimSite279 = createNode("HAnimSite");
HAnimSite279.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite279.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor280 = createNode("TouchSensor");
TouchSensor280.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite279.children = new MFNode();

HAnimSite279.children[0] = TouchSensor280;

Shape Shape281 = createNode("Shape");
Shape281.USE = "HAnimSiteShape";
HAnimSite279.children[1] = Shape281;

HAnimSegment253.children[8] = HAnimSite279;

HAnimJoint252.children = new MFNode();

HAnimJoint252.children[0] = HAnimSegment253;

HAnimJoint HAnimJoint282 = createNode("HAnimJoint");
HAnimJoint282.name = "l_metatarsophalangeal_2";
HAnimJoint282.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint282.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint282.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint282.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint252.children[1] = HAnimJoint282;

HAnimJoint237.children[1] = HAnimJoint252;

HAnimJoint219.children[1] = HAnimJoint237;

HAnimJoint182.children[1] = HAnimJoint219;

HAnimJoint HAnimJoint283 = createNode("HAnimJoint");
HAnimJoint283.name = "r_hip";
HAnimJoint283.DEF = "hanim_r_hip";
HAnimJoint283.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint283.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint283.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment284 = createNode("HAnimSegment");
HAnimSegment284.name = "r_thigh";
HAnimSegment284.DEF = "hanim_r_thigh";
Transform Transform285 = createNode("Transform");
Transform285.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform286 = createNode("Transform");
//Empty Transform
Shape Shape287 = createNode("Shape");
Shape287.USE = "HAnimJointShape";
Transform286.child = new undefined();

Transform286.child[0] = Shape287;

Transform285.children = new MFNode();

Transform285.children[0] = Transform286;

HAnimSegment284.children = new MFNode();

HAnimSegment284.children[0] = Transform285;

Shape Shape288 = createNode("Shape");
LineSet LineSet289 = createNode("LineSet");
LineSet289.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate290 = createNode("Coordinate");
Coordinate290.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet289.coord = Coordinate290;

//from r_hip to r_knee vertices 2
ColorRGBA ColorRGBA291 = createNode("ColorRGBA");
ColorRGBA291.USE = "HAnimSegmentLineColorRGBA";
LineSet289.color = ColorRGBA291;

Shape288.geometry = LineSet289;

HAnimSegment284.children[1] = Shape288;

HAnimSite HAnimSite292 = createNode("HAnimSite");
HAnimSite292.name = "r_lateral_malleolus";
HAnimSite292.DEF = "hanim_r_lateral_malleolus";
HAnimSite292.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor293 = createNode("TouchSensor");
TouchSensor293.description = "HAnimSite r_lateral_malleolus";
HAnimSite292.children = new MFNode();

HAnimSite292.children[0] = TouchSensor293;

Shape Shape294 = createNode("Shape");
Shape294.USE = "HAnimSiteShape";
HAnimSite292.children[1] = Shape294;

HAnimSegment284.children[2] = HAnimSite292;

HAnimSite HAnimSite295 = createNode("HAnimSite");
HAnimSite295.name = "r_medial_malleolus";
HAnimSite295.DEF = "hanim_r_medial_malleolus";
HAnimSite295.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor296 = createNode("TouchSensor");
TouchSensor296.description = "HAnimSite r_medial_malleolus";
HAnimSite295.children = new MFNode();

HAnimSite295.children[0] = TouchSensor296;

Shape Shape297 = createNode("Shape");
Shape297.USE = "HAnimSiteShape";
HAnimSite295.children[1] = Shape297;

HAnimSegment284.children[3] = HAnimSite295;

HAnimSite HAnimSite298 = createNode("HAnimSite");
HAnimSite298.name = "r_tibiale";
HAnimSite298.DEF = "hanim_r_tibiale";
TouchSensor TouchSensor299 = createNode("TouchSensor");
TouchSensor299.description = "HAnimSite r_tibiale";
HAnimSite298.children = new MFNode();

HAnimSite298.children[0] = TouchSensor299;

Shape Shape300 = createNode("Shape");
Shape300.USE = "HAnimSiteShape";
HAnimSite298.children[1] = Shape300;

HAnimSegment284.children[4] = HAnimSite298;

HAnimJoint283.children = new MFNode();

HAnimJoint283.children[0] = HAnimSegment284;

HAnimJoint HAnimJoint301 = createNode("HAnimJoint");
HAnimJoint301.name = "r_knee";
HAnimJoint301.DEF = "hanim_r_knee";
HAnimJoint301.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint301.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint301.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment302 = createNode("HAnimSegment");
HAnimSegment302.name = "r_calf";
HAnimSegment302.DEF = "hanim_r_calf";
Transform Transform303 = createNode("Transform");
Transform303.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
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
Coordinate308.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet307.coord = Coordinate308;

//from r_knee to r_talocrural vertices 2
ColorRGBA ColorRGBA309 = createNode("ColorRGBA");
ColorRGBA309.USE = "HAnimSegmentLineColorRGBA";
LineSet307.color = ColorRGBA309;

Shape306.geometry = LineSet307;

HAnimSegment302.children[1] = Shape306;

HAnimSite HAnimSite310 = createNode("HAnimSite");
HAnimSite310.name = "r_calcaneus_posterior";
HAnimSite310.DEF = "hanim_r_calcaneus_posterior";
HAnimSite310.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor311 = createNode("TouchSensor");
TouchSensor311.description = "HAnimSite r_calcaneus_posterior";
HAnimSite310.children = new MFNode();

HAnimSite310.children[0] = TouchSensor311;

Shape Shape312 = createNode("Shape");
Shape312.USE = "HAnimSiteShape";
HAnimSite310.children[1] = Shape312;

HAnimSegment302.children[2] = HAnimSite310;

HAnimSite HAnimSite313 = createNode("HAnimSite");
HAnimSite313.name = "r_sphyrion";
HAnimSite313.DEF = "hanim_r_sphyrion";
HAnimSite313.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor314 = createNode("TouchSensor");
TouchSensor314.description = "HAnimSite r_sphyrion";
HAnimSite313.children = new MFNode();

HAnimSite313.children[0] = TouchSensor314;

Shape Shape315 = createNode("Shape");
Shape315.USE = "HAnimSiteShape";
HAnimSite313.children[1] = Shape315;

HAnimSegment302.children[3] = HAnimSite313;

HAnimJoint301.children = new MFNode();

HAnimJoint301.children[0] = HAnimSegment302;

HAnimJoint HAnimJoint316 = createNode("HAnimJoint");
HAnimJoint316.name = "r_talocrural";
HAnimJoint316.DEF = "hanim_r_talocrural";
HAnimJoint316.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint316.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint316.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment317 = createNode("HAnimSegment");
HAnimSegment317.name = "r_talus";
HAnimSegment317.DEF = "hanim_r_talus";
Transform Transform318 = createNode("Transform");
Transform318.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform318.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform318.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
Transform Transform319 = createNode("Transform");
//Empty Transform right foot
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
Coordinate323.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004]);
LineSet322.coord = Coordinate323;

//from r_talocrural to r_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA324 = createNode("ColorRGBA");
ColorRGBA324.USE = "HAnimSegmentLineColorRGBA";
LineSet322.color = ColorRGBA324;

Shape321.geometry = LineSet322;

HAnimSegment317.children[1] = Shape321;

HAnimSite HAnimSite325 = createNode("HAnimSite");
HAnimSite325.name = "r_metatarsal_phalanx_1";
HAnimSite325.DEF = "hanim_r_metatarsal_phalanx_1";
TouchSensor TouchSensor326 = createNode("TouchSensor");
TouchSensor326.description = "HAnimSite r_metatarsal_phalanx_1";
HAnimSite325.children = new MFNode();

HAnimSite325.children[0] = TouchSensor326;

Shape Shape327 = createNode("Shape");
Shape327.USE = "HAnimSiteShape";
HAnimSite325.children[1] = Shape327;

HAnimSegment317.children[2] = HAnimSite325;

HAnimSite HAnimSite328 = createNode("HAnimSite");
HAnimSite328.name = "r_metatarsal_phalanx_5";
HAnimSite328.DEF = "hanim_r_metatarsal_phalanx_5";
TouchSensor TouchSensor329 = createNode("TouchSensor");
TouchSensor329.description = "HAnimSite r_metatarsal_phalanx_5";
HAnimSite328.children = new MFNode();

HAnimSite328.children[0] = TouchSensor329;

Shape Shape330 = createNode("Shape");
Shape330.USE = "HAnimSiteShape";
HAnimSite328.children[1] = Shape330;

HAnimSegment317.children[3] = HAnimSite328;

HAnimSite HAnimSite331 = createNode("HAnimSite");
HAnimSite331.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite331.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor332 = createNode("TouchSensor");
TouchSensor332.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite331.children = new MFNode();

HAnimSite331.children[0] = TouchSensor332;

Shape Shape333 = createNode("Shape");
Shape333.USE = "HAnimSiteShape";
HAnimSite331.children[1] = Shape333;

HAnimSegment317.children[4] = HAnimSite331;

HAnimSite HAnimSite334 = createNode("HAnimSite");
HAnimSite334.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite334.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite334.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor335 = createNode("TouchSensor");
TouchSensor335.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite334.children = new MFNode();

HAnimSite334.children[0] = TouchSensor335;

Shape Shape336 = createNode("Shape");
Shape336.USE = "HAnimSiteShape";
HAnimSite334.children[1] = Shape336;

HAnimSegment317.children[5] = HAnimSite334;

HAnimSite HAnimSite337 = createNode("HAnimSite");
HAnimSite337.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite337.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor338 = createNode("TouchSensor");
TouchSensor338.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite337.children = new MFNode();

HAnimSite337.children[0] = TouchSensor338;

Shape Shape339 = createNode("Shape");
Shape339.USE = "HAnimSiteShape";
HAnimSite337.children[1] = Shape339;

HAnimSegment317.children[6] = HAnimSite337;

HAnimSite HAnimSite340 = createNode("HAnimSite");
HAnimSite340.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite340.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor341 = createNode("TouchSensor");
TouchSensor341.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite340.children = new MFNode();

HAnimSite340.children[0] = TouchSensor341;

Shape Shape342 = createNode("Shape");
Shape342.USE = "HAnimSiteShape";
HAnimSite340.children[1] = Shape342;

HAnimSegment317.children[7] = HAnimSite340;

HAnimSite HAnimSite343 = createNode("HAnimSite");
HAnimSite343.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite343.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor344 = createNode("TouchSensor");
TouchSensor344.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite343.children = new MFNode();

HAnimSite343.children[0] = TouchSensor344;

Shape Shape345 = createNode("Shape");
Shape345.USE = "HAnimSiteShape";
HAnimSite343.children[1] = Shape345;

HAnimSegment317.children[8] = HAnimSite343;

HAnimJoint316.children = new MFNode();

HAnimJoint316.children[0] = HAnimSegment317;

HAnimJoint HAnimJoint346 = createNode("HAnimJoint");
HAnimJoint346.name = "r_metatarsophalangeal_2";
HAnimJoint346.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint346.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint346.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint346.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint316.children[1] = HAnimJoint346;

HAnimJoint301.children[1] = HAnimJoint316;

HAnimJoint283.children[1] = HAnimJoint301;

HAnimJoint182.children[2] = HAnimJoint283;

HAnimJoint52.children[1] = HAnimJoint182;

HAnimJoint HAnimJoint347 = createNode("HAnimJoint");
HAnimJoint347.name = "vl5";
HAnimJoint347.DEF = "hanim_vl5";
HAnimJoint347.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint347.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint347.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment348 = createNode("HAnimSegment");
HAnimSegment348.name = "l5";
HAnimSegment348.DEF = "hanim_l5";
Transform Transform349 = createNode("Transform");
Transform349.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Transform Transform350 = createNode("Transform");
//Empty Transform
Shape Shape351 = createNode("Shape");
Shape351.USE = "HAnimJointShape";
Transform350.child = new undefined();

Transform350.child[0] = Shape351;

Transform349.children = new MFNode();

Transform349.children[0] = Transform350;

HAnimSegment348.children = new MFNode();

HAnimSegment348.children[0] = Transform349;

Shape Shape352 = createNode("Shape");
LineSet LineSet353 = createNode("LineSet");
LineSet353.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate354 = createNode("Coordinate");
Coordinate354.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236]);
LineSet353.coord = Coordinate354;

//from vl5 to skullbase vertices 2
ColorRGBA ColorRGBA355 = createNode("ColorRGBA");
ColorRGBA355.USE = "HAnimSegmentLineColorRGBA";
LineSet353.color = ColorRGBA355;

Shape352.geometry = LineSet353;

HAnimSegment348.children[1] = Shape352;

HAnimSite HAnimSite356 = createNode("HAnimSite");
HAnimSite356.name = "glabella";
HAnimSite356.DEF = "hanim_glabella";
TouchSensor TouchSensor357 = createNode("TouchSensor");
TouchSensor357.description = "HAnimSite glabella";
HAnimSite356.children = new MFNode();

HAnimSite356.children[0] = TouchSensor357;

Shape Shape358 = createNode("Shape");
Shape358.USE = "HAnimSiteShape";
HAnimSite356.children[1] = Shape358;

HAnimSegment348.children[2] = HAnimSite356;

HAnimSite HAnimSite359 = createNode("HAnimSite");
HAnimSite359.name = "l_ectocanthus";
HAnimSite359.DEF = "hanim_l_ectocanthus";
TouchSensor TouchSensor360 = createNode("TouchSensor");
TouchSensor360.description = "HAnimSite l_ectocanthus";
HAnimSite359.children = new MFNode();

HAnimSite359.children[0] = TouchSensor360;

Shape Shape361 = createNode("Shape");
Shape361.USE = "HAnimSiteShape";
HAnimSite359.children[1] = Shape361;

HAnimSegment348.children[3] = HAnimSite359;

HAnimSite HAnimSite362 = createNode("HAnimSite");
HAnimSite362.name = "l_gonion";
HAnimSite362.DEF = "hanim_l_gonion";
HAnimSite362.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor363 = createNode("TouchSensor");
TouchSensor363.description = "HAnimSite l_gonion";
HAnimSite362.children = new MFNode();

HAnimSite362.children[0] = TouchSensor363;

Shape Shape364 = createNode("Shape");
Shape364.USE = "HAnimSiteShape";
HAnimSite362.children[1] = Shape364;

HAnimSegment348.children[4] = HAnimSite362;

HAnimSite HAnimSite365 = createNode("HAnimSite");
HAnimSite365.name = "l_infraorbitale";
HAnimSite365.DEF = "hanim_l_infraorbitale";
HAnimSite365.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor366 = createNode("TouchSensor");
TouchSensor366.description = "HAnimSite l_infraorbitale";
HAnimSite365.children = new MFNode();

HAnimSite365.children[0] = TouchSensor366;

Shape Shape367 = createNode("Shape");
Shape367.USE = "HAnimSiteShape";
HAnimSite365.children[1] = Shape367;

HAnimSegment348.children[5] = HAnimSite365;

HAnimSite HAnimSite368 = createNode("HAnimSite");
HAnimSite368.name = "l_tragion";
HAnimSite368.DEF = "hanim_l_tragion";
HAnimSite368.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor369 = createNode("TouchSensor");
TouchSensor369.description = "HAnimSite l_tragion";
HAnimSite368.children = new MFNode();

HAnimSite368.children[0] = TouchSensor369;

Shape Shape370 = createNode("Shape");
Shape370.USE = "HAnimSiteShape";
HAnimSite368.children[1] = Shape370;

HAnimSegment348.children[6] = HAnimSite368;

HAnimSite HAnimSite371 = createNode("HAnimSite");
HAnimSite371.name = "menton";
HAnimSite371.DEF = "hanim_menton";
TouchSensor TouchSensor372 = createNode("TouchSensor");
TouchSensor372.description = "HAnimSite menton";
HAnimSite371.children = new MFNode();

HAnimSite371.children[0] = TouchSensor372;

Shape Shape373 = createNode("Shape");
Shape373.USE = "HAnimSiteShape";
HAnimSite371.children[1] = Shape373;

HAnimSegment348.children[7] = HAnimSite371;

HAnimSite HAnimSite374 = createNode("HAnimSite");
HAnimSite374.name = "nuchale";
HAnimSite374.DEF = "hanim_nuchale";
HAnimSite374.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor375 = createNode("TouchSensor");
TouchSensor375.description = "HAnimSite nuchale";
HAnimSite374.children = new MFNode();

HAnimSite374.children[0] = TouchSensor375;

Shape Shape376 = createNode("Shape");
Shape376.USE = "HAnimSiteShape";
HAnimSite374.children[1] = Shape376;

HAnimSegment348.children[8] = HAnimSite374;

HAnimSite HAnimSite377 = createNode("HAnimSite");
HAnimSite377.name = "opisthocranion";
HAnimSite377.DEF = "hanim_opisthocranion";
TouchSensor TouchSensor378 = createNode("TouchSensor");
TouchSensor378.description = "HAnimSite opisthocranion";
HAnimSite377.children = new MFNode();

HAnimSite377.children[0] = TouchSensor378;

Shape Shape379 = createNode("Shape");
Shape379.USE = "HAnimSiteShape";
HAnimSite377.children[1] = Shape379;

HAnimSegment348.children[9] = HAnimSite377;

HAnimSite HAnimSite380 = createNode("HAnimSite");
HAnimSite380.name = "r_ectocanthus";
HAnimSite380.DEF = "hanim_r_ectocanthus";
TouchSensor TouchSensor381 = createNode("TouchSensor");
TouchSensor381.description = "HAnimSite r_ectocanthus";
HAnimSite380.children = new MFNode();

HAnimSite380.children[0] = TouchSensor381;

Shape Shape382 = createNode("Shape");
Shape382.USE = "HAnimSiteShape";
HAnimSite380.children[1] = Shape382;

HAnimSegment348.children[10] = HAnimSite380;

HAnimSite HAnimSite383 = createNode("HAnimSite");
HAnimSite383.name = "r_gonion";
HAnimSite383.DEF = "hanim_r_gonion";
HAnimSite383.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor384 = createNode("TouchSensor");
TouchSensor384.description = "HAnimSite r_gonion";
HAnimSite383.children = new MFNode();

HAnimSite383.children[0] = TouchSensor384;

Shape Shape385 = createNode("Shape");
Shape385.USE = "HAnimSiteShape";
HAnimSite383.children[1] = Shape385;

HAnimSegment348.children[11] = HAnimSite383;

HAnimSite HAnimSite386 = createNode("HAnimSite");
HAnimSite386.name = "r_infraorbitale";
HAnimSite386.DEF = "hanim_r_infraorbitale";
HAnimSite386.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor387 = createNode("TouchSensor");
TouchSensor387.description = "HAnimSite r_infraorbitale";
HAnimSite386.children = new MFNode();

HAnimSite386.children[0] = TouchSensor387;

Shape Shape388 = createNode("Shape");
Shape388.USE = "HAnimSiteShape";
HAnimSite386.children[1] = Shape388;

HAnimSegment348.children[12] = HAnimSite386;

HAnimSite HAnimSite389 = createNode("HAnimSite");
HAnimSite389.name = "r_tragion";
HAnimSite389.DEF = "hanim_r_tragion";
HAnimSite389.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor390 = createNode("TouchSensor");
TouchSensor390.description = "HAnimSite r_tragion";
HAnimSite389.children = new MFNode();

HAnimSite389.children[0] = TouchSensor390;

Shape Shape391 = createNode("Shape");
Shape391.USE = "HAnimSiteShape";
HAnimSite389.children[1] = Shape391;

HAnimSegment348.children[13] = HAnimSite389;

HAnimSite HAnimSite392 = createNode("HAnimSite");
HAnimSite392.name = "sellion";
HAnimSite392.DEF = "hanim_sellion";
HAnimSite392.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor393 = createNode("TouchSensor");
TouchSensor393.description = "HAnimSite sellion";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

Shape Shape394 = createNode("Shape");
Shape394.USE = "HAnimSiteShape";
HAnimSite392.children[1] = Shape394;

HAnimSegment348.children[14] = HAnimSite392;

HAnimSite HAnimSite395 = createNode("HAnimSite");
HAnimSite395.name = "skull_vertex";
HAnimSite395.DEF = "hanim_skull_vertex";
TouchSensor TouchSensor396 = createNode("TouchSensor");
TouchSensor396.description = "HAnimSite skull_vertex";
HAnimSite395.children = new MFNode();

HAnimSite395.children[0] = TouchSensor396;

Shape Shape397 = createNode("Shape");
Shape397.USE = "HAnimSiteShape";
HAnimSite395.children[1] = Shape397;

HAnimSegment348.children[15] = HAnimSite395;

HAnimSite HAnimSite398 = createNode("HAnimSite");
HAnimSite398.name = "supramenton";
HAnimSite398.DEF = "hanim_supramenton";
HAnimSite398.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor399 = createNode("TouchSensor");
TouchSensor399.description = "HAnimSite supramenton";
HAnimSite398.children = new MFNode();

HAnimSite398.children[0] = TouchSensor399;

Shape Shape400 = createNode("Shape");
Shape400.USE = "HAnimSiteShape";
HAnimSite398.children[1] = Shape400;

HAnimSegment348.children[16] = HAnimSite398;

Shape Shape401 = createNode("Shape");
LineSet LineSet402 = createNode("LineSet");
LineSet402.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate403 = createNode("Coordinate");
Coordinate403.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387]);
LineSet402.coord = Coordinate403;

//from vl5 to l_shoulder vertices 2
ColorRGBA ColorRGBA404 = createNode("ColorRGBA");
ColorRGBA404.USE = "HAnimSegmentLineColorRGBA";
LineSet402.color = ColorRGBA404;

Shape401.geometry = LineSet402;

HAnimSegment348.children[17] = Shape401;

HAnimSite HAnimSite405 = createNode("HAnimSite");
HAnimSite405.name = "l_bideltoid";
HAnimSite405.DEF = "hanim_l_bideltoid";
TouchSensor TouchSensor406 = createNode("TouchSensor");
TouchSensor406.description = "HAnimSite l_bideltoid";
HAnimSite405.children = new MFNode();

HAnimSite405.children[0] = TouchSensor406;

Shape Shape407 = createNode("Shape");
Shape407.USE = "HAnimSiteShape";
HAnimSite405.children[1] = Shape407;

HAnimSegment348.children[18] = HAnimSite405;

HAnimSite HAnimSite408 = createNode("HAnimSite");
HAnimSite408.name = "l_humeral_lateral_epicondyles";
HAnimSite408.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite408.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor409 = createNode("TouchSensor");
TouchSensor409.description = "HAnimSite l_humeral_lateral_epicondyles";
HAnimSite408.children = new MFNode();

HAnimSite408.children[0] = TouchSensor409;

Shape Shape410 = createNode("Shape");
Shape410.USE = "HAnimSiteShape";
HAnimSite408.children[1] = Shape410;

HAnimSegment348.children[19] = HAnimSite408;

Shape Shape411 = createNode("Shape");
LineSet LineSet412 = createNode("LineSet");
LineSet412.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate413 = createNode("Coordinate");
Coordinate413.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325]);
LineSet412.coord = Coordinate413;

//from vl5 to r_shoulder vertices 2
ColorRGBA ColorRGBA414 = createNode("ColorRGBA");
ColorRGBA414.USE = "HAnimSegmentLineColorRGBA";
LineSet412.color = ColorRGBA414;

Shape411.geometry = LineSet412;

HAnimSegment348.children[20] = Shape411;

HAnimSite HAnimSite415 = createNode("HAnimSite");
HAnimSite415.name = "r_bideltoid";
HAnimSite415.DEF = "hanim_r_bideltoid";
TouchSensor TouchSensor416 = createNode("TouchSensor");
TouchSensor416.description = "HAnimSite r_bideltoid";
HAnimSite415.children = new MFNode();

HAnimSite415.children[0] = TouchSensor416;

Shape Shape417 = createNode("Shape");
Shape417.USE = "HAnimSiteShape";
HAnimSite415.children[1] = Shape417;

HAnimSegment348.children[21] = HAnimSite415;

HAnimSite HAnimSite418 = createNode("HAnimSite");
HAnimSite418.name = "r_humeral_lateral_epicondyles";
HAnimSite418.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite418.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor419 = createNode("TouchSensor");
TouchSensor419.description = "HAnimSite r_humeral_lateral_epicondyles";
HAnimSite418.children = new MFNode();

HAnimSite418.children[0] = TouchSensor419;

Shape Shape420 = createNode("Shape");
Shape420.USE = "HAnimSiteShape";
HAnimSite418.children[1] = Shape420;

HAnimSegment348.children[22] = HAnimSite418;

HAnimJoint347.children = new MFNode();

HAnimJoint347.children[0] = HAnimSegment348;

HAnimJoint HAnimJoint421 = createNode("HAnimJoint");
HAnimJoint421.name = "skullbase";
HAnimJoint421.DEF = "hanim_skullbase";
HAnimJoint421.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint421.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint421.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint347.children[1] = HAnimJoint421;

HAnimJoint HAnimJoint422 = createNode("HAnimJoint");
HAnimJoint422.name = "l_shoulder";
HAnimJoint422.DEF = "hanim_l_shoulder";
HAnimJoint422.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint422.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint422.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment423 = createNode("HAnimSegment");
HAnimSegment423.name = "l_upperarm";
HAnimSegment423.DEF = "hanim_l_upperarm";
Transform Transform424 = createNode("Transform");
Transform424.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
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
Coordinate429.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet428.coord = Coordinate429;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA430 = createNode("ColorRGBA");
ColorRGBA430.USE = "HAnimSegmentLineColorRGBA";
LineSet428.color = ColorRGBA430;

Shape427.geometry = LineSet428;

HAnimSegment423.children[1] = Shape427;

HAnimSite HAnimSite431 = createNode("HAnimSite");
HAnimSite431.name = "l_humeral_medial_epicondyles";
HAnimSite431.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite431.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor432 = createNode("TouchSensor");
TouchSensor432.description = "HAnimSite l_humeral_medial_epicondyles";
HAnimSite431.children = new MFNode();

HAnimSite431.children[0] = TouchSensor432;

Shape Shape433 = createNode("Shape");
Shape433.USE = "HAnimSiteShape";
HAnimSite431.children[1] = Shape433;

HAnimSegment423.children[2] = HAnimSite431;

HAnimSite HAnimSite434 = createNode("HAnimSite");
HAnimSite434.name = "l_olecranon";
HAnimSite434.DEF = "hanim_l_olecranon";
HAnimSite434.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor435 = createNode("TouchSensor");
TouchSensor435.description = "HAnimSite l_olecranon";
HAnimSite434.children = new MFNode();

HAnimSite434.children[0] = TouchSensor435;

Shape Shape436 = createNode("Shape");
Shape436.USE = "HAnimSiteShape";
HAnimSite434.children[1] = Shape436;

HAnimSegment423.children[3] = HAnimSite434;

HAnimSite HAnimSite437 = createNode("HAnimSite");
HAnimSite437.name = "l_radial_styloid";
HAnimSite437.DEF = "hanim_l_radial_styloid";
HAnimSite437.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor438 = createNode("TouchSensor");
TouchSensor438.description = "HAnimSite l_radial_styloid";
HAnimSite437.children = new MFNode();

HAnimSite437.children[0] = TouchSensor438;

Shape Shape439 = createNode("Shape");
Shape439.USE = "HAnimSiteShape";
HAnimSite437.children[1] = Shape439;

HAnimSegment423.children[4] = HAnimSite437;

HAnimSite HAnimSite440 = createNode("HAnimSite");
HAnimSite440.name = "l_radiale";
HAnimSite440.DEF = "hanim_l_radiale";
HAnimSite440.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor441 = createNode("TouchSensor");
TouchSensor441.description = "HAnimSite l_radiale";
HAnimSite440.children = new MFNode();

HAnimSite440.children[0] = TouchSensor441;

Shape Shape442 = createNode("Shape");
Shape442.USE = "HAnimSiteShape";
HAnimSite440.children[1] = Shape442;

HAnimSegment423.children[5] = HAnimSite440;

HAnimJoint422.children = new MFNode();

HAnimJoint422.children[0] = HAnimSegment423;

HAnimJoint HAnimJoint443 = createNode("HAnimJoint");
HAnimJoint443.name = "l_elbow";
HAnimJoint443.DEF = "hanim_l_elbow";
HAnimJoint443.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint443.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint443.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment444 = createNode("HAnimSegment");
HAnimSegment444.name = "l_forearm";
HAnimSegment444.DEF = "hanim_l_forearm";
Transform Transform445 = createNode("Transform");
Transform445.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform446 = createNode("Transform");
//Empty Transform
Shape Shape447 = createNode("Shape");
Shape447.USE = "HAnimJointShape";
Transform446.child = new undefined();

Transform446.child[0] = Shape447;

Transform445.children = new MFNode();

Transform445.children[0] = Transform446;

HAnimSegment444.children = new MFNode();

HAnimSegment444.children[0] = Transform445;

Shape Shape448 = createNode("Shape");
LineSet LineSet449 = createNode("LineSet");
LineSet449.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate450 = createNode("Coordinate");
Coordinate450.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet449.coord = Coordinate450;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA451 = createNode("ColorRGBA");
ColorRGBA451.USE = "HAnimSegmentLineColorRGBA";
LineSet449.color = ColorRGBA451;

Shape448.geometry = LineSet449;

HAnimSegment444.children[1] = Shape448;

HAnimSite HAnimSite452 = createNode("HAnimSite");
HAnimSite452.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite452.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor453 = createNode("TouchSensor");
TouchSensor453.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite452.children = new MFNode();

HAnimSite452.children[0] = TouchSensor453;

Shape Shape454 = createNode("Shape");
Shape454.USE = "HAnimSiteShape";
HAnimSite452.children[1] = Shape454;

HAnimSegment444.children[2] = HAnimSite452;

HAnimSite HAnimSite455 = createNode("HAnimSite");
HAnimSite455.name = "l_dactylion";
HAnimSite455.DEF = "hanim_l_dactylion";
HAnimSite455.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor456 = createNode("TouchSensor");
TouchSensor456.description = "HAnimSite l_dactylion";
HAnimSite455.children = new MFNode();

HAnimSite455.children[0] = TouchSensor456;

Shape Shape457 = createNode("Shape");
Shape457.USE = "HAnimSiteShape";
HAnimSite455.children[1] = Shape457;

HAnimSegment444.children[3] = HAnimSite455;

HAnimSite HAnimSite458 = createNode("HAnimSite");
HAnimSite458.name = "l_metacarpal_phalanx_2";
HAnimSite458.DEF = "hanim_l_metacarpal_phalanx_2";
HAnimSite458.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor459 = createNode("TouchSensor");
TouchSensor459.description = "HAnimSite l_metacarpal_phalanx_2";
HAnimSite458.children = new MFNode();

HAnimSite458.children[0] = TouchSensor459;

Shape Shape460 = createNode("Shape");
Shape460.USE = "HAnimSiteShape";
HAnimSite458.children[1] = Shape460;

HAnimSegment444.children[4] = HAnimSite458;

HAnimSite HAnimSite461 = createNode("HAnimSite");
HAnimSite461.name = "l_metacarpal_phalanx_3";
HAnimSite461.DEF = "hanim_l_metacarpal_phalanx_3";
TouchSensor TouchSensor462 = createNode("TouchSensor");
TouchSensor462.description = "HAnimSite l_metacarpal_phalanx_3";
HAnimSite461.children = new MFNode();

HAnimSite461.children[0] = TouchSensor462;

Shape Shape463 = createNode("Shape");
Shape463.USE = "HAnimSiteShape";
HAnimSite461.children[1] = Shape463;

HAnimSegment444.children[5] = HAnimSite461;

HAnimSite HAnimSite464 = createNode("HAnimSite");
HAnimSite464.name = "l_metacarpal_phalanx_5";
HAnimSite464.DEF = "hanim_l_metacarpal_phalanx_5";
HAnimSite464.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor465 = createNode("TouchSensor");
TouchSensor465.description = "HAnimSite l_metacarpal_phalanx_5";
HAnimSite464.children = new MFNode();

HAnimSite464.children[0] = TouchSensor465;

Shape Shape466 = createNode("Shape");
Shape466.USE = "HAnimSiteShape";
HAnimSite464.children[1] = Shape466;

HAnimSegment444.children[6] = HAnimSite464;

HAnimSite HAnimSite467 = createNode("HAnimSite");
HAnimSite467.name = "l_ulnar_styloid";
HAnimSite467.DEF = "hanim_l_ulnar_styloid";
HAnimSite467.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor468 = createNode("TouchSensor");
TouchSensor468.description = "HAnimSite l_ulnar_styloid";
HAnimSite467.children = new MFNode();

HAnimSite467.children[0] = TouchSensor468;

Shape Shape469 = createNode("Shape");
Shape469.USE = "HAnimSiteShape";
HAnimSite467.children[1] = Shape469;

HAnimSegment444.children[7] = HAnimSite467;

HAnimJoint443.children = new MFNode();

HAnimJoint443.children[0] = HAnimSegment444;

HAnimJoint HAnimJoint470 = createNode("HAnimJoint");
HAnimJoint470.name = "l_radiocarpal";
HAnimJoint470.DEF = "hanim_l_radiocarpal";
HAnimJoint470.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint470.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint470.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint443.children[1] = HAnimJoint470;

HAnimJoint422.children[1] = HAnimJoint443;

HAnimJoint347.children[2] = HAnimJoint422;

HAnimJoint HAnimJoint471 = createNode("HAnimJoint");
HAnimJoint471.name = "r_shoulder";
HAnimJoint471.DEF = "hanim_r_shoulder";
HAnimJoint471.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint471.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint471.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment472 = createNode("HAnimSegment");
HAnimSegment472.name = "r_upperarm";
HAnimSegment472.DEF = "hanim_r_upperarm";
Transform Transform473 = createNode("Transform");
Transform473.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform474 = createNode("Transform");
//Empty Transform
Shape Shape475 = createNode("Shape");
Shape475.USE = "HAnimJointShape";
Transform474.child = new undefined();

Transform474.child[0] = Shape475;

Transform473.children = new MFNode();

Transform473.children[0] = Transform474;

HAnimSegment472.children = new MFNode();

HAnimSegment472.children[0] = Transform473;

Shape Shape476 = createNode("Shape");
LineSet LineSet477 = createNode("LineSet");
LineSet477.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate478 = createNode("Coordinate");
Coordinate478.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet477.coord = Coordinate478;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA479 = createNode("ColorRGBA");
ColorRGBA479.USE = "HAnimSegmentLineColorRGBA";
LineSet477.color = ColorRGBA479;

Shape476.geometry = LineSet477;

HAnimSegment472.children[1] = Shape476;

HAnimSite HAnimSite480 = createNode("HAnimSite");
HAnimSite480.name = "r_humeral_medial_epicondyles";
HAnimSite480.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite480.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor481 = createNode("TouchSensor");
TouchSensor481.description = "HAnimSite r_humeral_medial_epicondyles";
HAnimSite480.children = new MFNode();

HAnimSite480.children[0] = TouchSensor481;

Shape Shape482 = createNode("Shape");
Shape482.USE = "HAnimSiteShape";
HAnimSite480.children[1] = Shape482;

HAnimSegment472.children[2] = HAnimSite480;

HAnimSite HAnimSite483 = createNode("HAnimSite");
HAnimSite483.name = "r_olecranon";
HAnimSite483.DEF = "hanim_r_olecranon";
HAnimSite483.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor484 = createNode("TouchSensor");
TouchSensor484.description = "HAnimSite r_olecranon";
HAnimSite483.children = new MFNode();

HAnimSite483.children[0] = TouchSensor484;

Shape Shape485 = createNode("Shape");
Shape485.USE = "HAnimSiteShape";
HAnimSite483.children[1] = Shape485;

HAnimSegment472.children[3] = HAnimSite483;

HAnimSite HAnimSite486 = createNode("HAnimSite");
HAnimSite486.name = "r_radial_styloid";
HAnimSite486.DEF = "hanim_r_radial_styloid";
HAnimSite486.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor487 = createNode("TouchSensor");
TouchSensor487.description = "HAnimSite r_radial_styloid";
HAnimSite486.children = new MFNode();

HAnimSite486.children[0] = TouchSensor487;

Shape Shape488 = createNode("Shape");
Shape488.USE = "HAnimSiteShape";
HAnimSite486.children[1] = Shape488;

HAnimSegment472.children[4] = HAnimSite486;

HAnimSite HAnimSite489 = createNode("HAnimSite");
HAnimSite489.name = "r_radiale";
HAnimSite489.DEF = "hanim_r_radiale";
HAnimSite489.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor490 = createNode("TouchSensor");
TouchSensor490.description = "HAnimSite r_radiale";
HAnimSite489.children = new MFNode();

HAnimSite489.children[0] = TouchSensor490;

Shape Shape491 = createNode("Shape");
Shape491.USE = "HAnimSiteShape";
HAnimSite489.children[1] = Shape491;

HAnimSegment472.children[5] = HAnimSite489;

HAnimJoint471.children = new MFNode();

HAnimJoint471.children[0] = HAnimSegment472;

HAnimJoint HAnimJoint492 = createNode("HAnimJoint");
HAnimJoint492.name = "r_elbow";
HAnimJoint492.DEF = "hanim_r_elbow";
HAnimJoint492.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint492.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint492.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment493 = createNode("HAnimSegment");
HAnimSegment493.name = "r_forearm";
HAnimSegment493.DEF = "hanim_r_forearm";
Transform Transform494 = createNode("Transform");
Transform494.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform495 = createNode("Transform");
//Empty Transform
Shape Shape496 = createNode("Shape");
Shape496.USE = "HAnimJointShape";
Transform495.child = new undefined();

Transform495.child[0] = Shape496;

Transform494.children = new MFNode();

Transform494.children[0] = Transform495;

HAnimSegment493.children = new MFNode();

HAnimSegment493.children[0] = Transform494;

Shape Shape497 = createNode("Shape");
LineSet LineSet498 = createNode("LineSet");
LineSet498.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate499 = createNode("Coordinate");
Coordinate499.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet498.coord = Coordinate499;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA500 = createNode("ColorRGBA");
ColorRGBA500.USE = "HAnimSegmentLineColorRGBA";
LineSet498.color = ColorRGBA500;

Shape497.geometry = LineSet498;

HAnimSegment493.children[1] = Shape497;

HAnimSite HAnimSite501 = createNode("HAnimSite");
HAnimSite501.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite501.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor502 = createNode("TouchSensor");
TouchSensor502.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite501.children = new MFNode();

HAnimSite501.children[0] = TouchSensor502;

Shape Shape503 = createNode("Shape");
Shape503.USE = "HAnimSiteShape";
HAnimSite501.children[1] = Shape503;

HAnimSegment493.children[2] = HAnimSite501;

HAnimSite HAnimSite504 = createNode("HAnimSite");
HAnimSite504.name = "r_dactylion";
HAnimSite504.DEF = "hanim_r_dactylion";
HAnimSite504.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor505 = createNode("TouchSensor");
TouchSensor505.description = "HAnimSite r_dactylion";
HAnimSite504.children = new MFNode();

HAnimSite504.children[0] = TouchSensor505;

Shape Shape506 = createNode("Shape");
Shape506.USE = "HAnimSiteShape";
HAnimSite504.children[1] = Shape506;

HAnimSegment493.children[3] = HAnimSite504;

HAnimSite HAnimSite507 = createNode("HAnimSite");
HAnimSite507.name = "r_metacarpal_phalanx_2";
HAnimSite507.DEF = "hanim_r_metacarpal_phalanx_2";
HAnimSite507.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor508 = createNode("TouchSensor");
TouchSensor508.description = "HAnimSite r_metacarpal_phalanx_2";
HAnimSite507.children = new MFNode();

HAnimSite507.children[0] = TouchSensor508;

Shape Shape509 = createNode("Shape");
Shape509.USE = "HAnimSiteShape";
HAnimSite507.children[1] = Shape509;

HAnimSegment493.children[4] = HAnimSite507;

HAnimSite HAnimSite510 = createNode("HAnimSite");
HAnimSite510.name = "r_metacarpal_phalanx_3";
HAnimSite510.DEF = "hanim_r_metacarpal_phalanx_3";
TouchSensor TouchSensor511 = createNode("TouchSensor");
TouchSensor511.description = "HAnimSite r_metacarpal_phalanx_3";
HAnimSite510.children = new MFNode();

HAnimSite510.children[0] = TouchSensor511;

Shape Shape512 = createNode("Shape");
Shape512.USE = "HAnimSiteShape";
HAnimSite510.children[1] = Shape512;

HAnimSegment493.children[5] = HAnimSite510;

HAnimSite HAnimSite513 = createNode("HAnimSite");
HAnimSite513.name = "r_metacarpal_phalanx_5";
HAnimSite513.DEF = "hanim_r_metacarpal_phalanx_5";
HAnimSite513.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor514 = createNode("TouchSensor");
TouchSensor514.description = "HAnimSite r_metacarpal_phalanx_5";
HAnimSite513.children = new MFNode();

HAnimSite513.children[0] = TouchSensor514;

Shape Shape515 = createNode("Shape");
Shape515.USE = "HAnimSiteShape";
HAnimSite513.children[1] = Shape515;

HAnimSegment493.children[6] = HAnimSite513;

HAnimSite HAnimSite516 = createNode("HAnimSite");
HAnimSite516.name = "r_ulnar_styloid";
HAnimSite516.DEF = "hanim_r_ulnar_styloid";
HAnimSite516.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor517 = createNode("TouchSensor");
TouchSensor517.description = "HAnimSite r_ulnar_styloid";
HAnimSite516.children = new MFNode();

HAnimSite516.children[0] = TouchSensor517;

Shape Shape518 = createNode("Shape");
Shape518.USE = "HAnimSiteShape";
HAnimSite516.children[1] = Shape518;

HAnimSegment493.children[7] = HAnimSite516;

HAnimJoint492.children = new MFNode();

HAnimJoint492.children[0] = HAnimSegment493;

HAnimJoint HAnimJoint519 = createNode("HAnimJoint");
HAnimJoint519.name = "r_radiocarpal";
HAnimJoint519.DEF = "hanim_r_radiocarpal";
HAnimJoint519.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint519.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint519.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint492.children[1] = HAnimJoint519;

HAnimJoint471.children[1] = HAnimJoint492;

HAnimJoint347.children[3] = HAnimJoint471;

HAnimJoint52.children[2] = HAnimJoint347;

HAnimHumanoid43.joints[1] = HAnimJoint52;

HAnimJoint HAnimJoint520 = createNode("HAnimJoint");
HAnimJoint520.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint520;

HAnimJoint HAnimJoint521 = createNode("HAnimJoint");
HAnimJoint521.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint521;

HAnimJoint HAnimJoint522 = createNode("HAnimJoint");
HAnimJoint522.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint522;

HAnimJoint HAnimJoint523 = createNode("HAnimJoint");
HAnimJoint523.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint523;

HAnimJoint HAnimJoint524 = createNode("HAnimJoint");
HAnimJoint524.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint524;

HAnimJoint HAnimJoint525 = createNode("HAnimJoint");
HAnimJoint525.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[7] = HAnimJoint525;

HAnimJoint HAnimJoint526 = createNode("HAnimJoint");
HAnimJoint526.USE = "hanim_r_hip";
HAnimHumanoid43.joints[8] = HAnimJoint526;

HAnimJoint HAnimJoint527 = createNode("HAnimJoint");
HAnimJoint527.USE = "hanim_r_knee";
HAnimHumanoid43.joints[9] = HAnimJoint527;

HAnimJoint HAnimJoint528 = createNode("HAnimJoint");
HAnimJoint528.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[10] = HAnimJoint528;

HAnimJoint HAnimJoint529 = createNode("HAnimJoint");
HAnimJoint529.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[11] = HAnimJoint529;

HAnimJoint HAnimJoint530 = createNode("HAnimJoint");
HAnimJoint530.USE = "hanim_vl5";
HAnimHumanoid43.joints[12] = HAnimJoint530;

HAnimJoint HAnimJoint531 = createNode("HAnimJoint");
HAnimJoint531.USE = "hanim_skullbase";
HAnimHumanoid43.joints[13] = HAnimJoint531;

HAnimJoint HAnimJoint532 = createNode("HAnimJoint");
HAnimJoint532.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[14] = HAnimJoint532;

HAnimJoint HAnimJoint533 = createNode("HAnimJoint");
HAnimJoint533.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[15] = HAnimJoint533;

HAnimJoint HAnimJoint534 = createNode("HAnimJoint");
HAnimJoint534.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[16] = HAnimJoint534;

HAnimJoint HAnimJoint535 = createNode("HAnimJoint");
HAnimJoint535.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[17] = HAnimJoint535;

HAnimJoint HAnimJoint536 = createNode("HAnimJoint");
HAnimJoint536.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[18] = HAnimJoint536;

HAnimJoint HAnimJoint537 = createNode("HAnimJoint");
HAnimJoint537.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[19] = HAnimJoint537;

HAnimSegment HAnimSegment538 = createNode("HAnimSegment");
HAnimSegment538.USE = "hanim_sacrum";
HAnimHumanoid43.segments[20] = HAnimSegment538;

HAnimSegment HAnimSegment539 = createNode("HAnimSegment");
HAnimSegment539.USE = "hanim_pelvis";
HAnimHumanoid43.segments[21] = HAnimSegment539;

HAnimSegment HAnimSegment540 = createNode("HAnimSegment");
HAnimSegment540.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[22] = HAnimSegment540;

HAnimSegment HAnimSegment541 = createNode("HAnimSegment");
HAnimSegment541.USE = "hanim_l_calf";
HAnimHumanoid43.segments[23] = HAnimSegment541;

HAnimSegment HAnimSegment542 = createNode("HAnimSegment");
HAnimSegment542.USE = "hanim_l_talus";
HAnimHumanoid43.segments[24] = HAnimSegment542;

HAnimSegment HAnimSegment543 = createNode("HAnimSegment");
HAnimSegment543.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[25] = HAnimSegment543;

HAnimSegment HAnimSegment544 = createNode("HAnimSegment");
HAnimSegment544.USE = "hanim_r_calf";
HAnimHumanoid43.segments[26] = HAnimSegment544;

HAnimSegment HAnimSegment545 = createNode("HAnimSegment");
HAnimSegment545.USE = "hanim_r_talus";
HAnimHumanoid43.segments[27] = HAnimSegment545;

HAnimSegment HAnimSegment546 = createNode("HAnimSegment");
HAnimSegment546.USE = "hanim_l5";
HAnimHumanoid43.segments[28] = HAnimSegment546;

HAnimSegment HAnimSegment547 = createNode("HAnimSegment");
HAnimSegment547.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[29] = HAnimSegment547;

HAnimSegment HAnimSegment548 = createNode("HAnimSegment");
HAnimSegment548.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[30] = HAnimSegment548;

HAnimSegment HAnimSegment549 = createNode("HAnimSegment");
HAnimSegment549.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[31] = HAnimSegment549;

HAnimSegment HAnimSegment550 = createNode("HAnimSegment");
HAnimSegment550.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[32] = HAnimSegment550;

HAnimSite HAnimSite551 = createNode("HAnimSite");
HAnimSite551.USE = "hanim_buttocks_standing_wall_contact_point";
HAnimHumanoid43.viewpoints[33] = HAnimSite551;

HAnimSite HAnimSite552 = createNode("HAnimSite");
HAnimSite552.USE = "hanim_crotch";
HAnimHumanoid43.viewpoints[34] = HAnimSite552;

HAnimSite HAnimSite553 = createNode("HAnimSite");
HAnimSite553.USE = "hanim_l_asis";
HAnimHumanoid43.viewpoints[35] = HAnimSite553;

HAnimSite HAnimSite554 = createNode("HAnimSite");
HAnimSite554.USE = "hanim_l_iliocristale";
HAnimHumanoid43.viewpoints[36] = HAnimSite554;

HAnimSite HAnimSite555 = createNode("HAnimSite");
HAnimSite555.USE = "hanim_l_psis";
HAnimHumanoid43.viewpoints[37] = HAnimSite555;

HAnimSite HAnimSite556 = createNode("HAnimSite");
HAnimSite556.USE = "hanim_l_trochanterion";
HAnimHumanoid43.viewpoints[38] = HAnimSite556;

HAnimSite HAnimSite557 = createNode("HAnimSite");
HAnimSite557.USE = "hanim_r_asis";
HAnimHumanoid43.viewpoints[39] = HAnimSite557;

HAnimSite HAnimSite558 = createNode("HAnimSite");
HAnimSite558.USE = "hanim_r_iliocristale";
HAnimHumanoid43.viewpoints[40] = HAnimSite558;

HAnimSite HAnimSite559 = createNode("HAnimSite");
HAnimSite559.USE = "hanim_r_psis";
HAnimHumanoid43.viewpoints[41] = HAnimSite559;

HAnimSite HAnimSite560 = createNode("HAnimSite");
HAnimSite560.USE = "hanim_r_trochanterion";
HAnimHumanoid43.viewpoints[42] = HAnimSite560;

HAnimSite HAnimSite561 = createNode("HAnimSite");
HAnimSite561.USE = "hanim_adams_apple";
HAnimHumanoid43.viewpoints[43] = HAnimSite561;

HAnimSite HAnimSite562 = createNode("HAnimSite");
HAnimSite562.USE = "hanim_cervicale";
HAnimHumanoid43.viewpoints[44] = HAnimSite562;

HAnimSite HAnimSite563 = createNode("HAnimSite");
HAnimSite563.USE = "hanim_l_acromion";
HAnimHumanoid43.viewpoints[45] = HAnimSite563;

HAnimSite HAnimSite564 = createNode("HAnimSite");
HAnimSite564.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[46] = HAnimSite564;

HAnimSite HAnimSite565 = createNode("HAnimSite");
HAnimSite565.USE = "hanim_l_axilla_posterior_folds";
HAnimHumanoid43.viewpoints[47] = HAnimSite565;

HAnimSite HAnimSite566 = createNode("HAnimSite");
HAnimSite566.USE = "hanim_l_axilla_proximal";
HAnimHumanoid43.viewpoints[48] = HAnimSite566;

HAnimSite HAnimSite567 = createNode("HAnimSite");
HAnimSite567.USE = "hanim_l_chest_midsagittal_plane";
HAnimHumanoid43.viewpoints[49] = HAnimSite567;

HAnimSite HAnimSite568 = createNode("HAnimSite");
HAnimSite568.USE = "hanim_l_clavicale";
HAnimHumanoid43.viewpoints[50] = HAnimSite568;

HAnimSite HAnimSite569 = createNode("HAnimSite");
HAnimSite569.USE = "hanim_l_neck_base";
HAnimHumanoid43.viewpoints[51] = HAnimSite569;

HAnimSite HAnimSite570 = createNode("HAnimSite");
HAnimSite570.USE = "hanim_l_rib10";
HAnimHumanoid43.viewpoints[52] = HAnimSite570;

HAnimSite HAnimSite571 = createNode("HAnimSite");
HAnimSite571.USE = "hanim_l_thelion";
HAnimHumanoid43.viewpoints[53] = HAnimSite571;

HAnimSite HAnimSite572 = createNode("HAnimSite");
HAnimSite572.USE = "hanim_mesosternale";
HAnimHumanoid43.viewpoints[54] = HAnimSite572;

HAnimSite HAnimSite573 = createNode("HAnimSite");
HAnimSite573.USE = "hanim_navel";
HAnimHumanoid43.viewpoints[55] = HAnimSite573;

HAnimSite HAnimSite574 = createNode("HAnimSite");
HAnimSite574.USE = "hanim_r_acromion";
HAnimHumanoid43.viewpoints[56] = HAnimSite574;

HAnimSite HAnimSite575 = createNode("HAnimSite");
HAnimSite575.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[57] = HAnimSite575;

HAnimSite HAnimSite576 = createNode("HAnimSite");
HAnimSite576.USE = "hanim_r_axilla_posterior_folds";
HAnimHumanoid43.viewpoints[58] = HAnimSite576;

HAnimSite HAnimSite577 = createNode("HAnimSite");
HAnimSite577.USE = "hanim_r_axilla_proximal";
HAnimHumanoid43.viewpoints[59] = HAnimSite577;

HAnimSite HAnimSite578 = createNode("HAnimSite");
HAnimSite578.USE = "hanim_r_chest_midsagittal_plane";
HAnimHumanoid43.viewpoints[60] = HAnimSite578;

HAnimSite HAnimSite579 = createNode("HAnimSite");
HAnimSite579.USE = "hanim_r_clavicale";
HAnimHumanoid43.viewpoints[61] = HAnimSite579;

HAnimSite HAnimSite580 = createNode("HAnimSite");
HAnimSite580.USE = "hanim_r_neck_base";
HAnimHumanoid43.viewpoints[62] = HAnimSite580;

HAnimSite HAnimSite581 = createNode("HAnimSite");
HAnimSite581.USE = "hanim_r_rib10";
HAnimHumanoid43.viewpoints[63] = HAnimSite581;

HAnimSite HAnimSite582 = createNode("HAnimSite");
HAnimSite582.USE = "hanim_r_thelion";
HAnimHumanoid43.viewpoints[64] = HAnimSite582;

HAnimSite HAnimSite583 = createNode("HAnimSite");
HAnimSite583.USE = "hanim_rear_center_midsagittal_plane";
HAnimHumanoid43.viewpoints[65] = HAnimSite583;

HAnimSite HAnimSite584 = createNode("HAnimSite");
HAnimSite584.USE = "hanim_spine_1_middle_back";
HAnimHumanoid43.viewpoints[66] = HAnimSite584;

HAnimSite HAnimSite585 = createNode("HAnimSite");
HAnimSite585.USE = "hanim_spine_2_middle_back";
HAnimHumanoid43.viewpoints[67] = HAnimSite585;

HAnimSite HAnimSite586 = createNode("HAnimSite");
HAnimSite586.USE = "hanim_substernale";
HAnimHumanoid43.viewpoints[68] = HAnimSite586;

HAnimSite HAnimSite587 = createNode("HAnimSite");
HAnimSite587.USE = "hanim_suprasternale";
HAnimHumanoid43.viewpoints[69] = HAnimSite587;

HAnimSite HAnimSite588 = createNode("HAnimSite");
HAnimSite588.USE = "hanim_waist_preferred_anterior";
HAnimHumanoid43.viewpoints[70] = HAnimSite588;

HAnimSite HAnimSite589 = createNode("HAnimSite");
HAnimSite589.USE = "hanim_waist_preferred_posterior";
HAnimHumanoid43.viewpoints[71] = HAnimSite589;

HAnimSite HAnimSite590 = createNode("HAnimSite");
HAnimSite590.USE = "hanim_l_femoral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[72] = HAnimSite590;

HAnimSite HAnimSite591 = createNode("HAnimSite");
HAnimSite591.USE = "hanim_l_femoral_medial_epicondyles";
HAnimHumanoid43.viewpoints[73] = HAnimSite591;

HAnimSite HAnimSite592 = createNode("HAnimSite");
HAnimSite592.USE = "hanim_l_knee_crease";
HAnimHumanoid43.viewpoints[74] = HAnimSite592;

HAnimSite HAnimSite593 = createNode("HAnimSite");
HAnimSite593.USE = "hanim_l_suprapatella";
HAnimHumanoid43.viewpoints[75] = HAnimSite593;

HAnimSite HAnimSite594 = createNode("HAnimSite");
HAnimSite594.USE = "hanim_r_femoral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[76] = HAnimSite594;

HAnimSite HAnimSite595 = createNode("HAnimSite");
HAnimSite595.USE = "hanim_r_femoral_medial_epicondyles";
HAnimHumanoid43.viewpoints[77] = HAnimSite595;

HAnimSite HAnimSite596 = createNode("HAnimSite");
HAnimSite596.USE = "hanim_r_knee_crease";
HAnimHumanoid43.viewpoints[78] = HAnimSite596;

HAnimSite HAnimSite597 = createNode("HAnimSite");
HAnimSite597.USE = "hanim_r_suprapatella";
HAnimHumanoid43.viewpoints[79] = HAnimSite597;

HAnimSite HAnimSite598 = createNode("HAnimSite");
HAnimSite598.USE = "hanim_l_lateral_malleolus";
HAnimHumanoid43.viewpoints[80] = HAnimSite598;

HAnimSite HAnimSite599 = createNode("HAnimSite");
HAnimSite599.USE = "hanim_l_medial_malleolus";
HAnimHumanoid43.viewpoints[81] = HAnimSite599;

HAnimSite HAnimSite600 = createNode("HAnimSite");
HAnimSite600.USE = "hanim_l_tibiale";
HAnimHumanoid43.viewpoints[82] = HAnimSite600;

HAnimSite HAnimSite601 = createNode("HAnimSite");
HAnimSite601.USE = "hanim_l_calcaneus_posterior";
HAnimHumanoid43.viewpoints[83] = HAnimSite601;

HAnimSite HAnimSite602 = createNode("HAnimSite");
HAnimSite602.USE = "hanim_l_sphyrion";
HAnimHumanoid43.viewpoints[84] = HAnimSite602;

HAnimSite HAnimSite603 = createNode("HAnimSite");
HAnimSite603.USE = "hanim_l_metatarsal_phalanx_1";
HAnimHumanoid43.viewpoints[85] = HAnimSite603;

HAnimSite HAnimSite604 = createNode("HAnimSite");
HAnimSite604.USE = "hanim_l_metatarsal_phalanx_5";
HAnimHumanoid43.viewpoints[86] = HAnimSite604;

HAnimSite HAnimSite605 = createNode("HAnimSite");
HAnimSite605.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[87] = HAnimSite605;

HAnimSite HAnimSite606 = createNode("HAnimSite");
HAnimSite606.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[88] = HAnimSite606;

HAnimSite HAnimSite607 = createNode("HAnimSite");
HAnimSite607.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[89] = HAnimSite607;

HAnimSite HAnimSite608 = createNode("HAnimSite");
HAnimSite608.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[90] = HAnimSite608;

HAnimSite HAnimSite609 = createNode("HAnimSite");
HAnimSite609.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[91] = HAnimSite609;

HAnimSite HAnimSite610 = createNode("HAnimSite");
HAnimSite610.USE = "hanim_r_lateral_malleolus";
HAnimHumanoid43.viewpoints[92] = HAnimSite610;

HAnimSite HAnimSite611 = createNode("HAnimSite");
HAnimSite611.USE = "hanim_r_medial_malleolus";
HAnimHumanoid43.viewpoints[93] = HAnimSite611;

HAnimSite HAnimSite612 = createNode("HAnimSite");
HAnimSite612.USE = "hanim_r_tibiale";
HAnimHumanoid43.viewpoints[94] = HAnimSite612;

HAnimSite HAnimSite613 = createNode("HAnimSite");
HAnimSite613.USE = "hanim_r_calcaneus_posterior";
HAnimHumanoid43.viewpoints[95] = HAnimSite613;

HAnimSite HAnimSite614 = createNode("HAnimSite");
HAnimSite614.USE = "hanim_r_sphyrion";
HAnimHumanoid43.viewpoints[96] = HAnimSite614;

HAnimSite HAnimSite615 = createNode("HAnimSite");
HAnimSite615.USE = "hanim_r_metatarsal_phalanx_1";
HAnimHumanoid43.viewpoints[97] = HAnimSite615;

HAnimSite HAnimSite616 = createNode("HAnimSite");
HAnimSite616.USE = "hanim_r_metatarsal_phalanx_5";
HAnimHumanoid43.viewpoints[98] = HAnimSite616;

HAnimSite HAnimSite617 = createNode("HAnimSite");
HAnimSite617.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[99] = HAnimSite617;

HAnimSite HAnimSite618 = createNode("HAnimSite");
HAnimSite618.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[100] = HAnimSite618;

HAnimSite HAnimSite619 = createNode("HAnimSite");
HAnimSite619.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[101] = HAnimSite619;

HAnimSite HAnimSite620 = createNode("HAnimSite");
HAnimSite620.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[102] = HAnimSite620;

HAnimSite HAnimSite621 = createNode("HAnimSite");
HAnimSite621.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[103] = HAnimSite621;

HAnimSite HAnimSite622 = createNode("HAnimSite");
HAnimSite622.USE = "hanim_glabella";
HAnimHumanoid43.viewpoints[104] = HAnimSite622;

HAnimSite HAnimSite623 = createNode("HAnimSite");
HAnimSite623.USE = "hanim_l_ectocanthus";
HAnimHumanoid43.viewpoints[105] = HAnimSite623;

HAnimSite HAnimSite624 = createNode("HAnimSite");
HAnimSite624.USE = "hanim_l_gonion";
HAnimHumanoid43.viewpoints[106] = HAnimSite624;

HAnimSite HAnimSite625 = createNode("HAnimSite");
HAnimSite625.USE = "hanim_l_infraorbitale";
HAnimHumanoid43.viewpoints[107] = HAnimSite625;

HAnimSite HAnimSite626 = createNode("HAnimSite");
HAnimSite626.USE = "hanim_l_tragion";
HAnimHumanoid43.viewpoints[108] = HAnimSite626;

HAnimSite HAnimSite627 = createNode("HAnimSite");
HAnimSite627.USE = "hanim_menton";
HAnimHumanoid43.viewpoints[109] = HAnimSite627;

HAnimSite HAnimSite628 = createNode("HAnimSite");
HAnimSite628.USE = "hanim_nuchale";
HAnimHumanoid43.viewpoints[110] = HAnimSite628;

HAnimSite HAnimSite629 = createNode("HAnimSite");
HAnimSite629.USE = "hanim_opisthocranion";
HAnimHumanoid43.viewpoints[111] = HAnimSite629;

HAnimSite HAnimSite630 = createNode("HAnimSite");
HAnimSite630.USE = "hanim_r_ectocanthus";
HAnimHumanoid43.viewpoints[112] = HAnimSite630;

HAnimSite HAnimSite631 = createNode("HAnimSite");
HAnimSite631.USE = "hanim_r_gonion";
HAnimHumanoid43.viewpoints[113] = HAnimSite631;

HAnimSite HAnimSite632 = createNode("HAnimSite");
HAnimSite632.USE = "hanim_r_infraorbitale";
HAnimHumanoid43.viewpoints[114] = HAnimSite632;

HAnimSite HAnimSite633 = createNode("HAnimSite");
HAnimSite633.USE = "hanim_r_tragion";
HAnimHumanoid43.viewpoints[115] = HAnimSite633;

HAnimSite HAnimSite634 = createNode("HAnimSite");
HAnimSite634.USE = "hanim_sellion";
HAnimHumanoid43.viewpoints[116] = HAnimSite634;

HAnimSite HAnimSite635 = createNode("HAnimSite");
HAnimSite635.USE = "hanim_skull_vertex";
HAnimHumanoid43.viewpoints[117] = HAnimSite635;

HAnimSite HAnimSite636 = createNode("HAnimSite");
HAnimSite636.USE = "hanim_supramenton";
HAnimHumanoid43.viewpoints[118] = HAnimSite636;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.USE = "hanim_l_bideltoid";
HAnimHumanoid43.viewpoints[119] = HAnimSite637;

HAnimSite HAnimSite638 = createNode("HAnimSite");
HAnimSite638.USE = "hanim_l_humeral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[120] = HAnimSite638;

HAnimSite HAnimSite639 = createNode("HAnimSite");
HAnimSite639.USE = "hanim_r_bideltoid";
HAnimHumanoid43.viewpoints[121] = HAnimSite639;

HAnimSite HAnimSite640 = createNode("HAnimSite");
HAnimSite640.USE = "hanim_r_humeral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[122] = HAnimSite640;

HAnimSite HAnimSite641 = createNode("HAnimSite");
HAnimSite641.USE = "hanim_l_humeral_medial_epicondyles";
HAnimHumanoid43.viewpoints[123] = HAnimSite641;

HAnimSite HAnimSite642 = createNode("HAnimSite");
HAnimSite642.USE = "hanim_l_olecranon";
HAnimHumanoid43.viewpoints[124] = HAnimSite642;

HAnimSite HAnimSite643 = createNode("HAnimSite");
HAnimSite643.USE = "hanim_l_radial_styloid";
HAnimHumanoid43.viewpoints[125] = HAnimSite643;

HAnimSite HAnimSite644 = createNode("HAnimSite");
HAnimSite644.USE = "hanim_l_radiale";
HAnimHumanoid43.viewpoints[126] = HAnimSite644;

HAnimSite HAnimSite645 = createNode("HAnimSite");
HAnimSite645.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[127] = HAnimSite645;

HAnimSite HAnimSite646 = createNode("HAnimSite");
HAnimSite646.USE = "hanim_l_dactylion";
HAnimHumanoid43.viewpoints[128] = HAnimSite646;

HAnimSite HAnimSite647 = createNode("HAnimSite");
HAnimSite647.USE = "hanim_l_metacarpal_phalanx_2";
HAnimHumanoid43.viewpoints[129] = HAnimSite647;

HAnimSite HAnimSite648 = createNode("HAnimSite");
HAnimSite648.USE = "hanim_l_metacarpal_phalanx_3";
HAnimHumanoid43.viewpoints[130] = HAnimSite648;

HAnimSite HAnimSite649 = createNode("HAnimSite");
HAnimSite649.USE = "hanim_l_metacarpal_phalanx_5";
HAnimHumanoid43.viewpoints[131] = HAnimSite649;

HAnimSite HAnimSite650 = createNode("HAnimSite");
HAnimSite650.USE = "hanim_l_ulnar_styloid";
HAnimHumanoid43.viewpoints[132] = HAnimSite650;

HAnimSite HAnimSite651 = createNode("HAnimSite");
HAnimSite651.USE = "hanim_r_humeral_medial_epicondyles";
HAnimHumanoid43.viewpoints[133] = HAnimSite651;

HAnimSite HAnimSite652 = createNode("HAnimSite");
HAnimSite652.USE = "hanim_r_olecranon";
HAnimHumanoid43.viewpoints[134] = HAnimSite652;

HAnimSite HAnimSite653 = createNode("HAnimSite");
HAnimSite653.USE = "hanim_r_radial_styloid";
HAnimHumanoid43.viewpoints[135] = HAnimSite653;

HAnimSite HAnimSite654 = createNode("HAnimSite");
HAnimSite654.USE = "hanim_r_radiale";
HAnimHumanoid43.viewpoints[136] = HAnimSite654;

HAnimSite HAnimSite655 = createNode("HAnimSite");
HAnimSite655.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[137] = HAnimSite655;

HAnimSite HAnimSite656 = createNode("HAnimSite");
HAnimSite656.USE = "hanim_r_dactylion";
HAnimHumanoid43.viewpoints[138] = HAnimSite656;

HAnimSite HAnimSite657 = createNode("HAnimSite");
HAnimSite657.USE = "hanim_r_metacarpal_phalanx_2";
HAnimHumanoid43.viewpoints[139] = HAnimSite657;

HAnimSite HAnimSite658 = createNode("HAnimSite");
HAnimSite658.USE = "hanim_r_metacarpal_phalanx_3";
HAnimHumanoid43.viewpoints[140] = HAnimSite658;

HAnimSite HAnimSite659 = createNode("HAnimSite");
HAnimSite659.USE = "hanim_r_metacarpal_phalanx_5";
HAnimHumanoid43.viewpoints[141] = HAnimSite659;

HAnimSite HAnimSite660 = createNode("HAnimSite");
HAnimSite660.USE = "hanim_r_ulnar_styloid";
HAnimHumanoid43.viewpoints[142] = HAnimSite660;

children[4] = HAnimHumanoid43;

}
