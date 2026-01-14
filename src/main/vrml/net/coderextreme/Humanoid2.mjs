const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "Humanoid2.x3d");
scene.addMetaData("identifier", "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d");
scene.addMetaData("description", "An attempt at a standard LOA-4 skeleton");
scene.addMetaData("generator", "h2.pl");
scene.addMetaData("modified", "14 Jan 2023");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("created", "9 November 2020");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let Transform12 = browser.currentScene.createNode("Transform");
//DEF for markerfor XYZ axes
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
let IndexedLineSet14 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet14.colorIndex = new X3D.MFInt32([0,1,2]);
IndexedLineSet14.colorPerVertex = False;
IndexedLineSet14.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Coordinate15 = browser.currentScene.createNode("Coordinate");
Coordinate15.point = new X3D.MFVec3f([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
coord = Coordinate15;

let Color16 = browser.currentScene.createNode("Color");
Color16.color = new X3D.MFColor([1,0,0,0,0.6,0,0,0,1]);
color = Color16;

geometry = IndexedLineSet14;

Transform12YYY.child = new X3D.undefined();

Transform12ZZZ.child[0] = Shape13;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Transform12;

let Group17 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform18 = browser.currentScene.createNode("Transform");
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new X3D.SFVec3f([0,2.1,0]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "HAnimJointShape";
let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 0.02;
geometry = Sphere21;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.DEF = "HAnimJointMaterial";
Material23.diffuseColor = new X3D.SFColor([0,0,0]);
material = Material23;

appearance = Appearance22;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

Transform18YYY.children = new X3D.MFNode();

Transform18ZZZ.children[0] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new X3D.SFVec3f([0,2.05,0]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.DEF = "HAnimSegmentLine";
let LineSet26 = browser.currentScene.createNode("LineSet");
LineSet26.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA27 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA27.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA27.color = new X3D.MFColorRGBA([1,1,0,0,1,1,0,0]);
color = ColorRGBA27;

let Coordinate28 = browser.currentScene.createNode("Coordinate");
Coordinate28.point = new X3D.MFVec3f([-0.05,0,0,0.05,0,0]);
coord = Coordinate28;

geometry = LineSet26;

Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

Transform18ZZZ.children[1] = Transform24;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new X3D.SFVec3f([0,2.1,0]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "HAnimSiteShape";
let IndexedFaceSet31 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet31.DEF = "DiamondIFS";
IndexedFaceSet31.creaseAngle = 0.5;
IndexedFaceSet31.solid = False;
IndexedFaceSet31.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA32 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA32.DEF = "HAnimSiteColorRGBA";
ColorRGBA32.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA32;

let Coordinate33 = browser.currentScene.createNode("Coordinate");
Coordinate33.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate33;

geometry = IndexedFaceSet31;

let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.diffuseColor = new X3D.SFColor([1,1,1]);
Material35.transparency = 1;
material = Material35;

appearance = Appearance34;

Transform29YYY.child = new X3D.undefined();

Transform29ZZZ.child[0] = Shape30;

Transform18ZZZ.children[2] = Transform29;

Group17YYY.children = new X3D.MFNode();

Group17ZZZ.children[0] = Transform18;

browser.currentScene.children[1] = Group17;

let NavigationInfo36 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo36.speed = 1.5;
browser.currentScene.children[2] = NavigationInfo36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.position = new X3D.SFVec3f([0,1,3]);
Viewpoint37.centerOfRotation = new X3D.SFVec3f([0,1,0]);
Viewpoint37.description = "default";
browser.currentScene.children[3] = Viewpoint37;

let HAnimHumanoid38 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid38.name = "HAnim";
HAnimHumanoid38.DEF = "hanim_HAnim";
HAnimHumanoid38.info = new X3D.MFString([new X3D.SFString("humanoidVersion=2.0")]);
HAnimHumanoid38.version = "2.0";
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
let Shape39 = browser.currentScene.createNode("Shape");
Shape39.DEF = "SkinShape";
let IndexedFaceSet40 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet40.coordIndex = new X3D.MFInt32([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet40.creaseAngle = 3.1;
let Coordinate41 = browser.currentScene.createNode("Coordinate");
Coordinate41.DEF = "TheSkinCoord";
Coordinate41.point = new X3D.MFVec3f([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
coord = Coordinate41;

let Color42 = browser.currentScene.createNode("Color");
Color42.color = new X3D.MFColor([1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
color = Color42;

geometry = IndexedFaceSet40;

let Appearance43 = browser.currentScene.createNode("Appearance");
Appearance43.DEF = "SkinAppearance";
let ImageTexture44 = browser.currentScene.createNode("ImageTexture");
ImageTexture44.DEF = "zBlueSpiralBkg2";
ImageTexture44.description = "Blue Spiral Pattern";
ImageTexture44.url = new X3D.MFString([new X3D.SFString("../data/zBlueSpiralBkg2.gif"), new X3D.SFString("zBlueSpiralBkg2.gif"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")]);
texture = ImageTexture44;

let Material45 = browser.currentScene.createNode("Material");
Material45.DEF = "SkinMaterial";
Material45.ambientIntensity = 0.6;
Material45.diffuseColor = new X3D.SFColor([1,1,1]);
Material45.shininess = 0.6;
Material45.transparency = 1;
material = Material45;

appearance = Appearance43;

HAnimHumanoid38.skin = new X3D.MFNode();

HAnimHumanoid38XXX.skin[0] = Shape39;

let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.USE = "TheSkinCoord";
skinCoord = Coordinate46;

let HAnimJoint47 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint47.name = "humanoid_root";
HAnimJoint47.DEF = "hanim_humanoid_root";
HAnimJoint47.center = new X3D.SFVec3f([0,0.824,0.0277]);
HAnimJoint47.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint47.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment48 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment48.name = "sacrum";
HAnimSegment48.DEF = "hanim_sacrum";
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.translation = new X3D.SFVec3f([0,0.824,0.0277]);
let Transform50 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape51 = browser.currentScene.createNode("Shape");
Shape51.USE = "HAnimJointShape";
Transform50YYY.child = new X3D.undefined();

Transform50ZZZ.child[0] = Shape51;

Transform49YYY.children = new X3D.MFNode();

Transform49ZZZ.children[0] = Transform50;

HAnimSegment48YYY.children = new X3D.MFNode();

HAnimSegment48ZZZ.children[0] = Transform49;

let Shape52 = browser.currentScene.createNode("Shape");
let LineSet53 = browser.currentScene.createNode("LineSet");
LineSet53.vertexCount = new X3D.MFInt32([2]);
let Coordinate54 = browser.currentScene.createNode("Coordinate");
Coordinate54.point = new X3D.MFVec3f([0,0.824,0.0277,0,0.9149,0.0016]);
coord = Coordinate54;

//from humanoid_root to sacroiliac vertices 2
let ColorRGBA55 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA55.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA55;

geometry = LineSet53;

HAnimSegment48ZZZ.children[1] = Shape52;

let Shape56 = browser.currentScene.createNode("Shape");
let LineSet57 = browser.currentScene.createNode("LineSet");
LineSet57.vertexCount = new X3D.MFInt32([2]);
let Coordinate58 = browser.currentScene.createNode("Coordinate");
Coordinate58.point = new X3D.MFVec3f([0,0.824,0.0277,0.0028,1.0568,-0.0776]);
coord = Coordinate58;

//from humanoid_root to vl5 vertices 2
let ColorRGBA59 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA59.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA59;

geometry = LineSet57;

HAnimSegment48ZZZ.children[2] = Shape56;

HAnimJoint47YYY.children = new X3D.MFNode();

HAnimJoint47ZZZ.children[0] = HAnimSegment48;

let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "sacroiliac";
HAnimJoint60.DEF = "hanim_sacroiliac";
HAnimJoint60.center = new X3D.SFVec3f([0,0.9149,0.0016]);
HAnimJoint60.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint60.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment61 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment61.name = "pelvis";
HAnimSegment61.DEF = "hanim_pelvis";
let Transform62 = browser.currentScene.createNode("Transform");
Transform62.translation = new X3D.SFVec3f([0,0.9149,0.0016]);
let Transform63 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape64 = browser.currentScene.createNode("Shape");
Shape64.USE = "HAnimJointShape";
Transform63YYY.child = new X3D.undefined();

Transform63ZZZ.child[0] = Shape64;

Transform62YYY.children = new X3D.MFNode();

Transform62ZZZ.children[0] = Transform63;

HAnimSegment61YYY.children = new X3D.MFNode();

HAnimSegment61ZZZ.children[0] = Transform62;

let Shape65 = browser.currentScene.createNode("Shape");
let LineSet66 = browser.currentScene.createNode("LineSet");
LineSet66.vertexCount = new X3D.MFInt32([2]);
let Coordinate67 = browser.currentScene.createNode("Coordinate");
Coordinate67.point = new X3D.MFVec3f([0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
coord = Coordinate67;

//from sacroiliac to l_hip vertices 2
let ColorRGBA68 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA68.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA68;

geometry = LineSet66;

HAnimSegment61ZZZ.children[1] = Shape65;

let HAnimSite69 = browser.currentScene.createNode("HAnimSite");
HAnimSite69.name = "buttocks_standing_wall_contact_point";
HAnimSite69.DEF = "hanim_buttocks_standing_wall_contact_point";
let TouchSensor70 = browser.currentScene.createNode("TouchSensor");
TouchSensor70.description = "HAnimSite 93 buttocks_standing_wall_contact_point";
HAnimSite69YYY.children = new X3D.MFNode();

HAnimSite69ZZZ.children[0] = TouchSensor70;

let Shape71 = browser.currentScene.createNode("Shape");
Shape71.USE = "HAnimSiteShape";
HAnimSite69ZZZ.children[1] = Shape71;

let Billboard72 = browser.currentScene.createNode("Billboard");
let Shape73 = browser.currentScene.createNode("Shape");
let Text74 = browser.currentScene.createNode("Text");
Text74.string = new X3D.MFString([new X3D.SFString("93")]);
let FontStyle75 = browser.currentScene.createNode("FontStyle");
FontStyle75.size = 0.035;
fontStyle = FontStyle75;

geometry = Text74;

Billboard72YYY.children = new X3D.MFNode();

Billboard72ZZZ.children[0] = Shape73;

HAnimSite69ZZZ.children[2] = Billboard72;

HAnimSegment61ZZZ.children[2] = HAnimSite69;

let HAnimSite76 = browser.currentScene.createNode("HAnimSite");
HAnimSite76.name = "crotch";
HAnimSite76.DEF = "hanim_crotch";
HAnimSite76.translation = new X3D.SFVec3f([0.0034,0.8266,0.0257]);
let TouchSensor77 = browser.currentScene.createNode("TouchSensor");
TouchSensor77.description = "HAnimSite 38 crotch";
HAnimSite76YYY.children = new X3D.MFNode();

HAnimSite76ZZZ.children[0] = TouchSensor77;

let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "HAnimSiteShape";
HAnimSite76ZZZ.children[1] = Shape78;

let Billboard79 = browser.currentScene.createNode("Billboard");
let Shape80 = browser.currentScene.createNode("Shape");
let Text81 = browser.currentScene.createNode("Text");
Text81.string = new X3D.MFString([new X3D.SFString("38")]);
let FontStyle82 = browser.currentScene.createNode("FontStyle");
FontStyle82.size = 0.035;
fontStyle = FontStyle82;

geometry = Text81;

Billboard79YYY.children = new X3D.MFNode();

Billboard79ZZZ.children[0] = Shape80;

HAnimSite76ZZZ.children[2] = Billboard79;

HAnimSegment61ZZZ.children[3] = HAnimSite76;

let HAnimSite83 = browser.currentScene.createNode("HAnimSite");
HAnimSite83.name = "l_asis";
HAnimSite83.DEF = "hanim_l_asis";
HAnimSite83.translation = new X3D.SFVec3f([0.0925,0.9983,0.1052]);
let TouchSensor84 = browser.currentScene.createNode("TouchSensor");
TouchSensor84.description = "HAnimSite 32 l_asis";
HAnimSite83YYY.children = new X3D.MFNode();

HAnimSite83ZZZ.children[0] = TouchSensor84;

let Shape85 = browser.currentScene.createNode("Shape");
Shape85.USE = "HAnimSiteShape";
HAnimSite83ZZZ.children[1] = Shape85;

let Billboard86 = browser.currentScene.createNode("Billboard");
let Shape87 = browser.currentScene.createNode("Shape");
let Text88 = browser.currentScene.createNode("Text");
Text88.string = new X3D.MFString([new X3D.SFString("32")]);
let FontStyle89 = browser.currentScene.createNode("FontStyle");
FontStyle89.size = 0.035;
fontStyle = FontStyle89;

geometry = Text88;

Billboard86YYY.children = new X3D.MFNode();

Billboard86ZZZ.children[0] = Shape87;

HAnimSite83ZZZ.children[2] = Billboard86;

HAnimSegment61ZZZ.children[4] = HAnimSite83;

let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.name = "l_iliocristale";
HAnimSite90.DEF = "hanim_l_iliocristale";
HAnimSite90.translation = new X3D.SFVec3f([0.1612,1.0537,0.0008]);
let TouchSensor91 = browser.currentScene.createNode("TouchSensor");
TouchSensor91.description = "HAnimSite 33 l_iliocristale";
HAnimSite90YYY.children = new X3D.MFNode();

HAnimSite90ZZZ.children[0] = TouchSensor91;

let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "HAnimSiteShape";
HAnimSite90ZZZ.children[1] = Shape92;

let Billboard93 = browser.currentScene.createNode("Billboard");
let Shape94 = browser.currentScene.createNode("Shape");
let Text95 = browser.currentScene.createNode("Text");
Text95.string = new X3D.MFString([new X3D.SFString("33")]);
let FontStyle96 = browser.currentScene.createNode("FontStyle");
FontStyle96.size = 0.035;
fontStyle = FontStyle96;

geometry = Text95;

Billboard93YYY.children = new X3D.MFNode();

Billboard93ZZZ.children[0] = Shape94;

HAnimSite90ZZZ.children[2] = Billboard93;

HAnimSegment61ZZZ.children[5] = HAnimSite90;

let HAnimSite97 = browser.currentScene.createNode("HAnimSite");
HAnimSite97.name = "l_psis";
HAnimSite97.DEF = "hanim_l_psis";
HAnimSite97.translation = new X3D.SFVec3f([0.0774,1.019,-0.1151]);
let TouchSensor98 = browser.currentScene.createNode("TouchSensor");
TouchSensor98.description = "HAnimSite 34 l_psis";
HAnimSite97YYY.children = new X3D.MFNode();

HAnimSite97ZZZ.children[0] = TouchSensor98;

let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "HAnimSiteShape";
HAnimSite97ZZZ.children[1] = Shape99;

let Billboard100 = browser.currentScene.createNode("Billboard");
let Shape101 = browser.currentScene.createNode("Shape");
let Text102 = browser.currentScene.createNode("Text");
Text102.string = new X3D.MFString([new X3D.SFString("34")]);
let FontStyle103 = browser.currentScene.createNode("FontStyle");
FontStyle103.size = 0.035;
fontStyle = FontStyle103;

geometry = Text102;

Billboard100YYY.children = new X3D.MFNode();

Billboard100ZZZ.children[0] = Shape101;

HAnimSite97ZZZ.children[2] = Billboard100;

HAnimSegment61ZZZ.children[6] = HAnimSite97;

let HAnimSite104 = browser.currentScene.createNode("HAnimSite");
HAnimSite104.name = "l_trochanterion";
HAnimSite104.DEF = "hanim_l_trochanterion";
HAnimSite104.translation = new X3D.SFVec3f([0.1677,0.8336,0.0303]);
let TouchSensor105 = browser.currentScene.createNode("TouchSensor");
TouchSensor105.description = "HAnimSite 42 l_trochanterion";
HAnimSite104YYY.children = new X3D.MFNode();

HAnimSite104ZZZ.children[0] = TouchSensor105;

let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "HAnimSiteShape";
HAnimSite104ZZZ.children[1] = Shape106;

let Billboard107 = browser.currentScene.createNode("Billboard");
let Shape108 = browser.currentScene.createNode("Shape");
let Text109 = browser.currentScene.createNode("Text");
Text109.string = new X3D.MFString([new X3D.SFString("42")]);
let FontStyle110 = browser.currentScene.createNode("FontStyle");
FontStyle110.size = 0.035;
fontStyle = FontStyle110;

geometry = Text109;

Billboard107YYY.children = new X3D.MFNode();

Billboard107ZZZ.children[0] = Shape108;

HAnimSite104ZZZ.children[2] = Billboard107;

HAnimSegment61ZZZ.children[7] = HAnimSite104;

let HAnimSite111 = browser.currentScene.createNode("HAnimSite");
HAnimSite111.name = "r_asis";
HAnimSite111.DEF = "hanim_r_asis";
HAnimSite111.translation = new X3D.SFVec3f([-0.0887,1.0021,0.1112]);
let TouchSensor112 = browser.currentScene.createNode("TouchSensor");
TouchSensor112.description = "HAnimSite 35 r_asis";
HAnimSite111YYY.children = new X3D.MFNode();

HAnimSite111ZZZ.children[0] = TouchSensor112;

let Shape113 = browser.currentScene.createNode("Shape");
Shape113.USE = "HAnimSiteShape";
HAnimSite111ZZZ.children[1] = Shape113;

let Billboard114 = browser.currentScene.createNode("Billboard");
let Shape115 = browser.currentScene.createNode("Shape");
let Text116 = browser.currentScene.createNode("Text");
Text116.string = new X3D.MFString([new X3D.SFString("35")]);
let FontStyle117 = browser.currentScene.createNode("FontStyle");
FontStyle117.size = 0.035;
fontStyle = FontStyle117;

geometry = Text116;

Billboard114YYY.children = new X3D.MFNode();

Billboard114ZZZ.children[0] = Shape115;

HAnimSite111ZZZ.children[2] = Billboard114;

HAnimSegment61ZZZ.children[8] = HAnimSite111;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.name = "r_iliocristale";
HAnimSite118.DEF = "hanim_r_iliocristale";
HAnimSite118.translation = new X3D.SFVec3f([-0.1525,1.0628,0.0035]);
let TouchSensor119 = browser.currentScene.createNode("TouchSensor");
TouchSensor119.description = "HAnimSite 36 r_iliocristale";
HAnimSite118YYY.children = new X3D.MFNode();

HAnimSite118ZZZ.children[0] = TouchSensor119;

let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "HAnimSiteShape";
HAnimSite118ZZZ.children[1] = Shape120;

let Billboard121 = browser.currentScene.createNode("Billboard");
let Shape122 = browser.currentScene.createNode("Shape");
let Text123 = browser.currentScene.createNode("Text");
Text123.string = new X3D.MFString([new X3D.SFString("36")]);
let FontStyle124 = browser.currentScene.createNode("FontStyle");
FontStyle124.size = 0.035;
fontStyle = FontStyle124;

geometry = Text123;

Billboard121YYY.children = new X3D.MFNode();

Billboard121ZZZ.children[0] = Shape122;

HAnimSite118ZZZ.children[2] = Billboard121;

HAnimSegment61ZZZ.children[9] = HAnimSite118;

let HAnimSite125 = browser.currentScene.createNode("HAnimSite");
HAnimSite125.name = "r_psis";
HAnimSite125.DEF = "hanim_r_psis";
HAnimSite125.translation = new X3D.SFVec3f([-0.0716,1.019,-0.1138]);
let TouchSensor126 = browser.currentScene.createNode("TouchSensor");
TouchSensor126.description = "HAnimSite 37 r_psis";
HAnimSite125YYY.children = new X3D.MFNode();

HAnimSite125ZZZ.children[0] = TouchSensor126;

let Shape127 = browser.currentScene.createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125ZZZ.children[1] = Shape127;

let Billboard128 = browser.currentScene.createNode("Billboard");
let Shape129 = browser.currentScene.createNode("Shape");
let Text130 = browser.currentScene.createNode("Text");
Text130.string = new X3D.MFString([new X3D.SFString("37")]);
let FontStyle131 = browser.currentScene.createNode("FontStyle");
FontStyle131.size = 0.035;
fontStyle = FontStyle131;

geometry = Text130;

Billboard128YYY.children = new X3D.MFNode();

Billboard128ZZZ.children[0] = Shape129;

HAnimSite125ZZZ.children[2] = Billboard128;

HAnimSegment61ZZZ.children[10] = HAnimSite125;

let HAnimSite132 = browser.currentScene.createNode("HAnimSite");
HAnimSite132.name = "r_trochanterion";
HAnimSite132.DEF = "hanim_r_trochanterion";
HAnimSite132.translation = new X3D.SFVec3f([-0.1689,0.8419,0.0352]);
let TouchSensor133 = browser.currentScene.createNode("TouchSensor");
TouchSensor133.description = "HAnimSite 46 r_trochanterion";
HAnimSite132YYY.children = new X3D.MFNode();

HAnimSite132ZZZ.children[0] = TouchSensor133;

let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132ZZZ.children[1] = Shape134;

let Billboard135 = browser.currentScene.createNode("Billboard");
let Shape136 = browser.currentScene.createNode("Shape");
let Text137 = browser.currentScene.createNode("Text");
Text137.string = new X3D.MFString([new X3D.SFString("46")]);
let FontStyle138 = browser.currentScene.createNode("FontStyle");
FontStyle138.size = 0.035;
fontStyle = FontStyle138;

geometry = Text137;

Billboard135YYY.children = new X3D.MFNode();

Billboard135ZZZ.children[0] = Shape136;

HAnimSite132ZZZ.children[2] = Billboard135;

HAnimSegment61ZZZ.children[11] = HAnimSite132;

let Shape139 = browser.currentScene.createNode("Shape");
let LineSet140 = browser.currentScene.createNode("LineSet");
LineSet140.vertexCount = new X3D.MFInt32([2]);
let Coordinate141 = browser.currentScene.createNode("Coordinate");
Coordinate141.point = new X3D.MFVec3f([0,0.9149,0.0016,-0.095,0.9171,0.0029]);
coord = Coordinate141;

//from sacroiliac to r_hip vertices 2
let ColorRGBA142 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA142.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA142;

geometry = LineSet140;

HAnimSegment61ZZZ.children[12] = Shape139;

HAnimJoint60YYY.children = new X3D.MFNode();

HAnimJoint60ZZZ.children[0] = HAnimSegment61;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.name = "l_hip";
HAnimJoint143.DEF = "hanim_l_hip";
HAnimJoint143.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
HAnimJoint143.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint143.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.name = "l_thigh";
HAnimSegment144.DEF = "hanim_l_thigh";
let Transform145 = browser.currentScene.createNode("Transform");
Transform145.translation = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
let Transform146 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape147 = browser.currentScene.createNode("Shape");
Shape147.USE = "HAnimJointShape";
Transform146YYY.child = new X3D.undefined();

Transform146ZZZ.child[0] = Shape147;

Transform145YYY.children = new X3D.MFNode();

Transform145ZZZ.children[0] = Transform146;

HAnimSegment144YYY.children = new X3D.MFNode();

HAnimSegment144ZZZ.children[0] = Transform145;

let Shape148 = browser.currentScene.createNode("Shape");
let LineSet149 = browser.currentScene.createNode("LineSet");
LineSet149.vertexCount = new X3D.MFInt32([2]);
let Coordinate150 = browser.currentScene.createNode("Coordinate");
Coordinate150.point = new X3D.MFVec3f([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
coord = Coordinate150;

//from l_hip to l_knee vertices 2
let ColorRGBA151 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA151.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA151;

geometry = LineSet149;

HAnimSegment144ZZZ.children[1] = Shape148;

let HAnimSite152 = browser.currentScene.createNode("HAnimSite");
HAnimSite152.name = "l_femoral_lateral_epicondyles";
HAnimSite152.DEF = "hanim_l_femoral_lateral_epicondyles";
HAnimSite152.translation = new X3D.SFVec3f([0.1598,0.4967,0.0297]);
let TouchSensor153 = browser.currentScene.createNode("TouchSensor");
TouchSensor153.description = "HAnimSite 40 l_femoral_lateral_epicondyles";
HAnimSite152YYY.children = new X3D.MFNode();

HAnimSite152ZZZ.children[0] = TouchSensor153;

let Shape154 = browser.currentScene.createNode("Shape");
Shape154.USE = "HAnimSiteShape";
HAnimSite152ZZZ.children[1] = Shape154;

let Billboard155 = browser.currentScene.createNode("Billboard");
let Shape156 = browser.currentScene.createNode("Shape");
let Text157 = browser.currentScene.createNode("Text");
Text157.string = new X3D.MFString([new X3D.SFString("40")]);
let FontStyle158 = browser.currentScene.createNode("FontStyle");
FontStyle158.size = 0.035;
fontStyle = FontStyle158;

geometry = Text157;

Billboard155YYY.children = new X3D.MFNode();

Billboard155ZZZ.children[0] = Shape156;

HAnimSite152ZZZ.children[2] = Billboard155;

HAnimSegment144ZZZ.children[2] = HAnimSite152;

let HAnimSite159 = browser.currentScene.createNode("HAnimSite");
HAnimSite159.name = "l_femoral_medial_epicondyles";
HAnimSite159.DEF = "hanim_l_femoral_medial_epicondyles";
HAnimSite159.translation = new X3D.SFVec3f([0.0398,0.4946,0.0303]);
let TouchSensor160 = browser.currentScene.createNode("TouchSensor");
TouchSensor160.description = "HAnimSite 39 l_femoral_medial_epicondyles";
HAnimSite159YYY.children = new X3D.MFNode();

HAnimSite159ZZZ.children[0] = TouchSensor160;

let Shape161 = browser.currentScene.createNode("Shape");
Shape161.USE = "HAnimSiteShape";
HAnimSite159ZZZ.children[1] = Shape161;

let Billboard162 = browser.currentScene.createNode("Billboard");
let Shape163 = browser.currentScene.createNode("Shape");
let Text164 = browser.currentScene.createNode("Text");
Text164.string = new X3D.MFString([new X3D.SFString("39")]);
let FontStyle165 = browser.currentScene.createNode("FontStyle");
FontStyle165.size = 0.035;
fontStyle = FontStyle165;

geometry = Text164;

Billboard162YYY.children = new X3D.MFNode();

Billboard162ZZZ.children[0] = Shape163;

HAnimSite159ZZZ.children[2] = Billboard162;

HAnimSegment144ZZZ.children[3] = HAnimSite159;

let HAnimSite166 = browser.currentScene.createNode("HAnimSite");
HAnimSite166.name = "l_knee_crease";
HAnimSite166.DEF = "hanim_l_knee_crease";
HAnimSite166.translation = new X3D.SFVec3f([0.0993,0.4881,-0.0309]);
let TouchSensor167 = browser.currentScene.createNode("TouchSensor");
TouchSensor167.description = "HAnimSite 90 l_knee_crease";
HAnimSite166YYY.children = new X3D.MFNode();

HAnimSite166ZZZ.children[0] = TouchSensor167;

let Shape168 = browser.currentScene.createNode("Shape");
Shape168.USE = "HAnimSiteShape";
HAnimSite166ZZZ.children[1] = Shape168;

let Billboard169 = browser.currentScene.createNode("Billboard");
let Shape170 = browser.currentScene.createNode("Shape");
let Text171 = browser.currentScene.createNode("Text");
Text171.string = new X3D.MFString([new X3D.SFString("90")]);
let FontStyle172 = browser.currentScene.createNode("FontStyle");
FontStyle172.size = 0.035;
fontStyle = FontStyle172;

geometry = Text171;

Billboard169YYY.children = new X3D.MFNode();

Billboard169ZZZ.children[0] = Shape170;

HAnimSite166ZZZ.children[2] = Billboard169;

HAnimSegment144ZZZ.children[4] = HAnimSite166;

let HAnimSite173 = browser.currentScene.createNode("HAnimSite");
HAnimSite173.name = "l_suprapatella";
HAnimSite173.DEF = "hanim_l_suprapatella";
let TouchSensor174 = browser.currentScene.createNode("TouchSensor");
TouchSensor174.description = "HAnimSite 41 l_suprapatella";
HAnimSite173YYY.children = new X3D.MFNode();

HAnimSite173ZZZ.children[0] = TouchSensor174;

let Shape175 = browser.currentScene.createNode("Shape");
Shape175.USE = "HAnimSiteShape";
HAnimSite173ZZZ.children[1] = Shape175;

let Billboard176 = browser.currentScene.createNode("Billboard");
let Shape177 = browser.currentScene.createNode("Shape");
let Text178 = browser.currentScene.createNode("Text");
Text178.string = new X3D.MFString([new X3D.SFString("41")]);
let FontStyle179 = browser.currentScene.createNode("FontStyle");
FontStyle179.size = 0.035;
fontStyle = FontStyle179;

geometry = Text178;

Billboard176YYY.children = new X3D.MFNode();

Billboard176ZZZ.children[0] = Shape177;

HAnimSite173ZZZ.children[2] = Billboard176;

HAnimSegment144ZZZ.children[5] = HAnimSite173;

HAnimJoint143YYY.children = new X3D.MFNode();

HAnimJoint143ZZZ.children[0] = HAnimSegment144;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.name = "l_knee";
HAnimJoint180.DEF = "hanim_l_knee";
HAnimJoint180.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
HAnimJoint180.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint180.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment181.name = "l_calf";
HAnimSegment181.DEF = "hanim_l_calf";
let Transform182 = browser.currentScene.createNode("Transform");
Transform182.translation = new X3D.SFVec3f([0.104,0.4867,0.0308]);
let Transform183 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape184 = browser.currentScene.createNode("Shape");
Shape184.USE = "HAnimJointShape";
Transform183YYY.child = new X3D.undefined();

Transform183ZZZ.child[0] = Shape184;

Transform182YYY.children = new X3D.MFNode();

Transform182ZZZ.children[0] = Transform183;

HAnimSegment181YYY.children = new X3D.MFNode();

HAnimSegment181ZZZ.children[0] = Transform182;

let Shape185 = browser.currentScene.createNode("Shape");
let LineSet186 = browser.currentScene.createNode("LineSet");
LineSet186.vertexCount = new X3D.MFInt32([2]);
let Coordinate187 = browser.currentScene.createNode("Coordinate");
Coordinate187.point = new X3D.MFVec3f([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
coord = Coordinate187;

//from l_knee to l_talocrural vertices 2
let ColorRGBA188 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA188;

geometry = LineSet186;

HAnimSegment181ZZZ.children[1] = Shape185;

let HAnimSite189 = browser.currentScene.createNode("HAnimSite");
HAnimSite189.name = "l_lateral_malleolus";
HAnimSite189.DEF = "hanim_l_lateral_malleolus";
HAnimSite189.translation = new X3D.SFVec3f([0.1308,0.0597,-0.1032]);
let TouchSensor190 = browser.currentScene.createNode("TouchSensor");
TouchSensor190.description = "HAnimSite 49 l_lateral_malleolus";
HAnimSite189YYY.children = new X3D.MFNode();

HAnimSite189ZZZ.children[0] = TouchSensor190;

let Shape191 = browser.currentScene.createNode("Shape");
Shape191.USE = "HAnimSiteShape";
HAnimSite189ZZZ.children[1] = Shape191;

let Billboard192 = browser.currentScene.createNode("Billboard");
let Shape193 = browser.currentScene.createNode("Shape");
let Text194 = browser.currentScene.createNode("Text");
Text194.string = new X3D.MFString([new X3D.SFString("49")]);
let FontStyle195 = browser.currentScene.createNode("FontStyle");
FontStyle195.size = 0.035;
fontStyle = FontStyle195;

geometry = Text194;

Billboard192YYY.children = new X3D.MFNode();

Billboard192ZZZ.children[0] = Shape193;

HAnimSite189ZZZ.children[2] = Billboard192;

HAnimSegment181ZZZ.children[2] = HAnimSite189;

let HAnimSite196 = browser.currentScene.createNode("HAnimSite");
HAnimSite196.name = "l_medial_malleolus";
HAnimSite196.DEF = "hanim_l_medial_malleolus";
HAnimSite196.translation = new X3D.SFVec3f([0.089,0.0716,-0.0881]);
let TouchSensor197 = browser.currentScene.createNode("TouchSensor");
TouchSensor197.description = "HAnimSite 48 l_medial_malleolus";
HAnimSite196YYY.children = new X3D.MFNode();

HAnimSite196ZZZ.children[0] = TouchSensor197;

let Shape198 = browser.currentScene.createNode("Shape");
Shape198.USE = "HAnimSiteShape";
HAnimSite196ZZZ.children[1] = Shape198;

let Billboard199 = browser.currentScene.createNode("Billboard");
let Shape200 = browser.currentScene.createNode("Shape");
let Text201 = browser.currentScene.createNode("Text");
Text201.string = new X3D.MFString([new X3D.SFString("48")]);
let FontStyle202 = browser.currentScene.createNode("FontStyle");
FontStyle202.size = 0.035;
fontStyle = FontStyle202;

geometry = Text201;

Billboard199YYY.children = new X3D.MFNode();

Billboard199ZZZ.children[0] = Shape200;

HAnimSite196ZZZ.children[2] = Billboard199;

HAnimSegment181ZZZ.children[3] = HAnimSite196;

let HAnimSite203 = browser.currentScene.createNode("HAnimSite");
HAnimSite203.name = "l_tibiale";
HAnimSite203.DEF = "hanim_l_tibiale";
let TouchSensor204 = browser.currentScene.createNode("TouchSensor");
TouchSensor204.description = "HAnimSite 47 l_tibiale";
HAnimSite203YYY.children = new X3D.MFNode();

HAnimSite203ZZZ.children[0] = TouchSensor204;

let Shape205 = browser.currentScene.createNode("Shape");
Shape205.USE = "HAnimSiteShape";
HAnimSite203ZZZ.children[1] = Shape205;

let Billboard206 = browser.currentScene.createNode("Billboard");
let Shape207 = browser.currentScene.createNode("Shape");
let Text208 = browser.currentScene.createNode("Text");
Text208.string = new X3D.MFString([new X3D.SFString("47")]);
let FontStyle209 = browser.currentScene.createNode("FontStyle");
FontStyle209.size = 0.035;
fontStyle = FontStyle209;

geometry = Text208;

Billboard206YYY.children = new X3D.MFNode();

Billboard206ZZZ.children[0] = Shape207;

HAnimSite203ZZZ.children[2] = Billboard206;

HAnimSegment181ZZZ.children[4] = HAnimSite203;

HAnimJoint180YYY.children = new X3D.MFNode();

HAnimJoint180ZZZ.children[0] = HAnimSegment181;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.name = "l_talocrural";
HAnimJoint210.DEF = "hanim_l_talocrural";
HAnimJoint210.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
HAnimJoint210.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint210.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment211 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment211.name = "l_talus";
HAnimSegment211.DEF = "hanim_l_talus";
let Transform212 = browser.currentScene.createNode("Transform");
Transform212.scale = new X3D.SFVec3f([0.15,0.15,0.15]);
Transform212.translation = new X3D.SFVec3f([0.08,0.06,-0.025]);
Transform212.rotation = new X3D.SFRotation([1,0,0,-1.57]);
//Transform left foot
let Transform213 = browser.currentScene.createNode("Transform");
//Empty Transform left foot
let Shape214 = browser.currentScene.createNode("Shape");
Shape214.USE = "HAnimJointShape";
Transform213YYY.child = new X3D.undefined();

Transform213ZZZ.child[0] = Shape214;

Transform212YYY.children = new X3D.MFNode();

Transform212ZZZ.children[0] = Transform213;

HAnimSegment211YYY.children = new X3D.MFNode();

HAnimSegment211ZZZ.children[0] = Transform212;

let Shape215 = browser.currentScene.createNode("Shape");
let LineSet216 = browser.currentScene.createNode("LineSet");
LineSet216.vertexCount = new X3D.MFInt32([2]);
let Coordinate217 = browser.currentScene.createNode("Coordinate");
Coordinate217.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608]);
coord = Coordinate217;

//from l_talocrural to l_tarsometatarsal_2 vertices 2
let ColorRGBA218 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA218.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA218;

geometry = LineSet216;

HAnimSegment211ZZZ.children[1] = Shape215;

let HAnimSite219 = browser.currentScene.createNode("HAnimSite");
HAnimSite219.name = "l_calcaneus_posterior";
HAnimSite219.DEF = "hanim_l_calcaneus_posterior";
HAnimSite219.translation = new X3D.SFVec3f([0.0974,0.0259,-0.1171]);
let TouchSensor220 = browser.currentScene.createNode("TouchSensor");
TouchSensor220.description = "HAnimSite 58 l_calcaneus_posterior";
HAnimSite219YYY.children = new X3D.MFNode();

HAnimSite219ZZZ.children[0] = TouchSensor220;

let Shape221 = browser.currentScene.createNode("Shape");
Shape221.USE = "HAnimSiteShape";
HAnimSite219ZZZ.children[1] = Shape221;

let Billboard222 = browser.currentScene.createNode("Billboard");
let Shape223 = browser.currentScene.createNode("Shape");
let Text224 = browser.currentScene.createNode("Text");
Text224.string = new X3D.MFString([new X3D.SFString("58")]);
let FontStyle225 = browser.currentScene.createNode("FontStyle");
FontStyle225.size = 0.035;
fontStyle = FontStyle225;

geometry = Text224;

Billboard222YYY.children = new X3D.MFNode();

Billboard222ZZZ.children[0] = Shape223;

HAnimSite219ZZZ.children[2] = Billboard222;

HAnimSegment211ZZZ.children[2] = HAnimSite219;

let HAnimSite226 = browser.currentScene.createNode("HAnimSite");
HAnimSite226.name = "l_sphyrion";
HAnimSite226.DEF = "hanim_l_sphyrion";
HAnimSite226.translation = new X3D.SFVec3f([0.089,0.0575,-0.0943]);
let TouchSensor227 = browser.currentScene.createNode("TouchSensor");
TouchSensor227.description = "HAnimSite 50 l_sphyrion";
HAnimSite226YYY.children = new X3D.MFNode();

HAnimSite226ZZZ.children[0] = TouchSensor227;

let Shape228 = browser.currentScene.createNode("Shape");
Shape228.USE = "HAnimSiteShape";
HAnimSite226ZZZ.children[1] = Shape228;

let Billboard229 = browser.currentScene.createNode("Billboard");
let Shape230 = browser.currentScene.createNode("Shape");
let Text231 = browser.currentScene.createNode("Text");
Text231.string = new X3D.MFString([new X3D.SFString("50")]);
let FontStyle232 = browser.currentScene.createNode("FontStyle");
FontStyle232.size = 0.035;
fontStyle = FontStyle232;

geometry = Text231;

Billboard229YYY.children = new X3D.MFNode();

Billboard229ZZZ.children[0] = Shape230;

HAnimSite226ZZZ.children[2] = Billboard229;

HAnimSegment211ZZZ.children[3] = HAnimSite226;

HAnimJoint210YYY.children = new X3D.MFNode();

HAnimJoint210ZZZ.children[0] = HAnimSegment211;

let HAnimJoint233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint233.name = "l_tarsometatarsal_2";
HAnimJoint233.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint233.center = new X3D.SFVec3f([0.08,0.0175,-0.0608]);
HAnimJoint233.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint233.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment234 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment234.name = "l_metatarsal_2";
HAnimSegment234.DEF = "hanim_l_metatarsal_2";
let Transform235 = browser.currentScene.createNode("Transform");
Transform235.translation = new X3D.SFVec3f([0.08,0.0175,-0.0608]);
let Transform236 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape237 = browser.currentScene.createNode("Shape");
Shape237.USE = "HAnimJointShape";
Transform236YYY.child = new X3D.undefined();

Transform236ZZZ.child[0] = Shape237;

Transform235YYY.children = new X3D.MFNode();

Transform235ZZZ.children[0] = Transform236;

HAnimSegment234YYY.children = new X3D.MFNode();

HAnimSegment234ZZZ.children[0] = Transform235;

let Shape238 = browser.currentScene.createNode("Shape");
let LineSet239 = browser.currentScene.createNode("LineSet");
LineSet239.vertexCount = new X3D.MFInt32([2]);
let Coordinate240 = browser.currentScene.createNode("Coordinate");
Coordinate240.point = new X3D.MFVec3f([0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
coord = Coordinate240;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
let ColorRGBA241 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA241.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA241;

geometry = LineSet239;

HAnimSegment234ZZZ.children[1] = Shape238;

HAnimJoint233YYY.children = new X3D.MFNode();

HAnimJoint233ZZZ.children[0] = HAnimSegment234;

let HAnimJoint242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint242.name = "l_metatarsophalangeal_2";
HAnimJoint242.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint242.center = new X3D.SFVec3f([0.0824,0.0064,-0.004]);
HAnimJoint242.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint242.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment243 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment243.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment243.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform244 = browser.currentScene.createNode("Transform");
Transform244.translation = new X3D.SFVec3f([0.0824,0.0064,-0.004]);
let Transform245 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape246 = browser.currentScene.createNode("Shape");
Shape246.USE = "HAnimJointShape";
Transform245YYY.child = new X3D.undefined();

Transform245ZZZ.child[0] = Shape246;

Transform244YYY.children = new X3D.MFNode();

Transform244ZZZ.children[0] = Transform245;

HAnimSegment243YYY.children = new X3D.MFNode();

HAnimSegment243ZZZ.children[0] = Transform244;

let Shape247 = browser.currentScene.createNode("Shape");
let LineSet248 = browser.currentScene.createNode("LineSet");
LineSet248.vertexCount = new X3D.MFInt32([2]);
let Coordinate249 = browser.currentScene.createNode("Coordinate");
Coordinate249.point = new X3D.MFVec3f([0.0824,0.0064,-0.004,0.0841,0.0013,0.0216]);
coord = Coordinate249;

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA250 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA250.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA250;

geometry = LineSet248;

HAnimSegment243ZZZ.children[1] = Shape247;

let HAnimSite251 = browser.currentScene.createNode("HAnimSite");
HAnimSite251.name = "l_metatarsal_phalanx_1";
HAnimSite251.DEF = "hanim_l_metatarsal_phalanx_1";
let TouchSensor252 = browser.currentScene.createNode("TouchSensor");
TouchSensor252.description = "HAnimSite 55 l_metatarsal_phalanx_1";
HAnimSite251YYY.children = new X3D.MFNode();

HAnimSite251ZZZ.children[0] = TouchSensor252;

let Shape253 = browser.currentScene.createNode("Shape");
Shape253.USE = "HAnimSiteShape";
HAnimSite251ZZZ.children[1] = Shape253;

let Billboard254 = browser.currentScene.createNode("Billboard");
let Shape255 = browser.currentScene.createNode("Shape");
let Text256 = browser.currentScene.createNode("Text");
Text256.string = new X3D.MFString([new X3D.SFString("55")]);
let FontStyle257 = browser.currentScene.createNode("FontStyle");
FontStyle257.size = 0.035;
fontStyle = FontStyle257;

geometry = Text256;

Billboard254YYY.children = new X3D.MFNode();

Billboard254ZZZ.children[0] = Shape255;

HAnimSite251ZZZ.children[2] = Billboard254;

HAnimSegment243ZZZ.children[2] = HAnimSite251;

let HAnimSite258 = browser.currentScene.createNode("HAnimSite");
HAnimSite258.name = "l_metatarsal_phalanx_5";
HAnimSite258.DEF = "hanim_l_metatarsal_phalanx_5";
let TouchSensor259 = browser.currentScene.createNode("TouchSensor");
TouchSensor259.description = "HAnimSite 56 l_metatarsal_phalanx_5";
HAnimSite258YYY.children = new X3D.MFNode();

HAnimSite258ZZZ.children[0] = TouchSensor259;

let Shape260 = browser.currentScene.createNode("Shape");
Shape260.USE = "HAnimSiteShape";
HAnimSite258ZZZ.children[1] = Shape260;

let Billboard261 = browser.currentScene.createNode("Billboard");
let Shape262 = browser.currentScene.createNode("Shape");
let Text263 = browser.currentScene.createNode("Text");
Text263.string = new X3D.MFString([new X3D.SFString("56")]);
let FontStyle264 = browser.currentScene.createNode("FontStyle");
FontStyle264.size = 0.035;
fontStyle = FontStyle264;

geometry = Text263;

Billboard261YYY.children = new X3D.MFNode();

Billboard261ZZZ.children[0] = Shape262;

HAnimSite258ZZZ.children[2] = Billboard261;

HAnimSegment243ZZZ.children[3] = HAnimSite258;

let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite265.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
let TouchSensor266 = browser.currentScene.createNode("TouchSensor");
TouchSensor266.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite265YYY.children = new X3D.MFNode();

HAnimSite265ZZZ.children[0] = TouchSensor266;

let Shape267 = browser.currentScene.createNode("Shape");
Shape267.USE = "HAnimSiteShape";
HAnimSite265ZZZ.children[1] = Shape267;

let Billboard268 = browser.currentScene.createNode("Billboard");
let Shape269 = browser.currentScene.createNode("Shape");
let Text270 = browser.currentScene.createNode("Text");
Text270.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle271 = browser.currentScene.createNode("FontStyle");
FontStyle271.size = 0.035;
fontStyle = FontStyle271;

geometry = Text270;

Billboard268YYY.children = new X3D.MFNode();

Billboard268ZZZ.children[0] = Shape269;

HAnimSite265ZZZ.children[2] = Billboard268;

HAnimSegment243ZZZ.children[4] = HAnimSite265;

let HAnimSite272 = browser.currentScene.createNode("HAnimSite");
HAnimSite272.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite272.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite272.translation = new X3D.SFVec3f([0.1195,0.0079,0.1433]);
let TouchSensor273 = browser.currentScene.createNode("TouchSensor");
TouchSensor273.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite272YYY.children = new X3D.MFNode();

HAnimSite272ZZZ.children[0] = TouchSensor273;

let Shape274 = browser.currentScene.createNode("Shape");
Shape274.USE = "HAnimSiteShape";
HAnimSite272ZZZ.children[1] = Shape274;

let Billboard275 = browser.currentScene.createNode("Billboard");
let Shape276 = browser.currentScene.createNode("Shape");
let Text277 = browser.currentScene.createNode("Text");
Text277.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle278 = browser.currentScene.createNode("FontStyle");
FontStyle278.size = 0.035;
fontStyle = FontStyle278;

geometry = Text277;

Billboard275YYY.children = new X3D.MFNode();

Billboard275ZZZ.children[0] = Shape276;

HAnimSite272ZZZ.children[2] = Billboard275;

HAnimSegment243ZZZ.children[5] = HAnimSite272;

let HAnimSite279 = browser.currentScene.createNode("HAnimSite");
HAnimSite279.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite279.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
let TouchSensor280 = browser.currentScene.createNode("TouchSensor");
TouchSensor280.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite279YYY.children = new X3D.MFNode();

HAnimSite279ZZZ.children[0] = TouchSensor280;

let Shape281 = browser.currentScene.createNode("Shape");
Shape281.USE = "HAnimSiteShape";
HAnimSite279ZZZ.children[1] = Shape281;

let Billboard282 = browser.currentScene.createNode("Billboard");
let Shape283 = browser.currentScene.createNode("Shape");
let Text284 = browser.currentScene.createNode("Text");
Text284.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle285 = browser.currentScene.createNode("FontStyle");
FontStyle285.size = 0.035;
fontStyle = FontStyle285;

geometry = Text284;

Billboard282YYY.children = new X3D.MFNode();

Billboard282ZZZ.children[0] = Shape283;

HAnimSite279ZZZ.children[2] = Billboard282;

HAnimSegment243ZZZ.children[6] = HAnimSite279;

let HAnimSite286 = browser.currentScene.createNode("HAnimSite");
HAnimSite286.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite286.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
let TouchSensor287 = browser.currentScene.createNode("TouchSensor");
TouchSensor287.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite286YYY.children = new X3D.MFNode();

HAnimSite286ZZZ.children[0] = TouchSensor287;

let Shape288 = browser.currentScene.createNode("Shape");
Shape288.USE = "HAnimSiteShape";
HAnimSite286ZZZ.children[1] = Shape288;

let Billboard289 = browser.currentScene.createNode("Billboard");
let Shape290 = browser.currentScene.createNode("Shape");
let Text291 = browser.currentScene.createNode("Text");
Text291.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle292 = browser.currentScene.createNode("FontStyle");
FontStyle292.size = 0.035;
fontStyle = FontStyle292;

geometry = Text291;

Billboard289YYY.children = new X3D.MFNode();

Billboard289ZZZ.children[0] = Shape290;

HAnimSite286ZZZ.children[2] = Billboard289;

HAnimSegment243ZZZ.children[7] = HAnimSite286;

let HAnimSite293 = browser.currentScene.createNode("HAnimSite");
HAnimSite293.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite293.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
let TouchSensor294 = browser.currentScene.createNode("TouchSensor");
TouchSensor294.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite293YYY.children = new X3D.MFNode();

HAnimSite293ZZZ.children[0] = TouchSensor294;

let Shape295 = browser.currentScene.createNode("Shape");
Shape295.USE = "HAnimSiteShape";
HAnimSite293ZZZ.children[1] = Shape295;

let Billboard296 = browser.currentScene.createNode("Billboard");
let Shape297 = browser.currentScene.createNode("Shape");
let Text298 = browser.currentScene.createNode("Text");
Text298.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle299 = browser.currentScene.createNode("FontStyle");
FontStyle299.size = 0.035;
fontStyle = FontStyle299;

geometry = Text298;

Billboard296YYY.children = new X3D.MFNode();

Billboard296ZZZ.children[0] = Shape297;

HAnimSite293ZZZ.children[2] = Billboard296;

HAnimSegment243ZZZ.children[8] = HAnimSite293;

HAnimJoint242YYY.children = new X3D.MFNode();

HAnimJoint242ZZZ.children[0] = HAnimSegment243;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint300.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint300.center = new X3D.SFVec3f([0.0841,0.0013,0.0216]);
HAnimJoint300.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint300.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint242ZZZ.children[1] = HAnimJoint300;

HAnimJoint233ZZZ.children[1] = HAnimJoint242;

HAnimJoint210ZZZ.children[1] = HAnimJoint233;

HAnimJoint180ZZZ.children[1] = HAnimJoint210;

HAnimJoint143ZZZ.children[1] = HAnimJoint180;

HAnimJoint60ZZZ.children[1] = HAnimJoint143;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.name = "r_hip";
HAnimJoint301.DEF = "hanim_r_hip";
HAnimJoint301.center = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
HAnimJoint301.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint301.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment302.name = "r_thigh";
HAnimSegment302.DEF = "hanim_r_thigh";
let Transform303 = browser.currentScene.createNode("Transform");
Transform303.translation = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
let Transform304 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape305 = browser.currentScene.createNode("Shape");
Shape305.USE = "HAnimJointShape";
Transform304YYY.child = new X3D.undefined();

Transform304ZZZ.child[0] = Shape305;

Transform303YYY.children = new X3D.MFNode();

Transform303ZZZ.children[0] = Transform304;

HAnimSegment302YYY.children = new X3D.MFNode();

HAnimSegment302ZZZ.children[0] = Transform303;

let Shape306 = browser.currentScene.createNode("Shape");
let LineSet307 = browser.currentScene.createNode("LineSet");
LineSet307.vertexCount = new X3D.MFInt32([2]);
let Coordinate308 = browser.currentScene.createNode("Coordinate");
Coordinate308.point = new X3D.MFVec3f([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
coord = Coordinate308;

//from r_hip to r_knee vertices 2
let ColorRGBA309 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA309.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA309;

geometry = LineSet307;

HAnimSegment302ZZZ.children[1] = Shape306;

let HAnimSite310 = browser.currentScene.createNode("HAnimSite");
HAnimSite310.name = "r_femoral_lateral_epicondyles";
HAnimSite310.DEF = "hanim_r_femoral_lateral_epicondyles";
HAnimSite310.translation = new X3D.SFVec3f([-0.1421,0.4992,0.031]);
let TouchSensor311 = browser.currentScene.createNode("TouchSensor");
TouchSensor311.description = "HAnimSite 44 r_femoral_lateral_epicondyles";
HAnimSite310YYY.children = new X3D.MFNode();

HAnimSite310ZZZ.children[0] = TouchSensor311;

let Shape312 = browser.currentScene.createNode("Shape");
Shape312.USE = "HAnimSiteShape";
HAnimSite310ZZZ.children[1] = Shape312;

let Billboard313 = browser.currentScene.createNode("Billboard");
let Shape314 = browser.currentScene.createNode("Shape");
let Text315 = browser.currentScene.createNode("Text");
Text315.string = new X3D.MFString([new X3D.SFString("44")]);
let FontStyle316 = browser.currentScene.createNode("FontStyle");
FontStyle316.size = 0.035;
fontStyle = FontStyle316;

geometry = Text315;

Billboard313YYY.children = new X3D.MFNode();

Billboard313ZZZ.children[0] = Shape314;

HAnimSite310ZZZ.children[2] = Billboard313;

HAnimSegment302ZZZ.children[2] = HAnimSite310;

let HAnimSite317 = browser.currentScene.createNode("HAnimSite");
HAnimSite317.name = "r_femoral_medial_epicondyles";
HAnimSite317.DEF = "hanim_r_femoral_medial_epicondyles";
HAnimSite317.translation = new X3D.SFVec3f([-0.0221,0.5014,0.0289]);
let TouchSensor318 = browser.currentScene.createNode("TouchSensor");
TouchSensor318.description = "HAnimSite 43 r_femoral_medial_epicondyles";
HAnimSite317YYY.children = new X3D.MFNode();

HAnimSite317ZZZ.children[0] = TouchSensor318;

let Shape319 = browser.currentScene.createNode("Shape");
Shape319.USE = "HAnimSiteShape";
HAnimSite317ZZZ.children[1] = Shape319;

let Billboard320 = browser.currentScene.createNode("Billboard");
let Shape321 = browser.currentScene.createNode("Shape");
let Text322 = browser.currentScene.createNode("Text");
Text322.string = new X3D.MFString([new X3D.SFString("43")]);
let FontStyle323 = browser.currentScene.createNode("FontStyle");
FontStyle323.size = 0.035;
fontStyle = FontStyle323;

geometry = Text322;

Billboard320YYY.children = new X3D.MFNode();

Billboard320ZZZ.children[0] = Shape321;

HAnimSite317ZZZ.children[2] = Billboard320;

HAnimSegment302ZZZ.children[3] = HAnimSite317;

let HAnimSite324 = browser.currentScene.createNode("HAnimSite");
HAnimSite324.name = "r_knee_crease";
HAnimSite324.DEF = "hanim_r_knee_crease";
HAnimSite324.translation = new X3D.SFVec3f([-0.0825,0.4932,-0.0326]);
let TouchSensor325 = browser.currentScene.createNode("TouchSensor");
TouchSensor325.description = "HAnimSite 91 r_knee_crease";
HAnimSite324YYY.children = new X3D.MFNode();

HAnimSite324ZZZ.children[0] = TouchSensor325;

let Shape326 = browser.currentScene.createNode("Shape");
Shape326.USE = "HAnimSiteShape";
HAnimSite324ZZZ.children[1] = Shape326;

let Billboard327 = browser.currentScene.createNode("Billboard");
let Shape328 = browser.currentScene.createNode("Shape");
let Text329 = browser.currentScene.createNode("Text");
Text329.string = new X3D.MFString([new X3D.SFString("91")]);
let FontStyle330 = browser.currentScene.createNode("FontStyle");
FontStyle330.size = 0.035;
fontStyle = FontStyle330;

geometry = Text329;

Billboard327YYY.children = new X3D.MFNode();

Billboard327ZZZ.children[0] = Shape328;

HAnimSite324ZZZ.children[2] = Billboard327;

HAnimSegment302ZZZ.children[4] = HAnimSite324;

let HAnimSite331 = browser.currentScene.createNode("HAnimSite");
HAnimSite331.name = "r_suprapatella";
HAnimSite331.DEF = "hanim_r_suprapatella";
let TouchSensor332 = browser.currentScene.createNode("TouchSensor");
TouchSensor332.description = "HAnimSite 45 r_suprapatella";
HAnimSite331YYY.children = new X3D.MFNode();

HAnimSite331ZZZ.children[0] = TouchSensor332;

let Shape333 = browser.currentScene.createNode("Shape");
Shape333.USE = "HAnimSiteShape";
HAnimSite331ZZZ.children[1] = Shape333;

let Billboard334 = browser.currentScene.createNode("Billboard");
let Shape335 = browser.currentScene.createNode("Shape");
let Text336 = browser.currentScene.createNode("Text");
Text336.string = new X3D.MFString([new X3D.SFString("45")]);
let FontStyle337 = browser.currentScene.createNode("FontStyle");
FontStyle337.size = 0.035;
fontStyle = FontStyle337;

geometry = Text336;

Billboard334YYY.children = new X3D.MFNode();

Billboard334ZZZ.children[0] = Shape335;

HAnimSite331ZZZ.children[2] = Billboard334;

HAnimSegment302ZZZ.children[5] = HAnimSite331;

HAnimJoint301YYY.children = new X3D.MFNode();

HAnimJoint301ZZZ.children[0] = HAnimSegment302;

let HAnimJoint338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint338.name = "r_knee";
HAnimJoint338.DEF = "hanim_r_knee";
HAnimJoint338.center = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
HAnimJoint338.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint338.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment339 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment339.name = "r_calf";
HAnimSegment339.DEF = "hanim_r_calf";
let Transform340 = browser.currentScene.createNode("Transform");
Transform340.translation = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
let Transform341 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape342 = browser.currentScene.createNode("Shape");
Shape342.USE = "HAnimJointShape";
Transform341YYY.child = new X3D.undefined();

Transform341ZZZ.child[0] = Shape342;

Transform340YYY.children = new X3D.MFNode();

Transform340ZZZ.children[0] = Transform341;

HAnimSegment339YYY.children = new X3D.MFNode();

HAnimSegment339ZZZ.children[0] = Transform340;

let Shape343 = browser.currentScene.createNode("Shape");
let LineSet344 = browser.currentScene.createNode("LineSet");
LineSet344.vertexCount = new X3D.MFInt32([2]);
let Coordinate345 = browser.currentScene.createNode("Coordinate");
Coordinate345.point = new X3D.MFVec3f([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
coord = Coordinate345;

//from r_knee to r_talocrural vertices 2
let ColorRGBA346 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA346.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA346;

geometry = LineSet344;

HAnimSegment339ZZZ.children[1] = Shape343;

let HAnimSite347 = browser.currentScene.createNode("HAnimSite");
HAnimSite347.name = "r_lateral_malleolus";
HAnimSite347.DEF = "hanim_r_lateral_malleolus";
HAnimSite347.translation = new X3D.SFVec3f([-0.1006,0.0658,-0.1075]);
let TouchSensor348 = browser.currentScene.createNode("TouchSensor");
TouchSensor348.description = "HAnimSite 53 r_lateral_malleolus";
HAnimSite347YYY.children = new X3D.MFNode();

HAnimSite347ZZZ.children[0] = TouchSensor348;

let Shape349 = browser.currentScene.createNode("Shape");
Shape349.USE = "HAnimSiteShape";
HAnimSite347ZZZ.children[1] = Shape349;

let Billboard350 = browser.currentScene.createNode("Billboard");
let Shape351 = browser.currentScene.createNode("Shape");
let Text352 = browser.currentScene.createNode("Text");
Text352.string = new X3D.MFString([new X3D.SFString("53")]);
let FontStyle353 = browser.currentScene.createNode("FontStyle");
FontStyle353.size = 0.035;
fontStyle = FontStyle353;

geometry = Text352;

Billboard350YYY.children = new X3D.MFNode();

Billboard350ZZZ.children[0] = Shape351;

HAnimSite347ZZZ.children[2] = Billboard350;

HAnimSegment339ZZZ.children[2] = HAnimSite347;

let HAnimSite354 = browser.currentScene.createNode("HAnimSite");
HAnimSite354.name = "r_medial_malleolus";
HAnimSite354.DEF = "hanim_r_medial_malleolus";
HAnimSite354.translation = new X3D.SFVec3f([-0.0591,0.076,-0.0928]);
let TouchSensor355 = browser.currentScene.createNode("TouchSensor");
TouchSensor355.description = "HAnimSite 52 r_medial_malleolus";
HAnimSite354YYY.children = new X3D.MFNode();

HAnimSite354ZZZ.children[0] = TouchSensor355;

let Shape356 = browser.currentScene.createNode("Shape");
Shape356.USE = "HAnimSiteShape";
HAnimSite354ZZZ.children[1] = Shape356;

let Billboard357 = browser.currentScene.createNode("Billboard");
let Shape358 = browser.currentScene.createNode("Shape");
let Text359 = browser.currentScene.createNode("Text");
Text359.string = new X3D.MFString([new X3D.SFString("52")]);
let FontStyle360 = browser.currentScene.createNode("FontStyle");
FontStyle360.size = 0.035;
fontStyle = FontStyle360;

geometry = Text359;

Billboard357YYY.children = new X3D.MFNode();

Billboard357ZZZ.children[0] = Shape358;

HAnimSite354ZZZ.children[2] = Billboard357;

HAnimSegment339ZZZ.children[3] = HAnimSite354;

let HAnimSite361 = browser.currentScene.createNode("HAnimSite");
HAnimSite361.name = "r_tibiale";
HAnimSite361.DEF = "hanim_r_tibiale";
let TouchSensor362 = browser.currentScene.createNode("TouchSensor");
TouchSensor362.description = "HAnimSite 51 r_tibiale";
HAnimSite361YYY.children = new X3D.MFNode();

HAnimSite361ZZZ.children[0] = TouchSensor362;

let Shape363 = browser.currentScene.createNode("Shape");
Shape363.USE = "HAnimSiteShape";
HAnimSite361ZZZ.children[1] = Shape363;

let Billboard364 = browser.currentScene.createNode("Billboard");
let Shape365 = browser.currentScene.createNode("Shape");
let Text366 = browser.currentScene.createNode("Text");
Text366.string = new X3D.MFString([new X3D.SFString("51")]);
let FontStyle367 = browser.currentScene.createNode("FontStyle");
FontStyle367.size = 0.035;
fontStyle = FontStyle367;

geometry = Text366;

Billboard364YYY.children = new X3D.MFNode();

Billboard364ZZZ.children[0] = Shape365;

HAnimSite361ZZZ.children[2] = Billboard364;

HAnimSegment339ZZZ.children[4] = HAnimSite361;

HAnimJoint338YYY.children = new X3D.MFNode();

HAnimJoint338ZZZ.children[0] = HAnimSegment339;

let HAnimJoint368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint368.name = "r_talocrural";
HAnimJoint368.DEF = "hanim_r_talocrural";
HAnimJoint368.center = new X3D.SFVec3f([-0.0801,0.0712,-0.0766]);
HAnimJoint368.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint368.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment369 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment369.name = "r_talus";
HAnimSegment369.DEF = "hanim_r_talus";
let Transform370 = browser.currentScene.createNode("Transform");
Transform370.scale = new X3D.SFVec3f([0.15,0.15,0.15]);
Transform370.translation = new X3D.SFVec3f([-0.05,0.06,-0.025]);
Transform370.rotation = new X3D.SFRotation([1,0,0,-1.57]);
//Transform right foot
let Transform371 = browser.currentScene.createNode("Transform");
//Empty Transform right foot
let Shape372 = browser.currentScene.createNode("Shape");
Shape372.USE = "HAnimJointShape";
Transform371YYY.child = new X3D.undefined();

Transform371ZZZ.child[0] = Shape372;

Transform370YYY.children = new X3D.MFNode();

Transform370ZZZ.children[0] = Transform371;

HAnimSegment369YYY.children = new X3D.MFNode();

HAnimSegment369ZZZ.children[0] = Transform370;

let Shape373 = browser.currentScene.createNode("Shape");
let LineSet374 = browser.currentScene.createNode("LineSet");
LineSet374.vertexCount = new X3D.MFInt32([2]);
let Coordinate375 = browser.currentScene.createNode("Coordinate");
Coordinate375.point = new X3D.MFVec3f([-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608]);
coord = Coordinate375;

//from r_talocrural to r_tarsometatarsal_2 vertices 2
let ColorRGBA376 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA376.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA376;

geometry = LineSet374;

HAnimSegment369ZZZ.children[1] = Shape373;

let HAnimSite377 = browser.currentScene.createNode("HAnimSite");
HAnimSite377.name = "r_calcaneus_posterior";
HAnimSite377.DEF = "hanim_r_calcaneus_posterior";
HAnimSite377.translation = new X3D.SFVec3f([-0.0692,0.0297,-0.1221]);
let TouchSensor378 = browser.currentScene.createNode("TouchSensor");
TouchSensor378.description = "HAnimSite 62 r_calcaneus_posterior";
HAnimSite377YYY.children = new X3D.MFNode();

HAnimSite377ZZZ.children[0] = TouchSensor378;

let Shape379 = browser.currentScene.createNode("Shape");
Shape379.USE = "HAnimSiteShape";
HAnimSite377ZZZ.children[1] = Shape379;

let Billboard380 = browser.currentScene.createNode("Billboard");
let Shape381 = browser.currentScene.createNode("Shape");
let Text382 = browser.currentScene.createNode("Text");
Text382.string = new X3D.MFString([new X3D.SFString("62")]);
let FontStyle383 = browser.currentScene.createNode("FontStyle");
FontStyle383.size = 0.035;
fontStyle = FontStyle383;

geometry = Text382;

Billboard380YYY.children = new X3D.MFNode();

Billboard380ZZZ.children[0] = Shape381;

HAnimSite377ZZZ.children[2] = Billboard380;

HAnimSegment369ZZZ.children[2] = HAnimSite377;

let HAnimSite384 = browser.currentScene.createNode("HAnimSite");
HAnimSite384.name = "r_sphyrion";
HAnimSite384.DEF = "hanim_r_sphyrion";
HAnimSite384.translation = new X3D.SFVec3f([-0.0603,0.061,-0.1002]);
let TouchSensor385 = browser.currentScene.createNode("TouchSensor");
TouchSensor385.description = "HAnimSite 54 r_sphyrion";
HAnimSite384YYY.children = new X3D.MFNode();

HAnimSite384ZZZ.children[0] = TouchSensor385;

let Shape386 = browser.currentScene.createNode("Shape");
Shape386.USE = "HAnimSiteShape";
HAnimSite384ZZZ.children[1] = Shape386;

let Billboard387 = browser.currentScene.createNode("Billboard");
let Shape388 = browser.currentScene.createNode("Shape");
let Text389 = browser.currentScene.createNode("Text");
Text389.string = new X3D.MFString([new X3D.SFString("54")]);
let FontStyle390 = browser.currentScene.createNode("FontStyle");
FontStyle390.size = 0.035;
fontStyle = FontStyle390;

geometry = Text389;

Billboard387YYY.children = new X3D.MFNode();

Billboard387ZZZ.children[0] = Shape388;

HAnimSite384ZZZ.children[2] = Billboard387;

HAnimSegment369ZZZ.children[3] = HAnimSite384;

HAnimJoint368YYY.children = new X3D.MFNode();

HAnimJoint368ZZZ.children[0] = HAnimSegment369;

let HAnimJoint391 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint391.name = "r_tarsometatarsal_2";
HAnimJoint391.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint391.center = new X3D.SFVec3f([-0.08,0.0175,-0.0608]);
HAnimJoint391.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint391.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment392 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment392.name = "r_metatarsal_2";
HAnimSegment392.DEF = "hanim_r_metatarsal_2";
let Transform393 = browser.currentScene.createNode("Transform");
Transform393.translation = new X3D.SFVec3f([-0.08,0.0175,-0.0608]);
let Transform394 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape395 = browser.currentScene.createNode("Shape");
Shape395.USE = "HAnimJointShape";
Transform394YYY.child = new X3D.undefined();

Transform394ZZZ.child[0] = Shape395;

Transform393YYY.children = new X3D.MFNode();

Transform393ZZZ.children[0] = Transform394;

HAnimSegment392YYY.children = new X3D.MFNode();

HAnimSegment392ZZZ.children[0] = Transform393;

let Shape396 = browser.currentScene.createNode("Shape");
let LineSet397 = browser.currentScene.createNode("LineSet");
LineSet397.vertexCount = new X3D.MFInt32([2]);
let Coordinate398 = browser.currentScene.createNode("Coordinate");
Coordinate398.point = new X3D.MFVec3f([-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
coord = Coordinate398;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
let ColorRGBA399 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA399.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA399;

geometry = LineSet397;

HAnimSegment392ZZZ.children[1] = Shape396;

HAnimJoint391YYY.children = new X3D.MFNode();

HAnimJoint391ZZZ.children[0] = HAnimSegment392;

let HAnimJoint400 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint400.name = "r_metatarsophalangeal_2";
HAnimJoint400.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint400.center = new X3D.SFVec3f([-0.0823,0.0064,-0.004]);
HAnimJoint400.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint400.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment401 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment401.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment401.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform402 = browser.currentScene.createNode("Transform");
Transform402.translation = new X3D.SFVec3f([-0.0823,0.0064,-0.004]);
let Transform403 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape404 = browser.currentScene.createNode("Shape");
Shape404.USE = "HAnimJointShape";
Transform403YYY.child = new X3D.undefined();

Transform403ZZZ.child[0] = Shape404;

Transform402YYY.children = new X3D.MFNode();

Transform402ZZZ.children[0] = Transform403;

HAnimSegment401YYY.children = new X3D.MFNode();

HAnimSegment401ZZZ.children[0] = Transform402;

let Shape405 = browser.currentScene.createNode("Shape");
let LineSet406 = browser.currentScene.createNode("LineSet");
LineSet406.vertexCount = new X3D.MFInt32([2]);
let Coordinate407 = browser.currentScene.createNode("Coordinate");
Coordinate407.point = new X3D.MFVec3f([-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216]);
coord = Coordinate407;

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA408 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA408.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA408;

geometry = LineSet406;

HAnimSegment401ZZZ.children[1] = Shape405;

let HAnimSite409 = browser.currentScene.createNode("HAnimSite");
HAnimSite409.name = "r_metatarsal_phalanx_1";
HAnimSite409.DEF = "hanim_r_metatarsal_phalanx_1";
let TouchSensor410 = browser.currentScene.createNode("TouchSensor");
TouchSensor410.description = "HAnimSite 59 r_metatarsal_phalanx_1";
HAnimSite409YYY.children = new X3D.MFNode();

HAnimSite409ZZZ.children[0] = TouchSensor410;

let Shape411 = browser.currentScene.createNode("Shape");
Shape411.USE = "HAnimSiteShape";
HAnimSite409ZZZ.children[1] = Shape411;

let Billboard412 = browser.currentScene.createNode("Billboard");
let Shape413 = browser.currentScene.createNode("Shape");
let Text414 = browser.currentScene.createNode("Text");
Text414.string = new X3D.MFString([new X3D.SFString("59")]);
let FontStyle415 = browser.currentScene.createNode("FontStyle");
FontStyle415.size = 0.035;
fontStyle = FontStyle415;

geometry = Text414;

Billboard412YYY.children = new X3D.MFNode();

Billboard412ZZZ.children[0] = Shape413;

HAnimSite409ZZZ.children[2] = Billboard412;

HAnimSegment401ZZZ.children[2] = HAnimSite409;

let HAnimSite416 = browser.currentScene.createNode("HAnimSite");
HAnimSite416.name = "r_metatarsal_phalanx_5";
HAnimSite416.DEF = "hanim_r_metatarsal_phalanx_5";
let TouchSensor417 = browser.currentScene.createNode("TouchSensor");
TouchSensor417.description = "HAnimSite 60 r_metatarsal_phalanx_5";
HAnimSite416YYY.children = new X3D.MFNode();

HAnimSite416ZZZ.children[0] = TouchSensor417;

let Shape418 = browser.currentScene.createNode("Shape");
Shape418.USE = "HAnimSiteShape";
HAnimSite416ZZZ.children[1] = Shape418;

let Billboard419 = browser.currentScene.createNode("Billboard");
let Shape420 = browser.currentScene.createNode("Shape");
let Text421 = browser.currentScene.createNode("Text");
Text421.string = new X3D.MFString([new X3D.SFString("60")]);
let FontStyle422 = browser.currentScene.createNode("FontStyle");
FontStyle422.size = 0.035;
fontStyle = FontStyle422;

geometry = Text421;

Billboard419YYY.children = new X3D.MFNode();

Billboard419ZZZ.children[0] = Shape420;

HAnimSite416ZZZ.children[2] = Billboard419;

HAnimSegment401ZZZ.children[3] = HAnimSite416;

let HAnimSite423 = browser.currentScene.createNode("HAnimSite");
HAnimSite423.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite423.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
let TouchSensor424 = browser.currentScene.createNode("TouchSensor");
TouchSensor424.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite423YYY.children = new X3D.MFNode();

HAnimSite423ZZZ.children[0] = TouchSensor424;

let Shape425 = browser.currentScene.createNode("Shape");
Shape425.USE = "HAnimSiteShape";
HAnimSite423ZZZ.children[1] = Shape425;

let Billboard426 = browser.currentScene.createNode("Billboard");
let Shape427 = browser.currentScene.createNode("Shape");
let Text428 = browser.currentScene.createNode("Text");
Text428.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle429 = browser.currentScene.createNode("FontStyle");
FontStyle429.size = 0.035;
fontStyle = FontStyle429;

geometry = Text428;

Billboard426YYY.children = new X3D.MFNode();

Billboard426ZZZ.children[0] = Shape427;

HAnimSite423ZZZ.children[2] = Billboard426;

HAnimSegment401ZZZ.children[4] = HAnimSite423;

let HAnimSite430 = browser.currentScene.createNode("HAnimSite");
HAnimSite430.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite430.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite430.translation = new X3D.SFVec3f([-0.0883,0.0134,0.1383]);
let TouchSensor431 = browser.currentScene.createNode("TouchSensor");
TouchSensor431.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite430YYY.children = new X3D.MFNode();

HAnimSite430ZZZ.children[0] = TouchSensor431;

let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "HAnimSiteShape";
HAnimSite430ZZZ.children[1] = Shape432;

let Billboard433 = browser.currentScene.createNode("Billboard");
let Shape434 = browser.currentScene.createNode("Shape");
let Text435 = browser.currentScene.createNode("Text");
Text435.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle436 = browser.currentScene.createNode("FontStyle");
FontStyle436.size = 0.035;
fontStyle = FontStyle436;

geometry = Text435;

Billboard433YYY.children = new X3D.MFNode();

Billboard433ZZZ.children[0] = Shape434;

HAnimSite430ZZZ.children[2] = Billboard433;

HAnimSegment401ZZZ.children[5] = HAnimSite430;

let HAnimSite437 = browser.currentScene.createNode("HAnimSite");
HAnimSite437.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite437.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
let TouchSensor438 = browser.currentScene.createNode("TouchSensor");
TouchSensor438.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite437YYY.children = new X3D.MFNode();

HAnimSite437ZZZ.children[0] = TouchSensor438;

let Shape439 = browser.currentScene.createNode("Shape");
Shape439.USE = "HAnimSiteShape";
HAnimSite437ZZZ.children[1] = Shape439;

let Billboard440 = browser.currentScene.createNode("Billboard");
let Shape441 = browser.currentScene.createNode("Shape");
let Text442 = browser.currentScene.createNode("Text");
Text442.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle443 = browser.currentScene.createNode("FontStyle");
FontStyle443.size = 0.035;
fontStyle = FontStyle443;

geometry = Text442;

Billboard440YYY.children = new X3D.MFNode();

Billboard440ZZZ.children[0] = Shape441;

HAnimSite437ZZZ.children[2] = Billboard440;

HAnimSegment401ZZZ.children[6] = HAnimSite437;

let HAnimSite444 = browser.currentScene.createNode("HAnimSite");
HAnimSite444.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite444.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
let TouchSensor445 = browser.currentScene.createNode("TouchSensor");
TouchSensor445.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite444YYY.children = new X3D.MFNode();

HAnimSite444ZZZ.children[0] = TouchSensor445;

let Shape446 = browser.currentScene.createNode("Shape");
Shape446.USE = "HAnimSiteShape";
HAnimSite444ZZZ.children[1] = Shape446;

let Billboard447 = browser.currentScene.createNode("Billboard");
let Shape448 = browser.currentScene.createNode("Shape");
let Text449 = browser.currentScene.createNode("Text");
Text449.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle450 = browser.currentScene.createNode("FontStyle");
FontStyle450.size = 0.035;
fontStyle = FontStyle450;

geometry = Text449;

Billboard447YYY.children = new X3D.MFNode();

Billboard447ZZZ.children[0] = Shape448;

HAnimSite444ZZZ.children[2] = Billboard447;

HAnimSegment401ZZZ.children[7] = HAnimSite444;

let HAnimSite451 = browser.currentScene.createNode("HAnimSite");
HAnimSite451.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite451.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
let TouchSensor452 = browser.currentScene.createNode("TouchSensor");
TouchSensor452.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite451YYY.children = new X3D.MFNode();

HAnimSite451ZZZ.children[0] = TouchSensor452;

let Shape453 = browser.currentScene.createNode("Shape");
Shape453.USE = "HAnimSiteShape";
HAnimSite451ZZZ.children[1] = Shape453;

let Billboard454 = browser.currentScene.createNode("Billboard");
let Shape455 = browser.currentScene.createNode("Shape");
let Text456 = browser.currentScene.createNode("Text");
Text456.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle457 = browser.currentScene.createNode("FontStyle");
FontStyle457.size = 0.035;
fontStyle = FontStyle457;

geometry = Text456;

Billboard454YYY.children = new X3D.MFNode();

Billboard454ZZZ.children[0] = Shape455;

HAnimSite451ZZZ.children[2] = Billboard454;

HAnimSegment401ZZZ.children[8] = HAnimSite451;

HAnimJoint400YYY.children = new X3D.MFNode();

HAnimJoint400ZZZ.children[0] = HAnimSegment401;

let HAnimJoint458 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint458.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint458.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint458.center = new X3D.SFVec3f([-0.0841,0.0013,0.0216]);
HAnimJoint458.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint458.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint400ZZZ.children[1] = HAnimJoint458;

HAnimJoint391ZZZ.children[1] = HAnimJoint400;

HAnimJoint368ZZZ.children[1] = HAnimJoint391;

HAnimJoint338ZZZ.children[1] = HAnimJoint368;

HAnimJoint301ZZZ.children[1] = HAnimJoint338;

HAnimJoint60ZZZ.children[2] = HAnimJoint301;

HAnimJoint47ZZZ.children[1] = HAnimJoint60;

let HAnimJoint459 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint459.name = "vl5";
HAnimJoint459.DEF = "hanim_vl5";
HAnimJoint459.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
HAnimJoint459.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint459.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment460 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment460.name = "l5";
HAnimSegment460.DEF = "hanim_l5";
let Transform461 = browser.currentScene.createNode("Transform");
Transform461.translation = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let Transform462 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape463 = browser.currentScene.createNode("Shape");
Shape463.USE = "HAnimJointShape";
Transform462YYY.child = new X3D.undefined();

Transform462ZZZ.child[0] = Shape463;

Transform461YYY.children = new X3D.MFNode();

Transform461ZZZ.children[0] = Transform462;

HAnimSegment460YYY.children = new X3D.MFNode();

HAnimSegment460ZZZ.children[0] = Transform461;

let Shape464 = browser.currentScene.createNode("Shape");
let LineSet465 = browser.currentScene.createNode("LineSet");
LineSet465.vertexCount = new X3D.MFInt32([2]);
let Coordinate466 = browser.currentScene.createNode("Coordinate");
Coordinate466.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796]);
coord = Coordinate466;

//from vl5 to vl3 vertices 2
let ColorRGBA467 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA467.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA467;

geometry = LineSet465;

HAnimSegment460ZZZ.children[1] = Shape464;

let HAnimSite468 = browser.currentScene.createNode("HAnimSite");
HAnimSite468.name = "navel";
HAnimSite468.DEF = "hanim_navel";
HAnimSite468.translation = new X3D.SFVec3f([0.0069,1.0966,0.1017]);
let TouchSensor469 = browser.currentScene.createNode("TouchSensor");
TouchSensor469.description = "HAnimSite 84 navel";
HAnimSite468YYY.children = new X3D.MFNode();

HAnimSite468ZZZ.children[0] = TouchSensor469;

let Shape470 = browser.currentScene.createNode("Shape");
Shape470.USE = "HAnimSiteShape";
HAnimSite468ZZZ.children[1] = Shape470;

let Billboard471 = browser.currentScene.createNode("Billboard");
let Shape472 = browser.currentScene.createNode("Shape");
let Text473 = browser.currentScene.createNode("Text");
Text473.string = new X3D.MFString([new X3D.SFString("84")]);
let FontStyle474 = browser.currentScene.createNode("FontStyle");
FontStyle474.size = 0.035;
fontStyle = FontStyle474;

geometry = Text473;

Billboard471YYY.children = new X3D.MFNode();

Billboard471ZZZ.children[0] = Shape472;

HAnimSite468ZZZ.children[2] = Billboard471;

HAnimSegment460ZZZ.children[2] = HAnimSite468;

let HAnimSite475 = browser.currentScene.createNode("HAnimSite");
HAnimSite475.name = "waist_preferred_anterior";
HAnimSite475.DEF = "hanim_waist_preferred_anterior";
let TouchSensor476 = browser.currentScene.createNode("TouchSensor");
TouchSensor476.description = "HAnimSite 26 waist_preferred_anterior";
HAnimSite475YYY.children = new X3D.MFNode();

HAnimSite475ZZZ.children[0] = TouchSensor476;

let Shape477 = browser.currentScene.createNode("Shape");
Shape477.USE = "HAnimSiteShape";
HAnimSite475ZZZ.children[1] = Shape477;

let Billboard478 = browser.currentScene.createNode("Billboard");
let Shape479 = browser.currentScene.createNode("Shape");
let Text480 = browser.currentScene.createNode("Text");
Text480.string = new X3D.MFString([new X3D.SFString("26")]);
let FontStyle481 = browser.currentScene.createNode("FontStyle");
FontStyle481.size = 0.035;
fontStyle = FontStyle481;

geometry = Text480;

Billboard478YYY.children = new X3D.MFNode();

Billboard478ZZZ.children[0] = Shape479;

HAnimSite475ZZZ.children[2] = Billboard478;

HAnimSegment460ZZZ.children[3] = HAnimSite475;

let HAnimSite482 = browser.currentScene.createNode("HAnimSite");
HAnimSite482.name = "waist_preferred_posterior";
HAnimSite482.DEF = "hanim_waist_preferred_posterior";
HAnimSite482.translation = new X3D.SFVec3f([0.29,1.0915,-0.1091]);
let TouchSensor483 = browser.currentScene.createNode("TouchSensor");
TouchSensor483.description = "HAnimSite 27 waist_preferred_posterior";
HAnimSite482YYY.children = new X3D.MFNode();

HAnimSite482ZZZ.children[0] = TouchSensor483;

let Shape484 = browser.currentScene.createNode("Shape");
Shape484.USE = "HAnimSiteShape";
HAnimSite482ZZZ.children[1] = Shape484;

let Billboard485 = browser.currentScene.createNode("Billboard");
let Shape486 = browser.currentScene.createNode("Shape");
let Text487 = browser.currentScene.createNode("Text");
Text487.string = new X3D.MFString([new X3D.SFString("27")]);
let FontStyle488 = browser.currentScene.createNode("FontStyle");
FontStyle488.size = 0.035;
fontStyle = FontStyle488;

geometry = Text487;

Billboard485YYY.children = new X3D.MFNode();

Billboard485ZZZ.children[0] = Shape486;

HAnimSite482ZZZ.children[2] = Billboard485;

HAnimSegment460ZZZ.children[4] = HAnimSite482;

HAnimJoint459YYY.children = new X3D.MFNode();

HAnimJoint459ZZZ.children[0] = HAnimSegment460;

let HAnimJoint489 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint489.name = "vl3";
HAnimJoint489.DEF = "hanim_vl3";
HAnimJoint489.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
HAnimJoint489.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint489.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment490.name = "l3";
HAnimSegment490.DEF = "hanim_l3";
let Transform491 = browser.currentScene.createNode("Transform");
Transform491.translation = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let Transform492 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape493 = browser.currentScene.createNode("Shape");
Shape493.USE = "HAnimJointShape";
Transform492YYY.child = new X3D.undefined();

Transform492ZZZ.child[0] = Shape493;

Transform491YYY.children = new X3D.MFNode();

Transform491ZZZ.children[0] = Transform492;

HAnimSegment490YYY.children = new X3D.MFNode();

HAnimSegment490ZZZ.children[0] = Transform491;

let Shape494 = browser.currentScene.createNode("Shape");
let LineSet495 = browser.currentScene.createNode("LineSet");
LineSet495.vertexCount = new X3D.MFInt32([2]);
let Coordinate496 = browser.currentScene.createNode("Coordinate");
Coordinate496.point = new X3D.MFVec3f([0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805]);
coord = Coordinate496;

//from vl3 to vl1 vertices 2
let ColorRGBA497 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA497.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA497;

geometry = LineSet495;

HAnimSegment490ZZZ.children[1] = Shape494;

let HAnimSite498 = browser.currentScene.createNode("HAnimSite");
HAnimSite498.name = "l_rib10";
HAnimSite498.DEF = "hanim_l_rib10";
HAnimSite498.translation = new X3D.SFVec3f([0.0871,1.1925,0.0992]);
let TouchSensor499 = browser.currentScene.createNode("TouchSensor");
TouchSensor499.description = "HAnimSite 28 l_rib10";
HAnimSite498YYY.children = new X3D.MFNode();

HAnimSite498ZZZ.children[0] = TouchSensor499;

let Shape500 = browser.currentScene.createNode("Shape");
Shape500.USE = "HAnimSiteShape";
HAnimSite498ZZZ.children[1] = Shape500;

let Billboard501 = browser.currentScene.createNode("Billboard");
let Shape502 = browser.currentScene.createNode("Shape");
let Text503 = browser.currentScene.createNode("Text");
Text503.string = new X3D.MFString([new X3D.SFString("28")]);
let FontStyle504 = browser.currentScene.createNode("FontStyle");
FontStyle504.size = 0.035;
fontStyle = FontStyle504;

geometry = Text503;

Billboard501YYY.children = new X3D.MFNode();

Billboard501ZZZ.children[0] = Shape502;

HAnimSite498ZZZ.children[2] = Billboard501;

HAnimSegment490ZZZ.children[2] = HAnimSite498;

let HAnimSite505 = browser.currentScene.createNode("HAnimSite");
HAnimSite505.name = "r_rib10";
HAnimSite505.DEF = "hanim_r_rib10";
HAnimSite505.translation = new X3D.SFVec3f([-0.0711,1.1941,0.1016]);
let TouchSensor506 = browser.currentScene.createNode("TouchSensor");
TouchSensor506.description = "HAnimSite 30 r_rib10";
HAnimSite505YYY.children = new X3D.MFNode();

HAnimSite505ZZZ.children[0] = TouchSensor506;

let Shape507 = browser.currentScene.createNode("Shape");
Shape507.USE = "HAnimSiteShape";
HAnimSite505ZZZ.children[1] = Shape507;

let Billboard508 = browser.currentScene.createNode("Billboard");
let Shape509 = browser.currentScene.createNode("Shape");
let Text510 = browser.currentScene.createNode("Text");
Text510.string = new X3D.MFString([new X3D.SFString("30")]);
let FontStyle511 = browser.currentScene.createNode("FontStyle");
FontStyle511.size = 0.035;
fontStyle = FontStyle511;

geometry = Text510;

Billboard508YYY.children = new X3D.MFNode();

Billboard508ZZZ.children[0] = Shape509;

HAnimSite505ZZZ.children[2] = Billboard508;

HAnimSegment490ZZZ.children[3] = HAnimSite505;

let HAnimSite512 = browser.currentScene.createNode("HAnimSite");
HAnimSite512.name = "spine_1_middle_back";
HAnimSite512.DEF = "hanim_spine_1_middle_back";
let TouchSensor513 = browser.currentScene.createNode("TouchSensor");
TouchSensor513.description = "HAnimSite 24 spine_1_middle_back";
HAnimSite512YYY.children = new X3D.MFNode();

HAnimSite512ZZZ.children[0] = TouchSensor513;

let Shape514 = browser.currentScene.createNode("Shape");
Shape514.USE = "HAnimSiteShape";
HAnimSite512ZZZ.children[1] = Shape514;

let Billboard515 = browser.currentScene.createNode("Billboard");
let Shape516 = browser.currentScene.createNode("Shape");
let Text517 = browser.currentScene.createNode("Text");
Text517.string = new X3D.MFString([new X3D.SFString("24")]);
let FontStyle518 = browser.currentScene.createNode("FontStyle");
FontStyle518.size = 0.035;
fontStyle = FontStyle518;

geometry = Text517;

Billboard515YYY.children = new X3D.MFNode();

Billboard515ZZZ.children[0] = Shape516;

HAnimSite512ZZZ.children[2] = Billboard515;

HAnimSegment490ZZZ.children[4] = HAnimSite512;

let HAnimSite519 = browser.currentScene.createNode("HAnimSite");
HAnimSite519.name = "spine_2_middle_back";
HAnimSite519.DEF = "hanim_spine_2_middle_back";
let TouchSensor520 = browser.currentScene.createNode("TouchSensor");
TouchSensor520.description = "HAnimSite spine_2_middle_back";
HAnimSite519YYY.children = new X3D.MFNode();

HAnimSite519ZZZ.children[0] = TouchSensor520;

let Shape521 = browser.currentScene.createNode("Shape");
Shape521.USE = "HAnimSiteShape";
HAnimSite519ZZZ.children[1] = Shape521;

let Billboard522 = browser.currentScene.createNode("Billboard");
let Shape523 = browser.currentScene.createNode("Shape");
let Text524 = browser.currentScene.createNode("Text");
Text524.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle525 = browser.currentScene.createNode("FontStyle");
FontStyle525.size = 0.035;
fontStyle = FontStyle525;

geometry = Text524;

Billboard522YYY.children = new X3D.MFNode();

Billboard522ZZZ.children[0] = Shape523;

HAnimSite519ZZZ.children[2] = Billboard522;

HAnimSegment490ZZZ.children[5] = HAnimSite519;

HAnimJoint489YYY.children = new X3D.MFNode();

HAnimJoint489ZZZ.children[0] = HAnimSegment490;

let HAnimJoint526 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint526.name = "vl1";
HAnimJoint526.DEF = "hanim_vl1";
HAnimJoint526.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
HAnimJoint526.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint526.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment527 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment527.name = "l1";
HAnimSegment527.DEF = "hanim_l1";
let Transform528 = browser.currentScene.createNode("Transform");
Transform528.translation = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let Transform529 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape530 = browser.currentScene.createNode("Shape");
Shape530.USE = "HAnimJointShape";
Transform529YYY.child = new X3D.undefined();

Transform529ZZZ.child[0] = Shape530;

Transform528YYY.children = new X3D.MFNode();

Transform528ZZZ.children[0] = Transform529;

HAnimSegment527YYY.children = new X3D.MFNode();

HAnimSegment527ZZZ.children[0] = Transform528;

let Shape531 = browser.currentScene.createNode("Shape");
let LineSet532 = browser.currentScene.createNode("LineSet");
LineSet532.vertexCount = new X3D.MFInt32([2]);
let Coordinate533 = browser.currentScene.createNode("Coordinate");
Coordinate533.point = new X3D.MFVec3f([0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822]);
coord = Coordinate533;

//from vl1 to vt10 vertices 2
let ColorRGBA534 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA534.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA534;

geometry = LineSet532;

HAnimSegment527ZZZ.children[1] = Shape531;

HAnimJoint526YYY.children = new X3D.MFNode();

HAnimJoint526ZZZ.children[0] = HAnimSegment527;

let HAnimJoint535 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint535.name = "vt10";
HAnimJoint535.DEF = "hanim_vt10";
HAnimJoint535.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
HAnimJoint535.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint535.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment536 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment536.name = "t10";
HAnimSegment536.DEF = "hanim_t10";
let Transform537 = browser.currentScene.createNode("Transform");
Transform537.translation = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let Transform538 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape539 = browser.currentScene.createNode("Shape");
Shape539.USE = "HAnimJointShape";
Transform538YYY.child = new X3D.undefined();

Transform538ZZZ.child[0] = Shape539;

Transform537YYY.children = new X3D.MFNode();

Transform537ZZZ.children[0] = Transform538;

HAnimSegment536YYY.children = new X3D.MFNode();

HAnimSegment536ZZZ.children[0] = Transform537;

let Shape540 = browser.currentScene.createNode("Shape");
let LineSet541 = browser.currentScene.createNode("LineSet");
LineSet541.vertexCount = new X3D.MFInt32([2]);
let Coordinate542 = browser.currentScene.createNode("Coordinate");
Coordinate542.point = new X3D.MFVec3f([0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08]);
coord = Coordinate542;

//from vt10 to vt6 vertices 2
let ColorRGBA543 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA543.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA543;

geometry = LineSet541;

HAnimSegment536ZZZ.children[1] = Shape540;

let HAnimSite544 = browser.currentScene.createNode("HAnimSite");
HAnimSite544.name = "l_thelion";
HAnimSite544.DEF = "hanim_l_thelion";
HAnimSite544.translation = new X3D.SFVec3f([0.0918,1.3382,0.1192]);
let TouchSensor545 = browser.currentScene.createNode("TouchSensor");
TouchSensor545.description = "HAnimSite 29 l_thelion";
HAnimSite544YYY.children = new X3D.MFNode();

HAnimSite544ZZZ.children[0] = TouchSensor545;

let Shape546 = browser.currentScene.createNode("Shape");
Shape546.USE = "HAnimSiteShape";
HAnimSite544ZZZ.children[1] = Shape546;

let Billboard547 = browser.currentScene.createNode("Billboard");
let Shape548 = browser.currentScene.createNode("Shape");
let Text549 = browser.currentScene.createNode("Text");
Text549.string = new X3D.MFString([new X3D.SFString("29")]);
let FontStyle550 = browser.currentScene.createNode("FontStyle");
FontStyle550.size = 0.035;
fontStyle = FontStyle550;

geometry = Text549;

Billboard547YYY.children = new X3D.MFNode();

Billboard547ZZZ.children[0] = Shape548;

HAnimSite544ZZZ.children[2] = Billboard547;

HAnimSegment536ZZZ.children[2] = HAnimSite544;

let HAnimSite551 = browser.currentScene.createNode("HAnimSite");
HAnimSite551.name = "r_thelion";
HAnimSite551.DEF = "hanim_r_thelion";
HAnimSite551.translation = new X3D.SFVec3f([-0.0736,1.3385,0.1217]);
let TouchSensor552 = browser.currentScene.createNode("TouchSensor");
TouchSensor552.description = "HAnimSite 31 r_thelion";
HAnimSite551YYY.children = new X3D.MFNode();

HAnimSite551ZZZ.children[0] = TouchSensor552;

let Shape553 = browser.currentScene.createNode("Shape");
Shape553.USE = "HAnimSiteShape";
HAnimSite551ZZZ.children[1] = Shape553;

let Billboard554 = browser.currentScene.createNode("Billboard");
let Shape555 = browser.currentScene.createNode("Shape");
let Text556 = browser.currentScene.createNode("Text");
Text556.string = new X3D.MFString([new X3D.SFString("31")]);
let FontStyle557 = browser.currentScene.createNode("FontStyle");
FontStyle557.size = 0.035;
fontStyle = FontStyle557;

geometry = Text556;

Billboard554YYY.children = new X3D.MFNode();

Billboard554ZZZ.children[0] = Shape555;

HAnimSite551ZZZ.children[2] = Billboard554;

HAnimSegment536ZZZ.children[3] = HAnimSite551;

let HAnimSite558 = browser.currentScene.createNode("HAnimSite");
HAnimSite558.name = "substernale";
HAnimSite558.DEF = "hanim_substernale";
HAnimSite558.translation = new X3D.SFVec3f([0.0085,1.2995,0.1147]);
let TouchSensor559 = browser.currentScene.createNode("TouchSensor");
TouchSensor559.description = "HAnimSite 13 substernale";
HAnimSite558YYY.children = new X3D.MFNode();

HAnimSite558ZZZ.children[0] = TouchSensor559;

let Shape560 = browser.currentScene.createNode("Shape");
Shape560.USE = "HAnimSiteShape";
HAnimSite558ZZZ.children[1] = Shape560;

let Billboard561 = browser.currentScene.createNode("Billboard");
let Shape562 = browser.currentScene.createNode("Shape");
let Text563 = browser.currentScene.createNode("Text");
Text563.string = new X3D.MFString([new X3D.SFString("13")]);
let FontStyle564 = browser.currentScene.createNode("FontStyle");
FontStyle564.size = 0.035;
fontStyle = FontStyle564;

geometry = Text563;

Billboard561YYY.children = new X3D.MFNode();

Billboard561ZZZ.children[0] = Shape562;

HAnimSite558ZZZ.children[2] = Billboard561;

HAnimSegment536ZZZ.children[4] = HAnimSite558;

HAnimJoint535YYY.children = new X3D.MFNode();

HAnimJoint535ZZZ.children[0] = HAnimSegment536;

let HAnimJoint565 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint565.name = "vt6";
HAnimJoint565.DEF = "hanim_vt6";
HAnimJoint565.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
HAnimJoint565.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint565.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment566 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment566.name = "t6";
HAnimSegment566.DEF = "hanim_t6";
let Transform567 = browser.currentScene.createNode("Transform");
Transform567.translation = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let Transform568 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape569 = browser.currentScene.createNode("Shape");
Shape569.USE = "HAnimJointShape";
Transform568YYY.child = new X3D.undefined();

Transform568ZZZ.child[0] = Shape569;

Transform567YYY.children = new X3D.MFNode();

Transform567ZZZ.children[0] = Transform568;

HAnimSegment566YYY.children = new X3D.MFNode();

HAnimSegment566ZZZ.children[0] = Transform567;

let Shape570 = browser.currentScene.createNode("Shape");
let LineSet571 = browser.currentScene.createNode("LineSet");
LineSet571.vertexCount = new X3D.MFInt32([2]);
let Coordinate572 = browser.currentScene.createNode("Coordinate");
Coordinate572.point = new X3D.MFVec3f([0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387]);
coord = Coordinate572;

//from vt6 to vt1 vertices 2
let ColorRGBA573 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA573.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA573;

geometry = LineSet571;

HAnimSegment566ZZZ.children[1] = Shape570;

let HAnimSite574 = browser.currentScene.createNode("HAnimSite");
HAnimSite574.name = "l_chest_midsagittal_plane";
HAnimSite574.DEF = "hanim_l_chest_midsagittal_plane";
let TouchSensor575 = browser.currentScene.createNode("TouchSensor");
TouchSensor575.description = "HAnimSite 94 l_chest_midsagittal_plane";
HAnimSite574YYY.children = new X3D.MFNode();

HAnimSite574ZZZ.children[0] = TouchSensor575;

let Shape576 = browser.currentScene.createNode("Shape");
Shape576.USE = "HAnimSiteShape";
HAnimSite574ZZZ.children[1] = Shape576;

let Billboard577 = browser.currentScene.createNode("Billboard");
let Shape578 = browser.currentScene.createNode("Shape");
let Text579 = browser.currentScene.createNode("Text");
Text579.string = new X3D.MFString([new X3D.SFString("94")]);
let FontStyle580 = browser.currentScene.createNode("FontStyle");
FontStyle580.size = 0.035;
fontStyle = FontStyle580;

geometry = Text579;

Billboard577YYY.children = new X3D.MFNode();

Billboard577ZZZ.children[0] = Shape578;

HAnimSite574ZZZ.children[2] = Billboard577;

HAnimSegment566ZZZ.children[2] = HAnimSite574;

let HAnimSite581 = browser.currentScene.createNode("HAnimSite");
HAnimSite581.name = "mesosternale";
HAnimSite581.DEF = "hanim_mesosternale";
let TouchSensor582 = browser.currentScene.createNode("TouchSensor");
TouchSensor582.description = "HAnimSite 88 mesosternale";
HAnimSite581YYY.children = new X3D.MFNode();

HAnimSite581ZZZ.children[0] = TouchSensor582;

let Shape583 = browser.currentScene.createNode("Shape");
Shape583.USE = "HAnimSiteShape";
HAnimSite581ZZZ.children[1] = Shape583;

let Billboard584 = browser.currentScene.createNode("Billboard");
let Shape585 = browser.currentScene.createNode("Shape");
let Text586 = browser.currentScene.createNode("Text");
Text586.string = new X3D.MFString([new X3D.SFString("88")]);
let FontStyle587 = browser.currentScene.createNode("FontStyle");
FontStyle587.size = 0.035;
fontStyle = FontStyle587;

geometry = Text586;

Billboard584YYY.children = new X3D.MFNode();

Billboard584ZZZ.children[0] = Shape585;

HAnimSite581ZZZ.children[2] = Billboard584;

HAnimSegment566ZZZ.children[3] = HAnimSite581;

let HAnimSite588 = browser.currentScene.createNode("HAnimSite");
HAnimSite588.name = "r_chest_midsagittal_plane";
HAnimSite588.DEF = "hanim_r_chest_midsagittal_plane";
let TouchSensor589 = browser.currentScene.createNode("TouchSensor");
TouchSensor589.description = "HAnimSite 95 r_chest_midsagittal_plane";
HAnimSite588YYY.children = new X3D.MFNode();

HAnimSite588ZZZ.children[0] = TouchSensor589;

let Shape590 = browser.currentScene.createNode("Shape");
Shape590.USE = "HAnimSiteShape";
HAnimSite588ZZZ.children[1] = Shape590;

let Billboard591 = browser.currentScene.createNode("Billboard");
let Shape592 = browser.currentScene.createNode("Shape");
let Text593 = browser.currentScene.createNode("Text");
Text593.string = new X3D.MFString([new X3D.SFString("95")]);
let FontStyle594 = browser.currentScene.createNode("FontStyle");
FontStyle594.size = 0.035;
fontStyle = FontStyle594;

geometry = Text593;

Billboard591YYY.children = new X3D.MFNode();

Billboard591ZZZ.children[0] = Shape592;

HAnimSite588ZZZ.children[2] = Billboard591;

HAnimSegment566ZZZ.children[4] = HAnimSite588;

let HAnimSite595 = browser.currentScene.createNode("HAnimSite");
HAnimSite595.name = "rear_center_midsagittal_plane";
HAnimSite595.DEF = "hanim_rear_center_midsagittal_plane";
let TouchSensor596 = browser.currentScene.createNode("TouchSensor");
TouchSensor596.description = "HAnimSite 92 rear_center_midsagittal_plane";
HAnimSite595YYY.children = new X3D.MFNode();

HAnimSite595ZZZ.children[0] = TouchSensor596;

let Shape597 = browser.currentScene.createNode("Shape");
Shape597.USE = "HAnimSiteShape";
HAnimSite595ZZZ.children[1] = Shape597;

let Billboard598 = browser.currentScene.createNode("Billboard");
let Shape599 = browser.currentScene.createNode("Shape");
let Text600 = browser.currentScene.createNode("Text");
Text600.string = new X3D.MFString([new X3D.SFString("92")]);
let FontStyle601 = browser.currentScene.createNode("FontStyle");
FontStyle601.size = 0.035;
fontStyle = FontStyle601;

geometry = Text600;

Billboard598YYY.children = new X3D.MFNode();

Billboard598ZZZ.children[0] = Shape599;

HAnimSite595ZZZ.children[2] = Billboard598;

HAnimSegment566ZZZ.children[5] = HAnimSite595;

HAnimJoint565YYY.children = new X3D.MFNode();

HAnimJoint565ZZZ.children[0] = HAnimSegment566;

let HAnimJoint602 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint602.name = "vt1";
HAnimJoint602.DEF = "hanim_vt1";
HAnimJoint602.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
HAnimJoint602.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint602.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment603 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment603.name = "t1";
HAnimSegment603.DEF = "hanim_t1";
let Transform604 = browser.currentScene.createNode("Transform");
Transform604.translation = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let Transform605 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape606 = browser.currentScene.createNode("Shape");
Shape606.USE = "HAnimJointShape";
Transform605YYY.child = new X3D.undefined();

Transform605ZZZ.child[0] = Shape606;

Transform604YYY.children = new X3D.MFNode();

Transform604ZZZ.children[0] = Transform605;

HAnimSegment603YYY.children = new X3D.MFNode();

HAnimSegment603ZZZ.children[0] = Transform604;

let Shape607 = browser.currentScene.createNode("Shape");
let LineSet608 = browser.currentScene.createNode("LineSet");
LineSet608.vertexCount = new X3D.MFInt32([2]);
let Coordinate609 = browser.currentScene.createNode("Coordinate");
Coordinate609.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084]);
coord = Coordinate609;

//from vt1 to vc4 vertices 2
let ColorRGBA610 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA610.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA610;

geometry = LineSet608;

HAnimSegment603ZZZ.children[1] = Shape607;

let HAnimSite611 = browser.currentScene.createNode("HAnimSite");
HAnimSite611.name = "cervicale";
HAnimSite611.DEF = "hanim_cervicale";
HAnimSite611.translation = new X3D.SFVec3f([0.0064,1.52,-0.0815]);
let TouchSensor612 = browser.currentScene.createNode("TouchSensor");
TouchSensor612.description = "HAnimSite 10 cervicale";
HAnimSite611YYY.children = new X3D.MFNode();

HAnimSite611ZZZ.children[0] = TouchSensor612;

let Shape613 = browser.currentScene.createNode("Shape");
Shape613.USE = "HAnimSiteShape";
HAnimSite611ZZZ.children[1] = Shape613;

let Billboard614 = browser.currentScene.createNode("Billboard");
let Shape615 = browser.currentScene.createNode("Shape");
let Text616 = browser.currentScene.createNode("Text");
Text616.string = new X3D.MFString([new X3D.SFString("10")]);
let FontStyle617 = browser.currentScene.createNode("FontStyle");
FontStyle617.size = 0.035;
fontStyle = FontStyle617;

geometry = Text616;

Billboard614YYY.children = new X3D.MFNode();

Billboard614ZZZ.children[0] = Shape615;

HAnimSite611ZZZ.children[2] = Billboard614;

HAnimSegment603ZZZ.children[2] = HAnimSite611;

let HAnimSite618 = browser.currentScene.createNode("HAnimSite");
HAnimSite618.name = "l_neck_base";
HAnimSite618.DEF = "hanim_l_neck_base";
HAnimSite618.translation = new X3D.SFVec3f([0.0646,1.5141,-0.038]);
let TouchSensor619 = browser.currentScene.createNode("TouchSensor");
TouchSensor619.description = "HAnimSite 82 l_neck_base";
HAnimSite618YYY.children = new X3D.MFNode();

HAnimSite618ZZZ.children[0] = TouchSensor619;

let Shape620 = browser.currentScene.createNode("Shape");
Shape620.USE = "HAnimSiteShape";
HAnimSite618ZZZ.children[1] = Shape620;

let Billboard621 = browser.currentScene.createNode("Billboard");
let Shape622 = browser.currentScene.createNode("Shape");
let Text623 = browser.currentScene.createNode("Text");
Text623.string = new X3D.MFString([new X3D.SFString("82")]);
let FontStyle624 = browser.currentScene.createNode("FontStyle");
FontStyle624.size = 0.035;
fontStyle = FontStyle624;

geometry = Text623;

Billboard621YYY.children = new X3D.MFNode();

Billboard621ZZZ.children[0] = Shape622;

HAnimSite618ZZZ.children[2] = Billboard621;

HAnimSegment603ZZZ.children[3] = HAnimSite618;

let HAnimSite625 = browser.currentScene.createNode("HAnimSite");
HAnimSite625.name = "r_neck_base";
HAnimSite625.DEF = "hanim_r_neck_base";
HAnimSite625.translation = new X3D.SFVec3f([-0.0419,1.5149,-0.022]);
let TouchSensor626 = browser.currentScene.createNode("TouchSensor");
TouchSensor626.description = "HAnimSite 83 r_neck_base";
HAnimSite625YYY.children = new X3D.MFNode();

HAnimSite625ZZZ.children[0] = TouchSensor626;

let Shape627 = browser.currentScene.createNode("Shape");
Shape627.USE = "HAnimSiteShape";
HAnimSite625ZZZ.children[1] = Shape627;

let Billboard628 = browser.currentScene.createNode("Billboard");
let Shape629 = browser.currentScene.createNode("Shape");
let Text630 = browser.currentScene.createNode("Text");
Text630.string = new X3D.MFString([new X3D.SFString("83")]);
let FontStyle631 = browser.currentScene.createNode("FontStyle");
FontStyle631.size = 0.035;
fontStyle = FontStyle631;

geometry = Text630;

Billboard628YYY.children = new X3D.MFNode();

Billboard628ZZZ.children[0] = Shape629;

HAnimSite625ZZZ.children[2] = Billboard628;

HAnimSegment603ZZZ.children[4] = HAnimSite625;

let HAnimSite632 = browser.currentScene.createNode("HAnimSite");
HAnimSite632.name = "suprasternale";
HAnimSite632.DEF = "hanim_suprasternale";
HAnimSite632.translation = new X3D.SFVec3f([0.0084,1.4714,0.0551]);
let TouchSensor633 = browser.currentScene.createNode("TouchSensor");
TouchSensor633.description = "HAnimSite 12 suprasternale";
HAnimSite632YYY.children = new X3D.MFNode();

HAnimSite632ZZZ.children[0] = TouchSensor633;

let Shape634 = browser.currentScene.createNode("Shape");
Shape634.USE = "HAnimSiteShape";
HAnimSite632ZZZ.children[1] = Shape634;

let Billboard635 = browser.currentScene.createNode("Billboard");
let Shape636 = browser.currentScene.createNode("Shape");
let Text637 = browser.currentScene.createNode("Text");
Text637.string = new X3D.MFString([new X3D.SFString("12")]);
let FontStyle638 = browser.currentScene.createNode("FontStyle");
FontStyle638.size = 0.035;
fontStyle = FontStyle638;

geometry = Text637;

Billboard635YYY.children = new X3D.MFNode();

Billboard635ZZZ.children[0] = Shape636;

HAnimSite632ZZZ.children[2] = Billboard635;

HAnimSegment603ZZZ.children[5] = HAnimSite632;

let Shape639 = browser.currentScene.createNode("Shape");
let LineSet640 = browser.currentScene.createNode("LineSet");
LineSet640.vertexCount = new X3D.MFInt32([2]);
let Coordinate641 = browser.currentScene.createNode("Coordinate");
Coordinate641.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
coord = Coordinate641;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA642 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA642.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA642;

geometry = LineSet640;

HAnimSegment603ZZZ.children[6] = Shape639;

let Shape643 = browser.currentScene.createNode("Shape");
let LineSet644 = browser.currentScene.createNode("LineSet");
LineSet644.vertexCount = new X3D.MFInt32([2]);
let Coordinate645 = browser.currentScene.createNode("Coordinate");
Coordinate645.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
coord = Coordinate645;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA646 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA646.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA646;

geometry = LineSet644;

HAnimSegment603ZZZ.children[7] = Shape643;

HAnimJoint602YYY.children = new X3D.MFNode();

HAnimJoint602ZZZ.children[0] = HAnimSegment603;

let HAnimJoint647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint647.name = "vc4";
HAnimJoint647.DEF = "hanim_vc4";
HAnimJoint647.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
HAnimJoint647.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint647.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment648 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment648.name = "c4";
HAnimSegment648.DEF = "hanim_c4";
let Transform649 = browser.currentScene.createNode("Transform");
Transform649.translation = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let Transform650 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape651 = browser.currentScene.createNode("Shape");
Shape651.USE = "HAnimJointShape";
Transform650YYY.child = new X3D.undefined();

Transform650ZZZ.child[0] = Shape651;

Transform649YYY.children = new X3D.MFNode();

Transform649ZZZ.children[0] = Transform650;

HAnimSegment648YYY.children = new X3D.MFNode();

HAnimSegment648ZZZ.children[0] = Transform649;

let Shape652 = browser.currentScene.createNode("Shape");
let LineSet653 = browser.currentScene.createNode("LineSet");
LineSet653.vertexCount = new X3D.MFInt32([2]);
let Coordinate654 = browser.currentScene.createNode("Coordinate");
Coordinate654.point = new X3D.MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103]);
coord = Coordinate654;

//from vc4 to vc2 vertices 2
let ColorRGBA655 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA655.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA655;

geometry = LineSet653;

HAnimSegment648ZZZ.children[1] = Shape652;

HAnimJoint647YYY.children = new X3D.MFNode();

HAnimJoint647ZZZ.children[0] = HAnimSegment648;

let HAnimJoint656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint656.name = "vc2";
HAnimJoint656.DEF = "hanim_vc2";
HAnimJoint656.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
HAnimJoint656.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint656.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment657 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment657.name = "c2";
HAnimSegment657.DEF = "hanim_c2";
let Transform658 = browser.currentScene.createNode("Transform");
Transform658.translation = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let Transform659 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape660 = browser.currentScene.createNode("Shape");
Shape660.USE = "HAnimJointShape";
Transform659YYY.child = new X3D.undefined();

Transform659ZZZ.child[0] = Shape660;

Transform658YYY.children = new X3D.MFNode();

Transform658ZZZ.children[0] = Transform659;

HAnimSegment657YYY.children = new X3D.MFNode();

HAnimSegment657ZZZ.children[0] = Transform658;

let Shape661 = browser.currentScene.createNode("Shape");
let LineSet662 = browser.currentScene.createNode("LineSet");
LineSet662.vertexCount = new X3D.MFInt32([2]);
let Coordinate663 = browser.currentScene.createNode("Coordinate");
Coordinate663.point = new X3D.MFVec3f([0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236]);
coord = Coordinate663;

//from vc2 to skullbase vertices 2
let ColorRGBA664 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA664;

geometry = LineSet662;

HAnimSegment657ZZZ.children[1] = Shape661;

let HAnimSite665 = browser.currentScene.createNode("HAnimSite");
HAnimSite665.name = "adams_apple";
HAnimSite665.DEF = "hanim_adams_apple";
let TouchSensor666 = browser.currentScene.createNode("TouchSensor");
TouchSensor666.description = "HAnimSite 11 adams_apple";
HAnimSite665YYY.children = new X3D.MFNode();

HAnimSite665ZZZ.children[0] = TouchSensor666;

let Shape667 = browser.currentScene.createNode("Shape");
Shape667.USE = "HAnimSiteShape";
HAnimSite665ZZZ.children[1] = Shape667;

let Billboard668 = browser.currentScene.createNode("Billboard");
let Shape669 = browser.currentScene.createNode("Shape");
let Text670 = browser.currentScene.createNode("Text");
Text670.string = new X3D.MFString([new X3D.SFString("11")]);
let FontStyle671 = browser.currentScene.createNode("FontStyle");
FontStyle671.size = 0.035;
fontStyle = FontStyle671;

geometry = Text670;

Billboard668YYY.children = new X3D.MFNode();

Billboard668ZZZ.children[0] = Shape669;

HAnimSite665ZZZ.children[2] = Billboard668;

HAnimSegment657ZZZ.children[2] = HAnimSite665;

HAnimJoint656YYY.children = new X3D.MFNode();

HAnimJoint656ZZZ.children[0] = HAnimSegment657;

let HAnimJoint672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint672.name = "skullbase";
HAnimJoint672.DEF = "hanim_skullbase";
HAnimJoint672.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
HAnimJoint672.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint672.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint656ZZZ.children[1] = HAnimJoint672;

HAnimJoint647ZZZ.children[1] = HAnimJoint656;

HAnimJoint602ZZZ.children[1] = HAnimJoint647;

let HAnimJoint673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint673.name = "l_sternoclavicular";
HAnimJoint673.DEF = "hanim_l_sternoclavicular";
HAnimJoint673.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint673.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint673.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment674 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment674.name = "l_clavicle";
HAnimSegment674.DEF = "hanim_l_clavicle";
let Transform675 = browser.currentScene.createNode("Transform");
Transform675.translation = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let Transform676 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape677 = browser.currentScene.createNode("Shape");
Shape677.USE = "HAnimJointShape";
Transform676YYY.child = new X3D.undefined();

Transform676ZZZ.child[0] = Shape677;

Transform675YYY.children = new X3D.MFNode();

Transform675ZZZ.children[0] = Transform676;

HAnimSegment674YYY.children = new X3D.MFNode();

HAnimSegment674ZZZ.children[0] = Transform675;

let Shape678 = browser.currentScene.createNode("Shape");
let LineSet679 = browser.currentScene.createNode("LineSet");
LineSet679.vertexCount = new X3D.MFInt32([2]);
let Coordinate680 = browser.currentScene.createNode("Coordinate");
Coordinate680.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
coord = Coordinate680;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA681 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA681.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA681;

geometry = LineSet679;

HAnimSegment674ZZZ.children[1] = Shape678;

let HAnimSite682 = browser.currentScene.createNode("HAnimSite");
HAnimSite682.name = "l_acromion";
HAnimSite682.DEF = "hanim_l_acromion";
HAnimSite682.translation = new X3D.SFVec3f([0.2032,1.476,-0.049]);
let TouchSensor683 = browser.currentScene.createNode("TouchSensor");
TouchSensor683.description = "HAnimSite 15 l_acromion";
HAnimSite682YYY.children = new X3D.MFNode();

HAnimSite682ZZZ.children[0] = TouchSensor683;

let Shape684 = browser.currentScene.createNode("Shape");
Shape684.USE = "HAnimSiteShape";
HAnimSite682ZZZ.children[1] = Shape684;

let Billboard685 = browser.currentScene.createNode("Billboard");
let Shape686 = browser.currentScene.createNode("Shape");
let Text687 = browser.currentScene.createNode("Text");
Text687.string = new X3D.MFString([new X3D.SFString("15")]);
let FontStyle688 = browser.currentScene.createNode("FontStyle");
FontStyle688.size = 0.035;
fontStyle = FontStyle688;

geometry = Text687;

Billboard685YYY.children = new X3D.MFNode();

Billboard685ZZZ.children[0] = Shape686;

HAnimSite682ZZZ.children[2] = Billboard685;

HAnimSegment674ZZZ.children[2] = HAnimSite682;

let HAnimSite689 = browser.currentScene.createNode("HAnimSite");
HAnimSite689.name = "l_axilla_distal";
HAnimSite689.DEF = "hanim_l_axilla_distal";
HAnimSite689.translation = new X3D.SFVec3f([0.1706,1.4072,-0.0875]);
let TouchSensor690 = browser.currentScene.createNode("TouchSensor");
TouchSensor690.description = "HAnimSite 17 l_axilla_distal";
HAnimSite689YYY.children = new X3D.MFNode();

HAnimSite689ZZZ.children[0] = TouchSensor690;

let Shape691 = browser.currentScene.createNode("Shape");
Shape691.USE = "HAnimSiteShape";
HAnimSite689ZZZ.children[1] = Shape691;

let Billboard692 = browser.currentScene.createNode("Billboard");
let Shape693 = browser.currentScene.createNode("Shape");
let Text694 = browser.currentScene.createNode("Text");
Text694.string = new X3D.MFString([new X3D.SFString("17")]);
let FontStyle695 = browser.currentScene.createNode("FontStyle");
FontStyle695.size = 0.035;
fontStyle = FontStyle695;

geometry = Text694;

Billboard692YYY.children = new X3D.MFNode();

Billboard692ZZZ.children[0] = Shape693;

HAnimSite689ZZZ.children[2] = Billboard692;

HAnimSegment674ZZZ.children[3] = HAnimSite689;

let HAnimSite696 = browser.currentScene.createNode("HAnimSite");
HAnimSite696.name = "l_axilla_posterior_folds";
HAnimSite696.DEF = "hanim_l_axilla_posterior_folds";
let TouchSensor697 = browser.currentScene.createNode("TouchSensor");
TouchSensor697.description = "HAnimSite 18 l_axilla_posterior_folds";
HAnimSite696YYY.children = new X3D.MFNode();

HAnimSite696ZZZ.children[0] = TouchSensor697;

let Shape698 = browser.currentScene.createNode("Shape");
Shape698.USE = "HAnimSiteShape";
HAnimSite696ZZZ.children[1] = Shape698;

let Billboard699 = browser.currentScene.createNode("Billboard");
let Shape700 = browser.currentScene.createNode("Shape");
let Text701 = browser.currentScene.createNode("Text");
Text701.string = new X3D.MFString([new X3D.SFString("18")]);
let FontStyle702 = browser.currentScene.createNode("FontStyle");
FontStyle702.size = 0.035;
fontStyle = FontStyle702;

geometry = Text701;

Billboard699YYY.children = new X3D.MFNode();

Billboard699ZZZ.children[0] = Shape700;

HAnimSite696ZZZ.children[2] = Billboard699;

HAnimSegment674ZZZ.children[4] = HAnimSite696;

let HAnimSite703 = browser.currentScene.createNode("HAnimSite");
HAnimSite703.name = "l_axilla_proximal";
HAnimSite703.DEF = "hanim_l_axilla_proximal";
HAnimSite703.translation = new X3D.SFVec3f([0.1777,1.4065,-0.0075]);
let TouchSensor704 = browser.currentScene.createNode("TouchSensor");
TouchSensor704.description = "HAnimSite 16 l_axilla_proximal";
HAnimSite703YYY.children = new X3D.MFNode();

HAnimSite703ZZZ.children[0] = TouchSensor704;

let Shape705 = browser.currentScene.createNode("Shape");
Shape705.USE = "HAnimSiteShape";
HAnimSite703ZZZ.children[1] = Shape705;

let Billboard706 = browser.currentScene.createNode("Billboard");
let Shape707 = browser.currentScene.createNode("Shape");
let Text708 = browser.currentScene.createNode("Text");
Text708.string = new X3D.MFString([new X3D.SFString("16")]);
let FontStyle709 = browser.currentScene.createNode("FontStyle");
FontStyle709.size = 0.035;
fontStyle = FontStyle709;

geometry = Text708;

Billboard706YYY.children = new X3D.MFNode();

Billboard706ZZZ.children[0] = Shape707;

HAnimSite703ZZZ.children[2] = Billboard706;

HAnimSegment674ZZZ.children[5] = HAnimSite703;

let HAnimSite710 = browser.currentScene.createNode("HAnimSite");
HAnimSite710.name = "l_clavicale";
HAnimSite710.DEF = "hanim_l_clavicale";
HAnimSite710.translation = new X3D.SFVec3f([0.0271,1.4943,0.0394]);
let TouchSensor711 = browser.currentScene.createNode("TouchSensor");
TouchSensor711.description = "HAnimSite 14 l_clavicale";
HAnimSite710YYY.children = new X3D.MFNode();

HAnimSite710ZZZ.children[0] = TouchSensor711;

let Shape712 = browser.currentScene.createNode("Shape");
Shape712.USE = "HAnimSiteShape";
HAnimSite710ZZZ.children[1] = Shape712;

let Billboard713 = browser.currentScene.createNode("Billboard");
let Shape714 = browser.currentScene.createNode("Shape");
let Text715 = browser.currentScene.createNode("Text");
Text715.string = new X3D.MFString([new X3D.SFString("14")]);
let FontStyle716 = browser.currentScene.createNode("FontStyle");
FontStyle716.size = 0.035;
fontStyle = FontStyle716;

geometry = Text715;

Billboard713YYY.children = new X3D.MFNode();

Billboard713ZZZ.children[0] = Shape714;

HAnimSite710ZZZ.children[2] = Billboard713;

HAnimSegment674ZZZ.children[6] = HAnimSite710;

HAnimJoint673YYY.children = new X3D.MFNode();

HAnimJoint673ZZZ.children[0] = HAnimSegment674;

let HAnimJoint717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint717.name = "l_acromioclavicular";
HAnimJoint717.DEF = "hanim_l_acromioclavicular";
HAnimJoint717.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint717.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint717.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment718 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment718.name = "l_scapula";
HAnimSegment718.DEF = "hanim_l_scapula";
let Transform719 = browser.currentScene.createNode("Transform");
Transform719.translation = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let Transform720 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape721 = browser.currentScene.createNode("Shape");
Shape721.USE = "HAnimJointShape";
Transform720YYY.child = new X3D.undefined();

Transform720ZZZ.child[0] = Shape721;

Transform719YYY.children = new X3D.MFNode();

Transform719ZZZ.children[0] = Transform720;

HAnimSegment718YYY.children = new X3D.MFNode();

HAnimSegment718ZZZ.children[0] = Transform719;

let Shape722 = browser.currentScene.createNode("Shape");
let LineSet723 = browser.currentScene.createNode("LineSet");
LineSet723.vertexCount = new X3D.MFInt32([2]);
let Coordinate724 = browser.currentScene.createNode("Coordinate");
Coordinate724.point = new X3D.MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
coord = Coordinate724;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA725 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA725.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA725;

geometry = LineSet723;

HAnimSegment718ZZZ.children[1] = Shape722;

HAnimJoint717YYY.children = new X3D.MFNode();

HAnimJoint717ZZZ.children[0] = HAnimSegment718;

let HAnimJoint726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint726.name = "l_shoulder";
HAnimJoint726.DEF = "hanim_l_shoulder";
HAnimJoint726.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
HAnimJoint726.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint726.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment727 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment727.name = "l_upperarm";
HAnimSegment727.DEF = "hanim_l_upperarm";
let Transform728 = browser.currentScene.createNode("Transform");
Transform728.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let Transform729 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape730 = browser.currentScene.createNode("Shape");
Shape730.USE = "HAnimJointShape";
Transform729YYY.child = new X3D.undefined();

Transform729ZZZ.child[0] = Shape730;

Transform728YYY.children = new X3D.MFNode();

Transform728ZZZ.children[0] = Transform729;

HAnimSegment727YYY.children = new X3D.MFNode();

HAnimSegment727ZZZ.children[0] = Transform728;

let Shape731 = browser.currentScene.createNode("Shape");
let LineSet732 = browser.currentScene.createNode("LineSet");
LineSet732.vertexCount = new X3D.MFInt32([2]);
let Coordinate733 = browser.currentScene.createNode("Coordinate");
Coordinate733.point = new X3D.MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
coord = Coordinate733;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA734 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA734.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA734;

geometry = LineSet732;

HAnimSegment727ZZZ.children[1] = Shape731;

let HAnimSite735 = browser.currentScene.createNode("HAnimSite");
HAnimSite735.name = "l_bideltoid";
HAnimSite735.DEF = "hanim_l_bideltoid";
let TouchSensor736 = browser.currentScene.createNode("TouchSensor");
TouchSensor736.description = "HAnimSite 96 l_bideltoid";
HAnimSite735YYY.children = new X3D.MFNode();

HAnimSite735ZZZ.children[0] = TouchSensor736;

let Shape737 = browser.currentScene.createNode("Shape");
Shape737.USE = "HAnimSiteShape";
HAnimSite735ZZZ.children[1] = Shape737;

let Billboard738 = browser.currentScene.createNode("Billboard");
let Shape739 = browser.currentScene.createNode("Shape");
let Text740 = browser.currentScene.createNode("Text");
Text740.string = new X3D.MFString([new X3D.SFString("96")]);
let FontStyle741 = browser.currentScene.createNode("FontStyle");
FontStyle741.size = 0.035;
fontStyle = FontStyle741;

geometry = Text740;

Billboard738YYY.children = new X3D.MFNode();

Billboard738ZZZ.children[0] = Shape739;

HAnimSite735ZZZ.children[2] = Billboard738;

HAnimSegment727ZZZ.children[2] = HAnimSite735;

let HAnimSite742 = browser.currentScene.createNode("HAnimSite");
HAnimSite742.name = "l_humeral_lateral_epicondyles";
HAnimSite742.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite742.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
let TouchSensor743 = browser.currentScene.createNode("TouchSensor");
TouchSensor743.description = "HAnimSite 63 l_humeral_lateral_epicondyles";
HAnimSite742YYY.children = new X3D.MFNode();

HAnimSite742ZZZ.children[0] = TouchSensor743;

let Shape744 = browser.currentScene.createNode("Shape");
Shape744.USE = "HAnimSiteShape";
HAnimSite742ZZZ.children[1] = Shape744;

let Billboard745 = browser.currentScene.createNode("Billboard");
let Shape746 = browser.currentScene.createNode("Shape");
let Text747 = browser.currentScene.createNode("Text");
Text747.string = new X3D.MFString([new X3D.SFString("63")]);
let FontStyle748 = browser.currentScene.createNode("FontStyle");
FontStyle748.size = 0.035;
fontStyle = FontStyle748;

geometry = Text747;

Billboard745YYY.children = new X3D.MFNode();

Billboard745ZZZ.children[0] = Shape746;

HAnimSite742ZZZ.children[2] = Billboard745;

HAnimSegment727ZZZ.children[3] = HAnimSite742;

HAnimJoint726YYY.children = new X3D.MFNode();

HAnimJoint726ZZZ.children[0] = HAnimSegment727;

let HAnimJoint749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint749.name = "l_elbow";
HAnimJoint749.DEF = "hanim_l_elbow";
HAnimJoint749.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
HAnimJoint749.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint749.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment750 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment750.name = "l_forearm";
HAnimSegment750.DEF = "hanim_l_forearm";
let Transform751 = browser.currentScene.createNode("Transform");
Transform751.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let Transform752 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape753 = browser.currentScene.createNode("Shape");
Shape753.USE = "HAnimJointShape";
Transform752YYY.child = new X3D.undefined();

Transform752ZZZ.child[0] = Shape753;

Transform751YYY.children = new X3D.MFNode();

Transform751ZZZ.children[0] = Transform752;

HAnimSegment750YYY.children = new X3D.MFNode();

HAnimSegment750ZZZ.children[0] = Transform751;

let Shape754 = browser.currentScene.createNode("Shape");
let LineSet755 = browser.currentScene.createNode("LineSet");
LineSet755.vertexCount = new X3D.MFInt32([2]);
let Coordinate756 = browser.currentScene.createNode("Coordinate");
Coordinate756.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
coord = Coordinate756;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA757 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA757;

geometry = LineSet755;

HAnimSegment750ZZZ.children[1] = Shape754;

let HAnimSite758 = browser.currentScene.createNode("HAnimSite");
HAnimSite758.name = "l_humeral_medial_epicondyles";
HAnimSite758.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite758.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
let TouchSensor759 = browser.currentScene.createNode("TouchSensor");
TouchSensor759.description = "HAnimSite 64 l_humeral_medial_epicondyles";
HAnimSite758YYY.children = new X3D.MFNode();

HAnimSite758ZZZ.children[0] = TouchSensor759;

let Shape760 = browser.currentScene.createNode("Shape");
Shape760.USE = "HAnimSiteShape";
HAnimSite758ZZZ.children[1] = Shape760;

let Billboard761 = browser.currentScene.createNode("Billboard");
let Shape762 = browser.currentScene.createNode("Shape");
let Text763 = browser.currentScene.createNode("Text");
Text763.string = new X3D.MFString([new X3D.SFString("64")]);
let FontStyle764 = browser.currentScene.createNode("FontStyle");
FontStyle764.size = 0.035;
fontStyle = FontStyle764;

geometry = Text763;

Billboard761YYY.children = new X3D.MFNode();

Billboard761ZZZ.children[0] = Shape762;

HAnimSite758ZZZ.children[2] = Billboard761;

HAnimSegment750ZZZ.children[2] = HAnimSite758;

let HAnimSite765 = browser.currentScene.createNode("HAnimSite");
HAnimSite765.name = "l_olecranon";
HAnimSite765.DEF = "hanim_l_olecranon";
HAnimSite765.translation = new X3D.SFVec3f([-0.1962,1.1375,-0.1123]);
let TouchSensor766 = browser.currentScene.createNode("TouchSensor");
TouchSensor766.description = "HAnimSite 65 l_olecranon";
HAnimSite765YYY.children = new X3D.MFNode();

HAnimSite765ZZZ.children[0] = TouchSensor766;

let Shape767 = browser.currentScene.createNode("Shape");
Shape767.USE = "HAnimSiteShape";
HAnimSite765ZZZ.children[1] = Shape767;

let Billboard768 = browser.currentScene.createNode("Billboard");
let Shape769 = browser.currentScene.createNode("Shape");
let Text770 = browser.currentScene.createNode("Text");
Text770.string = new X3D.MFString([new X3D.SFString("65")]);
let FontStyle771 = browser.currentScene.createNode("FontStyle");
FontStyle771.size = 0.035;
fontStyle = FontStyle771;

geometry = Text770;

Billboard768YYY.children = new X3D.MFNode();

Billboard768ZZZ.children[0] = Shape769;

HAnimSite765ZZZ.children[2] = Billboard768;

HAnimSegment750ZZZ.children[3] = HAnimSite765;

let HAnimSite772 = browser.currentScene.createNode("HAnimSite");
HAnimSite772.name = "l_radial_styloid";
HAnimSite772.DEF = "hanim_l_radial_styloid";
HAnimSite772.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
let TouchSensor773 = browser.currentScene.createNode("TouchSensor");
TouchSensor773.description = "HAnimSite 71 l_radial_styloid";
HAnimSite772YYY.children = new X3D.MFNode();

HAnimSite772ZZZ.children[0] = TouchSensor773;

let Shape774 = browser.currentScene.createNode("Shape");
Shape774.USE = "HAnimSiteShape";
HAnimSite772ZZZ.children[1] = Shape774;

let Billboard775 = browser.currentScene.createNode("Billboard");
let Shape776 = browser.currentScene.createNode("Shape");
let Text777 = browser.currentScene.createNode("Text");
Text777.string = new X3D.MFString([new X3D.SFString("71")]);
let FontStyle778 = browser.currentScene.createNode("FontStyle");
FontStyle778.size = 0.035;
fontStyle = FontStyle778;

geometry = Text777;

Billboard775YYY.children = new X3D.MFNode();

Billboard775ZZZ.children[0] = Shape776;

HAnimSite772ZZZ.children[2] = Billboard775;

HAnimSegment750ZZZ.children[4] = HAnimSite772;

let HAnimSite779 = browser.currentScene.createNode("HAnimSite");
HAnimSite779.name = "l_radiale";
HAnimSite779.DEF = "hanim_l_radiale";
HAnimSite779.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
let TouchSensor780 = browser.currentScene.createNode("TouchSensor");
TouchSensor780.description = "HAnimSite 69 l_radiale";
HAnimSite779YYY.children = new X3D.MFNode();

HAnimSite779ZZZ.children[0] = TouchSensor780;

let Shape781 = browser.currentScene.createNode("Shape");
Shape781.USE = "HAnimSiteShape";
HAnimSite779ZZZ.children[1] = Shape781;

let Billboard782 = browser.currentScene.createNode("Billboard");
let Shape783 = browser.currentScene.createNode("Shape");
let Text784 = browser.currentScene.createNode("Text");
Text784.string = new X3D.MFString([new X3D.SFString("69")]);
let FontStyle785 = browser.currentScene.createNode("FontStyle");
FontStyle785.size = 0.035;
fontStyle = FontStyle785;

geometry = Text784;

Billboard782YYY.children = new X3D.MFNode();

Billboard782ZZZ.children[0] = Shape783;

HAnimSite779ZZZ.children[2] = Billboard782;

HAnimSegment750ZZZ.children[5] = HAnimSite779;

HAnimJoint749YYY.children = new X3D.MFNode();

HAnimJoint749ZZZ.children[0] = HAnimSegment750;

let HAnimJoint786 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint786.name = "l_radiocarpal";
HAnimJoint786.DEF = "hanim_l_radiocarpal";
HAnimJoint786.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
HAnimJoint786.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint786.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment787.name = "l_carpal";
HAnimSegment787.DEF = "hanim_l_carpal";
let Transform788 = browser.currentScene.createNode("Transform");
Transform788.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
Transform788.translation = new X3D.SFVec3f([0.2,0.85,-0.05]);
Transform788.rotation = new X3D.SFRotation([0,0,1,-3.14]);
//Transform left hand
let Transform789 = browser.currentScene.createNode("Transform");
Transform789.rotation = new X3D.SFRotation([0,1,0,-1.57]);
//Transform left hand
let Shape790 = browser.currentScene.createNode("Shape");
Shape790.USE = "HAnimJointShape";
Transform789YYY.child = new X3D.undefined();

Transform789ZZZ.child[0] = Shape790;

Transform788YYY.children = new X3D.MFNode();

Transform788ZZZ.children[0] = Transform789;

HAnimSegment787YYY.children = new X3D.MFNode();

HAnimSegment787ZZZ.children[0] = Transform788;

let Shape791 = browser.currentScene.createNode("Shape");
let LineSet792 = browser.currentScene.createNode("LineSet");
LineSet792.vertexCount = new X3D.MFInt32([2]);
let Coordinate793 = browser.currentScene.createNode("Coordinate");
Coordinate793.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
coord = Coordinate793;

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
let ColorRGBA794 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA794.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA794;

geometry = LineSet792;

HAnimSegment787ZZZ.children[1] = Shape791;

let HAnimSite795 = browser.currentScene.createNode("HAnimSite");
HAnimSite795.name = "l_ulnar_styloid";
HAnimSite795.DEF = "hanim_l_ulnar_styloid";
HAnimSite795.translation = new X3D.SFVec3f([-0.2142,0.8529,-0.0648]);
let TouchSensor796 = browser.currentScene.createNode("TouchSensor");
TouchSensor796.description = "HAnimSite 70 l_ulnar_styloid";
HAnimSite795YYY.children = new X3D.MFNode();

HAnimSite795ZZZ.children[0] = TouchSensor796;

let Shape797 = browser.currentScene.createNode("Shape");
Shape797.USE = "HAnimSiteShape";
HAnimSite795ZZZ.children[1] = Shape797;

let Billboard798 = browser.currentScene.createNode("Billboard");
let Shape799 = browser.currentScene.createNode("Shape");
let Text800 = browser.currentScene.createNode("Text");
Text800.string = new X3D.MFString([new X3D.SFString("70")]);
let FontStyle801 = browser.currentScene.createNode("FontStyle");
FontStyle801.size = 0.035;
fontStyle = FontStyle801;

geometry = Text800;

Billboard798YYY.children = new X3D.MFNode();

Billboard798ZZZ.children[0] = Shape799;

HAnimSite795ZZZ.children[2] = Billboard798;

HAnimSegment787ZZZ.children[2] = HAnimSite795;

let Shape802 = browser.currentScene.createNode("Shape");
let LineSet803 = browser.currentScene.createNode("LineSet");
LineSet803.vertexCount = new X3D.MFInt32([2]);
let Coordinate804 = browser.currentScene.createNode("Coordinate");
Coordinate804.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
coord = Coordinate804;

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
let ColorRGBA805 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA805.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA805;

geometry = LineSet803;

HAnimSegment787ZZZ.children[3] = Shape802;

let Shape806 = browser.currentScene.createNode("Shape");
let LineSet807 = browser.currentScene.createNode("LineSet");
LineSet807.vertexCount = new X3D.MFInt32([2]);
let Coordinate808 = browser.currentScene.createNode("Coordinate");
Coordinate808.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
coord = Coordinate808;

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
let ColorRGBA809 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA809.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA809;

geometry = LineSet807;

HAnimSegment787ZZZ.children[4] = Shape806;

let Shape810 = browser.currentScene.createNode("Shape");
let LineSet811 = browser.currentScene.createNode("LineSet");
LineSet811.vertexCount = new X3D.MFInt32([2]);
let Coordinate812 = browser.currentScene.createNode("Coordinate");
Coordinate812.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
coord = Coordinate812;

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
let ColorRGBA813 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA813.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA813;

geometry = LineSet811;

HAnimSegment787ZZZ.children[5] = Shape810;

let Shape814 = browser.currentScene.createNode("Shape");
let LineSet815 = browser.currentScene.createNode("LineSet");
LineSet815.vertexCount = new X3D.MFInt32([2]);
let Coordinate816 = browser.currentScene.createNode("Coordinate");
Coordinate816.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
coord = Coordinate816;

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
let ColorRGBA817 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA817.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA817;

geometry = LineSet815;

HAnimSegment787ZZZ.children[6] = Shape814;

HAnimJoint786YYY.children = new X3D.MFNode();

HAnimJoint786ZZZ.children[0] = HAnimSegment787;

let HAnimJoint818 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint818.name = "l_carpometacarpal_1";
HAnimJoint818.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint818.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint818.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint818.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment819.name = "l_metacarpal_1";
HAnimSegment819.DEF = "hanim_l_metacarpal_1";
let Transform820 = browser.currentScene.createNode("Transform");
Transform820.translation = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let Transform821 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape822 = browser.currentScene.createNode("Shape");
Shape822.USE = "HAnimJointShape";
Transform821YYY.child = new X3D.undefined();

Transform821ZZZ.child[0] = Shape822;

Transform820YYY.children = new X3D.MFNode();

Transform820ZZZ.children[0] = Transform821;

HAnimSegment819YYY.children = new X3D.MFNode();

HAnimSegment819ZZZ.children[0] = Transform820;

let Shape823 = browser.currentScene.createNode("Shape");
let LineSet824 = browser.currentScene.createNode("LineSet");
LineSet824.vertexCount = new X3D.MFInt32([2]);
let Coordinate825 = browser.currentScene.createNode("Coordinate");
Coordinate825.point = new X3D.MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
coord = Coordinate825;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA826 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA826.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA826;

geometry = LineSet824;

HAnimSegment819ZZZ.children[1] = Shape823;

HAnimJoint818YYY.children = new X3D.MFNode();

HAnimJoint818ZZZ.children[0] = HAnimSegment819;

let HAnimJoint827 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint827.name = "l_metacarpophalangeal_1";
HAnimJoint827.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint827.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint827.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint827.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment828.name = "l_carpal_proximal_phalanx_1";
HAnimSegment828.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform829 = browser.currentScene.createNode("Transform");
Transform829.translation = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let Transform830 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape831 = browser.currentScene.createNode("Shape");
Shape831.USE = "HAnimJointShape";
Transform830YYY.child = new X3D.undefined();

Transform830ZZZ.child[0] = Shape831;

Transform829YYY.children = new X3D.MFNode();

Transform829ZZZ.children[0] = Transform830;

HAnimSegment828YYY.children = new X3D.MFNode();

HAnimSegment828ZZZ.children[0] = Transform829;

let Shape832 = browser.currentScene.createNode("Shape");
let LineSet833 = browser.currentScene.createNode("LineSet");
LineSet833.vertexCount = new X3D.MFInt32([2]);
let Coordinate834 = browser.currentScene.createNode("Coordinate");
Coordinate834.point = new X3D.MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
coord = Coordinate834;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA835 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA835.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA835;

geometry = LineSet833;

HAnimSegment828ZZZ.children[1] = Shape832;

HAnimJoint827YYY.children = new X3D.MFNode();

HAnimJoint827ZZZ.children[0] = HAnimSegment828;

let HAnimJoint836 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint836.name = "l_carpal_interphalangeal_1";
HAnimJoint836.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint836.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint836.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint836.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint827ZZZ.children[1] = HAnimJoint836;

HAnimJoint818ZZZ.children[1] = HAnimJoint827;

HAnimJoint786ZZZ.children[1] = HAnimJoint818;

let HAnimJoint837 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint837.name = "l_carpometacarpal_2";
HAnimJoint837.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint837.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint837.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint837.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment838.name = "l_metacarpal_2";
HAnimSegment838.DEF = "hanim_l_metacarpal_2";
let Transform839 = browser.currentScene.createNode("Transform");
Transform839.translation = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let Transform840 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape841 = browser.currentScene.createNode("Shape");
Shape841.USE = "HAnimJointShape";
Transform840YYY.child = new X3D.undefined();

Transform840ZZZ.child[0] = Shape841;

Transform839YYY.children = new X3D.MFNode();

Transform839ZZZ.children[0] = Transform840;

HAnimSegment838YYY.children = new X3D.MFNode();

HAnimSegment838ZZZ.children[0] = Transform839;

let Shape842 = browser.currentScene.createNode("Shape");
let LineSet843 = browser.currentScene.createNode("LineSet");
LineSet843.vertexCount = new X3D.MFInt32([2]);
let Coordinate844 = browser.currentScene.createNode("Coordinate");
Coordinate844.point = new X3D.MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
coord = Coordinate844;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA845 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA845.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA845;

geometry = LineSet843;

HAnimSegment838ZZZ.children[1] = Shape842;

let HAnimSite846 = browser.currentScene.createNode("HAnimSite");
HAnimSite846.name = "l_metacarpal_phalanx_2";
HAnimSite846.DEF = "hanim_l_metacarpal_phalanx_2";
HAnimSite846.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
let TouchSensor847 = browser.currentScene.createNode("TouchSensor");
TouchSensor847.description = "HAnimSite 75 l_metacarpal_phalanx_2";
HAnimSite846YYY.children = new X3D.MFNode();

HAnimSite846ZZZ.children[0] = TouchSensor847;

let Shape848 = browser.currentScene.createNode("Shape");
Shape848.USE = "HAnimSiteShape";
HAnimSite846ZZZ.children[1] = Shape848;

let Billboard849 = browser.currentScene.createNode("Billboard");
let Shape850 = browser.currentScene.createNode("Shape");
let Text851 = browser.currentScene.createNode("Text");
Text851.string = new X3D.MFString([new X3D.SFString("75")]);
let FontStyle852 = browser.currentScene.createNode("FontStyle");
FontStyle852.size = 0.035;
fontStyle = FontStyle852;

geometry = Text851;

Billboard849YYY.children = new X3D.MFNode();

Billboard849ZZZ.children[0] = Shape850;

HAnimSite846ZZZ.children[2] = Billboard849;

HAnimSegment838ZZZ.children[2] = HAnimSite846;

HAnimJoint837YYY.children = new X3D.MFNode();

HAnimJoint837ZZZ.children[0] = HAnimSegment838;

let HAnimJoint853 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint853.name = "l_metacarpophalangeal_2";
HAnimJoint853.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint853.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint853.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint853.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment854 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment854.name = "l_carpal_proximal_phalanx_2";
HAnimSegment854.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform855 = browser.currentScene.createNode("Transform");
Transform855.translation = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let Transform856 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape857 = browser.currentScene.createNode("Shape");
Shape857.USE = "HAnimJointShape";
Transform856YYY.child = new X3D.undefined();

Transform856ZZZ.child[0] = Shape857;

Transform855YYY.children = new X3D.MFNode();

Transform855ZZZ.children[0] = Transform856;

HAnimSegment854YYY.children = new X3D.MFNode();

HAnimSegment854ZZZ.children[0] = Transform855;

let Shape858 = browser.currentScene.createNode("Shape");
let LineSet859 = browser.currentScene.createNode("LineSet");
LineSet859.vertexCount = new X3D.MFInt32([2]);
let Coordinate860 = browser.currentScene.createNode("Coordinate");
Coordinate860.point = new X3D.MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
coord = Coordinate860;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA861 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA861.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA861;

geometry = LineSet859;

HAnimSegment854ZZZ.children[1] = Shape858;

HAnimJoint853YYY.children = new X3D.MFNode();

HAnimJoint853ZZZ.children[0] = HAnimSegment854;

let HAnimJoint862 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint862.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint862.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint862.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint862.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint862.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment863.name = "l_carpal_middle_phalanx_2";
HAnimSegment863.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform864 = browser.currentScene.createNode("Transform");
Transform864.translation = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let Transform865 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape866 = browser.currentScene.createNode("Shape");
Shape866.USE = "HAnimJointShape";
Transform865YYY.child = new X3D.undefined();

Transform865ZZZ.child[0] = Shape866;

Transform864YYY.children = new X3D.MFNode();

Transform864ZZZ.children[0] = Transform865;

HAnimSegment863YYY.children = new X3D.MFNode();

HAnimSegment863ZZZ.children[0] = Transform864;

let Shape867 = browser.currentScene.createNode("Shape");
let LineSet868 = browser.currentScene.createNode("LineSet");
LineSet868.vertexCount = new X3D.MFInt32([2]);
let Coordinate869 = browser.currentScene.createNode("Coordinate");
Coordinate869.point = new X3D.MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
coord = Coordinate869;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA870 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA870;

geometry = LineSet868;

HAnimSegment863ZZZ.children[1] = Shape867;

HAnimJoint862YYY.children = new X3D.MFNode();

HAnimJoint862ZZZ.children[0] = HAnimSegment863;

let HAnimJoint871 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint871.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint871.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint871.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint871.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint871.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint862ZZZ.children[1] = HAnimJoint871;

HAnimJoint853ZZZ.children[1] = HAnimJoint862;

HAnimJoint837ZZZ.children[1] = HAnimJoint853;

HAnimJoint786ZZZ.children[2] = HAnimJoint837;

let HAnimJoint872 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint872.name = "l_carpometacarpal_3";
HAnimJoint872.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint872.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint872.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint872.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment873 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment873.name = "l_metacarpal_3";
HAnimSegment873.DEF = "hanim_l_metacarpal_3";
let Transform874 = browser.currentScene.createNode("Transform");
Transform874.translation = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let Transform875 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape876 = browser.currentScene.createNode("Shape");
Shape876.USE = "HAnimJointShape";
Transform875YYY.child = new X3D.undefined();

Transform875ZZZ.child[0] = Shape876;

Transform874YYY.children = new X3D.MFNode();

Transform874ZZZ.children[0] = Transform875;

HAnimSegment873YYY.children = new X3D.MFNode();

HAnimSegment873ZZZ.children[0] = Transform874;

let Shape877 = browser.currentScene.createNode("Shape");
let LineSet878 = browser.currentScene.createNode("LineSet");
LineSet878.vertexCount = new X3D.MFInt32([2]);
let Coordinate879 = browser.currentScene.createNode("Coordinate");
Coordinate879.point = new X3D.MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
coord = Coordinate879;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA880 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA880.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA880;

geometry = LineSet878;

HAnimSegment873ZZZ.children[1] = Shape877;

let HAnimSite881 = browser.currentScene.createNode("HAnimSite");
HAnimSite881.name = "l_metacarpal_phalanx_3";
HAnimSite881.DEF = "hanim_l_metacarpal_phalanx_3";
let TouchSensor882 = browser.currentScene.createNode("TouchSensor");
TouchSensor882.description = "HAnimSite 76 l_metacarpal_phalanx_3";
HAnimSite881YYY.children = new X3D.MFNode();

HAnimSite881ZZZ.children[0] = TouchSensor882;

let Shape883 = browser.currentScene.createNode("Shape");
Shape883.USE = "HAnimSiteShape";
HAnimSite881ZZZ.children[1] = Shape883;

let Billboard884 = browser.currentScene.createNode("Billboard");
let Shape885 = browser.currentScene.createNode("Shape");
let Text886 = browser.currentScene.createNode("Text");
Text886.string = new X3D.MFString([new X3D.SFString("76")]);
let FontStyle887 = browser.currentScene.createNode("FontStyle");
FontStyle887.size = 0.035;
fontStyle = FontStyle887;

geometry = Text886;

Billboard884YYY.children = new X3D.MFNode();

Billboard884ZZZ.children[0] = Shape885;

HAnimSite881ZZZ.children[2] = Billboard884;

HAnimSegment873ZZZ.children[2] = HAnimSite881;

HAnimJoint872YYY.children = new X3D.MFNode();

HAnimJoint872ZZZ.children[0] = HAnimSegment873;

let HAnimJoint888 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint888.name = "l_metacarpophalangeal_3";
HAnimJoint888.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint888.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint888.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint888.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment889 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment889.name = "l_carpal_proximal_phalanx_3";
HAnimSegment889.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform890 = browser.currentScene.createNode("Transform");
Transform890.translation = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let Transform891 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape892 = browser.currentScene.createNode("Shape");
Shape892.USE = "HAnimJointShape";
Transform891YYY.child = new X3D.undefined();

Transform891ZZZ.child[0] = Shape892;

Transform890YYY.children = new X3D.MFNode();

Transform890ZZZ.children[0] = Transform891;

HAnimSegment889YYY.children = new X3D.MFNode();

HAnimSegment889ZZZ.children[0] = Transform890;

let Shape893 = browser.currentScene.createNode("Shape");
let LineSet894 = browser.currentScene.createNode("LineSet");
LineSet894.vertexCount = new X3D.MFInt32([2]);
let Coordinate895 = browser.currentScene.createNode("Coordinate");
Coordinate895.point = new X3D.MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
coord = Coordinate895;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA896 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA896.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA896;

geometry = LineSet894;

HAnimSegment889ZZZ.children[1] = Shape893;

HAnimJoint888YYY.children = new X3D.MFNode();

HAnimJoint888ZZZ.children[0] = HAnimSegment889;

let HAnimJoint897 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint897.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint897.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint897.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint897.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint897.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment898 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment898.name = "l_carpal_middle_phalanx_3";
HAnimSegment898.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform899 = browser.currentScene.createNode("Transform");
Transform899.translation = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let Transform900 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape901 = browser.currentScene.createNode("Shape");
Shape901.USE = "HAnimJointShape";
Transform900YYY.child = new X3D.undefined();

Transform900ZZZ.child[0] = Shape901;

Transform899YYY.children = new X3D.MFNode();

Transform899ZZZ.children[0] = Transform900;

HAnimSegment898YYY.children = new X3D.MFNode();

HAnimSegment898ZZZ.children[0] = Transform899;

let Shape902 = browser.currentScene.createNode("Shape");
let LineSet903 = browser.currentScene.createNode("LineSet");
LineSet903.vertexCount = new X3D.MFInt32([2]);
let Coordinate904 = browser.currentScene.createNode("Coordinate");
Coordinate904.point = new X3D.MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
coord = Coordinate904;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA905 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA905;

geometry = LineSet903;

HAnimSegment898ZZZ.children[1] = Shape902;

HAnimJoint897YYY.children = new X3D.MFNode();

HAnimJoint897ZZZ.children[0] = HAnimSegment898;

let HAnimJoint906 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint906.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint906.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint906.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint906.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint906.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint897ZZZ.children[1] = HAnimJoint906;

HAnimJoint888ZZZ.children[1] = HAnimJoint897;

HAnimJoint872ZZZ.children[1] = HAnimJoint888;

HAnimJoint786ZZZ.children[3] = HAnimJoint872;

let HAnimJoint907 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint907.name = "l_carpometacarpal_4";
HAnimJoint907.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint907.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint907.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint907.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment908 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment908.name = "l_metacarpal_4";
HAnimSegment908.DEF = "hanim_l_metacarpal_4";
let Transform909 = browser.currentScene.createNode("Transform");
Transform909.translation = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let Transform910 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape911 = browser.currentScene.createNode("Shape");
Shape911.USE = "HAnimJointShape";
Transform910YYY.child = new X3D.undefined();

Transform910ZZZ.child[0] = Shape911;

Transform909YYY.children = new X3D.MFNode();

Transform909ZZZ.children[0] = Transform910;

HAnimSegment908YYY.children = new X3D.MFNode();

HAnimSegment908ZZZ.children[0] = Transform909;

let Shape912 = browser.currentScene.createNode("Shape");
let LineSet913 = browser.currentScene.createNode("LineSet");
LineSet913.vertexCount = new X3D.MFInt32([2]);
let Coordinate914 = browser.currentScene.createNode("Coordinate");
Coordinate914.point = new X3D.MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
coord = Coordinate914;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA915 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA915.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA915;

geometry = LineSet913;

HAnimSegment908ZZZ.children[1] = Shape912;

HAnimJoint907YYY.children = new X3D.MFNode();

HAnimJoint907ZZZ.children[0] = HAnimSegment908;

let HAnimJoint916 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint916.name = "l_metacarpophalangeal_4";
HAnimJoint916.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint916.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint916.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint916.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment917 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment917.name = "l_carpal_proximal_phalanx_4";
HAnimSegment917.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform918 = browser.currentScene.createNode("Transform");
Transform918.translation = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let Transform919 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape920 = browser.currentScene.createNode("Shape");
Shape920.USE = "HAnimJointShape";
Transform919YYY.child = new X3D.undefined();

Transform919ZZZ.child[0] = Shape920;

Transform918YYY.children = new X3D.MFNode();

Transform918ZZZ.children[0] = Transform919;

HAnimSegment917YYY.children = new X3D.MFNode();

HAnimSegment917ZZZ.children[0] = Transform918;

let Shape921 = browser.currentScene.createNode("Shape");
let LineSet922 = browser.currentScene.createNode("LineSet");
LineSet922.vertexCount = new X3D.MFInt32([2]);
let Coordinate923 = browser.currentScene.createNode("Coordinate");
Coordinate923.point = new X3D.MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
coord = Coordinate923;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA924 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA924;

geometry = LineSet922;

HAnimSegment917ZZZ.children[1] = Shape921;

HAnimJoint916YYY.children = new X3D.MFNode();

HAnimJoint916ZZZ.children[0] = HAnimSegment917;

let HAnimJoint925 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint925.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint925.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint925.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint925.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint925.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment926 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment926.name = "l_carpal_middle_phalanx_4";
HAnimSegment926.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform927 = browser.currentScene.createNode("Transform");
Transform927.translation = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let Transform928 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape929 = browser.currentScene.createNode("Shape");
Shape929.USE = "HAnimJointShape";
Transform928YYY.child = new X3D.undefined();

Transform928ZZZ.child[0] = Shape929;

Transform927YYY.children = new X3D.MFNode();

Transform927ZZZ.children[0] = Transform928;

HAnimSegment926YYY.children = new X3D.MFNode();

HAnimSegment926ZZZ.children[0] = Transform927;

let Shape930 = browser.currentScene.createNode("Shape");
let LineSet931 = browser.currentScene.createNode("LineSet");
LineSet931.vertexCount = new X3D.MFInt32([2]);
let Coordinate932 = browser.currentScene.createNode("Coordinate");
Coordinate932.point = new X3D.MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
coord = Coordinate932;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA933 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA933.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA933;

geometry = LineSet931;

HAnimSegment926ZZZ.children[1] = Shape930;

HAnimJoint925YYY.children = new X3D.MFNode();

HAnimJoint925ZZZ.children[0] = HAnimSegment926;

let HAnimJoint934 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint934.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint934.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint934.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint934.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint934.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint925ZZZ.children[1] = HAnimJoint934;

HAnimJoint916ZZZ.children[1] = HAnimJoint925;

HAnimJoint907ZZZ.children[1] = HAnimJoint916;

HAnimJoint786ZZZ.children[4] = HAnimJoint907;

let HAnimJoint935 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint935.name = "l_carpometacarpal_5";
HAnimJoint935.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint935.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint935.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint935.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment936 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment936.name = "l_metacarpal_5";
HAnimSegment936.DEF = "hanim_l_metacarpal_5";
let Transform937 = browser.currentScene.createNode("Transform");
Transform937.translation = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let Transform938 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape939 = browser.currentScene.createNode("Shape");
Shape939.USE = "HAnimJointShape";
Transform938YYY.child = new X3D.undefined();

Transform938ZZZ.child[0] = Shape939;

Transform937YYY.children = new X3D.MFNode();

Transform937ZZZ.children[0] = Transform938;

HAnimSegment936YYY.children = new X3D.MFNode();

HAnimSegment936ZZZ.children[0] = Transform937;

let Shape940 = browser.currentScene.createNode("Shape");
let LineSet941 = browser.currentScene.createNode("LineSet");
LineSet941.vertexCount = new X3D.MFInt32([2]);
let Coordinate942 = browser.currentScene.createNode("Coordinate");
Coordinate942.point = new X3D.MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
coord = Coordinate942;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA943 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA943.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA943;

geometry = LineSet941;

HAnimSegment936ZZZ.children[1] = Shape940;

let HAnimSite944 = browser.currentScene.createNode("HAnimSite");
HAnimSite944.name = "l_metacarpal_phalanx_5";
HAnimSite944.DEF = "hanim_l_metacarpal_phalanx_5";
HAnimSite944.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
let TouchSensor945 = browser.currentScene.createNode("TouchSensor");
TouchSensor945.description = "HAnimSite 77 l_metacarpal_phalanx_5";
HAnimSite944YYY.children = new X3D.MFNode();

HAnimSite944ZZZ.children[0] = TouchSensor945;

let Shape946 = browser.currentScene.createNode("Shape");
Shape946.USE = "HAnimSiteShape";
HAnimSite944ZZZ.children[1] = Shape946;

let Billboard947 = browser.currentScene.createNode("Billboard");
let Shape948 = browser.currentScene.createNode("Shape");
let Text949 = browser.currentScene.createNode("Text");
Text949.string = new X3D.MFString([new X3D.SFString("77")]);
let FontStyle950 = browser.currentScene.createNode("FontStyle");
FontStyle950.size = 0.035;
fontStyle = FontStyle950;

geometry = Text949;

Billboard947YYY.children = new X3D.MFNode();

Billboard947ZZZ.children[0] = Shape948;

HAnimSite944ZZZ.children[2] = Billboard947;

HAnimSegment936ZZZ.children[2] = HAnimSite944;

HAnimJoint935YYY.children = new X3D.MFNode();

HAnimJoint935ZZZ.children[0] = HAnimSegment936;

let HAnimJoint951 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint951.name = "l_metacarpophalangeal_5";
HAnimJoint951.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint951.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint951.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint951.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment952 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment952.name = "l_carpal_proximal_phalanx_5";
HAnimSegment952.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform953 = browser.currentScene.createNode("Transform");
Transform953.translation = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let Transform954 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape955 = browser.currentScene.createNode("Shape");
Shape955.USE = "HAnimJointShape";
Transform954YYY.child = new X3D.undefined();

Transform954ZZZ.child[0] = Shape955;

Transform953YYY.children = new X3D.MFNode();

Transform953ZZZ.children[0] = Transform954;

HAnimSegment952YYY.children = new X3D.MFNode();

HAnimSegment952ZZZ.children[0] = Transform953;

let Shape956 = browser.currentScene.createNode("Shape");
let LineSet957 = browser.currentScene.createNode("LineSet");
LineSet957.vertexCount = new X3D.MFInt32([2]);
let Coordinate958 = browser.currentScene.createNode("Coordinate");
Coordinate958.point = new X3D.MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
coord = Coordinate958;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA959 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA959.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA959;

geometry = LineSet957;

HAnimSegment952ZZZ.children[1] = Shape956;

HAnimJoint951YYY.children = new X3D.MFNode();

HAnimJoint951ZZZ.children[0] = HAnimSegment952;

let HAnimJoint960 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint960.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint960.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint960.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint960.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint960.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment961 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment961.name = "l_carpal_middle_phalanx_5";
HAnimSegment961.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform962 = browser.currentScene.createNode("Transform");
Transform962.translation = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let Transform963 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape964 = browser.currentScene.createNode("Shape");
Shape964.USE = "HAnimJointShape";
Transform963YYY.child = new X3D.undefined();

Transform963ZZZ.child[0] = Shape964;

Transform962YYY.children = new X3D.MFNode();

Transform962ZZZ.children[0] = Transform963;

HAnimSegment961YYY.children = new X3D.MFNode();

HAnimSegment961ZZZ.children[0] = Transform962;

let Shape965 = browser.currentScene.createNode("Shape");
let LineSet966 = browser.currentScene.createNode("LineSet");
LineSet966.vertexCount = new X3D.MFInt32([2]);
let Coordinate967 = browser.currentScene.createNode("Coordinate");
Coordinate967.point = new X3D.MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
coord = Coordinate967;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA968 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA968.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA968;

geometry = LineSet966;

HAnimSegment961ZZZ.children[1] = Shape965;

HAnimJoint960YYY.children = new X3D.MFNode();

HAnimJoint960ZZZ.children[0] = HAnimSegment961;

let HAnimJoint969 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint969.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint969.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint969.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint969.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint969.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint960ZZZ.children[1] = HAnimJoint969;

HAnimJoint951ZZZ.children[1] = HAnimJoint960;

HAnimJoint935ZZZ.children[1] = HAnimJoint951;

HAnimJoint786ZZZ.children[5] = HAnimJoint935;

HAnimJoint749ZZZ.children[1] = HAnimJoint786;

HAnimJoint726ZZZ.children[1] = HAnimJoint749;

HAnimJoint717ZZZ.children[1] = HAnimJoint726;

HAnimJoint673ZZZ.children[1] = HAnimJoint717;

HAnimJoint602ZZZ.children[2] = HAnimJoint673;

let HAnimJoint970 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint970.name = "r_sternoclavicular";
HAnimJoint970.DEF = "hanim_r_sternoclavicular";
HAnimJoint970.center = new X3D.SFVec3f([-0.0694,1.46,-0.033]);
HAnimJoint970.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint970.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment971 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment971.name = "r_clavicle";
HAnimSegment971.DEF = "hanim_r_clavicle";
let Transform972 = browser.currentScene.createNode("Transform");
Transform972.translation = new X3D.SFVec3f([-0.0694,1.46,-0.033]);
let Transform973 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape974 = browser.currentScene.createNode("Shape");
Shape974.USE = "HAnimJointShape";
Transform973YYY.child = new X3D.undefined();

Transform973ZZZ.child[0] = Shape974;

Transform972YYY.children = new X3D.MFNode();

Transform972ZZZ.children[0] = Transform973;

HAnimSegment971YYY.children = new X3D.MFNode();

HAnimSegment971ZZZ.children[0] = Transform972;

let Shape975 = browser.currentScene.createNode("Shape");
let LineSet976 = browser.currentScene.createNode("LineSet");
LineSet976.vertexCount = new X3D.MFInt32([2]);
let Coordinate977 = browser.currentScene.createNode("Coordinate");
Coordinate977.point = new X3D.MFVec3f([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
coord = Coordinate977;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA978 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA978.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA978;

geometry = LineSet976;

HAnimSegment971ZZZ.children[1] = Shape975;

let HAnimSite979 = browser.currentScene.createNode("HAnimSite");
HAnimSite979.name = "r_acromion";
HAnimSite979.DEF = "hanim_r_acromion";
HAnimSite979.translation = new X3D.SFVec3f([-0.1905,1.4791,-0.0431]);
let TouchSensor980 = browser.currentScene.createNode("TouchSensor");
TouchSensor980.description = "HAnimSite 20 r_acromion";
HAnimSite979YYY.children = new X3D.MFNode();

HAnimSite979ZZZ.children[0] = TouchSensor980;

let Shape981 = browser.currentScene.createNode("Shape");
Shape981.USE = "HAnimSiteShape";
HAnimSite979ZZZ.children[1] = Shape981;

let Billboard982 = browser.currentScene.createNode("Billboard");
let Shape983 = browser.currentScene.createNode("Shape");
let Text984 = browser.currentScene.createNode("Text");
Text984.string = new X3D.MFString([new X3D.SFString("20")]);
let FontStyle985 = browser.currentScene.createNode("FontStyle");
FontStyle985.size = 0.035;
fontStyle = FontStyle985;

geometry = Text984;

Billboard982YYY.children = new X3D.MFNode();

Billboard982ZZZ.children[0] = Shape983;

HAnimSite979ZZZ.children[2] = Billboard982;

HAnimSegment971ZZZ.children[2] = HAnimSite979;

let HAnimSite986 = browser.currentScene.createNode("HAnimSite");
HAnimSite986.name = "r_axilla_distal";
HAnimSite986.DEF = "hanim_r_axilla_distal";
HAnimSite986.translation = new X3D.SFVec3f([-0.1603,1.4098,-0.0826]);
let TouchSensor987 = browser.currentScene.createNode("TouchSensor");
TouchSensor987.description = "HAnimSite 22 r_axilla_distal";
HAnimSite986YYY.children = new X3D.MFNode();

HAnimSite986ZZZ.children[0] = TouchSensor987;

let Shape988 = browser.currentScene.createNode("Shape");
Shape988.USE = "HAnimSiteShape";
HAnimSite986ZZZ.children[1] = Shape988;

let Billboard989 = browser.currentScene.createNode("Billboard");
let Shape990 = browser.currentScene.createNode("Shape");
let Text991 = browser.currentScene.createNode("Text");
Text991.string = new X3D.MFString([new X3D.SFString("22")]);
let FontStyle992 = browser.currentScene.createNode("FontStyle");
FontStyle992.size = 0.035;
fontStyle = FontStyle992;

geometry = Text991;

Billboard989YYY.children = new X3D.MFNode();

Billboard989ZZZ.children[0] = Shape990;

HAnimSite986ZZZ.children[2] = Billboard989;

HAnimSegment971ZZZ.children[3] = HAnimSite986;

let HAnimSite993 = browser.currentScene.createNode("HAnimSite");
HAnimSite993.name = "r_axilla_posterior_folds";
HAnimSite993.DEF = "hanim_r_axilla_posterior_folds";
let TouchSensor994 = browser.currentScene.createNode("TouchSensor");
TouchSensor994.description = "HAnimSite 23 r_axilla_posterior_folds";
HAnimSite993YYY.children = new X3D.MFNode();

HAnimSite993ZZZ.children[0] = TouchSensor994;

let Shape995 = browser.currentScene.createNode("Shape");
Shape995.USE = "HAnimSiteShape";
HAnimSite993ZZZ.children[1] = Shape995;

let Billboard996 = browser.currentScene.createNode("Billboard");
let Shape997 = browser.currentScene.createNode("Shape");
let Text998 = browser.currentScene.createNode("Text");
Text998.string = new X3D.MFString([new X3D.SFString("23")]);
let FontStyle999 = browser.currentScene.createNode("FontStyle");
FontStyle999.size = 0.035;
fontStyle = FontStyle999;

geometry = Text998;

Billboard996YYY.children = new X3D.MFNode();

Billboard996ZZZ.children[0] = Shape997;

HAnimSite993ZZZ.children[2] = Billboard996;

HAnimSegment971ZZZ.children[4] = HAnimSite993;

let HAnimSite1000 = browser.currentScene.createNode("HAnimSite");
HAnimSite1000.name = "r_axilla_proximal";
HAnimSite1000.DEF = "hanim_r_axilla_proximal";
HAnimSite1000.translation = new X3D.SFVec3f([-0.1626,1.4072,-0.0031]);
let TouchSensor1001 = browser.currentScene.createNode("TouchSensor");
TouchSensor1001.description = "HAnimSite 21 r_axilla_proximal";
HAnimSite1000YYY.children = new X3D.MFNode();

HAnimSite1000ZZZ.children[0] = TouchSensor1001;

let Shape1002 = browser.currentScene.createNode("Shape");
Shape1002.USE = "HAnimSiteShape";
HAnimSite1000ZZZ.children[1] = Shape1002;

let Billboard1003 = browser.currentScene.createNode("Billboard");
let Shape1004 = browser.currentScene.createNode("Shape");
let Text1005 = browser.currentScene.createNode("Text");
Text1005.string = new X3D.MFString([new X3D.SFString("21")]);
let FontStyle1006 = browser.currentScene.createNode("FontStyle");
FontStyle1006.size = 0.035;
fontStyle = FontStyle1006;

geometry = Text1005;

Billboard1003YYY.children = new X3D.MFNode();

Billboard1003ZZZ.children[0] = Shape1004;

HAnimSite1000ZZZ.children[2] = Billboard1003;

HAnimSegment971ZZZ.children[5] = HAnimSite1000;

let HAnimSite1007 = browser.currentScene.createNode("HAnimSite");
HAnimSite1007.name = "r_clavicale";
HAnimSite1007.DEF = "hanim_r_clavicale";
HAnimSite1007.translation = new X3D.SFVec3f([-0.0115,1.4943,0.04]);
let TouchSensor1008 = browser.currentScene.createNode("TouchSensor");
TouchSensor1008.description = "HAnimSite 19 r_clavicale";
HAnimSite1007YYY.children = new X3D.MFNode();

HAnimSite1007ZZZ.children[0] = TouchSensor1008;

let Shape1009 = browser.currentScene.createNode("Shape");
Shape1009.USE = "HAnimSiteShape";
HAnimSite1007ZZZ.children[1] = Shape1009;

let Billboard1010 = browser.currentScene.createNode("Billboard");
let Shape1011 = browser.currentScene.createNode("Shape");
let Text1012 = browser.currentScene.createNode("Text");
Text1012.string = new X3D.MFString([new X3D.SFString("19")]);
let FontStyle1013 = browser.currentScene.createNode("FontStyle");
FontStyle1013.size = 0.035;
fontStyle = FontStyle1013;

geometry = Text1012;

Billboard1010YYY.children = new X3D.MFNode();

Billboard1010ZZZ.children[0] = Shape1011;

HAnimSite1007ZZZ.children[2] = Billboard1010;

HAnimSegment971ZZZ.children[6] = HAnimSite1007;

HAnimJoint970YYY.children = new X3D.MFNode();

HAnimJoint970ZZZ.children[0] = HAnimSegment971;

let HAnimJoint1014 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1014.name = "r_acromioclavicular";
HAnimJoint1014.DEF = "hanim_r_acromioclavicular";
HAnimJoint1014.center = new X3D.SFVec3f([-0.0836,1.4281,-0.0401]);
HAnimJoint1014.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1014.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1015 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1015.name = "r_scapula";
HAnimSegment1015.DEF = "hanim_r_scapula";
let Transform1016 = browser.currentScene.createNode("Transform");
Transform1016.translation = new X3D.SFVec3f([-0.0836,1.4281,-0.0401]);
let Transform1017 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1018 = browser.currentScene.createNode("Shape");
Shape1018.USE = "HAnimJointShape";
Transform1017YYY.child = new X3D.undefined();

Transform1017ZZZ.child[0] = Shape1018;

Transform1016YYY.children = new X3D.MFNode();

Transform1016ZZZ.children[0] = Transform1017;

HAnimSegment1015YYY.children = new X3D.MFNode();

HAnimSegment1015ZZZ.children[0] = Transform1016;

let Shape1019 = browser.currentScene.createNode("Shape");
let LineSet1020 = browser.currentScene.createNode("LineSet");
LineSet1020.vertexCount = new X3D.MFInt32([2]);
let Coordinate1021 = browser.currentScene.createNode("Coordinate");
Coordinate1021.point = new X3D.MFVec3f([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
coord = Coordinate1021;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA1022 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1022;

geometry = LineSet1020;

HAnimSegment1015ZZZ.children[1] = Shape1019;

HAnimJoint1014YYY.children = new X3D.MFNode();

HAnimJoint1014ZZZ.children[0] = HAnimSegment1015;

let HAnimJoint1023 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1023.name = "r_shoulder";
HAnimJoint1023.DEF = "hanim_r_shoulder";
HAnimJoint1023.center = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
HAnimJoint1023.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1023.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1024 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1024.name = "r_upperarm";
HAnimSegment1024.DEF = "hanim_r_upperarm";
let Transform1025 = browser.currentScene.createNode("Transform");
Transform1025.translation = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
let Transform1026 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1027 = browser.currentScene.createNode("Shape");
Shape1027.USE = "HAnimJointShape";
Transform1026YYY.child = new X3D.undefined();

Transform1026ZZZ.child[0] = Shape1027;

Transform1025YYY.children = new X3D.MFNode();

Transform1025ZZZ.children[0] = Transform1026;

HAnimSegment1024YYY.children = new X3D.MFNode();

HAnimSegment1024ZZZ.children[0] = Transform1025;

let Shape1028 = browser.currentScene.createNode("Shape");
let LineSet1029 = browser.currentScene.createNode("LineSet");
LineSet1029.vertexCount = new X3D.MFInt32([2]);
let Coordinate1030 = browser.currentScene.createNode("Coordinate");
Coordinate1030.point = new X3D.MFVec3f([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
coord = Coordinate1030;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA1031 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1031.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1031;

geometry = LineSet1029;

HAnimSegment1024ZZZ.children[1] = Shape1028;

let HAnimSite1032 = browser.currentScene.createNode("HAnimSite");
HAnimSite1032.name = "r_bideltoid";
HAnimSite1032.DEF = "hanim_r_bideltoid";
let TouchSensor1033 = browser.currentScene.createNode("TouchSensor");
TouchSensor1033.description = "HAnimSite 97 r_bideltoid";
HAnimSite1032YYY.children = new X3D.MFNode();

HAnimSite1032ZZZ.children[0] = TouchSensor1033;

let Shape1034 = browser.currentScene.createNode("Shape");
Shape1034.USE = "HAnimSiteShape";
HAnimSite1032ZZZ.children[1] = Shape1034;

let Billboard1035 = browser.currentScene.createNode("Billboard");
let Shape1036 = browser.currentScene.createNode("Shape");
let Text1037 = browser.currentScene.createNode("Text");
Text1037.string = new X3D.MFString([new X3D.SFString("97")]);
let FontStyle1038 = browser.currentScene.createNode("FontStyle");
FontStyle1038.size = 0.035;
fontStyle = FontStyle1038;

geometry = Text1037;

Billboard1035YYY.children = new X3D.MFNode();

Billboard1035ZZZ.children[0] = Shape1036;

HAnimSite1032ZZZ.children[2] = Billboard1035;

HAnimSegment1024ZZZ.children[2] = HAnimSite1032;

let HAnimSite1039 = browser.currentScene.createNode("HAnimSite");
HAnimSite1039.name = "r_humeral_lateral_epicondyles";
HAnimSite1039.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite1039.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
let TouchSensor1040 = browser.currentScene.createNode("TouchSensor");
TouchSensor1040.description = "HAnimSite 66 r_humeral_lateral_epicondyles";
HAnimSite1039YYY.children = new X3D.MFNode();

HAnimSite1039ZZZ.children[0] = TouchSensor1040;

let Shape1041 = browser.currentScene.createNode("Shape");
Shape1041.USE = "HAnimSiteShape";
HAnimSite1039ZZZ.children[1] = Shape1041;

let Billboard1042 = browser.currentScene.createNode("Billboard");
let Shape1043 = browser.currentScene.createNode("Shape");
let Text1044 = browser.currentScene.createNode("Text");
Text1044.string = new X3D.MFString([new X3D.SFString("66")]);
let FontStyle1045 = browser.currentScene.createNode("FontStyle");
FontStyle1045.size = 0.035;
fontStyle = FontStyle1045;

geometry = Text1044;

Billboard1042YYY.children = new X3D.MFNode();

Billboard1042ZZZ.children[0] = Shape1043;

HAnimSite1039ZZZ.children[2] = Billboard1042;

HAnimSegment1024ZZZ.children[3] = HAnimSite1039;

HAnimJoint1023YYY.children = new X3D.MFNode();

HAnimJoint1023ZZZ.children[0] = HAnimSegment1024;

let HAnimJoint1046 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1046.name = "r_elbow";
HAnimJoint1046.DEF = "hanim_r_elbow";
HAnimJoint1046.center = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
HAnimJoint1046.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1046.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1047 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1047.name = "r_forearm";
HAnimSegment1047.DEF = "hanim_r_forearm";
let Transform1048 = browser.currentScene.createNode("Transform");
Transform1048.translation = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
let Transform1049 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1050 = browser.currentScene.createNode("Shape");
Shape1050.USE = "HAnimJointShape";
Transform1049YYY.child = new X3D.undefined();

Transform1049ZZZ.child[0] = Shape1050;

Transform1048YYY.children = new X3D.MFNode();

Transform1048ZZZ.children[0] = Transform1049;

HAnimSegment1047YYY.children = new X3D.MFNode();

HAnimSegment1047ZZZ.children[0] = Transform1048;

let Shape1051 = browser.currentScene.createNode("Shape");
let LineSet1052 = browser.currentScene.createNode("LineSet");
LineSet1052.vertexCount = new X3D.MFInt32([2]);
let Coordinate1053 = browser.currentScene.createNode("Coordinate");
Coordinate1053.point = new X3D.MFVec3f([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
coord = Coordinate1053;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA1054 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1054.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1054;

geometry = LineSet1052;

HAnimSegment1047ZZZ.children[1] = Shape1051;

let HAnimSite1055 = browser.currentScene.createNode("HAnimSite");
HAnimSite1055.name = "r_humeral_medial_epicondyles";
HAnimSite1055.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite1055.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
let TouchSensor1056 = browser.currentScene.createNode("TouchSensor");
TouchSensor1056.description = "HAnimSite 67 r_humeral_medial_epicondyles";
HAnimSite1055YYY.children = new X3D.MFNode();

HAnimSite1055ZZZ.children[0] = TouchSensor1056;

let Shape1057 = browser.currentScene.createNode("Shape");
Shape1057.USE = "HAnimSiteShape";
HAnimSite1055ZZZ.children[1] = Shape1057;

let Billboard1058 = browser.currentScene.createNode("Billboard");
let Shape1059 = browser.currentScene.createNode("Shape");
let Text1060 = browser.currentScene.createNode("Text");
Text1060.string = new X3D.MFString([new X3D.SFString("67")]);
let FontStyle1061 = browser.currentScene.createNode("FontStyle");
FontStyle1061.size = 0.035;
fontStyle = FontStyle1061;

geometry = Text1060;

Billboard1058YYY.children = new X3D.MFNode();

Billboard1058ZZZ.children[0] = Shape1059;

HAnimSite1055ZZZ.children[2] = Billboard1058;

HAnimSegment1047ZZZ.children[2] = HAnimSite1055;

let HAnimSite1062 = browser.currentScene.createNode("HAnimSite");
HAnimSite1062.name = "r_olecranon";
HAnimSite1062.DEF = "hanim_r_olecranon";
HAnimSite1062.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
let TouchSensor1063 = browser.currentScene.createNode("TouchSensor");
TouchSensor1063.description = "HAnimSite 68 r_olecranon";
HAnimSite1062YYY.children = new X3D.MFNode();

HAnimSite1062ZZZ.children[0] = TouchSensor1063;

let Shape1064 = browser.currentScene.createNode("Shape");
Shape1064.USE = "HAnimSiteShape";
HAnimSite1062ZZZ.children[1] = Shape1064;

let Billboard1065 = browser.currentScene.createNode("Billboard");
let Shape1066 = browser.currentScene.createNode("Shape");
let Text1067 = browser.currentScene.createNode("Text");
Text1067.string = new X3D.MFString([new X3D.SFString("68")]);
let FontStyle1068 = browser.currentScene.createNode("FontStyle");
FontStyle1068.size = 0.035;
fontStyle = FontStyle1068;

geometry = Text1067;

Billboard1065YYY.children = new X3D.MFNode();

Billboard1065ZZZ.children[0] = Shape1066;

HAnimSite1062ZZZ.children[2] = Billboard1065;

HAnimSegment1047ZZZ.children[3] = HAnimSite1062;

let HAnimSite1069 = browser.currentScene.createNode("HAnimSite");
HAnimSite1069.name = "r_radial_styloid";
HAnimSite1069.DEF = "hanim_r_radial_styloid";
HAnimSite1069.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
let TouchSensor1070 = browser.currentScene.createNode("TouchSensor");
TouchSensor1070.description = "HAnimSite 74 r_radial_styloid";
HAnimSite1069YYY.children = new X3D.MFNode();

HAnimSite1069ZZZ.children[0] = TouchSensor1070;

let Shape1071 = browser.currentScene.createNode("Shape");
Shape1071.USE = "HAnimSiteShape";
HAnimSite1069ZZZ.children[1] = Shape1071;

let Billboard1072 = browser.currentScene.createNode("Billboard");
let Shape1073 = browser.currentScene.createNode("Shape");
let Text1074 = browser.currentScene.createNode("Text");
Text1074.string = new X3D.MFString([new X3D.SFString("74")]);
let FontStyle1075 = browser.currentScene.createNode("FontStyle");
FontStyle1075.size = 0.035;
fontStyle = FontStyle1075;

geometry = Text1074;

Billboard1072YYY.children = new X3D.MFNode();

Billboard1072ZZZ.children[0] = Shape1073;

HAnimSite1069ZZZ.children[2] = Billboard1072;

HAnimSegment1047ZZZ.children[4] = HAnimSite1069;

let HAnimSite1076 = browser.currentScene.createNode("HAnimSite");
HAnimSite1076.name = "r_radiale";
HAnimSite1076.DEF = "hanim_r_radiale";
HAnimSite1076.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
let TouchSensor1077 = browser.currentScene.createNode("TouchSensor");
TouchSensor1077.description = "HAnimSite 72 r_radiale";
HAnimSite1076YYY.children = new X3D.MFNode();

HAnimSite1076ZZZ.children[0] = TouchSensor1077;

let Shape1078 = browser.currentScene.createNode("Shape");
Shape1078.USE = "HAnimSiteShape";
HAnimSite1076ZZZ.children[1] = Shape1078;

let Billboard1079 = browser.currentScene.createNode("Billboard");
let Shape1080 = browser.currentScene.createNode("Shape");
let Text1081 = browser.currentScene.createNode("Text");
Text1081.string = new X3D.MFString([new X3D.SFString("72")]);
let FontStyle1082 = browser.currentScene.createNode("FontStyle");
FontStyle1082.size = 0.035;
fontStyle = FontStyle1082;

geometry = Text1081;

Billboard1079YYY.children = new X3D.MFNode();

Billboard1079ZZZ.children[0] = Shape1080;

HAnimSite1076ZZZ.children[2] = Billboard1079;

HAnimSegment1047ZZZ.children[5] = HAnimSite1076;

HAnimJoint1046YYY.children = new X3D.MFNode();

HAnimJoint1046ZZZ.children[0] = HAnimSegment1047;

let HAnimJoint1083 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1083.name = "r_radiocarpal";
HAnimJoint1083.DEF = "hanim_r_radiocarpal";
HAnimJoint1083.center = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
HAnimJoint1083.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1083.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1084 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1084.name = "r_carpal";
HAnimSegment1084.DEF = "hanim_r_carpal";
let Transform1085 = browser.currentScene.createNode("Transform");
Transform1085.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
Transform1085.translation = new X3D.SFVec3f([-0.2,0.85,-0.05]);
Transform1085.rotation = new X3D.SFRotation([0,0,1,-3.14]);
//Transform right hand
let Transform1086 = browser.currentScene.createNode("Transform");
Transform1086.rotation = new X3D.SFRotation([0,1,0,1.57]);
//Transform right hand
let Shape1087 = browser.currentScene.createNode("Shape");
Shape1087.USE = "HAnimJointShape";
Transform1086YYY.child = new X3D.undefined();

Transform1086ZZZ.child[0] = Shape1087;

Transform1085YYY.children = new X3D.MFNode();

Transform1085ZZZ.children[0] = Transform1086;

HAnimSegment1084YYY.children = new X3D.MFNode();

HAnimSegment1084ZZZ.children[0] = Transform1085;

let Shape1088 = browser.currentScene.createNode("Shape");
let LineSet1089 = browser.currentScene.createNode("LineSet");
LineSet1089.vertexCount = new X3D.MFInt32([2]);
let Coordinate1090 = browser.currentScene.createNode("Coordinate");
Coordinate1090.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
coord = Coordinate1090;

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
let ColorRGBA1091 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1091;

geometry = LineSet1089;

HAnimSegment1084ZZZ.children[1] = Shape1088;

let HAnimSite1092 = browser.currentScene.createNode("HAnimSite");
HAnimSite1092.name = "r_ulnar_styloid";
HAnimSite1092.DEF = "hanim_r_ulnar_styloid";
HAnimSite1092.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
let TouchSensor1093 = browser.currentScene.createNode("TouchSensor");
TouchSensor1093.description = "HAnimSite 73 r_ulnar_styloid";
HAnimSite1092YYY.children = new X3D.MFNode();

HAnimSite1092ZZZ.children[0] = TouchSensor1093;

let Shape1094 = browser.currentScene.createNode("Shape");
Shape1094.USE = "HAnimSiteShape";
HAnimSite1092ZZZ.children[1] = Shape1094;

let Billboard1095 = browser.currentScene.createNode("Billboard");
let Shape1096 = browser.currentScene.createNode("Shape");
let Text1097 = browser.currentScene.createNode("Text");
Text1097.string = new X3D.MFString([new X3D.SFString("73")]);
let FontStyle1098 = browser.currentScene.createNode("FontStyle");
FontStyle1098.size = 0.035;
fontStyle = FontStyle1098;

geometry = Text1097;

Billboard1095YYY.children = new X3D.MFNode();

Billboard1095ZZZ.children[0] = Shape1096;

HAnimSite1092ZZZ.children[2] = Billboard1095;

HAnimSegment1084ZZZ.children[2] = HAnimSite1092;

let Shape1099 = browser.currentScene.createNode("Shape");
let LineSet1100 = browser.currentScene.createNode("LineSet");
LineSet1100.vertexCount = new X3D.MFInt32([2]);
let Coordinate1101 = browser.currentScene.createNode("Coordinate");
Coordinate1101.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
coord = Coordinate1101;

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
let ColorRGBA1102 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1102.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1102;

geometry = LineSet1100;

HAnimSegment1084ZZZ.children[3] = Shape1099;

let Shape1103 = browser.currentScene.createNode("Shape");
let LineSet1104 = browser.currentScene.createNode("LineSet");
LineSet1104.vertexCount = new X3D.MFInt32([2]);
let Coordinate1105 = browser.currentScene.createNode("Coordinate");
Coordinate1105.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
coord = Coordinate1105;

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
let ColorRGBA1106 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1106.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1106;

geometry = LineSet1104;

HAnimSegment1084ZZZ.children[4] = Shape1103;

let Shape1107 = browser.currentScene.createNode("Shape");
let LineSet1108 = browser.currentScene.createNode("LineSet");
LineSet1108.vertexCount = new X3D.MFInt32([2]);
let Coordinate1109 = browser.currentScene.createNode("Coordinate");
Coordinate1109.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
coord = Coordinate1109;

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
let ColorRGBA1110 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1110.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1110;

geometry = LineSet1108;

HAnimSegment1084ZZZ.children[5] = Shape1107;

let Shape1111 = browser.currentScene.createNode("Shape");
let LineSet1112 = browser.currentScene.createNode("LineSet");
LineSet1112.vertexCount = new X3D.MFInt32([2]);
let Coordinate1113 = browser.currentScene.createNode("Coordinate");
Coordinate1113.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
coord = Coordinate1113;

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
let ColorRGBA1114 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1114.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1114;

geometry = LineSet1112;

HAnimSegment1084ZZZ.children[6] = Shape1111;

HAnimJoint1083YYY.children = new X3D.MFNode();

HAnimJoint1083ZZZ.children[0] = HAnimSegment1084;

let HAnimJoint1115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1115.name = "r_carpometacarpal_1";
HAnimJoint1115.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1115.center = new X3D.SFVec3f([-0.1899,0.8502,-0.0473]);
HAnimJoint1115.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1115.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1116 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1116.name = "r_metacarpal_1";
HAnimSegment1116.DEF = "hanim_r_metacarpal_1";
let Transform1117 = browser.currentScene.createNode("Transform");
Transform1117.translation = new X3D.SFVec3f([-0.1899,0.8502,-0.0473]);
let Transform1118 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1119 = browser.currentScene.createNode("Shape");
Shape1119.USE = "HAnimJointShape";
Transform1118YYY.child = new X3D.undefined();

Transform1118ZZZ.child[0] = Shape1119;

Transform1117YYY.children = new X3D.MFNode();

Transform1117ZZZ.children[0] = Transform1118;

HAnimSegment1116YYY.children = new X3D.MFNode();

HAnimSegment1116ZZZ.children[0] = Transform1117;

let Shape1120 = browser.currentScene.createNode("Shape");
let LineSet1121 = browser.currentScene.createNode("LineSet");
LineSet1121.vertexCount = new X3D.MFInt32([2]);
let Coordinate1122 = browser.currentScene.createNode("Coordinate");
Coordinate1122.point = new X3D.MFVec3f([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
coord = Coordinate1122;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA1123 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1123.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1123;

geometry = LineSet1121;

HAnimSegment1116ZZZ.children[1] = Shape1120;

HAnimJoint1115YYY.children = new X3D.MFNode();

HAnimJoint1115ZZZ.children[0] = HAnimSegment1116;

let HAnimJoint1124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1124.name = "r_metacarpophalangeal_1";
HAnimJoint1124.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1124.center = new X3D.SFVec3f([-0.1874,0.8256,0.0306]);
HAnimJoint1124.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1124.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1125 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1125.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1125.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform1126 = browser.currentScene.createNode("Transform");
Transform1126.translation = new X3D.SFVec3f([-0.1874,0.8256,0.0306]);
let Transform1127 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1128 = browser.currentScene.createNode("Shape");
Shape1128.USE = "HAnimJointShape";
Transform1127YYY.child = new X3D.undefined();

Transform1127ZZZ.child[0] = Shape1128;

Transform1126YYY.children = new X3D.MFNode();

Transform1126ZZZ.children[0] = Transform1127;

HAnimSegment1125YYY.children = new X3D.MFNode();

HAnimSegment1125ZZZ.children[0] = Transform1126;

let Shape1129 = browser.currentScene.createNode("Shape");
let LineSet1130 = browser.currentScene.createNode("LineSet");
LineSet1130.vertexCount = new X3D.MFInt32([2]);
let Coordinate1131 = browser.currentScene.createNode("Coordinate");
Coordinate1131.point = new X3D.MFVec3f([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
coord = Coordinate1131;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA1132 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1132.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1132;

geometry = LineSet1130;

HAnimSegment1125ZZZ.children[1] = Shape1129;

HAnimJoint1124YYY.children = new X3D.MFNode();

HAnimJoint1124ZZZ.children[0] = HAnimSegment1125;

let HAnimJoint1133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1133.name = "r_carpal_interphalangeal_1";
HAnimJoint1133.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1133.center = new X3D.SFVec3f([-0.1864,0.819,0.0506]);
HAnimJoint1133.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1133.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1124ZZZ.children[1] = HAnimJoint1133;

HAnimJoint1115ZZZ.children[1] = HAnimJoint1124;

HAnimJoint1083ZZZ.children[1] = HAnimJoint1115;

let HAnimJoint1134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1134.name = "r_carpometacarpal_2";
HAnimJoint1134.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1134.center = new X3D.SFVec3f([-0.1961,0.8055,-0.0218]);
HAnimJoint1134.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1134.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1135.name = "r_metacarpal_2";
HAnimSegment1135.DEF = "hanim_r_metacarpal_2";
let Transform1136 = browser.currentScene.createNode("Transform");
Transform1136.translation = new X3D.SFVec3f([-0.1961,0.8055,-0.0218]);
let Transform1137 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1138 = browser.currentScene.createNode("Shape");
Shape1138.USE = "HAnimJointShape";
Transform1137YYY.child = new X3D.undefined();

Transform1137ZZZ.child[0] = Shape1138;

Transform1136YYY.children = new X3D.MFNode();

Transform1136ZZZ.children[0] = Transform1137;

HAnimSegment1135YYY.children = new X3D.MFNode();

HAnimSegment1135ZZZ.children[0] = Transform1136;

let Shape1139 = browser.currentScene.createNode("Shape");
let LineSet1140 = browser.currentScene.createNode("LineSet");
LineSet1140.vertexCount = new X3D.MFInt32([2]);
let Coordinate1141 = browser.currentScene.createNode("Coordinate");
Coordinate1141.point = new X3D.MFVec3f([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
coord = Coordinate1141;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA1142 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1142.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1142;

geometry = LineSet1140;

HAnimSegment1135ZZZ.children[1] = Shape1139;

let HAnimSite1143 = browser.currentScene.createNode("HAnimSite");
HAnimSite1143.name = "r_metacarpal_phalanx_2";
HAnimSite1143.DEF = "hanim_r_metacarpal_phalanx_2";
HAnimSite1143.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
let TouchSensor1144 = browser.currentScene.createNode("TouchSensor");
TouchSensor1144.description = "HAnimSite 78 r_metacarpal_phalanx_2";
HAnimSite1143YYY.children = new X3D.MFNode();

HAnimSite1143ZZZ.children[0] = TouchSensor1144;

let Shape1145 = browser.currentScene.createNode("Shape");
Shape1145.USE = "HAnimSiteShape";
HAnimSite1143ZZZ.children[1] = Shape1145;

let Billboard1146 = browser.currentScene.createNode("Billboard");
let Shape1147 = browser.currentScene.createNode("Shape");
let Text1148 = browser.currentScene.createNode("Text");
Text1148.string = new X3D.MFString([new X3D.SFString("78")]);
let FontStyle1149 = browser.currentScene.createNode("FontStyle");
FontStyle1149.size = 0.035;
fontStyle = FontStyle1149;

geometry = Text1148;

Billboard1146YYY.children = new X3D.MFNode();

Billboard1146ZZZ.children[0] = Shape1147;

HAnimSite1143ZZZ.children[2] = Billboard1146;

HAnimSegment1135ZZZ.children[2] = HAnimSite1143;

HAnimJoint1134YYY.children = new X3D.MFNode();

HAnimJoint1134ZZZ.children[0] = HAnimSegment1135;

let HAnimJoint1150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1150.name = "r_metacarpophalangeal_2";
HAnimJoint1150.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1150.center = new X3D.SFVec3f([-0.1961,0.7846,-0.0218]);
HAnimJoint1150.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1150.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1151.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1151.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform1152 = browser.currentScene.createNode("Transform");
Transform1152.translation = new X3D.SFVec3f([-0.1961,0.7846,-0.0218]);
let Transform1153 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1154 = browser.currentScene.createNode("Shape");
Shape1154.USE = "HAnimJointShape";
Transform1153YYY.child = new X3D.undefined();

Transform1153ZZZ.child[0] = Shape1154;

Transform1152YYY.children = new X3D.MFNode();

Transform1152ZZZ.children[0] = Transform1153;

HAnimSegment1151YYY.children = new X3D.MFNode();

HAnimSegment1151ZZZ.children[0] = Transform1152;

let Shape1155 = browser.currentScene.createNode("Shape");
let LineSet1156 = browser.currentScene.createNode("LineSet");
LineSet1156.vertexCount = new X3D.MFInt32([2]);
let Coordinate1157 = browser.currentScene.createNode("Coordinate");
Coordinate1157.point = new X3D.MFVec3f([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
coord = Coordinate1157;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1158 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1158.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1158;

geometry = LineSet1156;

HAnimSegment1151ZZZ.children[1] = Shape1155;

HAnimJoint1150YYY.children = new X3D.MFNode();

HAnimJoint1150ZZZ.children[0] = HAnimSegment1151;

let HAnimJoint1159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1159.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1159.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1159.center = new X3D.SFVec3f([-0.1954,0.7393,-0.0185]);
HAnimJoint1159.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1159.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1160.name = "r_carpal_middle_phalanx_2";
HAnimSegment1160.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform1161 = browser.currentScene.createNode("Transform");
Transform1161.translation = new X3D.SFVec3f([-0.1954,0.7393,-0.0185]);
let Transform1162 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1163 = browser.currentScene.createNode("Shape");
Shape1163.USE = "HAnimJointShape";
Transform1162YYY.child = new X3D.undefined();

Transform1162ZZZ.child[0] = Shape1163;

Transform1161YYY.children = new X3D.MFNode();

Transform1161ZZZ.children[0] = Transform1162;

HAnimSegment1160YYY.children = new X3D.MFNode();

HAnimSegment1160ZZZ.children[0] = Transform1161;

let Shape1164 = browser.currentScene.createNode("Shape");
let LineSet1165 = browser.currentScene.createNode("LineSet");
LineSet1165.vertexCount = new X3D.MFInt32([2]);
let Coordinate1166 = browser.currentScene.createNode("Coordinate");
Coordinate1166.point = new X3D.MFVec3f([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
coord = Coordinate1166;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1167 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1167.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1167;

geometry = LineSet1165;

HAnimSegment1160ZZZ.children[1] = Shape1164;

HAnimJoint1159YYY.children = new X3D.MFNode();

HAnimJoint1159ZZZ.children[0] = HAnimSegment1160;

let HAnimJoint1168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1168.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1168.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1168.center = new X3D.SFVec3f([-0.1945,0.7169,-0.0173]);
HAnimJoint1168.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1168.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1159ZZZ.children[1] = HAnimJoint1168;

HAnimJoint1150ZZZ.children[1] = HAnimJoint1159;

HAnimJoint1134ZZZ.children[1] = HAnimJoint1150;

HAnimJoint1083ZZZ.children[2] = HAnimJoint1134;

let HAnimJoint1169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1169.name = "r_carpometacarpal_3";
HAnimJoint1169.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1169.center = new X3D.SFVec3f([-0.1972,0.806,-0.0468]);
HAnimJoint1169.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1169.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1170 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1170.name = "r_metacarpal_3";
HAnimSegment1170.DEF = "hanim_r_metacarpal_3";
let Transform1171 = browser.currentScene.createNode("Transform");
Transform1171.translation = new X3D.SFVec3f([-0.1972,0.806,-0.0468]);
let Transform1172 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1173 = browser.currentScene.createNode("Shape");
Shape1173.USE = "HAnimJointShape";
Transform1172YYY.child = new X3D.undefined();

Transform1172ZZZ.child[0] = Shape1173;

Transform1171YYY.children = new X3D.MFNode();

Transform1171ZZZ.children[0] = Transform1172;

HAnimSegment1170YYY.children = new X3D.MFNode();

HAnimSegment1170ZZZ.children[0] = Transform1171;

let Shape1174 = browser.currentScene.createNode("Shape");
let LineSet1175 = browser.currentScene.createNode("LineSet");
LineSet1175.vertexCount = new X3D.MFInt32([2]);
let Coordinate1176 = browser.currentScene.createNode("Coordinate");
Coordinate1176.point = new X3D.MFVec3f([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
coord = Coordinate1176;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA1177 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1177.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1177;

geometry = LineSet1175;

HAnimSegment1170ZZZ.children[1] = Shape1174;

let HAnimSite1178 = browser.currentScene.createNode("HAnimSite");
HAnimSite1178.name = "r_metacarpal_phalanx_3";
HAnimSite1178.DEF = "hanim_r_metacarpal_phalanx_3";
let TouchSensor1179 = browser.currentScene.createNode("TouchSensor");
TouchSensor1179.description = "HAnimSite 79 r_metacarpal_phalanx_3";
HAnimSite1178YYY.children = new X3D.MFNode();

HAnimSite1178ZZZ.children[0] = TouchSensor1179;

let Shape1180 = browser.currentScene.createNode("Shape");
Shape1180.USE = "HAnimSiteShape";
HAnimSite1178ZZZ.children[1] = Shape1180;

let Billboard1181 = browser.currentScene.createNode("Billboard");
let Shape1182 = browser.currentScene.createNode("Shape");
let Text1183 = browser.currentScene.createNode("Text");
Text1183.string = new X3D.MFString([new X3D.SFString("79")]);
let FontStyle1184 = browser.currentScene.createNode("FontStyle");
FontStyle1184.size = 0.035;
fontStyle = FontStyle1184;

geometry = Text1183;

Billboard1181YYY.children = new X3D.MFNode();

Billboard1181ZZZ.children[0] = Shape1182;

HAnimSite1178ZZZ.children[2] = Billboard1181;

HAnimSegment1170ZZZ.children[2] = HAnimSite1178;

HAnimJoint1169YYY.children = new X3D.MFNode();

HAnimJoint1169ZZZ.children[0] = HAnimSegment1170;

let HAnimJoint1185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1185.name = "r_metacarpophalangeal_3";
HAnimJoint1185.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1185.center = new X3D.SFVec3f([-0.1972,0.7849,-0.0468]);
HAnimJoint1185.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1185.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1186 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1186.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1186.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform1187 = browser.currentScene.createNode("Transform");
Transform1187.translation = new X3D.SFVec3f([-0.1972,0.7849,-0.0468]);
let Transform1188 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1189 = browser.currentScene.createNode("Shape");
Shape1189.USE = "HAnimJointShape";
Transform1188YYY.child = new X3D.undefined();

Transform1188ZZZ.child[0] = Shape1189;

Transform1187YYY.children = new X3D.MFNode();

Transform1187ZZZ.children[0] = Transform1188;

HAnimSegment1186YYY.children = new X3D.MFNode();

HAnimSegment1186ZZZ.children[0] = Transform1187;

let Shape1190 = browser.currentScene.createNode("Shape");
let LineSet1191 = browser.currentScene.createNode("LineSet");
LineSet1191.vertexCount = new X3D.MFInt32([2]);
let Coordinate1192 = browser.currentScene.createNode("Coordinate");
Coordinate1192.point = new X3D.MFVec3f([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
coord = Coordinate1192;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1193 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1193.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1193;

geometry = LineSet1191;

HAnimSegment1186ZZZ.children[1] = Shape1190;

HAnimJoint1185YYY.children = new X3D.MFNode();

HAnimJoint1185ZZZ.children[0] = HAnimSegment1186;

let HAnimJoint1194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1194.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1194.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1194.center = new X3D.SFVec3f([-0.195,0.7304,-0.0441]);
HAnimJoint1194.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1194.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1195 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1195.name = "r_carpal_middle_phalanx_3";
HAnimSegment1195.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform1196 = browser.currentScene.createNode("Transform");
Transform1196.translation = new X3D.SFVec3f([-0.195,0.7304,-0.0441]);
let Transform1197 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1198 = browser.currentScene.createNode("Shape");
Shape1198.USE = "HAnimJointShape";
Transform1197YYY.child = new X3D.undefined();

Transform1197ZZZ.child[0] = Shape1198;

Transform1196YYY.children = new X3D.MFNode();

Transform1196ZZZ.children[0] = Transform1197;

HAnimSegment1195YYY.children = new X3D.MFNode();

HAnimSegment1195ZZZ.children[0] = Transform1196;

let Shape1199 = browser.currentScene.createNode("Shape");
let LineSet1200 = browser.currentScene.createNode("LineSet");
LineSet1200.vertexCount = new X3D.MFInt32([2]);
let Coordinate1201 = browser.currentScene.createNode("Coordinate");
Coordinate1201.point = new X3D.MFVec3f([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
coord = Coordinate1201;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1202 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1202.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1202;

geometry = LineSet1200;

HAnimSegment1195ZZZ.children[1] = Shape1199;

HAnimJoint1194YYY.children = new X3D.MFNode();

HAnimJoint1194ZZZ.children[0] = HAnimSegment1195;

let HAnimJoint1203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1203.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1203.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1203.center = new X3D.SFVec3f([-0.1939,0.7042,-0.0432]);
HAnimJoint1203.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1203.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1194ZZZ.children[1] = HAnimJoint1203;

HAnimJoint1185ZZZ.children[1] = HAnimJoint1194;

HAnimJoint1169ZZZ.children[1] = HAnimJoint1185;

HAnimJoint1083ZZZ.children[3] = HAnimJoint1169;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.name = "r_carpometacarpal_4";
HAnimJoint1204.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1204.center = new X3D.SFVec3f([-0.1951,0.8049,-0.0732]);
HAnimJoint1204.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1204.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1205.name = "r_metacarpal_4";
HAnimSegment1205.DEF = "hanim_r_metacarpal_4";
let Transform1206 = browser.currentScene.createNode("Transform");
Transform1206.translation = new X3D.SFVec3f([-0.1951,0.8049,-0.0732]);
let Transform1207 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1208 = browser.currentScene.createNode("Shape");
Shape1208.USE = "HAnimJointShape";
Transform1207YYY.child = new X3D.undefined();

Transform1207ZZZ.child[0] = Shape1208;

Transform1206YYY.children = new X3D.MFNode();

Transform1206ZZZ.children[0] = Transform1207;

HAnimSegment1205YYY.children = new X3D.MFNode();

HAnimSegment1205ZZZ.children[0] = Transform1206;

let Shape1209 = browser.currentScene.createNode("Shape");
let LineSet1210 = browser.currentScene.createNode("LineSet");
LineSet1210.vertexCount = new X3D.MFInt32([2]);
let Coordinate1211 = browser.currentScene.createNode("Coordinate");
Coordinate1211.point = new X3D.MFVec3f([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
coord = Coordinate1211;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA1212 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1212.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1212;

geometry = LineSet1210;

HAnimSegment1205ZZZ.children[1] = Shape1209;

HAnimJoint1204YYY.children = new X3D.MFNode();

HAnimJoint1204ZZZ.children[0] = HAnimSegment1205;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.name = "r_metacarpophalangeal_4";
HAnimJoint1213.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1213.center = new X3D.SFVec3f([-0.1951,0.7845,-0.0732]);
HAnimJoint1213.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1213.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1214.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1214.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform1215 = browser.currentScene.createNode("Transform");
Transform1215.translation = new X3D.SFVec3f([-0.1951,0.7845,-0.0732]);
let Transform1216 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1217 = browser.currentScene.createNode("Shape");
Shape1217.USE = "HAnimJointShape";
Transform1216YYY.child = new X3D.undefined();

Transform1216ZZZ.child[0] = Shape1217;

Transform1215YYY.children = new X3D.MFNode();

Transform1215ZZZ.children[0] = Transform1216;

HAnimSegment1214YYY.children = new X3D.MFNode();

HAnimSegment1214ZZZ.children[0] = Transform1215;

let Shape1218 = browser.currentScene.createNode("Shape");
let LineSet1219 = browser.currentScene.createNode("LineSet");
LineSet1219.vertexCount = new X3D.MFInt32([2]);
let Coordinate1220 = browser.currentScene.createNode("Coordinate");
Coordinate1220.point = new X3D.MFVec3f([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
coord = Coordinate1220;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1221 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1221.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1221;

geometry = LineSet1219;

HAnimSegment1214ZZZ.children[1] = Shape1218;

HAnimJoint1213YYY.children = new X3D.MFNode();

HAnimJoint1213ZZZ.children[0] = HAnimSegment1214;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1222.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1222.center = new X3D.SFVec3f([-0.192,0.7318,-0.0716]);
HAnimJoint1222.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1222.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1223.name = "r_carpal_middle_phalanx_4";
HAnimSegment1223.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform1224 = browser.currentScene.createNode("Transform");
Transform1224.translation = new X3D.SFVec3f([-0.192,0.7318,-0.0716]);
let Transform1225 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1226 = browser.currentScene.createNode("Shape");
Shape1226.USE = "HAnimJointShape";
Transform1225YYY.child = new X3D.undefined();

Transform1225ZZZ.child[0] = Shape1226;

Transform1224YYY.children = new X3D.MFNode();

Transform1224ZZZ.children[0] = Transform1225;

HAnimSegment1223YYY.children = new X3D.MFNode();

HAnimSegment1223ZZZ.children[0] = Transform1224;

let Shape1227 = browser.currentScene.createNode("Shape");
let LineSet1228 = browser.currentScene.createNode("LineSet");
LineSet1228.vertexCount = new X3D.MFInt32([2]);
let Coordinate1229 = browser.currentScene.createNode("Coordinate");
Coordinate1229.point = new X3D.MFVec3f([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
coord = Coordinate1229;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1230 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1230.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1230;

geometry = LineSet1228;

HAnimSegment1223ZZZ.children[1] = Shape1227;

HAnimJoint1222YYY.children = new X3D.MFNode();

HAnimJoint1222ZZZ.children[0] = HAnimSegment1223;

let HAnimJoint1231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1231.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1231.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1231.center = new X3D.SFVec3f([-0.1908,0.7077,-0.0706]);
HAnimJoint1231.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1231.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1222ZZZ.children[1] = HAnimJoint1231;

HAnimJoint1213ZZZ.children[1] = HAnimJoint1222;

HAnimJoint1204ZZZ.children[1] = HAnimJoint1213;

HAnimJoint1083ZZZ.children[4] = HAnimJoint1204;

let HAnimJoint1232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1232.name = "r_carpometacarpal_5";
HAnimJoint1232.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1232.center = new X3D.SFVec3f([-0.1926,0.8096,-0.0975]);
HAnimJoint1232.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1232.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1233 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1233.name = "r_metacarpal_5";
HAnimSegment1233.DEF = "hanim_r_metacarpal_5";
let Transform1234 = browser.currentScene.createNode("Transform");
Transform1234.translation = new X3D.SFVec3f([-0.1926,0.8096,-0.0975]);
let Transform1235 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1236 = browser.currentScene.createNode("Shape");
Shape1236.USE = "HAnimJointShape";
Transform1235YYY.child = new X3D.undefined();

Transform1235ZZZ.child[0] = Shape1236;

Transform1234YYY.children = new X3D.MFNode();

Transform1234ZZZ.children[0] = Transform1235;

HAnimSegment1233YYY.children = new X3D.MFNode();

HAnimSegment1233ZZZ.children[0] = Transform1234;

let Shape1237 = browser.currentScene.createNode("Shape");
let LineSet1238 = browser.currentScene.createNode("LineSet");
LineSet1238.vertexCount = new X3D.MFInt32([2]);
let Coordinate1239 = browser.currentScene.createNode("Coordinate");
Coordinate1239.point = new X3D.MFVec3f([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
coord = Coordinate1239;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA1240 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1240.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1240;

geometry = LineSet1238;

HAnimSegment1233ZZZ.children[1] = Shape1237;

let HAnimSite1241 = browser.currentScene.createNode("HAnimSite");
HAnimSite1241.name = "r_metacarpal_phalanx_5";
HAnimSite1241.DEF = "hanim_r_metacarpal_phalanx_5";
HAnimSite1241.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
let TouchSensor1242 = browser.currentScene.createNode("TouchSensor");
TouchSensor1242.description = "HAnimSite 80 r_metacarpal_phalanx_5";
HAnimSite1241YYY.children = new X3D.MFNode();

HAnimSite1241ZZZ.children[0] = TouchSensor1242;

let Shape1243 = browser.currentScene.createNode("Shape");
Shape1243.USE = "HAnimSiteShape";
HAnimSite1241ZZZ.children[1] = Shape1243;

let Billboard1244 = browser.currentScene.createNode("Billboard");
let Shape1245 = browser.currentScene.createNode("Shape");
let Text1246 = browser.currentScene.createNode("Text");
Text1246.string = new X3D.MFString([new X3D.SFString("80")]);
let FontStyle1247 = browser.currentScene.createNode("FontStyle");
FontStyle1247.size = 0.035;
fontStyle = FontStyle1247;

geometry = Text1246;

Billboard1244YYY.children = new X3D.MFNode();

Billboard1244ZZZ.children[0] = Shape1245;

HAnimSite1241ZZZ.children[2] = Billboard1244;

HAnimSegment1233ZZZ.children[2] = HAnimSite1241;

HAnimJoint1232YYY.children = new X3D.MFNode();

HAnimJoint1232ZZZ.children[0] = HAnimSegment1233;

let HAnimJoint1248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1248.name = "r_metacarpophalangeal_5";
HAnimJoint1248.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1248.center = new X3D.SFVec3f([-0.1926,0.7896,-0.0975]);
HAnimJoint1248.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1248.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1249 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1249.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1249.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform1250 = browser.currentScene.createNode("Transform");
Transform1250.translation = new X3D.SFVec3f([-0.1926,0.7896,-0.0975]);
let Transform1251 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1252 = browser.currentScene.createNode("Shape");
Shape1252.USE = "HAnimJointShape";
Transform1251YYY.child = new X3D.undefined();

Transform1251ZZZ.child[0] = Shape1252;

Transform1250YYY.children = new X3D.MFNode();

Transform1250ZZZ.children[0] = Transform1251;

HAnimSegment1249YYY.children = new X3D.MFNode();

HAnimSegment1249ZZZ.children[0] = Transform1250;

let Shape1253 = browser.currentScene.createNode("Shape");
let LineSet1254 = browser.currentScene.createNode("LineSet");
LineSet1254.vertexCount = new X3D.MFInt32([2]);
let Coordinate1255 = browser.currentScene.createNode("Coordinate");
Coordinate1255.point = new X3D.MFVec3f([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
coord = Coordinate1255;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1256 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1256.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1256;

geometry = LineSet1254;

HAnimSegment1249ZZZ.children[1] = Shape1253;

HAnimJoint1248YYY.children = new X3D.MFNode();

HAnimJoint1248ZZZ.children[0] = HAnimSegment1249;

let HAnimJoint1257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1257.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1257.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1257.center = new X3D.SFVec3f([-0.1902,0.7483,-0.0963]);
HAnimJoint1257.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1257.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1258 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1258.name = "r_carpal_middle_phalanx_5";
HAnimSegment1258.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform1259 = browser.currentScene.createNode("Transform");
Transform1259.translation = new X3D.SFVec3f([-0.1902,0.7483,-0.0963]);
let Transform1260 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1261 = browser.currentScene.createNode("Shape");
Shape1261.USE = "HAnimJointShape";
Transform1260YYY.child = new X3D.undefined();

Transform1260ZZZ.child[0] = Shape1261;

Transform1259YYY.children = new X3D.MFNode();

Transform1259ZZZ.children[0] = Transform1260;

HAnimSegment1258YYY.children = new X3D.MFNode();

HAnimSegment1258ZZZ.children[0] = Transform1259;

let Shape1262 = browser.currentScene.createNode("Shape");
let LineSet1263 = browser.currentScene.createNode("LineSet");
LineSet1263.vertexCount = new X3D.MFInt32([2]);
let Coordinate1264 = browser.currentScene.createNode("Coordinate");
Coordinate1264.point = new X3D.MFVec3f([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
coord = Coordinate1264;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1265 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1265.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1265;

geometry = LineSet1263;

HAnimSegment1258ZZZ.children[1] = Shape1262;

HAnimJoint1257YYY.children = new X3D.MFNode();

HAnimJoint1257ZZZ.children[0] = HAnimSegment1258;

let HAnimJoint1266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1266.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1266.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1266.center = new X3D.SFVec3f([-0.1908,0.754,-0.096]);
HAnimJoint1266.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1266.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1257ZZZ.children[1] = HAnimJoint1266;

HAnimJoint1248ZZZ.children[1] = HAnimJoint1257;

HAnimJoint1232ZZZ.children[1] = HAnimJoint1248;

HAnimJoint1083ZZZ.children[5] = HAnimJoint1232;

HAnimJoint1046ZZZ.children[1] = HAnimJoint1083;

HAnimJoint1023ZZZ.children[1] = HAnimJoint1046;

HAnimJoint1014ZZZ.children[1] = HAnimJoint1023;

HAnimJoint970ZZZ.children[1] = HAnimJoint1014;

HAnimJoint602ZZZ.children[3] = HAnimJoint970;

HAnimJoint565ZZZ.children[1] = HAnimJoint602;

HAnimJoint535ZZZ.children[1] = HAnimJoint565;

HAnimJoint526ZZZ.children[1] = HAnimJoint535;

HAnimJoint489ZZZ.children[1] = HAnimJoint526;

HAnimJoint459ZZZ.children[1] = HAnimJoint489;

HAnimJoint47ZZZ.children[2] = HAnimJoint459;

joints[1] = HAnimJoint47;

let HAnimJoint1267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1267.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint1267;

let HAnimJoint1268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1268.USE = "hanim_sacroiliac";
joints[3] = HAnimJoint1268;

let HAnimJoint1269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1269.USE = "hanim_l_hip";
joints[4] = HAnimJoint1269;

let HAnimJoint1270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1270.USE = "hanim_l_knee";
joints[5] = HAnimJoint1270;

let HAnimJoint1271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1271.USE = "hanim_l_talocrural";
joints[6] = HAnimJoint1271;

let HAnimJoint1272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1272.USE = "hanim_l_tarsometatarsal_2";
joints[7] = HAnimJoint1272;

let HAnimJoint1273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1273.USE = "hanim_l_metatarsophalangeal_2";
joints[8] = HAnimJoint1273;

let HAnimJoint1274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1274.USE = "hanim_l_tarsal_distal_interphalangeal_2";
joints[9] = HAnimJoint1274;

let HAnimJoint1275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1275.USE = "hanim_r_hip";
joints[10] = HAnimJoint1275;

let HAnimJoint1276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1276.USE = "hanim_r_knee";
joints[11] = HAnimJoint1276;

let HAnimJoint1277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1277.USE = "hanim_r_talocrural";
joints[12] = HAnimJoint1277;

let HAnimJoint1278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1278.USE = "hanim_r_tarsometatarsal_2";
joints[13] = HAnimJoint1278;

let HAnimJoint1279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1279.USE = "hanim_r_metatarsophalangeal_2";
joints[14] = HAnimJoint1279;

let HAnimJoint1280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1280.USE = "hanim_r_tarsal_distal_interphalangeal_2";
joints[15] = HAnimJoint1280;

let HAnimJoint1281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1281.USE = "hanim_vl5";
joints[16] = HAnimJoint1281;

let HAnimJoint1282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1282.USE = "hanim_vl3";
joints[17] = HAnimJoint1282;

let HAnimJoint1283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1283.USE = "hanim_vl1";
joints[18] = HAnimJoint1283;

let HAnimJoint1284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1284.USE = "hanim_vt10";
joints[19] = HAnimJoint1284;

let HAnimJoint1285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1285.USE = "hanim_vt6";
joints[20] = HAnimJoint1285;

let HAnimJoint1286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1286.USE = "hanim_vt1";
joints[21] = HAnimJoint1286;

let HAnimJoint1287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1287.USE = "hanim_vc4";
joints[22] = HAnimJoint1287;

let HAnimJoint1288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1288.USE = "hanim_vc2";
joints[23] = HAnimJoint1288;

let HAnimJoint1289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1289.USE = "hanim_skullbase";
joints[24] = HAnimJoint1289;

let HAnimJoint1290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1290.USE = "hanim_l_sternoclavicular";
joints[25] = HAnimJoint1290;

let HAnimJoint1291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1291.USE = "hanim_l_acromioclavicular";
joints[26] = HAnimJoint1291;

let HAnimJoint1292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1292.USE = "hanim_l_shoulder";
joints[27] = HAnimJoint1292;

let HAnimJoint1293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1293.USE = "hanim_l_elbow";
joints[28] = HAnimJoint1293;

let HAnimJoint1294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1294.USE = "hanim_l_radiocarpal";
joints[29] = HAnimJoint1294;

let HAnimJoint1295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1295.USE = "hanim_l_carpometacarpal_1";
joints[30] = HAnimJoint1295;

let HAnimJoint1296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1296.USE = "hanim_l_metacarpophalangeal_1";
joints[31] = HAnimJoint1296;

let HAnimJoint1297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1297.USE = "hanim_l_carpal_interphalangeal_1";
joints[32] = HAnimJoint1297;

let HAnimJoint1298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1298.USE = "hanim_l_carpometacarpal_2";
joints[33] = HAnimJoint1298;

let HAnimJoint1299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1299.USE = "hanim_l_metacarpophalangeal_2";
joints[34] = HAnimJoint1299;

let HAnimJoint1300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1300.USE = "hanim_l_carpal_proximal_interphalangeal_2";
joints[35] = HAnimJoint1300;

let HAnimJoint1301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1301.USE = "hanim_l_carpal_distal_interphalangeal_2";
joints[36] = HAnimJoint1301;

let HAnimJoint1302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1302.USE = "hanim_l_carpometacarpal_3";
joints[37] = HAnimJoint1302;

let HAnimJoint1303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1303.USE = "hanim_l_metacarpophalangeal_3";
joints[38] = HAnimJoint1303;

let HAnimJoint1304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1304.USE = "hanim_l_carpal_proximal_interphalangeal_3";
joints[39] = HAnimJoint1304;

let HAnimJoint1305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1305.USE = "hanim_l_carpal_distal_interphalangeal_3";
joints[40] = HAnimJoint1305;

let HAnimJoint1306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1306.USE = "hanim_l_carpometacarpal_4";
joints[41] = HAnimJoint1306;

let HAnimJoint1307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1307.USE = "hanim_l_metacarpophalangeal_4";
joints[42] = HAnimJoint1307;

let HAnimJoint1308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1308.USE = "hanim_l_carpal_proximal_interphalangeal_4";
joints[43] = HAnimJoint1308;

let HAnimJoint1309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1309.USE = "hanim_l_carpal_distal_interphalangeal_4";
joints[44] = HAnimJoint1309;

let HAnimJoint1310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1310.USE = "hanim_l_carpometacarpal_5";
joints[45] = HAnimJoint1310;

let HAnimJoint1311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1311.USE = "hanim_l_metacarpophalangeal_5";
joints[46] = HAnimJoint1311;

let HAnimJoint1312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1312.USE = "hanim_l_carpal_proximal_interphalangeal_5";
joints[47] = HAnimJoint1312;

let HAnimJoint1313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1313.USE = "hanim_l_carpal_distal_interphalangeal_5";
joints[48] = HAnimJoint1313;

let HAnimJoint1314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1314.USE = "hanim_r_sternoclavicular";
joints[49] = HAnimJoint1314;

let HAnimJoint1315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1315.USE = "hanim_r_acromioclavicular";
joints[50] = HAnimJoint1315;

let HAnimJoint1316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1316.USE = "hanim_r_shoulder";
joints[51] = HAnimJoint1316;

let HAnimJoint1317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1317.USE = "hanim_r_elbow";
joints[52] = HAnimJoint1317;

let HAnimJoint1318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1318.USE = "hanim_r_radiocarpal";
joints[53] = HAnimJoint1318;

let HAnimJoint1319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1319.USE = "hanim_r_carpometacarpal_1";
joints[54] = HAnimJoint1319;

let HAnimJoint1320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1320.USE = "hanim_r_metacarpophalangeal_1";
joints[55] = HAnimJoint1320;

let HAnimJoint1321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1321.USE = "hanim_r_carpal_interphalangeal_1";
joints[56] = HAnimJoint1321;

let HAnimJoint1322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1322.USE = "hanim_r_carpometacarpal_2";
joints[57] = HAnimJoint1322;

let HAnimJoint1323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1323.USE = "hanim_r_metacarpophalangeal_2";
joints[58] = HAnimJoint1323;

let HAnimJoint1324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1324.USE = "hanim_r_carpal_proximal_interphalangeal_2";
joints[59] = HAnimJoint1324;

let HAnimJoint1325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1325.USE = "hanim_r_carpal_distal_interphalangeal_2";
joints[60] = HAnimJoint1325;

let HAnimJoint1326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1326.USE = "hanim_r_carpometacarpal_3";
joints[61] = HAnimJoint1326;

let HAnimJoint1327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1327.USE = "hanim_r_metacarpophalangeal_3";
joints[62] = HAnimJoint1327;

let HAnimJoint1328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1328.USE = "hanim_r_carpal_proximal_interphalangeal_3";
joints[63] = HAnimJoint1328;

let HAnimJoint1329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1329.USE = "hanim_r_carpal_distal_interphalangeal_3";
joints[64] = HAnimJoint1329;

let HAnimJoint1330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1330.USE = "hanim_r_carpometacarpal_4";
joints[65] = HAnimJoint1330;

let HAnimJoint1331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1331.USE = "hanim_r_metacarpophalangeal_4";
joints[66] = HAnimJoint1331;

let HAnimJoint1332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1332.USE = "hanim_r_carpal_proximal_interphalangeal_4";
joints[67] = HAnimJoint1332;

let HAnimJoint1333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1333.USE = "hanim_r_carpal_distal_interphalangeal_4";
joints[68] = HAnimJoint1333;

let HAnimJoint1334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1334.USE = "hanim_r_carpometacarpal_5";
joints[69] = HAnimJoint1334;

let HAnimJoint1335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1335.USE = "hanim_r_metacarpophalangeal_5";
joints[70] = HAnimJoint1335;

let HAnimJoint1336 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1336.USE = "hanim_r_carpal_proximal_interphalangeal_5";
joints[71] = HAnimJoint1336;

let HAnimJoint1337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1337.USE = "hanim_r_carpal_distal_interphalangeal_5";
joints[72] = HAnimJoint1337;

let HAnimSegment1338 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1338.USE = "hanim_sacrum";
segments[73] = HAnimSegment1338;

let HAnimSegment1339 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1339.USE = "hanim_pelvis";
segments[74] = HAnimSegment1339;

let HAnimSegment1340 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1340.USE = "hanim_l_thigh";
segments[75] = HAnimSegment1340;

let HAnimSegment1341 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1341.USE = "hanim_l_calf";
segments[76] = HAnimSegment1341;

let HAnimSegment1342 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1342.USE = "hanim_l_talus";
segments[77] = HAnimSegment1342;

let HAnimSegment1343 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1343.USE = "hanim_l_metatarsal_2";
segments[78] = HAnimSegment1343;

let HAnimSegment1344 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1344.USE = "hanim_l_tarsal_proximal_phalanx_2";
segments[79] = HAnimSegment1344;

let HAnimSegment1345 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1345.USE = "hanim_r_thigh";
segments[80] = HAnimSegment1345;

let HAnimSegment1346 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1346.USE = "hanim_r_calf";
segments[81] = HAnimSegment1346;

let HAnimSegment1347 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1347.USE = "hanim_r_talus";
segments[82] = HAnimSegment1347;

let HAnimSegment1348 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1348.USE = "hanim_r_metatarsal_2";
segments[83] = HAnimSegment1348;

let HAnimSegment1349 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1349.USE = "hanim_r_tarsal_proximal_phalanx_2";
segments[84] = HAnimSegment1349;

let HAnimSegment1350 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1350.USE = "hanim_l5";
segments[85] = HAnimSegment1350;

let HAnimSegment1351 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1351.USE = "hanim_l3";
segments[86] = HAnimSegment1351;

let HAnimSegment1352 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1352.USE = "hanim_l1";
segments[87] = HAnimSegment1352;

let HAnimSegment1353 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1353.USE = "hanim_t10";
segments[88] = HAnimSegment1353;

let HAnimSegment1354 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1354.USE = "hanim_t6";
segments[89] = HAnimSegment1354;

let HAnimSegment1355 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1355.USE = "hanim_t1";
segments[90] = HAnimSegment1355;

let HAnimSegment1356 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1356.USE = "hanim_c4";
segments[91] = HAnimSegment1356;

let HAnimSegment1357 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1357.USE = "hanim_c2";
segments[92] = HAnimSegment1357;

let HAnimSegment1358 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1358.USE = "hanim_l_clavicle";
segments[93] = HAnimSegment1358;

let HAnimSegment1359 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1359.USE = "hanim_l_scapula";
segments[94] = HAnimSegment1359;

let HAnimSegment1360 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1360.USE = "hanim_l_upperarm";
segments[95] = HAnimSegment1360;

let HAnimSegment1361 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1361.USE = "hanim_l_forearm";
segments[96] = HAnimSegment1361;

let HAnimSegment1362 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1362.USE = "hanim_l_carpal";
segments[97] = HAnimSegment1362;

let HAnimSegment1363 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1363.USE = "hanim_l_metacarpal_1";
segments[98] = HAnimSegment1363;

let HAnimSegment1364 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1364.USE = "hanim_l_carpal_proximal_phalanx_1";
segments[99] = HAnimSegment1364;

let HAnimSegment1365 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1365.USE = "hanim_l_metacarpal_2";
segments[100] = HAnimSegment1365;

let HAnimSegment1366 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1366.USE = "hanim_l_carpal_proximal_phalanx_2";
segments[101] = HAnimSegment1366;

let HAnimSegment1367 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1367.USE = "hanim_l_carpal_middle_phalanx_2";
segments[102] = HAnimSegment1367;

let HAnimSegment1368 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1368.USE = "hanim_l_metacarpal_3";
segments[103] = HAnimSegment1368;

let HAnimSegment1369 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1369.USE = "hanim_l_carpal_proximal_phalanx_3";
segments[104] = HAnimSegment1369;

let HAnimSegment1370 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1370.USE = "hanim_l_carpal_middle_phalanx_3";
segments[105] = HAnimSegment1370;

let HAnimSegment1371 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1371.USE = "hanim_l_metacarpal_4";
segments[106] = HAnimSegment1371;

let HAnimSegment1372 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1372.USE = "hanim_l_carpal_proximal_phalanx_4";
segments[107] = HAnimSegment1372;

let HAnimSegment1373 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1373.USE = "hanim_l_carpal_middle_phalanx_4";
segments[108] = HAnimSegment1373;

let HAnimSegment1374 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1374.USE = "hanim_l_metacarpal_5";
segments[109] = HAnimSegment1374;

let HAnimSegment1375 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1375.USE = "hanim_l_carpal_proximal_phalanx_5";
segments[110] = HAnimSegment1375;

let HAnimSegment1376 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1376.USE = "hanim_l_carpal_middle_phalanx_5";
segments[111] = HAnimSegment1376;

let HAnimSegment1377 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1377.USE = "hanim_r_clavicle";
segments[112] = HAnimSegment1377;

let HAnimSegment1378 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1378.USE = "hanim_r_scapula";
segments[113] = HAnimSegment1378;

let HAnimSegment1379 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1379.USE = "hanim_r_upperarm";
segments[114] = HAnimSegment1379;

let HAnimSegment1380 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1380.USE = "hanim_r_forearm";
segments[115] = HAnimSegment1380;

let HAnimSegment1381 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1381.USE = "hanim_r_carpal";
segments[116] = HAnimSegment1381;

let HAnimSegment1382 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1382.USE = "hanim_r_metacarpal_1";
segments[117] = HAnimSegment1382;

let HAnimSegment1383 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1383.USE = "hanim_r_carpal_proximal_phalanx_1";
segments[118] = HAnimSegment1383;

let HAnimSegment1384 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1384.USE = "hanim_r_metacarpal_2";
segments[119] = HAnimSegment1384;

let HAnimSegment1385 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1385.USE = "hanim_r_carpal_proximal_phalanx_2";
segments[120] = HAnimSegment1385;

let HAnimSegment1386 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1386.USE = "hanim_r_carpal_middle_phalanx_2";
segments[121] = HAnimSegment1386;

let HAnimSegment1387 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1387.USE = "hanim_r_metacarpal_3";
segments[122] = HAnimSegment1387;

let HAnimSegment1388 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1388.USE = "hanim_r_carpal_proximal_phalanx_3";
segments[123] = HAnimSegment1388;

let HAnimSegment1389 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1389.USE = "hanim_r_carpal_middle_phalanx_3";
segments[124] = HAnimSegment1389;

let HAnimSegment1390 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1390.USE = "hanim_r_metacarpal_4";
segments[125] = HAnimSegment1390;

let HAnimSegment1391 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1391.USE = "hanim_r_carpal_proximal_phalanx_4";
segments[126] = HAnimSegment1391;

let HAnimSegment1392 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1392.USE = "hanim_r_carpal_middle_phalanx_4";
segments[127] = HAnimSegment1392;

let HAnimSegment1393 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1393.USE = "hanim_r_metacarpal_5";
segments[128] = HAnimSegment1393;

let HAnimSegment1394 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1394.USE = "hanim_r_carpal_proximal_phalanx_5";
segments[129] = HAnimSegment1394;

let HAnimSegment1395 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1395.USE = "hanim_r_carpal_middle_phalanx_5";
segments[130] = HAnimSegment1395;

let HAnimSite1396 = browser.currentScene.createNode("HAnimSite");
HAnimSite1396.USE = "hanim_buttocks_standing_wall_contact_point";
viewpoints[131] = HAnimSite1396;

let HAnimSite1397 = browser.currentScene.createNode("HAnimSite");
HAnimSite1397.USE = "hanim_crotch";
viewpoints[132] = HAnimSite1397;

let HAnimSite1398 = browser.currentScene.createNode("HAnimSite");
HAnimSite1398.USE = "hanim_l_asis";
viewpoints[133] = HAnimSite1398;

let HAnimSite1399 = browser.currentScene.createNode("HAnimSite");
HAnimSite1399.USE = "hanim_l_iliocristale";
viewpoints[134] = HAnimSite1399;

let HAnimSite1400 = browser.currentScene.createNode("HAnimSite");
HAnimSite1400.USE = "hanim_l_psis";
viewpoints[135] = HAnimSite1400;

let HAnimSite1401 = browser.currentScene.createNode("HAnimSite");
HAnimSite1401.USE = "hanim_l_trochanterion";
viewpoints[136] = HAnimSite1401;

let HAnimSite1402 = browser.currentScene.createNode("HAnimSite");
HAnimSite1402.USE = "hanim_r_asis";
viewpoints[137] = HAnimSite1402;

let HAnimSite1403 = browser.currentScene.createNode("HAnimSite");
HAnimSite1403.USE = "hanim_r_iliocristale";
viewpoints[138] = HAnimSite1403;

let HAnimSite1404 = browser.currentScene.createNode("HAnimSite");
HAnimSite1404.USE = "hanim_r_psis";
viewpoints[139] = HAnimSite1404;

let HAnimSite1405 = browser.currentScene.createNode("HAnimSite");
HAnimSite1405.USE = "hanim_r_trochanterion";
viewpoints[140] = HAnimSite1405;

let HAnimSite1406 = browser.currentScene.createNode("HAnimSite");
HAnimSite1406.USE = "hanim_l_femoral_lateral_epicondyles";
viewpoints[141] = HAnimSite1406;

let HAnimSite1407 = browser.currentScene.createNode("HAnimSite");
HAnimSite1407.USE = "hanim_l_femoral_medial_epicondyles";
viewpoints[142] = HAnimSite1407;

let HAnimSite1408 = browser.currentScene.createNode("HAnimSite");
HAnimSite1408.USE = "hanim_l_knee_crease";
viewpoints[143] = HAnimSite1408;

let HAnimSite1409 = browser.currentScene.createNode("HAnimSite");
HAnimSite1409.USE = "hanim_l_suprapatella";
viewpoints[144] = HAnimSite1409;

let HAnimSite1410 = browser.currentScene.createNode("HAnimSite");
HAnimSite1410.USE = "hanim_l_lateral_malleolus";
viewpoints[145] = HAnimSite1410;

let HAnimSite1411 = browser.currentScene.createNode("HAnimSite");
HAnimSite1411.USE = "hanim_l_medial_malleolus";
viewpoints[146] = HAnimSite1411;

let HAnimSite1412 = browser.currentScene.createNode("HAnimSite");
HAnimSite1412.USE = "hanim_l_tibiale";
viewpoints[147] = HAnimSite1412;

let HAnimSite1413 = browser.currentScene.createNode("HAnimSite");
HAnimSite1413.USE = "hanim_l_calcaneus_posterior";
viewpoints[148] = HAnimSite1413;

let HAnimSite1414 = browser.currentScene.createNode("HAnimSite");
HAnimSite1414.USE = "hanim_l_sphyrion";
viewpoints[149] = HAnimSite1414;

let HAnimSite1415 = browser.currentScene.createNode("HAnimSite");
HAnimSite1415.USE = "hanim_l_metatarsal_phalanx_1";
viewpoints[150] = HAnimSite1415;

let HAnimSite1416 = browser.currentScene.createNode("HAnimSite");
HAnimSite1416.USE = "hanim_l_metatarsal_phalanx_5";
viewpoints[151] = HAnimSite1416;

let HAnimSite1417 = browser.currentScene.createNode("HAnimSite");
HAnimSite1417.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
viewpoints[152] = HAnimSite1417;

let HAnimSite1418 = browser.currentScene.createNode("HAnimSite");
HAnimSite1418.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
viewpoints[153] = HAnimSite1418;

let HAnimSite1419 = browser.currentScene.createNode("HAnimSite");
HAnimSite1419.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
viewpoints[154] = HAnimSite1419;

let HAnimSite1420 = browser.currentScene.createNode("HAnimSite");
HAnimSite1420.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
viewpoints[155] = HAnimSite1420;

let HAnimSite1421 = browser.currentScene.createNode("HAnimSite");
HAnimSite1421.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
viewpoints[156] = HAnimSite1421;

let HAnimSite1422 = browser.currentScene.createNode("HAnimSite");
HAnimSite1422.USE = "hanim_r_femoral_lateral_epicondyles";
viewpoints[157] = HAnimSite1422;

let HAnimSite1423 = browser.currentScene.createNode("HAnimSite");
HAnimSite1423.USE = "hanim_r_femoral_medial_epicondyles";
viewpoints[158] = HAnimSite1423;

let HAnimSite1424 = browser.currentScene.createNode("HAnimSite");
HAnimSite1424.USE = "hanim_r_knee_crease";
viewpoints[159] = HAnimSite1424;

let HAnimSite1425 = browser.currentScene.createNode("HAnimSite");
HAnimSite1425.USE = "hanim_r_suprapatella";
viewpoints[160] = HAnimSite1425;

let HAnimSite1426 = browser.currentScene.createNode("HAnimSite");
HAnimSite1426.USE = "hanim_r_lateral_malleolus";
viewpoints[161] = HAnimSite1426;

let HAnimSite1427 = browser.currentScene.createNode("HAnimSite");
HAnimSite1427.USE = "hanim_r_medial_malleolus";
viewpoints[162] = HAnimSite1427;

let HAnimSite1428 = browser.currentScene.createNode("HAnimSite");
HAnimSite1428.USE = "hanim_r_tibiale";
viewpoints[163] = HAnimSite1428;

let HAnimSite1429 = browser.currentScene.createNode("HAnimSite");
HAnimSite1429.USE = "hanim_r_calcaneus_posterior";
viewpoints[164] = HAnimSite1429;

let HAnimSite1430 = browser.currentScene.createNode("HAnimSite");
HAnimSite1430.USE = "hanim_r_sphyrion";
viewpoints[165] = HAnimSite1430;

let HAnimSite1431 = browser.currentScene.createNode("HAnimSite");
HAnimSite1431.USE = "hanim_r_metatarsal_phalanx_1";
viewpoints[166] = HAnimSite1431;

let HAnimSite1432 = browser.currentScene.createNode("HAnimSite");
HAnimSite1432.USE = "hanim_r_metatarsal_phalanx_5";
viewpoints[167] = HAnimSite1432;

let HAnimSite1433 = browser.currentScene.createNode("HAnimSite");
HAnimSite1433.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
viewpoints[168] = HAnimSite1433;

let HAnimSite1434 = browser.currentScene.createNode("HAnimSite");
HAnimSite1434.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
viewpoints[169] = HAnimSite1434;

let HAnimSite1435 = browser.currentScene.createNode("HAnimSite");
HAnimSite1435.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
viewpoints[170] = HAnimSite1435;

let HAnimSite1436 = browser.currentScene.createNode("HAnimSite");
HAnimSite1436.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
viewpoints[171] = HAnimSite1436;

let HAnimSite1437 = browser.currentScene.createNode("HAnimSite");
HAnimSite1437.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
viewpoints[172] = HAnimSite1437;

let HAnimSite1438 = browser.currentScene.createNode("HAnimSite");
HAnimSite1438.USE = "hanim_navel";
viewpoints[173] = HAnimSite1438;

let HAnimSite1439 = browser.currentScene.createNode("HAnimSite");
HAnimSite1439.USE = "hanim_waist_preferred_anterior";
viewpoints[174] = HAnimSite1439;

let HAnimSite1440 = browser.currentScene.createNode("HAnimSite");
HAnimSite1440.USE = "hanim_waist_preferred_posterior";
viewpoints[175] = HAnimSite1440;

let HAnimSite1441 = browser.currentScene.createNode("HAnimSite");
HAnimSite1441.USE = "hanim_l_rib10";
viewpoints[176] = HAnimSite1441;

let HAnimSite1442 = browser.currentScene.createNode("HAnimSite");
HAnimSite1442.USE = "hanim_r_rib10";
viewpoints[177] = HAnimSite1442;

let HAnimSite1443 = browser.currentScene.createNode("HAnimSite");
HAnimSite1443.USE = "hanim_spine_1_middle_back";
viewpoints[178] = HAnimSite1443;

let HAnimSite1444 = browser.currentScene.createNode("HAnimSite");
HAnimSite1444.USE = "hanim_spine_2_middle_back";
viewpoints[179] = HAnimSite1444;

let HAnimSite1445 = browser.currentScene.createNode("HAnimSite");
HAnimSite1445.USE = "hanim_l_thelion";
viewpoints[180] = HAnimSite1445;

let HAnimSite1446 = browser.currentScene.createNode("HAnimSite");
HAnimSite1446.USE = "hanim_r_thelion";
viewpoints[181] = HAnimSite1446;

let HAnimSite1447 = browser.currentScene.createNode("HAnimSite");
HAnimSite1447.USE = "hanim_substernale";
viewpoints[182] = HAnimSite1447;

let HAnimSite1448 = browser.currentScene.createNode("HAnimSite");
HAnimSite1448.USE = "hanim_l_chest_midsagittal_plane";
viewpoints[183] = HAnimSite1448;

let HAnimSite1449 = browser.currentScene.createNode("HAnimSite");
HAnimSite1449.USE = "hanim_mesosternale";
viewpoints[184] = HAnimSite1449;

let HAnimSite1450 = browser.currentScene.createNode("HAnimSite");
HAnimSite1450.USE = "hanim_r_chest_midsagittal_plane";
viewpoints[185] = HAnimSite1450;

let HAnimSite1451 = browser.currentScene.createNode("HAnimSite");
HAnimSite1451.USE = "hanim_rear_center_midsagittal_plane";
viewpoints[186] = HAnimSite1451;

let HAnimSite1452 = browser.currentScene.createNode("HAnimSite");
HAnimSite1452.USE = "hanim_cervicale";
viewpoints[187] = HAnimSite1452;

let HAnimSite1453 = browser.currentScene.createNode("HAnimSite");
HAnimSite1453.USE = "hanim_l_neck_base";
viewpoints[188] = HAnimSite1453;

let HAnimSite1454 = browser.currentScene.createNode("HAnimSite");
HAnimSite1454.USE = "hanim_r_neck_base";
viewpoints[189] = HAnimSite1454;

let HAnimSite1455 = browser.currentScene.createNode("HAnimSite");
HAnimSite1455.USE = "hanim_suprasternale";
viewpoints[190] = HAnimSite1455;

let HAnimSite1456 = browser.currentScene.createNode("HAnimSite");
HAnimSite1456.USE = "hanim_adams_apple";
viewpoints[191] = HAnimSite1456;

let HAnimSite1457 = browser.currentScene.createNode("HAnimSite");
HAnimSite1457.USE = "hanim_l_acromion";
viewpoints[192] = HAnimSite1457;

let HAnimSite1458 = browser.currentScene.createNode("HAnimSite");
HAnimSite1458.USE = "hanim_l_axilla_distal";
viewpoints[193] = HAnimSite1458;

let HAnimSite1459 = browser.currentScene.createNode("HAnimSite");
HAnimSite1459.USE = "hanim_l_axilla_posterior_folds";
viewpoints[194] = HAnimSite1459;

let HAnimSite1460 = browser.currentScene.createNode("HAnimSite");
HAnimSite1460.USE = "hanim_l_axilla_proximal";
viewpoints[195] = HAnimSite1460;

let HAnimSite1461 = browser.currentScene.createNode("HAnimSite");
HAnimSite1461.USE = "hanim_l_clavicale";
viewpoints[196] = HAnimSite1461;

let HAnimSite1462 = browser.currentScene.createNode("HAnimSite");
HAnimSite1462.USE = "hanim_l_bideltoid";
viewpoints[197] = HAnimSite1462;

let HAnimSite1463 = browser.currentScene.createNode("HAnimSite");
HAnimSite1463.USE = "hanim_l_humeral_lateral_epicondyles";
viewpoints[198] = HAnimSite1463;

let HAnimSite1464 = browser.currentScene.createNode("HAnimSite");
HAnimSite1464.USE = "hanim_l_humeral_medial_epicondyles";
viewpoints[199] = HAnimSite1464;

let HAnimSite1465 = browser.currentScene.createNode("HAnimSite");
HAnimSite1465.USE = "hanim_l_olecranon";
viewpoints[200] = HAnimSite1465;

let HAnimSite1466 = browser.currentScene.createNode("HAnimSite");
HAnimSite1466.USE = "hanim_l_radial_styloid";
viewpoints[201] = HAnimSite1466;

let HAnimSite1467 = browser.currentScene.createNode("HAnimSite");
HAnimSite1467.USE = "hanim_l_radiale";
viewpoints[202] = HAnimSite1467;

let HAnimSite1468 = browser.currentScene.createNode("HAnimSite");
HAnimSite1468.USE = "hanim_l_ulnar_styloid";
viewpoints[203] = HAnimSite1468;

let HAnimSite1469 = browser.currentScene.createNode("HAnimSite");
HAnimSite1469.USE = "hanim_l_metacarpal_phalanx_2";
viewpoints[204] = HAnimSite1469;

let HAnimSite1470 = browser.currentScene.createNode("HAnimSite");
HAnimSite1470.USE = "hanim_l_metacarpal_phalanx_3";
viewpoints[205] = HAnimSite1470;

let HAnimSite1471 = browser.currentScene.createNode("HAnimSite");
HAnimSite1471.USE = "hanim_l_metacarpal_phalanx_5";
viewpoints[206] = HAnimSite1471;

let HAnimSite1472 = browser.currentScene.createNode("HAnimSite");
HAnimSite1472.USE = "hanim_r_acromion";
viewpoints[207] = HAnimSite1472;

let HAnimSite1473 = browser.currentScene.createNode("HAnimSite");
HAnimSite1473.USE = "hanim_r_axilla_distal";
viewpoints[208] = HAnimSite1473;

let HAnimSite1474 = browser.currentScene.createNode("HAnimSite");
HAnimSite1474.USE = "hanim_r_axilla_posterior_folds";
viewpoints[209] = HAnimSite1474;

let HAnimSite1475 = browser.currentScene.createNode("HAnimSite");
HAnimSite1475.USE = "hanim_r_axilla_proximal";
viewpoints[210] = HAnimSite1475;

let HAnimSite1476 = browser.currentScene.createNode("HAnimSite");
HAnimSite1476.USE = "hanim_r_clavicale";
viewpoints[211] = HAnimSite1476;

let HAnimSite1477 = browser.currentScene.createNode("HAnimSite");
HAnimSite1477.USE = "hanim_r_bideltoid";
viewpoints[212] = HAnimSite1477;

let HAnimSite1478 = browser.currentScene.createNode("HAnimSite");
HAnimSite1478.USE = "hanim_r_humeral_lateral_epicondyles";
viewpoints[213] = HAnimSite1478;

let HAnimSite1479 = browser.currentScene.createNode("HAnimSite");
HAnimSite1479.USE = "hanim_r_humeral_medial_epicondyles";
viewpoints[214] = HAnimSite1479;

let HAnimSite1480 = browser.currentScene.createNode("HAnimSite");
HAnimSite1480.USE = "hanim_r_olecranon";
viewpoints[215] = HAnimSite1480;

let HAnimSite1481 = browser.currentScene.createNode("HAnimSite");
HAnimSite1481.USE = "hanim_r_radial_styloid";
viewpoints[216] = HAnimSite1481;

let HAnimSite1482 = browser.currentScene.createNode("HAnimSite");
HAnimSite1482.USE = "hanim_r_radiale";
viewpoints[217] = HAnimSite1482;

let HAnimSite1483 = browser.currentScene.createNode("HAnimSite");
HAnimSite1483.USE = "hanim_r_ulnar_styloid";
viewpoints[218] = HAnimSite1483;

let HAnimSite1484 = browser.currentScene.createNode("HAnimSite");
HAnimSite1484.USE = "hanim_r_metacarpal_phalanx_2";
viewpoints[219] = HAnimSite1484;

let HAnimSite1485 = browser.currentScene.createNode("HAnimSite");
HAnimSite1485.USE = "hanim_r_metacarpal_phalanx_3";
viewpoints[220] = HAnimSite1485;

let HAnimSite1486 = browser.currentScene.createNode("HAnimSite");
HAnimSite1486.USE = "hanim_r_metacarpal_phalanx_5";
viewpoints[221] = HAnimSite1486;

browser.currentScene.children[4] = HAnimHumanoid38;

}
main ();
