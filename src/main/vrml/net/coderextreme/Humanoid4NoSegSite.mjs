const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "Humanoid4NoSegSite.x3d");
scene.addMetaData("identifier", "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4NoSegSite.x3d");
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
Transform19.translation = new X3D.SFVec3f([0,2,0]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "HAnimRootShape";
let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 0.02;
geometry = Sphere21;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.DEF = "HAnimRootMaterial";
Material23.diffuseColor = new X3D.SFColor([0.8,0,0]);
Material23.transparency = 0.3;
material = Material23;

appearance = Appearance22;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

Transform18YYY.children = new X3D.MFNode();

Transform18ZZZ.children[0] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new X3D.SFVec3f([0,2.1,0]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.DEF = "HAnimJointShape";
let Sphere26 = browser.currentScene.createNode("Sphere");
Sphere26.radius = 0.02;
geometry = Sphere26;

let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.DEF = "HAnimJointMaterial";
Material28.diffuseColor = new X3D.SFColor([0,0,0.8]);
Material28.transparency = 0.3;
material = Material28;

appearance = Appearance27;

Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

Transform18ZZZ.children[1] = Transform24;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new X3D.SFVec3f([0,2.05,0]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "HAnimSegmentLine";
let LineSet31 = browser.currentScene.createNode("LineSet");
LineSet31.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA32 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA32.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA32.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1]);
color = ColorRGBA32;

let Coordinate33 = browser.currentScene.createNode("Coordinate");
Coordinate33.point = new X3D.MFVec3f([-0.05,0,0,0.05,0,0]);
coord = Coordinate33;

geometry = LineSet31;

Transform29YYY.child = new X3D.undefined();

Transform29ZZZ.child[0] = Shape30;

Transform18ZZZ.children[2] = Transform29;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.translation = new X3D.SFVec3f([0,2.1,0]);
let Shape35 = browser.currentScene.createNode("Shape");
Shape35.DEF = "HAnimSiteShape";
let IndexedFaceSet36 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet36.DEF = "DiamondIFS";
IndexedFaceSet36.creaseAngle = 0.5;
IndexedFaceSet36.solid = False;
IndexedFaceSet36.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA37 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA37.DEF = "HAnimSiteColorRGBA";
ColorRGBA37.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA37;

let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate38;

geometry = IndexedFaceSet36;

let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new X3D.SFColor([1,1,0]);
Material40.transparency = 0.3;
material = Material40;

appearance = Appearance39;

Transform34YYY.child = new X3D.undefined();

Transform34ZZZ.child[0] = Shape35;

Transform18ZZZ.children[3] = Transform34;

Group17YYY.children = new X3D.MFNode();

Group17ZZZ.children[0] = Transform18;

browser.currentScene.children[1] = Group17;

let NavigationInfo41 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo41.speed = 1.5;
browser.currentScene.children[2] = NavigationInfo41;

let Viewpoint42 = browser.currentScene.createNode("Viewpoint");
Viewpoint42.description = "default";
browser.currentScene.children[3] = Viewpoint42;

let HAnimHumanoid43 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid43.name = "HAnim";
HAnimHumanoid43.DEF = "hanim_HAnim";
HAnimHumanoid43.info = new X3D.MFString([new X3D.SFString("humanoidVersion=2.0")]);
HAnimHumanoid43.version = "2.0";
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
let Shape44 = browser.currentScene.createNode("Shape");
Shape44.DEF = "SkinShape";
let IndexedFaceSet45 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet45.coordIndex = new X3D.MFInt32([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet45.creaseAngle = 3.1;
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.DEF = "TheSkinCoord";
Coordinate46.point = new X3D.MFVec3f([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
coord = Coordinate46;

let Color47 = browser.currentScene.createNode("Color");
Color47.color = new X3D.MFColor([1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
color = Color47;

geometry = IndexedFaceSet45;

let Appearance48 = browser.currentScene.createNode("Appearance");
Appearance48.DEF = "SkinAppearance";
let ImageTexture49 = browser.currentScene.createNode("ImageTexture");
ImageTexture49.DEF = "zBlueSpiralBkg2";
ImageTexture49.description = "Blue Spiral Pattern";
ImageTexture49.url = new X3D.MFString([new X3D.SFString("../data/zBlueSpiralBkg2.gif"), new X3D.SFString("zBlueSpiralBkg2.gif"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")]);
texture = ImageTexture49;

let Material50 = browser.currentScene.createNode("Material");
Material50.DEF = "SkinMaterial";
Material50.ambientIntensity = 0.6;
Material50.diffuseColor = new X3D.SFColor([1,1,1]);
Material50.shininess = 0.6;
Material50.transparency = 0.2;
material = Material50;

appearance = Appearance48;

HAnimHumanoid43.skin = new X3D.MFNode();

HAnimHumanoid43XXX.skin[0] = Shape44;

let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.USE = "TheSkinCoord";
skinCoord = Coordinate51;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "humanoid_root";
HAnimJoint52.DEF = "hanim_humanoid_root";
HAnimJoint52.center = new X3D.SFVec3f([0,0.824,0.0277]);
HAnimJoint52.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint52.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint52.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint52.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "sacroiliac";
HAnimJoint53.DEF = "hanim_sacroiliac";
HAnimJoint53.center = new X3D.SFVec3f([0,0.9149,0.0016]);
HAnimJoint53.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint53.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint53.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint53.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "l_hip";
HAnimJoint54.DEF = "hanim_l_hip";
HAnimJoint54.center = new X3D.SFVec3f([0.0961,0.9124,-0.0001]);
HAnimJoint54.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint54.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint54.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint54.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "l_knee";
HAnimJoint55.DEF = "hanim_l_knee";
HAnimJoint55.center = new X3D.SFVec3f([0.104,0.4867,0.0308]);
HAnimJoint55.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint55.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint55.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint55.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "l_talocrural";
HAnimJoint56.DEF = "hanim_l_talocrural";
HAnimJoint56.center = new X3D.SFVec3f([0.1101,0.0656,-0.0736]);
HAnimJoint56.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint56.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint56.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint56.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "l_talocalcaneonavicular";
HAnimJoint57.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint57.center = new X3D.SFVec3f([0.0781,0.0283,-0.097]);
HAnimJoint57.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint57.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint57.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint57.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "l_cuneonavicular_1";
HAnimJoint58.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint58.center = new X3D.SFVec3f([0.0672,0.0235,-0.0835]);
HAnimJoint58.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint58.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint58.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint58.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "l_tarsometatarsal_1";
HAnimJoint59.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint59.center = new X3D.SFVec3f([0.0644,0.0147,-0.0577]);
HAnimJoint59.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint59.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint59.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint59.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "l_metatarsophalangeal_1";
HAnimJoint60.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint60.center = new X3D.SFVec3f([0.0619,0.0059,-0.0083]);
HAnimJoint60.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint60.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint60.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint60.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "l_tarsal_interphalangeal_1";
HAnimJoint61.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint61.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint61.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint60YYY.children = new X3D.MFNode();

HAnimJoint60ZZZ.children[0] = HAnimJoint61;

HAnimJoint59YYY.children = new X3D.MFNode();

HAnimJoint59ZZZ.children[0] = HAnimJoint60;

HAnimJoint58YYY.children = new X3D.MFNode();

HAnimJoint58ZZZ.children[0] = HAnimJoint59;

HAnimJoint57YYY.children = new X3D.MFNode();

HAnimJoint57ZZZ.children[0] = HAnimJoint58;

let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "l_cuneonavicular_2";
HAnimJoint62.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint62.center = new X3D.SFVec3f([0.0812,0.025,-0.0805]);
HAnimJoint62.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint62.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint62.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint62.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.name = "l_tarsometatarsal_2";
HAnimJoint63.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint63.center = new X3D.SFVec3f([0.08,0.0175,-0.0608]);
HAnimJoint63.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint63.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint63.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint63.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "l_metatarsophalangeal_2";
HAnimJoint64.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint64.center = new X3D.SFVec3f([0.0824,0.0064,-0.004]);
HAnimJoint64.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint64.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint64.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint64.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint65.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint65.center = new X3D.SFVec3f([0.0841,0.0041,0.0121]);
HAnimJoint65.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint65.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint65.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint65.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint66.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint66.center = new X3D.SFVec3f([0.0841,0.0013,0.0216]);
HAnimJoint66.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint66.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint66.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint66.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint65YYY.children = new X3D.MFNode();

HAnimJoint65ZZZ.children[0] = HAnimJoint66;

HAnimJoint64YYY.children = new X3D.MFNode();

HAnimJoint64ZZZ.children[0] = HAnimJoint65;

HAnimJoint63YYY.children = new X3D.MFNode();

HAnimJoint63ZZZ.children[0] = HAnimJoint64;

HAnimJoint62YYY.children = new X3D.MFNode();

HAnimJoint62ZZZ.children[0] = HAnimJoint63;

HAnimJoint57ZZZ.children[1] = HAnimJoint62;

let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "l_cuneonavicular_3";
HAnimJoint67.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint67.center = new X3D.SFVec3f([0.0928,0.0248,-0.0821]);
HAnimJoint67.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint67.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint67.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint67.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "l_tarsometatarsal_3";
HAnimJoint68.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint68.center = new X3D.SFVec3f([0.0944,0.0175,-0.0625]);
HAnimJoint68.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint68.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint68.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint68.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "l_metatarsophalangeal_3";
HAnimJoint69.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint69.center = new X3D.SFVec3f([0.0963,0.0065,-0.0065]);
HAnimJoint69.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint69.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint69.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint69.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint70.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint70.center = new X3D.SFVec3f([0.0987,0.0034,0.0086]);
HAnimJoint70.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint70.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint70.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint70.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint71.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint71.center = new X3D.SFVec3f([0.1002,0.0013,0.0178]);
HAnimJoint71.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint71.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint71.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint71.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint70YYY.children = new X3D.MFNode();

HAnimJoint70ZZZ.children[0] = HAnimJoint71;

HAnimJoint69YYY.children = new X3D.MFNode();

HAnimJoint69ZZZ.children[0] = HAnimJoint70;

HAnimJoint68YYY.children = new X3D.MFNode();

HAnimJoint68ZZZ.children[0] = HAnimJoint69;

HAnimJoint67YYY.children = new X3D.MFNode();

HAnimJoint67ZZZ.children[0] = HAnimJoint68;

HAnimJoint57ZZZ.children[2] = HAnimJoint67;

HAnimJoint56YYY.children = new X3D.MFNode();

HAnimJoint56ZZZ.children[0] = HAnimJoint57;

let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.name = "l_calcaneocuboid";
HAnimJoint72.DEF = "hanim_l_calcaneocuboid";
HAnimJoint72.center = new X3D.SFVec3f([0.0889,0.0494,-0.1278]);
HAnimJoint72.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint72.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint72.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint72.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "l_transversetarsal";
HAnimJoint73.DEF = "hanim_l_transversetarsal";
HAnimJoint73.center = new X3D.SFVec3f([0.1105,0.0267,-0.0998]);
HAnimJoint73.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint73.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint73.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint73.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "l_tarsometatarsal_4";
HAnimJoint74.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint74.center = new X3D.SFVec3f([0.1063,0.016,-0.0634]);
HAnimJoint74.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint74.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint74.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint74.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "l_metatarsophalangeal_4";
HAnimJoint75.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint75.center = new X3D.SFVec3f([0.1097,0.0058,-0.0107]);
HAnimJoint75.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint75.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint75.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint75.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint76.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint76.center = new X3D.SFVec3f([0.114,0.0037,0.0044]);
HAnimJoint76.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint76.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint76.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint76.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint77.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint77.center = new X3D.SFVec3f([0.1155,0.0008,0.0118]);
HAnimJoint77.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint77.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint77.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint77.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint76YYY.children = new X3D.MFNode();

HAnimJoint76ZZZ.children[0] = HAnimJoint77;

HAnimJoint75YYY.children = new X3D.MFNode();

HAnimJoint75ZZZ.children[0] = HAnimJoint76;

HAnimJoint74YYY.children = new X3D.MFNode();

HAnimJoint74ZZZ.children[0] = HAnimJoint75;

HAnimJoint73YYY.children = new X3D.MFNode();

HAnimJoint73ZZZ.children[0] = HAnimJoint74;

let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "l_tarsometatarsal_5";
HAnimJoint78.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint78.center = new X3D.SFVec3f([0.1206,0.0124,-0.0671]);
HAnimJoint78.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint78.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint78.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint78.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "l_metatarsophalangeal_5";
HAnimJoint79.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint79.center = new X3D.SFVec3f([0.1239,0.0051,-0.0153]);
HAnimJoint79.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint79.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint79.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint79.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint80.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint80.center = new X3D.SFVec3f([0.1262,0.0023,-0.0077]);
HAnimJoint80.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint80.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint80.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint80.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint81.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint81.center = new X3D.SFVec3f([0.1271,0,0]);
HAnimJoint81.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint81.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint81.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint81.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint80YYY.children = new X3D.MFNode();

HAnimJoint80ZZZ.children[0] = HAnimJoint81;

HAnimJoint79YYY.children = new X3D.MFNode();

HAnimJoint79ZZZ.children[0] = HAnimJoint80;

HAnimJoint78YYY.children = new X3D.MFNode();

HAnimJoint78ZZZ.children[0] = HAnimJoint79;

HAnimJoint73ZZZ.children[1] = HAnimJoint78;

HAnimJoint72YYY.children = new X3D.MFNode();

HAnimJoint72ZZZ.children[0] = HAnimJoint73;

HAnimJoint56ZZZ.children[1] = HAnimJoint72;

HAnimJoint55YYY.children = new X3D.MFNode();

HAnimJoint55ZZZ.children[0] = HAnimJoint56;

HAnimJoint54YYY.children = new X3D.MFNode();

HAnimJoint54ZZZ.children[0] = HAnimJoint55;

HAnimJoint53YYY.children = new X3D.MFNode();

HAnimJoint53ZZZ.children[0] = HAnimJoint54;

let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "r_hip";
HAnimJoint82.DEF = "hanim_r_hip";
HAnimJoint82.center = new X3D.SFVec3f([-0.095,0.9171,0.0029]);
HAnimJoint82.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint82.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint82.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint82.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "r_knee";
HAnimJoint83.DEF = "hanim_r_knee";
HAnimJoint83.center = new X3D.SFVec3f([-0.0867,0.4913,0.0318]);
HAnimJoint83.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint83.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint83.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint83.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "r_talocrural";
HAnimJoint84.DEF = "hanim_r_talocrural";
HAnimJoint84.center = new X3D.SFVec3f([-0.0801,0.0712,-0.0766]);
HAnimJoint84.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint84.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint84.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint84.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "r_talocalcaneonavicular";
HAnimJoint85.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint85.center = new X3D.SFVec3f([-0.0781,0.0283,-0.097]);
HAnimJoint85.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint85.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint85.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint85.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "r_cuneonavicular_1";
HAnimJoint86.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint86.center = new X3D.SFVec3f([-0.0672,0.0235,-0.0835]);
HAnimJoint86.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint86.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint86.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint86.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "r_tarsometatarsal_1";
HAnimJoint87.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint87.center = new X3D.SFVec3f([-0.0644,0.0147,-0.0577]);
HAnimJoint87.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint87.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint87.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint87.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "r_metatarsophalangeal_1";
HAnimJoint88.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint88.center = new X3D.SFVec3f([-0.0619,0.0059,-0.0083]);
HAnimJoint88.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint88.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint88.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint88.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "r_tarsal_interphalangeal_1";
HAnimJoint89.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint89.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint89.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint88YYY.children = new X3D.MFNode();

HAnimJoint88ZZZ.children[0] = HAnimJoint89;

HAnimJoint87YYY.children = new X3D.MFNode();

HAnimJoint87ZZZ.children[0] = HAnimJoint88;

HAnimJoint86YYY.children = new X3D.MFNode();

HAnimJoint86ZZZ.children[0] = HAnimJoint87;

HAnimJoint85YYY.children = new X3D.MFNode();

HAnimJoint85ZZZ.children[0] = HAnimJoint86;

let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "r_cuneonavicular_2";
HAnimJoint90.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint90.center = new X3D.SFVec3f([-0.0812,0.025,-0.0805]);
HAnimJoint90.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint90.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint90.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint90.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "r_tarsometatarsal_2";
HAnimJoint91.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint91.center = new X3D.SFVec3f([-0.08,0.0175,-0.0608]);
HAnimJoint91.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint91.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint91.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint91.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "r_metatarsophalangeal_2";
HAnimJoint92.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint92.center = new X3D.SFVec3f([-0.0823,0.0064,-0.004]);
HAnimJoint92.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint92.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint92.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint92.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint93.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint93.center = new X3D.SFVec3f([-0.0841,0.0041,0.0121]);
HAnimJoint93.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint93.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint93.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint93.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint94.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint94.center = new X3D.SFVec3f([-0.0841,0.0013,0.0216]);
HAnimJoint94.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint94.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint94.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint94.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint93YYY.children = new X3D.MFNode();

HAnimJoint93ZZZ.children[0] = HAnimJoint94;

HAnimJoint92YYY.children = new X3D.MFNode();

HAnimJoint92ZZZ.children[0] = HAnimJoint93;

HAnimJoint91YYY.children = new X3D.MFNode();

HAnimJoint91ZZZ.children[0] = HAnimJoint92;

HAnimJoint90YYY.children = new X3D.MFNode();

HAnimJoint90ZZZ.children[0] = HAnimJoint91;

HAnimJoint85ZZZ.children[1] = HAnimJoint90;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "r_cuneonavicular_3";
HAnimJoint95.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint95.center = new X3D.SFVec3f([-0.0928,0.0248,-0.0821]);
HAnimJoint95.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint95.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint95.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint95.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "r_tarsometatarsal_3";
HAnimJoint96.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint96.center = new X3D.SFVec3f([-0.0944,0.0175,-0.0625]);
HAnimJoint96.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint96.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint96.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint96.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "r_metatarsophalangeal_3";
HAnimJoint97.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint97.center = new X3D.SFVec3f([-0.0963,0.0065,-0.0065]);
HAnimJoint97.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint97.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint97.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint97.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint98.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint98.center = new X3D.SFVec3f([-0.0987,0.0034,0.0086]);
HAnimJoint98.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint98.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint98.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint98.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint99.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint99.center = new X3D.SFVec3f([-0.1002,0.0013,0.0178]);
HAnimJoint99.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint99.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint99.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint99.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint98YYY.children = new X3D.MFNode();

HAnimJoint98ZZZ.children[0] = HAnimJoint99;

HAnimJoint97YYY.children = new X3D.MFNode();

HAnimJoint97ZZZ.children[0] = HAnimJoint98;

HAnimJoint96YYY.children = new X3D.MFNode();

HAnimJoint96ZZZ.children[0] = HAnimJoint97;

HAnimJoint95YYY.children = new X3D.MFNode();

HAnimJoint95ZZZ.children[0] = HAnimJoint96;

HAnimJoint85ZZZ.children[2] = HAnimJoint95;

HAnimJoint84YYY.children = new X3D.MFNode();

HAnimJoint84ZZZ.children[0] = HAnimJoint85;

let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "r_calcaneocuboid";
HAnimJoint100.DEF = "hanim_r_calcaneocuboid";
HAnimJoint100.center = new X3D.SFVec3f([-0.0889,0.0494,-0.1278]);
HAnimJoint100.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint100.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint100.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint100.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "r_transversetarsal";
HAnimJoint101.DEF = "hanim_r_transversetarsal";
HAnimJoint101.center = new X3D.SFVec3f([-0.1105,0.0267,-0.0998]);
HAnimJoint101.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint101.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint101.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint101.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "r_tarsometatarsal_4";
HAnimJoint102.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint102.center = new X3D.SFVec3f([-0.1063,0.016,-0.0634]);
HAnimJoint102.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint102.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint102.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint102.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "r_metatarsophalangeal_4";
HAnimJoint103.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint103.center = new X3D.SFVec3f([-0.1097,0.0058,-0.0107]);
HAnimJoint103.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint103.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint103.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint103.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint104.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint104.center = new X3D.SFVec3f([-0.114,0.0037,0.0044]);
HAnimJoint104.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint104.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint104.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint104.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint105.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint105.center = new X3D.SFVec3f([-0.1155,0.0008,0.0118]);
HAnimJoint105.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint105.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint105.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint105.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint104YYY.children = new X3D.MFNode();

HAnimJoint104ZZZ.children[0] = HAnimJoint105;

HAnimJoint103YYY.children = new X3D.MFNode();

HAnimJoint103ZZZ.children[0] = HAnimJoint104;

HAnimJoint102YYY.children = new X3D.MFNode();

HAnimJoint102ZZZ.children[0] = HAnimJoint103;

HAnimJoint101YYY.children = new X3D.MFNode();

HAnimJoint101ZZZ.children[0] = HAnimJoint102;

let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "r_tarsometatarsal_5";
HAnimJoint106.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint106.center = new X3D.SFVec3f([-0.1206,0.0124,-0.0671]);
HAnimJoint106.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint106.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint106.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint106.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "r_metatarsophalangeal_5";
HAnimJoint107.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint107.center = new X3D.SFVec3f([-0.1239,0.0051,-0.0153]);
HAnimJoint107.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint107.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint107.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint107.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint108.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint108.center = new X3D.SFVec3f([-0.1262,0.0023,-0.0077]);
HAnimJoint108.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint108.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint108.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint108.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint109.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint109.center = new X3D.SFVec3f([-0.1271,0,0]);
HAnimJoint109.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint109.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint109.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint109.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint108YYY.children = new X3D.MFNode();

HAnimJoint108ZZZ.children[0] = HAnimJoint109;

HAnimJoint107YYY.children = new X3D.MFNode();

HAnimJoint107ZZZ.children[0] = HAnimJoint108;

HAnimJoint106YYY.children = new X3D.MFNode();

HAnimJoint106ZZZ.children[0] = HAnimJoint107;

HAnimJoint101ZZZ.children[1] = HAnimJoint106;

HAnimJoint100YYY.children = new X3D.MFNode();

HAnimJoint100ZZZ.children[0] = HAnimJoint101;

HAnimJoint84ZZZ.children[1] = HAnimJoint100;

HAnimJoint83YYY.children = new X3D.MFNode();

HAnimJoint83ZZZ.children[0] = HAnimJoint84;

HAnimJoint82YYY.children = new X3D.MFNode();

HAnimJoint82ZZZ.children[0] = HAnimJoint83;

HAnimJoint53ZZZ.children[1] = HAnimJoint82;

HAnimJoint52YYY.children = new X3D.MFNode();

HAnimJoint52ZZZ.children[0] = HAnimJoint53;

let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.name = "vl5";
HAnimJoint110.DEF = "hanim_vl5";
HAnimJoint110.center = new X3D.SFVec3f([0.0028,1.0568,-0.0776]);
HAnimJoint110.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint110.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint110.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint110.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "vl4";
HAnimJoint111.DEF = "hanim_vl4";
HAnimJoint111.center = new X3D.SFVec3f([0.0035,1.0925,-0.0787]);
HAnimJoint111.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint111.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint111.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint111.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "vl3";
HAnimJoint112.DEF = "hanim_vl3";
HAnimJoint112.center = new X3D.SFVec3f([0.0041,1.1276,-0.0796]);
HAnimJoint112.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint112.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint112.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint112.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "vl2";
HAnimJoint113.DEF = "hanim_vl2";
HAnimJoint113.center = new X3D.SFVec3f([0.0045,1.1546,-0.08]);
HAnimJoint113.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint113.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint113.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint113.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "vl1";
HAnimJoint114.DEF = "hanim_vl1";
HAnimJoint114.center = new X3D.SFVec3f([0.0048,1.1912,-0.0805]);
HAnimJoint114.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint114.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint114.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint114.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "vt12";
HAnimJoint115.DEF = "hanim_vt12";
HAnimJoint115.center = new X3D.SFVec3f([0.0051,1.2278,-0.0808]);
HAnimJoint115.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint115.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint115.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint115.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "vt11";
HAnimJoint116.DEF = "hanim_vt11";
HAnimJoint116.center = new X3D.SFVec3f([0.0053,1.2679,-0.081]);
HAnimJoint116.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint116.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint116.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint116.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.name = "vt10";
HAnimJoint117.DEF = "hanim_vt10";
HAnimJoint117.center = new X3D.SFVec3f([0.0056,1.2848,-0.0822]);
HAnimJoint117.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint117.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint117.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint117.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "vt9";
HAnimJoint118.DEF = "hanim_vt9";
HAnimJoint118.center = new X3D.SFVec3f([0.0057,1.3126,-0.0838]);
HAnimJoint118.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint118.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint118.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint118.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.name = "vt8";
HAnimJoint119.DEF = "hanim_vt8";
HAnimJoint119.center = new X3D.SFVec3f([0.0057,1.3382,-0.0845]);
HAnimJoint119.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint119.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint119.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint119.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "vt7";
HAnimJoint120.DEF = "hanim_vt7";
HAnimJoint120.center = new X3D.SFVec3f([0.0058,1.3625,-0.0833]);
HAnimJoint120.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint120.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint120.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint120.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.name = "vt6";
HAnimJoint121.DEF = "hanim_vt6";
HAnimJoint121.center = new X3D.SFVec3f([0.0059,1.3866,-0.08]);
HAnimJoint121.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint121.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint121.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint121.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.name = "vt5";
HAnimJoint122.DEF = "hanim_vt5";
HAnimJoint122.center = new X3D.SFVec3f([0.006,1.4102,-0.0745]);
HAnimJoint122.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint122.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint122.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint122.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.name = "vt4";
HAnimJoint123.DEF = "hanim_vt4";
HAnimJoint123.center = new X3D.SFVec3f([0.0061,1.432,-0.0675]);
HAnimJoint123.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint123.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint123.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint123.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.name = "vt3";
HAnimJoint124.DEF = "hanim_vt3";
HAnimJoint124.center = new X3D.SFVec3f([0.0062,1.4583,-0.057]);
HAnimJoint124.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint124.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint124.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint124.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.name = "vt2";
HAnimJoint125.DEF = "hanim_vt2";
HAnimJoint125.center = new X3D.SFVec3f([0.0063,1.4761,-0.0484]);
HAnimJoint125.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint125.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint125.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint125.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.name = "vt1";
HAnimJoint126.DEF = "hanim_vt1";
HAnimJoint126.center = new X3D.SFVec3f([0.0065,1.4951,-0.0387]);
HAnimJoint126.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint126.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint126.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint126.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.name = "vc7";
HAnimJoint127.DEF = "hanim_vc7";
HAnimJoint127.center = new X3D.SFVec3f([0.0066,1.5132,-0.0301]);
HAnimJoint127.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint127.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint127.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint127.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.name = "vc6";
HAnimJoint128.DEF = "hanim_vc6";
HAnimJoint128.center = new X3D.SFVec3f([0.0066,1.5357,-0.0143]);
HAnimJoint128.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint128.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint128.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint128.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.name = "vc5";
HAnimJoint129.DEF = "hanim_vc5";
HAnimJoint129.center = new X3D.SFVec3f([0.0066,1.552,-0.0082]);
HAnimJoint129.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint129.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint129.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint129.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.name = "vc4";
HAnimJoint130.DEF = "hanim_vc4";
HAnimJoint130.center = new X3D.SFVec3f([0.0066,1.5662,-0.0084]);
HAnimJoint130.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint130.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint130.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint130.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.name = "vc3";
HAnimJoint131.DEF = "hanim_vc3";
HAnimJoint131.center = new X3D.SFVec3f([0.0066,1.58,-0.0103]);
HAnimJoint131.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint131.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint131.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint131.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.name = "vc2";
HAnimJoint132.DEF = "hanim_vc2";
HAnimJoint132.center = new X3D.SFVec3f([0.0066,1.5928,-0.0103]);
HAnimJoint132.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint132.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint132.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint132.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.name = "vc1";
HAnimJoint133.DEF = "hanim_vc1";
HAnimJoint133.center = new X3D.SFVec3f([0.0066,1.6144,-0.0034]);
HAnimJoint133.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint133.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint133.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint133.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.name = "skullbase";
HAnimJoint134.DEF = "hanim_skullbase";
HAnimJoint134.center = new X3D.SFVec3f([0.0044,1.6209,0.0236]);
HAnimJoint134.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint134.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint134.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint134.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.name = "l_eyelid_joint";
HAnimJoint135.DEF = "hanim_l_eyelid_joint";
HAnimJoint135.center = new X3D.SFVec3f([0.0503,1.4157,-0.0689]);
HAnimJoint135.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint135.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint135.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint135.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint134YYY.children = new X3D.MFNode();

HAnimJoint134ZZZ.children[0] = HAnimJoint135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.name = "r_eyelid_joint";
HAnimJoint136.DEF = "hanim_r_eyelid_joint";
HAnimJoint136.center = new X3D.SFVec3f([-0.0507,1.4157,-0.0689]);
HAnimJoint136.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint136.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint136.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint136.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint134ZZZ.children[1] = HAnimJoint136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.name = "l_eyeball_joint";
HAnimJoint137.DEF = "hanim_l_eyeball_joint";
HAnimJoint137.center = new X3D.SFVec3f([0.0479,1.3963,-0.0188]);
HAnimJoint137.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint137.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint137.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint137.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint134ZZZ.children[2] = HAnimJoint137;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.name = "r_eyeball_joint";
HAnimJoint138.DEF = "hanim_r_eyeball_joint";
HAnimJoint138.center = new X3D.SFVec3f([-0.0483,1.3963,-0.0188]);
HAnimJoint138.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint138.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint138.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint138.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint134ZZZ.children[3] = HAnimJoint138;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.name = "l_eyebrow_joint";
HAnimJoint139.DEF = "hanim_l_eyebrow_joint";
HAnimJoint139.center = new X3D.SFVec3f([0.0216,1.4053,0.0051]);
HAnimJoint139.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint139.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint139.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint139.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint134ZZZ.children[4] = HAnimJoint139;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.name = "r_eyebrow_joint";
HAnimJoint140.DEF = "hanim_r_eyebrow_joint";
HAnimJoint140.center = new X3D.SFVec3f([-0.0219,1.4053,0.0051]);
HAnimJoint140.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint140.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint140.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint140.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint134ZZZ.children[5] = HAnimJoint140;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.name = "temporomandibular";
HAnimJoint141.DEF = "hanim_temporomandibular";
HAnimJoint141.center = new X3D.SFVec3f([-0.0002,1.3043,-0.0865]);
HAnimJoint141.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint141.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint141.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint141.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint134ZZZ.children[6] = HAnimJoint141;

HAnimJoint133YYY.children = new X3D.MFNode();

HAnimJoint133ZZZ.children[0] = HAnimJoint134;

HAnimJoint132YYY.children = new X3D.MFNode();

HAnimJoint132ZZZ.children[0] = HAnimJoint133;

HAnimJoint131YYY.children = new X3D.MFNode();

HAnimJoint131ZZZ.children[0] = HAnimJoint132;

HAnimJoint130YYY.children = new X3D.MFNode();

HAnimJoint130ZZZ.children[0] = HAnimJoint131;

HAnimJoint129YYY.children = new X3D.MFNode();

HAnimJoint129ZZZ.children[0] = HAnimJoint130;

HAnimJoint128YYY.children = new X3D.MFNode();

HAnimJoint128ZZZ.children[0] = HAnimJoint129;

HAnimJoint127YYY.children = new X3D.MFNode();

HAnimJoint127ZZZ.children[0] = HAnimJoint128;

HAnimJoint126YYY.children = new X3D.MFNode();

HAnimJoint126ZZZ.children[0] = HAnimJoint127;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.name = "l_sternoclavicular";
HAnimJoint142.DEF = "hanim_l_sternoclavicular";
HAnimJoint142.center = new X3D.SFVec3f([0.082,1.4488,-0.0353]);
HAnimJoint142.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint142.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint142.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint142.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.name = "l_acromioclavicular";
HAnimJoint143.DEF = "hanim_l_acromioclavicular";
HAnimJoint143.center = new X3D.SFVec3f([0.0962,1.4269,-0.0424]);
HAnimJoint143.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint143.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint143.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint143.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.name = "l_shoulder";
HAnimJoint144.DEF = "hanim_l_shoulder";
HAnimJoint144.center = new X3D.SFVec3f([0.2029,1.4376,-0.0387]);
HAnimJoint144.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint144.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint144.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint144.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.name = "l_elbow";
HAnimJoint145.DEF = "hanim_l_elbow";
HAnimJoint145.center = new X3D.SFVec3f([0.2014,1.1357,-0.0682]);
HAnimJoint145.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint145.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint145.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint145.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.name = "l_radiocarpal";
HAnimJoint146.DEF = "hanim_l_radiocarpal";
HAnimJoint146.center = new X3D.SFVec3f([0.1984,0.8663,-0.0583]);
HAnimJoint146.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint146.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint146.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint146.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.name = "l_midcarpal_1";
HAnimJoint147.DEF = "hanim_l_midcarpal_1";
HAnimJoint147.center = new X3D.SFVec3f([0.1811,0.6975,-0.0826]);
HAnimJoint147.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint147.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint147.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint147.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.name = "l_carpometacarpal_1";
HAnimJoint148.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint148.center = new X3D.SFVec3f([0.1924,0.8472,-0.0534]);
HAnimJoint148.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint148.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint148.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint148.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.name = "l_metacarpophalangeal_1";
HAnimJoint149.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint149.center = new X3D.SFVec3f([0.1951,0.8226,0.0246]);
HAnimJoint149.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint149.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint149.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint149.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.name = "l_carpal_interphalangeal_1";
HAnimJoint150.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint150.center = new X3D.SFVec3f([0.1955,0.8159,0.0464]);
HAnimJoint150.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint150.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint150.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint150.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint149YYY.children = new X3D.MFNode();

HAnimJoint149ZZZ.children[0] = HAnimJoint150;

HAnimJoint148YYY.children = new X3D.MFNode();

HAnimJoint148ZZZ.children[0] = HAnimJoint149;

HAnimJoint147YYY.children = new X3D.MFNode();

HAnimJoint147ZZZ.children[0] = HAnimJoint148;

HAnimJoint146YYY.children = new X3D.MFNode();

HAnimJoint146ZZZ.children[0] = HAnimJoint147;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.name = "l_midcarpal_2";
HAnimJoint151.DEF = "hanim_l_midcarpal_2";
HAnimJoint151.center = new X3D.SFVec3f([0.1811,0.6984,-0.0935]);
HAnimJoint151.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint151.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint151.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint151.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.name = "l_carpometacarpal_2";
HAnimJoint152.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint152.center = new X3D.SFVec3f([0.1983,0.8024,-0.028]);
HAnimJoint152.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint152.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint152.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint152.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.name = "l_metacarpophalangeal_2";
HAnimJoint153.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint153.center = new X3D.SFVec3f([0.1983,0.7815,-0.028]);
HAnimJoint153.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint153.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint153.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint153.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint154.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint154.center = new X3D.SFVec3f([0.2017,0.7363,-0.0248]);
HAnimJoint154.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint154.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint154.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint154.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint155.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint155.center = new X3D.SFVec3f([0.2028,0.7139,-0.0236]);
HAnimJoint155.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint155.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint155.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint155.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint154YYY.children = new X3D.MFNode();

HAnimJoint154ZZZ.children[0] = HAnimJoint155;

HAnimJoint153YYY.children = new X3D.MFNode();

HAnimJoint153ZZZ.children[0] = HAnimJoint154;

HAnimJoint152YYY.children = new X3D.MFNode();

HAnimJoint152ZZZ.children[0] = HAnimJoint153;

HAnimJoint151YYY.children = new X3D.MFNode();

HAnimJoint151ZZZ.children[0] = HAnimJoint152;

HAnimJoint146ZZZ.children[1] = HAnimJoint151;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.name = "l_midcarpal_3";
HAnimJoint156.DEF = "hanim_l_midcarpal_3";
HAnimJoint156.center = new X3D.SFVec3f([0.1809,0.7,-0.1067]);
HAnimJoint156.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint156.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint156.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint156.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.name = "l_carpometacarpal_3";
HAnimJoint157.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint157.center = new X3D.SFVec3f([0.1987,0.8029,-0.053]);
HAnimJoint157.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint157.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint157.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint157.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.name = "l_metacarpophalangeal_3";
HAnimJoint158.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint158.center = new X3D.SFVec3f([0.1987,0.7818,-0.053]);
HAnimJoint158.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint158.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint158.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint158.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint159.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint159.center = new X3D.SFVec3f([0.2013,0.7273,-0.0503]);
HAnimJoint159.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint159.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint159.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint159.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint160.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint160.center = new X3D.SFVec3f([0.2026,0.7011,-0.0494]);
HAnimJoint160.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint160.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint160.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint160.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint159YYY.children = new X3D.MFNode();

HAnimJoint159ZZZ.children[0] = HAnimJoint160;

HAnimJoint158YYY.children = new X3D.MFNode();

HAnimJoint158ZZZ.children[0] = HAnimJoint159;

HAnimJoint157YYY.children = new X3D.MFNode();

HAnimJoint157ZZZ.children[0] = HAnimJoint158;

HAnimJoint156YYY.children = new X3D.MFNode();

HAnimJoint156ZZZ.children[0] = HAnimJoint157;

HAnimJoint146ZZZ.children[2] = HAnimJoint156;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.name = "l_midcarpal_4_5";
HAnimJoint161.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint161.center = new X3D.SFVec3f([0.1809,0.6973,-0.1276]);
HAnimJoint161.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint161.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint161.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint161.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.name = "l_carpometacarpal_4";
HAnimJoint162.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint162.center = new X3D.SFVec3f([0.1956,0.8019,-0.0794]);
HAnimJoint162.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint162.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint162.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint162.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "l_metacarpophalangeal_4";
HAnimJoint163.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint163.center = new X3D.SFVec3f([0.1956,0.7815,-0.0794]);
HAnimJoint163.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint163.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint163.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint163.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint164.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint164.center = new X3D.SFVec3f([0.1973,0.7287,-0.0777]);
HAnimJoint164.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint164.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint164.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint164.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint165.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint165.center = new X3D.SFVec3f([0.1983,0.7045,-0.0767]);
HAnimJoint165.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint165.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint165.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint165.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint164YYY.children = new X3D.MFNode();

HAnimJoint164ZZZ.children[0] = HAnimJoint165;

HAnimJoint163YYY.children = new X3D.MFNode();

HAnimJoint163ZZZ.children[0] = HAnimJoint164;

HAnimJoint162YYY.children = new X3D.MFNode();

HAnimJoint162ZZZ.children[0] = HAnimJoint163;

HAnimJoint161YYY.children = new X3D.MFNode();

HAnimJoint161ZZZ.children[0] = HAnimJoint162;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.name = "l_carpometacarpal_5";
HAnimJoint166.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint166.center = new X3D.SFVec3f([0.1925,0.8066,-0.1036]);
HAnimJoint166.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint166.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint166.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint166.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.name = "l_metacarpophalangeal_5";
HAnimJoint167.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint167.center = new X3D.SFVec3f([0.1925,0.7866,-0.1036]);
HAnimJoint167.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint167.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint167.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint167.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint168.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint168.center = new X3D.SFVec3f([0.1938,0.7452,-0.1024]);
HAnimJoint168.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint168.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint168.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint168.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint169.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint169.center = new X3D.SFVec3f([0.1948,0.7277,-0.1017]);
HAnimJoint169.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint169.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint169.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint169.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint168YYY.children = new X3D.MFNode();

HAnimJoint168ZZZ.children[0] = HAnimJoint169;

HAnimJoint167YYY.children = new X3D.MFNode();

HAnimJoint167ZZZ.children[0] = HAnimJoint168;

HAnimJoint166YYY.children = new X3D.MFNode();

HAnimJoint166ZZZ.children[0] = HAnimJoint167;

HAnimJoint161ZZZ.children[1] = HAnimJoint166;

HAnimJoint146ZZZ.children[3] = HAnimJoint161;

HAnimJoint145YYY.children = new X3D.MFNode();

HAnimJoint145ZZZ.children[0] = HAnimJoint146;

HAnimJoint144YYY.children = new X3D.MFNode();

HAnimJoint144ZZZ.children[0] = HAnimJoint145;

HAnimJoint143YYY.children = new X3D.MFNode();

HAnimJoint143ZZZ.children[0] = HAnimJoint144;

HAnimJoint142YYY.children = new X3D.MFNode();

HAnimJoint142ZZZ.children[0] = HAnimJoint143;

HAnimJoint126ZZZ.children[1] = HAnimJoint142;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.name = "r_sternoclavicular";
HAnimJoint170.DEF = "hanim_r_sternoclavicular";
HAnimJoint170.center = new X3D.SFVec3f([-0.0694,1.46,-0.033]);
HAnimJoint170.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint170.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint170.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint170.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.name = "r_acromioclavicular";
HAnimJoint171.DEF = "hanim_r_acromioclavicular";
HAnimJoint171.center = new X3D.SFVec3f([-0.0836,1.4281,-0.0401]);
HAnimJoint171.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint171.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint171.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint171.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.name = "r_shoulder";
HAnimJoint172.DEF = "hanim_r_shoulder";
HAnimJoint172.center = new X3D.SFVec3f([-0.1907,1.4407,-0.0325]);
HAnimJoint172.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint172.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint172.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint172.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.name = "r_elbow";
HAnimJoint173.DEF = "hanim_r_elbow";
HAnimJoint173.center = new X3D.SFVec3f([-0.1949,1.1388,-0.062]);
HAnimJoint173.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint173.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint173.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint173.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.name = "r_radiocarpal";
HAnimJoint174.DEF = "hanim_r_radiocarpal";
HAnimJoint174.center = new X3D.SFVec3f([-0.1959,0.8694,-0.0521]);
HAnimJoint174.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint174.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint174.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint174.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.name = "r_midcarpal_1";
HAnimJoint175.DEF = "hanim_r_midcarpal_1";
HAnimJoint175.center = new X3D.SFVec3f([-0.1811,0.6975,-0.0826]);
HAnimJoint175.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint175.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint175.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint175.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.name = "r_carpometacarpal_1";
HAnimJoint176.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint176.center = new X3D.SFVec3f([-0.1899,0.8502,-0.0473]);
HAnimJoint176.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint176.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint176.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint176.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.name = "r_metacarpophalangeal_1";
HAnimJoint177.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint177.center = new X3D.SFVec3f([-0.1874,0.8256,0.0306]);
HAnimJoint177.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint177.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint177.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint177.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.name = "r_carpal_interphalangeal_1";
HAnimJoint178.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint178.center = new X3D.SFVec3f([-0.1864,0.819,0.0506]);
HAnimJoint178.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint178.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint178.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint178.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint177YYY.children = new X3D.MFNode();

HAnimJoint177ZZZ.children[0] = HAnimJoint178;

HAnimJoint176YYY.children = new X3D.MFNode();

HAnimJoint176ZZZ.children[0] = HAnimJoint177;

HAnimJoint175YYY.children = new X3D.MFNode();

HAnimJoint175ZZZ.children[0] = HAnimJoint176;

HAnimJoint174YYY.children = new X3D.MFNode();

HAnimJoint174ZZZ.children[0] = HAnimJoint175;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.name = "r_midcarpal_2";
HAnimJoint179.DEF = "hanim_r_midcarpal_2";
HAnimJoint179.center = new X3D.SFVec3f([-0.1811,0.6984,-0.0935]);
HAnimJoint179.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint179.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint179.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint179.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.name = "r_carpometacarpal_2";
HAnimJoint180.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint180.center = new X3D.SFVec3f([-0.1961,0.8055,-0.0218]);
HAnimJoint180.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint180.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint180.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint180.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.name = "r_metacarpophalangeal_2";
HAnimJoint181.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint181.center = new X3D.SFVec3f([-0.1961,0.7846,-0.0218]);
HAnimJoint181.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint181.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint181.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint181.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint182.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint182.center = new X3D.SFVec3f([-0.1954,0.7393,-0.0185]);
HAnimJoint182.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint182.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint182.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint182.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint183.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint183.center = new X3D.SFVec3f([-0.1945,0.7169,-0.0173]);
HAnimJoint183.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint183.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint183.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint183.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint182YYY.children = new X3D.MFNode();

HAnimJoint182ZZZ.children[0] = HAnimJoint183;

HAnimJoint181YYY.children = new X3D.MFNode();

HAnimJoint181ZZZ.children[0] = HAnimJoint182;

HAnimJoint180YYY.children = new X3D.MFNode();

HAnimJoint180ZZZ.children[0] = HAnimJoint181;

HAnimJoint179YYY.children = new X3D.MFNode();

HAnimJoint179ZZZ.children[0] = HAnimJoint180;

HAnimJoint174ZZZ.children[1] = HAnimJoint179;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.name = "r_midcarpal_3";
HAnimJoint184.DEF = "hanim_r_midcarpal_3";
HAnimJoint184.center = new X3D.SFVec3f([-0.1809,0.7,-0.1067]);
HAnimJoint184.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint184.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint184.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint184.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.name = "r_carpometacarpal_3";
HAnimJoint185.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint185.center = new X3D.SFVec3f([-0.1972,0.806,-0.0468]);
HAnimJoint185.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint185.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint185.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint185.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.name = "r_metacarpophalangeal_3";
HAnimJoint186.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint186.center = new X3D.SFVec3f([-0.1972,0.7849,-0.0468]);
HAnimJoint186.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint186.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint186.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint186.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint187.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint187.center = new X3D.SFVec3f([-0.195,0.7304,-0.0441]);
HAnimJoint187.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint187.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint187.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint187.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint188.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint188.center = new X3D.SFVec3f([-0.1939,0.7042,-0.0432]);
HAnimJoint188.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint188.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint188.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint188.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint187YYY.children = new X3D.MFNode();

HAnimJoint187ZZZ.children[0] = HAnimJoint188;

HAnimJoint186YYY.children = new X3D.MFNode();

HAnimJoint186ZZZ.children[0] = HAnimJoint187;

HAnimJoint185YYY.children = new X3D.MFNode();

HAnimJoint185ZZZ.children[0] = HAnimJoint186;

HAnimJoint184YYY.children = new X3D.MFNode();

HAnimJoint184ZZZ.children[0] = HAnimJoint185;

HAnimJoint174ZZZ.children[2] = HAnimJoint184;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.name = "r_midcarpal_4_5";
HAnimJoint189.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint189.center = new X3D.SFVec3f([-0.1809,0.6973,-0.1276]);
HAnimJoint189.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint189.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint189.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint189.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.name = "r_carpometacarpal_4";
HAnimJoint190.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint190.center = new X3D.SFVec3f([-0.1951,0.8049,-0.0732]);
HAnimJoint190.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint190.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint190.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint190.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.name = "r_metacarpophalangeal_4";
HAnimJoint191.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint191.center = new X3D.SFVec3f([-0.1951,0.7845,-0.0732]);
HAnimJoint191.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint191.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint191.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint191.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint192.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint192.center = new X3D.SFVec3f([-0.192,0.7318,-0.0716]);
HAnimJoint192.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint192.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint192.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint192.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint193.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint193.center = new X3D.SFVec3f([-0.1908,0.7077,-0.0706]);
HAnimJoint193.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint193.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint193.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint193.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint192YYY.children = new X3D.MFNode();

HAnimJoint192ZZZ.children[0] = HAnimJoint193;

HAnimJoint191YYY.children = new X3D.MFNode();

HAnimJoint191ZZZ.children[0] = HAnimJoint192;

HAnimJoint190YYY.children = new X3D.MFNode();

HAnimJoint190ZZZ.children[0] = HAnimJoint191;

HAnimJoint189YYY.children = new X3D.MFNode();

HAnimJoint189ZZZ.children[0] = HAnimJoint190;

let HAnimJoint194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint194.name = "r_carpometacarpal_5";
HAnimJoint194.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint194.center = new X3D.SFVec3f([-0.1926,0.8096,-0.0975]);
HAnimJoint194.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint194.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint194.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint194.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.name = "r_metacarpophalangeal_5";
HAnimJoint195.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint195.center = new X3D.SFVec3f([-0.1926,0.7896,-0.0975]);
HAnimJoint195.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint195.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint195.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint195.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint196.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint196.center = new X3D.SFVec3f([-0.1902,0.7483,-0.0963]);
HAnimJoint196.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint196.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint196.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint196.llimit = new X3D.MFFloat([0,0,0]);
let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint197.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint197.center = new X3D.SFVec3f([-0.1908,0.754,-0.096]);
HAnimJoint197.skinCoordIndex = new X3D.MFInt32([0]);
HAnimJoint197.skinCoordWeight = new X3D.MFFloat([0]);
HAnimJoint197.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint197.llimit = new X3D.MFFloat([0,0,0]);
HAnimJoint196YYY.children = new X3D.MFNode();

HAnimJoint196ZZZ.children[0] = HAnimJoint197;

HAnimJoint195YYY.children = new X3D.MFNode();

HAnimJoint195ZZZ.children[0] = HAnimJoint196;

HAnimJoint194YYY.children = new X3D.MFNode();

HAnimJoint194ZZZ.children[0] = HAnimJoint195;

HAnimJoint189ZZZ.children[1] = HAnimJoint194;

HAnimJoint174ZZZ.children[3] = HAnimJoint189;

HAnimJoint173YYY.children = new X3D.MFNode();

HAnimJoint173ZZZ.children[0] = HAnimJoint174;

HAnimJoint172YYY.children = new X3D.MFNode();

HAnimJoint172ZZZ.children[0] = HAnimJoint173;

HAnimJoint171YYY.children = new X3D.MFNode();

HAnimJoint171ZZZ.children[0] = HAnimJoint172;

HAnimJoint170YYY.children = new X3D.MFNode();

HAnimJoint170ZZZ.children[0] = HAnimJoint171;

HAnimJoint126ZZZ.children[2] = HAnimJoint170;

HAnimJoint125YYY.children = new X3D.MFNode();

HAnimJoint125ZZZ.children[0] = HAnimJoint126;

HAnimJoint124YYY.children = new X3D.MFNode();

HAnimJoint124ZZZ.children[0] = HAnimJoint125;

HAnimJoint123YYY.children = new X3D.MFNode();

HAnimJoint123ZZZ.children[0] = HAnimJoint124;

HAnimJoint122YYY.children = new X3D.MFNode();

HAnimJoint122ZZZ.children[0] = HAnimJoint123;

HAnimJoint121YYY.children = new X3D.MFNode();

HAnimJoint121ZZZ.children[0] = HAnimJoint122;

HAnimJoint120YYY.children = new X3D.MFNode();

HAnimJoint120ZZZ.children[0] = HAnimJoint121;

HAnimJoint119YYY.children = new X3D.MFNode();

HAnimJoint119ZZZ.children[0] = HAnimJoint120;

HAnimJoint118YYY.children = new X3D.MFNode();

HAnimJoint118ZZZ.children[0] = HAnimJoint119;

HAnimJoint117YYY.children = new X3D.MFNode();

HAnimJoint117ZZZ.children[0] = HAnimJoint118;

HAnimJoint116YYY.children = new X3D.MFNode();

HAnimJoint116ZZZ.children[0] = HAnimJoint117;

HAnimJoint115YYY.children = new X3D.MFNode();

HAnimJoint115ZZZ.children[0] = HAnimJoint116;

HAnimJoint114YYY.children = new X3D.MFNode();

HAnimJoint114ZZZ.children[0] = HAnimJoint115;

HAnimJoint113YYY.children = new X3D.MFNode();

HAnimJoint113ZZZ.children[0] = HAnimJoint114;

HAnimJoint112YYY.children = new X3D.MFNode();

HAnimJoint112ZZZ.children[0] = HAnimJoint113;

HAnimJoint111YYY.children = new X3D.MFNode();

HAnimJoint111ZZZ.children[0] = HAnimJoint112;

HAnimJoint110YYY.children = new X3D.MFNode();

HAnimJoint110ZZZ.children[0] = HAnimJoint111;

HAnimJoint52ZZZ.children[1] = HAnimJoint110;

joints[1] = HAnimJoint52;

let HAnimJoint198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint198.USE = "hanim_humanoid_root";
joints[2] = HAnimJoint198;

let HAnimJoint199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint199.USE = "hanim_sacroiliac";
joints[3] = HAnimJoint199;

let HAnimJoint200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint200.USE = "hanim_l_hip";
joints[4] = HAnimJoint200;

let HAnimJoint201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint201.USE = "hanim_l_knee";
joints[5] = HAnimJoint201;

let HAnimJoint202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint202.USE = "hanim_l_talocrural";
joints[6] = HAnimJoint202;

let HAnimJoint203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint203.USE = "hanim_l_talocalcaneonavicular";
joints[7] = HAnimJoint203;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.USE = "hanim_l_cuneonavicular_1";
joints[8] = HAnimJoint204;

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint205.USE = "hanim_l_tarsometatarsal_1";
joints[9] = HAnimJoint205;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.USE = "hanim_l_metatarsophalangeal_1";
joints[10] = HAnimJoint206;

let HAnimJoint207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint207.USE = "hanim_l_tarsal_interphalangeal_1";
joints[11] = HAnimJoint207;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.USE = "hanim_l_cuneonavicular_2";
joints[12] = HAnimJoint208;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.USE = "hanim_l_tarsometatarsal_2";
joints[13] = HAnimJoint209;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.USE = "hanim_l_metatarsophalangeal_2";
joints[14] = HAnimJoint210;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
joints[15] = HAnimJoint211;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.USE = "hanim_l_tarsal_distal_interphalangeal_2";
joints[16] = HAnimJoint212;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.USE = "hanim_l_cuneonavicular_3";
joints[17] = HAnimJoint213;

let HAnimJoint214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint214.USE = "hanim_l_tarsometatarsal_3";
joints[18] = HAnimJoint214;

let HAnimJoint215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint215.USE = "hanim_l_metatarsophalangeal_3";
joints[19] = HAnimJoint215;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
joints[20] = HAnimJoint216;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.USE = "hanim_l_tarsal_distal_interphalangeal_3";
joints[21] = HAnimJoint217;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.USE = "hanim_l_calcaneocuboid";
joints[22] = HAnimJoint218;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.USE = "hanim_l_transversetarsal";
joints[23] = HAnimJoint219;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.USE = "hanim_l_tarsometatarsal_4";
joints[24] = HAnimJoint220;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.USE = "hanim_l_metatarsophalangeal_4";
joints[25] = HAnimJoint221;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
joints[26] = HAnimJoint222;

let HAnimJoint223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint223.USE = "hanim_l_tarsal_distal_interphalangeal_4";
joints[27] = HAnimJoint223;

let HAnimJoint224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint224.USE = "hanim_l_tarsometatarsal_5";
joints[28] = HAnimJoint224;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.USE = "hanim_l_metatarsophalangeal_5";
joints[29] = HAnimJoint225;

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
joints[30] = HAnimJoint226;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.USE = "hanim_l_tarsal_distal_interphalangeal_5";
joints[31] = HAnimJoint227;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.USE = "hanim_r_hip";
joints[32] = HAnimJoint228;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.USE = "hanim_r_knee";
joints[33] = HAnimJoint229;

let HAnimJoint230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint230.USE = "hanim_r_talocrural";
joints[34] = HAnimJoint230;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.USE = "hanim_r_talocalcaneonavicular";
joints[35] = HAnimJoint231;

let HAnimJoint232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint232.USE = "hanim_r_cuneonavicular_1";
joints[36] = HAnimJoint232;

let HAnimJoint233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint233.USE = "hanim_r_tarsometatarsal_1";
joints[37] = HAnimJoint233;

let HAnimJoint234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint234.USE = "hanim_r_metatarsophalangeal_1";
joints[38] = HAnimJoint234;

let HAnimJoint235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint235.USE = "hanim_r_tarsal_interphalangeal_1";
joints[39] = HAnimJoint235;

let HAnimJoint236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint236.USE = "hanim_r_cuneonavicular_2";
joints[40] = HAnimJoint236;

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.USE = "hanim_r_tarsometatarsal_2";
joints[41] = HAnimJoint237;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.USE = "hanim_r_metatarsophalangeal_2";
joints[42] = HAnimJoint238;

let HAnimJoint239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint239.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
joints[43] = HAnimJoint239;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.USE = "hanim_r_tarsal_distal_interphalangeal_2";
joints[44] = HAnimJoint240;

let HAnimJoint241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint241.USE = "hanim_r_cuneonavicular_3";
joints[45] = HAnimJoint241;

let HAnimJoint242 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint242.USE = "hanim_r_tarsometatarsal_3";
joints[46] = HAnimJoint242;

let HAnimJoint243 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint243.USE = "hanim_r_metatarsophalangeal_3";
joints[47] = HAnimJoint243;

let HAnimJoint244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint244.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
joints[48] = HAnimJoint244;

let HAnimJoint245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint245.USE = "hanim_r_tarsal_distal_interphalangeal_3";
joints[49] = HAnimJoint245;

let HAnimJoint246 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint246.USE = "hanim_r_calcaneocuboid";
joints[50] = HAnimJoint246;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.USE = "hanim_r_transversetarsal";
joints[51] = HAnimJoint247;

let HAnimJoint248 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint248.USE = "hanim_r_tarsometatarsal_4";
joints[52] = HAnimJoint248;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.USE = "hanim_r_metatarsophalangeal_4";
joints[53] = HAnimJoint249;

let HAnimJoint250 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint250.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
joints[54] = HAnimJoint250;

let HAnimJoint251 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint251.USE = "hanim_r_tarsal_distal_interphalangeal_4";
joints[55] = HAnimJoint251;

let HAnimJoint252 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint252.USE = "hanim_r_tarsometatarsal_5";
joints[56] = HAnimJoint252;

let HAnimJoint253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint253.USE = "hanim_r_metatarsophalangeal_5";
joints[57] = HAnimJoint253;

let HAnimJoint254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint254.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
joints[58] = HAnimJoint254;

let HAnimJoint255 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint255.USE = "hanim_r_tarsal_distal_interphalangeal_5";
joints[59] = HAnimJoint255;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.USE = "hanim_vl5";
joints[60] = HAnimJoint256;

let HAnimJoint257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint257.USE = "hanim_vl4";
joints[61] = HAnimJoint257;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.USE = "hanim_vl3";
joints[62] = HAnimJoint258;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint259.USE = "hanim_vl2";
joints[63] = HAnimJoint259;

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.USE = "hanim_vl1";
joints[64] = HAnimJoint260;

let HAnimJoint261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint261.USE = "hanim_vt12";
joints[65] = HAnimJoint261;

let HAnimJoint262 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint262.USE = "hanim_vt11";
joints[66] = HAnimJoint262;

let HAnimJoint263 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint263.USE = "hanim_vt10";
joints[67] = HAnimJoint263;

let HAnimJoint264 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint264.USE = "hanim_vt9";
joints[68] = HAnimJoint264;

let HAnimJoint265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint265.USE = "hanim_vt8";
joints[69] = HAnimJoint265;

let HAnimJoint266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint266.USE = "hanim_vt7";
joints[70] = HAnimJoint266;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.USE = "hanim_vt6";
joints[71] = HAnimJoint267;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.USE = "hanim_vt5";
joints[72] = HAnimJoint268;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.USE = "hanim_vt4";
joints[73] = HAnimJoint269;

let HAnimJoint270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint270.USE = "hanim_vt3";
joints[74] = HAnimJoint270;

let HAnimJoint271 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint271.USE = "hanim_vt2";
joints[75] = HAnimJoint271;

let HAnimJoint272 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint272.USE = "hanim_vt1";
joints[76] = HAnimJoint272;

let HAnimJoint273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint273.USE = "hanim_vc7";
joints[77] = HAnimJoint273;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.USE = "hanim_vc6";
joints[78] = HAnimJoint274;

let HAnimJoint275 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint275.USE = "hanim_vc5";
joints[79] = HAnimJoint275;

let HAnimJoint276 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint276.USE = "hanim_vc4";
joints[80] = HAnimJoint276;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.USE = "hanim_vc3";
joints[81] = HAnimJoint277;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.USE = "hanim_vc2";
joints[82] = HAnimJoint278;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.USE = "hanim_vc1";
joints[83] = HAnimJoint279;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.USE = "hanim_skullbase";
joints[84] = HAnimJoint280;

let HAnimJoint281 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint281.USE = "hanim_l_eyelid_joint";
joints[85] = HAnimJoint281;

let HAnimJoint282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint282.USE = "hanim_r_eyelid_joint";
joints[86] = HAnimJoint282;

let HAnimJoint283 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint283.USE = "hanim_l_eyeball_joint";
joints[87] = HAnimJoint283;

let HAnimJoint284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint284.USE = "hanim_r_eyeball_joint";
joints[88] = HAnimJoint284;

let HAnimJoint285 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint285.USE = "hanim_l_eyebrow_joint";
joints[89] = HAnimJoint285;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.USE = "hanim_r_eyebrow_joint";
joints[90] = HAnimJoint286;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.USE = "hanim_temporomandibular";
joints[91] = HAnimJoint287;

let HAnimJoint288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint288.USE = "hanim_l_sternoclavicular";
joints[92] = HAnimJoint288;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.USE = "hanim_l_acromioclavicular";
joints[93] = HAnimJoint289;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.USE = "hanim_l_shoulder";
joints[94] = HAnimJoint290;

let HAnimJoint291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint291.USE = "hanim_l_elbow";
joints[95] = HAnimJoint291;

let HAnimJoint292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint292.USE = "hanim_l_radiocarpal";
joints[96] = HAnimJoint292;

let HAnimJoint293 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint293.USE = "hanim_l_midcarpal_1";
joints[97] = HAnimJoint293;

let HAnimJoint294 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint294.USE = "hanim_l_carpometacarpal_1";
joints[98] = HAnimJoint294;

let HAnimJoint295 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint295.USE = "hanim_l_metacarpophalangeal_1";
joints[99] = HAnimJoint295;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.USE = "hanim_l_carpal_interphalangeal_1";
joints[100] = HAnimJoint296;

let HAnimJoint297 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint297.USE = "hanim_l_midcarpal_2";
joints[101] = HAnimJoint297;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.USE = "hanim_l_carpometacarpal_2";
joints[102] = HAnimJoint298;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.USE = "hanim_l_metacarpophalangeal_2";
joints[103] = HAnimJoint299;

let HAnimJoint300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint300.USE = "hanim_l_carpal_proximal_interphalangeal_2";
joints[104] = HAnimJoint300;

let HAnimJoint301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint301.USE = "hanim_l_carpal_distal_interphalangeal_2";
joints[105] = HAnimJoint301;

let HAnimJoint302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint302.USE = "hanim_l_midcarpal_3";
joints[106] = HAnimJoint302;

let HAnimJoint303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint303.USE = "hanim_l_carpometacarpal_3";
joints[107] = HAnimJoint303;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.USE = "hanim_l_metacarpophalangeal_3";
joints[108] = HAnimJoint304;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.USE = "hanim_l_carpal_proximal_interphalangeal_3";
joints[109] = HAnimJoint305;

let HAnimJoint306 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint306.USE = "hanim_l_carpal_distal_interphalangeal_3";
joints[110] = HAnimJoint306;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.USE = "hanim_l_midcarpal_4_5";
joints[111] = HAnimJoint307;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.USE = "hanim_l_carpometacarpal_4";
joints[112] = HAnimJoint308;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.USE = "hanim_l_metacarpophalangeal_4";
joints[113] = HAnimJoint309;

let HAnimJoint310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint310.USE = "hanim_l_carpal_proximal_interphalangeal_4";
joints[114] = HAnimJoint310;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.USE = "hanim_l_carpal_distal_interphalangeal_4";
joints[115] = HAnimJoint311;

let HAnimJoint312 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint312.USE = "hanim_l_carpometacarpal_5";
joints[116] = HAnimJoint312;

let HAnimJoint313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint313.USE = "hanim_l_metacarpophalangeal_5";
joints[117] = HAnimJoint313;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.USE = "hanim_l_carpal_proximal_interphalangeal_5";
joints[118] = HAnimJoint314;

let HAnimJoint315 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint315.USE = "hanim_l_carpal_distal_interphalangeal_5";
joints[119] = HAnimJoint315;

let HAnimJoint316 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint316.USE = "hanim_r_sternoclavicular";
joints[120] = HAnimJoint316;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.USE = "hanim_r_acromioclavicular";
joints[121] = HAnimJoint317;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.USE = "hanim_r_shoulder";
joints[122] = HAnimJoint318;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.USE = "hanim_r_elbow";
joints[123] = HAnimJoint319;

let HAnimJoint320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint320.USE = "hanim_r_radiocarpal";
joints[124] = HAnimJoint320;

let HAnimJoint321 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint321.USE = "hanim_r_midcarpal_1";
joints[125] = HAnimJoint321;

let HAnimJoint322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint322.USE = "hanim_r_carpometacarpal_1";
joints[126] = HAnimJoint322;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.USE = "hanim_r_metacarpophalangeal_1";
joints[127] = HAnimJoint323;

let HAnimJoint324 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint324.USE = "hanim_r_carpal_interphalangeal_1";
joints[128] = HAnimJoint324;

let HAnimJoint325 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint325.USE = "hanim_r_midcarpal_2";
joints[129] = HAnimJoint325;

let HAnimJoint326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint326.USE = "hanim_r_carpometacarpal_2";
joints[130] = HAnimJoint326;

let HAnimJoint327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint327.USE = "hanim_r_metacarpophalangeal_2";
joints[131] = HAnimJoint327;

let HAnimJoint328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint328.USE = "hanim_r_carpal_proximal_interphalangeal_2";
joints[132] = HAnimJoint328;

let HAnimJoint329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint329.USE = "hanim_r_carpal_distal_interphalangeal_2";
joints[133] = HAnimJoint329;

let HAnimJoint330 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint330.USE = "hanim_r_midcarpal_3";
joints[134] = HAnimJoint330;

let HAnimJoint331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint331.USE = "hanim_r_carpometacarpal_3";
joints[135] = HAnimJoint331;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.USE = "hanim_r_metacarpophalangeal_3";
joints[136] = HAnimJoint332;

let HAnimJoint333 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint333.USE = "hanim_r_carpal_proximal_interphalangeal_3";
joints[137] = HAnimJoint333;

let HAnimJoint334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint334.USE = "hanim_r_carpal_distal_interphalangeal_3";
joints[138] = HAnimJoint334;

let HAnimJoint335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint335.USE = "hanim_r_midcarpal_4_5";
joints[139] = HAnimJoint335;

let HAnimJoint336 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint336.USE = "hanim_r_carpometacarpal_4";
joints[140] = HAnimJoint336;

let HAnimJoint337 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint337.USE = "hanim_r_metacarpophalangeal_4";
joints[141] = HAnimJoint337;

let HAnimJoint338 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint338.USE = "hanim_r_carpal_proximal_interphalangeal_4";
joints[142] = HAnimJoint338;

let HAnimJoint339 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint339.USE = "hanim_r_carpal_distal_interphalangeal_4";
joints[143] = HAnimJoint339;

let HAnimJoint340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint340.USE = "hanim_r_carpometacarpal_5";
joints[144] = HAnimJoint340;

let HAnimJoint341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint341.USE = "hanim_r_metacarpophalangeal_5";
joints[145] = HAnimJoint341;

let HAnimJoint342 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint342.USE = "hanim_r_carpal_proximal_interphalangeal_5";
joints[146] = HAnimJoint342;

let HAnimJoint343 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint343.USE = "hanim_r_carpal_distal_interphalangeal_5";
joints[147] = HAnimJoint343;

browser.currentScene.children[4] = HAnimHumanoid43;

}
main ();
