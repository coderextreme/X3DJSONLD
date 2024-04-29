let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "JohnBoy.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "description";
meta5.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "generator";
meta6.content = "h2.pl";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "14 Jan 2023";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "creator";
meta8.content = "John Carlson";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "created";
meta9.content = "9 November 2020";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "license";
meta10.content = "../license.html";
head1.meta[8] = meta10;

head = head1;

let Transform12 = browser.currentScene.createNode("Transform");
//DEF for markerfor XYZ axes
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet14 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet14.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet14.colorPerVertex = False;
IndexedLineSet14.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Coordinate15 = browser.currentScene.createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet14.coord = Coordinate15;

let Color16 = browser.currentScene.createNode("Color");
Color16.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet14.color = Color16;

Shape13.geometry = IndexedLineSet14;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform12;

let Group17 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform18 = browser.currentScene.createNode("Transform");
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,2.1,0]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "HAnimJointShape";
let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 0.02;
Shape20.geometry = Sphere21;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.DEF = "HAnimJointMaterial";
Material23.diffuseColor = new SFColor(new float[0,0,0]);
Appearance22.material = Material23;

Shape20.appearance = Appearance22;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,2.05,0]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.DEF = "HAnimSegmentLine";
let LineSet26 = browser.currentScene.createNode("LineSet");
LineSet26.vertexCount = new MFInt32(new int[2]);
let ColorRGBA27 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA27.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA27.color = new MFColorRGBA(new float[1,1,0,0,1,1,0,0]);
LineSet26.color = ColorRGBA27;

let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet26.coord = Coordinate28;

Shape25.geometry = LineSet26;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform18.children[1] = Transform24;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,2.1,0]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "HAnimSiteShape";
let IndexedFaceSet31 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet31.DEF = "DiamondIFS";
IndexedFaceSet31.creaseAngle = 0.5;
IndexedFaceSet31.solid = False;
IndexedFaceSet31.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA32 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA32.DEF = "HAnimSiteColorRGBA";
ColorRGBA32.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet31.color = ColorRGBA32;

let Coordinate33 = browser.currentScene.createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet31.coord = Coordinate33;

Shape30.geometry = IndexedFaceSet31;

let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.diffuseColor = new SFColor(new float[1,1,1]);
Material35.transparency = 1;
Appearance34.material = Material35;

Shape30.appearance = Appearance34;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Transform18.children[2] = Transform29;

Group17.children = new MFNode();

Group17.children[0] = Transform18;

browser.currentScene.children[1] = Group17;

let NavigationInfo36 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo36.speed = 1.5;
browser.currentScene.children[2] = NavigationInfo36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.position = new SFVec3f(new float[0,1,3]);
Viewpoint37.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint37.description = "default";
browser.currentScene.children[3] = Viewpoint37;

let HAnimHumanoid38 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid38.name = "HAnim";
HAnimHumanoid38.DEF = "hanim_HAnim";
HAnimHumanoid38.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid38.version = "2.0";
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
let Shape39 = browser.currentScene.createNode("Shape");
Shape39.DEF = "SkinShape";
let IndexedFaceSet40 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet40.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet40.creaseAngle = 3.1;
let Coordinate41 = browser.currentScene.createNode("Coordinate");
Coordinate41.DEF = "TheSkinCoord";
Coordinate41.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
IndexedFaceSet40.coord = Coordinate41;

let Color42 = browser.currentScene.createNode("Color");
Color42.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet40.color = Color42;

Shape39.geometry = IndexedFaceSet40;

let Appearance43 = browser.currentScene.createNode("Appearance");
Appearance43.DEF = "SkinAppearance";
let ImageTexture44 = browser.currentScene.createNode("ImageTexture");
ImageTexture44.DEF = "zBlueSpiralBkg2";
ImageTexture44.description = "Blue Spiral Pattern";
ImageTexture44.url = new MFString(new java.lang.String["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance43.texture = ImageTexture44;

let Material45 = browser.currentScene.createNode("Material");
Material45.DEF = "SkinMaterial";
Material45.ambientIntensity = 0.6;
Material45.diffuseColor = new SFColor(new float[1,1,1]);
Material45.shininess = 0.6;
Material45.transparency = 1;
Appearance43.material = Material45;

Shape39.appearance = Appearance43;

HAnimHumanoid38.skin = new MFNode();

HAnimHumanoid38.skin[0] = Shape39;

let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.USE = "TheSkinCoord";
HAnimHumanoid38.skinCoord = Coordinate46;

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "humanoid_root";
HAnimJoint47.DEF = "hanim_humanoid_root";
HAnimJoint47.center = new SFVec3f(new float[0,0.824,0.0277]);
let HAnimSegment48 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment48.name = "sacrum";
HAnimSegment48.DEF = "hanim_sacrum";
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Transform50 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape51 = browser.currentScene.createNode("Shape");
Shape51.USE = "HAnimJointShape";
Transform50.child = new undefined();

Transform50.child[0] = Shape51;

Transform49.children = new MFNode();

Transform49.children[0] = Transform50;

HAnimSegment48.children = new MFNode();

HAnimSegment48.children[0] = Transform49;

let Shape52 = browser.currentScene.createNode("Shape");
let LineSet53 = browser.currentScene.createNode("LineSet");
LineSet53.vertexCount = new MFInt32(new int[2]);
let Coordinate54 = browser.currentScene.createNode("Coordinate");
Coordinate54.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet53.coord = Coordinate54;

//from humanoid_root to sacroiliac vertices 2
let ColorRGBA55 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA55.USE = "HAnimSegmentLineColorRGBA";
LineSet53.color = ColorRGBA55;

Shape52.geometry = LineSet53;

HAnimSegment48.children[1] = Shape52;

let Shape56 = browser.currentScene.createNode("Shape");
let LineSet57 = browser.currentScene.createNode("LineSet");
LineSet57.vertexCount = new MFInt32(new int[2]);
let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet57.coord = Coordinate58;

//from humanoid_root to vl5 vertices 2
let ColorRGBA59 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA59.USE = "HAnimSegmentLineColorRGBA";
LineSet57.color = ColorRGBA59;

Shape56.geometry = LineSet57;

HAnimSegment48.children[2] = Shape56;

HAnimJoint47.children = new MFNode();

HAnimJoint47.children[0] = HAnimSegment48;

let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "sacroiliac";
HAnimJoint60.DEF = "hanim_sacroiliac";
HAnimJoint60.center = new SFVec3f(new float[0,0.9149,0.0016]);
let HAnimSegment61 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment61.name = "pelvis";
HAnimSegment61.DEF = "hanim_pelvis";
let Transform62 = browser.currentScene.createNode("Transform");
Transform62.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Transform63 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "HAnimJointShape";
Transform63.child = new undefined();

Transform63.child[0] = Shape64;

Transform62.children = new MFNode();

Transform62.children[0] = Transform63;

HAnimSegment61.children = new MFNode();

HAnimSegment61.children[0] = Transform62;

let Shape65 = browser.currentScene.createNode("Shape");
let LineSet66 = browser.currentScene.createNode("LineSet");
LineSet66.vertexCount = new MFInt32(new int[2]);
let Coordinate67 = browser.currentScene.createNode("Coordinate");
Coordinate67.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet66.coord = Coordinate67;

//from sacroiliac to l_hip vertices 2
let ColorRGBA68 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA68.USE = "HAnimSegmentLineColorRGBA";
LineSet66.color = ColorRGBA68;

Shape65.geometry = LineSet66;

HAnimSegment61.children[1] = Shape65;

let HAnimSite69 = browser.currentScene.createNode("HAnimSite");
HAnimSite69.name = "buttocks_standing_wall_contact_point";
HAnimSite69.DEF = "hanim_buttocks_standing_wall_contact_point";
let TouchSensor70 = browser.currentScene.createNode("TouchSensor");
TouchSensor70.description = "HAnimSite 93 buttocks_standing_wall_contact_point";
HAnimSite69.children = new MFNode();

HAnimSite69.children[0] = TouchSensor70;

let Shape71 = browser.currentScene.createNode("Shape");
Shape71.USE = "HAnimSiteShape";
HAnimSite69.children[1] = Shape71;

let Billboard72 = browser.currentScene.createNode("Billboard");
let Shape73 = browser.currentScene.createNode("Shape");
let Text74 = browser.currentScene.createNode("Text");
Text74.string = new MFString(new java.lang.String["93"]);
let FontStyle75 = browser.currentScene.createNode("FontStyle");
FontStyle75.size = 0.035;
Text74.fontStyle = FontStyle75;

Shape73.geometry = Text74;

Billboard72.children = new MFNode();

Billboard72.children[0] = Shape73;

HAnimSite69.children[2] = Billboard72;

HAnimSegment61.children[2] = HAnimSite69;

let HAnimSite76 = browser.currentScene.createNode("HAnimSite");
HAnimSite76.name = "crotch";
HAnimSite76.DEF = "hanim_crotch";
HAnimSite76.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
let TouchSensor77 = browser.currentScene.createNode("TouchSensor");
TouchSensor77.description = "HAnimSite 38 crotch";
HAnimSite76.children = new MFNode();

HAnimSite76.children[0] = TouchSensor77;

let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "HAnimSiteShape";
HAnimSite76.children[1] = Shape78;

let Billboard79 = browser.currentScene.createNode("Billboard");
let Shape80 = browser.currentScene.createNode("Shape");
let Text81 = browser.currentScene.createNode("Text");
Text81.string = new MFString(new java.lang.String["38"]);
let FontStyle82 = browser.currentScene.createNode("FontStyle");
FontStyle82.size = 0.035;
Text81.fontStyle = FontStyle82;

Shape80.geometry = Text81;

Billboard79.children = new MFNode();

Billboard79.children[0] = Shape80;

HAnimSite76.children[2] = Billboard79;

HAnimSegment61.children[3] = HAnimSite76;

let HAnimSite83 = browser.currentScene.createNode("HAnimSite");
HAnimSite83.name = "l_asis";
HAnimSite83.DEF = "hanim_l_asis";
HAnimSite83.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
let TouchSensor84 = browser.currentScene.createNode("TouchSensor");
TouchSensor84.description = "HAnimSite 32 l_asis";
HAnimSite83.children = new MFNode();

HAnimSite83.children[0] = TouchSensor84;

let Shape85 = browser.currentScene.createNode("Shape");
Shape85.USE = "HAnimSiteShape";
HAnimSite83.children[1] = Shape85;

let Billboard86 = browser.currentScene.createNode("Billboard");
let Shape87 = browser.currentScene.createNode("Shape");
let Text88 = browser.currentScene.createNode("Text");
Text88.string = new MFString(new java.lang.String["32"]);
let FontStyle89 = browser.currentScene.createNode("FontStyle");
FontStyle89.size = 0.035;
Text88.fontStyle = FontStyle89;

Shape87.geometry = Text88;

Billboard86.children = new MFNode();

Billboard86.children[0] = Shape87;

HAnimSite83.children[2] = Billboard86;

HAnimSegment61.children[4] = HAnimSite83;

let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.name = "l_iliocristale";
HAnimSite90.DEF = "hanim_l_iliocristale";
HAnimSite90.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
let TouchSensor91 = browser.currentScene.createNode("TouchSensor");
TouchSensor91.description = "HAnimSite 33 l_iliocristale";
HAnimSite90.children = new MFNode();

HAnimSite90.children[0] = TouchSensor91;

let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "HAnimSiteShape";
HAnimSite90.children[1] = Shape92;

let Billboard93 = browser.currentScene.createNode("Billboard");
let Shape94 = browser.currentScene.createNode("Shape");
let Text95 = browser.currentScene.createNode("Text");
Text95.string = new MFString(new java.lang.String["33"]);
let FontStyle96 = browser.currentScene.createNode("FontStyle");
FontStyle96.size = 0.035;
Text95.fontStyle = FontStyle96;

Shape94.geometry = Text95;

Billboard93.children = new MFNode();

Billboard93.children[0] = Shape94;

HAnimSite90.children[2] = Billboard93;

HAnimSegment61.children[5] = HAnimSite90;

let HAnimSite97 = browser.currentScene.createNode("HAnimSite");
HAnimSite97.name = "l_psis";
HAnimSite97.DEF = "hanim_l_psis";
HAnimSite97.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
let TouchSensor98 = browser.currentScene.createNode("TouchSensor");
TouchSensor98.description = "HAnimSite 34 l_psis";
HAnimSite97.children = new MFNode();

HAnimSite97.children[0] = TouchSensor98;

let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "HAnimSiteShape";
HAnimSite97.children[1] = Shape99;

let Billboard100 = browser.currentScene.createNode("Billboard");
let Shape101 = browser.currentScene.createNode("Shape");
let Text102 = browser.currentScene.createNode("Text");
Text102.string = new MFString(new java.lang.String["34"]);
let FontStyle103 = browser.currentScene.createNode("FontStyle");
FontStyle103.size = 0.035;
Text102.fontStyle = FontStyle103;

Shape101.geometry = Text102;

Billboard100.children = new MFNode();

Billboard100.children[0] = Shape101;

HAnimSite97.children[2] = Billboard100;

HAnimSegment61.children[6] = HAnimSite97;

let HAnimSite104 = browser.currentScene.createNode("HAnimSite");
HAnimSite104.name = "l_trochanterion";
HAnimSite104.DEF = "hanim_l_trochanterion";
HAnimSite104.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
let TouchSensor105 = browser.currentScene.createNode("TouchSensor");
TouchSensor105.description = "HAnimSite 42 l_trochanterion";
HAnimSite104.children = new MFNode();

HAnimSite104.children[0] = TouchSensor105;

let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "HAnimSiteShape";
HAnimSite104.children[1] = Shape106;

let Billboard107 = browser.currentScene.createNode("Billboard");
let Shape108 = browser.currentScene.createNode("Shape");
let Text109 = browser.currentScene.createNode("Text");
Text109.string = new MFString(new java.lang.String["42"]);
let FontStyle110 = browser.currentScene.createNode("FontStyle");
FontStyle110.size = 0.035;
Text109.fontStyle = FontStyle110;

Shape108.geometry = Text109;

Billboard107.children = new MFNode();

Billboard107.children[0] = Shape108;

HAnimSite104.children[2] = Billboard107;

HAnimSegment61.children[7] = HAnimSite104;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.name = "r_asis";
HAnimSite111.DEF = "hanim_r_asis";
HAnimSite111.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
let TouchSensor112 = browser.currentScene.createNode("TouchSensor");
TouchSensor112.description = "HAnimSite 35 r_asis";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = TouchSensor112;

let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "HAnimSiteShape";
HAnimSite111.children[1] = Shape113;

let Billboard114 = browser.currentScene.createNode("Billboard");
let Shape115 = browser.currentScene.createNode("Shape");
let Text116 = browser.currentScene.createNode("Text");
Text116.string = new MFString(new java.lang.String["35"]);
let FontStyle117 = browser.currentScene.createNode("FontStyle");
FontStyle117.size = 0.035;
Text116.fontStyle = FontStyle117;

Shape115.geometry = Text116;

Billboard114.children = new MFNode();

Billboard114.children[0] = Shape115;

HAnimSite111.children[2] = Billboard114;

HAnimSegment61.children[8] = HAnimSite111;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.name = "r_iliocristale";
HAnimSite118.DEF = "hanim_r_iliocristale";
HAnimSite118.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
let TouchSensor119 = browser.currentScene.createNode("TouchSensor");
TouchSensor119.description = "HAnimSite 36 r_iliocristale";
HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = TouchSensor119;

let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "HAnimSiteShape";
HAnimSite118.children[1] = Shape120;

let Billboard121 = browser.currentScene.createNode("Billboard");
let Shape122 = browser.currentScene.createNode("Shape");
let Text123 = browser.currentScene.createNode("Text");
Text123.string = new MFString(new java.lang.String["36"]);
let FontStyle124 = browser.currentScene.createNode("FontStyle");
FontStyle124.size = 0.035;
Text123.fontStyle = FontStyle124;

Shape122.geometry = Text123;

Billboard121.children = new MFNode();

Billboard121.children[0] = Shape122;

HAnimSite118.children[2] = Billboard121;

HAnimSegment61.children[9] = HAnimSite118;

let HAnimSite125 = browser.currentScene.createNode("HAnimSite");
HAnimSite125.name = "r_psis";
HAnimSite125.DEF = "hanim_r_psis";
HAnimSite125.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
let TouchSensor126 = browser.currentScene.createNode("TouchSensor");
TouchSensor126.description = "HAnimSite 37 r_psis";
HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = TouchSensor126;

let Shape127 = browser.currentScene.createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125.children[1] = Shape127;

let Billboard128 = browser.currentScene.createNode("Billboard");
let Shape129 = browser.currentScene.createNode("Shape");
let Text130 = browser.currentScene.createNode("Text");
Text130.string = new MFString(new java.lang.String["37"]);
let FontStyle131 = browser.currentScene.createNode("FontStyle");
FontStyle131.size = 0.035;
Text130.fontStyle = FontStyle131;

Shape129.geometry = Text130;

Billboard128.children = new MFNode();

Billboard128.children[0] = Shape129;

HAnimSite125.children[2] = Billboard128;

HAnimSegment61.children[10] = HAnimSite125;

let HAnimSite132 = browser.currentScene.createNode("HAnimSite");
HAnimSite132.name = "r_trochanterion";
HAnimSite132.DEF = "hanim_r_trochanterion";
HAnimSite132.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
let TouchSensor133 = browser.currentScene.createNode("TouchSensor");
TouchSensor133.description = "HAnimSite 46 r_trochanterion";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

let Billboard135 = browser.currentScene.createNode("Billboard");
let Shape136 = browser.currentScene.createNode("Shape");
let Text137 = browser.currentScene.createNode("Text");
Text137.string = new MFString(new java.lang.String["46"]);
let FontStyle138 = browser.currentScene.createNode("FontStyle");
FontStyle138.size = 0.035;
Text137.fontStyle = FontStyle138;

Shape136.geometry = Text137;

Billboard135.children = new MFNode();

Billboard135.children[0] = Shape136;

HAnimSite132.children[2] = Billboard135;

HAnimSegment61.children[11] = HAnimSite132;

let Shape139 = browser.currentScene.createNode("Shape");
let LineSet140 = browser.currentScene.createNode("LineSet");
LineSet140.vertexCount = new MFInt32(new int[2]);
let Coordinate141 = browser.currentScene.createNode("Coordinate");
Coordinate141.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet140.coord = Coordinate141;

//from sacroiliac to r_hip vertices 2
let ColorRGBA142 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA142.USE = "HAnimSegmentLineColorRGBA";
LineSet140.color = ColorRGBA142;

Shape139.geometry = LineSet140;

HAnimSegment61.children[12] = Shape139;

HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimSegment61;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.name = "l_hip";
HAnimJoint143.DEF = "hanim_l_hip";
HAnimJoint143.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.name = "l_thigh";
HAnimSegment144.DEF = "hanim_l_thigh";
let Transform145 = browser.currentScene.createNode("Transform");
Transform145.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Transform146 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape147 = browser.currentScene.createNode("Shape");
Shape147.USE = "HAnimJointShape";
Transform146.child = new undefined();

Transform146.child[0] = Shape147;

Transform145.children = new MFNode();

Transform145.children[0] = Transform146;

HAnimSegment144.children = new MFNode();

HAnimSegment144.children[0] = Transform145;

let Shape148 = browser.currentScene.createNode("Shape");
let LineSet149 = browser.currentScene.createNode("LineSet");
LineSet149.vertexCount = new MFInt32(new int[2]);
let Coordinate150 = browser.currentScene.createNode("Coordinate");
Coordinate150.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet149.coord = Coordinate150;

//from l_hip to l_knee vertices 2
let ColorRGBA151 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA151.USE = "HAnimSegmentLineColorRGBA";
LineSet149.color = ColorRGBA151;

Shape148.geometry = LineSet149;

HAnimSegment144.children[1] = Shape148;

let HAnimSite152 = browser.currentScene.createNode("HAnimSite");
HAnimSite152.name = "l_femoral_lateral_epicondyles";
HAnimSite152.DEF = "hanim_l_femoral_lateral_epicondyles";
HAnimSite152.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
let TouchSensor153 = browser.currentScene.createNode("TouchSensor");
TouchSensor153.description = "HAnimSite 40 l_femoral_lateral_epicondyles";
HAnimSite152.children = new MFNode();

HAnimSite152.children[0] = TouchSensor153;

let Shape154 = browser.currentScene.createNode("Shape");
Shape154.USE = "HAnimSiteShape";
HAnimSite152.children[1] = Shape154;

let Billboard155 = browser.currentScene.createNode("Billboard");
let Shape156 = browser.currentScene.createNode("Shape");
let Text157 = browser.currentScene.createNode("Text");
Text157.string = new MFString(new java.lang.String["40"]);
let FontStyle158 = browser.currentScene.createNode("FontStyle");
FontStyle158.size = 0.035;
Text157.fontStyle = FontStyle158;

Shape156.geometry = Text157;

Billboard155.children = new MFNode();

Billboard155.children[0] = Shape156;

HAnimSite152.children[2] = Billboard155;

HAnimSegment144.children[2] = HAnimSite152;

let HAnimSite159 = browser.currentScene.createNode("HAnimSite");
HAnimSite159.name = "l_femoral_medial_epicondyles";
HAnimSite159.DEF = "hanim_l_femoral_medial_epicondyles";
HAnimSite159.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
let TouchSensor160 = browser.currentScene.createNode("TouchSensor");
TouchSensor160.description = "HAnimSite 39 l_femoral_medial_epicondyles";
HAnimSite159.children = new MFNode();

HAnimSite159.children[0] = TouchSensor160;

let Shape161 = browser.currentScene.createNode("Shape");
Shape161.USE = "HAnimSiteShape";
HAnimSite159.children[1] = Shape161;

let Billboard162 = browser.currentScene.createNode("Billboard");
let Shape163 = browser.currentScene.createNode("Shape");
let Text164 = browser.currentScene.createNode("Text");
Text164.string = new MFString(new java.lang.String["39"]);
let FontStyle165 = browser.currentScene.createNode("FontStyle");
FontStyle165.size = 0.035;
Text164.fontStyle = FontStyle165;

Shape163.geometry = Text164;

Billboard162.children = new MFNode();

Billboard162.children[0] = Shape163;

HAnimSite159.children[2] = Billboard162;

HAnimSegment144.children[3] = HAnimSite159;

let HAnimSite166 = browser.currentScene.createNode("HAnimSite");
HAnimSite166.name = "l_knee_crease";
HAnimSite166.DEF = "hanim_l_knee_crease";
HAnimSite166.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
let TouchSensor167 = browser.currentScene.createNode("TouchSensor");
TouchSensor167.description = "HAnimSite 90 l_knee_crease";
HAnimSite166.children = new MFNode();

HAnimSite166.children[0] = TouchSensor167;

let Shape168 = browser.currentScene.createNode("Shape");
Shape168.USE = "HAnimSiteShape";
HAnimSite166.children[1] = Shape168;

let Billboard169 = browser.currentScene.createNode("Billboard");
let Shape170 = browser.currentScene.createNode("Shape");
let Text171 = browser.currentScene.createNode("Text");
Text171.string = new MFString(new java.lang.String["90"]);
let FontStyle172 = browser.currentScene.createNode("FontStyle");
FontStyle172.size = 0.035;
Text171.fontStyle = FontStyle172;

Shape170.geometry = Text171;

Billboard169.children = new MFNode();

Billboard169.children[0] = Shape170;

HAnimSite166.children[2] = Billboard169;

HAnimSegment144.children[4] = HAnimSite166;

let HAnimSite173 = browser.currentScene.createNode("HAnimSite");
HAnimSite173.name = "l_suprapatella";
HAnimSite173.DEF = "hanim_l_suprapatella";
let TouchSensor174 = browser.currentScene.createNode("TouchSensor");
TouchSensor174.description = "HAnimSite 41 l_suprapatella";
HAnimSite173.children = new MFNode();

HAnimSite173.children[0] = TouchSensor174;

let Shape175 = browser.currentScene.createNode("Shape");
Shape175.USE = "HAnimSiteShape";
HAnimSite173.children[1] = Shape175;

let Billboard176 = browser.currentScene.createNode("Billboard");
let Shape177 = browser.currentScene.createNode("Shape");
let Text178 = browser.currentScene.createNode("Text");
Text178.string = new MFString(new java.lang.String["41"]);
let FontStyle179 = browser.currentScene.createNode("FontStyle");
FontStyle179.size = 0.035;
Text178.fontStyle = FontStyle179;

Shape177.geometry = Text178;

Billboard176.children = new MFNode();

Billboard176.children[0] = Shape177;

HAnimSite173.children[2] = Billboard176;

HAnimSegment144.children[5] = HAnimSite173;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.name = "l_knee";
HAnimJoint180.DEF = "hanim_l_knee";
HAnimJoint180.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
let HAnimSegment181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment181.name = "l_calf";
HAnimSegment181.DEF = "hanim_l_calf";
let Transform182 = browser.currentScene.createNode("Transform");
Transform182.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Transform183 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "HAnimJointShape";
Transform183.child = new undefined();

Transform183.child[0] = Shape184;

Transform182.children = new MFNode();

Transform182.children[0] = Transform183;

HAnimSegment181.children = new MFNode();

HAnimSegment181.children[0] = Transform182;

let Shape185 = browser.currentScene.createNode("Shape");
let LineSet186 = browser.currentScene.createNode("LineSet");
LineSet186.vertexCount = new MFInt32(new int[2]);
let Coordinate187 = browser.currentScene.createNode("Coordinate");
Coordinate187.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet186.coord = Coordinate187;

//from l_knee to l_talocrural vertices 2
let ColorRGBA188 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA";
LineSet186.color = ColorRGBA188;

Shape185.geometry = LineSet186;

HAnimSegment181.children[1] = Shape185;

let HAnimSite189 = browser.currentScene.createNode("HAnimSite");
HAnimSite189.name = "l_lateral_malleolus";
HAnimSite189.DEF = "hanim_l_lateral_malleolus";
HAnimSite189.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
let TouchSensor190 = browser.currentScene.createNode("TouchSensor");
TouchSensor190.description = "HAnimSite 49 l_lateral_malleolus";
HAnimSite189.children = new MFNode();

HAnimSite189.children[0] = TouchSensor190;

let Shape191 = browser.currentScene.createNode("Shape");
Shape191.USE = "HAnimSiteShape";
HAnimSite189.children[1] = Shape191;

let Billboard192 = browser.currentScene.createNode("Billboard");
let Shape193 = browser.currentScene.createNode("Shape");
let Text194 = browser.currentScene.createNode("Text");
Text194.string = new MFString(new java.lang.String["49"]);
let FontStyle195 = browser.currentScene.createNode("FontStyle");
FontStyle195.size = 0.035;
Text194.fontStyle = FontStyle195;

Shape193.geometry = Text194;

Billboard192.children = new MFNode();

Billboard192.children[0] = Shape193;

HAnimSite189.children[2] = Billboard192;

HAnimSegment181.children[2] = HAnimSite189;

let HAnimSite196 = browser.currentScene.createNode("HAnimSite");
HAnimSite196.name = "l_medial_malleolus";
HAnimSite196.DEF = "hanim_l_medial_malleolus";
HAnimSite196.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
let TouchSensor197 = browser.currentScene.createNode("TouchSensor");
TouchSensor197.description = "HAnimSite 48 l_medial_malleolus";
HAnimSite196.children = new MFNode();

HAnimSite196.children[0] = TouchSensor197;

let Shape198 = browser.currentScene.createNode("Shape");
Shape198.USE = "HAnimSiteShape";
HAnimSite196.children[1] = Shape198;

let Billboard199 = browser.currentScene.createNode("Billboard");
let Shape200 = browser.currentScene.createNode("Shape");
let Text201 = browser.currentScene.createNode("Text");
Text201.string = new MFString(new java.lang.String["48"]);
let FontStyle202 = browser.currentScene.createNode("FontStyle");
FontStyle202.size = 0.035;
Text201.fontStyle = FontStyle202;

Shape200.geometry = Text201;

Billboard199.children = new MFNode();

Billboard199.children[0] = Shape200;

HAnimSite196.children[2] = Billboard199;

HAnimSegment181.children[3] = HAnimSite196;

let HAnimSite203 = browser.currentScene.createNode("HAnimSite");
HAnimSite203.name = "l_tibiale";
HAnimSite203.DEF = "hanim_l_tibiale";
let TouchSensor204 = browser.currentScene.createNode("TouchSensor");
TouchSensor204.description = "HAnimSite 47 l_tibiale";
HAnimSite203.children = new MFNode();

HAnimSite203.children[0] = TouchSensor204;

let Shape205 = browser.currentScene.createNode("Shape");
Shape205.USE = "HAnimSiteShape";
HAnimSite203.children[1] = Shape205;

let Billboard206 = browser.currentScene.createNode("Billboard");
let Shape207 = browser.currentScene.createNode("Shape");
let Text208 = browser.currentScene.createNode("Text");
Text208.string = new MFString(new java.lang.String["47"]);
let FontStyle209 = browser.currentScene.createNode("FontStyle");
FontStyle209.size = 0.035;
Text208.fontStyle = FontStyle209;

Shape207.geometry = Text208;

Billboard206.children = new MFNode();

Billboard206.children[0] = Shape207;

HAnimSite203.children[2] = Billboard206;

HAnimSegment181.children[4] = HAnimSite203;

HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.name = "l_talocrural";
HAnimJoint210.DEF = "hanim_l_talocrural";
HAnimJoint210.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let HAnimSegment211 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment211.name = "l_talus";
HAnimSegment211.DEF = "hanim_l_talus";
let Transform212 = browser.currentScene.createNode("Transform");
Transform212.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform212.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform212.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
let Transform213 = browser.currentScene.createNode("Transform");
//Empty Transform left foot
let Shape214 = browser.currentScene.createNode("Shape");
Shape214.USE = "HAnimJointShape";
Transform213.child = new undefined();

Transform213.child[0] = Shape214;

Transform212.children = new MFNode();

Transform212.children[0] = Transform213;

HAnimSegment211.children = new MFNode();

HAnimSegment211.children[0] = Transform212;

let Shape215 = browser.currentScene.createNode("Shape");
let LineSet216 = browser.currentScene.createNode("LineSet");
LineSet216.vertexCount = new MFInt32(new int[2]);
let Coordinate217 = browser.currentScene.createNode("Coordinate");
Coordinate217.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004]);
LineSet216.coord = Coordinate217;

//from l_talocrural to l_metatarsophalangeal_2 vertices 2
let ColorRGBA218 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA218.USE = "HAnimSegmentLineColorRGBA";
LineSet216.color = ColorRGBA218;

Shape215.geometry = LineSet216;

HAnimSegment211.children[1] = Shape215;

let HAnimSite219 = browser.currentScene.createNode("HAnimSite");
HAnimSite219.name = "l_calcaneus_posterior";
HAnimSite219.DEF = "hanim_l_calcaneus_posterior";
HAnimSite219.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
let TouchSensor220 = browser.currentScene.createNode("TouchSensor");
TouchSensor220.description = "HAnimSite 58 l_calcaneus_posterior";
HAnimSite219.children = new MFNode();

HAnimSite219.children[0] = TouchSensor220;

let Shape221 = browser.currentScene.createNode("Shape");
Shape221.USE = "HAnimSiteShape";
HAnimSite219.children[1] = Shape221;

let Billboard222 = browser.currentScene.createNode("Billboard");
let Shape223 = browser.currentScene.createNode("Shape");
let Text224 = browser.currentScene.createNode("Text");
Text224.string = new MFString(new java.lang.String["58"]);
let FontStyle225 = browser.currentScene.createNode("FontStyle");
FontStyle225.size = 0.035;
Text224.fontStyle = FontStyle225;

Shape223.geometry = Text224;

Billboard222.children = new MFNode();

Billboard222.children[0] = Shape223;

HAnimSite219.children[2] = Billboard222;

HAnimSegment211.children[2] = HAnimSite219;

let HAnimSite226 = browser.currentScene.createNode("HAnimSite");
HAnimSite226.name = "l_sphyrion";
HAnimSite226.DEF = "hanim_l_sphyrion";
HAnimSite226.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
let TouchSensor227 = browser.currentScene.createNode("TouchSensor");
TouchSensor227.description = "HAnimSite 50 l_sphyrion";
HAnimSite226.children = new MFNode();

HAnimSite226.children[0] = TouchSensor227;

let Shape228 = browser.currentScene.createNode("Shape");
Shape228.USE = "HAnimSiteShape";
HAnimSite226.children[1] = Shape228;

let Billboard229 = browser.currentScene.createNode("Billboard");
let Shape230 = browser.currentScene.createNode("Shape");
let Text231 = browser.currentScene.createNode("Text");
Text231.string = new MFString(new java.lang.String["50"]);
let FontStyle232 = browser.currentScene.createNode("FontStyle");
FontStyle232.size = 0.035;
Text231.fontStyle = FontStyle232;

Shape230.geometry = Text231;

Billboard229.children = new MFNode();

Billboard229.children[0] = Shape230;

HAnimSite226.children[2] = Billboard229;

HAnimSegment211.children[3] = HAnimSite226;

HAnimJoint210.children = new MFNode();

HAnimJoint210.children[0] = HAnimSegment211;

let HAnimJoint233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint233.name = "l_metatarsophalangeal_2";
HAnimJoint233.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint233.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint210.children[1] = HAnimJoint233;

HAnimJoint180.children[1] = HAnimJoint210;

HAnimJoint143.children[1] = HAnimJoint180;

HAnimJoint60.children[1] = HAnimJoint143;

let HAnimJoint234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint234.name = "r_hip";
HAnimJoint234.DEF = "hanim_r_hip";
HAnimJoint234.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let HAnimSegment235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment235.name = "r_thigh";
HAnimSegment235.DEF = "hanim_r_thigh";
let Transform236 = browser.currentScene.createNode("Transform");
Transform236.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Transform237 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape238 = browser.currentScene.createNode("Shape");
Shape238.USE = "HAnimJointShape";
Transform237.child = new undefined();

Transform237.child[0] = Shape238;

Transform236.children = new MFNode();

Transform236.children[0] = Transform237;

HAnimSegment235.children = new MFNode();

HAnimSegment235.children[0] = Transform236;

let Shape239 = browser.currentScene.createNode("Shape");
let LineSet240 = browser.currentScene.createNode("LineSet");
LineSet240.vertexCount = new MFInt32(new int[2]);
let Coordinate241 = browser.currentScene.createNode("Coordinate");
Coordinate241.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet240.coord = Coordinate241;

//from r_hip to r_knee vertices 2
let ColorRGBA242 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA242.USE = "HAnimSegmentLineColorRGBA";
LineSet240.color = ColorRGBA242;

Shape239.geometry = LineSet240;

HAnimSegment235.children[1] = Shape239;

let HAnimSite243 = browser.currentScene.createNode("HAnimSite");
HAnimSite243.name = "r_femoral_lateral_epicondyles";
HAnimSite243.DEF = "hanim_r_femoral_lateral_epicondyles";
HAnimSite243.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
let TouchSensor244 = browser.currentScene.createNode("TouchSensor");
TouchSensor244.description = "HAnimSite 44 r_femoral_lateral_epicondyles";
HAnimSite243.children = new MFNode();

HAnimSite243.children[0] = TouchSensor244;

let Shape245 = browser.currentScene.createNode("Shape");
Shape245.USE = "HAnimSiteShape";
HAnimSite243.children[1] = Shape245;

let Billboard246 = browser.currentScene.createNode("Billboard");
let Shape247 = browser.currentScene.createNode("Shape");
let Text248 = browser.currentScene.createNode("Text");
Text248.string = new MFString(new java.lang.String["44"]);
let FontStyle249 = browser.currentScene.createNode("FontStyle");
FontStyle249.size = 0.035;
Text248.fontStyle = FontStyle249;

Shape247.geometry = Text248;

Billboard246.children = new MFNode();

Billboard246.children[0] = Shape247;

HAnimSite243.children[2] = Billboard246;

HAnimSegment235.children[2] = HAnimSite243;

let HAnimSite250 = browser.currentScene.createNode("HAnimSite");
HAnimSite250.name = "r_femoral_medial_epicondyles";
HAnimSite250.DEF = "hanim_r_femoral_medial_epicondyles";
HAnimSite250.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
let TouchSensor251 = browser.currentScene.createNode("TouchSensor");
TouchSensor251.description = "HAnimSite 43 r_femoral_medial_epicondyles";
HAnimSite250.children = new MFNode();

HAnimSite250.children[0] = TouchSensor251;

let Shape252 = browser.currentScene.createNode("Shape");
Shape252.USE = "HAnimSiteShape";
HAnimSite250.children[1] = Shape252;

let Billboard253 = browser.currentScene.createNode("Billboard");
let Shape254 = browser.currentScene.createNode("Shape");
let Text255 = browser.currentScene.createNode("Text");
Text255.string = new MFString(new java.lang.String["43"]);
let FontStyle256 = browser.currentScene.createNode("FontStyle");
FontStyle256.size = 0.035;
Text255.fontStyle = FontStyle256;

Shape254.geometry = Text255;

Billboard253.children = new MFNode();

Billboard253.children[0] = Shape254;

HAnimSite250.children[2] = Billboard253;

HAnimSegment235.children[3] = HAnimSite250;

let HAnimSite257 = browser.currentScene.createNode("HAnimSite");
HAnimSite257.name = "r_knee_crease";
HAnimSite257.DEF = "hanim_r_knee_crease";
HAnimSite257.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
let TouchSensor258 = browser.currentScene.createNode("TouchSensor");
TouchSensor258.description = "HAnimSite 91 r_knee_crease";
HAnimSite257.children = new MFNode();

HAnimSite257.children[0] = TouchSensor258;

let Shape259 = browser.currentScene.createNode("Shape");
Shape259.USE = "HAnimSiteShape";
HAnimSite257.children[1] = Shape259;

let Billboard260 = browser.currentScene.createNode("Billboard");
let Shape261 = browser.currentScene.createNode("Shape");
let Text262 = browser.currentScene.createNode("Text");
Text262.string = new MFString(new java.lang.String["91"]);
let FontStyle263 = browser.currentScene.createNode("FontStyle");
FontStyle263.size = 0.035;
Text262.fontStyle = FontStyle263;

Shape261.geometry = Text262;

Billboard260.children = new MFNode();

Billboard260.children[0] = Shape261;

HAnimSite257.children[2] = Billboard260;

HAnimSegment235.children[4] = HAnimSite257;

let HAnimSite264 = browser.currentScene.createNode("HAnimSite");
HAnimSite264.name = "r_suprapatella";
HAnimSite264.DEF = "hanim_r_suprapatella";
let TouchSensor265 = browser.currentScene.createNode("TouchSensor");
TouchSensor265.description = "HAnimSite 45 r_suprapatella";
HAnimSite264.children = new MFNode();

HAnimSite264.children[0] = TouchSensor265;

let Shape266 = browser.currentScene.createNode("Shape");
Shape266.USE = "HAnimSiteShape";
HAnimSite264.children[1] = Shape266;

let Billboard267 = browser.currentScene.createNode("Billboard");
let Shape268 = browser.currentScene.createNode("Shape");
let Text269 = browser.currentScene.createNode("Text");
Text269.string = new MFString(new java.lang.String["45"]);
let FontStyle270 = browser.currentScene.createNode("FontStyle");
FontStyle270.size = 0.035;
Text269.fontStyle = FontStyle270;

Shape268.geometry = Text269;

Billboard267.children = new MFNode();

Billboard267.children[0] = Shape268;

HAnimSite264.children[2] = Billboard267;

HAnimSegment235.children[5] = HAnimSite264;

HAnimJoint234.children = new MFNode();

HAnimJoint234.children[0] = HAnimSegment235;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.name = "r_knee";
HAnimJoint271.DEF = "hanim_r_knee";
HAnimJoint271.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let HAnimSegment272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment272.name = "r_calf";
HAnimSegment272.DEF = "hanim_r_calf";
let Transform273 = browser.currentScene.createNode("Transform");
Transform273.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Transform274 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape275 = browser.currentScene.createNode("Shape");
Shape275.USE = "HAnimJointShape";
Transform274.child = new undefined();

Transform274.child[0] = Shape275;

Transform273.children = new MFNode();

Transform273.children[0] = Transform274;

HAnimSegment272.children = new MFNode();

HAnimSegment272.children[0] = Transform273;

let Shape276 = browser.currentScene.createNode("Shape");
let LineSet277 = browser.currentScene.createNode("LineSet");
LineSet277.vertexCount = new MFInt32(new int[2]);
let Coordinate278 = browser.currentScene.createNode("Coordinate");
Coordinate278.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet277.coord = Coordinate278;

//from r_knee to r_talocrural vertices 2
let ColorRGBA279 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA279.USE = "HAnimSegmentLineColorRGBA";
LineSet277.color = ColorRGBA279;

Shape276.geometry = LineSet277;

HAnimSegment272.children[1] = Shape276;

let HAnimSite280 = browser.currentScene.createNode("HAnimSite");
HAnimSite280.name = "r_lateral_malleolus";
HAnimSite280.DEF = "hanim_r_lateral_malleolus";
HAnimSite280.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let TouchSensor281 = browser.currentScene.createNode("TouchSensor");
TouchSensor281.description = "HAnimSite 53 r_lateral_malleolus";
HAnimSite280.children = new MFNode();

HAnimSite280.children[0] = TouchSensor281;

let Shape282 = browser.currentScene.createNode("Shape");
Shape282.USE = "HAnimSiteShape";
HAnimSite280.children[1] = Shape282;

let Billboard283 = browser.currentScene.createNode("Billboard");
let Shape284 = browser.currentScene.createNode("Shape");
let Text285 = browser.currentScene.createNode("Text");
Text285.string = new MFString(new java.lang.String["53"]);
let FontStyle286 = browser.currentScene.createNode("FontStyle");
FontStyle286.size = 0.035;
Text285.fontStyle = FontStyle286;

Shape284.geometry = Text285;

Billboard283.children = new MFNode();

Billboard283.children[0] = Shape284;

HAnimSite280.children[2] = Billboard283;

HAnimSegment272.children[2] = HAnimSite280;

let HAnimSite287 = browser.currentScene.createNode("HAnimSite");
HAnimSite287.name = "r_medial_malleolus";
HAnimSite287.DEF = "hanim_r_medial_malleolus";
HAnimSite287.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let TouchSensor288 = browser.currentScene.createNode("TouchSensor");
TouchSensor288.description = "HAnimSite 52 r_medial_malleolus";
HAnimSite287.children = new MFNode();

HAnimSite287.children[0] = TouchSensor288;

let Shape289 = browser.currentScene.createNode("Shape");
Shape289.USE = "HAnimSiteShape";
HAnimSite287.children[1] = Shape289;

let Billboard290 = browser.currentScene.createNode("Billboard");
let Shape291 = browser.currentScene.createNode("Shape");
let Text292 = browser.currentScene.createNode("Text");
Text292.string = new MFString(new java.lang.String["52"]);
let FontStyle293 = browser.currentScene.createNode("FontStyle");
FontStyle293.size = 0.035;
Text292.fontStyle = FontStyle293;

Shape291.geometry = Text292;

Billboard290.children = new MFNode();

Billboard290.children[0] = Shape291;

HAnimSite287.children[2] = Billboard290;

HAnimSegment272.children[3] = HAnimSite287;

let HAnimSite294 = browser.currentScene.createNode("HAnimSite");
HAnimSite294.name = "r_tibiale";
HAnimSite294.DEF = "hanim_r_tibiale";
let TouchSensor295 = browser.currentScene.createNode("TouchSensor");
TouchSensor295.description = "HAnimSite 51 r_tibiale";
HAnimSite294.children = new MFNode();

HAnimSite294.children[0] = TouchSensor295;

let Shape296 = browser.currentScene.createNode("Shape");
Shape296.USE = "HAnimSiteShape";
HAnimSite294.children[1] = Shape296;

let Billboard297 = browser.currentScene.createNode("Billboard");
let Shape298 = browser.currentScene.createNode("Shape");
let Text299 = browser.currentScene.createNode("Text");
Text299.string = new MFString(new java.lang.String["51"]);
let FontStyle300 = browser.currentScene.createNode("FontStyle");
FontStyle300.size = 0.035;
Text299.fontStyle = FontStyle300;

Shape298.geometry = Text299;

Billboard297.children = new MFNode();

Billboard297.children[0] = Shape298;

HAnimSite294.children[2] = Billboard297;

HAnimSegment272.children[4] = HAnimSite294;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimSegment272;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.name = "r_talocrural";
HAnimJoint301.DEF = "hanim_r_talocrural";
HAnimJoint301.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.name = "r_talus";
HAnimSegment302.DEF = "hanim_r_talus";
let Transform303 = browser.currentScene.createNode("Transform");
Transform303.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform303.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform303.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
let Transform304 = browser.currentScene.createNode("Transform");
//Empty Transform right foot
let Shape305 = browser.currentScene.createNode("Shape");
Shape305.USE = "HAnimJointShape";
Transform304.child = new undefined();

Transform304.child[0] = Shape305;

Transform303.children = new MFNode();

Transform303.children[0] = Transform304;

HAnimSegment302.children = new MFNode();

HAnimSegment302.children[0] = Transform303;

let Shape306 = browser.currentScene.createNode("Shape");
let LineSet307 = browser.currentScene.createNode("LineSet");
LineSet307.vertexCount = new MFInt32(new int[2]);
let Coordinate308 = browser.currentScene.createNode("Coordinate");
Coordinate308.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004]);
LineSet307.coord = Coordinate308;

//from r_talocrural to r_metatarsophalangeal_2 vertices 2
let ColorRGBA309 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA309.USE = "HAnimSegmentLineColorRGBA";
LineSet307.color = ColorRGBA309;

Shape306.geometry = LineSet307;

HAnimSegment302.children[1] = Shape306;

let HAnimSite310 = browser.currentScene.createNode("HAnimSite");
HAnimSite310.name = "r_calcaneus_posterior";
HAnimSite310.DEF = "hanim_r_calcaneus_posterior";
HAnimSite310.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let TouchSensor311 = browser.currentScene.createNode("TouchSensor");
TouchSensor311.description = "HAnimSite 62 r_calcaneus_posterior";
HAnimSite310.children = new MFNode();

HAnimSite310.children[0] = TouchSensor311;

let Shape312 = browser.currentScene.createNode("Shape");
Shape312.USE = "HAnimSiteShape";
HAnimSite310.children[1] = Shape312;

let Billboard313 = browser.currentScene.createNode("Billboard");
let Shape314 = browser.currentScene.createNode("Shape");
let Text315 = browser.currentScene.createNode("Text");
Text315.string = new MFString(new java.lang.String["62"]);
let FontStyle316 = browser.currentScene.createNode("FontStyle");
FontStyle316.size = 0.035;
Text315.fontStyle = FontStyle316;

Shape314.geometry = Text315;

Billboard313.children = new MFNode();

Billboard313.children[0] = Shape314;

HAnimSite310.children[2] = Billboard313;

HAnimSegment302.children[2] = HAnimSite310;

let HAnimSite317 = browser.currentScene.createNode("HAnimSite");
HAnimSite317.name = "r_sphyrion";
HAnimSite317.DEF = "hanim_r_sphyrion";
HAnimSite317.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let TouchSensor318 = browser.currentScene.createNode("TouchSensor");
TouchSensor318.description = "HAnimSite 54 r_sphyrion";
HAnimSite317.children = new MFNode();

HAnimSite317.children[0] = TouchSensor318;

let Shape319 = browser.currentScene.createNode("Shape");
Shape319.USE = "HAnimSiteShape";
HAnimSite317.children[1] = Shape319;

let Billboard320 = browser.currentScene.createNode("Billboard");
let Shape321 = browser.currentScene.createNode("Shape");
let Text322 = browser.currentScene.createNode("Text");
Text322.string = new MFString(new java.lang.String["54"]);
let FontStyle323 = browser.currentScene.createNode("FontStyle");
FontStyle323.size = 0.035;
Text322.fontStyle = FontStyle323;

Shape321.geometry = Text322;

Billboard320.children = new MFNode();

Billboard320.children[0] = Shape321;

HAnimSite317.children[2] = Billboard320;

HAnimSegment302.children[3] = HAnimSite317;

HAnimJoint301.children = new MFNode();

HAnimJoint301.children[0] = HAnimSegment302;

let HAnimJoint324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint324.name = "r_metatarsophalangeal_2";
HAnimJoint324.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint324.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint301.children[1] = HAnimJoint324;

HAnimJoint271.children[1] = HAnimJoint301;

HAnimJoint234.children[1] = HAnimJoint271;

HAnimJoint60.children[2] = HAnimJoint234;

HAnimJoint47.children[1] = HAnimJoint60;

let HAnimJoint325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint325.name = "vl5";
HAnimJoint325.DEF = "hanim_vl5";
HAnimJoint325.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let HAnimSegment326 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment326.name = "l5";
HAnimSegment326.DEF = "hanim_l5";
let Transform327 = browser.currentScene.createNode("Transform");
Transform327.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Transform328 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape329 = browser.currentScene.createNode("Shape");
Shape329.USE = "HAnimJointShape";
Transform328.child = new undefined();

Transform328.child[0] = Shape329;

Transform327.children = new MFNode();

Transform327.children[0] = Transform328;

HAnimSegment326.children = new MFNode();

HAnimSegment326.children[0] = Transform327;

let Shape330 = browser.currentScene.createNode("Shape");
let LineSet331 = browser.currentScene.createNode("LineSet");
LineSet331.vertexCount = new MFInt32(new int[2]);
let Coordinate332 = browser.currentScene.createNode("Coordinate");
Coordinate332.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236]);
LineSet331.coord = Coordinate332;

//from vl5 to skullbase vertices 2
let ColorRGBA333 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA333.USE = "HAnimSegmentLineColorRGBA";
LineSet331.color = ColorRGBA333;

Shape330.geometry = LineSet331;

HAnimSegment326.children[1] = Shape330;

let HAnimSite334 = browser.currentScene.createNode("HAnimSite");
HAnimSite334.name = "adams_apple";
HAnimSite334.DEF = "hanim_adams_apple";
let TouchSensor335 = browser.currentScene.createNode("TouchSensor");
TouchSensor335.description = "HAnimSite 11 adams_apple";
HAnimSite334.children = new MFNode();

HAnimSite334.children[0] = TouchSensor335;

let Shape336 = browser.currentScene.createNode("Shape");
Shape336.USE = "HAnimSiteShape";
HAnimSite334.children[1] = Shape336;

let Billboard337 = browser.currentScene.createNode("Billboard");
let Shape338 = browser.currentScene.createNode("Shape");
let Text339 = browser.currentScene.createNode("Text");
Text339.string = new MFString(new java.lang.String["11"]);
let FontStyle340 = browser.currentScene.createNode("FontStyle");
FontStyle340.size = 0.035;
Text339.fontStyle = FontStyle340;

Shape338.geometry = Text339;

Billboard337.children = new MFNode();

Billboard337.children[0] = Shape338;

HAnimSite334.children[2] = Billboard337;

HAnimSegment326.children[2] = HAnimSite334;

let HAnimSite341 = browser.currentScene.createNode("HAnimSite");
HAnimSite341.name = "cervicale";
HAnimSite341.DEF = "hanim_cervicale";
HAnimSite341.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor342 = browser.currentScene.createNode("TouchSensor");
TouchSensor342.description = "HAnimSite 10 cervicale";
HAnimSite341.children = new MFNode();

HAnimSite341.children[0] = TouchSensor342;

let Shape343 = browser.currentScene.createNode("Shape");
Shape343.USE = "HAnimSiteShape";
HAnimSite341.children[1] = Shape343;

let Billboard344 = browser.currentScene.createNode("Billboard");
let Shape345 = browser.currentScene.createNode("Shape");
let Text346 = browser.currentScene.createNode("Text");
Text346.string = new MFString(new java.lang.String["10"]);
let FontStyle347 = browser.currentScene.createNode("FontStyle");
FontStyle347.size = 0.035;
Text346.fontStyle = FontStyle347;

Shape345.geometry = Text346;

Billboard344.children = new MFNode();

Billboard344.children[0] = Shape345;

HAnimSite341.children[2] = Billboard344;

HAnimSegment326.children[3] = HAnimSite341;

let HAnimSite348 = browser.currentScene.createNode("HAnimSite");
HAnimSite348.name = "l_acromion";
HAnimSite348.DEF = "hanim_l_acromion";
HAnimSite348.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor349 = browser.currentScene.createNode("TouchSensor");
TouchSensor349.description = "HAnimSite 15 l_acromion";
HAnimSite348.children = new MFNode();

HAnimSite348.children[0] = TouchSensor349;

let Shape350 = browser.currentScene.createNode("Shape");
Shape350.USE = "HAnimSiteShape";
HAnimSite348.children[1] = Shape350;

let Billboard351 = browser.currentScene.createNode("Billboard");
let Shape352 = browser.currentScene.createNode("Shape");
let Text353 = browser.currentScene.createNode("Text");
Text353.string = new MFString(new java.lang.String["15"]);
let FontStyle354 = browser.currentScene.createNode("FontStyle");
FontStyle354.size = 0.035;
Text353.fontStyle = FontStyle354;

Shape352.geometry = Text353;

Billboard351.children = new MFNode();

Billboard351.children[0] = Shape352;

HAnimSite348.children[2] = Billboard351;

HAnimSegment326.children[4] = HAnimSite348;

let HAnimSite355 = browser.currentScene.createNode("HAnimSite");
HAnimSite355.name = "l_axilla_distal";
HAnimSite355.DEF = "hanim_l_axilla_distal";
HAnimSite355.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor356 = browser.currentScene.createNode("TouchSensor");
TouchSensor356.description = "HAnimSite 17 l_axilla_distal";
HAnimSite355.children = new MFNode();

HAnimSite355.children[0] = TouchSensor356;

let Shape357 = browser.currentScene.createNode("Shape");
Shape357.USE = "HAnimSiteShape";
HAnimSite355.children[1] = Shape357;

let Billboard358 = browser.currentScene.createNode("Billboard");
let Shape359 = browser.currentScene.createNode("Shape");
let Text360 = browser.currentScene.createNode("Text");
Text360.string = new MFString(new java.lang.String["17"]);
let FontStyle361 = browser.currentScene.createNode("FontStyle");
FontStyle361.size = 0.035;
Text360.fontStyle = FontStyle361;

Shape359.geometry = Text360;

Billboard358.children = new MFNode();

Billboard358.children[0] = Shape359;

HAnimSite355.children[2] = Billboard358;

HAnimSegment326.children[5] = HAnimSite355;

let HAnimSite362 = browser.currentScene.createNode("HAnimSite");
HAnimSite362.name = "l_axilla_posterior_folds";
HAnimSite362.DEF = "hanim_l_axilla_posterior_folds";
let TouchSensor363 = browser.currentScene.createNode("TouchSensor");
TouchSensor363.description = "HAnimSite 18 l_axilla_posterior_folds";
HAnimSite362.children = new MFNode();

HAnimSite362.children[0] = TouchSensor363;

let Shape364 = browser.currentScene.createNode("Shape");
Shape364.USE = "HAnimSiteShape";
HAnimSite362.children[1] = Shape364;

let Billboard365 = browser.currentScene.createNode("Billboard");
let Shape366 = browser.currentScene.createNode("Shape");
let Text367 = browser.currentScene.createNode("Text");
Text367.string = new MFString(new java.lang.String["18"]);
let FontStyle368 = browser.currentScene.createNode("FontStyle");
FontStyle368.size = 0.035;
Text367.fontStyle = FontStyle368;

Shape366.geometry = Text367;

Billboard365.children = new MFNode();

Billboard365.children[0] = Shape366;

HAnimSite362.children[2] = Billboard365;

HAnimSegment326.children[6] = HAnimSite362;

let HAnimSite369 = browser.currentScene.createNode("HAnimSite");
HAnimSite369.name = "l_axilla_proximal";
HAnimSite369.DEF = "hanim_l_axilla_proximal";
HAnimSite369.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor370 = browser.currentScene.createNode("TouchSensor");
TouchSensor370.description = "HAnimSite 16 l_axilla_proximal";
HAnimSite369.children = new MFNode();

HAnimSite369.children[0] = TouchSensor370;

let Shape371 = browser.currentScene.createNode("Shape");
Shape371.USE = "HAnimSiteShape";
HAnimSite369.children[1] = Shape371;

let Billboard372 = browser.currentScene.createNode("Billboard");
let Shape373 = browser.currentScene.createNode("Shape");
let Text374 = browser.currentScene.createNode("Text");
Text374.string = new MFString(new java.lang.String["16"]);
let FontStyle375 = browser.currentScene.createNode("FontStyle");
FontStyle375.size = 0.035;
Text374.fontStyle = FontStyle375;

Shape373.geometry = Text374;

Billboard372.children = new MFNode();

Billboard372.children[0] = Shape373;

HAnimSite369.children[2] = Billboard372;

HAnimSegment326.children[7] = HAnimSite369;

let HAnimSite376 = browser.currentScene.createNode("HAnimSite");
HAnimSite376.name = "l_chest_midsagittal_plane";
HAnimSite376.DEF = "hanim_l_chest_midsagittal_plane";
let TouchSensor377 = browser.currentScene.createNode("TouchSensor");
TouchSensor377.description = "HAnimSite 94 l_chest_midsagittal_plane";
HAnimSite376.children = new MFNode();

HAnimSite376.children[0] = TouchSensor377;

let Shape378 = browser.currentScene.createNode("Shape");
Shape378.USE = "HAnimSiteShape";
HAnimSite376.children[1] = Shape378;

let Billboard379 = browser.currentScene.createNode("Billboard");
let Shape380 = browser.currentScene.createNode("Shape");
let Text381 = browser.currentScene.createNode("Text");
Text381.string = new MFString(new java.lang.String["94"]);
let FontStyle382 = browser.currentScene.createNode("FontStyle");
FontStyle382.size = 0.035;
Text381.fontStyle = FontStyle382;

Shape380.geometry = Text381;

Billboard379.children = new MFNode();

Billboard379.children[0] = Shape380;

HAnimSite376.children[2] = Billboard379;

HAnimSegment326.children[8] = HAnimSite376;

let HAnimSite383 = browser.currentScene.createNode("HAnimSite");
HAnimSite383.name = "l_clavicale";
HAnimSite383.DEF = "hanim_l_clavicale";
HAnimSite383.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor384 = browser.currentScene.createNode("TouchSensor");
TouchSensor384.description = "HAnimSite 14 l_clavicale";
HAnimSite383.children = new MFNode();

HAnimSite383.children[0] = TouchSensor384;

let Shape385 = browser.currentScene.createNode("Shape");
Shape385.USE = "HAnimSiteShape";
HAnimSite383.children[1] = Shape385;

let Billboard386 = browser.currentScene.createNode("Billboard");
let Shape387 = browser.currentScene.createNode("Shape");
let Text388 = browser.currentScene.createNode("Text");
Text388.string = new MFString(new java.lang.String["14"]);
let FontStyle389 = browser.currentScene.createNode("FontStyle");
FontStyle389.size = 0.035;
Text388.fontStyle = FontStyle389;

Shape387.geometry = Text388;

Billboard386.children = new MFNode();

Billboard386.children[0] = Shape387;

HAnimSite383.children[2] = Billboard386;

HAnimSegment326.children[9] = HAnimSite383;

let HAnimSite390 = browser.currentScene.createNode("HAnimSite");
HAnimSite390.name = "l_neck_base";
HAnimSite390.DEF = "hanim_l_neck_base";
HAnimSite390.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let TouchSensor391 = browser.currentScene.createNode("TouchSensor");
TouchSensor391.description = "HAnimSite 82 l_neck_base";
HAnimSite390.children = new MFNode();

HAnimSite390.children[0] = TouchSensor391;

let Shape392 = browser.currentScene.createNode("Shape");
Shape392.USE = "HAnimSiteShape";
HAnimSite390.children[1] = Shape392;

let Billboard393 = browser.currentScene.createNode("Billboard");
let Shape394 = browser.currentScene.createNode("Shape");
let Text395 = browser.currentScene.createNode("Text");
Text395.string = new MFString(new java.lang.String["82"]);
let FontStyle396 = browser.currentScene.createNode("FontStyle");
FontStyle396.size = 0.035;
Text395.fontStyle = FontStyle396;

Shape394.geometry = Text395;

Billboard393.children = new MFNode();

Billboard393.children[0] = Shape394;

HAnimSite390.children[2] = Billboard393;

HAnimSegment326.children[10] = HAnimSite390;

let HAnimSite397 = browser.currentScene.createNode("HAnimSite");
HAnimSite397.name = "l_rib10";
HAnimSite397.DEF = "hanim_l_rib10";
HAnimSite397.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let TouchSensor398 = browser.currentScene.createNode("TouchSensor");
TouchSensor398.description = "HAnimSite 28 l_rib10";
HAnimSite397.children = new MFNode();

HAnimSite397.children[0] = TouchSensor398;

let Shape399 = browser.currentScene.createNode("Shape");
Shape399.USE = "HAnimSiteShape";
HAnimSite397.children[1] = Shape399;

let Billboard400 = browser.currentScene.createNode("Billboard");
let Shape401 = browser.currentScene.createNode("Shape");
let Text402 = browser.currentScene.createNode("Text");
Text402.string = new MFString(new java.lang.String["28"]);
let FontStyle403 = browser.currentScene.createNode("FontStyle");
FontStyle403.size = 0.035;
Text402.fontStyle = FontStyle403;

Shape401.geometry = Text402;

Billboard400.children = new MFNode();

Billboard400.children[0] = Shape401;

HAnimSite397.children[2] = Billboard400;

HAnimSegment326.children[11] = HAnimSite397;

let HAnimSite404 = browser.currentScene.createNode("HAnimSite");
HAnimSite404.name = "l_thelion";
HAnimSite404.DEF = "hanim_l_thelion";
HAnimSite404.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let TouchSensor405 = browser.currentScene.createNode("TouchSensor");
TouchSensor405.description = "HAnimSite 29 l_thelion";
HAnimSite404.children = new MFNode();

HAnimSite404.children[0] = TouchSensor405;

let Shape406 = browser.currentScene.createNode("Shape");
Shape406.USE = "HAnimSiteShape";
HAnimSite404.children[1] = Shape406;

let Billboard407 = browser.currentScene.createNode("Billboard");
let Shape408 = browser.currentScene.createNode("Shape");
let Text409 = browser.currentScene.createNode("Text");
Text409.string = new MFString(new java.lang.String["29"]);
let FontStyle410 = browser.currentScene.createNode("FontStyle");
FontStyle410.size = 0.035;
Text409.fontStyle = FontStyle410;

Shape408.geometry = Text409;

Billboard407.children = new MFNode();

Billboard407.children[0] = Shape408;

HAnimSite404.children[2] = Billboard407;

HAnimSegment326.children[12] = HAnimSite404;

let HAnimSite411 = browser.currentScene.createNode("HAnimSite");
HAnimSite411.name = "mesosternale";
HAnimSite411.DEF = "hanim_mesosternale";
let TouchSensor412 = browser.currentScene.createNode("TouchSensor");
TouchSensor412.description = "HAnimSite 88 mesosternale";
HAnimSite411.children = new MFNode();

HAnimSite411.children[0] = TouchSensor412;

let Shape413 = browser.currentScene.createNode("Shape");
Shape413.USE = "HAnimSiteShape";
HAnimSite411.children[1] = Shape413;

let Billboard414 = browser.currentScene.createNode("Billboard");
let Shape415 = browser.currentScene.createNode("Shape");
let Text416 = browser.currentScene.createNode("Text");
Text416.string = new MFString(new java.lang.String["88"]);
let FontStyle417 = browser.currentScene.createNode("FontStyle");
FontStyle417.size = 0.035;
Text416.fontStyle = FontStyle417;

Shape415.geometry = Text416;

Billboard414.children = new MFNode();

Billboard414.children[0] = Shape415;

HAnimSite411.children[2] = Billboard414;

HAnimSegment326.children[13] = HAnimSite411;

let HAnimSite418 = browser.currentScene.createNode("HAnimSite");
HAnimSite418.name = "navel";
HAnimSite418.DEF = "hanim_navel";
HAnimSite418.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
let TouchSensor419 = browser.currentScene.createNode("TouchSensor");
TouchSensor419.description = "HAnimSite 84 navel";
HAnimSite418.children = new MFNode();

HAnimSite418.children[0] = TouchSensor419;

let Shape420 = browser.currentScene.createNode("Shape");
Shape420.USE = "HAnimSiteShape";
HAnimSite418.children[1] = Shape420;

let Billboard421 = browser.currentScene.createNode("Billboard");
let Shape422 = browser.currentScene.createNode("Shape");
let Text423 = browser.currentScene.createNode("Text");
Text423.string = new MFString(new java.lang.String["84"]);
let FontStyle424 = browser.currentScene.createNode("FontStyle");
FontStyle424.size = 0.035;
Text423.fontStyle = FontStyle424;

Shape422.geometry = Text423;

Billboard421.children = new MFNode();

Billboard421.children[0] = Shape422;

HAnimSite418.children[2] = Billboard421;

HAnimSegment326.children[14] = HAnimSite418;

let HAnimSite425 = browser.currentScene.createNode("HAnimSite");
HAnimSite425.name = "r_acromion";
HAnimSite425.DEF = "hanim_r_acromion";
HAnimSite425.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor426 = browser.currentScene.createNode("TouchSensor");
TouchSensor426.description = "HAnimSite 20 r_acromion";
HAnimSite425.children = new MFNode();

HAnimSite425.children[0] = TouchSensor426;

let Shape427 = browser.currentScene.createNode("Shape");
Shape427.USE = "HAnimSiteShape";
HAnimSite425.children[1] = Shape427;

let Billboard428 = browser.currentScene.createNode("Billboard");
let Shape429 = browser.currentScene.createNode("Shape");
let Text430 = browser.currentScene.createNode("Text");
Text430.string = new MFString(new java.lang.String["20"]);
let FontStyle431 = browser.currentScene.createNode("FontStyle");
FontStyle431.size = 0.035;
Text430.fontStyle = FontStyle431;

Shape429.geometry = Text430;

Billboard428.children = new MFNode();

Billboard428.children[0] = Shape429;

HAnimSite425.children[2] = Billboard428;

HAnimSegment326.children[15] = HAnimSite425;

let HAnimSite432 = browser.currentScene.createNode("HAnimSite");
HAnimSite432.name = "r_axilla_distal";
HAnimSite432.DEF = "hanim_r_axilla_distal";
HAnimSite432.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor433 = browser.currentScene.createNode("TouchSensor");
TouchSensor433.description = "HAnimSite 22 r_axilla_distal";
HAnimSite432.children = new MFNode();

HAnimSite432.children[0] = TouchSensor433;

let Shape434 = browser.currentScene.createNode("Shape");
Shape434.USE = "HAnimSiteShape";
HAnimSite432.children[1] = Shape434;

let Billboard435 = browser.currentScene.createNode("Billboard");
let Shape436 = browser.currentScene.createNode("Shape");
let Text437 = browser.currentScene.createNode("Text");
Text437.string = new MFString(new java.lang.String["22"]);
let FontStyle438 = browser.currentScene.createNode("FontStyle");
FontStyle438.size = 0.035;
Text437.fontStyle = FontStyle438;

Shape436.geometry = Text437;

Billboard435.children = new MFNode();

Billboard435.children[0] = Shape436;

HAnimSite432.children[2] = Billboard435;

HAnimSegment326.children[16] = HAnimSite432;

let HAnimSite439 = browser.currentScene.createNode("HAnimSite");
HAnimSite439.name = "r_axilla_posterior_folds";
HAnimSite439.DEF = "hanim_r_axilla_posterior_folds";
let TouchSensor440 = browser.currentScene.createNode("TouchSensor");
TouchSensor440.description = "HAnimSite 23 r_axilla_posterior_folds";
HAnimSite439.children = new MFNode();

HAnimSite439.children[0] = TouchSensor440;

let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "HAnimSiteShape";
HAnimSite439.children[1] = Shape441;

let Billboard442 = browser.currentScene.createNode("Billboard");
let Shape443 = browser.currentScene.createNode("Shape");
let Text444 = browser.currentScene.createNode("Text");
Text444.string = new MFString(new java.lang.String["23"]);
let FontStyle445 = browser.currentScene.createNode("FontStyle");
FontStyle445.size = 0.035;
Text444.fontStyle = FontStyle445;

Shape443.geometry = Text444;

Billboard442.children = new MFNode();

Billboard442.children[0] = Shape443;

HAnimSite439.children[2] = Billboard442;

HAnimSegment326.children[17] = HAnimSite439;

let HAnimSite446 = browser.currentScene.createNode("HAnimSite");
HAnimSite446.name = "r_axilla_proximal";
HAnimSite446.DEF = "hanim_r_axilla_proximal";
HAnimSite446.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor447 = browser.currentScene.createNode("TouchSensor");
TouchSensor447.description = "HAnimSite 21 r_axilla_proximal";
HAnimSite446.children = new MFNode();

HAnimSite446.children[0] = TouchSensor447;

let Shape448 = browser.currentScene.createNode("Shape");
Shape448.USE = "HAnimSiteShape";
HAnimSite446.children[1] = Shape448;

let Billboard449 = browser.currentScene.createNode("Billboard");
let Shape450 = browser.currentScene.createNode("Shape");
let Text451 = browser.currentScene.createNode("Text");
Text451.string = new MFString(new java.lang.String["21"]);
let FontStyle452 = browser.currentScene.createNode("FontStyle");
FontStyle452.size = 0.035;
Text451.fontStyle = FontStyle452;

Shape450.geometry = Text451;

Billboard449.children = new MFNode();

Billboard449.children[0] = Shape450;

HAnimSite446.children[2] = Billboard449;

HAnimSegment326.children[18] = HAnimSite446;

let HAnimSite453 = browser.currentScene.createNode("HAnimSite");
HAnimSite453.name = "r_chest_midsagittal_plane";
HAnimSite453.DEF = "hanim_r_chest_midsagittal_plane";
let TouchSensor454 = browser.currentScene.createNode("TouchSensor");
TouchSensor454.description = "HAnimSite 95 r_chest_midsagittal_plane";
HAnimSite453.children = new MFNode();

HAnimSite453.children[0] = TouchSensor454;

let Shape455 = browser.currentScene.createNode("Shape");
Shape455.USE = "HAnimSiteShape";
HAnimSite453.children[1] = Shape455;

let Billboard456 = browser.currentScene.createNode("Billboard");
let Shape457 = browser.currentScene.createNode("Shape");
let Text458 = browser.currentScene.createNode("Text");
Text458.string = new MFString(new java.lang.String["95"]);
let FontStyle459 = browser.currentScene.createNode("FontStyle");
FontStyle459.size = 0.035;
Text458.fontStyle = FontStyle459;

Shape457.geometry = Text458;

Billboard456.children = new MFNode();

Billboard456.children[0] = Shape457;

HAnimSite453.children[2] = Billboard456;

HAnimSegment326.children[19] = HAnimSite453;

let HAnimSite460 = browser.currentScene.createNode("HAnimSite");
HAnimSite460.name = "r_clavicale";
HAnimSite460.DEF = "hanim_r_clavicale";
HAnimSite460.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor461 = browser.currentScene.createNode("TouchSensor");
TouchSensor461.description = "HAnimSite 19 r_clavicale";
HAnimSite460.children = new MFNode();

HAnimSite460.children[0] = TouchSensor461;

let Shape462 = browser.currentScene.createNode("Shape");
Shape462.USE = "HAnimSiteShape";
HAnimSite460.children[1] = Shape462;

let Billboard463 = browser.currentScene.createNode("Billboard");
let Shape464 = browser.currentScene.createNode("Shape");
let Text465 = browser.currentScene.createNode("Text");
Text465.string = new MFString(new java.lang.String["19"]);
let FontStyle466 = browser.currentScene.createNode("FontStyle");
FontStyle466.size = 0.035;
Text465.fontStyle = FontStyle466;

Shape464.geometry = Text465;

Billboard463.children = new MFNode();

Billboard463.children[0] = Shape464;

HAnimSite460.children[2] = Billboard463;

HAnimSegment326.children[20] = HAnimSite460;

let HAnimSite467 = browser.currentScene.createNode("HAnimSite");
HAnimSite467.name = "r_neck_base";
HAnimSite467.DEF = "hanim_r_neck_base";
HAnimSite467.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let TouchSensor468 = browser.currentScene.createNode("TouchSensor");
TouchSensor468.description = "HAnimSite 83 r_neck_base";
HAnimSite467.children = new MFNode();

HAnimSite467.children[0] = TouchSensor468;

let Shape469 = browser.currentScene.createNode("Shape");
Shape469.USE = "HAnimSiteShape";
HAnimSite467.children[1] = Shape469;

let Billboard470 = browser.currentScene.createNode("Billboard");
let Shape471 = browser.currentScene.createNode("Shape");
let Text472 = browser.currentScene.createNode("Text");
Text472.string = new MFString(new java.lang.String["83"]);
let FontStyle473 = browser.currentScene.createNode("FontStyle");
FontStyle473.size = 0.035;
Text472.fontStyle = FontStyle473;

Shape471.geometry = Text472;

Billboard470.children = new MFNode();

Billboard470.children[0] = Shape471;

HAnimSite467.children[2] = Billboard470;

HAnimSegment326.children[21] = HAnimSite467;

let HAnimSite474 = browser.currentScene.createNode("HAnimSite");
HAnimSite474.name = "r_rib10";
HAnimSite474.DEF = "hanim_r_rib10";
HAnimSite474.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let TouchSensor475 = browser.currentScene.createNode("TouchSensor");
TouchSensor475.description = "HAnimSite 30 r_rib10";
HAnimSite474.children = new MFNode();

HAnimSite474.children[0] = TouchSensor475;

let Shape476 = browser.currentScene.createNode("Shape");
Shape476.USE = "HAnimSiteShape";
HAnimSite474.children[1] = Shape476;

let Billboard477 = browser.currentScene.createNode("Billboard");
let Shape478 = browser.currentScene.createNode("Shape");
let Text479 = browser.currentScene.createNode("Text");
Text479.string = new MFString(new java.lang.String["30"]);
let FontStyle480 = browser.currentScene.createNode("FontStyle");
FontStyle480.size = 0.035;
Text479.fontStyle = FontStyle480;

Shape478.geometry = Text479;

Billboard477.children = new MFNode();

Billboard477.children[0] = Shape478;

HAnimSite474.children[2] = Billboard477;

HAnimSegment326.children[22] = HAnimSite474;

let HAnimSite481 = browser.currentScene.createNode("HAnimSite");
HAnimSite481.name = "r_thelion";
HAnimSite481.DEF = "hanim_r_thelion";
HAnimSite481.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let TouchSensor482 = browser.currentScene.createNode("TouchSensor");
TouchSensor482.description = "HAnimSite 31 r_thelion";
HAnimSite481.children = new MFNode();

HAnimSite481.children[0] = TouchSensor482;

let Shape483 = browser.currentScene.createNode("Shape");
Shape483.USE = "HAnimSiteShape";
HAnimSite481.children[1] = Shape483;

let Billboard484 = browser.currentScene.createNode("Billboard");
let Shape485 = browser.currentScene.createNode("Shape");
let Text486 = browser.currentScene.createNode("Text");
Text486.string = new MFString(new java.lang.String["31"]);
let FontStyle487 = browser.currentScene.createNode("FontStyle");
FontStyle487.size = 0.035;
Text486.fontStyle = FontStyle487;

Shape485.geometry = Text486;

Billboard484.children = new MFNode();

Billboard484.children[0] = Shape485;

HAnimSite481.children[2] = Billboard484;

HAnimSegment326.children[23] = HAnimSite481;

let HAnimSite488 = browser.currentScene.createNode("HAnimSite");
HAnimSite488.name = "rear_center_midsagittal_plane";
HAnimSite488.DEF = "hanim_rear_center_midsagittal_plane";
let TouchSensor489 = browser.currentScene.createNode("TouchSensor");
TouchSensor489.description = "HAnimSite 92 rear_center_midsagittal_plane";
HAnimSite488.children = new MFNode();

HAnimSite488.children[0] = TouchSensor489;

let Shape490 = browser.currentScene.createNode("Shape");
Shape490.USE = "HAnimSiteShape";
HAnimSite488.children[1] = Shape490;

let Billboard491 = browser.currentScene.createNode("Billboard");
let Shape492 = browser.currentScene.createNode("Shape");
let Text493 = browser.currentScene.createNode("Text");
Text493.string = new MFString(new java.lang.String["92"]);
let FontStyle494 = browser.currentScene.createNode("FontStyle");
FontStyle494.size = 0.035;
Text493.fontStyle = FontStyle494;

Shape492.geometry = Text493;

Billboard491.children = new MFNode();

Billboard491.children[0] = Shape492;

HAnimSite488.children[2] = Billboard491;

HAnimSegment326.children[24] = HAnimSite488;

let HAnimSite495 = browser.currentScene.createNode("HAnimSite");
HAnimSite495.name = "spine_1_middle_back";
HAnimSite495.DEF = "hanim_spine_1_middle_back";
let TouchSensor496 = browser.currentScene.createNode("TouchSensor");
TouchSensor496.description = "HAnimSite 24 spine_1_middle_back";
HAnimSite495.children = new MFNode();

HAnimSite495.children[0] = TouchSensor496;

let Shape497 = browser.currentScene.createNode("Shape");
Shape497.USE = "HAnimSiteShape";
HAnimSite495.children[1] = Shape497;

let Billboard498 = browser.currentScene.createNode("Billboard");
let Shape499 = browser.currentScene.createNode("Shape");
let Text500 = browser.currentScene.createNode("Text");
Text500.string = new MFString(new java.lang.String["24"]);
let FontStyle501 = browser.currentScene.createNode("FontStyle");
FontStyle501.size = 0.035;
Text500.fontStyle = FontStyle501;

Shape499.geometry = Text500;

Billboard498.children = new MFNode();

Billboard498.children[0] = Shape499;

HAnimSite495.children[2] = Billboard498;

HAnimSegment326.children[25] = HAnimSite495;

let HAnimSite502 = browser.currentScene.createNode("HAnimSite");
HAnimSite502.name = "spine_2_middle_back";
HAnimSite502.DEF = "hanim_spine_2_middle_back";
let TouchSensor503 = browser.currentScene.createNode("TouchSensor");
TouchSensor503.description = "HAnimSite spine_2_middle_back";
HAnimSite502.children = new MFNode();

HAnimSite502.children[0] = TouchSensor503;

let Shape504 = browser.currentScene.createNode("Shape");
Shape504.USE = "HAnimSiteShape";
HAnimSite502.children[1] = Shape504;

let Billboard505 = browser.currentScene.createNode("Billboard");
let Shape506 = browser.currentScene.createNode("Shape");
let Text507 = browser.currentScene.createNode("Text");
Text507.string = new MFString(new java.lang.String[""]);
let FontStyle508 = browser.currentScene.createNode("FontStyle");
FontStyle508.size = 0.035;
Text507.fontStyle = FontStyle508;

Shape506.geometry = Text507;

Billboard505.children = new MFNode();

Billboard505.children[0] = Shape506;

HAnimSite502.children[2] = Billboard505;

HAnimSegment326.children[26] = HAnimSite502;

let HAnimSite509 = browser.currentScene.createNode("HAnimSite");
HAnimSite509.name = "substernale";
HAnimSite509.DEF = "hanim_substernale";
HAnimSite509.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor510 = browser.currentScene.createNode("TouchSensor");
TouchSensor510.description = "HAnimSite 13 substernale";
HAnimSite509.children = new MFNode();

HAnimSite509.children[0] = TouchSensor510;

let Shape511 = browser.currentScene.createNode("Shape");
Shape511.USE = "HAnimSiteShape";
HAnimSite509.children[1] = Shape511;

let Billboard512 = browser.currentScene.createNode("Billboard");
let Shape513 = browser.currentScene.createNode("Shape");
let Text514 = browser.currentScene.createNode("Text");
Text514.string = new MFString(new java.lang.String["13"]);
let FontStyle515 = browser.currentScene.createNode("FontStyle");
FontStyle515.size = 0.035;
Text514.fontStyle = FontStyle515;

Shape513.geometry = Text514;

Billboard512.children = new MFNode();

Billboard512.children[0] = Shape513;

HAnimSite509.children[2] = Billboard512;

HAnimSegment326.children[27] = HAnimSite509;

let HAnimSite516 = browser.currentScene.createNode("HAnimSite");
HAnimSite516.name = "suprasternale";
HAnimSite516.DEF = "hanim_suprasternale";
HAnimSite516.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor517 = browser.currentScene.createNode("TouchSensor");
TouchSensor517.description = "HAnimSite 12 suprasternale";
HAnimSite516.children = new MFNode();

HAnimSite516.children[0] = TouchSensor517;

let Shape518 = browser.currentScene.createNode("Shape");
Shape518.USE = "HAnimSiteShape";
HAnimSite516.children[1] = Shape518;

let Billboard519 = browser.currentScene.createNode("Billboard");
let Shape520 = browser.currentScene.createNode("Shape");
let Text521 = browser.currentScene.createNode("Text");
Text521.string = new MFString(new java.lang.String["12"]);
let FontStyle522 = browser.currentScene.createNode("FontStyle");
FontStyle522.size = 0.035;
Text521.fontStyle = FontStyle522;

Shape520.geometry = Text521;

Billboard519.children = new MFNode();

Billboard519.children[0] = Shape520;

HAnimSite516.children[2] = Billboard519;

HAnimSegment326.children[28] = HAnimSite516;

let HAnimSite523 = browser.currentScene.createNode("HAnimSite");
HAnimSite523.name = "waist_preferred_anterior";
HAnimSite523.DEF = "hanim_waist_preferred_anterior";
let TouchSensor524 = browser.currentScene.createNode("TouchSensor");
TouchSensor524.description = "HAnimSite 26 waist_preferred_anterior";
HAnimSite523.children = new MFNode();

HAnimSite523.children[0] = TouchSensor524;

let Shape525 = browser.currentScene.createNode("Shape");
Shape525.USE = "HAnimSiteShape";
HAnimSite523.children[1] = Shape525;

let Billboard526 = browser.currentScene.createNode("Billboard");
let Shape527 = browser.currentScene.createNode("Shape");
let Text528 = browser.currentScene.createNode("Text");
Text528.string = new MFString(new java.lang.String["26"]);
let FontStyle529 = browser.currentScene.createNode("FontStyle");
FontStyle529.size = 0.035;
Text528.fontStyle = FontStyle529;

Shape527.geometry = Text528;

Billboard526.children = new MFNode();

Billboard526.children[0] = Shape527;

HAnimSite523.children[2] = Billboard526;

HAnimSegment326.children[29] = HAnimSite523;

let HAnimSite530 = browser.currentScene.createNode("HAnimSite");
HAnimSite530.name = "waist_preferred_posterior";
HAnimSite530.DEF = "hanim_waist_preferred_posterior";
HAnimSite530.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
let TouchSensor531 = browser.currentScene.createNode("TouchSensor");
TouchSensor531.description = "HAnimSite 27 waist_preferred_posterior";
HAnimSite530.children = new MFNode();

HAnimSite530.children[0] = TouchSensor531;

let Shape532 = browser.currentScene.createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530.children[1] = Shape532;

let Billboard533 = browser.currentScene.createNode("Billboard");
let Shape534 = browser.currentScene.createNode("Shape");
let Text535 = browser.currentScene.createNode("Text");
Text535.string = new MFString(new java.lang.String["27"]);
let FontStyle536 = browser.currentScene.createNode("FontStyle");
FontStyle536.size = 0.035;
Text535.fontStyle = FontStyle536;

Shape534.geometry = Text535;

Billboard533.children = new MFNode();

Billboard533.children[0] = Shape534;

HAnimSite530.children[2] = Billboard533;

HAnimSegment326.children[30] = HAnimSite530;

let Shape537 = browser.currentScene.createNode("Shape");
let LineSet538 = browser.currentScene.createNode("LineSet");
LineSet538.vertexCount = new MFInt32(new int[2]);
let Coordinate539 = browser.currentScene.createNode("Coordinate");
Coordinate539.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387]);
LineSet538.coord = Coordinate539;

//from vl5 to l_shoulder vertices 2
let ColorRGBA540 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA540.USE = "HAnimSegmentLineColorRGBA";
LineSet538.color = ColorRGBA540;

Shape537.geometry = LineSet538;

HAnimSegment326.children[31] = Shape537;

let Shape541 = browser.currentScene.createNode("Shape");
let LineSet542 = browser.currentScene.createNode("LineSet");
LineSet542.vertexCount = new MFInt32(new int[2]);
let Coordinate543 = browser.currentScene.createNode("Coordinate");
Coordinate543.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325]);
LineSet542.coord = Coordinate543;

//from vl5 to r_shoulder vertices 2
let ColorRGBA544 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA544.USE = "HAnimSegmentLineColorRGBA";
LineSet542.color = ColorRGBA544;

Shape541.geometry = LineSet542;

HAnimSegment326.children[32] = Shape541;

HAnimJoint325.children = new MFNode();

HAnimJoint325.children[0] = HAnimSegment326;

let HAnimJoint545 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint545.name = "skullbase";
HAnimJoint545.DEF = "hanim_skullbase";
HAnimJoint545.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint325.children[1] = HAnimJoint545;

let HAnimJoint546 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint546.name = "l_shoulder";
HAnimJoint546.DEF = "hanim_l_shoulder";
HAnimJoint546.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let HAnimSegment547 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment547.name = "l_upperarm";
HAnimSegment547.DEF = "hanim_l_upperarm";
let Transform548 = browser.currentScene.createNode("Transform");
Transform548.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Transform549 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape550 = browser.currentScene.createNode("Shape");
Shape550.USE = "HAnimJointShape";
Transform549.child = new undefined();

Transform549.child[0] = Shape550;

Transform548.children = new MFNode();

Transform548.children[0] = Transform549;

HAnimSegment547.children = new MFNode();

HAnimSegment547.children[0] = Transform548;

let Shape551 = browser.currentScene.createNode("Shape");
let LineSet552 = browser.currentScene.createNode("LineSet");
LineSet552.vertexCount = new MFInt32(new int[2]);
let Coordinate553 = browser.currentScene.createNode("Coordinate");
Coordinate553.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet552.coord = Coordinate553;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA554 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA554.USE = "HAnimSegmentLineColorRGBA";
LineSet552.color = ColorRGBA554;

Shape551.geometry = LineSet552;

HAnimSegment547.children[1] = Shape551;

let HAnimSite555 = browser.currentScene.createNode("HAnimSite");
HAnimSite555.name = "l_bideltoid";
HAnimSite555.DEF = "hanim_l_bideltoid";
let TouchSensor556 = browser.currentScene.createNode("TouchSensor");
TouchSensor556.description = "HAnimSite 96 l_bideltoid";
HAnimSite555.children = new MFNode();

HAnimSite555.children[0] = TouchSensor556;

let Shape557 = browser.currentScene.createNode("Shape");
Shape557.USE = "HAnimSiteShape";
HAnimSite555.children[1] = Shape557;

let Billboard558 = browser.currentScene.createNode("Billboard");
let Shape559 = browser.currentScene.createNode("Shape");
let Text560 = browser.currentScene.createNode("Text");
Text560.string = new MFString(new java.lang.String["96"]);
let FontStyle561 = browser.currentScene.createNode("FontStyle");
FontStyle561.size = 0.035;
Text560.fontStyle = FontStyle561;

Shape559.geometry = Text560;

Billboard558.children = new MFNode();

Billboard558.children[0] = Shape559;

HAnimSite555.children[2] = Billboard558;

HAnimSegment547.children[2] = HAnimSite555;

let HAnimSite562 = browser.currentScene.createNode("HAnimSite");
HAnimSite562.name = "l_humeral_lateral_epicondyles";
HAnimSite562.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite562.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor563 = browser.currentScene.createNode("TouchSensor");
TouchSensor563.description = "HAnimSite 63 l_humeral_lateral_epicondyles";
HAnimSite562.children = new MFNode();

HAnimSite562.children[0] = TouchSensor563;

let Shape564 = browser.currentScene.createNode("Shape");
Shape564.USE = "HAnimSiteShape";
HAnimSite562.children[1] = Shape564;

let Billboard565 = browser.currentScene.createNode("Billboard");
let Shape566 = browser.currentScene.createNode("Shape");
let Text567 = browser.currentScene.createNode("Text");
Text567.string = new MFString(new java.lang.String["63"]);
let FontStyle568 = browser.currentScene.createNode("FontStyle");
FontStyle568.size = 0.035;
Text567.fontStyle = FontStyle568;

Shape566.geometry = Text567;

Billboard565.children = new MFNode();

Billboard565.children[0] = Shape566;

HAnimSite562.children[2] = Billboard565;

HAnimSegment547.children[3] = HAnimSite562;

HAnimJoint546.children = new MFNode();

HAnimJoint546.children[0] = HAnimSegment547;

let HAnimJoint569 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint569.name = "l_elbow";
HAnimJoint569.DEF = "hanim_l_elbow";
HAnimJoint569.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let HAnimSegment570 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment570.name = "l_forearm";
HAnimSegment570.DEF = "hanim_l_forearm";
let Transform571 = browser.currentScene.createNode("Transform");
Transform571.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Transform572 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape573 = browser.currentScene.createNode("Shape");
Shape573.USE = "HAnimJointShape";
Transform572.child = new undefined();

Transform572.child[0] = Shape573;

Transform571.children = new MFNode();

Transform571.children[0] = Transform572;

HAnimSegment570.children = new MFNode();

HAnimSegment570.children[0] = Transform571;

let Shape574 = browser.currentScene.createNode("Shape");
let LineSet575 = browser.currentScene.createNode("LineSet");
LineSet575.vertexCount = new MFInt32(new int[2]);
let Coordinate576 = browser.currentScene.createNode("Coordinate");
Coordinate576.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet575.coord = Coordinate576;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA577 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA577.USE = "HAnimSegmentLineColorRGBA";
LineSet575.color = ColorRGBA577;

Shape574.geometry = LineSet575;

HAnimSegment570.children[1] = Shape574;

let HAnimSite578 = browser.currentScene.createNode("HAnimSite");
HAnimSite578.name = "l_humeral_medial_epicondyles";
HAnimSite578.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite578.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor579 = browser.currentScene.createNode("TouchSensor");
TouchSensor579.description = "HAnimSite 64 l_humeral_medial_epicondyles";
HAnimSite578.children = new MFNode();

HAnimSite578.children[0] = TouchSensor579;

let Shape580 = browser.currentScene.createNode("Shape");
Shape580.USE = "HAnimSiteShape";
HAnimSite578.children[1] = Shape580;

let Billboard581 = browser.currentScene.createNode("Billboard");
let Shape582 = browser.currentScene.createNode("Shape");
let Text583 = browser.currentScene.createNode("Text");
Text583.string = new MFString(new java.lang.String["64"]);
let FontStyle584 = browser.currentScene.createNode("FontStyle");
FontStyle584.size = 0.035;
Text583.fontStyle = FontStyle584;

Shape582.geometry = Text583;

Billboard581.children = new MFNode();

Billboard581.children[0] = Shape582;

HAnimSite578.children[2] = Billboard581;

HAnimSegment570.children[2] = HAnimSite578;

let HAnimSite585 = browser.currentScene.createNode("HAnimSite");
HAnimSite585.name = "l_olecranon";
HAnimSite585.DEF = "hanim_l_olecranon";
HAnimSite585.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor586 = browser.currentScene.createNode("TouchSensor");
TouchSensor586.description = "HAnimSite 65 l_olecranon";
HAnimSite585.children = new MFNode();

HAnimSite585.children[0] = TouchSensor586;

let Shape587 = browser.currentScene.createNode("Shape");
Shape587.USE = "HAnimSiteShape";
HAnimSite585.children[1] = Shape587;

let Billboard588 = browser.currentScene.createNode("Billboard");
let Shape589 = browser.currentScene.createNode("Shape");
let Text590 = browser.currentScene.createNode("Text");
Text590.string = new MFString(new java.lang.String["65"]);
let FontStyle591 = browser.currentScene.createNode("FontStyle");
FontStyle591.size = 0.035;
Text590.fontStyle = FontStyle591;

Shape589.geometry = Text590;

Billboard588.children = new MFNode();

Billboard588.children[0] = Shape589;

HAnimSite585.children[2] = Billboard588;

HAnimSegment570.children[3] = HAnimSite585;

let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.name = "l_radial_styloid";
HAnimSite592.DEF = "hanim_l_radial_styloid";
HAnimSite592.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor593 = browser.currentScene.createNode("TouchSensor");
TouchSensor593.description = "HAnimSite 71 l_radial_styloid";
HAnimSite592.children = new MFNode();

HAnimSite592.children[0] = TouchSensor593;

let Shape594 = browser.currentScene.createNode("Shape");
Shape594.USE = "HAnimSiteShape";
HAnimSite592.children[1] = Shape594;

let Billboard595 = browser.currentScene.createNode("Billboard");
let Shape596 = browser.currentScene.createNode("Shape");
let Text597 = browser.currentScene.createNode("Text");
Text597.string = new MFString(new java.lang.String["71"]);
let FontStyle598 = browser.currentScene.createNode("FontStyle");
FontStyle598.size = 0.035;
Text597.fontStyle = FontStyle598;

Shape596.geometry = Text597;

Billboard595.children = new MFNode();

Billboard595.children[0] = Shape596;

HAnimSite592.children[2] = Billboard595;

HAnimSegment570.children[4] = HAnimSite592;

let HAnimSite599 = browser.currentScene.createNode("HAnimSite");
HAnimSite599.name = "l_radiale";
HAnimSite599.DEF = "hanim_l_radiale";
HAnimSite599.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor600 = browser.currentScene.createNode("TouchSensor");
TouchSensor600.description = "HAnimSite 69 l_radiale";
HAnimSite599.children = new MFNode();

HAnimSite599.children[0] = TouchSensor600;

let Shape601 = browser.currentScene.createNode("Shape");
Shape601.USE = "HAnimSiteShape";
HAnimSite599.children[1] = Shape601;

let Billboard602 = browser.currentScene.createNode("Billboard");
let Shape603 = browser.currentScene.createNode("Shape");
let Text604 = browser.currentScene.createNode("Text");
Text604.string = new MFString(new java.lang.String["69"]);
let FontStyle605 = browser.currentScene.createNode("FontStyle");
FontStyle605.size = 0.035;
Text604.fontStyle = FontStyle605;

Shape603.geometry = Text604;

Billboard602.children = new MFNode();

Billboard602.children[0] = Shape603;

HAnimSite599.children[2] = Billboard602;

HAnimSegment570.children[5] = HAnimSite599;

HAnimJoint569.children = new MFNode();

HAnimJoint569.children[0] = HAnimSegment570;

let HAnimJoint606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint606.name = "l_radiocarpal";
HAnimJoint606.DEF = "hanim_l_radiocarpal";
HAnimJoint606.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint569.children[1] = HAnimJoint606;

HAnimJoint546.children[1] = HAnimJoint569;

HAnimJoint325.children[2] = HAnimJoint546;

let HAnimJoint607 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint607.name = "r_shoulder";
HAnimJoint607.DEF = "hanim_r_shoulder";
HAnimJoint607.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let HAnimSegment608 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment608.name = "r_upperarm";
HAnimSegment608.DEF = "hanim_r_upperarm";
let Transform609 = browser.currentScene.createNode("Transform");
Transform609.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Transform610 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape611 = browser.currentScene.createNode("Shape");
Shape611.USE = "HAnimJointShape";
Transform610.child = new undefined();

Transform610.child[0] = Shape611;

Transform609.children = new MFNode();

Transform609.children[0] = Transform610;

HAnimSegment608.children = new MFNode();

HAnimSegment608.children[0] = Transform609;

let Shape612 = browser.currentScene.createNode("Shape");
let LineSet613 = browser.currentScene.createNode("LineSet");
LineSet613.vertexCount = new MFInt32(new int[2]);
let Coordinate614 = browser.currentScene.createNode("Coordinate");
Coordinate614.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet613.coord = Coordinate614;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA615 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA615.USE = "HAnimSegmentLineColorRGBA";
LineSet613.color = ColorRGBA615;

Shape612.geometry = LineSet613;

HAnimSegment608.children[1] = Shape612;

let HAnimSite616 = browser.currentScene.createNode("HAnimSite");
HAnimSite616.name = "r_bideltoid";
HAnimSite616.DEF = "hanim_r_bideltoid";
let TouchSensor617 = browser.currentScene.createNode("TouchSensor");
TouchSensor617.description = "HAnimSite 97 r_bideltoid";
HAnimSite616.children = new MFNode();

HAnimSite616.children[0] = TouchSensor617;

let Shape618 = browser.currentScene.createNode("Shape");
Shape618.USE = "HAnimSiteShape";
HAnimSite616.children[1] = Shape618;

let Billboard619 = browser.currentScene.createNode("Billboard");
let Shape620 = browser.currentScene.createNode("Shape");
let Text621 = browser.currentScene.createNode("Text");
Text621.string = new MFString(new java.lang.String["97"]);
let FontStyle622 = browser.currentScene.createNode("FontStyle");
FontStyle622.size = 0.035;
Text621.fontStyle = FontStyle622;

Shape620.geometry = Text621;

Billboard619.children = new MFNode();

Billboard619.children[0] = Shape620;

HAnimSite616.children[2] = Billboard619;

HAnimSegment608.children[2] = HAnimSite616;

let HAnimSite623 = browser.currentScene.createNode("HAnimSite");
HAnimSite623.name = "r_humeral_lateral_epicondyles";
HAnimSite623.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite623.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor624 = browser.currentScene.createNode("TouchSensor");
TouchSensor624.description = "HAnimSite 66 r_humeral_lateral_epicondyles";
HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = TouchSensor624;

let Shape625 = browser.currentScene.createNode("Shape");
Shape625.USE = "HAnimSiteShape";
HAnimSite623.children[1] = Shape625;

let Billboard626 = browser.currentScene.createNode("Billboard");
let Shape627 = browser.currentScene.createNode("Shape");
let Text628 = browser.currentScene.createNode("Text");
Text628.string = new MFString(new java.lang.String["66"]);
let FontStyle629 = browser.currentScene.createNode("FontStyle");
FontStyle629.size = 0.035;
Text628.fontStyle = FontStyle629;

Shape627.geometry = Text628;

Billboard626.children = new MFNode();

Billboard626.children[0] = Shape627;

HAnimSite623.children[2] = Billboard626;

HAnimSegment608.children[3] = HAnimSite623;

HAnimJoint607.children = new MFNode();

HAnimJoint607.children[0] = HAnimSegment608;

let HAnimJoint630 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint630.name = "r_elbow";
HAnimJoint630.DEF = "hanim_r_elbow";
HAnimJoint630.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let HAnimSegment631 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment631.name = "r_forearm";
HAnimSegment631.DEF = "hanim_r_forearm";
let Transform632 = browser.currentScene.createNode("Transform");
Transform632.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Transform633 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape634 = browser.currentScene.createNode("Shape");
Shape634.USE = "HAnimJointShape";
Transform633.child = new undefined();

Transform633.child[0] = Shape634;

Transform632.children = new MFNode();

Transform632.children[0] = Transform633;

HAnimSegment631.children = new MFNode();

HAnimSegment631.children[0] = Transform632;

let Shape635 = browser.currentScene.createNode("Shape");
let LineSet636 = browser.currentScene.createNode("LineSet");
LineSet636.vertexCount = new MFInt32(new int[2]);
let Coordinate637 = browser.currentScene.createNode("Coordinate");
Coordinate637.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet636.coord = Coordinate637;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA638 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA638.USE = "HAnimSegmentLineColorRGBA";
LineSet636.color = ColorRGBA638;

Shape635.geometry = LineSet636;

HAnimSegment631.children[1] = Shape635;

let HAnimSite639 = browser.currentScene.createNode("HAnimSite");
HAnimSite639.name = "r_humeral_medial_epicondyles";
HAnimSite639.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite639.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor640 = browser.currentScene.createNode("TouchSensor");
TouchSensor640.description = "HAnimSite 67 r_humeral_medial_epicondyles";
HAnimSite639.children = new MFNode();

HAnimSite639.children[0] = TouchSensor640;

let Shape641 = browser.currentScene.createNode("Shape");
Shape641.USE = "HAnimSiteShape";
HAnimSite639.children[1] = Shape641;

let Billboard642 = browser.currentScene.createNode("Billboard");
let Shape643 = browser.currentScene.createNode("Shape");
let Text644 = browser.currentScene.createNode("Text");
Text644.string = new MFString(new java.lang.String["67"]);
let FontStyle645 = browser.currentScene.createNode("FontStyle");
FontStyle645.size = 0.035;
Text644.fontStyle = FontStyle645;

Shape643.geometry = Text644;

Billboard642.children = new MFNode();

Billboard642.children[0] = Shape643;

HAnimSite639.children[2] = Billboard642;

HAnimSegment631.children[2] = HAnimSite639;

let HAnimSite646 = browser.currentScene.createNode("HAnimSite");
HAnimSite646.name = "r_olecranon";
HAnimSite646.DEF = "hanim_r_olecranon";
HAnimSite646.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor647 = browser.currentScene.createNode("TouchSensor");
TouchSensor647.description = "HAnimSite 68 r_olecranon";
HAnimSite646.children = new MFNode();

HAnimSite646.children[0] = TouchSensor647;

let Shape648 = browser.currentScene.createNode("Shape");
Shape648.USE = "HAnimSiteShape";
HAnimSite646.children[1] = Shape648;

let Billboard649 = browser.currentScene.createNode("Billboard");
let Shape650 = browser.currentScene.createNode("Shape");
let Text651 = browser.currentScene.createNode("Text");
Text651.string = new MFString(new java.lang.String["68"]);
let FontStyle652 = browser.currentScene.createNode("FontStyle");
FontStyle652.size = 0.035;
Text651.fontStyle = FontStyle652;

Shape650.geometry = Text651;

Billboard649.children = new MFNode();

Billboard649.children[0] = Shape650;

HAnimSite646.children[2] = Billboard649;

HAnimSegment631.children[3] = HAnimSite646;

let HAnimSite653 = browser.currentScene.createNode("HAnimSite");
HAnimSite653.name = "r_radial_styloid";
HAnimSite653.DEF = "hanim_r_radial_styloid";
HAnimSite653.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor654 = browser.currentScene.createNode("TouchSensor");
TouchSensor654.description = "HAnimSite 74 r_radial_styloid";
HAnimSite653.children = new MFNode();

HAnimSite653.children[0] = TouchSensor654;

let Shape655 = browser.currentScene.createNode("Shape");
Shape655.USE = "HAnimSiteShape";
HAnimSite653.children[1] = Shape655;

let Billboard656 = browser.currentScene.createNode("Billboard");
let Shape657 = browser.currentScene.createNode("Shape");
let Text658 = browser.currentScene.createNode("Text");
Text658.string = new MFString(new java.lang.String["74"]);
let FontStyle659 = browser.currentScene.createNode("FontStyle");
FontStyle659.size = 0.035;
Text658.fontStyle = FontStyle659;

Shape657.geometry = Text658;

Billboard656.children = new MFNode();

Billboard656.children[0] = Shape657;

HAnimSite653.children[2] = Billboard656;

HAnimSegment631.children[4] = HAnimSite653;

let HAnimSite660 = browser.currentScene.createNode("HAnimSite");
HAnimSite660.name = "r_radiale";
HAnimSite660.DEF = "hanim_r_radiale";
HAnimSite660.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor661 = browser.currentScene.createNode("TouchSensor");
TouchSensor661.description = "HAnimSite 72 r_radiale";
HAnimSite660.children = new MFNode();

HAnimSite660.children[0] = TouchSensor661;

let Shape662 = browser.currentScene.createNode("Shape");
Shape662.USE = "HAnimSiteShape";
HAnimSite660.children[1] = Shape662;

let Billboard663 = browser.currentScene.createNode("Billboard");
let Shape664 = browser.currentScene.createNode("Shape");
let Text665 = browser.currentScene.createNode("Text");
Text665.string = new MFString(new java.lang.String["72"]);
let FontStyle666 = browser.currentScene.createNode("FontStyle");
FontStyle666.size = 0.035;
Text665.fontStyle = FontStyle666;

Shape664.geometry = Text665;

Billboard663.children = new MFNode();

Billboard663.children[0] = Shape664;

HAnimSite660.children[2] = Billboard663;

HAnimSegment631.children[5] = HAnimSite660;

HAnimJoint630.children = new MFNode();

HAnimJoint630.children[0] = HAnimSegment631;

let HAnimJoint667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint667.name = "r_radiocarpal";
HAnimJoint667.DEF = "hanim_r_radiocarpal";
HAnimJoint667.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint630.children[1] = HAnimJoint667;

HAnimJoint607.children[1] = HAnimJoint630;

HAnimJoint325.children[3] = HAnimJoint607;

HAnimJoint47.children[2] = HAnimJoint325;

HAnimHumanoid38.joints[1] = HAnimJoint47;

let HAnimJoint668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint668.USE = "hanim_humanoid_root";
HAnimHumanoid38.joints[2] = HAnimJoint668;

let HAnimJoint669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint669.USE = "hanim_sacroiliac";
HAnimHumanoid38.joints[3] = HAnimJoint669;

let HAnimJoint670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint670.USE = "hanim_l_hip";
HAnimHumanoid38.joints[4] = HAnimJoint670;

let HAnimJoint671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint671.USE = "hanim_l_knee";
HAnimHumanoid38.joints[5] = HAnimJoint671;

let HAnimJoint672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint672.USE = "hanim_l_talocrural";
HAnimHumanoid38.joints[6] = HAnimJoint672;

let HAnimJoint673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint673.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid38.joints[7] = HAnimJoint673;

let HAnimJoint674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint674.USE = "hanim_r_hip";
HAnimHumanoid38.joints[8] = HAnimJoint674;

let HAnimJoint675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint675.USE = "hanim_r_knee";
HAnimHumanoid38.joints[9] = HAnimJoint675;

let HAnimJoint676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint676.USE = "hanim_r_talocrural";
HAnimHumanoid38.joints[10] = HAnimJoint676;

let HAnimJoint677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint677.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid38.joints[11] = HAnimJoint677;

let HAnimJoint678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint678.USE = "hanim_vl5";
HAnimHumanoid38.joints[12] = HAnimJoint678;

let HAnimJoint679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint679.USE = "hanim_skullbase";
HAnimHumanoid38.joints[13] = HAnimJoint679;

let HAnimJoint680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint680.USE = "hanim_l_shoulder";
HAnimHumanoid38.joints[14] = HAnimJoint680;

let HAnimJoint681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint681.USE = "hanim_l_elbow";
HAnimHumanoid38.joints[15] = HAnimJoint681;

let HAnimJoint682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint682.USE = "hanim_l_radiocarpal";
HAnimHumanoid38.joints[16] = HAnimJoint682;

let HAnimJoint683 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint683.USE = "hanim_r_shoulder";
HAnimHumanoid38.joints[17] = HAnimJoint683;

let HAnimJoint684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint684.USE = "hanim_r_elbow";
HAnimHumanoid38.joints[18] = HAnimJoint684;

let HAnimJoint685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint685.USE = "hanim_r_radiocarpal";
HAnimHumanoid38.joints[19] = HAnimJoint685;

let HAnimSegment686 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment686.USE = "hanim_sacrum";
HAnimHumanoid38.segments[20] = HAnimSegment686;

let HAnimSegment687 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment687.USE = "hanim_pelvis";
HAnimHumanoid38.segments[21] = HAnimSegment687;

let HAnimSegment688 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment688.USE = "hanim_l_thigh";
HAnimHumanoid38.segments[22] = HAnimSegment688;

let HAnimSegment689 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment689.USE = "hanim_l_calf";
HAnimHumanoid38.segments[23] = HAnimSegment689;

let HAnimSegment690 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment690.USE = "hanim_l_talus";
HAnimHumanoid38.segments[24] = HAnimSegment690;

let HAnimSegment691 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment691.USE = "hanim_r_thigh";
HAnimHumanoid38.segments[25] = HAnimSegment691;

let HAnimSegment692 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment692.USE = "hanim_r_calf";
HAnimHumanoid38.segments[26] = HAnimSegment692;

let HAnimSegment693 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment693.USE = "hanim_r_talus";
HAnimHumanoid38.segments[27] = HAnimSegment693;

let HAnimSegment694 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment694.USE = "hanim_l5";
HAnimHumanoid38.segments[28] = HAnimSegment694;

let HAnimSegment695 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment695.USE = "hanim_l_upperarm";
HAnimHumanoid38.segments[29] = HAnimSegment695;

let HAnimSegment696 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment696.USE = "hanim_l_forearm";
HAnimHumanoid38.segments[30] = HAnimSegment696;

let HAnimSegment697 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment697.USE = "hanim_r_upperarm";
HAnimHumanoid38.segments[31] = HAnimSegment697;

let HAnimSegment698 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment698.USE = "hanim_r_forearm";
HAnimHumanoid38.segments[32] = HAnimSegment698;

let HAnimSite699 = browser.currentScene.createNode("HAnimSite");
HAnimSite699.USE = "hanim_buttocks_standing_wall_contact_point";
HAnimHumanoid38.viewpoints[33] = HAnimSite699;

let HAnimSite700 = browser.currentScene.createNode("HAnimSite");
HAnimSite700.USE = "hanim_crotch";
HAnimHumanoid38.viewpoints[34] = HAnimSite700;

let HAnimSite701 = browser.currentScene.createNode("HAnimSite");
HAnimSite701.USE = "hanim_l_asis";
HAnimHumanoid38.viewpoints[35] = HAnimSite701;

let HAnimSite702 = browser.currentScene.createNode("HAnimSite");
HAnimSite702.USE = "hanim_l_iliocristale";
HAnimHumanoid38.viewpoints[36] = HAnimSite702;

let HAnimSite703 = browser.currentScene.createNode("HAnimSite");
HAnimSite703.USE = "hanim_l_psis";
HAnimHumanoid38.viewpoints[37] = HAnimSite703;

let HAnimSite704 = browser.currentScene.createNode("HAnimSite");
HAnimSite704.USE = "hanim_l_trochanterion";
HAnimHumanoid38.viewpoints[38] = HAnimSite704;

let HAnimSite705 = browser.currentScene.createNode("HAnimSite");
HAnimSite705.USE = "hanim_r_asis";
HAnimHumanoid38.viewpoints[39] = HAnimSite705;

let HAnimSite706 = browser.currentScene.createNode("HAnimSite");
HAnimSite706.USE = "hanim_r_iliocristale";
HAnimHumanoid38.viewpoints[40] = HAnimSite706;

let HAnimSite707 = browser.currentScene.createNode("HAnimSite");
HAnimSite707.USE = "hanim_r_psis";
HAnimHumanoid38.viewpoints[41] = HAnimSite707;

let HAnimSite708 = browser.currentScene.createNode("HAnimSite");
HAnimSite708.USE = "hanim_r_trochanterion";
HAnimHumanoid38.viewpoints[42] = HAnimSite708;

let HAnimSite709 = browser.currentScene.createNode("HAnimSite");
HAnimSite709.USE = "hanim_l_femoral_lateral_epicondyles";
HAnimHumanoid38.viewpoints[43] = HAnimSite709;

let HAnimSite710 = browser.currentScene.createNode("HAnimSite");
HAnimSite710.USE = "hanim_l_femoral_medial_epicondyles";
HAnimHumanoid38.viewpoints[44] = HAnimSite710;

let HAnimSite711 = browser.currentScene.createNode("HAnimSite");
HAnimSite711.USE = "hanim_l_knee_crease";
HAnimHumanoid38.viewpoints[45] = HAnimSite711;

let HAnimSite712 = browser.currentScene.createNode("HAnimSite");
HAnimSite712.USE = "hanim_l_suprapatella";
HAnimHumanoid38.viewpoints[46] = HAnimSite712;

let HAnimSite713 = browser.currentScene.createNode("HAnimSite");
HAnimSite713.USE = "hanim_l_lateral_malleolus";
HAnimHumanoid38.viewpoints[47] = HAnimSite713;

let HAnimSite714 = browser.currentScene.createNode("HAnimSite");
HAnimSite714.USE = "hanim_l_medial_malleolus";
HAnimHumanoid38.viewpoints[48] = HAnimSite714;

let HAnimSite715 = browser.currentScene.createNode("HAnimSite");
HAnimSite715.USE = "hanim_l_tibiale";
HAnimHumanoid38.viewpoints[49] = HAnimSite715;

let HAnimSite716 = browser.currentScene.createNode("HAnimSite");
HAnimSite716.USE = "hanim_l_calcaneus_posterior";
HAnimHumanoid38.viewpoints[50] = HAnimSite716;

let HAnimSite717 = browser.currentScene.createNode("HAnimSite");
HAnimSite717.USE = "hanim_l_sphyrion";
HAnimHumanoid38.viewpoints[51] = HAnimSite717;

let HAnimSite718 = browser.currentScene.createNode("HAnimSite");
HAnimSite718.USE = "hanim_r_femoral_lateral_epicondyles";
HAnimHumanoid38.viewpoints[52] = HAnimSite718;

let HAnimSite719 = browser.currentScene.createNode("HAnimSite");
HAnimSite719.USE = "hanim_r_femoral_medial_epicondyles";
HAnimHumanoid38.viewpoints[53] = HAnimSite719;

let HAnimSite720 = browser.currentScene.createNode("HAnimSite");
HAnimSite720.USE = "hanim_r_knee_crease";
HAnimHumanoid38.viewpoints[54] = HAnimSite720;

let HAnimSite721 = browser.currentScene.createNode("HAnimSite");
HAnimSite721.USE = "hanim_r_suprapatella";
HAnimHumanoid38.viewpoints[55] = HAnimSite721;

let HAnimSite722 = browser.currentScene.createNode("HAnimSite");
HAnimSite722.USE = "hanim_r_lateral_malleolus";
HAnimHumanoid38.viewpoints[56] = HAnimSite722;

let HAnimSite723 = browser.currentScene.createNode("HAnimSite");
HAnimSite723.USE = "hanim_r_medial_malleolus";
HAnimHumanoid38.viewpoints[57] = HAnimSite723;

let HAnimSite724 = browser.currentScene.createNode("HAnimSite");
HAnimSite724.USE = "hanim_r_tibiale";
HAnimHumanoid38.viewpoints[58] = HAnimSite724;

let HAnimSite725 = browser.currentScene.createNode("HAnimSite");
HAnimSite725.USE = "hanim_r_calcaneus_posterior";
HAnimHumanoid38.viewpoints[59] = HAnimSite725;

let HAnimSite726 = browser.currentScene.createNode("HAnimSite");
HAnimSite726.USE = "hanim_r_sphyrion";
HAnimHumanoid38.viewpoints[60] = HAnimSite726;

let HAnimSite727 = browser.currentScene.createNode("HAnimSite");
HAnimSite727.USE = "hanim_adams_apple";
HAnimHumanoid38.viewpoints[61] = HAnimSite727;

let HAnimSite728 = browser.currentScene.createNode("HAnimSite");
HAnimSite728.USE = "hanim_cervicale";
HAnimHumanoid38.viewpoints[62] = HAnimSite728;

let HAnimSite729 = browser.currentScene.createNode("HAnimSite");
HAnimSite729.USE = "hanim_l_acromion";
HAnimHumanoid38.viewpoints[63] = HAnimSite729;

let HAnimSite730 = browser.currentScene.createNode("HAnimSite");
HAnimSite730.USE = "hanim_l_axilla_distal";
HAnimHumanoid38.viewpoints[64] = HAnimSite730;

let HAnimSite731 = browser.currentScene.createNode("HAnimSite");
HAnimSite731.USE = "hanim_l_axilla_posterior_folds";
HAnimHumanoid38.viewpoints[65] = HAnimSite731;

let HAnimSite732 = browser.currentScene.createNode("HAnimSite");
HAnimSite732.USE = "hanim_l_axilla_proximal";
HAnimHumanoid38.viewpoints[66] = HAnimSite732;

let HAnimSite733 = browser.currentScene.createNode("HAnimSite");
HAnimSite733.USE = "hanim_l_chest_midsagittal_plane";
HAnimHumanoid38.viewpoints[67] = HAnimSite733;

let HAnimSite734 = browser.currentScene.createNode("HAnimSite");
HAnimSite734.USE = "hanim_l_clavicale";
HAnimHumanoid38.viewpoints[68] = HAnimSite734;

let HAnimSite735 = browser.currentScene.createNode("HAnimSite");
HAnimSite735.USE = "hanim_l_neck_base";
HAnimHumanoid38.viewpoints[69] = HAnimSite735;

let HAnimSite736 = browser.currentScene.createNode("HAnimSite");
HAnimSite736.USE = "hanim_l_rib10";
HAnimHumanoid38.viewpoints[70] = HAnimSite736;

let HAnimSite737 = browser.currentScene.createNode("HAnimSite");
HAnimSite737.USE = "hanim_l_thelion";
HAnimHumanoid38.viewpoints[71] = HAnimSite737;

let HAnimSite738 = browser.currentScene.createNode("HAnimSite");
HAnimSite738.USE = "hanim_mesosternale";
HAnimHumanoid38.viewpoints[72] = HAnimSite738;

let HAnimSite739 = browser.currentScene.createNode("HAnimSite");
HAnimSite739.USE = "hanim_navel";
HAnimHumanoid38.viewpoints[73] = HAnimSite739;

let HAnimSite740 = browser.currentScene.createNode("HAnimSite");
HAnimSite740.USE = "hanim_r_acromion";
HAnimHumanoid38.viewpoints[74] = HAnimSite740;

let HAnimSite741 = browser.currentScene.createNode("HAnimSite");
HAnimSite741.USE = "hanim_r_axilla_distal";
HAnimHumanoid38.viewpoints[75] = HAnimSite741;

let HAnimSite742 = browser.currentScene.createNode("HAnimSite");
HAnimSite742.USE = "hanim_r_axilla_posterior_folds";
HAnimHumanoid38.viewpoints[76] = HAnimSite742;

let HAnimSite743 = browser.currentScene.createNode("HAnimSite");
HAnimSite743.USE = "hanim_r_axilla_proximal";
HAnimHumanoid38.viewpoints[77] = HAnimSite743;

let HAnimSite744 = browser.currentScene.createNode("HAnimSite");
HAnimSite744.USE = "hanim_r_chest_midsagittal_plane";
HAnimHumanoid38.viewpoints[78] = HAnimSite744;

let HAnimSite745 = browser.currentScene.createNode("HAnimSite");
HAnimSite745.USE = "hanim_r_clavicale";
HAnimHumanoid38.viewpoints[79] = HAnimSite745;

let HAnimSite746 = browser.currentScene.createNode("HAnimSite");
HAnimSite746.USE = "hanim_r_neck_base";
HAnimHumanoid38.viewpoints[80] = HAnimSite746;

let HAnimSite747 = browser.currentScene.createNode("HAnimSite");
HAnimSite747.USE = "hanim_r_rib10";
HAnimHumanoid38.viewpoints[81] = HAnimSite747;

let HAnimSite748 = browser.currentScene.createNode("HAnimSite");
HAnimSite748.USE = "hanim_r_thelion";
HAnimHumanoid38.viewpoints[82] = HAnimSite748;

let HAnimSite749 = browser.currentScene.createNode("HAnimSite");
HAnimSite749.USE = "hanim_rear_center_midsagittal_plane";
HAnimHumanoid38.viewpoints[83] = HAnimSite749;

let HAnimSite750 = browser.currentScene.createNode("HAnimSite");
HAnimSite750.USE = "hanim_spine_1_middle_back";
HAnimHumanoid38.viewpoints[84] = HAnimSite750;

let HAnimSite751 = browser.currentScene.createNode("HAnimSite");
HAnimSite751.USE = "hanim_spine_2_middle_back";
HAnimHumanoid38.viewpoints[85] = HAnimSite751;

let HAnimSite752 = browser.currentScene.createNode("HAnimSite");
HAnimSite752.USE = "hanim_substernale";
HAnimHumanoid38.viewpoints[86] = HAnimSite752;

let HAnimSite753 = browser.currentScene.createNode("HAnimSite");
HAnimSite753.USE = "hanim_suprasternale";
HAnimHumanoid38.viewpoints[87] = HAnimSite753;

let HAnimSite754 = browser.currentScene.createNode("HAnimSite");
HAnimSite754.USE = "hanim_waist_preferred_anterior";
HAnimHumanoid38.viewpoints[88] = HAnimSite754;

let HAnimSite755 = browser.currentScene.createNode("HAnimSite");
HAnimSite755.USE = "hanim_waist_preferred_posterior";
HAnimHumanoid38.viewpoints[89] = HAnimSite755;

let HAnimSite756 = browser.currentScene.createNode("HAnimSite");
HAnimSite756.USE = "hanim_l_bideltoid";
HAnimHumanoid38.viewpoints[90] = HAnimSite756;

let HAnimSite757 = browser.currentScene.createNode("HAnimSite");
HAnimSite757.USE = "hanim_l_humeral_lateral_epicondyles";
HAnimHumanoid38.viewpoints[91] = HAnimSite757;

let HAnimSite758 = browser.currentScene.createNode("HAnimSite");
HAnimSite758.USE = "hanim_l_humeral_medial_epicondyles";
HAnimHumanoid38.viewpoints[92] = HAnimSite758;

let HAnimSite759 = browser.currentScene.createNode("HAnimSite");
HAnimSite759.USE = "hanim_l_olecranon";
HAnimHumanoid38.viewpoints[93] = HAnimSite759;

let HAnimSite760 = browser.currentScene.createNode("HAnimSite");
HAnimSite760.USE = "hanim_l_radial_styloid";
HAnimHumanoid38.viewpoints[94] = HAnimSite760;

let HAnimSite761 = browser.currentScene.createNode("HAnimSite");
HAnimSite761.USE = "hanim_l_radiale";
HAnimHumanoid38.viewpoints[95] = HAnimSite761;

let HAnimSite762 = browser.currentScene.createNode("HAnimSite");
HAnimSite762.USE = "hanim_r_bideltoid";
HAnimHumanoid38.viewpoints[96] = HAnimSite762;

let HAnimSite763 = browser.currentScene.createNode("HAnimSite");
HAnimSite763.USE = "hanim_r_humeral_lateral_epicondyles";
HAnimHumanoid38.viewpoints[97] = HAnimSite763;

let HAnimSite764 = browser.currentScene.createNode("HAnimSite");
HAnimSite764.USE = "hanim_r_humeral_medial_epicondyles";
HAnimHumanoid38.viewpoints[98] = HAnimSite764;

let HAnimSite765 = browser.currentScene.createNode("HAnimSite");
HAnimSite765.USE = "hanim_r_olecranon";
HAnimHumanoid38.viewpoints[99] = HAnimSite765;

let HAnimSite766 = browser.currentScene.createNode("HAnimSite");
HAnimSite766.USE = "hanim_r_radial_styloid";
HAnimHumanoid38.viewpoints[100] = HAnimSite766;

let HAnimSite767 = browser.currentScene.createNode("HAnimSite");
HAnimSite767.USE = "hanim_r_radiale";
HAnimHumanoid38.viewpoints[101] = HAnimSite767;

browser.currentScene.children[4] = HAnimHumanoid38;

