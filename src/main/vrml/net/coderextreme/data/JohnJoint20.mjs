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
meta7.content = "20 Jan 2023";
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
ImageTexture49.url = new MFString(new java.lang.String["../resources/images/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
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
let HAnimDisplacer54 = browser.currentScene.createNode("HAnimDisplacer");
HAnimDisplacer54.name = "sacrum_feature";
HAnimDisplacer54.coordIndex = new MFInt32(new int[0]);
HAnimDisplacer54.displacements = new MFVec3f(new float[0,0,0]);
HAnimSegment53.displacers = new MFNode();

HAnimSegment53.displacers[0] = HAnimDisplacer54;

let HAnimDisplacer55 = browser.currentScene.createNode("HAnimDisplacer");
HAnimDisplacer55.name = "sacrum_config";
HAnimDisplacer55.coordIndex = new MFInt32(new int[0]);
HAnimDisplacer55.displacements = new MFVec3f(new float[0,0,0]);
HAnimSegment53.displacers[1] = HAnimDisplacer55;

let Transform56 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform57 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape58 = browser.currentScene.createNode("Shape");
Shape58.USE = "HAnimJointShape";
Transform57.children = new MFNode();

Transform57.children[0] = Shape58;

Transform56.children = new MFNode();

Transform56.children[0] = Transform57;

HAnimSegment53.children[2] = Transform56;

let Shape59 = browser.currentScene.createNode("Shape");
let LineSet60 = browser.currentScene.createNode("LineSet");
LineSet60.vertexCount = new MFInt32(new int[2]);
let Coordinate61 = browser.currentScene.createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet60.coord = Coordinate61;

//from humanoid_root to sacroiliac vertices 2
let ColorRGBA62 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA62.USE = "HAnimSegmentLineColorRGBA";
LineSet60.color = ColorRGBA62;

Shape59.geometry = LineSet60;

HAnimSegment53.children[3] = Shape59;

let HAnimSite63 = browser.currentScene.createNode("HAnimSite");
HAnimSite63.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite63.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite63.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor64 = browser.currentScene.createNode("TouchSensor");
TouchSensor64.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite63.children = new MFNode();

HAnimSite63.children[0] = TouchSensor64;

let Shape65 = browser.currentScene.createNode("Shape");
Shape65.USE = "HAnimSiteShape";
HAnimSite63.children[1] = Shape65;

HAnimSegment53.children[4] = HAnimSite63;

let HAnimSite66 = browser.currentScene.createNode("HAnimSite");
HAnimSite66.name = "crotch_pt";
HAnimSite66.DEF = "hanim_crotch_pt";
HAnimSite66.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
let TouchSensor67 = browser.currentScene.createNode("TouchSensor");
TouchSensor67.description = "HAnimSite crotch_pt";
HAnimSite66.children = new MFNode();

HAnimSite66.children[0] = TouchSensor67;

let Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "HAnimSiteShape";
HAnimSite66.children[1] = Shape68;

HAnimSegment53.children[5] = HAnimSite66;

let HAnimSite69 = browser.currentScene.createNode("HAnimSite");
HAnimSite69.name = "l_asis_pt";
HAnimSite69.DEF = "hanim_l_asis_pt";
HAnimSite69.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
let TouchSensor70 = browser.currentScene.createNode("TouchSensor");
TouchSensor70.description = "HAnimSite l_asis_pt";
HAnimSite69.children = new MFNode();

HAnimSite69.children[0] = TouchSensor70;

let Shape71 = browser.currentScene.createNode("Shape");
Shape71.USE = "HAnimSiteShape";
HAnimSite69.children[1] = Shape71;

HAnimSegment53.children[6] = HAnimSite69;

let HAnimSite72 = browser.currentScene.createNode("HAnimSite");
HAnimSite72.name = "l_iliocristale_pt";
HAnimSite72.DEF = "hanim_l_iliocristale_pt";
HAnimSite72.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
let TouchSensor73 = browser.currentScene.createNode("TouchSensor");
TouchSensor73.description = "HAnimSite l_iliocristale_pt";
HAnimSite72.children = new MFNode();

HAnimSite72.children[0] = TouchSensor73;

let Shape74 = browser.currentScene.createNode("Shape");
Shape74.USE = "HAnimSiteShape";
HAnimSite72.children[1] = Shape74;

HAnimSegment53.children[7] = HAnimSite72;

let HAnimSite75 = browser.currentScene.createNode("HAnimSite");
HAnimSite75.name = "l_psis_pt";
HAnimSite75.DEF = "hanim_l_psis_pt";
HAnimSite75.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
let TouchSensor76 = browser.currentScene.createNode("TouchSensor");
TouchSensor76.description = "HAnimSite l_psis_pt";
HAnimSite75.children = new MFNode();

HAnimSite75.children[0] = TouchSensor76;

let Shape77 = browser.currentScene.createNode("Shape");
Shape77.USE = "HAnimSiteShape";
HAnimSite75.children[1] = Shape77;

HAnimSegment53.children[8] = HAnimSite75;

let HAnimSite78 = browser.currentScene.createNode("HAnimSite");
HAnimSite78.name = "l_trochanterion_pt";
HAnimSite78.DEF = "hanim_l_trochanterion_pt";
HAnimSite78.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
let TouchSensor79 = browser.currentScene.createNode("TouchSensor");
TouchSensor79.description = "HAnimSite l_trochanterion_pt";
HAnimSite78.children = new MFNode();

HAnimSite78.children[0] = TouchSensor79;

let Shape80 = browser.currentScene.createNode("Shape");
Shape80.USE = "HAnimSiteShape";
HAnimSite78.children[1] = Shape80;

HAnimSegment53.children[9] = HAnimSite78;

let HAnimSite81 = browser.currentScene.createNode("HAnimSite");
HAnimSite81.name = "r_asis_pt";
HAnimSite81.DEF = "hanim_r_asis_pt";
HAnimSite81.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
let TouchSensor82 = browser.currentScene.createNode("TouchSensor");
TouchSensor82.description = "HAnimSite r_asis_pt";
HAnimSite81.children = new MFNode();

HAnimSite81.children[0] = TouchSensor82;

let Shape83 = browser.currentScene.createNode("Shape");
Shape83.USE = "HAnimSiteShape";
HAnimSite81.children[1] = Shape83;

HAnimSegment53.children[10] = HAnimSite81;

let HAnimSite84 = browser.currentScene.createNode("HAnimSite");
HAnimSite84.name = "r_iliocristale_pt";
HAnimSite84.DEF = "hanim_r_iliocristale_pt";
HAnimSite84.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
let TouchSensor85 = browser.currentScene.createNode("TouchSensor");
TouchSensor85.description = "HAnimSite r_iliocristale_pt";
HAnimSite84.children = new MFNode();

HAnimSite84.children[0] = TouchSensor85;

let Shape86 = browser.currentScene.createNode("Shape");
Shape86.USE = "HAnimSiteShape";
HAnimSite84.children[1] = Shape86;

HAnimSegment53.children[11] = HAnimSite84;

let HAnimSite87 = browser.currentScene.createNode("HAnimSite");
HAnimSite87.name = "r_psis_pt";
HAnimSite87.DEF = "hanim_r_psis_pt";
HAnimSite87.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
let TouchSensor88 = browser.currentScene.createNode("TouchSensor");
TouchSensor88.description = "HAnimSite r_psis_pt";
HAnimSite87.children = new MFNode();

HAnimSite87.children[0] = TouchSensor88;

let Shape89 = browser.currentScene.createNode("Shape");
Shape89.USE = "HAnimSiteShape";
HAnimSite87.children[1] = Shape89;

HAnimSegment53.children[12] = HAnimSite87;

let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.name = "r_trochanterion_pt";
HAnimSite90.DEF = "hanim_r_trochanterion_pt";
HAnimSite90.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
let TouchSensor91 = browser.currentScene.createNode("TouchSensor");
TouchSensor91.description = "HAnimSite r_trochanterion_pt";
HAnimSite90.children = new MFNode();

HAnimSite90.children[0] = TouchSensor91;

let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "HAnimSiteShape";
HAnimSite90.children[1] = Shape92;

HAnimSegment53.children[13] = HAnimSite90;

let Shape93 = browser.currentScene.createNode("Shape");
let LineSet94 = browser.currentScene.createNode("LineSet");
LineSet94.vertexCount = new MFInt32(new int[2]);
let Coordinate95 = browser.currentScene.createNode("Coordinate");
Coordinate95.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet94.coord = Coordinate95;

//from humanoid_root to vl5 vertices 2
let ColorRGBA96 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA96.USE = "HAnimSegmentLineColorRGBA";
LineSet94.color = ColorRGBA96;

Shape93.geometry = LineSet94;

HAnimSegment53.children[14] = Shape93;

let HAnimSite97 = browser.currentScene.createNode("HAnimSite");
HAnimSite97.name = "navel_pt";
HAnimSite97.DEF = "hanim_navel_pt";
HAnimSite97.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
let TouchSensor98 = browser.currentScene.createNode("TouchSensor");
TouchSensor98.description = "HAnimSite navel_pt";
HAnimSite97.children = new MFNode();

HAnimSite97.children[0] = TouchSensor98;

let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "HAnimSiteShape";
HAnimSite97.children[1] = Shape99;

HAnimSegment53.children[15] = HAnimSite97;

let HAnimSite100 = browser.currentScene.createNode("HAnimSite");
HAnimSite100.name = "waist_preferred_anterior_pt";
HAnimSite100.DEF = "hanim_waist_preferred_anterior_pt";
HAnimSite100.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor101 = browser.currentScene.createNode("TouchSensor");
TouchSensor101.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite100.children = new MFNode();

HAnimSite100.children[0] = TouchSensor101;

let Shape102 = browser.currentScene.createNode("Shape");
Shape102.USE = "HAnimSiteShape";
HAnimSite100.children[1] = Shape102;

HAnimSegment53.children[16] = HAnimSite100;

let HAnimSite103 = browser.currentScene.createNode("HAnimSite");
HAnimSite103.name = "waist_preferred_posterior_pt";
HAnimSite103.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite103.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
let TouchSensor104 = browser.currentScene.createNode("TouchSensor");
TouchSensor104.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite103.children = new MFNode();

HAnimSite103.children[0] = TouchSensor104;

let Shape105 = browser.currentScene.createNode("Shape");
Shape105.USE = "HAnimSiteShape";
HAnimSite103.children[1] = Shape105;

HAnimSegment53.children[17] = HAnimSite103;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimSegment53;

let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "sacroiliac";
HAnimJoint106.DEF = "hanim_sacroiliac";
HAnimJoint106.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint106.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint106.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment107 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment107.name = "pelvis";
HAnimSegment107.DEF = "hanim_pelvis";
let Transform108 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform109 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "HAnimJointShape";
Transform109.children = new MFNode();

Transform109.children[0] = Shape110;

Transform108.children = new MFNode();

Transform108.children[0] = Transform109;

HAnimSegment107.children = new MFNode();

HAnimSegment107.children[0] = Transform108;

let Shape111 = browser.currentScene.createNode("Shape");
let LineSet112 = browser.currentScene.createNode("LineSet");
LineSet112.vertexCount = new MFInt32(new int[2]);
let Coordinate113 = browser.currentScene.createNode("Coordinate");
Coordinate113.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet112.coord = Coordinate113;

//from sacroiliac to l_hip vertices 2
let ColorRGBA114 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA114.USE = "HAnimSegmentLineColorRGBA";
LineSet112.color = ColorRGBA114;

Shape111.geometry = LineSet112;

HAnimSegment107.children[1] = Shape111;

let HAnimSite115 = browser.currentScene.createNode("HAnimSite");
HAnimSite115.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite115.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite115.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
let TouchSensor116 = browser.currentScene.createNode("TouchSensor");
TouchSensor116.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite115.children = new MFNode();

HAnimSite115.children[0] = TouchSensor116;

let Shape117 = browser.currentScene.createNode("Shape");
Shape117.USE = "HAnimSiteShape";
HAnimSite115.children[1] = Shape117;

HAnimSegment107.children[2] = HAnimSite115;

let HAnimSite118 = browser.currentScene.createNode("HAnimSite");
HAnimSite118.name = "l_femoral_medial_epicondyles_pt";
HAnimSite118.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite118.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
let TouchSensor119 = browser.currentScene.createNode("TouchSensor");
TouchSensor119.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = TouchSensor119;

let Shape120 = browser.currentScene.createNode("Shape");
Shape120.USE = "HAnimSiteShape";
HAnimSite118.children[1] = Shape120;

HAnimSegment107.children[3] = HAnimSite118;

let HAnimSite121 = browser.currentScene.createNode("HAnimSite");
HAnimSite121.name = "l_knee_crease_pt";
HAnimSite121.DEF = "hanim_l_knee_crease_pt";
HAnimSite121.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
let TouchSensor122 = browser.currentScene.createNode("TouchSensor");
TouchSensor122.description = "HAnimSite l_knee_crease_pt";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = TouchSensor122;

let Shape123 = browser.currentScene.createNode("Shape");
Shape123.USE = "HAnimSiteShape";
HAnimSite121.children[1] = Shape123;

HAnimSegment107.children[4] = HAnimSite121;

let HAnimSite124 = browser.currentScene.createNode("HAnimSite");
HAnimSite124.name = "l_suprapatella_pt";
HAnimSite124.DEF = "hanim_l_suprapatella_pt";
HAnimSite124.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor125 = browser.currentScene.createNode("TouchSensor");
TouchSensor125.description = "HAnimSite l_suprapatella_pt";
HAnimSite124.children = new MFNode();

HAnimSite124.children[0] = TouchSensor125;

let Shape126 = browser.currentScene.createNode("Shape");
Shape126.USE = "HAnimSiteShape";
HAnimSite124.children[1] = Shape126;

HAnimSegment107.children[5] = HAnimSite124;

let Shape127 = browser.currentScene.createNode("Shape");
let LineSet128 = browser.currentScene.createNode("LineSet");
LineSet128.vertexCount = new MFInt32(new int[2]);
let Coordinate129 = browser.currentScene.createNode("Coordinate");
Coordinate129.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet128.coord = Coordinate129;

//from sacroiliac to r_hip vertices 2
let ColorRGBA130 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA130.USE = "HAnimSegmentLineColorRGBA";
LineSet128.color = ColorRGBA130;

Shape127.geometry = LineSet128;

HAnimSegment107.children[6] = Shape127;

let HAnimSite131 = browser.currentScene.createNode("HAnimSite");
HAnimSite131.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite131.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite131.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
let TouchSensor132 = browser.currentScene.createNode("TouchSensor");
TouchSensor132.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite131.children = new MFNode();

HAnimSite131.children[0] = TouchSensor132;

let Shape133 = browser.currentScene.createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131.children[1] = Shape133;

HAnimSegment107.children[7] = HAnimSite131;

let HAnimSite134 = browser.currentScene.createNode("HAnimSite");
HAnimSite134.name = "r_femoral_medial_epicondyles_pt";
HAnimSite134.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite134.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
let TouchSensor135 = browser.currentScene.createNode("TouchSensor");
TouchSensor135.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite134.children = new MFNode();

HAnimSite134.children[0] = TouchSensor135;

let Shape136 = browser.currentScene.createNode("Shape");
Shape136.USE = "HAnimSiteShape";
HAnimSite134.children[1] = Shape136;

HAnimSegment107.children[8] = HAnimSite134;

let HAnimSite137 = browser.currentScene.createNode("HAnimSite");
HAnimSite137.name = "r_knee_crease_pt";
HAnimSite137.DEF = "hanim_r_knee_crease_pt";
HAnimSite137.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
let TouchSensor138 = browser.currentScene.createNode("TouchSensor");
TouchSensor138.description = "HAnimSite r_knee_crease_pt";
HAnimSite137.children = new MFNode();

HAnimSite137.children[0] = TouchSensor138;

let Shape139 = browser.currentScene.createNode("Shape");
Shape139.USE = "HAnimSiteShape";
HAnimSite137.children[1] = Shape139;

HAnimSegment107.children[9] = HAnimSite137;

let HAnimSite140 = browser.currentScene.createNode("HAnimSite");
HAnimSite140.name = "r_suprapatella_pt";
HAnimSite140.DEF = "hanim_r_suprapatella_pt";
HAnimSite140.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor141 = browser.currentScene.createNode("TouchSensor");
TouchSensor141.description = "HAnimSite r_suprapatella_pt";
HAnimSite140.children = new MFNode();

HAnimSite140.children[0] = TouchSensor141;

let Shape142 = browser.currentScene.createNode("Shape");
Shape142.USE = "HAnimSiteShape";
HAnimSite140.children[1] = Shape142;

HAnimSegment107.children[10] = HAnimSite140;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimSegment107;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.name = "l_hip";
HAnimJoint143.DEF = "hanim_l_hip";
HAnimJoint143.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint143.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint143.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment144.name = "l_thigh";
HAnimSegment144.DEF = "hanim_l_thigh";
let Transform145 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform146 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape147 = browser.currentScene.createNode("Shape");
Shape147.USE = "HAnimJointShape";
Transform146.children = new MFNode();

Transform146.children[0] = Shape147;

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
HAnimSite152.name = "l_lateral_malleolus_pt";
HAnimSite152.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite152.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
let TouchSensor153 = browser.currentScene.createNode("TouchSensor");
TouchSensor153.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite152.children = new MFNode();

HAnimSite152.children[0] = TouchSensor153;

let Shape154 = browser.currentScene.createNode("Shape");
Shape154.USE = "HAnimSiteShape";
HAnimSite152.children[1] = Shape154;

HAnimSegment144.children[2] = HAnimSite152;

let HAnimSite155 = browser.currentScene.createNode("HAnimSite");
HAnimSite155.name = "l_medial_malleolus_pt";
HAnimSite155.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite155.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
let TouchSensor156 = browser.currentScene.createNode("TouchSensor");
TouchSensor156.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite155.children = new MFNode();

HAnimSite155.children[0] = TouchSensor156;

let Shape157 = browser.currentScene.createNode("Shape");
Shape157.USE = "HAnimSiteShape";
HAnimSite155.children[1] = Shape157;

HAnimSegment144.children[3] = HAnimSite155;

let HAnimSite158 = browser.currentScene.createNode("HAnimSite");
HAnimSite158.name = "l_tibiale_pt";
HAnimSite158.DEF = "hanim_l_tibiale_pt";
HAnimSite158.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor159 = browser.currentScene.createNode("TouchSensor");
TouchSensor159.description = "HAnimSite l_tibiale_pt";
HAnimSite158.children = new MFNode();

HAnimSite158.children[0] = TouchSensor159;

let Shape160 = browser.currentScene.createNode("Shape");
Shape160.USE = "HAnimSiteShape";
HAnimSite158.children[1] = Shape160;

HAnimSegment144.children[4] = HAnimSite158;

HAnimJoint143.children = new MFNode();

HAnimJoint143.children[0] = HAnimSegment144;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.name = "l_knee";
HAnimJoint161.DEF = "hanim_l_knee";
HAnimJoint161.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint161.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint161.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment162 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment162.name = "l_calf";
HAnimSegment162.DEF = "hanim_l_calf";
let Transform163 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform164 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape165 = browser.currentScene.createNode("Shape");
Shape165.USE = "HAnimJointShape";
Transform164.children = new MFNode();

Transform164.children[0] = Shape165;

Transform163.children = new MFNode();

Transform163.children[0] = Transform164;

HAnimSegment162.children = new MFNode();

HAnimSegment162.children[0] = Transform163;

let Shape166 = browser.currentScene.createNode("Shape");
let LineSet167 = browser.currentScene.createNode("LineSet");
LineSet167.vertexCount = new MFInt32(new int[2]);
let Coordinate168 = browser.currentScene.createNode("Coordinate");
Coordinate168.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet167.coord = Coordinate168;

//from l_knee to l_talocrural vertices 2
let ColorRGBA169 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA169.USE = "HAnimSegmentLineColorRGBA";
LineSet167.color = ColorRGBA169;

Shape166.geometry = LineSet167;

HAnimSegment162.children[1] = Shape166;

let HAnimSite170 = browser.currentScene.createNode("HAnimSite");
HAnimSite170.name = "l_calcaneus_posterior_pt";
HAnimSite170.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite170.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
let TouchSensor171 = browser.currentScene.createNode("TouchSensor");
TouchSensor171.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite170.children = new MFNode();

HAnimSite170.children[0] = TouchSensor171;

let Shape172 = browser.currentScene.createNode("Shape");
Shape172.USE = "HAnimSiteShape";
HAnimSite170.children[1] = Shape172;

HAnimSegment162.children[2] = HAnimSite170;

let HAnimSite173 = browser.currentScene.createNode("HAnimSite");
HAnimSite173.name = "l_sphyrion_pt";
HAnimSite173.DEF = "hanim_l_sphyrion_pt";
HAnimSite173.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
let TouchSensor174 = browser.currentScene.createNode("TouchSensor");
TouchSensor174.description = "HAnimSite l_sphyrion_pt";
HAnimSite173.children = new MFNode();

HAnimSite173.children[0] = TouchSensor174;

let Shape175 = browser.currentScene.createNode("Shape");
Shape175.USE = "HAnimSiteShape";
HAnimSite173.children[1] = Shape175;

HAnimSegment162.children[3] = HAnimSite173;

HAnimJoint161.children = new MFNode();

HAnimJoint161.children[0] = HAnimSegment162;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.name = "l_talocrural";
HAnimJoint176.DEF = "hanim_l_talocrural";
HAnimJoint176.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint176.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint176.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment177.name = "l_talus";
HAnimSegment177.DEF = "hanim_l_talus";
let Transform178 = browser.currentScene.createNode("Transform");
Transform178.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform178.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform178.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
let Transform179 = browser.currentScene.createNode("Transform");
//Empty Transform left foot
let Shape180 = browser.currentScene.createNode("Shape");
Shape180.USE = "HAnimJointShape";
Transform179.children = new MFNode();

Transform179.children[0] = Shape180;

Transform178.children = new MFNode();

Transform178.children[0] = Transform179;

HAnimSegment177.children = new MFNode();

HAnimSegment177.children[0] = Transform178;

let Shape181 = browser.currentScene.createNode("Shape");
let LineSet182 = browser.currentScene.createNode("LineSet");
LineSet182.vertexCount = new MFInt32(new int[2]);
let Coordinate183 = browser.currentScene.createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet182.coord = Coordinate183;

//from l_talocrural to l_talocalcaneonavicular vertices 2
let ColorRGBA184 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA184.USE = "HAnimSegmentLineColorRGBA";
LineSet182.color = ColorRGBA184;

Shape181.geometry = LineSet182;

HAnimSegment177.children[1] = Shape181;

let Shape185 = browser.currentScene.createNode("Shape");
let LineSet186 = browser.currentScene.createNode("LineSet");
LineSet186.vertexCount = new MFInt32(new int[2]);
let Coordinate187 = browser.currentScene.createNode("Coordinate");
Coordinate187.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet186.coord = Coordinate187;

//from l_talocrural to l_calcaneocuboid vertices 2
let ColorRGBA188 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA";
LineSet186.color = ColorRGBA188;

Shape185.geometry = LineSet186;

HAnimSegment177.children[2] = Shape185;

HAnimJoint176.children = new MFNode();

HAnimJoint176.children[0] = HAnimSegment177;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.name = "l_talocalcaneonavicular";
HAnimJoint189.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint189.center = new SFVec3f(new float[0,1,0]);
HAnimJoint189.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint189.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment190 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment190.name = "l_navicular";
HAnimSegment190.DEF = "hanim_l_navicular";
let Transform191 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform192 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape193 = browser.currentScene.createNode("Shape");
Shape193.USE = "HAnimJointShape";
Transform192.children = new MFNode();

Transform192.children[0] = Shape193;

Transform191.children = new MFNode();

Transform191.children[0] = Transform192;

HAnimSegment190.children = new MFNode();

HAnimSegment190.children[0] = Transform191;

let Shape194 = browser.currentScene.createNode("Shape");
let LineSet195 = browser.currentScene.createNode("LineSet");
LineSet195.vertexCount = new MFInt32(new int[2]);
let Coordinate196 = browser.currentScene.createNode("Coordinate");
Coordinate196.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet195.coord = Coordinate196;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
let ColorRGBA197 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA197.USE = "HAnimSegmentLineColorRGBA";
LineSet195.color = ColorRGBA197;

Shape194.geometry = LineSet195;

HAnimSegment190.children[1] = Shape194;

let Shape198 = browser.currentScene.createNode("Shape");
let LineSet199 = browser.currentScene.createNode("LineSet");
LineSet199.vertexCount = new MFInt32(new int[2]);
let Coordinate200 = browser.currentScene.createNode("Coordinate");
Coordinate200.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet199.coord = Coordinate200;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
let ColorRGBA201 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA201.USE = "HAnimSegmentLineColorRGBA";
LineSet199.color = ColorRGBA201;

Shape198.geometry = LineSet199;

HAnimSegment190.children[2] = Shape198;

let Shape202 = browser.currentScene.createNode("Shape");
let LineSet203 = browser.currentScene.createNode("LineSet");
LineSet203.vertexCount = new MFInt32(new int[2]);
let Coordinate204 = browser.currentScene.createNode("Coordinate");
Coordinate204.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet203.coord = Coordinate204;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
let ColorRGBA205 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA205.USE = "HAnimSegmentLineColorRGBA";
LineSet203.color = ColorRGBA205;

Shape202.geometry = LineSet203;

HAnimSegment190.children[3] = Shape202;

HAnimJoint189.children = new MFNode();

HAnimJoint189.children[0] = HAnimSegment190;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.name = "l_cuneonavicular_1";
HAnimJoint206.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint206.center = new SFVec3f(new float[0,1,0]);
HAnimJoint206.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint206.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment207 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment207.name = "l_cuneiform_1";
HAnimSegment207.DEF = "hanim_l_cuneiform_1";
let Transform208 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform209 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape210 = browser.currentScene.createNode("Shape");
Shape210.USE = "HAnimJointShape";
Transform209.children = new MFNode();

Transform209.children[0] = Shape210;

Transform208.children = new MFNode();

Transform208.children[0] = Transform209;

HAnimSegment207.children = new MFNode();

HAnimSegment207.children[0] = Transform208;

let Shape211 = browser.currentScene.createNode("Shape");
let LineSet212 = browser.currentScene.createNode("LineSet");
LineSet212.vertexCount = new MFInt32(new int[2]);
let Coordinate213 = browser.currentScene.createNode("Coordinate");
Coordinate213.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet212.coord = Coordinate213;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
let ColorRGBA214 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA214.USE = "HAnimSegmentLineColorRGBA";
LineSet212.color = ColorRGBA214;

Shape211.geometry = LineSet212;

HAnimSegment207.children[1] = Shape211;

HAnimJoint206.children = new MFNode();

HAnimJoint206.children[0] = HAnimSegment207;

let HAnimJoint215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint215.name = "l_tarsometatarsal_1";
HAnimJoint215.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint215.center = new SFVec3f(new float[0,1,0]);
HAnimJoint215.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint215.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment216 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment216.name = "l_metatarsal_1";
HAnimSegment216.DEF = "hanim_l_metatarsal_1";
let Transform217 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform218 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape219 = browser.currentScene.createNode("Shape");
Shape219.USE = "HAnimJointShape";
Transform218.children = new MFNode();

Transform218.children[0] = Shape219;

Transform217.children = new MFNode();

Transform217.children[0] = Transform218;

HAnimSegment216.children = new MFNode();

HAnimSegment216.children[0] = Transform217;

let Shape220 = browser.currentScene.createNode("Shape");
let LineSet221 = browser.currentScene.createNode("LineSet");
LineSet221.vertexCount = new MFInt32(new int[2]);
let Coordinate222 = browser.currentScene.createNode("Coordinate");
Coordinate222.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet221.coord = Coordinate222;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
let ColorRGBA223 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA223.USE = "HAnimSegmentLineColorRGBA";
LineSet221.color = ColorRGBA223;

Shape220.geometry = LineSet221;

HAnimSegment216.children[1] = Shape220;

let HAnimSite224 = browser.currentScene.createNode("HAnimSite");
HAnimSite224.name = "l_metatarsal_phalanx_1_pt";
HAnimSite224.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite224.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor225 = browser.currentScene.createNode("TouchSensor");
TouchSensor225.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite224.children = new MFNode();

HAnimSite224.children[0] = TouchSensor225;

let Shape226 = browser.currentScene.createNode("Shape");
Shape226.USE = "HAnimSiteShape";
HAnimSite224.children[1] = Shape226;

HAnimSegment216.children[2] = HAnimSite224;

HAnimJoint215.children = new MFNode();

HAnimJoint215.children[0] = HAnimSegment216;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.name = "l_metatarsophalangeal_1";
HAnimJoint227.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint227.center = new SFVec3f(new float[0,1,0]);
HAnimJoint227.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint227.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment228.DEF = "hanim_l_tarsal_proximal_phalanx_1";
let Transform229 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform230 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape231 = browser.currentScene.createNode("Shape");
Shape231.USE = "HAnimJointShape";
Transform230.children = new MFNode();

Transform230.children[0] = Shape231;

Transform229.children = new MFNode();

Transform229.children[0] = Transform230;

HAnimSegment228.children = new MFNode();

HAnimSegment228.children[0] = Transform229;

let Shape232 = browser.currentScene.createNode("Shape");
let LineSet233 = browser.currentScene.createNode("LineSet");
LineSet233.vertexCount = new MFInt32(new int[2]);
let Coordinate234 = browser.currentScene.createNode("Coordinate");
Coordinate234.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet233.coord = Coordinate234;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
let ColorRGBA235 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA235.USE = "HAnimSegmentLineColorRGBA";
LineSet233.color = ColorRGBA235;

Shape232.geometry = LineSet233;

HAnimSegment228.children[1] = Shape232;

let HAnimSite236 = browser.currentScene.createNode("HAnimSite");
HAnimSite236.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite236.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite236.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor237 = browser.currentScene.createNode("TouchSensor");
TouchSensor237.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite236.children = new MFNode();

HAnimSite236.children[0] = TouchSensor237;

let Shape238 = browser.currentScene.createNode("Shape");
Shape238.USE = "HAnimSiteShape";
HAnimSite236.children[1] = Shape238;

HAnimSegment228.children[2] = HAnimSite236;

HAnimJoint227.children = new MFNode();

HAnimJoint227.children[0] = HAnimSegment228;

let HAnimJoint239 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint239.name = "l_tarsal_interphalangeal_1";
HAnimJoint239.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint239.center = new SFVec3f(new float[0,1,0]);
HAnimJoint239.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint239.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint227.children[1] = HAnimJoint239;

HAnimJoint215.children[1] = HAnimJoint227;

HAnimJoint206.children[1] = HAnimJoint215;

HAnimJoint189.children[1] = HAnimJoint206;

let HAnimJoint240 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint240.name = "l_cuneonavicular_2";
HAnimJoint240.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint240.center = new SFVec3f(new float[0,1,0]);
HAnimJoint240.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint240.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment241.name = "l_cuneiform_2";
HAnimSegment241.DEF = "hanim_l_cuneiform_2";
let Transform242 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform243 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape244 = browser.currentScene.createNode("Shape");
Shape244.USE = "HAnimJointShape";
Transform243.children = new MFNode();

Transform243.children[0] = Shape244;

Transform242.children = new MFNode();

Transform242.children[0] = Transform243;

HAnimSegment241.children = new MFNode();

HAnimSegment241.children[0] = Transform242;

let Shape245 = browser.currentScene.createNode("Shape");
let LineSet246 = browser.currentScene.createNode("LineSet");
LineSet246.vertexCount = new MFInt32(new int[2]);
let Coordinate247 = browser.currentScene.createNode("Coordinate");
Coordinate247.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet246.coord = Coordinate247;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
let ColorRGBA248 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA248.USE = "HAnimSegmentLineColorRGBA";
LineSet246.color = ColorRGBA248;

Shape245.geometry = LineSet246;

HAnimSegment241.children[1] = Shape245;

HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

let HAnimJoint249 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint249.name = "l_tarsometatarsal_2";
HAnimJoint249.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint249.center = new SFVec3f(new float[0,1,0]);
HAnimJoint249.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint249.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment250.name = "l_metatarsal_2";
HAnimSegment250.DEF = "hanim_l_metatarsal_2";
let Transform251 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform252 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape253 = browser.currentScene.createNode("Shape");
Shape253.USE = "HAnimJointShape";
Transform252.children = new MFNode();

Transform252.children[0] = Shape253;

Transform251.children = new MFNode();

Transform251.children[0] = Transform252;

HAnimSegment250.children = new MFNode();

HAnimSegment250.children[0] = Transform251;

let Shape254 = browser.currentScene.createNode("Shape");
let LineSet255 = browser.currentScene.createNode("LineSet");
LineSet255.vertexCount = new MFInt32(new int[2]);
let Coordinate256 = browser.currentScene.createNode("Coordinate");
Coordinate256.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet255.coord = Coordinate256;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
let ColorRGBA257 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA257.USE = "HAnimSegmentLineColorRGBA";
LineSet255.color = ColorRGBA257;

Shape254.geometry = LineSet255;

HAnimSegment250.children[1] = Shape254;

HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

let HAnimJoint258 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint258.name = "l_metatarsophalangeal_2";
HAnimJoint258.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint258.center = new SFVec3f(new float[0,1,0]);
HAnimJoint258.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint258.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment259 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment259.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment259.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Transform260 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform261 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape262 = browser.currentScene.createNode("Shape");
Shape262.USE = "HAnimJointShape";
Transform261.children = new MFNode();

Transform261.children[0] = Shape262;

Transform260.children = new MFNode();

Transform260.children[0] = Transform261;

HAnimSegment259.children = new MFNode();

HAnimSegment259.children[0] = Transform260;

let Shape263 = browser.currentScene.createNode("Shape");
let LineSet264 = browser.currentScene.createNode("LineSet");
LineSet264.vertexCount = new MFInt32(new int[2]);
let Coordinate265 = browser.currentScene.createNode("Coordinate");
Coordinate265.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet264.coord = Coordinate265;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
let ColorRGBA266 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA266.USE = "HAnimSegmentLineColorRGBA";
LineSet264.color = ColorRGBA266;

Shape263.geometry = LineSet264;

HAnimSegment259.children[1] = Shape263;

HAnimJoint258.children = new MFNode();

HAnimJoint258.children[0] = HAnimSegment259;

let HAnimJoint267 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint267.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint267.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint267.center = new SFVec3f(new float[0,1,0]);
HAnimJoint267.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint267.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment268 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment268.name = "l_tarsal_middle_phalanx_2";
HAnimSegment268.DEF = "hanim_l_tarsal_middle_phalanx_2";
let Transform269 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform270 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape271 = browser.currentScene.createNode("Shape");
Shape271.USE = "HAnimJointShape";
Transform270.children = new MFNode();

Transform270.children[0] = Shape271;

Transform269.children = new MFNode();

Transform269.children[0] = Transform270;

HAnimSegment268.children = new MFNode();

HAnimSegment268.children[0] = Transform269;

let Shape272 = browser.currentScene.createNode("Shape");
let LineSet273 = browser.currentScene.createNode("LineSet");
LineSet273.vertexCount = new MFInt32(new int[2]);
let Coordinate274 = browser.currentScene.createNode("Coordinate");
Coordinate274.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet273.coord = Coordinate274;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA275 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA275.USE = "HAnimSegmentLineColorRGBA";
LineSet273.color = ColorRGBA275;

Shape272.geometry = LineSet273;

HAnimSegment268.children[1] = Shape272;

let HAnimSite276 = browser.currentScene.createNode("HAnimSite");
HAnimSite276.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite276.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite276.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
let TouchSensor277 = browser.currentScene.createNode("TouchSensor");
TouchSensor277.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite276.children = new MFNode();

HAnimSite276.children[0] = TouchSensor277;

let Shape278 = browser.currentScene.createNode("Shape");
Shape278.USE = "HAnimSiteShape";
HAnimSite276.children[1] = Shape278;

HAnimSegment268.children[2] = HAnimSite276;

HAnimJoint267.children = new MFNode();

HAnimJoint267.children[0] = HAnimSegment268;

let HAnimJoint279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint279.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint279.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint279.center = new SFVec3f(new float[0,1,0]);
HAnimJoint279.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint279.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint267.children[1] = HAnimJoint279;

HAnimJoint258.children[1] = HAnimJoint267;

HAnimJoint249.children[1] = HAnimJoint258;

HAnimJoint240.children[1] = HAnimJoint249;

HAnimJoint189.children[2] = HAnimJoint240;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.name = "l_cuneonavicular_3";
HAnimJoint280.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint280.center = new SFVec3f(new float[0,1,0]);
HAnimJoint280.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint280.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.name = "l_cuneiform_3";
HAnimSegment281.DEF = "hanim_l_cuneiform_3";
let Transform282 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform283 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape284 = browser.currentScene.createNode("Shape");
Shape284.USE = "HAnimJointShape";
Transform283.children = new MFNode();

Transform283.children[0] = Shape284;

Transform282.children = new MFNode();

Transform282.children[0] = Transform283;

HAnimSegment281.children = new MFNode();

HAnimSegment281.children[0] = Transform282;

let Shape285 = browser.currentScene.createNode("Shape");
let LineSet286 = browser.currentScene.createNode("LineSet");
LineSet286.vertexCount = new MFInt32(new int[2]);
let Coordinate287 = browser.currentScene.createNode("Coordinate");
Coordinate287.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet286.coord = Coordinate287;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
let ColorRGBA288 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA288.USE = "HAnimSegmentLineColorRGBA";
LineSet286.color = ColorRGBA288;

Shape285.geometry = LineSet286;

HAnimSegment281.children[1] = Shape285;

HAnimJoint280.children = new MFNode();

HAnimJoint280.children[0] = HAnimSegment281;

let HAnimJoint289 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint289.name = "l_tarsometatarsal_3";
HAnimJoint289.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint289.center = new SFVec3f(new float[0,1,0]);
HAnimJoint289.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint289.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment290 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment290.name = "l_metatarsal_3";
HAnimSegment290.DEF = "hanim_l_metatarsal_3";
let Transform291 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform292 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape293 = browser.currentScene.createNode("Shape");
Shape293.USE = "HAnimJointShape";
Transform292.children = new MFNode();

Transform292.children[0] = Shape293;

Transform291.children = new MFNode();

Transform291.children[0] = Transform292;

HAnimSegment290.children = new MFNode();

HAnimSegment290.children[0] = Transform291;

let Shape294 = browser.currentScene.createNode("Shape");
let LineSet295 = browser.currentScene.createNode("LineSet");
LineSet295.vertexCount = new MFInt32(new int[2]);
let Coordinate296 = browser.currentScene.createNode("Coordinate");
Coordinate296.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet295.coord = Coordinate296;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
let ColorRGBA297 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA297.USE = "HAnimSegmentLineColorRGBA";
LineSet295.color = ColorRGBA297;

Shape294.geometry = LineSet295;

HAnimSegment290.children[1] = Shape294;

HAnimJoint289.children = new MFNode();

HAnimJoint289.children[0] = HAnimSegment290;

let HAnimJoint298 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint298.name = "l_metatarsophalangeal_3";
HAnimJoint298.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint298.center = new SFVec3f(new float[0,1,0]);
HAnimJoint298.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint298.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment299 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment299.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment299.DEF = "hanim_l_tarsal_proximal_phalanx_3";
let Transform300 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform301 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape302 = browser.currentScene.createNode("Shape");
Shape302.USE = "HAnimJointShape";
Transform301.children = new MFNode();

Transform301.children[0] = Shape302;

Transform300.children = new MFNode();

Transform300.children[0] = Transform301;

HAnimSegment299.children = new MFNode();

HAnimSegment299.children[0] = Transform300;

let Shape303 = browser.currentScene.createNode("Shape");
let LineSet304 = browser.currentScene.createNode("LineSet");
LineSet304.vertexCount = new MFInt32(new int[2]);
let Coordinate305 = browser.currentScene.createNode("Coordinate");
Coordinate305.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet304.coord = Coordinate305;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
let ColorRGBA306 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA";
LineSet304.color = ColorRGBA306;

Shape303.geometry = LineSet304;

HAnimSegment299.children[1] = Shape303;

HAnimJoint298.children = new MFNode();

HAnimJoint298.children[0] = HAnimSegment299;

let HAnimJoint307 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint307.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint307.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint307.center = new SFVec3f(new float[0,1,0]);
HAnimJoint307.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint307.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment308 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment308.name = "l_tarsal_middle_phalanx_3";
HAnimSegment308.DEF = "hanim_l_tarsal_middle_phalanx_3";
let Transform309 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform310 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape311 = browser.currentScene.createNode("Shape");
Shape311.USE = "HAnimJointShape";
Transform310.children = new MFNode();

Transform310.children[0] = Shape311;

Transform309.children = new MFNode();

Transform309.children[0] = Transform310;

HAnimSegment308.children = new MFNode();

HAnimSegment308.children[0] = Transform309;

let Shape312 = browser.currentScene.createNode("Shape");
let LineSet313 = browser.currentScene.createNode("LineSet");
LineSet313.vertexCount = new MFInt32(new int[2]);
let Coordinate314 = browser.currentScene.createNode("Coordinate");
Coordinate314.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet313.coord = Coordinate314;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
let ColorRGBA315 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA315.USE = "HAnimSegmentLineColorRGBA";
LineSet313.color = ColorRGBA315;

Shape312.geometry = LineSet313;

HAnimSegment308.children[1] = Shape312;

let HAnimSite316 = browser.currentScene.createNode("HAnimSite");
HAnimSite316.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite316.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite316.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor317 = browser.currentScene.createNode("TouchSensor");
TouchSensor317.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite316.children = new MFNode();

HAnimSite316.children[0] = TouchSensor317;

let Shape318 = browser.currentScene.createNode("Shape");
Shape318.USE = "HAnimSiteShape";
HAnimSite316.children[1] = Shape318;

HAnimSegment308.children[2] = HAnimSite316;

HAnimJoint307.children = new MFNode();

HAnimJoint307.children[0] = HAnimSegment308;

let HAnimJoint319 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint319.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint319.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint319.center = new SFVec3f(new float[0,1,0]);
HAnimJoint319.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint319.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint307.children[1] = HAnimJoint319;

HAnimJoint298.children[1] = HAnimJoint307;

HAnimJoint289.children[1] = HAnimJoint298;

HAnimJoint280.children[1] = HAnimJoint289;

HAnimJoint189.children[3] = HAnimJoint280;

HAnimJoint176.children[1] = HAnimJoint189;

let HAnimJoint320 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint320.name = "l_calcaneocuboid";
HAnimJoint320.DEF = "hanim_l_calcaneocuboid";
HAnimJoint320.center = new SFVec3f(new float[0,1,0]);
HAnimJoint320.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint320.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment321 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment321.name = "l_calcaneus";
HAnimSegment321.DEF = "hanim_l_calcaneus";
let Transform322 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate327.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet326.coord = Coordinate327;

//from l_calcaneocuboid to l_transversetarsal vertices 2
let ColorRGBA328 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA328.USE = "HAnimSegmentLineColorRGBA";
LineSet326.color = ColorRGBA328;

Shape325.geometry = LineSet326;

HAnimSegment321.children[1] = Shape325;

HAnimJoint320.children = new MFNode();

HAnimJoint320.children[0] = HAnimSegment321;

let HAnimJoint329 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint329.name = "l_transversetarsal";
HAnimJoint329.DEF = "hanim_l_transversetarsal";
HAnimJoint329.center = new SFVec3f(new float[0,1,0]);
HAnimJoint329.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint329.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment330 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment330.name = "l_cuboid";
HAnimSegment330.DEF = "hanim_l_cuboid";
let Transform331 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform332 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape333 = browser.currentScene.createNode("Shape");
Shape333.USE = "HAnimJointShape";
Transform332.children = new MFNode();

Transform332.children[0] = Shape333;

Transform331.children = new MFNode();

Transform331.children[0] = Transform332;

HAnimSegment330.children = new MFNode();

HAnimSegment330.children[0] = Transform331;

let Shape334 = browser.currentScene.createNode("Shape");
let LineSet335 = browser.currentScene.createNode("LineSet");
LineSet335.vertexCount = new MFInt32(new int[2]);
let Coordinate336 = browser.currentScene.createNode("Coordinate");
Coordinate336.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet335.coord = Coordinate336;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
let ColorRGBA337 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA337.USE = "HAnimSegmentLineColorRGBA";
LineSet335.color = ColorRGBA337;

Shape334.geometry = LineSet335;

HAnimSegment330.children[1] = Shape334;

let Shape338 = browser.currentScene.createNode("Shape");
let LineSet339 = browser.currentScene.createNode("LineSet");
LineSet339.vertexCount = new MFInt32(new int[2]);
let Coordinate340 = browser.currentScene.createNode("Coordinate");
Coordinate340.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet339.coord = Coordinate340;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
let ColorRGBA341 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA341.USE = "HAnimSegmentLineColorRGBA";
LineSet339.color = ColorRGBA341;

Shape338.geometry = LineSet339;

HAnimSegment330.children[2] = Shape338;

HAnimJoint329.children = new MFNode();

HAnimJoint329.children[0] = HAnimSegment330;

let HAnimJoint342 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint342.name = "l_tarsometatarsal_4";
HAnimJoint342.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint342.center = new SFVec3f(new float[0,1,0]);
HAnimJoint342.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint342.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment343 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment343.name = "l_metatarsal_4";
HAnimSegment343.DEF = "hanim_l_metatarsal_4";
let Transform344 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform345 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape346 = browser.currentScene.createNode("Shape");
Shape346.USE = "HAnimJointShape";
Transform345.children = new MFNode();

Transform345.children[0] = Shape346;

Transform344.children = new MFNode();

Transform344.children[0] = Transform345;

HAnimSegment343.children = new MFNode();

HAnimSegment343.children[0] = Transform344;

let Shape347 = browser.currentScene.createNode("Shape");
let LineSet348 = browser.currentScene.createNode("LineSet");
LineSet348.vertexCount = new MFInt32(new int[2]);
let Coordinate349 = browser.currentScene.createNode("Coordinate");
Coordinate349.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet348.coord = Coordinate349;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
let ColorRGBA350 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA350.USE = "HAnimSegmentLineColorRGBA";
LineSet348.color = ColorRGBA350;

Shape347.geometry = LineSet348;

HAnimSegment343.children[1] = Shape347;

HAnimJoint342.children = new MFNode();

HAnimJoint342.children[0] = HAnimSegment343;

let HAnimJoint351 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint351.name = "l_metatarsophalangeal_4";
HAnimJoint351.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint351.center = new SFVec3f(new float[0,1,0]);
HAnimJoint351.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint351.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment352 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment352.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment352.DEF = "hanim_l_tarsal_proximal_phalanx_4";
let Transform353 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform354 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape355 = browser.currentScene.createNode("Shape");
Shape355.USE = "HAnimJointShape";
Transform354.children = new MFNode();

Transform354.children[0] = Shape355;

Transform353.children = new MFNode();

Transform353.children[0] = Transform354;

HAnimSegment352.children = new MFNode();

HAnimSegment352.children[0] = Transform353;

let Shape356 = browser.currentScene.createNode("Shape");
let LineSet357 = browser.currentScene.createNode("LineSet");
LineSet357.vertexCount = new MFInt32(new int[2]);
let Coordinate358 = browser.currentScene.createNode("Coordinate");
Coordinate358.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet357.coord = Coordinate358;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
let ColorRGBA359 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA359.USE = "HAnimSegmentLineColorRGBA";
LineSet357.color = ColorRGBA359;

Shape356.geometry = LineSet357;

HAnimSegment352.children[1] = Shape356;

HAnimJoint351.children = new MFNode();

HAnimJoint351.children[0] = HAnimSegment352;

let HAnimJoint360 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint360.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint360.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint360.center = new SFVec3f(new float[0,1,0]);
HAnimJoint360.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint360.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment361 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment361.name = "l_tarsal_middle_phalanx_4";
HAnimSegment361.DEF = "hanim_l_tarsal_middle_phalanx_4";
let Transform362 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform363 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape364 = browser.currentScene.createNode("Shape");
Shape364.USE = "HAnimJointShape";
Transform363.children = new MFNode();

Transform363.children[0] = Shape364;

Transform362.children = new MFNode();

Transform362.children[0] = Transform363;

HAnimSegment361.children = new MFNode();

HAnimSegment361.children[0] = Transform362;

let Shape365 = browser.currentScene.createNode("Shape");
let LineSet366 = browser.currentScene.createNode("LineSet");
LineSet366.vertexCount = new MFInt32(new int[2]);
let Coordinate367 = browser.currentScene.createNode("Coordinate");
Coordinate367.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet366.coord = Coordinate367;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
let ColorRGBA368 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA368.USE = "HAnimSegmentLineColorRGBA";
LineSet366.color = ColorRGBA368;

Shape365.geometry = LineSet366;

HAnimSegment361.children[1] = Shape365;

let HAnimSite369 = browser.currentScene.createNode("HAnimSite");
HAnimSite369.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite369.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite369.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor370 = browser.currentScene.createNode("TouchSensor");
TouchSensor370.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite369.children = new MFNode();

HAnimSite369.children[0] = TouchSensor370;

let Shape371 = browser.currentScene.createNode("Shape");
Shape371.USE = "HAnimSiteShape";
HAnimSite369.children[1] = Shape371;

HAnimSegment361.children[2] = HAnimSite369;

HAnimJoint360.children = new MFNode();

HAnimJoint360.children[0] = HAnimSegment361;

let HAnimJoint372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint372.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint372.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint372.center = new SFVec3f(new float[0,1,0]);
HAnimJoint372.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint372.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint360.children[1] = HAnimJoint372;

HAnimJoint351.children[1] = HAnimJoint360;

HAnimJoint342.children[1] = HAnimJoint351;

HAnimJoint329.children[1] = HAnimJoint342;

let HAnimJoint373 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint373.name = "l_tarsometatarsal_5";
HAnimJoint373.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint373.center = new SFVec3f(new float[0,1,0]);
HAnimJoint373.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint373.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment374 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment374.name = "l_metatarsal_5";
HAnimSegment374.DEF = "hanim_l_metatarsal_5";
let Transform375 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform376 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape377 = browser.currentScene.createNode("Shape");
Shape377.USE = "HAnimJointShape";
Transform376.children = new MFNode();

Transform376.children[0] = Shape377;

Transform375.children = new MFNode();

Transform375.children[0] = Transform376;

HAnimSegment374.children = new MFNode();

HAnimSegment374.children[0] = Transform375;

let Shape378 = browser.currentScene.createNode("Shape");
let LineSet379 = browser.currentScene.createNode("LineSet");
LineSet379.vertexCount = new MFInt32(new int[2]);
let Coordinate380 = browser.currentScene.createNode("Coordinate");
Coordinate380.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet379.coord = Coordinate380;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
let ColorRGBA381 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA381.USE = "HAnimSegmentLineColorRGBA";
LineSet379.color = ColorRGBA381;

Shape378.geometry = LineSet379;

HAnimSegment374.children[1] = Shape378;

let HAnimSite382 = browser.currentScene.createNode("HAnimSite");
HAnimSite382.name = "l_metatarsal_phalanx_5_pt";
HAnimSite382.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite382.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor383 = browser.currentScene.createNode("TouchSensor");
TouchSensor383.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite382.children = new MFNode();

HAnimSite382.children[0] = TouchSensor383;

let Shape384 = browser.currentScene.createNode("Shape");
Shape384.USE = "HAnimSiteShape";
HAnimSite382.children[1] = Shape384;

HAnimSegment374.children[2] = HAnimSite382;

HAnimJoint373.children = new MFNode();

HAnimJoint373.children[0] = HAnimSegment374;

let HAnimJoint385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint385.name = "l_metatarsophalangeal_5";
HAnimJoint385.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint385.center = new SFVec3f(new float[0,1,0]);
HAnimJoint385.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint385.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment386 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment386.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment386.DEF = "hanim_l_tarsal_proximal_phalanx_5";
let Transform387 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform388 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape389 = browser.currentScene.createNode("Shape");
Shape389.USE = "HAnimJointShape";
Transform388.children = new MFNode();

Transform388.children[0] = Shape389;

Transform387.children = new MFNode();

Transform387.children[0] = Transform388;

HAnimSegment386.children = new MFNode();

HAnimSegment386.children[0] = Transform387;

let Shape390 = browser.currentScene.createNode("Shape");
let LineSet391 = browser.currentScene.createNode("LineSet");
LineSet391.vertexCount = new MFInt32(new int[2]);
let Coordinate392 = browser.currentScene.createNode("Coordinate");
Coordinate392.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet391.coord = Coordinate392;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
let ColorRGBA393 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA393.USE = "HAnimSegmentLineColorRGBA";
LineSet391.color = ColorRGBA393;

Shape390.geometry = LineSet391;

HAnimSegment386.children[1] = Shape390;

HAnimJoint385.children = new MFNode();

HAnimJoint385.children[0] = HAnimSegment386;

let HAnimJoint394 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint394.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint394.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint394.center = new SFVec3f(new float[0,1,0]);
HAnimJoint394.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint394.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment395 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment395.name = "l_tarsal_middle_phalanx_5";
HAnimSegment395.DEF = "hanim_l_tarsal_middle_phalanx_5";
let Transform396 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate401.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet400.coord = Coordinate401;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
let ColorRGBA402 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA402.USE = "HAnimSegmentLineColorRGBA";
LineSet400.color = ColorRGBA402;

Shape399.geometry = LineSet400;

HAnimSegment395.children[1] = Shape399;

let HAnimSite403 = browser.currentScene.createNode("HAnimSite");
HAnimSite403.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite403.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite403.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor404 = browser.currentScene.createNode("TouchSensor");
TouchSensor404.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite403.children = new MFNode();

HAnimSite403.children[0] = TouchSensor404;

let Shape405 = browser.currentScene.createNode("Shape");
Shape405.USE = "HAnimSiteShape";
HAnimSite403.children[1] = Shape405;

HAnimSegment395.children[2] = HAnimSite403;

HAnimJoint394.children = new MFNode();

HAnimJoint394.children[0] = HAnimSegment395;

let HAnimJoint406 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint406.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint406.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint406.center = new SFVec3f(new float[0,1,0]);
HAnimJoint406.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint406.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint394.children[1] = HAnimJoint406;

HAnimJoint385.children[1] = HAnimJoint394;

HAnimJoint373.children[1] = HAnimJoint385;

HAnimJoint329.children[2] = HAnimJoint373;

HAnimJoint320.children[1] = HAnimJoint329;

HAnimJoint176.children[2] = HAnimJoint320;

HAnimJoint161.children[1] = HAnimJoint176;

HAnimJoint143.children[1] = HAnimJoint161;

HAnimJoint106.children[1] = HAnimJoint143;

let HAnimJoint407 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint407.name = "r_hip";
HAnimJoint407.DEF = "hanim_r_hip";
HAnimJoint407.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint407.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint407.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment408 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment408.name = "r_thigh";
HAnimSegment408.DEF = "hanim_r_thigh";
let Transform409 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform410 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape411 = browser.currentScene.createNode("Shape");
Shape411.USE = "HAnimJointShape";
Transform410.children = new MFNode();

Transform410.children[0] = Shape411;

Transform409.children = new MFNode();

Transform409.children[0] = Transform410;

HAnimSegment408.children = new MFNode();

HAnimSegment408.children[0] = Transform409;

let Shape412 = browser.currentScene.createNode("Shape");
let LineSet413 = browser.currentScene.createNode("LineSet");
LineSet413.vertexCount = new MFInt32(new int[2]);
let Coordinate414 = browser.currentScene.createNode("Coordinate");
Coordinate414.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet413.coord = Coordinate414;

//from r_hip to r_knee vertices 2
let ColorRGBA415 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA415.USE = "HAnimSegmentLineColorRGBA";
LineSet413.color = ColorRGBA415;

Shape412.geometry = LineSet413;

HAnimSegment408.children[1] = Shape412;

let HAnimSite416 = browser.currentScene.createNode("HAnimSite");
HAnimSite416.name = "r_lateral_malleolus_pt";
HAnimSite416.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite416.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let TouchSensor417 = browser.currentScene.createNode("TouchSensor");
TouchSensor417.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite416.children = new MFNode();

HAnimSite416.children[0] = TouchSensor417;

let Shape418 = browser.currentScene.createNode("Shape");
Shape418.USE = "HAnimSiteShape";
HAnimSite416.children[1] = Shape418;

HAnimSegment408.children[2] = HAnimSite416;

let HAnimSite419 = browser.currentScene.createNode("HAnimSite");
HAnimSite419.name = "r_medial_malleolus_pt";
HAnimSite419.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite419.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let TouchSensor420 = browser.currentScene.createNode("TouchSensor");
TouchSensor420.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite419.children = new MFNode();

HAnimSite419.children[0] = TouchSensor420;

let Shape421 = browser.currentScene.createNode("Shape");
Shape421.USE = "HAnimSiteShape";
HAnimSite419.children[1] = Shape421;

HAnimSegment408.children[3] = HAnimSite419;

let HAnimSite422 = browser.currentScene.createNode("HAnimSite");
HAnimSite422.name = "r_tibiale_pt";
HAnimSite422.DEF = "hanim_r_tibiale_pt";
HAnimSite422.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor423 = browser.currentScene.createNode("TouchSensor");
TouchSensor423.description = "HAnimSite r_tibiale_pt";
HAnimSite422.children = new MFNode();

HAnimSite422.children[0] = TouchSensor423;

let Shape424 = browser.currentScene.createNode("Shape");
Shape424.USE = "HAnimSiteShape";
HAnimSite422.children[1] = Shape424;

HAnimSegment408.children[4] = HAnimSite422;

HAnimJoint407.children = new MFNode();

HAnimJoint407.children[0] = HAnimSegment408;

let HAnimJoint425 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint425.name = "r_knee";
HAnimJoint425.DEF = "hanim_r_knee";
HAnimJoint425.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint425.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint425.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment426 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment426.name = "r_calf";
HAnimSegment426.DEF = "hanim_r_calf";
let Transform427 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform428 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape429 = browser.currentScene.createNode("Shape");
Shape429.USE = "HAnimJointShape";
Transform428.children = new MFNode();

Transform428.children[0] = Shape429;

Transform427.children = new MFNode();

Transform427.children[0] = Transform428;

HAnimSegment426.children = new MFNode();

HAnimSegment426.children[0] = Transform427;

let Shape430 = browser.currentScene.createNode("Shape");
let LineSet431 = browser.currentScene.createNode("LineSet");
LineSet431.vertexCount = new MFInt32(new int[2]);
let Coordinate432 = browser.currentScene.createNode("Coordinate");
Coordinate432.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet431.coord = Coordinate432;

//from r_knee to r_talocrural vertices 2
let ColorRGBA433 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA433.USE = "HAnimSegmentLineColorRGBA";
LineSet431.color = ColorRGBA433;

Shape430.geometry = LineSet431;

HAnimSegment426.children[1] = Shape430;

let HAnimSite434 = browser.currentScene.createNode("HAnimSite");
HAnimSite434.name = "r_calcaneus_posterior_pt";
HAnimSite434.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite434.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let TouchSensor435 = browser.currentScene.createNode("TouchSensor");
TouchSensor435.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite434.children = new MFNode();

HAnimSite434.children[0] = TouchSensor435;

let Shape436 = browser.currentScene.createNode("Shape");
Shape436.USE = "HAnimSiteShape";
HAnimSite434.children[1] = Shape436;

HAnimSegment426.children[2] = HAnimSite434;

let HAnimSite437 = browser.currentScene.createNode("HAnimSite");
HAnimSite437.name = "r_sphyrion_pt";
HAnimSite437.DEF = "hanim_r_sphyrion_pt";
HAnimSite437.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let TouchSensor438 = browser.currentScene.createNode("TouchSensor");
TouchSensor438.description = "HAnimSite r_sphyrion_pt";
HAnimSite437.children = new MFNode();

HAnimSite437.children[0] = TouchSensor438;

let Shape439 = browser.currentScene.createNode("Shape");
Shape439.USE = "HAnimSiteShape";
HAnimSite437.children[1] = Shape439;

HAnimSegment426.children[3] = HAnimSite437;

HAnimJoint425.children = new MFNode();

HAnimJoint425.children[0] = HAnimSegment426;

let HAnimJoint440 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint440.name = "r_talocrural";
HAnimJoint440.DEF = "hanim_r_talocrural";
HAnimJoint440.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint440.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint440.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment441 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment441.name = "r_talus";
HAnimSegment441.DEF = "hanim_r_talus";
let Transform442 = browser.currentScene.createNode("Transform");
Transform442.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform442.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform442.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
let Transform443 = browser.currentScene.createNode("Transform");
//Empty Transform right foot
let Shape444 = browser.currentScene.createNode("Shape");
Shape444.USE = "HAnimJointShape";
Transform443.children = new MFNode();

Transform443.children[0] = Shape444;

Transform442.children = new MFNode();

Transform442.children[0] = Transform443;

HAnimSegment441.children = new MFNode();

HAnimSegment441.children[0] = Transform442;

let Shape445 = browser.currentScene.createNode("Shape");
let LineSet446 = browser.currentScene.createNode("LineSet");
LineSet446.vertexCount = new MFInt32(new int[2]);
let Coordinate447 = browser.currentScene.createNode("Coordinate");
Coordinate447.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet446.coord = Coordinate447;

//from r_talocrural to r_talocalcaneonavicular vertices 2
let ColorRGBA448 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA448.USE = "HAnimSegmentLineColorRGBA";
LineSet446.color = ColorRGBA448;

Shape445.geometry = LineSet446;

HAnimSegment441.children[1] = Shape445;

let Shape449 = browser.currentScene.createNode("Shape");
let LineSet450 = browser.currentScene.createNode("LineSet");
LineSet450.vertexCount = new MFInt32(new int[2]);
let Coordinate451 = browser.currentScene.createNode("Coordinate");
Coordinate451.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet450.coord = Coordinate451;

//from r_talocrural to r_calcaneocuboid vertices 2
let ColorRGBA452 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSegmentLineColorRGBA";
LineSet450.color = ColorRGBA452;

Shape449.geometry = LineSet450;

HAnimSegment441.children[2] = Shape449;

HAnimJoint440.children = new MFNode();

HAnimJoint440.children[0] = HAnimSegment441;

let HAnimJoint453 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint453.name = "r_talocalcaneonavicular";
HAnimJoint453.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint453.center = new SFVec3f(new float[0,1,0]);
HAnimJoint453.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint453.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment454 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment454.name = "r_navicular";
HAnimSegment454.DEF = "hanim_r_navicular";
let Transform455 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform456 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape457 = browser.currentScene.createNode("Shape");
Shape457.USE = "HAnimJointShape";
Transform456.children = new MFNode();

Transform456.children[0] = Shape457;

Transform455.children = new MFNode();

Transform455.children[0] = Transform456;

HAnimSegment454.children = new MFNode();

HAnimSegment454.children[0] = Transform455;

let Shape458 = browser.currentScene.createNode("Shape");
let LineSet459 = browser.currentScene.createNode("LineSet");
LineSet459.vertexCount = new MFInt32(new int[2]);
let Coordinate460 = browser.currentScene.createNode("Coordinate");
Coordinate460.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet459.coord = Coordinate460;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
let ColorRGBA461 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA461.USE = "HAnimSegmentLineColorRGBA";
LineSet459.color = ColorRGBA461;

Shape458.geometry = LineSet459;

HAnimSegment454.children[1] = Shape458;

let Shape462 = browser.currentScene.createNode("Shape");
let LineSet463 = browser.currentScene.createNode("LineSet");
LineSet463.vertexCount = new MFInt32(new int[2]);
let Coordinate464 = browser.currentScene.createNode("Coordinate");
Coordinate464.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet463.coord = Coordinate464;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
let ColorRGBA465 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA465.USE = "HAnimSegmentLineColorRGBA";
LineSet463.color = ColorRGBA465;

Shape462.geometry = LineSet463;

HAnimSegment454.children[2] = Shape462;

let Shape466 = browser.currentScene.createNode("Shape");
let LineSet467 = browser.currentScene.createNode("LineSet");
LineSet467.vertexCount = new MFInt32(new int[2]);
let Coordinate468 = browser.currentScene.createNode("Coordinate");
Coordinate468.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet467.coord = Coordinate468;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
let ColorRGBA469 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA469.USE = "HAnimSegmentLineColorRGBA";
LineSet467.color = ColorRGBA469;

Shape466.geometry = LineSet467;

HAnimSegment454.children[3] = Shape466;

HAnimJoint453.children = new MFNode();

HAnimJoint453.children[0] = HAnimSegment454;

let HAnimJoint470 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint470.name = "r_cuneonavicular_1";
HAnimJoint470.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint470.center = new SFVec3f(new float[0,1,0]);
HAnimJoint470.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint470.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment471 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment471.name = "r_cuneiform_1";
HAnimSegment471.DEF = "hanim_r_cuneiform_1";
let Transform472 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform473 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape474 = browser.currentScene.createNode("Shape");
Shape474.USE = "HAnimJointShape";
Transform473.children = new MFNode();

Transform473.children[0] = Shape474;

Transform472.children = new MFNode();

Transform472.children[0] = Transform473;

HAnimSegment471.children = new MFNode();

HAnimSegment471.children[0] = Transform472;

let Shape475 = browser.currentScene.createNode("Shape");
let LineSet476 = browser.currentScene.createNode("LineSet");
LineSet476.vertexCount = new MFInt32(new int[2]);
let Coordinate477 = browser.currentScene.createNode("Coordinate");
Coordinate477.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet476.coord = Coordinate477;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
let ColorRGBA478 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA478.USE = "HAnimSegmentLineColorRGBA";
LineSet476.color = ColorRGBA478;

Shape475.geometry = LineSet476;

HAnimSegment471.children[1] = Shape475;

HAnimJoint470.children = new MFNode();

HAnimJoint470.children[0] = HAnimSegment471;

let HAnimJoint479 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint479.name = "r_tarsometatarsal_1";
HAnimJoint479.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint479.center = new SFVec3f(new float[0,1,0]);
HAnimJoint479.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint479.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment480 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment480.name = "r_metatarsal_1";
HAnimSegment480.DEF = "hanim_r_metatarsal_1";
let Transform481 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform482 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape483 = browser.currentScene.createNode("Shape");
Shape483.USE = "HAnimJointShape";
Transform482.children = new MFNode();

Transform482.children[0] = Shape483;

Transform481.children = new MFNode();

Transform481.children[0] = Transform482;

HAnimSegment480.children = new MFNode();

HAnimSegment480.children[0] = Transform481;

let Shape484 = browser.currentScene.createNode("Shape");
let LineSet485 = browser.currentScene.createNode("LineSet");
LineSet485.vertexCount = new MFInt32(new int[2]);
let Coordinate486 = browser.currentScene.createNode("Coordinate");
Coordinate486.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet485.coord = Coordinate486;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
let ColorRGBA487 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA487.USE = "HAnimSegmentLineColorRGBA";
LineSet485.color = ColorRGBA487;

Shape484.geometry = LineSet485;

HAnimSegment480.children[1] = Shape484;

let HAnimSite488 = browser.currentScene.createNode("HAnimSite");
HAnimSite488.name = "r_metatarsal_phalanx_1_pt";
HAnimSite488.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite488.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor489 = browser.currentScene.createNode("TouchSensor");
TouchSensor489.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite488.children = new MFNode();

HAnimSite488.children[0] = TouchSensor489;

let Shape490 = browser.currentScene.createNode("Shape");
Shape490.USE = "HAnimSiteShape";
HAnimSite488.children[1] = Shape490;

HAnimSegment480.children[2] = HAnimSite488;

HAnimJoint479.children = new MFNode();

HAnimJoint479.children[0] = HAnimSegment480;

let HAnimJoint491 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint491.name = "r_metatarsophalangeal_1";
HAnimJoint491.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint491.center = new SFVec3f(new float[0,1,0]);
HAnimJoint491.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint491.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment492 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment492.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment492.DEF = "hanim_r_tarsal_proximal_phalanx_1";
let Transform493 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform494 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape495 = browser.currentScene.createNode("Shape");
Shape495.USE = "HAnimJointShape";
Transform494.children = new MFNode();

Transform494.children[0] = Shape495;

Transform493.children = new MFNode();

Transform493.children[0] = Transform494;

HAnimSegment492.children = new MFNode();

HAnimSegment492.children[0] = Transform493;

let Shape496 = browser.currentScene.createNode("Shape");
let LineSet497 = browser.currentScene.createNode("LineSet");
LineSet497.vertexCount = new MFInt32(new int[2]);
let Coordinate498 = browser.currentScene.createNode("Coordinate");
Coordinate498.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet497.coord = Coordinate498;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
let ColorRGBA499 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA499.USE = "HAnimSegmentLineColorRGBA";
LineSet497.color = ColorRGBA499;

Shape496.geometry = LineSet497;

HAnimSegment492.children[1] = Shape496;

let HAnimSite500 = browser.currentScene.createNode("HAnimSite");
HAnimSite500.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite500.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite500.translation = new SFVec3f(new float[0.1,-1.05,0]);
let TouchSensor501 = browser.currentScene.createNode("TouchSensor");
TouchSensor501.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite500.children = new MFNode();

HAnimSite500.children[0] = TouchSensor501;

let Shape502 = browser.currentScene.createNode("Shape");
Shape502.USE = "HAnimSiteShape";
HAnimSite500.children[1] = Shape502;

HAnimSegment492.children[2] = HAnimSite500;

HAnimJoint491.children = new MFNode();

HAnimJoint491.children[0] = HAnimSegment492;

let HAnimJoint503 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint503.name = "r_tarsal_interphalangeal_1";
HAnimJoint503.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint503.center = new SFVec3f(new float[0,1,0]);
HAnimJoint503.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint503.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint491.children[1] = HAnimJoint503;

HAnimJoint479.children[1] = HAnimJoint491;

HAnimJoint470.children[1] = HAnimJoint479;

HAnimJoint453.children[1] = HAnimJoint470;

let HAnimJoint504 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint504.name = "r_cuneonavicular_2";
HAnimJoint504.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint504.center = new SFVec3f(new float[0,1,0]);
HAnimJoint504.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint504.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment505 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment505.name = "r_cuneiform_2";
HAnimSegment505.DEF = "hanim_r_cuneiform_2";
let Transform506 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform507 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape508 = browser.currentScene.createNode("Shape");
Shape508.USE = "HAnimJointShape";
Transform507.children = new MFNode();

Transform507.children[0] = Shape508;

Transform506.children = new MFNode();

Transform506.children[0] = Transform507;

HAnimSegment505.children = new MFNode();

HAnimSegment505.children[0] = Transform506;

let Shape509 = browser.currentScene.createNode("Shape");
let LineSet510 = browser.currentScene.createNode("LineSet");
LineSet510.vertexCount = new MFInt32(new int[2]);
let Coordinate511 = browser.currentScene.createNode("Coordinate");
Coordinate511.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet510.coord = Coordinate511;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
let ColorRGBA512 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA512.USE = "HAnimSegmentLineColorRGBA";
LineSet510.color = ColorRGBA512;

Shape509.geometry = LineSet510;

HAnimSegment505.children[1] = Shape509;

HAnimJoint504.children = new MFNode();

HAnimJoint504.children[0] = HAnimSegment505;

let HAnimJoint513 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint513.name = "r_tarsometatarsal_2";
HAnimJoint513.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint513.center = new SFVec3f(new float[0,1,0]);
HAnimJoint513.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint513.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment514 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment514.name = "r_metatarsal_2";
HAnimSegment514.DEF = "hanim_r_metatarsal_2";
let Transform515 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform516 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape517 = browser.currentScene.createNode("Shape");
Shape517.USE = "HAnimJointShape";
Transform516.children = new MFNode();

Transform516.children[0] = Shape517;

Transform515.children = new MFNode();

Transform515.children[0] = Transform516;

HAnimSegment514.children = new MFNode();

HAnimSegment514.children[0] = Transform515;

let Shape518 = browser.currentScene.createNode("Shape");
let LineSet519 = browser.currentScene.createNode("LineSet");
LineSet519.vertexCount = new MFInt32(new int[2]);
let Coordinate520 = browser.currentScene.createNode("Coordinate");
Coordinate520.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet519.coord = Coordinate520;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
let ColorRGBA521 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSegmentLineColorRGBA";
LineSet519.color = ColorRGBA521;

Shape518.geometry = LineSet519;

HAnimSegment514.children[1] = Shape518;

HAnimJoint513.children = new MFNode();

HAnimJoint513.children[0] = HAnimSegment514;

let HAnimJoint522 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint522.name = "r_metatarsophalangeal_2";
HAnimJoint522.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint522.center = new SFVec3f(new float[0,1,0]);
HAnimJoint522.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint522.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment523 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment523.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment523.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Transform524 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform525 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape526 = browser.currentScene.createNode("Shape");
Shape526.USE = "HAnimJointShape";
Transform525.children = new MFNode();

Transform525.children[0] = Shape526;

Transform524.children = new MFNode();

Transform524.children[0] = Transform525;

HAnimSegment523.children = new MFNode();

HAnimSegment523.children[0] = Transform524;

let Shape527 = browser.currentScene.createNode("Shape");
let LineSet528 = browser.currentScene.createNode("LineSet");
LineSet528.vertexCount = new MFInt32(new int[2]);
let Coordinate529 = browser.currentScene.createNode("Coordinate");
Coordinate529.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet528.coord = Coordinate529;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
let ColorRGBA530 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA530.USE = "HAnimSegmentLineColorRGBA";
LineSet528.color = ColorRGBA530;

Shape527.geometry = LineSet528;

HAnimSegment523.children[1] = Shape527;

HAnimJoint522.children = new MFNode();

HAnimJoint522.children[0] = HAnimSegment523;

let HAnimJoint531 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint531.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint531.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint531.center = new SFVec3f(new float[0,1,0]);
HAnimJoint531.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint531.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment532 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment532.name = "r_tarsal_middle_phalanx_2";
HAnimSegment532.DEF = "hanim_r_tarsal_middle_phalanx_2";
let Transform533 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform534 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape535 = browser.currentScene.createNode("Shape");
Shape535.USE = "HAnimJointShape";
Transform534.children = new MFNode();

Transform534.children[0] = Shape535;

Transform533.children = new MFNode();

Transform533.children[0] = Transform534;

HAnimSegment532.children = new MFNode();

HAnimSegment532.children[0] = Transform533;

let Shape536 = browser.currentScene.createNode("Shape");
let LineSet537 = browser.currentScene.createNode("LineSet");
LineSet537.vertexCount = new MFInt32(new int[2]);
let Coordinate538 = browser.currentScene.createNode("Coordinate");
Coordinate538.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet537.coord = Coordinate538;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
let ColorRGBA539 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA539.USE = "HAnimSegmentLineColorRGBA";
LineSet537.color = ColorRGBA539;

Shape536.geometry = LineSet537;

HAnimSegment532.children[1] = Shape536;

let HAnimSite540 = browser.currentScene.createNode("HAnimSite");
HAnimSite540.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite540.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite540.translation = new SFVec3f(new float[-0.05,-1.12,0]);
let TouchSensor541 = browser.currentScene.createNode("TouchSensor");
TouchSensor541.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite540.children = new MFNode();

HAnimSite540.children[0] = TouchSensor541;

let Shape542 = browser.currentScene.createNode("Shape");
Shape542.USE = "HAnimSiteShape";
HAnimSite540.children[1] = Shape542;

HAnimSegment532.children[2] = HAnimSite540;

HAnimJoint531.children = new MFNode();

HAnimJoint531.children[0] = HAnimSegment532;

let HAnimJoint543 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint543.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint543.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint543.center = new SFVec3f(new float[0,1,0]);
HAnimJoint543.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint543.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint531.children[1] = HAnimJoint543;

HAnimJoint522.children[1] = HAnimJoint531;

HAnimJoint513.children[1] = HAnimJoint522;

HAnimJoint504.children[1] = HAnimJoint513;

HAnimJoint453.children[2] = HAnimJoint504;

let HAnimJoint544 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint544.name = "r_cuneonavicular_3";
HAnimJoint544.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint544.center = new SFVec3f(new float[0,1,0]);
HAnimJoint544.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint544.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment545 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment545.name = "r_cuneiform_3";
HAnimSegment545.DEF = "hanim_r_cuneiform_3";
let Transform546 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform547 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape548 = browser.currentScene.createNode("Shape");
Shape548.USE = "HAnimJointShape";
Transform547.children = new MFNode();

Transform547.children[0] = Shape548;

Transform546.children = new MFNode();

Transform546.children[0] = Transform547;

HAnimSegment545.children = new MFNode();

HAnimSegment545.children[0] = Transform546;

let Shape549 = browser.currentScene.createNode("Shape");
let LineSet550 = browser.currentScene.createNode("LineSet");
LineSet550.vertexCount = new MFInt32(new int[2]);
let Coordinate551 = browser.currentScene.createNode("Coordinate");
Coordinate551.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet550.coord = Coordinate551;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
let ColorRGBA552 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA552.USE = "HAnimSegmentLineColorRGBA";
LineSet550.color = ColorRGBA552;

Shape549.geometry = LineSet550;

HAnimSegment545.children[1] = Shape549;

HAnimJoint544.children = new MFNode();

HAnimJoint544.children[0] = HAnimSegment545;

let HAnimJoint553 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint553.name = "r_tarsometatarsal_3";
HAnimJoint553.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint553.center = new SFVec3f(new float[0,1,0]);
HAnimJoint553.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint553.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment554 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment554.name = "r_metatarsal_3";
HAnimSegment554.DEF = "hanim_r_metatarsal_3";
let Transform555 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate560.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet559.coord = Coordinate560;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
let ColorRGBA561 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA561.USE = "HAnimSegmentLineColorRGBA";
LineSet559.color = ColorRGBA561;

Shape558.geometry = LineSet559;

HAnimSegment554.children[1] = Shape558;

HAnimJoint553.children = new MFNode();

HAnimJoint553.children[0] = HAnimSegment554;

let HAnimJoint562 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint562.name = "r_metatarsophalangeal_3";
HAnimJoint562.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint562.center = new SFVec3f(new float[0,1,0]);
HAnimJoint562.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint562.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment563 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment563.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment563.DEF = "hanim_r_tarsal_proximal_phalanx_3";
let Transform564 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate569.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet568.coord = Coordinate569;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
let ColorRGBA570 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA570.USE = "HAnimSegmentLineColorRGBA";
LineSet568.color = ColorRGBA570;

Shape567.geometry = LineSet568;

HAnimSegment563.children[1] = Shape567;

HAnimJoint562.children = new MFNode();

HAnimJoint562.children[0] = HAnimSegment563;

let HAnimJoint571 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint571.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint571.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint571.center = new SFVec3f(new float[0,1,0]);
HAnimJoint571.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint571.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment572 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment572.name = "r_tarsal_middle_phalanx_3";
HAnimSegment572.DEF = "hanim_r_tarsal_middle_phalanx_3";
let Transform573 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform574 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape575 = browser.currentScene.createNode("Shape");
Shape575.USE = "HAnimJointShape";
Transform574.children = new MFNode();

Transform574.children[0] = Shape575;

Transform573.children = new MFNode();

Transform573.children[0] = Transform574;

HAnimSegment572.children = new MFNode();

HAnimSegment572.children[0] = Transform573;

let Shape576 = browser.currentScene.createNode("Shape");
let LineSet577 = browser.currentScene.createNode("LineSet");
LineSet577.vertexCount = new MFInt32(new int[2]);
let Coordinate578 = browser.currentScene.createNode("Coordinate");
Coordinate578.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet577.coord = Coordinate578;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
let ColorRGBA579 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA579.USE = "HAnimSegmentLineColorRGBA";
LineSet577.color = ColorRGBA579;

Shape576.geometry = LineSet577;

HAnimSegment572.children[1] = Shape576;

let HAnimSite580 = browser.currentScene.createNode("HAnimSite");
HAnimSite580.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite580.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite580.translation = new SFVec3f(new float[-0.15,-1.13,0]);
let TouchSensor581 = browser.currentScene.createNode("TouchSensor");
TouchSensor581.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite580.children = new MFNode();

HAnimSite580.children[0] = TouchSensor581;

let Shape582 = browser.currentScene.createNode("Shape");
Shape582.USE = "HAnimSiteShape";
HAnimSite580.children[1] = Shape582;

HAnimSegment572.children[2] = HAnimSite580;

HAnimJoint571.children = new MFNode();

HAnimJoint571.children[0] = HAnimSegment572;

let HAnimJoint583 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint583.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint583.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint583.center = new SFVec3f(new float[0,1,0]);
HAnimJoint583.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint583.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint571.children[1] = HAnimJoint583;

HAnimJoint562.children[1] = HAnimJoint571;

HAnimJoint553.children[1] = HAnimJoint562;

HAnimJoint544.children[1] = HAnimJoint553;

HAnimJoint453.children[3] = HAnimJoint544;

HAnimJoint440.children[1] = HAnimJoint453;

let HAnimJoint584 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint584.name = "r_calcaneocuboid";
HAnimJoint584.DEF = "hanim_r_calcaneocuboid";
HAnimJoint584.center = new SFVec3f(new float[0,1,0]);
HAnimJoint584.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint584.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment585 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment585.name = "r_calcaneus";
HAnimSegment585.DEF = "hanim_r_calcaneus";
let Transform586 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate591.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet590.coord = Coordinate591;

//from r_calcaneocuboid to r_transversetarsal vertices 2
let ColorRGBA592 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA";
LineSet590.color = ColorRGBA592;

Shape589.geometry = LineSet590;

HAnimSegment585.children[1] = Shape589;

HAnimJoint584.children = new MFNode();

HAnimJoint584.children[0] = HAnimSegment585;

let HAnimJoint593 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint593.name = "r_transversetarsal";
HAnimJoint593.DEF = "hanim_r_transversetarsal";
HAnimJoint593.center = new SFVec3f(new float[0,1,0]);
HAnimJoint593.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint593.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment594 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment594.name = "r_cuboid";
HAnimSegment594.DEF = "hanim_r_cuboid";
let Transform595 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate600.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet599.coord = Coordinate600;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
let ColorRGBA601 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA601.USE = "HAnimSegmentLineColorRGBA";
LineSet599.color = ColorRGBA601;

Shape598.geometry = LineSet599;

HAnimSegment594.children[1] = Shape598;

let Shape602 = browser.currentScene.createNode("Shape");
let LineSet603 = browser.currentScene.createNode("LineSet");
LineSet603.vertexCount = new MFInt32(new int[2]);
let Coordinate604 = browser.currentScene.createNode("Coordinate");
Coordinate604.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet603.coord = Coordinate604;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
let ColorRGBA605 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA";
LineSet603.color = ColorRGBA605;

Shape602.geometry = LineSet603;

HAnimSegment594.children[2] = Shape602;

HAnimJoint593.children = new MFNode();

HAnimJoint593.children[0] = HAnimSegment594;

let HAnimJoint606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint606.name = "r_tarsometatarsal_4";
HAnimJoint606.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint606.center = new SFVec3f(new float[0,1,0]);
HAnimJoint606.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint606.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment607 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment607.name = "r_metatarsal_4";
HAnimSegment607.DEF = "hanim_r_metatarsal_4";
let Transform608 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform609 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape610 = browser.currentScene.createNode("Shape");
Shape610.USE = "HAnimJointShape";
Transform609.children = new MFNode();

Transform609.children[0] = Shape610;

Transform608.children = new MFNode();

Transform608.children[0] = Transform609;

HAnimSegment607.children = new MFNode();

HAnimSegment607.children[0] = Transform608;

let Shape611 = browser.currentScene.createNode("Shape");
let LineSet612 = browser.currentScene.createNode("LineSet");
LineSet612.vertexCount = new MFInt32(new int[2]);
let Coordinate613 = browser.currentScene.createNode("Coordinate");
Coordinate613.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet612.coord = Coordinate613;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
let ColorRGBA614 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA";
LineSet612.color = ColorRGBA614;

Shape611.geometry = LineSet612;

HAnimSegment607.children[1] = Shape611;

HAnimJoint606.children = new MFNode();

HAnimJoint606.children[0] = HAnimSegment607;

let HAnimJoint615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint615.name = "r_metatarsophalangeal_4";
HAnimJoint615.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint615.center = new SFVec3f(new float[0,1,0]);
HAnimJoint615.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint615.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment616 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment616.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment616.DEF = "hanim_r_tarsal_proximal_phalanx_4";
let Transform617 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate622.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet621.coord = Coordinate622;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
let ColorRGBA623 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA623.USE = "HAnimSegmentLineColorRGBA";
LineSet621.color = ColorRGBA623;

Shape620.geometry = LineSet621;

HAnimSegment616.children[1] = Shape620;

HAnimJoint615.children = new MFNode();

HAnimJoint615.children[0] = HAnimSegment616;

let HAnimJoint624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint624.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint624.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint624.center = new SFVec3f(new float[0,1,0]);
HAnimJoint624.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint624.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment625 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment625.name = "r_tarsal_middle_phalanx_4";
HAnimSegment625.DEF = "hanim_r_tarsal_middle_phalanx_4";
let Transform626 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate631.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet630.coord = Coordinate631;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
let ColorRGBA632 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA632.USE = "HAnimSegmentLineColorRGBA";
LineSet630.color = ColorRGBA632;

Shape629.geometry = LineSet630;

HAnimSegment625.children[1] = Shape629;

let HAnimSite633 = browser.currentScene.createNode("HAnimSite");
HAnimSite633.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite633.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite633.translation = new SFVec3f(new float[-0.25,-1.1,0]);
let TouchSensor634 = browser.currentScene.createNode("TouchSensor");
TouchSensor634.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite633.children = new MFNode();

HAnimSite633.children[0] = TouchSensor634;

let Shape635 = browser.currentScene.createNode("Shape");
Shape635.USE = "HAnimSiteShape";
HAnimSite633.children[1] = Shape635;

HAnimSegment625.children[2] = HAnimSite633;

HAnimJoint624.children = new MFNode();

HAnimJoint624.children[0] = HAnimSegment625;

let HAnimJoint636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint636.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint636.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint636.center = new SFVec3f(new float[0,1,0]);
HAnimJoint636.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint636.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint624.children[1] = HAnimJoint636;

HAnimJoint615.children[1] = HAnimJoint624;

HAnimJoint606.children[1] = HAnimJoint615;

HAnimJoint593.children[1] = HAnimJoint606;

let HAnimJoint637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint637.name = "r_tarsometatarsal_5";
HAnimJoint637.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint637.center = new SFVec3f(new float[0,1,0]);
HAnimJoint637.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint637.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment638 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment638.name = "r_metatarsal_5";
HAnimSegment638.DEF = "hanim_r_metatarsal_5";
let Transform639 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform640 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape641 = browser.currentScene.createNode("Shape");
Shape641.USE = "HAnimJointShape";
Transform640.children = new MFNode();

Transform640.children[0] = Shape641;

Transform639.children = new MFNode();

Transform639.children[0] = Transform640;

HAnimSegment638.children = new MFNode();

HAnimSegment638.children[0] = Transform639;

let Shape642 = browser.currentScene.createNode("Shape");
let LineSet643 = browser.currentScene.createNode("LineSet");
LineSet643.vertexCount = new MFInt32(new int[2]);
let Coordinate644 = browser.currentScene.createNode("Coordinate");
Coordinate644.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet643.coord = Coordinate644;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
let ColorRGBA645 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA645.USE = "HAnimSegmentLineColorRGBA";
LineSet643.color = ColorRGBA645;

Shape642.geometry = LineSet643;

HAnimSegment638.children[1] = Shape642;

let HAnimSite646 = browser.currentScene.createNode("HAnimSite");
HAnimSite646.name = "r_metatarsal_phalanx_5_pt";
HAnimSite646.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite646.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor647 = browser.currentScene.createNode("TouchSensor");
TouchSensor647.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite646.children = new MFNode();

HAnimSite646.children[0] = TouchSensor647;

let Shape648 = browser.currentScene.createNode("Shape");
Shape648.USE = "HAnimSiteShape";
HAnimSite646.children[1] = Shape648;

HAnimSegment638.children[2] = HAnimSite646;

HAnimJoint637.children = new MFNode();

HAnimJoint637.children[0] = HAnimSegment638;

let HAnimJoint649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint649.name = "r_metatarsophalangeal_5";
HAnimJoint649.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint649.center = new SFVec3f(new float[0,1,0]);
HAnimJoint649.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint649.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment650 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment650.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment650.DEF = "hanim_r_tarsal_proximal_phalanx_5";
let Transform651 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform652 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape653 = browser.currentScene.createNode("Shape");
Shape653.USE = "HAnimJointShape";
Transform652.children = new MFNode();

Transform652.children[0] = Shape653;

Transform651.children = new MFNode();

Transform651.children[0] = Transform652;

HAnimSegment650.children = new MFNode();

HAnimSegment650.children[0] = Transform651;

let Shape654 = browser.currentScene.createNode("Shape");
let LineSet655 = browser.currentScene.createNode("LineSet");
LineSet655.vertexCount = new MFInt32(new int[2]);
let Coordinate656 = browser.currentScene.createNode("Coordinate");
Coordinate656.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet655.coord = Coordinate656;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
let ColorRGBA657 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
LineSet655.color = ColorRGBA657;

Shape654.geometry = LineSet655;

HAnimSegment650.children[1] = Shape654;

HAnimJoint649.children = new MFNode();

HAnimJoint649.children[0] = HAnimSegment650;

let HAnimJoint658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint658.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint658.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint658.center = new SFVec3f(new float[0,1,0]);
HAnimJoint658.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment659 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment659.name = "r_tarsal_middle_phalanx_5";
HAnimSegment659.DEF = "hanim_r_tarsal_middle_phalanx_5";
let Transform660 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform661 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape662 = browser.currentScene.createNode("Shape");
Shape662.USE = "HAnimJointShape";
Transform661.children = new MFNode();

Transform661.children[0] = Shape662;

Transform660.children = new MFNode();

Transform660.children[0] = Transform661;

HAnimSegment659.children = new MFNode();

HAnimSegment659.children[0] = Transform660;

let Shape663 = browser.currentScene.createNode("Shape");
let LineSet664 = browser.currentScene.createNode("LineSet");
LineSet664.vertexCount = new MFInt32(new int[2]);
let Coordinate665 = browser.currentScene.createNode("Coordinate");
Coordinate665.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet664.coord = Coordinate665;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
let ColorRGBA666 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA";
LineSet664.color = ColorRGBA666;

Shape663.geometry = LineSet664;

HAnimSegment659.children[1] = Shape663;

let HAnimSite667 = browser.currentScene.createNode("HAnimSite");
HAnimSite667.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite667.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite667.translation = new SFVec3f(new float[-0.34,-1.05,0]);
let TouchSensor668 = browser.currentScene.createNode("TouchSensor");
TouchSensor668.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite667.children = new MFNode();

HAnimSite667.children[0] = TouchSensor668;

let Shape669 = browser.currentScene.createNode("Shape");
Shape669.USE = "HAnimSiteShape";
HAnimSite667.children[1] = Shape669;

HAnimSegment659.children[2] = HAnimSite667;

HAnimJoint658.children = new MFNode();

HAnimJoint658.children[0] = HAnimSegment659;

let HAnimJoint670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint670.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint670.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint670.center = new SFVec3f(new float[0,1,0]);
HAnimJoint670.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint670.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.children[1] = HAnimJoint670;

HAnimJoint649.children[1] = HAnimJoint658;

HAnimJoint637.children[1] = HAnimJoint649;

HAnimJoint593.children[2] = HAnimJoint637;

HAnimJoint584.children[1] = HAnimJoint593;

HAnimJoint440.children[2] = HAnimJoint584;

HAnimJoint425.children[1] = HAnimJoint440;

HAnimJoint407.children[1] = HAnimJoint425;

HAnimJoint106.children[2] = HAnimJoint407;

HAnimJoint52.children[1] = HAnimJoint106;

let HAnimJoint671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint671.name = "vl5";
HAnimJoint671.DEF = "hanim_vl5";
HAnimJoint671.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint671.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint671.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment672 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment672.name = "l5";
HAnimSegment672.DEF = "hanim_l5";
let Transform673 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform674 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape675 = browser.currentScene.createNode("Shape");
Shape675.USE = "HAnimJointShape";
Transform674.children = new MFNode();

Transform674.children[0] = Shape675;

Transform673.children = new MFNode();

Transform673.children[0] = Transform674;

HAnimSegment672.children = new MFNode();

HAnimSegment672.children[0] = Transform673;

let Shape676 = browser.currentScene.createNode("Shape");
let LineSet677 = browser.currentScene.createNode("LineSet");
LineSet677.vertexCount = new MFInt32(new int[2]);
let Coordinate678 = browser.currentScene.createNode("Coordinate");
Coordinate678.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet677.coord = Coordinate678;

//from vl5 to vl4 vertices 2
let ColorRGBA679 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA679.USE = "HAnimSegmentLineColorRGBA";
LineSet677.color = ColorRGBA679;

Shape676.geometry = LineSet677;

HAnimSegment672.children[1] = Shape676;

HAnimJoint671.children = new MFNode();

HAnimJoint671.children[0] = HAnimSegment672;

let HAnimJoint680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint680.name = "vl4";
HAnimJoint680.DEF = "hanim_vl4";
HAnimJoint680.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint680.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint680.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment681 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment681.name = "l4";
HAnimSegment681.DEF = "hanim_l4";
let Transform682 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate687.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet686.coord = Coordinate687;

//from vl4 to vl3 vertices 2
let ColorRGBA688 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA688.USE = "HAnimSegmentLineColorRGBA";
LineSet686.color = ColorRGBA688;

Shape685.geometry = LineSet686;

HAnimSegment681.children[1] = Shape685;

HAnimJoint680.children = new MFNode();

HAnimJoint680.children[0] = HAnimSegment681;

let HAnimJoint689 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint689.name = "vl3";
HAnimJoint689.DEF = "hanim_vl3";
HAnimJoint689.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint689.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint689.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment690 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment690.name = "l3";
HAnimSegment690.DEF = "hanim_l3";
let Transform691 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform692 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape693 = browser.currentScene.createNode("Shape");
Shape693.USE = "HAnimJointShape";
Transform692.children = new MFNode();

Transform692.children[0] = Shape693;

Transform691.children = new MFNode();

Transform691.children[0] = Transform692;

HAnimSegment690.children = new MFNode();

HAnimSegment690.children[0] = Transform691;

let Shape694 = browser.currentScene.createNode("Shape");
let LineSet695 = browser.currentScene.createNode("LineSet");
LineSet695.vertexCount = new MFInt32(new int[2]);
let Coordinate696 = browser.currentScene.createNode("Coordinate");
Coordinate696.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet695.coord = Coordinate696;

//from vl3 to vl2 vertices 2
let ColorRGBA697 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA697.USE = "HAnimSegmentLineColorRGBA";
LineSet695.color = ColorRGBA697;

Shape694.geometry = LineSet695;

HAnimSegment690.children[1] = Shape694;

let HAnimSite698 = browser.currentScene.createNode("HAnimSite");
HAnimSite698.name = "l_rib10_pt";
HAnimSite698.DEF = "hanim_l_rib10_pt";
HAnimSite698.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let TouchSensor699 = browser.currentScene.createNode("TouchSensor");
TouchSensor699.description = "HAnimSite l_rib10_pt";
HAnimSite698.children = new MFNode();

HAnimSite698.children[0] = TouchSensor699;

let Shape700 = browser.currentScene.createNode("Shape");
Shape700.USE = "HAnimSiteShape";
HAnimSite698.children[1] = Shape700;

HAnimSegment690.children[2] = HAnimSite698;

let HAnimSite701 = browser.currentScene.createNode("HAnimSite");
HAnimSite701.name = "r_rib10_pt";
HAnimSite701.DEF = "hanim_r_rib10_pt";
HAnimSite701.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let TouchSensor702 = browser.currentScene.createNode("TouchSensor");
TouchSensor702.description = "HAnimSite r_rib10_pt";
HAnimSite701.children = new MFNode();

HAnimSite701.children[0] = TouchSensor702;

let Shape703 = browser.currentScene.createNode("Shape");
Shape703.USE = "HAnimSiteShape";
HAnimSite701.children[1] = Shape703;

HAnimSegment690.children[3] = HAnimSite701;

let HAnimSite704 = browser.currentScene.createNode("HAnimSite");
HAnimSite704.name = "spine_2_middle_back_pt";
HAnimSite704.DEF = "hanim_spine_2_middle_back_pt";
HAnimSite704.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor705 = browser.currentScene.createNode("TouchSensor");
TouchSensor705.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite704.children = new MFNode();

HAnimSite704.children[0] = TouchSensor705;

let Shape706 = browser.currentScene.createNode("Shape");
Shape706.USE = "HAnimSiteShape";
HAnimSite704.children[1] = Shape706;

HAnimSegment690.children[4] = HAnimSite704;

HAnimJoint689.children = new MFNode();

HAnimJoint689.children[0] = HAnimSegment690;

let HAnimJoint707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint707.name = "vl2";
HAnimJoint707.DEF = "hanim_vl2";
HAnimJoint707.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint707.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint707.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment708 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment708.name = "l2";
HAnimSegment708.DEF = "hanim_l2";
let Transform709 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform710 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape711 = browser.currentScene.createNode("Shape");
Shape711.USE = "HAnimJointShape";
Transform710.children = new MFNode();

Transform710.children[0] = Shape711;

Transform709.children = new MFNode();

Transform709.children[0] = Transform710;

HAnimSegment708.children = new MFNode();

HAnimSegment708.children[0] = Transform709;

let Shape712 = browser.currentScene.createNode("Shape");
let LineSet713 = browser.currentScene.createNode("LineSet");
LineSet713.vertexCount = new MFInt32(new int[2]);
let Coordinate714 = browser.currentScene.createNode("Coordinate");
Coordinate714.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet713.coord = Coordinate714;

//from vl2 to vl1 vertices 2
let ColorRGBA715 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
LineSet713.color = ColorRGBA715;

Shape712.geometry = LineSet713;

HAnimSegment708.children[1] = Shape712;

HAnimJoint707.children = new MFNode();

HAnimJoint707.children[0] = HAnimSegment708;

let HAnimJoint716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint716.name = "vl1";
HAnimJoint716.DEF = "hanim_vl1";
HAnimJoint716.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint716.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint716.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment717 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment717.name = "l1";
HAnimSegment717.DEF = "hanim_l1";
let Transform718 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform719 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape720 = browser.currentScene.createNode("Shape");
Shape720.USE = "HAnimJointShape";
Transform719.children = new MFNode();

Transform719.children[0] = Shape720;

Transform718.children = new MFNode();

Transform718.children[0] = Transform719;

HAnimSegment717.children = new MFNode();

HAnimSegment717.children[0] = Transform718;

let Shape721 = browser.currentScene.createNode("Shape");
let LineSet722 = browser.currentScene.createNode("LineSet");
LineSet722.vertexCount = new MFInt32(new int[2]);
let Coordinate723 = browser.currentScene.createNode("Coordinate");
Coordinate723.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet722.coord = Coordinate723;

//from vl1 to vt12 vertices 2
let ColorRGBA724 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA724;

Shape721.geometry = LineSet722;

HAnimSegment717.children[1] = Shape721;

HAnimJoint716.children = new MFNode();

HAnimJoint716.children[0] = HAnimSegment717;

let HAnimJoint725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint725.name = "vt12";
HAnimJoint725.DEF = "hanim_vt12";
HAnimJoint725.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint725.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint725.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment726 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment726.name = "t12";
HAnimSegment726.DEF = "hanim_t12";
let Transform727 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform728 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape729 = browser.currentScene.createNode("Shape");
Shape729.USE = "HAnimJointShape";
Transform728.children = new MFNode();

Transform728.children[0] = Shape729;

Transform727.children = new MFNode();

Transform727.children[0] = Transform728;

HAnimSegment726.children = new MFNode();

HAnimSegment726.children[0] = Transform727;

let Shape730 = browser.currentScene.createNode("Shape");
let LineSet731 = browser.currentScene.createNode("LineSet");
LineSet731.vertexCount = new MFInt32(new int[2]);
let Coordinate732 = browser.currentScene.createNode("Coordinate");
Coordinate732.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet731.coord = Coordinate732;

//from vt12 to vt11 vertices 2
let ColorRGBA733 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA";
LineSet731.color = ColorRGBA733;

Shape730.geometry = LineSet731;

HAnimSegment726.children[1] = Shape730;

HAnimJoint725.children = new MFNode();

HAnimJoint725.children[0] = HAnimSegment726;

let HAnimJoint734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint734.name = "vt11";
HAnimJoint734.DEF = "hanim_vt11";
HAnimJoint734.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint734.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint734.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment735 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment735.name = "t11";
HAnimSegment735.DEF = "hanim_t11";
let Transform736 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform737 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate741.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet740.coord = Coordinate741;

//from vt11 to vt10 vertices 2
let ColorRGBA742 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA742.USE = "HAnimSegmentLineColorRGBA";
LineSet740.color = ColorRGBA742;

Shape739.geometry = LineSet740;

HAnimSegment735.children[1] = Shape739;

let HAnimSite743 = browser.currentScene.createNode("HAnimSite");
HAnimSite743.name = "substernale_pt";
HAnimSite743.DEF = "hanim_substernale_pt";
HAnimSite743.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor744 = browser.currentScene.createNode("TouchSensor");
TouchSensor744.description = "HAnimSite substernale_pt";
HAnimSite743.children = new MFNode();

HAnimSite743.children[0] = TouchSensor744;

let Shape745 = browser.currentScene.createNode("Shape");
Shape745.USE = "HAnimSiteShape";
HAnimSite743.children[1] = Shape745;

HAnimSegment735.children[2] = HAnimSite743;

HAnimJoint734.children = new MFNode();

HAnimJoint734.children[0] = HAnimSegment735;

let HAnimJoint746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint746.name = "vt10";
HAnimJoint746.DEF = "hanim_vt10";
HAnimJoint746.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint746.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint746.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment747 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment747.name = "t10";
HAnimSegment747.DEF = "hanim_t10";
let Transform748 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform749 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape750 = browser.currentScene.createNode("Shape");
Shape750.USE = "HAnimJointShape";
Transform749.children = new MFNode();

Transform749.children[0] = Shape750;

Transform748.children = new MFNode();

Transform748.children[0] = Transform749;

HAnimSegment747.children = new MFNode();

HAnimSegment747.children[0] = Transform748;

let Shape751 = browser.currentScene.createNode("Shape");
let LineSet752 = browser.currentScene.createNode("LineSet");
LineSet752.vertexCount = new MFInt32(new int[2]);
let Coordinate753 = browser.currentScene.createNode("Coordinate");
Coordinate753.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet752.coord = Coordinate753;

//from vt10 to vt9 vertices 2
let ColorRGBA754 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA754.USE = "HAnimSegmentLineColorRGBA";
LineSet752.color = ColorRGBA754;

Shape751.geometry = LineSet752;

HAnimSegment747.children[1] = Shape751;

let HAnimSite755 = browser.currentScene.createNode("HAnimSite");
HAnimSite755.name = "l_thelion_pt";
HAnimSite755.DEF = "hanim_l_thelion_pt";
HAnimSite755.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let TouchSensor756 = browser.currentScene.createNode("TouchSensor");
TouchSensor756.description = "HAnimSite l_thelion_pt";
HAnimSite755.children = new MFNode();

HAnimSite755.children[0] = TouchSensor756;

let Shape757 = browser.currentScene.createNode("Shape");
Shape757.USE = "HAnimSiteShape";
HAnimSite755.children[1] = Shape757;

HAnimSegment747.children[2] = HAnimSite755;

let HAnimSite758 = browser.currentScene.createNode("HAnimSite");
HAnimSite758.name = "r_thelion_pt";
HAnimSite758.DEF = "hanim_r_thelion_pt";
HAnimSite758.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let TouchSensor759 = browser.currentScene.createNode("TouchSensor");
TouchSensor759.description = "HAnimSite r_thelion_pt";
HAnimSite758.children = new MFNode();

HAnimSite758.children[0] = TouchSensor759;

let Shape760 = browser.currentScene.createNode("Shape");
Shape760.USE = "HAnimSiteShape";
HAnimSite758.children[1] = Shape760;

HAnimSegment747.children[3] = HAnimSite758;

HAnimJoint746.children = new MFNode();

HAnimJoint746.children[0] = HAnimSegment747;

let HAnimJoint761 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint761.name = "vt9";
HAnimJoint761.DEF = "hanim_vt9";
HAnimJoint761.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint761.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint761.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment762.name = "t9";
HAnimSegment762.DEF = "hanim_t9";
let Transform763 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform764 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape765 = browser.currentScene.createNode("Shape");
Shape765.USE = "HAnimJointShape";
Transform764.children = new MFNode();

Transform764.children[0] = Shape765;

Transform763.children = new MFNode();

Transform763.children[0] = Transform764;

HAnimSegment762.children = new MFNode();

HAnimSegment762.children[0] = Transform763;

let Shape766 = browser.currentScene.createNode("Shape");
let LineSet767 = browser.currentScene.createNode("LineSet");
LineSet767.vertexCount = new MFInt32(new int[2]);
let Coordinate768 = browser.currentScene.createNode("Coordinate");
Coordinate768.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet767.coord = Coordinate768;

//from vt9 to vt8 vertices 2
let ColorRGBA769 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA769.USE = "HAnimSegmentLineColorRGBA";
LineSet767.color = ColorRGBA769;

Shape766.geometry = LineSet767;

HAnimSegment762.children[1] = Shape766;

HAnimJoint761.children = new MFNode();

HAnimJoint761.children[0] = HAnimSegment762;

let HAnimJoint770 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint770.name = "vt8";
HAnimJoint770.DEF = "hanim_vt8";
HAnimJoint770.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint770.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint770.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment771.name = "t8";
HAnimSegment771.DEF = "hanim_t8";
let Transform772 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform773 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape774 = browser.currentScene.createNode("Shape");
Shape774.USE = "HAnimJointShape";
Transform773.children = new MFNode();

Transform773.children[0] = Shape774;

Transform772.children = new MFNode();

Transform772.children[0] = Transform773;

HAnimSegment771.children = new MFNode();

HAnimSegment771.children[0] = Transform772;

let Shape775 = browser.currentScene.createNode("Shape");
let LineSet776 = browser.currentScene.createNode("LineSet");
LineSet776.vertexCount = new MFInt32(new int[2]);
let Coordinate777 = browser.currentScene.createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet776.coord = Coordinate777;

//from vt8 to vt7 vertices 2
let ColorRGBA778 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA778.USE = "HAnimSegmentLineColorRGBA";
LineSet776.color = ColorRGBA778;

Shape775.geometry = LineSet776;

HAnimSegment771.children[1] = Shape775;

HAnimJoint770.children = new MFNode();

HAnimJoint770.children[0] = HAnimSegment771;

let HAnimJoint779 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint779.name = "vt7";
HAnimJoint779.DEF = "hanim_vt7";
HAnimJoint779.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint779.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint779.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment780.name = "t7";
HAnimSegment780.DEF = "hanim_t7";
let Transform781 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform782 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape783 = browser.currentScene.createNode("Shape");
Shape783.USE = "HAnimJointShape";
Transform782.children = new MFNode();

Transform782.children[0] = Shape783;

Transform781.children = new MFNode();

Transform781.children[0] = Transform782;

HAnimSegment780.children = new MFNode();

HAnimSegment780.children[0] = Transform781;

let Shape784 = browser.currentScene.createNode("Shape");
let LineSet785 = browser.currentScene.createNode("LineSet");
LineSet785.vertexCount = new MFInt32(new int[2]);
let Coordinate786 = browser.currentScene.createNode("Coordinate");
Coordinate786.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet785.coord = Coordinate786;

//from vt7 to vt6 vertices 2
let ColorRGBA787 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA787.USE = "HAnimSegmentLineColorRGBA";
LineSet785.color = ColorRGBA787;

Shape784.geometry = LineSet785;

HAnimSegment780.children[1] = Shape784;

let HAnimSite788 = browser.currentScene.createNode("HAnimSite");
HAnimSite788.name = "l_chest_midsagittal_plane_pt";
HAnimSite788.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite788.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor789 = browser.currentScene.createNode("TouchSensor");
TouchSensor789.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite788.children = new MFNode();

HAnimSite788.children[0] = TouchSensor789;

let Shape790 = browser.currentScene.createNode("Shape");
Shape790.USE = "HAnimSiteShape";
HAnimSite788.children[1] = Shape790;

HAnimSegment780.children[2] = HAnimSite788;

let HAnimSite791 = browser.currentScene.createNode("HAnimSite");
HAnimSite791.name = "mesosternale_pt";
HAnimSite791.DEF = "hanim_mesosternale_pt";
HAnimSite791.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor792 = browser.currentScene.createNode("TouchSensor");
TouchSensor792.description = "HAnimSite mesosternale_pt";
HAnimSite791.children = new MFNode();

HAnimSite791.children[0] = TouchSensor792;

let Shape793 = browser.currentScene.createNode("Shape");
Shape793.USE = "HAnimSiteShape";
HAnimSite791.children[1] = Shape793;

HAnimSegment780.children[3] = HAnimSite791;

let HAnimSite794 = browser.currentScene.createNode("HAnimSite");
HAnimSite794.name = "r_chest_midsagittal_plane_pt";
HAnimSite794.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite794.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor795 = browser.currentScene.createNode("TouchSensor");
TouchSensor795.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite794.children = new MFNode();

HAnimSite794.children[0] = TouchSensor795;

let Shape796 = browser.currentScene.createNode("Shape");
Shape796.USE = "HAnimSiteShape";
HAnimSite794.children[1] = Shape796;

HAnimSegment780.children[4] = HAnimSite794;

let HAnimSite797 = browser.currentScene.createNode("HAnimSite");
HAnimSite797.name = "rear_center_midsagittal_plane_pt";
HAnimSite797.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite797.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor798 = browser.currentScene.createNode("TouchSensor");
TouchSensor798.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite797.children = new MFNode();

HAnimSite797.children[0] = TouchSensor798;

let Shape799 = browser.currentScene.createNode("Shape");
Shape799.USE = "HAnimSiteShape";
HAnimSite797.children[1] = Shape799;

HAnimSegment780.children[5] = HAnimSite797;

HAnimJoint779.children = new MFNode();

HAnimJoint779.children[0] = HAnimSegment780;

let HAnimJoint800 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint800.name = "vt6";
HAnimJoint800.DEF = "hanim_vt6";
HAnimJoint800.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint800.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint800.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment801.name = "t6";
HAnimSegment801.DEF = "hanim_t6";
let Transform802 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform803 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape804 = browser.currentScene.createNode("Shape");
Shape804.USE = "HAnimJointShape";
Transform803.children = new MFNode();

Transform803.children[0] = Shape804;

Transform802.children = new MFNode();

Transform802.children[0] = Transform803;

HAnimSegment801.children = new MFNode();

HAnimSegment801.children[0] = Transform802;

let Shape805 = browser.currentScene.createNode("Shape");
let LineSet806 = browser.currentScene.createNode("LineSet");
LineSet806.vertexCount = new MFInt32(new int[2]);
let Coordinate807 = browser.currentScene.createNode("Coordinate");
Coordinate807.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet806.coord = Coordinate807;

//from vt6 to vt5 vertices 2
let ColorRGBA808 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA808.USE = "HAnimSegmentLineColorRGBA";
LineSet806.color = ColorRGBA808;

Shape805.geometry = LineSet806;

HAnimSegment801.children[1] = Shape805;

let HAnimSite809 = browser.currentScene.createNode("HAnimSite");
HAnimSite809.name = "spine_1_middle_back_pt";
HAnimSite809.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite809.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor810 = browser.currentScene.createNode("TouchSensor");
TouchSensor810.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite809.children = new MFNode();

HAnimSite809.children[0] = TouchSensor810;

let Shape811 = browser.currentScene.createNode("Shape");
Shape811.USE = "HAnimSiteShape";
HAnimSite809.children[1] = Shape811;

HAnimSegment801.children[2] = HAnimSite809;

HAnimJoint800.children = new MFNode();

HAnimJoint800.children[0] = HAnimSegment801;

let HAnimJoint812 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint812.name = "vt5";
HAnimJoint812.DEF = "hanim_vt5";
HAnimJoint812.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint812.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint812.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment813.name = "t5";
HAnimSegment813.DEF = "hanim_t5";
let Transform814 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate819.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet818.coord = Coordinate819;

//from vt5 to vt4 vertices 2
let ColorRGBA820 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA820.USE = "HAnimSegmentLineColorRGBA";
LineSet818.color = ColorRGBA820;

Shape817.geometry = LineSet818;

HAnimSegment813.children[1] = Shape817;

HAnimJoint812.children = new MFNode();

HAnimJoint812.children[0] = HAnimSegment813;

let HAnimJoint821 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint821.name = "vt4";
HAnimJoint821.DEF = "hanim_vt4";
HAnimJoint821.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint821.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint821.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment822.name = "t4";
HAnimSegment822.DEF = "hanim_t4";
let Transform823 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate828.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet827.coord = Coordinate828;

//from vt4 to vt3 vertices 2
let ColorRGBA829 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA829.USE = "HAnimSegmentLineColorRGBA";
LineSet827.color = ColorRGBA829;

Shape826.geometry = LineSet827;

HAnimSegment822.children[1] = Shape826;

HAnimJoint821.children = new MFNode();

HAnimJoint821.children[0] = HAnimSegment822;

let HAnimJoint830 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint830.name = "vt3";
HAnimJoint830.DEF = "hanim_vt3";
HAnimJoint830.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint830.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint830.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment831.name = "t3";
HAnimSegment831.DEF = "hanim_t3";
let Transform832 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform833 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape834 = browser.currentScene.createNode("Shape");
Shape834.USE = "HAnimJointShape";
Transform833.children = new MFNode();

Transform833.children[0] = Shape834;

Transform832.children = new MFNode();

Transform832.children[0] = Transform833;

HAnimSegment831.children = new MFNode();

HAnimSegment831.children[0] = Transform832;

let Shape835 = browser.currentScene.createNode("Shape");
let LineSet836 = browser.currentScene.createNode("LineSet");
LineSet836.vertexCount = new MFInt32(new int[2]);
let Coordinate837 = browser.currentScene.createNode("Coordinate");
Coordinate837.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet836.coord = Coordinate837;

//from vt3 to vt2 vertices 2
let ColorRGBA838 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA838.USE = "HAnimSegmentLineColorRGBA";
LineSet836.color = ColorRGBA838;

Shape835.geometry = LineSet836;

HAnimSegment831.children[1] = Shape835;

HAnimJoint830.children = new MFNode();

HAnimJoint830.children[0] = HAnimSegment831;

let HAnimJoint839 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint839.name = "vt2";
HAnimJoint839.DEF = "hanim_vt2";
HAnimJoint839.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint839.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint839.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment840.name = "t2";
HAnimSegment840.DEF = "hanim_t2";
let Transform841 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform842 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape843 = browser.currentScene.createNode("Shape");
Shape843.USE = "HAnimJointShape";
Transform842.children = new MFNode();

Transform842.children[0] = Shape843;

Transform841.children = new MFNode();

Transform841.children[0] = Transform842;

HAnimSegment840.children = new MFNode();

HAnimSegment840.children[0] = Transform841;

let Shape844 = browser.currentScene.createNode("Shape");
let LineSet845 = browser.currentScene.createNode("LineSet");
LineSet845.vertexCount = new MFInt32(new int[2]);
let Coordinate846 = browser.currentScene.createNode("Coordinate");
Coordinate846.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet845.coord = Coordinate846;

//from vt2 to vt1 vertices 2
let ColorRGBA847 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA847.USE = "HAnimSegmentLineColorRGBA";
LineSet845.color = ColorRGBA847;

Shape844.geometry = LineSet845;

HAnimSegment840.children[1] = Shape844;

let HAnimSite848 = browser.currentScene.createNode("HAnimSite");
HAnimSite848.name = "cervicale_pt";
HAnimSite848.DEF = "hanim_cervicale_pt";
HAnimSite848.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor849 = browser.currentScene.createNode("TouchSensor");
TouchSensor849.description = "HAnimSite cervicale_pt";
HAnimSite848.children = new MFNode();

HAnimSite848.children[0] = TouchSensor849;

let Shape850 = browser.currentScene.createNode("Shape");
Shape850.USE = "HAnimSiteShape";
HAnimSite848.children[1] = Shape850;

HAnimSegment840.children[2] = HAnimSite848;

let HAnimSite851 = browser.currentScene.createNode("HAnimSite");
HAnimSite851.name = "suprasternale_pt";
HAnimSite851.DEF = "hanim_suprasternale_pt";
HAnimSite851.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor852 = browser.currentScene.createNode("TouchSensor");
TouchSensor852.description = "HAnimSite suprasternale_pt";
HAnimSite851.children = new MFNode();

HAnimSite851.children[0] = TouchSensor852;

let Shape853 = browser.currentScene.createNode("Shape");
Shape853.USE = "HAnimSiteShape";
HAnimSite851.children[1] = Shape853;

HAnimSegment840.children[3] = HAnimSite851;

HAnimJoint839.children = new MFNode();

HAnimJoint839.children[0] = HAnimSegment840;

let HAnimJoint854 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint854.name = "vt1";
HAnimJoint854.DEF = "hanim_vt1";
HAnimJoint854.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint854.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint854.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment855.name = "t1";
HAnimSegment855.DEF = "hanim_t1";
let Transform856 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform857 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape858 = browser.currentScene.createNode("Shape");
Shape858.USE = "HAnimJointShape";
Transform857.children = new MFNode();

Transform857.children[0] = Shape858;

Transform856.children = new MFNode();

Transform856.children[0] = Transform857;

HAnimSegment855.children = new MFNode();

HAnimSegment855.children[0] = Transform856;

let Shape859 = browser.currentScene.createNode("Shape");
let LineSet860 = browser.currentScene.createNode("LineSet");
LineSet860.vertexCount = new MFInt32(new int[2]);
let Coordinate861 = browser.currentScene.createNode("Coordinate");
Coordinate861.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet860.coord = Coordinate861;

//from vt1 to vc7 vertices 2
let ColorRGBA862 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA862.USE = "HAnimSegmentLineColorRGBA";
LineSet860.color = ColorRGBA862;

Shape859.geometry = LineSet860;

HAnimSegment855.children[1] = Shape859;

let HAnimSite863 = browser.currentScene.createNode("HAnimSite");
HAnimSite863.name = "l_neck_base_pt";
HAnimSite863.DEF = "hanim_l_neck_base_pt";
HAnimSite863.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let TouchSensor864 = browser.currentScene.createNode("TouchSensor");
TouchSensor864.description = "HAnimSite l_neck_base_pt";
HAnimSite863.children = new MFNode();

HAnimSite863.children[0] = TouchSensor864;

let Shape865 = browser.currentScene.createNode("Shape");
Shape865.USE = "HAnimSiteShape";
HAnimSite863.children[1] = Shape865;

HAnimSegment855.children[2] = HAnimSite863;

let HAnimSite866 = browser.currentScene.createNode("HAnimSite");
HAnimSite866.name = "r_neck_base_pt";
HAnimSite866.DEF = "hanim_r_neck_base_pt";
HAnimSite866.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let TouchSensor867 = browser.currentScene.createNode("TouchSensor");
TouchSensor867.description = "HAnimSite r_neck_base_pt";
HAnimSite866.children = new MFNode();

HAnimSite866.children[0] = TouchSensor867;

let Shape868 = browser.currentScene.createNode("Shape");
Shape868.USE = "HAnimSiteShape";
HAnimSite866.children[1] = Shape868;

HAnimSegment855.children[3] = HAnimSite866;

let Shape869 = browser.currentScene.createNode("Shape");
let LineSet870 = browser.currentScene.createNode("LineSet");
LineSet870.vertexCount = new MFInt32(new int[2]);
let Coordinate871 = browser.currentScene.createNode("Coordinate");
Coordinate871.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet870.coord = Coordinate871;

//from vt1 to l_sternoclavicular vertices 2
let ColorRGBA872 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSegmentLineColorRGBA";
LineSet870.color = ColorRGBA872;

Shape869.geometry = LineSet870;

HAnimSegment855.children[4] = Shape869;

let HAnimSite873 = browser.currentScene.createNode("HAnimSite");
HAnimSite873.name = "l_acromion_pt";
HAnimSite873.DEF = "hanim_l_acromion_pt";
HAnimSite873.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor874 = browser.currentScene.createNode("TouchSensor");
TouchSensor874.description = "HAnimSite l_acromion_pt";
HAnimSite873.children = new MFNode();

HAnimSite873.children[0] = TouchSensor874;

let Shape875 = browser.currentScene.createNode("Shape");
Shape875.USE = "HAnimSiteShape";
HAnimSite873.children[1] = Shape875;

HAnimSegment855.children[5] = HAnimSite873;

let HAnimSite876 = browser.currentScene.createNode("HAnimSite");
HAnimSite876.name = "l_axilla_distal_pt";
HAnimSite876.DEF = "hanim_l_axilla_distal_pt";
HAnimSite876.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor877 = browser.currentScene.createNode("TouchSensor");
TouchSensor877.description = "HAnimSite l_axilla_distal_pt";
HAnimSite876.children = new MFNode();

HAnimSite876.children[0] = TouchSensor877;

let Shape878 = browser.currentScene.createNode("Shape");
Shape878.USE = "HAnimSiteShape";
HAnimSite876.children[1] = Shape878;

HAnimSegment855.children[6] = HAnimSite876;

let HAnimSite879 = browser.currentScene.createNode("HAnimSite");
HAnimSite879.name = "l_axilla_posterior_folds_pt";
HAnimSite879.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite879.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor880 = browser.currentScene.createNode("TouchSensor");
TouchSensor880.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite879.children = new MFNode();

HAnimSite879.children[0] = TouchSensor880;

let Shape881 = browser.currentScene.createNode("Shape");
Shape881.USE = "HAnimSiteShape";
HAnimSite879.children[1] = Shape881;

HAnimSegment855.children[7] = HAnimSite879;

let HAnimSite882 = browser.currentScene.createNode("HAnimSite");
HAnimSite882.name = "l_axilla_proximal_pt";
HAnimSite882.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite882.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor883 = browser.currentScene.createNode("TouchSensor");
TouchSensor883.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite882.children = new MFNode();

HAnimSite882.children[0] = TouchSensor883;

let Shape884 = browser.currentScene.createNode("Shape");
Shape884.USE = "HAnimSiteShape";
HAnimSite882.children[1] = Shape884;

HAnimSegment855.children[8] = HAnimSite882;

let HAnimSite885 = browser.currentScene.createNode("HAnimSite");
HAnimSite885.name = "l_clavicale_pt";
HAnimSite885.DEF = "hanim_l_clavicale_pt";
HAnimSite885.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor886 = browser.currentScene.createNode("TouchSensor");
TouchSensor886.description = "HAnimSite l_clavicale_pt";
HAnimSite885.children = new MFNode();

HAnimSite885.children[0] = TouchSensor886;

let Shape887 = browser.currentScene.createNode("Shape");
Shape887.USE = "HAnimSiteShape";
HAnimSite885.children[1] = Shape887;

HAnimSegment855.children[9] = HAnimSite885;

let Shape888 = browser.currentScene.createNode("Shape");
let LineSet889 = browser.currentScene.createNode("LineSet");
LineSet889.vertexCount = new MFInt32(new int[2]);
let Coordinate890 = browser.currentScene.createNode("Coordinate");
Coordinate890.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet889.coord = Coordinate890;

//from vt1 to r_sternoclavicular vertices 2
let ColorRGBA891 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA891.USE = "HAnimSegmentLineColorRGBA";
LineSet889.color = ColorRGBA891;

Shape888.geometry = LineSet889;

HAnimSegment855.children[10] = Shape888;

let HAnimSite892 = browser.currentScene.createNode("HAnimSite");
HAnimSite892.name = "r_acromion_pt";
HAnimSite892.DEF = "hanim_r_acromion_pt";
HAnimSite892.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor893 = browser.currentScene.createNode("TouchSensor");
TouchSensor893.description = "HAnimSite r_acromion_pt";
HAnimSite892.children = new MFNode();

HAnimSite892.children[0] = TouchSensor893;

let Shape894 = browser.currentScene.createNode("Shape");
Shape894.USE = "HAnimSiteShape";
HAnimSite892.children[1] = Shape894;

HAnimSegment855.children[11] = HAnimSite892;

let HAnimSite895 = browser.currentScene.createNode("HAnimSite");
HAnimSite895.name = "r_axilla_distal_pt";
HAnimSite895.DEF = "hanim_r_axilla_distal_pt";
HAnimSite895.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor896 = browser.currentScene.createNode("TouchSensor");
TouchSensor896.description = "HAnimSite r_axilla_distal_pt";
HAnimSite895.children = new MFNode();

HAnimSite895.children[0] = TouchSensor896;

let Shape897 = browser.currentScene.createNode("Shape");
Shape897.USE = "HAnimSiteShape";
HAnimSite895.children[1] = Shape897;

HAnimSegment855.children[12] = HAnimSite895;

let HAnimSite898 = browser.currentScene.createNode("HAnimSite");
HAnimSite898.name = "r_axilla_posterior_folds_pt";
HAnimSite898.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite898.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor899 = browser.currentScene.createNode("TouchSensor");
TouchSensor899.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite898.children = new MFNode();

HAnimSite898.children[0] = TouchSensor899;

let Shape900 = browser.currentScene.createNode("Shape");
Shape900.USE = "HAnimSiteShape";
HAnimSite898.children[1] = Shape900;

HAnimSegment855.children[13] = HAnimSite898;

let HAnimSite901 = browser.currentScene.createNode("HAnimSite");
HAnimSite901.name = "r_axilla_proximal_pt";
HAnimSite901.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite901.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor902 = browser.currentScene.createNode("TouchSensor");
TouchSensor902.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite901.children = new MFNode();

HAnimSite901.children[0] = TouchSensor902;

let Shape903 = browser.currentScene.createNode("Shape");
Shape903.USE = "HAnimSiteShape";
HAnimSite901.children[1] = Shape903;

HAnimSegment855.children[14] = HAnimSite901;

let HAnimSite904 = browser.currentScene.createNode("HAnimSite");
HAnimSite904.name = "r_clavicale_pt";
HAnimSite904.DEF = "hanim_r_clavicale_pt";
HAnimSite904.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor905 = browser.currentScene.createNode("TouchSensor");
TouchSensor905.description = "HAnimSite r_clavicale_pt";
HAnimSite904.children = new MFNode();

HAnimSite904.children[0] = TouchSensor905;

let Shape906 = browser.currentScene.createNode("Shape");
Shape906.USE = "HAnimSiteShape";
HAnimSite904.children[1] = Shape906;

HAnimSegment855.children[15] = HAnimSite904;

HAnimJoint854.children = new MFNode();

HAnimJoint854.children[0] = HAnimSegment855;

let HAnimJoint907 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint907.name = "vc7";
HAnimJoint907.DEF = "hanim_vc7";
HAnimJoint907.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint907.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint907.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment908 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment908.name = "c7";
HAnimSegment908.DEF = "hanim_c7";
let Transform909 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform910 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape911 = browser.currentScene.createNode("Shape");
Shape911.USE = "HAnimJointShape";
Transform910.children = new MFNode();

Transform910.children[0] = Shape911;

Transform909.children = new MFNode();

Transform909.children[0] = Transform910;

HAnimSegment908.children = new MFNode();

HAnimSegment908.children[0] = Transform909;

let Shape912 = browser.currentScene.createNode("Shape");
let LineSet913 = browser.currentScene.createNode("LineSet");
LineSet913.vertexCount = new MFInt32(new int[2]);
let Coordinate914 = browser.currentScene.createNode("Coordinate");
Coordinate914.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet913.coord = Coordinate914;

//from vc7 to vc6 vertices 2
let ColorRGBA915 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA915.USE = "HAnimSegmentLineColorRGBA";
LineSet913.color = ColorRGBA915;

Shape912.geometry = LineSet913;

HAnimSegment908.children[1] = Shape912;

HAnimJoint907.children = new MFNode();

HAnimJoint907.children[0] = HAnimSegment908;

let HAnimJoint916 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint916.name = "vc6";
HAnimJoint916.DEF = "hanim_vc6";
HAnimJoint916.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint916.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint916.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment917 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment917.name = "c6";
HAnimSegment917.DEF = "hanim_c6";
let Transform918 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform919 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape920 = browser.currentScene.createNode("Shape");
Shape920.USE = "HAnimJointShape";
Transform919.children = new MFNode();

Transform919.children[0] = Shape920;

Transform918.children = new MFNode();

Transform918.children[0] = Transform919;

HAnimSegment917.children = new MFNode();

HAnimSegment917.children[0] = Transform918;

let Shape921 = browser.currentScene.createNode("Shape");
let LineSet922 = browser.currentScene.createNode("LineSet");
LineSet922.vertexCount = new MFInt32(new int[2]);
let Coordinate923 = browser.currentScene.createNode("Coordinate");
Coordinate923.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet922.coord = Coordinate923;

//from vc6 to vc5 vertices 2
let ColorRGBA924 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA";
LineSet922.color = ColorRGBA924;

Shape921.geometry = LineSet922;

HAnimSegment917.children[1] = Shape921;

HAnimJoint916.children = new MFNode();

HAnimJoint916.children[0] = HAnimSegment917;

let HAnimJoint925 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint925.name = "vc5";
HAnimJoint925.DEF = "hanim_vc5";
HAnimJoint925.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint925.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint925.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment926 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment926.name = "c5";
HAnimSegment926.DEF = "hanim_c5";
let Transform927 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform928 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape929 = browser.currentScene.createNode("Shape");
Shape929.USE = "HAnimJointShape";
Transform928.children = new MFNode();

Transform928.children[0] = Shape929;

Transform927.children = new MFNode();

Transform927.children[0] = Transform928;

HAnimSegment926.children = new MFNode();

HAnimSegment926.children[0] = Transform927;

let Shape930 = browser.currentScene.createNode("Shape");
let LineSet931 = browser.currentScene.createNode("LineSet");
LineSet931.vertexCount = new MFInt32(new int[2]);
let Coordinate932 = browser.currentScene.createNode("Coordinate");
Coordinate932.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet931.coord = Coordinate932;

//from vc5 to vc4 vertices 2
let ColorRGBA933 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA933.USE = "HAnimSegmentLineColorRGBA";
LineSet931.color = ColorRGBA933;

Shape930.geometry = LineSet931;

HAnimSegment926.children[1] = Shape930;

HAnimJoint925.children = new MFNode();

HAnimJoint925.children[0] = HAnimSegment926;

let HAnimJoint934 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint934.name = "vc4";
HAnimJoint934.DEF = "hanim_vc4";
HAnimJoint934.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint934.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint934.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment935 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment935.name = "c4";
HAnimSegment935.DEF = "hanim_c4";
let Transform936 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform937 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape938 = browser.currentScene.createNode("Shape");
Shape938.USE = "HAnimJointShape";
Transform937.children = new MFNode();

Transform937.children[0] = Shape938;

Transform936.children = new MFNode();

Transform936.children[0] = Transform937;

HAnimSegment935.children = new MFNode();

HAnimSegment935.children[0] = Transform936;

let Shape939 = browser.currentScene.createNode("Shape");
let LineSet940 = browser.currentScene.createNode("LineSet");
LineSet940.vertexCount = new MFInt32(new int[2]);
let Coordinate941 = browser.currentScene.createNode("Coordinate");
Coordinate941.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet940.coord = Coordinate941;

//from vc4 to vc3 vertices 2
let ColorRGBA942 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA942.USE = "HAnimSegmentLineColorRGBA";
LineSet940.color = ColorRGBA942;

Shape939.geometry = LineSet940;

HAnimSegment935.children[1] = Shape939;

HAnimJoint934.children = new MFNode();

HAnimJoint934.children[0] = HAnimSegment935;

let HAnimJoint943 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint943.name = "vc3";
HAnimJoint943.DEF = "hanim_vc3";
HAnimJoint943.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint943.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint943.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment944 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment944.name = "c3";
HAnimSegment944.DEF = "hanim_c3";
let Transform945 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform946 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape947 = browser.currentScene.createNode("Shape");
Shape947.USE = "HAnimJointShape";
Transform946.children = new MFNode();

Transform946.children[0] = Shape947;

Transform945.children = new MFNode();

Transform945.children[0] = Transform946;

HAnimSegment944.children = new MFNode();

HAnimSegment944.children[0] = Transform945;

let Shape948 = browser.currentScene.createNode("Shape");
let LineSet949 = browser.currentScene.createNode("LineSet");
LineSet949.vertexCount = new MFInt32(new int[2]);
let Coordinate950 = browser.currentScene.createNode("Coordinate");
Coordinate950.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet949.coord = Coordinate950;

//from vc3 to vc2 vertices 2
let ColorRGBA951 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA951.USE = "HAnimSegmentLineColorRGBA";
LineSet949.color = ColorRGBA951;

Shape948.geometry = LineSet949;

HAnimSegment944.children[1] = Shape948;

let HAnimSite952 = browser.currentScene.createNode("HAnimSite");
HAnimSite952.name = "adams_apple_pt";
HAnimSite952.DEF = "hanim_adams_apple_pt";
HAnimSite952.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor953 = browser.currentScene.createNode("TouchSensor");
TouchSensor953.description = "HAnimSite adams_apple_pt";
HAnimSite952.children = new MFNode();

HAnimSite952.children[0] = TouchSensor953;

let Shape954 = browser.currentScene.createNode("Shape");
Shape954.USE = "HAnimSiteShape";
HAnimSite952.children[1] = Shape954;

HAnimSegment944.children[2] = HAnimSite952;

HAnimJoint943.children = new MFNode();

HAnimJoint943.children[0] = HAnimSegment944;

let HAnimJoint955 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint955.name = "vc2";
HAnimJoint955.DEF = "hanim_vc2";
HAnimJoint955.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint955.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint955.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment956 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment956.name = "c2";
HAnimSegment956.DEF = "hanim_c2";
let Transform957 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform958 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape959 = browser.currentScene.createNode("Shape");
Shape959.USE = "HAnimJointShape";
Transform958.children = new MFNode();

Transform958.children[0] = Shape959;

Transform957.children = new MFNode();

Transform957.children[0] = Transform958;

HAnimSegment956.children = new MFNode();

HAnimSegment956.children[0] = Transform957;

let Shape960 = browser.currentScene.createNode("Shape");
let LineSet961 = browser.currentScene.createNode("LineSet");
LineSet961.vertexCount = new MFInt32(new int[2]);
let Coordinate962 = browser.currentScene.createNode("Coordinate");
Coordinate962.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet961.coord = Coordinate962;

//from vc2 to vc1 vertices 2
let ColorRGBA963 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA963.USE = "HAnimSegmentLineColorRGBA";
LineSet961.color = ColorRGBA963;

Shape960.geometry = LineSet961;

HAnimSegment956.children[1] = Shape960;

HAnimJoint955.children = new MFNode();

HAnimJoint955.children[0] = HAnimSegment956;

let HAnimJoint964 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint964.name = "vc1";
HAnimJoint964.DEF = "hanim_vc1";
HAnimJoint964.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint964.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint964.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment965 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment965.name = "c1";
HAnimSegment965.DEF = "hanim_c1";
let Transform966 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform967 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape968 = browser.currentScene.createNode("Shape");
Shape968.USE = "HAnimJointShape";
Transform967.children = new MFNode();

Transform967.children[0] = Shape968;

Transform966.children = new MFNode();

Transform966.children[0] = Transform967;

HAnimSegment965.children = new MFNode();

HAnimSegment965.children[0] = Transform966;

let Shape969 = browser.currentScene.createNode("Shape");
let LineSet970 = browser.currentScene.createNode("LineSet");
LineSet970.vertexCount = new MFInt32(new int[2]);
let Coordinate971 = browser.currentScene.createNode("Coordinate");
Coordinate971.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet970.coord = Coordinate971;

//from vc1 to skullbase vertices 2
let ColorRGBA972 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA972.USE = "HAnimSegmentLineColorRGBA";
LineSet970.color = ColorRGBA972;

Shape969.geometry = LineSet970;

HAnimSegment965.children[1] = Shape969;

let HAnimSite973 = browser.currentScene.createNode("HAnimSite");
HAnimSite973.name = "glabella_pt";
HAnimSite973.DEF = "hanim_glabella_pt";
HAnimSite973.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor974 = browser.currentScene.createNode("TouchSensor");
TouchSensor974.description = "HAnimSite glabella_pt";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = TouchSensor974;

let Shape975 = browser.currentScene.createNode("Shape");
Shape975.USE = "HAnimSiteShape";
HAnimSite973.children[1] = Shape975;

HAnimSegment965.children[2] = HAnimSite973;

let HAnimSite976 = browser.currentScene.createNode("HAnimSite");
HAnimSite976.name = "l_ectocanthus_pt";
HAnimSite976.DEF = "hanim_l_ectocanthus_pt";
HAnimSite976.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor977 = browser.currentScene.createNode("TouchSensor");
TouchSensor977.description = "HAnimSite l_ectocanthus_pt";
HAnimSite976.children = new MFNode();

HAnimSite976.children[0] = TouchSensor977;

let Shape978 = browser.currentScene.createNode("Shape");
Shape978.USE = "HAnimSiteShape";
HAnimSite976.children[1] = Shape978;

HAnimSegment965.children[3] = HAnimSite976;

let HAnimSite979 = browser.currentScene.createNode("HAnimSite");
HAnimSite979.name = "l_infraorbitale_pt";
HAnimSite979.DEF = "hanim_l_infraorbitale_pt";
HAnimSite979.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor980 = browser.currentScene.createNode("TouchSensor");
TouchSensor980.description = "HAnimSite l_infraorbitale_pt";
HAnimSite979.children = new MFNode();

HAnimSite979.children[0] = TouchSensor980;

let Shape981 = browser.currentScene.createNode("Shape");
Shape981.USE = "HAnimSiteShape";
HAnimSite979.children[1] = Shape981;

HAnimSegment965.children[4] = HAnimSite979;

let HAnimSite982 = browser.currentScene.createNode("HAnimSite");
HAnimSite982.name = "l_tragion_pt";
HAnimSite982.DEF = "hanim_l_tragion_pt";
HAnimSite982.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor983 = browser.currentScene.createNode("TouchSensor");
TouchSensor983.description = "HAnimSite l_tragion_pt";
HAnimSite982.children = new MFNode();

HAnimSite982.children[0] = TouchSensor983;

let Shape984 = browser.currentScene.createNode("Shape");
Shape984.USE = "HAnimSiteShape";
HAnimSite982.children[1] = Shape984;

HAnimSegment965.children[5] = HAnimSite982;

let HAnimSite985 = browser.currentScene.createNode("HAnimSite");
HAnimSite985.name = "nuchale_pt";
HAnimSite985.DEF = "hanim_nuchale_pt";
HAnimSite985.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor986 = browser.currentScene.createNode("TouchSensor");
TouchSensor986.description = "HAnimSite nuchale_pt";
HAnimSite985.children = new MFNode();

HAnimSite985.children[0] = TouchSensor986;

let Shape987 = browser.currentScene.createNode("Shape");
Shape987.USE = "HAnimSiteShape";
HAnimSite985.children[1] = Shape987;

HAnimSegment965.children[6] = HAnimSite985;

let HAnimSite988 = browser.currentScene.createNode("HAnimSite");
HAnimSite988.name = "opisthocranion_pt";
HAnimSite988.DEF = "hanim_opisthocranion_pt";
HAnimSite988.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor989 = browser.currentScene.createNode("TouchSensor");
TouchSensor989.description = "HAnimSite opisthocranion_pt";
HAnimSite988.children = new MFNode();

HAnimSite988.children[0] = TouchSensor989;

let Shape990 = browser.currentScene.createNode("Shape");
Shape990.USE = "HAnimSiteShape";
HAnimSite988.children[1] = Shape990;

HAnimSegment965.children[7] = HAnimSite988;

let HAnimSite991 = browser.currentScene.createNode("HAnimSite");
HAnimSite991.name = "r_ectocanthus_pt";
HAnimSite991.DEF = "hanim_r_ectocanthus_pt";
HAnimSite991.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor992 = browser.currentScene.createNode("TouchSensor");
TouchSensor992.description = "HAnimSite r_ectocanthus_pt";
HAnimSite991.children = new MFNode();

HAnimSite991.children[0] = TouchSensor992;

let Shape993 = browser.currentScene.createNode("Shape");
Shape993.USE = "HAnimSiteShape";
HAnimSite991.children[1] = Shape993;

HAnimSegment965.children[8] = HAnimSite991;

let HAnimSite994 = browser.currentScene.createNode("HAnimSite");
HAnimSite994.name = "r_infraorbitale_pt";
HAnimSite994.DEF = "hanim_r_infraorbitale_pt";
HAnimSite994.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor995 = browser.currentScene.createNode("TouchSensor");
TouchSensor995.description = "HAnimSite r_infraorbitale_pt";
HAnimSite994.children = new MFNode();

HAnimSite994.children[0] = TouchSensor995;

let Shape996 = browser.currentScene.createNode("Shape");
Shape996.USE = "HAnimSiteShape";
HAnimSite994.children[1] = Shape996;

HAnimSegment965.children[9] = HAnimSite994;

let HAnimSite997 = browser.currentScene.createNode("HAnimSite");
HAnimSite997.name = "r_tragion_pt";
HAnimSite997.DEF = "hanim_r_tragion_pt";
HAnimSite997.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor998 = browser.currentScene.createNode("TouchSensor");
TouchSensor998.description = "HAnimSite r_tragion_pt";
HAnimSite997.children = new MFNode();

HAnimSite997.children[0] = TouchSensor998;

let Shape999 = browser.currentScene.createNode("Shape");
Shape999.USE = "HAnimSiteShape";
HAnimSite997.children[1] = Shape999;

HAnimSegment965.children[10] = HAnimSite997;

let HAnimSite1000 = browser.currentScene.createNode("HAnimSite");
HAnimSite1000.name = "sellion_pt";
HAnimSite1000.DEF = "hanim_sellion_pt";
HAnimSite1000.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor1001 = browser.currentScene.createNode("TouchSensor");
TouchSensor1001.description = "HAnimSite sellion_pt";
HAnimSite1000.children = new MFNode();

HAnimSite1000.children[0] = TouchSensor1001;

let Shape1002 = browser.currentScene.createNode("Shape");
Shape1002.USE = "HAnimSiteShape";
HAnimSite1000.children[1] = Shape1002;

HAnimSegment965.children[11] = HAnimSite1000;

let HAnimSite1003 = browser.currentScene.createNode("HAnimSite");
HAnimSite1003.name = "skull_vertex_pt";
HAnimSite1003.DEF = "hanim_skull_vertex_pt";
HAnimSite1003.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let TouchSensor1004 = browser.currentScene.createNode("TouchSensor");
TouchSensor1004.description = "HAnimSite skull_vertex_pt";
HAnimSite1003.children = new MFNode();

HAnimSite1003.children[0] = TouchSensor1004;

let Shape1005 = browser.currentScene.createNode("Shape");
Shape1005.USE = "HAnimSiteShape";
HAnimSite1003.children[1] = Shape1005;

HAnimSegment965.children[12] = HAnimSite1003;

HAnimJoint964.children = new MFNode();

HAnimJoint964.children[0] = HAnimSegment965;

let HAnimJoint1006 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1006.name = "skullbase";
HAnimJoint1006.DEF = "hanim_skullbase";
HAnimJoint1006.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint1006.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1007 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1007.name = "skull";
HAnimSegment1007.DEF = "hanim_skull";
let Transform1008 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1009 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1010 = browser.currentScene.createNode("Shape");
Shape1010.USE = "HAnimJointShape";
Transform1009.children = new MFNode();

Transform1009.children[0] = Shape1010;

Transform1008.children = new MFNode();

Transform1008.children[0] = Transform1009;

HAnimSegment1007.children = new MFNode();

HAnimSegment1007.children[0] = Transform1008;

let Shape1011 = browser.currentScene.createNode("Shape");
let LineSet1012 = browser.currentScene.createNode("LineSet");
LineSet1012.vertexCount = new MFInt32(new int[2]);
let Coordinate1013 = browser.currentScene.createNode("Coordinate");
Coordinate1013.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1012.coord = Coordinate1013;

//from skullbase to l_eyelid_joint vertices 2
let ColorRGBA1014 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1014.USE = "HAnimSegmentLineColorRGBA";
LineSet1012.color = ColorRGBA1014;

Shape1011.geometry = LineSet1012;

HAnimSegment1007.children[1] = Shape1011;

let Shape1015 = browser.currentScene.createNode("Shape");
let LineSet1016 = browser.currentScene.createNode("LineSet");
LineSet1016.vertexCount = new MFInt32(new int[2]);
let Coordinate1017 = browser.currentScene.createNode("Coordinate");
Coordinate1017.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1016.coord = Coordinate1017;

//from skullbase to r_eyelid_joint vertices 2
let ColorRGBA1018 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1018.USE = "HAnimSegmentLineColorRGBA";
LineSet1016.color = ColorRGBA1018;

Shape1015.geometry = LineSet1016;

HAnimSegment1007.children[2] = Shape1015;

let Shape1019 = browser.currentScene.createNode("Shape");
let LineSet1020 = browser.currentScene.createNode("LineSet");
LineSet1020.vertexCount = new MFInt32(new int[2]);
let Coordinate1021 = browser.currentScene.createNode("Coordinate");
Coordinate1021.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1020.coord = Coordinate1021;

//from skullbase to l_eyeball_joint vertices 2
let ColorRGBA1022 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSegmentLineColorRGBA";
LineSet1020.color = ColorRGBA1022;

Shape1019.geometry = LineSet1020;

HAnimSegment1007.children[3] = Shape1019;

let Shape1023 = browser.currentScene.createNode("Shape");
let LineSet1024 = browser.currentScene.createNode("LineSet");
LineSet1024.vertexCount = new MFInt32(new int[2]);
let Coordinate1025 = browser.currentScene.createNode("Coordinate");
Coordinate1025.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1024.coord = Coordinate1025;

//from skullbase to r_eyeball_joint vertices 2
let ColorRGBA1026 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1026.USE = "HAnimSegmentLineColorRGBA";
LineSet1024.color = ColorRGBA1026;

Shape1023.geometry = LineSet1024;

HAnimSegment1007.children[4] = Shape1023;

let Shape1027 = browser.currentScene.createNode("Shape");
let LineSet1028 = browser.currentScene.createNode("LineSet");
LineSet1028.vertexCount = new MFInt32(new int[2]);
let Coordinate1029 = browser.currentScene.createNode("Coordinate");
Coordinate1029.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1028.coord = Coordinate1029;

//from skullbase to l_eyebrow_joint vertices 2
let ColorRGBA1030 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1030.USE = "HAnimSegmentLineColorRGBA";
LineSet1028.color = ColorRGBA1030;

Shape1027.geometry = LineSet1028;

HAnimSegment1007.children[5] = Shape1027;

let Shape1031 = browser.currentScene.createNode("Shape");
let LineSet1032 = browser.currentScene.createNode("LineSet");
LineSet1032.vertexCount = new MFInt32(new int[2]);
let Coordinate1033 = browser.currentScene.createNode("Coordinate");
Coordinate1033.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1032.coord = Coordinate1033;

//from skullbase to r_eyebrow_joint vertices 2
let ColorRGBA1034 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1034.USE = "HAnimSegmentLineColorRGBA";
LineSet1032.color = ColorRGBA1034;

Shape1031.geometry = LineSet1032;

HAnimSegment1007.children[6] = Shape1031;

let Shape1035 = browser.currentScene.createNode("Shape");
let LineSet1036 = browser.currentScene.createNode("LineSet");
LineSet1036.vertexCount = new MFInt32(new int[2]);
let Coordinate1037 = browser.currentScene.createNode("Coordinate");
Coordinate1037.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1036.coord = Coordinate1037;

//from skullbase to temporomandibular vertices 2
let ColorRGBA1038 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1038.USE = "HAnimSegmentLineColorRGBA";
LineSet1036.color = ColorRGBA1038;

Shape1035.geometry = LineSet1036;

HAnimSegment1007.children[7] = Shape1035;

let HAnimSite1039 = browser.currentScene.createNode("HAnimSite");
HAnimSite1039.name = "l_gonion_pt";
HAnimSite1039.DEF = "hanim_l_gonion_pt";
HAnimSite1039.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let TouchSensor1040 = browser.currentScene.createNode("TouchSensor");
TouchSensor1040.description = "HAnimSite l_gonion_pt";
HAnimSite1039.children = new MFNode();

HAnimSite1039.children[0] = TouchSensor1040;

let Shape1041 = browser.currentScene.createNode("Shape");
Shape1041.USE = "HAnimSiteShape";
HAnimSite1039.children[1] = Shape1041;

HAnimSegment1007.children[8] = HAnimSite1039;

let HAnimSite1042 = browser.currentScene.createNode("HAnimSite");
HAnimSite1042.name = "menton_pt";
HAnimSite1042.DEF = "hanim_menton_pt";
HAnimSite1042.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1043 = browser.currentScene.createNode("TouchSensor");
TouchSensor1043.description = "HAnimSite menton_pt";
HAnimSite1042.children = new MFNode();

HAnimSite1042.children[0] = TouchSensor1043;

let Shape1044 = browser.currentScene.createNode("Shape");
Shape1044.USE = "HAnimSiteShape";
HAnimSite1042.children[1] = Shape1044;

HAnimSegment1007.children[9] = HAnimSite1042;

let HAnimSite1045 = browser.currentScene.createNode("HAnimSite");
HAnimSite1045.name = "r_gonion_pt";
HAnimSite1045.DEF = "hanim_r_gonion_pt";
HAnimSite1045.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let TouchSensor1046 = browser.currentScene.createNode("TouchSensor");
TouchSensor1046.description = "HAnimSite r_gonion_pt";
HAnimSite1045.children = new MFNode();

HAnimSite1045.children[0] = TouchSensor1046;

let Shape1047 = browser.currentScene.createNode("Shape");
Shape1047.USE = "HAnimSiteShape";
HAnimSite1045.children[1] = Shape1047;

HAnimSegment1007.children[10] = HAnimSite1045;

let HAnimSite1048 = browser.currentScene.createNode("HAnimSite");
HAnimSite1048.name = "supramenton_pt";
HAnimSite1048.DEF = "hanim_supramenton_pt";
HAnimSite1048.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let TouchSensor1049 = browser.currentScene.createNode("TouchSensor");
TouchSensor1049.description = "HAnimSite supramenton_pt";
HAnimSite1048.children = new MFNode();

HAnimSite1048.children[0] = TouchSensor1049;

let Shape1050 = browser.currentScene.createNode("Shape");
Shape1050.USE = "HAnimSiteShape";
HAnimSite1048.children[1] = Shape1050;

HAnimSegment1007.children[11] = HAnimSite1048;

HAnimJoint1006.children = new MFNode();

HAnimJoint1006.children[0] = HAnimSegment1007;

let HAnimJoint1051 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1051.name = "l_eyelid_joint";
HAnimJoint1051.DEF = "hanim_l_eyelid_joint";
HAnimJoint1051.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1051.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1051.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[1] = HAnimJoint1051;

let HAnimJoint1052 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1052.name = "r_eyelid_joint";
HAnimJoint1052.DEF = "hanim_r_eyelid_joint";
HAnimJoint1052.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1052.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1052.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[2] = HAnimJoint1052;

let HAnimJoint1053 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1053.name = "l_eyeball_joint";
HAnimJoint1053.DEF = "hanim_l_eyeball_joint";
HAnimJoint1053.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1053.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1053.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[3] = HAnimJoint1053;

let HAnimJoint1054 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1054.name = "r_eyeball_joint";
HAnimJoint1054.DEF = "hanim_r_eyeball_joint";
HAnimJoint1054.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1054.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1054.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[4] = HAnimJoint1054;

let HAnimJoint1055 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1055.name = "l_eyebrow_joint";
HAnimJoint1055.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1055.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1055.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1055.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[5] = HAnimJoint1055;

let HAnimJoint1056 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1056.name = "r_eyebrow_joint";
HAnimJoint1056.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1056.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1056.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1056.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[6] = HAnimJoint1056;

let HAnimJoint1057 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1057.name = "temporomandibular";
HAnimJoint1057.DEF = "hanim_temporomandibular";
HAnimJoint1057.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1057.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1057.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1006.children[7] = HAnimJoint1057;

let HAnimDisplacer1058 = browser.currentScene.createNode("HAnimDisplacer");
HAnimDisplacer1058.name = "skull_tip_raiser_action";
HAnimDisplacer1058.DEF = "Joe_skull_tip_raiser_action";
HAnimDisplacer1058.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer1058.displacements = new MFVec3f(new float[0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint1006.displacers[8] = HAnimDisplacer1058;

HAnimJoint964.children[1] = HAnimJoint1006;

HAnimJoint955.children[1] = HAnimJoint964;

HAnimJoint943.children[1] = HAnimJoint955;

HAnimJoint934.children[1] = HAnimJoint943;

HAnimJoint925.children[1] = HAnimJoint934;

HAnimJoint916.children[1] = HAnimJoint925;

HAnimJoint907.children[1] = HAnimJoint916;

HAnimJoint854.children[1] = HAnimJoint907;

let HAnimJoint1059 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1059.name = "l_sternoclavicular";
HAnimJoint1059.DEF = "hanim_l_sternoclavicular";
HAnimJoint1059.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint1059.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1059.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1060 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1060.name = "l_clavicle";
HAnimSegment1060.DEF = "hanim_l_clavicle";
let Transform1061 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1062 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1063 = browser.currentScene.createNode("Shape");
Shape1063.USE = "HAnimJointShape";
Transform1062.children = new MFNode();

Transform1062.children[0] = Shape1063;

Transform1061.children = new MFNode();

Transform1061.children[0] = Transform1062;

HAnimSegment1060.children = new MFNode();

HAnimSegment1060.children[0] = Transform1061;

let Shape1064 = browser.currentScene.createNode("Shape");
let LineSet1065 = browser.currentScene.createNode("LineSet");
LineSet1065.vertexCount = new MFInt32(new int[2]);
let Coordinate1066 = browser.currentScene.createNode("Coordinate");
Coordinate1066.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet1065.coord = Coordinate1066;

//from l_sternoclavicular to l_acromioclavicular vertices 2
let ColorRGBA1067 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1067.USE = "HAnimSegmentLineColorRGBA";
LineSet1065.color = ColorRGBA1067;

Shape1064.geometry = LineSet1065;

HAnimSegment1060.children[1] = Shape1064;

HAnimJoint1059.children = new MFNode();

HAnimJoint1059.children[0] = HAnimSegment1060;

let HAnimJoint1068 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1068.name = "l_acromioclavicular";
HAnimJoint1068.DEF = "hanim_l_acromioclavicular";
HAnimJoint1068.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint1068.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1068.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1069 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1069.name = "l_scapula";
HAnimSegment1069.DEF = "hanim_l_scapula";
let Transform1070 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1071 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1072 = browser.currentScene.createNode("Shape");
Shape1072.USE = "HAnimJointShape";
Transform1071.children = new MFNode();

Transform1071.children[0] = Shape1072;

Transform1070.children = new MFNode();

Transform1070.children[0] = Transform1071;

HAnimSegment1069.children = new MFNode();

HAnimSegment1069.children[0] = Transform1070;

let Shape1073 = browser.currentScene.createNode("Shape");
let LineSet1074 = browser.currentScene.createNode("LineSet");
LineSet1074.vertexCount = new MFInt32(new int[2]);
let Coordinate1075 = browser.currentScene.createNode("Coordinate");
Coordinate1075.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet1074.coord = Coordinate1075;

//from l_acromioclavicular to l_shoulder vertices 2
let ColorRGBA1076 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1076.USE = "HAnimSegmentLineColorRGBA";
LineSet1074.color = ColorRGBA1076;

Shape1073.geometry = LineSet1074;

HAnimSegment1069.children[1] = Shape1073;

let HAnimSite1077 = browser.currentScene.createNode("HAnimSite");
HAnimSite1077.name = "l_bideltoid_pt";
HAnimSite1077.DEF = "hanim_l_bideltoid_pt";
HAnimSite1077.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1078 = browser.currentScene.createNode("TouchSensor");
TouchSensor1078.description = "HAnimSite l_bideltoid_pt";
HAnimSite1077.children = new MFNode();

HAnimSite1077.children[0] = TouchSensor1078;

let Shape1079 = browser.currentScene.createNode("Shape");
Shape1079.USE = "HAnimSiteShape";
HAnimSite1077.children[1] = Shape1079;

HAnimSegment1069.children[2] = HAnimSite1077;

let HAnimSite1080 = browser.currentScene.createNode("HAnimSite");
HAnimSite1080.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite1080.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite1080.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor1081 = browser.currentScene.createNode("TouchSensor");
TouchSensor1081.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite1080.children = new MFNode();

HAnimSite1080.children[0] = TouchSensor1081;

let Shape1082 = browser.currentScene.createNode("Shape");
Shape1082.USE = "HAnimSiteShape";
HAnimSite1080.children[1] = Shape1082;

HAnimSegment1069.children[3] = HAnimSite1080;

HAnimJoint1068.children = new MFNode();

HAnimJoint1068.children[0] = HAnimSegment1069;

let HAnimJoint1083 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1083.name = "l_shoulder";
HAnimJoint1083.DEF = "hanim_l_shoulder";
HAnimJoint1083.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint1083.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1083.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1084 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1084.name = "l_upperarm";
HAnimSegment1084.DEF = "hanim_l_upperarm";
let Transform1085 = browser.currentScene.createNode("Transform");
//Empty Transform
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
Coordinate1090.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet1089.coord = Coordinate1090;

//from l_shoulder to l_elbow vertices 2
let ColorRGBA1091 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA";
LineSet1089.color = ColorRGBA1091;

Shape1088.geometry = LineSet1089;

HAnimSegment1084.children[1] = Shape1088;

let HAnimSite1092 = browser.currentScene.createNode("HAnimSite");
HAnimSite1092.name = "l_humeral_medial_epicondyles_pt";
HAnimSite1092.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite1092.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor1093 = browser.currentScene.createNode("TouchSensor");
TouchSensor1093.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite1092.children = new MFNode();

HAnimSite1092.children[0] = TouchSensor1093;

let Shape1094 = browser.currentScene.createNode("Shape");
Shape1094.USE = "HAnimSiteShape";
HAnimSite1092.children[1] = Shape1094;

HAnimSegment1084.children[2] = HAnimSite1092;

let HAnimSite1095 = browser.currentScene.createNode("HAnimSite");
HAnimSite1095.name = "l_olecranon_pt";
HAnimSite1095.DEF = "hanim_l_olecranon_pt";
HAnimSite1095.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor1096 = browser.currentScene.createNode("TouchSensor");
TouchSensor1096.description = "HAnimSite l_olecranon_pt";
HAnimSite1095.children = new MFNode();

HAnimSite1095.children[0] = TouchSensor1096;

let Shape1097 = browser.currentScene.createNode("Shape");
Shape1097.USE = "HAnimSiteShape";
HAnimSite1095.children[1] = Shape1097;

HAnimSegment1084.children[3] = HAnimSite1095;

let HAnimSite1098 = browser.currentScene.createNode("HAnimSite");
HAnimSite1098.name = "l_radial_styloid_pt";
HAnimSite1098.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1098.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor1099 = browser.currentScene.createNode("TouchSensor");
TouchSensor1099.description = "HAnimSite l_radial_styloid_pt";
HAnimSite1098.children = new MFNode();

HAnimSite1098.children[0] = TouchSensor1099;

let Shape1100 = browser.currentScene.createNode("Shape");
Shape1100.USE = "HAnimSiteShape";
HAnimSite1098.children[1] = Shape1100;

HAnimSegment1084.children[4] = HAnimSite1098;

let HAnimSite1101 = browser.currentScene.createNode("HAnimSite");
HAnimSite1101.name = "l_radiale_pt";
HAnimSite1101.DEF = "hanim_l_radiale_pt";
HAnimSite1101.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor1102 = browser.currentScene.createNode("TouchSensor");
TouchSensor1102.description = "HAnimSite l_radiale_pt";
HAnimSite1101.children = new MFNode();

HAnimSite1101.children[0] = TouchSensor1102;

let Shape1103 = browser.currentScene.createNode("Shape");
Shape1103.USE = "HAnimSiteShape";
HAnimSite1101.children[1] = Shape1103;

HAnimSegment1084.children[5] = HAnimSite1101;

HAnimJoint1083.children = new MFNode();

HAnimJoint1083.children[0] = HAnimSegment1084;

let HAnimJoint1104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1104.name = "l_elbow";
HAnimJoint1104.DEF = "hanim_l_elbow";
HAnimJoint1104.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint1104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1104.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1105.name = "l_forearm";
HAnimSegment1105.DEF = "hanim_l_forearm";
let Transform1106 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1107 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1108 = browser.currentScene.createNode("Shape");
Shape1108.USE = "HAnimJointShape";
Transform1107.children = new MFNode();

Transform1107.children[0] = Shape1108;

Transform1106.children = new MFNode();

Transform1106.children[0] = Transform1107;

HAnimSegment1105.children = new MFNode();

HAnimSegment1105.children[0] = Transform1106;

let Shape1109 = browser.currentScene.createNode("Shape");
let LineSet1110 = browser.currentScene.createNode("LineSet");
LineSet1110.vertexCount = new MFInt32(new int[2]);
let Coordinate1111 = browser.currentScene.createNode("Coordinate");
Coordinate1111.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1110.coord = Coordinate1111;

//from l_elbow to l_radiocarpal vertices 2
let ColorRGBA1112 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1112.USE = "HAnimSegmentLineColorRGBA";
LineSet1110.color = ColorRGBA1112;

Shape1109.geometry = LineSet1110;

HAnimSegment1105.children[1] = Shape1109;

let HAnimSite1113 = browser.currentScene.createNode("HAnimSite");
HAnimSite1113.name = "l_ulnar_styloid_pt";
HAnimSite1113.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1113.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor1114 = browser.currentScene.createNode("TouchSensor");
TouchSensor1114.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1113.children = new MFNode();

HAnimSite1113.children[0] = TouchSensor1114;

let Shape1115 = browser.currentScene.createNode("Shape");
Shape1115.USE = "HAnimSiteShape";
HAnimSite1113.children[1] = Shape1115;

HAnimSegment1105.children[2] = HAnimSite1113;

HAnimJoint1104.children = new MFNode();

HAnimJoint1104.children[0] = HAnimSegment1105;

let HAnimJoint1116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1116.name = "l_radiocarpal";
HAnimJoint1116.DEF = "hanim_l_radiocarpal";
HAnimJoint1116.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint1116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1116.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1117 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1117.name = "l_carpal";
HAnimSegment1117.DEF = "hanim_l_carpal";
let Transform1118 = browser.currentScene.createNode("Transform");
Transform1118.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1118.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1118.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
let Transform1119 = browser.currentScene.createNode("Transform");
Transform1119.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
let Shape1120 = browser.currentScene.createNode("Shape");
Shape1120.USE = "HAnimJointShape";
Transform1119.children = new MFNode();

Transform1119.children[0] = Shape1120;

Transform1118.children = new MFNode();

Transform1118.children[0] = Transform1119;

HAnimSegment1117.children = new MFNode();

HAnimSegment1117.children[0] = Transform1118;

let Shape1121 = browser.currentScene.createNode("Shape");
let LineSet1122 = browser.currentScene.createNode("LineSet");
LineSet1122.vertexCount = new MFInt32(new int[2]);
let Coordinate1123 = browser.currentScene.createNode("Coordinate");
Coordinate1123.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1122.coord = Coordinate1123;

//from l_radiocarpal to l_midcarpal_1 vertices 2
let ColorRGBA1124 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1124.USE = "HAnimSegmentLineColorRGBA";
LineSet1122.color = ColorRGBA1124;

Shape1121.geometry = LineSet1122;

HAnimSegment1117.children[1] = Shape1121;

let Shape1125 = browser.currentScene.createNode("Shape");
let LineSet1126 = browser.currentScene.createNode("LineSet");
LineSet1126.vertexCount = new MFInt32(new int[2]);
let Coordinate1127 = browser.currentScene.createNode("Coordinate");
Coordinate1127.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1126.coord = Coordinate1127;

//from l_radiocarpal to l_midcarpal_2 vertices 2
let ColorRGBA1128 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1128.USE = "HAnimSegmentLineColorRGBA";
LineSet1126.color = ColorRGBA1128;

Shape1125.geometry = LineSet1126;

HAnimSegment1117.children[2] = Shape1125;

let Shape1129 = browser.currentScene.createNode("Shape");
let LineSet1130 = browser.currentScene.createNode("LineSet");
LineSet1130.vertexCount = new MFInt32(new int[2]);
let Coordinate1131 = browser.currentScene.createNode("Coordinate");
Coordinate1131.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1130.coord = Coordinate1131;

//from l_radiocarpal to l_midcarpal_3 vertices 2
let ColorRGBA1132 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1132.USE = "HAnimSegmentLineColorRGBA";
LineSet1130.color = ColorRGBA1132;

Shape1129.geometry = LineSet1130;

HAnimSegment1117.children[3] = Shape1129;

let Shape1133 = browser.currentScene.createNode("Shape");
let LineSet1134 = browser.currentScene.createNode("LineSet");
LineSet1134.vertexCount = new MFInt32(new int[2]);
let Coordinate1135 = browser.currentScene.createNode("Coordinate");
Coordinate1135.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1134.coord = Coordinate1135;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
let ColorRGBA1136 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1136.USE = "HAnimSegmentLineColorRGBA";
LineSet1134.color = ColorRGBA1136;

Shape1133.geometry = LineSet1134;

HAnimSegment1117.children[4] = Shape1133;

HAnimJoint1116.children = new MFNode();

HAnimJoint1116.children[0] = HAnimSegment1117;

let HAnimJoint1137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1137.name = "l_midcarpal_1";
HAnimJoint1137.DEF = "hanim_l_midcarpal_1";
HAnimJoint1137.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1137.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1137.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1138 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1138.name = "l_trapezium";
HAnimSegment1138.DEF = "hanim_l_trapezium";
let Transform1139 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1140 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1141 = browser.currentScene.createNode("Shape");
Shape1141.USE = "HAnimJointShape";
Transform1140.children = new MFNode();

Transform1140.children[0] = Shape1141;

Transform1139.children = new MFNode();

Transform1139.children[0] = Transform1140;

HAnimSegment1138.children = new MFNode();

HAnimSegment1138.children[0] = Transform1139;

let Shape1142 = browser.currentScene.createNode("Shape");
let LineSet1143 = browser.currentScene.createNode("LineSet");
LineSet1143.vertexCount = new MFInt32(new int[2]);
let Coordinate1144 = browser.currentScene.createNode("Coordinate");
Coordinate1144.point = new MFVec3f(new float[0,1,0,0.1924,0.8472,-0.0534]);
LineSet1143.coord = Coordinate1144;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
let ColorRGBA1145 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1145.USE = "HAnimSegmentLineColorRGBA";
LineSet1143.color = ColorRGBA1145;

Shape1142.geometry = LineSet1143;

HAnimSegment1138.children[1] = Shape1142;

HAnimJoint1137.children = new MFNode();

HAnimJoint1137.children[0] = HAnimSegment1138;

let HAnimJoint1146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1146.name = "l_carpometacarpal_1";
HAnimJoint1146.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1146.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1146.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1146.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1147 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1147.name = "l_metacarpal_1";
HAnimSegment1147.DEF = "hanim_l_metacarpal_1";
let Transform1148 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1149 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1150 = browser.currentScene.createNode("Shape");
Shape1150.USE = "HAnimJointShape";
Transform1149.children = new MFNode();

Transform1149.children[0] = Shape1150;

Transform1148.children = new MFNode();

Transform1148.children[0] = Transform1149;

HAnimSegment1147.children = new MFNode();

HAnimSegment1147.children[0] = Transform1148;

let Shape1151 = browser.currentScene.createNode("Shape");
let LineSet1152 = browser.currentScene.createNode("LineSet");
LineSet1152.vertexCount = new MFInt32(new int[2]);
let Coordinate1153 = browser.currentScene.createNode("Coordinate");
Coordinate1153.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1152.coord = Coordinate1153;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
let ColorRGBA1154 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1154.USE = "HAnimSegmentLineColorRGBA";
LineSet1152.color = ColorRGBA1154;

Shape1151.geometry = LineSet1152;

HAnimSegment1147.children[1] = Shape1151;

HAnimJoint1146.children = new MFNode();

HAnimJoint1146.children[0] = HAnimSegment1147;

let HAnimJoint1155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1155.name = "l_metacarpophalangeal_1";
HAnimJoint1155.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1155.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1155.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1155.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1156 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1156.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1156.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Transform1157 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1158 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1159 = browser.currentScene.createNode("Shape");
Shape1159.USE = "HAnimJointShape";
Transform1158.children = new MFNode();

Transform1158.children[0] = Shape1159;

Transform1157.children = new MFNode();

Transform1157.children[0] = Transform1158;

HAnimSegment1156.children = new MFNode();

HAnimSegment1156.children[0] = Transform1157;

let Shape1160 = browser.currentScene.createNode("Shape");
let LineSet1161 = browser.currentScene.createNode("LineSet");
LineSet1161.vertexCount = new MFInt32(new int[2]);
let Coordinate1162 = browser.currentScene.createNode("Coordinate");
Coordinate1162.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1161.coord = Coordinate1162;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
let ColorRGBA1163 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1163.USE = "HAnimSegmentLineColorRGBA";
LineSet1161.color = ColorRGBA1163;

Shape1160.geometry = LineSet1161;

HAnimSegment1156.children[1] = Shape1160;

let HAnimSite1164 = browser.currentScene.createNode("HAnimSite");
HAnimSite1164.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite1164.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite1164.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1165 = browser.currentScene.createNode("TouchSensor");
TouchSensor1165.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite1164.children = new MFNode();

HAnimSite1164.children[0] = TouchSensor1165;

let Shape1166 = browser.currentScene.createNode("Shape");
Shape1166.USE = "HAnimSiteShape";
HAnimSite1164.children[1] = Shape1166;

HAnimSegment1156.children[2] = HAnimSite1164;

HAnimJoint1155.children = new MFNode();

HAnimJoint1155.children[0] = HAnimSegment1156;

let HAnimJoint1167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1167.name = "l_carpal_interphalangeal_1";
HAnimJoint1167.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1167.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1167.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1167.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1155.children[1] = HAnimJoint1167;

HAnimJoint1146.children[1] = HAnimJoint1155;

HAnimJoint1137.children[1] = HAnimJoint1146;

HAnimJoint1116.children[1] = HAnimJoint1137;

let HAnimJoint1168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1168.name = "l_midcarpal_2";
HAnimJoint1168.DEF = "hanim_l_midcarpal_2";
HAnimJoint1168.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1168.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1168.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1169 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1169.name = "l_trapezoid";
HAnimSegment1169.DEF = "hanim_l_trapezoid";
let Transform1170 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1171 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1172 = browser.currentScene.createNode("Shape");
Shape1172.USE = "HAnimJointShape";
Transform1171.children = new MFNode();

Transform1171.children[0] = Shape1172;

Transform1170.children = new MFNode();

Transform1170.children[0] = Transform1171;

HAnimSegment1169.children = new MFNode();

HAnimSegment1169.children[0] = Transform1170;

let Shape1173 = browser.currentScene.createNode("Shape");
let LineSet1174 = browser.currentScene.createNode("LineSet");
LineSet1174.vertexCount = new MFInt32(new int[2]);
let Coordinate1175 = browser.currentScene.createNode("Coordinate");
Coordinate1175.point = new MFVec3f(new float[0,1,0,0.1983,0.8024,-0.028]);
LineSet1174.coord = Coordinate1175;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
let ColorRGBA1176 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1176.USE = "HAnimSegmentLineColorRGBA";
LineSet1174.color = ColorRGBA1176;

Shape1173.geometry = LineSet1174;

HAnimSegment1169.children[1] = Shape1173;

let HAnimSite1177 = browser.currentScene.createNode("HAnimSite");
HAnimSite1177.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1177.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1177.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor1178 = browser.currentScene.createNode("TouchSensor");
TouchSensor1178.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite1177.children = new MFNode();

HAnimSite1177.children[0] = TouchSensor1178;

let Shape1179 = browser.currentScene.createNode("Shape");
Shape1179.USE = "HAnimSiteShape";
HAnimSite1177.children[1] = Shape1179;

HAnimSegment1169.children[2] = HAnimSite1177;

HAnimJoint1168.children = new MFNode();

HAnimJoint1168.children[0] = HAnimSegment1169;

let HAnimJoint1180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1180.name = "l_carpometacarpal_2";
HAnimJoint1180.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1180.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1180.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1181 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1181.name = "l_metacarpal_2";
HAnimSegment1181.DEF = "hanim_l_metacarpal_2";
let Transform1182 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1183 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1184 = browser.currentScene.createNode("Shape");
Shape1184.USE = "HAnimJointShape";
Transform1183.children = new MFNode();

Transform1183.children[0] = Shape1184;

Transform1182.children = new MFNode();

Transform1182.children[0] = Transform1183;

HAnimSegment1181.children = new MFNode();

HAnimSegment1181.children[0] = Transform1182;

let Shape1185 = browser.currentScene.createNode("Shape");
let LineSet1186 = browser.currentScene.createNode("LineSet");
LineSet1186.vertexCount = new MFInt32(new int[2]);
let Coordinate1187 = browser.currentScene.createNode("Coordinate");
Coordinate1187.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1186.coord = Coordinate1187;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
let ColorRGBA1188 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1188.USE = "HAnimSegmentLineColorRGBA";
LineSet1186.color = ColorRGBA1188;

Shape1185.geometry = LineSet1186;

HAnimSegment1181.children[1] = Shape1185;

HAnimJoint1180.children = new MFNode();

HAnimJoint1180.children[0] = HAnimSegment1181;

let HAnimJoint1189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1189.name = "l_metacarpophalangeal_2";
HAnimJoint1189.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1189.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1189.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1189.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1190 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1190.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1190.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Transform1191 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1192 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1193 = browser.currentScene.createNode("Shape");
Shape1193.USE = "HAnimJointShape";
Transform1192.children = new MFNode();

Transform1192.children[0] = Shape1193;

Transform1191.children = new MFNode();

Transform1191.children[0] = Transform1192;

HAnimSegment1190.children = new MFNode();

HAnimSegment1190.children[0] = Transform1191;

let Shape1194 = browser.currentScene.createNode("Shape");
let LineSet1195 = browser.currentScene.createNode("LineSet");
LineSet1195.vertexCount = new MFInt32(new int[2]);
let Coordinate1196 = browser.currentScene.createNode("Coordinate");
Coordinate1196.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1195.coord = Coordinate1196;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1197 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1197.USE = "HAnimSegmentLineColorRGBA";
LineSet1195.color = ColorRGBA1197;

Shape1194.geometry = LineSet1195;

HAnimSegment1190.children[1] = Shape1194;

HAnimJoint1189.children = new MFNode();

HAnimJoint1189.children[0] = HAnimSegment1190;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1198.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1198.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1198.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1198.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1199 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1199.name = "l_carpal_middle_phalanx_2";
HAnimSegment1199.DEF = "hanim_l_carpal_middle_phalanx_2";
let Transform1200 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1201 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1202 = browser.currentScene.createNode("Shape");
Shape1202.USE = "HAnimJointShape";
Transform1201.children = new MFNode();

Transform1201.children[0] = Shape1202;

Transform1200.children = new MFNode();

Transform1200.children[0] = Transform1201;

HAnimSegment1199.children = new MFNode();

HAnimSegment1199.children[0] = Transform1200;

let Shape1203 = browser.currentScene.createNode("Shape");
let LineSet1204 = browser.currentScene.createNode("LineSet");
LineSet1204.vertexCount = new MFInt32(new int[2]);
let Coordinate1205 = browser.currentScene.createNode("Coordinate");
Coordinate1205.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1204.coord = Coordinate1205;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1206 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1206.USE = "HAnimSegmentLineColorRGBA";
LineSet1204.color = ColorRGBA1206;

Shape1203.geometry = LineSet1204;

HAnimSegment1199.children[1] = Shape1203;

let HAnimSite1207 = browser.currentScene.createNode("HAnimSite");
HAnimSite1207.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite1207.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite1207.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1208 = browser.currentScene.createNode("TouchSensor");
TouchSensor1208.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite1207.children = new MFNode();

HAnimSite1207.children[0] = TouchSensor1208;

let Shape1209 = browser.currentScene.createNode("Shape");
Shape1209.USE = "HAnimSiteShape";
HAnimSite1207.children[1] = Shape1209;

HAnimSegment1199.children[2] = HAnimSite1207;

let HAnimSite1210 = browser.currentScene.createNode("HAnimSite");
HAnimSite1210.name = "l_dactylion_pt";
HAnimSite1210.DEF = "hanim_l_dactylion_pt";
HAnimSite1210.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor1211 = browser.currentScene.createNode("TouchSensor");
TouchSensor1211.description = "HAnimSite l_dactylion_pt";
HAnimSite1210.children = new MFNode();

HAnimSite1210.children[0] = TouchSensor1211;

let Shape1212 = browser.currentScene.createNode("Shape");
Shape1212.USE = "HAnimSiteShape";
HAnimSite1210.children[1] = Shape1212;

HAnimSegment1199.children[3] = HAnimSite1210;

HAnimJoint1198.children = new MFNode();

HAnimJoint1198.children[0] = HAnimSegment1199;

let HAnimJoint1213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1213.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1213.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1213.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1213.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1198.children[1] = HAnimJoint1213;

HAnimJoint1189.children[1] = HAnimJoint1198;

HAnimJoint1180.children[1] = HAnimJoint1189;

HAnimJoint1168.children[1] = HAnimJoint1180;

HAnimJoint1116.children[2] = HAnimJoint1168;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.name = "l_midcarpal_3";
HAnimJoint1214.DEF = "hanim_l_midcarpal_3";
HAnimJoint1214.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1214.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1214.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1215 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1215.name = "l_capitate";
HAnimSegment1215.DEF = "hanim_l_capitate";
let Transform1216 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1217 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1218 = browser.currentScene.createNode("Shape");
Shape1218.USE = "HAnimJointShape";
Transform1217.children = new MFNode();

Transform1217.children[0] = Shape1218;

Transform1216.children = new MFNode();

Transform1216.children[0] = Transform1217;

HAnimSegment1215.children = new MFNode();

HAnimSegment1215.children[0] = Transform1216;

let Shape1219 = browser.currentScene.createNode("Shape");
let LineSet1220 = browser.currentScene.createNode("LineSet");
LineSet1220.vertexCount = new MFInt32(new int[2]);
let Coordinate1221 = browser.currentScene.createNode("Coordinate");
Coordinate1221.point = new MFVec3f(new float[0,1,0,0.1987,0.8029,-0.053]);
LineSet1220.coord = Coordinate1221;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
let ColorRGBA1222 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1222.USE = "HAnimSegmentLineColorRGBA";
LineSet1220.color = ColorRGBA1222;

Shape1219.geometry = LineSet1220;

HAnimSegment1215.children[1] = Shape1219;

let HAnimSite1223 = browser.currentScene.createNode("HAnimSite");
HAnimSite1223.name = "l_metacarpal_phalanx_3_pt";
HAnimSite1223.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite1223.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1224 = browser.currentScene.createNode("TouchSensor");
TouchSensor1224.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite1223.children = new MFNode();

HAnimSite1223.children[0] = TouchSensor1224;

let Shape1225 = browser.currentScene.createNode("Shape");
Shape1225.USE = "HAnimSiteShape";
HAnimSite1223.children[1] = Shape1225;

HAnimSegment1215.children[2] = HAnimSite1223;

HAnimJoint1214.children = new MFNode();

HAnimJoint1214.children[0] = HAnimSegment1215;

let HAnimJoint1226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1226.name = "l_carpometacarpal_3";
HAnimJoint1226.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1226.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1226.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1226.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1227.name = "l_metacarpal_3";
HAnimSegment1227.DEF = "hanim_l_metacarpal_3";
let Transform1228 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1229 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1230 = browser.currentScene.createNode("Shape");
Shape1230.USE = "HAnimJointShape";
Transform1229.children = new MFNode();

Transform1229.children[0] = Shape1230;

Transform1228.children = new MFNode();

Transform1228.children[0] = Transform1229;

HAnimSegment1227.children = new MFNode();

HAnimSegment1227.children[0] = Transform1228;

let Shape1231 = browser.currentScene.createNode("Shape");
let LineSet1232 = browser.currentScene.createNode("LineSet");
LineSet1232.vertexCount = new MFInt32(new int[2]);
let Coordinate1233 = browser.currentScene.createNode("Coordinate");
Coordinate1233.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1232.coord = Coordinate1233;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
let ColorRGBA1234 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1234.USE = "HAnimSegmentLineColorRGBA";
LineSet1232.color = ColorRGBA1234;

Shape1231.geometry = LineSet1232;

HAnimSegment1227.children[1] = Shape1231;

HAnimJoint1226.children = new MFNode();

HAnimJoint1226.children[0] = HAnimSegment1227;

let HAnimJoint1235 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1235.name = "l_metacarpophalangeal_3";
HAnimJoint1235.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1235.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1235.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1235.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1236.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1236.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Transform1237 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1238 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1239 = browser.currentScene.createNode("Shape");
Shape1239.USE = "HAnimJointShape";
Transform1238.children = new MFNode();

Transform1238.children[0] = Shape1239;

Transform1237.children = new MFNode();

Transform1237.children[0] = Transform1238;

HAnimSegment1236.children = new MFNode();

HAnimSegment1236.children[0] = Transform1237;

let Shape1240 = browser.currentScene.createNode("Shape");
let LineSet1241 = browser.currentScene.createNode("LineSet");
LineSet1241.vertexCount = new MFInt32(new int[2]);
let Coordinate1242 = browser.currentScene.createNode("Coordinate");
Coordinate1242.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1241.coord = Coordinate1242;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1243 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1243.USE = "HAnimSegmentLineColorRGBA";
LineSet1241.color = ColorRGBA1243;

Shape1240.geometry = LineSet1241;

HAnimSegment1236.children[1] = Shape1240;

HAnimJoint1235.children = new MFNode();

HAnimJoint1235.children[0] = HAnimSegment1236;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1244.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1244.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1244.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1244.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1245.name = "l_carpal_middle_phalanx_3";
HAnimSegment1245.DEF = "hanim_l_carpal_middle_phalanx_3";
let Transform1246 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1247 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1248 = browser.currentScene.createNode("Shape");
Shape1248.USE = "HAnimJointShape";
Transform1247.children = new MFNode();

Transform1247.children[0] = Shape1248;

Transform1246.children = new MFNode();

Transform1246.children[0] = Transform1247;

HAnimSegment1245.children = new MFNode();

HAnimSegment1245.children[0] = Transform1246;

let Shape1249 = browser.currentScene.createNode("Shape");
let LineSet1250 = browser.currentScene.createNode("LineSet");
LineSet1250.vertexCount = new MFInt32(new int[2]);
let Coordinate1251 = browser.currentScene.createNode("Coordinate");
Coordinate1251.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1250.coord = Coordinate1251;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1252 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSegmentLineColorRGBA";
LineSet1250.color = ColorRGBA1252;

Shape1249.geometry = LineSet1250;

HAnimSegment1245.children[1] = Shape1249;

let HAnimSite1253 = browser.currentScene.createNode("HAnimSite");
HAnimSite1253.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite1253.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite1253.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1254 = browser.currentScene.createNode("TouchSensor");
TouchSensor1254.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite1253.children = new MFNode();

HAnimSite1253.children[0] = TouchSensor1254;

let Shape1255 = browser.currentScene.createNode("Shape");
Shape1255.USE = "HAnimSiteShape";
HAnimSite1253.children[1] = Shape1255;

HAnimSegment1245.children[2] = HAnimSite1253;

HAnimJoint1244.children = new MFNode();

HAnimJoint1244.children[0] = HAnimSegment1245;

let HAnimJoint1256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1256.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1256.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1256.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1256.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1244.children[1] = HAnimJoint1256;

HAnimJoint1235.children[1] = HAnimJoint1244;

HAnimJoint1226.children[1] = HAnimJoint1235;

HAnimJoint1214.children[1] = HAnimJoint1226;

HAnimJoint1116.children[3] = HAnimJoint1214;

let HAnimJoint1257 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1257.name = "l_midcarpal_4_5";
HAnimJoint1257.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1257.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1257.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1257.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1258 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1258.name = "l_hamate";
HAnimSegment1258.DEF = "hanim_l_hamate";
let Transform1259 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1260 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1261 = browser.currentScene.createNode("Shape");
Shape1261.USE = "HAnimJointShape";
Transform1260.children = new MFNode();

Transform1260.children[0] = Shape1261;

Transform1259.children = new MFNode();

Transform1259.children[0] = Transform1260;

HAnimSegment1258.children = new MFNode();

HAnimSegment1258.children[0] = Transform1259;

let Shape1262 = browser.currentScene.createNode("Shape");
let LineSet1263 = browser.currentScene.createNode("LineSet");
LineSet1263.vertexCount = new MFInt32(new int[2]);
let Coordinate1264 = browser.currentScene.createNode("Coordinate");
Coordinate1264.point = new MFVec3f(new float[0,1,0,0.1956,0.8019,-0.0794]);
LineSet1263.coord = Coordinate1264;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
let ColorRGBA1265 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1265.USE = "HAnimSegmentLineColorRGBA";
LineSet1263.color = ColorRGBA1265;

Shape1262.geometry = LineSet1263;

HAnimSegment1258.children[1] = Shape1262;

let Shape1266 = browser.currentScene.createNode("Shape");
let LineSet1267 = browser.currentScene.createNode("LineSet");
LineSet1267.vertexCount = new MFInt32(new int[2]);
let Coordinate1268 = browser.currentScene.createNode("Coordinate");
Coordinate1268.point = new MFVec3f(new float[0,1,0,0.1925,0.8066,-0.1036]);
LineSet1267.coord = Coordinate1268;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
let ColorRGBA1269 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1269.USE = "HAnimSegmentLineColorRGBA";
LineSet1267.color = ColorRGBA1269;

Shape1266.geometry = LineSet1267;

HAnimSegment1258.children[2] = Shape1266;

let HAnimSite1270 = browser.currentScene.createNode("HAnimSite");
HAnimSite1270.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1270.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1270.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor1271 = browser.currentScene.createNode("TouchSensor");
TouchSensor1271.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite1270.children = new MFNode();

HAnimSite1270.children[0] = TouchSensor1271;

let Shape1272 = browser.currentScene.createNode("Shape");
Shape1272.USE = "HAnimSiteShape";
HAnimSite1270.children[1] = Shape1272;

HAnimSegment1258.children[3] = HAnimSite1270;

HAnimJoint1257.children = new MFNode();

HAnimJoint1257.children[0] = HAnimSegment1258;

let HAnimJoint1273 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1273.name = "l_carpometacarpal_4";
HAnimJoint1273.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1273.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1273.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1273.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1274 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1274.name = "l_metacarpal_4";
HAnimSegment1274.DEF = "hanim_l_metacarpal_4";
let Transform1275 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1276 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1277 = browser.currentScene.createNode("Shape");
Shape1277.USE = "HAnimJointShape";
Transform1276.children = new MFNode();

Transform1276.children[0] = Shape1277;

Transform1275.children = new MFNode();

Transform1275.children[0] = Transform1276;

HAnimSegment1274.children = new MFNode();

HAnimSegment1274.children[0] = Transform1275;

let Shape1278 = browser.currentScene.createNode("Shape");
let LineSet1279 = browser.currentScene.createNode("LineSet");
LineSet1279.vertexCount = new MFInt32(new int[2]);
let Coordinate1280 = browser.currentScene.createNode("Coordinate");
Coordinate1280.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1279.coord = Coordinate1280;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
let ColorRGBA1281 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1281.USE = "HAnimSegmentLineColorRGBA";
LineSet1279.color = ColorRGBA1281;

Shape1278.geometry = LineSet1279;

HAnimSegment1274.children[1] = Shape1278;

HAnimJoint1273.children = new MFNode();

HAnimJoint1273.children[0] = HAnimSegment1274;

let HAnimJoint1282 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1282.name = "l_metacarpophalangeal_4";
HAnimJoint1282.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1282.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1282.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1282.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1283 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1283.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1283.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Transform1284 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1285 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1286 = browser.currentScene.createNode("Shape");
Shape1286.USE = "HAnimJointShape";
Transform1285.children = new MFNode();

Transform1285.children[0] = Shape1286;

Transform1284.children = new MFNode();

Transform1284.children[0] = Transform1285;

HAnimSegment1283.children = new MFNode();

HAnimSegment1283.children[0] = Transform1284;

let Shape1287 = browser.currentScene.createNode("Shape");
let LineSet1288 = browser.currentScene.createNode("LineSet");
LineSet1288.vertexCount = new MFInt32(new int[2]);
let Coordinate1289 = browser.currentScene.createNode("Coordinate");
Coordinate1289.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1288.coord = Coordinate1289;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1290 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1290.USE = "HAnimSegmentLineColorRGBA";
LineSet1288.color = ColorRGBA1290;

Shape1287.geometry = LineSet1288;

HAnimSegment1283.children[1] = Shape1287;

HAnimJoint1282.children = new MFNode();

HAnimJoint1282.children[0] = HAnimSegment1283;

let HAnimJoint1291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1291.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1291.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1291.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1291.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1291.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1292 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1292.name = "l_carpal_middle_phalanx_4";
HAnimSegment1292.DEF = "hanim_l_carpal_middle_phalanx_4";
let Transform1293 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1294 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1295 = browser.currentScene.createNode("Shape");
Shape1295.USE = "HAnimJointShape";
Transform1294.children = new MFNode();

Transform1294.children[0] = Shape1295;

Transform1293.children = new MFNode();

Transform1293.children[0] = Transform1294;

HAnimSegment1292.children = new MFNode();

HAnimSegment1292.children[0] = Transform1293;

let Shape1296 = browser.currentScene.createNode("Shape");
let LineSet1297 = browser.currentScene.createNode("LineSet");
LineSet1297.vertexCount = new MFInt32(new int[2]);
let Coordinate1298 = browser.currentScene.createNode("Coordinate");
Coordinate1298.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1297.coord = Coordinate1298;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1299 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1299.USE = "HAnimSegmentLineColorRGBA";
LineSet1297.color = ColorRGBA1299;

Shape1296.geometry = LineSet1297;

HAnimSegment1292.children[1] = Shape1296;

let HAnimSite1300 = browser.currentScene.createNode("HAnimSite");
HAnimSite1300.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite1300.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite1300.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1301 = browser.currentScene.createNode("TouchSensor");
TouchSensor1301.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite1300.children = new MFNode();

HAnimSite1300.children[0] = TouchSensor1301;

let Shape1302 = browser.currentScene.createNode("Shape");
Shape1302.USE = "HAnimSiteShape";
HAnimSite1300.children[1] = Shape1302;

HAnimSegment1292.children[2] = HAnimSite1300;

HAnimJoint1291.children = new MFNode();

HAnimJoint1291.children[0] = HAnimSegment1292;

let HAnimJoint1303 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1303.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1303.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1303.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1303.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1303.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1291.children[1] = HAnimJoint1303;

HAnimJoint1282.children[1] = HAnimJoint1291;

HAnimJoint1273.children[1] = HAnimJoint1282;

HAnimJoint1257.children[1] = HAnimJoint1273;

let HAnimJoint1304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1304.name = "l_carpometacarpal_5";
HAnimJoint1304.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1304.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1304.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1304.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1305.name = "l_metacarpal_5";
HAnimSegment1305.DEF = "hanim_l_metacarpal_5";
let Transform1306 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1307 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1308 = browser.currentScene.createNode("Shape");
Shape1308.USE = "HAnimJointShape";
Transform1307.children = new MFNode();

Transform1307.children[0] = Shape1308;

Transform1306.children = new MFNode();

Transform1306.children[0] = Transform1307;

HAnimSegment1305.children = new MFNode();

HAnimSegment1305.children[0] = Transform1306;

let Shape1309 = browser.currentScene.createNode("Shape");
let LineSet1310 = browser.currentScene.createNode("LineSet");
LineSet1310.vertexCount = new MFInt32(new int[2]);
let Coordinate1311 = browser.currentScene.createNode("Coordinate");
Coordinate1311.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1310.coord = Coordinate1311;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
let ColorRGBA1312 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1312.USE = "HAnimSegmentLineColorRGBA";
LineSet1310.color = ColorRGBA1312;

Shape1309.geometry = LineSet1310;

HAnimSegment1305.children[1] = Shape1309;

HAnimJoint1304.children = new MFNode();

HAnimJoint1304.children[0] = HAnimSegment1305;

let HAnimJoint1313 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1313.name = "l_metacarpophalangeal_5";
HAnimJoint1313.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1313.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1313.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1313.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1314 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1314.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1314.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Transform1315 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1316 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1317 = browser.currentScene.createNode("Shape");
Shape1317.USE = "HAnimJointShape";
Transform1316.children = new MFNode();

Transform1316.children[0] = Shape1317;

Transform1315.children = new MFNode();

Transform1315.children[0] = Transform1316;

HAnimSegment1314.children = new MFNode();

HAnimSegment1314.children[0] = Transform1315;

let Shape1318 = browser.currentScene.createNode("Shape");
let LineSet1319 = browser.currentScene.createNode("LineSet");
LineSet1319.vertexCount = new MFInt32(new int[2]);
let Coordinate1320 = browser.currentScene.createNode("Coordinate");
Coordinate1320.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1319.coord = Coordinate1320;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1321 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1321.USE = "HAnimSegmentLineColorRGBA";
LineSet1319.color = ColorRGBA1321;

Shape1318.geometry = LineSet1319;

HAnimSegment1314.children[1] = Shape1318;

HAnimJoint1313.children = new MFNode();

HAnimJoint1313.children[0] = HAnimSegment1314;

let HAnimJoint1322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1322.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1322.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1322.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1322.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1322.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1323 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1323.name = "l_carpal_middle_phalanx_5";
HAnimSegment1323.DEF = "hanim_l_carpal_middle_phalanx_5";
let Transform1324 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1325 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1326 = browser.currentScene.createNode("Shape");
Shape1326.USE = "HAnimJointShape";
Transform1325.children = new MFNode();

Transform1325.children[0] = Shape1326;

Transform1324.children = new MFNode();

Transform1324.children[0] = Transform1325;

HAnimSegment1323.children = new MFNode();

HAnimSegment1323.children[0] = Transform1324;

let Shape1327 = browser.currentScene.createNode("Shape");
let LineSet1328 = browser.currentScene.createNode("LineSet");
LineSet1328.vertexCount = new MFInt32(new int[2]);
let Coordinate1329 = browser.currentScene.createNode("Coordinate");
Coordinate1329.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1328.coord = Coordinate1329;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1330 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1330.USE = "HAnimSegmentLineColorRGBA";
LineSet1328.color = ColorRGBA1330;

Shape1327.geometry = LineSet1328;

HAnimSegment1323.children[1] = Shape1327;

let HAnimSite1331 = browser.currentScene.createNode("HAnimSite");
HAnimSite1331.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite1331.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite1331.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1332 = browser.currentScene.createNode("TouchSensor");
TouchSensor1332.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite1331.children = new MFNode();

HAnimSite1331.children[0] = TouchSensor1332;

let Shape1333 = browser.currentScene.createNode("Shape");
Shape1333.USE = "HAnimSiteShape";
HAnimSite1331.children[1] = Shape1333;

HAnimSegment1323.children[2] = HAnimSite1331;

HAnimJoint1322.children = new MFNode();

HAnimJoint1322.children[0] = HAnimSegment1323;

let HAnimJoint1334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1334.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1334.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1334.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1334.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1334.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1322.children[1] = HAnimJoint1334;

HAnimJoint1313.children[1] = HAnimJoint1322;

HAnimJoint1304.children[1] = HAnimJoint1313;

HAnimJoint1257.children[2] = HAnimJoint1304;

HAnimJoint1116.children[4] = HAnimJoint1257;

HAnimJoint1104.children[1] = HAnimJoint1116;

HAnimJoint1083.children[1] = HAnimJoint1104;

HAnimJoint1068.children[1] = HAnimJoint1083;

HAnimJoint1059.children[1] = HAnimJoint1068;

HAnimJoint854.children[2] = HAnimJoint1059;

let HAnimJoint1335 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1335.name = "r_sternoclavicular";
HAnimJoint1335.DEF = "hanim_r_sternoclavicular";
HAnimJoint1335.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint1335.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1335.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1336 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1336.name = "r_clavicle";
HAnimSegment1336.DEF = "hanim_r_clavicle";
let Transform1337 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1338 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1339 = browser.currentScene.createNode("Shape");
Shape1339.USE = "HAnimJointShape";
Transform1338.children = new MFNode();

Transform1338.children[0] = Shape1339;

Transform1337.children = new MFNode();

Transform1337.children[0] = Transform1338;

HAnimSegment1336.children = new MFNode();

HAnimSegment1336.children[0] = Transform1337;

let Shape1340 = browser.currentScene.createNode("Shape");
let LineSet1341 = browser.currentScene.createNode("LineSet");
LineSet1341.vertexCount = new MFInt32(new int[2]);
let Coordinate1342 = browser.currentScene.createNode("Coordinate");
Coordinate1342.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1341.coord = Coordinate1342;

//from r_sternoclavicular to r_acromioclavicular vertices 2
let ColorRGBA1343 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1343.USE = "HAnimSegmentLineColorRGBA";
LineSet1341.color = ColorRGBA1343;

Shape1340.geometry = LineSet1341;

HAnimSegment1336.children[1] = Shape1340;

HAnimJoint1335.children = new MFNode();

HAnimJoint1335.children[0] = HAnimSegment1336;

let HAnimJoint1344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1344.name = "r_acromioclavicular";
HAnimJoint1344.DEF = "hanim_r_acromioclavicular";
HAnimJoint1344.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint1344.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1344.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1345 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1345.name = "r_scapula";
HAnimSegment1345.DEF = "hanim_r_scapula";
let Transform1346 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1347 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1348 = browser.currentScene.createNode("Shape");
Shape1348.USE = "HAnimJointShape";
Transform1347.children = new MFNode();

Transform1347.children[0] = Shape1348;

Transform1346.children = new MFNode();

Transform1346.children[0] = Transform1347;

HAnimSegment1345.children = new MFNode();

HAnimSegment1345.children[0] = Transform1346;

let Shape1349 = browser.currentScene.createNode("Shape");
let LineSet1350 = browser.currentScene.createNode("LineSet");
LineSet1350.vertexCount = new MFInt32(new int[2]);
let Coordinate1351 = browser.currentScene.createNode("Coordinate");
Coordinate1351.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1350.coord = Coordinate1351;

//from r_acromioclavicular to r_shoulder vertices 2
let ColorRGBA1352 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1352.USE = "HAnimSegmentLineColorRGBA";
LineSet1350.color = ColorRGBA1352;

Shape1349.geometry = LineSet1350;

HAnimSegment1345.children[1] = Shape1349;

let HAnimSite1353 = browser.currentScene.createNode("HAnimSite");
HAnimSite1353.name = "r_bideltoid_pt";
HAnimSite1353.DEF = "hanim_r_bideltoid_pt";
HAnimSite1353.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1354 = browser.currentScene.createNode("TouchSensor");
TouchSensor1354.description = "HAnimSite r_bideltoid_pt";
HAnimSite1353.children = new MFNode();

HAnimSite1353.children[0] = TouchSensor1354;

let Shape1355 = browser.currentScene.createNode("Shape");
Shape1355.USE = "HAnimSiteShape";
HAnimSite1353.children[1] = Shape1355;

HAnimSegment1345.children[2] = HAnimSite1353;

let HAnimSite1356 = browser.currentScene.createNode("HAnimSite");
HAnimSite1356.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite1356.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite1356.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor1357 = browser.currentScene.createNode("TouchSensor");
TouchSensor1357.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite1356.children = new MFNode();

HAnimSite1356.children[0] = TouchSensor1357;

let Shape1358 = browser.currentScene.createNode("Shape");
Shape1358.USE = "HAnimSiteShape";
HAnimSite1356.children[1] = Shape1358;

HAnimSegment1345.children[3] = HAnimSite1356;

HAnimJoint1344.children = new MFNode();

HAnimJoint1344.children[0] = HAnimSegment1345;

let HAnimJoint1359 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1359.name = "r_shoulder";
HAnimJoint1359.DEF = "hanim_r_shoulder";
HAnimJoint1359.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint1359.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1359.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1360 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1360.name = "r_upperarm";
HAnimSegment1360.DEF = "hanim_r_upperarm";
let Transform1361 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1362 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1363 = browser.currentScene.createNode("Shape");
Shape1363.USE = "HAnimJointShape";
Transform1362.children = new MFNode();

Transform1362.children[0] = Shape1363;

Transform1361.children = new MFNode();

Transform1361.children[0] = Transform1362;

HAnimSegment1360.children = new MFNode();

HAnimSegment1360.children[0] = Transform1361;

let Shape1364 = browser.currentScene.createNode("Shape");
let LineSet1365 = browser.currentScene.createNode("LineSet");
LineSet1365.vertexCount = new MFInt32(new int[2]);
let Coordinate1366 = browser.currentScene.createNode("Coordinate");
Coordinate1366.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1365.coord = Coordinate1366;

//from r_shoulder to r_elbow vertices 2
let ColorRGBA1367 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1367.USE = "HAnimSegmentLineColorRGBA";
LineSet1365.color = ColorRGBA1367;

Shape1364.geometry = LineSet1365;

HAnimSegment1360.children[1] = Shape1364;

let HAnimSite1368 = browser.currentScene.createNode("HAnimSite");
HAnimSite1368.name = "r_humeral_medial_epicondyles_pt";
HAnimSite1368.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite1368.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor1369 = browser.currentScene.createNode("TouchSensor");
TouchSensor1369.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite1368.children = new MFNode();

HAnimSite1368.children[0] = TouchSensor1369;

let Shape1370 = browser.currentScene.createNode("Shape");
Shape1370.USE = "HAnimSiteShape";
HAnimSite1368.children[1] = Shape1370;

HAnimSegment1360.children[2] = HAnimSite1368;

let HAnimSite1371 = browser.currentScene.createNode("HAnimSite");
HAnimSite1371.name = "r_olecranon_pt";
HAnimSite1371.DEF = "hanim_r_olecranon_pt";
HAnimSite1371.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor1372 = browser.currentScene.createNode("TouchSensor");
TouchSensor1372.description = "HAnimSite r_olecranon_pt";
HAnimSite1371.children = new MFNode();

HAnimSite1371.children[0] = TouchSensor1372;

let Shape1373 = browser.currentScene.createNode("Shape");
Shape1373.USE = "HAnimSiteShape";
HAnimSite1371.children[1] = Shape1373;

HAnimSegment1360.children[3] = HAnimSite1371;

let HAnimSite1374 = browser.currentScene.createNode("HAnimSite");
HAnimSite1374.name = "r_radial_styloid_pt";
HAnimSite1374.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1374.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor1375 = browser.currentScene.createNode("TouchSensor");
TouchSensor1375.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1374.children = new MFNode();

HAnimSite1374.children[0] = TouchSensor1375;

let Shape1376 = browser.currentScene.createNode("Shape");
Shape1376.USE = "HAnimSiteShape";
HAnimSite1374.children[1] = Shape1376;

HAnimSegment1360.children[4] = HAnimSite1374;

let HAnimSite1377 = browser.currentScene.createNode("HAnimSite");
HAnimSite1377.name = "r_radiale_pt";
HAnimSite1377.DEF = "hanim_r_radiale_pt";
HAnimSite1377.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor1378 = browser.currentScene.createNode("TouchSensor");
TouchSensor1378.description = "HAnimSite r_radiale_pt";
HAnimSite1377.children = new MFNode();

HAnimSite1377.children[0] = TouchSensor1378;

let Shape1379 = browser.currentScene.createNode("Shape");
Shape1379.USE = "HAnimSiteShape";
HAnimSite1377.children[1] = Shape1379;

HAnimSegment1360.children[5] = HAnimSite1377;

HAnimJoint1359.children = new MFNode();

HAnimJoint1359.children[0] = HAnimSegment1360;

let HAnimJoint1380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1380.name = "r_elbow";
HAnimJoint1380.DEF = "hanim_r_elbow";
HAnimJoint1380.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint1380.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1380.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1381 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1381.name = "r_forearm";
HAnimSegment1381.DEF = "hanim_r_forearm";
let Transform1382 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1383 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1384 = browser.currentScene.createNode("Shape");
Shape1384.USE = "HAnimJointShape";
Transform1383.children = new MFNode();

Transform1383.children[0] = Shape1384;

Transform1382.children = new MFNode();

Transform1382.children[0] = Transform1383;

HAnimSegment1381.children = new MFNode();

HAnimSegment1381.children[0] = Transform1382;

let Shape1385 = browser.currentScene.createNode("Shape");
let LineSet1386 = browser.currentScene.createNode("LineSet");
LineSet1386.vertexCount = new MFInt32(new int[2]);
let Coordinate1387 = browser.currentScene.createNode("Coordinate");
Coordinate1387.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1386.coord = Coordinate1387;

//from r_elbow to r_radiocarpal vertices 2
let ColorRGBA1388 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1388.USE = "HAnimSegmentLineColorRGBA";
LineSet1386.color = ColorRGBA1388;

Shape1385.geometry = LineSet1386;

HAnimSegment1381.children[1] = Shape1385;

let HAnimSite1389 = browser.currentScene.createNode("HAnimSite");
HAnimSite1389.name = "r_ulnar_styloid_pt";
HAnimSite1389.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1389.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor1390 = browser.currentScene.createNode("TouchSensor");
TouchSensor1390.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1389.children = new MFNode();

HAnimSite1389.children[0] = TouchSensor1390;

let Shape1391 = browser.currentScene.createNode("Shape");
Shape1391.USE = "HAnimSiteShape";
HAnimSite1389.children[1] = Shape1391;

HAnimSegment1381.children[2] = HAnimSite1389;

HAnimJoint1380.children = new MFNode();

HAnimJoint1380.children[0] = HAnimSegment1381;

let HAnimJoint1392 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1392.name = "r_radiocarpal";
HAnimJoint1392.DEF = "hanim_r_radiocarpal";
HAnimJoint1392.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint1392.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1392.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1393 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1393.name = "r_carpal";
HAnimSegment1393.DEF = "hanim_r_carpal";
let Transform1394 = browser.currentScene.createNode("Transform");
Transform1394.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1394.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1394.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
let Transform1395 = browser.currentScene.createNode("Transform");
Transform1395.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
let Shape1396 = browser.currentScene.createNode("Shape");
Shape1396.USE = "HAnimJointShape";
Transform1395.children = new MFNode();

Transform1395.children[0] = Shape1396;

Transform1394.children = new MFNode();

Transform1394.children[0] = Transform1395;

HAnimSegment1393.children = new MFNode();

HAnimSegment1393.children[0] = Transform1394;

let Shape1397 = browser.currentScene.createNode("Shape");
let LineSet1398 = browser.currentScene.createNode("LineSet");
LineSet1398.vertexCount = new MFInt32(new int[2]);
let Coordinate1399 = browser.currentScene.createNode("Coordinate");
Coordinate1399.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1398.coord = Coordinate1399;

//from r_radiocarpal to r_midcarpal_1 vertices 2
let ColorRGBA1400 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1400.USE = "HAnimSegmentLineColorRGBA";
LineSet1398.color = ColorRGBA1400;

Shape1397.geometry = LineSet1398;

HAnimSegment1393.children[1] = Shape1397;

let Shape1401 = browser.currentScene.createNode("Shape");
let LineSet1402 = browser.currentScene.createNode("LineSet");
LineSet1402.vertexCount = new MFInt32(new int[2]);
let Coordinate1403 = browser.currentScene.createNode("Coordinate");
Coordinate1403.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1402.coord = Coordinate1403;

//from r_radiocarpal to r_midcarpal_2 vertices 2
let ColorRGBA1404 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1404.USE = "HAnimSegmentLineColorRGBA";
LineSet1402.color = ColorRGBA1404;

Shape1401.geometry = LineSet1402;

HAnimSegment1393.children[2] = Shape1401;

let Shape1405 = browser.currentScene.createNode("Shape");
let LineSet1406 = browser.currentScene.createNode("LineSet");
LineSet1406.vertexCount = new MFInt32(new int[2]);
let Coordinate1407 = browser.currentScene.createNode("Coordinate");
Coordinate1407.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1406.coord = Coordinate1407;

//from r_radiocarpal to r_midcarpal_3 vertices 2
let ColorRGBA1408 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1408.USE = "HAnimSegmentLineColorRGBA";
LineSet1406.color = ColorRGBA1408;

Shape1405.geometry = LineSet1406;

HAnimSegment1393.children[3] = Shape1405;

let Shape1409 = browser.currentScene.createNode("Shape");
let LineSet1410 = browser.currentScene.createNode("LineSet");
LineSet1410.vertexCount = new MFInt32(new int[2]);
let Coordinate1411 = browser.currentScene.createNode("Coordinate");
Coordinate1411.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1410.coord = Coordinate1411;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
let ColorRGBA1412 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1412.USE = "HAnimSegmentLineColorRGBA";
LineSet1410.color = ColorRGBA1412;

Shape1409.geometry = LineSet1410;

HAnimSegment1393.children[4] = Shape1409;

HAnimJoint1392.children = new MFNode();

HAnimJoint1392.children[0] = HAnimSegment1393;

let HAnimJoint1413 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1413.name = "r_midcarpal_1";
HAnimJoint1413.DEF = "hanim_r_midcarpal_1";
HAnimJoint1413.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1413.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1413.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1414 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1414.name = "r_trapezium";
HAnimSegment1414.DEF = "hanim_r_trapezium";
let Transform1415 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1416 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1417 = browser.currentScene.createNode("Shape");
Shape1417.USE = "HAnimJointShape";
Transform1416.children = new MFNode();

Transform1416.children[0] = Shape1417;

Transform1415.children = new MFNode();

Transform1415.children[0] = Transform1416;

HAnimSegment1414.children = new MFNode();

HAnimSegment1414.children[0] = Transform1415;

let Shape1418 = browser.currentScene.createNode("Shape");
let LineSet1419 = browser.currentScene.createNode("LineSet");
LineSet1419.vertexCount = new MFInt32(new int[2]);
let Coordinate1420 = browser.currentScene.createNode("Coordinate");
Coordinate1420.point = new MFVec3f(new float[0,1,0,-0.1899,0.8502,-0.0473]);
LineSet1419.coord = Coordinate1420;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
let ColorRGBA1421 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1421.USE = "HAnimSegmentLineColorRGBA";
LineSet1419.color = ColorRGBA1421;

Shape1418.geometry = LineSet1419;

HAnimSegment1414.children[1] = Shape1418;

HAnimJoint1413.children = new MFNode();

HAnimJoint1413.children[0] = HAnimSegment1414;

let HAnimJoint1422 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1422.name = "r_carpometacarpal_1";
HAnimJoint1422.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1422.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1422.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1422.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1423 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1423.name = "r_metacarpal_1";
HAnimSegment1423.DEF = "hanim_r_metacarpal_1";
let Transform1424 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1425 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1426 = browser.currentScene.createNode("Shape");
Shape1426.USE = "HAnimJointShape";
Transform1425.children = new MFNode();

Transform1425.children[0] = Shape1426;

Transform1424.children = new MFNode();

Transform1424.children[0] = Transform1425;

HAnimSegment1423.children = new MFNode();

HAnimSegment1423.children[0] = Transform1424;

let Shape1427 = browser.currentScene.createNode("Shape");
let LineSet1428 = browser.currentScene.createNode("LineSet");
LineSet1428.vertexCount = new MFInt32(new int[2]);
let Coordinate1429 = browser.currentScene.createNode("Coordinate");
Coordinate1429.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1428.coord = Coordinate1429;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
let ColorRGBA1430 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1430.USE = "HAnimSegmentLineColorRGBA";
LineSet1428.color = ColorRGBA1430;

Shape1427.geometry = LineSet1428;

HAnimSegment1423.children[1] = Shape1427;

HAnimJoint1422.children = new MFNode();

HAnimJoint1422.children[0] = HAnimSegment1423;

let HAnimJoint1431 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1431.name = "r_metacarpophalangeal_1";
HAnimJoint1431.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1431.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1431.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1431.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1432 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1432.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1432.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Transform1433 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1434 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1435 = browser.currentScene.createNode("Shape");
Shape1435.USE = "HAnimJointShape";
Transform1434.children = new MFNode();

Transform1434.children[0] = Shape1435;

Transform1433.children = new MFNode();

Transform1433.children[0] = Transform1434;

HAnimSegment1432.children = new MFNode();

HAnimSegment1432.children[0] = Transform1433;

let Shape1436 = browser.currentScene.createNode("Shape");
let LineSet1437 = browser.currentScene.createNode("LineSet");
LineSet1437.vertexCount = new MFInt32(new int[2]);
let Coordinate1438 = browser.currentScene.createNode("Coordinate");
Coordinate1438.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1437.coord = Coordinate1438;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
let ColorRGBA1439 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1439.USE = "HAnimSegmentLineColorRGBA";
LineSet1437.color = ColorRGBA1439;

Shape1436.geometry = LineSet1437;

HAnimSegment1432.children[1] = Shape1436;

let HAnimSite1440 = browser.currentScene.createNode("HAnimSite");
HAnimSite1440.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1440.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite1440.translation = new SFVec3f(new float[-0.35,0.4,0]);
let TouchSensor1441 = browser.currentScene.createNode("TouchSensor");
TouchSensor1441.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1440.children = new MFNode();

HAnimSite1440.children[0] = TouchSensor1441;

let Shape1442 = browser.currentScene.createNode("Shape");
Shape1442.USE = "HAnimSiteShape";
HAnimSite1440.children[1] = Shape1442;

HAnimSegment1432.children[2] = HAnimSite1440;

HAnimJoint1431.children = new MFNode();

HAnimJoint1431.children[0] = HAnimSegment1432;

let HAnimJoint1443 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1443.name = "r_carpal_interphalangeal_1";
HAnimJoint1443.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1443.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1443.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1443.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1431.children[1] = HAnimJoint1443;

HAnimJoint1422.children[1] = HAnimJoint1431;

HAnimJoint1413.children[1] = HAnimJoint1422;

HAnimJoint1392.children[1] = HAnimJoint1413;

let HAnimJoint1444 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1444.name = "r_midcarpal_2";
HAnimJoint1444.DEF = "hanim_r_midcarpal_2";
HAnimJoint1444.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1444.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1444.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1445 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1445.name = "r_trapezoid";
HAnimSegment1445.DEF = "hanim_r_trapezoid";
let Transform1446 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1447 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1448 = browser.currentScene.createNode("Shape");
Shape1448.USE = "HAnimJointShape";
Transform1447.children = new MFNode();

Transform1447.children[0] = Shape1448;

Transform1446.children = new MFNode();

Transform1446.children[0] = Transform1447;

HAnimSegment1445.children = new MFNode();

HAnimSegment1445.children[0] = Transform1446;

let Shape1449 = browser.currentScene.createNode("Shape");
let LineSet1450 = browser.currentScene.createNode("LineSet");
LineSet1450.vertexCount = new MFInt32(new int[2]);
let Coordinate1451 = browser.currentScene.createNode("Coordinate");
Coordinate1451.point = new MFVec3f(new float[0,1,0,-0.1961,0.8055,-0.0218]);
LineSet1450.coord = Coordinate1451;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
let ColorRGBA1452 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1452.USE = "HAnimSegmentLineColorRGBA";
LineSet1450.color = ColorRGBA1452;

Shape1449.geometry = LineSet1450;

HAnimSegment1445.children[1] = Shape1449;

let HAnimSite1453 = browser.currentScene.createNode("HAnimSite");
HAnimSite1453.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1453.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1453.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor1454 = browser.currentScene.createNode("TouchSensor");
TouchSensor1454.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1453.children = new MFNode();

HAnimSite1453.children[0] = TouchSensor1454;

let Shape1455 = browser.currentScene.createNode("Shape");
Shape1455.USE = "HAnimSiteShape";
HAnimSite1453.children[1] = Shape1455;

HAnimSegment1445.children[2] = HAnimSite1453;

HAnimJoint1444.children = new MFNode();

HAnimJoint1444.children[0] = HAnimSegment1445;

let HAnimJoint1456 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1456.name = "r_carpometacarpal_2";
HAnimJoint1456.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1456.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1456.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1456.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1457 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1457.name = "r_metacarpal_2";
HAnimSegment1457.DEF = "hanim_r_metacarpal_2";
let Transform1458 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1459 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1460 = browser.currentScene.createNode("Shape");
Shape1460.USE = "HAnimJointShape";
Transform1459.children = new MFNode();

Transform1459.children[0] = Shape1460;

Transform1458.children = new MFNode();

Transform1458.children[0] = Transform1459;

HAnimSegment1457.children = new MFNode();

HAnimSegment1457.children[0] = Transform1458;

let Shape1461 = browser.currentScene.createNode("Shape");
let LineSet1462 = browser.currentScene.createNode("LineSet");
LineSet1462.vertexCount = new MFInt32(new int[2]);
let Coordinate1463 = browser.currentScene.createNode("Coordinate");
Coordinate1463.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1462.coord = Coordinate1463;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
let ColorRGBA1464 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1464.USE = "HAnimSegmentLineColorRGBA";
LineSet1462.color = ColorRGBA1464;

Shape1461.geometry = LineSet1462;

HAnimSegment1457.children[1] = Shape1461;

HAnimJoint1456.children = new MFNode();

HAnimJoint1456.children[0] = HAnimSegment1457;

let HAnimJoint1465 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1465.name = "r_metacarpophalangeal_2";
HAnimJoint1465.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1465.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1465.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1465.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1466 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1466.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1466.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Transform1467 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1468 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1469 = browser.currentScene.createNode("Shape");
Shape1469.USE = "HAnimJointShape";
Transform1468.children = new MFNode();

Transform1468.children[0] = Shape1469;

Transform1467.children = new MFNode();

Transform1467.children[0] = Transform1468;

HAnimSegment1466.children = new MFNode();

HAnimSegment1466.children[0] = Transform1467;

let Shape1470 = browser.currentScene.createNode("Shape");
let LineSet1471 = browser.currentScene.createNode("LineSet");
LineSet1471.vertexCount = new MFInt32(new int[2]);
let Coordinate1472 = browser.currentScene.createNode("Coordinate");
Coordinate1472.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1471.coord = Coordinate1472;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
let ColorRGBA1473 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1473.USE = "HAnimSegmentLineColorRGBA";
LineSet1471.color = ColorRGBA1473;

Shape1470.geometry = LineSet1471;

HAnimSegment1466.children[1] = Shape1470;

HAnimJoint1465.children = new MFNode();

HAnimJoint1465.children[0] = HAnimSegment1466;

let HAnimJoint1474 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1474.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1474.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1474.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1474.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1474.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1475 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1475.name = "r_carpal_middle_phalanx_2";
HAnimSegment1475.DEF = "hanim_r_carpal_middle_phalanx_2";
let Transform1476 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1477 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1478 = browser.currentScene.createNode("Shape");
Shape1478.USE = "HAnimJointShape";
Transform1477.children = new MFNode();

Transform1477.children[0] = Shape1478;

Transform1476.children = new MFNode();

Transform1476.children[0] = Transform1477;

HAnimSegment1475.children = new MFNode();

HAnimSegment1475.children[0] = Transform1476;

let Shape1479 = browser.currentScene.createNode("Shape");
let LineSet1480 = browser.currentScene.createNode("LineSet");
LineSet1480.vertexCount = new MFInt32(new int[2]);
let Coordinate1481 = browser.currentScene.createNode("Coordinate");
Coordinate1481.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1480.coord = Coordinate1481;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
let ColorRGBA1482 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1482.USE = "HAnimSegmentLineColorRGBA";
LineSet1480.color = ColorRGBA1482;

Shape1479.geometry = LineSet1480;

HAnimSegment1475.children[1] = Shape1479;

let HAnimSite1483 = browser.currentScene.createNode("HAnimSite");
HAnimSite1483.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1483.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite1483.translation = new SFVec3f(new float[-0.24,0.87,0]);
let TouchSensor1484 = browser.currentScene.createNode("TouchSensor");
TouchSensor1484.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1483.children = new MFNode();

HAnimSite1483.children[0] = TouchSensor1484;

let Shape1485 = browser.currentScene.createNode("Shape");
Shape1485.USE = "HAnimSiteShape";
HAnimSite1483.children[1] = Shape1485;

HAnimSegment1475.children[2] = HAnimSite1483;

let HAnimSite1486 = browser.currentScene.createNode("HAnimSite");
HAnimSite1486.name = "r_dactylion_pt";
HAnimSite1486.DEF = "hanim_r_dactylion_pt";
HAnimSite1486.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor1487 = browser.currentScene.createNode("TouchSensor");
TouchSensor1487.description = "HAnimSite r_dactylion_pt";
HAnimSite1486.children = new MFNode();

HAnimSite1486.children[0] = TouchSensor1487;

let Shape1488 = browser.currentScene.createNode("Shape");
Shape1488.USE = "HAnimSiteShape";
HAnimSite1486.children[1] = Shape1488;

HAnimSegment1475.children[3] = HAnimSite1486;

HAnimJoint1474.children = new MFNode();

HAnimJoint1474.children[0] = HAnimSegment1475;

let HAnimJoint1489 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1489.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1489.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1489.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1489.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1489.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1474.children[1] = HAnimJoint1489;

HAnimJoint1465.children[1] = HAnimJoint1474;

HAnimJoint1456.children[1] = HAnimJoint1465;

HAnimJoint1444.children[1] = HAnimJoint1456;

HAnimJoint1392.children[2] = HAnimJoint1444;

let HAnimJoint1490 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1490.name = "r_midcarpal_3";
HAnimJoint1490.DEF = "hanim_r_midcarpal_3";
HAnimJoint1490.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1490.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1490.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1491 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1491.name = "r_capitate";
HAnimSegment1491.DEF = "hanim_r_capitate";
let Transform1492 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1493 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1494 = browser.currentScene.createNode("Shape");
Shape1494.USE = "HAnimJointShape";
Transform1493.children = new MFNode();

Transform1493.children[0] = Shape1494;

Transform1492.children = new MFNode();

Transform1492.children[0] = Transform1493;

HAnimSegment1491.children = new MFNode();

HAnimSegment1491.children[0] = Transform1492;

let Shape1495 = browser.currentScene.createNode("Shape");
let LineSet1496 = browser.currentScene.createNode("LineSet");
LineSet1496.vertexCount = new MFInt32(new int[2]);
let Coordinate1497 = browser.currentScene.createNode("Coordinate");
Coordinate1497.point = new MFVec3f(new float[0,1,0,-0.1972,0.806,-0.0468]);
LineSet1496.coord = Coordinate1497;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
let ColorRGBA1498 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1498.USE = "HAnimSegmentLineColorRGBA";
LineSet1496.color = ColorRGBA1498;

Shape1495.geometry = LineSet1496;

HAnimSegment1491.children[1] = Shape1495;

let HAnimSite1499 = browser.currentScene.createNode("HAnimSite");
HAnimSite1499.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1499.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite1499.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor1500 = browser.currentScene.createNode("TouchSensor");
TouchSensor1500.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1499.children = new MFNode();

HAnimSite1499.children[0] = TouchSensor1500;

let Shape1501 = browser.currentScene.createNode("Shape");
Shape1501.USE = "HAnimSiteShape";
HAnimSite1499.children[1] = Shape1501;

HAnimSegment1491.children[2] = HAnimSite1499;

HAnimJoint1490.children = new MFNode();

HAnimJoint1490.children[0] = HAnimSegment1491;

let HAnimJoint1502 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1502.name = "r_carpometacarpal_3";
HAnimJoint1502.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1502.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1502.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1502.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1503.name = "r_metacarpal_3";
HAnimSegment1503.DEF = "hanim_r_metacarpal_3";
let Transform1504 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1505 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1506 = browser.currentScene.createNode("Shape");
Shape1506.USE = "HAnimJointShape";
Transform1505.children = new MFNode();

Transform1505.children[0] = Shape1506;

Transform1504.children = new MFNode();

Transform1504.children[0] = Transform1505;

HAnimSegment1503.children = new MFNode();

HAnimSegment1503.children[0] = Transform1504;

let Shape1507 = browser.currentScene.createNode("Shape");
let LineSet1508 = browser.currentScene.createNode("LineSet");
LineSet1508.vertexCount = new MFInt32(new int[2]);
let Coordinate1509 = browser.currentScene.createNode("Coordinate");
Coordinate1509.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1508.coord = Coordinate1509;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
let ColorRGBA1510 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1510.USE = "HAnimSegmentLineColorRGBA";
LineSet1508.color = ColorRGBA1510;

Shape1507.geometry = LineSet1508;

HAnimSegment1503.children[1] = Shape1507;

HAnimJoint1502.children = new MFNode();

HAnimJoint1502.children[0] = HAnimSegment1503;

let HAnimJoint1511 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1511.name = "r_metacarpophalangeal_3";
HAnimJoint1511.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1511.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1511.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1511.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1512.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1512.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Transform1513 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1514 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1515 = browser.currentScene.createNode("Shape");
Shape1515.USE = "HAnimJointShape";
Transform1514.children = new MFNode();

Transform1514.children[0] = Shape1515;

Transform1513.children = new MFNode();

Transform1513.children[0] = Transform1514;

HAnimSegment1512.children = new MFNode();

HAnimSegment1512.children[0] = Transform1513;

let Shape1516 = browser.currentScene.createNode("Shape");
let LineSet1517 = browser.currentScene.createNode("LineSet");
LineSet1517.vertexCount = new MFInt32(new int[2]);
let Coordinate1518 = browser.currentScene.createNode("Coordinate");
Coordinate1518.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1517.coord = Coordinate1518;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
let ColorRGBA1519 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1519.USE = "HAnimSegmentLineColorRGBA";
LineSet1517.color = ColorRGBA1519;

Shape1516.geometry = LineSet1517;

HAnimSegment1512.children[1] = Shape1516;

HAnimJoint1511.children = new MFNode();

HAnimJoint1511.children[0] = HAnimSegment1512;

let HAnimJoint1520 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1520.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1520.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1520.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1520.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1520.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1521 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1521.name = "r_carpal_middle_phalanx_3";
HAnimSegment1521.DEF = "hanim_r_carpal_middle_phalanx_3";
let Transform1522 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1523 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1524 = browser.currentScene.createNode("Shape");
Shape1524.USE = "HAnimJointShape";
Transform1523.children = new MFNode();

Transform1523.children[0] = Shape1524;

Transform1522.children = new MFNode();

Transform1522.children[0] = Transform1523;

HAnimSegment1521.children = new MFNode();

HAnimSegment1521.children[0] = Transform1522;

let Shape1525 = browser.currentScene.createNode("Shape");
let LineSet1526 = browser.currentScene.createNode("LineSet");
LineSet1526.vertexCount = new MFInt32(new int[2]);
let Coordinate1527 = browser.currentScene.createNode("Coordinate");
Coordinate1527.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1526.coord = Coordinate1527;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
let ColorRGBA1528 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1528.USE = "HAnimSegmentLineColorRGBA";
LineSet1526.color = ColorRGBA1528;

Shape1525.geometry = LineSet1526;

HAnimSegment1521.children[1] = Shape1525;

let HAnimSite1529 = browser.currentScene.createNode("HAnimSite");
HAnimSite1529.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1529.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite1529.translation = new SFVec3f(new float[-0.08,0.96,0]);
let TouchSensor1530 = browser.currentScene.createNode("TouchSensor");
TouchSensor1530.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1529.children = new MFNode();

HAnimSite1529.children[0] = TouchSensor1530;

let Shape1531 = browser.currentScene.createNode("Shape");
Shape1531.USE = "HAnimSiteShape";
HAnimSite1529.children[1] = Shape1531;

HAnimSegment1521.children[2] = HAnimSite1529;

HAnimJoint1520.children = new MFNode();

HAnimJoint1520.children[0] = HAnimSegment1521;

let HAnimJoint1532 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1532.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1532.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1532.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1532.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1532.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1520.children[1] = HAnimJoint1532;

HAnimJoint1511.children[1] = HAnimJoint1520;

HAnimJoint1502.children[1] = HAnimJoint1511;

HAnimJoint1490.children[1] = HAnimJoint1502;

HAnimJoint1392.children[3] = HAnimJoint1490;

let HAnimJoint1533 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1533.name = "r_midcarpal_4_5";
HAnimJoint1533.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1533.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1533.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1533.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1534 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1534.name = "r_hamate";
HAnimSegment1534.DEF = "hanim_r_hamate";
let Transform1535 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1536 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1537 = browser.currentScene.createNode("Shape");
Shape1537.USE = "HAnimJointShape";
Transform1536.children = new MFNode();

Transform1536.children[0] = Shape1537;

Transform1535.children = new MFNode();

Transform1535.children[0] = Transform1536;

HAnimSegment1534.children = new MFNode();

HAnimSegment1534.children[0] = Transform1535;

let Shape1538 = browser.currentScene.createNode("Shape");
let LineSet1539 = browser.currentScene.createNode("LineSet");
LineSet1539.vertexCount = new MFInt32(new int[2]);
let Coordinate1540 = browser.currentScene.createNode("Coordinate");
Coordinate1540.point = new MFVec3f(new float[0,1,0,-0.1951,0.8049,-0.0732]);
LineSet1539.coord = Coordinate1540;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
let ColorRGBA1541 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1541.USE = "HAnimSegmentLineColorRGBA";
LineSet1539.color = ColorRGBA1541;

Shape1538.geometry = LineSet1539;

HAnimSegment1534.children[1] = Shape1538;

let Shape1542 = browser.currentScene.createNode("Shape");
let LineSet1543 = browser.currentScene.createNode("LineSet");
LineSet1543.vertexCount = new MFInt32(new int[2]);
let Coordinate1544 = browser.currentScene.createNode("Coordinate");
Coordinate1544.point = new MFVec3f(new float[0,1,0,-0.1926,0.8096,-0.0975]);
LineSet1543.coord = Coordinate1544;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
let ColorRGBA1545 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1545.USE = "HAnimSegmentLineColorRGBA";
LineSet1543.color = ColorRGBA1545;

Shape1542.geometry = LineSet1543;

HAnimSegment1534.children[2] = Shape1542;

let HAnimSite1546 = browser.currentScene.createNode("HAnimSite");
HAnimSite1546.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1546.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1546.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor1547 = browser.currentScene.createNode("TouchSensor");
TouchSensor1547.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1546.children = new MFNode();

HAnimSite1546.children[0] = TouchSensor1547;

let Shape1548 = browser.currentScene.createNode("Shape");
Shape1548.USE = "HAnimSiteShape";
HAnimSite1546.children[1] = Shape1548;

HAnimSegment1534.children[3] = HAnimSite1546;

HAnimJoint1533.children = new MFNode();

HAnimJoint1533.children[0] = HAnimSegment1534;

let HAnimJoint1549 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1549.name = "r_carpometacarpal_4";
HAnimJoint1549.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1549.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1549.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1549.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1550 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1550.name = "r_metacarpal_4";
HAnimSegment1550.DEF = "hanim_r_metacarpal_4";
let Transform1551 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1552 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1553 = browser.currentScene.createNode("Shape");
Shape1553.USE = "HAnimJointShape";
Transform1552.children = new MFNode();

Transform1552.children[0] = Shape1553;

Transform1551.children = new MFNode();

Transform1551.children[0] = Transform1552;

HAnimSegment1550.children = new MFNode();

HAnimSegment1550.children[0] = Transform1551;

let Shape1554 = browser.currentScene.createNode("Shape");
let LineSet1555 = browser.currentScene.createNode("LineSet");
LineSet1555.vertexCount = new MFInt32(new int[2]);
let Coordinate1556 = browser.currentScene.createNode("Coordinate");
Coordinate1556.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1555.coord = Coordinate1556;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
let ColorRGBA1557 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1557.USE = "HAnimSegmentLineColorRGBA";
LineSet1555.color = ColorRGBA1557;

Shape1554.geometry = LineSet1555;

HAnimSegment1550.children[1] = Shape1554;

HAnimJoint1549.children = new MFNode();

HAnimJoint1549.children[0] = HAnimSegment1550;

let HAnimJoint1558 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1558.name = "r_metacarpophalangeal_4";
HAnimJoint1558.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1558.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1558.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1558.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1559 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1559.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1559.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Transform1560 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1561 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1562 = browser.currentScene.createNode("Shape");
Shape1562.USE = "HAnimJointShape";
Transform1561.children = new MFNode();

Transform1561.children[0] = Shape1562;

Transform1560.children = new MFNode();

Transform1560.children[0] = Transform1561;

HAnimSegment1559.children = new MFNode();

HAnimSegment1559.children[0] = Transform1560;

let Shape1563 = browser.currentScene.createNode("Shape");
let LineSet1564 = browser.currentScene.createNode("LineSet");
LineSet1564.vertexCount = new MFInt32(new int[2]);
let Coordinate1565 = browser.currentScene.createNode("Coordinate");
Coordinate1565.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1564.coord = Coordinate1565;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
let ColorRGBA1566 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1566.USE = "HAnimSegmentLineColorRGBA";
LineSet1564.color = ColorRGBA1566;

Shape1563.geometry = LineSet1564;

HAnimSegment1559.children[1] = Shape1563;

HAnimJoint1558.children = new MFNode();

HAnimJoint1558.children[0] = HAnimSegment1559;

let HAnimJoint1567 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1567.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1567.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1567.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1567.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1567.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1568 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1568.name = "r_carpal_middle_phalanx_4";
HAnimSegment1568.DEF = "hanim_r_carpal_middle_phalanx_4";
let Transform1569 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1570 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1571 = browser.currentScene.createNode("Shape");
Shape1571.USE = "HAnimJointShape";
Transform1570.children = new MFNode();

Transform1570.children[0] = Shape1571;

Transform1569.children = new MFNode();

Transform1569.children[0] = Transform1570;

HAnimSegment1568.children = new MFNode();

HAnimSegment1568.children[0] = Transform1569;

let Shape1572 = browser.currentScene.createNode("Shape");
let LineSet1573 = browser.currentScene.createNode("LineSet");
LineSet1573.vertexCount = new MFInt32(new int[2]);
let Coordinate1574 = browser.currentScene.createNode("Coordinate");
Coordinate1574.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1573.coord = Coordinate1574;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
let ColorRGBA1575 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1575.USE = "HAnimSegmentLineColorRGBA";
LineSet1573.color = ColorRGBA1575;

Shape1572.geometry = LineSet1573;

HAnimSegment1568.children[1] = Shape1572;

let HAnimSite1576 = browser.currentScene.createNode("HAnimSite");
HAnimSite1576.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1576.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite1576.translation = new SFVec3f(new float[0.1,0.93,0]);
let TouchSensor1577 = browser.currentScene.createNode("TouchSensor");
TouchSensor1577.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1576.children = new MFNode();

HAnimSite1576.children[0] = TouchSensor1577;

let Shape1578 = browser.currentScene.createNode("Shape");
Shape1578.USE = "HAnimSiteShape";
HAnimSite1576.children[1] = Shape1578;

HAnimSegment1568.children[2] = HAnimSite1576;

HAnimJoint1567.children = new MFNode();

HAnimJoint1567.children[0] = HAnimSegment1568;

let HAnimJoint1579 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1579.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1579.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1579.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1579.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1579.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1567.children[1] = HAnimJoint1579;

HAnimJoint1558.children[1] = HAnimJoint1567;

HAnimJoint1549.children[1] = HAnimJoint1558;

HAnimJoint1533.children[1] = HAnimJoint1549;

let HAnimJoint1580 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1580.name = "r_carpometacarpal_5";
HAnimJoint1580.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1580.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1580.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1580.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1581 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1581.name = "r_metacarpal_5";
HAnimSegment1581.DEF = "hanim_r_metacarpal_5";
let Transform1582 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1583 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1584 = browser.currentScene.createNode("Shape");
Shape1584.USE = "HAnimJointShape";
Transform1583.children = new MFNode();

Transform1583.children[0] = Shape1584;

Transform1582.children = new MFNode();

Transform1582.children[0] = Transform1583;

HAnimSegment1581.children = new MFNode();

HAnimSegment1581.children[0] = Transform1582;

let Shape1585 = browser.currentScene.createNode("Shape");
let LineSet1586 = browser.currentScene.createNode("LineSet");
LineSet1586.vertexCount = new MFInt32(new int[2]);
let Coordinate1587 = browser.currentScene.createNode("Coordinate");
Coordinate1587.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1586.coord = Coordinate1587;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
let ColorRGBA1588 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1588.USE = "HAnimSegmentLineColorRGBA";
LineSet1586.color = ColorRGBA1588;

Shape1585.geometry = LineSet1586;

HAnimSegment1581.children[1] = Shape1585;

HAnimJoint1580.children = new MFNode();

HAnimJoint1580.children[0] = HAnimSegment1581;

let HAnimJoint1589 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1589.name = "r_metacarpophalangeal_5";
HAnimJoint1589.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1589.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1589.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1589.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1590 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1590.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1590.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Transform1591 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1592 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1593 = browser.currentScene.createNode("Shape");
Shape1593.USE = "HAnimJointShape";
Transform1592.children = new MFNode();

Transform1592.children[0] = Shape1593;

Transform1591.children = new MFNode();

Transform1591.children[0] = Transform1592;

HAnimSegment1590.children = new MFNode();

HAnimSegment1590.children[0] = Transform1591;

let Shape1594 = browser.currentScene.createNode("Shape");
let LineSet1595 = browser.currentScene.createNode("LineSet");
LineSet1595.vertexCount = new MFInt32(new int[2]);
let Coordinate1596 = browser.currentScene.createNode("Coordinate");
Coordinate1596.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1595.coord = Coordinate1596;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
let ColorRGBA1597 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1597.USE = "HAnimSegmentLineColorRGBA";
LineSet1595.color = ColorRGBA1597;

Shape1594.geometry = LineSet1595;

HAnimSegment1590.children[1] = Shape1594;

HAnimJoint1589.children = new MFNode();

HAnimJoint1589.children[0] = HAnimSegment1590;

let HAnimJoint1598 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1598.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1598.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1598.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1598.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1598.llimit = new MFFloat(new float[0,0,0]);
let HAnimSegment1599 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1599.name = "r_carpal_middle_phalanx_5";
HAnimSegment1599.DEF = "hanim_r_carpal_middle_phalanx_5";
let Transform1600 = browser.currentScene.createNode("Transform");
//Empty Transform
let Transform1601 = browser.currentScene.createNode("Transform");
//Empty Transform
let Shape1602 = browser.currentScene.createNode("Shape");
Shape1602.USE = "HAnimJointShape";
Transform1601.children = new MFNode();

Transform1601.children[0] = Shape1602;

Transform1600.children = new MFNode();

Transform1600.children[0] = Transform1601;

HAnimSegment1599.children = new MFNode();

HAnimSegment1599.children[0] = Transform1600;

let Shape1603 = browser.currentScene.createNode("Shape");
let LineSet1604 = browser.currentScene.createNode("LineSet");
LineSet1604.vertexCount = new MFInt32(new int[2]);
let Coordinate1605 = browser.currentScene.createNode("Coordinate");
Coordinate1605.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1604.coord = Coordinate1605;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
let ColorRGBA1606 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1606.USE = "HAnimSegmentLineColorRGBA";
LineSet1604.color = ColorRGBA1606;

Shape1603.geometry = LineSet1604;

HAnimSegment1599.children[1] = Shape1603;

let HAnimSite1607 = browser.currentScene.createNode("HAnimSite");
HAnimSite1607.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1607.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite1607.translation = new SFVec3f(new float[0.25,0.79,0]);
let TouchSensor1608 = browser.currentScene.createNode("TouchSensor");
TouchSensor1608.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1607.children = new MFNode();

HAnimSite1607.children[0] = TouchSensor1608;

let Shape1609 = browser.currentScene.createNode("Shape");
Shape1609.USE = "HAnimSiteShape";
HAnimSite1607.children[1] = Shape1609;

HAnimSegment1599.children[2] = HAnimSite1607;

HAnimJoint1598.children = new MFNode();

HAnimJoint1598.children[0] = HAnimSegment1599;

let HAnimJoint1610 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1610.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1610.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1610.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1610.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1610.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1598.children[1] = HAnimJoint1610;

HAnimJoint1589.children[1] = HAnimJoint1598;

HAnimJoint1580.children[1] = HAnimJoint1589;

HAnimJoint1533.children[2] = HAnimJoint1580;

HAnimJoint1392.children[4] = HAnimJoint1533;

HAnimJoint1380.children[1] = HAnimJoint1392;

HAnimJoint1359.children[1] = HAnimJoint1380;

HAnimJoint1344.children[1] = HAnimJoint1359;

HAnimJoint1335.children[1] = HAnimJoint1344;

HAnimJoint854.children[3] = HAnimJoint1335;

HAnimJoint839.children[1] = HAnimJoint854;

HAnimJoint830.children[1] = HAnimJoint839;

HAnimJoint821.children[1] = HAnimJoint830;

HAnimJoint812.children[1] = HAnimJoint821;

HAnimJoint800.children[1] = HAnimJoint812;

HAnimJoint779.children[1] = HAnimJoint800;

HAnimJoint770.children[1] = HAnimJoint779;

HAnimJoint761.children[1] = HAnimJoint770;

HAnimJoint746.children[1] = HAnimJoint761;

HAnimJoint734.children[1] = HAnimJoint746;

HAnimJoint725.children[1] = HAnimJoint734;

HAnimJoint716.children[1] = HAnimJoint725;

HAnimJoint707.children[1] = HAnimJoint716;

HAnimJoint689.children[1] = HAnimJoint707;

HAnimJoint680.children[1] = HAnimJoint689;

HAnimJoint671.children[1] = HAnimJoint680;

HAnimJoint52.children[2] = HAnimJoint671;

HAnimHumanoid43.joints[1] = HAnimJoint52;

let HAnimJoint1611 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint1611;

let HAnimJoint1612 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint1612;

let HAnimJoint1613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint1613;

let HAnimJoint1614 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint1614;

let HAnimJoint1615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint1615;

let HAnimJoint1616 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid43.joints[7] = HAnimJoint1616;

let HAnimJoint1617 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid43.joints[8] = HAnimJoint1617;

let HAnimJoint1618 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid43.joints[9] = HAnimJoint1618;

let HAnimJoint1619 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid43.joints[10] = HAnimJoint1619;

let HAnimJoint1620 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[11] = HAnimJoint1620;

let HAnimJoint1621 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid43.joints[12] = HAnimJoint1621;

let HAnimJoint1622 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1622;

let HAnimJoint1623 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1623;

let HAnimJoint1624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1624;

let HAnimJoint1625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[16] = HAnimJoint1625;

let HAnimJoint1626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid43.joints[17] = HAnimJoint1626;

let HAnimJoint1627 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid43.joints[18] = HAnimJoint1627;

let HAnimJoint1628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid43.joints[19] = HAnimJoint1628;

let HAnimJoint1629 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[20] = HAnimJoint1629;

let HAnimJoint1630 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[21] = HAnimJoint1630;

let HAnimJoint1631 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid43.joints[22] = HAnimJoint1631;

let HAnimJoint1632 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_l_transversetarsal";
HAnimHumanoid43.joints[23] = HAnimJoint1632;

let HAnimJoint1633 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid43.joints[24] = HAnimJoint1633;

let HAnimJoint1634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid43.joints[25] = HAnimJoint1634;

let HAnimJoint1635 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[26] = HAnimJoint1635;

let HAnimJoint1636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[27] = HAnimJoint1636;

let HAnimJoint1637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid43.joints[28] = HAnimJoint1637;

let HAnimJoint1638 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid43.joints[29] = HAnimJoint1638;

let HAnimJoint1639 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[30] = HAnimJoint1639;

let HAnimJoint1640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[31] = HAnimJoint1640;

let HAnimJoint1641 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_hip";
HAnimHumanoid43.joints[32] = HAnimJoint1641;

let HAnimJoint1642 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_r_knee";
HAnimHumanoid43.joints[33] = HAnimJoint1642;

let HAnimJoint1643 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[34] = HAnimJoint1643;

let HAnimJoint1644 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid43.joints[35] = HAnimJoint1644;

let HAnimJoint1645 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid43.joints[36] = HAnimJoint1645;

let HAnimJoint1646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid43.joints[37] = HAnimJoint1646;

let HAnimJoint1647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid43.joints[38] = HAnimJoint1647;

let HAnimJoint1648 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[39] = HAnimJoint1648;

let HAnimJoint1649 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid43.joints[40] = HAnimJoint1649;

let HAnimJoint1650 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[41] = HAnimJoint1650;

let HAnimJoint1651 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[42] = HAnimJoint1651;

let HAnimJoint1652 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[43] = HAnimJoint1652;

let HAnimJoint1653 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[44] = HAnimJoint1653;

let HAnimJoint1654 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid43.joints[45] = HAnimJoint1654;

let HAnimJoint1655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid43.joints[46] = HAnimJoint1655;

let HAnimJoint1656 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid43.joints[47] = HAnimJoint1656;

let HAnimJoint1657 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[48] = HAnimJoint1657;

let HAnimJoint1658 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[49] = HAnimJoint1658;

let HAnimJoint1659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid43.joints[50] = HAnimJoint1659;

let HAnimJoint1660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_r_transversetarsal";
HAnimHumanoid43.joints[51] = HAnimJoint1660;

let HAnimJoint1661 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid43.joints[52] = HAnimJoint1661;

let HAnimJoint1662 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid43.joints[53] = HAnimJoint1662;

let HAnimJoint1663 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint1663;

let HAnimJoint1664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[55] = HAnimJoint1664;

let HAnimJoint1665 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid43.joints[56] = HAnimJoint1665;

let HAnimJoint1666 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid43.joints[57] = HAnimJoint1666;

let HAnimJoint1667 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[58] = HAnimJoint1667;

let HAnimJoint1668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[59] = HAnimJoint1668;

let HAnimJoint1669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_vl5";
HAnimHumanoid43.joints[60] = HAnimJoint1669;

let HAnimJoint1670 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_vl4";
HAnimHumanoid43.joints[61] = HAnimJoint1670;

let HAnimJoint1671 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_vl3";
HAnimHumanoid43.joints[62] = HAnimJoint1671;

let HAnimJoint1672 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vl2";
HAnimHumanoid43.joints[63] = HAnimJoint1672;

let HAnimJoint1673 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vl1";
HAnimHumanoid43.joints[64] = HAnimJoint1673;

let HAnimJoint1674 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vt12";
HAnimHumanoid43.joints[65] = HAnimJoint1674;

let HAnimJoint1675 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vt11";
HAnimHumanoid43.joints[66] = HAnimJoint1675;

let HAnimJoint1676 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vt10";
HAnimHumanoid43.joints[67] = HAnimJoint1676;

let HAnimJoint1677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vt9";
HAnimHumanoid43.joints[68] = HAnimJoint1677;

let HAnimJoint1678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vt8";
HAnimHumanoid43.joints[69] = HAnimJoint1678;

let HAnimJoint1679 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vt7";
HAnimHumanoid43.joints[70] = HAnimJoint1679;

let HAnimJoint1680 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vt6";
HAnimHumanoid43.joints[71] = HAnimJoint1680;

let HAnimJoint1681 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vt5";
HAnimHumanoid43.joints[72] = HAnimJoint1681;

let HAnimJoint1682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_vt4";
HAnimHumanoid43.joints[73] = HAnimJoint1682;

let HAnimJoint1683 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_vt3";
HAnimHumanoid43.joints[74] = HAnimJoint1683;

let HAnimJoint1684 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_vt2";
HAnimHumanoid43.joints[75] = HAnimJoint1684;

let HAnimJoint1685 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_vt1";
HAnimHumanoid43.joints[76] = HAnimJoint1685;

let HAnimJoint1686 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_vc7";
HAnimHumanoid43.joints[77] = HAnimJoint1686;

let HAnimJoint1687 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_vc6";
HAnimHumanoid43.joints[78] = HAnimJoint1687;

let HAnimJoint1688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_vc5";
HAnimHumanoid43.joints[79] = HAnimJoint1688;

let HAnimJoint1689 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_vc4";
HAnimHumanoid43.joints[80] = HAnimJoint1689;

let HAnimJoint1690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_vc3";
HAnimHumanoid43.joints[81] = HAnimJoint1690;

let HAnimJoint1691 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_vc2";
HAnimHumanoid43.joints[82] = HAnimJoint1691;

let HAnimJoint1692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_vc1";
HAnimHumanoid43.joints[83] = HAnimJoint1692;

let HAnimJoint1693 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_skullbase";
HAnimHumanoid43.joints[84] = HAnimJoint1693;

let HAnimJoint1694 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[85] = HAnimJoint1694;

let HAnimJoint1695 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[86] = HAnimJoint1695;

let HAnimJoint1696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[87] = HAnimJoint1696;

let HAnimJoint1697 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[88] = HAnimJoint1697;

let HAnimJoint1698 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[89] = HAnimJoint1698;

let HAnimJoint1699 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[90] = HAnimJoint1699;

let HAnimJoint1700 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[91] = HAnimJoint1700;

let HAnimJoint1701 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[92] = HAnimJoint1701;

let HAnimJoint1702 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[93] = HAnimJoint1702;

let HAnimJoint1703 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[94] = HAnimJoint1703;

let HAnimJoint1704 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[95] = HAnimJoint1704;

let HAnimJoint1705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[96] = HAnimJoint1705;

let HAnimJoint1706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_midcarpal_1";
HAnimHumanoid43.joints[97] = HAnimJoint1706;

let HAnimJoint1707 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[98] = HAnimJoint1707;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[99] = HAnimJoint1708;

let HAnimJoint1709 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[100] = HAnimJoint1709;

let HAnimJoint1710 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_midcarpal_2";
HAnimHumanoid43.joints[101] = HAnimJoint1710;

let HAnimJoint1711 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[102] = HAnimJoint1711;

let HAnimJoint1712 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[103] = HAnimJoint1712;

let HAnimJoint1713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[104] = HAnimJoint1713;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[105] = HAnimJoint1714;

let HAnimJoint1715 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_l_midcarpal_3";
HAnimHumanoid43.joints[106] = HAnimJoint1715;

let HAnimJoint1716 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[107] = HAnimJoint1716;

let HAnimJoint1717 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[108] = HAnimJoint1717;

let HAnimJoint1718 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[109] = HAnimJoint1718;

let HAnimJoint1719 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[110] = HAnimJoint1719;

let HAnimJoint1720 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid43.joints[111] = HAnimJoint1720;

let HAnimJoint1721 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[112] = HAnimJoint1721;

let HAnimJoint1722 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[113] = HAnimJoint1722;

let HAnimJoint1723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[114] = HAnimJoint1723;

let HAnimJoint1724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[115] = HAnimJoint1724;

let HAnimJoint1725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[116] = HAnimJoint1725;

let HAnimJoint1726 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[117] = HAnimJoint1726;

let HAnimJoint1727 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[118] = HAnimJoint1727;

let HAnimJoint1728 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[119] = HAnimJoint1728;

let HAnimJoint1729 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[120] = HAnimJoint1729;

let HAnimJoint1730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[121] = HAnimJoint1730;

let HAnimJoint1731 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[122] = HAnimJoint1731;

let HAnimJoint1732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[123] = HAnimJoint1732;

let HAnimJoint1733 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[124] = HAnimJoint1733;

let HAnimJoint1734 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_r_midcarpal_1";
HAnimHumanoid43.joints[125] = HAnimJoint1734;

let HAnimJoint1735 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[126] = HAnimJoint1735;

let HAnimJoint1736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[127] = HAnimJoint1736;

let HAnimJoint1737 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[128] = HAnimJoint1737;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_r_midcarpal_2";
HAnimHumanoid43.joints[129] = HAnimJoint1738;

let HAnimJoint1739 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[130] = HAnimJoint1739;

let HAnimJoint1740 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[131] = HAnimJoint1740;

let HAnimJoint1741 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[132] = HAnimJoint1741;

let HAnimJoint1742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[133] = HAnimJoint1742;

let HAnimJoint1743 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_midcarpal_3";
HAnimHumanoid43.joints[134] = HAnimJoint1743;

let HAnimJoint1744 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[135] = HAnimJoint1744;

let HAnimJoint1745 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[136] = HAnimJoint1745;

let HAnimJoint1746 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[137] = HAnimJoint1746;

let HAnimJoint1747 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1747.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[138] = HAnimJoint1747;

let HAnimJoint1748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1748.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid43.joints[139] = HAnimJoint1748;

let HAnimJoint1749 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1749.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[140] = HAnimJoint1749;

let HAnimJoint1750 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1750.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[141] = HAnimJoint1750;

let HAnimJoint1751 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1751.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[142] = HAnimJoint1751;

let HAnimJoint1752 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1752.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[143] = HAnimJoint1752;

let HAnimJoint1753 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1753.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[144] = HAnimJoint1753;

let HAnimJoint1754 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1754.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[145] = HAnimJoint1754;

let HAnimJoint1755 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1755.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[146] = HAnimJoint1755;

let HAnimJoint1756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1756.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[147] = HAnimJoint1756;

let HAnimSegment1757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_sacrum";
HAnimHumanoid43.segments[148] = HAnimSegment1757;

let HAnimSegment1758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_pelvis";
HAnimHumanoid43.segments[149] = HAnimSegment1758;

let HAnimSegment1759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[150] = HAnimSegment1759;

let HAnimSegment1760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_calf";
HAnimHumanoid43.segments[151] = HAnimSegment1760;

let HAnimSegment1761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_l_talus";
HAnimHumanoid43.segments[152] = HAnimSegment1761;

let HAnimSegment1762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_navicular";
HAnimHumanoid43.segments[153] = HAnimSegment1762;

let HAnimSegment1763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_l_cuneiform_1";
HAnimHumanoid43.segments[154] = HAnimSegment1763;

let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_metatarsal_1";
HAnimHumanoid43.segments[155] = HAnimSegment1764;

let HAnimSegment1765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[156] = HAnimSegment1765;

let HAnimSegment1766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_cuneiform_2";
HAnimHumanoid43.segments[157] = HAnimSegment1766;

let HAnimSegment1767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[158] = HAnimSegment1767;

let HAnimSegment1768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[159] = HAnimSegment1768;

let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[160] = HAnimSegment1769;

let HAnimSegment1770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_cuneiform_3";
HAnimHumanoid43.segments[161] = HAnimSegment1770;

let HAnimSegment1771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_l_metatarsal_3";
HAnimHumanoid43.segments[162] = HAnimSegment1771;

let HAnimSegment1772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[163] = HAnimSegment1772;

let HAnimSegment1773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[164] = HAnimSegment1773;

let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_l_calcaneus";
HAnimHumanoid43.segments[165] = HAnimSegment1774;

let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_l_cuboid";
HAnimHumanoid43.segments[166] = HAnimSegment1775;

let HAnimSegment1776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_l_metatarsal_4";
HAnimHumanoid43.segments[167] = HAnimSegment1776;

let HAnimSegment1777 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[168] = HAnimSegment1777;

let HAnimSegment1778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[169] = HAnimSegment1778;

let HAnimSegment1779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_l_metatarsal_5";
HAnimHumanoid43.segments[170] = HAnimSegment1779;

let HAnimSegment1780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[171] = HAnimSegment1780;

let HAnimSegment1781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[172] = HAnimSegment1781;

let HAnimSegment1782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[173] = HAnimSegment1782;

let HAnimSegment1783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_r_calf";
HAnimHumanoid43.segments[174] = HAnimSegment1783;

let HAnimSegment1784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_r_talus";
HAnimHumanoid43.segments[175] = HAnimSegment1784;

let HAnimSegment1785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_r_navicular";
HAnimHumanoid43.segments[176] = HAnimSegment1785;

let HAnimSegment1786 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_r_cuneiform_1";
HAnimHumanoid43.segments[177] = HAnimSegment1786;

let HAnimSegment1787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_r_metatarsal_1";
HAnimHumanoid43.segments[178] = HAnimSegment1787;

let HAnimSegment1788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[179] = HAnimSegment1788;

let HAnimSegment1789 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_r_cuneiform_2";
HAnimHumanoid43.segments[180] = HAnimSegment1789;

let HAnimSegment1790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[181] = HAnimSegment1790;

let HAnimSegment1791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[182] = HAnimSegment1791;

let HAnimSegment1792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[183] = HAnimSegment1792;

let HAnimSegment1793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_r_cuneiform_3";
HAnimHumanoid43.segments[184] = HAnimSegment1793;

let HAnimSegment1794 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_r_metatarsal_3";
HAnimHumanoid43.segments[185] = HAnimSegment1794;

let HAnimSegment1795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[186] = HAnimSegment1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[187] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_r_calcaneus";
HAnimHumanoid43.segments[188] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_r_cuboid";
HAnimHumanoid43.segments[189] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_r_metatarsal_4";
HAnimHumanoid43.segments[190] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[191] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[192] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_r_metatarsal_5";
HAnimHumanoid43.segments[193] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[194] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[195] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_l5";
HAnimHumanoid43.segments[196] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_l4";
HAnimHumanoid43.segments[197] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_l3";
HAnimHumanoid43.segments[198] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_l2";
HAnimHumanoid43.segments[199] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_l1";
HAnimHumanoid43.segments[200] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t12";
HAnimHumanoid43.segments[201] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_t11";
HAnimHumanoid43.segments[202] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_t10";
HAnimHumanoid43.segments[203] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_t9";
HAnimHumanoid43.segments[204] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_t8";
HAnimHumanoid43.segments[205] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_t7";
HAnimHumanoid43.segments[206] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_t6";
HAnimHumanoid43.segments[207] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_t5";
HAnimHumanoid43.segments[208] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_t4";
HAnimHumanoid43.segments[209] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_t3";
HAnimHumanoid43.segments[210] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_t2";
HAnimHumanoid43.segments[211] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_t1";
HAnimHumanoid43.segments[212] = HAnimSegment1821;

let HAnimSegment1822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_c7";
HAnimHumanoid43.segments[213] = HAnimSegment1822;

let HAnimSegment1823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_c6";
HAnimHumanoid43.segments[214] = HAnimSegment1823;

let HAnimSegment1824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_c5";
HAnimHumanoid43.segments[215] = HAnimSegment1824;

let HAnimSegment1825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_c4";
HAnimHumanoid43.segments[216] = HAnimSegment1825;

let HAnimSegment1826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_c3";
HAnimHumanoid43.segments[217] = HAnimSegment1826;

let HAnimSegment1827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_c2";
HAnimHumanoid43.segments[218] = HAnimSegment1827;

let HAnimSegment1828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_c1";
HAnimHumanoid43.segments[219] = HAnimSegment1828;

let HAnimSegment1829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_skull";
HAnimHumanoid43.segments[220] = HAnimSegment1829;

let HAnimSegment1830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[221] = HAnimSegment1830;

let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[222] = HAnimSegment1831;

let HAnimSegment1832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[223] = HAnimSegment1832;

let HAnimSegment1833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[224] = HAnimSegment1833;

let HAnimSegment1834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[225] = HAnimSegment1834;

let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_l_trapezium";
HAnimHumanoid43.segments[226] = HAnimSegment1835;

let HAnimSegment1836 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[227] = HAnimSegment1836;

let HAnimSegment1837 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[228] = HAnimSegment1837;

let HAnimSegment1838 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_trapezoid";
HAnimHumanoid43.segments[229] = HAnimSegment1838;

let HAnimSegment1839 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[230] = HAnimSegment1839;

let HAnimSegment1840 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[231] = HAnimSegment1840;

let HAnimSegment1841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[232] = HAnimSegment1841;

let HAnimSegment1842 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_capitate";
HAnimHumanoid43.segments[233] = HAnimSegment1842;

let HAnimSegment1843 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[234] = HAnimSegment1843;

let HAnimSegment1844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[235] = HAnimSegment1844;

let HAnimSegment1845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[236] = HAnimSegment1845;

let HAnimSegment1846 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_l_hamate";
HAnimHumanoid43.segments[237] = HAnimSegment1846;

let HAnimSegment1847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[238] = HAnimSegment1847;

let HAnimSegment1848 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[239] = HAnimSegment1848;

let HAnimSegment1849 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[240] = HAnimSegment1849;

let HAnimSegment1850 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[241] = HAnimSegment1850;

let HAnimSegment1851 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[242] = HAnimSegment1851;

let HAnimSegment1852 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[243] = HAnimSegment1852;

let HAnimSegment1853 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[244] = HAnimSegment1853;

let HAnimSegment1854 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[245] = HAnimSegment1854;

let HAnimSegment1855 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[246] = HAnimSegment1855;

let HAnimSegment1856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[247] = HAnimSegment1856;

let HAnimSegment1857 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[248] = HAnimSegment1857;

let HAnimSegment1858 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_r_trapezium";
HAnimHumanoid43.segments[249] = HAnimSegment1858;

let HAnimSegment1859 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[250] = HAnimSegment1859;

let HAnimSegment1860 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[251] = HAnimSegment1860;

let HAnimSegment1861 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_r_trapezoid";
HAnimHumanoid43.segments[252] = HAnimSegment1861;

let HAnimSegment1862 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[253] = HAnimSegment1862;

let HAnimSegment1863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[254] = HAnimSegment1863;

let HAnimSegment1864 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[255] = HAnimSegment1864;

let HAnimSegment1865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1865.USE = "hanim_r_capitate";
HAnimHumanoid43.segments[256] = HAnimSegment1865;

let HAnimSegment1866 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1866.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[257] = HAnimSegment1866;

let HAnimSegment1867 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1867.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[258] = HAnimSegment1867;

let HAnimSegment1868 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1868.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[259] = HAnimSegment1868;

let HAnimSegment1869 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1869.USE = "hanim_r_hamate";
HAnimHumanoid43.segments[260] = HAnimSegment1869;

let HAnimSegment1870 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1870.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[261] = HAnimSegment1870;

let HAnimSegment1871 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1871.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[262] = HAnimSegment1871;

let HAnimSegment1872 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1872.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[263] = HAnimSegment1872;

let HAnimSegment1873 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1873.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[264] = HAnimSegment1873;

let HAnimSegment1874 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1874.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[265] = HAnimSegment1874;

let HAnimSegment1875 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1875.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[266] = HAnimSegment1875;

let HAnimSite1876 = browser.currentScene.createNode("HAnimSite");
HAnimSite1876.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid43.viewpoints[267] = HAnimSite1876;

let HAnimSite1877 = browser.currentScene.createNode("HAnimSite");
HAnimSite1877.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite1877;

let HAnimSite1878 = browser.currentScene.createNode("HAnimSite");
HAnimSite1878.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite1878;

let HAnimSite1879 = browser.currentScene.createNode("HAnimSite");
HAnimSite1879.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite1879;

let HAnimSite1880 = browser.currentScene.createNode("HAnimSite");
HAnimSite1880.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[271] = HAnimSite1880;

let HAnimSite1881 = browser.currentScene.createNode("HAnimSite");
HAnimSite1881.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[272] = HAnimSite1881;

let HAnimSite1882 = browser.currentScene.createNode("HAnimSite");
HAnimSite1882.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[273] = HAnimSite1882;

let HAnimSite1883 = browser.currentScene.createNode("HAnimSite");
HAnimSite1883.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[274] = HAnimSite1883;

let HAnimSite1884 = browser.currentScene.createNode("HAnimSite");
HAnimSite1884.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[275] = HAnimSite1884;

let HAnimSite1885 = browser.currentScene.createNode("HAnimSite");
HAnimSite1885.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[276] = HAnimSite1885;

let HAnimSite1886 = browser.currentScene.createNode("HAnimSite");
HAnimSite1886.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[277] = HAnimSite1886;

let HAnimSite1887 = browser.currentScene.createNode("HAnimSite");
HAnimSite1887.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid43.viewpoints[278] = HAnimSite1887;

let HAnimSite1888 = browser.currentScene.createNode("HAnimSite");
HAnimSite1888.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[279] = HAnimSite1888;

let HAnimSite1889 = browser.currentScene.createNode("HAnimSite");
HAnimSite1889.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[280] = HAnimSite1889;

let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[281] = HAnimSite1890;

let HAnimSite1891 = browser.currentScene.createNode("HAnimSite");
HAnimSite1891.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[282] = HAnimSite1891;

let HAnimSite1892 = browser.currentScene.createNode("HAnimSite");
HAnimSite1892.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid43.viewpoints[283] = HAnimSite1892;

let HAnimSite1893 = browser.currentScene.createNode("HAnimSite");
HAnimSite1893.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[284] = HAnimSite1893;

let HAnimSite1894 = browser.currentScene.createNode("HAnimSite");
HAnimSite1894.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[285] = HAnimSite1894;

let HAnimSite1895 = browser.currentScene.createNode("HAnimSite");
HAnimSite1895.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[286] = HAnimSite1895;

let HAnimSite1896 = browser.currentScene.createNode("HAnimSite");
HAnimSite1896.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid43.viewpoints[287] = HAnimSite1896;

let HAnimSite1897 = browser.currentScene.createNode("HAnimSite");
HAnimSite1897.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[288] = HAnimSite1897;

let HAnimSite1898 = browser.currentScene.createNode("HAnimSite");
HAnimSite1898.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[289] = HAnimSite1898;

let HAnimSite1899 = browser.currentScene.createNode("HAnimSite");
HAnimSite1899.USE = "hanim_l_tibiale_pt";
HAnimHumanoid43.viewpoints[290] = HAnimSite1899;

let HAnimSite1900 = browser.currentScene.createNode("HAnimSite");
HAnimSite1900.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[291] = HAnimSite1900;

let HAnimSite1901 = browser.currentScene.createNode("HAnimSite");
HAnimSite1901.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[292] = HAnimSite1901;

let HAnimSite1902 = browser.currentScene.createNode("HAnimSite");
HAnimSite1902.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[293] = HAnimSite1902;

let HAnimSite1903 = browser.currentScene.createNode("HAnimSite");
HAnimSite1903.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[294] = HAnimSite1903;

let HAnimSite1904 = browser.currentScene.createNode("HAnimSite");
HAnimSite1904.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[295] = HAnimSite1904;

let HAnimSite1905 = browser.currentScene.createNode("HAnimSite");
HAnimSite1905.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[296] = HAnimSite1905;

let HAnimSite1906 = browser.currentScene.createNode("HAnimSite");
HAnimSite1906.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[297] = HAnimSite1906;

let HAnimSite1907 = browser.currentScene.createNode("HAnimSite");
HAnimSite1907.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[298] = HAnimSite1907;

let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[299] = HAnimSite1908;

let HAnimSite1909 = browser.currentScene.createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[300] = HAnimSite1909;

let HAnimSite1910 = browser.currentScene.createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[301] = HAnimSite1910;

let HAnimSite1911 = browser.currentScene.createNode("HAnimSite");
HAnimSite1911.USE = "hanim_r_tibiale_pt";
HAnimHumanoid43.viewpoints[302] = HAnimSite1911;

let HAnimSite1912 = browser.currentScene.createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[303] = HAnimSite1912;

let HAnimSite1913 = browser.currentScene.createNode("HAnimSite");
HAnimSite1913.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[304] = HAnimSite1913;

let HAnimSite1914 = browser.currentScene.createNode("HAnimSite");
HAnimSite1914.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[305] = HAnimSite1914;

let HAnimSite1915 = browser.currentScene.createNode("HAnimSite");
HAnimSite1915.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[306] = HAnimSite1915;

let HAnimSite1916 = browser.currentScene.createNode("HAnimSite");
HAnimSite1916.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[307] = HAnimSite1916;

let HAnimSite1917 = browser.currentScene.createNode("HAnimSite");
HAnimSite1917.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[308] = HAnimSite1917;

let HAnimSite1918 = browser.currentScene.createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[309] = HAnimSite1918;

let HAnimSite1919 = browser.currentScene.createNode("HAnimSite");
HAnimSite1919.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[310] = HAnimSite1919;

let HAnimSite1920 = browser.currentScene.createNode("HAnimSite");
HAnimSite1920.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[311] = HAnimSite1920;

let HAnimSite1921 = browser.currentScene.createNode("HAnimSite");
HAnimSite1921.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[312] = HAnimSite1921;

let HAnimSite1922 = browser.currentScene.createNode("HAnimSite");
HAnimSite1922.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[313] = HAnimSite1922;

let HAnimSite1923 = browser.currentScene.createNode("HAnimSite");
HAnimSite1923.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid43.viewpoints[314] = HAnimSite1923;

let HAnimSite1924 = browser.currentScene.createNode("HAnimSite");
HAnimSite1924.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[315] = HAnimSite1924;

let HAnimSite1925 = browser.currentScene.createNode("HAnimSite");
HAnimSite1925.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[316] = HAnimSite1925;

let HAnimSite1926 = browser.currentScene.createNode("HAnimSite");
HAnimSite1926.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[317] = HAnimSite1926;

let HAnimSite1927 = browser.currentScene.createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[318] = HAnimSite1927;

let HAnimSite1928 = browser.currentScene.createNode("HAnimSite");
HAnimSite1928.USE = "hanim_mesosternale_pt";
HAnimHumanoid43.viewpoints[319] = HAnimSite1928;

let HAnimSite1929 = browser.currentScene.createNode("HAnimSite");
HAnimSite1929.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[320] = HAnimSite1929;

let HAnimSite1930 = browser.currentScene.createNode("HAnimSite");
HAnimSite1930.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[321] = HAnimSite1930;

let HAnimSite1931 = browser.currentScene.createNode("HAnimSite");
HAnimSite1931.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid43.viewpoints[322] = HAnimSite1931;

let HAnimSite1932 = browser.currentScene.createNode("HAnimSite");
HAnimSite1932.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[323] = HAnimSite1932;

let HAnimSite1933 = browser.currentScene.createNode("HAnimSite");
HAnimSite1933.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[324] = HAnimSite1933;

let HAnimSite1934 = browser.currentScene.createNode("HAnimSite");
HAnimSite1934.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[325] = HAnimSite1934;

let HAnimSite1935 = browser.currentScene.createNode("HAnimSite");
HAnimSite1935.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[326] = HAnimSite1935;

let HAnimSite1936 = browser.currentScene.createNode("HAnimSite");
HAnimSite1936.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[327] = HAnimSite1936;

let HAnimSite1937 = browser.currentScene.createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[328] = HAnimSite1937;

let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[329] = HAnimSite1938;

let HAnimSite1939 = browser.currentScene.createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[330] = HAnimSite1939;

let HAnimSite1940 = browser.currentScene.createNode("HAnimSite");
HAnimSite1940.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[331] = HAnimSite1940;

let HAnimSite1941 = browser.currentScene.createNode("HAnimSite");
HAnimSite1941.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[332] = HAnimSite1941;

let HAnimSite1942 = browser.currentScene.createNode("HAnimSite");
HAnimSite1942.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[333] = HAnimSite1942;

let HAnimSite1943 = browser.currentScene.createNode("HAnimSite");
HAnimSite1943.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[334] = HAnimSite1943;

let HAnimSite1944 = browser.currentScene.createNode("HAnimSite");
HAnimSite1944.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[335] = HAnimSite1944;

let HAnimSite1945 = browser.currentScene.createNode("HAnimSite");
HAnimSite1945.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[336] = HAnimSite1945;

let HAnimSite1946 = browser.currentScene.createNode("HAnimSite");
HAnimSite1946.USE = "hanim_adams_apple_pt";
HAnimHumanoid43.viewpoints[337] = HAnimSite1946;

let HAnimSite1947 = browser.currentScene.createNode("HAnimSite");
HAnimSite1947.USE = "hanim_glabella_pt";
HAnimHumanoid43.viewpoints[338] = HAnimSite1947;

let HAnimSite1948 = browser.currentScene.createNode("HAnimSite");
HAnimSite1948.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid43.viewpoints[339] = HAnimSite1948;

let HAnimSite1949 = browser.currentScene.createNode("HAnimSite");
HAnimSite1949.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[340] = HAnimSite1949;

let HAnimSite1950 = browser.currentScene.createNode("HAnimSite");
HAnimSite1950.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[341] = HAnimSite1950;

let HAnimSite1951 = browser.currentScene.createNode("HAnimSite");
HAnimSite1951.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[342] = HAnimSite1951;

let HAnimSite1952 = browser.currentScene.createNode("HAnimSite");
HAnimSite1952.USE = "hanim_opisthocranion_pt";
HAnimHumanoid43.viewpoints[343] = HAnimSite1952;

let HAnimSite1953 = browser.currentScene.createNode("HAnimSite");
HAnimSite1953.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid43.viewpoints[344] = HAnimSite1953;

let HAnimSite1954 = browser.currentScene.createNode("HAnimSite");
HAnimSite1954.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[345] = HAnimSite1954;

let HAnimSite1955 = browser.currentScene.createNode("HAnimSite");
HAnimSite1955.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[346] = HAnimSite1955;

let HAnimSite1956 = browser.currentScene.createNode("HAnimSite");
HAnimSite1956.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[347] = HAnimSite1956;

let HAnimSite1957 = browser.currentScene.createNode("HAnimSite");
HAnimSite1957.USE = "hanim_skull_vertex_pt";
HAnimHumanoid43.viewpoints[348] = HAnimSite1957;

let HAnimSite1958 = browser.currentScene.createNode("HAnimSite");
HAnimSite1958.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[349] = HAnimSite1958;

let HAnimSite1959 = browser.currentScene.createNode("HAnimSite");
HAnimSite1959.USE = "hanim_menton_pt";
HAnimHumanoid43.viewpoints[350] = HAnimSite1959;

let HAnimSite1960 = browser.currentScene.createNode("HAnimSite");
HAnimSite1960.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[351] = HAnimSite1960;

let HAnimSite1961 = browser.currentScene.createNode("HAnimSite");
HAnimSite1961.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[352] = HAnimSite1961;

let HAnimSite1962 = browser.currentScene.createNode("HAnimSite");
HAnimSite1962.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid43.viewpoints[353] = HAnimSite1962;

let HAnimSite1963 = browser.currentScene.createNode("HAnimSite");
HAnimSite1963.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[354] = HAnimSite1963;

let HAnimSite1964 = browser.currentScene.createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[355] = HAnimSite1964;

let HAnimSite1965 = browser.currentScene.createNode("HAnimSite");
HAnimSite1965.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[356] = HAnimSite1965;

let HAnimSite1966 = browser.currentScene.createNode("HAnimSite");
HAnimSite1966.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[357] = HAnimSite1966;

let HAnimSite1967 = browser.currentScene.createNode("HAnimSite");
HAnimSite1967.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[358] = HAnimSite1967;

let HAnimSite1968 = browser.currentScene.createNode("HAnimSite");
HAnimSite1968.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[359] = HAnimSite1968;

let HAnimSite1969 = browser.currentScene.createNode("HAnimSite");
HAnimSite1969.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[360] = HAnimSite1969;

let HAnimSite1970 = browser.currentScene.createNode("HAnimSite");
HAnimSite1970.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[361] = HAnimSite1970;

let HAnimSite1971 = browser.currentScene.createNode("HAnimSite");
HAnimSite1971.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[362] = HAnimSite1971;

let HAnimSite1972 = browser.currentScene.createNode("HAnimSite");
HAnimSite1972.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[363] = HAnimSite1972;

let HAnimSite1973 = browser.currentScene.createNode("HAnimSite");
HAnimSite1973.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[364] = HAnimSite1973;

let HAnimSite1974 = browser.currentScene.createNode("HAnimSite");
HAnimSite1974.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[365] = HAnimSite1974;

let HAnimSite1975 = browser.currentScene.createNode("HAnimSite");
HAnimSite1975.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[366] = HAnimSite1975;

let HAnimSite1976 = browser.currentScene.createNode("HAnimSite");
HAnimSite1976.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[367] = HAnimSite1976;

let HAnimSite1977 = browser.currentScene.createNode("HAnimSite");
HAnimSite1977.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[368] = HAnimSite1977;

let HAnimSite1978 = browser.currentScene.createNode("HAnimSite");
HAnimSite1978.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid43.viewpoints[369] = HAnimSite1978;

let HAnimSite1979 = browser.currentScene.createNode("HAnimSite");
HAnimSite1979.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[370] = HAnimSite1979;

let HAnimSite1980 = browser.currentScene.createNode("HAnimSite");
HAnimSite1980.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[371] = HAnimSite1980;

let HAnimSite1981 = browser.currentScene.createNode("HAnimSite");
HAnimSite1981.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[372] = HAnimSite1981;

let HAnimSite1982 = browser.currentScene.createNode("HAnimSite");
HAnimSite1982.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[373] = HAnimSite1982;

let HAnimSite1983 = browser.currentScene.createNode("HAnimSite");
HAnimSite1983.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[374] = HAnimSite1983;

let HAnimSite1984 = browser.currentScene.createNode("HAnimSite");
HAnimSite1984.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[375] = HAnimSite1984;

let HAnimSite1985 = browser.currentScene.createNode("HAnimSite");
HAnimSite1985.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[376] = HAnimSite1985;

let HAnimSite1986 = browser.currentScene.createNode("HAnimSite");
HAnimSite1986.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[377] = HAnimSite1986;

let HAnimSite1987 = browser.currentScene.createNode("HAnimSite");
HAnimSite1987.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[378] = HAnimSite1987;

let HAnimSite1988 = browser.currentScene.createNode("HAnimSite");
HAnimSite1988.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[379] = HAnimSite1988;

let HAnimSite1989 = browser.currentScene.createNode("HAnimSite");
HAnimSite1989.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[380] = HAnimSite1989;

let HAnimSite1990 = browser.currentScene.createNode("HAnimSite");
HAnimSite1990.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[381] = HAnimSite1990;

let HAnimSite1991 = browser.currentScene.createNode("HAnimSite");
HAnimSite1991.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[382] = HAnimSite1991;

let HAnimSite1992 = browser.currentScene.createNode("HAnimSite");
HAnimSite1992.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[383] = HAnimSite1992;

let HAnimSite1993 = browser.currentScene.createNode("HAnimSite");
HAnimSite1993.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[384] = HAnimSite1993;

browser.currentScene.children[4] = HAnimHumanoid43;

