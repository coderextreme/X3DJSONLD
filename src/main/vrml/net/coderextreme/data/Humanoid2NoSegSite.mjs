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

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

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

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

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

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

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

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

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
ImageTexture49.url = new MFString(new java.lang.String["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
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
HAnimJoint52.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint52.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint52.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint52.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.name = "sacroiliac";
HAnimJoint53.DEF = "hanim_sacroiliac";
HAnimJoint53.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint53.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint53.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint53.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint53.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "l_hip";
HAnimJoint54.DEF = "hanim_l_hip";
HAnimJoint54.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint54.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint54.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint54.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint54.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.name = "l_knee";
HAnimJoint55.DEF = "hanim_l_knee";
HAnimJoint55.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint55.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint55.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint55.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint55.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.name = "l_talocrural";
HAnimJoint56.DEF = "hanim_l_talocrural";
HAnimJoint56.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint56.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint56.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint56.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint56.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.name = "l_tarsometatarsal_2";
HAnimJoint57.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint57.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
HAnimJoint57.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint57.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint57.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint57.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "l_metatarsophalangeal_2";
HAnimJoint58.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint58.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint58.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint58.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint58.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint58.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint59.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint59.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint59.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint59.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint59.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint59.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimJoint59;

HAnimJoint57.children = new MFNode();

HAnimJoint57.children[0] = HAnimJoint58;

HAnimJoint56.children = new MFNode();

HAnimJoint56.children[0] = HAnimJoint57;

HAnimJoint55.children = new MFNode();

HAnimJoint55.children[0] = HAnimJoint56;

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimJoint55;

HAnimJoint53.children = new MFNode();

HAnimJoint53.children[0] = HAnimJoint54;

let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.name = "r_hip";
HAnimJoint60.DEF = "hanim_r_hip";
HAnimJoint60.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint60.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint60.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint60.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint60.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.name = "r_knee";
HAnimJoint61.DEF = "hanim_r_knee";
HAnimJoint61.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint61.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint61.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint61.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint61.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "r_talocrural";
HAnimJoint62.DEF = "hanim_r_talocrural";
HAnimJoint62.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint62.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint62.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint62.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint62.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.name = "r_tarsometatarsal_2";
HAnimJoint63.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint63.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
HAnimJoint63.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint63.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint63.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint63.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.name = "r_metatarsophalangeal_2";
HAnimJoint64.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint64.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint64.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint64.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint64.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint65.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint65.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint65.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint65.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint65.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint65.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint64.children = new MFNode();

HAnimJoint64.children[0] = HAnimJoint65;

HAnimJoint63.children = new MFNode();

HAnimJoint63.children[0] = HAnimJoint64;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimJoint63;

HAnimJoint61.children = new MFNode();

HAnimJoint61.children[0] = HAnimJoint62;

HAnimJoint60.children = new MFNode();

HAnimJoint60.children[0] = HAnimJoint61;

HAnimJoint53.children[1] = HAnimJoint60;

HAnimJoint52.children = new MFNode();

HAnimJoint52.children[0] = HAnimJoint53;

let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.name = "vl5";
HAnimJoint66.DEF = "hanim_vl5";
HAnimJoint66.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint66.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint66.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint66.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint66.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "vl3";
HAnimJoint67.DEF = "hanim_vl3";
HAnimJoint67.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint67.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint67.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint67.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint67.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.name = "vl1";
HAnimJoint68.DEF = "hanim_vl1";
HAnimJoint68.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint68.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint68.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint68.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint68.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.name = "vt10";
HAnimJoint69.DEF = "hanim_vt10";
HAnimJoint69.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint69.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint69.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint69.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint69.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "vt6";
HAnimJoint70.DEF = "hanim_vt6";
HAnimJoint70.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint70.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint70.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint70.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint70.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.name = "vt1";
HAnimJoint71.DEF = "hanim_vt1";
HAnimJoint71.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint71.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint71.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint71.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint71.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.name = "vc4";
HAnimJoint72.DEF = "hanim_vc4";
HAnimJoint72.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint72.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint72.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint72.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint72.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.name = "vc2";
HAnimJoint73.DEF = "hanim_vc2";
HAnimJoint73.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint73.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint73.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint73.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.name = "skullbase";
HAnimJoint74.DEF = "hanim_skullbase";
HAnimJoint74.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint74.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint74.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint74.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint74.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint73.children = new MFNode();

HAnimJoint73.children[0] = HAnimJoint74;

HAnimJoint72.children = new MFNode();

HAnimJoint72.children[0] = HAnimJoint73;

HAnimJoint71.children = new MFNode();

HAnimJoint71.children[0] = HAnimJoint72;

let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "l_sternoclavicular";
HAnimJoint75.DEF = "hanim_l_sternoclavicular";
HAnimJoint75.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint75.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint75.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint75.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint75.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.name = "l_acromioclavicular";
HAnimJoint76.DEF = "hanim_l_acromioclavicular";
HAnimJoint76.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint76.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint76.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint76.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint76.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "l_shoulder";
HAnimJoint77.DEF = "hanim_l_shoulder";
HAnimJoint77.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint77.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint77.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint77.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint77.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.name = "l_elbow";
HAnimJoint78.DEF = "hanim_l_elbow";
HAnimJoint78.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint78.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint78.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint78.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint78.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.name = "l_radiocarpal";
HAnimJoint79.DEF = "hanim_l_radiocarpal";
HAnimJoint79.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint79.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint79.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint79.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint79.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.name = "l_carpometacarpal_1";
HAnimJoint80.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint80.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint80.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint80.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint80.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.name = "l_metacarpophalangeal_1";
HAnimJoint81.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint81.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint81.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint81.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint81.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint81.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.name = "l_carpal_interphalangeal_1";
HAnimJoint82.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint82.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint82.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint82.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint82.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint82.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint81.children = new MFNode();

HAnimJoint81.children[0] = HAnimJoint82;

HAnimJoint80.children = new MFNode();

HAnimJoint80.children[0] = HAnimJoint81;

HAnimJoint79.children = new MFNode();

HAnimJoint79.children[0] = HAnimJoint80;

let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "l_carpometacarpal_2";
HAnimJoint83.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint83.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint83.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint83.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint83.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint83.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.name = "l_metacarpophalangeal_2";
HAnimJoint84.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint84.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint84.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint84.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint84.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint84.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint85.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint85.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint85.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint85.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint85.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint85.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint86.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint86.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint86.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint86.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint86.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint86.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimJoint86;

HAnimJoint84.children = new MFNode();

HAnimJoint84.children[0] = HAnimJoint85;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimJoint84;

HAnimJoint79.children[1] = HAnimJoint83;

let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.name = "l_carpometacarpal_3";
HAnimJoint87.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint87.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint87.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint87.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.name = "l_metacarpophalangeal_3";
HAnimJoint88.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint88.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint88.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint88.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint88.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint88.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint89.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint89.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint89.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint89.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint89.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint89.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint90.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint90.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint90.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint90.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint90.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint90.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint89.children = new MFNode();

HAnimJoint89.children[0] = HAnimJoint90;

HAnimJoint88.children = new MFNode();

HAnimJoint88.children[0] = HAnimJoint89;

HAnimJoint87.children = new MFNode();

HAnimJoint87.children[0] = HAnimJoint88;

HAnimJoint79.children[2] = HAnimJoint87;

let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.name = "l_carpometacarpal_4";
HAnimJoint91.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint91.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint91.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint91.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint91.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint91.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.name = "l_metacarpophalangeal_4";
HAnimJoint92.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint92.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint92.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint92.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint92.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint92.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint93.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint93.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint93.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint93.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint93.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint93.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint94.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint94.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint94.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint94.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint94.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint94.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimJoint94;

HAnimJoint92.children = new MFNode();

HAnimJoint92.children[0] = HAnimJoint93;

HAnimJoint91.children = new MFNode();

HAnimJoint91.children[0] = HAnimJoint92;

HAnimJoint79.children[3] = HAnimJoint91;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.name = "l_carpometacarpal_5";
HAnimJoint95.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint95.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint95.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint95.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint95.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint95.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.name = "l_metacarpophalangeal_5";
HAnimJoint96.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint96.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint96.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint96.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint97.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint97.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint97.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint97.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint97.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint97.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint98.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint98.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint98.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint98.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint98.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint98.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimJoint98;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimJoint97;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimJoint96;

HAnimJoint79.children[4] = HAnimJoint95;

HAnimJoint78.children = new MFNode();

HAnimJoint78.children[0] = HAnimJoint79;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimJoint78;

HAnimJoint76.children = new MFNode();

HAnimJoint76.children[0] = HAnimJoint77;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimJoint76;

HAnimJoint71.children[1] = HAnimJoint75;

let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.name = "r_sternoclavicular";
HAnimJoint99.DEF = "hanim_r_sternoclavicular";
HAnimJoint99.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint99.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint99.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint99.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint99.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "r_acromioclavicular";
HAnimJoint100.DEF = "hanim_r_acromioclavicular";
HAnimJoint100.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint100.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint100.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint100.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.name = "r_shoulder";
HAnimJoint101.DEF = "hanim_r_shoulder";
HAnimJoint101.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint101.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint101.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint101.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint101.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.name = "r_elbow";
HAnimJoint102.DEF = "hanim_r_elbow";
HAnimJoint102.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint102.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint102.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint102.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint102.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.name = "r_radiocarpal";
HAnimJoint103.DEF = "hanim_r_radiocarpal";
HAnimJoint103.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint103.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint103.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint103.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint103.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.name = "r_carpometacarpal_1";
HAnimJoint104.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint104.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint104.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint104.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint104.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint104.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.name = "r_metacarpophalangeal_1";
HAnimJoint105.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint105.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint105.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint105.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "r_carpal_interphalangeal_1";
HAnimJoint106.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint106.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint106.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint106.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint106.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint106.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint105.children = new MFNode();

HAnimJoint105.children[0] = HAnimJoint106;

HAnimJoint104.children = new MFNode();

HAnimJoint104.children[0] = HAnimJoint105;

HAnimJoint103.children = new MFNode();

HAnimJoint103.children[0] = HAnimJoint104;

let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.name = "r_carpometacarpal_2";
HAnimJoint107.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint107.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint107.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint107.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint107.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint107.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.name = "r_metacarpophalangeal_2";
HAnimJoint108.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint108.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint108.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint108.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint108.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint109.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint109.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint109.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint109.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint109.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint110.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint110.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint110.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint110.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint110.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint109.children = new MFNode();

HAnimJoint109.children[0] = HAnimJoint110;

HAnimJoint108.children = new MFNode();

HAnimJoint108.children[0] = HAnimJoint109;

HAnimJoint107.children = new MFNode();

HAnimJoint107.children[0] = HAnimJoint108;

HAnimJoint103.children[1] = HAnimJoint107;

let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.name = "r_carpometacarpal_3";
HAnimJoint111.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint111.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint111.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint111.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint111.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint111.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.name = "r_metacarpophalangeal_3";
HAnimJoint112.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint112.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint112.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint112.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint112.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint112.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint113.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint113.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint113.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint113.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint113.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint114.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint114.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint114.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint114.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint114.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint114.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimJoint114;

HAnimJoint112.children = new MFNode();

HAnimJoint112.children[0] = HAnimJoint113;

HAnimJoint111.children = new MFNode();

HAnimJoint111.children[0] = HAnimJoint112;

HAnimJoint103.children[2] = HAnimJoint111;

let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.name = "r_carpometacarpal_4";
HAnimJoint115.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint115.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint115.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint115.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint115.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint115.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.name = "r_metacarpophalangeal_4";
HAnimJoint116.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint116.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint116.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint116.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint116.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint116.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint117.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint117.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint117.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint117.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint117.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint117.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint118.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint118.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint118.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint118.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint118.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint117.children = new MFNode();

HAnimJoint117.children[0] = HAnimJoint118;

HAnimJoint116.children = new MFNode();

HAnimJoint116.children[0] = HAnimJoint117;

HAnimJoint115.children = new MFNode();

HAnimJoint115.children[0] = HAnimJoint116;

HAnimJoint103.children[3] = HAnimJoint115;

let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.name = "r_carpometacarpal_5";
HAnimJoint119.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint119.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint119.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint119.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint119.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint119.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.name = "r_metacarpophalangeal_5";
HAnimJoint120.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint120.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint120.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint120.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint120.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint121.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint121.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint121.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint121.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint121.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint121.llimit = new MFFloat(new float[0,0,0]);
let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint122.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint122.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint122.skinCoordIndex = new MFInt32(new int[0]);
HAnimJoint122.skinCoordWeight = new MFFloat(new float[0]);
HAnimJoint122.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint122.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint121.children = new MFNode();

HAnimJoint121.children[0] = HAnimJoint122;

HAnimJoint120.children = new MFNode();

HAnimJoint120.children[0] = HAnimJoint121;

HAnimJoint119.children = new MFNode();

HAnimJoint119.children[0] = HAnimJoint120;

HAnimJoint103.children[4] = HAnimJoint119;

HAnimJoint102.children = new MFNode();

HAnimJoint102.children[0] = HAnimJoint103;

HAnimJoint101.children = new MFNode();

HAnimJoint101.children[0] = HAnimJoint102;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimJoint101;

HAnimJoint99.children = new MFNode();

HAnimJoint99.children[0] = HAnimJoint100;

HAnimJoint71.children[2] = HAnimJoint99;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimJoint71;

HAnimJoint69.children = new MFNode();

HAnimJoint69.children[0] = HAnimJoint70;

HAnimJoint68.children = new MFNode();

HAnimJoint68.children[0] = HAnimJoint69;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimJoint68;

HAnimJoint66.children = new MFNode();

HAnimJoint66.children[0] = HAnimJoint67;

HAnimJoint52.children[1] = HAnimJoint66;

HAnimHumanoid43.joints[1] = HAnimJoint52;

let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[2] = HAnimJoint123;

let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[3] = HAnimJoint124;

let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.USE = "hanim_l_hip";
HAnimHumanoid43.joints[4] = HAnimJoint125;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.USE = "hanim_l_knee";
HAnimHumanoid43.joints[5] = HAnimJoint126;

let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[6] = HAnimJoint127;

let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[7] = HAnimJoint128;

let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[8] = HAnimJoint129;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[9] = HAnimJoint130;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.USE = "hanim_r_hip";
HAnimHumanoid43.joints[10] = HAnimJoint131;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.USE = "hanim_r_knee";
HAnimHumanoid43.joints[11] = HAnimJoint132;

let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[12] = HAnimJoint133;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[13] = HAnimJoint134;

let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint135;

let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint136;

let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.USE = "hanim_vl5";
HAnimHumanoid43.joints[16] = HAnimJoint137;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.USE = "hanim_vl3";
HAnimHumanoid43.joints[17] = HAnimJoint138;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.USE = "hanim_vl1";
HAnimHumanoid43.joints[18] = HAnimJoint139;

let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.USE = "hanim_vt10";
HAnimHumanoid43.joints[19] = HAnimJoint140;

let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.USE = "hanim_vt6";
HAnimHumanoid43.joints[20] = HAnimJoint141;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.USE = "hanim_vt1";
HAnimHumanoid43.joints[21] = HAnimJoint142;

let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.USE = "hanim_vc4";
HAnimHumanoid43.joints[22] = HAnimJoint143;

let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.USE = "hanim_vc2";
HAnimHumanoid43.joints[23] = HAnimJoint144;

let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.USE = "hanim_skullbase";
HAnimHumanoid43.joints[24] = HAnimJoint145;

let HAnimJoint146 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint146.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[25] = HAnimJoint146;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[26] = HAnimJoint147;

let HAnimJoint148 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint148.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[27] = HAnimJoint148;

let HAnimJoint149 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint149.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[28] = HAnimJoint149;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[29] = HAnimJoint150;

let HAnimJoint151 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint151.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[30] = HAnimJoint151;

let HAnimJoint152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint152.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[31] = HAnimJoint152;

let HAnimJoint153 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint153.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[32] = HAnimJoint153;

let HAnimJoint154 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint154.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[33] = HAnimJoint154;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[34] = HAnimJoint155;

let HAnimJoint156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint156.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[35] = HAnimJoint156;

let HAnimJoint157 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint157.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[36] = HAnimJoint157;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[37] = HAnimJoint158;

let HAnimJoint159 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint159.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[38] = HAnimJoint159;

let HAnimJoint160 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint160.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[39] = HAnimJoint160;

let HAnimJoint161 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint161.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[40] = HAnimJoint161;

let HAnimJoint162 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint162.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[41] = HAnimJoint162;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[42] = HAnimJoint163;

let HAnimJoint164 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint164.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[43] = HAnimJoint164;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[44] = HAnimJoint165;

let HAnimJoint166 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint166.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[45] = HAnimJoint166;

let HAnimJoint167 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint167.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[46] = HAnimJoint167;

let HAnimJoint168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint168.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[47] = HAnimJoint168;

let HAnimJoint169 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint169.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[48] = HAnimJoint169;

let HAnimJoint170 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint170.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[49] = HAnimJoint170;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[50] = HAnimJoint171;

let HAnimJoint172 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint172.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[51] = HAnimJoint172;

let HAnimJoint173 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint173.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[52] = HAnimJoint173;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[53] = HAnimJoint174;

let HAnimJoint175 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint175.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[54] = HAnimJoint175;

let HAnimJoint176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint176.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[55] = HAnimJoint176;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[56] = HAnimJoint177;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[57] = HAnimJoint178;

let HAnimJoint179 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint179.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[58] = HAnimJoint179;

let HAnimJoint180 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint180.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[59] = HAnimJoint180;

let HAnimJoint181 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint181.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[60] = HAnimJoint181;

let HAnimJoint182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint182.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[61] = HAnimJoint182;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[62] = HAnimJoint183;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[63] = HAnimJoint184;

let HAnimJoint185 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint185.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[64] = HAnimJoint185;

let HAnimJoint186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint186.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[65] = HAnimJoint186;

let HAnimJoint187 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint187.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[66] = HAnimJoint187;

let HAnimJoint188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint188.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[67] = HAnimJoint188;

let HAnimJoint189 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint189.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[68] = HAnimJoint189;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[69] = HAnimJoint190;

let HAnimJoint191 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint191.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[70] = HAnimJoint191;

let HAnimJoint192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint192.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[71] = HAnimJoint192;

let HAnimJoint193 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint193.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[72] = HAnimJoint193;

browser.currentScene.children[4] = HAnimHumanoid43;

