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

Shape Shape61 = createNode("Shape");
LineSet LineSet62 = createNode("LineSet");
LineSet62.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate63 = createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet62.coord = Coordinate63;

//from humanoid_root to vl5 vertices 2
ColorRGBA ColorRGBA64 = createNode("ColorRGBA");
ColorRGBA64.USE = "HAnimSegmentLineColorRGBA";
LineSet62.color = ColorRGBA64;

Shape61.geometry = LineSet62;

HAnimSegment53.children[2] = Shape61;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

HAnimJoint HAnimJoint65 = createNode("HAnimJoint");
HAnimJoint65.name = "sacroiliac";
HAnimJoint65.DEF = "hanim_sacroiliac";
HAnimJoint65.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint65.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint65.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment66 = createNode("HAnimSegment");
HAnimSegment66.name = "pelvis";
HAnimSegment66.DEF = "hanim_pelvis";
Transform Transform67 = createNode("Transform");
Transform67.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Transform Transform68 = createNode("Transform");
//Empty Transform
Shape Shape69 = createNode("Shape");
Shape69.USE = "HAnimJointShape";
Transform68.child = new undefined();

Transform68.child[0] = Shape69;

Transform67.children = new MFNode();

Transform67.children[0] = Transform68;

HAnimSegment66.children = new MFNode();

HAnimSegment66.children[0] = Transform67;

Shape Shape70 = createNode("Shape");
LineSet LineSet71 = createNode("LineSet");
LineSet71.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate72 = createNode("Coordinate");
Coordinate72.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet71.coord = Coordinate72;

//from sacroiliac to l_hip vertices 2
ColorRGBA ColorRGBA73 = createNode("ColorRGBA");
ColorRGBA73.USE = "HAnimSegmentLineColorRGBA";
LineSet71.color = ColorRGBA73;

Shape70.geometry = LineSet71;

HAnimSegment66.children[1] = Shape70;

Shape Shape74 = createNode("Shape");
LineSet LineSet75 = createNode("LineSet");
LineSet75.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate76 = createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet75.coord = Coordinate76;

//from sacroiliac to r_hip vertices 2
ColorRGBA ColorRGBA77 = createNode("ColorRGBA");
ColorRGBA77.USE = "HAnimSegmentLineColorRGBA";
LineSet75.color = ColorRGBA77;

Shape74.geometry = LineSet75;

HAnimSegment66.children[2] = Shape74;

HAnimJoint65.children = new MFNode();

HAnimJoint65.children[0] = HAnimSegment66;

HAnimJoint HAnimJoint78 = createNode("HAnimJoint");
HAnimJoint78.name = "l_hip";
HAnimJoint78.DEF = "hanim_l_hip";
HAnimJoint78.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment79 = createNode("HAnimSegment");
HAnimSegment79.name = "l_thigh";
HAnimSegment79.DEF = "hanim_l_thigh";
Transform Transform80 = createNode("Transform");
Transform80.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Transform Transform81 = createNode("Transform");
//Empty Transform
Shape Shape82 = createNode("Shape");
Shape82.USE = "HAnimJointShape";
Transform81.child = new undefined();

Transform81.child[0] = Shape82;

Transform80.children = new MFNode();

Transform80.children[0] = Transform81;

HAnimSegment79.children = new MFNode();

HAnimSegment79.children[0] = Transform80;

Shape Shape83 = createNode("Shape");
LineSet LineSet84 = createNode("LineSet");
LineSet84.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate85 = createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet84.coord = Coordinate85;

//from l_hip to l_knee vertices 2
ColorRGBA ColorRGBA86 = createNode("ColorRGBA");
ColorRGBA86.USE = "HAnimSegmentLineColorRGBA";
LineSet84.color = ColorRGBA86;

Shape83.geometry = LineSet84;

HAnimSegment79.children[1] = Shape83;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimSegment79;

HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.name = "l_knee";
HAnimJoint87.DEF = "hanim_l_knee";
HAnimJoint87.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment88 = createNode("HAnimSegment");
HAnimSegment88.name = "l_calf";
HAnimSegment88.DEF = "hanim_l_calf";
Transform Transform89 = createNode("Transform");
Transform89.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Transform Transform90 = createNode("Transform");
//Empty Transform
Shape Shape91 = createNode("Shape");
Shape91.USE = "HAnimJointShape";
Transform90.child = new undefined();

Transform90.child[0] = Shape91;

Transform89.children = new MFNode();

Transform89.children[0] = Transform90;

HAnimSegment88.children = new MFNode();

HAnimSegment88.children[0] = Transform89;

Shape Shape92 = createNode("Shape");
LineSet LineSet93 = createNode("LineSet");
LineSet93.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate94 = createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet93.coord = Coordinate94;

//from l_knee to l_talocrural vertices 2
ColorRGBA ColorRGBA95 = createNode("ColorRGBA");
ColorRGBA95.USE = "HAnimSegmentLineColorRGBA";
LineSet93.color = ColorRGBA95;

Shape92.geometry = LineSet93;

HAnimSegment88.children[1] = Shape92;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimSegment88;

HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.name = "l_talocrural";
HAnimJoint96.DEF = "hanim_l_talocrural";
HAnimJoint96.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment97 = createNode("HAnimSegment");
HAnimSegment97.name = "l_talus";
HAnimSegment97.DEF = "hanim_l_talus";
Transform Transform98 = createNode("Transform");
Transform98.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform98.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform98.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
Transform Transform99 = createNode("Transform");
//Empty Transform left foot
Shape Shape100 = createNode("Shape");
Shape100.USE = "HAnimJointShape";
Transform99.child = new undefined();

Transform99.child[0] = Shape100;

Transform98.children = new MFNode();

Transform98.children[0] = Transform99;

HAnimSegment97.children = new MFNode();

HAnimSegment97.children[0] = Transform98;

Shape Shape101 = createNode("Shape");
LineSet LineSet102 = createNode("LineSet");
LineSet102.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate103 = createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097]);
LineSet102.coord = Coordinate103;

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA ColorRGBA104 = createNode("ColorRGBA");
ColorRGBA104.USE = "HAnimSegmentLineColorRGBA";
LineSet102.color = ColorRGBA104;

Shape101.geometry = LineSet102;

HAnimSegment97.children[1] = Shape101;

Shape Shape105 = createNode("Shape");
LineSet LineSet106 = createNode("LineSet");
LineSet106.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate107 = createNode("Coordinate");
Coordinate107.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278]);
LineSet106.coord = Coordinate107;

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA ColorRGBA108 = createNode("ColorRGBA");
ColorRGBA108.USE = "HAnimSegmentLineColorRGBA";
LineSet106.color = ColorRGBA108;

Shape105.geometry = LineSet106;

HAnimSegment97.children[2] = Shape105;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

HAnimJoint HAnimJoint109 = createNode("HAnimJoint");
HAnimJoint109.name = "l_talocalcaneonavicular";
HAnimJoint109.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint109.center = new SFVec3f(new float[0.0781,0.0283,-0.097]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment110 = createNode("HAnimSegment");
HAnimSegment110.name = "l_navicular";
HAnimSegment110.DEF = "hanim_l_navicular";
Transform Transform111 = createNode("Transform");
Transform111.translation = new SFVec3f(new float[0.0781,0.0283,-0.097]);
Transform Transform112 = createNode("Transform");
//Empty Transform
Shape Shape113 = createNode("Shape");
Shape113.USE = "HAnimJointShape";
Transform112.child = new undefined();

Transform112.child[0] = Shape113;

Transform111.children = new MFNode();

Transform111.children[0] = Transform112;

HAnimSegment110.children = new MFNode();

HAnimSegment110.children[0] = Transform111;

Shape Shape114 = createNode("Shape");
LineSet LineSet115 = createNode("LineSet");
LineSet115.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate116 = createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835]);
LineSet115.coord = Coordinate116;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA ColorRGBA117 = createNode("ColorRGBA");
ColorRGBA117.USE = "HAnimSegmentLineColorRGBA";
LineSet115.color = ColorRGBA117;

Shape114.geometry = LineSet115;

HAnimSegment110.children[1] = Shape114;

Shape Shape118 = createNode("Shape");
LineSet LineSet119 = createNode("LineSet");
LineSet119.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate120 = createNode("Coordinate");
Coordinate120.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0812,0.025,-0.0805]);
LineSet119.coord = Coordinate120;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA ColorRGBA121 = createNode("ColorRGBA");
ColorRGBA121.USE = "HAnimSegmentLineColorRGBA";
LineSet119.color = ColorRGBA121;

Shape118.geometry = LineSet119;

HAnimSegment110.children[2] = Shape118;

Shape Shape122 = createNode("Shape");
LineSet LineSet123 = createNode("LineSet");
LineSet123.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate124 = createNode("Coordinate");
Coordinate124.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821]);
LineSet123.coord = Coordinate124;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA ColorRGBA125 = createNode("ColorRGBA");
ColorRGBA125.USE = "HAnimSegmentLineColorRGBA";
LineSet123.color = ColorRGBA125;

Shape122.geometry = LineSet123;

HAnimSegment110.children[3] = Shape122;

HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimSegment110;

HAnimJoint HAnimJoint126 = createNode("HAnimJoint");
HAnimJoint126.name = "l_cuneonavicular_1";
HAnimJoint126.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint126.center = new SFVec3f(new float[0.0672,0.0235,-0.0835]);
HAnimJoint126.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint126.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment127 = createNode("HAnimSegment");
HAnimSegment127.name = "l_cuneiform_1";
HAnimSegment127.DEF = "hanim_l_cuneiform_1";
Transform Transform128 = createNode("Transform");
Transform128.translation = new SFVec3f(new float[0.0672,0.0235,-0.0835]);
Transform Transform129 = createNode("Transform");
//Empty Transform
Shape Shape130 = createNode("Shape");
Shape130.USE = "HAnimJointShape";
Transform129.child = new undefined();

Transform129.child[0] = Shape130;

Transform128.children = new MFNode();

Transform128.children[0] = Transform129;

HAnimSegment127.children = new MFNode();

HAnimSegment127.children[0] = Transform128;

Shape Shape131 = createNode("Shape");
LineSet LineSet132 = createNode("LineSet");
LineSet132.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate133 = createNode("Coordinate");
Coordinate133.point = new MFVec3f(new float[0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577]);
LineSet132.coord = Coordinate133;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA ColorRGBA134 = createNode("ColorRGBA");
ColorRGBA134.USE = "HAnimSegmentLineColorRGBA";
LineSet132.color = ColorRGBA134;

Shape131.geometry = LineSet132;

HAnimSegment127.children[1] = Shape131;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

HAnimJoint HAnimJoint135 = createNode("HAnimJoint");
HAnimJoint135.name = "l_tarsometatarsal_1";
HAnimJoint135.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint135.center = new SFVec3f(new float[0.0644,0.0147,-0.0577]);
HAnimJoint135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint135.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment136 = createNode("HAnimSegment");
HAnimSegment136.name = "l_metatarsal_1";
HAnimSegment136.DEF = "hanim_l_metatarsal_1";
Transform Transform137 = createNode("Transform");
Transform137.translation = new SFVec3f(new float[0.0644,0.0147,-0.0577]);
Transform Transform138 = createNode("Transform");
//Empty Transform
Shape Shape139 = createNode("Shape");
Shape139.USE = "HAnimJointShape";
Transform138.child = new undefined();

Transform138.child[0] = Shape139;

Transform137.children = new MFNode();

Transform137.children[0] = Transform138;

HAnimSegment136.children = new MFNode();

HAnimSegment136.children[0] = Transform137;

Shape Shape140 = createNode("Shape");
LineSet LineSet141 = createNode("LineSet");
LineSet141.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate142 = createNode("Coordinate");
Coordinate142.point = new MFVec3f(new float[0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083]);
LineSet141.coord = Coordinate142;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA ColorRGBA143 = createNode("ColorRGBA");
ColorRGBA143.USE = "HAnimSegmentLineColorRGBA";
LineSet141.color = ColorRGBA143;

Shape140.geometry = LineSet141;

HAnimSegment136.children[1] = Shape140;

HAnimJoint135.children = new MFNode();

HAnimJoint135.children[0] = HAnimSegment136;

HAnimJoint HAnimJoint144 = createNode("HAnimJoint");
HAnimJoint144.name = "l_metatarsophalangeal_1";
HAnimJoint144.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint144.center = new SFVec3f(new float[0.0619,0.0059,-0.0083]);
HAnimJoint144.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint144.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment145 = createNode("HAnimSegment");
HAnimSegment145.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment145.DEF = "hanim_l_tarsal_proximal_phalanx_1";
Transform Transform146 = createNode("Transform");
Transform146.translation = new SFVec3f(new float[0.0619,0.0059,-0.0083]);
Transform Transform147 = createNode("Transform");
//Empty Transform
Shape Shape148 = createNode("Shape");
Shape148.USE = "HAnimJointShape";
Transform147.child = new undefined();

Transform147.child[0] = Shape148;

Transform146.children = new MFNode();

Transform146.children[0] = Transform147;

HAnimSegment145.children = new MFNode();

HAnimSegment145.children[0] = Transform146;

Shape Shape149 = createNode("Shape");
LineSet LineSet150 = createNode("LineSet");
LineSet150.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate151 = createNode("Coordinate");
Coordinate151.point = new MFVec3f(new float[0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083]);
LineSet150.coord = Coordinate151;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA152 = createNode("ColorRGBA");
ColorRGBA152.USE = "HAnimSegmentLineColorRGBA";
LineSet150.color = ColorRGBA152;

Shape149.geometry = LineSet150;

HAnimSegment145.children[1] = Shape149;

HAnimJoint144.children = new MFNode();

HAnimJoint144.children[0] = HAnimSegment145;

HAnimJoint HAnimJoint153 = createNode("HAnimJoint");
HAnimJoint153.name = "l_tarsal_interphalangeal_1";
HAnimJoint153.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint153.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint153.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint144.children[1] = HAnimJoint153;

HAnimJoint135.children[1] = HAnimJoint144;

HAnimJoint126.children[1] = HAnimJoint135;

HAnimJoint109.children[1] = HAnimJoint126;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.name = "l_cuneonavicular_2";
HAnimJoint154.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint154.center = new SFVec3f(new float[0.0812,0.025,-0.0805]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment155 = createNode("HAnimSegment");
HAnimSegment155.name = "l_cuneiform_2";
HAnimSegment155.DEF = "hanim_l_cuneiform_2";
Transform Transform156 = createNode("Transform");
Transform156.translation = new SFVec3f(new float[0.0812,0.025,-0.0805]);
Transform Transform157 = createNode("Transform");
//Empty Transform
Shape Shape158 = createNode("Shape");
Shape158.USE = "HAnimJointShape";
Transform157.child = new undefined();

Transform157.child[0] = Shape158;

Transform156.children = new MFNode();

Transform156.children[0] = Transform157;

HAnimSegment155.children = new MFNode();

HAnimSegment155.children[0] = Transform156;

Shape Shape159 = createNode("Shape");
LineSet LineSet160 = createNode("LineSet");
LineSet160.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate161 = createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[0.0812,0.025,-0.0805,0.08,0.0175,-0.0608]);
LineSet160.coord = Coordinate161;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA162 = createNode("ColorRGBA");
ColorRGBA162.USE = "HAnimSegmentLineColorRGBA";
LineSet160.color = ColorRGBA162;

Shape159.geometry = LineSet160;

HAnimSegment155.children[1] = Shape159;

HAnimJoint154.children = new MFNode();

HAnimJoint154.children[0] = HAnimSegment155;

HAnimJoint HAnimJoint163 = createNode("HAnimJoint");
HAnimJoint163.name = "l_tarsometatarsal_2";
HAnimJoint163.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint163.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
HAnimJoint163.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint163.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment164 = createNode("HAnimSegment");
HAnimSegment164.name = "l_metatarsal_2";
HAnimSegment164.DEF = "hanim_l_metatarsal_2";
Transform Transform165 = createNode("Transform");
Transform165.translation = new SFVec3f(new float[0.08,0.0175,-0.0608]);
Transform Transform166 = createNode("Transform");
//Empty Transform
Shape Shape167 = createNode("Shape");
Shape167.USE = "HAnimJointShape";
Transform166.child = new undefined();

Transform166.child[0] = Shape167;

Transform165.children = new MFNode();

Transform165.children[0] = Transform166;

HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = Transform165;

Shape Shape168 = createNode("Shape");
LineSet LineSet169 = createNode("LineSet");
LineSet169.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate170 = createNode("Coordinate");
Coordinate170.point = new MFVec3f(new float[0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
LineSet169.coord = Coordinate170;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA171 = createNode("ColorRGBA");
ColorRGBA171.USE = "HAnimSegmentLineColorRGBA";
LineSet169.color = ColorRGBA171;

Shape168.geometry = LineSet169;

HAnimSegment164.children[1] = Shape168;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.name = "l_metatarsophalangeal_2";
HAnimJoint172.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint172.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment173 = createNode("HAnimSegment");
HAnimSegment173.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment173.DEF = "hanim_l_tarsal_proximal_phalanx_2";
Transform Transform174 = createNode("Transform");
Transform174.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
Transform Transform175 = createNode("Transform");
//Empty Transform
Shape Shape176 = createNode("Shape");
Shape176.USE = "HAnimJointShape";
Transform175.child = new undefined();

Transform175.child[0] = Shape176;

Transform174.children = new MFNode();

Transform174.children[0] = Transform175;

HAnimSegment173.children = new MFNode();

HAnimSegment173.children[0] = Transform174;

Shape Shape177 = createNode("Shape");
LineSet LineSet178 = createNode("LineSet");
LineSet178.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate179 = createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0041,0.0121]);
LineSet178.coord = Coordinate179;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA180 = createNode("ColorRGBA");
ColorRGBA180.USE = "HAnimSegmentLineColorRGBA";
LineSet178.color = ColorRGBA180;

Shape177.geometry = LineSet178;

HAnimSegment173.children[1] = Shape177;

HAnimJoint172.children = new MFNode();

HAnimJoint172.children[0] = HAnimSegment173;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint181.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint181.center = new SFVec3f(new float[0.0841,0.0041,0.0121]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment182 = createNode("HAnimSegment");
HAnimSegment182.name = "l_tarsal_middle_phalanx_2";
HAnimSegment182.DEF = "hanim_l_tarsal_middle_phalanx_2";
Transform Transform183 = createNode("Transform");
Transform183.translation = new SFVec3f(new float[0.0841,0.0041,0.0121]);
Transform Transform184 = createNode("Transform");
//Empty Transform
Shape Shape185 = createNode("Shape");
Shape185.USE = "HAnimJointShape";
Transform184.child = new undefined();

Transform184.child[0] = Shape185;

Transform183.children = new MFNode();

Transform183.children[0] = Transform184;

HAnimSegment182.children = new MFNode();

HAnimSegment182.children[0] = Transform183;

Shape Shape186 = createNode("Shape");
LineSet LineSet187 = createNode("LineSet");
LineSet187.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate188 = createNode("Coordinate");
Coordinate188.point = new MFVec3f(new float[0.0841,0.0041,0.0121,0.0841,0.0013,0.0216]);
LineSet187.coord = Coordinate188;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA189 = createNode("ColorRGBA");
ColorRGBA189.USE = "HAnimSegmentLineColorRGBA";
LineSet187.color = ColorRGBA189;

Shape186.geometry = LineSet187;

HAnimSegment182.children[1] = Shape186;

HAnimJoint181.children = new MFNode();

HAnimJoint181.children[0] = HAnimSegment182;

HAnimJoint HAnimJoint190 = createNode("HAnimJoint");
HAnimJoint190.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint190.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint190.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint190.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint190.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.children[1] = HAnimJoint190;

HAnimJoint172.children[1] = HAnimJoint181;

HAnimJoint163.children[1] = HAnimJoint172;

HAnimJoint154.children[1] = HAnimJoint163;

HAnimJoint109.children[2] = HAnimJoint154;

HAnimJoint HAnimJoint191 = createNode("HAnimJoint");
HAnimJoint191.name = "l_cuneonavicular_3";
HAnimJoint191.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint191.center = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
HAnimJoint191.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint191.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment192 = createNode("HAnimSegment");
HAnimSegment192.name = "l_cuneiform_3";
HAnimSegment192.DEF = "hanim_l_cuneiform_3";
Transform Transform193 = createNode("Transform");
Transform193.translation = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
Transform Transform194 = createNode("Transform");
//Empty Transform
Shape Shape195 = createNode("Shape");
Shape195.USE = "HAnimJointShape";
Transform194.child = new undefined();

Transform194.child[0] = Shape195;

Transform193.children = new MFNode();

Transform193.children[0] = Transform194;

HAnimSegment192.children = new MFNode();

HAnimSegment192.children[0] = Transform193;

Shape Shape196 = createNode("Shape");
LineSet LineSet197 = createNode("LineSet");
LineSet197.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate198 = createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625]);
LineSet197.coord = Coordinate198;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA ColorRGBA199 = createNode("ColorRGBA");
ColorRGBA199.USE = "HAnimSegmentLineColorRGBA";
LineSet197.color = ColorRGBA199;

Shape196.geometry = LineSet197;

HAnimSegment192.children[1] = Shape196;

HAnimJoint191.children = new MFNode();

HAnimJoint191.children[0] = HAnimSegment192;

HAnimJoint HAnimJoint200 = createNode("HAnimJoint");
HAnimJoint200.name = "l_tarsometatarsal_3";
HAnimJoint200.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint200.center = new SFVec3f(new float[0.0944,0.0175,-0.0625]);
HAnimJoint200.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint200.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment201 = createNode("HAnimSegment");
HAnimSegment201.name = "l_metatarsal_3";
HAnimSegment201.DEF = "hanim_l_metatarsal_3";
Transform Transform202 = createNode("Transform");
Transform202.translation = new SFVec3f(new float[0.0944,0.0175,-0.0625]);
Transform Transform203 = createNode("Transform");
//Empty Transform
Shape Shape204 = createNode("Shape");
Shape204.USE = "HAnimJointShape";
Transform203.child = new undefined();

Transform203.child[0] = Shape204;

Transform202.children = new MFNode();

Transform202.children[0] = Transform203;

HAnimSegment201.children = new MFNode();

HAnimSegment201.children[0] = Transform202;

Shape Shape205 = createNode("Shape");
LineSet LineSet206 = createNode("LineSet");
LineSet206.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate207 = createNode("Coordinate");
Coordinate207.point = new MFVec3f(new float[0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065]);
LineSet206.coord = Coordinate207;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA ColorRGBA208 = createNode("ColorRGBA");
ColorRGBA208.USE = "HAnimSegmentLineColorRGBA";
LineSet206.color = ColorRGBA208;

Shape205.geometry = LineSet206;

HAnimSegment201.children[1] = Shape205;

HAnimJoint200.children = new MFNode();

HAnimJoint200.children[0] = HAnimSegment201;

HAnimJoint HAnimJoint209 = createNode("HAnimJoint");
HAnimJoint209.name = "l_metatarsophalangeal_3";
HAnimJoint209.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint209.center = new SFVec3f(new float[0.0963,0.0065,-0.0065]);
HAnimJoint209.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint209.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment210 = createNode("HAnimSegment");
HAnimSegment210.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment210.DEF = "hanim_l_tarsal_proximal_phalanx_3";
Transform Transform211 = createNode("Transform");
Transform211.translation = new SFVec3f(new float[0.0963,0.0065,-0.0065]);
Transform Transform212 = createNode("Transform");
//Empty Transform
Shape Shape213 = createNode("Shape");
Shape213.USE = "HAnimJointShape";
Transform212.child = new undefined();

Transform212.child[0] = Shape213;

Transform211.children = new MFNode();

Transform211.children[0] = Transform212;

HAnimSegment210.children = new MFNode();

HAnimSegment210.children[0] = Transform211;

Shape Shape214 = createNode("Shape");
LineSet LineSet215 = createNode("LineSet");
LineSet215.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate216 = createNode("Coordinate");
Coordinate216.point = new MFVec3f(new float[0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086]);
LineSet215.coord = Coordinate216;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA217 = createNode("ColorRGBA");
ColorRGBA217.USE = "HAnimSegmentLineColorRGBA";
LineSet215.color = ColorRGBA217;

Shape214.geometry = LineSet215;

HAnimSegment210.children[1] = Shape214;

HAnimJoint209.children = new MFNode();

HAnimJoint209.children[0] = HAnimSegment210;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint218.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint218.center = new SFVec3f(new float[0.0987,0.0034,0.0086]);
HAnimJoint218.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint218.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment219 = createNode("HAnimSegment");
HAnimSegment219.name = "l_tarsal_middle_phalanx_3";
HAnimSegment219.DEF = "hanim_l_tarsal_middle_phalanx_3";
Transform Transform220 = createNode("Transform");
Transform220.translation = new SFVec3f(new float[0.0987,0.0034,0.0086]);
Transform Transform221 = createNode("Transform");
//Empty Transform
Shape Shape222 = createNode("Shape");
Shape222.USE = "HAnimJointShape";
Transform221.child = new undefined();

Transform221.child[0] = Shape222;

Transform220.children = new MFNode();

Transform220.children[0] = Transform221;

HAnimSegment219.children = new MFNode();

HAnimSegment219.children[0] = Transform220;

Shape Shape223 = createNode("Shape");
LineSet LineSet224 = createNode("LineSet");
LineSet224.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate225 = createNode("Coordinate");
Coordinate225.point = new MFVec3f(new float[0.0987,0.0034,0.0086,0.1002,0.0013,0.0178]);
LineSet224.coord = Coordinate225;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA226 = createNode("ColorRGBA");
ColorRGBA226.USE = "HAnimSegmentLineColorRGBA";
LineSet224.color = ColorRGBA226;

Shape223.geometry = LineSet224;

HAnimSegment219.children[1] = Shape223;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

HAnimJoint HAnimJoint227 = createNode("HAnimJoint");
HAnimJoint227.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint227.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint227.center = new SFVec3f(new float[0.1002,0.0013,0.0178]);
HAnimJoint227.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint227.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint218.children[1] = HAnimJoint227;

HAnimJoint209.children[1] = HAnimJoint218;

HAnimJoint200.children[1] = HAnimJoint209;

HAnimJoint191.children[1] = HAnimJoint200;

HAnimJoint109.children[3] = HAnimJoint191;

HAnimJoint96.children[1] = HAnimJoint109;

HAnimJoint HAnimJoint228 = createNode("HAnimJoint");
HAnimJoint228.name = "l_calcaneocuboid";
HAnimJoint228.DEF = "hanim_l_calcaneocuboid";
HAnimJoint228.center = new SFVec3f(new float[0.0889,0.0494,-0.1278]);
HAnimJoint228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment229 = createNode("HAnimSegment");
HAnimSegment229.name = "l_calcaneus";
HAnimSegment229.DEF = "hanim_l_calcaneus";
Transform Transform230 = createNode("Transform");
Transform230.translation = new SFVec3f(new float[0.0889,0.0494,-0.1278]);
Transform Transform231 = createNode("Transform");
//Empty Transform
Shape Shape232 = createNode("Shape");
Shape232.USE = "HAnimJointShape";
Transform231.child = new undefined();

Transform231.child[0] = Shape232;

Transform230.children = new MFNode();

Transform230.children[0] = Transform231;

HAnimSegment229.children = new MFNode();

HAnimSegment229.children[0] = Transform230;

Shape Shape233 = createNode("Shape");
LineSet LineSet234 = createNode("LineSet");
LineSet234.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate235 = createNode("Coordinate");
Coordinate235.point = new MFVec3f(new float[0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998]);
LineSet234.coord = Coordinate235;

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA ColorRGBA236 = createNode("ColorRGBA");
ColorRGBA236.USE = "HAnimSegmentLineColorRGBA";
LineSet234.color = ColorRGBA236;

Shape233.geometry = LineSet234;

HAnimSegment229.children[1] = Shape233;

HAnimJoint228.children = new MFNode();

HAnimJoint228.children[0] = HAnimSegment229;

HAnimJoint HAnimJoint237 = createNode("HAnimJoint");
HAnimJoint237.name = "l_transversetarsal";
HAnimJoint237.DEF = "hanim_l_transversetarsal";
HAnimJoint237.center = new SFVec3f(new float[0.1105,0.0267,-0.0998]);
HAnimJoint237.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint237.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment238 = createNode("HAnimSegment");
HAnimSegment238.name = "l_cuboid";
HAnimSegment238.DEF = "hanim_l_cuboid";
Transform Transform239 = createNode("Transform");
Transform239.translation = new SFVec3f(new float[0.1105,0.0267,-0.0998]);
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
Coordinate244.point = new MFVec3f(new float[0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634]);
LineSet243.coord = Coordinate244;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA ColorRGBA245 = createNode("ColorRGBA");
ColorRGBA245.USE = "HAnimSegmentLineColorRGBA";
LineSet243.color = ColorRGBA245;

Shape242.geometry = LineSet243;

HAnimSegment238.children[1] = Shape242;

Shape Shape246 = createNode("Shape");
LineSet LineSet247 = createNode("LineSet");
LineSet247.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate248 = createNode("Coordinate");
Coordinate248.point = new MFVec3f(new float[0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671]);
LineSet247.coord = Coordinate248;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA ColorRGBA249 = createNode("ColorRGBA");
ColorRGBA249.USE = "HAnimSegmentLineColorRGBA";
LineSet247.color = ColorRGBA249;

Shape246.geometry = LineSet247;

HAnimSegment238.children[2] = Shape246;

HAnimJoint237.children = new MFNode();

HAnimJoint237.children[0] = HAnimSegment238;

HAnimJoint HAnimJoint250 = createNode("HAnimJoint");
HAnimJoint250.name = "l_tarsometatarsal_4";
HAnimJoint250.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint250.center = new SFVec3f(new float[0.1063,0.016,-0.0634]);
HAnimJoint250.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint250.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment251 = createNode("HAnimSegment");
HAnimSegment251.name = "l_metatarsal_4";
HAnimSegment251.DEF = "hanim_l_metatarsal_4";
Transform Transform252 = createNode("Transform");
Transform252.translation = new SFVec3f(new float[0.1063,0.016,-0.0634]);
Transform Transform253 = createNode("Transform");
//Empty Transform
Shape Shape254 = createNode("Shape");
Shape254.USE = "HAnimJointShape";
Transform253.child = new undefined();

Transform253.child[0] = Shape254;

Transform252.children = new MFNode();

Transform252.children[0] = Transform253;

HAnimSegment251.children = new MFNode();

HAnimSegment251.children[0] = Transform252;

Shape Shape255 = createNode("Shape");
LineSet LineSet256 = createNode("LineSet");
LineSet256.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate257 = createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107]);
LineSet256.coord = Coordinate257;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA ColorRGBA258 = createNode("ColorRGBA");
ColorRGBA258.USE = "HAnimSegmentLineColorRGBA";
LineSet256.color = ColorRGBA258;

Shape255.geometry = LineSet256;

HAnimSegment251.children[1] = Shape255;

HAnimJoint250.children = new MFNode();

HAnimJoint250.children[0] = HAnimSegment251;

HAnimJoint HAnimJoint259 = createNode("HAnimJoint");
HAnimJoint259.name = "l_metatarsophalangeal_4";
HAnimJoint259.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint259.center = new SFVec3f(new float[0.1097,0.0058,-0.0107]);
HAnimJoint259.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint259.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment260 = createNode("HAnimSegment");
HAnimSegment260.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment260.DEF = "hanim_l_tarsal_proximal_phalanx_4";
Transform Transform261 = createNode("Transform");
Transform261.translation = new SFVec3f(new float[0.1097,0.0058,-0.0107]);
Transform Transform262 = createNode("Transform");
//Empty Transform
Shape Shape263 = createNode("Shape");
Shape263.USE = "HAnimJointShape";
Transform262.child = new undefined();

Transform262.child[0] = Shape263;

Transform261.children = new MFNode();

Transform261.children[0] = Transform262;

HAnimSegment260.children = new MFNode();

HAnimSegment260.children[0] = Transform261;

Shape Shape264 = createNode("Shape");
LineSet LineSet265 = createNode("LineSet");
LineSet265.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate266 = createNode("Coordinate");
Coordinate266.point = new MFVec3f(new float[0.1097,0.0058,-0.0107,0.114,0.0037,0.0044]);
LineSet265.coord = Coordinate266;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA267 = createNode("ColorRGBA");
ColorRGBA267.USE = "HAnimSegmentLineColorRGBA";
LineSet265.color = ColorRGBA267;

Shape264.geometry = LineSet265;

HAnimSegment260.children[1] = Shape264;

HAnimJoint259.children = new MFNode();

HAnimJoint259.children[0] = HAnimSegment260;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint268.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint268.center = new SFVec3f(new float[0.114,0.0037,0.0044]);
HAnimJoint268.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint268.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment269 = createNode("HAnimSegment");
HAnimSegment269.name = "l_tarsal_middle_phalanx_4";
HAnimSegment269.DEF = "hanim_l_tarsal_middle_phalanx_4";
Transform Transform270 = createNode("Transform");
Transform270.translation = new SFVec3f(new float[0.114,0.0037,0.0044]);
Transform Transform271 = createNode("Transform");
//Empty Transform
Shape Shape272 = createNode("Shape");
Shape272.USE = "HAnimJointShape";
Transform271.child = new undefined();

Transform271.child[0] = Shape272;

Transform270.children = new MFNode();

Transform270.children[0] = Transform271;

HAnimSegment269.children = new MFNode();

HAnimSegment269.children[0] = Transform270;

Shape Shape273 = createNode("Shape");
LineSet LineSet274 = createNode("LineSet");
LineSet274.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate275 = createNode("Coordinate");
Coordinate275.point = new MFVec3f(new float[0.114,0.0037,0.0044,0.1155,0.0008,0.0118]);
LineSet274.coord = Coordinate275;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA276 = createNode("ColorRGBA");
ColorRGBA276.USE = "HAnimSegmentLineColorRGBA";
LineSet274.color = ColorRGBA276;

Shape273.geometry = LineSet274;

HAnimSegment269.children[1] = Shape273;

HAnimJoint268.children = new MFNode();

HAnimJoint268.children[0] = HAnimSegment269;

HAnimJoint HAnimJoint277 = createNode("HAnimJoint");
HAnimJoint277.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint277.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint277.center = new SFVec3f(new float[0.1155,0.0008,0.0118]);
HAnimJoint277.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint277.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint268.children[1] = HAnimJoint277;

HAnimJoint259.children[1] = HAnimJoint268;

HAnimJoint250.children[1] = HAnimJoint259;

HAnimJoint237.children[1] = HAnimJoint250;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.name = "l_tarsometatarsal_5";
HAnimJoint278.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint278.center = new SFVec3f(new float[0.1206,0.0124,-0.0671]);
HAnimJoint278.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint278.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment279 = createNode("HAnimSegment");
HAnimSegment279.name = "l_metatarsal_5";
HAnimSegment279.DEF = "hanim_l_metatarsal_5";
Transform Transform280 = createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.1206,0.0124,-0.0671]);
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
Coordinate285.point = new MFVec3f(new float[0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153]);
LineSet284.coord = Coordinate285;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA ColorRGBA286 = createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSegmentLineColorRGBA";
LineSet284.color = ColorRGBA286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

HAnimJoint HAnimJoint287 = createNode("HAnimJoint");
HAnimJoint287.name = "l_metatarsophalangeal_5";
HAnimJoint287.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint287.center = new SFVec3f(new float[0.1239,0.0051,-0.0153]);
HAnimJoint287.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint287.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment288 = createNode("HAnimSegment");
HAnimSegment288.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment288.DEF = "hanim_l_tarsal_proximal_phalanx_5";
Transform Transform289 = createNode("Transform");
Transform289.translation = new SFVec3f(new float[0.1239,0.0051,-0.0153]);
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
Coordinate294.point = new MFVec3f(new float[0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077]);
LineSet293.coord = Coordinate294;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA295 = createNode("ColorRGBA");
ColorRGBA295.USE = "HAnimSegmentLineColorRGBA";
LineSet293.color = ColorRGBA295;

Shape292.geometry = LineSet293;

HAnimSegment288.children[1] = Shape292;

HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint296.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint296.center = new SFVec3f(new float[0.1262,0.0023,-0.0077]);
HAnimJoint296.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint296.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment297 = createNode("HAnimSegment");
HAnimSegment297.name = "l_tarsal_middle_phalanx_5";
HAnimSegment297.DEF = "hanim_l_tarsal_middle_phalanx_5";
Transform Transform298 = createNode("Transform");
Transform298.translation = new SFVec3f(new float[0.1262,0.0023,-0.0077]);
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
Coordinate303.point = new MFVec3f(new float[0.1262,0.0023,-0.0077,0.1271,0,0]);
LineSet302.coord = Coordinate303;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA304 = createNode("ColorRGBA");
ColorRGBA304.USE = "HAnimSegmentLineColorRGBA";
LineSet302.color = ColorRGBA304;

Shape301.geometry = LineSet302;

HAnimSegment297.children[1] = Shape301;

HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = HAnimSegment297;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint305.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint305.center = new SFVec3f(new float[0.1271,0,0]);
HAnimJoint305.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint305.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint296.children[1] = HAnimJoint305;

HAnimJoint287.children[1] = HAnimJoint296;

HAnimJoint278.children[1] = HAnimJoint287;

HAnimJoint237.children[2] = HAnimJoint278;

HAnimJoint228.children[1] = HAnimJoint237;

HAnimJoint96.children[2] = HAnimJoint228;

HAnimJoint87.children[1] = HAnimJoint96;

HAnimJoint78.children[1] = HAnimJoint87;

HAnimJoint65.children[1] = HAnimJoint78;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.name = "r_hip";
HAnimJoint306.DEF = "hanim_r_hip";
HAnimJoint306.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint306.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint306.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment307 = createNode("HAnimSegment");
HAnimSegment307.name = "r_thigh";
HAnimSegment307.DEF = "hanim_r_thigh";
Transform Transform308 = createNode("Transform");
Transform308.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform309 = createNode("Transform");
//Empty Transform
Shape Shape310 = createNode("Shape");
Shape310.USE = "HAnimJointShape";
Transform309.child = new undefined();

Transform309.child[0] = Shape310;

Transform308.children = new MFNode();

Transform308.children[0] = Transform309;

HAnimSegment307.children = new MFNode();

HAnimSegment307.children[0] = Transform308;

Shape Shape311 = createNode("Shape");
LineSet LineSet312 = createNode("LineSet");
LineSet312.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate313 = createNode("Coordinate");
Coordinate313.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet312.coord = Coordinate313;

//from r_hip to r_knee vertices 2
ColorRGBA ColorRGBA314 = createNode("ColorRGBA");
ColorRGBA314.USE = "HAnimSegmentLineColorRGBA";
LineSet312.color = ColorRGBA314;

Shape311.geometry = LineSet312;

HAnimSegment307.children[1] = Shape311;

HAnimJoint306.children = new MFNode();

HAnimJoint306.children[0] = HAnimSegment307;

HAnimJoint HAnimJoint315 = createNode("HAnimJoint");
HAnimJoint315.name = "r_knee";
HAnimJoint315.DEF = "hanim_r_knee";
HAnimJoint315.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint315.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint315.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment316 = createNode("HAnimSegment");
HAnimSegment316.name = "r_calf";
HAnimSegment316.DEF = "hanim_r_calf";
Transform Transform317 = createNode("Transform");
Transform317.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform318 = createNode("Transform");
//Empty Transform
Shape Shape319 = createNode("Shape");
Shape319.USE = "HAnimJointShape";
Transform318.child = new undefined();

Transform318.child[0] = Shape319;

Transform317.children = new MFNode();

Transform317.children[0] = Transform318;

HAnimSegment316.children = new MFNode();

HAnimSegment316.children[0] = Transform317;

Shape Shape320 = createNode("Shape");
LineSet LineSet321 = createNode("LineSet");
LineSet321.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate322 = createNode("Coordinate");
Coordinate322.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet321.coord = Coordinate322;

//from r_knee to r_talocrural vertices 2
ColorRGBA ColorRGBA323 = createNode("ColorRGBA");
ColorRGBA323.USE = "HAnimSegmentLineColorRGBA";
LineSet321.color = ColorRGBA323;

Shape320.geometry = LineSet321;

HAnimSegment316.children[1] = Shape320;

HAnimJoint315.children = new MFNode();

HAnimJoint315.children[0] = HAnimSegment316;

HAnimJoint HAnimJoint324 = createNode("HAnimJoint");
HAnimJoint324.name = "r_talocrural";
HAnimJoint324.DEF = "hanim_r_talocrural";
HAnimJoint324.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint324.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint324.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment325 = createNode("HAnimSegment");
HAnimSegment325.name = "r_talus";
HAnimSegment325.DEF = "hanim_r_talus";
Transform Transform326 = createNode("Transform");
Transform326.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform326.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform326.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
Transform Transform327 = createNode("Transform");
//Empty Transform right foot
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
Coordinate331.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097]);
LineSet330.coord = Coordinate331;

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA ColorRGBA332 = createNode("ColorRGBA");
ColorRGBA332.USE = "HAnimSegmentLineColorRGBA";
LineSet330.color = ColorRGBA332;

Shape329.geometry = LineSet330;

HAnimSegment325.children[1] = Shape329;

Shape Shape333 = createNode("Shape");
LineSet LineSet334 = createNode("LineSet");
LineSet334.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate335 = createNode("Coordinate");
Coordinate335.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278]);
LineSet334.coord = Coordinate335;

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA ColorRGBA336 = createNode("ColorRGBA");
ColorRGBA336.USE = "HAnimSegmentLineColorRGBA";
LineSet334.color = ColorRGBA336;

Shape333.geometry = LineSet334;

HAnimSegment325.children[2] = Shape333;

HAnimJoint324.children = new MFNode();

HAnimJoint324.children[0] = HAnimSegment325;

HAnimJoint HAnimJoint337 = createNode("HAnimJoint");
HAnimJoint337.name = "r_talocalcaneonavicular";
HAnimJoint337.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint337.center = new SFVec3f(new float[-0.0781,0.0283,-0.097]);
HAnimJoint337.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint337.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment338 = createNode("HAnimSegment");
HAnimSegment338.name = "r_navicular";
HAnimSegment338.DEF = "hanim_r_navicular";
Transform Transform339 = createNode("Transform");
Transform339.translation = new SFVec3f(new float[-0.0781,0.0283,-0.097]);
Transform Transform340 = createNode("Transform");
//Empty Transform
Shape Shape341 = createNode("Shape");
Shape341.USE = "HAnimJointShape";
Transform340.child = new undefined();

Transform340.child[0] = Shape341;

Transform339.children = new MFNode();

Transform339.children[0] = Transform340;

HAnimSegment338.children = new MFNode();

HAnimSegment338.children[0] = Transform339;

Shape Shape342 = createNode("Shape");
LineSet LineSet343 = createNode("LineSet");
LineSet343.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate344 = createNode("Coordinate");
Coordinate344.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835]);
LineSet343.coord = Coordinate344;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA ColorRGBA345 = createNode("ColorRGBA");
ColorRGBA345.USE = "HAnimSegmentLineColorRGBA";
LineSet343.color = ColorRGBA345;

Shape342.geometry = LineSet343;

HAnimSegment338.children[1] = Shape342;

Shape Shape346 = createNode("Shape");
LineSet LineSet347 = createNode("LineSet");
LineSet347.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate348 = createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805]);
LineSet347.coord = Coordinate348;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA ColorRGBA349 = createNode("ColorRGBA");
ColorRGBA349.USE = "HAnimSegmentLineColorRGBA";
LineSet347.color = ColorRGBA349;

Shape346.geometry = LineSet347;

HAnimSegment338.children[2] = Shape346;

Shape Shape350 = createNode("Shape");
LineSet LineSet351 = createNode("LineSet");
LineSet351.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate352 = createNode("Coordinate");
Coordinate352.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821]);
LineSet351.coord = Coordinate352;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA ColorRGBA353 = createNode("ColorRGBA");
ColorRGBA353.USE = "HAnimSegmentLineColorRGBA";
LineSet351.color = ColorRGBA353;

Shape350.geometry = LineSet351;

HAnimSegment338.children[3] = Shape350;

HAnimJoint337.children = new MFNode();

HAnimJoint337.children[0] = HAnimSegment338;

HAnimJoint HAnimJoint354 = createNode("HAnimJoint");
HAnimJoint354.name = "r_cuneonavicular_1";
HAnimJoint354.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint354.center = new SFVec3f(new float[-0.0672,0.0235,-0.0835]);
HAnimJoint354.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint354.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment355 = createNode("HAnimSegment");
HAnimSegment355.name = "r_cuneiform_1";
HAnimSegment355.DEF = "hanim_r_cuneiform_1";
Transform Transform356 = createNode("Transform");
Transform356.translation = new SFVec3f(new float[-0.0672,0.0235,-0.0835]);
Transform Transform357 = createNode("Transform");
//Empty Transform
Shape Shape358 = createNode("Shape");
Shape358.USE = "HAnimJointShape";
Transform357.child = new undefined();

Transform357.child[0] = Shape358;

Transform356.children = new MFNode();

Transform356.children[0] = Transform357;

HAnimSegment355.children = new MFNode();

HAnimSegment355.children[0] = Transform356;

Shape Shape359 = createNode("Shape");
LineSet LineSet360 = createNode("LineSet");
LineSet360.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate361 = createNode("Coordinate");
Coordinate361.point = new MFVec3f(new float[-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577]);
LineSet360.coord = Coordinate361;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA ColorRGBA362 = createNode("ColorRGBA");
ColorRGBA362.USE = "HAnimSegmentLineColorRGBA";
LineSet360.color = ColorRGBA362;

Shape359.geometry = LineSet360;

HAnimSegment355.children[1] = Shape359;

HAnimJoint354.children = new MFNode();

HAnimJoint354.children[0] = HAnimSegment355;

HAnimJoint HAnimJoint363 = createNode("HAnimJoint");
HAnimJoint363.name = "r_tarsometatarsal_1";
HAnimJoint363.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint363.center = new SFVec3f(new float[-0.0644,0.0147,-0.0577]);
HAnimJoint363.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint363.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment364 = createNode("HAnimSegment");
HAnimSegment364.name = "r_metatarsal_1";
HAnimSegment364.DEF = "hanim_r_metatarsal_1";
Transform Transform365 = createNode("Transform");
Transform365.translation = new SFVec3f(new float[-0.0644,0.0147,-0.0577]);
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
Coordinate370.point = new MFVec3f(new float[-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083]);
LineSet369.coord = Coordinate370;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA ColorRGBA371 = createNode("ColorRGBA");
ColorRGBA371.USE = "HAnimSegmentLineColorRGBA";
LineSet369.color = ColorRGBA371;

Shape368.geometry = LineSet369;

HAnimSegment364.children[1] = Shape368;

HAnimJoint363.children = new MFNode();

HAnimJoint363.children[0] = HAnimSegment364;

HAnimJoint HAnimJoint372 = createNode("HAnimJoint");
HAnimJoint372.name = "r_metatarsophalangeal_1";
HAnimJoint372.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint372.center = new SFVec3f(new float[-0.0619,0.0059,-0.0083]);
HAnimJoint372.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint372.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment373 = createNode("HAnimSegment");
HAnimSegment373.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment373.DEF = "hanim_r_tarsal_proximal_phalanx_1";
Transform Transform374 = createNode("Transform");
Transform374.translation = new SFVec3f(new float[-0.0619,0.0059,-0.0083]);
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
Coordinate379.point = new MFVec3f(new float[-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083]);
LineSet378.coord = Coordinate379;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA380 = createNode("ColorRGBA");
ColorRGBA380.USE = "HAnimSegmentLineColorRGBA";
LineSet378.color = ColorRGBA380;

Shape377.geometry = LineSet378;

HAnimSegment373.children[1] = Shape377;

HAnimJoint372.children = new MFNode();

HAnimJoint372.children[0] = HAnimSegment373;

HAnimJoint HAnimJoint381 = createNode("HAnimJoint");
HAnimJoint381.name = "r_tarsal_interphalangeal_1";
HAnimJoint381.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint381.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint381.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint372.children[1] = HAnimJoint381;

HAnimJoint363.children[1] = HAnimJoint372;

HAnimJoint354.children[1] = HAnimJoint363;

HAnimJoint337.children[1] = HAnimJoint354;

HAnimJoint HAnimJoint382 = createNode("HAnimJoint");
HAnimJoint382.name = "r_cuneonavicular_2";
HAnimJoint382.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint382.center = new SFVec3f(new float[-0.0812,0.025,-0.0805]);
HAnimJoint382.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint382.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment383 = createNode("HAnimSegment");
HAnimSegment383.name = "r_cuneiform_2";
HAnimSegment383.DEF = "hanim_r_cuneiform_2";
Transform Transform384 = createNode("Transform");
Transform384.translation = new SFVec3f(new float[-0.0812,0.025,-0.0805]);
Transform Transform385 = createNode("Transform");
//Empty Transform
Shape Shape386 = createNode("Shape");
Shape386.USE = "HAnimJointShape";
Transform385.child = new undefined();

Transform385.child[0] = Shape386;

Transform384.children = new MFNode();

Transform384.children[0] = Transform385;

HAnimSegment383.children = new MFNode();

HAnimSegment383.children[0] = Transform384;

Shape Shape387 = createNode("Shape");
LineSet LineSet388 = createNode("LineSet");
LineSet388.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate389 = createNode("Coordinate");
Coordinate389.point = new MFVec3f(new float[-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608]);
LineSet388.coord = Coordinate389;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA390 = createNode("ColorRGBA");
ColorRGBA390.USE = "HAnimSegmentLineColorRGBA";
LineSet388.color = ColorRGBA390;

Shape387.geometry = LineSet388;

HAnimSegment383.children[1] = Shape387;

HAnimJoint382.children = new MFNode();

HAnimJoint382.children[0] = HAnimSegment383;

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
Coordinate407.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121]);
LineSet406.coord = Coordinate407;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA408 = createNode("ColorRGBA");
ColorRGBA408.USE = "HAnimSegmentLineColorRGBA";
LineSet406.color = ColorRGBA408;

Shape405.geometry = LineSet406;

HAnimSegment401.children[1] = Shape405;

HAnimJoint400.children = new MFNode();

HAnimJoint400.children[0] = HAnimSegment401;

HAnimJoint HAnimJoint409 = createNode("HAnimJoint");
HAnimJoint409.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint409.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint409.center = new SFVec3f(new float[-0.0841,0.0041,0.0121]);
HAnimJoint409.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint409.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment410 = createNode("HAnimSegment");
HAnimSegment410.name = "r_tarsal_middle_phalanx_2";
HAnimSegment410.DEF = "hanim_r_tarsal_middle_phalanx_2";
Transform Transform411 = createNode("Transform");
Transform411.translation = new SFVec3f(new float[-0.0841,0.0041,0.0121]);
Transform Transform412 = createNode("Transform");
//Empty Transform
Shape Shape413 = createNode("Shape");
Shape413.USE = "HAnimJointShape";
Transform412.child = new undefined();

Transform412.child[0] = Shape413;

Transform411.children = new MFNode();

Transform411.children[0] = Transform412;

HAnimSegment410.children = new MFNode();

HAnimSegment410.children[0] = Transform411;

Shape Shape414 = createNode("Shape");
LineSet LineSet415 = createNode("LineSet");
LineSet415.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate416 = createNode("Coordinate");
Coordinate416.point = new MFVec3f(new float[-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216]);
LineSet415.coord = Coordinate416;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA417 = createNode("ColorRGBA");
ColorRGBA417.USE = "HAnimSegmentLineColorRGBA";
LineSet415.color = ColorRGBA417;

Shape414.geometry = LineSet415;

HAnimSegment410.children[1] = Shape414;

HAnimJoint409.children = new MFNode();

HAnimJoint409.children[0] = HAnimSegment410;

HAnimJoint HAnimJoint418 = createNode("HAnimJoint");
HAnimJoint418.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint418.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint418.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint418.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint418.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint409.children[1] = HAnimJoint418;

HAnimJoint400.children[1] = HAnimJoint409;

HAnimJoint391.children[1] = HAnimJoint400;

HAnimJoint382.children[1] = HAnimJoint391;

HAnimJoint337.children[2] = HAnimJoint382;

HAnimJoint HAnimJoint419 = createNode("HAnimJoint");
HAnimJoint419.name = "r_cuneonavicular_3";
HAnimJoint419.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint419.center = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
HAnimJoint419.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint419.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment420 = createNode("HAnimSegment");
HAnimSegment420.name = "r_cuneiform_3";
HAnimSegment420.DEF = "hanim_r_cuneiform_3";
Transform Transform421 = createNode("Transform");
Transform421.translation = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
Transform Transform422 = createNode("Transform");
//Empty Transform
Shape Shape423 = createNode("Shape");
Shape423.USE = "HAnimJointShape";
Transform422.child = new undefined();

Transform422.child[0] = Shape423;

Transform421.children = new MFNode();

Transform421.children[0] = Transform422;

HAnimSegment420.children = new MFNode();

HAnimSegment420.children[0] = Transform421;

Shape Shape424 = createNode("Shape");
LineSet LineSet425 = createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate426 = createNode("Coordinate");
Coordinate426.point = new MFVec3f(new float[-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625]);
LineSet425.coord = Coordinate426;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA ColorRGBA427 = createNode("ColorRGBA");
ColorRGBA427.USE = "HAnimSegmentLineColorRGBA";
LineSet425.color = ColorRGBA427;

Shape424.geometry = LineSet425;

HAnimSegment420.children[1] = Shape424;

HAnimJoint419.children = new MFNode();

HAnimJoint419.children[0] = HAnimSegment420;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.name = "r_tarsometatarsal_3";
HAnimJoint428.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint428.center = new SFVec3f(new float[-0.0944,0.0175,-0.0625]);
HAnimJoint428.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint428.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment429 = createNode("HAnimSegment");
HAnimSegment429.name = "r_metatarsal_3";
HAnimSegment429.DEF = "hanim_r_metatarsal_3";
Transform Transform430 = createNode("Transform");
Transform430.translation = new SFVec3f(new float[-0.0944,0.0175,-0.0625]);
Transform Transform431 = createNode("Transform");
//Empty Transform
Shape Shape432 = createNode("Shape");
Shape432.USE = "HAnimJointShape";
Transform431.child = new undefined();

Transform431.child[0] = Shape432;

Transform430.children = new MFNode();

Transform430.children[0] = Transform431;

HAnimSegment429.children = new MFNode();

HAnimSegment429.children[0] = Transform430;

Shape Shape433 = createNode("Shape");
LineSet LineSet434 = createNode("LineSet");
LineSet434.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate435 = createNode("Coordinate");
Coordinate435.point = new MFVec3f(new float[-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065]);
LineSet434.coord = Coordinate435;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA ColorRGBA436 = createNode("ColorRGBA");
ColorRGBA436.USE = "HAnimSegmentLineColorRGBA";
LineSet434.color = ColorRGBA436;

Shape433.geometry = LineSet434;

HAnimSegment429.children[1] = Shape433;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

HAnimJoint HAnimJoint437 = createNode("HAnimJoint");
HAnimJoint437.name = "r_metatarsophalangeal_3";
HAnimJoint437.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint437.center = new SFVec3f(new float[-0.0963,0.0065,-0.0065]);
HAnimJoint437.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint437.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment438 = createNode("HAnimSegment");
HAnimSegment438.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment438.DEF = "hanim_r_tarsal_proximal_phalanx_3";
Transform Transform439 = createNode("Transform");
Transform439.translation = new SFVec3f(new float[-0.0963,0.0065,-0.0065]);
Transform Transform440 = createNode("Transform");
//Empty Transform
Shape Shape441 = createNode("Shape");
Shape441.USE = "HAnimJointShape";
Transform440.child = new undefined();

Transform440.child[0] = Shape441;

Transform439.children = new MFNode();

Transform439.children[0] = Transform440;

HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = Transform439;

Shape Shape442 = createNode("Shape");
LineSet LineSet443 = createNode("LineSet");
LineSet443.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate444 = createNode("Coordinate");
Coordinate444.point = new MFVec3f(new float[-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086]);
LineSet443.coord = Coordinate444;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA445 = createNode("ColorRGBA");
ColorRGBA445.USE = "HAnimSegmentLineColorRGBA";
LineSet443.color = ColorRGBA445;

Shape442.geometry = LineSet443;

HAnimSegment438.children[1] = Shape442;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

HAnimJoint HAnimJoint446 = createNode("HAnimJoint");
HAnimJoint446.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint446.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint446.center = new SFVec3f(new float[-0.0987,0.0034,0.0086]);
HAnimJoint446.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint446.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment447 = createNode("HAnimSegment");
HAnimSegment447.name = "r_tarsal_middle_phalanx_3";
HAnimSegment447.DEF = "hanim_r_tarsal_middle_phalanx_3";
Transform Transform448 = createNode("Transform");
Transform448.translation = new SFVec3f(new float[-0.0987,0.0034,0.0086]);
Transform Transform449 = createNode("Transform");
//Empty Transform
Shape Shape450 = createNode("Shape");
Shape450.USE = "HAnimJointShape";
Transform449.child = new undefined();

Transform449.child[0] = Shape450;

Transform448.children = new MFNode();

Transform448.children[0] = Transform449;

HAnimSegment447.children = new MFNode();

HAnimSegment447.children[0] = Transform448;

Shape Shape451 = createNode("Shape");
LineSet LineSet452 = createNode("LineSet");
LineSet452.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate453 = createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178]);
LineSet452.coord = Coordinate453;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA454 = createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSegmentLineColorRGBA";
LineSet452.color = ColorRGBA454;

Shape451.geometry = LineSet452;

HAnimSegment447.children[1] = Shape451;

HAnimJoint446.children = new MFNode();

HAnimJoint446.children[0] = HAnimSegment447;

HAnimJoint HAnimJoint455 = createNode("HAnimJoint");
HAnimJoint455.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint455.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint455.center = new SFVec3f(new float[-0.1002,0.0013,0.0178]);
HAnimJoint455.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint455.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint446.children[1] = HAnimJoint455;

HAnimJoint437.children[1] = HAnimJoint446;

HAnimJoint428.children[1] = HAnimJoint437;

HAnimJoint419.children[1] = HAnimJoint428;

HAnimJoint337.children[3] = HAnimJoint419;

HAnimJoint324.children[1] = HAnimJoint337;

HAnimJoint HAnimJoint456 = createNode("HAnimJoint");
HAnimJoint456.name = "r_calcaneocuboid";
HAnimJoint456.DEF = "hanim_r_calcaneocuboid";
HAnimJoint456.center = new SFVec3f(new float[-0.0889,0.0494,-0.1278]);
HAnimJoint456.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint456.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment457 = createNode("HAnimSegment");
HAnimSegment457.name = "r_calcaneus";
HAnimSegment457.DEF = "hanim_r_calcaneus";
Transform Transform458 = createNode("Transform");
Transform458.translation = new SFVec3f(new float[-0.0889,0.0494,-0.1278]);
Transform Transform459 = createNode("Transform");
//Empty Transform
Shape Shape460 = createNode("Shape");
Shape460.USE = "HAnimJointShape";
Transform459.child = new undefined();

Transform459.child[0] = Shape460;

Transform458.children = new MFNode();

Transform458.children[0] = Transform459;

HAnimSegment457.children = new MFNode();

HAnimSegment457.children[0] = Transform458;

Shape Shape461 = createNode("Shape");
LineSet LineSet462 = createNode("LineSet");
LineSet462.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate463 = createNode("Coordinate");
Coordinate463.point = new MFVec3f(new float[-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998]);
LineSet462.coord = Coordinate463;

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA ColorRGBA464 = createNode("ColorRGBA");
ColorRGBA464.USE = "HAnimSegmentLineColorRGBA";
LineSet462.color = ColorRGBA464;

Shape461.geometry = LineSet462;

HAnimSegment457.children[1] = Shape461;

HAnimJoint456.children = new MFNode();

HAnimJoint456.children[0] = HAnimSegment457;

HAnimJoint HAnimJoint465 = createNode("HAnimJoint");
HAnimJoint465.name = "r_transversetarsal";
HAnimJoint465.DEF = "hanim_r_transversetarsal";
HAnimJoint465.center = new SFVec3f(new float[-0.1105,0.0267,-0.0998]);
HAnimJoint465.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint465.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment466 = createNode("HAnimSegment");
HAnimSegment466.name = "r_cuboid";
HAnimSegment466.DEF = "hanim_r_cuboid";
Transform Transform467 = createNode("Transform");
Transform467.translation = new SFVec3f(new float[-0.1105,0.0267,-0.0998]);
Transform Transform468 = createNode("Transform");
//Empty Transform
Shape Shape469 = createNode("Shape");
Shape469.USE = "HAnimJointShape";
Transform468.child = new undefined();

Transform468.child[0] = Shape469;

Transform467.children = new MFNode();

Transform467.children[0] = Transform468;

HAnimSegment466.children = new MFNode();

HAnimSegment466.children[0] = Transform467;

Shape Shape470 = createNode("Shape");
LineSet LineSet471 = createNode("LineSet");
LineSet471.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate472 = createNode("Coordinate");
Coordinate472.point = new MFVec3f(new float[-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634]);
LineSet471.coord = Coordinate472;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA ColorRGBA473 = createNode("ColorRGBA");
ColorRGBA473.USE = "HAnimSegmentLineColorRGBA";
LineSet471.color = ColorRGBA473;

Shape470.geometry = LineSet471;

HAnimSegment466.children[1] = Shape470;

Shape Shape474 = createNode("Shape");
LineSet LineSet475 = createNode("LineSet");
LineSet475.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate476 = createNode("Coordinate");
Coordinate476.point = new MFVec3f(new float[-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671]);
LineSet475.coord = Coordinate476;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA ColorRGBA477 = createNode("ColorRGBA");
ColorRGBA477.USE = "HAnimSegmentLineColorRGBA";
LineSet475.color = ColorRGBA477;

Shape474.geometry = LineSet475;

HAnimSegment466.children[2] = Shape474;

HAnimJoint465.children = new MFNode();

HAnimJoint465.children[0] = HAnimSegment466;

HAnimJoint HAnimJoint478 = createNode("HAnimJoint");
HAnimJoint478.name = "r_tarsometatarsal_4";
HAnimJoint478.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint478.center = new SFVec3f(new float[-0.1063,0.016,-0.0634]);
HAnimJoint478.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint478.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment479 = createNode("HAnimSegment");
HAnimSegment479.name = "r_metatarsal_4";
HAnimSegment479.DEF = "hanim_r_metatarsal_4";
Transform Transform480 = createNode("Transform");
Transform480.translation = new SFVec3f(new float[-0.1063,0.016,-0.0634]);
Transform Transform481 = createNode("Transform");
//Empty Transform
Shape Shape482 = createNode("Shape");
Shape482.USE = "HAnimJointShape";
Transform481.child = new undefined();

Transform481.child[0] = Shape482;

Transform480.children = new MFNode();

Transform480.children[0] = Transform481;

HAnimSegment479.children = new MFNode();

HAnimSegment479.children[0] = Transform480;

Shape Shape483 = createNode("Shape");
LineSet LineSet484 = createNode("LineSet");
LineSet484.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate485 = createNode("Coordinate");
Coordinate485.point = new MFVec3f(new float[-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107]);
LineSet484.coord = Coordinate485;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA ColorRGBA486 = createNode("ColorRGBA");
ColorRGBA486.USE = "HAnimSegmentLineColorRGBA";
LineSet484.color = ColorRGBA486;

Shape483.geometry = LineSet484;

HAnimSegment479.children[1] = Shape483;

HAnimJoint478.children = new MFNode();

HAnimJoint478.children[0] = HAnimSegment479;

HAnimJoint HAnimJoint487 = createNode("HAnimJoint");
HAnimJoint487.name = "r_metatarsophalangeal_4";
HAnimJoint487.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint487.center = new SFVec3f(new float[-0.1097,0.0058,-0.0107]);
HAnimJoint487.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint487.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment488 = createNode("HAnimSegment");
HAnimSegment488.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment488.DEF = "hanim_r_tarsal_proximal_phalanx_4";
Transform Transform489 = createNode("Transform");
Transform489.translation = new SFVec3f(new float[-0.1097,0.0058,-0.0107]);
Transform Transform490 = createNode("Transform");
//Empty Transform
Shape Shape491 = createNode("Shape");
Shape491.USE = "HAnimJointShape";
Transform490.child = new undefined();

Transform490.child[0] = Shape491;

Transform489.children = new MFNode();

Transform489.children[0] = Transform490;

HAnimSegment488.children = new MFNode();

HAnimSegment488.children[0] = Transform489;

Shape Shape492 = createNode("Shape");
LineSet LineSet493 = createNode("LineSet");
LineSet493.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate494 = createNode("Coordinate");
Coordinate494.point = new MFVec3f(new float[-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044]);
LineSet493.coord = Coordinate494;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA495 = createNode("ColorRGBA");
ColorRGBA495.USE = "HAnimSegmentLineColorRGBA";
LineSet493.color = ColorRGBA495;

Shape492.geometry = LineSet493;

HAnimSegment488.children[1] = Shape492;

HAnimJoint487.children = new MFNode();

HAnimJoint487.children[0] = HAnimSegment488;

HAnimJoint HAnimJoint496 = createNode("HAnimJoint");
HAnimJoint496.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint496.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint496.center = new SFVec3f(new float[-0.114,0.0037,0.0044]);
HAnimJoint496.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint496.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment497 = createNode("HAnimSegment");
HAnimSegment497.name = "r_tarsal_middle_phalanx_4";
HAnimSegment497.DEF = "hanim_r_tarsal_middle_phalanx_4";
Transform Transform498 = createNode("Transform");
Transform498.translation = new SFVec3f(new float[-0.114,0.0037,0.0044]);
Transform Transform499 = createNode("Transform");
//Empty Transform
Shape Shape500 = createNode("Shape");
Shape500.USE = "HAnimJointShape";
Transform499.child = new undefined();

Transform499.child[0] = Shape500;

Transform498.children = new MFNode();

Transform498.children[0] = Transform499;

HAnimSegment497.children = new MFNode();

HAnimSegment497.children[0] = Transform498;

Shape Shape501 = createNode("Shape");
LineSet LineSet502 = createNode("LineSet");
LineSet502.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate503 = createNode("Coordinate");
Coordinate503.point = new MFVec3f(new float[-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118]);
LineSet502.coord = Coordinate503;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA504 = createNode("ColorRGBA");
ColorRGBA504.USE = "HAnimSegmentLineColorRGBA";
LineSet502.color = ColorRGBA504;

Shape501.geometry = LineSet502;

HAnimSegment497.children[1] = Shape501;

HAnimJoint496.children = new MFNode();

HAnimJoint496.children[0] = HAnimSegment497;

HAnimJoint HAnimJoint505 = createNode("HAnimJoint");
HAnimJoint505.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint505.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint505.center = new SFVec3f(new float[-0.1155,0.0008,0.0118]);
HAnimJoint505.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint505.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint496.children[1] = HAnimJoint505;

HAnimJoint487.children[1] = HAnimJoint496;

HAnimJoint478.children[1] = HAnimJoint487;

HAnimJoint465.children[1] = HAnimJoint478;

HAnimJoint HAnimJoint506 = createNode("HAnimJoint");
HAnimJoint506.name = "r_tarsometatarsal_5";
HAnimJoint506.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint506.center = new SFVec3f(new float[-0.1206,0.0124,-0.0671]);
HAnimJoint506.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint506.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment507 = createNode("HAnimSegment");
HAnimSegment507.name = "r_metatarsal_5";
HAnimSegment507.DEF = "hanim_r_metatarsal_5";
Transform Transform508 = createNode("Transform");
Transform508.translation = new SFVec3f(new float[-0.1206,0.0124,-0.0671]);
Transform Transform509 = createNode("Transform");
//Empty Transform
Shape Shape510 = createNode("Shape");
Shape510.USE = "HAnimJointShape";
Transform509.child = new undefined();

Transform509.child[0] = Shape510;

Transform508.children = new MFNode();

Transform508.children[0] = Transform509;

HAnimSegment507.children = new MFNode();

HAnimSegment507.children[0] = Transform508;

Shape Shape511 = createNode("Shape");
LineSet LineSet512 = createNode("LineSet");
LineSet512.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate513 = createNode("Coordinate");
Coordinate513.point = new MFVec3f(new float[-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153]);
LineSet512.coord = Coordinate513;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA ColorRGBA514 = createNode("ColorRGBA");
ColorRGBA514.USE = "HAnimSegmentLineColorRGBA";
LineSet512.color = ColorRGBA514;

Shape511.geometry = LineSet512;

HAnimSegment507.children[1] = Shape511;

HAnimJoint506.children = new MFNode();

HAnimJoint506.children[0] = HAnimSegment507;

HAnimJoint HAnimJoint515 = createNode("HAnimJoint");
HAnimJoint515.name = "r_metatarsophalangeal_5";
HAnimJoint515.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint515.center = new SFVec3f(new float[-0.1239,0.0051,-0.0153]);
HAnimJoint515.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint515.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment516 = createNode("HAnimSegment");
HAnimSegment516.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment516.DEF = "hanim_r_tarsal_proximal_phalanx_5";
Transform Transform517 = createNode("Transform");
Transform517.translation = new SFVec3f(new float[-0.1239,0.0051,-0.0153]);
Transform Transform518 = createNode("Transform");
//Empty Transform
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
Coordinate522.point = new MFVec3f(new float[-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077]);
LineSet521.coord = Coordinate522;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA523 = createNode("ColorRGBA");
ColorRGBA523.USE = "HAnimSegmentLineColorRGBA";
LineSet521.color = ColorRGBA523;

Shape520.geometry = LineSet521;

HAnimSegment516.children[1] = Shape520;

HAnimJoint515.children = new MFNode();

HAnimJoint515.children[0] = HAnimSegment516;

HAnimJoint HAnimJoint524 = createNode("HAnimJoint");
HAnimJoint524.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint524.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint524.center = new SFVec3f(new float[-0.1262,0.0023,-0.0077]);
HAnimJoint524.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint524.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment525 = createNode("HAnimSegment");
HAnimSegment525.name = "r_tarsal_middle_phalanx_5";
HAnimSegment525.DEF = "hanim_r_tarsal_middle_phalanx_5";
Transform Transform526 = createNode("Transform");
Transform526.translation = new SFVec3f(new float[-0.1262,0.0023,-0.0077]);
Transform Transform527 = createNode("Transform");
//Empty Transform
Shape Shape528 = createNode("Shape");
Shape528.USE = "HAnimJointShape";
Transform527.child = new undefined();

Transform527.child[0] = Shape528;

Transform526.children = new MFNode();

Transform526.children[0] = Transform527;

HAnimSegment525.children = new MFNode();

HAnimSegment525.children[0] = Transform526;

Shape Shape529 = createNode("Shape");
LineSet LineSet530 = createNode("LineSet");
LineSet530.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate531 = createNode("Coordinate");
Coordinate531.point = new MFVec3f(new float[-0.1262,0.0023,-0.0077,-0.1271,0,0]);
LineSet530.coord = Coordinate531;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA532 = createNode("ColorRGBA");
ColorRGBA532.USE = "HAnimSegmentLineColorRGBA";
LineSet530.color = ColorRGBA532;

Shape529.geometry = LineSet530;

HAnimSegment525.children[1] = Shape529;

HAnimJoint524.children = new MFNode();

HAnimJoint524.children[0] = HAnimSegment525;

HAnimJoint HAnimJoint533 = createNode("HAnimJoint");
HAnimJoint533.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint533.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint533.center = new SFVec3f(new float[-0.1271,0,0]);
HAnimJoint533.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint533.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint524.children[1] = HAnimJoint533;

HAnimJoint515.children[1] = HAnimJoint524;

HAnimJoint506.children[1] = HAnimJoint515;

HAnimJoint465.children[2] = HAnimJoint506;

HAnimJoint456.children[1] = HAnimJoint465;

HAnimJoint324.children[2] = HAnimJoint456;

HAnimJoint315.children[1] = HAnimJoint324;

HAnimJoint306.children[1] = HAnimJoint315;

HAnimJoint65.children[2] = HAnimJoint306;

HAnimJoint52.children[1] = HAnimJoint65;

HAnimJoint HAnimJoint534 = createNode("HAnimJoint");
HAnimJoint534.name = "vl5";
HAnimJoint534.DEF = "hanim_vl5";
HAnimJoint534.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint534.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint534.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment535 = createNode("HAnimSegment");
HAnimSegment535.name = "l5";
HAnimSegment535.DEF = "hanim_l5";
Transform Transform536 = createNode("Transform");
Transform536.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Transform Transform537 = createNode("Transform");
//Empty Transform
Shape Shape538 = createNode("Shape");
Shape538.USE = "HAnimJointShape";
Transform537.child = new undefined();

Transform537.child[0] = Shape538;

Transform536.children = new MFNode();

Transform536.children[0] = Transform537;

HAnimSegment535.children = new MFNode();

HAnimSegment535.children[0] = Transform536;

Shape Shape539 = createNode("Shape");
LineSet LineSet540 = createNode("LineSet");
LineSet540.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate541 = createNode("Coordinate");
Coordinate541.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet540.coord = Coordinate541;

//from vl5 to vl4 vertices 2
ColorRGBA ColorRGBA542 = createNode("ColorRGBA");
ColorRGBA542.USE = "HAnimSegmentLineColorRGBA";
LineSet540.color = ColorRGBA542;

Shape539.geometry = LineSet540;

HAnimSegment535.children[1] = Shape539;

HAnimJoint534.children = new MFNode();

HAnimJoint534.children[0] = HAnimSegment535;

HAnimJoint HAnimJoint543 = createNode("HAnimJoint");
HAnimJoint543.name = "vl4";
HAnimJoint543.DEF = "hanim_vl4";
HAnimJoint543.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint543.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint543.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment544 = createNode("HAnimSegment");
HAnimSegment544.name = "l4";
HAnimSegment544.DEF = "hanim_l4";
Transform Transform545 = createNode("Transform");
Transform545.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Transform Transform546 = createNode("Transform");
//Empty Transform
Shape Shape547 = createNode("Shape");
Shape547.USE = "HAnimJointShape";
Transform546.child = new undefined();

Transform546.child[0] = Shape547;

Transform545.children = new MFNode();

Transform545.children[0] = Transform546;

HAnimSegment544.children = new MFNode();

HAnimSegment544.children[0] = Transform545;

Shape Shape548 = createNode("Shape");
LineSet LineSet549 = createNode("LineSet");
LineSet549.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate550 = createNode("Coordinate");
Coordinate550.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet549.coord = Coordinate550;

//from vl4 to vl3 vertices 2
ColorRGBA ColorRGBA551 = createNode("ColorRGBA");
ColorRGBA551.USE = "HAnimSegmentLineColorRGBA";
LineSet549.color = ColorRGBA551;

Shape548.geometry = LineSet549;

HAnimSegment544.children[1] = Shape548;

HAnimJoint543.children = new MFNode();

HAnimJoint543.children[0] = HAnimSegment544;

HAnimJoint HAnimJoint552 = createNode("HAnimJoint");
HAnimJoint552.name = "vl3";
HAnimJoint552.DEF = "hanim_vl3";
HAnimJoint552.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint552.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint552.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment553 = createNode("HAnimSegment");
HAnimSegment553.name = "l3";
HAnimSegment553.DEF = "hanim_l3";
Transform Transform554 = createNode("Transform");
Transform554.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Transform Transform555 = createNode("Transform");
//Empty Transform
Shape Shape556 = createNode("Shape");
Shape556.USE = "HAnimJointShape";
Transform555.child = new undefined();

Transform555.child[0] = Shape556;

Transform554.children = new MFNode();

Transform554.children[0] = Transform555;

HAnimSegment553.children = new MFNode();

HAnimSegment553.children[0] = Transform554;

Shape Shape557 = createNode("Shape");
LineSet LineSet558 = createNode("LineSet");
LineSet558.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate559 = createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet558.coord = Coordinate559;

//from vl3 to vl2 vertices 2
ColorRGBA ColorRGBA560 = createNode("ColorRGBA");
ColorRGBA560.USE = "HAnimSegmentLineColorRGBA";
LineSet558.color = ColorRGBA560;

Shape557.geometry = LineSet558;

HAnimSegment553.children[1] = Shape557;

HAnimJoint552.children = new MFNode();

HAnimJoint552.children[0] = HAnimSegment553;

HAnimJoint HAnimJoint561 = createNode("HAnimJoint");
HAnimJoint561.name = "vl2";
HAnimJoint561.DEF = "hanim_vl2";
HAnimJoint561.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint561.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint561.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment562 = createNode("HAnimSegment");
HAnimSegment562.name = "l2";
HAnimSegment562.DEF = "hanim_l2";
Transform Transform563 = createNode("Transform");
Transform563.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Transform Transform564 = createNode("Transform");
//Empty Transform
Shape Shape565 = createNode("Shape");
Shape565.USE = "HAnimJointShape";
Transform564.child = new undefined();

Transform564.child[0] = Shape565;

Transform563.children = new MFNode();

Transform563.children[0] = Transform564;

HAnimSegment562.children = new MFNode();

HAnimSegment562.children[0] = Transform563;

Shape Shape566 = createNode("Shape");
LineSet LineSet567 = createNode("LineSet");
LineSet567.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate568 = createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet567.coord = Coordinate568;

//from vl2 to vl1 vertices 2
ColorRGBA ColorRGBA569 = createNode("ColorRGBA");
ColorRGBA569.USE = "HAnimSegmentLineColorRGBA";
LineSet567.color = ColorRGBA569;

Shape566.geometry = LineSet567;

HAnimSegment562.children[1] = Shape566;

HAnimJoint561.children = new MFNode();

HAnimJoint561.children[0] = HAnimSegment562;

HAnimJoint HAnimJoint570 = createNode("HAnimJoint");
HAnimJoint570.name = "vl1";
HAnimJoint570.DEF = "hanim_vl1";
HAnimJoint570.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint570.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint570.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment571 = createNode("HAnimSegment");
HAnimSegment571.name = "l1";
HAnimSegment571.DEF = "hanim_l1";
Transform Transform572 = createNode("Transform");
Transform572.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform573 = createNode("Transform");
//Empty Transform
Shape Shape574 = createNode("Shape");
Shape574.USE = "HAnimJointShape";
Transform573.child = new undefined();

Transform573.child[0] = Shape574;

Transform572.children = new MFNode();

Transform572.children[0] = Transform573;

HAnimSegment571.children = new MFNode();

HAnimSegment571.children[0] = Transform572;

Shape Shape575 = createNode("Shape");
LineSet LineSet576 = createNode("LineSet");
LineSet576.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate577 = createNode("Coordinate");
Coordinate577.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet576.coord = Coordinate577;

//from vl1 to vt12 vertices 2
ColorRGBA ColorRGBA578 = createNode("ColorRGBA");
ColorRGBA578.USE = "HAnimSegmentLineColorRGBA";
LineSet576.color = ColorRGBA578;

Shape575.geometry = LineSet576;

HAnimSegment571.children[1] = Shape575;

HAnimJoint570.children = new MFNode();

HAnimJoint570.children[0] = HAnimSegment571;

HAnimJoint HAnimJoint579 = createNode("HAnimJoint");
HAnimJoint579.name = "vt12";
HAnimJoint579.DEF = "hanim_vt12";
HAnimJoint579.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint579.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint579.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment580 = createNode("HAnimSegment");
HAnimSegment580.name = "t12";
HAnimSegment580.DEF = "hanim_t12";
Transform Transform581 = createNode("Transform");
Transform581.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Transform Transform582 = createNode("Transform");
//Empty Transform
Shape Shape583 = createNode("Shape");
Shape583.USE = "HAnimJointShape";
Transform582.child = new undefined();

Transform582.child[0] = Shape583;

Transform581.children = new MFNode();

Transform581.children[0] = Transform582;

HAnimSegment580.children = new MFNode();

HAnimSegment580.children[0] = Transform581;

Shape Shape584 = createNode("Shape");
LineSet LineSet585 = createNode("LineSet");
LineSet585.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate586 = createNode("Coordinate");
Coordinate586.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet585.coord = Coordinate586;

//from vt12 to vt11 vertices 2
ColorRGBA ColorRGBA587 = createNode("ColorRGBA");
ColorRGBA587.USE = "HAnimSegmentLineColorRGBA";
LineSet585.color = ColorRGBA587;

Shape584.geometry = LineSet585;

HAnimSegment580.children[1] = Shape584;

HAnimJoint579.children = new MFNode();

HAnimJoint579.children[0] = HAnimSegment580;

HAnimJoint HAnimJoint588 = createNode("HAnimJoint");
HAnimJoint588.name = "vt11";
HAnimJoint588.DEF = "hanim_vt11";
HAnimJoint588.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint588.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint588.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment589 = createNode("HAnimSegment");
HAnimSegment589.name = "t11";
HAnimSegment589.DEF = "hanim_t11";
Transform Transform590 = createNode("Transform");
Transform590.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Transform Transform591 = createNode("Transform");
//Empty Transform
Shape Shape592 = createNode("Shape");
Shape592.USE = "HAnimJointShape";
Transform591.child = new undefined();

Transform591.child[0] = Shape592;

Transform590.children = new MFNode();

Transform590.children[0] = Transform591;

HAnimSegment589.children = new MFNode();

HAnimSegment589.children[0] = Transform590;

Shape Shape593 = createNode("Shape");
LineSet LineSet594 = createNode("LineSet");
LineSet594.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate595 = createNode("Coordinate");
Coordinate595.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet594.coord = Coordinate595;

//from vt11 to vt10 vertices 2
ColorRGBA ColorRGBA596 = createNode("ColorRGBA");
ColorRGBA596.USE = "HAnimSegmentLineColorRGBA";
LineSet594.color = ColorRGBA596;

Shape593.geometry = LineSet594;

HAnimSegment589.children[1] = Shape593;

HAnimJoint588.children = new MFNode();

HAnimJoint588.children[0] = HAnimSegment589;

HAnimJoint HAnimJoint597 = createNode("HAnimJoint");
HAnimJoint597.name = "vt10";
HAnimJoint597.DEF = "hanim_vt10";
HAnimJoint597.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint597.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint597.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment598 = createNode("HAnimSegment");
HAnimSegment598.name = "t10";
HAnimSegment598.DEF = "hanim_t10";
Transform Transform599 = createNode("Transform");
Transform599.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform600 = createNode("Transform");
//Empty Transform
Shape Shape601 = createNode("Shape");
Shape601.USE = "HAnimJointShape";
Transform600.child = new undefined();

Transform600.child[0] = Shape601;

Transform599.children = new MFNode();

Transform599.children[0] = Transform600;

HAnimSegment598.children = new MFNode();

HAnimSegment598.children[0] = Transform599;

Shape Shape602 = createNode("Shape");
LineSet LineSet603 = createNode("LineSet");
LineSet603.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate604 = createNode("Coordinate");
Coordinate604.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet603.coord = Coordinate604;

//from vt10 to vt9 vertices 2
ColorRGBA ColorRGBA605 = createNode("ColorRGBA");
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA";
LineSet603.color = ColorRGBA605;

Shape602.geometry = LineSet603;

HAnimSegment598.children[1] = Shape602;

HAnimJoint597.children = new MFNode();

HAnimJoint597.children[0] = HAnimSegment598;

HAnimJoint HAnimJoint606 = createNode("HAnimJoint");
HAnimJoint606.name = "vt9";
HAnimJoint606.DEF = "hanim_vt9";
HAnimJoint606.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint606.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint606.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment607 = createNode("HAnimSegment");
HAnimSegment607.name = "t9";
HAnimSegment607.DEF = "hanim_t9";
Transform Transform608 = createNode("Transform");
Transform608.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
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
Coordinate613.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet612.coord = Coordinate613;

//from vt9 to vt8 vertices 2
ColorRGBA ColorRGBA614 = createNode("ColorRGBA");
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA";
LineSet612.color = ColorRGBA614;

Shape611.geometry = LineSet612;

HAnimSegment607.children[1] = Shape611;

HAnimJoint606.children = new MFNode();

HAnimJoint606.children[0] = HAnimSegment607;

HAnimJoint HAnimJoint615 = createNode("HAnimJoint");
HAnimJoint615.name = "vt8";
HAnimJoint615.DEF = "hanim_vt8";
HAnimJoint615.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint615.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint615.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment616 = createNode("HAnimSegment");
HAnimSegment616.name = "t8";
HAnimSegment616.DEF = "hanim_t8";
Transform Transform617 = createNode("Transform");
Transform617.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
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
Coordinate622.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet621.coord = Coordinate622;

//from vt8 to vt7 vertices 2
ColorRGBA ColorRGBA623 = createNode("ColorRGBA");
ColorRGBA623.USE = "HAnimSegmentLineColorRGBA";
LineSet621.color = ColorRGBA623;

Shape620.geometry = LineSet621;

HAnimSegment616.children[1] = Shape620;

HAnimJoint615.children = new MFNode();

HAnimJoint615.children[0] = HAnimSegment616;

HAnimJoint HAnimJoint624 = createNode("HAnimJoint");
HAnimJoint624.name = "vt7";
HAnimJoint624.DEF = "hanim_vt7";
HAnimJoint624.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint624.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint624.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment625 = createNode("HAnimSegment");
HAnimSegment625.name = "t7";
HAnimSegment625.DEF = "hanim_t7";
Transform Transform626 = createNode("Transform");
Transform626.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
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
Coordinate631.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet630.coord = Coordinate631;

//from vt7 to vt6 vertices 2
ColorRGBA ColorRGBA632 = createNode("ColorRGBA");
ColorRGBA632.USE = "HAnimSegmentLineColorRGBA";
LineSet630.color = ColorRGBA632;

Shape629.geometry = LineSet630;

HAnimSegment625.children[1] = Shape629;

HAnimJoint624.children = new MFNode();

HAnimJoint624.children[0] = HAnimSegment625;

HAnimJoint HAnimJoint633 = createNode("HAnimJoint");
HAnimJoint633.name = "vt6";
HAnimJoint633.DEF = "hanim_vt6";
HAnimJoint633.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint633.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint633.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment634 = createNode("HAnimSegment");
HAnimSegment634.name = "t6";
HAnimSegment634.DEF = "hanim_t6";
Transform Transform635 = createNode("Transform");
Transform635.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform636 = createNode("Transform");
//Empty Transform
Shape Shape637 = createNode("Shape");
Shape637.USE = "HAnimJointShape";
Transform636.child = new undefined();

Transform636.child[0] = Shape637;

Transform635.children = new MFNode();

Transform635.children[0] = Transform636;

HAnimSegment634.children = new MFNode();

HAnimSegment634.children[0] = Transform635;

Shape Shape638 = createNode("Shape");
LineSet LineSet639 = createNode("LineSet");
LineSet639.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate640 = createNode("Coordinate");
Coordinate640.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet639.coord = Coordinate640;

//from vt6 to vt5 vertices 2
ColorRGBA ColorRGBA641 = createNode("ColorRGBA");
ColorRGBA641.USE = "HAnimSegmentLineColorRGBA";
LineSet639.color = ColorRGBA641;

Shape638.geometry = LineSet639;

HAnimSegment634.children[1] = Shape638;

HAnimJoint633.children = new MFNode();

HAnimJoint633.children[0] = HAnimSegment634;

HAnimJoint HAnimJoint642 = createNode("HAnimJoint");
HAnimJoint642.name = "vt5";
HAnimJoint642.DEF = "hanim_vt5";
HAnimJoint642.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint642.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint642.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment643 = createNode("HAnimSegment");
HAnimSegment643.name = "t5";
HAnimSegment643.DEF = "hanim_t5";
Transform Transform644 = createNode("Transform");
Transform644.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Transform Transform645 = createNode("Transform");
//Empty Transform
Shape Shape646 = createNode("Shape");
Shape646.USE = "HAnimJointShape";
Transform645.child = new undefined();

Transform645.child[0] = Shape646;

Transform644.children = new MFNode();

Transform644.children[0] = Transform645;

HAnimSegment643.children = new MFNode();

HAnimSegment643.children[0] = Transform644;

Shape Shape647 = createNode("Shape");
LineSet LineSet648 = createNode("LineSet");
LineSet648.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate649 = createNode("Coordinate");
Coordinate649.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet648.coord = Coordinate649;

//from vt5 to vt4 vertices 2
ColorRGBA ColorRGBA650 = createNode("ColorRGBA");
ColorRGBA650.USE = "HAnimSegmentLineColorRGBA";
LineSet648.color = ColorRGBA650;

Shape647.geometry = LineSet648;

HAnimSegment643.children[1] = Shape647;

HAnimJoint642.children = new MFNode();

HAnimJoint642.children[0] = HAnimSegment643;

HAnimJoint HAnimJoint651 = createNode("HAnimJoint");
HAnimJoint651.name = "vt4";
HAnimJoint651.DEF = "hanim_vt4";
HAnimJoint651.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint651.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint651.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment652 = createNode("HAnimSegment");
HAnimSegment652.name = "t4";
HAnimSegment652.DEF = "hanim_t4";
Transform Transform653 = createNode("Transform");
Transform653.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Transform Transform654 = createNode("Transform");
//Empty Transform
Shape Shape655 = createNode("Shape");
Shape655.USE = "HAnimJointShape";
Transform654.child = new undefined();

Transform654.child[0] = Shape655;

Transform653.children = new MFNode();

Transform653.children[0] = Transform654;

HAnimSegment652.children = new MFNode();

HAnimSegment652.children[0] = Transform653;

Shape Shape656 = createNode("Shape");
LineSet LineSet657 = createNode("LineSet");
LineSet657.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate658 = createNode("Coordinate");
Coordinate658.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet657.coord = Coordinate658;

//from vt4 to vt3 vertices 2
ColorRGBA ColorRGBA659 = createNode("ColorRGBA");
ColorRGBA659.USE = "HAnimSegmentLineColorRGBA";
LineSet657.color = ColorRGBA659;

Shape656.geometry = LineSet657;

HAnimSegment652.children[1] = Shape656;

HAnimJoint651.children = new MFNode();

HAnimJoint651.children[0] = HAnimSegment652;

HAnimJoint HAnimJoint660 = createNode("HAnimJoint");
HAnimJoint660.name = "vt3";
HAnimJoint660.DEF = "hanim_vt3";
HAnimJoint660.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint660.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint660.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment661 = createNode("HAnimSegment");
HAnimSegment661.name = "t3";
HAnimSegment661.DEF = "hanim_t3";
Transform Transform662 = createNode("Transform");
Transform662.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Transform Transform663 = createNode("Transform");
//Empty Transform
Shape Shape664 = createNode("Shape");
Shape664.USE = "HAnimJointShape";
Transform663.child = new undefined();

Transform663.child[0] = Shape664;

Transform662.children = new MFNode();

Transform662.children[0] = Transform663;

HAnimSegment661.children = new MFNode();

HAnimSegment661.children[0] = Transform662;

Shape Shape665 = createNode("Shape");
LineSet LineSet666 = createNode("LineSet");
LineSet666.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate667 = createNode("Coordinate");
Coordinate667.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet666.coord = Coordinate667;

//from vt3 to vt2 vertices 2
ColorRGBA ColorRGBA668 = createNode("ColorRGBA");
ColorRGBA668.USE = "HAnimSegmentLineColorRGBA";
LineSet666.color = ColorRGBA668;

Shape665.geometry = LineSet666;

HAnimSegment661.children[1] = Shape665;

HAnimJoint660.children = new MFNode();

HAnimJoint660.children[0] = HAnimSegment661;

HAnimJoint HAnimJoint669 = createNode("HAnimJoint");
HAnimJoint669.name = "vt2";
HAnimJoint669.DEF = "hanim_vt2";
HAnimJoint669.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint669.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint669.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment670 = createNode("HAnimSegment");
HAnimSegment670.name = "t2";
HAnimSegment670.DEF = "hanim_t2";
Transform Transform671 = createNode("Transform");
Transform671.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
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
Coordinate676.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet675.coord = Coordinate676;

//from vt2 to vt1 vertices 2
ColorRGBA ColorRGBA677 = createNode("ColorRGBA");
ColorRGBA677.USE = "HAnimSegmentLineColorRGBA";
LineSet675.color = ColorRGBA677;

Shape674.geometry = LineSet675;

HAnimSegment670.children[1] = Shape674;

HAnimJoint669.children = new MFNode();

HAnimJoint669.children[0] = HAnimSegment670;

HAnimJoint HAnimJoint678 = createNode("HAnimJoint");
HAnimJoint678.name = "vt1";
HAnimJoint678.DEF = "hanim_vt1";
HAnimJoint678.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint678.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint678.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment679 = createNode("HAnimSegment");
HAnimSegment679.name = "t1";
HAnimSegment679.DEF = "hanim_t1";
Transform Transform680 = createNode("Transform");
Transform680.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
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
Coordinate685.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet684.coord = Coordinate685;

//from vt1 to vc7 vertices 2
ColorRGBA ColorRGBA686 = createNode("ColorRGBA");
ColorRGBA686.USE = "HAnimSegmentLineColorRGBA";
LineSet684.color = ColorRGBA686;

Shape683.geometry = LineSet684;

HAnimSegment679.children[1] = Shape683;

Shape Shape687 = createNode("Shape");
LineSet LineSet688 = createNode("LineSet");
LineSet688.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate689 = createNode("Coordinate");
Coordinate689.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet688.coord = Coordinate689;

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA ColorRGBA690 = createNode("ColorRGBA");
ColorRGBA690.USE = "HAnimSegmentLineColorRGBA";
LineSet688.color = ColorRGBA690;

Shape687.geometry = LineSet688;

HAnimSegment679.children[2] = Shape687;

Shape Shape691 = createNode("Shape");
LineSet LineSet692 = createNode("LineSet");
LineSet692.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate693 = createNode("Coordinate");
Coordinate693.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet692.coord = Coordinate693;

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA ColorRGBA694 = createNode("ColorRGBA");
ColorRGBA694.USE = "HAnimSegmentLineColorRGBA";
LineSet692.color = ColorRGBA694;

Shape691.geometry = LineSet692;

HAnimSegment679.children[3] = Shape691;

HAnimJoint678.children = new MFNode();

HAnimJoint678.children[0] = HAnimSegment679;

HAnimJoint HAnimJoint695 = createNode("HAnimJoint");
HAnimJoint695.name = "vc7";
HAnimJoint695.DEF = "hanim_vc7";
HAnimJoint695.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint695.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint695.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment696 = createNode("HAnimSegment");
HAnimSegment696.name = "c7";
HAnimSegment696.DEF = "hanim_c7";
Transform Transform697 = createNode("Transform");
Transform697.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Transform Transform698 = createNode("Transform");
//Empty Transform
Shape Shape699 = createNode("Shape");
Shape699.USE = "HAnimJointShape";
Transform698.child = new undefined();

Transform698.child[0] = Shape699;

Transform697.children = new MFNode();

Transform697.children[0] = Transform698;

HAnimSegment696.children = new MFNode();

HAnimSegment696.children[0] = Transform697;

Shape Shape700 = createNode("Shape");
LineSet LineSet701 = createNode("LineSet");
LineSet701.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate702 = createNode("Coordinate");
Coordinate702.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet701.coord = Coordinate702;

//from vc7 to vc6 vertices 2
ColorRGBA ColorRGBA703 = createNode("ColorRGBA");
ColorRGBA703.USE = "HAnimSegmentLineColorRGBA";
LineSet701.color = ColorRGBA703;

Shape700.geometry = LineSet701;

HAnimSegment696.children[1] = Shape700;

HAnimJoint695.children = new MFNode();

HAnimJoint695.children[0] = HAnimSegment696;

HAnimJoint HAnimJoint704 = createNode("HAnimJoint");
HAnimJoint704.name = "vc6";
HAnimJoint704.DEF = "hanim_vc6";
HAnimJoint704.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint704.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint704.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment705 = createNode("HAnimSegment");
HAnimSegment705.name = "c6";
HAnimSegment705.DEF = "hanim_c6";
Transform Transform706 = createNode("Transform");
Transform706.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Transform Transform707 = createNode("Transform");
//Empty Transform
Shape Shape708 = createNode("Shape");
Shape708.USE = "HAnimJointShape";
Transform707.child = new undefined();

Transform707.child[0] = Shape708;

Transform706.children = new MFNode();

Transform706.children[0] = Transform707;

HAnimSegment705.children = new MFNode();

HAnimSegment705.children[0] = Transform706;

Shape Shape709 = createNode("Shape");
LineSet LineSet710 = createNode("LineSet");
LineSet710.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate711 = createNode("Coordinate");
Coordinate711.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet710.coord = Coordinate711;

//from vc6 to vc5 vertices 2
ColorRGBA ColorRGBA712 = createNode("ColorRGBA");
ColorRGBA712.USE = "HAnimSegmentLineColorRGBA";
LineSet710.color = ColorRGBA712;

Shape709.geometry = LineSet710;

HAnimSegment705.children[1] = Shape709;

HAnimJoint704.children = new MFNode();

HAnimJoint704.children[0] = HAnimSegment705;

HAnimJoint HAnimJoint713 = createNode("HAnimJoint");
HAnimJoint713.name = "vc5";
HAnimJoint713.DEF = "hanim_vc5";
HAnimJoint713.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint713.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint713.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment714 = createNode("HAnimSegment");
HAnimSegment714.name = "c5";
HAnimSegment714.DEF = "hanim_c5";
Transform Transform715 = createNode("Transform");
Transform715.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Transform Transform716 = createNode("Transform");
//Empty Transform
Shape Shape717 = createNode("Shape");
Shape717.USE = "HAnimJointShape";
Transform716.child = new undefined();

Transform716.child[0] = Shape717;

Transform715.children = new MFNode();

Transform715.children[0] = Transform716;

HAnimSegment714.children = new MFNode();

HAnimSegment714.children[0] = Transform715;

Shape Shape718 = createNode("Shape");
LineSet LineSet719 = createNode("LineSet");
LineSet719.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate720 = createNode("Coordinate");
Coordinate720.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet719.coord = Coordinate720;

//from vc5 to vc4 vertices 2
ColorRGBA ColorRGBA721 = createNode("ColorRGBA");
ColorRGBA721.USE = "HAnimSegmentLineColorRGBA";
LineSet719.color = ColorRGBA721;

Shape718.geometry = LineSet719;

HAnimSegment714.children[1] = Shape718;

HAnimJoint713.children = new MFNode();

HAnimJoint713.children[0] = HAnimSegment714;

HAnimJoint HAnimJoint722 = createNode("HAnimJoint");
HAnimJoint722.name = "vc4";
HAnimJoint722.DEF = "hanim_vc4";
HAnimJoint722.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint722.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint722.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment723 = createNode("HAnimSegment");
HAnimSegment723.name = "c4";
HAnimSegment723.DEF = "hanim_c4";
Transform Transform724 = createNode("Transform");
Transform724.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Transform Transform725 = createNode("Transform");
//Empty Transform
Shape Shape726 = createNode("Shape");
Shape726.USE = "HAnimJointShape";
Transform725.child = new undefined();

Transform725.child[0] = Shape726;

Transform724.children = new MFNode();

Transform724.children[0] = Transform725;

HAnimSegment723.children = new MFNode();

HAnimSegment723.children[0] = Transform724;

Shape Shape727 = createNode("Shape");
LineSet LineSet728 = createNode("LineSet");
LineSet728.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate729 = createNode("Coordinate");
Coordinate729.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet728.coord = Coordinate729;

//from vc4 to vc3 vertices 2
ColorRGBA ColorRGBA730 = createNode("ColorRGBA");
ColorRGBA730.USE = "HAnimSegmentLineColorRGBA";
LineSet728.color = ColorRGBA730;

Shape727.geometry = LineSet728;

HAnimSegment723.children[1] = Shape727;

HAnimJoint722.children = new MFNode();

HAnimJoint722.children[0] = HAnimSegment723;

HAnimJoint HAnimJoint731 = createNode("HAnimJoint");
HAnimJoint731.name = "vc3";
HAnimJoint731.DEF = "hanim_vc3";
HAnimJoint731.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint731.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint731.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment732 = createNode("HAnimSegment");
HAnimSegment732.name = "c3";
HAnimSegment732.DEF = "hanim_c3";
Transform Transform733 = createNode("Transform");
Transform733.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Transform Transform734 = createNode("Transform");
//Empty Transform
Shape Shape735 = createNode("Shape");
Shape735.USE = "HAnimJointShape";
Transform734.child = new undefined();

Transform734.child[0] = Shape735;

Transform733.children = new MFNode();

Transform733.children[0] = Transform734;

HAnimSegment732.children = new MFNode();

HAnimSegment732.children[0] = Transform733;

Shape Shape736 = createNode("Shape");
LineSet LineSet737 = createNode("LineSet");
LineSet737.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate738 = createNode("Coordinate");
Coordinate738.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet737.coord = Coordinate738;

//from vc3 to vc2 vertices 2
ColorRGBA ColorRGBA739 = createNode("ColorRGBA");
ColorRGBA739.USE = "HAnimSegmentLineColorRGBA";
LineSet737.color = ColorRGBA739;

Shape736.geometry = LineSet737;

HAnimSegment732.children[1] = Shape736;

HAnimJoint731.children = new MFNode();

HAnimJoint731.children[0] = HAnimSegment732;

HAnimJoint HAnimJoint740 = createNode("HAnimJoint");
HAnimJoint740.name = "vc2";
HAnimJoint740.DEF = "hanim_vc2";
HAnimJoint740.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint740.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint740.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment741 = createNode("HAnimSegment");
HAnimSegment741.name = "c2";
HAnimSegment741.DEF = "hanim_c2";
Transform Transform742 = createNode("Transform");
Transform742.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Transform Transform743 = createNode("Transform");
//Empty Transform
Shape Shape744 = createNode("Shape");
Shape744.USE = "HAnimJointShape";
Transform743.child = new undefined();

Transform743.child[0] = Shape744;

Transform742.children = new MFNode();

Transform742.children[0] = Transform743;

HAnimSegment741.children = new MFNode();

HAnimSegment741.children[0] = Transform742;

Shape Shape745 = createNode("Shape");
LineSet LineSet746 = createNode("LineSet");
LineSet746.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate747 = createNode("Coordinate");
Coordinate747.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet746.coord = Coordinate747;

//from vc2 to vc1 vertices 2
ColorRGBA ColorRGBA748 = createNode("ColorRGBA");
ColorRGBA748.USE = "HAnimSegmentLineColorRGBA";
LineSet746.color = ColorRGBA748;

Shape745.geometry = LineSet746;

HAnimSegment741.children[1] = Shape745;

HAnimJoint740.children = new MFNode();

HAnimJoint740.children[0] = HAnimSegment741;

HAnimJoint HAnimJoint749 = createNode("HAnimJoint");
HAnimJoint749.name = "vc1";
HAnimJoint749.DEF = "hanim_vc1";
HAnimJoint749.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint749.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint749.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment750 = createNode("HAnimSegment");
HAnimSegment750.name = "c1";
HAnimSegment750.DEF = "hanim_c1";
Transform Transform751 = createNode("Transform");
Transform751.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
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
Coordinate756.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet755.coord = Coordinate756;

//from vc1 to skullbase vertices 2
ColorRGBA ColorRGBA757 = createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSegmentLineColorRGBA";
LineSet755.color = ColorRGBA757;

Shape754.geometry = LineSet755;

HAnimSegment750.children[1] = Shape754;

HAnimJoint749.children = new MFNode();

HAnimJoint749.children[0] = HAnimSegment750;

HAnimJoint HAnimJoint758 = createNode("HAnimJoint");
HAnimJoint758.name = "skullbase";
HAnimJoint758.DEF = "hanim_skullbase";
HAnimJoint758.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint758.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment759 = createNode("HAnimSegment");
HAnimSegment759.name = "skull";
HAnimSegment759.DEF = "hanim_skull";
Transform Transform760 = createNode("Transform");
Transform760.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
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
Coordinate765.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
LineSet764.coord = Coordinate765;

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA ColorRGBA766 = createNode("ColorRGBA");
ColorRGBA766.USE = "HAnimSegmentLineColorRGBA";
LineSet764.color = ColorRGBA766;

Shape763.geometry = LineSet764;

HAnimSegment759.children[1] = Shape763;

Shape Shape767 = createNode("Shape");
LineSet LineSet768 = createNode("LineSet");
LineSet768.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate769 = createNode("Coordinate");
Coordinate769.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
LineSet768.coord = Coordinate769;

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA ColorRGBA770 = createNode("ColorRGBA");
ColorRGBA770.USE = "HAnimSegmentLineColorRGBA";
LineSet768.color = ColorRGBA770;

Shape767.geometry = LineSet768;

HAnimSegment759.children[2] = Shape767;

Shape Shape771 = createNode("Shape");
LineSet LineSet772 = createNode("LineSet");
LineSet772.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate773 = createNode("Coordinate");
Coordinate773.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
LineSet772.coord = Coordinate773;

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA ColorRGBA774 = createNode("ColorRGBA");
ColorRGBA774.USE = "HAnimSegmentLineColorRGBA";
LineSet772.color = ColorRGBA774;

Shape771.geometry = LineSet772;

HAnimSegment759.children[3] = Shape771;

Shape Shape775 = createNode("Shape");
LineSet LineSet776 = createNode("LineSet");
LineSet776.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate777 = createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
LineSet776.coord = Coordinate777;

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA ColorRGBA778 = createNode("ColorRGBA");
ColorRGBA778.USE = "HAnimSegmentLineColorRGBA";
LineSet776.color = ColorRGBA778;

Shape775.geometry = LineSet776;

HAnimSegment759.children[4] = Shape775;

Shape Shape779 = createNode("Shape");
LineSet LineSet780 = createNode("LineSet");
LineSet780.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate781 = createNode("Coordinate");
Coordinate781.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
LineSet780.coord = Coordinate781;

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA ColorRGBA782 = createNode("ColorRGBA");
ColorRGBA782.USE = "HAnimSegmentLineColorRGBA";
LineSet780.color = ColorRGBA782;

Shape779.geometry = LineSet780;

HAnimSegment759.children[5] = Shape779;

Shape Shape783 = createNode("Shape");
LineSet LineSet784 = createNode("LineSet");
LineSet784.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate785 = createNode("Coordinate");
Coordinate785.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
LineSet784.coord = Coordinate785;

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA ColorRGBA786 = createNode("ColorRGBA");
ColorRGBA786.USE = "HAnimSegmentLineColorRGBA";
LineSet784.color = ColorRGBA786;

Shape783.geometry = LineSet784;

HAnimSegment759.children[6] = Shape783;

Shape Shape787 = createNode("Shape");
LineSet LineSet788 = createNode("LineSet");
LineSet788.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate789 = createNode("Coordinate");
Coordinate789.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
LineSet788.coord = Coordinate789;

//from skullbase to temporomandibular vertices 2
ColorRGBA ColorRGBA790 = createNode("ColorRGBA");
ColorRGBA790.USE = "HAnimSegmentLineColorRGBA";
LineSet788.color = ColorRGBA790;

Shape787.geometry = LineSet788;

HAnimSegment759.children[7] = Shape787;

HAnimJoint758.children = new MFNode();

HAnimJoint758.children[0] = HAnimSegment759;

HAnimJoint HAnimJoint791 = createNode("HAnimJoint");
HAnimJoint791.name = "l_eyelid_joint";
HAnimJoint791.DEF = "hanim_l_eyelid_joint";
HAnimJoint791.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint791.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint791.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[1] = HAnimJoint791;

HAnimJoint HAnimJoint792 = createNode("HAnimJoint");
HAnimJoint792.name = "r_eyelid_joint";
HAnimJoint792.DEF = "hanim_r_eyelid_joint";
HAnimJoint792.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint792.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint792.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[2] = HAnimJoint792;

HAnimJoint HAnimJoint793 = createNode("HAnimJoint");
HAnimJoint793.name = "l_eyeball_joint";
HAnimJoint793.DEF = "hanim_l_eyeball_joint";
HAnimJoint793.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint793.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint793.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[3] = HAnimJoint793;

HAnimJoint HAnimJoint794 = createNode("HAnimJoint");
HAnimJoint794.name = "r_eyeball_joint";
HAnimJoint794.DEF = "hanim_r_eyeball_joint";
HAnimJoint794.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint794.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint794.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[4] = HAnimJoint794;

HAnimJoint HAnimJoint795 = createNode("HAnimJoint");
HAnimJoint795.name = "l_eyebrow_joint";
HAnimJoint795.DEF = "hanim_l_eyebrow_joint";
HAnimJoint795.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint795.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint795.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[5] = HAnimJoint795;

HAnimJoint HAnimJoint796 = createNode("HAnimJoint");
HAnimJoint796.name = "r_eyebrow_joint";
HAnimJoint796.DEF = "hanim_r_eyebrow_joint";
HAnimJoint796.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint796.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint796.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[6] = HAnimJoint796;

HAnimJoint HAnimJoint797 = createNode("HAnimJoint");
HAnimJoint797.name = "temporomandibular";
HAnimJoint797.DEF = "hanim_temporomandibular";
HAnimJoint797.center = new SFVec3f(new float[-0.0002,1.3043,-0.0865]);
HAnimJoint797.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint797.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint758.children[7] = HAnimJoint797;

HAnimJoint749.children[1] = HAnimJoint758;

HAnimJoint740.children[1] = HAnimJoint749;

HAnimJoint731.children[1] = HAnimJoint740;

HAnimJoint722.children[1] = HAnimJoint731;

HAnimJoint713.children[1] = HAnimJoint722;

HAnimJoint704.children[1] = HAnimJoint713;

HAnimJoint695.children[1] = HAnimJoint704;

HAnimJoint678.children[1] = HAnimJoint695;

HAnimJoint HAnimJoint798 = createNode("HAnimJoint");
HAnimJoint798.name = "l_sternoclavicular";
HAnimJoint798.DEF = "hanim_l_sternoclavicular";
HAnimJoint798.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint798.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint798.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment799 = createNode("HAnimSegment");
HAnimSegment799.name = "l_clavicle";
HAnimSegment799.DEF = "hanim_l_clavicle";
Transform Transform800 = createNode("Transform");
Transform800.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
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
Coordinate805.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet804.coord = Coordinate805;

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA ColorRGBA806 = createNode("ColorRGBA");
ColorRGBA806.USE = "HAnimSegmentLineColorRGBA";
LineSet804.color = ColorRGBA806;

Shape803.geometry = LineSet804;

HAnimSegment799.children[1] = Shape803;

HAnimJoint798.children = new MFNode();

HAnimJoint798.children[0] = HAnimSegment799;

HAnimJoint HAnimJoint807 = createNode("HAnimJoint");
HAnimJoint807.name = "l_acromioclavicular";
HAnimJoint807.DEF = "hanim_l_acromioclavicular";
HAnimJoint807.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint807.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint807.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment808 = createNode("HAnimSegment");
HAnimSegment808.name = "l_scapula";
HAnimSegment808.DEF = "hanim_l_scapula";
Transform Transform809 = createNode("Transform");
Transform809.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
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
Coordinate814.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet813.coord = Coordinate814;

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA ColorRGBA815 = createNode("ColorRGBA");
ColorRGBA815.USE = "HAnimSegmentLineColorRGBA";
LineSet813.color = ColorRGBA815;

Shape812.geometry = LineSet813;

HAnimSegment808.children[1] = Shape812;

HAnimJoint807.children = new MFNode();

HAnimJoint807.children[0] = HAnimSegment808;

HAnimJoint HAnimJoint816 = createNode("HAnimJoint");
HAnimJoint816.name = "l_shoulder";
HAnimJoint816.DEF = "hanim_l_shoulder";
HAnimJoint816.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint816.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint816.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment817 = createNode("HAnimSegment");
HAnimSegment817.name = "l_upperarm";
HAnimSegment817.DEF = "hanim_l_upperarm";
Transform Transform818 = createNode("Transform");
Transform818.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
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
Coordinate823.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet822.coord = Coordinate823;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA824 = createNode("ColorRGBA");
ColorRGBA824.USE = "HAnimSegmentLineColorRGBA";
LineSet822.color = ColorRGBA824;

Shape821.geometry = LineSet822;

HAnimSegment817.children[1] = Shape821;

HAnimJoint816.children = new MFNode();

HAnimJoint816.children[0] = HAnimSegment817;

HAnimJoint HAnimJoint825 = createNode("HAnimJoint");
HAnimJoint825.name = "l_elbow";
HAnimJoint825.DEF = "hanim_l_elbow";
HAnimJoint825.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint825.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint825.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment826 = createNode("HAnimSegment");
HAnimSegment826.name = "l_forearm";
HAnimSegment826.DEF = "hanim_l_forearm";
Transform Transform827 = createNode("Transform");
Transform827.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform828 = createNode("Transform");
//Empty Transform
Shape Shape829 = createNode("Shape");
Shape829.USE = "HAnimJointShape";
Transform828.child = new undefined();

Transform828.child[0] = Shape829;

Transform827.children = new MFNode();

Transform827.children[0] = Transform828;

HAnimSegment826.children = new MFNode();

HAnimSegment826.children[0] = Transform827;

Shape Shape830 = createNode("Shape");
LineSet LineSet831 = createNode("LineSet");
LineSet831.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate832 = createNode("Coordinate");
Coordinate832.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet831.coord = Coordinate832;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA833 = createNode("ColorRGBA");
ColorRGBA833.USE = "HAnimSegmentLineColorRGBA";
LineSet831.color = ColorRGBA833;

Shape830.geometry = LineSet831;

HAnimSegment826.children[1] = Shape830;

HAnimJoint825.children = new MFNode();

HAnimJoint825.children[0] = HAnimSegment826;

HAnimJoint HAnimJoint834 = createNode("HAnimJoint");
HAnimJoint834.name = "l_radiocarpal";
HAnimJoint834.DEF = "hanim_l_radiocarpal";
HAnimJoint834.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint834.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint834.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment835 = createNode("HAnimSegment");
HAnimSegment835.name = "l_carpal";
HAnimSegment835.DEF = "hanim_l_carpal";
Transform Transform836 = createNode("Transform");
Transform836.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform836.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform836.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
Transform Transform837 = createNode("Transform");
Transform837.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
Shape Shape838 = createNode("Shape");
Shape838.USE = "HAnimJointShape";
Transform837.child = new undefined();

Transform837.child[0] = Shape838;

Transform836.children = new MFNode();

Transform836.children[0] = Transform837;

HAnimSegment835.children = new MFNode();

HAnimSegment835.children[0] = Transform836;

Shape Shape839 = createNode("Shape");
LineSet LineSet840 = createNode("LineSet");
LineSet840.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate841 = createNode("Coordinate");
Coordinate841.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826]);
LineSet840.coord = Coordinate841;

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA ColorRGBA842 = createNode("ColorRGBA");
ColorRGBA842.USE = "HAnimSegmentLineColorRGBA";
LineSet840.color = ColorRGBA842;

Shape839.geometry = LineSet840;

HAnimSegment835.children[1] = Shape839;

Shape Shape843 = createNode("Shape");
LineSet LineSet844 = createNode("LineSet");
LineSet844.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate845 = createNode("Coordinate");
Coordinate845.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935]);
LineSet844.coord = Coordinate845;

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA ColorRGBA846 = createNode("ColorRGBA");
ColorRGBA846.USE = "HAnimSegmentLineColorRGBA";
LineSet844.color = ColorRGBA846;

Shape843.geometry = LineSet844;

HAnimSegment835.children[2] = Shape843;

Shape Shape847 = createNode("Shape");
LineSet LineSet848 = createNode("LineSet");
LineSet848.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate849 = createNode("Coordinate");
Coordinate849.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067]);
LineSet848.coord = Coordinate849;

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA ColorRGBA850 = createNode("ColorRGBA");
ColorRGBA850.USE = "HAnimSegmentLineColorRGBA";
LineSet848.color = ColorRGBA850;

Shape847.geometry = LineSet848;

HAnimSegment835.children[3] = Shape847;

Shape Shape851 = createNode("Shape");
LineSet LineSet852 = createNode("LineSet");
LineSet852.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate853 = createNode("Coordinate");
Coordinate853.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276]);
LineSet852.coord = Coordinate853;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA854 = createNode("ColorRGBA");
ColorRGBA854.USE = "HAnimSegmentLineColorRGBA";
LineSet852.color = ColorRGBA854;

Shape851.geometry = LineSet852;

HAnimSegment835.children[4] = Shape851;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimSegment835;

HAnimJoint HAnimJoint855 = createNode("HAnimJoint");
HAnimJoint855.name = "l_midcarpal_1";
HAnimJoint855.DEF = "hanim_l_midcarpal_1";
HAnimJoint855.center = new SFVec3f(new float[0.1811,0.6975,-0.0826]);
HAnimJoint855.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint855.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment856 = createNode("HAnimSegment");
HAnimSegment856.name = "l_trapezium";
HAnimSegment856.DEF = "hanim_l_trapezium";
Transform Transform857 = createNode("Transform");
Transform857.translation = new SFVec3f(new float[0.1811,0.6975,-0.0826]);
Transform Transform858 = createNode("Transform");
//Empty Transform
Shape Shape859 = createNode("Shape");
Shape859.USE = "HAnimJointShape";
Transform858.child = new undefined();

Transform858.child[0] = Shape859;

Transform857.children = new MFNode();

Transform857.children[0] = Transform858;

HAnimSegment856.children = new MFNode();

HAnimSegment856.children[0] = Transform857;

Shape Shape860 = createNode("Shape");
LineSet LineSet861 = createNode("LineSet");
LineSet861.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate862 = createNode("Coordinate");
Coordinate862.point = new MFVec3f(new float[0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534]);
LineSet861.coord = Coordinate862;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA863 = createNode("ColorRGBA");
ColorRGBA863.USE = "HAnimSegmentLineColorRGBA";
LineSet861.color = ColorRGBA863;

Shape860.geometry = LineSet861;

HAnimSegment856.children[1] = Shape860;

HAnimJoint855.children = new MFNode();

HAnimJoint855.children[0] = HAnimSegment856;

HAnimJoint HAnimJoint864 = createNode("HAnimJoint");
HAnimJoint864.name = "l_carpometacarpal_1";
HAnimJoint864.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint864.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint864.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint864.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment865 = createNode("HAnimSegment");
HAnimSegment865.name = "l_metacarpal_1";
HAnimSegment865.DEF = "hanim_l_metacarpal_1";
Transform Transform866 = createNode("Transform");
Transform866.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Transform Transform867 = createNode("Transform");
//Empty Transform
Shape Shape868 = createNode("Shape");
Shape868.USE = "HAnimJointShape";
Transform867.child = new undefined();

Transform867.child[0] = Shape868;

Transform866.children = new MFNode();

Transform866.children[0] = Transform867;

HAnimSegment865.children = new MFNode();

HAnimSegment865.children[0] = Transform866;

Shape Shape869 = createNode("Shape");
LineSet LineSet870 = createNode("LineSet");
LineSet870.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate871 = createNode("Coordinate");
Coordinate871.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet870.coord = Coordinate871;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA872 = createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSegmentLineColorRGBA";
LineSet870.color = ColorRGBA872;

Shape869.geometry = LineSet870;

HAnimSegment865.children[1] = Shape869;

HAnimJoint864.children = new MFNode();

HAnimJoint864.children[0] = HAnimSegment865;

HAnimJoint HAnimJoint873 = createNode("HAnimJoint");
HAnimJoint873.name = "l_metacarpophalangeal_1";
HAnimJoint873.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint873.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint873.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint873.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment874 = createNode("HAnimSegment");
HAnimSegment874.name = "l_carpal_proximal_phalanx_1";
HAnimSegment874.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform875 = createNode("Transform");
Transform875.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform876 = createNode("Transform");
//Empty Transform
Shape Shape877 = createNode("Shape");
Shape877.USE = "HAnimJointShape";
Transform876.child = new undefined();

Transform876.child[0] = Shape877;

Transform875.children = new MFNode();

Transform875.children[0] = Transform876;

HAnimSegment874.children = new MFNode();

HAnimSegment874.children[0] = Transform875;

Shape Shape878 = createNode("Shape");
LineSet LineSet879 = createNode("LineSet");
LineSet879.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate880 = createNode("Coordinate");
Coordinate880.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet879.coord = Coordinate880;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA881 = createNode("ColorRGBA");
ColorRGBA881.USE = "HAnimSegmentLineColorRGBA";
LineSet879.color = ColorRGBA881;

Shape878.geometry = LineSet879;

HAnimSegment874.children[1] = Shape878;

HAnimJoint873.children = new MFNode();

HAnimJoint873.children[0] = HAnimSegment874;

HAnimJoint HAnimJoint882 = createNode("HAnimJoint");
HAnimJoint882.name = "l_carpal_interphalangeal_1";
HAnimJoint882.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint882.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint882.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint882.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint873.children[1] = HAnimJoint882;

HAnimJoint864.children[1] = HAnimJoint873;

HAnimJoint855.children[1] = HAnimJoint864;

HAnimJoint834.children[1] = HAnimJoint855;

HAnimJoint HAnimJoint883 = createNode("HAnimJoint");
HAnimJoint883.name = "l_midcarpal_2";
HAnimJoint883.DEF = "hanim_l_midcarpal_2";
HAnimJoint883.center = new SFVec3f(new float[0.1811,0.6984,-0.0935]);
HAnimJoint883.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint883.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment884 = createNode("HAnimSegment");
HAnimSegment884.name = "l_trapezoid";
HAnimSegment884.DEF = "hanim_l_trapezoid";
Transform Transform885 = createNode("Transform");
Transform885.translation = new SFVec3f(new float[0.1811,0.6984,-0.0935]);
Transform Transform886 = createNode("Transform");
//Empty Transform
Shape Shape887 = createNode("Shape");
Shape887.USE = "HAnimJointShape";
Transform886.child = new undefined();

Transform886.child[0] = Shape887;

Transform885.children = new MFNode();

Transform885.children[0] = Transform886;

HAnimSegment884.children = new MFNode();

HAnimSegment884.children[0] = Transform885;

Shape Shape888 = createNode("Shape");
LineSet LineSet889 = createNode("LineSet");
LineSet889.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate890 = createNode("Coordinate");
Coordinate890.point = new MFVec3f(new float[0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028]);
LineSet889.coord = Coordinate890;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA891 = createNode("ColorRGBA");
ColorRGBA891.USE = "HAnimSegmentLineColorRGBA";
LineSet889.color = ColorRGBA891;

Shape888.geometry = LineSet889;

HAnimSegment884.children[1] = Shape888;

HAnimJoint883.children = new MFNode();

HAnimJoint883.children[0] = HAnimSegment884;

HAnimJoint HAnimJoint892 = createNode("HAnimJoint");
HAnimJoint892.name = "l_carpometacarpal_2";
HAnimJoint892.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint892.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint892.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint892.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment893 = createNode("HAnimSegment");
HAnimSegment893.name = "l_metacarpal_2";
HAnimSegment893.DEF = "hanim_l_metacarpal_2";
Transform Transform894 = createNode("Transform");
Transform894.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Transform Transform895 = createNode("Transform");
//Empty Transform
Shape Shape896 = createNode("Shape");
Shape896.USE = "HAnimJointShape";
Transform895.child = new undefined();

Transform895.child[0] = Shape896;

Transform894.children = new MFNode();

Transform894.children[0] = Transform895;

HAnimSegment893.children = new MFNode();

HAnimSegment893.children[0] = Transform894;

Shape Shape897 = createNode("Shape");
LineSet LineSet898 = createNode("LineSet");
LineSet898.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate899 = createNode("Coordinate");
Coordinate899.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet898.coord = Coordinate899;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA900 = createNode("ColorRGBA");
ColorRGBA900.USE = "HAnimSegmentLineColorRGBA";
LineSet898.color = ColorRGBA900;

Shape897.geometry = LineSet898;

HAnimSegment893.children[1] = Shape897;

HAnimJoint892.children = new MFNode();

HAnimJoint892.children[0] = HAnimSegment893;

HAnimJoint HAnimJoint901 = createNode("HAnimJoint");
HAnimJoint901.name = "l_metacarpophalangeal_2";
HAnimJoint901.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint901.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint901.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint901.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment902 = createNode("HAnimSegment");
HAnimSegment902.name = "l_carpal_proximal_phalanx_2";
HAnimSegment902.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform903 = createNode("Transform");
Transform903.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform904 = createNode("Transform");
//Empty Transform
Shape Shape905 = createNode("Shape");
Shape905.USE = "HAnimJointShape";
Transform904.child = new undefined();

Transform904.child[0] = Shape905;

Transform903.children = new MFNode();

Transform903.children[0] = Transform904;

HAnimSegment902.children = new MFNode();

HAnimSegment902.children[0] = Transform903;

Shape Shape906 = createNode("Shape");
LineSet LineSet907 = createNode("LineSet");
LineSet907.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate908 = createNode("Coordinate");
Coordinate908.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet907.coord = Coordinate908;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA909 = createNode("ColorRGBA");
ColorRGBA909.USE = "HAnimSegmentLineColorRGBA";
LineSet907.color = ColorRGBA909;

Shape906.geometry = LineSet907;

HAnimSegment902.children[1] = Shape906;

HAnimJoint901.children = new MFNode();

HAnimJoint901.children[0] = HAnimSegment902;

HAnimJoint HAnimJoint910 = createNode("HAnimJoint");
HAnimJoint910.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint910.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint910.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint910.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint910.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment911 = createNode("HAnimSegment");
HAnimSegment911.name = "l_carpal_middle_phalanx_2";
HAnimSegment911.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform912 = createNode("Transform");
Transform912.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform913 = createNode("Transform");
//Empty Transform
Shape Shape914 = createNode("Shape");
Shape914.USE = "HAnimJointShape";
Transform913.child = new undefined();

Transform913.child[0] = Shape914;

Transform912.children = new MFNode();

Transform912.children[0] = Transform913;

HAnimSegment911.children = new MFNode();

HAnimSegment911.children[0] = Transform912;

Shape Shape915 = createNode("Shape");
LineSet LineSet916 = createNode("LineSet");
LineSet916.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate917 = createNode("Coordinate");
Coordinate917.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet916.coord = Coordinate917;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA918 = createNode("ColorRGBA");
ColorRGBA918.USE = "HAnimSegmentLineColorRGBA";
LineSet916.color = ColorRGBA918;

Shape915.geometry = LineSet916;

HAnimSegment911.children[1] = Shape915;

HAnimJoint910.children = new MFNode();

HAnimJoint910.children[0] = HAnimSegment911;

HAnimJoint HAnimJoint919 = createNode("HAnimJoint");
HAnimJoint919.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint919.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint919.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint919.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint919.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint910.children[1] = HAnimJoint919;

HAnimJoint901.children[1] = HAnimJoint910;

HAnimJoint892.children[1] = HAnimJoint901;

HAnimJoint883.children[1] = HAnimJoint892;

HAnimJoint834.children[2] = HAnimJoint883;

HAnimJoint HAnimJoint920 = createNode("HAnimJoint");
HAnimJoint920.name = "l_midcarpal_3";
HAnimJoint920.DEF = "hanim_l_midcarpal_3";
HAnimJoint920.center = new SFVec3f(new float[0.1809,0.7,-0.1067]);
HAnimJoint920.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint920.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment921 = createNode("HAnimSegment");
HAnimSegment921.name = "l_capitate";
HAnimSegment921.DEF = "hanim_l_capitate";
Transform Transform922 = createNode("Transform");
Transform922.translation = new SFVec3f(new float[0.1809,0.7,-0.1067]);
Transform Transform923 = createNode("Transform");
//Empty Transform
Shape Shape924 = createNode("Shape");
Shape924.USE = "HAnimJointShape";
Transform923.child = new undefined();

Transform923.child[0] = Shape924;

Transform922.children = new MFNode();

Transform922.children[0] = Transform923;

HAnimSegment921.children = new MFNode();

HAnimSegment921.children[0] = Transform922;

Shape Shape925 = createNode("Shape");
LineSet LineSet926 = createNode("LineSet");
LineSet926.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate927 = createNode("Coordinate");
Coordinate927.point = new MFVec3f(new float[0.1809,0.7,-0.1067,0.1987,0.8029,-0.053]);
LineSet926.coord = Coordinate927;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA928 = createNode("ColorRGBA");
ColorRGBA928.USE = "HAnimSegmentLineColorRGBA";
LineSet926.color = ColorRGBA928;

Shape925.geometry = LineSet926;

HAnimSegment921.children[1] = Shape925;

HAnimJoint920.children = new MFNode();

HAnimJoint920.children[0] = HAnimSegment921;

HAnimJoint HAnimJoint929 = createNode("HAnimJoint");
HAnimJoint929.name = "l_carpometacarpal_3";
HAnimJoint929.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint929.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint929.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint929.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment930 = createNode("HAnimSegment");
HAnimSegment930.name = "l_metacarpal_3";
HAnimSegment930.DEF = "hanim_l_metacarpal_3";
Transform Transform931 = createNode("Transform");
Transform931.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Transform Transform932 = createNode("Transform");
//Empty Transform
Shape Shape933 = createNode("Shape");
Shape933.USE = "HAnimJointShape";
Transform932.child = new undefined();

Transform932.child[0] = Shape933;

Transform931.children = new MFNode();

Transform931.children[0] = Transform932;

HAnimSegment930.children = new MFNode();

HAnimSegment930.children[0] = Transform931;

Shape Shape934 = createNode("Shape");
LineSet LineSet935 = createNode("LineSet");
LineSet935.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate936 = createNode("Coordinate");
Coordinate936.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet935.coord = Coordinate936;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA937 = createNode("ColorRGBA");
ColorRGBA937.USE = "HAnimSegmentLineColorRGBA";
LineSet935.color = ColorRGBA937;

Shape934.geometry = LineSet935;

HAnimSegment930.children[1] = Shape934;

HAnimJoint929.children = new MFNode();

HAnimJoint929.children[0] = HAnimSegment930;

HAnimJoint HAnimJoint938 = createNode("HAnimJoint");
HAnimJoint938.name = "l_metacarpophalangeal_3";
HAnimJoint938.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint938.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint938.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint938.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment939 = createNode("HAnimSegment");
HAnimSegment939.name = "l_carpal_proximal_phalanx_3";
HAnimSegment939.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform940 = createNode("Transform");
Transform940.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Transform Transform941 = createNode("Transform");
//Empty Transform
Shape Shape942 = createNode("Shape");
Shape942.USE = "HAnimJointShape";
Transform941.child = new undefined();

Transform941.child[0] = Shape942;

Transform940.children = new MFNode();

Transform940.children[0] = Transform941;

HAnimSegment939.children = new MFNode();

HAnimSegment939.children[0] = Transform940;

Shape Shape943 = createNode("Shape");
LineSet LineSet944 = createNode("LineSet");
LineSet944.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate945 = createNode("Coordinate");
Coordinate945.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet944.coord = Coordinate945;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA946 = createNode("ColorRGBA");
ColorRGBA946.USE = "HAnimSegmentLineColorRGBA";
LineSet944.color = ColorRGBA946;

Shape943.geometry = LineSet944;

HAnimSegment939.children[1] = Shape943;

HAnimJoint938.children = new MFNode();

HAnimJoint938.children[0] = HAnimSegment939;

HAnimJoint HAnimJoint947 = createNode("HAnimJoint");
HAnimJoint947.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint947.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint947.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint947.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint947.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment948 = createNode("HAnimSegment");
HAnimSegment948.name = "l_carpal_middle_phalanx_3";
HAnimSegment948.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform949 = createNode("Transform");
Transform949.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Transform Transform950 = createNode("Transform");
//Empty Transform
Shape Shape951 = createNode("Shape");
Shape951.USE = "HAnimJointShape";
Transform950.child = new undefined();

Transform950.child[0] = Shape951;

Transform949.children = new MFNode();

Transform949.children[0] = Transform950;

HAnimSegment948.children = new MFNode();

HAnimSegment948.children[0] = Transform949;

Shape Shape952 = createNode("Shape");
LineSet LineSet953 = createNode("LineSet");
LineSet953.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate954 = createNode("Coordinate");
Coordinate954.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet953.coord = Coordinate954;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA955 = createNode("ColorRGBA");
ColorRGBA955.USE = "HAnimSegmentLineColorRGBA";
LineSet953.color = ColorRGBA955;

Shape952.geometry = LineSet953;

HAnimSegment948.children[1] = Shape952;

HAnimJoint947.children = new MFNode();

HAnimJoint947.children[0] = HAnimSegment948;

HAnimJoint HAnimJoint956 = createNode("HAnimJoint");
HAnimJoint956.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint956.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint956.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint956.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint956.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint947.children[1] = HAnimJoint956;

HAnimJoint938.children[1] = HAnimJoint947;

HAnimJoint929.children[1] = HAnimJoint938;

HAnimJoint920.children[1] = HAnimJoint929;

HAnimJoint834.children[3] = HAnimJoint920;

HAnimJoint HAnimJoint957 = createNode("HAnimJoint");
HAnimJoint957.name = "l_midcarpal_4_5";
HAnimJoint957.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint957.center = new SFVec3f(new float[0.1809,0.6973,-0.1276]);
HAnimJoint957.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint957.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment958 = createNode("HAnimSegment");
HAnimSegment958.name = "l_hamate";
HAnimSegment958.DEF = "hanim_l_hamate";
Transform Transform959 = createNode("Transform");
Transform959.translation = new SFVec3f(new float[0.1809,0.6973,-0.1276]);
Transform Transform960 = createNode("Transform");
//Empty Transform
Shape Shape961 = createNode("Shape");
Shape961.USE = "HAnimJointShape";
Transform960.child = new undefined();

Transform960.child[0] = Shape961;

Transform959.children = new MFNode();

Transform959.children[0] = Transform960;

HAnimSegment958.children = new MFNode();

HAnimSegment958.children[0] = Transform959;

Shape Shape962 = createNode("Shape");
LineSet LineSet963 = createNode("LineSet");
LineSet963.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate964 = createNode("Coordinate");
Coordinate964.point = new MFVec3f(new float[0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794]);
LineSet963.coord = Coordinate964;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA965 = createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSegmentLineColorRGBA";
LineSet963.color = ColorRGBA965;

Shape962.geometry = LineSet963;

HAnimSegment958.children[1] = Shape962;

Shape Shape966 = createNode("Shape");
LineSet LineSet967 = createNode("LineSet");
LineSet967.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate968 = createNode("Coordinate");
Coordinate968.point = new MFVec3f(new float[0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036]);
LineSet967.coord = Coordinate968;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA969 = createNode("ColorRGBA");
ColorRGBA969.USE = "HAnimSegmentLineColorRGBA";
LineSet967.color = ColorRGBA969;

Shape966.geometry = LineSet967;

HAnimSegment958.children[2] = Shape966;

HAnimJoint957.children = new MFNode();

HAnimJoint957.children[0] = HAnimSegment958;

HAnimJoint HAnimJoint970 = createNode("HAnimJoint");
HAnimJoint970.name = "l_carpometacarpal_4";
HAnimJoint970.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint970.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint970.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint970.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment971 = createNode("HAnimSegment");
HAnimSegment971.name = "l_metacarpal_4";
HAnimSegment971.DEF = "hanim_l_metacarpal_4";
Transform Transform972 = createNode("Transform");
Transform972.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
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
Coordinate977.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet976.coord = Coordinate977;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA978 = createNode("ColorRGBA");
ColorRGBA978.USE = "HAnimSegmentLineColorRGBA";
LineSet976.color = ColorRGBA978;

Shape975.geometry = LineSet976;

HAnimSegment971.children[1] = Shape975;

HAnimJoint970.children = new MFNode();

HAnimJoint970.children[0] = HAnimSegment971;

HAnimJoint HAnimJoint979 = createNode("HAnimJoint");
HAnimJoint979.name = "l_metacarpophalangeal_4";
HAnimJoint979.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint979.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint979.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint979.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment980 = createNode("HAnimSegment");
HAnimSegment980.name = "l_carpal_proximal_phalanx_4";
HAnimSegment980.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform981 = createNode("Transform");
Transform981.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform982 = createNode("Transform");
//Empty Transform
Shape Shape983 = createNode("Shape");
Shape983.USE = "HAnimJointShape";
Transform982.child = new undefined();

Transform982.child[0] = Shape983;

Transform981.children = new MFNode();

Transform981.children[0] = Transform982;

HAnimSegment980.children = new MFNode();

HAnimSegment980.children[0] = Transform981;

Shape Shape984 = createNode("Shape");
LineSet LineSet985 = createNode("LineSet");
LineSet985.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate986 = createNode("Coordinate");
Coordinate986.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet985.coord = Coordinate986;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA987 = createNode("ColorRGBA");
ColorRGBA987.USE = "HAnimSegmentLineColorRGBA";
LineSet985.color = ColorRGBA987;

Shape984.geometry = LineSet985;

HAnimSegment980.children[1] = Shape984;

HAnimJoint979.children = new MFNode();

HAnimJoint979.children[0] = HAnimSegment980;

HAnimJoint HAnimJoint988 = createNode("HAnimJoint");
HAnimJoint988.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint988.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint988.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint988.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint988.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment989 = createNode("HAnimSegment");
HAnimSegment989.name = "l_carpal_middle_phalanx_4";
HAnimSegment989.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform990 = createNode("Transform");
Transform990.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Transform Transform991 = createNode("Transform");
//Empty Transform
Shape Shape992 = createNode("Shape");
Shape992.USE = "HAnimJointShape";
Transform991.child = new undefined();

Transform991.child[0] = Shape992;

Transform990.children = new MFNode();

Transform990.children[0] = Transform991;

HAnimSegment989.children = new MFNode();

HAnimSegment989.children[0] = Transform990;

Shape Shape993 = createNode("Shape");
LineSet LineSet994 = createNode("LineSet");
LineSet994.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate995 = createNode("Coordinate");
Coordinate995.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet994.coord = Coordinate995;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA996 = createNode("ColorRGBA");
ColorRGBA996.USE = "HAnimSegmentLineColorRGBA";
LineSet994.color = ColorRGBA996;

Shape993.geometry = LineSet994;

HAnimSegment989.children[1] = Shape993;

HAnimJoint988.children = new MFNode();

HAnimJoint988.children[0] = HAnimSegment989;

HAnimJoint HAnimJoint997 = createNode("HAnimJoint");
HAnimJoint997.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint997.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint997.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint997.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint997.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint988.children[1] = HAnimJoint997;

HAnimJoint979.children[1] = HAnimJoint988;

HAnimJoint970.children[1] = HAnimJoint979;

HAnimJoint957.children[1] = HAnimJoint970;

HAnimJoint HAnimJoint998 = createNode("HAnimJoint");
HAnimJoint998.name = "l_carpometacarpal_5";
HAnimJoint998.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint998.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint998.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint998.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment999 = createNode("HAnimSegment");
HAnimSegment999.name = "l_metacarpal_5";
HAnimSegment999.DEF = "hanim_l_metacarpal_5";
Transform Transform1000 = createNode("Transform");
Transform1000.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Transform Transform1001 = createNode("Transform");
//Empty Transform
Shape Shape1002 = createNode("Shape");
Shape1002.USE = "HAnimJointShape";
Transform1001.child = new undefined();

Transform1001.child[0] = Shape1002;

Transform1000.children = new MFNode();

Transform1000.children[0] = Transform1001;

HAnimSegment999.children = new MFNode();

HAnimSegment999.children[0] = Transform1000;

Shape Shape1003 = createNode("Shape");
LineSet LineSet1004 = createNode("LineSet");
LineSet1004.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1005 = createNode("Coordinate");
Coordinate1005.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1004.coord = Coordinate1005;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1006 = createNode("ColorRGBA");
ColorRGBA1006.USE = "HAnimSegmentLineColorRGBA";
LineSet1004.color = ColorRGBA1006;

Shape1003.geometry = LineSet1004;

HAnimSegment999.children[1] = Shape1003;

HAnimJoint998.children = new MFNode();

HAnimJoint998.children[0] = HAnimSegment999;

HAnimJoint HAnimJoint1007 = createNode("HAnimJoint");
HAnimJoint1007.name = "l_metacarpophalangeal_5";
HAnimJoint1007.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1007.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1007.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1007.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1008 = createNode("HAnimSegment");
HAnimSegment1008.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1008.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform1009 = createNode("Transform");
Transform1009.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Transform Transform1010 = createNode("Transform");
//Empty Transform
Shape Shape1011 = createNode("Shape");
Shape1011.USE = "HAnimJointShape";
Transform1010.child = new undefined();

Transform1010.child[0] = Shape1011;

Transform1009.children = new MFNode();

Transform1009.children[0] = Transform1010;

HAnimSegment1008.children = new MFNode();

HAnimSegment1008.children[0] = Transform1009;

Shape Shape1012 = createNode("Shape");
LineSet LineSet1013 = createNode("LineSet");
LineSet1013.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1014 = createNode("Coordinate");
Coordinate1014.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1013.coord = Coordinate1014;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1015 = createNode("ColorRGBA");
ColorRGBA1015.USE = "HAnimSegmentLineColorRGBA";
LineSet1013.color = ColorRGBA1015;

Shape1012.geometry = LineSet1013;

HAnimSegment1008.children[1] = Shape1012;

HAnimJoint1007.children = new MFNode();

HAnimJoint1007.children[0] = HAnimSegment1008;

HAnimJoint HAnimJoint1016 = createNode("HAnimJoint");
HAnimJoint1016.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1016.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1016.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1016.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1016.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1017 = createNode("HAnimSegment");
HAnimSegment1017.name = "l_carpal_middle_phalanx_5";
HAnimSegment1017.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform1018 = createNode("Transform");
Transform1018.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform1019 = createNode("Transform");
//Empty Transform
Shape Shape1020 = createNode("Shape");
Shape1020.USE = "HAnimJointShape";
Transform1019.child = new undefined();

Transform1019.child[0] = Shape1020;

Transform1018.children = new MFNode();

Transform1018.children[0] = Transform1019;

HAnimSegment1017.children = new MFNode();

HAnimSegment1017.children[0] = Transform1018;

Shape Shape1021 = createNode("Shape");
LineSet LineSet1022 = createNode("LineSet");
LineSet1022.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1023 = createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1022.coord = Coordinate1023;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1024 = createNode("ColorRGBA");
ColorRGBA1024.USE = "HAnimSegmentLineColorRGBA";
LineSet1022.color = ColorRGBA1024;

Shape1021.geometry = LineSet1022;

HAnimSegment1017.children[1] = Shape1021;

HAnimJoint1016.children = new MFNode();

HAnimJoint1016.children[0] = HAnimSegment1017;

HAnimJoint HAnimJoint1025 = createNode("HAnimJoint");
HAnimJoint1025.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1025.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1025.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1025.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1025.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1016.children[1] = HAnimJoint1025;

HAnimJoint1007.children[1] = HAnimJoint1016;

HAnimJoint998.children[1] = HAnimJoint1007;

HAnimJoint957.children[2] = HAnimJoint998;

HAnimJoint834.children[4] = HAnimJoint957;

HAnimJoint825.children[1] = HAnimJoint834;

HAnimJoint816.children[1] = HAnimJoint825;

HAnimJoint807.children[1] = HAnimJoint816;

HAnimJoint798.children[1] = HAnimJoint807;

HAnimJoint678.children[2] = HAnimJoint798;

HAnimJoint HAnimJoint1026 = createNode("HAnimJoint");
HAnimJoint1026.name = "r_sternoclavicular";
HAnimJoint1026.DEF = "hanim_r_sternoclavicular";
HAnimJoint1026.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint1026.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1026.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1027 = createNode("HAnimSegment");
HAnimSegment1027.name = "r_clavicle";
HAnimSegment1027.DEF = "hanim_r_clavicle";
Transform Transform1028 = createNode("Transform");
Transform1028.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
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
Coordinate1033.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1032.coord = Coordinate1033;

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA ColorRGBA1034 = createNode("ColorRGBA");
ColorRGBA1034.USE = "HAnimSegmentLineColorRGBA";
LineSet1032.color = ColorRGBA1034;

Shape1031.geometry = LineSet1032;

HAnimSegment1027.children[1] = Shape1031;

HAnimJoint1026.children = new MFNode();

HAnimJoint1026.children[0] = HAnimSegment1027;

HAnimJoint HAnimJoint1035 = createNode("HAnimJoint");
HAnimJoint1035.name = "r_acromioclavicular";
HAnimJoint1035.DEF = "hanim_r_acromioclavicular";
HAnimJoint1035.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint1035.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1035.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1036 = createNode("HAnimSegment");
HAnimSegment1036.name = "r_scapula";
HAnimSegment1036.DEF = "hanim_r_scapula";
Transform Transform1037 = createNode("Transform");
Transform1037.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform1038 = createNode("Transform");
//Empty Transform
Shape Shape1039 = createNode("Shape");
Shape1039.USE = "HAnimJointShape";
Transform1038.child = new undefined();

Transform1038.child[0] = Shape1039;

Transform1037.children = new MFNode();

Transform1037.children[0] = Transform1038;

HAnimSegment1036.children = new MFNode();

HAnimSegment1036.children[0] = Transform1037;

Shape Shape1040 = createNode("Shape");
LineSet LineSet1041 = createNode("LineSet");
LineSet1041.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1042 = createNode("Coordinate");
Coordinate1042.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1041.coord = Coordinate1042;

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA ColorRGBA1043 = createNode("ColorRGBA");
ColorRGBA1043.USE = "HAnimSegmentLineColorRGBA";
LineSet1041.color = ColorRGBA1043;

Shape1040.geometry = LineSet1041;

HAnimSegment1036.children[1] = Shape1040;

HAnimJoint1035.children = new MFNode();

HAnimJoint1035.children[0] = HAnimSegment1036;

HAnimJoint HAnimJoint1044 = createNode("HAnimJoint");
HAnimJoint1044.name = "r_shoulder";
HAnimJoint1044.DEF = "hanim_r_shoulder";
HAnimJoint1044.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint1044.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1044.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1045 = createNode("HAnimSegment");
HAnimSegment1045.name = "r_upperarm";
HAnimSegment1045.DEF = "hanim_r_upperarm";
Transform Transform1046 = createNode("Transform");
Transform1046.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform1047 = createNode("Transform");
//Empty Transform
Shape Shape1048 = createNode("Shape");
Shape1048.USE = "HAnimJointShape";
Transform1047.child = new undefined();

Transform1047.child[0] = Shape1048;

Transform1046.children = new MFNode();

Transform1046.children[0] = Transform1047;

HAnimSegment1045.children = new MFNode();

HAnimSegment1045.children[0] = Transform1046;

Shape Shape1049 = createNode("Shape");
LineSet LineSet1050 = createNode("LineSet");
LineSet1050.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1051 = createNode("Coordinate");
Coordinate1051.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1050.coord = Coordinate1051;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA1052 = createNode("ColorRGBA");
ColorRGBA1052.USE = "HAnimSegmentLineColorRGBA";
LineSet1050.color = ColorRGBA1052;

Shape1049.geometry = LineSet1050;

HAnimSegment1045.children[1] = Shape1049;

HAnimJoint1044.children = new MFNode();

HAnimJoint1044.children[0] = HAnimSegment1045;

HAnimJoint HAnimJoint1053 = createNode("HAnimJoint");
HAnimJoint1053.name = "r_elbow";
HAnimJoint1053.DEF = "hanim_r_elbow";
HAnimJoint1053.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint1053.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1053.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1054 = createNode("HAnimSegment");
HAnimSegment1054.name = "r_forearm";
HAnimSegment1054.DEF = "hanim_r_forearm";
Transform Transform1055 = createNode("Transform");
Transform1055.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform1056 = createNode("Transform");
//Empty Transform
Shape Shape1057 = createNode("Shape");
Shape1057.USE = "HAnimJointShape";
Transform1056.child = new undefined();

Transform1056.child[0] = Shape1057;

Transform1055.children = new MFNode();

Transform1055.children[0] = Transform1056;

HAnimSegment1054.children = new MFNode();

HAnimSegment1054.children[0] = Transform1055;

Shape Shape1058 = createNode("Shape");
LineSet LineSet1059 = createNode("LineSet");
LineSet1059.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1060 = createNode("Coordinate");
Coordinate1060.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1059.coord = Coordinate1060;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA1061 = createNode("ColorRGBA");
ColorRGBA1061.USE = "HAnimSegmentLineColorRGBA";
LineSet1059.color = ColorRGBA1061;

Shape1058.geometry = LineSet1059;

HAnimSegment1054.children[1] = Shape1058;

HAnimJoint1053.children = new MFNode();

HAnimJoint1053.children[0] = HAnimSegment1054;

HAnimJoint HAnimJoint1062 = createNode("HAnimJoint");
HAnimJoint1062.name = "r_radiocarpal";
HAnimJoint1062.DEF = "hanim_r_radiocarpal";
HAnimJoint1062.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint1062.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1062.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1063 = createNode("HAnimSegment");
HAnimSegment1063.name = "r_carpal";
HAnimSegment1063.DEF = "hanim_r_carpal";
Transform Transform1064 = createNode("Transform");
Transform1064.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1064.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1064.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
Transform Transform1065 = createNode("Transform");
Transform1065.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
Shape Shape1066 = createNode("Shape");
Shape1066.USE = "HAnimJointShape";
Transform1065.child = new undefined();

Transform1065.child[0] = Shape1066;

Transform1064.children = new MFNode();

Transform1064.children[0] = Transform1065;

HAnimSegment1063.children = new MFNode();

HAnimSegment1063.children[0] = Transform1064;

Shape Shape1067 = createNode("Shape");
LineSet LineSet1068 = createNode("LineSet");
LineSet1068.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1069 = createNode("Coordinate");
Coordinate1069.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826]);
LineSet1068.coord = Coordinate1069;

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA ColorRGBA1070 = createNode("ColorRGBA");
ColorRGBA1070.USE = "HAnimSegmentLineColorRGBA";
LineSet1068.color = ColorRGBA1070;

Shape1067.geometry = LineSet1068;

HAnimSegment1063.children[1] = Shape1067;

Shape Shape1071 = createNode("Shape");
LineSet LineSet1072 = createNode("LineSet");
LineSet1072.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1073 = createNode("Coordinate");
Coordinate1073.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935]);
LineSet1072.coord = Coordinate1073;

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA ColorRGBA1074 = createNode("ColorRGBA");
ColorRGBA1074.USE = "HAnimSegmentLineColorRGBA";
LineSet1072.color = ColorRGBA1074;

Shape1071.geometry = LineSet1072;

HAnimSegment1063.children[2] = Shape1071;

Shape Shape1075 = createNode("Shape");
LineSet LineSet1076 = createNode("LineSet");
LineSet1076.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1077 = createNode("Coordinate");
Coordinate1077.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067]);
LineSet1076.coord = Coordinate1077;

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA ColorRGBA1078 = createNode("ColorRGBA");
ColorRGBA1078.USE = "HAnimSegmentLineColorRGBA";
LineSet1076.color = ColorRGBA1078;

Shape1075.geometry = LineSet1076;

HAnimSegment1063.children[3] = Shape1075;

Shape Shape1079 = createNode("Shape");
LineSet LineSet1080 = createNode("LineSet");
LineSet1080.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1081 = createNode("Coordinate");
Coordinate1081.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276]);
LineSet1080.coord = Coordinate1081;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA1082 = createNode("ColorRGBA");
ColorRGBA1082.USE = "HAnimSegmentLineColorRGBA";
LineSet1080.color = ColorRGBA1082;

Shape1079.geometry = LineSet1080;

HAnimSegment1063.children[4] = Shape1079;

HAnimJoint1062.children = new MFNode();

HAnimJoint1062.children[0] = HAnimSegment1063;

HAnimJoint HAnimJoint1083 = createNode("HAnimJoint");
HAnimJoint1083.name = "r_midcarpal_1";
HAnimJoint1083.DEF = "hanim_r_midcarpal_1";
HAnimJoint1083.center = new SFVec3f(new float[-0.1811,0.6975,-0.0826]);
HAnimJoint1083.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1083.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1084 = createNode("HAnimSegment");
HAnimSegment1084.name = "r_trapezium";
HAnimSegment1084.DEF = "hanim_r_trapezium";
Transform Transform1085 = createNode("Transform");
Transform1085.translation = new SFVec3f(new float[-0.1811,0.6975,-0.0826]);
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
Coordinate1090.point = new MFVec3f(new float[-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473]);
LineSet1089.coord = Coordinate1090;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1091 = createNode("ColorRGBA");
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA";
LineSet1089.color = ColorRGBA1091;

Shape1088.geometry = LineSet1089;

HAnimSegment1084.children[1] = Shape1088;

HAnimJoint1083.children = new MFNode();

HAnimJoint1083.children[0] = HAnimSegment1084;

HAnimJoint HAnimJoint1092 = createNode("HAnimJoint");
HAnimJoint1092.name = "r_carpometacarpal_1";
HAnimJoint1092.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1092.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1092.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1092.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1093 = createNode("HAnimSegment");
HAnimSegment1093.name = "r_metacarpal_1";
HAnimSegment1093.DEF = "hanim_r_metacarpal_1";
Transform Transform1094 = createNode("Transform");
Transform1094.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
Transform Transform1095 = createNode("Transform");
//Empty Transform
Shape Shape1096 = createNode("Shape");
Shape1096.USE = "HAnimJointShape";
Transform1095.child = new undefined();

Transform1095.child[0] = Shape1096;

Transform1094.children = new MFNode();

Transform1094.children[0] = Transform1095;

HAnimSegment1093.children = new MFNode();

HAnimSegment1093.children[0] = Transform1094;

Shape Shape1097 = createNode("Shape");
LineSet LineSet1098 = createNode("LineSet");
LineSet1098.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1099 = createNode("Coordinate");
Coordinate1099.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1098.coord = Coordinate1099;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1100 = createNode("ColorRGBA");
ColorRGBA1100.USE = "HAnimSegmentLineColorRGBA";
LineSet1098.color = ColorRGBA1100;

Shape1097.geometry = LineSet1098;

HAnimSegment1093.children[1] = Shape1097;

HAnimJoint1092.children = new MFNode();

HAnimJoint1092.children[0] = HAnimSegment1093;

HAnimJoint HAnimJoint1101 = createNode("HAnimJoint");
HAnimJoint1101.name = "r_metacarpophalangeal_1";
HAnimJoint1101.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1101.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1101.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1102 = createNode("HAnimSegment");
HAnimSegment1102.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1102.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform1103 = createNode("Transform");
Transform1103.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
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
Coordinate1108.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1107.coord = Coordinate1108;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1109 = createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSegmentLineColorRGBA";
LineSet1107.color = ColorRGBA1109;

Shape1106.geometry = LineSet1107;

HAnimSegment1102.children[1] = Shape1106;

HAnimJoint1101.children = new MFNode();

HAnimJoint1101.children[0] = HAnimSegment1102;

HAnimJoint HAnimJoint1110 = createNode("HAnimJoint");
HAnimJoint1110.name = "r_carpal_interphalangeal_1";
HAnimJoint1110.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1110.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1101.children[1] = HAnimJoint1110;

HAnimJoint1092.children[1] = HAnimJoint1101;

HAnimJoint1083.children[1] = HAnimJoint1092;

HAnimJoint1062.children[1] = HAnimJoint1083;

HAnimJoint HAnimJoint1111 = createNode("HAnimJoint");
HAnimJoint1111.name = "r_midcarpal_2";
HAnimJoint1111.DEF = "hanim_r_midcarpal_2";
HAnimJoint1111.center = new SFVec3f(new float[-0.1811,0.6984,-0.0935]);
HAnimJoint1111.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1111.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1112 = createNode("HAnimSegment");
HAnimSegment1112.name = "r_trapezoid";
HAnimSegment1112.DEF = "hanim_r_trapezoid";
Transform Transform1113 = createNode("Transform");
Transform1113.translation = new SFVec3f(new float[-0.1811,0.6984,-0.0935]);
Transform Transform1114 = createNode("Transform");
//Empty Transform
Shape Shape1115 = createNode("Shape");
Shape1115.USE = "HAnimJointShape";
Transform1114.child = new undefined();

Transform1114.child[0] = Shape1115;

Transform1113.children = new MFNode();

Transform1113.children[0] = Transform1114;

HAnimSegment1112.children = new MFNode();

HAnimSegment1112.children[0] = Transform1113;

Shape Shape1116 = createNode("Shape");
LineSet LineSet1117 = createNode("LineSet");
LineSet1117.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1118 = createNode("Coordinate");
Coordinate1118.point = new MFVec3f(new float[-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218]);
LineSet1117.coord = Coordinate1118;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1119 = createNode("ColorRGBA");
ColorRGBA1119.USE = "HAnimSegmentLineColorRGBA";
LineSet1117.color = ColorRGBA1119;

Shape1116.geometry = LineSet1117;

HAnimSegment1112.children[1] = Shape1116;

HAnimJoint1111.children = new MFNode();

HAnimJoint1111.children[0] = HAnimSegment1112;

HAnimJoint HAnimJoint1120 = createNode("HAnimJoint");
HAnimJoint1120.name = "r_carpometacarpal_2";
HAnimJoint1120.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1120.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1120.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1121 = createNode("HAnimSegment");
HAnimSegment1121.name = "r_metacarpal_2";
HAnimSegment1121.DEF = "hanim_r_metacarpal_2";
Transform Transform1122 = createNode("Transform");
Transform1122.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
Transform Transform1123 = createNode("Transform");
//Empty Transform
Shape Shape1124 = createNode("Shape");
Shape1124.USE = "HAnimJointShape";
Transform1123.child = new undefined();

Transform1123.child[0] = Shape1124;

Transform1122.children = new MFNode();

Transform1122.children[0] = Transform1123;

HAnimSegment1121.children = new MFNode();

HAnimSegment1121.children[0] = Transform1122;

Shape Shape1125 = createNode("Shape");
LineSet LineSet1126 = createNode("LineSet");
LineSet1126.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1127 = createNode("Coordinate");
Coordinate1127.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1126.coord = Coordinate1127;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1128 = createNode("ColorRGBA");
ColorRGBA1128.USE = "HAnimSegmentLineColorRGBA";
LineSet1126.color = ColorRGBA1128;

Shape1125.geometry = LineSet1126;

HAnimSegment1121.children[1] = Shape1125;

HAnimJoint1120.children = new MFNode();

HAnimJoint1120.children[0] = HAnimSegment1121;

HAnimJoint HAnimJoint1129 = createNode("HAnimJoint");
HAnimJoint1129.name = "r_metacarpophalangeal_2";
HAnimJoint1129.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1129.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1129.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1129.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1130 = createNode("HAnimSegment");
HAnimSegment1130.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1130.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform1131 = createNode("Transform");
Transform1131.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform1132 = createNode("Transform");
//Empty Transform
Shape Shape1133 = createNode("Shape");
Shape1133.USE = "HAnimJointShape";
Transform1132.child = new undefined();

Transform1132.child[0] = Shape1133;

Transform1131.children = new MFNode();

Transform1131.children[0] = Transform1132;

HAnimSegment1130.children = new MFNode();

HAnimSegment1130.children[0] = Transform1131;

Shape Shape1134 = createNode("Shape");
LineSet LineSet1135 = createNode("LineSet");
LineSet1135.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1136 = createNode("Coordinate");
Coordinate1136.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1135.coord = Coordinate1136;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1137 = createNode("ColorRGBA");
ColorRGBA1137.USE = "HAnimSegmentLineColorRGBA";
LineSet1135.color = ColorRGBA1137;

Shape1134.geometry = LineSet1135;

HAnimSegment1130.children[1] = Shape1134;

HAnimJoint1129.children = new MFNode();

HAnimJoint1129.children[0] = HAnimSegment1130;

HAnimJoint HAnimJoint1138 = createNode("HAnimJoint");
HAnimJoint1138.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1138.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1138.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1138.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1138.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1139 = createNode("HAnimSegment");
HAnimSegment1139.name = "r_carpal_middle_phalanx_2";
HAnimSegment1139.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform1140 = createNode("Transform");
Transform1140.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform1141 = createNode("Transform");
//Empty Transform
Shape Shape1142 = createNode("Shape");
Shape1142.USE = "HAnimJointShape";
Transform1141.child = new undefined();

Transform1141.child[0] = Shape1142;

Transform1140.children = new MFNode();

Transform1140.children[0] = Transform1141;

HAnimSegment1139.children = new MFNode();

HAnimSegment1139.children[0] = Transform1140;

Shape Shape1143 = createNode("Shape");
LineSet LineSet1144 = createNode("LineSet");
LineSet1144.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1145 = createNode("Coordinate");
Coordinate1145.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1144.coord = Coordinate1145;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1146 = createNode("ColorRGBA");
ColorRGBA1146.USE = "HAnimSegmentLineColorRGBA";
LineSet1144.color = ColorRGBA1146;

Shape1143.geometry = LineSet1144;

HAnimSegment1139.children[1] = Shape1143;

HAnimJoint1138.children = new MFNode();

HAnimJoint1138.children[0] = HAnimSegment1139;

HAnimJoint HAnimJoint1147 = createNode("HAnimJoint");
HAnimJoint1147.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1147.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1147.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1147.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1147.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1138.children[1] = HAnimJoint1147;

HAnimJoint1129.children[1] = HAnimJoint1138;

HAnimJoint1120.children[1] = HAnimJoint1129;

HAnimJoint1111.children[1] = HAnimJoint1120;

HAnimJoint1062.children[2] = HAnimJoint1111;

HAnimJoint HAnimJoint1148 = createNode("HAnimJoint");
HAnimJoint1148.name = "r_midcarpal_3";
HAnimJoint1148.DEF = "hanim_r_midcarpal_3";
HAnimJoint1148.center = new SFVec3f(new float[-0.1809,0.7,-0.1067]);
HAnimJoint1148.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1148.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1149 = createNode("HAnimSegment");
HAnimSegment1149.name = "r_capitate";
HAnimSegment1149.DEF = "hanim_r_capitate";
Transform Transform1150 = createNode("Transform");
Transform1150.translation = new SFVec3f(new float[-0.1809,0.7,-0.1067]);
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
Coordinate1155.point = new MFVec3f(new float[-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468]);
LineSet1154.coord = Coordinate1155;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1156 = createNode("ColorRGBA");
ColorRGBA1156.USE = "HAnimSegmentLineColorRGBA";
LineSet1154.color = ColorRGBA1156;

Shape1153.geometry = LineSet1154;

HAnimSegment1149.children[1] = Shape1153;

HAnimJoint1148.children = new MFNode();

HAnimJoint1148.children[0] = HAnimSegment1149;

HAnimJoint HAnimJoint1157 = createNode("HAnimJoint");
HAnimJoint1157.name = "r_carpometacarpal_3";
HAnimJoint1157.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1157.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1157.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1158 = createNode("HAnimSegment");
HAnimSegment1158.name = "r_metacarpal_3";
HAnimSegment1158.DEF = "hanim_r_metacarpal_3";
Transform Transform1159 = createNode("Transform");
Transform1159.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
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
Coordinate1164.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1163.coord = Coordinate1164;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1165 = createNode("ColorRGBA");
ColorRGBA1165.USE = "HAnimSegmentLineColorRGBA";
LineSet1163.color = ColorRGBA1165;

Shape1162.geometry = LineSet1163;

HAnimSegment1158.children[1] = Shape1162;

HAnimJoint1157.children = new MFNode();

HAnimJoint1157.children[0] = HAnimSegment1158;

HAnimJoint HAnimJoint1166 = createNode("HAnimJoint");
HAnimJoint1166.name = "r_metacarpophalangeal_3";
HAnimJoint1166.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1166.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1166.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1166.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1167 = createNode("HAnimSegment");
HAnimSegment1167.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1167.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform1168 = createNode("Transform");
Transform1168.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
Transform Transform1169 = createNode("Transform");
//Empty Transform
Shape Shape1170 = createNode("Shape");
Shape1170.USE = "HAnimJointShape";
Transform1169.child = new undefined();

Transform1169.child[0] = Shape1170;

Transform1168.children = new MFNode();

Transform1168.children[0] = Transform1169;

HAnimSegment1167.children = new MFNode();

HAnimSegment1167.children[0] = Transform1168;

Shape Shape1171 = createNode("Shape");
LineSet LineSet1172 = createNode("LineSet");
LineSet1172.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1173 = createNode("Coordinate");
Coordinate1173.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1172.coord = Coordinate1173;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1174 = createNode("ColorRGBA");
ColorRGBA1174.USE = "HAnimSegmentLineColorRGBA";
LineSet1172.color = ColorRGBA1174;

Shape1171.geometry = LineSet1172;

HAnimSegment1167.children[1] = Shape1171;

HAnimJoint1166.children = new MFNode();

HAnimJoint1166.children[0] = HAnimSegment1167;

HAnimJoint HAnimJoint1175 = createNode("HAnimJoint");
HAnimJoint1175.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1175.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1175.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1175.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1175.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1176 = createNode("HAnimSegment");
HAnimSegment1176.name = "r_carpal_middle_phalanx_3";
HAnimSegment1176.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform1177 = createNode("Transform");
Transform1177.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
Transform Transform1178 = createNode("Transform");
//Empty Transform
Shape Shape1179 = createNode("Shape");
Shape1179.USE = "HAnimJointShape";
Transform1178.child = new undefined();

Transform1178.child[0] = Shape1179;

Transform1177.children = new MFNode();

Transform1177.children[0] = Transform1178;

HAnimSegment1176.children = new MFNode();

HAnimSegment1176.children[0] = Transform1177;

Shape Shape1180 = createNode("Shape");
LineSet LineSet1181 = createNode("LineSet");
LineSet1181.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1182 = createNode("Coordinate");
Coordinate1182.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1181.coord = Coordinate1182;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1183 = createNode("ColorRGBA");
ColorRGBA1183.USE = "HAnimSegmentLineColorRGBA";
LineSet1181.color = ColorRGBA1183;

Shape1180.geometry = LineSet1181;

HAnimSegment1176.children[1] = Shape1180;

HAnimJoint1175.children = new MFNode();

HAnimJoint1175.children[0] = HAnimSegment1176;

HAnimJoint HAnimJoint1184 = createNode("HAnimJoint");
HAnimJoint1184.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1184.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1184.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1184.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1184.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1175.children[1] = HAnimJoint1184;

HAnimJoint1166.children[1] = HAnimJoint1175;

HAnimJoint1157.children[1] = HAnimJoint1166;

HAnimJoint1148.children[1] = HAnimJoint1157;

HAnimJoint1062.children[3] = HAnimJoint1148;

HAnimJoint HAnimJoint1185 = createNode("HAnimJoint");
HAnimJoint1185.name = "r_midcarpal_4_5";
HAnimJoint1185.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1185.center = new SFVec3f(new float[-0.1809,0.6973,-0.1276]);
HAnimJoint1185.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1185.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1186 = createNode("HAnimSegment");
HAnimSegment1186.name = "r_hamate";
HAnimSegment1186.DEF = "hanim_r_hamate";
Transform Transform1187 = createNode("Transform");
Transform1187.translation = new SFVec3f(new float[-0.1809,0.6973,-0.1276]);
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
Coordinate1192.point = new MFVec3f(new float[-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732]);
LineSet1191.coord = Coordinate1192;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1193 = createNode("ColorRGBA");
ColorRGBA1193.USE = "HAnimSegmentLineColorRGBA";
LineSet1191.color = ColorRGBA1193;

Shape1190.geometry = LineSet1191;

HAnimSegment1186.children[1] = Shape1190;

Shape Shape1194 = createNode("Shape");
LineSet LineSet1195 = createNode("LineSet");
LineSet1195.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1196 = createNode("Coordinate");
Coordinate1196.point = new MFVec3f(new float[-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975]);
LineSet1195.coord = Coordinate1196;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1197 = createNode("ColorRGBA");
ColorRGBA1197.USE = "HAnimSegmentLineColorRGBA";
LineSet1195.color = ColorRGBA1197;

Shape1194.geometry = LineSet1195;

HAnimSegment1186.children[2] = Shape1194;

HAnimJoint1185.children = new MFNode();

HAnimJoint1185.children[0] = HAnimSegment1186;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.name = "r_carpometacarpal_4";
HAnimJoint1198.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1198.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1198.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1198.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1199 = createNode("HAnimSegment");
HAnimSegment1199.name = "r_metacarpal_4";
HAnimSegment1199.DEF = "hanim_r_metacarpal_4";
Transform Transform1200 = createNode("Transform");
Transform1200.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
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
Coordinate1205.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1204.coord = Coordinate1205;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1206 = createNode("ColorRGBA");
ColorRGBA1206.USE = "HAnimSegmentLineColorRGBA";
LineSet1204.color = ColorRGBA1206;

Shape1203.geometry = LineSet1204;

HAnimSegment1199.children[1] = Shape1203;

HAnimJoint1198.children = new MFNode();

HAnimJoint1198.children[0] = HAnimSegment1199;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.name = "r_metacarpophalangeal_4";
HAnimJoint1207.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1207.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1207.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1207.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1208 = createNode("HAnimSegment");
HAnimSegment1208.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1208.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform1209 = createNode("Transform");
Transform1209.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform1210 = createNode("Transform");
//Empty Transform
Shape Shape1211 = createNode("Shape");
Shape1211.USE = "HAnimJointShape";
Transform1210.child = new undefined();

Transform1210.child[0] = Shape1211;

Transform1209.children = new MFNode();

Transform1209.children[0] = Transform1210;

HAnimSegment1208.children = new MFNode();

HAnimSegment1208.children[0] = Transform1209;

Shape Shape1212 = createNode("Shape");
LineSet LineSet1213 = createNode("LineSet");
LineSet1213.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1214 = createNode("Coordinate");
Coordinate1214.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1213.coord = Coordinate1214;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1215 = createNode("ColorRGBA");
ColorRGBA1215.USE = "HAnimSegmentLineColorRGBA";
LineSet1213.color = ColorRGBA1215;

Shape1212.geometry = LineSet1213;

HAnimSegment1208.children[1] = Shape1212;

HAnimJoint1207.children = new MFNode();

HAnimJoint1207.children[0] = HAnimSegment1208;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1216.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1216.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1216.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1216.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1217 = createNode("HAnimSegment");
HAnimSegment1217.name = "r_carpal_middle_phalanx_4";
HAnimSegment1217.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform1218 = createNode("Transform");
Transform1218.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform1219 = createNode("Transform");
//Empty Transform
Shape Shape1220 = createNode("Shape");
Shape1220.USE = "HAnimJointShape";
Transform1219.child = new undefined();

Transform1219.child[0] = Shape1220;

Transform1218.children = new MFNode();

Transform1218.children[0] = Transform1219;

HAnimSegment1217.children = new MFNode();

HAnimSegment1217.children[0] = Transform1218;

Shape Shape1221 = createNode("Shape");
LineSet LineSet1222 = createNode("LineSet");
LineSet1222.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1223 = createNode("Coordinate");
Coordinate1223.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1222.coord = Coordinate1223;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1224 = createNode("ColorRGBA");
ColorRGBA1224.USE = "HAnimSegmentLineColorRGBA";
LineSet1222.color = ColorRGBA1224;

Shape1221.geometry = LineSet1222;

HAnimSegment1217.children[1] = Shape1221;

HAnimJoint1216.children = new MFNode();

HAnimJoint1216.children[0] = HAnimSegment1217;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1225.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1225.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1225.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1225.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1216.children[1] = HAnimJoint1225;

HAnimJoint1207.children[1] = HAnimJoint1216;

HAnimJoint1198.children[1] = HAnimJoint1207;

HAnimJoint1185.children[1] = HAnimJoint1198;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.name = "r_carpometacarpal_5";
HAnimJoint1226.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1226.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1226.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1226.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1227 = createNode("HAnimSegment");
HAnimSegment1227.name = "r_metacarpal_5";
HAnimSegment1227.DEF = "hanim_r_metacarpal_5";
Transform Transform1228 = createNode("Transform");
Transform1228.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
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
Coordinate1233.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1232.coord = Coordinate1233;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1234 = createNode("ColorRGBA");
ColorRGBA1234.USE = "HAnimSegmentLineColorRGBA";
LineSet1232.color = ColorRGBA1234;

Shape1231.geometry = LineSet1232;

HAnimSegment1227.children[1] = Shape1231;

HAnimJoint1226.children = new MFNode();

HAnimJoint1226.children[0] = HAnimSegment1227;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.name = "r_metacarpophalangeal_5";
HAnimJoint1235.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1235.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1235.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1235.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1236 = createNode("HAnimSegment");
HAnimSegment1236.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1236.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform1237 = createNode("Transform");
Transform1237.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
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
Coordinate1242.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1241.coord = Coordinate1242;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1243 = createNode("ColorRGBA");
ColorRGBA1243.USE = "HAnimSegmentLineColorRGBA";
LineSet1241.color = ColorRGBA1243;

Shape1240.geometry = LineSet1241;

HAnimSegment1236.children[1] = Shape1240;

HAnimJoint1235.children = new MFNode();

HAnimJoint1235.children[0] = HAnimSegment1236;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1244.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1244.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1244.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1244.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1245 = createNode("HAnimSegment");
HAnimSegment1245.name = "r_carpal_middle_phalanx_5";
HAnimSegment1245.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform1246 = createNode("Transform");
Transform1246.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
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
Coordinate1251.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1250.coord = Coordinate1251;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1252 = createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSegmentLineColorRGBA";
LineSet1250.color = ColorRGBA1252;

Shape1249.geometry = LineSet1250;

HAnimSegment1245.children[1] = Shape1249;

HAnimJoint1244.children = new MFNode();

HAnimJoint1244.children[0] = HAnimSegment1245;

HAnimJoint HAnimJoint1253 = createNode("HAnimJoint");
HAnimJoint1253.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1253.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1253.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1253.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1253.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1244.children[1] = HAnimJoint1253;

HAnimJoint1235.children[1] = HAnimJoint1244;

HAnimJoint1226.children[1] = HAnimJoint1235;

HAnimJoint1185.children[2] = HAnimJoint1226;

HAnimJoint1062.children[4] = HAnimJoint1185;

HAnimJoint1053.children[1] = HAnimJoint1062;

HAnimJoint1044.children[1] = HAnimJoint1053;

HAnimJoint1035.children[1] = HAnimJoint1044;

HAnimJoint1026.children[1] = HAnimJoint1035;

HAnimJoint678.children[3] = HAnimJoint1026;

HAnimJoint669.children[1] = HAnimJoint678;

HAnimJoint660.children[1] = HAnimJoint669;

HAnimJoint651.children[1] = HAnimJoint660;

HAnimJoint642.children[1] = HAnimJoint651;

HAnimJoint633.children[1] = HAnimJoint642;

HAnimJoint624.children[1] = HAnimJoint633;

HAnimJoint615.children[1] = HAnimJoint624;

HAnimJoint606.children[1] = HAnimJoint615;

HAnimJoint597.children[1] = HAnimJoint606;

HAnimJoint588.children[1] = HAnimJoint597;

HAnimJoint579.children[1] = HAnimJoint588;

HAnimJoint570.children[1] = HAnimJoint579;

HAnimJoint561.children[1] = HAnimJoint570;

HAnimJoint552.children[1] = HAnimJoint561;

HAnimJoint543.children[1] = HAnimJoint552;

HAnimJoint534.children[1] = HAnimJoint543;

HAnimJoint52.children[2] = HAnimJoint534;

HAnimHumanoid43.joints[1] = HAnimJoint52;

HAnimJoint HAnimJoint1254 = createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint1254;

HAnimJoint HAnimJoint1255 = createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint1255;

HAnimJoint HAnimJoint1256 = createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint1256;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint1257;

HAnimJoint HAnimJoint1258 = createNode("HAnimJoint");
HAnimJoint1258.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint1258;

HAnimJoint HAnimJoint1259 = createNode("HAnimJoint");
HAnimJoint1259.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid43.joints[7] = HAnimJoint1259;

HAnimJoint HAnimJoint1260 = createNode("HAnimJoint");
HAnimJoint1260.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid43.joints[8] = HAnimJoint1260;

HAnimJoint HAnimJoint1261 = createNode("HAnimJoint");
HAnimJoint1261.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid43.joints[9] = HAnimJoint1261;

HAnimJoint HAnimJoint1262 = createNode("HAnimJoint");
HAnimJoint1262.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid43.joints[10] = HAnimJoint1262;

HAnimJoint HAnimJoint1263 = createNode("HAnimJoint");
HAnimJoint1263.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[11] = HAnimJoint1263;

HAnimJoint HAnimJoint1264 = createNode("HAnimJoint");
HAnimJoint1264.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid43.joints[12] = HAnimJoint1264;

HAnimJoint HAnimJoint1265 = createNode("HAnimJoint");
HAnimJoint1265.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1265;

HAnimJoint HAnimJoint1266 = createNode("HAnimJoint");
HAnimJoint1266.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1266;

HAnimJoint HAnimJoint1267 = createNode("HAnimJoint");
HAnimJoint1267.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1267;

HAnimJoint HAnimJoint1268 = createNode("HAnimJoint");
HAnimJoint1268.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[16] = HAnimJoint1268;

HAnimJoint HAnimJoint1269 = createNode("HAnimJoint");
HAnimJoint1269.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid43.joints[17] = HAnimJoint1269;

HAnimJoint HAnimJoint1270 = createNode("HAnimJoint");
HAnimJoint1270.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid43.joints[18] = HAnimJoint1270;

HAnimJoint HAnimJoint1271 = createNode("HAnimJoint");
HAnimJoint1271.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid43.joints[19] = HAnimJoint1271;

HAnimJoint HAnimJoint1272 = createNode("HAnimJoint");
HAnimJoint1272.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[20] = HAnimJoint1272;

HAnimJoint HAnimJoint1273 = createNode("HAnimJoint");
HAnimJoint1273.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[21] = HAnimJoint1273;

HAnimJoint HAnimJoint1274 = createNode("HAnimJoint");
HAnimJoint1274.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid43.joints[22] = HAnimJoint1274;

HAnimJoint HAnimJoint1275 = createNode("HAnimJoint");
HAnimJoint1275.USE = "hanim_l_transversetarsal";
HAnimHumanoid43.joints[23] = HAnimJoint1275;

HAnimJoint HAnimJoint1276 = createNode("HAnimJoint");
HAnimJoint1276.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid43.joints[24] = HAnimJoint1276;

HAnimJoint HAnimJoint1277 = createNode("HAnimJoint");
HAnimJoint1277.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid43.joints[25] = HAnimJoint1277;

HAnimJoint HAnimJoint1278 = createNode("HAnimJoint");
HAnimJoint1278.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[26] = HAnimJoint1278;

HAnimJoint HAnimJoint1279 = createNode("HAnimJoint");
HAnimJoint1279.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[27] = HAnimJoint1279;

HAnimJoint HAnimJoint1280 = createNode("HAnimJoint");
HAnimJoint1280.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid43.joints[28] = HAnimJoint1280;

HAnimJoint HAnimJoint1281 = createNode("HAnimJoint");
HAnimJoint1281.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid43.joints[29] = HAnimJoint1281;

HAnimJoint HAnimJoint1282 = createNode("HAnimJoint");
HAnimJoint1282.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[30] = HAnimJoint1282;

HAnimJoint HAnimJoint1283 = createNode("HAnimJoint");
HAnimJoint1283.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[31] = HAnimJoint1283;

HAnimJoint HAnimJoint1284 = createNode("HAnimJoint");
HAnimJoint1284.USE = "hanim_r_hip";
HAnimHumanoid43.joints[32] = HAnimJoint1284;

HAnimJoint HAnimJoint1285 = createNode("HAnimJoint");
HAnimJoint1285.USE = "hanim_r_knee";
HAnimHumanoid43.joints[33] = HAnimJoint1285;

HAnimJoint HAnimJoint1286 = createNode("HAnimJoint");
HAnimJoint1286.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[34] = HAnimJoint1286;

HAnimJoint HAnimJoint1287 = createNode("HAnimJoint");
HAnimJoint1287.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid43.joints[35] = HAnimJoint1287;

HAnimJoint HAnimJoint1288 = createNode("HAnimJoint");
HAnimJoint1288.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid43.joints[36] = HAnimJoint1288;

HAnimJoint HAnimJoint1289 = createNode("HAnimJoint");
HAnimJoint1289.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid43.joints[37] = HAnimJoint1289;

HAnimJoint HAnimJoint1290 = createNode("HAnimJoint");
HAnimJoint1290.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid43.joints[38] = HAnimJoint1290;

HAnimJoint HAnimJoint1291 = createNode("HAnimJoint");
HAnimJoint1291.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[39] = HAnimJoint1291;

HAnimJoint HAnimJoint1292 = createNode("HAnimJoint");
HAnimJoint1292.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid43.joints[40] = HAnimJoint1292;

HAnimJoint HAnimJoint1293 = createNode("HAnimJoint");
HAnimJoint1293.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[41] = HAnimJoint1293;

HAnimJoint HAnimJoint1294 = createNode("HAnimJoint");
HAnimJoint1294.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[42] = HAnimJoint1294;

HAnimJoint HAnimJoint1295 = createNode("HAnimJoint");
HAnimJoint1295.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[43] = HAnimJoint1295;

HAnimJoint HAnimJoint1296 = createNode("HAnimJoint");
HAnimJoint1296.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[44] = HAnimJoint1296;

HAnimJoint HAnimJoint1297 = createNode("HAnimJoint");
HAnimJoint1297.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid43.joints[45] = HAnimJoint1297;

HAnimJoint HAnimJoint1298 = createNode("HAnimJoint");
HAnimJoint1298.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid43.joints[46] = HAnimJoint1298;

HAnimJoint HAnimJoint1299 = createNode("HAnimJoint");
HAnimJoint1299.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid43.joints[47] = HAnimJoint1299;

HAnimJoint HAnimJoint1300 = createNode("HAnimJoint");
HAnimJoint1300.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[48] = HAnimJoint1300;

HAnimJoint HAnimJoint1301 = createNode("HAnimJoint");
HAnimJoint1301.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[49] = HAnimJoint1301;

HAnimJoint HAnimJoint1302 = createNode("HAnimJoint");
HAnimJoint1302.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid43.joints[50] = HAnimJoint1302;

HAnimJoint HAnimJoint1303 = createNode("HAnimJoint");
HAnimJoint1303.USE = "hanim_r_transversetarsal";
HAnimHumanoid43.joints[51] = HAnimJoint1303;

HAnimJoint HAnimJoint1304 = createNode("HAnimJoint");
HAnimJoint1304.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid43.joints[52] = HAnimJoint1304;

HAnimJoint HAnimJoint1305 = createNode("HAnimJoint");
HAnimJoint1305.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid43.joints[53] = HAnimJoint1305;

HAnimJoint HAnimJoint1306 = createNode("HAnimJoint");
HAnimJoint1306.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint1306;

HAnimJoint HAnimJoint1307 = createNode("HAnimJoint");
HAnimJoint1307.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[55] = HAnimJoint1307;

HAnimJoint HAnimJoint1308 = createNode("HAnimJoint");
HAnimJoint1308.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid43.joints[56] = HAnimJoint1308;

HAnimJoint HAnimJoint1309 = createNode("HAnimJoint");
HAnimJoint1309.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid43.joints[57] = HAnimJoint1309;

HAnimJoint HAnimJoint1310 = createNode("HAnimJoint");
HAnimJoint1310.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[58] = HAnimJoint1310;

HAnimJoint HAnimJoint1311 = createNode("HAnimJoint");
HAnimJoint1311.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[59] = HAnimJoint1311;

HAnimJoint HAnimJoint1312 = createNode("HAnimJoint");
HAnimJoint1312.USE = "hanim_vl5";
HAnimHumanoid43.joints[60] = HAnimJoint1312;

HAnimJoint HAnimJoint1313 = createNode("HAnimJoint");
HAnimJoint1313.USE = "hanim_vl4";
HAnimHumanoid43.joints[61] = HAnimJoint1313;

HAnimJoint HAnimJoint1314 = createNode("HAnimJoint");
HAnimJoint1314.USE = "hanim_vl3";
HAnimHumanoid43.joints[62] = HAnimJoint1314;

HAnimJoint HAnimJoint1315 = createNode("HAnimJoint");
HAnimJoint1315.USE = "hanim_vl2";
HAnimHumanoid43.joints[63] = HAnimJoint1315;

HAnimJoint HAnimJoint1316 = createNode("HAnimJoint");
HAnimJoint1316.USE = "hanim_vl1";
HAnimHumanoid43.joints[64] = HAnimJoint1316;

HAnimJoint HAnimJoint1317 = createNode("HAnimJoint");
HAnimJoint1317.USE = "hanim_vt12";
HAnimHumanoid43.joints[65] = HAnimJoint1317;

HAnimJoint HAnimJoint1318 = createNode("HAnimJoint");
HAnimJoint1318.USE = "hanim_vt11";
HAnimHumanoid43.joints[66] = HAnimJoint1318;

HAnimJoint HAnimJoint1319 = createNode("HAnimJoint");
HAnimJoint1319.USE = "hanim_vt10";
HAnimHumanoid43.joints[67] = HAnimJoint1319;

HAnimJoint HAnimJoint1320 = createNode("HAnimJoint");
HAnimJoint1320.USE = "hanim_vt9";
HAnimHumanoid43.joints[68] = HAnimJoint1320;

HAnimJoint HAnimJoint1321 = createNode("HAnimJoint");
HAnimJoint1321.USE = "hanim_vt8";
HAnimHumanoid43.joints[69] = HAnimJoint1321;

HAnimJoint HAnimJoint1322 = createNode("HAnimJoint");
HAnimJoint1322.USE = "hanim_vt7";
HAnimHumanoid43.joints[70] = HAnimJoint1322;

HAnimJoint HAnimJoint1323 = createNode("HAnimJoint");
HAnimJoint1323.USE = "hanim_vt6";
HAnimHumanoid43.joints[71] = HAnimJoint1323;

HAnimJoint HAnimJoint1324 = createNode("HAnimJoint");
HAnimJoint1324.USE = "hanim_vt5";
HAnimHumanoid43.joints[72] = HAnimJoint1324;

HAnimJoint HAnimJoint1325 = createNode("HAnimJoint");
HAnimJoint1325.USE = "hanim_vt4";
HAnimHumanoid43.joints[73] = HAnimJoint1325;

HAnimJoint HAnimJoint1326 = createNode("HAnimJoint");
HAnimJoint1326.USE = "hanim_vt3";
HAnimHumanoid43.joints[74] = HAnimJoint1326;

HAnimJoint HAnimJoint1327 = createNode("HAnimJoint");
HAnimJoint1327.USE = "hanim_vt2";
HAnimHumanoid43.joints[75] = HAnimJoint1327;

HAnimJoint HAnimJoint1328 = createNode("HAnimJoint");
HAnimJoint1328.USE = "hanim_vt1";
HAnimHumanoid43.joints[76] = HAnimJoint1328;

HAnimJoint HAnimJoint1329 = createNode("HAnimJoint");
HAnimJoint1329.USE = "hanim_vc7";
HAnimHumanoid43.joints[77] = HAnimJoint1329;

HAnimJoint HAnimJoint1330 = createNode("HAnimJoint");
HAnimJoint1330.USE = "hanim_vc6";
HAnimHumanoid43.joints[78] = HAnimJoint1330;

HAnimJoint HAnimJoint1331 = createNode("HAnimJoint");
HAnimJoint1331.USE = "hanim_vc5";
HAnimHumanoid43.joints[79] = HAnimJoint1331;

HAnimJoint HAnimJoint1332 = createNode("HAnimJoint");
HAnimJoint1332.USE = "hanim_vc4";
HAnimHumanoid43.joints[80] = HAnimJoint1332;

HAnimJoint HAnimJoint1333 = createNode("HAnimJoint");
HAnimJoint1333.USE = "hanim_vc3";
HAnimHumanoid43.joints[81] = HAnimJoint1333;

HAnimJoint HAnimJoint1334 = createNode("HAnimJoint");
HAnimJoint1334.USE = "hanim_vc2";
HAnimHumanoid43.joints[82] = HAnimJoint1334;

HAnimJoint HAnimJoint1335 = createNode("HAnimJoint");
HAnimJoint1335.USE = "hanim_vc1";
HAnimHumanoid43.joints[83] = HAnimJoint1335;

HAnimJoint HAnimJoint1336 = createNode("HAnimJoint");
HAnimJoint1336.USE = "hanim_skullbase";
HAnimHumanoid43.joints[84] = HAnimJoint1336;

HAnimJoint HAnimJoint1337 = createNode("HAnimJoint");
HAnimJoint1337.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[85] = HAnimJoint1337;

HAnimJoint HAnimJoint1338 = createNode("HAnimJoint");
HAnimJoint1338.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[86] = HAnimJoint1338;

HAnimJoint HAnimJoint1339 = createNode("HAnimJoint");
HAnimJoint1339.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[87] = HAnimJoint1339;

HAnimJoint HAnimJoint1340 = createNode("HAnimJoint");
HAnimJoint1340.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[88] = HAnimJoint1340;

HAnimJoint HAnimJoint1341 = createNode("HAnimJoint");
HAnimJoint1341.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[89] = HAnimJoint1341;

HAnimJoint HAnimJoint1342 = createNode("HAnimJoint");
HAnimJoint1342.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[90] = HAnimJoint1342;

HAnimJoint HAnimJoint1343 = createNode("HAnimJoint");
HAnimJoint1343.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[91] = HAnimJoint1343;

HAnimJoint HAnimJoint1344 = createNode("HAnimJoint");
HAnimJoint1344.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[92] = HAnimJoint1344;

HAnimJoint HAnimJoint1345 = createNode("HAnimJoint");
HAnimJoint1345.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[93] = HAnimJoint1345;

HAnimJoint HAnimJoint1346 = createNode("HAnimJoint");
HAnimJoint1346.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[94] = HAnimJoint1346;

HAnimJoint HAnimJoint1347 = createNode("HAnimJoint");
HAnimJoint1347.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[95] = HAnimJoint1347;

HAnimJoint HAnimJoint1348 = createNode("HAnimJoint");
HAnimJoint1348.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[96] = HAnimJoint1348;

HAnimJoint HAnimJoint1349 = createNode("HAnimJoint");
HAnimJoint1349.USE = "hanim_l_midcarpal_1";
HAnimHumanoid43.joints[97] = HAnimJoint1349;

HAnimJoint HAnimJoint1350 = createNode("HAnimJoint");
HAnimJoint1350.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[98] = HAnimJoint1350;

HAnimJoint HAnimJoint1351 = createNode("HAnimJoint");
HAnimJoint1351.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[99] = HAnimJoint1351;

HAnimJoint HAnimJoint1352 = createNode("HAnimJoint");
HAnimJoint1352.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[100] = HAnimJoint1352;

HAnimJoint HAnimJoint1353 = createNode("HAnimJoint");
HAnimJoint1353.USE = "hanim_l_midcarpal_2";
HAnimHumanoid43.joints[101] = HAnimJoint1353;

HAnimJoint HAnimJoint1354 = createNode("HAnimJoint");
HAnimJoint1354.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[102] = HAnimJoint1354;

HAnimJoint HAnimJoint1355 = createNode("HAnimJoint");
HAnimJoint1355.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[103] = HAnimJoint1355;

HAnimJoint HAnimJoint1356 = createNode("HAnimJoint");
HAnimJoint1356.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[104] = HAnimJoint1356;

HAnimJoint HAnimJoint1357 = createNode("HAnimJoint");
HAnimJoint1357.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[105] = HAnimJoint1357;

HAnimJoint HAnimJoint1358 = createNode("HAnimJoint");
HAnimJoint1358.USE = "hanim_l_midcarpal_3";
HAnimHumanoid43.joints[106] = HAnimJoint1358;

HAnimJoint HAnimJoint1359 = createNode("HAnimJoint");
HAnimJoint1359.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[107] = HAnimJoint1359;

HAnimJoint HAnimJoint1360 = createNode("HAnimJoint");
HAnimJoint1360.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[108] = HAnimJoint1360;

HAnimJoint HAnimJoint1361 = createNode("HAnimJoint");
HAnimJoint1361.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[109] = HAnimJoint1361;

HAnimJoint HAnimJoint1362 = createNode("HAnimJoint");
HAnimJoint1362.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[110] = HAnimJoint1362;

HAnimJoint HAnimJoint1363 = createNode("HAnimJoint");
HAnimJoint1363.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid43.joints[111] = HAnimJoint1363;

HAnimJoint HAnimJoint1364 = createNode("HAnimJoint");
HAnimJoint1364.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[112] = HAnimJoint1364;

HAnimJoint HAnimJoint1365 = createNode("HAnimJoint");
HAnimJoint1365.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[113] = HAnimJoint1365;

HAnimJoint HAnimJoint1366 = createNode("HAnimJoint");
HAnimJoint1366.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[114] = HAnimJoint1366;

HAnimJoint HAnimJoint1367 = createNode("HAnimJoint");
HAnimJoint1367.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[115] = HAnimJoint1367;

HAnimJoint HAnimJoint1368 = createNode("HAnimJoint");
HAnimJoint1368.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[116] = HAnimJoint1368;

HAnimJoint HAnimJoint1369 = createNode("HAnimJoint");
HAnimJoint1369.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[117] = HAnimJoint1369;

HAnimJoint HAnimJoint1370 = createNode("HAnimJoint");
HAnimJoint1370.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[118] = HAnimJoint1370;

HAnimJoint HAnimJoint1371 = createNode("HAnimJoint");
HAnimJoint1371.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[119] = HAnimJoint1371;

HAnimJoint HAnimJoint1372 = createNode("HAnimJoint");
HAnimJoint1372.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[120] = HAnimJoint1372;

HAnimJoint HAnimJoint1373 = createNode("HAnimJoint");
HAnimJoint1373.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[121] = HAnimJoint1373;

HAnimJoint HAnimJoint1374 = createNode("HAnimJoint");
HAnimJoint1374.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[122] = HAnimJoint1374;

HAnimJoint HAnimJoint1375 = createNode("HAnimJoint");
HAnimJoint1375.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[123] = HAnimJoint1375;

HAnimJoint HAnimJoint1376 = createNode("HAnimJoint");
HAnimJoint1376.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[124] = HAnimJoint1376;

HAnimJoint HAnimJoint1377 = createNode("HAnimJoint");
HAnimJoint1377.USE = "hanim_r_midcarpal_1";
HAnimHumanoid43.joints[125] = HAnimJoint1377;

HAnimJoint HAnimJoint1378 = createNode("HAnimJoint");
HAnimJoint1378.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[126] = HAnimJoint1378;

HAnimJoint HAnimJoint1379 = createNode("HAnimJoint");
HAnimJoint1379.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[127] = HAnimJoint1379;

HAnimJoint HAnimJoint1380 = createNode("HAnimJoint");
HAnimJoint1380.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[128] = HAnimJoint1380;

HAnimJoint HAnimJoint1381 = createNode("HAnimJoint");
HAnimJoint1381.USE = "hanim_r_midcarpal_2";
HAnimHumanoid43.joints[129] = HAnimJoint1381;

HAnimJoint HAnimJoint1382 = createNode("HAnimJoint");
HAnimJoint1382.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[130] = HAnimJoint1382;

HAnimJoint HAnimJoint1383 = createNode("HAnimJoint");
HAnimJoint1383.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[131] = HAnimJoint1383;

HAnimJoint HAnimJoint1384 = createNode("HAnimJoint");
HAnimJoint1384.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[132] = HAnimJoint1384;

HAnimJoint HAnimJoint1385 = createNode("HAnimJoint");
HAnimJoint1385.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[133] = HAnimJoint1385;

HAnimJoint HAnimJoint1386 = createNode("HAnimJoint");
HAnimJoint1386.USE = "hanim_r_midcarpal_3";
HAnimHumanoid43.joints[134] = HAnimJoint1386;

HAnimJoint HAnimJoint1387 = createNode("HAnimJoint");
HAnimJoint1387.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[135] = HAnimJoint1387;

HAnimJoint HAnimJoint1388 = createNode("HAnimJoint");
HAnimJoint1388.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[136] = HAnimJoint1388;

HAnimJoint HAnimJoint1389 = createNode("HAnimJoint");
HAnimJoint1389.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[137] = HAnimJoint1389;

HAnimJoint HAnimJoint1390 = createNode("HAnimJoint");
HAnimJoint1390.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[138] = HAnimJoint1390;

HAnimJoint HAnimJoint1391 = createNode("HAnimJoint");
HAnimJoint1391.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid43.joints[139] = HAnimJoint1391;

HAnimJoint HAnimJoint1392 = createNode("HAnimJoint");
HAnimJoint1392.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[140] = HAnimJoint1392;

HAnimJoint HAnimJoint1393 = createNode("HAnimJoint");
HAnimJoint1393.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[141] = HAnimJoint1393;

HAnimJoint HAnimJoint1394 = createNode("HAnimJoint");
HAnimJoint1394.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[142] = HAnimJoint1394;

HAnimJoint HAnimJoint1395 = createNode("HAnimJoint");
HAnimJoint1395.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[143] = HAnimJoint1395;

HAnimJoint HAnimJoint1396 = createNode("HAnimJoint");
HAnimJoint1396.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[144] = HAnimJoint1396;

HAnimJoint HAnimJoint1397 = createNode("HAnimJoint");
HAnimJoint1397.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[145] = HAnimJoint1397;

HAnimJoint HAnimJoint1398 = createNode("HAnimJoint");
HAnimJoint1398.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[146] = HAnimJoint1398;

HAnimJoint HAnimJoint1399 = createNode("HAnimJoint");
HAnimJoint1399.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[147] = HAnimJoint1399;

HAnimSegment HAnimSegment1400 = createNode("HAnimSegment");
HAnimSegment1400.USE = "hanim_sacrum";
HAnimHumanoid43.segments[148] = HAnimSegment1400;

HAnimSegment HAnimSegment1401 = createNode("HAnimSegment");
HAnimSegment1401.USE = "hanim_pelvis";
HAnimHumanoid43.segments[149] = HAnimSegment1401;

HAnimSegment HAnimSegment1402 = createNode("HAnimSegment");
HAnimSegment1402.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[150] = HAnimSegment1402;

HAnimSegment HAnimSegment1403 = createNode("HAnimSegment");
HAnimSegment1403.USE = "hanim_l_calf";
HAnimHumanoid43.segments[151] = HAnimSegment1403;

HAnimSegment HAnimSegment1404 = createNode("HAnimSegment");
HAnimSegment1404.USE = "hanim_l_talus";
HAnimHumanoid43.segments[152] = HAnimSegment1404;

HAnimSegment HAnimSegment1405 = createNode("HAnimSegment");
HAnimSegment1405.USE = "hanim_l_navicular";
HAnimHumanoid43.segments[153] = HAnimSegment1405;

HAnimSegment HAnimSegment1406 = createNode("HAnimSegment");
HAnimSegment1406.USE = "hanim_l_cuneiform_1";
HAnimHumanoid43.segments[154] = HAnimSegment1406;

HAnimSegment HAnimSegment1407 = createNode("HAnimSegment");
HAnimSegment1407.USE = "hanim_l_metatarsal_1";
HAnimHumanoid43.segments[155] = HAnimSegment1407;

HAnimSegment HAnimSegment1408 = createNode("HAnimSegment");
HAnimSegment1408.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[156] = HAnimSegment1408;

HAnimSegment HAnimSegment1409 = createNode("HAnimSegment");
HAnimSegment1409.USE = "hanim_l_cuneiform_2";
HAnimHumanoid43.segments[157] = HAnimSegment1409;

HAnimSegment HAnimSegment1410 = createNode("HAnimSegment");
HAnimSegment1410.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[158] = HAnimSegment1410;

HAnimSegment HAnimSegment1411 = createNode("HAnimSegment");
HAnimSegment1411.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[159] = HAnimSegment1411;

HAnimSegment HAnimSegment1412 = createNode("HAnimSegment");
HAnimSegment1412.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[160] = HAnimSegment1412;

HAnimSegment HAnimSegment1413 = createNode("HAnimSegment");
HAnimSegment1413.USE = "hanim_l_cuneiform_3";
HAnimHumanoid43.segments[161] = HAnimSegment1413;

HAnimSegment HAnimSegment1414 = createNode("HAnimSegment");
HAnimSegment1414.USE = "hanim_l_metatarsal_3";
HAnimHumanoid43.segments[162] = HAnimSegment1414;

HAnimSegment HAnimSegment1415 = createNode("HAnimSegment");
HAnimSegment1415.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[163] = HAnimSegment1415;

HAnimSegment HAnimSegment1416 = createNode("HAnimSegment");
HAnimSegment1416.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[164] = HAnimSegment1416;

HAnimSegment HAnimSegment1417 = createNode("HAnimSegment");
HAnimSegment1417.USE = "hanim_l_calcaneus";
HAnimHumanoid43.segments[165] = HAnimSegment1417;

HAnimSegment HAnimSegment1418 = createNode("HAnimSegment");
HAnimSegment1418.USE = "hanim_l_cuboid";
HAnimHumanoid43.segments[166] = HAnimSegment1418;

HAnimSegment HAnimSegment1419 = createNode("HAnimSegment");
HAnimSegment1419.USE = "hanim_l_metatarsal_4";
HAnimHumanoid43.segments[167] = HAnimSegment1419;

HAnimSegment HAnimSegment1420 = createNode("HAnimSegment");
HAnimSegment1420.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[168] = HAnimSegment1420;

HAnimSegment HAnimSegment1421 = createNode("HAnimSegment");
HAnimSegment1421.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[169] = HAnimSegment1421;

HAnimSegment HAnimSegment1422 = createNode("HAnimSegment");
HAnimSegment1422.USE = "hanim_l_metatarsal_5";
HAnimHumanoid43.segments[170] = HAnimSegment1422;

HAnimSegment HAnimSegment1423 = createNode("HAnimSegment");
HAnimSegment1423.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[171] = HAnimSegment1423;

HAnimSegment HAnimSegment1424 = createNode("HAnimSegment");
HAnimSegment1424.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[172] = HAnimSegment1424;

HAnimSegment HAnimSegment1425 = createNode("HAnimSegment");
HAnimSegment1425.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[173] = HAnimSegment1425;

HAnimSegment HAnimSegment1426 = createNode("HAnimSegment");
HAnimSegment1426.USE = "hanim_r_calf";
HAnimHumanoid43.segments[174] = HAnimSegment1426;

HAnimSegment HAnimSegment1427 = createNode("HAnimSegment");
HAnimSegment1427.USE = "hanim_r_talus";
HAnimHumanoid43.segments[175] = HAnimSegment1427;

HAnimSegment HAnimSegment1428 = createNode("HAnimSegment");
HAnimSegment1428.USE = "hanim_r_navicular";
HAnimHumanoid43.segments[176] = HAnimSegment1428;

HAnimSegment HAnimSegment1429 = createNode("HAnimSegment");
HAnimSegment1429.USE = "hanim_r_cuneiform_1";
HAnimHumanoid43.segments[177] = HAnimSegment1429;

HAnimSegment HAnimSegment1430 = createNode("HAnimSegment");
HAnimSegment1430.USE = "hanim_r_metatarsal_1";
HAnimHumanoid43.segments[178] = HAnimSegment1430;

HAnimSegment HAnimSegment1431 = createNode("HAnimSegment");
HAnimSegment1431.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[179] = HAnimSegment1431;

HAnimSegment HAnimSegment1432 = createNode("HAnimSegment");
HAnimSegment1432.USE = "hanim_r_cuneiform_2";
HAnimHumanoid43.segments[180] = HAnimSegment1432;

HAnimSegment HAnimSegment1433 = createNode("HAnimSegment");
HAnimSegment1433.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[181] = HAnimSegment1433;

HAnimSegment HAnimSegment1434 = createNode("HAnimSegment");
HAnimSegment1434.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[182] = HAnimSegment1434;

HAnimSegment HAnimSegment1435 = createNode("HAnimSegment");
HAnimSegment1435.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[183] = HAnimSegment1435;

HAnimSegment HAnimSegment1436 = createNode("HAnimSegment");
HAnimSegment1436.USE = "hanim_r_cuneiform_3";
HAnimHumanoid43.segments[184] = HAnimSegment1436;

HAnimSegment HAnimSegment1437 = createNode("HAnimSegment");
HAnimSegment1437.USE = "hanim_r_metatarsal_3";
HAnimHumanoid43.segments[185] = HAnimSegment1437;

HAnimSegment HAnimSegment1438 = createNode("HAnimSegment");
HAnimSegment1438.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[186] = HAnimSegment1438;

HAnimSegment HAnimSegment1439 = createNode("HAnimSegment");
HAnimSegment1439.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[187] = HAnimSegment1439;

HAnimSegment HAnimSegment1440 = createNode("HAnimSegment");
HAnimSegment1440.USE = "hanim_r_calcaneus";
HAnimHumanoid43.segments[188] = HAnimSegment1440;

HAnimSegment HAnimSegment1441 = createNode("HAnimSegment");
HAnimSegment1441.USE = "hanim_r_cuboid";
HAnimHumanoid43.segments[189] = HAnimSegment1441;

HAnimSegment HAnimSegment1442 = createNode("HAnimSegment");
HAnimSegment1442.USE = "hanim_r_metatarsal_4";
HAnimHumanoid43.segments[190] = HAnimSegment1442;

HAnimSegment HAnimSegment1443 = createNode("HAnimSegment");
HAnimSegment1443.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[191] = HAnimSegment1443;

HAnimSegment HAnimSegment1444 = createNode("HAnimSegment");
HAnimSegment1444.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[192] = HAnimSegment1444;

HAnimSegment HAnimSegment1445 = createNode("HAnimSegment");
HAnimSegment1445.USE = "hanim_r_metatarsal_5";
HAnimHumanoid43.segments[193] = HAnimSegment1445;

HAnimSegment HAnimSegment1446 = createNode("HAnimSegment");
HAnimSegment1446.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[194] = HAnimSegment1446;

HAnimSegment HAnimSegment1447 = createNode("HAnimSegment");
HAnimSegment1447.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[195] = HAnimSegment1447;

HAnimSegment HAnimSegment1448 = createNode("HAnimSegment");
HAnimSegment1448.USE = "hanim_l5";
HAnimHumanoid43.segments[196] = HAnimSegment1448;

HAnimSegment HAnimSegment1449 = createNode("HAnimSegment");
HAnimSegment1449.USE = "hanim_l4";
HAnimHumanoid43.segments[197] = HAnimSegment1449;

HAnimSegment HAnimSegment1450 = createNode("HAnimSegment");
HAnimSegment1450.USE = "hanim_l3";
HAnimHumanoid43.segments[198] = HAnimSegment1450;

HAnimSegment HAnimSegment1451 = createNode("HAnimSegment");
HAnimSegment1451.USE = "hanim_l2";
HAnimHumanoid43.segments[199] = HAnimSegment1451;

HAnimSegment HAnimSegment1452 = createNode("HAnimSegment");
HAnimSegment1452.USE = "hanim_l1";
HAnimHumanoid43.segments[200] = HAnimSegment1452;

HAnimSegment HAnimSegment1453 = createNode("HAnimSegment");
HAnimSegment1453.USE = "hanim_t12";
HAnimHumanoid43.segments[201] = HAnimSegment1453;

HAnimSegment HAnimSegment1454 = createNode("HAnimSegment");
HAnimSegment1454.USE = "hanim_t11";
HAnimHumanoid43.segments[202] = HAnimSegment1454;

HAnimSegment HAnimSegment1455 = createNode("HAnimSegment");
HAnimSegment1455.USE = "hanim_t10";
HAnimHumanoid43.segments[203] = HAnimSegment1455;

HAnimSegment HAnimSegment1456 = createNode("HAnimSegment");
HAnimSegment1456.USE = "hanim_t9";
HAnimHumanoid43.segments[204] = HAnimSegment1456;

HAnimSegment HAnimSegment1457 = createNode("HAnimSegment");
HAnimSegment1457.USE = "hanim_t8";
HAnimHumanoid43.segments[205] = HAnimSegment1457;

HAnimSegment HAnimSegment1458 = createNode("HAnimSegment");
HAnimSegment1458.USE = "hanim_t7";
HAnimHumanoid43.segments[206] = HAnimSegment1458;

HAnimSegment HAnimSegment1459 = createNode("HAnimSegment");
HAnimSegment1459.USE = "hanim_t6";
HAnimHumanoid43.segments[207] = HAnimSegment1459;

HAnimSegment HAnimSegment1460 = createNode("HAnimSegment");
HAnimSegment1460.USE = "hanim_t5";
HAnimHumanoid43.segments[208] = HAnimSegment1460;

HAnimSegment HAnimSegment1461 = createNode("HAnimSegment");
HAnimSegment1461.USE = "hanim_t4";
HAnimHumanoid43.segments[209] = HAnimSegment1461;

HAnimSegment HAnimSegment1462 = createNode("HAnimSegment");
HAnimSegment1462.USE = "hanim_t3";
HAnimHumanoid43.segments[210] = HAnimSegment1462;

HAnimSegment HAnimSegment1463 = createNode("HAnimSegment");
HAnimSegment1463.USE = "hanim_t2";
HAnimHumanoid43.segments[211] = HAnimSegment1463;

HAnimSegment HAnimSegment1464 = createNode("HAnimSegment");
HAnimSegment1464.USE = "hanim_t1";
HAnimHumanoid43.segments[212] = HAnimSegment1464;

HAnimSegment HAnimSegment1465 = createNode("HAnimSegment");
HAnimSegment1465.USE = "hanim_c7";
HAnimHumanoid43.segments[213] = HAnimSegment1465;

HAnimSegment HAnimSegment1466 = createNode("HAnimSegment");
HAnimSegment1466.USE = "hanim_c6";
HAnimHumanoid43.segments[214] = HAnimSegment1466;

HAnimSegment HAnimSegment1467 = createNode("HAnimSegment");
HAnimSegment1467.USE = "hanim_c5";
HAnimHumanoid43.segments[215] = HAnimSegment1467;

HAnimSegment HAnimSegment1468 = createNode("HAnimSegment");
HAnimSegment1468.USE = "hanim_c4";
HAnimHumanoid43.segments[216] = HAnimSegment1468;

HAnimSegment HAnimSegment1469 = createNode("HAnimSegment");
HAnimSegment1469.USE = "hanim_c3";
HAnimHumanoid43.segments[217] = HAnimSegment1469;

HAnimSegment HAnimSegment1470 = createNode("HAnimSegment");
HAnimSegment1470.USE = "hanim_c2";
HAnimHumanoid43.segments[218] = HAnimSegment1470;

HAnimSegment HAnimSegment1471 = createNode("HAnimSegment");
HAnimSegment1471.USE = "hanim_c1";
HAnimHumanoid43.segments[219] = HAnimSegment1471;

HAnimSegment HAnimSegment1472 = createNode("HAnimSegment");
HAnimSegment1472.USE = "hanim_skull";
HAnimHumanoid43.segments[220] = HAnimSegment1472;

HAnimSegment HAnimSegment1473 = createNode("HAnimSegment");
HAnimSegment1473.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[221] = HAnimSegment1473;

HAnimSegment HAnimSegment1474 = createNode("HAnimSegment");
HAnimSegment1474.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[222] = HAnimSegment1474;

HAnimSegment HAnimSegment1475 = createNode("HAnimSegment");
HAnimSegment1475.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[223] = HAnimSegment1475;

HAnimSegment HAnimSegment1476 = createNode("HAnimSegment");
HAnimSegment1476.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[224] = HAnimSegment1476;

HAnimSegment HAnimSegment1477 = createNode("HAnimSegment");
HAnimSegment1477.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[225] = HAnimSegment1477;

HAnimSegment HAnimSegment1478 = createNode("HAnimSegment");
HAnimSegment1478.USE = "hanim_l_trapezium";
HAnimHumanoid43.segments[226] = HAnimSegment1478;

HAnimSegment HAnimSegment1479 = createNode("HAnimSegment");
HAnimSegment1479.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[227] = HAnimSegment1479;

HAnimSegment HAnimSegment1480 = createNode("HAnimSegment");
HAnimSegment1480.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[228] = HAnimSegment1480;

HAnimSegment HAnimSegment1481 = createNode("HAnimSegment");
HAnimSegment1481.USE = "hanim_l_trapezoid";
HAnimHumanoid43.segments[229] = HAnimSegment1481;

HAnimSegment HAnimSegment1482 = createNode("HAnimSegment");
HAnimSegment1482.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[230] = HAnimSegment1482;

HAnimSegment HAnimSegment1483 = createNode("HAnimSegment");
HAnimSegment1483.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[231] = HAnimSegment1483;

HAnimSegment HAnimSegment1484 = createNode("HAnimSegment");
HAnimSegment1484.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[232] = HAnimSegment1484;

HAnimSegment HAnimSegment1485 = createNode("HAnimSegment");
HAnimSegment1485.USE = "hanim_l_capitate";
HAnimHumanoid43.segments[233] = HAnimSegment1485;

HAnimSegment HAnimSegment1486 = createNode("HAnimSegment");
HAnimSegment1486.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[234] = HAnimSegment1486;

HAnimSegment HAnimSegment1487 = createNode("HAnimSegment");
HAnimSegment1487.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[235] = HAnimSegment1487;

HAnimSegment HAnimSegment1488 = createNode("HAnimSegment");
HAnimSegment1488.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[236] = HAnimSegment1488;

HAnimSegment HAnimSegment1489 = createNode("HAnimSegment");
HAnimSegment1489.USE = "hanim_l_hamate";
HAnimHumanoid43.segments[237] = HAnimSegment1489;

HAnimSegment HAnimSegment1490 = createNode("HAnimSegment");
HAnimSegment1490.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[238] = HAnimSegment1490;

HAnimSegment HAnimSegment1491 = createNode("HAnimSegment");
HAnimSegment1491.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[239] = HAnimSegment1491;

HAnimSegment HAnimSegment1492 = createNode("HAnimSegment");
HAnimSegment1492.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[240] = HAnimSegment1492;

HAnimSegment HAnimSegment1493 = createNode("HAnimSegment");
HAnimSegment1493.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[241] = HAnimSegment1493;

HAnimSegment HAnimSegment1494 = createNode("HAnimSegment");
HAnimSegment1494.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[242] = HAnimSegment1494;

HAnimSegment HAnimSegment1495 = createNode("HAnimSegment");
HAnimSegment1495.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[243] = HAnimSegment1495;

HAnimSegment HAnimSegment1496 = createNode("HAnimSegment");
HAnimSegment1496.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[244] = HAnimSegment1496;

HAnimSegment HAnimSegment1497 = createNode("HAnimSegment");
HAnimSegment1497.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[245] = HAnimSegment1497;

HAnimSegment HAnimSegment1498 = createNode("HAnimSegment");
HAnimSegment1498.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[246] = HAnimSegment1498;

HAnimSegment HAnimSegment1499 = createNode("HAnimSegment");
HAnimSegment1499.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[247] = HAnimSegment1499;

HAnimSegment HAnimSegment1500 = createNode("HAnimSegment");
HAnimSegment1500.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[248] = HAnimSegment1500;

HAnimSegment HAnimSegment1501 = createNode("HAnimSegment");
HAnimSegment1501.USE = "hanim_r_trapezium";
HAnimHumanoid43.segments[249] = HAnimSegment1501;

HAnimSegment HAnimSegment1502 = createNode("HAnimSegment");
HAnimSegment1502.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[250] = HAnimSegment1502;

HAnimSegment HAnimSegment1503 = createNode("HAnimSegment");
HAnimSegment1503.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[251] = HAnimSegment1503;

HAnimSegment HAnimSegment1504 = createNode("HAnimSegment");
HAnimSegment1504.USE = "hanim_r_trapezoid";
HAnimHumanoid43.segments[252] = HAnimSegment1504;

HAnimSegment HAnimSegment1505 = createNode("HAnimSegment");
HAnimSegment1505.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[253] = HAnimSegment1505;

HAnimSegment HAnimSegment1506 = createNode("HAnimSegment");
HAnimSegment1506.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[254] = HAnimSegment1506;

HAnimSegment HAnimSegment1507 = createNode("HAnimSegment");
HAnimSegment1507.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[255] = HAnimSegment1507;

HAnimSegment HAnimSegment1508 = createNode("HAnimSegment");
HAnimSegment1508.USE = "hanim_r_capitate";
HAnimHumanoid43.segments[256] = HAnimSegment1508;

HAnimSegment HAnimSegment1509 = createNode("HAnimSegment");
HAnimSegment1509.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[257] = HAnimSegment1509;

HAnimSegment HAnimSegment1510 = createNode("HAnimSegment");
HAnimSegment1510.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[258] = HAnimSegment1510;

HAnimSegment HAnimSegment1511 = createNode("HAnimSegment");
HAnimSegment1511.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[259] = HAnimSegment1511;

HAnimSegment HAnimSegment1512 = createNode("HAnimSegment");
HAnimSegment1512.USE = "hanim_r_hamate";
HAnimHumanoid43.segments[260] = HAnimSegment1512;

HAnimSegment HAnimSegment1513 = createNode("HAnimSegment");
HAnimSegment1513.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[261] = HAnimSegment1513;

HAnimSegment HAnimSegment1514 = createNode("HAnimSegment");
HAnimSegment1514.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[262] = HAnimSegment1514;

HAnimSegment HAnimSegment1515 = createNode("HAnimSegment");
HAnimSegment1515.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[263] = HAnimSegment1515;

HAnimSegment HAnimSegment1516 = createNode("HAnimSegment");
HAnimSegment1516.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[264] = HAnimSegment1516;

HAnimSegment HAnimSegment1517 = createNode("HAnimSegment");
HAnimSegment1517.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[265] = HAnimSegment1517;

HAnimSegment HAnimSegment1518 = createNode("HAnimSegment");
HAnimSegment1518.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[266] = HAnimSegment1518;

children[4] = HAnimHumanoid43;

}
