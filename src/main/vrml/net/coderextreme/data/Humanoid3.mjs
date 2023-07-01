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
HAnimSite61.name = "buttocks_standing_wall_contact_point";
HAnimSite61.DEF = "hanim_buttocks_standing_wall_contact_point";
let TouchSensor62 = browser.currentScene.createNode("TouchSensor");
TouchSensor62.description = "HAnimSite buttocks_standing_wall_contact_point";
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
Coordinate276.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet275.coord = Coordinate276;

//from vl5 to vl4 vertices 2
let ColorRGBA277 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA277.USE = "HAnimSegmentLineColorRGBA";
LineSet275.color = ColorRGBA277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[1] = Shape274;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.name = "vl4";
HAnimJoint278.DEF = "hanim_vl4";
HAnimJoint278.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint278.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint278.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.name = "l4";
HAnimSegment279.DEF = "hanim_l4";
let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
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
Coordinate285.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet284.coord = Coordinate285;

//from vl4 to vl3 vertices 2
let ColorRGBA286 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA286.USE = "HAnimSegmentLineColorRGBA";
LineSet284.color = ColorRGBA286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.name = "vl3";
HAnimJoint287.DEF = "hanim_vl3";
HAnimJoint287.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint287.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint287.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.name = "l3";
HAnimSegment288.DEF = "hanim_l3";
let Transform289 = browser.currentScene.createNode("Transform");
Transform289.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
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
Coordinate294.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet293.coord = Coordinate294;

//from vl3 to vl2 vertices 2
let ColorRGBA295 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA295.USE = "HAnimSegmentLineColorRGBA";
LineSet293.color = ColorRGBA295;

Shape292.geometry = LineSet293;

HAnimSegment288.children[1] = Shape292;

let HAnimSite296 = browser.currentScene.createNode("HAnimSite");
HAnimSite296.name = "l_rib10_pt";
HAnimSite296.DEF = "hanim_l_rib10_pt";
HAnimSite296.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let TouchSensor297 = browser.currentScene.createNode("TouchSensor");
TouchSensor297.description = "HAnimSite l_rib10_pt";
HAnimSite296.children = new MFNode();

HAnimSite296.children[0] = TouchSensor297;

let Shape298 = browser.currentScene.createNode("Shape");
Shape298.USE = "HAnimSiteShape";
HAnimSite296.children[1] = Shape298;

HAnimSegment288.children[2] = HAnimSite296;

let HAnimSite299 = browser.currentScene.createNode("HAnimSite");
HAnimSite299.name = "r_rib10_pt";
HAnimSite299.DEF = "hanim_r_rib10_pt";
HAnimSite299.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let TouchSensor300 = browser.currentScene.createNode("TouchSensor");
TouchSensor300.description = "HAnimSite r_rib10_pt";
HAnimSite299.children = new MFNode();

HAnimSite299.children[0] = TouchSensor300;

let Shape301 = browser.currentScene.createNode("Shape");
Shape301.USE = "HAnimSiteShape";
HAnimSite299.children[1] = Shape301;

HAnimSegment288.children[3] = HAnimSite299;

let HAnimSite302 = browser.currentScene.createNode("HAnimSite");
HAnimSite302.name = "spine_2_middle_back_pt";
HAnimSite302.DEF = "hanim_spine_2_middle_back_pt";
let TouchSensor303 = browser.currentScene.createNode("TouchSensor");
TouchSensor303.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite302.children = new MFNode();

HAnimSite302.children[0] = TouchSensor303;

let Shape304 = browser.currentScene.createNode("Shape");
Shape304.USE = "HAnimSiteShape";
HAnimSite302.children[1] = Shape304;

HAnimSegment288.children[4] = HAnimSite302;

HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

let HAnimJoint305 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint305.name = "vl2";
HAnimJoint305.DEF = "hanim_vl2";
HAnimJoint305.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint305.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint305.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment306 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment306.name = "l2";
HAnimSegment306.DEF = "hanim_l2";
let Transform307 = browser.currentScene.createNode("Transform");
Transform307.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
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
Coordinate312.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet311.coord = Coordinate312;

//from vl2 to vl1 vertices 2
let ColorRGBA313 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA313.USE = "HAnimSegmentLineColorRGBA";
LineSet311.color = ColorRGBA313;

Shape310.geometry = LineSet311;

HAnimSegment306.children[1] = Shape310;

HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

let HAnimJoint314 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint314.name = "vl1";
HAnimJoint314.DEF = "hanim_vl1";
HAnimJoint314.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint314.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint314.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment315 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment315.name = "l1";
HAnimSegment315.DEF = "hanim_l1";
let Transform316 = browser.currentScene.createNode("Transform");
Transform316.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Transform317 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape318 = browser.currentScene.createNode("Shape");
Shape318.USE = "HAnimJointShape";
Transform317.children = new MFNode();

Transform317.children[0] = Shape318;

Transform316.children = new MFNode();

Transform316.children[0] = Transform317;

HAnimSegment315.children = new MFNode();

HAnimSegment315.children[0] = Transform316;

let Shape319 = browser.currentScene.createNode("Shape");
let LineSet320 = browser.currentScene.createNode("LineSet");
LineSet320.vertexCount = new MFInt32(new int[2]);
let Coordinate321 = browser.currentScene.createNode("Coordinate");
Coordinate321.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet320.coord = Coordinate321;

//from vl1 to vt12 vertices 2
let ColorRGBA322 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA322.USE = "HAnimSegmentLineColorRGBA";
LineSet320.color = ColorRGBA322;

Shape319.geometry = LineSet320;

HAnimSegment315.children[1] = Shape319;

HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

let HAnimJoint323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint323.name = "vt12";
HAnimJoint323.DEF = "hanim_vt12";
HAnimJoint323.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint323.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint323.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment324.name = "t12";
HAnimSegment324.DEF = "hanim_t12";
let Transform325 = browser.currentScene.createNode("Transform");
Transform325.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Transform326 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape327 = browser.currentScene.createNode("Shape");
Shape327.USE = "HAnimJointShape";
Transform326.children = new MFNode();

Transform326.children[0] = Shape327;

Transform325.children = new MFNode();

Transform325.children[0] = Transform326;

HAnimSegment324.children = new MFNode();

HAnimSegment324.children[0] = Transform325;

let Shape328 = browser.currentScene.createNode("Shape");
let LineSet329 = browser.currentScene.createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[2]);
let Coordinate330 = browser.currentScene.createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet329.coord = Coordinate330;

//from vt12 to vt11 vertices 2
let ColorRGBA331 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSegmentLineColorRGBA";
LineSet329.color = ColorRGBA331;

Shape328.geometry = LineSet329;

HAnimSegment324.children[1] = Shape328;

HAnimJoint323.children = new MFNode();

HAnimJoint323.children[0] = HAnimSegment324;

let HAnimJoint332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint332.name = "vt11";
HAnimJoint332.DEF = "hanim_vt11";
HAnimJoint332.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint332.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint332.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment333.name = "t11";
HAnimSegment333.DEF = "hanim_t11";
let Transform334 = browser.currentScene.createNode("Transform");
Transform334.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Transform335 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape336 = browser.currentScene.createNode("Shape");
Shape336.USE = "HAnimJointShape";
Transform335.children = new MFNode();

Transform335.children[0] = Shape336;

Transform334.children = new MFNode();

Transform334.children[0] = Transform335;

HAnimSegment333.children = new MFNode();

HAnimSegment333.children[0] = Transform334;

let Shape337 = browser.currentScene.createNode("Shape");
let LineSet338 = browser.currentScene.createNode("LineSet");
LineSet338.vertexCount = new MFInt32(new int[2]);
let Coordinate339 = browser.currentScene.createNode("Coordinate");
Coordinate339.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet338.coord = Coordinate339;

//from vt11 to vt10 vertices 2
let ColorRGBA340 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA340.USE = "HAnimSegmentLineColorRGBA";
LineSet338.color = ColorRGBA340;

Shape337.geometry = LineSet338;

HAnimSegment333.children[1] = Shape337;

let HAnimSite341 = browser.currentScene.createNode("HAnimSite");
HAnimSite341.name = "substernale_pt";
HAnimSite341.DEF = "hanim_substernale_pt";
HAnimSite341.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor342 = browser.currentScene.createNode("TouchSensor");
TouchSensor342.description = "HAnimSite substernale_pt";
HAnimSite341.children = new MFNode();

HAnimSite341.children[0] = TouchSensor342;

let Shape343 = browser.currentScene.createNode("Shape");
Shape343.USE = "HAnimSiteShape";
HAnimSite341.children[1] = Shape343;

HAnimSegment333.children[2] = HAnimSite341;

HAnimJoint332.children = new MFNode();

HAnimJoint332.children[0] = HAnimSegment333;

let HAnimJoint344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint344.name = "vt10";
HAnimJoint344.DEF = "hanim_vt10";
HAnimJoint344.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint344.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint344.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment345 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment345.name = "t10";
HAnimSegment345.DEF = "hanim_t10";
let Transform346 = browser.currentScene.createNode("Transform");
Transform346.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Transform347 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape348 = browser.currentScene.createNode("Shape");
Shape348.USE = "HAnimJointShape";
Transform347.children = new MFNode();

Transform347.children[0] = Shape348;

Transform346.children = new MFNode();

Transform346.children[0] = Transform347;

HAnimSegment345.children = new MFNode();

HAnimSegment345.children[0] = Transform346;

let Shape349 = browser.currentScene.createNode("Shape");
let LineSet350 = browser.currentScene.createNode("LineSet");
LineSet350.vertexCount = new MFInt32(new int[2]);
let Coordinate351 = browser.currentScene.createNode("Coordinate");
Coordinate351.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet350.coord = Coordinate351;

//from vt10 to vt9 vertices 2
let ColorRGBA352 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA352.USE = "HAnimSegmentLineColorRGBA";
LineSet350.color = ColorRGBA352;

Shape349.geometry = LineSet350;

HAnimSegment345.children[1] = Shape349;

let HAnimSite353 = browser.currentScene.createNode("HAnimSite");
HAnimSite353.name = "l_thelion_pt";
HAnimSite353.DEF = "hanim_l_thelion_pt";
HAnimSite353.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let TouchSensor354 = browser.currentScene.createNode("TouchSensor");
TouchSensor354.description = "HAnimSite l_thelion_pt";
HAnimSite353.children = new MFNode();

HAnimSite353.children[0] = TouchSensor354;

let Shape355 = browser.currentScene.createNode("Shape");
Shape355.USE = "HAnimSiteShape";
HAnimSite353.children[1] = Shape355;

HAnimSegment345.children[2] = HAnimSite353;

let HAnimSite356 = browser.currentScene.createNode("HAnimSite");
HAnimSite356.name = "r_thelion_pt";
HAnimSite356.DEF = "hanim_r_thelion_pt";
HAnimSite356.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let TouchSensor357 = browser.currentScene.createNode("TouchSensor");
TouchSensor357.description = "HAnimSite r_thelion_pt";
HAnimSite356.children = new MFNode();

HAnimSite356.children[0] = TouchSensor357;

let Shape358 = browser.currentScene.createNode("Shape");
Shape358.USE = "HAnimSiteShape";
HAnimSite356.children[1] = Shape358;

HAnimSegment345.children[3] = HAnimSite356;

HAnimJoint344.children = new MFNode();

HAnimJoint344.children[0] = HAnimSegment345;

let HAnimJoint359 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint359.name = "vt9";
HAnimJoint359.DEF = "hanim_vt9";
HAnimJoint359.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint359.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint359.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment360 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment360.name = "t9";
HAnimSegment360.DEF = "hanim_t9";
let Transform361 = browser.currentScene.createNode("Transform");
Transform361.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Transform362 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape363 = browser.currentScene.createNode("Shape");
Shape363.USE = "HAnimJointShape";
Transform362.children = new MFNode();

Transform362.children[0] = Shape363;

Transform361.children = new MFNode();

Transform361.children[0] = Transform362;

HAnimSegment360.children = new MFNode();

HAnimSegment360.children[0] = Transform361;

let Shape364 = browser.currentScene.createNode("Shape");
let LineSet365 = browser.currentScene.createNode("LineSet");
LineSet365.vertexCount = new MFInt32(new int[2]);
let Coordinate366 = browser.currentScene.createNode("Coordinate");
Coordinate366.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet365.coord = Coordinate366;

//from vt9 to vt8 vertices 2
let ColorRGBA367 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA367.USE = "HAnimSegmentLineColorRGBA";
LineSet365.color = ColorRGBA367;

Shape364.geometry = LineSet365;

HAnimSegment360.children[1] = Shape364;

HAnimJoint359.children = new MFNode();

HAnimJoint359.children[0] = HAnimSegment360;

let HAnimJoint368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint368.name = "vt8";
HAnimJoint368.DEF = "hanim_vt8";
HAnimJoint368.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint368.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint368.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment369 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment369.name = "t8";
HAnimSegment369.DEF = "hanim_t8";
let Transform370 = browser.currentScene.createNode("Transform");
Transform370.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Transform371 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape372 = browser.currentScene.createNode("Shape");
Shape372.USE = "HAnimJointShape";
Transform371.children = new MFNode();

Transform371.children[0] = Shape372;

Transform370.children = new MFNode();

Transform370.children[0] = Transform371;

HAnimSegment369.children = new MFNode();

HAnimSegment369.children[0] = Transform370;

let Shape373 = browser.currentScene.createNode("Shape");
let LineSet374 = browser.currentScene.createNode("LineSet");
LineSet374.vertexCount = new MFInt32(new int[2]);
let Coordinate375 = browser.currentScene.createNode("Coordinate");
Coordinate375.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet374.coord = Coordinate375;

//from vt8 to vt7 vertices 2
let ColorRGBA376 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA376.USE = "HAnimSegmentLineColorRGBA";
LineSet374.color = ColorRGBA376;

Shape373.geometry = LineSet374;

HAnimSegment369.children[1] = Shape373;

HAnimJoint368.children = new MFNode();

HAnimJoint368.children[0] = HAnimSegment369;

let HAnimJoint377 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint377.name = "vt7";
HAnimJoint377.DEF = "hanim_vt7";
HAnimJoint377.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint377.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint377.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment378 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment378.name = "t7";
HAnimSegment378.DEF = "hanim_t7";
let Transform379 = browser.currentScene.createNode("Transform");
Transform379.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Transform380 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape381 = browser.currentScene.createNode("Shape");
Shape381.USE = "HAnimJointShape";
Transform380.children = new MFNode();

Transform380.children[0] = Shape381;

Transform379.children = new MFNode();

Transform379.children[0] = Transform380;

HAnimSegment378.children = new MFNode();

HAnimSegment378.children[0] = Transform379;

let Shape382 = browser.currentScene.createNode("Shape");
let LineSet383 = browser.currentScene.createNode("LineSet");
LineSet383.vertexCount = new MFInt32(new int[2]);
let Coordinate384 = browser.currentScene.createNode("Coordinate");
Coordinate384.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet383.coord = Coordinate384;

//from vt7 to vt6 vertices 2
let ColorRGBA385 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA385.USE = "HAnimSegmentLineColorRGBA";
LineSet383.color = ColorRGBA385;

Shape382.geometry = LineSet383;

HAnimSegment378.children[1] = Shape382;

let HAnimSite386 = browser.currentScene.createNode("HAnimSite");
HAnimSite386.name = "l_chest_midsagittal_plane_pt";
HAnimSite386.DEF = "hanim_l_chest_midsagittal_plane_pt";
let TouchSensor387 = browser.currentScene.createNode("TouchSensor");
TouchSensor387.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite386.children = new MFNode();

HAnimSite386.children[0] = TouchSensor387;

let Shape388 = browser.currentScene.createNode("Shape");
Shape388.USE = "HAnimSiteShape";
HAnimSite386.children[1] = Shape388;

HAnimSegment378.children[2] = HAnimSite386;

let HAnimSite389 = browser.currentScene.createNode("HAnimSite");
HAnimSite389.name = "mesosternale_pt";
HAnimSite389.DEF = "hanim_mesosternale_pt";
let TouchSensor390 = browser.currentScene.createNode("TouchSensor");
TouchSensor390.description = "HAnimSite mesosternale_pt";
HAnimSite389.children = new MFNode();

HAnimSite389.children[0] = TouchSensor390;

let Shape391 = browser.currentScene.createNode("Shape");
Shape391.USE = "HAnimSiteShape";
HAnimSite389.children[1] = Shape391;

HAnimSegment378.children[3] = HAnimSite389;

let HAnimSite392 = browser.currentScene.createNode("HAnimSite");
HAnimSite392.name = "r_chest_midsagittal_plane_pt";
HAnimSite392.DEF = "hanim_r_chest_midsagittal_plane_pt";
let TouchSensor393 = browser.currentScene.createNode("TouchSensor");
TouchSensor393.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

let Shape394 = browser.currentScene.createNode("Shape");
Shape394.USE = "HAnimSiteShape";
HAnimSite392.children[1] = Shape394;

HAnimSegment378.children[4] = HAnimSite392;

let HAnimSite395 = browser.currentScene.createNode("HAnimSite");
HAnimSite395.name = "rear_center_midsagittal_plane_pt";
HAnimSite395.DEF = "hanim_rear_center_midsagittal_plane_pt";
let TouchSensor396 = browser.currentScene.createNode("TouchSensor");
TouchSensor396.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite395.children = new MFNode();

HAnimSite395.children[0] = TouchSensor396;

let Shape397 = browser.currentScene.createNode("Shape");
Shape397.USE = "HAnimSiteShape";
HAnimSite395.children[1] = Shape397;

HAnimSegment378.children[5] = HAnimSite395;

HAnimJoint377.children = new MFNode();

HAnimJoint377.children[0] = HAnimSegment378;

let HAnimJoint398 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint398.name = "vt6";
HAnimJoint398.DEF = "hanim_vt6";
HAnimJoint398.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint398.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint398.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment399 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment399.name = "t6";
HAnimSegment399.DEF = "hanim_t6";
let Transform400 = browser.currentScene.createNode("Transform");
Transform400.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Transform401 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape402 = browser.currentScene.createNode("Shape");
Shape402.USE = "HAnimJointShape";
Transform401.children = new MFNode();

Transform401.children[0] = Shape402;

Transform400.children = new MFNode();

Transform400.children[0] = Transform401;

HAnimSegment399.children = new MFNode();

HAnimSegment399.children[0] = Transform400;

let Shape403 = browser.currentScene.createNode("Shape");
let LineSet404 = browser.currentScene.createNode("LineSet");
LineSet404.vertexCount = new MFInt32(new int[2]);
let Coordinate405 = browser.currentScene.createNode("Coordinate");
Coordinate405.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet404.coord = Coordinate405;

//from vt6 to vt5 vertices 2
let ColorRGBA406 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA406.USE = "HAnimSegmentLineColorRGBA";
LineSet404.color = ColorRGBA406;

Shape403.geometry = LineSet404;

HAnimSegment399.children[1] = Shape403;

let HAnimSite407 = browser.currentScene.createNode("HAnimSite");
HAnimSite407.name = "spine_1_middle_back_pt";
HAnimSite407.DEF = "hanim_spine_1_middle_back_pt";
let TouchSensor408 = browser.currentScene.createNode("TouchSensor");
TouchSensor408.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite407.children = new MFNode();

HAnimSite407.children[0] = TouchSensor408;

let Shape409 = browser.currentScene.createNode("Shape");
Shape409.USE = "HAnimSiteShape";
HAnimSite407.children[1] = Shape409;

HAnimSegment399.children[2] = HAnimSite407;

HAnimJoint398.children = new MFNode();

HAnimJoint398.children[0] = HAnimSegment399;

let HAnimJoint410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint410.name = "vt5";
HAnimJoint410.DEF = "hanim_vt5";
HAnimJoint410.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint410.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint410.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment411 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment411.name = "t5";
HAnimSegment411.DEF = "hanim_t5";
let Transform412 = browser.currentScene.createNode("Transform");
Transform412.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Transform413 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape414 = browser.currentScene.createNode("Shape");
Shape414.USE = "HAnimJointShape";
Transform413.children = new MFNode();

Transform413.children[0] = Shape414;

Transform412.children = new MFNode();

Transform412.children[0] = Transform413;

HAnimSegment411.children = new MFNode();

HAnimSegment411.children[0] = Transform412;

let Shape415 = browser.currentScene.createNode("Shape");
let LineSet416 = browser.currentScene.createNode("LineSet");
LineSet416.vertexCount = new MFInt32(new int[2]);
let Coordinate417 = browser.currentScene.createNode("Coordinate");
Coordinate417.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet416.coord = Coordinate417;

//from vt5 to vt4 vertices 2
let ColorRGBA418 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA418.USE = "HAnimSegmentLineColorRGBA";
LineSet416.color = ColorRGBA418;

Shape415.geometry = LineSet416;

HAnimSegment411.children[1] = Shape415;

HAnimJoint410.children = new MFNode();

HAnimJoint410.children[0] = HAnimSegment411;

let HAnimJoint419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint419.name = "vt4";
HAnimJoint419.DEF = "hanim_vt4";
HAnimJoint419.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint419.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint419.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment420 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment420.name = "t4";
HAnimSegment420.DEF = "hanim_t4";
let Transform421 = browser.currentScene.createNode("Transform");
Transform421.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Transform422 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape423 = browser.currentScene.createNode("Shape");
Shape423.USE = "HAnimJointShape";
Transform422.children = new MFNode();

Transform422.children[0] = Shape423;

Transform421.children = new MFNode();

Transform421.children[0] = Transform422;

HAnimSegment420.children = new MFNode();

HAnimSegment420.children[0] = Transform421;

let Shape424 = browser.currentScene.createNode("Shape");
let LineSet425 = browser.currentScene.createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[2]);
let Coordinate426 = browser.currentScene.createNode("Coordinate");
Coordinate426.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet425.coord = Coordinate426;

//from vt4 to vt3 vertices 2
let ColorRGBA427 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA427.USE = "HAnimSegmentLineColorRGBA";
LineSet425.color = ColorRGBA427;

Shape424.geometry = LineSet425;

HAnimSegment420.children[1] = Shape424;

HAnimJoint419.children = new MFNode();

HAnimJoint419.children[0] = HAnimSegment420;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.name = "vt3";
HAnimJoint428.DEF = "hanim_vt3";
HAnimJoint428.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint428.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint428.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment429 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment429.name = "t3";
HAnimSegment429.DEF = "hanim_t3";
let Transform430 = browser.currentScene.createNode("Transform");
Transform430.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Transform431 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "HAnimJointShape";
Transform431.children = new MFNode();

Transform431.children[0] = Shape432;

Transform430.children = new MFNode();

Transform430.children[0] = Transform431;

HAnimSegment429.children = new MFNode();

HAnimSegment429.children[0] = Transform430;

let Shape433 = browser.currentScene.createNode("Shape");
let LineSet434 = browser.currentScene.createNode("LineSet");
LineSet434.vertexCount = new MFInt32(new int[2]);
let Coordinate435 = browser.currentScene.createNode("Coordinate");
Coordinate435.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet434.coord = Coordinate435;

//from vt3 to vt2 vertices 2
let ColorRGBA436 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA436.USE = "HAnimSegmentLineColorRGBA";
LineSet434.color = ColorRGBA436;

Shape433.geometry = LineSet434;

HAnimSegment429.children[1] = Shape433;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

let HAnimJoint437 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint437.name = "vt2";
HAnimJoint437.DEF = "hanim_vt2";
HAnimJoint437.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint437.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint437.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.name = "t2";
HAnimSegment438.DEF = "hanim_t2";
let Transform439 = browser.currentScene.createNode("Transform");
Transform439.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
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
Coordinate444.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet443.coord = Coordinate444;

//from vt2 to vt1 vertices 2
let ColorRGBA445 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA445.USE = "HAnimSegmentLineColorRGBA";
LineSet443.color = ColorRGBA445;

Shape442.geometry = LineSet443;

HAnimSegment438.children[1] = Shape442;

let HAnimSite446 = browser.currentScene.createNode("HAnimSite");
HAnimSite446.name = "cervicale_pt";
HAnimSite446.DEF = "hanim_cervicale_pt";
HAnimSite446.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor447 = browser.currentScene.createNode("TouchSensor");
TouchSensor447.description = "HAnimSite cervicale_pt";
HAnimSite446.children = new MFNode();

HAnimSite446.children[0] = TouchSensor447;

let Shape448 = browser.currentScene.createNode("Shape");
Shape448.USE = "HAnimSiteShape";
HAnimSite446.children[1] = Shape448;

HAnimSegment438.children[2] = HAnimSite446;

let HAnimSite449 = browser.currentScene.createNode("HAnimSite");
HAnimSite449.name = "suprasternale_pt";
HAnimSite449.DEF = "hanim_suprasternale_pt";
HAnimSite449.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor450 = browser.currentScene.createNode("TouchSensor");
TouchSensor450.description = "HAnimSite suprasternale_pt";
HAnimSite449.children = new MFNode();

HAnimSite449.children[0] = TouchSensor450;

let Shape451 = browser.currentScene.createNode("Shape");
Shape451.USE = "HAnimSiteShape";
HAnimSite449.children[1] = Shape451;

HAnimSegment438.children[3] = HAnimSite449;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

let HAnimJoint452 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint452.name = "vt1";
HAnimJoint452.DEF = "hanim_vt1";
HAnimJoint452.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint452.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint452.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment453 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment453.name = "t1";
HAnimSegment453.DEF = "hanim_t1";
let Transform454 = browser.currentScene.createNode("Transform");
Transform454.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Transform455 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape456 = browser.currentScene.createNode("Shape");
Shape456.USE = "HAnimJointShape";
Transform455.children = new MFNode();

Transform455.children[0] = Shape456;

Transform454.children = new MFNode();

Transform454.children[0] = Transform455;

HAnimSegment453.children = new MFNode();

HAnimSegment453.children[0] = Transform454;

let Shape457 = browser.currentScene.createNode("Shape");
let LineSet458 = browser.currentScene.createNode("LineSet");
LineSet458.vertexCount = new MFInt32(new int[2]);
let Coordinate459 = browser.currentScene.createNode("Coordinate");
Coordinate459.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet458.coord = Coordinate459;

//from vt1 to vc7 vertices 2
let ColorRGBA460 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA460.USE = "HAnimSegmentLineColorRGBA";
LineSet458.color = ColorRGBA460;

Shape457.geometry = LineSet458;

HAnimSegment453.children[1] = Shape457;

let HAnimSite461 = browser.currentScene.createNode("HAnimSite");
HAnimSite461.name = "l_neck_base_pt";
HAnimSite461.DEF = "hanim_l_neck_base_pt";
HAnimSite461.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let TouchSensor462 = browser.currentScene.createNode("TouchSensor");
TouchSensor462.description = "HAnimSite l_neck_base_pt";
HAnimSite461.children = new MFNode();

HAnimSite461.children[0] = TouchSensor462;

let Shape463 = browser.currentScene.createNode("Shape");
Shape463.USE = "HAnimSiteShape";
HAnimSite461.children[1] = Shape463;

HAnimSegment453.children[2] = HAnimSite461;

let HAnimSite464 = browser.currentScene.createNode("HAnimSite");
HAnimSite464.name = "r_neck_base_pt";
HAnimSite464.DEF = "hanim_r_neck_base_pt";
HAnimSite464.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let TouchSensor465 = browser.currentScene.createNode("TouchSensor");
TouchSensor465.description = "HAnimSite r_neck_base_pt";
HAnimSite464.children = new MFNode();

HAnimSite464.children[0] = TouchSensor465;

let Shape466 = browser.currentScene.createNode("Shape");
Shape466.USE = "HAnimSiteShape";
HAnimSite464.children[1] = Shape466;

HAnimSegment453.children[3] = HAnimSite464;

let Shape467 = browser.currentScene.createNode("Shape");
let LineSet468 = browser.currentScene.createNode("LineSet");
LineSet468.vertexCount = new MFInt32(new int[2]);
let Coordinate469 = browser.currentScene.createNode("Coordinate");
Coordinate469.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet468.coord = Coordinate469;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA470 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA470.USE = "HAnimSegmentLineColorRGBA";
LineSet468.color = ColorRGBA470;

Shape467.geometry = LineSet468;

HAnimSegment453.children[4] = Shape467;

let HAnimSite471 = browser.currentScene.createNode("HAnimSite");
HAnimSite471.name = "l_acromion_pt";
HAnimSite471.DEF = "hanim_l_acromion_pt";
HAnimSite471.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor472 = browser.currentScene.createNode("TouchSensor");
TouchSensor472.description = "HAnimSite l_acromion_pt";
HAnimSite471.children = new MFNode();

HAnimSite471.children[0] = TouchSensor472;

let Shape473 = browser.currentScene.createNode("Shape");
Shape473.USE = "HAnimSiteShape";
HAnimSite471.children[1] = Shape473;

HAnimSegment453.children[5] = HAnimSite471;

let HAnimSite474 = browser.currentScene.createNode("HAnimSite");
HAnimSite474.name = "l_axilla_distal_pt";
HAnimSite474.DEF = "hanim_l_axilla_distal_pt";
HAnimSite474.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor475 = browser.currentScene.createNode("TouchSensor");
TouchSensor475.description = "HAnimSite l_axilla_distal_pt";
HAnimSite474.children = new MFNode();

HAnimSite474.children[0] = TouchSensor475;

let Shape476 = browser.currentScene.createNode("Shape");
Shape476.USE = "HAnimSiteShape";
HAnimSite474.children[1] = Shape476;

HAnimSegment453.children[6] = HAnimSite474;

let HAnimSite477 = browser.currentScene.createNode("HAnimSite");
HAnimSite477.name = "l_axilla_posterior_folds_pt";
HAnimSite477.DEF = "hanim_l_axilla_posterior_folds_pt";
let TouchSensor478 = browser.currentScene.createNode("TouchSensor");
TouchSensor478.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite477.children = new MFNode();

HAnimSite477.children[0] = TouchSensor478;

let Shape479 = browser.currentScene.createNode("Shape");
Shape479.USE = "HAnimSiteShape";
HAnimSite477.children[1] = Shape479;

HAnimSegment453.children[7] = HAnimSite477;

let HAnimSite480 = browser.currentScene.createNode("HAnimSite");
HAnimSite480.name = "l_axilla_proximal_pt";
HAnimSite480.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite480.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor481 = browser.currentScene.createNode("TouchSensor");
TouchSensor481.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite480.children = new MFNode();

HAnimSite480.children[0] = TouchSensor481;

let Shape482 = browser.currentScene.createNode("Shape");
Shape482.USE = "HAnimSiteShape";
HAnimSite480.children[1] = Shape482;

HAnimSegment453.children[8] = HAnimSite480;

let HAnimSite483 = browser.currentScene.createNode("HAnimSite");
HAnimSite483.name = "l_clavicale_pt";
HAnimSite483.DEF = "hanim_l_clavicale_pt";
HAnimSite483.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor484 = browser.currentScene.createNode("TouchSensor");
TouchSensor484.description = "HAnimSite l_clavicale_pt";
HAnimSite483.children = new MFNode();

HAnimSite483.children[0] = TouchSensor484;

let Shape485 = browser.currentScene.createNode("Shape");
Shape485.USE = "HAnimSiteShape";
HAnimSite483.children[1] = Shape485;

HAnimSegment453.children[9] = HAnimSite483;

let Shape486 = browser.currentScene.createNode("Shape");
let LineSet487 = browser.currentScene.createNode("LineSet");
LineSet487.vertexCount = new MFInt32(new int[2]);
let Coordinate488 = browser.currentScene.createNode("Coordinate");
Coordinate488.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet487.coord = Coordinate488;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA489 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA489.USE = "HAnimSegmentLineColorRGBA";
LineSet487.color = ColorRGBA489;

Shape486.geometry = LineSet487;

HAnimSegment453.children[10] = Shape486;

let HAnimSite490 = browser.currentScene.createNode("HAnimSite");
HAnimSite490.name = "r_acromion_pt";
HAnimSite490.DEF = "hanim_r_acromion_pt";
HAnimSite490.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor491 = browser.currentScene.createNode("TouchSensor");
TouchSensor491.description = "HAnimSite r_acromion_pt";
HAnimSite490.children = new MFNode();

HAnimSite490.children[0] = TouchSensor491;

let Shape492 = browser.currentScene.createNode("Shape");
Shape492.USE = "HAnimSiteShape";
HAnimSite490.children[1] = Shape492;

HAnimSegment453.children[11] = HAnimSite490;

let HAnimSite493 = browser.currentScene.createNode("HAnimSite");
HAnimSite493.name = "r_axilla_distal_pt";
HAnimSite493.DEF = "hanim_r_axilla_distal_pt";
HAnimSite493.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor494 = browser.currentScene.createNode("TouchSensor");
TouchSensor494.description = "HAnimSite r_axilla_distal_pt";
HAnimSite493.children = new MFNode();

HAnimSite493.children[0] = TouchSensor494;

let Shape495 = browser.currentScene.createNode("Shape");
Shape495.USE = "HAnimSiteShape";
HAnimSite493.children[1] = Shape495;

HAnimSegment453.children[12] = HAnimSite493;

let HAnimSite496 = browser.currentScene.createNode("HAnimSite");
HAnimSite496.name = "r_axilla_posterior_folds_pt";
HAnimSite496.DEF = "hanim_r_axilla_posterior_folds_pt";
let TouchSensor497 = browser.currentScene.createNode("TouchSensor");
TouchSensor497.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite496.children = new MFNode();

HAnimSite496.children[0] = TouchSensor497;

let Shape498 = browser.currentScene.createNode("Shape");
Shape498.USE = "HAnimSiteShape";
HAnimSite496.children[1] = Shape498;

HAnimSegment453.children[13] = HAnimSite496;

let HAnimSite499 = browser.currentScene.createNode("HAnimSite");
HAnimSite499.name = "r_axilla_proximal_pt";
HAnimSite499.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite499.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor500 = browser.currentScene.createNode("TouchSensor");
TouchSensor500.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite499.children = new MFNode();

HAnimSite499.children[0] = TouchSensor500;

let Shape501 = browser.currentScene.createNode("Shape");
Shape501.USE = "HAnimSiteShape";
HAnimSite499.children[1] = Shape501;

HAnimSegment453.children[14] = HAnimSite499;

let HAnimSite502 = browser.currentScene.createNode("HAnimSite");
HAnimSite502.name = "r_clavicale_pt";
HAnimSite502.DEF = "hanim_r_clavicale_pt";
HAnimSite502.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor503 = browser.currentScene.createNode("TouchSensor");
TouchSensor503.description = "HAnimSite r_clavicale_pt";
HAnimSite502.children = new MFNode();

HAnimSite502.children[0] = TouchSensor503;

let Shape504 = browser.currentScene.createNode("Shape");
Shape504.USE = "HAnimSiteShape";
HAnimSite502.children[1] = Shape504;

HAnimSegment453.children[15] = HAnimSite502;

HAnimJoint452.children = new MFNode();

HAnimJoint452.children[0] = HAnimSegment453;

let HAnimJoint505 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint505.name = "vc7";
HAnimJoint505.DEF = "hanim_vc7";
HAnimJoint505.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint505.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint505.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment506 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment506.name = "c7";
HAnimSegment506.DEF = "hanim_c7";
let Transform507 = browser.currentScene.createNode("Transform");
Transform507.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Transform508 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape509 = browser.currentScene.createNode("Shape");
Shape509.USE = "HAnimJointShape";
Transform508.children = new MFNode();

Transform508.children[0] = Shape509;

Transform507.children = new MFNode();

Transform507.children[0] = Transform508;

HAnimSegment506.children = new MFNode();

HAnimSegment506.children[0] = Transform507;

let Shape510 = browser.currentScene.createNode("Shape");
let LineSet511 = browser.currentScene.createNode("LineSet");
LineSet511.vertexCount = new MFInt32(new int[2]);
let Coordinate512 = browser.currentScene.createNode("Coordinate");
Coordinate512.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet511.coord = Coordinate512;

//from vc7 to vc6 vertices 2
let ColorRGBA513 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA513.USE = "HAnimSegmentLineColorRGBA";
LineSet511.color = ColorRGBA513;

Shape510.geometry = LineSet511;

HAnimSegment506.children[1] = Shape510;

HAnimJoint505.children = new MFNode();

HAnimJoint505.children[0] = HAnimSegment506;

let HAnimJoint514 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint514.name = "vc6";
HAnimJoint514.DEF = "hanim_vc6";
HAnimJoint514.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint514.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint514.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment515 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment515.name = "c6";
HAnimSegment515.DEF = "hanim_c6";
let Transform516 = browser.currentScene.createNode("Transform");
Transform516.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Transform517 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape518 = browser.currentScene.createNode("Shape");
Shape518.USE = "HAnimJointShape";
Transform517.children = new MFNode();

Transform517.children[0] = Shape518;

Transform516.children = new MFNode();

Transform516.children[0] = Transform517;

HAnimSegment515.children = new MFNode();

HAnimSegment515.children[0] = Transform516;

let Shape519 = browser.currentScene.createNode("Shape");
let LineSet520 = browser.currentScene.createNode("LineSet");
LineSet520.vertexCount = new MFInt32(new int[2]);
let Coordinate521 = browser.currentScene.createNode("Coordinate");
Coordinate521.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet520.coord = Coordinate521;

//from vc6 to vc5 vertices 2
let ColorRGBA522 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA522.USE = "HAnimSegmentLineColorRGBA";
LineSet520.color = ColorRGBA522;

Shape519.geometry = LineSet520;

HAnimSegment515.children[1] = Shape519;

HAnimJoint514.children = new MFNode();

HAnimJoint514.children[0] = HAnimSegment515;

let HAnimJoint523 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint523.name = "vc5";
HAnimJoint523.DEF = "hanim_vc5";
HAnimJoint523.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint523.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint523.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment524 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment524.name = "c5";
HAnimSegment524.DEF = "hanim_c5";
let Transform525 = browser.currentScene.createNode("Transform");
Transform525.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Transform526 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape527 = browser.currentScene.createNode("Shape");
Shape527.USE = "HAnimJointShape";
Transform526.children = new MFNode();

Transform526.children[0] = Shape527;

Transform525.children = new MFNode();

Transform525.children[0] = Transform526;

HAnimSegment524.children = new MFNode();

HAnimSegment524.children[0] = Transform525;

let Shape528 = browser.currentScene.createNode("Shape");
let LineSet529 = browser.currentScene.createNode("LineSet");
LineSet529.vertexCount = new MFInt32(new int[2]);
let Coordinate530 = browser.currentScene.createNode("Coordinate");
Coordinate530.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet529.coord = Coordinate530;

//from vc5 to vc4 vertices 2
let ColorRGBA531 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA531.USE = "HAnimSegmentLineColorRGBA";
LineSet529.color = ColorRGBA531;

Shape528.geometry = LineSet529;

HAnimSegment524.children[1] = Shape528;

HAnimJoint523.children = new MFNode();

HAnimJoint523.children[0] = HAnimSegment524;

let HAnimJoint532 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint532.name = "vc4";
HAnimJoint532.DEF = "hanim_vc4";
HAnimJoint532.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint532.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint532.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment533 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment533.name = "c4";
HAnimSegment533.DEF = "hanim_c4";
let Transform534 = browser.currentScene.createNode("Transform");
Transform534.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Transform535 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape536 = browser.currentScene.createNode("Shape");
Shape536.USE = "HAnimJointShape";
Transform535.children = new MFNode();

Transform535.children[0] = Shape536;

Transform534.children = new MFNode();

Transform534.children[0] = Transform535;

HAnimSegment533.children = new MFNode();

HAnimSegment533.children[0] = Transform534;

let Shape537 = browser.currentScene.createNode("Shape");
let LineSet538 = browser.currentScene.createNode("LineSet");
LineSet538.vertexCount = new MFInt32(new int[2]);
let Coordinate539 = browser.currentScene.createNode("Coordinate");
Coordinate539.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet538.coord = Coordinate539;

//from vc4 to vc3 vertices 2
let ColorRGBA540 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA540.USE = "HAnimSegmentLineColorRGBA";
LineSet538.color = ColorRGBA540;

Shape537.geometry = LineSet538;

HAnimSegment533.children[1] = Shape537;

HAnimJoint532.children = new MFNode();

HAnimJoint532.children[0] = HAnimSegment533;

let HAnimJoint541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint541.name = "vc3";
HAnimJoint541.DEF = "hanim_vc3";
HAnimJoint541.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint541.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint541.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment542.name = "c3";
HAnimSegment542.DEF = "hanim_c3";
let Transform543 = browser.currentScene.createNode("Transform");
Transform543.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Transform544 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape545 = browser.currentScene.createNode("Shape");
Shape545.USE = "HAnimJointShape";
Transform544.children = new MFNode();

Transform544.children[0] = Shape545;

Transform543.children = new MFNode();

Transform543.children[0] = Transform544;

HAnimSegment542.children = new MFNode();

HAnimSegment542.children[0] = Transform543;

let Shape546 = browser.currentScene.createNode("Shape");
let LineSet547 = browser.currentScene.createNode("LineSet");
LineSet547.vertexCount = new MFInt32(new int[2]);
let Coordinate548 = browser.currentScene.createNode("Coordinate");
Coordinate548.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet547.coord = Coordinate548;

//from vc3 to vc2 vertices 2
let ColorRGBA549 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA549.USE = "HAnimSegmentLineColorRGBA";
LineSet547.color = ColorRGBA549;

Shape546.geometry = LineSet547;

HAnimSegment542.children[1] = Shape546;

let HAnimSite550 = browser.currentScene.createNode("HAnimSite");
HAnimSite550.name = "adams_apple_pt";
HAnimSite550.DEF = "hanim_adams_apple_pt";
let TouchSensor551 = browser.currentScene.createNode("TouchSensor");
TouchSensor551.description = "HAnimSite adams_apple_pt";
HAnimSite550.children = new MFNode();

HAnimSite550.children[0] = TouchSensor551;

let Shape552 = browser.currentScene.createNode("Shape");
Shape552.USE = "HAnimSiteShape";
HAnimSite550.children[1] = Shape552;

HAnimSegment542.children[2] = HAnimSite550;

HAnimJoint541.children = new MFNode();

HAnimJoint541.children[0] = HAnimSegment542;

let HAnimJoint553 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint553.name = "vc2";
HAnimJoint553.DEF = "hanim_vc2";
HAnimJoint553.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint553.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint553.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment554 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment554.name = "c2";
HAnimSegment554.DEF = "hanim_c2";
let Transform555 = browser.currentScene.createNode("Transform");
Transform555.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Transform556 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape557 = browser.currentScene.createNode("Shape");
Shape557.USE = "HAnimJointShape";
Transform556.children = new MFNode();

Transform556.children[0] = Shape557;

Transform555.children = new MFNode();

Transform555.children[0] = Transform556;

HAnimSegment554.children = new MFNode();

HAnimSegment554.children[0] = Transform555;

let Shape558 = browser.currentScene.createNode("Shape");
let LineSet559 = browser.currentScene.createNode("LineSet");
LineSet559.vertexCount = new MFInt32(new int[2]);
let Coordinate560 = browser.currentScene.createNode("Coordinate");
Coordinate560.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet559.coord = Coordinate560;

//from vc2 to vc1 vertices 2
let ColorRGBA561 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA561.USE = "HAnimSegmentLineColorRGBA";
LineSet559.color = ColorRGBA561;

Shape558.geometry = LineSet559;

HAnimSegment554.children[1] = Shape558;

HAnimJoint553.children = new MFNode();

HAnimJoint553.children[0] = HAnimSegment554;

let HAnimJoint562 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint562.name = "vc1";
HAnimJoint562.DEF = "hanim_vc1";
HAnimJoint562.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint562.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint562.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment563 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment563.name = "c1";
HAnimSegment563.DEF = "hanim_c1";
let Transform564 = browser.currentScene.createNode("Transform");
Transform564.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Transform565 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape566 = browser.currentScene.createNode("Shape");
Shape566.USE = "HAnimJointShape";
Transform565.children = new MFNode();

Transform565.children[0] = Shape566;

Transform564.children = new MFNode();

Transform564.children[0] = Transform565;

HAnimSegment563.children = new MFNode();

HAnimSegment563.children[0] = Transform564;

let Shape567 = browser.currentScene.createNode("Shape");
let LineSet568 = browser.currentScene.createNode("LineSet");
LineSet568.vertexCount = new MFInt32(new int[2]);
let Coordinate569 = browser.currentScene.createNode("Coordinate");
Coordinate569.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet568.coord = Coordinate569;

//from vc1 to skullbase vertices 2
let ColorRGBA570 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA570.USE = "HAnimSegmentLineColorRGBA";
LineSet568.color = ColorRGBA570;

Shape567.geometry = LineSet568;

HAnimSegment563.children[1] = Shape567;

let HAnimSite571 = browser.currentScene.createNode("HAnimSite");
HAnimSite571.name = "glabella_pt";
HAnimSite571.DEF = "hanim_glabella_pt";
let TouchSensor572 = browser.currentScene.createNode("TouchSensor");
TouchSensor572.description = "HAnimSite glabella_pt";
HAnimSite571.children = new MFNode();

HAnimSite571.children[0] = TouchSensor572;

let Shape573 = browser.currentScene.createNode("Shape");
Shape573.USE = "HAnimSiteShape";
HAnimSite571.children[1] = Shape573;

HAnimSegment563.children[2] = HAnimSite571;

let HAnimSite574 = browser.currentScene.createNode("HAnimSite");
HAnimSite574.name = "l_ectocanthus_pt";
HAnimSite574.DEF = "hanim_l_ectocanthus_pt";
let TouchSensor575 = browser.currentScene.createNode("TouchSensor");
TouchSensor575.description = "HAnimSite l_ectocanthus_pt";
HAnimSite574.children = new MFNode();

HAnimSite574.children[0] = TouchSensor575;

let Shape576 = browser.currentScene.createNode("Shape");
Shape576.USE = "HAnimSiteShape";
HAnimSite574.children[1] = Shape576;

HAnimSegment563.children[3] = HAnimSite574;

let HAnimSite577 = browser.currentScene.createNode("HAnimSite");
HAnimSite577.name = "l_infraorbitale_pt";
HAnimSite577.DEF = "hanim_l_infraorbitale_pt";
HAnimSite577.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor578 = browser.currentScene.createNode("TouchSensor");
TouchSensor578.description = "HAnimSite l_infraorbitale_pt";
HAnimSite577.children = new MFNode();

HAnimSite577.children[0] = TouchSensor578;

let Shape579 = browser.currentScene.createNode("Shape");
Shape579.USE = "HAnimSiteShape";
HAnimSite577.children[1] = Shape579;

HAnimSegment563.children[4] = HAnimSite577;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.name = "l_tragion_pt";
HAnimSite580.DEF = "hanim_l_tragion_pt";
HAnimSite580.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor581 = browser.currentScene.createNode("TouchSensor");
TouchSensor581.description = "HAnimSite l_tragion_pt";
HAnimSite580.children = new MFNode();

HAnimSite580.children[0] = TouchSensor581;

let Shape582 = browser.currentScene.createNode("Shape");
Shape582.USE = "HAnimSiteShape";
HAnimSite580.children[1] = Shape582;

HAnimSegment563.children[5] = HAnimSite580;

let HAnimSite583 = browser.currentScene.createNode("HAnimSite");
HAnimSite583.name = "nuchale_pt";
HAnimSite583.DEF = "hanim_nuchale_pt";
HAnimSite583.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor584 = browser.currentScene.createNode("TouchSensor");
TouchSensor584.description = "HAnimSite nuchale_pt";
HAnimSite583.children = new MFNode();

HAnimSite583.children[0] = TouchSensor584;

let Shape585 = browser.currentScene.createNode("Shape");
Shape585.USE = "HAnimSiteShape";
HAnimSite583.children[1] = Shape585;

HAnimSegment563.children[6] = HAnimSite583;

let HAnimSite586 = browser.currentScene.createNode("HAnimSite");
HAnimSite586.name = "opisthocranion_pt";
HAnimSite586.DEF = "hanim_opisthocranion_pt";
let TouchSensor587 = browser.currentScene.createNode("TouchSensor");
TouchSensor587.description = "HAnimSite opisthocranion_pt";
HAnimSite586.children = new MFNode();

HAnimSite586.children[0] = TouchSensor587;

let Shape588 = browser.currentScene.createNode("Shape");
Shape588.USE = "HAnimSiteShape";
HAnimSite586.children[1] = Shape588;

HAnimSegment563.children[7] = HAnimSite586;

let HAnimSite589 = browser.currentScene.createNode("HAnimSite");
HAnimSite589.name = "r_ectocanthus_pt";
HAnimSite589.DEF = "hanim_r_ectocanthus_pt";
let TouchSensor590 = browser.currentScene.createNode("TouchSensor");
TouchSensor590.description = "HAnimSite r_ectocanthus_pt";
HAnimSite589.children = new MFNode();

HAnimSite589.children[0] = TouchSensor590;

let Shape591 = browser.currentScene.createNode("Shape");
Shape591.USE = "HAnimSiteShape";
HAnimSite589.children[1] = Shape591;

HAnimSegment563.children[8] = HAnimSite589;

let HAnimSite592 = browser.currentScene.createNode("HAnimSite");
HAnimSite592.name = "r_infraorbitale_pt";
HAnimSite592.DEF = "hanim_r_infraorbitale_pt";
HAnimSite592.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor593 = browser.currentScene.createNode("TouchSensor");
TouchSensor593.description = "HAnimSite r_infraorbitale_pt";
HAnimSite592.children = new MFNode();

HAnimSite592.children[0] = TouchSensor593;

let Shape594 = browser.currentScene.createNode("Shape");
Shape594.USE = "HAnimSiteShape";
HAnimSite592.children[1] = Shape594;

HAnimSegment563.children[9] = HAnimSite592;

let HAnimSite595 = browser.currentScene.createNode("HAnimSite");
HAnimSite595.name = "r_tragion_pt";
HAnimSite595.DEF = "hanim_r_tragion_pt";
HAnimSite595.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor596 = browser.currentScene.createNode("TouchSensor");
TouchSensor596.description = "HAnimSite r_tragion_pt";
HAnimSite595.children = new MFNode();

HAnimSite595.children[0] = TouchSensor596;

let Shape597 = browser.currentScene.createNode("Shape");
Shape597.USE = "HAnimSiteShape";
HAnimSite595.children[1] = Shape597;

HAnimSegment563.children[10] = HAnimSite595;

let HAnimSite598 = browser.currentScene.createNode("HAnimSite");
HAnimSite598.name = "sellion_pt";
HAnimSite598.DEF = "hanim_sellion_pt";
HAnimSite598.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor599 = browser.currentScene.createNode("TouchSensor");
TouchSensor599.description = "HAnimSite sellion_pt";
HAnimSite598.children = new MFNode();

HAnimSite598.children[0] = TouchSensor599;

let Shape600 = browser.currentScene.createNode("Shape");
Shape600.USE = "HAnimSiteShape";
HAnimSite598.children[1] = Shape600;

HAnimSegment563.children[11] = HAnimSite598;

let HAnimSite601 = browser.currentScene.createNode("HAnimSite");
HAnimSite601.name = "skull_vertex_pt";
HAnimSite601.DEF = "hanim_skull_vertex_pt";
HAnimSite601.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let TouchSensor602 = browser.currentScene.createNode("TouchSensor");
TouchSensor602.description = "HAnimSite skull_vertex_pt";
HAnimSite601.children = new MFNode();

HAnimSite601.children[0] = TouchSensor602;

let Shape603 = browser.currentScene.createNode("Shape");
Shape603.USE = "HAnimSiteShape";
HAnimSite601.children[1] = Shape603;

HAnimSegment563.children[12] = HAnimSite601;

HAnimJoint562.children = new MFNode();

HAnimJoint562.children[0] = HAnimSegment563;

let HAnimJoint604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint604.name = "skullbase";
HAnimJoint604.DEF = "hanim_skullbase";
HAnimJoint604.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint604.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment605 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment605.name = "skull";
HAnimSegment605.DEF = "hanim_skull";
let Transform606 = browser.currentScene.createNode("Transform");
Transform606.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
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
Coordinate611.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
LineSet610.coord = Coordinate611;

//from skullbase to l_eyelid_joint vertices 2
let ColorRGBA612 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA612.USE = "HAnimSegmentLineColorRGBA";
LineSet610.color = ColorRGBA612;

Shape609.geometry = LineSet610;

HAnimSegment605.children[1] = Shape609;

let Shape613 = browser.currentScene.createNode("Shape");
let LineSet614 = browser.currentScene.createNode("LineSet");
LineSet614.vertexCount = new MFInt32(new int[2]);
let Coordinate615 = browser.currentScene.createNode("Coordinate");
Coordinate615.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
LineSet614.coord = Coordinate615;

//from skullbase to r_eyelid_joint vertices 2
let ColorRGBA616 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA616.USE = "HAnimSegmentLineColorRGBA";
LineSet614.color = ColorRGBA616;

Shape613.geometry = LineSet614;

HAnimSegment605.children[2] = Shape613;

let Shape617 = browser.currentScene.createNode("Shape");
let LineSet618 = browser.currentScene.createNode("LineSet");
LineSet618.vertexCount = new MFInt32(new int[2]);
let Coordinate619 = browser.currentScene.createNode("Coordinate");
Coordinate619.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
LineSet618.coord = Coordinate619;

//from skullbase to l_eyeball_joint vertices 2
let ColorRGBA620 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA620.USE = "HAnimSegmentLineColorRGBA";
LineSet618.color = ColorRGBA620;

Shape617.geometry = LineSet618;

HAnimSegment605.children[3] = Shape617;

let Shape621 = browser.currentScene.createNode("Shape");
let LineSet622 = browser.currentScene.createNode("LineSet");
LineSet622.vertexCount = new MFInt32(new int[2]);
let Coordinate623 = browser.currentScene.createNode("Coordinate");
Coordinate623.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
LineSet622.coord = Coordinate623;

//from skullbase to r_eyeball_joint vertices 2
let ColorRGBA624 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA624.USE = "HAnimSegmentLineColorRGBA";
LineSet622.color = ColorRGBA624;

Shape621.geometry = LineSet622;

HAnimSegment605.children[4] = Shape621;

let Shape625 = browser.currentScene.createNode("Shape");
let LineSet626 = browser.currentScene.createNode("LineSet");
LineSet626.vertexCount = new MFInt32(new int[2]);
let Coordinate627 = browser.currentScene.createNode("Coordinate");
Coordinate627.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
LineSet626.coord = Coordinate627;

//from skullbase to l_eyebrow_joint vertices 2
let ColorRGBA628 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA628.USE = "HAnimSegmentLineColorRGBA";
LineSet626.color = ColorRGBA628;

Shape625.geometry = LineSet626;

HAnimSegment605.children[5] = Shape625;

let Shape629 = browser.currentScene.createNode("Shape");
let LineSet630 = browser.currentScene.createNode("LineSet");
LineSet630.vertexCount = new MFInt32(new int[2]);
let Coordinate631 = browser.currentScene.createNode("Coordinate");
Coordinate631.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
LineSet630.coord = Coordinate631;

//from skullbase to r_eyebrow_joint vertices 2
let ColorRGBA632 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA632.USE = "HAnimSegmentLineColorRGBA";
LineSet630.color = ColorRGBA632;

Shape629.geometry = LineSet630;

HAnimSegment605.children[6] = Shape629;

let Shape633 = browser.currentScene.createNode("Shape");
let LineSet634 = browser.currentScene.createNode("LineSet");
LineSet634.vertexCount = new MFInt32(new int[2]);
let Coordinate635 = browser.currentScene.createNode("Coordinate");
Coordinate635.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
LineSet634.coord = Coordinate635;

//from skullbase to temporomandibular vertices 2
let ColorRGBA636 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA636.USE = "HAnimSegmentLineColorRGBA";
LineSet634.color = ColorRGBA636;

Shape633.geometry = LineSet634;

HAnimSegment605.children[7] = Shape633;

let HAnimSite637 = browser.currentScene.createNode("HAnimSite");
HAnimSite637.name = "l_gonion_pt";
HAnimSite637.DEF = "hanim_l_gonion_pt";
HAnimSite637.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let TouchSensor638 = browser.currentScene.createNode("TouchSensor");
TouchSensor638.description = "HAnimSite l_gonion_pt";
HAnimSite637.children = new MFNode();

HAnimSite637.children[0] = TouchSensor638;

let Shape639 = browser.currentScene.createNode("Shape");
Shape639.USE = "HAnimSiteShape";
HAnimSite637.children[1] = Shape639;

HAnimSegment605.children[8] = HAnimSite637;

let HAnimSite640 = browser.currentScene.createNode("HAnimSite");
HAnimSite640.name = "menton_pt";
HAnimSite640.DEF = "hanim_menton_pt";
let TouchSensor641 = browser.currentScene.createNode("TouchSensor");
TouchSensor641.description = "HAnimSite menton_pt";
HAnimSite640.children = new MFNode();

HAnimSite640.children[0] = TouchSensor641;

let Shape642 = browser.currentScene.createNode("Shape");
Shape642.USE = "HAnimSiteShape";
HAnimSite640.children[1] = Shape642;

HAnimSegment605.children[9] = HAnimSite640;

let HAnimSite643 = browser.currentScene.createNode("HAnimSite");
HAnimSite643.name = "r_gonion_pt";
HAnimSite643.DEF = "hanim_r_gonion_pt";
HAnimSite643.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let TouchSensor644 = browser.currentScene.createNode("TouchSensor");
TouchSensor644.description = "HAnimSite r_gonion_pt";
HAnimSite643.children = new MFNode();

HAnimSite643.children[0] = TouchSensor644;

let Shape645 = browser.currentScene.createNode("Shape");
Shape645.USE = "HAnimSiteShape";
HAnimSite643.children[1] = Shape645;

HAnimSegment605.children[10] = HAnimSite643;

let HAnimSite646 = browser.currentScene.createNode("HAnimSite");
HAnimSite646.name = "supramenton_pt";
HAnimSite646.DEF = "hanim_supramenton_pt";
HAnimSite646.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let TouchSensor647 = browser.currentScene.createNode("TouchSensor");
TouchSensor647.description = "HAnimSite supramenton_pt";
HAnimSite646.children = new MFNode();

HAnimSite646.children[0] = TouchSensor647;

let Shape648 = browser.currentScene.createNode("Shape");
Shape648.USE = "HAnimSiteShape";
HAnimSite646.children[1] = Shape648;

HAnimSegment605.children[11] = HAnimSite646;

HAnimJoint604.children = new MFNode();

HAnimJoint604.children[0] = HAnimSegment605;

let HAnimJoint649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint649.name = "l_eyelid_joint";
HAnimJoint649.DEF = "hanim_l_eyelid_joint";
HAnimJoint649.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint649.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint649.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.children[1] = HAnimJoint649;

let HAnimJoint650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint650.name = "r_eyelid_joint";
HAnimJoint650.DEF = "hanim_r_eyelid_joint";
HAnimJoint650.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint650.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint650.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.children[2] = HAnimJoint650;

let HAnimJoint651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint651.name = "l_eyeball_joint";
HAnimJoint651.DEF = "hanim_l_eyeball_joint";
HAnimJoint651.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint651.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint651.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.children[3] = HAnimJoint651;

let HAnimJoint652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint652.name = "r_eyeball_joint";
HAnimJoint652.DEF = "hanim_r_eyeball_joint";
HAnimJoint652.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint652.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint652.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.children[4] = HAnimJoint652;

let HAnimJoint653 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint653.name = "l_eyebrow_joint";
HAnimJoint653.DEF = "hanim_l_eyebrow_joint";
HAnimJoint653.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint653.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint653.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.children[5] = HAnimJoint653;

let HAnimJoint654 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint654.name = "r_eyebrow_joint";
HAnimJoint654.DEF = "hanim_r_eyebrow_joint";
HAnimJoint654.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint654.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint654.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.children[6] = HAnimJoint654;

let HAnimJoint655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint655.name = "temporomandibular";
HAnimJoint655.DEF = "hanim_temporomandibular";
HAnimJoint655.center = new SFVec3f(new float[-0.0002,1.3043,-0.0865]);
HAnimJoint655.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint655.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint604.children[7] = HAnimJoint655;

HAnimJoint562.children[1] = HAnimJoint604;

HAnimJoint553.children[1] = HAnimJoint562;

HAnimJoint541.children[1] = HAnimJoint553;

HAnimJoint532.children[1] = HAnimJoint541;

HAnimJoint523.children[1] = HAnimJoint532;

HAnimJoint514.children[1] = HAnimJoint523;

HAnimJoint505.children[1] = HAnimJoint514;

HAnimJoint452.children[1] = HAnimJoint505;

let HAnimJoint656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint656.name = "l_sternoclavicular";
HAnimJoint656.DEF = "hanim_l_sternoclavicular";
HAnimJoint656.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint656.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint656.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment657 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment657.name = "l_clavicle";
HAnimSegment657.DEF = "hanim_l_clavicle";
let Transform658 = browser.currentScene.createNode("Transform");
Transform658.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
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
Coordinate663.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet662.coord = Coordinate663;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA664 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimSegment657.children[1] = Shape661;

HAnimJoint656.children = new MFNode();

HAnimJoint656.children[0] = HAnimSegment657;

let HAnimJoint665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint665.name = "l_acromioclavicular";
HAnimJoint665.DEF = "hanim_l_acromioclavicular";
HAnimJoint665.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint665.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint665.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment666 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment666.name = "l_scapula";
HAnimSegment666.DEF = "hanim_l_scapula";
let Transform667 = browser.currentScene.createNode("Transform");
Transform667.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Transform668 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape669 = browser.currentScene.createNode("Shape");
Shape669.USE = "HAnimJointShape";
Transform668.children = new MFNode();

Transform668.children[0] = Shape669;

Transform667.children = new MFNode();

Transform667.children[0] = Transform668;

HAnimSegment666.children = new MFNode();

HAnimSegment666.children[0] = Transform667;

let Shape670 = browser.currentScene.createNode("Shape");
let LineSet671 = browser.currentScene.createNode("LineSet");
LineSet671.vertexCount = new MFInt32(new int[2]);
let Coordinate672 = browser.currentScene.createNode("Coordinate");
Coordinate672.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet671.coord = Coordinate672;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA673 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA673.USE = "HAnimSegmentLineColorRGBA";
LineSet671.color = ColorRGBA673;

Shape670.geometry = LineSet671;

HAnimSegment666.children[1] = Shape670;

let HAnimSite674 = browser.currentScene.createNode("HAnimSite");
HAnimSite674.name = "l_bideltoid_pt";
HAnimSite674.DEF = "hanim_l_bideltoid_pt";
let TouchSensor675 = browser.currentScene.createNode("TouchSensor");
TouchSensor675.description = "HAnimSite l_bideltoid_pt";
HAnimSite674.children = new MFNode();

HAnimSite674.children[0] = TouchSensor675;

let Shape676 = browser.currentScene.createNode("Shape");
Shape676.USE = "HAnimSiteShape";
HAnimSite674.children[1] = Shape676;

HAnimSegment666.children[2] = HAnimSite674;

let HAnimSite677 = browser.currentScene.createNode("HAnimSite");
HAnimSite677.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite677.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite677.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor678 = browser.currentScene.createNode("TouchSensor");
TouchSensor678.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite677.children = new MFNode();

HAnimSite677.children[0] = TouchSensor678;

let Shape679 = browser.currentScene.createNode("Shape");
Shape679.USE = "HAnimSiteShape";
HAnimSite677.children[1] = Shape679;

HAnimSegment666.children[3] = HAnimSite677;

HAnimJoint665.children = new MFNode();

HAnimJoint665.children[0] = HAnimSegment666;

let HAnimJoint680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint680.name = "l_shoulder";
HAnimJoint680.DEF = "hanim_l_shoulder";
HAnimJoint680.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint680.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint680.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment681 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment681.name = "l_upperarm";
HAnimSegment681.DEF = "hanim_l_upperarm";
let Transform682 = browser.currentScene.createNode("Transform");
Transform682.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Transform683 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape684 = browser.currentScene.createNode("Shape");
Shape684.USE = "HAnimJointShape";
Transform683.children = new MFNode();

Transform683.children[0] = Shape684;

Transform682.children = new MFNode();

Transform682.children[0] = Transform683;

HAnimSegment681.children = new MFNode();

HAnimSegment681.children[0] = Transform682;

let Shape685 = browser.currentScene.createNode("Shape");
let LineSet686 = browser.currentScene.createNode("LineSet");
LineSet686.vertexCount = new MFInt32(new int[2]);
let Coordinate687 = browser.currentScene.createNode("Coordinate");
Coordinate687.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet686.coord = Coordinate687;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA688 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA688.USE = "HAnimSegmentLineColorRGBA";
LineSet686.color = ColorRGBA688;

Shape685.geometry = LineSet686;

HAnimSegment681.children[1] = Shape685;

let HAnimSite689 = browser.currentScene.createNode("HAnimSite");
HAnimSite689.name = "l_humeral_medial_epicondyles_pt";
HAnimSite689.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite689.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor690 = browser.currentScene.createNode("TouchSensor");
TouchSensor690.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = TouchSensor690;

let Shape691 = browser.currentScene.createNode("Shape");
Shape691.USE = "HAnimSiteShape";
HAnimSite689.children[1] = Shape691;

HAnimSegment681.children[2] = HAnimSite689;

let HAnimSite692 = browser.currentScene.createNode("HAnimSite");
HAnimSite692.name = "l_olecranon_pt";
HAnimSite692.DEF = "hanim_l_olecranon_pt";
HAnimSite692.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor693 = browser.currentScene.createNode("TouchSensor");
TouchSensor693.description = "HAnimSite l_olecranon_pt";
HAnimSite692.children = new MFNode();

HAnimSite692.children[0] = TouchSensor693;

let Shape694 = browser.currentScene.createNode("Shape");
Shape694.USE = "HAnimSiteShape";
HAnimSite692.children[1] = Shape694;

HAnimSegment681.children[3] = HAnimSite692;

let HAnimSite695 = browser.currentScene.createNode("HAnimSite");
HAnimSite695.name = "l_radial_styloid_pt";
HAnimSite695.DEF = "hanim_l_radial_styloid_pt";
HAnimSite695.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor696 = browser.currentScene.createNode("TouchSensor");
TouchSensor696.description = "HAnimSite l_radial_styloid_pt";
HAnimSite695.children = new MFNode();

HAnimSite695.children[0] = TouchSensor696;

let Shape697 = browser.currentScene.createNode("Shape");
Shape697.USE = "HAnimSiteShape";
HAnimSite695.children[1] = Shape697;

HAnimSegment681.children[4] = HAnimSite695;

let HAnimSite698 = browser.currentScene.createNode("HAnimSite");
HAnimSite698.name = "l_radiale_pt";
HAnimSite698.DEF = "hanim_l_radiale_pt";
HAnimSite698.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor699 = browser.currentScene.createNode("TouchSensor");
TouchSensor699.description = "HAnimSite l_radiale_pt";
HAnimSite698.children = new MFNode();

HAnimSite698.children[0] = TouchSensor699;

let Shape700 = browser.currentScene.createNode("Shape");
Shape700.USE = "HAnimSiteShape";
HAnimSite698.children[1] = Shape700;

HAnimSegment681.children[5] = HAnimSite698;

HAnimJoint680.children = new MFNode();

HAnimJoint680.children[0] = HAnimSegment681;

let HAnimJoint701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint701.name = "l_elbow";
HAnimJoint701.DEF = "hanim_l_elbow";
HAnimJoint701.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint701.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint701.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment702 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment702.name = "l_forearm";
HAnimSegment702.DEF = "hanim_l_forearm";
let Transform703 = browser.currentScene.createNode("Transform");
Transform703.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
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
Coordinate708.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet707.coord = Coordinate708;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA709 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA";
LineSet707.color = ColorRGBA709;

Shape706.geometry = LineSet707;

HAnimSegment702.children[1] = Shape706;

let HAnimSite710 = browser.currentScene.createNode("HAnimSite");
HAnimSite710.name = "l_ulnar_styloid_pt";
HAnimSite710.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite710.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor711 = browser.currentScene.createNode("TouchSensor");
TouchSensor711.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite710.children = new MFNode();

HAnimSite710.children[0] = TouchSensor711;

let Shape712 = browser.currentScene.createNode("Shape");
Shape712.USE = "HAnimSiteShape";
HAnimSite710.children[1] = Shape712;

HAnimSegment702.children[2] = HAnimSite710;

HAnimJoint701.children = new MFNode();

HAnimJoint701.children[0] = HAnimSegment702;

let HAnimJoint713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint713.name = "l_radiocarpal";
HAnimJoint713.DEF = "hanim_l_radiocarpal";
HAnimJoint713.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint713.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint713.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment714 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment714.name = "l_carpal";
HAnimSegment714.DEF = "hanim_l_carpal";
let Transform715 = browser.currentScene.createNode("Transform");
Transform715.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform715.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform715.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
let Transform716 = browser.currentScene.createNode("Transform");
Transform716.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
let Shape717 = browser.currentScene.createNode("Shape");
Shape717.USE = "HAnimJointShape";
Transform716.children = new MFNode();

Transform716.children[0] = Shape717;

Transform715.children = new MFNode();

Transform715.children[0] = Transform716;

HAnimSegment714.children = new MFNode();

HAnimSegment714.children[0] = Transform715;

let Shape718 = browser.currentScene.createNode("Shape");
let LineSet719 = browser.currentScene.createNode("LineSet");
LineSet719.vertexCount = new MFInt32(new int[2]);
let Coordinate720 = browser.currentScene.createNode("Coordinate");
Coordinate720.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet719.coord = Coordinate720;

//from l_radiocarpal to l_carpometacarpal_1 vertices 2
let ColorRGBA721 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA721.USE = "HAnimSegmentLineColorRGBA";
LineSet719.color = ColorRGBA721;

Shape718.geometry = LineSet719;

HAnimSegment714.children[1] = Shape718;

let Shape722 = browser.currentScene.createNode("Shape");
let LineSet723 = browser.currentScene.createNode("LineSet");
LineSet723.vertexCount = new MFInt32(new int[2]);
let Coordinate724 = browser.currentScene.createNode("Coordinate");
Coordinate724.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet723.coord = Coordinate724;

//from l_radiocarpal to l_carpometacarpal_2 vertices 2
let ColorRGBA725 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA725.USE = "HAnimSegmentLineColorRGBA";
LineSet723.color = ColorRGBA725;

Shape722.geometry = LineSet723;

HAnimSegment714.children[2] = Shape722;

let HAnimSite726 = browser.currentScene.createNode("HAnimSite");
HAnimSite726.name = "l_metacarpal_phalanx_2_pt";
HAnimSite726.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite726.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor727 = browser.currentScene.createNode("TouchSensor");
TouchSensor727.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite726.children = new MFNode();

HAnimSite726.children[0] = TouchSensor727;

let Shape728 = browser.currentScene.createNode("Shape");
Shape728.USE = "HAnimSiteShape";
HAnimSite726.children[1] = Shape728;

HAnimSegment714.children[3] = HAnimSite726;

let Shape729 = browser.currentScene.createNode("Shape");
let LineSet730 = browser.currentScene.createNode("LineSet");
LineSet730.vertexCount = new MFInt32(new int[2]);
let Coordinate731 = browser.currentScene.createNode("Coordinate");
Coordinate731.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet730.coord = Coordinate731;

//from l_radiocarpal to l_carpometacarpal_3 vertices 2
let ColorRGBA732 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA732.USE = "HAnimSegmentLineColorRGBA";
LineSet730.color = ColorRGBA732;

Shape729.geometry = LineSet730;

HAnimSegment714.children[4] = Shape729;

let HAnimSite733 = browser.currentScene.createNode("HAnimSite");
HAnimSite733.name = "l_metacarpal_phalanx_3_pt";
HAnimSite733.DEF = "hanim_l_metacarpal_phalanx_3_pt";
let TouchSensor734 = browser.currentScene.createNode("TouchSensor");
TouchSensor734.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite733.children = new MFNode();

HAnimSite733.children[0] = TouchSensor734;

let Shape735 = browser.currentScene.createNode("Shape");
Shape735.USE = "HAnimSiteShape";
HAnimSite733.children[1] = Shape735;

HAnimSegment714.children[5] = HAnimSite733;

let Shape736 = browser.currentScene.createNode("Shape");
let LineSet737 = browser.currentScene.createNode("LineSet");
LineSet737.vertexCount = new MFInt32(new int[2]);
let Coordinate738 = browser.currentScene.createNode("Coordinate");
Coordinate738.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet737.coord = Coordinate738;

//from l_radiocarpal to l_carpometacarpal_4 vertices 2
let ColorRGBA739 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA739.USE = "HAnimSegmentLineColorRGBA";
LineSet737.color = ColorRGBA739;

Shape736.geometry = LineSet737;

HAnimSegment714.children[6] = Shape736;

let Shape740 = browser.currentScene.createNode("Shape");
let LineSet741 = browser.currentScene.createNode("LineSet");
LineSet741.vertexCount = new MFInt32(new int[2]);
let Coordinate742 = browser.currentScene.createNode("Coordinate");
Coordinate742.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet741.coord = Coordinate742;

//from l_radiocarpal to l_carpometacarpal_5 vertices 2
let ColorRGBA743 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA743.USE = "HAnimSegmentLineColorRGBA";
LineSet741.color = ColorRGBA743;

Shape740.geometry = LineSet741;

HAnimSegment714.children[7] = Shape740;

let HAnimSite744 = browser.currentScene.createNode("HAnimSite");
HAnimSite744.name = "l_metacarpal_phalanx_5_pt";
HAnimSite744.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite744.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor745 = browser.currentScene.createNode("TouchSensor");
TouchSensor745.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite744.children = new MFNode();

HAnimSite744.children[0] = TouchSensor745;

let Shape746 = browser.currentScene.createNode("Shape");
Shape746.USE = "HAnimSiteShape";
HAnimSite744.children[1] = Shape746;

HAnimSegment714.children[8] = HAnimSite744;

HAnimJoint713.children = new MFNode();

HAnimJoint713.children[0] = HAnimSegment714;

let HAnimJoint747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint747.name = "l_carpometacarpal_1";
HAnimJoint747.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint747.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint747.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint747.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment748 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment748.name = "l_metacarpal_1";
HAnimSegment748.DEF = "hanim_l_metacarpal_1";
let Transform749 = browser.currentScene.createNode("Transform");
Transform749.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Transform750 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape751 = browser.currentScene.createNode("Shape");
Shape751.USE = "HAnimJointShape";
Transform750.children = new MFNode();

Transform750.children[0] = Shape751;

Transform749.children = new MFNode();

Transform749.children[0] = Transform750;

HAnimSegment748.children = new MFNode();

HAnimSegment748.children[0] = Transform749;

let Shape752 = browser.currentScene.createNode("Shape");
let LineSet753 = browser.currentScene.createNode("LineSet");
LineSet753.vertexCount = new MFInt32(new int[2]);
let Coordinate754 = browser.currentScene.createNode("Coordinate");
Coordinate754.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet753.coord = Coordinate754;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA755 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA755.USE = "HAnimSegmentLineColorRGBA";
LineSet753.color = ColorRGBA755;

Shape752.geometry = LineSet753;

HAnimSegment748.children[1] = Shape752;

HAnimJoint747.children = new MFNode();

HAnimJoint747.children[0] = HAnimSegment748;

let HAnimJoint756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint756.name = "l_metacarpophalangeal_1";
HAnimJoint756.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint756.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint756.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint756.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment757.name = "l_carpal_proximal_phalanx_1";
HAnimSegment757.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform758 = browser.currentScene.createNode("Transform");
Transform758.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Transform759 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape760 = browser.currentScene.createNode("Shape");
Shape760.USE = "HAnimJointShape";
Transform759.children = new MFNode();

Transform759.children[0] = Shape760;

Transform758.children = new MFNode();

Transform758.children[0] = Transform759;

HAnimSegment757.children = new MFNode();

HAnimSegment757.children[0] = Transform758;

let Shape761 = browser.currentScene.createNode("Shape");
let LineSet762 = browser.currentScene.createNode("LineSet");
LineSet762.vertexCount = new MFInt32(new int[2]);
let Coordinate763 = browser.currentScene.createNode("Coordinate");
Coordinate763.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet762.coord = Coordinate763;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA764 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA764.USE = "HAnimSegmentLineColorRGBA";
LineSet762.color = ColorRGBA764;

Shape761.geometry = LineSet762;

HAnimSegment757.children[1] = Shape761;

let HAnimSite765 = browser.currentScene.createNode("HAnimSite");
HAnimSite765.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite765.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
let TouchSensor766 = browser.currentScene.createNode("TouchSensor");
TouchSensor766.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite765.children = new MFNode();

HAnimSite765.children[0] = TouchSensor766;

let Shape767 = browser.currentScene.createNode("Shape");
Shape767.USE = "HAnimSiteShape";
HAnimSite765.children[1] = Shape767;

HAnimSegment757.children[2] = HAnimSite765;

HAnimJoint756.children = new MFNode();

HAnimJoint756.children[0] = HAnimSegment757;

let HAnimJoint768 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint768.name = "l_carpal_interphalangeal_1";
HAnimJoint768.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint768.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint768.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint768.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint756.children[1] = HAnimJoint768;

HAnimJoint747.children[1] = HAnimJoint756;

HAnimJoint713.children[1] = HAnimJoint747;

let HAnimJoint769 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint769.name = "l_carpometacarpal_2";
HAnimJoint769.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint769.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint769.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint769.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment770.name = "l_metacarpal_2";
HAnimSegment770.DEF = "hanim_l_metacarpal_2";
let Transform771 = browser.currentScene.createNode("Transform");
Transform771.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Transform772 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape773 = browser.currentScene.createNode("Shape");
Shape773.USE = "HAnimJointShape";
Transform772.children = new MFNode();

Transform772.children[0] = Shape773;

Transform771.children = new MFNode();

Transform771.children[0] = Transform772;

HAnimSegment770.children = new MFNode();

HAnimSegment770.children[0] = Transform771;

let Shape774 = browser.currentScene.createNode("Shape");
let LineSet775 = browser.currentScene.createNode("LineSet");
LineSet775.vertexCount = new MFInt32(new int[2]);
let Coordinate776 = browser.currentScene.createNode("Coordinate");
Coordinate776.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet775.coord = Coordinate776;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA777 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA777.USE = "HAnimSegmentLineColorRGBA";
LineSet775.color = ColorRGBA777;

Shape774.geometry = LineSet775;

HAnimSegment770.children[1] = Shape774;

HAnimJoint769.children = new MFNode();

HAnimJoint769.children[0] = HAnimSegment770;

let HAnimJoint778 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint778.name = "l_metacarpophalangeal_2";
HAnimJoint778.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint778.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint778.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint778.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment779.name = "l_carpal_proximal_phalanx_2";
HAnimSegment779.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform780 = browser.currentScene.createNode("Transform");
Transform780.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Transform781 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape782 = browser.currentScene.createNode("Shape");
Shape782.USE = "HAnimJointShape";
Transform781.children = new MFNode();

Transform781.children[0] = Shape782;

Transform780.children = new MFNode();

Transform780.children[0] = Transform781;

HAnimSegment779.children = new MFNode();

HAnimSegment779.children[0] = Transform780;

let Shape783 = browser.currentScene.createNode("Shape");
let LineSet784 = browser.currentScene.createNode("LineSet");
LineSet784.vertexCount = new MFInt32(new int[2]);
let Coordinate785 = browser.currentScene.createNode("Coordinate");
Coordinate785.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet784.coord = Coordinate785;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA786 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA786.USE = "HAnimSegmentLineColorRGBA";
LineSet784.color = ColorRGBA786;

Shape783.geometry = LineSet784;

HAnimSegment779.children[1] = Shape783;

HAnimJoint778.children = new MFNode();

HAnimJoint778.children[0] = HAnimSegment779;

let HAnimJoint787 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint787.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint787.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint787.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint787.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint787.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment788.name = "l_carpal_middle_phalanx_2";
HAnimSegment788.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform789 = browser.currentScene.createNode("Transform");
Transform789.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Transform790 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape791 = browser.currentScene.createNode("Shape");
Shape791.USE = "HAnimJointShape";
Transform790.children = new MFNode();

Transform790.children[0] = Shape791;

Transform789.children = new MFNode();

Transform789.children[0] = Transform790;

HAnimSegment788.children = new MFNode();

HAnimSegment788.children[0] = Transform789;

let Shape792 = browser.currentScene.createNode("Shape");
let LineSet793 = browser.currentScene.createNode("LineSet");
LineSet793.vertexCount = new MFInt32(new int[2]);
let Coordinate794 = browser.currentScene.createNode("Coordinate");
Coordinate794.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet793.coord = Coordinate794;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA795 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA795.USE = "HAnimSegmentLineColorRGBA";
LineSet793.color = ColorRGBA795;

Shape792.geometry = LineSet793;

HAnimSegment788.children[1] = Shape792;

let HAnimSite796 = browser.currentScene.createNode("HAnimSite");
HAnimSite796.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite796.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
let TouchSensor797 = browser.currentScene.createNode("TouchSensor");
TouchSensor797.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite796.children = new MFNode();

HAnimSite796.children[0] = TouchSensor797;

let Shape798 = browser.currentScene.createNode("Shape");
Shape798.USE = "HAnimSiteShape";
HAnimSite796.children[1] = Shape798;

HAnimSegment788.children[2] = HAnimSite796;

let HAnimSite799 = browser.currentScene.createNode("HAnimSite");
HAnimSite799.name = "l_dactylion_pt";
HAnimSite799.DEF = "hanim_l_dactylion_pt";
HAnimSite799.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor800 = browser.currentScene.createNode("TouchSensor");
TouchSensor800.description = "HAnimSite l_dactylion_pt";
HAnimSite799.children = new MFNode();

HAnimSite799.children[0] = TouchSensor800;

let Shape801 = browser.currentScene.createNode("Shape");
Shape801.USE = "HAnimSiteShape";
HAnimSite799.children[1] = Shape801;

HAnimSegment788.children[3] = HAnimSite799;

HAnimJoint787.children = new MFNode();

HAnimJoint787.children[0] = HAnimSegment788;

let HAnimJoint802 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint802.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint802.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint802.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint802.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint802.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint787.children[1] = HAnimJoint802;

HAnimJoint778.children[1] = HAnimJoint787;

HAnimJoint769.children[1] = HAnimJoint778;

HAnimJoint713.children[2] = HAnimJoint769;

let HAnimJoint803 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint803.name = "l_carpometacarpal_3";
HAnimJoint803.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint803.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint803.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint803.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment804.name = "l_metacarpal_3";
HAnimSegment804.DEF = "hanim_l_metacarpal_3";
let Transform805 = browser.currentScene.createNode("Transform");
Transform805.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Transform806 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape807 = browser.currentScene.createNode("Shape");
Shape807.USE = "HAnimJointShape";
Transform806.children = new MFNode();

Transform806.children[0] = Shape807;

Transform805.children = new MFNode();

Transform805.children[0] = Transform806;

HAnimSegment804.children = new MFNode();

HAnimSegment804.children[0] = Transform805;

let Shape808 = browser.currentScene.createNode("Shape");
let LineSet809 = browser.currentScene.createNode("LineSet");
LineSet809.vertexCount = new MFInt32(new int[2]);
let Coordinate810 = browser.currentScene.createNode("Coordinate");
Coordinate810.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet809.coord = Coordinate810;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA811 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA811.USE = "HAnimSegmentLineColorRGBA";
LineSet809.color = ColorRGBA811;

Shape808.geometry = LineSet809;

HAnimSegment804.children[1] = Shape808;

HAnimJoint803.children = new MFNode();

HAnimJoint803.children[0] = HAnimSegment804;

let HAnimJoint812 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint812.name = "l_metacarpophalangeal_3";
HAnimJoint812.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint812.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint812.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint812.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment813.name = "l_carpal_proximal_phalanx_3";
HAnimSegment813.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform814 = browser.currentScene.createNode("Transform");
Transform814.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Transform815 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape816 = browser.currentScene.createNode("Shape");
Shape816.USE = "HAnimJointShape";
Transform815.children = new MFNode();

Transform815.children[0] = Shape816;

Transform814.children = new MFNode();

Transform814.children[0] = Transform815;

HAnimSegment813.children = new MFNode();

HAnimSegment813.children[0] = Transform814;

let Shape817 = browser.currentScene.createNode("Shape");
let LineSet818 = browser.currentScene.createNode("LineSet");
LineSet818.vertexCount = new MFInt32(new int[2]);
let Coordinate819 = browser.currentScene.createNode("Coordinate");
Coordinate819.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet818.coord = Coordinate819;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA820 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA820.USE = "HAnimSegmentLineColorRGBA";
LineSet818.color = ColorRGBA820;

Shape817.geometry = LineSet818;

HAnimSegment813.children[1] = Shape817;

HAnimJoint812.children = new MFNode();

HAnimJoint812.children[0] = HAnimSegment813;

let HAnimJoint821 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint821.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint821.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint821.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint821.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint821.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment822.name = "l_carpal_middle_phalanx_3";
HAnimSegment822.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform823 = browser.currentScene.createNode("Transform");
Transform823.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Transform824 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape825 = browser.currentScene.createNode("Shape");
Shape825.USE = "HAnimJointShape";
Transform824.children = new MFNode();

Transform824.children[0] = Shape825;

Transform823.children = new MFNode();

Transform823.children[0] = Transform824;

HAnimSegment822.children = new MFNode();

HAnimSegment822.children[0] = Transform823;

let Shape826 = browser.currentScene.createNode("Shape");
let LineSet827 = browser.currentScene.createNode("LineSet");
LineSet827.vertexCount = new MFInt32(new int[2]);
let Coordinate828 = browser.currentScene.createNode("Coordinate");
Coordinate828.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet827.coord = Coordinate828;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA829 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA829.USE = "HAnimSegmentLineColorRGBA";
LineSet827.color = ColorRGBA829;

Shape826.geometry = LineSet827;

HAnimSegment822.children[1] = Shape826;

let HAnimSite830 = browser.currentScene.createNode("HAnimSite");
HAnimSite830.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite830.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
let TouchSensor831 = browser.currentScene.createNode("TouchSensor");
TouchSensor831.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite830.children = new MFNode();

HAnimSite830.children[0] = TouchSensor831;

let Shape832 = browser.currentScene.createNode("Shape");
Shape832.USE = "HAnimSiteShape";
HAnimSite830.children[1] = Shape832;

HAnimSegment822.children[2] = HAnimSite830;

HAnimJoint821.children = new MFNode();

HAnimJoint821.children[0] = HAnimSegment822;

let HAnimJoint833 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint833.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint833.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint833.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint833.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint833.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint821.children[1] = HAnimJoint833;

HAnimJoint812.children[1] = HAnimJoint821;

HAnimJoint803.children[1] = HAnimJoint812;

HAnimJoint713.children[3] = HAnimJoint803;

let HAnimJoint834 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint834.name = "l_carpometacarpal_4";
HAnimJoint834.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint834.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint834.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint834.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment835.name = "l_metacarpal_4";
HAnimSegment835.DEF = "hanim_l_metacarpal_4";
let Transform836 = browser.currentScene.createNode("Transform");
Transform836.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Transform837 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape838 = browser.currentScene.createNode("Shape");
Shape838.USE = "HAnimJointShape";
Transform837.children = new MFNode();

Transform837.children[0] = Shape838;

Transform836.children = new MFNode();

Transform836.children[0] = Transform837;

HAnimSegment835.children = new MFNode();

HAnimSegment835.children[0] = Transform836;

let Shape839 = browser.currentScene.createNode("Shape");
let LineSet840 = browser.currentScene.createNode("LineSet");
LineSet840.vertexCount = new MFInt32(new int[2]);
let Coordinate841 = browser.currentScene.createNode("Coordinate");
Coordinate841.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet840.coord = Coordinate841;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA842 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA842.USE = "HAnimSegmentLineColorRGBA";
LineSet840.color = ColorRGBA842;

Shape839.geometry = LineSet840;

HAnimSegment835.children[1] = Shape839;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimSegment835;

let HAnimJoint843 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint843.name = "l_metacarpophalangeal_4";
HAnimJoint843.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint843.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint843.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint843.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment844.name = "l_carpal_proximal_phalanx_4";
HAnimSegment844.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform845 = browser.currentScene.createNode("Transform");
Transform845.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Transform846 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape847 = browser.currentScene.createNode("Shape");
Shape847.USE = "HAnimJointShape";
Transform846.children = new MFNode();

Transform846.children[0] = Shape847;

Transform845.children = new MFNode();

Transform845.children[0] = Transform846;

HAnimSegment844.children = new MFNode();

HAnimSegment844.children[0] = Transform845;

let Shape848 = browser.currentScene.createNode("Shape");
let LineSet849 = browser.currentScene.createNode("LineSet");
LineSet849.vertexCount = new MFInt32(new int[2]);
let Coordinate850 = browser.currentScene.createNode("Coordinate");
Coordinate850.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet849.coord = Coordinate850;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA851 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA851.USE = "HAnimSegmentLineColorRGBA";
LineSet849.color = ColorRGBA851;

Shape848.geometry = LineSet849;

HAnimSegment844.children[1] = Shape848;

HAnimJoint843.children = new MFNode();

HAnimJoint843.children[0] = HAnimSegment844;

let HAnimJoint852 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint852.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint852.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint852.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint852.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint852.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment853.name = "l_carpal_middle_phalanx_4";
HAnimSegment853.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform854 = browser.currentScene.createNode("Transform");
Transform854.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
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
Coordinate859.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet858.coord = Coordinate859;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA860 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA860.USE = "HAnimSegmentLineColorRGBA";
LineSet858.color = ColorRGBA860;

Shape857.geometry = LineSet858;

HAnimSegment853.children[1] = Shape857;

let HAnimSite861 = browser.currentScene.createNode("HAnimSite");
HAnimSite861.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite861.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
let TouchSensor862 = browser.currentScene.createNode("TouchSensor");
TouchSensor862.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite861.children = new MFNode();

HAnimSite861.children[0] = TouchSensor862;

let Shape863 = browser.currentScene.createNode("Shape");
Shape863.USE = "HAnimSiteShape";
HAnimSite861.children[1] = Shape863;

HAnimSegment853.children[2] = HAnimSite861;

HAnimJoint852.children = new MFNode();

HAnimJoint852.children[0] = HAnimSegment853;

let HAnimJoint864 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint864.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint864.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint864.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint864.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint864.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint852.children[1] = HAnimJoint864;

HAnimJoint843.children[1] = HAnimJoint852;

HAnimJoint834.children[1] = HAnimJoint843;

HAnimJoint713.children[4] = HAnimJoint834;

let HAnimJoint865 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint865.name = "l_carpometacarpal_5";
HAnimJoint865.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint865.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint865.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint865.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment866 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment866.name = "l_metacarpal_5";
HAnimSegment866.DEF = "hanim_l_metacarpal_5";
let Transform867 = browser.currentScene.createNode("Transform");
Transform867.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Transform868 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape869 = browser.currentScene.createNode("Shape");
Shape869.USE = "HAnimJointShape";
Transform868.children = new MFNode();

Transform868.children[0] = Shape869;

Transform867.children = new MFNode();

Transform867.children[0] = Transform868;

HAnimSegment866.children = new MFNode();

HAnimSegment866.children[0] = Transform867;

let Shape870 = browser.currentScene.createNode("Shape");
let LineSet871 = browser.currentScene.createNode("LineSet");
LineSet871.vertexCount = new MFInt32(new int[2]);
let Coordinate872 = browser.currentScene.createNode("Coordinate");
Coordinate872.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet871.coord = Coordinate872;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA873 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA873.USE = "HAnimSegmentLineColorRGBA";
LineSet871.color = ColorRGBA873;

Shape870.geometry = LineSet871;

HAnimSegment866.children[1] = Shape870;

HAnimJoint865.children = new MFNode();

HAnimJoint865.children[0] = HAnimSegment866;

let HAnimJoint874 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint874.name = "l_metacarpophalangeal_5";
HAnimJoint874.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint874.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint874.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint874.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment875 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment875.name = "l_carpal_proximal_phalanx_5";
HAnimSegment875.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform876 = browser.currentScene.createNode("Transform");
Transform876.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Transform877 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape878 = browser.currentScene.createNode("Shape");
Shape878.USE = "HAnimJointShape";
Transform877.children = new MFNode();

Transform877.children[0] = Shape878;

Transform876.children = new MFNode();

Transform876.children[0] = Transform877;

HAnimSegment875.children = new MFNode();

HAnimSegment875.children[0] = Transform876;

let Shape879 = browser.currentScene.createNode("Shape");
let LineSet880 = browser.currentScene.createNode("LineSet");
LineSet880.vertexCount = new MFInt32(new int[2]);
let Coordinate881 = browser.currentScene.createNode("Coordinate");
Coordinate881.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet880.coord = Coordinate881;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA882 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA882.USE = "HAnimSegmentLineColorRGBA";
LineSet880.color = ColorRGBA882;

Shape879.geometry = LineSet880;

HAnimSegment875.children[1] = Shape879;

HAnimJoint874.children = new MFNode();

HAnimJoint874.children[0] = HAnimSegment875;

let HAnimJoint883 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint883.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint883.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint883.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint883.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint883.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment884 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment884.name = "l_carpal_middle_phalanx_5";
HAnimSegment884.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform885 = browser.currentScene.createNode("Transform");
Transform885.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Transform886 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape887 = browser.currentScene.createNode("Shape");
Shape887.USE = "HAnimJointShape";
Transform886.children = new MFNode();

Transform886.children[0] = Shape887;

Transform885.children = new MFNode();

Transform885.children[0] = Transform886;

HAnimSegment884.children = new MFNode();

HAnimSegment884.children[0] = Transform885;

let Shape888 = browser.currentScene.createNode("Shape");
let LineSet889 = browser.currentScene.createNode("LineSet");
LineSet889.vertexCount = new MFInt32(new int[2]);
let Coordinate890 = browser.currentScene.createNode("Coordinate");
Coordinate890.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet889.coord = Coordinate890;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA891 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA891.USE = "HAnimSegmentLineColorRGBA";
LineSet889.color = ColorRGBA891;

Shape888.geometry = LineSet889;

HAnimSegment884.children[1] = Shape888;

let HAnimSite892 = browser.currentScene.createNode("HAnimSite");
HAnimSite892.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite892.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
let TouchSensor893 = browser.currentScene.createNode("TouchSensor");
TouchSensor893.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite892.children = new MFNode();

HAnimSite892.children[0] = TouchSensor893;

let Shape894 = browser.currentScene.createNode("Shape");
Shape894.USE = "HAnimSiteShape";
HAnimSite892.children[1] = Shape894;

HAnimSegment884.children[2] = HAnimSite892;

HAnimJoint883.children = new MFNode();

HAnimJoint883.children[0] = HAnimSegment884;

let HAnimJoint895 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint895.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint895.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint895.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint895.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint895.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint883.children[1] = HAnimJoint895;

HAnimJoint874.children[1] = HAnimJoint883;

HAnimJoint865.children[1] = HAnimJoint874;

HAnimJoint713.children[5] = HAnimJoint865;

HAnimJoint701.children[1] = HAnimJoint713;

HAnimJoint680.children[1] = HAnimJoint701;

HAnimJoint665.children[1] = HAnimJoint680;

HAnimJoint656.children[1] = HAnimJoint665;

HAnimJoint452.children[2] = HAnimJoint656;

let HAnimJoint896 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint896.name = "r_sternoclavicular";
HAnimJoint896.DEF = "hanim_r_sternoclavicular";
HAnimJoint896.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint896.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint896.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment897 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment897.name = "r_clavicle";
HAnimSegment897.DEF = "hanim_r_clavicle";
let Transform898 = browser.currentScene.createNode("Transform");
Transform898.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let Transform899 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape900 = browser.currentScene.createNode("Shape");
Shape900.USE = "HAnimJointShape";
Transform899.children = new MFNode();

Transform899.children[0] = Shape900;

Transform898.children = new MFNode();

Transform898.children[0] = Transform899;

HAnimSegment897.children = new MFNode();

HAnimSegment897.children[0] = Transform898;

let Shape901 = browser.currentScene.createNode("Shape");
let LineSet902 = browser.currentScene.createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
let Coordinate903 = browser.currentScene.createNode("Coordinate");
Coordinate903.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet902.coord = Coordinate903;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA904 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA904.USE = "HAnimSegmentLineColorRGBA";
LineSet902.color = ColorRGBA904;

Shape901.geometry = LineSet902;

HAnimSegment897.children[1] = Shape901;

HAnimJoint896.children = new MFNode();

HAnimJoint896.children[0] = HAnimSegment897;

let HAnimJoint905 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint905.name = "r_acromioclavicular";
HAnimJoint905.DEF = "hanim_r_acromioclavicular";
HAnimJoint905.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint905.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint905.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment906 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment906.name = "r_scapula";
HAnimSegment906.DEF = "hanim_r_scapula";
let Transform907 = browser.currentScene.createNode("Transform");
Transform907.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
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
Coordinate912.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet911.coord = Coordinate912;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA913 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA913.USE = "HAnimSegmentLineColorRGBA";
LineSet911.color = ColorRGBA913;

Shape910.geometry = LineSet911;

HAnimSegment906.children[1] = Shape910;

let HAnimSite914 = browser.currentScene.createNode("HAnimSite");
HAnimSite914.name = "r_bideltoid_pt";
HAnimSite914.DEF = "hanim_r_bideltoid_pt";
let TouchSensor915 = browser.currentScene.createNode("TouchSensor");
TouchSensor915.description = "HAnimSite r_bideltoid_pt";
HAnimSite914.children = new MFNode();

HAnimSite914.children[0] = TouchSensor915;

let Shape916 = browser.currentScene.createNode("Shape");
Shape916.USE = "HAnimSiteShape";
HAnimSite914.children[1] = Shape916;

HAnimSegment906.children[2] = HAnimSite914;

let HAnimSite917 = browser.currentScene.createNode("HAnimSite");
HAnimSite917.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite917.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite917.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor918 = browser.currentScene.createNode("TouchSensor");
TouchSensor918.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite917.children = new MFNode();

HAnimSite917.children[0] = TouchSensor918;

let Shape919 = browser.currentScene.createNode("Shape");
Shape919.USE = "HAnimSiteShape";
HAnimSite917.children[1] = Shape919;

HAnimSegment906.children[3] = HAnimSite917;

HAnimJoint905.children = new MFNode();

HAnimJoint905.children[0] = HAnimSegment906;

let HAnimJoint920 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint920.name = "r_shoulder";
HAnimJoint920.DEF = "hanim_r_shoulder";
HAnimJoint920.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint920.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint920.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment921 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment921.name = "r_upperarm";
HAnimSegment921.DEF = "hanim_r_upperarm";
let Transform922 = browser.currentScene.createNode("Transform");
Transform922.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Transform923 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape924 = browser.currentScene.createNode("Shape");
Shape924.USE = "HAnimJointShape";
Transform923.children = new MFNode();

Transform923.children[0] = Shape924;

Transform922.children = new MFNode();

Transform922.children[0] = Transform923;

HAnimSegment921.children = new MFNode();

HAnimSegment921.children[0] = Transform922;

let Shape925 = browser.currentScene.createNode("Shape");
let LineSet926 = browser.currentScene.createNode("LineSet");
LineSet926.vertexCount = new MFInt32(new int[2]);
let Coordinate927 = browser.currentScene.createNode("Coordinate");
Coordinate927.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet926.coord = Coordinate927;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA928 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA928.USE = "HAnimSegmentLineColorRGBA";
LineSet926.color = ColorRGBA928;

Shape925.geometry = LineSet926;

HAnimSegment921.children[1] = Shape925;

let HAnimSite929 = browser.currentScene.createNode("HAnimSite");
HAnimSite929.name = "r_humeral_medial_epicondyles_pt";
HAnimSite929.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite929.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor930 = browser.currentScene.createNode("TouchSensor");
TouchSensor930.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite929.children = new MFNode();

HAnimSite929.children[0] = TouchSensor930;

let Shape931 = browser.currentScene.createNode("Shape");
Shape931.USE = "HAnimSiteShape";
HAnimSite929.children[1] = Shape931;

HAnimSegment921.children[2] = HAnimSite929;

let HAnimSite932 = browser.currentScene.createNode("HAnimSite");
HAnimSite932.name = "r_olecranon_pt";
HAnimSite932.DEF = "hanim_r_olecranon_pt";
HAnimSite932.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor933 = browser.currentScene.createNode("TouchSensor");
TouchSensor933.description = "HAnimSite r_olecranon_pt";
HAnimSite932.children = new MFNode();

HAnimSite932.children[0] = TouchSensor933;

let Shape934 = browser.currentScene.createNode("Shape");
Shape934.USE = "HAnimSiteShape";
HAnimSite932.children[1] = Shape934;

HAnimSegment921.children[3] = HAnimSite932;

let HAnimSite935 = browser.currentScene.createNode("HAnimSite");
HAnimSite935.name = "r_radial_styloid_pt";
HAnimSite935.DEF = "hanim_r_radial_styloid_pt";
HAnimSite935.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor936 = browser.currentScene.createNode("TouchSensor");
TouchSensor936.description = "HAnimSite r_radial_styloid_pt";
HAnimSite935.children = new MFNode();

HAnimSite935.children[0] = TouchSensor936;

let Shape937 = browser.currentScene.createNode("Shape");
Shape937.USE = "HAnimSiteShape";
HAnimSite935.children[1] = Shape937;

HAnimSegment921.children[4] = HAnimSite935;

let HAnimSite938 = browser.currentScene.createNode("HAnimSite");
HAnimSite938.name = "r_radiale_pt";
HAnimSite938.DEF = "hanim_r_radiale_pt";
HAnimSite938.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor939 = browser.currentScene.createNode("TouchSensor");
TouchSensor939.description = "HAnimSite r_radiale_pt";
HAnimSite938.children = new MFNode();

HAnimSite938.children[0] = TouchSensor939;

let Shape940 = browser.currentScene.createNode("Shape");
Shape940.USE = "HAnimSiteShape";
HAnimSite938.children[1] = Shape940;

HAnimSegment921.children[5] = HAnimSite938;

HAnimJoint920.children = new MFNode();

HAnimJoint920.children[0] = HAnimSegment921;

let HAnimJoint941 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint941.name = "r_elbow";
HAnimJoint941.DEF = "hanim_r_elbow";
HAnimJoint941.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint941.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint941.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment942 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment942.name = "r_forearm";
HAnimSegment942.DEF = "hanim_r_forearm";
let Transform943 = browser.currentScene.createNode("Transform");
Transform943.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
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
Coordinate948.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet947.coord = Coordinate948;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA949 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA949.USE = "HAnimSegmentLineColorRGBA";
LineSet947.color = ColorRGBA949;

Shape946.geometry = LineSet947;

HAnimSegment942.children[1] = Shape946;

let HAnimSite950 = browser.currentScene.createNode("HAnimSite");
HAnimSite950.name = "r_ulnar_styloid_pt";
HAnimSite950.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite950.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor951 = browser.currentScene.createNode("TouchSensor");
TouchSensor951.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite950.children = new MFNode();

HAnimSite950.children[0] = TouchSensor951;

let Shape952 = browser.currentScene.createNode("Shape");
Shape952.USE = "HAnimSiteShape";
HAnimSite950.children[1] = Shape952;

HAnimSegment942.children[2] = HAnimSite950;

HAnimJoint941.children = new MFNode();

HAnimJoint941.children[0] = HAnimSegment942;

let HAnimJoint953 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint953.name = "r_radiocarpal";
HAnimJoint953.DEF = "hanim_r_radiocarpal";
HAnimJoint953.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint953.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint953.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment954 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment954.name = "r_carpal";
HAnimSegment954.DEF = "hanim_r_carpal";
let Transform955 = browser.currentScene.createNode("Transform");
Transform955.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform955.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform955.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
let Transform956 = browser.currentScene.createNode("Transform");
Transform956.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
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
Coordinate960.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet959.coord = Coordinate960;

//from r_radiocarpal to r_carpometacarpal_1 vertices 2
let ColorRGBA961 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA961.USE = "HAnimSegmentLineColorRGBA";
LineSet959.color = ColorRGBA961;

Shape958.geometry = LineSet959;

HAnimSegment954.children[1] = Shape958;

let Shape962 = browser.currentScene.createNode("Shape");
let LineSet963 = browser.currentScene.createNode("LineSet");
LineSet963.vertexCount = new MFInt32(new int[2]);
let Coordinate964 = browser.currentScene.createNode("Coordinate");
Coordinate964.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet963.coord = Coordinate964;

//from r_radiocarpal to r_carpometacarpal_2 vertices 2
let ColorRGBA965 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSegmentLineColorRGBA";
LineSet963.color = ColorRGBA965;

Shape962.geometry = LineSet963;

HAnimSegment954.children[2] = Shape962;

let HAnimSite966 = browser.currentScene.createNode("HAnimSite");
HAnimSite966.name = "r_metacarpal_phalanx_2_pt";
HAnimSite966.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite966.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor967 = browser.currentScene.createNode("TouchSensor");
TouchSensor967.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite966.children = new MFNode();

HAnimSite966.children[0] = TouchSensor967;

let Shape968 = browser.currentScene.createNode("Shape");
Shape968.USE = "HAnimSiteShape";
HAnimSite966.children[1] = Shape968;

HAnimSegment954.children[3] = HAnimSite966;

let Shape969 = browser.currentScene.createNode("Shape");
let LineSet970 = browser.currentScene.createNode("LineSet");
LineSet970.vertexCount = new MFInt32(new int[2]);
let Coordinate971 = browser.currentScene.createNode("Coordinate");
Coordinate971.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet970.coord = Coordinate971;

//from r_radiocarpal to r_carpometacarpal_3 vertices 2
let ColorRGBA972 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA972.USE = "HAnimSegmentLineColorRGBA";
LineSet970.color = ColorRGBA972;

Shape969.geometry = LineSet970;

HAnimSegment954.children[4] = Shape969;

let HAnimSite973 = browser.currentScene.createNode("HAnimSite");
HAnimSite973.name = "r_metacarpal_phalanx_3_pt";
HAnimSite973.DEF = "hanim_r_metacarpal_phalanx_3_pt";
let TouchSensor974 = browser.currentScene.createNode("TouchSensor");
TouchSensor974.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = TouchSensor974;

let Shape975 = browser.currentScene.createNode("Shape");
Shape975.USE = "HAnimSiteShape";
HAnimSite973.children[1] = Shape975;

HAnimSegment954.children[5] = HAnimSite973;

let Shape976 = browser.currentScene.createNode("Shape");
let LineSet977 = browser.currentScene.createNode("LineSet");
LineSet977.vertexCount = new MFInt32(new int[2]);
let Coordinate978 = browser.currentScene.createNode("Coordinate");
Coordinate978.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet977.coord = Coordinate978;

//from r_radiocarpal to r_carpometacarpal_4 vertices 2
let ColorRGBA979 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA979.USE = "HAnimSegmentLineColorRGBA";
LineSet977.color = ColorRGBA979;

Shape976.geometry = LineSet977;

HAnimSegment954.children[6] = Shape976;

let Shape980 = browser.currentScene.createNode("Shape");
let LineSet981 = browser.currentScene.createNode("LineSet");
LineSet981.vertexCount = new MFInt32(new int[2]);
let Coordinate982 = browser.currentScene.createNode("Coordinate");
Coordinate982.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet981.coord = Coordinate982;

//from r_radiocarpal to r_carpometacarpal_5 vertices 2
let ColorRGBA983 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA983.USE = "HAnimSegmentLineColorRGBA";
LineSet981.color = ColorRGBA983;

Shape980.geometry = LineSet981;

HAnimSegment954.children[7] = Shape980;

let HAnimSite984 = browser.currentScene.createNode("HAnimSite");
HAnimSite984.name = "r_metacarpal_phalanx_5_pt";
HAnimSite984.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite984.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor985 = browser.currentScene.createNode("TouchSensor");
TouchSensor985.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite984.children = new MFNode();

HAnimSite984.children[0] = TouchSensor985;

let Shape986 = browser.currentScene.createNode("Shape");
Shape986.USE = "HAnimSiteShape";
HAnimSite984.children[1] = Shape986;

HAnimSegment954.children[8] = HAnimSite984;

HAnimJoint953.children = new MFNode();

HAnimJoint953.children[0] = HAnimSegment954;

let HAnimJoint987 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint987.name = "r_carpometacarpal_1";
HAnimJoint987.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint987.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint987.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint987.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment988 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment988.name = "r_metacarpal_1";
HAnimSegment988.DEF = "hanim_r_metacarpal_1";
let Transform989 = browser.currentScene.createNode("Transform");
Transform989.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let Transform990 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape991 = browser.currentScene.createNode("Shape");
Shape991.USE = "HAnimJointShape";
Transform990.children = new MFNode();

Transform990.children[0] = Shape991;

Transform989.children = new MFNode();

Transform989.children[0] = Transform990;

HAnimSegment988.children = new MFNode();

HAnimSegment988.children[0] = Transform989;

let Shape992 = browser.currentScene.createNode("Shape");
let LineSet993 = browser.currentScene.createNode("LineSet");
LineSet993.vertexCount = new MFInt32(new int[2]);
let Coordinate994 = browser.currentScene.createNode("Coordinate");
Coordinate994.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet993.coord = Coordinate994;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA995 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA995.USE = "HAnimSegmentLineColorRGBA";
LineSet993.color = ColorRGBA995;

Shape992.geometry = LineSet993;

HAnimSegment988.children[1] = Shape992;

HAnimJoint987.children = new MFNode();

HAnimJoint987.children[0] = HAnimSegment988;

let HAnimJoint996 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint996.name = "r_metacarpophalangeal_1";
HAnimJoint996.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint996.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint996.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment997 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment997.name = "r_carpal_proximal_phalanx_1";
HAnimSegment997.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform998 = browser.currentScene.createNode("Transform");
Transform998.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let Transform999 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1000 = browser.currentScene.createNode("Shape");
Shape1000.USE = "HAnimJointShape";
Transform999.children = new MFNode();

Transform999.children[0] = Shape1000;

Transform998.children = new MFNode();

Transform998.children[0] = Transform999;

HAnimSegment997.children = new MFNode();

HAnimSegment997.children[0] = Transform998;

let Shape1001 = browser.currentScene.createNode("Shape");
let LineSet1002 = browser.currentScene.createNode("LineSet");
LineSet1002.vertexCount = new MFInt32(new int[2]);
let Coordinate1003 = browser.currentScene.createNode("Coordinate");
Coordinate1003.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1002.coord = Coordinate1003;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA1004 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1004.USE = "HAnimSegmentLineColorRGBA";
LineSet1002.color = ColorRGBA1004;

Shape1001.geometry = LineSet1002;

HAnimSegment997.children[1] = Shape1001;

let HAnimSite1005 = browser.currentScene.createNode("HAnimSite");
HAnimSite1005.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1005.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
let TouchSensor1006 = browser.currentScene.createNode("TouchSensor");
TouchSensor1006.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1005.children = new MFNode();

HAnimSite1005.children[0] = TouchSensor1006;

let Shape1007 = browser.currentScene.createNode("Shape");
Shape1007.USE = "HAnimSiteShape";
HAnimSite1005.children[1] = Shape1007;

HAnimSegment997.children[2] = HAnimSite1005;

HAnimJoint996.children = new MFNode();

HAnimJoint996.children[0] = HAnimSegment997;

let HAnimJoint1008 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1008.name = "r_carpal_interphalangeal_1";
HAnimJoint1008.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1008.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1008.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1008.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[1] = HAnimJoint1008;

HAnimJoint987.children[1] = HAnimJoint996;

HAnimJoint953.children[1] = HAnimJoint987;

let HAnimJoint1009 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1009.name = "r_carpometacarpal_2";
HAnimJoint1009.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1009.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1009.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1009.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1010 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1010.name = "r_metacarpal_2";
HAnimSegment1010.DEF = "hanim_r_metacarpal_2";
let Transform1011 = browser.currentScene.createNode("Transform");
Transform1011.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let Transform1012 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1013 = browser.currentScene.createNode("Shape");
Shape1013.USE = "HAnimJointShape";
Transform1012.children = new MFNode();

Transform1012.children[0] = Shape1013;

Transform1011.children = new MFNode();

Transform1011.children[0] = Transform1012;

HAnimSegment1010.children = new MFNode();

HAnimSegment1010.children[0] = Transform1011;

let Shape1014 = browser.currentScene.createNode("Shape");
let LineSet1015 = browser.currentScene.createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
let Coordinate1016 = browser.currentScene.createNode("Coordinate");
Coordinate1016.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1015.coord = Coordinate1016;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA1017 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1017.USE = "HAnimSegmentLineColorRGBA";
LineSet1015.color = ColorRGBA1017;

Shape1014.geometry = LineSet1015;

HAnimSegment1010.children[1] = Shape1014;

HAnimJoint1009.children = new MFNode();

HAnimJoint1009.children[0] = HAnimSegment1010;

let HAnimJoint1018 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1018.name = "r_metacarpophalangeal_2";
HAnimJoint1018.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1018.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1018.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1018.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1019 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1019.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1019.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform1020 = browser.currentScene.createNode("Transform");
Transform1020.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let Transform1021 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1022 = browser.currentScene.createNode("Shape");
Shape1022.USE = "HAnimJointShape";
Transform1021.children = new MFNode();

Transform1021.children[0] = Shape1022;

Transform1020.children = new MFNode();

Transform1020.children[0] = Transform1021;

HAnimSegment1019.children = new MFNode();

HAnimSegment1019.children[0] = Transform1020;

let Shape1023 = browser.currentScene.createNode("Shape");
let LineSet1024 = browser.currentScene.createNode("LineSet");
LineSet1024.vertexCount = new MFInt32(new int[2]);
let Coordinate1025 = browser.currentScene.createNode("Coordinate");
Coordinate1025.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1024.coord = Coordinate1025;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1026 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1026.USE = "HAnimSegmentLineColorRGBA";
LineSet1024.color = ColorRGBA1026;

Shape1023.geometry = LineSet1024;

HAnimSegment1019.children[1] = Shape1023;

HAnimJoint1018.children = new MFNode();

HAnimJoint1018.children[0] = HAnimSegment1019;

let HAnimJoint1027 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1027.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1027.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1027.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1027.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1027.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1028 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1028.name = "r_carpal_middle_phalanx_2";
HAnimSegment1028.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform1029 = browser.currentScene.createNode("Transform");
Transform1029.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let Transform1030 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1031 = browser.currentScene.createNode("Shape");
Shape1031.USE = "HAnimJointShape";
Transform1030.children = new MFNode();

Transform1030.children[0] = Shape1031;

Transform1029.children = new MFNode();

Transform1029.children[0] = Transform1030;

HAnimSegment1028.children = new MFNode();

HAnimSegment1028.children[0] = Transform1029;

let Shape1032 = browser.currentScene.createNode("Shape");
let LineSet1033 = browser.currentScene.createNode("LineSet");
LineSet1033.vertexCount = new MFInt32(new int[2]);
let Coordinate1034 = browser.currentScene.createNode("Coordinate");
Coordinate1034.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1033.coord = Coordinate1034;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1035 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1035.USE = "HAnimSegmentLineColorRGBA";
LineSet1033.color = ColorRGBA1035;

Shape1032.geometry = LineSet1033;

HAnimSegment1028.children[1] = Shape1032;

let HAnimSite1036 = browser.currentScene.createNode("HAnimSite");
HAnimSite1036.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1036.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
let TouchSensor1037 = browser.currentScene.createNode("TouchSensor");
TouchSensor1037.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1036.children = new MFNode();

HAnimSite1036.children[0] = TouchSensor1037;

let Shape1038 = browser.currentScene.createNode("Shape");
Shape1038.USE = "HAnimSiteShape";
HAnimSite1036.children[1] = Shape1038;

HAnimSegment1028.children[2] = HAnimSite1036;

let HAnimSite1039 = browser.currentScene.createNode("HAnimSite");
HAnimSite1039.name = "r_dactylion_pt";
HAnimSite1039.DEF = "hanim_r_dactylion_pt";
HAnimSite1039.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor1040 = browser.currentScene.createNode("TouchSensor");
TouchSensor1040.description = "HAnimSite r_dactylion_pt";
HAnimSite1039.children = new MFNode();

HAnimSite1039.children[0] = TouchSensor1040;

let Shape1041 = browser.currentScene.createNode("Shape");
Shape1041.USE = "HAnimSiteShape";
HAnimSite1039.children[1] = Shape1041;

HAnimSegment1028.children[3] = HAnimSite1039;

HAnimJoint1027.children = new MFNode();

HAnimJoint1027.children[0] = HAnimSegment1028;

let HAnimJoint1042 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1042.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1042.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1042.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1042.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1042.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1027.children[1] = HAnimJoint1042;

HAnimJoint1018.children[1] = HAnimJoint1027;

HAnimJoint1009.children[1] = HAnimJoint1018;

HAnimJoint953.children[2] = HAnimJoint1009;

let HAnimJoint1043 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1043.name = "r_carpometacarpal_3";
HAnimJoint1043.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1043.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1043.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1043.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1044 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1044.name = "r_metacarpal_3";
HAnimSegment1044.DEF = "hanim_r_metacarpal_3";
let Transform1045 = browser.currentScene.createNode("Transform");
Transform1045.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let Transform1046 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1047 = browser.currentScene.createNode("Shape");
Shape1047.USE = "HAnimJointShape";
Transform1046.children = new MFNode();

Transform1046.children[0] = Shape1047;

Transform1045.children = new MFNode();

Transform1045.children[0] = Transform1046;

HAnimSegment1044.children = new MFNode();

HAnimSegment1044.children[0] = Transform1045;

let Shape1048 = browser.currentScene.createNode("Shape");
let LineSet1049 = browser.currentScene.createNode("LineSet");
LineSet1049.vertexCount = new MFInt32(new int[2]);
let Coordinate1050 = browser.currentScene.createNode("Coordinate");
Coordinate1050.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1049.coord = Coordinate1050;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA1051 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1051.USE = "HAnimSegmentLineColorRGBA";
LineSet1049.color = ColorRGBA1051;

Shape1048.geometry = LineSet1049;

HAnimSegment1044.children[1] = Shape1048;

HAnimJoint1043.children = new MFNode();

HAnimJoint1043.children[0] = HAnimSegment1044;

let HAnimJoint1052 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1052.name = "r_metacarpophalangeal_3";
HAnimJoint1052.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1052.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1052.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1052.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1053 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1053.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1053.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform1054 = browser.currentScene.createNode("Transform");
Transform1054.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let Transform1055 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1056 = browser.currentScene.createNode("Shape");
Shape1056.USE = "HAnimJointShape";
Transform1055.children = new MFNode();

Transform1055.children[0] = Shape1056;

Transform1054.children = new MFNode();

Transform1054.children[0] = Transform1055;

HAnimSegment1053.children = new MFNode();

HAnimSegment1053.children[0] = Transform1054;

let Shape1057 = browser.currentScene.createNode("Shape");
let LineSet1058 = browser.currentScene.createNode("LineSet");
LineSet1058.vertexCount = new MFInt32(new int[2]);
let Coordinate1059 = browser.currentScene.createNode("Coordinate");
Coordinate1059.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1058.coord = Coordinate1059;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1060 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1060.USE = "HAnimSegmentLineColorRGBA";
LineSet1058.color = ColorRGBA1060;

Shape1057.geometry = LineSet1058;

HAnimSegment1053.children[1] = Shape1057;

HAnimJoint1052.children = new MFNode();

HAnimJoint1052.children[0] = HAnimSegment1053;

let HAnimJoint1061 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1061.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1061.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1061.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1061.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1061.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1062 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1062.name = "r_carpal_middle_phalanx_3";
HAnimSegment1062.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform1063 = browser.currentScene.createNode("Transform");
Transform1063.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let Transform1064 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1065 = browser.currentScene.createNode("Shape");
Shape1065.USE = "HAnimJointShape";
Transform1064.children = new MFNode();

Transform1064.children[0] = Shape1065;

Transform1063.children = new MFNode();

Transform1063.children[0] = Transform1064;

HAnimSegment1062.children = new MFNode();

HAnimSegment1062.children[0] = Transform1063;

let Shape1066 = browser.currentScene.createNode("Shape");
let LineSet1067 = browser.currentScene.createNode("LineSet");
LineSet1067.vertexCount = new MFInt32(new int[2]);
let Coordinate1068 = browser.currentScene.createNode("Coordinate");
Coordinate1068.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1067.coord = Coordinate1068;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1069 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1069.USE = "HAnimSegmentLineColorRGBA";
LineSet1067.color = ColorRGBA1069;

Shape1066.geometry = LineSet1067;

HAnimSegment1062.children[1] = Shape1066;

let HAnimSite1070 = browser.currentScene.createNode("HAnimSite");
HAnimSite1070.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1070.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
let TouchSensor1071 = browser.currentScene.createNode("TouchSensor");
TouchSensor1071.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1070.children = new MFNode();

HAnimSite1070.children[0] = TouchSensor1071;

let Shape1072 = browser.currentScene.createNode("Shape");
Shape1072.USE = "HAnimSiteShape";
HAnimSite1070.children[1] = Shape1072;

HAnimSegment1062.children[2] = HAnimSite1070;

HAnimJoint1061.children = new MFNode();

HAnimJoint1061.children[0] = HAnimSegment1062;

let HAnimJoint1073 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1073.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1073.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1073.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1073.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1073.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1061.children[1] = HAnimJoint1073;

HAnimJoint1052.children[1] = HAnimJoint1061;

HAnimJoint1043.children[1] = HAnimJoint1052;

HAnimJoint953.children[3] = HAnimJoint1043;

let HAnimJoint1074 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1074.name = "r_carpometacarpal_4";
HAnimJoint1074.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1074.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1074.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1074.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1075 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1075.name = "r_metacarpal_4";
HAnimSegment1075.DEF = "hanim_r_metacarpal_4";
let Transform1076 = browser.currentScene.createNode("Transform");
Transform1076.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let Transform1077 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1078 = browser.currentScene.createNode("Shape");
Shape1078.USE = "HAnimJointShape";
Transform1077.children = new MFNode();

Transform1077.children[0] = Shape1078;

Transform1076.children = new MFNode();

Transform1076.children[0] = Transform1077;

HAnimSegment1075.children = new MFNode();

HAnimSegment1075.children[0] = Transform1076;

let Shape1079 = browser.currentScene.createNode("Shape");
let LineSet1080 = browser.currentScene.createNode("LineSet");
LineSet1080.vertexCount = new MFInt32(new int[2]);
let Coordinate1081 = browser.currentScene.createNode("Coordinate");
Coordinate1081.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1080.coord = Coordinate1081;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA1082 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1082.USE = "HAnimSegmentLineColorRGBA";
LineSet1080.color = ColorRGBA1082;

Shape1079.geometry = LineSet1080;

HAnimSegment1075.children[1] = Shape1079;

HAnimJoint1074.children = new MFNode();

HAnimJoint1074.children[0] = HAnimSegment1075;

let HAnimJoint1083 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1083.name = "r_metacarpophalangeal_4";
HAnimJoint1083.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1083.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1083.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1083.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1084 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1084.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1084.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform1085 = browser.currentScene.createNode("Transform");
Transform1085.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let Transform1086 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1087 = browser.currentScene.createNode("Shape");
Shape1087.USE = "HAnimJointShape";
Transform1086.children = new MFNode();

Transform1086.children[0] = Shape1087;

Transform1085.children = new MFNode();

Transform1085.children[0] = Transform1086;

HAnimSegment1084.children = new MFNode();

HAnimSegment1084.children[0] = Transform1085;

let Shape1088 = browser.currentScene.createNode("Shape");
let LineSet1089 = browser.currentScene.createNode("LineSet");
LineSet1089.vertexCount = new MFInt32(new int[2]);
let Coordinate1090 = browser.currentScene.createNode("Coordinate");
Coordinate1090.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1089.coord = Coordinate1090;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1091 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA";
LineSet1089.color = ColorRGBA1091;

Shape1088.geometry = LineSet1089;

HAnimSegment1084.children[1] = Shape1088;

HAnimJoint1083.children = new MFNode();

HAnimJoint1083.children[0] = HAnimSegment1084;

let HAnimJoint1092 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1092.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1092.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1092.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1092.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1092.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1093 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1093.name = "r_carpal_middle_phalanx_4";
HAnimSegment1093.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform1094 = browser.currentScene.createNode("Transform");
Transform1094.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let Transform1095 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1096 = browser.currentScene.createNode("Shape");
Shape1096.USE = "HAnimJointShape";
Transform1095.children = new MFNode();

Transform1095.children[0] = Shape1096;

Transform1094.children = new MFNode();

Transform1094.children[0] = Transform1095;

HAnimSegment1093.children = new MFNode();

HAnimSegment1093.children[0] = Transform1094;

let Shape1097 = browser.currentScene.createNode("Shape");
let LineSet1098 = browser.currentScene.createNode("LineSet");
LineSet1098.vertexCount = new MFInt32(new int[2]);
let Coordinate1099 = browser.currentScene.createNode("Coordinate");
Coordinate1099.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1098.coord = Coordinate1099;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1100 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1100.USE = "HAnimSegmentLineColorRGBA";
LineSet1098.color = ColorRGBA1100;

Shape1097.geometry = LineSet1098;

HAnimSegment1093.children[1] = Shape1097;

let HAnimSite1101 = browser.currentScene.createNode("HAnimSite");
HAnimSite1101.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1101.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
let TouchSensor1102 = browser.currentScene.createNode("TouchSensor");
TouchSensor1102.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1101.children = new MFNode();

HAnimSite1101.children[0] = TouchSensor1102;

let Shape1103 = browser.currentScene.createNode("Shape");
Shape1103.USE = "HAnimSiteShape";
HAnimSite1101.children[1] = Shape1103;

HAnimSegment1093.children[2] = HAnimSite1101;

HAnimJoint1092.children = new MFNode();

HAnimJoint1092.children[0] = HAnimSegment1093;

let HAnimJoint1104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1104.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1104.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1104.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1104.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1092.children[1] = HAnimJoint1104;

HAnimJoint1083.children[1] = HAnimJoint1092;

HAnimJoint1074.children[1] = HAnimJoint1083;

HAnimJoint953.children[4] = HAnimJoint1074;

let HAnimJoint1105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1105.name = "r_carpometacarpal_5";
HAnimJoint1105.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1105.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1105.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1106 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1106.name = "r_metacarpal_5";
HAnimSegment1106.DEF = "hanim_r_metacarpal_5";
let Transform1107 = browser.currentScene.createNode("Transform");
Transform1107.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let Transform1108 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1109 = browser.currentScene.createNode("Shape");
Shape1109.USE = "HAnimJointShape";
Transform1108.children = new MFNode();

Transform1108.children[0] = Shape1109;

Transform1107.children = new MFNode();

Transform1107.children[0] = Transform1108;

HAnimSegment1106.children = new MFNode();

HAnimSegment1106.children[0] = Transform1107;

let Shape1110 = browser.currentScene.createNode("Shape");
let LineSet1111 = browser.currentScene.createNode("LineSet");
LineSet1111.vertexCount = new MFInt32(new int[2]);
let Coordinate1112 = browser.currentScene.createNode("Coordinate");
Coordinate1112.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1111.coord = Coordinate1112;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA1113 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1113.USE = "HAnimSegmentLineColorRGBA";
LineSet1111.color = ColorRGBA1113;

Shape1110.geometry = LineSet1111;

HAnimSegment1106.children[1] = Shape1110;

HAnimJoint1105.children = new MFNode();

HAnimJoint1105.children[0] = HAnimSegment1106;

let HAnimJoint1114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1114.name = "r_metacarpophalangeal_5";
HAnimJoint1114.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1114.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1114.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1114.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1115.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1115.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform1116 = browser.currentScene.createNode("Transform");
Transform1116.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let Transform1117 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1118 = browser.currentScene.createNode("Shape");
Shape1118.USE = "HAnimJointShape";
Transform1117.children = new MFNode();

Transform1117.children[0] = Shape1118;

Transform1116.children = new MFNode();

Transform1116.children[0] = Transform1117;

HAnimSegment1115.children = new MFNode();

HAnimSegment1115.children[0] = Transform1116;

let Shape1119 = browser.currentScene.createNode("Shape");
let LineSet1120 = browser.currentScene.createNode("LineSet");
LineSet1120.vertexCount = new MFInt32(new int[2]);
let Coordinate1121 = browser.currentScene.createNode("Coordinate");
Coordinate1121.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1120.coord = Coordinate1121;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1122 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1122.USE = "HAnimSegmentLineColorRGBA";
LineSet1120.color = ColorRGBA1122;

Shape1119.geometry = LineSet1120;

HAnimSegment1115.children[1] = Shape1119;

HAnimJoint1114.children = new MFNode();

HAnimJoint1114.children[0] = HAnimSegment1115;

let HAnimJoint1123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1123.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1123.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1123.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1123.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1123.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1124 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1124.name = "r_carpal_middle_phalanx_5";
HAnimSegment1124.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform1125 = browser.currentScene.createNode("Transform");
Transform1125.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let Transform1126 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1127 = browser.currentScene.createNode("Shape");
Shape1127.USE = "HAnimJointShape";
Transform1126.children = new MFNode();

Transform1126.children[0] = Shape1127;

Transform1125.children = new MFNode();

Transform1125.children[0] = Transform1126;

HAnimSegment1124.children = new MFNode();

HAnimSegment1124.children[0] = Transform1125;

let Shape1128 = browser.currentScene.createNode("Shape");
let LineSet1129 = browser.currentScene.createNode("LineSet");
LineSet1129.vertexCount = new MFInt32(new int[2]);
let Coordinate1130 = browser.currentScene.createNode("Coordinate");
Coordinate1130.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1129.coord = Coordinate1130;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1131 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1131.USE = "HAnimSegmentLineColorRGBA";
LineSet1129.color = ColorRGBA1131;

Shape1128.geometry = LineSet1129;

HAnimSegment1124.children[1] = Shape1128;

let HAnimSite1132 = browser.currentScene.createNode("HAnimSite");
HAnimSite1132.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1132.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
let TouchSensor1133 = browser.currentScene.createNode("TouchSensor");
TouchSensor1133.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1132.children = new MFNode();

HAnimSite1132.children[0] = TouchSensor1133;

let Shape1134 = browser.currentScene.createNode("Shape");
Shape1134.USE = "HAnimSiteShape";
HAnimSite1132.children[1] = Shape1134;

HAnimSegment1124.children[2] = HAnimSite1132;

HAnimJoint1123.children = new MFNode();

HAnimJoint1123.children[0] = HAnimSegment1124;

let HAnimJoint1135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1135.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1135.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1135.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1135.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1123.children[1] = HAnimJoint1135;

HAnimJoint1114.children[1] = HAnimJoint1123;

HAnimJoint1105.children[1] = HAnimJoint1114;

HAnimJoint953.children[5] = HAnimJoint1105;

HAnimJoint941.children[1] = HAnimJoint953;

HAnimJoint920.children[1] = HAnimJoint941;

HAnimJoint905.children[1] = HAnimJoint920;

HAnimJoint896.children[1] = HAnimJoint905;

HAnimJoint452.children[3] = HAnimJoint896;

HAnimJoint437.children[1] = HAnimJoint452;

HAnimJoint428.children[1] = HAnimJoint437;

HAnimJoint419.children[1] = HAnimJoint428;

HAnimJoint410.children[1] = HAnimJoint419;

HAnimJoint398.children[1] = HAnimJoint410;

HAnimJoint377.children[1] = HAnimJoint398;

HAnimJoint368.children[1] = HAnimJoint377;

HAnimJoint359.children[1] = HAnimJoint368;

HAnimJoint344.children[1] = HAnimJoint359;

HAnimJoint332.children[1] = HAnimJoint344;

HAnimJoint323.children[1] = HAnimJoint332;

HAnimJoint314.children[1] = HAnimJoint323;

HAnimJoint305.children[1] = HAnimJoint314;

HAnimJoint287.children[1] = HAnimJoint305;

HAnimJoint278.children[1] = HAnimJoint287;

HAnimJoint269.children[1] = HAnimJoint278;

HAnimJoint52.children[2] = HAnimJoint269;

HAnimHumanoid43.joints[1] = HAnimJoint52;

let HAnimJoint1136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1136.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint1136;

let HAnimJoint1137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1137.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint1137;

let HAnimJoint1138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1138.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint1138;

let HAnimJoint1139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1139.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint1139;

let HAnimJoint1140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1140.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint1140;

let HAnimJoint1141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1141.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[7] = HAnimJoint1141;

let HAnimJoint1142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1142.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[8] = HAnimJoint1142;

let HAnimJoint1143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1143.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[9] = HAnimJoint1143;

let HAnimJoint1144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1144.USE = "hanim_r_hip";
HAnimHumanoid43.joints[10] = HAnimJoint1144;

let HAnimJoint1145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1145.USE = "hanim_r_knee";
HAnimHumanoid43.joints[11] = HAnimJoint1145;

let HAnimJoint1146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1146.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[12] = HAnimJoint1146;

let HAnimJoint1147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1147.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1147;

let HAnimJoint1148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1148.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1148;

let HAnimJoint1149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1149.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1149;

let HAnimJoint1150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1150.USE = "hanim_vl5";
HAnimHumanoid43.joints[16] = HAnimJoint1150;

let HAnimJoint1151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1151.USE = "hanim_vl4";
HAnimHumanoid43.joints[17] = HAnimJoint1151;

let HAnimJoint1152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1152.USE = "hanim_vl3";
HAnimHumanoid43.joints[18] = HAnimJoint1152;

let HAnimJoint1153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1153.USE = "hanim_vl2";
HAnimHumanoid43.joints[19] = HAnimJoint1153;

let HAnimJoint1154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1154.USE = "hanim_vl1";
HAnimHumanoid43.joints[20] = HAnimJoint1154;

let HAnimJoint1155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1155.USE = "hanim_vt12";
HAnimHumanoid43.joints[21] = HAnimJoint1155;

let HAnimJoint1156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1156.USE = "hanim_vt11";
HAnimHumanoid43.joints[22] = HAnimJoint1156;

let HAnimJoint1157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1157.USE = "hanim_vt10";
HAnimHumanoid43.joints[23] = HAnimJoint1157;

let HAnimJoint1158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1158.USE = "hanim_vt9";
HAnimHumanoid43.joints[24] = HAnimJoint1158;

let HAnimJoint1159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1159.USE = "hanim_vt8";
HAnimHumanoid43.joints[25] = HAnimJoint1159;

let HAnimJoint1160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1160.USE = "hanim_vt7";
HAnimHumanoid43.joints[26] = HAnimJoint1160;

let HAnimJoint1161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1161.USE = "hanim_vt6";
HAnimHumanoid43.joints[27] = HAnimJoint1161;

let HAnimJoint1162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1162.USE = "hanim_vt5";
HAnimHumanoid43.joints[28] = HAnimJoint1162;

let HAnimJoint1163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1163.USE = "hanim_vt4";
HAnimHumanoid43.joints[29] = HAnimJoint1163;

let HAnimJoint1164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1164.USE = "hanim_vt3";
HAnimHumanoid43.joints[30] = HAnimJoint1164;

let HAnimJoint1165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1165.USE = "hanim_vt2";
HAnimHumanoid43.joints[31] = HAnimJoint1165;

let HAnimJoint1166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1166.USE = "hanim_vt1";
HAnimHumanoid43.joints[32] = HAnimJoint1166;

let HAnimJoint1167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1167.USE = "hanim_vc7";
HAnimHumanoid43.joints[33] = HAnimJoint1167;

let HAnimJoint1168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1168.USE = "hanim_vc6";
HAnimHumanoid43.joints[34] = HAnimJoint1168;

let HAnimJoint1169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1169.USE = "hanim_vc5";
HAnimHumanoid43.joints[35] = HAnimJoint1169;

let HAnimJoint1170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1170.USE = "hanim_vc4";
HAnimHumanoid43.joints[36] = HAnimJoint1170;

let HAnimJoint1171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1171.USE = "hanim_vc3";
HAnimHumanoid43.joints[37] = HAnimJoint1171;

let HAnimJoint1172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1172.USE = "hanim_vc2";
HAnimHumanoid43.joints[38] = HAnimJoint1172;

let HAnimJoint1173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1173.USE = "hanim_vc1";
HAnimHumanoid43.joints[39] = HAnimJoint1173;

let HAnimJoint1174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1174.USE = "hanim_skullbase";
HAnimHumanoid43.joints[40] = HAnimJoint1174;

let HAnimJoint1175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1175.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[41] = HAnimJoint1175;

let HAnimJoint1176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1176.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[42] = HAnimJoint1176;

let HAnimJoint1177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1177.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[43] = HAnimJoint1177;

let HAnimJoint1178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1178.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[44] = HAnimJoint1178;

let HAnimJoint1179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1179.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[45] = HAnimJoint1179;

let HAnimJoint1180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1180.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[46] = HAnimJoint1180;

let HAnimJoint1181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1181.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[47] = HAnimJoint1181;

let HAnimJoint1182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1182.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[48] = HAnimJoint1182;

let HAnimJoint1183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1183.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[49] = HAnimJoint1183;

let HAnimJoint1184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1184.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[50] = HAnimJoint1184;

let HAnimJoint1185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1185.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[51] = HAnimJoint1185;

let HAnimJoint1186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1186.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[52] = HAnimJoint1186;

let HAnimJoint1187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1187.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[53] = HAnimJoint1187;

let HAnimJoint1188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1188.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[54] = HAnimJoint1188;

let HAnimJoint1189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1189.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[55] = HAnimJoint1189;

let HAnimJoint1190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1190.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[56] = HAnimJoint1190;

let HAnimJoint1191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1191.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[57] = HAnimJoint1191;

let HAnimJoint1192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1192.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[58] = HAnimJoint1192;

let HAnimJoint1193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1193.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[59] = HAnimJoint1193;

let HAnimJoint1194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1194.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[60] = HAnimJoint1194;

let HAnimJoint1195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1195.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[61] = HAnimJoint1195;

let HAnimJoint1196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1196.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[62] = HAnimJoint1196;

let HAnimJoint1197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1197.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[63] = HAnimJoint1197;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[64] = HAnimJoint1198;

let HAnimJoint1199 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1199.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[65] = HAnimJoint1199;

let HAnimJoint1200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1200.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[66] = HAnimJoint1200;

let HAnimJoint1201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1201.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[67] = HAnimJoint1201;

let HAnimJoint1202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1202.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[68] = HAnimJoint1202;

let HAnimJoint1203 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1203.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[69] = HAnimJoint1203;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[70] = HAnimJoint1204;

let HAnimJoint1205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1205.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[71] = HAnimJoint1205;

let HAnimJoint1206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1206.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[72] = HAnimJoint1206;

let HAnimJoint1207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1207.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[73] = HAnimJoint1207;

let HAnimJoint1208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1208.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[74] = HAnimJoint1208;

let HAnimJoint1209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1209.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[75] = HAnimJoint1209;

let HAnimJoint1210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1210.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[76] = HAnimJoint1210;

let HAnimJoint1211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1211.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[77] = HAnimJoint1211;

let HAnimJoint1212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1212.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[78] = HAnimJoint1212;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[79] = HAnimJoint1213;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[80] = HAnimJoint1214;

let HAnimJoint1215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1215.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[81] = HAnimJoint1215;

let HAnimJoint1216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1216.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[82] = HAnimJoint1216;

let HAnimJoint1217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1217.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[83] = HAnimJoint1217;

let HAnimJoint1218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1218.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[84] = HAnimJoint1218;

let HAnimJoint1219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1219.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[85] = HAnimJoint1219;

let HAnimJoint1220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1220.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[86] = HAnimJoint1220;

let HAnimJoint1221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1221.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[87] = HAnimJoint1221;

let HAnimJoint1222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1222.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[88] = HAnimJoint1222;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[89] = HAnimJoint1223;

let HAnimJoint1224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1224.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[90] = HAnimJoint1224;

let HAnimJoint1225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1225.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[91] = HAnimJoint1225;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[92] = HAnimJoint1226;

let HAnimJoint1227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1227.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[93] = HAnimJoint1227;

let HAnimJoint1228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1228.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[94] = HAnimJoint1228;

let HAnimJoint1229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1229.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[95] = HAnimJoint1229;

let HAnimSegment1230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1230.USE = "hanim_sacrum";
HAnimHumanoid43.segments[96] = HAnimSegment1230;

let HAnimSegment1231 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1231.USE = "hanim_pelvis";
HAnimHumanoid43.segments[97] = HAnimSegment1231;

let HAnimSegment1232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1232.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[98] = HAnimSegment1232;

let HAnimSegment1233 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1233.USE = "hanim_l_calf";
HAnimHumanoid43.segments[99] = HAnimSegment1233;

let HAnimSegment1234 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1234.USE = "hanim_l_talus";
HAnimHumanoid43.segments[100] = HAnimSegment1234;

let HAnimSegment1235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1235.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[101] = HAnimSegment1235;

let HAnimSegment1236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1236.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[102] = HAnimSegment1236;

let HAnimSegment1237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1237.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[103] = HAnimSegment1237;

let HAnimSegment1238 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1238.USE = "hanim_r_calf";
HAnimHumanoid43.segments[104] = HAnimSegment1238;

let HAnimSegment1239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1239.USE = "hanim_r_talus";
HAnimHumanoid43.segments[105] = HAnimSegment1239;

let HAnimSegment1240 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1240.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[106] = HAnimSegment1240;

let HAnimSegment1241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1241.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[107] = HAnimSegment1241;

let HAnimSegment1242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1242.USE = "hanim_l5";
HAnimHumanoid43.segments[108] = HAnimSegment1242;

let HAnimSegment1243 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1243.USE = "hanim_l4";
HAnimHumanoid43.segments[109] = HAnimSegment1243;

let HAnimSegment1244 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1244.USE = "hanim_l3";
HAnimHumanoid43.segments[110] = HAnimSegment1244;

let HAnimSegment1245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1245.USE = "hanim_l2";
HAnimHumanoid43.segments[111] = HAnimSegment1245;

let HAnimSegment1246 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1246.USE = "hanim_l1";
HAnimHumanoid43.segments[112] = HAnimSegment1246;

let HAnimSegment1247 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1247.USE = "hanim_t12";
HAnimHumanoid43.segments[113] = HAnimSegment1247;

let HAnimSegment1248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1248.USE = "hanim_t11";
HAnimHumanoid43.segments[114] = HAnimSegment1248;

let HAnimSegment1249 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1249.USE = "hanim_t10";
HAnimHumanoid43.segments[115] = HAnimSegment1249;

let HAnimSegment1250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1250.USE = "hanim_t9";
HAnimHumanoid43.segments[116] = HAnimSegment1250;

let HAnimSegment1251 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1251.USE = "hanim_t8";
HAnimHumanoid43.segments[117] = HAnimSegment1251;

let HAnimSegment1252 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1252.USE = "hanim_t7";
HAnimHumanoid43.segments[118] = HAnimSegment1252;

let HAnimSegment1253 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1253.USE = "hanim_t6";
HAnimHumanoid43.segments[119] = HAnimSegment1253;

let HAnimSegment1254 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1254.USE = "hanim_t5";
HAnimHumanoid43.segments[120] = HAnimSegment1254;

let HAnimSegment1255 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1255.USE = "hanim_t4";
HAnimHumanoid43.segments[121] = HAnimSegment1255;

let HAnimSegment1256 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1256.USE = "hanim_t3";
HAnimHumanoid43.segments[122] = HAnimSegment1256;

let HAnimSegment1257 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1257.USE = "hanim_t2";
HAnimHumanoid43.segments[123] = HAnimSegment1257;

let HAnimSegment1258 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1258.USE = "hanim_t1";
HAnimHumanoid43.segments[124] = HAnimSegment1258;

let HAnimSegment1259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1259.USE = "hanim_c7";
HAnimHumanoid43.segments[125] = HAnimSegment1259;

let HAnimSegment1260 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1260.USE = "hanim_c6";
HAnimHumanoid43.segments[126] = HAnimSegment1260;

let HAnimSegment1261 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1261.USE = "hanim_c5";
HAnimHumanoid43.segments[127] = HAnimSegment1261;

let HAnimSegment1262 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1262.USE = "hanim_c4";
HAnimHumanoid43.segments[128] = HAnimSegment1262;

let HAnimSegment1263 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1263.USE = "hanim_c3";
HAnimHumanoid43.segments[129] = HAnimSegment1263;

let HAnimSegment1264 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1264.USE = "hanim_c2";
HAnimHumanoid43.segments[130] = HAnimSegment1264;

let HAnimSegment1265 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1265.USE = "hanim_c1";
HAnimHumanoid43.segments[131] = HAnimSegment1265;

let HAnimSegment1266 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1266.USE = "hanim_skull";
HAnimHumanoid43.segments[132] = HAnimSegment1266;

let HAnimSegment1267 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1267.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[133] = HAnimSegment1267;

let HAnimSegment1268 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1268.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[134] = HAnimSegment1268;

let HAnimSegment1269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1269.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[135] = HAnimSegment1269;

let HAnimSegment1270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1270.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[136] = HAnimSegment1270;

let HAnimSegment1271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1271.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[137] = HAnimSegment1271;

let HAnimSegment1272 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1272.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[138] = HAnimSegment1272;

let HAnimSegment1273 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1273.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[139] = HAnimSegment1273;

let HAnimSegment1274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1274.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[140] = HAnimSegment1274;

let HAnimSegment1275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1275.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[141] = HAnimSegment1275;

let HAnimSegment1276 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1276.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[142] = HAnimSegment1276;

let HAnimSegment1277 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1277.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[143] = HAnimSegment1277;

let HAnimSegment1278 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1278.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[144] = HAnimSegment1278;

let HAnimSegment1279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1279.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[145] = HAnimSegment1279;

let HAnimSegment1280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1280.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[146] = HAnimSegment1280;

let HAnimSegment1281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1281.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[147] = HAnimSegment1281;

let HAnimSegment1282 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1282.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[148] = HAnimSegment1282;

let HAnimSegment1283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1283.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[149] = HAnimSegment1283;

let HAnimSegment1284 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1284.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[150] = HAnimSegment1284;

let HAnimSegment1285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1285.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[151] = HAnimSegment1285;

let HAnimSegment1286 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1286.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[152] = HAnimSegment1286;

let HAnimSegment1287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1287.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[153] = HAnimSegment1287;

let HAnimSegment1288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1288.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[154] = HAnimSegment1288;

let HAnimSegment1289 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1289.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[155] = HAnimSegment1289;

let HAnimSegment1290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1290.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[156] = HAnimSegment1290;

let HAnimSegment1291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1291.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[157] = HAnimSegment1291;

let HAnimSegment1292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1292.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[158] = HAnimSegment1292;

let HAnimSegment1293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1293.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[159] = HAnimSegment1293;

let HAnimSegment1294 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1294.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[160] = HAnimSegment1294;

let HAnimSegment1295 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1295.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[161] = HAnimSegment1295;

let HAnimSegment1296 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1296.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[162] = HAnimSegment1296;

let HAnimSegment1297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1297.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[163] = HAnimSegment1297;

let HAnimSegment1298 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1298.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[164] = HAnimSegment1298;

let HAnimSegment1299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1299.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[165] = HAnimSegment1299;

let HAnimSegment1300 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1300.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[166] = HAnimSegment1300;

let HAnimSegment1301 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1301.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[167] = HAnimSegment1301;

let HAnimSegment1302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1302.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[168] = HAnimSegment1302;

let HAnimSegment1303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1303.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[169] = HAnimSegment1303;

let HAnimSegment1304 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1304.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[170] = HAnimSegment1304;

let HAnimSite1305 = browser.currentScene.createNode("HAnimSite");
HAnimSite1305.USE = "hanim_buttocks_standing_wall_contact_point";
HAnimHumanoid43.viewpoints[171] = HAnimSite1305;

let HAnimSite1306 = browser.currentScene.createNode("HAnimSite");
HAnimSite1306.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[172] = HAnimSite1306;

let HAnimSite1307 = browser.currentScene.createNode("HAnimSite");
HAnimSite1307.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[173] = HAnimSite1307;

let HAnimSite1308 = browser.currentScene.createNode("HAnimSite");
HAnimSite1308.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[174] = HAnimSite1308;

let HAnimSite1309 = browser.currentScene.createNode("HAnimSite");
HAnimSite1309.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[175] = HAnimSite1309;

let HAnimSite1310 = browser.currentScene.createNode("HAnimSite");
HAnimSite1310.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[176] = HAnimSite1310;

let HAnimSite1311 = browser.currentScene.createNode("HAnimSite");
HAnimSite1311.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[177] = HAnimSite1311;

let HAnimSite1312 = browser.currentScene.createNode("HAnimSite");
HAnimSite1312.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[178] = HAnimSite1312;

let HAnimSite1313 = browser.currentScene.createNode("HAnimSite");
HAnimSite1313.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[179] = HAnimSite1313;

let HAnimSite1314 = browser.currentScene.createNode("HAnimSite");
HAnimSite1314.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[180] = HAnimSite1314;

let HAnimSite1315 = browser.currentScene.createNode("HAnimSite");
HAnimSite1315.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[181] = HAnimSite1315;

let HAnimSite1316 = browser.currentScene.createNode("HAnimSite");
HAnimSite1316.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid43.viewpoints[182] = HAnimSite1316;

let HAnimSite1317 = browser.currentScene.createNode("HAnimSite");
HAnimSite1317.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[183] = HAnimSite1317;

let HAnimSite1318 = browser.currentScene.createNode("HAnimSite");
HAnimSite1318.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[184] = HAnimSite1318;

let HAnimSite1319 = browser.currentScene.createNode("HAnimSite");
HAnimSite1319.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[185] = HAnimSite1319;

let HAnimSite1320 = browser.currentScene.createNode("HAnimSite");
HAnimSite1320.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[186] = HAnimSite1320;

let HAnimSite1321 = browser.currentScene.createNode("HAnimSite");
HAnimSite1321.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid43.viewpoints[187] = HAnimSite1321;

let HAnimSite1322 = browser.currentScene.createNode("HAnimSite");
HAnimSite1322.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[188] = HAnimSite1322;

let HAnimSite1323 = browser.currentScene.createNode("HAnimSite");
HAnimSite1323.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[189] = HAnimSite1323;

let HAnimSite1324 = browser.currentScene.createNode("HAnimSite");
HAnimSite1324.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[190] = HAnimSite1324;

let HAnimSite1325 = browser.currentScene.createNode("HAnimSite");
HAnimSite1325.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid43.viewpoints[191] = HAnimSite1325;

let HAnimSite1326 = browser.currentScene.createNode("HAnimSite");
HAnimSite1326.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[192] = HAnimSite1326;

let HAnimSite1327 = browser.currentScene.createNode("HAnimSite");
HAnimSite1327.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[193] = HAnimSite1327;

let HAnimSite1328 = browser.currentScene.createNode("HAnimSite");
HAnimSite1328.USE = "hanim_l_tibiale_pt";
HAnimHumanoid43.viewpoints[194] = HAnimSite1328;

let HAnimSite1329 = browser.currentScene.createNode("HAnimSite");
HAnimSite1329.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[195] = HAnimSite1329;

let HAnimSite1330 = browser.currentScene.createNode("HAnimSite");
HAnimSite1330.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[196] = HAnimSite1330;

let HAnimSite1331 = browser.currentScene.createNode("HAnimSite");
HAnimSite1331.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[197] = HAnimSite1331;

let HAnimSite1332 = browser.currentScene.createNode("HAnimSite");
HAnimSite1332.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[198] = HAnimSite1332;

let HAnimSite1333 = browser.currentScene.createNode("HAnimSite");
HAnimSite1333.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[199] = HAnimSite1333;

let HAnimSite1334 = browser.currentScene.createNode("HAnimSite");
HAnimSite1334.USE = "hanim_r_tibiale_pt";
HAnimHumanoid43.viewpoints[200] = HAnimSite1334;

let HAnimSite1335 = browser.currentScene.createNode("HAnimSite");
HAnimSite1335.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[201] = HAnimSite1335;

let HAnimSite1336 = browser.currentScene.createNode("HAnimSite");
HAnimSite1336.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[202] = HAnimSite1336;

let HAnimSite1337 = browser.currentScene.createNode("HAnimSite");
HAnimSite1337.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[203] = HAnimSite1337;

let HAnimSite1338 = browser.currentScene.createNode("HAnimSite");
HAnimSite1338.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[204] = HAnimSite1338;

let HAnimSite1339 = browser.currentScene.createNode("HAnimSite");
HAnimSite1339.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[205] = HAnimSite1339;

let HAnimSite1340 = browser.currentScene.createNode("HAnimSite");
HAnimSite1340.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid43.viewpoints[206] = HAnimSite1340;

let HAnimSite1341 = browser.currentScene.createNode("HAnimSite");
HAnimSite1341.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[207] = HAnimSite1341;

let HAnimSite1342 = browser.currentScene.createNode("HAnimSite");
HAnimSite1342.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[208] = HAnimSite1342;

let HAnimSite1343 = browser.currentScene.createNode("HAnimSite");
HAnimSite1343.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[209] = HAnimSite1343;

let HAnimSite1344 = browser.currentScene.createNode("HAnimSite");
HAnimSite1344.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[210] = HAnimSite1344;

let HAnimSite1345 = browser.currentScene.createNode("HAnimSite");
HAnimSite1345.USE = "hanim_mesosternale_pt";
HAnimHumanoid43.viewpoints[211] = HAnimSite1345;

let HAnimSite1346 = browser.currentScene.createNode("HAnimSite");
HAnimSite1346.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[212] = HAnimSite1346;

let HAnimSite1347 = browser.currentScene.createNode("HAnimSite");
HAnimSite1347.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[213] = HAnimSite1347;

let HAnimSite1348 = browser.currentScene.createNode("HAnimSite");
HAnimSite1348.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid43.viewpoints[214] = HAnimSite1348;

let HAnimSite1349 = browser.currentScene.createNode("HAnimSite");
HAnimSite1349.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[215] = HAnimSite1349;

let HAnimSite1350 = browser.currentScene.createNode("HAnimSite");
HAnimSite1350.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[216] = HAnimSite1350;

let HAnimSite1351 = browser.currentScene.createNode("HAnimSite");
HAnimSite1351.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[217] = HAnimSite1351;

let HAnimSite1352 = browser.currentScene.createNode("HAnimSite");
HAnimSite1352.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[218] = HAnimSite1352;

let HAnimSite1353 = browser.currentScene.createNode("HAnimSite");
HAnimSite1353.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[219] = HAnimSite1353;

let HAnimSite1354 = browser.currentScene.createNode("HAnimSite");
HAnimSite1354.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[220] = HAnimSite1354;

let HAnimSite1355 = browser.currentScene.createNode("HAnimSite");
HAnimSite1355.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[221] = HAnimSite1355;

let HAnimSite1356 = browser.currentScene.createNode("HAnimSite");
HAnimSite1356.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[222] = HAnimSite1356;

let HAnimSite1357 = browser.currentScene.createNode("HAnimSite");
HAnimSite1357.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[223] = HAnimSite1357;

let HAnimSite1358 = browser.currentScene.createNode("HAnimSite");
HAnimSite1358.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[224] = HAnimSite1358;

let HAnimSite1359 = browser.currentScene.createNode("HAnimSite");
HAnimSite1359.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[225] = HAnimSite1359;

let HAnimSite1360 = browser.currentScene.createNode("HAnimSite");
HAnimSite1360.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[226] = HAnimSite1360;

let HAnimSite1361 = browser.currentScene.createNode("HAnimSite");
HAnimSite1361.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[227] = HAnimSite1361;

let HAnimSite1362 = browser.currentScene.createNode("HAnimSite");
HAnimSite1362.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[228] = HAnimSite1362;

let HAnimSite1363 = browser.currentScene.createNode("HAnimSite");
HAnimSite1363.USE = "hanim_adams_apple_pt";
HAnimHumanoid43.viewpoints[229] = HAnimSite1363;

let HAnimSite1364 = browser.currentScene.createNode("HAnimSite");
HAnimSite1364.USE = "hanim_glabella_pt";
HAnimHumanoid43.viewpoints[230] = HAnimSite1364;

let HAnimSite1365 = browser.currentScene.createNode("HAnimSite");
HAnimSite1365.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid43.viewpoints[231] = HAnimSite1365;

let HAnimSite1366 = browser.currentScene.createNode("HAnimSite");
HAnimSite1366.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[232] = HAnimSite1366;

let HAnimSite1367 = browser.currentScene.createNode("HAnimSite");
HAnimSite1367.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[233] = HAnimSite1367;

let HAnimSite1368 = browser.currentScene.createNode("HAnimSite");
HAnimSite1368.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[234] = HAnimSite1368;

let HAnimSite1369 = browser.currentScene.createNode("HAnimSite");
HAnimSite1369.USE = "hanim_opisthocranion_pt";
HAnimHumanoid43.viewpoints[235] = HAnimSite1369;

let HAnimSite1370 = browser.currentScene.createNode("HAnimSite");
HAnimSite1370.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid43.viewpoints[236] = HAnimSite1370;

let HAnimSite1371 = browser.currentScene.createNode("HAnimSite");
HAnimSite1371.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[237] = HAnimSite1371;

let HAnimSite1372 = browser.currentScene.createNode("HAnimSite");
HAnimSite1372.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[238] = HAnimSite1372;

let HAnimSite1373 = browser.currentScene.createNode("HAnimSite");
HAnimSite1373.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[239] = HAnimSite1373;

let HAnimSite1374 = browser.currentScene.createNode("HAnimSite");
HAnimSite1374.USE = "hanim_skull_vertex_pt";
HAnimHumanoid43.viewpoints[240] = HAnimSite1374;

let HAnimSite1375 = browser.currentScene.createNode("HAnimSite");
HAnimSite1375.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[241] = HAnimSite1375;

let HAnimSite1376 = browser.currentScene.createNode("HAnimSite");
HAnimSite1376.USE = "hanim_menton_pt";
HAnimHumanoid43.viewpoints[242] = HAnimSite1376;

let HAnimSite1377 = browser.currentScene.createNode("HAnimSite");
HAnimSite1377.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[243] = HAnimSite1377;

let HAnimSite1378 = browser.currentScene.createNode("HAnimSite");
HAnimSite1378.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[244] = HAnimSite1378;

let HAnimSite1379 = browser.currentScene.createNode("HAnimSite");
HAnimSite1379.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid43.viewpoints[245] = HAnimSite1379;

let HAnimSite1380 = browser.currentScene.createNode("HAnimSite");
HAnimSite1380.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[246] = HAnimSite1380;

let HAnimSite1381 = browser.currentScene.createNode("HAnimSite");
HAnimSite1381.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[247] = HAnimSite1381;

let HAnimSite1382 = browser.currentScene.createNode("HAnimSite");
HAnimSite1382.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[248] = HAnimSite1382;

let HAnimSite1383 = browser.currentScene.createNode("HAnimSite");
HAnimSite1383.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[249] = HAnimSite1383;

let HAnimSite1384 = browser.currentScene.createNode("HAnimSite");
HAnimSite1384.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[250] = HAnimSite1384;

let HAnimSite1385 = browser.currentScene.createNode("HAnimSite");
HAnimSite1385.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[251] = HAnimSite1385;

let HAnimSite1386 = browser.currentScene.createNode("HAnimSite");
HAnimSite1386.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[252] = HAnimSite1386;

let HAnimSite1387 = browser.currentScene.createNode("HAnimSite");
HAnimSite1387.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[253] = HAnimSite1387;

let HAnimSite1388 = browser.currentScene.createNode("HAnimSite");
HAnimSite1388.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[254] = HAnimSite1388;

let HAnimSite1389 = browser.currentScene.createNode("HAnimSite");
HAnimSite1389.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[255] = HAnimSite1389;

let HAnimSite1390 = browser.currentScene.createNode("HAnimSite");
HAnimSite1390.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[256] = HAnimSite1390;

let HAnimSite1391 = browser.currentScene.createNode("HAnimSite");
HAnimSite1391.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[257] = HAnimSite1391;

let HAnimSite1392 = browser.currentScene.createNode("HAnimSite");
HAnimSite1392.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[258] = HAnimSite1392;

let HAnimSite1393 = browser.currentScene.createNode("HAnimSite");
HAnimSite1393.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[259] = HAnimSite1393;

let HAnimSite1394 = browser.currentScene.createNode("HAnimSite");
HAnimSite1394.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[260] = HAnimSite1394;

let HAnimSite1395 = browser.currentScene.createNode("HAnimSite");
HAnimSite1395.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid43.viewpoints[261] = HAnimSite1395;

let HAnimSite1396 = browser.currentScene.createNode("HAnimSite");
HAnimSite1396.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[262] = HAnimSite1396;

let HAnimSite1397 = browser.currentScene.createNode("HAnimSite");
HAnimSite1397.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[263] = HAnimSite1397;

let HAnimSite1398 = browser.currentScene.createNode("HAnimSite");
HAnimSite1398.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[264] = HAnimSite1398;

let HAnimSite1399 = browser.currentScene.createNode("HAnimSite");
HAnimSite1399.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[265] = HAnimSite1399;

let HAnimSite1400 = browser.currentScene.createNode("HAnimSite");
HAnimSite1400.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[266] = HAnimSite1400;

let HAnimSite1401 = browser.currentScene.createNode("HAnimSite");
HAnimSite1401.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[267] = HAnimSite1401;

let HAnimSite1402 = browser.currentScene.createNode("HAnimSite");
HAnimSite1402.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite1402;

let HAnimSite1403 = browser.currentScene.createNode("HAnimSite");
HAnimSite1403.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite1403;

let HAnimSite1404 = browser.currentScene.createNode("HAnimSite");
HAnimSite1404.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite1404;

let HAnimSite1405 = browser.currentScene.createNode("HAnimSite");
HAnimSite1405.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[271] = HAnimSite1405;

let HAnimSite1406 = browser.currentScene.createNode("HAnimSite");
HAnimSite1406.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[272] = HAnimSite1406;

let HAnimSite1407 = browser.currentScene.createNode("HAnimSite");
HAnimSite1407.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[273] = HAnimSite1407;

let HAnimSite1408 = browser.currentScene.createNode("HAnimSite");
HAnimSite1408.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[274] = HAnimSite1408;

let HAnimSite1409 = browser.currentScene.createNode("HAnimSite");
HAnimSite1409.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[275] = HAnimSite1409;

let HAnimSite1410 = browser.currentScene.createNode("HAnimSite");
HAnimSite1410.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[276] = HAnimSite1410;

browser.currentScene.children[4] = HAnimHumanoid43;

