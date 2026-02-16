const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "Humanoid3.x3d");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d");
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
Coordinate466.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
coord = Coordinate466;

//from vl5 to vl4 vertices 2
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
HAnimJoint489.name = "vl4";
HAnimJoint489.DEF = "hanim_vl4";
HAnimJoint489.center = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
HAnimJoint489.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint489.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment490.name = "l4";
HAnimSegment490.DEF = "hanim_l4";
let Transform491 = browser.currentScene.createNode("Transform");
Transform491.translation = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
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
Coordinate496.point = new X3D.MFVec3f([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
coord = Coordinate496;

//from vl4 to vl3 vertices 2
let ColorRGBA497 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA497.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA497;

geometry = LineSet495;

HAnimSegment490ZZZ.children[1] = Shape494;

HAnimJoint489YYY.children = new X3D.MFNode();

HAnimJoint489ZZZ.children[0] = HAnimSegment490;

let HAnimJoint498 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint498.name = "vl3";
HAnimJoint498.DEF = "hanim_vl3";
HAnimJoint498.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
HAnimJoint498.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint498.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment499 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment499.name = "l3";
HAnimSegment499.DEF = "hanim_l3";
let Transform500 = browser.currentScene.createNode("Transform");
Transform500.translation = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let Transform501 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape502 = browser.currentScene.createNode("Shape");
Shape502.USE = "HAnimJointShape";
Transform501YYY.child = new X3D.undefined();

Transform501ZZZ.child[0] = Shape502;

Transform500YYY.children = new X3D.MFNode();

Transform500ZZZ.children[0] = Transform501;

HAnimSegment499YYY.children = new X3D.MFNode();

HAnimSegment499ZZZ.children[0] = Transform500;

let Shape503 = browser.currentScene.createNode("Shape");
let LineSet504 = browser.currentScene.createNode("LineSet");
LineSet504.vertexCount = new X3D.MFInt32([2]);
let Coordinate505 = browser.currentScene.createNode("Coordinate");
Coordinate505.point = new X3D.MFVec3f([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
coord = Coordinate505;

//from vl3 to vl2 vertices 2
let ColorRGBA506 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA506.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA506;

geometry = LineSet504;

HAnimSegment499ZZZ.children[1] = Shape503;

HAnimJoint498YYY.children = new X3D.MFNode();

HAnimJoint498ZZZ.children[0] = HAnimSegment499;

let HAnimJoint507 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint507.name = "vl2";
HAnimJoint507.DEF = "hanim_vl2";
HAnimJoint507.center = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
HAnimJoint507.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint507.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment508 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment508.name = "l2";
HAnimSegment508.DEF = "hanim_l2";
let Transform509 = browser.currentScene.createNode("Transform");
Transform509.translation = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let Transform510 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape511 = browser.currentScene.createNode("Shape");
Shape511.USE = "HAnimJointShape";
Transform510YYY.child = new X3D.undefined();

Transform510ZZZ.child[0] = Shape511;

Transform509YYY.children = new X3D.MFNode();

Transform509ZZZ.children[0] = Transform510;

HAnimSegment508YYY.children = new X3D.MFNode();

HAnimSegment508ZZZ.children[0] = Transform509;

let Shape512 = browser.currentScene.createNode("Shape");
let LineSet513 = browser.currentScene.createNode("LineSet");
LineSet513.vertexCount = new X3D.MFInt32([2]);
let Coordinate514 = browser.currentScene.createNode("Coordinate");
Coordinate514.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
coord = Coordinate514;

//from vl2 to vl1 vertices 2
let ColorRGBA515 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA515.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA515;

geometry = LineSet513;

HAnimSegment508ZZZ.children[1] = Shape512;

let HAnimSite516 = browser.currentScene.createNode("HAnimSite");
HAnimSite516.name = "l_rib10";
HAnimSite516.DEF = "hanim_l_rib10";
HAnimSite516.translation = new X3D.SFVec3f([0.0871,1.1925,0.0992]);
let TouchSensor517 = browser.currentScene.createNode("TouchSensor");
TouchSensor517.description = "HAnimSite 28 l_rib10";
HAnimSite516YYY.children = new X3D.MFNode();

HAnimSite516ZZZ.children[0] = TouchSensor517;

let Shape518 = browser.currentScene.createNode("Shape");
Shape518.USE = "HAnimSiteShape";
HAnimSite516ZZZ.children[1] = Shape518;

let Billboard519 = browser.currentScene.createNode("Billboard");
let Shape520 = browser.currentScene.createNode("Shape");
let Text521 = browser.currentScene.createNode("Text");
Text521.string = new X3D.MFString([new X3D.SFString("28")]);
let FontStyle522 = browser.currentScene.createNode("FontStyle");
FontStyle522.size = 0.035;
fontStyle = FontStyle522;

geometry = Text521;

Billboard519YYY.children = new X3D.MFNode();

Billboard519ZZZ.children[0] = Shape520;

HAnimSite516ZZZ.children[2] = Billboard519;

HAnimSegment508ZZZ.children[2] = HAnimSite516;

let HAnimSite523 = browser.currentScene.createNode("HAnimSite");
HAnimSite523.name = "r_rib10";
HAnimSite523.DEF = "hanim_r_rib10";
HAnimSite523.translation = new X3D.SFVec3f([-0.0711,1.1941,0.1016]);
let TouchSensor524 = browser.currentScene.createNode("TouchSensor");
TouchSensor524.description = "HAnimSite 30 r_rib10";
HAnimSite523YYY.children = new X3D.MFNode();

HAnimSite523ZZZ.children[0] = TouchSensor524;

let Shape525 = browser.currentScene.createNode("Shape");
Shape525.USE = "HAnimSiteShape";
HAnimSite523ZZZ.children[1] = Shape525;

let Billboard526 = browser.currentScene.createNode("Billboard");
let Shape527 = browser.currentScene.createNode("Shape");
let Text528 = browser.currentScene.createNode("Text");
Text528.string = new X3D.MFString([new X3D.SFString("30")]);
let FontStyle529 = browser.currentScene.createNode("FontStyle");
FontStyle529.size = 0.035;
fontStyle = FontStyle529;

geometry = Text528;

Billboard526YYY.children = new X3D.MFNode();

Billboard526ZZZ.children[0] = Shape527;

HAnimSite523ZZZ.children[2] = Billboard526;

HAnimSegment508ZZZ.children[3] = HAnimSite523;

let HAnimSite530 = browser.currentScene.createNode("HAnimSite");
HAnimSite530.name = "spine_2_middle_back";
HAnimSite530.DEF = "hanim_spine_2_middle_back";
let TouchSensor531 = browser.currentScene.createNode("TouchSensor");
TouchSensor531.description = "HAnimSite spine_2_middle_back";
HAnimSite530YYY.children = new X3D.MFNode();

HAnimSite530ZZZ.children[0] = TouchSensor531;

let Shape532 = browser.currentScene.createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530ZZZ.children[1] = Shape532;

let Billboard533 = browser.currentScene.createNode("Billboard");
let Shape534 = browser.currentScene.createNode("Shape");
let Text535 = browser.currentScene.createNode("Text");
Text535.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle536 = browser.currentScene.createNode("FontStyle");
FontStyle536.size = 0.035;
fontStyle = FontStyle536;

geometry = Text535;

Billboard533YYY.children = new X3D.MFNode();

Billboard533ZZZ.children[0] = Shape534;

HAnimSite530ZZZ.children[2] = Billboard533;

HAnimSegment508ZZZ.children[4] = HAnimSite530;

HAnimJoint507YYY.children = new X3D.MFNode();

HAnimJoint507ZZZ.children[0] = HAnimSegment508;

let HAnimJoint537 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint537.name = "vl1";
HAnimJoint537.DEF = "hanim_vl1";
HAnimJoint537.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
HAnimJoint537.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint537.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment538 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment538.name = "l1";
HAnimSegment538.DEF = "hanim_l1";
let Transform539 = browser.currentScene.createNode("Transform");
Transform539.translation = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let Transform540 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape541 = browser.currentScene.createNode("Shape");
Shape541.USE = "HAnimJointShape";
Transform540YYY.child = new X3D.undefined();

Transform540ZZZ.child[0] = Shape541;

Transform539YYY.children = new X3D.MFNode();

Transform539ZZZ.children[0] = Transform540;

HAnimSegment538YYY.children = new X3D.MFNode();

HAnimSegment538ZZZ.children[0] = Transform539;

let Shape542 = browser.currentScene.createNode("Shape");
let LineSet543 = browser.currentScene.createNode("LineSet");
LineSet543.vertexCount = new X3D.MFInt32([2]);
let Coordinate544 = browser.currentScene.createNode("Coordinate");
Coordinate544.point = new X3D.MFVec3f([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
coord = Coordinate544;

//from vl1 to vt12 vertices 2
let ColorRGBA545 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA545.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA545;

geometry = LineSet543;

HAnimSegment538ZZZ.children[1] = Shape542;

HAnimJoint537YYY.children = new X3D.MFNode();

HAnimJoint537ZZZ.children[0] = HAnimSegment538;

let HAnimJoint546 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint546.name = "vt12";
HAnimJoint546.DEF = "hanim_vt12";
HAnimJoint546.center = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
HAnimJoint546.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint546.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment547 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment547.name = "t12";
HAnimSegment547.DEF = "hanim_t12";
let Transform548 = browser.currentScene.createNode("Transform");
Transform548.translation = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let Transform549 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape550 = browser.currentScene.createNode("Shape");
Shape550.USE = "HAnimJointShape";
Transform549YYY.child = new X3D.undefined();

Transform549ZZZ.child[0] = Shape550;

Transform548YYY.children = new X3D.MFNode();

Transform548ZZZ.children[0] = Transform549;

HAnimSegment547YYY.children = new X3D.MFNode();

HAnimSegment547ZZZ.children[0] = Transform548;

let Shape551 = browser.currentScene.createNode("Shape");
let LineSet552 = browser.currentScene.createNode("LineSet");
LineSet552.vertexCount = new X3D.MFInt32([2]);
let Coordinate553 = browser.currentScene.createNode("Coordinate");
Coordinate553.point = new X3D.MFVec3f([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
coord = Coordinate553;

//from vt12 to vt11 vertices 2
let ColorRGBA554 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA554.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA554;

geometry = LineSet552;

HAnimSegment547ZZZ.children[1] = Shape551;

HAnimJoint546YYY.children = new X3D.MFNode();

HAnimJoint546ZZZ.children[0] = HAnimSegment547;

let HAnimJoint555 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint555.name = "vt11";
HAnimJoint555.DEF = "hanim_vt11";
HAnimJoint555.center = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
HAnimJoint555.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint555.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment556 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment556.name = "t11";
HAnimSegment556.DEF = "hanim_t11";
let Transform557 = browser.currentScene.createNode("Transform");
Transform557.translation = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let Transform558 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape559 = browser.currentScene.createNode("Shape");
Shape559.USE = "HAnimJointShape";
Transform558YYY.child = new X3D.undefined();

Transform558ZZZ.child[0] = Shape559;

Transform557YYY.children = new X3D.MFNode();

Transform557ZZZ.children[0] = Transform558;

HAnimSegment556YYY.children = new X3D.MFNode();

HAnimSegment556ZZZ.children[0] = Transform557;

let Shape560 = browser.currentScene.createNode("Shape");
let LineSet561 = browser.currentScene.createNode("LineSet");
LineSet561.vertexCount = new X3D.MFInt32([2]);
let Coordinate562 = browser.currentScene.createNode("Coordinate");
Coordinate562.point = new X3D.MFVec3f([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
coord = Coordinate562;

//from vt11 to vt10 vertices 2
let ColorRGBA563 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA563.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA563;

geometry = LineSet561;

HAnimSegment556ZZZ.children[1] = Shape560;

HAnimJoint555YYY.children = new X3D.MFNode();

HAnimJoint555ZZZ.children[0] = HAnimSegment556;

let HAnimJoint564 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint564.name = "vt10";
HAnimJoint564.DEF = "hanim_vt10";
HAnimJoint564.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
HAnimJoint564.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint564.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment565 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment565.name = "t10";
HAnimSegment565.DEF = "hanim_t10";
let Transform566 = browser.currentScene.createNode("Transform");
Transform566.translation = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let Transform567 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape568 = browser.currentScene.createNode("Shape");
Shape568.USE = "HAnimJointShape";
Transform567YYY.child = new X3D.undefined();

Transform567ZZZ.child[0] = Shape568;

Transform566YYY.children = new X3D.MFNode();

Transform566ZZZ.children[0] = Transform567;

HAnimSegment565YYY.children = new X3D.MFNode();

HAnimSegment565ZZZ.children[0] = Transform566;

let Shape569 = browser.currentScene.createNode("Shape");
let LineSet570 = browser.currentScene.createNode("LineSet");
LineSet570.vertexCount = new X3D.MFInt32([2]);
let Coordinate571 = browser.currentScene.createNode("Coordinate");
Coordinate571.point = new X3D.MFVec3f([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
coord = Coordinate571;

//from vt10 to vt9 vertices 2
let ColorRGBA572 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA572.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA572;

geometry = LineSet570;

HAnimSegment565ZZZ.children[1] = Shape569;

let HAnimSite573 = browser.currentScene.createNode("HAnimSite");
HAnimSite573.name = "substernale";
HAnimSite573.DEF = "hanim_substernale";
HAnimSite573.translation = new X3D.SFVec3f([0.0085,1.2995,0.1147]);
let TouchSensor574 = browser.currentScene.createNode("TouchSensor");
TouchSensor574.description = "HAnimSite 13 substernale";
HAnimSite573YYY.children = new X3D.MFNode();

HAnimSite573ZZZ.children[0] = TouchSensor574;

let Shape575 = browser.currentScene.createNode("Shape");
Shape575.USE = "HAnimSiteShape";
HAnimSite573ZZZ.children[1] = Shape575;

let Billboard576 = browser.currentScene.createNode("Billboard");
let Shape577 = browser.currentScene.createNode("Shape");
let Text578 = browser.currentScene.createNode("Text");
Text578.string = new X3D.MFString([new X3D.SFString("13")]);
let FontStyle579 = browser.currentScene.createNode("FontStyle");
FontStyle579.size = 0.035;
fontStyle = FontStyle579;

geometry = Text578;

Billboard576YYY.children = new X3D.MFNode();

Billboard576ZZZ.children[0] = Shape577;

HAnimSite573ZZZ.children[2] = Billboard576;

HAnimSegment565ZZZ.children[2] = HAnimSite573;

HAnimJoint564YYY.children = new X3D.MFNode();

HAnimJoint564ZZZ.children[0] = HAnimSegment565;

let HAnimJoint580 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint580.name = "vt9";
HAnimJoint580.DEF = "hanim_vt9";
HAnimJoint580.center = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
HAnimJoint580.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint580.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment581 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment581.name = "t9";
HAnimSegment581.DEF = "hanim_t9";
let Transform582 = browser.currentScene.createNode("Transform");
Transform582.translation = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let Transform583 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape584 = browser.currentScene.createNode("Shape");
Shape584.USE = "HAnimJointShape";
Transform583YYY.child = new X3D.undefined();

Transform583ZZZ.child[0] = Shape584;

Transform582YYY.children = new X3D.MFNode();

Transform582ZZZ.children[0] = Transform583;

HAnimSegment581YYY.children = new X3D.MFNode();

HAnimSegment581ZZZ.children[0] = Transform582;

let Shape585 = browser.currentScene.createNode("Shape");
let LineSet586 = browser.currentScene.createNode("LineSet");
LineSet586.vertexCount = new X3D.MFInt32([2]);
let Coordinate587 = browser.currentScene.createNode("Coordinate");
Coordinate587.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
coord = Coordinate587;

//from vt9 to vt8 vertices 2
let ColorRGBA588 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA588.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA588;

geometry = LineSet586;

HAnimSegment581ZZZ.children[1] = Shape585;

let HAnimSite589 = browser.currentScene.createNode("HAnimSite");
HAnimSite589.name = "l_thelion";
HAnimSite589.DEF = "hanim_l_thelion";
HAnimSite589.translation = new X3D.SFVec3f([0.0918,1.3382,0.1192]);
let TouchSensor590 = browser.currentScene.createNode("TouchSensor");
TouchSensor590.description = "HAnimSite 29 l_thelion";
HAnimSite589YYY.children = new X3D.MFNode();

HAnimSite589ZZZ.children[0] = TouchSensor590;

let Shape591 = browser.currentScene.createNode("Shape");
Shape591.USE = "HAnimSiteShape";
HAnimSite589ZZZ.children[1] = Shape591;

let Billboard592 = browser.currentScene.createNode("Billboard");
let Shape593 = browser.currentScene.createNode("Shape");
let Text594 = browser.currentScene.createNode("Text");
Text594.string = new X3D.MFString([new X3D.SFString("29")]);
let FontStyle595 = browser.currentScene.createNode("FontStyle");
FontStyle595.size = 0.035;
fontStyle = FontStyle595;

geometry = Text594;

Billboard592YYY.children = new X3D.MFNode();

Billboard592ZZZ.children[0] = Shape593;

HAnimSite589ZZZ.children[2] = Billboard592;

HAnimSegment581ZZZ.children[2] = HAnimSite589;

let HAnimSite596 = browser.currentScene.createNode("HAnimSite");
HAnimSite596.name = "r_thelion";
HAnimSite596.DEF = "hanim_r_thelion";
HAnimSite596.translation = new X3D.SFVec3f([-0.0736,1.3385,0.1217]);
let TouchSensor597 = browser.currentScene.createNode("TouchSensor");
TouchSensor597.description = "HAnimSite 31 r_thelion";
HAnimSite596YYY.children = new X3D.MFNode();

HAnimSite596ZZZ.children[0] = TouchSensor597;

let Shape598 = browser.currentScene.createNode("Shape");
Shape598.USE = "HAnimSiteShape";
HAnimSite596ZZZ.children[1] = Shape598;

let Billboard599 = browser.currentScene.createNode("Billboard");
let Shape600 = browser.currentScene.createNode("Shape");
let Text601 = browser.currentScene.createNode("Text");
Text601.string = new X3D.MFString([new X3D.SFString("31")]);
let FontStyle602 = browser.currentScene.createNode("FontStyle");
FontStyle602.size = 0.035;
fontStyle = FontStyle602;

geometry = Text601;

Billboard599YYY.children = new X3D.MFNode();

Billboard599ZZZ.children[0] = Shape600;

HAnimSite596ZZZ.children[2] = Billboard599;

HAnimSegment581ZZZ.children[3] = HAnimSite596;

HAnimJoint580YYY.children = new X3D.MFNode();

HAnimJoint580ZZZ.children[0] = HAnimSegment581;

let HAnimJoint603 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint603.name = "vt8";
HAnimJoint603.DEF = "hanim_vt8";
HAnimJoint603.center = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
HAnimJoint603.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint603.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment604 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment604.name = "t8";
HAnimSegment604.DEF = "hanim_t8";
let Transform605 = browser.currentScene.createNode("Transform");
Transform605.translation = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
let Transform606 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape607 = browser.currentScene.createNode("Shape");
Shape607.USE = "HAnimJointShape";
Transform606YYY.child = new X3D.undefined();

Transform606ZZZ.child[0] = Shape607;

Transform605YYY.children = new X3D.MFNode();

Transform605ZZZ.children[0] = Transform606;

HAnimSegment604YYY.children = new X3D.MFNode();

HAnimSegment604ZZZ.children[0] = Transform605;

let Shape608 = browser.currentScene.createNode("Shape");
let LineSet609 = browser.currentScene.createNode("LineSet");
LineSet609.vertexCount = new X3D.MFInt32([2]);
let Coordinate610 = browser.currentScene.createNode("Coordinate");
Coordinate610.point = new X3D.MFVec3f([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
coord = Coordinate610;

//from vt8 to vt7 vertices 2
let ColorRGBA611 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA611;

geometry = LineSet609;

HAnimSegment604ZZZ.children[1] = Shape608;

HAnimJoint603YYY.children = new X3D.MFNode();

HAnimJoint603ZZZ.children[0] = HAnimSegment604;

let HAnimJoint612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint612.name = "vt7";
HAnimJoint612.DEF = "hanim_vt7";
HAnimJoint612.center = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
HAnimJoint612.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint612.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment613 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment613.name = "t7";
HAnimSegment613.DEF = "hanim_t7";
let Transform614 = browser.currentScene.createNode("Transform");
Transform614.translation = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let Transform615 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape616 = browser.currentScene.createNode("Shape");
Shape616.USE = "HAnimJointShape";
Transform615YYY.child = new X3D.undefined();

Transform615ZZZ.child[0] = Shape616;

Transform614YYY.children = new X3D.MFNode();

Transform614ZZZ.children[0] = Transform615;

HAnimSegment613YYY.children = new X3D.MFNode();

HAnimSegment613ZZZ.children[0] = Transform614;

let Shape617 = browser.currentScene.createNode("Shape");
let LineSet618 = browser.currentScene.createNode("LineSet");
LineSet618.vertexCount = new X3D.MFInt32([2]);
let Coordinate619 = browser.currentScene.createNode("Coordinate");
Coordinate619.point = new X3D.MFVec3f([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
coord = Coordinate619;

//from vt7 to vt6 vertices 2
let ColorRGBA620 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA620.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA620;

geometry = LineSet618;

HAnimSegment613ZZZ.children[1] = Shape617;

HAnimJoint612YYY.children = new X3D.MFNode();

HAnimJoint612ZZZ.children[0] = HAnimSegment613;

let HAnimJoint621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint621.name = "vt6";
HAnimJoint621.DEF = "hanim_vt6";
HAnimJoint621.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
HAnimJoint621.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint621.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment622 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment622.name = "t6";
HAnimSegment622.DEF = "hanim_t6";
let Transform623 = browser.currentScene.createNode("Transform");
Transform623.translation = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let Transform624 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape625 = browser.currentScene.createNode("Shape");
Shape625.USE = "HAnimJointShape";
Transform624YYY.child = new X3D.undefined();

Transform624ZZZ.child[0] = Shape625;

Transform623YYY.children = new X3D.MFNode();

Transform623ZZZ.children[0] = Transform624;

HAnimSegment622YYY.children = new X3D.MFNode();

HAnimSegment622ZZZ.children[0] = Transform623;

let Shape626 = browser.currentScene.createNode("Shape");
let LineSet627 = browser.currentScene.createNode("LineSet");
LineSet627.vertexCount = new X3D.MFInt32([2]);
let Coordinate628 = browser.currentScene.createNode("Coordinate");
Coordinate628.point = new X3D.MFVec3f([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
coord = Coordinate628;

//from vt6 to vt5 vertices 2
let ColorRGBA629 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA629.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA629;

geometry = LineSet627;

HAnimSegment622ZZZ.children[1] = Shape626;

let HAnimSite630 = browser.currentScene.createNode("HAnimSite");
HAnimSite630.name = "l_chest_midsagittal_plane";
HAnimSite630.DEF = "hanim_l_chest_midsagittal_plane";
let TouchSensor631 = browser.currentScene.createNode("TouchSensor");
TouchSensor631.description = "HAnimSite 94 l_chest_midsagittal_plane";
HAnimSite630YYY.children = new X3D.MFNode();

HAnimSite630ZZZ.children[0] = TouchSensor631;

let Shape632 = browser.currentScene.createNode("Shape");
Shape632.USE = "HAnimSiteShape";
HAnimSite630ZZZ.children[1] = Shape632;

let Billboard633 = browser.currentScene.createNode("Billboard");
let Shape634 = browser.currentScene.createNode("Shape");
let Text635 = browser.currentScene.createNode("Text");
Text635.string = new X3D.MFString([new X3D.SFString("94")]);
let FontStyle636 = browser.currentScene.createNode("FontStyle");
FontStyle636.size = 0.035;
fontStyle = FontStyle636;

geometry = Text635;

Billboard633YYY.children = new X3D.MFNode();

Billboard633ZZZ.children[0] = Shape634;

HAnimSite630ZZZ.children[2] = Billboard633;

HAnimSegment622ZZZ.children[2] = HAnimSite630;

let HAnimSite637 = browser.currentScene.createNode("HAnimSite");
HAnimSite637.name = "mesosternale";
HAnimSite637.DEF = "hanim_mesosternale";
let TouchSensor638 = browser.currentScene.createNode("TouchSensor");
TouchSensor638.description = "HAnimSite 88 mesosternale";
HAnimSite637YYY.children = new X3D.MFNode();

HAnimSite637ZZZ.children[0] = TouchSensor638;

let Shape639 = browser.currentScene.createNode("Shape");
Shape639.USE = "HAnimSiteShape";
HAnimSite637ZZZ.children[1] = Shape639;

let Billboard640 = browser.currentScene.createNode("Billboard");
let Shape641 = browser.currentScene.createNode("Shape");
let Text642 = browser.currentScene.createNode("Text");
Text642.string = new X3D.MFString([new X3D.SFString("88")]);
let FontStyle643 = browser.currentScene.createNode("FontStyle");
FontStyle643.size = 0.035;
fontStyle = FontStyle643;

geometry = Text642;

Billboard640YYY.children = new X3D.MFNode();

Billboard640ZZZ.children[0] = Shape641;

HAnimSite637ZZZ.children[2] = Billboard640;

HAnimSegment622ZZZ.children[3] = HAnimSite637;

let HAnimSite644 = browser.currentScene.createNode("HAnimSite");
HAnimSite644.name = "r_chest_midsagittal_plane";
HAnimSite644.DEF = "hanim_r_chest_midsagittal_plane";
let TouchSensor645 = browser.currentScene.createNode("TouchSensor");
TouchSensor645.description = "HAnimSite 95 r_chest_midsagittal_plane";
HAnimSite644YYY.children = new X3D.MFNode();

HAnimSite644ZZZ.children[0] = TouchSensor645;

let Shape646 = browser.currentScene.createNode("Shape");
Shape646.USE = "HAnimSiteShape";
HAnimSite644ZZZ.children[1] = Shape646;

let Billboard647 = browser.currentScene.createNode("Billboard");
let Shape648 = browser.currentScene.createNode("Shape");
let Text649 = browser.currentScene.createNode("Text");
Text649.string = new X3D.MFString([new X3D.SFString("95")]);
let FontStyle650 = browser.currentScene.createNode("FontStyle");
FontStyle650.size = 0.035;
fontStyle = FontStyle650;

geometry = Text649;

Billboard647YYY.children = new X3D.MFNode();

Billboard647ZZZ.children[0] = Shape648;

HAnimSite644ZZZ.children[2] = Billboard647;

HAnimSegment622ZZZ.children[4] = HAnimSite644;

let HAnimSite651 = browser.currentScene.createNode("HAnimSite");
HAnimSite651.name = "rear_center_midsagittal_plane";
HAnimSite651.DEF = "hanim_rear_center_midsagittal_plane";
let TouchSensor652 = browser.currentScene.createNode("TouchSensor");
TouchSensor652.description = "HAnimSite 92 rear_center_midsagittal_plane";
HAnimSite651YYY.children = new X3D.MFNode();

HAnimSite651ZZZ.children[0] = TouchSensor652;

let Shape653 = browser.currentScene.createNode("Shape");
Shape653.USE = "HAnimSiteShape";
HAnimSite651ZZZ.children[1] = Shape653;

let Billboard654 = browser.currentScene.createNode("Billboard");
let Shape655 = browser.currentScene.createNode("Shape");
let Text656 = browser.currentScene.createNode("Text");
Text656.string = new X3D.MFString([new X3D.SFString("92")]);
let FontStyle657 = browser.currentScene.createNode("FontStyle");
FontStyle657.size = 0.035;
fontStyle = FontStyle657;

geometry = Text656;

Billboard654YYY.children = new X3D.MFNode();

Billboard654ZZZ.children[0] = Shape655;

HAnimSite651ZZZ.children[2] = Billboard654;

HAnimSegment622ZZZ.children[5] = HAnimSite651;

HAnimJoint621YYY.children = new X3D.MFNode();

HAnimJoint621ZZZ.children[0] = HAnimSegment622;

let HAnimJoint658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint658.name = "vt5";
HAnimJoint658.DEF = "hanim_vt5";
HAnimJoint658.center = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
HAnimJoint658.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint658.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment659 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment659.name = "t5";
HAnimSegment659.DEF = "hanim_t5";
let Transform660 = browser.currentScene.createNode("Transform");
Transform660.translation = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let Transform661 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape662 = browser.currentScene.createNode("Shape");
Shape662.USE = "HAnimJointShape";
Transform661YYY.child = new X3D.undefined();

Transform661ZZZ.child[0] = Shape662;

Transform660YYY.children = new X3D.MFNode();

Transform660ZZZ.children[0] = Transform661;

HAnimSegment659YYY.children = new X3D.MFNode();

HAnimSegment659ZZZ.children[0] = Transform660;

let Shape663 = browser.currentScene.createNode("Shape");
let LineSet664 = browser.currentScene.createNode("LineSet");
LineSet664.vertexCount = new X3D.MFInt32([2]);
let Coordinate665 = browser.currentScene.createNode("Coordinate");
Coordinate665.point = new X3D.MFVec3f([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
coord = Coordinate665;

//from vt5 to vt4 vertices 2
let ColorRGBA666 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA666;

geometry = LineSet664;

HAnimSegment659ZZZ.children[1] = Shape663;

let HAnimSite667 = browser.currentScene.createNode("HAnimSite");
HAnimSite667.name = "spine_1_middle_back";
HAnimSite667.DEF = "hanim_spine_1_middle_back";
let TouchSensor668 = browser.currentScene.createNode("TouchSensor");
TouchSensor668.description = "HAnimSite 24 spine_1_middle_back";
HAnimSite667YYY.children = new X3D.MFNode();

HAnimSite667ZZZ.children[0] = TouchSensor668;

let Shape669 = browser.currentScene.createNode("Shape");
Shape669.USE = "HAnimSiteShape";
HAnimSite667ZZZ.children[1] = Shape669;

let Billboard670 = browser.currentScene.createNode("Billboard");
let Shape671 = browser.currentScene.createNode("Shape");
let Text672 = browser.currentScene.createNode("Text");
Text672.string = new X3D.MFString([new X3D.SFString("24")]);
let FontStyle673 = browser.currentScene.createNode("FontStyle");
FontStyle673.size = 0.035;
fontStyle = FontStyle673;

geometry = Text672;

Billboard670YYY.children = new X3D.MFNode();

Billboard670ZZZ.children[0] = Shape671;

HAnimSite667ZZZ.children[2] = Billboard670;

HAnimSegment659ZZZ.children[2] = HAnimSite667;

HAnimJoint658YYY.children = new X3D.MFNode();

HAnimJoint658ZZZ.children[0] = HAnimSegment659;

let HAnimJoint674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint674.name = "vt4";
HAnimJoint674.DEF = "hanim_vt4";
HAnimJoint674.center = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
HAnimJoint674.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint674.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment675 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment675.name = "t4";
HAnimSegment675.DEF = "hanim_t4";
let Transform676 = browser.currentScene.createNode("Transform");
Transform676.translation = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let Transform677 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape678 = browser.currentScene.createNode("Shape");
Shape678.USE = "HAnimJointShape";
Transform677YYY.child = new X3D.undefined();

Transform677ZZZ.child[0] = Shape678;

Transform676YYY.children = new X3D.MFNode();

Transform676ZZZ.children[0] = Transform677;

HAnimSegment675YYY.children = new X3D.MFNode();

HAnimSegment675ZZZ.children[0] = Transform676;

let Shape679 = browser.currentScene.createNode("Shape");
let LineSet680 = browser.currentScene.createNode("LineSet");
LineSet680.vertexCount = new X3D.MFInt32([2]);
let Coordinate681 = browser.currentScene.createNode("Coordinate");
Coordinate681.point = new X3D.MFVec3f([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
coord = Coordinate681;

//from vt4 to vt3 vertices 2
let ColorRGBA682 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA682.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA682;

geometry = LineSet680;

HAnimSegment675ZZZ.children[1] = Shape679;

HAnimJoint674YYY.children = new X3D.MFNode();

HAnimJoint674ZZZ.children[0] = HAnimSegment675;

let HAnimJoint683 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint683.name = "vt3";
HAnimJoint683.DEF = "hanim_vt3";
HAnimJoint683.center = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
HAnimJoint683.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint683.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment684 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment684.name = "t3";
HAnimSegment684.DEF = "hanim_t3";
let Transform685 = browser.currentScene.createNode("Transform");
Transform685.translation = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
let Transform686 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape687 = browser.currentScene.createNode("Shape");
Shape687.USE = "HAnimJointShape";
Transform686YYY.child = new X3D.undefined();

Transform686ZZZ.child[0] = Shape687;

Transform685YYY.children = new X3D.MFNode();

Transform685ZZZ.children[0] = Transform686;

HAnimSegment684YYY.children = new X3D.MFNode();

HAnimSegment684ZZZ.children[0] = Transform685;

let Shape688 = browser.currentScene.createNode("Shape");
let LineSet689 = browser.currentScene.createNode("LineSet");
LineSet689.vertexCount = new X3D.MFInt32([2]);
let Coordinate690 = browser.currentScene.createNode("Coordinate");
Coordinate690.point = new X3D.MFVec3f([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
coord = Coordinate690;

//from vt3 to vt2 vertices 2
let ColorRGBA691 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA691.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA691;

geometry = LineSet689;

HAnimSegment684ZZZ.children[1] = Shape688;

HAnimJoint683YYY.children = new X3D.MFNode();

HAnimJoint683ZZZ.children[0] = HAnimSegment684;

let HAnimJoint692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint692.name = "vt2";
HAnimJoint692.DEF = "hanim_vt2";
HAnimJoint692.center = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
HAnimJoint692.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint692.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment693 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment693.name = "t2";
HAnimSegment693.DEF = "hanim_t2";
let Transform694 = browser.currentScene.createNode("Transform");
Transform694.translation = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
let Transform695 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape696 = browser.currentScene.createNode("Shape");
Shape696.USE = "HAnimJointShape";
Transform695YYY.child = new X3D.undefined();

Transform695ZZZ.child[0] = Shape696;

Transform694YYY.children = new X3D.MFNode();

Transform694ZZZ.children[0] = Transform695;

HAnimSegment693YYY.children = new X3D.MFNode();

HAnimSegment693ZZZ.children[0] = Transform694;

let Shape697 = browser.currentScene.createNode("Shape");
let LineSet698 = browser.currentScene.createNode("LineSet");
LineSet698.vertexCount = new X3D.MFInt32([2]);
let Coordinate699 = browser.currentScene.createNode("Coordinate");
Coordinate699.point = new X3D.MFVec3f([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
coord = Coordinate699;

//from vt2 to vt1 vertices 2
let ColorRGBA700 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA700.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA700;

geometry = LineSet698;

HAnimSegment693ZZZ.children[1] = Shape697;

HAnimJoint692YYY.children = new X3D.MFNode();

HAnimJoint692ZZZ.children[0] = HAnimSegment693;

let HAnimJoint701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint701.name = "vt1";
HAnimJoint701.DEF = "hanim_vt1";
HAnimJoint701.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
HAnimJoint701.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint701.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment702 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment702.name = "t1";
HAnimSegment702.DEF = "hanim_t1";
let Transform703 = browser.currentScene.createNode("Transform");
Transform703.translation = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let Transform704 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape705 = browser.currentScene.createNode("Shape");
Shape705.USE = "HAnimJointShape";
Transform704YYY.child = new X3D.undefined();

Transform704ZZZ.child[0] = Shape705;

Transform703YYY.children = new X3D.MFNode();

Transform703ZZZ.children[0] = Transform704;

HAnimSegment702YYY.children = new X3D.MFNode();

HAnimSegment702ZZZ.children[0] = Transform703;

let Shape706 = browser.currentScene.createNode("Shape");
let LineSet707 = browser.currentScene.createNode("LineSet");
LineSet707.vertexCount = new X3D.MFInt32([2]);
let Coordinate708 = browser.currentScene.createNode("Coordinate");
Coordinate708.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
coord = Coordinate708;

//from vt1 to vc7 vertices 2
let ColorRGBA709 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA709;

geometry = LineSet707;

HAnimSegment702ZZZ.children[1] = Shape706;

let HAnimSite710 = browser.currentScene.createNode("HAnimSite");
HAnimSite710.name = "cervicale";
HAnimSite710.DEF = "hanim_cervicale";
HAnimSite710.translation = new X3D.SFVec3f([0.0064,1.52,-0.0815]);
let TouchSensor711 = browser.currentScene.createNode("TouchSensor");
TouchSensor711.description = "HAnimSite 10 cervicale";
HAnimSite710YYY.children = new X3D.MFNode();

HAnimSite710ZZZ.children[0] = TouchSensor711;

let Shape712 = browser.currentScene.createNode("Shape");
Shape712.USE = "HAnimSiteShape";
HAnimSite710ZZZ.children[1] = Shape712;

let Billboard713 = browser.currentScene.createNode("Billboard");
let Shape714 = browser.currentScene.createNode("Shape");
let Text715 = browser.currentScene.createNode("Text");
Text715.string = new X3D.MFString([new X3D.SFString("10")]);
let FontStyle716 = browser.currentScene.createNode("FontStyle");
FontStyle716.size = 0.035;
fontStyle = FontStyle716;

geometry = Text715;

Billboard713YYY.children = new X3D.MFNode();

Billboard713ZZZ.children[0] = Shape714;

HAnimSite710ZZZ.children[2] = Billboard713;

HAnimSegment702ZZZ.children[2] = HAnimSite710;

let HAnimSite717 = browser.currentScene.createNode("HAnimSite");
HAnimSite717.name = "suprasternale";
HAnimSite717.DEF = "hanim_suprasternale";
HAnimSite717.translation = new X3D.SFVec3f([0.0084,1.4714,0.0551]);
let TouchSensor718 = browser.currentScene.createNode("TouchSensor");
TouchSensor718.description = "HAnimSite 12 suprasternale";
HAnimSite717YYY.children = new X3D.MFNode();

HAnimSite717ZZZ.children[0] = TouchSensor718;

let Shape719 = browser.currentScene.createNode("Shape");
Shape719.USE = "HAnimSiteShape";
HAnimSite717ZZZ.children[1] = Shape719;

let Billboard720 = browser.currentScene.createNode("Billboard");
let Shape721 = browser.currentScene.createNode("Shape");
let Text722 = browser.currentScene.createNode("Text");
Text722.string = new X3D.MFString([new X3D.SFString("12")]);
let FontStyle723 = browser.currentScene.createNode("FontStyle");
FontStyle723.size = 0.035;
fontStyle = FontStyle723;

geometry = Text722;

Billboard720YYY.children = new X3D.MFNode();

Billboard720ZZZ.children[0] = Shape721;

HAnimSite717ZZZ.children[2] = Billboard720;

HAnimSegment702ZZZ.children[3] = HAnimSite717;

let Shape724 = browser.currentScene.createNode("Shape");
let LineSet725 = browser.currentScene.createNode("LineSet");
LineSet725.vertexCount = new X3D.MFInt32([2]);
let Coordinate726 = browser.currentScene.createNode("Coordinate");
Coordinate726.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
coord = Coordinate726;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA727 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA727.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA727;

geometry = LineSet725;

HAnimSegment702ZZZ.children[4] = Shape724;

let Shape728 = browser.currentScene.createNode("Shape");
let LineSet729 = browser.currentScene.createNode("LineSet");
LineSet729.vertexCount = new X3D.MFInt32([2]);
let Coordinate730 = browser.currentScene.createNode("Coordinate");
Coordinate730.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
coord = Coordinate730;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA731 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA731;

geometry = LineSet729;

HAnimSegment702ZZZ.children[5] = Shape728;

HAnimJoint701YYY.children = new X3D.MFNode();

HAnimJoint701ZZZ.children[0] = HAnimSegment702;

let HAnimJoint732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint732.name = "vc7";
HAnimJoint732.DEF = "hanim_vc7";
HAnimJoint732.center = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
HAnimJoint732.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint732.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment733 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment733.name = "c7";
HAnimSegment733.DEF = "hanim_c7";
let Transform734 = browser.currentScene.createNode("Transform");
Transform734.translation = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let Transform735 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape736 = browser.currentScene.createNode("Shape");
Shape736.USE = "HAnimJointShape";
Transform735YYY.child = new X3D.undefined();

Transform735ZZZ.child[0] = Shape736;

Transform734YYY.children = new X3D.MFNode();

Transform734ZZZ.children[0] = Transform735;

HAnimSegment733YYY.children = new X3D.MFNode();

HAnimSegment733ZZZ.children[0] = Transform734;

let Shape737 = browser.currentScene.createNode("Shape");
let LineSet738 = browser.currentScene.createNode("LineSet");
LineSet738.vertexCount = new X3D.MFInt32([2]);
let Coordinate739 = browser.currentScene.createNode("Coordinate");
Coordinate739.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
coord = Coordinate739;

//from vc7 to vc6 vertices 2
let ColorRGBA740 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA740.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA740;

geometry = LineSet738;

HAnimSegment733ZZZ.children[1] = Shape737;

let HAnimSite741 = browser.currentScene.createNode("HAnimSite");
HAnimSite741.name = "l_neck_base";
HAnimSite741.DEF = "hanim_l_neck_base";
HAnimSite741.translation = new X3D.SFVec3f([0.0646,1.5141,-0.038]);
let TouchSensor742 = browser.currentScene.createNode("TouchSensor");
TouchSensor742.description = "HAnimSite 82 l_neck_base";
HAnimSite741YYY.children = new X3D.MFNode();

HAnimSite741ZZZ.children[0] = TouchSensor742;

let Shape743 = browser.currentScene.createNode("Shape");
Shape743.USE = "HAnimSiteShape";
HAnimSite741ZZZ.children[1] = Shape743;

let Billboard744 = browser.currentScene.createNode("Billboard");
let Shape745 = browser.currentScene.createNode("Shape");
let Text746 = browser.currentScene.createNode("Text");
Text746.string = new X3D.MFString([new X3D.SFString("82")]);
let FontStyle747 = browser.currentScene.createNode("FontStyle");
FontStyle747.size = 0.035;
fontStyle = FontStyle747;

geometry = Text746;

Billboard744YYY.children = new X3D.MFNode();

Billboard744ZZZ.children[0] = Shape745;

HAnimSite741ZZZ.children[2] = Billboard744;

HAnimSegment733ZZZ.children[2] = HAnimSite741;

let HAnimSite748 = browser.currentScene.createNode("HAnimSite");
HAnimSite748.name = "r_neck_base";
HAnimSite748.DEF = "hanim_r_neck_base";
HAnimSite748.translation = new X3D.SFVec3f([-0.0419,1.5149,-0.022]);
let TouchSensor749 = browser.currentScene.createNode("TouchSensor");
TouchSensor749.description = "HAnimSite 83 r_neck_base";
HAnimSite748YYY.children = new X3D.MFNode();

HAnimSite748ZZZ.children[0] = TouchSensor749;

let Shape750 = browser.currentScene.createNode("Shape");
Shape750.USE = "HAnimSiteShape";
HAnimSite748ZZZ.children[1] = Shape750;

let Billboard751 = browser.currentScene.createNode("Billboard");
let Shape752 = browser.currentScene.createNode("Shape");
let Text753 = browser.currentScene.createNode("Text");
Text753.string = new X3D.MFString([new X3D.SFString("83")]);
let FontStyle754 = browser.currentScene.createNode("FontStyle");
FontStyle754.size = 0.035;
fontStyle = FontStyle754;

geometry = Text753;

Billboard751YYY.children = new X3D.MFNode();

Billboard751ZZZ.children[0] = Shape752;

HAnimSite748ZZZ.children[2] = Billboard751;

HAnimSegment733ZZZ.children[3] = HAnimSite748;

HAnimJoint732YYY.children = new X3D.MFNode();

HAnimJoint732ZZZ.children[0] = HAnimSegment733;

let HAnimJoint755 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint755.name = "vc6";
HAnimJoint755.DEF = "hanim_vc6";
HAnimJoint755.center = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
HAnimJoint755.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint755.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment756 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment756.name = "c6";
HAnimSegment756.DEF = "hanim_c6";
let Transform757 = browser.currentScene.createNode("Transform");
Transform757.translation = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let Transform758 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape759 = browser.currentScene.createNode("Shape");
Shape759.USE = "HAnimJointShape";
Transform758YYY.child = new X3D.undefined();

Transform758ZZZ.child[0] = Shape759;

Transform757YYY.children = new X3D.MFNode();

Transform757ZZZ.children[0] = Transform758;

HAnimSegment756YYY.children = new X3D.MFNode();

HAnimSegment756ZZZ.children[0] = Transform757;

let Shape760 = browser.currentScene.createNode("Shape");
let LineSet761 = browser.currentScene.createNode("LineSet");
LineSet761.vertexCount = new X3D.MFInt32([2]);
let Coordinate762 = browser.currentScene.createNode("Coordinate");
Coordinate762.point = new X3D.MFVec3f([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
coord = Coordinate762;

//from vc6 to vc5 vertices 2
let ColorRGBA763 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA763.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA763;

geometry = LineSet761;

HAnimSegment756ZZZ.children[1] = Shape760;

HAnimJoint755YYY.children = new X3D.MFNode();

HAnimJoint755ZZZ.children[0] = HAnimSegment756;

let HAnimJoint764 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint764.name = "vc5";
HAnimJoint764.DEF = "hanim_vc5";
HAnimJoint764.center = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
HAnimJoint764.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint764.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment765.name = "c5";
HAnimSegment765.DEF = "hanim_c5";
let Transform766 = browser.currentScene.createNode("Transform");
Transform766.translation = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let Transform767 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape768 = browser.currentScene.createNode("Shape");
Shape768.USE = "HAnimJointShape";
Transform767YYY.child = new X3D.undefined();

Transform767ZZZ.child[0] = Shape768;

Transform766YYY.children = new X3D.MFNode();

Transform766ZZZ.children[0] = Transform767;

HAnimSegment765YYY.children = new X3D.MFNode();

HAnimSegment765ZZZ.children[0] = Transform766;

let Shape769 = browser.currentScene.createNode("Shape");
let LineSet770 = browser.currentScene.createNode("LineSet");
LineSet770.vertexCount = new X3D.MFInt32([2]);
let Coordinate771 = browser.currentScene.createNode("Coordinate");
Coordinate771.point = new X3D.MFVec3f([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
coord = Coordinate771;

//from vc5 to vc4 vertices 2
let ColorRGBA772 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA772.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA772;

geometry = LineSet770;

HAnimSegment765ZZZ.children[1] = Shape769;

HAnimJoint764YYY.children = new X3D.MFNode();

HAnimJoint764ZZZ.children[0] = HAnimSegment765;

let HAnimJoint773 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint773.name = "vc4";
HAnimJoint773.DEF = "hanim_vc4";
HAnimJoint773.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
HAnimJoint773.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint773.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment774.name = "c4";
HAnimSegment774.DEF = "hanim_c4";
let Transform775 = browser.currentScene.createNode("Transform");
Transform775.translation = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let Transform776 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape777 = browser.currentScene.createNode("Shape");
Shape777.USE = "HAnimJointShape";
Transform776YYY.child = new X3D.undefined();

Transform776ZZZ.child[0] = Shape777;

Transform775YYY.children = new X3D.MFNode();

Transform775ZZZ.children[0] = Transform776;

HAnimSegment774YYY.children = new X3D.MFNode();

HAnimSegment774ZZZ.children[0] = Transform775;

let Shape778 = browser.currentScene.createNode("Shape");
let LineSet779 = browser.currentScene.createNode("LineSet");
LineSet779.vertexCount = new X3D.MFInt32([2]);
let Coordinate780 = browser.currentScene.createNode("Coordinate");
Coordinate780.point = new X3D.MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
coord = Coordinate780;

//from vc4 to vc3 vertices 2
let ColorRGBA781 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA781.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA781;

geometry = LineSet779;

HAnimSegment774ZZZ.children[1] = Shape778;

HAnimJoint773YYY.children = new X3D.MFNode();

HAnimJoint773ZZZ.children[0] = HAnimSegment774;

let HAnimJoint782 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint782.name = "vc3";
HAnimJoint782.DEF = "hanim_vc3";
HAnimJoint782.center = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
HAnimJoint782.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint782.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment783.name = "c3";
HAnimSegment783.DEF = "hanim_c3";
let Transform784 = browser.currentScene.createNode("Transform");
Transform784.translation = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let Transform785 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape786 = browser.currentScene.createNode("Shape");
Shape786.USE = "HAnimJointShape";
Transform785YYY.child = new X3D.undefined();

Transform785ZZZ.child[0] = Shape786;

Transform784YYY.children = new X3D.MFNode();

Transform784ZZZ.children[0] = Transform785;

HAnimSegment783YYY.children = new X3D.MFNode();

HAnimSegment783ZZZ.children[0] = Transform784;

let Shape787 = browser.currentScene.createNode("Shape");
let LineSet788 = browser.currentScene.createNode("LineSet");
LineSet788.vertexCount = new X3D.MFInt32([2]);
let Coordinate789 = browser.currentScene.createNode("Coordinate");
Coordinate789.point = new X3D.MFVec3f([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
coord = Coordinate789;

//from vc3 to vc2 vertices 2
let ColorRGBA790 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA790.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA790;

geometry = LineSet788;

HAnimSegment783ZZZ.children[1] = Shape787;

HAnimJoint782YYY.children = new X3D.MFNode();

HAnimJoint782ZZZ.children[0] = HAnimSegment783;

let HAnimJoint791 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint791.name = "vc2";
HAnimJoint791.DEF = "hanim_vc2";
HAnimJoint791.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
HAnimJoint791.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint791.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment792.name = "c2";
HAnimSegment792.DEF = "hanim_c2";
let Transform793 = browser.currentScene.createNode("Transform");
Transform793.translation = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let Transform794 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape795 = browser.currentScene.createNode("Shape");
Shape795.USE = "HAnimJointShape";
Transform794YYY.child = new X3D.undefined();

Transform794ZZZ.child[0] = Shape795;

Transform793YYY.children = new X3D.MFNode();

Transform793ZZZ.children[0] = Transform794;

HAnimSegment792YYY.children = new X3D.MFNode();

HAnimSegment792ZZZ.children[0] = Transform793;

let Shape796 = browser.currentScene.createNode("Shape");
let LineSet797 = browser.currentScene.createNode("LineSet");
LineSet797.vertexCount = new X3D.MFInt32([2]);
let Coordinate798 = browser.currentScene.createNode("Coordinate");
Coordinate798.point = new X3D.MFVec3f([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
coord = Coordinate798;

//from vc2 to vc1 vertices 2
let ColorRGBA799 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA799.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA799;

geometry = LineSet797;

HAnimSegment792ZZZ.children[1] = Shape796;

let HAnimSite800 = browser.currentScene.createNode("HAnimSite");
HAnimSite800.name = "adams_apple";
HAnimSite800.DEF = "hanim_adams_apple";
let TouchSensor801 = browser.currentScene.createNode("TouchSensor");
TouchSensor801.description = "HAnimSite 11 adams_apple";
HAnimSite800YYY.children = new X3D.MFNode();

HAnimSite800ZZZ.children[0] = TouchSensor801;

let Shape802 = browser.currentScene.createNode("Shape");
Shape802.USE = "HAnimSiteShape";
HAnimSite800ZZZ.children[1] = Shape802;

let Billboard803 = browser.currentScene.createNode("Billboard");
let Shape804 = browser.currentScene.createNode("Shape");
let Text805 = browser.currentScene.createNode("Text");
Text805.string = new X3D.MFString([new X3D.SFString("11")]);
let FontStyle806 = browser.currentScene.createNode("FontStyle");
FontStyle806.size = 0.035;
fontStyle = FontStyle806;

geometry = Text805;

Billboard803YYY.children = new X3D.MFNode();

Billboard803ZZZ.children[0] = Shape804;

HAnimSite800ZZZ.children[2] = Billboard803;

HAnimSegment792ZZZ.children[2] = HAnimSite800;

HAnimJoint791YYY.children = new X3D.MFNode();

HAnimJoint791ZZZ.children[0] = HAnimSegment792;

let HAnimJoint807 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint807.name = "vc1";
HAnimJoint807.DEF = "hanim_vc1";
HAnimJoint807.center = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
HAnimJoint807.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint807.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment808.name = "c1";
HAnimSegment808.DEF = "hanim_c1";
let Transform809 = browser.currentScene.createNode("Transform");
Transform809.translation = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let Transform810 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape811 = browser.currentScene.createNode("Shape");
Shape811.USE = "HAnimJointShape";
Transform810YYY.child = new X3D.undefined();

Transform810ZZZ.child[0] = Shape811;

Transform809YYY.children = new X3D.MFNode();

Transform809ZZZ.children[0] = Transform810;

HAnimSegment808YYY.children = new X3D.MFNode();

HAnimSegment808ZZZ.children[0] = Transform809;

let Shape812 = browser.currentScene.createNode("Shape");
let LineSet813 = browser.currentScene.createNode("LineSet");
LineSet813.vertexCount = new X3D.MFInt32([2]);
let Coordinate814 = browser.currentScene.createNode("Coordinate");
Coordinate814.point = new X3D.MFVec3f([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
coord = Coordinate814;

//from vc1 to skullbase vertices 2
let ColorRGBA815 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA815.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA815;

geometry = LineSet813;

HAnimSegment808ZZZ.children[1] = Shape812;

HAnimJoint807YYY.children = new X3D.MFNode();

HAnimJoint807ZZZ.children[0] = HAnimSegment808;

let HAnimJoint816 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint816.name = "skullbase";
HAnimJoint816.DEF = "hanim_skullbase";
HAnimJoint816.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
HAnimJoint816.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint816.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment817.name = "skull";
HAnimSegment817.DEF = "hanim_skull";
let Transform818 = browser.currentScene.createNode("Transform");
Transform818.translation = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let Transform819 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape820 = browser.currentScene.createNode("Shape");
Shape820.USE = "HAnimJointShape";
Transform819YYY.child = new X3D.undefined();

Transform819ZZZ.child[0] = Shape820;

Transform818YYY.children = new X3D.MFNode();

Transform818ZZZ.children[0] = Transform819;

HAnimSegment817YYY.children = new X3D.MFNode();

HAnimSegment817ZZZ.children[0] = Transform818;

let Shape821 = browser.currentScene.createNode("Shape");
let LineSet822 = browser.currentScene.createNode("LineSet");
LineSet822.vertexCount = new X3D.MFInt32([2]);
let Coordinate823 = browser.currentScene.createNode("Coordinate");
Coordinate823.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
coord = Coordinate823;

//from skullbase to l_eyelid_joint vertices 2
let ColorRGBA824 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA824.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA824;

geometry = LineSet822;

HAnimSegment817ZZZ.children[1] = Shape821;

let HAnimSite825 = browser.currentScene.createNode("HAnimSite");
HAnimSite825.name = "glabella";
HAnimSite825.DEF = "hanim_glabella";
let TouchSensor826 = browser.currentScene.createNode("TouchSensor");
TouchSensor826.description = "HAnimSite 1 glabella";
HAnimSite825YYY.children = new X3D.MFNode();

HAnimSite825ZZZ.children[0] = TouchSensor826;

let Shape827 = browser.currentScene.createNode("Shape");
Shape827.USE = "HAnimSiteShape";
HAnimSite825ZZZ.children[1] = Shape827;

let Billboard828 = browser.currentScene.createNode("Billboard");
let Shape829 = browser.currentScene.createNode("Shape");
let Text830 = browser.currentScene.createNode("Text");
Text830.string = new X3D.MFString([new X3D.SFString("1")]);
let FontStyle831 = browser.currentScene.createNode("FontStyle");
FontStyle831.size = 0.035;
fontStyle = FontStyle831;

geometry = Text830;

Billboard828YYY.children = new X3D.MFNode();

Billboard828ZZZ.children[0] = Shape829;

HAnimSite825ZZZ.children[2] = Billboard828;

HAnimSegment817ZZZ.children[2] = HAnimSite825;

let HAnimSite832 = browser.currentScene.createNode("HAnimSite");
HAnimSite832.name = "l_ectocanthus";
HAnimSite832.DEF = "hanim_l_ectocanthus";
let TouchSensor833 = browser.currentScene.createNode("TouchSensor");
TouchSensor833.description = "HAnimSite 85 l_ectocanthus";
HAnimSite832YYY.children = new X3D.MFNode();

HAnimSite832ZZZ.children[0] = TouchSensor833;

let Shape834 = browser.currentScene.createNode("Shape");
Shape834.USE = "HAnimSiteShape";
HAnimSite832ZZZ.children[1] = Shape834;

let Billboard835 = browser.currentScene.createNode("Billboard");
let Shape836 = browser.currentScene.createNode("Shape");
let Text837 = browser.currentScene.createNode("Text");
Text837.string = new X3D.MFString([new X3D.SFString("85")]);
let FontStyle838 = browser.currentScene.createNode("FontStyle");
FontStyle838.size = 0.035;
fontStyle = FontStyle838;

geometry = Text837;

Billboard835YYY.children = new X3D.MFNode();

Billboard835ZZZ.children[0] = Shape836;

HAnimSite832ZZZ.children[2] = Billboard835;

HAnimSegment817ZZZ.children[3] = HAnimSite832;

let HAnimSite839 = browser.currentScene.createNode("HAnimSite");
HAnimSite839.name = "l_infraorbitale";
HAnimSite839.DEF = "hanim_l_infraorbitale";
HAnimSite839.translation = new X3D.SFVec3f([0.0341,1.6171,0.0752]);
let TouchSensor840 = browser.currentScene.createNode("TouchSensor");
TouchSensor840.description = "HAnimSite 3 l_infraorbitale";
HAnimSite839YYY.children = new X3D.MFNode();

HAnimSite839ZZZ.children[0] = TouchSensor840;

let Shape841 = browser.currentScene.createNode("Shape");
Shape841.USE = "HAnimSiteShape";
HAnimSite839ZZZ.children[1] = Shape841;

let Billboard842 = browser.currentScene.createNode("Billboard");
let Shape843 = browser.currentScene.createNode("Shape");
let Text844 = browser.currentScene.createNode("Text");
Text844.string = new X3D.MFString([new X3D.SFString("3")]);
let FontStyle845 = browser.currentScene.createNode("FontStyle");
FontStyle845.size = 0.035;
fontStyle = FontStyle845;

geometry = Text844;

Billboard842YYY.children = new X3D.MFNode();

Billboard842ZZZ.children[0] = Shape843;

HAnimSite839ZZZ.children[2] = Billboard842;

HAnimSegment817ZZZ.children[4] = HAnimSite839;

let HAnimSite846 = browser.currentScene.createNode("HAnimSite");
HAnimSite846.name = "l_tragion";
HAnimSite846.DEF = "hanim_l_tragion";
HAnimSite846.translation = new X3D.SFVec3f([0.0739,1.6348,0.0282]);
let TouchSensor847 = browser.currentScene.createNode("TouchSensor");
TouchSensor847.description = "HAnimSite 4 l_tragion";
HAnimSite846YYY.children = new X3D.MFNode();

HAnimSite846ZZZ.children[0] = TouchSensor847;

let Shape848 = browser.currentScene.createNode("Shape");
Shape848.USE = "HAnimSiteShape";
HAnimSite846ZZZ.children[1] = Shape848;

let Billboard849 = browser.currentScene.createNode("Billboard");
let Shape850 = browser.currentScene.createNode("Shape");
let Text851 = browser.currentScene.createNode("Text");
Text851.string = new X3D.MFString([new X3D.SFString("4")]);
let FontStyle852 = browser.currentScene.createNode("FontStyle");
FontStyle852.size = 0.035;
fontStyle = FontStyle852;

geometry = Text851;

Billboard849YYY.children = new X3D.MFNode();

Billboard849ZZZ.children[0] = Shape850;

HAnimSite846ZZZ.children[2] = Billboard849;

HAnimSegment817ZZZ.children[5] = HAnimSite846;

let HAnimSite853 = browser.currentScene.createNode("HAnimSite");
HAnimSite853.name = "nuchale";
HAnimSite853.DEF = "hanim_nuchale";
HAnimSite853.translation = new X3D.SFVec3f([0.0039,1.5972,-0.0796]);
let TouchSensor854 = browser.currentScene.createNode("TouchSensor");
TouchSensor854.description = "HAnimSite 81 nuchale";
HAnimSite853YYY.children = new X3D.MFNode();

HAnimSite853ZZZ.children[0] = TouchSensor854;

let Shape855 = browser.currentScene.createNode("Shape");
Shape855.USE = "HAnimSiteShape";
HAnimSite853ZZZ.children[1] = Shape855;

let Billboard856 = browser.currentScene.createNode("Billboard");
let Shape857 = browser.currentScene.createNode("Shape");
let Text858 = browser.currentScene.createNode("Text");
Text858.string = new X3D.MFString([new X3D.SFString("81")]);
let FontStyle859 = browser.currentScene.createNode("FontStyle");
FontStyle859.size = 0.035;
fontStyle = FontStyle859;

geometry = Text858;

Billboard856YYY.children = new X3D.MFNode();

Billboard856ZZZ.children[0] = Shape857;

HAnimSite853ZZZ.children[2] = Billboard856;

HAnimSegment817ZZZ.children[6] = HAnimSite853;

let HAnimSite860 = browser.currentScene.createNode("HAnimSite");
HAnimSite860.name = "opisthocranion";
HAnimSite860.DEF = "hanim_opisthocranion";
let TouchSensor861 = browser.currentScene.createNode("TouchSensor");
TouchSensor861.description = "HAnimSite 89 opisthocranion";
HAnimSite860YYY.children = new X3D.MFNode();

HAnimSite860ZZZ.children[0] = TouchSensor861;

let Shape862 = browser.currentScene.createNode("Shape");
Shape862.USE = "HAnimSiteShape";
HAnimSite860ZZZ.children[1] = Shape862;

let Billboard863 = browser.currentScene.createNode("Billboard");
let Shape864 = browser.currentScene.createNode("Shape");
let Text865 = browser.currentScene.createNode("Text");
Text865.string = new X3D.MFString([new X3D.SFString("89")]);
let FontStyle866 = browser.currentScene.createNode("FontStyle");
FontStyle866.size = 0.035;
fontStyle = FontStyle866;

geometry = Text865;

Billboard863YYY.children = new X3D.MFNode();

Billboard863ZZZ.children[0] = Shape864;

HAnimSite860ZZZ.children[2] = Billboard863;

HAnimSegment817ZZZ.children[7] = HAnimSite860;

let HAnimSite867 = browser.currentScene.createNode("HAnimSite");
HAnimSite867.name = "r_ectocanthus";
HAnimSite867.DEF = "hanim_r_ectocanthus";
let TouchSensor868 = browser.currentScene.createNode("TouchSensor");
TouchSensor868.description = "HAnimSite 86 r_ectocanthus";
HAnimSite867YYY.children = new X3D.MFNode();

HAnimSite867ZZZ.children[0] = TouchSensor868;

let Shape869 = browser.currentScene.createNode("Shape");
Shape869.USE = "HAnimSiteShape";
HAnimSite867ZZZ.children[1] = Shape869;

let Billboard870 = browser.currentScene.createNode("Billboard");
let Shape871 = browser.currentScene.createNode("Shape");
let Text872 = browser.currentScene.createNode("Text");
Text872.string = new X3D.MFString([new X3D.SFString("86")]);
let FontStyle873 = browser.currentScene.createNode("FontStyle");
FontStyle873.size = 0.035;
fontStyle = FontStyle873;

geometry = Text872;

Billboard870YYY.children = new X3D.MFNode();

Billboard870ZZZ.children[0] = Shape871;

HAnimSite867ZZZ.children[2] = Billboard870;

HAnimSegment817ZZZ.children[8] = HAnimSite867;

let HAnimSite874 = browser.currentScene.createNode("HAnimSite");
HAnimSite874.name = "r_infraorbitale";
HAnimSite874.DEF = "hanim_r_infraorbitale";
HAnimSite874.translation = new X3D.SFVec3f([-0.0237,1.6171,0.0752]);
let TouchSensor875 = browser.currentScene.createNode("TouchSensor");
TouchSensor875.description = "HAnimSite 6 r_infraorbitale";
HAnimSite874YYY.children = new X3D.MFNode();

HAnimSite874ZZZ.children[0] = TouchSensor875;

let Shape876 = browser.currentScene.createNode("Shape");
Shape876.USE = "HAnimSiteShape";
HAnimSite874ZZZ.children[1] = Shape876;

let Billboard877 = browser.currentScene.createNode("Billboard");
let Shape878 = browser.currentScene.createNode("Shape");
let Text879 = browser.currentScene.createNode("Text");
Text879.string = new X3D.MFString([new X3D.SFString("6")]);
let FontStyle880 = browser.currentScene.createNode("FontStyle");
FontStyle880.size = 0.035;
fontStyle = FontStyle880;

geometry = Text879;

Billboard877YYY.children = new X3D.MFNode();

Billboard877ZZZ.children[0] = Shape878;

HAnimSite874ZZZ.children[2] = Billboard877;

HAnimSegment817ZZZ.children[9] = HAnimSite874;

let HAnimSite881 = browser.currentScene.createNode("HAnimSite");
HAnimSite881.name = "r_tragion";
HAnimSite881.DEF = "hanim_r_tragion";
HAnimSite881.translation = new X3D.SFVec3f([-0.0646,1.6347,0.0302]);
let TouchSensor882 = browser.currentScene.createNode("TouchSensor");
TouchSensor882.description = "HAnimSite 7 r_tragion";
HAnimSite881YYY.children = new X3D.MFNode();

HAnimSite881ZZZ.children[0] = TouchSensor882;

let Shape883 = browser.currentScene.createNode("Shape");
Shape883.USE = "HAnimSiteShape";
HAnimSite881ZZZ.children[1] = Shape883;

let Billboard884 = browser.currentScene.createNode("Billboard");
let Shape885 = browser.currentScene.createNode("Shape");
let Text886 = browser.currentScene.createNode("Text");
Text886.string = new X3D.MFString([new X3D.SFString("7")]);
let FontStyle887 = browser.currentScene.createNode("FontStyle");
FontStyle887.size = 0.035;
fontStyle = FontStyle887;

geometry = Text886;

Billboard884YYY.children = new X3D.MFNode();

Billboard884ZZZ.children[0] = Shape885;

HAnimSite881ZZZ.children[2] = Billboard884;

HAnimSegment817ZZZ.children[10] = HAnimSite881;

let HAnimSite888 = browser.currentScene.createNode("HAnimSite");
HAnimSite888.name = "sellion";
HAnimSite888.DEF = "hanim_sellion";
HAnimSite888.translation = new X3D.SFVec3f([0.0058,1.6316,0.0852]);
let TouchSensor889 = browser.currentScene.createNode("TouchSensor");
TouchSensor889.description = "HAnimSite 2 sellion";
HAnimSite888YYY.children = new X3D.MFNode();

HAnimSite888ZZZ.children[0] = TouchSensor889;

let Shape890 = browser.currentScene.createNode("Shape");
Shape890.USE = "HAnimSiteShape";
HAnimSite888ZZZ.children[1] = Shape890;

let Billboard891 = browser.currentScene.createNode("Billboard");
let Shape892 = browser.currentScene.createNode("Shape");
let Text893 = browser.currentScene.createNode("Text");
Text893.string = new X3D.MFString([new X3D.SFString("2")]);
let FontStyle894 = browser.currentScene.createNode("FontStyle");
FontStyle894.size = 0.035;
fontStyle = FontStyle894;

geometry = Text893;

Billboard891YYY.children = new X3D.MFNode();

Billboard891ZZZ.children[0] = Shape892;

HAnimSite888ZZZ.children[2] = Billboard891;

HAnimSegment817ZZZ.children[11] = HAnimSite888;

let HAnimSite895 = browser.currentScene.createNode("HAnimSite");
HAnimSite895.name = "skull_vertex";
HAnimSite895.DEF = "hanim_skull_vertex";
HAnimSite895.translation = new X3D.SFVec3f([0.005,1.7504,0.0055]);
let TouchSensor896 = browser.currentScene.createNode("TouchSensor");
TouchSensor896.description = "HAnimSite 0 skull_vertex";
HAnimSite895YYY.children = new X3D.MFNode();

HAnimSite895ZZZ.children[0] = TouchSensor896;

let Shape897 = browser.currentScene.createNode("Shape");
Shape897.USE = "HAnimSiteShape";
HAnimSite895ZZZ.children[1] = Shape897;

let Billboard898 = browser.currentScene.createNode("Billboard");
let Shape899 = browser.currentScene.createNode("Shape");
let Text900 = browser.currentScene.createNode("Text");
Text900.string = new X3D.MFString([new X3D.SFString("0")]);
let FontStyle901 = browser.currentScene.createNode("FontStyle");
FontStyle901.size = 0.035;
fontStyle = FontStyle901;

geometry = Text900;

Billboard898YYY.children = new X3D.MFNode();

Billboard898ZZZ.children[0] = Shape899;

HAnimSite895ZZZ.children[2] = Billboard898;

HAnimSegment817ZZZ.children[12] = HAnimSite895;

let Shape902 = browser.currentScene.createNode("Shape");
let LineSet903 = browser.currentScene.createNode("LineSet");
LineSet903.vertexCount = new X3D.MFInt32([2]);
let Coordinate904 = browser.currentScene.createNode("Coordinate");
Coordinate904.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
coord = Coordinate904;

//from skullbase to r_eyelid_joint vertices 2
let ColorRGBA905 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA905;

geometry = LineSet903;

HAnimSegment817ZZZ.children[13] = Shape902;

let Shape906 = browser.currentScene.createNode("Shape");
let LineSet907 = browser.currentScene.createNode("LineSet");
LineSet907.vertexCount = new X3D.MFInt32([2]);
let Coordinate908 = browser.currentScene.createNode("Coordinate");
Coordinate908.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
coord = Coordinate908;

//from skullbase to l_eyeball_joint vertices 2
let ColorRGBA909 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA909.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA909;

geometry = LineSet907;

HAnimSegment817ZZZ.children[14] = Shape906;

let Shape910 = browser.currentScene.createNode("Shape");
let LineSet911 = browser.currentScene.createNode("LineSet");
LineSet911.vertexCount = new X3D.MFInt32([2]);
let Coordinate912 = browser.currentScene.createNode("Coordinate");
Coordinate912.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
coord = Coordinate912;

//from skullbase to r_eyeball_joint vertices 2
let ColorRGBA913 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA913.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA913;

geometry = LineSet911;

HAnimSegment817ZZZ.children[15] = Shape910;

let Shape914 = browser.currentScene.createNode("Shape");
let LineSet915 = browser.currentScene.createNode("LineSet");
LineSet915.vertexCount = new X3D.MFInt32([2]);
let Coordinate916 = browser.currentScene.createNode("Coordinate");
Coordinate916.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
coord = Coordinate916;

//from skullbase to l_eyebrow_joint vertices 2
let ColorRGBA917 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA917.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA917;

geometry = LineSet915;

HAnimSegment817ZZZ.children[16] = Shape914;

let Shape918 = browser.currentScene.createNode("Shape");
let LineSet919 = browser.currentScene.createNode("LineSet");
LineSet919.vertexCount = new X3D.MFInt32([2]);
let Coordinate920 = browser.currentScene.createNode("Coordinate");
Coordinate920.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
coord = Coordinate920;

//from skullbase to r_eyebrow_joint vertices 2
let ColorRGBA921 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA921.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA921;

geometry = LineSet919;

HAnimSegment817ZZZ.children[17] = Shape918;

let Shape922 = browser.currentScene.createNode("Shape");
let LineSet923 = browser.currentScene.createNode("LineSet");
LineSet923.vertexCount = new X3D.MFInt32([2]);
let Coordinate924 = browser.currentScene.createNode("Coordinate");
Coordinate924.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
coord = Coordinate924;

//from skullbase to temporomandibular vertices 2
let ColorRGBA925 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA925.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA925;

geometry = LineSet923;

HAnimSegment817ZZZ.children[18] = Shape922;

HAnimJoint816YYY.children = new X3D.MFNode();

HAnimJoint816ZZZ.children[0] = HAnimSegment817;

let HAnimJoint926 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint926.name = "l_eyelid_joint";
HAnimJoint926.DEF = "hanim_l_eyelid_joint";
HAnimJoint926.center = new X3D.SFVec3f([0.0503,1.4157,-0.0689]);
HAnimJoint926.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint926.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint816ZZZ.children[1] = HAnimJoint926;

let HAnimJoint927 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint927.name = "r_eyelid_joint";
HAnimJoint927.DEF = "hanim_r_eyelid_joint";
HAnimJoint927.center = new X3D.SFVec3f([-0.0507,1.4157,-0.0689]);
HAnimJoint927.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint927.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint816ZZZ.children[2] = HAnimJoint927;

let HAnimJoint928 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint928.name = "l_eyeball_joint";
HAnimJoint928.DEF = "hanim_l_eyeball_joint";
HAnimJoint928.center = new X3D.SFVec3f([0.0479,1.3963,-0.0188]);
HAnimJoint928.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint928.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint816ZZZ.children[3] = HAnimJoint928;

let HAnimJoint929 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint929.name = "r_eyeball_joint";
HAnimJoint929.DEF = "hanim_r_eyeball_joint";
HAnimJoint929.center = new X3D.SFVec3f([-0.0483,1.3963,-0.0188]);
HAnimJoint929.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint929.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint816ZZZ.children[4] = HAnimJoint929;

let HAnimJoint930 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint930.name = "l_eyebrow_joint";
HAnimJoint930.DEF = "hanim_l_eyebrow_joint";
HAnimJoint930.center = new X3D.SFVec3f([0.0216,1.4053,0.0051]);
HAnimJoint930.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint930.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint816ZZZ.children[5] = HAnimJoint930;

let HAnimJoint931 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint931.name = "r_eyebrow_joint";
HAnimJoint931.DEF = "hanim_r_eyebrow_joint";
HAnimJoint931.center = new X3D.SFVec3f([-0.0219,1.4053,0.0051]);
HAnimJoint931.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint931.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint816ZZZ.children[6] = HAnimJoint931;

let HAnimJoint932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint932.name = "temporomandibular";
HAnimJoint932.DEF = "hanim_temporomandibular";
HAnimJoint932.center = new X3D.SFVec3f([-0.0002,1.3043,-0.0865]);
HAnimJoint932.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint932.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint816ZZZ.children[7] = HAnimJoint932;

HAnimJoint807ZZZ.children[1] = HAnimJoint816;

HAnimJoint791ZZZ.children[1] = HAnimJoint807;

HAnimJoint782ZZZ.children[1] = HAnimJoint791;

HAnimJoint773ZZZ.children[1] = HAnimJoint782;

HAnimJoint764ZZZ.children[1] = HAnimJoint773;

HAnimJoint755ZZZ.children[1] = HAnimJoint764;

HAnimJoint732ZZZ.children[1] = HAnimJoint755;

HAnimJoint701ZZZ.children[1] = HAnimJoint732;

let HAnimJoint933 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint933.name = "l_sternoclavicular";
HAnimJoint933.DEF = "hanim_l_sternoclavicular";
HAnimJoint933.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint933.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint933.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment934 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment934.name = "l_clavicle";
HAnimSegment934.DEF = "hanim_l_clavicle";
let Transform935 = browser.currentScene.createNode("Transform");
Transform935.translation = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let Transform936 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape937 = browser.currentScene.createNode("Shape");
Shape937.USE = "HAnimJointShape";
Transform936YYY.child = new X3D.undefined();

Transform936ZZZ.child[0] = Shape937;

Transform935YYY.children = new X3D.MFNode();

Transform935ZZZ.children[0] = Transform936;

HAnimSegment934YYY.children = new X3D.MFNode();

HAnimSegment934ZZZ.children[0] = Transform935;

let Shape938 = browser.currentScene.createNode("Shape");
let LineSet939 = browser.currentScene.createNode("LineSet");
LineSet939.vertexCount = new X3D.MFInt32([2]);
let Coordinate940 = browser.currentScene.createNode("Coordinate");
Coordinate940.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
coord = Coordinate940;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA941 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA941.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA941;

geometry = LineSet939;

HAnimSegment934ZZZ.children[1] = Shape938;

let HAnimSite942 = browser.currentScene.createNode("HAnimSite");
HAnimSite942.name = "l_acromion";
HAnimSite942.DEF = "hanim_l_acromion";
HAnimSite942.translation = new X3D.SFVec3f([0.2032,1.476,-0.049]);
let TouchSensor943 = browser.currentScene.createNode("TouchSensor");
TouchSensor943.description = "HAnimSite 15 l_acromion";
HAnimSite942YYY.children = new X3D.MFNode();

HAnimSite942ZZZ.children[0] = TouchSensor943;

let Shape944 = browser.currentScene.createNode("Shape");
Shape944.USE = "HAnimSiteShape";
HAnimSite942ZZZ.children[1] = Shape944;

let Billboard945 = browser.currentScene.createNode("Billboard");
let Shape946 = browser.currentScene.createNode("Shape");
let Text947 = browser.currentScene.createNode("Text");
Text947.string = new X3D.MFString([new X3D.SFString("15")]);
let FontStyle948 = browser.currentScene.createNode("FontStyle");
FontStyle948.size = 0.035;
fontStyle = FontStyle948;

geometry = Text947;

Billboard945YYY.children = new X3D.MFNode();

Billboard945ZZZ.children[0] = Shape946;

HAnimSite942ZZZ.children[2] = Billboard945;

HAnimSegment934ZZZ.children[2] = HAnimSite942;

let HAnimSite949 = browser.currentScene.createNode("HAnimSite");
HAnimSite949.name = "l_axilla_distal";
HAnimSite949.DEF = "hanim_l_axilla_distal";
HAnimSite949.translation = new X3D.SFVec3f([0.1706,1.4072,-0.0875]);
let TouchSensor950 = browser.currentScene.createNode("TouchSensor");
TouchSensor950.description = "HAnimSite 17 l_axilla_distal";
HAnimSite949YYY.children = new X3D.MFNode();

HAnimSite949ZZZ.children[0] = TouchSensor950;

let Shape951 = browser.currentScene.createNode("Shape");
Shape951.USE = "HAnimSiteShape";
HAnimSite949ZZZ.children[1] = Shape951;

let Billboard952 = browser.currentScene.createNode("Billboard");
let Shape953 = browser.currentScene.createNode("Shape");
let Text954 = browser.currentScene.createNode("Text");
Text954.string = new X3D.MFString([new X3D.SFString("17")]);
let FontStyle955 = browser.currentScene.createNode("FontStyle");
FontStyle955.size = 0.035;
fontStyle = FontStyle955;

geometry = Text954;

Billboard952YYY.children = new X3D.MFNode();

Billboard952ZZZ.children[0] = Shape953;

HAnimSite949ZZZ.children[2] = Billboard952;

HAnimSegment934ZZZ.children[3] = HAnimSite949;

let HAnimSite956 = browser.currentScene.createNode("HAnimSite");
HAnimSite956.name = "l_axilla_posterior_folds";
HAnimSite956.DEF = "hanim_l_axilla_posterior_folds";
let TouchSensor957 = browser.currentScene.createNode("TouchSensor");
TouchSensor957.description = "HAnimSite 18 l_axilla_posterior_folds";
HAnimSite956YYY.children = new X3D.MFNode();

HAnimSite956ZZZ.children[0] = TouchSensor957;

let Shape958 = browser.currentScene.createNode("Shape");
Shape958.USE = "HAnimSiteShape";
HAnimSite956ZZZ.children[1] = Shape958;

let Billboard959 = browser.currentScene.createNode("Billboard");
let Shape960 = browser.currentScene.createNode("Shape");
let Text961 = browser.currentScene.createNode("Text");
Text961.string = new X3D.MFString([new X3D.SFString("18")]);
let FontStyle962 = browser.currentScene.createNode("FontStyle");
FontStyle962.size = 0.035;
fontStyle = FontStyle962;

geometry = Text961;

Billboard959YYY.children = new X3D.MFNode();

Billboard959ZZZ.children[0] = Shape960;

HAnimSite956ZZZ.children[2] = Billboard959;

HAnimSegment934ZZZ.children[4] = HAnimSite956;

let HAnimSite963 = browser.currentScene.createNode("HAnimSite");
HAnimSite963.name = "l_axilla_proximal";
HAnimSite963.DEF = "hanim_l_axilla_proximal";
HAnimSite963.translation = new X3D.SFVec3f([0.1777,1.4065,-0.0075]);
let TouchSensor964 = browser.currentScene.createNode("TouchSensor");
TouchSensor964.description = "HAnimSite 16 l_axilla_proximal";
HAnimSite963YYY.children = new X3D.MFNode();

HAnimSite963ZZZ.children[0] = TouchSensor964;

let Shape965 = browser.currentScene.createNode("Shape");
Shape965.USE = "HAnimSiteShape";
HAnimSite963ZZZ.children[1] = Shape965;

let Billboard966 = browser.currentScene.createNode("Billboard");
let Shape967 = browser.currentScene.createNode("Shape");
let Text968 = browser.currentScene.createNode("Text");
Text968.string = new X3D.MFString([new X3D.SFString("16")]);
let FontStyle969 = browser.currentScene.createNode("FontStyle");
FontStyle969.size = 0.035;
fontStyle = FontStyle969;

geometry = Text968;

Billboard966YYY.children = new X3D.MFNode();

Billboard966ZZZ.children[0] = Shape967;

HAnimSite963ZZZ.children[2] = Billboard966;

HAnimSegment934ZZZ.children[5] = HAnimSite963;

let HAnimSite970 = browser.currentScene.createNode("HAnimSite");
HAnimSite970.name = "l_clavicale";
HAnimSite970.DEF = "hanim_l_clavicale";
HAnimSite970.translation = new X3D.SFVec3f([0.0271,1.4943,0.0394]);
let TouchSensor971 = browser.currentScene.createNode("TouchSensor");
TouchSensor971.description = "HAnimSite 14 l_clavicale";
HAnimSite970YYY.children = new X3D.MFNode();

HAnimSite970ZZZ.children[0] = TouchSensor971;

let Shape972 = browser.currentScene.createNode("Shape");
Shape972.USE = "HAnimSiteShape";
HAnimSite970ZZZ.children[1] = Shape972;

let Billboard973 = browser.currentScene.createNode("Billboard");
let Shape974 = browser.currentScene.createNode("Shape");
let Text975 = browser.currentScene.createNode("Text");
Text975.string = new X3D.MFString([new X3D.SFString("14")]);
let FontStyle976 = browser.currentScene.createNode("FontStyle");
FontStyle976.size = 0.035;
fontStyle = FontStyle976;

geometry = Text975;

Billboard973YYY.children = new X3D.MFNode();

Billboard973ZZZ.children[0] = Shape974;

HAnimSite970ZZZ.children[2] = Billboard973;

HAnimSegment934ZZZ.children[6] = HAnimSite970;

HAnimJoint933YYY.children = new X3D.MFNode();

HAnimJoint933ZZZ.children[0] = HAnimSegment934;

let HAnimJoint977 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint977.name = "l_acromioclavicular";
HAnimJoint977.DEF = "hanim_l_acromioclavicular";
HAnimJoint977.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint977.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint977.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment978 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment978.name = "l_scapula";
HAnimSegment978.DEF = "hanim_l_scapula";
let Transform979 = browser.currentScene.createNode("Transform");
Transform979.translation = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let Transform980 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape981 = browser.currentScene.createNode("Shape");
Shape981.USE = "HAnimJointShape";
Transform980YYY.child = new X3D.undefined();

Transform980ZZZ.child[0] = Shape981;

Transform979YYY.children = new X3D.MFNode();

Transform979ZZZ.children[0] = Transform980;

HAnimSegment978YYY.children = new X3D.MFNode();

HAnimSegment978ZZZ.children[0] = Transform979;

let Shape982 = browser.currentScene.createNode("Shape");
let LineSet983 = browser.currentScene.createNode("LineSet");
LineSet983.vertexCount = new X3D.MFInt32([2]);
let Coordinate984 = browser.currentScene.createNode("Coordinate");
Coordinate984.point = new X3D.MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
coord = Coordinate984;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA985 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA985;

geometry = LineSet983;

HAnimSegment978ZZZ.children[1] = Shape982;

HAnimJoint977YYY.children = new X3D.MFNode();

HAnimJoint977ZZZ.children[0] = HAnimSegment978;

let HAnimJoint986 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint986.name = "l_shoulder";
HAnimJoint986.DEF = "hanim_l_shoulder";
HAnimJoint986.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
HAnimJoint986.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint986.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment987 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment987.name = "l_upperarm";
HAnimSegment987.DEF = "hanim_l_upperarm";
let Transform988 = browser.currentScene.createNode("Transform");
Transform988.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let Transform989 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape990 = browser.currentScene.createNode("Shape");
Shape990.USE = "HAnimJointShape";
Transform989YYY.child = new X3D.undefined();

Transform989ZZZ.child[0] = Shape990;

Transform988YYY.children = new X3D.MFNode();

Transform988ZZZ.children[0] = Transform989;

HAnimSegment987YYY.children = new X3D.MFNode();

HAnimSegment987ZZZ.children[0] = Transform988;

let Shape991 = browser.currentScene.createNode("Shape");
let LineSet992 = browser.currentScene.createNode("LineSet");
LineSet992.vertexCount = new X3D.MFInt32([2]);
let Coordinate993 = browser.currentScene.createNode("Coordinate");
Coordinate993.point = new X3D.MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
coord = Coordinate993;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA994 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA994;

geometry = LineSet992;

HAnimSegment987ZZZ.children[1] = Shape991;

let HAnimSite995 = browser.currentScene.createNode("HAnimSite");
HAnimSite995.name = "l_bideltoid";
HAnimSite995.DEF = "hanim_l_bideltoid";
let TouchSensor996 = browser.currentScene.createNode("TouchSensor");
TouchSensor996.description = "HAnimSite 96 l_bideltoid";
HAnimSite995YYY.children = new X3D.MFNode();

HAnimSite995ZZZ.children[0] = TouchSensor996;

let Shape997 = browser.currentScene.createNode("Shape");
Shape997.USE = "HAnimSiteShape";
HAnimSite995ZZZ.children[1] = Shape997;

let Billboard998 = browser.currentScene.createNode("Billboard");
let Shape999 = browser.currentScene.createNode("Shape");
let Text1000 = browser.currentScene.createNode("Text");
Text1000.string = new X3D.MFString([new X3D.SFString("96")]);
let FontStyle1001 = browser.currentScene.createNode("FontStyle");
FontStyle1001.size = 0.035;
fontStyle = FontStyle1001;

geometry = Text1000;

Billboard998YYY.children = new X3D.MFNode();

Billboard998ZZZ.children[0] = Shape999;

HAnimSite995ZZZ.children[2] = Billboard998;

HAnimSegment987ZZZ.children[2] = HAnimSite995;

let HAnimSite1002 = browser.currentScene.createNode("HAnimSite");
HAnimSite1002.name = "l_humeral_lateral_epicondyles";
HAnimSite1002.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite1002.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
let TouchSensor1003 = browser.currentScene.createNode("TouchSensor");
TouchSensor1003.description = "HAnimSite 63 l_humeral_lateral_epicondyles";
HAnimSite1002YYY.children = new X3D.MFNode();

HAnimSite1002ZZZ.children[0] = TouchSensor1003;

let Shape1004 = browser.currentScene.createNode("Shape");
Shape1004.USE = "HAnimSiteShape";
HAnimSite1002ZZZ.children[1] = Shape1004;

let Billboard1005 = browser.currentScene.createNode("Billboard");
let Shape1006 = browser.currentScene.createNode("Shape");
let Text1007 = browser.currentScene.createNode("Text");
Text1007.string = new X3D.MFString([new X3D.SFString("63")]);
let FontStyle1008 = browser.currentScene.createNode("FontStyle");
FontStyle1008.size = 0.035;
fontStyle = FontStyle1008;

geometry = Text1007;

Billboard1005YYY.children = new X3D.MFNode();

Billboard1005ZZZ.children[0] = Shape1006;

HAnimSite1002ZZZ.children[2] = Billboard1005;

HAnimSegment987ZZZ.children[3] = HAnimSite1002;

HAnimJoint986YYY.children = new X3D.MFNode();

HAnimJoint986ZZZ.children[0] = HAnimSegment987;

let HAnimJoint1009 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1009.name = "l_elbow";
HAnimJoint1009.DEF = "hanim_l_elbow";
HAnimJoint1009.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
HAnimJoint1009.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1009.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1010 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1010.name = "l_forearm";
HAnimSegment1010.DEF = "hanim_l_forearm";
let Transform1011 = browser.currentScene.createNode("Transform");
Transform1011.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let Transform1012 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1013 = browser.currentScene.createNode("Shape");
Shape1013.USE = "HAnimJointShape";
Transform1012YYY.child = new X3D.undefined();

Transform1012ZZZ.child[0] = Shape1013;

Transform1011YYY.children = new X3D.MFNode();

Transform1011ZZZ.children[0] = Transform1012;

HAnimSegment1010YYY.children = new X3D.MFNode();

HAnimSegment1010ZZZ.children[0] = Transform1011;

let Shape1014 = browser.currentScene.createNode("Shape");
let LineSet1015 = browser.currentScene.createNode("LineSet");
LineSet1015.vertexCount = new X3D.MFInt32([2]);
let Coordinate1016 = browser.currentScene.createNode("Coordinate");
Coordinate1016.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
coord = Coordinate1016;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA1017 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1017.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1017;

geometry = LineSet1015;

HAnimSegment1010ZZZ.children[1] = Shape1014;

let HAnimSite1018 = browser.currentScene.createNode("HAnimSite");
HAnimSite1018.name = "l_humeral_medial_epicondyles";
HAnimSite1018.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite1018.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
let TouchSensor1019 = browser.currentScene.createNode("TouchSensor");
TouchSensor1019.description = "HAnimSite 64 l_humeral_medial_epicondyles";
HAnimSite1018YYY.children = new X3D.MFNode();

HAnimSite1018ZZZ.children[0] = TouchSensor1019;

let Shape1020 = browser.currentScene.createNode("Shape");
Shape1020.USE = "HAnimSiteShape";
HAnimSite1018ZZZ.children[1] = Shape1020;

let Billboard1021 = browser.currentScene.createNode("Billboard");
let Shape1022 = browser.currentScene.createNode("Shape");
let Text1023 = browser.currentScene.createNode("Text");
Text1023.string = new X3D.MFString([new X3D.SFString("64")]);
let FontStyle1024 = browser.currentScene.createNode("FontStyle");
FontStyle1024.size = 0.035;
fontStyle = FontStyle1024;

geometry = Text1023;

Billboard1021YYY.children = new X3D.MFNode();

Billboard1021ZZZ.children[0] = Shape1022;

HAnimSite1018ZZZ.children[2] = Billboard1021;

HAnimSegment1010ZZZ.children[2] = HAnimSite1018;

let HAnimSite1025 = browser.currentScene.createNode("HAnimSite");
HAnimSite1025.name = "l_olecranon";
HAnimSite1025.DEF = "hanim_l_olecranon";
HAnimSite1025.translation = new X3D.SFVec3f([-0.1962,1.1375,-0.1123]);
let TouchSensor1026 = browser.currentScene.createNode("TouchSensor");
TouchSensor1026.description = "HAnimSite 65 l_olecranon";
HAnimSite1025YYY.children = new X3D.MFNode();

HAnimSite1025ZZZ.children[0] = TouchSensor1026;

let Shape1027 = browser.currentScene.createNode("Shape");
Shape1027.USE = "HAnimSiteShape";
HAnimSite1025ZZZ.children[1] = Shape1027;

let Billboard1028 = browser.currentScene.createNode("Billboard");
let Shape1029 = browser.currentScene.createNode("Shape");
let Text1030 = browser.currentScene.createNode("Text");
Text1030.string = new X3D.MFString([new X3D.SFString("65")]);
let FontStyle1031 = browser.currentScene.createNode("FontStyle");
FontStyle1031.size = 0.035;
fontStyle = FontStyle1031;

geometry = Text1030;

Billboard1028YYY.children = new X3D.MFNode();

Billboard1028ZZZ.children[0] = Shape1029;

HAnimSite1025ZZZ.children[2] = Billboard1028;

HAnimSegment1010ZZZ.children[3] = HAnimSite1025;

let HAnimSite1032 = browser.currentScene.createNode("HAnimSite");
HAnimSite1032.name = "l_radial_styloid";
HAnimSite1032.DEF = "hanim_l_radial_styloid";
HAnimSite1032.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
let TouchSensor1033 = browser.currentScene.createNode("TouchSensor");
TouchSensor1033.description = "HAnimSite 71 l_radial_styloid";
HAnimSite1032YYY.children = new X3D.MFNode();

HAnimSite1032ZZZ.children[0] = TouchSensor1033;

let Shape1034 = browser.currentScene.createNode("Shape");
Shape1034.USE = "HAnimSiteShape";
HAnimSite1032ZZZ.children[1] = Shape1034;

let Billboard1035 = browser.currentScene.createNode("Billboard");
let Shape1036 = browser.currentScene.createNode("Shape");
let Text1037 = browser.currentScene.createNode("Text");
Text1037.string = new X3D.MFString([new X3D.SFString("71")]);
let FontStyle1038 = browser.currentScene.createNode("FontStyle");
FontStyle1038.size = 0.035;
fontStyle = FontStyle1038;

geometry = Text1037;

Billboard1035YYY.children = new X3D.MFNode();

Billboard1035ZZZ.children[0] = Shape1036;

HAnimSite1032ZZZ.children[2] = Billboard1035;

HAnimSegment1010ZZZ.children[4] = HAnimSite1032;

let HAnimSite1039 = browser.currentScene.createNode("HAnimSite");
HAnimSite1039.name = "l_radiale";
HAnimSite1039.DEF = "hanim_l_radiale";
HAnimSite1039.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
let TouchSensor1040 = browser.currentScene.createNode("TouchSensor");
TouchSensor1040.description = "HAnimSite 69 l_radiale";
HAnimSite1039YYY.children = new X3D.MFNode();

HAnimSite1039ZZZ.children[0] = TouchSensor1040;

let Shape1041 = browser.currentScene.createNode("Shape");
Shape1041.USE = "HAnimSiteShape";
HAnimSite1039ZZZ.children[1] = Shape1041;

let Billboard1042 = browser.currentScene.createNode("Billboard");
let Shape1043 = browser.currentScene.createNode("Shape");
let Text1044 = browser.currentScene.createNode("Text");
Text1044.string = new X3D.MFString([new X3D.SFString("69")]);
let FontStyle1045 = browser.currentScene.createNode("FontStyle");
FontStyle1045.size = 0.035;
fontStyle = FontStyle1045;

geometry = Text1044;

Billboard1042YYY.children = new X3D.MFNode();

Billboard1042ZZZ.children[0] = Shape1043;

HAnimSite1039ZZZ.children[2] = Billboard1042;

HAnimSegment1010ZZZ.children[5] = HAnimSite1039;

HAnimJoint1009YYY.children = new X3D.MFNode();

HAnimJoint1009ZZZ.children[0] = HAnimSegment1010;

let HAnimJoint1046 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1046.name = "l_radiocarpal";
HAnimJoint1046.DEF = "hanim_l_radiocarpal";
HAnimJoint1046.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
HAnimJoint1046.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1046.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1047 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1047.name = "l_carpal";
HAnimSegment1047.DEF = "hanim_l_carpal";
let Transform1048 = browser.currentScene.createNode("Transform");
Transform1048.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
Transform1048.translation = new X3D.SFVec3f([0.2,0.85,-0.05]);
Transform1048.rotation = new X3D.SFRotation([0,0,1,-3.14]);
//Transform left hand
let Transform1049 = browser.currentScene.createNode("Transform");
Transform1049.rotation = new X3D.SFRotation([0,1,0,-1.57]);
//Transform left hand
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
Coordinate1053.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
coord = Coordinate1053;

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
let ColorRGBA1054 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1054.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1054;

geometry = LineSet1052;

HAnimSegment1047ZZZ.children[1] = Shape1051;

let HAnimSite1055 = browser.currentScene.createNode("HAnimSite");
HAnimSite1055.name = "l_ulnar_styloid";
HAnimSite1055.DEF = "hanim_l_ulnar_styloid";
HAnimSite1055.translation = new X3D.SFVec3f([-0.2142,0.8529,-0.0648]);
let TouchSensor1056 = browser.currentScene.createNode("TouchSensor");
TouchSensor1056.description = "HAnimSite 70 l_ulnar_styloid";
HAnimSite1055YYY.children = new X3D.MFNode();

HAnimSite1055ZZZ.children[0] = TouchSensor1056;

let Shape1057 = browser.currentScene.createNode("Shape");
Shape1057.USE = "HAnimSiteShape";
HAnimSite1055ZZZ.children[1] = Shape1057;

let Billboard1058 = browser.currentScene.createNode("Billboard");
let Shape1059 = browser.currentScene.createNode("Shape");
let Text1060 = browser.currentScene.createNode("Text");
Text1060.string = new X3D.MFString([new X3D.SFString("70")]);
let FontStyle1061 = browser.currentScene.createNode("FontStyle");
FontStyle1061.size = 0.035;
fontStyle = FontStyle1061;

geometry = Text1060;

Billboard1058YYY.children = new X3D.MFNode();

Billboard1058ZZZ.children[0] = Shape1059;

HAnimSite1055ZZZ.children[2] = Billboard1058;

HAnimSegment1047ZZZ.children[2] = HAnimSite1055;

let Shape1062 = browser.currentScene.createNode("Shape");
let LineSet1063 = browser.currentScene.createNode("LineSet");
LineSet1063.vertexCount = new X3D.MFInt32([2]);
let Coordinate1064 = browser.currentScene.createNode("Coordinate");
Coordinate1064.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
coord = Coordinate1064;

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
let ColorRGBA1065 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1065.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1065;

geometry = LineSet1063;

HAnimSegment1047ZZZ.children[3] = Shape1062;

let Shape1066 = browser.currentScene.createNode("Shape");
let LineSet1067 = browser.currentScene.createNode("LineSet");
LineSet1067.vertexCount = new X3D.MFInt32([2]);
let Coordinate1068 = browser.currentScene.createNode("Coordinate");
Coordinate1068.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
coord = Coordinate1068;

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
let ColorRGBA1069 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1069.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1069;

geometry = LineSet1067;

HAnimSegment1047ZZZ.children[4] = Shape1066;

let Shape1070 = browser.currentScene.createNode("Shape");
let LineSet1071 = browser.currentScene.createNode("LineSet");
LineSet1071.vertexCount = new X3D.MFInt32([2]);
let Coordinate1072 = browser.currentScene.createNode("Coordinate");
Coordinate1072.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
coord = Coordinate1072;

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
let ColorRGBA1073 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1073.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1073;

geometry = LineSet1071;

HAnimSegment1047ZZZ.children[5] = Shape1070;

let Shape1074 = browser.currentScene.createNode("Shape");
let LineSet1075 = browser.currentScene.createNode("LineSet");
LineSet1075.vertexCount = new X3D.MFInt32([2]);
let Coordinate1076 = browser.currentScene.createNode("Coordinate");
Coordinate1076.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
coord = Coordinate1076;

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
let ColorRGBA1077 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1077.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1077;

geometry = LineSet1075;

HAnimSegment1047ZZZ.children[6] = Shape1074;

HAnimJoint1046YYY.children = new X3D.MFNode();

HAnimJoint1046ZZZ.children[0] = HAnimSegment1047;

let HAnimJoint1078 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1078.name = "l_carpometacarpal_1";
HAnimJoint1078.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1078.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint1078.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1078.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1079 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1079.name = "l_metacarpal_1";
HAnimSegment1079.DEF = "hanim_l_metacarpal_1";
let Transform1080 = browser.currentScene.createNode("Transform");
Transform1080.translation = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let Transform1081 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1082 = browser.currentScene.createNode("Shape");
Shape1082.USE = "HAnimJointShape";
Transform1081YYY.child = new X3D.undefined();

Transform1081ZZZ.child[0] = Shape1082;

Transform1080YYY.children = new X3D.MFNode();

Transform1080ZZZ.children[0] = Transform1081;

HAnimSegment1079YYY.children = new X3D.MFNode();

HAnimSegment1079ZZZ.children[0] = Transform1080;

let Shape1083 = browser.currentScene.createNode("Shape");
let LineSet1084 = browser.currentScene.createNode("LineSet");
LineSet1084.vertexCount = new X3D.MFInt32([2]);
let Coordinate1085 = browser.currentScene.createNode("Coordinate");
Coordinate1085.point = new X3D.MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
coord = Coordinate1085;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA1086 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1086.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1086;

geometry = LineSet1084;

HAnimSegment1079ZZZ.children[1] = Shape1083;

HAnimJoint1078YYY.children = new X3D.MFNode();

HAnimJoint1078ZZZ.children[0] = HAnimSegment1079;

let HAnimJoint1087 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1087.name = "l_metacarpophalangeal_1";
HAnimJoint1087.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1087.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint1087.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1087.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1088 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1088.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1088.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform1089 = browser.currentScene.createNode("Transform");
Transform1089.translation = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let Transform1090 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1091 = browser.currentScene.createNode("Shape");
Shape1091.USE = "HAnimJointShape";
Transform1090YYY.child = new X3D.undefined();

Transform1090ZZZ.child[0] = Shape1091;

Transform1089YYY.children = new X3D.MFNode();

Transform1089ZZZ.children[0] = Transform1090;

HAnimSegment1088YYY.children = new X3D.MFNode();

HAnimSegment1088ZZZ.children[0] = Transform1089;

let Shape1092 = browser.currentScene.createNode("Shape");
let LineSet1093 = browser.currentScene.createNode("LineSet");
LineSet1093.vertexCount = new X3D.MFInt32([2]);
let Coordinate1094 = browser.currentScene.createNode("Coordinate");
Coordinate1094.point = new X3D.MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
coord = Coordinate1094;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA1095 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1095.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1095;

geometry = LineSet1093;

HAnimSegment1088ZZZ.children[1] = Shape1092;

HAnimJoint1087YYY.children = new X3D.MFNode();

HAnimJoint1087ZZZ.children[0] = HAnimSegment1088;

let HAnimJoint1096 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1096.name = "l_carpal_interphalangeal_1";
HAnimJoint1096.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1096.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint1096.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1096.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1087ZZZ.children[1] = HAnimJoint1096;

HAnimJoint1078ZZZ.children[1] = HAnimJoint1087;

HAnimJoint1046ZZZ.children[1] = HAnimJoint1078;

let HAnimJoint1097 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1097.name = "l_carpometacarpal_2";
HAnimJoint1097.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1097.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint1097.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1097.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1098 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1098.name = "l_metacarpal_2";
HAnimSegment1098.DEF = "hanim_l_metacarpal_2";
let Transform1099 = browser.currentScene.createNode("Transform");
Transform1099.translation = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let Transform1100 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1101 = browser.currentScene.createNode("Shape");
Shape1101.USE = "HAnimJointShape";
Transform1100YYY.child = new X3D.undefined();

Transform1100ZZZ.child[0] = Shape1101;

Transform1099YYY.children = new X3D.MFNode();

Transform1099ZZZ.children[0] = Transform1100;

HAnimSegment1098YYY.children = new X3D.MFNode();

HAnimSegment1098ZZZ.children[0] = Transform1099;

let Shape1102 = browser.currentScene.createNode("Shape");
let LineSet1103 = browser.currentScene.createNode("LineSet");
LineSet1103.vertexCount = new X3D.MFInt32([2]);
let Coordinate1104 = browser.currentScene.createNode("Coordinate");
Coordinate1104.point = new X3D.MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
coord = Coordinate1104;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA1105 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1105.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1105;

geometry = LineSet1103;

HAnimSegment1098ZZZ.children[1] = Shape1102;

let HAnimSite1106 = browser.currentScene.createNode("HAnimSite");
HAnimSite1106.name = "l_metacarpal_phalanx_2";
HAnimSite1106.DEF = "hanim_l_metacarpal_phalanx_2";
HAnimSite1106.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
let TouchSensor1107 = browser.currentScene.createNode("TouchSensor");
TouchSensor1107.description = "HAnimSite 75 l_metacarpal_phalanx_2";
HAnimSite1106YYY.children = new X3D.MFNode();

HAnimSite1106ZZZ.children[0] = TouchSensor1107;

let Shape1108 = browser.currentScene.createNode("Shape");
Shape1108.USE = "HAnimSiteShape";
HAnimSite1106ZZZ.children[1] = Shape1108;

let Billboard1109 = browser.currentScene.createNode("Billboard");
let Shape1110 = browser.currentScene.createNode("Shape");
let Text1111 = browser.currentScene.createNode("Text");
Text1111.string = new X3D.MFString([new X3D.SFString("75")]);
let FontStyle1112 = browser.currentScene.createNode("FontStyle");
FontStyle1112.size = 0.035;
fontStyle = FontStyle1112;

geometry = Text1111;

Billboard1109YYY.children = new X3D.MFNode();

Billboard1109ZZZ.children[0] = Shape1110;

HAnimSite1106ZZZ.children[2] = Billboard1109;

HAnimSegment1098ZZZ.children[2] = HAnimSite1106;

HAnimJoint1097YYY.children = new X3D.MFNode();

HAnimJoint1097ZZZ.children[0] = HAnimSegment1098;

let HAnimJoint1113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1113.name = "l_metacarpophalangeal_2";
HAnimJoint1113.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1113.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint1113.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1113.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1114.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1114.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform1115 = browser.currentScene.createNode("Transform");
Transform1115.translation = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let Transform1116 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1117 = browser.currentScene.createNode("Shape");
Shape1117.USE = "HAnimJointShape";
Transform1116YYY.child = new X3D.undefined();

Transform1116ZZZ.child[0] = Shape1117;

Transform1115YYY.children = new X3D.MFNode();

Transform1115ZZZ.children[0] = Transform1116;

HAnimSegment1114YYY.children = new X3D.MFNode();

HAnimSegment1114ZZZ.children[0] = Transform1115;

let Shape1118 = browser.currentScene.createNode("Shape");
let LineSet1119 = browser.currentScene.createNode("LineSet");
LineSet1119.vertexCount = new X3D.MFInt32([2]);
let Coordinate1120 = browser.currentScene.createNode("Coordinate");
Coordinate1120.point = new X3D.MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
coord = Coordinate1120;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1121 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1121.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1121;

geometry = LineSet1119;

HAnimSegment1114ZZZ.children[1] = Shape1118;

HAnimJoint1113YYY.children = new X3D.MFNode();

HAnimJoint1113ZZZ.children[0] = HAnimSegment1114;

let HAnimJoint1122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1122.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1122.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1122.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint1122.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1122.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1123.name = "l_carpal_middle_phalanx_2";
HAnimSegment1123.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform1124 = browser.currentScene.createNode("Transform");
Transform1124.translation = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let Transform1125 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1126 = browser.currentScene.createNode("Shape");
Shape1126.USE = "HAnimJointShape";
Transform1125YYY.child = new X3D.undefined();

Transform1125ZZZ.child[0] = Shape1126;

Transform1124YYY.children = new X3D.MFNode();

Transform1124ZZZ.children[0] = Transform1125;

HAnimSegment1123YYY.children = new X3D.MFNode();

HAnimSegment1123ZZZ.children[0] = Transform1124;

let Shape1127 = browser.currentScene.createNode("Shape");
let LineSet1128 = browser.currentScene.createNode("LineSet");
LineSet1128.vertexCount = new X3D.MFInt32([2]);
let Coordinate1129 = browser.currentScene.createNode("Coordinate");
Coordinate1129.point = new X3D.MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
coord = Coordinate1129;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1130 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1130.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1130;

geometry = LineSet1128;

HAnimSegment1123ZZZ.children[1] = Shape1127;

HAnimJoint1122YYY.children = new X3D.MFNode();

HAnimJoint1122ZZZ.children[0] = HAnimSegment1123;

let HAnimJoint1131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1131.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1131.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1131.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint1131.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1131.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1122ZZZ.children[1] = HAnimJoint1131;

HAnimJoint1113ZZZ.children[1] = HAnimJoint1122;

HAnimJoint1097ZZZ.children[1] = HAnimJoint1113;

HAnimJoint1046ZZZ.children[2] = HAnimJoint1097;

let HAnimJoint1132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1132.name = "l_carpometacarpal_3";
HAnimJoint1132.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1132.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint1132.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1132.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1133.name = "l_metacarpal_3";
HAnimSegment1133.DEF = "hanim_l_metacarpal_3";
let Transform1134 = browser.currentScene.createNode("Transform");
Transform1134.translation = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let Transform1135 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1136 = browser.currentScene.createNode("Shape");
Shape1136.USE = "HAnimJointShape";
Transform1135YYY.child = new X3D.undefined();

Transform1135ZZZ.child[0] = Shape1136;

Transform1134YYY.children = new X3D.MFNode();

Transform1134ZZZ.children[0] = Transform1135;

HAnimSegment1133YYY.children = new X3D.MFNode();

HAnimSegment1133ZZZ.children[0] = Transform1134;

let Shape1137 = browser.currentScene.createNode("Shape");
let LineSet1138 = browser.currentScene.createNode("LineSet");
LineSet1138.vertexCount = new X3D.MFInt32([2]);
let Coordinate1139 = browser.currentScene.createNode("Coordinate");
Coordinate1139.point = new X3D.MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
coord = Coordinate1139;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA1140 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1140.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1140;

geometry = LineSet1138;

HAnimSegment1133ZZZ.children[1] = Shape1137;

let HAnimSite1141 = browser.currentScene.createNode("HAnimSite");
HAnimSite1141.name = "l_metacarpal_phalanx_3";
HAnimSite1141.DEF = "hanim_l_metacarpal_phalanx_3";
let TouchSensor1142 = browser.currentScene.createNode("TouchSensor");
TouchSensor1142.description = "HAnimSite 76 l_metacarpal_phalanx_3";
HAnimSite1141YYY.children = new X3D.MFNode();

HAnimSite1141ZZZ.children[0] = TouchSensor1142;

let Shape1143 = browser.currentScene.createNode("Shape");
Shape1143.USE = "HAnimSiteShape";
HAnimSite1141ZZZ.children[1] = Shape1143;

let Billboard1144 = browser.currentScene.createNode("Billboard");
let Shape1145 = browser.currentScene.createNode("Shape");
let Text1146 = browser.currentScene.createNode("Text");
Text1146.string = new X3D.MFString([new X3D.SFString("76")]);
let FontStyle1147 = browser.currentScene.createNode("FontStyle");
FontStyle1147.size = 0.035;
fontStyle = FontStyle1147;

geometry = Text1146;

Billboard1144YYY.children = new X3D.MFNode();

Billboard1144ZZZ.children[0] = Shape1145;

HAnimSite1141ZZZ.children[2] = Billboard1144;

HAnimSegment1133ZZZ.children[2] = HAnimSite1141;

HAnimJoint1132YYY.children = new X3D.MFNode();

HAnimJoint1132ZZZ.children[0] = HAnimSegment1133;

let HAnimJoint1148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1148.name = "l_metacarpophalangeal_3";
HAnimJoint1148.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1148.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint1148.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1148.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1149.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1149.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform1150 = browser.currentScene.createNode("Transform");
Transform1150.translation = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let Transform1151 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1152 = browser.currentScene.createNode("Shape");
Shape1152.USE = "HAnimJointShape";
Transform1151YYY.child = new X3D.undefined();

Transform1151ZZZ.child[0] = Shape1152;

Transform1150YYY.children = new X3D.MFNode();

Transform1150ZZZ.children[0] = Transform1151;

HAnimSegment1149YYY.children = new X3D.MFNode();

HAnimSegment1149ZZZ.children[0] = Transform1150;

let Shape1153 = browser.currentScene.createNode("Shape");
let LineSet1154 = browser.currentScene.createNode("LineSet");
LineSet1154.vertexCount = new X3D.MFInt32([2]);
let Coordinate1155 = browser.currentScene.createNode("Coordinate");
Coordinate1155.point = new X3D.MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
coord = Coordinate1155;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1156 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1156.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1156;

geometry = LineSet1154;

HAnimSegment1149ZZZ.children[1] = Shape1153;

HAnimJoint1148YYY.children = new X3D.MFNode();

HAnimJoint1148ZZZ.children[0] = HAnimSegment1149;

let HAnimJoint1157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1157.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1157.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1157.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint1157.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1157.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1158 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1158.name = "l_carpal_middle_phalanx_3";
HAnimSegment1158.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform1159 = browser.currentScene.createNode("Transform");
Transform1159.translation = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let Transform1160 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1161 = browser.currentScene.createNode("Shape");
Shape1161.USE = "HAnimJointShape";
Transform1160YYY.child = new X3D.undefined();

Transform1160ZZZ.child[0] = Shape1161;

Transform1159YYY.children = new X3D.MFNode();

Transform1159ZZZ.children[0] = Transform1160;

HAnimSegment1158YYY.children = new X3D.MFNode();

HAnimSegment1158ZZZ.children[0] = Transform1159;

let Shape1162 = browser.currentScene.createNode("Shape");
let LineSet1163 = browser.currentScene.createNode("LineSet");
LineSet1163.vertexCount = new X3D.MFInt32([2]);
let Coordinate1164 = browser.currentScene.createNode("Coordinate");
Coordinate1164.point = new X3D.MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
coord = Coordinate1164;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1165 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1165.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1165;

geometry = LineSet1163;

HAnimSegment1158ZZZ.children[1] = Shape1162;

HAnimJoint1157YYY.children = new X3D.MFNode();

HAnimJoint1157ZZZ.children[0] = HAnimSegment1158;

let HAnimJoint1166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1166.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1166.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1166.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint1166.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1166.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1157ZZZ.children[1] = HAnimJoint1166;

HAnimJoint1148ZZZ.children[1] = HAnimJoint1157;

HAnimJoint1132ZZZ.children[1] = HAnimJoint1148;

HAnimJoint1046ZZZ.children[3] = HAnimJoint1132;

let HAnimJoint1167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1167.name = "l_carpometacarpal_4";
HAnimJoint1167.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1167.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint1167.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1167.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1168 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1168.name = "l_metacarpal_4";
HAnimSegment1168.DEF = "hanim_l_metacarpal_4";
let Transform1169 = browser.currentScene.createNode("Transform");
Transform1169.translation = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let Transform1170 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1171 = browser.currentScene.createNode("Shape");
Shape1171.USE = "HAnimJointShape";
Transform1170YYY.child = new X3D.undefined();

Transform1170ZZZ.child[0] = Shape1171;

Transform1169YYY.children = new X3D.MFNode();

Transform1169ZZZ.children[0] = Transform1170;

HAnimSegment1168YYY.children = new X3D.MFNode();

HAnimSegment1168ZZZ.children[0] = Transform1169;

let Shape1172 = browser.currentScene.createNode("Shape");
let LineSet1173 = browser.currentScene.createNode("LineSet");
LineSet1173.vertexCount = new X3D.MFInt32([2]);
let Coordinate1174 = browser.currentScene.createNode("Coordinate");
Coordinate1174.point = new X3D.MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
coord = Coordinate1174;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA1175 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1175.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1175;

geometry = LineSet1173;

HAnimSegment1168ZZZ.children[1] = Shape1172;

HAnimJoint1167YYY.children = new X3D.MFNode();

HAnimJoint1167ZZZ.children[0] = HAnimSegment1168;

let HAnimJoint1176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1176.name = "l_metacarpophalangeal_4";
HAnimJoint1176.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1176.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint1176.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1176.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1177.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1177.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform1178 = browser.currentScene.createNode("Transform");
Transform1178.translation = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let Transform1179 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1180 = browser.currentScene.createNode("Shape");
Shape1180.USE = "HAnimJointShape";
Transform1179YYY.child = new X3D.undefined();

Transform1179ZZZ.child[0] = Shape1180;

Transform1178YYY.children = new X3D.MFNode();

Transform1178ZZZ.children[0] = Transform1179;

HAnimSegment1177YYY.children = new X3D.MFNode();

HAnimSegment1177ZZZ.children[0] = Transform1178;

let Shape1181 = browser.currentScene.createNode("Shape");
let LineSet1182 = browser.currentScene.createNode("LineSet");
LineSet1182.vertexCount = new X3D.MFInt32([2]);
let Coordinate1183 = browser.currentScene.createNode("Coordinate");
Coordinate1183.point = new X3D.MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
coord = Coordinate1183;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1184 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1184.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1184;

geometry = LineSet1182;

HAnimSegment1177ZZZ.children[1] = Shape1181;

HAnimJoint1176YYY.children = new X3D.MFNode();

HAnimJoint1176ZZZ.children[0] = HAnimSegment1177;

let HAnimJoint1185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1185.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1185.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1185.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint1185.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1185.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1186 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1186.name = "l_carpal_middle_phalanx_4";
HAnimSegment1186.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform1187 = browser.currentScene.createNode("Transform");
Transform1187.translation = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
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
Coordinate1192.point = new X3D.MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
coord = Coordinate1192;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1193 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1193.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1193;

geometry = LineSet1191;

HAnimSegment1186ZZZ.children[1] = Shape1190;

HAnimJoint1185YYY.children = new X3D.MFNode();

HAnimJoint1185ZZZ.children[0] = HAnimSegment1186;

let HAnimJoint1194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1194.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1194.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1194.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint1194.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1194.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1185ZZZ.children[1] = HAnimJoint1194;

HAnimJoint1176ZZZ.children[1] = HAnimJoint1185;

HAnimJoint1167ZZZ.children[1] = HAnimJoint1176;

HAnimJoint1046ZZZ.children[4] = HAnimJoint1167;

let HAnimJoint1195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1195.name = "l_carpometacarpal_5";
HAnimJoint1195.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1195.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint1195.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1195.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1196.name = "l_metacarpal_5";
HAnimSegment1196.DEF = "hanim_l_metacarpal_5";
let Transform1197 = browser.currentScene.createNode("Transform");
Transform1197.translation = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let Transform1198 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1199 = browser.currentScene.createNode("Shape");
Shape1199.USE = "HAnimJointShape";
Transform1198YYY.child = new X3D.undefined();

Transform1198ZZZ.child[0] = Shape1199;

Transform1197YYY.children = new X3D.MFNode();

Transform1197ZZZ.children[0] = Transform1198;

HAnimSegment1196YYY.children = new X3D.MFNode();

HAnimSegment1196ZZZ.children[0] = Transform1197;

let Shape1200 = browser.currentScene.createNode("Shape");
let LineSet1201 = browser.currentScene.createNode("LineSet");
LineSet1201.vertexCount = new X3D.MFInt32([2]);
let Coordinate1202 = browser.currentScene.createNode("Coordinate");
Coordinate1202.point = new X3D.MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
coord = Coordinate1202;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA1203 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1203.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1203;

geometry = LineSet1201;

HAnimSegment1196ZZZ.children[1] = Shape1200;

let HAnimSite1204 = browser.currentScene.createNode("HAnimSite");
HAnimSite1204.name = "l_metacarpal_phalanx_5";
HAnimSite1204.DEF = "hanim_l_metacarpal_phalanx_5";
HAnimSite1204.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
let TouchSensor1205 = browser.currentScene.createNode("TouchSensor");
TouchSensor1205.description = "HAnimSite 77 l_metacarpal_phalanx_5";
HAnimSite1204YYY.children = new X3D.MFNode();

HAnimSite1204ZZZ.children[0] = TouchSensor1205;

let Shape1206 = browser.currentScene.createNode("Shape");
Shape1206.USE = "HAnimSiteShape";
HAnimSite1204ZZZ.children[1] = Shape1206;

let Billboard1207 = browser.currentScene.createNode("Billboard");
let Shape1208 = browser.currentScene.createNode("Shape");
let Text1209 = browser.currentScene.createNode("Text");
Text1209.string = new X3D.MFString([new X3D.SFString("77")]);
let FontStyle1210 = browser.currentScene.createNode("FontStyle");
FontStyle1210.size = 0.035;
fontStyle = FontStyle1210;

geometry = Text1209;

Billboard1207YYY.children = new X3D.MFNode();

Billboard1207ZZZ.children[0] = Shape1208;

HAnimSite1204ZZZ.children[2] = Billboard1207;

HAnimSegment1196ZZZ.children[2] = HAnimSite1204;

HAnimJoint1195YYY.children = new X3D.MFNode();

HAnimJoint1195ZZZ.children[0] = HAnimSegment1196;

let HAnimJoint1211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1211.name = "l_metacarpophalangeal_5";
HAnimJoint1211.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1211.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint1211.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1211.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1212 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1212.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1212.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform1213 = browser.currentScene.createNode("Transform");
Transform1213.translation = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let Transform1214 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1215 = browser.currentScene.createNode("Shape");
Shape1215.USE = "HAnimJointShape";
Transform1214YYY.child = new X3D.undefined();

Transform1214ZZZ.child[0] = Shape1215;

Transform1213YYY.children = new X3D.MFNode();

Transform1213ZZZ.children[0] = Transform1214;

HAnimSegment1212YYY.children = new X3D.MFNode();

HAnimSegment1212ZZZ.children[0] = Transform1213;

let Shape1216 = browser.currentScene.createNode("Shape");
let LineSet1217 = browser.currentScene.createNode("LineSet");
LineSet1217.vertexCount = new X3D.MFInt32([2]);
let Coordinate1218 = browser.currentScene.createNode("Coordinate");
Coordinate1218.point = new X3D.MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
coord = Coordinate1218;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1219 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1219.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1219;

geometry = LineSet1217;

HAnimSegment1212ZZZ.children[1] = Shape1216;

HAnimJoint1211YYY.children = new X3D.MFNode();

HAnimJoint1211ZZZ.children[0] = HAnimSegment1212;

let HAnimJoint1220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1220.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1220.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1220.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint1220.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1220.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1221 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1221.name = "l_carpal_middle_phalanx_5";
HAnimSegment1221.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform1222 = browser.currentScene.createNode("Transform");
Transform1222.translation = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let Transform1223 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1224 = browser.currentScene.createNode("Shape");
Shape1224.USE = "HAnimJointShape";
Transform1223YYY.child = new X3D.undefined();

Transform1223ZZZ.child[0] = Shape1224;

Transform1222YYY.children = new X3D.MFNode();

Transform1222ZZZ.children[0] = Transform1223;

HAnimSegment1221YYY.children = new X3D.MFNode();

HAnimSegment1221ZZZ.children[0] = Transform1222;

let Shape1225 = browser.currentScene.createNode("Shape");
let LineSet1226 = browser.currentScene.createNode("LineSet");
LineSet1226.vertexCount = new X3D.MFInt32([2]);
let Coordinate1227 = browser.currentScene.createNode("Coordinate");
Coordinate1227.point = new X3D.MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
coord = Coordinate1227;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1228 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1228.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1228;

geometry = LineSet1226;

HAnimSegment1221ZZZ.children[1] = Shape1225;

HAnimJoint1220YYY.children = new X3D.MFNode();

HAnimJoint1220ZZZ.children[0] = HAnimSegment1221;

let HAnimJoint1229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1229.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1229.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1229.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint1229.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1229.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1220ZZZ.children[1] = HAnimJoint1229;

HAnimJoint1211ZZZ.children[1] = HAnimJoint1220;

HAnimJoint1195ZZZ.children[1] = HAnimJoint1211;

HAnimJoint1046ZZZ.children[5] = HAnimJoint1195;

HAnimJoint1009ZZZ.children[1] = HAnimJoint1046;

HAnimJoint986ZZZ.children[1] = HAnimJoint1009;

HAnimJoint977ZZZ.children[1] = HAnimJoint986;

HAnimJoint933ZZZ.children[1] = HAnimJoint977;

HAnimJoint701ZZZ.children[2] = HAnimJoint933;

let HAnimJoint1230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1230.name = "r_sternoclavicular";
HAnimJoint1230.DEF = "hanim_r_sternoclavicular";
HAnimJoint1230.center = new X3D.SFVec3f([-0.0694,1.46,-0.033]);
HAnimJoint1230.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1230.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1231 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1231.name = "r_clavicle";
HAnimSegment1231.DEF = "hanim_r_clavicle";
let Transform1232 = browser.currentScene.createNode("Transform");
Transform1232.translation = new X3D.SFVec3f([-0.0694,1.46,-0.033]);
let Transform1233 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1234 = browser.currentScene.createNode("Shape");
Shape1234.USE = "HAnimJointShape";
Transform1233YYY.child = new X3D.undefined();

Transform1233ZZZ.child[0] = Shape1234;

Transform1232YYY.children = new X3D.MFNode();

Transform1232ZZZ.children[0] = Transform1233;

HAnimSegment1231YYY.children = new X3D.MFNode();

HAnimSegment1231ZZZ.children[0] = Transform1232;

let Shape1235 = browser.currentScene.createNode("Shape");
let LineSet1236 = browser.currentScene.createNode("LineSet");
LineSet1236.vertexCount = new X3D.MFInt32([2]);
let Coordinate1237 = browser.currentScene.createNode("Coordinate");
Coordinate1237.point = new X3D.MFVec3f([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
coord = Coordinate1237;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA1238 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1238.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1238;

geometry = LineSet1236;

HAnimSegment1231ZZZ.children[1] = Shape1235;

let HAnimSite1239 = browser.currentScene.createNode("HAnimSite");
HAnimSite1239.name = "r_acromion";
HAnimSite1239.DEF = "hanim_r_acromion";
HAnimSite1239.translation = new X3D.SFVec3f([-0.1905,1.4791,-0.0431]);
let TouchSensor1240 = browser.currentScene.createNode("TouchSensor");
TouchSensor1240.description = "HAnimSite 20 r_acromion";
HAnimSite1239YYY.children = new X3D.MFNode();

HAnimSite1239ZZZ.children[0] = TouchSensor1240;

let Shape1241 = browser.currentScene.createNode("Shape");
Shape1241.USE = "HAnimSiteShape";
HAnimSite1239ZZZ.children[1] = Shape1241;

let Billboard1242 = browser.currentScene.createNode("Billboard");
let Shape1243 = browser.currentScene.createNode("Shape");
let Text1244 = browser.currentScene.createNode("Text");
Text1244.string = new X3D.MFString([new X3D.SFString("20")]);
let FontStyle1245 = browser.currentScene.createNode("FontStyle");
FontStyle1245.size = 0.035;
fontStyle = FontStyle1245;

geometry = Text1244;

Billboard1242YYY.children = new X3D.MFNode();

Billboard1242ZZZ.children[0] = Shape1243;

HAnimSite1239ZZZ.children[2] = Billboard1242;

HAnimSegment1231ZZZ.children[2] = HAnimSite1239;

let HAnimSite1246 = browser.currentScene.createNode("HAnimSite");
HAnimSite1246.name = "r_axilla_distal";
HAnimSite1246.DEF = "hanim_r_axilla_distal";
HAnimSite1246.translation = new X3D.SFVec3f([-0.1603,1.4098,-0.0826]);
let TouchSensor1247 = browser.currentScene.createNode("TouchSensor");
TouchSensor1247.description = "HAnimSite 22 r_axilla_distal";
HAnimSite1246YYY.children = new X3D.MFNode();

HAnimSite1246ZZZ.children[0] = TouchSensor1247;

let Shape1248 = browser.currentScene.createNode("Shape");
Shape1248.USE = "HAnimSiteShape";
HAnimSite1246ZZZ.children[1] = Shape1248;

let Billboard1249 = browser.currentScene.createNode("Billboard");
let Shape1250 = browser.currentScene.createNode("Shape");
let Text1251 = browser.currentScene.createNode("Text");
Text1251.string = new X3D.MFString([new X3D.SFString("22")]);
let FontStyle1252 = browser.currentScene.createNode("FontStyle");
FontStyle1252.size = 0.035;
fontStyle = FontStyle1252;

geometry = Text1251;

Billboard1249YYY.children = new X3D.MFNode();

Billboard1249ZZZ.children[0] = Shape1250;

HAnimSite1246ZZZ.children[2] = Billboard1249;

HAnimSegment1231ZZZ.children[3] = HAnimSite1246;

let HAnimSite1253 = browser.currentScene.createNode("HAnimSite");
HAnimSite1253.name = "r_axilla_posterior_folds";
HAnimSite1253.DEF = "hanim_r_axilla_posterior_folds";
let TouchSensor1254 = browser.currentScene.createNode("TouchSensor");
TouchSensor1254.description = "HAnimSite 23 r_axilla_posterior_folds";
HAnimSite1253YYY.children = new X3D.MFNode();

HAnimSite1253ZZZ.children[0] = TouchSensor1254;

let Shape1255 = browser.currentScene.createNode("Shape");
Shape1255.USE = "HAnimSiteShape";
HAnimSite1253ZZZ.children[1] = Shape1255;

let Billboard1256 = browser.currentScene.createNode("Billboard");
let Shape1257 = browser.currentScene.createNode("Shape");
let Text1258 = browser.currentScene.createNode("Text");
Text1258.string = new X3D.MFString([new X3D.SFString("23")]);
let FontStyle1259 = browser.currentScene.createNode("FontStyle");
FontStyle1259.size = 0.035;
fontStyle = FontStyle1259;

geometry = Text1258;

Billboard1256YYY.children = new X3D.MFNode();

Billboard1256ZZZ.children[0] = Shape1257;

HAnimSite1253ZZZ.children[2] = Billboard1256;

HAnimSegment1231ZZZ.children[4] = HAnimSite1253;

let HAnimSite1260 = browser.currentScene.createNode("HAnimSite");
HAnimSite1260.name = "r_axilla_proximal";
HAnimSite1260.DEF = "hanim_r_axilla_proximal";
HAnimSite1260.translation = new X3D.SFVec3f([-0.1626,1.4072,-0.0031]);
let TouchSensor1261 = browser.currentScene.createNode("TouchSensor");
TouchSensor1261.description = "HAnimSite 21 r_axilla_proximal";
HAnimSite1260YYY.children = new X3D.MFNode();

HAnimSite1260ZZZ.children[0] = TouchSensor1261;

let Shape1262 = browser.currentScene.createNode("Shape");
Shape1262.USE = "HAnimSiteShape";
HAnimSite1260ZZZ.children[1] = Shape1262;

let Billboard1263 = browser.currentScene.createNode("Billboard");
let Shape1264 = browser.currentScene.createNode("Shape");
let Text1265 = browser.currentScene.createNode("Text");
Text1265.string = new X3D.MFString([new X3D.SFString("21")]);
let FontStyle1266 = browser.currentScene.createNode("FontStyle");
FontStyle1266.size = 0.035;
fontStyle = FontStyle1266;

geometry = Text1265;

Billboard1263YYY.children = new X3D.MFNode();

Billboard1263ZZZ.children[0] = Shape1264;

HAnimSite1260ZZZ.children[2] = Billboard1263;

HAnimSegment1231ZZZ.children[5] = HAnimSite1260;

let HAnimSite1267 = browser.currentScene.createNode("HAnimSite");
HAnimSite1267.name = "r_clavicale";
HAnimSite1267.DEF = "hanim_r_clavicale";
HAnimSite1267.translation = new X3D.SFVec3f([-0.0115,1.4943,0.04]);
let TouchSensor1268 = browser.currentScene.createNode("TouchSensor");
TouchSensor1268.description = "HAnimSite 19 r_clavicale";
HAnimSite1267YYY.children = new X3D.MFNode();

HAnimSite1267ZZZ.children[0] = TouchSensor1268;

let Shape1269 = browser.currentScene.createNode("Shape");
Shape1269.USE = "HAnimSiteShape";
HAnimSite1267ZZZ.children[1] = Shape1269;

let Billboard1270 = browser.currentScene.createNode("Billboard");
let Shape1271 = browser.currentScene.createNode("Shape");
let Text1272 = browser.currentScene.createNode("Text");
Text1272.string = new X3D.MFString([new X3D.SFString("19")]);
let FontStyle1273 = browser.currentScene.createNode("FontStyle");
FontStyle1273.size = 0.035;
fontStyle = FontStyle1273;

geometry = Text1272;

Billboard1270YYY.children = new X3D.MFNode();

Billboard1270ZZZ.children[0] = Shape1271;

HAnimSite1267ZZZ.children[2] = Billboard1270;

HAnimSegment1231ZZZ.children[6] = HAnimSite1267;

HAnimJoint1230YYY.children = new X3D.MFNode();

HAnimJoint1230ZZZ.children[0] = HAnimSegment1231;

let HAnimJoint1274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1274.name = "r_acromioclavicular";
HAnimJoint1274.DEF = "hanim_r_acromioclavicular";
HAnimJoint1274.center = new X3D.SFVec3f([-0.0836,1.4281,-0.0401]);
HAnimJoint1274.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1274.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1275.name = "r_scapula";
HAnimSegment1275.DEF = "hanim_r_scapula";
let Transform1276 = browser.currentScene.createNode("Transform");
Transform1276.translation = new X3D.SFVec3f([-0.0836,1.4281,-0.0401]);
let Transform1277 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1278 = browser.currentScene.createNode("Shape");
Shape1278.USE = "HAnimJointShape";
Transform1277YYY.child = new X3D.undefined();

Transform1277ZZZ.child[0] = Shape1278;

Transform1276YYY.children = new X3D.MFNode();

Transform1276ZZZ.children[0] = Transform1277;

HAnimSegment1275YYY.children = new X3D.MFNode();

HAnimSegment1275ZZZ.children[0] = Transform1276;

let Shape1279 = browser.currentScene.createNode("Shape");
let LineSet1280 = browser.currentScene.createNode("LineSet");
LineSet1280.vertexCount = new X3D.MFInt32([2]);
let Coordinate1281 = browser.currentScene.createNode("Coordinate");
Coordinate1281.point = new X3D.MFVec3f([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
coord = Coordinate1281;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA1282 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1282.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1282;

geometry = LineSet1280;

HAnimSegment1275ZZZ.children[1] = Shape1279;

HAnimJoint1274YYY.children = new X3D.MFNode();

HAnimJoint1274ZZZ.children[0] = HAnimSegment1275;

let HAnimJoint1283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1283.name = "r_shoulder";
HAnimJoint1283.DEF = "hanim_r_shoulder";
HAnimJoint1283.center = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
HAnimJoint1283.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1283.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1284.name = "r_upperarm";
HAnimSegment1284.DEF = "hanim_r_upperarm";
let Transform1285 = browser.currentScene.createNode("Transform");
Transform1285.translation = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
let Transform1286 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1287 = browser.currentScene.createNode("Shape");
Shape1287.USE = "HAnimJointShape";
Transform1286YYY.child = new X3D.undefined();

Transform1286ZZZ.child[0] = Shape1287;

Transform1285YYY.children = new X3D.MFNode();

Transform1285ZZZ.children[0] = Transform1286;

HAnimSegment1284YYY.children = new X3D.MFNode();

HAnimSegment1284ZZZ.children[0] = Transform1285;

let Shape1288 = browser.currentScene.createNode("Shape");
let LineSet1289 = browser.currentScene.createNode("LineSet");
LineSet1289.vertexCount = new X3D.MFInt32([2]);
let Coordinate1290 = browser.currentScene.createNode("Coordinate");
Coordinate1290.point = new X3D.MFVec3f([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
coord = Coordinate1290;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA1291 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1291.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1291;

geometry = LineSet1289;

HAnimSegment1284ZZZ.children[1] = Shape1288;

let HAnimSite1292 = browser.currentScene.createNode("HAnimSite");
HAnimSite1292.name = "r_bideltoid";
HAnimSite1292.DEF = "hanim_r_bideltoid";
let TouchSensor1293 = browser.currentScene.createNode("TouchSensor");
TouchSensor1293.description = "HAnimSite 97 r_bideltoid";
HAnimSite1292YYY.children = new X3D.MFNode();

HAnimSite1292ZZZ.children[0] = TouchSensor1293;

let Shape1294 = browser.currentScene.createNode("Shape");
Shape1294.USE = "HAnimSiteShape";
HAnimSite1292ZZZ.children[1] = Shape1294;

let Billboard1295 = browser.currentScene.createNode("Billboard");
let Shape1296 = browser.currentScene.createNode("Shape");
let Text1297 = browser.currentScene.createNode("Text");
Text1297.string = new X3D.MFString([new X3D.SFString("97")]);
let FontStyle1298 = browser.currentScene.createNode("FontStyle");
FontStyle1298.size = 0.035;
fontStyle = FontStyle1298;

geometry = Text1297;

Billboard1295YYY.children = new X3D.MFNode();

Billboard1295ZZZ.children[0] = Shape1296;

HAnimSite1292ZZZ.children[2] = Billboard1295;

HAnimSegment1284ZZZ.children[2] = HAnimSite1292;

let HAnimSite1299 = browser.currentScene.createNode("HAnimSite");
HAnimSite1299.name = "r_humeral_lateral_epicondyles";
HAnimSite1299.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite1299.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
let TouchSensor1300 = browser.currentScene.createNode("TouchSensor");
TouchSensor1300.description = "HAnimSite 66 r_humeral_lateral_epicondyles";
HAnimSite1299YYY.children = new X3D.MFNode();

HAnimSite1299ZZZ.children[0] = TouchSensor1300;

let Shape1301 = browser.currentScene.createNode("Shape");
Shape1301.USE = "HAnimSiteShape";
HAnimSite1299ZZZ.children[1] = Shape1301;

let Billboard1302 = browser.currentScene.createNode("Billboard");
let Shape1303 = browser.currentScene.createNode("Shape");
let Text1304 = browser.currentScene.createNode("Text");
Text1304.string = new X3D.MFString([new X3D.SFString("66")]);
let FontStyle1305 = browser.currentScene.createNode("FontStyle");
FontStyle1305.size = 0.035;
fontStyle = FontStyle1305;

geometry = Text1304;

Billboard1302YYY.children = new X3D.MFNode();

Billboard1302ZZZ.children[0] = Shape1303;

HAnimSite1299ZZZ.children[2] = Billboard1302;

HAnimSegment1284ZZZ.children[3] = HAnimSite1299;

HAnimJoint1283YYY.children = new X3D.MFNode();

HAnimJoint1283ZZZ.children[0] = HAnimSegment1284;

let HAnimJoint1306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1306.name = "r_elbow";
HAnimJoint1306.DEF = "hanim_r_elbow";
HAnimJoint1306.center = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
HAnimJoint1306.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1306.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1307 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1307.name = "r_forearm";
HAnimSegment1307.DEF = "hanim_r_forearm";
let Transform1308 = browser.currentScene.createNode("Transform");
Transform1308.translation = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
let Transform1309 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1310 = browser.currentScene.createNode("Shape");
Shape1310.USE = "HAnimJointShape";
Transform1309YYY.child = new X3D.undefined();

Transform1309ZZZ.child[0] = Shape1310;

Transform1308YYY.children = new X3D.MFNode();

Transform1308ZZZ.children[0] = Transform1309;

HAnimSegment1307YYY.children = new X3D.MFNode();

HAnimSegment1307ZZZ.children[0] = Transform1308;

let Shape1311 = browser.currentScene.createNode("Shape");
let LineSet1312 = browser.currentScene.createNode("LineSet");
LineSet1312.vertexCount = new X3D.MFInt32([2]);
let Coordinate1313 = browser.currentScene.createNode("Coordinate");
Coordinate1313.point = new X3D.MFVec3f([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
coord = Coordinate1313;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA1314 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1314.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1314;

geometry = LineSet1312;

HAnimSegment1307ZZZ.children[1] = Shape1311;

let HAnimSite1315 = browser.currentScene.createNode("HAnimSite");
HAnimSite1315.name = "r_humeral_medial_epicondyles";
HAnimSite1315.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite1315.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
let TouchSensor1316 = browser.currentScene.createNode("TouchSensor");
TouchSensor1316.description = "HAnimSite 67 r_humeral_medial_epicondyles";
HAnimSite1315YYY.children = new X3D.MFNode();

HAnimSite1315ZZZ.children[0] = TouchSensor1316;

let Shape1317 = browser.currentScene.createNode("Shape");
Shape1317.USE = "HAnimSiteShape";
HAnimSite1315ZZZ.children[1] = Shape1317;

let Billboard1318 = browser.currentScene.createNode("Billboard");
let Shape1319 = browser.currentScene.createNode("Shape");
let Text1320 = browser.currentScene.createNode("Text");
Text1320.string = new X3D.MFString([new X3D.SFString("67")]);
let FontStyle1321 = browser.currentScene.createNode("FontStyle");
FontStyle1321.size = 0.035;
fontStyle = FontStyle1321;

geometry = Text1320;

Billboard1318YYY.children = new X3D.MFNode();

Billboard1318ZZZ.children[0] = Shape1319;

HAnimSite1315ZZZ.children[2] = Billboard1318;

HAnimSegment1307ZZZ.children[2] = HAnimSite1315;

let HAnimSite1322 = browser.currentScene.createNode("HAnimSite");
HAnimSite1322.name = "r_olecranon";
HAnimSite1322.DEF = "hanim_r_olecranon";
HAnimSite1322.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
let TouchSensor1323 = browser.currentScene.createNode("TouchSensor");
TouchSensor1323.description = "HAnimSite 68 r_olecranon";
HAnimSite1322YYY.children = new X3D.MFNode();

HAnimSite1322ZZZ.children[0] = TouchSensor1323;

let Shape1324 = browser.currentScene.createNode("Shape");
Shape1324.USE = "HAnimSiteShape";
HAnimSite1322ZZZ.children[1] = Shape1324;

let Billboard1325 = browser.currentScene.createNode("Billboard");
let Shape1326 = browser.currentScene.createNode("Shape");
let Text1327 = browser.currentScene.createNode("Text");
Text1327.string = new X3D.MFString([new X3D.SFString("68")]);
let FontStyle1328 = browser.currentScene.createNode("FontStyle");
FontStyle1328.size = 0.035;
fontStyle = FontStyle1328;

geometry = Text1327;

Billboard1325YYY.children = new X3D.MFNode();

Billboard1325ZZZ.children[0] = Shape1326;

HAnimSite1322ZZZ.children[2] = Billboard1325;

HAnimSegment1307ZZZ.children[3] = HAnimSite1322;

let HAnimSite1329 = browser.currentScene.createNode("HAnimSite");
HAnimSite1329.name = "r_radial_styloid";
HAnimSite1329.DEF = "hanim_r_radial_styloid";
HAnimSite1329.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
let TouchSensor1330 = browser.currentScene.createNode("TouchSensor");
TouchSensor1330.description = "HAnimSite 74 r_radial_styloid";
HAnimSite1329YYY.children = new X3D.MFNode();

HAnimSite1329ZZZ.children[0] = TouchSensor1330;

let Shape1331 = browser.currentScene.createNode("Shape");
Shape1331.USE = "HAnimSiteShape";
HAnimSite1329ZZZ.children[1] = Shape1331;

let Billboard1332 = browser.currentScene.createNode("Billboard");
let Shape1333 = browser.currentScene.createNode("Shape");
let Text1334 = browser.currentScene.createNode("Text");
Text1334.string = new X3D.MFString([new X3D.SFString("74")]);
let FontStyle1335 = browser.currentScene.createNode("FontStyle");
FontStyle1335.size = 0.035;
fontStyle = FontStyle1335;

geometry = Text1334;

Billboard1332YYY.children = new X3D.MFNode();

Billboard1332ZZZ.children[0] = Shape1333;

HAnimSite1329ZZZ.children[2] = Billboard1332;

HAnimSegment1307ZZZ.children[4] = HAnimSite1329;

let HAnimSite1336 = browser.currentScene.createNode("HAnimSite");
HAnimSite1336.name = "r_radiale";
HAnimSite1336.DEF = "hanim_r_radiale";
HAnimSite1336.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
let TouchSensor1337 = browser.currentScene.createNode("TouchSensor");
TouchSensor1337.description = "HAnimSite 72 r_radiale";
HAnimSite1336YYY.children = new X3D.MFNode();

HAnimSite1336ZZZ.children[0] = TouchSensor1337;

let Shape1338 = browser.currentScene.createNode("Shape");
Shape1338.USE = "HAnimSiteShape";
HAnimSite1336ZZZ.children[1] = Shape1338;

let Billboard1339 = browser.currentScene.createNode("Billboard");
let Shape1340 = browser.currentScene.createNode("Shape");
let Text1341 = browser.currentScene.createNode("Text");
Text1341.string = new X3D.MFString([new X3D.SFString("72")]);
let FontStyle1342 = browser.currentScene.createNode("FontStyle");
FontStyle1342.size = 0.035;
fontStyle = FontStyle1342;

geometry = Text1341;

Billboard1339YYY.children = new X3D.MFNode();

Billboard1339ZZZ.children[0] = Shape1340;

HAnimSite1336ZZZ.children[2] = Billboard1339;

HAnimSegment1307ZZZ.children[5] = HAnimSite1336;

HAnimJoint1306YYY.children = new X3D.MFNode();

HAnimJoint1306ZZZ.children[0] = HAnimSegment1307;

let HAnimJoint1343 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1343.name = "r_radiocarpal";
HAnimJoint1343.DEF = "hanim_r_radiocarpal";
HAnimJoint1343.center = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
HAnimJoint1343.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1343.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1344 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1344.name = "r_carpal";
HAnimSegment1344.DEF = "hanim_r_carpal";
let Transform1345 = browser.currentScene.createNode("Transform");
Transform1345.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
Transform1345.translation = new X3D.SFVec3f([-0.2,0.85,-0.05]);
Transform1345.rotation = new X3D.SFRotation([0,0,1,-3.14]);
//Transform right hand
let Transform1346 = browser.currentScene.createNode("Transform");
Transform1346.rotation = new X3D.SFRotation([0,1,0,1.57]);
//Transform right hand
let Shape1347 = browser.currentScene.createNode("Shape");
Shape1347.USE = "HAnimJointShape";
Transform1346YYY.child = new X3D.undefined();

Transform1346ZZZ.child[0] = Shape1347;

Transform1345YYY.children = new X3D.MFNode();

Transform1345ZZZ.children[0] = Transform1346;

HAnimSegment1344YYY.children = new X3D.MFNode();

HAnimSegment1344ZZZ.children[0] = Transform1345;

let Shape1348 = browser.currentScene.createNode("Shape");
let LineSet1349 = browser.currentScene.createNode("LineSet");
LineSet1349.vertexCount = new X3D.MFInt32([2]);
let Coordinate1350 = browser.currentScene.createNode("Coordinate");
Coordinate1350.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
coord = Coordinate1350;

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
let ColorRGBA1351 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1351.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1351;

geometry = LineSet1349;

HAnimSegment1344ZZZ.children[1] = Shape1348;

let HAnimSite1352 = browser.currentScene.createNode("HAnimSite");
HAnimSite1352.name = "r_ulnar_styloid";
HAnimSite1352.DEF = "hanim_r_ulnar_styloid";
HAnimSite1352.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
let TouchSensor1353 = browser.currentScene.createNode("TouchSensor");
TouchSensor1353.description = "HAnimSite 73 r_ulnar_styloid";
HAnimSite1352YYY.children = new X3D.MFNode();

HAnimSite1352ZZZ.children[0] = TouchSensor1353;

let Shape1354 = browser.currentScene.createNode("Shape");
Shape1354.USE = "HAnimSiteShape";
HAnimSite1352ZZZ.children[1] = Shape1354;

let Billboard1355 = browser.currentScene.createNode("Billboard");
let Shape1356 = browser.currentScene.createNode("Shape");
let Text1357 = browser.currentScene.createNode("Text");
Text1357.string = new X3D.MFString([new X3D.SFString("73")]);
let FontStyle1358 = browser.currentScene.createNode("FontStyle");
FontStyle1358.size = 0.035;
fontStyle = FontStyle1358;

geometry = Text1357;

Billboard1355YYY.children = new X3D.MFNode();

Billboard1355ZZZ.children[0] = Shape1356;

HAnimSite1352ZZZ.children[2] = Billboard1355;

HAnimSegment1344ZZZ.children[2] = HAnimSite1352;

let Shape1359 = browser.currentScene.createNode("Shape");
let LineSet1360 = browser.currentScene.createNode("LineSet");
LineSet1360.vertexCount = new X3D.MFInt32([2]);
let Coordinate1361 = browser.currentScene.createNode("Coordinate");
Coordinate1361.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
coord = Coordinate1361;

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
let ColorRGBA1362 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1362.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1362;

geometry = LineSet1360;

HAnimSegment1344ZZZ.children[3] = Shape1359;

let Shape1363 = browser.currentScene.createNode("Shape");
let LineSet1364 = browser.currentScene.createNode("LineSet");
LineSet1364.vertexCount = new X3D.MFInt32([2]);
let Coordinate1365 = browser.currentScene.createNode("Coordinate");
Coordinate1365.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
coord = Coordinate1365;

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
let ColorRGBA1366 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1366.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1366;

geometry = LineSet1364;

HAnimSegment1344ZZZ.children[4] = Shape1363;

let Shape1367 = browser.currentScene.createNode("Shape");
let LineSet1368 = browser.currentScene.createNode("LineSet");
LineSet1368.vertexCount = new X3D.MFInt32([2]);
let Coordinate1369 = browser.currentScene.createNode("Coordinate");
Coordinate1369.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
coord = Coordinate1369;

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
let ColorRGBA1370 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1370.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1370;

geometry = LineSet1368;

HAnimSegment1344ZZZ.children[5] = Shape1367;

let Shape1371 = browser.currentScene.createNode("Shape");
let LineSet1372 = browser.currentScene.createNode("LineSet");
LineSet1372.vertexCount = new X3D.MFInt32([2]);
let Coordinate1373 = browser.currentScene.createNode("Coordinate");
Coordinate1373.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
coord = Coordinate1373;

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
let ColorRGBA1374 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1374.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1374;

geometry = LineSet1372;

HAnimSegment1344ZZZ.children[6] = Shape1371;

HAnimJoint1343YYY.children = new X3D.MFNode();

HAnimJoint1343ZZZ.children[0] = HAnimSegment1344;

let HAnimJoint1375 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1375.name = "r_carpometacarpal_1";
HAnimJoint1375.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1375.center = new X3D.SFVec3f([-0.1899,0.8502,-0.0473]);
HAnimJoint1375.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1375.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1376 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1376.name = "r_metacarpal_1";
HAnimSegment1376.DEF = "hanim_r_metacarpal_1";
let Transform1377 = browser.currentScene.createNode("Transform");
Transform1377.translation = new X3D.SFVec3f([-0.1899,0.8502,-0.0473]);
let Transform1378 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1379 = browser.currentScene.createNode("Shape");
Shape1379.USE = "HAnimJointShape";
Transform1378YYY.child = new X3D.undefined();

Transform1378ZZZ.child[0] = Shape1379;

Transform1377YYY.children = new X3D.MFNode();

Transform1377ZZZ.children[0] = Transform1378;

HAnimSegment1376YYY.children = new X3D.MFNode();

HAnimSegment1376ZZZ.children[0] = Transform1377;

let Shape1380 = browser.currentScene.createNode("Shape");
let LineSet1381 = browser.currentScene.createNode("LineSet");
LineSet1381.vertexCount = new X3D.MFInt32([2]);
let Coordinate1382 = browser.currentScene.createNode("Coordinate");
Coordinate1382.point = new X3D.MFVec3f([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
coord = Coordinate1382;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA1383 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1383.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1383;

geometry = LineSet1381;

HAnimSegment1376ZZZ.children[1] = Shape1380;

HAnimJoint1375YYY.children = new X3D.MFNode();

HAnimJoint1375ZZZ.children[0] = HAnimSegment1376;

let HAnimJoint1384 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1384.name = "r_metacarpophalangeal_1";
HAnimJoint1384.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1384.center = new X3D.SFVec3f([-0.1874,0.8256,0.0306]);
HAnimJoint1384.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1384.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1385 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1385.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1385.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform1386 = browser.currentScene.createNode("Transform");
Transform1386.translation = new X3D.SFVec3f([-0.1874,0.8256,0.0306]);
let Transform1387 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1388 = browser.currentScene.createNode("Shape");
Shape1388.USE = "HAnimJointShape";
Transform1387YYY.child = new X3D.undefined();

Transform1387ZZZ.child[0] = Shape1388;

Transform1386YYY.children = new X3D.MFNode();

Transform1386ZZZ.children[0] = Transform1387;

HAnimSegment1385YYY.children = new X3D.MFNode();

HAnimSegment1385ZZZ.children[0] = Transform1386;

let Shape1389 = browser.currentScene.createNode("Shape");
let LineSet1390 = browser.currentScene.createNode("LineSet");
LineSet1390.vertexCount = new X3D.MFInt32([2]);
let Coordinate1391 = browser.currentScene.createNode("Coordinate");
Coordinate1391.point = new X3D.MFVec3f([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
coord = Coordinate1391;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA1392 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1392.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1392;

geometry = LineSet1390;

HAnimSegment1385ZZZ.children[1] = Shape1389;

HAnimJoint1384YYY.children = new X3D.MFNode();

HAnimJoint1384ZZZ.children[0] = HAnimSegment1385;

let HAnimJoint1393 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1393.name = "r_carpal_interphalangeal_1";
HAnimJoint1393.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1393.center = new X3D.SFVec3f([-0.1864,0.819,0.0506]);
HAnimJoint1393.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1393.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1384ZZZ.children[1] = HAnimJoint1393;

HAnimJoint1375ZZZ.children[1] = HAnimJoint1384;

HAnimJoint1343ZZZ.children[1] = HAnimJoint1375;

let HAnimJoint1394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1394.name = "r_carpometacarpal_2";
HAnimJoint1394.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1394.center = new X3D.SFVec3f([-0.1961,0.8055,-0.0218]);
HAnimJoint1394.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1394.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1395 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1395.name = "r_metacarpal_2";
HAnimSegment1395.DEF = "hanim_r_metacarpal_2";
let Transform1396 = browser.currentScene.createNode("Transform");
Transform1396.translation = new X3D.SFVec3f([-0.1961,0.8055,-0.0218]);
let Transform1397 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1398 = browser.currentScene.createNode("Shape");
Shape1398.USE = "HAnimJointShape";
Transform1397YYY.child = new X3D.undefined();

Transform1397ZZZ.child[0] = Shape1398;

Transform1396YYY.children = new X3D.MFNode();

Transform1396ZZZ.children[0] = Transform1397;

HAnimSegment1395YYY.children = new X3D.MFNode();

HAnimSegment1395ZZZ.children[0] = Transform1396;

let Shape1399 = browser.currentScene.createNode("Shape");
let LineSet1400 = browser.currentScene.createNode("LineSet");
LineSet1400.vertexCount = new X3D.MFInt32([2]);
let Coordinate1401 = browser.currentScene.createNode("Coordinate");
Coordinate1401.point = new X3D.MFVec3f([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
coord = Coordinate1401;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA1402 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1402.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1402;

geometry = LineSet1400;

HAnimSegment1395ZZZ.children[1] = Shape1399;

let HAnimSite1403 = browser.currentScene.createNode("HAnimSite");
HAnimSite1403.name = "r_metacarpal_phalanx_2";
HAnimSite1403.DEF = "hanim_r_metacarpal_phalanx_2";
HAnimSite1403.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
let TouchSensor1404 = browser.currentScene.createNode("TouchSensor");
TouchSensor1404.description = "HAnimSite 78 r_metacarpal_phalanx_2";
HAnimSite1403YYY.children = new X3D.MFNode();

HAnimSite1403ZZZ.children[0] = TouchSensor1404;

let Shape1405 = browser.currentScene.createNode("Shape");
Shape1405.USE = "HAnimSiteShape";
HAnimSite1403ZZZ.children[1] = Shape1405;

let Billboard1406 = browser.currentScene.createNode("Billboard");
let Shape1407 = browser.currentScene.createNode("Shape");
let Text1408 = browser.currentScene.createNode("Text");
Text1408.string = new X3D.MFString([new X3D.SFString("78")]);
let FontStyle1409 = browser.currentScene.createNode("FontStyle");
FontStyle1409.size = 0.035;
fontStyle = FontStyle1409;

geometry = Text1408;

Billboard1406YYY.children = new X3D.MFNode();

Billboard1406ZZZ.children[0] = Shape1407;

HAnimSite1403ZZZ.children[2] = Billboard1406;

HAnimSegment1395ZZZ.children[2] = HAnimSite1403;

HAnimJoint1394YYY.children = new X3D.MFNode();

HAnimJoint1394ZZZ.children[0] = HAnimSegment1395;

let HAnimJoint1410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1410.name = "r_metacarpophalangeal_2";
HAnimJoint1410.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1410.center = new X3D.SFVec3f([-0.1961,0.7846,-0.0218]);
HAnimJoint1410.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1410.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1411 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1411.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1411.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform1412 = browser.currentScene.createNode("Transform");
Transform1412.translation = new X3D.SFVec3f([-0.1961,0.7846,-0.0218]);
let Transform1413 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1414 = browser.currentScene.createNode("Shape");
Shape1414.USE = "HAnimJointShape";
Transform1413YYY.child = new X3D.undefined();

Transform1413ZZZ.child[0] = Shape1414;

Transform1412YYY.children = new X3D.MFNode();

Transform1412ZZZ.children[0] = Transform1413;

HAnimSegment1411YYY.children = new X3D.MFNode();

HAnimSegment1411ZZZ.children[0] = Transform1412;

let Shape1415 = browser.currentScene.createNode("Shape");
let LineSet1416 = browser.currentScene.createNode("LineSet");
LineSet1416.vertexCount = new X3D.MFInt32([2]);
let Coordinate1417 = browser.currentScene.createNode("Coordinate");
Coordinate1417.point = new X3D.MFVec3f([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
coord = Coordinate1417;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1418 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1418.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1418;

geometry = LineSet1416;

HAnimSegment1411ZZZ.children[1] = Shape1415;

HAnimJoint1410YYY.children = new X3D.MFNode();

HAnimJoint1410ZZZ.children[0] = HAnimSegment1411;

let HAnimJoint1419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1419.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1419.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1419.center = new X3D.SFVec3f([-0.1954,0.7393,-0.0185]);
HAnimJoint1419.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1419.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1420 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1420.name = "r_carpal_middle_phalanx_2";
HAnimSegment1420.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform1421 = browser.currentScene.createNode("Transform");
Transform1421.translation = new X3D.SFVec3f([-0.1954,0.7393,-0.0185]);
let Transform1422 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1423 = browser.currentScene.createNode("Shape");
Shape1423.USE = "HAnimJointShape";
Transform1422YYY.child = new X3D.undefined();

Transform1422ZZZ.child[0] = Shape1423;

Transform1421YYY.children = new X3D.MFNode();

Transform1421ZZZ.children[0] = Transform1422;

HAnimSegment1420YYY.children = new X3D.MFNode();

HAnimSegment1420ZZZ.children[0] = Transform1421;

let Shape1424 = browser.currentScene.createNode("Shape");
let LineSet1425 = browser.currentScene.createNode("LineSet");
LineSet1425.vertexCount = new X3D.MFInt32([2]);
let Coordinate1426 = browser.currentScene.createNode("Coordinate");
Coordinate1426.point = new X3D.MFVec3f([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
coord = Coordinate1426;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1427 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1427.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1427;

geometry = LineSet1425;

HAnimSegment1420ZZZ.children[1] = Shape1424;

HAnimJoint1419YYY.children = new X3D.MFNode();

HAnimJoint1419ZZZ.children[0] = HAnimSegment1420;

let HAnimJoint1428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1428.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1428.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1428.center = new X3D.SFVec3f([-0.1945,0.7169,-0.0173]);
HAnimJoint1428.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1428.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1419ZZZ.children[1] = HAnimJoint1428;

HAnimJoint1410ZZZ.children[1] = HAnimJoint1419;

HAnimJoint1394ZZZ.children[1] = HAnimJoint1410;

HAnimJoint1343ZZZ.children[2] = HAnimJoint1394;

let HAnimJoint1429 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1429.name = "r_carpometacarpal_3";
HAnimJoint1429.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1429.center = new X3D.SFVec3f([-0.1972,0.806,-0.0468]);
HAnimJoint1429.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1429.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1430 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1430.name = "r_metacarpal_3";
HAnimSegment1430.DEF = "hanim_r_metacarpal_3";
let Transform1431 = browser.currentScene.createNode("Transform");
Transform1431.translation = new X3D.SFVec3f([-0.1972,0.806,-0.0468]);
let Transform1432 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1433 = browser.currentScene.createNode("Shape");
Shape1433.USE = "HAnimJointShape";
Transform1432YYY.child = new X3D.undefined();

Transform1432ZZZ.child[0] = Shape1433;

Transform1431YYY.children = new X3D.MFNode();

Transform1431ZZZ.children[0] = Transform1432;

HAnimSegment1430YYY.children = new X3D.MFNode();

HAnimSegment1430ZZZ.children[0] = Transform1431;

let Shape1434 = browser.currentScene.createNode("Shape");
let LineSet1435 = browser.currentScene.createNode("LineSet");
LineSet1435.vertexCount = new X3D.MFInt32([2]);
let Coordinate1436 = browser.currentScene.createNode("Coordinate");
Coordinate1436.point = new X3D.MFVec3f([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
coord = Coordinate1436;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA1437 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1437.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1437;

geometry = LineSet1435;

HAnimSegment1430ZZZ.children[1] = Shape1434;

let HAnimSite1438 = browser.currentScene.createNode("HAnimSite");
HAnimSite1438.name = "r_metacarpal_phalanx_3";
HAnimSite1438.DEF = "hanim_r_metacarpal_phalanx_3";
let TouchSensor1439 = browser.currentScene.createNode("TouchSensor");
TouchSensor1439.description = "HAnimSite 79 r_metacarpal_phalanx_3";
HAnimSite1438YYY.children = new X3D.MFNode();

HAnimSite1438ZZZ.children[0] = TouchSensor1439;

let Shape1440 = browser.currentScene.createNode("Shape");
Shape1440.USE = "HAnimSiteShape";
HAnimSite1438ZZZ.children[1] = Shape1440;

let Billboard1441 = browser.currentScene.createNode("Billboard");
let Shape1442 = browser.currentScene.createNode("Shape");
let Text1443 = browser.currentScene.createNode("Text");
Text1443.string = new X3D.MFString([new X3D.SFString("79")]);
let FontStyle1444 = browser.currentScene.createNode("FontStyle");
FontStyle1444.size = 0.035;
fontStyle = FontStyle1444;

geometry = Text1443;

Billboard1441YYY.children = new X3D.MFNode();

Billboard1441ZZZ.children[0] = Shape1442;

HAnimSite1438ZZZ.children[2] = Billboard1441;

HAnimSegment1430ZZZ.children[2] = HAnimSite1438;

HAnimJoint1429YYY.children = new X3D.MFNode();

HAnimJoint1429ZZZ.children[0] = HAnimSegment1430;

let HAnimJoint1445 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1445.name = "r_metacarpophalangeal_3";
HAnimJoint1445.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1445.center = new X3D.SFVec3f([-0.1972,0.7849,-0.0468]);
HAnimJoint1445.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1445.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1446 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1446.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1446.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform1447 = browser.currentScene.createNode("Transform");
Transform1447.translation = new X3D.SFVec3f([-0.1972,0.7849,-0.0468]);
let Transform1448 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1449 = browser.currentScene.createNode("Shape");
Shape1449.USE = "HAnimJointShape";
Transform1448YYY.child = new X3D.undefined();

Transform1448ZZZ.child[0] = Shape1449;

Transform1447YYY.children = new X3D.MFNode();

Transform1447ZZZ.children[0] = Transform1448;

HAnimSegment1446YYY.children = new X3D.MFNode();

HAnimSegment1446ZZZ.children[0] = Transform1447;

let Shape1450 = browser.currentScene.createNode("Shape");
let LineSet1451 = browser.currentScene.createNode("LineSet");
LineSet1451.vertexCount = new X3D.MFInt32([2]);
let Coordinate1452 = browser.currentScene.createNode("Coordinate");
Coordinate1452.point = new X3D.MFVec3f([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
coord = Coordinate1452;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1453 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1453.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1453;

geometry = LineSet1451;

HAnimSegment1446ZZZ.children[1] = Shape1450;

HAnimJoint1445YYY.children = new X3D.MFNode();

HAnimJoint1445ZZZ.children[0] = HAnimSegment1446;

let HAnimJoint1454 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1454.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1454.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1454.center = new X3D.SFVec3f([-0.195,0.7304,-0.0441]);
HAnimJoint1454.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1454.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1455 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1455.name = "r_carpal_middle_phalanx_3";
HAnimSegment1455.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform1456 = browser.currentScene.createNode("Transform");
Transform1456.translation = new X3D.SFVec3f([-0.195,0.7304,-0.0441]);
let Transform1457 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1458 = browser.currentScene.createNode("Shape");
Shape1458.USE = "HAnimJointShape";
Transform1457YYY.child = new X3D.undefined();

Transform1457ZZZ.child[0] = Shape1458;

Transform1456YYY.children = new X3D.MFNode();

Transform1456ZZZ.children[0] = Transform1457;

HAnimSegment1455YYY.children = new X3D.MFNode();

HAnimSegment1455ZZZ.children[0] = Transform1456;

let Shape1459 = browser.currentScene.createNode("Shape");
let LineSet1460 = browser.currentScene.createNode("LineSet");
LineSet1460.vertexCount = new X3D.MFInt32([2]);
let Coordinate1461 = browser.currentScene.createNode("Coordinate");
Coordinate1461.point = new X3D.MFVec3f([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
coord = Coordinate1461;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1462 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1462.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1462;

geometry = LineSet1460;

HAnimSegment1455ZZZ.children[1] = Shape1459;

HAnimJoint1454YYY.children = new X3D.MFNode();

HAnimJoint1454ZZZ.children[0] = HAnimSegment1455;

let HAnimJoint1463 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1463.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1463.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1463.center = new X3D.SFVec3f([-0.1939,0.7042,-0.0432]);
HAnimJoint1463.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1463.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1454ZZZ.children[1] = HAnimJoint1463;

HAnimJoint1445ZZZ.children[1] = HAnimJoint1454;

HAnimJoint1429ZZZ.children[1] = HAnimJoint1445;

HAnimJoint1343ZZZ.children[3] = HAnimJoint1429;

let HAnimJoint1464 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1464.name = "r_carpometacarpal_4";
HAnimJoint1464.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1464.center = new X3D.SFVec3f([-0.1951,0.8049,-0.0732]);
HAnimJoint1464.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1464.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1465 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1465.name = "r_metacarpal_4";
HAnimSegment1465.DEF = "hanim_r_metacarpal_4";
let Transform1466 = browser.currentScene.createNode("Transform");
Transform1466.translation = new X3D.SFVec3f([-0.1951,0.8049,-0.0732]);
let Transform1467 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1468 = browser.currentScene.createNode("Shape");
Shape1468.USE = "HAnimJointShape";
Transform1467YYY.child = new X3D.undefined();

Transform1467ZZZ.child[0] = Shape1468;

Transform1466YYY.children = new X3D.MFNode();

Transform1466ZZZ.children[0] = Transform1467;

HAnimSegment1465YYY.children = new X3D.MFNode();

HAnimSegment1465ZZZ.children[0] = Transform1466;

let Shape1469 = browser.currentScene.createNode("Shape");
let LineSet1470 = browser.currentScene.createNode("LineSet");
LineSet1470.vertexCount = new X3D.MFInt32([2]);
let Coordinate1471 = browser.currentScene.createNode("Coordinate");
Coordinate1471.point = new X3D.MFVec3f([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
coord = Coordinate1471;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA1472 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1472.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1472;

geometry = LineSet1470;

HAnimSegment1465ZZZ.children[1] = Shape1469;

HAnimJoint1464YYY.children = new X3D.MFNode();

HAnimJoint1464ZZZ.children[0] = HAnimSegment1465;

let HAnimJoint1473 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1473.name = "r_metacarpophalangeal_4";
HAnimJoint1473.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1473.center = new X3D.SFVec3f([-0.1951,0.7845,-0.0732]);
HAnimJoint1473.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1473.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1474.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1474.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform1475 = browser.currentScene.createNode("Transform");
Transform1475.translation = new X3D.SFVec3f([-0.1951,0.7845,-0.0732]);
let Transform1476 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1477 = browser.currentScene.createNode("Shape");
Shape1477.USE = "HAnimJointShape";
Transform1476YYY.child = new X3D.undefined();

Transform1476ZZZ.child[0] = Shape1477;

Transform1475YYY.children = new X3D.MFNode();

Transform1475ZZZ.children[0] = Transform1476;

HAnimSegment1474YYY.children = new X3D.MFNode();

HAnimSegment1474ZZZ.children[0] = Transform1475;

let Shape1478 = browser.currentScene.createNode("Shape");
let LineSet1479 = browser.currentScene.createNode("LineSet");
LineSet1479.vertexCount = new X3D.MFInt32([2]);
let Coordinate1480 = browser.currentScene.createNode("Coordinate");
Coordinate1480.point = new X3D.MFVec3f([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
coord = Coordinate1480;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1481 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1481.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1481;

geometry = LineSet1479;

HAnimSegment1474ZZZ.children[1] = Shape1478;

HAnimJoint1473YYY.children = new X3D.MFNode();

HAnimJoint1473ZZZ.children[0] = HAnimSegment1474;

let HAnimJoint1482 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1482.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1482.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1482.center = new X3D.SFVec3f([-0.192,0.7318,-0.0716]);
HAnimJoint1482.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1482.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1483 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1483.name = "r_carpal_middle_phalanx_4";
HAnimSegment1483.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform1484 = browser.currentScene.createNode("Transform");
Transform1484.translation = new X3D.SFVec3f([-0.192,0.7318,-0.0716]);
let Transform1485 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1486 = browser.currentScene.createNode("Shape");
Shape1486.USE = "HAnimJointShape";
Transform1485YYY.child = new X3D.undefined();

Transform1485ZZZ.child[0] = Shape1486;

Transform1484YYY.children = new X3D.MFNode();

Transform1484ZZZ.children[0] = Transform1485;

HAnimSegment1483YYY.children = new X3D.MFNode();

HAnimSegment1483ZZZ.children[0] = Transform1484;

let Shape1487 = browser.currentScene.createNode("Shape");
let LineSet1488 = browser.currentScene.createNode("LineSet");
LineSet1488.vertexCount = new X3D.MFInt32([2]);
let Coordinate1489 = browser.currentScene.createNode("Coordinate");
Coordinate1489.point = new X3D.MFVec3f([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
coord = Coordinate1489;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1490 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1490.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1490;

geometry = LineSet1488;

HAnimSegment1483ZZZ.children[1] = Shape1487;

HAnimJoint1482YYY.children = new X3D.MFNode();

HAnimJoint1482ZZZ.children[0] = HAnimSegment1483;

let HAnimJoint1491 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1491.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1491.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1491.center = new X3D.SFVec3f([-0.1908,0.7077,-0.0706]);
HAnimJoint1491.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1491.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1482ZZZ.children[1] = HAnimJoint1491;

HAnimJoint1473ZZZ.children[1] = HAnimJoint1482;

HAnimJoint1464ZZZ.children[1] = HAnimJoint1473;

HAnimJoint1343ZZZ.children[4] = HAnimJoint1464;

let HAnimJoint1492 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1492.name = "r_carpometacarpal_5";
HAnimJoint1492.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1492.center = new X3D.SFVec3f([-0.1926,0.8096,-0.0975]);
HAnimJoint1492.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1492.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1493 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1493.name = "r_metacarpal_5";
HAnimSegment1493.DEF = "hanim_r_metacarpal_5";
let Transform1494 = browser.currentScene.createNode("Transform");
Transform1494.translation = new X3D.SFVec3f([-0.1926,0.8096,-0.0975]);
let Transform1495 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1496 = browser.currentScene.createNode("Shape");
Shape1496.USE = "HAnimJointShape";
Transform1495YYY.child = new X3D.undefined();

Transform1495ZZZ.child[0] = Shape1496;

Transform1494YYY.children = new X3D.MFNode();

Transform1494ZZZ.children[0] = Transform1495;

HAnimSegment1493YYY.children = new X3D.MFNode();

HAnimSegment1493ZZZ.children[0] = Transform1494;

let Shape1497 = browser.currentScene.createNode("Shape");
let LineSet1498 = browser.currentScene.createNode("LineSet");
LineSet1498.vertexCount = new X3D.MFInt32([2]);
let Coordinate1499 = browser.currentScene.createNode("Coordinate");
Coordinate1499.point = new X3D.MFVec3f([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
coord = Coordinate1499;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA1500 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1500.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1500;

geometry = LineSet1498;

HAnimSegment1493ZZZ.children[1] = Shape1497;

let HAnimSite1501 = browser.currentScene.createNode("HAnimSite");
HAnimSite1501.name = "r_metacarpal_phalanx_5";
HAnimSite1501.DEF = "hanim_r_metacarpal_phalanx_5";
HAnimSite1501.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
let TouchSensor1502 = browser.currentScene.createNode("TouchSensor");
TouchSensor1502.description = "HAnimSite 80 r_metacarpal_phalanx_5";
HAnimSite1501YYY.children = new X3D.MFNode();

HAnimSite1501ZZZ.children[0] = TouchSensor1502;

let Shape1503 = browser.currentScene.createNode("Shape");
Shape1503.USE = "HAnimSiteShape";
HAnimSite1501ZZZ.children[1] = Shape1503;

let Billboard1504 = browser.currentScene.createNode("Billboard");
let Shape1505 = browser.currentScene.createNode("Shape");
let Text1506 = browser.currentScene.createNode("Text");
Text1506.string = new X3D.MFString([new X3D.SFString("80")]);
let FontStyle1507 = browser.currentScene.createNode("FontStyle");
FontStyle1507.size = 0.035;
fontStyle = FontStyle1507;

geometry = Text1506;

Billboard1504YYY.children = new X3D.MFNode();

Billboard1504ZZZ.children[0] = Shape1505;

HAnimSite1501ZZZ.children[2] = Billboard1504;

HAnimSegment1493ZZZ.children[2] = HAnimSite1501;

HAnimJoint1492YYY.children = new X3D.MFNode();

HAnimJoint1492ZZZ.children[0] = HAnimSegment1493;

let HAnimJoint1508 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1508.name = "r_metacarpophalangeal_5";
HAnimJoint1508.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1508.center = new X3D.SFVec3f([-0.1926,0.7896,-0.0975]);
HAnimJoint1508.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1508.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1509.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1509.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform1510 = browser.currentScene.createNode("Transform");
Transform1510.translation = new X3D.SFVec3f([-0.1926,0.7896,-0.0975]);
let Transform1511 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1512 = browser.currentScene.createNode("Shape");
Shape1512.USE = "HAnimJointShape";
Transform1511YYY.child = new X3D.undefined();

Transform1511ZZZ.child[0] = Shape1512;

Transform1510YYY.children = new X3D.MFNode();

Transform1510ZZZ.children[0] = Transform1511;

HAnimSegment1509YYY.children = new X3D.MFNode();

HAnimSegment1509ZZZ.children[0] = Transform1510;

let Shape1513 = browser.currentScene.createNode("Shape");
let LineSet1514 = browser.currentScene.createNode("LineSet");
LineSet1514.vertexCount = new X3D.MFInt32([2]);
let Coordinate1515 = browser.currentScene.createNode("Coordinate");
Coordinate1515.point = new X3D.MFVec3f([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
coord = Coordinate1515;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1516 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1516.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1516;

geometry = LineSet1514;

HAnimSegment1509ZZZ.children[1] = Shape1513;

HAnimJoint1508YYY.children = new X3D.MFNode();

HAnimJoint1508ZZZ.children[0] = HAnimSegment1509;

let HAnimJoint1517 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1517.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1517.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1517.center = new X3D.SFVec3f([-0.1902,0.7483,-0.0963]);
HAnimJoint1517.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1517.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1518 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1518.name = "r_carpal_middle_phalanx_5";
HAnimSegment1518.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform1519 = browser.currentScene.createNode("Transform");
Transform1519.translation = new X3D.SFVec3f([-0.1902,0.7483,-0.0963]);
let Transform1520 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1521 = browser.currentScene.createNode("Shape");
Shape1521.USE = "HAnimJointShape";
Transform1520YYY.child = new X3D.undefined();

Transform1520ZZZ.child[0] = Shape1521;

Transform1519YYY.children = new X3D.MFNode();

Transform1519ZZZ.children[0] = Transform1520;

HAnimSegment1518YYY.children = new X3D.MFNode();

HAnimSegment1518ZZZ.children[0] = Transform1519;

let Shape1522 = browser.currentScene.createNode("Shape");
let LineSet1523 = browser.currentScene.createNode("LineSet");
LineSet1523.vertexCount = new X3D.MFInt32([2]);
let Coordinate1524 = browser.currentScene.createNode("Coordinate");
Coordinate1524.point = new X3D.MFVec3f([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
coord = Coordinate1524;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1525 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1525.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1525;

geometry = LineSet1523;

HAnimSegment1518ZZZ.children[1] = Shape1522;

HAnimJoint1517YYY.children = new X3D.MFNode();

HAnimJoint1517ZZZ.children[0] = HAnimSegment1518;

let HAnimJoint1526 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1526.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1526.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1526.center = new X3D.SFVec3f([-0.1908,0.754,-0.096]);
HAnimJoint1526.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1526.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1517ZZZ.children[1] = HAnimJoint1526;

HAnimJoint1508ZZZ.children[1] = HAnimJoint1517;

HAnimJoint1492ZZZ.children[1] = HAnimJoint1508;

HAnimJoint1343ZZZ.children[5] = HAnimJoint1492;

HAnimJoint1306ZZZ.children[1] = HAnimJoint1343;

HAnimJoint1283ZZZ.children[1] = HAnimJoint1306;

HAnimJoint1274ZZZ.children[1] = HAnimJoint1283;

HAnimJoint1230ZZZ.children[1] = HAnimJoint1274;

HAnimJoint701ZZZ.children[3] = HAnimJoint1230;

HAnimJoint692ZZZ.children[1] = HAnimJoint701;

HAnimJoint683ZZZ.children[1] = HAnimJoint692;

HAnimJoint674ZZZ.children[1] = HAnimJoint683;

HAnimJoint658ZZZ.children[1] = HAnimJoint674;

HAnimJoint621ZZZ.children[1] = HAnimJoint658;

HAnimJoint612ZZZ.children[1] = HAnimJoint621;

HAnimJoint603ZZZ.children[1] = HAnimJoint612;

HAnimJoint580ZZZ.children[1] = HAnimJoint603;

HAnimJoint564ZZZ.children[1] = HAnimJoint580;

HAnimJoint555ZZZ.children[1] = HAnimJoint564;

HAnimJoint546ZZZ.children[1] = HAnimJoint555;

HAnimJoint537ZZZ.children[1] = HAnimJoint546;

HAnimJoint507ZZZ.children[1] = HAnimJoint537;

HAnimJoint498ZZZ.children[1] = HAnimJoint507;

HAnimJoint489ZZZ.children[1] = HAnimJoint498;

HAnimJoint459ZZZ.children[1] = HAnimJoint489;

HAnimJoint47ZZZ.children[2] = HAnimJoint459;

joints[1] = HAnimJoint47;

let HAnimJoint1527 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1527.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint1527;

let HAnimJoint1528 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1528.USE = "hanim_sacroiliac";
joints[3] = HAnimJoint1528;

let HAnimJoint1529 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1529.USE = "hanim_l_hip";
joints[4] = HAnimJoint1529;

let HAnimJoint1530 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1530.USE = "hanim_l_knee";
joints[5] = HAnimJoint1530;

let HAnimJoint1531 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1531.USE = "hanim_l_talocrural";
joints[6] = HAnimJoint1531;

let HAnimJoint1532 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1532.USE = "hanim_l_tarsometatarsal_2";
joints[7] = HAnimJoint1532;

let HAnimJoint1533 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1533.USE = "hanim_l_metatarsophalangeal_2";
joints[8] = HAnimJoint1533;

let HAnimJoint1534 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1534.USE = "hanim_l_tarsal_distal_interphalangeal_2";
joints[9] = HAnimJoint1534;

let HAnimJoint1535 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1535.USE = "hanim_r_hip";
joints[10] = HAnimJoint1535;

let HAnimJoint1536 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1536.USE = "hanim_r_knee";
joints[11] = HAnimJoint1536;

let HAnimJoint1537 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1537.USE = "hanim_r_talocrural";
joints[12] = HAnimJoint1537;

let HAnimJoint1538 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1538.USE = "hanim_r_tarsometatarsal_2";
joints[13] = HAnimJoint1538;

let HAnimJoint1539 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1539.USE = "hanim_r_metatarsophalangeal_2";
joints[14] = HAnimJoint1539;

let HAnimJoint1540 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1540.USE = "hanim_r_tarsal_distal_interphalangeal_2";
joints[15] = HAnimJoint1540;

let HAnimJoint1541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1541.USE = "hanim_vl5";
joints[16] = HAnimJoint1541;

let HAnimJoint1542 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1542.USE = "hanim_vl4";
joints[17] = HAnimJoint1542;

let HAnimJoint1543 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1543.USE = "hanim_vl3";
joints[18] = HAnimJoint1543;

let HAnimJoint1544 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1544.USE = "hanim_vl2";
joints[19] = HAnimJoint1544;

let HAnimJoint1545 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1545.USE = "hanim_vl1";
joints[20] = HAnimJoint1545;

let HAnimJoint1546 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1546.USE = "hanim_vt12";
joints[21] = HAnimJoint1546;

let HAnimJoint1547 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1547.USE = "hanim_vt11";
joints[22] = HAnimJoint1547;

let HAnimJoint1548 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1548.USE = "hanim_vt10";
joints[23] = HAnimJoint1548;

let HAnimJoint1549 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1549.USE = "hanim_vt9";
joints[24] = HAnimJoint1549;

let HAnimJoint1550 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1550.USE = "hanim_vt8";
joints[25] = HAnimJoint1550;

let HAnimJoint1551 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1551.USE = "hanim_vt7";
joints[26] = HAnimJoint1551;

let HAnimJoint1552 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1552.USE = "hanim_vt6";
joints[27] = HAnimJoint1552;

let HAnimJoint1553 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1553.USE = "hanim_vt5";
joints[28] = HAnimJoint1553;

let HAnimJoint1554 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1554.USE = "hanim_vt4";
joints[29] = HAnimJoint1554;

let HAnimJoint1555 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1555.USE = "hanim_vt3";
joints[30] = HAnimJoint1555;

let HAnimJoint1556 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1556.USE = "hanim_vt2";
joints[31] = HAnimJoint1556;

let HAnimJoint1557 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1557.USE = "hanim_vt1";
joints[32] = HAnimJoint1557;

let HAnimJoint1558 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1558.USE = "hanim_vc7";
joints[33] = HAnimJoint1558;

let HAnimJoint1559 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1559.USE = "hanim_vc6";
joints[34] = HAnimJoint1559;

let HAnimJoint1560 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1560.USE = "hanim_vc5";
joints[35] = HAnimJoint1560;

let HAnimJoint1561 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1561.USE = "hanim_vc4";
joints[36] = HAnimJoint1561;

let HAnimJoint1562 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1562.USE = "hanim_vc3";
joints[37] = HAnimJoint1562;

let HAnimJoint1563 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1563.USE = "hanim_vc2";
joints[38] = HAnimJoint1563;

let HAnimJoint1564 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1564.USE = "hanim_vc1";
joints[39] = HAnimJoint1564;

let HAnimJoint1565 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1565.USE = "hanim_skullbase";
joints[40] = HAnimJoint1565;

let HAnimJoint1566 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1566.USE = "hanim_l_eyelid_joint";
joints[41] = HAnimJoint1566;

let HAnimJoint1567 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1567.USE = "hanim_r_eyelid_joint";
joints[42] = HAnimJoint1567;

let HAnimJoint1568 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1568.USE = "hanim_l_eyeball_joint";
joints[43] = HAnimJoint1568;

let HAnimJoint1569 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1569.USE = "hanim_r_eyeball_joint";
joints[44] = HAnimJoint1569;

let HAnimJoint1570 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1570.USE = "hanim_l_eyebrow_joint";
joints[45] = HAnimJoint1570;

let HAnimJoint1571 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1571.USE = "hanim_r_eyebrow_joint";
joints[46] = HAnimJoint1571;

let HAnimJoint1572 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1572.USE = "hanim_temporomandibular";
joints[47] = HAnimJoint1572;

let HAnimJoint1573 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1573.USE = "hanim_l_sternoclavicular";
joints[48] = HAnimJoint1573;

let HAnimJoint1574 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1574.USE = "hanim_l_acromioclavicular";
joints[49] = HAnimJoint1574;

let HAnimJoint1575 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1575.USE = "hanim_l_shoulder";
joints[50] = HAnimJoint1575;

let HAnimJoint1576 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1576.USE = "hanim_l_elbow";
joints[51] = HAnimJoint1576;

let HAnimJoint1577 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1577.USE = "hanim_l_radiocarpal";
joints[52] = HAnimJoint1577;

let HAnimJoint1578 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1578.USE = "hanim_l_carpometacarpal_1";
joints[53] = HAnimJoint1578;

let HAnimJoint1579 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1579.USE = "hanim_l_metacarpophalangeal_1";
joints[54] = HAnimJoint1579;

let HAnimJoint1580 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1580.USE = "hanim_l_carpal_interphalangeal_1";
joints[55] = HAnimJoint1580;

let HAnimJoint1581 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1581.USE = "hanim_l_carpometacarpal_2";
joints[56] = HAnimJoint1581;

let HAnimJoint1582 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1582.USE = "hanim_l_metacarpophalangeal_2";
joints[57] = HAnimJoint1582;

let HAnimJoint1583 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1583.USE = "hanim_l_carpal_proximal_interphalangeal_2";
joints[58] = HAnimJoint1583;

let HAnimJoint1584 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1584.USE = "hanim_l_carpal_distal_interphalangeal_2";
joints[59] = HAnimJoint1584;

let HAnimJoint1585 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1585.USE = "hanim_l_carpometacarpal_3";
joints[60] = HAnimJoint1585;

let HAnimJoint1586 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1586.USE = "hanim_l_metacarpophalangeal_3";
joints[61] = HAnimJoint1586;

let HAnimJoint1587 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1587.USE = "hanim_l_carpal_proximal_interphalangeal_3";
joints[62] = HAnimJoint1587;

let HAnimJoint1588 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1588.USE = "hanim_l_carpal_distal_interphalangeal_3";
joints[63] = HAnimJoint1588;

let HAnimJoint1589 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1589.USE = "hanim_l_carpometacarpal_4";
joints[64] = HAnimJoint1589;

let HAnimJoint1590 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1590.USE = "hanim_l_metacarpophalangeal_4";
joints[65] = HAnimJoint1590;

let HAnimJoint1591 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1591.USE = "hanim_l_carpal_proximal_interphalangeal_4";
joints[66] = HAnimJoint1591;

let HAnimJoint1592 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1592.USE = "hanim_l_carpal_distal_interphalangeal_4";
joints[67] = HAnimJoint1592;

let HAnimJoint1593 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1593.USE = "hanim_l_carpometacarpal_5";
joints[68] = HAnimJoint1593;

let HAnimJoint1594 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1594.USE = "hanim_l_metacarpophalangeal_5";
joints[69] = HAnimJoint1594;

let HAnimJoint1595 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1595.USE = "hanim_l_carpal_proximal_interphalangeal_5";
joints[70] = HAnimJoint1595;

let HAnimJoint1596 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1596.USE = "hanim_l_carpal_distal_interphalangeal_5";
joints[71] = HAnimJoint1596;

let HAnimJoint1597 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1597.USE = "hanim_r_sternoclavicular";
joints[72] = HAnimJoint1597;

let HAnimJoint1598 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1598.USE = "hanim_r_acromioclavicular";
joints[73] = HAnimJoint1598;

let HAnimJoint1599 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1599.USE = "hanim_r_shoulder";
joints[74] = HAnimJoint1599;

let HAnimJoint1600 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1600.USE = "hanim_r_elbow";
joints[75] = HAnimJoint1600;

let HAnimJoint1601 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_r_radiocarpal";
joints[76] = HAnimJoint1601;

let HAnimJoint1602 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_r_carpometacarpal_1";
joints[77] = HAnimJoint1602;

let HAnimJoint1603 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_r_metacarpophalangeal_1";
joints[78] = HAnimJoint1603;

let HAnimJoint1604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_r_carpal_interphalangeal_1";
joints[79] = HAnimJoint1604;

let HAnimJoint1605 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_r_carpometacarpal_2";
joints[80] = HAnimJoint1605;

let HAnimJoint1606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_r_metacarpophalangeal_2";
joints[81] = HAnimJoint1606;

let HAnimJoint1607 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_r_carpal_proximal_interphalangeal_2";
joints[82] = HAnimJoint1607;

let HAnimJoint1608 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_r_carpal_distal_interphalangeal_2";
joints[83] = HAnimJoint1608;

let HAnimJoint1609 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_r_carpometacarpal_3";
joints[84] = HAnimJoint1609;

let HAnimJoint1610 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_r_metacarpophalangeal_3";
joints[85] = HAnimJoint1610;

let HAnimJoint1611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_r_carpal_proximal_interphalangeal_3";
joints[86] = HAnimJoint1611;

let HAnimJoint1612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_r_carpal_distal_interphalangeal_3";
joints[87] = HAnimJoint1612;

let HAnimJoint1613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_r_carpometacarpal_4";
joints[88] = HAnimJoint1613;

let HAnimJoint1614 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_r_metacarpophalangeal_4";
joints[89] = HAnimJoint1614;

let HAnimJoint1615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_r_carpal_proximal_interphalangeal_4";
joints[90] = HAnimJoint1615;

let HAnimJoint1616 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_r_carpal_distal_interphalangeal_4";
joints[91] = HAnimJoint1616;

let HAnimJoint1617 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_r_carpometacarpal_5";
joints[92] = HAnimJoint1617;

let HAnimJoint1618 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_r_metacarpophalangeal_5";
joints[93] = HAnimJoint1618;

let HAnimJoint1619 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_r_carpal_proximal_interphalangeal_5";
joints[94] = HAnimJoint1619;

let HAnimJoint1620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_r_carpal_distal_interphalangeal_5";
joints[95] = HAnimJoint1620;

browser.currentScene.children[4] = HAnimHumanoid38;

}
main ();
