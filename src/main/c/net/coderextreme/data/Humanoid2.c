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
HAnimSite95.name = "navel";
HAnimSite95.DEF = "hanim_navel";
HAnimSite95.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor96 = createNode("TouchSensor");
TouchSensor96.description = "HAnimSite navel";
HAnimSite95.children = new MFNode();

HAnimSite95.children[0] = TouchSensor96;

Shape Shape97 = createNode("Shape");
Shape97.USE = "HAnimSiteShape";
HAnimSite95.children[1] = Shape97;

HAnimSegment53.children[13] = HAnimSite95;

HAnimSite HAnimSite98 = createNode("HAnimSite");
HAnimSite98.name = "waist_preferred_anterior";
HAnimSite98.DEF = "hanim_waist_preferred_anterior";
TouchSensor TouchSensor99 = createNode("TouchSensor");
TouchSensor99.description = "HAnimSite waist_preferred_anterior";
HAnimSite98.children = new MFNode();

HAnimSite98.children[0] = TouchSensor99;

Shape Shape100 = createNode("Shape");
Shape100.USE = "HAnimSiteShape";
HAnimSite98.children[1] = Shape100;

HAnimSegment53.children[14] = HAnimSite98;

HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.name = "waist_preferred_posterior";
HAnimSite101.DEF = "hanim_waist_preferred_posterior";
HAnimSite101.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor102 = createNode("TouchSensor");
TouchSensor102.description = "HAnimSite waist_preferred_posterior";
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
HAnimSite113.name = "l_femoral_lateral_epicondyles";
HAnimSite113.DEF = "hanim_l_femoral_lateral_epicondyles";
HAnimSite113.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor114 = createNode("TouchSensor");
TouchSensor114.description = "HAnimSite l_femoral_lateral_epicondyles";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = TouchSensor114;

Shape Shape115 = createNode("Shape");
Shape115.USE = "HAnimSiteShape";
HAnimSite113.children[1] = Shape115;

HAnimSegment105.children[2] = HAnimSite113;

HAnimSite HAnimSite116 = createNode("HAnimSite");
HAnimSite116.name = "l_femoral_medial_epicondyles";
HAnimSite116.DEF = "hanim_l_femoral_medial_epicondyles";
HAnimSite116.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor117 = createNode("TouchSensor");
TouchSensor117.description = "HAnimSite l_femoral_medial_epicondyles";
HAnimSite116.children = new MFNode();

HAnimSite116.children[0] = TouchSensor117;

Shape Shape118 = createNode("Shape");
Shape118.USE = "HAnimSiteShape";
HAnimSite116.children[1] = Shape118;

HAnimSegment105.children[3] = HAnimSite116;

HAnimSite HAnimSite119 = createNode("HAnimSite");
HAnimSite119.name = "l_knee_crease";
HAnimSite119.DEF = "hanim_l_knee_crease";
HAnimSite119.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor120 = createNode("TouchSensor");
TouchSensor120.description = "HAnimSite l_knee_crease";
HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = TouchSensor120;

Shape Shape121 = createNode("Shape");
Shape121.USE = "HAnimSiteShape";
HAnimSite119.children[1] = Shape121;

HAnimSegment105.children[4] = HAnimSite119;

HAnimSite HAnimSite122 = createNode("HAnimSite");
HAnimSite122.name = "l_suprapatella";
HAnimSite122.DEF = "hanim_l_suprapatella";
TouchSensor TouchSensor123 = createNode("TouchSensor");
TouchSensor123.description = "HAnimSite l_suprapatella";
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
HAnimSite129.name = "r_femoral_lateral_epicondyles";
HAnimSite129.DEF = "hanim_r_femoral_lateral_epicondyles";
HAnimSite129.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor130 = createNode("TouchSensor");
TouchSensor130.description = "HAnimSite r_femoral_lateral_epicondyles";
HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = TouchSensor130;

Shape Shape131 = createNode("Shape");
Shape131.USE = "HAnimSiteShape";
HAnimSite129.children[1] = Shape131;

HAnimSegment105.children[7] = HAnimSite129;

HAnimSite HAnimSite132 = createNode("HAnimSite");
HAnimSite132.name = "r_femoral_medial_epicondyles";
HAnimSite132.DEF = "hanim_r_femoral_medial_epicondyles";
HAnimSite132.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor133 = createNode("TouchSensor");
TouchSensor133.description = "HAnimSite r_femoral_medial_epicondyles";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

Shape Shape134 = createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

HAnimSegment105.children[8] = HAnimSite132;

HAnimSite HAnimSite135 = createNode("HAnimSite");
HAnimSite135.name = "r_knee_crease";
HAnimSite135.DEF = "hanim_r_knee_crease";
HAnimSite135.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor136 = createNode("TouchSensor");
TouchSensor136.description = "HAnimSite r_knee_crease";
HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = TouchSensor136;

Shape Shape137 = createNode("Shape");
Shape137.USE = "HAnimSiteShape";
HAnimSite135.children[1] = Shape137;

HAnimSegment105.children[9] = HAnimSite135;

HAnimSite HAnimSite138 = createNode("HAnimSite");
HAnimSite138.name = "r_suprapatella";
HAnimSite138.DEF = "hanim_r_suprapatella";
TouchSensor TouchSensor139 = createNode("TouchSensor");
TouchSensor139.description = "HAnimSite r_suprapatella";
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
HAnimSite150.name = "l_lateral_malleolus";
HAnimSite150.DEF = "hanim_l_lateral_malleolus";
HAnimSite150.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor151 = createNode("TouchSensor");
TouchSensor151.description = "HAnimSite l_lateral_malleolus";
HAnimSite150.children = new MFNode();

HAnimSite150.children[0] = TouchSensor151;

Shape Shape152 = createNode("Shape");
Shape152.USE = "HAnimSiteShape";
HAnimSite150.children[1] = Shape152;

HAnimSegment142.children[2] = HAnimSite150;

HAnimSite HAnimSite153 = createNode("HAnimSite");
HAnimSite153.name = "l_medial_malleolus";
HAnimSite153.DEF = "hanim_l_medial_malleolus";
HAnimSite153.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor154 = createNode("TouchSensor");
TouchSensor154.description = "HAnimSite l_medial_malleolus";
HAnimSite153.children = new MFNode();

HAnimSite153.children[0] = TouchSensor154;

Shape Shape155 = createNode("Shape");
Shape155.USE = "HAnimSiteShape";
HAnimSite153.children[1] = Shape155;

HAnimSegment142.children[3] = HAnimSite153;

HAnimSite HAnimSite156 = createNode("HAnimSite");
HAnimSite156.name = "l_tibiale";
HAnimSite156.DEF = "hanim_l_tibiale";
TouchSensor TouchSensor157 = createNode("TouchSensor");
TouchSensor157.description = "HAnimSite l_tibiale";
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
HAnimSite168.name = "l_calcaneus_posterior";
HAnimSite168.DEF = "hanim_l_calcaneus_posterior";
HAnimSite168.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor169 = createNode("TouchSensor");
TouchSensor169.description = "HAnimSite l_calcaneus_posterior";
HAnimSite168.children = new MFNode();

HAnimSite168.children[0] = TouchSensor169;

Shape Shape170 = createNode("Shape");
Shape170.USE = "HAnimSiteShape";
HAnimSite168.children[1] = Shape170;

HAnimSegment160.children[2] = HAnimSite168;

HAnimSite HAnimSite171 = createNode("HAnimSite");
HAnimSite171.name = "l_sphyrion";
HAnimSite171.DEF = "hanim_l_sphyrion";
HAnimSite171.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor172 = createNode("TouchSensor");
TouchSensor172.description = "HAnimSite l_sphyrion";
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
Coordinate181.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608]);
LineSet180.coord = Coordinate181;

//from l_talocrural to l_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA182 = createNode("ColorRGBA");
ColorRGBA182.USE = "HAnimSegmentLineColorRGBA";
LineSet180.color = ColorRGBA182;

Shape179.geometry = LineSet180;

HAnimSegment175.children[1] = Shape179;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.name = "l_tarsometatarsal_2";
HAnimJoint183.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint183.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
HAnimJoint183.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint183.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment184 = createNode("HAnimSegment");
HAnimSegment184.name = "l_metatarsal_2";
HAnimSegment184.DEF = "hanim_l_metatarsal_2";
Transform Transform185 = createNode("Transform");
Transform185.translation = new SFVec3f(new float[0.08,0.0175,-0.0608]);
Transform Transform186 = createNode("Transform");
//Empty Transform
Shape Shape187 = createNode("Shape");
Shape187.USE = "HAnimJointShape";
Transform186.child = new undefined();

Transform186.child[0] = Shape187;

Transform185.children = new MFNode();

Transform185.children[0] = Transform186;

HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = Transform185;

Shape Shape188 = createNode("Shape");
LineSet LineSet189 = createNode("LineSet");
LineSet189.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate190 = createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
LineSet189.coord = Coordinate190;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA191 = createNode("ColorRGBA");
ColorRGBA191.USE = "HAnimSegmentLineColorRGBA";
LineSet189.color = ColorRGBA191;

Shape188.geometry = LineSet189;

HAnimSegment184.children[1] = Shape188;

HAnimSite HAnimSite192 = createNode("HAnimSite");
HAnimSite192.name = "l_metatarsal_phalanx_1";
HAnimSite192.DEF = "hanim_l_metatarsal_phalanx_1";
TouchSensor TouchSensor193 = createNode("TouchSensor");
TouchSensor193.description = "HAnimSite l_metatarsal_phalanx_1";
HAnimSite192.children = new MFNode();

HAnimSite192.children[0] = TouchSensor193;

Shape Shape194 = createNode("Shape");
Shape194.USE = "HAnimSiteShape";
HAnimSite192.children[1] = Shape194;

HAnimSegment184.children[2] = HAnimSite192;

HAnimSite HAnimSite195 = createNode("HAnimSite");
HAnimSite195.name = "l_metatarsal_phalanx_5";
HAnimSite195.DEF = "hanim_l_metatarsal_phalanx_5";
TouchSensor TouchSensor196 = createNode("TouchSensor");
TouchSensor196.description = "HAnimSite l_metatarsal_phalanx_5";
HAnimSite195.children = new MFNode();

HAnimSite195.children[0] = TouchSensor196;

Shape Shape197 = createNode("Shape");
Shape197.USE = "HAnimSiteShape";
HAnimSite195.children[1] = Shape197;

HAnimSegment184.children[3] = HAnimSite195;

HAnimSite HAnimSite198 = createNode("HAnimSite");
HAnimSite198.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite198.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor199 = createNode("TouchSensor");
TouchSensor199.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite198.children = new MFNode();

HAnimSite198.children[0] = TouchSensor199;

Shape Shape200 = createNode("Shape");
Shape200.USE = "HAnimSiteShape";
HAnimSite198.children[1] = Shape200;

HAnimSegment184.children[4] = HAnimSite198;

HAnimSite HAnimSite201 = createNode("HAnimSite");
HAnimSite201.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite201.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite201.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor202 = createNode("TouchSensor");
TouchSensor202.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite201.children = new MFNode();

HAnimSite201.children[0] = TouchSensor202;

Shape Shape203 = createNode("Shape");
Shape203.USE = "HAnimSiteShape";
HAnimSite201.children[1] = Shape203;

HAnimSegment184.children[5] = HAnimSite201;

HAnimSite HAnimSite204 = createNode("HAnimSite");
HAnimSite204.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite204.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor205 = createNode("TouchSensor");
TouchSensor205.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite204.children = new MFNode();

HAnimSite204.children[0] = TouchSensor205;

Shape Shape206 = createNode("Shape");
Shape206.USE = "HAnimSiteShape";
HAnimSite204.children[1] = Shape206;

HAnimSegment184.children[6] = HAnimSite204;

HAnimSite HAnimSite207 = createNode("HAnimSite");
HAnimSite207.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite207.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor208 = createNode("TouchSensor");
TouchSensor208.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite207.children = new MFNode();

HAnimSite207.children[0] = TouchSensor208;

Shape Shape209 = createNode("Shape");
Shape209.USE = "HAnimSiteShape";
HAnimSite207.children[1] = Shape209;

HAnimSegment184.children[7] = HAnimSite207;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite210.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor211 = createNode("TouchSensor");
TouchSensor211.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite210.children = new MFNode();

HAnimSite210.children[0] = TouchSensor211;

Shape Shape212 = createNode("Shape");
Shape212.USE = "HAnimSiteShape";
HAnimSite210.children[1] = Shape212;

HAnimSegment184.children[8] = HAnimSite210;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.name = "l_metatarsophalangeal_2";
HAnimJoint213.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint213.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment214 = createNode("HAnimSegment");
HAnimSegment214.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment214.DEF = "hanim_l_tarsal_proximal_phalanx_2";
Transform Transform215 = createNode("Transform");
Transform215.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
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
Coordinate220.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0013,0.0216]);
LineSet219.coord = Coordinate220;

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA221 = createNode("ColorRGBA");
ColorRGBA221.USE = "HAnimSegmentLineColorRGBA";
LineSet219.color = ColorRGBA221;

Shape218.geometry = LineSet219;

HAnimSegment214.children[1] = Shape218;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

HAnimJoint HAnimJoint222 = createNode("HAnimJoint");
HAnimJoint222.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint222.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint222.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint222.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint222.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.children[1] = HAnimJoint222;

HAnimJoint183.children[1] = HAnimJoint213;

HAnimJoint174.children[1] = HAnimJoint183;

HAnimJoint159.children[1] = HAnimJoint174;

HAnimJoint141.children[1] = HAnimJoint159;

HAnimJoint104.children[1] = HAnimJoint141;

HAnimJoint HAnimJoint223 = createNode("HAnimJoint");
HAnimJoint223.name = "r_hip";
HAnimJoint223.DEF = "hanim_r_hip";
HAnimJoint223.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint223.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment224 = createNode("HAnimSegment");
HAnimSegment224.name = "r_thigh";
HAnimSegment224.DEF = "hanim_r_thigh";
Transform Transform225 = createNode("Transform");
Transform225.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform226 = createNode("Transform");
//Empty Transform
Shape Shape227 = createNode("Shape");
Shape227.USE = "HAnimJointShape";
Transform226.child = new undefined();

Transform226.child[0] = Shape227;

Transform225.children = new MFNode();

Transform225.children[0] = Transform226;

HAnimSegment224.children = new MFNode();

HAnimSegment224.children[0] = Transform225;

Shape Shape228 = createNode("Shape");
LineSet LineSet229 = createNode("LineSet");
LineSet229.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate230 = createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet229.coord = Coordinate230;

//from r_hip to r_knee vertices 2
ColorRGBA ColorRGBA231 = createNode("ColorRGBA");
ColorRGBA231.USE = "HAnimSegmentLineColorRGBA";
LineSet229.color = ColorRGBA231;

Shape228.geometry = LineSet229;

HAnimSegment224.children[1] = Shape228;

HAnimSite HAnimSite232 = createNode("HAnimSite");
HAnimSite232.name = "r_lateral_malleolus";
HAnimSite232.DEF = "hanim_r_lateral_malleolus";
HAnimSite232.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor233 = createNode("TouchSensor");
TouchSensor233.description = "HAnimSite r_lateral_malleolus";
HAnimSite232.children = new MFNode();

HAnimSite232.children[0] = TouchSensor233;

Shape Shape234 = createNode("Shape");
Shape234.USE = "HAnimSiteShape";
HAnimSite232.children[1] = Shape234;

HAnimSegment224.children[2] = HAnimSite232;

HAnimSite HAnimSite235 = createNode("HAnimSite");
HAnimSite235.name = "r_medial_malleolus";
HAnimSite235.DEF = "hanim_r_medial_malleolus";
HAnimSite235.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor236 = createNode("TouchSensor");
TouchSensor236.description = "HAnimSite r_medial_malleolus";
HAnimSite235.children = new MFNode();

HAnimSite235.children[0] = TouchSensor236;

Shape Shape237 = createNode("Shape");
Shape237.USE = "HAnimSiteShape";
HAnimSite235.children[1] = Shape237;

HAnimSegment224.children[3] = HAnimSite235;

HAnimSite HAnimSite238 = createNode("HAnimSite");
HAnimSite238.name = "r_tibiale";
HAnimSite238.DEF = "hanim_r_tibiale";
TouchSensor TouchSensor239 = createNode("TouchSensor");
TouchSensor239.description = "HAnimSite r_tibiale";
HAnimSite238.children = new MFNode();

HAnimSite238.children[0] = TouchSensor239;

Shape Shape240 = createNode("Shape");
Shape240.USE = "HAnimSiteShape";
HAnimSite238.children[1] = Shape240;

HAnimSegment224.children[4] = HAnimSite238;

HAnimJoint223.children = new MFNode();

HAnimJoint223.children[0] = HAnimSegment224;

HAnimJoint HAnimJoint241 = createNode("HAnimJoint");
HAnimJoint241.name = "r_knee";
HAnimJoint241.DEF = "hanim_r_knee";
HAnimJoint241.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint241.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint241.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment242 = createNode("HAnimSegment");
HAnimSegment242.name = "r_calf";
HAnimSegment242.DEF = "hanim_r_calf";
Transform Transform243 = createNode("Transform");
Transform243.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform244 = createNode("Transform");
//Empty Transform
Shape Shape245 = createNode("Shape");
Shape245.USE = "HAnimJointShape";
Transform244.child = new undefined();

Transform244.child[0] = Shape245;

Transform243.children = new MFNode();

Transform243.children[0] = Transform244;

HAnimSegment242.children = new MFNode();

HAnimSegment242.children[0] = Transform243;

Shape Shape246 = createNode("Shape");
LineSet LineSet247 = createNode("LineSet");
LineSet247.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate248 = createNode("Coordinate");
Coordinate248.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet247.coord = Coordinate248;

//from r_knee to r_talocrural vertices 2
ColorRGBA ColorRGBA249 = createNode("ColorRGBA");
ColorRGBA249.USE = "HAnimSegmentLineColorRGBA";
LineSet247.color = ColorRGBA249;

Shape246.geometry = LineSet247;

HAnimSegment242.children[1] = Shape246;

HAnimSite HAnimSite250 = createNode("HAnimSite");
HAnimSite250.name = "r_calcaneus_posterior";
HAnimSite250.DEF = "hanim_r_calcaneus_posterior";
HAnimSite250.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor251 = createNode("TouchSensor");
TouchSensor251.description = "HAnimSite r_calcaneus_posterior";
HAnimSite250.children = new MFNode();

HAnimSite250.children[0] = TouchSensor251;

Shape Shape252 = createNode("Shape");
Shape252.USE = "HAnimSiteShape";
HAnimSite250.children[1] = Shape252;

HAnimSegment242.children[2] = HAnimSite250;

HAnimSite HAnimSite253 = createNode("HAnimSite");
HAnimSite253.name = "r_sphyrion";
HAnimSite253.DEF = "hanim_r_sphyrion";
HAnimSite253.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor254 = createNode("TouchSensor");
TouchSensor254.description = "HAnimSite r_sphyrion";
HAnimSite253.children = new MFNode();

HAnimSite253.children[0] = TouchSensor254;

Shape Shape255 = createNode("Shape");
Shape255.USE = "HAnimSiteShape";
HAnimSite253.children[1] = Shape255;

HAnimSegment242.children[3] = HAnimSite253;

HAnimJoint241.children = new MFNode();

HAnimJoint241.children[0] = HAnimSegment242;

HAnimJoint HAnimJoint256 = createNode("HAnimJoint");
HAnimJoint256.name = "r_talocrural";
HAnimJoint256.DEF = "hanim_r_talocrural";
HAnimJoint256.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint256.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment257 = createNode("HAnimSegment");
HAnimSegment257.name = "r_talus";
HAnimSegment257.DEF = "hanim_r_talus";
Transform Transform258 = createNode("Transform");
Transform258.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform258.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform258.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
Transform Transform259 = createNode("Transform");
//Empty Transform right foot
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
Coordinate263.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608]);
LineSet262.coord = Coordinate263;

//from r_talocrural to r_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA264 = createNode("ColorRGBA");
ColorRGBA264.USE = "HAnimSegmentLineColorRGBA";
LineSet262.color = ColorRGBA264;

Shape261.geometry = LineSet262;

HAnimSegment257.children[1] = Shape261;

HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

HAnimJoint HAnimJoint265 = createNode("HAnimJoint");
HAnimJoint265.name = "r_tarsometatarsal_2";
HAnimJoint265.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint265.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
HAnimJoint265.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint265.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment266 = createNode("HAnimSegment");
HAnimSegment266.name = "r_metatarsal_2";
HAnimSegment266.DEF = "hanim_r_metatarsal_2";
Transform Transform267 = createNode("Transform");
Transform267.translation = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
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
Coordinate272.point = new MFVec3f(new float[-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
LineSet271.coord = Coordinate272;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA273 = createNode("ColorRGBA");
ColorRGBA273.USE = "HAnimSegmentLineColorRGBA";
LineSet271.color = ColorRGBA273;

Shape270.geometry = LineSet271;

HAnimSegment266.children[1] = Shape270;

HAnimSite HAnimSite274 = createNode("HAnimSite");
HAnimSite274.name = "r_metatarsal_phalanx_1";
HAnimSite274.DEF = "hanim_r_metatarsal_phalanx_1";
TouchSensor TouchSensor275 = createNode("TouchSensor");
TouchSensor275.description = "HAnimSite r_metatarsal_phalanx_1";
HAnimSite274.children = new MFNode();

HAnimSite274.children[0] = TouchSensor275;

Shape Shape276 = createNode("Shape");
Shape276.USE = "HAnimSiteShape";
HAnimSite274.children[1] = Shape276;

HAnimSegment266.children[2] = HAnimSite274;

HAnimSite HAnimSite277 = createNode("HAnimSite");
HAnimSite277.name = "r_metatarsal_phalanx_5";
HAnimSite277.DEF = "hanim_r_metatarsal_phalanx_5";
TouchSensor TouchSensor278 = createNode("TouchSensor");
TouchSensor278.description = "HAnimSite r_metatarsal_phalanx_5";
HAnimSite277.children = new MFNode();

HAnimSite277.children[0] = TouchSensor278;

Shape Shape279 = createNode("Shape");
Shape279.USE = "HAnimSiteShape";
HAnimSite277.children[1] = Shape279;

HAnimSegment266.children[3] = HAnimSite277;

HAnimSite HAnimSite280 = createNode("HAnimSite");
HAnimSite280.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite280.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor281 = createNode("TouchSensor");
TouchSensor281.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite280.children = new MFNode();

HAnimSite280.children[0] = TouchSensor281;

Shape Shape282 = createNode("Shape");
Shape282.USE = "HAnimSiteShape";
HAnimSite280.children[1] = Shape282;

HAnimSegment266.children[4] = HAnimSite280;

HAnimSite HAnimSite283 = createNode("HAnimSite");
HAnimSite283.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite283.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite283.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor284 = createNode("TouchSensor");
TouchSensor284.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite283.children = new MFNode();

HAnimSite283.children[0] = TouchSensor284;

Shape Shape285 = createNode("Shape");
Shape285.USE = "HAnimSiteShape";
HAnimSite283.children[1] = Shape285;

HAnimSegment266.children[5] = HAnimSite283;

HAnimSite HAnimSite286 = createNode("HAnimSite");
HAnimSite286.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite286.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor287 = createNode("TouchSensor");
TouchSensor287.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite286.children = new MFNode();

HAnimSite286.children[0] = TouchSensor287;

Shape Shape288 = createNode("Shape");
Shape288.USE = "HAnimSiteShape";
HAnimSite286.children[1] = Shape288;

HAnimSegment266.children[6] = HAnimSite286;

HAnimSite HAnimSite289 = createNode("HAnimSite");
HAnimSite289.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite289.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor290 = createNode("TouchSensor");
TouchSensor290.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite289.children = new MFNode();

HAnimSite289.children[0] = TouchSensor290;

Shape Shape291 = createNode("Shape");
Shape291.USE = "HAnimSiteShape";
HAnimSite289.children[1] = Shape291;

HAnimSegment266.children[7] = HAnimSite289;

HAnimSite HAnimSite292 = createNode("HAnimSite");
HAnimSite292.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite292.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor293 = createNode("TouchSensor");
TouchSensor293.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite292.children = new MFNode();

HAnimSite292.children[0] = TouchSensor293;

Shape Shape294 = createNode("Shape");
Shape294.USE = "HAnimSiteShape";
HAnimSite292.children[1] = Shape294;

HAnimSegment266.children[8] = HAnimSite292;

HAnimJoint265.children = new MFNode();

HAnimJoint265.children[0] = HAnimSegment266;

HAnimJoint HAnimJoint295 = createNode("HAnimJoint");
HAnimJoint295.name = "r_metatarsophalangeal_2";
HAnimJoint295.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint295.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint295.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint295.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment296 = createNode("HAnimSegment");
HAnimSegment296.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment296.DEF = "hanim_r_tarsal_proximal_phalanx_2";
Transform Transform297 = createNode("Transform");
Transform297.translation = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
Transform Transform298 = createNode("Transform");
//Empty Transform
Shape Shape299 = createNode("Shape");
Shape299.USE = "HAnimJointShape";
Transform298.child = new undefined();

Transform298.child[0] = Shape299;

Transform297.children = new MFNode();

Transform297.children[0] = Transform298;

HAnimSegment296.children = new MFNode();

HAnimSegment296.children[0] = Transform297;

Shape Shape300 = createNode("Shape");
LineSet LineSet301 = createNode("LineSet");
LineSet301.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate302 = createNode("Coordinate");
Coordinate302.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216]);
LineSet301.coord = Coordinate302;

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA303 = createNode("ColorRGBA");
ColorRGBA303.USE = "HAnimSegmentLineColorRGBA";
LineSet301.color = ColorRGBA303;

Shape300.geometry = LineSet301;

HAnimSegment296.children[1] = Shape300;

HAnimJoint295.children = new MFNode();

HAnimJoint295.children[0] = HAnimSegment296;

HAnimJoint HAnimJoint304 = createNode("HAnimJoint");
HAnimJoint304.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint304.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint304.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint304.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint304.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint295.children[1] = HAnimJoint304;

HAnimJoint265.children[1] = HAnimJoint295;

HAnimJoint256.children[1] = HAnimJoint265;

HAnimJoint241.children[1] = HAnimJoint256;

HAnimJoint223.children[1] = HAnimJoint241;

HAnimJoint104.children[2] = HAnimJoint223;

HAnimJoint52.children[1] = HAnimJoint104;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.name = "vl5";
HAnimJoint305.DEF = "hanim_vl5";
HAnimJoint305.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint305.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint305.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment306 = createNode("HAnimSegment");
HAnimSegment306.name = "l5";
HAnimSegment306.DEF = "hanim_l5";
Transform Transform307 = createNode("Transform");
Transform307.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
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
Coordinate312.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796]);
LineSet311.coord = Coordinate312;

//from vl5 to vl3 vertices 2
ColorRGBA ColorRGBA313 = createNode("ColorRGBA");
ColorRGBA313.USE = "HAnimSegmentLineColorRGBA";
LineSet311.color = ColorRGBA313;

Shape310.geometry = LineSet311;

HAnimSegment306.children[1] = Shape310;

HAnimSite HAnimSite314 = createNode("HAnimSite");
HAnimSite314.name = "l_rib10";
HAnimSite314.DEF = "hanim_l_rib10";
HAnimSite314.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor315 = createNode("TouchSensor");
TouchSensor315.description = "HAnimSite l_rib10";
HAnimSite314.children = new MFNode();

HAnimSite314.children[0] = TouchSensor315;

Shape Shape316 = createNode("Shape");
Shape316.USE = "HAnimSiteShape";
HAnimSite314.children[1] = Shape316;

HAnimSegment306.children[2] = HAnimSite314;

HAnimSite HAnimSite317 = createNode("HAnimSite");
HAnimSite317.name = "r_rib10";
HAnimSite317.DEF = "hanim_r_rib10";
HAnimSite317.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor318 = createNode("TouchSensor");
TouchSensor318.description = "HAnimSite r_rib10";
HAnimSite317.children = new MFNode();

HAnimSite317.children[0] = TouchSensor318;

Shape Shape319 = createNode("Shape");
Shape319.USE = "HAnimSiteShape";
HAnimSite317.children[1] = Shape319;

HAnimSegment306.children[3] = HAnimSite317;

HAnimSite HAnimSite320 = createNode("HAnimSite");
HAnimSite320.name = "spine_1_middle_back";
HAnimSite320.DEF = "hanim_spine_1_middle_back";
TouchSensor TouchSensor321 = createNode("TouchSensor");
TouchSensor321.description = "HAnimSite spine_1_middle_back";
HAnimSite320.children = new MFNode();

HAnimSite320.children[0] = TouchSensor321;

Shape Shape322 = createNode("Shape");
Shape322.USE = "HAnimSiteShape";
HAnimSite320.children[1] = Shape322;

HAnimSegment306.children[4] = HAnimSite320;

HAnimSite HAnimSite323 = createNode("HAnimSite");
HAnimSite323.name = "spine_2_middle_back";
HAnimSite323.DEF = "hanim_spine_2_middle_back";
TouchSensor TouchSensor324 = createNode("TouchSensor");
TouchSensor324.description = "HAnimSite spine_2_middle_back";
HAnimSite323.children = new MFNode();

HAnimSite323.children[0] = TouchSensor324;

Shape Shape325 = createNode("Shape");
Shape325.USE = "HAnimSiteShape";
HAnimSite323.children[1] = Shape325;

HAnimSegment306.children[5] = HAnimSite323;

HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

HAnimJoint HAnimJoint326 = createNode("HAnimJoint");
HAnimJoint326.name = "vl3";
HAnimJoint326.DEF = "hanim_vl3";
HAnimJoint326.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint326.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint326.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment327 = createNode("HAnimSegment");
HAnimSegment327.name = "l3";
HAnimSegment327.DEF = "hanim_l3";
Transform Transform328 = createNode("Transform");
Transform328.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
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
Coordinate333.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805]);
LineSet332.coord = Coordinate333;

//from vl3 to vl1 vertices 2
ColorRGBA ColorRGBA334 = createNode("ColorRGBA");
ColorRGBA334.USE = "HAnimSegmentLineColorRGBA";
LineSet332.color = ColorRGBA334;

Shape331.geometry = LineSet332;

HAnimSegment327.children[1] = Shape331;

HAnimJoint326.children = new MFNode();

HAnimJoint326.children[0] = HAnimSegment327;

HAnimJoint HAnimJoint335 = createNode("HAnimJoint");
HAnimJoint335.name = "vl1";
HAnimJoint335.DEF = "hanim_vl1";
HAnimJoint335.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint335.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint335.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment336 = createNode("HAnimSegment");
HAnimSegment336.name = "l1";
HAnimSegment336.DEF = "hanim_l1";
Transform Transform337 = createNode("Transform");
Transform337.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
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
Coordinate342.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822]);
LineSet341.coord = Coordinate342;

//from vl1 to vt10 vertices 2
ColorRGBA ColorRGBA343 = createNode("ColorRGBA");
ColorRGBA343.USE = "HAnimSegmentLineColorRGBA";
LineSet341.color = ColorRGBA343;

Shape340.geometry = LineSet341;

HAnimSegment336.children[1] = Shape340;

HAnimSite HAnimSite344 = createNode("HAnimSite");
HAnimSite344.name = "l_thelion";
HAnimSite344.DEF = "hanim_l_thelion";
HAnimSite344.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor345 = createNode("TouchSensor");
TouchSensor345.description = "HAnimSite l_thelion";
HAnimSite344.children = new MFNode();

HAnimSite344.children[0] = TouchSensor345;

Shape Shape346 = createNode("Shape");
Shape346.USE = "HAnimSiteShape";
HAnimSite344.children[1] = Shape346;

HAnimSegment336.children[2] = HAnimSite344;

HAnimSite HAnimSite347 = createNode("HAnimSite");
HAnimSite347.name = "r_thelion";
HAnimSite347.DEF = "hanim_r_thelion";
HAnimSite347.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor348 = createNode("TouchSensor");
TouchSensor348.description = "HAnimSite r_thelion";
HAnimSite347.children = new MFNode();

HAnimSite347.children[0] = TouchSensor348;

Shape Shape349 = createNode("Shape");
Shape349.USE = "HAnimSiteShape";
HAnimSite347.children[1] = Shape349;

HAnimSegment336.children[3] = HAnimSite347;

HAnimSite HAnimSite350 = createNode("HAnimSite");
HAnimSite350.name = "substernale";
HAnimSite350.DEF = "hanim_substernale";
HAnimSite350.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor351 = createNode("TouchSensor");
TouchSensor351.description = "HAnimSite substernale";
HAnimSite350.children = new MFNode();

HAnimSite350.children[0] = TouchSensor351;

Shape Shape352 = createNode("Shape");
Shape352.USE = "HAnimSiteShape";
HAnimSite350.children[1] = Shape352;

HAnimSegment336.children[4] = HAnimSite350;

HAnimJoint335.children = new MFNode();

HAnimJoint335.children[0] = HAnimSegment336;

HAnimJoint HAnimJoint353 = createNode("HAnimJoint");
HAnimJoint353.name = "vt10";
HAnimJoint353.DEF = "hanim_vt10";
HAnimJoint353.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint353.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint353.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment354 = createNode("HAnimSegment");
HAnimSegment354.name = "t10";
HAnimSegment354.DEF = "hanim_t10";
Transform Transform355 = createNode("Transform");
Transform355.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
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
Coordinate360.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08]);
LineSet359.coord = Coordinate360;

//from vt10 to vt6 vertices 2
ColorRGBA ColorRGBA361 = createNode("ColorRGBA");
ColorRGBA361.USE = "HAnimSegmentLineColorRGBA";
LineSet359.color = ColorRGBA361;

Shape358.geometry = LineSet359;

HAnimSegment354.children[1] = Shape358;

HAnimSite HAnimSite362 = createNode("HAnimSite");
HAnimSite362.name = "l_chest_midsagittal_plane";
HAnimSite362.DEF = "hanim_l_chest_midsagittal_plane";
TouchSensor TouchSensor363 = createNode("TouchSensor");
TouchSensor363.description = "HAnimSite l_chest_midsagittal_plane";
HAnimSite362.children = new MFNode();

HAnimSite362.children[0] = TouchSensor363;

Shape Shape364 = createNode("Shape");
Shape364.USE = "HAnimSiteShape";
HAnimSite362.children[1] = Shape364;

HAnimSegment354.children[2] = HAnimSite362;

HAnimSite HAnimSite365 = createNode("HAnimSite");
HAnimSite365.name = "mesosternale";
HAnimSite365.DEF = "hanim_mesosternale";
TouchSensor TouchSensor366 = createNode("TouchSensor");
TouchSensor366.description = "HAnimSite mesosternale";
HAnimSite365.children = new MFNode();

HAnimSite365.children[0] = TouchSensor366;

Shape Shape367 = createNode("Shape");
Shape367.USE = "HAnimSiteShape";
HAnimSite365.children[1] = Shape367;

HAnimSegment354.children[3] = HAnimSite365;

HAnimSite HAnimSite368 = createNode("HAnimSite");
HAnimSite368.name = "r_chest_midsagittal_plane";
HAnimSite368.DEF = "hanim_r_chest_midsagittal_plane";
TouchSensor TouchSensor369 = createNode("TouchSensor");
TouchSensor369.description = "HAnimSite r_chest_midsagittal_plane";
HAnimSite368.children = new MFNode();

HAnimSite368.children[0] = TouchSensor369;

Shape Shape370 = createNode("Shape");
Shape370.USE = "HAnimSiteShape";
HAnimSite368.children[1] = Shape370;

HAnimSegment354.children[4] = HAnimSite368;

HAnimSite HAnimSite371 = createNode("HAnimSite");
HAnimSite371.name = "rear_center_midsagittal_plane";
HAnimSite371.DEF = "hanim_rear_center_midsagittal_plane";
TouchSensor TouchSensor372 = createNode("TouchSensor");
TouchSensor372.description = "HAnimSite rear_center_midsagittal_plane";
HAnimSite371.children = new MFNode();

HAnimSite371.children[0] = TouchSensor372;

Shape Shape373 = createNode("Shape");
Shape373.USE = "HAnimSiteShape";
HAnimSite371.children[1] = Shape373;

HAnimSegment354.children[5] = HAnimSite371;

HAnimJoint353.children = new MFNode();

HAnimJoint353.children[0] = HAnimSegment354;

HAnimJoint HAnimJoint374 = createNode("HAnimJoint");
HAnimJoint374.name = "vt6";
HAnimJoint374.DEF = "hanim_vt6";
HAnimJoint374.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint374.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint374.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment375 = createNode("HAnimSegment");
HAnimSegment375.name = "t6";
HAnimSegment375.DEF = "hanim_t6";
Transform Transform376 = createNode("Transform");
Transform376.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform377 = createNode("Transform");
//Empty Transform
Shape Shape378 = createNode("Shape");
Shape378.USE = "HAnimJointShape";
Transform377.child = new undefined();

Transform377.child[0] = Shape378;

Transform376.children = new MFNode();

Transform376.children[0] = Transform377;

HAnimSegment375.children = new MFNode();

HAnimSegment375.children[0] = Transform376;

Shape Shape379 = createNode("Shape");
LineSet LineSet380 = createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate381 = createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387]);
LineSet380.coord = Coordinate381;

//from vt6 to vt1 vertices 2
ColorRGBA ColorRGBA382 = createNode("ColorRGBA");
ColorRGBA382.USE = "HAnimSegmentLineColorRGBA";
LineSet380.color = ColorRGBA382;

Shape379.geometry = LineSet380;

HAnimSegment375.children[1] = Shape379;

HAnimSite HAnimSite383 = createNode("HAnimSite");
HAnimSite383.name = "cervicale";
HAnimSite383.DEF = "hanim_cervicale";
HAnimSite383.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor384 = createNode("TouchSensor");
TouchSensor384.description = "HAnimSite cervicale";
HAnimSite383.children = new MFNode();

HAnimSite383.children[0] = TouchSensor384;

Shape Shape385 = createNode("Shape");
Shape385.USE = "HAnimSiteShape";
HAnimSite383.children[1] = Shape385;

HAnimSegment375.children[2] = HAnimSite383;

HAnimSite HAnimSite386 = createNode("HAnimSite");
HAnimSite386.name = "l_neck_base";
HAnimSite386.DEF = "hanim_l_neck_base";
HAnimSite386.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor387 = createNode("TouchSensor");
TouchSensor387.description = "HAnimSite l_neck_base";
HAnimSite386.children = new MFNode();

HAnimSite386.children[0] = TouchSensor387;

Shape Shape388 = createNode("Shape");
Shape388.USE = "HAnimSiteShape";
HAnimSite386.children[1] = Shape388;

HAnimSegment375.children[3] = HAnimSite386;

HAnimSite HAnimSite389 = createNode("HAnimSite");
HAnimSite389.name = "r_neck_base";
HAnimSite389.DEF = "hanim_r_neck_base";
HAnimSite389.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor390 = createNode("TouchSensor");
TouchSensor390.description = "HAnimSite r_neck_base";
HAnimSite389.children = new MFNode();

HAnimSite389.children[0] = TouchSensor390;

Shape Shape391 = createNode("Shape");
Shape391.USE = "HAnimSiteShape";
HAnimSite389.children[1] = Shape391;

HAnimSegment375.children[4] = HAnimSite389;

HAnimSite HAnimSite392 = createNode("HAnimSite");
HAnimSite392.name = "suprasternale";
HAnimSite392.DEF = "hanim_suprasternale";
HAnimSite392.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor393 = createNode("TouchSensor");
TouchSensor393.description = "HAnimSite suprasternale";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

Shape Shape394 = createNode("Shape");
Shape394.USE = "HAnimSiteShape";
HAnimSite392.children[1] = Shape394;

HAnimSegment375.children[5] = HAnimSite392;

HAnimJoint374.children = new MFNode();

HAnimJoint374.children[0] = HAnimSegment375;

HAnimJoint HAnimJoint395 = createNode("HAnimJoint");
HAnimJoint395.name = "vt1";
HAnimJoint395.DEF = "hanim_vt1";
HAnimJoint395.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint395.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint395.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment396 = createNode("HAnimSegment");
HAnimSegment396.name = "t1";
HAnimSegment396.DEF = "hanim_t1";
Transform Transform397 = createNode("Transform");
Transform397.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Transform Transform398 = createNode("Transform");
//Empty Transform
Shape Shape399 = createNode("Shape");
Shape399.USE = "HAnimJointShape";
Transform398.child = new undefined();

Transform398.child[0] = Shape399;

Transform397.children = new MFNode();

Transform397.children[0] = Transform398;

HAnimSegment396.children = new MFNode();

HAnimSegment396.children[0] = Transform397;

Shape Shape400 = createNode("Shape");
LineSet LineSet401 = createNode("LineSet");
LineSet401.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate402 = createNode("Coordinate");
Coordinate402.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084]);
LineSet401.coord = Coordinate402;

//from vt1 to vc4 vertices 2
ColorRGBA ColorRGBA403 = createNode("ColorRGBA");
ColorRGBA403.USE = "HAnimSegmentLineColorRGBA";
LineSet401.color = ColorRGBA403;

Shape400.geometry = LineSet401;

HAnimSegment396.children[1] = Shape400;

Shape Shape404 = createNode("Shape");
LineSet LineSet405 = createNode("LineSet");
LineSet405.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate406 = createNode("Coordinate");
Coordinate406.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet405.coord = Coordinate406;

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA ColorRGBA407 = createNode("ColorRGBA");
ColorRGBA407.USE = "HAnimSegmentLineColorRGBA";
LineSet405.color = ColorRGBA407;

Shape404.geometry = LineSet405;

HAnimSegment396.children[2] = Shape404;

HAnimSite HAnimSite408 = createNode("HAnimSite");
HAnimSite408.name = "l_acromion";
HAnimSite408.DEF = "hanim_l_acromion";
HAnimSite408.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor409 = createNode("TouchSensor");
TouchSensor409.description = "HAnimSite l_acromion";
HAnimSite408.children = new MFNode();

HAnimSite408.children[0] = TouchSensor409;

Shape Shape410 = createNode("Shape");
Shape410.USE = "HAnimSiteShape";
HAnimSite408.children[1] = Shape410;

HAnimSegment396.children[3] = HAnimSite408;

HAnimSite HAnimSite411 = createNode("HAnimSite");
HAnimSite411.name = "l_axilla_distal_pt";
HAnimSite411.DEF = "hanim_l_axilla_distal_pt";
HAnimSite411.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor412 = createNode("TouchSensor");
TouchSensor412.description = "HAnimSite l_axilla_distal_pt";
HAnimSite411.children = new MFNode();

HAnimSite411.children[0] = TouchSensor412;

Shape Shape413 = createNode("Shape");
Shape413.USE = "HAnimSiteShape";
HAnimSite411.children[1] = Shape413;

HAnimSegment396.children[4] = HAnimSite411;

HAnimSite HAnimSite414 = createNode("HAnimSite");
HAnimSite414.name = "l_axilla_posterior_folds";
HAnimSite414.DEF = "hanim_l_axilla_posterior_folds";
TouchSensor TouchSensor415 = createNode("TouchSensor");
TouchSensor415.description = "HAnimSite l_axilla_posterior_folds";
HAnimSite414.children = new MFNode();

HAnimSite414.children[0] = TouchSensor415;

Shape Shape416 = createNode("Shape");
Shape416.USE = "HAnimSiteShape";
HAnimSite414.children[1] = Shape416;

HAnimSegment396.children[5] = HAnimSite414;

HAnimSite HAnimSite417 = createNode("HAnimSite");
HAnimSite417.name = "l_axilla_proximal";
HAnimSite417.DEF = "hanim_l_axilla_proximal";
HAnimSite417.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor418 = createNode("TouchSensor");
TouchSensor418.description = "HAnimSite l_axilla_proximal";
HAnimSite417.children = new MFNode();

HAnimSite417.children[0] = TouchSensor418;

Shape Shape419 = createNode("Shape");
Shape419.USE = "HAnimSiteShape";
HAnimSite417.children[1] = Shape419;

HAnimSegment396.children[6] = HAnimSite417;

HAnimSite HAnimSite420 = createNode("HAnimSite");
HAnimSite420.name = "l_clavicale";
HAnimSite420.DEF = "hanim_l_clavicale";
HAnimSite420.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor421 = createNode("TouchSensor");
TouchSensor421.description = "HAnimSite l_clavicale";
HAnimSite420.children = new MFNode();

HAnimSite420.children[0] = TouchSensor421;

Shape Shape422 = createNode("Shape");
Shape422.USE = "HAnimSiteShape";
HAnimSite420.children[1] = Shape422;

HAnimSegment396.children[7] = HAnimSite420;

Shape Shape423 = createNode("Shape");
LineSet LineSet424 = createNode("LineSet");
LineSet424.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate425 = createNode("Coordinate");
Coordinate425.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet424.coord = Coordinate425;

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA ColorRGBA426 = createNode("ColorRGBA");
ColorRGBA426.USE = "HAnimSegmentLineColorRGBA";
LineSet424.color = ColorRGBA426;

Shape423.geometry = LineSet424;

HAnimSegment396.children[8] = Shape423;

HAnimSite HAnimSite427 = createNode("HAnimSite");
HAnimSite427.name = "r_acromion";
HAnimSite427.DEF = "hanim_r_acromion";
HAnimSite427.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor428 = createNode("TouchSensor");
TouchSensor428.description = "HAnimSite r_acromion";
HAnimSite427.children = new MFNode();

HAnimSite427.children[0] = TouchSensor428;

Shape Shape429 = createNode("Shape");
Shape429.USE = "HAnimSiteShape";
HAnimSite427.children[1] = Shape429;

HAnimSegment396.children[9] = HAnimSite427;

HAnimSite HAnimSite430 = createNode("HAnimSite");
HAnimSite430.name = "r_axilla_distal_pt";
HAnimSite430.DEF = "hanim_r_axilla_distal_pt";
HAnimSite430.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor431 = createNode("TouchSensor");
TouchSensor431.description = "HAnimSite r_axilla_distal_pt";
HAnimSite430.children = new MFNode();

HAnimSite430.children[0] = TouchSensor431;

Shape Shape432 = createNode("Shape");
Shape432.USE = "HAnimSiteShape";
HAnimSite430.children[1] = Shape432;

HAnimSegment396.children[10] = HAnimSite430;

HAnimSite HAnimSite433 = createNode("HAnimSite");
HAnimSite433.name = "r_axilla_posterior_folds";
HAnimSite433.DEF = "hanim_r_axilla_posterior_folds";
TouchSensor TouchSensor434 = createNode("TouchSensor");
TouchSensor434.description = "HAnimSite r_axilla_posterior_folds";
HAnimSite433.children = new MFNode();

HAnimSite433.children[0] = TouchSensor434;

Shape Shape435 = createNode("Shape");
Shape435.USE = "HAnimSiteShape";
HAnimSite433.children[1] = Shape435;

HAnimSegment396.children[11] = HAnimSite433;

HAnimSite HAnimSite436 = createNode("HAnimSite");
HAnimSite436.name = "r_axilla_proximal";
HAnimSite436.DEF = "hanim_r_axilla_proximal";
HAnimSite436.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor437 = createNode("TouchSensor");
TouchSensor437.description = "HAnimSite r_axilla_proximal";
HAnimSite436.children = new MFNode();

HAnimSite436.children[0] = TouchSensor437;

Shape Shape438 = createNode("Shape");
Shape438.USE = "HAnimSiteShape";
HAnimSite436.children[1] = Shape438;

HAnimSegment396.children[12] = HAnimSite436;

HAnimSite HAnimSite439 = createNode("HAnimSite");
HAnimSite439.name = "r_clavicale";
HAnimSite439.DEF = "hanim_r_clavicale";
HAnimSite439.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor440 = createNode("TouchSensor");
TouchSensor440.description = "HAnimSite r_clavicale";
HAnimSite439.children = new MFNode();

HAnimSite439.children[0] = TouchSensor440;

Shape Shape441 = createNode("Shape");
Shape441.USE = "HAnimSiteShape";
HAnimSite439.children[1] = Shape441;

HAnimSegment396.children[13] = HAnimSite439;

HAnimJoint395.children = new MFNode();

HAnimJoint395.children[0] = HAnimSegment396;

HAnimJoint HAnimJoint442 = createNode("HAnimJoint");
HAnimJoint442.name = "vc4";
HAnimJoint442.DEF = "hanim_vc4";
HAnimJoint442.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint442.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint442.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment443 = createNode("HAnimSegment");
HAnimSegment443.name = "c4";
HAnimSegment443.DEF = "hanim_c4";
Transform Transform444 = createNode("Transform");
Transform444.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Transform Transform445 = createNode("Transform");
//Empty Transform
Shape Shape446 = createNode("Shape");
Shape446.USE = "HAnimJointShape";
Transform445.child = new undefined();

Transform445.child[0] = Shape446;

Transform444.children = new MFNode();

Transform444.children[0] = Transform445;

HAnimSegment443.children = new MFNode();

HAnimSegment443.children[0] = Transform444;

Shape Shape447 = createNode("Shape");
LineSet LineSet448 = createNode("LineSet");
LineSet448.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate449 = createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103]);
LineSet448.coord = Coordinate449;

//from vc4 to vc2 vertices 2
ColorRGBA ColorRGBA450 = createNode("ColorRGBA");
ColorRGBA450.USE = "HAnimSegmentLineColorRGBA";
LineSet448.color = ColorRGBA450;

Shape447.geometry = LineSet448;

HAnimSegment443.children[1] = Shape447;

HAnimSite HAnimSite451 = createNode("HAnimSite");
HAnimSite451.name = "adams_apple";
HAnimSite451.DEF = "hanim_adams_apple";
TouchSensor TouchSensor452 = createNode("TouchSensor");
TouchSensor452.description = "HAnimSite adams_apple";
HAnimSite451.children = new MFNode();

HAnimSite451.children[0] = TouchSensor452;

Shape Shape453 = createNode("Shape");
Shape453.USE = "HAnimSiteShape";
HAnimSite451.children[1] = Shape453;

HAnimSegment443.children[2] = HAnimSite451;

HAnimJoint442.children = new MFNode();

HAnimJoint442.children[0] = HAnimSegment443;

HAnimJoint HAnimJoint454 = createNode("HAnimJoint");
HAnimJoint454.name = "vc2";
HAnimJoint454.DEF = "hanim_vc2";
HAnimJoint454.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint454.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint454.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment455 = createNode("HAnimSegment");
HAnimSegment455.name = "c2";
HAnimSegment455.DEF = "hanim_c2";
Transform Transform456 = createNode("Transform");
Transform456.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Transform Transform457 = createNode("Transform");
//Empty Transform
Shape Shape458 = createNode("Shape");
Shape458.USE = "HAnimJointShape";
Transform457.child = new undefined();

Transform457.child[0] = Shape458;

Transform456.children = new MFNode();

Transform456.children[0] = Transform457;

HAnimSegment455.children = new MFNode();

HAnimSegment455.children[0] = Transform456;

Shape Shape459 = createNode("Shape");
LineSet LineSet460 = createNode("LineSet");
LineSet460.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate461 = createNode("Coordinate");
Coordinate461.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236]);
LineSet460.coord = Coordinate461;

//from vc2 to skullbase vertices 2
ColorRGBA ColorRGBA462 = createNode("ColorRGBA");
ColorRGBA462.USE = "HAnimSegmentLineColorRGBA";
LineSet460.color = ColorRGBA462;

Shape459.geometry = LineSet460;

HAnimSegment455.children[1] = Shape459;

HAnimSite HAnimSite463 = createNode("HAnimSite");
HAnimSite463.name = "glabella";
HAnimSite463.DEF = "hanim_glabella";
TouchSensor TouchSensor464 = createNode("TouchSensor");
TouchSensor464.description = "HAnimSite glabella";
HAnimSite463.children = new MFNode();

HAnimSite463.children[0] = TouchSensor464;

Shape Shape465 = createNode("Shape");
Shape465.USE = "HAnimSiteShape";
HAnimSite463.children[1] = Shape465;

HAnimSegment455.children[2] = HAnimSite463;

HAnimSite HAnimSite466 = createNode("HAnimSite");
HAnimSite466.name = "l_ectocanthus";
HAnimSite466.DEF = "hanim_l_ectocanthus";
TouchSensor TouchSensor467 = createNode("TouchSensor");
TouchSensor467.description = "HAnimSite l_ectocanthus";
HAnimSite466.children = new MFNode();

HAnimSite466.children[0] = TouchSensor467;

Shape Shape468 = createNode("Shape");
Shape468.USE = "HAnimSiteShape";
HAnimSite466.children[1] = Shape468;

HAnimSegment455.children[3] = HAnimSite466;

HAnimSite HAnimSite469 = createNode("HAnimSite");
HAnimSite469.name = "l_gonion";
HAnimSite469.DEF = "hanim_l_gonion";
HAnimSite469.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor470 = createNode("TouchSensor");
TouchSensor470.description = "HAnimSite l_gonion";
HAnimSite469.children = new MFNode();

HAnimSite469.children[0] = TouchSensor470;

Shape Shape471 = createNode("Shape");
Shape471.USE = "HAnimSiteShape";
HAnimSite469.children[1] = Shape471;

HAnimSegment455.children[4] = HAnimSite469;

HAnimSite HAnimSite472 = createNode("HAnimSite");
HAnimSite472.name = "l_infraorbitale";
HAnimSite472.DEF = "hanim_l_infraorbitale";
HAnimSite472.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor473 = createNode("TouchSensor");
TouchSensor473.description = "HAnimSite l_infraorbitale";
HAnimSite472.children = new MFNode();

HAnimSite472.children[0] = TouchSensor473;

Shape Shape474 = createNode("Shape");
Shape474.USE = "HAnimSiteShape";
HAnimSite472.children[1] = Shape474;

HAnimSegment455.children[5] = HAnimSite472;

HAnimSite HAnimSite475 = createNode("HAnimSite");
HAnimSite475.name = "l_tragion";
HAnimSite475.DEF = "hanim_l_tragion";
HAnimSite475.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor476 = createNode("TouchSensor");
TouchSensor476.description = "HAnimSite l_tragion";
HAnimSite475.children = new MFNode();

HAnimSite475.children[0] = TouchSensor476;

Shape Shape477 = createNode("Shape");
Shape477.USE = "HAnimSiteShape";
HAnimSite475.children[1] = Shape477;

HAnimSegment455.children[6] = HAnimSite475;

HAnimSite HAnimSite478 = createNode("HAnimSite");
HAnimSite478.name = "menton";
HAnimSite478.DEF = "hanim_menton";
TouchSensor TouchSensor479 = createNode("TouchSensor");
TouchSensor479.description = "HAnimSite menton";
HAnimSite478.children = new MFNode();

HAnimSite478.children[0] = TouchSensor479;

Shape Shape480 = createNode("Shape");
Shape480.USE = "HAnimSiteShape";
HAnimSite478.children[1] = Shape480;

HAnimSegment455.children[7] = HAnimSite478;

HAnimSite HAnimSite481 = createNode("HAnimSite");
HAnimSite481.name = "nuchale";
HAnimSite481.DEF = "hanim_nuchale";
HAnimSite481.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor482 = createNode("TouchSensor");
TouchSensor482.description = "HAnimSite nuchale";
HAnimSite481.children = new MFNode();

HAnimSite481.children[0] = TouchSensor482;

Shape Shape483 = createNode("Shape");
Shape483.USE = "HAnimSiteShape";
HAnimSite481.children[1] = Shape483;

HAnimSegment455.children[8] = HAnimSite481;

HAnimSite HAnimSite484 = createNode("HAnimSite");
HAnimSite484.name = "opisthocranion";
HAnimSite484.DEF = "hanim_opisthocranion";
TouchSensor TouchSensor485 = createNode("TouchSensor");
TouchSensor485.description = "HAnimSite opisthocranion";
HAnimSite484.children = new MFNode();

HAnimSite484.children[0] = TouchSensor485;

Shape Shape486 = createNode("Shape");
Shape486.USE = "HAnimSiteShape";
HAnimSite484.children[1] = Shape486;

HAnimSegment455.children[9] = HAnimSite484;

HAnimSite HAnimSite487 = createNode("HAnimSite");
HAnimSite487.name = "r_ectocanthus";
HAnimSite487.DEF = "hanim_r_ectocanthus";
TouchSensor TouchSensor488 = createNode("TouchSensor");
TouchSensor488.description = "HAnimSite r_ectocanthus";
HAnimSite487.children = new MFNode();

HAnimSite487.children[0] = TouchSensor488;

Shape Shape489 = createNode("Shape");
Shape489.USE = "HAnimSiteShape";
HAnimSite487.children[1] = Shape489;

HAnimSegment455.children[10] = HAnimSite487;

HAnimSite HAnimSite490 = createNode("HAnimSite");
HAnimSite490.name = "r_gonion";
HAnimSite490.DEF = "hanim_r_gonion";
HAnimSite490.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor491 = createNode("TouchSensor");
TouchSensor491.description = "HAnimSite r_gonion";
HAnimSite490.children = new MFNode();

HAnimSite490.children[0] = TouchSensor491;

Shape Shape492 = createNode("Shape");
Shape492.USE = "HAnimSiteShape";
HAnimSite490.children[1] = Shape492;

HAnimSegment455.children[11] = HAnimSite490;

HAnimSite HAnimSite493 = createNode("HAnimSite");
HAnimSite493.name = "r_infraorbitale";
HAnimSite493.DEF = "hanim_r_infraorbitale";
HAnimSite493.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor494 = createNode("TouchSensor");
TouchSensor494.description = "HAnimSite r_infraorbitale";
HAnimSite493.children = new MFNode();

HAnimSite493.children[0] = TouchSensor494;

Shape Shape495 = createNode("Shape");
Shape495.USE = "HAnimSiteShape";
HAnimSite493.children[1] = Shape495;

HAnimSegment455.children[12] = HAnimSite493;

HAnimSite HAnimSite496 = createNode("HAnimSite");
HAnimSite496.name = "r_tragion";
HAnimSite496.DEF = "hanim_r_tragion";
HAnimSite496.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor497 = createNode("TouchSensor");
TouchSensor497.description = "HAnimSite r_tragion";
HAnimSite496.children = new MFNode();

HAnimSite496.children[0] = TouchSensor497;

Shape Shape498 = createNode("Shape");
Shape498.USE = "HAnimSiteShape";
HAnimSite496.children[1] = Shape498;

HAnimSegment455.children[13] = HAnimSite496;

HAnimSite HAnimSite499 = createNode("HAnimSite");
HAnimSite499.name = "sellion";
HAnimSite499.DEF = "hanim_sellion";
HAnimSite499.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor500 = createNode("TouchSensor");
TouchSensor500.description = "HAnimSite sellion";
HAnimSite499.children = new MFNode();

HAnimSite499.children[0] = TouchSensor500;

Shape Shape501 = createNode("Shape");
Shape501.USE = "HAnimSiteShape";
HAnimSite499.children[1] = Shape501;

HAnimSegment455.children[14] = HAnimSite499;

HAnimSite HAnimSite502 = createNode("HAnimSite");
HAnimSite502.name = "skull_vertex";
HAnimSite502.DEF = "hanim_skull_vertex";
TouchSensor TouchSensor503 = createNode("TouchSensor");
TouchSensor503.description = "HAnimSite skull_vertex";
HAnimSite502.children = new MFNode();

HAnimSite502.children[0] = TouchSensor503;

Shape Shape504 = createNode("Shape");
Shape504.USE = "HAnimSiteShape";
HAnimSite502.children[1] = Shape504;

HAnimSegment455.children[15] = HAnimSite502;

HAnimSite HAnimSite505 = createNode("HAnimSite");
HAnimSite505.name = "supramenton";
HAnimSite505.DEF = "hanim_supramenton";
HAnimSite505.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor506 = createNode("TouchSensor");
TouchSensor506.description = "HAnimSite supramenton";
HAnimSite505.children = new MFNode();

HAnimSite505.children[0] = TouchSensor506;

Shape Shape507 = createNode("Shape");
Shape507.USE = "HAnimSiteShape";
HAnimSite505.children[1] = Shape507;

HAnimSegment455.children[16] = HAnimSite505;

HAnimJoint454.children = new MFNode();

HAnimJoint454.children[0] = HAnimSegment455;

HAnimJoint HAnimJoint508 = createNode("HAnimJoint");
HAnimJoint508.name = "skullbase";
HAnimJoint508.DEF = "hanim_skullbase";
HAnimJoint508.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint508.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint508.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint454.children[1] = HAnimJoint508;

HAnimJoint442.children[1] = HAnimJoint454;

HAnimJoint395.children[1] = HAnimJoint442;

HAnimJoint HAnimJoint509 = createNode("HAnimJoint");
HAnimJoint509.name = "l_sternoclavicular";
HAnimJoint509.DEF = "hanim_l_sternoclavicular";
HAnimJoint509.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint509.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint509.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment510 = createNode("HAnimSegment");
HAnimSegment510.name = "l_clavicle";
HAnimSegment510.DEF = "hanim_l_clavicle";
Transform Transform511 = createNode("Transform");
Transform511.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Transform Transform512 = createNode("Transform");
//Empty Transform
Shape Shape513 = createNode("Shape");
Shape513.USE = "HAnimJointShape";
Transform512.child = new undefined();

Transform512.child[0] = Shape513;

Transform511.children = new MFNode();

Transform511.children[0] = Transform512;

HAnimSegment510.children = new MFNode();

HAnimSegment510.children[0] = Transform511;

Shape Shape514 = createNode("Shape");
LineSet LineSet515 = createNode("LineSet");
LineSet515.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate516 = createNode("Coordinate");
Coordinate516.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet515.coord = Coordinate516;

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA ColorRGBA517 = createNode("ColorRGBA");
ColorRGBA517.USE = "HAnimSegmentLineColorRGBA";
LineSet515.color = ColorRGBA517;

Shape514.geometry = LineSet515;

HAnimSegment510.children[1] = Shape514;

HAnimJoint509.children = new MFNode();

HAnimJoint509.children[0] = HAnimSegment510;

HAnimJoint HAnimJoint518 = createNode("HAnimJoint");
HAnimJoint518.name = "l_acromioclavicular";
HAnimJoint518.DEF = "hanim_l_acromioclavicular";
HAnimJoint518.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint518.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint518.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment519 = createNode("HAnimSegment");
HAnimSegment519.name = "l_scapula";
HAnimSegment519.DEF = "hanim_l_scapula";
Transform Transform520 = createNode("Transform");
Transform520.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Transform Transform521 = createNode("Transform");
//Empty Transform
Shape Shape522 = createNode("Shape");
Shape522.USE = "HAnimJointShape";
Transform521.child = new undefined();

Transform521.child[0] = Shape522;

Transform520.children = new MFNode();

Transform520.children[0] = Transform521;

HAnimSegment519.children = new MFNode();

HAnimSegment519.children[0] = Transform520;

Shape Shape523 = createNode("Shape");
LineSet LineSet524 = createNode("LineSet");
LineSet524.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate525 = createNode("Coordinate");
Coordinate525.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet524.coord = Coordinate525;

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA ColorRGBA526 = createNode("ColorRGBA");
ColorRGBA526.USE = "HAnimSegmentLineColorRGBA";
LineSet524.color = ColorRGBA526;

Shape523.geometry = LineSet524;

HAnimSegment519.children[1] = Shape523;

HAnimSite HAnimSite527 = createNode("HAnimSite");
HAnimSite527.name = "l_bideltoid";
HAnimSite527.DEF = "hanim_l_bideltoid";
TouchSensor TouchSensor528 = createNode("TouchSensor");
TouchSensor528.description = "HAnimSite l_bideltoid";
HAnimSite527.children = new MFNode();

HAnimSite527.children[0] = TouchSensor528;

Shape Shape529 = createNode("Shape");
Shape529.USE = "HAnimSiteShape";
HAnimSite527.children[1] = Shape529;

HAnimSegment519.children[2] = HAnimSite527;

HAnimSite HAnimSite530 = createNode("HAnimSite");
HAnimSite530.name = "l_humeral_lateral_epicondyles";
HAnimSite530.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite530.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor531 = createNode("TouchSensor");
TouchSensor531.description = "HAnimSite l_humeral_lateral_epicondyles";
HAnimSite530.children = new MFNode();

HAnimSite530.children[0] = TouchSensor531;

Shape Shape532 = createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530.children[1] = Shape532;

HAnimSegment519.children[3] = HAnimSite530;

HAnimJoint518.children = new MFNode();

HAnimJoint518.children[0] = HAnimSegment519;

HAnimJoint HAnimJoint533 = createNode("HAnimJoint");
HAnimJoint533.name = "l_shoulder";
HAnimJoint533.DEF = "hanim_l_shoulder";
HAnimJoint533.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint533.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint533.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment534 = createNode("HAnimSegment");
HAnimSegment534.name = "l_upperarm";
HAnimSegment534.DEF = "hanim_l_upperarm";
Transform Transform535 = createNode("Transform");
Transform535.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform536 = createNode("Transform");
//Empty Transform
Shape Shape537 = createNode("Shape");
Shape537.USE = "HAnimJointShape";
Transform536.child = new undefined();

Transform536.child[0] = Shape537;

Transform535.children = new MFNode();

Transform535.children[0] = Transform536;

HAnimSegment534.children = new MFNode();

HAnimSegment534.children[0] = Transform535;

Shape Shape538 = createNode("Shape");
LineSet LineSet539 = createNode("LineSet");
LineSet539.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate540 = createNode("Coordinate");
Coordinate540.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet539.coord = Coordinate540;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA541 = createNode("ColorRGBA");
ColorRGBA541.USE = "HAnimSegmentLineColorRGBA";
LineSet539.color = ColorRGBA541;

Shape538.geometry = LineSet539;

HAnimSegment534.children[1] = Shape538;

HAnimSite HAnimSite542 = createNode("HAnimSite");
HAnimSite542.name = "l_humeral_medial_epicondyles";
HAnimSite542.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite542.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor543 = createNode("TouchSensor");
TouchSensor543.description = "HAnimSite l_humeral_medial_epicondyles";
HAnimSite542.children = new MFNode();

HAnimSite542.children[0] = TouchSensor543;

Shape Shape544 = createNode("Shape");
Shape544.USE = "HAnimSiteShape";
HAnimSite542.children[1] = Shape544;

HAnimSegment534.children[2] = HAnimSite542;

HAnimSite HAnimSite545 = createNode("HAnimSite");
HAnimSite545.name = "l_olecranon";
HAnimSite545.DEF = "hanim_l_olecranon";
HAnimSite545.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor546 = createNode("TouchSensor");
TouchSensor546.description = "HAnimSite l_olecranon";
HAnimSite545.children = new MFNode();

HAnimSite545.children[0] = TouchSensor546;

Shape Shape547 = createNode("Shape");
Shape547.USE = "HAnimSiteShape";
HAnimSite545.children[1] = Shape547;

HAnimSegment534.children[3] = HAnimSite545;

HAnimSite HAnimSite548 = createNode("HAnimSite");
HAnimSite548.name = "l_radial_styloid";
HAnimSite548.DEF = "hanim_l_radial_styloid";
HAnimSite548.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor549 = createNode("TouchSensor");
TouchSensor549.description = "HAnimSite l_radial_styloid";
HAnimSite548.children = new MFNode();

HAnimSite548.children[0] = TouchSensor549;

Shape Shape550 = createNode("Shape");
Shape550.USE = "HAnimSiteShape";
HAnimSite548.children[1] = Shape550;

HAnimSegment534.children[4] = HAnimSite548;

HAnimSite HAnimSite551 = createNode("HAnimSite");
HAnimSite551.name = "l_radiale";
HAnimSite551.DEF = "hanim_l_radiale";
HAnimSite551.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor552 = createNode("TouchSensor");
TouchSensor552.description = "HAnimSite l_radiale";
HAnimSite551.children = new MFNode();

HAnimSite551.children[0] = TouchSensor552;

Shape Shape553 = createNode("Shape");
Shape553.USE = "HAnimSiteShape";
HAnimSite551.children[1] = Shape553;

HAnimSegment534.children[5] = HAnimSite551;

HAnimJoint533.children = new MFNode();

HAnimJoint533.children[0] = HAnimSegment534;

HAnimJoint HAnimJoint554 = createNode("HAnimJoint");
HAnimJoint554.name = "l_elbow";
HAnimJoint554.DEF = "hanim_l_elbow";
HAnimJoint554.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint554.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint554.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment555 = createNode("HAnimSegment");
HAnimSegment555.name = "l_forearm";
HAnimSegment555.DEF = "hanim_l_forearm";
Transform Transform556 = createNode("Transform");
Transform556.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform557 = createNode("Transform");
//Empty Transform
Shape Shape558 = createNode("Shape");
Shape558.USE = "HAnimJointShape";
Transform557.child = new undefined();

Transform557.child[0] = Shape558;

Transform556.children = new MFNode();

Transform556.children[0] = Transform557;

HAnimSegment555.children = new MFNode();

HAnimSegment555.children[0] = Transform556;

Shape Shape559 = createNode("Shape");
LineSet LineSet560 = createNode("LineSet");
LineSet560.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate561 = createNode("Coordinate");
Coordinate561.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet560.coord = Coordinate561;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA562 = createNode("ColorRGBA");
ColorRGBA562.USE = "HAnimSegmentLineColorRGBA";
LineSet560.color = ColorRGBA562;

Shape559.geometry = LineSet560;

HAnimSegment555.children[1] = Shape559;

HAnimSite HAnimSite563 = createNode("HAnimSite");
HAnimSite563.name = "l_ulnar_styloid";
HAnimSite563.DEF = "hanim_l_ulnar_styloid";
HAnimSite563.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor564 = createNode("TouchSensor");
TouchSensor564.description = "HAnimSite l_ulnar_styloid";
HAnimSite563.children = new MFNode();

HAnimSite563.children[0] = TouchSensor564;

Shape Shape565 = createNode("Shape");
Shape565.USE = "HAnimSiteShape";
HAnimSite563.children[1] = Shape565;

HAnimSegment555.children[2] = HAnimSite563;

HAnimJoint554.children = new MFNode();

HAnimJoint554.children[0] = HAnimSegment555;

HAnimJoint HAnimJoint566 = createNode("HAnimJoint");
HAnimJoint566.name = "l_radiocarpal";
HAnimJoint566.DEF = "hanim_l_radiocarpal";
HAnimJoint566.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint566.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint566.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment567 = createNode("HAnimSegment");
HAnimSegment567.name = "l_carpal";
HAnimSegment567.DEF = "hanim_l_carpal";
Transform Transform568 = createNode("Transform");
Transform568.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform568.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform568.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
Transform Transform569 = createNode("Transform");
Transform569.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
Shape Shape570 = createNode("Shape");
Shape570.USE = "HAnimJointShape";
Transform569.child = new undefined();

Transform569.child[0] = Shape570;

Transform568.children = new MFNode();

Transform568.children[0] = Transform569;

HAnimSegment567.children = new MFNode();

HAnimSegment567.children[0] = Transform568;

Shape Shape571 = createNode("Shape");
LineSet LineSet572 = createNode("LineSet");
LineSet572.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate573 = createNode("Coordinate");
Coordinate573.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet572.coord = Coordinate573;

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA574 = createNode("ColorRGBA");
ColorRGBA574.USE = "HAnimSegmentLineColorRGBA";
LineSet572.color = ColorRGBA574;

Shape571.geometry = LineSet572;

HAnimSegment567.children[1] = Shape571;

Shape Shape575 = createNode("Shape");
LineSet LineSet576 = createNode("LineSet");
LineSet576.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate577 = createNode("Coordinate");
Coordinate577.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet576.coord = Coordinate577;

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA578 = createNode("ColorRGBA");
ColorRGBA578.USE = "HAnimSegmentLineColorRGBA";
LineSet576.color = ColorRGBA578;

Shape575.geometry = LineSet576;

HAnimSegment567.children[2] = Shape575;

HAnimSite HAnimSite579 = createNode("HAnimSite");
HAnimSite579.name = "l_metacarpal_phalanx_2";
HAnimSite579.DEF = "hanim_l_metacarpal_phalanx_2";
HAnimSite579.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor580 = createNode("TouchSensor");
TouchSensor580.description = "HAnimSite l_metacarpal_phalanx_2";
HAnimSite579.children = new MFNode();

HAnimSite579.children[0] = TouchSensor580;

Shape Shape581 = createNode("Shape");
Shape581.USE = "HAnimSiteShape";
HAnimSite579.children[1] = Shape581;

HAnimSegment567.children[3] = HAnimSite579;

Shape Shape582 = createNode("Shape");
LineSet LineSet583 = createNode("LineSet");
LineSet583.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate584 = createNode("Coordinate");
Coordinate584.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet583.coord = Coordinate584;

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA585 = createNode("ColorRGBA");
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA";
LineSet583.color = ColorRGBA585;

Shape582.geometry = LineSet583;

HAnimSegment567.children[4] = Shape582;

HAnimSite HAnimSite586 = createNode("HAnimSite");
HAnimSite586.name = "l_metacarpal_phalanx_3";
HAnimSite586.DEF = "hanim_l_metacarpal_phalanx_3";
TouchSensor TouchSensor587 = createNode("TouchSensor");
TouchSensor587.description = "HAnimSite l_metacarpal_phalanx_3";
HAnimSite586.children = new MFNode();

HAnimSite586.children[0] = TouchSensor587;

Shape Shape588 = createNode("Shape");
Shape588.USE = "HAnimSiteShape";
HAnimSite586.children[1] = Shape588;

HAnimSegment567.children[5] = HAnimSite586;

Shape Shape589 = createNode("Shape");
LineSet LineSet590 = createNode("LineSet");
LineSet590.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate591 = createNode("Coordinate");
Coordinate591.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet590.coord = Coordinate591;

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA592 = createNode("ColorRGBA");
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA";
LineSet590.color = ColorRGBA592;

Shape589.geometry = LineSet590;

HAnimSegment567.children[6] = Shape589;

Shape Shape593 = createNode("Shape");
LineSet LineSet594 = createNode("LineSet");
LineSet594.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate595 = createNode("Coordinate");
Coordinate595.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet594.coord = Coordinate595;

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA596 = createNode("ColorRGBA");
ColorRGBA596.USE = "HAnimSegmentLineColorRGBA";
LineSet594.color = ColorRGBA596;

Shape593.geometry = LineSet594;

HAnimSegment567.children[7] = Shape593;

HAnimSite HAnimSite597 = createNode("HAnimSite");
HAnimSite597.name = "l_metacarpal_phalanx_5";
HAnimSite597.DEF = "hanim_l_metacarpal_phalanx_5";
HAnimSite597.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor598 = createNode("TouchSensor");
TouchSensor598.description = "HAnimSite l_metacarpal_phalanx_5";
HAnimSite597.children = new MFNode();

HAnimSite597.children[0] = TouchSensor598;

Shape Shape599 = createNode("Shape");
Shape599.USE = "HAnimSiteShape";
HAnimSite597.children[1] = Shape599;

HAnimSegment567.children[8] = HAnimSite597;

HAnimJoint566.children = new MFNode();

HAnimJoint566.children[0] = HAnimSegment567;

HAnimJoint HAnimJoint600 = createNode("HAnimJoint");
HAnimJoint600.name = "l_carpometacarpal_1";
HAnimJoint600.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint600.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint600.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint600.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment601 = createNode("HAnimSegment");
HAnimSegment601.name = "l_metacarpal_1";
HAnimSegment601.DEF = "hanim_l_metacarpal_1";
Transform Transform602 = createNode("Transform");
Transform602.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Transform Transform603 = createNode("Transform");
//Empty Transform
Shape Shape604 = createNode("Shape");
Shape604.USE = "HAnimJointShape";
Transform603.child = new undefined();

Transform603.child[0] = Shape604;

Transform602.children = new MFNode();

Transform602.children[0] = Transform603;

HAnimSegment601.children = new MFNode();

HAnimSegment601.children[0] = Transform602;

Shape Shape605 = createNode("Shape");
LineSet LineSet606 = createNode("LineSet");
LineSet606.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate607 = createNode("Coordinate");
Coordinate607.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet606.coord = Coordinate607;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA608 = createNode("ColorRGBA");
ColorRGBA608.USE = "HAnimSegmentLineColorRGBA";
LineSet606.color = ColorRGBA608;

Shape605.geometry = LineSet606;

HAnimSegment601.children[1] = Shape605;

HAnimJoint600.children = new MFNode();

HAnimJoint600.children[0] = HAnimSegment601;

HAnimJoint HAnimJoint609 = createNode("HAnimJoint");
HAnimJoint609.name = "l_metacarpophalangeal_1";
HAnimJoint609.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint609.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint609.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint609.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment610 = createNode("HAnimSegment");
HAnimSegment610.name = "l_carpal_proximal_phalanx_1";
HAnimSegment610.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform611 = createNode("Transform");
Transform611.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform612 = createNode("Transform");
//Empty Transform
Shape Shape613 = createNode("Shape");
Shape613.USE = "HAnimJointShape";
Transform612.child = new undefined();

Transform612.child[0] = Shape613;

Transform611.children = new MFNode();

Transform611.children[0] = Transform612;

HAnimSegment610.children = new MFNode();

HAnimSegment610.children[0] = Transform611;

Shape Shape614 = createNode("Shape");
LineSet LineSet615 = createNode("LineSet");
LineSet615.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate616 = createNode("Coordinate");
Coordinate616.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet615.coord = Coordinate616;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA617 = createNode("ColorRGBA");
ColorRGBA617.USE = "HAnimSegmentLineColorRGBA";
LineSet615.color = ColorRGBA617;

Shape614.geometry = LineSet615;

HAnimSegment610.children[1] = Shape614;

HAnimSite HAnimSite618 = createNode("HAnimSite");
HAnimSite618.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite618.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor619 = createNode("TouchSensor");
TouchSensor619.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite618.children = new MFNode();

HAnimSite618.children[0] = TouchSensor619;

Shape Shape620 = createNode("Shape");
Shape620.USE = "HAnimSiteShape";
HAnimSite618.children[1] = Shape620;

HAnimSegment610.children[2] = HAnimSite618;

HAnimJoint609.children = new MFNode();

HAnimJoint609.children[0] = HAnimSegment610;

HAnimJoint HAnimJoint621 = createNode("HAnimJoint");
HAnimJoint621.name = "l_carpal_interphalangeal_1";
HAnimJoint621.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint621.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint621.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint621.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint609.children[1] = HAnimJoint621;

HAnimJoint600.children[1] = HAnimJoint609;

HAnimJoint566.children[1] = HAnimJoint600;

HAnimJoint HAnimJoint622 = createNode("HAnimJoint");
HAnimJoint622.name = "l_carpometacarpal_2";
HAnimJoint622.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint622.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint622.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint622.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment623 = createNode("HAnimSegment");
HAnimSegment623.name = "l_metacarpal_2";
HAnimSegment623.DEF = "hanim_l_metacarpal_2";
Transform Transform624 = createNode("Transform");
Transform624.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
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
Coordinate629.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet628.coord = Coordinate629;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA630 = createNode("ColorRGBA");
ColorRGBA630.USE = "HAnimSegmentLineColorRGBA";
LineSet628.color = ColorRGBA630;

Shape627.geometry = LineSet628;

HAnimSegment623.children[1] = Shape627;

HAnimJoint622.children = new MFNode();

HAnimJoint622.children[0] = HAnimSegment623;

HAnimJoint HAnimJoint631 = createNode("HAnimJoint");
HAnimJoint631.name = "l_metacarpophalangeal_2";
HAnimJoint631.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint631.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint631.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint631.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment632 = createNode("HAnimSegment");
HAnimSegment632.name = "l_carpal_proximal_phalanx_2";
HAnimSegment632.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform633 = createNode("Transform");
Transform633.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
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
Coordinate638.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet637.coord = Coordinate638;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA639 = createNode("ColorRGBA");
ColorRGBA639.USE = "HAnimSegmentLineColorRGBA";
LineSet637.color = ColorRGBA639;

Shape636.geometry = LineSet637;

HAnimSegment632.children[1] = Shape636;

HAnimJoint631.children = new MFNode();

HAnimJoint631.children[0] = HAnimSegment632;

HAnimJoint HAnimJoint640 = createNode("HAnimJoint");
HAnimJoint640.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint640.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint640.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint640.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment641 = createNode("HAnimSegment");
HAnimSegment641.name = "l_carpal_middle_phalanx_2";
HAnimSegment641.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform642 = createNode("Transform");
Transform642.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
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
Coordinate647.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet646.coord = Coordinate647;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA648 = createNode("ColorRGBA");
ColorRGBA648.USE = "HAnimSegmentLineColorRGBA";
LineSet646.color = ColorRGBA648;

Shape645.geometry = LineSet646;

HAnimSegment641.children[1] = Shape645;

HAnimSite HAnimSite649 = createNode("HAnimSite");
HAnimSite649.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite649.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor650 = createNode("TouchSensor");
TouchSensor650.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite649.children = new MFNode();

HAnimSite649.children[0] = TouchSensor650;

Shape Shape651 = createNode("Shape");
Shape651.USE = "HAnimSiteShape";
HAnimSite649.children[1] = Shape651;

HAnimSegment641.children[2] = HAnimSite649;

HAnimSite HAnimSite652 = createNode("HAnimSite");
HAnimSite652.name = "l_dactylion";
HAnimSite652.DEF = "hanim_l_dactylion";
HAnimSite652.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor653 = createNode("TouchSensor");
TouchSensor653.description = "HAnimSite l_dactylion";
HAnimSite652.children = new MFNode();

HAnimSite652.children[0] = TouchSensor653;

Shape Shape654 = createNode("Shape");
Shape654.USE = "HAnimSiteShape";
HAnimSite652.children[1] = Shape654;

HAnimSegment641.children[3] = HAnimSite652;

HAnimJoint640.children = new MFNode();

HAnimJoint640.children[0] = HAnimSegment641;

HAnimJoint HAnimJoint655 = createNode("HAnimJoint");
HAnimJoint655.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint655.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint655.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint655.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint655.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[1] = HAnimJoint655;

HAnimJoint631.children[1] = HAnimJoint640;

HAnimJoint622.children[1] = HAnimJoint631;

HAnimJoint566.children[2] = HAnimJoint622;

HAnimJoint HAnimJoint656 = createNode("HAnimJoint");
HAnimJoint656.name = "l_carpometacarpal_3";
HAnimJoint656.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint656.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint656.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint656.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment657 = createNode("HAnimSegment");
HAnimSegment657.name = "l_metacarpal_3";
HAnimSegment657.DEF = "hanim_l_metacarpal_3";
Transform Transform658 = createNode("Transform");
Transform658.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
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
Coordinate663.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet662.coord = Coordinate663;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA664 = createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimSegment657.children[1] = Shape661;

HAnimJoint656.children = new MFNode();

HAnimJoint656.children[0] = HAnimSegment657;

HAnimJoint HAnimJoint665 = createNode("HAnimJoint");
HAnimJoint665.name = "l_metacarpophalangeal_3";
HAnimJoint665.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint665.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint665.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint665.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment666 = createNode("HAnimSegment");
HAnimSegment666.name = "l_carpal_proximal_phalanx_3";
HAnimSegment666.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform667 = createNode("Transform");
Transform667.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Transform Transform668 = createNode("Transform");
//Empty Transform
Shape Shape669 = createNode("Shape");
Shape669.USE = "HAnimJointShape";
Transform668.child = new undefined();

Transform668.child[0] = Shape669;

Transform667.children = new MFNode();

Transform667.children[0] = Transform668;

HAnimSegment666.children = new MFNode();

HAnimSegment666.children[0] = Transform667;

Shape Shape670 = createNode("Shape");
LineSet LineSet671 = createNode("LineSet");
LineSet671.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate672 = createNode("Coordinate");
Coordinate672.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet671.coord = Coordinate672;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA673 = createNode("ColorRGBA");
ColorRGBA673.USE = "HAnimSegmentLineColorRGBA";
LineSet671.color = ColorRGBA673;

Shape670.geometry = LineSet671;

HAnimSegment666.children[1] = Shape670;

HAnimJoint665.children = new MFNode();

HAnimJoint665.children[0] = HAnimSegment666;

HAnimJoint HAnimJoint674 = createNode("HAnimJoint");
HAnimJoint674.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint674.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint674.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint674.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint674.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment675 = createNode("HAnimSegment");
HAnimSegment675.name = "l_carpal_middle_phalanx_3";
HAnimSegment675.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform676 = createNode("Transform");
Transform676.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
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
Coordinate681.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet680.coord = Coordinate681;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA682 = createNode("ColorRGBA");
ColorRGBA682.USE = "HAnimSegmentLineColorRGBA";
LineSet680.color = ColorRGBA682;

Shape679.geometry = LineSet680;

HAnimSegment675.children[1] = Shape679;

HAnimSite HAnimSite683 = createNode("HAnimSite");
HAnimSite683.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite683.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor684 = createNode("TouchSensor");
TouchSensor684.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite683.children = new MFNode();

HAnimSite683.children[0] = TouchSensor684;

Shape Shape685 = createNode("Shape");
Shape685.USE = "HAnimSiteShape";
HAnimSite683.children[1] = Shape685;

HAnimSegment675.children[2] = HAnimSite683;

HAnimJoint674.children = new MFNode();

HAnimJoint674.children[0] = HAnimSegment675;

HAnimJoint HAnimJoint686 = createNode("HAnimJoint");
HAnimJoint686.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint686.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint686.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint686.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint686.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint674.children[1] = HAnimJoint686;

HAnimJoint665.children[1] = HAnimJoint674;

HAnimJoint656.children[1] = HAnimJoint665;

HAnimJoint566.children[3] = HAnimJoint656;

HAnimJoint HAnimJoint687 = createNode("HAnimJoint");
HAnimJoint687.name = "l_carpometacarpal_4";
HAnimJoint687.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint687.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint687.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint687.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment688 = createNode("HAnimSegment");
HAnimSegment688.name = "l_metacarpal_4";
HAnimSegment688.DEF = "hanim_l_metacarpal_4";
Transform Transform689 = createNode("Transform");
Transform689.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
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
Coordinate694.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet693.coord = Coordinate694;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA695 = createNode("ColorRGBA");
ColorRGBA695.USE = "HAnimSegmentLineColorRGBA";
LineSet693.color = ColorRGBA695;

Shape692.geometry = LineSet693;

HAnimSegment688.children[1] = Shape692;

HAnimJoint687.children = new MFNode();

HAnimJoint687.children[0] = HAnimSegment688;

HAnimJoint HAnimJoint696 = createNode("HAnimJoint");
HAnimJoint696.name = "l_metacarpophalangeal_4";
HAnimJoint696.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint696.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint696.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment697 = createNode("HAnimSegment");
HAnimSegment697.name = "l_carpal_proximal_phalanx_4";
HAnimSegment697.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform698 = createNode("Transform");
Transform698.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform699 = createNode("Transform");
//Empty Transform
Shape Shape700 = createNode("Shape");
Shape700.USE = "HAnimJointShape";
Transform699.child = new undefined();

Transform699.child[0] = Shape700;

Transform698.children = new MFNode();

Transform698.children[0] = Transform699;

HAnimSegment697.children = new MFNode();

HAnimSegment697.children[0] = Transform698;

Shape Shape701 = createNode("Shape");
LineSet LineSet702 = createNode("LineSet");
LineSet702.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate703 = createNode("Coordinate");
Coordinate703.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet702.coord = Coordinate703;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA704 = createNode("ColorRGBA");
ColorRGBA704.USE = "HAnimSegmentLineColorRGBA";
LineSet702.color = ColorRGBA704;

Shape701.geometry = LineSet702;

HAnimSegment697.children[1] = Shape701;

HAnimJoint696.children = new MFNode();

HAnimJoint696.children[0] = HAnimSegment697;

HAnimJoint HAnimJoint705 = createNode("HAnimJoint");
HAnimJoint705.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint705.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint705.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint705.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint705.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment706 = createNode("HAnimSegment");
HAnimSegment706.name = "l_carpal_middle_phalanx_4";
HAnimSegment706.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform707 = createNode("Transform");
Transform707.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
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
Coordinate712.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet711.coord = Coordinate712;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA713 = createNode("ColorRGBA");
ColorRGBA713.USE = "HAnimSegmentLineColorRGBA";
LineSet711.color = ColorRGBA713;

Shape710.geometry = LineSet711;

HAnimSegment706.children[1] = Shape710;

HAnimSite HAnimSite714 = createNode("HAnimSite");
HAnimSite714.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite714.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor715 = createNode("TouchSensor");
TouchSensor715.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite714.children = new MFNode();

HAnimSite714.children[0] = TouchSensor715;

Shape Shape716 = createNode("Shape");
Shape716.USE = "HAnimSiteShape";
HAnimSite714.children[1] = Shape716;

HAnimSegment706.children[2] = HAnimSite714;

HAnimJoint705.children = new MFNode();

HAnimJoint705.children[0] = HAnimSegment706;

HAnimJoint HAnimJoint717 = createNode("HAnimJoint");
HAnimJoint717.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint717.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint717.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint717.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint717.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint705.children[1] = HAnimJoint717;

HAnimJoint696.children[1] = HAnimJoint705;

HAnimJoint687.children[1] = HAnimJoint696;

HAnimJoint566.children[4] = HAnimJoint687;

HAnimJoint HAnimJoint718 = createNode("HAnimJoint");
HAnimJoint718.name = "l_carpometacarpal_5";
HAnimJoint718.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint718.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint718.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint718.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment719 = createNode("HAnimSegment");
HAnimSegment719.name = "l_metacarpal_5";
HAnimSegment719.DEF = "hanim_l_metacarpal_5";
Transform Transform720 = createNode("Transform");
Transform720.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
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
Coordinate725.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet724.coord = Coordinate725;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA726 = createNode("ColorRGBA");
ColorRGBA726.USE = "HAnimSegmentLineColorRGBA";
LineSet724.color = ColorRGBA726;

Shape723.geometry = LineSet724;

HAnimSegment719.children[1] = Shape723;

HAnimJoint718.children = new MFNode();

HAnimJoint718.children[0] = HAnimSegment719;

HAnimJoint HAnimJoint727 = createNode("HAnimJoint");
HAnimJoint727.name = "l_metacarpophalangeal_5";
HAnimJoint727.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint727.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint727.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint727.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment728 = createNode("HAnimSegment");
HAnimSegment728.name = "l_carpal_proximal_phalanx_5";
HAnimSegment728.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform729 = createNode("Transform");
Transform729.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
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
Coordinate734.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet733.coord = Coordinate734;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA735 = createNode("ColorRGBA");
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA";
LineSet733.color = ColorRGBA735;

Shape732.geometry = LineSet733;

HAnimSegment728.children[1] = Shape732;

HAnimJoint727.children = new MFNode();

HAnimJoint727.children[0] = HAnimSegment728;

HAnimJoint HAnimJoint736 = createNode("HAnimJoint");
HAnimJoint736.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint736.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint736.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint736.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint736.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment737 = createNode("HAnimSegment");
HAnimSegment737.name = "l_carpal_middle_phalanx_5";
HAnimSegment737.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform738 = createNode("Transform");
Transform738.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform739 = createNode("Transform");
//Empty Transform
Shape Shape740 = createNode("Shape");
Shape740.USE = "HAnimJointShape";
Transform739.child = new undefined();

Transform739.child[0] = Shape740;

Transform738.children = new MFNode();

Transform738.children[0] = Transform739;

HAnimSegment737.children = new MFNode();

HAnimSegment737.children[0] = Transform738;

Shape Shape741 = createNode("Shape");
LineSet LineSet742 = createNode("LineSet");
LineSet742.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate743 = createNode("Coordinate");
Coordinate743.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet742.coord = Coordinate743;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA744 = createNode("ColorRGBA");
ColorRGBA744.USE = "HAnimSegmentLineColorRGBA";
LineSet742.color = ColorRGBA744;

Shape741.geometry = LineSet742;

HAnimSegment737.children[1] = Shape741;

HAnimSite HAnimSite745 = createNode("HAnimSite");
HAnimSite745.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite745.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor746 = createNode("TouchSensor");
TouchSensor746.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite745.children = new MFNode();

HAnimSite745.children[0] = TouchSensor746;

Shape Shape747 = createNode("Shape");
Shape747.USE = "HAnimSiteShape";
HAnimSite745.children[1] = Shape747;

HAnimSegment737.children[2] = HAnimSite745;

HAnimJoint736.children = new MFNode();

HAnimJoint736.children[0] = HAnimSegment737;

HAnimJoint HAnimJoint748 = createNode("HAnimJoint");
HAnimJoint748.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint748.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint748.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint748.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint748.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint736.children[1] = HAnimJoint748;

HAnimJoint727.children[1] = HAnimJoint736;

HAnimJoint718.children[1] = HAnimJoint727;

HAnimJoint566.children[5] = HAnimJoint718;

HAnimJoint554.children[1] = HAnimJoint566;

HAnimJoint533.children[1] = HAnimJoint554;

HAnimJoint518.children[1] = HAnimJoint533;

HAnimJoint509.children[1] = HAnimJoint518;

HAnimJoint395.children[2] = HAnimJoint509;

HAnimJoint HAnimJoint749 = createNode("HAnimJoint");
HAnimJoint749.name = "r_sternoclavicular";
HAnimJoint749.DEF = "hanim_r_sternoclavicular";
HAnimJoint749.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint749.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint749.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment750 = createNode("HAnimSegment");
HAnimSegment750.name = "r_clavicle";
HAnimSegment750.DEF = "hanim_r_clavicle";
Transform Transform751 = createNode("Transform");
Transform751.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
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
Coordinate756.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet755.coord = Coordinate756;

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA ColorRGBA757 = createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSegmentLineColorRGBA";
LineSet755.color = ColorRGBA757;

Shape754.geometry = LineSet755;

HAnimSegment750.children[1] = Shape754;

HAnimJoint749.children = new MFNode();

HAnimJoint749.children[0] = HAnimSegment750;

HAnimJoint HAnimJoint758 = createNode("HAnimJoint");
HAnimJoint758.name = "r_acromioclavicular";
HAnimJoint758.DEF = "hanim_r_acromioclavicular";
HAnimJoint758.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint758.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment759 = createNode("HAnimSegment");
HAnimSegment759.name = "r_scapula";
HAnimSegment759.DEF = "hanim_r_scapula";
Transform Transform760 = createNode("Transform");
Transform760.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform761 = createNode("Transform");
//Empty Transform
Shape Shape762 = createNode("Shape");
Shape762.USE = "HAnimJointShape";
Transform761.child = new undefined();

Transform761.child[0] = Shape762;

Transform760.children = new MFNode();

Transform760.children[0] = Transform761;

HAnimSegment759.children = new MFNode();

HAnimSegment759.children[0] = Transform760;

Shape Shape763 = createNode("Shape");
LineSet LineSet764 = createNode("LineSet");
LineSet764.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate765 = createNode("Coordinate");
Coordinate765.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet764.coord = Coordinate765;

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA ColorRGBA766 = createNode("ColorRGBA");
ColorRGBA766.USE = "HAnimSegmentLineColorRGBA";
LineSet764.color = ColorRGBA766;

Shape763.geometry = LineSet764;

HAnimSegment759.children[1] = Shape763;

HAnimSite HAnimSite767 = createNode("HAnimSite");
HAnimSite767.name = "r_bideltoid";
HAnimSite767.DEF = "hanim_r_bideltoid";
TouchSensor TouchSensor768 = createNode("TouchSensor");
TouchSensor768.description = "HAnimSite r_bideltoid";
HAnimSite767.children = new MFNode();

HAnimSite767.children[0] = TouchSensor768;

Shape Shape769 = createNode("Shape");
Shape769.USE = "HAnimSiteShape";
HAnimSite767.children[1] = Shape769;

HAnimSegment759.children[2] = HAnimSite767;

HAnimSite HAnimSite770 = createNode("HAnimSite");
HAnimSite770.name = "r_humeral_lateral_epicondyles";
HAnimSite770.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite770.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor771 = createNode("TouchSensor");
TouchSensor771.description = "HAnimSite r_humeral_lateral_epicondyles";
HAnimSite770.children = new MFNode();

HAnimSite770.children[0] = TouchSensor771;

Shape Shape772 = createNode("Shape");
Shape772.USE = "HAnimSiteShape";
HAnimSite770.children[1] = Shape772;

HAnimSegment759.children[3] = HAnimSite770;

HAnimJoint758.children = new MFNode();

HAnimJoint758.children[0] = HAnimSegment759;

HAnimJoint HAnimJoint773 = createNode("HAnimJoint");
HAnimJoint773.name = "r_shoulder";
HAnimJoint773.DEF = "hanim_r_shoulder";
HAnimJoint773.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint773.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint773.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment774 = createNode("HAnimSegment");
HAnimSegment774.name = "r_upperarm";
HAnimSegment774.DEF = "hanim_r_upperarm";
Transform Transform775 = createNode("Transform");
Transform775.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
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
Coordinate780.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet779.coord = Coordinate780;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA781 = createNode("ColorRGBA");
ColorRGBA781.USE = "HAnimSegmentLineColorRGBA";
LineSet779.color = ColorRGBA781;

Shape778.geometry = LineSet779;

HAnimSegment774.children[1] = Shape778;

HAnimSite HAnimSite782 = createNode("HAnimSite");
HAnimSite782.name = "r_humeral_medial_epicondyles";
HAnimSite782.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite782.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor783 = createNode("TouchSensor");
TouchSensor783.description = "HAnimSite r_humeral_medial_epicondyles";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = TouchSensor783;

Shape Shape784 = createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782.children[1] = Shape784;

HAnimSegment774.children[2] = HAnimSite782;

HAnimSite HAnimSite785 = createNode("HAnimSite");
HAnimSite785.name = "r_olecranon";
HAnimSite785.DEF = "hanim_r_olecranon";
HAnimSite785.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor786 = createNode("TouchSensor");
TouchSensor786.description = "HAnimSite r_olecranon";
HAnimSite785.children = new MFNode();

HAnimSite785.children[0] = TouchSensor786;

Shape Shape787 = createNode("Shape");
Shape787.USE = "HAnimSiteShape";
HAnimSite785.children[1] = Shape787;

HAnimSegment774.children[3] = HAnimSite785;

HAnimSite HAnimSite788 = createNode("HAnimSite");
HAnimSite788.name = "r_radial_styloid";
HAnimSite788.DEF = "hanim_r_radial_styloid";
HAnimSite788.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor789 = createNode("TouchSensor");
TouchSensor789.description = "HAnimSite r_radial_styloid";
HAnimSite788.children = new MFNode();

HAnimSite788.children[0] = TouchSensor789;

Shape Shape790 = createNode("Shape");
Shape790.USE = "HAnimSiteShape";
HAnimSite788.children[1] = Shape790;

HAnimSegment774.children[4] = HAnimSite788;

HAnimSite HAnimSite791 = createNode("HAnimSite");
HAnimSite791.name = "r_radiale";
HAnimSite791.DEF = "hanim_r_radiale";
HAnimSite791.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor792 = createNode("TouchSensor");
TouchSensor792.description = "HAnimSite r_radiale";
HAnimSite791.children = new MFNode();

HAnimSite791.children[0] = TouchSensor792;

Shape Shape793 = createNode("Shape");
Shape793.USE = "HAnimSiteShape";
HAnimSite791.children[1] = Shape793;

HAnimSegment774.children[5] = HAnimSite791;

HAnimJoint773.children = new MFNode();

HAnimJoint773.children[0] = HAnimSegment774;

HAnimJoint HAnimJoint794 = createNode("HAnimJoint");
HAnimJoint794.name = "r_elbow";
HAnimJoint794.DEF = "hanim_r_elbow";
HAnimJoint794.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint794.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint794.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment795 = createNode("HAnimSegment");
HAnimSegment795.name = "r_forearm";
HAnimSegment795.DEF = "hanim_r_forearm";
Transform Transform796 = createNode("Transform");
Transform796.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform797 = createNode("Transform");
//Empty Transform
Shape Shape798 = createNode("Shape");
Shape798.USE = "HAnimJointShape";
Transform797.child = new undefined();

Transform797.child[0] = Shape798;

Transform796.children = new MFNode();

Transform796.children[0] = Transform797;

HAnimSegment795.children = new MFNode();

HAnimSegment795.children[0] = Transform796;

Shape Shape799 = createNode("Shape");
LineSet LineSet800 = createNode("LineSet");
LineSet800.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate801 = createNode("Coordinate");
Coordinate801.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet800.coord = Coordinate801;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA802 = createNode("ColorRGBA");
ColorRGBA802.USE = "HAnimSegmentLineColorRGBA";
LineSet800.color = ColorRGBA802;

Shape799.geometry = LineSet800;

HAnimSegment795.children[1] = Shape799;

HAnimSite HAnimSite803 = createNode("HAnimSite");
HAnimSite803.name = "r_ulnar_styloid";
HAnimSite803.DEF = "hanim_r_ulnar_styloid";
HAnimSite803.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor804 = createNode("TouchSensor");
TouchSensor804.description = "HAnimSite r_ulnar_styloid";
HAnimSite803.children = new MFNode();

HAnimSite803.children[0] = TouchSensor804;

Shape Shape805 = createNode("Shape");
Shape805.USE = "HAnimSiteShape";
HAnimSite803.children[1] = Shape805;

HAnimSegment795.children[2] = HAnimSite803;

HAnimJoint794.children = new MFNode();

HAnimJoint794.children[0] = HAnimSegment795;

HAnimJoint HAnimJoint806 = createNode("HAnimJoint");
HAnimJoint806.name = "r_radiocarpal";
HAnimJoint806.DEF = "hanim_r_radiocarpal";
HAnimJoint806.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint806.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint806.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment807 = createNode("HAnimSegment");
HAnimSegment807.name = "r_carpal";
HAnimSegment807.DEF = "hanim_r_carpal";
Transform Transform808 = createNode("Transform");
Transform808.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform808.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform808.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
Transform Transform809 = createNode("Transform");
Transform809.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
Shape Shape810 = createNode("Shape");
Shape810.USE = "HAnimJointShape";
Transform809.child = new undefined();

Transform809.child[0] = Shape810;

Transform808.children = new MFNode();

Transform808.children[0] = Transform809;

HAnimSegment807.children = new MFNode();

HAnimSegment807.children[0] = Transform808;

Shape Shape811 = createNode("Shape");
LineSet LineSet812 = createNode("LineSet");
LineSet812.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate813 = createNode("Coordinate");
Coordinate813.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet812.coord = Coordinate813;

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA814 = createNode("ColorRGBA");
ColorRGBA814.USE = "HAnimSegmentLineColorRGBA";
LineSet812.color = ColorRGBA814;

Shape811.geometry = LineSet812;

HAnimSegment807.children[1] = Shape811;

Shape Shape815 = createNode("Shape");
LineSet LineSet816 = createNode("LineSet");
LineSet816.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate817 = createNode("Coordinate");
Coordinate817.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet816.coord = Coordinate817;

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA818 = createNode("ColorRGBA");
ColorRGBA818.USE = "HAnimSegmentLineColorRGBA";
LineSet816.color = ColorRGBA818;

Shape815.geometry = LineSet816;

HAnimSegment807.children[2] = Shape815;

HAnimSite HAnimSite819 = createNode("HAnimSite");
HAnimSite819.name = "r_metacarpal_phalanx_2";
HAnimSite819.DEF = "hanim_r_metacarpal_phalanx_2";
HAnimSite819.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor820 = createNode("TouchSensor");
TouchSensor820.description = "HAnimSite r_metacarpal_phalanx_2";
HAnimSite819.children = new MFNode();

HAnimSite819.children[0] = TouchSensor820;

Shape Shape821 = createNode("Shape");
Shape821.USE = "HAnimSiteShape";
HAnimSite819.children[1] = Shape821;

HAnimSegment807.children[3] = HAnimSite819;

Shape Shape822 = createNode("Shape");
LineSet LineSet823 = createNode("LineSet");
LineSet823.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate824 = createNode("Coordinate");
Coordinate824.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet823.coord = Coordinate824;

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA825 = createNode("ColorRGBA");
ColorRGBA825.USE = "HAnimSegmentLineColorRGBA";
LineSet823.color = ColorRGBA825;

Shape822.geometry = LineSet823;

HAnimSegment807.children[4] = Shape822;

HAnimSite HAnimSite826 = createNode("HAnimSite");
HAnimSite826.name = "r_metacarpal_phalanx_3";
HAnimSite826.DEF = "hanim_r_metacarpal_phalanx_3";
TouchSensor TouchSensor827 = createNode("TouchSensor");
TouchSensor827.description = "HAnimSite r_metacarpal_phalanx_3";
HAnimSite826.children = new MFNode();

HAnimSite826.children[0] = TouchSensor827;

Shape Shape828 = createNode("Shape");
Shape828.USE = "HAnimSiteShape";
HAnimSite826.children[1] = Shape828;

HAnimSegment807.children[5] = HAnimSite826;

Shape Shape829 = createNode("Shape");
LineSet LineSet830 = createNode("LineSet");
LineSet830.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate831 = createNode("Coordinate");
Coordinate831.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet830.coord = Coordinate831;

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA832 = createNode("ColorRGBA");
ColorRGBA832.USE = "HAnimSegmentLineColorRGBA";
LineSet830.color = ColorRGBA832;

Shape829.geometry = LineSet830;

HAnimSegment807.children[6] = Shape829;

Shape Shape833 = createNode("Shape");
LineSet LineSet834 = createNode("LineSet");
LineSet834.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate835 = createNode("Coordinate");
Coordinate835.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet834.coord = Coordinate835;

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA836 = createNode("ColorRGBA");
ColorRGBA836.USE = "HAnimSegmentLineColorRGBA";
LineSet834.color = ColorRGBA836;

Shape833.geometry = LineSet834;

HAnimSegment807.children[7] = Shape833;

HAnimSite HAnimSite837 = createNode("HAnimSite");
HAnimSite837.name = "r_metacarpal_phalanx_5";
HAnimSite837.DEF = "hanim_r_metacarpal_phalanx_5";
HAnimSite837.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor838 = createNode("TouchSensor");
TouchSensor838.description = "HAnimSite r_metacarpal_phalanx_5";
HAnimSite837.children = new MFNode();

HAnimSite837.children[0] = TouchSensor838;

Shape Shape839 = createNode("Shape");
Shape839.USE = "HAnimSiteShape";
HAnimSite837.children[1] = Shape839;

HAnimSegment807.children[8] = HAnimSite837;

HAnimJoint806.children = new MFNode();

HAnimJoint806.children[0] = HAnimSegment807;

HAnimJoint HAnimJoint840 = createNode("HAnimJoint");
HAnimJoint840.name = "r_carpometacarpal_1";
HAnimJoint840.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint840.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint840.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint840.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment841 = createNode("HAnimSegment");
HAnimSegment841.name = "r_metacarpal_1";
HAnimSegment841.DEF = "hanim_r_metacarpal_1";
Transform Transform842 = createNode("Transform");
Transform842.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
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
Coordinate847.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet846.coord = Coordinate847;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA848 = createNode("ColorRGBA");
ColorRGBA848.USE = "HAnimSegmentLineColorRGBA";
LineSet846.color = ColorRGBA848;

Shape845.geometry = LineSet846;

HAnimSegment841.children[1] = Shape845;

HAnimJoint840.children = new MFNode();

HAnimJoint840.children[0] = HAnimSegment841;

HAnimJoint HAnimJoint849 = createNode("HAnimJoint");
HAnimJoint849.name = "r_metacarpophalangeal_1";
HAnimJoint849.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint849.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint849.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint849.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment850 = createNode("HAnimSegment");
HAnimSegment850.name = "r_carpal_proximal_phalanx_1";
HAnimSegment850.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform851 = createNode("Transform");
Transform851.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
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
Coordinate856.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet855.coord = Coordinate856;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA857 = createNode("ColorRGBA");
ColorRGBA857.USE = "HAnimSegmentLineColorRGBA";
LineSet855.color = ColorRGBA857;

Shape854.geometry = LineSet855;

HAnimSegment850.children[1] = Shape854;

HAnimSite HAnimSite858 = createNode("HAnimSite");
HAnimSite858.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite858.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor859 = createNode("TouchSensor");
TouchSensor859.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite858.children = new MFNode();

HAnimSite858.children[0] = TouchSensor859;

Shape Shape860 = createNode("Shape");
Shape860.USE = "HAnimSiteShape";
HAnimSite858.children[1] = Shape860;

HAnimSegment850.children[2] = HAnimSite858;

HAnimJoint849.children = new MFNode();

HAnimJoint849.children[0] = HAnimSegment850;

HAnimJoint HAnimJoint861 = createNode("HAnimJoint");
HAnimJoint861.name = "r_carpal_interphalangeal_1";
HAnimJoint861.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint861.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint861.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint861.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint849.children[1] = HAnimJoint861;

HAnimJoint840.children[1] = HAnimJoint849;

HAnimJoint806.children[1] = HAnimJoint840;

HAnimJoint HAnimJoint862 = createNode("HAnimJoint");
HAnimJoint862.name = "r_carpometacarpal_2";
HAnimJoint862.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint862.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint862.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint862.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment863 = createNode("HAnimSegment");
HAnimSegment863.name = "r_metacarpal_2";
HAnimSegment863.DEF = "hanim_r_metacarpal_2";
Transform Transform864 = createNode("Transform");
Transform864.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
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
Coordinate869.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet868.coord = Coordinate869;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA870 = createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSegmentLineColorRGBA";
LineSet868.color = ColorRGBA870;

Shape867.geometry = LineSet868;

HAnimSegment863.children[1] = Shape867;

HAnimJoint862.children = new MFNode();

HAnimJoint862.children[0] = HAnimSegment863;

HAnimJoint HAnimJoint871 = createNode("HAnimJoint");
HAnimJoint871.name = "r_metacarpophalangeal_2";
HAnimJoint871.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint871.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint871.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint871.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment872 = createNode("HAnimSegment");
HAnimSegment872.name = "r_carpal_proximal_phalanx_2";
HAnimSegment872.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform873 = createNode("Transform");
Transform873.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform874 = createNode("Transform");
//Empty Transform
Shape Shape875 = createNode("Shape");
Shape875.USE = "HAnimJointShape";
Transform874.child = new undefined();

Transform874.child[0] = Shape875;

Transform873.children = new MFNode();

Transform873.children[0] = Transform874;

HAnimSegment872.children = new MFNode();

HAnimSegment872.children[0] = Transform873;

Shape Shape876 = createNode("Shape");
LineSet LineSet877 = createNode("LineSet");
LineSet877.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate878 = createNode("Coordinate");
Coordinate878.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet877.coord = Coordinate878;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA879 = createNode("ColorRGBA");
ColorRGBA879.USE = "HAnimSegmentLineColorRGBA";
LineSet877.color = ColorRGBA879;

Shape876.geometry = LineSet877;

HAnimSegment872.children[1] = Shape876;

HAnimJoint871.children = new MFNode();

HAnimJoint871.children[0] = HAnimSegment872;

HAnimJoint HAnimJoint880 = createNode("HAnimJoint");
HAnimJoint880.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint880.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint880.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint880.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint880.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment881 = createNode("HAnimSegment");
HAnimSegment881.name = "r_carpal_middle_phalanx_2";
HAnimSegment881.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform882 = createNode("Transform");
Transform882.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform883 = createNode("Transform");
//Empty Transform
Shape Shape884 = createNode("Shape");
Shape884.USE = "HAnimJointShape";
Transform883.child = new undefined();

Transform883.child[0] = Shape884;

Transform882.children = new MFNode();

Transform882.children[0] = Transform883;

HAnimSegment881.children = new MFNode();

HAnimSegment881.children[0] = Transform882;

Shape Shape885 = createNode("Shape");
LineSet LineSet886 = createNode("LineSet");
LineSet886.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate887 = createNode("Coordinate");
Coordinate887.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet886.coord = Coordinate887;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA888 = createNode("ColorRGBA");
ColorRGBA888.USE = "HAnimSegmentLineColorRGBA";
LineSet886.color = ColorRGBA888;

Shape885.geometry = LineSet886;

HAnimSegment881.children[1] = Shape885;

HAnimSite HAnimSite889 = createNode("HAnimSite");
HAnimSite889.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite889.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor890 = createNode("TouchSensor");
TouchSensor890.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite889.children = new MFNode();

HAnimSite889.children[0] = TouchSensor890;

Shape Shape891 = createNode("Shape");
Shape891.USE = "HAnimSiteShape";
HAnimSite889.children[1] = Shape891;

HAnimSegment881.children[2] = HAnimSite889;

HAnimSite HAnimSite892 = createNode("HAnimSite");
HAnimSite892.name = "r_dactylion";
HAnimSite892.DEF = "hanim_r_dactylion";
HAnimSite892.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor893 = createNode("TouchSensor");
TouchSensor893.description = "HAnimSite r_dactylion";
HAnimSite892.children = new MFNode();

HAnimSite892.children[0] = TouchSensor893;

Shape Shape894 = createNode("Shape");
Shape894.USE = "HAnimSiteShape";
HAnimSite892.children[1] = Shape894;

HAnimSegment881.children[3] = HAnimSite892;

HAnimJoint880.children = new MFNode();

HAnimJoint880.children[0] = HAnimSegment881;

HAnimJoint HAnimJoint895 = createNode("HAnimJoint");
HAnimJoint895.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint895.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint895.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint895.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint895.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint880.children[1] = HAnimJoint895;

HAnimJoint871.children[1] = HAnimJoint880;

HAnimJoint862.children[1] = HAnimJoint871;

HAnimJoint806.children[2] = HAnimJoint862;

HAnimJoint HAnimJoint896 = createNode("HAnimJoint");
HAnimJoint896.name = "r_carpometacarpal_3";
HAnimJoint896.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint896.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint896.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint896.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment897 = createNode("HAnimSegment");
HAnimSegment897.name = "r_metacarpal_3";
HAnimSegment897.DEF = "hanim_r_metacarpal_3";
Transform Transform898 = createNode("Transform");
Transform898.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform899 = createNode("Transform");
//Empty Transform
Shape Shape900 = createNode("Shape");
Shape900.USE = "HAnimJointShape";
Transform899.child = new undefined();

Transform899.child[0] = Shape900;

Transform898.children = new MFNode();

Transform898.children[0] = Transform899;

HAnimSegment897.children = new MFNode();

HAnimSegment897.children[0] = Transform898;

Shape Shape901 = createNode("Shape");
LineSet LineSet902 = createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate903 = createNode("Coordinate");
Coordinate903.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet902.coord = Coordinate903;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA904 = createNode("ColorRGBA");
ColorRGBA904.USE = "HAnimSegmentLineColorRGBA";
LineSet902.color = ColorRGBA904;

Shape901.geometry = LineSet902;

HAnimSegment897.children[1] = Shape901;

HAnimJoint896.children = new MFNode();

HAnimJoint896.children[0] = HAnimSegment897;

HAnimJoint HAnimJoint905 = createNode("HAnimJoint");
HAnimJoint905.name = "r_metacarpophalangeal_3";
HAnimJoint905.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint905.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint905.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint905.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment906 = createNode("HAnimSegment");
HAnimSegment906.name = "r_carpal_proximal_phalanx_3";
HAnimSegment906.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform907 = createNode("Transform");
Transform907.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
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
Coordinate912.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet911.coord = Coordinate912;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA913 = createNode("ColorRGBA");
ColorRGBA913.USE = "HAnimSegmentLineColorRGBA";
LineSet911.color = ColorRGBA913;

Shape910.geometry = LineSet911;

HAnimSegment906.children[1] = Shape910;

HAnimJoint905.children = new MFNode();

HAnimJoint905.children[0] = HAnimSegment906;

HAnimJoint HAnimJoint914 = createNode("HAnimJoint");
HAnimJoint914.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint914.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint914.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint914.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint914.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment915 = createNode("HAnimSegment");
HAnimSegment915.name = "r_carpal_middle_phalanx_3";
HAnimSegment915.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform916 = createNode("Transform");
Transform916.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
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
Coordinate921.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet920.coord = Coordinate921;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA922 = createNode("ColorRGBA");
ColorRGBA922.USE = "HAnimSegmentLineColorRGBA";
LineSet920.color = ColorRGBA922;

Shape919.geometry = LineSet920;

HAnimSegment915.children[1] = Shape919;

HAnimSite HAnimSite923 = createNode("HAnimSite");
HAnimSite923.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite923.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor924 = createNode("TouchSensor");
TouchSensor924.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite923.children = new MFNode();

HAnimSite923.children[0] = TouchSensor924;

Shape Shape925 = createNode("Shape");
Shape925.USE = "HAnimSiteShape";
HAnimSite923.children[1] = Shape925;

HAnimSegment915.children[2] = HAnimSite923;

HAnimJoint914.children = new MFNode();

HAnimJoint914.children[0] = HAnimSegment915;

HAnimJoint HAnimJoint926 = createNode("HAnimJoint");
HAnimJoint926.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint926.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint926.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint926.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint926.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint914.children[1] = HAnimJoint926;

HAnimJoint905.children[1] = HAnimJoint914;

HAnimJoint896.children[1] = HAnimJoint905;

HAnimJoint806.children[3] = HAnimJoint896;

HAnimJoint HAnimJoint927 = createNode("HAnimJoint");
HAnimJoint927.name = "r_carpometacarpal_4";
HAnimJoint927.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint927.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint927.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint927.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment928 = createNode("HAnimSegment");
HAnimSegment928.name = "r_metacarpal_4";
HAnimSegment928.DEF = "hanim_r_metacarpal_4";
Transform Transform929 = createNode("Transform");
Transform929.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
Transform Transform930 = createNode("Transform");
//Empty Transform
Shape Shape931 = createNode("Shape");
Shape931.USE = "HAnimJointShape";
Transform930.child = new undefined();

Transform930.child[0] = Shape931;

Transform929.children = new MFNode();

Transform929.children[0] = Transform930;

HAnimSegment928.children = new MFNode();

HAnimSegment928.children[0] = Transform929;

Shape Shape932 = createNode("Shape");
LineSet LineSet933 = createNode("LineSet");
LineSet933.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate934 = createNode("Coordinate");
Coordinate934.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet933.coord = Coordinate934;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA935 = createNode("ColorRGBA");
ColorRGBA935.USE = "HAnimSegmentLineColorRGBA";
LineSet933.color = ColorRGBA935;

Shape932.geometry = LineSet933;

HAnimSegment928.children[1] = Shape932;

HAnimJoint927.children = new MFNode();

HAnimJoint927.children[0] = HAnimSegment928;

HAnimJoint HAnimJoint936 = createNode("HAnimJoint");
HAnimJoint936.name = "r_metacarpophalangeal_4";
HAnimJoint936.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint936.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint936.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint936.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment937 = createNode("HAnimSegment");
HAnimSegment937.name = "r_carpal_proximal_phalanx_4";
HAnimSegment937.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform938 = createNode("Transform");
Transform938.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform939 = createNode("Transform");
//Empty Transform
Shape Shape940 = createNode("Shape");
Shape940.USE = "HAnimJointShape";
Transform939.child = new undefined();

Transform939.child[0] = Shape940;

Transform938.children = new MFNode();

Transform938.children[0] = Transform939;

HAnimSegment937.children = new MFNode();

HAnimSegment937.children[0] = Transform938;

Shape Shape941 = createNode("Shape");
LineSet LineSet942 = createNode("LineSet");
LineSet942.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate943 = createNode("Coordinate");
Coordinate943.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet942.coord = Coordinate943;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA944 = createNode("ColorRGBA");
ColorRGBA944.USE = "HAnimSegmentLineColorRGBA";
LineSet942.color = ColorRGBA944;

Shape941.geometry = LineSet942;

HAnimSegment937.children[1] = Shape941;

HAnimJoint936.children = new MFNode();

HAnimJoint936.children[0] = HAnimSegment937;

HAnimJoint HAnimJoint945 = createNode("HAnimJoint");
HAnimJoint945.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint945.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint945.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint945.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint945.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment946 = createNode("HAnimSegment");
HAnimSegment946.name = "r_carpal_middle_phalanx_4";
HAnimSegment946.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform947 = createNode("Transform");
Transform947.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform948 = createNode("Transform");
//Empty Transform
Shape Shape949 = createNode("Shape");
Shape949.USE = "HAnimJointShape";
Transform948.child = new undefined();

Transform948.child[0] = Shape949;

Transform947.children = new MFNode();

Transform947.children[0] = Transform948;

HAnimSegment946.children = new MFNode();

HAnimSegment946.children[0] = Transform947;

Shape Shape950 = createNode("Shape");
LineSet LineSet951 = createNode("LineSet");
LineSet951.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate952 = createNode("Coordinate");
Coordinate952.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet951.coord = Coordinate952;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA953 = createNode("ColorRGBA");
ColorRGBA953.USE = "HAnimSegmentLineColorRGBA";
LineSet951.color = ColorRGBA953;

Shape950.geometry = LineSet951;

HAnimSegment946.children[1] = Shape950;

HAnimSite HAnimSite954 = createNode("HAnimSite");
HAnimSite954.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite954.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor955 = createNode("TouchSensor");
TouchSensor955.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite954.children = new MFNode();

HAnimSite954.children[0] = TouchSensor955;

Shape Shape956 = createNode("Shape");
Shape956.USE = "HAnimSiteShape";
HAnimSite954.children[1] = Shape956;

HAnimSegment946.children[2] = HAnimSite954;

HAnimJoint945.children = new MFNode();

HAnimJoint945.children[0] = HAnimSegment946;

HAnimJoint HAnimJoint957 = createNode("HAnimJoint");
HAnimJoint957.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint957.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint957.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint957.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint957.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint945.children[1] = HAnimJoint957;

HAnimJoint936.children[1] = HAnimJoint945;

HAnimJoint927.children[1] = HAnimJoint936;

HAnimJoint806.children[4] = HAnimJoint927;

HAnimJoint HAnimJoint958 = createNode("HAnimJoint");
HAnimJoint958.name = "r_carpometacarpal_5";
HAnimJoint958.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint958.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint958.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint958.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment959 = createNode("HAnimSegment");
HAnimSegment959.name = "r_metacarpal_5";
HAnimSegment959.DEF = "hanim_r_metacarpal_5";
Transform Transform960 = createNode("Transform");
Transform960.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
Transform Transform961 = createNode("Transform");
//Empty Transform
Shape Shape962 = createNode("Shape");
Shape962.USE = "HAnimJointShape";
Transform961.child = new undefined();

Transform961.child[0] = Shape962;

Transform960.children = new MFNode();

Transform960.children[0] = Transform961;

HAnimSegment959.children = new MFNode();

HAnimSegment959.children[0] = Transform960;

Shape Shape963 = createNode("Shape");
LineSet LineSet964 = createNode("LineSet");
LineSet964.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate965 = createNode("Coordinate");
Coordinate965.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet964.coord = Coordinate965;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA966 = createNode("ColorRGBA");
ColorRGBA966.USE = "HAnimSegmentLineColorRGBA";
LineSet964.color = ColorRGBA966;

Shape963.geometry = LineSet964;

HAnimSegment959.children[1] = Shape963;

HAnimJoint958.children = new MFNode();

HAnimJoint958.children[0] = HAnimSegment959;

HAnimJoint HAnimJoint967 = createNode("HAnimJoint");
HAnimJoint967.name = "r_metacarpophalangeal_5";
HAnimJoint967.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint967.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint967.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint967.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment968 = createNode("HAnimSegment");
HAnimSegment968.name = "r_carpal_proximal_phalanx_5";
HAnimSegment968.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform969 = createNode("Transform");
Transform969.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
Transform Transform970 = createNode("Transform");
//Empty Transform
Shape Shape971 = createNode("Shape");
Shape971.USE = "HAnimJointShape";
Transform970.child = new undefined();

Transform970.child[0] = Shape971;

Transform969.children = new MFNode();

Transform969.children[0] = Transform970;

HAnimSegment968.children = new MFNode();

HAnimSegment968.children[0] = Transform969;

Shape Shape972 = createNode("Shape");
LineSet LineSet973 = createNode("LineSet");
LineSet973.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate974 = createNode("Coordinate");
Coordinate974.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet973.coord = Coordinate974;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA975 = createNode("ColorRGBA");
ColorRGBA975.USE = "HAnimSegmentLineColorRGBA";
LineSet973.color = ColorRGBA975;

Shape972.geometry = LineSet973;

HAnimSegment968.children[1] = Shape972;

HAnimJoint967.children = new MFNode();

HAnimJoint967.children[0] = HAnimSegment968;

HAnimJoint HAnimJoint976 = createNode("HAnimJoint");
HAnimJoint976.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint976.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint976.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint976.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint976.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment977 = createNode("HAnimSegment");
HAnimSegment977.name = "r_carpal_middle_phalanx_5";
HAnimSegment977.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform978 = createNode("Transform");
Transform978.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
Transform Transform979 = createNode("Transform");
//Empty Transform
Shape Shape980 = createNode("Shape");
Shape980.USE = "HAnimJointShape";
Transform979.child = new undefined();

Transform979.child[0] = Shape980;

Transform978.children = new MFNode();

Transform978.children[0] = Transform979;

HAnimSegment977.children = new MFNode();

HAnimSegment977.children[0] = Transform978;

Shape Shape981 = createNode("Shape");
LineSet LineSet982 = createNode("LineSet");
LineSet982.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate983 = createNode("Coordinate");
Coordinate983.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet982.coord = Coordinate983;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA984 = createNode("ColorRGBA");
ColorRGBA984.USE = "HAnimSegmentLineColorRGBA";
LineSet982.color = ColorRGBA984;

Shape981.geometry = LineSet982;

HAnimSegment977.children[1] = Shape981;

HAnimSite HAnimSite985 = createNode("HAnimSite");
HAnimSite985.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite985.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor986 = createNode("TouchSensor");
TouchSensor986.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite985.children = new MFNode();

HAnimSite985.children[0] = TouchSensor986;

Shape Shape987 = createNode("Shape");
Shape987.USE = "HAnimSiteShape";
HAnimSite985.children[1] = Shape987;

HAnimSegment977.children[2] = HAnimSite985;

HAnimJoint976.children = new MFNode();

HAnimJoint976.children[0] = HAnimSegment977;

HAnimJoint HAnimJoint988 = createNode("HAnimJoint");
HAnimJoint988.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint988.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint988.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint988.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint988.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint976.children[1] = HAnimJoint988;

HAnimJoint967.children[1] = HAnimJoint976;

HAnimJoint958.children[1] = HAnimJoint967;

HAnimJoint806.children[5] = HAnimJoint958;

HAnimJoint794.children[1] = HAnimJoint806;

HAnimJoint773.children[1] = HAnimJoint794;

HAnimJoint758.children[1] = HAnimJoint773;

HAnimJoint749.children[1] = HAnimJoint758;

HAnimJoint395.children[3] = HAnimJoint749;

HAnimJoint374.children[1] = HAnimJoint395;

HAnimJoint353.children[1] = HAnimJoint374;

HAnimJoint335.children[1] = HAnimJoint353;

HAnimJoint326.children[1] = HAnimJoint335;

HAnimJoint305.children[1] = HAnimJoint326;

HAnimJoint52.children[2] = HAnimJoint305;

HAnimHumanoid43.joints[1] = HAnimJoint52;

HAnimJoint HAnimJoint989 = createNode("HAnimJoint");
HAnimJoint989.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint989;

HAnimJoint HAnimJoint990 = createNode("HAnimJoint");
HAnimJoint990.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint990;

HAnimJoint HAnimJoint991 = createNode("HAnimJoint");
HAnimJoint991.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint991;

HAnimJoint HAnimJoint992 = createNode("HAnimJoint");
HAnimJoint992.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint992;

HAnimJoint HAnimJoint993 = createNode("HAnimJoint");
HAnimJoint993.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint993;

HAnimJoint HAnimJoint994 = createNode("HAnimJoint");
HAnimJoint994.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[7] = HAnimJoint994;

HAnimJoint HAnimJoint995 = createNode("HAnimJoint");
HAnimJoint995.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[8] = HAnimJoint995;

HAnimJoint HAnimJoint996 = createNode("HAnimJoint");
HAnimJoint996.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[9] = HAnimJoint996;

HAnimJoint HAnimJoint997 = createNode("HAnimJoint");
HAnimJoint997.USE = "hanim_r_hip";
HAnimHumanoid43.joints[10] = HAnimJoint997;

HAnimJoint HAnimJoint998 = createNode("HAnimJoint");
HAnimJoint998.USE = "hanim_r_knee";
HAnimHumanoid43.joints[11] = HAnimJoint998;

HAnimJoint HAnimJoint999 = createNode("HAnimJoint");
HAnimJoint999.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[12] = HAnimJoint999;

HAnimJoint HAnimJoint1000 = createNode("HAnimJoint");
HAnimJoint1000.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1000;

HAnimJoint HAnimJoint1001 = createNode("HAnimJoint");
HAnimJoint1001.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1001;

HAnimJoint HAnimJoint1002 = createNode("HAnimJoint");
HAnimJoint1002.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1002;

HAnimJoint HAnimJoint1003 = createNode("HAnimJoint");
HAnimJoint1003.USE = "hanim_vl5";
HAnimHumanoid43.joints[16] = HAnimJoint1003;

HAnimJoint HAnimJoint1004 = createNode("HAnimJoint");
HAnimJoint1004.USE = "hanim_vl3";
HAnimHumanoid43.joints[17] = HAnimJoint1004;

HAnimJoint HAnimJoint1005 = createNode("HAnimJoint");
HAnimJoint1005.USE = "hanim_vl1";
HAnimHumanoid43.joints[18] = HAnimJoint1005;

HAnimJoint HAnimJoint1006 = createNode("HAnimJoint");
HAnimJoint1006.USE = "hanim_vt10";
HAnimHumanoid43.joints[19] = HAnimJoint1006;

HAnimJoint HAnimJoint1007 = createNode("HAnimJoint");
HAnimJoint1007.USE = "hanim_vt6";
HAnimHumanoid43.joints[20] = HAnimJoint1007;

HAnimJoint HAnimJoint1008 = createNode("HAnimJoint");
HAnimJoint1008.USE = "hanim_vt1";
HAnimHumanoid43.joints[21] = HAnimJoint1008;

HAnimJoint HAnimJoint1009 = createNode("HAnimJoint");
HAnimJoint1009.USE = "hanim_vc4";
HAnimHumanoid43.joints[22] = HAnimJoint1009;

HAnimJoint HAnimJoint1010 = createNode("HAnimJoint");
HAnimJoint1010.USE = "hanim_vc2";
HAnimHumanoid43.joints[23] = HAnimJoint1010;

HAnimJoint HAnimJoint1011 = createNode("HAnimJoint");
HAnimJoint1011.USE = "hanim_skullbase";
HAnimHumanoid43.joints[24] = HAnimJoint1011;

HAnimJoint HAnimJoint1012 = createNode("HAnimJoint");
HAnimJoint1012.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[25] = HAnimJoint1012;

HAnimJoint HAnimJoint1013 = createNode("HAnimJoint");
HAnimJoint1013.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[26] = HAnimJoint1013;

HAnimJoint HAnimJoint1014 = createNode("HAnimJoint");
HAnimJoint1014.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[27] = HAnimJoint1014;

HAnimJoint HAnimJoint1015 = createNode("HAnimJoint");
HAnimJoint1015.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[28] = HAnimJoint1015;

HAnimJoint HAnimJoint1016 = createNode("HAnimJoint");
HAnimJoint1016.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[29] = HAnimJoint1016;

HAnimJoint HAnimJoint1017 = createNode("HAnimJoint");
HAnimJoint1017.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[30] = HAnimJoint1017;

HAnimJoint HAnimJoint1018 = createNode("HAnimJoint");
HAnimJoint1018.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[31] = HAnimJoint1018;

HAnimJoint HAnimJoint1019 = createNode("HAnimJoint");
HAnimJoint1019.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[32] = HAnimJoint1019;

HAnimJoint HAnimJoint1020 = createNode("HAnimJoint");
HAnimJoint1020.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[33] = HAnimJoint1020;

HAnimJoint HAnimJoint1021 = createNode("HAnimJoint");
HAnimJoint1021.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[34] = HAnimJoint1021;

HAnimJoint HAnimJoint1022 = createNode("HAnimJoint");
HAnimJoint1022.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[35] = HAnimJoint1022;

HAnimJoint HAnimJoint1023 = createNode("HAnimJoint");
HAnimJoint1023.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[36] = HAnimJoint1023;

HAnimJoint HAnimJoint1024 = createNode("HAnimJoint");
HAnimJoint1024.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[37] = HAnimJoint1024;

HAnimJoint HAnimJoint1025 = createNode("HAnimJoint");
HAnimJoint1025.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[38] = HAnimJoint1025;

HAnimJoint HAnimJoint1026 = createNode("HAnimJoint");
HAnimJoint1026.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[39] = HAnimJoint1026;

HAnimJoint HAnimJoint1027 = createNode("HAnimJoint");
HAnimJoint1027.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[40] = HAnimJoint1027;

HAnimJoint HAnimJoint1028 = createNode("HAnimJoint");
HAnimJoint1028.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[41] = HAnimJoint1028;

HAnimJoint HAnimJoint1029 = createNode("HAnimJoint");
HAnimJoint1029.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[42] = HAnimJoint1029;

HAnimJoint HAnimJoint1030 = createNode("HAnimJoint");
HAnimJoint1030.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[43] = HAnimJoint1030;

HAnimJoint HAnimJoint1031 = createNode("HAnimJoint");
HAnimJoint1031.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[44] = HAnimJoint1031;

HAnimJoint HAnimJoint1032 = createNode("HAnimJoint");
HAnimJoint1032.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[45] = HAnimJoint1032;

HAnimJoint HAnimJoint1033 = createNode("HAnimJoint");
HAnimJoint1033.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[46] = HAnimJoint1033;

HAnimJoint HAnimJoint1034 = createNode("HAnimJoint");
HAnimJoint1034.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[47] = HAnimJoint1034;

HAnimJoint HAnimJoint1035 = createNode("HAnimJoint");
HAnimJoint1035.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[48] = HAnimJoint1035;

HAnimJoint HAnimJoint1036 = createNode("HAnimJoint");
HAnimJoint1036.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[49] = HAnimJoint1036;

HAnimJoint HAnimJoint1037 = createNode("HAnimJoint");
HAnimJoint1037.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[50] = HAnimJoint1037;

HAnimJoint HAnimJoint1038 = createNode("HAnimJoint");
HAnimJoint1038.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[51] = HAnimJoint1038;

HAnimJoint HAnimJoint1039 = createNode("HAnimJoint");
HAnimJoint1039.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[52] = HAnimJoint1039;

HAnimJoint HAnimJoint1040 = createNode("HAnimJoint");
HAnimJoint1040.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[53] = HAnimJoint1040;

HAnimJoint HAnimJoint1041 = createNode("HAnimJoint");
HAnimJoint1041.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[54] = HAnimJoint1041;

HAnimJoint HAnimJoint1042 = createNode("HAnimJoint");
HAnimJoint1042.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[55] = HAnimJoint1042;

HAnimJoint HAnimJoint1043 = createNode("HAnimJoint");
HAnimJoint1043.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[56] = HAnimJoint1043;

HAnimJoint HAnimJoint1044 = createNode("HAnimJoint");
HAnimJoint1044.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[57] = HAnimJoint1044;

HAnimJoint HAnimJoint1045 = createNode("HAnimJoint");
HAnimJoint1045.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[58] = HAnimJoint1045;

HAnimJoint HAnimJoint1046 = createNode("HAnimJoint");
HAnimJoint1046.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[59] = HAnimJoint1046;

HAnimJoint HAnimJoint1047 = createNode("HAnimJoint");
HAnimJoint1047.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[60] = HAnimJoint1047;

HAnimJoint HAnimJoint1048 = createNode("HAnimJoint");
HAnimJoint1048.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[61] = HAnimJoint1048;

HAnimJoint HAnimJoint1049 = createNode("HAnimJoint");
HAnimJoint1049.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[62] = HAnimJoint1049;

HAnimJoint HAnimJoint1050 = createNode("HAnimJoint");
HAnimJoint1050.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[63] = HAnimJoint1050;

HAnimJoint HAnimJoint1051 = createNode("HAnimJoint");
HAnimJoint1051.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[64] = HAnimJoint1051;

HAnimJoint HAnimJoint1052 = createNode("HAnimJoint");
HAnimJoint1052.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[65] = HAnimJoint1052;

HAnimJoint HAnimJoint1053 = createNode("HAnimJoint");
HAnimJoint1053.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[66] = HAnimJoint1053;

HAnimJoint HAnimJoint1054 = createNode("HAnimJoint");
HAnimJoint1054.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[67] = HAnimJoint1054;

HAnimJoint HAnimJoint1055 = createNode("HAnimJoint");
HAnimJoint1055.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[68] = HAnimJoint1055;

HAnimJoint HAnimJoint1056 = createNode("HAnimJoint");
HAnimJoint1056.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[69] = HAnimJoint1056;

HAnimJoint HAnimJoint1057 = createNode("HAnimJoint");
HAnimJoint1057.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[70] = HAnimJoint1057;

HAnimJoint HAnimJoint1058 = createNode("HAnimJoint");
HAnimJoint1058.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[71] = HAnimJoint1058;

HAnimJoint HAnimJoint1059 = createNode("HAnimJoint");
HAnimJoint1059.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[72] = HAnimJoint1059;

HAnimSegment HAnimSegment1060 = createNode("HAnimSegment");
HAnimSegment1060.USE = "hanim_sacrum";
HAnimHumanoid43.segments[73] = HAnimSegment1060;

HAnimSegment HAnimSegment1061 = createNode("HAnimSegment");
HAnimSegment1061.USE = "hanim_pelvis";
HAnimHumanoid43.segments[74] = HAnimSegment1061;

HAnimSegment HAnimSegment1062 = createNode("HAnimSegment");
HAnimSegment1062.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[75] = HAnimSegment1062;

HAnimSegment HAnimSegment1063 = createNode("HAnimSegment");
HAnimSegment1063.USE = "hanim_l_calf";
HAnimHumanoid43.segments[76] = HAnimSegment1063;

HAnimSegment HAnimSegment1064 = createNode("HAnimSegment");
HAnimSegment1064.USE = "hanim_l_talus";
HAnimHumanoid43.segments[77] = HAnimSegment1064;

HAnimSegment HAnimSegment1065 = createNode("HAnimSegment");
HAnimSegment1065.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[78] = HAnimSegment1065;

HAnimSegment HAnimSegment1066 = createNode("HAnimSegment");
HAnimSegment1066.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[79] = HAnimSegment1066;

HAnimSegment HAnimSegment1067 = createNode("HAnimSegment");
HAnimSegment1067.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[80] = HAnimSegment1067;

HAnimSegment HAnimSegment1068 = createNode("HAnimSegment");
HAnimSegment1068.USE = "hanim_r_calf";
HAnimHumanoid43.segments[81] = HAnimSegment1068;

HAnimSegment HAnimSegment1069 = createNode("HAnimSegment");
HAnimSegment1069.USE = "hanim_r_talus";
HAnimHumanoid43.segments[82] = HAnimSegment1069;

HAnimSegment HAnimSegment1070 = createNode("HAnimSegment");
HAnimSegment1070.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[83] = HAnimSegment1070;

HAnimSegment HAnimSegment1071 = createNode("HAnimSegment");
HAnimSegment1071.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[84] = HAnimSegment1071;

HAnimSegment HAnimSegment1072 = createNode("HAnimSegment");
HAnimSegment1072.USE = "hanim_l5";
HAnimHumanoid43.segments[85] = HAnimSegment1072;

HAnimSegment HAnimSegment1073 = createNode("HAnimSegment");
HAnimSegment1073.USE = "hanim_l3";
HAnimHumanoid43.segments[86] = HAnimSegment1073;

HAnimSegment HAnimSegment1074 = createNode("HAnimSegment");
HAnimSegment1074.USE = "hanim_l1";
HAnimHumanoid43.segments[87] = HAnimSegment1074;

HAnimSegment HAnimSegment1075 = createNode("HAnimSegment");
HAnimSegment1075.USE = "hanim_t10";
HAnimHumanoid43.segments[88] = HAnimSegment1075;

HAnimSegment HAnimSegment1076 = createNode("HAnimSegment");
HAnimSegment1076.USE = "hanim_t6";
HAnimHumanoid43.segments[89] = HAnimSegment1076;

HAnimSegment HAnimSegment1077 = createNode("HAnimSegment");
HAnimSegment1077.USE = "hanim_t1";
HAnimHumanoid43.segments[90] = HAnimSegment1077;

HAnimSegment HAnimSegment1078 = createNode("HAnimSegment");
HAnimSegment1078.USE = "hanim_c4";
HAnimHumanoid43.segments[91] = HAnimSegment1078;

HAnimSegment HAnimSegment1079 = createNode("HAnimSegment");
HAnimSegment1079.USE = "hanim_c2";
HAnimHumanoid43.segments[92] = HAnimSegment1079;

HAnimSegment HAnimSegment1080 = createNode("HAnimSegment");
HAnimSegment1080.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[93] = HAnimSegment1080;

HAnimSegment HAnimSegment1081 = createNode("HAnimSegment");
HAnimSegment1081.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[94] = HAnimSegment1081;

HAnimSegment HAnimSegment1082 = createNode("HAnimSegment");
HAnimSegment1082.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[95] = HAnimSegment1082;

HAnimSegment HAnimSegment1083 = createNode("HAnimSegment");
HAnimSegment1083.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[96] = HAnimSegment1083;

HAnimSegment HAnimSegment1084 = createNode("HAnimSegment");
HAnimSegment1084.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[97] = HAnimSegment1084;

HAnimSegment HAnimSegment1085 = createNode("HAnimSegment");
HAnimSegment1085.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[98] = HAnimSegment1085;

HAnimSegment HAnimSegment1086 = createNode("HAnimSegment");
HAnimSegment1086.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[99] = HAnimSegment1086;

HAnimSegment HAnimSegment1087 = createNode("HAnimSegment");
HAnimSegment1087.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[100] = HAnimSegment1087;

HAnimSegment HAnimSegment1088 = createNode("HAnimSegment");
HAnimSegment1088.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[101] = HAnimSegment1088;

HAnimSegment HAnimSegment1089 = createNode("HAnimSegment");
HAnimSegment1089.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[102] = HAnimSegment1089;

HAnimSegment HAnimSegment1090 = createNode("HAnimSegment");
HAnimSegment1090.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[103] = HAnimSegment1090;

HAnimSegment HAnimSegment1091 = createNode("HAnimSegment");
HAnimSegment1091.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[104] = HAnimSegment1091;

HAnimSegment HAnimSegment1092 = createNode("HAnimSegment");
HAnimSegment1092.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[105] = HAnimSegment1092;

HAnimSegment HAnimSegment1093 = createNode("HAnimSegment");
HAnimSegment1093.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[106] = HAnimSegment1093;

HAnimSegment HAnimSegment1094 = createNode("HAnimSegment");
HAnimSegment1094.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[107] = HAnimSegment1094;

HAnimSegment HAnimSegment1095 = createNode("HAnimSegment");
HAnimSegment1095.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[108] = HAnimSegment1095;

HAnimSegment HAnimSegment1096 = createNode("HAnimSegment");
HAnimSegment1096.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[109] = HAnimSegment1096;

HAnimSegment HAnimSegment1097 = createNode("HAnimSegment");
HAnimSegment1097.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[110] = HAnimSegment1097;

HAnimSegment HAnimSegment1098 = createNode("HAnimSegment");
HAnimSegment1098.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[111] = HAnimSegment1098;

HAnimSegment HAnimSegment1099 = createNode("HAnimSegment");
HAnimSegment1099.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[112] = HAnimSegment1099;

HAnimSegment HAnimSegment1100 = createNode("HAnimSegment");
HAnimSegment1100.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[113] = HAnimSegment1100;

HAnimSegment HAnimSegment1101 = createNode("HAnimSegment");
HAnimSegment1101.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[114] = HAnimSegment1101;

HAnimSegment HAnimSegment1102 = createNode("HAnimSegment");
HAnimSegment1102.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[115] = HAnimSegment1102;

HAnimSegment HAnimSegment1103 = createNode("HAnimSegment");
HAnimSegment1103.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[116] = HAnimSegment1103;

HAnimSegment HAnimSegment1104 = createNode("HAnimSegment");
HAnimSegment1104.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[117] = HAnimSegment1104;

HAnimSegment HAnimSegment1105 = createNode("HAnimSegment");
HAnimSegment1105.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[118] = HAnimSegment1105;

HAnimSegment HAnimSegment1106 = createNode("HAnimSegment");
HAnimSegment1106.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[119] = HAnimSegment1106;

HAnimSegment HAnimSegment1107 = createNode("HAnimSegment");
HAnimSegment1107.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[120] = HAnimSegment1107;

HAnimSegment HAnimSegment1108 = createNode("HAnimSegment");
HAnimSegment1108.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[121] = HAnimSegment1108;

HAnimSegment HAnimSegment1109 = createNode("HAnimSegment");
HAnimSegment1109.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[122] = HAnimSegment1109;

HAnimSegment HAnimSegment1110 = createNode("HAnimSegment");
HAnimSegment1110.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[123] = HAnimSegment1110;

HAnimSegment HAnimSegment1111 = createNode("HAnimSegment");
HAnimSegment1111.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[124] = HAnimSegment1111;

HAnimSegment HAnimSegment1112 = createNode("HAnimSegment");
HAnimSegment1112.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[125] = HAnimSegment1112;

HAnimSegment HAnimSegment1113 = createNode("HAnimSegment");
HAnimSegment1113.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[126] = HAnimSegment1113;

HAnimSegment HAnimSegment1114 = createNode("HAnimSegment");
HAnimSegment1114.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[127] = HAnimSegment1114;

HAnimSegment HAnimSegment1115 = createNode("HAnimSegment");
HAnimSegment1115.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[128] = HAnimSegment1115;

HAnimSegment HAnimSegment1116 = createNode("HAnimSegment");
HAnimSegment1116.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[129] = HAnimSegment1116;

HAnimSegment HAnimSegment1117 = createNode("HAnimSegment");
HAnimSegment1117.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[130] = HAnimSegment1117;

HAnimSite HAnimSite1118 = createNode("HAnimSite");
HAnimSite1118.USE = "hanim_buttocks_standing_wall_contact_point";
HAnimHumanoid43.viewpoints[131] = HAnimSite1118;

HAnimSite HAnimSite1119 = createNode("HAnimSite");
HAnimSite1119.USE = "hanim_crotch";
HAnimHumanoid43.viewpoints[132] = HAnimSite1119;

HAnimSite HAnimSite1120 = createNode("HAnimSite");
HAnimSite1120.USE = "hanim_l_asis";
HAnimHumanoid43.viewpoints[133] = HAnimSite1120;

HAnimSite HAnimSite1121 = createNode("HAnimSite");
HAnimSite1121.USE = "hanim_l_iliocristale";
HAnimHumanoid43.viewpoints[134] = HAnimSite1121;

HAnimSite HAnimSite1122 = createNode("HAnimSite");
HAnimSite1122.USE = "hanim_l_psis";
HAnimHumanoid43.viewpoints[135] = HAnimSite1122;

HAnimSite HAnimSite1123 = createNode("HAnimSite");
HAnimSite1123.USE = "hanim_l_trochanterion";
HAnimHumanoid43.viewpoints[136] = HAnimSite1123;

HAnimSite HAnimSite1124 = createNode("HAnimSite");
HAnimSite1124.USE = "hanim_r_asis";
HAnimHumanoid43.viewpoints[137] = HAnimSite1124;

HAnimSite HAnimSite1125 = createNode("HAnimSite");
HAnimSite1125.USE = "hanim_r_iliocristale";
HAnimHumanoid43.viewpoints[138] = HAnimSite1125;

HAnimSite HAnimSite1126 = createNode("HAnimSite");
HAnimSite1126.USE = "hanim_r_psis";
HAnimHumanoid43.viewpoints[139] = HAnimSite1126;

HAnimSite HAnimSite1127 = createNode("HAnimSite");
HAnimSite1127.USE = "hanim_r_trochanterion";
HAnimHumanoid43.viewpoints[140] = HAnimSite1127;

HAnimSite HAnimSite1128 = createNode("HAnimSite");
HAnimSite1128.USE = "hanim_navel";
HAnimHumanoid43.viewpoints[141] = HAnimSite1128;

HAnimSite HAnimSite1129 = createNode("HAnimSite");
HAnimSite1129.USE = "hanim_waist_preferred_anterior";
HAnimHumanoid43.viewpoints[142] = HAnimSite1129;

HAnimSite HAnimSite1130 = createNode("HAnimSite");
HAnimSite1130.USE = "hanim_waist_preferred_posterior";
HAnimHumanoid43.viewpoints[143] = HAnimSite1130;

HAnimSite HAnimSite1131 = createNode("HAnimSite");
HAnimSite1131.USE = "hanim_l_femoral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[144] = HAnimSite1131;

HAnimSite HAnimSite1132 = createNode("HAnimSite");
HAnimSite1132.USE = "hanim_l_femoral_medial_epicondyles";
HAnimHumanoid43.viewpoints[145] = HAnimSite1132;

HAnimSite HAnimSite1133 = createNode("HAnimSite");
HAnimSite1133.USE = "hanim_l_knee_crease";
HAnimHumanoid43.viewpoints[146] = HAnimSite1133;

HAnimSite HAnimSite1134 = createNode("HAnimSite");
HAnimSite1134.USE = "hanim_l_suprapatella";
HAnimHumanoid43.viewpoints[147] = HAnimSite1134;

HAnimSite HAnimSite1135 = createNode("HAnimSite");
HAnimSite1135.USE = "hanim_r_femoral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[148] = HAnimSite1135;

HAnimSite HAnimSite1136 = createNode("HAnimSite");
HAnimSite1136.USE = "hanim_r_femoral_medial_epicondyles";
HAnimHumanoid43.viewpoints[149] = HAnimSite1136;

HAnimSite HAnimSite1137 = createNode("HAnimSite");
HAnimSite1137.USE = "hanim_r_knee_crease";
HAnimHumanoid43.viewpoints[150] = HAnimSite1137;

HAnimSite HAnimSite1138 = createNode("HAnimSite");
HAnimSite1138.USE = "hanim_r_suprapatella";
HAnimHumanoid43.viewpoints[151] = HAnimSite1138;

HAnimSite HAnimSite1139 = createNode("HAnimSite");
HAnimSite1139.USE = "hanim_l_lateral_malleolus";
HAnimHumanoid43.viewpoints[152] = HAnimSite1139;

HAnimSite HAnimSite1140 = createNode("HAnimSite");
HAnimSite1140.USE = "hanim_l_medial_malleolus";
HAnimHumanoid43.viewpoints[153] = HAnimSite1140;

HAnimSite HAnimSite1141 = createNode("HAnimSite");
HAnimSite1141.USE = "hanim_l_tibiale";
HAnimHumanoid43.viewpoints[154] = HAnimSite1141;

HAnimSite HAnimSite1142 = createNode("HAnimSite");
HAnimSite1142.USE = "hanim_l_calcaneus_posterior";
HAnimHumanoid43.viewpoints[155] = HAnimSite1142;

HAnimSite HAnimSite1143 = createNode("HAnimSite");
HAnimSite1143.USE = "hanim_l_sphyrion";
HAnimHumanoid43.viewpoints[156] = HAnimSite1143;

HAnimSite HAnimSite1144 = createNode("HAnimSite");
HAnimSite1144.USE = "hanim_l_metatarsal_phalanx_1";
HAnimHumanoid43.viewpoints[157] = HAnimSite1144;

HAnimSite HAnimSite1145 = createNode("HAnimSite");
HAnimSite1145.USE = "hanim_l_metatarsal_phalanx_5";
HAnimHumanoid43.viewpoints[158] = HAnimSite1145;

HAnimSite HAnimSite1146 = createNode("HAnimSite");
HAnimSite1146.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[159] = HAnimSite1146;

HAnimSite HAnimSite1147 = createNode("HAnimSite");
HAnimSite1147.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[160] = HAnimSite1147;

HAnimSite HAnimSite1148 = createNode("HAnimSite");
HAnimSite1148.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[161] = HAnimSite1148;

HAnimSite HAnimSite1149 = createNode("HAnimSite");
HAnimSite1149.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[162] = HAnimSite1149;

HAnimSite HAnimSite1150 = createNode("HAnimSite");
HAnimSite1150.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[163] = HAnimSite1150;

HAnimSite HAnimSite1151 = createNode("HAnimSite");
HAnimSite1151.USE = "hanim_r_lateral_malleolus";
HAnimHumanoid43.viewpoints[164] = HAnimSite1151;

HAnimSite HAnimSite1152 = createNode("HAnimSite");
HAnimSite1152.USE = "hanim_r_medial_malleolus";
HAnimHumanoid43.viewpoints[165] = HAnimSite1152;

HAnimSite HAnimSite1153 = createNode("HAnimSite");
HAnimSite1153.USE = "hanim_r_tibiale";
HAnimHumanoid43.viewpoints[166] = HAnimSite1153;

HAnimSite HAnimSite1154 = createNode("HAnimSite");
HAnimSite1154.USE = "hanim_r_calcaneus_posterior";
HAnimHumanoid43.viewpoints[167] = HAnimSite1154;

HAnimSite HAnimSite1155 = createNode("HAnimSite");
HAnimSite1155.USE = "hanim_r_sphyrion";
HAnimHumanoid43.viewpoints[168] = HAnimSite1155;

HAnimSite HAnimSite1156 = createNode("HAnimSite");
HAnimSite1156.USE = "hanim_r_metatarsal_phalanx_1";
HAnimHumanoid43.viewpoints[169] = HAnimSite1156;

HAnimSite HAnimSite1157 = createNode("HAnimSite");
HAnimSite1157.USE = "hanim_r_metatarsal_phalanx_5";
HAnimHumanoid43.viewpoints[170] = HAnimSite1157;

HAnimSite HAnimSite1158 = createNode("HAnimSite");
HAnimSite1158.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[171] = HAnimSite1158;

HAnimSite HAnimSite1159 = createNode("HAnimSite");
HAnimSite1159.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[172] = HAnimSite1159;

HAnimSite HAnimSite1160 = createNode("HAnimSite");
HAnimSite1160.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[173] = HAnimSite1160;

HAnimSite HAnimSite1161 = createNode("HAnimSite");
HAnimSite1161.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[174] = HAnimSite1161;

HAnimSite HAnimSite1162 = createNode("HAnimSite");
HAnimSite1162.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[175] = HAnimSite1162;

HAnimSite HAnimSite1163 = createNode("HAnimSite");
HAnimSite1163.USE = "hanim_l_rib10";
HAnimHumanoid43.viewpoints[176] = HAnimSite1163;

HAnimSite HAnimSite1164 = createNode("HAnimSite");
HAnimSite1164.USE = "hanim_r_rib10";
HAnimHumanoid43.viewpoints[177] = HAnimSite1164;

HAnimSite HAnimSite1165 = createNode("HAnimSite");
HAnimSite1165.USE = "hanim_spine_1_middle_back";
HAnimHumanoid43.viewpoints[178] = HAnimSite1165;

HAnimSite HAnimSite1166 = createNode("HAnimSite");
HAnimSite1166.USE = "hanim_spine_2_middle_back";
HAnimHumanoid43.viewpoints[179] = HAnimSite1166;

HAnimSite HAnimSite1167 = createNode("HAnimSite");
HAnimSite1167.USE = "hanim_l_thelion";
HAnimHumanoid43.viewpoints[180] = HAnimSite1167;

HAnimSite HAnimSite1168 = createNode("HAnimSite");
HAnimSite1168.USE = "hanim_r_thelion";
HAnimHumanoid43.viewpoints[181] = HAnimSite1168;

HAnimSite HAnimSite1169 = createNode("HAnimSite");
HAnimSite1169.USE = "hanim_substernale";
HAnimHumanoid43.viewpoints[182] = HAnimSite1169;

HAnimSite HAnimSite1170 = createNode("HAnimSite");
HAnimSite1170.USE = "hanim_l_chest_midsagittal_plane";
HAnimHumanoid43.viewpoints[183] = HAnimSite1170;

HAnimSite HAnimSite1171 = createNode("HAnimSite");
HAnimSite1171.USE = "hanim_mesosternale";
HAnimHumanoid43.viewpoints[184] = HAnimSite1171;

HAnimSite HAnimSite1172 = createNode("HAnimSite");
HAnimSite1172.USE = "hanim_r_chest_midsagittal_plane";
HAnimHumanoid43.viewpoints[185] = HAnimSite1172;

HAnimSite HAnimSite1173 = createNode("HAnimSite");
HAnimSite1173.USE = "hanim_rear_center_midsagittal_plane";
HAnimHumanoid43.viewpoints[186] = HAnimSite1173;

HAnimSite HAnimSite1174 = createNode("HAnimSite");
HAnimSite1174.USE = "hanim_cervicale";
HAnimHumanoid43.viewpoints[187] = HAnimSite1174;

HAnimSite HAnimSite1175 = createNode("HAnimSite");
HAnimSite1175.USE = "hanim_l_neck_base";
HAnimHumanoid43.viewpoints[188] = HAnimSite1175;

HAnimSite HAnimSite1176 = createNode("HAnimSite");
HAnimSite1176.USE = "hanim_r_neck_base";
HAnimHumanoid43.viewpoints[189] = HAnimSite1176;

HAnimSite HAnimSite1177 = createNode("HAnimSite");
HAnimSite1177.USE = "hanim_suprasternale";
HAnimHumanoid43.viewpoints[190] = HAnimSite1177;

HAnimSite HAnimSite1178 = createNode("HAnimSite");
HAnimSite1178.USE = "hanim_l_acromion";
HAnimHumanoid43.viewpoints[191] = HAnimSite1178;

HAnimSite HAnimSite1179 = createNode("HAnimSite");
HAnimSite1179.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[192] = HAnimSite1179;

HAnimSite HAnimSite1180 = createNode("HAnimSite");
HAnimSite1180.USE = "hanim_l_axilla_posterior_folds";
HAnimHumanoid43.viewpoints[193] = HAnimSite1180;

HAnimSite HAnimSite1181 = createNode("HAnimSite");
HAnimSite1181.USE = "hanim_l_axilla_proximal";
HAnimHumanoid43.viewpoints[194] = HAnimSite1181;

HAnimSite HAnimSite1182 = createNode("HAnimSite");
HAnimSite1182.USE = "hanim_l_clavicale";
HAnimHumanoid43.viewpoints[195] = HAnimSite1182;

HAnimSite HAnimSite1183 = createNode("HAnimSite");
HAnimSite1183.USE = "hanim_r_acromion";
HAnimHumanoid43.viewpoints[196] = HAnimSite1183;

HAnimSite HAnimSite1184 = createNode("HAnimSite");
HAnimSite1184.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[197] = HAnimSite1184;

HAnimSite HAnimSite1185 = createNode("HAnimSite");
HAnimSite1185.USE = "hanim_r_axilla_posterior_folds";
HAnimHumanoid43.viewpoints[198] = HAnimSite1185;

HAnimSite HAnimSite1186 = createNode("HAnimSite");
HAnimSite1186.USE = "hanim_r_axilla_proximal";
HAnimHumanoid43.viewpoints[199] = HAnimSite1186;

HAnimSite HAnimSite1187 = createNode("HAnimSite");
HAnimSite1187.USE = "hanim_r_clavicale";
HAnimHumanoid43.viewpoints[200] = HAnimSite1187;

HAnimSite HAnimSite1188 = createNode("HAnimSite");
HAnimSite1188.USE = "hanim_adams_apple";
HAnimHumanoid43.viewpoints[201] = HAnimSite1188;

HAnimSite HAnimSite1189 = createNode("HAnimSite");
HAnimSite1189.USE = "hanim_glabella";
HAnimHumanoid43.viewpoints[202] = HAnimSite1189;

HAnimSite HAnimSite1190 = createNode("HAnimSite");
HAnimSite1190.USE = "hanim_l_ectocanthus";
HAnimHumanoid43.viewpoints[203] = HAnimSite1190;

HAnimSite HAnimSite1191 = createNode("HAnimSite");
HAnimSite1191.USE = "hanim_l_gonion";
HAnimHumanoid43.viewpoints[204] = HAnimSite1191;

HAnimSite HAnimSite1192 = createNode("HAnimSite");
HAnimSite1192.USE = "hanim_l_infraorbitale";
HAnimHumanoid43.viewpoints[205] = HAnimSite1192;

HAnimSite HAnimSite1193 = createNode("HAnimSite");
HAnimSite1193.USE = "hanim_l_tragion";
HAnimHumanoid43.viewpoints[206] = HAnimSite1193;

HAnimSite HAnimSite1194 = createNode("HAnimSite");
HAnimSite1194.USE = "hanim_menton";
HAnimHumanoid43.viewpoints[207] = HAnimSite1194;

HAnimSite HAnimSite1195 = createNode("HAnimSite");
HAnimSite1195.USE = "hanim_nuchale";
HAnimHumanoid43.viewpoints[208] = HAnimSite1195;

HAnimSite HAnimSite1196 = createNode("HAnimSite");
HAnimSite1196.USE = "hanim_opisthocranion";
HAnimHumanoid43.viewpoints[209] = HAnimSite1196;

HAnimSite HAnimSite1197 = createNode("HAnimSite");
HAnimSite1197.USE = "hanim_r_ectocanthus";
HAnimHumanoid43.viewpoints[210] = HAnimSite1197;

HAnimSite HAnimSite1198 = createNode("HAnimSite");
HAnimSite1198.USE = "hanim_r_gonion";
HAnimHumanoid43.viewpoints[211] = HAnimSite1198;

HAnimSite HAnimSite1199 = createNode("HAnimSite");
HAnimSite1199.USE = "hanim_r_infraorbitale";
HAnimHumanoid43.viewpoints[212] = HAnimSite1199;

HAnimSite HAnimSite1200 = createNode("HAnimSite");
HAnimSite1200.USE = "hanim_r_tragion";
HAnimHumanoid43.viewpoints[213] = HAnimSite1200;

HAnimSite HAnimSite1201 = createNode("HAnimSite");
HAnimSite1201.USE = "hanim_sellion";
HAnimHumanoid43.viewpoints[214] = HAnimSite1201;

HAnimSite HAnimSite1202 = createNode("HAnimSite");
HAnimSite1202.USE = "hanim_skull_vertex";
HAnimHumanoid43.viewpoints[215] = HAnimSite1202;

HAnimSite HAnimSite1203 = createNode("HAnimSite");
HAnimSite1203.USE = "hanim_supramenton";
HAnimHumanoid43.viewpoints[216] = HAnimSite1203;

HAnimSite HAnimSite1204 = createNode("HAnimSite");
HAnimSite1204.USE = "hanim_l_bideltoid";
HAnimHumanoid43.viewpoints[217] = HAnimSite1204;

HAnimSite HAnimSite1205 = createNode("HAnimSite");
HAnimSite1205.USE = "hanim_l_humeral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[218] = HAnimSite1205;

HAnimSite HAnimSite1206 = createNode("HAnimSite");
HAnimSite1206.USE = "hanim_l_humeral_medial_epicondyles";
HAnimHumanoid43.viewpoints[219] = HAnimSite1206;

HAnimSite HAnimSite1207 = createNode("HAnimSite");
HAnimSite1207.USE = "hanim_l_olecranon";
HAnimHumanoid43.viewpoints[220] = HAnimSite1207;

HAnimSite HAnimSite1208 = createNode("HAnimSite");
HAnimSite1208.USE = "hanim_l_radial_styloid";
HAnimHumanoid43.viewpoints[221] = HAnimSite1208;

HAnimSite HAnimSite1209 = createNode("HAnimSite");
HAnimSite1209.USE = "hanim_l_radiale";
HAnimHumanoid43.viewpoints[222] = HAnimSite1209;

HAnimSite HAnimSite1210 = createNode("HAnimSite");
HAnimSite1210.USE = "hanim_l_ulnar_styloid";
HAnimHumanoid43.viewpoints[223] = HAnimSite1210;

HAnimSite HAnimSite1211 = createNode("HAnimSite");
HAnimSite1211.USE = "hanim_l_metacarpal_phalanx_2";
HAnimHumanoid43.viewpoints[224] = HAnimSite1211;

HAnimSite HAnimSite1212 = createNode("HAnimSite");
HAnimSite1212.USE = "hanim_l_metacarpal_phalanx_3";
HAnimHumanoid43.viewpoints[225] = HAnimSite1212;

HAnimSite HAnimSite1213 = createNode("HAnimSite");
HAnimSite1213.USE = "hanim_l_metacarpal_phalanx_5";
HAnimHumanoid43.viewpoints[226] = HAnimSite1213;

HAnimSite HAnimSite1214 = createNode("HAnimSite");
HAnimSite1214.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[227] = HAnimSite1214;

HAnimSite HAnimSite1215 = createNode("HAnimSite");
HAnimSite1215.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[228] = HAnimSite1215;

HAnimSite HAnimSite1216 = createNode("HAnimSite");
HAnimSite1216.USE = "hanim_l_dactylion";
HAnimHumanoid43.viewpoints[229] = HAnimSite1216;

HAnimSite HAnimSite1217 = createNode("HAnimSite");
HAnimSite1217.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[230] = HAnimSite1217;

HAnimSite HAnimSite1218 = createNode("HAnimSite");
HAnimSite1218.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[231] = HAnimSite1218;

HAnimSite HAnimSite1219 = createNode("HAnimSite");
HAnimSite1219.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[232] = HAnimSite1219;

HAnimSite HAnimSite1220 = createNode("HAnimSite");
HAnimSite1220.USE = "hanim_r_bideltoid";
HAnimHumanoid43.viewpoints[233] = HAnimSite1220;

HAnimSite HAnimSite1221 = createNode("HAnimSite");
HAnimSite1221.USE = "hanim_r_humeral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[234] = HAnimSite1221;

HAnimSite HAnimSite1222 = createNode("HAnimSite");
HAnimSite1222.USE = "hanim_r_humeral_medial_epicondyles";
HAnimHumanoid43.viewpoints[235] = HAnimSite1222;

HAnimSite HAnimSite1223 = createNode("HAnimSite");
HAnimSite1223.USE = "hanim_r_olecranon";
HAnimHumanoid43.viewpoints[236] = HAnimSite1223;

HAnimSite HAnimSite1224 = createNode("HAnimSite");
HAnimSite1224.USE = "hanim_r_radial_styloid";
HAnimHumanoid43.viewpoints[237] = HAnimSite1224;

HAnimSite HAnimSite1225 = createNode("HAnimSite");
HAnimSite1225.USE = "hanim_r_radiale";
HAnimHumanoid43.viewpoints[238] = HAnimSite1225;

HAnimSite HAnimSite1226 = createNode("HAnimSite");
HAnimSite1226.USE = "hanim_r_ulnar_styloid";
HAnimHumanoid43.viewpoints[239] = HAnimSite1226;

HAnimSite HAnimSite1227 = createNode("HAnimSite");
HAnimSite1227.USE = "hanim_r_metacarpal_phalanx_2";
HAnimHumanoid43.viewpoints[240] = HAnimSite1227;

HAnimSite HAnimSite1228 = createNode("HAnimSite");
HAnimSite1228.USE = "hanim_r_metacarpal_phalanx_3";
HAnimHumanoid43.viewpoints[241] = HAnimSite1228;

HAnimSite HAnimSite1229 = createNode("HAnimSite");
HAnimSite1229.USE = "hanim_r_metacarpal_phalanx_5";
HAnimHumanoid43.viewpoints[242] = HAnimSite1229;

HAnimSite HAnimSite1230 = createNode("HAnimSite");
HAnimSite1230.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[243] = HAnimSite1230;

HAnimSite HAnimSite1231 = createNode("HAnimSite");
HAnimSite1231.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[244] = HAnimSite1231;

HAnimSite HAnimSite1232 = createNode("HAnimSite");
HAnimSite1232.USE = "hanim_r_dactylion";
HAnimHumanoid43.viewpoints[245] = HAnimSite1232;

HAnimSite HAnimSite1233 = createNode("HAnimSite");
HAnimSite1233.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[246] = HAnimSite1233;

HAnimSite HAnimSite1234 = createNode("HAnimSite");
HAnimSite1234.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[247] = HAnimSite1234;

HAnimSite HAnimSite1235 = createNode("HAnimSite");
HAnimSite1235.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[248] = HAnimSite1235;

children[4] = HAnimHumanoid43;

}
