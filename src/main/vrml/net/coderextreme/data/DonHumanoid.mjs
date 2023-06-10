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

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform12;

let Group17 = browser.currentScene.createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
let Transform18 = browser.currentScene.createNode("Transform");
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,2,0]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.DEF = "HAnimRootShape";
let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 0.02;
Shape20.geometry = Sphere21;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.DEF = "HAnimRootMaterial";
Material23.diffuseColor = new SFColor(new float[0.8,0,0]);
Material23.transparency = 0.3;
Appearance22.material = Material23;

Shape20.appearance = Appearance22;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,2.1,0]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.DEF = "HAnimJointShape";
let Sphere26 = browser.currentScene.createNode("Sphere");
Sphere26.radius = 0.02;
Shape25.geometry = Sphere26;

let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.DEF = "HAnimJointMaterial";
Material28.diffuseColor = new SFColor(new float[0,0,0.8]);
Material28.transparency = 0.3;
Appearance27.material = Material28;

Shape25.appearance = Appearance27;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

Transform18.children[1] = Transform24;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,2.05,0]);
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "HAnimSegmentLine";
let LineSet31 = browser.currentScene.createNode("LineSet");
LineSet31.vertexCount = new MFInt32(new int[2]);
let ColorRGBA32 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA32.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA32.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet31.color = ColorRGBA32;

let Coordinate33 = browser.currentScene.createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet31.coord = Coordinate33;

Shape30.geometry = LineSet31;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

Transform18.children[2] = Transform29;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.translation = new SFVec3f(new float[0,2.1,0]);
let Shape35 = browser.currentScene.createNode("Shape");
Shape35.DEF = "HAnimSiteShape";
let IndexedFaceSet36 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet36.DEF = "DiamondIFS";
IndexedFaceSet36.creaseAngle = 0.5;
IndexedFaceSet36.solid = False;
IndexedFaceSet36.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA37 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA37.DEF = "HAnimSiteColorRGBA";
ColorRGBA37.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet36.color = ColorRGBA37;

let Coordinate38 = browser.currentScene.createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet36.coord = Coordinate38;

Shape35.geometry = IndexedFaceSet36;

let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[1,1,0]);
Material40.transparency = 0.3;
Appearance39.material = Material40;

Shape35.appearance = Appearance39;

Transform34.children = new MFNode();

Transform34.children[0] = Shape35;

Transform18.children[3] = Transform34;

Group17.children = new MFNode();

Group17.children[0] = Transform18;

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
HAnimHumanoid43.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid43.version = "2.0";
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
let Shape44 = browser.currentScene.createNode("Shape");
Shape44.DEF = "SkinShape";
let IndexedFaceSet45 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet45.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
IndexedFaceSet45.creaseAngle = 3.1;
let Coordinate46 = browser.currentScene.createNode("Coordinate");
Coordinate46.DEF = "TheSkinCoord";
Coordinate46.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
IndexedFaceSet45.coord = Coordinate46;

let Color47 = browser.currentScene.createNode("Color");
Color47.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet45.color = Color47;

Shape44.geometry = IndexedFaceSet45;

let Appearance48 = browser.currentScene.createNode("Appearance");
Appearance48.DEF = "SkinAppearance";
let ImageTexture49 = browser.currentScene.createNode("ImageTexture");
ImageTexture49.DEF = "zBlueSpiralBkg2";
ImageTexture49.description = "Blue Spiral Pattern";
ImageTexture49.url = new MFString(new java.lang.String["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance48.texture = ImageTexture49;

let Material50 = browser.currentScene.createNode("Material");
Material50.DEF = "SkinMaterial";
Material50.ambientIntensity = 0.6;
Material50.diffuseColor = new SFColor(new float[1,1,1]);
Material50.shininess = 0.6;
Material50.transparency = 0.2;
Appearance48.material = Material50;

Shape44.appearance = Appearance48;

HAnimHumanoid43.skin = new MFNode();

HAnimHumanoid43.skin[0] = Shape44;

let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.USE = "TheSkinCoord";
HAnimHumanoid43.skinCoord = Coordinate51;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.name = "humanoid_root";
HAnimJoint52.DEF = "hanim_humanoid_root";
HAnimJoint52.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment53 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment53.name = "sacrum";
HAnimSegment53.DEF = "hanim_sacrum";
let Transform54 = browser.currentScene.createNode("Transform");
Transform54.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Transform55 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape56 = browser.currentScene.createNode("Shape");
Shape56.USE = "HAnimJointShape";
Transform55.children = new MFNode();

Transform55.children[0] = Shape56;

Transform54.children = new MFNode();

Transform54.children[0] = Transform55;

HAnimSegment53.children = new MFNode();

HAnimSegment53.children[0] = Transform54;

let Shape57 = browser.currentScene.createNode("Shape");
let LineSet58 = browser.currentScene.createNode("LineSet");
LineSet58.vertexCount = new MFInt32(new int[2]);
let Coordinate59 = browser.currentScene.createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet58.coord = Coordinate59;

//from humanoid_root to sacroiliac vertices 2
let ColorRGBA60 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA60.USE = "HAnimSegmentLineColorRGBA";
LineSet58.color = ColorRGBA60;

Shape57.geometry = LineSet58;

HAnimSegment53.children[1] = Shape57;

let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite61.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
let TouchSensor62 = browser.currentScene.createNode("TouchSensor");
TouchSensor62.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite61.children = new MFNode();

HAnimSite61.children[0] = TouchSensor62;

let Shape63 = browser.currentScene.createNode("Shape");
Shape63.USE = "HAnimSiteShape";
HAnimSite61.children[1] = Shape63;

HAnimSegment53.children[2] = HAnimSite61;

let HAnimSite64 = browser.currentScene.createNode("HAnimSite");
HAnimSite64.name = "crotch_pt";
HAnimSite64.DEF = "hanim_crotch_pt";
HAnimSite64.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
let TouchSensor65 = browser.currentScene.createNode("TouchSensor");
TouchSensor65.description = "HAnimSite crotch_pt";
HAnimSite64.children = new MFNode();

HAnimSite64.children[0] = TouchSensor65;

let Shape66 = browser.currentScene.createNode("Shape");
Shape66.USE = "HAnimSiteShape";
HAnimSite64.children[1] = Shape66;

HAnimSegment53.children[3] = HAnimSite64;

let HAnimSite67 = browser.currentScene.createNode("HAnimSite");
HAnimSite67.name = "l_asis_pt";
HAnimSite67.DEF = "hanim_l_asis_pt";
HAnimSite67.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
let TouchSensor68 = browser.currentScene.createNode("TouchSensor");
TouchSensor68.description = "HAnimSite l_asis_pt";
HAnimSite67.children = new MFNode();

HAnimSite67.children[0] = TouchSensor68;

let Shape69 = browser.currentScene.createNode("Shape");
Shape69.USE = "HAnimSiteShape";
HAnimSite67.children[1] = Shape69;

HAnimSegment53.children[4] = HAnimSite67;

let HAnimSite70 = browser.currentScene.createNode("HAnimSite");
HAnimSite70.name = "l_iliocristale_pt";
HAnimSite70.DEF = "hanim_l_iliocristale_pt";
HAnimSite70.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
let TouchSensor71 = browser.currentScene.createNode("TouchSensor");
TouchSensor71.description = "HAnimSite l_iliocristale_pt";
HAnimSite70.children = new MFNode();

HAnimSite70.children[0] = TouchSensor71;

let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "HAnimSiteShape";
HAnimSite70.children[1] = Shape72;

HAnimSegment53.children[5] = HAnimSite70;

let HAnimSite73 = browser.currentScene.createNode("HAnimSite");
HAnimSite73.name = "l_psis_pt";
HAnimSite73.DEF = "hanim_l_psis_pt";
HAnimSite73.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
let TouchSensor74 = browser.currentScene.createNode("TouchSensor");
TouchSensor74.description = "HAnimSite l_psis_pt";
HAnimSite73.children = new MFNode();

HAnimSite73.children[0] = TouchSensor74;

let Shape75 = browser.currentScene.createNode("Shape");
Shape75.USE = "HAnimSiteShape";
HAnimSite73.children[1] = Shape75;

HAnimSegment53.children[6] = HAnimSite73;

let HAnimSite76 = browser.currentScene.createNode("HAnimSite");
HAnimSite76.name = "l_trochanterion_pt";
HAnimSite76.DEF = "hanim_l_trochanterion_pt";
HAnimSite76.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
let TouchSensor77 = browser.currentScene.createNode("TouchSensor");
TouchSensor77.description = "HAnimSite l_trochanterion_pt";
HAnimSite76.children = new MFNode();

HAnimSite76.children[0] = TouchSensor77;

let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "HAnimSiteShape";
HAnimSite76.children[1] = Shape78;

HAnimSegment53.children[7] = HAnimSite76;

let HAnimSite79 = browser.currentScene.createNode("HAnimSite");
HAnimSite79.name = "r_asis_pt";
HAnimSite79.DEF = "hanim_r_asis_pt";
HAnimSite79.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
let TouchSensor80 = browser.currentScene.createNode("TouchSensor");
TouchSensor80.description = "HAnimSite r_asis_pt";
HAnimSite79.children = new MFNode();

HAnimSite79.children[0] = TouchSensor80;

let Shape81 = browser.currentScene.createNode("Shape");
Shape81.USE = "HAnimSiteShape";
HAnimSite79.children[1] = Shape81;

HAnimSegment53.children[8] = HAnimSite79;

let HAnimSite82 = browser.currentScene.createNode("HAnimSite");
HAnimSite82.name = "r_iliocristale_pt";
HAnimSite82.DEF = "hanim_r_iliocristale_pt";
HAnimSite82.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
let TouchSensor83 = browser.currentScene.createNode("TouchSensor");
TouchSensor83.description = "HAnimSite r_iliocristale_pt";
HAnimSite82.children = new MFNode();

HAnimSite82.children[0] = TouchSensor83;

let Shape84 = browser.currentScene.createNode("Shape");
Shape84.USE = "HAnimSiteShape";
HAnimSite82.children[1] = Shape84;

HAnimSegment53.children[9] = HAnimSite82;

let HAnimSite85 = browser.currentScene.createNode("HAnimSite");
HAnimSite85.name = "r_psis_pt";
HAnimSite85.DEF = "hanim_r_psis_pt";
HAnimSite85.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
let TouchSensor86 = browser.currentScene.createNode("TouchSensor");
TouchSensor86.description = "HAnimSite r_psis_pt";
HAnimSite85.children = new MFNode();

HAnimSite85.children[0] = TouchSensor86;

let Shape87 = browser.currentScene.createNode("Shape");
Shape87.USE = "HAnimSiteShape";
HAnimSite85.children[1] = Shape87;

HAnimSegment53.children[10] = HAnimSite85;

let HAnimSite88 = browser.currentScene.createNode("HAnimSite");
HAnimSite88.name = "r_trochanterion_pt";
HAnimSite88.DEF = "hanim_r_trochanterion_pt";
HAnimSite88.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
let TouchSensor89 = browser.currentScene.createNode("TouchSensor");
TouchSensor89.description = "HAnimSite r_trochanterion_pt";
HAnimSite88.children = new MFNode();

HAnimSite88.children[0] = TouchSensor89;

let Shape90 = browser.currentScene.createNode("Shape");
Shape90.USE = "HAnimSiteShape";
HAnimSite88.children[1] = Shape90;

HAnimSegment53.children[11] = HAnimSite88;

let Shape91 = browser.currentScene.createNode("Shape");
let LineSet92 = browser.currentScene.createNode("LineSet");
LineSet92.vertexCount = new MFInt32(new int[2]);
let Coordinate93 = browser.currentScene.createNode("Coordinate");
Coordinate93.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet92.coord = Coordinate93;

//from humanoid_root to vl5 vertices 2
let ColorRGBA94 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA94.USE = "HAnimSegmentLineColorRGBA";
LineSet92.color = ColorRGBA94;

Shape91.geometry = LineSet92;

HAnimSegment53.children[12] = Shape91;

let HAnimSite95 = browser.currentScene.createNode("HAnimSite");
HAnimSite95.name = "navel_pt";
HAnimSite95.DEF = "hanim_navel_pt";
HAnimSite95.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
let TouchSensor96 = browser.currentScene.createNode("TouchSensor");
TouchSensor96.description = "HAnimSite navel_pt";
HAnimSite95.children = new MFNode();

HAnimSite95.children[0] = TouchSensor96;

let Shape97 = browser.currentScene.createNode("Shape");
Shape97.USE = "HAnimSiteShape";
HAnimSite95.children[1] = Shape97;

HAnimSegment53.children[13] = HAnimSite95;

let HAnimSite98 = browser.currentScene.createNode("HAnimSite");
HAnimSite98.name = "waist_preferred_anterior_pt";
HAnimSite98.DEF = "hanim_waist_preferred_anterior_pt";
let TouchSensor99 = browser.currentScene.createNode("TouchSensor");
TouchSensor99.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite98.children = new MFNode();

HAnimSite98.children[0] = TouchSensor99;

let Shape100 = browser.currentScene.createNode("Shape");
Shape100.USE = "HAnimSiteShape";
HAnimSite98.children[1] = Shape100;

HAnimSegment53.children[14] = HAnimSite98;

let HAnimSite101 = browser.currentScene.createNode("HAnimSite");
HAnimSite101.name = "waist_preferred_posterior_pt";
HAnimSite101.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite101.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
let TouchSensor102 = browser.currentScene.createNode("TouchSensor");
TouchSensor102.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite101.children = new MFNode();

HAnimSite101.children[0] = TouchSensor102;

let Shape103 = browser.currentScene.createNode("Shape");
Shape103.USE = "HAnimSiteShape";
HAnimSite101.children[1] = Shape103;

HAnimSegment53.children[15] = HAnimSite101;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "sacroiliac";
HAnimJoint104.DEF = "hanim_sacroiliac";
HAnimJoint104.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint104.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment105.name = "pelvis";
HAnimSegment105.DEF = "hanim_pelvis";
let Transform106 = browser.currentScene.createNode("Transform");
Transform106.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Transform107 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape108 = browser.currentScene.createNode("Shape");
Shape108.USE = "HAnimJointShape";
Transform107.children = new MFNode();

Transform107.children[0] = Shape108;

Transform106.children = new MFNode();

Transform106.children[0] = Transform107;

HAnimSegment105.children = new MFNode();

HAnimSegment105.children[0] = Transform106;

let Shape109 = browser.currentScene.createNode("Shape");
let LineSet110 = browser.currentScene.createNode("LineSet");
LineSet110.vertexCount = new MFInt32(new int[2]);
let Coordinate111 = browser.currentScene.createNode("Coordinate");
Coordinate111.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet110.coord = Coordinate111;

//from sacroiliac to l_hip vertices 2
let ColorRGBA112 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA112.USE = "HAnimSegmentLineColorRGBA";
LineSet110.color = ColorRGBA112;

Shape109.geometry = LineSet110;

HAnimSegment105.children[1] = Shape109;

let HAnimSite113 = browser.currentScene.createNode("HAnimSite");
HAnimSite113.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite113.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite113.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
let TouchSensor114 = browser.currentScene.createNode("TouchSensor");
TouchSensor114.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = TouchSensor114;

let Shape115 = browser.currentScene.createNode("Shape");
Shape115.USE = "HAnimSiteShape";
HAnimSite113.children[1] = Shape115;

HAnimSegment105.children[2] = HAnimSite113;

let HAnimSite116 = browser.currentScene.createNode("HAnimSite");
HAnimSite116.name = "l_femoral_medial_epicondyles_pt";
HAnimSite116.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite116.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
let TouchSensor117 = browser.currentScene.createNode("TouchSensor");
TouchSensor117.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite116.children = new MFNode();

HAnimSite116.children[0] = TouchSensor117;

let Shape118 = browser.currentScene.createNode("Shape");
Shape118.USE = "HAnimSiteShape";
HAnimSite116.children[1] = Shape118;

HAnimSegment105.children[3] = HAnimSite116;

let HAnimSite119 = browser.currentScene.createNode("HAnimSite");
HAnimSite119.name = "l_knee_crease_pt";
HAnimSite119.DEF = "hanim_l_knee_crease_pt";
HAnimSite119.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
let TouchSensor120 = browser.currentScene.createNode("TouchSensor");
TouchSensor120.description = "HAnimSite l_knee_crease_pt";
HAnimSite119.children = new MFNode();

HAnimSite119.children[0] = TouchSensor120;

let Shape121 = browser.currentScene.createNode("Shape");
Shape121.USE = "HAnimSiteShape";
HAnimSite119.children[1] = Shape121;

HAnimSegment105.children[4] = HAnimSite119;

let HAnimSite122 = browser.currentScene.createNode("HAnimSite");
HAnimSite122.name = "l_suprapatella_pt";
HAnimSite122.DEF = "hanim_l_suprapatella_pt";
let TouchSensor123 = browser.currentScene.createNode("TouchSensor");
TouchSensor123.description = "HAnimSite l_suprapatella_pt";
HAnimSite122.children = new MFNode();

HAnimSite122.children[0] = TouchSensor123;

let Shape124 = browser.currentScene.createNode("Shape");
Shape124.USE = "HAnimSiteShape";
HAnimSite122.children[1] = Shape124;

HAnimSegment105.children[5] = HAnimSite122;

let Shape125 = browser.currentScene.createNode("Shape");
let LineSet126 = browser.currentScene.createNode("LineSet");
LineSet126.vertexCount = new MFInt32(new int[2]);
let Coordinate127 = browser.currentScene.createNode("Coordinate");
Coordinate127.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet126.coord = Coordinate127;

//from sacroiliac to r_hip vertices 2
let ColorRGBA128 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA128.USE = "HAnimSegmentLineColorRGBA";
LineSet126.color = ColorRGBA128;

Shape125.geometry = LineSet126;

HAnimSegment105.children[6] = Shape125;

let HAnimSite129 = browser.currentScene.createNode("HAnimSite");
HAnimSite129.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite129.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite129.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
let TouchSensor130 = browser.currentScene.createNode("TouchSensor");
TouchSensor130.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = TouchSensor130;

let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "HAnimSiteShape";
HAnimSite129.children[1] = Shape131;

HAnimSegment105.children[7] = HAnimSite129;

let HAnimSite132 = browser.currentScene.createNode("HAnimSite");
HAnimSite132.name = "r_femoral_medial_epicondyles_pt";
HAnimSite132.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite132.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
let TouchSensor133 = browser.currentScene.createNode("TouchSensor");
TouchSensor133.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

let Shape134 = browser.currentScene.createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

HAnimSegment105.children[8] = HAnimSite132;

let HAnimSite135 = browser.currentScene.createNode("HAnimSite");
HAnimSite135.name = "r_knee_crease_pt";
HAnimSite135.DEF = "hanim_r_knee_crease_pt";
HAnimSite135.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
let TouchSensor136 = browser.currentScene.createNode("TouchSensor");
TouchSensor136.description = "HAnimSite r_knee_crease_pt";
HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = TouchSensor136;

let Shape137 = browser.currentScene.createNode("Shape");
Shape137.USE = "HAnimSiteShape";
HAnimSite135.children[1] = Shape137;

HAnimSegment105.children[9] = HAnimSite135;

let HAnimSite138 = browser.currentScene.createNode("HAnimSite");
HAnimSite138.name = "r_suprapatella_pt";
HAnimSite138.DEF = "hanim_r_suprapatella_pt";
let TouchSensor139 = browser.currentScene.createNode("TouchSensor");
TouchSensor139.description = "HAnimSite r_suprapatella_pt";
HAnimSite138.children = new MFNode();

HAnimSite138.children[0] = TouchSensor139;

let Shape140 = browser.currentScene.createNode("Shape");
Shape140.USE = "HAnimSiteShape";
HAnimSite138.children[1] = Shape140;

HAnimSegment105.children[10] = HAnimSite138;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimSegment105;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.name = "l_hip";
HAnimJoint141.DEF = "hanim_l_hip";
HAnimJoint141.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint141.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint141.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment142 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment142.name = "l_thigh";
HAnimSegment142.DEF = "hanim_l_thigh";
let Transform143 = browser.currentScene.createNode("Transform");
Transform143.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Transform144 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape145 = browser.currentScene.createNode("Shape");
Shape145.USE = "HAnimJointShape";
Transform144.children = new MFNode();

Transform144.children[0] = Shape145;

Transform143.children = new MFNode();

Transform143.children[0] = Transform144;

HAnimSegment142.children = new MFNode();

HAnimSegment142.children[0] = Transform143;

let Shape146 = browser.currentScene.createNode("Shape");
let LineSet147 = browser.currentScene.createNode("LineSet");
LineSet147.vertexCount = new MFInt32(new int[2]);
let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet147.coord = Coordinate148;

//from l_hip to l_knee vertices 2
let ColorRGBA149 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA149.USE = "HAnimSegmentLineColorRGBA";
LineSet147.color = ColorRGBA149;

Shape146.geometry = LineSet147;

HAnimSegment142.children[1] = Shape146;

let HAnimSite150 = browser.currentScene.createNode("HAnimSite");
HAnimSite150.name = "l_lateral_malleolus_pt";
HAnimSite150.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite150.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
let TouchSensor151 = browser.currentScene.createNode("TouchSensor");
TouchSensor151.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite150.children = new MFNode();

HAnimSite150.children[0] = TouchSensor151;

let Shape152 = browser.currentScene.createNode("Shape");
Shape152.USE = "HAnimSiteShape";
HAnimSite150.children[1] = Shape152;

HAnimSegment142.children[2] = HAnimSite150;

let HAnimSite153 = browser.currentScene.createNode("HAnimSite");
HAnimSite153.name = "l_medial_malleolus_pt";
HAnimSite153.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite153.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
let TouchSensor154 = browser.currentScene.createNode("TouchSensor");
TouchSensor154.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite153.children = new MFNode();

HAnimSite153.children[0] = TouchSensor154;

let Shape155 = browser.currentScene.createNode("Shape");
Shape155.USE = "HAnimSiteShape";
HAnimSite153.children[1] = Shape155;

HAnimSegment142.children[3] = HAnimSite153;

let HAnimSite156 = browser.currentScene.createNode("HAnimSite");
HAnimSite156.name = "l_tibiale_pt";
HAnimSite156.DEF = "hanim_l_tibiale_pt";
let TouchSensor157 = browser.currentScene.createNode("TouchSensor");
TouchSensor157.description = "HAnimSite l_tibiale_pt";
HAnimSite156.children = new MFNode();

HAnimSite156.children[0] = TouchSensor157;

let Shape158 = browser.currentScene.createNode("Shape");
Shape158.USE = "HAnimSiteShape";
HAnimSite156.children[1] = Shape158;

HAnimSegment142.children[4] = HAnimSite156;

HAnimJoint141.children = new MFNode();

HAnimJoint141.children[0] = HAnimSegment142;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.name = "l_knee";
HAnimJoint159.DEF = "hanim_l_knee";
HAnimJoint159.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint159.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint159.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment160 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment160.name = "l_calf";
HAnimSegment160.DEF = "hanim_l_calf";
let Transform161 = browser.currentScene.createNode("Transform");
Transform161.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Transform162 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape163 = browser.currentScene.createNode("Shape");
Shape163.USE = "HAnimJointShape";
Transform162.children = new MFNode();

Transform162.children[0] = Shape163;

Transform161.children = new MFNode();

Transform161.children[0] = Transform162;

HAnimSegment160.children = new MFNode();

HAnimSegment160.children[0] = Transform161;

let Shape164 = browser.currentScene.createNode("Shape");
let LineSet165 = browser.currentScene.createNode("LineSet");
LineSet165.vertexCount = new MFInt32(new int[2]);
let Coordinate166 = browser.currentScene.createNode("Coordinate");
Coordinate166.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet165.coord = Coordinate166;

//from l_knee to l_talocrural vertices 2
let ColorRGBA167 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA167.USE = "HAnimSegmentLineColorRGBA";
LineSet165.color = ColorRGBA167;

Shape164.geometry = LineSet165;

HAnimSegment160.children[1] = Shape164;

let HAnimSite168 = browser.currentScene.createNode("HAnimSite");
HAnimSite168.name = "l_calcaneus_posterior_pt";
HAnimSite168.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite168.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
let TouchSensor169 = browser.currentScene.createNode("TouchSensor");
TouchSensor169.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite168.children = new MFNode();

HAnimSite168.children[0] = TouchSensor169;

let Shape170 = browser.currentScene.createNode("Shape");
Shape170.USE = "HAnimSiteShape";
HAnimSite168.children[1] = Shape170;

HAnimSegment160.children[2] = HAnimSite168;

let HAnimSite171 = browser.currentScene.createNode("HAnimSite");
HAnimSite171.name = "l_sphyrion_pt";
HAnimSite171.DEF = "hanim_l_sphyrion_pt";
HAnimSite171.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
let TouchSensor172 = browser.currentScene.createNode("TouchSensor");
TouchSensor172.description = "HAnimSite l_sphyrion_pt";
HAnimSite171.children = new MFNode();

HAnimSite171.children[0] = TouchSensor172;

let Shape173 = browser.currentScene.createNode("Shape");
Shape173.USE = "HAnimSiteShape";
HAnimSite171.children[1] = Shape173;

HAnimSegment160.children[3] = HAnimSite171;

HAnimJoint159.children = new MFNode();

HAnimJoint159.children[0] = HAnimSegment160;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.name = "l_talocrural";
HAnimJoint174.DEF = "hanim_l_talocrural";
HAnimJoint174.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint174.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint174.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment175.name = "l_talus";
HAnimSegment175.DEF = "hanim_l_talus";
let Transform176 = browser.currentScene.createNode("Transform");
Transform176.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform176.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform176.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
let Transform177 = browser.currentScene.createNode("Transform");
//Empty Transform left foot
let Shape178 = browser.currentScene.createNode("Shape");
Shape178.USE = "HAnimJointShape";
Transform177.children = new MFNode();

Transform177.children[0] = Shape178;

Transform176.children = new MFNode();

Transform176.children[0] = Transform177;

HAnimSegment175.children = new MFNode();

HAnimSegment175.children[0] = Transform176;

let Shape179 = browser.currentScene.createNode("Shape");
let LineSet180 = browser.currentScene.createNode("LineSet");
LineSet180.vertexCount = new MFInt32(new int[2]);
let Coordinate181 = browser.currentScene.createNode("Coordinate");
Coordinate181.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1101,0.0656,-0.0736]);
LineSet180.coord = Coordinate181;

//from l_talocrural to l_talocalcaneonavicular vertices 2
let ColorRGBA182 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA182.USE = "HAnimSegmentLineColorRGBA";
LineSet180.color = ColorRGBA182;

Shape179.geometry = LineSet180;

HAnimSegment175.children[1] = Shape179;

let Shape183 = browser.currentScene.createNode("Shape");
let LineSet184 = browser.currentScene.createNode("LineSet");
LineSet184.vertexCount = new MFInt32(new int[2]);
let Coordinate185 = browser.currentScene.createNode("Coordinate");
Coordinate185.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1101,0.0656,-0.0736]);
LineSet184.coord = Coordinate185;

//from l_talocrural to l_calcaneocuboid vertices 2
let ColorRGBA186 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA186.USE = "HAnimSegmentLineColorRGBA";
LineSet184.color = ColorRGBA186;

Shape183.geometry = LineSet184;

HAnimSegment175.children[2] = Shape183;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.name = "l_talocalcaneonavicular";
HAnimJoint187.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint187.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint187.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment188 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment188.name = "l_navicular";
HAnimSegment188.DEF = "hanim_l_navicular";
let Transform189 = browser.currentScene.createNode("Transform");
Transform189.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform190 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape191 = browser.currentScene.createNode("Shape");
Shape191.USE = "HAnimJointShape";
Transform190.children = new MFNode();

Transform190.children[0] = Shape191;

Transform189.children = new MFNode();

Transform189.children[0] = Transform190;

HAnimSegment188.children = new MFNode();

HAnimSegment188.children[0] = Transform189;

let Shape192 = browser.currentScene.createNode("Shape");
let LineSet193 = browser.currentScene.createNode("LineSet");
LineSet193.vertexCount = new MFInt32(new int[2]);
let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet193.coord = Coordinate194;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 1
let ColorRGBA195 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA195.USE = "HAnimSegmentLineColorRGBA";
LineSet193.color = ColorRGBA195;

Shape192.geometry = LineSet193;

HAnimSegment188.children[1] = Shape192;

let Shape196 = browser.currentScene.createNode("Shape");
let LineSet197 = browser.currentScene.createNode("LineSet");
LineSet197.vertexCount = new MFInt32(new int[2]);
let Coordinate198 = browser.currentScene.createNode("Coordinate");
Coordinate198.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet197.coord = Coordinate198;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 1
let ColorRGBA199 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA199.USE = "HAnimSegmentLineColorRGBA";
LineSet197.color = ColorRGBA199;

Shape196.geometry = LineSet197;

HAnimSegment188.children[2] = Shape196;

let Shape200 = browser.currentScene.createNode("Shape");
let LineSet201 = browser.currentScene.createNode("LineSet");
LineSet201.vertexCount = new MFInt32(new int[2]);
let Coordinate202 = browser.currentScene.createNode("Coordinate");
Coordinate202.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet201.coord = Coordinate202;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 1
let ColorRGBA203 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA203.USE = "HAnimSegmentLineColorRGBA";
LineSet201.color = ColorRGBA203;

Shape200.geometry = LineSet201;

HAnimSegment188.children[3] = Shape200;

HAnimJoint187.children = new MFNode();

HAnimJoint187.children[0] = HAnimSegment188;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.name = "l_cuneonavicular_1";
HAnimJoint204.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint204.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint204.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment205.name = "l_cuneiform_1";
HAnimSegment205.DEF = "hanim_l_cuneiform_1";
let Transform206 = browser.currentScene.createNode("Transform");
Transform206.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform207 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape208 = browser.currentScene.createNode("Shape");
Shape208.USE = "HAnimJointShape";
Transform207.children = new MFNode();

Transform207.children[0] = Shape208;

Transform206.children = new MFNode();

Transform206.children[0] = Transform207;

HAnimSegment205.children = new MFNode();

HAnimSegment205.children[0] = Transform206;

let Shape209 = browser.currentScene.createNode("Shape");
let LineSet210 = browser.currentScene.createNode("LineSet");
LineSet210.vertexCount = new MFInt32(new int[2]);
let Coordinate211 = browser.currentScene.createNode("Coordinate");
Coordinate211.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet210.coord = Coordinate211;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 1
let ColorRGBA212 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA212.USE = "HAnimSegmentLineColorRGBA";
LineSet210.color = ColorRGBA212;

Shape209.geometry = LineSet210;

HAnimSegment205.children[1] = Shape209;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.name = "l_tarsometatarsal_1";
HAnimJoint213.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment214 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment214.name = "l_metatarsal_1";
HAnimSegment214.DEF = "hanim_l_metatarsal_1";
let Transform215 = browser.currentScene.createNode("Transform");
Transform215.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform216 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape217 = browser.currentScene.createNode("Shape");
Shape217.USE = "HAnimJointShape";
Transform216.children = new MFNode();

Transform216.children[0] = Shape217;

Transform215.children = new MFNode();

Transform215.children[0] = Transform216;

HAnimSegment214.children = new MFNode();

HAnimSegment214.children[0] = Transform215;

let Shape218 = browser.currentScene.createNode("Shape");
let LineSet219 = browser.currentScene.createNode("LineSet");
LineSet219.vertexCount = new MFInt32(new int[2]);
let Coordinate220 = browser.currentScene.createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet219.coord = Coordinate220;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 1
let ColorRGBA221 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA221.USE = "HAnimSegmentLineColorRGBA";
LineSet219.color = ColorRGBA221;

Shape218.geometry = LineSet219;

HAnimSegment214.children[1] = Shape218;

let HAnimSite222 = browser.currentScene.createNode("HAnimSite");
HAnimSite222.name = "l_metatarsal_phalanx_1_pt";
HAnimSite222.DEF = "hanim_l_metatarsal_phalanx_1_pt";
let TouchSensor223 = browser.currentScene.createNode("TouchSensor");
TouchSensor223.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite222.children = new MFNode();

HAnimSite222.children[0] = TouchSensor223;

let Shape224 = browser.currentScene.createNode("Shape");
Shape224.USE = "HAnimSiteShape";
HAnimSite222.children[1] = Shape224;

HAnimSegment214.children[2] = HAnimSite222;

HAnimJoint213.children = new MFNode();

HAnimJoint213.children[0] = HAnimSegment214;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.name = "l_metatarsophalangeal_1";
HAnimJoint225.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint225.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint225.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment226 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment226.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment226.DEF = "hanim_l_tarsal_proximal_phalanx_1";
let Transform227 = browser.currentScene.createNode("Transform");
Transform227.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform228 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape229 = browser.currentScene.createNode("Shape");
Shape229.USE = "HAnimJointShape";
Transform228.children = new MFNode();

Transform228.children[0] = Shape229;

Transform227.children = new MFNode();

Transform227.children[0] = Transform228;

HAnimSegment226.children = new MFNode();

HAnimSegment226.children[0] = Transform227;

let Shape230 = browser.currentScene.createNode("Shape");
let LineSet231 = browser.currentScene.createNode("LineSet");
LineSet231.vertexCount = new MFInt32(new int[2]);
let Coordinate232 = browser.currentScene.createNode("Coordinate");
Coordinate232.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet231.coord = Coordinate232;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 1
let ColorRGBA233 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA233.USE = "HAnimSegmentLineColorRGBA";
LineSet231.color = ColorRGBA233;

Shape230.geometry = LineSet231;

HAnimSegment226.children[1] = Shape230;

let HAnimSite234 = browser.currentScene.createNode("HAnimSite");
HAnimSite234.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite234.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
let TouchSensor235 = browser.currentScene.createNode("TouchSensor");
TouchSensor235.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite234.children = new MFNode();

HAnimSite234.children[0] = TouchSensor235;

let Shape236 = browser.currentScene.createNode("Shape");
Shape236.USE = "HAnimSiteShape";
HAnimSite234.children[1] = Shape236;

HAnimSegment226.children[2] = HAnimSite234;

HAnimJoint225.children = new MFNode();

HAnimJoint225.children[0] = HAnimSegment226;

let HAnimJoint237 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint237.name = "l_tarsal_interphalangeal_1";
HAnimJoint237.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint237.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint237.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint225.children[1] = HAnimJoint237;

HAnimJoint213.children[1] = HAnimJoint225;

HAnimJoint204.children[1] = HAnimJoint213;

HAnimJoint187.children[1] = HAnimJoint204;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.name = "l_cuneonavicular_2";
HAnimJoint238.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint238.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint238.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment239.name = "l_cuneiform_2";
HAnimSegment239.DEF = "hanim_l_cuneiform_2";
let Transform240 = browser.currentScene.createNode("Transform");
Transform240.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform241 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape242 = browser.currentScene.createNode("Shape");
Shape242.USE = "HAnimJointShape";
Transform241.children = new MFNode();

Transform241.children[0] = Shape242;

Transform240.children = new MFNode();

Transform240.children[0] = Transform241;

HAnimSegment239.children = new MFNode();

HAnimSegment239.children[0] = Transform240;

let Shape243 = browser.currentScene.createNode("Shape");
let LineSet244 = browser.currentScene.createNode("LineSet");
LineSet244.vertexCount = new MFInt32(new int[2]);
let Coordinate245 = browser.currentScene.createNode("Coordinate");
Coordinate245.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet244.coord = Coordinate245;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 1
let ColorRGBA246 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA246.USE = "HAnimSegmentLineColorRGBA";
LineSet244.color = ColorRGBA246;

Shape243.geometry = LineSet244;

HAnimSegment239.children[1] = Shape243;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.name = "l_tarsometatarsal_2";
HAnimJoint247.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint247.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint247.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment248.name = "l_metatarsal_2";
HAnimSegment248.DEF = "hanim_l_metatarsal_2";
let Transform249 = browser.currentScene.createNode("Transform");
Transform249.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform250 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape251 = browser.currentScene.createNode("Shape");
Shape251.USE = "HAnimJointShape";
Transform250.children = new MFNode();

Transform250.children[0] = Shape251;

Transform249.children = new MFNode();

Transform249.children[0] = Transform250;

HAnimSegment248.children = new MFNode();

HAnimSegment248.children[0] = Transform249;

let Shape252 = browser.currentScene.createNode("Shape");
let LineSet253 = browser.currentScene.createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[2]);
let Coordinate254 = browser.currentScene.createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet253.coord = Coordinate254;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 1
let ColorRGBA255 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA255.USE = "HAnimSegmentLineColorRGBA";
LineSet253.color = ColorRGBA255;

Shape252.geometry = LineSet253;

HAnimSegment248.children[1] = Shape252;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.name = "l_metatarsophalangeal_2";
HAnimJoint256.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint256.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment257 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment257.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment257.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform258 = browser.currentScene.createNode("Transform");
Transform258.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform259 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape260 = browser.currentScene.createNode("Shape");
Shape260.USE = "HAnimJointShape";
Transform259.children = new MFNode();

Transform259.children[0] = Shape260;

Transform258.children = new MFNode();

Transform258.children[0] = Transform259;

HAnimSegment257.children = new MFNode();

HAnimSegment257.children[0] = Transform258;

let Shape261 = browser.currentScene.createNode("Shape");
let LineSet262 = browser.currentScene.createNode("LineSet");
LineSet262.vertexCount = new MFInt32(new int[2]);
let Coordinate263 = browser.currentScene.createNode("Coordinate");
Coordinate263.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet262.coord = Coordinate263;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 1
let ColorRGBA264 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA264.USE = "HAnimSegmentLineColorRGBA";
LineSet262.color = ColorRGBA264;

Shape261.geometry = LineSet262;

HAnimSegment257.children[1] = Shape261;

HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

let HAnimJoint265 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint265.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint265.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint265.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint265.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment266 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment266.name = "l_tarsal_middle_phalanx_2";
HAnimSegment266.DEF = "hanim_l_tarsal_middle_phalanx_2";
let Transform267 = browser.currentScene.createNode("Transform");
Transform267.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform268 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape269 = browser.currentScene.createNode("Shape");
Shape269.USE = "HAnimJointShape";
Transform268.children = new MFNode();

Transform268.children[0] = Shape269;

Transform267.children = new MFNode();

Transform267.children[0] = Transform268;

HAnimSegment266.children = new MFNode();

HAnimSegment266.children[0] = Transform267;

let Shape270 = browser.currentScene.createNode("Shape");
let LineSet271 = browser.currentScene.createNode("LineSet");
LineSet271.vertexCount = new MFInt32(new int[2]);
let Coordinate272 = browser.currentScene.createNode("Coordinate");
Coordinate272.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet271.coord = Coordinate272;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 1
let ColorRGBA273 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA273.USE = "HAnimSegmentLineColorRGBA";
LineSet271.color = ColorRGBA273;

Shape270.geometry = LineSet271;

HAnimSegment266.children[1] = Shape270;

let HAnimSite274 = browser.currentScene.createNode("HAnimSite");
HAnimSite274.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite274.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite274.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
let TouchSensor275 = browser.currentScene.createNode("TouchSensor");
TouchSensor275.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite274.children = new MFNode();

HAnimSite274.children[0] = TouchSensor275;

let Shape276 = browser.currentScene.createNode("Shape");
Shape276.USE = "HAnimSiteShape";
HAnimSite274.children[1] = Shape276;

HAnimSegment266.children[2] = HAnimSite274;

HAnimJoint265.children = new MFNode();

HAnimJoint265.children[0] = HAnimSegment266;

let HAnimJoint277 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint277.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint277.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint277.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint277.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint265.children[1] = HAnimJoint277;

HAnimJoint256.children[1] = HAnimJoint265;

HAnimJoint247.children[1] = HAnimJoint256;

HAnimJoint238.children[1] = HAnimJoint247;

HAnimJoint187.children[2] = HAnimJoint238;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.name = "l_cuneonavicular_3";
HAnimJoint278.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint278.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint278.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.name = "l_cuneiform_3";
HAnimSegment279.DEF = "hanim_l_cuneiform_3";
let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform281 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape282 = browser.currentScene.createNode("Shape");
Shape282.USE = "HAnimJointShape";
Transform281.children = new MFNode();

Transform281.children[0] = Shape282;

Transform280.children = new MFNode();

Transform280.children[0] = Transform281;

HAnimSegment279.children = new MFNode();

HAnimSegment279.children[0] = Transform280;

let Shape283 = browser.currentScene.createNode("Shape");
let LineSet284 = browser.currentScene.createNode("LineSet");
LineSet284.vertexCount = new MFInt32(new int[2]);
let Coordinate285 = browser.currentScene.createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet284.coord = Coordinate285;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 1
let ColorRGBA286 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSegmentLineColorRGBA";
LineSet284.color = ColorRGBA286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.name = "l_tarsometatarsal_3";
HAnimJoint287.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint287.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint287.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.name = "l_metatarsal_3";
HAnimSegment288.DEF = "hanim_l_metatarsal_3";
let Transform289 = browser.currentScene.createNode("Transform");
Transform289.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform290 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape291 = browser.currentScene.createNode("Shape");
Shape291.USE = "HAnimJointShape";
Transform290.children = new MFNode();

Transform290.children[0] = Shape291;

Transform289.children = new MFNode();

Transform289.children[0] = Transform290;

HAnimSegment288.children = new MFNode();

HAnimSegment288.children[0] = Transform289;

let Shape292 = browser.currentScene.createNode("Shape");
let LineSet293 = browser.currentScene.createNode("LineSet");
LineSet293.vertexCount = new MFInt32(new int[2]);
let Coordinate294 = browser.currentScene.createNode("Coordinate");
Coordinate294.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet293.coord = Coordinate294;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
let ColorRGBA295 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA295.USE = "HAnimSegmentLineColorRGBA";
LineSet293.color = ColorRGBA295;

Shape292.geometry = LineSet293;

HAnimSegment288.children[1] = Shape292;

HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.name = "l_metatarsophalangeal_3";
HAnimJoint296.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint296.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint296.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment297.DEF = "hanim_l_tarsal_proximal_phalanx_3";
let Transform298 = browser.currentScene.createNode("Transform");
Transform298.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform299 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape300 = browser.currentScene.createNode("Shape");
Shape300.USE = "HAnimJointShape";
Transform299.children = new MFNode();

Transform299.children[0] = Shape300;

Transform298.children = new MFNode();

Transform298.children[0] = Transform299;

HAnimSegment297.children = new MFNode();

HAnimSegment297.children[0] = Transform298;

let Shape301 = browser.currentScene.createNode("Shape");
let LineSet302 = browser.currentScene.createNode("LineSet");
LineSet302.vertexCount = new MFInt32(new int[2]);
let Coordinate303 = browser.currentScene.createNode("Coordinate");
Coordinate303.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet302.coord = Coordinate303;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 1
let ColorRGBA304 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA304.USE = "HAnimSegmentLineColorRGBA";
LineSet302.color = ColorRGBA304;

Shape301.geometry = LineSet302;

HAnimSegment297.children[1] = Shape301;

HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = HAnimSegment297;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint305.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint305.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint305.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.name = "l_tarsal_middle_phalanx_3";
HAnimSegment306.DEF = "hanim_l_tarsal_middle_phalanx_3";
let Transform307 = browser.currentScene.createNode("Transform");
Transform307.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform308 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape309 = browser.currentScene.createNode("Shape");
Shape309.USE = "HAnimJointShape";
Transform308.children = new MFNode();

Transform308.children[0] = Shape309;

Transform307.children = new MFNode();

Transform307.children[0] = Transform308;

HAnimSegment306.children = new MFNode();

HAnimSegment306.children[0] = Transform307;

let Shape310 = browser.currentScene.createNode("Shape");
let LineSet311 = browser.currentScene.createNode("LineSet");
LineSet311.vertexCount = new MFInt32(new int[2]);
let Coordinate312 = browser.currentScene.createNode("Coordinate");
Coordinate312.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet311.coord = Coordinate312;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 1
let ColorRGBA313 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA313.USE = "HAnimSegmentLineColorRGBA";
LineSet311.color = ColorRGBA313;

Shape310.geometry = LineSet311;

HAnimSegment306.children[1] = Shape310;

let HAnimSite314 = browser.currentScene.createNode("HAnimSite");
HAnimSite314.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite314.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
let TouchSensor315 = browser.currentScene.createNode("TouchSensor");
TouchSensor315.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite314.children = new MFNode();

HAnimSite314.children[0] = TouchSensor315;

let Shape316 = browser.currentScene.createNode("Shape");
Shape316.USE = "HAnimSiteShape";
HAnimSite314.children[1] = Shape316;

HAnimSegment306.children[2] = HAnimSite314;

HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

let HAnimJoint317 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint317.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint317.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint317.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint317.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint305.children[1] = HAnimJoint317;

HAnimJoint296.children[1] = HAnimJoint305;

HAnimJoint287.children[1] = HAnimJoint296;

HAnimJoint278.children[1] = HAnimJoint287;

HAnimJoint187.children[3] = HAnimJoint278;

HAnimJoint174.children[1] = HAnimJoint187;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.name = "l_calcaneocuboid";
HAnimJoint318.DEF = "hanim_l_calcaneocuboid";
HAnimJoint318.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint318.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment319 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment319.name = "l_calcaneus";
HAnimSegment319.DEF = "hanim_l_calcaneus";
let Transform320 = browser.currentScene.createNode("Transform");
Transform320.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform321 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape322 = browser.currentScene.createNode("Shape");
Shape322.USE = "HAnimJointShape";
Transform321.children = new MFNode();

Transform321.children[0] = Shape322;

Transform320.children = new MFNode();

Transform320.children[0] = Transform321;

HAnimSegment319.children = new MFNode();

HAnimSegment319.children[0] = Transform320;

let Shape323 = browser.currentScene.createNode("Shape");
let LineSet324 = browser.currentScene.createNode("LineSet");
LineSet324.vertexCount = new MFInt32(new int[2]);
let Coordinate325 = browser.currentScene.createNode("Coordinate");
Coordinate325.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet324.coord = Coordinate325;

//from l_calcaneocuboid to l_transversetarsal vertices 1
let ColorRGBA326 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA326.USE = "HAnimSegmentLineColorRGBA";
LineSet324.color = ColorRGBA326;

Shape323.geometry = LineSet324;

HAnimSegment319.children[1] = Shape323;

HAnimJoint318.children = new MFNode();

HAnimJoint318.children[0] = HAnimSegment319;

let HAnimJoint327 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint327.name = "l_transversetarsal";
HAnimJoint327.DEF = "hanim_l_transversetarsal";
HAnimJoint327.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint327.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment328 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment328.name = "l_cuboid";
HAnimSegment328.DEF = "hanim_l_cuboid";
let Transform329 = browser.currentScene.createNode("Transform");
Transform329.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform330 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape331 = browser.currentScene.createNode("Shape");
Shape331.USE = "HAnimJointShape";
Transform330.children = new MFNode();

Transform330.children[0] = Shape331;

Transform329.children = new MFNode();

Transform329.children[0] = Transform330;

HAnimSegment328.children = new MFNode();

HAnimSegment328.children[0] = Transform329;

let Shape332 = browser.currentScene.createNode("Shape");
let LineSet333 = browser.currentScene.createNode("LineSet");
LineSet333.vertexCount = new MFInt32(new int[2]);
let Coordinate334 = browser.currentScene.createNode("Coordinate");
Coordinate334.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet333.coord = Coordinate334;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 1
let ColorRGBA335 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA335.USE = "HAnimSegmentLineColorRGBA";
LineSet333.color = ColorRGBA335;

Shape332.geometry = LineSet333;

HAnimSegment328.children[1] = Shape332;

let Shape336 = browser.currentScene.createNode("Shape");
let LineSet337 = browser.currentScene.createNode("LineSet");
LineSet337.vertexCount = new MFInt32(new int[2]);
let Coordinate338 = browser.currentScene.createNode("Coordinate");
Coordinate338.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet337.coord = Coordinate338;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 1
let ColorRGBA339 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA339.USE = "HAnimSegmentLineColorRGBA";
LineSet337.color = ColorRGBA339;

Shape336.geometry = LineSet337;

HAnimSegment328.children[2] = Shape336;

HAnimJoint327.children = new MFNode();

HAnimJoint327.children[0] = HAnimSegment328;

let HAnimJoint340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint340.name = "l_tarsometatarsal_4";
HAnimJoint340.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint340.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint340.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment341 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment341.name = "l_metatarsal_4";
HAnimSegment341.DEF = "hanim_l_metatarsal_4";
let Transform342 = browser.currentScene.createNode("Transform");
Transform342.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform343 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape344 = browser.currentScene.createNode("Shape");
Shape344.USE = "HAnimJointShape";
Transform343.children = new MFNode();

Transform343.children[0] = Shape344;

Transform342.children = new MFNode();

Transform342.children[0] = Transform343;

HAnimSegment341.children = new MFNode();

HAnimSegment341.children[0] = Transform342;

let Shape345 = browser.currentScene.createNode("Shape");
let LineSet346 = browser.currentScene.createNode("LineSet");
LineSet346.vertexCount = new MFInt32(new int[2]);
let Coordinate347 = browser.currentScene.createNode("Coordinate");
Coordinate347.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet346.coord = Coordinate347;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 1
let ColorRGBA348 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA348.USE = "HAnimSegmentLineColorRGBA";
LineSet346.color = ColorRGBA348;

Shape345.geometry = LineSet346;

HAnimSegment341.children[1] = Shape345;

HAnimJoint340.children = new MFNode();

HAnimJoint340.children[0] = HAnimSegment341;

let HAnimJoint349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint349.name = "l_metatarsophalangeal_4";
HAnimJoint349.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint349.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint349.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment350 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment350.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment350.DEF = "hanim_l_tarsal_proximal_phalanx_4";
let Transform351 = browser.currentScene.createNode("Transform");
Transform351.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform352 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape353 = browser.currentScene.createNode("Shape");
Shape353.USE = "HAnimJointShape";
Transform352.children = new MFNode();

Transform352.children[0] = Shape353;

Transform351.children = new MFNode();

Transform351.children[0] = Transform352;

HAnimSegment350.children = new MFNode();

HAnimSegment350.children[0] = Transform351;

let Shape354 = browser.currentScene.createNode("Shape");
let LineSet355 = browser.currentScene.createNode("LineSet");
LineSet355.vertexCount = new MFInt32(new int[2]);
let Coordinate356 = browser.currentScene.createNode("Coordinate");
Coordinate356.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet355.coord = Coordinate356;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 1
let ColorRGBA357 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA357.USE = "HAnimSegmentLineColorRGBA";
LineSet355.color = ColorRGBA357;

Shape354.geometry = LineSet355;

HAnimSegment350.children[1] = Shape354;

HAnimJoint349.children = new MFNode();

HAnimJoint349.children[0] = HAnimSegment350;

let HAnimJoint358 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint358.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint358.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint358.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint358.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment359 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment359.name = "l_tarsal_middle_phalanx_4";
HAnimSegment359.DEF = "hanim_l_tarsal_middle_phalanx_4";
let Transform360 = browser.currentScene.createNode("Transform");
Transform360.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform361 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape362 = browser.currentScene.createNode("Shape");
Shape362.USE = "HAnimJointShape";
Transform361.children = new MFNode();

Transform361.children[0] = Shape362;

Transform360.children = new MFNode();

Transform360.children[0] = Transform361;

HAnimSegment359.children = new MFNode();

HAnimSegment359.children[0] = Transform360;

let Shape363 = browser.currentScene.createNode("Shape");
let LineSet364 = browser.currentScene.createNode("LineSet");
LineSet364.vertexCount = new MFInt32(new int[2]);
let Coordinate365 = browser.currentScene.createNode("Coordinate");
Coordinate365.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet364.coord = Coordinate365;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 1
let ColorRGBA366 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA366.USE = "HAnimSegmentLineColorRGBA";
LineSet364.color = ColorRGBA366;

Shape363.geometry = LineSet364;

HAnimSegment359.children[1] = Shape363;

let HAnimSite367 = browser.currentScene.createNode("HAnimSite");
HAnimSite367.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite367.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
let TouchSensor368 = browser.currentScene.createNode("TouchSensor");
TouchSensor368.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite367.children = new MFNode();

HAnimSite367.children[0] = TouchSensor368;

let Shape369 = browser.currentScene.createNode("Shape");
Shape369.USE = "HAnimSiteShape";
HAnimSite367.children[1] = Shape369;

HAnimSegment359.children[2] = HAnimSite367;

HAnimJoint358.children = new MFNode();

HAnimJoint358.children[0] = HAnimSegment359;

let HAnimJoint370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint370.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint370.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint370.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint370.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint358.children[1] = HAnimJoint370;

HAnimJoint349.children[1] = HAnimJoint358;

HAnimJoint340.children[1] = HAnimJoint349;

HAnimJoint327.children[1] = HAnimJoint340;

let HAnimJoint371 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint371.name = "l_tarsometatarsal_5";
HAnimJoint371.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint371.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint371.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment372 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment372.name = "l_metatarsal_5";
HAnimSegment372.DEF = "hanim_l_metatarsal_5";
let Transform373 = browser.currentScene.createNode("Transform");
Transform373.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform374 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape375 = browser.currentScene.createNode("Shape");
Shape375.USE = "HAnimJointShape";
Transform374.children = new MFNode();

Transform374.children[0] = Shape375;

Transform373.children = new MFNode();

Transform373.children[0] = Transform374;

HAnimSegment372.children = new MFNode();

HAnimSegment372.children[0] = Transform373;

let Shape376 = browser.currentScene.createNode("Shape");
let LineSet377 = browser.currentScene.createNode("LineSet");
LineSet377.vertexCount = new MFInt32(new int[2]);
let Coordinate378 = browser.currentScene.createNode("Coordinate");
Coordinate378.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet377.coord = Coordinate378;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 1
let ColorRGBA379 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA379.USE = "HAnimSegmentLineColorRGBA";
LineSet377.color = ColorRGBA379;

Shape376.geometry = LineSet377;

HAnimSegment372.children[1] = Shape376;

let HAnimSite380 = browser.currentScene.createNode("HAnimSite");
HAnimSite380.name = "l_metatarsal_phalanx_5_pt";
HAnimSite380.DEF = "hanim_l_metatarsal_phalanx_5_pt";
let TouchSensor381 = browser.currentScene.createNode("TouchSensor");
TouchSensor381.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite380.children = new MFNode();

HAnimSite380.children[0] = TouchSensor381;

let Shape382 = browser.currentScene.createNode("Shape");
Shape382.USE = "HAnimSiteShape";
HAnimSite380.children[1] = Shape382;

HAnimSegment372.children[2] = HAnimSite380;

HAnimJoint371.children = new MFNode();

HAnimJoint371.children[0] = HAnimSegment372;

let HAnimJoint383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint383.name = "l_metatarsophalangeal_5";
HAnimJoint383.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint383.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint383.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment384 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment384.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment384.DEF = "hanim_l_tarsal_proximal_phalanx_5";
let Transform385 = browser.currentScene.createNode("Transform");
Transform385.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform386 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape387 = browser.currentScene.createNode("Shape");
Shape387.USE = "HAnimJointShape";
Transform386.children = new MFNode();

Transform386.children[0] = Shape387;

Transform385.children = new MFNode();

Transform385.children[0] = Transform386;

HAnimSegment384.children = new MFNode();

HAnimSegment384.children[0] = Transform385;

let Shape388 = browser.currentScene.createNode("Shape");
let LineSet389 = browser.currentScene.createNode("LineSet");
LineSet389.vertexCount = new MFInt32(new int[2]);
let Coordinate390 = browser.currentScene.createNode("Coordinate");
Coordinate390.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet389.coord = Coordinate390;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 1
let ColorRGBA391 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA391.USE = "HAnimSegmentLineColorRGBA";
LineSet389.color = ColorRGBA391;

Shape388.geometry = LineSet389;

HAnimSegment384.children[1] = Shape388;

HAnimJoint383.children = new MFNode();

HAnimJoint383.children[0] = HAnimSegment384;

let HAnimJoint392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint392.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint392.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint392.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint392.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment393 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment393.name = "l_tarsal_middle_phalanx_5";
HAnimSegment393.DEF = "hanim_l_tarsal_middle_phalanx_5";
let Transform394 = browser.currentScene.createNode("Transform");
Transform394.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let Transform395 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape396 = browser.currentScene.createNode("Shape");
Shape396.USE = "HAnimJointShape";
Transform395.children = new MFNode();

Transform395.children[0] = Shape396;

Transform394.children = new MFNode();

Transform394.children[0] = Transform395;

HAnimSegment393.children = new MFNode();

HAnimSegment393.children[0] = Transform394;

let Shape397 = browser.currentScene.createNode("Shape");
let LineSet398 = browser.currentScene.createNode("LineSet");
LineSet398.vertexCount = new MFInt32(new int[2]);
let Coordinate399 = browser.currentScene.createNode("Coordinate");
Coordinate399.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet398.coord = Coordinate399;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 1
let ColorRGBA400 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA400.USE = "HAnimSegmentLineColorRGBA";
LineSet398.color = ColorRGBA400;

Shape397.geometry = LineSet398;

HAnimSegment393.children[1] = Shape397;

let HAnimSite401 = browser.currentScene.createNode("HAnimSite");
HAnimSite401.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite401.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
let TouchSensor402 = browser.currentScene.createNode("TouchSensor");
TouchSensor402.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite401.children = new MFNode();

HAnimSite401.children[0] = TouchSensor402;

let Shape403 = browser.currentScene.createNode("Shape");
Shape403.USE = "HAnimSiteShape";
HAnimSite401.children[1] = Shape403;

HAnimSegment393.children[2] = HAnimSite401;

HAnimJoint392.children = new MFNode();

HAnimJoint392.children[0] = HAnimSegment393;

let HAnimJoint404 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint404.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint404.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint404.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint404.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint392.children[1] = HAnimJoint404;

HAnimJoint383.children[1] = HAnimJoint392;

HAnimJoint371.children[1] = HAnimJoint383;

HAnimJoint327.children[2] = HAnimJoint371;

HAnimJoint318.children[1] = HAnimJoint327;

HAnimJoint174.children[2] = HAnimJoint318;

HAnimJoint159.children[1] = HAnimJoint174;

HAnimJoint141.children[1] = HAnimJoint159;

HAnimJoint104.children[1] = HAnimJoint141;

let HAnimJoint405 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint405.name = "r_hip";
HAnimJoint405.DEF = "hanim_r_hip";
HAnimJoint405.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint405.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint405.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment406 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment406.name = "r_thigh";
HAnimSegment406.DEF = "hanim_r_thigh";
let Transform407 = browser.currentScene.createNode("Transform");
Transform407.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Transform408 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape409 = browser.currentScene.createNode("Shape");
Shape409.USE = "HAnimJointShape";
Transform408.children = new MFNode();

Transform408.children[0] = Shape409;

Transform407.children = new MFNode();

Transform407.children[0] = Transform408;

HAnimSegment406.children = new MFNode();

HAnimSegment406.children[0] = Transform407;

let Shape410 = browser.currentScene.createNode("Shape");
let LineSet411 = browser.currentScene.createNode("LineSet");
LineSet411.vertexCount = new MFInt32(new int[2]);
let Coordinate412 = browser.currentScene.createNode("Coordinate");
Coordinate412.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet411.coord = Coordinate412;

//from r_hip to r_knee vertices 2
let ColorRGBA413 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA413.USE = "HAnimSegmentLineColorRGBA";
LineSet411.color = ColorRGBA413;

Shape410.geometry = LineSet411;

HAnimSegment406.children[1] = Shape410;

let HAnimSite414 = browser.currentScene.createNode("HAnimSite");
HAnimSite414.name = "r_lateral_malleolus_pt";
HAnimSite414.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite414.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let TouchSensor415 = browser.currentScene.createNode("TouchSensor");
TouchSensor415.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite414.children = new MFNode();

HAnimSite414.children[0] = TouchSensor415;

let Shape416 = browser.currentScene.createNode("Shape");
Shape416.USE = "HAnimSiteShape";
HAnimSite414.children[1] = Shape416;

HAnimSegment406.children[2] = HAnimSite414;

let HAnimSite417 = browser.currentScene.createNode("HAnimSite");
HAnimSite417.name = "r_medial_malleolus_pt";
HAnimSite417.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite417.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let TouchSensor418 = browser.currentScene.createNode("TouchSensor");
TouchSensor418.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite417.children = new MFNode();

HAnimSite417.children[0] = TouchSensor418;

let Shape419 = browser.currentScene.createNode("Shape");
Shape419.USE = "HAnimSiteShape";
HAnimSite417.children[1] = Shape419;

HAnimSegment406.children[3] = HAnimSite417;

let HAnimSite420 = browser.currentScene.createNode("HAnimSite");
HAnimSite420.name = "r_tibiale_pt";
HAnimSite420.DEF = "hanim_r_tibiale_pt";
let TouchSensor421 = browser.currentScene.createNode("TouchSensor");
TouchSensor421.description = "HAnimSite r_tibiale_pt";
HAnimSite420.children = new MFNode();

HAnimSite420.children[0] = TouchSensor421;

let Shape422 = browser.currentScene.createNode("Shape");
Shape422.USE = "HAnimSiteShape";
HAnimSite420.children[1] = Shape422;

HAnimSegment406.children[4] = HAnimSite420;

HAnimJoint405.children = new MFNode();

HAnimJoint405.children[0] = HAnimSegment406;

let HAnimJoint423 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint423.name = "r_knee";
HAnimJoint423.DEF = "hanim_r_knee";
HAnimJoint423.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint423.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint423.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment424 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment424.name = "r_calf";
HAnimSegment424.DEF = "hanim_r_calf";
let Transform425 = browser.currentScene.createNode("Transform");
Transform425.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Transform426 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape427 = browser.currentScene.createNode("Shape");
Shape427.USE = "HAnimJointShape";
Transform426.children = new MFNode();

Transform426.children[0] = Shape427;

Transform425.children = new MFNode();

Transform425.children[0] = Transform426;

HAnimSegment424.children = new MFNode();

HAnimSegment424.children[0] = Transform425;

let Shape428 = browser.currentScene.createNode("Shape");
let LineSet429 = browser.currentScene.createNode("LineSet");
LineSet429.vertexCount = new MFInt32(new int[2]);
let Coordinate430 = browser.currentScene.createNode("Coordinate");
Coordinate430.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet429.coord = Coordinate430;

//from r_knee to r_talocrural vertices 2
let ColorRGBA431 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA431.USE = "HAnimSegmentLineColorRGBA";
LineSet429.color = ColorRGBA431;

Shape428.geometry = LineSet429;

HAnimSegment424.children[1] = Shape428;

let HAnimSite432 = browser.currentScene.createNode("HAnimSite");
HAnimSite432.name = "r_calcaneus_posterior_pt";
HAnimSite432.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite432.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let TouchSensor433 = browser.currentScene.createNode("TouchSensor");
TouchSensor433.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite432.children = new MFNode();

HAnimSite432.children[0] = TouchSensor433;

let Shape434 = browser.currentScene.createNode("Shape");
Shape434.USE = "HAnimSiteShape";
HAnimSite432.children[1] = Shape434;

HAnimSegment424.children[2] = HAnimSite432;

let HAnimSite435 = browser.currentScene.createNode("HAnimSite");
HAnimSite435.name = "r_sphyrion_pt";
HAnimSite435.DEF = "hanim_r_sphyrion_pt";
HAnimSite435.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let TouchSensor436 = browser.currentScene.createNode("TouchSensor");
TouchSensor436.description = "HAnimSite r_sphyrion_pt";
HAnimSite435.children = new MFNode();

HAnimSite435.children[0] = TouchSensor436;

let Shape437 = browser.currentScene.createNode("Shape");
Shape437.USE = "HAnimSiteShape";
HAnimSite435.children[1] = Shape437;

HAnimSegment424.children[3] = HAnimSite435;

HAnimJoint423.children = new MFNode();

HAnimJoint423.children[0] = HAnimSegment424;

let HAnimJoint438 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint438.name = "r_talocrural";
HAnimJoint438.DEF = "hanim_r_talocrural";
HAnimJoint438.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint438.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint438.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment439 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment439.name = "r_talus";
HAnimSegment439.DEF = "hanim_r_talus";
let Transform440 = browser.currentScene.createNode("Transform");
Transform440.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform440.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform440.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
let Transform441 = browser.currentScene.createNode("Transform");
//Empty Transform right foot
let Shape442 = browser.currentScene.createNode("Shape");
Shape442.USE = "HAnimJointShape";
Transform441.children = new MFNode();

Transform441.children[0] = Shape442;

Transform440.children = new MFNode();

Transform440.children[0] = Transform441;

HAnimSegment439.children = new MFNode();

HAnimSegment439.children[0] = Transform440;

let Shape443 = browser.currentScene.createNode("Shape");
let LineSet444 = browser.currentScene.createNode("LineSet");
LineSet444.vertexCount = new MFInt32(new int[2]);
let Coordinate445 = browser.currentScene.createNode("Coordinate");
Coordinate445.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0801,0.0712,-0.0766]);
LineSet444.coord = Coordinate445;

//from r_talocrural to r_talocalcaneonavicular vertices 2
let ColorRGBA446 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA446.USE = "HAnimSegmentLineColorRGBA";
LineSet444.color = ColorRGBA446;

Shape443.geometry = LineSet444;

HAnimSegment439.children[1] = Shape443;

let Shape447 = browser.currentScene.createNode("Shape");
let LineSet448 = browser.currentScene.createNode("LineSet");
LineSet448.vertexCount = new MFInt32(new int[2]);
let Coordinate449 = browser.currentScene.createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0801,0.0712,-0.0766]);
LineSet448.coord = Coordinate449;

//from r_talocrural to r_calcaneocuboid vertices 2
let ColorRGBA450 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA450.USE = "HAnimSegmentLineColorRGBA";
LineSet448.color = ColorRGBA450;

Shape447.geometry = LineSet448;

HAnimSegment439.children[2] = Shape447;

HAnimJoint438.children = new MFNode();

HAnimJoint438.children[0] = HAnimSegment439;

let HAnimJoint451 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint451.name = "r_talocalcaneonavicular";
HAnimJoint451.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint451.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint451.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment452 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment452.name = "r_navicular";
HAnimSegment452.DEF = "hanim_r_navicular";
let Transform453 = browser.currentScene.createNode("Transform");
Transform453.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform454 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape455 = browser.currentScene.createNode("Shape");
Shape455.USE = "HAnimJointShape";
Transform454.children = new MFNode();

Transform454.children[0] = Shape455;

Transform453.children = new MFNode();

Transform453.children[0] = Transform454;

HAnimSegment452.children = new MFNode();

HAnimSegment452.children[0] = Transform453;

let Shape456 = browser.currentScene.createNode("Shape");
let LineSet457 = browser.currentScene.createNode("LineSet");
LineSet457.vertexCount = new MFInt32(new int[2]);
let Coordinate458 = browser.currentScene.createNode("Coordinate");
Coordinate458.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet457.coord = Coordinate458;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 1
let ColorRGBA459 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSegmentLineColorRGBA";
LineSet457.color = ColorRGBA459;

Shape456.geometry = LineSet457;

HAnimSegment452.children[1] = Shape456;

let Shape460 = browser.currentScene.createNode("Shape");
let LineSet461 = browser.currentScene.createNode("LineSet");
LineSet461.vertexCount = new MFInt32(new int[2]);
let Coordinate462 = browser.currentScene.createNode("Coordinate");
Coordinate462.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet461.coord = Coordinate462;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 1
let ColorRGBA463 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA463.USE = "HAnimSegmentLineColorRGBA";
LineSet461.color = ColorRGBA463;

Shape460.geometry = LineSet461;

HAnimSegment452.children[2] = Shape460;

let Shape464 = browser.currentScene.createNode("Shape");
let LineSet465 = browser.currentScene.createNode("LineSet");
LineSet465.vertexCount = new MFInt32(new int[2]);
let Coordinate466 = browser.currentScene.createNode("Coordinate");
Coordinate466.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet465.coord = Coordinate466;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 1
let ColorRGBA467 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA467.USE = "HAnimSegmentLineColorRGBA";
LineSet465.color = ColorRGBA467;

Shape464.geometry = LineSet465;

HAnimSegment452.children[3] = Shape464;

HAnimJoint451.children = new MFNode();

HAnimJoint451.children[0] = HAnimSegment452;

let HAnimJoint468 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint468.name = "r_cuneonavicular_1";
HAnimJoint468.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint468.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint468.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment469.name = "r_cuneiform_1";
HAnimSegment469.DEF = "hanim_r_cuneiform_1";
let Transform470 = browser.currentScene.createNode("Transform");
Transform470.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform471 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape472 = browser.currentScene.createNode("Shape");
Shape472.USE = "HAnimJointShape";
Transform471.children = new MFNode();

Transform471.children[0] = Shape472;

Transform470.children = new MFNode();

Transform470.children[0] = Transform471;

HAnimSegment469.children = new MFNode();

HAnimSegment469.children[0] = Transform470;

let Shape473 = browser.currentScene.createNode("Shape");
let LineSet474 = browser.currentScene.createNode("LineSet");
LineSet474.vertexCount = new MFInt32(new int[2]);
let Coordinate475 = browser.currentScene.createNode("Coordinate");
Coordinate475.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet474.coord = Coordinate475;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 1
let ColorRGBA476 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA476.USE = "HAnimSegmentLineColorRGBA";
LineSet474.color = ColorRGBA476;

Shape473.geometry = LineSet474;

HAnimSegment469.children[1] = Shape473;

HAnimJoint468.children = new MFNode();

HAnimJoint468.children[0] = HAnimSegment469;

let HAnimJoint477 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint477.name = "r_tarsometatarsal_1";
HAnimJoint477.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint477.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint477.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment478 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment478.name = "r_metatarsal_1";
HAnimSegment478.DEF = "hanim_r_metatarsal_1";
let Transform479 = browser.currentScene.createNode("Transform");
Transform479.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform480 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape481 = browser.currentScene.createNode("Shape");
Shape481.USE = "HAnimJointShape";
Transform480.children = new MFNode();

Transform480.children[0] = Shape481;

Transform479.children = new MFNode();

Transform479.children[0] = Transform480;

HAnimSegment478.children = new MFNode();

HAnimSegment478.children[0] = Transform479;

let Shape482 = browser.currentScene.createNode("Shape");
let LineSet483 = browser.currentScene.createNode("LineSet");
LineSet483.vertexCount = new MFInt32(new int[2]);
let Coordinate484 = browser.currentScene.createNode("Coordinate");
Coordinate484.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet483.coord = Coordinate484;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 1
let ColorRGBA485 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA485.USE = "HAnimSegmentLineColorRGBA";
LineSet483.color = ColorRGBA485;

Shape482.geometry = LineSet483;

HAnimSegment478.children[1] = Shape482;

let HAnimSite486 = browser.currentScene.createNode("HAnimSite");
HAnimSite486.name = "r_metatarsal_phalanx_1_pt";
HAnimSite486.DEF = "hanim_r_metatarsal_phalanx_1_pt";
let TouchSensor487 = browser.currentScene.createNode("TouchSensor");
TouchSensor487.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite486.children = new MFNode();

HAnimSite486.children[0] = TouchSensor487;

let Shape488 = browser.currentScene.createNode("Shape");
Shape488.USE = "HAnimSiteShape";
HAnimSite486.children[1] = Shape488;

HAnimSegment478.children[2] = HAnimSite486;

HAnimJoint477.children = new MFNode();

HAnimJoint477.children[0] = HAnimSegment478;

let HAnimJoint489 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint489.name = "r_metatarsophalangeal_1";
HAnimJoint489.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint489.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint489.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment490 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment490.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment490.DEF = "hanim_r_tarsal_proximal_phalanx_1";
let Transform491 = browser.currentScene.createNode("Transform");
Transform491.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform492 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape493 = browser.currentScene.createNode("Shape");
Shape493.USE = "HAnimJointShape";
Transform492.children = new MFNode();

Transform492.children[0] = Shape493;

Transform491.children = new MFNode();

Transform491.children[0] = Transform492;

HAnimSegment490.children = new MFNode();

HAnimSegment490.children[0] = Transform491;

let Shape494 = browser.currentScene.createNode("Shape");
let LineSet495 = browser.currentScene.createNode("LineSet");
LineSet495.vertexCount = new MFInt32(new int[2]);
let Coordinate496 = browser.currentScene.createNode("Coordinate");
Coordinate496.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet495.coord = Coordinate496;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 1
let ColorRGBA497 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA497.USE = "HAnimSegmentLineColorRGBA";
LineSet495.color = ColorRGBA497;

Shape494.geometry = LineSet495;

HAnimSegment490.children[1] = Shape494;

let HAnimSite498 = browser.currentScene.createNode("HAnimSite");
HAnimSite498.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite498.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
let TouchSensor499 = browser.currentScene.createNode("TouchSensor");
TouchSensor499.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite498.children = new MFNode();

HAnimSite498.children[0] = TouchSensor499;

let Shape500 = browser.currentScene.createNode("Shape");
Shape500.USE = "HAnimSiteShape";
HAnimSite498.children[1] = Shape500;

HAnimSegment490.children[2] = HAnimSite498;

HAnimJoint489.children = new MFNode();

HAnimJoint489.children[0] = HAnimSegment490;

let HAnimJoint501 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint501.name = "r_tarsal_interphalangeal_1";
HAnimJoint501.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint501.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint501.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint489.children[1] = HAnimJoint501;

HAnimJoint477.children[1] = HAnimJoint489;

HAnimJoint468.children[1] = HAnimJoint477;

HAnimJoint451.children[1] = HAnimJoint468;

let HAnimJoint502 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint502.name = "r_cuneonavicular_2";
HAnimJoint502.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint502.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint502.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment503.name = "r_cuneiform_2";
HAnimSegment503.DEF = "hanim_r_cuneiform_2";
let Transform504 = browser.currentScene.createNode("Transform");
Transform504.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform505 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape506 = browser.currentScene.createNode("Shape");
Shape506.USE = "HAnimJointShape";
Transform505.children = new MFNode();

Transform505.children[0] = Shape506;

Transform504.children = new MFNode();

Transform504.children[0] = Transform505;

HAnimSegment503.children = new MFNode();

HAnimSegment503.children[0] = Transform504;

let Shape507 = browser.currentScene.createNode("Shape");
let LineSet508 = browser.currentScene.createNode("LineSet");
LineSet508.vertexCount = new MFInt32(new int[2]);
let Coordinate509 = browser.currentScene.createNode("Coordinate");
Coordinate509.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet508.coord = Coordinate509;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 1
let ColorRGBA510 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA510.USE = "HAnimSegmentLineColorRGBA";
LineSet508.color = ColorRGBA510;

Shape507.geometry = LineSet508;

HAnimSegment503.children[1] = Shape507;

HAnimJoint502.children = new MFNode();

HAnimJoint502.children[0] = HAnimSegment503;

let HAnimJoint511 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint511.name = "r_tarsometatarsal_2";
HAnimJoint511.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint511.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint511.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.name = "r_metatarsal_2";
HAnimSegment512.DEF = "hanim_r_metatarsal_2";
let Transform513 = browser.currentScene.createNode("Transform");
Transform513.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform514 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape515 = browser.currentScene.createNode("Shape");
Shape515.USE = "HAnimJointShape";
Transform514.children = new MFNode();

Transform514.children[0] = Shape515;

Transform513.children = new MFNode();

Transform513.children[0] = Transform514;

HAnimSegment512.children = new MFNode();

HAnimSegment512.children[0] = Transform513;

let Shape516 = browser.currentScene.createNode("Shape");
let LineSet517 = browser.currentScene.createNode("LineSet");
LineSet517.vertexCount = new MFInt32(new int[2]);
let Coordinate518 = browser.currentScene.createNode("Coordinate");
Coordinate518.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet517.coord = Coordinate518;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 1
let ColorRGBA519 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA519.USE = "HAnimSegmentLineColorRGBA";
LineSet517.color = ColorRGBA519;

Shape516.geometry = LineSet517;

HAnimSegment512.children[1] = Shape516;

HAnimJoint511.children = new MFNode();

HAnimJoint511.children[0] = HAnimSegment512;

let HAnimJoint520 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint520.name = "r_metatarsophalangeal_2";
HAnimJoint520.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint520.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint520.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment521 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment521.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment521.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform522 = browser.currentScene.createNode("Transform");
Transform522.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform523 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape524 = browser.currentScene.createNode("Shape");
Shape524.USE = "HAnimJointShape";
Transform523.children = new MFNode();

Transform523.children[0] = Shape524;

Transform522.children = new MFNode();

Transform522.children[0] = Transform523;

HAnimSegment521.children = new MFNode();

HAnimSegment521.children[0] = Transform522;

let Shape525 = browser.currentScene.createNode("Shape");
let LineSet526 = browser.currentScene.createNode("LineSet");
LineSet526.vertexCount = new MFInt32(new int[2]);
let Coordinate527 = browser.currentScene.createNode("Coordinate");
Coordinate527.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet526.coord = Coordinate527;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 1
let ColorRGBA528 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA528.USE = "HAnimSegmentLineColorRGBA";
LineSet526.color = ColorRGBA528;

Shape525.geometry = LineSet526;

HAnimSegment521.children[1] = Shape525;

HAnimJoint520.children = new MFNode();

HAnimJoint520.children[0] = HAnimSegment521;

let HAnimJoint529 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint529.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint529.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint529.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint529.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment530 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment530.name = "r_tarsal_middle_phalanx_2";
HAnimSegment530.DEF = "hanim_r_tarsal_middle_phalanx_2";
let Transform531 = browser.currentScene.createNode("Transform");
Transform531.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform532 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape533 = browser.currentScene.createNode("Shape");
Shape533.USE = "HAnimJointShape";
Transform532.children = new MFNode();

Transform532.children[0] = Shape533;

Transform531.children = new MFNode();

Transform531.children[0] = Transform532;

HAnimSegment530.children = new MFNode();

HAnimSegment530.children[0] = Transform531;

let Shape534 = browser.currentScene.createNode("Shape");
let LineSet535 = browser.currentScene.createNode("LineSet");
LineSet535.vertexCount = new MFInt32(new int[2]);
let Coordinate536 = browser.currentScene.createNode("Coordinate");
Coordinate536.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet535.coord = Coordinate536;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 1
let ColorRGBA537 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA537.USE = "HAnimSegmentLineColorRGBA";
LineSet535.color = ColorRGBA537;

Shape534.geometry = LineSet535;

HAnimSegment530.children[1] = Shape534;

let HAnimSite538 = browser.currentScene.createNode("HAnimSite");
HAnimSite538.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite538.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite538.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
let TouchSensor539 = browser.currentScene.createNode("TouchSensor");
TouchSensor539.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite538.children = new MFNode();

HAnimSite538.children[0] = TouchSensor539;

let Shape540 = browser.currentScene.createNode("Shape");
Shape540.USE = "HAnimSiteShape";
HAnimSite538.children[1] = Shape540;

HAnimSegment530.children[2] = HAnimSite538;

HAnimJoint529.children = new MFNode();

HAnimJoint529.children[0] = HAnimSegment530;

let HAnimJoint541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint541.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint541.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint541.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint541.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint529.children[1] = HAnimJoint541;

HAnimJoint520.children[1] = HAnimJoint529;

HAnimJoint511.children[1] = HAnimJoint520;

HAnimJoint502.children[1] = HAnimJoint511;

HAnimJoint451.children[2] = HAnimJoint502;

let HAnimJoint542 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint542.name = "r_cuneonavicular_3";
HAnimJoint542.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint542.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint542.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment543 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment543.name = "r_cuneiform_3";
HAnimSegment543.DEF = "hanim_r_cuneiform_3";
let Transform544 = browser.currentScene.createNode("Transform");
Transform544.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform545 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape546 = browser.currentScene.createNode("Shape");
Shape546.USE = "HAnimJointShape";
Transform545.children = new MFNode();

Transform545.children[0] = Shape546;

Transform544.children = new MFNode();

Transform544.children[0] = Transform545;

HAnimSegment543.children = new MFNode();

HAnimSegment543.children[0] = Transform544;

let Shape547 = browser.currentScene.createNode("Shape");
let LineSet548 = browser.currentScene.createNode("LineSet");
LineSet548.vertexCount = new MFInt32(new int[2]);
let Coordinate549 = browser.currentScene.createNode("Coordinate");
Coordinate549.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet548.coord = Coordinate549;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 1
let ColorRGBA550 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA550.USE = "HAnimSegmentLineColorRGBA";
LineSet548.color = ColorRGBA550;

Shape547.geometry = LineSet548;

HAnimSegment543.children[1] = Shape547;

HAnimJoint542.children = new MFNode();

HAnimJoint542.children[0] = HAnimSegment543;

let HAnimJoint551 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint551.name = "r_tarsometatarsal_3";
HAnimJoint551.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint551.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint551.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment552 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment552.name = "r_metatarsal_3";
HAnimSegment552.DEF = "hanim_r_metatarsal_3";
let Transform553 = browser.currentScene.createNode("Transform");
Transform553.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform554 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape555 = browser.currentScene.createNode("Shape");
Shape555.USE = "HAnimJointShape";
Transform554.children = new MFNode();

Transform554.children[0] = Shape555;

Transform553.children = new MFNode();

Transform553.children[0] = Transform554;

HAnimSegment552.children = new MFNode();

HAnimSegment552.children[0] = Transform553;

let Shape556 = browser.currentScene.createNode("Shape");
let LineSet557 = browser.currentScene.createNode("LineSet");
LineSet557.vertexCount = new MFInt32(new int[2]);
let Coordinate558 = browser.currentScene.createNode("Coordinate");
Coordinate558.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet557.coord = Coordinate558;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
let ColorRGBA559 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA559.USE = "HAnimSegmentLineColorRGBA";
LineSet557.color = ColorRGBA559;

Shape556.geometry = LineSet557;

HAnimSegment552.children[1] = Shape556;

HAnimJoint551.children = new MFNode();

HAnimJoint551.children[0] = HAnimSegment552;

let HAnimJoint560 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint560.name = "r_metatarsophalangeal_3";
HAnimJoint560.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint560.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint560.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment561 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment561.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment561.DEF = "hanim_r_tarsal_proximal_phalanx_3";
let Transform562 = browser.currentScene.createNode("Transform");
Transform562.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform563 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape564 = browser.currentScene.createNode("Shape");
Shape564.USE = "HAnimJointShape";
Transform563.children = new MFNode();

Transform563.children[0] = Shape564;

Transform562.children = new MFNode();

Transform562.children[0] = Transform563;

HAnimSegment561.children = new MFNode();

HAnimSegment561.children[0] = Transform562;

let Shape565 = browser.currentScene.createNode("Shape");
let LineSet566 = browser.currentScene.createNode("LineSet");
LineSet566.vertexCount = new MFInt32(new int[2]);
let Coordinate567 = browser.currentScene.createNode("Coordinate");
Coordinate567.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet566.coord = Coordinate567;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 1
let ColorRGBA568 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA568.USE = "HAnimSegmentLineColorRGBA";
LineSet566.color = ColorRGBA568;

Shape565.geometry = LineSet566;

HAnimSegment561.children[1] = Shape565;

HAnimJoint560.children = new MFNode();

HAnimJoint560.children[0] = HAnimSegment561;

let HAnimJoint569 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint569.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint569.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint569.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint569.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment570 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment570.name = "r_tarsal_middle_phalanx_3";
HAnimSegment570.DEF = "hanim_r_tarsal_middle_phalanx_3";
let Transform571 = browser.currentScene.createNode("Transform");
Transform571.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform572 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape573 = browser.currentScene.createNode("Shape");
Shape573.USE = "HAnimJointShape";
Transform572.children = new MFNode();

Transform572.children[0] = Shape573;

Transform571.children = new MFNode();

Transform571.children[0] = Transform572;

HAnimSegment570.children = new MFNode();

HAnimSegment570.children[0] = Transform571;

let Shape574 = browser.currentScene.createNode("Shape");
let LineSet575 = browser.currentScene.createNode("LineSet");
LineSet575.vertexCount = new MFInt32(new int[2]);
let Coordinate576 = browser.currentScene.createNode("Coordinate");
Coordinate576.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet575.coord = Coordinate576;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 1
let ColorRGBA577 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA577.USE = "HAnimSegmentLineColorRGBA";
LineSet575.color = ColorRGBA577;

Shape574.geometry = LineSet575;

HAnimSegment570.children[1] = Shape574;

let HAnimSite578 = browser.currentScene.createNode("HAnimSite");
HAnimSite578.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite578.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
let TouchSensor579 = browser.currentScene.createNode("TouchSensor");
TouchSensor579.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite578.children = new MFNode();

HAnimSite578.children[0] = TouchSensor579;

let Shape580 = browser.currentScene.createNode("Shape");
Shape580.USE = "HAnimSiteShape";
HAnimSite578.children[1] = Shape580;

HAnimSegment570.children[2] = HAnimSite578;

HAnimJoint569.children = new MFNode();

HAnimJoint569.children[0] = HAnimSegment570;

let HAnimJoint581 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint581.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint581.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint581.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint581.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint569.children[1] = HAnimJoint581;

HAnimJoint560.children[1] = HAnimJoint569;

HAnimJoint551.children[1] = HAnimJoint560;

HAnimJoint542.children[1] = HAnimJoint551;

HAnimJoint451.children[3] = HAnimJoint542;

HAnimJoint438.children[1] = HAnimJoint451;

let HAnimJoint582 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint582.name = "r_calcaneocuboid";
HAnimJoint582.DEF = "hanim_r_calcaneocuboid";
HAnimJoint582.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint582.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment583 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment583.name = "r_calcaneus";
HAnimSegment583.DEF = "hanim_r_calcaneus";
let Transform584 = browser.currentScene.createNode("Transform");
Transform584.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform585 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape586 = browser.currentScene.createNode("Shape");
Shape586.USE = "HAnimJointShape";
Transform585.children = new MFNode();

Transform585.children[0] = Shape586;

Transform584.children = new MFNode();

Transform584.children[0] = Transform585;

HAnimSegment583.children = new MFNode();

HAnimSegment583.children[0] = Transform584;

let Shape587 = browser.currentScene.createNode("Shape");
let LineSet588 = browser.currentScene.createNode("LineSet");
LineSet588.vertexCount = new MFInt32(new int[2]);
let Coordinate589 = browser.currentScene.createNode("Coordinate");
Coordinate589.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet588.coord = Coordinate589;

//from r_calcaneocuboid to r_transversetarsal vertices 1
let ColorRGBA590 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA590.USE = "HAnimSegmentLineColorRGBA";
LineSet588.color = ColorRGBA590;

Shape587.geometry = LineSet588;

HAnimSegment583.children[1] = Shape587;

HAnimJoint582.children = new MFNode();

HAnimJoint582.children[0] = HAnimSegment583;

let HAnimJoint591 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint591.name = "r_transversetarsal";
HAnimJoint591.DEF = "hanim_r_transversetarsal";
HAnimJoint591.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint591.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment592 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment592.name = "r_cuboid";
HAnimSegment592.DEF = "hanim_r_cuboid";
let Transform593 = browser.currentScene.createNode("Transform");
Transform593.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform594 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape595 = browser.currentScene.createNode("Shape");
Shape595.USE = "HAnimJointShape";
Transform594.children = new MFNode();

Transform594.children[0] = Shape595;

Transform593.children = new MFNode();

Transform593.children[0] = Transform594;

HAnimSegment592.children = new MFNode();

HAnimSegment592.children[0] = Transform593;

let Shape596 = browser.currentScene.createNode("Shape");
let LineSet597 = browser.currentScene.createNode("LineSet");
LineSet597.vertexCount = new MFInt32(new int[2]);
let Coordinate598 = browser.currentScene.createNode("Coordinate");
Coordinate598.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet597.coord = Coordinate598;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 1
let ColorRGBA599 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA599.USE = "HAnimSegmentLineColorRGBA";
LineSet597.color = ColorRGBA599;

Shape596.geometry = LineSet597;

HAnimSegment592.children[1] = Shape596;

let Shape600 = browser.currentScene.createNode("Shape");
let LineSet601 = browser.currentScene.createNode("LineSet");
LineSet601.vertexCount = new MFInt32(new int[2]);
let Coordinate602 = browser.currentScene.createNode("Coordinate");
Coordinate602.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet601.coord = Coordinate602;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 1
let ColorRGBA603 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA603.USE = "HAnimSegmentLineColorRGBA";
LineSet601.color = ColorRGBA603;

Shape600.geometry = LineSet601;

HAnimSegment592.children[2] = Shape600;

HAnimJoint591.children = new MFNode();

HAnimJoint591.children[0] = HAnimSegment592;

let HAnimJoint604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint604.name = "r_tarsometatarsal_4";
HAnimJoint604.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint604.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment605 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment605.name = "r_metatarsal_4";
HAnimSegment605.DEF = "hanim_r_metatarsal_4";
let Transform606 = browser.currentScene.createNode("Transform");
Transform606.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform607 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape608 = browser.currentScene.createNode("Shape");
Shape608.USE = "HAnimJointShape";
Transform607.children = new MFNode();

Transform607.children[0] = Shape608;

Transform606.children = new MFNode();

Transform606.children[0] = Transform607;

HAnimSegment605.children = new MFNode();

HAnimSegment605.children[0] = Transform606;

let Shape609 = browser.currentScene.createNode("Shape");
let LineSet610 = browser.currentScene.createNode("LineSet");
LineSet610.vertexCount = new MFInt32(new int[2]);
let Coordinate611 = browser.currentScene.createNode("Coordinate");
Coordinate611.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet610.coord = Coordinate611;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 1
let ColorRGBA612 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA612.USE = "HAnimSegmentLineColorRGBA";
LineSet610.color = ColorRGBA612;

Shape609.geometry = LineSet610;

HAnimSegment605.children[1] = Shape609;

HAnimJoint604.children = new MFNode();

HAnimJoint604.children[0] = HAnimSegment605;

let HAnimJoint613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint613.name = "r_metatarsophalangeal_4";
HAnimJoint613.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint613.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint613.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment614 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment614.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment614.DEF = "hanim_r_tarsal_proximal_phalanx_4";
let Transform615 = browser.currentScene.createNode("Transform");
Transform615.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform616 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape617 = browser.currentScene.createNode("Shape");
Shape617.USE = "HAnimJointShape";
Transform616.children = new MFNode();

Transform616.children[0] = Shape617;

Transform615.children = new MFNode();

Transform615.children[0] = Transform616;

HAnimSegment614.children = new MFNode();

HAnimSegment614.children[0] = Transform615;

let Shape618 = browser.currentScene.createNode("Shape");
let LineSet619 = browser.currentScene.createNode("LineSet");
LineSet619.vertexCount = new MFInt32(new int[2]);
let Coordinate620 = browser.currentScene.createNode("Coordinate");
Coordinate620.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet619.coord = Coordinate620;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 1
let ColorRGBA621 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA621.USE = "HAnimSegmentLineColorRGBA";
LineSet619.color = ColorRGBA621;

Shape618.geometry = LineSet619;

HAnimSegment614.children[1] = Shape618;

HAnimJoint613.children = new MFNode();

HAnimJoint613.children[0] = HAnimSegment614;

let HAnimJoint622 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint622.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint622.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint622.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint622.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment623 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment623.name = "r_tarsal_middle_phalanx_4";
HAnimSegment623.DEF = "hanim_r_tarsal_middle_phalanx_4";
let Transform624 = browser.currentScene.createNode("Transform");
Transform624.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform625 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape626 = browser.currentScene.createNode("Shape");
Shape626.USE = "HAnimJointShape";
Transform625.children = new MFNode();

Transform625.children[0] = Shape626;

Transform624.children = new MFNode();

Transform624.children[0] = Transform625;

HAnimSegment623.children = new MFNode();

HAnimSegment623.children[0] = Transform624;

let Shape627 = browser.currentScene.createNode("Shape");
let LineSet628 = browser.currentScene.createNode("LineSet");
LineSet628.vertexCount = new MFInt32(new int[2]);
let Coordinate629 = browser.currentScene.createNode("Coordinate");
Coordinate629.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet628.coord = Coordinate629;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 1
let ColorRGBA630 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA630.USE = "HAnimSegmentLineColorRGBA";
LineSet628.color = ColorRGBA630;

Shape627.geometry = LineSet628;

HAnimSegment623.children[1] = Shape627;

let HAnimSite631 = browser.currentScene.createNode("HAnimSite");
HAnimSite631.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite631.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
let TouchSensor632 = browser.currentScene.createNode("TouchSensor");
TouchSensor632.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite631.children = new MFNode();

HAnimSite631.children[0] = TouchSensor632;

let Shape633 = browser.currentScene.createNode("Shape");
Shape633.USE = "HAnimSiteShape";
HAnimSite631.children[1] = Shape633;

HAnimSegment623.children[2] = HAnimSite631;

HAnimJoint622.children = new MFNode();

HAnimJoint622.children[0] = HAnimSegment623;

let HAnimJoint634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint634.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint634.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint634.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint634.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint622.children[1] = HAnimJoint634;

HAnimJoint613.children[1] = HAnimJoint622;

HAnimJoint604.children[1] = HAnimJoint613;

HAnimJoint591.children[1] = HAnimJoint604;

let HAnimJoint635 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint635.name = "r_tarsometatarsal_5";
HAnimJoint635.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint635.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint635.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment636 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment636.name = "r_metatarsal_5";
HAnimSegment636.DEF = "hanim_r_metatarsal_5";
let Transform637 = browser.currentScene.createNode("Transform");
Transform637.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform638 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape639 = browser.currentScene.createNode("Shape");
Shape639.USE = "HAnimJointShape";
Transform638.children = new MFNode();

Transform638.children[0] = Shape639;

Transform637.children = new MFNode();

Transform637.children[0] = Transform638;

HAnimSegment636.children = new MFNode();

HAnimSegment636.children[0] = Transform637;

let Shape640 = browser.currentScene.createNode("Shape");
let LineSet641 = browser.currentScene.createNode("LineSet");
LineSet641.vertexCount = new MFInt32(new int[2]);
let Coordinate642 = browser.currentScene.createNode("Coordinate");
Coordinate642.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet641.coord = Coordinate642;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 1
let ColorRGBA643 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA643.USE = "HAnimSegmentLineColorRGBA";
LineSet641.color = ColorRGBA643;

Shape640.geometry = LineSet641;

HAnimSegment636.children[1] = Shape640;

let HAnimSite644 = browser.currentScene.createNode("HAnimSite");
HAnimSite644.name = "r_metatarsal_phalanx_5_pt";
HAnimSite644.DEF = "hanim_r_metatarsal_phalanx_5_pt";
let TouchSensor645 = browser.currentScene.createNode("TouchSensor");
TouchSensor645.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite644.children = new MFNode();

HAnimSite644.children[0] = TouchSensor645;

let Shape646 = browser.currentScene.createNode("Shape");
Shape646.USE = "HAnimSiteShape";
HAnimSite644.children[1] = Shape646;

HAnimSegment636.children[2] = HAnimSite644;

HAnimJoint635.children = new MFNode();

HAnimJoint635.children[0] = HAnimSegment636;

let HAnimJoint647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint647.name = "r_metatarsophalangeal_5";
HAnimJoint647.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint647.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint647.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment648 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment648.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment648.DEF = "hanim_r_tarsal_proximal_phalanx_5";
let Transform649 = browser.currentScene.createNode("Transform");
Transform649.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform650 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape651 = browser.currentScene.createNode("Shape");
Shape651.USE = "HAnimJointShape";
Transform650.children = new MFNode();

Transform650.children[0] = Shape651;

Transform649.children = new MFNode();

Transform649.children[0] = Transform650;

HAnimSegment648.children = new MFNode();

HAnimSegment648.children[0] = Transform649;

let Shape652 = browser.currentScene.createNode("Shape");
let LineSet653 = browser.currentScene.createNode("LineSet");
LineSet653.vertexCount = new MFInt32(new int[2]);
let Coordinate654 = browser.currentScene.createNode("Coordinate");
Coordinate654.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet653.coord = Coordinate654;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 1
let ColorRGBA655 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA655.USE = "HAnimSegmentLineColorRGBA";
LineSet653.color = ColorRGBA655;

Shape652.geometry = LineSet653;

HAnimSegment648.children[1] = Shape652;

HAnimJoint647.children = new MFNode();

HAnimJoint647.children[0] = HAnimSegment648;

let HAnimJoint656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint656.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint656.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint656.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint656.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment657 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment657.name = "r_tarsal_middle_phalanx_5";
HAnimSegment657.DEF = "hanim_r_tarsal_middle_phalanx_5";
let Transform658 = browser.currentScene.createNode("Transform");
Transform658.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let Transform659 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape660 = browser.currentScene.createNode("Shape");
Shape660.USE = "HAnimJointShape";
Transform659.children = new MFNode();

Transform659.children[0] = Shape660;

Transform658.children = new MFNode();

Transform658.children[0] = Transform659;

HAnimSegment657.children = new MFNode();

HAnimSegment657.children[0] = Transform658;

let Shape661 = browser.currentScene.createNode("Shape");
let LineSet662 = browser.currentScene.createNode("LineSet");
LineSet662.vertexCount = new MFInt32(new int[2]);
let Coordinate663 = browser.currentScene.createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet662.coord = Coordinate663;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 1
let ColorRGBA664 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimSegment657.children[1] = Shape661;

let HAnimSite665 = browser.currentScene.createNode("HAnimSite");
HAnimSite665.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite665.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
let TouchSensor666 = browser.currentScene.createNode("TouchSensor");
TouchSensor666.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite665.children = new MFNode();

HAnimSite665.children[0] = TouchSensor666;

let Shape667 = browser.currentScene.createNode("Shape");
Shape667.USE = "HAnimSiteShape";
HAnimSite665.children[1] = Shape667;

HAnimSegment657.children[2] = HAnimSite665;

HAnimJoint656.children = new MFNode();

HAnimJoint656.children[0] = HAnimSegment657;

let HAnimJoint668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint668.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint668.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint668.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint668.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint656.children[1] = HAnimJoint668;

HAnimJoint647.children[1] = HAnimJoint656;

HAnimJoint635.children[1] = HAnimJoint647;

HAnimJoint591.children[2] = HAnimJoint635;

HAnimJoint582.children[1] = HAnimJoint591;

HAnimJoint438.children[2] = HAnimJoint582;

HAnimJoint423.children[1] = HAnimJoint438;

HAnimJoint405.children[1] = HAnimJoint423;

HAnimJoint104.children[2] = HAnimJoint405;

HAnimJoint52.children[1] = HAnimJoint104;

let HAnimJoint669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint669.name = "vl5";
HAnimJoint669.DEF = "hanim_vl5";
HAnimJoint669.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint669.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint669.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment670 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment670.name = "l5";
HAnimSegment670.DEF = "hanim_l5";
let Transform671 = browser.currentScene.createNode("Transform");
Transform671.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Transform672 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape673 = browser.currentScene.createNode("Shape");
Shape673.USE = "HAnimJointShape";
Transform672.children = new MFNode();

Transform672.children[0] = Shape673;

Transform671.children = new MFNode();

Transform671.children[0] = Transform672;

HAnimSegment670.children = new MFNode();

HAnimSegment670.children[0] = Transform671;

let Shape674 = browser.currentScene.createNode("Shape");
let LineSet675 = browser.currentScene.createNode("LineSet");
LineSet675.vertexCount = new MFInt32(new int[2]);
let Coordinate676 = browser.currentScene.createNode("Coordinate");
Coordinate676.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet675.coord = Coordinate676;

//from vl5 to vl4 vertices 2
let ColorRGBA677 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA677.USE = "HAnimSegmentLineColorRGBA";
LineSet675.color = ColorRGBA677;

Shape674.geometry = LineSet675;

HAnimSegment670.children[1] = Shape674;

HAnimJoint669.children = new MFNode();

HAnimJoint669.children[0] = HAnimSegment670;

let HAnimJoint678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint678.name = "vl4";
HAnimJoint678.DEF = "hanim_vl4";
HAnimJoint678.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint678.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint678.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment679 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment679.name = "l4";
HAnimSegment679.DEF = "hanim_l4";
let Transform680 = browser.currentScene.createNode("Transform");
Transform680.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Transform681 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape682 = browser.currentScene.createNode("Shape");
Shape682.USE = "HAnimJointShape";
Transform681.children = new MFNode();

Transform681.children[0] = Shape682;

Transform680.children = new MFNode();

Transform680.children[0] = Transform681;

HAnimSegment679.children = new MFNode();

HAnimSegment679.children[0] = Transform680;

let Shape683 = browser.currentScene.createNode("Shape");
let LineSet684 = browser.currentScene.createNode("LineSet");
LineSet684.vertexCount = new MFInt32(new int[2]);
let Coordinate685 = browser.currentScene.createNode("Coordinate");
Coordinate685.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet684.coord = Coordinate685;

//from vl4 to vl3 vertices 2
let ColorRGBA686 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA686.USE = "HAnimSegmentLineColorRGBA";
LineSet684.color = ColorRGBA686;

Shape683.geometry = LineSet684;

HAnimSegment679.children[1] = Shape683;

HAnimJoint678.children = new MFNode();

HAnimJoint678.children[0] = HAnimSegment679;

let HAnimJoint687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint687.name = "vl3";
HAnimJoint687.DEF = "hanim_vl3";
HAnimJoint687.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint687.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint687.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment688 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment688.name = "l3";
HAnimSegment688.DEF = "hanim_l3";
let Transform689 = browser.currentScene.createNode("Transform");
Transform689.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Transform690 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape691 = browser.currentScene.createNode("Shape");
Shape691.USE = "HAnimJointShape";
Transform690.children = new MFNode();

Transform690.children[0] = Shape691;

Transform689.children = new MFNode();

Transform689.children[0] = Transform690;

HAnimSegment688.children = new MFNode();

HAnimSegment688.children[0] = Transform689;

let Shape692 = browser.currentScene.createNode("Shape");
let LineSet693 = browser.currentScene.createNode("LineSet");
LineSet693.vertexCount = new MFInt32(new int[2]);
let Coordinate694 = browser.currentScene.createNode("Coordinate");
Coordinate694.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet693.coord = Coordinate694;

//from vl3 to vl2 vertices 2
let ColorRGBA695 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA695.USE = "HAnimSegmentLineColorRGBA";
LineSet693.color = ColorRGBA695;

Shape692.geometry = LineSet693;

HAnimSegment688.children[1] = Shape692;

let HAnimSite696 = browser.currentScene.createNode("HAnimSite");
HAnimSite696.name = "l_rib10_pt";
HAnimSite696.DEF = "hanim_l_rib10_pt";
HAnimSite696.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let TouchSensor697 = browser.currentScene.createNode("TouchSensor");
TouchSensor697.description = "HAnimSite l_rib10_pt";
HAnimSite696.children = new MFNode();

HAnimSite696.children[0] = TouchSensor697;

let Shape698 = browser.currentScene.createNode("Shape");
Shape698.USE = "HAnimSiteShape";
HAnimSite696.children[1] = Shape698;

HAnimSegment688.children[2] = HAnimSite696;

let HAnimSite699 = browser.currentScene.createNode("HAnimSite");
HAnimSite699.name = "r_rib10_pt";
HAnimSite699.DEF = "hanim_r_rib10_pt";
HAnimSite699.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let TouchSensor700 = browser.currentScene.createNode("TouchSensor");
TouchSensor700.description = "HAnimSite r_rib10_pt";
HAnimSite699.children = new MFNode();

HAnimSite699.children[0] = TouchSensor700;

let Shape701 = browser.currentScene.createNode("Shape");
Shape701.USE = "HAnimSiteShape";
HAnimSite699.children[1] = Shape701;

HAnimSegment688.children[3] = HAnimSite699;

let HAnimSite702 = browser.currentScene.createNode("HAnimSite");
HAnimSite702.name = "spine_2_middle_back_pt";
HAnimSite702.DEF = "hanim_spine_2_middle_back_pt";
let TouchSensor703 = browser.currentScene.createNode("TouchSensor");
TouchSensor703.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite702.children = new MFNode();

HAnimSite702.children[0] = TouchSensor703;

let Shape704 = browser.currentScene.createNode("Shape");
Shape704.USE = "HAnimSiteShape";
HAnimSite702.children[1] = Shape704;

HAnimSegment688.children[4] = HAnimSite702;

HAnimJoint687.children = new MFNode();

HAnimJoint687.children[0] = HAnimSegment688;

let HAnimJoint705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint705.name = "vl2";
HAnimJoint705.DEF = "hanim_vl2";
HAnimJoint705.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint705.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint705.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment706 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment706.name = "l2";
HAnimSegment706.DEF = "hanim_l2";
let Transform707 = browser.currentScene.createNode("Transform");
Transform707.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Transform708 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape709 = browser.currentScene.createNode("Shape");
Shape709.USE = "HAnimJointShape";
Transform708.children = new MFNode();

Transform708.children[0] = Shape709;

Transform707.children = new MFNode();

Transform707.children[0] = Transform708;

HAnimSegment706.children = new MFNode();

HAnimSegment706.children[0] = Transform707;

let Shape710 = browser.currentScene.createNode("Shape");
let LineSet711 = browser.currentScene.createNode("LineSet");
LineSet711.vertexCount = new MFInt32(new int[2]);
let Coordinate712 = browser.currentScene.createNode("Coordinate");
Coordinate712.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet711.coord = Coordinate712;

//from vl2 to vl1 vertices 2
let ColorRGBA713 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA713.USE = "HAnimSegmentLineColorRGBA";
LineSet711.color = ColorRGBA713;

Shape710.geometry = LineSet711;

HAnimSegment706.children[1] = Shape710;

HAnimJoint705.children = new MFNode();

HAnimJoint705.children[0] = HAnimSegment706;

let HAnimJoint714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint714.name = "vl1";
HAnimJoint714.DEF = "hanim_vl1";
HAnimJoint714.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint714.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint714.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment715 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment715.name = "l1";
HAnimSegment715.DEF = "hanim_l1";
let Transform716 = browser.currentScene.createNode("Transform");
Transform716.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Transform717 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape718 = browser.currentScene.createNode("Shape");
Shape718.USE = "HAnimJointShape";
Transform717.children = new MFNode();

Transform717.children[0] = Shape718;

Transform716.children = new MFNode();

Transform716.children[0] = Transform717;

HAnimSegment715.children = new MFNode();

HAnimSegment715.children[0] = Transform716;

let Shape719 = browser.currentScene.createNode("Shape");
let LineSet720 = browser.currentScene.createNode("LineSet");
LineSet720.vertexCount = new MFInt32(new int[2]);
let Coordinate721 = browser.currentScene.createNode("Coordinate");
Coordinate721.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet720.coord = Coordinate721;

//from vl1 to vt12 vertices 2
let ColorRGBA722 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA722.USE = "HAnimSegmentLineColorRGBA";
LineSet720.color = ColorRGBA722;

Shape719.geometry = LineSet720;

HAnimSegment715.children[1] = Shape719;

HAnimJoint714.children = new MFNode();

HAnimJoint714.children[0] = HAnimSegment715;

let HAnimJoint723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint723.name = "vt12";
HAnimJoint723.DEF = "hanim_vt12";
HAnimJoint723.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint723.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint723.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment724 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment724.name = "t12";
HAnimSegment724.DEF = "hanim_t12";
let Transform725 = browser.currentScene.createNode("Transform");
Transform725.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Transform726 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape727 = browser.currentScene.createNode("Shape");
Shape727.USE = "HAnimJointShape";
Transform726.children = new MFNode();

Transform726.children[0] = Shape727;

Transform725.children = new MFNode();

Transform725.children[0] = Transform726;

HAnimSegment724.children = new MFNode();

HAnimSegment724.children[0] = Transform725;

let Shape728 = browser.currentScene.createNode("Shape");
let LineSet729 = browser.currentScene.createNode("LineSet");
LineSet729.vertexCount = new MFInt32(new int[2]);
let Coordinate730 = browser.currentScene.createNode("Coordinate");
Coordinate730.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet729.coord = Coordinate730;

//from vt12 to vt11 vertices 2
let ColorRGBA731 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
LineSet729.color = ColorRGBA731;

Shape728.geometry = LineSet729;

HAnimSegment724.children[1] = Shape728;

HAnimJoint723.children = new MFNode();

HAnimJoint723.children[0] = HAnimSegment724;

let HAnimJoint732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint732.name = "vt11";
HAnimJoint732.DEF = "hanim_vt11";
HAnimJoint732.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint732.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint732.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment733 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment733.name = "t11";
HAnimSegment733.DEF = "hanim_t11";
let Transform734 = browser.currentScene.createNode("Transform");
Transform734.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Transform735 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape736 = browser.currentScene.createNode("Shape");
Shape736.USE = "HAnimJointShape";
Transform735.children = new MFNode();

Transform735.children[0] = Shape736;

Transform734.children = new MFNode();

Transform734.children[0] = Transform735;

HAnimSegment733.children = new MFNode();

HAnimSegment733.children[0] = Transform734;

let Shape737 = browser.currentScene.createNode("Shape");
let LineSet738 = browser.currentScene.createNode("LineSet");
LineSet738.vertexCount = new MFInt32(new int[2]);
let Coordinate739 = browser.currentScene.createNode("Coordinate");
Coordinate739.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet738.coord = Coordinate739;

//from vt11 to vt10 vertices 2
let ColorRGBA740 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA740.USE = "HAnimSegmentLineColorRGBA";
LineSet738.color = ColorRGBA740;

Shape737.geometry = LineSet738;

HAnimSegment733.children[1] = Shape737;

let HAnimSite741 = browser.currentScene.createNode("HAnimSite");
HAnimSite741.name = "substernale_pt";
HAnimSite741.DEF = "hanim_substernale_pt";
HAnimSite741.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor742 = browser.currentScene.createNode("TouchSensor");
TouchSensor742.description = "HAnimSite substernale_pt";
HAnimSite741.children = new MFNode();

HAnimSite741.children[0] = TouchSensor742;

let Shape743 = browser.currentScene.createNode("Shape");
Shape743.USE = "HAnimSiteShape";
HAnimSite741.children[1] = Shape743;

HAnimSegment733.children[2] = HAnimSite741;

HAnimJoint732.children = new MFNode();

HAnimJoint732.children[0] = HAnimSegment733;

let HAnimJoint744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint744.name = "vt10";
HAnimJoint744.DEF = "hanim_vt10";
HAnimJoint744.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint744.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint744.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment745 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment745.name = "t10";
HAnimSegment745.DEF = "hanim_t10";
let Transform746 = browser.currentScene.createNode("Transform");
Transform746.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Transform747 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape748 = browser.currentScene.createNode("Shape");
Shape748.USE = "HAnimJointShape";
Transform747.children = new MFNode();

Transform747.children[0] = Shape748;

Transform746.children = new MFNode();

Transform746.children[0] = Transform747;

HAnimSegment745.children = new MFNode();

HAnimSegment745.children[0] = Transform746;

let Shape749 = browser.currentScene.createNode("Shape");
let LineSet750 = browser.currentScene.createNode("LineSet");
LineSet750.vertexCount = new MFInt32(new int[2]);
let Coordinate751 = browser.currentScene.createNode("Coordinate");
Coordinate751.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet750.coord = Coordinate751;

//from vt10 to vt9 vertices 2
let ColorRGBA752 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA752.USE = "HAnimSegmentLineColorRGBA";
LineSet750.color = ColorRGBA752;

Shape749.geometry = LineSet750;

HAnimSegment745.children[1] = Shape749;

let HAnimSite753 = browser.currentScene.createNode("HAnimSite");
HAnimSite753.name = "l_thelion_pt";
HAnimSite753.DEF = "hanim_l_thelion_pt";
HAnimSite753.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let TouchSensor754 = browser.currentScene.createNode("TouchSensor");
TouchSensor754.description = "HAnimSite l_thelion_pt";
HAnimSite753.children = new MFNode();

HAnimSite753.children[0] = TouchSensor754;

let Shape755 = browser.currentScene.createNode("Shape");
Shape755.USE = "HAnimSiteShape";
HAnimSite753.children[1] = Shape755;

HAnimSegment745.children[2] = HAnimSite753;

let HAnimSite756 = browser.currentScene.createNode("HAnimSite");
HAnimSite756.name = "r_thelion_pt";
HAnimSite756.DEF = "hanim_r_thelion_pt";
HAnimSite756.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let TouchSensor757 = browser.currentScene.createNode("TouchSensor");
TouchSensor757.description = "HAnimSite r_thelion_pt";
HAnimSite756.children = new MFNode();

HAnimSite756.children[0] = TouchSensor757;

let Shape758 = browser.currentScene.createNode("Shape");
Shape758.USE = "HAnimSiteShape";
HAnimSite756.children[1] = Shape758;

HAnimSegment745.children[3] = HAnimSite756;

HAnimJoint744.children = new MFNode();

HAnimJoint744.children[0] = HAnimSegment745;

let HAnimJoint759 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint759.name = "vt9";
HAnimJoint759.DEF = "hanim_vt9";
HAnimJoint759.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint759.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint759.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment760.name = "t9";
HAnimSegment760.DEF = "hanim_t9";
let Transform761 = browser.currentScene.createNode("Transform");
Transform761.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Transform762 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape763 = browser.currentScene.createNode("Shape");
Shape763.USE = "HAnimJointShape";
Transform762.children = new MFNode();

Transform762.children[0] = Shape763;

Transform761.children = new MFNode();

Transform761.children[0] = Transform762;

HAnimSegment760.children = new MFNode();

HAnimSegment760.children[0] = Transform761;

let Shape764 = browser.currentScene.createNode("Shape");
let LineSet765 = browser.currentScene.createNode("LineSet");
LineSet765.vertexCount = new MFInt32(new int[2]);
let Coordinate766 = browser.currentScene.createNode("Coordinate");
Coordinate766.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet765.coord = Coordinate766;

//from vt9 to vt8 vertices 2
let ColorRGBA767 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA767.USE = "HAnimSegmentLineColorRGBA";
LineSet765.color = ColorRGBA767;

Shape764.geometry = LineSet765;

HAnimSegment760.children[1] = Shape764;

HAnimJoint759.children = new MFNode();

HAnimJoint759.children[0] = HAnimSegment760;

let HAnimJoint768 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint768.name = "vt8";
HAnimJoint768.DEF = "hanim_vt8";
HAnimJoint768.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint768.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint768.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment769.name = "t8";
HAnimSegment769.DEF = "hanim_t8";
let Transform770 = browser.currentScene.createNode("Transform");
Transform770.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Transform771 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape772 = browser.currentScene.createNode("Shape");
Shape772.USE = "HAnimJointShape";
Transform771.children = new MFNode();

Transform771.children[0] = Shape772;

Transform770.children = new MFNode();

Transform770.children[0] = Transform771;

HAnimSegment769.children = new MFNode();

HAnimSegment769.children[0] = Transform770;

let Shape773 = browser.currentScene.createNode("Shape");
let LineSet774 = browser.currentScene.createNode("LineSet");
LineSet774.vertexCount = new MFInt32(new int[2]);
let Coordinate775 = browser.currentScene.createNode("Coordinate");
Coordinate775.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet774.coord = Coordinate775;

//from vt8 to vt7 vertices 2
let ColorRGBA776 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA776.USE = "HAnimSegmentLineColorRGBA";
LineSet774.color = ColorRGBA776;

Shape773.geometry = LineSet774;

HAnimSegment769.children[1] = Shape773;

HAnimJoint768.children = new MFNode();

HAnimJoint768.children[0] = HAnimSegment769;

let HAnimJoint777 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint777.name = "vt7";
HAnimJoint777.DEF = "hanim_vt7";
HAnimJoint777.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint777.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint777.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment778.name = "t7";
HAnimSegment778.DEF = "hanim_t7";
let Transform779 = browser.currentScene.createNode("Transform");
Transform779.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Transform780 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape781 = browser.currentScene.createNode("Shape");
Shape781.USE = "HAnimJointShape";
Transform780.children = new MFNode();

Transform780.children[0] = Shape781;

Transform779.children = new MFNode();

Transform779.children[0] = Transform780;

HAnimSegment778.children = new MFNode();

HAnimSegment778.children[0] = Transform779;

let Shape782 = browser.currentScene.createNode("Shape");
let LineSet783 = browser.currentScene.createNode("LineSet");
LineSet783.vertexCount = new MFInt32(new int[2]);
let Coordinate784 = browser.currentScene.createNode("Coordinate");
Coordinate784.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet783.coord = Coordinate784;

//from vt7 to vt6 vertices 2
let ColorRGBA785 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA785.USE = "HAnimSegmentLineColorRGBA";
LineSet783.color = ColorRGBA785;

Shape782.geometry = LineSet783;

HAnimSegment778.children[1] = Shape782;

let HAnimSite786 = browser.currentScene.createNode("HAnimSite");
HAnimSite786.name = "l_chest_midsagittal_plane_pt";
HAnimSite786.DEF = "hanim_l_chest_midsagittal_plane_pt";
let TouchSensor787 = browser.currentScene.createNode("TouchSensor");
TouchSensor787.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = TouchSensor787;

let Shape788 = browser.currentScene.createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786.children[1] = Shape788;

HAnimSegment778.children[2] = HAnimSite786;

let HAnimSite789 = browser.currentScene.createNode("HAnimSite");
HAnimSite789.name = "mesosternale_pt";
HAnimSite789.DEF = "hanim_mesosternale_pt";
let TouchSensor790 = browser.currentScene.createNode("TouchSensor");
TouchSensor790.description = "HAnimSite mesosternale_pt";
HAnimSite789.children = new MFNode();

HAnimSite789.children[0] = TouchSensor790;

let Shape791 = browser.currentScene.createNode("Shape");
Shape791.USE = "HAnimSiteShape";
HAnimSite789.children[1] = Shape791;

HAnimSegment778.children[3] = HAnimSite789;

let HAnimSite792 = browser.currentScene.createNode("HAnimSite");
HAnimSite792.name = "r_chest_midsagittal_plane_pt";
HAnimSite792.DEF = "hanim_r_chest_midsagittal_plane_pt";
let TouchSensor793 = browser.currentScene.createNode("TouchSensor");
TouchSensor793.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite792.children = new MFNode();

HAnimSite792.children[0] = TouchSensor793;

let Shape794 = browser.currentScene.createNode("Shape");
Shape794.USE = "HAnimSiteShape";
HAnimSite792.children[1] = Shape794;

HAnimSegment778.children[4] = HAnimSite792;

let HAnimSite795 = browser.currentScene.createNode("HAnimSite");
HAnimSite795.name = "rear_center_midsagittal_plane_pt";
HAnimSite795.DEF = "hanim_rear_center_midsagittal_plane_pt";
let TouchSensor796 = browser.currentScene.createNode("TouchSensor");
TouchSensor796.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite795.children = new MFNode();

HAnimSite795.children[0] = TouchSensor796;

let Shape797 = browser.currentScene.createNode("Shape");
Shape797.USE = "HAnimSiteShape";
HAnimSite795.children[1] = Shape797;

HAnimSegment778.children[5] = HAnimSite795;

HAnimJoint777.children = new MFNode();

HAnimJoint777.children[0] = HAnimSegment778;

let HAnimJoint798 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint798.name = "vt6";
HAnimJoint798.DEF = "hanim_vt6";
HAnimJoint798.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint798.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint798.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment799.name = "t6";
HAnimSegment799.DEF = "hanim_t6";
let Transform800 = browser.currentScene.createNode("Transform");
Transform800.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Transform801 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape802 = browser.currentScene.createNode("Shape");
Shape802.USE = "HAnimJointShape";
Transform801.children = new MFNode();

Transform801.children[0] = Shape802;

Transform800.children = new MFNode();

Transform800.children[0] = Transform801;

HAnimSegment799.children = new MFNode();

HAnimSegment799.children[0] = Transform800;

let Shape803 = browser.currentScene.createNode("Shape");
let LineSet804 = browser.currentScene.createNode("LineSet");
LineSet804.vertexCount = new MFInt32(new int[2]);
let Coordinate805 = browser.currentScene.createNode("Coordinate");
Coordinate805.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet804.coord = Coordinate805;

//from vt6 to vt5 vertices 2
let ColorRGBA806 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA806.USE = "HAnimSegmentLineColorRGBA";
LineSet804.color = ColorRGBA806;

Shape803.geometry = LineSet804;

HAnimSegment799.children[1] = Shape803;

let HAnimSite807 = browser.currentScene.createNode("HAnimSite");
HAnimSite807.name = "spine_1_middle_back_pt";
HAnimSite807.DEF = "hanim_spine_1_middle_back_pt";
let TouchSensor808 = browser.currentScene.createNode("TouchSensor");
TouchSensor808.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite807.children = new MFNode();

HAnimSite807.children[0] = TouchSensor808;

let Shape809 = browser.currentScene.createNode("Shape");
Shape809.USE = "HAnimSiteShape";
HAnimSite807.children[1] = Shape809;

HAnimSegment799.children[2] = HAnimSite807;

HAnimJoint798.children = new MFNode();

HAnimJoint798.children[0] = HAnimSegment799;

let HAnimJoint810 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint810.name = "vt5";
HAnimJoint810.DEF = "hanim_vt5";
HAnimJoint810.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint810.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint810.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment811.name = "t5";
HAnimSegment811.DEF = "hanim_t5";
let Transform812 = browser.currentScene.createNode("Transform");
Transform812.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Transform813 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape814 = browser.currentScene.createNode("Shape");
Shape814.USE = "HAnimJointShape";
Transform813.children = new MFNode();

Transform813.children[0] = Shape814;

Transform812.children = new MFNode();

Transform812.children[0] = Transform813;

HAnimSegment811.children = new MFNode();

HAnimSegment811.children[0] = Transform812;

let Shape815 = browser.currentScene.createNode("Shape");
let LineSet816 = browser.currentScene.createNode("LineSet");
LineSet816.vertexCount = new MFInt32(new int[2]);
let Coordinate817 = browser.currentScene.createNode("Coordinate");
Coordinate817.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet816.coord = Coordinate817;

//from vt5 to vt4 vertices 2
let ColorRGBA818 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA818.USE = "HAnimSegmentLineColorRGBA";
LineSet816.color = ColorRGBA818;

Shape815.geometry = LineSet816;

HAnimSegment811.children[1] = Shape815;

HAnimJoint810.children = new MFNode();

HAnimJoint810.children[0] = HAnimSegment811;

let HAnimJoint819 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint819.name = "vt4";
HAnimJoint819.DEF = "hanim_vt4";
HAnimJoint819.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint819.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint819.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment820.name = "t4";
HAnimSegment820.DEF = "hanim_t4";
let Transform821 = browser.currentScene.createNode("Transform");
Transform821.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Transform822 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape823 = browser.currentScene.createNode("Shape");
Shape823.USE = "HAnimJointShape";
Transform822.children = new MFNode();

Transform822.children[0] = Shape823;

Transform821.children = new MFNode();

Transform821.children[0] = Transform822;

HAnimSegment820.children = new MFNode();

HAnimSegment820.children[0] = Transform821;

let Shape824 = browser.currentScene.createNode("Shape");
let LineSet825 = browser.currentScene.createNode("LineSet");
LineSet825.vertexCount = new MFInt32(new int[2]);
let Coordinate826 = browser.currentScene.createNode("Coordinate");
Coordinate826.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet825.coord = Coordinate826;

//from vt4 to vt3 vertices 2
let ColorRGBA827 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA827.USE = "HAnimSegmentLineColorRGBA";
LineSet825.color = ColorRGBA827;

Shape824.geometry = LineSet825;

HAnimSegment820.children[1] = Shape824;

HAnimJoint819.children = new MFNode();

HAnimJoint819.children[0] = HAnimSegment820;

let HAnimJoint828 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint828.name = "vt3";
HAnimJoint828.DEF = "hanim_vt3";
HAnimJoint828.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint828.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint828.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment829.name = "t3";
HAnimSegment829.DEF = "hanim_t3";
let Transform830 = browser.currentScene.createNode("Transform");
Transform830.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Transform831 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape832 = browser.currentScene.createNode("Shape");
Shape832.USE = "HAnimJointShape";
Transform831.children = new MFNode();

Transform831.children[0] = Shape832;

Transform830.children = new MFNode();

Transform830.children[0] = Transform831;

HAnimSegment829.children = new MFNode();

HAnimSegment829.children[0] = Transform830;

let Shape833 = browser.currentScene.createNode("Shape");
let LineSet834 = browser.currentScene.createNode("LineSet");
LineSet834.vertexCount = new MFInt32(new int[2]);
let Coordinate835 = browser.currentScene.createNode("Coordinate");
Coordinate835.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet834.coord = Coordinate835;

//from vt3 to vt2 vertices 2
let ColorRGBA836 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA836.USE = "HAnimSegmentLineColorRGBA";
LineSet834.color = ColorRGBA836;

Shape833.geometry = LineSet834;

HAnimSegment829.children[1] = Shape833;

HAnimJoint828.children = new MFNode();

HAnimJoint828.children[0] = HAnimSegment829;

let HAnimJoint837 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint837.name = "vt2";
HAnimJoint837.DEF = "hanim_vt2";
HAnimJoint837.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint837.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint837.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment838.name = "t2";
HAnimSegment838.DEF = "hanim_t2";
let Transform839 = browser.currentScene.createNode("Transform");
Transform839.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Transform840 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape841 = browser.currentScene.createNode("Shape");
Shape841.USE = "HAnimJointShape";
Transform840.children = new MFNode();

Transform840.children[0] = Shape841;

Transform839.children = new MFNode();

Transform839.children[0] = Transform840;

HAnimSegment838.children = new MFNode();

HAnimSegment838.children[0] = Transform839;

let Shape842 = browser.currentScene.createNode("Shape");
let LineSet843 = browser.currentScene.createNode("LineSet");
LineSet843.vertexCount = new MFInt32(new int[2]);
let Coordinate844 = browser.currentScene.createNode("Coordinate");
Coordinate844.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet843.coord = Coordinate844;

//from vt2 to vt1 vertices 2
let ColorRGBA845 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA845.USE = "HAnimSegmentLineColorRGBA";
LineSet843.color = ColorRGBA845;

Shape842.geometry = LineSet843;

HAnimSegment838.children[1] = Shape842;

let HAnimSite846 = browser.currentScene.createNode("HAnimSite");
HAnimSite846.name = "cervicale_pt";
HAnimSite846.DEF = "hanim_cervicale_pt";
HAnimSite846.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor847 = browser.currentScene.createNode("TouchSensor");
TouchSensor847.description = "HAnimSite cervicale_pt";
HAnimSite846.children = new MFNode();

HAnimSite846.children[0] = TouchSensor847;

let Shape848 = browser.currentScene.createNode("Shape");
Shape848.USE = "HAnimSiteShape";
HAnimSite846.children[1] = Shape848;

HAnimSegment838.children[2] = HAnimSite846;

let HAnimSite849 = browser.currentScene.createNode("HAnimSite");
HAnimSite849.name = "suprasternale_pt";
HAnimSite849.DEF = "hanim_suprasternale_pt";
HAnimSite849.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor850 = browser.currentScene.createNode("TouchSensor");
TouchSensor850.description = "HAnimSite suprasternale_pt";
HAnimSite849.children = new MFNode();

HAnimSite849.children[0] = TouchSensor850;

let Shape851 = browser.currentScene.createNode("Shape");
Shape851.USE = "HAnimSiteShape";
HAnimSite849.children[1] = Shape851;

HAnimSegment838.children[3] = HAnimSite849;

HAnimJoint837.children = new MFNode();

HAnimJoint837.children[0] = HAnimSegment838;

let HAnimJoint852 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint852.name = "vt1";
HAnimJoint852.DEF = "hanim_vt1";
HAnimJoint852.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint852.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint852.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment853.name = "t1";
HAnimSegment853.DEF = "hanim_t1";
let Transform854 = browser.currentScene.createNode("Transform");
Transform854.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Transform855 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape856 = browser.currentScene.createNode("Shape");
Shape856.USE = "HAnimJointShape";
Transform855.children = new MFNode();

Transform855.children[0] = Shape856;

Transform854.children = new MFNode();

Transform854.children[0] = Transform855;

HAnimSegment853.children = new MFNode();

HAnimSegment853.children[0] = Transform854;

let Shape857 = browser.currentScene.createNode("Shape");
let LineSet858 = browser.currentScene.createNode("LineSet");
LineSet858.vertexCount = new MFInt32(new int[2]);
let Coordinate859 = browser.currentScene.createNode("Coordinate");
Coordinate859.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet858.coord = Coordinate859;

//from vt1 to vc7 vertices 2
let ColorRGBA860 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA860.USE = "HAnimSegmentLineColorRGBA";
LineSet858.color = ColorRGBA860;

Shape857.geometry = LineSet858;

HAnimSegment853.children[1] = Shape857;

let HAnimSite861 = browser.currentScene.createNode("HAnimSite");
HAnimSite861.name = "l_neck_base_pt";
HAnimSite861.DEF = "hanim_l_neck_base_pt";
HAnimSite861.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let TouchSensor862 = browser.currentScene.createNode("TouchSensor");
TouchSensor862.description = "HAnimSite l_neck_base_pt";
HAnimSite861.children = new MFNode();

HAnimSite861.children[0] = TouchSensor862;

let Shape863 = browser.currentScene.createNode("Shape");
Shape863.USE = "HAnimSiteShape";
HAnimSite861.children[1] = Shape863;

HAnimSegment853.children[2] = HAnimSite861;

let HAnimSite864 = browser.currentScene.createNode("HAnimSite");
HAnimSite864.name = "r_neck_base_pt";
HAnimSite864.DEF = "hanim_r_neck_base_pt";
HAnimSite864.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let TouchSensor865 = browser.currentScene.createNode("TouchSensor");
TouchSensor865.description = "HAnimSite r_neck_base_pt";
HAnimSite864.children = new MFNode();

HAnimSite864.children[0] = TouchSensor865;

let Shape866 = browser.currentScene.createNode("Shape");
Shape866.USE = "HAnimSiteShape";
HAnimSite864.children[1] = Shape866;

HAnimSegment853.children[3] = HAnimSite864;

let Shape867 = browser.currentScene.createNode("Shape");
let LineSet868 = browser.currentScene.createNode("LineSet");
LineSet868.vertexCount = new MFInt32(new int[2]);
let Coordinate869 = browser.currentScene.createNode("Coordinate");
Coordinate869.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet868.coord = Coordinate869;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA870 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSegmentLineColorRGBA";
LineSet868.color = ColorRGBA870;

Shape867.geometry = LineSet868;

HAnimSegment853.children[4] = Shape867;

let HAnimSite871 = browser.currentScene.createNode("HAnimSite");
HAnimSite871.name = "l_acromion_pt";
HAnimSite871.DEF = "hanim_l_acromion_pt";
HAnimSite871.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor872 = browser.currentScene.createNode("TouchSensor");
TouchSensor872.description = "HAnimSite l_acromion_pt";
HAnimSite871.children = new MFNode();

HAnimSite871.children[0] = TouchSensor872;

let Shape873 = browser.currentScene.createNode("Shape");
Shape873.USE = "HAnimSiteShape";
HAnimSite871.children[1] = Shape873;

HAnimSegment853.children[5] = HAnimSite871;

let HAnimSite874 = browser.currentScene.createNode("HAnimSite");
HAnimSite874.name = "l_axilla_distal_pt";
HAnimSite874.DEF = "hanim_l_axilla_distal_pt";
HAnimSite874.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor875 = browser.currentScene.createNode("TouchSensor");
TouchSensor875.description = "HAnimSite l_axilla_distal_pt";
HAnimSite874.children = new MFNode();

HAnimSite874.children[0] = TouchSensor875;

let Shape876 = browser.currentScene.createNode("Shape");
Shape876.USE = "HAnimSiteShape";
HAnimSite874.children[1] = Shape876;

HAnimSegment853.children[6] = HAnimSite874;

let HAnimSite877 = browser.currentScene.createNode("HAnimSite");
HAnimSite877.name = "l_axilla_posterior_folds_pt";
HAnimSite877.DEF = "hanim_l_axilla_posterior_folds_pt";
let TouchSensor878 = browser.currentScene.createNode("TouchSensor");
TouchSensor878.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite877.children = new MFNode();

HAnimSite877.children[0] = TouchSensor878;

let Shape879 = browser.currentScene.createNode("Shape");
Shape879.USE = "HAnimSiteShape";
HAnimSite877.children[1] = Shape879;

HAnimSegment853.children[7] = HAnimSite877;

let HAnimSite880 = browser.currentScene.createNode("HAnimSite");
HAnimSite880.name = "l_axilla_proximal_pt";
HAnimSite880.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite880.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor881 = browser.currentScene.createNode("TouchSensor");
TouchSensor881.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite880.children = new MFNode();

HAnimSite880.children[0] = TouchSensor881;

let Shape882 = browser.currentScene.createNode("Shape");
Shape882.USE = "HAnimSiteShape";
HAnimSite880.children[1] = Shape882;

HAnimSegment853.children[8] = HAnimSite880;

let HAnimSite883 = browser.currentScene.createNode("HAnimSite");
HAnimSite883.name = "l_clavicale_pt";
HAnimSite883.DEF = "hanim_l_clavicale_pt";
HAnimSite883.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor884 = browser.currentScene.createNode("TouchSensor");
TouchSensor884.description = "HAnimSite l_clavicale_pt";
HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = TouchSensor884;

let Shape885 = browser.currentScene.createNode("Shape");
Shape885.USE = "HAnimSiteShape";
HAnimSite883.children[1] = Shape885;

HAnimSegment853.children[9] = HAnimSite883;

let Shape886 = browser.currentScene.createNode("Shape");
let LineSet887 = browser.currentScene.createNode("LineSet");
LineSet887.vertexCount = new MFInt32(new int[2]);
let Coordinate888 = browser.currentScene.createNode("Coordinate");
Coordinate888.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet887.coord = Coordinate888;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA889 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA889.USE = "HAnimSegmentLineColorRGBA";
LineSet887.color = ColorRGBA889;

Shape886.geometry = LineSet887;

HAnimSegment853.children[10] = Shape886;

let HAnimSite890 = browser.currentScene.createNode("HAnimSite");
HAnimSite890.name = "r_acromion_pt";
HAnimSite890.DEF = "hanim_r_acromion_pt";
HAnimSite890.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor891 = browser.currentScene.createNode("TouchSensor");
TouchSensor891.description = "HAnimSite r_acromion_pt";
HAnimSite890.children = new MFNode();

HAnimSite890.children[0] = TouchSensor891;

let Shape892 = browser.currentScene.createNode("Shape");
Shape892.USE = "HAnimSiteShape";
HAnimSite890.children[1] = Shape892;

HAnimSegment853.children[11] = HAnimSite890;

let HAnimSite893 = browser.currentScene.createNode("HAnimSite");
HAnimSite893.name = "r_axilla_distal_pt";
HAnimSite893.DEF = "hanim_r_axilla_distal_pt";
HAnimSite893.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor894 = browser.currentScene.createNode("TouchSensor");
TouchSensor894.description = "HAnimSite r_axilla_distal_pt";
HAnimSite893.children = new MFNode();

HAnimSite893.children[0] = TouchSensor894;

let Shape895 = browser.currentScene.createNode("Shape");
Shape895.USE = "HAnimSiteShape";
HAnimSite893.children[1] = Shape895;

HAnimSegment853.children[12] = HAnimSite893;

let HAnimSite896 = browser.currentScene.createNode("HAnimSite");
HAnimSite896.name = "r_axilla_posterior_folds_pt";
HAnimSite896.DEF = "hanim_r_axilla_posterior_folds_pt";
let TouchSensor897 = browser.currentScene.createNode("TouchSensor");
TouchSensor897.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite896.children = new MFNode();

HAnimSite896.children[0] = TouchSensor897;

let Shape898 = browser.currentScene.createNode("Shape");
Shape898.USE = "HAnimSiteShape";
HAnimSite896.children[1] = Shape898;

HAnimSegment853.children[13] = HAnimSite896;

let HAnimSite899 = browser.currentScene.createNode("HAnimSite");
HAnimSite899.name = "r_axilla_proximal_pt";
HAnimSite899.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite899.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor900 = browser.currentScene.createNode("TouchSensor");
TouchSensor900.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite899.children = new MFNode();

HAnimSite899.children[0] = TouchSensor900;

let Shape901 = browser.currentScene.createNode("Shape");
Shape901.USE = "HAnimSiteShape";
HAnimSite899.children[1] = Shape901;

HAnimSegment853.children[14] = HAnimSite899;

let HAnimSite902 = browser.currentScene.createNode("HAnimSite");
HAnimSite902.name = "r_clavicale_pt";
HAnimSite902.DEF = "hanim_r_clavicale_pt";
HAnimSite902.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor903 = browser.currentScene.createNode("TouchSensor");
TouchSensor903.description = "HAnimSite r_clavicale_pt";
HAnimSite902.children = new MFNode();

HAnimSite902.children[0] = TouchSensor903;

let Shape904 = browser.currentScene.createNode("Shape");
Shape904.USE = "HAnimSiteShape";
HAnimSite902.children[1] = Shape904;

HAnimSegment853.children[15] = HAnimSite902;

HAnimJoint852.children = new MFNode();

HAnimJoint852.children[0] = HAnimSegment853;

let HAnimJoint905 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint905.name = "vc7";
HAnimJoint905.DEF = "hanim_vc7";
HAnimJoint905.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint905.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint905.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment906 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment906.name = "c7";
HAnimSegment906.DEF = "hanim_c7";
let Transform907 = browser.currentScene.createNode("Transform");
Transform907.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Transform908 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape909 = browser.currentScene.createNode("Shape");
Shape909.USE = "HAnimJointShape";
Transform908.children = new MFNode();

Transform908.children[0] = Shape909;

Transform907.children = new MFNode();

Transform907.children[0] = Transform908;

HAnimSegment906.children = new MFNode();

HAnimSegment906.children[0] = Transform907;

let Shape910 = browser.currentScene.createNode("Shape");
let LineSet911 = browser.currentScene.createNode("LineSet");
LineSet911.vertexCount = new MFInt32(new int[2]);
let Coordinate912 = browser.currentScene.createNode("Coordinate");
Coordinate912.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet911.coord = Coordinate912;

//from vc7 to vc6 vertices 2
let ColorRGBA913 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA913.USE = "HAnimSegmentLineColorRGBA";
LineSet911.color = ColorRGBA913;

Shape910.geometry = LineSet911;

HAnimSegment906.children[1] = Shape910;

HAnimJoint905.children = new MFNode();

HAnimJoint905.children[0] = HAnimSegment906;

let HAnimJoint914 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint914.name = "vc6";
HAnimJoint914.DEF = "hanim_vc6";
HAnimJoint914.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint914.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint914.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment915 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment915.name = "c6";
HAnimSegment915.DEF = "hanim_c6";
let Transform916 = browser.currentScene.createNode("Transform");
Transform916.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Transform917 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape918 = browser.currentScene.createNode("Shape");
Shape918.USE = "HAnimJointShape";
Transform917.children = new MFNode();

Transform917.children[0] = Shape918;

Transform916.children = new MFNode();

Transform916.children[0] = Transform917;

HAnimSegment915.children = new MFNode();

HAnimSegment915.children[0] = Transform916;

let Shape919 = browser.currentScene.createNode("Shape");
let LineSet920 = browser.currentScene.createNode("LineSet");
LineSet920.vertexCount = new MFInt32(new int[2]);
let Coordinate921 = browser.currentScene.createNode("Coordinate");
Coordinate921.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet920.coord = Coordinate921;

//from vc6 to vc5 vertices 2
let ColorRGBA922 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA922.USE = "HAnimSegmentLineColorRGBA";
LineSet920.color = ColorRGBA922;

Shape919.geometry = LineSet920;

HAnimSegment915.children[1] = Shape919;

HAnimJoint914.children = new MFNode();

HAnimJoint914.children[0] = HAnimSegment915;

let HAnimJoint923 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint923.name = "vc5";
HAnimJoint923.DEF = "hanim_vc5";
HAnimJoint923.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint923.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint923.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment924 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment924.name = "c5";
HAnimSegment924.DEF = "hanim_c5";
let Transform925 = browser.currentScene.createNode("Transform");
Transform925.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Transform926 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape927 = browser.currentScene.createNode("Shape");
Shape927.USE = "HAnimJointShape";
Transform926.children = new MFNode();

Transform926.children[0] = Shape927;

Transform925.children = new MFNode();

Transform925.children[0] = Transform926;

HAnimSegment924.children = new MFNode();

HAnimSegment924.children[0] = Transform925;

let Shape928 = browser.currentScene.createNode("Shape");
let LineSet929 = browser.currentScene.createNode("LineSet");
LineSet929.vertexCount = new MFInt32(new int[2]);
let Coordinate930 = browser.currentScene.createNode("Coordinate");
Coordinate930.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet929.coord = Coordinate930;

//from vc5 to vc4 vertices 2
let ColorRGBA931 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA931.USE = "HAnimSegmentLineColorRGBA";
LineSet929.color = ColorRGBA931;

Shape928.geometry = LineSet929;

HAnimSegment924.children[1] = Shape928;

HAnimJoint923.children = new MFNode();

HAnimJoint923.children[0] = HAnimSegment924;

let HAnimJoint932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint932.name = "vc4";
HAnimJoint932.DEF = "hanim_vc4";
HAnimJoint932.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint932.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint932.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment933 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment933.name = "c4";
HAnimSegment933.DEF = "hanim_c4";
let Transform934 = browser.currentScene.createNode("Transform");
Transform934.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Transform935 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape936 = browser.currentScene.createNode("Shape");
Shape936.USE = "HAnimJointShape";
Transform935.children = new MFNode();

Transform935.children[0] = Shape936;

Transform934.children = new MFNode();

Transform934.children[0] = Transform935;

HAnimSegment933.children = new MFNode();

HAnimSegment933.children[0] = Transform934;

let Shape937 = browser.currentScene.createNode("Shape");
let LineSet938 = browser.currentScene.createNode("LineSet");
LineSet938.vertexCount = new MFInt32(new int[2]);
let Coordinate939 = browser.currentScene.createNode("Coordinate");
Coordinate939.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet938.coord = Coordinate939;

//from vc4 to vc3 vertices 2
let ColorRGBA940 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA940.USE = "HAnimSegmentLineColorRGBA";
LineSet938.color = ColorRGBA940;

Shape937.geometry = LineSet938;

HAnimSegment933.children[1] = Shape937;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

let HAnimJoint941 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint941.name = "vc3";
HAnimJoint941.DEF = "hanim_vc3";
HAnimJoint941.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint941.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint941.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment942 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment942.name = "c3";
HAnimSegment942.DEF = "hanim_c3";
let Transform943 = browser.currentScene.createNode("Transform");
Transform943.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Transform944 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape945 = browser.currentScene.createNode("Shape");
Shape945.USE = "HAnimJointShape";
Transform944.children = new MFNode();

Transform944.children[0] = Shape945;

Transform943.children = new MFNode();

Transform943.children[0] = Transform944;

HAnimSegment942.children = new MFNode();

HAnimSegment942.children[0] = Transform943;

let Shape946 = browser.currentScene.createNode("Shape");
let LineSet947 = browser.currentScene.createNode("LineSet");
LineSet947.vertexCount = new MFInt32(new int[2]);
let Coordinate948 = browser.currentScene.createNode("Coordinate");
Coordinate948.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet947.coord = Coordinate948;

//from vc3 to vc2 vertices 2
let ColorRGBA949 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA949.USE = "HAnimSegmentLineColorRGBA";
LineSet947.color = ColorRGBA949;

Shape946.geometry = LineSet947;

HAnimSegment942.children[1] = Shape946;

let HAnimSite950 = browser.currentScene.createNode("HAnimSite");
HAnimSite950.name = "adams_apple_pt";
HAnimSite950.DEF = "hanim_adams_apple_pt";
let TouchSensor951 = browser.currentScene.createNode("TouchSensor");
TouchSensor951.description = "HAnimSite adams_apple_pt";
HAnimSite950.children = new MFNode();

HAnimSite950.children[0] = TouchSensor951;

let Shape952 = browser.currentScene.createNode("Shape");
Shape952.USE = "HAnimSiteShape";
HAnimSite950.children[1] = Shape952;

HAnimSegment942.children[2] = HAnimSite950;

HAnimJoint941.children = new MFNode();

HAnimJoint941.children[0] = HAnimSegment942;

let HAnimJoint953 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint953.name = "vc2";
HAnimJoint953.DEF = "hanim_vc2";
HAnimJoint953.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint953.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint953.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment954 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment954.name = "c2";
HAnimSegment954.DEF = "hanim_c2";
let Transform955 = browser.currentScene.createNode("Transform");
Transform955.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Transform956 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape957 = browser.currentScene.createNode("Shape");
Shape957.USE = "HAnimJointShape";
Transform956.children = new MFNode();

Transform956.children[0] = Shape957;

Transform955.children = new MFNode();

Transform955.children[0] = Transform956;

HAnimSegment954.children = new MFNode();

HAnimSegment954.children[0] = Transform955;

let Shape958 = browser.currentScene.createNode("Shape");
let LineSet959 = browser.currentScene.createNode("LineSet");
LineSet959.vertexCount = new MFInt32(new int[2]);
let Coordinate960 = browser.currentScene.createNode("Coordinate");
Coordinate960.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet959.coord = Coordinate960;

//from vc2 to vc1 vertices 2
let ColorRGBA961 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA961.USE = "HAnimSegmentLineColorRGBA";
LineSet959.color = ColorRGBA961;

Shape958.geometry = LineSet959;

HAnimSegment954.children[1] = Shape958;

HAnimJoint953.children = new MFNode();

HAnimJoint953.children[0] = HAnimSegment954;

let HAnimJoint962 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint962.name = "vc1";
HAnimJoint962.DEF = "hanim_vc1";
HAnimJoint962.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint962.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint962.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment963 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment963.name = "c1";
HAnimSegment963.DEF = "hanim_c1";
let Transform964 = browser.currentScene.createNode("Transform");
Transform964.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Transform965 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape966 = browser.currentScene.createNode("Shape");
Shape966.USE = "HAnimJointShape";
Transform965.children = new MFNode();

Transform965.children[0] = Shape966;

Transform964.children = new MFNode();

Transform964.children[0] = Transform965;

HAnimSegment963.children = new MFNode();

HAnimSegment963.children[0] = Transform964;

let Shape967 = browser.currentScene.createNode("Shape");
let LineSet968 = browser.currentScene.createNode("LineSet");
LineSet968.vertexCount = new MFInt32(new int[2]);
let Coordinate969 = browser.currentScene.createNode("Coordinate");
Coordinate969.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet968.coord = Coordinate969;

//from vc1 to skullbase vertices 2
let ColorRGBA970 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA970.USE = "HAnimSegmentLineColorRGBA";
LineSet968.color = ColorRGBA970;

Shape967.geometry = LineSet968;

HAnimSegment963.children[1] = Shape967;

let HAnimSite971 = browser.currentScene.createNode("HAnimSite");
HAnimSite971.name = "glabella_pt";
HAnimSite971.DEF = "hanim_glabella_pt";
let TouchSensor972 = browser.currentScene.createNode("TouchSensor");
TouchSensor972.description = "HAnimSite glabella_pt";
HAnimSite971.children = new MFNode();

HAnimSite971.children[0] = TouchSensor972;

let Shape973 = browser.currentScene.createNode("Shape");
Shape973.USE = "HAnimSiteShape";
HAnimSite971.children[1] = Shape973;

HAnimSegment963.children[2] = HAnimSite971;

let HAnimSite974 = browser.currentScene.createNode("HAnimSite");
HAnimSite974.name = "l_ectocanthus_pt";
HAnimSite974.DEF = "hanim_l_ectocanthus_pt";
let TouchSensor975 = browser.currentScene.createNode("TouchSensor");
TouchSensor975.description = "HAnimSite l_ectocanthus_pt";
HAnimSite974.children = new MFNode();

HAnimSite974.children[0] = TouchSensor975;

let Shape976 = browser.currentScene.createNode("Shape");
Shape976.USE = "HAnimSiteShape";
HAnimSite974.children[1] = Shape976;

HAnimSegment963.children[3] = HAnimSite974;

let HAnimSite977 = browser.currentScene.createNode("HAnimSite");
HAnimSite977.name = "l_infraorbitale_pt";
HAnimSite977.DEF = "hanim_l_infraorbitale_pt";
HAnimSite977.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor978 = browser.currentScene.createNode("TouchSensor");
TouchSensor978.description = "HAnimSite l_infraorbitale_pt";
HAnimSite977.children = new MFNode();

HAnimSite977.children[0] = TouchSensor978;

let Shape979 = browser.currentScene.createNode("Shape");
Shape979.USE = "HAnimSiteShape";
HAnimSite977.children[1] = Shape979;

HAnimSegment963.children[4] = HAnimSite977;

let HAnimSite980 = browser.currentScene.createNode("HAnimSite");
HAnimSite980.name = "l_tragion_pt";
HAnimSite980.DEF = "hanim_l_tragion_pt";
HAnimSite980.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor981 = browser.currentScene.createNode("TouchSensor");
TouchSensor981.description = "HAnimSite l_tragion_pt";
HAnimSite980.children = new MFNode();

HAnimSite980.children[0] = TouchSensor981;

let Shape982 = browser.currentScene.createNode("Shape");
Shape982.USE = "HAnimSiteShape";
HAnimSite980.children[1] = Shape982;

HAnimSegment963.children[5] = HAnimSite980;

let HAnimSite983 = browser.currentScene.createNode("HAnimSite");
HAnimSite983.name = "nuchale_pt";
HAnimSite983.DEF = "hanim_nuchale_pt";
HAnimSite983.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor984 = browser.currentScene.createNode("TouchSensor");
TouchSensor984.description = "HAnimSite nuchale_pt";
HAnimSite983.children = new MFNode();

HAnimSite983.children[0] = TouchSensor984;

let Shape985 = browser.currentScene.createNode("Shape");
Shape985.USE = "HAnimSiteShape";
HAnimSite983.children[1] = Shape985;

HAnimSegment963.children[6] = HAnimSite983;

let HAnimSite986 = browser.currentScene.createNode("HAnimSite");
HAnimSite986.name = "opisthocranion_pt";
HAnimSite986.DEF = "hanim_opisthocranion_pt";
let TouchSensor987 = browser.currentScene.createNode("TouchSensor");
TouchSensor987.description = "HAnimSite opisthocranion_pt";
HAnimSite986.children = new MFNode();

HAnimSite986.children[0] = TouchSensor987;

let Shape988 = browser.currentScene.createNode("Shape");
Shape988.USE = "HAnimSiteShape";
HAnimSite986.children[1] = Shape988;

HAnimSegment963.children[7] = HAnimSite986;

let HAnimSite989 = browser.currentScene.createNode("HAnimSite");
HAnimSite989.name = "r_ectocanthus_pt";
HAnimSite989.DEF = "hanim_r_ectocanthus_pt";
let TouchSensor990 = browser.currentScene.createNode("TouchSensor");
TouchSensor990.description = "HAnimSite r_ectocanthus_pt";
HAnimSite989.children = new MFNode();

HAnimSite989.children[0] = TouchSensor990;

let Shape991 = browser.currentScene.createNode("Shape");
Shape991.USE = "HAnimSiteShape";
HAnimSite989.children[1] = Shape991;

HAnimSegment963.children[8] = HAnimSite989;

let HAnimSite992 = browser.currentScene.createNode("HAnimSite");
HAnimSite992.name = "r_infraorbitale_pt";
HAnimSite992.DEF = "hanim_r_infraorbitale_pt";
HAnimSite992.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor993 = browser.currentScene.createNode("TouchSensor");
TouchSensor993.description = "HAnimSite r_infraorbitale_pt";
HAnimSite992.children = new MFNode();

HAnimSite992.children[0] = TouchSensor993;

let Shape994 = browser.currentScene.createNode("Shape");
Shape994.USE = "HAnimSiteShape";
HAnimSite992.children[1] = Shape994;

HAnimSegment963.children[9] = HAnimSite992;

let HAnimSite995 = browser.currentScene.createNode("HAnimSite");
HAnimSite995.name = "r_tragion_pt";
HAnimSite995.DEF = "hanim_r_tragion_pt";
HAnimSite995.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor996 = browser.currentScene.createNode("TouchSensor");
TouchSensor996.description = "HAnimSite r_tragion_pt";
HAnimSite995.children = new MFNode();

HAnimSite995.children[0] = TouchSensor996;

let Shape997 = browser.currentScene.createNode("Shape");
Shape997.USE = "HAnimSiteShape";
HAnimSite995.children[1] = Shape997;

HAnimSegment963.children[10] = HAnimSite995;

let HAnimSite998 = browser.currentScene.createNode("HAnimSite");
HAnimSite998.name = "sellion_pt";
HAnimSite998.DEF = "hanim_sellion_pt";
HAnimSite998.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor999 = browser.currentScene.createNode("TouchSensor");
TouchSensor999.description = "HAnimSite sellion_pt";
HAnimSite998.children = new MFNode();

HAnimSite998.children[0] = TouchSensor999;

let Shape1000 = browser.currentScene.createNode("Shape");
Shape1000.USE = "HAnimSiteShape";
HAnimSite998.children[1] = Shape1000;

HAnimSegment963.children[11] = HAnimSite998;

let HAnimSite1001 = browser.currentScene.createNode("HAnimSite");
HAnimSite1001.name = "skull_vertex_pt";
HAnimSite1001.DEF = "hanim_skull_vertex_pt";
HAnimSite1001.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let TouchSensor1002 = browser.currentScene.createNode("TouchSensor");
TouchSensor1002.description = "HAnimSite skull_vertex_pt";
HAnimSite1001.children = new MFNode();

HAnimSite1001.children[0] = TouchSensor1002;

let Shape1003 = browser.currentScene.createNode("Shape");
Shape1003.USE = "HAnimSiteShape";
HAnimSite1001.children[1] = Shape1003;

HAnimSegment963.children[12] = HAnimSite1001;

HAnimJoint962.children = new MFNode();

HAnimJoint962.children[0] = HAnimSegment963;

let HAnimJoint1004 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1004.name = "skullbase";
HAnimJoint1004.DEF = "hanim_skullbase";
HAnimJoint1004.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint1004.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1005 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1005.name = "skull";
HAnimSegment1005.DEF = "hanim_skull";
let Transform1006 = browser.currentScene.createNode("Transform");
Transform1006.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Transform1007 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1008 = browser.currentScene.createNode("Shape");
Shape1008.USE = "HAnimJointShape";
Transform1007.children = new MFNode();

Transform1007.children[0] = Shape1008;

Transform1006.children = new MFNode();

Transform1006.children[0] = Transform1007;

HAnimSegment1005.children = new MFNode();

HAnimSegment1005.children[0] = Transform1006;

let Shape1009 = browser.currentScene.createNode("Shape");
let LineSet1010 = browser.currentScene.createNode("LineSet");
LineSet1010.vertexCount = new MFInt32(new int[2]);
let Coordinate1011 = browser.currentScene.createNode("Coordinate");
Coordinate1011.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1010.coord = Coordinate1011;

//from skullbase to l_eyelid_joint vertices 2
let ColorRGBA1012 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1012.USE = "HAnimSegmentLineColorRGBA";
LineSet1010.color = ColorRGBA1012;

Shape1009.geometry = LineSet1010;

HAnimSegment1005.children[1] = Shape1009;

let Shape1013 = browser.currentScene.createNode("Shape");
let LineSet1014 = browser.currentScene.createNode("LineSet");
LineSet1014.vertexCount = new MFInt32(new int[2]);
let Coordinate1015 = browser.currentScene.createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1014.coord = Coordinate1015;

//from skullbase to r_eyelid_joint vertices 2
let ColorRGBA1016 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSegmentLineColorRGBA";
LineSet1014.color = ColorRGBA1016;

Shape1013.geometry = LineSet1014;

HAnimSegment1005.children[2] = Shape1013;

let Shape1017 = browser.currentScene.createNode("Shape");
let LineSet1018 = browser.currentScene.createNode("LineSet");
LineSet1018.vertexCount = new MFInt32(new int[2]);
let Coordinate1019 = browser.currentScene.createNode("Coordinate");
Coordinate1019.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1018.coord = Coordinate1019;

//from skullbase to l_eyeball_joint vertices 2
let ColorRGBA1020 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1020.USE = "HAnimSegmentLineColorRGBA";
LineSet1018.color = ColorRGBA1020;

Shape1017.geometry = LineSet1018;

HAnimSegment1005.children[3] = Shape1017;

let Shape1021 = browser.currentScene.createNode("Shape");
let LineSet1022 = browser.currentScene.createNode("LineSet");
LineSet1022.vertexCount = new MFInt32(new int[2]);
let Coordinate1023 = browser.currentScene.createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1022.coord = Coordinate1023;

//from skullbase to r_eyeball_joint vertices 2
let ColorRGBA1024 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1024.USE = "HAnimSegmentLineColorRGBA";
LineSet1022.color = ColorRGBA1024;

Shape1021.geometry = LineSet1022;

HAnimSegment1005.children[4] = Shape1021;

let Shape1025 = browser.currentScene.createNode("Shape");
let LineSet1026 = browser.currentScene.createNode("LineSet");
LineSet1026.vertexCount = new MFInt32(new int[2]);
let Coordinate1027 = browser.currentScene.createNode("Coordinate");
Coordinate1027.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1026.coord = Coordinate1027;

//from skullbase to l_eyebrow_joint vertices 2
let ColorRGBA1028 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1028.USE = "HAnimSegmentLineColorRGBA";
LineSet1026.color = ColorRGBA1028;

Shape1025.geometry = LineSet1026;

HAnimSegment1005.children[5] = Shape1025;

let Shape1029 = browser.currentScene.createNode("Shape");
let LineSet1030 = browser.currentScene.createNode("LineSet");
LineSet1030.vertexCount = new MFInt32(new int[2]);
let Coordinate1031 = browser.currentScene.createNode("Coordinate");
Coordinate1031.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1030.coord = Coordinate1031;

//from skullbase to r_eyebrow_joint vertices 2
let ColorRGBA1032 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1032.USE = "HAnimSegmentLineColorRGBA";
LineSet1030.color = ColorRGBA1032;

Shape1029.geometry = LineSet1030;

HAnimSegment1005.children[6] = Shape1029;

let Shape1033 = browser.currentScene.createNode("Shape");
let LineSet1034 = browser.currentScene.createNode("LineSet");
LineSet1034.vertexCount = new MFInt32(new int[2]);
let Coordinate1035 = browser.currentScene.createNode("Coordinate");
Coordinate1035.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1034.coord = Coordinate1035;

//from skullbase to temporomandibular vertices 2
let ColorRGBA1036 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1036.USE = "HAnimSegmentLineColorRGBA";
LineSet1034.color = ColorRGBA1036;

Shape1033.geometry = LineSet1034;

HAnimSegment1005.children[7] = Shape1033;

let HAnimSite1037 = browser.currentScene.createNode("HAnimSite");
HAnimSite1037.name = "l_gonion_pt";
HAnimSite1037.DEF = "hanim_l_gonion_pt";
HAnimSite1037.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let TouchSensor1038 = browser.currentScene.createNode("TouchSensor");
TouchSensor1038.description = "HAnimSite l_gonion_pt";
HAnimSite1037.children = new MFNode();

HAnimSite1037.children[0] = TouchSensor1038;

let Shape1039 = browser.currentScene.createNode("Shape");
Shape1039.USE = "HAnimSiteShape";
HAnimSite1037.children[1] = Shape1039;

HAnimSegment1005.children[8] = HAnimSite1037;

let HAnimSite1040 = browser.currentScene.createNode("HAnimSite");
HAnimSite1040.name = "menton_pt";
HAnimSite1040.DEF = "hanim_menton_pt";
let TouchSensor1041 = browser.currentScene.createNode("TouchSensor");
TouchSensor1041.description = "HAnimSite menton_pt";
HAnimSite1040.children = new MFNode();

HAnimSite1040.children[0] = TouchSensor1041;

let Shape1042 = browser.currentScene.createNode("Shape");
Shape1042.USE = "HAnimSiteShape";
HAnimSite1040.children[1] = Shape1042;

HAnimSegment1005.children[9] = HAnimSite1040;

let HAnimSite1043 = browser.currentScene.createNode("HAnimSite");
HAnimSite1043.name = "r_gonion_pt";
HAnimSite1043.DEF = "hanim_r_gonion_pt";
HAnimSite1043.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let TouchSensor1044 = browser.currentScene.createNode("TouchSensor");
TouchSensor1044.description = "HAnimSite r_gonion_pt";
HAnimSite1043.children = new MFNode();

HAnimSite1043.children[0] = TouchSensor1044;

let Shape1045 = browser.currentScene.createNode("Shape");
Shape1045.USE = "HAnimSiteShape";
HAnimSite1043.children[1] = Shape1045;

HAnimSegment1005.children[10] = HAnimSite1043;

let HAnimSite1046 = browser.currentScene.createNode("HAnimSite");
HAnimSite1046.name = "supramenton_pt";
HAnimSite1046.DEF = "hanim_supramenton_pt";
HAnimSite1046.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let TouchSensor1047 = browser.currentScene.createNode("TouchSensor");
TouchSensor1047.description = "HAnimSite supramenton_pt";
HAnimSite1046.children = new MFNode();

HAnimSite1046.children[0] = TouchSensor1047;

let Shape1048 = browser.currentScene.createNode("Shape");
Shape1048.USE = "HAnimSiteShape";
HAnimSite1046.children[1] = Shape1048;

HAnimSegment1005.children[11] = HAnimSite1046;

HAnimJoint1004.children = new MFNode();

HAnimJoint1004.children[0] = HAnimSegment1005;

let HAnimJoint1049 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1049.name = "l_eyelid_joint";
HAnimJoint1049.DEF = "hanim_l_eyelid_joint";
HAnimJoint1049.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1049.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[1] = HAnimJoint1049;

let HAnimJoint1050 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1050.name = "r_eyelid_joint";
HAnimJoint1050.DEF = "hanim_r_eyelid_joint";
HAnimJoint1050.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1050.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[2] = HAnimJoint1050;

let HAnimJoint1051 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1051.name = "l_eyeball_joint";
HAnimJoint1051.DEF = "hanim_l_eyeball_joint";
HAnimJoint1051.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1051.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[3] = HAnimJoint1051;

let HAnimJoint1052 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1052.name = "r_eyeball_joint";
HAnimJoint1052.DEF = "hanim_r_eyeball_joint";
HAnimJoint1052.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1052.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[4] = HAnimJoint1052;

let HAnimJoint1053 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1053.name = "l_eyebrow_joint";
HAnimJoint1053.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1053.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1053.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[5] = HAnimJoint1053;

let HAnimJoint1054 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1054.name = "r_eyebrow_joint";
HAnimJoint1054.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1054.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1054.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[6] = HAnimJoint1054;

let HAnimJoint1055 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1055.name = "temporomandibular";
HAnimJoint1055.DEF = "hanim_temporomandibular";
HAnimJoint1055.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1055.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.children[7] = HAnimJoint1055;

HAnimJoint962.children[1] = HAnimJoint1004;

HAnimJoint953.children[1] = HAnimJoint962;

HAnimJoint941.children[1] = HAnimJoint953;

HAnimJoint932.children[1] = HAnimJoint941;

HAnimJoint923.children[1] = HAnimJoint932;

HAnimJoint914.children[1] = HAnimJoint923;

HAnimJoint905.children[1] = HAnimJoint914;

HAnimJoint852.children[1] = HAnimJoint905;

let HAnimJoint1056 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1056.name = "l_sternoclavicular";
HAnimJoint1056.DEF = "hanim_l_sternoclavicular";
HAnimJoint1056.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint1056.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1056.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1057 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1057.name = "l_clavicle";
HAnimSegment1057.DEF = "hanim_l_clavicle";
let Transform1058 = browser.currentScene.createNode("Transform");
Transform1058.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Transform1059 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1060 = browser.currentScene.createNode("Shape");
Shape1060.USE = "HAnimJointShape";
Transform1059.children = new MFNode();

Transform1059.children[0] = Shape1060;

Transform1058.children = new MFNode();

Transform1058.children[0] = Transform1059;

HAnimSegment1057.children = new MFNode();

HAnimSegment1057.children[0] = Transform1058;

let Shape1061 = browser.currentScene.createNode("Shape");
let LineSet1062 = browser.currentScene.createNode("LineSet");
LineSet1062.vertexCount = new MFInt32(new int[2]);
let Coordinate1063 = browser.currentScene.createNode("Coordinate");
Coordinate1063.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet1062.coord = Coordinate1063;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA1064 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1064.USE = "HAnimSegmentLineColorRGBA";
LineSet1062.color = ColorRGBA1064;

Shape1061.geometry = LineSet1062;

HAnimSegment1057.children[1] = Shape1061;

HAnimJoint1056.children = new MFNode();

HAnimJoint1056.children[0] = HAnimSegment1057;

let HAnimJoint1065 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1065.name = "l_acromioclavicular";
HAnimJoint1065.DEF = "hanim_l_acromioclavicular";
HAnimJoint1065.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint1065.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1065.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1066 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1066.name = "l_scapula";
HAnimSegment1066.DEF = "hanim_l_scapula";
let Transform1067 = browser.currentScene.createNode("Transform");
Transform1067.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Transform1068 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1069 = browser.currentScene.createNode("Shape");
Shape1069.USE = "HAnimJointShape";
Transform1068.children = new MFNode();

Transform1068.children[0] = Shape1069;

Transform1067.children = new MFNode();

Transform1067.children[0] = Transform1068;

HAnimSegment1066.children = new MFNode();

HAnimSegment1066.children[0] = Transform1067;

let Shape1070 = browser.currentScene.createNode("Shape");
let LineSet1071 = browser.currentScene.createNode("LineSet");
LineSet1071.vertexCount = new MFInt32(new int[2]);
let Coordinate1072 = browser.currentScene.createNode("Coordinate");
Coordinate1072.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet1071.coord = Coordinate1072;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA1073 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1073.USE = "HAnimSegmentLineColorRGBA";
LineSet1071.color = ColorRGBA1073;

Shape1070.geometry = LineSet1071;

HAnimSegment1066.children[1] = Shape1070;

let HAnimSite1074 = browser.currentScene.createNode("HAnimSite");
HAnimSite1074.name = "l_bideltoid_pt";
HAnimSite1074.DEF = "hanim_l_bideltoid_pt";
let TouchSensor1075 = browser.currentScene.createNode("TouchSensor");
TouchSensor1075.description = "HAnimSite l_bideltoid_pt";
HAnimSite1074.children = new MFNode();

HAnimSite1074.children[0] = TouchSensor1075;

let Shape1076 = browser.currentScene.createNode("Shape");
Shape1076.USE = "HAnimSiteShape";
HAnimSite1074.children[1] = Shape1076;

HAnimSegment1066.children[2] = HAnimSite1074;

let HAnimSite1077 = browser.currentScene.createNode("HAnimSite");
HAnimSite1077.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite1077.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite1077.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor1078 = browser.currentScene.createNode("TouchSensor");
TouchSensor1078.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite1077.children = new MFNode();

HAnimSite1077.children[0] = TouchSensor1078;

let Shape1079 = browser.currentScene.createNode("Shape");
Shape1079.USE = "HAnimSiteShape";
HAnimSite1077.children[1] = Shape1079;

HAnimSegment1066.children[3] = HAnimSite1077;

HAnimJoint1065.children = new MFNode();

HAnimJoint1065.children[0] = HAnimSegment1066;

let HAnimJoint1080 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1080.name = "l_shoulder";
HAnimJoint1080.DEF = "hanim_l_shoulder";
HAnimJoint1080.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint1080.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1080.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1081 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1081.name = "l_upperarm";
HAnimSegment1081.DEF = "hanim_l_upperarm";
let Transform1082 = browser.currentScene.createNode("Transform");
Transform1082.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Transform1083 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1084 = browser.currentScene.createNode("Shape");
Shape1084.USE = "HAnimJointShape";
Transform1083.children = new MFNode();

Transform1083.children[0] = Shape1084;

Transform1082.children = new MFNode();

Transform1082.children[0] = Transform1083;

HAnimSegment1081.children = new MFNode();

HAnimSegment1081.children[0] = Transform1082;

let Shape1085 = browser.currentScene.createNode("Shape");
let LineSet1086 = browser.currentScene.createNode("LineSet");
LineSet1086.vertexCount = new MFInt32(new int[2]);
let Coordinate1087 = browser.currentScene.createNode("Coordinate");
Coordinate1087.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet1086.coord = Coordinate1087;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA1088 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1088.USE = "HAnimSegmentLineColorRGBA";
LineSet1086.color = ColorRGBA1088;

Shape1085.geometry = LineSet1086;

HAnimSegment1081.children[1] = Shape1085;

let HAnimSite1089 = browser.currentScene.createNode("HAnimSite");
HAnimSite1089.name = "l_humeral_medial_epicondyles_pt";
HAnimSite1089.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite1089.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor1090 = browser.currentScene.createNode("TouchSensor");
TouchSensor1090.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite1089.children = new MFNode();

HAnimSite1089.children[0] = TouchSensor1090;

let Shape1091 = browser.currentScene.createNode("Shape");
Shape1091.USE = "HAnimSiteShape";
HAnimSite1089.children[1] = Shape1091;

HAnimSegment1081.children[2] = HAnimSite1089;

let HAnimSite1092 = browser.currentScene.createNode("HAnimSite");
HAnimSite1092.name = "l_olecranon_pt";
HAnimSite1092.DEF = "hanim_l_olecranon_pt";
HAnimSite1092.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor1093 = browser.currentScene.createNode("TouchSensor");
TouchSensor1093.description = "HAnimSite l_olecranon_pt";
HAnimSite1092.children = new MFNode();

HAnimSite1092.children[0] = TouchSensor1093;

let Shape1094 = browser.currentScene.createNode("Shape");
Shape1094.USE = "HAnimSiteShape";
HAnimSite1092.children[1] = Shape1094;

HAnimSegment1081.children[3] = HAnimSite1092;

let HAnimSite1095 = browser.currentScene.createNode("HAnimSite");
HAnimSite1095.name = "l_radial_styloid_pt";
HAnimSite1095.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1095.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor1096 = browser.currentScene.createNode("TouchSensor");
TouchSensor1096.description = "HAnimSite l_radial_styloid_pt";
HAnimSite1095.children = new MFNode();

HAnimSite1095.children[0] = TouchSensor1096;

let Shape1097 = browser.currentScene.createNode("Shape");
Shape1097.USE = "HAnimSiteShape";
HAnimSite1095.children[1] = Shape1097;

HAnimSegment1081.children[4] = HAnimSite1095;

let HAnimSite1098 = browser.currentScene.createNode("HAnimSite");
HAnimSite1098.name = "l_radiale_pt";
HAnimSite1098.DEF = "hanim_l_radiale_pt";
HAnimSite1098.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor1099 = browser.currentScene.createNode("TouchSensor");
TouchSensor1099.description = "HAnimSite l_radiale_pt";
HAnimSite1098.children = new MFNode();

HAnimSite1098.children[0] = TouchSensor1099;

let Shape1100 = browser.currentScene.createNode("Shape");
Shape1100.USE = "HAnimSiteShape";
HAnimSite1098.children[1] = Shape1100;

HAnimSegment1081.children[5] = HAnimSite1098;

HAnimJoint1080.children = new MFNode();

HAnimJoint1080.children[0] = HAnimSegment1081;

let HAnimJoint1101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1101.name = "l_elbow";
HAnimJoint1101.DEF = "hanim_l_elbow";
HAnimJoint1101.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint1101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1101.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1102 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1102.name = "l_forearm";
HAnimSegment1102.DEF = "hanim_l_forearm";
let Transform1103 = browser.currentScene.createNode("Transform");
Transform1103.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Transform1104 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1105 = browser.currentScene.createNode("Shape");
Shape1105.USE = "HAnimJointShape";
Transform1104.children = new MFNode();

Transform1104.children[0] = Shape1105;

Transform1103.children = new MFNode();

Transform1103.children[0] = Transform1104;

HAnimSegment1102.children = new MFNode();

HAnimSegment1102.children[0] = Transform1103;

let Shape1106 = browser.currentScene.createNode("Shape");
let LineSet1107 = browser.currentScene.createNode("LineSet");
LineSet1107.vertexCount = new MFInt32(new int[2]);
let Coordinate1108 = browser.currentScene.createNode("Coordinate");
Coordinate1108.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1107.coord = Coordinate1108;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA1109 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSegmentLineColorRGBA";
LineSet1107.color = ColorRGBA1109;

Shape1106.geometry = LineSet1107;

HAnimSegment1102.children[1] = Shape1106;

let HAnimSite1110 = browser.currentScene.createNode("HAnimSite");
HAnimSite1110.name = "l_ulnar_styloid_pt";
HAnimSite1110.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1110.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor1111 = browser.currentScene.createNode("TouchSensor");
TouchSensor1111.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1110.children = new MFNode();

HAnimSite1110.children[0] = TouchSensor1111;

let Shape1112 = browser.currentScene.createNode("Shape");
Shape1112.USE = "HAnimSiteShape";
HAnimSite1110.children[1] = Shape1112;

HAnimSegment1102.children[2] = HAnimSite1110;

HAnimJoint1101.children = new MFNode();

HAnimJoint1101.children[0] = HAnimSegment1102;

let HAnimJoint1113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1113.name = "l_radiocarpal";
HAnimJoint1113.DEF = "hanim_l_radiocarpal";
HAnimJoint1113.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint1113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1113.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1114.name = "l_carpal";
HAnimSegment1114.DEF = "hanim_l_carpal";
let Transform1115 = browser.currentScene.createNode("Transform");
Transform1115.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1115.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1115.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
let Transform1116 = browser.currentScene.createNode("Transform");
Transform1116.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
let Shape1117 = browser.currentScene.createNode("Shape");
Shape1117.USE = "HAnimJointShape";
Transform1116.children = new MFNode();

Transform1116.children[0] = Shape1117;

Transform1115.children = new MFNode();

Transform1115.children[0] = Transform1116;

HAnimSegment1114.children = new MFNode();

HAnimSegment1114.children[0] = Transform1115;

let Shape1118 = browser.currentScene.createNode("Shape");
let LineSet1119 = browser.currentScene.createNode("LineSet");
LineSet1119.vertexCount = new MFInt32(new int[2]);
let Coordinate1120 = browser.currentScene.createNode("Coordinate");
Coordinate1120.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1119.coord = Coordinate1120;

//from l_radiocarpal to l_midcarpal_1 vertices 2
let ColorRGBA1121 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1121.USE = "HAnimSegmentLineColorRGBA";
LineSet1119.color = ColorRGBA1121;

Shape1118.geometry = LineSet1119;

HAnimSegment1114.children[1] = Shape1118;

let Shape1122 = browser.currentScene.createNode("Shape");
let LineSet1123 = browser.currentScene.createNode("LineSet");
LineSet1123.vertexCount = new MFInt32(new int[2]);
let Coordinate1124 = browser.currentScene.createNode("Coordinate");
Coordinate1124.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1123.coord = Coordinate1124;

//from l_radiocarpal to l_midcarpal_2 vertices 2
let ColorRGBA1125 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1125.USE = "HAnimSegmentLineColorRGBA";
LineSet1123.color = ColorRGBA1125;

Shape1122.geometry = LineSet1123;

HAnimSegment1114.children[2] = Shape1122;

let Shape1126 = browser.currentScene.createNode("Shape");
let LineSet1127 = browser.currentScene.createNode("LineSet");
LineSet1127.vertexCount = new MFInt32(new int[2]);
let Coordinate1128 = browser.currentScene.createNode("Coordinate");
Coordinate1128.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1127.coord = Coordinate1128;

//from l_radiocarpal to l_midcarpal_3 vertices 2
let ColorRGBA1129 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1129.USE = "HAnimSegmentLineColorRGBA";
LineSet1127.color = ColorRGBA1129;

Shape1126.geometry = LineSet1127;

HAnimSegment1114.children[3] = Shape1126;

let Shape1130 = browser.currentScene.createNode("Shape");
let LineSet1131 = browser.currentScene.createNode("LineSet");
LineSet1131.vertexCount = new MFInt32(new int[2]);
let Coordinate1132 = browser.currentScene.createNode("Coordinate");
Coordinate1132.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1131.coord = Coordinate1132;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
let ColorRGBA1133 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1133.USE = "HAnimSegmentLineColorRGBA";
LineSet1131.color = ColorRGBA1133;

Shape1130.geometry = LineSet1131;

HAnimSegment1114.children[4] = Shape1130;

HAnimJoint1113.children = new MFNode();

HAnimJoint1113.children[0] = HAnimSegment1114;

let HAnimJoint1134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1134.name = "l_midcarpal_1";
HAnimJoint1134.DEF = "hanim_l_midcarpal_1";
HAnimJoint1134.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1134.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1135.name = "l_trapezium";
HAnimSegment1135.DEF = "hanim_l_trapezium";
let Transform1136 = browser.currentScene.createNode("Transform");
Transform1136.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let Transform1137 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1138 = browser.currentScene.createNode("Shape");
Shape1138.USE = "HAnimJointShape";
Transform1137.children = new MFNode();

Transform1137.children[0] = Shape1138;

Transform1136.children = new MFNode();

Transform1136.children[0] = Transform1137;

HAnimSegment1135.children = new MFNode();

HAnimSegment1135.children[0] = Transform1136;

let Shape1139 = browser.currentScene.createNode("Shape");
let LineSet1140 = browser.currentScene.createNode("LineSet");
LineSet1140.vertexCount = new MFInt32(new int[2]);
let Coordinate1141 = browser.currentScene.createNode("Coordinate");
Coordinate1141.point = new MFVec3f(new float[0.1924,0.8472,-0.0534]);
LineSet1140.coord = Coordinate1141;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 1
let ColorRGBA1142 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1142.USE = "HAnimSegmentLineColorRGBA";
LineSet1140.color = ColorRGBA1142;

Shape1139.geometry = LineSet1140;

HAnimSegment1135.children[1] = Shape1139;

HAnimJoint1134.children = new MFNode();

HAnimJoint1134.children[0] = HAnimSegment1135;

let HAnimJoint1143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1143.name = "l_carpometacarpal_1";
HAnimJoint1143.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1143.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1143.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1144.name = "l_metacarpal_1";
HAnimSegment1144.DEF = "hanim_l_metacarpal_1";
let Transform1145 = browser.currentScene.createNode("Transform");
Transform1145.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Transform1146 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1147 = browser.currentScene.createNode("Shape");
Shape1147.USE = "HAnimJointShape";
Transform1146.children = new MFNode();

Transform1146.children[0] = Shape1147;

Transform1145.children = new MFNode();

Transform1145.children[0] = Transform1146;

HAnimSegment1144.children = new MFNode();

HAnimSegment1144.children[0] = Transform1145;

let Shape1148 = browser.currentScene.createNode("Shape");
let LineSet1149 = browser.currentScene.createNode("LineSet");
LineSet1149.vertexCount = new MFInt32(new int[2]);
let Coordinate1150 = browser.currentScene.createNode("Coordinate");
Coordinate1150.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1149.coord = Coordinate1150;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA1151 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1151.USE = "HAnimSegmentLineColorRGBA";
LineSet1149.color = ColorRGBA1151;

Shape1148.geometry = LineSet1149;

HAnimSegment1144.children[1] = Shape1148;

HAnimJoint1143.children = new MFNode();

HAnimJoint1143.children[0] = HAnimSegment1144;

let HAnimJoint1152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1152.name = "l_metacarpophalangeal_1";
HAnimJoint1152.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1152.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1152.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1152.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1153.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1153.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform1154 = browser.currentScene.createNode("Transform");
Transform1154.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Transform1155 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1156 = browser.currentScene.createNode("Shape");
Shape1156.USE = "HAnimJointShape";
Transform1155.children = new MFNode();

Transform1155.children[0] = Shape1156;

Transform1154.children = new MFNode();

Transform1154.children[0] = Transform1155;

HAnimSegment1153.children = new MFNode();

HAnimSegment1153.children[0] = Transform1154;

let Shape1157 = browser.currentScene.createNode("Shape");
let LineSet1158 = browser.currentScene.createNode("LineSet");
LineSet1158.vertexCount = new MFInt32(new int[2]);
let Coordinate1159 = browser.currentScene.createNode("Coordinate");
Coordinate1159.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1158.coord = Coordinate1159;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA1160 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1160.USE = "HAnimSegmentLineColorRGBA";
LineSet1158.color = ColorRGBA1160;

Shape1157.geometry = LineSet1158;

HAnimSegment1153.children[1] = Shape1157;

let HAnimSite1161 = browser.currentScene.createNode("HAnimSite");
HAnimSite1161.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite1161.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
let TouchSensor1162 = browser.currentScene.createNode("TouchSensor");
TouchSensor1162.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite1161.children = new MFNode();

HAnimSite1161.children[0] = TouchSensor1162;

let Shape1163 = browser.currentScene.createNode("Shape");
Shape1163.USE = "HAnimSiteShape";
HAnimSite1161.children[1] = Shape1163;

HAnimSegment1153.children[2] = HAnimSite1161;

HAnimJoint1152.children = new MFNode();

HAnimJoint1152.children[0] = HAnimSegment1153;

let HAnimJoint1164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1164.name = "l_carpal_interphalangeal_1";
HAnimJoint1164.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1164.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1164.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1164.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1152.children[1] = HAnimJoint1164;

HAnimJoint1143.children[1] = HAnimJoint1152;

HAnimJoint1134.children[1] = HAnimJoint1143;

HAnimJoint1113.children[1] = HAnimJoint1134;

let HAnimJoint1165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1165.name = "l_midcarpal_2";
HAnimJoint1165.DEF = "hanim_l_midcarpal_2";
HAnimJoint1165.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1165.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1166 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1166.name = "l_trapezoid";
HAnimSegment1166.DEF = "hanim_l_trapezoid";
let Transform1167 = browser.currentScene.createNode("Transform");
Transform1167.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
let Transform1168 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1169 = browser.currentScene.createNode("Shape");
Shape1169.USE = "HAnimJointShape";
Transform1168.children = new MFNode();

Transform1168.children[0] = Shape1169;

Transform1167.children = new MFNode();

Transform1167.children[0] = Transform1168;

HAnimSegment1166.children = new MFNode();

HAnimSegment1166.children[0] = Transform1167;

let Shape1170 = browser.currentScene.createNode("Shape");
let LineSet1171 = browser.currentScene.createNode("LineSet");
LineSet1171.vertexCount = new MFInt32(new int[2]);
let Coordinate1172 = browser.currentScene.createNode("Coordinate");
Coordinate1172.point = new MFVec3f(new float[0.1983,0.8024,-0.028]);
LineSet1171.coord = Coordinate1172;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 1
let ColorRGBA1173 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1173.USE = "HAnimSegmentLineColorRGBA";
LineSet1171.color = ColorRGBA1173;

Shape1170.geometry = LineSet1171;

HAnimSegment1166.children[1] = Shape1170;

let HAnimSite1174 = browser.currentScene.createNode("HAnimSite");
HAnimSite1174.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1174.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1174.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor1175 = browser.currentScene.createNode("TouchSensor");
TouchSensor1175.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite1174.children = new MFNode();

HAnimSite1174.children[0] = TouchSensor1175;

let Shape1176 = browser.currentScene.createNode("Shape");
Shape1176.USE = "HAnimSiteShape";
HAnimSite1174.children[1] = Shape1176;

HAnimSegment1166.children[2] = HAnimSite1174;

HAnimJoint1165.children = new MFNode();

HAnimJoint1165.children[0] = HAnimSegment1166;

let HAnimJoint1177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1177.name = "l_carpometacarpal_2";
HAnimJoint1177.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1177.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1177.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1177.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1178.name = "l_metacarpal_2";
HAnimSegment1178.DEF = "hanim_l_metacarpal_2";
let Transform1179 = browser.currentScene.createNode("Transform");
Transform1179.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Transform1180 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1181 = browser.currentScene.createNode("Shape");
Shape1181.USE = "HAnimJointShape";
Transform1180.children = new MFNode();

Transform1180.children[0] = Shape1181;

Transform1179.children = new MFNode();

Transform1179.children[0] = Transform1180;

HAnimSegment1178.children = new MFNode();

HAnimSegment1178.children[0] = Transform1179;

let Shape1182 = browser.currentScene.createNode("Shape");
let LineSet1183 = browser.currentScene.createNode("LineSet");
LineSet1183.vertexCount = new MFInt32(new int[2]);
let Coordinate1184 = browser.currentScene.createNode("Coordinate");
Coordinate1184.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1183.coord = Coordinate1184;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA1185 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1185.USE = "HAnimSegmentLineColorRGBA";
LineSet1183.color = ColorRGBA1185;

Shape1182.geometry = LineSet1183;

HAnimSegment1178.children[1] = Shape1182;

HAnimJoint1177.children = new MFNode();

HAnimJoint1177.children[0] = HAnimSegment1178;

let HAnimJoint1186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1186.name = "l_metacarpophalangeal_2";
HAnimJoint1186.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1186.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1186.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1186.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1187.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1187.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform1188 = browser.currentScene.createNode("Transform");
Transform1188.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Transform1189 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1190 = browser.currentScene.createNode("Shape");
Shape1190.USE = "HAnimJointShape";
Transform1189.children = new MFNode();

Transform1189.children[0] = Shape1190;

Transform1188.children = new MFNode();

Transform1188.children[0] = Transform1189;

HAnimSegment1187.children = new MFNode();

HAnimSegment1187.children[0] = Transform1188;

let Shape1191 = browser.currentScene.createNode("Shape");
let LineSet1192 = browser.currentScene.createNode("LineSet");
LineSet1192.vertexCount = new MFInt32(new int[2]);
let Coordinate1193 = browser.currentScene.createNode("Coordinate");
Coordinate1193.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1192.coord = Coordinate1193;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1194 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1194.USE = "HAnimSegmentLineColorRGBA";
LineSet1192.color = ColorRGBA1194;

Shape1191.geometry = LineSet1192;

HAnimSegment1187.children[1] = Shape1191;

HAnimJoint1186.children = new MFNode();

HAnimJoint1186.children[0] = HAnimSegment1187;

let HAnimJoint1195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1195.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1195.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1195.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1195.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1195.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1196.name = "l_carpal_middle_phalanx_2";
HAnimSegment1196.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform1197 = browser.currentScene.createNode("Transform");
Transform1197.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Transform1198 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1199 = browser.currentScene.createNode("Shape");
Shape1199.USE = "HAnimJointShape";
Transform1198.children = new MFNode();

Transform1198.children[0] = Shape1199;

Transform1197.children = new MFNode();

Transform1197.children[0] = Transform1198;

HAnimSegment1196.children = new MFNode();

HAnimSegment1196.children[0] = Transform1197;

let Shape1200 = browser.currentScene.createNode("Shape");
let LineSet1201 = browser.currentScene.createNode("LineSet");
LineSet1201.vertexCount = new MFInt32(new int[2]);
let Coordinate1202 = browser.currentScene.createNode("Coordinate");
Coordinate1202.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1201.coord = Coordinate1202;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1203 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1203.USE = "HAnimSegmentLineColorRGBA";
LineSet1201.color = ColorRGBA1203;

Shape1200.geometry = LineSet1201;

HAnimSegment1196.children[1] = Shape1200;

let HAnimSite1204 = browser.currentScene.createNode("HAnimSite");
HAnimSite1204.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite1204.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
let TouchSensor1205 = browser.currentScene.createNode("TouchSensor");
TouchSensor1205.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite1204.children = new MFNode();

HAnimSite1204.children[0] = TouchSensor1205;

let Shape1206 = browser.currentScene.createNode("Shape");
Shape1206.USE = "HAnimSiteShape";
HAnimSite1204.children[1] = Shape1206;

HAnimSegment1196.children[2] = HAnimSite1204;

let HAnimSite1207 = browser.currentScene.createNode("HAnimSite");
HAnimSite1207.name = "l_dactylion_pt";
HAnimSite1207.DEF = "hanim_l_dactylion_pt";
HAnimSite1207.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor1208 = browser.currentScene.createNode("TouchSensor");
TouchSensor1208.description = "HAnimSite l_dactylion_pt";
HAnimSite1207.children = new MFNode();

HAnimSite1207.children[0] = TouchSensor1208;

let Shape1209 = browser.currentScene.createNode("Shape");
Shape1209.USE = "HAnimSiteShape";
HAnimSite1207.children[1] = Shape1209;

HAnimSegment1196.children[3] = HAnimSite1207;

HAnimJoint1195.children = new MFNode();

HAnimJoint1195.children[0] = HAnimSegment1196;

let HAnimJoint1210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1210.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1210.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1210.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1210.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1210.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1195.children[1] = HAnimJoint1210;

HAnimJoint1186.children[1] = HAnimJoint1195;

HAnimJoint1177.children[1] = HAnimJoint1186;

HAnimJoint1165.children[1] = HAnimJoint1177;

HAnimJoint1113.children[2] = HAnimJoint1165;

let HAnimJoint1211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1211.name = "l_midcarpal_3";
HAnimJoint1211.DEF = "hanim_l_midcarpal_3";
HAnimJoint1211.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1211.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1212 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1212.name = "l_capitate";
HAnimSegment1212.DEF = "hanim_l_capitate";
let Transform1213 = browser.currentScene.createNode("Transform");
Transform1213.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
let Transform1214 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1215 = browser.currentScene.createNode("Shape");
Shape1215.USE = "HAnimJointShape";
Transform1214.children = new MFNode();

Transform1214.children[0] = Shape1215;

Transform1213.children = new MFNode();

Transform1213.children[0] = Transform1214;

HAnimSegment1212.children = new MFNode();

HAnimSegment1212.children[0] = Transform1213;

let Shape1216 = browser.currentScene.createNode("Shape");
let LineSet1217 = browser.currentScene.createNode("LineSet");
LineSet1217.vertexCount = new MFInt32(new int[2]);
let Coordinate1218 = browser.currentScene.createNode("Coordinate");
Coordinate1218.point = new MFVec3f(new float[0.1987,0.8029,-0.053]);
LineSet1217.coord = Coordinate1218;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 1
let ColorRGBA1219 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1219.USE = "HAnimSegmentLineColorRGBA";
LineSet1217.color = ColorRGBA1219;

Shape1216.geometry = LineSet1217;

HAnimSegment1212.children[1] = Shape1216;

let HAnimSite1220 = browser.currentScene.createNode("HAnimSite");
HAnimSite1220.name = "l_metacarpal_phalanx_3_pt";
HAnimSite1220.DEF = "hanim_l_metacarpal_phalanx_3_pt";
let TouchSensor1221 = browser.currentScene.createNode("TouchSensor");
TouchSensor1221.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite1220.children = new MFNode();

HAnimSite1220.children[0] = TouchSensor1221;

let Shape1222 = browser.currentScene.createNode("Shape");
Shape1222.USE = "HAnimSiteShape";
HAnimSite1220.children[1] = Shape1222;

HAnimSegment1212.children[2] = HAnimSite1220;

HAnimJoint1211.children = new MFNode();

HAnimJoint1211.children[0] = HAnimSegment1212;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.name = "l_carpometacarpal_3";
HAnimJoint1223.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1223.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1223.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1224 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1224.name = "l_metacarpal_3";
HAnimSegment1224.DEF = "hanim_l_metacarpal_3";
let Transform1225 = browser.currentScene.createNode("Transform");
Transform1225.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Transform1226 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1227 = browser.currentScene.createNode("Shape");
Shape1227.USE = "HAnimJointShape";
Transform1226.children = new MFNode();

Transform1226.children[0] = Shape1227;

Transform1225.children = new MFNode();

Transform1225.children[0] = Transform1226;

HAnimSegment1224.children = new MFNode();

HAnimSegment1224.children[0] = Transform1225;

let Shape1228 = browser.currentScene.createNode("Shape");
let LineSet1229 = browser.currentScene.createNode("LineSet");
LineSet1229.vertexCount = new MFInt32(new int[2]);
let Coordinate1230 = browser.currentScene.createNode("Coordinate");
Coordinate1230.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1229.coord = Coordinate1230;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA1231 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1231.USE = "HAnimSegmentLineColorRGBA";
LineSet1229.color = ColorRGBA1231;

Shape1228.geometry = LineSet1229;

HAnimSegment1224.children[1] = Shape1228;

HAnimJoint1223.children = new MFNode();

HAnimJoint1223.children[0] = HAnimSegment1224;

let HAnimJoint1232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1232.name = "l_metacarpophalangeal_3";
HAnimJoint1232.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1232.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1232.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1232.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1233 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1233.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1233.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform1234 = browser.currentScene.createNode("Transform");
Transform1234.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Transform1235 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1236 = browser.currentScene.createNode("Shape");
Shape1236.USE = "HAnimJointShape";
Transform1235.children = new MFNode();

Transform1235.children[0] = Shape1236;

Transform1234.children = new MFNode();

Transform1234.children[0] = Transform1235;

HAnimSegment1233.children = new MFNode();

HAnimSegment1233.children[0] = Transform1234;

let Shape1237 = browser.currentScene.createNode("Shape");
let LineSet1238 = browser.currentScene.createNode("LineSet");
LineSet1238.vertexCount = new MFInt32(new int[2]);
let Coordinate1239 = browser.currentScene.createNode("Coordinate");
Coordinate1239.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1238.coord = Coordinate1239;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1240 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1240.USE = "HAnimSegmentLineColorRGBA";
LineSet1238.color = ColorRGBA1240;

Shape1237.geometry = LineSet1238;

HAnimSegment1233.children[1] = Shape1237;

HAnimJoint1232.children = new MFNode();

HAnimJoint1232.children[0] = HAnimSegment1233;

let HAnimJoint1241 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1241.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1241.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1241.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1241.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1241.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1242.name = "l_carpal_middle_phalanx_3";
HAnimSegment1242.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform1243 = browser.currentScene.createNode("Transform");
Transform1243.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Transform1244 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1245 = browser.currentScene.createNode("Shape");
Shape1245.USE = "HAnimJointShape";
Transform1244.children = new MFNode();

Transform1244.children[0] = Shape1245;

Transform1243.children = new MFNode();

Transform1243.children[0] = Transform1244;

HAnimSegment1242.children = new MFNode();

HAnimSegment1242.children[0] = Transform1243;

let Shape1246 = browser.currentScene.createNode("Shape");
let LineSet1247 = browser.currentScene.createNode("LineSet");
LineSet1247.vertexCount = new MFInt32(new int[2]);
let Coordinate1248 = browser.currentScene.createNode("Coordinate");
Coordinate1248.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1247.coord = Coordinate1248;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1249 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1249.USE = "HAnimSegmentLineColorRGBA";
LineSet1247.color = ColorRGBA1249;

Shape1246.geometry = LineSet1247;

HAnimSegment1242.children[1] = Shape1246;

let HAnimSite1250 = browser.currentScene.createNode("HAnimSite");
HAnimSite1250.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite1250.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
let TouchSensor1251 = browser.currentScene.createNode("TouchSensor");
TouchSensor1251.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite1250.children = new MFNode();

HAnimSite1250.children[0] = TouchSensor1251;

let Shape1252 = browser.currentScene.createNode("Shape");
Shape1252.USE = "HAnimSiteShape";
HAnimSite1250.children[1] = Shape1252;

HAnimSegment1242.children[2] = HAnimSite1250;

HAnimJoint1241.children = new MFNode();

HAnimJoint1241.children[0] = HAnimSegment1242;

let HAnimJoint1253 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1253.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1253.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1253.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1253.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1253.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1241.children[1] = HAnimJoint1253;

HAnimJoint1232.children[1] = HAnimJoint1241;

HAnimJoint1223.children[1] = HAnimJoint1232;

HAnimJoint1211.children[1] = HAnimJoint1223;

HAnimJoint1113.children[3] = HAnimJoint1211;

let HAnimJoint1254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1254.name = "l_midcarpal_4_5";
HAnimJoint1254.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1254.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1254.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1255 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1255.name = "l_hamate";
HAnimSegment1255.DEF = "hanim_l_hamate";
let Transform1256 = browser.currentScene.createNode("Transform");
Transform1256.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
let Transform1257 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1258 = browser.currentScene.createNode("Shape");
Shape1258.USE = "HAnimJointShape";
Transform1257.children = new MFNode();

Transform1257.children[0] = Shape1258;

Transform1256.children = new MFNode();

Transform1256.children[0] = Transform1257;

HAnimSegment1255.children = new MFNode();

HAnimSegment1255.children[0] = Transform1256;

let Shape1259 = browser.currentScene.createNode("Shape");
let LineSet1260 = browser.currentScene.createNode("LineSet");
LineSet1260.vertexCount = new MFInt32(new int[2]);
let Coordinate1261 = browser.currentScene.createNode("Coordinate");
Coordinate1261.point = new MFVec3f(new float[0.1956,0.8019,-0.0794]);
LineSet1260.coord = Coordinate1261;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 1
let ColorRGBA1262 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1262.USE = "HAnimSegmentLineColorRGBA";
LineSet1260.color = ColorRGBA1262;

Shape1259.geometry = LineSet1260;

HAnimSegment1255.children[1] = Shape1259;

let Shape1263 = browser.currentScene.createNode("Shape");
let LineSet1264 = browser.currentScene.createNode("LineSet");
LineSet1264.vertexCount = new MFInt32(new int[2]);
let Coordinate1265 = browser.currentScene.createNode("Coordinate");
Coordinate1265.point = new MFVec3f(new float[0.1925,0.8066,-0.1036]);
LineSet1264.coord = Coordinate1265;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 1
let ColorRGBA1266 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1266.USE = "HAnimSegmentLineColorRGBA";
LineSet1264.color = ColorRGBA1266;

Shape1263.geometry = LineSet1264;

HAnimSegment1255.children[2] = Shape1263;

let HAnimSite1267 = browser.currentScene.createNode("HAnimSite");
HAnimSite1267.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1267.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1267.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor1268 = browser.currentScene.createNode("TouchSensor");
TouchSensor1268.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite1267.children = new MFNode();

HAnimSite1267.children[0] = TouchSensor1268;

let Shape1269 = browser.currentScene.createNode("Shape");
Shape1269.USE = "HAnimSiteShape";
HAnimSite1267.children[1] = Shape1269;

HAnimSegment1255.children[3] = HAnimSite1267;

HAnimJoint1254.children = new MFNode();

HAnimJoint1254.children[0] = HAnimSegment1255;

let HAnimJoint1270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1270.name = "l_carpometacarpal_4";
HAnimJoint1270.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1270.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1270.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1270.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1271.name = "l_metacarpal_4";
HAnimSegment1271.DEF = "hanim_l_metacarpal_4";
let Transform1272 = browser.currentScene.createNode("Transform");
Transform1272.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Transform1273 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1274 = browser.currentScene.createNode("Shape");
Shape1274.USE = "HAnimJointShape";
Transform1273.children = new MFNode();

Transform1273.children[0] = Shape1274;

Transform1272.children = new MFNode();

Transform1272.children[0] = Transform1273;

HAnimSegment1271.children = new MFNode();

HAnimSegment1271.children[0] = Transform1272;

let Shape1275 = browser.currentScene.createNode("Shape");
let LineSet1276 = browser.currentScene.createNode("LineSet");
LineSet1276.vertexCount = new MFInt32(new int[2]);
let Coordinate1277 = browser.currentScene.createNode("Coordinate");
Coordinate1277.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1276.coord = Coordinate1277;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA1278 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1278.USE = "HAnimSegmentLineColorRGBA";
LineSet1276.color = ColorRGBA1278;

Shape1275.geometry = LineSet1276;

HAnimSegment1271.children[1] = Shape1275;

HAnimJoint1270.children = new MFNode();

HAnimJoint1270.children[0] = HAnimSegment1271;

let HAnimJoint1279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1279.name = "l_metacarpophalangeal_4";
HAnimJoint1279.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1279.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1279.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1279.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1280.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1280.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform1281 = browser.currentScene.createNode("Transform");
Transform1281.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Transform1282 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1283 = browser.currentScene.createNode("Shape");
Shape1283.USE = "HAnimJointShape";
Transform1282.children = new MFNode();

Transform1282.children[0] = Shape1283;

Transform1281.children = new MFNode();

Transform1281.children[0] = Transform1282;

HAnimSegment1280.children = new MFNode();

HAnimSegment1280.children[0] = Transform1281;

let Shape1284 = browser.currentScene.createNode("Shape");
let LineSet1285 = browser.currentScene.createNode("LineSet");
LineSet1285.vertexCount = new MFInt32(new int[2]);
let Coordinate1286 = browser.currentScene.createNode("Coordinate");
Coordinate1286.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1285.coord = Coordinate1286;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1287 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1287.USE = "HAnimSegmentLineColorRGBA";
LineSet1285.color = ColorRGBA1287;

Shape1284.geometry = LineSet1285;

HAnimSegment1280.children[1] = Shape1284;

HAnimJoint1279.children = new MFNode();

HAnimJoint1279.children[0] = HAnimSegment1280;

let HAnimJoint1288 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1288.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1288.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1288.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1288.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1288.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1289.name = "l_carpal_middle_phalanx_4";
HAnimSegment1289.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform1290 = browser.currentScene.createNode("Transform");
Transform1290.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Transform1291 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1292 = browser.currentScene.createNode("Shape");
Shape1292.USE = "HAnimJointShape";
Transform1291.children = new MFNode();

Transform1291.children[0] = Shape1292;

Transform1290.children = new MFNode();

Transform1290.children[0] = Transform1291;

HAnimSegment1289.children = new MFNode();

HAnimSegment1289.children[0] = Transform1290;

let Shape1293 = browser.currentScene.createNode("Shape");
let LineSet1294 = browser.currentScene.createNode("LineSet");
LineSet1294.vertexCount = new MFInt32(new int[2]);
let Coordinate1295 = browser.currentScene.createNode("Coordinate");
Coordinate1295.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1294.coord = Coordinate1295;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1296 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1296.USE = "HAnimSegmentLineColorRGBA";
LineSet1294.color = ColorRGBA1296;

Shape1293.geometry = LineSet1294;

HAnimSegment1289.children[1] = Shape1293;

let HAnimSite1297 = browser.currentScene.createNode("HAnimSite");
HAnimSite1297.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite1297.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
let TouchSensor1298 = browser.currentScene.createNode("TouchSensor");
TouchSensor1298.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite1297.children = new MFNode();

HAnimSite1297.children[0] = TouchSensor1298;

let Shape1299 = browser.currentScene.createNode("Shape");
Shape1299.USE = "HAnimSiteShape";
HAnimSite1297.children[1] = Shape1299;

HAnimSegment1289.children[2] = HAnimSite1297;

HAnimJoint1288.children = new MFNode();

HAnimJoint1288.children[0] = HAnimSegment1289;

let HAnimJoint1300 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1300.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1300.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1300.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1300.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1300.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1288.children[1] = HAnimJoint1300;

HAnimJoint1279.children[1] = HAnimJoint1288;

HAnimJoint1270.children[1] = HAnimJoint1279;

HAnimJoint1254.children[1] = HAnimJoint1270;

let HAnimJoint1301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1301.name = "l_carpometacarpal_5";
HAnimJoint1301.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1301.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1301.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1301.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1302.name = "l_metacarpal_5";
HAnimSegment1302.DEF = "hanim_l_metacarpal_5";
let Transform1303 = browser.currentScene.createNode("Transform");
Transform1303.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Transform1304 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1305 = browser.currentScene.createNode("Shape");
Shape1305.USE = "HAnimJointShape";
Transform1304.children = new MFNode();

Transform1304.children[0] = Shape1305;

Transform1303.children = new MFNode();

Transform1303.children[0] = Transform1304;

HAnimSegment1302.children = new MFNode();

HAnimSegment1302.children[0] = Transform1303;

let Shape1306 = browser.currentScene.createNode("Shape");
let LineSet1307 = browser.currentScene.createNode("LineSet");
LineSet1307.vertexCount = new MFInt32(new int[2]);
let Coordinate1308 = browser.currentScene.createNode("Coordinate");
Coordinate1308.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1307.coord = Coordinate1308;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA1309 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1309.USE = "HAnimSegmentLineColorRGBA";
LineSet1307.color = ColorRGBA1309;

Shape1306.geometry = LineSet1307;

HAnimSegment1302.children[1] = Shape1306;

HAnimJoint1301.children = new MFNode();

HAnimJoint1301.children[0] = HAnimSegment1302;

let HAnimJoint1310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1310.name = "l_metacarpophalangeal_5";
HAnimJoint1310.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1310.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1310.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1310.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1311.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1311.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform1312 = browser.currentScene.createNode("Transform");
Transform1312.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Transform1313 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1314 = browser.currentScene.createNode("Shape");
Shape1314.USE = "HAnimJointShape";
Transform1313.children = new MFNode();

Transform1313.children[0] = Shape1314;

Transform1312.children = new MFNode();

Transform1312.children[0] = Transform1313;

HAnimSegment1311.children = new MFNode();

HAnimSegment1311.children[0] = Transform1312;

let Shape1315 = browser.currentScene.createNode("Shape");
let LineSet1316 = browser.currentScene.createNode("LineSet");
LineSet1316.vertexCount = new MFInt32(new int[2]);
let Coordinate1317 = browser.currentScene.createNode("Coordinate");
Coordinate1317.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1316.coord = Coordinate1317;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1318 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1318.USE = "HAnimSegmentLineColorRGBA";
LineSet1316.color = ColorRGBA1318;

Shape1315.geometry = LineSet1316;

HAnimSegment1311.children[1] = Shape1315;

HAnimJoint1310.children = new MFNode();

HAnimJoint1310.children[0] = HAnimSegment1311;

let HAnimJoint1319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1319.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1319.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1319.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1319.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1319.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1320 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1320.name = "l_carpal_middle_phalanx_5";
HAnimSegment1320.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform1321 = browser.currentScene.createNode("Transform");
Transform1321.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Transform1322 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1323 = browser.currentScene.createNode("Shape");
Shape1323.USE = "HAnimJointShape";
Transform1322.children = new MFNode();

Transform1322.children[0] = Shape1323;

Transform1321.children = new MFNode();

Transform1321.children[0] = Transform1322;

HAnimSegment1320.children = new MFNode();

HAnimSegment1320.children[0] = Transform1321;

let Shape1324 = browser.currentScene.createNode("Shape");
let LineSet1325 = browser.currentScene.createNode("LineSet");
LineSet1325.vertexCount = new MFInt32(new int[2]);
let Coordinate1326 = browser.currentScene.createNode("Coordinate");
Coordinate1326.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1325.coord = Coordinate1326;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1327 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1327.USE = "HAnimSegmentLineColorRGBA";
LineSet1325.color = ColorRGBA1327;

Shape1324.geometry = LineSet1325;

HAnimSegment1320.children[1] = Shape1324;

let HAnimSite1328 = browser.currentScene.createNode("HAnimSite");
HAnimSite1328.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite1328.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
let TouchSensor1329 = browser.currentScene.createNode("TouchSensor");
TouchSensor1329.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite1328.children = new MFNode();

HAnimSite1328.children[0] = TouchSensor1329;

let Shape1330 = browser.currentScene.createNode("Shape");
Shape1330.USE = "HAnimSiteShape";
HAnimSite1328.children[1] = Shape1330;

HAnimSegment1320.children[2] = HAnimSite1328;

HAnimJoint1319.children = new MFNode();

HAnimJoint1319.children[0] = HAnimSegment1320;

let HAnimJoint1331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1331.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1331.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1331.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1331.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1331.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1319.children[1] = HAnimJoint1331;

HAnimJoint1310.children[1] = HAnimJoint1319;

HAnimJoint1301.children[1] = HAnimJoint1310;

HAnimJoint1254.children[2] = HAnimJoint1301;

HAnimJoint1113.children[4] = HAnimJoint1254;

HAnimJoint1101.children[1] = HAnimJoint1113;

HAnimJoint1080.children[1] = HAnimJoint1101;

HAnimJoint1065.children[1] = HAnimJoint1080;

HAnimJoint1056.children[1] = HAnimJoint1065;

HAnimJoint852.children[2] = HAnimJoint1056;

let HAnimJoint1332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1332.name = "r_sternoclavicular";
HAnimJoint1332.DEF = "hanim_r_sternoclavicular";
HAnimJoint1332.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint1332.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1332.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1333.name = "r_clavicle";
HAnimSegment1333.DEF = "hanim_r_clavicle";
let Transform1334 = browser.currentScene.createNode("Transform");
Transform1334.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let Transform1335 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1336 = browser.currentScene.createNode("Shape");
Shape1336.USE = "HAnimJointShape";
Transform1335.children = new MFNode();

Transform1335.children[0] = Shape1336;

Transform1334.children = new MFNode();

Transform1334.children[0] = Transform1335;

HAnimSegment1333.children = new MFNode();

HAnimSegment1333.children[0] = Transform1334;

let Shape1337 = browser.currentScene.createNode("Shape");
let LineSet1338 = browser.currentScene.createNode("LineSet");
LineSet1338.vertexCount = new MFInt32(new int[2]);
let Coordinate1339 = browser.currentScene.createNode("Coordinate");
Coordinate1339.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1338.coord = Coordinate1339;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA1340 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1340.USE = "HAnimSegmentLineColorRGBA";
LineSet1338.color = ColorRGBA1340;

Shape1337.geometry = LineSet1338;

HAnimSegment1333.children[1] = Shape1337;

HAnimJoint1332.children = new MFNode();

HAnimJoint1332.children[0] = HAnimSegment1333;

let HAnimJoint1341 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1341.name = "r_acromioclavicular";
HAnimJoint1341.DEF = "hanim_r_acromioclavicular";
HAnimJoint1341.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint1341.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1341.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1342 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1342.name = "r_scapula";
HAnimSegment1342.DEF = "hanim_r_scapula";
let Transform1343 = browser.currentScene.createNode("Transform");
Transform1343.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let Transform1344 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1345 = browser.currentScene.createNode("Shape");
Shape1345.USE = "HAnimJointShape";
Transform1344.children = new MFNode();

Transform1344.children[0] = Shape1345;

Transform1343.children = new MFNode();

Transform1343.children[0] = Transform1344;

HAnimSegment1342.children = new MFNode();

HAnimSegment1342.children[0] = Transform1343;

let Shape1346 = browser.currentScene.createNode("Shape");
let LineSet1347 = browser.currentScene.createNode("LineSet");
LineSet1347.vertexCount = new MFInt32(new int[2]);
let Coordinate1348 = browser.currentScene.createNode("Coordinate");
Coordinate1348.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1347.coord = Coordinate1348;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA1349 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1349.USE = "HAnimSegmentLineColorRGBA";
LineSet1347.color = ColorRGBA1349;

Shape1346.geometry = LineSet1347;

HAnimSegment1342.children[1] = Shape1346;

let HAnimSite1350 = browser.currentScene.createNode("HAnimSite");
HAnimSite1350.name = "r_bideltoid_pt";
HAnimSite1350.DEF = "hanim_r_bideltoid_pt";
let TouchSensor1351 = browser.currentScene.createNode("TouchSensor");
TouchSensor1351.description = "HAnimSite r_bideltoid_pt";
HAnimSite1350.children = new MFNode();

HAnimSite1350.children[0] = TouchSensor1351;

let Shape1352 = browser.currentScene.createNode("Shape");
Shape1352.USE = "HAnimSiteShape";
HAnimSite1350.children[1] = Shape1352;

HAnimSegment1342.children[2] = HAnimSite1350;

let HAnimSite1353 = browser.currentScene.createNode("HAnimSite");
HAnimSite1353.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite1353.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite1353.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor1354 = browser.currentScene.createNode("TouchSensor");
TouchSensor1354.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite1353.children = new MFNode();

HAnimSite1353.children[0] = TouchSensor1354;

let Shape1355 = browser.currentScene.createNode("Shape");
Shape1355.USE = "HAnimSiteShape";
HAnimSite1353.children[1] = Shape1355;

HAnimSegment1342.children[3] = HAnimSite1353;

HAnimJoint1341.children = new MFNode();

HAnimJoint1341.children[0] = HAnimSegment1342;

let HAnimJoint1356 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1356.name = "r_shoulder";
HAnimJoint1356.DEF = "hanim_r_shoulder";
HAnimJoint1356.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint1356.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1356.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1357 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1357.name = "r_upperarm";
HAnimSegment1357.DEF = "hanim_r_upperarm";
let Transform1358 = browser.currentScene.createNode("Transform");
Transform1358.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Transform1359 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1360 = browser.currentScene.createNode("Shape");
Shape1360.USE = "HAnimJointShape";
Transform1359.children = new MFNode();

Transform1359.children[0] = Shape1360;

Transform1358.children = new MFNode();

Transform1358.children[0] = Transform1359;

HAnimSegment1357.children = new MFNode();

HAnimSegment1357.children[0] = Transform1358;

let Shape1361 = browser.currentScene.createNode("Shape");
let LineSet1362 = browser.currentScene.createNode("LineSet");
LineSet1362.vertexCount = new MFInt32(new int[2]);
let Coordinate1363 = browser.currentScene.createNode("Coordinate");
Coordinate1363.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1362.coord = Coordinate1363;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA1364 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1364.USE = "HAnimSegmentLineColorRGBA";
LineSet1362.color = ColorRGBA1364;

Shape1361.geometry = LineSet1362;

HAnimSegment1357.children[1] = Shape1361;

let HAnimSite1365 = browser.currentScene.createNode("HAnimSite");
HAnimSite1365.name = "r_humeral_medial_epicondyles_pt";
HAnimSite1365.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite1365.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor1366 = browser.currentScene.createNode("TouchSensor");
TouchSensor1366.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite1365.children = new MFNode();

HAnimSite1365.children[0] = TouchSensor1366;

let Shape1367 = browser.currentScene.createNode("Shape");
Shape1367.USE = "HAnimSiteShape";
HAnimSite1365.children[1] = Shape1367;

HAnimSegment1357.children[2] = HAnimSite1365;

let HAnimSite1368 = browser.currentScene.createNode("HAnimSite");
HAnimSite1368.name = "r_olecranon_pt";
HAnimSite1368.DEF = "hanim_r_olecranon_pt";
HAnimSite1368.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor1369 = browser.currentScene.createNode("TouchSensor");
TouchSensor1369.description = "HAnimSite r_olecranon_pt";
HAnimSite1368.children = new MFNode();

HAnimSite1368.children[0] = TouchSensor1369;

let Shape1370 = browser.currentScene.createNode("Shape");
Shape1370.USE = "HAnimSiteShape";
HAnimSite1368.children[1] = Shape1370;

HAnimSegment1357.children[3] = HAnimSite1368;

let HAnimSite1371 = browser.currentScene.createNode("HAnimSite");
HAnimSite1371.name = "r_radial_styloid_pt";
HAnimSite1371.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1371.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor1372 = browser.currentScene.createNode("TouchSensor");
TouchSensor1372.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1371.children = new MFNode();

HAnimSite1371.children[0] = TouchSensor1372;

let Shape1373 = browser.currentScene.createNode("Shape");
Shape1373.USE = "HAnimSiteShape";
HAnimSite1371.children[1] = Shape1373;

HAnimSegment1357.children[4] = HAnimSite1371;

let HAnimSite1374 = browser.currentScene.createNode("HAnimSite");
HAnimSite1374.name = "r_radiale_pt";
HAnimSite1374.DEF = "hanim_r_radiale_pt";
HAnimSite1374.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor1375 = browser.currentScene.createNode("TouchSensor");
TouchSensor1375.description = "HAnimSite r_radiale_pt";
HAnimSite1374.children = new MFNode();

HAnimSite1374.children[0] = TouchSensor1375;

let Shape1376 = browser.currentScene.createNode("Shape");
Shape1376.USE = "HAnimSiteShape";
HAnimSite1374.children[1] = Shape1376;

HAnimSegment1357.children[5] = HAnimSite1374;

HAnimJoint1356.children = new MFNode();

HAnimJoint1356.children[0] = HAnimSegment1357;

let HAnimJoint1377 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1377.name = "r_elbow";
HAnimJoint1377.DEF = "hanim_r_elbow";
HAnimJoint1377.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint1377.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1377.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1378 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1378.name = "r_forearm";
HAnimSegment1378.DEF = "hanim_r_forearm";
let Transform1379 = browser.currentScene.createNode("Transform");
Transform1379.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Transform1380 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1381 = browser.currentScene.createNode("Shape");
Shape1381.USE = "HAnimJointShape";
Transform1380.children = new MFNode();

Transform1380.children[0] = Shape1381;

Transform1379.children = new MFNode();

Transform1379.children[0] = Transform1380;

HAnimSegment1378.children = new MFNode();

HAnimSegment1378.children[0] = Transform1379;

let Shape1382 = browser.currentScene.createNode("Shape");
let LineSet1383 = browser.currentScene.createNode("LineSet");
LineSet1383.vertexCount = new MFInt32(new int[2]);
let Coordinate1384 = browser.currentScene.createNode("Coordinate");
Coordinate1384.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1383.coord = Coordinate1384;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA1385 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1385.USE = "HAnimSegmentLineColorRGBA";
LineSet1383.color = ColorRGBA1385;

Shape1382.geometry = LineSet1383;

HAnimSegment1378.children[1] = Shape1382;

let HAnimSite1386 = browser.currentScene.createNode("HAnimSite");
HAnimSite1386.name = "r_ulnar_styloid_pt";
HAnimSite1386.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1386.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor1387 = browser.currentScene.createNode("TouchSensor");
TouchSensor1387.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1386.children = new MFNode();

HAnimSite1386.children[0] = TouchSensor1387;

let Shape1388 = browser.currentScene.createNode("Shape");
Shape1388.USE = "HAnimSiteShape";
HAnimSite1386.children[1] = Shape1388;

HAnimSegment1378.children[2] = HAnimSite1386;

HAnimJoint1377.children = new MFNode();

HAnimJoint1377.children[0] = HAnimSegment1378;

let HAnimJoint1389 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1389.name = "r_radiocarpal";
HAnimJoint1389.DEF = "hanim_r_radiocarpal";
HAnimJoint1389.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint1389.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1389.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1390 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1390.name = "r_carpal";
HAnimSegment1390.DEF = "hanim_r_carpal";
let Transform1391 = browser.currentScene.createNode("Transform");
Transform1391.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1391.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1391.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
let Transform1392 = browser.currentScene.createNode("Transform");
Transform1392.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
let Shape1393 = browser.currentScene.createNode("Shape");
Shape1393.USE = "HAnimJointShape";
Transform1392.children = new MFNode();

Transform1392.children[0] = Shape1393;

Transform1391.children = new MFNode();

Transform1391.children[0] = Transform1392;

HAnimSegment1390.children = new MFNode();

HAnimSegment1390.children[0] = Transform1391;

let Shape1394 = browser.currentScene.createNode("Shape");
let LineSet1395 = browser.currentScene.createNode("LineSet");
LineSet1395.vertexCount = new MFInt32(new int[2]);
let Coordinate1396 = browser.currentScene.createNode("Coordinate");
Coordinate1396.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1395.coord = Coordinate1396;

//from r_radiocarpal to r_midcarpal_1 vertices 2
let ColorRGBA1397 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1397.USE = "HAnimSegmentLineColorRGBA";
LineSet1395.color = ColorRGBA1397;

Shape1394.geometry = LineSet1395;

HAnimSegment1390.children[1] = Shape1394;

let Shape1398 = browser.currentScene.createNode("Shape");
let LineSet1399 = browser.currentScene.createNode("LineSet");
LineSet1399.vertexCount = new MFInt32(new int[2]);
let Coordinate1400 = browser.currentScene.createNode("Coordinate");
Coordinate1400.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1399.coord = Coordinate1400;

//from r_radiocarpal to r_midcarpal_2 vertices 2
let ColorRGBA1401 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1401.USE = "HAnimSegmentLineColorRGBA";
LineSet1399.color = ColorRGBA1401;

Shape1398.geometry = LineSet1399;

HAnimSegment1390.children[2] = Shape1398;

let Shape1402 = browser.currentScene.createNode("Shape");
let LineSet1403 = browser.currentScene.createNode("LineSet");
LineSet1403.vertexCount = new MFInt32(new int[2]);
let Coordinate1404 = browser.currentScene.createNode("Coordinate");
Coordinate1404.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1403.coord = Coordinate1404;

//from r_radiocarpal to r_midcarpal_3 vertices 2
let ColorRGBA1405 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1405.USE = "HAnimSegmentLineColorRGBA";
LineSet1403.color = ColorRGBA1405;

Shape1402.geometry = LineSet1403;

HAnimSegment1390.children[3] = Shape1402;

let Shape1406 = browser.currentScene.createNode("Shape");
let LineSet1407 = browser.currentScene.createNode("LineSet");
LineSet1407.vertexCount = new MFInt32(new int[2]);
let Coordinate1408 = browser.currentScene.createNode("Coordinate");
Coordinate1408.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1407.coord = Coordinate1408;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
let ColorRGBA1409 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1409.USE = "HAnimSegmentLineColorRGBA";
LineSet1407.color = ColorRGBA1409;

Shape1406.geometry = LineSet1407;

HAnimSegment1390.children[4] = Shape1406;

HAnimJoint1389.children = new MFNode();

HAnimJoint1389.children[0] = HAnimSegment1390;

let HAnimJoint1410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1410.name = "r_midcarpal_1";
HAnimJoint1410.DEF = "hanim_r_midcarpal_1";
HAnimJoint1410.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1410.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1411 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1411.name = "r_trapezium";
HAnimSegment1411.DEF = "hanim_r_trapezium";
let Transform1412 = browser.currentScene.createNode("Transform");
Transform1412.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let Transform1413 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1414 = browser.currentScene.createNode("Shape");
Shape1414.USE = "HAnimJointShape";
Transform1413.children = new MFNode();

Transform1413.children[0] = Shape1414;

Transform1412.children = new MFNode();

Transform1412.children[0] = Transform1413;

HAnimSegment1411.children = new MFNode();

HAnimSegment1411.children[0] = Transform1412;

let Shape1415 = browser.currentScene.createNode("Shape");
let LineSet1416 = browser.currentScene.createNode("LineSet");
LineSet1416.vertexCount = new MFInt32(new int[2]);
let Coordinate1417 = browser.currentScene.createNode("Coordinate");
Coordinate1417.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473]);
LineSet1416.coord = Coordinate1417;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 1
let ColorRGBA1418 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1418.USE = "HAnimSegmentLineColorRGBA";
LineSet1416.color = ColorRGBA1418;

Shape1415.geometry = LineSet1416;

HAnimSegment1411.children[1] = Shape1415;

HAnimJoint1410.children = new MFNode();

HAnimJoint1410.children[0] = HAnimSegment1411;

let HAnimJoint1419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1419.name = "r_carpometacarpal_1";
HAnimJoint1419.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1419.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1419.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1419.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1420 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1420.name = "r_metacarpal_1";
HAnimSegment1420.DEF = "hanim_r_metacarpal_1";
let Transform1421 = browser.currentScene.createNode("Transform");
Transform1421.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let Transform1422 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1423 = browser.currentScene.createNode("Shape");
Shape1423.USE = "HAnimJointShape";
Transform1422.children = new MFNode();

Transform1422.children[0] = Shape1423;

Transform1421.children = new MFNode();

Transform1421.children[0] = Transform1422;

HAnimSegment1420.children = new MFNode();

HAnimSegment1420.children[0] = Transform1421;

let Shape1424 = browser.currentScene.createNode("Shape");
let LineSet1425 = browser.currentScene.createNode("LineSet");
LineSet1425.vertexCount = new MFInt32(new int[2]);
let Coordinate1426 = browser.currentScene.createNode("Coordinate");
Coordinate1426.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1425.coord = Coordinate1426;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA1427 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1427.USE = "HAnimSegmentLineColorRGBA";
LineSet1425.color = ColorRGBA1427;

Shape1424.geometry = LineSet1425;

HAnimSegment1420.children[1] = Shape1424;

HAnimJoint1419.children = new MFNode();

HAnimJoint1419.children[0] = HAnimSegment1420;

let HAnimJoint1428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1428.name = "r_metacarpophalangeal_1";
HAnimJoint1428.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1428.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1428.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1428.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1429 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1429.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1429.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform1430 = browser.currentScene.createNode("Transform");
Transform1430.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let Transform1431 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1432 = browser.currentScene.createNode("Shape");
Shape1432.USE = "HAnimJointShape";
Transform1431.children = new MFNode();

Transform1431.children[0] = Shape1432;

Transform1430.children = new MFNode();

Transform1430.children[0] = Transform1431;

HAnimSegment1429.children = new MFNode();

HAnimSegment1429.children[0] = Transform1430;

let Shape1433 = browser.currentScene.createNode("Shape");
let LineSet1434 = browser.currentScene.createNode("LineSet");
LineSet1434.vertexCount = new MFInt32(new int[2]);
let Coordinate1435 = browser.currentScene.createNode("Coordinate");
Coordinate1435.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1434.coord = Coordinate1435;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA1436 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1436.USE = "HAnimSegmentLineColorRGBA";
LineSet1434.color = ColorRGBA1436;

Shape1433.geometry = LineSet1434;

HAnimSegment1429.children[1] = Shape1433;

let HAnimSite1437 = browser.currentScene.createNode("HAnimSite");
HAnimSite1437.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1437.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
let TouchSensor1438 = browser.currentScene.createNode("TouchSensor");
TouchSensor1438.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1437.children = new MFNode();

HAnimSite1437.children[0] = TouchSensor1438;

let Shape1439 = browser.currentScene.createNode("Shape");
Shape1439.USE = "HAnimSiteShape";
HAnimSite1437.children[1] = Shape1439;

HAnimSegment1429.children[2] = HAnimSite1437;

HAnimJoint1428.children = new MFNode();

HAnimJoint1428.children[0] = HAnimSegment1429;

let HAnimJoint1440 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1440.name = "r_carpal_interphalangeal_1";
HAnimJoint1440.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1440.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1440.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1440.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1428.children[1] = HAnimJoint1440;

HAnimJoint1419.children[1] = HAnimJoint1428;

HAnimJoint1410.children[1] = HAnimJoint1419;

HAnimJoint1389.children[1] = HAnimJoint1410;

let HAnimJoint1441 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1441.name = "r_midcarpal_2";
HAnimJoint1441.DEF = "hanim_r_midcarpal_2";
HAnimJoint1441.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1441.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1442 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1442.name = "r_trapezoid";
HAnimSegment1442.DEF = "hanim_r_trapezoid";
let Transform1443 = browser.currentScene.createNode("Transform");
Transform1443.translation = new SFVec3f(new float[-0.1864,0.819,0.0506]);
let Transform1444 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1445 = browser.currentScene.createNode("Shape");
Shape1445.USE = "HAnimJointShape";
Transform1444.children = new MFNode();

Transform1444.children[0] = Shape1445;

Transform1443.children = new MFNode();

Transform1443.children[0] = Transform1444;

HAnimSegment1442.children = new MFNode();

HAnimSegment1442.children[0] = Transform1443;

let Shape1446 = browser.currentScene.createNode("Shape");
let LineSet1447 = browser.currentScene.createNode("LineSet");
LineSet1447.vertexCount = new MFInt32(new int[2]);
let Coordinate1448 = browser.currentScene.createNode("Coordinate");
Coordinate1448.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218]);
LineSet1447.coord = Coordinate1448;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 1
let ColorRGBA1449 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1449.USE = "HAnimSegmentLineColorRGBA";
LineSet1447.color = ColorRGBA1449;

Shape1446.geometry = LineSet1447;

HAnimSegment1442.children[1] = Shape1446;

let HAnimSite1450 = browser.currentScene.createNode("HAnimSite");
HAnimSite1450.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1450.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1450.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor1451 = browser.currentScene.createNode("TouchSensor");
TouchSensor1451.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1450.children = new MFNode();

HAnimSite1450.children[0] = TouchSensor1451;

let Shape1452 = browser.currentScene.createNode("Shape");
Shape1452.USE = "HAnimSiteShape";
HAnimSite1450.children[1] = Shape1452;

HAnimSegment1442.children[2] = HAnimSite1450;

HAnimJoint1441.children = new MFNode();

HAnimJoint1441.children[0] = HAnimSegment1442;

let HAnimJoint1453 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1453.name = "r_carpometacarpal_2";
HAnimJoint1453.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1453.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1453.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1453.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1454 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1454.name = "r_metacarpal_2";
HAnimSegment1454.DEF = "hanim_r_metacarpal_2";
let Transform1455 = browser.currentScene.createNode("Transform");
Transform1455.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let Transform1456 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1457 = browser.currentScene.createNode("Shape");
Shape1457.USE = "HAnimJointShape";
Transform1456.children = new MFNode();

Transform1456.children[0] = Shape1457;

Transform1455.children = new MFNode();

Transform1455.children[0] = Transform1456;

HAnimSegment1454.children = new MFNode();

HAnimSegment1454.children[0] = Transform1455;

let Shape1458 = browser.currentScene.createNode("Shape");
let LineSet1459 = browser.currentScene.createNode("LineSet");
LineSet1459.vertexCount = new MFInt32(new int[2]);
let Coordinate1460 = browser.currentScene.createNode("Coordinate");
Coordinate1460.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1459.coord = Coordinate1460;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA1461 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1461.USE = "HAnimSegmentLineColorRGBA";
LineSet1459.color = ColorRGBA1461;

Shape1458.geometry = LineSet1459;

HAnimSegment1454.children[1] = Shape1458;

HAnimJoint1453.children = new MFNode();

HAnimJoint1453.children[0] = HAnimSegment1454;

let HAnimJoint1462 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1462.name = "r_metacarpophalangeal_2";
HAnimJoint1462.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1462.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1462.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1462.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1463 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1463.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1463.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform1464 = browser.currentScene.createNode("Transform");
Transform1464.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let Transform1465 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1466 = browser.currentScene.createNode("Shape");
Shape1466.USE = "HAnimJointShape";
Transform1465.children = new MFNode();

Transform1465.children[0] = Shape1466;

Transform1464.children = new MFNode();

Transform1464.children[0] = Transform1465;

HAnimSegment1463.children = new MFNode();

HAnimSegment1463.children[0] = Transform1464;

let Shape1467 = browser.currentScene.createNode("Shape");
let LineSet1468 = browser.currentScene.createNode("LineSet");
LineSet1468.vertexCount = new MFInt32(new int[2]);
let Coordinate1469 = browser.currentScene.createNode("Coordinate");
Coordinate1469.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1468.coord = Coordinate1469;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1470 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1470.USE = "HAnimSegmentLineColorRGBA";
LineSet1468.color = ColorRGBA1470;

Shape1467.geometry = LineSet1468;

HAnimSegment1463.children[1] = Shape1467;

HAnimJoint1462.children = new MFNode();

HAnimJoint1462.children[0] = HAnimSegment1463;

let HAnimJoint1471 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1471.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1471.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1471.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1471.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1471.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1472 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1472.name = "r_carpal_middle_phalanx_2";
HAnimSegment1472.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform1473 = browser.currentScene.createNode("Transform");
Transform1473.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let Transform1474 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1475 = browser.currentScene.createNode("Shape");
Shape1475.USE = "HAnimJointShape";
Transform1474.children = new MFNode();

Transform1474.children[0] = Shape1475;

Transform1473.children = new MFNode();

Transform1473.children[0] = Transform1474;

HAnimSegment1472.children = new MFNode();

HAnimSegment1472.children[0] = Transform1473;

let Shape1476 = browser.currentScene.createNode("Shape");
let LineSet1477 = browser.currentScene.createNode("LineSet");
LineSet1477.vertexCount = new MFInt32(new int[2]);
let Coordinate1478 = browser.currentScene.createNode("Coordinate");
Coordinate1478.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1477.coord = Coordinate1478;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1479 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1479.USE = "HAnimSegmentLineColorRGBA";
LineSet1477.color = ColorRGBA1479;

Shape1476.geometry = LineSet1477;

HAnimSegment1472.children[1] = Shape1476;

let HAnimSite1480 = browser.currentScene.createNode("HAnimSite");
HAnimSite1480.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1480.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
let TouchSensor1481 = browser.currentScene.createNode("TouchSensor");
TouchSensor1481.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1480.children = new MFNode();

HAnimSite1480.children[0] = TouchSensor1481;

let Shape1482 = browser.currentScene.createNode("Shape");
Shape1482.USE = "HAnimSiteShape";
HAnimSite1480.children[1] = Shape1482;

HAnimSegment1472.children[2] = HAnimSite1480;

let HAnimSite1483 = browser.currentScene.createNode("HAnimSite");
HAnimSite1483.name = "r_dactylion_pt";
HAnimSite1483.DEF = "hanim_r_dactylion_pt";
HAnimSite1483.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor1484 = browser.currentScene.createNode("TouchSensor");
TouchSensor1484.description = "HAnimSite r_dactylion_pt";
HAnimSite1483.children = new MFNode();

HAnimSite1483.children[0] = TouchSensor1484;

let Shape1485 = browser.currentScene.createNode("Shape");
Shape1485.USE = "HAnimSiteShape";
HAnimSite1483.children[1] = Shape1485;

HAnimSegment1472.children[3] = HAnimSite1483;

HAnimJoint1471.children = new MFNode();

HAnimJoint1471.children[0] = HAnimSegment1472;

let HAnimJoint1486 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1486.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1486.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1486.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1486.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1486.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1471.children[1] = HAnimJoint1486;

HAnimJoint1462.children[1] = HAnimJoint1471;

HAnimJoint1453.children[1] = HAnimJoint1462;

HAnimJoint1441.children[1] = HAnimJoint1453;

HAnimJoint1389.children[2] = HAnimJoint1441;

let HAnimJoint1487 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1487.name = "r_midcarpal_3";
HAnimJoint1487.DEF = "hanim_r_midcarpal_3";
HAnimJoint1487.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1487.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1488 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1488.name = "r_capitate";
HAnimSegment1488.DEF = "hanim_r_capitate";
let Transform1489 = browser.currentScene.createNode("Transform");
Transform1489.translation = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
let Transform1490 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1491 = browser.currentScene.createNode("Shape");
Shape1491.USE = "HAnimJointShape";
Transform1490.children = new MFNode();

Transform1490.children[0] = Shape1491;

Transform1489.children = new MFNode();

Transform1489.children[0] = Transform1490;

HAnimSegment1488.children = new MFNode();

HAnimSegment1488.children[0] = Transform1489;

let Shape1492 = browser.currentScene.createNode("Shape");
let LineSet1493 = browser.currentScene.createNode("LineSet");
LineSet1493.vertexCount = new MFInt32(new int[2]);
let Coordinate1494 = browser.currentScene.createNode("Coordinate");
Coordinate1494.point = new MFVec3f(new float[-0.1972,0.806,-0.0468]);
LineSet1493.coord = Coordinate1494;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 1
let ColorRGBA1495 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1495.USE = "HAnimSegmentLineColorRGBA";
LineSet1493.color = ColorRGBA1495;

Shape1492.geometry = LineSet1493;

HAnimSegment1488.children[1] = Shape1492;

let HAnimSite1496 = browser.currentScene.createNode("HAnimSite");
HAnimSite1496.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1496.DEF = "hanim_r_metacarpal_phalanx_3_pt";
let TouchSensor1497 = browser.currentScene.createNode("TouchSensor");
TouchSensor1497.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1496.children = new MFNode();

HAnimSite1496.children[0] = TouchSensor1497;

let Shape1498 = browser.currentScene.createNode("Shape");
Shape1498.USE = "HAnimSiteShape";
HAnimSite1496.children[1] = Shape1498;

HAnimSegment1488.children[2] = HAnimSite1496;

HAnimJoint1487.children = new MFNode();

HAnimJoint1487.children[0] = HAnimSegment1488;

let HAnimJoint1499 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1499.name = "r_carpometacarpal_3";
HAnimJoint1499.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1499.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1499.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1499.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1500 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1500.name = "r_metacarpal_3";
HAnimSegment1500.DEF = "hanim_r_metacarpal_3";
let Transform1501 = browser.currentScene.createNode("Transform");
Transform1501.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let Transform1502 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1503 = browser.currentScene.createNode("Shape");
Shape1503.USE = "HAnimJointShape";
Transform1502.children = new MFNode();

Transform1502.children[0] = Shape1503;

Transform1501.children = new MFNode();

Transform1501.children[0] = Transform1502;

HAnimSegment1500.children = new MFNode();

HAnimSegment1500.children[0] = Transform1501;

let Shape1504 = browser.currentScene.createNode("Shape");
let LineSet1505 = browser.currentScene.createNode("LineSet");
LineSet1505.vertexCount = new MFInt32(new int[2]);
let Coordinate1506 = browser.currentScene.createNode("Coordinate");
Coordinate1506.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1505.coord = Coordinate1506;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA1507 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1507.USE = "HAnimSegmentLineColorRGBA";
LineSet1505.color = ColorRGBA1507;

Shape1504.geometry = LineSet1505;

HAnimSegment1500.children[1] = Shape1504;

HAnimJoint1499.children = new MFNode();

HAnimJoint1499.children[0] = HAnimSegment1500;

let HAnimJoint1508 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1508.name = "r_metacarpophalangeal_3";
HAnimJoint1508.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1508.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1508.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1508.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1509.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1509.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform1510 = browser.currentScene.createNode("Transform");
Transform1510.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let Transform1511 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1512 = browser.currentScene.createNode("Shape");
Shape1512.USE = "HAnimJointShape";
Transform1511.children = new MFNode();

Transform1511.children[0] = Shape1512;

Transform1510.children = new MFNode();

Transform1510.children[0] = Transform1511;

HAnimSegment1509.children = new MFNode();

HAnimSegment1509.children[0] = Transform1510;

let Shape1513 = browser.currentScene.createNode("Shape");
let LineSet1514 = browser.currentScene.createNode("LineSet");
LineSet1514.vertexCount = new MFInt32(new int[2]);
let Coordinate1515 = browser.currentScene.createNode("Coordinate");
Coordinate1515.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1514.coord = Coordinate1515;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1516 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1516.USE = "HAnimSegmentLineColorRGBA";
LineSet1514.color = ColorRGBA1516;

Shape1513.geometry = LineSet1514;

HAnimSegment1509.children[1] = Shape1513;

HAnimJoint1508.children = new MFNode();

HAnimJoint1508.children[0] = HAnimSegment1509;

let HAnimJoint1517 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1517.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1517.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1517.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1517.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1517.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1518 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1518.name = "r_carpal_middle_phalanx_3";
HAnimSegment1518.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform1519 = browser.currentScene.createNode("Transform");
Transform1519.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let Transform1520 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1521 = browser.currentScene.createNode("Shape");
Shape1521.USE = "HAnimJointShape";
Transform1520.children = new MFNode();

Transform1520.children[0] = Shape1521;

Transform1519.children = new MFNode();

Transform1519.children[0] = Transform1520;

HAnimSegment1518.children = new MFNode();

HAnimSegment1518.children[0] = Transform1519;

let Shape1522 = browser.currentScene.createNode("Shape");
let LineSet1523 = browser.currentScene.createNode("LineSet");
LineSet1523.vertexCount = new MFInt32(new int[2]);
let Coordinate1524 = browser.currentScene.createNode("Coordinate");
Coordinate1524.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1523.coord = Coordinate1524;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1525 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1525.USE = "HAnimSegmentLineColorRGBA";
LineSet1523.color = ColorRGBA1525;

Shape1522.geometry = LineSet1523;

HAnimSegment1518.children[1] = Shape1522;

let HAnimSite1526 = browser.currentScene.createNode("HAnimSite");
HAnimSite1526.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1526.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
let TouchSensor1527 = browser.currentScene.createNode("TouchSensor");
TouchSensor1527.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1526.children = new MFNode();

HAnimSite1526.children[0] = TouchSensor1527;

let Shape1528 = browser.currentScene.createNode("Shape");
Shape1528.USE = "HAnimSiteShape";
HAnimSite1526.children[1] = Shape1528;

HAnimSegment1518.children[2] = HAnimSite1526;

HAnimJoint1517.children = new MFNode();

HAnimJoint1517.children[0] = HAnimSegment1518;

let HAnimJoint1529 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1529.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1529.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1529.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1529.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1529.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1517.children[1] = HAnimJoint1529;

HAnimJoint1508.children[1] = HAnimJoint1517;

HAnimJoint1499.children[1] = HAnimJoint1508;

HAnimJoint1487.children[1] = HAnimJoint1499;

HAnimJoint1389.children[3] = HAnimJoint1487;

let HAnimJoint1530 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1530.name = "r_midcarpal_4_5";
HAnimJoint1530.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1530.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1530.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1531 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1531.name = "r_hamate";
HAnimSegment1531.DEF = "hanim_r_hamate";
let Transform1532 = browser.currentScene.createNode("Transform");
Transform1532.translation = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
let Transform1533 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1534 = browser.currentScene.createNode("Shape");
Shape1534.USE = "HAnimJointShape";
Transform1533.children = new MFNode();

Transform1533.children[0] = Shape1534;

Transform1532.children = new MFNode();

Transform1532.children[0] = Transform1533;

HAnimSegment1531.children = new MFNode();

HAnimSegment1531.children[0] = Transform1532;

let Shape1535 = browser.currentScene.createNode("Shape");
let LineSet1536 = browser.currentScene.createNode("LineSet");
LineSet1536.vertexCount = new MFInt32(new int[2]);
let Coordinate1537 = browser.currentScene.createNode("Coordinate");
Coordinate1537.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732]);
LineSet1536.coord = Coordinate1537;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 1
let ColorRGBA1538 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1538.USE = "HAnimSegmentLineColorRGBA";
LineSet1536.color = ColorRGBA1538;

Shape1535.geometry = LineSet1536;

HAnimSegment1531.children[1] = Shape1535;

let Shape1539 = browser.currentScene.createNode("Shape");
let LineSet1540 = browser.currentScene.createNode("LineSet");
LineSet1540.vertexCount = new MFInt32(new int[2]);
let Coordinate1541 = browser.currentScene.createNode("Coordinate");
Coordinate1541.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975]);
LineSet1540.coord = Coordinate1541;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 1
let ColorRGBA1542 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1542.USE = "HAnimSegmentLineColorRGBA";
LineSet1540.color = ColorRGBA1542;

Shape1539.geometry = LineSet1540;

HAnimSegment1531.children[2] = Shape1539;

let HAnimSite1543 = browser.currentScene.createNode("HAnimSite");
HAnimSite1543.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1543.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1543.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor1544 = browser.currentScene.createNode("TouchSensor");
TouchSensor1544.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1543.children = new MFNode();

HAnimSite1543.children[0] = TouchSensor1544;

let Shape1545 = browser.currentScene.createNode("Shape");
Shape1545.USE = "HAnimSiteShape";
HAnimSite1543.children[1] = Shape1545;

HAnimSegment1531.children[3] = HAnimSite1543;

HAnimJoint1530.children = new MFNode();

HAnimJoint1530.children[0] = HAnimSegment1531;

let HAnimJoint1546 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1546.name = "r_carpometacarpal_4";
HAnimJoint1546.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1546.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1546.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1546.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1547 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1547.name = "r_metacarpal_4";
HAnimSegment1547.DEF = "hanim_r_metacarpal_4";
let Transform1548 = browser.currentScene.createNode("Transform");
Transform1548.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let Transform1549 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1550 = browser.currentScene.createNode("Shape");
Shape1550.USE = "HAnimJointShape";
Transform1549.children = new MFNode();

Transform1549.children[0] = Shape1550;

Transform1548.children = new MFNode();

Transform1548.children[0] = Transform1549;

HAnimSegment1547.children = new MFNode();

HAnimSegment1547.children[0] = Transform1548;

let Shape1551 = browser.currentScene.createNode("Shape");
let LineSet1552 = browser.currentScene.createNode("LineSet");
LineSet1552.vertexCount = new MFInt32(new int[2]);
let Coordinate1553 = browser.currentScene.createNode("Coordinate");
Coordinate1553.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1552.coord = Coordinate1553;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA1554 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1554.USE = "HAnimSegmentLineColorRGBA";
LineSet1552.color = ColorRGBA1554;

Shape1551.geometry = LineSet1552;

HAnimSegment1547.children[1] = Shape1551;

HAnimJoint1546.children = new MFNode();

HAnimJoint1546.children[0] = HAnimSegment1547;

let HAnimJoint1555 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1555.name = "r_metacarpophalangeal_4";
HAnimJoint1555.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1555.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1555.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1555.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1556 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1556.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1556.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform1557 = browser.currentScene.createNode("Transform");
Transform1557.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let Transform1558 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1559 = browser.currentScene.createNode("Shape");
Shape1559.USE = "HAnimJointShape";
Transform1558.children = new MFNode();

Transform1558.children[0] = Shape1559;

Transform1557.children = new MFNode();

Transform1557.children[0] = Transform1558;

HAnimSegment1556.children = new MFNode();

HAnimSegment1556.children[0] = Transform1557;

let Shape1560 = browser.currentScene.createNode("Shape");
let LineSet1561 = browser.currentScene.createNode("LineSet");
LineSet1561.vertexCount = new MFInt32(new int[2]);
let Coordinate1562 = browser.currentScene.createNode("Coordinate");
Coordinate1562.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1561.coord = Coordinate1562;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1563 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1563.USE = "HAnimSegmentLineColorRGBA";
LineSet1561.color = ColorRGBA1563;

Shape1560.geometry = LineSet1561;

HAnimSegment1556.children[1] = Shape1560;

HAnimJoint1555.children = new MFNode();

HAnimJoint1555.children[0] = HAnimSegment1556;

let HAnimJoint1564 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1564.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1564.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1564.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1564.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1564.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1565 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1565.name = "r_carpal_middle_phalanx_4";
HAnimSegment1565.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform1566 = browser.currentScene.createNode("Transform");
Transform1566.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let Transform1567 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1568 = browser.currentScene.createNode("Shape");
Shape1568.USE = "HAnimJointShape";
Transform1567.children = new MFNode();

Transform1567.children[0] = Shape1568;

Transform1566.children = new MFNode();

Transform1566.children[0] = Transform1567;

HAnimSegment1565.children = new MFNode();

HAnimSegment1565.children[0] = Transform1566;

let Shape1569 = browser.currentScene.createNode("Shape");
let LineSet1570 = browser.currentScene.createNode("LineSet");
LineSet1570.vertexCount = new MFInt32(new int[2]);
let Coordinate1571 = browser.currentScene.createNode("Coordinate");
Coordinate1571.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1570.coord = Coordinate1571;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1572 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1572.USE = "HAnimSegmentLineColorRGBA";
LineSet1570.color = ColorRGBA1572;

Shape1569.geometry = LineSet1570;

HAnimSegment1565.children[1] = Shape1569;

let HAnimSite1573 = browser.currentScene.createNode("HAnimSite");
HAnimSite1573.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1573.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
let TouchSensor1574 = browser.currentScene.createNode("TouchSensor");
TouchSensor1574.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1573.children = new MFNode();

HAnimSite1573.children[0] = TouchSensor1574;

let Shape1575 = browser.currentScene.createNode("Shape");
Shape1575.USE = "HAnimSiteShape";
HAnimSite1573.children[1] = Shape1575;

HAnimSegment1565.children[2] = HAnimSite1573;

HAnimJoint1564.children = new MFNode();

HAnimJoint1564.children[0] = HAnimSegment1565;

let HAnimJoint1576 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1576.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1576.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1576.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1576.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1576.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1564.children[1] = HAnimJoint1576;

HAnimJoint1555.children[1] = HAnimJoint1564;

HAnimJoint1546.children[1] = HAnimJoint1555;

HAnimJoint1530.children[1] = HAnimJoint1546;

let HAnimJoint1577 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1577.name = "r_carpometacarpal_5";
HAnimJoint1577.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1577.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1577.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1577.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1578 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1578.name = "r_metacarpal_5";
HAnimSegment1578.DEF = "hanim_r_metacarpal_5";
let Transform1579 = browser.currentScene.createNode("Transform");
Transform1579.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let Transform1580 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1581 = browser.currentScene.createNode("Shape");
Shape1581.USE = "HAnimJointShape";
Transform1580.children = new MFNode();

Transform1580.children[0] = Shape1581;

Transform1579.children = new MFNode();

Transform1579.children[0] = Transform1580;

HAnimSegment1578.children = new MFNode();

HAnimSegment1578.children[0] = Transform1579;

let Shape1582 = browser.currentScene.createNode("Shape");
let LineSet1583 = browser.currentScene.createNode("LineSet");
LineSet1583.vertexCount = new MFInt32(new int[2]);
let Coordinate1584 = browser.currentScene.createNode("Coordinate");
Coordinate1584.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1583.coord = Coordinate1584;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA1585 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1585.USE = "HAnimSegmentLineColorRGBA";
LineSet1583.color = ColorRGBA1585;

Shape1582.geometry = LineSet1583;

HAnimSegment1578.children[1] = Shape1582;

HAnimJoint1577.children = new MFNode();

HAnimJoint1577.children[0] = HAnimSegment1578;

let HAnimJoint1586 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1586.name = "r_metacarpophalangeal_5";
HAnimJoint1586.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1586.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1586.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1586.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1587 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1587.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1587.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform1588 = browser.currentScene.createNode("Transform");
Transform1588.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let Transform1589 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1590 = browser.currentScene.createNode("Shape");
Shape1590.USE = "HAnimJointShape";
Transform1589.children = new MFNode();

Transform1589.children[0] = Shape1590;

Transform1588.children = new MFNode();

Transform1588.children[0] = Transform1589;

HAnimSegment1587.children = new MFNode();

HAnimSegment1587.children[0] = Transform1588;

let Shape1591 = browser.currentScene.createNode("Shape");
let LineSet1592 = browser.currentScene.createNode("LineSet");
LineSet1592.vertexCount = new MFInt32(new int[2]);
let Coordinate1593 = browser.currentScene.createNode("Coordinate");
Coordinate1593.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1592.coord = Coordinate1593;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1594 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1594.USE = "HAnimSegmentLineColorRGBA";
LineSet1592.color = ColorRGBA1594;

Shape1591.geometry = LineSet1592;

HAnimSegment1587.children[1] = Shape1591;

HAnimJoint1586.children = new MFNode();

HAnimJoint1586.children[0] = HAnimSegment1587;

let HAnimJoint1595 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1595.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1595.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1595.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1595.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1595.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1596 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1596.name = "r_carpal_middle_phalanx_5";
HAnimSegment1596.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform1597 = browser.currentScene.createNode("Transform");
Transform1597.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let Transform1598 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1599 = browser.currentScene.createNode("Shape");
Shape1599.USE = "HAnimJointShape";
Transform1598.children = new MFNode();

Transform1598.children[0] = Shape1599;

Transform1597.children = new MFNode();

Transform1597.children[0] = Transform1598;

HAnimSegment1596.children = new MFNode();

HAnimSegment1596.children[0] = Transform1597;

let Shape1600 = browser.currentScene.createNode("Shape");
let LineSet1601 = browser.currentScene.createNode("LineSet");
LineSet1601.vertexCount = new MFInt32(new int[2]);
let Coordinate1602 = browser.currentScene.createNode("Coordinate");
Coordinate1602.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1601.coord = Coordinate1602;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1603 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1603.USE = "HAnimSegmentLineColorRGBA";
LineSet1601.color = ColorRGBA1603;

Shape1600.geometry = LineSet1601;

HAnimSegment1596.children[1] = Shape1600;

let HAnimSite1604 = browser.currentScene.createNode("HAnimSite");
HAnimSite1604.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1604.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
let TouchSensor1605 = browser.currentScene.createNode("TouchSensor");
TouchSensor1605.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1604.children = new MFNode();

HAnimSite1604.children[0] = TouchSensor1605;

let Shape1606 = browser.currentScene.createNode("Shape");
Shape1606.USE = "HAnimSiteShape";
HAnimSite1604.children[1] = Shape1606;

HAnimSegment1596.children[2] = HAnimSite1604;

HAnimJoint1595.children = new MFNode();

HAnimJoint1595.children[0] = HAnimSegment1596;

let HAnimJoint1607 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1607.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1607.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1607.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1607.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1607.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1595.children[1] = HAnimJoint1607;

HAnimJoint1586.children[1] = HAnimJoint1595;

HAnimJoint1577.children[1] = HAnimJoint1586;

HAnimJoint1530.children[2] = HAnimJoint1577;

HAnimJoint1389.children[4] = HAnimJoint1530;

HAnimJoint1377.children[1] = HAnimJoint1389;

HAnimJoint1356.children[1] = HAnimJoint1377;

HAnimJoint1341.children[1] = HAnimJoint1356;

HAnimJoint1332.children[1] = HAnimJoint1341;

HAnimJoint852.children[3] = HAnimJoint1332;

HAnimJoint837.children[1] = HAnimJoint852;

HAnimJoint828.children[1] = HAnimJoint837;

HAnimJoint819.children[1] = HAnimJoint828;

HAnimJoint810.children[1] = HAnimJoint819;

HAnimJoint798.children[1] = HAnimJoint810;

HAnimJoint777.children[1] = HAnimJoint798;

HAnimJoint768.children[1] = HAnimJoint777;

HAnimJoint759.children[1] = HAnimJoint768;

HAnimJoint744.children[1] = HAnimJoint759;

HAnimJoint732.children[1] = HAnimJoint744;

HAnimJoint723.children[1] = HAnimJoint732;

HAnimJoint714.children[1] = HAnimJoint723;

HAnimJoint705.children[1] = HAnimJoint714;

HAnimJoint687.children[1] = HAnimJoint705;

HAnimJoint678.children[1] = HAnimJoint687;

HAnimJoint669.children[1] = HAnimJoint678;

HAnimJoint52.children[2] = HAnimJoint669;

HAnimHumanoid43.joints[1] = HAnimJoint52;

let HAnimJoint1608 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint1608;

let HAnimJoint1609 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint1609;

let HAnimJoint1610 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint1610;

let HAnimJoint1611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint1611;

let HAnimJoint1612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint1612;

let HAnimJoint1613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid43.joints[7] = HAnimJoint1613;

let HAnimJoint1614 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid43.joints[8] = HAnimJoint1614;

let HAnimJoint1615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid43.joints[9] = HAnimJoint1615;

let HAnimJoint1616 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid43.joints[10] = HAnimJoint1616;

let HAnimJoint1617 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[11] = HAnimJoint1617;

let HAnimJoint1618 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid43.joints[12] = HAnimJoint1618;

let HAnimJoint1619 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1619;

let HAnimJoint1620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1620;

let HAnimJoint1621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1621;

let HAnimJoint1622 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[16] = HAnimJoint1622;

let HAnimJoint1623 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid43.joints[17] = HAnimJoint1623;

let HAnimJoint1624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid43.joints[18] = HAnimJoint1624;

let HAnimJoint1625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid43.joints[19] = HAnimJoint1625;

let HAnimJoint1626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[20] = HAnimJoint1626;

let HAnimJoint1627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[21] = HAnimJoint1627;

let HAnimJoint1628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid43.joints[22] = HAnimJoint1628;

let HAnimJoint1629 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_l_transversetarsal";
HAnimHumanoid43.joints[23] = HAnimJoint1629;

let HAnimJoint1630 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid43.joints[24] = HAnimJoint1630;

let HAnimJoint1631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid43.joints[25] = HAnimJoint1631;

let HAnimJoint1632 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[26] = HAnimJoint1632;

let HAnimJoint1633 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[27] = HAnimJoint1633;

let HAnimJoint1634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid43.joints[28] = HAnimJoint1634;

let HAnimJoint1635 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid43.joints[29] = HAnimJoint1635;

let HAnimJoint1636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[30] = HAnimJoint1636;

let HAnimJoint1637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[31] = HAnimJoint1637;

let HAnimJoint1638 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_r_hip";
HAnimHumanoid43.joints[32] = HAnimJoint1638;

let HAnimJoint1639 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_knee";
HAnimHumanoid43.joints[33] = HAnimJoint1639;

let HAnimJoint1640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[34] = HAnimJoint1640;

let HAnimJoint1641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid43.joints[35] = HAnimJoint1641;

let HAnimJoint1642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid43.joints[36] = HAnimJoint1642;

let HAnimJoint1643 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid43.joints[37] = HAnimJoint1643;

let HAnimJoint1644 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid43.joints[38] = HAnimJoint1644;

let HAnimJoint1645 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[39] = HAnimJoint1645;

let HAnimJoint1646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid43.joints[40] = HAnimJoint1646;

let HAnimJoint1647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[41] = HAnimJoint1647;

let HAnimJoint1648 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[42] = HAnimJoint1648;

let HAnimJoint1649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[43] = HAnimJoint1649;

let HAnimJoint1650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[44] = HAnimJoint1650;

let HAnimJoint1651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid43.joints[45] = HAnimJoint1651;

let HAnimJoint1652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid43.joints[46] = HAnimJoint1652;

let HAnimJoint1653 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid43.joints[47] = HAnimJoint1653;

let HAnimJoint1654 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[48] = HAnimJoint1654;

let HAnimJoint1655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[49] = HAnimJoint1655;

let HAnimJoint1656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid43.joints[50] = HAnimJoint1656;

let HAnimJoint1657 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_transversetarsal";
HAnimHumanoid43.joints[51] = HAnimJoint1657;

let HAnimJoint1658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid43.joints[52] = HAnimJoint1658;

let HAnimJoint1659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid43.joints[53] = HAnimJoint1659;

let HAnimJoint1660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint1660;

let HAnimJoint1661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[55] = HAnimJoint1661;

let HAnimJoint1662 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid43.joints[56] = HAnimJoint1662;

let HAnimJoint1663 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid43.joints[57] = HAnimJoint1663;

let HAnimJoint1664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[58] = HAnimJoint1664;

let HAnimJoint1665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[59] = HAnimJoint1665;

let HAnimJoint1666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_vl5";
HAnimHumanoid43.joints[60] = HAnimJoint1666;

let HAnimJoint1667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_vl4";
HAnimHumanoid43.joints[61] = HAnimJoint1667;

let HAnimJoint1668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_vl3";
HAnimHumanoid43.joints[62] = HAnimJoint1668;

let HAnimJoint1669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_vl2";
HAnimHumanoid43.joints[63] = HAnimJoint1669;

let HAnimJoint1670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_vl1";
HAnimHumanoid43.joints[64] = HAnimJoint1670;

let HAnimJoint1671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_vt12";
HAnimHumanoid43.joints[65] = HAnimJoint1671;

let HAnimJoint1672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vt11";
HAnimHumanoid43.joints[66] = HAnimJoint1672;

let HAnimJoint1673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vt10";
HAnimHumanoid43.joints[67] = HAnimJoint1673;

let HAnimJoint1674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vt9";
HAnimHumanoid43.joints[68] = HAnimJoint1674;

let HAnimJoint1675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vt8";
HAnimHumanoid43.joints[69] = HAnimJoint1675;

let HAnimJoint1676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vt7";
HAnimHumanoid43.joints[70] = HAnimJoint1676;

let HAnimJoint1677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vt6";
HAnimHumanoid43.joints[71] = HAnimJoint1677;

let HAnimJoint1678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vt5";
HAnimHumanoid43.joints[72] = HAnimJoint1678;

let HAnimJoint1679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vt4";
HAnimHumanoid43.joints[73] = HAnimJoint1679;

let HAnimJoint1680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vt3";
HAnimHumanoid43.joints[74] = HAnimJoint1680;

let HAnimJoint1681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vt2";
HAnimHumanoid43.joints[75] = HAnimJoint1681;

let HAnimJoint1682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_vt1";
HAnimHumanoid43.joints[76] = HAnimJoint1682;

let HAnimJoint1683 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_vc7";
HAnimHumanoid43.joints[77] = HAnimJoint1683;

let HAnimJoint1684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_vc6";
HAnimHumanoid43.joints[78] = HAnimJoint1684;

let HAnimJoint1685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_vc5";
HAnimHumanoid43.joints[79] = HAnimJoint1685;

let HAnimJoint1686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_vc4";
HAnimHumanoid43.joints[80] = HAnimJoint1686;

let HAnimJoint1687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_vc3";
HAnimHumanoid43.joints[81] = HAnimJoint1687;

let HAnimJoint1688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_vc2";
HAnimHumanoid43.joints[82] = HAnimJoint1688;

let HAnimJoint1689 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_vc1";
HAnimHumanoid43.joints[83] = HAnimJoint1689;

let HAnimJoint1690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_skullbase";
HAnimHumanoid43.joints[84] = HAnimJoint1690;

let HAnimJoint1691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[85] = HAnimJoint1691;

let HAnimJoint1692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[86] = HAnimJoint1692;

let HAnimJoint1693 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[87] = HAnimJoint1693;

let HAnimJoint1694 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[88] = HAnimJoint1694;

let HAnimJoint1695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[89] = HAnimJoint1695;

let HAnimJoint1696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[90] = HAnimJoint1696;

let HAnimJoint1697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[91] = HAnimJoint1697;

let HAnimJoint1698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[92] = HAnimJoint1698;

let HAnimJoint1699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[93] = HAnimJoint1699;

let HAnimJoint1700 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[94] = HAnimJoint1700;

let HAnimJoint1701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[95] = HAnimJoint1701;

let HAnimJoint1702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[96] = HAnimJoint1702;

let HAnimJoint1703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_l_midcarpal_1";
HAnimHumanoid43.joints[97] = HAnimJoint1703;

let HAnimJoint1704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[98] = HAnimJoint1704;

let HAnimJoint1705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[99] = HAnimJoint1705;

let HAnimJoint1706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[100] = HAnimJoint1706;

let HAnimJoint1707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_l_midcarpal_2";
HAnimHumanoid43.joints[101] = HAnimJoint1707;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[102] = HAnimJoint1708;

let HAnimJoint1709 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[103] = HAnimJoint1709;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[104] = HAnimJoint1710;

let HAnimJoint1711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[105] = HAnimJoint1711;

let HAnimJoint1712 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_midcarpal_3";
HAnimHumanoid43.joints[106] = HAnimJoint1712;

let HAnimJoint1713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[107] = HAnimJoint1713;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[108] = HAnimJoint1714;

let HAnimJoint1715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[109] = HAnimJoint1715;

let HAnimJoint1716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[110] = HAnimJoint1716;

let HAnimJoint1717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid43.joints[111] = HAnimJoint1717;

let HAnimJoint1718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[112] = HAnimJoint1718;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[113] = HAnimJoint1719;

let HAnimJoint1720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[114] = HAnimJoint1720;

let HAnimJoint1721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[115] = HAnimJoint1721;

let HAnimJoint1722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[116] = HAnimJoint1722;

let HAnimJoint1723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[117] = HAnimJoint1723;

let HAnimJoint1724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[118] = HAnimJoint1724;

let HAnimJoint1725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[119] = HAnimJoint1725;

let HAnimJoint1726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[120] = HAnimJoint1726;

let HAnimJoint1727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[121] = HAnimJoint1727;

let HAnimJoint1728 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[122] = HAnimJoint1728;

let HAnimJoint1729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[123] = HAnimJoint1729;

let HAnimJoint1730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[124] = HAnimJoint1730;

let HAnimJoint1731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_midcarpal_1";
HAnimHumanoid43.joints[125] = HAnimJoint1731;

let HAnimJoint1732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[126] = HAnimJoint1732;

let HAnimJoint1733 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[127] = HAnimJoint1733;

let HAnimJoint1734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[128] = HAnimJoint1734;

let HAnimJoint1735 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_midcarpal_2";
HAnimHumanoid43.joints[129] = HAnimJoint1735;

let HAnimJoint1736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[130] = HAnimJoint1736;

let HAnimJoint1737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[131] = HAnimJoint1737;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[132] = HAnimJoint1738;

let HAnimJoint1739 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[133] = HAnimJoint1739;

let HAnimJoint1740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_r_midcarpal_3";
HAnimHumanoid43.joints[134] = HAnimJoint1740;

let HAnimJoint1741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[135] = HAnimJoint1741;

let HAnimJoint1742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[136] = HAnimJoint1742;

let HAnimJoint1743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[137] = HAnimJoint1743;

let HAnimJoint1744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[138] = HAnimJoint1744;

let HAnimJoint1745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid43.joints[139] = HAnimJoint1745;

let HAnimJoint1746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[140] = HAnimJoint1746;

let HAnimJoint1747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[141] = HAnimJoint1747;

let HAnimJoint1748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[142] = HAnimJoint1748;

let HAnimJoint1749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[143] = HAnimJoint1749;

let HAnimJoint1750 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[144] = HAnimJoint1750;

let HAnimJoint1751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[145] = HAnimJoint1751;

let HAnimJoint1752 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[146] = HAnimJoint1752;

let HAnimJoint1753 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[147] = HAnimJoint1753;

let HAnimSegment1754 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_sacrum";
HAnimHumanoid43.segments[148] = HAnimSegment1754;

let HAnimSegment1755 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_pelvis";
HAnimHumanoid43.segments[149] = HAnimSegment1755;

let HAnimSegment1756 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[150] = HAnimSegment1756;

let HAnimSegment1757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_l_calf";
HAnimHumanoid43.segments[151] = HAnimSegment1757;

let HAnimSegment1758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_talus";
HAnimHumanoid43.segments[152] = HAnimSegment1758;

let HAnimSegment1759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_l_navicular";
HAnimHumanoid43.segments[153] = HAnimSegment1759;

let HAnimSegment1760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_cuneiform_1";
HAnimHumanoid43.segments[154] = HAnimSegment1760;

let HAnimSegment1761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_l_metatarsal_1";
HAnimHumanoid43.segments[155] = HAnimSegment1761;

let HAnimSegment1762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[156] = HAnimSegment1762;

let HAnimSegment1763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_l_cuneiform_2";
HAnimHumanoid43.segments[157] = HAnimSegment1763;

let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[158] = HAnimSegment1764;

let HAnimSegment1765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[159] = HAnimSegment1765;

let HAnimSegment1766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[160] = HAnimSegment1766;

let HAnimSegment1767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_l_cuneiform_3";
HAnimHumanoid43.segments[161] = HAnimSegment1767;

let HAnimSegment1768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_metatarsal_3";
HAnimHumanoid43.segments[162] = HAnimSegment1768;

let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[163] = HAnimSegment1769;

let HAnimSegment1770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[164] = HAnimSegment1770;

let HAnimSegment1771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_l_calcaneus";
HAnimHumanoid43.segments[165] = HAnimSegment1771;

let HAnimSegment1772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_l_cuboid";
HAnimHumanoid43.segments[166] = HAnimSegment1772;

let HAnimSegment1773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_l_metatarsal_4";
HAnimHumanoid43.segments[167] = HAnimSegment1773;

let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[168] = HAnimSegment1774;

let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[169] = HAnimSegment1775;

let HAnimSegment1776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_l_metatarsal_5";
HAnimHumanoid43.segments[170] = HAnimSegment1776;

let HAnimSegment1777 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[171] = HAnimSegment1777;

let HAnimSegment1778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[172] = HAnimSegment1778;

let HAnimSegment1779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[173] = HAnimSegment1779;

let HAnimSegment1780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_r_calf";
HAnimHumanoid43.segments[174] = HAnimSegment1780;

let HAnimSegment1781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_r_talus";
HAnimHumanoid43.segments[175] = HAnimSegment1781;

let HAnimSegment1782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_r_navicular";
HAnimHumanoid43.segments[176] = HAnimSegment1782;

let HAnimSegment1783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_r_cuneiform_1";
HAnimHumanoid43.segments[177] = HAnimSegment1783;

let HAnimSegment1784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_r_metatarsal_1";
HAnimHumanoid43.segments[178] = HAnimSegment1784;

let HAnimSegment1785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[179] = HAnimSegment1785;

let HAnimSegment1786 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_r_cuneiform_2";
HAnimHumanoid43.segments[180] = HAnimSegment1786;

let HAnimSegment1787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[181] = HAnimSegment1787;

let HAnimSegment1788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[182] = HAnimSegment1788;

let HAnimSegment1789 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[183] = HAnimSegment1789;

let HAnimSegment1790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_r_cuneiform_3";
HAnimHumanoid43.segments[184] = HAnimSegment1790;

let HAnimSegment1791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_r_metatarsal_3";
HAnimHumanoid43.segments[185] = HAnimSegment1791;

let HAnimSegment1792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[186] = HAnimSegment1792;

let HAnimSegment1793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[187] = HAnimSegment1793;

let HAnimSegment1794 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_r_calcaneus";
HAnimHumanoid43.segments[188] = HAnimSegment1794;

let HAnimSegment1795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_r_cuboid";
HAnimHumanoid43.segments[189] = HAnimSegment1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_r_metatarsal_4";
HAnimHumanoid43.segments[190] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[191] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[192] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_r_metatarsal_5";
HAnimHumanoid43.segments[193] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[194] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[195] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_l5";
HAnimHumanoid43.segments[196] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_l4";
HAnimHumanoid43.segments[197] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_l3";
HAnimHumanoid43.segments[198] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_l2";
HAnimHumanoid43.segments[199] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_l1";
HAnimHumanoid43.segments[200] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_t12";
HAnimHumanoid43.segments[201] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_t11";
HAnimHumanoid43.segments[202] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_t10";
HAnimHumanoid43.segments[203] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t9";
HAnimHumanoid43.segments[204] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_t8";
HAnimHumanoid43.segments[205] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_t7";
HAnimHumanoid43.segments[206] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_t6";
HAnimHumanoid43.segments[207] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_t5";
HAnimHumanoid43.segments[208] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_t4";
HAnimHumanoid43.segments[209] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_t3";
HAnimHumanoid43.segments[210] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_t2";
HAnimHumanoid43.segments[211] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_t1";
HAnimHumanoid43.segments[212] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_c7";
HAnimHumanoid43.segments[213] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_c6";
HAnimHumanoid43.segments[214] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_c5";
HAnimHumanoid43.segments[215] = HAnimSegment1821;

let HAnimSegment1822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_c4";
HAnimHumanoid43.segments[216] = HAnimSegment1822;

let HAnimSegment1823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_c3";
HAnimHumanoid43.segments[217] = HAnimSegment1823;

let HAnimSegment1824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_c2";
HAnimHumanoid43.segments[218] = HAnimSegment1824;

let HAnimSegment1825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_c1";
HAnimHumanoid43.segments[219] = HAnimSegment1825;

let HAnimSegment1826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_skull";
HAnimHumanoid43.segments[220] = HAnimSegment1826;

let HAnimSegment1827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[221] = HAnimSegment1827;

let HAnimSegment1828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[222] = HAnimSegment1828;

let HAnimSegment1829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[223] = HAnimSegment1829;

let HAnimSegment1830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[224] = HAnimSegment1830;

let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[225] = HAnimSegment1831;

let HAnimSegment1832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_trapezium";
HAnimHumanoid43.segments[226] = HAnimSegment1832;

let HAnimSegment1833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[227] = HAnimSegment1833;

let HAnimSegment1834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[228] = HAnimSegment1834;

let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_l_trapezoid";
HAnimHumanoid43.segments[229] = HAnimSegment1835;

let HAnimSegment1836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[230] = HAnimSegment1836;

let HAnimSegment1837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[231] = HAnimSegment1837;

let HAnimSegment1838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[232] = HAnimSegment1838;

let HAnimSegment1839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_l_capitate";
HAnimHumanoid43.segments[233] = HAnimSegment1839;

let HAnimSegment1840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[234] = HAnimSegment1840;

let HAnimSegment1841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[235] = HAnimSegment1841;

let HAnimSegment1842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[236] = HAnimSegment1842;

let HAnimSegment1843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_l_hamate";
HAnimHumanoid43.segments[237] = HAnimSegment1843;

let HAnimSegment1844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[238] = HAnimSegment1844;

let HAnimSegment1845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[239] = HAnimSegment1845;

let HAnimSegment1846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[240] = HAnimSegment1846;

let HAnimSegment1847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[241] = HAnimSegment1847;

let HAnimSegment1848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[242] = HAnimSegment1848;

let HAnimSegment1849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[243] = HAnimSegment1849;

let HAnimSegment1850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[244] = HAnimSegment1850;

let HAnimSegment1851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[245] = HAnimSegment1851;

let HAnimSegment1852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[246] = HAnimSegment1852;

let HAnimSegment1853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[247] = HAnimSegment1853;

let HAnimSegment1854 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[248] = HAnimSegment1854;

let HAnimSegment1855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_trapezium";
HAnimHumanoid43.segments[249] = HAnimSegment1855;

let HAnimSegment1856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[250] = HAnimSegment1856;

let HAnimSegment1857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[251] = HAnimSegment1857;

let HAnimSegment1858 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_r_trapezoid";
HAnimHumanoid43.segments[252] = HAnimSegment1858;

let HAnimSegment1859 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[253] = HAnimSegment1859;

let HAnimSegment1860 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[254] = HAnimSegment1860;

let HAnimSegment1861 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[255] = HAnimSegment1861;

let HAnimSegment1862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_r_capitate";
HAnimHumanoid43.segments[256] = HAnimSegment1862;

let HAnimSegment1863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[257] = HAnimSegment1863;

let HAnimSegment1864 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[258] = HAnimSegment1864;

let HAnimSegment1865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1865.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[259] = HAnimSegment1865;

let HAnimSegment1866 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1866.USE = "hanim_r_hamate";
HAnimHumanoid43.segments[260] = HAnimSegment1866;

let HAnimSegment1867 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1867.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[261] = HAnimSegment1867;

let HAnimSegment1868 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1868.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[262] = HAnimSegment1868;

let HAnimSegment1869 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1869.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[263] = HAnimSegment1869;

let HAnimSegment1870 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1870.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[264] = HAnimSegment1870;

let HAnimSegment1871 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1871.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[265] = HAnimSegment1871;

let HAnimSegment1872 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1872.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[266] = HAnimSegment1872;

let HAnimSite1873 = browser.currentScene.createNode("HAnimSite");
HAnimSite1873.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid43.viewpoints[267] = HAnimSite1873;

let HAnimSite1874 = browser.currentScene.createNode("HAnimSite");
HAnimSite1874.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite1874;

let HAnimSite1875 = browser.currentScene.createNode("HAnimSite");
HAnimSite1875.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite1875;

let HAnimSite1876 = browser.currentScene.createNode("HAnimSite");
HAnimSite1876.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite1876;

let HAnimSite1877 = browser.currentScene.createNode("HAnimSite");
HAnimSite1877.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[271] = HAnimSite1877;

let HAnimSite1878 = browser.currentScene.createNode("HAnimSite");
HAnimSite1878.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[272] = HAnimSite1878;

let HAnimSite1879 = browser.currentScene.createNode("HAnimSite");
HAnimSite1879.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[273] = HAnimSite1879;

let HAnimSite1880 = browser.currentScene.createNode("HAnimSite");
HAnimSite1880.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[274] = HAnimSite1880;

let HAnimSite1881 = browser.currentScene.createNode("HAnimSite");
HAnimSite1881.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[275] = HAnimSite1881;

let HAnimSite1882 = browser.currentScene.createNode("HAnimSite");
HAnimSite1882.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[276] = HAnimSite1882;

let HAnimSite1883 = browser.currentScene.createNode("HAnimSite");
HAnimSite1883.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[277] = HAnimSite1883;

let HAnimSite1884 = browser.currentScene.createNode("HAnimSite");
HAnimSite1884.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid43.viewpoints[278] = HAnimSite1884;

let HAnimSite1885 = browser.currentScene.createNode("HAnimSite");
HAnimSite1885.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[279] = HAnimSite1885;

let HAnimSite1886 = browser.currentScene.createNode("HAnimSite");
HAnimSite1886.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[280] = HAnimSite1886;

let HAnimSite1887 = browser.currentScene.createNode("HAnimSite");
HAnimSite1887.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[281] = HAnimSite1887;

let HAnimSite1888 = browser.currentScene.createNode("HAnimSite");
HAnimSite1888.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[282] = HAnimSite1888;

let HAnimSite1889 = browser.currentScene.createNode("HAnimSite");
HAnimSite1889.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid43.viewpoints[283] = HAnimSite1889;

let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[284] = HAnimSite1890;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[285] = HAnimSite1891;

let HAnimSite1892 = browser.currentScene.createNode("HAnimSite");
HAnimSite1892.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[286] = HAnimSite1892;

let HAnimSite1893 = browser.currentScene.createNode("HAnimSite");
HAnimSite1893.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid43.viewpoints[287] = HAnimSite1893;

let HAnimSite1894 = browser.currentScene.createNode("HAnimSite");
HAnimSite1894.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[288] = HAnimSite1894;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[289] = HAnimSite1895;

let HAnimSite1896 = browser.currentScene.createNode("HAnimSite");
HAnimSite1896.USE = "hanim_l_tibiale_pt";
HAnimHumanoid43.viewpoints[290] = HAnimSite1896;

let HAnimSite1897 = browser.currentScene.createNode("HAnimSite");
HAnimSite1897.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[291] = HAnimSite1897;

let HAnimSite1898 = browser.currentScene.createNode("HAnimSite");
HAnimSite1898.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[292] = HAnimSite1898;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[293] = HAnimSite1899;

let HAnimSite1900 = browser.currentScene.createNode("HAnimSite");
HAnimSite1900.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[294] = HAnimSite1900;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[295] = HAnimSite1901;

let HAnimSite1902 = browser.currentScene.createNode("HAnimSite");
HAnimSite1902.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[296] = HAnimSite1902;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[297] = HAnimSite1903;

let HAnimSite1904 = browser.currentScene.createNode("HAnimSite");
HAnimSite1904.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[298] = HAnimSite1904;

let HAnimSite1905 = browser.currentScene.createNode("HAnimSite");
HAnimSite1905.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[299] = HAnimSite1905;

let HAnimSite1906 = browser.currentScene.createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[300] = HAnimSite1906;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[301] = HAnimSite1907;

let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.USE = "hanim_r_tibiale_pt";
HAnimHumanoid43.viewpoints[302] = HAnimSite1908;

let HAnimSite1909 = browser.currentScene.createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[303] = HAnimSite1909;

let HAnimSite1910 = browser.currentScene.createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[304] = HAnimSite1910;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[305] = HAnimSite1911;

let HAnimSite1912 = browser.currentScene.createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[306] = HAnimSite1912;

let HAnimSite1913 = browser.currentScene.createNode("HAnimSite");
HAnimSite1913.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[307] = HAnimSite1913;

let HAnimSite1914 = browser.currentScene.createNode("HAnimSite");
HAnimSite1914.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[308] = HAnimSite1914;

let HAnimSite1915 = browser.currentScene.createNode("HAnimSite");
HAnimSite1915.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[309] = HAnimSite1915;

let HAnimSite1916 = browser.currentScene.createNode("HAnimSite");
HAnimSite1916.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[310] = HAnimSite1916;

let HAnimSite1917 = browser.currentScene.createNode("HAnimSite");
HAnimSite1917.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[311] = HAnimSite1917;

let HAnimSite1918 = browser.currentScene.createNode("HAnimSite");
HAnimSite1918.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[312] = HAnimSite1918;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[313] = HAnimSite1919;

let HAnimSite1920 = browser.currentScene.createNode("HAnimSite");
HAnimSite1920.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid43.viewpoints[314] = HAnimSite1920;

let HAnimSite1921 = browser.currentScene.createNode("HAnimSite");
HAnimSite1921.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[315] = HAnimSite1921;

let HAnimSite1922 = browser.currentScene.createNode("HAnimSite");
HAnimSite1922.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[316] = HAnimSite1922;

let HAnimSite1923 = browser.currentScene.createNode("HAnimSite");
HAnimSite1923.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[317] = HAnimSite1923;

let HAnimSite1924 = browser.currentScene.createNode("HAnimSite");
HAnimSite1924.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[318] = HAnimSite1924;

let HAnimSite1925 = browser.currentScene.createNode("HAnimSite");
HAnimSite1925.USE = "hanim_mesosternale_pt";
HAnimHumanoid43.viewpoints[319] = HAnimSite1925;

let HAnimSite1926 = browser.currentScene.createNode("HAnimSite");
HAnimSite1926.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[320] = HAnimSite1926;

let HAnimSite1927 = browser.currentScene.createNode("HAnimSite");
HAnimSite1927.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[321] = HAnimSite1927;

let HAnimSite1928 = browser.currentScene.createNode("HAnimSite");
HAnimSite1928.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid43.viewpoints[322] = HAnimSite1928;

let HAnimSite1929 = browser.currentScene.createNode("HAnimSite");
HAnimSite1929.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[323] = HAnimSite1929;

let HAnimSite1930 = browser.currentScene.createNode("HAnimSite");
HAnimSite1930.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[324] = HAnimSite1930;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[325] = HAnimSite1931;

let HAnimSite1932 = browser.currentScene.createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[326] = HAnimSite1932;

let HAnimSite1933 = browser.currentScene.createNode("HAnimSite");
HAnimSite1933.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[327] = HAnimSite1933;

let HAnimSite1934 = browser.currentScene.createNode("HAnimSite");
HAnimSite1934.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[328] = HAnimSite1934;

let HAnimSite1935 = browser.currentScene.createNode("HAnimSite");
HAnimSite1935.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[329] = HAnimSite1935;

let HAnimSite1936 = browser.currentScene.createNode("HAnimSite");
HAnimSite1936.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[330] = HAnimSite1936;

let HAnimSite1937 = browser.currentScene.createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[331] = HAnimSite1937;

let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[332] = HAnimSite1938;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[333] = HAnimSite1939;

let HAnimSite1940 = browser.currentScene.createNode("HAnimSite");
HAnimSite1940.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[334] = HAnimSite1940;

let HAnimSite1941 = browser.currentScene.createNode("HAnimSite");
HAnimSite1941.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[335] = HAnimSite1941;

let HAnimSite1942 = browser.currentScene.createNode("HAnimSite");
HAnimSite1942.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[336] = HAnimSite1942;

let HAnimSite1943 = browser.currentScene.createNode("HAnimSite");
HAnimSite1943.USE = "hanim_adams_apple_pt";
HAnimHumanoid43.viewpoints[337] = HAnimSite1943;

let HAnimSite1944 = browser.currentScene.createNode("HAnimSite");
HAnimSite1944.USE = "hanim_glabella_pt";
HAnimHumanoid43.viewpoints[338] = HAnimSite1944;

let HAnimSite1945 = browser.currentScene.createNode("HAnimSite");
HAnimSite1945.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid43.viewpoints[339] = HAnimSite1945;

let HAnimSite1946 = browser.currentScene.createNode("HAnimSite");
HAnimSite1946.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[340] = HAnimSite1946;

let HAnimSite1947 = browser.currentScene.createNode("HAnimSite");
HAnimSite1947.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[341] = HAnimSite1947;

let HAnimSite1948 = browser.currentScene.createNode("HAnimSite");
HAnimSite1948.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[342] = HAnimSite1948;

let HAnimSite1949 = browser.currentScene.createNode("HAnimSite");
HAnimSite1949.USE = "hanim_opisthocranion_pt";
HAnimHumanoid43.viewpoints[343] = HAnimSite1949;

let HAnimSite1950 = browser.currentScene.createNode("HAnimSite");
HAnimSite1950.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid43.viewpoints[344] = HAnimSite1950;

let HAnimSite1951 = browser.currentScene.createNode("HAnimSite");
HAnimSite1951.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[345] = HAnimSite1951;

let HAnimSite1952 = browser.currentScene.createNode("HAnimSite");
HAnimSite1952.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[346] = HAnimSite1952;

let HAnimSite1953 = browser.currentScene.createNode("HAnimSite");
HAnimSite1953.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[347] = HAnimSite1953;

let HAnimSite1954 = browser.currentScene.createNode("HAnimSite");
HAnimSite1954.USE = "hanim_skull_vertex_pt";
HAnimHumanoid43.viewpoints[348] = HAnimSite1954;

let HAnimSite1955 = browser.currentScene.createNode("HAnimSite");
HAnimSite1955.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[349] = HAnimSite1955;

let HAnimSite1956 = browser.currentScene.createNode("HAnimSite");
HAnimSite1956.USE = "hanim_menton_pt";
HAnimHumanoid43.viewpoints[350] = HAnimSite1956;

let HAnimSite1957 = browser.currentScene.createNode("HAnimSite");
HAnimSite1957.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[351] = HAnimSite1957;

let HAnimSite1958 = browser.currentScene.createNode("HAnimSite");
HAnimSite1958.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[352] = HAnimSite1958;

let HAnimSite1959 = browser.currentScene.createNode("HAnimSite");
HAnimSite1959.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid43.viewpoints[353] = HAnimSite1959;

let HAnimSite1960 = browser.currentScene.createNode("HAnimSite");
HAnimSite1960.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[354] = HAnimSite1960;

let HAnimSite1961 = browser.currentScene.createNode("HAnimSite");
HAnimSite1961.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[355] = HAnimSite1961;

let HAnimSite1962 = browser.currentScene.createNode("HAnimSite");
HAnimSite1962.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[356] = HAnimSite1962;

let HAnimSite1963 = browser.currentScene.createNode("HAnimSite");
HAnimSite1963.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[357] = HAnimSite1963;

let HAnimSite1964 = browser.currentScene.createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[358] = HAnimSite1964;

let HAnimSite1965 = browser.currentScene.createNode("HAnimSite");
HAnimSite1965.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[359] = HAnimSite1965;

let HAnimSite1966 = browser.currentScene.createNode("HAnimSite");
HAnimSite1966.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[360] = HAnimSite1966;

let HAnimSite1967 = browser.currentScene.createNode("HAnimSite");
HAnimSite1967.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[361] = HAnimSite1967;

let HAnimSite1968 = browser.currentScene.createNode("HAnimSite");
HAnimSite1968.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[362] = HAnimSite1968;

let HAnimSite1969 = browser.currentScene.createNode("HAnimSite");
HAnimSite1969.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[363] = HAnimSite1969;

let HAnimSite1970 = browser.currentScene.createNode("HAnimSite");
HAnimSite1970.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[364] = HAnimSite1970;

let HAnimSite1971 = browser.currentScene.createNode("HAnimSite");
HAnimSite1971.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[365] = HAnimSite1971;

let HAnimSite1972 = browser.currentScene.createNode("HAnimSite");
HAnimSite1972.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[366] = HAnimSite1972;

let HAnimSite1973 = browser.currentScene.createNode("HAnimSite");
HAnimSite1973.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[367] = HAnimSite1973;

let HAnimSite1974 = browser.currentScene.createNode("HAnimSite");
HAnimSite1974.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[368] = HAnimSite1974;

let HAnimSite1975 = browser.currentScene.createNode("HAnimSite");
HAnimSite1975.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid43.viewpoints[369] = HAnimSite1975;

let HAnimSite1976 = browser.currentScene.createNode("HAnimSite");
HAnimSite1976.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[370] = HAnimSite1976;

let HAnimSite1977 = browser.currentScene.createNode("HAnimSite");
HAnimSite1977.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[371] = HAnimSite1977;

let HAnimSite1978 = browser.currentScene.createNode("HAnimSite");
HAnimSite1978.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[372] = HAnimSite1978;

let HAnimSite1979 = browser.currentScene.createNode("HAnimSite");
HAnimSite1979.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[373] = HAnimSite1979;

let HAnimSite1980 = browser.currentScene.createNode("HAnimSite");
HAnimSite1980.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[374] = HAnimSite1980;

let HAnimSite1981 = browser.currentScene.createNode("HAnimSite");
HAnimSite1981.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[375] = HAnimSite1981;

let HAnimSite1982 = browser.currentScene.createNode("HAnimSite");
HAnimSite1982.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[376] = HAnimSite1982;

let HAnimSite1983 = browser.currentScene.createNode("HAnimSite");
HAnimSite1983.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[377] = HAnimSite1983;

let HAnimSite1984 = browser.currentScene.createNode("HAnimSite");
HAnimSite1984.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[378] = HAnimSite1984;

let HAnimSite1985 = browser.currentScene.createNode("HAnimSite");
HAnimSite1985.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[379] = HAnimSite1985;

let HAnimSite1986 = browser.currentScene.createNode("HAnimSite");
HAnimSite1986.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[380] = HAnimSite1986;

let HAnimSite1987 = browser.currentScene.createNode("HAnimSite");
HAnimSite1987.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[381] = HAnimSite1987;

let HAnimSite1988 = browser.currentScene.createNode("HAnimSite");
HAnimSite1988.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[382] = HAnimSite1988;

let HAnimSite1989 = browser.currentScene.createNode("HAnimSite");
HAnimSite1989.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[383] = HAnimSite1989;

let HAnimSite1990 = browser.currentScene.createNode("HAnimSite");
HAnimSite1990.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[384] = HAnimSite1990;

browser.currentScene.children[4] = HAnimHumanoid43;

