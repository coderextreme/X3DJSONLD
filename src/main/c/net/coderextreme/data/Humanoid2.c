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

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

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

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

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

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

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

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

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

Transform34.children = new MFNode();

Transform34.children[0] = Shape35;

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
ImageTexture49.url = new MFString(new java.lang.String["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
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
Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

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
Transform107.children = new MFNode();

Transform107.children[0] = Shape108;

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
Transform144.children = new MFNode();

Transform144.children[0] = Shape145;

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
Transform162.children = new MFNode();

Transform162.children[0] = Shape163;

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
Transform177.children = new MFNode();

Transform177.children[0] = Shape178;

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
Transform186.children = new MFNode();

Transform186.children[0] = Shape187;

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

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

HAnimJoint HAnimJoint192 = createNode("HAnimJoint");
HAnimJoint192.name = "l_metatarsophalangeal_2";
HAnimJoint192.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint192.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint192.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint192.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment193 = createNode("HAnimSegment");
HAnimSegment193.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment193.DEF = "hanim_l_tarsal_proximal_phalanx_2";
Transform Transform194 = createNode("Transform");
Transform194.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
Transform Transform195 = createNode("Transform");
//Empty Transform
Shape Shape196 = createNode("Shape");
Shape196.USE = "HAnimJointShape";
Transform195.children = new MFNode();

Transform195.children[0] = Shape196;

Transform194.children = new MFNode();

Transform194.children[0] = Transform195;

HAnimSegment193.children = new MFNode();

HAnimSegment193.children[0] = Transform194;

Shape Shape197 = createNode("Shape");
LineSet LineSet198 = createNode("LineSet");
LineSet198.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate199 = createNode("Coordinate");
Coordinate199.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0013,0.0216]);
LineSet198.coord = Coordinate199;

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA200 = createNode("ColorRGBA");
ColorRGBA200.USE = "HAnimSegmentLineColorRGBA";
LineSet198.color = ColorRGBA200;

Shape197.geometry = LineSet198;

HAnimSegment193.children[1] = Shape197;

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

HAnimSegment193.children[2] = HAnimSite201;

HAnimJoint192.children = new MFNode();

HAnimJoint192.children[0] = HAnimSegment193;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint204.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint204.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint204.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint204.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint192.children[1] = HAnimJoint204;

HAnimJoint183.children[1] = HAnimJoint192;

HAnimJoint174.children[1] = HAnimJoint183;

HAnimJoint159.children[1] = HAnimJoint174;

HAnimJoint141.children[1] = HAnimJoint159;

HAnimJoint104.children[1] = HAnimJoint141;

HAnimJoint HAnimJoint205 = createNode("HAnimJoint");
HAnimJoint205.name = "r_hip";
HAnimJoint205.DEF = "hanim_r_hip";
HAnimJoint205.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint205.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint205.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment206 = createNode("HAnimSegment");
HAnimSegment206.name = "r_thigh";
HAnimSegment206.DEF = "hanim_r_thigh";
Transform Transform207 = createNode("Transform");
Transform207.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform208 = createNode("Transform");
//Empty Transform
Shape Shape209 = createNode("Shape");
Shape209.USE = "HAnimJointShape";
Transform208.children = new MFNode();

Transform208.children[0] = Shape209;

Transform207.children = new MFNode();

Transform207.children[0] = Transform208;

HAnimSegment206.children = new MFNode();

HAnimSegment206.children[0] = Transform207;

Shape Shape210 = createNode("Shape");
LineSet LineSet211 = createNode("LineSet");
LineSet211.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate212 = createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet211.coord = Coordinate212;

//from r_hip to r_knee vertices 2
ColorRGBA ColorRGBA213 = createNode("ColorRGBA");
ColorRGBA213.USE = "HAnimSegmentLineColorRGBA";
LineSet211.color = ColorRGBA213;

Shape210.geometry = LineSet211;

HAnimSegment206.children[1] = Shape210;

HAnimSite HAnimSite214 = createNode("HAnimSite");
HAnimSite214.name = "r_lateral_malleolus_pt";
HAnimSite214.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite214.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor215 = createNode("TouchSensor");
TouchSensor215.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite214.children = new MFNode();

HAnimSite214.children[0] = TouchSensor215;

Shape Shape216 = createNode("Shape");
Shape216.USE = "HAnimSiteShape";
HAnimSite214.children[1] = Shape216;

HAnimSegment206.children[2] = HAnimSite214;

HAnimSite HAnimSite217 = createNode("HAnimSite");
HAnimSite217.name = "r_medial_malleolus_pt";
HAnimSite217.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite217.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor218 = createNode("TouchSensor");
TouchSensor218.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite217.children = new MFNode();

HAnimSite217.children[0] = TouchSensor218;

Shape Shape219 = createNode("Shape");
Shape219.USE = "HAnimSiteShape";
HAnimSite217.children[1] = Shape219;

HAnimSegment206.children[3] = HAnimSite217;

HAnimSite HAnimSite220 = createNode("HAnimSite");
HAnimSite220.name = "r_tibiale_pt";
HAnimSite220.DEF = "hanim_r_tibiale_pt";
TouchSensor TouchSensor221 = createNode("TouchSensor");
TouchSensor221.description = "HAnimSite r_tibiale_pt";
HAnimSite220.children = new MFNode();

HAnimSite220.children[0] = TouchSensor221;

Shape Shape222 = createNode("Shape");
Shape222.USE = "HAnimSiteShape";
HAnimSite220.children[1] = Shape222;

HAnimSegment206.children[4] = HAnimSite220;

HAnimJoint205.children = new MFNode();

HAnimJoint205.children[0] = HAnimSegment206;

HAnimJoint HAnimJoint223 = createNode("HAnimJoint");
HAnimJoint223.name = "r_knee";
HAnimJoint223.DEF = "hanim_r_knee";
HAnimJoint223.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint223.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment224 = createNode("HAnimSegment");
HAnimSegment224.name = "r_calf";
HAnimSegment224.DEF = "hanim_r_calf";
Transform Transform225 = createNode("Transform");
Transform225.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform226 = createNode("Transform");
//Empty Transform
Shape Shape227 = createNode("Shape");
Shape227.USE = "HAnimJointShape";
Transform226.children = new MFNode();

Transform226.children[0] = Shape227;

Transform225.children = new MFNode();

Transform225.children[0] = Transform226;

HAnimSegment224.children = new MFNode();

HAnimSegment224.children[0] = Transform225;

Shape Shape228 = createNode("Shape");
LineSet LineSet229 = createNode("LineSet");
LineSet229.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate230 = createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet229.coord = Coordinate230;

//from r_knee to r_talocrural vertices 2
ColorRGBA ColorRGBA231 = createNode("ColorRGBA");
ColorRGBA231.USE = "HAnimSegmentLineColorRGBA";
LineSet229.color = ColorRGBA231;

Shape228.geometry = LineSet229;

HAnimSegment224.children[1] = Shape228;

HAnimSite HAnimSite232 = createNode("HAnimSite");
HAnimSite232.name = "r_calcaneus_posterior_pt";
HAnimSite232.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite232.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor233 = createNode("TouchSensor");
TouchSensor233.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite232.children = new MFNode();

HAnimSite232.children[0] = TouchSensor233;

Shape Shape234 = createNode("Shape");
Shape234.USE = "HAnimSiteShape";
HAnimSite232.children[1] = Shape234;

HAnimSegment224.children[2] = HAnimSite232;

HAnimSite HAnimSite235 = createNode("HAnimSite");
HAnimSite235.name = "r_sphyrion_pt";
HAnimSite235.DEF = "hanim_r_sphyrion_pt";
HAnimSite235.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor236 = createNode("TouchSensor");
TouchSensor236.description = "HAnimSite r_sphyrion_pt";
HAnimSite235.children = new MFNode();

HAnimSite235.children[0] = TouchSensor236;

Shape Shape237 = createNode("Shape");
Shape237.USE = "HAnimSiteShape";
HAnimSite235.children[1] = Shape237;

HAnimSegment224.children[3] = HAnimSite235;

HAnimJoint223.children = new MFNode();

HAnimJoint223.children[0] = HAnimSegment224;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.name = "r_talocrural";
HAnimJoint238.DEF = "hanim_r_talocrural";
HAnimJoint238.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint238.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint238.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment239 = createNode("HAnimSegment");
HAnimSegment239.name = "r_talus";
HAnimSegment239.DEF = "hanim_r_talus";
Transform Transform240 = createNode("Transform");
Transform240.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform240.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform240.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
Transform Transform241 = createNode("Transform");
//Empty Transform right foot
Shape Shape242 = createNode("Shape");
Shape242.USE = "HAnimJointShape";
Transform241.children = new MFNode();

Transform241.children[0] = Shape242;

Transform240.children = new MFNode();

Transform240.children[0] = Transform241;

HAnimSegment239.children = new MFNode();

HAnimSegment239.children[0] = Transform240;

Shape Shape243 = createNode("Shape");
LineSet LineSet244 = createNode("LineSet");
LineSet244.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate245 = createNode("Coordinate");
Coordinate245.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608]);
LineSet244.coord = Coordinate245;

//from r_talocrural to r_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA246 = createNode("ColorRGBA");
ColorRGBA246.USE = "HAnimSegmentLineColorRGBA";
LineSet244.color = ColorRGBA246;

Shape243.geometry = LineSet244;

HAnimSegment239.children[1] = Shape243;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

HAnimJoint HAnimJoint247 = createNode("HAnimJoint");
HAnimJoint247.name = "r_tarsometatarsal_2";
HAnimJoint247.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint247.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
HAnimJoint247.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint247.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment248 = createNode("HAnimSegment");
HAnimSegment248.name = "r_metatarsal_2";
HAnimSegment248.DEF = "hanim_r_metatarsal_2";
Transform Transform249 = createNode("Transform");
Transform249.translation = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
Transform Transform250 = createNode("Transform");
//Empty Transform
Shape Shape251 = createNode("Shape");
Shape251.USE = "HAnimJointShape";
Transform250.children = new MFNode();

Transform250.children[0] = Shape251;

Transform249.children = new MFNode();

Transform249.children[0] = Transform250;

HAnimSegment248.children = new MFNode();

HAnimSegment248.children[0] = Transform249;

Shape Shape252 = createNode("Shape");
LineSet LineSet253 = createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate254 = createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
LineSet253.coord = Coordinate254;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA255 = createNode("ColorRGBA");
ColorRGBA255.USE = "HAnimSegmentLineColorRGBA";
LineSet253.color = ColorRGBA255;

Shape252.geometry = LineSet253;

HAnimSegment248.children[1] = Shape252;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

HAnimJoint HAnimJoint256 = createNode("HAnimJoint");
HAnimJoint256.name = "r_metatarsophalangeal_2";
HAnimJoint256.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint256.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint256.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment257 = createNode("HAnimSegment");
HAnimSegment257.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment257.DEF = "hanim_r_tarsal_proximal_phalanx_2";
Transform Transform258 = createNode("Transform");
Transform258.translation = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
Transform Transform259 = createNode("Transform");
//Empty Transform
Shape Shape260 = createNode("Shape");
Shape260.USE = "HAnimJointShape";
Transform259.children = new MFNode();

Transform259.children[0] = Shape260;

Transform258.children = new MFNode();

Transform258.children[0] = Transform259;

HAnimSegment257.children = new MFNode();

HAnimSegment257.children[0] = Transform258;

Shape Shape261 = createNode("Shape");
LineSet LineSet262 = createNode("LineSet");
LineSet262.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate263 = createNode("Coordinate");
Coordinate263.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216]);
LineSet262.coord = Coordinate263;

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA264 = createNode("ColorRGBA");
ColorRGBA264.USE = "HAnimSegmentLineColorRGBA";
LineSet262.color = ColorRGBA264;

Shape261.geometry = LineSet262;

HAnimSegment257.children[1] = Shape261;

HAnimSite HAnimSite265 = createNode("HAnimSite");
HAnimSite265.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite265.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite265.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor266 = createNode("TouchSensor");
TouchSensor266.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = TouchSensor266;

Shape Shape267 = createNode("Shape");
Shape267.USE = "HAnimSiteShape";
HAnimSite265.children[1] = Shape267;

HAnimSegment257.children[2] = HAnimSite265;

HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint268.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint268.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint268.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint268.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint256.children[1] = HAnimJoint268;

HAnimJoint247.children[1] = HAnimJoint256;

HAnimJoint238.children[1] = HAnimJoint247;

HAnimJoint223.children[1] = HAnimJoint238;

HAnimJoint205.children[1] = HAnimJoint223;

HAnimJoint104.children[2] = HAnimJoint205;

HAnimJoint52.children[1] = HAnimJoint104;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.name = "vl5";
HAnimJoint269.DEF = "hanim_vl5";
HAnimJoint269.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint269.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint269.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment270 = createNode("HAnimSegment");
HAnimSegment270.name = "l5";
HAnimSegment270.DEF = "hanim_l5";
Transform Transform271 = createNode("Transform");
Transform271.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Transform Transform272 = createNode("Transform");
//Empty Transform
Shape Shape273 = createNode("Shape");
Shape273.USE = "HAnimJointShape";
Transform272.children = new MFNode();

Transform272.children[0] = Shape273;

Transform271.children = new MFNode();

Transform271.children[0] = Transform272;

HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = Transform271;

Shape Shape274 = createNode("Shape");
LineSet LineSet275 = createNode("LineSet");
LineSet275.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate276 = createNode("Coordinate");
Coordinate276.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796]);
LineSet275.coord = Coordinate276;

//from vl5 to vl3 vertices 2
ColorRGBA ColorRGBA277 = createNode("ColorRGBA");
ColorRGBA277.USE = "HAnimSegmentLineColorRGBA";
LineSet275.color = ColorRGBA277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[1] = Shape274;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.name = "vl3";
HAnimJoint278.DEF = "hanim_vl3";
HAnimJoint278.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint278.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint278.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment279 = createNode("HAnimSegment");
HAnimSegment279.name = "l3";
HAnimSegment279.DEF = "hanim_l3";
Transform Transform280 = createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Transform Transform281 = createNode("Transform");
//Empty Transform
Shape Shape282 = createNode("Shape");
Shape282.USE = "HAnimJointShape";
Transform281.children = new MFNode();

Transform281.children[0] = Shape282;

Transform280.children = new MFNode();

Transform280.children[0] = Transform281;

HAnimSegment279.children = new MFNode();

HAnimSegment279.children[0] = Transform280;

Shape Shape283 = createNode("Shape");
LineSet LineSet284 = createNode("LineSet");
LineSet284.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate285 = createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805]);
LineSet284.coord = Coordinate285;

//from vl3 to vl1 vertices 2
ColorRGBA ColorRGBA286 = createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSegmentLineColorRGBA";
LineSet284.color = ColorRGBA286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

HAnimJoint HAnimJoint287 = createNode("HAnimJoint");
HAnimJoint287.name = "vl1";
HAnimJoint287.DEF = "hanim_vl1";
HAnimJoint287.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint287.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint287.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment288 = createNode("HAnimSegment");
HAnimSegment288.name = "l1";
HAnimSegment288.DEF = "hanim_l1";
Transform Transform289 = createNode("Transform");
Transform289.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform290 = createNode("Transform");
//Empty Transform
Shape Shape291 = createNode("Shape");
Shape291.USE = "HAnimJointShape";
Transform290.children = new MFNode();

Transform290.children[0] = Shape291;

Transform289.children = new MFNode();

Transform289.children[0] = Transform290;

HAnimSegment288.children = new MFNode();

HAnimSegment288.children[0] = Transform289;

Shape Shape292 = createNode("Shape");
LineSet LineSet293 = createNode("LineSet");
LineSet293.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate294 = createNode("Coordinate");
Coordinate294.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822]);
LineSet293.coord = Coordinate294;

//from vl1 to vt10 vertices 2
ColorRGBA ColorRGBA295 = createNode("ColorRGBA");
ColorRGBA295.USE = "HAnimSegmentLineColorRGBA";
LineSet293.color = ColorRGBA295;

Shape292.geometry = LineSet293;

HAnimSegment288.children[1] = Shape292;

HAnimSite HAnimSite296 = createNode("HAnimSite");
HAnimSite296.name = "substernale_pt";
HAnimSite296.DEF = "hanim_substernale_pt";
HAnimSite296.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor297 = createNode("TouchSensor");
TouchSensor297.description = "HAnimSite substernale_pt";
HAnimSite296.children = new MFNode();

HAnimSite296.children[0] = TouchSensor297;

Shape Shape298 = createNode("Shape");
Shape298.USE = "HAnimSiteShape";
HAnimSite296.children[1] = Shape298;

HAnimSegment288.children[2] = HAnimSite296;

HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.name = "vt10";
HAnimJoint299.DEF = "hanim_vt10";
HAnimJoint299.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint299.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint299.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment300 = createNode("HAnimSegment");
HAnimSegment300.name = "t10";
HAnimSegment300.DEF = "hanim_t10";
Transform Transform301 = createNode("Transform");
Transform301.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform302 = createNode("Transform");
//Empty Transform
Shape Shape303 = createNode("Shape");
Shape303.USE = "HAnimJointShape";
Transform302.children = new MFNode();

Transform302.children[0] = Shape303;

Transform301.children = new MFNode();

Transform301.children[0] = Transform302;

HAnimSegment300.children = new MFNode();

HAnimSegment300.children[0] = Transform301;

Shape Shape304 = createNode("Shape");
LineSet LineSet305 = createNode("LineSet");
LineSet305.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate306 = createNode("Coordinate");
Coordinate306.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08]);
LineSet305.coord = Coordinate306;

//from vt10 to vt6 vertices 2
ColorRGBA ColorRGBA307 = createNode("ColorRGBA");
ColorRGBA307.USE = "HAnimSegmentLineColorRGBA";
LineSet305.color = ColorRGBA307;

Shape304.geometry = LineSet305;

HAnimSegment300.children[1] = Shape304;

HAnimSite HAnimSite308 = createNode("HAnimSite");
HAnimSite308.name = "l_chest_midsagittal_plane_pt";
HAnimSite308.DEF = "hanim_l_chest_midsagittal_plane_pt";
TouchSensor TouchSensor309 = createNode("TouchSensor");
TouchSensor309.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite308.children = new MFNode();

HAnimSite308.children[0] = TouchSensor309;

Shape Shape310 = createNode("Shape");
Shape310.USE = "HAnimSiteShape";
HAnimSite308.children[1] = Shape310;

HAnimSegment300.children[2] = HAnimSite308;

HAnimSite HAnimSite311 = createNode("HAnimSite");
HAnimSite311.name = "mesosternale_pt";
HAnimSite311.DEF = "hanim_mesosternale_pt";
TouchSensor TouchSensor312 = createNode("TouchSensor");
TouchSensor312.description = "HAnimSite mesosternale_pt";
HAnimSite311.children = new MFNode();

HAnimSite311.children[0] = TouchSensor312;

Shape Shape313 = createNode("Shape");
Shape313.USE = "HAnimSiteShape";
HAnimSite311.children[1] = Shape313;

HAnimSegment300.children[3] = HAnimSite311;

HAnimSite HAnimSite314 = createNode("HAnimSite");
HAnimSite314.name = "r_chest_midsagittal_plane_pt";
HAnimSite314.DEF = "hanim_r_chest_midsagittal_plane_pt";
TouchSensor TouchSensor315 = createNode("TouchSensor");
TouchSensor315.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite314.children = new MFNode();

HAnimSite314.children[0] = TouchSensor315;

Shape Shape316 = createNode("Shape");
Shape316.USE = "HAnimSiteShape";
HAnimSite314.children[1] = Shape316;

HAnimSegment300.children[4] = HAnimSite314;

HAnimSite HAnimSite317 = createNode("HAnimSite");
HAnimSite317.name = "rear_center_midsagittal_plane_pt";
HAnimSite317.DEF = "hanim_rear_center_midsagittal_plane_pt";
TouchSensor TouchSensor318 = createNode("TouchSensor");
TouchSensor318.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite317.children = new MFNode();

HAnimSite317.children[0] = TouchSensor318;

Shape Shape319 = createNode("Shape");
Shape319.USE = "HAnimSiteShape";
HAnimSite317.children[1] = Shape319;

HAnimSegment300.children[5] = HAnimSite317;

HAnimJoint299.children = new MFNode();

HAnimJoint299.children[0] = HAnimSegment300;

HAnimJoint HAnimJoint320 = createNode("HAnimJoint");
HAnimJoint320.name = "vt6";
HAnimJoint320.DEF = "hanim_vt6";
HAnimJoint320.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint320.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint320.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment321 = createNode("HAnimSegment");
HAnimSegment321.name = "t6";
HAnimSegment321.DEF = "hanim_t6";
Transform Transform322 = createNode("Transform");
Transform322.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform323 = createNode("Transform");
//Empty Transform
Shape Shape324 = createNode("Shape");
Shape324.USE = "HAnimJointShape";
Transform323.children = new MFNode();

Transform323.children[0] = Shape324;

Transform322.children = new MFNode();

Transform322.children[0] = Transform323;

HAnimSegment321.children = new MFNode();

HAnimSegment321.children[0] = Transform322;

Shape Shape325 = createNode("Shape");
LineSet LineSet326 = createNode("LineSet");
LineSet326.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate327 = createNode("Coordinate");
Coordinate327.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387]);
LineSet326.coord = Coordinate327;

//from vt6 to vt1 vertices 2
ColorRGBA ColorRGBA328 = createNode("ColorRGBA");
ColorRGBA328.USE = "HAnimSegmentLineColorRGBA";
LineSet326.color = ColorRGBA328;

Shape325.geometry = LineSet326;

HAnimSegment321.children[1] = Shape325;

HAnimSite HAnimSite329 = createNode("HAnimSite");
HAnimSite329.name = "cervicale_pt";
HAnimSite329.DEF = "hanim_cervicale_pt";
HAnimSite329.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor330 = createNode("TouchSensor");
TouchSensor330.description = "HAnimSite cervicale_pt";
HAnimSite329.children = new MFNode();

HAnimSite329.children[0] = TouchSensor330;

Shape Shape331 = createNode("Shape");
Shape331.USE = "HAnimSiteShape";
HAnimSite329.children[1] = Shape331;

HAnimSegment321.children[2] = HAnimSite329;

HAnimSite HAnimSite332 = createNode("HAnimSite");
HAnimSite332.name = "suprasternale_pt";
HAnimSite332.DEF = "hanim_suprasternale_pt";
HAnimSite332.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor333 = createNode("TouchSensor");
TouchSensor333.description = "HAnimSite suprasternale_pt";
HAnimSite332.children = new MFNode();

HAnimSite332.children[0] = TouchSensor333;

Shape Shape334 = createNode("Shape");
Shape334.USE = "HAnimSiteShape";
HAnimSite332.children[1] = Shape334;

HAnimSegment321.children[3] = HAnimSite332;

HAnimJoint320.children = new MFNode();

HAnimJoint320.children[0] = HAnimSegment321;

HAnimJoint HAnimJoint335 = createNode("HAnimJoint");
HAnimJoint335.name = "vt1";
HAnimJoint335.DEF = "hanim_vt1";
HAnimJoint335.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint335.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint335.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment336 = createNode("HAnimSegment");
HAnimSegment336.name = "t1";
HAnimSegment336.DEF = "hanim_t1";
Transform Transform337 = createNode("Transform");
Transform337.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Transform Transform338 = createNode("Transform");
//Empty Transform
Shape Shape339 = createNode("Shape");
Shape339.USE = "HAnimJointShape";
Transform338.children = new MFNode();

Transform338.children[0] = Shape339;

Transform337.children = new MFNode();

Transform337.children[0] = Transform338;

HAnimSegment336.children = new MFNode();

HAnimSegment336.children[0] = Transform337;

Shape Shape340 = createNode("Shape");
LineSet LineSet341 = createNode("LineSet");
LineSet341.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate342 = createNode("Coordinate");
Coordinate342.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084]);
LineSet341.coord = Coordinate342;

//from vt1 to vc4 vertices 2
ColorRGBA ColorRGBA343 = createNode("ColorRGBA");
ColorRGBA343.USE = "HAnimSegmentLineColorRGBA";
LineSet341.color = ColorRGBA343;

Shape340.geometry = LineSet341;

HAnimSegment336.children[1] = Shape340;

Shape Shape344 = createNode("Shape");
LineSet LineSet345 = createNode("LineSet");
LineSet345.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate346 = createNode("Coordinate");
Coordinate346.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet345.coord = Coordinate346;

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA ColorRGBA347 = createNode("ColorRGBA");
ColorRGBA347.USE = "HAnimSegmentLineColorRGBA";
LineSet345.color = ColorRGBA347;

Shape344.geometry = LineSet345;

HAnimSegment336.children[2] = Shape344;

HAnimSite HAnimSite348 = createNode("HAnimSite");
HAnimSite348.name = "l_acromion_pt";
HAnimSite348.DEF = "hanim_l_acromion_pt";
HAnimSite348.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor349 = createNode("TouchSensor");
TouchSensor349.description = "HAnimSite l_acromion_pt";
HAnimSite348.children = new MFNode();

HAnimSite348.children[0] = TouchSensor349;

Shape Shape350 = createNode("Shape");
Shape350.USE = "HAnimSiteShape";
HAnimSite348.children[1] = Shape350;

HAnimSegment336.children[3] = HAnimSite348;

HAnimSite HAnimSite351 = createNode("HAnimSite");
HAnimSite351.name = "l_axilla_distal_pt";
HAnimSite351.DEF = "hanim_l_axilla_distal_pt";
HAnimSite351.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor352 = createNode("TouchSensor");
TouchSensor352.description = "HAnimSite l_axilla_distal_pt";
HAnimSite351.children = new MFNode();

HAnimSite351.children[0] = TouchSensor352;

Shape Shape353 = createNode("Shape");
Shape353.USE = "HAnimSiteShape";
HAnimSite351.children[1] = Shape353;

HAnimSegment336.children[4] = HAnimSite351;

HAnimSite HAnimSite354 = createNode("HAnimSite");
HAnimSite354.name = "l_axilla_posterior_folds_pt";
HAnimSite354.DEF = "hanim_l_axilla_posterior_folds_pt";
TouchSensor TouchSensor355 = createNode("TouchSensor");
TouchSensor355.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite354.children = new MFNode();

HAnimSite354.children[0] = TouchSensor355;

Shape Shape356 = createNode("Shape");
Shape356.USE = "HAnimSiteShape";
HAnimSite354.children[1] = Shape356;

HAnimSegment336.children[5] = HAnimSite354;

HAnimSite HAnimSite357 = createNode("HAnimSite");
HAnimSite357.name = "l_axilla_proximal_pt";
HAnimSite357.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite357.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor358 = createNode("TouchSensor");
TouchSensor358.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite357.children = new MFNode();

HAnimSite357.children[0] = TouchSensor358;

Shape Shape359 = createNode("Shape");
Shape359.USE = "HAnimSiteShape";
HAnimSite357.children[1] = Shape359;

HAnimSegment336.children[6] = HAnimSite357;

HAnimSite HAnimSite360 = createNode("HAnimSite");
HAnimSite360.name = "l_clavicale_pt";
HAnimSite360.DEF = "hanim_l_clavicale_pt";
HAnimSite360.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor361 = createNode("TouchSensor");
TouchSensor361.description = "HAnimSite l_clavicale_pt";
HAnimSite360.children = new MFNode();

HAnimSite360.children[0] = TouchSensor361;

Shape Shape362 = createNode("Shape");
Shape362.USE = "HAnimSiteShape";
HAnimSite360.children[1] = Shape362;

HAnimSegment336.children[7] = HAnimSite360;

Shape Shape363 = createNode("Shape");
LineSet LineSet364 = createNode("LineSet");
LineSet364.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate365 = createNode("Coordinate");
Coordinate365.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet364.coord = Coordinate365;

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA ColorRGBA366 = createNode("ColorRGBA");
ColorRGBA366.USE = "HAnimSegmentLineColorRGBA";
LineSet364.color = ColorRGBA366;

Shape363.geometry = LineSet364;

HAnimSegment336.children[8] = Shape363;

HAnimSite HAnimSite367 = createNode("HAnimSite");
HAnimSite367.name = "r_acromion_pt";
HAnimSite367.DEF = "hanim_r_acromion_pt";
HAnimSite367.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor368 = createNode("TouchSensor");
TouchSensor368.description = "HAnimSite r_acromion_pt";
HAnimSite367.children = new MFNode();

HAnimSite367.children[0] = TouchSensor368;

Shape Shape369 = createNode("Shape");
Shape369.USE = "HAnimSiteShape";
HAnimSite367.children[1] = Shape369;

HAnimSegment336.children[9] = HAnimSite367;

HAnimSite HAnimSite370 = createNode("HAnimSite");
HAnimSite370.name = "r_axilla_distal_pt";
HAnimSite370.DEF = "hanim_r_axilla_distal_pt";
HAnimSite370.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor371 = createNode("TouchSensor");
TouchSensor371.description = "HAnimSite r_axilla_distal_pt";
HAnimSite370.children = new MFNode();

HAnimSite370.children[0] = TouchSensor371;

Shape Shape372 = createNode("Shape");
Shape372.USE = "HAnimSiteShape";
HAnimSite370.children[1] = Shape372;

HAnimSegment336.children[10] = HAnimSite370;

HAnimSite HAnimSite373 = createNode("HAnimSite");
HAnimSite373.name = "r_axilla_posterior_folds_pt";
HAnimSite373.DEF = "hanim_r_axilla_posterior_folds_pt";
TouchSensor TouchSensor374 = createNode("TouchSensor");
TouchSensor374.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite373.children = new MFNode();

HAnimSite373.children[0] = TouchSensor374;

Shape Shape375 = createNode("Shape");
Shape375.USE = "HAnimSiteShape";
HAnimSite373.children[1] = Shape375;

HAnimSegment336.children[11] = HAnimSite373;

HAnimSite HAnimSite376 = createNode("HAnimSite");
HAnimSite376.name = "r_axilla_proximal_pt";
HAnimSite376.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite376.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor377 = createNode("TouchSensor");
TouchSensor377.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite376.children = new MFNode();

HAnimSite376.children[0] = TouchSensor377;

Shape Shape378 = createNode("Shape");
Shape378.USE = "HAnimSiteShape";
HAnimSite376.children[1] = Shape378;

HAnimSegment336.children[12] = HAnimSite376;

HAnimSite HAnimSite379 = createNode("HAnimSite");
HAnimSite379.name = "r_clavicale_pt";
HAnimSite379.DEF = "hanim_r_clavicale_pt";
HAnimSite379.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor380 = createNode("TouchSensor");
TouchSensor380.description = "HAnimSite r_clavicale_pt";
HAnimSite379.children = new MFNode();

HAnimSite379.children[0] = TouchSensor380;

Shape Shape381 = createNode("Shape");
Shape381.USE = "HAnimSiteShape";
HAnimSite379.children[1] = Shape381;

HAnimSegment336.children[13] = HAnimSite379;

HAnimJoint335.children = new MFNode();

HAnimJoint335.children[0] = HAnimSegment336;

HAnimJoint HAnimJoint382 = createNode("HAnimJoint");
HAnimJoint382.name = "vc4";
HAnimJoint382.DEF = "hanim_vc4";
HAnimJoint382.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint382.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint382.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment383 = createNode("HAnimSegment");
HAnimSegment383.name = "c4";
HAnimSegment383.DEF = "hanim_c4";
Transform Transform384 = createNode("Transform");
Transform384.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Transform Transform385 = createNode("Transform");
//Empty Transform
Shape Shape386 = createNode("Shape");
Shape386.USE = "HAnimJointShape";
Transform385.children = new MFNode();

Transform385.children[0] = Shape386;

Transform384.children = new MFNode();

Transform384.children[0] = Transform385;

HAnimSegment383.children = new MFNode();

HAnimSegment383.children[0] = Transform384;

Shape Shape387 = createNode("Shape");
LineSet LineSet388 = createNode("LineSet");
LineSet388.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate389 = createNode("Coordinate");
Coordinate389.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103]);
LineSet388.coord = Coordinate389;

//from vc4 to vc2 vertices 2
ColorRGBA ColorRGBA390 = createNode("ColorRGBA");
ColorRGBA390.USE = "HAnimSegmentLineColorRGBA";
LineSet388.color = ColorRGBA390;

Shape387.geometry = LineSet388;

HAnimSegment383.children[1] = Shape387;

HAnimSite HAnimSite391 = createNode("HAnimSite");
HAnimSite391.name = "adams_apple_pt";
HAnimSite391.DEF = "hanim_adams_apple_pt";
TouchSensor TouchSensor392 = createNode("TouchSensor");
TouchSensor392.description = "HAnimSite adams_apple_pt";
HAnimSite391.children = new MFNode();

HAnimSite391.children[0] = TouchSensor392;

Shape Shape393 = createNode("Shape");
Shape393.USE = "HAnimSiteShape";
HAnimSite391.children[1] = Shape393;

HAnimSegment383.children[2] = HAnimSite391;

HAnimJoint382.children = new MFNode();

HAnimJoint382.children[0] = HAnimSegment383;

HAnimJoint HAnimJoint394 = createNode("HAnimJoint");
HAnimJoint394.name = "vc2";
HAnimJoint394.DEF = "hanim_vc2";
HAnimJoint394.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint394.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint394.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment395 = createNode("HAnimSegment");
HAnimSegment395.name = "c2";
HAnimSegment395.DEF = "hanim_c2";
Transform Transform396 = createNode("Transform");
Transform396.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Transform Transform397 = createNode("Transform");
//Empty Transform
Shape Shape398 = createNode("Shape");
Shape398.USE = "HAnimJointShape";
Transform397.children = new MFNode();

Transform397.children[0] = Shape398;

Transform396.children = new MFNode();

Transform396.children[0] = Transform397;

HAnimSegment395.children = new MFNode();

HAnimSegment395.children[0] = Transform396;

Shape Shape399 = createNode("Shape");
LineSet LineSet400 = createNode("LineSet");
LineSet400.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate401 = createNode("Coordinate");
Coordinate401.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236]);
LineSet400.coord = Coordinate401;

//from vc2 to skullbase vertices 2
ColorRGBA ColorRGBA402 = createNode("ColorRGBA");
ColorRGBA402.USE = "HAnimSegmentLineColorRGBA";
LineSet400.color = ColorRGBA402;

Shape399.geometry = LineSet400;

HAnimSegment395.children[1] = Shape399;

HAnimSite HAnimSite403 = createNode("HAnimSite");
HAnimSite403.name = "glabella_pt";
HAnimSite403.DEF = "hanim_glabella_pt";
TouchSensor TouchSensor404 = createNode("TouchSensor");
TouchSensor404.description = "HAnimSite glabella_pt";
HAnimSite403.children = new MFNode();

HAnimSite403.children[0] = TouchSensor404;

Shape Shape405 = createNode("Shape");
Shape405.USE = "HAnimSiteShape";
HAnimSite403.children[1] = Shape405;

HAnimSegment395.children[2] = HAnimSite403;

HAnimSite HAnimSite406 = createNode("HAnimSite");
HAnimSite406.name = "l_ectocanthus_pt";
HAnimSite406.DEF = "hanim_l_ectocanthus_pt";
TouchSensor TouchSensor407 = createNode("TouchSensor");
TouchSensor407.description = "HAnimSite l_ectocanthus_pt";
HAnimSite406.children = new MFNode();

HAnimSite406.children[0] = TouchSensor407;

Shape Shape408 = createNode("Shape");
Shape408.USE = "HAnimSiteShape";
HAnimSite406.children[1] = Shape408;

HAnimSegment395.children[3] = HAnimSite406;

HAnimSite HAnimSite409 = createNode("HAnimSite");
HAnimSite409.name = "l_infraorbitale_pt";
HAnimSite409.DEF = "hanim_l_infraorbitale_pt";
HAnimSite409.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor410 = createNode("TouchSensor");
TouchSensor410.description = "HAnimSite l_infraorbitale_pt";
HAnimSite409.children = new MFNode();

HAnimSite409.children[0] = TouchSensor410;

Shape Shape411 = createNode("Shape");
Shape411.USE = "HAnimSiteShape";
HAnimSite409.children[1] = Shape411;

HAnimSegment395.children[4] = HAnimSite409;

HAnimSite HAnimSite412 = createNode("HAnimSite");
HAnimSite412.name = "l_tragion_pt";
HAnimSite412.DEF = "hanim_l_tragion_pt";
HAnimSite412.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor413 = createNode("TouchSensor");
TouchSensor413.description = "HAnimSite l_tragion_pt";
HAnimSite412.children = new MFNode();

HAnimSite412.children[0] = TouchSensor413;

Shape Shape414 = createNode("Shape");
Shape414.USE = "HAnimSiteShape";
HAnimSite412.children[1] = Shape414;

HAnimSegment395.children[5] = HAnimSite412;

HAnimSite HAnimSite415 = createNode("HAnimSite");
HAnimSite415.name = "nuchale_pt";
HAnimSite415.DEF = "hanim_nuchale_pt";
HAnimSite415.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor416 = createNode("TouchSensor");
TouchSensor416.description = "HAnimSite nuchale_pt";
HAnimSite415.children = new MFNode();

HAnimSite415.children[0] = TouchSensor416;

Shape Shape417 = createNode("Shape");
Shape417.USE = "HAnimSiteShape";
HAnimSite415.children[1] = Shape417;

HAnimSegment395.children[6] = HAnimSite415;

HAnimSite HAnimSite418 = createNode("HAnimSite");
HAnimSite418.name = "opisthocranion_pt";
HAnimSite418.DEF = "hanim_opisthocranion_pt";
TouchSensor TouchSensor419 = createNode("TouchSensor");
TouchSensor419.description = "HAnimSite opisthocranion_pt";
HAnimSite418.children = new MFNode();

HAnimSite418.children[0] = TouchSensor419;

Shape Shape420 = createNode("Shape");
Shape420.USE = "HAnimSiteShape";
HAnimSite418.children[1] = Shape420;

HAnimSegment395.children[7] = HAnimSite418;

HAnimSite HAnimSite421 = createNode("HAnimSite");
HAnimSite421.name = "r_ectocanthus_pt";
HAnimSite421.DEF = "hanim_r_ectocanthus_pt";
TouchSensor TouchSensor422 = createNode("TouchSensor");
TouchSensor422.description = "HAnimSite r_ectocanthus_pt";
HAnimSite421.children = new MFNode();

HAnimSite421.children[0] = TouchSensor422;

Shape Shape423 = createNode("Shape");
Shape423.USE = "HAnimSiteShape";
HAnimSite421.children[1] = Shape423;

HAnimSegment395.children[8] = HAnimSite421;

HAnimSite HAnimSite424 = createNode("HAnimSite");
HAnimSite424.name = "r_infraorbitale_pt";
HAnimSite424.DEF = "hanim_r_infraorbitale_pt";
HAnimSite424.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor425 = createNode("TouchSensor");
TouchSensor425.description = "HAnimSite r_infraorbitale_pt";
HAnimSite424.children = new MFNode();

HAnimSite424.children[0] = TouchSensor425;

Shape Shape426 = createNode("Shape");
Shape426.USE = "HAnimSiteShape";
HAnimSite424.children[1] = Shape426;

HAnimSegment395.children[9] = HAnimSite424;

HAnimSite HAnimSite427 = createNode("HAnimSite");
HAnimSite427.name = "r_tragion_pt";
HAnimSite427.DEF = "hanim_r_tragion_pt";
HAnimSite427.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor428 = createNode("TouchSensor");
TouchSensor428.description = "HAnimSite r_tragion_pt";
HAnimSite427.children = new MFNode();

HAnimSite427.children[0] = TouchSensor428;

Shape Shape429 = createNode("Shape");
Shape429.USE = "HAnimSiteShape";
HAnimSite427.children[1] = Shape429;

HAnimSegment395.children[10] = HAnimSite427;

HAnimSite HAnimSite430 = createNode("HAnimSite");
HAnimSite430.name = "sellion_pt";
HAnimSite430.DEF = "hanim_sellion_pt";
HAnimSite430.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor431 = createNode("TouchSensor");
TouchSensor431.description = "HAnimSite sellion_pt";
HAnimSite430.children = new MFNode();

HAnimSite430.children[0] = TouchSensor431;

Shape Shape432 = createNode("Shape");
Shape432.USE = "HAnimSiteShape";
HAnimSite430.children[1] = Shape432;

HAnimSegment395.children[11] = HAnimSite430;

HAnimSite HAnimSite433 = createNode("HAnimSite");
HAnimSite433.name = "skull_vertex_pt";
HAnimSite433.DEF = "hanim_skull_vertex_pt";
HAnimSite433.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor434 = createNode("TouchSensor");
TouchSensor434.description = "HAnimSite skull_vertex_pt";
HAnimSite433.children = new MFNode();

HAnimSite433.children[0] = TouchSensor434;

Shape Shape435 = createNode("Shape");
Shape435.USE = "HAnimSiteShape";
HAnimSite433.children[1] = Shape435;

HAnimSegment395.children[12] = HAnimSite433;

HAnimJoint394.children = new MFNode();

HAnimJoint394.children[0] = HAnimSegment395;

HAnimJoint HAnimJoint436 = createNode("HAnimJoint");
HAnimJoint436.name = "skullbase";
HAnimJoint436.DEF = "hanim_skullbase";
HAnimJoint436.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint436.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint436.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint394.children[1] = HAnimJoint436;

HAnimJoint382.children[1] = HAnimJoint394;

HAnimJoint335.children[1] = HAnimJoint382;

HAnimJoint HAnimJoint437 = createNode("HAnimJoint");
HAnimJoint437.name = "l_sternoclavicular";
HAnimJoint437.DEF = "hanim_l_sternoclavicular";
HAnimJoint437.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint437.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint437.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment438 = createNode("HAnimSegment");
HAnimSegment438.name = "l_clavicle";
HAnimSegment438.DEF = "hanim_l_clavicle";
Transform Transform439 = createNode("Transform");
Transform439.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Transform Transform440 = createNode("Transform");
//Empty Transform
Shape Shape441 = createNode("Shape");
Shape441.USE = "HAnimJointShape";
Transform440.children = new MFNode();

Transform440.children[0] = Shape441;

Transform439.children = new MFNode();

Transform439.children[0] = Transform440;

HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = Transform439;

Shape Shape442 = createNode("Shape");
LineSet LineSet443 = createNode("LineSet");
LineSet443.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate444 = createNode("Coordinate");
Coordinate444.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet443.coord = Coordinate444;

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA ColorRGBA445 = createNode("ColorRGBA");
ColorRGBA445.USE = "HAnimSegmentLineColorRGBA";
LineSet443.color = ColorRGBA445;

Shape442.geometry = LineSet443;

HAnimSegment438.children[1] = Shape442;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

HAnimJoint HAnimJoint446 = createNode("HAnimJoint");
HAnimJoint446.name = "l_acromioclavicular";
HAnimJoint446.DEF = "hanim_l_acromioclavicular";
HAnimJoint446.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint446.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint446.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment447 = createNode("HAnimSegment");
HAnimSegment447.name = "l_scapula";
HAnimSegment447.DEF = "hanim_l_scapula";
Transform Transform448 = createNode("Transform");
Transform448.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Transform Transform449 = createNode("Transform");
//Empty Transform
Shape Shape450 = createNode("Shape");
Shape450.USE = "HAnimJointShape";
Transform449.children = new MFNode();

Transform449.children[0] = Shape450;

Transform448.children = new MFNode();

Transform448.children[0] = Transform449;

HAnimSegment447.children = new MFNode();

HAnimSegment447.children[0] = Transform448;

Shape Shape451 = createNode("Shape");
LineSet LineSet452 = createNode("LineSet");
LineSet452.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate453 = createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet452.coord = Coordinate453;

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA ColorRGBA454 = createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSegmentLineColorRGBA";
LineSet452.color = ColorRGBA454;

Shape451.geometry = LineSet452;

HAnimSegment447.children[1] = Shape451;

HAnimSite HAnimSite455 = createNode("HAnimSite");
HAnimSite455.name = "l_bideltoid_pt";
HAnimSite455.DEF = "hanim_l_bideltoid_pt";
TouchSensor TouchSensor456 = createNode("TouchSensor");
TouchSensor456.description = "HAnimSite l_bideltoid_pt";
HAnimSite455.children = new MFNode();

HAnimSite455.children[0] = TouchSensor456;

Shape Shape457 = createNode("Shape");
Shape457.USE = "HAnimSiteShape";
HAnimSite455.children[1] = Shape457;

HAnimSegment447.children[2] = HAnimSite455;

HAnimSite HAnimSite458 = createNode("HAnimSite");
HAnimSite458.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite458.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite458.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor459 = createNode("TouchSensor");
TouchSensor459.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite458.children = new MFNode();

HAnimSite458.children[0] = TouchSensor459;

Shape Shape460 = createNode("Shape");
Shape460.USE = "HAnimSiteShape";
HAnimSite458.children[1] = Shape460;

HAnimSegment447.children[3] = HAnimSite458;

HAnimJoint446.children = new MFNode();

HAnimJoint446.children[0] = HAnimSegment447;

HAnimJoint HAnimJoint461 = createNode("HAnimJoint");
HAnimJoint461.name = "l_shoulder";
HAnimJoint461.DEF = "hanim_l_shoulder";
HAnimJoint461.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint461.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint461.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment462 = createNode("HAnimSegment");
HAnimSegment462.name = "l_upperarm";
HAnimSegment462.DEF = "hanim_l_upperarm";
Transform Transform463 = createNode("Transform");
Transform463.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform464 = createNode("Transform");
//Empty Transform
Shape Shape465 = createNode("Shape");
Shape465.USE = "HAnimJointShape";
Transform464.children = new MFNode();

Transform464.children[0] = Shape465;

Transform463.children = new MFNode();

Transform463.children[0] = Transform464;

HAnimSegment462.children = new MFNode();

HAnimSegment462.children[0] = Transform463;

Shape Shape466 = createNode("Shape");
LineSet LineSet467 = createNode("LineSet");
LineSet467.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate468 = createNode("Coordinate");
Coordinate468.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet467.coord = Coordinate468;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA469 = createNode("ColorRGBA");
ColorRGBA469.USE = "HAnimSegmentLineColorRGBA";
LineSet467.color = ColorRGBA469;

Shape466.geometry = LineSet467;

HAnimSegment462.children[1] = Shape466;

HAnimSite HAnimSite470 = createNode("HAnimSite");
HAnimSite470.name = "l_humeral_medial_epicondyles_pt";
HAnimSite470.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite470.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor471 = createNode("TouchSensor");
TouchSensor471.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite470.children = new MFNode();

HAnimSite470.children[0] = TouchSensor471;

Shape Shape472 = createNode("Shape");
Shape472.USE = "HAnimSiteShape";
HAnimSite470.children[1] = Shape472;

HAnimSegment462.children[2] = HAnimSite470;

HAnimSite HAnimSite473 = createNode("HAnimSite");
HAnimSite473.name = "l_olecranon_pt";
HAnimSite473.DEF = "hanim_l_olecranon_pt";
HAnimSite473.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor474 = createNode("TouchSensor");
TouchSensor474.description = "HAnimSite l_olecranon_pt";
HAnimSite473.children = new MFNode();

HAnimSite473.children[0] = TouchSensor474;

Shape Shape475 = createNode("Shape");
Shape475.USE = "HAnimSiteShape";
HAnimSite473.children[1] = Shape475;

HAnimSegment462.children[3] = HAnimSite473;

HAnimSite HAnimSite476 = createNode("HAnimSite");
HAnimSite476.name = "l_radial_styloid_pt";
HAnimSite476.DEF = "hanim_l_radial_styloid_pt";
HAnimSite476.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor477 = createNode("TouchSensor");
TouchSensor477.description = "HAnimSite l_radial_styloid_pt";
HAnimSite476.children = new MFNode();

HAnimSite476.children[0] = TouchSensor477;

Shape Shape478 = createNode("Shape");
Shape478.USE = "HAnimSiteShape";
HAnimSite476.children[1] = Shape478;

HAnimSegment462.children[4] = HAnimSite476;

HAnimSite HAnimSite479 = createNode("HAnimSite");
HAnimSite479.name = "l_radiale_pt";
HAnimSite479.DEF = "hanim_l_radiale_pt";
HAnimSite479.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor480 = createNode("TouchSensor");
TouchSensor480.description = "HAnimSite l_radiale_pt";
HAnimSite479.children = new MFNode();

HAnimSite479.children[0] = TouchSensor480;

Shape Shape481 = createNode("Shape");
Shape481.USE = "HAnimSiteShape";
HAnimSite479.children[1] = Shape481;

HAnimSegment462.children[5] = HAnimSite479;

HAnimJoint461.children = new MFNode();

HAnimJoint461.children[0] = HAnimSegment462;

HAnimJoint HAnimJoint482 = createNode("HAnimJoint");
HAnimJoint482.name = "l_elbow";
HAnimJoint482.DEF = "hanim_l_elbow";
HAnimJoint482.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint482.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint482.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment483 = createNode("HAnimSegment");
HAnimSegment483.name = "l_forearm";
HAnimSegment483.DEF = "hanim_l_forearm";
Transform Transform484 = createNode("Transform");
Transform484.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform485 = createNode("Transform");
//Empty Transform
Shape Shape486 = createNode("Shape");
Shape486.USE = "HAnimJointShape";
Transform485.children = new MFNode();

Transform485.children[0] = Shape486;

Transform484.children = new MFNode();

Transform484.children[0] = Transform485;

HAnimSegment483.children = new MFNode();

HAnimSegment483.children[0] = Transform484;

Shape Shape487 = createNode("Shape");
LineSet LineSet488 = createNode("LineSet");
LineSet488.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate489 = createNode("Coordinate");
Coordinate489.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet488.coord = Coordinate489;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA490 = createNode("ColorRGBA");
ColorRGBA490.USE = "HAnimSegmentLineColorRGBA";
LineSet488.color = ColorRGBA490;

Shape487.geometry = LineSet488;

HAnimSegment483.children[1] = Shape487;

HAnimSite HAnimSite491 = createNode("HAnimSite");
HAnimSite491.name = "l_ulnar_styloid_pt";
HAnimSite491.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite491.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor492 = createNode("TouchSensor");
TouchSensor492.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite491.children = new MFNode();

HAnimSite491.children[0] = TouchSensor492;

Shape Shape493 = createNode("Shape");
Shape493.USE = "HAnimSiteShape";
HAnimSite491.children[1] = Shape493;

HAnimSegment483.children[2] = HAnimSite491;

HAnimJoint482.children = new MFNode();

HAnimJoint482.children[0] = HAnimSegment483;

HAnimJoint HAnimJoint494 = createNode("HAnimJoint");
HAnimJoint494.name = "l_radiocarpal";
HAnimJoint494.DEF = "hanim_l_radiocarpal";
HAnimJoint494.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint494.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint494.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment495 = createNode("HAnimSegment");
HAnimSegment495.name = "l_carpal";
HAnimSegment495.DEF = "hanim_l_carpal";
Transform Transform496 = createNode("Transform");
Transform496.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform496.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform496.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
Transform Transform497 = createNode("Transform");
Transform497.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
Shape Shape498 = createNode("Shape");
Shape498.USE = "HAnimJointShape";
Transform497.children = new MFNode();

Transform497.children[0] = Shape498;

Transform496.children = new MFNode();

Transform496.children[0] = Transform497;

HAnimSegment495.children = new MFNode();

HAnimSegment495.children[0] = Transform496;

Shape Shape499 = createNode("Shape");
LineSet LineSet500 = createNode("LineSet");
LineSet500.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate501 = createNode("Coordinate");
Coordinate501.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet500.coord = Coordinate501;

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA502 = createNode("ColorRGBA");
ColorRGBA502.USE = "HAnimSegmentLineColorRGBA";
LineSet500.color = ColorRGBA502;

Shape499.geometry = LineSet500;

HAnimSegment495.children[1] = Shape499;

Shape Shape503 = createNode("Shape");
LineSet LineSet504 = createNode("LineSet");
LineSet504.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate505 = createNode("Coordinate");
Coordinate505.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet504.coord = Coordinate505;

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA506 = createNode("ColorRGBA");
ColorRGBA506.USE = "HAnimSegmentLineColorRGBA";
LineSet504.color = ColorRGBA506;

Shape503.geometry = LineSet504;

HAnimSegment495.children[2] = Shape503;

HAnimSite HAnimSite507 = createNode("HAnimSite");
HAnimSite507.name = "l_metacarpal_phalanx_2_pt";
HAnimSite507.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite507.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor508 = createNode("TouchSensor");
TouchSensor508.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite507.children = new MFNode();

HAnimSite507.children[0] = TouchSensor508;

Shape Shape509 = createNode("Shape");
Shape509.USE = "HAnimSiteShape";
HAnimSite507.children[1] = Shape509;

HAnimSegment495.children[3] = HAnimSite507;

Shape Shape510 = createNode("Shape");
LineSet LineSet511 = createNode("LineSet");
LineSet511.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate512 = createNode("Coordinate");
Coordinate512.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet511.coord = Coordinate512;

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA513 = createNode("ColorRGBA");
ColorRGBA513.USE = "HAnimSegmentLineColorRGBA";
LineSet511.color = ColorRGBA513;

Shape510.geometry = LineSet511;

HAnimSegment495.children[4] = Shape510;

HAnimSite HAnimSite514 = createNode("HAnimSite");
HAnimSite514.name = "l_metacarpal_phalanx_3_pt";
HAnimSite514.DEF = "hanim_l_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor515 = createNode("TouchSensor");
TouchSensor515.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite514.children = new MFNode();

HAnimSite514.children[0] = TouchSensor515;

Shape Shape516 = createNode("Shape");
Shape516.USE = "HAnimSiteShape";
HAnimSite514.children[1] = Shape516;

HAnimSegment495.children[5] = HAnimSite514;

Shape Shape517 = createNode("Shape");
LineSet LineSet518 = createNode("LineSet");
LineSet518.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate519 = createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet518.coord = Coordinate519;

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA520 = createNode("ColorRGBA");
ColorRGBA520.USE = "HAnimSegmentLineColorRGBA";
LineSet518.color = ColorRGBA520;

Shape517.geometry = LineSet518;

HAnimSegment495.children[6] = Shape517;

Shape Shape521 = createNode("Shape");
LineSet LineSet522 = createNode("LineSet");
LineSet522.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate523 = createNode("Coordinate");
Coordinate523.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet522.coord = Coordinate523;

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA524 = createNode("ColorRGBA");
ColorRGBA524.USE = "HAnimSegmentLineColorRGBA";
LineSet522.color = ColorRGBA524;

Shape521.geometry = LineSet522;

HAnimSegment495.children[7] = Shape521;

HAnimSite HAnimSite525 = createNode("HAnimSite");
HAnimSite525.name = "l_metacarpal_phalanx_5_pt";
HAnimSite525.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite525.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor526 = createNode("TouchSensor");
TouchSensor526.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite525.children = new MFNode();

HAnimSite525.children[0] = TouchSensor526;

Shape Shape527 = createNode("Shape");
Shape527.USE = "HAnimSiteShape";
HAnimSite525.children[1] = Shape527;

HAnimSegment495.children[8] = HAnimSite525;

HAnimJoint494.children = new MFNode();

HAnimJoint494.children[0] = HAnimSegment495;

HAnimJoint HAnimJoint528 = createNode("HAnimJoint");
HAnimJoint528.name = "l_carpometacarpal_1";
HAnimJoint528.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint528.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint528.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint528.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment529 = createNode("HAnimSegment");
HAnimSegment529.name = "l_metacarpal_1";
HAnimSegment529.DEF = "hanim_l_metacarpal_1";
Transform Transform530 = createNode("Transform");
Transform530.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Transform Transform531 = createNode("Transform");
//Empty Transform
Shape Shape532 = createNode("Shape");
Shape532.USE = "HAnimJointShape";
Transform531.children = new MFNode();

Transform531.children[0] = Shape532;

Transform530.children = new MFNode();

Transform530.children[0] = Transform531;

HAnimSegment529.children = new MFNode();

HAnimSegment529.children[0] = Transform530;

Shape Shape533 = createNode("Shape");
LineSet LineSet534 = createNode("LineSet");
LineSet534.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate535 = createNode("Coordinate");
Coordinate535.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet534.coord = Coordinate535;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA536 = createNode("ColorRGBA");
ColorRGBA536.USE = "HAnimSegmentLineColorRGBA";
LineSet534.color = ColorRGBA536;

Shape533.geometry = LineSet534;

HAnimSegment529.children[1] = Shape533;

HAnimJoint528.children = new MFNode();

HAnimJoint528.children[0] = HAnimSegment529;

HAnimJoint HAnimJoint537 = createNode("HAnimJoint");
HAnimJoint537.name = "l_metacarpophalangeal_1";
HAnimJoint537.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint537.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint537.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint537.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment538 = createNode("HAnimSegment");
HAnimSegment538.name = "l_carpal_proximal_phalanx_1";
HAnimSegment538.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform539 = createNode("Transform");
Transform539.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform540 = createNode("Transform");
//Empty Transform
Shape Shape541 = createNode("Shape");
Shape541.USE = "HAnimJointShape";
Transform540.children = new MFNode();

Transform540.children[0] = Shape541;

Transform539.children = new MFNode();

Transform539.children[0] = Transform540;

HAnimSegment538.children = new MFNode();

HAnimSegment538.children[0] = Transform539;

Shape Shape542 = createNode("Shape");
LineSet LineSet543 = createNode("LineSet");
LineSet543.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate544 = createNode("Coordinate");
Coordinate544.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet543.coord = Coordinate544;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA545 = createNode("ColorRGBA");
ColorRGBA545.USE = "HAnimSegmentLineColorRGBA";
LineSet543.color = ColorRGBA545;

Shape542.geometry = LineSet543;

HAnimSegment538.children[1] = Shape542;

HAnimSite HAnimSite546 = createNode("HAnimSite");
HAnimSite546.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite546.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor547 = createNode("TouchSensor");
TouchSensor547.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite546.children = new MFNode();

HAnimSite546.children[0] = TouchSensor547;

Shape Shape548 = createNode("Shape");
Shape548.USE = "HAnimSiteShape";
HAnimSite546.children[1] = Shape548;

HAnimSegment538.children[2] = HAnimSite546;

HAnimJoint537.children = new MFNode();

HAnimJoint537.children[0] = HAnimSegment538;

HAnimJoint HAnimJoint549 = createNode("HAnimJoint");
HAnimJoint549.name = "l_carpal_interphalangeal_1";
HAnimJoint549.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint549.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint549.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint549.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint537.children[1] = HAnimJoint549;

HAnimJoint528.children[1] = HAnimJoint537;

HAnimJoint494.children[1] = HAnimJoint528;

HAnimJoint HAnimJoint550 = createNode("HAnimJoint");
HAnimJoint550.name = "l_carpometacarpal_2";
HAnimJoint550.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint550.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint550.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint550.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment551 = createNode("HAnimSegment");
HAnimSegment551.name = "l_metacarpal_2";
HAnimSegment551.DEF = "hanim_l_metacarpal_2";
Transform Transform552 = createNode("Transform");
Transform552.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Transform Transform553 = createNode("Transform");
//Empty Transform
Shape Shape554 = createNode("Shape");
Shape554.USE = "HAnimJointShape";
Transform553.children = new MFNode();

Transform553.children[0] = Shape554;

Transform552.children = new MFNode();

Transform552.children[0] = Transform553;

HAnimSegment551.children = new MFNode();

HAnimSegment551.children[0] = Transform552;

Shape Shape555 = createNode("Shape");
LineSet LineSet556 = createNode("LineSet");
LineSet556.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate557 = createNode("Coordinate");
Coordinate557.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet556.coord = Coordinate557;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA558 = createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
LineSet556.color = ColorRGBA558;

Shape555.geometry = LineSet556;

HAnimSegment551.children[1] = Shape555;

HAnimJoint550.children = new MFNode();

HAnimJoint550.children[0] = HAnimSegment551;

HAnimJoint HAnimJoint559 = createNode("HAnimJoint");
HAnimJoint559.name = "l_metacarpophalangeal_2";
HAnimJoint559.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint559.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint559.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint559.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment560 = createNode("HAnimSegment");
HAnimSegment560.name = "l_carpal_proximal_phalanx_2";
HAnimSegment560.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform561 = createNode("Transform");
Transform561.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform562 = createNode("Transform");
//Empty Transform
Shape Shape563 = createNode("Shape");
Shape563.USE = "HAnimJointShape";
Transform562.children = new MFNode();

Transform562.children[0] = Shape563;

Transform561.children = new MFNode();

Transform561.children[0] = Transform562;

HAnimSegment560.children = new MFNode();

HAnimSegment560.children[0] = Transform561;

Shape Shape564 = createNode("Shape");
LineSet LineSet565 = createNode("LineSet");
LineSet565.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate566 = createNode("Coordinate");
Coordinate566.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet565.coord = Coordinate566;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA567 = createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
LineSet565.color = ColorRGBA567;

Shape564.geometry = LineSet565;

HAnimSegment560.children[1] = Shape564;

HAnimJoint559.children = new MFNode();

HAnimJoint559.children[0] = HAnimSegment560;

HAnimJoint HAnimJoint568 = createNode("HAnimJoint");
HAnimJoint568.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint568.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint568.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint568.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint568.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment569 = createNode("HAnimSegment");
HAnimSegment569.name = "l_carpal_middle_phalanx_2";
HAnimSegment569.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform570 = createNode("Transform");
Transform570.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform571 = createNode("Transform");
//Empty Transform
Shape Shape572 = createNode("Shape");
Shape572.USE = "HAnimJointShape";
Transform571.children = new MFNode();

Transform571.children[0] = Shape572;

Transform570.children = new MFNode();

Transform570.children[0] = Transform571;

HAnimSegment569.children = new MFNode();

HAnimSegment569.children[0] = Transform570;

Shape Shape573 = createNode("Shape");
LineSet LineSet574 = createNode("LineSet");
LineSet574.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate575 = createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet574.coord = Coordinate575;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA576 = createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
LineSet574.color = ColorRGBA576;

Shape573.geometry = LineSet574;

HAnimSegment569.children[1] = Shape573;

HAnimSite HAnimSite577 = createNode("HAnimSite");
HAnimSite577.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite577.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor578 = createNode("TouchSensor");
TouchSensor578.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite577.children = new MFNode();

HAnimSite577.children[0] = TouchSensor578;

Shape Shape579 = createNode("Shape");
Shape579.USE = "HAnimSiteShape";
HAnimSite577.children[1] = Shape579;

HAnimSegment569.children[2] = HAnimSite577;

HAnimSite HAnimSite580 = createNode("HAnimSite");
HAnimSite580.name = "l_dactylion_pt";
HAnimSite580.DEF = "hanim_l_dactylion_pt";
HAnimSite580.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor581 = createNode("TouchSensor");
TouchSensor581.description = "HAnimSite l_dactylion_pt";
HAnimSite580.children = new MFNode();

HAnimSite580.children[0] = TouchSensor581;

Shape Shape582 = createNode("Shape");
Shape582.USE = "HAnimSiteShape";
HAnimSite580.children[1] = Shape582;

HAnimSegment569.children[3] = HAnimSite580;

HAnimJoint568.children = new MFNode();

HAnimJoint568.children[0] = HAnimSegment569;

HAnimJoint HAnimJoint583 = createNode("HAnimJoint");
HAnimJoint583.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint583.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint583.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint583.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint583.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint568.children[1] = HAnimJoint583;

HAnimJoint559.children[1] = HAnimJoint568;

HAnimJoint550.children[1] = HAnimJoint559;

HAnimJoint494.children[2] = HAnimJoint550;

HAnimJoint HAnimJoint584 = createNode("HAnimJoint");
HAnimJoint584.name = "l_carpometacarpal_3";
HAnimJoint584.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint584.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint584.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint584.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment585 = createNode("HAnimSegment");
HAnimSegment585.name = "l_metacarpal_3";
HAnimSegment585.DEF = "hanim_l_metacarpal_3";
Transform Transform586 = createNode("Transform");
Transform586.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Transform Transform587 = createNode("Transform");
//Empty Transform
Shape Shape588 = createNode("Shape");
Shape588.USE = "HAnimJointShape";
Transform587.children = new MFNode();

Transform587.children[0] = Shape588;

Transform586.children = new MFNode();

Transform586.children[0] = Transform587;

HAnimSegment585.children = new MFNode();

HAnimSegment585.children[0] = Transform586;

Shape Shape589 = createNode("Shape");
LineSet LineSet590 = createNode("LineSet");
LineSet590.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate591 = createNode("Coordinate");
Coordinate591.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet590.coord = Coordinate591;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA592 = createNode("ColorRGBA");
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA";
LineSet590.color = ColorRGBA592;

Shape589.geometry = LineSet590;

HAnimSegment585.children[1] = Shape589;

HAnimJoint584.children = new MFNode();

HAnimJoint584.children[0] = HAnimSegment585;

HAnimJoint HAnimJoint593 = createNode("HAnimJoint");
HAnimJoint593.name = "l_metacarpophalangeal_3";
HAnimJoint593.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint593.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint593.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint593.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment594 = createNode("HAnimSegment");
HAnimSegment594.name = "l_carpal_proximal_phalanx_3";
HAnimSegment594.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform595 = createNode("Transform");
Transform595.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Transform Transform596 = createNode("Transform");
//Empty Transform
Shape Shape597 = createNode("Shape");
Shape597.USE = "HAnimJointShape";
Transform596.children = new MFNode();

Transform596.children[0] = Shape597;

Transform595.children = new MFNode();

Transform595.children[0] = Transform596;

HAnimSegment594.children = new MFNode();

HAnimSegment594.children[0] = Transform595;

Shape Shape598 = createNode("Shape");
LineSet LineSet599 = createNode("LineSet");
LineSet599.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate600 = createNode("Coordinate");
Coordinate600.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet599.coord = Coordinate600;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA601 = createNode("ColorRGBA");
ColorRGBA601.USE = "HAnimSegmentLineColorRGBA";
LineSet599.color = ColorRGBA601;

Shape598.geometry = LineSet599;

HAnimSegment594.children[1] = Shape598;

HAnimJoint593.children = new MFNode();

HAnimJoint593.children[0] = HAnimSegment594;

HAnimJoint HAnimJoint602 = createNode("HAnimJoint");
HAnimJoint602.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint602.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint602.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint602.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint602.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment603 = createNode("HAnimSegment");
HAnimSegment603.name = "l_carpal_middle_phalanx_3";
HAnimSegment603.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform604 = createNode("Transform");
Transform604.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Transform Transform605 = createNode("Transform");
//Empty Transform
Shape Shape606 = createNode("Shape");
Shape606.USE = "HAnimJointShape";
Transform605.children = new MFNode();

Transform605.children[0] = Shape606;

Transform604.children = new MFNode();

Transform604.children[0] = Transform605;

HAnimSegment603.children = new MFNode();

HAnimSegment603.children[0] = Transform604;

Shape Shape607 = createNode("Shape");
LineSet LineSet608 = createNode("LineSet");
LineSet608.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate609 = createNode("Coordinate");
Coordinate609.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet608.coord = Coordinate609;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA610 = createNode("ColorRGBA");
ColorRGBA610.USE = "HAnimSegmentLineColorRGBA";
LineSet608.color = ColorRGBA610;

Shape607.geometry = LineSet608;

HAnimSegment603.children[1] = Shape607;

HAnimSite HAnimSite611 = createNode("HAnimSite");
HAnimSite611.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite611.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor612 = createNode("TouchSensor");
TouchSensor612.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite611.children = new MFNode();

HAnimSite611.children[0] = TouchSensor612;

Shape Shape613 = createNode("Shape");
Shape613.USE = "HAnimSiteShape";
HAnimSite611.children[1] = Shape613;

HAnimSegment603.children[2] = HAnimSite611;

HAnimJoint602.children = new MFNode();

HAnimJoint602.children[0] = HAnimSegment603;

HAnimJoint HAnimJoint614 = createNode("HAnimJoint");
HAnimJoint614.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint614.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint614.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint614.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint614.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint602.children[1] = HAnimJoint614;

HAnimJoint593.children[1] = HAnimJoint602;

HAnimJoint584.children[1] = HAnimJoint593;

HAnimJoint494.children[3] = HAnimJoint584;

HAnimJoint HAnimJoint615 = createNode("HAnimJoint");
HAnimJoint615.name = "l_carpometacarpal_4";
HAnimJoint615.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint615.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint615.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint615.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment616 = createNode("HAnimSegment");
HAnimSegment616.name = "l_metacarpal_4";
HAnimSegment616.DEF = "hanim_l_metacarpal_4";
Transform Transform617 = createNode("Transform");
Transform617.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Transform Transform618 = createNode("Transform");
//Empty Transform
Shape Shape619 = createNode("Shape");
Shape619.USE = "HAnimJointShape";
Transform618.children = new MFNode();

Transform618.children[0] = Shape619;

Transform617.children = new MFNode();

Transform617.children[0] = Transform618;

HAnimSegment616.children = new MFNode();

HAnimSegment616.children[0] = Transform617;

Shape Shape620 = createNode("Shape");
LineSet LineSet621 = createNode("LineSet");
LineSet621.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate622 = createNode("Coordinate");
Coordinate622.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet621.coord = Coordinate622;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA623 = createNode("ColorRGBA");
ColorRGBA623.USE = "HAnimSegmentLineColorRGBA";
LineSet621.color = ColorRGBA623;

Shape620.geometry = LineSet621;

HAnimSegment616.children[1] = Shape620;

HAnimJoint615.children = new MFNode();

HAnimJoint615.children[0] = HAnimSegment616;

HAnimJoint HAnimJoint624 = createNode("HAnimJoint");
HAnimJoint624.name = "l_metacarpophalangeal_4";
HAnimJoint624.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint624.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint624.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint624.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment625 = createNode("HAnimSegment");
HAnimSegment625.name = "l_carpal_proximal_phalanx_4";
HAnimSegment625.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform626 = createNode("Transform");
Transform626.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform627 = createNode("Transform");
//Empty Transform
Shape Shape628 = createNode("Shape");
Shape628.USE = "HAnimJointShape";
Transform627.children = new MFNode();

Transform627.children[0] = Shape628;

Transform626.children = new MFNode();

Transform626.children[0] = Transform627;

HAnimSegment625.children = new MFNode();

HAnimSegment625.children[0] = Transform626;

Shape Shape629 = createNode("Shape");
LineSet LineSet630 = createNode("LineSet");
LineSet630.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate631 = createNode("Coordinate");
Coordinate631.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet630.coord = Coordinate631;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA632 = createNode("ColorRGBA");
ColorRGBA632.USE = "HAnimSegmentLineColorRGBA";
LineSet630.color = ColorRGBA632;

Shape629.geometry = LineSet630;

HAnimSegment625.children[1] = Shape629;

HAnimJoint624.children = new MFNode();

HAnimJoint624.children[0] = HAnimSegment625;

HAnimJoint HAnimJoint633 = createNode("HAnimJoint");
HAnimJoint633.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint633.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint633.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint633.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint633.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment634 = createNode("HAnimSegment");
HAnimSegment634.name = "l_carpal_middle_phalanx_4";
HAnimSegment634.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform635 = createNode("Transform");
Transform635.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Transform Transform636 = createNode("Transform");
//Empty Transform
Shape Shape637 = createNode("Shape");
Shape637.USE = "HAnimJointShape";
Transform636.children = new MFNode();

Transform636.children[0] = Shape637;

Transform635.children = new MFNode();

Transform635.children[0] = Transform636;

HAnimSegment634.children = new MFNode();

HAnimSegment634.children[0] = Transform635;

Shape Shape638 = createNode("Shape");
LineSet LineSet639 = createNode("LineSet");
LineSet639.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate640 = createNode("Coordinate");
Coordinate640.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet639.coord = Coordinate640;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA641 = createNode("ColorRGBA");
ColorRGBA641.USE = "HAnimSegmentLineColorRGBA";
LineSet639.color = ColorRGBA641;

Shape638.geometry = LineSet639;

HAnimSegment634.children[1] = Shape638;

HAnimSite HAnimSite642 = createNode("HAnimSite");
HAnimSite642.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite642.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor643 = createNode("TouchSensor");
TouchSensor643.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite642.children = new MFNode();

HAnimSite642.children[0] = TouchSensor643;

Shape Shape644 = createNode("Shape");
Shape644.USE = "HAnimSiteShape";
HAnimSite642.children[1] = Shape644;

HAnimSegment634.children[2] = HAnimSite642;

HAnimJoint633.children = new MFNode();

HAnimJoint633.children[0] = HAnimSegment634;

HAnimJoint HAnimJoint645 = createNode("HAnimJoint");
HAnimJoint645.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint645.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint645.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint645.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint645.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint633.children[1] = HAnimJoint645;

HAnimJoint624.children[1] = HAnimJoint633;

HAnimJoint615.children[1] = HAnimJoint624;

HAnimJoint494.children[4] = HAnimJoint615;

HAnimJoint HAnimJoint646 = createNode("HAnimJoint");
HAnimJoint646.name = "l_carpometacarpal_5";
HAnimJoint646.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint646.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint646.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint646.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment647 = createNode("HAnimSegment");
HAnimSegment647.name = "l_metacarpal_5";
HAnimSegment647.DEF = "hanim_l_metacarpal_5";
Transform Transform648 = createNode("Transform");
Transform648.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Transform Transform649 = createNode("Transform");
//Empty Transform
Shape Shape650 = createNode("Shape");
Shape650.USE = "HAnimJointShape";
Transform649.children = new MFNode();

Transform649.children[0] = Shape650;

Transform648.children = new MFNode();

Transform648.children[0] = Transform649;

HAnimSegment647.children = new MFNode();

HAnimSegment647.children[0] = Transform648;

Shape Shape651 = createNode("Shape");
LineSet LineSet652 = createNode("LineSet");
LineSet652.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate653 = createNode("Coordinate");
Coordinate653.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet652.coord = Coordinate653;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA654 = createNode("ColorRGBA");
ColorRGBA654.USE = "HAnimSegmentLineColorRGBA";
LineSet652.color = ColorRGBA654;

Shape651.geometry = LineSet652;

HAnimSegment647.children[1] = Shape651;

HAnimJoint646.children = new MFNode();

HAnimJoint646.children[0] = HAnimSegment647;

HAnimJoint HAnimJoint655 = createNode("HAnimJoint");
HAnimJoint655.name = "l_metacarpophalangeal_5";
HAnimJoint655.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint655.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint655.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint655.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment656 = createNode("HAnimSegment");
HAnimSegment656.name = "l_carpal_proximal_phalanx_5";
HAnimSegment656.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform657 = createNode("Transform");
Transform657.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Transform Transform658 = createNode("Transform");
//Empty Transform
Shape Shape659 = createNode("Shape");
Shape659.USE = "HAnimJointShape";
Transform658.children = new MFNode();

Transform658.children[0] = Shape659;

Transform657.children = new MFNode();

Transform657.children[0] = Transform658;

HAnimSegment656.children = new MFNode();

HAnimSegment656.children[0] = Transform657;

Shape Shape660 = createNode("Shape");
LineSet LineSet661 = createNode("LineSet");
LineSet661.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate662 = createNode("Coordinate");
Coordinate662.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet661.coord = Coordinate662;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA663 = createNode("ColorRGBA");
ColorRGBA663.USE = "HAnimSegmentLineColorRGBA";
LineSet661.color = ColorRGBA663;

Shape660.geometry = LineSet661;

HAnimSegment656.children[1] = Shape660;

HAnimJoint655.children = new MFNode();

HAnimJoint655.children[0] = HAnimSegment656;

HAnimJoint HAnimJoint664 = createNode("HAnimJoint");
HAnimJoint664.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint664.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint664.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint664.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint664.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment665 = createNode("HAnimSegment");
HAnimSegment665.name = "l_carpal_middle_phalanx_5";
HAnimSegment665.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform666 = createNode("Transform");
Transform666.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform667 = createNode("Transform");
//Empty Transform
Shape Shape668 = createNode("Shape");
Shape668.USE = "HAnimJointShape";
Transform667.children = new MFNode();

Transform667.children[0] = Shape668;

Transform666.children = new MFNode();

Transform666.children[0] = Transform667;

HAnimSegment665.children = new MFNode();

HAnimSegment665.children[0] = Transform666;

Shape Shape669 = createNode("Shape");
LineSet LineSet670 = createNode("LineSet");
LineSet670.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate671 = createNode("Coordinate");
Coordinate671.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet670.coord = Coordinate671;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA672 = createNode("ColorRGBA");
ColorRGBA672.USE = "HAnimSegmentLineColorRGBA";
LineSet670.color = ColorRGBA672;

Shape669.geometry = LineSet670;

HAnimSegment665.children[1] = Shape669;

HAnimSite HAnimSite673 = createNode("HAnimSite");
HAnimSite673.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite673.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor674 = createNode("TouchSensor");
TouchSensor674.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite673.children = new MFNode();

HAnimSite673.children[0] = TouchSensor674;

Shape Shape675 = createNode("Shape");
Shape675.USE = "HAnimSiteShape";
HAnimSite673.children[1] = Shape675;

HAnimSegment665.children[2] = HAnimSite673;

HAnimJoint664.children = new MFNode();

HAnimJoint664.children[0] = HAnimSegment665;

HAnimJoint HAnimJoint676 = createNode("HAnimJoint");
HAnimJoint676.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint676.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint676.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint676.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint676.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint664.children[1] = HAnimJoint676;

HAnimJoint655.children[1] = HAnimJoint664;

HAnimJoint646.children[1] = HAnimJoint655;

HAnimJoint494.children[5] = HAnimJoint646;

HAnimJoint482.children[1] = HAnimJoint494;

HAnimJoint461.children[1] = HAnimJoint482;

HAnimJoint446.children[1] = HAnimJoint461;

HAnimJoint437.children[1] = HAnimJoint446;

HAnimJoint335.children[2] = HAnimJoint437;

HAnimJoint HAnimJoint677 = createNode("HAnimJoint");
HAnimJoint677.name = "r_sternoclavicular";
HAnimJoint677.DEF = "hanim_r_sternoclavicular";
HAnimJoint677.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint677.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint677.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment678 = createNode("HAnimSegment");
HAnimSegment678.name = "r_clavicle";
HAnimSegment678.DEF = "hanim_r_clavicle";
Transform Transform679 = createNode("Transform");
Transform679.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
Transform Transform680 = createNode("Transform");
//Empty Transform
Shape Shape681 = createNode("Shape");
Shape681.USE = "HAnimJointShape";
Transform680.children = new MFNode();

Transform680.children[0] = Shape681;

Transform679.children = new MFNode();

Transform679.children[0] = Transform680;

HAnimSegment678.children = new MFNode();

HAnimSegment678.children[0] = Transform679;

Shape Shape682 = createNode("Shape");
LineSet LineSet683 = createNode("LineSet");
LineSet683.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate684 = createNode("Coordinate");
Coordinate684.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet683.coord = Coordinate684;

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA ColorRGBA685 = createNode("ColorRGBA");
ColorRGBA685.USE = "HAnimSegmentLineColorRGBA";
LineSet683.color = ColorRGBA685;

Shape682.geometry = LineSet683;

HAnimSegment678.children[1] = Shape682;

HAnimJoint677.children = new MFNode();

HAnimJoint677.children[0] = HAnimSegment678;

HAnimJoint HAnimJoint686 = createNode("HAnimJoint");
HAnimJoint686.name = "r_acromioclavicular";
HAnimJoint686.DEF = "hanim_r_acromioclavicular";
HAnimJoint686.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint686.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint686.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment687 = createNode("HAnimSegment");
HAnimSegment687.name = "r_scapula";
HAnimSegment687.DEF = "hanim_r_scapula";
Transform Transform688 = createNode("Transform");
Transform688.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform689 = createNode("Transform");
//Empty Transform
Shape Shape690 = createNode("Shape");
Shape690.USE = "HAnimJointShape";
Transform689.children = new MFNode();

Transform689.children[0] = Shape690;

Transform688.children = new MFNode();

Transform688.children[0] = Transform689;

HAnimSegment687.children = new MFNode();

HAnimSegment687.children[0] = Transform688;

Shape Shape691 = createNode("Shape");
LineSet LineSet692 = createNode("LineSet");
LineSet692.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate693 = createNode("Coordinate");
Coordinate693.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet692.coord = Coordinate693;

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA ColorRGBA694 = createNode("ColorRGBA");
ColorRGBA694.USE = "HAnimSegmentLineColorRGBA";
LineSet692.color = ColorRGBA694;

Shape691.geometry = LineSet692;

HAnimSegment687.children[1] = Shape691;

HAnimSite HAnimSite695 = createNode("HAnimSite");
HAnimSite695.name = "r_bideltoid_pt";
HAnimSite695.DEF = "hanim_r_bideltoid_pt";
TouchSensor TouchSensor696 = createNode("TouchSensor");
TouchSensor696.description = "HAnimSite r_bideltoid_pt";
HAnimSite695.children = new MFNode();

HAnimSite695.children[0] = TouchSensor696;

Shape Shape697 = createNode("Shape");
Shape697.USE = "HAnimSiteShape";
HAnimSite695.children[1] = Shape697;

HAnimSegment687.children[2] = HAnimSite695;

HAnimSite HAnimSite698 = createNode("HAnimSite");
HAnimSite698.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite698.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite698.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor699 = createNode("TouchSensor");
TouchSensor699.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite698.children = new MFNode();

HAnimSite698.children[0] = TouchSensor699;

Shape Shape700 = createNode("Shape");
Shape700.USE = "HAnimSiteShape";
HAnimSite698.children[1] = Shape700;

HAnimSegment687.children[3] = HAnimSite698;

HAnimJoint686.children = new MFNode();

HAnimJoint686.children[0] = HAnimSegment687;

HAnimJoint HAnimJoint701 = createNode("HAnimJoint");
HAnimJoint701.name = "r_shoulder";
HAnimJoint701.DEF = "hanim_r_shoulder";
HAnimJoint701.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint701.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint701.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment702 = createNode("HAnimSegment");
HAnimSegment702.name = "r_upperarm";
HAnimSegment702.DEF = "hanim_r_upperarm";
Transform Transform703 = createNode("Transform");
Transform703.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform704 = createNode("Transform");
//Empty Transform
Shape Shape705 = createNode("Shape");
Shape705.USE = "HAnimJointShape";
Transform704.children = new MFNode();

Transform704.children[0] = Shape705;

Transform703.children = new MFNode();

Transform703.children[0] = Transform704;

HAnimSegment702.children = new MFNode();

HAnimSegment702.children[0] = Transform703;

Shape Shape706 = createNode("Shape");
LineSet LineSet707 = createNode("LineSet");
LineSet707.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate708 = createNode("Coordinate");
Coordinate708.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet707.coord = Coordinate708;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA709 = createNode("ColorRGBA");
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA";
LineSet707.color = ColorRGBA709;

Shape706.geometry = LineSet707;

HAnimSegment702.children[1] = Shape706;

HAnimSite HAnimSite710 = createNode("HAnimSite");
HAnimSite710.name = "r_humeral_medial_epicondyles_pt";
HAnimSite710.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite710.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor711 = createNode("TouchSensor");
TouchSensor711.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite710.children = new MFNode();

HAnimSite710.children[0] = TouchSensor711;

Shape Shape712 = createNode("Shape");
Shape712.USE = "HAnimSiteShape";
HAnimSite710.children[1] = Shape712;

HAnimSegment702.children[2] = HAnimSite710;

HAnimSite HAnimSite713 = createNode("HAnimSite");
HAnimSite713.name = "r_olecranon_pt";
HAnimSite713.DEF = "hanim_r_olecranon_pt";
HAnimSite713.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor714 = createNode("TouchSensor");
TouchSensor714.description = "HAnimSite r_olecranon_pt";
HAnimSite713.children = new MFNode();

HAnimSite713.children[0] = TouchSensor714;

Shape Shape715 = createNode("Shape");
Shape715.USE = "HAnimSiteShape";
HAnimSite713.children[1] = Shape715;

HAnimSegment702.children[3] = HAnimSite713;

HAnimSite HAnimSite716 = createNode("HAnimSite");
HAnimSite716.name = "r_radial_styloid_pt";
HAnimSite716.DEF = "hanim_r_radial_styloid_pt";
HAnimSite716.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor717 = createNode("TouchSensor");
TouchSensor717.description = "HAnimSite r_radial_styloid_pt";
HAnimSite716.children = new MFNode();

HAnimSite716.children[0] = TouchSensor717;

Shape Shape718 = createNode("Shape");
Shape718.USE = "HAnimSiteShape";
HAnimSite716.children[1] = Shape718;

HAnimSegment702.children[4] = HAnimSite716;

HAnimSite HAnimSite719 = createNode("HAnimSite");
HAnimSite719.name = "r_radiale_pt";
HAnimSite719.DEF = "hanim_r_radiale_pt";
HAnimSite719.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor720 = createNode("TouchSensor");
TouchSensor720.description = "HAnimSite r_radiale_pt";
HAnimSite719.children = new MFNode();

HAnimSite719.children[0] = TouchSensor720;

Shape Shape721 = createNode("Shape");
Shape721.USE = "HAnimSiteShape";
HAnimSite719.children[1] = Shape721;

HAnimSegment702.children[5] = HAnimSite719;

HAnimJoint701.children = new MFNode();

HAnimJoint701.children[0] = HAnimSegment702;

HAnimJoint HAnimJoint722 = createNode("HAnimJoint");
HAnimJoint722.name = "r_elbow";
HAnimJoint722.DEF = "hanim_r_elbow";
HAnimJoint722.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint722.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint722.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment723 = createNode("HAnimSegment");
HAnimSegment723.name = "r_forearm";
HAnimSegment723.DEF = "hanim_r_forearm";
Transform Transform724 = createNode("Transform");
Transform724.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform725 = createNode("Transform");
//Empty Transform
Shape Shape726 = createNode("Shape");
Shape726.USE = "HAnimJointShape";
Transform725.children = new MFNode();

Transform725.children[0] = Shape726;

Transform724.children = new MFNode();

Transform724.children[0] = Transform725;

HAnimSegment723.children = new MFNode();

HAnimSegment723.children[0] = Transform724;

Shape Shape727 = createNode("Shape");
LineSet LineSet728 = createNode("LineSet");
LineSet728.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate729 = createNode("Coordinate");
Coordinate729.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet728.coord = Coordinate729;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA730 = createNode("ColorRGBA");
ColorRGBA730.USE = "HAnimSegmentLineColorRGBA";
LineSet728.color = ColorRGBA730;

Shape727.geometry = LineSet728;

HAnimSegment723.children[1] = Shape727;

HAnimSite HAnimSite731 = createNode("HAnimSite");
HAnimSite731.name = "r_ulnar_styloid_pt";
HAnimSite731.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite731.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor732 = createNode("TouchSensor");
TouchSensor732.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite731.children = new MFNode();

HAnimSite731.children[0] = TouchSensor732;

Shape Shape733 = createNode("Shape");
Shape733.USE = "HAnimSiteShape";
HAnimSite731.children[1] = Shape733;

HAnimSegment723.children[2] = HAnimSite731;

HAnimJoint722.children = new MFNode();

HAnimJoint722.children[0] = HAnimSegment723;

HAnimJoint HAnimJoint734 = createNode("HAnimJoint");
HAnimJoint734.name = "r_radiocarpal";
HAnimJoint734.DEF = "hanim_r_radiocarpal";
HAnimJoint734.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint734.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint734.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment735 = createNode("HAnimSegment");
HAnimSegment735.name = "r_carpal";
HAnimSegment735.DEF = "hanim_r_carpal";
Transform Transform736 = createNode("Transform");
Transform736.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform736.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform736.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
Transform Transform737 = createNode("Transform");
Transform737.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
Shape Shape738 = createNode("Shape");
Shape738.USE = "HAnimJointShape";
Transform737.children = new MFNode();

Transform737.children[0] = Shape738;

Transform736.children = new MFNode();

Transform736.children[0] = Transform737;

HAnimSegment735.children = new MFNode();

HAnimSegment735.children[0] = Transform736;

Shape Shape739 = createNode("Shape");
LineSet LineSet740 = createNode("LineSet");
LineSet740.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate741 = createNode("Coordinate");
Coordinate741.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet740.coord = Coordinate741;

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA742 = createNode("ColorRGBA");
ColorRGBA742.USE = "HAnimSegmentLineColorRGBA";
LineSet740.color = ColorRGBA742;

Shape739.geometry = LineSet740;

HAnimSegment735.children[1] = Shape739;

Shape Shape743 = createNode("Shape");
LineSet LineSet744 = createNode("LineSet");
LineSet744.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate745 = createNode("Coordinate");
Coordinate745.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet744.coord = Coordinate745;

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA746 = createNode("ColorRGBA");
ColorRGBA746.USE = "HAnimSegmentLineColorRGBA";
LineSet744.color = ColorRGBA746;

Shape743.geometry = LineSet744;

HAnimSegment735.children[2] = Shape743;

HAnimSite HAnimSite747 = createNode("HAnimSite");
HAnimSite747.name = "r_metacarpal_phalanx_2_pt";
HAnimSite747.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite747.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor748 = createNode("TouchSensor");
TouchSensor748.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite747.children = new MFNode();

HAnimSite747.children[0] = TouchSensor748;

Shape Shape749 = createNode("Shape");
Shape749.USE = "HAnimSiteShape";
HAnimSite747.children[1] = Shape749;

HAnimSegment735.children[3] = HAnimSite747;

Shape Shape750 = createNode("Shape");
LineSet LineSet751 = createNode("LineSet");
LineSet751.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate752 = createNode("Coordinate");
Coordinate752.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet751.coord = Coordinate752;

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA753 = createNode("ColorRGBA");
ColorRGBA753.USE = "HAnimSegmentLineColorRGBA";
LineSet751.color = ColorRGBA753;

Shape750.geometry = LineSet751;

HAnimSegment735.children[4] = Shape750;

HAnimSite HAnimSite754 = createNode("HAnimSite");
HAnimSite754.name = "r_metacarpal_phalanx_3_pt";
HAnimSite754.DEF = "hanim_r_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor755 = createNode("TouchSensor");
TouchSensor755.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite754.children = new MFNode();

HAnimSite754.children[0] = TouchSensor755;

Shape Shape756 = createNode("Shape");
Shape756.USE = "HAnimSiteShape";
HAnimSite754.children[1] = Shape756;

HAnimSegment735.children[5] = HAnimSite754;

Shape Shape757 = createNode("Shape");
LineSet LineSet758 = createNode("LineSet");
LineSet758.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate759 = createNode("Coordinate");
Coordinate759.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet758.coord = Coordinate759;

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA760 = createNode("ColorRGBA");
ColorRGBA760.USE = "HAnimSegmentLineColorRGBA";
LineSet758.color = ColorRGBA760;

Shape757.geometry = LineSet758;

HAnimSegment735.children[6] = Shape757;

Shape Shape761 = createNode("Shape");
LineSet LineSet762 = createNode("LineSet");
LineSet762.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate763 = createNode("Coordinate");
Coordinate763.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet762.coord = Coordinate763;

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA764 = createNode("ColorRGBA");
ColorRGBA764.USE = "HAnimSegmentLineColorRGBA";
LineSet762.color = ColorRGBA764;

Shape761.geometry = LineSet762;

HAnimSegment735.children[7] = Shape761;

HAnimSite HAnimSite765 = createNode("HAnimSite");
HAnimSite765.name = "r_metacarpal_phalanx_5_pt";
HAnimSite765.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite765.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor766 = createNode("TouchSensor");
TouchSensor766.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite765.children = new MFNode();

HAnimSite765.children[0] = TouchSensor766;

Shape Shape767 = createNode("Shape");
Shape767.USE = "HAnimSiteShape";
HAnimSite765.children[1] = Shape767;

HAnimSegment735.children[8] = HAnimSite765;

HAnimJoint734.children = new MFNode();

HAnimJoint734.children[0] = HAnimSegment735;

HAnimJoint HAnimJoint768 = createNode("HAnimJoint");
HAnimJoint768.name = "r_carpometacarpal_1";
HAnimJoint768.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint768.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint768.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint768.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment769 = createNode("HAnimSegment");
HAnimSegment769.name = "r_metacarpal_1";
HAnimSegment769.DEF = "hanim_r_metacarpal_1";
Transform Transform770 = createNode("Transform");
Transform770.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
Transform Transform771 = createNode("Transform");
//Empty Transform
Shape Shape772 = createNode("Shape");
Shape772.USE = "HAnimJointShape";
Transform771.children = new MFNode();

Transform771.children[0] = Shape772;

Transform770.children = new MFNode();

Transform770.children[0] = Transform771;

HAnimSegment769.children = new MFNode();

HAnimSegment769.children[0] = Transform770;

Shape Shape773 = createNode("Shape");
LineSet LineSet774 = createNode("LineSet");
LineSet774.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate775 = createNode("Coordinate");
Coordinate775.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet774.coord = Coordinate775;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA776 = createNode("ColorRGBA");
ColorRGBA776.USE = "HAnimSegmentLineColorRGBA";
LineSet774.color = ColorRGBA776;

Shape773.geometry = LineSet774;

HAnimSegment769.children[1] = Shape773;

HAnimJoint768.children = new MFNode();

HAnimJoint768.children[0] = HAnimSegment769;

HAnimJoint HAnimJoint777 = createNode("HAnimJoint");
HAnimJoint777.name = "r_metacarpophalangeal_1";
HAnimJoint777.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint777.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint777.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint777.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment778 = createNode("HAnimSegment");
HAnimSegment778.name = "r_carpal_proximal_phalanx_1";
HAnimSegment778.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform779 = createNode("Transform");
Transform779.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
Transform Transform780 = createNode("Transform");
//Empty Transform
Shape Shape781 = createNode("Shape");
Shape781.USE = "HAnimJointShape";
Transform780.children = new MFNode();

Transform780.children[0] = Shape781;

Transform779.children = new MFNode();

Transform779.children[0] = Transform780;

HAnimSegment778.children = new MFNode();

HAnimSegment778.children[0] = Transform779;

Shape Shape782 = createNode("Shape");
LineSet LineSet783 = createNode("LineSet");
LineSet783.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate784 = createNode("Coordinate");
Coordinate784.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet783.coord = Coordinate784;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA785 = createNode("ColorRGBA");
ColorRGBA785.USE = "HAnimSegmentLineColorRGBA";
LineSet783.color = ColorRGBA785;

Shape782.geometry = LineSet783;

HAnimSegment778.children[1] = Shape782;

HAnimSite HAnimSite786 = createNode("HAnimSite");
HAnimSite786.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite786.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor787 = createNode("TouchSensor");
TouchSensor787.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = TouchSensor787;

Shape Shape788 = createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786.children[1] = Shape788;

HAnimSegment778.children[2] = HAnimSite786;

HAnimJoint777.children = new MFNode();

HAnimJoint777.children[0] = HAnimSegment778;

HAnimJoint HAnimJoint789 = createNode("HAnimJoint");
HAnimJoint789.name = "r_carpal_interphalangeal_1";
HAnimJoint789.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint789.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint789.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint789.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint777.children[1] = HAnimJoint789;

HAnimJoint768.children[1] = HAnimJoint777;

HAnimJoint734.children[1] = HAnimJoint768;

HAnimJoint HAnimJoint790 = createNode("HAnimJoint");
HAnimJoint790.name = "r_carpometacarpal_2";
HAnimJoint790.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint790.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint790.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint790.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment791 = createNode("HAnimSegment");
HAnimSegment791.name = "r_metacarpal_2";
HAnimSegment791.DEF = "hanim_r_metacarpal_2";
Transform Transform792 = createNode("Transform");
Transform792.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
Transform Transform793 = createNode("Transform");
//Empty Transform
Shape Shape794 = createNode("Shape");
Shape794.USE = "HAnimJointShape";
Transform793.children = new MFNode();

Transform793.children[0] = Shape794;

Transform792.children = new MFNode();

Transform792.children[0] = Transform793;

HAnimSegment791.children = new MFNode();

HAnimSegment791.children[0] = Transform792;

Shape Shape795 = createNode("Shape");
LineSet LineSet796 = createNode("LineSet");
LineSet796.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate797 = createNode("Coordinate");
Coordinate797.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet796.coord = Coordinate797;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA798 = createNode("ColorRGBA");
ColorRGBA798.USE = "HAnimSegmentLineColorRGBA";
LineSet796.color = ColorRGBA798;

Shape795.geometry = LineSet796;

HAnimSegment791.children[1] = Shape795;

HAnimJoint790.children = new MFNode();

HAnimJoint790.children[0] = HAnimSegment791;

HAnimJoint HAnimJoint799 = createNode("HAnimJoint");
HAnimJoint799.name = "r_metacarpophalangeal_2";
HAnimJoint799.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint799.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint799.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint799.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment800 = createNode("HAnimSegment");
HAnimSegment800.name = "r_carpal_proximal_phalanx_2";
HAnimSegment800.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform801 = createNode("Transform");
Transform801.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform802 = createNode("Transform");
//Empty Transform
Shape Shape803 = createNode("Shape");
Shape803.USE = "HAnimJointShape";
Transform802.children = new MFNode();

Transform802.children[0] = Shape803;

Transform801.children = new MFNode();

Transform801.children[0] = Transform802;

HAnimSegment800.children = new MFNode();

HAnimSegment800.children[0] = Transform801;

Shape Shape804 = createNode("Shape");
LineSet LineSet805 = createNode("LineSet");
LineSet805.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate806 = createNode("Coordinate");
Coordinate806.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet805.coord = Coordinate806;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA807 = createNode("ColorRGBA");
ColorRGBA807.USE = "HAnimSegmentLineColorRGBA";
LineSet805.color = ColorRGBA807;

Shape804.geometry = LineSet805;

HAnimSegment800.children[1] = Shape804;

HAnimJoint799.children = new MFNode();

HAnimJoint799.children[0] = HAnimSegment800;

HAnimJoint HAnimJoint808 = createNode("HAnimJoint");
HAnimJoint808.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint808.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint808.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint808.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint808.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment809 = createNode("HAnimSegment");
HAnimSegment809.name = "r_carpal_middle_phalanx_2";
HAnimSegment809.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform810 = createNode("Transform");
Transform810.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform811 = createNode("Transform");
//Empty Transform
Shape Shape812 = createNode("Shape");
Shape812.USE = "HAnimJointShape";
Transform811.children = new MFNode();

Transform811.children[0] = Shape812;

Transform810.children = new MFNode();

Transform810.children[0] = Transform811;

HAnimSegment809.children = new MFNode();

HAnimSegment809.children[0] = Transform810;

Shape Shape813 = createNode("Shape");
LineSet LineSet814 = createNode("LineSet");
LineSet814.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate815 = createNode("Coordinate");
Coordinate815.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet814.coord = Coordinate815;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA816 = createNode("ColorRGBA");
ColorRGBA816.USE = "HAnimSegmentLineColorRGBA";
LineSet814.color = ColorRGBA816;

Shape813.geometry = LineSet814;

HAnimSegment809.children[1] = Shape813;

HAnimSite HAnimSite817 = createNode("HAnimSite");
HAnimSite817.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite817.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor818 = createNode("TouchSensor");
TouchSensor818.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = TouchSensor818;

Shape Shape819 = createNode("Shape");
Shape819.USE = "HAnimSiteShape";
HAnimSite817.children[1] = Shape819;

HAnimSegment809.children[2] = HAnimSite817;

HAnimSite HAnimSite820 = createNode("HAnimSite");
HAnimSite820.name = "r_dactylion_pt";
HAnimSite820.DEF = "hanim_r_dactylion_pt";
HAnimSite820.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor821 = createNode("TouchSensor");
TouchSensor821.description = "HAnimSite r_dactylion_pt";
HAnimSite820.children = new MFNode();

HAnimSite820.children[0] = TouchSensor821;

Shape Shape822 = createNode("Shape");
Shape822.USE = "HAnimSiteShape";
HAnimSite820.children[1] = Shape822;

HAnimSegment809.children[3] = HAnimSite820;

HAnimJoint808.children = new MFNode();

HAnimJoint808.children[0] = HAnimSegment809;

HAnimJoint HAnimJoint823 = createNode("HAnimJoint");
HAnimJoint823.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint823.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint823.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint823.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint823.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint808.children[1] = HAnimJoint823;

HAnimJoint799.children[1] = HAnimJoint808;

HAnimJoint790.children[1] = HAnimJoint799;

HAnimJoint734.children[2] = HAnimJoint790;

HAnimJoint HAnimJoint824 = createNode("HAnimJoint");
HAnimJoint824.name = "r_carpometacarpal_3";
HAnimJoint824.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint824.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint824.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint824.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment825 = createNode("HAnimSegment");
HAnimSegment825.name = "r_metacarpal_3";
HAnimSegment825.DEF = "hanim_r_metacarpal_3";
Transform Transform826 = createNode("Transform");
Transform826.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform827 = createNode("Transform");
//Empty Transform
Shape Shape828 = createNode("Shape");
Shape828.USE = "HAnimJointShape";
Transform827.children = new MFNode();

Transform827.children[0] = Shape828;

Transform826.children = new MFNode();

Transform826.children[0] = Transform827;

HAnimSegment825.children = new MFNode();

HAnimSegment825.children[0] = Transform826;

Shape Shape829 = createNode("Shape");
LineSet LineSet830 = createNode("LineSet");
LineSet830.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate831 = createNode("Coordinate");
Coordinate831.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet830.coord = Coordinate831;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA832 = createNode("ColorRGBA");
ColorRGBA832.USE = "HAnimSegmentLineColorRGBA";
LineSet830.color = ColorRGBA832;

Shape829.geometry = LineSet830;

HAnimSegment825.children[1] = Shape829;

HAnimJoint824.children = new MFNode();

HAnimJoint824.children[0] = HAnimSegment825;

HAnimJoint HAnimJoint833 = createNode("HAnimJoint");
HAnimJoint833.name = "r_metacarpophalangeal_3";
HAnimJoint833.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint833.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint833.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint833.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment834 = createNode("HAnimSegment");
HAnimSegment834.name = "r_carpal_proximal_phalanx_3";
HAnimSegment834.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform835 = createNode("Transform");
Transform835.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
Transform Transform836 = createNode("Transform");
//Empty Transform
Shape Shape837 = createNode("Shape");
Shape837.USE = "HAnimJointShape";
Transform836.children = new MFNode();

Transform836.children[0] = Shape837;

Transform835.children = new MFNode();

Transform835.children[0] = Transform836;

HAnimSegment834.children = new MFNode();

HAnimSegment834.children[0] = Transform835;

Shape Shape838 = createNode("Shape");
LineSet LineSet839 = createNode("LineSet");
LineSet839.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate840 = createNode("Coordinate");
Coordinate840.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet839.coord = Coordinate840;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA841 = createNode("ColorRGBA");
ColorRGBA841.USE = "HAnimSegmentLineColorRGBA";
LineSet839.color = ColorRGBA841;

Shape838.geometry = LineSet839;

HAnimSegment834.children[1] = Shape838;

HAnimJoint833.children = new MFNode();

HAnimJoint833.children[0] = HAnimSegment834;

HAnimJoint HAnimJoint842 = createNode("HAnimJoint");
HAnimJoint842.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint842.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint842.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint842.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint842.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment843 = createNode("HAnimSegment");
HAnimSegment843.name = "r_carpal_middle_phalanx_3";
HAnimSegment843.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform844 = createNode("Transform");
Transform844.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
Transform Transform845 = createNode("Transform");
//Empty Transform
Shape Shape846 = createNode("Shape");
Shape846.USE = "HAnimJointShape";
Transform845.children = new MFNode();

Transform845.children[0] = Shape846;

Transform844.children = new MFNode();

Transform844.children[0] = Transform845;

HAnimSegment843.children = new MFNode();

HAnimSegment843.children[0] = Transform844;

Shape Shape847 = createNode("Shape");
LineSet LineSet848 = createNode("LineSet");
LineSet848.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate849 = createNode("Coordinate");
Coordinate849.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet848.coord = Coordinate849;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA850 = createNode("ColorRGBA");
ColorRGBA850.USE = "HAnimSegmentLineColorRGBA";
LineSet848.color = ColorRGBA850;

Shape847.geometry = LineSet848;

HAnimSegment843.children[1] = Shape847;

HAnimSite HAnimSite851 = createNode("HAnimSite");
HAnimSite851.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite851.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor852 = createNode("TouchSensor");
TouchSensor852.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite851.children = new MFNode();

HAnimSite851.children[0] = TouchSensor852;

Shape Shape853 = createNode("Shape");
Shape853.USE = "HAnimSiteShape";
HAnimSite851.children[1] = Shape853;

HAnimSegment843.children[2] = HAnimSite851;

HAnimJoint842.children = new MFNode();

HAnimJoint842.children[0] = HAnimSegment843;

HAnimJoint HAnimJoint854 = createNode("HAnimJoint");
HAnimJoint854.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint854.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint854.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint854.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint854.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint842.children[1] = HAnimJoint854;

HAnimJoint833.children[1] = HAnimJoint842;

HAnimJoint824.children[1] = HAnimJoint833;

HAnimJoint734.children[3] = HAnimJoint824;

HAnimJoint HAnimJoint855 = createNode("HAnimJoint");
HAnimJoint855.name = "r_carpometacarpal_4";
HAnimJoint855.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint855.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint855.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint855.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment856 = createNode("HAnimSegment");
HAnimSegment856.name = "r_metacarpal_4";
HAnimSegment856.DEF = "hanim_r_metacarpal_4";
Transform Transform857 = createNode("Transform");
Transform857.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
Transform Transform858 = createNode("Transform");
//Empty Transform
Shape Shape859 = createNode("Shape");
Shape859.USE = "HAnimJointShape";
Transform858.children = new MFNode();

Transform858.children[0] = Shape859;

Transform857.children = new MFNode();

Transform857.children[0] = Transform858;

HAnimSegment856.children = new MFNode();

HAnimSegment856.children[0] = Transform857;

Shape Shape860 = createNode("Shape");
LineSet LineSet861 = createNode("LineSet");
LineSet861.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate862 = createNode("Coordinate");
Coordinate862.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet861.coord = Coordinate862;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA863 = createNode("ColorRGBA");
ColorRGBA863.USE = "HAnimSegmentLineColorRGBA";
LineSet861.color = ColorRGBA863;

Shape860.geometry = LineSet861;

HAnimSegment856.children[1] = Shape860;

HAnimJoint855.children = new MFNode();

HAnimJoint855.children[0] = HAnimSegment856;

HAnimJoint HAnimJoint864 = createNode("HAnimJoint");
HAnimJoint864.name = "r_metacarpophalangeal_4";
HAnimJoint864.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint864.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint864.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint864.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment865 = createNode("HAnimSegment");
HAnimSegment865.name = "r_carpal_proximal_phalanx_4";
HAnimSegment865.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform866 = createNode("Transform");
Transform866.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform867 = createNode("Transform");
//Empty Transform
Shape Shape868 = createNode("Shape");
Shape868.USE = "HAnimJointShape";
Transform867.children = new MFNode();

Transform867.children[0] = Shape868;

Transform866.children = new MFNode();

Transform866.children[0] = Transform867;

HAnimSegment865.children = new MFNode();

HAnimSegment865.children[0] = Transform866;

Shape Shape869 = createNode("Shape");
LineSet LineSet870 = createNode("LineSet");
LineSet870.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate871 = createNode("Coordinate");
Coordinate871.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet870.coord = Coordinate871;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA872 = createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSegmentLineColorRGBA";
LineSet870.color = ColorRGBA872;

Shape869.geometry = LineSet870;

HAnimSegment865.children[1] = Shape869;

HAnimJoint864.children = new MFNode();

HAnimJoint864.children[0] = HAnimSegment865;

HAnimJoint HAnimJoint873 = createNode("HAnimJoint");
HAnimJoint873.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint873.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint873.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint873.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint873.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment874 = createNode("HAnimSegment");
HAnimSegment874.name = "r_carpal_middle_phalanx_4";
HAnimSegment874.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform875 = createNode("Transform");
Transform875.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform876 = createNode("Transform");
//Empty Transform
Shape Shape877 = createNode("Shape");
Shape877.USE = "HAnimJointShape";
Transform876.children = new MFNode();

Transform876.children[0] = Shape877;

Transform875.children = new MFNode();

Transform875.children[0] = Transform876;

HAnimSegment874.children = new MFNode();

HAnimSegment874.children[0] = Transform875;

Shape Shape878 = createNode("Shape");
LineSet LineSet879 = createNode("LineSet");
LineSet879.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate880 = createNode("Coordinate");
Coordinate880.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet879.coord = Coordinate880;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA881 = createNode("ColorRGBA");
ColorRGBA881.USE = "HAnimSegmentLineColorRGBA";
LineSet879.color = ColorRGBA881;

Shape878.geometry = LineSet879;

HAnimSegment874.children[1] = Shape878;

HAnimSite HAnimSite882 = createNode("HAnimSite");
HAnimSite882.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite882.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor883 = createNode("TouchSensor");
TouchSensor883.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite882.children = new MFNode();

HAnimSite882.children[0] = TouchSensor883;

Shape Shape884 = createNode("Shape");
Shape884.USE = "HAnimSiteShape";
HAnimSite882.children[1] = Shape884;

HAnimSegment874.children[2] = HAnimSite882;

HAnimJoint873.children = new MFNode();

HAnimJoint873.children[0] = HAnimSegment874;

HAnimJoint HAnimJoint885 = createNode("HAnimJoint");
HAnimJoint885.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint885.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint885.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint885.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint885.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint873.children[1] = HAnimJoint885;

HAnimJoint864.children[1] = HAnimJoint873;

HAnimJoint855.children[1] = HAnimJoint864;

HAnimJoint734.children[4] = HAnimJoint855;

HAnimJoint HAnimJoint886 = createNode("HAnimJoint");
HAnimJoint886.name = "r_carpometacarpal_5";
HAnimJoint886.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint886.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint886.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint886.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment887 = createNode("HAnimSegment");
HAnimSegment887.name = "r_metacarpal_5";
HAnimSegment887.DEF = "hanim_r_metacarpal_5";
Transform Transform888 = createNode("Transform");
Transform888.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
Transform Transform889 = createNode("Transform");
//Empty Transform
Shape Shape890 = createNode("Shape");
Shape890.USE = "HAnimJointShape";
Transform889.children = new MFNode();

Transform889.children[0] = Shape890;

Transform888.children = new MFNode();

Transform888.children[0] = Transform889;

HAnimSegment887.children = new MFNode();

HAnimSegment887.children[0] = Transform888;

Shape Shape891 = createNode("Shape");
LineSet LineSet892 = createNode("LineSet");
LineSet892.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate893 = createNode("Coordinate");
Coordinate893.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet892.coord = Coordinate893;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA894 = createNode("ColorRGBA");
ColorRGBA894.USE = "HAnimSegmentLineColorRGBA";
LineSet892.color = ColorRGBA894;

Shape891.geometry = LineSet892;

HAnimSegment887.children[1] = Shape891;

HAnimJoint886.children = new MFNode();

HAnimJoint886.children[0] = HAnimSegment887;

HAnimJoint HAnimJoint895 = createNode("HAnimJoint");
HAnimJoint895.name = "r_metacarpophalangeal_5";
HAnimJoint895.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint895.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint895.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint895.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment896 = createNode("HAnimSegment");
HAnimSegment896.name = "r_carpal_proximal_phalanx_5";
HAnimSegment896.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform897 = createNode("Transform");
Transform897.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
Transform Transform898 = createNode("Transform");
//Empty Transform
Shape Shape899 = createNode("Shape");
Shape899.USE = "HAnimJointShape";
Transform898.children = new MFNode();

Transform898.children[0] = Shape899;

Transform897.children = new MFNode();

Transform897.children[0] = Transform898;

HAnimSegment896.children = new MFNode();

HAnimSegment896.children[0] = Transform897;

Shape Shape900 = createNode("Shape");
LineSet LineSet901 = createNode("LineSet");
LineSet901.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate902 = createNode("Coordinate");
Coordinate902.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet901.coord = Coordinate902;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA903 = createNode("ColorRGBA");
ColorRGBA903.USE = "HAnimSegmentLineColorRGBA";
LineSet901.color = ColorRGBA903;

Shape900.geometry = LineSet901;

HAnimSegment896.children[1] = Shape900;

HAnimJoint895.children = new MFNode();

HAnimJoint895.children[0] = HAnimSegment896;

HAnimJoint HAnimJoint904 = createNode("HAnimJoint");
HAnimJoint904.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint904.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint904.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint904.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint904.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment905 = createNode("HAnimSegment");
HAnimSegment905.name = "r_carpal_middle_phalanx_5";
HAnimSegment905.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform906 = createNode("Transform");
Transform906.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
Transform Transform907 = createNode("Transform");
//Empty Transform
Shape Shape908 = createNode("Shape");
Shape908.USE = "HAnimJointShape";
Transform907.children = new MFNode();

Transform907.children[0] = Shape908;

Transform906.children = new MFNode();

Transform906.children[0] = Transform907;

HAnimSegment905.children = new MFNode();

HAnimSegment905.children[0] = Transform906;

Shape Shape909 = createNode("Shape");
LineSet LineSet910 = createNode("LineSet");
LineSet910.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate911 = createNode("Coordinate");
Coordinate911.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet910.coord = Coordinate911;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA912 = createNode("ColorRGBA");
ColorRGBA912.USE = "HAnimSegmentLineColorRGBA";
LineSet910.color = ColorRGBA912;

Shape909.geometry = LineSet910;

HAnimSegment905.children[1] = Shape909;

HAnimSite HAnimSite913 = createNode("HAnimSite");
HAnimSite913.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite913.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor914 = createNode("TouchSensor");
TouchSensor914.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite913.children = new MFNode();

HAnimSite913.children[0] = TouchSensor914;

Shape Shape915 = createNode("Shape");
Shape915.USE = "HAnimSiteShape";
HAnimSite913.children[1] = Shape915;

HAnimSegment905.children[2] = HAnimSite913;

HAnimJoint904.children = new MFNode();

HAnimJoint904.children[0] = HAnimSegment905;

HAnimJoint HAnimJoint916 = createNode("HAnimJoint");
HAnimJoint916.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint916.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint916.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint916.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint916.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint904.children[1] = HAnimJoint916;

HAnimJoint895.children[1] = HAnimJoint904;

HAnimJoint886.children[1] = HAnimJoint895;

HAnimJoint734.children[5] = HAnimJoint886;

HAnimJoint722.children[1] = HAnimJoint734;

HAnimJoint701.children[1] = HAnimJoint722;

HAnimJoint686.children[1] = HAnimJoint701;

HAnimJoint677.children[1] = HAnimJoint686;

HAnimJoint335.children[3] = HAnimJoint677;

HAnimJoint320.children[1] = HAnimJoint335;

HAnimJoint299.children[1] = HAnimJoint320;

HAnimJoint287.children[1] = HAnimJoint299;

HAnimJoint278.children[1] = HAnimJoint287;

HAnimJoint269.children[1] = HAnimJoint278;

HAnimJoint52.children[2] = HAnimJoint269;

HAnimHumanoid43.joints[1] = HAnimJoint52;

HAnimJoint HAnimJoint917 = createNode("HAnimJoint");
HAnimJoint917.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint917;

HAnimJoint HAnimJoint918 = createNode("HAnimJoint");
HAnimJoint918.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint918;

HAnimJoint HAnimJoint919 = createNode("HAnimJoint");
HAnimJoint919.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint919;

HAnimJoint HAnimJoint920 = createNode("HAnimJoint");
HAnimJoint920.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint920;

HAnimJoint HAnimJoint921 = createNode("HAnimJoint");
HAnimJoint921.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint921;

HAnimJoint HAnimJoint922 = createNode("HAnimJoint");
HAnimJoint922.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[7] = HAnimJoint922;

HAnimJoint HAnimJoint923 = createNode("HAnimJoint");
HAnimJoint923.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[8] = HAnimJoint923;

HAnimJoint HAnimJoint924 = createNode("HAnimJoint");
HAnimJoint924.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[9] = HAnimJoint924;

HAnimJoint HAnimJoint925 = createNode("HAnimJoint");
HAnimJoint925.USE = "hanim_r_hip";
HAnimHumanoid43.joints[10] = HAnimJoint925;

HAnimJoint HAnimJoint926 = createNode("HAnimJoint");
HAnimJoint926.USE = "hanim_r_knee";
HAnimHumanoid43.joints[11] = HAnimJoint926;

HAnimJoint HAnimJoint927 = createNode("HAnimJoint");
HAnimJoint927.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[12] = HAnimJoint927;

HAnimJoint HAnimJoint928 = createNode("HAnimJoint");
HAnimJoint928.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint928;

HAnimJoint HAnimJoint929 = createNode("HAnimJoint");
HAnimJoint929.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint929;

HAnimJoint HAnimJoint930 = createNode("HAnimJoint");
HAnimJoint930.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint930;

HAnimJoint HAnimJoint931 = createNode("HAnimJoint");
HAnimJoint931.USE = "hanim_vl5";
HAnimHumanoid43.joints[16] = HAnimJoint931;

HAnimJoint HAnimJoint932 = createNode("HAnimJoint");
HAnimJoint932.USE = "hanim_vl3";
HAnimHumanoid43.joints[17] = HAnimJoint932;

HAnimJoint HAnimJoint933 = createNode("HAnimJoint");
HAnimJoint933.USE = "hanim_vl1";
HAnimHumanoid43.joints[18] = HAnimJoint933;

HAnimJoint HAnimJoint934 = createNode("HAnimJoint");
HAnimJoint934.USE = "hanim_vt10";
HAnimHumanoid43.joints[19] = HAnimJoint934;

HAnimJoint HAnimJoint935 = createNode("HAnimJoint");
HAnimJoint935.USE = "hanim_vt6";
HAnimHumanoid43.joints[20] = HAnimJoint935;

HAnimJoint HAnimJoint936 = createNode("HAnimJoint");
HAnimJoint936.USE = "hanim_vt1";
HAnimHumanoid43.joints[21] = HAnimJoint936;

HAnimJoint HAnimJoint937 = createNode("HAnimJoint");
HAnimJoint937.USE = "hanim_vc4";
HAnimHumanoid43.joints[22] = HAnimJoint937;

HAnimJoint HAnimJoint938 = createNode("HAnimJoint");
HAnimJoint938.USE = "hanim_vc2";
HAnimHumanoid43.joints[23] = HAnimJoint938;

HAnimJoint HAnimJoint939 = createNode("HAnimJoint");
HAnimJoint939.USE = "hanim_skullbase";
HAnimHumanoid43.joints[24] = HAnimJoint939;

HAnimJoint HAnimJoint940 = createNode("HAnimJoint");
HAnimJoint940.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[25] = HAnimJoint940;

HAnimJoint HAnimJoint941 = createNode("HAnimJoint");
HAnimJoint941.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[26] = HAnimJoint941;

HAnimJoint HAnimJoint942 = createNode("HAnimJoint");
HAnimJoint942.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[27] = HAnimJoint942;

HAnimJoint HAnimJoint943 = createNode("HAnimJoint");
HAnimJoint943.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[28] = HAnimJoint943;

HAnimJoint HAnimJoint944 = createNode("HAnimJoint");
HAnimJoint944.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[29] = HAnimJoint944;

HAnimJoint HAnimJoint945 = createNode("HAnimJoint");
HAnimJoint945.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[30] = HAnimJoint945;

HAnimJoint HAnimJoint946 = createNode("HAnimJoint");
HAnimJoint946.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[31] = HAnimJoint946;

HAnimJoint HAnimJoint947 = createNode("HAnimJoint");
HAnimJoint947.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[32] = HAnimJoint947;

HAnimJoint HAnimJoint948 = createNode("HAnimJoint");
HAnimJoint948.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[33] = HAnimJoint948;

HAnimJoint HAnimJoint949 = createNode("HAnimJoint");
HAnimJoint949.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[34] = HAnimJoint949;

HAnimJoint HAnimJoint950 = createNode("HAnimJoint");
HAnimJoint950.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[35] = HAnimJoint950;

HAnimJoint HAnimJoint951 = createNode("HAnimJoint");
HAnimJoint951.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[36] = HAnimJoint951;

HAnimJoint HAnimJoint952 = createNode("HAnimJoint");
HAnimJoint952.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[37] = HAnimJoint952;

HAnimJoint HAnimJoint953 = createNode("HAnimJoint");
HAnimJoint953.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[38] = HAnimJoint953;

HAnimJoint HAnimJoint954 = createNode("HAnimJoint");
HAnimJoint954.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[39] = HAnimJoint954;

HAnimJoint HAnimJoint955 = createNode("HAnimJoint");
HAnimJoint955.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[40] = HAnimJoint955;

HAnimJoint HAnimJoint956 = createNode("HAnimJoint");
HAnimJoint956.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[41] = HAnimJoint956;

HAnimJoint HAnimJoint957 = createNode("HAnimJoint");
HAnimJoint957.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[42] = HAnimJoint957;

HAnimJoint HAnimJoint958 = createNode("HAnimJoint");
HAnimJoint958.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[43] = HAnimJoint958;

HAnimJoint HAnimJoint959 = createNode("HAnimJoint");
HAnimJoint959.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[44] = HAnimJoint959;

HAnimJoint HAnimJoint960 = createNode("HAnimJoint");
HAnimJoint960.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[45] = HAnimJoint960;

HAnimJoint HAnimJoint961 = createNode("HAnimJoint");
HAnimJoint961.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[46] = HAnimJoint961;

HAnimJoint HAnimJoint962 = createNode("HAnimJoint");
HAnimJoint962.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[47] = HAnimJoint962;

HAnimJoint HAnimJoint963 = createNode("HAnimJoint");
HAnimJoint963.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[48] = HAnimJoint963;

HAnimJoint HAnimJoint964 = createNode("HAnimJoint");
HAnimJoint964.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[49] = HAnimJoint964;

HAnimJoint HAnimJoint965 = createNode("HAnimJoint");
HAnimJoint965.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[50] = HAnimJoint965;

HAnimJoint HAnimJoint966 = createNode("HAnimJoint");
HAnimJoint966.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[51] = HAnimJoint966;

HAnimJoint HAnimJoint967 = createNode("HAnimJoint");
HAnimJoint967.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[52] = HAnimJoint967;

HAnimJoint HAnimJoint968 = createNode("HAnimJoint");
HAnimJoint968.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[53] = HAnimJoint968;

HAnimJoint HAnimJoint969 = createNode("HAnimJoint");
HAnimJoint969.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[54] = HAnimJoint969;

HAnimJoint HAnimJoint970 = createNode("HAnimJoint");
HAnimJoint970.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[55] = HAnimJoint970;

HAnimJoint HAnimJoint971 = createNode("HAnimJoint");
HAnimJoint971.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[56] = HAnimJoint971;

HAnimJoint HAnimJoint972 = createNode("HAnimJoint");
HAnimJoint972.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[57] = HAnimJoint972;

HAnimJoint HAnimJoint973 = createNode("HAnimJoint");
HAnimJoint973.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[58] = HAnimJoint973;

HAnimJoint HAnimJoint974 = createNode("HAnimJoint");
HAnimJoint974.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[59] = HAnimJoint974;

HAnimJoint HAnimJoint975 = createNode("HAnimJoint");
HAnimJoint975.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[60] = HAnimJoint975;

HAnimJoint HAnimJoint976 = createNode("HAnimJoint");
HAnimJoint976.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[61] = HAnimJoint976;

HAnimJoint HAnimJoint977 = createNode("HAnimJoint");
HAnimJoint977.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[62] = HAnimJoint977;

HAnimJoint HAnimJoint978 = createNode("HAnimJoint");
HAnimJoint978.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[63] = HAnimJoint978;

HAnimJoint HAnimJoint979 = createNode("HAnimJoint");
HAnimJoint979.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[64] = HAnimJoint979;

HAnimJoint HAnimJoint980 = createNode("HAnimJoint");
HAnimJoint980.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[65] = HAnimJoint980;

HAnimJoint HAnimJoint981 = createNode("HAnimJoint");
HAnimJoint981.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[66] = HAnimJoint981;

HAnimJoint HAnimJoint982 = createNode("HAnimJoint");
HAnimJoint982.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[67] = HAnimJoint982;

HAnimJoint HAnimJoint983 = createNode("HAnimJoint");
HAnimJoint983.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[68] = HAnimJoint983;

HAnimJoint HAnimJoint984 = createNode("HAnimJoint");
HAnimJoint984.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[69] = HAnimJoint984;

HAnimJoint HAnimJoint985 = createNode("HAnimJoint");
HAnimJoint985.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[70] = HAnimJoint985;

HAnimJoint HAnimJoint986 = createNode("HAnimJoint");
HAnimJoint986.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[71] = HAnimJoint986;

HAnimJoint HAnimJoint987 = createNode("HAnimJoint");
HAnimJoint987.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[72] = HAnimJoint987;

HAnimSegment HAnimSegment988 = createNode("HAnimSegment");
HAnimSegment988.USE = "hanim_sacrum";
HAnimHumanoid43.segments[73] = HAnimSegment988;

HAnimSegment HAnimSegment989 = createNode("HAnimSegment");
HAnimSegment989.USE = "hanim_pelvis";
HAnimHumanoid43.segments[74] = HAnimSegment989;

HAnimSegment HAnimSegment990 = createNode("HAnimSegment");
HAnimSegment990.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[75] = HAnimSegment990;

HAnimSegment HAnimSegment991 = createNode("HAnimSegment");
HAnimSegment991.USE = "hanim_l_calf";
HAnimHumanoid43.segments[76] = HAnimSegment991;

HAnimSegment HAnimSegment992 = createNode("HAnimSegment");
HAnimSegment992.USE = "hanim_l_talus";
HAnimHumanoid43.segments[77] = HAnimSegment992;

HAnimSegment HAnimSegment993 = createNode("HAnimSegment");
HAnimSegment993.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[78] = HAnimSegment993;

HAnimSegment HAnimSegment994 = createNode("HAnimSegment");
HAnimSegment994.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[79] = HAnimSegment994;

HAnimSegment HAnimSegment995 = createNode("HAnimSegment");
HAnimSegment995.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[80] = HAnimSegment995;

HAnimSegment HAnimSegment996 = createNode("HAnimSegment");
HAnimSegment996.USE = "hanim_r_calf";
HAnimHumanoid43.segments[81] = HAnimSegment996;

HAnimSegment HAnimSegment997 = createNode("HAnimSegment");
HAnimSegment997.USE = "hanim_r_talus";
HAnimHumanoid43.segments[82] = HAnimSegment997;

HAnimSegment HAnimSegment998 = createNode("HAnimSegment");
HAnimSegment998.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[83] = HAnimSegment998;

HAnimSegment HAnimSegment999 = createNode("HAnimSegment");
HAnimSegment999.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[84] = HAnimSegment999;

HAnimSegment HAnimSegment1000 = createNode("HAnimSegment");
HAnimSegment1000.USE = "hanim_l5";
HAnimHumanoid43.segments[85] = HAnimSegment1000;

HAnimSegment HAnimSegment1001 = createNode("HAnimSegment");
HAnimSegment1001.USE = "hanim_l3";
HAnimHumanoid43.segments[86] = HAnimSegment1001;

HAnimSegment HAnimSegment1002 = createNode("HAnimSegment");
HAnimSegment1002.USE = "hanim_l1";
HAnimHumanoid43.segments[87] = HAnimSegment1002;

HAnimSegment HAnimSegment1003 = createNode("HAnimSegment");
HAnimSegment1003.USE = "hanim_t10";
HAnimHumanoid43.segments[88] = HAnimSegment1003;

HAnimSegment HAnimSegment1004 = createNode("HAnimSegment");
HAnimSegment1004.USE = "hanim_t6";
HAnimHumanoid43.segments[89] = HAnimSegment1004;

HAnimSegment HAnimSegment1005 = createNode("HAnimSegment");
HAnimSegment1005.USE = "hanim_t1";
HAnimHumanoid43.segments[90] = HAnimSegment1005;

HAnimSegment HAnimSegment1006 = createNode("HAnimSegment");
HAnimSegment1006.USE = "hanim_c4";
HAnimHumanoid43.segments[91] = HAnimSegment1006;

HAnimSegment HAnimSegment1007 = createNode("HAnimSegment");
HAnimSegment1007.USE = "hanim_c2";
HAnimHumanoid43.segments[92] = HAnimSegment1007;

HAnimSegment HAnimSegment1008 = createNode("HAnimSegment");
HAnimSegment1008.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[93] = HAnimSegment1008;

HAnimSegment HAnimSegment1009 = createNode("HAnimSegment");
HAnimSegment1009.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[94] = HAnimSegment1009;

HAnimSegment HAnimSegment1010 = createNode("HAnimSegment");
HAnimSegment1010.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[95] = HAnimSegment1010;

HAnimSegment HAnimSegment1011 = createNode("HAnimSegment");
HAnimSegment1011.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[96] = HAnimSegment1011;

HAnimSegment HAnimSegment1012 = createNode("HAnimSegment");
HAnimSegment1012.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[97] = HAnimSegment1012;

HAnimSegment HAnimSegment1013 = createNode("HAnimSegment");
HAnimSegment1013.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[98] = HAnimSegment1013;

HAnimSegment HAnimSegment1014 = createNode("HAnimSegment");
HAnimSegment1014.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[99] = HAnimSegment1014;

HAnimSegment HAnimSegment1015 = createNode("HAnimSegment");
HAnimSegment1015.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[100] = HAnimSegment1015;

HAnimSegment HAnimSegment1016 = createNode("HAnimSegment");
HAnimSegment1016.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[101] = HAnimSegment1016;

HAnimSegment HAnimSegment1017 = createNode("HAnimSegment");
HAnimSegment1017.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[102] = HAnimSegment1017;

HAnimSegment HAnimSegment1018 = createNode("HAnimSegment");
HAnimSegment1018.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[103] = HAnimSegment1018;

HAnimSegment HAnimSegment1019 = createNode("HAnimSegment");
HAnimSegment1019.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[104] = HAnimSegment1019;

HAnimSegment HAnimSegment1020 = createNode("HAnimSegment");
HAnimSegment1020.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[105] = HAnimSegment1020;

HAnimSegment HAnimSegment1021 = createNode("HAnimSegment");
HAnimSegment1021.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[106] = HAnimSegment1021;

HAnimSegment HAnimSegment1022 = createNode("HAnimSegment");
HAnimSegment1022.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[107] = HAnimSegment1022;

HAnimSegment HAnimSegment1023 = createNode("HAnimSegment");
HAnimSegment1023.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[108] = HAnimSegment1023;

HAnimSegment HAnimSegment1024 = createNode("HAnimSegment");
HAnimSegment1024.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[109] = HAnimSegment1024;

HAnimSegment HAnimSegment1025 = createNode("HAnimSegment");
HAnimSegment1025.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[110] = HAnimSegment1025;

HAnimSegment HAnimSegment1026 = createNode("HAnimSegment");
HAnimSegment1026.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[111] = HAnimSegment1026;

HAnimSegment HAnimSegment1027 = createNode("HAnimSegment");
HAnimSegment1027.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[112] = HAnimSegment1027;

HAnimSegment HAnimSegment1028 = createNode("HAnimSegment");
HAnimSegment1028.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[113] = HAnimSegment1028;

HAnimSegment HAnimSegment1029 = createNode("HAnimSegment");
HAnimSegment1029.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[114] = HAnimSegment1029;

HAnimSegment HAnimSegment1030 = createNode("HAnimSegment");
HAnimSegment1030.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[115] = HAnimSegment1030;

HAnimSegment HAnimSegment1031 = createNode("HAnimSegment");
HAnimSegment1031.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[116] = HAnimSegment1031;

HAnimSegment HAnimSegment1032 = createNode("HAnimSegment");
HAnimSegment1032.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[117] = HAnimSegment1032;

HAnimSegment HAnimSegment1033 = createNode("HAnimSegment");
HAnimSegment1033.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[118] = HAnimSegment1033;

HAnimSegment HAnimSegment1034 = createNode("HAnimSegment");
HAnimSegment1034.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[119] = HAnimSegment1034;

HAnimSegment HAnimSegment1035 = createNode("HAnimSegment");
HAnimSegment1035.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[120] = HAnimSegment1035;

HAnimSegment HAnimSegment1036 = createNode("HAnimSegment");
HAnimSegment1036.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[121] = HAnimSegment1036;

HAnimSegment HAnimSegment1037 = createNode("HAnimSegment");
HAnimSegment1037.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[122] = HAnimSegment1037;

HAnimSegment HAnimSegment1038 = createNode("HAnimSegment");
HAnimSegment1038.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[123] = HAnimSegment1038;

HAnimSegment HAnimSegment1039 = createNode("HAnimSegment");
HAnimSegment1039.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[124] = HAnimSegment1039;

HAnimSegment HAnimSegment1040 = createNode("HAnimSegment");
HAnimSegment1040.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[125] = HAnimSegment1040;

HAnimSegment HAnimSegment1041 = createNode("HAnimSegment");
HAnimSegment1041.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[126] = HAnimSegment1041;

HAnimSegment HAnimSegment1042 = createNode("HAnimSegment");
HAnimSegment1042.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[127] = HAnimSegment1042;

HAnimSegment HAnimSegment1043 = createNode("HAnimSegment");
HAnimSegment1043.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[128] = HAnimSegment1043;

HAnimSegment HAnimSegment1044 = createNode("HAnimSegment");
HAnimSegment1044.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[129] = HAnimSegment1044;

HAnimSegment HAnimSegment1045 = createNode("HAnimSegment");
HAnimSegment1045.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[130] = HAnimSegment1045;

HAnimSite HAnimSite1046 = createNode("HAnimSite");
HAnimSite1046.USE = "hanim_buttocks_standing_wall_contact_point";
HAnimHumanoid43.viewpoints[131] = HAnimSite1046;

HAnimSite HAnimSite1047 = createNode("HAnimSite");
HAnimSite1047.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[132] = HAnimSite1047;

HAnimSite HAnimSite1048 = createNode("HAnimSite");
HAnimSite1048.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[133] = HAnimSite1048;

HAnimSite HAnimSite1049 = createNode("HAnimSite");
HAnimSite1049.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[134] = HAnimSite1049;

HAnimSite HAnimSite1050 = createNode("HAnimSite");
HAnimSite1050.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[135] = HAnimSite1050;

HAnimSite HAnimSite1051 = createNode("HAnimSite");
HAnimSite1051.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[136] = HAnimSite1051;

HAnimSite HAnimSite1052 = createNode("HAnimSite");
HAnimSite1052.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[137] = HAnimSite1052;

HAnimSite HAnimSite1053 = createNode("HAnimSite");
HAnimSite1053.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[138] = HAnimSite1053;

HAnimSite HAnimSite1054 = createNode("HAnimSite");
HAnimSite1054.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[139] = HAnimSite1054;

HAnimSite HAnimSite1055 = createNode("HAnimSite");
HAnimSite1055.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[140] = HAnimSite1055;

HAnimSite HAnimSite1056 = createNode("HAnimSite");
HAnimSite1056.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[141] = HAnimSite1056;

HAnimSite HAnimSite1057 = createNode("HAnimSite");
HAnimSite1057.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid43.viewpoints[142] = HAnimSite1057;

HAnimSite HAnimSite1058 = createNode("HAnimSite");
HAnimSite1058.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[143] = HAnimSite1058;

HAnimSite HAnimSite1059 = createNode("HAnimSite");
HAnimSite1059.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[144] = HAnimSite1059;

HAnimSite HAnimSite1060 = createNode("HAnimSite");
HAnimSite1060.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[145] = HAnimSite1060;

HAnimSite HAnimSite1061 = createNode("HAnimSite");
HAnimSite1061.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[146] = HAnimSite1061;

HAnimSite HAnimSite1062 = createNode("HAnimSite");
HAnimSite1062.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid43.viewpoints[147] = HAnimSite1062;

HAnimSite HAnimSite1063 = createNode("HAnimSite");
HAnimSite1063.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[148] = HAnimSite1063;

HAnimSite HAnimSite1064 = createNode("HAnimSite");
HAnimSite1064.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[149] = HAnimSite1064;

HAnimSite HAnimSite1065 = createNode("HAnimSite");
HAnimSite1065.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[150] = HAnimSite1065;

HAnimSite HAnimSite1066 = createNode("HAnimSite");
HAnimSite1066.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid43.viewpoints[151] = HAnimSite1066;

HAnimSite HAnimSite1067 = createNode("HAnimSite");
HAnimSite1067.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[152] = HAnimSite1067;

HAnimSite HAnimSite1068 = createNode("HAnimSite");
HAnimSite1068.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[153] = HAnimSite1068;

HAnimSite HAnimSite1069 = createNode("HAnimSite");
HAnimSite1069.USE = "hanim_l_tibiale_pt";
HAnimHumanoid43.viewpoints[154] = HAnimSite1069;

HAnimSite HAnimSite1070 = createNode("HAnimSite");
HAnimSite1070.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[155] = HAnimSite1070;

HAnimSite HAnimSite1071 = createNode("HAnimSite");
HAnimSite1071.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[156] = HAnimSite1071;

HAnimSite HAnimSite1072 = createNode("HAnimSite");
HAnimSite1072.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[157] = HAnimSite1072;

HAnimSite HAnimSite1073 = createNode("HAnimSite");
HAnimSite1073.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[158] = HAnimSite1073;

HAnimSite HAnimSite1074 = createNode("HAnimSite");
HAnimSite1074.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[159] = HAnimSite1074;

HAnimSite HAnimSite1075 = createNode("HAnimSite");
HAnimSite1075.USE = "hanim_r_tibiale_pt";
HAnimHumanoid43.viewpoints[160] = HAnimSite1075;

HAnimSite HAnimSite1076 = createNode("HAnimSite");
HAnimSite1076.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[161] = HAnimSite1076;

HAnimSite HAnimSite1077 = createNode("HAnimSite");
HAnimSite1077.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[162] = HAnimSite1077;

HAnimSite HAnimSite1078 = createNode("HAnimSite");
HAnimSite1078.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[163] = HAnimSite1078;

HAnimSite HAnimSite1079 = createNode("HAnimSite");
HAnimSite1079.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[164] = HAnimSite1079;

HAnimSite HAnimSite1080 = createNode("HAnimSite");
HAnimSite1080.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[165] = HAnimSite1080;

HAnimSite HAnimSite1081 = createNode("HAnimSite");
HAnimSite1081.USE = "hanim_mesosternale_pt";
HAnimHumanoid43.viewpoints[166] = HAnimSite1081;

HAnimSite HAnimSite1082 = createNode("HAnimSite");
HAnimSite1082.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[167] = HAnimSite1082;

HAnimSite HAnimSite1083 = createNode("HAnimSite");
HAnimSite1083.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[168] = HAnimSite1083;

HAnimSite HAnimSite1084 = createNode("HAnimSite");
HAnimSite1084.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[169] = HAnimSite1084;

HAnimSite HAnimSite1085 = createNode("HAnimSite");
HAnimSite1085.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[170] = HAnimSite1085;

HAnimSite HAnimSite1086 = createNode("HAnimSite");
HAnimSite1086.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[171] = HAnimSite1086;

HAnimSite HAnimSite1087 = createNode("HAnimSite");
HAnimSite1087.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[172] = HAnimSite1087;

HAnimSite HAnimSite1088 = createNode("HAnimSite");
HAnimSite1088.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[173] = HAnimSite1088;

HAnimSite HAnimSite1089 = createNode("HAnimSite");
HAnimSite1089.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[174] = HAnimSite1089;

HAnimSite HAnimSite1090 = createNode("HAnimSite");
HAnimSite1090.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[175] = HAnimSite1090;

HAnimSite HAnimSite1091 = createNode("HAnimSite");
HAnimSite1091.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[176] = HAnimSite1091;

HAnimSite HAnimSite1092 = createNode("HAnimSite");
HAnimSite1092.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[177] = HAnimSite1092;

HAnimSite HAnimSite1093 = createNode("HAnimSite");
HAnimSite1093.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[178] = HAnimSite1093;

HAnimSite HAnimSite1094 = createNode("HAnimSite");
HAnimSite1094.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[179] = HAnimSite1094;

HAnimSite HAnimSite1095 = createNode("HAnimSite");
HAnimSite1095.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[180] = HAnimSite1095;

HAnimSite HAnimSite1096 = createNode("HAnimSite");
HAnimSite1096.USE = "hanim_adams_apple_pt";
HAnimHumanoid43.viewpoints[181] = HAnimSite1096;

HAnimSite HAnimSite1097 = createNode("HAnimSite");
HAnimSite1097.USE = "hanim_glabella_pt";
HAnimHumanoid43.viewpoints[182] = HAnimSite1097;

HAnimSite HAnimSite1098 = createNode("HAnimSite");
HAnimSite1098.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid43.viewpoints[183] = HAnimSite1098;

HAnimSite HAnimSite1099 = createNode("HAnimSite");
HAnimSite1099.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[184] = HAnimSite1099;

HAnimSite HAnimSite1100 = createNode("HAnimSite");
HAnimSite1100.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[185] = HAnimSite1100;

HAnimSite HAnimSite1101 = createNode("HAnimSite");
HAnimSite1101.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[186] = HAnimSite1101;

HAnimSite HAnimSite1102 = createNode("HAnimSite");
HAnimSite1102.USE = "hanim_opisthocranion_pt";
HAnimHumanoid43.viewpoints[187] = HAnimSite1102;

HAnimSite HAnimSite1103 = createNode("HAnimSite");
HAnimSite1103.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid43.viewpoints[188] = HAnimSite1103;

HAnimSite HAnimSite1104 = createNode("HAnimSite");
HAnimSite1104.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[189] = HAnimSite1104;

HAnimSite HAnimSite1105 = createNode("HAnimSite");
HAnimSite1105.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[190] = HAnimSite1105;

HAnimSite HAnimSite1106 = createNode("HAnimSite");
HAnimSite1106.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[191] = HAnimSite1106;

HAnimSite HAnimSite1107 = createNode("HAnimSite");
HAnimSite1107.USE = "hanim_skull_vertex_pt";
HAnimHumanoid43.viewpoints[192] = HAnimSite1107;

HAnimSite HAnimSite1108 = createNode("HAnimSite");
HAnimSite1108.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid43.viewpoints[193] = HAnimSite1108;

HAnimSite HAnimSite1109 = createNode("HAnimSite");
HAnimSite1109.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[194] = HAnimSite1109;

HAnimSite HAnimSite1110 = createNode("HAnimSite");
HAnimSite1110.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[195] = HAnimSite1110;

HAnimSite HAnimSite1111 = createNode("HAnimSite");
HAnimSite1111.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[196] = HAnimSite1111;

HAnimSite HAnimSite1112 = createNode("HAnimSite");
HAnimSite1112.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[197] = HAnimSite1112;

HAnimSite HAnimSite1113 = createNode("HAnimSite");
HAnimSite1113.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[198] = HAnimSite1113;

HAnimSite HAnimSite1114 = createNode("HAnimSite");
HAnimSite1114.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[199] = HAnimSite1114;

HAnimSite HAnimSite1115 = createNode("HAnimSite");
HAnimSite1115.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[200] = HAnimSite1115;

HAnimSite HAnimSite1116 = createNode("HAnimSite");
HAnimSite1116.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[201] = HAnimSite1116;

HAnimSite HAnimSite1117 = createNode("HAnimSite");
HAnimSite1117.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[202] = HAnimSite1117;

HAnimSite HAnimSite1118 = createNode("HAnimSite");
HAnimSite1118.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[203] = HAnimSite1118;

HAnimSite HAnimSite1119 = createNode("HAnimSite");
HAnimSite1119.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[204] = HAnimSite1119;

HAnimSite HAnimSite1120 = createNode("HAnimSite");
HAnimSite1120.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[205] = HAnimSite1120;

HAnimSite HAnimSite1121 = createNode("HAnimSite");
HAnimSite1121.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[206] = HAnimSite1121;

HAnimSite HAnimSite1122 = createNode("HAnimSite");
HAnimSite1122.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[207] = HAnimSite1122;

HAnimSite HAnimSite1123 = createNode("HAnimSite");
HAnimSite1123.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[208] = HAnimSite1123;

HAnimSite HAnimSite1124 = createNode("HAnimSite");
HAnimSite1124.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid43.viewpoints[209] = HAnimSite1124;

HAnimSite HAnimSite1125 = createNode("HAnimSite");
HAnimSite1125.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[210] = HAnimSite1125;

HAnimSite HAnimSite1126 = createNode("HAnimSite");
HAnimSite1126.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[211] = HAnimSite1126;

HAnimSite HAnimSite1127 = createNode("HAnimSite");
HAnimSite1127.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[212] = HAnimSite1127;

HAnimSite HAnimSite1128 = createNode("HAnimSite");
HAnimSite1128.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[213] = HAnimSite1128;

HAnimSite HAnimSite1129 = createNode("HAnimSite");
HAnimSite1129.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[214] = HAnimSite1129;

HAnimSite HAnimSite1130 = createNode("HAnimSite");
HAnimSite1130.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[215] = HAnimSite1130;

HAnimSite HAnimSite1131 = createNode("HAnimSite");
HAnimSite1131.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[216] = HAnimSite1131;

HAnimSite HAnimSite1132 = createNode("HAnimSite");
HAnimSite1132.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[217] = HAnimSite1132;

HAnimSite HAnimSite1133 = createNode("HAnimSite");
HAnimSite1133.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[218] = HAnimSite1133;

HAnimSite HAnimSite1134 = createNode("HAnimSite");
HAnimSite1134.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[219] = HAnimSite1134;

HAnimSite HAnimSite1135 = createNode("HAnimSite");
HAnimSite1135.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[220] = HAnimSite1135;

HAnimSite HAnimSite1136 = createNode("HAnimSite");
HAnimSite1136.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[221] = HAnimSite1136;

HAnimSite HAnimSite1137 = createNode("HAnimSite");
HAnimSite1137.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[222] = HAnimSite1137;

HAnimSite HAnimSite1138 = createNode("HAnimSite");
HAnimSite1138.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[223] = HAnimSite1138;

HAnimSite HAnimSite1139 = createNode("HAnimSite");
HAnimSite1139.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[224] = HAnimSite1139;

children[4] = HAnimHumanoid43;

}
