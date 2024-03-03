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
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d";
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
Coordinate312.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet311.coord = Coordinate312;

//from vl5 to vl4 vertices 2
ColorRGBA ColorRGBA313 = createNode("ColorRGBA");
ColorRGBA313.USE = "HAnimSegmentLineColorRGBA";
LineSet311.color = ColorRGBA313;

Shape310.geometry = LineSet311;

HAnimSegment306.children[1] = Shape310;

HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.name = "vl4";
HAnimJoint314.DEF = "hanim_vl4";
HAnimJoint314.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint314.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint314.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment315 = createNode("HAnimSegment");
HAnimSegment315.name = "l4";
HAnimSegment315.DEF = "hanim_l4";
Transform Transform316 = createNode("Transform");
Transform316.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Transform Transform317 = createNode("Transform");
//Empty Transform
Shape Shape318 = createNode("Shape");
Shape318.USE = "HAnimJointShape";
Transform317.child = new undefined();

Transform317.child[0] = Shape318;

Transform316.children = new MFNode();

Transform316.children[0] = Transform317;

HAnimSegment315.children = new MFNode();

HAnimSegment315.children[0] = Transform316;

Shape Shape319 = createNode("Shape");
LineSet LineSet320 = createNode("LineSet");
LineSet320.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate321 = createNode("Coordinate");
Coordinate321.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet320.coord = Coordinate321;

//from vl4 to vl3 vertices 2
ColorRGBA ColorRGBA322 = createNode("ColorRGBA");
ColorRGBA322.USE = "HAnimSegmentLineColorRGBA";
LineSet320.color = ColorRGBA322;

Shape319.geometry = LineSet320;

HAnimSegment315.children[1] = Shape319;

HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

HAnimJoint HAnimJoint323 = createNode("HAnimJoint");
HAnimJoint323.name = "vl3";
HAnimJoint323.DEF = "hanim_vl3";
HAnimJoint323.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint323.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint323.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment324 = createNode("HAnimSegment");
HAnimSegment324.name = "l3";
HAnimSegment324.DEF = "hanim_l3";
Transform Transform325 = createNode("Transform");
Transform325.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Transform Transform326 = createNode("Transform");
//Empty Transform
Shape Shape327 = createNode("Shape");
Shape327.USE = "HAnimJointShape";
Transform326.child = new undefined();

Transform326.child[0] = Shape327;

Transform325.children = new MFNode();

Transform325.children[0] = Transform326;

HAnimSegment324.children = new MFNode();

HAnimSegment324.children[0] = Transform325;

Shape Shape328 = createNode("Shape");
LineSet LineSet329 = createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate330 = createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet329.coord = Coordinate330;

//from vl3 to vl2 vertices 2
ColorRGBA ColorRGBA331 = createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSegmentLineColorRGBA";
LineSet329.color = ColorRGBA331;

Shape328.geometry = LineSet329;

HAnimSegment324.children[1] = Shape328;

HAnimSite HAnimSite332 = createNode("HAnimSite");
HAnimSite332.name = "l_rib10";
HAnimSite332.DEF = "hanim_l_rib10";
HAnimSite332.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor333 = createNode("TouchSensor");
TouchSensor333.description = "HAnimSite l_rib10";
HAnimSite332.children = new MFNode();

HAnimSite332.children[0] = TouchSensor333;

Shape Shape334 = createNode("Shape");
Shape334.USE = "HAnimSiteShape";
HAnimSite332.children[1] = Shape334;

HAnimSegment324.children[2] = HAnimSite332;

HAnimSite HAnimSite335 = createNode("HAnimSite");
HAnimSite335.name = "r_rib10";
HAnimSite335.DEF = "hanim_r_rib10";
HAnimSite335.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor336 = createNode("TouchSensor");
TouchSensor336.description = "HAnimSite r_rib10";
HAnimSite335.children = new MFNode();

HAnimSite335.children[0] = TouchSensor336;

Shape Shape337 = createNode("Shape");
Shape337.USE = "HAnimSiteShape";
HAnimSite335.children[1] = Shape337;

HAnimSegment324.children[3] = HAnimSite335;

HAnimSite HAnimSite338 = createNode("HAnimSite");
HAnimSite338.name = "spine_2_middle_back";
HAnimSite338.DEF = "hanim_spine_2_middle_back";
TouchSensor TouchSensor339 = createNode("TouchSensor");
TouchSensor339.description = "HAnimSite spine_2_middle_back";
HAnimSite338.children = new MFNode();

HAnimSite338.children[0] = TouchSensor339;

Shape Shape340 = createNode("Shape");
Shape340.USE = "HAnimSiteShape";
HAnimSite338.children[1] = Shape340;

HAnimSegment324.children[4] = HAnimSite338;

HAnimJoint323.children = new MFNode();

HAnimJoint323.children[0] = HAnimSegment324;

HAnimJoint HAnimJoint341 = createNode("HAnimJoint");
HAnimJoint341.name = "vl2";
HAnimJoint341.DEF = "hanim_vl2";
HAnimJoint341.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint341.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint341.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment342 = createNode("HAnimSegment");
HAnimSegment342.name = "l2";
HAnimSegment342.DEF = "hanim_l2";
Transform Transform343 = createNode("Transform");
Transform343.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Transform Transform344 = createNode("Transform");
//Empty Transform
Shape Shape345 = createNode("Shape");
Shape345.USE = "HAnimJointShape";
Transform344.child = new undefined();

Transform344.child[0] = Shape345;

Transform343.children = new MFNode();

Transform343.children[0] = Transform344;

HAnimSegment342.children = new MFNode();

HAnimSegment342.children[0] = Transform343;

Shape Shape346 = createNode("Shape");
LineSet LineSet347 = createNode("LineSet");
LineSet347.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate348 = createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet347.coord = Coordinate348;

//from vl2 to vl1 vertices 2
ColorRGBA ColorRGBA349 = createNode("ColorRGBA");
ColorRGBA349.USE = "HAnimSegmentLineColorRGBA";
LineSet347.color = ColorRGBA349;

Shape346.geometry = LineSet347;

HAnimSegment342.children[1] = Shape346;

HAnimJoint341.children = new MFNode();

HAnimJoint341.children[0] = HAnimSegment342;

HAnimJoint HAnimJoint350 = createNode("HAnimJoint");
HAnimJoint350.name = "vl1";
HAnimJoint350.DEF = "hanim_vl1";
HAnimJoint350.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint350.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint350.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment351 = createNode("HAnimSegment");
HAnimSegment351.name = "l1";
HAnimSegment351.DEF = "hanim_l1";
Transform Transform352 = createNode("Transform");
Transform352.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform353 = createNode("Transform");
//Empty Transform
Shape Shape354 = createNode("Shape");
Shape354.USE = "HAnimJointShape";
Transform353.child = new undefined();

Transform353.child[0] = Shape354;

Transform352.children = new MFNode();

Transform352.children[0] = Transform353;

HAnimSegment351.children = new MFNode();

HAnimSegment351.children[0] = Transform352;

Shape Shape355 = createNode("Shape");
LineSet LineSet356 = createNode("LineSet");
LineSet356.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate357 = createNode("Coordinate");
Coordinate357.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet356.coord = Coordinate357;

//from vl1 to vt12 vertices 2
ColorRGBA ColorRGBA358 = createNode("ColorRGBA");
ColorRGBA358.USE = "HAnimSegmentLineColorRGBA";
LineSet356.color = ColorRGBA358;

Shape355.geometry = LineSet356;

HAnimSegment351.children[1] = Shape355;

HAnimJoint350.children = new MFNode();

HAnimJoint350.children[0] = HAnimSegment351;

HAnimJoint HAnimJoint359 = createNode("HAnimJoint");
HAnimJoint359.name = "vt12";
HAnimJoint359.DEF = "hanim_vt12";
HAnimJoint359.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint359.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint359.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment360 = createNode("HAnimSegment");
HAnimSegment360.name = "t12";
HAnimSegment360.DEF = "hanim_t12";
Transform Transform361 = createNode("Transform");
Transform361.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Transform Transform362 = createNode("Transform");
//Empty Transform
Shape Shape363 = createNode("Shape");
Shape363.USE = "HAnimJointShape";
Transform362.child = new undefined();

Transform362.child[0] = Shape363;

Transform361.children = new MFNode();

Transform361.children[0] = Transform362;

HAnimSegment360.children = new MFNode();

HAnimSegment360.children[0] = Transform361;

Shape Shape364 = createNode("Shape");
LineSet LineSet365 = createNode("LineSet");
LineSet365.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate366 = createNode("Coordinate");
Coordinate366.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet365.coord = Coordinate366;

//from vt12 to vt11 vertices 2
ColorRGBA ColorRGBA367 = createNode("ColorRGBA");
ColorRGBA367.USE = "HAnimSegmentLineColorRGBA";
LineSet365.color = ColorRGBA367;

Shape364.geometry = LineSet365;

HAnimSegment360.children[1] = Shape364;

HAnimJoint359.children = new MFNode();

HAnimJoint359.children[0] = HAnimSegment360;

HAnimJoint HAnimJoint368 = createNode("HAnimJoint");
HAnimJoint368.name = "vt11";
HAnimJoint368.DEF = "hanim_vt11";
HAnimJoint368.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint368.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint368.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment369 = createNode("HAnimSegment");
HAnimSegment369.name = "t11";
HAnimSegment369.DEF = "hanim_t11";
Transform Transform370 = createNode("Transform");
Transform370.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Transform Transform371 = createNode("Transform");
//Empty Transform
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
Coordinate375.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet374.coord = Coordinate375;

//from vt11 to vt10 vertices 2
ColorRGBA ColorRGBA376 = createNode("ColorRGBA");
ColorRGBA376.USE = "HAnimSegmentLineColorRGBA";
LineSet374.color = ColorRGBA376;

Shape373.geometry = LineSet374;

HAnimSegment369.children[1] = Shape373;

HAnimSite HAnimSite377 = createNode("HAnimSite");
HAnimSite377.name = "substernale";
HAnimSite377.DEF = "hanim_substernale";
HAnimSite377.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor378 = createNode("TouchSensor");
TouchSensor378.description = "HAnimSite substernale";
HAnimSite377.children = new MFNode();

HAnimSite377.children[0] = TouchSensor378;

Shape Shape379 = createNode("Shape");
Shape379.USE = "HAnimSiteShape";
HAnimSite377.children[1] = Shape379;

HAnimSegment369.children[2] = HAnimSite377;

HAnimJoint368.children = new MFNode();

HAnimJoint368.children[0] = HAnimSegment369;

HAnimJoint HAnimJoint380 = createNode("HAnimJoint");
HAnimJoint380.name = "vt10";
HAnimJoint380.DEF = "hanim_vt10";
HAnimJoint380.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint380.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint380.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment381 = createNode("HAnimSegment");
HAnimSegment381.name = "t10";
HAnimSegment381.DEF = "hanim_t10";
Transform Transform382 = createNode("Transform");
Transform382.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform383 = createNode("Transform");
//Empty Transform
Shape Shape384 = createNode("Shape");
Shape384.USE = "HAnimJointShape";
Transform383.child = new undefined();

Transform383.child[0] = Shape384;

Transform382.children = new MFNode();

Transform382.children[0] = Transform383;

HAnimSegment381.children = new MFNode();

HAnimSegment381.children[0] = Transform382;

Shape Shape385 = createNode("Shape");
LineSet LineSet386 = createNode("LineSet");
LineSet386.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate387 = createNode("Coordinate");
Coordinate387.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet386.coord = Coordinate387;

//from vt10 to vt9 vertices 2
ColorRGBA ColorRGBA388 = createNode("ColorRGBA");
ColorRGBA388.USE = "HAnimSegmentLineColorRGBA";
LineSet386.color = ColorRGBA388;

Shape385.geometry = LineSet386;

HAnimSegment381.children[1] = Shape385;

HAnimSite HAnimSite389 = createNode("HAnimSite");
HAnimSite389.name = "l_thelion";
HAnimSite389.DEF = "hanim_l_thelion";
HAnimSite389.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor390 = createNode("TouchSensor");
TouchSensor390.description = "HAnimSite l_thelion";
HAnimSite389.children = new MFNode();

HAnimSite389.children[0] = TouchSensor390;

Shape Shape391 = createNode("Shape");
Shape391.USE = "HAnimSiteShape";
HAnimSite389.children[1] = Shape391;

HAnimSegment381.children[2] = HAnimSite389;

HAnimSite HAnimSite392 = createNode("HAnimSite");
HAnimSite392.name = "r_thelion";
HAnimSite392.DEF = "hanim_r_thelion";
HAnimSite392.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor393 = createNode("TouchSensor");
TouchSensor393.description = "HAnimSite r_thelion";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

Shape Shape394 = createNode("Shape");
Shape394.USE = "HAnimSiteShape";
HAnimSite392.children[1] = Shape394;

HAnimSegment381.children[3] = HAnimSite392;

HAnimJoint380.children = new MFNode();

HAnimJoint380.children[0] = HAnimSegment381;

HAnimJoint HAnimJoint395 = createNode("HAnimJoint");
HAnimJoint395.name = "vt9";
HAnimJoint395.DEF = "hanim_vt9";
HAnimJoint395.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint395.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint395.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment396 = createNode("HAnimSegment");
HAnimSegment396.name = "t9";
HAnimSegment396.DEF = "hanim_t9";
Transform Transform397 = createNode("Transform");
Transform397.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
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
Coordinate402.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet401.coord = Coordinate402;

//from vt9 to vt8 vertices 2
ColorRGBA ColorRGBA403 = createNode("ColorRGBA");
ColorRGBA403.USE = "HAnimSegmentLineColorRGBA";
LineSet401.color = ColorRGBA403;

Shape400.geometry = LineSet401;

HAnimSegment396.children[1] = Shape400;

HAnimJoint395.children = new MFNode();

HAnimJoint395.children[0] = HAnimSegment396;

HAnimJoint HAnimJoint404 = createNode("HAnimJoint");
HAnimJoint404.name = "vt8";
HAnimJoint404.DEF = "hanim_vt8";
HAnimJoint404.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint404.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint404.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment405 = createNode("HAnimSegment");
HAnimSegment405.name = "t8";
HAnimSegment405.DEF = "hanim_t8";
Transform Transform406 = createNode("Transform");
Transform406.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Transform Transform407 = createNode("Transform");
//Empty Transform
Shape Shape408 = createNode("Shape");
Shape408.USE = "HAnimJointShape";
Transform407.child = new undefined();

Transform407.child[0] = Shape408;

Transform406.children = new MFNode();

Transform406.children[0] = Transform407;

HAnimSegment405.children = new MFNode();

HAnimSegment405.children[0] = Transform406;

Shape Shape409 = createNode("Shape");
LineSet LineSet410 = createNode("LineSet");
LineSet410.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate411 = createNode("Coordinate");
Coordinate411.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet410.coord = Coordinate411;

//from vt8 to vt7 vertices 2
ColorRGBA ColorRGBA412 = createNode("ColorRGBA");
ColorRGBA412.USE = "HAnimSegmentLineColorRGBA";
LineSet410.color = ColorRGBA412;

Shape409.geometry = LineSet410;

HAnimSegment405.children[1] = Shape409;

HAnimJoint404.children = new MFNode();

HAnimJoint404.children[0] = HAnimSegment405;

HAnimJoint HAnimJoint413 = createNode("HAnimJoint");
HAnimJoint413.name = "vt7";
HAnimJoint413.DEF = "hanim_vt7";
HAnimJoint413.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint413.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint413.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment414 = createNode("HAnimSegment");
HAnimSegment414.name = "t7";
HAnimSegment414.DEF = "hanim_t7";
Transform Transform415 = createNode("Transform");
Transform415.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
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
Coordinate420.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet419.coord = Coordinate420;

//from vt7 to vt6 vertices 2
ColorRGBA ColorRGBA421 = createNode("ColorRGBA");
ColorRGBA421.USE = "HAnimSegmentLineColorRGBA";
LineSet419.color = ColorRGBA421;

Shape418.geometry = LineSet419;

HAnimSegment414.children[1] = Shape418;

HAnimSite HAnimSite422 = createNode("HAnimSite");
HAnimSite422.name = "l_chest_midsagittal_plane";
HAnimSite422.DEF = "hanim_l_chest_midsagittal_plane";
TouchSensor TouchSensor423 = createNode("TouchSensor");
TouchSensor423.description = "HAnimSite l_chest_midsagittal_plane";
HAnimSite422.children = new MFNode();

HAnimSite422.children[0] = TouchSensor423;

Shape Shape424 = createNode("Shape");
Shape424.USE = "HAnimSiteShape";
HAnimSite422.children[1] = Shape424;

HAnimSegment414.children[2] = HAnimSite422;

HAnimSite HAnimSite425 = createNode("HAnimSite");
HAnimSite425.name = "mesosternale";
HAnimSite425.DEF = "hanim_mesosternale";
TouchSensor TouchSensor426 = createNode("TouchSensor");
TouchSensor426.description = "HAnimSite mesosternale";
HAnimSite425.children = new MFNode();

HAnimSite425.children[0] = TouchSensor426;

Shape Shape427 = createNode("Shape");
Shape427.USE = "HAnimSiteShape";
HAnimSite425.children[1] = Shape427;

HAnimSegment414.children[3] = HAnimSite425;

HAnimSite HAnimSite428 = createNode("HAnimSite");
HAnimSite428.name = "r_chest_midsagittal_plane";
HAnimSite428.DEF = "hanim_r_chest_midsagittal_plane";
TouchSensor TouchSensor429 = createNode("TouchSensor");
TouchSensor429.description = "HAnimSite r_chest_midsagittal_plane";
HAnimSite428.children = new MFNode();

HAnimSite428.children[0] = TouchSensor429;

Shape Shape430 = createNode("Shape");
Shape430.USE = "HAnimSiteShape";
HAnimSite428.children[1] = Shape430;

HAnimSegment414.children[4] = HAnimSite428;

HAnimSite HAnimSite431 = createNode("HAnimSite");
HAnimSite431.name = "rear_center_midsagittal_plane";
HAnimSite431.DEF = "hanim_rear_center_midsagittal_plane";
TouchSensor TouchSensor432 = createNode("TouchSensor");
TouchSensor432.description = "HAnimSite rear_center_midsagittal_plane";
HAnimSite431.children = new MFNode();

HAnimSite431.children[0] = TouchSensor432;

Shape Shape433 = createNode("Shape");
Shape433.USE = "HAnimSiteShape";
HAnimSite431.children[1] = Shape433;

HAnimSegment414.children[5] = HAnimSite431;

HAnimJoint413.children = new MFNode();

HAnimJoint413.children[0] = HAnimSegment414;

HAnimJoint HAnimJoint434 = createNode("HAnimJoint");
HAnimJoint434.name = "vt6";
HAnimJoint434.DEF = "hanim_vt6";
HAnimJoint434.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint434.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint434.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment435 = createNode("HAnimSegment");
HAnimSegment435.name = "t6";
HAnimSegment435.DEF = "hanim_t6";
Transform Transform436 = createNode("Transform");
Transform436.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform437 = createNode("Transform");
//Empty Transform
Shape Shape438 = createNode("Shape");
Shape438.USE = "HAnimJointShape";
Transform437.child = new undefined();

Transform437.child[0] = Shape438;

Transform436.children = new MFNode();

Transform436.children[0] = Transform437;

HAnimSegment435.children = new MFNode();

HAnimSegment435.children[0] = Transform436;

Shape Shape439 = createNode("Shape");
LineSet LineSet440 = createNode("LineSet");
LineSet440.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate441 = createNode("Coordinate");
Coordinate441.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet440.coord = Coordinate441;

//from vt6 to vt5 vertices 2
ColorRGBA ColorRGBA442 = createNode("ColorRGBA");
ColorRGBA442.USE = "HAnimSegmentLineColorRGBA";
LineSet440.color = ColorRGBA442;

Shape439.geometry = LineSet440;

HAnimSegment435.children[1] = Shape439;

HAnimSite HAnimSite443 = createNode("HAnimSite");
HAnimSite443.name = "spine_1_middle_back";
HAnimSite443.DEF = "hanim_spine_1_middle_back";
TouchSensor TouchSensor444 = createNode("TouchSensor");
TouchSensor444.description = "HAnimSite spine_1_middle_back";
HAnimSite443.children = new MFNode();

HAnimSite443.children[0] = TouchSensor444;

Shape Shape445 = createNode("Shape");
Shape445.USE = "HAnimSiteShape";
HAnimSite443.children[1] = Shape445;

HAnimSegment435.children[2] = HAnimSite443;

HAnimJoint434.children = new MFNode();

HAnimJoint434.children[0] = HAnimSegment435;

HAnimJoint HAnimJoint446 = createNode("HAnimJoint");
HAnimJoint446.name = "vt5";
HAnimJoint446.DEF = "hanim_vt5";
HAnimJoint446.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint446.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint446.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment447 = createNode("HAnimSegment");
HAnimSegment447.name = "t5";
HAnimSegment447.DEF = "hanim_t5";
Transform Transform448 = createNode("Transform");
Transform448.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
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
Coordinate453.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet452.coord = Coordinate453;

//from vt5 to vt4 vertices 2
ColorRGBA ColorRGBA454 = createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSegmentLineColorRGBA";
LineSet452.color = ColorRGBA454;

Shape451.geometry = LineSet452;

HAnimSegment447.children[1] = Shape451;

HAnimJoint446.children = new MFNode();

HAnimJoint446.children[0] = HAnimSegment447;

HAnimJoint HAnimJoint455 = createNode("HAnimJoint");
HAnimJoint455.name = "vt4";
HAnimJoint455.DEF = "hanim_vt4";
HAnimJoint455.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint455.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint455.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment456 = createNode("HAnimSegment");
HAnimSegment456.name = "t4";
HAnimSegment456.DEF = "hanim_t4";
Transform Transform457 = createNode("Transform");
Transform457.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Transform Transform458 = createNode("Transform");
//Empty Transform
Shape Shape459 = createNode("Shape");
Shape459.USE = "HAnimJointShape";
Transform458.child = new undefined();

Transform458.child[0] = Shape459;

Transform457.children = new MFNode();

Transform457.children[0] = Transform458;

HAnimSegment456.children = new MFNode();

HAnimSegment456.children[0] = Transform457;

Shape Shape460 = createNode("Shape");
LineSet LineSet461 = createNode("LineSet");
LineSet461.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate462 = createNode("Coordinate");
Coordinate462.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet461.coord = Coordinate462;

//from vt4 to vt3 vertices 2
ColorRGBA ColorRGBA463 = createNode("ColorRGBA");
ColorRGBA463.USE = "HAnimSegmentLineColorRGBA";
LineSet461.color = ColorRGBA463;

Shape460.geometry = LineSet461;

HAnimSegment456.children[1] = Shape460;

HAnimJoint455.children = new MFNode();

HAnimJoint455.children[0] = HAnimSegment456;

HAnimJoint HAnimJoint464 = createNode("HAnimJoint");
HAnimJoint464.name = "vt3";
HAnimJoint464.DEF = "hanim_vt3";
HAnimJoint464.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint464.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint464.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment465 = createNode("HAnimSegment");
HAnimSegment465.name = "t3";
HAnimSegment465.DEF = "hanim_t3";
Transform Transform466 = createNode("Transform");
Transform466.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Transform Transform467 = createNode("Transform");
//Empty Transform
Shape Shape468 = createNode("Shape");
Shape468.USE = "HAnimJointShape";
Transform467.child = new undefined();

Transform467.child[0] = Shape468;

Transform466.children = new MFNode();

Transform466.children[0] = Transform467;

HAnimSegment465.children = new MFNode();

HAnimSegment465.children[0] = Transform466;

Shape Shape469 = createNode("Shape");
LineSet LineSet470 = createNode("LineSet");
LineSet470.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate471 = createNode("Coordinate");
Coordinate471.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet470.coord = Coordinate471;

//from vt3 to vt2 vertices 2
ColorRGBA ColorRGBA472 = createNode("ColorRGBA");
ColorRGBA472.USE = "HAnimSegmentLineColorRGBA";
LineSet470.color = ColorRGBA472;

Shape469.geometry = LineSet470;

HAnimSegment465.children[1] = Shape469;

HAnimJoint464.children = new MFNode();

HAnimJoint464.children[0] = HAnimSegment465;

HAnimJoint HAnimJoint473 = createNode("HAnimJoint");
HAnimJoint473.name = "vt2";
HAnimJoint473.DEF = "hanim_vt2";
HAnimJoint473.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint473.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint473.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment474 = createNode("HAnimSegment");
HAnimSegment474.name = "t2";
HAnimSegment474.DEF = "hanim_t2";
Transform Transform475 = createNode("Transform");
Transform475.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Transform Transform476 = createNode("Transform");
//Empty Transform
Shape Shape477 = createNode("Shape");
Shape477.USE = "HAnimJointShape";
Transform476.child = new undefined();

Transform476.child[0] = Shape477;

Transform475.children = new MFNode();

Transform475.children[0] = Transform476;

HAnimSegment474.children = new MFNode();

HAnimSegment474.children[0] = Transform475;

Shape Shape478 = createNode("Shape");
LineSet LineSet479 = createNode("LineSet");
LineSet479.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate480 = createNode("Coordinate");
Coordinate480.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet479.coord = Coordinate480;

//from vt2 to vt1 vertices 2
ColorRGBA ColorRGBA481 = createNode("ColorRGBA");
ColorRGBA481.USE = "HAnimSegmentLineColorRGBA";
LineSet479.color = ColorRGBA481;

Shape478.geometry = LineSet479;

HAnimSegment474.children[1] = Shape478;

HAnimSite HAnimSite482 = createNode("HAnimSite");
HAnimSite482.name = "cervicale";
HAnimSite482.DEF = "hanim_cervicale";
HAnimSite482.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor483 = createNode("TouchSensor");
TouchSensor483.description = "HAnimSite cervicale";
HAnimSite482.children = new MFNode();

HAnimSite482.children[0] = TouchSensor483;

Shape Shape484 = createNode("Shape");
Shape484.USE = "HAnimSiteShape";
HAnimSite482.children[1] = Shape484;

HAnimSegment474.children[2] = HAnimSite482;

HAnimSite HAnimSite485 = createNode("HAnimSite");
HAnimSite485.name = "suprasternale";
HAnimSite485.DEF = "hanim_suprasternale";
HAnimSite485.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor486 = createNode("TouchSensor");
TouchSensor486.description = "HAnimSite suprasternale";
HAnimSite485.children = new MFNode();

HAnimSite485.children[0] = TouchSensor486;

Shape Shape487 = createNode("Shape");
Shape487.USE = "HAnimSiteShape";
HAnimSite485.children[1] = Shape487;

HAnimSegment474.children[3] = HAnimSite485;

HAnimJoint473.children = new MFNode();

HAnimJoint473.children[0] = HAnimSegment474;

HAnimJoint HAnimJoint488 = createNode("HAnimJoint");
HAnimJoint488.name = "vt1";
HAnimJoint488.DEF = "hanim_vt1";
HAnimJoint488.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint488.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint488.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment489 = createNode("HAnimSegment");
HAnimSegment489.name = "t1";
HAnimSegment489.DEF = "hanim_t1";
Transform Transform490 = createNode("Transform");
Transform490.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Transform Transform491 = createNode("Transform");
//Empty Transform
Shape Shape492 = createNode("Shape");
Shape492.USE = "HAnimJointShape";
Transform491.child = new undefined();

Transform491.child[0] = Shape492;

Transform490.children = new MFNode();

Transform490.children[0] = Transform491;

HAnimSegment489.children = new MFNode();

HAnimSegment489.children[0] = Transform490;

Shape Shape493 = createNode("Shape");
LineSet LineSet494 = createNode("LineSet");
LineSet494.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate495 = createNode("Coordinate");
Coordinate495.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet494.coord = Coordinate495;

//from vt1 to vc7 vertices 2
ColorRGBA ColorRGBA496 = createNode("ColorRGBA");
ColorRGBA496.USE = "HAnimSegmentLineColorRGBA";
LineSet494.color = ColorRGBA496;

Shape493.geometry = LineSet494;

HAnimSegment489.children[1] = Shape493;

HAnimSite HAnimSite497 = createNode("HAnimSite");
HAnimSite497.name = "l_neck_base";
HAnimSite497.DEF = "hanim_l_neck_base";
HAnimSite497.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor498 = createNode("TouchSensor");
TouchSensor498.description = "HAnimSite l_neck_base";
HAnimSite497.children = new MFNode();

HAnimSite497.children[0] = TouchSensor498;

Shape Shape499 = createNode("Shape");
Shape499.USE = "HAnimSiteShape";
HAnimSite497.children[1] = Shape499;

HAnimSegment489.children[2] = HAnimSite497;

HAnimSite HAnimSite500 = createNode("HAnimSite");
HAnimSite500.name = "r_neck_base";
HAnimSite500.DEF = "hanim_r_neck_base";
HAnimSite500.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor501 = createNode("TouchSensor");
TouchSensor501.description = "HAnimSite r_neck_base";
HAnimSite500.children = new MFNode();

HAnimSite500.children[0] = TouchSensor501;

Shape Shape502 = createNode("Shape");
Shape502.USE = "HAnimSiteShape";
HAnimSite500.children[1] = Shape502;

HAnimSegment489.children[3] = HAnimSite500;

Shape Shape503 = createNode("Shape");
LineSet LineSet504 = createNode("LineSet");
LineSet504.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate505 = createNode("Coordinate");
Coordinate505.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet504.coord = Coordinate505;

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA ColorRGBA506 = createNode("ColorRGBA");
ColorRGBA506.USE = "HAnimSegmentLineColorRGBA";
LineSet504.color = ColorRGBA506;

Shape503.geometry = LineSet504;

HAnimSegment489.children[4] = Shape503;

HAnimSite HAnimSite507 = createNode("HAnimSite");
HAnimSite507.name = "l_acromion";
HAnimSite507.DEF = "hanim_l_acromion";
HAnimSite507.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor508 = createNode("TouchSensor");
TouchSensor508.description = "HAnimSite l_acromion";
HAnimSite507.children = new MFNode();

HAnimSite507.children[0] = TouchSensor508;

Shape Shape509 = createNode("Shape");
Shape509.USE = "HAnimSiteShape";
HAnimSite507.children[1] = Shape509;

HAnimSegment489.children[5] = HAnimSite507;

HAnimSite HAnimSite510 = createNode("HAnimSite");
HAnimSite510.name = "l_axilla_distal_pt";
HAnimSite510.DEF = "hanim_l_axilla_distal_pt";
HAnimSite510.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor511 = createNode("TouchSensor");
TouchSensor511.description = "HAnimSite l_axilla_distal_pt";
HAnimSite510.children = new MFNode();

HAnimSite510.children[0] = TouchSensor511;

Shape Shape512 = createNode("Shape");
Shape512.USE = "HAnimSiteShape";
HAnimSite510.children[1] = Shape512;

HAnimSegment489.children[6] = HAnimSite510;

HAnimSite HAnimSite513 = createNode("HAnimSite");
HAnimSite513.name = "l_axilla_posterior_folds";
HAnimSite513.DEF = "hanim_l_axilla_posterior_folds";
TouchSensor TouchSensor514 = createNode("TouchSensor");
TouchSensor514.description = "HAnimSite l_axilla_posterior_folds";
HAnimSite513.children = new MFNode();

HAnimSite513.children[0] = TouchSensor514;

Shape Shape515 = createNode("Shape");
Shape515.USE = "HAnimSiteShape";
HAnimSite513.children[1] = Shape515;

HAnimSegment489.children[7] = HAnimSite513;

HAnimSite HAnimSite516 = createNode("HAnimSite");
HAnimSite516.name = "l_axilla_proximal";
HAnimSite516.DEF = "hanim_l_axilla_proximal";
HAnimSite516.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor517 = createNode("TouchSensor");
TouchSensor517.description = "HAnimSite l_axilla_proximal";
HAnimSite516.children = new MFNode();

HAnimSite516.children[0] = TouchSensor517;

Shape Shape518 = createNode("Shape");
Shape518.USE = "HAnimSiteShape";
HAnimSite516.children[1] = Shape518;

HAnimSegment489.children[8] = HAnimSite516;

HAnimSite HAnimSite519 = createNode("HAnimSite");
HAnimSite519.name = "l_clavicale";
HAnimSite519.DEF = "hanim_l_clavicale";
HAnimSite519.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor520 = createNode("TouchSensor");
TouchSensor520.description = "HAnimSite l_clavicale";
HAnimSite519.children = new MFNode();

HAnimSite519.children[0] = TouchSensor520;

Shape Shape521 = createNode("Shape");
Shape521.USE = "HAnimSiteShape";
HAnimSite519.children[1] = Shape521;

HAnimSegment489.children[9] = HAnimSite519;

Shape Shape522 = createNode("Shape");
LineSet LineSet523 = createNode("LineSet");
LineSet523.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate524 = createNode("Coordinate");
Coordinate524.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet523.coord = Coordinate524;

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA ColorRGBA525 = createNode("ColorRGBA");
ColorRGBA525.USE = "HAnimSegmentLineColorRGBA";
LineSet523.color = ColorRGBA525;

Shape522.geometry = LineSet523;

HAnimSegment489.children[10] = Shape522;

HAnimSite HAnimSite526 = createNode("HAnimSite");
HAnimSite526.name = "r_acromion";
HAnimSite526.DEF = "hanim_r_acromion";
HAnimSite526.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor527 = createNode("TouchSensor");
TouchSensor527.description = "HAnimSite r_acromion";
HAnimSite526.children = new MFNode();

HAnimSite526.children[0] = TouchSensor527;

Shape Shape528 = createNode("Shape");
Shape528.USE = "HAnimSiteShape";
HAnimSite526.children[1] = Shape528;

HAnimSegment489.children[11] = HAnimSite526;

HAnimSite HAnimSite529 = createNode("HAnimSite");
HAnimSite529.name = "r_axilla_distal_pt";
HAnimSite529.DEF = "hanim_r_axilla_distal_pt";
HAnimSite529.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor530 = createNode("TouchSensor");
TouchSensor530.description = "HAnimSite r_axilla_distal_pt";
HAnimSite529.children = new MFNode();

HAnimSite529.children[0] = TouchSensor530;

Shape Shape531 = createNode("Shape");
Shape531.USE = "HAnimSiteShape";
HAnimSite529.children[1] = Shape531;

HAnimSegment489.children[12] = HAnimSite529;

HAnimSite HAnimSite532 = createNode("HAnimSite");
HAnimSite532.name = "r_axilla_posterior_folds";
HAnimSite532.DEF = "hanim_r_axilla_posterior_folds";
TouchSensor TouchSensor533 = createNode("TouchSensor");
TouchSensor533.description = "HAnimSite r_axilla_posterior_folds";
HAnimSite532.children = new MFNode();

HAnimSite532.children[0] = TouchSensor533;

Shape Shape534 = createNode("Shape");
Shape534.USE = "HAnimSiteShape";
HAnimSite532.children[1] = Shape534;

HAnimSegment489.children[13] = HAnimSite532;

HAnimSite HAnimSite535 = createNode("HAnimSite");
HAnimSite535.name = "r_axilla_proximal";
HAnimSite535.DEF = "hanim_r_axilla_proximal";
HAnimSite535.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor536 = createNode("TouchSensor");
TouchSensor536.description = "HAnimSite r_axilla_proximal";
HAnimSite535.children = new MFNode();

HAnimSite535.children[0] = TouchSensor536;

Shape Shape537 = createNode("Shape");
Shape537.USE = "HAnimSiteShape";
HAnimSite535.children[1] = Shape537;

HAnimSegment489.children[14] = HAnimSite535;

HAnimSite HAnimSite538 = createNode("HAnimSite");
HAnimSite538.name = "r_clavicale";
HAnimSite538.DEF = "hanim_r_clavicale";
HAnimSite538.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor539 = createNode("TouchSensor");
TouchSensor539.description = "HAnimSite r_clavicale";
HAnimSite538.children = new MFNode();

HAnimSite538.children[0] = TouchSensor539;

Shape Shape540 = createNode("Shape");
Shape540.USE = "HAnimSiteShape";
HAnimSite538.children[1] = Shape540;

HAnimSegment489.children[15] = HAnimSite538;

HAnimJoint488.children = new MFNode();

HAnimJoint488.children[0] = HAnimSegment489;

HAnimJoint HAnimJoint541 = createNode("HAnimJoint");
HAnimJoint541.name = "vc7";
HAnimJoint541.DEF = "hanim_vc7";
HAnimJoint541.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint541.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint541.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment542 = createNode("HAnimSegment");
HAnimSegment542.name = "c7";
HAnimSegment542.DEF = "hanim_c7";
Transform Transform543 = createNode("Transform");
Transform543.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Transform Transform544 = createNode("Transform");
//Empty Transform
Shape Shape545 = createNode("Shape");
Shape545.USE = "HAnimJointShape";
Transform544.child = new undefined();

Transform544.child[0] = Shape545;

Transform543.children = new MFNode();

Transform543.children[0] = Transform544;

HAnimSegment542.children = new MFNode();

HAnimSegment542.children[0] = Transform543;

Shape Shape546 = createNode("Shape");
LineSet LineSet547 = createNode("LineSet");
LineSet547.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate548 = createNode("Coordinate");
Coordinate548.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet547.coord = Coordinate548;

//from vc7 to vc6 vertices 2
ColorRGBA ColorRGBA549 = createNode("ColorRGBA");
ColorRGBA549.USE = "HAnimSegmentLineColorRGBA";
LineSet547.color = ColorRGBA549;

Shape546.geometry = LineSet547;

HAnimSegment542.children[1] = Shape546;

HAnimJoint541.children = new MFNode();

HAnimJoint541.children[0] = HAnimSegment542;

HAnimJoint HAnimJoint550 = createNode("HAnimJoint");
HAnimJoint550.name = "vc6";
HAnimJoint550.DEF = "hanim_vc6";
HAnimJoint550.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint550.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint550.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment551 = createNode("HAnimSegment");
HAnimSegment551.name = "c6";
HAnimSegment551.DEF = "hanim_c6";
Transform Transform552 = createNode("Transform");
Transform552.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Transform Transform553 = createNode("Transform");
//Empty Transform
Shape Shape554 = createNode("Shape");
Shape554.USE = "HAnimJointShape";
Transform553.child = new undefined();

Transform553.child[0] = Shape554;

Transform552.children = new MFNode();

Transform552.children[0] = Transform553;

HAnimSegment551.children = new MFNode();

HAnimSegment551.children[0] = Transform552;

Shape Shape555 = createNode("Shape");
LineSet LineSet556 = createNode("LineSet");
LineSet556.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate557 = createNode("Coordinate");
Coordinate557.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet556.coord = Coordinate557;

//from vc6 to vc5 vertices 2
ColorRGBA ColorRGBA558 = createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
LineSet556.color = ColorRGBA558;

Shape555.geometry = LineSet556;

HAnimSegment551.children[1] = Shape555;

HAnimJoint550.children = new MFNode();

HAnimJoint550.children[0] = HAnimSegment551;

HAnimJoint HAnimJoint559 = createNode("HAnimJoint");
HAnimJoint559.name = "vc5";
HAnimJoint559.DEF = "hanim_vc5";
HAnimJoint559.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint559.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint559.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment560 = createNode("HAnimSegment");
HAnimSegment560.name = "c5";
HAnimSegment560.DEF = "hanim_c5";
Transform Transform561 = createNode("Transform");
Transform561.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
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
Coordinate566.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet565.coord = Coordinate566;

//from vc5 to vc4 vertices 2
ColorRGBA ColorRGBA567 = createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
LineSet565.color = ColorRGBA567;

Shape564.geometry = LineSet565;

HAnimSegment560.children[1] = Shape564;

HAnimJoint559.children = new MFNode();

HAnimJoint559.children[0] = HAnimSegment560;

HAnimJoint HAnimJoint568 = createNode("HAnimJoint");
HAnimJoint568.name = "vc4";
HAnimJoint568.DEF = "hanim_vc4";
HAnimJoint568.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint568.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint568.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment569 = createNode("HAnimSegment");
HAnimSegment569.name = "c4";
HAnimSegment569.DEF = "hanim_c4";
Transform Transform570 = createNode("Transform");
Transform570.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
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
Coordinate575.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet574.coord = Coordinate575;

//from vc4 to vc3 vertices 2
ColorRGBA ColorRGBA576 = createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
LineSet574.color = ColorRGBA576;

Shape573.geometry = LineSet574;

HAnimSegment569.children[1] = Shape573;

HAnimJoint568.children = new MFNode();

HAnimJoint568.children[0] = HAnimSegment569;

HAnimJoint HAnimJoint577 = createNode("HAnimJoint");
HAnimJoint577.name = "vc3";
HAnimJoint577.DEF = "hanim_vc3";
HAnimJoint577.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint577.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint577.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment578 = createNode("HAnimSegment");
HAnimSegment578.name = "c3";
HAnimSegment578.DEF = "hanim_c3";
Transform Transform579 = createNode("Transform");
Transform579.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
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
Coordinate584.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet583.coord = Coordinate584;

//from vc3 to vc2 vertices 2
ColorRGBA ColorRGBA585 = createNode("ColorRGBA");
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA";
LineSet583.color = ColorRGBA585;

Shape582.geometry = LineSet583;

HAnimSegment578.children[1] = Shape582;

HAnimSite HAnimSite586 = createNode("HAnimSite");
HAnimSite586.name = "adams_apple";
HAnimSite586.DEF = "hanim_adams_apple";
TouchSensor TouchSensor587 = createNode("TouchSensor");
TouchSensor587.description = "HAnimSite adams_apple";
HAnimSite586.children = new MFNode();

HAnimSite586.children[0] = TouchSensor587;

Shape Shape588 = createNode("Shape");
Shape588.USE = "HAnimSiteShape";
HAnimSite586.children[1] = Shape588;

HAnimSegment578.children[2] = HAnimSite586;

HAnimJoint577.children = new MFNode();

HAnimJoint577.children[0] = HAnimSegment578;

HAnimJoint HAnimJoint589 = createNode("HAnimJoint");
HAnimJoint589.name = "vc2";
HAnimJoint589.DEF = "hanim_vc2";
HAnimJoint589.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint589.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint589.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment590 = createNode("HAnimSegment");
HAnimSegment590.name = "c2";
HAnimSegment590.DEF = "hanim_c2";
Transform Transform591 = createNode("Transform");
Transform591.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Transform Transform592 = createNode("Transform");
//Empty Transform
Shape Shape593 = createNode("Shape");
Shape593.USE = "HAnimJointShape";
Transform592.child = new undefined();

Transform592.child[0] = Shape593;

Transform591.children = new MFNode();

Transform591.children[0] = Transform592;

HAnimSegment590.children = new MFNode();

HAnimSegment590.children[0] = Transform591;

Shape Shape594 = createNode("Shape");
LineSet LineSet595 = createNode("LineSet");
LineSet595.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate596 = createNode("Coordinate");
Coordinate596.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet595.coord = Coordinate596;

//from vc2 to vc1 vertices 2
ColorRGBA ColorRGBA597 = createNode("ColorRGBA");
ColorRGBA597.USE = "HAnimSegmentLineColorRGBA";
LineSet595.color = ColorRGBA597;

Shape594.geometry = LineSet595;

HAnimSegment590.children[1] = Shape594;

HAnimJoint589.children = new MFNode();

HAnimJoint589.children[0] = HAnimSegment590;

HAnimJoint HAnimJoint598 = createNode("HAnimJoint");
HAnimJoint598.name = "vc1";
HAnimJoint598.DEF = "hanim_vc1";
HAnimJoint598.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint598.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint598.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment599 = createNode("HAnimSegment");
HAnimSegment599.name = "c1";
HAnimSegment599.DEF = "hanim_c1";
Transform Transform600 = createNode("Transform");
Transform600.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Transform Transform601 = createNode("Transform");
//Empty Transform
Shape Shape602 = createNode("Shape");
Shape602.USE = "HAnimJointShape";
Transform601.child = new undefined();

Transform601.child[0] = Shape602;

Transform600.children = new MFNode();

Transform600.children[0] = Transform601;

HAnimSegment599.children = new MFNode();

HAnimSegment599.children[0] = Transform600;

Shape Shape603 = createNode("Shape");
LineSet LineSet604 = createNode("LineSet");
LineSet604.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate605 = createNode("Coordinate");
Coordinate605.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet604.coord = Coordinate605;

//from vc1 to skullbase vertices 2
ColorRGBA ColorRGBA606 = createNode("ColorRGBA");
ColorRGBA606.USE = "HAnimSegmentLineColorRGBA";
LineSet604.color = ColorRGBA606;

Shape603.geometry = LineSet604;

HAnimSegment599.children[1] = Shape603;

HAnimSite HAnimSite607 = createNode("HAnimSite");
HAnimSite607.name = "glabella";
HAnimSite607.DEF = "hanim_glabella";
TouchSensor TouchSensor608 = createNode("TouchSensor");
TouchSensor608.description = "HAnimSite glabella";
HAnimSite607.children = new MFNode();

HAnimSite607.children[0] = TouchSensor608;

Shape Shape609 = createNode("Shape");
Shape609.USE = "HAnimSiteShape";
HAnimSite607.children[1] = Shape609;

HAnimSegment599.children[2] = HAnimSite607;

HAnimSite HAnimSite610 = createNode("HAnimSite");
HAnimSite610.name = "l_ectocanthus";
HAnimSite610.DEF = "hanim_l_ectocanthus";
TouchSensor TouchSensor611 = createNode("TouchSensor");
TouchSensor611.description = "HAnimSite l_ectocanthus";
HAnimSite610.children = new MFNode();

HAnimSite610.children[0] = TouchSensor611;

Shape Shape612 = createNode("Shape");
Shape612.USE = "HAnimSiteShape";
HAnimSite610.children[1] = Shape612;

HAnimSegment599.children[3] = HAnimSite610;

HAnimSite HAnimSite613 = createNode("HAnimSite");
HAnimSite613.name = "l_infraorbitale";
HAnimSite613.DEF = "hanim_l_infraorbitale";
HAnimSite613.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor614 = createNode("TouchSensor");
TouchSensor614.description = "HAnimSite l_infraorbitale";
HAnimSite613.children = new MFNode();

HAnimSite613.children[0] = TouchSensor614;

Shape Shape615 = createNode("Shape");
Shape615.USE = "HAnimSiteShape";
HAnimSite613.children[1] = Shape615;

HAnimSegment599.children[4] = HAnimSite613;

HAnimSite HAnimSite616 = createNode("HAnimSite");
HAnimSite616.name = "l_tragion";
HAnimSite616.DEF = "hanim_l_tragion";
HAnimSite616.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor617 = createNode("TouchSensor");
TouchSensor617.description = "HAnimSite l_tragion";
HAnimSite616.children = new MFNode();

HAnimSite616.children[0] = TouchSensor617;

Shape Shape618 = createNode("Shape");
Shape618.USE = "HAnimSiteShape";
HAnimSite616.children[1] = Shape618;

HAnimSegment599.children[5] = HAnimSite616;

HAnimSite HAnimSite619 = createNode("HAnimSite");
HAnimSite619.name = "nuchale";
HAnimSite619.DEF = "hanim_nuchale";
HAnimSite619.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor620 = createNode("TouchSensor");
TouchSensor620.description = "HAnimSite nuchale";
HAnimSite619.children = new MFNode();

HAnimSite619.children[0] = TouchSensor620;

Shape Shape621 = createNode("Shape");
Shape621.USE = "HAnimSiteShape";
HAnimSite619.children[1] = Shape621;

HAnimSegment599.children[6] = HAnimSite619;

HAnimSite HAnimSite622 = createNode("HAnimSite");
HAnimSite622.name = "opisthocranion";
HAnimSite622.DEF = "hanim_opisthocranion";
TouchSensor TouchSensor623 = createNode("TouchSensor");
TouchSensor623.description = "HAnimSite opisthocranion";
HAnimSite622.children = new MFNode();

HAnimSite622.children[0] = TouchSensor623;

Shape Shape624 = createNode("Shape");
Shape624.USE = "HAnimSiteShape";
HAnimSite622.children[1] = Shape624;

HAnimSegment599.children[7] = HAnimSite622;

HAnimSite HAnimSite625 = createNode("HAnimSite");
HAnimSite625.name = "r_ectocanthus";
HAnimSite625.DEF = "hanim_r_ectocanthus";
TouchSensor TouchSensor626 = createNode("TouchSensor");
TouchSensor626.description = "HAnimSite r_ectocanthus";
HAnimSite625.children = new MFNode();

HAnimSite625.children[0] = TouchSensor626;

Shape Shape627 = createNode("Shape");
Shape627.USE = "HAnimSiteShape";
HAnimSite625.children[1] = Shape627;

HAnimSegment599.children[8] = HAnimSite625;

HAnimSite HAnimSite628 = createNode("HAnimSite");
HAnimSite628.name = "r_infraorbitale";
HAnimSite628.DEF = "hanim_r_infraorbitale";
HAnimSite628.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor629 = createNode("TouchSensor");
TouchSensor629.description = "HAnimSite r_infraorbitale";
HAnimSite628.children = new MFNode();

HAnimSite628.children[0] = TouchSensor629;

Shape Shape630 = createNode("Shape");
Shape630.USE = "HAnimSiteShape";
HAnimSite628.children[1] = Shape630;

HAnimSegment599.children[9] = HAnimSite628;

HAnimSite HAnimSite631 = createNode("HAnimSite");
HAnimSite631.name = "r_tragion";
HAnimSite631.DEF = "hanim_r_tragion";
HAnimSite631.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor632 = createNode("TouchSensor");
TouchSensor632.description = "HAnimSite r_tragion";
HAnimSite631.children = new MFNode();

HAnimSite631.children[0] = TouchSensor632;

Shape Shape633 = createNode("Shape");
Shape633.USE = "HAnimSiteShape";
HAnimSite631.children[1] = Shape633;

HAnimSegment599.children[10] = HAnimSite631;

HAnimSite HAnimSite634 = createNode("HAnimSite");
HAnimSite634.name = "sellion";
HAnimSite634.DEF = "hanim_sellion";
HAnimSite634.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor635 = createNode("TouchSensor");
TouchSensor635.description = "HAnimSite sellion";
HAnimSite634.children = new MFNode();

HAnimSite634.children[0] = TouchSensor635;

Shape Shape636 = createNode("Shape");
Shape636.USE = "HAnimSiteShape";
HAnimSite634.children[1] = Shape636;

HAnimSegment599.children[11] = HAnimSite634;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.name = "skull_vertex";
HAnimSite637.DEF = "hanim_skull_vertex";
TouchSensor TouchSensor638 = createNode("TouchSensor");
TouchSensor638.description = "HAnimSite skull_vertex";
HAnimSite637.children = new MFNode();

HAnimSite637.children[0] = TouchSensor638;

Shape Shape639 = createNode("Shape");
Shape639.USE = "HAnimSiteShape";
HAnimSite637.children[1] = Shape639;

HAnimSegment599.children[12] = HAnimSite637;

HAnimJoint598.children = new MFNode();

HAnimJoint598.children[0] = HAnimSegment599;

HAnimJoint HAnimJoint640 = createNode("HAnimJoint");
HAnimJoint640.name = "skullbase";
HAnimJoint640.DEF = "hanim_skullbase";
HAnimJoint640.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint640.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment641 = createNode("HAnimSegment");
HAnimSegment641.name = "skull";
HAnimSegment641.DEF = "hanim_skull";
Transform Transform642 = createNode("Transform");
Transform642.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
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
Coordinate647.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
LineSet646.coord = Coordinate647;

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA ColorRGBA648 = createNode("ColorRGBA");
ColorRGBA648.USE = "HAnimSegmentLineColorRGBA";
LineSet646.color = ColorRGBA648;

Shape645.geometry = LineSet646;

HAnimSegment641.children[1] = Shape645;

Shape Shape649 = createNode("Shape");
LineSet LineSet650 = createNode("LineSet");
LineSet650.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate651 = createNode("Coordinate");
Coordinate651.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
LineSet650.coord = Coordinate651;

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA ColorRGBA652 = createNode("ColorRGBA");
ColorRGBA652.USE = "HAnimSegmentLineColorRGBA";
LineSet650.color = ColorRGBA652;

Shape649.geometry = LineSet650;

HAnimSegment641.children[2] = Shape649;

Shape Shape653 = createNode("Shape");
LineSet LineSet654 = createNode("LineSet");
LineSet654.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate655 = createNode("Coordinate");
Coordinate655.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
LineSet654.coord = Coordinate655;

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA ColorRGBA656 = createNode("ColorRGBA");
ColorRGBA656.USE = "HAnimSegmentLineColorRGBA";
LineSet654.color = ColorRGBA656;

Shape653.geometry = LineSet654;

HAnimSegment641.children[3] = Shape653;

Shape Shape657 = createNode("Shape");
LineSet LineSet658 = createNode("LineSet");
LineSet658.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate659 = createNode("Coordinate");
Coordinate659.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
LineSet658.coord = Coordinate659;

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA ColorRGBA660 = createNode("ColorRGBA");
ColorRGBA660.USE = "HAnimSegmentLineColorRGBA";
LineSet658.color = ColorRGBA660;

Shape657.geometry = LineSet658;

HAnimSegment641.children[4] = Shape657;

Shape Shape661 = createNode("Shape");
LineSet LineSet662 = createNode("LineSet");
LineSet662.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate663 = createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
LineSet662.coord = Coordinate663;

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA ColorRGBA664 = createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimSegment641.children[5] = Shape661;

Shape Shape665 = createNode("Shape");
LineSet LineSet666 = createNode("LineSet");
LineSet666.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate667 = createNode("Coordinate");
Coordinate667.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
LineSet666.coord = Coordinate667;

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA ColorRGBA668 = createNode("ColorRGBA");
ColorRGBA668.USE = "HAnimSegmentLineColorRGBA";
LineSet666.color = ColorRGBA668;

Shape665.geometry = LineSet666;

HAnimSegment641.children[6] = Shape665;

Shape Shape669 = createNode("Shape");
LineSet LineSet670 = createNode("LineSet");
LineSet670.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate671 = createNode("Coordinate");
Coordinate671.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
LineSet670.coord = Coordinate671;

//from skullbase to temporomandibular vertices 2
ColorRGBA ColorRGBA672 = createNode("ColorRGBA");
ColorRGBA672.USE = "HAnimSegmentLineColorRGBA";
LineSet670.color = ColorRGBA672;

Shape669.geometry = LineSet670;

HAnimSegment641.children[7] = Shape669;

HAnimSite HAnimSite673 = createNode("HAnimSite");
HAnimSite673.name = "l_gonion";
HAnimSite673.DEF = "hanim_l_gonion";
HAnimSite673.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor674 = createNode("TouchSensor");
TouchSensor674.description = "HAnimSite l_gonion";
HAnimSite673.children = new MFNode();

HAnimSite673.children[0] = TouchSensor674;

Shape Shape675 = createNode("Shape");
Shape675.USE = "HAnimSiteShape";
HAnimSite673.children[1] = Shape675;

HAnimSegment641.children[8] = HAnimSite673;

HAnimSite HAnimSite676 = createNode("HAnimSite");
HAnimSite676.name = "menton";
HAnimSite676.DEF = "hanim_menton";
TouchSensor TouchSensor677 = createNode("TouchSensor");
TouchSensor677.description = "HAnimSite menton";
HAnimSite676.children = new MFNode();

HAnimSite676.children[0] = TouchSensor677;

Shape Shape678 = createNode("Shape");
Shape678.USE = "HAnimSiteShape";
HAnimSite676.children[1] = Shape678;

HAnimSegment641.children[9] = HAnimSite676;

HAnimSite HAnimSite679 = createNode("HAnimSite");
HAnimSite679.name = "r_gonion";
HAnimSite679.DEF = "hanim_r_gonion";
HAnimSite679.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor680 = createNode("TouchSensor");
TouchSensor680.description = "HAnimSite r_gonion";
HAnimSite679.children = new MFNode();

HAnimSite679.children[0] = TouchSensor680;

Shape Shape681 = createNode("Shape");
Shape681.USE = "HAnimSiteShape";
HAnimSite679.children[1] = Shape681;

HAnimSegment641.children[10] = HAnimSite679;

HAnimSite HAnimSite682 = createNode("HAnimSite");
HAnimSite682.name = "supramenton";
HAnimSite682.DEF = "hanim_supramenton";
HAnimSite682.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor683 = createNode("TouchSensor");
TouchSensor683.description = "HAnimSite supramenton";
HAnimSite682.children = new MFNode();

HAnimSite682.children[0] = TouchSensor683;

Shape Shape684 = createNode("Shape");
Shape684.USE = "HAnimSiteShape";
HAnimSite682.children[1] = Shape684;

HAnimSegment641.children[11] = HAnimSite682;

HAnimJoint640.children = new MFNode();

HAnimJoint640.children[0] = HAnimSegment641;

HAnimJoint HAnimJoint685 = createNode("HAnimJoint");
HAnimJoint685.name = "l_eyelid_joint";
HAnimJoint685.DEF = "hanim_l_eyelid_joint";
HAnimJoint685.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint685.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint685.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[1] = HAnimJoint685;

HAnimJoint HAnimJoint686 = createNode("HAnimJoint");
HAnimJoint686.name = "r_eyelid_joint";
HAnimJoint686.DEF = "hanim_r_eyelid_joint";
HAnimJoint686.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint686.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint686.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[2] = HAnimJoint686;

HAnimJoint HAnimJoint687 = createNode("HAnimJoint");
HAnimJoint687.name = "l_eyeball_joint";
HAnimJoint687.DEF = "hanim_l_eyeball_joint";
HAnimJoint687.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint687.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint687.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[3] = HAnimJoint687;

HAnimJoint HAnimJoint688 = createNode("HAnimJoint");
HAnimJoint688.name = "r_eyeball_joint";
HAnimJoint688.DEF = "hanim_r_eyeball_joint";
HAnimJoint688.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint688.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint688.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[4] = HAnimJoint688;

HAnimJoint HAnimJoint689 = createNode("HAnimJoint");
HAnimJoint689.name = "l_eyebrow_joint";
HAnimJoint689.DEF = "hanim_l_eyebrow_joint";
HAnimJoint689.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint689.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint689.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[5] = HAnimJoint689;

HAnimJoint HAnimJoint690 = createNode("HAnimJoint");
HAnimJoint690.name = "r_eyebrow_joint";
HAnimJoint690.DEF = "hanim_r_eyebrow_joint";
HAnimJoint690.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint690.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint690.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[6] = HAnimJoint690;

HAnimJoint HAnimJoint691 = createNode("HAnimJoint");
HAnimJoint691.name = "temporomandibular";
HAnimJoint691.DEF = "hanim_temporomandibular";
HAnimJoint691.center = new SFVec3f(new float[-0.0002,1.3043,-0.0865]);
HAnimJoint691.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint691.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.children[7] = HAnimJoint691;

HAnimJoint598.children[1] = HAnimJoint640;

HAnimJoint589.children[1] = HAnimJoint598;

HAnimJoint577.children[1] = HAnimJoint589;

HAnimJoint568.children[1] = HAnimJoint577;

HAnimJoint559.children[1] = HAnimJoint568;

HAnimJoint550.children[1] = HAnimJoint559;

HAnimJoint541.children[1] = HAnimJoint550;

HAnimJoint488.children[1] = HAnimJoint541;

HAnimJoint HAnimJoint692 = createNode("HAnimJoint");
HAnimJoint692.name = "l_sternoclavicular";
HAnimJoint692.DEF = "hanim_l_sternoclavicular";
HAnimJoint692.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint692.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint692.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment693 = createNode("HAnimSegment");
HAnimSegment693.name = "l_clavicle";
HAnimSegment693.DEF = "hanim_l_clavicle";
Transform Transform694 = createNode("Transform");
Transform694.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
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
Coordinate699.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet698.coord = Coordinate699;

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA ColorRGBA700 = createNode("ColorRGBA");
ColorRGBA700.USE = "HAnimSegmentLineColorRGBA";
LineSet698.color = ColorRGBA700;

Shape697.geometry = LineSet698;

HAnimSegment693.children[1] = Shape697;

HAnimJoint692.children = new MFNode();

HAnimJoint692.children[0] = HAnimSegment693;

HAnimJoint HAnimJoint701 = createNode("HAnimJoint");
HAnimJoint701.name = "l_acromioclavicular";
HAnimJoint701.DEF = "hanim_l_acromioclavicular";
HAnimJoint701.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint701.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint701.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment702 = createNode("HAnimSegment");
HAnimSegment702.name = "l_scapula";
HAnimSegment702.DEF = "hanim_l_scapula";
Transform Transform703 = createNode("Transform");
Transform703.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
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
Coordinate708.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet707.coord = Coordinate708;

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA ColorRGBA709 = createNode("ColorRGBA");
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA";
LineSet707.color = ColorRGBA709;

Shape706.geometry = LineSet707;

HAnimSegment702.children[1] = Shape706;

HAnimSite HAnimSite710 = createNode("HAnimSite");
HAnimSite710.name = "l_bideltoid";
HAnimSite710.DEF = "hanim_l_bideltoid";
TouchSensor TouchSensor711 = createNode("TouchSensor");
TouchSensor711.description = "HAnimSite l_bideltoid";
HAnimSite710.children = new MFNode();

HAnimSite710.children[0] = TouchSensor711;

Shape Shape712 = createNode("Shape");
Shape712.USE = "HAnimSiteShape";
HAnimSite710.children[1] = Shape712;

HAnimSegment702.children[2] = HAnimSite710;

HAnimSite HAnimSite713 = createNode("HAnimSite");
HAnimSite713.name = "l_humeral_lateral_epicondyles";
HAnimSite713.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite713.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor714 = createNode("TouchSensor");
TouchSensor714.description = "HAnimSite l_humeral_lateral_epicondyles";
HAnimSite713.children = new MFNode();

HAnimSite713.children[0] = TouchSensor714;

Shape Shape715 = createNode("Shape");
Shape715.USE = "HAnimSiteShape";
HAnimSite713.children[1] = Shape715;

HAnimSegment702.children[3] = HAnimSite713;

HAnimJoint701.children = new MFNode();

HAnimJoint701.children[0] = HAnimSegment702;

HAnimJoint HAnimJoint716 = createNode("HAnimJoint");
HAnimJoint716.name = "l_shoulder";
HAnimJoint716.DEF = "hanim_l_shoulder";
HAnimJoint716.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint716.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint716.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment717 = createNode("HAnimSegment");
HAnimSegment717.name = "l_upperarm";
HAnimSegment717.DEF = "hanim_l_upperarm";
Transform Transform718 = createNode("Transform");
Transform718.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
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
Coordinate723.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet722.coord = Coordinate723;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA724 = createNode("ColorRGBA");
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA724;

Shape721.geometry = LineSet722;

HAnimSegment717.children[1] = Shape721;

HAnimSite HAnimSite725 = createNode("HAnimSite");
HAnimSite725.name = "l_humeral_medial_epicondyles";
HAnimSite725.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite725.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor726 = createNode("TouchSensor");
TouchSensor726.description = "HAnimSite l_humeral_medial_epicondyles";
HAnimSite725.children = new MFNode();

HAnimSite725.children[0] = TouchSensor726;

Shape Shape727 = createNode("Shape");
Shape727.USE = "HAnimSiteShape";
HAnimSite725.children[1] = Shape727;

HAnimSegment717.children[2] = HAnimSite725;

HAnimSite HAnimSite728 = createNode("HAnimSite");
HAnimSite728.name = "l_olecranon";
HAnimSite728.DEF = "hanim_l_olecranon";
HAnimSite728.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor729 = createNode("TouchSensor");
TouchSensor729.description = "HAnimSite l_olecranon";
HAnimSite728.children = new MFNode();

HAnimSite728.children[0] = TouchSensor729;

Shape Shape730 = createNode("Shape");
Shape730.USE = "HAnimSiteShape";
HAnimSite728.children[1] = Shape730;

HAnimSegment717.children[3] = HAnimSite728;

HAnimSite HAnimSite731 = createNode("HAnimSite");
HAnimSite731.name = "l_radial_styloid";
HAnimSite731.DEF = "hanim_l_radial_styloid";
HAnimSite731.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor732 = createNode("TouchSensor");
TouchSensor732.description = "HAnimSite l_radial_styloid";
HAnimSite731.children = new MFNode();

HAnimSite731.children[0] = TouchSensor732;

Shape Shape733 = createNode("Shape");
Shape733.USE = "HAnimSiteShape";
HAnimSite731.children[1] = Shape733;

HAnimSegment717.children[4] = HAnimSite731;

HAnimSite HAnimSite734 = createNode("HAnimSite");
HAnimSite734.name = "l_radiale";
HAnimSite734.DEF = "hanim_l_radiale";
HAnimSite734.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor735 = createNode("TouchSensor");
TouchSensor735.description = "HAnimSite l_radiale";
HAnimSite734.children = new MFNode();

HAnimSite734.children[0] = TouchSensor735;

Shape Shape736 = createNode("Shape");
Shape736.USE = "HAnimSiteShape";
HAnimSite734.children[1] = Shape736;

HAnimSegment717.children[5] = HAnimSite734;

HAnimJoint716.children = new MFNode();

HAnimJoint716.children[0] = HAnimSegment717;

HAnimJoint HAnimJoint737 = createNode("HAnimJoint");
HAnimJoint737.name = "l_elbow";
HAnimJoint737.DEF = "hanim_l_elbow";
HAnimJoint737.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint737.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint737.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment738 = createNode("HAnimSegment");
HAnimSegment738.name = "l_forearm";
HAnimSegment738.DEF = "hanim_l_forearm";
Transform Transform739 = createNode("Transform");
Transform739.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform740 = createNode("Transform");
//Empty Transform
Shape Shape741 = createNode("Shape");
Shape741.USE = "HAnimJointShape";
Transform740.child = new undefined();

Transform740.child[0] = Shape741;

Transform739.children = new MFNode();

Transform739.children[0] = Transform740;

HAnimSegment738.children = new MFNode();

HAnimSegment738.children[0] = Transform739;

Shape Shape742 = createNode("Shape");
LineSet LineSet743 = createNode("LineSet");
LineSet743.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate744 = createNode("Coordinate");
Coordinate744.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet743.coord = Coordinate744;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA745 = createNode("ColorRGBA");
ColorRGBA745.USE = "HAnimSegmentLineColorRGBA";
LineSet743.color = ColorRGBA745;

Shape742.geometry = LineSet743;

HAnimSegment738.children[1] = Shape742;

HAnimSite HAnimSite746 = createNode("HAnimSite");
HAnimSite746.name = "l_ulnar_styloid";
HAnimSite746.DEF = "hanim_l_ulnar_styloid";
HAnimSite746.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor747 = createNode("TouchSensor");
TouchSensor747.description = "HAnimSite l_ulnar_styloid";
HAnimSite746.children = new MFNode();

HAnimSite746.children[0] = TouchSensor747;

Shape Shape748 = createNode("Shape");
Shape748.USE = "HAnimSiteShape";
HAnimSite746.children[1] = Shape748;

HAnimSegment738.children[2] = HAnimSite746;

HAnimJoint737.children = new MFNode();

HAnimJoint737.children[0] = HAnimSegment738;

HAnimJoint HAnimJoint749 = createNode("HAnimJoint");
HAnimJoint749.name = "l_radiocarpal";
HAnimJoint749.DEF = "hanim_l_radiocarpal";
HAnimJoint749.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint749.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint749.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment750 = createNode("HAnimSegment");
HAnimSegment750.name = "l_carpal";
HAnimSegment750.DEF = "hanim_l_carpal";
Transform Transform751 = createNode("Transform");
Transform751.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform751.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform751.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
Transform Transform752 = createNode("Transform");
Transform752.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
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
Coordinate756.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet755.coord = Coordinate756;

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA757 = createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSegmentLineColorRGBA";
LineSet755.color = ColorRGBA757;

Shape754.geometry = LineSet755;

HAnimSegment750.children[1] = Shape754;

Shape Shape758 = createNode("Shape");
LineSet LineSet759 = createNode("LineSet");
LineSet759.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate760 = createNode("Coordinate");
Coordinate760.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet759.coord = Coordinate760;

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA761 = createNode("ColorRGBA");
ColorRGBA761.USE = "HAnimSegmentLineColorRGBA";
LineSet759.color = ColorRGBA761;

Shape758.geometry = LineSet759;

HAnimSegment750.children[2] = Shape758;

HAnimSite HAnimSite762 = createNode("HAnimSite");
HAnimSite762.name = "l_metacarpal_phalanx_2";
HAnimSite762.DEF = "hanim_l_metacarpal_phalanx_2";
HAnimSite762.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor763 = createNode("TouchSensor");
TouchSensor763.description = "HAnimSite l_metacarpal_phalanx_2";
HAnimSite762.children = new MFNode();

HAnimSite762.children[0] = TouchSensor763;

Shape Shape764 = createNode("Shape");
Shape764.USE = "HAnimSiteShape";
HAnimSite762.children[1] = Shape764;

HAnimSegment750.children[3] = HAnimSite762;

Shape Shape765 = createNode("Shape");
LineSet LineSet766 = createNode("LineSet");
LineSet766.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate767 = createNode("Coordinate");
Coordinate767.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet766.coord = Coordinate767;

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA768 = createNode("ColorRGBA");
ColorRGBA768.USE = "HAnimSegmentLineColorRGBA";
LineSet766.color = ColorRGBA768;

Shape765.geometry = LineSet766;

HAnimSegment750.children[4] = Shape765;

HAnimSite HAnimSite769 = createNode("HAnimSite");
HAnimSite769.name = "l_metacarpal_phalanx_3";
HAnimSite769.DEF = "hanim_l_metacarpal_phalanx_3";
TouchSensor TouchSensor770 = createNode("TouchSensor");
TouchSensor770.description = "HAnimSite l_metacarpal_phalanx_3";
HAnimSite769.children = new MFNode();

HAnimSite769.children[0] = TouchSensor770;

Shape Shape771 = createNode("Shape");
Shape771.USE = "HAnimSiteShape";
HAnimSite769.children[1] = Shape771;

HAnimSegment750.children[5] = HAnimSite769;

Shape Shape772 = createNode("Shape");
LineSet LineSet773 = createNode("LineSet");
LineSet773.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate774 = createNode("Coordinate");
Coordinate774.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet773.coord = Coordinate774;

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA775 = createNode("ColorRGBA");
ColorRGBA775.USE = "HAnimSegmentLineColorRGBA";
LineSet773.color = ColorRGBA775;

Shape772.geometry = LineSet773;

HAnimSegment750.children[6] = Shape772;

Shape Shape776 = createNode("Shape");
LineSet LineSet777 = createNode("LineSet");
LineSet777.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate778 = createNode("Coordinate");
Coordinate778.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet777.coord = Coordinate778;

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA779 = createNode("ColorRGBA");
ColorRGBA779.USE = "HAnimSegmentLineColorRGBA";
LineSet777.color = ColorRGBA779;

Shape776.geometry = LineSet777;

HAnimSegment750.children[7] = Shape776;

HAnimSite HAnimSite780 = createNode("HAnimSite");
HAnimSite780.name = "l_metacarpal_phalanx_5";
HAnimSite780.DEF = "hanim_l_metacarpal_phalanx_5";
HAnimSite780.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor781 = createNode("TouchSensor");
TouchSensor781.description = "HAnimSite l_metacarpal_phalanx_5";
HAnimSite780.children = new MFNode();

HAnimSite780.children[0] = TouchSensor781;

Shape Shape782 = createNode("Shape");
Shape782.USE = "HAnimSiteShape";
HAnimSite780.children[1] = Shape782;

HAnimSegment750.children[8] = HAnimSite780;

HAnimJoint749.children = new MFNode();

HAnimJoint749.children[0] = HAnimSegment750;

HAnimJoint HAnimJoint783 = createNode("HAnimJoint");
HAnimJoint783.name = "l_carpometacarpal_1";
HAnimJoint783.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint783.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint783.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint783.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment784 = createNode("HAnimSegment");
HAnimSegment784.name = "l_metacarpal_1";
HAnimSegment784.DEF = "hanim_l_metacarpal_1";
Transform Transform785 = createNode("Transform");
Transform785.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
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
Coordinate790.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet789.coord = Coordinate790;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA791 = createNode("ColorRGBA");
ColorRGBA791.USE = "HAnimSegmentLineColorRGBA";
LineSet789.color = ColorRGBA791;

Shape788.geometry = LineSet789;

HAnimSegment784.children[1] = Shape788;

HAnimJoint783.children = new MFNode();

HAnimJoint783.children[0] = HAnimSegment784;

HAnimJoint HAnimJoint792 = createNode("HAnimJoint");
HAnimJoint792.name = "l_metacarpophalangeal_1";
HAnimJoint792.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint792.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint792.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint792.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment793 = createNode("HAnimSegment");
HAnimSegment793.name = "l_carpal_proximal_phalanx_1";
HAnimSegment793.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform794 = createNode("Transform");
Transform794.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
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
Coordinate799.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet798.coord = Coordinate799;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA800 = createNode("ColorRGBA");
ColorRGBA800.USE = "HAnimSegmentLineColorRGBA";
LineSet798.color = ColorRGBA800;

Shape797.geometry = LineSet798;

HAnimSegment793.children[1] = Shape797;

HAnimSite HAnimSite801 = createNode("HAnimSite");
HAnimSite801.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite801.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor802 = createNode("TouchSensor");
TouchSensor802.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite801.children = new MFNode();

HAnimSite801.children[0] = TouchSensor802;

Shape Shape803 = createNode("Shape");
Shape803.USE = "HAnimSiteShape";
HAnimSite801.children[1] = Shape803;

HAnimSegment793.children[2] = HAnimSite801;

HAnimJoint792.children = new MFNode();

HAnimJoint792.children[0] = HAnimSegment793;

HAnimJoint HAnimJoint804 = createNode("HAnimJoint");
HAnimJoint804.name = "l_carpal_interphalangeal_1";
HAnimJoint804.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint804.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint804.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint804.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint792.children[1] = HAnimJoint804;

HAnimJoint783.children[1] = HAnimJoint792;

HAnimJoint749.children[1] = HAnimJoint783;

HAnimJoint HAnimJoint805 = createNode("HAnimJoint");
HAnimJoint805.name = "l_carpometacarpal_2";
HAnimJoint805.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint805.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint805.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint805.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment806 = createNode("HAnimSegment");
HAnimSegment806.name = "l_metacarpal_2";
HAnimSegment806.DEF = "hanim_l_metacarpal_2";
Transform Transform807 = createNode("Transform");
Transform807.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Transform Transform808 = createNode("Transform");
//Empty Transform
Shape Shape809 = createNode("Shape");
Shape809.USE = "HAnimJointShape";
Transform808.child = new undefined();

Transform808.child[0] = Shape809;

Transform807.children = new MFNode();

Transform807.children[0] = Transform808;

HAnimSegment806.children = new MFNode();

HAnimSegment806.children[0] = Transform807;

Shape Shape810 = createNode("Shape");
LineSet LineSet811 = createNode("LineSet");
LineSet811.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate812 = createNode("Coordinate");
Coordinate812.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet811.coord = Coordinate812;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA813 = createNode("ColorRGBA");
ColorRGBA813.USE = "HAnimSegmentLineColorRGBA";
LineSet811.color = ColorRGBA813;

Shape810.geometry = LineSet811;

HAnimSegment806.children[1] = Shape810;

HAnimJoint805.children = new MFNode();

HAnimJoint805.children[0] = HAnimSegment806;

HAnimJoint HAnimJoint814 = createNode("HAnimJoint");
HAnimJoint814.name = "l_metacarpophalangeal_2";
HAnimJoint814.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint814.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint814.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint814.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment815 = createNode("HAnimSegment");
HAnimSegment815.name = "l_carpal_proximal_phalanx_2";
HAnimSegment815.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform816 = createNode("Transform");
Transform816.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform817 = createNode("Transform");
//Empty Transform
Shape Shape818 = createNode("Shape");
Shape818.USE = "HAnimJointShape";
Transform817.child = new undefined();

Transform817.child[0] = Shape818;

Transform816.children = new MFNode();

Transform816.children[0] = Transform817;

HAnimSegment815.children = new MFNode();

HAnimSegment815.children[0] = Transform816;

Shape Shape819 = createNode("Shape");
LineSet LineSet820 = createNode("LineSet");
LineSet820.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate821 = createNode("Coordinate");
Coordinate821.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet820.coord = Coordinate821;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA822 = createNode("ColorRGBA");
ColorRGBA822.USE = "HAnimSegmentLineColorRGBA";
LineSet820.color = ColorRGBA822;

Shape819.geometry = LineSet820;

HAnimSegment815.children[1] = Shape819;

HAnimJoint814.children = new MFNode();

HAnimJoint814.children[0] = HAnimSegment815;

HAnimJoint HAnimJoint823 = createNode("HAnimJoint");
HAnimJoint823.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint823.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint823.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint823.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint823.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment824 = createNode("HAnimSegment");
HAnimSegment824.name = "l_carpal_middle_phalanx_2";
HAnimSegment824.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform825 = createNode("Transform");
Transform825.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform826 = createNode("Transform");
//Empty Transform
Shape Shape827 = createNode("Shape");
Shape827.USE = "HAnimJointShape";
Transform826.child = new undefined();

Transform826.child[0] = Shape827;

Transform825.children = new MFNode();

Transform825.children[0] = Transform826;

HAnimSegment824.children = new MFNode();

HAnimSegment824.children[0] = Transform825;

Shape Shape828 = createNode("Shape");
LineSet LineSet829 = createNode("LineSet");
LineSet829.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate830 = createNode("Coordinate");
Coordinate830.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet829.coord = Coordinate830;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA831 = createNode("ColorRGBA");
ColorRGBA831.USE = "HAnimSegmentLineColorRGBA";
LineSet829.color = ColorRGBA831;

Shape828.geometry = LineSet829;

HAnimSegment824.children[1] = Shape828;

HAnimSite HAnimSite832 = createNode("HAnimSite");
HAnimSite832.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite832.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor833 = createNode("TouchSensor");
TouchSensor833.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite832.children = new MFNode();

HAnimSite832.children[0] = TouchSensor833;

Shape Shape834 = createNode("Shape");
Shape834.USE = "HAnimSiteShape";
HAnimSite832.children[1] = Shape834;

HAnimSegment824.children[2] = HAnimSite832;

HAnimSite HAnimSite835 = createNode("HAnimSite");
HAnimSite835.name = "l_dactylion";
HAnimSite835.DEF = "hanim_l_dactylion";
HAnimSite835.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor836 = createNode("TouchSensor");
TouchSensor836.description = "HAnimSite l_dactylion";
HAnimSite835.children = new MFNode();

HAnimSite835.children[0] = TouchSensor836;

Shape Shape837 = createNode("Shape");
Shape837.USE = "HAnimSiteShape";
HAnimSite835.children[1] = Shape837;

HAnimSegment824.children[3] = HAnimSite835;

HAnimJoint823.children = new MFNode();

HAnimJoint823.children[0] = HAnimSegment824;

HAnimJoint HAnimJoint838 = createNode("HAnimJoint");
HAnimJoint838.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint838.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint838.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint838.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint838.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint823.children[1] = HAnimJoint838;

HAnimJoint814.children[1] = HAnimJoint823;

HAnimJoint805.children[1] = HAnimJoint814;

HAnimJoint749.children[2] = HAnimJoint805;

HAnimJoint HAnimJoint839 = createNode("HAnimJoint");
HAnimJoint839.name = "l_carpometacarpal_3";
HAnimJoint839.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint839.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint839.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint839.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment840 = createNode("HAnimSegment");
HAnimSegment840.name = "l_metacarpal_3";
HAnimSegment840.DEF = "hanim_l_metacarpal_3";
Transform Transform841 = createNode("Transform");
Transform841.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
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
Coordinate846.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet845.coord = Coordinate846;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA847 = createNode("ColorRGBA");
ColorRGBA847.USE = "HAnimSegmentLineColorRGBA";
LineSet845.color = ColorRGBA847;

Shape844.geometry = LineSet845;

HAnimSegment840.children[1] = Shape844;

HAnimJoint839.children = new MFNode();

HAnimJoint839.children[0] = HAnimSegment840;

HAnimJoint HAnimJoint848 = createNode("HAnimJoint");
HAnimJoint848.name = "l_metacarpophalangeal_3";
HAnimJoint848.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint848.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint848.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint848.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment849 = createNode("HAnimSegment");
HAnimSegment849.name = "l_carpal_proximal_phalanx_3";
HAnimSegment849.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform850 = createNode("Transform");
Transform850.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Transform Transform851 = createNode("Transform");
//Empty Transform
Shape Shape852 = createNode("Shape");
Shape852.USE = "HAnimJointShape";
Transform851.child = new undefined();

Transform851.child[0] = Shape852;

Transform850.children = new MFNode();

Transform850.children[0] = Transform851;

HAnimSegment849.children = new MFNode();

HAnimSegment849.children[0] = Transform850;

Shape Shape853 = createNode("Shape");
LineSet LineSet854 = createNode("LineSet");
LineSet854.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate855 = createNode("Coordinate");
Coordinate855.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet854.coord = Coordinate855;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA856 = createNode("ColorRGBA");
ColorRGBA856.USE = "HAnimSegmentLineColorRGBA";
LineSet854.color = ColorRGBA856;

Shape853.geometry = LineSet854;

HAnimSegment849.children[1] = Shape853;

HAnimJoint848.children = new MFNode();

HAnimJoint848.children[0] = HAnimSegment849;

HAnimJoint HAnimJoint857 = createNode("HAnimJoint");
HAnimJoint857.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint857.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint857.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint857.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint857.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment858 = createNode("HAnimSegment");
HAnimSegment858.name = "l_carpal_middle_phalanx_3";
HAnimSegment858.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform859 = createNode("Transform");
Transform859.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Transform Transform860 = createNode("Transform");
//Empty Transform
Shape Shape861 = createNode("Shape");
Shape861.USE = "HAnimJointShape";
Transform860.child = new undefined();

Transform860.child[0] = Shape861;

Transform859.children = new MFNode();

Transform859.children[0] = Transform860;

HAnimSegment858.children = new MFNode();

HAnimSegment858.children[0] = Transform859;

Shape Shape862 = createNode("Shape");
LineSet LineSet863 = createNode("LineSet");
LineSet863.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate864 = createNode("Coordinate");
Coordinate864.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet863.coord = Coordinate864;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA865 = createNode("ColorRGBA");
ColorRGBA865.USE = "HAnimSegmentLineColorRGBA";
LineSet863.color = ColorRGBA865;

Shape862.geometry = LineSet863;

HAnimSegment858.children[1] = Shape862;

HAnimSite HAnimSite866 = createNode("HAnimSite");
HAnimSite866.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite866.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor867 = createNode("TouchSensor");
TouchSensor867.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite866.children = new MFNode();

HAnimSite866.children[0] = TouchSensor867;

Shape Shape868 = createNode("Shape");
Shape868.USE = "HAnimSiteShape";
HAnimSite866.children[1] = Shape868;

HAnimSegment858.children[2] = HAnimSite866;

HAnimJoint857.children = new MFNode();

HAnimJoint857.children[0] = HAnimSegment858;

HAnimJoint HAnimJoint869 = createNode("HAnimJoint");
HAnimJoint869.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint869.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint869.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint869.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint869.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint857.children[1] = HAnimJoint869;

HAnimJoint848.children[1] = HAnimJoint857;

HAnimJoint839.children[1] = HAnimJoint848;

HAnimJoint749.children[3] = HAnimJoint839;

HAnimJoint HAnimJoint870 = createNode("HAnimJoint");
HAnimJoint870.name = "l_carpometacarpal_4";
HAnimJoint870.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint870.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint870.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint870.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment871 = createNode("HAnimSegment");
HAnimSegment871.name = "l_metacarpal_4";
HAnimSegment871.DEF = "hanim_l_metacarpal_4";
Transform Transform872 = createNode("Transform");
Transform872.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Transform Transform873 = createNode("Transform");
//Empty Transform
Shape Shape874 = createNode("Shape");
Shape874.USE = "HAnimJointShape";
Transform873.child = new undefined();

Transform873.child[0] = Shape874;

Transform872.children = new MFNode();

Transform872.children[0] = Transform873;

HAnimSegment871.children = new MFNode();

HAnimSegment871.children[0] = Transform872;

Shape Shape875 = createNode("Shape");
LineSet LineSet876 = createNode("LineSet");
LineSet876.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate877 = createNode("Coordinate");
Coordinate877.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet876.coord = Coordinate877;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA878 = createNode("ColorRGBA");
ColorRGBA878.USE = "HAnimSegmentLineColorRGBA";
LineSet876.color = ColorRGBA878;

Shape875.geometry = LineSet876;

HAnimSegment871.children[1] = Shape875;

HAnimJoint870.children = new MFNode();

HAnimJoint870.children[0] = HAnimSegment871;

HAnimJoint HAnimJoint879 = createNode("HAnimJoint");
HAnimJoint879.name = "l_metacarpophalangeal_4";
HAnimJoint879.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint879.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint879.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint879.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment880 = createNode("HAnimSegment");
HAnimSegment880.name = "l_carpal_proximal_phalanx_4";
HAnimSegment880.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform881 = createNode("Transform");
Transform881.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform882 = createNode("Transform");
//Empty Transform
Shape Shape883 = createNode("Shape");
Shape883.USE = "HAnimJointShape";
Transform882.child = new undefined();

Transform882.child[0] = Shape883;

Transform881.children = new MFNode();

Transform881.children[0] = Transform882;

HAnimSegment880.children = new MFNode();

HAnimSegment880.children[0] = Transform881;

Shape Shape884 = createNode("Shape");
LineSet LineSet885 = createNode("LineSet");
LineSet885.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate886 = createNode("Coordinate");
Coordinate886.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet885.coord = Coordinate886;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA887 = createNode("ColorRGBA");
ColorRGBA887.USE = "HAnimSegmentLineColorRGBA";
LineSet885.color = ColorRGBA887;

Shape884.geometry = LineSet885;

HAnimSegment880.children[1] = Shape884;

HAnimJoint879.children = new MFNode();

HAnimJoint879.children[0] = HAnimSegment880;

HAnimJoint HAnimJoint888 = createNode("HAnimJoint");
HAnimJoint888.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint888.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint888.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint888.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint888.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment889 = createNode("HAnimSegment");
HAnimSegment889.name = "l_carpal_middle_phalanx_4";
HAnimSegment889.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform890 = createNode("Transform");
Transform890.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
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
Coordinate895.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet894.coord = Coordinate895;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA896 = createNode("ColorRGBA");
ColorRGBA896.USE = "HAnimSegmentLineColorRGBA";
LineSet894.color = ColorRGBA896;

Shape893.geometry = LineSet894;

HAnimSegment889.children[1] = Shape893;

HAnimSite HAnimSite897 = createNode("HAnimSite");
HAnimSite897.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite897.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor898 = createNode("TouchSensor");
TouchSensor898.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite897.children = new MFNode();

HAnimSite897.children[0] = TouchSensor898;

Shape Shape899 = createNode("Shape");
Shape899.USE = "HAnimSiteShape";
HAnimSite897.children[1] = Shape899;

HAnimSegment889.children[2] = HAnimSite897;

HAnimJoint888.children = new MFNode();

HAnimJoint888.children[0] = HAnimSegment889;

HAnimJoint HAnimJoint900 = createNode("HAnimJoint");
HAnimJoint900.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint900.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint900.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint900.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint900.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint888.children[1] = HAnimJoint900;

HAnimJoint879.children[1] = HAnimJoint888;

HAnimJoint870.children[1] = HAnimJoint879;

HAnimJoint749.children[4] = HAnimJoint870;

HAnimJoint HAnimJoint901 = createNode("HAnimJoint");
HAnimJoint901.name = "l_carpometacarpal_5";
HAnimJoint901.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint901.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint901.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint901.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment902 = createNode("HAnimSegment");
HAnimSegment902.name = "l_metacarpal_5";
HAnimSegment902.DEF = "hanim_l_metacarpal_5";
Transform Transform903 = createNode("Transform");
Transform903.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
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
Coordinate908.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet907.coord = Coordinate908;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA909 = createNode("ColorRGBA");
ColorRGBA909.USE = "HAnimSegmentLineColorRGBA";
LineSet907.color = ColorRGBA909;

Shape906.geometry = LineSet907;

HAnimSegment902.children[1] = Shape906;

HAnimJoint901.children = new MFNode();

HAnimJoint901.children[0] = HAnimSegment902;

HAnimJoint HAnimJoint910 = createNode("HAnimJoint");
HAnimJoint910.name = "l_metacarpophalangeal_5";
HAnimJoint910.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint910.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint910.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint910.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment911 = createNode("HAnimSegment");
HAnimSegment911.name = "l_carpal_proximal_phalanx_5";
HAnimSegment911.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform912 = createNode("Transform");
Transform912.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
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
Coordinate917.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet916.coord = Coordinate917;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA918 = createNode("ColorRGBA");
ColorRGBA918.USE = "HAnimSegmentLineColorRGBA";
LineSet916.color = ColorRGBA918;

Shape915.geometry = LineSet916;

HAnimSegment911.children[1] = Shape915;

HAnimJoint910.children = new MFNode();

HAnimJoint910.children[0] = HAnimSegment911;

HAnimJoint HAnimJoint919 = createNode("HAnimJoint");
HAnimJoint919.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint919.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint919.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint919.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint919.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment920 = createNode("HAnimSegment");
HAnimSegment920.name = "l_carpal_middle_phalanx_5";
HAnimSegment920.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform921 = createNode("Transform");
Transform921.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform922 = createNode("Transform");
//Empty Transform
Shape Shape923 = createNode("Shape");
Shape923.USE = "HAnimJointShape";
Transform922.child = new undefined();

Transform922.child[0] = Shape923;

Transform921.children = new MFNode();

Transform921.children[0] = Transform922;

HAnimSegment920.children = new MFNode();

HAnimSegment920.children[0] = Transform921;

Shape Shape924 = createNode("Shape");
LineSet LineSet925 = createNode("LineSet");
LineSet925.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate926 = createNode("Coordinate");
Coordinate926.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet925.coord = Coordinate926;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA927 = createNode("ColorRGBA");
ColorRGBA927.USE = "HAnimSegmentLineColorRGBA";
LineSet925.color = ColorRGBA927;

Shape924.geometry = LineSet925;

HAnimSegment920.children[1] = Shape924;

HAnimSite HAnimSite928 = createNode("HAnimSite");
HAnimSite928.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite928.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor929 = createNode("TouchSensor");
TouchSensor929.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite928.children = new MFNode();

HAnimSite928.children[0] = TouchSensor929;

Shape Shape930 = createNode("Shape");
Shape930.USE = "HAnimSiteShape";
HAnimSite928.children[1] = Shape930;

HAnimSegment920.children[2] = HAnimSite928;

HAnimJoint919.children = new MFNode();

HAnimJoint919.children[0] = HAnimSegment920;

HAnimJoint HAnimJoint931 = createNode("HAnimJoint");
HAnimJoint931.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint931.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint931.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint931.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint931.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint919.children[1] = HAnimJoint931;

HAnimJoint910.children[1] = HAnimJoint919;

HAnimJoint901.children[1] = HAnimJoint910;

HAnimJoint749.children[5] = HAnimJoint901;

HAnimJoint737.children[1] = HAnimJoint749;

HAnimJoint716.children[1] = HAnimJoint737;

HAnimJoint701.children[1] = HAnimJoint716;

HAnimJoint692.children[1] = HAnimJoint701;

HAnimJoint488.children[2] = HAnimJoint692;

HAnimJoint HAnimJoint932 = createNode("HAnimJoint");
HAnimJoint932.name = "r_sternoclavicular";
HAnimJoint932.DEF = "hanim_r_sternoclavicular";
HAnimJoint932.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint932.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint932.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment933 = createNode("HAnimSegment");
HAnimSegment933.name = "r_clavicle";
HAnimSegment933.DEF = "hanim_r_clavicle";
Transform Transform934 = createNode("Transform");
Transform934.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
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
Coordinate939.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet938.coord = Coordinate939;

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA ColorRGBA940 = createNode("ColorRGBA");
ColorRGBA940.USE = "HAnimSegmentLineColorRGBA";
LineSet938.color = ColorRGBA940;

Shape937.geometry = LineSet938;

HAnimSegment933.children[1] = Shape937;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

HAnimJoint HAnimJoint941 = createNode("HAnimJoint");
HAnimJoint941.name = "r_acromioclavicular";
HAnimJoint941.DEF = "hanim_r_acromioclavicular";
HAnimJoint941.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint941.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint941.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment942 = createNode("HAnimSegment");
HAnimSegment942.name = "r_scapula";
HAnimSegment942.DEF = "hanim_r_scapula";
Transform Transform943 = createNode("Transform");
Transform943.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
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
Coordinate948.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet947.coord = Coordinate948;

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA ColorRGBA949 = createNode("ColorRGBA");
ColorRGBA949.USE = "HAnimSegmentLineColorRGBA";
LineSet947.color = ColorRGBA949;

Shape946.geometry = LineSet947;

HAnimSegment942.children[1] = Shape946;

HAnimSite HAnimSite950 = createNode("HAnimSite");
HAnimSite950.name = "r_bideltoid";
HAnimSite950.DEF = "hanim_r_bideltoid";
TouchSensor TouchSensor951 = createNode("TouchSensor");
TouchSensor951.description = "HAnimSite r_bideltoid";
HAnimSite950.children = new MFNode();

HAnimSite950.children[0] = TouchSensor951;

Shape Shape952 = createNode("Shape");
Shape952.USE = "HAnimSiteShape";
HAnimSite950.children[1] = Shape952;

HAnimSegment942.children[2] = HAnimSite950;

HAnimSite HAnimSite953 = createNode("HAnimSite");
HAnimSite953.name = "r_humeral_lateral_epicondyles";
HAnimSite953.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite953.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor954 = createNode("TouchSensor");
TouchSensor954.description = "HAnimSite r_humeral_lateral_epicondyles";
HAnimSite953.children = new MFNode();

HAnimSite953.children[0] = TouchSensor954;

Shape Shape955 = createNode("Shape");
Shape955.USE = "HAnimSiteShape";
HAnimSite953.children[1] = Shape955;

HAnimSegment942.children[3] = HAnimSite953;

HAnimJoint941.children = new MFNode();

HAnimJoint941.children[0] = HAnimSegment942;

HAnimJoint HAnimJoint956 = createNode("HAnimJoint");
HAnimJoint956.name = "r_shoulder";
HAnimJoint956.DEF = "hanim_r_shoulder";
HAnimJoint956.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint956.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint956.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment957 = createNode("HAnimSegment");
HAnimSegment957.name = "r_upperarm";
HAnimSegment957.DEF = "hanim_r_upperarm";
Transform Transform958 = createNode("Transform");
Transform958.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform959 = createNode("Transform");
//Empty Transform
Shape Shape960 = createNode("Shape");
Shape960.USE = "HAnimJointShape";
Transform959.child = new undefined();

Transform959.child[0] = Shape960;

Transform958.children = new MFNode();

Transform958.children[0] = Transform959;

HAnimSegment957.children = new MFNode();

HAnimSegment957.children[0] = Transform958;

Shape Shape961 = createNode("Shape");
LineSet LineSet962 = createNode("LineSet");
LineSet962.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate963 = createNode("Coordinate");
Coordinate963.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet962.coord = Coordinate963;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA964 = createNode("ColorRGBA");
ColorRGBA964.USE = "HAnimSegmentLineColorRGBA";
LineSet962.color = ColorRGBA964;

Shape961.geometry = LineSet962;

HAnimSegment957.children[1] = Shape961;

HAnimSite HAnimSite965 = createNode("HAnimSite");
HAnimSite965.name = "r_humeral_medial_epicondyles";
HAnimSite965.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite965.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor966 = createNode("TouchSensor");
TouchSensor966.description = "HAnimSite r_humeral_medial_epicondyles";
HAnimSite965.children = new MFNode();

HAnimSite965.children[0] = TouchSensor966;

Shape Shape967 = createNode("Shape");
Shape967.USE = "HAnimSiteShape";
HAnimSite965.children[1] = Shape967;

HAnimSegment957.children[2] = HAnimSite965;

HAnimSite HAnimSite968 = createNode("HAnimSite");
HAnimSite968.name = "r_olecranon";
HAnimSite968.DEF = "hanim_r_olecranon";
HAnimSite968.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor969 = createNode("TouchSensor");
TouchSensor969.description = "HAnimSite r_olecranon";
HAnimSite968.children = new MFNode();

HAnimSite968.children[0] = TouchSensor969;

Shape Shape970 = createNode("Shape");
Shape970.USE = "HAnimSiteShape";
HAnimSite968.children[1] = Shape970;

HAnimSegment957.children[3] = HAnimSite968;

HAnimSite HAnimSite971 = createNode("HAnimSite");
HAnimSite971.name = "r_radial_styloid";
HAnimSite971.DEF = "hanim_r_radial_styloid";
HAnimSite971.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor972 = createNode("TouchSensor");
TouchSensor972.description = "HAnimSite r_radial_styloid";
HAnimSite971.children = new MFNode();

HAnimSite971.children[0] = TouchSensor972;

Shape Shape973 = createNode("Shape");
Shape973.USE = "HAnimSiteShape";
HAnimSite971.children[1] = Shape973;

HAnimSegment957.children[4] = HAnimSite971;

HAnimSite HAnimSite974 = createNode("HAnimSite");
HAnimSite974.name = "r_radiale";
HAnimSite974.DEF = "hanim_r_radiale";
HAnimSite974.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor975 = createNode("TouchSensor");
TouchSensor975.description = "HAnimSite r_radiale";
HAnimSite974.children = new MFNode();

HAnimSite974.children[0] = TouchSensor975;

Shape Shape976 = createNode("Shape");
Shape976.USE = "HAnimSiteShape";
HAnimSite974.children[1] = Shape976;

HAnimSegment957.children[5] = HAnimSite974;

HAnimJoint956.children = new MFNode();

HAnimJoint956.children[0] = HAnimSegment957;

HAnimJoint HAnimJoint977 = createNode("HAnimJoint");
HAnimJoint977.name = "r_elbow";
HAnimJoint977.DEF = "hanim_r_elbow";
HAnimJoint977.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint977.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint977.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment978 = createNode("HAnimSegment");
HAnimSegment978.name = "r_forearm";
HAnimSegment978.DEF = "hanim_r_forearm";
Transform Transform979 = createNode("Transform");
Transform979.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
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
Coordinate984.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet983.coord = Coordinate984;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA985 = createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA";
LineSet983.color = ColorRGBA985;

Shape982.geometry = LineSet983;

HAnimSegment978.children[1] = Shape982;

HAnimSite HAnimSite986 = createNode("HAnimSite");
HAnimSite986.name = "r_ulnar_styloid";
HAnimSite986.DEF = "hanim_r_ulnar_styloid";
HAnimSite986.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor987 = createNode("TouchSensor");
TouchSensor987.description = "HAnimSite r_ulnar_styloid";
HAnimSite986.children = new MFNode();

HAnimSite986.children[0] = TouchSensor987;

Shape Shape988 = createNode("Shape");
Shape988.USE = "HAnimSiteShape";
HAnimSite986.children[1] = Shape988;

HAnimSegment978.children[2] = HAnimSite986;

HAnimJoint977.children = new MFNode();

HAnimJoint977.children[0] = HAnimSegment978;

HAnimJoint HAnimJoint989 = createNode("HAnimJoint");
HAnimJoint989.name = "r_radiocarpal";
HAnimJoint989.DEF = "hanim_r_radiocarpal";
HAnimJoint989.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint989.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint989.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment990 = createNode("HAnimSegment");
HAnimSegment990.name = "r_carpal";
HAnimSegment990.DEF = "hanim_r_carpal";
Transform Transform991 = createNode("Transform");
Transform991.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform991.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform991.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
Transform Transform992 = createNode("Transform");
Transform992.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
Shape Shape993 = createNode("Shape");
Shape993.USE = "HAnimJointShape";
Transform992.child = new undefined();

Transform992.child[0] = Shape993;

Transform991.children = new MFNode();

Transform991.children[0] = Transform992;

HAnimSegment990.children = new MFNode();

HAnimSegment990.children[0] = Transform991;

Shape Shape994 = createNode("Shape");
LineSet LineSet995 = createNode("LineSet");
LineSet995.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate996 = createNode("Coordinate");
Coordinate996.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet995.coord = Coordinate996;

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA997 = createNode("ColorRGBA");
ColorRGBA997.USE = "HAnimSegmentLineColorRGBA";
LineSet995.color = ColorRGBA997;

Shape994.geometry = LineSet995;

HAnimSegment990.children[1] = Shape994;

Shape Shape998 = createNode("Shape");
LineSet LineSet999 = createNode("LineSet");
LineSet999.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1000 = createNode("Coordinate");
Coordinate1000.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet999.coord = Coordinate1000;

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1001 = createNode("ColorRGBA");
ColorRGBA1001.USE = "HAnimSegmentLineColorRGBA";
LineSet999.color = ColorRGBA1001;

Shape998.geometry = LineSet999;

HAnimSegment990.children[2] = Shape998;

HAnimSite HAnimSite1002 = createNode("HAnimSite");
HAnimSite1002.name = "r_metacarpal_phalanx_2";
HAnimSite1002.DEF = "hanim_r_metacarpal_phalanx_2";
HAnimSite1002.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1003 = createNode("TouchSensor");
TouchSensor1003.description = "HAnimSite r_metacarpal_phalanx_2";
HAnimSite1002.children = new MFNode();

HAnimSite1002.children[0] = TouchSensor1003;

Shape Shape1004 = createNode("Shape");
Shape1004.USE = "HAnimSiteShape";
HAnimSite1002.children[1] = Shape1004;

HAnimSegment990.children[3] = HAnimSite1002;

Shape Shape1005 = createNode("Shape");
LineSet LineSet1006 = createNode("LineSet");
LineSet1006.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1007 = createNode("Coordinate");
Coordinate1007.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet1006.coord = Coordinate1007;

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1008 = createNode("ColorRGBA");
ColorRGBA1008.USE = "HAnimSegmentLineColorRGBA";
LineSet1006.color = ColorRGBA1008;

Shape1005.geometry = LineSet1006;

HAnimSegment990.children[4] = Shape1005;

HAnimSite HAnimSite1009 = createNode("HAnimSite");
HAnimSite1009.name = "r_metacarpal_phalanx_3";
HAnimSite1009.DEF = "hanim_r_metacarpal_phalanx_3";
TouchSensor TouchSensor1010 = createNode("TouchSensor");
TouchSensor1010.description = "HAnimSite r_metacarpal_phalanx_3";
HAnimSite1009.children = new MFNode();

HAnimSite1009.children[0] = TouchSensor1010;

Shape Shape1011 = createNode("Shape");
Shape1011.USE = "HAnimSiteShape";
HAnimSite1009.children[1] = Shape1011;

HAnimSegment990.children[5] = HAnimSite1009;

Shape Shape1012 = createNode("Shape");
LineSet LineSet1013 = createNode("LineSet");
LineSet1013.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1014 = createNode("Coordinate");
Coordinate1014.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet1013.coord = Coordinate1014;

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1015 = createNode("ColorRGBA");
ColorRGBA1015.USE = "HAnimSegmentLineColorRGBA";
LineSet1013.color = ColorRGBA1015;

Shape1012.geometry = LineSet1013;

HAnimSegment990.children[6] = Shape1012;

Shape Shape1016 = createNode("Shape");
LineSet LineSet1017 = createNode("LineSet");
LineSet1017.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1018 = createNode("Coordinate");
Coordinate1018.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet1017.coord = Coordinate1018;

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1019 = createNode("ColorRGBA");
ColorRGBA1019.USE = "HAnimSegmentLineColorRGBA";
LineSet1017.color = ColorRGBA1019;

Shape1016.geometry = LineSet1017;

HAnimSegment990.children[7] = Shape1016;

HAnimSite HAnimSite1020 = createNode("HAnimSite");
HAnimSite1020.name = "r_metacarpal_phalanx_5";
HAnimSite1020.DEF = "hanim_r_metacarpal_phalanx_5";
HAnimSite1020.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1021 = createNode("TouchSensor");
TouchSensor1021.description = "HAnimSite r_metacarpal_phalanx_5";
HAnimSite1020.children = new MFNode();

HAnimSite1020.children[0] = TouchSensor1021;

Shape Shape1022 = createNode("Shape");
Shape1022.USE = "HAnimSiteShape";
HAnimSite1020.children[1] = Shape1022;

HAnimSegment990.children[8] = HAnimSite1020;

HAnimJoint989.children = new MFNode();

HAnimJoint989.children[0] = HAnimSegment990;

HAnimJoint HAnimJoint1023 = createNode("HAnimJoint");
HAnimJoint1023.name = "r_carpometacarpal_1";
HAnimJoint1023.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1023.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1023.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1023.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1024 = createNode("HAnimSegment");
HAnimSegment1024.name = "r_metacarpal_1";
HAnimSegment1024.DEF = "hanim_r_metacarpal_1";
Transform Transform1025 = createNode("Transform");
Transform1025.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
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
Coordinate1030.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1029.coord = Coordinate1030;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1031 = createNode("ColorRGBA");
ColorRGBA1031.USE = "HAnimSegmentLineColorRGBA";
LineSet1029.color = ColorRGBA1031;

Shape1028.geometry = LineSet1029;

HAnimSegment1024.children[1] = Shape1028;

HAnimJoint1023.children = new MFNode();

HAnimJoint1023.children[0] = HAnimSegment1024;

HAnimJoint HAnimJoint1032 = createNode("HAnimJoint");
HAnimJoint1032.name = "r_metacarpophalangeal_1";
HAnimJoint1032.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1032.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1032.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1032.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1033 = createNode("HAnimSegment");
HAnimSegment1033.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1033.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform1034 = createNode("Transform");
Transform1034.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
Transform Transform1035 = createNode("Transform");
//Empty Transform
Shape Shape1036 = createNode("Shape");
Shape1036.USE = "HAnimJointShape";
Transform1035.child = new undefined();

Transform1035.child[0] = Shape1036;

Transform1034.children = new MFNode();

Transform1034.children[0] = Transform1035;

HAnimSegment1033.children = new MFNode();

HAnimSegment1033.children[0] = Transform1034;

Shape Shape1037 = createNode("Shape");
LineSet LineSet1038 = createNode("LineSet");
LineSet1038.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1039 = createNode("Coordinate");
Coordinate1039.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1038.coord = Coordinate1039;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1040 = createNode("ColorRGBA");
ColorRGBA1040.USE = "HAnimSegmentLineColorRGBA";
LineSet1038.color = ColorRGBA1040;

Shape1037.geometry = LineSet1038;

HAnimSegment1033.children[1] = Shape1037;

HAnimSite HAnimSite1041 = createNode("HAnimSite");
HAnimSite1041.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1041.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor1042 = createNode("TouchSensor");
TouchSensor1042.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1041.children = new MFNode();

HAnimSite1041.children[0] = TouchSensor1042;

Shape Shape1043 = createNode("Shape");
Shape1043.USE = "HAnimSiteShape";
HAnimSite1041.children[1] = Shape1043;

HAnimSegment1033.children[2] = HAnimSite1041;

HAnimJoint1032.children = new MFNode();

HAnimJoint1032.children[0] = HAnimSegment1033;

HAnimJoint HAnimJoint1044 = createNode("HAnimJoint");
HAnimJoint1044.name = "r_carpal_interphalangeal_1";
HAnimJoint1044.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1044.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1044.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1044.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1032.children[1] = HAnimJoint1044;

HAnimJoint1023.children[1] = HAnimJoint1032;

HAnimJoint989.children[1] = HAnimJoint1023;

HAnimJoint HAnimJoint1045 = createNode("HAnimJoint");
HAnimJoint1045.name = "r_carpometacarpal_2";
HAnimJoint1045.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1045.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1045.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1045.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1046 = createNode("HAnimSegment");
HAnimSegment1046.name = "r_metacarpal_2";
HAnimSegment1046.DEF = "hanim_r_metacarpal_2";
Transform Transform1047 = createNode("Transform");
Transform1047.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
Transform Transform1048 = createNode("Transform");
//Empty Transform
Shape Shape1049 = createNode("Shape");
Shape1049.USE = "HAnimJointShape";
Transform1048.child = new undefined();

Transform1048.child[0] = Shape1049;

Transform1047.children = new MFNode();

Transform1047.children[0] = Transform1048;

HAnimSegment1046.children = new MFNode();

HAnimSegment1046.children[0] = Transform1047;

Shape Shape1050 = createNode("Shape");
LineSet LineSet1051 = createNode("LineSet");
LineSet1051.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1052 = createNode("Coordinate");
Coordinate1052.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1051.coord = Coordinate1052;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1053 = createNode("ColorRGBA");
ColorRGBA1053.USE = "HAnimSegmentLineColorRGBA";
LineSet1051.color = ColorRGBA1053;

Shape1050.geometry = LineSet1051;

HAnimSegment1046.children[1] = Shape1050;

HAnimJoint1045.children = new MFNode();

HAnimJoint1045.children[0] = HAnimSegment1046;

HAnimJoint HAnimJoint1054 = createNode("HAnimJoint");
HAnimJoint1054.name = "r_metacarpophalangeal_2";
HAnimJoint1054.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1054.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1054.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1054.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1055 = createNode("HAnimSegment");
HAnimSegment1055.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1055.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform1056 = createNode("Transform");
Transform1056.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform1057 = createNode("Transform");
//Empty Transform
Shape Shape1058 = createNode("Shape");
Shape1058.USE = "HAnimJointShape";
Transform1057.child = new undefined();

Transform1057.child[0] = Shape1058;

Transform1056.children = new MFNode();

Transform1056.children[0] = Transform1057;

HAnimSegment1055.children = new MFNode();

HAnimSegment1055.children[0] = Transform1056;

Shape Shape1059 = createNode("Shape");
LineSet LineSet1060 = createNode("LineSet");
LineSet1060.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1061 = createNode("Coordinate");
Coordinate1061.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1060.coord = Coordinate1061;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1062 = createNode("ColorRGBA");
ColorRGBA1062.USE = "HAnimSegmentLineColorRGBA";
LineSet1060.color = ColorRGBA1062;

Shape1059.geometry = LineSet1060;

HAnimSegment1055.children[1] = Shape1059;

HAnimJoint1054.children = new MFNode();

HAnimJoint1054.children[0] = HAnimSegment1055;

HAnimJoint HAnimJoint1063 = createNode("HAnimJoint");
HAnimJoint1063.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1063.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1063.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1063.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1063.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1064 = createNode("HAnimSegment");
HAnimSegment1064.name = "r_carpal_middle_phalanx_2";
HAnimSegment1064.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform1065 = createNode("Transform");
Transform1065.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform1066 = createNode("Transform");
//Empty Transform
Shape Shape1067 = createNode("Shape");
Shape1067.USE = "HAnimJointShape";
Transform1066.child = new undefined();

Transform1066.child[0] = Shape1067;

Transform1065.children = new MFNode();

Transform1065.children[0] = Transform1066;

HAnimSegment1064.children = new MFNode();

HAnimSegment1064.children[0] = Transform1065;

Shape Shape1068 = createNode("Shape");
LineSet LineSet1069 = createNode("LineSet");
LineSet1069.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1070 = createNode("Coordinate");
Coordinate1070.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1069.coord = Coordinate1070;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1071 = createNode("ColorRGBA");
ColorRGBA1071.USE = "HAnimSegmentLineColorRGBA";
LineSet1069.color = ColorRGBA1071;

Shape1068.geometry = LineSet1069;

HAnimSegment1064.children[1] = Shape1068;

HAnimSite HAnimSite1072 = createNode("HAnimSite");
HAnimSite1072.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1072.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor1073 = createNode("TouchSensor");
TouchSensor1073.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1072.children = new MFNode();

HAnimSite1072.children[0] = TouchSensor1073;

Shape Shape1074 = createNode("Shape");
Shape1074.USE = "HAnimSiteShape";
HAnimSite1072.children[1] = Shape1074;

HAnimSegment1064.children[2] = HAnimSite1072;

HAnimSite HAnimSite1075 = createNode("HAnimSite");
HAnimSite1075.name = "r_dactylion";
HAnimSite1075.DEF = "hanim_r_dactylion";
HAnimSite1075.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1076 = createNode("TouchSensor");
TouchSensor1076.description = "HAnimSite r_dactylion";
HAnimSite1075.children = new MFNode();

HAnimSite1075.children[0] = TouchSensor1076;

Shape Shape1077 = createNode("Shape");
Shape1077.USE = "HAnimSiteShape";
HAnimSite1075.children[1] = Shape1077;

HAnimSegment1064.children[3] = HAnimSite1075;

HAnimJoint1063.children = new MFNode();

HAnimJoint1063.children[0] = HAnimSegment1064;

HAnimJoint HAnimJoint1078 = createNode("HAnimJoint");
HAnimJoint1078.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1078.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1078.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1078.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1078.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1063.children[1] = HAnimJoint1078;

HAnimJoint1054.children[1] = HAnimJoint1063;

HAnimJoint1045.children[1] = HAnimJoint1054;

HAnimJoint989.children[2] = HAnimJoint1045;

HAnimJoint HAnimJoint1079 = createNode("HAnimJoint");
HAnimJoint1079.name = "r_carpometacarpal_3";
HAnimJoint1079.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1079.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1079.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1079.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1080 = createNode("HAnimSegment");
HAnimSegment1080.name = "r_metacarpal_3";
HAnimSegment1080.DEF = "hanim_r_metacarpal_3";
Transform Transform1081 = createNode("Transform");
Transform1081.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform1082 = createNode("Transform");
//Empty Transform
Shape Shape1083 = createNode("Shape");
Shape1083.USE = "HAnimJointShape";
Transform1082.child = new undefined();

Transform1082.child[0] = Shape1083;

Transform1081.children = new MFNode();

Transform1081.children[0] = Transform1082;

HAnimSegment1080.children = new MFNode();

HAnimSegment1080.children[0] = Transform1081;

Shape Shape1084 = createNode("Shape");
LineSet LineSet1085 = createNode("LineSet");
LineSet1085.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1086 = createNode("Coordinate");
Coordinate1086.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1085.coord = Coordinate1086;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1087 = createNode("ColorRGBA");
ColorRGBA1087.USE = "HAnimSegmentLineColorRGBA";
LineSet1085.color = ColorRGBA1087;

Shape1084.geometry = LineSet1085;

HAnimSegment1080.children[1] = Shape1084;

HAnimJoint1079.children = new MFNode();

HAnimJoint1079.children[0] = HAnimSegment1080;

HAnimJoint HAnimJoint1088 = createNode("HAnimJoint");
HAnimJoint1088.name = "r_metacarpophalangeal_3";
HAnimJoint1088.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1088.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1088.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1088.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1089 = createNode("HAnimSegment");
HAnimSegment1089.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1089.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform1090 = createNode("Transform");
Transform1090.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
Transform Transform1091 = createNode("Transform");
//Empty Transform
Shape Shape1092 = createNode("Shape");
Shape1092.USE = "HAnimJointShape";
Transform1091.child = new undefined();

Transform1091.child[0] = Shape1092;

Transform1090.children = new MFNode();

Transform1090.children[0] = Transform1091;

HAnimSegment1089.children = new MFNode();

HAnimSegment1089.children[0] = Transform1090;

Shape Shape1093 = createNode("Shape");
LineSet LineSet1094 = createNode("LineSet");
LineSet1094.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1095 = createNode("Coordinate");
Coordinate1095.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1094.coord = Coordinate1095;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1096 = createNode("ColorRGBA");
ColorRGBA1096.USE = "HAnimSegmentLineColorRGBA";
LineSet1094.color = ColorRGBA1096;

Shape1093.geometry = LineSet1094;

HAnimSegment1089.children[1] = Shape1093;

HAnimJoint1088.children = new MFNode();

HAnimJoint1088.children[0] = HAnimSegment1089;

HAnimJoint HAnimJoint1097 = createNode("HAnimJoint");
HAnimJoint1097.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1097.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1097.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1097.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1097.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1098 = createNode("HAnimSegment");
HAnimSegment1098.name = "r_carpal_middle_phalanx_3";
HAnimSegment1098.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform1099 = createNode("Transform");
Transform1099.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
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
Coordinate1104.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1103.coord = Coordinate1104;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1105 = createNode("ColorRGBA");
ColorRGBA1105.USE = "HAnimSegmentLineColorRGBA";
LineSet1103.color = ColorRGBA1105;

Shape1102.geometry = LineSet1103;

HAnimSegment1098.children[1] = Shape1102;

HAnimSite HAnimSite1106 = createNode("HAnimSite");
HAnimSite1106.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1106.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor1107 = createNode("TouchSensor");
TouchSensor1107.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1106.children = new MFNode();

HAnimSite1106.children[0] = TouchSensor1107;

Shape Shape1108 = createNode("Shape");
Shape1108.USE = "HAnimSiteShape";
HAnimSite1106.children[1] = Shape1108;

HAnimSegment1098.children[2] = HAnimSite1106;

HAnimJoint1097.children = new MFNode();

HAnimJoint1097.children[0] = HAnimSegment1098;

HAnimJoint HAnimJoint1109 = createNode("HAnimJoint");
HAnimJoint1109.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1109.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1109.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1109.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1097.children[1] = HAnimJoint1109;

HAnimJoint1088.children[1] = HAnimJoint1097;

HAnimJoint1079.children[1] = HAnimJoint1088;

HAnimJoint989.children[3] = HAnimJoint1079;

HAnimJoint HAnimJoint1110 = createNode("HAnimJoint");
HAnimJoint1110.name = "r_carpometacarpal_4";
HAnimJoint1110.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1110.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1111 = createNode("HAnimSegment");
HAnimSegment1111.name = "r_metacarpal_4";
HAnimSegment1111.DEF = "hanim_r_metacarpal_4";
Transform Transform1112 = createNode("Transform");
Transform1112.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
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
Coordinate1117.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1116.coord = Coordinate1117;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1118 = createNode("ColorRGBA");
ColorRGBA1118.USE = "HAnimSegmentLineColorRGBA";
LineSet1116.color = ColorRGBA1118;

Shape1115.geometry = LineSet1116;

HAnimSegment1111.children[1] = Shape1115;

HAnimJoint1110.children = new MFNode();

HAnimJoint1110.children[0] = HAnimSegment1111;

HAnimJoint HAnimJoint1119 = createNode("HAnimJoint");
HAnimJoint1119.name = "r_metacarpophalangeal_4";
HAnimJoint1119.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1119.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1119.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1119.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1120 = createNode("HAnimSegment");
HAnimSegment1120.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1120.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform1121 = createNode("Transform");
Transform1121.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform1122 = createNode("Transform");
//Empty Transform
Shape Shape1123 = createNode("Shape");
Shape1123.USE = "HAnimJointShape";
Transform1122.child = new undefined();

Transform1122.child[0] = Shape1123;

Transform1121.children = new MFNode();

Transform1121.children[0] = Transform1122;

HAnimSegment1120.children = new MFNode();

HAnimSegment1120.children[0] = Transform1121;

Shape Shape1124 = createNode("Shape");
LineSet LineSet1125 = createNode("LineSet");
LineSet1125.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1126 = createNode("Coordinate");
Coordinate1126.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1125.coord = Coordinate1126;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1127 = createNode("ColorRGBA");
ColorRGBA1127.USE = "HAnimSegmentLineColorRGBA";
LineSet1125.color = ColorRGBA1127;

Shape1124.geometry = LineSet1125;

HAnimSegment1120.children[1] = Shape1124;

HAnimJoint1119.children = new MFNode();

HAnimJoint1119.children[0] = HAnimSegment1120;

HAnimJoint HAnimJoint1128 = createNode("HAnimJoint");
HAnimJoint1128.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1128.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1128.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1128.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1128.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1129 = createNode("HAnimSegment");
HAnimSegment1129.name = "r_carpal_middle_phalanx_4";
HAnimSegment1129.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform1130 = createNode("Transform");
Transform1130.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform1131 = createNode("Transform");
//Empty Transform
Shape Shape1132 = createNode("Shape");
Shape1132.USE = "HAnimJointShape";
Transform1131.child = new undefined();

Transform1131.child[0] = Shape1132;

Transform1130.children = new MFNode();

Transform1130.children[0] = Transform1131;

HAnimSegment1129.children = new MFNode();

HAnimSegment1129.children[0] = Transform1130;

Shape Shape1133 = createNode("Shape");
LineSet LineSet1134 = createNode("LineSet");
LineSet1134.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1135 = createNode("Coordinate");
Coordinate1135.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1134.coord = Coordinate1135;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1136 = createNode("ColorRGBA");
ColorRGBA1136.USE = "HAnimSegmentLineColorRGBA";
LineSet1134.color = ColorRGBA1136;

Shape1133.geometry = LineSet1134;

HAnimSegment1129.children[1] = Shape1133;

HAnimSite HAnimSite1137 = createNode("HAnimSite");
HAnimSite1137.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1137.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor1138 = createNode("TouchSensor");
TouchSensor1138.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1137.children = new MFNode();

HAnimSite1137.children[0] = TouchSensor1138;

Shape Shape1139 = createNode("Shape");
Shape1139.USE = "HAnimSiteShape";
HAnimSite1137.children[1] = Shape1139;

HAnimSegment1129.children[2] = HAnimSite1137;

HAnimJoint1128.children = new MFNode();

HAnimJoint1128.children[0] = HAnimSegment1129;

HAnimJoint HAnimJoint1140 = createNode("HAnimJoint");
HAnimJoint1140.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1140.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1140.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1140.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1140.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1128.children[1] = HAnimJoint1140;

HAnimJoint1119.children[1] = HAnimJoint1128;

HAnimJoint1110.children[1] = HAnimJoint1119;

HAnimJoint989.children[4] = HAnimJoint1110;

HAnimJoint HAnimJoint1141 = createNode("HAnimJoint");
HAnimJoint1141.name = "r_carpometacarpal_5";
HAnimJoint1141.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1141.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1141.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1142 = createNode("HAnimSegment");
HAnimSegment1142.name = "r_metacarpal_5";
HAnimSegment1142.DEF = "hanim_r_metacarpal_5";
Transform Transform1143 = createNode("Transform");
Transform1143.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
Transform Transform1144 = createNode("Transform");
//Empty Transform
Shape Shape1145 = createNode("Shape");
Shape1145.USE = "HAnimJointShape";
Transform1144.child = new undefined();

Transform1144.child[0] = Shape1145;

Transform1143.children = new MFNode();

Transform1143.children[0] = Transform1144;

HAnimSegment1142.children = new MFNode();

HAnimSegment1142.children[0] = Transform1143;

Shape Shape1146 = createNode("Shape");
LineSet LineSet1147 = createNode("LineSet");
LineSet1147.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1148 = createNode("Coordinate");
Coordinate1148.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1147.coord = Coordinate1148;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1149 = createNode("ColorRGBA");
ColorRGBA1149.USE = "HAnimSegmentLineColorRGBA";
LineSet1147.color = ColorRGBA1149;

Shape1146.geometry = LineSet1147;

HAnimSegment1142.children[1] = Shape1146;

HAnimJoint1141.children = new MFNode();

HAnimJoint1141.children[0] = HAnimSegment1142;

HAnimJoint HAnimJoint1150 = createNode("HAnimJoint");
HAnimJoint1150.name = "r_metacarpophalangeal_5";
HAnimJoint1150.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1150.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1150.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1150.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1151 = createNode("HAnimSegment");
HAnimSegment1151.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1151.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform1152 = createNode("Transform");
Transform1152.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
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
Coordinate1157.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1156.coord = Coordinate1157;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1158 = createNode("ColorRGBA");
ColorRGBA1158.USE = "HAnimSegmentLineColorRGBA";
LineSet1156.color = ColorRGBA1158;

Shape1155.geometry = LineSet1156;

HAnimSegment1151.children[1] = Shape1155;

HAnimJoint1150.children = new MFNode();

HAnimJoint1150.children[0] = HAnimSegment1151;

HAnimJoint HAnimJoint1159 = createNode("HAnimJoint");
HAnimJoint1159.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1159.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1159.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1159.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1159.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1160 = createNode("HAnimSegment");
HAnimSegment1160.name = "r_carpal_middle_phalanx_5";
HAnimSegment1160.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform1161 = createNode("Transform");
Transform1161.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
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
Coordinate1166.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1165.coord = Coordinate1166;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1167 = createNode("ColorRGBA");
ColorRGBA1167.USE = "HAnimSegmentLineColorRGBA";
LineSet1165.color = ColorRGBA1167;

Shape1164.geometry = LineSet1165;

HAnimSegment1160.children[1] = Shape1164;

HAnimSite HAnimSite1168 = createNode("HAnimSite");
HAnimSite1168.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1168.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor1169 = createNode("TouchSensor");
TouchSensor1169.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1168.children = new MFNode();

HAnimSite1168.children[0] = TouchSensor1169;

Shape Shape1170 = createNode("Shape");
Shape1170.USE = "HAnimSiteShape";
HAnimSite1168.children[1] = Shape1170;

HAnimSegment1160.children[2] = HAnimSite1168;

HAnimJoint1159.children = new MFNode();

HAnimJoint1159.children[0] = HAnimSegment1160;

HAnimJoint HAnimJoint1171 = createNode("HAnimJoint");
HAnimJoint1171.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1171.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1171.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1171.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1171.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1159.children[1] = HAnimJoint1171;

HAnimJoint1150.children[1] = HAnimJoint1159;

HAnimJoint1141.children[1] = HAnimJoint1150;

HAnimJoint989.children[5] = HAnimJoint1141;

HAnimJoint977.children[1] = HAnimJoint989;

HAnimJoint956.children[1] = HAnimJoint977;

HAnimJoint941.children[1] = HAnimJoint956;

HAnimJoint932.children[1] = HAnimJoint941;

HAnimJoint488.children[3] = HAnimJoint932;

HAnimJoint473.children[1] = HAnimJoint488;

HAnimJoint464.children[1] = HAnimJoint473;

HAnimJoint455.children[1] = HAnimJoint464;

HAnimJoint446.children[1] = HAnimJoint455;

HAnimJoint434.children[1] = HAnimJoint446;

HAnimJoint413.children[1] = HAnimJoint434;

HAnimJoint404.children[1] = HAnimJoint413;

HAnimJoint395.children[1] = HAnimJoint404;

HAnimJoint380.children[1] = HAnimJoint395;

HAnimJoint368.children[1] = HAnimJoint380;

HAnimJoint359.children[1] = HAnimJoint368;

HAnimJoint350.children[1] = HAnimJoint359;

HAnimJoint341.children[1] = HAnimJoint350;

HAnimJoint323.children[1] = HAnimJoint341;

HAnimJoint314.children[1] = HAnimJoint323;

HAnimJoint305.children[1] = HAnimJoint314;

HAnimJoint52.children[2] = HAnimJoint305;

HAnimHumanoid43.joints[1] = HAnimJoint52;

HAnimJoint HAnimJoint1172 = createNode("HAnimJoint");
HAnimJoint1172.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint1172;

HAnimJoint HAnimJoint1173 = createNode("HAnimJoint");
HAnimJoint1173.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint1173;

HAnimJoint HAnimJoint1174 = createNode("HAnimJoint");
HAnimJoint1174.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint1174;

HAnimJoint HAnimJoint1175 = createNode("HAnimJoint");
HAnimJoint1175.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint1175;

HAnimJoint HAnimJoint1176 = createNode("HAnimJoint");
HAnimJoint1176.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint1176;

HAnimJoint HAnimJoint1177 = createNode("HAnimJoint");
HAnimJoint1177.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[7] = HAnimJoint1177;

HAnimJoint HAnimJoint1178 = createNode("HAnimJoint");
HAnimJoint1178.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[8] = HAnimJoint1178;

HAnimJoint HAnimJoint1179 = createNode("HAnimJoint");
HAnimJoint1179.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[9] = HAnimJoint1179;

HAnimJoint HAnimJoint1180 = createNode("HAnimJoint");
HAnimJoint1180.USE = "hanim_r_hip";
HAnimHumanoid43.joints[10] = HAnimJoint1180;

HAnimJoint HAnimJoint1181 = createNode("HAnimJoint");
HAnimJoint1181.USE = "hanim_r_knee";
HAnimHumanoid43.joints[11] = HAnimJoint1181;

HAnimJoint HAnimJoint1182 = createNode("HAnimJoint");
HAnimJoint1182.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[12] = HAnimJoint1182;

HAnimJoint HAnimJoint1183 = createNode("HAnimJoint");
HAnimJoint1183.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1183;

HAnimJoint HAnimJoint1184 = createNode("HAnimJoint");
HAnimJoint1184.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1184;

HAnimJoint HAnimJoint1185 = createNode("HAnimJoint");
HAnimJoint1185.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1185;

HAnimJoint HAnimJoint1186 = createNode("HAnimJoint");
HAnimJoint1186.USE = "hanim_vl5";
HAnimHumanoid43.joints[16] = HAnimJoint1186;

HAnimJoint HAnimJoint1187 = createNode("HAnimJoint");
HAnimJoint1187.USE = "hanim_vl4";
HAnimHumanoid43.joints[17] = HAnimJoint1187;

HAnimJoint HAnimJoint1188 = createNode("HAnimJoint");
HAnimJoint1188.USE = "hanim_vl3";
HAnimHumanoid43.joints[18] = HAnimJoint1188;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.USE = "hanim_vl2";
HAnimHumanoid43.joints[19] = HAnimJoint1189;

HAnimJoint HAnimJoint1190 = createNode("HAnimJoint");
HAnimJoint1190.USE = "hanim_vl1";
HAnimHumanoid43.joints[20] = HAnimJoint1190;

HAnimJoint HAnimJoint1191 = createNode("HAnimJoint");
HAnimJoint1191.USE = "hanim_vt12";
HAnimHumanoid43.joints[21] = HAnimJoint1191;

HAnimJoint HAnimJoint1192 = createNode("HAnimJoint");
HAnimJoint1192.USE = "hanim_vt11";
HAnimHumanoid43.joints[22] = HAnimJoint1192;

HAnimJoint HAnimJoint1193 = createNode("HAnimJoint");
HAnimJoint1193.USE = "hanim_vt10";
HAnimHumanoid43.joints[23] = HAnimJoint1193;

HAnimJoint HAnimJoint1194 = createNode("HAnimJoint");
HAnimJoint1194.USE = "hanim_vt9";
HAnimHumanoid43.joints[24] = HAnimJoint1194;

HAnimJoint HAnimJoint1195 = createNode("HAnimJoint");
HAnimJoint1195.USE = "hanim_vt8";
HAnimHumanoid43.joints[25] = HAnimJoint1195;

HAnimJoint HAnimJoint1196 = createNode("HAnimJoint");
HAnimJoint1196.USE = "hanim_vt7";
HAnimHumanoid43.joints[26] = HAnimJoint1196;

HAnimJoint HAnimJoint1197 = createNode("HAnimJoint");
HAnimJoint1197.USE = "hanim_vt6";
HAnimHumanoid43.joints[27] = HAnimJoint1197;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.USE = "hanim_vt5";
HAnimHumanoid43.joints[28] = HAnimJoint1198;

HAnimJoint HAnimJoint1199 = createNode("HAnimJoint");
HAnimJoint1199.USE = "hanim_vt4";
HAnimHumanoid43.joints[29] = HAnimJoint1199;

HAnimJoint HAnimJoint1200 = createNode("HAnimJoint");
HAnimJoint1200.USE = "hanim_vt3";
HAnimHumanoid43.joints[30] = HAnimJoint1200;

HAnimJoint HAnimJoint1201 = createNode("HAnimJoint");
HAnimJoint1201.USE = "hanim_vt2";
HAnimHumanoid43.joints[31] = HAnimJoint1201;

HAnimJoint HAnimJoint1202 = createNode("HAnimJoint");
HAnimJoint1202.USE = "hanim_vt1";
HAnimHumanoid43.joints[32] = HAnimJoint1202;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.USE = "hanim_vc7";
HAnimHumanoid43.joints[33] = HAnimJoint1203;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.USE = "hanim_vc6";
HAnimHumanoid43.joints[34] = HAnimJoint1204;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.USE = "hanim_vc5";
HAnimHumanoid43.joints[35] = HAnimJoint1205;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.USE = "hanim_vc4";
HAnimHumanoid43.joints[36] = HAnimJoint1206;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.USE = "hanim_vc3";
HAnimHumanoid43.joints[37] = HAnimJoint1207;

HAnimJoint HAnimJoint1208 = createNode("HAnimJoint");
HAnimJoint1208.USE = "hanim_vc2";
HAnimHumanoid43.joints[38] = HAnimJoint1208;

HAnimJoint HAnimJoint1209 = createNode("HAnimJoint");
HAnimJoint1209.USE = "hanim_vc1";
HAnimHumanoid43.joints[39] = HAnimJoint1209;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.USE = "hanim_skullbase";
HAnimHumanoid43.joints[40] = HAnimJoint1210;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[41] = HAnimJoint1211;

HAnimJoint HAnimJoint1212 = createNode("HAnimJoint");
HAnimJoint1212.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[42] = HAnimJoint1212;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[43] = HAnimJoint1213;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[44] = HAnimJoint1214;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[45] = HAnimJoint1215;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[46] = HAnimJoint1216;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[47] = HAnimJoint1217;

HAnimJoint HAnimJoint1218 = createNode("HAnimJoint");
HAnimJoint1218.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[48] = HAnimJoint1218;

HAnimJoint HAnimJoint1219 = createNode("HAnimJoint");
HAnimJoint1219.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[49] = HAnimJoint1219;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[50] = HAnimJoint1220;

HAnimJoint HAnimJoint1221 = createNode("HAnimJoint");
HAnimJoint1221.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[51] = HAnimJoint1221;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[52] = HAnimJoint1222;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[53] = HAnimJoint1223;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[54] = HAnimJoint1224;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[55] = HAnimJoint1225;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[56] = HAnimJoint1226;

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[57] = HAnimJoint1227;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[58] = HAnimJoint1228;

HAnimJoint HAnimJoint1229 = createNode("HAnimJoint");
HAnimJoint1229.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[59] = HAnimJoint1229;

HAnimJoint HAnimJoint1230 = createNode("HAnimJoint");
HAnimJoint1230.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[60] = HAnimJoint1230;

HAnimJoint HAnimJoint1231 = createNode("HAnimJoint");
HAnimJoint1231.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[61] = HAnimJoint1231;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[62] = HAnimJoint1232;

HAnimJoint HAnimJoint1233 = createNode("HAnimJoint");
HAnimJoint1233.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[63] = HAnimJoint1233;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[64] = HAnimJoint1234;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[65] = HAnimJoint1235;

HAnimJoint HAnimJoint1236 = createNode("HAnimJoint");
HAnimJoint1236.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[66] = HAnimJoint1236;

HAnimJoint HAnimJoint1237 = createNode("HAnimJoint");
HAnimJoint1237.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[67] = HAnimJoint1237;

HAnimJoint HAnimJoint1238 = createNode("HAnimJoint");
HAnimJoint1238.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[68] = HAnimJoint1238;

HAnimJoint HAnimJoint1239 = createNode("HAnimJoint");
HAnimJoint1239.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[69] = HAnimJoint1239;

HAnimJoint HAnimJoint1240 = createNode("HAnimJoint");
HAnimJoint1240.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[70] = HAnimJoint1240;

HAnimJoint HAnimJoint1241 = createNode("HAnimJoint");
HAnimJoint1241.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[71] = HAnimJoint1241;

HAnimJoint HAnimJoint1242 = createNode("HAnimJoint");
HAnimJoint1242.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[72] = HAnimJoint1242;

HAnimJoint HAnimJoint1243 = createNode("HAnimJoint");
HAnimJoint1243.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[73] = HAnimJoint1243;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[74] = HAnimJoint1244;

HAnimJoint HAnimJoint1245 = createNode("HAnimJoint");
HAnimJoint1245.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[75] = HAnimJoint1245;

HAnimJoint HAnimJoint1246 = createNode("HAnimJoint");
HAnimJoint1246.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[76] = HAnimJoint1246;

HAnimJoint HAnimJoint1247 = createNode("HAnimJoint");
HAnimJoint1247.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[77] = HAnimJoint1247;

HAnimJoint HAnimJoint1248 = createNode("HAnimJoint");
HAnimJoint1248.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[78] = HAnimJoint1248;

HAnimJoint HAnimJoint1249 = createNode("HAnimJoint");
HAnimJoint1249.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[79] = HAnimJoint1249;

HAnimJoint HAnimJoint1250 = createNode("HAnimJoint");
HAnimJoint1250.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[80] = HAnimJoint1250;

HAnimJoint HAnimJoint1251 = createNode("HAnimJoint");
HAnimJoint1251.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[81] = HAnimJoint1251;

HAnimJoint HAnimJoint1252 = createNode("HAnimJoint");
HAnimJoint1252.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[82] = HAnimJoint1252;

HAnimJoint HAnimJoint1253 = createNode("HAnimJoint");
HAnimJoint1253.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[83] = HAnimJoint1253;

HAnimJoint HAnimJoint1254 = createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[84] = HAnimJoint1254;

HAnimJoint HAnimJoint1255 = createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[85] = HAnimJoint1255;

HAnimJoint HAnimJoint1256 = createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[86] = HAnimJoint1256;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[87] = HAnimJoint1257;

HAnimJoint HAnimJoint1258 = createNode("HAnimJoint");
HAnimJoint1258.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[88] = HAnimJoint1258;

HAnimJoint HAnimJoint1259 = createNode("HAnimJoint");
HAnimJoint1259.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[89] = HAnimJoint1259;

HAnimJoint HAnimJoint1260 = createNode("HAnimJoint");
HAnimJoint1260.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[90] = HAnimJoint1260;

HAnimJoint HAnimJoint1261 = createNode("HAnimJoint");
HAnimJoint1261.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[91] = HAnimJoint1261;

HAnimJoint HAnimJoint1262 = createNode("HAnimJoint");
HAnimJoint1262.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[92] = HAnimJoint1262;

HAnimJoint HAnimJoint1263 = createNode("HAnimJoint");
HAnimJoint1263.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[93] = HAnimJoint1263;

HAnimJoint HAnimJoint1264 = createNode("HAnimJoint");
HAnimJoint1264.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[94] = HAnimJoint1264;

HAnimJoint HAnimJoint1265 = createNode("HAnimJoint");
HAnimJoint1265.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[95] = HAnimJoint1265;

HAnimSegment HAnimSegment1266 = createNode("HAnimSegment");
HAnimSegment1266.USE = "hanim_sacrum";
HAnimHumanoid43.segments[96] = HAnimSegment1266;

HAnimSegment HAnimSegment1267 = createNode("HAnimSegment");
HAnimSegment1267.USE = "hanim_pelvis";
HAnimHumanoid43.segments[97] = HAnimSegment1267;

HAnimSegment HAnimSegment1268 = createNode("HAnimSegment");
HAnimSegment1268.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[98] = HAnimSegment1268;

HAnimSegment HAnimSegment1269 = createNode("HAnimSegment");
HAnimSegment1269.USE = "hanim_l_calf";
HAnimHumanoid43.segments[99] = HAnimSegment1269;

HAnimSegment HAnimSegment1270 = createNode("HAnimSegment");
HAnimSegment1270.USE = "hanim_l_talus";
HAnimHumanoid43.segments[100] = HAnimSegment1270;

HAnimSegment HAnimSegment1271 = createNode("HAnimSegment");
HAnimSegment1271.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[101] = HAnimSegment1271;

HAnimSegment HAnimSegment1272 = createNode("HAnimSegment");
HAnimSegment1272.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[102] = HAnimSegment1272;

HAnimSegment HAnimSegment1273 = createNode("HAnimSegment");
HAnimSegment1273.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[103] = HAnimSegment1273;

HAnimSegment HAnimSegment1274 = createNode("HAnimSegment");
HAnimSegment1274.USE = "hanim_r_calf";
HAnimHumanoid43.segments[104] = HAnimSegment1274;

HAnimSegment HAnimSegment1275 = createNode("HAnimSegment");
HAnimSegment1275.USE = "hanim_r_talus";
HAnimHumanoid43.segments[105] = HAnimSegment1275;

HAnimSegment HAnimSegment1276 = createNode("HAnimSegment");
HAnimSegment1276.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[106] = HAnimSegment1276;

HAnimSegment HAnimSegment1277 = createNode("HAnimSegment");
HAnimSegment1277.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[107] = HAnimSegment1277;

HAnimSegment HAnimSegment1278 = createNode("HAnimSegment");
HAnimSegment1278.USE = "hanim_l5";
HAnimHumanoid43.segments[108] = HAnimSegment1278;

HAnimSegment HAnimSegment1279 = createNode("HAnimSegment");
HAnimSegment1279.USE = "hanim_l4";
HAnimHumanoid43.segments[109] = HAnimSegment1279;

HAnimSegment HAnimSegment1280 = createNode("HAnimSegment");
HAnimSegment1280.USE = "hanim_l3";
HAnimHumanoid43.segments[110] = HAnimSegment1280;

HAnimSegment HAnimSegment1281 = createNode("HAnimSegment");
HAnimSegment1281.USE = "hanim_l2";
HAnimHumanoid43.segments[111] = HAnimSegment1281;

HAnimSegment HAnimSegment1282 = createNode("HAnimSegment");
HAnimSegment1282.USE = "hanim_l1";
HAnimHumanoid43.segments[112] = HAnimSegment1282;

HAnimSegment HAnimSegment1283 = createNode("HAnimSegment");
HAnimSegment1283.USE = "hanim_t12";
HAnimHumanoid43.segments[113] = HAnimSegment1283;

HAnimSegment HAnimSegment1284 = createNode("HAnimSegment");
HAnimSegment1284.USE = "hanim_t11";
HAnimHumanoid43.segments[114] = HAnimSegment1284;

HAnimSegment HAnimSegment1285 = createNode("HAnimSegment");
HAnimSegment1285.USE = "hanim_t10";
HAnimHumanoid43.segments[115] = HAnimSegment1285;

HAnimSegment HAnimSegment1286 = createNode("HAnimSegment");
HAnimSegment1286.USE = "hanim_t9";
HAnimHumanoid43.segments[116] = HAnimSegment1286;

HAnimSegment HAnimSegment1287 = createNode("HAnimSegment");
HAnimSegment1287.USE = "hanim_t8";
HAnimHumanoid43.segments[117] = HAnimSegment1287;

HAnimSegment HAnimSegment1288 = createNode("HAnimSegment");
HAnimSegment1288.USE = "hanim_t7";
HAnimHumanoid43.segments[118] = HAnimSegment1288;

HAnimSegment HAnimSegment1289 = createNode("HAnimSegment");
HAnimSegment1289.USE = "hanim_t6";
HAnimHumanoid43.segments[119] = HAnimSegment1289;

HAnimSegment HAnimSegment1290 = createNode("HAnimSegment");
HAnimSegment1290.USE = "hanim_t5";
HAnimHumanoid43.segments[120] = HAnimSegment1290;

HAnimSegment HAnimSegment1291 = createNode("HAnimSegment");
HAnimSegment1291.USE = "hanim_t4";
HAnimHumanoid43.segments[121] = HAnimSegment1291;

HAnimSegment HAnimSegment1292 = createNode("HAnimSegment");
HAnimSegment1292.USE = "hanim_t3";
HAnimHumanoid43.segments[122] = HAnimSegment1292;

HAnimSegment HAnimSegment1293 = createNode("HAnimSegment");
HAnimSegment1293.USE = "hanim_t2";
HAnimHumanoid43.segments[123] = HAnimSegment1293;

HAnimSegment HAnimSegment1294 = createNode("HAnimSegment");
HAnimSegment1294.USE = "hanim_t1";
HAnimHumanoid43.segments[124] = HAnimSegment1294;

HAnimSegment HAnimSegment1295 = createNode("HAnimSegment");
HAnimSegment1295.USE = "hanim_c7";
HAnimHumanoid43.segments[125] = HAnimSegment1295;

HAnimSegment HAnimSegment1296 = createNode("HAnimSegment");
HAnimSegment1296.USE = "hanim_c6";
HAnimHumanoid43.segments[126] = HAnimSegment1296;

HAnimSegment HAnimSegment1297 = createNode("HAnimSegment");
HAnimSegment1297.USE = "hanim_c5";
HAnimHumanoid43.segments[127] = HAnimSegment1297;

HAnimSegment HAnimSegment1298 = createNode("HAnimSegment");
HAnimSegment1298.USE = "hanim_c4";
HAnimHumanoid43.segments[128] = HAnimSegment1298;

HAnimSegment HAnimSegment1299 = createNode("HAnimSegment");
HAnimSegment1299.USE = "hanim_c3";
HAnimHumanoid43.segments[129] = HAnimSegment1299;

HAnimSegment HAnimSegment1300 = createNode("HAnimSegment");
HAnimSegment1300.USE = "hanim_c2";
HAnimHumanoid43.segments[130] = HAnimSegment1300;

HAnimSegment HAnimSegment1301 = createNode("HAnimSegment");
HAnimSegment1301.USE = "hanim_c1";
HAnimHumanoid43.segments[131] = HAnimSegment1301;

HAnimSegment HAnimSegment1302 = createNode("HAnimSegment");
HAnimSegment1302.USE = "hanim_skull";
HAnimHumanoid43.segments[132] = HAnimSegment1302;

HAnimSegment HAnimSegment1303 = createNode("HAnimSegment");
HAnimSegment1303.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[133] = HAnimSegment1303;

HAnimSegment HAnimSegment1304 = createNode("HAnimSegment");
HAnimSegment1304.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[134] = HAnimSegment1304;

HAnimSegment HAnimSegment1305 = createNode("HAnimSegment");
HAnimSegment1305.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[135] = HAnimSegment1305;

HAnimSegment HAnimSegment1306 = createNode("HAnimSegment");
HAnimSegment1306.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[136] = HAnimSegment1306;

HAnimSegment HAnimSegment1307 = createNode("HAnimSegment");
HAnimSegment1307.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[137] = HAnimSegment1307;

HAnimSegment HAnimSegment1308 = createNode("HAnimSegment");
HAnimSegment1308.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[138] = HAnimSegment1308;

HAnimSegment HAnimSegment1309 = createNode("HAnimSegment");
HAnimSegment1309.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[139] = HAnimSegment1309;

HAnimSegment HAnimSegment1310 = createNode("HAnimSegment");
HAnimSegment1310.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[140] = HAnimSegment1310;

HAnimSegment HAnimSegment1311 = createNode("HAnimSegment");
HAnimSegment1311.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[141] = HAnimSegment1311;

HAnimSegment HAnimSegment1312 = createNode("HAnimSegment");
HAnimSegment1312.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[142] = HAnimSegment1312;

HAnimSegment HAnimSegment1313 = createNode("HAnimSegment");
HAnimSegment1313.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[143] = HAnimSegment1313;

HAnimSegment HAnimSegment1314 = createNode("HAnimSegment");
HAnimSegment1314.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[144] = HAnimSegment1314;

HAnimSegment HAnimSegment1315 = createNode("HAnimSegment");
HAnimSegment1315.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[145] = HAnimSegment1315;

HAnimSegment HAnimSegment1316 = createNode("HAnimSegment");
HAnimSegment1316.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[146] = HAnimSegment1316;

HAnimSegment HAnimSegment1317 = createNode("HAnimSegment");
HAnimSegment1317.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[147] = HAnimSegment1317;

HAnimSegment HAnimSegment1318 = createNode("HAnimSegment");
HAnimSegment1318.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[148] = HAnimSegment1318;

HAnimSegment HAnimSegment1319 = createNode("HAnimSegment");
HAnimSegment1319.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[149] = HAnimSegment1319;

HAnimSegment HAnimSegment1320 = createNode("HAnimSegment");
HAnimSegment1320.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[150] = HAnimSegment1320;

HAnimSegment HAnimSegment1321 = createNode("HAnimSegment");
HAnimSegment1321.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[151] = HAnimSegment1321;

HAnimSegment HAnimSegment1322 = createNode("HAnimSegment");
HAnimSegment1322.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[152] = HAnimSegment1322;

HAnimSegment HAnimSegment1323 = createNode("HAnimSegment");
HAnimSegment1323.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[153] = HAnimSegment1323;

HAnimSegment HAnimSegment1324 = createNode("HAnimSegment");
HAnimSegment1324.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[154] = HAnimSegment1324;

HAnimSegment HAnimSegment1325 = createNode("HAnimSegment");
HAnimSegment1325.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[155] = HAnimSegment1325;

HAnimSegment HAnimSegment1326 = createNode("HAnimSegment");
HAnimSegment1326.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[156] = HAnimSegment1326;

HAnimSegment HAnimSegment1327 = createNode("HAnimSegment");
HAnimSegment1327.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[157] = HAnimSegment1327;

HAnimSegment HAnimSegment1328 = createNode("HAnimSegment");
HAnimSegment1328.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[158] = HAnimSegment1328;

HAnimSegment HAnimSegment1329 = createNode("HAnimSegment");
HAnimSegment1329.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[159] = HAnimSegment1329;

HAnimSegment HAnimSegment1330 = createNode("HAnimSegment");
HAnimSegment1330.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[160] = HAnimSegment1330;

HAnimSegment HAnimSegment1331 = createNode("HAnimSegment");
HAnimSegment1331.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[161] = HAnimSegment1331;

HAnimSegment HAnimSegment1332 = createNode("HAnimSegment");
HAnimSegment1332.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[162] = HAnimSegment1332;

HAnimSegment HAnimSegment1333 = createNode("HAnimSegment");
HAnimSegment1333.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[163] = HAnimSegment1333;

HAnimSegment HAnimSegment1334 = createNode("HAnimSegment");
HAnimSegment1334.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[164] = HAnimSegment1334;

HAnimSegment HAnimSegment1335 = createNode("HAnimSegment");
HAnimSegment1335.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[165] = HAnimSegment1335;

HAnimSegment HAnimSegment1336 = createNode("HAnimSegment");
HAnimSegment1336.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[166] = HAnimSegment1336;

HAnimSegment HAnimSegment1337 = createNode("HAnimSegment");
HAnimSegment1337.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[167] = HAnimSegment1337;

HAnimSegment HAnimSegment1338 = createNode("HAnimSegment");
HAnimSegment1338.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[168] = HAnimSegment1338;

HAnimSegment HAnimSegment1339 = createNode("HAnimSegment");
HAnimSegment1339.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[169] = HAnimSegment1339;

HAnimSegment HAnimSegment1340 = createNode("HAnimSegment");
HAnimSegment1340.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[170] = HAnimSegment1340;

HAnimSite HAnimSite1341 = createNode("HAnimSite");
HAnimSite1341.USE = "hanim_buttocks_standing_wall_contact_point";
HAnimHumanoid43.viewpoints[171] = HAnimSite1341;

HAnimSite HAnimSite1342 = createNode("HAnimSite");
HAnimSite1342.USE = "hanim_crotch";
HAnimHumanoid43.viewpoints[172] = HAnimSite1342;

HAnimSite HAnimSite1343 = createNode("HAnimSite");
HAnimSite1343.USE = "hanim_l_asis";
HAnimHumanoid43.viewpoints[173] = HAnimSite1343;

HAnimSite HAnimSite1344 = createNode("HAnimSite");
HAnimSite1344.USE = "hanim_l_iliocristale";
HAnimHumanoid43.viewpoints[174] = HAnimSite1344;

HAnimSite HAnimSite1345 = createNode("HAnimSite");
HAnimSite1345.USE = "hanim_l_psis";
HAnimHumanoid43.viewpoints[175] = HAnimSite1345;

HAnimSite HAnimSite1346 = createNode("HAnimSite");
HAnimSite1346.USE = "hanim_l_trochanterion";
HAnimHumanoid43.viewpoints[176] = HAnimSite1346;

HAnimSite HAnimSite1347 = createNode("HAnimSite");
HAnimSite1347.USE = "hanim_r_asis";
HAnimHumanoid43.viewpoints[177] = HAnimSite1347;

HAnimSite HAnimSite1348 = createNode("HAnimSite");
HAnimSite1348.USE = "hanim_r_iliocristale";
HAnimHumanoid43.viewpoints[178] = HAnimSite1348;

HAnimSite HAnimSite1349 = createNode("HAnimSite");
HAnimSite1349.USE = "hanim_r_psis";
HAnimHumanoid43.viewpoints[179] = HAnimSite1349;

HAnimSite HAnimSite1350 = createNode("HAnimSite");
HAnimSite1350.USE = "hanim_r_trochanterion";
HAnimHumanoid43.viewpoints[180] = HAnimSite1350;

HAnimSite HAnimSite1351 = createNode("HAnimSite");
HAnimSite1351.USE = "hanim_navel";
HAnimHumanoid43.viewpoints[181] = HAnimSite1351;

HAnimSite HAnimSite1352 = createNode("HAnimSite");
HAnimSite1352.USE = "hanim_waist_preferred_anterior";
HAnimHumanoid43.viewpoints[182] = HAnimSite1352;

HAnimSite HAnimSite1353 = createNode("HAnimSite");
HAnimSite1353.USE = "hanim_waist_preferred_posterior";
HAnimHumanoid43.viewpoints[183] = HAnimSite1353;

HAnimSite HAnimSite1354 = createNode("HAnimSite");
HAnimSite1354.USE = "hanim_l_femoral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[184] = HAnimSite1354;

HAnimSite HAnimSite1355 = createNode("HAnimSite");
HAnimSite1355.USE = "hanim_l_femoral_medial_epicondyles";
HAnimHumanoid43.viewpoints[185] = HAnimSite1355;

HAnimSite HAnimSite1356 = createNode("HAnimSite");
HAnimSite1356.USE = "hanim_l_knee_crease";
HAnimHumanoid43.viewpoints[186] = HAnimSite1356;

HAnimSite HAnimSite1357 = createNode("HAnimSite");
HAnimSite1357.USE = "hanim_l_suprapatella";
HAnimHumanoid43.viewpoints[187] = HAnimSite1357;

HAnimSite HAnimSite1358 = createNode("HAnimSite");
HAnimSite1358.USE = "hanim_r_femoral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[188] = HAnimSite1358;

HAnimSite HAnimSite1359 = createNode("HAnimSite");
HAnimSite1359.USE = "hanim_r_femoral_medial_epicondyles";
HAnimHumanoid43.viewpoints[189] = HAnimSite1359;

HAnimSite HAnimSite1360 = createNode("HAnimSite");
HAnimSite1360.USE = "hanim_r_knee_crease";
HAnimHumanoid43.viewpoints[190] = HAnimSite1360;

HAnimSite HAnimSite1361 = createNode("HAnimSite");
HAnimSite1361.USE = "hanim_r_suprapatella";
HAnimHumanoid43.viewpoints[191] = HAnimSite1361;

HAnimSite HAnimSite1362 = createNode("HAnimSite");
HAnimSite1362.USE = "hanim_l_lateral_malleolus";
HAnimHumanoid43.viewpoints[192] = HAnimSite1362;

HAnimSite HAnimSite1363 = createNode("HAnimSite");
HAnimSite1363.USE = "hanim_l_medial_malleolus";
HAnimHumanoid43.viewpoints[193] = HAnimSite1363;

HAnimSite HAnimSite1364 = createNode("HAnimSite");
HAnimSite1364.USE = "hanim_l_tibiale";
HAnimHumanoid43.viewpoints[194] = HAnimSite1364;

HAnimSite HAnimSite1365 = createNode("HAnimSite");
HAnimSite1365.USE = "hanim_l_calcaneus_posterior";
HAnimHumanoid43.viewpoints[195] = HAnimSite1365;

HAnimSite HAnimSite1366 = createNode("HAnimSite");
HAnimSite1366.USE = "hanim_l_sphyrion";
HAnimHumanoid43.viewpoints[196] = HAnimSite1366;

HAnimSite HAnimSite1367 = createNode("HAnimSite");
HAnimSite1367.USE = "hanim_l_metatarsal_phalanx_1";
HAnimHumanoid43.viewpoints[197] = HAnimSite1367;

HAnimSite HAnimSite1368 = createNode("HAnimSite");
HAnimSite1368.USE = "hanim_l_metatarsal_phalanx_5";
HAnimHumanoid43.viewpoints[198] = HAnimSite1368;

HAnimSite HAnimSite1369 = createNode("HAnimSite");
HAnimSite1369.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[199] = HAnimSite1369;

HAnimSite HAnimSite1370 = createNode("HAnimSite");
HAnimSite1370.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[200] = HAnimSite1370;

HAnimSite HAnimSite1371 = createNode("HAnimSite");
HAnimSite1371.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[201] = HAnimSite1371;

HAnimSite HAnimSite1372 = createNode("HAnimSite");
HAnimSite1372.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[202] = HAnimSite1372;

HAnimSite HAnimSite1373 = createNode("HAnimSite");
HAnimSite1373.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[203] = HAnimSite1373;

HAnimSite HAnimSite1374 = createNode("HAnimSite");
HAnimSite1374.USE = "hanim_r_lateral_malleolus";
HAnimHumanoid43.viewpoints[204] = HAnimSite1374;

HAnimSite HAnimSite1375 = createNode("HAnimSite");
HAnimSite1375.USE = "hanim_r_medial_malleolus";
HAnimHumanoid43.viewpoints[205] = HAnimSite1375;

HAnimSite HAnimSite1376 = createNode("HAnimSite");
HAnimSite1376.USE = "hanim_r_tibiale";
HAnimHumanoid43.viewpoints[206] = HAnimSite1376;

HAnimSite HAnimSite1377 = createNode("HAnimSite");
HAnimSite1377.USE = "hanim_r_calcaneus_posterior";
HAnimHumanoid43.viewpoints[207] = HAnimSite1377;

HAnimSite HAnimSite1378 = createNode("HAnimSite");
HAnimSite1378.USE = "hanim_r_sphyrion";
HAnimHumanoid43.viewpoints[208] = HAnimSite1378;

HAnimSite HAnimSite1379 = createNode("HAnimSite");
HAnimSite1379.USE = "hanim_r_metatarsal_phalanx_1";
HAnimHumanoid43.viewpoints[209] = HAnimSite1379;

HAnimSite HAnimSite1380 = createNode("HAnimSite");
HAnimSite1380.USE = "hanim_r_metatarsal_phalanx_5";
HAnimHumanoid43.viewpoints[210] = HAnimSite1380;

HAnimSite HAnimSite1381 = createNode("HAnimSite");
HAnimSite1381.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[211] = HAnimSite1381;

HAnimSite HAnimSite1382 = createNode("HAnimSite");
HAnimSite1382.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[212] = HAnimSite1382;

HAnimSite HAnimSite1383 = createNode("HAnimSite");
HAnimSite1383.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[213] = HAnimSite1383;

HAnimSite HAnimSite1384 = createNode("HAnimSite");
HAnimSite1384.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[214] = HAnimSite1384;

HAnimSite HAnimSite1385 = createNode("HAnimSite");
HAnimSite1385.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[215] = HAnimSite1385;

HAnimSite HAnimSite1386 = createNode("HAnimSite");
HAnimSite1386.USE = "hanim_l_rib10";
HAnimHumanoid43.viewpoints[216] = HAnimSite1386;

HAnimSite HAnimSite1387 = createNode("HAnimSite");
HAnimSite1387.USE = "hanim_r_rib10";
HAnimHumanoid43.viewpoints[217] = HAnimSite1387;

HAnimSite HAnimSite1388 = createNode("HAnimSite");
HAnimSite1388.USE = "hanim_spine_2_middle_back";
HAnimHumanoid43.viewpoints[218] = HAnimSite1388;

HAnimSite HAnimSite1389 = createNode("HAnimSite");
HAnimSite1389.USE = "hanim_substernale";
HAnimHumanoid43.viewpoints[219] = HAnimSite1389;

HAnimSite HAnimSite1390 = createNode("HAnimSite");
HAnimSite1390.USE = "hanim_l_thelion";
HAnimHumanoid43.viewpoints[220] = HAnimSite1390;

HAnimSite HAnimSite1391 = createNode("HAnimSite");
HAnimSite1391.USE = "hanim_r_thelion";
HAnimHumanoid43.viewpoints[221] = HAnimSite1391;

HAnimSite HAnimSite1392 = createNode("HAnimSite");
HAnimSite1392.USE = "hanim_l_chest_midsagittal_plane";
HAnimHumanoid43.viewpoints[222] = HAnimSite1392;

HAnimSite HAnimSite1393 = createNode("HAnimSite");
HAnimSite1393.USE = "hanim_mesosternale";
HAnimHumanoid43.viewpoints[223] = HAnimSite1393;

HAnimSite HAnimSite1394 = createNode("HAnimSite");
HAnimSite1394.USE = "hanim_r_chest_midsagittal_plane";
HAnimHumanoid43.viewpoints[224] = HAnimSite1394;

HAnimSite HAnimSite1395 = createNode("HAnimSite");
HAnimSite1395.USE = "hanim_rear_center_midsagittal_plane";
HAnimHumanoid43.viewpoints[225] = HAnimSite1395;

HAnimSite HAnimSite1396 = createNode("HAnimSite");
HAnimSite1396.USE = "hanim_spine_1_middle_back";
HAnimHumanoid43.viewpoints[226] = HAnimSite1396;

HAnimSite HAnimSite1397 = createNode("HAnimSite");
HAnimSite1397.USE = "hanim_cervicale";
HAnimHumanoid43.viewpoints[227] = HAnimSite1397;

HAnimSite HAnimSite1398 = createNode("HAnimSite");
HAnimSite1398.USE = "hanim_suprasternale";
HAnimHumanoid43.viewpoints[228] = HAnimSite1398;

HAnimSite HAnimSite1399 = createNode("HAnimSite");
HAnimSite1399.USE = "hanim_l_neck_base";
HAnimHumanoid43.viewpoints[229] = HAnimSite1399;

HAnimSite HAnimSite1400 = createNode("HAnimSite");
HAnimSite1400.USE = "hanim_r_neck_base";
HAnimHumanoid43.viewpoints[230] = HAnimSite1400;

HAnimSite HAnimSite1401 = createNode("HAnimSite");
HAnimSite1401.USE = "hanim_l_acromion";
HAnimHumanoid43.viewpoints[231] = HAnimSite1401;

HAnimSite HAnimSite1402 = createNode("HAnimSite");
HAnimSite1402.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[232] = HAnimSite1402;

HAnimSite HAnimSite1403 = createNode("HAnimSite");
HAnimSite1403.USE = "hanim_l_axilla_posterior_folds";
HAnimHumanoid43.viewpoints[233] = HAnimSite1403;

HAnimSite HAnimSite1404 = createNode("HAnimSite");
HAnimSite1404.USE = "hanim_l_axilla_proximal";
HAnimHumanoid43.viewpoints[234] = HAnimSite1404;

HAnimSite HAnimSite1405 = createNode("HAnimSite");
HAnimSite1405.USE = "hanim_l_clavicale";
HAnimHumanoid43.viewpoints[235] = HAnimSite1405;

HAnimSite HAnimSite1406 = createNode("HAnimSite");
HAnimSite1406.USE = "hanim_r_acromion";
HAnimHumanoid43.viewpoints[236] = HAnimSite1406;

HAnimSite HAnimSite1407 = createNode("HAnimSite");
HAnimSite1407.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[237] = HAnimSite1407;

HAnimSite HAnimSite1408 = createNode("HAnimSite");
HAnimSite1408.USE = "hanim_r_axilla_posterior_folds";
HAnimHumanoid43.viewpoints[238] = HAnimSite1408;

HAnimSite HAnimSite1409 = createNode("HAnimSite");
HAnimSite1409.USE = "hanim_r_axilla_proximal";
HAnimHumanoid43.viewpoints[239] = HAnimSite1409;

HAnimSite HAnimSite1410 = createNode("HAnimSite");
HAnimSite1410.USE = "hanim_r_clavicale";
HAnimHumanoid43.viewpoints[240] = HAnimSite1410;

HAnimSite HAnimSite1411 = createNode("HAnimSite");
HAnimSite1411.USE = "hanim_adams_apple";
HAnimHumanoid43.viewpoints[241] = HAnimSite1411;

HAnimSite HAnimSite1412 = createNode("HAnimSite");
HAnimSite1412.USE = "hanim_glabella";
HAnimHumanoid43.viewpoints[242] = HAnimSite1412;

HAnimSite HAnimSite1413 = createNode("HAnimSite");
HAnimSite1413.USE = "hanim_l_ectocanthus";
HAnimHumanoid43.viewpoints[243] = HAnimSite1413;

HAnimSite HAnimSite1414 = createNode("HAnimSite");
HAnimSite1414.USE = "hanim_l_infraorbitale";
HAnimHumanoid43.viewpoints[244] = HAnimSite1414;

HAnimSite HAnimSite1415 = createNode("HAnimSite");
HAnimSite1415.USE = "hanim_l_tragion";
HAnimHumanoid43.viewpoints[245] = HAnimSite1415;

HAnimSite HAnimSite1416 = createNode("HAnimSite");
HAnimSite1416.USE = "hanim_nuchale";
HAnimHumanoid43.viewpoints[246] = HAnimSite1416;

HAnimSite HAnimSite1417 = createNode("HAnimSite");
HAnimSite1417.USE = "hanim_opisthocranion";
HAnimHumanoid43.viewpoints[247] = HAnimSite1417;

HAnimSite HAnimSite1418 = createNode("HAnimSite");
HAnimSite1418.USE = "hanim_r_ectocanthus";
HAnimHumanoid43.viewpoints[248] = HAnimSite1418;

HAnimSite HAnimSite1419 = createNode("HAnimSite");
HAnimSite1419.USE = "hanim_r_infraorbitale";
HAnimHumanoid43.viewpoints[249] = HAnimSite1419;

HAnimSite HAnimSite1420 = createNode("HAnimSite");
HAnimSite1420.USE = "hanim_r_tragion";
HAnimHumanoid43.viewpoints[250] = HAnimSite1420;

HAnimSite HAnimSite1421 = createNode("HAnimSite");
HAnimSite1421.USE = "hanim_sellion";
HAnimHumanoid43.viewpoints[251] = HAnimSite1421;

HAnimSite HAnimSite1422 = createNode("HAnimSite");
HAnimSite1422.USE = "hanim_skull_vertex";
HAnimHumanoid43.viewpoints[252] = HAnimSite1422;

HAnimSite HAnimSite1423 = createNode("HAnimSite");
HAnimSite1423.USE = "hanim_l_gonion";
HAnimHumanoid43.viewpoints[253] = HAnimSite1423;

HAnimSite HAnimSite1424 = createNode("HAnimSite");
HAnimSite1424.USE = "hanim_menton";
HAnimHumanoid43.viewpoints[254] = HAnimSite1424;

HAnimSite HAnimSite1425 = createNode("HAnimSite");
HAnimSite1425.USE = "hanim_r_gonion";
HAnimHumanoid43.viewpoints[255] = HAnimSite1425;

HAnimSite HAnimSite1426 = createNode("HAnimSite");
HAnimSite1426.USE = "hanim_supramenton";
HAnimHumanoid43.viewpoints[256] = HAnimSite1426;

HAnimSite HAnimSite1427 = createNode("HAnimSite");
HAnimSite1427.USE = "hanim_l_bideltoid";
HAnimHumanoid43.viewpoints[257] = HAnimSite1427;

HAnimSite HAnimSite1428 = createNode("HAnimSite");
HAnimSite1428.USE = "hanim_l_humeral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[258] = HAnimSite1428;

HAnimSite HAnimSite1429 = createNode("HAnimSite");
HAnimSite1429.USE = "hanim_l_humeral_medial_epicondyles";
HAnimHumanoid43.viewpoints[259] = HAnimSite1429;

HAnimSite HAnimSite1430 = createNode("HAnimSite");
HAnimSite1430.USE = "hanim_l_olecranon";
HAnimHumanoid43.viewpoints[260] = HAnimSite1430;

HAnimSite HAnimSite1431 = createNode("HAnimSite");
HAnimSite1431.USE = "hanim_l_radial_styloid";
HAnimHumanoid43.viewpoints[261] = HAnimSite1431;

HAnimSite HAnimSite1432 = createNode("HAnimSite");
HAnimSite1432.USE = "hanim_l_radiale";
HAnimHumanoid43.viewpoints[262] = HAnimSite1432;

HAnimSite HAnimSite1433 = createNode("HAnimSite");
HAnimSite1433.USE = "hanim_l_ulnar_styloid";
HAnimHumanoid43.viewpoints[263] = HAnimSite1433;

HAnimSite HAnimSite1434 = createNode("HAnimSite");
HAnimSite1434.USE = "hanim_l_metacarpal_phalanx_2";
HAnimHumanoid43.viewpoints[264] = HAnimSite1434;

HAnimSite HAnimSite1435 = createNode("HAnimSite");
HAnimSite1435.USE = "hanim_l_metacarpal_phalanx_3";
HAnimHumanoid43.viewpoints[265] = HAnimSite1435;

HAnimSite HAnimSite1436 = createNode("HAnimSite");
HAnimSite1436.USE = "hanim_l_metacarpal_phalanx_5";
HAnimHumanoid43.viewpoints[266] = HAnimSite1436;

HAnimSite HAnimSite1437 = createNode("HAnimSite");
HAnimSite1437.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[267] = HAnimSite1437;

HAnimSite HAnimSite1438 = createNode("HAnimSite");
HAnimSite1438.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[268] = HAnimSite1438;

HAnimSite HAnimSite1439 = createNode("HAnimSite");
HAnimSite1439.USE = "hanim_l_dactylion";
HAnimHumanoid43.viewpoints[269] = HAnimSite1439;

HAnimSite HAnimSite1440 = createNode("HAnimSite");
HAnimSite1440.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[270] = HAnimSite1440;

HAnimSite HAnimSite1441 = createNode("HAnimSite");
HAnimSite1441.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[271] = HAnimSite1441;

HAnimSite HAnimSite1442 = createNode("HAnimSite");
HAnimSite1442.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[272] = HAnimSite1442;

HAnimSite HAnimSite1443 = createNode("HAnimSite");
HAnimSite1443.USE = "hanim_r_bideltoid";
HAnimHumanoid43.viewpoints[273] = HAnimSite1443;

HAnimSite HAnimSite1444 = createNode("HAnimSite");
HAnimSite1444.USE = "hanim_r_humeral_lateral_epicondyles";
HAnimHumanoid43.viewpoints[274] = HAnimSite1444;

HAnimSite HAnimSite1445 = createNode("HAnimSite");
HAnimSite1445.USE = "hanim_r_humeral_medial_epicondyles";
HAnimHumanoid43.viewpoints[275] = HAnimSite1445;

HAnimSite HAnimSite1446 = createNode("HAnimSite");
HAnimSite1446.USE = "hanim_r_olecranon";
HAnimHumanoid43.viewpoints[276] = HAnimSite1446;

HAnimSite HAnimSite1447 = createNode("HAnimSite");
HAnimSite1447.USE = "hanim_r_radial_styloid";
HAnimHumanoid43.viewpoints[277] = HAnimSite1447;

HAnimSite HAnimSite1448 = createNode("HAnimSite");
HAnimSite1448.USE = "hanim_r_radiale";
HAnimHumanoid43.viewpoints[278] = HAnimSite1448;

HAnimSite HAnimSite1449 = createNode("HAnimSite");
HAnimSite1449.USE = "hanim_r_ulnar_styloid";
HAnimHumanoid43.viewpoints[279] = HAnimSite1449;

HAnimSite HAnimSite1450 = createNode("HAnimSite");
HAnimSite1450.USE = "hanim_r_metacarpal_phalanx_2";
HAnimHumanoid43.viewpoints[280] = HAnimSite1450;

HAnimSite HAnimSite1451 = createNode("HAnimSite");
HAnimSite1451.USE = "hanim_r_metacarpal_phalanx_3";
HAnimHumanoid43.viewpoints[281] = HAnimSite1451;

HAnimSite HAnimSite1452 = createNode("HAnimSite");
HAnimSite1452.USE = "hanim_r_metacarpal_phalanx_5";
HAnimHumanoid43.viewpoints[282] = HAnimSite1452;

HAnimSite HAnimSite1453 = createNode("HAnimSite");
HAnimSite1453.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[283] = HAnimSite1453;

HAnimSite HAnimSite1454 = createNode("HAnimSite");
HAnimSite1454.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[284] = HAnimSite1454;

HAnimSite HAnimSite1455 = createNode("HAnimSite");
HAnimSite1455.USE = "hanim_r_dactylion";
HAnimHumanoid43.viewpoints[285] = HAnimSite1455;

HAnimSite HAnimSite1456 = createNode("HAnimSite");
HAnimSite1456.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[286] = HAnimSite1456;

HAnimSite HAnimSite1457 = createNode("HAnimSite");
HAnimSite1457.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[287] = HAnimSite1457;

HAnimSite HAnimSite1458 = createNode("HAnimSite");
HAnimSite1458.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[288] = HAnimSite1458;

children[4] = HAnimHumanoid43;

}
