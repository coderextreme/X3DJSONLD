const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "StandardHumanoid.x3d");
scene.addMetaData("identifier", "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoid.x3d");
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
Coordinate217.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097]);
coord = Coordinate217;

//from l_talocrural to l_talocalcaneonavicular vertices 2
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

let Shape233 = browser.currentScene.createNode("Shape");
let LineSet234 = browser.currentScene.createNode("LineSet");
LineSet234.vertexCount = new X3D.MFInt32([2]);
let Coordinate235 = browser.currentScene.createNode("Coordinate");
Coordinate235.point = new X3D.MFVec3f([0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278]);
coord = Coordinate235;

//from l_talocrural to l_calcaneocuboid vertices 2
let ColorRGBA236 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA236.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA236;

geometry = LineSet234;

HAnimSegment211ZZZ.children[4] = Shape233;

HAnimJoint210YYY.children = new X3D.MFNode();

HAnimJoint210ZZZ.children[0] = HAnimSegment211;

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.name = "l_talocalcaneonavicular";
HAnimJoint237.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint237.center = new X3D.SFVec3f([0.0781,0.0283,-0.097]);
HAnimJoint237.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint237.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment238 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment238.name = "l_navicular";
HAnimSegment238.DEF = "hanim_l_navicular";
let Transform239 = browser.currentScene.createNode("Transform");
Transform239.translation = new X3D.SFVec3f([0.0781,0.0283,-0.097]);
let Transform240 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape241 = browser.currentScene.createNode("Shape");
Shape241.USE = "HAnimJointShape";
Transform240YYY.child = new X3D.undefined();

Transform240ZZZ.child[0] = Shape241;

Transform239YYY.children = new X3D.MFNode();

Transform239ZZZ.children[0] = Transform240;

HAnimSegment238YYY.children = new X3D.MFNode();

HAnimSegment238ZZZ.children[0] = Transform239;

let Shape242 = browser.currentScene.createNode("Shape");
let LineSet243 = browser.currentScene.createNode("LineSet");
LineSet243.vertexCount = new X3D.MFInt32([2]);
let Coordinate244 = browser.currentScene.createNode("Coordinate");
Coordinate244.point = new X3D.MFVec3f([0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835]);
coord = Coordinate244;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
let ColorRGBA245 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA245.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA245;

geometry = LineSet243;

HAnimSegment238ZZZ.children[1] = Shape242;

let Shape246 = browser.currentScene.createNode("Shape");
let LineSet247 = browser.currentScene.createNode("LineSet");
LineSet247.vertexCount = new X3D.MFInt32([2]);
let Coordinate248 = browser.currentScene.createNode("Coordinate");
Coordinate248.point = new X3D.MFVec3f([0.0781,0.0283,-0.097,0.0812,0.025,-0.0805]);
coord = Coordinate248;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
let ColorRGBA249 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA249.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA249;

geometry = LineSet247;

HAnimSegment238ZZZ.children[2] = Shape246;

let Shape250 = browser.currentScene.createNode("Shape");
let LineSet251 = browser.currentScene.createNode("LineSet");
LineSet251.vertexCount = new X3D.MFInt32([2]);
let Coordinate252 = browser.currentScene.createNode("Coordinate");
Coordinate252.point = new X3D.MFVec3f([0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821]);
coord = Coordinate252;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
let ColorRGBA253 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA253.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA253;

geometry = LineSet251;

HAnimSegment238ZZZ.children[3] = Shape250;

HAnimJoint237YYY.children = new X3D.MFNode();

HAnimJoint237ZZZ.children[0] = HAnimSegment238;

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.name = "l_cuneonavicular_1";
HAnimJoint254.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint254.center = new X3D.SFVec3f([0.0672,0.0235,-0.0835]);
HAnimJoint254.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint254.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment255 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment255.name = "l_cuneiform_1";
HAnimSegment255.DEF = "hanim_l_cuneiform_1";
let Transform256 = browser.currentScene.createNode("Transform");
Transform256.translation = new X3D.SFVec3f([0.0672,0.0235,-0.0835]);
let Transform257 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape258 = browser.currentScene.createNode("Shape");
Shape258.USE = "HAnimJointShape";
Transform257YYY.child = new X3D.undefined();

Transform257ZZZ.child[0] = Shape258;

Transform256YYY.children = new X3D.MFNode();

Transform256ZZZ.children[0] = Transform257;

HAnimSegment255YYY.children = new X3D.MFNode();

HAnimSegment255ZZZ.children[0] = Transform256;

let Shape259 = browser.currentScene.createNode("Shape");
let LineSet260 = browser.currentScene.createNode("LineSet");
LineSet260.vertexCount = new X3D.MFInt32([2]);
let Coordinate261 = browser.currentScene.createNode("Coordinate");
Coordinate261.point = new X3D.MFVec3f([0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577]);
coord = Coordinate261;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
let ColorRGBA262 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA262.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA262;

geometry = LineSet260;

HAnimSegment255ZZZ.children[1] = Shape259;

HAnimJoint254YYY.children = new X3D.MFNode();

HAnimJoint254ZZZ.children[0] = HAnimSegment255;

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.name = "l_tarsometatarsal_1";
HAnimJoint263.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint263.center = new X3D.SFVec3f([0.0644,0.0147,-0.0577]);
HAnimJoint263.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint263.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment264 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment264.name = "l_metatarsal_1";
HAnimSegment264.DEF = "hanim_l_metatarsal_1";
let Transform265 = browser.currentScene.createNode("Transform");
Transform265.translation = new X3D.SFVec3f([0.0644,0.0147,-0.0577]);
let Transform266 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape267 = browser.currentScene.createNode("Shape");
Shape267.USE = "HAnimJointShape";
Transform266YYY.child = new X3D.undefined();

Transform266ZZZ.child[0] = Shape267;

Transform265YYY.children = new X3D.MFNode();

Transform265ZZZ.children[0] = Transform266;

HAnimSegment264YYY.children = new X3D.MFNode();

HAnimSegment264ZZZ.children[0] = Transform265;

let Shape268 = browser.currentScene.createNode("Shape");
let LineSet269 = browser.currentScene.createNode("LineSet");
LineSet269.vertexCount = new X3D.MFInt32([2]);
let Coordinate270 = browser.currentScene.createNode("Coordinate");
Coordinate270.point = new X3D.MFVec3f([0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083]);
coord = Coordinate270;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
let ColorRGBA271 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA271.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA271;

geometry = LineSet269;

HAnimSegment264ZZZ.children[1] = Shape268;

HAnimJoint263YYY.children = new X3D.MFNode();

HAnimJoint263ZZZ.children[0] = HAnimSegment264;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.name = "l_metatarsophalangeal_1";
HAnimJoint272.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint272.center = new X3D.SFVec3f([0.0619,0.0059,-0.0083]);
HAnimJoint272.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint272.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment273.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment273.DEF = "hanim_l_tarsal_proximal_phalanx_1";
let Transform274 = browser.currentScene.createNode("Transform");
Transform274.translation = new X3D.SFVec3f([0.0619,0.0059,-0.0083]);
let Transform275 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape276 = browser.currentScene.createNode("Shape");
Shape276.USE = "HAnimJointShape";
Transform275YYY.child = new X3D.undefined();

Transform275ZZZ.child[0] = Shape276;

Transform274YYY.children = new X3D.MFNode();

Transform274ZZZ.children[0] = Transform275;

HAnimSegment273YYY.children = new X3D.MFNode();

HAnimSegment273ZZZ.children[0] = Transform274;

let Shape277 = browser.currentScene.createNode("Shape");
let LineSet278 = browser.currentScene.createNode("LineSet");
LineSet278.vertexCount = new X3D.MFInt32([2]);
let Coordinate279 = browser.currentScene.createNode("Coordinate");
Coordinate279.point = new X3D.MFVec3f([0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083]);
coord = Coordinate279;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
let ColorRGBA280 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA280.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA280;

geometry = LineSet278;

HAnimSegment273ZZZ.children[1] = Shape277;

let HAnimSite281 = browser.currentScene.createNode("HAnimSite");
HAnimSite281.name = "l_metatarsal_phalanx_1";
HAnimSite281.DEF = "hanim_l_metatarsal_phalanx_1";
let TouchSensor282 = browser.currentScene.createNode("TouchSensor");
TouchSensor282.description = "HAnimSite 55 l_metatarsal_phalanx_1";
HAnimSite281YYY.children = new X3D.MFNode();

HAnimSite281ZZZ.children[0] = TouchSensor282;

let Shape283 = browser.currentScene.createNode("Shape");
Shape283.USE = "HAnimSiteShape";
HAnimSite281ZZZ.children[1] = Shape283;

let Billboard284 = browser.currentScene.createNode("Billboard");
let Shape285 = browser.currentScene.createNode("Shape");
let Text286 = browser.currentScene.createNode("Text");
Text286.string = new X3D.MFString([new X3D.SFString("55")]);
let FontStyle287 = browser.currentScene.createNode("FontStyle");
FontStyle287.size = 0.035;
fontStyle = FontStyle287;

geometry = Text286;

Billboard284YYY.children = new X3D.MFNode();

Billboard284ZZZ.children[0] = Shape285;

HAnimSite281ZZZ.children[2] = Billboard284;

HAnimSegment273ZZZ.children[2] = HAnimSite281;

HAnimJoint272YYY.children = new X3D.MFNode();

HAnimJoint272ZZZ.children[0] = HAnimSegment273;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.name = "l_tarsal_interphalangeal_1";
HAnimJoint288.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint288.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint288.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint272ZZZ.children[1] = HAnimJoint288;

HAnimJoint263ZZZ.children[1] = HAnimJoint272;

HAnimJoint254ZZZ.children[1] = HAnimJoint263;

HAnimJoint237ZZZ.children[1] = HAnimJoint254;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.name = "l_cuneonavicular_2";
HAnimJoint289.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint289.center = new X3D.SFVec3f([0.0812,0.025,-0.0805]);
HAnimJoint289.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint289.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.name = "l_cuneiform_2";
HAnimSegment290.DEF = "hanim_l_cuneiform_2";
let Transform291 = browser.currentScene.createNode("Transform");
Transform291.translation = new X3D.SFVec3f([0.0812,0.025,-0.0805]);
let Transform292 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape293 = browser.currentScene.createNode("Shape");
Shape293.USE = "HAnimJointShape";
Transform292YYY.child = new X3D.undefined();

Transform292ZZZ.child[0] = Shape293;

Transform291YYY.children = new X3D.MFNode();

Transform291ZZZ.children[0] = Transform292;

HAnimSegment290YYY.children = new X3D.MFNode();

HAnimSegment290ZZZ.children[0] = Transform291;

let Shape294 = browser.currentScene.createNode("Shape");
let LineSet295 = browser.currentScene.createNode("LineSet");
LineSet295.vertexCount = new X3D.MFInt32([2]);
let Coordinate296 = browser.currentScene.createNode("Coordinate");
Coordinate296.point = new X3D.MFVec3f([0.0812,0.025,-0.0805,0.08,0.0175,-0.0608]);
coord = Coordinate296;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
let ColorRGBA297 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA297.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA297;

geometry = LineSet295;

HAnimSegment290ZZZ.children[1] = Shape294;

HAnimJoint289YYY.children = new X3D.MFNode();

HAnimJoint289ZZZ.children[0] = HAnimSegment290;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.name = "l_tarsometatarsal_2";
HAnimJoint298.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint298.center = new X3D.SFVec3f([0.08,0.0175,-0.0608]);
HAnimJoint298.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint298.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.name = "l_metatarsal_2";
HAnimSegment299.DEF = "hanim_l_metatarsal_2";
let Transform300 = browser.currentScene.createNode("Transform");
Transform300.translation = new X3D.SFVec3f([0.08,0.0175,-0.0608]);
let Transform301 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape302 = browser.currentScene.createNode("Shape");
Shape302.USE = "HAnimJointShape";
Transform301YYY.child = new X3D.undefined();

Transform301ZZZ.child[0] = Shape302;

Transform300YYY.children = new X3D.MFNode();

Transform300ZZZ.children[0] = Transform301;

HAnimSegment299YYY.children = new X3D.MFNode();

HAnimSegment299ZZZ.children[0] = Transform300;

let Shape303 = browser.currentScene.createNode("Shape");
let LineSet304 = browser.currentScene.createNode("LineSet");
LineSet304.vertexCount = new X3D.MFInt32([2]);
let Coordinate305 = browser.currentScene.createNode("Coordinate");
Coordinate305.point = new X3D.MFVec3f([0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
coord = Coordinate305;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
let ColorRGBA306 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA306;

geometry = LineSet304;

HAnimSegment299ZZZ.children[1] = Shape303;

HAnimJoint298YYY.children = new X3D.MFNode();

HAnimJoint298ZZZ.children[0] = HAnimSegment299;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.name = "l_metatarsophalangeal_2";
HAnimJoint307.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint307.center = new X3D.SFVec3f([0.0824,0.0064,-0.004]);
HAnimJoint307.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint307.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment308.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform309 = browser.currentScene.createNode("Transform");
Transform309.translation = new X3D.SFVec3f([0.0824,0.0064,-0.004]);
let Transform310 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape311 = browser.currentScene.createNode("Shape");
Shape311.USE = "HAnimJointShape";
Transform310YYY.child = new X3D.undefined();

Transform310ZZZ.child[0] = Shape311;

Transform309YYY.children = new X3D.MFNode();

Transform309ZZZ.children[0] = Transform310;

HAnimSegment308YYY.children = new X3D.MFNode();

HAnimSegment308ZZZ.children[0] = Transform309;

let Shape312 = browser.currentScene.createNode("Shape");
let LineSet313 = browser.currentScene.createNode("LineSet");
LineSet313.vertexCount = new X3D.MFInt32([2]);
let Coordinate314 = browser.currentScene.createNode("Coordinate");
Coordinate314.point = new X3D.MFVec3f([0.0824,0.0064,-0.004,0.0841,0.0041,0.0121]);
coord = Coordinate314;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
let ColorRGBA315 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA315.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA315;

geometry = LineSet313;

HAnimSegment308ZZZ.children[1] = Shape312;

HAnimJoint307YYY.children = new X3D.MFNode();

HAnimJoint307ZZZ.children[0] = HAnimSegment308;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint316.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint316.center = new X3D.SFVec3f([0.0841,0.0041,0.0121]);
HAnimJoint316.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint316.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment317 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment317.name = "l_tarsal_middle_phalanx_2";
HAnimSegment317.DEF = "hanim_l_tarsal_middle_phalanx_2";
let Transform318 = browser.currentScene.createNode("Transform");
Transform318.translation = new X3D.SFVec3f([0.0841,0.0041,0.0121]);
let Transform319 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape320 = browser.currentScene.createNode("Shape");
Shape320.USE = "HAnimJointShape";
Transform319YYY.child = new X3D.undefined();

Transform319ZZZ.child[0] = Shape320;

Transform318YYY.children = new X3D.MFNode();

Transform318ZZZ.children[0] = Transform319;

HAnimSegment317YYY.children = new X3D.MFNode();

HAnimSegment317ZZZ.children[0] = Transform318;

let Shape321 = browser.currentScene.createNode("Shape");
let LineSet322 = browser.currentScene.createNode("LineSet");
LineSet322.vertexCount = new X3D.MFInt32([2]);
let Coordinate323 = browser.currentScene.createNode("Coordinate");
Coordinate323.point = new X3D.MFVec3f([0.0841,0.0041,0.0121,0.0841,0.0013,0.0216]);
coord = Coordinate323;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA324 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA324.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA324;

geometry = LineSet322;

HAnimSegment317ZZZ.children[1] = Shape321;

HAnimJoint316YYY.children = new X3D.MFNode();

HAnimJoint316ZZZ.children[0] = HAnimSegment317;

let HAnimJoint325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint325.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint325.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint325.center = new X3D.SFVec3f([0.0841,0.0013,0.0216]);
HAnimJoint325.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint325.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint316ZZZ.children[1] = HAnimJoint325;

HAnimJoint307ZZZ.children[1] = HAnimJoint316;

HAnimJoint298ZZZ.children[1] = HAnimJoint307;

HAnimJoint289ZZZ.children[1] = HAnimJoint298;

HAnimJoint237ZZZ.children[2] = HAnimJoint289;

let HAnimJoint326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint326.name = "l_cuneonavicular_3";
HAnimJoint326.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint326.center = new X3D.SFVec3f([0.0928,0.0248,-0.0821]);
HAnimJoint326.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint326.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment327 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment327.name = "l_cuneiform_3";
HAnimSegment327.DEF = "hanim_l_cuneiform_3";
let Transform328 = browser.currentScene.createNode("Transform");
Transform328.translation = new X3D.SFVec3f([0.0928,0.0248,-0.0821]);
let Transform329 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape330 = browser.currentScene.createNode("Shape");
Shape330.USE = "HAnimJointShape";
Transform329YYY.child = new X3D.undefined();

Transform329ZZZ.child[0] = Shape330;

Transform328YYY.children = new X3D.MFNode();

Transform328ZZZ.children[0] = Transform329;

HAnimSegment327YYY.children = new X3D.MFNode();

HAnimSegment327ZZZ.children[0] = Transform328;

let Shape331 = browser.currentScene.createNode("Shape");
let LineSet332 = browser.currentScene.createNode("LineSet");
LineSet332.vertexCount = new X3D.MFInt32([2]);
let Coordinate333 = browser.currentScene.createNode("Coordinate");
Coordinate333.point = new X3D.MFVec3f([0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625]);
coord = Coordinate333;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
let ColorRGBA334 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA334.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA334;

geometry = LineSet332;

HAnimSegment327ZZZ.children[1] = Shape331;

HAnimJoint326YYY.children = new X3D.MFNode();

HAnimJoint326ZZZ.children[0] = HAnimSegment327;

let HAnimJoint335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint335.name = "l_tarsometatarsal_3";
HAnimJoint335.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint335.center = new X3D.SFVec3f([0.0944,0.0175,-0.0625]);
HAnimJoint335.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint335.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment336 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment336.name = "l_metatarsal_3";
HAnimSegment336.DEF = "hanim_l_metatarsal_3";
let Transform337 = browser.currentScene.createNode("Transform");
Transform337.translation = new X3D.SFVec3f([0.0944,0.0175,-0.0625]);
let Transform338 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape339 = browser.currentScene.createNode("Shape");
Shape339.USE = "HAnimJointShape";
Transform338YYY.child = new X3D.undefined();

Transform338ZZZ.child[0] = Shape339;

Transform337YYY.children = new X3D.MFNode();

Transform337ZZZ.children[0] = Transform338;

HAnimSegment336YYY.children = new X3D.MFNode();

HAnimSegment336ZZZ.children[0] = Transform337;

let Shape340 = browser.currentScene.createNode("Shape");
let LineSet341 = browser.currentScene.createNode("LineSet");
LineSet341.vertexCount = new X3D.MFInt32([2]);
let Coordinate342 = browser.currentScene.createNode("Coordinate");
Coordinate342.point = new X3D.MFVec3f([0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065]);
coord = Coordinate342;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
let ColorRGBA343 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA343.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA343;

geometry = LineSet341;

HAnimSegment336ZZZ.children[1] = Shape340;

HAnimJoint335YYY.children = new X3D.MFNode();

HAnimJoint335ZZZ.children[0] = HAnimSegment336;

let HAnimJoint344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint344.name = "l_metatarsophalangeal_3";
HAnimJoint344.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint344.center = new X3D.SFVec3f([0.0963,0.0065,-0.0065]);
HAnimJoint344.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint344.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment345 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment345.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment345.DEF = "hanim_l_tarsal_proximal_phalanx_3";
let Transform346 = browser.currentScene.createNode("Transform");
Transform346.translation = new X3D.SFVec3f([0.0963,0.0065,-0.0065]);
let Transform347 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape348 = browser.currentScene.createNode("Shape");
Shape348.USE = "HAnimJointShape";
Transform347YYY.child = new X3D.undefined();

Transform347ZZZ.child[0] = Shape348;

Transform346YYY.children = new X3D.MFNode();

Transform346ZZZ.children[0] = Transform347;

HAnimSegment345YYY.children = new X3D.MFNode();

HAnimSegment345ZZZ.children[0] = Transform346;

let Shape349 = browser.currentScene.createNode("Shape");
let LineSet350 = browser.currentScene.createNode("LineSet");
LineSet350.vertexCount = new X3D.MFInt32([2]);
let Coordinate351 = browser.currentScene.createNode("Coordinate");
Coordinate351.point = new X3D.MFVec3f([0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086]);
coord = Coordinate351;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
let ColorRGBA352 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA352.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA352;

geometry = LineSet350;

HAnimSegment345ZZZ.children[1] = Shape349;

HAnimJoint344YYY.children = new X3D.MFNode();

HAnimJoint344ZZZ.children[0] = HAnimSegment345;

let HAnimJoint353 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint353.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint353.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint353.center = new X3D.SFVec3f([0.0987,0.0034,0.0086]);
HAnimJoint353.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint353.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment354 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment354.name = "l_tarsal_middle_phalanx_3";
HAnimSegment354.DEF = "hanim_l_tarsal_middle_phalanx_3";
let Transform355 = browser.currentScene.createNode("Transform");
Transform355.translation = new X3D.SFVec3f([0.0987,0.0034,0.0086]);
let Transform356 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape357 = browser.currentScene.createNode("Shape");
Shape357.USE = "HAnimJointShape";
Transform356YYY.child = new X3D.undefined();

Transform356ZZZ.child[0] = Shape357;

Transform355YYY.children = new X3D.MFNode();

Transform355ZZZ.children[0] = Transform356;

HAnimSegment354YYY.children = new X3D.MFNode();

HAnimSegment354ZZZ.children[0] = Transform355;

let Shape358 = browser.currentScene.createNode("Shape");
let LineSet359 = browser.currentScene.createNode("LineSet");
LineSet359.vertexCount = new X3D.MFInt32([2]);
let Coordinate360 = browser.currentScene.createNode("Coordinate");
Coordinate360.point = new X3D.MFVec3f([0.0987,0.0034,0.0086,0.1002,0.0013,0.0178]);
coord = Coordinate360;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
let ColorRGBA361 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA361.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA361;

geometry = LineSet359;

HAnimSegment354ZZZ.children[1] = Shape358;

HAnimJoint353YYY.children = new X3D.MFNode();

HAnimJoint353ZZZ.children[0] = HAnimSegment354;

let HAnimJoint362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint362.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint362.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint362.center = new X3D.SFVec3f([0.1002,0.0013,0.0178]);
HAnimJoint362.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint362.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint353ZZZ.children[1] = HAnimJoint362;

HAnimJoint344ZZZ.children[1] = HAnimJoint353;

HAnimJoint335ZZZ.children[1] = HAnimJoint344;

HAnimJoint326ZZZ.children[1] = HAnimJoint335;

HAnimJoint237ZZZ.children[3] = HAnimJoint326;

HAnimJoint210ZZZ.children[1] = HAnimJoint237;

let HAnimJoint363 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint363.name = "l_calcaneocuboid";
HAnimJoint363.DEF = "hanim_l_calcaneocuboid";
HAnimJoint363.center = new X3D.SFVec3f([0.0889,0.0494,-0.1278]);
HAnimJoint363.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint363.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment364 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment364.name = "l_calcaneus";
HAnimSegment364.DEF = "hanim_l_calcaneus";
let Transform365 = browser.currentScene.createNode("Transform");
Transform365.translation = new X3D.SFVec3f([0.0889,0.0494,-0.1278]);
let Transform366 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape367 = browser.currentScene.createNode("Shape");
Shape367.USE = "HAnimJointShape";
Transform366YYY.child = new X3D.undefined();

Transform366ZZZ.child[0] = Shape367;

Transform365YYY.children = new X3D.MFNode();

Transform365ZZZ.children[0] = Transform366;

HAnimSegment364YYY.children = new X3D.MFNode();

HAnimSegment364ZZZ.children[0] = Transform365;

let Shape368 = browser.currentScene.createNode("Shape");
let LineSet369 = browser.currentScene.createNode("LineSet");
LineSet369.vertexCount = new X3D.MFInt32([2]);
let Coordinate370 = browser.currentScene.createNode("Coordinate");
Coordinate370.point = new X3D.MFVec3f([0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998]);
coord = Coordinate370;

//from l_calcaneocuboid to l_transversetarsal vertices 2
let ColorRGBA371 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA371.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA371;

geometry = LineSet369;

HAnimSegment364ZZZ.children[1] = Shape368;

HAnimJoint363YYY.children = new X3D.MFNode();

HAnimJoint363ZZZ.children[0] = HAnimSegment364;

let HAnimJoint372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint372.name = "l_transversetarsal";
HAnimJoint372.DEF = "hanim_l_transversetarsal";
HAnimJoint372.center = new X3D.SFVec3f([0.1105,0.0267,-0.0998]);
HAnimJoint372.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint372.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment373 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment373.name = "l_cuboid";
HAnimSegment373.DEF = "hanim_l_cuboid";
let Transform374 = browser.currentScene.createNode("Transform");
Transform374.translation = new X3D.SFVec3f([0.1105,0.0267,-0.0998]);
let Transform375 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape376 = browser.currentScene.createNode("Shape");
Shape376.USE = "HAnimJointShape";
Transform375YYY.child = new X3D.undefined();

Transform375ZZZ.child[0] = Shape376;

Transform374YYY.children = new X3D.MFNode();

Transform374ZZZ.children[0] = Transform375;

HAnimSegment373YYY.children = new X3D.MFNode();

HAnimSegment373ZZZ.children[0] = Transform374;

let Shape377 = browser.currentScene.createNode("Shape");
let LineSet378 = browser.currentScene.createNode("LineSet");
LineSet378.vertexCount = new X3D.MFInt32([2]);
let Coordinate379 = browser.currentScene.createNode("Coordinate");
Coordinate379.point = new X3D.MFVec3f([0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634]);
coord = Coordinate379;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
let ColorRGBA380 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA380.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA380;

geometry = LineSet378;

HAnimSegment373ZZZ.children[1] = Shape377;

let Shape381 = browser.currentScene.createNode("Shape");
let LineSet382 = browser.currentScene.createNode("LineSet");
LineSet382.vertexCount = new X3D.MFInt32([2]);
let Coordinate383 = browser.currentScene.createNode("Coordinate");
Coordinate383.point = new X3D.MFVec3f([0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671]);
coord = Coordinate383;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
let ColorRGBA384 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA384.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA384;

geometry = LineSet382;

HAnimSegment373ZZZ.children[2] = Shape381;

HAnimJoint372YYY.children = new X3D.MFNode();

HAnimJoint372ZZZ.children[0] = HAnimSegment373;

let HAnimJoint385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint385.name = "l_tarsometatarsal_4";
HAnimJoint385.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint385.center = new X3D.SFVec3f([0.1063,0.016,-0.0634]);
HAnimJoint385.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint385.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment386 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment386.name = "l_metatarsal_4";
HAnimSegment386.DEF = "hanim_l_metatarsal_4";
let Transform387 = browser.currentScene.createNode("Transform");
Transform387.translation = new X3D.SFVec3f([0.1063,0.016,-0.0634]);
let Transform388 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape389 = browser.currentScene.createNode("Shape");
Shape389.USE = "HAnimJointShape";
Transform388YYY.child = new X3D.undefined();

Transform388ZZZ.child[0] = Shape389;

Transform387YYY.children = new X3D.MFNode();

Transform387ZZZ.children[0] = Transform388;

HAnimSegment386YYY.children = new X3D.MFNode();

HAnimSegment386ZZZ.children[0] = Transform387;

let Shape390 = browser.currentScene.createNode("Shape");
let LineSet391 = browser.currentScene.createNode("LineSet");
LineSet391.vertexCount = new X3D.MFInt32([2]);
let Coordinate392 = browser.currentScene.createNode("Coordinate");
Coordinate392.point = new X3D.MFVec3f([0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107]);
coord = Coordinate392;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
let ColorRGBA393 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA393.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA393;

geometry = LineSet391;

HAnimSegment386ZZZ.children[1] = Shape390;

HAnimJoint385YYY.children = new X3D.MFNode();

HAnimJoint385ZZZ.children[0] = HAnimSegment386;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.name = "l_metatarsophalangeal_4";
HAnimJoint394.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint394.center = new X3D.SFVec3f([0.1097,0.0058,-0.0107]);
HAnimJoint394.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint394.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment395 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment395.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment395.DEF = "hanim_l_tarsal_proximal_phalanx_4";
let Transform396 = browser.currentScene.createNode("Transform");
Transform396.translation = new X3D.SFVec3f([0.1097,0.0058,-0.0107]);
let Transform397 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape398 = browser.currentScene.createNode("Shape");
Shape398.USE = "HAnimJointShape";
Transform397YYY.child = new X3D.undefined();

Transform397ZZZ.child[0] = Shape398;

Transform396YYY.children = new X3D.MFNode();

Transform396ZZZ.children[0] = Transform397;

HAnimSegment395YYY.children = new X3D.MFNode();

HAnimSegment395ZZZ.children[0] = Transform396;

let Shape399 = browser.currentScene.createNode("Shape");
let LineSet400 = browser.currentScene.createNode("LineSet");
LineSet400.vertexCount = new X3D.MFInt32([2]);
let Coordinate401 = browser.currentScene.createNode("Coordinate");
Coordinate401.point = new X3D.MFVec3f([0.1097,0.0058,-0.0107,0.114,0.0037,0.0044]);
coord = Coordinate401;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
let ColorRGBA402 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA402.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA402;

geometry = LineSet400;

HAnimSegment395ZZZ.children[1] = Shape399;

HAnimJoint394YYY.children = new X3D.MFNode();

HAnimJoint394ZZZ.children[0] = HAnimSegment395;

let HAnimJoint403 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint403.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint403.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint403.center = new X3D.SFVec3f([0.114,0.0037,0.0044]);
HAnimJoint403.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint403.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment404 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment404.name = "l_tarsal_middle_phalanx_4";
HAnimSegment404.DEF = "hanim_l_tarsal_middle_phalanx_4";
let Transform405 = browser.currentScene.createNode("Transform");
Transform405.translation = new X3D.SFVec3f([0.114,0.0037,0.0044]);
let Transform406 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape407 = browser.currentScene.createNode("Shape");
Shape407.USE = "HAnimJointShape";
Transform406YYY.child = new X3D.undefined();

Transform406ZZZ.child[0] = Shape407;

Transform405YYY.children = new X3D.MFNode();

Transform405ZZZ.children[0] = Transform406;

HAnimSegment404YYY.children = new X3D.MFNode();

HAnimSegment404ZZZ.children[0] = Transform405;

let Shape408 = browser.currentScene.createNode("Shape");
let LineSet409 = browser.currentScene.createNode("LineSet");
LineSet409.vertexCount = new X3D.MFInt32([2]);
let Coordinate410 = browser.currentScene.createNode("Coordinate");
Coordinate410.point = new X3D.MFVec3f([0.114,0.0037,0.0044,0.1155,0.0008,0.0118]);
coord = Coordinate410;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
let ColorRGBA411 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA411.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA411;

geometry = LineSet409;

HAnimSegment404ZZZ.children[1] = Shape408;

HAnimJoint403YYY.children = new X3D.MFNode();

HAnimJoint403ZZZ.children[0] = HAnimSegment404;

let HAnimJoint412 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint412.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint412.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint412.center = new X3D.SFVec3f([0.1155,0.0008,0.0118]);
HAnimJoint412.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint412.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint403ZZZ.children[1] = HAnimJoint412;

HAnimJoint394ZZZ.children[1] = HAnimJoint403;

HAnimJoint385ZZZ.children[1] = HAnimJoint394;

HAnimJoint372ZZZ.children[1] = HAnimJoint385;

let HAnimJoint413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint413.name = "l_tarsometatarsal_5";
HAnimJoint413.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint413.center = new X3D.SFVec3f([0.1206,0.0124,-0.0671]);
HAnimJoint413.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint413.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment414 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment414.name = "l_metatarsal_5";
HAnimSegment414.DEF = "hanim_l_metatarsal_5";
let Transform415 = browser.currentScene.createNode("Transform");
Transform415.translation = new X3D.SFVec3f([0.1206,0.0124,-0.0671]);
let Transform416 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape417 = browser.currentScene.createNode("Shape");
Shape417.USE = "HAnimJointShape";
Transform416YYY.child = new X3D.undefined();

Transform416ZZZ.child[0] = Shape417;

Transform415YYY.children = new X3D.MFNode();

Transform415ZZZ.children[0] = Transform416;

HAnimSegment414YYY.children = new X3D.MFNode();

HAnimSegment414ZZZ.children[0] = Transform415;

let Shape418 = browser.currentScene.createNode("Shape");
let LineSet419 = browser.currentScene.createNode("LineSet");
LineSet419.vertexCount = new X3D.MFInt32([2]);
let Coordinate420 = browser.currentScene.createNode("Coordinate");
Coordinate420.point = new X3D.MFVec3f([0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153]);
coord = Coordinate420;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
let ColorRGBA421 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA421.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA421;

geometry = LineSet419;

HAnimSegment414ZZZ.children[1] = Shape418;

HAnimJoint413YYY.children = new X3D.MFNode();

HAnimJoint413ZZZ.children[0] = HAnimSegment414;

let HAnimJoint422 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint422.name = "l_metatarsophalangeal_5";
HAnimJoint422.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint422.center = new X3D.SFVec3f([0.1239,0.0051,-0.0153]);
HAnimJoint422.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint422.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment423 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment423.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment423.DEF = "hanim_l_tarsal_proximal_phalanx_5";
let Transform424 = browser.currentScene.createNode("Transform");
Transform424.translation = new X3D.SFVec3f([0.1239,0.0051,-0.0153]);
let Transform425 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape426 = browser.currentScene.createNode("Shape");
Shape426.USE = "HAnimJointShape";
Transform425YYY.child = new X3D.undefined();

Transform425ZZZ.child[0] = Shape426;

Transform424YYY.children = new X3D.MFNode();

Transform424ZZZ.children[0] = Transform425;

HAnimSegment423YYY.children = new X3D.MFNode();

HAnimSegment423ZZZ.children[0] = Transform424;

let Shape427 = browser.currentScene.createNode("Shape");
let LineSet428 = browser.currentScene.createNode("LineSet");
LineSet428.vertexCount = new X3D.MFInt32([2]);
let Coordinate429 = browser.currentScene.createNode("Coordinate");
Coordinate429.point = new X3D.MFVec3f([0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077]);
coord = Coordinate429;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
let ColorRGBA430 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA430.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA430;

geometry = LineSet428;

HAnimSegment423ZZZ.children[1] = Shape427;

let HAnimSite431 = browser.currentScene.createNode("HAnimSite");
HAnimSite431.name = "l_metatarsal_phalanx_5";
HAnimSite431.DEF = "hanim_l_metatarsal_phalanx_5";
let TouchSensor432 = browser.currentScene.createNode("TouchSensor");
TouchSensor432.description = "HAnimSite 56 l_metatarsal_phalanx_5";
HAnimSite431YYY.children = new X3D.MFNode();

HAnimSite431ZZZ.children[0] = TouchSensor432;

let Shape433 = browser.currentScene.createNode("Shape");
Shape433.USE = "HAnimSiteShape";
HAnimSite431ZZZ.children[1] = Shape433;

let Billboard434 = browser.currentScene.createNode("Billboard");
let Shape435 = browser.currentScene.createNode("Shape");
let Text436 = browser.currentScene.createNode("Text");
Text436.string = new X3D.MFString([new X3D.SFString("56")]);
let FontStyle437 = browser.currentScene.createNode("FontStyle");
FontStyle437.size = 0.035;
fontStyle = FontStyle437;

geometry = Text436;

Billboard434YYY.children = new X3D.MFNode();

Billboard434ZZZ.children[0] = Shape435;

HAnimSite431ZZZ.children[2] = Billboard434;

HAnimSegment423ZZZ.children[2] = HAnimSite431;

HAnimJoint422YYY.children = new X3D.MFNode();

HAnimJoint422ZZZ.children[0] = HAnimSegment423;

let HAnimJoint438 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint438.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint438.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint438.center = new X3D.SFVec3f([0.1262,0.0023,-0.0077]);
HAnimJoint438.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint438.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment439 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment439.name = "l_tarsal_middle_phalanx_5";
HAnimSegment439.DEF = "hanim_l_tarsal_middle_phalanx_5";
let Transform440 = browser.currentScene.createNode("Transform");
Transform440.translation = new X3D.SFVec3f([0.1262,0.0023,-0.0077]);
let Transform441 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape442 = browser.currentScene.createNode("Shape");
Shape442.USE = "HAnimJointShape";
Transform441YYY.child = new X3D.undefined();

Transform441ZZZ.child[0] = Shape442;

Transform440YYY.children = new X3D.MFNode();

Transform440ZZZ.children[0] = Transform441;

HAnimSegment439YYY.children = new X3D.MFNode();

HAnimSegment439ZZZ.children[0] = Transform440;

let Shape443 = browser.currentScene.createNode("Shape");
let LineSet444 = browser.currentScene.createNode("LineSet");
LineSet444.vertexCount = new X3D.MFInt32([2]);
let Coordinate445 = browser.currentScene.createNode("Coordinate");
Coordinate445.point = new X3D.MFVec3f([0.1262,0.0023,-0.0077,0.1271,0,0]);
coord = Coordinate445;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
let ColorRGBA446 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA446.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA446;

geometry = LineSet444;

HAnimSegment439ZZZ.children[1] = Shape443;

HAnimJoint438YYY.children = new X3D.MFNode();

HAnimJoint438ZZZ.children[0] = HAnimSegment439;

let HAnimJoint447 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint447.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint447.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint447.center = new X3D.SFVec3f([0.1271,0,0]);
HAnimJoint447.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint447.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint438ZZZ.children[1] = HAnimJoint447;

HAnimJoint422ZZZ.children[1] = HAnimJoint438;

HAnimJoint413ZZZ.children[1] = HAnimJoint422;

HAnimJoint372ZZZ.children[2] = HAnimJoint413;

HAnimJoint363ZZZ.children[1] = HAnimJoint372;

HAnimJoint210ZZZ.children[2] = HAnimJoint363;

HAnimJoint180ZZZ.children[1] = HAnimJoint210;

HAnimJoint143ZZZ.children[1] = HAnimJoint180;

HAnimJoint60ZZZ.children[1] = HAnimJoint143;

let HAnimJoint448 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint448.name = "r_hip";
HAnimJoint448.DEF = "hanim_r_hip";
HAnimJoint448.center = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
HAnimJoint448.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint448.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment449 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment449.name = "r_thigh";
HAnimSegment449.DEF = "hanim_r_thigh";
let Transform450 = browser.currentScene.createNode("Transform");
Transform450.translation = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
let Transform451 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape452 = browser.currentScene.createNode("Shape");
Shape452.USE = "HAnimJointShape";
Transform451YYY.child = new X3D.undefined();

Transform451ZZZ.child[0] = Shape452;

Transform450YYY.children = new X3D.MFNode();

Transform450ZZZ.children[0] = Transform451;

HAnimSegment449YYY.children = new X3D.MFNode();

HAnimSegment449ZZZ.children[0] = Transform450;

let Shape453 = browser.currentScene.createNode("Shape");
let LineSet454 = browser.currentScene.createNode("LineSet");
LineSet454.vertexCount = new X3D.MFInt32([2]);
let Coordinate455 = browser.currentScene.createNode("Coordinate");
Coordinate455.point = new X3D.MFVec3f([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
coord = Coordinate455;

//from r_hip to r_knee vertices 2
let ColorRGBA456 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA456.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA456;

geometry = LineSet454;

HAnimSegment449ZZZ.children[1] = Shape453;

let HAnimSite457 = browser.currentScene.createNode("HAnimSite");
HAnimSite457.name = "r_femoral_lateral_epicondyles";
HAnimSite457.DEF = "hanim_r_femoral_lateral_epicondyles";
HAnimSite457.translation = new X3D.SFVec3f([-0.1421,0.4992,0.031]);
let TouchSensor458 = browser.currentScene.createNode("TouchSensor");
TouchSensor458.description = "HAnimSite 44 r_femoral_lateral_epicondyles";
HAnimSite457YYY.children = new X3D.MFNode();

HAnimSite457ZZZ.children[0] = TouchSensor458;

let Shape459 = browser.currentScene.createNode("Shape");
Shape459.USE = "HAnimSiteShape";
HAnimSite457ZZZ.children[1] = Shape459;

let Billboard460 = browser.currentScene.createNode("Billboard");
let Shape461 = browser.currentScene.createNode("Shape");
let Text462 = browser.currentScene.createNode("Text");
Text462.string = new X3D.MFString([new X3D.SFString("44")]);
let FontStyle463 = browser.currentScene.createNode("FontStyle");
FontStyle463.size = 0.035;
fontStyle = FontStyle463;

geometry = Text462;

Billboard460YYY.children = new X3D.MFNode();

Billboard460ZZZ.children[0] = Shape461;

HAnimSite457ZZZ.children[2] = Billboard460;

HAnimSegment449ZZZ.children[2] = HAnimSite457;

let HAnimSite464 = browser.currentScene.createNode("HAnimSite");
HAnimSite464.name = "r_femoral_medial_epicondyles";
HAnimSite464.DEF = "hanim_r_femoral_medial_epicondyles";
HAnimSite464.translation = new X3D.SFVec3f([-0.0221,0.5014,0.0289]);
let TouchSensor465 = browser.currentScene.createNode("TouchSensor");
TouchSensor465.description = "HAnimSite 43 r_femoral_medial_epicondyles";
HAnimSite464YYY.children = new X3D.MFNode();

HAnimSite464ZZZ.children[0] = TouchSensor465;

let Shape466 = browser.currentScene.createNode("Shape");
Shape466.USE = "HAnimSiteShape";
HAnimSite464ZZZ.children[1] = Shape466;

let Billboard467 = browser.currentScene.createNode("Billboard");
let Shape468 = browser.currentScene.createNode("Shape");
let Text469 = browser.currentScene.createNode("Text");
Text469.string = new X3D.MFString([new X3D.SFString("43")]);
let FontStyle470 = browser.currentScene.createNode("FontStyle");
FontStyle470.size = 0.035;
fontStyle = FontStyle470;

geometry = Text469;

Billboard467YYY.children = new X3D.MFNode();

Billboard467ZZZ.children[0] = Shape468;

HAnimSite464ZZZ.children[2] = Billboard467;

HAnimSegment449ZZZ.children[3] = HAnimSite464;

let HAnimSite471 = browser.currentScene.createNode("HAnimSite");
HAnimSite471.name = "r_knee_crease";
HAnimSite471.DEF = "hanim_r_knee_crease";
HAnimSite471.translation = new X3D.SFVec3f([-0.0825,0.4932,-0.0326]);
let TouchSensor472 = browser.currentScene.createNode("TouchSensor");
TouchSensor472.description = "HAnimSite 91 r_knee_crease";
HAnimSite471YYY.children = new X3D.MFNode();

HAnimSite471ZZZ.children[0] = TouchSensor472;

let Shape473 = browser.currentScene.createNode("Shape");
Shape473.USE = "HAnimSiteShape";
HAnimSite471ZZZ.children[1] = Shape473;

let Billboard474 = browser.currentScene.createNode("Billboard");
let Shape475 = browser.currentScene.createNode("Shape");
let Text476 = browser.currentScene.createNode("Text");
Text476.string = new X3D.MFString([new X3D.SFString("91")]);
let FontStyle477 = browser.currentScene.createNode("FontStyle");
FontStyle477.size = 0.035;
fontStyle = FontStyle477;

geometry = Text476;

Billboard474YYY.children = new X3D.MFNode();

Billboard474ZZZ.children[0] = Shape475;

HAnimSite471ZZZ.children[2] = Billboard474;

HAnimSegment449ZZZ.children[4] = HAnimSite471;

let HAnimSite478 = browser.currentScene.createNode("HAnimSite");
HAnimSite478.name = "r_suprapatella";
HAnimSite478.DEF = "hanim_r_suprapatella";
let TouchSensor479 = browser.currentScene.createNode("TouchSensor");
TouchSensor479.description = "HAnimSite 45 r_suprapatella";
HAnimSite478YYY.children = new X3D.MFNode();

HAnimSite478ZZZ.children[0] = TouchSensor479;

let Shape480 = browser.currentScene.createNode("Shape");
Shape480.USE = "HAnimSiteShape";
HAnimSite478ZZZ.children[1] = Shape480;

let Billboard481 = browser.currentScene.createNode("Billboard");
let Shape482 = browser.currentScene.createNode("Shape");
let Text483 = browser.currentScene.createNode("Text");
Text483.string = new X3D.MFString([new X3D.SFString("45")]);
let FontStyle484 = browser.currentScene.createNode("FontStyle");
FontStyle484.size = 0.035;
fontStyle = FontStyle484;

geometry = Text483;

Billboard481YYY.children = new X3D.MFNode();

Billboard481ZZZ.children[0] = Shape482;

HAnimSite478ZZZ.children[2] = Billboard481;

HAnimSegment449ZZZ.children[5] = HAnimSite478;

HAnimJoint448YYY.children = new X3D.MFNode();

HAnimJoint448ZZZ.children[0] = HAnimSegment449;

let HAnimJoint485 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint485.name = "r_knee";
HAnimJoint485.DEF = "hanim_r_knee";
HAnimJoint485.center = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
HAnimJoint485.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint485.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.name = "r_calf";
HAnimSegment486.DEF = "hanim_r_calf";
let Transform487 = browser.currentScene.createNode("Transform");
Transform487.translation = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
let Transform488 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape489 = browser.currentScene.createNode("Shape");
Shape489.USE = "HAnimJointShape";
Transform488YYY.child = new X3D.undefined();

Transform488ZZZ.child[0] = Shape489;

Transform487YYY.children = new X3D.MFNode();

Transform487ZZZ.children[0] = Transform488;

HAnimSegment486YYY.children = new X3D.MFNode();

HAnimSegment486ZZZ.children[0] = Transform487;

let Shape490 = browser.currentScene.createNode("Shape");
let LineSet491 = browser.currentScene.createNode("LineSet");
LineSet491.vertexCount = new X3D.MFInt32([2]);
let Coordinate492 = browser.currentScene.createNode("Coordinate");
Coordinate492.point = new X3D.MFVec3f([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
coord = Coordinate492;

//from r_knee to r_talocrural vertices 2
let ColorRGBA493 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA493.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA493;

geometry = LineSet491;

HAnimSegment486ZZZ.children[1] = Shape490;

let HAnimSite494 = browser.currentScene.createNode("HAnimSite");
HAnimSite494.name = "r_lateral_malleolus";
HAnimSite494.DEF = "hanim_r_lateral_malleolus";
HAnimSite494.translation = new X3D.SFVec3f([-0.1006,0.0658,-0.1075]);
let TouchSensor495 = browser.currentScene.createNode("TouchSensor");
TouchSensor495.description = "HAnimSite 53 r_lateral_malleolus";
HAnimSite494YYY.children = new X3D.MFNode();

HAnimSite494ZZZ.children[0] = TouchSensor495;

let Shape496 = browser.currentScene.createNode("Shape");
Shape496.USE = "HAnimSiteShape";
HAnimSite494ZZZ.children[1] = Shape496;

let Billboard497 = browser.currentScene.createNode("Billboard");
let Shape498 = browser.currentScene.createNode("Shape");
let Text499 = browser.currentScene.createNode("Text");
Text499.string = new X3D.MFString([new X3D.SFString("53")]);
let FontStyle500 = browser.currentScene.createNode("FontStyle");
FontStyle500.size = 0.035;
fontStyle = FontStyle500;

geometry = Text499;

Billboard497YYY.children = new X3D.MFNode();

Billboard497ZZZ.children[0] = Shape498;

HAnimSite494ZZZ.children[2] = Billboard497;

HAnimSegment486ZZZ.children[2] = HAnimSite494;

let HAnimSite501 = browser.currentScene.createNode("HAnimSite");
HAnimSite501.name = "r_medial_malleolus";
HAnimSite501.DEF = "hanim_r_medial_malleolus";
HAnimSite501.translation = new X3D.SFVec3f([-0.0591,0.076,-0.0928]);
let TouchSensor502 = browser.currentScene.createNode("TouchSensor");
TouchSensor502.description = "HAnimSite 52 r_medial_malleolus";
HAnimSite501YYY.children = new X3D.MFNode();

HAnimSite501ZZZ.children[0] = TouchSensor502;

let Shape503 = browser.currentScene.createNode("Shape");
Shape503.USE = "HAnimSiteShape";
HAnimSite501ZZZ.children[1] = Shape503;

let Billboard504 = browser.currentScene.createNode("Billboard");
let Shape505 = browser.currentScene.createNode("Shape");
let Text506 = browser.currentScene.createNode("Text");
Text506.string = new X3D.MFString([new X3D.SFString("52")]);
let FontStyle507 = browser.currentScene.createNode("FontStyle");
FontStyle507.size = 0.035;
fontStyle = FontStyle507;

geometry = Text506;

Billboard504YYY.children = new X3D.MFNode();

Billboard504ZZZ.children[0] = Shape505;

HAnimSite501ZZZ.children[2] = Billboard504;

HAnimSegment486ZZZ.children[3] = HAnimSite501;

let HAnimSite508 = browser.currentScene.createNode("HAnimSite");
HAnimSite508.name = "r_tibiale";
HAnimSite508.DEF = "hanim_r_tibiale";
let TouchSensor509 = browser.currentScene.createNode("TouchSensor");
TouchSensor509.description = "HAnimSite 51 r_tibiale";
HAnimSite508YYY.children = new X3D.MFNode();

HAnimSite508ZZZ.children[0] = TouchSensor509;

let Shape510 = browser.currentScene.createNode("Shape");
Shape510.USE = "HAnimSiteShape";
HAnimSite508ZZZ.children[1] = Shape510;

let Billboard511 = browser.currentScene.createNode("Billboard");
let Shape512 = browser.currentScene.createNode("Shape");
let Text513 = browser.currentScene.createNode("Text");
Text513.string = new X3D.MFString([new X3D.SFString("51")]);
let FontStyle514 = browser.currentScene.createNode("FontStyle");
FontStyle514.size = 0.035;
fontStyle = FontStyle514;

geometry = Text513;

Billboard511YYY.children = new X3D.MFNode();

Billboard511ZZZ.children[0] = Shape512;

HAnimSite508ZZZ.children[2] = Billboard511;

HAnimSegment486ZZZ.children[4] = HAnimSite508;

HAnimJoint485YYY.children = new X3D.MFNode();

HAnimJoint485ZZZ.children[0] = HAnimSegment486;

let HAnimJoint515 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint515.name = "r_talocrural";
HAnimJoint515.DEF = "hanim_r_talocrural";
HAnimJoint515.center = new X3D.SFVec3f([-0.0801,0.0712,-0.0766]);
HAnimJoint515.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint515.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment516.name = "r_talus";
HAnimSegment516.DEF = "hanim_r_talus";
let Transform517 = browser.currentScene.createNode("Transform");
Transform517.scale = new X3D.SFVec3f([0.15,0.15,0.15]);
Transform517.translation = new X3D.SFVec3f([-0.05,0.06,-0.025]);
Transform517.rotation = new X3D.SFRotation([1,0,0,-1.57]);
//Transform right foot
let Transform518 = browser.currentScene.createNode("Transform");
//Empty Transform right foot
let Shape519 = browser.currentScene.createNode("Shape");
Shape519.USE = "HAnimJointShape";
Transform518YYY.child = new X3D.undefined();

Transform518ZZZ.child[0] = Shape519;

Transform517YYY.children = new X3D.MFNode();

Transform517ZZZ.children[0] = Transform518;

HAnimSegment516YYY.children = new X3D.MFNode();

HAnimSegment516ZZZ.children[0] = Transform517;

let Shape520 = browser.currentScene.createNode("Shape");
let LineSet521 = browser.currentScene.createNode("LineSet");
LineSet521.vertexCount = new X3D.MFInt32([2]);
let Coordinate522 = browser.currentScene.createNode("Coordinate");
Coordinate522.point = new X3D.MFVec3f([-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097]);
coord = Coordinate522;

//from r_talocrural to r_talocalcaneonavicular vertices 2
let ColorRGBA523 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA523.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA523;

geometry = LineSet521;

HAnimSegment516ZZZ.children[1] = Shape520;

let HAnimSite524 = browser.currentScene.createNode("HAnimSite");
HAnimSite524.name = "r_calcaneus_posterior";
HAnimSite524.DEF = "hanim_r_calcaneus_posterior";
HAnimSite524.translation = new X3D.SFVec3f([-0.0692,0.0297,-0.1221]);
let TouchSensor525 = browser.currentScene.createNode("TouchSensor");
TouchSensor525.description = "HAnimSite 62 r_calcaneus_posterior";
HAnimSite524YYY.children = new X3D.MFNode();

HAnimSite524ZZZ.children[0] = TouchSensor525;

let Shape526 = browser.currentScene.createNode("Shape");
Shape526.USE = "HAnimSiteShape";
HAnimSite524ZZZ.children[1] = Shape526;

let Billboard527 = browser.currentScene.createNode("Billboard");
let Shape528 = browser.currentScene.createNode("Shape");
let Text529 = browser.currentScene.createNode("Text");
Text529.string = new X3D.MFString([new X3D.SFString("62")]);
let FontStyle530 = browser.currentScene.createNode("FontStyle");
FontStyle530.size = 0.035;
fontStyle = FontStyle530;

geometry = Text529;

Billboard527YYY.children = new X3D.MFNode();

Billboard527ZZZ.children[0] = Shape528;

HAnimSite524ZZZ.children[2] = Billboard527;

HAnimSegment516ZZZ.children[2] = HAnimSite524;

let HAnimSite531 = browser.currentScene.createNode("HAnimSite");
HAnimSite531.name = "r_sphyrion";
HAnimSite531.DEF = "hanim_r_sphyrion";
HAnimSite531.translation = new X3D.SFVec3f([-0.0603,0.061,-0.1002]);
let TouchSensor532 = browser.currentScene.createNode("TouchSensor");
TouchSensor532.description = "HAnimSite 54 r_sphyrion";
HAnimSite531YYY.children = new X3D.MFNode();

HAnimSite531ZZZ.children[0] = TouchSensor532;

let Shape533 = browser.currentScene.createNode("Shape");
Shape533.USE = "HAnimSiteShape";
HAnimSite531ZZZ.children[1] = Shape533;

let Billboard534 = browser.currentScene.createNode("Billboard");
let Shape535 = browser.currentScene.createNode("Shape");
let Text536 = browser.currentScene.createNode("Text");
Text536.string = new X3D.MFString([new X3D.SFString("54")]);
let FontStyle537 = browser.currentScene.createNode("FontStyle");
FontStyle537.size = 0.035;
fontStyle = FontStyle537;

geometry = Text536;

Billboard534YYY.children = new X3D.MFNode();

Billboard534ZZZ.children[0] = Shape535;

HAnimSite531ZZZ.children[2] = Billboard534;

HAnimSegment516ZZZ.children[3] = HAnimSite531;

let Shape538 = browser.currentScene.createNode("Shape");
let LineSet539 = browser.currentScene.createNode("LineSet");
LineSet539.vertexCount = new X3D.MFInt32([2]);
let Coordinate540 = browser.currentScene.createNode("Coordinate");
Coordinate540.point = new X3D.MFVec3f([-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278]);
coord = Coordinate540;

//from r_talocrural to r_calcaneocuboid vertices 2
let ColorRGBA541 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA541.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA541;

geometry = LineSet539;

HAnimSegment516ZZZ.children[4] = Shape538;

HAnimJoint515YYY.children = new X3D.MFNode();

HAnimJoint515ZZZ.children[0] = HAnimSegment516;

let HAnimJoint542 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint542.name = "r_talocalcaneonavicular";
HAnimJoint542.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint542.center = new X3D.SFVec3f([-0.0781,0.0283,-0.097]);
HAnimJoint542.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint542.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment543 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment543.name = "r_navicular";
HAnimSegment543.DEF = "hanim_r_navicular";
let Transform544 = browser.currentScene.createNode("Transform");
Transform544.translation = new X3D.SFVec3f([-0.0781,0.0283,-0.097]);
let Transform545 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape546 = browser.currentScene.createNode("Shape");
Shape546.USE = "HAnimJointShape";
Transform545YYY.child = new X3D.undefined();

Transform545ZZZ.child[0] = Shape546;

Transform544YYY.children = new X3D.MFNode();

Transform544ZZZ.children[0] = Transform545;

HAnimSegment543YYY.children = new X3D.MFNode();

HAnimSegment543ZZZ.children[0] = Transform544;

let Shape547 = browser.currentScene.createNode("Shape");
let LineSet548 = browser.currentScene.createNode("LineSet");
LineSet548.vertexCount = new X3D.MFInt32([2]);
let Coordinate549 = browser.currentScene.createNode("Coordinate");
Coordinate549.point = new X3D.MFVec3f([-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835]);
coord = Coordinate549;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
let ColorRGBA550 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA550.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA550;

geometry = LineSet548;

HAnimSegment543ZZZ.children[1] = Shape547;

let Shape551 = browser.currentScene.createNode("Shape");
let LineSet552 = browser.currentScene.createNode("LineSet");
LineSet552.vertexCount = new X3D.MFInt32([2]);
let Coordinate553 = browser.currentScene.createNode("Coordinate");
Coordinate553.point = new X3D.MFVec3f([-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805]);
coord = Coordinate553;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
let ColorRGBA554 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA554.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA554;

geometry = LineSet552;

HAnimSegment543ZZZ.children[2] = Shape551;

let Shape555 = browser.currentScene.createNode("Shape");
let LineSet556 = browser.currentScene.createNode("LineSet");
LineSet556.vertexCount = new X3D.MFInt32([2]);
let Coordinate557 = browser.currentScene.createNode("Coordinate");
Coordinate557.point = new X3D.MFVec3f([-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821]);
coord = Coordinate557;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
let ColorRGBA558 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA558;

geometry = LineSet556;

HAnimSegment543ZZZ.children[3] = Shape555;

HAnimJoint542YYY.children = new X3D.MFNode();

HAnimJoint542ZZZ.children[0] = HAnimSegment543;

let HAnimJoint559 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint559.name = "r_cuneonavicular_1";
HAnimJoint559.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint559.center = new X3D.SFVec3f([-0.0672,0.0235,-0.0835]);
HAnimJoint559.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint559.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment560 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment560.name = "r_cuneiform_1";
HAnimSegment560.DEF = "hanim_r_cuneiform_1";
let Transform561 = browser.currentScene.createNode("Transform");
Transform561.translation = new X3D.SFVec3f([-0.0672,0.0235,-0.0835]);
let Transform562 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape563 = browser.currentScene.createNode("Shape");
Shape563.USE = "HAnimJointShape";
Transform562YYY.child = new X3D.undefined();

Transform562ZZZ.child[0] = Shape563;

Transform561YYY.children = new X3D.MFNode();

Transform561ZZZ.children[0] = Transform562;

HAnimSegment560YYY.children = new X3D.MFNode();

HAnimSegment560ZZZ.children[0] = Transform561;

let Shape564 = browser.currentScene.createNode("Shape");
let LineSet565 = browser.currentScene.createNode("LineSet");
LineSet565.vertexCount = new X3D.MFInt32([2]);
let Coordinate566 = browser.currentScene.createNode("Coordinate");
Coordinate566.point = new X3D.MFVec3f([-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577]);
coord = Coordinate566;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
let ColorRGBA567 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA567;

geometry = LineSet565;

HAnimSegment560ZZZ.children[1] = Shape564;

HAnimJoint559YYY.children = new X3D.MFNode();

HAnimJoint559ZZZ.children[0] = HAnimSegment560;

let HAnimJoint568 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint568.name = "r_tarsometatarsal_1";
HAnimJoint568.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint568.center = new X3D.SFVec3f([-0.0644,0.0147,-0.0577]);
HAnimJoint568.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint568.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment569 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment569.name = "r_metatarsal_1";
HAnimSegment569.DEF = "hanim_r_metatarsal_1";
let Transform570 = browser.currentScene.createNode("Transform");
Transform570.translation = new X3D.SFVec3f([-0.0644,0.0147,-0.0577]);
let Transform571 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape572 = browser.currentScene.createNode("Shape");
Shape572.USE = "HAnimJointShape";
Transform571YYY.child = new X3D.undefined();

Transform571ZZZ.child[0] = Shape572;

Transform570YYY.children = new X3D.MFNode();

Transform570ZZZ.children[0] = Transform571;

HAnimSegment569YYY.children = new X3D.MFNode();

HAnimSegment569ZZZ.children[0] = Transform570;

let Shape573 = browser.currentScene.createNode("Shape");
let LineSet574 = browser.currentScene.createNode("LineSet");
LineSet574.vertexCount = new X3D.MFInt32([2]);
let Coordinate575 = browser.currentScene.createNode("Coordinate");
Coordinate575.point = new X3D.MFVec3f([-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083]);
coord = Coordinate575;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
let ColorRGBA576 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA576;

geometry = LineSet574;

HAnimSegment569ZZZ.children[1] = Shape573;

HAnimJoint568YYY.children = new X3D.MFNode();

HAnimJoint568ZZZ.children[0] = HAnimSegment569;

let HAnimJoint577 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint577.name = "r_metatarsophalangeal_1";
HAnimJoint577.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint577.center = new X3D.SFVec3f([-0.0619,0.0059,-0.0083]);
HAnimJoint577.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint577.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment578 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment578.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment578.DEF = "hanim_r_tarsal_proximal_phalanx_1";
let Transform579 = browser.currentScene.createNode("Transform");
Transform579.translation = new X3D.SFVec3f([-0.0619,0.0059,-0.0083]);
let Transform580 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape581 = browser.currentScene.createNode("Shape");
Shape581.USE = "HAnimJointShape";
Transform580YYY.child = new X3D.undefined();

Transform580ZZZ.child[0] = Shape581;

Transform579YYY.children = new X3D.MFNode();

Transform579ZZZ.children[0] = Transform580;

HAnimSegment578YYY.children = new X3D.MFNode();

HAnimSegment578ZZZ.children[0] = Transform579;

let Shape582 = browser.currentScene.createNode("Shape");
let LineSet583 = browser.currentScene.createNode("LineSet");
LineSet583.vertexCount = new X3D.MFInt32([2]);
let Coordinate584 = browser.currentScene.createNode("Coordinate");
Coordinate584.point = new X3D.MFVec3f([-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083]);
coord = Coordinate584;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
let ColorRGBA585 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA585;

geometry = LineSet583;

HAnimSegment578ZZZ.children[1] = Shape582;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.name = "r_metatarsal_phalanx_1";
HAnimSite586.DEF = "hanim_r_metatarsal_phalanx_1";
let TouchSensor587 = browser.currentScene.createNode("TouchSensor");
TouchSensor587.description = "HAnimSite 59 r_metatarsal_phalanx_1";
HAnimSite586YYY.children = new X3D.MFNode();

HAnimSite586ZZZ.children[0] = TouchSensor587;

let Shape588 = browser.currentScene.createNode("Shape");
Shape588.USE = "HAnimSiteShape";
HAnimSite586ZZZ.children[1] = Shape588;

let Billboard589 = browser.currentScene.createNode("Billboard");
let Shape590 = browser.currentScene.createNode("Shape");
let Text591 = browser.currentScene.createNode("Text");
Text591.string = new X3D.MFString([new X3D.SFString("59")]);
let FontStyle592 = browser.currentScene.createNode("FontStyle");
FontStyle592.size = 0.035;
fontStyle = FontStyle592;

geometry = Text591;

Billboard589YYY.children = new X3D.MFNode();

Billboard589ZZZ.children[0] = Shape590;

HAnimSite586ZZZ.children[2] = Billboard589;

HAnimSegment578ZZZ.children[2] = HAnimSite586;

HAnimJoint577YYY.children = new X3D.MFNode();

HAnimJoint577ZZZ.children[0] = HAnimSegment578;

let HAnimJoint593 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint593.name = "r_tarsal_interphalangeal_1";
HAnimJoint593.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint593.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint593.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint577ZZZ.children[1] = HAnimJoint593;

HAnimJoint568ZZZ.children[1] = HAnimJoint577;

HAnimJoint559ZZZ.children[1] = HAnimJoint568;

HAnimJoint542ZZZ.children[1] = HAnimJoint559;

let HAnimJoint594 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint594.name = "r_cuneonavicular_2";
HAnimJoint594.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint594.center = new X3D.SFVec3f([-0.0812,0.025,-0.0805]);
HAnimJoint594.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint594.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment595 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment595.name = "r_cuneiform_2";
HAnimSegment595.DEF = "hanim_r_cuneiform_2";
let Transform596 = browser.currentScene.createNode("Transform");
Transform596.translation = new X3D.SFVec3f([-0.0812,0.025,-0.0805]);
let Transform597 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape598 = browser.currentScene.createNode("Shape");
Shape598.USE = "HAnimJointShape";
Transform597YYY.child = new X3D.undefined();

Transform597ZZZ.child[0] = Shape598;

Transform596YYY.children = new X3D.MFNode();

Transform596ZZZ.children[0] = Transform597;

HAnimSegment595YYY.children = new X3D.MFNode();

HAnimSegment595ZZZ.children[0] = Transform596;

let Shape599 = browser.currentScene.createNode("Shape");
let LineSet600 = browser.currentScene.createNode("LineSet");
LineSet600.vertexCount = new X3D.MFInt32([2]);
let Coordinate601 = browser.currentScene.createNode("Coordinate");
Coordinate601.point = new X3D.MFVec3f([-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608]);
coord = Coordinate601;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
let ColorRGBA602 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA602.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA602;

geometry = LineSet600;

HAnimSegment595ZZZ.children[1] = Shape599;

HAnimJoint594YYY.children = new X3D.MFNode();

HAnimJoint594ZZZ.children[0] = HAnimSegment595;

let HAnimJoint603 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint603.name = "r_tarsometatarsal_2";
HAnimJoint603.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint603.center = new X3D.SFVec3f([-0.08,0.0175,-0.0608]);
HAnimJoint603.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint603.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment604 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment604.name = "r_metatarsal_2";
HAnimSegment604.DEF = "hanim_r_metatarsal_2";
let Transform605 = browser.currentScene.createNode("Transform");
Transform605.translation = new X3D.SFVec3f([-0.08,0.0175,-0.0608]);
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
Coordinate610.point = new X3D.MFVec3f([-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
coord = Coordinate610;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
let ColorRGBA611 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA611;

geometry = LineSet609;

HAnimSegment604ZZZ.children[1] = Shape608;

HAnimJoint603YYY.children = new X3D.MFNode();

HAnimJoint603ZZZ.children[0] = HAnimSegment604;

let HAnimJoint612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint612.name = "r_metatarsophalangeal_2";
HAnimJoint612.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint612.center = new X3D.SFVec3f([-0.0823,0.0064,-0.004]);
HAnimJoint612.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint612.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment613 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment613.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment613.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform614 = browser.currentScene.createNode("Transform");
Transform614.translation = new X3D.SFVec3f([-0.0823,0.0064,-0.004]);
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
Coordinate619.point = new X3D.MFVec3f([-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121]);
coord = Coordinate619;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
let ColorRGBA620 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA620.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA620;

geometry = LineSet618;

HAnimSegment613ZZZ.children[1] = Shape617;

HAnimJoint612YYY.children = new X3D.MFNode();

HAnimJoint612ZZZ.children[0] = HAnimSegment613;

let HAnimJoint621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint621.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint621.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint621.center = new X3D.SFVec3f([-0.0841,0.0041,0.0121]);
HAnimJoint621.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint621.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment622 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment622.name = "r_tarsal_middle_phalanx_2";
HAnimSegment622.DEF = "hanim_r_tarsal_middle_phalanx_2";
let Transform623 = browser.currentScene.createNode("Transform");
Transform623.translation = new X3D.SFVec3f([-0.0841,0.0041,0.0121]);
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
Coordinate628.point = new X3D.MFVec3f([-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216]);
coord = Coordinate628;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA629 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA629.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA629;

geometry = LineSet627;

HAnimSegment622ZZZ.children[1] = Shape626;

HAnimJoint621YYY.children = new X3D.MFNode();

HAnimJoint621ZZZ.children[0] = HAnimSegment622;

let HAnimJoint630 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint630.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint630.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint630.center = new X3D.SFVec3f([-0.0841,0.0013,0.0216]);
HAnimJoint630.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint630.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint621ZZZ.children[1] = HAnimJoint630;

HAnimJoint612ZZZ.children[1] = HAnimJoint621;

HAnimJoint603ZZZ.children[1] = HAnimJoint612;

HAnimJoint594ZZZ.children[1] = HAnimJoint603;

HAnimJoint542ZZZ.children[2] = HAnimJoint594;

let HAnimJoint631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint631.name = "r_cuneonavicular_3";
HAnimJoint631.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint631.center = new X3D.SFVec3f([-0.0928,0.0248,-0.0821]);
HAnimJoint631.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint631.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment632 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment632.name = "r_cuneiform_3";
HAnimSegment632.DEF = "hanim_r_cuneiform_3";
let Transform633 = browser.currentScene.createNode("Transform");
Transform633.translation = new X3D.SFVec3f([-0.0928,0.0248,-0.0821]);
let Transform634 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape635 = browser.currentScene.createNode("Shape");
Shape635.USE = "HAnimJointShape";
Transform634YYY.child = new X3D.undefined();

Transform634ZZZ.child[0] = Shape635;

Transform633YYY.children = new X3D.MFNode();

Transform633ZZZ.children[0] = Transform634;

HAnimSegment632YYY.children = new X3D.MFNode();

HAnimSegment632ZZZ.children[0] = Transform633;

let Shape636 = browser.currentScene.createNode("Shape");
let LineSet637 = browser.currentScene.createNode("LineSet");
LineSet637.vertexCount = new X3D.MFInt32([2]);
let Coordinate638 = browser.currentScene.createNode("Coordinate");
Coordinate638.point = new X3D.MFVec3f([-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625]);
coord = Coordinate638;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
let ColorRGBA639 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA639.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA639;

geometry = LineSet637;

HAnimSegment632ZZZ.children[1] = Shape636;

HAnimJoint631YYY.children = new X3D.MFNode();

HAnimJoint631ZZZ.children[0] = HAnimSegment632;

let HAnimJoint640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint640.name = "r_tarsometatarsal_3";
HAnimJoint640.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint640.center = new X3D.SFVec3f([-0.0944,0.0175,-0.0625]);
HAnimJoint640.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint640.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment641 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment641.name = "r_metatarsal_3";
HAnimSegment641.DEF = "hanim_r_metatarsal_3";
let Transform642 = browser.currentScene.createNode("Transform");
Transform642.translation = new X3D.SFVec3f([-0.0944,0.0175,-0.0625]);
let Transform643 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape644 = browser.currentScene.createNode("Shape");
Shape644.USE = "HAnimJointShape";
Transform643YYY.child = new X3D.undefined();

Transform643ZZZ.child[0] = Shape644;

Transform642YYY.children = new X3D.MFNode();

Transform642ZZZ.children[0] = Transform643;

HAnimSegment641YYY.children = new X3D.MFNode();

HAnimSegment641ZZZ.children[0] = Transform642;

let Shape645 = browser.currentScene.createNode("Shape");
let LineSet646 = browser.currentScene.createNode("LineSet");
LineSet646.vertexCount = new X3D.MFInt32([2]);
let Coordinate647 = browser.currentScene.createNode("Coordinate");
Coordinate647.point = new X3D.MFVec3f([-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065]);
coord = Coordinate647;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
let ColorRGBA648 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA648.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA648;

geometry = LineSet646;

HAnimSegment641ZZZ.children[1] = Shape645;

HAnimJoint640YYY.children = new X3D.MFNode();

HAnimJoint640ZZZ.children[0] = HAnimSegment641;

let HAnimJoint649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint649.name = "r_metatarsophalangeal_3";
HAnimJoint649.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint649.center = new X3D.SFVec3f([-0.0963,0.0065,-0.0065]);
HAnimJoint649.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint649.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment650 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment650.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment650.DEF = "hanim_r_tarsal_proximal_phalanx_3";
let Transform651 = browser.currentScene.createNode("Transform");
Transform651.translation = new X3D.SFVec3f([-0.0963,0.0065,-0.0065]);
let Transform652 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape653 = browser.currentScene.createNode("Shape");
Shape653.USE = "HAnimJointShape";
Transform652YYY.child = new X3D.undefined();

Transform652ZZZ.child[0] = Shape653;

Transform651YYY.children = new X3D.MFNode();

Transform651ZZZ.children[0] = Transform652;

HAnimSegment650YYY.children = new X3D.MFNode();

HAnimSegment650ZZZ.children[0] = Transform651;

let Shape654 = browser.currentScene.createNode("Shape");
let LineSet655 = browser.currentScene.createNode("LineSet");
LineSet655.vertexCount = new X3D.MFInt32([2]);
let Coordinate656 = browser.currentScene.createNode("Coordinate");
Coordinate656.point = new X3D.MFVec3f([-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086]);
coord = Coordinate656;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
let ColorRGBA657 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA657;

geometry = LineSet655;

HAnimSegment650ZZZ.children[1] = Shape654;

HAnimJoint649YYY.children = new X3D.MFNode();

HAnimJoint649ZZZ.children[0] = HAnimSegment650;

let HAnimJoint658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint658.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint658.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint658.center = new X3D.SFVec3f([-0.0987,0.0034,0.0086]);
HAnimJoint658.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint658.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment659 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment659.name = "r_tarsal_middle_phalanx_3";
HAnimSegment659.DEF = "hanim_r_tarsal_middle_phalanx_3";
let Transform660 = browser.currentScene.createNode("Transform");
Transform660.translation = new X3D.SFVec3f([-0.0987,0.0034,0.0086]);
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
Coordinate665.point = new X3D.MFVec3f([-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178]);
coord = Coordinate665;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
let ColorRGBA666 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA666;

geometry = LineSet664;

HAnimSegment659ZZZ.children[1] = Shape663;

HAnimJoint658YYY.children = new X3D.MFNode();

HAnimJoint658ZZZ.children[0] = HAnimSegment659;

let HAnimJoint667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint667.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint667.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint667.center = new X3D.SFVec3f([-0.1002,0.0013,0.0178]);
HAnimJoint667.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint667.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint658ZZZ.children[1] = HAnimJoint667;

HAnimJoint649ZZZ.children[1] = HAnimJoint658;

HAnimJoint640ZZZ.children[1] = HAnimJoint649;

HAnimJoint631ZZZ.children[1] = HAnimJoint640;

HAnimJoint542ZZZ.children[3] = HAnimJoint631;

HAnimJoint515ZZZ.children[1] = HAnimJoint542;

let HAnimJoint668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint668.name = "r_calcaneocuboid";
HAnimJoint668.DEF = "hanim_r_calcaneocuboid";
HAnimJoint668.center = new X3D.SFVec3f([-0.0889,0.0494,-0.1278]);
HAnimJoint668.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint668.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment669 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment669.name = "r_calcaneus";
HAnimSegment669.DEF = "hanim_r_calcaneus";
let Transform670 = browser.currentScene.createNode("Transform");
Transform670.translation = new X3D.SFVec3f([-0.0889,0.0494,-0.1278]);
let Transform671 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape672 = browser.currentScene.createNode("Shape");
Shape672.USE = "HAnimJointShape";
Transform671YYY.child = new X3D.undefined();

Transform671ZZZ.child[0] = Shape672;

Transform670YYY.children = new X3D.MFNode();

Transform670ZZZ.children[0] = Transform671;

HAnimSegment669YYY.children = new X3D.MFNode();

HAnimSegment669ZZZ.children[0] = Transform670;

let Shape673 = browser.currentScene.createNode("Shape");
let LineSet674 = browser.currentScene.createNode("LineSet");
LineSet674.vertexCount = new X3D.MFInt32([2]);
let Coordinate675 = browser.currentScene.createNode("Coordinate");
Coordinate675.point = new X3D.MFVec3f([-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998]);
coord = Coordinate675;

//from r_calcaneocuboid to r_transversetarsal vertices 2
let ColorRGBA676 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA676.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA676;

geometry = LineSet674;

HAnimSegment669ZZZ.children[1] = Shape673;

HAnimJoint668YYY.children = new X3D.MFNode();

HAnimJoint668ZZZ.children[0] = HAnimSegment669;

let HAnimJoint677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint677.name = "r_transversetarsal";
HAnimJoint677.DEF = "hanim_r_transversetarsal";
HAnimJoint677.center = new X3D.SFVec3f([-0.1105,0.0267,-0.0998]);
HAnimJoint677.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint677.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment678 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment678.name = "r_cuboid";
HAnimSegment678.DEF = "hanim_r_cuboid";
let Transform679 = browser.currentScene.createNode("Transform");
Transform679.translation = new X3D.SFVec3f([-0.1105,0.0267,-0.0998]);
let Transform680 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape681 = browser.currentScene.createNode("Shape");
Shape681.USE = "HAnimJointShape";
Transform680YYY.child = new X3D.undefined();

Transform680ZZZ.child[0] = Shape681;

Transform679YYY.children = new X3D.MFNode();

Transform679ZZZ.children[0] = Transform680;

HAnimSegment678YYY.children = new X3D.MFNode();

HAnimSegment678ZZZ.children[0] = Transform679;

let Shape682 = browser.currentScene.createNode("Shape");
let LineSet683 = browser.currentScene.createNode("LineSet");
LineSet683.vertexCount = new X3D.MFInt32([2]);
let Coordinate684 = browser.currentScene.createNode("Coordinate");
Coordinate684.point = new X3D.MFVec3f([-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634]);
coord = Coordinate684;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
let ColorRGBA685 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA685.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA685;

geometry = LineSet683;

HAnimSegment678ZZZ.children[1] = Shape682;

let Shape686 = browser.currentScene.createNode("Shape");
let LineSet687 = browser.currentScene.createNode("LineSet");
LineSet687.vertexCount = new X3D.MFInt32([2]);
let Coordinate688 = browser.currentScene.createNode("Coordinate");
Coordinate688.point = new X3D.MFVec3f([-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671]);
coord = Coordinate688;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
let ColorRGBA689 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA689.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA689;

geometry = LineSet687;

HAnimSegment678ZZZ.children[2] = Shape686;

HAnimJoint677YYY.children = new X3D.MFNode();

HAnimJoint677ZZZ.children[0] = HAnimSegment678;

let HAnimJoint690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint690.name = "r_tarsometatarsal_4";
HAnimJoint690.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint690.center = new X3D.SFVec3f([-0.1063,0.016,-0.0634]);
HAnimJoint690.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint690.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment691 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment691.name = "r_metatarsal_4";
HAnimSegment691.DEF = "hanim_r_metatarsal_4";
let Transform692 = browser.currentScene.createNode("Transform");
Transform692.translation = new X3D.SFVec3f([-0.1063,0.016,-0.0634]);
let Transform693 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape694 = browser.currentScene.createNode("Shape");
Shape694.USE = "HAnimJointShape";
Transform693YYY.child = new X3D.undefined();

Transform693ZZZ.child[0] = Shape694;

Transform692YYY.children = new X3D.MFNode();

Transform692ZZZ.children[0] = Transform693;

HAnimSegment691YYY.children = new X3D.MFNode();

HAnimSegment691ZZZ.children[0] = Transform692;

let Shape695 = browser.currentScene.createNode("Shape");
let LineSet696 = browser.currentScene.createNode("LineSet");
LineSet696.vertexCount = new X3D.MFInt32([2]);
let Coordinate697 = browser.currentScene.createNode("Coordinate");
Coordinate697.point = new X3D.MFVec3f([-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107]);
coord = Coordinate697;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
let ColorRGBA698 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA698.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA698;

geometry = LineSet696;

HAnimSegment691ZZZ.children[1] = Shape695;

HAnimJoint690YYY.children = new X3D.MFNode();

HAnimJoint690ZZZ.children[0] = HAnimSegment691;

let HAnimJoint699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint699.name = "r_metatarsophalangeal_4";
HAnimJoint699.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint699.center = new X3D.SFVec3f([-0.1097,0.0058,-0.0107]);
HAnimJoint699.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint699.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment700 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment700.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment700.DEF = "hanim_r_tarsal_proximal_phalanx_4";
let Transform701 = browser.currentScene.createNode("Transform");
Transform701.translation = new X3D.SFVec3f([-0.1097,0.0058,-0.0107]);
let Transform702 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape703 = browser.currentScene.createNode("Shape");
Shape703.USE = "HAnimJointShape";
Transform702YYY.child = new X3D.undefined();

Transform702ZZZ.child[0] = Shape703;

Transform701YYY.children = new X3D.MFNode();

Transform701ZZZ.children[0] = Transform702;

HAnimSegment700YYY.children = new X3D.MFNode();

HAnimSegment700ZZZ.children[0] = Transform701;

let Shape704 = browser.currentScene.createNode("Shape");
let LineSet705 = browser.currentScene.createNode("LineSet");
LineSet705.vertexCount = new X3D.MFInt32([2]);
let Coordinate706 = browser.currentScene.createNode("Coordinate");
Coordinate706.point = new X3D.MFVec3f([-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044]);
coord = Coordinate706;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
let ColorRGBA707 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA707.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA707;

geometry = LineSet705;

HAnimSegment700ZZZ.children[1] = Shape704;

HAnimJoint699YYY.children = new X3D.MFNode();

HAnimJoint699ZZZ.children[0] = HAnimSegment700;

let HAnimJoint708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint708.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint708.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint708.center = new X3D.SFVec3f([-0.114,0.0037,0.0044]);
HAnimJoint708.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint708.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment709 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment709.name = "r_tarsal_middle_phalanx_4";
HAnimSegment709.DEF = "hanim_r_tarsal_middle_phalanx_4";
let Transform710 = browser.currentScene.createNode("Transform");
Transform710.translation = new X3D.SFVec3f([-0.114,0.0037,0.0044]);
let Transform711 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape712 = browser.currentScene.createNode("Shape");
Shape712.USE = "HAnimJointShape";
Transform711YYY.child = new X3D.undefined();

Transform711ZZZ.child[0] = Shape712;

Transform710YYY.children = new X3D.MFNode();

Transform710ZZZ.children[0] = Transform711;

HAnimSegment709YYY.children = new X3D.MFNode();

HAnimSegment709ZZZ.children[0] = Transform710;

let Shape713 = browser.currentScene.createNode("Shape");
let LineSet714 = browser.currentScene.createNode("LineSet");
LineSet714.vertexCount = new X3D.MFInt32([2]);
let Coordinate715 = browser.currentScene.createNode("Coordinate");
Coordinate715.point = new X3D.MFVec3f([-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118]);
coord = Coordinate715;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
let ColorRGBA716 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA716.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA716;

geometry = LineSet714;

HAnimSegment709ZZZ.children[1] = Shape713;

HAnimJoint708YYY.children = new X3D.MFNode();

HAnimJoint708ZZZ.children[0] = HAnimSegment709;

let HAnimJoint717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint717.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint717.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint717.center = new X3D.SFVec3f([-0.1155,0.0008,0.0118]);
HAnimJoint717.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint717.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint708ZZZ.children[1] = HAnimJoint717;

HAnimJoint699ZZZ.children[1] = HAnimJoint708;

HAnimJoint690ZZZ.children[1] = HAnimJoint699;

HAnimJoint677ZZZ.children[1] = HAnimJoint690;

let HAnimJoint718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint718.name = "r_tarsometatarsal_5";
HAnimJoint718.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint718.center = new X3D.SFVec3f([-0.1206,0.0124,-0.0671]);
HAnimJoint718.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint718.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment719 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment719.name = "r_metatarsal_5";
HAnimSegment719.DEF = "hanim_r_metatarsal_5";
let Transform720 = browser.currentScene.createNode("Transform");
Transform720.translation = new X3D.SFVec3f([-0.1206,0.0124,-0.0671]);
let Transform721 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape722 = browser.currentScene.createNode("Shape");
Shape722.USE = "HAnimJointShape";
Transform721YYY.child = new X3D.undefined();

Transform721ZZZ.child[0] = Shape722;

Transform720YYY.children = new X3D.MFNode();

Transform720ZZZ.children[0] = Transform721;

HAnimSegment719YYY.children = new X3D.MFNode();

HAnimSegment719ZZZ.children[0] = Transform720;

let Shape723 = browser.currentScene.createNode("Shape");
let LineSet724 = browser.currentScene.createNode("LineSet");
LineSet724.vertexCount = new X3D.MFInt32([2]);
let Coordinate725 = browser.currentScene.createNode("Coordinate");
Coordinate725.point = new X3D.MFVec3f([-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153]);
coord = Coordinate725;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
let ColorRGBA726 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA726.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA726;

geometry = LineSet724;

HAnimSegment719ZZZ.children[1] = Shape723;

HAnimJoint718YYY.children = new X3D.MFNode();

HAnimJoint718ZZZ.children[0] = HAnimSegment719;

let HAnimJoint727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint727.name = "r_metatarsophalangeal_5";
HAnimJoint727.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint727.center = new X3D.SFVec3f([-0.1239,0.0051,-0.0153]);
HAnimJoint727.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint727.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment728 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment728.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment728.DEF = "hanim_r_tarsal_proximal_phalanx_5";
let Transform729 = browser.currentScene.createNode("Transform");
Transform729.translation = new X3D.SFVec3f([-0.1239,0.0051,-0.0153]);
let Transform730 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape731 = browser.currentScene.createNode("Shape");
Shape731.USE = "HAnimJointShape";
Transform730YYY.child = new X3D.undefined();

Transform730ZZZ.child[0] = Shape731;

Transform729YYY.children = new X3D.MFNode();

Transform729ZZZ.children[0] = Transform730;

HAnimSegment728YYY.children = new X3D.MFNode();

HAnimSegment728ZZZ.children[0] = Transform729;

let Shape732 = browser.currentScene.createNode("Shape");
let LineSet733 = browser.currentScene.createNode("LineSet");
LineSet733.vertexCount = new X3D.MFInt32([2]);
let Coordinate734 = browser.currentScene.createNode("Coordinate");
Coordinate734.point = new X3D.MFVec3f([-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077]);
coord = Coordinate734;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
let ColorRGBA735 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA735;

geometry = LineSet733;

HAnimSegment728ZZZ.children[1] = Shape732;

let HAnimSite736 = browser.currentScene.createNode("HAnimSite");
HAnimSite736.name = "r_metatarsal_phalanx_5";
HAnimSite736.DEF = "hanim_r_metatarsal_phalanx_5";
let TouchSensor737 = browser.currentScene.createNode("TouchSensor");
TouchSensor737.description = "HAnimSite 60 r_metatarsal_phalanx_5";
HAnimSite736YYY.children = new X3D.MFNode();

HAnimSite736ZZZ.children[0] = TouchSensor737;

let Shape738 = browser.currentScene.createNode("Shape");
Shape738.USE = "HAnimSiteShape";
HAnimSite736ZZZ.children[1] = Shape738;

let Billboard739 = browser.currentScene.createNode("Billboard");
let Shape740 = browser.currentScene.createNode("Shape");
let Text741 = browser.currentScene.createNode("Text");
Text741.string = new X3D.MFString([new X3D.SFString("60")]);
let FontStyle742 = browser.currentScene.createNode("FontStyle");
FontStyle742.size = 0.035;
fontStyle = FontStyle742;

geometry = Text741;

Billboard739YYY.children = new X3D.MFNode();

Billboard739ZZZ.children[0] = Shape740;

HAnimSite736ZZZ.children[2] = Billboard739;

HAnimSegment728ZZZ.children[2] = HAnimSite736;

HAnimJoint727YYY.children = new X3D.MFNode();

HAnimJoint727ZZZ.children[0] = HAnimSegment728;

let HAnimJoint743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint743.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint743.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint743.center = new X3D.SFVec3f([-0.1262,0.0023,-0.0077]);
HAnimJoint743.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint743.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment744 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment744.name = "r_tarsal_middle_phalanx_5";
HAnimSegment744.DEF = "hanim_r_tarsal_middle_phalanx_5";
let Transform745 = browser.currentScene.createNode("Transform");
Transform745.translation = new X3D.SFVec3f([-0.1262,0.0023,-0.0077]);
let Transform746 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape747 = browser.currentScene.createNode("Shape");
Shape747.USE = "HAnimJointShape";
Transform746YYY.child = new X3D.undefined();

Transform746ZZZ.child[0] = Shape747;

Transform745YYY.children = new X3D.MFNode();

Transform745ZZZ.children[0] = Transform746;

HAnimSegment744YYY.children = new X3D.MFNode();

HAnimSegment744ZZZ.children[0] = Transform745;

let Shape748 = browser.currentScene.createNode("Shape");
let LineSet749 = browser.currentScene.createNode("LineSet");
LineSet749.vertexCount = new X3D.MFInt32([2]);
let Coordinate750 = browser.currentScene.createNode("Coordinate");
Coordinate750.point = new X3D.MFVec3f([-0.1262,0.0023,-0.0077,-0.1271,0,0]);
coord = Coordinate750;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
let ColorRGBA751 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA751.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA751;

geometry = LineSet749;

HAnimSegment744ZZZ.children[1] = Shape748;

HAnimJoint743YYY.children = new X3D.MFNode();

HAnimJoint743ZZZ.children[0] = HAnimSegment744;

let HAnimJoint752 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint752.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint752.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint752.center = new X3D.SFVec3f([-0.1271,0,0]);
HAnimJoint752.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint752.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint743ZZZ.children[1] = HAnimJoint752;

HAnimJoint727ZZZ.children[1] = HAnimJoint743;

HAnimJoint718ZZZ.children[1] = HAnimJoint727;

HAnimJoint677ZZZ.children[2] = HAnimJoint718;

HAnimJoint668ZZZ.children[1] = HAnimJoint677;

HAnimJoint515ZZZ.children[2] = HAnimJoint668;

HAnimJoint485ZZZ.children[1] = HAnimJoint515;

HAnimJoint448ZZZ.children[1] = HAnimJoint485;

HAnimJoint60ZZZ.children[2] = HAnimJoint448;

HAnimJoint47ZZZ.children[1] = HAnimJoint60;

let HAnimJoint753 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint753.name = "vl5";
HAnimJoint753.DEF = "hanim_vl5";
HAnimJoint753.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
HAnimJoint753.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint753.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment754 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment754.name = "l5";
HAnimSegment754.DEF = "hanim_l5";
let Transform755 = browser.currentScene.createNode("Transform");
Transform755.translation = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
let Transform756 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape757 = browser.currentScene.createNode("Shape");
Shape757.USE = "HAnimJointShape";
Transform756YYY.child = new X3D.undefined();

Transform756ZZZ.child[0] = Shape757;

Transform755YYY.children = new X3D.MFNode();

Transform755ZZZ.children[0] = Transform756;

HAnimSegment754YYY.children = new X3D.MFNode();

HAnimSegment754ZZZ.children[0] = Transform755;

let Shape758 = browser.currentScene.createNode("Shape");
let LineSet759 = browser.currentScene.createNode("LineSet");
LineSet759.vertexCount = new X3D.MFInt32([2]);
let Coordinate760 = browser.currentScene.createNode("Coordinate");
Coordinate760.point = new X3D.MFVec3f([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
coord = Coordinate760;

//from vl5 to vl4 vertices 2
let ColorRGBA761 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA761.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA761;

geometry = LineSet759;

HAnimSegment754ZZZ.children[1] = Shape758;

let HAnimSite762 = browser.currentScene.createNode("HAnimSite");
HAnimSite762.name = "navel";
HAnimSite762.DEF = "hanim_navel";
HAnimSite762.translation = new X3D.SFVec3f([0.0069,1.0966,0.1017]);
let TouchSensor763 = browser.currentScene.createNode("TouchSensor");
TouchSensor763.description = "HAnimSite 84 navel";
HAnimSite762YYY.children = new X3D.MFNode();

HAnimSite762ZZZ.children[0] = TouchSensor763;

let Shape764 = browser.currentScene.createNode("Shape");
Shape764.USE = "HAnimSiteShape";
HAnimSite762ZZZ.children[1] = Shape764;

let Billboard765 = browser.currentScene.createNode("Billboard");
let Shape766 = browser.currentScene.createNode("Shape");
let Text767 = browser.currentScene.createNode("Text");
Text767.string = new X3D.MFString([new X3D.SFString("84")]);
let FontStyle768 = browser.currentScene.createNode("FontStyle");
FontStyle768.size = 0.035;
fontStyle = FontStyle768;

geometry = Text767;

Billboard765YYY.children = new X3D.MFNode();

Billboard765ZZZ.children[0] = Shape766;

HAnimSite762ZZZ.children[2] = Billboard765;

HAnimSegment754ZZZ.children[2] = HAnimSite762;

let HAnimSite769 = browser.currentScene.createNode("HAnimSite");
HAnimSite769.name = "waist_preferred_anterior";
HAnimSite769.DEF = "hanim_waist_preferred_anterior";
let TouchSensor770 = browser.currentScene.createNode("TouchSensor");
TouchSensor770.description = "HAnimSite 26 waist_preferred_anterior";
HAnimSite769YYY.children = new X3D.MFNode();

HAnimSite769ZZZ.children[0] = TouchSensor770;

let Shape771 = browser.currentScene.createNode("Shape");
Shape771.USE = "HAnimSiteShape";
HAnimSite769ZZZ.children[1] = Shape771;

let Billboard772 = browser.currentScene.createNode("Billboard");
let Shape773 = browser.currentScene.createNode("Shape");
let Text774 = browser.currentScene.createNode("Text");
Text774.string = new X3D.MFString([new X3D.SFString("26")]);
let FontStyle775 = browser.currentScene.createNode("FontStyle");
FontStyle775.size = 0.035;
fontStyle = FontStyle775;

geometry = Text774;

Billboard772YYY.children = new X3D.MFNode();

Billboard772ZZZ.children[0] = Shape773;

HAnimSite769ZZZ.children[2] = Billboard772;

HAnimSegment754ZZZ.children[3] = HAnimSite769;

let HAnimSite776 = browser.currentScene.createNode("HAnimSite");
HAnimSite776.name = "waist_preferred_posterior";
HAnimSite776.DEF = "hanim_waist_preferred_posterior";
HAnimSite776.translation = new X3D.SFVec3f([0.29,1.0915,-0.1091]);
let TouchSensor777 = browser.currentScene.createNode("TouchSensor");
TouchSensor777.description = "HAnimSite 27 waist_preferred_posterior";
HAnimSite776YYY.children = new X3D.MFNode();

HAnimSite776ZZZ.children[0] = TouchSensor777;

let Shape778 = browser.currentScene.createNode("Shape");
Shape778.USE = "HAnimSiteShape";
HAnimSite776ZZZ.children[1] = Shape778;

let Billboard779 = browser.currentScene.createNode("Billboard");
let Shape780 = browser.currentScene.createNode("Shape");
let Text781 = browser.currentScene.createNode("Text");
Text781.string = new X3D.MFString([new X3D.SFString("27")]);
let FontStyle782 = browser.currentScene.createNode("FontStyle");
FontStyle782.size = 0.035;
fontStyle = FontStyle782;

geometry = Text781;

Billboard779YYY.children = new X3D.MFNode();

Billboard779ZZZ.children[0] = Shape780;

HAnimSite776ZZZ.children[2] = Billboard779;

HAnimSegment754ZZZ.children[4] = HAnimSite776;

HAnimJoint753YYY.children = new X3D.MFNode();

HAnimJoint753ZZZ.children[0] = HAnimSegment754;

let HAnimJoint783 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint783.name = "vl4";
HAnimJoint783.DEF = "hanim_vl4";
HAnimJoint783.center = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
HAnimJoint783.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint783.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment784.name = "l4";
HAnimSegment784.DEF = "hanim_l4";
let Transform785 = browser.currentScene.createNode("Transform");
Transform785.translation = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
let Transform786 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape787 = browser.currentScene.createNode("Shape");
Shape787.USE = "HAnimJointShape";
Transform786YYY.child = new X3D.undefined();

Transform786ZZZ.child[0] = Shape787;

Transform785YYY.children = new X3D.MFNode();

Transform785ZZZ.children[0] = Transform786;

HAnimSegment784YYY.children = new X3D.MFNode();

HAnimSegment784ZZZ.children[0] = Transform785;

let Shape788 = browser.currentScene.createNode("Shape");
let LineSet789 = browser.currentScene.createNode("LineSet");
LineSet789.vertexCount = new X3D.MFInt32([2]);
let Coordinate790 = browser.currentScene.createNode("Coordinate");
Coordinate790.point = new X3D.MFVec3f([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
coord = Coordinate790;

//from vl4 to vl3 vertices 2
let ColorRGBA791 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA791.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA791;

geometry = LineSet789;

HAnimSegment784ZZZ.children[1] = Shape788;

HAnimJoint783YYY.children = new X3D.MFNode();

HAnimJoint783ZZZ.children[0] = HAnimSegment784;

let HAnimJoint792 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint792.name = "vl3";
HAnimJoint792.DEF = "hanim_vl3";
HAnimJoint792.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
HAnimJoint792.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint792.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment793.name = "l3";
HAnimSegment793.DEF = "hanim_l3";
let Transform794 = browser.currentScene.createNode("Transform");
Transform794.translation = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
let Transform795 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape796 = browser.currentScene.createNode("Shape");
Shape796.USE = "HAnimJointShape";
Transform795YYY.child = new X3D.undefined();

Transform795ZZZ.child[0] = Shape796;

Transform794YYY.children = new X3D.MFNode();

Transform794ZZZ.children[0] = Transform795;

HAnimSegment793YYY.children = new X3D.MFNode();

HAnimSegment793ZZZ.children[0] = Transform794;

let Shape797 = browser.currentScene.createNode("Shape");
let LineSet798 = browser.currentScene.createNode("LineSet");
LineSet798.vertexCount = new X3D.MFInt32([2]);
let Coordinate799 = browser.currentScene.createNode("Coordinate");
Coordinate799.point = new X3D.MFVec3f([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
coord = Coordinate799;

//from vl3 to vl2 vertices 2
let ColorRGBA800 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA800.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA800;

geometry = LineSet798;

HAnimSegment793ZZZ.children[1] = Shape797;

HAnimJoint792YYY.children = new X3D.MFNode();

HAnimJoint792ZZZ.children[0] = HAnimSegment793;

let HAnimJoint801 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint801.name = "vl2";
HAnimJoint801.DEF = "hanim_vl2";
HAnimJoint801.center = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
HAnimJoint801.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint801.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment802.name = "l2";
HAnimSegment802.DEF = "hanim_l2";
let Transform803 = browser.currentScene.createNode("Transform");
Transform803.translation = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
let Transform804 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape805 = browser.currentScene.createNode("Shape");
Shape805.USE = "HAnimJointShape";
Transform804YYY.child = new X3D.undefined();

Transform804ZZZ.child[0] = Shape805;

Transform803YYY.children = new X3D.MFNode();

Transform803ZZZ.children[0] = Transform804;

HAnimSegment802YYY.children = new X3D.MFNode();

HAnimSegment802ZZZ.children[0] = Transform803;

let Shape806 = browser.currentScene.createNode("Shape");
let LineSet807 = browser.currentScene.createNode("LineSet");
LineSet807.vertexCount = new X3D.MFInt32([2]);
let Coordinate808 = browser.currentScene.createNode("Coordinate");
Coordinate808.point = new X3D.MFVec3f([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
coord = Coordinate808;

//from vl2 to vl1 vertices 2
let ColorRGBA809 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA809.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA809;

geometry = LineSet807;

HAnimSegment802ZZZ.children[1] = Shape806;

let HAnimSite810 = browser.currentScene.createNode("HAnimSite");
HAnimSite810.name = "l_rib10";
HAnimSite810.DEF = "hanim_l_rib10";
HAnimSite810.translation = new X3D.SFVec3f([0.0871,1.1925,0.0992]);
let TouchSensor811 = browser.currentScene.createNode("TouchSensor");
TouchSensor811.description = "HAnimSite 28 l_rib10";
HAnimSite810YYY.children = new X3D.MFNode();

HAnimSite810ZZZ.children[0] = TouchSensor811;

let Shape812 = browser.currentScene.createNode("Shape");
Shape812.USE = "HAnimSiteShape";
HAnimSite810ZZZ.children[1] = Shape812;

let Billboard813 = browser.currentScene.createNode("Billboard");
let Shape814 = browser.currentScene.createNode("Shape");
let Text815 = browser.currentScene.createNode("Text");
Text815.string = new X3D.MFString([new X3D.SFString("28")]);
let FontStyle816 = browser.currentScene.createNode("FontStyle");
FontStyle816.size = 0.035;
fontStyle = FontStyle816;

geometry = Text815;

Billboard813YYY.children = new X3D.MFNode();

Billboard813ZZZ.children[0] = Shape814;

HAnimSite810ZZZ.children[2] = Billboard813;

HAnimSegment802ZZZ.children[2] = HAnimSite810;

let HAnimSite817 = browser.currentScene.createNode("HAnimSite");
HAnimSite817.name = "r_rib10";
HAnimSite817.DEF = "hanim_r_rib10";
HAnimSite817.translation = new X3D.SFVec3f([-0.0711,1.1941,0.1016]);
let TouchSensor818 = browser.currentScene.createNode("TouchSensor");
TouchSensor818.description = "HAnimSite 30 r_rib10";
HAnimSite817YYY.children = new X3D.MFNode();

HAnimSite817ZZZ.children[0] = TouchSensor818;

let Shape819 = browser.currentScene.createNode("Shape");
Shape819.USE = "HAnimSiteShape";
HAnimSite817ZZZ.children[1] = Shape819;

let Billboard820 = browser.currentScene.createNode("Billboard");
let Shape821 = browser.currentScene.createNode("Shape");
let Text822 = browser.currentScene.createNode("Text");
Text822.string = new X3D.MFString([new X3D.SFString("30")]);
let FontStyle823 = browser.currentScene.createNode("FontStyle");
FontStyle823.size = 0.035;
fontStyle = FontStyle823;

geometry = Text822;

Billboard820YYY.children = new X3D.MFNode();

Billboard820ZZZ.children[0] = Shape821;

HAnimSite817ZZZ.children[2] = Billboard820;

HAnimSegment802ZZZ.children[3] = HAnimSite817;

let HAnimSite824 = browser.currentScene.createNode("HAnimSite");
HAnimSite824.name = "spine_2_middle_back";
HAnimSite824.DEF = "hanim_spine_2_middle_back";
let TouchSensor825 = browser.currentScene.createNode("TouchSensor");
TouchSensor825.description = "HAnimSite spine_2_middle_back";
HAnimSite824YYY.children = new X3D.MFNode();

HAnimSite824ZZZ.children[0] = TouchSensor825;

let Shape826 = browser.currentScene.createNode("Shape");
Shape826.USE = "HAnimSiteShape";
HAnimSite824ZZZ.children[1] = Shape826;

let Billboard827 = browser.currentScene.createNode("Billboard");
let Shape828 = browser.currentScene.createNode("Shape");
let Text829 = browser.currentScene.createNode("Text");
Text829.string = new X3D.MFString([new X3D.SFString("")]);
let FontStyle830 = browser.currentScene.createNode("FontStyle");
FontStyle830.size = 0.035;
fontStyle = FontStyle830;

geometry = Text829;

Billboard827YYY.children = new X3D.MFNode();

Billboard827ZZZ.children[0] = Shape828;

HAnimSite824ZZZ.children[2] = Billboard827;

HAnimSegment802ZZZ.children[4] = HAnimSite824;

HAnimJoint801YYY.children = new X3D.MFNode();

HAnimJoint801ZZZ.children[0] = HAnimSegment802;

let HAnimJoint831 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint831.name = "vl1";
HAnimJoint831.DEF = "hanim_vl1";
HAnimJoint831.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
HAnimJoint831.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint831.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment832.name = "l1";
HAnimSegment832.DEF = "hanim_l1";
let Transform833 = browser.currentScene.createNode("Transform");
Transform833.translation = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
let Transform834 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape835 = browser.currentScene.createNode("Shape");
Shape835.USE = "HAnimJointShape";
Transform834YYY.child = new X3D.undefined();

Transform834ZZZ.child[0] = Shape835;

Transform833YYY.children = new X3D.MFNode();

Transform833ZZZ.children[0] = Transform834;

HAnimSegment832YYY.children = new X3D.MFNode();

HAnimSegment832ZZZ.children[0] = Transform833;

let Shape836 = browser.currentScene.createNode("Shape");
let LineSet837 = browser.currentScene.createNode("LineSet");
LineSet837.vertexCount = new X3D.MFInt32([2]);
let Coordinate838 = browser.currentScene.createNode("Coordinate");
Coordinate838.point = new X3D.MFVec3f([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
coord = Coordinate838;

//from vl1 to vt12 vertices 2
let ColorRGBA839 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA839.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA839;

geometry = LineSet837;

HAnimSegment832ZZZ.children[1] = Shape836;

HAnimJoint831YYY.children = new X3D.MFNode();

HAnimJoint831ZZZ.children[0] = HAnimSegment832;

let HAnimJoint840 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint840.name = "vt12";
HAnimJoint840.DEF = "hanim_vt12";
HAnimJoint840.center = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
HAnimJoint840.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint840.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment841.name = "t12";
HAnimSegment841.DEF = "hanim_t12";
let Transform842 = browser.currentScene.createNode("Transform");
Transform842.translation = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
let Transform843 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape844 = browser.currentScene.createNode("Shape");
Shape844.USE = "HAnimJointShape";
Transform843YYY.child = new X3D.undefined();

Transform843ZZZ.child[0] = Shape844;

Transform842YYY.children = new X3D.MFNode();

Transform842ZZZ.children[0] = Transform843;

HAnimSegment841YYY.children = new X3D.MFNode();

HAnimSegment841ZZZ.children[0] = Transform842;

let Shape845 = browser.currentScene.createNode("Shape");
let LineSet846 = browser.currentScene.createNode("LineSet");
LineSet846.vertexCount = new X3D.MFInt32([2]);
let Coordinate847 = browser.currentScene.createNode("Coordinate");
Coordinate847.point = new X3D.MFVec3f([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
coord = Coordinate847;

//from vt12 to vt11 vertices 2
let ColorRGBA848 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA848.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA848;

geometry = LineSet846;

HAnimSegment841ZZZ.children[1] = Shape845;

HAnimJoint840YYY.children = new X3D.MFNode();

HAnimJoint840ZZZ.children[0] = HAnimSegment841;

let HAnimJoint849 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint849.name = "vt11";
HAnimJoint849.DEF = "hanim_vt11";
HAnimJoint849.center = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
HAnimJoint849.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint849.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment850.name = "t11";
HAnimSegment850.DEF = "hanim_t11";
let Transform851 = browser.currentScene.createNode("Transform");
Transform851.translation = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
let Transform852 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape853 = browser.currentScene.createNode("Shape");
Shape853.USE = "HAnimJointShape";
Transform852YYY.child = new X3D.undefined();

Transform852ZZZ.child[0] = Shape853;

Transform851YYY.children = new X3D.MFNode();

Transform851ZZZ.children[0] = Transform852;

HAnimSegment850YYY.children = new X3D.MFNode();

HAnimSegment850ZZZ.children[0] = Transform851;

let Shape854 = browser.currentScene.createNode("Shape");
let LineSet855 = browser.currentScene.createNode("LineSet");
LineSet855.vertexCount = new X3D.MFInt32([2]);
let Coordinate856 = browser.currentScene.createNode("Coordinate");
Coordinate856.point = new X3D.MFVec3f([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
coord = Coordinate856;

//from vt11 to vt10 vertices 2
let ColorRGBA857 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA857.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA857;

geometry = LineSet855;

HAnimSegment850ZZZ.children[1] = Shape854;

HAnimJoint849YYY.children = new X3D.MFNode();

HAnimJoint849ZZZ.children[0] = HAnimSegment850;

let HAnimJoint858 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint858.name = "vt10";
HAnimJoint858.DEF = "hanim_vt10";
HAnimJoint858.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
HAnimJoint858.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint858.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment859 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment859.name = "t10";
HAnimSegment859.DEF = "hanim_t10";
let Transform860 = browser.currentScene.createNode("Transform");
Transform860.translation = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
let Transform861 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape862 = browser.currentScene.createNode("Shape");
Shape862.USE = "HAnimJointShape";
Transform861YYY.child = new X3D.undefined();

Transform861ZZZ.child[0] = Shape862;

Transform860YYY.children = new X3D.MFNode();

Transform860ZZZ.children[0] = Transform861;

HAnimSegment859YYY.children = new X3D.MFNode();

HAnimSegment859ZZZ.children[0] = Transform860;

let Shape863 = browser.currentScene.createNode("Shape");
let LineSet864 = browser.currentScene.createNode("LineSet");
LineSet864.vertexCount = new X3D.MFInt32([2]);
let Coordinate865 = browser.currentScene.createNode("Coordinate");
Coordinate865.point = new X3D.MFVec3f([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
coord = Coordinate865;

//from vt10 to vt9 vertices 2
let ColorRGBA866 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA866.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA866;

geometry = LineSet864;

HAnimSegment859ZZZ.children[1] = Shape863;

let HAnimSite867 = browser.currentScene.createNode("HAnimSite");
HAnimSite867.name = "substernale";
HAnimSite867.DEF = "hanim_substernale";
HAnimSite867.translation = new X3D.SFVec3f([0.0085,1.2995,0.1147]);
let TouchSensor868 = browser.currentScene.createNode("TouchSensor");
TouchSensor868.description = "HAnimSite 13 substernale";
HAnimSite867YYY.children = new X3D.MFNode();

HAnimSite867ZZZ.children[0] = TouchSensor868;

let Shape869 = browser.currentScene.createNode("Shape");
Shape869.USE = "HAnimSiteShape";
HAnimSite867ZZZ.children[1] = Shape869;

let Billboard870 = browser.currentScene.createNode("Billboard");
let Shape871 = browser.currentScene.createNode("Shape");
let Text872 = browser.currentScene.createNode("Text");
Text872.string = new X3D.MFString([new X3D.SFString("13")]);
let FontStyle873 = browser.currentScene.createNode("FontStyle");
FontStyle873.size = 0.035;
fontStyle = FontStyle873;

geometry = Text872;

Billboard870YYY.children = new X3D.MFNode();

Billboard870ZZZ.children[0] = Shape871;

HAnimSite867ZZZ.children[2] = Billboard870;

HAnimSegment859ZZZ.children[2] = HAnimSite867;

HAnimJoint858YYY.children = new X3D.MFNode();

HAnimJoint858ZZZ.children[0] = HAnimSegment859;

let HAnimJoint874 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint874.name = "vt9";
HAnimJoint874.DEF = "hanim_vt9";
HAnimJoint874.center = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
HAnimJoint874.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint874.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment875 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment875.name = "t9";
HAnimSegment875.DEF = "hanim_t9";
let Transform876 = browser.currentScene.createNode("Transform");
Transform876.translation = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
let Transform877 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape878 = browser.currentScene.createNode("Shape");
Shape878.USE = "HAnimJointShape";
Transform877YYY.child = new X3D.undefined();

Transform877ZZZ.child[0] = Shape878;

Transform876YYY.children = new X3D.MFNode();

Transform876ZZZ.children[0] = Transform877;

HAnimSegment875YYY.children = new X3D.MFNode();

HAnimSegment875ZZZ.children[0] = Transform876;

let Shape879 = browser.currentScene.createNode("Shape");
let LineSet880 = browser.currentScene.createNode("LineSet");
LineSet880.vertexCount = new X3D.MFInt32([2]);
let Coordinate881 = browser.currentScene.createNode("Coordinate");
Coordinate881.point = new X3D.MFVec3f([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
coord = Coordinate881;

//from vt9 to vt8 vertices 2
let ColorRGBA882 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA882.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA882;

geometry = LineSet880;

HAnimSegment875ZZZ.children[1] = Shape879;

let HAnimSite883 = browser.currentScene.createNode("HAnimSite");
HAnimSite883.name = "l_thelion";
HAnimSite883.DEF = "hanim_l_thelion";
HAnimSite883.translation = new X3D.SFVec3f([0.0918,1.3382,0.1192]);
let TouchSensor884 = browser.currentScene.createNode("TouchSensor");
TouchSensor884.description = "HAnimSite 29 l_thelion";
HAnimSite883YYY.children = new X3D.MFNode();

HAnimSite883ZZZ.children[0] = TouchSensor884;

let Shape885 = browser.currentScene.createNode("Shape");
Shape885.USE = "HAnimSiteShape";
HAnimSite883ZZZ.children[1] = Shape885;

let Billboard886 = browser.currentScene.createNode("Billboard");
let Shape887 = browser.currentScene.createNode("Shape");
let Text888 = browser.currentScene.createNode("Text");
Text888.string = new X3D.MFString([new X3D.SFString("29")]);
let FontStyle889 = browser.currentScene.createNode("FontStyle");
FontStyle889.size = 0.035;
fontStyle = FontStyle889;

geometry = Text888;

Billboard886YYY.children = new X3D.MFNode();

Billboard886ZZZ.children[0] = Shape887;

HAnimSite883ZZZ.children[2] = Billboard886;

HAnimSegment875ZZZ.children[2] = HAnimSite883;

let HAnimSite890 = browser.currentScene.createNode("HAnimSite");
HAnimSite890.name = "r_thelion";
HAnimSite890.DEF = "hanim_r_thelion";
HAnimSite890.translation = new X3D.SFVec3f([-0.0736,1.3385,0.1217]);
let TouchSensor891 = browser.currentScene.createNode("TouchSensor");
TouchSensor891.description = "HAnimSite 31 r_thelion";
HAnimSite890YYY.children = new X3D.MFNode();

HAnimSite890ZZZ.children[0] = TouchSensor891;

let Shape892 = browser.currentScene.createNode("Shape");
Shape892.USE = "HAnimSiteShape";
HAnimSite890ZZZ.children[1] = Shape892;

let Billboard893 = browser.currentScene.createNode("Billboard");
let Shape894 = browser.currentScene.createNode("Shape");
let Text895 = browser.currentScene.createNode("Text");
Text895.string = new X3D.MFString([new X3D.SFString("31")]);
let FontStyle896 = browser.currentScene.createNode("FontStyle");
FontStyle896.size = 0.035;
fontStyle = FontStyle896;

geometry = Text895;

Billboard893YYY.children = new X3D.MFNode();

Billboard893ZZZ.children[0] = Shape894;

HAnimSite890ZZZ.children[2] = Billboard893;

HAnimSegment875ZZZ.children[3] = HAnimSite890;

HAnimJoint874YYY.children = new X3D.MFNode();

HAnimJoint874ZZZ.children[0] = HAnimSegment875;

let HAnimJoint897 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint897.name = "vt8";
HAnimJoint897.DEF = "hanim_vt8";
HAnimJoint897.center = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
HAnimJoint897.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint897.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment898 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment898.name = "t8";
HAnimSegment898.DEF = "hanim_t8";
let Transform899 = browser.currentScene.createNode("Transform");
Transform899.translation = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
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
Coordinate904.point = new X3D.MFVec3f([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
coord = Coordinate904;

//from vt8 to vt7 vertices 2
let ColorRGBA905 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA905;

geometry = LineSet903;

HAnimSegment898ZZZ.children[1] = Shape902;

HAnimJoint897YYY.children = new X3D.MFNode();

HAnimJoint897ZZZ.children[0] = HAnimSegment898;

let HAnimJoint906 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint906.name = "vt7";
HAnimJoint906.DEF = "hanim_vt7";
HAnimJoint906.center = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
HAnimJoint906.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint906.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment907 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment907.name = "t7";
HAnimSegment907.DEF = "hanim_t7";
let Transform908 = browser.currentScene.createNode("Transform");
Transform908.translation = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
let Transform909 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape910 = browser.currentScene.createNode("Shape");
Shape910.USE = "HAnimJointShape";
Transform909YYY.child = new X3D.undefined();

Transform909ZZZ.child[0] = Shape910;

Transform908YYY.children = new X3D.MFNode();

Transform908ZZZ.children[0] = Transform909;

HAnimSegment907YYY.children = new X3D.MFNode();

HAnimSegment907ZZZ.children[0] = Transform908;

let Shape911 = browser.currentScene.createNode("Shape");
let LineSet912 = browser.currentScene.createNode("LineSet");
LineSet912.vertexCount = new X3D.MFInt32([2]);
let Coordinate913 = browser.currentScene.createNode("Coordinate");
Coordinate913.point = new X3D.MFVec3f([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
coord = Coordinate913;

//from vt7 to vt6 vertices 2
let ColorRGBA914 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA914.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA914;

geometry = LineSet912;

HAnimSegment907ZZZ.children[1] = Shape911;

HAnimJoint906YYY.children = new X3D.MFNode();

HAnimJoint906ZZZ.children[0] = HAnimSegment907;

let HAnimJoint915 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint915.name = "vt6";
HAnimJoint915.DEF = "hanim_vt6";
HAnimJoint915.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
HAnimJoint915.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint915.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment916 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment916.name = "t6";
HAnimSegment916.DEF = "hanim_t6";
let Transform917 = browser.currentScene.createNode("Transform");
Transform917.translation = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
let Transform918 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape919 = browser.currentScene.createNode("Shape");
Shape919.USE = "HAnimJointShape";
Transform918YYY.child = new X3D.undefined();

Transform918ZZZ.child[0] = Shape919;

Transform917YYY.children = new X3D.MFNode();

Transform917ZZZ.children[0] = Transform918;

HAnimSegment916YYY.children = new X3D.MFNode();

HAnimSegment916ZZZ.children[0] = Transform917;

let Shape920 = browser.currentScene.createNode("Shape");
let LineSet921 = browser.currentScene.createNode("LineSet");
LineSet921.vertexCount = new X3D.MFInt32([2]);
let Coordinate922 = browser.currentScene.createNode("Coordinate");
Coordinate922.point = new X3D.MFVec3f([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
coord = Coordinate922;

//from vt6 to vt5 vertices 2
let ColorRGBA923 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA923.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA923;

geometry = LineSet921;

HAnimSegment916ZZZ.children[1] = Shape920;

let HAnimSite924 = browser.currentScene.createNode("HAnimSite");
HAnimSite924.name = "l_chest_midsagittal_plane";
HAnimSite924.DEF = "hanim_l_chest_midsagittal_plane";
let TouchSensor925 = browser.currentScene.createNode("TouchSensor");
TouchSensor925.description = "HAnimSite 94 l_chest_midsagittal_plane";
HAnimSite924YYY.children = new X3D.MFNode();

HAnimSite924ZZZ.children[0] = TouchSensor925;

let Shape926 = browser.currentScene.createNode("Shape");
Shape926.USE = "HAnimSiteShape";
HAnimSite924ZZZ.children[1] = Shape926;

let Billboard927 = browser.currentScene.createNode("Billboard");
let Shape928 = browser.currentScene.createNode("Shape");
let Text929 = browser.currentScene.createNode("Text");
Text929.string = new X3D.MFString([new X3D.SFString("94")]);
let FontStyle930 = browser.currentScene.createNode("FontStyle");
FontStyle930.size = 0.035;
fontStyle = FontStyle930;

geometry = Text929;

Billboard927YYY.children = new X3D.MFNode();

Billboard927ZZZ.children[0] = Shape928;

HAnimSite924ZZZ.children[2] = Billboard927;

HAnimSegment916ZZZ.children[2] = HAnimSite924;

let HAnimSite931 = browser.currentScene.createNode("HAnimSite");
HAnimSite931.name = "mesosternale";
HAnimSite931.DEF = "hanim_mesosternale";
let TouchSensor932 = browser.currentScene.createNode("TouchSensor");
TouchSensor932.description = "HAnimSite 88 mesosternale";
HAnimSite931YYY.children = new X3D.MFNode();

HAnimSite931ZZZ.children[0] = TouchSensor932;

let Shape933 = browser.currentScene.createNode("Shape");
Shape933.USE = "HAnimSiteShape";
HAnimSite931ZZZ.children[1] = Shape933;

let Billboard934 = browser.currentScene.createNode("Billboard");
let Shape935 = browser.currentScene.createNode("Shape");
let Text936 = browser.currentScene.createNode("Text");
Text936.string = new X3D.MFString([new X3D.SFString("88")]);
let FontStyle937 = browser.currentScene.createNode("FontStyle");
FontStyle937.size = 0.035;
fontStyle = FontStyle937;

geometry = Text936;

Billboard934YYY.children = new X3D.MFNode();

Billboard934ZZZ.children[0] = Shape935;

HAnimSite931ZZZ.children[2] = Billboard934;

HAnimSegment916ZZZ.children[3] = HAnimSite931;

let HAnimSite938 = browser.currentScene.createNode("HAnimSite");
HAnimSite938.name = "r_chest_midsagittal_plane";
HAnimSite938.DEF = "hanim_r_chest_midsagittal_plane";
let TouchSensor939 = browser.currentScene.createNode("TouchSensor");
TouchSensor939.description = "HAnimSite 95 r_chest_midsagittal_plane";
HAnimSite938YYY.children = new X3D.MFNode();

HAnimSite938ZZZ.children[0] = TouchSensor939;

let Shape940 = browser.currentScene.createNode("Shape");
Shape940.USE = "HAnimSiteShape";
HAnimSite938ZZZ.children[1] = Shape940;

let Billboard941 = browser.currentScene.createNode("Billboard");
let Shape942 = browser.currentScene.createNode("Shape");
let Text943 = browser.currentScene.createNode("Text");
Text943.string = new X3D.MFString([new X3D.SFString("95")]);
let FontStyle944 = browser.currentScene.createNode("FontStyle");
FontStyle944.size = 0.035;
fontStyle = FontStyle944;

geometry = Text943;

Billboard941YYY.children = new X3D.MFNode();

Billboard941ZZZ.children[0] = Shape942;

HAnimSite938ZZZ.children[2] = Billboard941;

HAnimSegment916ZZZ.children[4] = HAnimSite938;

let HAnimSite945 = browser.currentScene.createNode("HAnimSite");
HAnimSite945.name = "rear_center_midsagittal_plane";
HAnimSite945.DEF = "hanim_rear_center_midsagittal_plane";
let TouchSensor946 = browser.currentScene.createNode("TouchSensor");
TouchSensor946.description = "HAnimSite 92 rear_center_midsagittal_plane";
HAnimSite945YYY.children = new X3D.MFNode();

HAnimSite945ZZZ.children[0] = TouchSensor946;

let Shape947 = browser.currentScene.createNode("Shape");
Shape947.USE = "HAnimSiteShape";
HAnimSite945ZZZ.children[1] = Shape947;

let Billboard948 = browser.currentScene.createNode("Billboard");
let Shape949 = browser.currentScene.createNode("Shape");
let Text950 = browser.currentScene.createNode("Text");
Text950.string = new X3D.MFString([new X3D.SFString("92")]);
let FontStyle951 = browser.currentScene.createNode("FontStyle");
FontStyle951.size = 0.035;
fontStyle = FontStyle951;

geometry = Text950;

Billboard948YYY.children = new X3D.MFNode();

Billboard948ZZZ.children[0] = Shape949;

HAnimSite945ZZZ.children[2] = Billboard948;

HAnimSegment916ZZZ.children[5] = HAnimSite945;

HAnimJoint915YYY.children = new X3D.MFNode();

HAnimJoint915ZZZ.children[0] = HAnimSegment916;

let HAnimJoint952 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint952.name = "vt5";
HAnimJoint952.DEF = "hanim_vt5";
HAnimJoint952.center = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
HAnimJoint952.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint952.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment953 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment953.name = "t5";
HAnimSegment953.DEF = "hanim_t5";
let Transform954 = browser.currentScene.createNode("Transform");
Transform954.translation = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
let Transform955 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape956 = browser.currentScene.createNode("Shape");
Shape956.USE = "HAnimJointShape";
Transform955YYY.child = new X3D.undefined();

Transform955ZZZ.child[0] = Shape956;

Transform954YYY.children = new X3D.MFNode();

Transform954ZZZ.children[0] = Transform955;

HAnimSegment953YYY.children = new X3D.MFNode();

HAnimSegment953ZZZ.children[0] = Transform954;

let Shape957 = browser.currentScene.createNode("Shape");
let LineSet958 = browser.currentScene.createNode("LineSet");
LineSet958.vertexCount = new X3D.MFInt32([2]);
let Coordinate959 = browser.currentScene.createNode("Coordinate");
Coordinate959.point = new X3D.MFVec3f([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
coord = Coordinate959;

//from vt5 to vt4 vertices 2
let ColorRGBA960 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA960.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA960;

geometry = LineSet958;

HAnimSegment953ZZZ.children[1] = Shape957;

let HAnimSite961 = browser.currentScene.createNode("HAnimSite");
HAnimSite961.name = "spine_1_middle_back";
HAnimSite961.DEF = "hanim_spine_1_middle_back";
let TouchSensor962 = browser.currentScene.createNode("TouchSensor");
TouchSensor962.description = "HAnimSite 24 spine_1_middle_back";
HAnimSite961YYY.children = new X3D.MFNode();

HAnimSite961ZZZ.children[0] = TouchSensor962;

let Shape963 = browser.currentScene.createNode("Shape");
Shape963.USE = "HAnimSiteShape";
HAnimSite961ZZZ.children[1] = Shape963;

let Billboard964 = browser.currentScene.createNode("Billboard");
let Shape965 = browser.currentScene.createNode("Shape");
let Text966 = browser.currentScene.createNode("Text");
Text966.string = new X3D.MFString([new X3D.SFString("24")]);
let FontStyle967 = browser.currentScene.createNode("FontStyle");
FontStyle967.size = 0.035;
fontStyle = FontStyle967;

geometry = Text966;

Billboard964YYY.children = new X3D.MFNode();

Billboard964ZZZ.children[0] = Shape965;

HAnimSite961ZZZ.children[2] = Billboard964;

HAnimSegment953ZZZ.children[2] = HAnimSite961;

HAnimJoint952YYY.children = new X3D.MFNode();

HAnimJoint952ZZZ.children[0] = HAnimSegment953;

let HAnimJoint968 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint968.name = "vt4";
HAnimJoint968.DEF = "hanim_vt4";
HAnimJoint968.center = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
HAnimJoint968.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint968.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment969 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment969.name = "t4";
HAnimSegment969.DEF = "hanim_t4";
let Transform970 = browser.currentScene.createNode("Transform");
Transform970.translation = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
let Transform971 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape972 = browser.currentScene.createNode("Shape");
Shape972.USE = "HAnimJointShape";
Transform971YYY.child = new X3D.undefined();

Transform971ZZZ.child[0] = Shape972;

Transform970YYY.children = new X3D.MFNode();

Transform970ZZZ.children[0] = Transform971;

HAnimSegment969YYY.children = new X3D.MFNode();

HAnimSegment969ZZZ.children[0] = Transform970;

let Shape973 = browser.currentScene.createNode("Shape");
let LineSet974 = browser.currentScene.createNode("LineSet");
LineSet974.vertexCount = new X3D.MFInt32([2]);
let Coordinate975 = browser.currentScene.createNode("Coordinate");
Coordinate975.point = new X3D.MFVec3f([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
coord = Coordinate975;

//from vt4 to vt3 vertices 2
let ColorRGBA976 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA976.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA976;

geometry = LineSet974;

HAnimSegment969ZZZ.children[1] = Shape973;

HAnimJoint968YYY.children = new X3D.MFNode();

HAnimJoint968ZZZ.children[0] = HAnimSegment969;

let HAnimJoint977 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint977.name = "vt3";
HAnimJoint977.DEF = "hanim_vt3";
HAnimJoint977.center = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
HAnimJoint977.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint977.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment978 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment978.name = "t3";
HAnimSegment978.DEF = "hanim_t3";
let Transform979 = browser.currentScene.createNode("Transform");
Transform979.translation = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
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
Coordinate984.point = new X3D.MFVec3f([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
coord = Coordinate984;

//from vt3 to vt2 vertices 2
let ColorRGBA985 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA985;

geometry = LineSet983;

HAnimSegment978ZZZ.children[1] = Shape982;

HAnimJoint977YYY.children = new X3D.MFNode();

HAnimJoint977ZZZ.children[0] = HAnimSegment978;

let HAnimJoint986 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint986.name = "vt2";
HAnimJoint986.DEF = "hanim_vt2";
HAnimJoint986.center = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
HAnimJoint986.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint986.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment987 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment987.name = "t2";
HAnimSegment987.DEF = "hanim_t2";
let Transform988 = browser.currentScene.createNode("Transform");
Transform988.translation = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
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
Coordinate993.point = new X3D.MFVec3f([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
coord = Coordinate993;

//from vt2 to vt1 vertices 2
let ColorRGBA994 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA994;

geometry = LineSet992;

HAnimSegment987ZZZ.children[1] = Shape991;

HAnimJoint986YYY.children = new X3D.MFNode();

HAnimJoint986ZZZ.children[0] = HAnimSegment987;

let HAnimJoint995 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint995.name = "vt1";
HAnimJoint995.DEF = "hanim_vt1";
HAnimJoint995.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
HAnimJoint995.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint995.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment996 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment996.name = "t1";
HAnimSegment996.DEF = "hanim_t1";
let Transform997 = browser.currentScene.createNode("Transform");
Transform997.translation = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
let Transform998 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape999 = browser.currentScene.createNode("Shape");
Shape999.USE = "HAnimJointShape";
Transform998YYY.child = new X3D.undefined();

Transform998ZZZ.child[0] = Shape999;

Transform997YYY.children = new X3D.MFNode();

Transform997ZZZ.children[0] = Transform998;

HAnimSegment996YYY.children = new X3D.MFNode();

HAnimSegment996ZZZ.children[0] = Transform997;

let Shape1000 = browser.currentScene.createNode("Shape");
let LineSet1001 = browser.currentScene.createNode("LineSet");
LineSet1001.vertexCount = new X3D.MFInt32([2]);
let Coordinate1002 = browser.currentScene.createNode("Coordinate");
Coordinate1002.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
coord = Coordinate1002;

//from vt1 to vc7 vertices 2
let ColorRGBA1003 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1003.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1003;

geometry = LineSet1001;

HAnimSegment996ZZZ.children[1] = Shape1000;

let HAnimSite1004 = browser.currentScene.createNode("HAnimSite");
HAnimSite1004.name = "cervicale";
HAnimSite1004.DEF = "hanim_cervicale";
HAnimSite1004.translation = new X3D.SFVec3f([0.0064,1.52,-0.0815]);
let TouchSensor1005 = browser.currentScene.createNode("TouchSensor");
TouchSensor1005.description = "HAnimSite 10 cervicale";
HAnimSite1004YYY.children = new X3D.MFNode();

HAnimSite1004ZZZ.children[0] = TouchSensor1005;

let Shape1006 = browser.currentScene.createNode("Shape");
Shape1006.USE = "HAnimSiteShape";
HAnimSite1004ZZZ.children[1] = Shape1006;

let Billboard1007 = browser.currentScene.createNode("Billboard");
let Shape1008 = browser.currentScene.createNode("Shape");
let Text1009 = browser.currentScene.createNode("Text");
Text1009.string = new X3D.MFString([new X3D.SFString("10")]);
let FontStyle1010 = browser.currentScene.createNode("FontStyle");
FontStyle1010.size = 0.035;
fontStyle = FontStyle1010;

geometry = Text1009;

Billboard1007YYY.children = new X3D.MFNode();

Billboard1007ZZZ.children[0] = Shape1008;

HAnimSite1004ZZZ.children[2] = Billboard1007;

HAnimSegment996ZZZ.children[2] = HAnimSite1004;

let HAnimSite1011 = browser.currentScene.createNode("HAnimSite");
HAnimSite1011.name = "suprasternale";
HAnimSite1011.DEF = "hanim_suprasternale";
HAnimSite1011.translation = new X3D.SFVec3f([0.0084,1.4714,0.0551]);
let TouchSensor1012 = browser.currentScene.createNode("TouchSensor");
TouchSensor1012.description = "HAnimSite 12 suprasternale";
HAnimSite1011YYY.children = new X3D.MFNode();

HAnimSite1011ZZZ.children[0] = TouchSensor1012;

let Shape1013 = browser.currentScene.createNode("Shape");
Shape1013.USE = "HAnimSiteShape";
HAnimSite1011ZZZ.children[1] = Shape1013;

let Billboard1014 = browser.currentScene.createNode("Billboard");
let Shape1015 = browser.currentScene.createNode("Shape");
let Text1016 = browser.currentScene.createNode("Text");
Text1016.string = new X3D.MFString([new X3D.SFString("12")]);
let FontStyle1017 = browser.currentScene.createNode("FontStyle");
FontStyle1017.size = 0.035;
fontStyle = FontStyle1017;

geometry = Text1016;

Billboard1014YYY.children = new X3D.MFNode();

Billboard1014ZZZ.children[0] = Shape1015;

HAnimSite1011ZZZ.children[2] = Billboard1014;

HAnimSegment996ZZZ.children[3] = HAnimSite1011;

let Shape1018 = browser.currentScene.createNode("Shape");
let LineSet1019 = browser.currentScene.createNode("LineSet");
LineSet1019.vertexCount = new X3D.MFInt32([2]);
let Coordinate1020 = browser.currentScene.createNode("Coordinate");
Coordinate1020.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
coord = Coordinate1020;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA1021 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1021.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1021;

geometry = LineSet1019;

HAnimSegment996ZZZ.children[4] = Shape1018;

let Shape1022 = browser.currentScene.createNode("Shape");
let LineSet1023 = browser.currentScene.createNode("LineSet");
LineSet1023.vertexCount = new X3D.MFInt32([2]);
let Coordinate1024 = browser.currentScene.createNode("Coordinate");
Coordinate1024.point = new X3D.MFVec3f([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
coord = Coordinate1024;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA1025 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1025.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1025;

geometry = LineSet1023;

HAnimSegment996ZZZ.children[5] = Shape1022;

HAnimJoint995YYY.children = new X3D.MFNode();

HAnimJoint995ZZZ.children[0] = HAnimSegment996;

let HAnimJoint1026 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1026.name = "vc7";
HAnimJoint1026.DEF = "hanim_vc7";
HAnimJoint1026.center = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
HAnimJoint1026.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1026.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1027 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1027.name = "c7";
HAnimSegment1027.DEF = "hanim_c7";
let Transform1028 = browser.currentScene.createNode("Transform");
Transform1028.translation = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
let Transform1029 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1030 = browser.currentScene.createNode("Shape");
Shape1030.USE = "HAnimJointShape";
Transform1029YYY.child = new X3D.undefined();

Transform1029ZZZ.child[0] = Shape1030;

Transform1028YYY.children = new X3D.MFNode();

Transform1028ZZZ.children[0] = Transform1029;

HAnimSegment1027YYY.children = new X3D.MFNode();

HAnimSegment1027ZZZ.children[0] = Transform1028;

let Shape1031 = browser.currentScene.createNode("Shape");
let LineSet1032 = browser.currentScene.createNode("LineSet");
LineSet1032.vertexCount = new X3D.MFInt32([2]);
let Coordinate1033 = browser.currentScene.createNode("Coordinate");
Coordinate1033.point = new X3D.MFVec3f([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
coord = Coordinate1033;

//from vc7 to vc6 vertices 2
let ColorRGBA1034 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1034.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1034;

geometry = LineSet1032;

HAnimSegment1027ZZZ.children[1] = Shape1031;

let HAnimSite1035 = browser.currentScene.createNode("HAnimSite");
HAnimSite1035.name = "l_neck_base";
HAnimSite1035.DEF = "hanim_l_neck_base";
HAnimSite1035.translation = new X3D.SFVec3f([0.0646,1.5141,-0.038]);
let TouchSensor1036 = browser.currentScene.createNode("TouchSensor");
TouchSensor1036.description = "HAnimSite 82 l_neck_base";
HAnimSite1035YYY.children = new X3D.MFNode();

HAnimSite1035ZZZ.children[0] = TouchSensor1036;

let Shape1037 = browser.currentScene.createNode("Shape");
Shape1037.USE = "HAnimSiteShape";
HAnimSite1035ZZZ.children[1] = Shape1037;

let Billboard1038 = browser.currentScene.createNode("Billboard");
let Shape1039 = browser.currentScene.createNode("Shape");
let Text1040 = browser.currentScene.createNode("Text");
Text1040.string = new X3D.MFString([new X3D.SFString("82")]);
let FontStyle1041 = browser.currentScene.createNode("FontStyle");
FontStyle1041.size = 0.035;
fontStyle = FontStyle1041;

geometry = Text1040;

Billboard1038YYY.children = new X3D.MFNode();

Billboard1038ZZZ.children[0] = Shape1039;

HAnimSite1035ZZZ.children[2] = Billboard1038;

HAnimSegment1027ZZZ.children[2] = HAnimSite1035;

let HAnimSite1042 = browser.currentScene.createNode("HAnimSite");
HAnimSite1042.name = "r_neck_base";
HAnimSite1042.DEF = "hanim_r_neck_base";
HAnimSite1042.translation = new X3D.SFVec3f([-0.0419,1.5149,-0.022]);
let TouchSensor1043 = browser.currentScene.createNode("TouchSensor");
TouchSensor1043.description = "HAnimSite 83 r_neck_base";
HAnimSite1042YYY.children = new X3D.MFNode();

HAnimSite1042ZZZ.children[0] = TouchSensor1043;

let Shape1044 = browser.currentScene.createNode("Shape");
Shape1044.USE = "HAnimSiteShape";
HAnimSite1042ZZZ.children[1] = Shape1044;

let Billboard1045 = browser.currentScene.createNode("Billboard");
let Shape1046 = browser.currentScene.createNode("Shape");
let Text1047 = browser.currentScene.createNode("Text");
Text1047.string = new X3D.MFString([new X3D.SFString("83")]);
let FontStyle1048 = browser.currentScene.createNode("FontStyle");
FontStyle1048.size = 0.035;
fontStyle = FontStyle1048;

geometry = Text1047;

Billboard1045YYY.children = new X3D.MFNode();

Billboard1045ZZZ.children[0] = Shape1046;

HAnimSite1042ZZZ.children[2] = Billboard1045;

HAnimSegment1027ZZZ.children[3] = HAnimSite1042;

HAnimJoint1026YYY.children = new X3D.MFNode();

HAnimJoint1026ZZZ.children[0] = HAnimSegment1027;

let HAnimJoint1049 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1049.name = "vc6";
HAnimJoint1049.DEF = "hanim_vc6";
HAnimJoint1049.center = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
HAnimJoint1049.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1049.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1050 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1050.name = "c6";
HAnimSegment1050.DEF = "hanim_c6";
let Transform1051 = browser.currentScene.createNode("Transform");
Transform1051.translation = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
let Transform1052 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1053 = browser.currentScene.createNode("Shape");
Shape1053.USE = "HAnimJointShape";
Transform1052YYY.child = new X3D.undefined();

Transform1052ZZZ.child[0] = Shape1053;

Transform1051YYY.children = new X3D.MFNode();

Transform1051ZZZ.children[0] = Transform1052;

HAnimSegment1050YYY.children = new X3D.MFNode();

HAnimSegment1050ZZZ.children[0] = Transform1051;

let Shape1054 = browser.currentScene.createNode("Shape");
let LineSet1055 = browser.currentScene.createNode("LineSet");
LineSet1055.vertexCount = new X3D.MFInt32([2]);
let Coordinate1056 = browser.currentScene.createNode("Coordinate");
Coordinate1056.point = new X3D.MFVec3f([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
coord = Coordinate1056;

//from vc6 to vc5 vertices 2
let ColorRGBA1057 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1057;

geometry = LineSet1055;

HAnimSegment1050ZZZ.children[1] = Shape1054;

HAnimJoint1049YYY.children = new X3D.MFNode();

HAnimJoint1049ZZZ.children[0] = HAnimSegment1050;

let HAnimJoint1058 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1058.name = "vc5";
HAnimJoint1058.DEF = "hanim_vc5";
HAnimJoint1058.center = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
HAnimJoint1058.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1058.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1059 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1059.name = "c5";
HAnimSegment1059.DEF = "hanim_c5";
let Transform1060 = browser.currentScene.createNode("Transform");
Transform1060.translation = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
let Transform1061 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1062 = browser.currentScene.createNode("Shape");
Shape1062.USE = "HAnimJointShape";
Transform1061YYY.child = new X3D.undefined();

Transform1061ZZZ.child[0] = Shape1062;

Transform1060YYY.children = new X3D.MFNode();

Transform1060ZZZ.children[0] = Transform1061;

HAnimSegment1059YYY.children = new X3D.MFNode();

HAnimSegment1059ZZZ.children[0] = Transform1060;

let Shape1063 = browser.currentScene.createNode("Shape");
let LineSet1064 = browser.currentScene.createNode("LineSet");
LineSet1064.vertexCount = new X3D.MFInt32([2]);
let Coordinate1065 = browser.currentScene.createNode("Coordinate");
Coordinate1065.point = new X3D.MFVec3f([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
coord = Coordinate1065;

//from vc5 to vc4 vertices 2
let ColorRGBA1066 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1066.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1066;

geometry = LineSet1064;

HAnimSegment1059ZZZ.children[1] = Shape1063;

HAnimJoint1058YYY.children = new X3D.MFNode();

HAnimJoint1058ZZZ.children[0] = HAnimSegment1059;

let HAnimJoint1067 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1067.name = "vc4";
HAnimJoint1067.DEF = "hanim_vc4";
HAnimJoint1067.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
HAnimJoint1067.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1067.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1068 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1068.name = "c4";
HAnimSegment1068.DEF = "hanim_c4";
let Transform1069 = browser.currentScene.createNode("Transform");
Transform1069.translation = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
let Transform1070 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1071 = browser.currentScene.createNode("Shape");
Shape1071.USE = "HAnimJointShape";
Transform1070YYY.child = new X3D.undefined();

Transform1070ZZZ.child[0] = Shape1071;

Transform1069YYY.children = new X3D.MFNode();

Transform1069ZZZ.children[0] = Transform1070;

HAnimSegment1068YYY.children = new X3D.MFNode();

HAnimSegment1068ZZZ.children[0] = Transform1069;

let Shape1072 = browser.currentScene.createNode("Shape");
let LineSet1073 = browser.currentScene.createNode("LineSet");
LineSet1073.vertexCount = new X3D.MFInt32([2]);
let Coordinate1074 = browser.currentScene.createNode("Coordinate");
Coordinate1074.point = new X3D.MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
coord = Coordinate1074;

//from vc4 to vc3 vertices 2
let ColorRGBA1075 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1075.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1075;

geometry = LineSet1073;

HAnimSegment1068ZZZ.children[1] = Shape1072;

HAnimJoint1067YYY.children = new X3D.MFNode();

HAnimJoint1067ZZZ.children[0] = HAnimSegment1068;

let HAnimJoint1076 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1076.name = "vc3";
HAnimJoint1076.DEF = "hanim_vc3";
HAnimJoint1076.center = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
HAnimJoint1076.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1076.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1077 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1077.name = "c3";
HAnimSegment1077.DEF = "hanim_c3";
let Transform1078 = browser.currentScene.createNode("Transform");
Transform1078.translation = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
let Transform1079 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1080 = browser.currentScene.createNode("Shape");
Shape1080.USE = "HAnimJointShape";
Transform1079YYY.child = new X3D.undefined();

Transform1079ZZZ.child[0] = Shape1080;

Transform1078YYY.children = new X3D.MFNode();

Transform1078ZZZ.children[0] = Transform1079;

HAnimSegment1077YYY.children = new X3D.MFNode();

HAnimSegment1077ZZZ.children[0] = Transform1078;

let Shape1081 = browser.currentScene.createNode("Shape");
let LineSet1082 = browser.currentScene.createNode("LineSet");
LineSet1082.vertexCount = new X3D.MFInt32([2]);
let Coordinate1083 = browser.currentScene.createNode("Coordinate");
Coordinate1083.point = new X3D.MFVec3f([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
coord = Coordinate1083;

//from vc3 to vc2 vertices 2
let ColorRGBA1084 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1084.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1084;

geometry = LineSet1082;

HAnimSegment1077ZZZ.children[1] = Shape1081;

HAnimJoint1076YYY.children = new X3D.MFNode();

HAnimJoint1076ZZZ.children[0] = HAnimSegment1077;

let HAnimJoint1085 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1085.name = "vc2";
HAnimJoint1085.DEF = "hanim_vc2";
HAnimJoint1085.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
HAnimJoint1085.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1085.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1086 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1086.name = "c2";
HAnimSegment1086.DEF = "hanim_c2";
let Transform1087 = browser.currentScene.createNode("Transform");
Transform1087.translation = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
let Transform1088 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1089 = browser.currentScene.createNode("Shape");
Shape1089.USE = "HAnimJointShape";
Transform1088YYY.child = new X3D.undefined();

Transform1088ZZZ.child[0] = Shape1089;

Transform1087YYY.children = new X3D.MFNode();

Transform1087ZZZ.children[0] = Transform1088;

HAnimSegment1086YYY.children = new X3D.MFNode();

HAnimSegment1086ZZZ.children[0] = Transform1087;

let Shape1090 = browser.currentScene.createNode("Shape");
let LineSet1091 = browser.currentScene.createNode("LineSet");
LineSet1091.vertexCount = new X3D.MFInt32([2]);
let Coordinate1092 = browser.currentScene.createNode("Coordinate");
Coordinate1092.point = new X3D.MFVec3f([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
coord = Coordinate1092;

//from vc2 to vc1 vertices 2
let ColorRGBA1093 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1093.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1093;

geometry = LineSet1091;

HAnimSegment1086ZZZ.children[1] = Shape1090;

let HAnimSite1094 = browser.currentScene.createNode("HAnimSite");
HAnimSite1094.name = "adams_apple";
HAnimSite1094.DEF = "hanim_adams_apple";
let TouchSensor1095 = browser.currentScene.createNode("TouchSensor");
TouchSensor1095.description = "HAnimSite 11 adams_apple";
HAnimSite1094YYY.children = new X3D.MFNode();

HAnimSite1094ZZZ.children[0] = TouchSensor1095;

let Shape1096 = browser.currentScene.createNode("Shape");
Shape1096.USE = "HAnimSiteShape";
HAnimSite1094ZZZ.children[1] = Shape1096;

let Billboard1097 = browser.currentScene.createNode("Billboard");
let Shape1098 = browser.currentScene.createNode("Shape");
let Text1099 = browser.currentScene.createNode("Text");
Text1099.string = new X3D.MFString([new X3D.SFString("11")]);
let FontStyle1100 = browser.currentScene.createNode("FontStyle");
FontStyle1100.size = 0.035;
fontStyle = FontStyle1100;

geometry = Text1099;

Billboard1097YYY.children = new X3D.MFNode();

Billboard1097ZZZ.children[0] = Shape1098;

HAnimSite1094ZZZ.children[2] = Billboard1097;

HAnimSegment1086ZZZ.children[2] = HAnimSite1094;

HAnimJoint1085YYY.children = new X3D.MFNode();

HAnimJoint1085ZZZ.children[0] = HAnimSegment1086;

let HAnimJoint1101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1101.name = "vc1";
HAnimJoint1101.DEF = "hanim_vc1";
HAnimJoint1101.center = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
HAnimJoint1101.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1101.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1102.name = "c1";
HAnimSegment1102.DEF = "hanim_c1";
let Transform1103 = browser.currentScene.createNode("Transform");
Transform1103.translation = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
let Transform1104 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1105 = browser.currentScene.createNode("Shape");
Shape1105.USE = "HAnimJointShape";
Transform1104YYY.child = new X3D.undefined();

Transform1104ZZZ.child[0] = Shape1105;

Transform1103YYY.children = new X3D.MFNode();

Transform1103ZZZ.children[0] = Transform1104;

HAnimSegment1102YYY.children = new X3D.MFNode();

HAnimSegment1102ZZZ.children[0] = Transform1103;

let Shape1106 = browser.currentScene.createNode("Shape");
let LineSet1107 = browser.currentScene.createNode("LineSet");
LineSet1107.vertexCount = new X3D.MFInt32([2]);
let Coordinate1108 = browser.currentScene.createNode("Coordinate");
Coordinate1108.point = new X3D.MFVec3f([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
coord = Coordinate1108;

//from vc1 to skullbase vertices 2
let ColorRGBA1109 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1109;

geometry = LineSet1107;

HAnimSegment1102ZZZ.children[1] = Shape1106;

HAnimJoint1101YYY.children = new X3D.MFNode();

HAnimJoint1101ZZZ.children[0] = HAnimSegment1102;

let HAnimJoint1110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1110.name = "skullbase";
HAnimJoint1110.DEF = "hanim_skullbase";
HAnimJoint1110.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
HAnimJoint1110.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1110.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1111.name = "skull";
HAnimSegment1111.DEF = "hanim_skull";
let Transform1112 = browser.currentScene.createNode("Transform");
Transform1112.translation = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
let Transform1113 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1114 = browser.currentScene.createNode("Shape");
Shape1114.USE = "HAnimJointShape";
Transform1113YYY.child = new X3D.undefined();

Transform1113ZZZ.child[0] = Shape1114;

Transform1112YYY.children = new X3D.MFNode();

Transform1112ZZZ.children[0] = Transform1113;

HAnimSegment1111YYY.children = new X3D.MFNode();

HAnimSegment1111ZZZ.children[0] = Transform1112;

let Shape1115 = browser.currentScene.createNode("Shape");
let LineSet1116 = browser.currentScene.createNode("LineSet");
LineSet1116.vertexCount = new X3D.MFInt32([2]);
let Coordinate1117 = browser.currentScene.createNode("Coordinate");
Coordinate1117.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
coord = Coordinate1117;

//from skullbase to l_eyelid_joint vertices 2
let ColorRGBA1118 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1118.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1118;

geometry = LineSet1116;

HAnimSegment1111ZZZ.children[1] = Shape1115;

let HAnimSite1119 = browser.currentScene.createNode("HAnimSite");
HAnimSite1119.name = "glabella";
HAnimSite1119.DEF = "hanim_glabella";
let TouchSensor1120 = browser.currentScene.createNode("TouchSensor");
TouchSensor1120.description = "HAnimSite 1 glabella";
HAnimSite1119YYY.children = new X3D.MFNode();

HAnimSite1119ZZZ.children[0] = TouchSensor1120;

let Shape1121 = browser.currentScene.createNode("Shape");
Shape1121.USE = "HAnimSiteShape";
HAnimSite1119ZZZ.children[1] = Shape1121;

let Billboard1122 = browser.currentScene.createNode("Billboard");
let Shape1123 = browser.currentScene.createNode("Shape");
let Text1124 = browser.currentScene.createNode("Text");
Text1124.string = new X3D.MFString([new X3D.SFString("1")]);
let FontStyle1125 = browser.currentScene.createNode("FontStyle");
FontStyle1125.size = 0.035;
fontStyle = FontStyle1125;

geometry = Text1124;

Billboard1122YYY.children = new X3D.MFNode();

Billboard1122ZZZ.children[0] = Shape1123;

HAnimSite1119ZZZ.children[2] = Billboard1122;

HAnimSegment1111ZZZ.children[2] = HAnimSite1119;

let HAnimSite1126 = browser.currentScene.createNode("HAnimSite");
HAnimSite1126.name = "l_ectocanthus";
HAnimSite1126.DEF = "hanim_l_ectocanthus";
let TouchSensor1127 = browser.currentScene.createNode("TouchSensor");
TouchSensor1127.description = "HAnimSite 85 l_ectocanthus";
HAnimSite1126YYY.children = new X3D.MFNode();

HAnimSite1126ZZZ.children[0] = TouchSensor1127;

let Shape1128 = browser.currentScene.createNode("Shape");
Shape1128.USE = "HAnimSiteShape";
HAnimSite1126ZZZ.children[1] = Shape1128;

let Billboard1129 = browser.currentScene.createNode("Billboard");
let Shape1130 = browser.currentScene.createNode("Shape");
let Text1131 = browser.currentScene.createNode("Text");
Text1131.string = new X3D.MFString([new X3D.SFString("85")]);
let FontStyle1132 = browser.currentScene.createNode("FontStyle");
FontStyle1132.size = 0.035;
fontStyle = FontStyle1132;

geometry = Text1131;

Billboard1129YYY.children = new X3D.MFNode();

Billboard1129ZZZ.children[0] = Shape1130;

HAnimSite1126ZZZ.children[2] = Billboard1129;

HAnimSegment1111ZZZ.children[3] = HAnimSite1126;

let HAnimSite1133 = browser.currentScene.createNode("HAnimSite");
HAnimSite1133.name = "l_infraorbitale";
HAnimSite1133.DEF = "hanim_l_infraorbitale";
HAnimSite1133.translation = new X3D.SFVec3f([0.0341,1.6171,0.0752]);
let TouchSensor1134 = browser.currentScene.createNode("TouchSensor");
TouchSensor1134.description = "HAnimSite 3 l_infraorbitale";
HAnimSite1133YYY.children = new X3D.MFNode();

HAnimSite1133ZZZ.children[0] = TouchSensor1134;

let Shape1135 = browser.currentScene.createNode("Shape");
Shape1135.USE = "HAnimSiteShape";
HAnimSite1133ZZZ.children[1] = Shape1135;

let Billboard1136 = browser.currentScene.createNode("Billboard");
let Shape1137 = browser.currentScene.createNode("Shape");
let Text1138 = browser.currentScene.createNode("Text");
Text1138.string = new X3D.MFString([new X3D.SFString("3")]);
let FontStyle1139 = browser.currentScene.createNode("FontStyle");
FontStyle1139.size = 0.035;
fontStyle = FontStyle1139;

geometry = Text1138;

Billboard1136YYY.children = new X3D.MFNode();

Billboard1136ZZZ.children[0] = Shape1137;

HAnimSite1133ZZZ.children[2] = Billboard1136;

HAnimSegment1111ZZZ.children[4] = HAnimSite1133;

let HAnimSite1140 = browser.currentScene.createNode("HAnimSite");
HAnimSite1140.name = "l_tragion";
HAnimSite1140.DEF = "hanim_l_tragion";
HAnimSite1140.translation = new X3D.SFVec3f([0.0739,1.6348,0.0282]);
let TouchSensor1141 = browser.currentScene.createNode("TouchSensor");
TouchSensor1141.description = "HAnimSite 4 l_tragion";
HAnimSite1140YYY.children = new X3D.MFNode();

HAnimSite1140ZZZ.children[0] = TouchSensor1141;

let Shape1142 = browser.currentScene.createNode("Shape");
Shape1142.USE = "HAnimSiteShape";
HAnimSite1140ZZZ.children[1] = Shape1142;

let Billboard1143 = browser.currentScene.createNode("Billboard");
let Shape1144 = browser.currentScene.createNode("Shape");
let Text1145 = browser.currentScene.createNode("Text");
Text1145.string = new X3D.MFString([new X3D.SFString("4")]);
let FontStyle1146 = browser.currentScene.createNode("FontStyle");
FontStyle1146.size = 0.035;
fontStyle = FontStyle1146;

geometry = Text1145;

Billboard1143YYY.children = new X3D.MFNode();

Billboard1143ZZZ.children[0] = Shape1144;

HAnimSite1140ZZZ.children[2] = Billboard1143;

HAnimSegment1111ZZZ.children[5] = HAnimSite1140;

let HAnimSite1147 = browser.currentScene.createNode("HAnimSite");
HAnimSite1147.name = "nuchale";
HAnimSite1147.DEF = "hanim_nuchale";
HAnimSite1147.translation = new X3D.SFVec3f([0.0039,1.5972,-0.0796]);
let TouchSensor1148 = browser.currentScene.createNode("TouchSensor");
TouchSensor1148.description = "HAnimSite 81 nuchale";
HAnimSite1147YYY.children = new X3D.MFNode();

HAnimSite1147ZZZ.children[0] = TouchSensor1148;

let Shape1149 = browser.currentScene.createNode("Shape");
Shape1149.USE = "HAnimSiteShape";
HAnimSite1147ZZZ.children[1] = Shape1149;

let Billboard1150 = browser.currentScene.createNode("Billboard");
let Shape1151 = browser.currentScene.createNode("Shape");
let Text1152 = browser.currentScene.createNode("Text");
Text1152.string = new X3D.MFString([new X3D.SFString("81")]);
let FontStyle1153 = browser.currentScene.createNode("FontStyle");
FontStyle1153.size = 0.035;
fontStyle = FontStyle1153;

geometry = Text1152;

Billboard1150YYY.children = new X3D.MFNode();

Billboard1150ZZZ.children[0] = Shape1151;

HAnimSite1147ZZZ.children[2] = Billboard1150;

HAnimSegment1111ZZZ.children[6] = HAnimSite1147;

let HAnimSite1154 = browser.currentScene.createNode("HAnimSite");
HAnimSite1154.name = "opisthocranion";
HAnimSite1154.DEF = "hanim_opisthocranion";
let TouchSensor1155 = browser.currentScene.createNode("TouchSensor");
TouchSensor1155.description = "HAnimSite 89 opisthocranion";
HAnimSite1154YYY.children = new X3D.MFNode();

HAnimSite1154ZZZ.children[0] = TouchSensor1155;

let Shape1156 = browser.currentScene.createNode("Shape");
Shape1156.USE = "HAnimSiteShape";
HAnimSite1154ZZZ.children[1] = Shape1156;

let Billboard1157 = browser.currentScene.createNode("Billboard");
let Shape1158 = browser.currentScene.createNode("Shape");
let Text1159 = browser.currentScene.createNode("Text");
Text1159.string = new X3D.MFString([new X3D.SFString("89")]);
let FontStyle1160 = browser.currentScene.createNode("FontStyle");
FontStyle1160.size = 0.035;
fontStyle = FontStyle1160;

geometry = Text1159;

Billboard1157YYY.children = new X3D.MFNode();

Billboard1157ZZZ.children[0] = Shape1158;

HAnimSite1154ZZZ.children[2] = Billboard1157;

HAnimSegment1111ZZZ.children[7] = HAnimSite1154;

let HAnimSite1161 = browser.currentScene.createNode("HAnimSite");
HAnimSite1161.name = "r_ectocanthus";
HAnimSite1161.DEF = "hanim_r_ectocanthus";
let TouchSensor1162 = browser.currentScene.createNode("TouchSensor");
TouchSensor1162.description = "HAnimSite 86 r_ectocanthus";
HAnimSite1161YYY.children = new X3D.MFNode();

HAnimSite1161ZZZ.children[0] = TouchSensor1162;

let Shape1163 = browser.currentScene.createNode("Shape");
Shape1163.USE = "HAnimSiteShape";
HAnimSite1161ZZZ.children[1] = Shape1163;

let Billboard1164 = browser.currentScene.createNode("Billboard");
let Shape1165 = browser.currentScene.createNode("Shape");
let Text1166 = browser.currentScene.createNode("Text");
Text1166.string = new X3D.MFString([new X3D.SFString("86")]);
let FontStyle1167 = browser.currentScene.createNode("FontStyle");
FontStyle1167.size = 0.035;
fontStyle = FontStyle1167;

geometry = Text1166;

Billboard1164YYY.children = new X3D.MFNode();

Billboard1164ZZZ.children[0] = Shape1165;

HAnimSite1161ZZZ.children[2] = Billboard1164;

HAnimSegment1111ZZZ.children[8] = HAnimSite1161;

let HAnimSite1168 = browser.currentScene.createNode("HAnimSite");
HAnimSite1168.name = "r_infraorbitale";
HAnimSite1168.DEF = "hanim_r_infraorbitale";
HAnimSite1168.translation = new X3D.SFVec3f([-0.0237,1.6171,0.0752]);
let TouchSensor1169 = browser.currentScene.createNode("TouchSensor");
TouchSensor1169.description = "HAnimSite 6 r_infraorbitale";
HAnimSite1168YYY.children = new X3D.MFNode();

HAnimSite1168ZZZ.children[0] = TouchSensor1169;

let Shape1170 = browser.currentScene.createNode("Shape");
Shape1170.USE = "HAnimSiteShape";
HAnimSite1168ZZZ.children[1] = Shape1170;

let Billboard1171 = browser.currentScene.createNode("Billboard");
let Shape1172 = browser.currentScene.createNode("Shape");
let Text1173 = browser.currentScene.createNode("Text");
Text1173.string = new X3D.MFString([new X3D.SFString("6")]);
let FontStyle1174 = browser.currentScene.createNode("FontStyle");
FontStyle1174.size = 0.035;
fontStyle = FontStyle1174;

geometry = Text1173;

Billboard1171YYY.children = new X3D.MFNode();

Billboard1171ZZZ.children[0] = Shape1172;

HAnimSite1168ZZZ.children[2] = Billboard1171;

HAnimSegment1111ZZZ.children[9] = HAnimSite1168;

let HAnimSite1175 = browser.currentScene.createNode("HAnimSite");
HAnimSite1175.name = "r_tragion";
HAnimSite1175.DEF = "hanim_r_tragion";
HAnimSite1175.translation = new X3D.SFVec3f([-0.0646,1.6347,0.0302]);
let TouchSensor1176 = browser.currentScene.createNode("TouchSensor");
TouchSensor1176.description = "HAnimSite 7 r_tragion";
HAnimSite1175YYY.children = new X3D.MFNode();

HAnimSite1175ZZZ.children[0] = TouchSensor1176;

let Shape1177 = browser.currentScene.createNode("Shape");
Shape1177.USE = "HAnimSiteShape";
HAnimSite1175ZZZ.children[1] = Shape1177;

let Billboard1178 = browser.currentScene.createNode("Billboard");
let Shape1179 = browser.currentScene.createNode("Shape");
let Text1180 = browser.currentScene.createNode("Text");
Text1180.string = new X3D.MFString([new X3D.SFString("7")]);
let FontStyle1181 = browser.currentScene.createNode("FontStyle");
FontStyle1181.size = 0.035;
fontStyle = FontStyle1181;

geometry = Text1180;

Billboard1178YYY.children = new X3D.MFNode();

Billboard1178ZZZ.children[0] = Shape1179;

HAnimSite1175ZZZ.children[2] = Billboard1178;

HAnimSegment1111ZZZ.children[10] = HAnimSite1175;

let HAnimSite1182 = browser.currentScene.createNode("HAnimSite");
HAnimSite1182.name = "sellion";
HAnimSite1182.DEF = "hanim_sellion";
HAnimSite1182.translation = new X3D.SFVec3f([0.0058,1.6316,0.0852]);
let TouchSensor1183 = browser.currentScene.createNode("TouchSensor");
TouchSensor1183.description = "HAnimSite 2 sellion";
HAnimSite1182YYY.children = new X3D.MFNode();

HAnimSite1182ZZZ.children[0] = TouchSensor1183;

let Shape1184 = browser.currentScene.createNode("Shape");
Shape1184.USE = "HAnimSiteShape";
HAnimSite1182ZZZ.children[1] = Shape1184;

let Billboard1185 = browser.currentScene.createNode("Billboard");
let Shape1186 = browser.currentScene.createNode("Shape");
let Text1187 = browser.currentScene.createNode("Text");
Text1187.string = new X3D.MFString([new X3D.SFString("2")]);
let FontStyle1188 = browser.currentScene.createNode("FontStyle");
FontStyle1188.size = 0.035;
fontStyle = FontStyle1188;

geometry = Text1187;

Billboard1185YYY.children = new X3D.MFNode();

Billboard1185ZZZ.children[0] = Shape1186;

HAnimSite1182ZZZ.children[2] = Billboard1185;

HAnimSegment1111ZZZ.children[11] = HAnimSite1182;

let HAnimSite1189 = browser.currentScene.createNode("HAnimSite");
HAnimSite1189.name = "skull_vertex";
HAnimSite1189.DEF = "hanim_skull_vertex";
HAnimSite1189.translation = new X3D.SFVec3f([0.005,1.7504,0.0055]);
let TouchSensor1190 = browser.currentScene.createNode("TouchSensor");
TouchSensor1190.description = "HAnimSite 0 skull_vertex";
HAnimSite1189YYY.children = new X3D.MFNode();

HAnimSite1189ZZZ.children[0] = TouchSensor1190;

let Shape1191 = browser.currentScene.createNode("Shape");
Shape1191.USE = "HAnimSiteShape";
HAnimSite1189ZZZ.children[1] = Shape1191;

let Billboard1192 = browser.currentScene.createNode("Billboard");
let Shape1193 = browser.currentScene.createNode("Shape");
let Text1194 = browser.currentScene.createNode("Text");
Text1194.string = new X3D.MFString([new X3D.SFString("0")]);
let FontStyle1195 = browser.currentScene.createNode("FontStyle");
FontStyle1195.size = 0.035;
fontStyle = FontStyle1195;

geometry = Text1194;

Billboard1192YYY.children = new X3D.MFNode();

Billboard1192ZZZ.children[0] = Shape1193;

HAnimSite1189ZZZ.children[2] = Billboard1192;

HAnimSegment1111ZZZ.children[12] = HAnimSite1189;

let Shape1196 = browser.currentScene.createNode("Shape");
let LineSet1197 = browser.currentScene.createNode("LineSet");
LineSet1197.vertexCount = new X3D.MFInt32([2]);
let Coordinate1198 = browser.currentScene.createNode("Coordinate");
Coordinate1198.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
coord = Coordinate1198;

//from skullbase to r_eyelid_joint vertices 2
let ColorRGBA1199 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1199.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1199;

geometry = LineSet1197;

HAnimSegment1111ZZZ.children[13] = Shape1196;

let Shape1200 = browser.currentScene.createNode("Shape");
let LineSet1201 = browser.currentScene.createNode("LineSet");
LineSet1201.vertexCount = new X3D.MFInt32([2]);
let Coordinate1202 = browser.currentScene.createNode("Coordinate");
Coordinate1202.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
coord = Coordinate1202;

//from skullbase to l_eyeball_joint vertices 2
let ColorRGBA1203 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1203.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1203;

geometry = LineSet1201;

HAnimSegment1111ZZZ.children[14] = Shape1200;

let Shape1204 = browser.currentScene.createNode("Shape");
let LineSet1205 = browser.currentScene.createNode("LineSet");
LineSet1205.vertexCount = new X3D.MFInt32([2]);
let Coordinate1206 = browser.currentScene.createNode("Coordinate");
Coordinate1206.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
coord = Coordinate1206;

//from skullbase to r_eyeball_joint vertices 2
let ColorRGBA1207 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1207.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1207;

geometry = LineSet1205;

HAnimSegment1111ZZZ.children[15] = Shape1204;

let Shape1208 = browser.currentScene.createNode("Shape");
let LineSet1209 = browser.currentScene.createNode("LineSet");
LineSet1209.vertexCount = new X3D.MFInt32([2]);
let Coordinate1210 = browser.currentScene.createNode("Coordinate");
Coordinate1210.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
coord = Coordinate1210;

//from skullbase to l_eyebrow_joint vertices 2
let ColorRGBA1211 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1211.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1211;

geometry = LineSet1209;

HAnimSegment1111ZZZ.children[16] = Shape1208;

let Shape1212 = browser.currentScene.createNode("Shape");
let LineSet1213 = browser.currentScene.createNode("LineSet");
LineSet1213.vertexCount = new X3D.MFInt32([2]);
let Coordinate1214 = browser.currentScene.createNode("Coordinate");
Coordinate1214.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
coord = Coordinate1214;

//from skullbase to r_eyebrow_joint vertices 2
let ColorRGBA1215 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1215.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1215;

geometry = LineSet1213;

HAnimSegment1111ZZZ.children[17] = Shape1212;

let Shape1216 = browser.currentScene.createNode("Shape");
let LineSet1217 = browser.currentScene.createNode("LineSet");
LineSet1217.vertexCount = new X3D.MFInt32([2]);
let Coordinate1218 = browser.currentScene.createNode("Coordinate");
Coordinate1218.point = new X3D.MFVec3f([0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
coord = Coordinate1218;

//from skullbase to temporomandibular vertices 2
let ColorRGBA1219 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1219.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1219;

geometry = LineSet1217;

HAnimSegment1111ZZZ.children[18] = Shape1216;

HAnimJoint1110YYY.children = new X3D.MFNode();

HAnimJoint1110ZZZ.children[0] = HAnimSegment1111;

let HAnimJoint1220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1220.name = "l_eyelid_joint";
HAnimJoint1220.DEF = "hanim_l_eyelid_joint";
HAnimJoint1220.center = new X3D.SFVec3f([0.0503,1.4157,-0.0689]);
HAnimJoint1220.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1220.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1110ZZZ.children[1] = HAnimJoint1220;

let HAnimJoint1221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1221.name = "r_eyelid_joint";
HAnimJoint1221.DEF = "hanim_r_eyelid_joint";
HAnimJoint1221.center = new X3D.SFVec3f([-0.0507,1.4157,-0.0689]);
HAnimJoint1221.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1221.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1110ZZZ.children[2] = HAnimJoint1221;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.name = "l_eyeball_joint";
HAnimJoint1222.DEF = "hanim_l_eyeball_joint";
HAnimJoint1222.center = new X3D.SFVec3f([0.0479,1.3963,-0.0188]);
HAnimJoint1222.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1222.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1110ZZZ.children[3] = HAnimJoint1222;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.name = "r_eyeball_joint";
HAnimJoint1223.DEF = "hanim_r_eyeball_joint";
HAnimJoint1223.center = new X3D.SFVec3f([-0.0483,1.3963,-0.0188]);
HAnimJoint1223.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1223.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1110ZZZ.children[4] = HAnimJoint1223;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.name = "l_eyebrow_joint";
HAnimJoint1224.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1224.center = new X3D.SFVec3f([0.0216,1.4053,0.0051]);
HAnimJoint1224.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1224.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1110ZZZ.children[5] = HAnimJoint1224;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.name = "r_eyebrow_joint";
HAnimJoint1225.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1225.center = new X3D.SFVec3f([-0.0219,1.4053,0.0051]);
HAnimJoint1225.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1225.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1110ZZZ.children[6] = HAnimJoint1225;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.name = "temporomandibular";
HAnimJoint1226.DEF = "hanim_temporomandibular";
HAnimJoint1226.center = new X3D.SFVec3f([-0.0002,1.3043,-0.0865]);
HAnimJoint1226.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1226.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1110ZZZ.children[7] = HAnimJoint1226;

HAnimJoint1101ZZZ.children[1] = HAnimJoint1110;

HAnimJoint1085ZZZ.children[1] = HAnimJoint1101;

HAnimJoint1076ZZZ.children[1] = HAnimJoint1085;

HAnimJoint1067ZZZ.children[1] = HAnimJoint1076;

HAnimJoint1058ZZZ.children[1] = HAnimJoint1067;

HAnimJoint1049ZZZ.children[1] = HAnimJoint1058;

HAnimJoint1026ZZZ.children[1] = HAnimJoint1049;

HAnimJoint995ZZZ.children[1] = HAnimJoint1026;

let HAnimJoint1227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1227.name = "l_sternoclavicular";
HAnimJoint1227.DEF = "hanim_l_sternoclavicular";
HAnimJoint1227.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint1227.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1227.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1228.name = "l_clavicle";
HAnimSegment1228.DEF = "hanim_l_clavicle";
let Transform1229 = browser.currentScene.createNode("Transform");
Transform1229.translation = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
let Transform1230 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1231 = browser.currentScene.createNode("Shape");
Shape1231.USE = "HAnimJointShape";
Transform1230YYY.child = new X3D.undefined();

Transform1230ZZZ.child[0] = Shape1231;

Transform1229YYY.children = new X3D.MFNode();

Transform1229ZZZ.children[0] = Transform1230;

HAnimSegment1228YYY.children = new X3D.MFNode();

HAnimSegment1228ZZZ.children[0] = Transform1229;

let Shape1232 = browser.currentScene.createNode("Shape");
let LineSet1233 = browser.currentScene.createNode("LineSet");
LineSet1233.vertexCount = new X3D.MFInt32([2]);
let Coordinate1234 = browser.currentScene.createNode("Coordinate");
Coordinate1234.point = new X3D.MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
coord = Coordinate1234;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA1235 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1235.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1235;

geometry = LineSet1233;

HAnimSegment1228ZZZ.children[1] = Shape1232;

let HAnimSite1236 = browser.currentScene.createNode("HAnimSite");
HAnimSite1236.name = "l_acromion";
HAnimSite1236.DEF = "hanim_l_acromion";
HAnimSite1236.translation = new X3D.SFVec3f([0.2032,1.476,-0.049]);
let TouchSensor1237 = browser.currentScene.createNode("TouchSensor");
TouchSensor1237.description = "HAnimSite 15 l_acromion";
HAnimSite1236YYY.children = new X3D.MFNode();

HAnimSite1236ZZZ.children[0] = TouchSensor1237;

let Shape1238 = browser.currentScene.createNode("Shape");
Shape1238.USE = "HAnimSiteShape";
HAnimSite1236ZZZ.children[1] = Shape1238;

let Billboard1239 = browser.currentScene.createNode("Billboard");
let Shape1240 = browser.currentScene.createNode("Shape");
let Text1241 = browser.currentScene.createNode("Text");
Text1241.string = new X3D.MFString([new X3D.SFString("15")]);
let FontStyle1242 = browser.currentScene.createNode("FontStyle");
FontStyle1242.size = 0.035;
fontStyle = FontStyle1242;

geometry = Text1241;

Billboard1239YYY.children = new X3D.MFNode();

Billboard1239ZZZ.children[0] = Shape1240;

HAnimSite1236ZZZ.children[2] = Billboard1239;

HAnimSegment1228ZZZ.children[2] = HAnimSite1236;

let HAnimSite1243 = browser.currentScene.createNode("HAnimSite");
HAnimSite1243.name = "l_axilla_distal";
HAnimSite1243.DEF = "hanim_l_axilla_distal";
HAnimSite1243.translation = new X3D.SFVec3f([0.1706,1.4072,-0.0875]);
let TouchSensor1244 = browser.currentScene.createNode("TouchSensor");
TouchSensor1244.description = "HAnimSite 17 l_axilla_distal";
HAnimSite1243YYY.children = new X3D.MFNode();

HAnimSite1243ZZZ.children[0] = TouchSensor1244;

let Shape1245 = browser.currentScene.createNode("Shape");
Shape1245.USE = "HAnimSiteShape";
HAnimSite1243ZZZ.children[1] = Shape1245;

let Billboard1246 = browser.currentScene.createNode("Billboard");
let Shape1247 = browser.currentScene.createNode("Shape");
let Text1248 = browser.currentScene.createNode("Text");
Text1248.string = new X3D.MFString([new X3D.SFString("17")]);
let FontStyle1249 = browser.currentScene.createNode("FontStyle");
FontStyle1249.size = 0.035;
fontStyle = FontStyle1249;

geometry = Text1248;

Billboard1246YYY.children = new X3D.MFNode();

Billboard1246ZZZ.children[0] = Shape1247;

HAnimSite1243ZZZ.children[2] = Billboard1246;

HAnimSegment1228ZZZ.children[3] = HAnimSite1243;

let HAnimSite1250 = browser.currentScene.createNode("HAnimSite");
HAnimSite1250.name = "l_axilla_posterior_folds";
HAnimSite1250.DEF = "hanim_l_axilla_posterior_folds";
let TouchSensor1251 = browser.currentScene.createNode("TouchSensor");
TouchSensor1251.description = "HAnimSite 18 l_axilla_posterior_folds";
HAnimSite1250YYY.children = new X3D.MFNode();

HAnimSite1250ZZZ.children[0] = TouchSensor1251;

let Shape1252 = browser.currentScene.createNode("Shape");
Shape1252.USE = "HAnimSiteShape";
HAnimSite1250ZZZ.children[1] = Shape1252;

let Billboard1253 = browser.currentScene.createNode("Billboard");
let Shape1254 = browser.currentScene.createNode("Shape");
let Text1255 = browser.currentScene.createNode("Text");
Text1255.string = new X3D.MFString([new X3D.SFString("18")]);
let FontStyle1256 = browser.currentScene.createNode("FontStyle");
FontStyle1256.size = 0.035;
fontStyle = FontStyle1256;

geometry = Text1255;

Billboard1253YYY.children = new X3D.MFNode();

Billboard1253ZZZ.children[0] = Shape1254;

HAnimSite1250ZZZ.children[2] = Billboard1253;

HAnimSegment1228ZZZ.children[4] = HAnimSite1250;

let HAnimSite1257 = browser.currentScene.createNode("HAnimSite");
HAnimSite1257.name = "l_axilla_proximal";
HAnimSite1257.DEF = "hanim_l_axilla_proximal";
HAnimSite1257.translation = new X3D.SFVec3f([0.1777,1.4065,-0.0075]);
let TouchSensor1258 = browser.currentScene.createNode("TouchSensor");
TouchSensor1258.description = "HAnimSite 16 l_axilla_proximal";
HAnimSite1257YYY.children = new X3D.MFNode();

HAnimSite1257ZZZ.children[0] = TouchSensor1258;

let Shape1259 = browser.currentScene.createNode("Shape");
Shape1259.USE = "HAnimSiteShape";
HAnimSite1257ZZZ.children[1] = Shape1259;

let Billboard1260 = browser.currentScene.createNode("Billboard");
let Shape1261 = browser.currentScene.createNode("Shape");
let Text1262 = browser.currentScene.createNode("Text");
Text1262.string = new X3D.MFString([new X3D.SFString("16")]);
let FontStyle1263 = browser.currentScene.createNode("FontStyle");
FontStyle1263.size = 0.035;
fontStyle = FontStyle1263;

geometry = Text1262;

Billboard1260YYY.children = new X3D.MFNode();

Billboard1260ZZZ.children[0] = Shape1261;

HAnimSite1257ZZZ.children[2] = Billboard1260;

HAnimSegment1228ZZZ.children[5] = HAnimSite1257;

let HAnimSite1264 = browser.currentScene.createNode("HAnimSite");
HAnimSite1264.name = "l_clavicale";
HAnimSite1264.DEF = "hanim_l_clavicale";
HAnimSite1264.translation = new X3D.SFVec3f([0.0271,1.4943,0.0394]);
let TouchSensor1265 = browser.currentScene.createNode("TouchSensor");
TouchSensor1265.description = "HAnimSite 14 l_clavicale";
HAnimSite1264YYY.children = new X3D.MFNode();

HAnimSite1264ZZZ.children[0] = TouchSensor1265;

let Shape1266 = browser.currentScene.createNode("Shape");
Shape1266.USE = "HAnimSiteShape";
HAnimSite1264ZZZ.children[1] = Shape1266;

let Billboard1267 = browser.currentScene.createNode("Billboard");
let Shape1268 = browser.currentScene.createNode("Shape");
let Text1269 = browser.currentScene.createNode("Text");
Text1269.string = new X3D.MFString([new X3D.SFString("14")]);
let FontStyle1270 = browser.currentScene.createNode("FontStyle");
FontStyle1270.size = 0.035;
fontStyle = FontStyle1270;

geometry = Text1269;

Billboard1267YYY.children = new X3D.MFNode();

Billboard1267ZZZ.children[0] = Shape1268;

HAnimSite1264ZZZ.children[2] = Billboard1267;

HAnimSegment1228ZZZ.children[6] = HAnimSite1264;

HAnimJoint1227YYY.children = new X3D.MFNode();

HAnimJoint1227ZZZ.children[0] = HAnimSegment1228;

let HAnimJoint1271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1271.name = "l_acromioclavicular";
HAnimJoint1271.DEF = "hanim_l_acromioclavicular";
HAnimJoint1271.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint1271.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1271.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1272.name = "l_scapula";
HAnimSegment1272.DEF = "hanim_l_scapula";
let Transform1273 = browser.currentScene.createNode("Transform");
Transform1273.translation = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
let Transform1274 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1275 = browser.currentScene.createNode("Shape");
Shape1275.USE = "HAnimJointShape";
Transform1274YYY.child = new X3D.undefined();

Transform1274ZZZ.child[0] = Shape1275;

Transform1273YYY.children = new X3D.MFNode();

Transform1273ZZZ.children[0] = Transform1274;

HAnimSegment1272YYY.children = new X3D.MFNode();

HAnimSegment1272ZZZ.children[0] = Transform1273;

let Shape1276 = browser.currentScene.createNode("Shape");
let LineSet1277 = browser.currentScene.createNode("LineSet");
LineSet1277.vertexCount = new X3D.MFInt32([2]);
let Coordinate1278 = browser.currentScene.createNode("Coordinate");
Coordinate1278.point = new X3D.MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
coord = Coordinate1278;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA1279 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1279.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1279;

geometry = LineSet1277;

HAnimSegment1272ZZZ.children[1] = Shape1276;

HAnimJoint1271YYY.children = new X3D.MFNode();

HAnimJoint1271ZZZ.children[0] = HAnimSegment1272;

let HAnimJoint1280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1280.name = "l_shoulder";
HAnimJoint1280.DEF = "hanim_l_shoulder";
HAnimJoint1280.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
HAnimJoint1280.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1280.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1281.name = "l_upperarm";
HAnimSegment1281.DEF = "hanim_l_upperarm";
let Transform1282 = browser.currentScene.createNode("Transform");
Transform1282.translation = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
let Transform1283 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1284 = browser.currentScene.createNode("Shape");
Shape1284.USE = "HAnimJointShape";
Transform1283YYY.child = new X3D.undefined();

Transform1283ZZZ.child[0] = Shape1284;

Transform1282YYY.children = new X3D.MFNode();

Transform1282ZZZ.children[0] = Transform1283;

HAnimSegment1281YYY.children = new X3D.MFNode();

HAnimSegment1281ZZZ.children[0] = Transform1282;

let Shape1285 = browser.currentScene.createNode("Shape");
let LineSet1286 = browser.currentScene.createNode("LineSet");
LineSet1286.vertexCount = new X3D.MFInt32([2]);
let Coordinate1287 = browser.currentScene.createNode("Coordinate");
Coordinate1287.point = new X3D.MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
coord = Coordinate1287;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA1288 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1288.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1288;

geometry = LineSet1286;

HAnimSegment1281ZZZ.children[1] = Shape1285;

let HAnimSite1289 = browser.currentScene.createNode("HAnimSite");
HAnimSite1289.name = "l_bideltoid";
HAnimSite1289.DEF = "hanim_l_bideltoid";
let TouchSensor1290 = browser.currentScene.createNode("TouchSensor");
TouchSensor1290.description = "HAnimSite 96 l_bideltoid";
HAnimSite1289YYY.children = new X3D.MFNode();

HAnimSite1289ZZZ.children[0] = TouchSensor1290;

let Shape1291 = browser.currentScene.createNode("Shape");
Shape1291.USE = "HAnimSiteShape";
HAnimSite1289ZZZ.children[1] = Shape1291;

let Billboard1292 = browser.currentScene.createNode("Billboard");
let Shape1293 = browser.currentScene.createNode("Shape");
let Text1294 = browser.currentScene.createNode("Text");
Text1294.string = new X3D.MFString([new X3D.SFString("96")]);
let FontStyle1295 = browser.currentScene.createNode("FontStyle");
FontStyle1295.size = 0.035;
fontStyle = FontStyle1295;

geometry = Text1294;

Billboard1292YYY.children = new X3D.MFNode();

Billboard1292ZZZ.children[0] = Shape1293;

HAnimSite1289ZZZ.children[2] = Billboard1292;

HAnimSegment1281ZZZ.children[2] = HAnimSite1289;

let HAnimSite1296 = browser.currentScene.createNode("HAnimSite");
HAnimSite1296.name = "l_humeral_lateral_epicondyles";
HAnimSite1296.DEF = "hanim_l_humeral_lateral_epicondyles";
HAnimSite1296.translation = new X3D.SFVec3f([0.228,1.1482,-0.11]);
let TouchSensor1297 = browser.currentScene.createNode("TouchSensor");
TouchSensor1297.description = "HAnimSite 63 l_humeral_lateral_epicondyles";
HAnimSite1296YYY.children = new X3D.MFNode();

HAnimSite1296ZZZ.children[0] = TouchSensor1297;

let Shape1298 = browser.currentScene.createNode("Shape");
Shape1298.USE = "HAnimSiteShape";
HAnimSite1296ZZZ.children[1] = Shape1298;

let Billboard1299 = browser.currentScene.createNode("Billboard");
let Shape1300 = browser.currentScene.createNode("Shape");
let Text1301 = browser.currentScene.createNode("Text");
Text1301.string = new X3D.MFString([new X3D.SFString("63")]);
let FontStyle1302 = browser.currentScene.createNode("FontStyle");
FontStyle1302.size = 0.035;
fontStyle = FontStyle1302;

geometry = Text1301;

Billboard1299YYY.children = new X3D.MFNode();

Billboard1299ZZZ.children[0] = Shape1300;

HAnimSite1296ZZZ.children[2] = Billboard1299;

HAnimSegment1281ZZZ.children[3] = HAnimSite1296;

HAnimJoint1280YYY.children = new X3D.MFNode();

HAnimJoint1280ZZZ.children[0] = HAnimSegment1281;

let HAnimJoint1303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1303.name = "l_elbow";
HAnimJoint1303.DEF = "hanim_l_elbow";
HAnimJoint1303.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
HAnimJoint1303.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1303.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1304.name = "l_forearm";
HAnimSegment1304.DEF = "hanim_l_forearm";
let Transform1305 = browser.currentScene.createNode("Transform");
Transform1305.translation = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
let Transform1306 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1307 = browser.currentScene.createNode("Shape");
Shape1307.USE = "HAnimJointShape";
Transform1306YYY.child = new X3D.undefined();

Transform1306ZZZ.child[0] = Shape1307;

Transform1305YYY.children = new X3D.MFNode();

Transform1305ZZZ.children[0] = Transform1306;

HAnimSegment1304YYY.children = new X3D.MFNode();

HAnimSegment1304ZZZ.children[0] = Transform1305;

let Shape1308 = browser.currentScene.createNode("Shape");
let LineSet1309 = browser.currentScene.createNode("LineSet");
LineSet1309.vertexCount = new X3D.MFInt32([2]);
let Coordinate1310 = browser.currentScene.createNode("Coordinate");
Coordinate1310.point = new X3D.MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
coord = Coordinate1310;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA1311 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1311;

geometry = LineSet1309;

HAnimSegment1304ZZZ.children[1] = Shape1308;

let HAnimSite1312 = browser.currentScene.createNode("HAnimSite");
HAnimSite1312.name = "l_humeral_medial_epicondyles";
HAnimSite1312.DEF = "hanim_l_humeral_medial_epicondyles";
HAnimSite1312.translation = new X3D.SFVec3f([0.1735,1.1272,-0.1113]);
let TouchSensor1313 = browser.currentScene.createNode("TouchSensor");
TouchSensor1313.description = "HAnimSite 64 l_humeral_medial_epicondyles";
HAnimSite1312YYY.children = new X3D.MFNode();

HAnimSite1312ZZZ.children[0] = TouchSensor1313;

let Shape1314 = browser.currentScene.createNode("Shape");
Shape1314.USE = "HAnimSiteShape";
HAnimSite1312ZZZ.children[1] = Shape1314;

let Billboard1315 = browser.currentScene.createNode("Billboard");
let Shape1316 = browser.currentScene.createNode("Shape");
let Text1317 = browser.currentScene.createNode("Text");
Text1317.string = new X3D.MFString([new X3D.SFString("64")]);
let FontStyle1318 = browser.currentScene.createNode("FontStyle");
FontStyle1318.size = 0.035;
fontStyle = FontStyle1318;

geometry = Text1317;

Billboard1315YYY.children = new X3D.MFNode();

Billboard1315ZZZ.children[0] = Shape1316;

HAnimSite1312ZZZ.children[2] = Billboard1315;

HAnimSegment1304ZZZ.children[2] = HAnimSite1312;

let HAnimSite1319 = browser.currentScene.createNode("HAnimSite");
HAnimSite1319.name = "l_olecranon";
HAnimSite1319.DEF = "hanim_l_olecranon";
HAnimSite1319.translation = new X3D.SFVec3f([-0.1962,1.1375,-0.1123]);
let TouchSensor1320 = browser.currentScene.createNode("TouchSensor");
TouchSensor1320.description = "HAnimSite 65 l_olecranon";
HAnimSite1319YYY.children = new X3D.MFNode();

HAnimSite1319ZZZ.children[0] = TouchSensor1320;

let Shape1321 = browser.currentScene.createNode("Shape");
Shape1321.USE = "HAnimSiteShape";
HAnimSite1319ZZZ.children[1] = Shape1321;

let Billboard1322 = browser.currentScene.createNode("Billboard");
let Shape1323 = browser.currentScene.createNode("Shape");
let Text1324 = browser.currentScene.createNode("Text");
Text1324.string = new X3D.MFString([new X3D.SFString("65")]);
let FontStyle1325 = browser.currentScene.createNode("FontStyle");
FontStyle1325.size = 0.035;
fontStyle = FontStyle1325;

geometry = Text1324;

Billboard1322YYY.children = new X3D.MFNode();

Billboard1322ZZZ.children[0] = Shape1323;

HAnimSite1319ZZZ.children[2] = Billboard1322;

HAnimSegment1304ZZZ.children[3] = HAnimSite1319;

let HAnimSite1326 = browser.currentScene.createNode("HAnimSite");
HAnimSite1326.name = "l_radial_styloid";
HAnimSite1326.DEF = "hanim_l_radial_styloid";
HAnimSite1326.translation = new X3D.SFVec3f([0.1901,0.8645,-0.0415]);
let TouchSensor1327 = browser.currentScene.createNode("TouchSensor");
TouchSensor1327.description = "HAnimSite 71 l_radial_styloid";
HAnimSite1326YYY.children = new X3D.MFNode();

HAnimSite1326ZZZ.children[0] = TouchSensor1327;

let Shape1328 = browser.currentScene.createNode("Shape");
Shape1328.USE = "HAnimSiteShape";
HAnimSite1326ZZZ.children[1] = Shape1328;

let Billboard1329 = browser.currentScene.createNode("Billboard");
let Shape1330 = browser.currentScene.createNode("Shape");
let Text1331 = browser.currentScene.createNode("Text");
Text1331.string = new X3D.MFString([new X3D.SFString("71")]);
let FontStyle1332 = browser.currentScene.createNode("FontStyle");
FontStyle1332.size = 0.035;
fontStyle = FontStyle1332;

geometry = Text1331;

Billboard1329YYY.children = new X3D.MFNode();

Billboard1329ZZZ.children[0] = Shape1330;

HAnimSite1326ZZZ.children[2] = Billboard1329;

HAnimSegment1304ZZZ.children[4] = HAnimSite1326;

let HAnimSite1333 = browser.currentScene.createNode("HAnimSite");
HAnimSite1333.name = "l_radiale";
HAnimSite1333.DEF = "hanim_l_radiale";
HAnimSite1333.translation = new X3D.SFVec3f([0.2182,1.1212,-0.1167]);
let TouchSensor1334 = browser.currentScene.createNode("TouchSensor");
TouchSensor1334.description = "HAnimSite 69 l_radiale";
HAnimSite1333YYY.children = new X3D.MFNode();

HAnimSite1333ZZZ.children[0] = TouchSensor1334;

let Shape1335 = browser.currentScene.createNode("Shape");
Shape1335.USE = "HAnimSiteShape";
HAnimSite1333ZZZ.children[1] = Shape1335;

let Billboard1336 = browser.currentScene.createNode("Billboard");
let Shape1337 = browser.currentScene.createNode("Shape");
let Text1338 = browser.currentScene.createNode("Text");
Text1338.string = new X3D.MFString([new X3D.SFString("69")]);
let FontStyle1339 = browser.currentScene.createNode("FontStyle");
FontStyle1339.size = 0.035;
fontStyle = FontStyle1339;

geometry = Text1338;

Billboard1336YYY.children = new X3D.MFNode();

Billboard1336ZZZ.children[0] = Shape1337;

HAnimSite1333ZZZ.children[2] = Billboard1336;

HAnimSegment1304ZZZ.children[5] = HAnimSite1333;

HAnimJoint1303YYY.children = new X3D.MFNode();

HAnimJoint1303ZZZ.children[0] = HAnimSegment1304;

let HAnimJoint1340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1340.name = "l_radiocarpal";
HAnimJoint1340.DEF = "hanim_l_radiocarpal";
HAnimJoint1340.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
HAnimJoint1340.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1340.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1341 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1341.name = "l_carpal";
HAnimSegment1341.DEF = "hanim_l_carpal";
let Transform1342 = browser.currentScene.createNode("Transform");
Transform1342.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
Transform1342.translation = new X3D.SFVec3f([0.2,0.85,-0.05]);
Transform1342.rotation = new X3D.SFRotation([0,0,1,-3.14]);
//Transform left hand
let Transform1343 = browser.currentScene.createNode("Transform");
Transform1343.rotation = new X3D.SFRotation([0,1,0,-1.57]);
//Transform left hand
let Shape1344 = browser.currentScene.createNode("Shape");
Shape1344.USE = "HAnimJointShape";
Transform1343YYY.child = new X3D.undefined();

Transform1343ZZZ.child[0] = Shape1344;

Transform1342YYY.children = new X3D.MFNode();

Transform1342ZZZ.children[0] = Transform1343;

HAnimSegment1341YYY.children = new X3D.MFNode();

HAnimSegment1341ZZZ.children[0] = Transform1342;

let Shape1345 = browser.currentScene.createNode("Shape");
let LineSet1346 = browser.currentScene.createNode("LineSet");
LineSet1346.vertexCount = new X3D.MFInt32([2]);
let Coordinate1347 = browser.currentScene.createNode("Coordinate");
Coordinate1347.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826]);
coord = Coordinate1347;

//from l_radiocarpal to l_midcarpal_1 vertices 2
let ColorRGBA1348 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1348;

geometry = LineSet1346;

HAnimSegment1341ZZZ.children[1] = Shape1345;

let HAnimSite1349 = browser.currentScene.createNode("HAnimSite");
HAnimSite1349.name = "l_ulnar_styloid";
HAnimSite1349.DEF = "hanim_l_ulnar_styloid";
HAnimSite1349.translation = new X3D.SFVec3f([-0.2142,0.8529,-0.0648]);
let TouchSensor1350 = browser.currentScene.createNode("TouchSensor");
TouchSensor1350.description = "HAnimSite 70 l_ulnar_styloid";
HAnimSite1349YYY.children = new X3D.MFNode();

HAnimSite1349ZZZ.children[0] = TouchSensor1350;

let Shape1351 = browser.currentScene.createNode("Shape");
Shape1351.USE = "HAnimSiteShape";
HAnimSite1349ZZZ.children[1] = Shape1351;

let Billboard1352 = browser.currentScene.createNode("Billboard");
let Shape1353 = browser.currentScene.createNode("Shape");
let Text1354 = browser.currentScene.createNode("Text");
Text1354.string = new X3D.MFString([new X3D.SFString("70")]);
let FontStyle1355 = browser.currentScene.createNode("FontStyle");
FontStyle1355.size = 0.035;
fontStyle = FontStyle1355;

geometry = Text1354;

Billboard1352YYY.children = new X3D.MFNode();

Billboard1352ZZZ.children[0] = Shape1353;

HAnimSite1349ZZZ.children[2] = Billboard1352;

HAnimSegment1341ZZZ.children[2] = HAnimSite1349;

let Shape1356 = browser.currentScene.createNode("Shape");
let LineSet1357 = browser.currentScene.createNode("LineSet");
LineSet1357.vertexCount = new X3D.MFInt32([2]);
let Coordinate1358 = browser.currentScene.createNode("Coordinate");
Coordinate1358.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935]);
coord = Coordinate1358;

//from l_radiocarpal to l_midcarpal_2 vertices 2
let ColorRGBA1359 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1359.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1359;

geometry = LineSet1357;

HAnimSegment1341ZZZ.children[3] = Shape1356;

let Shape1360 = browser.currentScene.createNode("Shape");
let LineSet1361 = browser.currentScene.createNode("LineSet");
LineSet1361.vertexCount = new X3D.MFInt32([2]);
let Coordinate1362 = browser.currentScene.createNode("Coordinate");
Coordinate1362.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067]);
coord = Coordinate1362;

//from l_radiocarpal to l_midcarpal_3 vertices 2
let ColorRGBA1363 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1363.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1363;

geometry = LineSet1361;

HAnimSegment1341ZZZ.children[4] = Shape1360;

let Shape1364 = browser.currentScene.createNode("Shape");
let LineSet1365 = browser.currentScene.createNode("LineSet");
LineSet1365.vertexCount = new X3D.MFInt32([2]);
let Coordinate1366 = browser.currentScene.createNode("Coordinate");
Coordinate1366.point = new X3D.MFVec3f([0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276]);
coord = Coordinate1366;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
let ColorRGBA1367 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1367.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1367;

geometry = LineSet1365;

HAnimSegment1341ZZZ.children[5] = Shape1364;

HAnimJoint1340YYY.children = new X3D.MFNode();

HAnimJoint1340ZZZ.children[0] = HAnimSegment1341;

let HAnimJoint1368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1368.name = "l_midcarpal_1";
HAnimJoint1368.DEF = "hanim_l_midcarpal_1";
HAnimJoint1368.center = new X3D.SFVec3f([0.1811,0.6975,-0.0826]);
HAnimJoint1368.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1368.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1369 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1369.name = "l_trapezium";
HAnimSegment1369.DEF = "hanim_l_trapezium";
let Transform1370 = browser.currentScene.createNode("Transform");
Transform1370.translation = new X3D.SFVec3f([0.1811,0.6975,-0.0826]);
let Transform1371 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1372 = browser.currentScene.createNode("Shape");
Shape1372.USE = "HAnimJointShape";
Transform1371YYY.child = new X3D.undefined();

Transform1371ZZZ.child[0] = Shape1372;

Transform1370YYY.children = new X3D.MFNode();

Transform1370ZZZ.children[0] = Transform1371;

HAnimSegment1369YYY.children = new X3D.MFNode();

HAnimSegment1369ZZZ.children[0] = Transform1370;

let Shape1373 = browser.currentScene.createNode("Shape");
let LineSet1374 = browser.currentScene.createNode("LineSet");
LineSet1374.vertexCount = new X3D.MFInt32([2]);
let Coordinate1375 = browser.currentScene.createNode("Coordinate");
Coordinate1375.point = new X3D.MFVec3f([0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534]);
coord = Coordinate1375;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
let ColorRGBA1376 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1376.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1376;

geometry = LineSet1374;

HAnimSegment1369ZZZ.children[1] = Shape1373;

HAnimJoint1368YYY.children = new X3D.MFNode();

HAnimJoint1368ZZZ.children[0] = HAnimSegment1369;

let HAnimJoint1377 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1377.name = "l_carpometacarpal_1";
HAnimJoint1377.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1377.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint1377.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1377.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1378 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1378.name = "l_metacarpal_1";
HAnimSegment1378.DEF = "hanim_l_metacarpal_1";
let Transform1379 = browser.currentScene.createNode("Transform");
Transform1379.translation = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
let Transform1380 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1381 = browser.currentScene.createNode("Shape");
Shape1381.USE = "HAnimJointShape";
Transform1380YYY.child = new X3D.undefined();

Transform1380ZZZ.child[0] = Shape1381;

Transform1379YYY.children = new X3D.MFNode();

Transform1379ZZZ.children[0] = Transform1380;

HAnimSegment1378YYY.children = new X3D.MFNode();

HAnimSegment1378ZZZ.children[0] = Transform1379;

let Shape1382 = browser.currentScene.createNode("Shape");
let LineSet1383 = browser.currentScene.createNode("LineSet");
LineSet1383.vertexCount = new X3D.MFInt32([2]);
let Coordinate1384 = browser.currentScene.createNode("Coordinate");
Coordinate1384.point = new X3D.MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
coord = Coordinate1384;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA1385 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1385.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1385;

geometry = LineSet1383;

HAnimSegment1378ZZZ.children[1] = Shape1382;

HAnimJoint1377YYY.children = new X3D.MFNode();

HAnimJoint1377ZZZ.children[0] = HAnimSegment1378;

let HAnimJoint1386 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1386.name = "l_metacarpophalangeal_1";
HAnimJoint1386.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1386.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint1386.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1386.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1387 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1387.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1387.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform1388 = browser.currentScene.createNode("Transform");
Transform1388.translation = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
let Transform1389 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1390 = browser.currentScene.createNode("Shape");
Shape1390.USE = "HAnimJointShape";
Transform1389YYY.child = new X3D.undefined();

Transform1389ZZZ.child[0] = Shape1390;

Transform1388YYY.children = new X3D.MFNode();

Transform1388ZZZ.children[0] = Transform1389;

HAnimSegment1387YYY.children = new X3D.MFNode();

HAnimSegment1387ZZZ.children[0] = Transform1388;

let Shape1391 = browser.currentScene.createNode("Shape");
let LineSet1392 = browser.currentScene.createNode("LineSet");
LineSet1392.vertexCount = new X3D.MFInt32([2]);
let Coordinate1393 = browser.currentScene.createNode("Coordinate");
Coordinate1393.point = new X3D.MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
coord = Coordinate1393;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA1394 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1394.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1394;

geometry = LineSet1392;

HAnimSegment1387ZZZ.children[1] = Shape1391;

HAnimJoint1386YYY.children = new X3D.MFNode();

HAnimJoint1386ZZZ.children[0] = HAnimSegment1387;

let HAnimJoint1395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1395.name = "l_carpal_interphalangeal_1";
HAnimJoint1395.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1395.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint1395.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1395.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1386ZZZ.children[1] = HAnimJoint1395;

HAnimJoint1377ZZZ.children[1] = HAnimJoint1386;

HAnimJoint1368ZZZ.children[1] = HAnimJoint1377;

HAnimJoint1340ZZZ.children[1] = HAnimJoint1368;

let HAnimJoint1396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1396.name = "l_midcarpal_2";
HAnimJoint1396.DEF = "hanim_l_midcarpal_2";
HAnimJoint1396.center = new X3D.SFVec3f([0.1811,0.6984,-0.0935]);
HAnimJoint1396.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1396.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1397 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1397.name = "l_trapezoid";
HAnimSegment1397.DEF = "hanim_l_trapezoid";
let Transform1398 = browser.currentScene.createNode("Transform");
Transform1398.translation = new X3D.SFVec3f([0.1811,0.6984,-0.0935]);
let Transform1399 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1400 = browser.currentScene.createNode("Shape");
Shape1400.USE = "HAnimJointShape";
Transform1399YYY.child = new X3D.undefined();

Transform1399ZZZ.child[0] = Shape1400;

Transform1398YYY.children = new X3D.MFNode();

Transform1398ZZZ.children[0] = Transform1399;

HAnimSegment1397YYY.children = new X3D.MFNode();

HAnimSegment1397ZZZ.children[0] = Transform1398;

let Shape1401 = browser.currentScene.createNode("Shape");
let LineSet1402 = browser.currentScene.createNode("LineSet");
LineSet1402.vertexCount = new X3D.MFInt32([2]);
let Coordinate1403 = browser.currentScene.createNode("Coordinate");
Coordinate1403.point = new X3D.MFVec3f([0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028]);
coord = Coordinate1403;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
let ColorRGBA1404 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1404.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1404;

geometry = LineSet1402;

HAnimSegment1397ZZZ.children[1] = Shape1401;

HAnimJoint1396YYY.children = new X3D.MFNode();

HAnimJoint1396ZZZ.children[0] = HAnimSegment1397;

let HAnimJoint1405 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1405.name = "l_carpometacarpal_2";
HAnimJoint1405.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1405.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint1405.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1405.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1406 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1406.name = "l_metacarpal_2";
HAnimSegment1406.DEF = "hanim_l_metacarpal_2";
let Transform1407 = browser.currentScene.createNode("Transform");
Transform1407.translation = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
let Transform1408 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1409 = browser.currentScene.createNode("Shape");
Shape1409.USE = "HAnimJointShape";
Transform1408YYY.child = new X3D.undefined();

Transform1408ZZZ.child[0] = Shape1409;

Transform1407YYY.children = new X3D.MFNode();

Transform1407ZZZ.children[0] = Transform1408;

HAnimSegment1406YYY.children = new X3D.MFNode();

HAnimSegment1406ZZZ.children[0] = Transform1407;

let Shape1410 = browser.currentScene.createNode("Shape");
let LineSet1411 = browser.currentScene.createNode("LineSet");
LineSet1411.vertexCount = new X3D.MFInt32([2]);
let Coordinate1412 = browser.currentScene.createNode("Coordinate");
Coordinate1412.point = new X3D.MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
coord = Coordinate1412;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA1413 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1413.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1413;

geometry = LineSet1411;

HAnimSegment1406ZZZ.children[1] = Shape1410;

let HAnimSite1414 = browser.currentScene.createNode("HAnimSite");
HAnimSite1414.name = "l_metacarpal_phalanx_2";
HAnimSite1414.DEF = "hanim_l_metacarpal_phalanx_2";
HAnimSite1414.translation = new X3D.SFVec3f([0.2009,0.8139,-0.0237]);
let TouchSensor1415 = browser.currentScene.createNode("TouchSensor");
TouchSensor1415.description = "HAnimSite 75 l_metacarpal_phalanx_2";
HAnimSite1414YYY.children = new X3D.MFNode();

HAnimSite1414ZZZ.children[0] = TouchSensor1415;

let Shape1416 = browser.currentScene.createNode("Shape");
Shape1416.USE = "HAnimSiteShape";
HAnimSite1414ZZZ.children[1] = Shape1416;

let Billboard1417 = browser.currentScene.createNode("Billboard");
let Shape1418 = browser.currentScene.createNode("Shape");
let Text1419 = browser.currentScene.createNode("Text");
Text1419.string = new X3D.MFString([new X3D.SFString("75")]);
let FontStyle1420 = browser.currentScene.createNode("FontStyle");
FontStyle1420.size = 0.035;
fontStyle = FontStyle1420;

geometry = Text1419;

Billboard1417YYY.children = new X3D.MFNode();

Billboard1417ZZZ.children[0] = Shape1418;

HAnimSite1414ZZZ.children[2] = Billboard1417;

HAnimSegment1406ZZZ.children[2] = HAnimSite1414;

HAnimJoint1405YYY.children = new X3D.MFNode();

HAnimJoint1405ZZZ.children[0] = HAnimSegment1406;

let HAnimJoint1421 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1421.name = "l_metacarpophalangeal_2";
HAnimJoint1421.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1421.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint1421.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1421.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1422 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1422.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1422.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform1423 = browser.currentScene.createNode("Transform");
Transform1423.translation = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
let Transform1424 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1425 = browser.currentScene.createNode("Shape");
Shape1425.USE = "HAnimJointShape";
Transform1424YYY.child = new X3D.undefined();

Transform1424ZZZ.child[0] = Shape1425;

Transform1423YYY.children = new X3D.MFNode();

Transform1423ZZZ.children[0] = Transform1424;

HAnimSegment1422YYY.children = new X3D.MFNode();

HAnimSegment1422ZZZ.children[0] = Transform1423;

let Shape1426 = browser.currentScene.createNode("Shape");
let LineSet1427 = browser.currentScene.createNode("LineSet");
LineSet1427.vertexCount = new X3D.MFInt32([2]);
let Coordinate1428 = browser.currentScene.createNode("Coordinate");
Coordinate1428.point = new X3D.MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
coord = Coordinate1428;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1429 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1429.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1429;

geometry = LineSet1427;

HAnimSegment1422ZZZ.children[1] = Shape1426;

HAnimJoint1421YYY.children = new X3D.MFNode();

HAnimJoint1421ZZZ.children[0] = HAnimSegment1422;

let HAnimJoint1430 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1430.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1430.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1430.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint1430.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1430.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1431 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1431.name = "l_carpal_middle_phalanx_2";
HAnimSegment1431.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform1432 = browser.currentScene.createNode("Transform");
Transform1432.translation = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
let Transform1433 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1434 = browser.currentScene.createNode("Shape");
Shape1434.USE = "HAnimJointShape";
Transform1433YYY.child = new X3D.undefined();

Transform1433ZZZ.child[0] = Shape1434;

Transform1432YYY.children = new X3D.MFNode();

Transform1432ZZZ.children[0] = Transform1433;

HAnimSegment1431YYY.children = new X3D.MFNode();

HAnimSegment1431ZZZ.children[0] = Transform1432;

let Shape1435 = browser.currentScene.createNode("Shape");
let LineSet1436 = browser.currentScene.createNode("LineSet");
LineSet1436.vertexCount = new X3D.MFInt32([2]);
let Coordinate1437 = browser.currentScene.createNode("Coordinate");
Coordinate1437.point = new X3D.MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
coord = Coordinate1437;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1438 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1438.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1438;

geometry = LineSet1436;

HAnimSegment1431ZZZ.children[1] = Shape1435;

HAnimJoint1430YYY.children = new X3D.MFNode();

HAnimJoint1430ZZZ.children[0] = HAnimSegment1431;

let HAnimJoint1439 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1439.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1439.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1439.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint1439.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1439.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1430ZZZ.children[1] = HAnimJoint1439;

HAnimJoint1421ZZZ.children[1] = HAnimJoint1430;

HAnimJoint1405ZZZ.children[1] = HAnimJoint1421;

HAnimJoint1396ZZZ.children[1] = HAnimJoint1405;

HAnimJoint1340ZZZ.children[2] = HAnimJoint1396;

let HAnimJoint1440 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1440.name = "l_midcarpal_3";
HAnimJoint1440.DEF = "hanim_l_midcarpal_3";
HAnimJoint1440.center = new X3D.SFVec3f([0.1809,0.7,-0.1067]);
HAnimJoint1440.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1440.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1441 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1441.name = "l_capitate";
HAnimSegment1441.DEF = "hanim_l_capitate";
let Transform1442 = browser.currentScene.createNode("Transform");
Transform1442.translation = new X3D.SFVec3f([0.1809,0.7,-0.1067]);
let Transform1443 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1444 = browser.currentScene.createNode("Shape");
Shape1444.USE = "HAnimJointShape";
Transform1443YYY.child = new X3D.undefined();

Transform1443ZZZ.child[0] = Shape1444;

Transform1442YYY.children = new X3D.MFNode();

Transform1442ZZZ.children[0] = Transform1443;

HAnimSegment1441YYY.children = new X3D.MFNode();

HAnimSegment1441ZZZ.children[0] = Transform1442;

let Shape1445 = browser.currentScene.createNode("Shape");
let LineSet1446 = browser.currentScene.createNode("LineSet");
LineSet1446.vertexCount = new X3D.MFInt32([2]);
let Coordinate1447 = browser.currentScene.createNode("Coordinate");
Coordinate1447.point = new X3D.MFVec3f([0.1809,0.7,-0.1067,0.1987,0.8029,-0.053]);
coord = Coordinate1447;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
let ColorRGBA1448 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1448.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1448;

geometry = LineSet1446;

HAnimSegment1441ZZZ.children[1] = Shape1445;

HAnimJoint1440YYY.children = new X3D.MFNode();

HAnimJoint1440ZZZ.children[0] = HAnimSegment1441;

let HAnimJoint1449 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1449.name = "l_carpometacarpal_3";
HAnimJoint1449.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1449.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint1449.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1449.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1450 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1450.name = "l_metacarpal_3";
HAnimSegment1450.DEF = "hanim_l_metacarpal_3";
let Transform1451 = browser.currentScene.createNode("Transform");
Transform1451.translation = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
let Transform1452 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1453 = browser.currentScene.createNode("Shape");
Shape1453.USE = "HAnimJointShape";
Transform1452YYY.child = new X3D.undefined();

Transform1452ZZZ.child[0] = Shape1453;

Transform1451YYY.children = new X3D.MFNode();

Transform1451ZZZ.children[0] = Transform1452;

HAnimSegment1450YYY.children = new X3D.MFNode();

HAnimSegment1450ZZZ.children[0] = Transform1451;

let Shape1454 = browser.currentScene.createNode("Shape");
let LineSet1455 = browser.currentScene.createNode("LineSet");
LineSet1455.vertexCount = new X3D.MFInt32([2]);
let Coordinate1456 = browser.currentScene.createNode("Coordinate");
Coordinate1456.point = new X3D.MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
coord = Coordinate1456;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA1457 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1457.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1457;

geometry = LineSet1455;

HAnimSegment1450ZZZ.children[1] = Shape1454;

let HAnimSite1458 = browser.currentScene.createNode("HAnimSite");
HAnimSite1458.name = "l_metacarpal_phalanx_3";
HAnimSite1458.DEF = "hanim_l_metacarpal_phalanx_3";
let TouchSensor1459 = browser.currentScene.createNode("TouchSensor");
TouchSensor1459.description = "HAnimSite 76 l_metacarpal_phalanx_3";
HAnimSite1458YYY.children = new X3D.MFNode();

HAnimSite1458ZZZ.children[0] = TouchSensor1459;

let Shape1460 = browser.currentScene.createNode("Shape");
Shape1460.USE = "HAnimSiteShape";
HAnimSite1458ZZZ.children[1] = Shape1460;

let Billboard1461 = browser.currentScene.createNode("Billboard");
let Shape1462 = browser.currentScene.createNode("Shape");
let Text1463 = browser.currentScene.createNode("Text");
Text1463.string = new X3D.MFString([new X3D.SFString("76")]);
let FontStyle1464 = browser.currentScene.createNode("FontStyle");
FontStyle1464.size = 0.035;
fontStyle = FontStyle1464;

geometry = Text1463;

Billboard1461YYY.children = new X3D.MFNode();

Billboard1461ZZZ.children[0] = Shape1462;

HAnimSite1458ZZZ.children[2] = Billboard1461;

HAnimSegment1450ZZZ.children[2] = HAnimSite1458;

HAnimJoint1449YYY.children = new X3D.MFNode();

HAnimJoint1449ZZZ.children[0] = HAnimSegment1450;

let HAnimJoint1465 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1465.name = "l_metacarpophalangeal_3";
HAnimJoint1465.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1465.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint1465.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1465.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1466.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1466.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform1467 = browser.currentScene.createNode("Transform");
Transform1467.translation = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
let Transform1468 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1469 = browser.currentScene.createNode("Shape");
Shape1469.USE = "HAnimJointShape";
Transform1468YYY.child = new X3D.undefined();

Transform1468ZZZ.child[0] = Shape1469;

Transform1467YYY.children = new X3D.MFNode();

Transform1467ZZZ.children[0] = Transform1468;

HAnimSegment1466YYY.children = new X3D.MFNode();

HAnimSegment1466ZZZ.children[0] = Transform1467;

let Shape1470 = browser.currentScene.createNode("Shape");
let LineSet1471 = browser.currentScene.createNode("LineSet");
LineSet1471.vertexCount = new X3D.MFInt32([2]);
let Coordinate1472 = browser.currentScene.createNode("Coordinate");
Coordinate1472.point = new X3D.MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
coord = Coordinate1472;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1473 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1473.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1473;

geometry = LineSet1471;

HAnimSegment1466ZZZ.children[1] = Shape1470;

HAnimJoint1465YYY.children = new X3D.MFNode();

HAnimJoint1465ZZZ.children[0] = HAnimSegment1466;

let HAnimJoint1474 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1474.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1474.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1474.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint1474.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1474.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1475 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1475.name = "l_carpal_middle_phalanx_3";
HAnimSegment1475.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform1476 = browser.currentScene.createNode("Transform");
Transform1476.translation = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
let Transform1477 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1478 = browser.currentScene.createNode("Shape");
Shape1478.USE = "HAnimJointShape";
Transform1477YYY.child = new X3D.undefined();

Transform1477ZZZ.child[0] = Shape1478;

Transform1476YYY.children = new X3D.MFNode();

Transform1476ZZZ.children[0] = Transform1477;

HAnimSegment1475YYY.children = new X3D.MFNode();

HAnimSegment1475ZZZ.children[0] = Transform1476;

let Shape1479 = browser.currentScene.createNode("Shape");
let LineSet1480 = browser.currentScene.createNode("LineSet");
LineSet1480.vertexCount = new X3D.MFInt32([2]);
let Coordinate1481 = browser.currentScene.createNode("Coordinate");
Coordinate1481.point = new X3D.MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
coord = Coordinate1481;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1482 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1482.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1482;

geometry = LineSet1480;

HAnimSegment1475ZZZ.children[1] = Shape1479;

HAnimJoint1474YYY.children = new X3D.MFNode();

HAnimJoint1474ZZZ.children[0] = HAnimSegment1475;

let HAnimJoint1483 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1483.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1483.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1483.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint1483.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1483.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1474ZZZ.children[1] = HAnimJoint1483;

HAnimJoint1465ZZZ.children[1] = HAnimJoint1474;

HAnimJoint1449ZZZ.children[1] = HAnimJoint1465;

HAnimJoint1440ZZZ.children[1] = HAnimJoint1449;

HAnimJoint1340ZZZ.children[3] = HAnimJoint1440;

let HAnimJoint1484 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1484.name = "l_midcarpal_4_5";
HAnimJoint1484.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1484.center = new X3D.SFVec3f([0.1809,0.6973,-0.1276]);
HAnimJoint1484.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1484.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1485.name = "l_hamate";
HAnimSegment1485.DEF = "hanim_l_hamate";
let Transform1486 = browser.currentScene.createNode("Transform");
Transform1486.translation = new X3D.SFVec3f([0.1809,0.6973,-0.1276]);
let Transform1487 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1488 = browser.currentScene.createNode("Shape");
Shape1488.USE = "HAnimJointShape";
Transform1487YYY.child = new X3D.undefined();

Transform1487ZZZ.child[0] = Shape1488;

Transform1486YYY.children = new X3D.MFNode();

Transform1486ZZZ.children[0] = Transform1487;

HAnimSegment1485YYY.children = new X3D.MFNode();

HAnimSegment1485ZZZ.children[0] = Transform1486;

let Shape1489 = browser.currentScene.createNode("Shape");
let LineSet1490 = browser.currentScene.createNode("LineSet");
LineSet1490.vertexCount = new X3D.MFInt32([2]);
let Coordinate1491 = browser.currentScene.createNode("Coordinate");
Coordinate1491.point = new X3D.MFVec3f([0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794]);
coord = Coordinate1491;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
let ColorRGBA1492 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1492.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1492;

geometry = LineSet1490;

HAnimSegment1485ZZZ.children[1] = Shape1489;

let Shape1493 = browser.currentScene.createNode("Shape");
let LineSet1494 = browser.currentScene.createNode("LineSet");
LineSet1494.vertexCount = new X3D.MFInt32([2]);
let Coordinate1495 = browser.currentScene.createNode("Coordinate");
Coordinate1495.point = new X3D.MFVec3f([0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036]);
coord = Coordinate1495;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
let ColorRGBA1496 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1496.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1496;

geometry = LineSet1494;

HAnimSegment1485ZZZ.children[2] = Shape1493;

HAnimJoint1484YYY.children = new X3D.MFNode();

HAnimJoint1484ZZZ.children[0] = HAnimSegment1485;

let HAnimJoint1497 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1497.name = "l_carpometacarpal_4";
HAnimJoint1497.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1497.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint1497.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1497.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1498 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1498.name = "l_metacarpal_4";
HAnimSegment1498.DEF = "hanim_l_metacarpal_4";
let Transform1499 = browser.currentScene.createNode("Transform");
Transform1499.translation = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
let Transform1500 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1501 = browser.currentScene.createNode("Shape");
Shape1501.USE = "HAnimJointShape";
Transform1500YYY.child = new X3D.undefined();

Transform1500ZZZ.child[0] = Shape1501;

Transform1499YYY.children = new X3D.MFNode();

Transform1499ZZZ.children[0] = Transform1500;

HAnimSegment1498YYY.children = new X3D.MFNode();

HAnimSegment1498ZZZ.children[0] = Transform1499;

let Shape1502 = browser.currentScene.createNode("Shape");
let LineSet1503 = browser.currentScene.createNode("LineSet");
LineSet1503.vertexCount = new X3D.MFInt32([2]);
let Coordinate1504 = browser.currentScene.createNode("Coordinate");
Coordinate1504.point = new X3D.MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
coord = Coordinate1504;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA1505 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1505.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1505;

geometry = LineSet1503;

HAnimSegment1498ZZZ.children[1] = Shape1502;

HAnimJoint1497YYY.children = new X3D.MFNode();

HAnimJoint1497ZZZ.children[0] = HAnimSegment1498;

let HAnimJoint1506 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1506.name = "l_metacarpophalangeal_4";
HAnimJoint1506.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1506.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint1506.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1506.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1507 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1507.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1507.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform1508 = browser.currentScene.createNode("Transform");
Transform1508.translation = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
let Transform1509 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1510 = browser.currentScene.createNode("Shape");
Shape1510.USE = "HAnimJointShape";
Transform1509YYY.child = new X3D.undefined();

Transform1509ZZZ.child[0] = Shape1510;

Transform1508YYY.children = new X3D.MFNode();

Transform1508ZZZ.children[0] = Transform1509;

HAnimSegment1507YYY.children = new X3D.MFNode();

HAnimSegment1507ZZZ.children[0] = Transform1508;

let Shape1511 = browser.currentScene.createNode("Shape");
let LineSet1512 = browser.currentScene.createNode("LineSet");
LineSet1512.vertexCount = new X3D.MFInt32([2]);
let Coordinate1513 = browser.currentScene.createNode("Coordinate");
Coordinate1513.point = new X3D.MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
coord = Coordinate1513;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1514 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1514.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1514;

geometry = LineSet1512;

HAnimSegment1507ZZZ.children[1] = Shape1511;

HAnimJoint1506YYY.children = new X3D.MFNode();

HAnimJoint1506ZZZ.children[0] = HAnimSegment1507;

let HAnimJoint1515 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1515.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1515.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1515.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint1515.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1515.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1516 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1516.name = "l_carpal_middle_phalanx_4";
HAnimSegment1516.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform1517 = browser.currentScene.createNode("Transform");
Transform1517.translation = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
let Transform1518 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1519 = browser.currentScene.createNode("Shape");
Shape1519.USE = "HAnimJointShape";
Transform1518YYY.child = new X3D.undefined();

Transform1518ZZZ.child[0] = Shape1519;

Transform1517YYY.children = new X3D.MFNode();

Transform1517ZZZ.children[0] = Transform1518;

HAnimSegment1516YYY.children = new X3D.MFNode();

HAnimSegment1516ZZZ.children[0] = Transform1517;

let Shape1520 = browser.currentScene.createNode("Shape");
let LineSet1521 = browser.currentScene.createNode("LineSet");
LineSet1521.vertexCount = new X3D.MFInt32([2]);
let Coordinate1522 = browser.currentScene.createNode("Coordinate");
Coordinate1522.point = new X3D.MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
coord = Coordinate1522;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1523 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1523.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1523;

geometry = LineSet1521;

HAnimSegment1516ZZZ.children[1] = Shape1520;

HAnimJoint1515YYY.children = new X3D.MFNode();

HAnimJoint1515ZZZ.children[0] = HAnimSegment1516;

let HAnimJoint1524 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1524.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1524.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1524.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint1524.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1524.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1515ZZZ.children[1] = HAnimJoint1524;

HAnimJoint1506ZZZ.children[1] = HAnimJoint1515;

HAnimJoint1497ZZZ.children[1] = HAnimJoint1506;

HAnimJoint1484ZZZ.children[1] = HAnimJoint1497;

let HAnimJoint1525 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1525.name = "l_carpometacarpal_5";
HAnimJoint1525.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1525.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint1525.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1525.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1526 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1526.name = "l_metacarpal_5";
HAnimSegment1526.DEF = "hanim_l_metacarpal_5";
let Transform1527 = browser.currentScene.createNode("Transform");
Transform1527.translation = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
let Transform1528 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1529 = browser.currentScene.createNode("Shape");
Shape1529.USE = "HAnimJointShape";
Transform1528YYY.child = new X3D.undefined();

Transform1528ZZZ.child[0] = Shape1529;

Transform1527YYY.children = new X3D.MFNode();

Transform1527ZZZ.children[0] = Transform1528;

HAnimSegment1526YYY.children = new X3D.MFNode();

HAnimSegment1526ZZZ.children[0] = Transform1527;

let Shape1530 = browser.currentScene.createNode("Shape");
let LineSet1531 = browser.currentScene.createNode("LineSet");
LineSet1531.vertexCount = new X3D.MFInt32([2]);
let Coordinate1532 = browser.currentScene.createNode("Coordinate");
Coordinate1532.point = new X3D.MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
coord = Coordinate1532;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA1533 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1533.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1533;

geometry = LineSet1531;

HAnimSegment1526ZZZ.children[1] = Shape1530;

let HAnimSite1534 = browser.currentScene.createNode("HAnimSite");
HAnimSite1534.name = "l_metacarpal_phalanx_5";
HAnimSite1534.DEF = "hanim_l_metacarpal_phalanx_5";
HAnimSite1534.translation = new X3D.SFVec3f([0.1929,0.786,-0.1122]);
let TouchSensor1535 = browser.currentScene.createNode("TouchSensor");
TouchSensor1535.description = "HAnimSite 77 l_metacarpal_phalanx_5";
HAnimSite1534YYY.children = new X3D.MFNode();

HAnimSite1534ZZZ.children[0] = TouchSensor1535;

let Shape1536 = browser.currentScene.createNode("Shape");
Shape1536.USE = "HAnimSiteShape";
HAnimSite1534ZZZ.children[1] = Shape1536;

let Billboard1537 = browser.currentScene.createNode("Billboard");
let Shape1538 = browser.currentScene.createNode("Shape");
let Text1539 = browser.currentScene.createNode("Text");
Text1539.string = new X3D.MFString([new X3D.SFString("77")]);
let FontStyle1540 = browser.currentScene.createNode("FontStyle");
FontStyle1540.size = 0.035;
fontStyle = FontStyle1540;

geometry = Text1539;

Billboard1537YYY.children = new X3D.MFNode();

Billboard1537ZZZ.children[0] = Shape1538;

HAnimSite1534ZZZ.children[2] = Billboard1537;

HAnimSegment1526ZZZ.children[2] = HAnimSite1534;

HAnimJoint1525YYY.children = new X3D.MFNode();

HAnimJoint1525ZZZ.children[0] = HAnimSegment1526;

let HAnimJoint1541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1541.name = "l_metacarpophalangeal_5";
HAnimJoint1541.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1541.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint1541.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1541.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1542.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1542.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform1543 = browser.currentScene.createNode("Transform");
Transform1543.translation = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
let Transform1544 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1545 = browser.currentScene.createNode("Shape");
Shape1545.USE = "HAnimJointShape";
Transform1544YYY.child = new X3D.undefined();

Transform1544ZZZ.child[0] = Shape1545;

Transform1543YYY.children = new X3D.MFNode();

Transform1543ZZZ.children[0] = Transform1544;

HAnimSegment1542YYY.children = new X3D.MFNode();

HAnimSegment1542ZZZ.children[0] = Transform1543;

let Shape1546 = browser.currentScene.createNode("Shape");
let LineSet1547 = browser.currentScene.createNode("LineSet");
LineSet1547.vertexCount = new X3D.MFInt32([2]);
let Coordinate1548 = browser.currentScene.createNode("Coordinate");
Coordinate1548.point = new X3D.MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
coord = Coordinate1548;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1549 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1549.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1549;

geometry = LineSet1547;

HAnimSegment1542ZZZ.children[1] = Shape1546;

HAnimJoint1541YYY.children = new X3D.MFNode();

HAnimJoint1541ZZZ.children[0] = HAnimSegment1542;

let HAnimJoint1550 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1550.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1550.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1550.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint1550.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1550.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1551 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1551.name = "l_carpal_middle_phalanx_5";
HAnimSegment1551.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform1552 = browser.currentScene.createNode("Transform");
Transform1552.translation = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
let Transform1553 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1554 = browser.currentScene.createNode("Shape");
Shape1554.USE = "HAnimJointShape";
Transform1553YYY.child = new X3D.undefined();

Transform1553ZZZ.child[0] = Shape1554;

Transform1552YYY.children = new X3D.MFNode();

Transform1552ZZZ.children[0] = Transform1553;

HAnimSegment1551YYY.children = new X3D.MFNode();

HAnimSegment1551ZZZ.children[0] = Transform1552;

let Shape1555 = browser.currentScene.createNode("Shape");
let LineSet1556 = browser.currentScene.createNode("LineSet");
LineSet1556.vertexCount = new X3D.MFInt32([2]);
let Coordinate1557 = browser.currentScene.createNode("Coordinate");
Coordinate1557.point = new X3D.MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
coord = Coordinate1557;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1558 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1558.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1558;

geometry = LineSet1556;

HAnimSegment1551ZZZ.children[1] = Shape1555;

HAnimJoint1550YYY.children = new X3D.MFNode();

HAnimJoint1550ZZZ.children[0] = HAnimSegment1551;

let HAnimJoint1559 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1559.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1559.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1559.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint1559.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1559.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1550ZZZ.children[1] = HAnimJoint1559;

HAnimJoint1541ZZZ.children[1] = HAnimJoint1550;

HAnimJoint1525ZZZ.children[1] = HAnimJoint1541;

HAnimJoint1484ZZZ.children[2] = HAnimJoint1525;

HAnimJoint1340ZZZ.children[4] = HAnimJoint1484;

HAnimJoint1303ZZZ.children[1] = HAnimJoint1340;

HAnimJoint1280ZZZ.children[1] = HAnimJoint1303;

HAnimJoint1271ZZZ.children[1] = HAnimJoint1280;

HAnimJoint1227ZZZ.children[1] = HAnimJoint1271;

HAnimJoint995ZZZ.children[2] = HAnimJoint1227;

let HAnimJoint1560 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1560.name = "r_sternoclavicular";
HAnimJoint1560.DEF = "hanim_r_sternoclavicular";
HAnimJoint1560.center = new X3D.SFVec3f([-0.0694,1.46,-0.033]);
HAnimJoint1560.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1560.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1561 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1561.name = "r_clavicle";
HAnimSegment1561.DEF = "hanim_r_clavicle";
let Transform1562 = browser.currentScene.createNode("Transform");
Transform1562.translation = new X3D.SFVec3f([-0.0694,1.46,-0.033]);
let Transform1563 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1564 = browser.currentScene.createNode("Shape");
Shape1564.USE = "HAnimJointShape";
Transform1563YYY.child = new X3D.undefined();

Transform1563ZZZ.child[0] = Shape1564;

Transform1562YYY.children = new X3D.MFNode();

Transform1562ZZZ.children[0] = Transform1563;

HAnimSegment1561YYY.children = new X3D.MFNode();

HAnimSegment1561ZZZ.children[0] = Transform1562;

let Shape1565 = browser.currentScene.createNode("Shape");
let LineSet1566 = browser.currentScene.createNode("LineSet");
LineSet1566.vertexCount = new X3D.MFInt32([2]);
let Coordinate1567 = browser.currentScene.createNode("Coordinate");
Coordinate1567.point = new X3D.MFVec3f([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
coord = Coordinate1567;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA1568 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1568.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1568;

geometry = LineSet1566;

HAnimSegment1561ZZZ.children[1] = Shape1565;

let HAnimSite1569 = browser.currentScene.createNode("HAnimSite");
HAnimSite1569.name = "r_acromion";
HAnimSite1569.DEF = "hanim_r_acromion";
HAnimSite1569.translation = new X3D.SFVec3f([-0.1905,1.4791,-0.0431]);
let TouchSensor1570 = browser.currentScene.createNode("TouchSensor");
TouchSensor1570.description = "HAnimSite 20 r_acromion";
HAnimSite1569YYY.children = new X3D.MFNode();

HAnimSite1569ZZZ.children[0] = TouchSensor1570;

let Shape1571 = browser.currentScene.createNode("Shape");
Shape1571.USE = "HAnimSiteShape";
HAnimSite1569ZZZ.children[1] = Shape1571;

let Billboard1572 = browser.currentScene.createNode("Billboard");
let Shape1573 = browser.currentScene.createNode("Shape");
let Text1574 = browser.currentScene.createNode("Text");
Text1574.string = new X3D.MFString([new X3D.SFString("20")]);
let FontStyle1575 = browser.currentScene.createNode("FontStyle");
FontStyle1575.size = 0.035;
fontStyle = FontStyle1575;

geometry = Text1574;

Billboard1572YYY.children = new X3D.MFNode();

Billboard1572ZZZ.children[0] = Shape1573;

HAnimSite1569ZZZ.children[2] = Billboard1572;

HAnimSegment1561ZZZ.children[2] = HAnimSite1569;

let HAnimSite1576 = browser.currentScene.createNode("HAnimSite");
HAnimSite1576.name = "r_axilla_distal";
HAnimSite1576.DEF = "hanim_r_axilla_distal";
HAnimSite1576.translation = new X3D.SFVec3f([-0.1603,1.4098,-0.0826]);
let TouchSensor1577 = browser.currentScene.createNode("TouchSensor");
TouchSensor1577.description = "HAnimSite 22 r_axilla_distal";
HAnimSite1576YYY.children = new X3D.MFNode();

HAnimSite1576ZZZ.children[0] = TouchSensor1577;

let Shape1578 = browser.currentScene.createNode("Shape");
Shape1578.USE = "HAnimSiteShape";
HAnimSite1576ZZZ.children[1] = Shape1578;

let Billboard1579 = browser.currentScene.createNode("Billboard");
let Shape1580 = browser.currentScene.createNode("Shape");
let Text1581 = browser.currentScene.createNode("Text");
Text1581.string = new X3D.MFString([new X3D.SFString("22")]);
let FontStyle1582 = browser.currentScene.createNode("FontStyle");
FontStyle1582.size = 0.035;
fontStyle = FontStyle1582;

geometry = Text1581;

Billboard1579YYY.children = new X3D.MFNode();

Billboard1579ZZZ.children[0] = Shape1580;

HAnimSite1576ZZZ.children[2] = Billboard1579;

HAnimSegment1561ZZZ.children[3] = HAnimSite1576;

let HAnimSite1583 = browser.currentScene.createNode("HAnimSite");
HAnimSite1583.name = "r_axilla_posterior_folds";
HAnimSite1583.DEF = "hanim_r_axilla_posterior_folds";
let TouchSensor1584 = browser.currentScene.createNode("TouchSensor");
TouchSensor1584.description = "HAnimSite 23 r_axilla_posterior_folds";
HAnimSite1583YYY.children = new X3D.MFNode();

HAnimSite1583ZZZ.children[0] = TouchSensor1584;

let Shape1585 = browser.currentScene.createNode("Shape");
Shape1585.USE = "HAnimSiteShape";
HAnimSite1583ZZZ.children[1] = Shape1585;

let Billboard1586 = browser.currentScene.createNode("Billboard");
let Shape1587 = browser.currentScene.createNode("Shape");
let Text1588 = browser.currentScene.createNode("Text");
Text1588.string = new X3D.MFString([new X3D.SFString("23")]);
let FontStyle1589 = browser.currentScene.createNode("FontStyle");
FontStyle1589.size = 0.035;
fontStyle = FontStyle1589;

geometry = Text1588;

Billboard1586YYY.children = new X3D.MFNode();

Billboard1586ZZZ.children[0] = Shape1587;

HAnimSite1583ZZZ.children[2] = Billboard1586;

HAnimSegment1561ZZZ.children[4] = HAnimSite1583;

let HAnimSite1590 = browser.currentScene.createNode("HAnimSite");
HAnimSite1590.name = "r_axilla_proximal";
HAnimSite1590.DEF = "hanim_r_axilla_proximal";
HAnimSite1590.translation = new X3D.SFVec3f([-0.1626,1.4072,-0.0031]);
let TouchSensor1591 = browser.currentScene.createNode("TouchSensor");
TouchSensor1591.description = "HAnimSite 21 r_axilla_proximal";
HAnimSite1590YYY.children = new X3D.MFNode();

HAnimSite1590ZZZ.children[0] = TouchSensor1591;

let Shape1592 = browser.currentScene.createNode("Shape");
Shape1592.USE = "HAnimSiteShape";
HAnimSite1590ZZZ.children[1] = Shape1592;

let Billboard1593 = browser.currentScene.createNode("Billboard");
let Shape1594 = browser.currentScene.createNode("Shape");
let Text1595 = browser.currentScene.createNode("Text");
Text1595.string = new X3D.MFString([new X3D.SFString("21")]);
let FontStyle1596 = browser.currentScene.createNode("FontStyle");
FontStyle1596.size = 0.035;
fontStyle = FontStyle1596;

geometry = Text1595;

Billboard1593YYY.children = new X3D.MFNode();

Billboard1593ZZZ.children[0] = Shape1594;

HAnimSite1590ZZZ.children[2] = Billboard1593;

HAnimSegment1561ZZZ.children[5] = HAnimSite1590;

let HAnimSite1597 = browser.currentScene.createNode("HAnimSite");
HAnimSite1597.name = "r_clavicale";
HAnimSite1597.DEF = "hanim_r_clavicale";
HAnimSite1597.translation = new X3D.SFVec3f([-0.0115,1.4943,0.04]);
let TouchSensor1598 = browser.currentScene.createNode("TouchSensor");
TouchSensor1598.description = "HAnimSite 19 r_clavicale";
HAnimSite1597YYY.children = new X3D.MFNode();

HAnimSite1597ZZZ.children[0] = TouchSensor1598;

let Shape1599 = browser.currentScene.createNode("Shape");
Shape1599.USE = "HAnimSiteShape";
HAnimSite1597ZZZ.children[1] = Shape1599;

let Billboard1600 = browser.currentScene.createNode("Billboard");
let Shape1601 = browser.currentScene.createNode("Shape");
let Text1602 = browser.currentScene.createNode("Text");
Text1602.string = new X3D.MFString([new X3D.SFString("19")]);
let FontStyle1603 = browser.currentScene.createNode("FontStyle");
FontStyle1603.size = 0.035;
fontStyle = FontStyle1603;

geometry = Text1602;

Billboard1600YYY.children = new X3D.MFNode();

Billboard1600ZZZ.children[0] = Shape1601;

HAnimSite1597ZZZ.children[2] = Billboard1600;

HAnimSegment1561ZZZ.children[6] = HAnimSite1597;

HAnimJoint1560YYY.children = new X3D.MFNode();

HAnimJoint1560ZZZ.children[0] = HAnimSegment1561;

let HAnimJoint1604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1604.name = "r_acromioclavicular";
HAnimJoint1604.DEF = "hanim_r_acromioclavicular";
HAnimJoint1604.center = new X3D.SFVec3f([-0.0836,1.4281,-0.0401]);
HAnimJoint1604.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1604.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1605 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1605.name = "r_scapula";
HAnimSegment1605.DEF = "hanim_r_scapula";
let Transform1606 = browser.currentScene.createNode("Transform");
Transform1606.translation = new X3D.SFVec3f([-0.0836,1.4281,-0.0401]);
let Transform1607 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1608 = browser.currentScene.createNode("Shape");
Shape1608.USE = "HAnimJointShape";
Transform1607YYY.child = new X3D.undefined();

Transform1607ZZZ.child[0] = Shape1608;

Transform1606YYY.children = new X3D.MFNode();

Transform1606ZZZ.children[0] = Transform1607;

HAnimSegment1605YYY.children = new X3D.MFNode();

HAnimSegment1605ZZZ.children[0] = Transform1606;

let Shape1609 = browser.currentScene.createNode("Shape");
let LineSet1610 = browser.currentScene.createNode("LineSet");
LineSet1610.vertexCount = new X3D.MFInt32([2]);
let Coordinate1611 = browser.currentScene.createNode("Coordinate");
Coordinate1611.point = new X3D.MFVec3f([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
coord = Coordinate1611;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA1612 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1612.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1612;

geometry = LineSet1610;

HAnimSegment1605ZZZ.children[1] = Shape1609;

HAnimJoint1604YYY.children = new X3D.MFNode();

HAnimJoint1604ZZZ.children[0] = HAnimSegment1605;

let HAnimJoint1613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1613.name = "r_shoulder";
HAnimJoint1613.DEF = "hanim_r_shoulder";
HAnimJoint1613.center = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
HAnimJoint1613.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1613.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1614 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1614.name = "r_upperarm";
HAnimSegment1614.DEF = "hanim_r_upperarm";
let Transform1615 = browser.currentScene.createNode("Transform");
Transform1615.translation = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
let Transform1616 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1617 = browser.currentScene.createNode("Shape");
Shape1617.USE = "HAnimJointShape";
Transform1616YYY.child = new X3D.undefined();

Transform1616ZZZ.child[0] = Shape1617;

Transform1615YYY.children = new X3D.MFNode();

Transform1615ZZZ.children[0] = Transform1616;

HAnimSegment1614YYY.children = new X3D.MFNode();

HAnimSegment1614ZZZ.children[0] = Transform1615;

let Shape1618 = browser.currentScene.createNode("Shape");
let LineSet1619 = browser.currentScene.createNode("LineSet");
LineSet1619.vertexCount = new X3D.MFInt32([2]);
let Coordinate1620 = browser.currentScene.createNode("Coordinate");
Coordinate1620.point = new X3D.MFVec3f([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
coord = Coordinate1620;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA1621 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1621.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1621;

geometry = LineSet1619;

HAnimSegment1614ZZZ.children[1] = Shape1618;

let HAnimSite1622 = browser.currentScene.createNode("HAnimSite");
HAnimSite1622.name = "r_bideltoid";
HAnimSite1622.DEF = "hanim_r_bideltoid";
let TouchSensor1623 = browser.currentScene.createNode("TouchSensor");
TouchSensor1623.description = "HAnimSite 97 r_bideltoid";
HAnimSite1622YYY.children = new X3D.MFNode();

HAnimSite1622ZZZ.children[0] = TouchSensor1623;

let Shape1624 = browser.currentScene.createNode("Shape");
Shape1624.USE = "HAnimSiteShape";
HAnimSite1622ZZZ.children[1] = Shape1624;

let Billboard1625 = browser.currentScene.createNode("Billboard");
let Shape1626 = browser.currentScene.createNode("Shape");
let Text1627 = browser.currentScene.createNode("Text");
Text1627.string = new X3D.MFString([new X3D.SFString("97")]);
let FontStyle1628 = browser.currentScene.createNode("FontStyle");
FontStyle1628.size = 0.035;
fontStyle = FontStyle1628;

geometry = Text1627;

Billboard1625YYY.children = new X3D.MFNode();

Billboard1625ZZZ.children[0] = Shape1626;

HAnimSite1622ZZZ.children[2] = Billboard1625;

HAnimSegment1614ZZZ.children[2] = HAnimSite1622;

let HAnimSite1629 = browser.currentScene.createNode("HAnimSite");
HAnimSite1629.name = "r_humeral_lateral_epicondyles";
HAnimSite1629.DEF = "hanim_r_humeral_lateral_epicondyles";
HAnimSite1629.translation = new X3D.SFVec3f([-0.2224,1.1517,-0.1033]);
let TouchSensor1630 = browser.currentScene.createNode("TouchSensor");
TouchSensor1630.description = "HAnimSite 66 r_humeral_lateral_epicondyles";
HAnimSite1629YYY.children = new X3D.MFNode();

HAnimSite1629ZZZ.children[0] = TouchSensor1630;

let Shape1631 = browser.currentScene.createNode("Shape");
Shape1631.USE = "HAnimSiteShape";
HAnimSite1629ZZZ.children[1] = Shape1631;

let Billboard1632 = browser.currentScene.createNode("Billboard");
let Shape1633 = browser.currentScene.createNode("Shape");
let Text1634 = browser.currentScene.createNode("Text");
Text1634.string = new X3D.MFString([new X3D.SFString("66")]);
let FontStyle1635 = browser.currentScene.createNode("FontStyle");
FontStyle1635.size = 0.035;
fontStyle = FontStyle1635;

geometry = Text1634;

Billboard1632YYY.children = new X3D.MFNode();

Billboard1632ZZZ.children[0] = Shape1633;

HAnimSite1629ZZZ.children[2] = Billboard1632;

HAnimSegment1614ZZZ.children[3] = HAnimSite1629;

HAnimJoint1613YYY.children = new X3D.MFNode();

HAnimJoint1613ZZZ.children[0] = HAnimSegment1614;

let HAnimJoint1636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1636.name = "r_elbow";
HAnimJoint1636.DEF = "hanim_r_elbow";
HAnimJoint1636.center = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
HAnimJoint1636.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1636.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1637 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1637.name = "r_forearm";
HAnimSegment1637.DEF = "hanim_r_forearm";
let Transform1638 = browser.currentScene.createNode("Transform");
Transform1638.translation = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
let Transform1639 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1640 = browser.currentScene.createNode("Shape");
Shape1640.USE = "HAnimJointShape";
Transform1639YYY.child = new X3D.undefined();

Transform1639ZZZ.child[0] = Shape1640;

Transform1638YYY.children = new X3D.MFNode();

Transform1638ZZZ.children[0] = Transform1639;

HAnimSegment1637YYY.children = new X3D.MFNode();

HAnimSegment1637ZZZ.children[0] = Transform1638;

let Shape1641 = browser.currentScene.createNode("Shape");
let LineSet1642 = browser.currentScene.createNode("LineSet");
LineSet1642.vertexCount = new X3D.MFInt32([2]);
let Coordinate1643 = browser.currentScene.createNode("Coordinate");
Coordinate1643.point = new X3D.MFVec3f([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
coord = Coordinate1643;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA1644 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1644.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1644;

geometry = LineSet1642;

HAnimSegment1637ZZZ.children[1] = Shape1641;

let HAnimSite1645 = browser.currentScene.createNode("HAnimSite");
HAnimSite1645.name = "r_humeral_medial_epicondyles";
HAnimSite1645.DEF = "hanim_r_humeral_medial_epicondyles";
HAnimSite1645.translation = new X3D.SFVec3f([-0.168,1.1298,-0.1062]);
let TouchSensor1646 = browser.currentScene.createNode("TouchSensor");
TouchSensor1646.description = "HAnimSite 67 r_humeral_medial_epicondyles";
HAnimSite1645YYY.children = new X3D.MFNode();

HAnimSite1645ZZZ.children[0] = TouchSensor1646;

let Shape1647 = browser.currentScene.createNode("Shape");
Shape1647.USE = "HAnimSiteShape";
HAnimSite1645ZZZ.children[1] = Shape1647;

let Billboard1648 = browser.currentScene.createNode("Billboard");
let Shape1649 = browser.currentScene.createNode("Shape");
let Text1650 = browser.currentScene.createNode("Text");
Text1650.string = new X3D.MFString([new X3D.SFString("67")]);
let FontStyle1651 = browser.currentScene.createNode("FontStyle");
FontStyle1651.size = 0.035;
fontStyle = FontStyle1651;

geometry = Text1650;

Billboard1648YYY.children = new X3D.MFNode();

Billboard1648ZZZ.children[0] = Shape1649;

HAnimSite1645ZZZ.children[2] = Billboard1648;

HAnimSegment1637ZZZ.children[2] = HAnimSite1645;

let HAnimSite1652 = browser.currentScene.createNode("HAnimSite");
HAnimSite1652.name = "r_olecranon";
HAnimSite1652.DEF = "hanim_r_olecranon";
HAnimSite1652.translation = new X3D.SFVec3f([-0.1907,1.1405,-0.1065]);
let TouchSensor1653 = browser.currentScene.createNode("TouchSensor");
TouchSensor1653.description = "HAnimSite 68 r_olecranon";
HAnimSite1652YYY.children = new X3D.MFNode();

HAnimSite1652ZZZ.children[0] = TouchSensor1653;

let Shape1654 = browser.currentScene.createNode("Shape");
Shape1654.USE = "HAnimSiteShape";
HAnimSite1652ZZZ.children[1] = Shape1654;

let Billboard1655 = browser.currentScene.createNode("Billboard");
let Shape1656 = browser.currentScene.createNode("Shape");
let Text1657 = browser.currentScene.createNode("Text");
Text1657.string = new X3D.MFString([new X3D.SFString("68")]);
let FontStyle1658 = browser.currentScene.createNode("FontStyle");
FontStyle1658.size = 0.035;
fontStyle = FontStyle1658;

geometry = Text1657;

Billboard1655YYY.children = new X3D.MFNode();

Billboard1655ZZZ.children[0] = Shape1656;

HAnimSite1652ZZZ.children[2] = Billboard1655;

HAnimSegment1637ZZZ.children[3] = HAnimSite1652;

let HAnimSite1659 = browser.currentScene.createNode("HAnimSite");
HAnimSite1659.name = "r_radial_styloid";
HAnimSite1659.DEF = "hanim_r_radial_styloid";
HAnimSite1659.translation = new X3D.SFVec3f([-0.1884,0.8676,-0.036]);
let TouchSensor1660 = browser.currentScene.createNode("TouchSensor");
TouchSensor1660.description = "HAnimSite 74 r_radial_styloid";
HAnimSite1659YYY.children = new X3D.MFNode();

HAnimSite1659ZZZ.children[0] = TouchSensor1660;

let Shape1661 = browser.currentScene.createNode("Shape");
Shape1661.USE = "HAnimSiteShape";
HAnimSite1659ZZZ.children[1] = Shape1661;

let Billboard1662 = browser.currentScene.createNode("Billboard");
let Shape1663 = browser.currentScene.createNode("Shape");
let Text1664 = browser.currentScene.createNode("Text");
Text1664.string = new X3D.MFString([new X3D.SFString("74")]);
let FontStyle1665 = browser.currentScene.createNode("FontStyle");
FontStyle1665.size = 0.035;
fontStyle = FontStyle1665;

geometry = Text1664;

Billboard1662YYY.children = new X3D.MFNode();

Billboard1662ZZZ.children[0] = Shape1663;

HAnimSite1659ZZZ.children[2] = Billboard1662;

HAnimSegment1637ZZZ.children[4] = HAnimSite1659;

let HAnimSite1666 = browser.currentScene.createNode("HAnimSite");
HAnimSite1666.name = "r_radiale";
HAnimSite1666.DEF = "hanim_r_radiale";
HAnimSite1666.translation = new X3D.SFVec3f([-0.213,1.1305,-0.1091]);
let TouchSensor1667 = browser.currentScene.createNode("TouchSensor");
TouchSensor1667.description = "HAnimSite 72 r_radiale";
HAnimSite1666YYY.children = new X3D.MFNode();

HAnimSite1666ZZZ.children[0] = TouchSensor1667;

let Shape1668 = browser.currentScene.createNode("Shape");
Shape1668.USE = "HAnimSiteShape";
HAnimSite1666ZZZ.children[1] = Shape1668;

let Billboard1669 = browser.currentScene.createNode("Billboard");
let Shape1670 = browser.currentScene.createNode("Shape");
let Text1671 = browser.currentScene.createNode("Text");
Text1671.string = new X3D.MFString([new X3D.SFString("72")]);
let FontStyle1672 = browser.currentScene.createNode("FontStyle");
FontStyle1672.size = 0.035;
fontStyle = FontStyle1672;

geometry = Text1671;

Billboard1669YYY.children = new X3D.MFNode();

Billboard1669ZZZ.children[0] = Shape1670;

HAnimSite1666ZZZ.children[2] = Billboard1669;

HAnimSegment1637ZZZ.children[5] = HAnimSite1666;

HAnimJoint1636YYY.children = new X3D.MFNode();

HAnimJoint1636ZZZ.children[0] = HAnimSegment1637;

let HAnimJoint1673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1673.name = "r_radiocarpal";
HAnimJoint1673.DEF = "hanim_r_radiocarpal";
HAnimJoint1673.center = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
HAnimJoint1673.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1673.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1674 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1674.name = "r_carpal";
HAnimSegment1674.DEF = "hanim_r_carpal";
let Transform1675 = browser.currentScene.createNode("Transform");
Transform1675.scale = new X3D.SFVec3f([0.2,0.2,0.2]);
Transform1675.translation = new X3D.SFVec3f([-0.2,0.85,-0.05]);
Transform1675.rotation = new X3D.SFRotation([0,0,1,-3.14]);
//Transform right hand
let Transform1676 = browser.currentScene.createNode("Transform");
Transform1676.rotation = new X3D.SFRotation([0,1,0,1.57]);
//Transform right hand
let Shape1677 = browser.currentScene.createNode("Shape");
Shape1677.USE = "HAnimJointShape";
Transform1676YYY.child = new X3D.undefined();

Transform1676ZZZ.child[0] = Shape1677;

Transform1675YYY.children = new X3D.MFNode();

Transform1675ZZZ.children[0] = Transform1676;

HAnimSegment1674YYY.children = new X3D.MFNode();

HAnimSegment1674ZZZ.children[0] = Transform1675;

let Shape1678 = browser.currentScene.createNode("Shape");
let LineSet1679 = browser.currentScene.createNode("LineSet");
LineSet1679.vertexCount = new X3D.MFInt32([2]);
let Coordinate1680 = browser.currentScene.createNode("Coordinate");
Coordinate1680.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826]);
coord = Coordinate1680;

//from r_radiocarpal to r_midcarpal_1 vertices 2
let ColorRGBA1681 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1681.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1681;

geometry = LineSet1679;

HAnimSegment1674ZZZ.children[1] = Shape1678;

let HAnimSite1682 = browser.currentScene.createNode("HAnimSite");
HAnimSite1682.name = "r_ulnar_styloid";
HAnimSite1682.DEF = "hanim_r_ulnar_styloid";
HAnimSite1682.translation = new X3D.SFVec3f([-0.2117,0.8562,-0.0584]);
let TouchSensor1683 = browser.currentScene.createNode("TouchSensor");
TouchSensor1683.description = "HAnimSite 73 r_ulnar_styloid";
HAnimSite1682YYY.children = new X3D.MFNode();

HAnimSite1682ZZZ.children[0] = TouchSensor1683;

let Shape1684 = browser.currentScene.createNode("Shape");
Shape1684.USE = "HAnimSiteShape";
HAnimSite1682ZZZ.children[1] = Shape1684;

let Billboard1685 = browser.currentScene.createNode("Billboard");
let Shape1686 = browser.currentScene.createNode("Shape");
let Text1687 = browser.currentScene.createNode("Text");
Text1687.string = new X3D.MFString([new X3D.SFString("73")]);
let FontStyle1688 = browser.currentScene.createNode("FontStyle");
FontStyle1688.size = 0.035;
fontStyle = FontStyle1688;

geometry = Text1687;

Billboard1685YYY.children = new X3D.MFNode();

Billboard1685ZZZ.children[0] = Shape1686;

HAnimSite1682ZZZ.children[2] = Billboard1685;

HAnimSegment1674ZZZ.children[2] = HAnimSite1682;

let Shape1689 = browser.currentScene.createNode("Shape");
let LineSet1690 = browser.currentScene.createNode("LineSet");
LineSet1690.vertexCount = new X3D.MFInt32([2]);
let Coordinate1691 = browser.currentScene.createNode("Coordinate");
Coordinate1691.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935]);
coord = Coordinate1691;

//from r_radiocarpal to r_midcarpal_2 vertices 2
let ColorRGBA1692 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1692.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1692;

geometry = LineSet1690;

HAnimSegment1674ZZZ.children[3] = Shape1689;

let Shape1693 = browser.currentScene.createNode("Shape");
let LineSet1694 = browser.currentScene.createNode("LineSet");
LineSet1694.vertexCount = new X3D.MFInt32([2]);
let Coordinate1695 = browser.currentScene.createNode("Coordinate");
Coordinate1695.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067]);
coord = Coordinate1695;

//from r_radiocarpal to r_midcarpal_3 vertices 2
let ColorRGBA1696 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1696.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1696;

geometry = LineSet1694;

HAnimSegment1674ZZZ.children[4] = Shape1693;

let Shape1697 = browser.currentScene.createNode("Shape");
let LineSet1698 = browser.currentScene.createNode("LineSet");
LineSet1698.vertexCount = new X3D.MFInt32([2]);
let Coordinate1699 = browser.currentScene.createNode("Coordinate");
Coordinate1699.point = new X3D.MFVec3f([-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276]);
coord = Coordinate1699;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
let ColorRGBA1700 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1700.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1700;

geometry = LineSet1698;

HAnimSegment1674ZZZ.children[5] = Shape1697;

HAnimJoint1673YYY.children = new X3D.MFNode();

HAnimJoint1673ZZZ.children[0] = HAnimSegment1674;

let HAnimJoint1701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1701.name = "r_midcarpal_1";
HAnimJoint1701.DEF = "hanim_r_midcarpal_1";
HAnimJoint1701.center = new X3D.SFVec3f([-0.1811,0.6975,-0.0826]);
HAnimJoint1701.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1701.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1702 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1702.name = "r_trapezium";
HAnimSegment1702.DEF = "hanim_r_trapezium";
let Transform1703 = browser.currentScene.createNode("Transform");
Transform1703.translation = new X3D.SFVec3f([-0.1811,0.6975,-0.0826]);
let Transform1704 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1705 = browser.currentScene.createNode("Shape");
Shape1705.USE = "HAnimJointShape";
Transform1704YYY.child = new X3D.undefined();

Transform1704ZZZ.child[0] = Shape1705;

Transform1703YYY.children = new X3D.MFNode();

Transform1703ZZZ.children[0] = Transform1704;

HAnimSegment1702YYY.children = new X3D.MFNode();

HAnimSegment1702ZZZ.children[0] = Transform1703;

let Shape1706 = browser.currentScene.createNode("Shape");
let LineSet1707 = browser.currentScene.createNode("LineSet");
LineSet1707.vertexCount = new X3D.MFInt32([2]);
let Coordinate1708 = browser.currentScene.createNode("Coordinate");
Coordinate1708.point = new X3D.MFVec3f([-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473]);
coord = Coordinate1708;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
let ColorRGBA1709 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1709.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1709;

geometry = LineSet1707;

HAnimSegment1702ZZZ.children[1] = Shape1706;

HAnimJoint1701YYY.children = new X3D.MFNode();

HAnimJoint1701ZZZ.children[0] = HAnimSegment1702;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.name = "r_carpometacarpal_1";
HAnimJoint1710.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1710.center = new X3D.SFVec3f([-0.1899,0.8502,-0.0473]);
HAnimJoint1710.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1710.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1711 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1711.name = "r_metacarpal_1";
HAnimSegment1711.DEF = "hanim_r_metacarpal_1";
let Transform1712 = browser.currentScene.createNode("Transform");
Transform1712.translation = new X3D.SFVec3f([-0.1899,0.8502,-0.0473]);
let Transform1713 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1714 = browser.currentScene.createNode("Shape");
Shape1714.USE = "HAnimJointShape";
Transform1713YYY.child = new X3D.undefined();

Transform1713ZZZ.child[0] = Shape1714;

Transform1712YYY.children = new X3D.MFNode();

Transform1712ZZZ.children[0] = Transform1713;

HAnimSegment1711YYY.children = new X3D.MFNode();

HAnimSegment1711ZZZ.children[0] = Transform1712;

let Shape1715 = browser.currentScene.createNode("Shape");
let LineSet1716 = browser.currentScene.createNode("LineSet");
LineSet1716.vertexCount = new X3D.MFInt32([2]);
let Coordinate1717 = browser.currentScene.createNode("Coordinate");
Coordinate1717.point = new X3D.MFVec3f([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
coord = Coordinate1717;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA1718 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1718.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1718;

geometry = LineSet1716;

HAnimSegment1711ZZZ.children[1] = Shape1715;

HAnimJoint1710YYY.children = new X3D.MFNode();

HAnimJoint1710ZZZ.children[0] = HAnimSegment1711;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.name = "r_metacarpophalangeal_1";
HAnimJoint1719.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1719.center = new X3D.SFVec3f([-0.1874,0.8256,0.0306]);
HAnimJoint1719.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1719.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1720 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1720.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1720.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform1721 = browser.currentScene.createNode("Transform");
Transform1721.translation = new X3D.SFVec3f([-0.1874,0.8256,0.0306]);
let Transform1722 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1723 = browser.currentScene.createNode("Shape");
Shape1723.USE = "HAnimJointShape";
Transform1722YYY.child = new X3D.undefined();

Transform1722ZZZ.child[0] = Shape1723;

Transform1721YYY.children = new X3D.MFNode();

Transform1721ZZZ.children[0] = Transform1722;

HAnimSegment1720YYY.children = new X3D.MFNode();

HAnimSegment1720ZZZ.children[0] = Transform1721;

let Shape1724 = browser.currentScene.createNode("Shape");
let LineSet1725 = browser.currentScene.createNode("LineSet");
LineSet1725.vertexCount = new X3D.MFInt32([2]);
let Coordinate1726 = browser.currentScene.createNode("Coordinate");
Coordinate1726.point = new X3D.MFVec3f([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
coord = Coordinate1726;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA1727 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1727.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1727;

geometry = LineSet1725;

HAnimSegment1720ZZZ.children[1] = Shape1724;

HAnimJoint1719YYY.children = new X3D.MFNode();

HAnimJoint1719ZZZ.children[0] = HAnimSegment1720;

let HAnimJoint1728 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1728.name = "r_carpal_interphalangeal_1";
HAnimJoint1728.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1728.center = new X3D.SFVec3f([-0.1864,0.819,0.0506]);
HAnimJoint1728.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1728.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1719ZZZ.children[1] = HAnimJoint1728;

HAnimJoint1710ZZZ.children[1] = HAnimJoint1719;

HAnimJoint1701ZZZ.children[1] = HAnimJoint1710;

HAnimJoint1673ZZZ.children[1] = HAnimJoint1701;

let HAnimJoint1729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1729.name = "r_midcarpal_2";
HAnimJoint1729.DEF = "hanim_r_midcarpal_2";
HAnimJoint1729.center = new X3D.SFVec3f([-0.1811,0.6984,-0.0935]);
HAnimJoint1729.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1729.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1730 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1730.name = "r_trapezoid";
HAnimSegment1730.DEF = "hanim_r_trapezoid";
let Transform1731 = browser.currentScene.createNode("Transform");
Transform1731.translation = new X3D.SFVec3f([-0.1811,0.6984,-0.0935]);
let Transform1732 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1733 = browser.currentScene.createNode("Shape");
Shape1733.USE = "HAnimJointShape";
Transform1732YYY.child = new X3D.undefined();

Transform1732ZZZ.child[0] = Shape1733;

Transform1731YYY.children = new X3D.MFNode();

Transform1731ZZZ.children[0] = Transform1732;

HAnimSegment1730YYY.children = new X3D.MFNode();

HAnimSegment1730ZZZ.children[0] = Transform1731;

let Shape1734 = browser.currentScene.createNode("Shape");
let LineSet1735 = browser.currentScene.createNode("LineSet");
LineSet1735.vertexCount = new X3D.MFInt32([2]);
let Coordinate1736 = browser.currentScene.createNode("Coordinate");
Coordinate1736.point = new X3D.MFVec3f([-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218]);
coord = Coordinate1736;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
let ColorRGBA1737 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1737.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1737;

geometry = LineSet1735;

HAnimSegment1730ZZZ.children[1] = Shape1734;

HAnimJoint1729YYY.children = new X3D.MFNode();

HAnimJoint1729ZZZ.children[0] = HAnimSegment1730;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.name = "r_carpometacarpal_2";
HAnimJoint1738.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1738.center = new X3D.SFVec3f([-0.1961,0.8055,-0.0218]);
HAnimJoint1738.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1738.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1739 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1739.name = "r_metacarpal_2";
HAnimSegment1739.DEF = "hanim_r_metacarpal_2";
let Transform1740 = browser.currentScene.createNode("Transform");
Transform1740.translation = new X3D.SFVec3f([-0.1961,0.8055,-0.0218]);
let Transform1741 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1742 = browser.currentScene.createNode("Shape");
Shape1742.USE = "HAnimJointShape";
Transform1741YYY.child = new X3D.undefined();

Transform1741ZZZ.child[0] = Shape1742;

Transform1740YYY.children = new X3D.MFNode();

Transform1740ZZZ.children[0] = Transform1741;

HAnimSegment1739YYY.children = new X3D.MFNode();

HAnimSegment1739ZZZ.children[0] = Transform1740;

let Shape1743 = browser.currentScene.createNode("Shape");
let LineSet1744 = browser.currentScene.createNode("LineSet");
LineSet1744.vertexCount = new X3D.MFInt32([2]);
let Coordinate1745 = browser.currentScene.createNode("Coordinate");
Coordinate1745.point = new X3D.MFVec3f([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
coord = Coordinate1745;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA1746 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1746.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1746;

geometry = LineSet1744;

HAnimSegment1739ZZZ.children[1] = Shape1743;

let HAnimSite1747 = browser.currentScene.createNode("HAnimSite");
HAnimSite1747.name = "r_metacarpal_phalanx_2";
HAnimSite1747.DEF = "hanim_r_metacarpal_phalanx_2";
HAnimSite1747.translation = new X3D.SFVec3f([-0.1977,0.8169,-0.0177]);
let TouchSensor1748 = browser.currentScene.createNode("TouchSensor");
TouchSensor1748.description = "HAnimSite 78 r_metacarpal_phalanx_2";
HAnimSite1747YYY.children = new X3D.MFNode();

HAnimSite1747ZZZ.children[0] = TouchSensor1748;

let Shape1749 = browser.currentScene.createNode("Shape");
Shape1749.USE = "HAnimSiteShape";
HAnimSite1747ZZZ.children[1] = Shape1749;

let Billboard1750 = browser.currentScene.createNode("Billboard");
let Shape1751 = browser.currentScene.createNode("Shape");
let Text1752 = browser.currentScene.createNode("Text");
Text1752.string = new X3D.MFString([new X3D.SFString("78")]);
let FontStyle1753 = browser.currentScene.createNode("FontStyle");
FontStyle1753.size = 0.035;
fontStyle = FontStyle1753;

geometry = Text1752;

Billboard1750YYY.children = new X3D.MFNode();

Billboard1750ZZZ.children[0] = Shape1751;

HAnimSite1747ZZZ.children[2] = Billboard1750;

HAnimSegment1739ZZZ.children[2] = HAnimSite1747;

HAnimJoint1738YYY.children = new X3D.MFNode();

HAnimJoint1738ZZZ.children[0] = HAnimSegment1739;

let HAnimJoint1754 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1754.name = "r_metacarpophalangeal_2";
HAnimJoint1754.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1754.center = new X3D.SFVec3f([-0.1961,0.7846,-0.0218]);
HAnimJoint1754.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1754.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1755 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1755.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1755.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform1756 = browser.currentScene.createNode("Transform");
Transform1756.translation = new X3D.SFVec3f([-0.1961,0.7846,-0.0218]);
let Transform1757 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1758 = browser.currentScene.createNode("Shape");
Shape1758.USE = "HAnimJointShape";
Transform1757YYY.child = new X3D.undefined();

Transform1757ZZZ.child[0] = Shape1758;

Transform1756YYY.children = new X3D.MFNode();

Transform1756ZZZ.children[0] = Transform1757;

HAnimSegment1755YYY.children = new X3D.MFNode();

HAnimSegment1755ZZZ.children[0] = Transform1756;

let Shape1759 = browser.currentScene.createNode("Shape");
let LineSet1760 = browser.currentScene.createNode("LineSet");
LineSet1760.vertexCount = new X3D.MFInt32([2]);
let Coordinate1761 = browser.currentScene.createNode("Coordinate");
Coordinate1761.point = new X3D.MFVec3f([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
coord = Coordinate1761;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1762 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1762.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1762;

geometry = LineSet1760;

HAnimSegment1755ZZZ.children[1] = Shape1759;

HAnimJoint1754YYY.children = new X3D.MFNode();

HAnimJoint1754ZZZ.children[0] = HAnimSegment1755;

let HAnimJoint1763 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1763.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1763.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1763.center = new X3D.SFVec3f([-0.1954,0.7393,-0.0185]);
HAnimJoint1763.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1763.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.name = "r_carpal_middle_phalanx_2";
HAnimSegment1764.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform1765 = browser.currentScene.createNode("Transform");
Transform1765.translation = new X3D.SFVec3f([-0.1954,0.7393,-0.0185]);
let Transform1766 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1767 = browser.currentScene.createNode("Shape");
Shape1767.USE = "HAnimJointShape";
Transform1766YYY.child = new X3D.undefined();

Transform1766ZZZ.child[0] = Shape1767;

Transform1765YYY.children = new X3D.MFNode();

Transform1765ZZZ.children[0] = Transform1766;

HAnimSegment1764YYY.children = new X3D.MFNode();

HAnimSegment1764ZZZ.children[0] = Transform1765;

let Shape1768 = browser.currentScene.createNode("Shape");
let LineSet1769 = browser.currentScene.createNode("LineSet");
LineSet1769.vertexCount = new X3D.MFInt32([2]);
let Coordinate1770 = browser.currentScene.createNode("Coordinate");
Coordinate1770.point = new X3D.MFVec3f([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
coord = Coordinate1770;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1771 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1771.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1771;

geometry = LineSet1769;

HAnimSegment1764ZZZ.children[1] = Shape1768;

HAnimJoint1763YYY.children = new X3D.MFNode();

HAnimJoint1763ZZZ.children[0] = HAnimSegment1764;

let HAnimJoint1772 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1772.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1772.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1772.center = new X3D.SFVec3f([-0.1945,0.7169,-0.0173]);
HAnimJoint1772.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1772.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1763ZZZ.children[1] = HAnimJoint1772;

HAnimJoint1754ZZZ.children[1] = HAnimJoint1763;

HAnimJoint1738ZZZ.children[1] = HAnimJoint1754;

HAnimJoint1729ZZZ.children[1] = HAnimJoint1738;

HAnimJoint1673ZZZ.children[2] = HAnimJoint1729;

let HAnimJoint1773 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1773.name = "r_midcarpal_3";
HAnimJoint1773.DEF = "hanim_r_midcarpal_3";
HAnimJoint1773.center = new X3D.SFVec3f([-0.1809,0.7,-0.1067]);
HAnimJoint1773.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1773.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.name = "r_capitate";
HAnimSegment1774.DEF = "hanim_r_capitate";
let Transform1775 = browser.currentScene.createNode("Transform");
Transform1775.translation = new X3D.SFVec3f([-0.1809,0.7,-0.1067]);
let Transform1776 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1777 = browser.currentScene.createNode("Shape");
Shape1777.USE = "HAnimJointShape";
Transform1776YYY.child = new X3D.undefined();

Transform1776ZZZ.child[0] = Shape1777;

Transform1775YYY.children = new X3D.MFNode();

Transform1775ZZZ.children[0] = Transform1776;

HAnimSegment1774YYY.children = new X3D.MFNode();

HAnimSegment1774ZZZ.children[0] = Transform1775;

let Shape1778 = browser.currentScene.createNode("Shape");
let LineSet1779 = browser.currentScene.createNode("LineSet");
LineSet1779.vertexCount = new X3D.MFInt32([2]);
let Coordinate1780 = browser.currentScene.createNode("Coordinate");
Coordinate1780.point = new X3D.MFVec3f([-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468]);
coord = Coordinate1780;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
let ColorRGBA1781 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1781.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1781;

geometry = LineSet1779;

HAnimSegment1774ZZZ.children[1] = Shape1778;

HAnimJoint1773YYY.children = new X3D.MFNode();

HAnimJoint1773ZZZ.children[0] = HAnimSegment1774;

let HAnimJoint1782 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1782.name = "r_carpometacarpal_3";
HAnimJoint1782.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1782.center = new X3D.SFVec3f([-0.1972,0.806,-0.0468]);
HAnimJoint1782.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1782.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1783.name = "r_metacarpal_3";
HAnimSegment1783.DEF = "hanim_r_metacarpal_3";
let Transform1784 = browser.currentScene.createNode("Transform");
Transform1784.translation = new X3D.SFVec3f([-0.1972,0.806,-0.0468]);
let Transform1785 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1786 = browser.currentScene.createNode("Shape");
Shape1786.USE = "HAnimJointShape";
Transform1785YYY.child = new X3D.undefined();

Transform1785ZZZ.child[0] = Shape1786;

Transform1784YYY.children = new X3D.MFNode();

Transform1784ZZZ.children[0] = Transform1785;

HAnimSegment1783YYY.children = new X3D.MFNode();

HAnimSegment1783ZZZ.children[0] = Transform1784;

let Shape1787 = browser.currentScene.createNode("Shape");
let LineSet1788 = browser.currentScene.createNode("LineSet");
LineSet1788.vertexCount = new X3D.MFInt32([2]);
let Coordinate1789 = browser.currentScene.createNode("Coordinate");
Coordinate1789.point = new X3D.MFVec3f([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
coord = Coordinate1789;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA1790 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1790.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1790;

geometry = LineSet1788;

HAnimSegment1783ZZZ.children[1] = Shape1787;

let HAnimSite1791 = browser.currentScene.createNode("HAnimSite");
HAnimSite1791.name = "r_metacarpal_phalanx_3";
HAnimSite1791.DEF = "hanim_r_metacarpal_phalanx_3";
let TouchSensor1792 = browser.currentScene.createNode("TouchSensor");
TouchSensor1792.description = "HAnimSite 79 r_metacarpal_phalanx_3";
HAnimSite1791YYY.children = new X3D.MFNode();

HAnimSite1791ZZZ.children[0] = TouchSensor1792;

let Shape1793 = browser.currentScene.createNode("Shape");
Shape1793.USE = "HAnimSiteShape";
HAnimSite1791ZZZ.children[1] = Shape1793;

let Billboard1794 = browser.currentScene.createNode("Billboard");
let Shape1795 = browser.currentScene.createNode("Shape");
let Text1796 = browser.currentScene.createNode("Text");
Text1796.string = new X3D.MFString([new X3D.SFString("79")]);
let FontStyle1797 = browser.currentScene.createNode("FontStyle");
FontStyle1797.size = 0.035;
fontStyle = FontStyle1797;

geometry = Text1796;

Billboard1794YYY.children = new X3D.MFNode();

Billboard1794ZZZ.children[0] = Shape1795;

HAnimSite1791ZZZ.children[2] = Billboard1794;

HAnimSegment1783ZZZ.children[2] = HAnimSite1791;

HAnimJoint1782YYY.children = new X3D.MFNode();

HAnimJoint1782ZZZ.children[0] = HAnimSegment1783;

let HAnimJoint1798 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1798.name = "r_metacarpophalangeal_3";
HAnimJoint1798.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1798.center = new X3D.SFVec3f([-0.1972,0.7849,-0.0468]);
HAnimJoint1798.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1798.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1799.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform1800 = browser.currentScene.createNode("Transform");
Transform1800.translation = new X3D.SFVec3f([-0.1972,0.7849,-0.0468]);
let Transform1801 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1802 = browser.currentScene.createNode("Shape");
Shape1802.USE = "HAnimJointShape";
Transform1801YYY.child = new X3D.undefined();

Transform1801ZZZ.child[0] = Shape1802;

Transform1800YYY.children = new X3D.MFNode();

Transform1800ZZZ.children[0] = Transform1801;

HAnimSegment1799YYY.children = new X3D.MFNode();

HAnimSegment1799ZZZ.children[0] = Transform1800;

let Shape1803 = browser.currentScene.createNode("Shape");
let LineSet1804 = browser.currentScene.createNode("LineSet");
LineSet1804.vertexCount = new X3D.MFInt32([2]);
let Coordinate1805 = browser.currentScene.createNode("Coordinate");
Coordinate1805.point = new X3D.MFVec3f([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
coord = Coordinate1805;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1806 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1806.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1806;

geometry = LineSet1804;

HAnimSegment1799ZZZ.children[1] = Shape1803;

HAnimJoint1798YYY.children = new X3D.MFNode();

HAnimJoint1798ZZZ.children[0] = HAnimSegment1799;

let HAnimJoint1807 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1807.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1807.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1807.center = new X3D.SFVec3f([-0.195,0.7304,-0.0441]);
HAnimJoint1807.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1807.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.name = "r_carpal_middle_phalanx_3";
HAnimSegment1808.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform1809 = browser.currentScene.createNode("Transform");
Transform1809.translation = new X3D.SFVec3f([-0.195,0.7304,-0.0441]);
let Transform1810 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1811 = browser.currentScene.createNode("Shape");
Shape1811.USE = "HAnimJointShape";
Transform1810YYY.child = new X3D.undefined();

Transform1810ZZZ.child[0] = Shape1811;

Transform1809YYY.children = new X3D.MFNode();

Transform1809ZZZ.children[0] = Transform1810;

HAnimSegment1808YYY.children = new X3D.MFNode();

HAnimSegment1808ZZZ.children[0] = Transform1809;

let Shape1812 = browser.currentScene.createNode("Shape");
let LineSet1813 = browser.currentScene.createNode("LineSet");
LineSet1813.vertexCount = new X3D.MFInt32([2]);
let Coordinate1814 = browser.currentScene.createNode("Coordinate");
Coordinate1814.point = new X3D.MFVec3f([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
coord = Coordinate1814;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1815 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1815.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1815;

geometry = LineSet1813;

HAnimSegment1808ZZZ.children[1] = Shape1812;

HAnimJoint1807YYY.children = new X3D.MFNode();

HAnimJoint1807ZZZ.children[0] = HAnimSegment1808;

let HAnimJoint1816 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1816.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1816.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1816.center = new X3D.SFVec3f([-0.1939,0.7042,-0.0432]);
HAnimJoint1816.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1816.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1807ZZZ.children[1] = HAnimJoint1816;

HAnimJoint1798ZZZ.children[1] = HAnimJoint1807;

HAnimJoint1782ZZZ.children[1] = HAnimJoint1798;

HAnimJoint1773ZZZ.children[1] = HAnimJoint1782;

HAnimJoint1673ZZZ.children[3] = HAnimJoint1773;

let HAnimJoint1817 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1817.name = "r_midcarpal_4_5";
HAnimJoint1817.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1817.center = new X3D.SFVec3f([-0.1809,0.6973,-0.1276]);
HAnimJoint1817.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1817.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.name = "r_hamate";
HAnimSegment1818.DEF = "hanim_r_hamate";
let Transform1819 = browser.currentScene.createNode("Transform");
Transform1819.translation = new X3D.SFVec3f([-0.1809,0.6973,-0.1276]);
let Transform1820 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1821 = browser.currentScene.createNode("Shape");
Shape1821.USE = "HAnimJointShape";
Transform1820YYY.child = new X3D.undefined();

Transform1820ZZZ.child[0] = Shape1821;

Transform1819YYY.children = new X3D.MFNode();

Transform1819ZZZ.children[0] = Transform1820;

HAnimSegment1818YYY.children = new X3D.MFNode();

HAnimSegment1818ZZZ.children[0] = Transform1819;

let Shape1822 = browser.currentScene.createNode("Shape");
let LineSet1823 = browser.currentScene.createNode("LineSet");
LineSet1823.vertexCount = new X3D.MFInt32([2]);
let Coordinate1824 = browser.currentScene.createNode("Coordinate");
Coordinate1824.point = new X3D.MFVec3f([-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732]);
coord = Coordinate1824;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
let ColorRGBA1825 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1825.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1825;

geometry = LineSet1823;

HAnimSegment1818ZZZ.children[1] = Shape1822;

let Shape1826 = browser.currentScene.createNode("Shape");
let LineSet1827 = browser.currentScene.createNode("LineSet");
LineSet1827.vertexCount = new X3D.MFInt32([2]);
let Coordinate1828 = browser.currentScene.createNode("Coordinate");
Coordinate1828.point = new X3D.MFVec3f([-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975]);
coord = Coordinate1828;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
let ColorRGBA1829 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1829.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1829;

geometry = LineSet1827;

HAnimSegment1818ZZZ.children[2] = Shape1826;

HAnimJoint1817YYY.children = new X3D.MFNode();

HAnimJoint1817ZZZ.children[0] = HAnimSegment1818;

let HAnimJoint1830 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1830.name = "r_carpometacarpal_4";
HAnimJoint1830.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1830.center = new X3D.SFVec3f([-0.1951,0.8049,-0.0732]);
HAnimJoint1830.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1830.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.name = "r_metacarpal_4";
HAnimSegment1831.DEF = "hanim_r_metacarpal_4";
let Transform1832 = browser.currentScene.createNode("Transform");
Transform1832.translation = new X3D.SFVec3f([-0.1951,0.8049,-0.0732]);
let Transform1833 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1834 = browser.currentScene.createNode("Shape");
Shape1834.USE = "HAnimJointShape";
Transform1833YYY.child = new X3D.undefined();

Transform1833ZZZ.child[0] = Shape1834;

Transform1832YYY.children = new X3D.MFNode();

Transform1832ZZZ.children[0] = Transform1833;

HAnimSegment1831YYY.children = new X3D.MFNode();

HAnimSegment1831ZZZ.children[0] = Transform1832;

let Shape1835 = browser.currentScene.createNode("Shape");
let LineSet1836 = browser.currentScene.createNode("LineSet");
LineSet1836.vertexCount = new X3D.MFInt32([2]);
let Coordinate1837 = browser.currentScene.createNode("Coordinate");
Coordinate1837.point = new X3D.MFVec3f([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
coord = Coordinate1837;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA1838 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1838.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1838;

geometry = LineSet1836;

HAnimSegment1831ZZZ.children[1] = Shape1835;

HAnimJoint1830YYY.children = new X3D.MFNode();

HAnimJoint1830ZZZ.children[0] = HAnimSegment1831;

let HAnimJoint1839 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1839.name = "r_metacarpophalangeal_4";
HAnimJoint1839.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1839.center = new X3D.SFVec3f([-0.1951,0.7845,-0.0732]);
HAnimJoint1839.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1839.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1840.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1840.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform1841 = browser.currentScene.createNode("Transform");
Transform1841.translation = new X3D.SFVec3f([-0.1951,0.7845,-0.0732]);
let Transform1842 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1843 = browser.currentScene.createNode("Shape");
Shape1843.USE = "HAnimJointShape";
Transform1842YYY.child = new X3D.undefined();

Transform1842ZZZ.child[0] = Shape1843;

Transform1841YYY.children = new X3D.MFNode();

Transform1841ZZZ.children[0] = Transform1842;

HAnimSegment1840YYY.children = new X3D.MFNode();

HAnimSegment1840ZZZ.children[0] = Transform1841;

let Shape1844 = browser.currentScene.createNode("Shape");
let LineSet1845 = browser.currentScene.createNode("LineSet");
LineSet1845.vertexCount = new X3D.MFInt32([2]);
let Coordinate1846 = browser.currentScene.createNode("Coordinate");
Coordinate1846.point = new X3D.MFVec3f([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
coord = Coordinate1846;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1847 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1847.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1847;

geometry = LineSet1845;

HAnimSegment1840ZZZ.children[1] = Shape1844;

HAnimJoint1839YYY.children = new X3D.MFNode();

HAnimJoint1839ZZZ.children[0] = HAnimSegment1840;

let HAnimJoint1848 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1848.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1848.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1848.center = new X3D.SFVec3f([-0.192,0.7318,-0.0716]);
HAnimJoint1848.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1848.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1849.name = "r_carpal_middle_phalanx_4";
HAnimSegment1849.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform1850 = browser.currentScene.createNode("Transform");
Transform1850.translation = new X3D.SFVec3f([-0.192,0.7318,-0.0716]);
let Transform1851 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1852 = browser.currentScene.createNode("Shape");
Shape1852.USE = "HAnimJointShape";
Transform1851YYY.child = new X3D.undefined();

Transform1851ZZZ.child[0] = Shape1852;

Transform1850YYY.children = new X3D.MFNode();

Transform1850ZZZ.children[0] = Transform1851;

HAnimSegment1849YYY.children = new X3D.MFNode();

HAnimSegment1849ZZZ.children[0] = Transform1850;

let Shape1853 = browser.currentScene.createNode("Shape");
let LineSet1854 = browser.currentScene.createNode("LineSet");
LineSet1854.vertexCount = new X3D.MFInt32([2]);
let Coordinate1855 = browser.currentScene.createNode("Coordinate");
Coordinate1855.point = new X3D.MFVec3f([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
coord = Coordinate1855;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1856 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1856.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1856;

geometry = LineSet1854;

HAnimSegment1849ZZZ.children[1] = Shape1853;

HAnimJoint1848YYY.children = new X3D.MFNode();

HAnimJoint1848ZZZ.children[0] = HAnimSegment1849;

let HAnimJoint1857 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1857.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1857.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1857.center = new X3D.SFVec3f([-0.1908,0.7077,-0.0706]);
HAnimJoint1857.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1857.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1848ZZZ.children[1] = HAnimJoint1857;

HAnimJoint1839ZZZ.children[1] = HAnimJoint1848;

HAnimJoint1830ZZZ.children[1] = HAnimJoint1839;

HAnimJoint1817ZZZ.children[1] = HAnimJoint1830;

let HAnimJoint1858 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1858.name = "r_carpometacarpal_5";
HAnimJoint1858.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1858.center = new X3D.SFVec3f([-0.1926,0.8096,-0.0975]);
HAnimJoint1858.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1858.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1859 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1859.name = "r_metacarpal_5";
HAnimSegment1859.DEF = "hanim_r_metacarpal_5";
let Transform1860 = browser.currentScene.createNode("Transform");
Transform1860.translation = new X3D.SFVec3f([-0.1926,0.8096,-0.0975]);
let Transform1861 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1862 = browser.currentScene.createNode("Shape");
Shape1862.USE = "HAnimJointShape";
Transform1861YYY.child = new X3D.undefined();

Transform1861ZZZ.child[0] = Shape1862;

Transform1860YYY.children = new X3D.MFNode();

Transform1860ZZZ.children[0] = Transform1861;

HAnimSegment1859YYY.children = new X3D.MFNode();

HAnimSegment1859ZZZ.children[0] = Transform1860;

let Shape1863 = browser.currentScene.createNode("Shape");
let LineSet1864 = browser.currentScene.createNode("LineSet");
LineSet1864.vertexCount = new X3D.MFInt32([2]);
let Coordinate1865 = browser.currentScene.createNode("Coordinate");
Coordinate1865.point = new X3D.MFVec3f([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
coord = Coordinate1865;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA1866 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1866.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1866;

geometry = LineSet1864;

HAnimSegment1859ZZZ.children[1] = Shape1863;

let HAnimSite1867 = browser.currentScene.createNode("HAnimSite");
HAnimSite1867.name = "r_metacarpal_phalanx_5";
HAnimSite1867.DEF = "hanim_r_metacarpal_phalanx_5";
HAnimSite1867.translation = new X3D.SFVec3f([-0.1929,0.789,-0.1064]);
let TouchSensor1868 = browser.currentScene.createNode("TouchSensor");
TouchSensor1868.description = "HAnimSite 80 r_metacarpal_phalanx_5";
HAnimSite1867YYY.children = new X3D.MFNode();

HAnimSite1867ZZZ.children[0] = TouchSensor1868;

let Shape1869 = browser.currentScene.createNode("Shape");
Shape1869.USE = "HAnimSiteShape";
HAnimSite1867ZZZ.children[1] = Shape1869;

let Billboard1870 = browser.currentScene.createNode("Billboard");
let Shape1871 = browser.currentScene.createNode("Shape");
let Text1872 = browser.currentScene.createNode("Text");
Text1872.string = new X3D.MFString([new X3D.SFString("80")]);
let FontStyle1873 = browser.currentScene.createNode("FontStyle");
FontStyle1873.size = 0.035;
fontStyle = FontStyle1873;

geometry = Text1872;

Billboard1870YYY.children = new X3D.MFNode();

Billboard1870ZZZ.children[0] = Shape1871;

HAnimSite1867ZZZ.children[2] = Billboard1870;

HAnimSegment1859ZZZ.children[2] = HAnimSite1867;

HAnimJoint1858YYY.children = new X3D.MFNode();

HAnimJoint1858ZZZ.children[0] = HAnimSegment1859;

let HAnimJoint1874 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1874.name = "r_metacarpophalangeal_5";
HAnimJoint1874.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1874.center = new X3D.SFVec3f([-0.1926,0.7896,-0.0975]);
HAnimJoint1874.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1874.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1875 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1875.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1875.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform1876 = browser.currentScene.createNode("Transform");
Transform1876.translation = new X3D.SFVec3f([-0.1926,0.7896,-0.0975]);
let Transform1877 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1878 = browser.currentScene.createNode("Shape");
Shape1878.USE = "HAnimJointShape";
Transform1877YYY.child = new X3D.undefined();

Transform1877ZZZ.child[0] = Shape1878;

Transform1876YYY.children = new X3D.MFNode();

Transform1876ZZZ.children[0] = Transform1877;

HAnimSegment1875YYY.children = new X3D.MFNode();

HAnimSegment1875ZZZ.children[0] = Transform1876;

let Shape1879 = browser.currentScene.createNode("Shape");
let LineSet1880 = browser.currentScene.createNode("LineSet");
LineSet1880.vertexCount = new X3D.MFInt32([2]);
let Coordinate1881 = browser.currentScene.createNode("Coordinate");
Coordinate1881.point = new X3D.MFVec3f([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
coord = Coordinate1881;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1882 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1882.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1882;

geometry = LineSet1880;

HAnimSegment1875ZZZ.children[1] = Shape1879;

HAnimJoint1874YYY.children = new X3D.MFNode();

HAnimJoint1874ZZZ.children[0] = HAnimSegment1875;

let HAnimJoint1883 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1883.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1883.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1883.center = new X3D.SFVec3f([-0.1902,0.7483,-0.0963]);
HAnimJoint1883.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1883.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1884 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1884.name = "r_carpal_middle_phalanx_5";
HAnimSegment1884.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform1885 = browser.currentScene.createNode("Transform");
Transform1885.translation = new X3D.SFVec3f([-0.1902,0.7483,-0.0963]);
let Transform1886 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1887 = browser.currentScene.createNode("Shape");
Shape1887.USE = "HAnimJointShape";
Transform1886YYY.child = new X3D.undefined();

Transform1886ZZZ.child[0] = Shape1887;

Transform1885YYY.children = new X3D.MFNode();

Transform1885ZZZ.children[0] = Transform1886;

HAnimSegment1884YYY.children = new X3D.MFNode();

HAnimSegment1884ZZZ.children[0] = Transform1885;

let Shape1888 = browser.currentScene.createNode("Shape");
let LineSet1889 = browser.currentScene.createNode("LineSet");
LineSet1889.vertexCount = new X3D.MFInt32([2]);
let Coordinate1890 = browser.currentScene.createNode("Coordinate");
Coordinate1890.point = new X3D.MFVec3f([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
coord = Coordinate1890;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1891 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1891.USE = "HAnimSegmentLineColorRGBA";
color = ColorRGBA1891;

geometry = LineSet1889;

HAnimSegment1884ZZZ.children[1] = Shape1888;

HAnimJoint1883YYY.children = new X3D.MFNode();

HAnimJoint1883ZZZ.children[0] = HAnimSegment1884;

let HAnimJoint1892 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1892.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1892.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1892.center = new X3D.SFVec3f([-0.1908,0.754,-0.096]);
HAnimJoint1892.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1892.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1883ZZZ.children[1] = HAnimJoint1892;

HAnimJoint1874ZZZ.children[1] = HAnimJoint1883;

HAnimJoint1858ZZZ.children[1] = HAnimJoint1874;

HAnimJoint1817ZZZ.children[2] = HAnimJoint1858;

HAnimJoint1673ZZZ.children[4] = HAnimJoint1817;

HAnimJoint1636ZZZ.children[1] = HAnimJoint1673;

HAnimJoint1613ZZZ.children[1] = HAnimJoint1636;

HAnimJoint1604ZZZ.children[1] = HAnimJoint1613;

HAnimJoint1560ZZZ.children[1] = HAnimJoint1604;

HAnimJoint995ZZZ.children[3] = HAnimJoint1560;

HAnimJoint986ZZZ.children[1] = HAnimJoint995;

HAnimJoint977ZZZ.children[1] = HAnimJoint986;

HAnimJoint968ZZZ.children[1] = HAnimJoint977;

HAnimJoint952ZZZ.children[1] = HAnimJoint968;

HAnimJoint915ZZZ.children[1] = HAnimJoint952;

HAnimJoint906ZZZ.children[1] = HAnimJoint915;

HAnimJoint897ZZZ.children[1] = HAnimJoint906;

HAnimJoint874ZZZ.children[1] = HAnimJoint897;

HAnimJoint858ZZZ.children[1] = HAnimJoint874;

HAnimJoint849ZZZ.children[1] = HAnimJoint858;

HAnimJoint840ZZZ.children[1] = HAnimJoint849;

HAnimJoint831ZZZ.children[1] = HAnimJoint840;

HAnimJoint801ZZZ.children[1] = HAnimJoint831;

HAnimJoint792ZZZ.children[1] = HAnimJoint801;

HAnimJoint783ZZZ.children[1] = HAnimJoint792;

HAnimJoint753ZZZ.children[1] = HAnimJoint783;

HAnimJoint47ZZZ.children[2] = HAnimJoint753;

joints[1] = HAnimJoint47;

let HAnimJoint1893 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1893.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint1893;

let HAnimJoint1894 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1894.USE = "hanim_sacroiliac";
joints[3] = HAnimJoint1894;

let HAnimJoint1895 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1895.USE = "hanim_l_hip";
joints[4] = HAnimJoint1895;

let HAnimJoint1896 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1896.USE = "hanim_l_knee";
joints[5] = HAnimJoint1896;

let HAnimJoint1897 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1897.USE = "hanim_l_talocrural";
joints[6] = HAnimJoint1897;

let HAnimJoint1898 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1898.USE = "hanim_l_talocalcaneonavicular";
joints[7] = HAnimJoint1898;

let HAnimJoint1899 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1899.USE = "hanim_l_cuneonavicular_1";
joints[8] = HAnimJoint1899;

let HAnimJoint1900 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1900.USE = "hanim_l_tarsometatarsal_1";
joints[9] = HAnimJoint1900;

let HAnimJoint1901 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1901.USE = "hanim_l_metatarsophalangeal_1";
joints[10] = HAnimJoint1901;

let HAnimJoint1902 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1902.USE = "hanim_l_tarsal_interphalangeal_1";
joints[11] = HAnimJoint1902;

let HAnimJoint1903 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1903.USE = "hanim_l_cuneonavicular_2";
joints[12] = HAnimJoint1903;

let HAnimJoint1904 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1904.USE = "hanim_l_tarsometatarsal_2";
joints[13] = HAnimJoint1904;

let HAnimJoint1905 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1905.USE = "hanim_l_metatarsophalangeal_2";
joints[14] = HAnimJoint1905;

let HAnimJoint1906 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1906.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
joints[15] = HAnimJoint1906;

let HAnimJoint1907 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1907.USE = "hanim_l_tarsal_distal_interphalangeal_2";
joints[16] = HAnimJoint1907;

let HAnimJoint1908 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1908.USE = "hanim_l_cuneonavicular_3";
joints[17] = HAnimJoint1908;

let HAnimJoint1909 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1909.USE = "hanim_l_tarsometatarsal_3";
joints[18] = HAnimJoint1909;

let HAnimJoint1910 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1910.USE = "hanim_l_metatarsophalangeal_3";
joints[19] = HAnimJoint1910;

let HAnimJoint1911 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1911.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
joints[20] = HAnimJoint1911;

let HAnimJoint1912 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1912.USE = "hanim_l_tarsal_distal_interphalangeal_3";
joints[21] = HAnimJoint1912;

let HAnimJoint1913 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1913.USE = "hanim_l_calcaneocuboid";
joints[22] = HAnimJoint1913;

let HAnimJoint1914 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1914.USE = "hanim_l_transversetarsal";
joints[23] = HAnimJoint1914;

let HAnimJoint1915 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1915.USE = "hanim_l_tarsometatarsal_4";
joints[24] = HAnimJoint1915;

let HAnimJoint1916 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1916.USE = "hanim_l_metatarsophalangeal_4";
joints[25] = HAnimJoint1916;

let HAnimJoint1917 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1917.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
joints[26] = HAnimJoint1917;

let HAnimJoint1918 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1918.USE = "hanim_l_tarsal_distal_interphalangeal_4";
joints[27] = HAnimJoint1918;

let HAnimJoint1919 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1919.USE = "hanim_l_tarsometatarsal_5";
joints[28] = HAnimJoint1919;

let HAnimJoint1920 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1920.USE = "hanim_l_metatarsophalangeal_5";
joints[29] = HAnimJoint1920;

let HAnimJoint1921 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1921.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
joints[30] = HAnimJoint1921;

let HAnimJoint1922 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1922.USE = "hanim_l_tarsal_distal_interphalangeal_5";
joints[31] = HAnimJoint1922;

let HAnimJoint1923 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1923.USE = "hanim_r_hip";
joints[32] = HAnimJoint1923;

let HAnimJoint1924 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1924.USE = "hanim_r_knee";
joints[33] = HAnimJoint1924;

let HAnimJoint1925 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1925.USE = "hanim_r_talocrural";
joints[34] = HAnimJoint1925;

let HAnimJoint1926 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1926.USE = "hanim_r_talocalcaneonavicular";
joints[35] = HAnimJoint1926;

let HAnimJoint1927 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1927.USE = "hanim_r_cuneonavicular_1";
joints[36] = HAnimJoint1927;

let HAnimJoint1928 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1928.USE = "hanim_r_tarsometatarsal_1";
joints[37] = HAnimJoint1928;

let HAnimJoint1929 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1929.USE = "hanim_r_metatarsophalangeal_1";
joints[38] = HAnimJoint1929;

let HAnimJoint1930 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1930.USE = "hanim_r_tarsal_interphalangeal_1";
joints[39] = HAnimJoint1930;

let HAnimJoint1931 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1931.USE = "hanim_r_cuneonavicular_2";
joints[40] = HAnimJoint1931;

let HAnimJoint1932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1932.USE = "hanim_r_tarsometatarsal_2";
joints[41] = HAnimJoint1932;

let HAnimJoint1933 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1933.USE = "hanim_r_metatarsophalangeal_2";
joints[42] = HAnimJoint1933;

let HAnimJoint1934 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1934.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
joints[43] = HAnimJoint1934;

let HAnimJoint1935 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1935.USE = "hanim_r_tarsal_distal_interphalangeal_2";
joints[44] = HAnimJoint1935;

let HAnimJoint1936 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1936.USE = "hanim_r_cuneonavicular_3";
joints[45] = HAnimJoint1936;

let HAnimJoint1937 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1937.USE = "hanim_r_tarsometatarsal_3";
joints[46] = HAnimJoint1937;

let HAnimJoint1938 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1938.USE = "hanim_r_metatarsophalangeal_3";
joints[47] = HAnimJoint1938;

let HAnimJoint1939 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1939.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
joints[48] = HAnimJoint1939;

let HAnimJoint1940 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1940.USE = "hanim_r_tarsal_distal_interphalangeal_3";
joints[49] = HAnimJoint1940;

let HAnimJoint1941 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1941.USE = "hanim_r_calcaneocuboid";
joints[50] = HAnimJoint1941;

let HAnimJoint1942 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1942.USE = "hanim_r_transversetarsal";
joints[51] = HAnimJoint1942;

let HAnimJoint1943 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1943.USE = "hanim_r_tarsometatarsal_4";
joints[52] = HAnimJoint1943;

let HAnimJoint1944 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1944.USE = "hanim_r_metatarsophalangeal_4";
joints[53] = HAnimJoint1944;

let HAnimJoint1945 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1945.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
joints[54] = HAnimJoint1945;

let HAnimJoint1946 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1946.USE = "hanim_r_tarsal_distal_interphalangeal_4";
joints[55] = HAnimJoint1946;

let HAnimJoint1947 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1947.USE = "hanim_r_tarsometatarsal_5";
joints[56] = HAnimJoint1947;

let HAnimJoint1948 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1948.USE = "hanim_r_metatarsophalangeal_5";
joints[57] = HAnimJoint1948;

let HAnimJoint1949 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1949.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
joints[58] = HAnimJoint1949;

let HAnimJoint1950 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1950.USE = "hanim_r_tarsal_distal_interphalangeal_5";
joints[59] = HAnimJoint1950;

let HAnimJoint1951 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1951.USE = "hanim_vl5";
joints[60] = HAnimJoint1951;

let HAnimJoint1952 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1952.USE = "hanim_vl4";
joints[61] = HAnimJoint1952;

let HAnimJoint1953 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1953.USE = "hanim_vl3";
joints[62] = HAnimJoint1953;

let HAnimJoint1954 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1954.USE = "hanim_vl2";
joints[63] = HAnimJoint1954;

let HAnimJoint1955 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1955.USE = "hanim_vl1";
joints[64] = HAnimJoint1955;

let HAnimJoint1956 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1956.USE = "hanim_vt12";
joints[65] = HAnimJoint1956;

let HAnimJoint1957 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1957.USE = "hanim_vt11";
joints[66] = HAnimJoint1957;

let HAnimJoint1958 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1958.USE = "hanim_vt10";
joints[67] = HAnimJoint1958;

let HAnimJoint1959 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1959.USE = "hanim_vt9";
joints[68] = HAnimJoint1959;

let HAnimJoint1960 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1960.USE = "hanim_vt8";
joints[69] = HAnimJoint1960;

let HAnimJoint1961 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1961.USE = "hanim_vt7";
joints[70] = HAnimJoint1961;

let HAnimJoint1962 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1962.USE = "hanim_vt6";
joints[71] = HAnimJoint1962;

let HAnimJoint1963 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1963.USE = "hanim_vt5";
joints[72] = HAnimJoint1963;

let HAnimJoint1964 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1964.USE = "hanim_vt4";
joints[73] = HAnimJoint1964;

let HAnimJoint1965 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1965.USE = "hanim_vt3";
joints[74] = HAnimJoint1965;

let HAnimJoint1966 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1966.USE = "hanim_vt2";
joints[75] = HAnimJoint1966;

let HAnimJoint1967 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1967.USE = "hanim_vt1";
joints[76] = HAnimJoint1967;

let HAnimJoint1968 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1968.USE = "hanim_vc7";
joints[77] = HAnimJoint1968;

let HAnimJoint1969 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1969.USE = "hanim_vc6";
joints[78] = HAnimJoint1969;

let HAnimJoint1970 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1970.USE = "hanim_vc5";
joints[79] = HAnimJoint1970;

let HAnimJoint1971 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1971.USE = "hanim_vc4";
joints[80] = HAnimJoint1971;

let HAnimJoint1972 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1972.USE = "hanim_vc3";
joints[81] = HAnimJoint1972;

let HAnimJoint1973 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1973.USE = "hanim_vc2";
joints[82] = HAnimJoint1973;

let HAnimJoint1974 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1974.USE = "hanim_vc1";
joints[83] = HAnimJoint1974;

let HAnimJoint1975 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1975.USE = "hanim_skullbase";
joints[84] = HAnimJoint1975;

let HAnimJoint1976 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1976.USE = "hanim_l_eyelid_joint";
joints[85] = HAnimJoint1976;

let HAnimJoint1977 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1977.USE = "hanim_r_eyelid_joint";
joints[86] = HAnimJoint1977;

let HAnimJoint1978 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1978.USE = "hanim_l_eyeball_joint";
joints[87] = HAnimJoint1978;

let HAnimJoint1979 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1979.USE = "hanim_r_eyeball_joint";
joints[88] = HAnimJoint1979;

let HAnimJoint1980 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1980.USE = "hanim_l_eyebrow_joint";
joints[89] = HAnimJoint1980;

let HAnimJoint1981 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1981.USE = "hanim_r_eyebrow_joint";
joints[90] = HAnimJoint1981;

let HAnimJoint1982 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1982.USE = "hanim_temporomandibular";
joints[91] = HAnimJoint1982;

let HAnimJoint1983 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1983.USE = "hanim_l_sternoclavicular";
joints[92] = HAnimJoint1983;

let HAnimJoint1984 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1984.USE = "hanim_l_acromioclavicular";
joints[93] = HAnimJoint1984;

let HAnimJoint1985 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1985.USE = "hanim_l_shoulder";
joints[94] = HAnimJoint1985;

let HAnimJoint1986 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1986.USE = "hanim_l_elbow";
joints[95] = HAnimJoint1986;

let HAnimJoint1987 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1987.USE = "hanim_l_radiocarpal";
joints[96] = HAnimJoint1987;

let HAnimJoint1988 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1988.USE = "hanim_l_midcarpal_1";
joints[97] = HAnimJoint1988;

let HAnimJoint1989 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1989.USE = "hanim_l_carpometacarpal_1";
joints[98] = HAnimJoint1989;

let HAnimJoint1990 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1990.USE = "hanim_l_metacarpophalangeal_1";
joints[99] = HAnimJoint1990;

let HAnimJoint1991 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1991.USE = "hanim_l_carpal_interphalangeal_1";
joints[100] = HAnimJoint1991;

let HAnimJoint1992 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1992.USE = "hanim_l_midcarpal_2";
joints[101] = HAnimJoint1992;

let HAnimJoint1993 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1993.USE = "hanim_l_carpometacarpal_2";
joints[102] = HAnimJoint1993;

let HAnimJoint1994 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1994.USE = "hanim_l_metacarpophalangeal_2";
joints[103] = HAnimJoint1994;

let HAnimJoint1995 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1995.USE = "hanim_l_carpal_proximal_interphalangeal_2";
joints[104] = HAnimJoint1995;

let HAnimJoint1996 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1996.USE = "hanim_l_carpal_distal_interphalangeal_2";
joints[105] = HAnimJoint1996;

let HAnimJoint1997 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1997.USE = "hanim_l_midcarpal_3";
joints[106] = HAnimJoint1997;

let HAnimJoint1998 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1998.USE = "hanim_l_carpometacarpal_3";
joints[107] = HAnimJoint1998;

let HAnimJoint1999 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1999.USE = "hanim_l_metacarpophalangeal_3";
joints[108] = HAnimJoint1999;

let HAnimJoint2000 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2000.USE = "hanim_l_carpal_proximal_interphalangeal_3";
joints[109] = HAnimJoint2000;

let HAnimJoint2001 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2001.USE = "hanim_l_carpal_distal_interphalangeal_3";
joints[110] = HAnimJoint2001;

let HAnimJoint2002 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2002.USE = "hanim_l_midcarpal_4_5";
joints[111] = HAnimJoint2002;

let HAnimJoint2003 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2003.USE = "hanim_l_carpometacarpal_4";
joints[112] = HAnimJoint2003;

let HAnimJoint2004 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2004.USE = "hanim_l_metacarpophalangeal_4";
joints[113] = HAnimJoint2004;

let HAnimJoint2005 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2005.USE = "hanim_l_carpal_proximal_interphalangeal_4";
joints[114] = HAnimJoint2005;

let HAnimJoint2006 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2006.USE = "hanim_l_carpal_distal_interphalangeal_4";
joints[115] = HAnimJoint2006;

let HAnimJoint2007 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2007.USE = "hanim_l_carpometacarpal_5";
joints[116] = HAnimJoint2007;

let HAnimJoint2008 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2008.USE = "hanim_l_metacarpophalangeal_5";
joints[117] = HAnimJoint2008;

let HAnimJoint2009 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2009.USE = "hanim_l_carpal_proximal_interphalangeal_5";
joints[118] = HAnimJoint2009;

let HAnimJoint2010 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2010.USE = "hanim_l_carpal_distal_interphalangeal_5";
joints[119] = HAnimJoint2010;

let HAnimJoint2011 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2011.USE = "hanim_r_sternoclavicular";
joints[120] = HAnimJoint2011;

let HAnimJoint2012 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2012.USE = "hanim_r_acromioclavicular";
joints[121] = HAnimJoint2012;

let HAnimJoint2013 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2013.USE = "hanim_r_shoulder";
joints[122] = HAnimJoint2013;

let HAnimJoint2014 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2014.USE = "hanim_r_elbow";
joints[123] = HAnimJoint2014;

let HAnimJoint2015 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2015.USE = "hanim_r_radiocarpal";
joints[124] = HAnimJoint2015;

let HAnimJoint2016 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2016.USE = "hanim_r_midcarpal_1";
joints[125] = HAnimJoint2016;

let HAnimJoint2017 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2017.USE = "hanim_r_carpometacarpal_1";
joints[126] = HAnimJoint2017;

let HAnimJoint2018 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2018.USE = "hanim_r_metacarpophalangeal_1";
joints[127] = HAnimJoint2018;

let HAnimJoint2019 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2019.USE = "hanim_r_carpal_interphalangeal_1";
joints[128] = HAnimJoint2019;

let HAnimJoint2020 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2020.USE = "hanim_r_midcarpal_2";
joints[129] = HAnimJoint2020;

let HAnimJoint2021 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2021.USE = "hanim_r_carpometacarpal_2";
joints[130] = HAnimJoint2021;

let HAnimJoint2022 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2022.USE = "hanim_r_metacarpophalangeal_2";
joints[131] = HAnimJoint2022;

let HAnimJoint2023 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2023.USE = "hanim_r_carpal_proximal_interphalangeal_2";
joints[132] = HAnimJoint2023;

let HAnimJoint2024 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2024.USE = "hanim_r_carpal_distal_interphalangeal_2";
joints[133] = HAnimJoint2024;

let HAnimJoint2025 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2025.USE = "hanim_r_midcarpal_3";
joints[134] = HAnimJoint2025;

let HAnimJoint2026 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2026.USE = "hanim_r_carpometacarpal_3";
joints[135] = HAnimJoint2026;

let HAnimJoint2027 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2027.USE = "hanim_r_metacarpophalangeal_3";
joints[136] = HAnimJoint2027;

let HAnimJoint2028 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2028.USE = "hanim_r_carpal_proximal_interphalangeal_3";
joints[137] = HAnimJoint2028;

let HAnimJoint2029 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2029.USE = "hanim_r_carpal_distal_interphalangeal_3";
joints[138] = HAnimJoint2029;

let HAnimJoint2030 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2030.USE = "hanim_r_midcarpal_4_5";
joints[139] = HAnimJoint2030;

let HAnimJoint2031 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2031.USE = "hanim_r_carpometacarpal_4";
joints[140] = HAnimJoint2031;

let HAnimJoint2032 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2032.USE = "hanim_r_metacarpophalangeal_4";
joints[141] = HAnimJoint2032;

let HAnimJoint2033 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2033.USE = "hanim_r_carpal_proximal_interphalangeal_4";
joints[142] = HAnimJoint2033;

let HAnimJoint2034 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2034.USE = "hanim_r_carpal_distal_interphalangeal_4";
joints[143] = HAnimJoint2034;

let HAnimJoint2035 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2035.USE = "hanim_r_carpometacarpal_5";
joints[144] = HAnimJoint2035;

let HAnimJoint2036 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2036.USE = "hanim_r_metacarpophalangeal_5";
joints[145] = HAnimJoint2036;

let HAnimJoint2037 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2037.USE = "hanim_r_carpal_proximal_interphalangeal_5";
joints[146] = HAnimJoint2037;

let HAnimJoint2038 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2038.USE = "hanim_r_carpal_distal_interphalangeal_5";
joints[147] = HAnimJoint2038;

let HAnimSegment2039 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2039.USE = "hanim_sacrum";
segments[148] = HAnimSegment2039;

let HAnimSegment2040 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2040.USE = "hanim_pelvis";
segments[149] = HAnimSegment2040;

let HAnimSegment2041 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2041.USE = "hanim_l_thigh";
segments[150] = HAnimSegment2041;

let HAnimSegment2042 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2042.USE = "hanim_l_calf";
segments[151] = HAnimSegment2042;

let HAnimSegment2043 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2043.USE = "hanim_l_talus";
segments[152] = HAnimSegment2043;

let HAnimSegment2044 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2044.USE = "hanim_l_navicular";
segments[153] = HAnimSegment2044;

let HAnimSegment2045 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2045.USE = "hanim_l_cuneiform_1";
segments[154] = HAnimSegment2045;

let HAnimSegment2046 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2046.USE = "hanim_l_metatarsal_1";
segments[155] = HAnimSegment2046;

let HAnimSegment2047 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2047.USE = "hanim_l_tarsal_proximal_phalanx_1";
segments[156] = HAnimSegment2047;

let HAnimSegment2048 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2048.USE = "hanim_l_cuneiform_2";
segments[157] = HAnimSegment2048;

let HAnimSegment2049 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2049.USE = "hanim_l_metatarsal_2";
segments[158] = HAnimSegment2049;

let HAnimSegment2050 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2050.USE = "hanim_l_tarsal_proximal_phalanx_2";
segments[159] = HAnimSegment2050;

let HAnimSegment2051 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2051.USE = "hanim_l_tarsal_middle_phalanx_2";
segments[160] = HAnimSegment2051;

let HAnimSegment2052 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2052.USE = "hanim_l_cuneiform_3";
segments[161] = HAnimSegment2052;

let HAnimSegment2053 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2053.USE = "hanim_l_metatarsal_3";
segments[162] = HAnimSegment2053;

let HAnimSegment2054 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2054.USE = "hanim_l_tarsal_proximal_phalanx_3";
segments[163] = HAnimSegment2054;

let HAnimSegment2055 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2055.USE = "hanim_l_tarsal_middle_phalanx_3";
segments[164] = HAnimSegment2055;

let HAnimSegment2056 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2056.USE = "hanim_l_calcaneus";
segments[165] = HAnimSegment2056;

let HAnimSegment2057 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2057.USE = "hanim_l_cuboid";
segments[166] = HAnimSegment2057;

let HAnimSegment2058 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2058.USE = "hanim_l_metatarsal_4";
segments[167] = HAnimSegment2058;

let HAnimSegment2059 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2059.USE = "hanim_l_tarsal_proximal_phalanx_4";
segments[168] = HAnimSegment2059;

let HAnimSegment2060 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2060.USE = "hanim_l_tarsal_middle_phalanx_4";
segments[169] = HAnimSegment2060;

let HAnimSegment2061 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2061.USE = "hanim_l_metatarsal_5";
segments[170] = HAnimSegment2061;

let HAnimSegment2062 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2062.USE = "hanim_l_tarsal_proximal_phalanx_5";
segments[171] = HAnimSegment2062;

let HAnimSegment2063 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2063.USE = "hanim_l_tarsal_middle_phalanx_5";
segments[172] = HAnimSegment2063;

let HAnimSegment2064 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2064.USE = "hanim_r_thigh";
segments[173] = HAnimSegment2064;

let HAnimSegment2065 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2065.USE = "hanim_r_calf";
segments[174] = HAnimSegment2065;

let HAnimSegment2066 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2066.USE = "hanim_r_talus";
segments[175] = HAnimSegment2066;

let HAnimSegment2067 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2067.USE = "hanim_r_navicular";
segments[176] = HAnimSegment2067;

let HAnimSegment2068 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2068.USE = "hanim_r_cuneiform_1";
segments[177] = HAnimSegment2068;

let HAnimSegment2069 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2069.USE = "hanim_r_metatarsal_1";
segments[178] = HAnimSegment2069;

let HAnimSegment2070 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2070.USE = "hanim_r_tarsal_proximal_phalanx_1";
segments[179] = HAnimSegment2070;

let HAnimSegment2071 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2071.USE = "hanim_r_cuneiform_2";
segments[180] = HAnimSegment2071;

let HAnimSegment2072 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2072.USE = "hanim_r_metatarsal_2";
segments[181] = HAnimSegment2072;

let HAnimSegment2073 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2073.USE = "hanim_r_tarsal_proximal_phalanx_2";
segments[182] = HAnimSegment2073;

let HAnimSegment2074 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2074.USE = "hanim_r_tarsal_middle_phalanx_2";
segments[183] = HAnimSegment2074;

let HAnimSegment2075 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2075.USE = "hanim_r_cuneiform_3";
segments[184] = HAnimSegment2075;

let HAnimSegment2076 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2076.USE = "hanim_r_metatarsal_3";
segments[185] = HAnimSegment2076;

let HAnimSegment2077 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2077.USE = "hanim_r_tarsal_proximal_phalanx_3";
segments[186] = HAnimSegment2077;

let HAnimSegment2078 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2078.USE = "hanim_r_tarsal_middle_phalanx_3";
segments[187] = HAnimSegment2078;

let HAnimSegment2079 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2079.USE = "hanim_r_calcaneus";
segments[188] = HAnimSegment2079;

let HAnimSegment2080 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2080.USE = "hanim_r_cuboid";
segments[189] = HAnimSegment2080;

let HAnimSegment2081 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2081.USE = "hanim_r_metatarsal_4";
segments[190] = HAnimSegment2081;

let HAnimSegment2082 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2082.USE = "hanim_r_tarsal_proximal_phalanx_4";
segments[191] = HAnimSegment2082;

let HAnimSegment2083 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2083.USE = "hanim_r_tarsal_middle_phalanx_4";
segments[192] = HAnimSegment2083;

let HAnimSegment2084 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2084.USE = "hanim_r_metatarsal_5";
segments[193] = HAnimSegment2084;

let HAnimSegment2085 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2085.USE = "hanim_r_tarsal_proximal_phalanx_5";
segments[194] = HAnimSegment2085;

let HAnimSegment2086 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2086.USE = "hanim_r_tarsal_middle_phalanx_5";
segments[195] = HAnimSegment2086;

let HAnimSegment2087 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2087.USE = "hanim_l5";
segments[196] = HAnimSegment2087;

let HAnimSegment2088 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2088.USE = "hanim_l4";
segments[197] = HAnimSegment2088;

let HAnimSegment2089 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2089.USE = "hanim_l3";
segments[198] = HAnimSegment2089;

let HAnimSegment2090 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2090.USE = "hanim_l2";
segments[199] = HAnimSegment2090;

let HAnimSegment2091 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2091.USE = "hanim_l1";
segments[200] = HAnimSegment2091;

let HAnimSegment2092 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2092.USE = "hanim_t12";
segments[201] = HAnimSegment2092;

let HAnimSegment2093 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2093.USE = "hanim_t11";
segments[202] = HAnimSegment2093;

let HAnimSegment2094 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2094.USE = "hanim_t10";
segments[203] = HAnimSegment2094;

let HAnimSegment2095 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2095.USE = "hanim_t9";
segments[204] = HAnimSegment2095;

let HAnimSegment2096 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2096.USE = "hanim_t8";
segments[205] = HAnimSegment2096;

let HAnimSegment2097 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2097.USE = "hanim_t7";
segments[206] = HAnimSegment2097;

let HAnimSegment2098 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2098.USE = "hanim_t6";
segments[207] = HAnimSegment2098;

let HAnimSegment2099 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2099.USE = "hanim_t5";
segments[208] = HAnimSegment2099;

let HAnimSegment2100 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2100.USE = "hanim_t4";
segments[209] = HAnimSegment2100;

let HAnimSegment2101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2101.USE = "hanim_t3";
segments[210] = HAnimSegment2101;

let HAnimSegment2102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2102.USE = "hanim_t2";
segments[211] = HAnimSegment2102;

let HAnimSegment2103 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2103.USE = "hanim_t1";
segments[212] = HAnimSegment2103;

let HAnimSegment2104 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2104.USE = "hanim_c7";
segments[213] = HAnimSegment2104;

let HAnimSegment2105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2105.USE = "hanim_c6";
segments[214] = HAnimSegment2105;

let HAnimSegment2106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2106.USE = "hanim_c5";
segments[215] = HAnimSegment2106;

let HAnimSegment2107 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2107.USE = "hanim_c4";
segments[216] = HAnimSegment2107;

let HAnimSegment2108 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2108.USE = "hanim_c3";
segments[217] = HAnimSegment2108;

let HAnimSegment2109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2109.USE = "hanim_c2";
segments[218] = HAnimSegment2109;

let HAnimSegment2110 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2110.USE = "hanim_c1";
segments[219] = HAnimSegment2110;

let HAnimSegment2111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2111.USE = "hanim_skull";
segments[220] = HAnimSegment2111;

let HAnimSegment2112 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2112.USE = "hanim_l_clavicle";
segments[221] = HAnimSegment2112;

let HAnimSegment2113 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2113.USE = "hanim_l_scapula";
segments[222] = HAnimSegment2113;

let HAnimSegment2114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2114.USE = "hanim_l_upperarm";
segments[223] = HAnimSegment2114;

let HAnimSegment2115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2115.USE = "hanim_l_forearm";
segments[224] = HAnimSegment2115;

let HAnimSegment2116 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2116.USE = "hanim_l_carpal";
segments[225] = HAnimSegment2116;

let HAnimSegment2117 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2117.USE = "hanim_l_trapezium";
segments[226] = HAnimSegment2117;

let HAnimSegment2118 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2118.USE = "hanim_l_metacarpal_1";
segments[227] = HAnimSegment2118;

let HAnimSegment2119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2119.USE = "hanim_l_carpal_proximal_phalanx_1";
segments[228] = HAnimSegment2119;

let HAnimSegment2120 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2120.USE = "hanim_l_trapezoid";
segments[229] = HAnimSegment2120;

let HAnimSegment2121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2121.USE = "hanim_l_metacarpal_2";
segments[230] = HAnimSegment2121;

let HAnimSegment2122 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2122.USE = "hanim_l_carpal_proximal_phalanx_2";
segments[231] = HAnimSegment2122;

let HAnimSegment2123 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2123.USE = "hanim_l_carpal_middle_phalanx_2";
segments[232] = HAnimSegment2123;

let HAnimSegment2124 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2124.USE = "hanim_l_capitate";
segments[233] = HAnimSegment2124;

let HAnimSegment2125 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2125.USE = "hanim_l_metacarpal_3";
segments[234] = HAnimSegment2125;

let HAnimSegment2126 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2126.USE = "hanim_l_carpal_proximal_phalanx_3";
segments[235] = HAnimSegment2126;

let HAnimSegment2127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2127.USE = "hanim_l_carpal_middle_phalanx_3";
segments[236] = HAnimSegment2127;

let HAnimSegment2128 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2128.USE = "hanim_l_hamate";
segments[237] = HAnimSegment2128;

let HAnimSegment2129 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2129.USE = "hanim_l_metacarpal_4";
segments[238] = HAnimSegment2129;

let HAnimSegment2130 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2130.USE = "hanim_l_carpal_proximal_phalanx_4";
segments[239] = HAnimSegment2130;

let HAnimSegment2131 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2131.USE = "hanim_l_carpal_middle_phalanx_4";
segments[240] = HAnimSegment2131;

let HAnimSegment2132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2132.USE = "hanim_l_metacarpal_5";
segments[241] = HAnimSegment2132;

let HAnimSegment2133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2133.USE = "hanim_l_carpal_proximal_phalanx_5";
segments[242] = HAnimSegment2133;

let HAnimSegment2134 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2134.USE = "hanim_l_carpal_middle_phalanx_5";
segments[243] = HAnimSegment2134;

let HAnimSegment2135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2135.USE = "hanim_r_clavicle";
segments[244] = HAnimSegment2135;

let HAnimSegment2136 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2136.USE = "hanim_r_scapula";
segments[245] = HAnimSegment2136;

let HAnimSegment2137 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2137.USE = "hanim_r_upperarm";
segments[246] = HAnimSegment2137;

let HAnimSegment2138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2138.USE = "hanim_r_forearm";
segments[247] = HAnimSegment2138;

let HAnimSegment2139 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2139.USE = "hanim_r_carpal";
segments[248] = HAnimSegment2139;

let HAnimSegment2140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2140.USE = "hanim_r_trapezium";
segments[249] = HAnimSegment2140;

let HAnimSegment2141 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2141.USE = "hanim_r_metacarpal_1";
segments[250] = HAnimSegment2141;

let HAnimSegment2142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2142.USE = "hanim_r_carpal_proximal_phalanx_1";
segments[251] = HAnimSegment2142;

let HAnimSegment2143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2143.USE = "hanim_r_trapezoid";
segments[252] = HAnimSegment2143;

let HAnimSegment2144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2144.USE = "hanim_r_metacarpal_2";
segments[253] = HAnimSegment2144;

let HAnimSegment2145 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2145.USE = "hanim_r_carpal_proximal_phalanx_2";
segments[254] = HAnimSegment2145;

let HAnimSegment2146 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2146.USE = "hanim_r_carpal_middle_phalanx_2";
segments[255] = HAnimSegment2146;

let HAnimSegment2147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2147.USE = "hanim_r_capitate";
segments[256] = HAnimSegment2147;

let HAnimSegment2148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2148.USE = "hanim_r_metacarpal_3";
segments[257] = HAnimSegment2148;

let HAnimSegment2149 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2149.USE = "hanim_r_carpal_proximal_phalanx_3";
segments[258] = HAnimSegment2149;

let HAnimSegment2150 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2150.USE = "hanim_r_carpal_middle_phalanx_3";
segments[259] = HAnimSegment2150;

let HAnimSegment2151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2151.USE = "hanim_r_hamate";
segments[260] = HAnimSegment2151;

let HAnimSegment2152 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2152.USE = "hanim_r_metacarpal_4";
segments[261] = HAnimSegment2152;

let HAnimSegment2153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2153.USE = "hanim_r_carpal_proximal_phalanx_4";
segments[262] = HAnimSegment2153;

let HAnimSegment2154 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2154.USE = "hanim_r_carpal_middle_phalanx_4";
segments[263] = HAnimSegment2154;

let HAnimSegment2155 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2155.USE = "hanim_r_metacarpal_5";
segments[264] = HAnimSegment2155;

let HAnimSegment2156 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2156.USE = "hanim_r_carpal_proximal_phalanx_5";
segments[265] = HAnimSegment2156;

let HAnimSegment2157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2157.USE = "hanim_r_carpal_middle_phalanx_5";
segments[266] = HAnimSegment2157;

let HAnimSite2158 = browser.currentScene.createNode("HAnimSite");
HAnimSite2158.USE = "hanim_buttocks_standing_wall_contact_point";
viewpoints[267] = HAnimSite2158;

let HAnimSite2159 = browser.currentScene.createNode("HAnimSite");
HAnimSite2159.USE = "hanim_crotch";
viewpoints[268] = HAnimSite2159;

let HAnimSite2160 = browser.currentScene.createNode("HAnimSite");
HAnimSite2160.USE = "hanim_l_asis";
viewpoints[269] = HAnimSite2160;

let HAnimSite2161 = browser.currentScene.createNode("HAnimSite");
HAnimSite2161.USE = "hanim_l_iliocristale";
viewpoints[270] = HAnimSite2161;

let HAnimSite2162 = browser.currentScene.createNode("HAnimSite");
HAnimSite2162.USE = "hanim_l_psis";
viewpoints[271] = HAnimSite2162;

let HAnimSite2163 = browser.currentScene.createNode("HAnimSite");
HAnimSite2163.USE = "hanim_l_trochanterion";
viewpoints[272] = HAnimSite2163;

let HAnimSite2164 = browser.currentScene.createNode("HAnimSite");
HAnimSite2164.USE = "hanim_r_asis";
viewpoints[273] = HAnimSite2164;

let HAnimSite2165 = browser.currentScene.createNode("HAnimSite");
HAnimSite2165.USE = "hanim_r_iliocristale";
viewpoints[274] = HAnimSite2165;

let HAnimSite2166 = browser.currentScene.createNode("HAnimSite");
HAnimSite2166.USE = "hanim_r_psis";
viewpoints[275] = HAnimSite2166;

let HAnimSite2167 = browser.currentScene.createNode("HAnimSite");
HAnimSite2167.USE = "hanim_r_trochanterion";
viewpoints[276] = HAnimSite2167;

let HAnimSite2168 = browser.currentScene.createNode("HAnimSite");
HAnimSite2168.USE = "hanim_l_femoral_lateral_epicondyles";
viewpoints[277] = HAnimSite2168;

let HAnimSite2169 = browser.currentScene.createNode("HAnimSite");
HAnimSite2169.USE = "hanim_l_femoral_medial_epicondyles";
viewpoints[278] = HAnimSite2169;

let HAnimSite2170 = browser.currentScene.createNode("HAnimSite");
HAnimSite2170.USE = "hanim_l_knee_crease";
viewpoints[279] = HAnimSite2170;

let HAnimSite2171 = browser.currentScene.createNode("HAnimSite");
HAnimSite2171.USE = "hanim_l_suprapatella";
viewpoints[280] = HAnimSite2171;

let HAnimSite2172 = browser.currentScene.createNode("HAnimSite");
HAnimSite2172.USE = "hanim_l_lateral_malleolus";
viewpoints[281] = HAnimSite2172;

let HAnimSite2173 = browser.currentScene.createNode("HAnimSite");
HAnimSite2173.USE = "hanim_l_medial_malleolus";
viewpoints[282] = HAnimSite2173;

let HAnimSite2174 = browser.currentScene.createNode("HAnimSite");
HAnimSite2174.USE = "hanim_l_tibiale";
viewpoints[283] = HAnimSite2174;

let HAnimSite2175 = browser.currentScene.createNode("HAnimSite");
HAnimSite2175.USE = "hanim_l_calcaneus_posterior";
viewpoints[284] = HAnimSite2175;

let HAnimSite2176 = browser.currentScene.createNode("HAnimSite");
HAnimSite2176.USE = "hanim_l_sphyrion";
viewpoints[285] = HAnimSite2176;

let HAnimSite2177 = browser.currentScene.createNode("HAnimSite");
HAnimSite2177.USE = "hanim_l_metatarsal_phalanx_1";
viewpoints[286] = HAnimSite2177;

let HAnimSite2178 = browser.currentScene.createNode("HAnimSite");
HAnimSite2178.USE = "hanim_l_metatarsal_phalanx_5";
viewpoints[287] = HAnimSite2178;

let HAnimSite2179 = browser.currentScene.createNode("HAnimSite");
HAnimSite2179.USE = "hanim_r_femoral_lateral_epicondyles";
viewpoints[288] = HAnimSite2179;

let HAnimSite2180 = browser.currentScene.createNode("HAnimSite");
HAnimSite2180.USE = "hanim_r_femoral_medial_epicondyles";
viewpoints[289] = HAnimSite2180;

let HAnimSite2181 = browser.currentScene.createNode("HAnimSite");
HAnimSite2181.USE = "hanim_r_knee_crease";
viewpoints[290] = HAnimSite2181;

let HAnimSite2182 = browser.currentScene.createNode("HAnimSite");
HAnimSite2182.USE = "hanim_r_suprapatella";
viewpoints[291] = HAnimSite2182;

let HAnimSite2183 = browser.currentScene.createNode("HAnimSite");
HAnimSite2183.USE = "hanim_r_lateral_malleolus";
viewpoints[292] = HAnimSite2183;

let HAnimSite2184 = browser.currentScene.createNode("HAnimSite");
HAnimSite2184.USE = "hanim_r_medial_malleolus";
viewpoints[293] = HAnimSite2184;

let HAnimSite2185 = browser.currentScene.createNode("HAnimSite");
HAnimSite2185.USE = "hanim_r_tibiale";
viewpoints[294] = HAnimSite2185;

let HAnimSite2186 = browser.currentScene.createNode("HAnimSite");
HAnimSite2186.USE = "hanim_r_calcaneus_posterior";
viewpoints[295] = HAnimSite2186;

let HAnimSite2187 = browser.currentScene.createNode("HAnimSite");
HAnimSite2187.USE = "hanim_r_sphyrion";
viewpoints[296] = HAnimSite2187;

let HAnimSite2188 = browser.currentScene.createNode("HAnimSite");
HAnimSite2188.USE = "hanim_r_metatarsal_phalanx_1";
viewpoints[297] = HAnimSite2188;

let HAnimSite2189 = browser.currentScene.createNode("HAnimSite");
HAnimSite2189.USE = "hanim_r_metatarsal_phalanx_5";
viewpoints[298] = HAnimSite2189;

let HAnimSite2190 = browser.currentScene.createNode("HAnimSite");
HAnimSite2190.USE = "hanim_navel";
viewpoints[299] = HAnimSite2190;

let HAnimSite2191 = browser.currentScene.createNode("HAnimSite");
HAnimSite2191.USE = "hanim_waist_preferred_anterior";
viewpoints[300] = HAnimSite2191;

let HAnimSite2192 = browser.currentScene.createNode("HAnimSite");
HAnimSite2192.USE = "hanim_waist_preferred_posterior";
viewpoints[301] = HAnimSite2192;

let HAnimSite2193 = browser.currentScene.createNode("HAnimSite");
HAnimSite2193.USE = "hanim_l_rib10";
viewpoints[302] = HAnimSite2193;

let HAnimSite2194 = browser.currentScene.createNode("HAnimSite");
HAnimSite2194.USE = "hanim_r_rib10";
viewpoints[303] = HAnimSite2194;

let HAnimSite2195 = browser.currentScene.createNode("HAnimSite");
HAnimSite2195.USE = "hanim_spine_2_middle_back";
viewpoints[304] = HAnimSite2195;

let HAnimSite2196 = browser.currentScene.createNode("HAnimSite");
HAnimSite2196.USE = "hanim_substernale";
viewpoints[305] = HAnimSite2196;

let HAnimSite2197 = browser.currentScene.createNode("HAnimSite");
HAnimSite2197.USE = "hanim_l_thelion";
viewpoints[306] = HAnimSite2197;

let HAnimSite2198 = browser.currentScene.createNode("HAnimSite");
HAnimSite2198.USE = "hanim_r_thelion";
viewpoints[307] = HAnimSite2198;

let HAnimSite2199 = browser.currentScene.createNode("HAnimSite");
HAnimSite2199.USE = "hanim_l_chest_midsagittal_plane";
viewpoints[308] = HAnimSite2199;

let HAnimSite2200 = browser.currentScene.createNode("HAnimSite");
HAnimSite2200.USE = "hanim_mesosternale";
viewpoints[309] = HAnimSite2200;

let HAnimSite2201 = browser.currentScene.createNode("HAnimSite");
HAnimSite2201.USE = "hanim_r_chest_midsagittal_plane";
viewpoints[310] = HAnimSite2201;

let HAnimSite2202 = browser.currentScene.createNode("HAnimSite");
HAnimSite2202.USE = "hanim_rear_center_midsagittal_plane";
viewpoints[311] = HAnimSite2202;

let HAnimSite2203 = browser.currentScene.createNode("HAnimSite");
HAnimSite2203.USE = "hanim_spine_1_middle_back";
viewpoints[312] = HAnimSite2203;

let HAnimSite2204 = browser.currentScene.createNode("HAnimSite");
HAnimSite2204.USE = "hanim_cervicale";
viewpoints[313] = HAnimSite2204;

let HAnimSite2205 = browser.currentScene.createNode("HAnimSite");
HAnimSite2205.USE = "hanim_suprasternale";
viewpoints[314] = HAnimSite2205;

let HAnimSite2206 = browser.currentScene.createNode("HAnimSite");
HAnimSite2206.USE = "hanim_l_neck_base";
viewpoints[315] = HAnimSite2206;

let HAnimSite2207 = browser.currentScene.createNode("HAnimSite");
HAnimSite2207.USE = "hanim_r_neck_base";
viewpoints[316] = HAnimSite2207;

let HAnimSite2208 = browser.currentScene.createNode("HAnimSite");
HAnimSite2208.USE = "hanim_adams_apple";
viewpoints[317] = HAnimSite2208;

let HAnimSite2209 = browser.currentScene.createNode("HAnimSite");
HAnimSite2209.USE = "hanim_glabella";
viewpoints[318] = HAnimSite2209;

let HAnimSite2210 = browser.currentScene.createNode("HAnimSite");
HAnimSite2210.USE = "hanim_l_ectocanthus";
viewpoints[319] = HAnimSite2210;

let HAnimSite2211 = browser.currentScene.createNode("HAnimSite");
HAnimSite2211.USE = "hanim_l_infraorbitale";
viewpoints[320] = HAnimSite2211;

let HAnimSite2212 = browser.currentScene.createNode("HAnimSite");
HAnimSite2212.USE = "hanim_l_tragion";
viewpoints[321] = HAnimSite2212;

let HAnimSite2213 = browser.currentScene.createNode("HAnimSite");
HAnimSite2213.USE = "hanim_nuchale";
viewpoints[322] = HAnimSite2213;

let HAnimSite2214 = browser.currentScene.createNode("HAnimSite");
HAnimSite2214.USE = "hanim_opisthocranion";
viewpoints[323] = HAnimSite2214;

let HAnimSite2215 = browser.currentScene.createNode("HAnimSite");
HAnimSite2215.USE = "hanim_r_ectocanthus";
viewpoints[324] = HAnimSite2215;

let HAnimSite2216 = browser.currentScene.createNode("HAnimSite");
HAnimSite2216.USE = "hanim_r_infraorbitale";
viewpoints[325] = HAnimSite2216;

let HAnimSite2217 = browser.currentScene.createNode("HAnimSite");
HAnimSite2217.USE = "hanim_r_tragion";
viewpoints[326] = HAnimSite2217;

let HAnimSite2218 = browser.currentScene.createNode("HAnimSite");
HAnimSite2218.USE = "hanim_sellion";
viewpoints[327] = HAnimSite2218;

let HAnimSite2219 = browser.currentScene.createNode("HAnimSite");
HAnimSite2219.USE = "hanim_skull_vertex";
viewpoints[328] = HAnimSite2219;

let HAnimSite2220 = browser.currentScene.createNode("HAnimSite");
HAnimSite2220.USE = "hanim_l_acromion";
viewpoints[329] = HAnimSite2220;

let HAnimSite2221 = browser.currentScene.createNode("HAnimSite");
HAnimSite2221.USE = "hanim_l_axilla_distal";
viewpoints[330] = HAnimSite2221;

let HAnimSite2222 = browser.currentScene.createNode("HAnimSite");
HAnimSite2222.USE = "hanim_l_axilla_posterior_folds";
viewpoints[331] = HAnimSite2222;

let HAnimSite2223 = browser.currentScene.createNode("HAnimSite");
HAnimSite2223.USE = "hanim_l_axilla_proximal";
viewpoints[332] = HAnimSite2223;

let HAnimSite2224 = browser.currentScene.createNode("HAnimSite");
HAnimSite2224.USE = "hanim_l_clavicale";
viewpoints[333] = HAnimSite2224;

let HAnimSite2225 = browser.currentScene.createNode("HAnimSite");
HAnimSite2225.USE = "hanim_l_bideltoid";
viewpoints[334] = HAnimSite2225;

let HAnimSite2226 = browser.currentScene.createNode("HAnimSite");
HAnimSite2226.USE = "hanim_l_humeral_lateral_epicondyles";
viewpoints[335] = HAnimSite2226;

let HAnimSite2227 = browser.currentScene.createNode("HAnimSite");
HAnimSite2227.USE = "hanim_l_humeral_medial_epicondyles";
viewpoints[336] = HAnimSite2227;

let HAnimSite2228 = browser.currentScene.createNode("HAnimSite");
HAnimSite2228.USE = "hanim_l_olecranon";
viewpoints[337] = HAnimSite2228;

let HAnimSite2229 = browser.currentScene.createNode("HAnimSite");
HAnimSite2229.USE = "hanim_l_radial_styloid";
viewpoints[338] = HAnimSite2229;

let HAnimSite2230 = browser.currentScene.createNode("HAnimSite");
HAnimSite2230.USE = "hanim_l_radiale";
viewpoints[339] = HAnimSite2230;

let HAnimSite2231 = browser.currentScene.createNode("HAnimSite");
HAnimSite2231.USE = "hanim_l_ulnar_styloid";
viewpoints[340] = HAnimSite2231;

let HAnimSite2232 = browser.currentScene.createNode("HAnimSite");
HAnimSite2232.USE = "hanim_l_metacarpal_phalanx_2";
viewpoints[341] = HAnimSite2232;

let HAnimSite2233 = browser.currentScene.createNode("HAnimSite");
HAnimSite2233.USE = "hanim_l_metacarpal_phalanx_3";
viewpoints[342] = HAnimSite2233;

let HAnimSite2234 = browser.currentScene.createNode("HAnimSite");
HAnimSite2234.USE = "hanim_l_metacarpal_phalanx_5";
viewpoints[343] = HAnimSite2234;

let HAnimSite2235 = browser.currentScene.createNode("HAnimSite");
HAnimSite2235.USE = "hanim_r_acromion";
viewpoints[344] = HAnimSite2235;

let HAnimSite2236 = browser.currentScene.createNode("HAnimSite");
HAnimSite2236.USE = "hanim_r_axilla_distal";
viewpoints[345] = HAnimSite2236;

let HAnimSite2237 = browser.currentScene.createNode("HAnimSite");
HAnimSite2237.USE = "hanim_r_axilla_posterior_folds";
viewpoints[346] = HAnimSite2237;

let HAnimSite2238 = browser.currentScene.createNode("HAnimSite");
HAnimSite2238.USE = "hanim_r_axilla_proximal";
viewpoints[347] = HAnimSite2238;

let HAnimSite2239 = browser.currentScene.createNode("HAnimSite");
HAnimSite2239.USE = "hanim_r_clavicale";
viewpoints[348] = HAnimSite2239;

let HAnimSite2240 = browser.currentScene.createNode("HAnimSite");
HAnimSite2240.USE = "hanim_r_bideltoid";
viewpoints[349] = HAnimSite2240;

let HAnimSite2241 = browser.currentScene.createNode("HAnimSite");
HAnimSite2241.USE = "hanim_r_humeral_lateral_epicondyles";
viewpoints[350] = HAnimSite2241;

let HAnimSite2242 = browser.currentScene.createNode("HAnimSite");
HAnimSite2242.USE = "hanim_r_humeral_medial_epicondyles";
viewpoints[351] = HAnimSite2242;

let HAnimSite2243 = browser.currentScene.createNode("HAnimSite");
HAnimSite2243.USE = "hanim_r_olecranon";
viewpoints[352] = HAnimSite2243;

let HAnimSite2244 = browser.currentScene.createNode("HAnimSite");
HAnimSite2244.USE = "hanim_r_radial_styloid";
viewpoints[353] = HAnimSite2244;

let HAnimSite2245 = browser.currentScene.createNode("HAnimSite");
HAnimSite2245.USE = "hanim_r_radiale";
viewpoints[354] = HAnimSite2245;

let HAnimSite2246 = browser.currentScene.createNode("HAnimSite");
HAnimSite2246.USE = "hanim_r_ulnar_styloid";
viewpoints[355] = HAnimSite2246;

let HAnimSite2247 = browser.currentScene.createNode("HAnimSite");
HAnimSite2247.USE = "hanim_r_metacarpal_phalanx_2";
viewpoints[356] = HAnimSite2247;

let HAnimSite2248 = browser.currentScene.createNode("HAnimSite");
HAnimSite2248.USE = "hanim_r_metacarpal_phalanx_3";
viewpoints[357] = HAnimSite2248;

let HAnimSite2249 = browser.currentScene.createNode("HAnimSite");
HAnimSite2249.USE = "hanim_r_metacarpal_phalanx_5";
viewpoints[358] = HAnimSite2249;

browser.currentScene.children[4] = HAnimHumanoid38;

}
main ();
