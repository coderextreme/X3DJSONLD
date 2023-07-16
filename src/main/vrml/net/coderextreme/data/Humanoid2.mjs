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
ImageTexture49.url = new MFString(new java.lang.String["./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
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
Coordinate181.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608]);
LineSet180.coord = Coordinate181;

//from l_talocrural to l_tarsometatarsal_2 vertices 2
let ColorRGBA182 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA182.USE = "HAnimSegmentLineColorRGBA";
LineSet180.color = ColorRGBA182;

Shape179.geometry = LineSet180;

HAnimSegment175.children[1] = Shape179;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.name = "l_tarsometatarsal_2";
HAnimJoint183.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint183.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
HAnimJoint183.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint183.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment184.name = "l_metatarsal_2";
HAnimSegment184.DEF = "hanim_l_metatarsal_2";
let Transform185 = browser.currentScene.createNode("Transform");
Transform185.translation = new SFVec3f(new float[0.08,0.0175,-0.0608]);
let Transform186 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "HAnimJointShape";
Transform186.children = new MFNode();

Transform186.children[0] = Shape187;

Transform185.children = new MFNode();

Transform185.children[0] = Transform186;

HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = Transform185;

let Shape188 = browser.currentScene.createNode("Shape");
let LineSet189 = browser.currentScene.createNode("LineSet");
LineSet189.vertexCount = new MFInt32(new int[2]);
let Coordinate190 = browser.currentScene.createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
LineSet189.coord = Coordinate190;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
let ColorRGBA191 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA191.USE = "HAnimSegmentLineColorRGBA";
LineSet189.color = ColorRGBA191;

Shape188.geometry = LineSet189;

HAnimSegment184.children[1] = Shape188;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.name = "l_metatarsophalangeal_2";
HAnimJoint192.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint192.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint192.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint192.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment193 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment193.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment193.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform194 = browser.currentScene.createNode("Transform");
Transform194.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
let Transform195 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape196 = browser.currentScene.createNode("Shape");
Shape196.USE = "HAnimJointShape";
Transform195.children = new MFNode();

Transform195.children[0] = Shape196;

Transform194.children = new MFNode();

Transform194.children[0] = Transform195;

HAnimSegment193.children = new MFNode();

HAnimSegment193.children[0] = Transform194;

let Shape197 = browser.currentScene.createNode("Shape");
let LineSet198 = browser.currentScene.createNode("LineSet");
LineSet198.vertexCount = new MFInt32(new int[2]);
let Coordinate199 = browser.currentScene.createNode("Coordinate");
Coordinate199.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0013,0.0216]);
LineSet198.coord = Coordinate199;

//from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA200 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA200.USE = "HAnimSegmentLineColorRGBA";
LineSet198.color = ColorRGBA200;

Shape197.geometry = LineSet198;

HAnimSegment193.children[1] = Shape197;

let HAnimSite201 = browser.currentScene.createNode("HAnimSite");
HAnimSite201.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite201.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite201.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
let TouchSensor202 = browser.currentScene.createNode("TouchSensor");
TouchSensor202.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite201.children = new MFNode();

HAnimSite201.children[0] = TouchSensor202;

let Shape203 = browser.currentScene.createNode("Shape");
Shape203.USE = "HAnimSiteShape";
HAnimSite201.children[1] = Shape203;

HAnimSegment193.children[2] = HAnimSite201;

HAnimJoint192.children = new MFNode();

HAnimJoint192.children[0] = HAnimSegment193;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint205.name = "r_hip";
HAnimJoint205.DEF = "hanim_r_hip";
HAnimJoint205.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint205.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint205.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment206 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment206.name = "r_thigh";
HAnimSegment206.DEF = "hanim_r_thigh";
let Transform207 = browser.currentScene.createNode("Transform");
Transform207.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Transform208 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape209 = browser.currentScene.createNode("Shape");
Shape209.USE = "HAnimJointShape";
Transform208.children = new MFNode();

Transform208.children[0] = Shape209;

Transform207.children = new MFNode();

Transform207.children[0] = Transform208;

HAnimSegment206.children = new MFNode();

HAnimSegment206.children[0] = Transform207;

let Shape210 = browser.currentScene.createNode("Shape");
let LineSet211 = browser.currentScene.createNode("LineSet");
LineSet211.vertexCount = new MFInt32(new int[2]);
let Coordinate212 = browser.currentScene.createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet211.coord = Coordinate212;

//from r_hip to r_knee vertices 2
let ColorRGBA213 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA213.USE = "HAnimSegmentLineColorRGBA";
LineSet211.color = ColorRGBA213;

Shape210.geometry = LineSet211;

HAnimSegment206.children[1] = Shape210;

let HAnimSite214 = browser.currentScene.createNode("HAnimSite");
HAnimSite214.name = "r_lateral_malleolus_pt";
HAnimSite214.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite214.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let TouchSensor215 = browser.currentScene.createNode("TouchSensor");
TouchSensor215.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite214.children = new MFNode();

HAnimSite214.children[0] = TouchSensor215;

let Shape216 = browser.currentScene.createNode("Shape");
Shape216.USE = "HAnimSiteShape";
HAnimSite214.children[1] = Shape216;

HAnimSegment206.children[2] = HAnimSite214;

let HAnimSite217 = browser.currentScene.createNode("HAnimSite");
HAnimSite217.name = "r_medial_malleolus_pt";
HAnimSite217.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite217.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let TouchSensor218 = browser.currentScene.createNode("TouchSensor");
TouchSensor218.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite217.children = new MFNode();

HAnimSite217.children[0] = TouchSensor218;

let Shape219 = browser.currentScene.createNode("Shape");
Shape219.USE = "HAnimSiteShape";
HAnimSite217.children[1] = Shape219;

HAnimSegment206.children[3] = HAnimSite217;

let HAnimSite220 = browser.currentScene.createNode("HAnimSite");
HAnimSite220.name = "r_tibiale_pt";
HAnimSite220.DEF = "hanim_r_tibiale_pt";
let TouchSensor221 = browser.currentScene.createNode("TouchSensor");
TouchSensor221.description = "HAnimSite r_tibiale_pt";
HAnimSite220.children = new MFNode();

HAnimSite220.children[0] = TouchSensor221;

let Shape222 = browser.currentScene.createNode("Shape");
Shape222.USE = "HAnimSiteShape";
HAnimSite220.children[1] = Shape222;

HAnimSegment206.children[4] = HAnimSite220;

HAnimJoint205.children = new MFNode();

HAnimJoint205.children[0] = HAnimSegment206;

let HAnimJoint223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint223.name = "r_knee";
HAnimJoint223.DEF = "hanim_r_knee";
HAnimJoint223.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint223.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment224 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment224.name = "r_calf";
HAnimSegment224.DEF = "hanim_r_calf";
let Transform225 = browser.currentScene.createNode("Transform");
Transform225.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Transform226 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape227 = browser.currentScene.createNode("Shape");
Shape227.USE = "HAnimJointShape";
Transform226.children = new MFNode();

Transform226.children[0] = Shape227;

Transform225.children = new MFNode();

Transform225.children[0] = Transform226;

HAnimSegment224.children = new MFNode();

HAnimSegment224.children[0] = Transform225;

let Shape228 = browser.currentScene.createNode("Shape");
let LineSet229 = browser.currentScene.createNode("LineSet");
LineSet229.vertexCount = new MFInt32(new int[2]);
let Coordinate230 = browser.currentScene.createNode("Coordinate");
Coordinate230.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet229.coord = Coordinate230;

//from r_knee to r_talocrural vertices 2
let ColorRGBA231 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA231.USE = "HAnimSegmentLineColorRGBA";
LineSet229.color = ColorRGBA231;

Shape228.geometry = LineSet229;

HAnimSegment224.children[1] = Shape228;

let HAnimSite232 = browser.currentScene.createNode("HAnimSite");
HAnimSite232.name = "r_calcaneus_posterior_pt";
HAnimSite232.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite232.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let TouchSensor233 = browser.currentScene.createNode("TouchSensor");
TouchSensor233.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite232.children = new MFNode();

HAnimSite232.children[0] = TouchSensor233;

let Shape234 = browser.currentScene.createNode("Shape");
Shape234.USE = "HAnimSiteShape";
HAnimSite232.children[1] = Shape234;

HAnimSegment224.children[2] = HAnimSite232;

let HAnimSite235 = browser.currentScene.createNode("HAnimSite");
HAnimSite235.name = "r_sphyrion_pt";
HAnimSite235.DEF = "hanim_r_sphyrion_pt";
HAnimSite235.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let TouchSensor236 = browser.currentScene.createNode("TouchSensor");
TouchSensor236.description = "HAnimSite r_sphyrion_pt";
HAnimSite235.children = new MFNode();

HAnimSite235.children[0] = TouchSensor236;

let Shape237 = browser.currentScene.createNode("Shape");
Shape237.USE = "HAnimSiteShape";
HAnimSite235.children[1] = Shape237;

HAnimSegment224.children[3] = HAnimSite235;

HAnimJoint223.children = new MFNode();

HAnimJoint223.children[0] = HAnimSegment224;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.name = "r_talocrural";
HAnimJoint238.DEF = "hanim_r_talocrural";
HAnimJoint238.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint238.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint238.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment239.name = "r_talus";
HAnimSegment239.DEF = "hanim_r_talus";
let Transform240 = browser.currentScene.createNode("Transform");
Transform240.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform240.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform240.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
let Transform241 = browser.currentScene.createNode("Transform");
//Empty Transform right foot
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
Coordinate245.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608]);
LineSet244.coord = Coordinate245;

//from r_talocrural to r_tarsometatarsal_2 vertices 2
let ColorRGBA246 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA246.USE = "HAnimSegmentLineColorRGBA";
LineSet244.color = ColorRGBA246;

Shape243.geometry = LineSet244;

HAnimSegment239.children[1] = Shape243;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.name = "r_tarsometatarsal_2";
HAnimJoint247.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint247.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
HAnimJoint247.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint247.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment248.name = "r_metatarsal_2";
HAnimSegment248.DEF = "hanim_r_metatarsal_2";
let Transform249 = browser.currentScene.createNode("Transform");
Transform249.translation = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
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
Coordinate254.point = new MFVec3f(new float[-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
LineSet253.coord = Coordinate254;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
let ColorRGBA255 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA255.USE = "HAnimSegmentLineColorRGBA";
LineSet253.color = ColorRGBA255;

Shape252.geometry = LineSet253;

HAnimSegment248.children[1] = Shape252;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.name = "r_metatarsophalangeal_2";
HAnimJoint256.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint256.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint256.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment257 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment257.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment257.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform258 = browser.currentScene.createNode("Transform");
Transform258.translation = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
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
Coordinate263.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216]);
LineSet262.coord = Coordinate263;

//from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA264 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA264.USE = "HAnimSegmentLineColorRGBA";
LineSet262.color = ColorRGBA264;

Shape261.geometry = LineSet262;

HAnimSegment257.children[1] = Shape261;

let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite265.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite265.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
let TouchSensor266 = browser.currentScene.createNode("TouchSensor");
TouchSensor266.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = TouchSensor266;

let Shape267 = browser.currentScene.createNode("Shape");
Shape267.USE = "HAnimSiteShape";
HAnimSite265.children[1] = Shape267;

HAnimSegment257.children[2] = HAnimSite265;

HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.name = "vl5";
HAnimJoint269.DEF = "hanim_vl5";
HAnimJoint269.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint269.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint269.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.name = "l5";
HAnimSegment270.DEF = "hanim_l5";
let Transform271 = browser.currentScene.createNode("Transform");
Transform271.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Transform272 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape273 = browser.currentScene.createNode("Shape");
Shape273.USE = "HAnimJointShape";
Transform272.children = new MFNode();

Transform272.children[0] = Shape273;

Transform271.children = new MFNode();

Transform271.children[0] = Transform272;

HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = Transform271;

let Shape274 = browser.currentScene.createNode("Shape");
let LineSet275 = browser.currentScene.createNode("LineSet");
LineSet275.vertexCount = new MFInt32(new int[2]);
let Coordinate276 = browser.currentScene.createNode("Coordinate");
Coordinate276.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796]);
LineSet275.coord = Coordinate276;

//from vl5 to vl3 vertices 2
let ColorRGBA277 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA277.USE = "HAnimSegmentLineColorRGBA";
LineSet275.color = ColorRGBA277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[1] = Shape274;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.name = "vl3";
HAnimJoint278.DEF = "hanim_vl3";
HAnimJoint278.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint278.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint278.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.name = "l3";
HAnimSegment279.DEF = "hanim_l3";
let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
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
Coordinate285.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805]);
LineSet284.coord = Coordinate285;

//from vl3 to vl1 vertices 2
let ColorRGBA286 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSegmentLineColorRGBA";
LineSet284.color = ColorRGBA286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.name = "vl1";
HAnimJoint287.DEF = "hanim_vl1";
HAnimJoint287.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint287.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint287.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.name = "l1";
HAnimSegment288.DEF = "hanim_l1";
let Transform289 = browser.currentScene.createNode("Transform");
Transform289.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
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
Coordinate294.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822]);
LineSet293.coord = Coordinate294;

//from vl1 to vt10 vertices 2
let ColorRGBA295 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA295.USE = "HAnimSegmentLineColorRGBA";
LineSet293.color = ColorRGBA295;

Shape292.geometry = LineSet293;

HAnimSegment288.children[1] = Shape292;

let HAnimSite296 = browser.currentScene.createNode("HAnimSite");
HAnimSite296.name = "substernale_pt";
HAnimSite296.DEF = "hanim_substernale_pt";
HAnimSite296.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor297 = browser.currentScene.createNode("TouchSensor");
TouchSensor297.description = "HAnimSite substernale_pt";
HAnimSite296.children = new MFNode();

HAnimSite296.children[0] = TouchSensor297;

let Shape298 = browser.currentScene.createNode("Shape");
Shape298.USE = "HAnimSiteShape";
HAnimSite296.children[1] = Shape298;

HAnimSegment288.children[2] = HAnimSite296;

HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

let HAnimJoint299 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint299.name = "vt10";
HAnimJoint299.DEF = "hanim_vt10";
HAnimJoint299.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint299.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint299.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment300.name = "t10";
HAnimSegment300.DEF = "hanim_t10";
let Transform301 = browser.currentScene.createNode("Transform");
Transform301.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Transform302 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape303 = browser.currentScene.createNode("Shape");
Shape303.USE = "HAnimJointShape";
Transform302.children = new MFNode();

Transform302.children[0] = Shape303;

Transform301.children = new MFNode();

Transform301.children[0] = Transform302;

HAnimSegment300.children = new MFNode();

HAnimSegment300.children[0] = Transform301;

let Shape304 = browser.currentScene.createNode("Shape");
let LineSet305 = browser.currentScene.createNode("LineSet");
LineSet305.vertexCount = new MFInt32(new int[2]);
let Coordinate306 = browser.currentScene.createNode("Coordinate");
Coordinate306.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08]);
LineSet305.coord = Coordinate306;

//from vt10 to vt6 vertices 2
let ColorRGBA307 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA307.USE = "HAnimSegmentLineColorRGBA";
LineSet305.color = ColorRGBA307;

Shape304.geometry = LineSet305;

HAnimSegment300.children[1] = Shape304;

let HAnimSite308 = browser.currentScene.createNode("HAnimSite");
HAnimSite308.name = "l_chest_midsagittal_plane_pt";
HAnimSite308.DEF = "hanim_l_chest_midsagittal_plane_pt";
let TouchSensor309 = browser.currentScene.createNode("TouchSensor");
TouchSensor309.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite308.children = new MFNode();

HAnimSite308.children[0] = TouchSensor309;

let Shape310 = browser.currentScene.createNode("Shape");
Shape310.USE = "HAnimSiteShape";
HAnimSite308.children[1] = Shape310;

HAnimSegment300.children[2] = HAnimSite308;

let HAnimSite311 = browser.currentScene.createNode("HAnimSite");
HAnimSite311.name = "mesosternale_pt";
HAnimSite311.DEF = "hanim_mesosternale_pt";
let TouchSensor312 = browser.currentScene.createNode("TouchSensor");
TouchSensor312.description = "HAnimSite mesosternale_pt";
HAnimSite311.children = new MFNode();

HAnimSite311.children[0] = TouchSensor312;

let Shape313 = browser.currentScene.createNode("Shape");
Shape313.USE = "HAnimSiteShape";
HAnimSite311.children[1] = Shape313;

HAnimSegment300.children[3] = HAnimSite311;

let HAnimSite314 = browser.currentScene.createNode("HAnimSite");
HAnimSite314.name = "r_chest_midsagittal_plane_pt";
HAnimSite314.DEF = "hanim_r_chest_midsagittal_plane_pt";
let TouchSensor315 = browser.currentScene.createNode("TouchSensor");
TouchSensor315.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite314.children = new MFNode();

HAnimSite314.children[0] = TouchSensor315;

let Shape316 = browser.currentScene.createNode("Shape");
Shape316.USE = "HAnimSiteShape";
HAnimSite314.children[1] = Shape316;

HAnimSegment300.children[4] = HAnimSite314;

let HAnimSite317 = browser.currentScene.createNode("HAnimSite");
HAnimSite317.name = "rear_center_midsagittal_plane_pt";
HAnimSite317.DEF = "hanim_rear_center_midsagittal_plane_pt";
let TouchSensor318 = browser.currentScene.createNode("TouchSensor");
TouchSensor318.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite317.children = new MFNode();

HAnimSite317.children[0] = TouchSensor318;

let Shape319 = browser.currentScene.createNode("Shape");
Shape319.USE = "HAnimSiteShape";
HAnimSite317.children[1] = Shape319;

HAnimSegment300.children[5] = HAnimSite317;

HAnimJoint299.children = new MFNode();

HAnimJoint299.children[0] = HAnimSegment300;

let HAnimJoint320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint320.name = "vt6";
HAnimJoint320.DEF = "hanim_vt6";
HAnimJoint320.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint320.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint320.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment321 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment321.name = "t6";
HAnimSegment321.DEF = "hanim_t6";
let Transform322 = browser.currentScene.createNode("Transform");
Transform322.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Transform323 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape324 = browser.currentScene.createNode("Shape");
Shape324.USE = "HAnimJointShape";
Transform323.children = new MFNode();

Transform323.children[0] = Shape324;

Transform322.children = new MFNode();

Transform322.children[0] = Transform323;

HAnimSegment321.children = new MFNode();

HAnimSegment321.children[0] = Transform322;

let Shape325 = browser.currentScene.createNode("Shape");
let LineSet326 = browser.currentScene.createNode("LineSet");
LineSet326.vertexCount = new MFInt32(new int[2]);
let Coordinate327 = browser.currentScene.createNode("Coordinate");
Coordinate327.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387]);
LineSet326.coord = Coordinate327;

//from vt6 to vt1 vertices 2
let ColorRGBA328 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA328.USE = "HAnimSegmentLineColorRGBA";
LineSet326.color = ColorRGBA328;

Shape325.geometry = LineSet326;

HAnimSegment321.children[1] = Shape325;

let HAnimSite329 = browser.currentScene.createNode("HAnimSite");
HAnimSite329.name = "cervicale_pt";
HAnimSite329.DEF = "hanim_cervicale_pt";
HAnimSite329.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor330 = browser.currentScene.createNode("TouchSensor");
TouchSensor330.description = "HAnimSite cervicale_pt";
HAnimSite329.children = new MFNode();

HAnimSite329.children[0] = TouchSensor330;

let Shape331 = browser.currentScene.createNode("Shape");
Shape331.USE = "HAnimSiteShape";
HAnimSite329.children[1] = Shape331;

HAnimSegment321.children[2] = HAnimSite329;

let HAnimSite332 = browser.currentScene.createNode("HAnimSite");
HAnimSite332.name = "suprasternale_pt";
HAnimSite332.DEF = "hanim_suprasternale_pt";
HAnimSite332.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor333 = browser.currentScene.createNode("TouchSensor");
TouchSensor333.description = "HAnimSite suprasternale_pt";
HAnimSite332.children = new MFNode();

HAnimSite332.children[0] = TouchSensor333;

let Shape334 = browser.currentScene.createNode("Shape");
Shape334.USE = "HAnimSiteShape";
HAnimSite332.children[1] = Shape334;

HAnimSegment321.children[3] = HAnimSite332;

HAnimJoint320.children = new MFNode();

HAnimJoint320.children[0] = HAnimSegment321;

let HAnimJoint335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint335.name = "vt1";
HAnimJoint335.DEF = "hanim_vt1";
HAnimJoint335.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint335.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint335.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment336 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment336.name = "t1";
HAnimSegment336.DEF = "hanim_t1";
let Transform337 = browser.currentScene.createNode("Transform");
Transform337.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Transform338 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape339 = browser.currentScene.createNode("Shape");
Shape339.USE = "HAnimJointShape";
Transform338.children = new MFNode();

Transform338.children[0] = Shape339;

Transform337.children = new MFNode();

Transform337.children[0] = Transform338;

HAnimSegment336.children = new MFNode();

HAnimSegment336.children[0] = Transform337;

let Shape340 = browser.currentScene.createNode("Shape");
let LineSet341 = browser.currentScene.createNode("LineSet");
LineSet341.vertexCount = new MFInt32(new int[2]);
let Coordinate342 = browser.currentScene.createNode("Coordinate");
Coordinate342.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084]);
LineSet341.coord = Coordinate342;

//from vt1 to vc4 vertices 2
let ColorRGBA343 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA343.USE = "HAnimSegmentLineColorRGBA";
LineSet341.color = ColorRGBA343;

Shape340.geometry = LineSet341;

HAnimSegment336.children[1] = Shape340;

let Shape344 = browser.currentScene.createNode("Shape");
let LineSet345 = browser.currentScene.createNode("LineSet");
LineSet345.vertexCount = new MFInt32(new int[2]);
let Coordinate346 = browser.currentScene.createNode("Coordinate");
Coordinate346.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet345.coord = Coordinate346;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA347 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA347.USE = "HAnimSegmentLineColorRGBA";
LineSet345.color = ColorRGBA347;

Shape344.geometry = LineSet345;

HAnimSegment336.children[2] = Shape344;

let HAnimSite348 = browser.currentScene.createNode("HAnimSite");
HAnimSite348.name = "l_acromion_pt";
HAnimSite348.DEF = "hanim_l_acromion_pt";
HAnimSite348.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor349 = browser.currentScene.createNode("TouchSensor");
TouchSensor349.description = "HAnimSite l_acromion_pt";
HAnimSite348.children = new MFNode();

HAnimSite348.children[0] = TouchSensor349;

let Shape350 = browser.currentScene.createNode("Shape");
Shape350.USE = "HAnimSiteShape";
HAnimSite348.children[1] = Shape350;

HAnimSegment336.children[3] = HAnimSite348;

let HAnimSite351 = browser.currentScene.createNode("HAnimSite");
HAnimSite351.name = "l_axilla_distal_pt";
HAnimSite351.DEF = "hanim_l_axilla_distal_pt";
HAnimSite351.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor352 = browser.currentScene.createNode("TouchSensor");
TouchSensor352.description = "HAnimSite l_axilla_distal_pt";
HAnimSite351.children = new MFNode();

HAnimSite351.children[0] = TouchSensor352;

let Shape353 = browser.currentScene.createNode("Shape");
Shape353.USE = "HAnimSiteShape";
HAnimSite351.children[1] = Shape353;

HAnimSegment336.children[4] = HAnimSite351;

let HAnimSite354 = browser.currentScene.createNode("HAnimSite");
HAnimSite354.name = "l_axilla_posterior_folds_pt";
HAnimSite354.DEF = "hanim_l_axilla_posterior_folds_pt";
let TouchSensor355 = browser.currentScene.createNode("TouchSensor");
TouchSensor355.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite354.children = new MFNode();

HAnimSite354.children[0] = TouchSensor355;

let Shape356 = browser.currentScene.createNode("Shape");
Shape356.USE = "HAnimSiteShape";
HAnimSite354.children[1] = Shape356;

HAnimSegment336.children[5] = HAnimSite354;

let HAnimSite357 = browser.currentScene.createNode("HAnimSite");
HAnimSite357.name = "l_axilla_proximal_pt";
HAnimSite357.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite357.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor358 = browser.currentScene.createNode("TouchSensor");
TouchSensor358.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite357.children = new MFNode();

HAnimSite357.children[0] = TouchSensor358;

let Shape359 = browser.currentScene.createNode("Shape");
Shape359.USE = "HAnimSiteShape";
HAnimSite357.children[1] = Shape359;

HAnimSegment336.children[6] = HAnimSite357;

let HAnimSite360 = browser.currentScene.createNode("HAnimSite");
HAnimSite360.name = "l_clavicale_pt";
HAnimSite360.DEF = "hanim_l_clavicale_pt";
HAnimSite360.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor361 = browser.currentScene.createNode("TouchSensor");
TouchSensor361.description = "HAnimSite l_clavicale_pt";
HAnimSite360.children = new MFNode();

HAnimSite360.children[0] = TouchSensor361;

let Shape362 = browser.currentScene.createNode("Shape");
Shape362.USE = "HAnimSiteShape";
HAnimSite360.children[1] = Shape362;

HAnimSegment336.children[7] = HAnimSite360;

let Shape363 = browser.currentScene.createNode("Shape");
let LineSet364 = browser.currentScene.createNode("LineSet");
LineSet364.vertexCount = new MFInt32(new int[2]);
let Coordinate365 = browser.currentScene.createNode("Coordinate");
Coordinate365.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet364.coord = Coordinate365;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA366 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA366.USE = "HAnimSegmentLineColorRGBA";
LineSet364.color = ColorRGBA366;

Shape363.geometry = LineSet364;

HAnimSegment336.children[8] = Shape363;

let HAnimSite367 = browser.currentScene.createNode("HAnimSite");
HAnimSite367.name = "r_acromion_pt";
HAnimSite367.DEF = "hanim_r_acromion_pt";
HAnimSite367.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor368 = browser.currentScene.createNode("TouchSensor");
TouchSensor368.description = "HAnimSite r_acromion_pt";
HAnimSite367.children = new MFNode();

HAnimSite367.children[0] = TouchSensor368;

let Shape369 = browser.currentScene.createNode("Shape");
Shape369.USE = "HAnimSiteShape";
HAnimSite367.children[1] = Shape369;

HAnimSegment336.children[9] = HAnimSite367;

let HAnimSite370 = browser.currentScene.createNode("HAnimSite");
HAnimSite370.name = "r_axilla_distal_pt";
HAnimSite370.DEF = "hanim_r_axilla_distal_pt";
HAnimSite370.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor371 = browser.currentScene.createNode("TouchSensor");
TouchSensor371.description = "HAnimSite r_axilla_distal_pt";
HAnimSite370.children = new MFNode();

HAnimSite370.children[0] = TouchSensor371;

let Shape372 = browser.currentScene.createNode("Shape");
Shape372.USE = "HAnimSiteShape";
HAnimSite370.children[1] = Shape372;

HAnimSegment336.children[10] = HAnimSite370;

let HAnimSite373 = browser.currentScene.createNode("HAnimSite");
HAnimSite373.name = "r_axilla_posterior_folds_pt";
HAnimSite373.DEF = "hanim_r_axilla_posterior_folds_pt";
let TouchSensor374 = browser.currentScene.createNode("TouchSensor");
TouchSensor374.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite373.children = new MFNode();

HAnimSite373.children[0] = TouchSensor374;

let Shape375 = browser.currentScene.createNode("Shape");
Shape375.USE = "HAnimSiteShape";
HAnimSite373.children[1] = Shape375;

HAnimSegment336.children[11] = HAnimSite373;

let HAnimSite376 = browser.currentScene.createNode("HAnimSite");
HAnimSite376.name = "r_axilla_proximal_pt";
HAnimSite376.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite376.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor377 = browser.currentScene.createNode("TouchSensor");
TouchSensor377.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite376.children = new MFNode();

HAnimSite376.children[0] = TouchSensor377;

let Shape378 = browser.currentScene.createNode("Shape");
Shape378.USE = "HAnimSiteShape";
HAnimSite376.children[1] = Shape378;

HAnimSegment336.children[12] = HAnimSite376;

let HAnimSite379 = browser.currentScene.createNode("HAnimSite");
HAnimSite379.name = "r_clavicale_pt";
HAnimSite379.DEF = "hanim_r_clavicale_pt";
HAnimSite379.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor380 = browser.currentScene.createNode("TouchSensor");
TouchSensor380.description = "HAnimSite r_clavicale_pt";
HAnimSite379.children = new MFNode();

HAnimSite379.children[0] = TouchSensor380;

let Shape381 = browser.currentScene.createNode("Shape");
Shape381.USE = "HAnimSiteShape";
HAnimSite379.children[1] = Shape381;

HAnimSegment336.children[13] = HAnimSite379;

HAnimJoint335.children = new MFNode();

HAnimJoint335.children[0] = HAnimSegment336;

let HAnimJoint382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint382.name = "vc4";
HAnimJoint382.DEF = "hanim_vc4";
HAnimJoint382.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint382.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint382.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment383 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment383.name = "c4";
HAnimSegment383.DEF = "hanim_c4";
let Transform384 = browser.currentScene.createNode("Transform");
Transform384.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Transform385 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape386 = browser.currentScene.createNode("Shape");
Shape386.USE = "HAnimJointShape";
Transform385.children = new MFNode();

Transform385.children[0] = Shape386;

Transform384.children = new MFNode();

Transform384.children[0] = Transform385;

HAnimSegment383.children = new MFNode();

HAnimSegment383.children[0] = Transform384;

let Shape387 = browser.currentScene.createNode("Shape");
let LineSet388 = browser.currentScene.createNode("LineSet");
LineSet388.vertexCount = new MFInt32(new int[2]);
let Coordinate389 = browser.currentScene.createNode("Coordinate");
Coordinate389.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103]);
LineSet388.coord = Coordinate389;

//from vc4 to vc2 vertices 2
let ColorRGBA390 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA390.USE = "HAnimSegmentLineColorRGBA";
LineSet388.color = ColorRGBA390;

Shape387.geometry = LineSet388;

HAnimSegment383.children[1] = Shape387;

let HAnimSite391 = browser.currentScene.createNode("HAnimSite");
HAnimSite391.name = "adams_apple_pt";
HAnimSite391.DEF = "hanim_adams_apple_pt";
let TouchSensor392 = browser.currentScene.createNode("TouchSensor");
TouchSensor392.description = "HAnimSite adams_apple_pt";
HAnimSite391.children = new MFNode();

HAnimSite391.children[0] = TouchSensor392;

let Shape393 = browser.currentScene.createNode("Shape");
Shape393.USE = "HAnimSiteShape";
HAnimSite391.children[1] = Shape393;

HAnimSegment383.children[2] = HAnimSite391;

HAnimJoint382.children = new MFNode();

HAnimJoint382.children[0] = HAnimSegment383;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.name = "vc2";
HAnimJoint394.DEF = "hanim_vc2";
HAnimJoint394.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint394.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint394.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment395 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment395.name = "c2";
HAnimSegment395.DEF = "hanim_c2";
let Transform396 = browser.currentScene.createNode("Transform");
Transform396.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Transform397 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape398 = browser.currentScene.createNode("Shape");
Shape398.USE = "HAnimJointShape";
Transform397.children = new MFNode();

Transform397.children[0] = Shape398;

Transform396.children = new MFNode();

Transform396.children[0] = Transform397;

HAnimSegment395.children = new MFNode();

HAnimSegment395.children[0] = Transform396;

let Shape399 = browser.currentScene.createNode("Shape");
let LineSet400 = browser.currentScene.createNode("LineSet");
LineSet400.vertexCount = new MFInt32(new int[2]);
let Coordinate401 = browser.currentScene.createNode("Coordinate");
Coordinate401.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236]);
LineSet400.coord = Coordinate401;

//from vc2 to skullbase vertices 2
let ColorRGBA402 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA402.USE = "HAnimSegmentLineColorRGBA";
LineSet400.color = ColorRGBA402;

Shape399.geometry = LineSet400;

HAnimSegment395.children[1] = Shape399;

let HAnimSite403 = browser.currentScene.createNode("HAnimSite");
HAnimSite403.name = "glabella_pt";
HAnimSite403.DEF = "hanim_glabella_pt";
let TouchSensor404 = browser.currentScene.createNode("TouchSensor");
TouchSensor404.description = "HAnimSite glabella_pt";
HAnimSite403.children = new MFNode();

HAnimSite403.children[0] = TouchSensor404;

let Shape405 = browser.currentScene.createNode("Shape");
Shape405.USE = "HAnimSiteShape";
HAnimSite403.children[1] = Shape405;

HAnimSegment395.children[2] = HAnimSite403;

let HAnimSite406 = browser.currentScene.createNode("HAnimSite");
HAnimSite406.name = "l_ectocanthus_pt";
HAnimSite406.DEF = "hanim_l_ectocanthus_pt";
let TouchSensor407 = browser.currentScene.createNode("TouchSensor");
TouchSensor407.description = "HAnimSite l_ectocanthus_pt";
HAnimSite406.children = new MFNode();

HAnimSite406.children[0] = TouchSensor407;

let Shape408 = browser.currentScene.createNode("Shape");
Shape408.USE = "HAnimSiteShape";
HAnimSite406.children[1] = Shape408;

HAnimSegment395.children[3] = HAnimSite406;

let HAnimSite409 = browser.currentScene.createNode("HAnimSite");
HAnimSite409.name = "l_infraorbitale_pt";
HAnimSite409.DEF = "hanim_l_infraorbitale_pt";
HAnimSite409.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor410 = browser.currentScene.createNode("TouchSensor");
TouchSensor410.description = "HAnimSite l_infraorbitale_pt";
HAnimSite409.children = new MFNode();

HAnimSite409.children[0] = TouchSensor410;

let Shape411 = browser.currentScene.createNode("Shape");
Shape411.USE = "HAnimSiteShape";
HAnimSite409.children[1] = Shape411;

HAnimSegment395.children[4] = HAnimSite409;

let HAnimSite412 = browser.currentScene.createNode("HAnimSite");
HAnimSite412.name = "l_tragion_pt";
HAnimSite412.DEF = "hanim_l_tragion_pt";
HAnimSite412.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor413 = browser.currentScene.createNode("TouchSensor");
TouchSensor413.description = "HAnimSite l_tragion_pt";
HAnimSite412.children = new MFNode();

HAnimSite412.children[0] = TouchSensor413;

let Shape414 = browser.currentScene.createNode("Shape");
Shape414.USE = "HAnimSiteShape";
HAnimSite412.children[1] = Shape414;

HAnimSegment395.children[5] = HAnimSite412;

let HAnimSite415 = browser.currentScene.createNode("HAnimSite");
HAnimSite415.name = "nuchale_pt";
HAnimSite415.DEF = "hanim_nuchale_pt";
HAnimSite415.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor416 = browser.currentScene.createNode("TouchSensor");
TouchSensor416.description = "HAnimSite nuchale_pt";
HAnimSite415.children = new MFNode();

HAnimSite415.children[0] = TouchSensor416;

let Shape417 = browser.currentScene.createNode("Shape");
Shape417.USE = "HAnimSiteShape";
HAnimSite415.children[1] = Shape417;

HAnimSegment395.children[6] = HAnimSite415;

let HAnimSite418 = browser.currentScene.createNode("HAnimSite");
HAnimSite418.name = "opisthocranion_pt";
HAnimSite418.DEF = "hanim_opisthocranion_pt";
let TouchSensor419 = browser.currentScene.createNode("TouchSensor");
TouchSensor419.description = "HAnimSite opisthocranion_pt";
HAnimSite418.children = new MFNode();

HAnimSite418.children[0] = TouchSensor419;

let Shape420 = browser.currentScene.createNode("Shape");
Shape420.USE = "HAnimSiteShape";
HAnimSite418.children[1] = Shape420;

HAnimSegment395.children[7] = HAnimSite418;

let HAnimSite421 = browser.currentScene.createNode("HAnimSite");
HAnimSite421.name = "r_ectocanthus_pt";
HAnimSite421.DEF = "hanim_r_ectocanthus_pt";
let TouchSensor422 = browser.currentScene.createNode("TouchSensor");
TouchSensor422.description = "HAnimSite r_ectocanthus_pt";
HAnimSite421.children = new MFNode();

HAnimSite421.children[0] = TouchSensor422;

let Shape423 = browser.currentScene.createNode("Shape");
Shape423.USE = "HAnimSiteShape";
HAnimSite421.children[1] = Shape423;

HAnimSegment395.children[8] = HAnimSite421;

let HAnimSite424 = browser.currentScene.createNode("HAnimSite");
HAnimSite424.name = "r_infraorbitale_pt";
HAnimSite424.DEF = "hanim_r_infraorbitale_pt";
HAnimSite424.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor425 = browser.currentScene.createNode("TouchSensor");
TouchSensor425.description = "HAnimSite r_infraorbitale_pt";
HAnimSite424.children = new MFNode();

HAnimSite424.children[0] = TouchSensor425;

let Shape426 = browser.currentScene.createNode("Shape");
Shape426.USE = "HAnimSiteShape";
HAnimSite424.children[1] = Shape426;

HAnimSegment395.children[9] = HAnimSite424;

let HAnimSite427 = browser.currentScene.createNode("HAnimSite");
HAnimSite427.name = "r_tragion_pt";
HAnimSite427.DEF = "hanim_r_tragion_pt";
HAnimSite427.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor428 = browser.currentScene.createNode("TouchSensor");
TouchSensor428.description = "HAnimSite r_tragion_pt";
HAnimSite427.children = new MFNode();

HAnimSite427.children[0] = TouchSensor428;

let Shape429 = browser.currentScene.createNode("Shape");
Shape429.USE = "HAnimSiteShape";
HAnimSite427.children[1] = Shape429;

HAnimSegment395.children[10] = HAnimSite427;

let HAnimSite430 = browser.currentScene.createNode("HAnimSite");
HAnimSite430.name = "sellion_pt";
HAnimSite430.DEF = "hanim_sellion_pt";
HAnimSite430.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor431 = browser.currentScene.createNode("TouchSensor");
TouchSensor431.description = "HAnimSite sellion_pt";
HAnimSite430.children = new MFNode();

HAnimSite430.children[0] = TouchSensor431;

let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "HAnimSiteShape";
HAnimSite430.children[1] = Shape432;

HAnimSegment395.children[11] = HAnimSite430;

let HAnimSite433 = browser.currentScene.createNode("HAnimSite");
HAnimSite433.name = "skull_vertex_pt";
HAnimSite433.DEF = "hanim_skull_vertex_pt";
HAnimSite433.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let TouchSensor434 = browser.currentScene.createNode("TouchSensor");
TouchSensor434.description = "HAnimSite skull_vertex_pt";
HAnimSite433.children = new MFNode();

HAnimSite433.children[0] = TouchSensor434;

let Shape435 = browser.currentScene.createNode("Shape");
Shape435.USE = "HAnimSiteShape";
HAnimSite433.children[1] = Shape435;

HAnimSegment395.children[12] = HAnimSite433;

HAnimJoint394.children = new MFNode();

HAnimJoint394.children[0] = HAnimSegment395;

let HAnimJoint436 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint436.name = "skullbase";
HAnimJoint436.DEF = "hanim_skullbase";
HAnimJoint436.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint436.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint436.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint394.children[1] = HAnimJoint436;

HAnimJoint382.children[1] = HAnimJoint394;

HAnimJoint335.children[1] = HAnimJoint382;

let HAnimJoint437 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint437.name = "l_sternoclavicular";
HAnimJoint437.DEF = "hanim_l_sternoclavicular";
HAnimJoint437.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint437.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint437.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.name = "l_clavicle";
HAnimSegment438.DEF = "hanim_l_clavicle";
let Transform439 = browser.currentScene.createNode("Transform");
Transform439.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Transform440 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "HAnimJointShape";
Transform440.children = new MFNode();

Transform440.children[0] = Shape441;

Transform439.children = new MFNode();

Transform439.children[0] = Transform440;

HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = Transform439;

let Shape442 = browser.currentScene.createNode("Shape");
let LineSet443 = browser.currentScene.createNode("LineSet");
LineSet443.vertexCount = new MFInt32(new int[2]);
let Coordinate444 = browser.currentScene.createNode("Coordinate");
Coordinate444.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet443.coord = Coordinate444;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA445 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA445.USE = "HAnimSegmentLineColorRGBA";
LineSet443.color = ColorRGBA445;

Shape442.geometry = LineSet443;

HAnimSegment438.children[1] = Shape442;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

let HAnimJoint446 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint446.name = "l_acromioclavicular";
HAnimJoint446.DEF = "hanim_l_acromioclavicular";
HAnimJoint446.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint446.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint446.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment447 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment447.name = "l_scapula";
HAnimSegment447.DEF = "hanim_l_scapula";
let Transform448 = browser.currentScene.createNode("Transform");
Transform448.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Transform449 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape450 = browser.currentScene.createNode("Shape");
Shape450.USE = "HAnimJointShape";
Transform449.children = new MFNode();

Transform449.children[0] = Shape450;

Transform448.children = new MFNode();

Transform448.children[0] = Transform449;

HAnimSegment447.children = new MFNode();

HAnimSegment447.children[0] = Transform448;

let Shape451 = browser.currentScene.createNode("Shape");
let LineSet452 = browser.currentScene.createNode("LineSet");
LineSet452.vertexCount = new MFInt32(new int[2]);
let Coordinate453 = browser.currentScene.createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet452.coord = Coordinate453;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA454 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSegmentLineColorRGBA";
LineSet452.color = ColorRGBA454;

Shape451.geometry = LineSet452;

HAnimSegment447.children[1] = Shape451;

let HAnimSite455 = browser.currentScene.createNode("HAnimSite");
HAnimSite455.name = "l_bideltoid_pt";
HAnimSite455.DEF = "hanim_l_bideltoid_pt";
let TouchSensor456 = browser.currentScene.createNode("TouchSensor");
TouchSensor456.description = "HAnimSite l_bideltoid_pt";
HAnimSite455.children = new MFNode();

HAnimSite455.children[0] = TouchSensor456;

let Shape457 = browser.currentScene.createNode("Shape");
Shape457.USE = "HAnimSiteShape";
HAnimSite455.children[1] = Shape457;

HAnimSegment447.children[2] = HAnimSite455;

let HAnimSite458 = browser.currentScene.createNode("HAnimSite");
HAnimSite458.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite458.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite458.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor459 = browser.currentScene.createNode("TouchSensor");
TouchSensor459.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite458.children = new MFNode();

HAnimSite458.children[0] = TouchSensor459;

let Shape460 = browser.currentScene.createNode("Shape");
Shape460.USE = "HAnimSiteShape";
HAnimSite458.children[1] = Shape460;

HAnimSegment447.children[3] = HAnimSite458;

HAnimJoint446.children = new MFNode();

HAnimJoint446.children[0] = HAnimSegment447;

let HAnimJoint461 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint461.name = "l_shoulder";
HAnimJoint461.DEF = "hanim_l_shoulder";
HAnimJoint461.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint461.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint461.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment462 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment462.name = "l_upperarm";
HAnimSegment462.DEF = "hanim_l_upperarm";
let Transform463 = browser.currentScene.createNode("Transform");
Transform463.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Transform464 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape465 = browser.currentScene.createNode("Shape");
Shape465.USE = "HAnimJointShape";
Transform464.children = new MFNode();

Transform464.children[0] = Shape465;

Transform463.children = new MFNode();

Transform463.children[0] = Transform464;

HAnimSegment462.children = new MFNode();

HAnimSegment462.children[0] = Transform463;

let Shape466 = browser.currentScene.createNode("Shape");
let LineSet467 = browser.currentScene.createNode("LineSet");
LineSet467.vertexCount = new MFInt32(new int[2]);
let Coordinate468 = browser.currentScene.createNode("Coordinate");
Coordinate468.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet467.coord = Coordinate468;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA469 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA469.USE = "HAnimSegmentLineColorRGBA";
LineSet467.color = ColorRGBA469;

Shape466.geometry = LineSet467;

HAnimSegment462.children[1] = Shape466;

let HAnimSite470 = browser.currentScene.createNode("HAnimSite");
HAnimSite470.name = "l_humeral_medial_epicondyles_pt";
HAnimSite470.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite470.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor471 = browser.currentScene.createNode("TouchSensor");
TouchSensor471.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite470.children = new MFNode();

HAnimSite470.children[0] = TouchSensor471;

let Shape472 = browser.currentScene.createNode("Shape");
Shape472.USE = "HAnimSiteShape";
HAnimSite470.children[1] = Shape472;

HAnimSegment462.children[2] = HAnimSite470;

let HAnimSite473 = browser.currentScene.createNode("HAnimSite");
HAnimSite473.name = "l_olecranon_pt";
HAnimSite473.DEF = "hanim_l_olecranon_pt";
HAnimSite473.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor474 = browser.currentScene.createNode("TouchSensor");
TouchSensor474.description = "HAnimSite l_olecranon_pt";
HAnimSite473.children = new MFNode();

HAnimSite473.children[0] = TouchSensor474;

let Shape475 = browser.currentScene.createNode("Shape");
Shape475.USE = "HAnimSiteShape";
HAnimSite473.children[1] = Shape475;

HAnimSegment462.children[3] = HAnimSite473;

let HAnimSite476 = browser.currentScene.createNode("HAnimSite");
HAnimSite476.name = "l_radial_styloid_pt";
HAnimSite476.DEF = "hanim_l_radial_styloid_pt";
HAnimSite476.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor477 = browser.currentScene.createNode("TouchSensor");
TouchSensor477.description = "HAnimSite l_radial_styloid_pt";
HAnimSite476.children = new MFNode();

HAnimSite476.children[0] = TouchSensor477;

let Shape478 = browser.currentScene.createNode("Shape");
Shape478.USE = "HAnimSiteShape";
HAnimSite476.children[1] = Shape478;

HAnimSegment462.children[4] = HAnimSite476;

let HAnimSite479 = browser.currentScene.createNode("HAnimSite");
HAnimSite479.name = "l_radiale_pt";
HAnimSite479.DEF = "hanim_l_radiale_pt";
HAnimSite479.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor480 = browser.currentScene.createNode("TouchSensor");
TouchSensor480.description = "HAnimSite l_radiale_pt";
HAnimSite479.children = new MFNode();

HAnimSite479.children[0] = TouchSensor480;

let Shape481 = browser.currentScene.createNode("Shape");
Shape481.USE = "HAnimSiteShape";
HAnimSite479.children[1] = Shape481;

HAnimSegment462.children[5] = HAnimSite479;

HAnimJoint461.children = new MFNode();

HAnimJoint461.children[0] = HAnimSegment462;

let HAnimJoint482 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint482.name = "l_elbow";
HAnimJoint482.DEF = "hanim_l_elbow";
HAnimJoint482.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint482.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint482.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment483 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment483.name = "l_forearm";
HAnimSegment483.DEF = "hanim_l_forearm";
let Transform484 = browser.currentScene.createNode("Transform");
Transform484.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Transform485 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape486 = browser.currentScene.createNode("Shape");
Shape486.USE = "HAnimJointShape";
Transform485.children = new MFNode();

Transform485.children[0] = Shape486;

Transform484.children = new MFNode();

Transform484.children[0] = Transform485;

HAnimSegment483.children = new MFNode();

HAnimSegment483.children[0] = Transform484;

let Shape487 = browser.currentScene.createNode("Shape");
let LineSet488 = browser.currentScene.createNode("LineSet");
LineSet488.vertexCount = new MFInt32(new int[2]);
let Coordinate489 = browser.currentScene.createNode("Coordinate");
Coordinate489.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet488.coord = Coordinate489;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA490 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA490.USE = "HAnimSegmentLineColorRGBA";
LineSet488.color = ColorRGBA490;

Shape487.geometry = LineSet488;

HAnimSegment483.children[1] = Shape487;

let HAnimSite491 = browser.currentScene.createNode("HAnimSite");
HAnimSite491.name = "l_ulnar_styloid_pt";
HAnimSite491.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite491.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor492 = browser.currentScene.createNode("TouchSensor");
TouchSensor492.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite491.children = new MFNode();

HAnimSite491.children[0] = TouchSensor492;

let Shape493 = browser.currentScene.createNode("Shape");
Shape493.USE = "HAnimSiteShape";
HAnimSite491.children[1] = Shape493;

HAnimSegment483.children[2] = HAnimSite491;

HAnimJoint482.children = new MFNode();

HAnimJoint482.children[0] = HAnimSegment483;

let HAnimJoint494 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint494.name = "l_radiocarpal";
HAnimJoint494.DEF = "hanim_l_radiocarpal";
HAnimJoint494.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint494.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint494.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment495 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment495.name = "l_carpal";
HAnimSegment495.DEF = "hanim_l_carpal";
let Transform496 = browser.currentScene.createNode("Transform");
Transform496.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform496.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform496.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
let Transform497 = browser.currentScene.createNode("Transform");
Transform497.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
let Shape498 = browser.currentScene.createNode("Shape");
Shape498.USE = "HAnimJointShape";
Transform497.children = new MFNode();

Transform497.children[0] = Shape498;

Transform496.children = new MFNode();

Transform496.children[0] = Transform497;

HAnimSegment495.children = new MFNode();

HAnimSegment495.children[0] = Transform496;

let Shape499 = browser.currentScene.createNode("Shape");
let LineSet500 = browser.currentScene.createNode("LineSet");
LineSet500.vertexCount = new MFInt32(new int[2]);
let Coordinate501 = browser.currentScene.createNode("Coordinate");
Coordinate501.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet500.coord = Coordinate501;

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
let ColorRGBA502 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA502.USE = "HAnimSegmentLineColorRGBA";
LineSet500.color = ColorRGBA502;

Shape499.geometry = LineSet500;

HAnimSegment495.children[1] = Shape499;

let Shape503 = browser.currentScene.createNode("Shape");
let LineSet504 = browser.currentScene.createNode("LineSet");
LineSet504.vertexCount = new MFInt32(new int[2]);
let Coordinate505 = browser.currentScene.createNode("Coordinate");
Coordinate505.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet504.coord = Coordinate505;

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
let ColorRGBA506 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA506.USE = "HAnimSegmentLineColorRGBA";
LineSet504.color = ColorRGBA506;

Shape503.geometry = LineSet504;

HAnimSegment495.children[2] = Shape503;

let HAnimSite507 = browser.currentScene.createNode("HAnimSite");
HAnimSite507.name = "l_metacarpal_phalanx_2_pt";
HAnimSite507.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite507.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor508 = browser.currentScene.createNode("TouchSensor");
TouchSensor508.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite507.children = new MFNode();

HAnimSite507.children[0] = TouchSensor508;

let Shape509 = browser.currentScene.createNode("Shape");
Shape509.USE = "HAnimSiteShape";
HAnimSite507.children[1] = Shape509;

HAnimSegment495.children[3] = HAnimSite507;

let Shape510 = browser.currentScene.createNode("Shape");
let LineSet511 = browser.currentScene.createNode("LineSet");
LineSet511.vertexCount = new MFInt32(new int[2]);
let Coordinate512 = browser.currentScene.createNode("Coordinate");
Coordinate512.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet511.coord = Coordinate512;

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
let ColorRGBA513 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA513.USE = "HAnimSegmentLineColorRGBA";
LineSet511.color = ColorRGBA513;

Shape510.geometry = LineSet511;

HAnimSegment495.children[4] = Shape510;

let HAnimSite514 = browser.currentScene.createNode("HAnimSite");
HAnimSite514.name = "l_metacarpal_phalanx_3_pt";
HAnimSite514.DEF = "hanim_l_metacarpal_phalanx_3_pt";
let TouchSensor515 = browser.currentScene.createNode("TouchSensor");
TouchSensor515.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite514.children = new MFNode();

HAnimSite514.children[0] = TouchSensor515;

let Shape516 = browser.currentScene.createNode("Shape");
Shape516.USE = "HAnimSiteShape";
HAnimSite514.children[1] = Shape516;

HAnimSegment495.children[5] = HAnimSite514;

let Shape517 = browser.currentScene.createNode("Shape");
let LineSet518 = browser.currentScene.createNode("LineSet");
LineSet518.vertexCount = new MFInt32(new int[2]);
let Coordinate519 = browser.currentScene.createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet518.coord = Coordinate519;

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
let ColorRGBA520 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA520.USE = "HAnimSegmentLineColorRGBA";
LineSet518.color = ColorRGBA520;

Shape517.geometry = LineSet518;

HAnimSegment495.children[6] = Shape517;

let Shape521 = browser.currentScene.createNode("Shape");
let LineSet522 = browser.currentScene.createNode("LineSet");
LineSet522.vertexCount = new MFInt32(new int[2]);
let Coordinate523 = browser.currentScene.createNode("Coordinate");
Coordinate523.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet522.coord = Coordinate523;

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
let ColorRGBA524 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA524.USE = "HAnimSegmentLineColorRGBA";
LineSet522.color = ColorRGBA524;

Shape521.geometry = LineSet522;

HAnimSegment495.children[7] = Shape521;

let HAnimSite525 = browser.currentScene.createNode("HAnimSite");
HAnimSite525.name = "l_metacarpal_phalanx_5_pt";
HAnimSite525.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite525.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor526 = browser.currentScene.createNode("TouchSensor");
TouchSensor526.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite525.children = new MFNode();

HAnimSite525.children[0] = TouchSensor526;

let Shape527 = browser.currentScene.createNode("Shape");
Shape527.USE = "HAnimSiteShape";
HAnimSite525.children[1] = Shape527;

HAnimSegment495.children[8] = HAnimSite525;

HAnimJoint494.children = new MFNode();

HAnimJoint494.children[0] = HAnimSegment495;

let HAnimJoint528 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint528.name = "l_carpometacarpal_1";
HAnimJoint528.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint528.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint528.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint528.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment529 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment529.name = "l_metacarpal_1";
HAnimSegment529.DEF = "hanim_l_metacarpal_1";
let Transform530 = browser.currentScene.createNode("Transform");
Transform530.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Transform531 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape532 = browser.currentScene.createNode("Shape");
Shape532.USE = "HAnimJointShape";
Transform531.children = new MFNode();

Transform531.children[0] = Shape532;

Transform530.children = new MFNode();

Transform530.children[0] = Transform531;

HAnimSegment529.children = new MFNode();

HAnimSegment529.children[0] = Transform530;

let Shape533 = browser.currentScene.createNode("Shape");
let LineSet534 = browser.currentScene.createNode("LineSet");
LineSet534.vertexCount = new MFInt32(new int[2]);
let Coordinate535 = browser.currentScene.createNode("Coordinate");
Coordinate535.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet534.coord = Coordinate535;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA536 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA536.USE = "HAnimSegmentLineColorRGBA";
LineSet534.color = ColorRGBA536;

Shape533.geometry = LineSet534;

HAnimSegment529.children[1] = Shape533;

HAnimJoint528.children = new MFNode();

HAnimJoint528.children[0] = HAnimSegment529;

let HAnimJoint537 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint537.name = "l_metacarpophalangeal_1";
HAnimJoint537.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint537.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint537.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint537.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment538 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment538.name = "l_carpal_proximal_phalanx_1";
HAnimSegment538.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform539 = browser.currentScene.createNode("Transform");
Transform539.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Transform540 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape541 = browser.currentScene.createNode("Shape");
Shape541.USE = "HAnimJointShape";
Transform540.children = new MFNode();

Transform540.children[0] = Shape541;

Transform539.children = new MFNode();

Transform539.children[0] = Transform540;

HAnimSegment538.children = new MFNode();

HAnimSegment538.children[0] = Transform539;

let Shape542 = browser.currentScene.createNode("Shape");
let LineSet543 = browser.currentScene.createNode("LineSet");
LineSet543.vertexCount = new MFInt32(new int[2]);
let Coordinate544 = browser.currentScene.createNode("Coordinate");
Coordinate544.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet543.coord = Coordinate544;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA545 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA545.USE = "HAnimSegmentLineColorRGBA";
LineSet543.color = ColorRGBA545;

Shape542.geometry = LineSet543;

HAnimSegment538.children[1] = Shape542;

let HAnimSite546 = browser.currentScene.createNode("HAnimSite");
HAnimSite546.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite546.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
let TouchSensor547 = browser.currentScene.createNode("TouchSensor");
TouchSensor547.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite546.children = new MFNode();

HAnimSite546.children[0] = TouchSensor547;

let Shape548 = browser.currentScene.createNode("Shape");
Shape548.USE = "HAnimSiteShape";
HAnimSite546.children[1] = Shape548;

HAnimSegment538.children[2] = HAnimSite546;

HAnimJoint537.children = new MFNode();

HAnimJoint537.children[0] = HAnimSegment538;

let HAnimJoint549 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint549.name = "l_carpal_interphalangeal_1";
HAnimJoint549.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint549.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint549.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint549.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint537.children[1] = HAnimJoint549;

HAnimJoint528.children[1] = HAnimJoint537;

HAnimJoint494.children[1] = HAnimJoint528;

let HAnimJoint550 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint550.name = "l_carpometacarpal_2";
HAnimJoint550.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint550.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint550.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint550.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment551 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment551.name = "l_metacarpal_2";
HAnimSegment551.DEF = "hanim_l_metacarpal_2";
let Transform552 = browser.currentScene.createNode("Transform");
Transform552.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Transform553 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape554 = browser.currentScene.createNode("Shape");
Shape554.USE = "HAnimJointShape";
Transform553.children = new MFNode();

Transform553.children[0] = Shape554;

Transform552.children = new MFNode();

Transform552.children[0] = Transform553;

HAnimSegment551.children = new MFNode();

HAnimSegment551.children[0] = Transform552;

let Shape555 = browser.currentScene.createNode("Shape");
let LineSet556 = browser.currentScene.createNode("LineSet");
LineSet556.vertexCount = new MFInt32(new int[2]);
let Coordinate557 = browser.currentScene.createNode("Coordinate");
Coordinate557.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet556.coord = Coordinate557;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA558 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
LineSet556.color = ColorRGBA558;

Shape555.geometry = LineSet556;

HAnimSegment551.children[1] = Shape555;

HAnimJoint550.children = new MFNode();

HAnimJoint550.children[0] = HAnimSegment551;

let HAnimJoint559 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint559.name = "l_metacarpophalangeal_2";
HAnimJoint559.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint559.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint559.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint559.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment560 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment560.name = "l_carpal_proximal_phalanx_2";
HAnimSegment560.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform561 = browser.currentScene.createNode("Transform");
Transform561.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Transform562 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape563 = browser.currentScene.createNode("Shape");
Shape563.USE = "HAnimJointShape";
Transform562.children = new MFNode();

Transform562.children[0] = Shape563;

Transform561.children = new MFNode();

Transform561.children[0] = Transform562;

HAnimSegment560.children = new MFNode();

HAnimSegment560.children[0] = Transform561;

let Shape564 = browser.currentScene.createNode("Shape");
let LineSet565 = browser.currentScene.createNode("LineSet");
LineSet565.vertexCount = new MFInt32(new int[2]);
let Coordinate566 = browser.currentScene.createNode("Coordinate");
Coordinate566.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet565.coord = Coordinate566;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA567 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
LineSet565.color = ColorRGBA567;

Shape564.geometry = LineSet565;

HAnimSegment560.children[1] = Shape564;

HAnimJoint559.children = new MFNode();

HAnimJoint559.children[0] = HAnimSegment560;

let HAnimJoint568 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint568.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint568.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint568.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint568.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint568.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment569 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment569.name = "l_carpal_middle_phalanx_2";
HAnimSegment569.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform570 = browser.currentScene.createNode("Transform");
Transform570.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Transform571 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape572 = browser.currentScene.createNode("Shape");
Shape572.USE = "HAnimJointShape";
Transform571.children = new MFNode();

Transform571.children[0] = Shape572;

Transform570.children = new MFNode();

Transform570.children[0] = Transform571;

HAnimSegment569.children = new MFNode();

HAnimSegment569.children[0] = Transform570;

let Shape573 = browser.currentScene.createNode("Shape");
let LineSet574 = browser.currentScene.createNode("LineSet");
LineSet574.vertexCount = new MFInt32(new int[2]);
let Coordinate575 = browser.currentScene.createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet574.coord = Coordinate575;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA576 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
LineSet574.color = ColorRGBA576;

Shape573.geometry = LineSet574;

HAnimSegment569.children[1] = Shape573;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite577.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
let TouchSensor578 = browser.currentScene.createNode("TouchSensor");
TouchSensor578.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite577.children = new MFNode();

HAnimSite577.children[0] = TouchSensor578;

let Shape579 = browser.currentScene.createNode("Shape");
Shape579.USE = "HAnimSiteShape";
HAnimSite577.children[1] = Shape579;

HAnimSegment569.children[2] = HAnimSite577;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.name = "l_dactylion_pt";
HAnimSite580.DEF = "hanim_l_dactylion_pt";
HAnimSite580.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor581 = browser.currentScene.createNode("TouchSensor");
TouchSensor581.description = "HAnimSite l_dactylion_pt";
HAnimSite580.children = new MFNode();

HAnimSite580.children[0] = TouchSensor581;

let Shape582 = browser.currentScene.createNode("Shape");
Shape582.USE = "HAnimSiteShape";
HAnimSite580.children[1] = Shape582;

HAnimSegment569.children[3] = HAnimSite580;

HAnimJoint568.children = new MFNode();

HAnimJoint568.children[0] = HAnimSegment569;

let HAnimJoint583 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint583.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint583.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint583.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint583.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint583.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint568.children[1] = HAnimJoint583;

HAnimJoint559.children[1] = HAnimJoint568;

HAnimJoint550.children[1] = HAnimJoint559;

HAnimJoint494.children[2] = HAnimJoint550;

let HAnimJoint584 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint584.name = "l_carpometacarpal_3";
HAnimJoint584.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint584.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint584.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint584.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment585 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment585.name = "l_metacarpal_3";
HAnimSegment585.DEF = "hanim_l_metacarpal_3";
let Transform586 = browser.currentScene.createNode("Transform");
Transform586.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Transform587 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape588 = browser.currentScene.createNode("Shape");
Shape588.USE = "HAnimJointShape";
Transform587.children = new MFNode();

Transform587.children[0] = Shape588;

Transform586.children = new MFNode();

Transform586.children[0] = Transform587;

HAnimSegment585.children = new MFNode();

HAnimSegment585.children[0] = Transform586;

let Shape589 = browser.currentScene.createNode("Shape");
let LineSet590 = browser.currentScene.createNode("LineSet");
LineSet590.vertexCount = new MFInt32(new int[2]);
let Coordinate591 = browser.currentScene.createNode("Coordinate");
Coordinate591.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet590.coord = Coordinate591;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA592 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA";
LineSet590.color = ColorRGBA592;

Shape589.geometry = LineSet590;

HAnimSegment585.children[1] = Shape589;

HAnimJoint584.children = new MFNode();

HAnimJoint584.children[0] = HAnimSegment585;

let HAnimJoint593 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint593.name = "l_metacarpophalangeal_3";
HAnimJoint593.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint593.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint593.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint593.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment594 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment594.name = "l_carpal_proximal_phalanx_3";
HAnimSegment594.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform595 = browser.currentScene.createNode("Transform");
Transform595.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Transform596 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape597 = browser.currentScene.createNode("Shape");
Shape597.USE = "HAnimJointShape";
Transform596.children = new MFNode();

Transform596.children[0] = Shape597;

Transform595.children = new MFNode();

Transform595.children[0] = Transform596;

HAnimSegment594.children = new MFNode();

HAnimSegment594.children[0] = Transform595;

let Shape598 = browser.currentScene.createNode("Shape");
let LineSet599 = browser.currentScene.createNode("LineSet");
LineSet599.vertexCount = new MFInt32(new int[2]);
let Coordinate600 = browser.currentScene.createNode("Coordinate");
Coordinate600.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet599.coord = Coordinate600;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA601 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA601.USE = "HAnimSegmentLineColorRGBA";
LineSet599.color = ColorRGBA601;

Shape598.geometry = LineSet599;

HAnimSegment594.children[1] = Shape598;

HAnimJoint593.children = new MFNode();

HAnimJoint593.children[0] = HAnimSegment594;

let HAnimJoint602 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint602.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint602.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint602.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint602.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint602.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment603 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment603.name = "l_carpal_middle_phalanx_3";
HAnimSegment603.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform604 = browser.currentScene.createNode("Transform");
Transform604.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Transform605 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape606 = browser.currentScene.createNode("Shape");
Shape606.USE = "HAnimJointShape";
Transform605.children = new MFNode();

Transform605.children[0] = Shape606;

Transform604.children = new MFNode();

Transform604.children[0] = Transform605;

HAnimSegment603.children = new MFNode();

HAnimSegment603.children[0] = Transform604;

let Shape607 = browser.currentScene.createNode("Shape");
let LineSet608 = browser.currentScene.createNode("LineSet");
LineSet608.vertexCount = new MFInt32(new int[2]);
let Coordinate609 = browser.currentScene.createNode("Coordinate");
Coordinate609.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet608.coord = Coordinate609;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA610 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA610.USE = "HAnimSegmentLineColorRGBA";
LineSet608.color = ColorRGBA610;

Shape607.geometry = LineSet608;

HAnimSegment603.children[1] = Shape607;

let HAnimSite611 = browser.currentScene.createNode("HAnimSite");
HAnimSite611.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite611.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
let TouchSensor612 = browser.currentScene.createNode("TouchSensor");
TouchSensor612.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite611.children = new MFNode();

HAnimSite611.children[0] = TouchSensor612;

let Shape613 = browser.currentScene.createNode("Shape");
Shape613.USE = "HAnimSiteShape";
HAnimSite611.children[1] = Shape613;

HAnimSegment603.children[2] = HAnimSite611;

HAnimJoint602.children = new MFNode();

HAnimJoint602.children[0] = HAnimSegment603;

let HAnimJoint614 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint614.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint614.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint614.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint614.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint614.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint602.children[1] = HAnimJoint614;

HAnimJoint593.children[1] = HAnimJoint602;

HAnimJoint584.children[1] = HAnimJoint593;

HAnimJoint494.children[3] = HAnimJoint584;

let HAnimJoint615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint615.name = "l_carpometacarpal_4";
HAnimJoint615.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint615.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint615.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint615.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment616 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment616.name = "l_metacarpal_4";
HAnimSegment616.DEF = "hanim_l_metacarpal_4";
let Transform617 = browser.currentScene.createNode("Transform");
Transform617.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Transform618 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape619 = browser.currentScene.createNode("Shape");
Shape619.USE = "HAnimJointShape";
Transform618.children = new MFNode();

Transform618.children[0] = Shape619;

Transform617.children = new MFNode();

Transform617.children[0] = Transform618;

HAnimSegment616.children = new MFNode();

HAnimSegment616.children[0] = Transform617;

let Shape620 = browser.currentScene.createNode("Shape");
let LineSet621 = browser.currentScene.createNode("LineSet");
LineSet621.vertexCount = new MFInt32(new int[2]);
let Coordinate622 = browser.currentScene.createNode("Coordinate");
Coordinate622.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet621.coord = Coordinate622;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA623 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA623.USE = "HAnimSegmentLineColorRGBA";
LineSet621.color = ColorRGBA623;

Shape620.geometry = LineSet621;

HAnimSegment616.children[1] = Shape620;

HAnimJoint615.children = new MFNode();

HAnimJoint615.children[0] = HAnimSegment616;

let HAnimJoint624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint624.name = "l_metacarpophalangeal_4";
HAnimJoint624.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint624.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint624.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint624.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment625 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment625.name = "l_carpal_proximal_phalanx_4";
HAnimSegment625.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform626 = browser.currentScene.createNode("Transform");
Transform626.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Transform627 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape628 = browser.currentScene.createNode("Shape");
Shape628.USE = "HAnimJointShape";
Transform627.children = new MFNode();

Transform627.children[0] = Shape628;

Transform626.children = new MFNode();

Transform626.children[0] = Transform627;

HAnimSegment625.children = new MFNode();

HAnimSegment625.children[0] = Transform626;

let Shape629 = browser.currentScene.createNode("Shape");
let LineSet630 = browser.currentScene.createNode("LineSet");
LineSet630.vertexCount = new MFInt32(new int[2]);
let Coordinate631 = browser.currentScene.createNode("Coordinate");
Coordinate631.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet630.coord = Coordinate631;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA632 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA632.USE = "HAnimSegmentLineColorRGBA";
LineSet630.color = ColorRGBA632;

Shape629.geometry = LineSet630;

HAnimSegment625.children[1] = Shape629;

HAnimJoint624.children = new MFNode();

HAnimJoint624.children[0] = HAnimSegment625;

let HAnimJoint633 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint633.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint633.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint633.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint633.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint633.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment634 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment634.name = "l_carpal_middle_phalanx_4";
HAnimSegment634.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform635 = browser.currentScene.createNode("Transform");
Transform635.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Transform636 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape637 = browser.currentScene.createNode("Shape");
Shape637.USE = "HAnimJointShape";
Transform636.children = new MFNode();

Transform636.children[0] = Shape637;

Transform635.children = new MFNode();

Transform635.children[0] = Transform636;

HAnimSegment634.children = new MFNode();

HAnimSegment634.children[0] = Transform635;

let Shape638 = browser.currentScene.createNode("Shape");
let LineSet639 = browser.currentScene.createNode("LineSet");
LineSet639.vertexCount = new MFInt32(new int[2]);
let Coordinate640 = browser.currentScene.createNode("Coordinate");
Coordinate640.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet639.coord = Coordinate640;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA641 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA641.USE = "HAnimSegmentLineColorRGBA";
LineSet639.color = ColorRGBA641;

Shape638.geometry = LineSet639;

HAnimSegment634.children[1] = Shape638;

let HAnimSite642 = browser.currentScene.createNode("HAnimSite");
HAnimSite642.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite642.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
let TouchSensor643 = browser.currentScene.createNode("TouchSensor");
TouchSensor643.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite642.children = new MFNode();

HAnimSite642.children[0] = TouchSensor643;

let Shape644 = browser.currentScene.createNode("Shape");
Shape644.USE = "HAnimSiteShape";
HAnimSite642.children[1] = Shape644;

HAnimSegment634.children[2] = HAnimSite642;

HAnimJoint633.children = new MFNode();

HAnimJoint633.children[0] = HAnimSegment634;

let HAnimJoint645 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint645.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint645.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint645.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint645.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint645.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint633.children[1] = HAnimJoint645;

HAnimJoint624.children[1] = HAnimJoint633;

HAnimJoint615.children[1] = HAnimJoint624;

HAnimJoint494.children[4] = HAnimJoint615;

let HAnimJoint646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint646.name = "l_carpometacarpal_5";
HAnimJoint646.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint646.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint646.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint646.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment647 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment647.name = "l_metacarpal_5";
HAnimSegment647.DEF = "hanim_l_metacarpal_5";
let Transform648 = browser.currentScene.createNode("Transform");
Transform648.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Transform649 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape650 = browser.currentScene.createNode("Shape");
Shape650.USE = "HAnimJointShape";
Transform649.children = new MFNode();

Transform649.children[0] = Shape650;

Transform648.children = new MFNode();

Transform648.children[0] = Transform649;

HAnimSegment647.children = new MFNode();

HAnimSegment647.children[0] = Transform648;

let Shape651 = browser.currentScene.createNode("Shape");
let LineSet652 = browser.currentScene.createNode("LineSet");
LineSet652.vertexCount = new MFInt32(new int[2]);
let Coordinate653 = browser.currentScene.createNode("Coordinate");
Coordinate653.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet652.coord = Coordinate653;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA654 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA654.USE = "HAnimSegmentLineColorRGBA";
LineSet652.color = ColorRGBA654;

Shape651.geometry = LineSet652;

HAnimSegment647.children[1] = Shape651;

HAnimJoint646.children = new MFNode();

HAnimJoint646.children[0] = HAnimSegment647;

let HAnimJoint655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint655.name = "l_metacarpophalangeal_5";
HAnimJoint655.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint655.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint655.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint655.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment656 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment656.name = "l_carpal_proximal_phalanx_5";
HAnimSegment656.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform657 = browser.currentScene.createNode("Transform");
Transform657.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Transform658 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape659 = browser.currentScene.createNode("Shape");
Shape659.USE = "HAnimJointShape";
Transform658.children = new MFNode();

Transform658.children[0] = Shape659;

Transform657.children = new MFNode();

Transform657.children[0] = Transform658;

HAnimSegment656.children = new MFNode();

HAnimSegment656.children[0] = Transform657;

let Shape660 = browser.currentScene.createNode("Shape");
let LineSet661 = browser.currentScene.createNode("LineSet");
LineSet661.vertexCount = new MFInt32(new int[2]);
let Coordinate662 = browser.currentScene.createNode("Coordinate");
Coordinate662.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet661.coord = Coordinate662;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA663 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA663.USE = "HAnimSegmentLineColorRGBA";
LineSet661.color = ColorRGBA663;

Shape660.geometry = LineSet661;

HAnimSegment656.children[1] = Shape660;

HAnimJoint655.children = new MFNode();

HAnimJoint655.children[0] = HAnimSegment656;

let HAnimJoint664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint664.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint664.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint664.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint664.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint664.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment665 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment665.name = "l_carpal_middle_phalanx_5";
HAnimSegment665.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform666 = browser.currentScene.createNode("Transform");
Transform666.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Transform667 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape668 = browser.currentScene.createNode("Shape");
Shape668.USE = "HAnimJointShape";
Transform667.children = new MFNode();

Transform667.children[0] = Shape668;

Transform666.children = new MFNode();

Transform666.children[0] = Transform667;

HAnimSegment665.children = new MFNode();

HAnimSegment665.children[0] = Transform666;

let Shape669 = browser.currentScene.createNode("Shape");
let LineSet670 = browser.currentScene.createNode("LineSet");
LineSet670.vertexCount = new MFInt32(new int[2]);
let Coordinate671 = browser.currentScene.createNode("Coordinate");
Coordinate671.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet670.coord = Coordinate671;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA672 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA672.USE = "HAnimSegmentLineColorRGBA";
LineSet670.color = ColorRGBA672;

Shape669.geometry = LineSet670;

HAnimSegment665.children[1] = Shape669;

let HAnimSite673 = browser.currentScene.createNode("HAnimSite");
HAnimSite673.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite673.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
let TouchSensor674 = browser.currentScene.createNode("TouchSensor");
TouchSensor674.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite673.children = new MFNode();

HAnimSite673.children[0] = TouchSensor674;

let Shape675 = browser.currentScene.createNode("Shape");
Shape675.USE = "HAnimSiteShape";
HAnimSite673.children[1] = Shape675;

HAnimSegment665.children[2] = HAnimSite673;

HAnimJoint664.children = new MFNode();

HAnimJoint664.children[0] = HAnimSegment665;

let HAnimJoint676 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint677.name = "r_sternoclavicular";
HAnimJoint677.DEF = "hanim_r_sternoclavicular";
HAnimJoint677.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint677.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint677.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment678 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment678.name = "r_clavicle";
HAnimSegment678.DEF = "hanim_r_clavicle";
let Transform679 = browser.currentScene.createNode("Transform");
Transform679.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let Transform680 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape681 = browser.currentScene.createNode("Shape");
Shape681.USE = "HAnimJointShape";
Transform680.children = new MFNode();

Transform680.children[0] = Shape681;

Transform679.children = new MFNode();

Transform679.children[0] = Transform680;

HAnimSegment678.children = new MFNode();

HAnimSegment678.children[0] = Transform679;

let Shape682 = browser.currentScene.createNode("Shape");
let LineSet683 = browser.currentScene.createNode("LineSet");
LineSet683.vertexCount = new MFInt32(new int[2]);
let Coordinate684 = browser.currentScene.createNode("Coordinate");
Coordinate684.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet683.coord = Coordinate684;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA685 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA685.USE = "HAnimSegmentLineColorRGBA";
LineSet683.color = ColorRGBA685;

Shape682.geometry = LineSet683;

HAnimSegment678.children[1] = Shape682;

HAnimJoint677.children = new MFNode();

HAnimJoint677.children[0] = HAnimSegment678;

let HAnimJoint686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint686.name = "r_acromioclavicular";
HAnimJoint686.DEF = "hanim_r_acromioclavicular";
HAnimJoint686.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint686.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint686.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment687 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment687.name = "r_scapula";
HAnimSegment687.DEF = "hanim_r_scapula";
let Transform688 = browser.currentScene.createNode("Transform");
Transform688.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let Transform689 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape690 = browser.currentScene.createNode("Shape");
Shape690.USE = "HAnimJointShape";
Transform689.children = new MFNode();

Transform689.children[0] = Shape690;

Transform688.children = new MFNode();

Transform688.children[0] = Transform689;

HAnimSegment687.children = new MFNode();

HAnimSegment687.children[0] = Transform688;

let Shape691 = browser.currentScene.createNode("Shape");
let LineSet692 = browser.currentScene.createNode("LineSet");
LineSet692.vertexCount = new MFInt32(new int[2]);
let Coordinate693 = browser.currentScene.createNode("Coordinate");
Coordinate693.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet692.coord = Coordinate693;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA694 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA694.USE = "HAnimSegmentLineColorRGBA";
LineSet692.color = ColorRGBA694;

Shape691.geometry = LineSet692;

HAnimSegment687.children[1] = Shape691;

let HAnimSite695 = browser.currentScene.createNode("HAnimSite");
HAnimSite695.name = "r_bideltoid_pt";
HAnimSite695.DEF = "hanim_r_bideltoid_pt";
let TouchSensor696 = browser.currentScene.createNode("TouchSensor");
TouchSensor696.description = "HAnimSite r_bideltoid_pt";
HAnimSite695.children = new MFNode();

HAnimSite695.children[0] = TouchSensor696;

let Shape697 = browser.currentScene.createNode("Shape");
Shape697.USE = "HAnimSiteShape";
HAnimSite695.children[1] = Shape697;

HAnimSegment687.children[2] = HAnimSite695;

let HAnimSite698 = browser.currentScene.createNode("HAnimSite");
HAnimSite698.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite698.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite698.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor699 = browser.currentScene.createNode("TouchSensor");
TouchSensor699.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite698.children = new MFNode();

HAnimSite698.children[0] = TouchSensor699;

let Shape700 = browser.currentScene.createNode("Shape");
Shape700.USE = "HAnimSiteShape";
HAnimSite698.children[1] = Shape700;

HAnimSegment687.children[3] = HAnimSite698;

HAnimJoint686.children = new MFNode();

HAnimJoint686.children[0] = HAnimSegment687;

let HAnimJoint701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint701.name = "r_shoulder";
HAnimJoint701.DEF = "hanim_r_shoulder";
HAnimJoint701.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint701.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint701.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment702 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment702.name = "r_upperarm";
HAnimSegment702.DEF = "hanim_r_upperarm";
let Transform703 = browser.currentScene.createNode("Transform");
Transform703.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Transform704 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape705 = browser.currentScene.createNode("Shape");
Shape705.USE = "HAnimJointShape";
Transform704.children = new MFNode();

Transform704.children[0] = Shape705;

Transform703.children = new MFNode();

Transform703.children[0] = Transform704;

HAnimSegment702.children = new MFNode();

HAnimSegment702.children[0] = Transform703;

let Shape706 = browser.currentScene.createNode("Shape");
let LineSet707 = browser.currentScene.createNode("LineSet");
LineSet707.vertexCount = new MFInt32(new int[2]);
let Coordinate708 = browser.currentScene.createNode("Coordinate");
Coordinate708.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet707.coord = Coordinate708;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA709 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA";
LineSet707.color = ColorRGBA709;

Shape706.geometry = LineSet707;

HAnimSegment702.children[1] = Shape706;

let HAnimSite710 = browser.currentScene.createNode("HAnimSite");
HAnimSite710.name = "r_humeral_medial_epicondyles_pt";
HAnimSite710.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite710.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor711 = browser.currentScene.createNode("TouchSensor");
TouchSensor711.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite710.children = new MFNode();

HAnimSite710.children[0] = TouchSensor711;

let Shape712 = browser.currentScene.createNode("Shape");
Shape712.USE = "HAnimSiteShape";
HAnimSite710.children[1] = Shape712;

HAnimSegment702.children[2] = HAnimSite710;

let HAnimSite713 = browser.currentScene.createNode("HAnimSite");
HAnimSite713.name = "r_olecranon_pt";
HAnimSite713.DEF = "hanim_r_olecranon_pt";
HAnimSite713.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor714 = browser.currentScene.createNode("TouchSensor");
TouchSensor714.description = "HAnimSite r_olecranon_pt";
HAnimSite713.children = new MFNode();

HAnimSite713.children[0] = TouchSensor714;

let Shape715 = browser.currentScene.createNode("Shape");
Shape715.USE = "HAnimSiteShape";
HAnimSite713.children[1] = Shape715;

HAnimSegment702.children[3] = HAnimSite713;

let HAnimSite716 = browser.currentScene.createNode("HAnimSite");
HAnimSite716.name = "r_radial_styloid_pt";
HAnimSite716.DEF = "hanim_r_radial_styloid_pt";
HAnimSite716.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor717 = browser.currentScene.createNode("TouchSensor");
TouchSensor717.description = "HAnimSite r_radial_styloid_pt";
HAnimSite716.children = new MFNode();

HAnimSite716.children[0] = TouchSensor717;

let Shape718 = browser.currentScene.createNode("Shape");
Shape718.USE = "HAnimSiteShape";
HAnimSite716.children[1] = Shape718;

HAnimSegment702.children[4] = HAnimSite716;

let HAnimSite719 = browser.currentScene.createNode("HAnimSite");
HAnimSite719.name = "r_radiale_pt";
HAnimSite719.DEF = "hanim_r_radiale_pt";
HAnimSite719.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor720 = browser.currentScene.createNode("TouchSensor");
TouchSensor720.description = "HAnimSite r_radiale_pt";
HAnimSite719.children = new MFNode();

HAnimSite719.children[0] = TouchSensor720;

let Shape721 = browser.currentScene.createNode("Shape");
Shape721.USE = "HAnimSiteShape";
HAnimSite719.children[1] = Shape721;

HAnimSegment702.children[5] = HAnimSite719;

HAnimJoint701.children = new MFNode();

HAnimJoint701.children[0] = HAnimSegment702;

let HAnimJoint722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint722.name = "r_elbow";
HAnimJoint722.DEF = "hanim_r_elbow";
HAnimJoint722.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint722.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint722.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment723 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment723.name = "r_forearm";
HAnimSegment723.DEF = "hanim_r_forearm";
let Transform724 = browser.currentScene.createNode("Transform");
Transform724.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Transform725 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape726 = browser.currentScene.createNode("Shape");
Shape726.USE = "HAnimJointShape";
Transform725.children = new MFNode();

Transform725.children[0] = Shape726;

Transform724.children = new MFNode();

Transform724.children[0] = Transform725;

HAnimSegment723.children = new MFNode();

HAnimSegment723.children[0] = Transform724;

let Shape727 = browser.currentScene.createNode("Shape");
let LineSet728 = browser.currentScene.createNode("LineSet");
LineSet728.vertexCount = new MFInt32(new int[2]);
let Coordinate729 = browser.currentScene.createNode("Coordinate");
Coordinate729.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet728.coord = Coordinate729;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA730 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA730.USE = "HAnimSegmentLineColorRGBA";
LineSet728.color = ColorRGBA730;

Shape727.geometry = LineSet728;

HAnimSegment723.children[1] = Shape727;

let HAnimSite731 = browser.currentScene.createNode("HAnimSite");
HAnimSite731.name = "r_ulnar_styloid_pt";
HAnimSite731.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite731.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor732 = browser.currentScene.createNode("TouchSensor");
TouchSensor732.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite731.children = new MFNode();

HAnimSite731.children[0] = TouchSensor732;

let Shape733 = browser.currentScene.createNode("Shape");
Shape733.USE = "HAnimSiteShape";
HAnimSite731.children[1] = Shape733;

HAnimSegment723.children[2] = HAnimSite731;

HAnimJoint722.children = new MFNode();

HAnimJoint722.children[0] = HAnimSegment723;

let HAnimJoint734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint734.name = "r_radiocarpal";
HAnimJoint734.DEF = "hanim_r_radiocarpal";
HAnimJoint734.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint734.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint734.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment735 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment735.name = "r_carpal";
HAnimSegment735.DEF = "hanim_r_carpal";
let Transform736 = browser.currentScene.createNode("Transform");
Transform736.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform736.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform736.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
let Transform737 = browser.currentScene.createNode("Transform");
Transform737.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
let Shape738 = browser.currentScene.createNode("Shape");
Shape738.USE = "HAnimJointShape";
Transform737.children = new MFNode();

Transform737.children[0] = Shape738;

Transform736.children = new MFNode();

Transform736.children[0] = Transform737;

HAnimSegment735.children = new MFNode();

HAnimSegment735.children[0] = Transform736;

let Shape739 = browser.currentScene.createNode("Shape");
let LineSet740 = browser.currentScene.createNode("LineSet");
LineSet740.vertexCount = new MFInt32(new int[2]);
let Coordinate741 = browser.currentScene.createNode("Coordinate");
Coordinate741.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet740.coord = Coordinate741;

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
let ColorRGBA742 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA742.USE = "HAnimSegmentLineColorRGBA";
LineSet740.color = ColorRGBA742;

Shape739.geometry = LineSet740;

HAnimSegment735.children[1] = Shape739;

let Shape743 = browser.currentScene.createNode("Shape");
let LineSet744 = browser.currentScene.createNode("LineSet");
LineSet744.vertexCount = new MFInt32(new int[2]);
let Coordinate745 = browser.currentScene.createNode("Coordinate");
Coordinate745.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet744.coord = Coordinate745;

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
let ColorRGBA746 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA746.USE = "HAnimSegmentLineColorRGBA";
LineSet744.color = ColorRGBA746;

Shape743.geometry = LineSet744;

HAnimSegment735.children[2] = Shape743;

let HAnimSite747 = browser.currentScene.createNode("HAnimSite");
HAnimSite747.name = "r_metacarpal_phalanx_2_pt";
HAnimSite747.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite747.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor748 = browser.currentScene.createNode("TouchSensor");
TouchSensor748.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite747.children = new MFNode();

HAnimSite747.children[0] = TouchSensor748;

let Shape749 = browser.currentScene.createNode("Shape");
Shape749.USE = "HAnimSiteShape";
HAnimSite747.children[1] = Shape749;

HAnimSegment735.children[3] = HAnimSite747;

let Shape750 = browser.currentScene.createNode("Shape");
let LineSet751 = browser.currentScene.createNode("LineSet");
LineSet751.vertexCount = new MFInt32(new int[2]);
let Coordinate752 = browser.currentScene.createNode("Coordinate");
Coordinate752.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet751.coord = Coordinate752;

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
let ColorRGBA753 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA753.USE = "HAnimSegmentLineColorRGBA";
LineSet751.color = ColorRGBA753;

Shape750.geometry = LineSet751;

HAnimSegment735.children[4] = Shape750;

let HAnimSite754 = browser.currentScene.createNode("HAnimSite");
HAnimSite754.name = "r_metacarpal_phalanx_3_pt";
HAnimSite754.DEF = "hanim_r_metacarpal_phalanx_3_pt";
let TouchSensor755 = browser.currentScene.createNode("TouchSensor");
TouchSensor755.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite754.children = new MFNode();

HAnimSite754.children[0] = TouchSensor755;

let Shape756 = browser.currentScene.createNode("Shape");
Shape756.USE = "HAnimSiteShape";
HAnimSite754.children[1] = Shape756;

HAnimSegment735.children[5] = HAnimSite754;

let Shape757 = browser.currentScene.createNode("Shape");
let LineSet758 = browser.currentScene.createNode("LineSet");
LineSet758.vertexCount = new MFInt32(new int[2]);
let Coordinate759 = browser.currentScene.createNode("Coordinate");
Coordinate759.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet758.coord = Coordinate759;

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
let ColorRGBA760 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA760.USE = "HAnimSegmentLineColorRGBA";
LineSet758.color = ColorRGBA760;

Shape757.geometry = LineSet758;

HAnimSegment735.children[6] = Shape757;

let Shape761 = browser.currentScene.createNode("Shape");
let LineSet762 = browser.currentScene.createNode("LineSet");
LineSet762.vertexCount = new MFInt32(new int[2]);
let Coordinate763 = browser.currentScene.createNode("Coordinate");
Coordinate763.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet762.coord = Coordinate763;

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
let ColorRGBA764 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA764.USE = "HAnimSegmentLineColorRGBA";
LineSet762.color = ColorRGBA764;

Shape761.geometry = LineSet762;

HAnimSegment735.children[7] = Shape761;

let HAnimSite765 = browser.currentScene.createNode("HAnimSite");
HAnimSite765.name = "r_metacarpal_phalanx_5_pt";
HAnimSite765.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite765.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor766 = browser.currentScene.createNode("TouchSensor");
TouchSensor766.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite765.children = new MFNode();

HAnimSite765.children[0] = TouchSensor766;

let Shape767 = browser.currentScene.createNode("Shape");
Shape767.USE = "HAnimSiteShape";
HAnimSite765.children[1] = Shape767;

HAnimSegment735.children[8] = HAnimSite765;

HAnimJoint734.children = new MFNode();

HAnimJoint734.children[0] = HAnimSegment735;

let HAnimJoint768 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint768.name = "r_carpometacarpal_1";
HAnimJoint768.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint768.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint768.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint768.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment769.name = "r_metacarpal_1";
HAnimSegment769.DEF = "hanim_r_metacarpal_1";
let Transform770 = browser.currentScene.createNode("Transform");
Transform770.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
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
Coordinate775.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet774.coord = Coordinate775;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA776 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA776.USE = "HAnimSegmentLineColorRGBA";
LineSet774.color = ColorRGBA776;

Shape773.geometry = LineSet774;

HAnimSegment769.children[1] = Shape773;

HAnimJoint768.children = new MFNode();

HAnimJoint768.children[0] = HAnimSegment769;

let HAnimJoint777 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint777.name = "r_metacarpophalangeal_1";
HAnimJoint777.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint777.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint777.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint777.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment778.name = "r_carpal_proximal_phalanx_1";
HAnimSegment778.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform779 = browser.currentScene.createNode("Transform");
Transform779.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
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
Coordinate784.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet783.coord = Coordinate784;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA785 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA785.USE = "HAnimSegmentLineColorRGBA";
LineSet783.color = ColorRGBA785;

Shape782.geometry = LineSet783;

HAnimSegment778.children[1] = Shape782;

let HAnimSite786 = browser.currentScene.createNode("HAnimSite");
HAnimSite786.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite786.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
let TouchSensor787 = browser.currentScene.createNode("TouchSensor");
TouchSensor787.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = TouchSensor787;

let Shape788 = browser.currentScene.createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786.children[1] = Shape788;

HAnimSegment778.children[2] = HAnimSite786;

HAnimJoint777.children = new MFNode();

HAnimJoint777.children[0] = HAnimSegment778;

let HAnimJoint789 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint789.name = "r_carpal_interphalangeal_1";
HAnimJoint789.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint789.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint789.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint789.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint777.children[1] = HAnimJoint789;

HAnimJoint768.children[1] = HAnimJoint777;

HAnimJoint734.children[1] = HAnimJoint768;

let HAnimJoint790 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint790.name = "r_carpometacarpal_2";
HAnimJoint790.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint790.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint790.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint790.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment791.name = "r_metacarpal_2";
HAnimSegment791.DEF = "hanim_r_metacarpal_2";
let Transform792 = browser.currentScene.createNode("Transform");
Transform792.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let Transform793 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape794 = browser.currentScene.createNode("Shape");
Shape794.USE = "HAnimJointShape";
Transform793.children = new MFNode();

Transform793.children[0] = Shape794;

Transform792.children = new MFNode();

Transform792.children[0] = Transform793;

HAnimSegment791.children = new MFNode();

HAnimSegment791.children[0] = Transform792;

let Shape795 = browser.currentScene.createNode("Shape");
let LineSet796 = browser.currentScene.createNode("LineSet");
LineSet796.vertexCount = new MFInt32(new int[2]);
let Coordinate797 = browser.currentScene.createNode("Coordinate");
Coordinate797.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet796.coord = Coordinate797;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA798 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA798.USE = "HAnimSegmentLineColorRGBA";
LineSet796.color = ColorRGBA798;

Shape795.geometry = LineSet796;

HAnimSegment791.children[1] = Shape795;

HAnimJoint790.children = new MFNode();

HAnimJoint790.children[0] = HAnimSegment791;

let HAnimJoint799 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint799.name = "r_metacarpophalangeal_2";
HAnimJoint799.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint799.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint799.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint799.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment800.name = "r_carpal_proximal_phalanx_2";
HAnimSegment800.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform801 = browser.currentScene.createNode("Transform");
Transform801.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let Transform802 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape803 = browser.currentScene.createNode("Shape");
Shape803.USE = "HAnimJointShape";
Transform802.children = new MFNode();

Transform802.children[0] = Shape803;

Transform801.children = new MFNode();

Transform801.children[0] = Transform802;

HAnimSegment800.children = new MFNode();

HAnimSegment800.children[0] = Transform801;

let Shape804 = browser.currentScene.createNode("Shape");
let LineSet805 = browser.currentScene.createNode("LineSet");
LineSet805.vertexCount = new MFInt32(new int[2]);
let Coordinate806 = browser.currentScene.createNode("Coordinate");
Coordinate806.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet805.coord = Coordinate806;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA807 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA807.USE = "HAnimSegmentLineColorRGBA";
LineSet805.color = ColorRGBA807;

Shape804.geometry = LineSet805;

HAnimSegment800.children[1] = Shape804;

HAnimJoint799.children = new MFNode();

HAnimJoint799.children[0] = HAnimSegment800;

let HAnimJoint808 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint808.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint808.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint808.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint808.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint808.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment809.name = "r_carpal_middle_phalanx_2";
HAnimSegment809.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform810 = browser.currentScene.createNode("Transform");
Transform810.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let Transform811 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape812 = browser.currentScene.createNode("Shape");
Shape812.USE = "HAnimJointShape";
Transform811.children = new MFNode();

Transform811.children[0] = Shape812;

Transform810.children = new MFNode();

Transform810.children[0] = Transform811;

HAnimSegment809.children = new MFNode();

HAnimSegment809.children[0] = Transform810;

let Shape813 = browser.currentScene.createNode("Shape");
let LineSet814 = browser.currentScene.createNode("LineSet");
LineSet814.vertexCount = new MFInt32(new int[2]);
let Coordinate815 = browser.currentScene.createNode("Coordinate");
Coordinate815.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet814.coord = Coordinate815;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA816 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA816.USE = "HAnimSegmentLineColorRGBA";
LineSet814.color = ColorRGBA816;

Shape813.geometry = LineSet814;

HAnimSegment809.children[1] = Shape813;

let HAnimSite817 = browser.currentScene.createNode("HAnimSite");
HAnimSite817.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite817.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
let TouchSensor818 = browser.currentScene.createNode("TouchSensor");
TouchSensor818.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = TouchSensor818;

let Shape819 = browser.currentScene.createNode("Shape");
Shape819.USE = "HAnimSiteShape";
HAnimSite817.children[1] = Shape819;

HAnimSegment809.children[2] = HAnimSite817;

let HAnimSite820 = browser.currentScene.createNode("HAnimSite");
HAnimSite820.name = "r_dactylion_pt";
HAnimSite820.DEF = "hanim_r_dactylion_pt";
HAnimSite820.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor821 = browser.currentScene.createNode("TouchSensor");
TouchSensor821.description = "HAnimSite r_dactylion_pt";
HAnimSite820.children = new MFNode();

HAnimSite820.children[0] = TouchSensor821;

let Shape822 = browser.currentScene.createNode("Shape");
Shape822.USE = "HAnimSiteShape";
HAnimSite820.children[1] = Shape822;

HAnimSegment809.children[3] = HAnimSite820;

HAnimJoint808.children = new MFNode();

HAnimJoint808.children[0] = HAnimSegment809;

let HAnimJoint823 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint823.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint823.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint823.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint823.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint823.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint808.children[1] = HAnimJoint823;

HAnimJoint799.children[1] = HAnimJoint808;

HAnimJoint790.children[1] = HAnimJoint799;

HAnimJoint734.children[2] = HAnimJoint790;

let HAnimJoint824 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint824.name = "r_carpometacarpal_3";
HAnimJoint824.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint824.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint824.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint824.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment825.name = "r_metacarpal_3";
HAnimSegment825.DEF = "hanim_r_metacarpal_3";
let Transform826 = browser.currentScene.createNode("Transform");
Transform826.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let Transform827 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape828 = browser.currentScene.createNode("Shape");
Shape828.USE = "HAnimJointShape";
Transform827.children = new MFNode();

Transform827.children[0] = Shape828;

Transform826.children = new MFNode();

Transform826.children[0] = Transform827;

HAnimSegment825.children = new MFNode();

HAnimSegment825.children[0] = Transform826;

let Shape829 = browser.currentScene.createNode("Shape");
let LineSet830 = browser.currentScene.createNode("LineSet");
LineSet830.vertexCount = new MFInt32(new int[2]);
let Coordinate831 = browser.currentScene.createNode("Coordinate");
Coordinate831.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet830.coord = Coordinate831;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA832 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA832.USE = "HAnimSegmentLineColorRGBA";
LineSet830.color = ColorRGBA832;

Shape829.geometry = LineSet830;

HAnimSegment825.children[1] = Shape829;

HAnimJoint824.children = new MFNode();

HAnimJoint824.children[0] = HAnimSegment825;

let HAnimJoint833 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint833.name = "r_metacarpophalangeal_3";
HAnimJoint833.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint833.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint833.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint833.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment834.name = "r_carpal_proximal_phalanx_3";
HAnimSegment834.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform835 = browser.currentScene.createNode("Transform");
Transform835.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let Transform836 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape837 = browser.currentScene.createNode("Shape");
Shape837.USE = "HAnimJointShape";
Transform836.children = new MFNode();

Transform836.children[0] = Shape837;

Transform835.children = new MFNode();

Transform835.children[0] = Transform836;

HAnimSegment834.children = new MFNode();

HAnimSegment834.children[0] = Transform835;

let Shape838 = browser.currentScene.createNode("Shape");
let LineSet839 = browser.currentScene.createNode("LineSet");
LineSet839.vertexCount = new MFInt32(new int[2]);
let Coordinate840 = browser.currentScene.createNode("Coordinate");
Coordinate840.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet839.coord = Coordinate840;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA841 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA841.USE = "HAnimSegmentLineColorRGBA";
LineSet839.color = ColorRGBA841;

Shape838.geometry = LineSet839;

HAnimSegment834.children[1] = Shape838;

HAnimJoint833.children = new MFNode();

HAnimJoint833.children[0] = HAnimSegment834;

let HAnimJoint842 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint842.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint842.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint842.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint842.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint842.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment843.name = "r_carpal_middle_phalanx_3";
HAnimSegment843.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform844 = browser.currentScene.createNode("Transform");
Transform844.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let Transform845 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape846 = browser.currentScene.createNode("Shape");
Shape846.USE = "HAnimJointShape";
Transform845.children = new MFNode();

Transform845.children[0] = Shape846;

Transform844.children = new MFNode();

Transform844.children[0] = Transform845;

HAnimSegment843.children = new MFNode();

HAnimSegment843.children[0] = Transform844;

let Shape847 = browser.currentScene.createNode("Shape");
let LineSet848 = browser.currentScene.createNode("LineSet");
LineSet848.vertexCount = new MFInt32(new int[2]);
let Coordinate849 = browser.currentScene.createNode("Coordinate");
Coordinate849.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet848.coord = Coordinate849;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA850 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA850.USE = "HAnimSegmentLineColorRGBA";
LineSet848.color = ColorRGBA850;

Shape847.geometry = LineSet848;

HAnimSegment843.children[1] = Shape847;

let HAnimSite851 = browser.currentScene.createNode("HAnimSite");
HAnimSite851.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite851.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
let TouchSensor852 = browser.currentScene.createNode("TouchSensor");
TouchSensor852.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite851.children = new MFNode();

HAnimSite851.children[0] = TouchSensor852;

let Shape853 = browser.currentScene.createNode("Shape");
Shape853.USE = "HAnimSiteShape";
HAnimSite851.children[1] = Shape853;

HAnimSegment843.children[2] = HAnimSite851;

HAnimJoint842.children = new MFNode();

HAnimJoint842.children[0] = HAnimSegment843;

let HAnimJoint854 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint854.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint854.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint854.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint854.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint854.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint842.children[1] = HAnimJoint854;

HAnimJoint833.children[1] = HAnimJoint842;

HAnimJoint824.children[1] = HAnimJoint833;

HAnimJoint734.children[3] = HAnimJoint824;

let HAnimJoint855 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint855.name = "r_carpometacarpal_4";
HAnimJoint855.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint855.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint855.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint855.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment856.name = "r_metacarpal_4";
HAnimSegment856.DEF = "hanim_r_metacarpal_4";
let Transform857 = browser.currentScene.createNode("Transform");
Transform857.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let Transform858 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape859 = browser.currentScene.createNode("Shape");
Shape859.USE = "HAnimJointShape";
Transform858.children = new MFNode();

Transform858.children[0] = Shape859;

Transform857.children = new MFNode();

Transform857.children[0] = Transform858;

HAnimSegment856.children = new MFNode();

HAnimSegment856.children[0] = Transform857;

let Shape860 = browser.currentScene.createNode("Shape");
let LineSet861 = browser.currentScene.createNode("LineSet");
LineSet861.vertexCount = new MFInt32(new int[2]);
let Coordinate862 = browser.currentScene.createNode("Coordinate");
Coordinate862.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet861.coord = Coordinate862;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA863 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA863.USE = "HAnimSegmentLineColorRGBA";
LineSet861.color = ColorRGBA863;

Shape860.geometry = LineSet861;

HAnimSegment856.children[1] = Shape860;

HAnimJoint855.children = new MFNode();

HAnimJoint855.children[0] = HAnimSegment856;

let HAnimJoint864 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint864.name = "r_metacarpophalangeal_4";
HAnimJoint864.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint864.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint864.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint864.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment865.name = "r_carpal_proximal_phalanx_4";
HAnimSegment865.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform866 = browser.currentScene.createNode("Transform");
Transform866.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let Transform867 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape868 = browser.currentScene.createNode("Shape");
Shape868.USE = "HAnimJointShape";
Transform867.children = new MFNode();

Transform867.children[0] = Shape868;

Transform866.children = new MFNode();

Transform866.children[0] = Transform867;

HAnimSegment865.children = new MFNode();

HAnimSegment865.children[0] = Transform866;

let Shape869 = browser.currentScene.createNode("Shape");
let LineSet870 = browser.currentScene.createNode("LineSet");
LineSet870.vertexCount = new MFInt32(new int[2]);
let Coordinate871 = browser.currentScene.createNode("Coordinate");
Coordinate871.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet870.coord = Coordinate871;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA872 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSegmentLineColorRGBA";
LineSet870.color = ColorRGBA872;

Shape869.geometry = LineSet870;

HAnimSegment865.children[1] = Shape869;

HAnimJoint864.children = new MFNode();

HAnimJoint864.children[0] = HAnimSegment865;

let HAnimJoint873 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint873.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint873.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint873.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint873.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint873.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment874 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment874.name = "r_carpal_middle_phalanx_4";
HAnimSegment874.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform875 = browser.currentScene.createNode("Transform");
Transform875.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let Transform876 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape877 = browser.currentScene.createNode("Shape");
Shape877.USE = "HAnimJointShape";
Transform876.children = new MFNode();

Transform876.children[0] = Shape877;

Transform875.children = new MFNode();

Transform875.children[0] = Transform876;

HAnimSegment874.children = new MFNode();

HAnimSegment874.children[0] = Transform875;

let Shape878 = browser.currentScene.createNode("Shape");
let LineSet879 = browser.currentScene.createNode("LineSet");
LineSet879.vertexCount = new MFInt32(new int[2]);
let Coordinate880 = browser.currentScene.createNode("Coordinate");
Coordinate880.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet879.coord = Coordinate880;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA881 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA881.USE = "HAnimSegmentLineColorRGBA";
LineSet879.color = ColorRGBA881;

Shape878.geometry = LineSet879;

HAnimSegment874.children[1] = Shape878;

let HAnimSite882 = browser.currentScene.createNode("HAnimSite");
HAnimSite882.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite882.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
let TouchSensor883 = browser.currentScene.createNode("TouchSensor");
TouchSensor883.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite882.children = new MFNode();

HAnimSite882.children[0] = TouchSensor883;

let Shape884 = browser.currentScene.createNode("Shape");
Shape884.USE = "HAnimSiteShape";
HAnimSite882.children[1] = Shape884;

HAnimSegment874.children[2] = HAnimSite882;

HAnimJoint873.children = new MFNode();

HAnimJoint873.children[0] = HAnimSegment874;

let HAnimJoint885 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint885.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint885.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint885.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint885.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint885.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint873.children[1] = HAnimJoint885;

HAnimJoint864.children[1] = HAnimJoint873;

HAnimJoint855.children[1] = HAnimJoint864;

HAnimJoint734.children[4] = HAnimJoint855;

let HAnimJoint886 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint886.name = "r_carpometacarpal_5";
HAnimJoint886.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint886.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint886.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint886.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment887 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment887.name = "r_metacarpal_5";
HAnimSegment887.DEF = "hanim_r_metacarpal_5";
let Transform888 = browser.currentScene.createNode("Transform");
Transform888.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let Transform889 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape890 = browser.currentScene.createNode("Shape");
Shape890.USE = "HAnimJointShape";
Transform889.children = new MFNode();

Transform889.children[0] = Shape890;

Transform888.children = new MFNode();

Transform888.children[0] = Transform889;

HAnimSegment887.children = new MFNode();

HAnimSegment887.children[0] = Transform888;

let Shape891 = browser.currentScene.createNode("Shape");
let LineSet892 = browser.currentScene.createNode("LineSet");
LineSet892.vertexCount = new MFInt32(new int[2]);
let Coordinate893 = browser.currentScene.createNode("Coordinate");
Coordinate893.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet892.coord = Coordinate893;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA894 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA894.USE = "HAnimSegmentLineColorRGBA";
LineSet892.color = ColorRGBA894;

Shape891.geometry = LineSet892;

HAnimSegment887.children[1] = Shape891;

HAnimJoint886.children = new MFNode();

HAnimJoint886.children[0] = HAnimSegment887;

let HAnimJoint895 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint895.name = "r_metacarpophalangeal_5";
HAnimJoint895.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint895.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint895.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint895.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment896 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment896.name = "r_carpal_proximal_phalanx_5";
HAnimSegment896.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform897 = browser.currentScene.createNode("Transform");
Transform897.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let Transform898 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape899 = browser.currentScene.createNode("Shape");
Shape899.USE = "HAnimJointShape";
Transform898.children = new MFNode();

Transform898.children[0] = Shape899;

Transform897.children = new MFNode();

Transform897.children[0] = Transform898;

HAnimSegment896.children = new MFNode();

HAnimSegment896.children[0] = Transform897;

let Shape900 = browser.currentScene.createNode("Shape");
let LineSet901 = browser.currentScene.createNode("LineSet");
LineSet901.vertexCount = new MFInt32(new int[2]);
let Coordinate902 = browser.currentScene.createNode("Coordinate");
Coordinate902.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet901.coord = Coordinate902;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA903 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA903.USE = "HAnimSegmentLineColorRGBA";
LineSet901.color = ColorRGBA903;

Shape900.geometry = LineSet901;

HAnimSegment896.children[1] = Shape900;

HAnimJoint895.children = new MFNode();

HAnimJoint895.children[0] = HAnimSegment896;

let HAnimJoint904 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint904.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint904.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint904.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint904.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint904.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment905 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment905.name = "r_carpal_middle_phalanx_5";
HAnimSegment905.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform906 = browser.currentScene.createNode("Transform");
Transform906.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let Transform907 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape908 = browser.currentScene.createNode("Shape");
Shape908.USE = "HAnimJointShape";
Transform907.children = new MFNode();

Transform907.children[0] = Shape908;

Transform906.children = new MFNode();

Transform906.children[0] = Transform907;

HAnimSegment905.children = new MFNode();

HAnimSegment905.children[0] = Transform906;

let Shape909 = browser.currentScene.createNode("Shape");
let LineSet910 = browser.currentScene.createNode("LineSet");
LineSet910.vertexCount = new MFInt32(new int[2]);
let Coordinate911 = browser.currentScene.createNode("Coordinate");
Coordinate911.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet910.coord = Coordinate911;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA912 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA912.USE = "HAnimSegmentLineColorRGBA";
LineSet910.color = ColorRGBA912;

Shape909.geometry = LineSet910;

HAnimSegment905.children[1] = Shape909;

let HAnimSite913 = browser.currentScene.createNode("HAnimSite");
HAnimSite913.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite913.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
let TouchSensor914 = browser.currentScene.createNode("TouchSensor");
TouchSensor914.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite913.children = new MFNode();

HAnimSite913.children[0] = TouchSensor914;

let Shape915 = browser.currentScene.createNode("Shape");
Shape915.USE = "HAnimSiteShape";
HAnimSite913.children[1] = Shape915;

HAnimSegment905.children[2] = HAnimSite913;

HAnimJoint904.children = new MFNode();

HAnimJoint904.children[0] = HAnimSegment905;

let HAnimJoint916 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint917 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint917.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint917;

let HAnimJoint918 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint918.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint918;

let HAnimJoint919 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint919.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint919;

let HAnimJoint920 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint920.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint920;

let HAnimJoint921 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint921.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint921;

let HAnimJoint922 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint922.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[7] = HAnimJoint922;

let HAnimJoint923 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint923.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[8] = HAnimJoint923;

let HAnimJoint924 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint924.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[9] = HAnimJoint924;

let HAnimJoint925 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint925.USE = "hanim_r_hip";
HAnimHumanoid43.joints[10] = HAnimJoint925;

let HAnimJoint926 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint926.USE = "hanim_r_knee";
HAnimHumanoid43.joints[11] = HAnimJoint926;

let HAnimJoint927 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint927.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[12] = HAnimJoint927;

let HAnimJoint928 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint928.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint928;

let HAnimJoint929 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint929.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint929;

let HAnimJoint930 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint930.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint930;

let HAnimJoint931 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint931.USE = "hanim_vl5";
HAnimHumanoid43.joints[16] = HAnimJoint931;

let HAnimJoint932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint932.USE = "hanim_vl3";
HAnimHumanoid43.joints[17] = HAnimJoint932;

let HAnimJoint933 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint933.USE = "hanim_vl1";
HAnimHumanoid43.joints[18] = HAnimJoint933;

let HAnimJoint934 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint934.USE = "hanim_vt10";
HAnimHumanoid43.joints[19] = HAnimJoint934;

let HAnimJoint935 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint935.USE = "hanim_vt6";
HAnimHumanoid43.joints[20] = HAnimJoint935;

let HAnimJoint936 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint936.USE = "hanim_vt1";
HAnimHumanoid43.joints[21] = HAnimJoint936;

let HAnimJoint937 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint937.USE = "hanim_vc4";
HAnimHumanoid43.joints[22] = HAnimJoint937;

let HAnimJoint938 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint938.USE = "hanim_vc2";
HAnimHumanoid43.joints[23] = HAnimJoint938;

let HAnimJoint939 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint939.USE = "hanim_skullbase";
HAnimHumanoid43.joints[24] = HAnimJoint939;

let HAnimJoint940 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint940.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[25] = HAnimJoint940;

let HAnimJoint941 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint941.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[26] = HAnimJoint941;

let HAnimJoint942 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint942.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[27] = HAnimJoint942;

let HAnimJoint943 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint943.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[28] = HAnimJoint943;

let HAnimJoint944 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint944.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[29] = HAnimJoint944;

let HAnimJoint945 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint945.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[30] = HAnimJoint945;

let HAnimJoint946 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint946.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[31] = HAnimJoint946;

let HAnimJoint947 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint947.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[32] = HAnimJoint947;

let HAnimJoint948 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint948.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[33] = HAnimJoint948;

let HAnimJoint949 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint949.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[34] = HAnimJoint949;

let HAnimJoint950 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint950.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[35] = HAnimJoint950;

let HAnimJoint951 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint951.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[36] = HAnimJoint951;

let HAnimJoint952 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint952.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[37] = HAnimJoint952;

let HAnimJoint953 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint953.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[38] = HAnimJoint953;

let HAnimJoint954 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint954.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[39] = HAnimJoint954;

let HAnimJoint955 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint955.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[40] = HAnimJoint955;

let HAnimJoint956 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint956.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[41] = HAnimJoint956;

let HAnimJoint957 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint957.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[42] = HAnimJoint957;

let HAnimJoint958 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint958.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[43] = HAnimJoint958;

let HAnimJoint959 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint959.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[44] = HAnimJoint959;

let HAnimJoint960 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint960.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[45] = HAnimJoint960;

let HAnimJoint961 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint961.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[46] = HAnimJoint961;

let HAnimJoint962 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint962.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[47] = HAnimJoint962;

let HAnimJoint963 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint963.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[48] = HAnimJoint963;

let HAnimJoint964 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint964.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[49] = HAnimJoint964;

let HAnimJoint965 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint965.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[50] = HAnimJoint965;

let HAnimJoint966 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint966.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[51] = HAnimJoint966;

let HAnimJoint967 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint967.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[52] = HAnimJoint967;

let HAnimJoint968 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint968.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[53] = HAnimJoint968;

let HAnimJoint969 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint969.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[54] = HAnimJoint969;

let HAnimJoint970 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint970.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[55] = HAnimJoint970;

let HAnimJoint971 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint971.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[56] = HAnimJoint971;

let HAnimJoint972 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint972.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[57] = HAnimJoint972;

let HAnimJoint973 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint973.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[58] = HAnimJoint973;

let HAnimJoint974 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint974.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[59] = HAnimJoint974;

let HAnimJoint975 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint975.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[60] = HAnimJoint975;

let HAnimJoint976 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint976.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[61] = HAnimJoint976;

let HAnimJoint977 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint977.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[62] = HAnimJoint977;

let HAnimJoint978 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint978.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[63] = HAnimJoint978;

let HAnimJoint979 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint979.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[64] = HAnimJoint979;

let HAnimJoint980 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint980.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[65] = HAnimJoint980;

let HAnimJoint981 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint981.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[66] = HAnimJoint981;

let HAnimJoint982 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint982.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[67] = HAnimJoint982;

let HAnimJoint983 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint983.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[68] = HAnimJoint983;

let HAnimJoint984 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint984.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[69] = HAnimJoint984;

let HAnimJoint985 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint985.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[70] = HAnimJoint985;

let HAnimJoint986 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint986.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[71] = HAnimJoint986;

let HAnimJoint987 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint987.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[72] = HAnimJoint987;

let HAnimSegment988 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment988.USE = "hanim_sacrum";
HAnimHumanoid43.segments[73] = HAnimSegment988;

let HAnimSegment989 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment989.USE = "hanim_pelvis";
HAnimHumanoid43.segments[74] = HAnimSegment989;

let HAnimSegment990 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment990.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[75] = HAnimSegment990;

let HAnimSegment991 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment991.USE = "hanim_l_calf";
HAnimHumanoid43.segments[76] = HAnimSegment991;

let HAnimSegment992 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment992.USE = "hanim_l_talus";
HAnimHumanoid43.segments[77] = HAnimSegment992;

let HAnimSegment993 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment993.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[78] = HAnimSegment993;

let HAnimSegment994 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment994.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[79] = HAnimSegment994;

let HAnimSegment995 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment995.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[80] = HAnimSegment995;

let HAnimSegment996 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment996.USE = "hanim_r_calf";
HAnimHumanoid43.segments[81] = HAnimSegment996;

let HAnimSegment997 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment997.USE = "hanim_r_talus";
HAnimHumanoid43.segments[82] = HAnimSegment997;

let HAnimSegment998 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment998.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[83] = HAnimSegment998;

let HAnimSegment999 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment999.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[84] = HAnimSegment999;

let HAnimSegment1000 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1000.USE = "hanim_l5";
HAnimHumanoid43.segments[85] = HAnimSegment1000;

let HAnimSegment1001 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1001.USE = "hanim_l3";
HAnimHumanoid43.segments[86] = HAnimSegment1001;

let HAnimSegment1002 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1002.USE = "hanim_l1";
HAnimHumanoid43.segments[87] = HAnimSegment1002;

let HAnimSegment1003 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1003.USE = "hanim_t10";
HAnimHumanoid43.segments[88] = HAnimSegment1003;

let HAnimSegment1004 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1004.USE = "hanim_t6";
HAnimHumanoid43.segments[89] = HAnimSegment1004;

let HAnimSegment1005 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1005.USE = "hanim_t1";
HAnimHumanoid43.segments[90] = HAnimSegment1005;

let HAnimSegment1006 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1006.USE = "hanim_c4";
HAnimHumanoid43.segments[91] = HAnimSegment1006;

let HAnimSegment1007 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1007.USE = "hanim_c2";
HAnimHumanoid43.segments[92] = HAnimSegment1007;

let HAnimSegment1008 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1008.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[93] = HAnimSegment1008;

let HAnimSegment1009 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1009.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[94] = HAnimSegment1009;

let HAnimSegment1010 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1010.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[95] = HAnimSegment1010;

let HAnimSegment1011 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1011.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[96] = HAnimSegment1011;

let HAnimSegment1012 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1012.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[97] = HAnimSegment1012;

let HAnimSegment1013 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1013.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[98] = HAnimSegment1013;

let HAnimSegment1014 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1014.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[99] = HAnimSegment1014;

let HAnimSegment1015 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1015.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[100] = HAnimSegment1015;

let HAnimSegment1016 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1016.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[101] = HAnimSegment1016;

let HAnimSegment1017 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1017.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[102] = HAnimSegment1017;

let HAnimSegment1018 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1018.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[103] = HAnimSegment1018;

let HAnimSegment1019 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1019.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[104] = HAnimSegment1019;

let HAnimSegment1020 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1020.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[105] = HAnimSegment1020;

let HAnimSegment1021 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1021.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[106] = HAnimSegment1021;

let HAnimSegment1022 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1022.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[107] = HAnimSegment1022;

let HAnimSegment1023 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1023.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[108] = HAnimSegment1023;

let HAnimSegment1024 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1024.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[109] = HAnimSegment1024;

let HAnimSegment1025 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1025.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[110] = HAnimSegment1025;

let HAnimSegment1026 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1026.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[111] = HAnimSegment1026;

let HAnimSegment1027 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1027.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[112] = HAnimSegment1027;

let HAnimSegment1028 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1028.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[113] = HAnimSegment1028;

let HAnimSegment1029 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1029.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[114] = HAnimSegment1029;

let HAnimSegment1030 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1030.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[115] = HAnimSegment1030;

let HAnimSegment1031 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1031.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[116] = HAnimSegment1031;

let HAnimSegment1032 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1032.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[117] = HAnimSegment1032;

let HAnimSegment1033 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1033.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[118] = HAnimSegment1033;

let HAnimSegment1034 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1034.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[119] = HAnimSegment1034;

let HAnimSegment1035 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1035.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[120] = HAnimSegment1035;

let HAnimSegment1036 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1036.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[121] = HAnimSegment1036;

let HAnimSegment1037 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1037.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[122] = HAnimSegment1037;

let HAnimSegment1038 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1038.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[123] = HAnimSegment1038;

let HAnimSegment1039 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1039.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[124] = HAnimSegment1039;

let HAnimSegment1040 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1040.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[125] = HAnimSegment1040;

let HAnimSegment1041 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1041.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[126] = HAnimSegment1041;

let HAnimSegment1042 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1042.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[127] = HAnimSegment1042;

let HAnimSegment1043 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1043.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[128] = HAnimSegment1043;

let HAnimSegment1044 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1044.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[129] = HAnimSegment1044;

let HAnimSegment1045 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1045.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[130] = HAnimSegment1045;

let HAnimSite1046 = browser.currentScene.createNode("HAnimSite");
HAnimSite1046.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid43.viewpoints[131] = HAnimSite1046;

let HAnimSite1047 = browser.currentScene.createNode("HAnimSite");
HAnimSite1047.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[132] = HAnimSite1047;

let HAnimSite1048 = browser.currentScene.createNode("HAnimSite");
HAnimSite1048.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[133] = HAnimSite1048;

let HAnimSite1049 = browser.currentScene.createNode("HAnimSite");
HAnimSite1049.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[134] = HAnimSite1049;

let HAnimSite1050 = browser.currentScene.createNode("HAnimSite");
HAnimSite1050.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[135] = HAnimSite1050;

let HAnimSite1051 = browser.currentScene.createNode("HAnimSite");
HAnimSite1051.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[136] = HAnimSite1051;

let HAnimSite1052 = browser.currentScene.createNode("HAnimSite");
HAnimSite1052.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[137] = HAnimSite1052;

let HAnimSite1053 = browser.currentScene.createNode("HAnimSite");
HAnimSite1053.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[138] = HAnimSite1053;

let HAnimSite1054 = browser.currentScene.createNode("HAnimSite");
HAnimSite1054.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[139] = HAnimSite1054;

let HAnimSite1055 = browser.currentScene.createNode("HAnimSite");
HAnimSite1055.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[140] = HAnimSite1055;

let HAnimSite1056 = browser.currentScene.createNode("HAnimSite");
HAnimSite1056.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[141] = HAnimSite1056;

let HAnimSite1057 = browser.currentScene.createNode("HAnimSite");
HAnimSite1057.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid43.viewpoints[142] = HAnimSite1057;

let HAnimSite1058 = browser.currentScene.createNode("HAnimSite");
HAnimSite1058.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[143] = HAnimSite1058;

let HAnimSite1059 = browser.currentScene.createNode("HAnimSite");
HAnimSite1059.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[144] = HAnimSite1059;

let HAnimSite1060 = browser.currentScene.createNode("HAnimSite");
HAnimSite1060.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[145] = HAnimSite1060;

let HAnimSite1061 = browser.currentScene.createNode("HAnimSite");
HAnimSite1061.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[146] = HAnimSite1061;

let HAnimSite1062 = browser.currentScene.createNode("HAnimSite");
HAnimSite1062.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid43.viewpoints[147] = HAnimSite1062;

let HAnimSite1063 = browser.currentScene.createNode("HAnimSite");
HAnimSite1063.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[148] = HAnimSite1063;

let HAnimSite1064 = browser.currentScene.createNode("HAnimSite");
HAnimSite1064.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[149] = HAnimSite1064;

let HAnimSite1065 = browser.currentScene.createNode("HAnimSite");
HAnimSite1065.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[150] = HAnimSite1065;

let HAnimSite1066 = browser.currentScene.createNode("HAnimSite");
HAnimSite1066.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid43.viewpoints[151] = HAnimSite1066;

let HAnimSite1067 = browser.currentScene.createNode("HAnimSite");
HAnimSite1067.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[152] = HAnimSite1067;

let HAnimSite1068 = browser.currentScene.createNode("HAnimSite");
HAnimSite1068.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[153] = HAnimSite1068;

let HAnimSite1069 = browser.currentScene.createNode("HAnimSite");
HAnimSite1069.USE = "hanim_l_tibiale_pt";
HAnimHumanoid43.viewpoints[154] = HAnimSite1069;

let HAnimSite1070 = browser.currentScene.createNode("HAnimSite");
HAnimSite1070.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[155] = HAnimSite1070;

let HAnimSite1071 = browser.currentScene.createNode("HAnimSite");
HAnimSite1071.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[156] = HAnimSite1071;

let HAnimSite1072 = browser.currentScene.createNode("HAnimSite");
HAnimSite1072.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[157] = HAnimSite1072;

let HAnimSite1073 = browser.currentScene.createNode("HAnimSite");
HAnimSite1073.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[158] = HAnimSite1073;

let HAnimSite1074 = browser.currentScene.createNode("HAnimSite");
HAnimSite1074.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[159] = HAnimSite1074;

let HAnimSite1075 = browser.currentScene.createNode("HAnimSite");
HAnimSite1075.USE = "hanim_r_tibiale_pt";
HAnimHumanoid43.viewpoints[160] = HAnimSite1075;

let HAnimSite1076 = browser.currentScene.createNode("HAnimSite");
HAnimSite1076.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[161] = HAnimSite1076;

let HAnimSite1077 = browser.currentScene.createNode("HAnimSite");
HAnimSite1077.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[162] = HAnimSite1077;

let HAnimSite1078 = browser.currentScene.createNode("HAnimSite");
HAnimSite1078.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[163] = HAnimSite1078;

let HAnimSite1079 = browser.currentScene.createNode("HAnimSite");
HAnimSite1079.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[164] = HAnimSite1079;

let HAnimSite1080 = browser.currentScene.createNode("HAnimSite");
HAnimSite1080.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[165] = HAnimSite1080;

let HAnimSite1081 = browser.currentScene.createNode("HAnimSite");
HAnimSite1081.USE = "hanim_mesosternale_pt";
HAnimHumanoid43.viewpoints[166] = HAnimSite1081;

let HAnimSite1082 = browser.currentScene.createNode("HAnimSite");
HAnimSite1082.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[167] = HAnimSite1082;

let HAnimSite1083 = browser.currentScene.createNode("HAnimSite");
HAnimSite1083.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[168] = HAnimSite1083;

let HAnimSite1084 = browser.currentScene.createNode("HAnimSite");
HAnimSite1084.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[169] = HAnimSite1084;

let HAnimSite1085 = browser.currentScene.createNode("HAnimSite");
HAnimSite1085.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[170] = HAnimSite1085;

let HAnimSite1086 = browser.currentScene.createNode("HAnimSite");
HAnimSite1086.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[171] = HAnimSite1086;

let HAnimSite1087 = browser.currentScene.createNode("HAnimSite");
HAnimSite1087.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[172] = HAnimSite1087;

let HAnimSite1088 = browser.currentScene.createNode("HAnimSite");
HAnimSite1088.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[173] = HAnimSite1088;

let HAnimSite1089 = browser.currentScene.createNode("HAnimSite");
HAnimSite1089.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[174] = HAnimSite1089;

let HAnimSite1090 = browser.currentScene.createNode("HAnimSite");
HAnimSite1090.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[175] = HAnimSite1090;

let HAnimSite1091 = browser.currentScene.createNode("HAnimSite");
HAnimSite1091.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[176] = HAnimSite1091;

let HAnimSite1092 = browser.currentScene.createNode("HAnimSite");
HAnimSite1092.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[177] = HAnimSite1092;

let HAnimSite1093 = browser.currentScene.createNode("HAnimSite");
HAnimSite1093.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[178] = HAnimSite1093;

let HAnimSite1094 = browser.currentScene.createNode("HAnimSite");
HAnimSite1094.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[179] = HAnimSite1094;

let HAnimSite1095 = browser.currentScene.createNode("HAnimSite");
HAnimSite1095.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[180] = HAnimSite1095;

let HAnimSite1096 = browser.currentScene.createNode("HAnimSite");
HAnimSite1096.USE = "hanim_adams_apple_pt";
HAnimHumanoid43.viewpoints[181] = HAnimSite1096;

let HAnimSite1097 = browser.currentScene.createNode("HAnimSite");
HAnimSite1097.USE = "hanim_glabella_pt";
HAnimHumanoid43.viewpoints[182] = HAnimSite1097;

let HAnimSite1098 = browser.currentScene.createNode("HAnimSite");
HAnimSite1098.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid43.viewpoints[183] = HAnimSite1098;

let HAnimSite1099 = browser.currentScene.createNode("HAnimSite");
HAnimSite1099.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[184] = HAnimSite1099;

let HAnimSite1100 = browser.currentScene.createNode("HAnimSite");
HAnimSite1100.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[185] = HAnimSite1100;

let HAnimSite1101 = browser.currentScene.createNode("HAnimSite");
HAnimSite1101.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[186] = HAnimSite1101;

let HAnimSite1102 = browser.currentScene.createNode("HAnimSite");
HAnimSite1102.USE = "hanim_opisthocranion_pt";
HAnimHumanoid43.viewpoints[187] = HAnimSite1102;

let HAnimSite1103 = browser.currentScene.createNode("HAnimSite");
HAnimSite1103.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid43.viewpoints[188] = HAnimSite1103;

let HAnimSite1104 = browser.currentScene.createNode("HAnimSite");
HAnimSite1104.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[189] = HAnimSite1104;

let HAnimSite1105 = browser.currentScene.createNode("HAnimSite");
HAnimSite1105.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[190] = HAnimSite1105;

let HAnimSite1106 = browser.currentScene.createNode("HAnimSite");
HAnimSite1106.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[191] = HAnimSite1106;

let HAnimSite1107 = browser.currentScene.createNode("HAnimSite");
HAnimSite1107.USE = "hanim_skull_vertex_pt";
HAnimHumanoid43.viewpoints[192] = HAnimSite1107;

let HAnimSite1108 = browser.currentScene.createNode("HAnimSite");
HAnimSite1108.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid43.viewpoints[193] = HAnimSite1108;

let HAnimSite1109 = browser.currentScene.createNode("HAnimSite");
HAnimSite1109.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[194] = HAnimSite1109;

let HAnimSite1110 = browser.currentScene.createNode("HAnimSite");
HAnimSite1110.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[195] = HAnimSite1110;

let HAnimSite1111 = browser.currentScene.createNode("HAnimSite");
HAnimSite1111.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[196] = HAnimSite1111;

let HAnimSite1112 = browser.currentScene.createNode("HAnimSite");
HAnimSite1112.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[197] = HAnimSite1112;

let HAnimSite1113 = browser.currentScene.createNode("HAnimSite");
HAnimSite1113.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[198] = HAnimSite1113;

let HAnimSite1114 = browser.currentScene.createNode("HAnimSite");
HAnimSite1114.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[199] = HAnimSite1114;

let HAnimSite1115 = browser.currentScene.createNode("HAnimSite");
HAnimSite1115.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[200] = HAnimSite1115;

let HAnimSite1116 = browser.currentScene.createNode("HAnimSite");
HAnimSite1116.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[201] = HAnimSite1116;

let HAnimSite1117 = browser.currentScene.createNode("HAnimSite");
HAnimSite1117.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[202] = HAnimSite1117;

let HAnimSite1118 = browser.currentScene.createNode("HAnimSite");
HAnimSite1118.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[203] = HAnimSite1118;

let HAnimSite1119 = browser.currentScene.createNode("HAnimSite");
HAnimSite1119.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[204] = HAnimSite1119;

let HAnimSite1120 = browser.currentScene.createNode("HAnimSite");
HAnimSite1120.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[205] = HAnimSite1120;

let HAnimSite1121 = browser.currentScene.createNode("HAnimSite");
HAnimSite1121.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[206] = HAnimSite1121;

let HAnimSite1122 = browser.currentScene.createNode("HAnimSite");
HAnimSite1122.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[207] = HAnimSite1122;

let HAnimSite1123 = browser.currentScene.createNode("HAnimSite");
HAnimSite1123.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[208] = HAnimSite1123;

let HAnimSite1124 = browser.currentScene.createNode("HAnimSite");
HAnimSite1124.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid43.viewpoints[209] = HAnimSite1124;

let HAnimSite1125 = browser.currentScene.createNode("HAnimSite");
HAnimSite1125.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[210] = HAnimSite1125;

let HAnimSite1126 = browser.currentScene.createNode("HAnimSite");
HAnimSite1126.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[211] = HAnimSite1126;

let HAnimSite1127 = browser.currentScene.createNode("HAnimSite");
HAnimSite1127.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[212] = HAnimSite1127;

let HAnimSite1128 = browser.currentScene.createNode("HAnimSite");
HAnimSite1128.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[213] = HAnimSite1128;

let HAnimSite1129 = browser.currentScene.createNode("HAnimSite");
HAnimSite1129.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[214] = HAnimSite1129;

let HAnimSite1130 = browser.currentScene.createNode("HAnimSite");
HAnimSite1130.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[215] = HAnimSite1130;

let HAnimSite1131 = browser.currentScene.createNode("HAnimSite");
HAnimSite1131.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[216] = HAnimSite1131;

let HAnimSite1132 = browser.currentScene.createNode("HAnimSite");
HAnimSite1132.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[217] = HAnimSite1132;

let HAnimSite1133 = browser.currentScene.createNode("HAnimSite");
HAnimSite1133.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[218] = HAnimSite1133;

let HAnimSite1134 = browser.currentScene.createNode("HAnimSite");
HAnimSite1134.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[219] = HAnimSite1134;

let HAnimSite1135 = browser.currentScene.createNode("HAnimSite");
HAnimSite1135.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[220] = HAnimSite1135;

let HAnimSite1136 = browser.currentScene.createNode("HAnimSite");
HAnimSite1136.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[221] = HAnimSite1136;

let HAnimSite1137 = browser.currentScene.createNode("HAnimSite");
HAnimSite1137.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[222] = HAnimSite1137;

let HAnimSite1138 = browser.currentScene.createNode("HAnimSite");
HAnimSite1138.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[223] = HAnimSite1138;

let HAnimSite1139 = browser.currentScene.createNode("HAnimSite");
HAnimSite1139.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[224] = HAnimSite1139;

browser.currentScene.children[4] = HAnimHumanoid43;

